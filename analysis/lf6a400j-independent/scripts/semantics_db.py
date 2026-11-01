"""Per-descriptor identifications.  Run to regenerate evidence/semantics.json.
Each entry: status 'identified' (name AND output scaling proven) or 'partial' (role proven, output
units not), name, category, data scaling {units, expr, to_byte, format}, axis overrides, evidence.
Evidence strings cite the decompiled function(s) in cdump/ and the anchor chain."""
import json, os, re
H = os.path.dirname(os.path.abspath(__file__)); ROOT = os.path.dirname(H)
S = {}


AUTO = set()   # descriptors added by the generic comparison/timer blocks; a later specific entry replaces them
def add(desc, name, category, evidence, data=None, status='identified', description='', axes=None, static_values=None):
    assert desc not in S or desc in AUTO, hex(desc)
    AUTO.discard(desc)
    S[desc] = dict(status=status, name=name, category=category, evidence=evidence, description=description)
    if data:
        u, e, t, *f = data
        S[desc]['data'] = dict(units=u, expr=e, to_byte=t, format=(f[0] if f else '0.00'))
    if axes:
        S[desc]['axes'] = axes
    if static_values:
        S[desc]['static_values'] = static_values


PCT32768 = ('%', 'x*100/32768', 'x*32768/100', '0.00')

# ---------------------------------------------------------------- airflow / load model
add(0x2ED10, 'Volumetric Efficiency (Primary)', 'Airflow - Speed Density',
    '0xD0214 T_02ED10(FFFF2994 rpm, FFFF09B8 MAP) -> FFFF0F5A; 0xD025C ratio=x*3.0517578e-05 (1/32768) -> FFFF16A4 (VE) '
    'used in 0xCFEDC air mass = VE*rpm*P/(287*(T+273)) and 0x7E3F8 Engine Load. Selected path: 0xCF4B4 passes param_2=0 so '
    '0xD025C always takes param_3 (this table).', PCT32768)
add(0x2ED24, 'Volumetric Efficiency (Alternate)', 'Airflow - Speed Density',
    '0xD0238 T_02ED24(rpm, FFFF09B8 MAP) -> FFFF0F5C; 0xD025C would select it only when param_2!=0 and flag FFFF0519.7==0, '
    'but caller 0xCF4B4 passes param_2=0 (constant), so it is not used for FFFF16A4 in this ROM.', PCT32768)

# ---------------------------------------------------------------- ignition timing
# Unit chain (all in 0.5 deg): 0x98FAC FFFF046C (SSM 0x11 / OBD PID0E, deg=x/2) = 0473 + (0477-128) + 04AD*180/256
#   + 0494 - 0454 + 047B - 2*0455 + 045A + 0460 ; 0x99558 0473 = 048B + (0459-128) + 0479 + 047A + (T_02D5DC-32) [+T_02D5C8];
#   0x97080 0459=0x80 ; 0x9B4B4 048B = rate-limited 0488 ; 0x9B384 0488 = 03D1 - T_02D890(0AA8), <= 0497, - 048F ;
#   0x86758 03D1 = base map + 049C + 049B.
DEG2 = ('deg', 'x/2', 'x*2', '0.0')
IGN = 'Ignition Timing'
_base_ev = ('0x86758: FFFF03D1 = map(FFFF2994 rpm, FFFF09B4 load) + FFFF049C + FFFF049B; selected by flags FFFF04F4.7 / FFFF054A.4 '
            '(0x87478 passes (04F4&0x80)!=0, (054A&0x10)!=0). 03D1 flows in 0.5 deg units to Ignition Total Timing FFFF046C '
            '(0x9B384 -> 0x9B4B4 -> 0x99558 -> 0x98FAC), SSM 0x11 deg=x/2.')
add(0x2C9C0, 'Base Ignition Timing (flags 04F4.7=0, 054A.4=0)', IGN, _base_ev, DEG2)
add(0x2C9D4, 'Base Ignition Timing (flags 04F4.7=0, 054A.4=1)', IGN, _base_ev, DEG2)
add(0x2C998, 'Base Ignition Timing (flags 04F4.7=1, 054A.4=0)', IGN, _base_ev, DEG2)
add(0x2C9AC, 'Base Ignition Timing (flags 04F4.7=1, 054A.4=1)', IGN, _base_ev, DEG2)
add(0x2D5DC, 'Ignition Timing Compensation (RPM x Load, flag 056B.6)', IGN,
    '0x99558: added to FFFF0473 as (x-32) half-degrees when FFFF056B.6 set (else 32 = neutral); inputs rpm FFFF2994, load FFFF09B4.',
    ('deg', '(x-32)/2', 'x*2+32', '0.0'))
add(0x2D5C8, 'Ignition Timing Compensation (Load x RPM, disabled)', IGN,
    '0x99558: added to FFFF0473 (half-degrees) only if param_2!=0; caller 0x9CBF8 passes constant 0, so never applied in this ROM.', DEG2)
_gear_ev = ('0x9D364: FFFF0494 = -(map*23/128) half-degrees (= map*23/256 deg retard) applied to Ignition Total Timing (0x98FAC); '
            'map selected by gear FFFF03AC (1:D8D4 2:D8E8 3:D8FC 4:D910 5:D924; D8FC also used for flagged states); active when '
            'rpm FFFF2994 >= 0x3800/0x3600 (2800/2637.5 rpm hysteresis) and load FFFF09B4 >= 0x4100/0x3200 (65/50 %).')
for d, g in ((0x2D8D4, '1st'), (0x2D8E8, '2nd'), (0x2D8FC, '3rd / default'), (0x2D910, '4th'), (0x2D924, '5th')):
    add(d, f'Ignition Timing Retard ({g} gear)', IGN, _gear_ev, ('deg retard', 'x*23/256', 'x*256/23', '0.00'))
add(0x2D5BC, 'Minimum Ignition Timing (Coolant)', IGN,
    '0x98FAC: lower clamp of Ignition Total Timing FFFF046C (half-degrees) when FFFEE710.5 clear and 4 < FFFF29B4/4 < 81; '
    'input coolant FFFEEEDE; otherwise floor is -25 deg.', DEG2)

# ---------------------------------------------------------------- boost control (wastegate)
# 0xBC86C orchestration; struct base FFFF0E2E. Final WG duty FFFF0E5E (SSM 0x30, conv 0xD07DC y=x*0xA333>>22, %=y*100/255 => %=x/256)
#   = 0xBDA84(FFFF0E2E) ; 0E2E = min(0E34, 0E30) (0xBCEFC) ; 0E30 = mode 0520: 1->0, 3/5/6->0E46, else 0E4E (0xBCF10);
#   0E4E = min(0E32*0E5C/32768 + 0E50, 0E42) (0xBD2AC): initial*comp + feedback, capped at max.
WG = 'Boost Control - Wastegate'
DUTY = ('%', 'x/256', 'x*256', '0.00')
add(0x2E588, 'Wastegate Duty Initial', WG,
    '0xBCF30: FFFF0E32 = T(rpm FFFF2994, FFFF0A62); 0xBD2AC: duty FFFF0E4E = FFFF0E32*FFFF0E5C/32768 + feedback FFFF0E50 -> WG duty FFFF0E5E (%=x/256).', DUTY,
    description='Y: engine speed; X: FFFF0A62 (torque-domain request, 16000 = zero; units unresolved).')
add(0x2E59C, 'Wastegate Duty Maximum', WG,
    '0xBD11C: FFFF0E42 = T(rpm, FFFF0A62)*FFFF0E5C/32768; 0xBD2AC caps FFFF0E4E at FFFF0E42 -> WG duty.', DUTY,
    description='X: FFFF0A62 (torque-domain request, units unresolved).')
add(0x2E5F4, 'Target Boost', 'Boost Control - Target',
    '0xBD7C4: FFFF0E56 = (T + 0xD4C)*FFFF0E58/32768 - 0xD4C, compared against MAP FFFF09BA (kPa=x/256+13.3, A/D ch 0x12 offset form, 0x14AE50) in 0xBD300 boost-error feedback.',
    ('kPa absolute', 'x/256+13.3', '(x-13.3)*256', '0.0'), description='X: FFFF0A62 (torque-domain request, units unresolved). Value before atmospheric/IAT compensation (FFFF0E58).')
add(0x2E5E0, 'Target Boost Compensation (Atmospheric Pressure)', 'Boost Control - Target',
    '0xBD7A0: FFFF052A = T(rpm, atmospheric FFFEE6AA); 0xBD8F4: FFFF0E58 = IATfactor*052A*2*FFFF0529>>7 multiplies Target Boost (0xBD7C4); 128 = 1.0.',
    ('%', 'x*100/128', 'x*128/100', '0.0'))
add(0x2E620, 'Wastegate Duty Compensation (Atmospheric Pressure)', WG,
    '0xBDA58: FFFF0E5A = T(rpm, atmospheric FFFEE6AA)<<8; 0xBDA04: FFFF0E5C = 0E5A*IATfactor>>7 multiplies WG Duty Initial and Maximum (0xBD2AC/0xBD11C); 128 = 1.0.',
    ('%', 'x*100/128', 'x*128/100', '0.0'))
_fb = ('0xBD300: boost error e = Target Boost FFFF0E56 - MAP FFFF09BA (same offset encoding => kPa = x/256); ')
add(0x2E5D4, 'Wastegate Duty Proportional (Boost Error)', WG, _fb + 'P term = T(e)*IATfactor>>7 -> feedback FFFF0E50 (duty, %=x/256).', DUTY,
    axes={'0': dict(name='Boost Error', units='kPa', expr='x/256', to_byte='x*256')})
add(0x2E5C8, 'Wastegate Duty Integral Positive (Boost Error)', WG, _fb + 'integral step when e > 0xA9 (0.66 kPa) and duty below limit; accumulator clamped at 0x0A00.', DUTY,
    axes={'0': dict(name='Boost Error', units='kPa', expr='x/256', to_byte='x*256')})
add(0x2E5BC, 'Wastegate Duty Integral Negative (Boost Error)', WG, _fb + 'integral step when e < 0 and duty >= 0x500; accumulator clamped at -0x5A00.', DUTY,
    axes={'0': dict(name='Boost Error', units='kPa', expr='x/256', to_byte='x*256')})
add(0x2E5B0, 'Wastegate Feedback Activation Threshold (Target Boost, relative)', WG,
    '0xBD300: s = Target Boost FFFF0E56 - atmospheric FFFEE6AA + 0xD4D = target gauge pressure *256 (offset forms cancel); '
    'P/I feedback is zeroed unless s > T(rpm FFFF2994) (+0x6AA hysteresis) and rpm > 0x1400/0x1600 (1000/1100 rpm) and mode FFFF0520 allows.',
    ('kPa (relative)', 'x/256', 'x*256', '0.00'))

# ---------------------------------------------------------------- fuel target (open loop)
# OBD PID 44 (commanded equivalence ratio, lambda = (256A+B)/32768) formatter 0x10C32C: when FFFF050E.7==0,
#   PID44 = (0x200000/(FFFF0B84 + FFFF0401 + FFFF0B42 + 256))<<2  =>  lambda = 256/(256 + sum): each term is
#   fuel enrichment in (phi-1)*256 units.  FFFF0401 = 0x8F9C0: max(FFFF0400 if >=5, T_02D07C, T_02D094)*T_02D088/128.
#   FFFF0400 = 0x8F8C0 with param_3 = 0 (constant from 0x888C0): T_02D028(rpm, load FFFF03A0) + T_02D050(rpm, load)*(16-IAM)/16.
FUEL = 'Fueling - Open Loop'
LAM = ('lambda', '256/(256+x)', '256/x-256', '0.000')
_ol = 'OBD PID44 (0x10C32C) commanded lambda = 256/(256 + FFFF0B84 + FFFF0401 + FFFF0B42); '
add(0x2D028, 'Primary Open Loop Fueling', FUEL,
    _ol + '0x8F8C0: FFFF0400 = T(rpm FFFF2994, load FFFF03A0) + T_02D050*(16-IAM)/16; 0x8F9C0: FFFF0401 = max(0400,...)*coolant mult/128.', LAM)
add(0x2D050, 'Primary Open Loop Fueling Additive (Low IAM)', FUEL,
    _ol + '0x8F8C0: added to Primary Open Loop Fueling scaled by (16-IAM)/16, IAM = FFFF3669 (SSM 0xF9, x/16): full value at IAM 0, none at IAM 1.0.',
    ('lambda (at IAM 0)', '256/(256+x)', '256/x-256', '0.000'))
add(0x2D03C, 'Primary Open Loop Fueling (Alternate, not selected)', FUEL,
    _ol + '0x8F8C0: only used when param_3!=0; caller 0x888C0 passes constant 0, so it never reaches FFFF0400 in this ROM.', LAM)
add(0x2D064, 'Primary Open Loop Fueling Offset vs FFFF049B (not selected)', FUEL,
    '0x8F8C0: added only on the param_3!=0 path (caller passes 0), so not applied in this ROM. Input FFFF049B (signed byte).', ('raw', 'x', 'x', '0'),
    status='partial')
add(0x2D088, 'Open Loop Fueling Multiplier (Coolant)', FUEL,
    _ol + '0x8F9C0: FFFF0401 = max(enrichments)*T(coolant FFFEEEDE)/128.', ('%', 'x*100/128', 'x*128/100', '0.0'))
add(0x2D07C, 'Open Loop Fueling Enrichment (Accelerator Pedal)', FUEL,
    _ol + '0x8F9C0: candidate in max() for FFFF0401 when FFFF0B30 >= FFFF0B40; input FFFEECB4 = selected accelerator pedal (0x69F44).', LAM)
add(0x2D094, 'Open Loop Fueling Enrichment (input FFFF29B4)', FUEL,
    _ol + '0x8F9C0: candidate in max() for FFFF0401 when FFFF0B30 >= FFFF0B40; input FFFF29B4 = FFFF02C4-10 (0x69F44), physical meaning unresolved.', LAM)

_e42 = (_ol + '0x8CBE4 -> FFFF0B42 (only when FFFF03DF.1 set, else 0): T_02CE08 when coolant FFFEEEDE >= 0xE000 (100 C) and rpm < 0xF000, '
        'T_02CE1C when coolant < 0xDCCD (97.5 C) or rpm max; hysteresis holds the previous selection in between. Inputs rpm FFFF2994, load FFFF03A0.')
add(0x2CE08, 'Fuel Enrichment (Coolant >= 100 C)', FUEL, _e42, LAM)
add(0x2CE1C, 'Fuel Enrichment (Coolant < 100 C)', FUEL, _e42, LAM)
_e84 = (_ol + '0x90390 -> FFFF0B84 (computed only in engine state FFFF66B0 = 2 or 3, otherwise held): T_02D138(coolant FFFEEEDE), or '
        '[T_02D144(load,coolant)*(1-w) + T_02D158(load,coolant)*w]*T_02D16C(rpm)/128 with w = FFFF0E90/65536; the result is limited by a '
        'counter (FFFEBD76) decremented every execution, i.e. the enrichment decays over time.')
add(0x2D138, 'Decaying Fuel Enrichment (Coolant)', FUEL, _e84, LAM)
add(0x2D144, 'Decaying Fuel Enrichment A (Load x Coolant)', FUEL, _e84, LAM)
add(0x2D158, 'Decaying Fuel Enrichment B (Load x Coolant)', FUEL, _e84, LAM)
add(0x2D16C, 'Decaying Fuel Enrichment Multiplier (RPM)', FUEL, _e84, ('%', 'x*100/128', 'x*128/100', '0.0'))

_b9b = ('0x9D9F0: FFFF049B = T_02D990(IAT FFFEEEE2) * T_02D97C(rpm, load FFFF09B4) / 128 (half-degrees), only when FFFEE6AF==3 and '
        'FFFF299C (rpm/25) > 0x1F (775 rpm); 0x86758 adds FFFF049B to base timing FFFF03D1 -> Ignition Total Timing FFFF046C (SSM 0x11).')
add(0x2D990, 'Ignition Timing Compensation (IAT)', IGN, _b9b, DEG2)
add(0x2D97C, 'Ignition Timing Compensation (IAT) Activation (RPM x Load)', IGN, _b9b, ('%', 'x*100/128', 'x*128/100', '0.0'))
_b9c = ('0x9DAC8: FFFF049C = FFFF0487 + T(coolant FFFEEEDE) - 128 (half-degrees; FFFF0487 is the 128-biased output of 0x9B058), only when '
        'FFFEE6AF==3 and FFFF299C (rpm/25) > 0x1F (775 rpm); T_02D99C when FFFF299C >= 200 (5000 rpm; 192 = 4800 rpm hysteresis), else T_02D9A8; 0x86758 adds FFFF049C to base timing.')
add(0x2D99C, 'Ignition Timing Compensation (Coolant, >= 5000 rpm)', IGN, _b9c, DEG2)
add(0x2D9A8, 'Ignition Timing Compensation (Coolant, < 5000 rpm)', IGN, _b9c, DEG2)
add(0x2D938, 'Ignition Timing Limit (Base Path)', IGN,
    '0x9D664: FFFF0497 = T(rpm, load FFFF09B4); 0x9B384: FFFF0488 = min(FFFF03D1 - T_02D890, FFFF0497) (half-degrees) -> 048B -> 0473 -> FFFF046C.', DEG2)
add(0x2D890, 'Ignition Retard vs Required Torque Efficiency', IGN,
    '0x9B384: FFFF0488 = FFFF03D1 - T(e) (half-degrees) when FFFF03C6 not in {11,12,25,26,27}, e = FFFF03D7<<7 (or FFFF0AA8 when FFFFE6AF=3), '
    'clamped 0x66..0x100 (<<7: 0x3300..0x8000). 0x870FC: FFFF03D7 = (FFFF0AA8 * r/32768) >> 7 with r = (FFFF0ABE-16000)*32768/(filtered torque-16000) '
    '(torque ratio, 32768 = 1.0); FFFF0AA8 = Torque Efficiency vs Ignition Retard (T_02C8DC) at the current retard. So the input is the torque '
    'efficiency required for the requested torque, in the T_02C8DC scale (32768 = efficiency at zero retard, the clamp maximum), and T is the '
    'inverse map: retard below the reference timing 03D1.', ('deg', 'x/2', 'x*2', '0.0'),
    axes={'0': dict(name='Required Torque Efficiency', units='ratio', expr='x/32768', to_byte='x*32768')})

# ---------------------------------------------------------------- sensor scalings (secondary helper tables, keyed by struct address)
SENS = 'Sensors'
add(0x1638A4, 'Intake Air Temperature Sensor Scaling', SENS,
    '0x3BAF2: FFFEF643 -> SSM IAT FFFF2B23 (SSM 0x12, C=x-50) and control IAT FFFEE6A5 = helper 0x16BA80(table, IAT signal FFFEF482/FFFEF480). '
    'Count byte 0x40 (64 points; points 33-64 overlap the next table, as read by the ECU).', ('C', 'x-50', 'x+50', '0'),
    axes={'0': dict(name='IAT Sensor Signal (FFFEF482, raw)', units='raw', expr='x', to_byte='x')})
add(0x1638B0, 'Intake Air Temperature Sensor 2 Scaling', SENS,
    '0x3BDC6: FFFEED6A (OBD PID68 sensor 2, C=x-50 via 0x10C0B8) = helper 0x16BA80(table, FFFEF486 filtered signal).', ('C', 'x-50', 'x+50', '0'),
    axes={'0': dict(name='IAT Sensor 2 Signal (FFFEF488, raw)', units='raw', expr='x', to_byte='x')})
add(0x1638C8, 'Coolant Temperature Sensor Scaling', SENS,
    '0x3C578: FFFEEF86 = helper 0x16BC08(table, filtered ECT signal); SSM coolant FFFF29A5 (SSM 0x08, C=x-50) = FFFEEF86>>8.',
    ('C', 'x/256-50', '(x+50)*256', '0.0'), axes={'0': dict(name='ECT Sensor Signal (raw)', units='raw', expr='x', to_byte='x')})
add(0x1638D4, 'Engine Oil Temperature Sensor Scaling', SENS,
    '0x3C90E: table output = FFFEEF84 basis; OBD PID5C FFFEF326=(out-0xA00)*256/205 => C = out/256-50.',
    ('C', 'x/256-50', '(x+50)*256', '0.0'), axes={'0': dict(name='Oil Temp Sensor Signal (FFFEEF82, raw)', units='raw', expr='x', to_byte='x')})
add(0x163904, 'Battery Temperature Sensor Scaling', SENS,
    '0x3D1B2: SSM battery temperature FFFEF0D2 (SSM 0x273, C=x-50) = helper 0x16BA80(table, FFFEF0BA filtered signal).', ('C', 'x-50', 'x+50', '0'),
    axes={'0': dict(name='Battery Temp Sensor Signal (raw)', units='raw', expr='x', to_byte='x')})
add(0x1638F8, 'Fuel Level Sensor Scaling', SENS,
    '0x3CDFE: FFFEF0B2 = table(FFFEF0B0); FFFEF0B3/FFFEF0B5 = sampled copy; OBD PID2F (0x10BFDC) byte = FFFEF0B5*255/219 -> % = x*100/219. '
    'Input FFFEF0B0 = filtered FFFF0EDE*0xAF0/(FFFF0EDE+0x2D0) (fuel level sender resistance divider model).',
    ('%', 'x*100/219', 'x*219/100', '0.0'), axes={'0': dict(name='Fuel Level Signal (FFFEF0B0, raw)', units='raw', expr='x', to_byte='x')})
add(0x14B7C, 'MAF Sensor Scaling', SENS,
    '0x3D45E: FFFEECB0 = helper 0x16B0AC(table, FFFEF1EC>>2); 0x4C53C (assembly): Mass Airflow FFFEEEE4 = floor(16*FFFEECB0/5625), '
    'OBD PID10 g/s = x*75/16384 => g/s = table/76800. FFFEF1EC = MAF sensor voltage FFFEEEB2 (SSM 0x1D, V=x*5/65536) (0x3D490); '
    'breakpoint i = FFFEF1EC>>2 = i*256 -> V = i*0.078125.',
    ('g/s', 'x/76800', 'x*76800', '0.000'), static_values=['%.4f' % (i * 0.078125) for i in range(64)],
    axes={'0': dict(name='MAF Sensor Voltage (V)', units='V', expr='x', to_byte='x')})

# IAT index FFFEE6A6 (0x3BAF2): E6A6 = (E6A5*0x19A - 0xF84)>>8 (E6A5 = IAT control, C = x-50) => breakpoint 16*i <-> IAT ~ (16*i*256+3972)/410 - 50 C
IAT16 = ['%.1f' % ((16 * i * 256 + 3972) / 410 - 50) for i in range(16)]
IATAX = {'0': dict(name='Intake Air Temperature (C, via FFFEE6A6)', units='C', expr='x', to_byte='x')}
F128 = ('%', 'x*100/128', 'x*128/100', '0.0')
add(0x152DC, 'Wastegate Duty Compensation (IAT)', WG,
    '0xBDA04: FFFF0E5C = FFFF0E5A*T(FFFEE6A6)>>7 (128 = 1.0); FFFF0E5C multiplies WG Duty Initial/Maximum (0xBD2AC, 0xBD11C).', F128,
    static_values=IAT16, axes=IATAX)
add(0x1561B, 'Target Boost Compensation (IAT)', 'Boost Control - Target',
    '0xBD8F4: FFFF0E58 = T(FFFEE6A6)*FFFF052A*2*FFFF0529>>7 (each 128 = 1.0) multiplies Target Boost (0xBD7C4).', F128,
    static_values=IAT16, axes=IATAX)
add(0x15378, 'Wastegate Integral Negative Gain Compensation (IAT)', WG,
    '0xBD300: negative-error integral step = T_02E5BC(e)*T(FFFEE6A6)>>7.', F128, static_values=IAT16, axes=IATAX)
