// Emulate a function and report the instruction that first changes a target RAM word (seeded with a sentinel).
// args: <entry hex> <target hex> [max steps] [addr=hexvalue:bytes ...]  (seed RAM, e.g. ffff66b0=03:1)
import ghidra.app.script.GhidraScript;
import ghidra.app.emulator.EmulatorHelper;
import ghidra.program.model.address.Address;
import java.math.BigInteger;
public class EmuFindWriter extends GhidraScript {
  public void run() throws Exception {
    String[] a = getScriptArgs();
    Address entry = toAddr(Long.parseLong(a[0], 16)); Address tgt = toAddr(Long.parseLong(a[1], 16));
    int max = a.length > 2 ? Integer.parseInt(a[2]) : 3000000;
    EmulatorHelper emu = new EmulatorHelper(currentProgram);
    try {
      emu.writeRegister("r15", BigInteger.valueOf(0xFFFFB000L));
      emu.writeRegister("pc", BigInteger.valueOf(entry.getOffset()));
      emu.writeRegister("pr", BigInteger.valueOf(0x4L));
      for (int i = 3; i < a.length; i++) {
        String[] kv = a[i].split("[=:]");
        long v = Long.parseLong(kv[1], 16); int n = Integer.parseInt(kv[2]);
        byte[] b = new byte[n];
        for (int j = 0; j < n; j++) b[j] = (byte)(v >> (8 * (n - 1 - j)));
        emu.writeMemory(toAddr(Long.parseLong(kv[0], 16)), b);
      }
      byte[] seed = new byte[]{(byte)0xA5,(byte)0x5A};
      emu.writeMemory(tgt, seed);
      int steps = 0; int hits = 0;
      while (steps++ < max) {
        Address pc = emu.getExecutionAddress();
        if (pc.getOffset() == 0x4L) { println("returned after " + steps); break; }
        byte[] before = emu.readMemory(tgt, 2);
        if (!emu.step(monitor)) { println("step failed at " + pc + ": " + emu.getLastError()); break; }
        byte[] after = emu.readMemory(tgt, 2);
        if (before[0] != after[0] || before[1] != after[1]) {
          println("WRITE at " + pc + " value " + String.format("%02x%02x", after[0], after[1]) + " pr=" + emu.readRegister("pr").toString(16));
          emu.writeMemory(tgt, seed);
          if (++hits > 5) break;
        }
      }
    } finally { emu.dispose(); }
  }
}
