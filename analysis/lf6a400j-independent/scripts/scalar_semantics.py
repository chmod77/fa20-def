"""Scalar calibrations proven by comparison with a proven RAM variable.
For each scalar read (evidence/scalar-reads.tsv: ROM address A, width w, value v, functions F), look in cdump/F.c (ROM is read-only,
so Ghidra folds the read into the constant v) for a comparison  VAR op v  /  v op VAR  where VAR is a proven variable
(variables.py V/V2, C name DAT_ffffxxxx or v_ label).  Accepted only if: v > 0x7F (not a mov #imm), the value v does not occur
as a literal-pool constant in F (so the folded constant can only come from the scalar read), and exactly one scalar read in F
has value v.  The scalar then carries VAR's scaling.  Output evidence/scalar-semantics.json."""
import os, re, json, struct, collections, sys
from capstone import Cs, CS_ARCH_SH, CS_MODE_SH2A, CS_MODE_BIG_ENDIAN
H = os.path.dirname(os.path.abspath(__file__)); ROOT = os.path.dirname(H); sys.path.insert(0, H)
import variables as VV
rom = open(f'{ROOT}/../../roms/LF6A401A_T893ESJ92045C7207-20261024-072556.bin', 'rb').read()
md = Cs(CS_ARCH_SH, CS_MODE_SH2A | CS_MODE_BIG_ENDIAN)
known = {k: v for k, v in {**VV.V, **VV.V2}.items()}
lab = {}
for l in open(f'{ROOT}/evidence/ghidra-labels.tsv'):
    a, n = l.split(); lab[n] = int(a, 16)
FT = '/tmp/functions_all.tsv' if os.path.exists('/tmp/functions_all.tsv') else f'{ROOT}/evidence/functions.tsv'
fsize = {int(a, 16): int(n) for a, n in (l.split() for l in open(FT))}


def litpool_values(fa):
    vals = set(); a = fa; b = fa + fsize.get(fa, 0) + 2
    while a < b:
        if struct.unpack('>H', rom[a:a + 2])[0] & 0xF00F == 0x3001:
            a += 4; continue
        g = list(md.disasm(rom[a:a + 4], a, count=1))
        if not g: a += 2; continue
        i = g[0]; a += i.size
        if i.mnemonic in ('mov.w', 'mov.l') and i.op_str.startswith('0x'):
            ea = int(i.op_str.split(',')[0], 16)
            if i.mnemonic == 'mov.w':
                v = struct.unpack('>H', rom[ea:ea + 2])[0]; vals |= {v, v - 0x10000 if v & 0x8000 else v}
            else:
                vals.add(struct.unpack('>I', rom[ea:ea + 4])[0])
        if i.mnemonic in ('movi20', 'movi20s'):
            vals.add(int(i.op_str.split(',')[0][1:], 0))
    return vals


reads = collections.defaultdict(list)
for l in list(open(f'{ROOT}/evidence/scalar-reads.tsv'))[1:]:
    a, w, v, fs = l.split()
    for f in fs.split(','):
        reads[f].append((int(a, 16), int(w), int(v, 16)))
VARRE = r'\(?(?:\(\w+\)\s*)?\(?_?(DAT_f{3}[0-9a-f]{5}|v_\w+|param_\d+)(?:\s*&\s*0xff(?:ff)?)?\)?'
CA = json.load(open(f'{ROOT}/evidence/callargs.json'))

SAV = collections.defaultdict(set)
for _l in list(open(f'{ROOT}/evidence/stack-args.tsv'))[1:]:
    _ce, _cr, _ia, _k, _v = _l.split()
    if _v.startswith('V'):
        SAV[(_ce.zfill(8), _cr.zfill(8), int(_k))].add(_v.split(':')[1])


def param_var(fn, k):
    """proven variable passed as param_k at every call site of fn (None if any differs/unknown)"""
    res = set()
    for caller, args in CA.get(fn, []):
        if caller == fn:
            continue
        if k > len(args):
            iv = SAV.get((fn, caller, k))
            if not iv or len(iv) != 1:
                return None
            res.add(int(next(iter(iv)), 16)); continue
        m = re.fullmatch(r'(?:\(\w+\)\s*)*_?(DAT_f{3}[0-9a-f]{5}|v_\w+)', args[k - 1].strip())
        if not m:
            return None
        t = m.group(1)
        res.add(int(t[4:], 16) if t.startswith('DAT_') else lab.get(t))
    return res.pop() if len(res) == 1 else None

out = {}
for f, lst in reads.items():
    p = f'{ROOT}/cdump/{f.zfill(8)}.c'
    if not os.path.exists(p):
        continue
    s = open(p).read(); lp = None
    cnt = collections.Counter(v for _, _, v in lst)
    for a, w, v in lst:
        if v <= 0x7F or cnt[v] != 1 or (w == 4 and v > 0xFFFF):
            continue
        if lp is None:
            lp = litpool_values(int(f, 16))
        if v in lp:
            continue
        hx = f'0x{v:x}'
        for m in re.finditer(VARRE + r'\s*(<=?|>=?)\s*' + re.escape(hx) + r'\b|' + re.escape(hx) + r'\s*(<=?|>=?)\s*' + VARRE, s):
            tok = m.group(1) or m.group(4)
            addr = int(tok[4:], 16) if tok.startswith('DAT_') else (param_var(f.zfill(8), int(tok[6:])) if tok.startswith('param_') else lab.get(tok))
            if addr in known:
                nm, u, ex, tb, ev = known[addr][:5]
                out.setdefault(f'{a:06X}', dict(width=w, value=v, var=f'{addr:08X}', var_name=nm, units=u, expr=ex, to_byte=tb,
                                                function=f, context=m.group(0)))
                break
json.dump(out, open(f'{ROOT}/evidence/scalar-semantics.json', 'w'), indent=1)
print('proven scalars', len(out))
for k, v in list(out.items())[:40]:
    print(k, v['width'], hex(v['value']), v['var_name'], v['units'], v['function'], v['context'])
