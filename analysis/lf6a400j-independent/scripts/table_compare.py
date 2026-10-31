"""Table outputs proven by comparison with a proven variable.
In cdump/F.c, for  v = LK_xxx((uint)&T_D, ...)  find a later comparison  v op VAR / VAR op v  (casts and & 0xff/0xffff masks allowed)
before v is reassigned, where VAR is a proven variable (variables.py; C name DAT_ffffxxxx / v_ label) or a parameter that every
call site passes as the same proven variable.  A comparison requires both operands in the same unit, so the table output carries
VAR's scaling (lead for semantics_db; each accepted entry is reviewed and added by hand).  Output evidence/table-compare.tsv."""
import os, re, sys, json, glob, collections
H = os.path.dirname(os.path.abspath(__file__)); ROOT = os.path.dirname(H); sys.path.insert(0, H)
import variables as VV
known = {**VV.V, **VV.V2}
lab = {}
for l in open(f'{ROOT}/evidence/ghidra-labels.tsv'):
    a, n = l.split(); lab[n] = int(a, 16)
CA = json.load(open(f'{ROOT}/evidence/callargs.json'))
S = json.load(open(f'{ROOT}/evidence/semantics.json'))

SAV = collections.defaultdict(set)
for _l in list(open(f'{ROOT}/evidence/stack-args.tsv'))[1:]:
    _ce, _cr, _ia, _k, _v = _l.split()
    if _v.startswith('V'):
        SAV[(_ce.zfill(8), _cr.zfill(8), int(_k))].add(_v.split(':')[1])


def param_var(fn, k):
    res = set()
    for caller, args in CA.get(fn, []):
        if caller == fn:
            continue
        if k > len(args):
            iv = SAV.get((fn, caller, k))
            if not iv or len(iv) != 1:
                return None
            res.add(int(next(iter(iv)), 16)); continue
        m = re.fullmatch(r'(?:\(\w+\s*\**\)\s*)*_?(DAT_f{3}[0-9a-f]{5}|v_\w+)', args[k - 1].strip())
        if not m:
            return None
        t = m.group(1)
        res.add(int(t[4:], 16) if t.startswith('DAT_') else lab.get(t))
    return res.pop() if len(res) == 1 else None


def resolve(fn, tok, src=None, depth=0):
    if src is not None and depth < 4 and re.fullmatch(r'[a-z]\w*Var\d+|local_\w+', tok):
        asg = set(re.findall(r'(?<![\w.])' + re.escape(tok) + r'\s*=(?!=)\s*([^;]+);', src))
        if len(asg) == 1:
            m = re.fullmatch(r'\(?(?:\(\w+\s*\**\)\s*)*\(?_?(DAT_f{3}[0-9a-f]{5}|v_\w+|param_\d+|[a-z]\w*Var\d+)(?:\s*&\s*0xff(?:ff)?)?\)?',
                             next(iter(asg)).strip())
            if m:
                return resolve(fn, m.group(1), src, depth + 1)
        return None
    if tok.startswith('DAT_'):
        return int(tok[4:], 16)
    if tok.startswith('param_'):
        return param_var(fn, int(tok[6:]))
    return lab.get(tok)


OPND = r'\(?(?:\(\w+\s*\**\)\s*)*\(?_?(DAT_f{3}[0-9a-f]{5}|v_\w+|param_\d+|[a-z]\w*Var\d+|local_\w+)(?:\s*&\s*0xff(?:ff)?)?\)?'
rows = []
for p in sorted(glob.glob(f'{ROOT}/cdump/*.c')):
    fn = os.path.basename(p)[:-2]; s = open(p).read()
    for m in re.finditer(r'(\w+)\s*=\s*(?:\(\w+\)\s*)?LK_[0-9A-F]+\(\(uint\)&T_([0-9A-F]{6})', s):
        v, d = m.group(1), m.group(2)
        tail = s[m.end():]
        re_asg = re.search(r'\b' + re.escape(v) + r'\s*=[^=]', tail)
        tail = tail[:re_asg.start()] if re_asg else tail
        V = r'\(?(?:\(\w+\s*\**\)\s*)*\(?' + re.escape(v) + r'(?:\s*&\s*0xff(?:ff)?)?\)?'
        DIFF = r'|\(\s*(?:\(\w+\s*\**\)\s*)*\(?\s*' + OPND.replace('(DAT', '(?P<d1>DAT', 1) + r'\s*-\s*' + V + r'\s*\)?\s*\)?\s*(<=?|>=?)\s*0\b' \
               + r'|\(\s*(?:\(\w+\s*\**\)\s*)*\(?\s*' + V + r'\s*-\s*' + OPND.replace('(DAT', '(?P<d2>DAT', 1) + r'\s*\)?\s*\)?\s*(<=?|>=?)\s*0\b'
        for c in re.finditer(V + r'\s*(<=?|>=?)\s*' + OPND + '|' + OPND + r'\s*(<=?|>=?)\s*' + V + DIFF, tail):
            tok = c.group(2) or c.group(3) or c.group('d1') or c.group('d2')
            a = resolve(fn, tok, s) if tok != v else None
            if a in known:
                rows.append((d, fn, f'{a:08X}', known[a][0], known[a][1], known[a][2], c.group(0).replace('\t', ' ')))
                break
# table-vs-table: v1 = LK(T_a) and v2 = LK(T_b), each assigned once in the function, compared directly; if one table is identified
# (semantics.json data scaling) the other carries the same scaling.
for p in sorted(glob.glob(f'{ROOT}/cdump/*.c')):
    fn = os.path.basename(p)[:-2]; s = open(p).read()
    lk = {}
    for m in re.finditer(r'(\w+)\s*=\s*(?:\(\w+\)\s*)?LK_[0-9A-F]+\(\(uint\)&T_([0-9A-F]{6})', s):
        lk.setdefault(m.group(1), set()).add(m.group(2))
    once = {v: next(iter(d)) for v, d in lk.items() if len(d) == 1 and len(re.findall(r'\b' + re.escape(v) + r'\s*=[^=]', s)) == 1}
    if len(once) < 2:
        continue
    T = r'\(?(?:\(\w+\s*\**\)\s*)*\(?(' + '|'.join(map(re.escape, once)) + r')(?:\s*&\s*0xff(?:ff)?)?\)?'
    for c in re.finditer(T + r'\s*(<=?|>=?)\s*' + T, s):
        a, b = once[c.group(1)], once[c.group(3)]
        for x, y in ((a, b), (b, a)):
            sx = S.get('0x' + x.lstrip('0'))
            if sx and sx.get('status') == 'identified' and sx.get('data') and '0x' + y.lstrip('0') not in S:
                rows.append((y, fn, 'T:' + x, sx['name'], sx['data']['units'], sx['data']['expr'], c.group(0).replace('\t', ' ')))
with open(f'{ROOT}/evidence/table-compare.tsv', 'w') as f:
    f.write('descriptor\tfunction\tvar\tvar_name\tunits\texpr\tcontext\n')
    for r in rows:
        f.write('\t'.join(r) + '\n')
new = [r for r in rows if '0x' + r[0].lstrip('0') not in S]
print('comparisons', len(rows), 'unidentified', len(new))
for r in new:
    print(*r)
