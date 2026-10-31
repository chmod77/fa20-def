"""Annotated digest of decompiled functions.
usage: digest.py <fn-hex> [...]   prints C with known RAM-variable names substituted and, after the
code, a summary of every table descriptor referenced (dims, axis raw range, data range, axis inputs)."""
import sys, re, json, os, csv, collections
H = os.path.dirname(os.path.abspath(__file__)); ROOT = os.path.dirname(H)
sys.path.insert(0, H)
from variables import V
try:
    from variables import V2
except ImportError:
    V2 = {}
VV = dict(V); VV.update(V2)
cal = {c['descriptor']: c for c in json.load(open(f'{ROOT}/evidence/calibrations.json'))}
inputs = collections.defaultdict(dict)
for r in csv.DictReader(open(f'{ROOT}/evidence/lookup-input-origins.tsv'), delimiter='\t'):
    inputs[int(r['descriptor'], 16)][r['input']] = r['origins'][:80]
SEM = {}
p = f'{ROOT}/evidence/semantics.json'
if os.path.exists(p):
    SEM = {int(k, 16): v for k, v in json.load(open(p)).items()}


def vname(a):
    a = int(a, 16)
    if a in VV:
        return '{' + VV[a][0] + '}'
    return None


def sub(c):
    def rep(m):
        n = vname(m.group(2))
        return (n or m.group(0))
    c = re.sub(r'(_?DAT_)([0-9a-f]{8})', rep, c)
    return c


def tsum(d):
    c = cal.get(d)
    if not c:
        return f'T_{d:06X}: (not in catalogue)'
    ax = '; '.join(f"ax{i}[{a['storage']} {a['raw_values'][0]}..{a['raw_values'][-1]} n={len(a['raw_values'])}]" for i, a in enumerate(c['axes']))
    ins = inputs.get(d, {})
    s = f"T_{d:06X}: {'x'.join(map(str,c['dimensions']))} {c['data_storage']} data {c['data_min']}..{c['data_max']} | {ax} | in: " + ' / '.join(f"{k}:{v}" for k, v in sorted(ins.items()))
    if d in SEM:
        s += f"\n    = {SEM[d].get('name')}"
    return s


def digest(fn):
    path = f'{ROOT}/cdump/{fn:08x}.c'
    if not os.path.exists(path):
        return f'// no C for {fn:08x}'
    c = open(path).read()
    out = sub(c)
    ds = sorted({int(x, 16) for x in re.findall(r'T_([0-9A-F]{6})', c)})
    out += '\n// tables:\n' + '\n'.join('//  ' + tsum(d) for d in ds)
    return out


if __name__ == '__main__':
    for a in sys.argv[1:]:
        print(digest(int(a, 16)))
