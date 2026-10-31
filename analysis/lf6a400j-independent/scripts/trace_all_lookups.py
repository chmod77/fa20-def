#!/usr/bin/env python3
"""For every caller function of a recognised lookup, trace r4-r7 at each lookup call."""
import json,sys,os
sys.path.insert(0,os.path.dirname(__file__))
import trace_call_args as T
E=os.path.join(os.path.dirname(__file__),'..','evidence')
recs=json.load(open(f'{E}/calibrations.json'))
targets={c['target'] for r in recs for c in r['calls']}
fns=sorted({c['function'] for r in recs for c in r['calls']})
out=[]
for fn in fns:
    for c in T.trace(fn):
        if c['target'] in targets:
            out.append(dict(function=fn,call=c['call'],target=c['target'],
              args={k:v for k,v in c['args'].items()},stack=c['stack']))
json.dump(out,open(f'{E}/lookup-call-args.json','w'),indent=0)
print(len(fns),'functions',len(out),'lookup calls traced')
