"""Compact per-function table context: for each function that references descriptors, print the
lines around each lookup (with variable names substituted) and a one-line summary of each table.
usage: table_context.py [fn ...]   (default: all) -> stdout"""
import re, os, sys, glob, json
H = os.path.dirname(os.path.abspath(__file__)); ROOT = os.path.dirname(H)
sys.path.insert(0, H)
from digest import sub, tsum
CA = json.load(open(f'{ROOT}/evidence/callargs.json'))


def ctx(path, before=2, after=2):
    L = open(path).read().split('\n')
    keep = set()
    for i, l in enumerate(L):
        if 'T_0' in l:
            keep.update(range(max(0, i - before), min(len(L), i + after + 1)))
    out = []; last = -2
    for i in sorted(keep):
        if i != last + 1:
            out.append('   ...')
        out.append(f'{i+1:4d} ' + sub(L[i]))
        last = i
    ds = sorted({int(x, 16) for x in re.findall(r'T_([0-9A-F]{6})', '\n'.join(L))})
    return out, ds


if __name__ == '__main__':
    fns = [f'{ROOT}/cdump/{int(a,16):08x}.c' for a in sys.argv[1:]] or sorted(glob.glob(f'{ROOT}/cdump/*.c'))
    for p in fns:
        out, ds = ctx(p)
        if not ds:
            continue
        sig = open(p).read().split('\n')
        sig = next((l for l in sig if '(' in l and not l.startswith('/*')), '')
        fn = os.path.basename(p)[:-2]
        print(f'### {fn}  {sig.strip()[:150]}')
        for caller, args in [x for x in CA.get(fn, []) if x[0] != fn][:4]:
            print(f'   <= {caller}: ' + sub(', '.join(f'p{i+1}={a}' for i, a in enumerate(args)))[:400])
        print('\n'.join(out))
        for d in ds:
            print('  # ' + tsum(d))
        print()
