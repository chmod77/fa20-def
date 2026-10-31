"""Per-descriptor identifications.  Run to regenerate evidence/semantics.json.
Each entry: status 'identified' (name AND output scaling proven) or 'partial' (role proven, output
units not), name, category, data scaling {units, expr, to_byte, format}, axis overrides, evidence.
Evidence strings cite the decompiled function(s) in cdump/ and the anchor chain."""
import json, os
H = os.path.dirname(os.path.abspath(__file__)); ROOT = os.path.dirname(H)
S = {}


def add(desc, name, category, evidence, data=None, status='identified', description='', axes=None, static_values=None):
    assert desc not in S, hex(desc)
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
add(0x2D890, 'Ignition Timing Reduction (vs ratio FFFF0AA8)', IGN,
    '0x9B384: FFFF0488 = FFFF03D1 - T(FFFF0AA8) (half-degrees) when FFFF03C6 not in {11,12,25,26,27}; input is a ratio (32768 = 1.0); '
    'meaning of FFFF0AA8 unresolved.', ('deg', 'x/2', 'x*2', '0.0'),
    axes={'0': dict(name='Ratio FFFF0AA8', units='ratio', expr='x/32768', to_byte='x*32768')})

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
add(0x2CE90, 'Injector Flow Scaling (Fuel Rail Pressure)', INJ, _inj + '0x8DDA8: FFFF0B44 = T(FRP FFFEED18) multiplies fuel quantity FFFF1544 '
    '(time contribution = q*x*0.003125 us); unit of q not yet anchored.', ('raw (us per 320 q)', 'x', 'x', '0'), status='partial', axes=FRPAX)

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


if __name__ == '__main__':
    json.dump({f'0x{k:X}': v for k, v in sorted(S.items())}, open(f'{ROOT}/evidence/semantics.json', 'w'), indent=1)
    print(len(S), 'entries')
