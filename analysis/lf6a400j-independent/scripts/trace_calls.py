"""Conservative constant propagation over Ghidra-decoded SH code, including delay slots.
Only records a descriptor when r4 is a single constant on every incoming path.
No interpretation of table names, physical units, or legacy XML.
"""
import csv,json,re,struct,collections
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1]; ROM=ROOT.parents[1]/'roms/LF6A400J_A501A14007-20241119-175005.bin'
b=ROM.read_bytes(); ins={}; groups=collections.defaultdict(dict)
for r in csv.DictReader((ROOT/'evidence/instructions.tsv').open(),delimiter='\t'):
 a=int(r['address'],16);r['a']=a;r['op']=r['instruction'].lstrip('_');ins[a]=r
 if r['function']:groups[int(r['function'],16)][a]=r
UNKNOWN=(None,)*16

def transfer(r,s):
 s=list(s);op=r['op'];p=r['a'];w=struct.unpack_from('>H',b,p)[0];n=(w>>8)&15;m=(w>>4)&15
 if w>>12==0xd: # mov.l @(disp,pc),Rn
  q=((p+4)&~3)+(w&255)*4;s[n]=struct.unpack_from('>I',b,q)[0] if q+4<=len(b) else None
 elif w>>12==0x9:
  q=p+4+(w&255)*2;s[n]=struct.unpack_from('>h',b,q)[0]&0xffffffff if q+2<=len(b) else None
 elif w>>12==0xe:s[n]=(w&255)-(256 if w&128 else 0);s[n]&=0xffffffff
 elif w&0xf00f==0x6003:s[n]=s[m]
 elif w>>12==7:s[n]=None if s[n] is None else (s[n]+(w&255)-(256 if w&128 else 0))&0xffffffff
 elif w&0xf00f in [0x600c,0x600d,0x600e,0x600f]:
  mask=255 if w&1==0 else 65535;v=s[m]
  if v is not None:
   v&=mask
   if w&2 and v&(mask+1)//2:v-=mask+1
   v&=0xffffffff
  s[n]=v
 elif op.startswith(('movi20 ', 'movi20s ')):
  z=re.fullmatch(r'movi20(s)? #?(-?0x[0-9a-f]+),r(\d+)',op)
  if z:s[int(z[3])]=(int(z[2],16)*(256 if z[1] else 1))&0xffffffff
  else:s[n]=None
 elif op.startswith('movt '):s[n]=None
 elif op.startswith('mova '):s[0]=((p+4)&~3)+(w&255)*4
 elif op.startswith(('cmp','tst','bt','bf','bra','bsr','jsr','jmp','rts','nop','sts.l','lds.l','lds ','f','clrt','sett','div0')):pass
 else:
  # Any unmodelled register write destroys the corresponding constant.
  z=re.search(r',r(\d+)$',op)
  if z:s[int(z[1])]=None
  elif (z:=re.fullmatch(r'(?:sh\w+|rot\w+|dt) r(\d+)',op)):s[int(z[1])]=None
  # post-increment load changes its base register as well
 for z in re.finditer(r'@r(\d+)\+',op):s[int(z[1])]=None
 return tuple(s)

def targets(r,typ):
 return [int(v.split(':')[0],16) for v in r['references'].split(';') if v and typ in v and re.match(r'^[0-9a-f]+:',v)]

calls={}
for entry,g in groups.items():
 if entry not in g:continue
 states={entry:UNKNOWN};todo=collections.deque([entry]);done=0
 while todo:
  a=todo.popleft();r=g[a];op=r['op'];s=states[a];done+=1
  if done>len(g)*40:raise RuntimeError(f'nonconvergent {entry:x}')
  nexta=a+(4 if (a+2 not in ins and a+4 in ins) else 2)
  iscall=op.startswith(('jsr ','bsr ','bsrf '));isjump=op.startswith(('jmp ','bra ','braf '));iscond=op.startswith(('bt ','bf ','bt/s ','bf/s '));ret=op.startswith(('rts','rte'))
  delayed=iscall or isjump or ret or op.startswith(('bt/s','bf/s'))
  t=targets(r,'CALL') if iscall else targets(r,'JUMP')
  if (iscall or isjump) and not t:
   z=re.search(r'@?r(\d+)',op)
   if z and s[int(z[1])] is not None:t=[(s[int(z[1])]+(a+4 if op.startswith(('bsrf','braf')) else 0))&0xffffffff]
  ns=transfer(r,s)
  if delayed and a+2 in ins:ns=transfer(ins[a+2],ns);nexta=a+4
  if iscall:
   calls[a]=dict(call=a,function=entry,target=t[0] if len(t)==1 else None,r4=ns[4],r5=ns[5],r6=ns[6])
   ns=(None,)*8+ns[8:]
  succ=[] if ret else t if isjump else [nexta]+t if iscond else [nexta]
  for q in succ:
   if q not in g:continue
   old=states.get(q);new=ns if old is None else tuple(x if x==y else None for x,y in zip(old,ns))
   if old is None or new!=old:states[q]=new;todo.append(q)
cs=json.loads((ROOT/'evidence/descriptor-candidates.json').read_text());addresses={x['descriptor'] for x in cs}
matched=[c for c in calls.values() if c['r4'] in addresses]
(ROOT/'evidence/descriptor-calls.json').write_text(json.dumps(matched,indent=2))
(ROOT/'evidence/all-calls.json').write_text(json.dumps(list(calls.values()),indent=2))
print('functions',len(groups),'calls',len(calls),'descriptor calls',len(matched),'unique descriptors',len({c['r4'] for c in matched}))
print('targets',[(hex(k) if k else None,v) for k,v in collections.Counter(c['target'] for c in matched).most_common()])
