# LF6A400J independent reconstruction

**Status: incomplete. This is a structurally validated, locked raw research definition, not a complete tuning definition. No calibration function names or physical unit conversions have been verified yet.**

The existing LF6A400J definition, map-name JSON, inferred axis scaling and earlier table classifications are not inputs to the generator. The ROM bytes, a fresh Ghidra import, firmware lookup code and RomRaider's XML/parser implementation are the evidence used here.

## Deliverables

- `RR_LF6A400J_INDEPENDENT_RESEARCH.xml`: 1,044 distinct raw table views, locked, with unidentified functions/inputs explicitly labelled.
- `evidence/calibrations.json`: 1,181 descriptor records, including aliases, dimensions, axis samples, storage, ROM data hashes and exact call sites.
- `evidence/table-catalog.csv`: a compact descriptor catalogue.
- `evidence/lookup-layouts.json` and `evidence/lookups/`: 82 lookup layout interpretations with fresh decompilation and assembly.
- `evidence/emulation-results.tsv`: 642 synthetic exact-node tests; all passed.
- `evidence/romraider-validation.log`: the installed RomRaider 1.1.0 parser loaded 1,044 tables; all 83,107 cells and axis entries matched independent byte decoding; no faulty tables; table locks preserved.
- `evidence/unresolved.json`: one statically identified lookup uses a RAM-resident descriptor and is not emitted as a flash table.
- `evidence/unclassified-rom-reads.csv`: 5,919 direct read locations/width combinations in the bounded calibration search window, outside recovered table/axis storage. These are investigation leads, **not 5,919 established calibrations**. They can include constants, headers, pointers and analysis false positives.
- `evidence/coverage.json`: machine-readable progress, including `complete: false` and zero verified semantic names/scalings.

## ROM identity

Input: `roms/LF6A400J_A501A14007-20241119-175005.bin`

- Length: 1,572,864 bytes (0x180000).
- SHA-256: `26fe97c8242409ec328aad7e6336b3cba735edcc861073c17384be82985e3548`.
- Literal `LF6A400J` at file offset `0x19620`; `2.0 TURBO` immediately follows.
- The workspace-root copy has the same hash.
- Ghidra language: `SuperH:BE:32:SH-2A`, binary loaded at address zero. Instruction decoding and successful lookup execution support this ISA interpretation. Exact MCU identity and flash checksum have not been established; the XML does not invent either.
- ECU ID in the filename, model year, market and transmission are not treated as binary-verified metadata.

## What was established

Firmware uses at least these two descriptor forms, with big-endian 32-bit pointers:

| Offset | One-input lookup | Two-input lookup |
|---|---|---|
| +0 | byte: input 1 count | byte: input 1 count |
| +4 | input 1 axis pointer | input 1 axis pointer |
| +8 | data pointer | byte: input 2 count |
| +12 | — | input 2 axis pointer |
| +16 | — | data pointer |

Padding bytes were used only for initial candidate discovery. A structure-shaped byte sequence alone is not promoted to a definition. The static call pass must establish that it is passed in `r4` to a recognised lookup routine. Descriptor dimensions and pointers are then interpreted according to that routine.

There are separate lookup implementations for axis/data widths, signed axis comparisons, and different lookup/interpolation boundary behaviours. These are not interchangeable. The generator derives element types from their decompilation, and synthetic table execution independently checks storage width and node addressing.

For two-input lookup `0x135BE8`, for example, the data address is effectively:

`data + (input1_index * input2_count + input2_index) * element_width`

Input 2 varies fastest. RomRaider's default table reader varies X fastest, so the generated XML uses descriptor input 2 as X and input 1 as Y. The emulator checks all grid nodes of a non-square synthetic table to detect transposition.

Aliases are retained in JSON and collapsed only where data address, dimensions, data type, axis addresses and axis types agree. This yields 1,044 distinct views from 1,181 descriptors.

## What the tests do and do not prove

