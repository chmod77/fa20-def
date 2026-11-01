import re,json,collections,sys,glob,os,io,contextlib
sys.path.insert(0,'scripts')
import variables as VV
known={**VV.V,**VV.V2}
CA=json.load(open('evidence/callargs.json'))
SA=collections.defaultdict(dict)
for l in list(open('evidence/stack-args.tsv'))[1:]:
    ce,cr,ia,k,v=l.split(); SA[(ce.zfill(8),cr.zfill(8))][int(k)]=v
src={os.path.basename(p)[:-2]:open(p).read() for p in glob.glob('cdump/*.c')}
lab={}
for l in open('evidence/ghidra-labels.tsv'):
    a,n=l.split(); lab[n]=int(a,16)
def gname(tok):
    tok=tok.lstrip('_')
    if tok.startswith('DAT_'): return int(tok[4:],16)
    return lab.get(tok)
def argmap(callee,caller,args):
    m={}
    for i,a in enumerate(args):
        mm=re.fullmatch(r'(?:\(\w+\)\s*)*_?(DAT_f{3}[0-9a-f]{5}|v_\w+)',a.strip())
        if mm: m[i+1]=('v',gname(mm.group(1)))
        mm=re.fullmatch(r'&_?(DAT_f{3}[0-9a-f]{5})',a.strip())
        if mm: m[i+1]=('p',int(mm.group(1)[4:],16))
    for k,v in SA.get((callee,caller),{}).items():
        if k in m: continue
        if v.startswith('V'): m[k]=('v',int(v.split(':')[1],16))
        elif re.fullmatch(r'FFF[EF][0-9A-F]{4}',v): m[k]=('p',int(v,16))
    return m
E=collections.defaultdict(set)
def edge(a,b,why):
    if a and b and a!=b: E[a].add((b,why)); E[b].add((a,why))
CMP=r'(<=?|>=?)'
for callee,cs in CA.items():
    s=src.get(callee)
    if not s: continue
    for caller,args in cs:
        if caller==callee: continue
        m=argmap(callee,caller,args)
        vals={k:v[1] for k,v in m.items() if v[0]=='v'}
        ptrs={k:v[1] for k,v in m.items() if v[0]=='p'}
        # param vs param comparisons
        for c in re.finditer(r'\bparam_(\d+)\b(?:\s*&\s*0xffff)?\)?\s*'+CMP+r'\s*\(?(?:\(\w+\)\s*)?param_(\d+)\b',s):
            a,b=int(c.group(1)),int(c.group(3))
            if a in vals and b in vals: edge(vals[a],vals[b],f'{callee}<-{caller} cmp')
        # *param_k = param_j  (copy / selection)
        for c in re.finditer(r'\*param_(\d+)\s*=\s*(?:\(\w+\)\s*)?param_(\d+)\s*;',s):
            a,b=int(c.group(1)),int(c.group(2))
            if a in ptrs and b in vals: edge(ptrs[a],vals[b],f'{callee}<-{caller} copy')
# direct global comparisons within functions
for fn,s in src.items():
    for c in re.finditer(r'(?:\(\w+\)\s*)?_?(DAT_f{3}[0-9a-f]{5}|v_\w+)\s*'+CMP+r'\s*(?:\(\w+\)\s*)?_?(DAT_f{3}[0-9a-f]{5}|v_\w+)\b',s):
        edge(gname(c.group(1)),gname(c.group(3)),fn+' gcmp')
for fn,s2 in src.items():
    for c in re.finditer(r'(?<![\w*&.])_?(DAT_f{3}[0-9a-f]{5}|v_\w+)\s*=\s*(?:\(\w+\)\s*)?_?(DAT_f{3}[0-9a-f]{5}|v_\w+)\s*;',s2):
        edge(gname(c.group(1)),gname(c.group(2)),fn+' gasg')
# propagate
unit={a:known[a] for a in known}
q=list(unit); why={}
while q:
    a=q.pop()
    for b,w in E.get(a,()):
        if b not in unit:
            unit[b]=unit[a]; why[b]=(a,w); q.append(b)
new={b for b in unit if b not in known}
print('edges',sum(len(v) for v in E.values())//2,'new units',len(new))
for b in sorted(new): print(hex(b),unit[b][0],unit[b][2],'via',hex(why[b][0]),why[b][1])
print('=== candidate tables')
S=json.load(open('evidence/semantics.json'));R=json.load(open('evidence/unresolved-reasons.json'))
for k,v in R.items():
    if S.get(k,{}).get('status')=='identified': continue
    v=str(v)
    m=re.match(r'0x([0-9A-F]+): (compared with|stored to) (FFF[EF][0-9A-F]{4})',v)
    tgt=None
    if m: tgt=int(m.group(3),16); kind=m.group(2)
    m2=re.match(r'0x([0-9A-F]+): stored to output \*param_(\d+)',v)
    if m2:
        fn=m2.group(1).lower().zfill(8); n=int(m2.group(2))
        for cr,args in CA.get(fn,[]):
            if cr==fn: continue
            am=argmap(fn,cr,args)
            if n in am and am[n][0]=='p': tgt=am[n][1]; kind='out'
    if tgt and tgt in unit:
        print(k,kind,hex(tgt),unit[tgt][0],unit[tgt][2],'|',('known' if tgt in known else 'via '+hex(why[tgt][0])+' '+why[tgt][1]))
print('=== targets with edges')
for k,v in R.items():
    if S.get(k,{}).get('status')=='identified': continue
    m=re.match(r'0x([0-9A-F]+): (compared with|stored to) (FFF[EF][0-9A-F]{4})',str(v))
    if m:
        t=int(m.group(3),16)
        if E.get(t): print(k,m.group(2),hex(t),[hex(x[0]) for x in E[t]][:5])
print('=== static -> output param candidates')
for k,v in R.items():
    if S.get(k,{}).get('status')=='identified': continue
    m=re.match(r'0x([0-9A-F]+): stored to (FFF[EF][0-9A-F]{4})',str(v))
    if not m: continue
    fn=m.group(1).lower().zfill(8); st=m.group(2).lower()
    s=src.get(fn,'')
    for c in re.finditer(r'\*param_(\d+)\s*=\s*(?:\(\w+\)\s*)?_?DAT_'+st+r'\s*;',s):
        n=int(c.group(1))
        for cr,args in CA.get(fn,[]):
            if cr==fn: continue
            am=argmap(fn,cr,args)
            if n in am and am[n][0]=='p':
                t=am[n][1]
                print(k,fn,st,'->',hex(t),(unit[t][0],unit[t][2]) if t in unit else '-', ('known' if t in known else ('via '+hex(why[t][0])+' '+why[t][1]) if t in why else ''))
