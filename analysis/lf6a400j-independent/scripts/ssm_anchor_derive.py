"""Derive RAM-variable engineering scalings from (a) emulated SSM converter probes and
(b) the public SSM standard-parameter definitions (address -> name, conversion).
physical(x) = public_expr( converter(x) ); fitted linear over the non-saturated domain.
Output: evidence/ssm-derived-anchors.tsv"""
import csv,collections,json,os,sys,math
import xml.etree.ElementTree as ET
from fractions import Fraction
E=os.path.join(os.path.dirname(__file__),'..','evidence')
root=ET.parse(os.path.join(E,'../../../logger-defs/logger_METRIC_EN_v370.xml')).getroot()
pub=collections.defaultdict(list)
proto=[x for x in root.iter('protocol') if x.get('id')=='SSM'][0]
for p in proto.iter('parameter'):
    a=p.find('address')
    if a is None or p.find('depends') is not None: continue
    conv=p.find('conversions/conversion')
    if conv is None: continue
    pub[int(a.text,16)].append(dict(id=p.get('id'),name=p.get('name'),len=int(a.get('length','1')),
        units=conv.get('units'),expr=conv.get('expr'),stype=conv.get('storagetype','uint8')))
m=json.load(open(f'{E}/ssm-address-map.json'))
sh2ssm=collections.defaultdict(list)
for e in m['entries']: sh2ssm[e['ram_address']].append(e['ssm_address'])
meta={x['name']:x for x in json.load(open(f'{E}/ssm-probe-meta.json'))}
R=collections.defaultdict(list)
for r in csv.DictReader(open(f'{E}/ssm-probe-results.tsv'),delimiter='\t'):
    if r['status']=='OK': R[r['name']].append((int(r['input']),int(r['output'])))
out=open(f'{E}/ssm-derived-anchors.tsv','w')
out.write('src\twidth\tssm_addr\tparam\tname\tunits\tphys_scale\tphys_offset\tmax_abs_err\tlin_x_range\tconverter\n')
for n,pts in R.items():
    mt=meta[n]; dest=int(mt['dest'],16)
    # 16-bit SSM values occupy shadow,shadow+1 ; ssm address maps to the first byte
    cands=[(sa,p) for sa in sh2ssm.get(dest,[]) for p in pub.get(sa,[])]
    if not cands: continue
    for sa,p in cands:
        def phys(y):
            x=y
            if p['stype']=='int8' and x>127: x-=256
            try: return eval(p['expr'],{'__builtins__':{}},{'x':x})
            except Exception: return None
        best=None
        for sgn in (0,1):
            W=1<<(8*mt['srcw'])
            P=sorted(((x-W if sgn and x>=W//2 else x),y) for x,y in pts)
            ys=[y for _,y in P]; lo,hi=min(ys),max(ys)
            if p['len']==1 and hi>255: continue
            mid=[(x,phys(y)) for x,y in P if lo<y<hi]
            if len(mid)<3 or any(v is None for _,v in mid): continue
            (x0,v0),(x1,v1)=mid[0],mid[-1]
            if x1==x0: continue
            A=(v1-v0)/(x1-x0); B=v0-A*x0
            err=max(abs(v-(A*x+B)) for x,v in mid)
            if best is None or err<best[2]: best=(A,B,err,mid,sgn)
        if best is None: continue
        A,B,err,mid,sgn=best
        out.write('\t'.join(map(str,[mt['src'],('s' if sgn else 'u')+str(mt['srcw']),hex(sa),p['id'],p['name'],p['units'],'%.9g'%A,'%.9g'%B,'%.4g'%err,f'{mid[0][0]}..{mid[-1][0]}',mt['converter']]))+'\n')
