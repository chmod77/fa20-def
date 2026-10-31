"""Secondary (non-descriptor) calibration tables read by runtime helpers in 0x16B000-0x16CB14.
Layouts established from each helper's decompiled code (cdump/0016xxxx.c):
  struct helpers  param_1 -> {u32 data_ptr, u32 axis_ptr, u8 count}; linear interpolation unless 'step'
    0x16BC08 axis u16 / data s16 ('<' search)      0x16B14C axis u16 / data s16 ('<=' search)
    0x16B1A8 axis s16 / data s16                   0x16BA80 axis u16 / data s8
    0x16B9A4 axis u8  / data s8                    0x16BAE4 axis u8  / data s16
    0x16B238 axis u8  / data s16 (step)            0x16BCEC axis u16 / data s8 (step)
  fixed-step helpers  param_1 -> data array, implicit axis
    0x16BC68 16 x u16, input 0..0xF000 step 0x1000     0x16BB44 16 x u16, input 0..240 step 16
    0x16BA04 16 x u8,  input 0..240 step 16            0x16B0AC 64 x u32, input 0..0x3F00 step 0x100
Only call sites whose table argument is a constant ROM address are recorded.
Output: evidence/helper-tables.json"""
import re, os, glob, json, struct, collections, hashlib
H = os.path.dirname(os.path.abspath(__file__)); ROOT = os.path.dirname(H)
rom = open(f'{ROOT}/../../roms/LF6A401A_T893ESJ92045C7207-20261024-072556.bin', 'rb').read()
STRUCT = {'0016bc08': ('uint16', 'int16', False), '0016b14c': ('uint16', 'int16', False), '0016b1a8': ('int16', 'int16', False),
          '0016ba80': ('uint16', 'int8', False), '0016b9a4': ('uint8', 'int8', False), '0016bae4': ('uint8', 'int16', False),
          '0016b238': ('uint8', 'int16', True), '0016bcec': ('uint16', 'int8', True)}
FIXED = {'0016bc68': ('uint16', 16, 0, 0x1000), '0016bb44': ('uint16', 16, 0, 16), '0016ba04': ('uint8', 16, 0, 16),
         '0016b0ac': ('uint32', 64, 0, 0x100)}
W = {'uint8': 1, 'int8': 1, 'uint16': 2, 'int16': 2, 'uint32': 4}
F = {'uint8': 'B', 'int8': 'b', 'uint16': 'H', 'int16': 'h', 'uint32': 'I'}
sys_path = H
import sys
sys.path.insert(0, H)
from callargs import split_args
out = {}
def fill(rec, a, h):
    if h in STRUCT:
        at, dt, step = STRUCT[h]
        dp, ap = struct.unpack_from('>II', rom, a); n = rom[a + 8]
        rec.update(kind='struct', data_address=dp, axis_address=ap, count=n, axis_storage=at, data_storage=dt, step=step,
                   axis=list(struct.unpack_from('>' + str(n) + F[at], rom, ap)),
                   data=list(struct.unpack_from('>' + str(n) + F[dt], rom, dp)))
    else:
        dt, n, a0, st = FIXED[h]
        rec.update(kind='fixed', data_address=a, count=n, data_storage=dt, step=False, axis_static=[a0 + i * st for i in range(n)],
                   data=list(struct.unpack_from('>' + str(n) + F[dt], rom, a)))
    rec['data_sha256'] = hashlib.sha256(rom[rec['data_address']:rec['data_address'] + rec['count'] * W[rec['data_storage']]]).hexdigest()


for p in sorted(glob.glob(f'{ROOT}/cdump/*.c')):
    fn = os.path.basename(p)[:-2]; s = open(p).read()
    for m in re.finditer(r'FUN_(0016[bc][0-9a-f]{3})\(', s):
        h = m.group(1)
        if h not in STRUCT and h not in FIXED:
            continue
        args = split_args(s, m.end())
        if len(args) < 2:
            continue
        am = re.search(r'&(?:PTR_)?(?:DAT_|LAB_|UNK_)?(?:\w*_)?([0-9a-f]{8})\b', args[0])
        if not am:
            continue
        a = int(am.group(1), 16)
        if a >= len(rom):
            continue
        rec = out.setdefault(a, dict(table=a, helper=h, sites=[]))
        rec['sites'].append(dict(function=fn, input=args[1]))
        fill(rec, a, h)
# instruction-level call sites (evidence/stack-args.tsv: r4 = table pointer) catch calls whose C prototype lost arguments
for l in list(open(f'{ROOT}/evidence/stack-args.tsv'))[1:]:
    ce, cr, ia, k, v = l.split()
    h = ce.zfill(8); a = int(v, 16)
    if k != '1' or (h not in STRUCT and h not in FIXED) or a >= len(rom) or a < 0x8000:
        continue
    rec = out.setdefault(a, dict(table=a, helper=h, sites=[]))
    if not any(x['function'] == cr.zfill(8) for x in rec['sites']):
        rec['sites'].append(dict(function=cr.zfill(8), input=f'r5 at 0x{ia} (instruction-level call site)'))
    fill(rec, a, h)

json.dump({f'0x{k:X}': v for k, v in sorted(out.items())}, open(f'{ROOT}/evidence/helper-tables.json', 'w'), indent=1)
print(len(out), 'secondary tables;', collections.Counter(v['helper'] for v in out.values()))
for k, v in sorted(out.items()):
    print(f"0x{k:06X} {v['helper']} n={v['count']} {v['data_storage']} data@{v['data_address']:X} {v['data'][:6]} sites={[x['function'] for x in v['sites']][:3]} in={v['sites'][0]['input'][:40]}")
