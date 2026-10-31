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
_PEREV = {'0015307c': 'task 0x15307C = 20 ms (OS alarm table 0x168FD0: alarm 4 -> task 8 cycle 10 ticks; tick 2 ms from alarm 6 -> task 9 '
          '0x153248 cycle 20 = proven 40 ms)', '00153248': 'task 0x153248 = 40 ms (OBD PID 0x1F/0x4E prescalers)',
          '00153568': 'task 0x153568 = 80 ms (OBD PID 0x31 distance integration)',
          '00153800': 'task 0x153800 = 80 ms (OS alarm 7 -> task 10 (body 0x15188E), cycle 40 ticks of 2 ms; tick from alarm 6 -> 0x153248 = 40 ms)',
          '001528a2': 'task 0x1528A2 = 4 ms (OS alarm 1 -> task 3, cycle 2 ticks of 2 ms)'}
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
               'x*100/65280': 'x*65280/100', 'x*625/2048000': 'x*2048000/625'}.get(_r['expr'])
        if _tb is None:
            continue
        add(_d, f"{_r['var_name']} Threshold (0x{int(_r['function'], 16):X})", 'Thresholds - ' + _r['var_name'],
            f"0x{int(_r['function'], 16):X}: lookup result compared with {_r['var_name']} (FFFF{_r['var'][4:]}): \"{_r['context']}\"; "
            'a comparison requires the same unit, so the output carries that scaling.',
            (_r['units'], _r['expr'], _tb, '0.00'))

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

_ev407 = ('0x8FDC0 (from 0x89E04, task 0x152A40): while active, FFFF0407 = T_02D0AC * (1 - n/(8*T_02D0B8)) with n +1 per execution '
          '(reset at activation); FFFF0407 is an additive fuel-quantity term in 0x910D8 (base*(0.5 + (... + 0407 + ...)/256)). ')
add(0x2D0AC, 'Fuel Enrichment (Decaying, 0407) Initial Amount', 'Fueling - Open Loop & Enrichment', _ev407 + 'Initial fraction of base fuel quantity.',
    ('%', 'x*100/256', 'x*256/100', '0.0'))
add(0x2D0B8, 'Fuel Enrichment (Decaying, 0407) Decay Length', 'Fueling - Open Loop & Enrichment', _ev407 +
    'Decay length in units of 8 executions of task 0x152A40 (event-driven; time base not proven).', ('executions', 'x*8', 'x/8', '0'))

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
add(0x2D01C, 'Fuel Enrichment (0B72) Hold Count (Coolant)', FE, _ev72 + 'Executions of task 0x152A40 (event-driven).', ('executions', 'x', 'x', '0'))

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


if __name__ == '__main__':
    json.dump({f'0x{k:X}': v for k, v in sorted(S.items())}, open(f'{ROOT}/evidence/semantics.json', 'w'), indent=1)
    print(len(S), 'entries')
