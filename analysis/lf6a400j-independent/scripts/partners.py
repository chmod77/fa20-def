import re,json,collections,sys
CA=json.load(open('evidence/callargs.json'))
SA=collections.defaultdict(dict)
for l in list(open('evidence/stack-args.tsv'))[1:]:
    ce,cr,ia,k,v=l.split(); SA[(ce.zfill(8),cr.zfill(8))][int(k)]=v
def argmap(callee,caller,args):
    m={}
    for i,a in enumerate(args):
        mm=re.fullmatch(r'(?:\(\w+\)\s*)*_?(DAT_f{3}[0-9a-f]{5}|v_\w+)',a.strip())
        if mm: m[i+1]=mm.group(1)
    for k,v in SA.get((callee,caller),{}).items():
        if k not in m and ':' in v: m[k]='DAT_'+v.split(':')[1].lower()
    return m
target=sys.argv[1].lower()
for callee,cs in CA.items():
    for caller,args in cs:
        if caller==callee: continue
        m=argmap(callee,caller,args)
        ps=[k for k,v in m.items() if v.lower().endswith(target)]
        if not ps: continue
        s=open(f'cdump/{callee}.c').read()
        for k in ps:
            P=f'param_{k}'
            for c in re.finditer(r'\b'+P+r'\b[^;\n]{0,12}?(<=?|>=?|-)\s*(?:\(\w+\)\s*)?\(?(param_\d+)\b|\b(param_\d+)\b[^;\n]{0,12}?(<=?|>=?|-)\s*(?:\(\w+\)\s*)?'+P+r'\b',s):
                o=c.group(2) or c.group(3); n=int(o[6:])
                print(callee,caller,P,c.group(1) or c.group(4),o,'=',m.get(n,'?'))
