// Emulate a function and report the instruction that first changes a target RAM word (seeded with a sentinel).
// args: <entry hex> <target hex> [max steps]
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
