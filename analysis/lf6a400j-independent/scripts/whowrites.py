"""Show how a RAM variable is produced: direct assignments, and out-parameter writes
(caller passes &DAT_var as arg N; callee assigns *param_N).  usage: whowrites.py ADDR [ADDR ...]"""
import re, os, sys, json
H = os.path.dirname(os.path.abspath(__file__)); ROOT = os.path.dirname(H)
sys.path.insert(0, H)
from digest import sub
CA = json.load(open(f'{ROOT}/evidence/callargs.json'))
IDX = json.load(open(f'{ROOT}/evidence/ram-index.json'))
LAB = {}
for l in open(f'{ROOT}/evidence/ghidra-labels.tsv'):
    a, n = l.split(); LAB[int(a, 16)] = n


def src(fn):
    p = f'{ROOT}/cdump/{fn}.c'
    return open(p).read() if os.path.exists(p) else ''


for a in sys.argv[1:]:
    a = a.lower().replace('0x', '').zfill(8)
    names = {f'&DAT_{a}', f'&_DAT_{a}'}
    if int(a, 16) in LAB:
        names.add('&' + LAB[int(a, 16)]); names.add('&_' + LAB[int(a, 16)])
    print(f'===== {a}')
    for fn, ln, s in IDX['w'].get(a, []):
        print(f'  direct {fn}:{ln}: {sub(s)}')
    for callee, sites in CA.items():
        for caller, args in sites:
            for i, x in enumerate(args):
                if x.strip() in names:
                    s = src(callee)
                    hits = [sub(l.strip()) for l in s.split('\n') if re.search(rf'\*\s*\(?\w*\s*\*?\)?\s*param_{i+1}\b\s*=(?!=)|\bparam_{i+1}\s*\[\s*0\s*\]\s*=(?!=)|\*param_{i+1}\s*=(?!=)', l)]
                    print(f'  out-param: {caller} -> FUN_{callee}(arg{i+1})')
                    for h in hits[:6]:
                        print(f'      {h[:220]}')
