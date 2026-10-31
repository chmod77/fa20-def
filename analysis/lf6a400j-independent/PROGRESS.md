# Semantic identification progress (LF6A401A / LF6A400J)

Goal (user, 2026-10-31): name and scale every table and produce a complete FA20 DIT RomRaider definition, using only evidence from the binary.

Target ROM: `roms/LF6A401A_T893ESJ92045C7207-20261024-072556.bin` (the car). Code and layouts are byte-identical to LF6A400J; only 5 table data blocks differ.
Ghidra project: `ghidra/lf6a400j` (LF6A400J image; same code). Lookup-routine prototypes have been set by TraceLookupInputs.java.

## Method (all of it is reproducible)
1. **Anchors.** These are RAM variables whose units are proven by executing the ECU's own converter code.
   - OBD mode-01 formatter `0x10C574` writes the PID buffers `0xFFFF07B4..07DA` and `0xFFFF12D6..12F8`. The PID table pointer is at `0x70CA8` and the table at `0x7D450`; see `evidence/obd-pid-table.tsv`.
   - SSM formatter `0xD17F0` writes the shadow bytes `0xFFFF05BD..0641` and `0x0F64..0F6B`. The SSM A8 map is in `ssm-address-map.json`.
   - `scripts/trace_call_args.py` produces (converter, source RAM, destination) triples.
   - `scripts/ProbeConverters.java` emulates each converter over its full input domain. The results are in `evidence/obd-probe-results.tsv` and `evidence/ssm-probe-results.tsv`.
   - Exact constants were read from the assembly for the OBD converters (MAF, VSS, FRP, ECT, volts and others).
   - The merged dictionary is `scripts/variables.py`.
2. **Axis inputs.** `scripts/TraceLookupInputs.java` traces both axis inputs of every lookup call inter-procedurally, using `callgraph.tsv` and the per-function GBR values in `gbr-map.tsv`, back to RAM variables. Output: `evidence/lookup-input-origins.tsv`.
3. **Outputs.** Still to do: trace where each lookup result is stored and consumed, until it reaches an anchored quantity or an actuator.

## Status
- Tables with all axes resolved to proven variables: 88 / 1181 descriptors (2026-10-31).
- Axis inputs named: 223 / 1580.
- Inputs not yet resolved: 266 pointer loads with struct-pointer parameters, 202 inputs from functions called only through function-pointer tables, and 161 constants.
- Example done: D02C530/D02C544 (with siblings D02C4CC..D02C580 and D030218/D03022C) are indexed by RPM (`0xFFFF2994`) and accelerator pedal (`0xFFFEEEF8`). D030218/D03022C use pedal variable `0xFFFEF52E` (not yet identified). The output is 16000..44000 and goes through min() with a gear-indexed ceiling at 64000. The unit is unproven; the hypothesis is (x-16000)/80 N·m.

## Next
- Unnamed high-frequency variables: `FFFEEEDE`, `FFFF03A0` (byte, 0..110), `FFFF299C` (byte), `FFFF2996` (byte), `FFFEEEE2`, `FFFF09B4`, `FFFF03AC` (gear 1..5?), `FFFEE290`, `FFFF0BFE`, `FFFF0554`, `FFFEF52E`. Trace their writers.
- Output tracing.
