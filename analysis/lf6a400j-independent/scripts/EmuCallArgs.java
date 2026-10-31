// Emulate from a function entry to a call instruction and print the stack-passed arguments.
// args: <entry hex> <stop hex> <param numbers comma separated>
import ghidra.app.script.GhidraScript;
import ghidra.app.emulator.EmulatorHelper;
import ghidra.program.model.address.Address;
import java.math.BigInteger;
public class EmuCallArgs extends GhidraScript {
  public void run() throws Exception {
    String[] a = getScriptArgs();
    Address entry = toAddr(Long.parseLong(a[0], 16)), stop = toAddr(Long.parseLong(a[1], 16));
    EmulatorHelper emu = new EmulatorHelper(currentProgram);
    try {
      long sp = 0xFFFFB000L;
      emu.writeRegister("r15", BigInteger.valueOf(sp));
      emu.writeRegister("pc", BigInteger.valueOf(entry.getOffset()));
      emu.writeRegister("pr", BigInteger.valueOf(0x00000004L));
      emu.setBreakpoint(stop);
      int steps = 0;
      while (steps++ < 2000000) {
        Address pc = emu.getExecutionAddress();
        if (pc.equals(stop)) break;
        if (!emu.step(monitor)) { println("step failed at " + pc + ": " + emu.getLastError()); break; }
      }
      long r15 = emu.readRegister("r15").longValue();
      println("stopped at " + emu.getExecutionAddress() + " after " + steps + " steps, r15=" + Long.toHexString(r15));
      for (String r : new String[]{"r4","r5","r6","r7","r9","r13","r14"}) println(r + "=" + emu.readRegister(r).toString(16));
      for (String k : a[2].split(",")) {
        int n = Integer.parseInt(k);
        byte[] b = emu.readMemory(toAddr(r15 + 4L * (n - 5)), 4);
        long v = ((b[0] & 0xffL) << 24) | ((b[1] & 0xffL) << 16) | ((b[2] & 0xffL) << 8) | (b[3] & 0xffL);
        println("param_" + n + " = " + Long.toHexString(v));
      }
    } finally { emu.dispose(); }
  }
}
