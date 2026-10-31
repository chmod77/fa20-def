#!/usr/bin/env bash
# Rebuild semantics + definitions and validate both with RomRaider's parser (needs Xvfb for RomRaider's Settings).
set -euo pipefail
cd "$(dirname "$0")/.."
python3 scripts/semantics_db.py
python3 scripts/build_named_definition.py
cd ../../RomRaider
CP="RomRaider.jar:lib/*:i18n:../analysis/lf6a400j-independent/validation-classes"
for r in "LF6A401A:LF6A401A_T893ESJ92045C7207-20261024-072556.bin" "LF6A400J:LF6A400J_A501A14007-20241119-175005.bin"; do
  id=${r%%:*}; rom=${r#*:}
  xvfb-run -a java -Duser.home=$PWD/../analysis/lf6a400j-independent/validation-home -cp "$CP" VerifyNamedDefinition \
    ../analysis/lf6a400j-independent/RR_${id}_FA20DIT.xml ../roms/$rom 2>&1 | grep -E "PASS|Error|Exception|at " | head -5 | sed "s/^/$id: /"
done | tee ../analysis/lf6a400j-independent/evidence/named-validation.log
