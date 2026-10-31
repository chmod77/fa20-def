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
        m = re.fullmatch(r'(?:\(\w+\)\s*)*_?(DAT_f{3}[0-9a-f]{5}|v_\w+)', args[k - 1].strip())
        if not m:
            return None
        t = m.group(1)
        res.add(int(t[4:], 16) if t.startswith('DAT_') else lab.get(t))
    return res.pop() if len(res) == 1 else None


def resolve(fn, tok):
    if tok.startswith('DAT_'):
        return int(tok[4:], 16)
    if tok.startswith('param_'):
        return param_var(fn, int(tok[6:]))
    return lab.get(tok)


OPND = r'\(?(?:\(\w+\)\s*)*\(?_?(DAT_f{3}[0-9a-f]{5}|v_\w+|param_\d+)(?:\s*&\s*0xff(?:ff)?)?\)?'
rows = []
for p in sorted(glob.glob(f'{ROOT}/cdump/*.c')):
    fn = os.path.basename(p)[:-2]; s = open(p).read()
    for m in re.finditer(r'(\w+)\s*=\s*(?:\(\w+\)\s*)?LK_[0-9A-F]+\(\(uint\)&T_([0-9A-F]{6})', s):
        v, d = m.group(1), m.group(2)
        tail = s[m.end():]
        re_asg = re.search(r'\b' + re.escape(v) + r'\s*=[^=]', tail)
        tail = tail[:re_asg.start()] if re_asg else tail
        V = r'\(?(?:\(\w+\)\s*)*\(?' + re.escape(v) + r'(?:\s*&\s*0xff(?:ff)?)?\)?'
        for c in re.finditer(V + r'\s*(<=?|>=?)\s*' + OPND + '|' + OPND + r'\s*(<=?|>=?)\s*' + V, tail):
            tok = c.group(2) or c.group(3)
            a = resolve(fn, tok)
            if a in known:
                rows.append((d, fn, f'{a:08X}', known[a][0], known[a][1], known[a][2], c.group(0).replace('\t', ' ')))
                break
with open(f'{ROOT}/evidence/table-compare.tsv', 'w') as f:
    f.write('descriptor\tfunction\tvar\tvar_name\tunits\texpr\tcontext\n')
    for r in rows:
        f.write('\t'.join(r) + '\n')
new = [r for r in rows if '0x' + r[0].lstrip('0') not in S]
print('comparisons', len(rows), 'unidentified', len(new))
for r in new:
    print(*r)
