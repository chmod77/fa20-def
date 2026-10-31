"""Secondary (helper-routine) tables proven like table_compare.py: v = FUN_0016xxxx(&DAT_<table>, x) with <table> a key of
evidence/helper-tables.json, then v compared directly with a proven variable (or a parameter every caller passes as one), or used
as the gain of a first-order filter helper.  Output evidence/helper-compare.tsv."""
import re, os, sys, json, glob
H = os.path.dirname(os.path.abspath(__file__)); ROOT = os.path.dirname(H); sys.path.insert(0, H)
import variables as VV
from table_compare import resolve, OPND
known = {**VV.V, **VV.V2}
HT = json.load(open(f'{ROOT}/evidence/helper-tables.json'))
S = json.load(open(f'{ROOT}/evidence/semantics.json'))
keys = {int(k, 16) for k in HT}
rows = []
for p in sorted(glob.glob(f'{ROOT}/cdump/*.c')):
    fn = os.path.basename(p)[:-2]; s = open(p).read()
    for m in re.finditer(r'(\w+)\s*=\s*(?:\(\w+\)\s*)?FUN_0016[0-9a-f]{4}\(\s*(?:\(\w+\s*\*?\)\s*)?&(?:DAT|UNK|PTR_DAT)_0*([0-9a-f]+)\s*,\s*([^;]*)\);', s):
        v, t = m.group(1), int(m.group(2), 16)
        if t not in keys or f'0x{t:X}' in S:
            continue
        tail = s[m.end():]
        ra = re.search(r'\b' + re.escape(v) + r'\s*=[^=]', tail); tail = tail[:ra.start()] if ra else tail
        V = r'\(?(?:\(\w+\s*\**\)\s*)*\(?' + re.escape(v) + r'(?:\s*&\s*0xff(?:ff)?)?\)?'
        inp = m.group(3).strip()
        mi = re.fullmatch(r'(?:\(\w+\)\s*)*\(?_?(DAT_f{3}[0-9a-f]{5}|v_\w+|param_\d+)(?:\s*&\s*0xff(?:ff)?)?\)?', inp)
        ia = resolve(fn, mi.group(1), s) if mi else None
        for c in re.finditer(V + r'\s*(<=?|>=?)\s*' + OPND + '|' + OPND + r'\s*(<=?|>=?)\s*' + V, tail):
            tok = c.group(2) or c.group(3)
            a = resolve(fn, tok, s) if tok != v else None
            if a in known:
                rows.append((f'{t:X}', fn, f'{a:08X}', known[a][0], known[a][1], known[a][2], f'{ia:08X}' if ia in known else '',
                             c.group(0).replace('\t', ' ')))
                break
with open(f'{ROOT}/evidence/helper-compare.tsv', 'w') as f:
    f.write('table\tfunction\tvar\tvar_name\tunits\texpr\tinput_var\tcontext\n')
    for r in rows: f.write('\t'.join(r) + '\n')
print('helper comparisons', len(rows))
for r in rows: print(*r)
