#!/usr/bin/env python3
"""Linear symbolic tracer for SH-2A call sites: for every jsr in [start,end) report
what r4-r7 (and pushed stack words) hold: literal constants, or loads from RAM addresses.
Straight-line approximation: register state is reset at branch targets is NOT modelled;
results are cross-checked against Ghidra decompilation before use."""
import capstone,struct,re,sys,json
ROM=open(sys.argv[1],'rb').read()
md=capstone.Cs(capstone.CS_ARCH_SH, capstone.CS_MODE_SH2A|capstone.CS_MODE_BIG_ENDIAN)
def u32(a): return struct.unpack('>I',ROM[a:a+4])[0]
def u16(a): return struct.unpack('>H',ROM[a:a+2])[0]
def s16(a): return struct.unpack('>h',ROM[a:a+2])[0]
_INS=None
def func_addrs(fn):
    global _INS
    if _INS is None:
        _INS={}
        for l in open(__file__.rsplit('/',2)[0]+'/evidence/instructions.tsv'):
            f=l.split('\t')
            if f[0]=='address' or not f[1]:continue
            _INS.setdefault(int(f[1],16),[]).append(int(f[0],16))
    return sorted(_INS.get(fn,[]))
def insns(fn):
    for a in func_addrs(fn):
        i=next(md.disasm(ROM[a:a+4],a,1),None)
        if i: yield i
def trace(fn,end=None):
    R={};stack=[];out=[];gbr=None;delay=None
    for ins in insns(fn):
        m,o=ins.mnemonic,ins.op_str.replace(' ','')
        ops=o.split(',') if o else []
        def setr(r,v): R[r]=v
        try:
            if m=='mov.l' and re.fullmatch(r'0x[0-9a-f]+,r\d+',o): setr(ops[1],('const',u32(int(ops[0],16))))
            elif m=='mov.w' and re.fullmatch(r'0x[0-9a-f]+,r\d+',o): setr(ops[1],('const',s16(int(ops[0],16))&0xffffffff))
            elif m=='mov' and re.fullmatch(r'#-?\d+,r\d+',o): setr(ops[1],('const',int(ops[0][1:])&0xffffffff))
            elif m=='mov' and re.fullmatch(r'r\d+,r\d+',o): setr(ops[1],R.get(ops[0]))
            elif m=='add' and re.fullmatch(r'#-?\d+,r\d+',o):
                v=R.get(ops[1]); setr(ops[1],('const',(v[1]+int(ops[0][1:]))&0xffffffff) if v and v[0]=='const' else None)
            elif m in('mov.w','mov.b','mov.l') and re.fullmatch(r'@r\d+,r\d+',o):
                v=R.get(ops[0][1:]); setr(ops[1],('load',m[-1],v[1]) if v and v[0]=='const' else None)
            elif m in('mov.w','mov.b','mov.l') and re.fullmatch(r'@\(-?\d+,r\d+\),r\d+',o):
                d,base=re.match(r'@\((-?\d+),(r\d+)\)',o).groups(); v=R.get(base)
                setr(ops[-1],('load',m[-1],(v[1]+int(d))&0xffffffff) if v and v[0]=='const' else None)
            elif m in('mov.w','mov.b','mov.l') and re.fullmatch(r'@\(-?\d+,gbr\),r0',o):
                d=int(re.match(r'@\((-?\d+),gbr\)',o).group(1)); setr('r0',('load',m[-1],(gbr+d)&0xffffffff) if gbr is not None else None)
            elif m=='ldc' and o.endswith(',gbr'):
                v=R.get(ops[0]); gbr=v[1] if v and v[0]=='const' else None
            elif m=='mov.l' and re.fullmatch(r'r\d+,@-r15',o): stack.append(R.get(ops[0]))
            elif m in('extu.w','extu.b','exts.w','exts.b') and len(ops)==2: setr(ops[1],R.get(ops[0]))
            elif m=='jsr':
                tgt=R.get(o[1:]); delay=(ins.address,tgt)
                continue
            elif len(ops)>=1 and re.fullmatch(r'r\d+',ops[-1]) and m not in('cmp/eq','cmp/hs','cmp/ge','cmp/gt','cmp/hi','cmp/pz','cmp/pl','tst','jmp','braf','bsrf'):
                setr(ops[-1],None)
        finally: pass
        if delay and ins.address==delay[0]+2:
            a,tgt=delay
            out.append(dict(call=a,target=tgt[1] if tgt and tgt[0]=='const' else None,
                args={r:R.get(r) for r in('r4','r5','r6','r7')},stack=list(reversed(stack))))
            stack=[];delay=None
            for r in('r0','r1','r2','r3','r4','r5','r6','r7'): R.pop(r,None)
        if m=='add' and re.fullmatch(r'#\d+,r15',o): stack=[]
    return out
def fmt(v):
    if v is None: return '?'
    if v[0]=='const': return '0x%X'%v[1]
    return '%s[0x%X]'%(v[1],v[2])
if __name__=='__main__':
    res=trace(int(sys.argv[2],16))
    if len(sys.argv)>3: json.dump(res,open(sys.argv[3],'w'),default=str,indent=0)
    for c in res:
        print('%06X -> %s  r4=%s r5=%s r6=%s r7=%s stk=%s'%(c['call'],('%X'%c['target']) if c['target'] else '?',
          *[fmt(c['args'][r]) for r in('r4','r5','r6','r7')],[fmt(x) for x in c['stack']]))