Synthetic tests execute the original firmware lookup instructions in Ghidra's emulator with independent synthetic descriptors and non-square data arrays. They exercise all exact grid nodes using low/high-bit data patterns and signed/unsigned axis values. The 82nd routine uses a 32-bit weighted-average helper at `0x16C048`; its helper assembly is also saved.

Returned values are compared modulo the candidate data width. These tests establish node addressing and width, not physical units, calibration purpose, the mathematical behaviour between every pair of breakpoints, or all possible signed-output interpretations. C element signedness is recorded as a code-derived interpretation; it does not establish the engineering-unit conversion.

The RomRaider check uses a separate Java process and isolated settings directory. It checks the complete XML against actual ROM bytes, including X/Y order and every axis entry. No active RomRaider settings are changed. No ROM is edited, sent to an ECU or flashed.

Static code references are evidence of compiled uses, not proof that each branch executes on a particular vehicle. Ghidra's automatically discovered function coverage is also not proof of complete code discovery.

## Remaining work required for the requested complete definition

1. Trace each lookup's inputs and outputs through control code to establish its actual function. There are 433 distinct caller functions among the statically identified lookup calls.
2. Establish engineering units, scale, offset, signed interpretation, clamps and mode selection from arithmetic and diagnostic/output paths. Breakpoint shape alone is insufficient evidence.
3. Resolve scalar constants, switches, packed fields and instruction-encoded calibrations. The direct-read catalogue is only a bounded first inventory.
4. Trace the RAM descriptor at `0xFFFECD0C` and its construction/copy source; inspect indirect references and undiscovered code.
5. Verify checksum handling and define a defensible coverage denominator. No percentage of semantic completeness is currently justified.
6. Validate named interpretations with independent evidence where static code is ambiguous. OEM symbols/A2L/DAMOS or suitable bench observations can resolve ambiguities; their absence must not be replaced with guessed names.

**Do not describe this file as complete or replace unresolved names/scalings with plausible guesses.** The original request remains unfinished.

## Rebuilding from the saved evidence

From the workspace root:

```sh
python3 analysis/lf6a400j-independent/scripts/scan_rom.py
python3 analysis/lf6a400j-independent/scripts/trace_calls.py
python3 analysis/lf6a400j-independent/scripts/classify_lookups.py
python3 analysis/lf6a400j-independent/scripts/build_research_definition.py
python3 analysis/lf6a400j-independent/scripts/inventory_scalar_reads.py
```

The generator pins the ROM hash. Saved Ghidra evidence and successful emulator results are required; missing evidence is not silently replaced by assumptions. Re-running the decompiler or altering lookup interpretations requires re-running `make_fixtures.py` and `VerifyLookup.java` before building.

For a fresh independent Ghidra project, use the bundled `support/analyzeHeadless` with `-import`, `-processor SuperH:BE:32:SH-2A`, `-loader BinaryLoader`, and `-loader-baseAddr 0`. Run `ExportEvidence.java` with the output directory as its argument, then the Python scan/call pass. `DecompileTargets.java` takes an output directory and a text file of hexadecimal exact function-entry addresses. `VerifyLookup.java` takes the generated cases TSV and an output TSV. The initial import/export logs record the actual run. The exploratory function-boundary restoration log documents restoring two accidentally created tail entries to the original exported function bodies; those tail decompilations are excluded from calibration evidence.

## Primary implementation references

- ROM offsets and saved assembly/decompilation in `evidence/`.
- `romraider-src/src/main/java/com/romraider/xml/DOMRomUnmarshaller.java`: ROM identity matching and loading.
- `romraider-src/src/main/java/com/romraider/xml/TableScaleUnmarshaller.java`: sizes, storage, axis, description and lock attributes.
- `romraider-src/src/main/java/com/romraider/xml/RomAttributeParser.java`: hex addresses, signed storage and file sizes.
- `romraider-src/src/main/java/com/romraider/maps/Table3D.java`: cell order in `populateTable`.
- Bundled Ghidra `support/analyzeHeadlessREADME.md` and `Ghidra/Processors/SuperH/data/languages/superh.cspec`: headless invocation and calling convention.
