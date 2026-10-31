"""Instruction-level RAM store/load resolver (lead generator; confirm in cdump/).
Linear pass per function over capstone SH-2A decode, tracking registers that hold constants
(pc-relative literals, mov #imm, movi20, add #imm, mov Rm,Rn, GBR from gbr-map / ldc).  Resolves
mov.{b,w,l} stores/loads to @Rn, @(disp,Rn), @(disp,gbr), @-Rn.  State is cleared at branch targets.
Output evidence/mem-access.tsv: addr  kind(W/R)  width  insn_addr  function"""
import os, sys, re, struct, csv, collections
from capstone import Cs, CS_ARCH_SH, CS_MODE_SH2A, CS_MODE_BIG_ENDIAN
H = os.path.dirname(os.path.abspath(__file__)); ROOT = os.path.dirname(H)
rom = open(f'{ROOT}/../../roms/LF6A401A_T893ESJ92045C7207-20261024-072556.bin', 'rb').read()
md = Cs(CS_ARCH_SH, CS_MODE_SH2A | CS_MODE_BIG_ENDIAN)
import os as _os
FT = '/tmp/functions_all.tsv' if _os.path.exists('/tmp/functions_all.tsv') else f'{ROOT}/evidence/functions.tsv'
fns = [(int(a, 16), int(n)) for a, n in (l.split() for l in open(FT))]
gbr = {int(a, 16): int(v, 16) for a, v in (l.split() for l in open(f'{ROOT}/evidence/gbr-map.tsv'))}
# branch targets
targets = set()
W = {'b': 1, 'w': 2, 'l': 4}
out = open(f'{ROOT}/evidence/mem-access.tsv', 'w')
out.write('addr\tkind\twidth\tinsn\tfunction\n')
REG = re.compile(r'^r(\d+)$')


def u32(x):
    return x & 0xffffffff


n = 0
for fa, size in fns:
    code = rom[fa:fa + max(size, 2) + 2]
    insns = list(md.disasm(code, fa))
    tg = set()
    for i in insns:
        if i.mnemonic.rstrip('/s') in ('bt', 'bf', 'bra', 'bt/s', 'bf/s') or i.mnemonic in ('bt/s', 'bf/s', 'bra'):
            try:
                tg.add(int(i.op_str.split(',')[-1].strip(), 16))
            except ValueError:
                pass
    R = {}
    G = gbr.get(fa)
    for i in insns:
        if i.address in tg:
            R = {}
        m, ops = i.mnemonic, [o.strip() for o in re.split(r',(?![^(]*\))', i.op_str)] if i.op_str else []
        try:
            if m in ('mov.l', 'mov.w') and len(ops) == 2 and ops[0].startswith('0x') and REG.match(ops[1]):
                ea = int(ops[0], 16)
                w = 4 if m == 'mov.l' else 2
                v = struct.unpack('>I' if w == 4 else '>h', rom[ea:ea + w])[0]
                R[ops[1]] = u32(v); continue
            if m == 'mov' and ops[0].startswith('#') and REG.match(ops[1]):
                R[ops[1]] = u32(int(ops[0][1:], 0)); continue
            if m in ('movi20', 'movi20s') and REG.match(ops[1]):
                v = int(ops[0][1:], 0)
                if m == 'movi20s':
                    v <<= 8
                R[ops[1]] = u32(v); continue
            if m == 'mov' and REG.match(ops[0]) and REG.match(ops[1]):
                if ops[0] in R:
                    R[ops[1]] = R[ops[0]]
                else:
                    R.pop(ops[1], None)
                continue
            if m == 'add' and ops[0].startswith('#') and ops[1] in R:
                R[ops[1]] = u32(R[ops[1]] + int(ops[0][1:], 0)); continue
            if m == 'ldc' and ops[1] == 'gbr':
                G = R.get(ops[0]); continue
            if m.startswith('mov.') and m[-1] in W and len(ops) == 2:
                w = W[m[-1]]
                for k, op in (('W', ops[1]), ('R', ops[0])):
                    a = None
                    mm = re.fullmatch(r'@r(\d+)', op) or re.fullmatch(r'@-r(\d+)', op) or re.fullmatch(r'@r(\d+)\+', op)
                    if mm and f'r{mm.group(1)}' in R:
                        a = R[f'r{mm.group(1)}'] - (w if op.startswith('@-') else 0)
                    mm = re.fullmatch(r'@\((0x[0-9a-f]+|\d+),\s*r(\d+)\)', op)
                    if mm and f'r{mm.group(2)}' in R:
                        a = R[f'r{mm.group(2)}'] + int(mm.group(1), 0)
                    mm = re.fullmatch(r'@\(r0,\s*r(\d+)\)', op)
                    if mm and f'r{mm.group(1)}' in R and 'r0' not in R:
                        b = R[f'r{mm.group(1)}']
                        if u32(b) >= 0xFFFE0000:
                            out.write(f'{u32(b):08X}\t{k}X\t{w}\t{i.address:06x}\t{fa:06x}\n'); n += 1
                    mm = re.fullmatch(r'@\((0x[0-9a-f]+|\d+),\s*gbr\)', op)
                    if mm and G is not None:
                        a = G + int(mm.group(1), 0)
                    if a is not None and u32(a) >= 0xFFFE0000:
                        out.write(f'{u32(a):08X}\t{k}\t{w}\t{i.address:06x}\t{fa:06x}\n'); n += 1
                # destination register of a load is now unknown
                if REG.match(ops[1]):
                    R.pop(ops[1], None)
                continue
            if m in ('jsr', 'bsr', 'bsrf', 'jsr/n'):
                for r in ('r0', 'r1', 'r2', 'r3', 'r4', 'r5', 'r6', 'r7'):
                    R.pop(r, None)
                continue
            # any other instruction: invalidate its last register operand (destination)
            if ops and REG.match(ops[-1]):
                R.pop(ops[-1], None)
            if m in ('movt', 'sts', 'stc') and ops and REG.match(ops[-1]):
                R.pop(ops[-1], None)
        except (ValueError, IndexError, struct.error):
            pass
print('resolved accesses', n)
