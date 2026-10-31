#!/usr/bin/env bash
# Reproduces the local toolchain in a fresh Linux environment.
# Creates .ghidra-dl/ghidra_12.1.3_PUBLIC (+ JDK 21) and .disasm-venv (capstone 5.0.7).
set -euo pipefail
cd "$(dirname "$0")"
mkdir -p .ghidra-dl
if [ ! -d .ghidra-dl/ghidra_12.1.3_PUBLIC ]; then
  url=$(curl -fsSL https://api.github.com/repos/NationalSecurityAgency/ghidra/releases/tags/Ghidra_12.1.3_build \
        | python3 -c 'import json,sys;print([a["browser_download_url"] for a in json.load(sys.stdin)["assets"] if a["name"].endswith(".zip")][0])')
  curl -fsSL "$url" -o .ghidra-dl/ghidra.zip
  (cd .ghidra-dl && unzip -q ghidra.zip && rm ghidra.zip)
fi
if ! command -v java >/dev/null || ! java -version 2>&1 | grep -q '"21'; then
  if [ ! -d .ghidra-dl/jdk21 ]; then
    arch=$(uname -m); [ "$arch" = x86_64 ] && arch=x64; [ "$arch" = aarch64 ] && arch=aarch64
    curl -fsSL "https://api.adoptium.net/v3/binary/latest/21/ga/linux/$arch/jdk/hotspot/normal/eclipse" -o .ghidra-dl/jdk21.tgz
    mkdir -p .ghidra-dl/jdk21 && tar -xzf .ghidra-dl/jdk21.tgz -C .ghidra-dl/jdk21 --strip-components=1 && rm .ghidra-dl/jdk21.tgz
  fi
  echo "export JAVA_HOME=$PWD/.ghidra-dl/jdk21; export PATH=\$JAVA_HOME/bin:\$PATH" > .ghidra-dl/env.sh
  echo "Run: source .ghidra-dl/env.sh"
fi
[ -d .disasm-venv ] || python3 -m venv .disasm-venv
.disasm-venv/bin/pip install -q 'capstone==5.0.7'
echo "Setup complete."