add(0x15388, 'Wastegate Integral Positive Gain Compensation (IAT)', WG,
    '0xBD300: positive-error integral step = T_02E5C8(e)*T(FFFEE6A6)>>7.', F128, static_values=IAT16, axes=IATAX)
add(0x15398, 'Wastegate Proportional Gain Compensation (IAT)', WG,
    '0xBD300: proportional term = T_02E5D4(e)*T(FFFEE6A6)>>7.', F128, static_values=IAT16, axes=IATAX)

# ---------------------------------------------------------------- driver demand (torque request) - torque units unresolved (16000 = 0)
TQ = 'Driver Demand / Torque Request'
# Torque fixed-point type (anchor 0xC3FA8/0xC4124): torque_Nm = P_kW*60000/(2*pi*rpm) (constant 291.42593/0.030518044 = 9549.297
# = 60000/2pi) is stored as Nm*80 + 16000 with clamps exactly at the u16 limits (619.1875 Nm = (65535-16000)/80, -200 Nm = -16000/80).
# The same 0x3E80 (16000) zero-offset arithmetic is used for every torque-domain quantity in 0x82FA0/0x87478.
TQEV = ' Torque type: Nm = (x-16000)/80, anchored at 0xC3FA8 (kW->Nm via 60000/2pi, stored *80+16000, clamps = u16 range).'
RAWTQ = ('Nm', '(x-16000)/80', 'x*80+16000', '0.0')
_sel = ('selection: first map when FFFEEF76.7 clear and FFFF0557 < 4, otherwise the alternate map; inputs rpm FFFF2994 and accelerator pedal FFFEEEF8 '
        '(SSM 0x29). Output in the torque domain used across 0x82FA0 (16000 = zero; 0x3E80 offset arithmetic) - physical unit not anchored.')
for d, alt, out, lab in ((0x2C4CC, 0x2C4E0, 'FFFF0A4A', 'A'), (0x2C4F4, 0x2C508, 'FFFF0A4E', 'B'), (0x2C530, 0x2C544, 'FFFF0A52', 'C'),
                         (0x2C56C, 0x2C580, 'FFFF0A56', 'D')):
    fn = {'A': '0x81448', 'B': '0x81498', 'C': '0x8151C', 'D': '0x815A0'}[lab]
    add(d, f'Requested Torque {lab} (Accelerator Pedal)', TQ, f'{fn}: {out} = map; ' + _sel + TQEV, RAWTQ)
    add(alt, f'Requested Torque {lab} (Accelerator Pedal, alternate)', TQ, f'{fn}: {out} = map; ' + _sel + TQEV, RAWTQ)
add(0x2C51C, 'Requested Torque B Limit (Gear x RPM)', TQ, '0x81498: FFFF0A4E = min(T(gear FFFF03AC, rpm), Requested Torque B).' + TQEV, RAWTQ)
add(0x2C558, 'Requested Torque C Limit (Gear x RPM)', TQ, '0x8151C: FFFF0A52 = min(T(gear FFFF03AC, rpm), Requested Torque C).' + TQEV, RAWTQ)
_bl = ('0x82758: weight w = T(accelerator FFFEEEF8, vehicle speed FFFEF0DA)/255 blends the requested-torque candidates '
       '(out = w*(Tq-16000) + (1-w)*(Tq_A-16000) + 16000 style arithmetic, 0xC80/0x33 = 16000/255 offset terms).')
add(0x2C7FC, 'Requested Torque Blend Weight 1 (Accelerator x Vehicle Speed)', TQ, _bl + ' Weight multiplies FFFF0A52 (param_3; register r6 at call 0x835EE).', ('%', 'x*100/255', 'x*255/100', '0.0'))
add(0x2C810, 'Requested Torque Blend Weight 2 (Accelerator x Vehicle Speed)', TQ, _bl + ' Weight multiplies FFFF0A4E (param_4; r7).', ('%', 'x*100/255', 'x*255/100', '0.0'))
add(0x2C824, 'Requested Torque Blend Weight 3 (Accelerator x Vehicle Speed)', TQ, _bl + ' Weight w3 blends FFFF0A4A (param_5, stack) against FFFF0A52 with (255-w3).', ('%', 'x*100/255', 'x*255/100', '0.0'))

# ---------------------------------------------------------------- throttle
add(0x2CA14, 'Target Throttle Opening (vs max(FFFF09D4, FFFF0B16))', 'Electronic Throttle - Target',
    '0x86BB4 (called from 0x87478 with param_8 = &FFFF09B4+0x140 = FFFF0AF4): Throttle Opening Angle target FFFF0AF4 (SSM 0x15 / OBD PID4C, %=x/256) '
    '= T(max(FFFF09D4, FFFF0B16))*400/689 in normal running (param_1..3 = 0, engine state != 1) => % = x*400/(689*256); max entry 44096 = 100.0 %. '
    'Inputs: FFFF09D4 (written by 0x7FAA0 = T_02C200(min(FFFF0CD8, T_02C1F4(coolant))), range 0..2982) and FFFF0B16; the larger is used. Physical unit of the input unresolved.', ('%', 'x*400/176384', 'x*176384/400', '0.00'))

_af = ('0x3CBD6: FFFEEF94 = helper 0x16B1A8(table, A/F Sensor #1 Current FFFEF006 (SSM 0x42, mA = x/1000, signed)); 0x3CC16: '
       'A/F Sensor #1 FFFEEF96 (SSM 0x46, lambda = x/8192) = (FFFEEF94<<13)/0xA8BA => lambda = x/43194. Variant selected by FFFEEF99.4.')
AFAX = {'0': dict(name='A/F Sensor #1 Current', units='mA', expr='x/1000', to_byte='x*1000')}
add(0x1638E0, 'A/F Sensor #1 Scaling (Current to Lambda)', SENS, _af + ' Used when FFFEEF99.4 = 0.', ('lambda', 'x/43194', 'x*43194', '0.000'), axes=AFAX)
add(0x1638EC, 'A/F Sensor #1 Scaling (Current to Lambda, alternate)', SENS, _af + ' Used when FFFEEF99.4 = 1.', ('lambda', 'x/43194', 'x*43194', '0.000'), axes=AFAX)
_ped = ('0x6825A: FFFEF134 = helper 0x16BC08(0x168B20, FFFEF142) and FFFEF13A from 0x168B2C(FFFEF140); 0x69F44 selects FFFEF134 (or min(F134,F13A)) '
        'into the accelerator pedal angle FFFEECB4, interchangeable with SSM pedal angle FFFEEEF8 (SSM 0x29, % = x*100/65280).')
add(0x168B20, 'Accelerator Pedal Position Scaling (Sensor 1)', 'Electronic Throttle - Pedal', _ped, ('%', 'x*100/65280', 'x*65280/100', '0.00'),
    axes={'0': dict(name='Accelerator Pedal Sensor 1 Signal (FFFEF142, raw)', units='raw', expr='x', to_byte='x')})
add(0x168B2C, 'Accelerator Pedal Position Scaling (Sensor 2)', 'Electronic Throttle - Pedal', _ped, ('%', 'x*100/65280', 'x*65280/100', '0.00'),
    axes={'0': dict(name='Accelerator Pedal Sensor 2 Signal (FFFEF140, raw)', units='raw', expr='x', to_byte='x')})

_flt = ' Filter helper 0x16B4D8: new = old + (in - old)*coef/65536 (assembly: mul.l, +rounding, swap.w), so coefficient fraction = x/65536 (65535 = no filtering).'
add(0x163898, 'Manifold Pressure Filter Coefficient (RPM)', SENS,
    '0x3B634: FFFEF59E = filter(FFFEF59E, MAP FFFEE6F8, T(rpm FFFF2ADA)).' + _flt, ('fraction', 'x/65536', 'x*65536', '0.0000'),
    axes={'0': dict(name='Engine Speed', units='rpm', expr='x*25/128', to_byte='x*128/25')})
add(0x163A78, 'Engine Speed Filter Coefficient (RPM)', SENS,
    '0x4DD16: FFFF2AF0 = filter(FFFF2AF0, rpm FFFF2ADA, T(rpm FFFF2ADA)) when FFFEEEC6.0 clear.' + _flt, ('fraction', 'x/65536', 'x*65536', '0.0000'),
    axes={'0': dict(name='Engine Speed', units='rpm', expr='x*25/128', to_byte='x*128/25')})

# ---------------------------------------------------------------- fuel injection (DI)
# SSM 0x20 injector pulse width FFFF2B4E (ms = x*0.0032) = (*ptr[cyl]) >> 2 with ptr table 0x168EAC -> FFFF1564.. (0x1569D6),
# so FFFF1564 is injection time in 0.8 us units.  0x922F4: FFFF1564 = 1.25*(FFFF0BC8*0.8 + q FFFF1544 * k FFFF0B44 * 0.003125)
# => time_us = FFFF0BC8*0.8 + q*k*0.003125.
INJ = 'Fuel Injection'
FRPAX = {'0': dict(name='Fuel Rail Pressure (filtered)', units='kPa', expr='x*639630/1048576', to_byte='x*1048576/639630')}
_inj = ('0x1569D6: SSM injector PW FFFF2B4E[cyl] = FFFF1564[cyl]>>2 (pointer table 0x168EAC) => FFFF1564 in 0.8 us; 0x922F4 (via 0x89A78): '
        'FFFF1564 = 1.25*(FFFF0BC8*0.8 + FFFF1544*FFFF0B44*0.003125) => injection time us = FFFF0BC8*0.8 + q*k*0.003125. ')
add(0x2D324, 'Injector Latency (Fuel Rail Pressure)', INJ, _inj + '0x92EB4: FFFF0BC8 = T(FRP FFFEED18) (+T_02D330 when FFFEF498.1).',
    ('us', 'x*0.8', 'x/0.8', '0.0'), axes=FRPAX)
add(0x2D330, 'Injector Latency Adder (Fuel Rail Pressure, flag FFFEF498.1)', INJ, _inj + '0x92EB4: added to Injector Latency when FFFEF498.1 set.',
    ('us', 'x*0.8', 'x/0.8', '0.0'), axes=FRPAX)
add(0x2CE90, 'Injector Pulse Multiplier (Fuel Rail Pressure)', INJ, _inj + '0x8DDA8: FFFF0B44 = T(FRP FFFEED18). 0x917EC: FFFF1544 = '
    '1.25*((FFFF1644-0x8000)*3.2 + FFFF1534*(256-FFFF041F)*0.003125), the same float->0.8 us packing (x1.25, clamp 13421772) as FFFF1564, '
    'so FFFF1544 is a base pulse time in 0.8 us; its contribution to FFFF1564 is 1544*0.8*k/256 us, i.e. k/256 is a pure multiplier '
    '(256 = 1.0 at the lowest pressure, falling roughly as 1/sqrt(FRP)).', ('multiplier', 'x/256', 'x*256', '0.000'), axes=FRPAX)

add(0x2D4D4, 'Ignition Timing Override (Engine Speed, FFFF04C1 = 1/2)', IGN,
    '0x972C0: FFFF045C = T(FFFF299C rpm/25) when FFFF04C1 is 1 or 2; 0x98FAC: Ignition Total Timing FFFF046C = FFFF045C - 32 (half-degrees) '
    'when FFFF66B1.5 and FFFEE710.5 are set, FFFF049C < 1 and rpm FFFF2ADA <= 0x2800 (2000 rpm), then min/max clamped.',
    ('deg', '(x-32)/2', 'x*2+32', '0.0'), axes={'0': dict(name='Engine Speed', units='rpm', expr='x*25', to_byte='x/25')})

add(0x2D4E0, 'Ignition Timing Override (Engine Speed, other FFFF04C1 modes)', IGN,
    '0x972C0: FFFF045C = T(FFFF299C rpm/25) when FFFF04C1 is not 1 or 2; used by 0x98FAC exactly as Ignition Timing Override '
    '(total timing = FFFF045C - 32 half-degrees under the override conditions).',
    ('deg', '(x-32)/2', 'x*2+32', '0.0'), axes={'0': dict(name='Engine Speed', units='rpm', expr='x*25', to_byte='x/25')})

_45a = ('0x970E8: FFFF045A (only when FFFF03DF.1 set, else 0) = T_02D4AC when coolant FFFEEEDE >= 0xE000 (100 C) and rpm < 0xF000, '
        'T_02D4C0 when coolant < 0xDCCD (97.5 C) or rpm max (hysteresis keeps previous); 0x98FAC adds FFFF045A (unsigned) to '
        'Ignition Total Timing FFFF046C in half-degrees. Inputs rpm FFFF2994, load FFFF03A0.')
add(0x2D4AC, 'Ignition Timing Compensation (Coolant >= 100 C)', IGN, _45a, DEG2)
add(0x2D4C0, 'Ignition Timing Compensation (Coolant < 100 C)', IGN, _45a, DEG2)
add(0x2D488, 'Ignition Timing Retard (vs FFFF058A, not selected)', IGN,
    '0x96DA0: retard FFFF0454 (subtracted from total timing in half-degrees, 0x98FAC) = T(FFFF058A) only when param_2 != 0; caller 0x9CBF8 '
    'passes constant 0, so FFFF0454 = 6 (3 deg) while active and this table is not used in this ROM.', DEG2)

# ---------------------------------------------------------------- throttle airflow (compressible orifice) model 0xCFC88
_thr = ('0xCFC88: pressure ratio r = min(FFFF1688/FFFF168C, ...) clamped below at 0.53 (critical ratio of air) and above at 1.0; '
        'flow = (FFFF168C/101325) * T_02ECEC(r) * FFFF09C2 * 2.98e-15 * k(T_02ECE0) * 60000, then blended with the previous value '
        'by w = T_02ECF8(r)/65536. Axis input u32 = r*2^32 - 2^31.')
PRAX = {'0': dict(name='Pressure Ratio (downstream/upstream)', units='ratio', expr='(x+2147483648)/4294967296', to_byte='x*4294967296-2147483648')}
add(0x2ECEC, 'Throttle Flow Function (Pressure Ratio)', 'Airflow - Throttle Model', _thr, ('raw', 'x', 'x', '0'), status='partial', axes=PRAX)
add(0x2ECF8, 'Throttle Flow Model Blend Weight (Pressure Ratio)', 'Airflow - Throttle Model', _thr, ('fraction', 'x/65536', 'x*65536', '0.0000'), axes=PRAX)
add(0x2ECE0, 'Throttle Flow Correction (vs FFFF05BB)', 'Airflow - Throttle Model', _thr + ' k = 0.75 + T_02ECE0/131072.',
    ('multiplier', '0.75+x/131072', '(x-0.75)*131072', '0.0000'))

# ---------------------------------------------------------------- AVCS OCV feedback controllers (task 0xF6B24)
# Output chain: exhaust 0xFDF34 -> &FFFF1228 (SSM 0x11A Exhaust OCV Duty Right, %=x/25), 0xFE55C -> &FFFF1230 (SSM 0x11B left);
# intake 0xFA7B0 -> FFFF11D8 -> 0xFB3D4 -> FFFF11E8 -> 0xB98C0 (x*0x3333>>17) -> SSM 0x3E Intake OCV Duty Right; 0xFADC0 -> FFFF11E0 ->
# 0xFB7AC -> FFFF11F6 -> SSM 0x3F (left).  Each controller: term A = (-100 + T4x4(rpm, err2)*100/32768) * Wp4/128 * Werr/128 (when |err2| > 0xB6);
# term B = (-100 + T9x9(rpm, err1)*100/32768) * W(sign of err1)/128 (when |err1| > 0xB6), separate map set at low vehicle speed;
# duty contribution = (A + B)*25 (OCV duty units %=x/25).  err inputs and FFFF11B6 (weight input) are not anchored.
AV = 'AVCS - OCV Feedback'
PCTD = ('% duty', 'x*100/32768-100', '(x+100)*32768/100', '0.00')
W128 = ('%', 'x*100/128', 'x*128/100', '0.0')
CTRL = {
 'Intake Right': ('0xFA7B0', dict(c4=0x2F46C, wp4=0x2F3FC, werr=0x2F460, lsn=0x2F420, lsp=0x2F414, ls=0x2F438, nn=0x2F42C, np=0x2F408, n=0x2F44C), 'vehicle speed FFFEF0DA*9/160 < 4 km/h with flag'),
 'Intake Left': ('0xFADC0', dict(c4=0x2F4F0, wp4=0x2F480, werr=0x2F4E4, lsn=0x2F4A4, lsp=0x2F498, ls=0x2F4BC, nn=0x2F4B0, np=0x2F48C, n=0x2F4D0), 'vehicle speed FFFEF0DA*9/160 < 4 km/h with flag'),
 'Exhaust Right': ('0xFDF34', dict(c4=0x2F6F8, wp4=0x2F688, werr=0x2F6EC, nn=0x2F6B8, np=0x2F694, n=0x2F6D8, lsn=0x2F6AC, lsp=0x2F6A0, ls=0x2F6C4), 'FFFEF394 <= 0x1FF with flag'),
 'Exhaust Left': ('0xFE55C', dict(c4=0x2F77C, wp4=0x2F70C, werr=0x2F770, nn=0x2F73C, np=0x2F718, n=0x2F75C, lsn=0x2F730, lsp=0x2F724, ls=0x2F748), 'FFFEF394 <= 0x1FF with flag'),
}
for cname, (fn, T, lowcond) in CTRL.items():
    ev = f'{fn}: {cname} AVCS OCV duty controller (see block comment for output chain). '
    add(T['n'], f'{cname} AVCS OCV Feedback (RPM x Cam Error)', AV, ev + 'term B map, normal operation.', PCTD)
    add(T['ls'], f'{cname} AVCS OCV Feedback, Low Speed (RPM x Cam Error)', AV, ev + f'term B map used when {lowcond}.', PCTD)
    add(T['np'], f'{cname} AVCS OCV Feedback Gain, Positive Error (vs FFFF11B6)', AV, ev + 'term B weight, normal operation, err >= 0.', W128)
    add(T['nn'], f'{cname} AVCS OCV Feedback Gain, Negative Error (vs FFFF11B6)', AV, ev + 'term B weight, normal operation, err < 0.', W128)
    add(T['lsp'], f'{cname} AVCS OCV Feedback Gain, Low Speed, Positive Error (vs FFFF11B6)', AV, ev + f'term B weight when {lowcond}, err >= 0.', W128)
    add(T['lsn'], f'{cname} AVCS OCV Feedback Gain, Low Speed, Negative Error (vs FFFF11B6)', AV, ev + f'term B weight when {lowcond}, err < 0.', W128)
    add(T['c4'], f'{cname} AVCS OCV Feedback A (RPM x Error 2)', AV, ev + 'term A map (second error input), active when |err2| > 0xB6.', PCTD)
    add(T['wp4'], f'{cname} AVCS OCV Feedback A Gain (vs FFFF11B6)', AV, ev + 'term A weight.', W128)
    add(T['werr'], f'{cname} AVCS OCV Feedback A Gain (vs Cam Error)', AV, ev + 'term A weight indexed by the first error input.', W128)

# OCV duty post-processing (current feedback, voltage compensation): 0xFB3D4/0xFB7AC (intake R/L -> FFFF11E8/FFFF11F6 -> SSM 0x3E/0x3F),
# 0xFEB84/0xFEF5C (exhaust R/L -> FFFF1238/FFFF1246).  measured current = OCV current (SSM 0x40/0x41/0x11C/0x11D, A = x*625/16384/1000)
# *26214.4 counts; target current = T_cur(duty FFFF11D8.. %*25); gain G += T_step(target-measured)*4096*7.45e-9 (0..2);
# final duty = duty * T_g(FFFF11B6) * G * 2^-35 * T_v(module voltage FFFEF18E)/32768 (*25).
VOLTAX = {'0': dict(name='Control Module Voltage', units='V', expr='x*625/2048000', to_byte='x*2048000/625')}
DUTYAX = {'0': dict(name='OCV Duty', units='%', expr='x/25', to_byte='x*25')}
CURAX = {'0': dict(name='OCV Current Error', units='A', expr='x/26214.4', to_byte='x*26214.4')}
for cname, fn, T in (('Intake Right', '0xFB3D4', (0x2F504, 0x2F528, 0x2F51C, 0x2F510, 0x2F540)),
                     ('Intake Left', '0xFB7AC', (0x2F54C, 0x2F570, 0x2F564, 0x2F558, 0x2F57C)),
                     ('Exhaust Right', '0xFEB84', (0x2F790, 0x2F7B4, 0x2F7A8, 0x2F79C, 0x2F7CC)),
                     ('Exhaust Left', '0xFEF5C', (0x2F7D8, 0x2F7FC, 0x2F7F0, 0x2F7E4, 0x2F808))):
    ev = f'{fn}: {cname} OCV duty post-processing (see block comment). '
    add(T[0], f'{cname} OCV Duty Voltage Compensation', AV, ev + 'multiplier T(FFFEF18E)/32768 on the final duty.', PCT32768, axes=VOLTAX)
    add(T[1], f'{cname} OCV Target Current (vs Duty)', AV, ev + 'expected current compared with measured OCV current*26214.4.',
        ('A', 'x/26214.4', 'x*26214.4', '0.000'), axes=DUTYAX)
    add(T[2], f'{cname} OCV Duty Gain (vs FFFF11B6, FFFF11CC < 20)', AV, ev + 'factor in duty*T*G*2^-35 (*25): 1.0 at x = 41943.',
        ('multiplier', 'x*25/1048576', 'x*1048576/25', '0.000'))
    add(T[3], f'{cname} OCV Duty Gain (vs FFFF11B6, FFFF11CC >= 20)', AV, ev + 'factor in duty*T*G*2^-35 (*25): 1.0 at x = 41943.',
        ('multiplier', 'x*25/1048576', 'x*1048576/25', '0.000'))
    add(T[4], f'{cname} OCV Current Feedback Gain Step', AV, ev + 'G changes by T(current error)*4096*7.450581e-9 (= x/32768) per step.',
        ('gain/step', 'x/32768', 'x*32768', '0.00000'), axes=CURAX)


