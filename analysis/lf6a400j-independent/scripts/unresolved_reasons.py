"""For every table that is not identified, record why it is unresolved, from the decompiled use of its lookup result.
Classes: compared with an unproven variable, combined (multiplied) with another table/variable, added to an unproven variable,
stored to a RAM variable / output pointer whose unit is unproven, passed to a function, timer in a task without a single proven
period, or no decompiled reference.  Output evidence/unresolved-reasons.json {"0xD": "reason"}."""
import re, os, glob, json, sys, collections
H = os.path.dirname(os.path.abspath(__file__)); ROOT = os.path.dirname(H); sys.path.insert(0, H)
os.environ.setdefault('NO_V3', '')
import variables as VV
from table_compare import resolve, OPND
known = {**VV.V, **VV.V2}
S = json.load(open(f'{ROOT}/evidence/semantics.json'))
HT = json.load(open(f'{ROOT}/evidence/helper-tables.json'))
def nm(a):
    return f'{a:08X}' if a else '?'
def classify(fn, s, v, start, depth=0):
    tail = s[start:]
    # cut at the first reassignment of v that is not another table lookup (variant tables share the variable)
    for ra in re.finditer(r'\b' + re.escape(v) + r'\s*=(?!=)\s*([^;]*);', tail):
        if 'LK_' not in ra.group(1):
            tail = tail[:ra.start()]; break
    V = r'\(?(?:\(\w+\s*\**\)\s*)*\(?' + re.escape(v) + r'(?:\s*&\s*0xff(?:ff)?)?\)?'
    cands = []
    for kind, pat in (('compared with', V + r'\s*(<=?|>=?)\s*' + OPND + '|' + OPND + r'\s*(<=?|>=?)\s*' + V),
                      ('multiplied with', V + r'\s*\*\s*' + OPND + '|' + OPND + r'\s*\*\s*' + V),
                      ('added to', V + r'\s*[-+]\s*' + OPND + '|' + OPND + r'\s*[-+]\s*' + V)):
        for c in re.finditer(pat, tail):
            toks = [g for g in c.groups() if g and re.fullmatch(r'\w+', g) and g != v and not re.fullmatch(r'[<>]=?', g)]
            if not toks: continue
            t = toks[0]; a = resolve(fn, t, s)
            if a in known: continue
            lk = re.search(r'\b' + re.escape(t) + r'\s*=\s*(?:\(\w+\)\s*)?LK_[0-9A-F]+\(\(uint\)&T_([0-9A-F]{6})', s)
            what = f'table T_{lk.group(1)}' if lk else (nm(a) if a else f'local {t}')
            cands.append((c.start(), f'{kind} {what} (unit not proven)'))
            break
    m = re.search(r'\*\s*(param_\d+)\s*=\s*(?:\(\w+\)\s*)?' + re.escape(v) + r'\b', tail)
    if m: cands.append((m.start(), f'stored to output *{m.group(1)} of 0x{int(fn,16):X} (unit of the receiving variable not proven)'))
    m = re.search(r'_?(DAT_f{3}[0-9a-f]{5})\s*=\s*(?:\(\w+\)\s*)?' + re.escape(v) + r'\b', tail)
    if m: cands.append((m.start(), f'stored to {m.group(1)[4:].upper()} (unit not proven)'))
    m = re.search(r'FUN_([0-9a-f]{8})\([^;]*\b' + re.escape(v) + r'\b', tail)
    if m: cands.append((m.start(), f'passed to 0x{int(m.group(1),16):X} (use there not resolved)'))
    if not cands and depth < 2:
        m = re.search(r'\b([a-z]\w*)\s*=\s*(?:\(\w+\)\s*)*\(?' + re.escape(v) + r'(?:\s*&\s*0xff(?:ff)?)?\)?\s*;', tail)
        if m and m.group(1) != v:
            return classify(fn, s, m.group(1), start + m.end(), depth + 1)
        m = re.search(r'\b([a-z]\w*)\s*=\s*[^;]*\b' + re.escape(v) + r'\b[^;]*;', tail)
        if m and m.group(1) != v:
            r = classify(fn, s, m.group(1), start + m.end(), depth + 1)
            return 'enters an expression (' + m.group(0)[:60].strip() + ') whose result is ' + r
    if not cands: return 'lookup result not used in a resolvable form'
    return min(cands)[1]
reasons = {}
# functions whose tables depend on CAN-received signals (scaling defined by the sending module, not in this ROM)
_CAN = ('index FFFF0554 is a 4-bit state code built from CAN-received flags FFFEF081 bits 4..7 (0xC3364); the outputs are compared with '
        'FFFF12C2 = filtered T_02FC98(0554, FFFF0F42), and 0F42 is a copy (0xCBA28) of FFFEF31C, a 16-bit value assembled from CAN '
        'receive bytes FFFF26B3/26B4 (0x52D0A). The scaling of that CAN signal is defined by the sending module, not in this ROM')
CANFN = {'00103bb4', '00103c00', '00104698', '001066e8', '00106738', '001067b4', '00106830', '00106880', '001068d0'}
src = {os.path.basename(p)[:-2]: open(p).read() for p in glob.glob(f'{ROOT}/cdump/*.c')}
for fn, s in src.items():
    for m in re.finditer(r'(\w+)\s*=\s*(?:\(\w+\)\s*)?LK_[0-9A-F]+\(\(uint\)&T_([0-9A-F]{6})', s):
        key = '0x' + m.group(2).lstrip('0')
        if S.get(key, {}).get('status') == 'identified' or key in reasons: continue
        reasons[key] = f'0x{int(fn,16):X}: ' + (_CAN if fn in CANFN else classify(fn, s, m.group(1), m.end()))
    for m in re.finditer(r'(\w+)\s*=\s*(?:\(\w+\)\s*)?FUN_[0-9a-f]{8}\(\s*&(?:DAT|UNK|PTR_DAT)_0*([0-9a-f]+)\s*,', s):
        key = '0x' + m.group(2).upper()
        if key not in HT or S.get(key, {}).get('status') == 'identified' or key in reasons: continue
        reasons[key] = f'0x{int(fn,16):X}: ' + classify(fn, s, m.group(1), m.end())
for k, e in S.items():
    if e.get('status') == 'unresolved' and k not in reasons:
        reasons[k] = 'see evidence'
json.dump(reasons, open(f'{ROOT}/evidence/unresolved-reasons.json', 'w'), indent=1)
c = collections.Counter(r.split(': ', 1)[1].split(' ')[0] for r in reasons.values() if ': ' in r)
print('unresolved reasons', len(reasons), c.most_common())
