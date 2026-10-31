"""Call-site argument resolver (instruction level).  For every jsr/bsr whose target is a known constant, record
the constant values of r4..r7 (param_1..4) and of the words pushed with mov.l Rn,@-r15 since the previous call
(param_5.. in reverse push order, SH calling convention).  Register constants are tracked as in store_scan.py
(pc-relative literals, mov #imm, movi20, add #imm, mov Rm,Rn, GBR-relative mova-free forms), plus stack slots
written with mov.l Rn,@(disp,r15)/@(r0,r15) and read back (offsets adjusted for pushes).
State is cleared at branch targets.  Output evidence/stack-args.tsv: callee caller insn param value(hex)."""
import os, re, struct
from capstone import Cs, CS_ARCH_SH, CS_MODE_SH2A, CS_MODE_BIG_ENDIAN
H = os.path.dirname(os.path.abspath(__file__)); ROOT = os.path.dirname(H)
rom = open(f'{ROOT}/../../roms/LF6A401A_T893ESJ92045C7207-20261024-072556.bin', 'rb').read()
md = Cs(CS_ARCH_SH, CS_MODE_SH2A | CS_MODE_BIG_ENDIAN)
FT = '/tmp/functions_all.tsv' if os.path.exists('/tmp/functions_all.tsv') else f'{ROOT}/evidence/functions.tsv'
fns = [(int(a, 16), int(n)) for a, n in (l.split() for l in open(FT))]
REG = re.compile(r'^r(\d+)$')
GBR = {int(a, 16): int(v, 16) for a, v in (l.split() for l in open(f'{ROOT}/evidence/gbr-map.tsv'))}
WID = {'b': 1, 'w': 2, 'l': 4}
SPLIT = re.compile(r',(?![^(]*\))')


def u32(x):
    return x & 0xffffffff


def disasm(a, b):
    """one instruction at a time; SH-2A 32-bit 0x3nm1 forms (crash this capstone build) are skipped as 4 opaque bytes"""
    out = []
    while a < b:
        w = struct.unpack('>H', rom[a:a + 2])[0]
        if w & 0xF00F == 0x3001:
            a += 4; continue
        got = list(md.disasm(rom[a:a + 4], a, count=1))
        if got:
            out.append(got[0]); a += got[0].size
        else:
            a += 2
    return out


class _Next(Exception):
    pass


rows = []


def emit(pend, R, pushes):
    tgt, fa, a = pend
    for k, r in enumerate(('r4', 'r5', 'r6', 'r7')):
        if r in R: rows.append((tgt, fa, a, k + 1, R[r]))
    for k, v in enumerate(reversed(pushes)):
        if v is not None: rows.append((tgt, fa, a, k + 5, v))

_starts = sorted(a for a, _ in fns)
END = {}   # recorded sizes cover only part of large functions: scan up to the next function start (capped at 16 KiB)
for _k, (_a, _n) in enumerate(sorted(fns)):
    _nx = _starts[_k + 1] if _k + 1 < len(_starts) else _a + _n + 2
    END[_a] = max(_a + max(_n, 2) + 2, min(_nx, _a + 0x4000))
