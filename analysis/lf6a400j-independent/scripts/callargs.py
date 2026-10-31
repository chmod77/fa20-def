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


def build():
    out = {}
    for p in glob.glob(f'{ROOT}/cdump/*.c'):
        caller = os.path.basename(p)[:-2]
        s = open(p).read()
        for m in CALL.finditer(s):
            out.setdefault(m.group(1), []).append([caller, split_args(s, m.end())])
    json.dump(out, open(f'{ROOT}/evidence/callargs.json', 'w'))


if __name__ == '__main__':
    build()
