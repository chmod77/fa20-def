"""Calibration scalar candidates: data loads (mov.b/w/l @Rn, @(disp,Rn), fmov.s @Rn) through a register holding a constant ROM
address in the calibration window 0x8000..0x2B000 that is not part of any recovered table/axis/descriptor.  Literal-pool loads
(mov.x @(disp,PC)) are code constants and are excluded.  Output evidence/scalar-reads.tsv: addr width value function insn."""
import os, re, struct, json, collections
from capstone import Cs, CS_ARCH_SH, CS_MODE_SH2A, CS_MODE_BIG_ENDIAN
H = os.path.dirname(os.path.abspath(__file__)); ROOT = os.path.dirname(H)
rom = open(f'{ROOT}/../../roms/LF6A401A_T893ESJ92045C7207-20261024-072556.bin', 'rb').read()
md = Cs(CS_ARCH_SH, CS_MODE_SH2A | CS_MODE_BIG_ENDIAN)
FT = '/tmp/functions_all.tsv' if os.path.exists('/tmp/functions_all.tsv') else f'{ROOT}/evidence/functions.tsv'
fns = [(int(a, 16), int(n)) for a, n in (l.split() for l in open(FT))]
covered = set()
for r in json.load(open(f'{ROOT}/evidence/calibrations.json')):
    w = int(re.search(r'\d+', r['data_storage'])[0]) // 8
    covered.update(range(r['data_address'], r['data_address'] + r['data_count'] * w))
    for a in r['axes']:
        aw = int(re.search(r'\d+', a['storage'])[0]) // 8
        covered.update(range(a['address'], a['address'] + len(a['raw_values']) * aw))
REG = re.compile(r'^r(\d+)$'); SPLIT = re.compile(r',(?![^(]*\))')
W = {'b': 1, 'w': 2, 'l': 4}


def disasm(a, b):
    out = []
    while a < b:
        if struct.unpack('>H', rom[a:a + 2])[0] & 0xF00F == 0x3001:
            a += 4; continue
        g = list(md.disasm(rom[a:a + 4], a, count=1))
        if g: out.append(g[0]); a += g[0].size
        else: a += 2
    return out


rows = collections.defaultdict(set)
for fa, size in fns:
    R = {}
    for i in disasm(fa, fa + max(size, 2) + 2):
        m = i.mnemonic; ops = [o.strip() for o in SPLIT.split(i.op_str)] if i.op_str else []
        try:
            if m in ('mov.l', 'mov.w') and len(ops) == 2 and ops[0].startswith('0x') and REG.match(ops[1]):
                ea = int(ops[0], 16)
                R[ops[1]] = struct.unpack('>I', rom[ea:ea + 4])[0] if m == 'mov.l' else struct.unpack('>h', rom[ea:ea + 2])[0] & 0xffffffff
                continue
            if m in ('movi20', 'movi20s') and REG.match(ops[1]):
                v = int(ops[0][1:], 0); R[ops[1]] = (v << 8 if m == 'movi20s' else v) & 0xffffffff; continue
            if m == 'mov' and REG.match(ops[0]) and REG.match(ops[1]):
                if ops[0] in R: R[ops[1]] = R[ops[0]]
                else: R.pop(ops[1], None)
                continue
            if m == 'add' and ops[0].startswith('#') and ops[1] in R:
                R[ops[1]] = (R[ops[1]] + int(ops[0][1:], 0)) & 0xffffffff; continue
            if (m.startswith('mov.') and m[-1] in W or m == 'fmov.s') and len(ops) == 2:
                w = 4 if m == 'fmov.s' else W[m[-1]]
                a = None
                mm = re.fullmatch(r'@r(\d+)\+?', ops[0])
                if mm and f'r{mm.group(1)}' in R: a = R[f'r{mm.group(1)}']
                mm = re.fullmatch(r'@\((0x[0-9a-f]+|\d+),\s*r(\d+)\)', ops[0])
                if mm and f'r{mm.group(2)}' in R: a = R[f'r{mm.group(2)}'] + int(mm.group(1), 0)
                if a is not None and 0x8000 <= a < 0x2B000 and a not in covered:
                    v = int.from_bytes(rom[a:a + w], 'big')
                    rows[(a, w, v)].add(f'{fa:06x}')
                if REG.match(ops[-1]) or ops[-1].startswith('fr'): R.pop(ops[-1], None)
                continue
            if m in ('jsr', 'bsr', 'jsr/n'):
                for r in ('r0', 'r1', 'r2', 'r3', 'r4', 'r5', 'r6', 'r7'): R.pop(r, None)
                continue
            if ops and REG.match(ops[-1]): R.pop(ops[-1], None)
        except (ValueError, IndexError, struct.error):
            pass
with open(f'{ROOT}/evidence/scalar-reads.tsv', 'w') as f:
    f.write('addr\twidth\tvalue\tfunctions\n')
    for (a, w, v), fs in sorted(rows.items()):
        f.write(f'{a:06X}\t{w}\t{v:X}\t{",".join(sorted(fs))}\n')
print('scalar candidates', len(rows))
