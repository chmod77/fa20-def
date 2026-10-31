"""Conservative symbolic SH register tracing for lookup-input provenance.
Follows immutable ROM literals, RAM reads and simple integer operations, with
CFG joins and delay slots. Unsupported operations discard the affected value.
This produces evidence candidates; it does not assign calibration names.
"""
import csv,json,re,struct,collections
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1];E=ROOT/'evidence';b=(ROOT.parents[1]/'roms/LF6A400J_A501A14007-20241119-175005.bin').read_bytes()
ins={};groups=collections.defaultdict(dict)
for r in csv.DictReader((E/'instructions.tsv').open(),delimiter='\t'):
 a=int(r['address'],16);r['a']=a;r['op']=r['instruction'].lstrip('_');ins[a]=r
 if r['function']:groups[int(r['function'],16)][a]=r

def expression(op,*args):
 if None in args:return None
 if op=='add':
  x,y=args
  if isinstance(x,int) and isinstance(y,int):return (x+y)&0xffffffff
  if y==0:return x
  if x==0:return y
  if isinstance(x,tuple) and x[0]=='sp' and isinstance(y,int):return ('sp',x[1]+y)
 if op.startswith(('u','s')) and op[1:] in ['8','16']:
  bits=int(op[1:]);x=args[0];mask=(1<<bits)-1
  if isinstance(x,int):
   x&=mask
   if op[0]=='s' and x>>(bits-1):x-=mask+1
   return x&0xffffffff
  if isinstance(x,tuple) and x[0] in ['ram','rom'] and x[2]==bits:return (x[0],x[1],bits,op[0]=='s')
  if isinstance(x,tuple) and x[0]==op:return x
 if len(repr(args))>700:return None
 return (op,*args)