for fa, size in fns:
    insns = disasm(fa, END[fa])
    tg = set()
    for i in insns:
        if i.mnemonic in ('bt', 'bf', 'bra', 'bt/s', 'bf/s'):
            try:
                tg.add(int(i.op_str.split(',')[-1].strip(), 16))
            except ValueError:
                pass
    G = GBR.get(fa)
    R, pushes, sp, slots = {}, [], 0, {}   # sp = bytes pushed since entry (relative), slots[abs_off]=value
    pend = None
    for i in insns:
        if pend is not None and i.address != pend[2] + 2:
            pend = None
        if i.address in tg:
            R = {}; pushes = []
        m = i.mnemonic
        ops = [o.strip() for o in SPLIT.split(i.op_str)] if i.op_str else []
        try:
            if m in ('mov.l', 'mov.w') and len(ops) == 2 and ops[0].startswith('0x') and REG.match(ops[1]):
                ea = int(ops[0], 16)
                v = struct.unpack('>I', rom[ea:ea + 4])[0] if m == 'mov.l' else struct.unpack('>h', rom[ea:ea + 2])[0]
                R[ops[1]] = u32(v); raise _Next
            if m == 'mov' and ops[0].startswith('#') and REG.match(ops[1]):
                R[ops[1]] = u32(int(ops[0][1:], 0)); raise _Next
            if m in ('movi20', 'movi20s') and REG.match(ops[1]):
                v = int(ops[0][1:], 0); v = v << 8 if m == 'movi20s' else v
                R[ops[1]] = u32(v); raise _Next
            if m == 'mov' and REG.match(ops[0]) and REG.match(ops[1]):
                if ops[0] in R: R[ops[1]] = R[ops[0]]
                else: R.pop(ops[1], None)
                raise _Next
            if m == 'add' and ops[0].startswith('#') and ops[1] == 'r15':
                d = int(ops[0][1:], 0); sp -= d
                k = d // 4
                if k > 0: pushes = pushes[:-k] if k <= len(pushes) else []
                raise _Next
            if m == 'add' and ops[0].startswith('#') and ops[1] in R:
                if isinstance(R[ops[1]], int): R[ops[1]] = u32(R[ops[1]] + int(ops[0][1:], 0))
                else: R.pop(ops[1])
                raise _Next
            if m == 'ldc' and len(ops) == 2 and ops[1] == 'gbr':
                G = R.get(ops[0]) if isinstance(R.get(ops[0]), int) else None; raise _Next
            if m in ('extu.b', 'extu.w', 'exts.b', 'exts.w') and len(ops) == 2 and REG.match(ops[1]):
                if isinstance(R.get(ops[0]), str): R[ops[1]] = R[ops[0]]
                else: R.pop(ops[1], None)
                raise _Next
            if m in ('mov.b', 'mov.w', 'mov.l') and len(ops) == 2 and REG.match(ops[1]) and ops[0].startswith('@') and not ops[0].startswith('@-'):
                w = WID[m[-1]]; ad = None
                mm = re.fullmatch(r'@r(\d+)\+?', ops[0])
                if mm and isinstance(R.get(f'r{mm.group(1)}'), int): ad = R[f'r{mm.group(1)}']
                mm = re.fullmatch(r'@\((0x[0-9a-f]+|\d+),\s*r(\d+)\)', ops[0])
                if mm and mm.group(2) != '15' and isinstance(R.get(f'r{mm.group(2)}'), int): ad = R[f'r{mm.group(2)}'] + int(mm.group(1), 0)
                mm = re.fullmatch(r'@\((0x[0-9a-f]+|\d+),\s*gbr\)', ops[0])
                if mm and G is not None: ad = G + int(mm.group(1), 0)
                if ad is not None and u32(ad) >= 0xFFFE0000:
                    R[ops[1]] = f'V{w}:{u32(ad):08X}'; raise _Next
            if m == 'mov.l' and len(ops) == 2 and ops[1] == '@-r15' and REG.match(ops[0]):
                sp += 4; pushes.append(R.get(ops[0])); slots[sp] = R.get(ops[0]); raise _Next
            if m == 'mov.l' and len(ops) == 2 and REG.match(ops[0]):
                mm = re.fullmatch(r'@\((0x[0-9a-f]+|\d+),\s*r15\)', ops[1])
                if mm: slots[sp - int(mm.group(1), 0)] = R.get(ops[0]); raise _Next
                mm = re.fullmatch(r'@\(r0,\s*r15\)', ops[1])
                if mm and isinstance(R.get('r0'), int): slots[sp - R['r0']] = R.get(ops[0]); raise _Next
            if m == 'mov.l' and len(ops) == 2 and REG.match(ops[1]):
                mm = re.fullmatch(r'@\((0x[0-9a-f]+|\d+),\s*r15\)', ops[0])
                v = None; hit = False
                if mm: v = slots.get(sp - int(mm.group(1), 0)); hit = True
                mm = re.fullmatch(r'@\(r0,\s*r15\)', ops[0])
                if mm and isinstance(R.get('r0'), int): v = slots.get(sp - R['r0']); hit = True
                if hit:
                    if v is None: R.pop(ops[1], None)
                    else: R[ops[1]] = v
                    raise _Next
            if m in ('jsr', 'bsr', 'jsr/n', 'bsrf'):
                tgt = None
                if m.startswith('jsr'):
                    rr = ops[0].lstrip('@'); tgt = R.get(rr)
                elif m == 'bsr':
                    tgt = int(ops[0], 16)
                # delay slot handled approximately: args are set before the jsr, except a mov to r4..r7 in the slot
                pend = (tgt, fa, i.address) if tgt is not None and tgt < 0x200000 else None
                if pend is None:
                    for r in ('r0', 'r1', 'r2', 'r3', 'r4', 'r5', 'r6', 'r7'):
                        R.pop(r, None)
                raise _Next
            if m.startswith('mov.') and len(ops) == 2 and REG.match(ops[1]):
                R.pop(ops[1], None); raise _Next
            if ops and REG.match(ops[-1]):
                R.pop(ops[-1], None)
        except (_Next, ValueError, IndexError, struct.error):
            pass
        if pend is not None and i.address == pend[2] + 2:
            emit(pend, R, pushes); pend = None
            for r in ('r0', 'r1', 'r2', 'r3', 'r4', 'r5', 'r6', 'r7'):
                R.pop(r, None)
            pushes = []

with open(f'{ROOT}/evidence/stack-args.tsv', 'w') as f:
    f.write('callee\tcaller\tinsn\tparam\tvalue\n')
    for t, c, a, k, v in rows:
        f.write(f'{t:06x}\t{c:06x}\t{a:06x}\t{k}\t{v if isinstance(v, str) else format(v, "08X")}\n')
print('call-site constant args', len(rows))