# ---------------------------------------------------------------- AVCS target angle (task 0xF6B24)
# 0xF8EE0 (intake) / 0xFC52C (exhaust), called from 0xF6B24 with Y = FFFF2ADA engine speed, X = FFFF03A0 engine load (u8, %),
# coolant FFFEEEDE, w = FFFF0E90 (u16, w/65536).  Target (0xF8EE0 param_13 -> FFFF11B8, param_16 -> FFFF11BE):
#   T = Tbase(rpm,load) * Tect(coolant)/128 + TA(rpm,load) * (1 - w/65536) + TB(rpm,load) * w/65536   (TB / TB' by flag FFFF056C.7)
#   clamped >= -0x2666 (intake) / >= 0 (exhaust).  Alternate mode (FFFEF152.5 set): rate-limited (0x1D/step) Tcool(coolant),
#   map pair selected by FFFF076C.3.
# Unit: 0xF92CC (intake) takes FFFF11B8 as x*0.0027465818 (=180/65536) deg, clamps to [-90, 89.997] deg, writes x*364.08887 to
#   FFFF11C0/FFFF11C4 (right/left targets); 0xB9BAC compares them with the measured cam angles FFFEF2AC/FFFEF2AE (0x59602, from
#   cam edge FFFF39B8/39BA; FFFF39B8 also feeds SSM 0x3C via x*180>>16).  Exhaust: 0xFC918 converts FFFF1208 the same way and
#   0xBBE98 compares with FFFEF2B8/FFFEF2BA = SSM 0x118/0x119 Exhaust AVCS Advance Angle (deg = x*45/16384 = x*180/65536).
DEG16 = ('deg', 'x*180/65536', 'x*65536/180', '0.00')
LOADX = {'1': dict(name='Engine Load', units='%', expr='x', to_byte='x')}
AVT = 'AVCS - Target'
for cam, fn, base, ect, ta, tb, tb2, c0, c1, filt in (
        ('Intake', '0xF8EE0', 0x2F3DC, 0x2F394, 0x2F3A0, 0x2F3B4, 0x2F3C8, 0x2F388, 0x2F37C, '0xF92CC -> FFFF11C0/11C4 vs measured FFFEF2AC/2AE'),
        ('Exhaust', '0xFC52C', 0x2F668, 0x2F620, 0x2F62C, 0x2F640, 0x2F654, 0x2F614, 0x2F608, '0xFC918 -> vs measured FFFEF2B8/2BA (SSM 0x118/0x119)')):
    ev = f'{fn}: {cam} AVCS target T = Tbase*Tect/128 + TA*(1-w) + TB*w, w = FFFF0E90/65536, deg = x*180/65536 ({filt}). '
    add(base, f'{cam} AVCS Target Base', AVT, ev + 'Tbase.', DEG16, axes=LOADX)
    add(ect, f'{cam} AVCS Target Base Coolant Multiplier', AVT, ev + 'Tect: u8 multiplier, (u8*s16)*2^25>>32 = /128.',
        ('multiplier', 'x/128', 'x*128', '0.000'))
    add(ta, f'{cam} AVCS Target Add A (weight 1-w, w=FFFF0E90)', AVT, ev + 'TA.', DEG16, axes=LOADX)
    add(tb, f'{cam} AVCS Target Add B (weight w=FFFF0E90, FFFF056C.7 clear)', AVT, ev + 'TB when FFFF056C bit 7 clear.', DEG16, axes=LOADX)
    add(tb2, f'{cam} AVCS Target Add B (weight w=FFFF0E90, FFFF056C.7 set)', AVT, ev + 'TB when FFFF056C bit 7 set.', DEG16, axes=LOADX)
    add(c0, f'{cam} AVCS Target, Alternate Mode (FFFEF152.5), FFFF076C.3 clear', AVT,
        ev + 'Replaces T when FFFEF152 bit 5 set; rate-limited 0x1D counts/step.', DEG16)
    add(c1, f'{cam} AVCS Target, Alternate Mode (FFFEF152.5), FFFF076C.3 set', AVT,
        ev + 'Replaces T when FFFEF152 bit 5 set; rate-limited 0x1D counts/step.', DEG16)


# ---------------------------------------------------------------- ignition timing, task 0x9CBF8 (final sum inputs)
# 0x99558: FFFF0473 = 048B + (0459-128) + 0479 + 047A + T_02D5C8 + (T_02D5DC-32), all 0.5 deg; 0x98FAC: FFFF046C (SSM 0x11, deg=x/2)
# includes 0473 and (0477-128).  0x999A4: FFFF0477 = min(FFFF0478, FFFF0BF2>>7) (output pointer 03BA+189, disasm 0x9D0BC).
add(0x2D614, 'Ignition Timing Adder (IAT), FFFF06DA mode', 'Ignition Timing - Final',
    '0x999CC (from 0x9CBF8, output FFFF0479): when FFFF06DA bits 0 and 3 are set and FFFF2A03.7 clear, '
    'FFFF0479 = min(T(FFFEEEE2 IAT) + min(0,(04BA-04A4)*180/256), previous+6); FFFF0479 is summed into 0473 -> 046C in 0.5 deg.',
    ('deg', 'x/2', 'x*2', '0.0'))
for d, flag in ((0x2D608, 'clear'), (0x2D5FC, 'set')):
    add(d, f'Ignition Timing Restore Step (RPM), FFFF048C=2, latch {flag}', 'Ignition Timing - Final',
        '0x99874 (from 0x9CBF8, input FFFF2994 engine speed, state FFFF048C, output FFFF0478): in state 2, '
        'out = min(prev + T - 128, 128); state 3 -> 128, state 4 -> 0x76.  FFFF0477 = min(0478, 0BF2>>7) enters FFFF046C as '
        '(0477-128) in 0.5 deg, so T-128 is the per-execution timing step in 0.5 deg.  Latch FFFEBFBA chooses the table.',
        ('deg/step', '(x-128)/2', 'x*2+128', '0.0'))

add(0x2D5F0, 'Ignition Timing Limit After Event (Coolant), Initial', 'Ignition Timing - Final',
    '0x99630 (from 0x9CBF8, input FFFEEEDE coolant, output FFFF0BF2): on the trigger edge FFFF0BF2 = T<<7, then it ramps by 0x4D/execution '
    'toward 0x4000; 0x999A4 FFFF0477 = min(FFFF0478, 0BF2>>7) and 0477 enters FFFF046C as (0477-128) in 0.5 deg, so T caps that term at (T-128)/2 deg.',
    ('deg', '(x-128)/2', 'x*2+128', '0.0'))
add(0x2D494, 'Ignition Retard FFFF0454 Hold Count (RPM)', 'Ignition Timing - Final',
    '0x96DA0 (from 0x9CBF8, input FFFF2ADA engine speed): when enabled, counter FFFF0480 = T(rpm), else it counts down by 1 per execution; '
    'retard FFFF0454 (subtracted from FFFF046C) is held while FFFF0480 != 0.',
    ('executions', 'x', 'x', '0'), axes={'0': dict(name='Engine Speed', units='rpm', expr='x*25/128', to_byte='x*128/25')})


# ---------------------------------------------------------------- ignition timing term FFFF047B (0x9A05C, from 0x9BDF4)
# 0x98FAC adds FFFF047B (0.5 deg units) to total timing FFFF046C.  0x9A05C: FFFF047B = 2*min(63.5,
#   T_02D734(FFFF0541)*D*C*FFFF047F*E * 1.1825217e-10)  where 1.1825217e-10 = 1/(2*255^4), i.e.
#   deg = 127.5 * (T734/255)*(D/255)*(C/255)*(047F/255)*(E/255); zero unless FFFF04B4.2 and FFFF0BF8 <= limit(index).
#   C (-> FFFF047C) = gear-set table vs FFFF0481; D (-> FFFF047D) = gear-set table vs FFFF0BFE; E (-> FFFF047E) = 0xFE/0xCC constant.
#   Gear = FFFEF51A (0x50854: = Gear FFFF03AC when FFFEEF76.7 set, else TCU range FFFF0560 mapped to 1..6).
#   FFFF0481 (0x9A7E4) counts alternating crossings of a speed difference (FFFEF19E.. minus FFFEF1A4.., gear thresholds -0x66..-0x9A / 0),
#   i.e. an oscillation half-cycle counter.  C set: A = FFFEEF76.7 clear; B = set and FFFF2ADA < 3000 rpm; C = set and >= 3000 rpm.
IGT = 'Ignition Timing - Term 047B'
F255 = ('factor', 'x/255', 'x*255', '0.000')
OSCAX = {'0': dict(name='Oscillation Count FFFF0481', units='count', expr='x', to_byte='x')}
ev7b = ('0x9A05C: FFFF047B (0.5 deg, added to FFFF046C in 0x98FAC) = 2*min(63.5, 127.5*(T734/255)*(D/255)*(C/255)*(047F/255)*(E/255)) deg; '
        'gear = FFFEF51A. ')
for g, (a, b, c, d0, d1) in enumerate(((0x2D65C, 0x2D668, 0x2D674, 0x2D740, 0x2D74C), (0x2D680, 0x2D68C, 0x2D698, 0x2D758, 0x2D764),
                                       (0x2D6A4, 0x2D6B0, 0x2D6BC, 0x2D770, 0x2D77C), (0x2D6C8, 0x2D6D4, 0x2D6E0, 0x2D788, 0x2D794),
                                       (0x2D6EC, 0x2D6F8, 0x2D704, 0x2D7A0, 0x2D7AC), (0x2D710, 0x2D71C, 0x2D728, 0x2D7B8, 0x2D7C4)), 1):
    add(a, f'Timing Term 047B Factor C, Gear {g}, FFFEEF76.7 clear (vs Oscillation Count FFFF0481)', IGT, ev7b + 'Factor C, set A.', F255, axes=OSCAX)
    add(b, f'Timing Term 047B Factor C, Gear {g}, below 3000 rpm (vs Oscillation Count FFFF0481)', IGT, ev7b + 'Factor C, set B (FFFEEF76.7 set, FFFF2ADA < 0x3C00).', F255, axes=OSCAX)
    add(c, f'Timing Term 047B Factor C, Gear {g}, 3000 rpm and above (vs Oscillation Count FFFF0481)', IGT, ev7b + 'Factor C, set C (FFFEEF76.7 set, FFFF2ADA >= 0x3C00).', F255, axes=OSCAX)
    add(d0, f'Timing Term 047B Factor D, Gear {g}, FFFEEF76.7 clear (vs FFFF0BFE)', IGT, ev7b + 'Factor D (signed), FFFEEF76.7 clear.', F255)
    add(d1, f'Timing Term 047B Factor D, Gear {g}, FFFEEF76.7 set (vs FFFF0BFE)', IGT, ev7b + 'Factor D (signed), FFFEEF76.7 set.', F255)
add(0x2D734, 'Timing Term 047B Factor (vs FFFF0541)', IGT, ev7b + 'Factor T734.', F255)


# ---------------------------------------------------------------- catalyst temperature model (0xD9D40 from 0xD9B78)
# Output FFFF0FE4 = Catalyst Temperature B1S1 (OBD PID 3C, C = x/64-40), state FFFECFC4.
# Target (0FE4 units) = T_EE60(rpm FFFF299C, FFFF09BE)*256 * k - 0xA00*k + 0xA00, k = T_EEC4*T_EED0/65536, i.e. C_target = k*(4*T-40):
#   steady-state map unit C = 4x-40.  At start (FFFF0000.1 rising / FFFF66B0 state) FFFECFC4 = T_EEB0(FFFF36A2, coolant FFFF29A5)<<8
#   (same unit).  FFFF36A2 (0xD9CD4) = FFFF0FE4>>8 at engine stop (C = 4x-40).  Approach rate = f(error) * T_EE8C|98 * T_EEA4 * T_EE80 *
#   (T_EE74*26/256) / 2^24 (relative factors x/256).
CAT = 'Catalyst Temperature Model'
CAT4 = ('C', 'x*4-40', '(x+40)/4', '0')
evc = '0xD9D40: Catalyst Temperature B1S1 FFFF0FE4 (OBD PID 3C, C=x/64-40) model; target = k*(4*T-40) C, k = T_EEC4*T_EED0/65536. '
add(0x2EE60, 'Catalyst Temperature Steady-State Target', CAT, evc + 'Steady-state map (FFFF03D8.1 clear), Y = FFFF299C rpm.', CAT4)
add(0x2EE54, 'Catalyst Temperature Steady-State Target (FFFF03D8.1 set)', CAT, evc + 'Used instead of T_02EE60 when FFFF03D8 bit 1 set.', CAT4)
add(0x2EEB0, 'Catalyst Temperature Initial Value at Start', CAT, evc + 'FFFECFC4 = T<<8 at start; Y = FFFF36A2 (0FE4>>8 at engine stop), X = coolant FFFF29A5.',
    CAT4, axes={'0': dict(name='Catalyst Temperature at Stop (FFFF36A2)', units='C', expr='x*4-40', to_byte='(x+40)/4'),
                '1': dict(name='Coolant Temperature', units='C', expr='x-50', to_byte='x+50')})
add(0x2EEC4, 'Catalyst Temperature Target Gain (vs Initial Temperature)', CAT, evc + 'k factor, input = T_02EEB0 output.',
    ('factor', 'x/256', 'x*256', '0.000'), axes={'0': dict(name='Catalyst Temperature Initial Value', units='C', expr='x*4-40', to_byte='(x+40)/4')})
add(0x2EED0, 'Catalyst Temperature Target Gain (vs Time Since Start)', CAT, evc + 'k factor, input = counter FFFECFC8 (+1 per execution while FFFEEEC1.0 clear).',
    ('factor', 'x/256', 'x*256', '0.000'), axes={'0': dict(name='Time Since Start (40 ms task 0x153248, see PID 0x1F)', units='s', expr='x*0.04', to_byte='x/0.04')})
evr = evc + 'Approach-rate gain = T_EE8C|98 * T_EEA4 * T_EE80 * (T_EE74*26/256) / 2^24 (relative factors). '
add(0x2EE74, 'Catalyst Temperature Rate Factor (Vehicle Speed)', CAT, evr + 'Input FFFEF0DA vehicle speed.', ('factor', 'x/256', 'x*256', '0.000'))
add(0x2EE80, 'Catalyst Temperature Rate Factor (FFFF0F56)', CAT, evr + 'Input FFFF0F56.', ('factor', 'x/256', 'x*256', '0.000'))
add(0x2EEA4, 'Catalyst Temperature Rate Factor (|delta FFFF0F56|)', CAT, evr + 'Input |FFFF0F56 - previous|.', ('factor', 'x/256', 'x*256', '0.000'))
add(0x2EE8C, 'Catalyst Temperature Rate Factor (FFFEEF14), FFFF03D8.1 clear', CAT, evr, ('factor', 'x/256', 'x*256', '0.000'))
add(0x2EE98, 'Catalyst Temperature Rate Factor (FFFEEF14), FFFF03D8.1 set', CAT, evr, ('factor', 'x/256', 'x*256', '0.000'))


# ---------------------------------------------------------------- knock control (task 0xA031C)
# Unit: SSM 0x199 Fine Learning Knock Correction = converter 0xD0D50(FFFF04BB): byte = 04BB*45/32 + 128, public deg = byte/4 - 32
#   -> deg = 04BB*45/128 (0.3515625 deg/count).  0x96F3C (-> FFFF0458, 0.5 deg units, used by 0x87478 base timing) adds
#   04A4*90/128 + 04BB*90/128 (same unit), and 0x98FAC adds knock retard 04AD*180/256 (same unit).
# 0xA2F20: FFFF04BA = T_02DA80(rpm FFFF2994, load FFFF09B4)*(1-w) + T_02DA94*w, w = FFFF0E90/65536 (stack-arg 0xA03BA);
# 0x9EEE0: FFFF04A4 = IAM FFFF3669 (SSM 0xF9, x/16) * 04BA / 16.  0x9F368: knock retard FFFF04AD steps -4 / +1, floor -0x22 (constants).
KN = 'Ignition Timing - Knock Control'
DEGK = ('deg', 'x*45/128', 'x*128/45', '0.00')
evk = ('0xA2F20 (task 0xA031C): FFFF04BA = T_02DA80*(1-w) + T_02DA94*w (w = FFFF0E90/65536); 0x9EEE0: FFFF04A4 = IAM*04BA/16, added to timing '
       'via 0x96F3C (x*90/128 in 0.5 deg); deg = x*45/128 from SSM 0x199 converter 0xD0D50. ')
add(0x2DA80, 'Knock Correction Advance Max (weight 1-w, w=FFFF0E90)', KN, evk + 'Map A.', DEGK)
add(0x2DA94, 'Knock Correction Advance Max (weight w=FFFF0E90)', KN, evk + 'Map B.', DEGK)


# ---------------------------------------------------------------- target idle speed (idle task 0xA8230)
# 0xAB210: FFFF04D4 = clamp(SSM 0x70/0x71 idle user adjustment FFFF312E/312F, 0x7C..0x8C) (rpm = x*25-3200).
# 0xAB09C: target = (FFFF0D0A>>2) + 04D4*128 - 0x4000 -> the adjustment term is rpm*128/25, so FFFF0D0A>>2 is in rpm*128/25
#   (rpm = x*25/128 for 0D0A>>2).  0xAB2FC: FFFF0D0A = rate-limited FFFF0D08<<2.  0xAB238: FFFF0D08 = helper 0x16BC68 table selected by
#   mode FFFF04D7 (0xAC00C from FFFF04DC; modes 1-2 -> 0x1348C, 3..8 -> 0x134AC..0x1354C), index coolant FFFEEEDE
#   (axis 0..0xF000 step 0x1000 = -40..110 C, C = x*5/2048-40).  rpm = x*25/128.
IDL = 'Idle Speed Control - Target'
ECT16 = [str(-40 + 10 * k) for k in range(16)]
ECTAX = {'0': dict(name='Coolant Temperature', units='C', expr='x', to_byte='x')}
evi = ('0xAB238 -> FFFF0D08 -> 0xAB2FC FFFF0D0A (<<2, rate-limited) -> 0xAB09C idle target = 0D0A/4 + SSM 0x70/0x71 user adjustment '
       '(rpm*128/25); rpm = x*25/128; index coolant FFFEEEDE (0..0xF000 = -40..110 C). ')
for a, md in ((0x1348C, 'Modes 1-2'), (0x134AC, 'Mode 3'), (0x134CC, 'Mode 4'), (0x134EC, 'Mode 5'), (0x1350C, 'Mode 6'),
              (0x1352C, 'Mode 7'), (0x1354C, 'Mode 8')):
    add(a, f'Target Idle Speed ({md}, FFFF04D7)', IDL, evi + f'{md} of FFFF04D7.', ('rpm', 'x*25/128', 'x*128/25', '0'),
        static_values=ECT16, axes=ECTAX)


# ---------------------------------------------------------------- target fuel rail pressure (0x1008D0 from 0xFFFB0)
# FFFF1276 = Target Fuel Rail Pressure: OBD PID 0x6D bytes B-C (commanded fuel rail pressure A, 10 kPa/bit; handler 0x71C92 via
#   0x3169C PID pointer table) = 0x10C408 x*125/2048 -> FFFF12F6 -> FFFF39D2, i.e. kPa = x*1250/2048.  Cross-check: actual rail
#   pressure FFFEED16 (PID 0x23/0x6D D-E) uses x*0xF9DB>>20 (=0.0610 per 10 kPa), same as 125/2048.
# 0x1008D0: base B = T_02F900(load FFFF03A0, rpm FFFF2996) + T_02F914(load, rpm)*T_02F980(FFFEEF33, IAT FFFEE6A5)/255 (or T_02F960(coolant)
#   when FFFF0491.0), rate-limited -> FFFF0780; FFFF1276 = by mode FFFF0541: 4 -> T_02F96C(coolant, rpm) (or B when FFFF66B0 == 3) *150,
#   3 -> T_02F940/T_02F934(coolant) direct, 1 -> T_02F928(coolant) direct, other -> T_02F94C(coolant, rpm)*150; constants 0x600E (15.0 MPa),
#   0x4009 (10.0 MPa), 0x23E (350 kPa).
FRP = 'Fuel Rail Pressure - Target'
FRP8 = ('MPa', 'x*150*1250/2048/1000', 'x*1000*2048/1250/150', '0.00')
FRP16 = ('MPa', 'x*1250/2048/1000', 'x*1000*2048/1250', '0.00')
evf = ('0x1008D0 -> FFFF1276 Target Fuel Rail Pressure (OBD PID 0x6D commanded rail pressure, kPa = x*1250/2048); u8 maps are scaled *150 '
       '(MPa = x*0.0916), u16 maps direct. ')
add(0x2F900, 'Target Fuel Rail Pressure (Base)', FRP, evf + 'Base map B (load x rpm); used for FFFF1276 in mode FFFF0541=4 with FFFF66B0=3.', FRP8)
add(0x2F914, 'Target Fuel Rail Pressure Adder (Base)', FRP, evf + 'Signed adder to B, multiplied by T_02F980/255.', FRP8)
add(0x2F980, 'Target Fuel Rail Pressure Adder Weight', FRP, evf + 'Weight on T_02F914 (x/255); inputs FFFEEF33, IAT FFFEE6A5.', ('factor', 'x/255', 'x*255', '0.000'))
add(0x2F960, 'Target Fuel Rail Pressure (Base, FFFF0491.0)', FRP, evf + 'Replaces B when FFFF0491 bit 0 set (input coolant).', FRP8)
add(0x2F96C, 'Target Fuel Rail Pressure (Mode 4)', FRP, evf + 'FFFF0541 = 4 and FFFF66B0 != 3 (coolant x rpm).', FRP8)
add(0x2F94C, 'Target Fuel Rail Pressure (Mode 0/other)', FRP, evf + 'FFFF0541 not 1..4 (coolant x rpm).', FRP8)
add(0x2F928, 'Target Fuel Rail Pressure (Mode 1)', FRP, evf + 'FFFF0541 = 1 (vs coolant).', FRP16)
add(0x2F940, 'Target Fuel Rail Pressure (Mode 3)', FRP, evf + 'FFFF0541 = 3, FFFEF152.5 clear (vs coolant).', FRP16)
add(0x2F934, 'Target Fuel Rail Pressure (Mode 3, FFFEF152.5)', FRP, evf + 'FFFF0541 = 3, FFFEF152.5 set (vs coolant).', FRP16)

# 0xAB3C4 (FFFF04D7 mode, coolant FFFEEEDE -> FFFF0D0C): transition index n (from previous mode FFFEC4A9 -> new mode, held in FFFEC4A8)
#   selects a coolant table; 0xAB2FC limits the change of FFFF0D0A per execution to FFFF0D0C (0D0A units, rpm = x*25/512).
RAMP = {2: 0x2DDF8, 3: 0x2DE04, 4: 0x2DE88, 5: 0x2DEAC, 6: 0x2DEB8, 7: 0x2DEC4, 8: 0x2DED0, 9: 0x2DEDC, 10: 0x2DEE8, 11: 0x2DEF4,
        12: 0x2DE10, 13: 0x2DE1C, 14: 0x2DE28, 15: 0x2DE34, 16: 0x2DE40, 17: 0x2DE4C, 18: 0x2DE58, 19: 0x2DE64, 20: 0x2DE70,
        21: 0x2DE7C, 22: 0x2DE94, 23: 0x2DEA0}
for n, d in RAMP.items():
    add(d, f'Target Idle Speed Ramp Rate (transition index {n})', IDL,
        '0xAB3C4 -> FFFF0D0C (index = transition code from previous to new idle mode FFFF04D7); 0xAB2FC limits the change of target '
        'idle FFFF0D0A (rpm = x*25/512) per execution to FFFF0D0C. Input coolant FFFEEEDE.', ('rpm/step', 'x*25/512', 'x*512/25', '0.00'))

add(0x2D070, 'Open Loop Fuel Enrichment Ramp-In Rate (RPM)', 'Fueling - Open Loop & Enrichment',
    _ol + '0x8F9C0: FFFEBD38 (enrichment*256) rises by T(rpm FFFF2994) per execution up to target<<8; FFFF03F2 = FFFEBD38>>8 is the '
    'ramped enrichment term (same (phi-1)*256 units as FFFF0401), so T is enrichment counts*256 per execution.',
    ('enrichment counts/step', 'x/256', 'x*256', '0.000'))


# ---------------------------------------------------------------- misfire detection timing interpolation (0xDEBC8 from 0xDCE34)
# w = (Ignition Total Timing FFFF046C - T_02F034) / (T_02F028 - T_02F034) -> FFFF106E; both tables are timing values in 046C's unit (deg = x/2).
for d, nm in ((0x2F034, 'Misfire Detection Timing Interpolation Point A (RPM)'), (0x2F028, 'Misfire Detection Timing Interpolation Point B (RPM)')):
    add(d, nm, 'Misfire Detection', '0xDEBC8 (from 0xDCE34; inputs FFFF2ADA rpm, FFFF046C): weight FFFF106E = (046C - T_02F034)/(T_02F028 - T_02F034), '
        'so both tables are in the unit of Ignition Total Timing FFFF046C (SSM 0x11, deg = x/2); the weight blends T_02F040/T_02F054.', DEG2)

# ---------------------------------------------------------------- timer thresholds (scripts/timers.py)
_OSEV = ('OS: TCB 0x169768 + 16*id; startup 0x1513BC SetRelAlarm(alarm, offset, cycle): alarm 4 -> task 8 (0x1517A4 -> 0x152A40) cycle 10, '
         'alarm 6 -> task 9 (0x1517D2 -> 0x15307C) cycle 20, alarm 7 -> task 10 (0x1517FA -> 0x153248) cycle 40, alarm 2 -> task 4 '
         '(-> 0x1528A2) cycle 4, alarm 1 -> task 3 (-> 0x152882) cycle 2; 0x153248 = 40 ms (OBD PID 0x1F/0x4E) -> 1 ms tick')
