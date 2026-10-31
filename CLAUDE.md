# FA20 DIT (SJG Forester) RomRaider definition: reverse-engineering workspace

## Goal
Name and scale every calibration table in the car's ROM, then produce a complete RomRaider definition for it. Every name and scaling must be proven from the binary.

- **Proof** means a value is traced through code to an anchor with known physical meaning: an OBD-II PID converter, an SSM converter, a physical constant, or an actuator or sensor path.
- **Never guess.** If something can't be proven, keep the table with an explicit "unresolved" label and record why.
- Keep every table locked in the XML until it is identified.

## Files
- **Car ROM:** `roms/LF6A401A_T893ESJ92045C7207-20261024-072556.bin` (SHA-256 269298c1…d531).
- **Reference ROM:** `roms/LF6A400J_*.bin`. Its code and all 1,181 table descriptors are identical to the car ROM. Only 5 table data blocks differ, plus the ID, the ECU ID at 0x2B891 and the last 2 bytes.
- **Main work dir:** `analysis/lf6a400j-independent/`. Read `PROGRESS.md` first, then `README.md`.
- **Current definitions:**
  - `RR_LF6A401A_INDEPENDENT_RESEARCH.xml` is for the car. It passes the RomRaider byte-level validation.
  - The `RR_LF6A400J_*` file is the same definition for the reference ROM.

## Setup (Linux cloud)
```sh
./setup.sh && source .ghidra-dl/env.sh   # Ghidra 12.1.3 + JDK 21 + capstone venv
```
- Ghidra headless: `.ghidra-dl/ghidra_12.1.3_PUBLIC/support/analyzeHeadless analysis/lf6a400j-independent/ghidra lf6a400j -process -noanalysis -scriptPath analysis/lf6a400j-independent/scripts -postScript <Script>.java <args>`. Run it from inside `analysis/lf6a400j-independent` and pass absolute paths in the args.
- Python tools that read the ROM take the ROM path as argv[1]. Run them with `.disasm-venv/bin/python`.
- RomRaider validation uses `RomRaider/RomRaider.jar` with `RomRaider/lib/*` and `RomRaider/i18n` on the classpath. The class is `validation-classes/VerifyRomRaider.class`, invoked as `VerifyRomRaider <xml> <rom>`, and must be run from inside `RomRaider/`.

## Rules
- Never flash or edit a ROM. This is analysis only.
- Commit progress often and update `PROGRESS.md` with coverage numbers and the next steps.
