"""Build a table <-> RAM-variable dataflow graph from evidence/dataflow.jsonl.

For every store record the expression text is scanned for
  * RAM reads            RAMn[0xADDR]
  * lookup calls         call ROM[..]=0x<lookup>(ROM[..]=0x<descriptor>, ...)
  * other calls          call ROM[..]=0x<fn>(...)
and an edge source -> destination is emitted.  Output: evidence/graph.json
  writes[dst]   = list of {fn, at, sz, tables:[desc], vars:[addr], calls:[fn], e}
  table_out[desc] = list of dst (RAM address or pointer expression)
  readers[var]  = list of {fn, dst}
"""
import json, re, collections, os
EV = os.path.join(os.path.dirname(__file__), '..', 'evidence')
lookups = {int(l.split()[0], 16) for l in open(os.path.join(EV, 'lookup-signatures.tsv'))}
descs = {c['descriptor'] for c in json.load(open(os.path.join(EV, 'calibrations.json')))}

RAM = re.compile(r'RAM(\d)\[0x([0-9A-F]+)\]')
CALL = re.compile(r'call (?:ROM\[0x[0-9A-F]+\]=)?0x([0-9A-F]+)\(')
DESC = re.compile(r'0x([0-9A-F]+)')


def scan(e):
    tables, calls = set(), set()
    for m in CALL.finditer(e):
        t = int(m.group(1), 16)
        if t in lookups:
            # first argument
            arg = e[m.end():m.end() + 40]
            a0 = arg.split(',')[0].split(')')[0].split('=')[-1]
            d = DESC.search(a0)
            if d and int(d.group(1), 16) in descs:
                tables.add(int(d.group(1), 16))
            else:
                tables.add(('dyn', t))
        else:
            calls.add(t)
    vs = {(int(a, 16), int(w)) for w, a in RAM.findall(e)}
    return tables, vs, calls


writes = collections.defaultdict(list)
table_out = collections.defaultdict(set)
readers = collections.defaultdict(set)
fn_tables = collections.defaultdict(set)
for line in open(os.path.join(EV, 'dataflow.jsonl')):
    d = json.loads(line)
    if d['k'] == 'call':
        t = d['t']
        for a in d.get('args', []):
            tb, vs, cl = scan(a)
            for x in tb:
                if not isinstance(x, tuple):
                    fn_tables[int(d['fn'], 16)].add(x)
        continue
    if d['k'] != 'store':
        continue
    dst = d['dst']
    tb, vs, cl = scan(d['e'])
    rec = dict(fn=d['fn'], at=d['at'], sz=d['sz'], tables=sorted(hex(x) for x in tb if not isinstance(x, tuple)),
               vars=sorted(hex(a) for a, w in vs), calls=sorted(hex(c) for c in cl), e=d['e'][:600])
    writes[dst].append(rec)
    for x in tb:
        if not isinstance(x, tuple):
            table_out[hex(x)].add(dst)
            fn_tables[int(d['fn'], 16)].add(x)
    for a, w in vs:
        readers[hex(a)].add((d['fn'], dst))

json.dump(dict(writes=writes, table_out={k: sorted(v) for k, v in table_out.items()},
               readers={k: sorted(v) for k, v in readers.items()}),
          open(os.path.join(EV, 'graph.json'), 'w'))
print('stores', sum(len(v) for v in writes.values()), 'dsts', len(writes))
print('tables with a store-traced output', len(table_out), 'of', len(descs))