_PEREV = {'0015307c': 'task 0x15307C = 20 ms (' + _OSEV + ')', '00153248': 'task 0x153248 = 40 ms (OBD PID 0x1F/0x4E prescalers)',
          '00153568': 'task 0x153568 = 80 ms (OBD PID 0x31 distance integration)',
          '001528a2': 'task 0x1528A2 = 4 ms (' + _OSEV + ')', '00152882': 'task 0x152882 = 2 ms (' + _OSEV + ')',
          '00152a40': 'task 0x152A40 = 10 ms (' + _OSEV + '; 0x49E70 called unconditionally at 0x152BC6)',
          '00123600': 'every 4th run of 0x49E70 (FFFEF5A4 == 0) in the 10 ms task = 40 ms (' + _OSEV + ')',
          '0012560c': 'every 4th run of 0x49E70 (FFFEF5A4 == 0) in the 10 ms task = 40 ms (' + _OSEV + ')',
          '0012367c': 'every 4th run of 0x49E70 (FFFEF5A4 == 0) in the 10 ms task = 40 ms (' + _OSEV + ')',
          '0009bdd0': 'every 100th run of 0x49E70 in the 10 ms task = 1 s (' + _OSEV + ')',
          '00153ce0': 'task 28 (application mode 1, alarm 15 cycle 10) = 10 ms (' + _OSEV + ')',
          '00153800': 'task 11 = 160 ms: started by task 10 (40 ms) through prescaler 0x1511FE entry 4 (period 4); the same prescaler entry 3 (period 2) starts task 19 -> 0x153568, independently proven 80 ms (OBD PID 0x31)'}
if os.path.exists(f'{ROOT}/evidence/timer-tables.tsv'):
    import csv as _csv2
    for _r in _csv2.DictReader(open(f'{ROOT}/evidence/timer-tables.tsv'), delimiter='\t'):
        _d = int(_r['descriptor'], 16)
        if _d in S:
            continue
        _p = float(_r['period'])
        add(_d, f"Time Threshold [0x{int(_r['function'], 16):X}]", 'Timers',
            f"0x{int(_r['function'], 16):X}: lookup result compared with counter {_r['counter']} (\"{_r['context']}\"), which is only reset or "
            f"incremented by 1 per execution; {_PEREV[_r['task']]}.", ('s', f'x*{_p}', f'x/{_p}', '0.00'))

# ---------------------------------------------------------------- thresholds proven by comparison (scripts/table_compare.py)
# The lookup result is compared directly with a proven variable (or a parameter every call site passes as that variable), so the
# table output is in that variable's unit.  Names state only what is proven: a threshold on that variable, used by that function.
import csv as _csv
_seen = set()
if os.path.exists(f'{ROOT}/evidence/table-compare.tsv'):
    for _r in _csv.DictReader(open(f'{ROOT}/evidence/table-compare.tsv'), delimiter='\t'):
        _d = int(_r['descriptor'], 16)
        if _d in S or _d in _seen:
            continue
        _seen.add(_d)
        _tb = {'x': 'x', 'x*25/128': 'x*128/25', 'x*5/2048-40': '(x+40)*2048/5', 'x*639630/1048576': 'x*1048576/639630',
               'x*100/65280': 'x*65280/100', 'x*625/2048000': 'x*2048000/625', '(x-16000)/80': 'x*80+16000', 'x/327.68': 'x*327.68', 'x/327.68-100': '(x+100)*327.68'}.get(_r['expr'])
        if _tb is None and re.fullmatch(r'x\*[0-9.]+', _r['expr']):
            _tb = 'x/' + _r['expr'][2:]
        if _tb is None and re.fullmatch(r'x/[0-9.]+', _r['expr']):
            _tb = 'x*' + _r['expr'][2:]
        if _tb is None:
            continue
        add(_d, f"{_r['var_name']} Threshold (0x{int(_r['function'], 16):X})", 'Thresholds - ' + _r['var_name'],
            f"0x{int(_r['function'], 16):X}: lookup result compared with {_r['var_name']} (FFFF{_r['var'][4:]}): \"{_r['context']}\"; "
            'a comparison requires the same unit, so the output carries that scaling.',
            (_r['units'], _r['expr'], _tb, '0.00'))
        AUTO.add(_d)

for d, nm, how in ((0x2E954, 'Torque Limit Upper (RPM) [0xC3FA8]', 'min(torque, T)'), (0x2E960, 'Torque Limit Lower (RPM) [0xC3FA8]', 'max(.., T)'),
                   (0x2E96C, 'Torque Limit Upper (RPM) [0xC4124]', 'min(torque, T)'), (0x2E978, 'Torque Limit Lower (RPM) [0xC4124]', 'max(.., T)')):
    add(d, nm, 'Driver Demand / Torque Request',
        f'0xC3FA8 (the torque-type anchor): torque from power (Nm*80+16000) is clamped {how}, so T is in the torque type.' + TQEV +
        ' Input FFFF2ADA engine speed. Note: the callers in 0xC5934 pass param_1 = 0 (0xC3FA8 and 0xC4124), so this branch is not executed in this ROM.',
        ('Nm', '(x-16000)/80', 'x*80+16000', '0.0'),
        axes={'0': dict(name='Engine Speed', units='rpm', expr='x*25/128', to_byte='x*128/25')})

add(0x2D4A0, 'Minimum Ignition Timing (Coolant)', IGN,
    '0x96F3C: FFFF0458 = max(T(coolant FFFEEEDE) [or -0x32], computed advance) (signed 0.5 deg); 0x86B58 selects 0458/0531/0532/0533 '
    'into FFFF03D3, and 0x88478 compares |03D3 - FFFF046C (Ignition Total Timing, SSM 0x11)|, so the unit is that of 046C (deg = x/2). '
    'Same storage as T_02D5BC (lower clamp of FFFF046C in 0x98FAC): independent confirmation.',
    DEG2)

add(0x2E634, 'Ignition Timing, Mode FFFF0541=0 (RPM x Load)', 'Ignition Timing - Base & Torque Model',
    '0xBDD0C (task 0xBE0E8): FFFF0531 = T(FFFF299C rpm/25, load FFFF03A0) while FFFF2994 <= 0x5000 (4000 rpm); 0xBDCB8 maps FFFF0541 = 0 '
    'to FFFF0530 = 0, and 0x86B58 then selects 0531 into FFFF03D3, which 0x88478 compares with Ignition Total Timing FFFF046C '
    '(deg = x/2).', DEG2)

add(0x2D9D8, 'Ignition Timing Adjustment during Enrichment (Load x RPM)', 'Ignition Timing - Base & Torque Model',
    '0x9DD10 (from 0x9BDF4): while FFFF03E0.0 set or 0 < FFFF0401 < FFFF0400 (open-loop enrichment, FFFF056B.6 clear), FFFEC058 = (T-128)*64 '
    '(ramping back by +1/64 per execution otherwise); FFFF049E = FFFF0C12 + (T-128); 0x96F3C: FFFF0458 = 049E - 32 + knock terms (0.5 deg), '
    'and 0458 -> 03D3 is compared with total timing FFFF046C, so T-128 is in 0.5 deg.', ('deg', '(x-128)/2', 'x*2+128', '0.0'))


# ---------------------------------------------------------------- target lambda (task 0xB42AC, 0xB5B38)
# 0xB5B38: AFR = (T + FFFF0DCC - 0x8000) * 0.00033569336 - 14.5*FFFF0B9A/(32768+FFFF0B9A), with 0.00033569336 = 14.5/43194; the result
#   is clamped to 0..22 (AFR) and stored *2978.909 (= 65536/22) in FFFF0DBA (or T_02E37C directly when FFFF06CE.3 set).  43194 is the
#   lambda normalisation proven for A/F Sensor #1 (SSM 0x46: lambda = (current<<13)/0xA8BA/8192), so T/43194 = lambda (AFR = 14.5*lambda).
#   (Note: FFFF0D80 = 0DBA + 38F8 in 0xB3260 is later overwritten by 0xB53D4 param_24 in the same task, so SSM 0xD1 is not used as proof.)
LAMT = ('lambda', 'x/43194', 'x*43194', '0.000')
evl = ('0xB5B38 (task 0xB42AC): AFR = (T + FFFF0DCC - 0x8000)*14.5/43194 - ..., clamped 0..22 and stored *65536/22 in FFFF0DBA; '
       '43194 = lambda 1.0 as proven for A/F Sensor #1 (SSM 0x46). Inputs FFFF2996 rpm, FFFF03A0 load. ')
for d, cond in ((0x2E32C, 'param_5 set, FFFF0D70 < 1000'), (0x2E340, 'param_5 set, FFFF0D70 >= 1000'),
                (0x2E354, 'param_5 clear, FFFF0D70 < 1000'), (0x2E368, 'param_5 clear, FFFF0D70 >= 1000')):
    add(d, f'Target Lambda ({cond})', 'Fueling - Target Lambda', evl + f'Selected when {cond}.', LAMT)
add(0x2E37C, 'Target Lambda (FFFF06CE.3 set, direct)', 'Fueling - Target Lambda', evl + 'Written directly to FFFF0DBA when FFFF06CE bit 3 set.', LAMT)

for d, cond in ((0x2E3A4, 'FFFF054A.4 clear'), (0x2E390, 'FFFF054A.4 set')):
    add(d, f'Target Lambda Limit Offset (Coolant x Load, {cond})', 'Fueling - Target Lambda',
        '0xB5E34 -> FFFF0DCA; 0xB5B38: limit = 43194 + 0DCA - 0x8000 (lambda*43194, same as FFFF0DBA) and FFFF0DBA = min(limit, target), '
        'so T is a lambda offset with 32768 = 0. Inputs coolant FFFEEEDE, load FFFF03A0.', ('lambda offset', '(x-32768)/43194', 'x*43194+32768', '0.000'))

add(0x2D2C8, 'Fuel Quantity Multiplier, Channel 1 (Fuel Quantity x RPM)', INJ,
    '0x91310 (from 0x8A670, FFFF053D mode 0): FFFF1534 = (T(q FFFF0BA6, rpm FFFF2996) * q) >> 7, so T/128 multiplies the fuel quantity '
    '(128 = 1.0); FFFF1534 feeds the base pulse FFFF1544 (0x917EC) -> injection time FFFF1564 (SSM 0x20).', ('multiplier', 'x/128', 'x*128', '0.000'))

for n, (d, fn, out) in enumerate(((0x2D2DC, '0x91450', 'FFFF1538'), (0x2D2F0, '0x91590', 'FFFF153C'), (0x2D304, '0x916AC', 'FFFF1540')), 2):
    add(d, f'Fuel Quantity Multiplier, Channel {n} (Fuel Quantity x RPM)', INJ,
        f'{fn} is instruction-for-instruction the twin of 0x91310 (called next to it from 0x8A670, enable FFFF0539 bit {8-n}): '
        f'{out} = (T(q FFFF0BA6, rpm FFFF2996) * q) >> 7, so T/128 multiplies the fuel quantity (128 = 1.0).', ('multiplier', 'x/128', 'x*128', '0.000'))


# ---------------------------------------------------------------- alternator target duty (0xE363C from 0xE2938)
# 0xE331C: Alternator Duty FFFF10D6 (SSM 0x3A, % = x*0.06) = rate-limited, clamped FFFF10E0 (same units); 0xE363C writes FFFF10E0 by mode
# FFFF06D8: 0 -> T_02F11C + 0x46E, 1 -> T_02F128 + 0x46E, 2 -> T_02F134 + 0x248, 3 -> T_02F104(FFFF3950) + T_02F14C or T_02F140 + 0x248.
#   Adder tables are indexed by battery temperature FFFEF0A6 (C = x-50).
ALT = 'Alternator Control'
DUTY = ('%', 'x*0.06', 'x/0.06', '0.00')
BTAX = {'0': dict(name='Battery Temperature', units='C', expr='x-50', to_byte='x+50')}
eva = '0xE363C -> FFFF10E0 -> 0xE331C Alternator Duty FFFF10D6 (SSM 0x3A, % = x*0.06, same units). '
for d, nm, base in ((0x2F11C, 'Alternator Duty Adder, Mode 0 (Battery Temp)', 0x46E), (0x2F128, 'Alternator Duty Adder, Mode 1 (Battery Temp)', 0x46E),
                    (0x2F134, 'Alternator Duty Adder, Mode 2 (Battery Temp)', 0x248), (0x2F140, 'Alternator Duty Adder, Mode 3 (Battery Temp)', 0x248)):
    add(d, nm, ALT, eva + f'FFFF06D8 mode: 10E0 = T + 0x{base:X} ({base*0.06:.1f} %).', DUTY, axes=BTAX)
add(0x2F14C, 'Alternator Duty Adder, Mode 3 Base Path (Battery Temp)', ALT, eva + 'Mode 3: 10E0 = T_02F104(FFFF3950) + T.', DUTY, axes=BTAX)
add(0x2F104, 'Alternator Duty Base, Mode 3 (FFFF3950)', ALT, eva + 'Mode 3: 10E0 = T(FFFF3950) + T_02F14C (when FFFF3950 < T_02F110 or FFFF0583 1..6).', DUTY)

PED = ('%', 'x*100/65280', 'x*65280/100', '0.0')
add(0x2F158, 'Alternator Control Accelerator Pedal Threshold (Vehicle Speed)', ALT,
    '0xE3888 (from 0xE2938): flag FFFEED28E = (T - [T_02F164 while latched]) <= accelerator pedal FFFEEEF8 (SSM 0x29, % = x*100/65280); '
    'a comparison requires the same unit. Input vehicle speed FFFF65A1.', PED)
add(0x2F164, 'Alternator Control Accelerator Pedal Threshold Hysteresis (Vehicle Speed)', ALT,
    '0xE3888: subtracted from T_02F158 while the flag is set (same pedal-angle unit).', PED)
add(0x2F170, 'Alternator Control MAP Threshold (RPM)', ALT,
    '0xE39CC (from 0xE2938): condition (FFFF09B8 MAP - T) < 0, MAP FFFF09B8 kPa = x/256; input rpm FFFF2994.', ('kPa', 'x/256', 'x*256', '0.0'))

add(0x2D33C, 'Time Threshold vs Coolant [0x93044]', 'Fuel Injection',
    '0x93044 (called unconditionally from 0x8A330 in the 40 ms task 0x153248; period from OBD PID 0x1F: 0x4EDAE adds 1 s per 25 '
    'executions of that task) compares T(coolant FFFEEEDE) with a counter that increments once per execution, so T is time in 40 ms units. '
    'Confirmed by the PID 0x4E seconds counter (0x10C4DC every 25 executions). Caveat: 0x153D20 (scheduler table 0x1525F0) also calls 0x4EDAE.', ('s', 'x*0.04', 'x/0.04', '0.00'))

add(0x2F28C, 'Time Threshold [0xE6908]', 'Diagnostics - Timers',
    '0xE6908 (from 0xE61E8, called unconditionally by the 40 ms task 0x153248): flag = T <= FFFED365, a counter incremented once per '
    'execution while the condition holds (reset otherwise), so T is time in 40 ms units (task period from OBD PID 0x1F).', ('s', 'x*0.04', 'x/0.04', '0.00'))

add(0x2D318, 'Injector Minimum Pulse Width (Fuel Rail Pressure)', INJ, _inj + '0x922D4: FFFF0BB6 = T(FRP FFFEED18); 0x922F4: FFFF1564 = '
    'max(FFFF0BB6, computed time) in the same 0.8 us units (and the same for the other cylinders 0x925E4/0x928D4/0x92BC4).',
    ('us', 'x*0.8', 'x/0.8', '0.0'), axes=FRPAX)

for d, md in ((0x2D958, 0), (0x2D94C, 1), (0x2D964, 2)):
    add(d, f'Ignition Retard (Coolant), FFFF04C1 = {md}', IGN,
        f'0x9D68C (from 0x9BDF4): when enabled and FFFF04C1 = {md}, FFFF0C06 = T(coolant FFFEEEDE) << 7; 0x9B694 ramps it into FFFF0C02; '
        '0x96F3C: FFFF0458 = (049E*128 - max(048D<<7, FFFF0C02) + ...)/128, and 0458 is in total-timing units (deg = x/2, via 03D3 vs 046C), '
        'so T is a retard in 0.5 deg.', DEG2)

for d, wt in ((0x2D810, '1-w'), (0x2D824, 'w')):
    add(d, f'Ignition Timing Target, Override Path (weight {wt}, w=FFFF0E90)', IGN,
        '0x9AE9C (from 0x9BDF4; rpm FFFF2994 x load FFFF09B4): FFFF0486 = 128 + (T_02D810*(1-w) + T_02D824*w - 128)*FFFF0D5E/256, '
        'FFFF0D5E = ratio*256 (0xB1D38, 256 = 1.0). 0x98FAC: (FFFF049F + FFFF0486 - 160) is the total-timing value (0.5 deg, written to the '
        'FFFF046C source FFFEBF90) on its override path (param_8; passed as 0 by 0x9CBF8 in this ROM), so T is 0.5 deg with offset 128.',
        ('deg', '(x-128)/2', 'x*2+128', '0.0'))

add(0x2D9B4, 'Ignition Timing Adder (Coolant) [0x9DBF8]', IGN,
    '0x9DBF8 (from 0x9BDF4): FFFF049D = T_02D9C0*T_02D9CC/128 + T (when FFFF03A0 load >= 0x3C/0x32 hysteresis); 0x9DE28 sums '
    'FFFF045C + FFFF049D + FFFF049B - 32 with 045C (046C = 045C - 32, 0.5 deg) and 049B (added to base timing 03D1, 0.5 deg), '
    'so T is 0.5 deg. Input coolant FFFEEEDE.', DEG2)

add(0x2D9F8, 'Ignition Timing Base, Override Path (RPM x Load)', IGN,
    '0x9DFD0 (from 0x9BDF4): FFFF049F = T(rpm FFFF2994, load FFFF09B4); 0x98FAC: (FFFF049F + FFFF0486 - 160) is the total-timing value '
    '(0.5 deg) on its override path, with 0486 offset 128 (0x9AE9C), so T is 0.5 deg with offset 32 (param_8 is passed as 0 in this ROM).',
    ('deg', '(x-32)/2', 'x*2+32', '0.0'))

for d, fl in ((0x2D7D0, 'clear'), (0x2D7DC, 'set')):
    add(d, f'Timing Term 047B Factor (Coolant), FFFEEF76.7 {fl}', IGT, ev7b + f'0x9A660 (from 0x9BDD0): FFFF047F = T(coolant FFFEEEDE) when '
        f'FFFEEF76 bit 7 {fl}; 047F is the (047F/255) factor of 047B.', F255)

_ev9 = ('0x9C94C: 0x9B27C -> FFFF0489, 0x9B308 -> FFFF048A: in engine state FFFEE6AF >= 3 out = min(base timing FFFF03D1 - T(FFFF03D7*128), '
        'max FFFF0497), both 0.5 deg (03D1 flows to FFFF046C in half-degrees; 0497 caps 0488 in 0x9B384), so T is a retard in 0.5 deg. ')
add(0x2D884, 'Ignition Retard vs FFFF03D7 [0x9B308 -> 048A]', IGN, _ev9, DEG2)
add(0x2D86C, 'Ignition Timing (Coolant), Engine State < 3 [0x9B27C -> 0489]', IGN,
    _ev9 + 'When FFFEE6AF < 3, FFFF0489 = T(coolant FFFEEEDE) directly (same 0.5 deg unit as the other branch).', DEG2)
add(0x2D878, 'Ignition Retard vs FFFF03D7 [0x9B27C -> 0489]', IGN, _ev9, DEG2)

_ev49c = ('0x9DAC8 (from 0x9BDF4, engine state FFFEE6AF = 3): FFFF049C = FFFF0487 + T(coolant FFFEEEDE) - 128 (T_02D99C when FFFF299C rpm/25 >= '
          '200/192 hysteresis, else T_02D9A8); 0x86758 adds FFFF049C to base timing FFFF03D1 (0.5 deg) -> FFFF046C. ')
_ev487 = ('0x9B058 (from 0x9BDF4; rpm FFFF2994 x load FFFF09B4): FFFF0487 = 128 + (T_02D838*(1-w) + T_02D84C*w - 128) * T_02D860/255 * '
          'FFFF0D5E/256 (w = FFFF0E90/65536; disasm 0x9B180..0x9B204), and 0487 - 128 enters 049C -> base timing 03D1 in 0.5 deg. ')
add(0x2D838, 'Ignition Timing Adder Map (weight 1-w, w=FFFF0E90) [-> 0487]', IGN, _ev487, ('deg', '(x-128)/2', 'x*2+128', '0.0'))
add(0x2D84C, 'Ignition Timing Adder Map (weight w=FFFF0E90) [-> 0487]', IGN, _ev487, ('deg', '(x-128)/2', 'x*2+128', '0.0'))
add(0x2D860, 'Ignition Timing Adder Map Factor (Coolant) [-> 0487]', IGN, _ev487 + 'Input coolant FFFEEEDE.', ('factor', 'x/255', 'x*255', '0.000'))

_ev467 = ('0x98BBC (from 0x9BDF4): FFFF0467 = blend of (T_02D56C|T_02D594 weighted by counter b) and (T_02D580|T_02D5A8 weighted by 255-b), each '
          'term b*(T-32)/255 + 32, then blended by w = FFFF0E90; 0x9DE28 uses (FFFF0467 + FFFF0486 + FFFF049C + FFFF049B - 160) as a timing value in '
          '0.5 deg next to (045C + 049D + 049B - 32), with 0486 offset 128 -> 0467 is 0.5 deg with offset 32. ')
for d, nm in ((0x2D56C, 'A1'), (0x2D594, 'B1'), (0x2D580, 'A2'), (0x2D5A8, 'B2')):
    add(d, f'Ignition Timing Target Map {nm} [-> 0467]', IGN, _ev467, ('deg', '(x-32)/2', 'x*2+32', '0.0'))
add(0x2D9EC, 'Ignition Timing Ramp Rate [0x9DE28]', IGN,
    '0x9DE28: the ramped timing FFFEC05C (0.5 deg, offset 32) increases by T per execution while ramping (vs FFFF2A04), so T is 0.5 deg per step.',
    ('deg/step', 'x/2', 'x*2', '0.0'))

add(0x2C9E8, 'Torque Offset Base (RPM) [-> 0ADC]', 'Driver Demand / Torque Request',
    '0x868AC (from 0x87410): FFFF0ADC = T(rpm FFFF2994) + FFFF0ACC*(T_02C9F4-16000)/32768 (16000-offset arithmetic, clamped >= 16001); '
    '0x8267C forms (Requested Torque 0A62 + 0ADA - 16000) - 0ADC + 16000, so 0ADC and T are in the torque type.' + TQEV,
    ('Nm', '(x-16000)/80', 'x*80+16000', '0.0'), axes={'0': dict(name='Engine Speed', units='rpm', expr='x*25/128', to_byte='x*128/25')})

add(0x2E254, 'Fuel Quantity Multiplier (RPM x Load) [-> 0508]', INJ,
    '0xB4234 (task 0xB42AC): FFFF0508 = T(rpm FFFF2996, load FFFF03A0); 0x911FC: FFFF0BA8 = FFFF0BA0*(0508+128)/256*FFFF0E6C/256, '
    'a fuel quantity used by 0x91310 (FFFF0BA6/0BA8/0BAA) -> base pulse -> injection time, so (T+128)/256 is a multiplier (128 = 1.0).',
    ('multiplier', '(x+128)/256', 'x*256-128', '0.000'))
