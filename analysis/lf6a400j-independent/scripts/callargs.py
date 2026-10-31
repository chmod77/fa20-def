"""Build callee-parameter bindings from all call sites in cdump/*.c.
evidence/callargs.json: { "fn8hex": [[caller, [arg1, arg2, ...]], ...] }"""
import re, os, glob, json, sys
H = os.path.dirname(os.path.abspath(__file__)); ROOT = os.path.dirname(H)
CALL = re.compile(r'FUN_([0-9a-f]{8})\(')


def split_args(s, i):
    depth = 1; cur = ''; args = []
    while i < len(s) and depth:
        ch = s[i]
        if ch == '(':
            depth += 1
        elif ch == ')':
            depth -= 1
            if depth == 0:
                break
        if ch == ',' and depth == 1:
            args.append(cur.strip()); cur = ''
        else:
            cur += ch
        i += 1
    if cur.strip():
        args.append(cur.strip())
    return [re.sub(r'\s+', ' ', a) for a in args]


LAB = {}
for _l in open(f'{ROOT}/evidence/ghidra-labels.tsv'):
    _a, _n = _l.split(); LAB[_n] = int(_a, 16)


def bases(s):
    """local pointer variables assigned exactly once to &RAMVAR -> address"""
    found = {}
    for m in re.finditer(r'\b(\w+)\s*=\s*&_?(DAT_([0-9a-f]{8})|v_\w+)\s*;', s):
        v = m.group(1)
        a = int(m.group(3), 16) if m.group(3) else LAB.get(m.group(2))
        if a is None:
            continue
        found.setdefault(v, set()).add(a)
    # reject pointer locals that are assigned more than once in any form (e.g. later 'p = p + 0x30' or 'p = q + 0xba')
    nassign = {k: len(re.findall(r'(?<![\w.*])' + re.escape(k) + r'\s*=(?!=)', s)) for k in found}
    return {k: next(iter(v)) for k, v in found.items() if len(v) == 1 and nassign[k] == 1}


def fold(a, B):
    m = re.fullmatch(r'(\w+)\s*\+\s*(0x[0-9a-f]+|\d+)', a)
    if m and m.group(1) in B:
        return '&DAT_%08x' % ((B[m.group(1)] + int(m.group(2), 0)) & 0xffffffff)
    if a in B:
        return '&DAT_%08x' % B[a]
    return a


def build():
    out = {}
    for p in glob.glob(f'{ROOT}/cdump/*.c'):
        caller = os.path.basename(p)[:-2]
        s = open(p).read()
        B = bases(s)
        for m in CALL.finditer(s):
            out.setdefault(m.group(1), []).append([caller, [fold(a, B) for a in split_args(s, m.end())]])
    json.dump(out, open(f'{ROOT}/evidence/callargs.json', 'w'))


if __name__ == '__main__':
    build()
