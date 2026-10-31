"""Derive proven RAM variables that are pure copies of proven variables.
X is accepted when every C assignment to X in cdump/ is either a constant (initialisation) or a copy of the same proven
variable Y (casts and full-width masks allowed), and every instruction-level writer of X (evidence/mem-access.tsv) is a
function containing such an assignment.  Iterates to a fixpoint.  Output evidence/derived-copies.json
{X: [name, units, expr, to_byte, evidence]} -- imported by variables.py (V3)."""
import os, re, glob, json, sys, collections
H = os.path.dirname(os.path.abspath(__file__)); ROOT = os.path.dirname(H); sys.path.insert(0, H)
os.environ['NO_V3'] = '1'
import variables as VV
known = {k: v for k, v in {**VV.V, **VV.V2}.items()}
lab = {}
for l in open(f'{ROOT}/evidence/ghidra-labels.tsv'):
    a, n = l.split(); lab[n] = int(a, 16)
writers = collections.defaultdict(set)
for l in list(open(f'{ROOT}/evidence/mem-access.tsv'))[1:]:
    a, k, w, ia, fn = l.split()
    if k.startswith('W'):
        writers[int(a, 16)].add(fn.zfill(8))
asg = collections.defaultdict(list)   # X -> [(fn, rhs)]
TOK = r'_?(DAT_f{3}[0-9a-f]{5}|v_\w+)'
for p in glob.glob(f'{ROOT}/cdump/*.c'):
    fn = os.path.basename(p)[:-2]; s = open(p).read()
    for m in re.finditer(r'(?<![\w*.&])' + TOK + r'\s*=(?!=)\s*([^;]+);', s):
        t = m.group(1)
        x = int(t[4:], 16) if t.startswith('DAT_') else lab.get(t)
        if x is not None:
            asg[x].append((fn, m.group(2).strip()))


def addr_of(rhs):
    r = re.fullmatch(r'(?:\(\w+\)\s*)*\(?' + TOK + r'(?:\s*&\s*0xff(?:ff)?)?\)?', rhs)
    if not r:
        return None
    t = r.group(1)
    return int(t[4:], 16) if t.startswith('DAT_') else lab.get(t)


out = {}
changed = True
while changed:
    changed = False
    for x, lst in asg.items():
        if x in known or x < 0xFFFE0000:
            continue
        srcs = set(); fns = set(); ok = True
        for fn, rhs in lst:
            if re.fullmatch(r'-?(0x[0-9a-f]+|\d+)', rhs):
                continue
            y = addr_of(rhs)
            if y is None or y not in known:
                ok = False; break
            srcs.add(y); fns.add(fn)
        if not ok or len(srcs) != 1:
            continue
        initf = {fn for fn, rhs in lst if re.fullmatch(r'-?(0x[0-9a-f]+|\d+)', rhs)}
        if not writers.get(x, set()) <= (fns | initf):
            continue
        y = srcs.pop(); nm, u, e, tb, ev = known[y][:5]
        known[x] = (f'{nm} (copy)', u, e, tb, f'copy of FFFF{y & 0xffff:04X}/{y:08X} in ' + ','.join(sorted(fns)))
        out[f'{x:08X}'] = list(known[x]); changed = True
json.dump(out, open(f'{ROOT}/evidence/derived-copies.json', 'w'), indent=1)
print('derived copies', len(out))
for k, v in list(out.items())[:30]:
    print(k, v[0], v[4][:60])