add(0x2E240, 'Fuel Quantity Term (RPM x Load) [-> 0507]', INJ,
    '0xB4210 (task 0xB42AC): FFFF0507 = T(rpm FFFF2996, load FFFF03A0); 0x9106C/0x910D8: fuel quantity FFFF0BA2/0BA4 = base * (0.5 + '
    '(0507 + 0B62 + 0B80 [+ 0407 + 03EC + ...])/256), so with the other terms at 0 the multiplier is (T+128)/256 (128 = 1.0).',
    ('multiplier', '(x+128)/256', 'x*256-128', '0.000'))

_ev407 = ('0x8FDC0 (from 0x89E04, task 0x15307C = 20 ms; timers.py reachability: 0x89E04 is only called from 0x15307C): while active, FFFF0407 = T_02D0AC * (1 - n/(8*T_02D0B8)) with n +1 per execution '
          '(reset at activation); FFFF0407 is an additive fuel-quantity term in 0x910D8 (base*(0.5 + (... + 0407 + ...)/256)). ')
add(0x2D0AC, 'Fuel Enrichment (Decaying, 0407) Initial Amount', 'Fueling - Open Loop & Enrichment', _ev407 + 'Initial fraction of base fuel quantity.',
    ('%', 'x*100/256', 'x*256/100', '0.0'))
add(0x2D0B8, 'Fuel Enrichment (Decaying, 0407) Decay Length', 'Fueling - Open Loop & Enrichment', _ev407 +
    'Decay length in units of 8 executions of the 20 ms task (OS alarm 6 -> task 9, cycle 20 x 1 ms tick; see timers.py): s = x*0.16.',
    ('s', 'x*0.16', 'x/0.16', '0.00'))

_ev80 = ('0x900C8 (from 0x89E04): FFFF0B80 = max(target, previous - 1) (decays 1 count per execution), FFFF0B80 being an additive fuel-quantity '
         'term in 0x9106C (base*(0.5 + (0507 + 0B80 + 0B62)/256)); target = T_02D0C4(coolant) at start, otherwise '
         'T_02D0E4*w + T_02D0D0*(1-w)*T_02D0F8/128 (w = FFFF0E90/65536). ')
FQ = ('%', 'x*100/256', 'x*256/100', '0.0')
add(0x2D0C4, 'Fuel Enrichment (0B80) Start Target (Coolant)', 'Fueling - Open Loop & Enrichment', _ev80, FQ)
add(0x2D0E4, 'Fuel Enrichment (0B80) Target (weight w=FFFF0E90)', 'Fueling - Open Loop & Enrichment', _ev80, FQ)
add(0x2D0D0, 'Fuel Enrichment (0B80) Target (weight 1-w)', 'Fueling - Open Loop & Enrichment', _ev80, FQ)
add(0x2D0F8, 'Fuel Enrichment (0B80) Target Multiplier', 'Fueling - Open Loop & Enrichment', _ev80 + 'Factor on the (1-w) term, x/128.',
    ('multiplier', 'x/128', 'x*128', '0.000'))

_ev62 = ('0x8EDF0 (from 0x89E04): FFFF0B62 = max(T_02CEF0*f(T_02CF2C), T_02CF04*f(T_02CF40), T_02CF18*f(T_02CF54)) * T_02CED8/128 * '
         'T_02CEE4/128, f(L) = (8*L - FFFF0B98)/(8*L) clamped 0..1 (linear decay over 8*L counts of FFFF0B98); FFFF0B62 is an additive '
         'fuel-quantity term (0x9106C/0x910D8: base*(0.5 + (... + 0B62 + ...)/256)). ')
FE = 'Fueling - Open Loop & Enrichment'
for d, n in ((0x2CEF0, 'A'), (0x2CF04, 'B'), (0x2CF18, 'C')):
    add(d, f'Fuel Enrichment (0B62) Amount {n}', FE, _ev62, FQ)
for d, n in ((0x2CF2C, 'A'), (0x2CF40, 'B'), (0x2CF54, 'C')):
    add(d, f'Fuel Enrichment (0B62) Decay Length {n}', FE, _ev62 + 'Decay length in units of 8 counts of FFFF0B98.', ('counts', 'x*8', 'x/8', '0'))
add(0x2CED8, 'Fuel Enrichment (0B62) Multiplier [0x8EDF0]', FE, _ev62 + 'x/128 factor.', ('multiplier', 'x/128', 'x*128', '0.000'))
add(0x2CEE4, 'Fuel Enrichment (0B62) Multiplier (Coolant)', FE, _ev62 + 'x/128 factor (0x80 when FFFF0423 flag clear); input coolant FFFF29A5.',
    ('multiplier', 'x/128', 'x*128', '0.000'))

_ev60 = ('0x8F250 (from 0x89E04): FFFF0B60 = max(T_02CF8C*f(T_02CFC8), T_02CFA0*f(T_02CFDC), T_02CFB4*f(T_02CFF0)) * T_02CF80/128 * '
         'T_02CF74/128 + adder (T_02CF68 when actual FRP FFFEED16 < target FFFF1276 - 0xCCF for 500+ counts), f(L) = linear decay over 8*L '
         'counts of FFFF0B98. 0x88588 sums FFFF0B84 (PID44 decaying enrichment term) + FFFF0B60 + FFFF03EC, so 0B60 is in the same '
         'fuel-fraction unit (x/256). ')
for d, n in ((0x2CF8C, 'A'), (0x2CFA0, 'B'), (0x2CFB4, 'C')):
    add(d, f'Fuel Enrichment (0B60) Amount {n}', FE, _ev60, FQ)
for d, n in ((0x2CFC8, 'A'), (0x2CFDC, 'B'), (0x2CFF0, 'C')):
    add(d, f'Fuel Enrichment (0B60) Decay Length {n}', FE, _ev60 + 'Decay length in units of 8 counts of FFFF0B98.', ('counts', 'x*8', 'x/8', '0'))
add(0x2CF80, 'Fuel Enrichment (0B60) Multiplier [0x8F250]', FE, _ev60 + 'x/128 factor.', ('multiplier', 'x/128', 'x*128', '0.000'))
add(0x2CF74, 'Fuel Enrichment (0B60) Multiplier (Coolant)', FE, _ev60 + 'x/128 factor; input coolant FFFF29A5.', ('multiplier', 'x/128', 'x*128', '0.000'))
add(0x2CF68, 'Fuel Enrichment (0B60) Low Rail Pressure Adder (Coolant)', FE, _ev60 + 'Added amount; input coolant FFFF29A5.', FQ)

_ev38 = ('0x8BF1C (from 0x888C0): FFFF0B38 = T_02CD1C/32768 * (A + B); A is set to T_02CD70|T_02CD84 (FFFF param_8 clear|set) on its trigger and '
         'decays toward 0 by T_02CD28|T_02CD34 per execution; B likewise with T_02CD98|T_02CDAC and steps T_02CD40|T_02CD4C. FFFF0B38 is a '
         'fuel-quantity fraction term in 0x910D8 (base*(0.5 + ... + 0B38/65536)), so amounts/steps are in 1/65536 of base. ')
FQ16 = ('%', 'x*100/65536', 'x*65536/100', '0.000')
for d, nm in ((0x2CD70, 'A, flag clear'), (0x2CD84, 'A, flag set'), (0x2CD98, 'B, flag clear'), (0x2CDAC, 'B, flag set')):
    add(d, f'Transient Fuel (0B38) Amount {nm}', FE, _ev38, FQ16)
for d, nm in ((0x2CD28, 'A, flag clear'), (0x2CD34, 'A, flag set'), (0x2CD40, 'B, flag clear'), (0x2CD4C, 'B, flag set')):
    add(d, f'Transient Fuel (0B38) Decay Step {nm}', FE, _ev38 + 'Per-execution decrement.', ('%/step', 'x*100/65536', 'x*65536/100', '0.0000'))
add(0x2CD1C, 'Transient Fuel (0B38) Multiplier', FE, _ev38 + 'x/32768 factor.', ('multiplier', 'x/32768', 'x*32768', '0.000'))

for d, nm in ((0x2CC2C, 'FFFF054A.2 clear, FFFF3653.7 clear'), (0x2CC38, 'FFFF054A.2 clear, FFFF3653.7 set'),
              (0x2CC14, 'FFFF054A.2 set, FFFF3653.7 clear'), (0x2CC20, 'FFFF054A.2 set, FFFF3653.7 set')):
    add(d, f'Start Fuel Decay Factor per Execution ({nm})', FE,
        '0x8B5B4 (from 0x888C0): during cranking (engine state FFFF66B0 = 2) the start fuel FFFEBC40 is computed from factor tables; '
        'afterwards it is multiplied by T(FFFF29A7 coolant)/65536 every execution, then FFFF0B24 = FFFEBC40/8 (0x91310: fuel quantity '
        'FFFF1534 = 0B24*10 in modes 2/3). T/65536 is the per-execution decay multiplier.', ('multiplier', 'x/65536', 'x*65536', '0.0000'))

for d, nm in ((0x2CB8C, 'FFFF054A.2 clear, FFFF3653.7 clear'), (0x2CB98, 'FFFF054A.2 clear, FFFF3653.7 set'),
              (0x2CB74, 'FFFF054A.2 set, FFFF3653.7 clear'), (0x2CB80, 'FFFF054A.2 set, FFFF3653.7 set')):
    add(d, f'Start Fuel Decay Factor per Execution, Channel 2 ({nm})', FE,
        '0x8B178 (twin of 0x8B5B4, from 0x888C0, output FFFF0B22): after cranking the start fuel is multiplied by T(FFFF29A7 coolant)/65536 '
        'every execution; FFFF0B22 feeds the fuel quantity in 0x91310 (modes 1/2). T/65536 is the per-execution decay multiplier.',
        ('multiplier', 'x/65536', 'x*65536', '0.0000'))

_ev72 = ('0x8F6EC (from 0x888C0, input coolant FFFF29A5): when triggered FFFF0B72 = T_02D004*32 for the first T_02D01C executions, then decays '
         'by 2*T_02D010 per execution to 0; FFFF0B72 is a fuel-quantity fraction term in 0x910D8 (base*(0.5 + ... + 0B72/65536)). ')
add(0x2D004, 'Fuel Enrichment (0B72) Amount (Coolant)', FE, _ev72, ('%', 'x*3200/65536', 'x*65536/3200', '0.00'))
add(0x2D010, 'Fuel Enrichment (0B72) Decay Step (Coolant)', FE, _ev72, ('%/step', 'x*200/65536', 'x*65536/200', '0.000'))
S.pop(0x2D01C, None)   # also found by timers.py; the specific entry below replaces the generic one
add(0x2D01C, 'Fuel Enrichment (0B72) Hold Time (Coolant)', FE, _ev72 + 'Executions of 0x8F6EC, reached only from task 0x152A40 = 10 ms '
    '(OS alarm 4 -> task 8, cycle 10 x 1 ms tick; see timers.py): s = x*0.01.', ('s', 'x*0.01', 'x/0.01', '0.00'))

_ev82 = ('0x902CC (from 0x89E04; load FFFF03A0 x coolant FFFEEEDE): FFFF0B82 = T_02D118*w + T_02D104*(1-w)*T_02D12C/128 (w = FFFF0E90/65536); '
         '0x900C8 adds FFFF0B82 to the FFFF0B80 target (fuel-quantity fraction, x/256 of base). ')
add(0x2D118, 'Fuel Enrichment (0B82) (weight w=FFFF0E90)', FE, _ev82, FQ)
add(0x2D104, 'Fuel Enrichment (0B82) (weight 1-w)', FE, _ev82, FQ)
add(0x2D12C, 'Fuel Enrichment (0B82) Multiplier (RPM)', FE, _ev82 + 'x/128 factor; input FFFF2994.', ('multiplier', 'x/128', 'x*128', '0.000'))

_ev8e = ('0x909BC (from 0x888C0): FFFF0B8E = T_02D238(rpm FFFF2994, coolant FFFEEEDE) + T_02D210(rpm, load FFFF03A0)*T_02D224(IAT FFFEE6A5, ..)/255, '
         'clamped 720..1080 while running. 0x44EAC compares (0B8E - 0B90 + 720)*FFFF2986/90 with injection time, and FFFF2986<<3 with the '
         'same time for a 720 deg cycle (FFFF2986 = time per 90 deg crank), so 0B8E is a crank angle in 1 deg units. ')
CA = ('deg CA', 'x', 'x', '0')
add(0x2D238, 'Injection Angle Base (RPM x Coolant) [-> 0B8E]', INJ, _ev8e, CA)
add(0x2D210, 'Injection Angle Adder (RPM x Load) [-> 0B8E]', INJ, _ev8e, CA)
add(0x2D224, 'Injection Angle Adder Factor [-> 0B8E]', INJ, _ev8e + 'x/255 factor.', ('factor', 'x/255', 'x*255', '0.000'))

_ev8a = ('0x907CC (from 0x888C0): FFFF0B8A = T_02D1D4(rpm FFFF2994, load FFFF03A0) + T_02D1C0(rpm, load)*T_02D1FC(FFFEEF33, IAT FFFEE6A5)/255; '
         '0x8DEA0 handles the injection angles together (compared with 720/1080 and divided by 360 deg), and 0B8E is proven 1 deg CA '
         '(0x44EAC), so 0B8A is a crank angle in 1 deg units. ')
add(0x2D1D4, 'Injection Angle B Base (RPM x Load) [-> 0B8A]', INJ, _ev8a, CA)
add(0x2D1C0, 'Injection Angle B Adder (RPM x Load) [-> 0B8A]', INJ, _ev8a, CA)
add(0x2D1FC, 'Injection Angle B Adder Factor [-> 0B8A]', INJ, _ev8a + 'x/255 factor.', ('factor', 'x/255', 'x*255', '0.000'))

add(0x2D1E8, 'Injection Angle B, Start/Alternate Mode (RPM x Coolant) [-> 0B8A]', INJ, _ev8a + 'Replaces the 0B8A value directly in the engine-state branch of 0x907CC.', CA)
add(0x2D1AC, 'Injection Angle B, Flag Mode (RPM x Load) [-> 0B8A]', INJ, _ev8a + 'Replaces the 0B8A value directly when param_10 is set.', CA)

_evc79 = ('0x8C790 (from 0x888C0): flag FFFEBC94 = (T_thr - [T_hys while set]) <= engine speed FFFF2994 (rpm = x*25/128); thresholds by gear '
          '(FFFF03AD when FFFEE710.7 set, else min(FFFF0593, FFFF0560)); outputs FFFF0B74/0B76 = selected threshold/hysteresis. ')
RPM16 = ('rpm', 'x*25/128', 'x*128/25', '0')
add(0x2CDC0, 'Engine Speed Threshold (Gear, FFFEE710.7 set) [0x8C790]', FE, _evc79, RPM16)
add(0x2CDCC, 'Engine Speed Threshold Hysteresis (Gear, FFFEE710.7 set) [0x8C790]', FE, _evc79, RPM16)
add(0x2CDD8, 'Engine Speed Threshold (Gear) [0x8C790]', FE, _evc79, RPM16)
add(0x2CDE4, 'Engine Speed Threshold Hysteresis (Gear) [0x8C790]', FE, _evc79, RPM16)

_ev9a = ('0x91008 (from 0x89E04): FFFF0B9A = T_02D2A8(rpm FFFF2994, load FFFF03A0) * T_02D2BC(IAM FFFF3669)/128; 0xB5B38 target AFR = '
         '(...)*14.5/43194 - 14.5*0B9A/(32768 + 0B9A), i.e. 0B9A is an enrichment (phi-1)*32768: lambda = 32768/(32768 + x). ')
add(0x2D2A8, 'Open Loop Enrichment for Target Lambda (RPM x Load) [-> 0B9A]', FE, _ev9a, ('lambda', '32768/(32768+x)', '32768/x-32768', '0.000'))
add(0x2D2BC, 'Open Loop Enrichment Multiplier (IAM) [-> 0B9A]', FE, _ev9a + 'x/128 factor indexed by IAM.', ('multiplier', 'x/128', 'x*128', '0.000'))

_ev885 = ('0x88588 (from 0x888C0): total enrichment = FFFF0507 + FFFF0407 + FFFF0404 + T_02CAD8 (torque mode FFFF03C6 = 0x0E) + T_02CAE4 + '
          '(FFFF0B84 + FFFF0B60 + FFFF03EC) + ... + 0x80, the same x/256 fuel-fraction unit as the proven terms (0B84 = OBD PID44 term). ')
add(0x2CAD8, 'Fuel Enrichment, Torque Mode 0x0E [0x88588]', FE, _ev885 + 'Input FFFF03DA.', FQ)
add(0x2CAE4, 'Fuel Enrichment Adder [0x88588]', FE, _ev885 + 'Signed; inputs FFFF03A0 load x FFFF2994 rpm (when enabled).', FQ)

add(0x2D198, 'Injection Angle D (Coolant x RPM) [-> 0B88]', INJ, '0x90758 (from 0x888C0): FFFF0B88 = T(coolant FFFEEEDE, rpm FFFF2996) clamped '
    '1080..1439 while running; 0x8DEA0 compares FFFF0B88 with 1080 next to the proven crank-angle values 0B8A/0B8E (1 deg CA).', CA)
add(0x2CCF0, 'Open Loop Enrichment Adder (Load x Mode) [0x8BCAC]', FE,
    '0x8BCAC (from 0x89E04): out = T + FFFF0B9A/128; 0B9A is (phi-1)*32768 (target-lambda path 0xB5B38), so 0B9A/128 and T are (phi-1)*256: '
    'lambda = 256/(256+x).', LAM)

_ev90 = ('0x90AF0 (from 0x888C0): FFFF0B90 = T_02D260(rpm FFFF2996, FFFF0489) + T_02D24C(rpm, 0489)*T_02D274(FFFEEF33, IAT FFFEE6A5)/255, '
         'clamped 1080..1439 while running; 0x44EAC uses (0B90 - 0B8E) and (0B8E - 0B90 + 720) with FFFF2986 (time per 90 deg) -> 1 deg CA. ')
add(0x2D260, 'Injection Angle C Base [-> 0B90]', INJ, _ev90, CA)
add(0x2D24C, 'Injection Angle C Adder [-> 0B90]', INJ, _ev90, CA)
add(0x2D274, 'Injection Angle C Adder Factor [-> 0B90]', INJ, _ev90 + 'x/255 factor.', ('factor', 'x/255', 'x*255', '0.000'))

add(0x2F2E0, 'A/F Sensor #1 Deviation Gain [0xEBD2C -> 1152]', 'Fueling - Closed Loop',
    '0xEBD2C: FFFF1152 = (1 + T(FFFEEED0)*(lambda - 1)/128)*8192 with lambda = A/F Sensor #1 FFFEEF96 (SSM 0x46, x/8192): '
    '(x-0x2000)*T*9.536743e-07 = T*(lambda-1)/128, so T is a gain with 128 = 1.0.', ('multiplier', 'x/128', 'x*128', '0.000'))

_evfd = ('0x11BFB4: FFFF39F6 = latched FFFF38F8 (0x11BD7C); 0xB3260 adds FFFF38F8 to the target lambda FFFF0DBA (lambda*43194, 0xB5B38), so 38F8/39F6 '
         'are lambda offsets in 1/43194 units. Input of the table is 39F6 itself. ')
LOFF = ('lambda offset', 'x/43194', 'x*43194', '0.0000')
add(0x2FD58, 'Target Lambda Learning Offset Adder [0x11BF14 -> 1358]', 'Fueling - Target Lambda', _evfd + '0x11BF14: FFFF1358 = 39F6 + T.', LOFF)
add(0x2FD64, 'Target Lambda Learning Offset Subtractor [0x11BF64 -> 135A]', 'Fueling - Target Lambda', _evfd + '0x11BF64: FFFF135A = 39F6 - T.', LOFF)

add(0x2C838, 'Reference (Maximum) Torque vs RPM [0x84484]', 'Driver Demand / Torque Request',
    '0x84484 (from 0x82FA0): ratio = (Requested Torque FFFF0A62 - 16000)*255/(T(rpm FFFF2994) - 16000), clamped 0..255; both operands use the '
    '16000-offset torque type, so T is a torque in that type (the requested torque is normalised by it).' + TQEV,
    ('Nm', '(x-16000)/80', 'x*80+16000', '0.0'), axes={'0': dict(name='Engine Speed', units='rpm', expr='x*25/128', to_byte='x*128/25')})

add(0x2C7E8, 'Torque Offset Multiplier (RPM x FFFF0A6E) [0x826D4]', 'Driver Demand / Torque Request',
    '0x826D4 (from 0x82FA0): FFFF0A7A = 16000 + (FFFF0ADC - 16000)*T/32768, scaling the torque-type value 0ADC (proven via 0x8267C with '
    'Requested Torque 0A62), so T is a multiplier with 32768 = 1.0. Inputs FFFF2994 rpm, FFFF0A6E.', ('multiplier', 'x/32768', 'x*32768', '0.000'))

for d, fn, out in ((0x2FBC0, '0x10641C', 'FFFF12B0'), (0x30568, '0x126410', 'FFFF147C')):
    add(d, f'Torque Limit Offset (RPM) [{fn}]', 'Driver Demand / Torque Request',
        f'{fn}: limit = min(T(FFFF299C rpm/25) + FFFF0A1E - 16000, ratio term) -> {out}; FFFF0A1E is torque type (0x80D54: 0ADC - 0ADA + 16000), '
        'and a + b - 16000 is the torque-type addition, so T is in the torque type.' + TQEV,
        ('Nm', '(x-16000)/80', 'x*80+16000', '0.0'), axes={'0': dict(name='Engine Speed', units='rpm', expr='x*25', to_byte='x/25')})

_evtq = ('0x86680 (disasm 0x866EE..0x8672E): FFFF0ADA = min(FFFF0ADC, max(scalar 0x12484, a + b + c + FFFF0AE8 - 48000)) with a, b, c torque terms '
         '(defaults 0x3E80 = 0 Nm, scalars 0x1244C..0x12450), i.e. a torque-type sum, so FFFF0AE8 is torque type; 0x85434: FFFF0AAA = min(FFFF0AFE, '
         'T_02C8E8(rpm)) and FFFF0AF8 = 0AAA - 0AE8 + 16000 (torque difference) -> 0AAA torque type; 0x85940: FFFF0ABC = delayed 16000 + '
         '(0AAA-16000)*FFFF0AFC/32768 (torque type). ')
TQ = ('Nm', '(x-16000)/80', 'x*80+16000', '0.0')
add(0x2CA00, 'Torque Term 0AE8 (RPM x MAP) [0x86A50]', 'Driver Demand / Torque Request', _evtq + '0x86A50: FFFF0AE8 = T(rpm FFFF2994, filtered MAP FFFF19AA).' + TQEV, TQ)
add(0x2C8E8, 'Torque Maximum (RPM) [0x85434 -> 0AAA]', 'Driver Demand / Torque Request', _evtq + 'T caps 0AAA.' + TQEV, TQ,
    axes={'0': dict(name='Engine Speed', units='rpm', expr='x*25/128', to_byte='x*128/25')})
add(0x2C374, 'Reference Torque vs RPM [0x80968]', 'Driver Demand / Torque Request', _evtq +
    '0x80968: ratio = (FFFF0ABC - 16000)*256/(T(rpm FFFF2ADA) - 16000) -> T in the torque type.' + TQEV, TQ,
    axes={'0': dict(name='Engine Speed', units='rpm', expr='x*25/128', to_byte='x*128/25')})

add(0x2FB14, 'Torque Offset (FFFF299C rpm/25) [0x105ACC]', 'Driver Demand / Torque Request',
    '0x105ACC (torque monitor, from 0x101A90): x = T(FFFF299C) + FFFF0A1E, then x < 16000 -> 0 else x - 16000: the torque-type addition with '
    'FFFF0A1E (0ADC - 0ADA + 16000, torque type), so T is in the torque type.' + TQEV, TQ,
    axes={'0': dict(name='Engine Speed', units='rpm', expr='x*25', to_byte='x/25')})

