"""Resolve lookup-call axis inputs from the decompiled C (cdump/) to RAM variables.
For every call  LK_xxxxxx((uint)&T_dddddd, a1[, a2])  the argument expressions are reduced:
  casts stripped; DAT_/label -> RAM var; param_N -> every caller's N-th argument (recursive);
  local with exactly one assignment in the function -> its right-hand side (recursive).
A result is accepted only if the reduced expression is a bare RAM variable (pass-through), or the
same variable at every call site.  Output: evidence/c-input-origins.tsv
  descriptor  input(1|2)  var|''  detail"""
import re, os, sys, glob, json, collections
H = os.path.dirname(os.path.abspath(__file__)); ROOT = os.path.dirname(H)
sys.path.insert(0, H)
from callargs import split_args
CA = json.load(open(f'{ROOT}/evidence/callargs.json'))
LAB = {}
for l in open(f'{ROOT}/evidence/ghidra-labels.tsv'):
    a, n = l.split(); LAB[n] = int(a, 16)
SRC = {}
SAV = collections.defaultdict(set)   # (callee, caller, param) -> {'RAM:addr'} from instruction-level call sites (stack-args.tsv V:)
if os.path.exists(f'{ROOT}/evidence/stack-args.tsv'):
    for l in list(open(f'{ROOT}/evidence/stack-args.tsv'))[1:]:
        ce, cr, ia, k, v = l.split()
        if v.startswith('V'):
            SAV[(ce.zfill(8), cr.zfill(8), int(k))].add('RAM:' + v.split(':')[1])


def src(fn):
    if fn not in SRC:
        p = f'{ROOT}/cdump/{fn}.c'
        SRC[fn] = open(p).read() if os.path.exists(p) else ''
    return SRC[fn]


CAST = re.compile(r'^\((?:u?int|u?short|u?char|byte|ushort|uint|char|short|undefined\d?|ulonglong|longlong|float|int)\s*\*?\)\s*')


def strip(e):
    e = e.strip()
    while True:
        n = CAST.sub('', e)
        if n.startswith('(') and n.endswith(')'):
            depth = 0; ok = True
            for i, ch in enumerate(n):
                depth += ch == '('; depth -= ch == ')'
                if depth == 0 and i < len(n) - 1:
                    ok = False; break
            if ok:
                n = n[1:-1].strip()
        if n == e:
            return e
        e = n


def reduce(fn, e, depth=0):
    """returns set of terminal strings: 'RAM:addr' or 'X:<expr>'"""
    e = strip(e)
    m = re.fullmatch(r'_?DAT_([0-9a-f]{8})', e)
    if m and m.group(1).startswith('fff'):
        return {f'RAM:{m.group(1).upper()}'}
    m = re.fullmatch(r'_?(v_\w+)', e)
    if m and m.group(1) in LAB:
        return {f'RAM:{LAB[m.group(1)]:08X}'}
    m = re.fullmatch(r'(?:\(\w+\)\s*)?(\w+) & 0xff(?:ff)?', e)
    if m:  # full-width mask of a narrow var is a pass-through
        r = reduce(fn, m.group(1), depth)
        if all(x.startswith('RAM:') for x in r):
            return r
    if depth > 6:
        return {f'X:{e}'}
    m = re.fullmatch(r'param_(\d+)', e)
    if m:
        n = int(m.group(1)) - 1; out = set()
        for rhs in set(re.findall(r'(?<![\w.])' + re.escape(e) + r'\s*=(?!=)\s*([^;]+);', src(fn))):
            r = strip(rhs)
            if re.fullmatch(re.escape(e) + r'(?:\s*&\s*0xff(?:ff)?)?', r) or re.fullmatch(r'\(\w+\)\s*' + re.escape(e) + r'(?:\s*&\s*0xff(?:ff)?)?', r):
                continue   # identity cast / full-width mask of itself
            out |= reduce(fn, rhs, depth + 1)
        sites = [x for x in CA.get(fn, []) if x[0] != fn]
        if not sites:
            return {f'X:{fn}.param_{n+1}(no callers)'}
        for caller, args in sites:
            if n < len(args):
                out |= reduce(caller, args[n], depth + 1)
            else:
                iv = SAV.get((fn, caller, n + 1))
                out |= iv if iv and len(iv) == 1 else {f'X:{caller}:argcount'}
        return out
    m = re.fullmatch(r'[a-z]\w*Var\d+', e) or re.fullmatch(r'local_\w+', e)
    if m:
        s = src(fn)
        asg = re.findall(r'(?<![\w.])' + re.escape(e) + r'\s*=(?!=)\s*([^;]+);', s)
        if len(set(asg)) == 1:
            return reduce(fn, asg[0], depth + 1)
        return {f'X:{e}({len(asg)} defs)'}
    return {f'X:{e}'}


LK = re.compile(r'LK_([0-9A-F]{6})\(')
rows = collections.defaultdict(lambda: collections.defaultdict(set))
for p in sorted(glob.glob(f'{ROOT}/cdump/*.c')):
    fn = os.path.basename(p)[:-2]; s = src(fn)
    for m in LK.finditer(s):
        args = split_args(s, m.end())
        dm = re.search(r'T_([0-9A-F]{6})', args[0]) if args else None
        if not dm:
            continue
        d = int(dm.group(1), 16)
        for i, a in enumerate(args[1:3]):
            rows[d][i + 1] |= reduce(fn, a)
with open(f'{ROOT}/evidence/c-input-origins.tsv', 'w') as f:
    f.write('descriptor\tinput\tvar\tdetail\n')
    ok = 0; tot = 0
    for d in sorted(rows):
        for i in sorted(rows[d]):
            t = rows[d][i]; tot += 1
            v = ''
            if len(t) == 1 and next(iter(t)).startswith('RAM:'):
                v = next(iter(t))[4:]; ok += 1
            f.write(f'{d:06X}\t{i}\t{v}\t{" | ".join(sorted(t))[:300].replace(chr(10)," ").replace(chr(9)," ")}\n')
print('inputs', tot, 'resolved to a single RAM pass-through', ok)