def memread(addr,width):
 if isinstance(addr,int):
  if 0xfffe0000<=addr<=0xffffffff:return ('ram',addr,width,width<32)
  if 0<=addr<len(b)-width//8:return ('rom',addr,width,width<32)
 if isinstance(addr,tuple) and addr[0]=='sp' and addr[1]>=0 and addr[1]%4==0 and width==32:return ('arg',4+addr[1]//4)
 return None

def transfer(r,s):
 s=list(s);p=r['a'];op=r['op'];w=struct.unpack_from('>H',b,p)[0];n=(w>>8)&15;m=(w>>4)&15
 if w>>12==0xd:
  q=((p+4)&~3)+(w&255)*4;s[n]=struct.unpack_from('>I',b,q)[0] if q+4<=len(b) else None
 elif w>>12==9:
  q=p+4+(w&255)*2;s[n]=struct.unpack_from('>h',b,q)[0]&0xffffffff if q+2<=len(b) else None
 elif w>>12==0xe:s[n]=((w&255)-(256 if w&128 else 0))&0xffffffff
 elif w&0xf00f==0x6003:s[n]=s[m]
 elif w>>12==7:s[n]=expression('add',s[n],(w&255)-(256 if w&128 else 0))
 elif w&0xf00f in [0x600c,0x600d,0x600e,0x600f]:s[n]=expression(('s' if w&2 else 'u')+('16' if w&1 else '8'),s[m])
 elif w&0xf00f==0x300c:s[n]=expression('add',s[n],s[m])
 elif w&0xf00f==0x3008:s[n]=expression('sub',s[n],s[m])
 elif w&0xf00f in [0x6000,0x6001,0x6002,0x6004,0x6005,0x6006]:s[n]=memread(s[m],8<<(w&3))
 elif op.startswith(('mov.b ','mov.w ','mov.l ')) and re.search(r',r\d+$',op):
  refs=[int(x.split(':')[0],16) for x in r['references'].split(';') if re.fullmatch(r'[0-9a-f]+:READ',x)]
  z=re.search(r',r(\d+)$',op);width={'mov.b':8,'mov.w':16,'mov.l':32}[op.split()[0]]
  if len(refs)==1:s[int(z[1])]=memread(refs[0],width)
  else:
   load=re.search(r'@\((-?0x[0-9a-f]+),r(\d+)\)',op)
   s[int(z[1])]=memread(expression('add',s[int(load[2])],int(load[1],16)),width) if load else None
 elif op.startswith('mova '):s[0]=((p+4)&~3)+(w&255)*4
 elif op.startswith(('movi20 ','movi20s ')):
  z=re.fullmatch(r'movi20(s)? #?(-?0x[0-9a-f]+),r(\d+)',op)
  if z:s[int(z[3])]=(int(z[2],16)*(256 if z[1] else 1))&0xffffffff
  else:s[n]=None
 elif (z:=re.fullmatch(r'(shll|shlr|shal|shar)(2|8|16)? r(\d+)',op)):
  kind='ashr' if z[1]=='shar' else 'shr' if z[1]=='shlr' else 'shl';s[int(z[3])]=expression(kind,s[int(z[3])],int(z[2] or 1))
 elif op.startswith(('cmp','tst','bt','bf','bra','bsr','jsr','jmp','rts','rte','nop','sts','lds','f','clrt','sett','div0')):pass
 else:
  z=re.search(r',r(\d+)$',op)
  if z:s[int(z[1])]=None
  elif (z:=re.fullmatch(r'(?:movt|rot\w+|dt) r(\d+)',op)):s[int(z[1])]=None
 # Track stack displacement across saves; popped register values are deliberately unknown.
 for z in re.finditer(r'@-r(\d+)',op):s[int(z[1])]=expression('add',s[int(z[1])],-4)
 for z in re.finditer(r'@r(\d+)\+',op):s[int(z[1])]=expression('add',s[int(z[1])],4) if int(z[1])==15 else None
 return tuple(s)

def targets(r,typ):return [int(v.split(':')[0],16) for v in r['references'].split(';') if v and typ in v and re.match(r'^[0-9a-f]+:',v)]
calls={}
for entry,g in groups.items():
 if entry not in g:continue
 initial=[None]*16
 for i in range(4):initial[i+4]=('arg',i)
 initial[15]=('sp',0);states={entry:tuple(initial)};todo=collections.deque([entry]);count=0
 while todo:
  a=todo.popleft();r=g[a];op=r['op'];s=states[a];count+=1
  if count>len(g)*40:raise RuntimeError(f'nonconvergent {entry:x}')
  nexta=a+(4 if a+2 not in ins and a+4 in ins else 2)
  isc=op.startswith(('jsr ','bsr ','bsrf '));isj=op.startswith(('jmp ','bra ','braf '));cond=op.startswith(('bt ','bf ','bt/s ','bf/s '));ret=op.startswith(('rts','rte'));delay=isc or isj or ret or op.startswith(('bt/s','bf/s'))
  ts=targets(r,'CALL') if isc else targets(r,'JUMP')
  if (isc or isj) and not ts:
   z=re.search(r'@?r(\d+)',op)
   if z and isinstance(s[int(z[1])],int):ts=[(s[int(z[1])]+(a+4 if op.startswith(('bsrf','braf')) else 0))&0xffffffff]
  ns=transfer(r,s)
  if delay and a+2 in ins:ns=transfer(ins[a+2],ns);nexta=a+4
  if isc:
   target=ts[0] if len(ts)==1 else None;args=ns[4:8]
   calls[a]=dict(call=a,function=entry,target=target,arguments=args)
   val=expression('ret',target,*args) if target else None
   ns=(val,)+(None,)*7+ns[8:]
  succ=[] if ret else ts if isj else [nexta]+ts if cond else [nexta]
  for q in succ:
   if q not in g:continue
   old=states.get(q);new=ns if old is None else tuple(x if x==y else None for x,y in zip(old,ns))
   if old is None or old!=new:states[q]=new;todo.append(q)
(E/'symbolic-calls.json').write_text(json.dumps(list(calls.values()),indent=2));print('symbolic calls',len(calls))