add(0x2E918, 'Torque Ratio Filter Coefficient (RPM) [0xC2D6C]', 'Driver Demand / Torque Request',
    '0xC2D6C (from 0xC0FD0/0xC5934): FFFECA48 += (target - FFFECA48)*T/255 per execution (target 0xFF00 or 0); the filtered ratio then scales the '
    'torque-type value in the same function. T is a first-order filter gain (fraction per execution). Input FFFF2ADA rpm.',
    ('fraction/step', 'x/255', 'x*255', '0.000'), axes={'0': dict(name='Engine Speed', units='rpm', expr='x*25/128', to_byte='x*128/25')})

add(0x2FCAC, 'Filter Coefficient [0x1068D0 -> FFFF19E4]', 'Filters',
    '0x1068D0 (task 0x1011EC): FUN_0016B4D8(&FFFF19E4, target, T) with 0x16B4D8: y += (x - y)*k/65536, so T is a first-order filter gain '
    '(fraction per execution, 65536 = 1.0).', ('fraction/step', 'x/65536', 'x*65536', '0.0000'))


# ---- torque efficiency / density (session 4)
_effev = ('Index: 0x857A8 (from 0x87478) uses FFFF0498 - Ignition Total Timing 046C (0498 = copy of 03D1, 0x9D688; 0.5 deg, signed) >= 0; '
          '0x853C4 uses FFFF03D1 - FFFF049E + 32 (or 03D1 - ((04A4+04BB)*180/256 + 049E - 32), knock terms x*45/128 deg -> *180/256 = 0.5 deg) '
          '-> FFFF0AA8; 0x8637C uses 03D1 - FFFF03D3 (0.5 deg). Axis = retard below the torque-model reference timing 03D1 in 0.5 deg. '
          'Output: 0x857A8 m = T(retard)*16384/FFFF0BF6 (0BF6 = copy of 0AA8 = same table at the reference retard, 0x9A698) and then '
          'torque = 16000 + (tq-16000)*m/16384 (form (tq*m>>14) - m*250/256), i.e. T(retard)/T(ref) is a torque multiplier; 0x8637C forms '
          '(0AA8<<13)/T, floor 0x2000 (= 1.0); 0x9B384/T_02D890 invert it. Only ratios of T and the inverse map use it; the data hold 32768 at '
          'zero retard and the inverse lookup clamps at 32768, so x/32768 = efficiency relative to zero retard.')
add(0x2C8DC, 'Torque Efficiency vs Ignition Retard', 'Driver Demand / Torque Request', _effev, ('ratio', 'x/32768', 'x*32768', '0.000'),
    description='Shared by descriptors 0x2C8DC (0x853C4 -> FFFF0AA8), 0x2C918 (0x857A8 torque multiplier), 0x2C978 (0x8637C).',
    axes={'0': dict(name='Ignition Retard from Reference Timing', units='deg', expr='x/2', to_byte='x*2')})
add(0x2C9F4, 'Torque Offset Density-Scaled (RPM) [-> 0ADC]', 'Driver Demand / Torque Request',
    '0x868AC (from 0x87410): FFFF0ADC = T_02C9E8(rpm) + 16000 + (T(rpm)-16000)*FFFF0ACC/32768 - 16000 (form (p*T>>15) - p*32000>>16), so T is '
    'torque type scaled by the air density ratio FFFF0ACC (32768 = 1.0); 0ADC is torque type (0x8267C).' + TQEV,
    ('Nm', '(x-16000)/80', 'x*80+16000', '0.0'), axes={'0': dict(name='Engine Speed', units='rpm', expr='x*25/128', to_byte='x*128/25')})
add(0x2C960, 'Air Density Correction vs Intake Air Temperature [-> 0ACE]', 'Driver Demand / Torque Request',
    '0x8635C (from 0x87410): FFFF0ACE = T(FFFEE6A5 control IAT, C = x-50). 0x862FC: FFFF0ACC = 32768 * Patm_raw*0xA1BE*0ACE*2^-45 '
    '(Patm FFFEE6AA kPa = x/256 -> 0ACC/32768 = (Patm/101.3 kPa) * (0ACE/32768)); 0x868AC multiplies a torque-type value by 0ACC/32768. '
    'So T is a dimensionless multiplier (32768 = 1.0) applied with the pressure ratio: an air density correction by temperature.',
    ('multiplier', 'x/32768', 'x*32768', '0.000'),
    axes={'0': dict(name='Intake Air Temperature', units='C', expr='x-50', to_byte='x+50')})
add(0x2C96C, 'Torque Efficiency Filter Coefficient (RPM) [0x8637C -> FFFF19A8]', 'Filters',
    '0x8637C: when the efficiency ratio branch is active, FUN_0016B4D8(&FFFF19A8, target, T(rpm FFFF2994)) with 0x16B4D8: y += (x - y)*k/65536, '
    'so T is a first-order filter gain (fraction per execution, 65536 = 1.0).', ('fraction/step', 'x/65536', 'x*65536', '0.0000'),
    axes={'0': dict(name='Engine Speed', units='rpm', expr='x*25/128', to_byte='x*128/25')})


# ---- torque ramp limiter 0x815F0 (session 4)
_GR = {'0': dict(name='Gear', units='gear', expr='x', to_byte='x'),
       '1': dict(name='Engine Speed', units='rpm', expr='x*25/128', to_byte='x*128/25')}
_rmp = ('0x815F0 (from 0x82FA0, call 0x83F92; args from disassembly: p1 FFFF0A5C target torque, p2 FFFF0A5E previous torque, p6 mode '
        'FFFF0585, p8 Gear FFFF03AC, p9 FFFF0A8E, p10 rpm FFFF2994, p11 = FFFEEF76.7, p12 FFFF09DE; outputs at FFFF09D4+k). Lookups '
        'LK_13AAF0(T, gear, rpm). Result: x1 = 0A5E + s1 - 16000 (s1 = phase-1 step); if x1 < H then x = max(x1, F) (F floor) else '
        'x = max(0A5E + s2 - 16000, H) (s2 = phase-2 step); FFFF0A58 = min(0A5C, x). 0x8208C: 0A5E = max(0A42, 0A58); 0x81394 selects '
        'FFFF0A44 from 0A5E/0A5C/12B0/0F24 by min/max; 0x820A0: Requested Torque FFFF0A62 = 0A44 limited, so all of these are torque '
        'type. Steps: s = 16000 + (T-16000)*G*M/65025 (64-bit form (P*T)/0xFE01 - P*0x280/0xA29, 0x280/0xA29 = 16000/65025), G = gear '
        'constant (255*{1,2,5,5,5} phase 2, 255*{1,1,3,3,3} phase 1; 255 when FFFF03CA.4 clear), M = T_02C780 / T_02C774 (FFFF0A8E). '
        'Variant condition C = (FFFEEF76.7 clear and FFFF09DE > 4); meaning of mode 0585 values unresolved. ')
_modes = {'2': 'mode 2', '3': 'mode 3', '4': 'mode 4', 'o': 'other modes'}
for d, m in ((0x2C6D4, '2'), (0x2C6E8, '3'), (0x2C74C, '4'), (0x2C6FC, 'o')):
    add(d, f'Torque Ramp Floor (Gear x RPM, {_modes[m]})', 'Driver Demand / Torque Request', _rmp + 'This table is F (lower limit below H).' + TQEV, TQ, axes=_GR)
for d, m in ((0x2C710, '2'), (0x2C724, '3'), (0x2C760, '4'), (0x2C738, 'o')):
    add(d, f'Torque Ramp Phase Threshold (Gear x RPM, {_modes[m]})', 'Driver Demand / Torque Request', _rmp + 'This table is H (phase-2 threshold and floor).' + TQEV, TQ, axes=_GR)
for d, m, c in ((0x2C594, '2', 1), (0x2C5A8, '3', 1), (0x2C60C, '4', 1), (0x2C5BC, 'o', 1),
                (0x2C5D0, '2', 0), (0x2C5E4, '3', 0), (0x2C620, '4', 0), (0x2C5F8, 'o', 0)):
    add(d, f'Torque Ramp Step Phase 1 (Gear x RPM, {_modes[m]}, C={c})', 'Driver Demand / Torque Request',
        _rmp + 'This table is the base of s1 (torque delta per execution before G*M/65025 scaling).' + TQEV,
        ('Nm/step', '(x-16000)/80', 'x*80+16000', '0.0'), axes=_GR)
for d, m, c in ((0x2C634, '2', 1), (0x2C648, '3', 1), (0x2C6AC, '4', 1), (0x2C65C, 'o', 1),
                (0x2C670, '2', 0), (0x2C684, '3', 0), (0x2C6C0, '4', 0), (0x2C698, 'o', 0)):
    add(d, f'Torque Ramp Step Phase 2 (Gear x RPM, {_modes[m]}, C={c})', 'Driver Demand / Torque Request',
        _rmp + 'This table is the base of s2 (torque delta per execution before G*M/65025 scaling).' + TQEV,
        ('Nm/step', '(x-16000)/80', 'x*80+16000', '0.0'), axes=_GR)
for d, ph in ((0x2C774, 1), (0x2C780, 2)):
    add(d, f'Torque Ramp Step Multiplier Phase {ph} (vs Accelerator Pedal Angle)', 'Driver Demand / Torque Request',
        _rmp + f'This table is M for phase {ph}: the step is scaled by G*M/65025 with G an integer multiple of 255 (255 = x1), so M/255 is '
        'the multiplier. Input FFFF0A8E = accelerator pedal angle (limited), written by 0x82C34.', ('multiplier', 'x/255', 'x*255', '0.00'))


# ---- torque ramp-down limiter 0x8117C (session 4)
_rdn = ('0x8117C (from 0x82FA0, call 0x84020; args from disassembly: p1 FFFF0A5E torque, p4 FFFF0A58 ramp output, p7 Gear FFFF03AC, '
        'p8 rpm FFFF2994, p9 FFFF03CB.2, p10 FFFF064A.7 (latched when 03CB.2 clear), p11 Vehicle Speed FFFF65A1; p12 = FFFF0A42). '
        'Variant: V<4 when vehicle speed < 4 km/h, else B0/B1 by p10. x1 = 0A5E - (s1-16000); if x1 < H: x = max(0A5E - (s2-16000), H) '
        'else x = min(x1, F); FFFF0A42 = x when 0A58 < F and EF76.6/EF364.0/0567.2/0567.1 clear, else 0A58. 0x8208C: 0A5E = max(0A42, 0A58) '
        '(torque type, see FFFF0A44 -> Requested Torque 0A62), so F, H and the subtracted steps are torque type. ')
for v, (f, s1, h, s2) in {'V<4': (0x2C4A4, 0x2C404, 0x2C4B8, 0x2C418), 'B0': (0x2C454, 0x2C47C, 0x2C468, 0x2C490),
                          'B1': (0x2C3DC, 0x2C42C, 0x2C3F0, 0x2C440)}.items():
    add(f, f'Torque Ramp-Down Ceiling (Gear x RPM, {v})', 'Driver Demand / Torque Request', _rdn + 'This table is F.' + TQEV, TQ, axes=_GR)
    add(h, f'Torque Ramp-Down Threshold (Gear x RPM, {v})', 'Driver Demand / Torque Request', _rdn + 'This table is H.' + TQEV, TQ, axes=_GR)
    add(s1, f'Torque Ramp-Down Step Phase 1 (Gear x RPM, {v})', 'Driver Demand / Torque Request', _rdn + 'This table is s1 (decrement per execution).' + TQEV,
        ('Nm/step', '(x-16000)/80', 'x*80+16000', '0.0'), axes=_GR)
    add(s2, f'Torque Ramp-Down Step Phase 2 (Gear x RPM, {v})', 'Driver Demand / Torque Request', _rdn + 'This table is s2 (decrement per execution).' + TQEV,
        ('Nm/step', '(x-16000)/80', 'x*80+16000', '0.0'), axes=_GR)


# ---- MAP transient detection 0xCEF4C (session 4)
_MAPX = {'0': dict(name='Manifold Absolute Pressure (filtered)', units='kPa', expr='x/256', to_byte='x*256')}
_mtr = ('0xCEF4C (from 0xCF4B4): FFFF19D0 = filter(FFFF09B8 MAP, k=0x199A/65536 via 0x16B4D8) -> FFFF0F52; FFFF0F50 = FFFEE6F8 (MAP, kPa '
        'x/256) - FFFF19D0, i.e. a MAP change in kPa (x/256, signed). Lookups use p1 = FFFF09B8 (MAP, kPa x/256). Variant by p9 = '
        'FFFEEF76.6 (A = clear, B = set). Rise: flag ECD3D = (R <= 0F50) with R = T_rise - T_rise_hys while ECD3D was set; drop: flag ECD40 = '
        '(0F50 <= D) with D = T_drop + T_drop_hys while ECD40 was set. Comparisons/sums with 0F50 give kPa x/256. ')
for d, nm, v in ((0x2EC08, 'Rise Threshold', 'A'), (0x2EC14, 'Rise Threshold', 'B'), (0x2EBF0, 'Rise Hysteresis', 'A'),
                 (0x2EBFC, 'Rise Hysteresis', 'B'), (0x2EC38, 'Drop Threshold', 'A'), (0x2EC44, 'Drop Threshold', 'B'),
                 (0x2EC20, 'Drop Hysteresis', 'A'), (0x2EC2C, 'Drop Hysteresis', 'B')):
    add(d, f'MAP Transient {nm} ({v}: FFFEEF76.6={"0" if v == "A" else "1"})', 'Manifold Pressure - Transient Detection', _mtr,
        ('kPa', 'x/256', 'x*256', '0.00'), axes=_MAPX)


# ---- accelerator pedal angle limit 0x103CF4 (session 4)
_pl = ('0x103CF4 (from 0x100CB4; p1 FFFEF3EA.6 enable, p2 Torque 12B0, p3 rpm FFFF2994, p4 mode FFFF0585, p5 FFFF056F.4 = B, p6 FFFF12C2, '
       'p7 FFFF0569.6): FFFF1282 = min(previous + 26 per execution (rate limit), T1(12C2), T2(12B0 torque, rpm)). 0x82C34 (0x82FA0): '
       'when FFFF03C6 == 0x18 and Accelerator Pedal Angle FFFEEEF8 <= 1282 the pedal value is replaced by 1282, so 1282 and the '
       'tables are pedal angle (SSM 0x29: % = x*100/65280). 12B0 is torque type: 0x81394 compares it with 0A5C/0A5E. ')
_PCT = ('%', 'x*100/65280', 'x*65280/100', '0.0')
for d, v in ((0x2FA78, 'mode other, B=0'), (0x2FA84, 'mode 2, B=0'), (0x2FA90, 'mode 3, B=0'), (0x2FA9C, 'mode other, B=1'),
             (0x2FAA8, 'mode 2, B=1'), (0x2FAB4, 'mode 3, B=1')):
    add(d, f'Accelerator Pedal Angle Limit vs FFFF12C2 ({v})', 'Driver Demand / Torque Request', _pl + 'This table is T1 (input FFFF12C2 unresolved).', _PCT)
for d, v in ((0x2FA00, 'mode other, B=0'), (0x2FA14, 'mode 2, B=0'), (0x2FA28, 'mode 3, B=0'), (0x2FA3C, 'mode other, B=1'),
             (0x2FA50, 'mode 2, B=1'), (0x2FA64, 'mode 3, B=1')):
    add(d, f'Accelerator Pedal Angle Limit (Torque x RPM, {v})', 'Driver Demand / Torque Request', _pl + 'This table is T2.', _PCT)


# ---- ignition timing 0532 path 0xBDD60 (session 4)
_532 = ('0xBDD60 (from 0xBE0E8, call 0xBE512; p1 FFFF299C rpm/25, p2 FFFF0542, p3 FFFF0458, p4 FFFF0541, p7 Vehicle Speed FFFF65A1, p8 FFFF66B0, '
        'p9 Coolant FFFEEEDE, p10 FFFEEED4, p11 rpm, p12 load FFFF09B4, p13 FFFF049E; output p15 = r9(FFFF0458)+218 = FFFF0532). When '
        'p6 set, 65A1 != 0xFF and p14 set: x = Ta(rpm/25, coolant) + Tb(0542, coolant) + Tc(c1, coolant) + Td(c2, coolant) (signed int8 sum, '
        'saturated); with p14 clear the B set is used. c1 counts executions while FFFF66B0 == 3, c2 is a second execution counter. '
        'FFFF0532 = x when 0541 < 2 (else 0458). 0x86B58 (0x87478): Ignition Timing 03D3 = 0532 when FFFF0530 == 2; 03D3 is 0.5 deg '
        '(0x88478 compares |03D3 - 046C|), so the sum and each term are 0.5 deg. ')
for d, nm, v in ((0x2E648, 'RPM x Coolant', 'A'), (0x2E670, 'FFFF0542 x Coolant', 'A'), (0x2E6C0, 'Counter c1 x Coolant', 'A'),
                 (0x2E6E8, 'Counter c2 x Coolant', 'A'), (0x2E65C, 'RPM x Coolant', 'B'), (0x2E684, 'FFFF0542 x Coolant', 'B'),
                 (0x2E6D4, 'Counter c1 x Coolant', 'B'), (0x2E6FC, 'Counter c2 x Coolant', 'B')):
    add(d, f'Ignition Timing Term 0532 ({nm}, set {v})', IGN, _532, DEG2)


# ---- engine speed fluctuation thresholds 0xE541C, branch selected by calibration byte 0x17F4A (session 4)
_esf = ('0xE541C (from 0xE4728; p1 FFFEF192, p2 FFFF2B0C, p3 FFFF2B0E, p4 IAT FFFEEEE2, p5 Gear FFFF03AC, p6 FFFF0D70). Disassembly '
        '0xE543C..0xE54DE: when calibration byte 0x17F4A == 0, flag FED314.2 = (T_gear(IAT) <= |FFFEF192|) (gear 1-4 own tables, 5/6 '
        'T_02F280). 0x4D04C: FFFEF192 = sat16(FFFF2ADA - previous FFFF2ADA) = change of Engine Speed (OBD copy, rpm = x*25/128) per '
        'execution, so T is rpm change per execution. In this ROM 0x17F4A = 1 (branch 2 with FFFF2B0C is used; Ghidra dropped this '
        'branch as unreachable), so these tables are inactive. ')
for d, g in ((0x2F250, '1'), (0x2F25C, '2'), (0x2F268, '3'), (0x2F274, '4'), (0x2F280, '5-6')):
    add(d, f'Engine Speed Change Threshold vs IAT (gear {g}, inactive: 0x17F4A=1)', 'Misfire / Roughness Detection', _esf,
        ('rpm/step', 'x*25/128', 'x*128/25', '0.0'))

add(0x2CA34, 'Torque Filter Coefficient (RPM) [0x86D9C -> FFFF19AC]', 'Filters',
    '0x86D9C (from 0x87478; p4 = rpm FFFF2994): FUN_0016B4D8(&FFFF19AC, FFFF0F56, T(rpm)) with 0x16B4D8: y += (x - y)*k/65536, so T is a '
    'first-order filter gain (fraction per execution, 65536 = 1.0).', ('fraction/step', 'x/65536', 'x*65536', '0.0000'),
    axes={'0': dict(name='Engine Speed', units='rpm', expr='x*25/128', to_byte='x*128/25')})

_thl = ('0x88054 (from 0x87478; p1 Throttle Opening Angle target FFFF0AF4 (SSM 0x15, % = x/256), p2 rpm FFFF2994; output p15 = '
        'FFFF09B4+0x166 = FFFF0B1A): u = min(max(0AF4*0xE60B/32768 + 10, 10), 0xB3C3); each active table T(rpm) replaces u when T < u '
        '(direct comparison/assignment), so T is in u units: % = (x - 10)*128/58891. ')
for d, cond in ((0x2CA9C, 'FFFF0675.2 set'), (0x2CAC0, 'FFFEF498.3 set'), (0x2CAB4, 'FFFEF32E.2 or .4 set'), (0x2CAA8, 'FFFEF498.2 set (final)')):
    add(d, f'Throttle Opening Limit vs RPM ({cond})', 'Throttle', _thl + f'This table applies when {cond}.',
        ('%', '(x-10)*128/58891', 'x*58891/128+10', '0.0'),
        axes={'0': dict(name='Engine Speed', units='rpm', expr='x*25/128', to_byte='x*128/25')})

_tfg = ('Filter gain of the torque-model efficiency/torque filters: 0x8637C (FFFF19A8) and 0x870FC (FFFF19B0) call 0x16B4D8 (y += (x-y)*k/65536) '
        'with k = min(FFFF0AC8 * FFFF0B0E >> 9, 0xFFFF). 0x87010: FFFF0B0E = T_02CA64(rpm), T_02CA70(rpm) or their average, selected by '
        'FFFF29B7 - FFFF29BA (+/-14 band with dwell counter). 0x85FB4 (p2 03D3, p3 Ignition Total Timing 046C, p5 coolant FFFEEEDE, p6 '
        'FFFF04CA.0): FFFF0AC8 = 0x200 when no case is active, else T(coolant) per case; the cases come from 03D3 - 046C (0.5 deg) above '
        '8 (p6 clear) / 14 (p6 set) and the torque mode p1 = FFFF0541. With the neutral default 0x200 the gain equals 0B0E, so 0AC8/512 '
        'is a gain multiplier and 0B0E/65536 the base gain (fraction per execution). ')
for d, case in ((0x2C924, 'case R, p6=0'), (0x2C93C, 'case R, p6=1'), (0x2C930, 'case K'), (0x2C954, 'case D, p6=0'), (0x2C948, 'case D, p6=1')):
    add(d, f'Torque Filter Gain Multiplier vs Coolant ({case}) [-> 0AC8]', 'Filters', _tfg,
        ('multiplier', 'x/512', 'x*512', '0.00'))
for d, nm in ((0x2CA64, 'A'), (0x2CA70, 'B')):
    add(d, f'Torque Filter Base Gain {nm} (RPM) [-> 0B0E]', 'Filters', _tfg, ('fraction/step', 'x/65536', 'x*65536', '0.0000'),
        axes={'0': dict(name='Engine Speed', units='rpm', expr='x*25/128', to_byte='x*128/25')})

_idq = ('0x80968 (from 0x82FA0, call 0x83036; p1 FFFF0D06, p2 FFFEF33C filtered rpm, p3 Torque 0ABC, p4 Torque 0ADA, p5 rpm FFFF2994, p8 rpm '
        'FFFF2ADA): e = 0D06 - F33C (rpm, x*25/128); A = max(T_02C360(0D06, e), 16000) -> FFFF0A18; d = rpm - rpm two executions earlier (FEBAB8/FEBABA history) -> FFFF0A10; '
        'B = T_02C380(0D06, d) -> FFFF0A1A; r = (0ABC-16000)*256/(T_02C374(rpm)-16000) (torque ratio, 256 = 1.0; 0x100 when p7); output '
        'FFFF0A12 = 0ABC - 0ADA + 16000 + r*((A-16000) + (B-16000))/256 (torque-type arithmetic, clamped). So A and B are torque type. ')
add(0x2C360, 'Speed Feedback Torque Correction vs RPM Error [-> 0A18]', 'Driver Demand / Torque Request', _idq + TQEV, TQ,
    axes={'0': dict(name='Engine Speed 0D06 (reference)', units='rpm', expr='x*25/128', to_byte='x*128/25'),
          '1': dict(name='Engine Speed Error (0D06 - filtered)', units='rpm', expr='x*25/128', to_byte='x*128/25')})
