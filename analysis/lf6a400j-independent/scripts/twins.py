"""Lead generator: functions whose decompiled C is identical after normalising names (FUN_/DAT_/T_/LAB_/labels/stack names).
For groups where some member has identified descriptors, print the positional descriptor mapping for review."""
import re, glob, os, json, collections
H = os.path.dirname(os.path.abspath(__file__)); ROOT = os.path.dirname(H)
S = json.load(open(f'{ROOT}/evidence/semantics.json'))
def norm(s):
    s = re.sub(r'/\*.*?\*/', '', s, flags=re.S)
    s = re.sub(r'\b(FUN|DAT|_DAT|LAB|T|PTR|UNK|v)_\w+', 'X', s)
    s = re.sub(r'\b[a-z]+Stack_\w+|\blocal_\w+', 'L', s)
    return re.sub(r'\s+', ' ', s)
groups = collections.defaultdict(list)
for p in glob.glob(f'{ROOT}/cdump/*.c'):
    s = open(p).read()
    ds = re.findall(r'LK_\w+\(\(uint\)&T_([0-9A-F]{6})', s)
    if not ds:
        continue
    groups[norm(s)].append((os.path.basename(p)[:-2], ds))
for g in groups.values():
    if len(g) < 2:
        continue
    idf = [any('0x' + d.lstrip('0') in S for d in ds) for _, ds in g]
    if any(idf) and not all(all('0x' + d.lstrip('0') in S for d in ds) for _, ds in g):
        print('GROUP')
        for (f, ds), i in zip(g, idf):
            print(' ', f, ' '.join(d + ('*' if '0x' + d.lstrip('0') in S else '') for d in ds))
