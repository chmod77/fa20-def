"""Join: SSM standard address -> shadow RAM (ECU table 0x15F9D8) -> formatter call (source var, converter)
-> public SSM parameter definition (logger_METRIC_EN_v370.xml, standard <parameter> with <address>).
Output evidence/ssm-join.tsv"""
import json,re,sys,os
sys.path.insert(0,os.path.dirname(__file__))
from variables import V
E=os.path.join(os.path.dirname(__file__),'..','evidence')
m=json.load(open(f'{E}/ssm-address-map.json'))
shadow={e['ssm_address']:e['ram_address'] for e in m['entries']}
calls=json.load(open(f'{E}/ssm-formatter-calls.json'))
bydst={}
for c in calls:
    r4=c['args']['r4']; r5=c['args']['r5']
    if r5 and r5[0]=='const': bydst[r5[1]]=c
s=open(os.path.join(E,'../../../logger-defs/logger_METRIC_EN_v370.xml')).read()
params={}
for p in re.finditer(r'<parameter id="(P\d+)" name="([^"]+)"[^>]*>(.*?)</parameter>',s,re.S):
    body=p.group(3)
    a=re.search(r'<address(?: length="(\d+)")?>0x([0-9A-Fa-f]+)</address>',body)
    if not a: continue
    convs=re.findall(r'<conversion units="([^"]*)" expr="([^"]*)" format="[^"]*"(?: storagetype="([^"]*)")?',body)
    params.setdefault(int(a.group(2),16),[]).append((p.group(1),p.group(2),int(a.group(1) or 1),convs[:1]))
out=open(f'{E}/ssm-join.tsv','w')
out.write('ssm_addr\tparam\tname\tlen\tconv\tshadow\tformatter\tconverter\tsource\tknown\n')
for sa in sorted(params):
    for pid,name,ln,conv in params[sa]:
        sh=shadow.get(sa)
        # find formatter writing shadow (or shadow-1 for 16-bit hi byte ordering)
        c=bydst.get(sh) if sh else None
        src=''; conv_fn=''; fcall=''
        if c:
            r4=c['args']['r4']; fcall=hex(c['call']); conv_fn=hex(c['target'])
            if r4 and r4[0]=='load': src='%s:%08X'%(r4[1],r4[2])
            else: src=str(r4)
        known=V.get(int(src.split(':')[1],16),('',))[0] if src.startswith(('b:','w:','l:')) else ''
        out.write('\t'.join(map(str,[hex(sa),pid,name,ln,conv,hex(sh) if sh is not None else '',fcall,conv_fn,src,known]))+'\n')