add(0x2C380, 'Speed Feedback Torque Correction vs RPM Change [-> 0A1A]', 'Driver Demand / Torque Request', _idq + TQEV, TQ,
    axes={'0': dict(name='Engine Speed 0D06 (reference)', units='rpm', expr='x*25/128', to_byte='x*128/25'),
          '1': dict(name='Engine Speed Change (over 2 executions)', units='rpm', expr='x*25/128', to_byte='x*128/25')})

_tlim = ('0x82028 (from 0x82FA0, call 0x83DBE; p1 FFFF0A40, p2 IAT FFFEEEE2, p3 FFFF03C4, p4 rpm FFFF2994): Torque Ramp Target FFFF0A5C = '
         'min(0A40, T_02C78C(rpm, IAT), T_02C7A0(03C4, rpm)); 0A5C is torque type (0x81394 compares it with 0A5E; -> Requested Torque '
         '0A62), so the limits are torque type. 0x810A0 (call 0x83D8C; p1 FFFF0A46, p2 Gear FFFF03AC, p3 FFFEEF76.7, p4 FFFEF32A.0): '
         'FFFF0A40 = min(0A46, L) with L = T_02C3D0(gear) when p3 set and p4 clear. ')
add(0x2C78C, 'Torque Limit (RPM x IAT) [-> 0A5C]', 'Driver Demand / Torque Request', _tlim + TQEV, TQ)
add(0x2C7A0, 'Torque Limit (FFFF03C4 x RPM) [-> 0A5C]', 'Driver Demand / Torque Request', _tlim + 'Input FFFF03C4 unresolved.' + TQEV, TQ)
add(0x2C3D0, 'Torque Limit vs Gear (FFFEEF76.7 set) [-> 0A40]', 'Driver Demand / Torque Request', _tlim + TQEV, TQ)

add(0x2DF00, 'Target Idle Speed (alternate, FFFF04CC.4 set) vs Coolant [-> 0D10]', 'Idle Speed Control',
    '0xAB784 (from 0xA8230, call 0xA8F6A; p1 FFFF04CC.4, p2 Coolant FFFEEEDE): FFFF0D10 = T(coolant) << 6 when p1 set, else FFFF0D0E. '
    '0xAB738: FFFF0D06 = 0D10 (or FFFEF473 << 6); 0xD17F0 reports 0D06 over SSM through converter 0xD0C50 (x*25/32 = rpm*4), and '
    '0x80968 uses 0D06 - filtered Engine Speed (rpm x*25/128). So 0D10 is rpm = x*25/128 and T is rpm = x*64*25/128 = x*12.5.',
    ('rpm', 'x*12.5', 'x/12.5', '0'))

_aae = ('0x85580 (from 0x87478; p1 rpm FFFF2994, p2 FFFF152C, p3 FFFF0AAC; output p4 = FFFF09B4+0xFA = FFFF0AAE): e = (152C*512/(rpm*25))/2 - '
        'T_02C8F4(rpm)/2 (signed); when e > 0 (with hold): I = max(T_02C900(e) + I_prev - 16000, 16000) capped below 16000-offset range, '
        'P = I + T_02C90C(e) - 16000; FFFF0AAE = 0AAC + P - 16000 (torque-type sums). 0x86F74: (0AAE-16000)*8192/(Torque 0ADC-16000) is a '
        'torque ratio, so 0AAE, P, I and both tables are torque type. Input e (from FFFF152C) is unresolved. ')
add(0x2C900, 'Torque Correction Integral Step vs Error e [0x85580 -> 0AAE]', 'Driver Demand / Torque Request', _aae + TQEV,
    ('Nm/step', '(x-16000)/80', 'x*80+16000', '0.0'))
add(0x2C90C, 'Torque Correction Proportional Term vs Error e [0x85580 -> 0AAE]', 'Driver Demand / Torque Request', _aae + TQEV, TQ)

_a30 = ('0x80EF4 (from 0x82FA0; p1 rpm FFFF2994, p2 FFFF0A04, p3 FFFEF540): FFFF0A30 = min(0A04, T(rpm)); 0x8034C (call 0x84276, outputs '
        'r13 = FFFF09D4 + 48 / + 46): FFFF0A04 = min(0A64, 0A7A + 0A78 - 16000 - 0ADA + 16000) (proven torque terms), so 0A30 and T are torque '
        'type. T_02C394 applies when rpm > 0x7A00 (x*25/128 = 6100 rpm) or FFFEF540 > 0xF2B2; T_02C3A0 sits behind the same condition in '
        'an else-branch and is unreachable; T_02C3AC otherwise. 0x82664: FFFF0A76 = 0A30 when FFFF03C6 == 11 else 0A04. ')
add(0x2C394, 'Torque Limit vs RPM (high rpm / FFFEF540 high) [-> 0A30]', 'Driver Demand / Torque Request', _a30 + TQEV, TQ,
    axes={'0': dict(name='Engine Speed', units='rpm', expr='x*25/128', to_byte='x*128/25')})
add(0x2C3A0, 'Torque Limit vs RPM (unreachable branch) [0x80EF4]', 'Driver Demand / Torque Request', _a30 + TQEV, TQ,
    axes={'0': dict(name='Engine Speed', units='rpm', expr='x*25/128', to_byte='x*128/25')})
add(0x2C3AC, 'Torque Limit vs RPM (normal) [-> 0A30]', 'Driver Demand / Torque Request', _a30 + TQEV, TQ,
    axes={'0': dict(name='Engine Speed', units='rpm', expr='x*25/128', to_byte='x*128/25')})
_c1d = ('0xC1DDC (from 0xC0FD0, call 0xC13B0; p2 rpm FFFF2ADA, p3 Torque FFFF0A76, p5 IAT FFFEEEE2, p13 mode FFFF0585, p15 flag): '
        'L = T_02E84C (default) / T_02E87C (mode 3 or p15) / T_02E864 (mode 2); H = T_02E858 (default) / T_02E888 (mode 3 or p15) / '
        'T_02E870 (mode 2); flag FEC9D6 = 0A76 < L, or < L + (H - L) while set (hysteresis; FFFF0E9C = H - L + 16000). 0A76 = 0A30/0A04 '
        '(torque type), so L and H are torque type. Separate flag FEC9DA = IAT FFFEEEE2 < T_02E894(vehicle speed) (+0x199 hysteresis), so '
        'T_02E894 is in the IAT word unit (C = x*5/2048 - 40). ')
for d, nm in ((0x2E84C, 'Low, default'), (0x2E87C, 'Low, mode 3 / flag'), (0x2E864, 'Low, mode 2'),
              (0x2E858, 'High, default'), (0x2E888, 'High, mode 3 / flag'), (0x2E870, 'High, mode 2')):
    add(d, f'Torque Threshold {nm} vs RPM [0xC1DDC]', 'Driver Demand / Torque Request', _c1d + TQEV, TQ,
        axes={'0': dict(name='Engine Speed (OBD copy)', units='rpm', expr='x*25/128', to_byte='x*128/25')})
add(0x2E894, 'Intake Air Temperature Threshold vs Vehicle Speed [0xC1DDC]', 'Driver Demand / Torque Request', _c1d,
    ('C', 'x*5/2048-40', '(x+40)*2048/5', '0.0'))

_fg19b4 = ('0x8B9F0 (from 0x8A584; p1 rpm FFFF2994, p2 load FFFF03A0): FUN_0016B4D8(&FFFF19B4, target, g << 8) with 0x16B4D8: y += (x-y)*k/65536, '
           'so the gain g is a fraction per execution with 256 = 1.0. g = T_02CC80(rpm, load), or T_02CC94(rpm, load) while the input '
           'p7 is falling (with latch). ')
add(0x2CC80, 'Filter Gain FFFF19B4 (RPM x Load) [0x8B9F0]', 'Filters', _fg19b4, ('fraction/step', 'x/256', 'x*256', '0.000'))
add(0x2CC94, 'Filter Gain FFFF19B4, falling input (RPM x Load) [0x8B9F0]', 'Filters', _fg19b4, ('fraction/step', 'x/256', 'x*256', '0.000'))

# ---- filter gains proven by the first-order filter helpers (scripts/filter_gains.py -> evidence/filter-gains.tsv)
_FH = {'0016b4d8': 'y += (x-y)*k/65536', '0016b55c': 'y += (x-y)*k/65536', '0016b520': 'y += (x-y)*k/65536 (signed)',
       '0016b44c': 'y += (x-y)*k/256 (8-bit)', '0016b49c': 'y += (x-y)*k/256 (8-bit signed)'}
_fgp = f'{ROOT}/evidence/filter-gains.tsv'
if os.path.exists(_fgp):
    for _l in list(open(_fgp))[1:]:
        _d, _fn, _h, _tg, _sc = _l.split('\t'); _sc = int(_sc); _dd = int(_d, 16)
        if _dd in S:
            continue
        _tgt = _tg.replace('&DAT_', '').replace('&', '').upper()
        add(_dd, f'Filter Gain {_tgt} [0x{int(_fn,16):X}]', 'Filters',
            f'0x{int(_fn,16):X}: FUN_{_h}(&{_tgt}, target, gain) with 0x{int(_h,16):X}: {_FH[_h]}; the lookup result is the gain argument'
            f'{" shifted left (x256)" if _sc == 256 else ""}, so the table is a fraction per execution with {_sc} = 1.0.',
            ('fraction/step', f'x/{_sc}', f'x*{_sc}', '0.000' if _sc == 256 else '0.0000'))

# ---- secondary (helper) tables proven by comparison (scripts/helper_compare.py -> evidence/helper-compare.tsv)
_BATT = {'0': dict(name='Battery Voltage', units='V', expr='x*8/100', to_byte='x*100/8')}
_O2HC = ('A', 'x*179*1004/6553600', 'x*6553600/(179*1004)', '0.000')
add(0x163A20, 'Rear O2 Heater Current Low Limit vs Battery Voltage', 'Diagnostics - O2 Heater',
    '0x493EC: FFFEFA22 = helper 0x16B9A4(0x163A20, Battery Voltage FFFFAB41); fault counter FEFA20 += 1 when Rear O2 Heater Current '
    'FFFEE6D0 (SSM 0x2C) < FA22 or > FA23 (direct byte comparisons), so the table is in the SSM 0x2C current unit.', _O2HC, axes=_BATT)
add(0x163A2C, 'Rear O2 Heater Current High Limit vs Battery Voltage', 'Diagnostics - O2 Heater',
    '0x493EC: FFFEFA23 = helper 0x16B9A4(0x163A2C, Battery Voltage FFFFAB41); see 0x163A20 (window check on FFFEE6D0, SSM 0x2C).', _O2HC, axes=_BATT)
add(0x168BA4, 'Rear O2 Heater Current Threshold vs Battery Voltage [0x6A444]', 'Diagnostics - O2 Heater',
    '0x6A444: FFFF2ABA = helper 0x16B9A4(0x168BA4, Battery Voltage FFFFAB41); compared directly with FFFEE6D0 (Rear O2 Heater Current, '
    'SSM 0x2C).', _O2HC, axes=_BATT)
add(0x163A9C, 'Engine Load Threshold vs Coolant [0x5036C]', 'Diagnostics',
    '0x5036C: b = helper 0x16BA80(0x163A9C, Coolant FFFEEEDE); condition b < Engine Load FFFF03A0 (% = x) is a direct comparison, '
    'so the table is load % (255 = never).', ('%', 'x', 'x', '0'),
    axes={'0': dict(name='Coolant Temperature (filtered, word)', units='C', expr='x*5/2048-40', to_byte='(x+40)*2048/5')})
add(0x158FE, 'Fuel Rail Pressure Threshold vs Coolant [0xC02D4]', 'Fuel System - High Pressure',
    '0xC02D4 (from 0xBE0E8; p3 Fuel Rail Pressure (gauge) FFFEED16, p4 Coolant FFFEEEDE): t = helper 0x16BC68(0x158FE, coolant); flag '
    'set when t <= FRP (direct comparison), so the table is FRP gauge kPa = x*639630/1048576. Static breakpoints are the coolant word.',
    ('kPa', 'x*639630/1048576', 'x*1048576/639630', '0'),
    axes={'0': dict(name='Coolant Temperature (filtered, word)', units='C', expr='x*5/2048-40', to_byte='(x+40)*2048/5')},
    static_values=[f'{v*5/2048-40:.1f}' for v in range(0, 65536, 4096)])

add(0x163AA8, 'Mass Airflow Threshold vs RPM [0x5036C]', 'Diagnostics',
    '0x5036C: u = helper 0x52B4A(0x163AA8, Engine Speed (OBD copy) FFFF2ADA) (u16 axis, u32 data); condition u < FFFEECB0 (MAF curve '
    'value, g/s = x/76800; 0x4C53C: OBD PID10 MAF = 16*ECB0/5625) is a direct comparison. 0xFFFFFF00 = never.',
    ('g/s', 'x/76800', 'x*76800', '0.00'),
    axes={'0': dict(name='Engine Speed (OBD copy)', units='rpm', expr='x*25/128', to_byte='x*128/25')})
add(0x163AB4, 'Manifold Gauge Pressure Threshold vs Coolant [0x5036C]', 'Diagnostics',
    '0x5036C: v = helper 0x16BBC4(0x163AB4, Coolant (sampled) FFFF29A7, C = x-50); condition v < FFFEEED2 (= (MAP - atmospheric)/2, '
    'kPa = x/128) is a direct comparison. 32640 = never.', ('kPa', 'x/128', 'x*128', '0.00'),
    axes={'0': dict(name='Coolant Temperature (sampled)', units='C', expr='x-50', to_byte='x+50')})
for _t, _fn, _nm in ((0x14DB0, '0x14F35C', 'A'), (0x14DA0, '0x14F4AE', 'B')):
    add(_t, f'Engine Speed Threshold {_nm} vs FFFF2C71 [{_fn}]', 'Crank/Cam Signal Processing',
        f'{_fn}: t = helper 0x16ACD6({_t:#x}, FFFF2C71) (16 x s8, implicit axis 0..240 step 16) compared directly with FFFF1A3C (engine '
        'speed source byte, rpm = x*25; 0x143640: 1A3C = 1A3A/128 with 1A3A -> FFFF2994 rpm x*25/128). Input FFFF2C71 unresolved.',
        ('rpm', 'x*25', 'x/25', '0'))

add(0x163A38, 'MAF Load-Path Correction (MAF x IAT)', 'Airflow Model (MAF)',
    '0x4D3AE: FFFEEEF2 = map helper 0x16B828(0x163A38, FFFEEEF0, IAT FFFEEEE2) (data index i1*n2 + i2). 0x4D4BA: FFFEEEF0 = (FFFEEEEC + '
    'FFFEEEEE)/2 with EEEC/EEEE = max/min of Mass Airflow FFFEEEE4 (0x4C53C, 0x4D4DA/0x4D4FC; OBD PID10 g/s = x*75/16384). 0x4D46C: '
    'FFFEEEF4 (Mass Airflow load-path copy, OBD PID43 source, g/s) = EEF2*EEF0/256 + EEF6, so EEF2/256 is a multiplier on MAF.',
    ('multiplier', 'x/256', 'x*256', '0.000'),
    axes={'0': dict(name='Mass Airflow (averaged)', units='g/s', expr='x*75/16384', to_byte='x*16384/75'),
          '1': dict(name='Intake Air Temperature (control, word)', units='C', expr='x*5/2048-40', to_byte='(x+40)*2048/5')})

add(0x163A84, 'Initial Mass Airflow vs Coolant (initialisation)', 'Airflow Model (MAF)',
    '0x4E6D4 (initialisation path 0x152744/0x153C6C): Mass Airflow FFFEEEE4 (OBD PID10, g/s = x*75/16384) = helper 0x16BC08(0x163A84, '
    'Coolant FFFEEEDE) / 75 (signed division), also copied to EEEC/EEEE/EEF0/EEF4, so the table is g/s = x/16384 (truncated by the '
    'integer division).', ('g/s', 'x/16384', 'x*16384', '0.000'),
    axes={'0': dict(name='Coolant Temperature (filtered, word)', units='C', expr='x*5/2048-40', to_byte='(x+40)*2048/5')})

# ---- radiator fan (0xAFDC0 block; every sub-function is called with enable p1 = 0 in this ROM -> inactive)
_FAN = ('%', 'x*100/65536', 'x*65536/100', '0.0')
_fan = ('Unit chain: 0xB0234 writes Radiator Fan Control FFFF0D44 (SSM 0x2F P92 %, converter 0xD0E40 byte = x*25>>14; mode constants '
        '0xFFFF/0x8000/0xB333 = 100/50/70 %) from FFFF0D48 (mode 1) or max(0D3C, 0D48) (mode 7), so 0D48/0D3C are fan duty % = x*100/65536. '
        'In this ROM 0xAFDC0 calls 0xB0EF8, 0xAF97C and 0xB0234 with p1 = 0 (reset path only), so these tables are inactive. ')
for d, cond in ((0x2E0CC, 'default'), (0x2E0D8, 'FFFF04E8.5 set'), (0x2E0E4, 'FFFEF082 >= 0x94')):
    add(d, f'Radiator Fan Duty vs Coolant ({cond}, inactive) [-> 0D48]', 'Radiator Fan', _fan +
        f'0xB0EF8 (p2 Coolant FFFEEEDE): 0D48 = T(coolant) between the on/off coolant thresholds (0 below, 0xFFFF above); this table is used when {cond}.',
        _FAN)
add(0x2E0C0, 'Radiator Fan Duty vs FFFEF067 (inactive) [-> 0D3C]', 'Radiator Fan', _fan +
    '0xAF97C (p2 FFFEF067): 0D3C = 0 below 0x44 (0x36 with hysteresis), 0xFFFF at/above 0xFC (0xB8), else T(F067). Input FFFEF067 unresolved.', _FAN)

# ---- per-cylinder injection time offsets (task 0xAEBE8)
_ito = ('0x917EC (from 0x8A670, p6 = &FFFF1644): u = 0x8000 + f*(1644 - 0x8000)/256 with f = 256 - FFFF041F (0xFF when 041F = 0); base pulse '
        'FFFF1544 (0.8 us units, -> injection time FFFF1564, SSM 0x20) = 1.25*(3.2*(u - 32768) + ...), i.e. 3.2 us per count of (u - 32768). '
        '0xAE80C: 1644[i] = 1654[i] + 164C[i] - 0x8000 (offset-32768 sum), so 1654 and 164C are injection time offsets: us = (x-32768)*3.2 '
        '(times f/256). ')
_ITO = ('us', '(x-32768)*3.2', 'x/3.2+32768', '0.0')
add(0x2E01C, 'Injection Time Offset Lower Limit vs Coolant [0xAE9B4 -> 164C]', INJ, _ito +
    '0xAE9B4 (from 0xAEBE8, p5 Coolant FFFEEEDE): 164C[i] = min(max(0x8000 + g*(163C[i] - 0x8000)/2048, T_02E01C), T_02E028).', _ITO,
    axes={'0': dict(name='Coolant Temperature (filtered, word)', units='C', expr='x*5/2048-40', to_byte='(x+40)*2048/5')})
add(0x2E028, 'Injection Time Offset Upper Limit vs Coolant [0xAE9B4 -> 164C]', INJ, _ito +
    '0xAE9B4: see T_02E01C (upper clamp).', _ITO,
    axes={'0': dict(name='Coolant Temperature (filtered, word)', units='C', expr='x*5/2048-40', to_byte='(x+40)*2048/5')})
add(0x2E04C, 'Injection Time Offset Lower Limit vs Coolant [0xAEFF4 -> 1654]', INJ, _ito +
    '0xAEFF4 (from 0xAEBE8, p6 Coolant FFFF29A5, C = x-50): 1654[i] = max(T_02E04C(coolant), history[i] + step).', _ITO,
    axes={'0': dict(name='Coolant Temperature', units='C', expr='x-50', to_byte='x+50')})

_d2e = ('0x92410/0x92700/0x929F0/0x92CE0 (from 0x89A78, p12 = FFFF0D2E): with mode FFFF0541 == 4, injection time FFFF1568.. = 1.25*(0D2E*FFFF0B44*0.0125 '
        '+ latency FFFF0BC8*0.8) in 0.8 us units, i.e. us = 0D2E*3.2*(0B44/256) + 0BC8*0.8 (0B44/256 = Injector Pulse Multiplier), so 0D2E is a base '
        'pulse in 3.2 us units. 0xAE058 (from 0xAEBE8; active when FFFF66B0 == 3, rpm FFFF299C < 0x50 (2000 rpm) and 0541 == 4): 0D2E = '
        'min(0xFFFF, min(0xFFFF, min(0xFFFF, b*T_coolant >> 6)*T_rpm >> 7)*T_29C2 >> 7) with b from FFFF2986 (crank period = 2B6C, see PROGRESS.md) and '
        'FFFF09CA. Each factor is applied with its own shift and saturated in the 0D2E container, and the neutral values present in the '
        'data (T_02DF8C all 128, coolant tables max 64) are 1.0, so the tables are multipliers. ')
add(0x2DF98, 'Start Injection Multiplier vs Coolant (FFFEEF76.6 clear) [0xAE058 -> 0D2E]', INJ, _d2e, ('multiplier', 'x/64', 'x*64', '0.000'),
    axes={'0': dict(name='Coolant Temperature (filtered, word)', units='C', expr='x*5/2048-40', to_byte='(x+40)*2048/5')})
add(0x2DFA4, 'Start Injection Multiplier vs Coolant (FFFEEF76.6 set) [0xAE058 -> 0D2E]', INJ, _d2e, ('multiplier', 'x/64', 'x*64', '0.000'),
    axes={'0': dict(name='Coolant Temperature (filtered, word)', units='C', expr='x*5/2048-40', to_byte='(x+40)*2048/5')})
add(0x2DF80, 'Start Injection Multiplier vs RPM [0xAE058 -> 0D2E]', INJ, _d2e, ('multiplier', 'x/128', 'x*128', '0.000'),
    axes={'0': dict(name='Engine Speed (byte, 25 rpm)', units='rpm', expr='x*25', to_byte='x/25')})
add(0x2DF8C, 'Start Injection Multiplier vs FFFF29C2 [0xAE058 -> 0D2E]', INJ, _d2e + 'Input FFFF29C2 unresolved.', ('multiplier', 'x/128', 'x*128', '0.000'))

# ---- staged timer 0x7FB7C (10 ms task)
_fb7 = ('0x7FB7C (from 0x82FA0, call 0x83AF2; p8 Vehicle Speed FFFEF0DA, p9 rpm FFFF2ADA, p10 gear FFFEF51A clamped 1..6 (7 when p11 > 0x1E), '
        'p13 table-set select). Band b = 1..6 from p9 thresholds 0x2800/0x3C00/0x5000/0x6400/0x7800. Thresholds t1..t4 = T_set_gear(b, 1..4) '
        '(or T_02C20C(vehicle speed) when p7 set); counter FEBAA0 (out FFFF0A..) is 0 or previous + 1 per execution and the stage '
        '(0..4) = number of thresholds reached (direct comparisons). 0x7FB7C is reached only from the 10 ms task 0x152A40 (OS alarm 4 -> '
        'task 8, cycle 10 x 1 ms tick; timers.py), so the tables are times: s = x*0.01. ')
_SEC = ('s', 'x*0.01', 'x/0.01', '0.00')
_BAX = {'0': dict(name='Engine Speed Band (1-6)', units='band', expr='x', to_byte='x'), '1': dict(name='Stage', units='stage', expr='x', to_byte='x')}
for d, g in ((0x2C218, '1'), (0x2C22C, '2'), (0x2C290, '3'), (0x2C2A4, '4'), (0x2C2B8, '5'), (0x2C2CC, '6'), (0x2C2E0, '7')):
    add(d, f'Staged Timer Thresholds, set A (gear {g}) [0x7FB7C]', 'Timers', _fb7 + 'Set A = p13 set.', _SEC, axes=_BAX)
