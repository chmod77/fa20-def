"""Index RAM writes/reads in cdump/*.c.  usage: ramindex.py build | w ADDR | r ADDR
w: print every assignment statement to RAM var ADDR (function, line)."""
import re, os, sys, json, glob, collections
H = os.path.dirname(os.path.abspath(__file__)); ROOT = os.path.dirname(H)
IDX = f'{ROOT}/evidence/ram-index.json'
W = re.compile(r'(?:\*\([^)]*\))?_?DAT_(f{3}[0-9a-f]{5})\s*(?:\[[^\]]*\])?\s*([-+*/|&^]?=)(?!=)')
R = re.compile(r'_?DAT_(f{3}[0-9a-f]{5})')


LAB = {}
for _l in open(f'{ROOT}/evidence/ghidra-labels.tsv'):
    _a, _n = _l.split()
    if _n.startswith('v_'):
        LAB[_n] = '%08x' % int(_a, 16)
WL = re.compile(r'\b_?(v_\w+)\s*([-+*/|&^]?=)(?!=)')
RL = re.compile(r'\b_?(v_\w+)')


def build():
    w = collections.defaultdict(list); r = collections.defaultdict(set)
    for p in glob.glob(f'{ROOT}/cdump/*.c'):
        fn = os.path.basename(p)[:-2]
        for i, line in enumerate(open(p)):
            ws = set()
            for m in W.finditer(line):
                w[m.group(1)].append((fn, i + 1, line.strip()[:200])); ws.add(m.group(1))
            for m in WL.finditer(line):
                if m.group(1) in LAB:
                    w[LAB[m.group(1)]].append((fn, i + 1, line.strip()[:200])); ws.add(LAB[m.group(1)])
            for m in RL.finditer(line):
                if m.group(1) in LAB and LAB[m.group(1)] not in ws:
                    r[LAB[m.group(1)]].add(fn)
            for m in R.finditer(line):
                if m.group(1) not in ws:
                    r[m.group(1)].add(fn)
    json.dump(dict(w=w, r={k: sorted(v) for k, v in r.items()}), open(IDX, 'w'))


if __name__ == '__main__':
    if sys.argv[1] == 'build':
        build(); sys.exit()
    d = json.load(open(IDX))
    for a in sys.argv[2:]:
        a = a.lower().replace('0x', '').zfill(8)
        if sys.argv[1] == 'w':
            for fn, ln, s in d['w'].get(a, []):
                print(f'{a} W {fn}:{ln}  {s}')
        else:
            print(a, 'R', ' '.join(d['r'].get(a, [])))