for d, g in ((0x2C2F4, '1'), (0x2C308, '2'), (0x2C31C, '3'), (0x2C240, '4'), (0x2C254, '5'), (0x2C268, '6'), (0x2C27C, '7')):
    add(d, f'Staged Timer Thresholds, set B (gear {g}) [0x7FB7C]', 'Timers', _fb7 + 'Set B = p13 clear (only stages 1-3 and 4 used).', _SEC, axes=_BAX)
add(0x2C20C, 'Staged Timer Threshold vs Vehicle Speed [0x7FB7C]', 'Timers', _fb7 + 'T_02C20C(vehicle speed) replaces all thresholds when p7 is set.', _SEC)

_ab08 = ('0xAAB08 (from idle 0xA8230, call 0xA9172; p5 FFFF0423, p6 Coolant FFFEEEDE): counter FEC48E = 0, or +1 on every call while FEC486 is set; '
         'it is compared directly with T_02DD00 (u <= counter: multiply by T_02DD50) and T_02DD3C (T_02DD3C <= counter < T_02DD00: ramp phase). '
         '0xA8230 runs from the 10 ms task 0x152A40 via 0x49E70 (OS alarm 4 -> task 8, cycle 10 x 1 ms tick; see timers.py); in application '
         'mode 2 it is also run every 20 ms via 0x153B4E. s = x*0.01 for the engine-running mode. ')
_AX423 = {'1': dict(name='Coolant Temperature (filtered, word)', units='C', expr='x*5/2048-40', to_byte='(x+40)*2048/5')}
add(0x2DD00, 'Idle Phase End Time (FFFF0423 x Coolant) [0xAAB08]', 'Idle Speed Control', _ab08, ('s', 'x*0.01', 'x/0.01', '0.00'), axes=_AX423)
add(0x2DD3C, 'Idle Phase Ramp Start Time (FFFF0423 x Coolant) [0xAAB08]', 'Idle Speed Control', _ab08, ('s', 'x*0.01', 'x/0.01', '0.00'), axes=_AX423)

_a79 = ('0xA7970 (from idle 0xA8230, call 0xAA220): x = p3 + p8 (+0x1DB in one state); y = p7 + (x - p7)*T/65536 (saturating 16-bit '
        'arithmetic, (d*T)>>16), i.e. a first-order filter step with gain T (65536 = 1.0, fraction per execution); T = T_02DC84 (p2 set, p6 '
        'clear), T_02DC90 (p2 and p6 set) or T_02DC9C (p2 clear). Input p9 unresolved. ')
for d, nm in ((0x2DC84, 'p2 set, p6 clear'), (0x2DC90, 'p2 and p6 set'), (0x2DC9C, 'p2 clear')):
    add(d, f'Idle Filter Gain ({nm}) [0xA7970]', 'Idle Speed Control', _a79, ('fraction/step', 'x/65536', 'x*65536', '0.0000'))

_TOS = ('OS alarm 4 -> task 8 (0x152A40), cycle 10 x 1 ms tick (see timers.py)')
add(0x2C1D0, 'Time Threshold vs Coolant [0x7F96C]', 'Timers',
    '0x7F96C (from 0x7F8B8 <- 0x49E70 <- 10 ms task 0x152A40; p3 Coolant FFFEEEDE): while active, counter FEBA8A starts at 0 and +1 per '
    'execution; flag FEBA88 = T(coolant) <= counter (direct comparison). ' + _TOS + ': s = x*0.01.', ('s', 'x*0.01', 'x/0.01', '0.00'),
    axes={'0': dict(name='Coolant Temperature (filtered, word)', units='C', expr='x*5/2048-40', to_byte='(x+40)*2048/5')})
for _d, _c, _st in ((0x2DB38, 'FEC37D', 2), (0x2DB20, 'FEC37F', 2), (0x2DB14, 'FEC37E', 1)):
    add(_d, f'Time Threshold (state {_st}) [0xA562C]', 'Idle Speed Control',
        f'0xA562C (from idle 0xA8230; p2 Coolant FFFEEEDE): in state {_st} the threshold is T(coolant) and is compared directly with counter '
        f'{_c} (0 at entry, +1 per execution while the mode p1 matches). 0xA8230 runs from 0x49E70 in the 10 ms task (' + _TOS +
        '); application mode 2 also runs it every 20 ms via 0x153B4E. s = x*0.01.', ('s', 'x*0.01', 'x/0.01', '0.00'),
        axes={'0': dict(name='Coolant Temperature (filtered, word)', units='C', expr='x*5/2048-40', to_byte='(x+40)*2048/5')})

# ---- injection angle unit corrected (session 4): 0.5 deg CA, not 1 deg
_INJ_FIX = ('UNIT CORRECTED: crank position table 0x161FC0 gives crank angles 20,10,0,170..30 deg (10 deg teeth, missing-tooth gap) per '
            'cylinder segment (FFFF1A59 = cylinder), so 0x143640 2B90 = t(10)-t(70)+t(70)-t(10) is counter ticks per 180 deg CA (counter '
            '@(20,0xFFFFF420)); 2B6C = 2B90/32. rpm (OBD PID 0C, x*25/128) = 48e6/2B6C*25/128 = 3e8/2B90 => counter = 10 MHz and FFFF2986 '
            '= 2B6C = time per 180 deg CA in 3.2 us units. Check: 0x44EAC compares Injection Time FFFF1564 (0.8 us units, SSM 0x20) with '
            '2986<<3 = 4*2986*2 in 0.8 us = 360 deg CA (consistent). The angle term (angle diff)*(2986/90) is then time in 0.8 us units per '
            '0.5 deg CA, so the injection angles are 0.5 deg CA units: deg = x/2 (720 units = 360 deg; clamp 1080..1439 = 540..719.5 deg). ')
CA2 = ('deg CA', 'x/2', 'x*2', '0.0')
for _d in (0x2D238, 0x2D210, 0x2D1D4, 0x2D1C0, 0x2D1E8, 0x2D1AC, 0x2D198, 0x2D260, 0x2D24C):
    S[_d]['evidence'] = _INJ_FIX + 'Previous evidence (unit was 1 deg): ' + S[_d]['evidence']
    S[_d]['data'] = dict(units='deg CA', expr='x/2', to_byte='x*2', format='0.0')

_esf2 = ('0xE541C (from 0xE4728; p2 = FFFF2B0C, p3 = FFFF2B0E, p4 IAT FFFEEEE2, p5 Gear FFFF03AC). FFFF2B00.. are engine speeds over 170 deg CA '
         'segments (0x4DFF2: 272e6*16/3/2F3C, 2F3C = 10 MHz counter ticks across the 17-tooth window of 0x15A822 -> rpm*128/25, same unit as '
         'FFFF2994); 2B0C/2B0E are second differences of those speeds (0x4E098/0x4E0C6). Flag FED314 = T_gear(IAT) <= |2B0C| (calibration '
         '0x17F4A == 1, active in this ROM) or |2B0E| (0x17F4A == 2, inactive). So the tables are rpm deltas: rpm = x*25/128. ')
for d, g in ((0x2F1D8, '1'), (0x2F1E4, '2'), (0x2F1F0, '3'), (0x2F1FC, '4'), (0x2F208, '5-6')):
    add(d, f'Engine Speed Fluctuation Threshold vs IAT (gear {g})', 'Misfire / Roughness Detection', _esf2, ('rpm', 'x*25/128', 'x*128/25', '0.0'))
for d, g in ((0x2F214, '1'), (0x2F220, '2'), (0x2F22C, '3'), (0x2F238, '4'), (0x2F244, '5-6')):
    add(d, f'Engine Speed Fluctuation Threshold vs IAT (gear {g}, inactive: 0x17F4A=1)', 'Misfire / Roughness Detection', _esf2, ('rpm', 'x*25/128', 'x*128/25', '0.0'))

add(0x2E3EC, 'Open Loop Enrichment Adder (RPM x Load) [0xB6044 -> 0DD0]', FE,
    '0xB6044 (from 0xB42AC; p1 rpm FFFF2996, p2 load FFFF03A0, p3 FFFF0B9A): FFFF0DD0 = T + 0B9A (saturating add) with 0B9A the open-loop '
    'enrichment (phi-1)*32768 (0xB5B38 target AFR uses 14.5*0B9A/(32768+0B9A)), so T is an additive enrichment in the same unit: '
    '% = x*100/32768.', ('%', 'x*100/32768', 'x*32768/100', '0.00'))

_afc = ('A/F Correction #1 chain (writers found with scripts/EmuFindWriter.java, call arguments with EmuCallArgs.java): 0xB34BC (call 0xB4FC4) '
        'writes FFFF0D92 = A/F Correction #1 (SSM 0x09, % = x/327.68 - 100) = 0DA4 + uVar (uVar = T_02E1F8 / T_02E204 (coolant FFFEEEDE; '
        'FFFEE710.5 selects 1F8) only when mode FFFF04FF >= 10, else 0). 0xB538C: 0DA4 = min(max(0DAE, 0D9A), 0xACCD (+35 %)); 0xB5A24 writes '
        '0DAE = T_02E30C(coolant) or 0x3333 (-60 %) when FFFEE710.5 set, vehicle speed > 20 and FFFFAB40.5 clear. ')
add(0x2E30C, 'A/F Correction #1 Lower Limit (Coolant)', 'Fueling - Closed Loop', _afc + 'T_02E30C is the lower limit.',
    ('%', 'x/327.68-100', '(x+100)*327.68', '0.0'),
    axes={'0': dict(name='Coolant Temperature (filtered, word)', units='C', expr='x*5/2048-40', to_byte='(x+40)*2048/5')})
for _d, _c in ((0x2E1F8, 'FFFEE710.5 set'), (0x2E204, 'FFFEE710.5 clear')):
    add(_d, f'A/F Correction #1 Offset (Coolant, {_c})', 'Fueling - Closed Loop', _afc + 'This table is the additive offset (mode 10).',
        ('%', 'x*100/32768', 'x*32768/100', '0.00'),
        axes={'0': dict(name='Coolant Temperature (filtered, word)', units='C', expr='x*5/2048-40', to_byte='(x+40)*2048/5')})

_95da = ('0x95DA0 (from 0x940E8, called unconditionally by 0x153568 = task 19, 80 ms: started every 2nd run of the 40 ms task 10 through prescaler '
         '0x1511FE, and independently 80 ms from the OBD PID 0x31 distance integration). Counters: FEBEF2 = 0 then +1 per execution (saturating) '
         'while enabled; FEBEF0 = +1 per execution while FFFF043E != 0. ')
add(0x2D458, 'Time Threshold (FFFF299C rpm/25) [0x95DA0]', 'Timers', _95da + 'T_02D458 is compared directly with FEBEF2: s = x*0.08.',
    ('s', 'x*0.08', 'x/0.08', '0.00'), axes={'0': dict(name='Engine Speed (byte, 25 rpm)', units='rpm', expr='x*25', to_byte='x/25')})
for _d, _c in ((0x2D464, 'FFFF0435.3 clear'), (0x2D47C, 'FFFF0435.3 set, FFFF389A < 0x8400'), (0x2D470, 'FFFF0435.3 set, FFFF389A >= 0x8400')):
    add(_d, f'Time Threshold ({_c}) [0x95DA0]', 'Timers', _95da + 'This table is compared directly with FEBEF0: s = x*0.08.',
        ('s', 'x*0.08', 'x/0.08', '0.00'), axes={'0': dict(name='Engine Speed (byte, 25 rpm)', units='rpm', expr='x*25', to_byte='x/25')})

for _d, _fn, _c in ((0x2E424, '0xB692C', 'FEC792'), (0x2FD70, '0x11C49C', 'FEE074')):
    add(_d, f'Time Threshold [{_fn}]', 'Timers',
        f'{_fn} (reached only from the 20 ms task 0x15307C; OS alarm 6 -> task 9, cycle 20 x 1 ms tick): counter {_c} = 0 while the '
        'enabling condition is false, else +1 per execution (saturating); the table output is compared directly with that counter: s = x*0.02.',
        ('s', 'x*0.02', 'x/0.02', '0.00'))


# 0x123FE0 (called from 0x12560C, 40 ms): param_1 = FFFF1452, a torque-type copy of Torque 0A5E (writers: 0x123D4C init 16000,
# 0x125420 via copy helper 0x124E24).  r = 1452 - T + 16000 is the torque-type difference form (offset removed by the subtraction and
# re-added), so T is in the torque type; r is then compared with/limited by the other tables, which therefore share the unit.
# Output FFFF1436.  Inputs: gear FFFF03AC, engine speed FFFF2994; set chosen by vehicle speed byte FFFF65A1 < 4 and FFFF064A.7.
_C123 = 'Driver Demand / Torque Request'
_E123 = ('0x123FE0 (call from 0x12560C): r1 = FFFF1452 - T_A + 16000 (FFFF1452 = copy of Torque 0A5E, torque type); if r1 < T_L: '
         'r2 = FFFF1452 - T_B + 16000, out = min(r2, T_L); else out = min(r1, T_U); FFFF1436 = out when FFFF144C < T_U and the four '
         'inhibit flags are clear, else FFFF144C.  The subtraction re-adds 16000, so T_A/T_B are torque-type values and T_L/T_U are '
         'compared with torque-type results.')
for _sel, _a, _l, _u, _b in (('set 1 (vehicle speed byte < 4)', 0x30164, 0x300B0, 0x300C4, 0x30150),
                             ('set 2 (flag clear)', 0x300EC, 0x30100, 0x30114, 0x300D8),
                             ('set 3 (flag set)', 0x3013C, 0x30178, 0x3018C, 0x30128)):
    for _d, _r in ((_a, 'Reduction A'), (_b, 'Reduction B'), (_l, 'Switch Threshold / Lower Limit'), (_u, 'Upper Limit')):
        S.pop(_d, None); AUTO.discard(_d)
        add(_d, f'Torque Limit 1436 {_r}, {_sel} (Gear x RPM)', _C123, _E123 + ' Selection: param_11 = vehicle speed byte FFFF65A1 < 4 -> set 1; '
            'else FFFF064A.7 (or FFFF0958.6 when FFFF0957.2 clear) chooses set 2/3.' + TQEV, RAWTQ)


# 0xCEF4C (only caller 0xCF4B4; every reaching root is the 10 ms task 0x152A40): cVar13 = FFFECD3A - 1 when FFFECD3A != 0 (else 0);
# when FFFECD3A == 0 (and the change/inhibit conditions hold) cVar13 = T_02EC68 / T_02EC7C (FFFEEF76.6 clear/set); FFFECD3A = cVar13.
# A countdown of one per execution -> duration = T * 10 ms.  Axes: engine speed FFFF2994, filtered MAP FFFF09B8 (param_6).
for _d, _sel in ((0x2EC68, 'FFFEEF76.6 = 0'), (0x2EC7C, 'FFFEEF76.6 = 1')):
    S.pop(_d, None); AUTO.discard(_d)
    add(_d, f'MAP Transient Hold Time [0xCEF4C] ({_sel})', 'Timers',
        '0xCEF4C: FFFECD3A is reloaded with this table when it has counted down to 0 and the transient condition is active, '
        'otherwise decremented by 1 per execution (cVar13 = FFFECD3A - 1; FFFECD3A = cVar13); while it is non-zero the output '
        'FFFF05B4 takes the hold value T_02EC90/T_02ECA4.  ' + _PEREV['00152a40'] + ' (0xCEF4C reached only from it, via 0xCF4B4).',
        ('s', 'x*0.01', 'x/0.01', '0.00'))


# 0xC3654 (only caller 0xC49E0; every reaching root is the 10 ms task 0x152A40).  param_2 = FFFEF14A = clamp16(Accelerator Pedal
# Angle FFFEEEF8 - previous sample FFFEF14E) (0x68B96 / 0x6825A), param_3 = pedal angle (axis), param_1 = FFFF056D.0, output FFFF0EB8.
# 0xC3670..0xC367C: r6 = ((d << 16) - d) >> 16 (= d*65535/65536, signed) compared (cmp/ge) with T_02E930; while r6 >= T the counter
# FFFECA60 is reloaded with T_02E93C, otherwise it is decremented by 1 per execution.
_EC36 = ('0xC3654: d = FFFEF14A = clamp16(Accelerator Pedal Angle FFFEEEF8 - previous sample FFFEF14E) (0x68B96), pedal % = x*100/65280; '
         'if d*65535/65536 >= T_02E930 then FFFECA60 = T_02E93C else FFFECA60 = max(FFFECA60 - 1, 0); FFFF0EB8 = FFFECA60 '
         '(0 when FFFF056D.0 clear).  ')
for _d in (0x2E930, 0x2E93C):
    S.pop(_d, None); AUTO.discard(_d)
add(0x2E930, 'Accelerator Pedal Rise Threshold (per sample) [0xC3654]', 'Driver Demand / Torque Request',
    _EC36 + 'T is compared with the pedal-angle change d*65535/65536, so pedal-change % = x*65536/65535*100/65280.',
    ('%', 'x*6553600/(65535*65280)', 'x*65535*65280/6553600', '0.00'))
add(0x2E93C, 'Accelerator Pedal Rise Hold Time [0xC3654]', 'Timers',
    _EC36 + 'Countdown of one per execution; ' + _PEREV['00152a40'] + ' (0xC3654 reached only from it, via 0xC49E0).',
    ('s', 'x*0.01', 'x/0.01', '0.00'))


# 0xE25A8 / 0xE2674 (only caller 0xE0CE8; every reaching root is the 20 ms task 0x15307C).  On-counter p1 (FFFED250 / FFFED25A):
# +1 per execution while the flag is set (saturating at 0xFFFF), held after release; off-counter (FFFED252 / FFFED258): reset to 0
# while the flag is set, +1 per execution after.  The output flag (FFFED256 / FFFED25E) sets once T(on-time) <= off-time.
for _d, _f, _fl, _on, _off in ((0x2F0EC, '0xE25A8', 'FFFF03D8.1', 'FFFED250', 'FFFED252'), (0x2F0F8, '0xE2674', 'FFFEF152.5', 'FFFED25A', 'FFFED258')):
    S.pop(_d, None); AUTO.discard(_d)
    add(_d, f'Flag {_fl} Release Delay vs Set Duration [{_f}]', 'Timers',
        f'{_f}: off-time counter {_off} (reset while {_fl} is set, +1 per execution after release) is compared with T(on-time counter '
        f'{_on}, +1 per execution while {_fl} is set); the output flag sets when T <= off-time.  Both counters count executions of '
        + _PEREV['0015307c'] + f' ({_f} reached only from it, via 0xE0CE8).',
        ('s', 'x*0.02', 'x/0.02', '0.00'),
        axes={'0': dict(name=f'{_fl} Set Duration ({_on})', units='s', expr='x*0.02', to_byte='x/0.02')})


# 0x8BF1C (only caller 0x888C0; every reaching root is the 10 ms task 0x152A40).  Byte counters written only here:
# FFFEBC7F = 0 while state FFFEBC75 is clear, else +1 per execution (saturating 0xFF); FFFEBC82 = 0 unless (FFFEBC75 set and
# FFFEBC7F >= T_02CD04), else +1 per execution; FFFEBC78 / FFFEBC83 are the same pair for state FFFEBC77 with T_02CD10 / T_02CD64.
_E8BF = ' Counters are cleared or incremented by 1 per execution only in 0x8BF1C; ' + _PEREV['00152a40'] + ' (0x8BF1C reached only from it, via 0x888C0).'
for _d, _n, _e in ((0x2CD04, 'State FFFEBC75 Delay [0x8BF1C]', '0x8BF1C: FFFEBC7F (time in state FFFEBC75) < T(Air Charge Rate 0F56) keeps the second-stage counter FFFEBC82 cleared.'),
                   (0x2CD10, 'State FFFEBC77 Delay [0x8BF1C]', '0x8BF1C: FFFEBC78 (time in state FFFEBC77) < T(Air Charge Rate 0F56) keeps the second-stage counter FFFEBC83 cleared.'),
                   (0x2CD58, 'State FFFEBC75 Active Window [0x8BF1C]', '0x8BF1C: after the delay T_02CD04, FFFEBC82 counts executions; while FFFEBC82 < T the correction term sStack_30 is applied.'),
                   (0x2CD64, 'State FFFEBC77 Active Window [0x8BF1C]', '0x8BF1C: after the delay T_02CD10, FFFEBC83 counts executions; while FFFEBC83 < T the correction term sStack_2c is applied.')):
    S.pop(_d, None); AUTO.discard(_d)
    add(_d, _n, 'Timers', _e + _E8BF, ('s', 'x*0.01', 'x/0.01', '0.00'))


# 0x493EC (every reaching root is the 40 ms task 0x153248): FFFEFA26 = sat16(FFFEFA26 + 1) while FFFF66B0 == 3, else 0 (only writer);
# FFFEFA1E = T_163A14(sampled coolant FFFF29A7) and the check runs when FFFEFA1E <= FFFEFA26.
S.pop(0x163A14, None); AUTO.discard(0x163A14)
add(0x163A14, 'Check Enable Delay after FFFF66B0 = 3 (vs Coolant) [0x493EC]', 'Timers',
    '0x493EC: FFFEFA1E = T(Coolant Temperature sampled FFFF29A7, C = x-50); the FFFEE6D0 window check (bounds T_163A20/T_163A2C vs FFFFAB41) '
    'runs only when FFFEFA1E <= FFFEFA26, where FFFEFA26 = sat16(FFFEFA26 + 1) per execution while FFFF66B0 == 3 and 0 otherwise (only '
    'writer).  ' + _PEREV['00153248'] + ' (0x493EC reached only from it).', ('s', 'x*0.04', 'x/0.04', '0.00'))


# 0xA5974 (only caller 0xA8230; roots: 10 ms task 0x152A40, and in application mode 2 task 55 -> 0x153B4E every 20 ms).
S.pop(0x148F0, None); AUTO.discard(0x148F0)
add(0x148F0, 'Idle Overspeed Duration Threshold (vs Coolant) [0xA5974]', 'Timers',
    '0xA5974: uVar3 = T(Coolant Temperature FFFEEEDE) compared with FFFEC388 (bVar1 = uVar3 <= FFFEC388); FFFEC388 = 0 when FFFF03D8.7 is '
    'clear or engine speed FFFF2ADA <= target idle speed FFFF0D06 + 0x133, else +1 per execution saturating at 0xFFFF (only writer).  '
    + _PEREV['00152a40'] + ' [application mode 2 runs 0xA8230 every 20 ms via 0x153B4E, doubling the time].', ('s', 'x*0.01', 'x/0.01', '0.00'))


# 0x13BD70 (only caller 0x13B89C, referenced only from the literal pool of 0x153B4E = application mode 2 task 55, alarm 27 cycle 20).
S.pop(0x168B98, None); AUTO.discard(0x168B98)
add(0x168B98, 'Delay after Run Counter 65A2 >= 350 (vs Coolant) [0x13BD70]', 'Timers',
    '0x13BD70: FFFEEF40 = T(FFFF29A6 coolant byte) (10 when battery FFFFAB41 < 0x8B or coolant FFFF29A5 outside 1..0x6D); FFFEEF3E = 0 '
    'while FFFF65A2 < 0x15E, else sat16(FFFEEF3E + 1) per execution (only non-zero writer); the flag sets when FFFEEF40 <= FFFEEF3E.  '
    '0x13BD70 runs only in application mode 2: task 55 (alarm 27, cycle 20 ticks of 1 ms) -> 0x151C8C -> 0x153B4E -> 0x13B89C = 20 ms ('
    + _OSEV + ').', ('s', 'x*0.02', 'x/0.02', '0.00'))


if __name__ == '__main__':
    json.dump({f'0x{k:X}': v for k, v in sorted(S.items())}, open(f'{ROOT}/evidence/semantics.json', 'w'), indent=1)
    print(len(S), 'entries')
