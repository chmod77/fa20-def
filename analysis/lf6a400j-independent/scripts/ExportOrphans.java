import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.app.cmd.function.CreateFunctionCmd;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.lang.*;
import ghidra.program.model.symbol.*;
import java.math.BigInteger;
import java.nio.file.*;
import java.util.*;

/* Create functions for disassembled code that belongs to no function, then decompile only those.
   Entry heuristic: an instruction outside any function whose mnemonic is a register-save prologue
   (sts.l pr,@-r15 | mov.l rN,@-r15 | sts.l macl/mach,@-r15 | add #-N,r15) and whose previous instruction
   is the delay slot of an rts/rte/bra/jmp, or a nop/padding, or data.  Args: outDir labelsTSV
   (run read-only; created functions are not saved). Writes outDir/<entry>.c and outDir/orphan-entries.txt */
public class ExportOrphans extends GhidraScript {
  boolean isPrologue(Instruction i) {
    String m = i.getMnemonicString().replace("_", "");
    String s = i.toString().replace("_", "");
    if (m.equals("sts.l") && s.contains("@-r15")) return true;
    if (m.equals("mov.l") && s.endsWith(",@-r15")) return true;
    if (m.equals("add") && s.contains(",r15") && s.contains("-")) return true;
    return false;
  }
  boolean isEnd(Instruction p) {
    if (p == null) return true;
    Instruction q = getInstructionBefore(p.getAddress());
    String pm = p.getMnemonicString().replace("_", "");
    if (pm.equals("nop")) return true;
    if (q != null) {
      String qm = q.getMnemonicString().replace("_", "");
      if (qm.equals("rts") || qm.equals("rte") || qm.equals("bra") || qm.equals("jmp")) return true;
    }
    return pm.equals("rts") || pm.equals("rts/n") || pm.equals("rtv/n");
  }
  public void run() throws Exception {
    String[] a = getScriptArgs();
    Path out = Paths.get(a[0]); Files.createDirectories(out);
    SymbolTable st = currentProgram.getSymbolTable();
    if (a.length > 1) for (String l : Files.readAllLines(Paths.get(a[1]))) {
      String[] f = l.split("\t"); if (f.length < 2) continue;
      Address ad = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(Long.parseLong(f[0], 16));
      try { Symbol s = st.createLabel(ad, f[1], SourceType.USER_DEFINED); s.setPrimary(); } catch (Exception e) { }
    }
    for (ghidra.program.model.mem.MemoryBlock b : currentProgram.getMemory().getBlocks())
      if (b.getStart().getOffset() < 0x180000L) b.setWrite(false);
    FunctionManager fm = currentProgram.getFunctionManager();
    List<Address> entries = new ArrayList<>();
    for (Instruction i : currentProgram.getListing().getInstructions(true)) {
      if (fm.getFunctionContaining(i.getAddress()) != null) continue;
      if (!isPrologue(i)) continue;
      Instruction p = getInstructionBefore(i.getAddress());
      if (p != null && fm.getFunctionContaining(p.getAddress()) == null && !isEnd(p)) continue;
      entries.add(i.getAddress());
    }
    int made = 0;
    StringBuilder sb = new StringBuilder();
    for (Address e : entries) {
      if (fm.getFunctionContaining(e) != null) continue;
      CreateFunctionCmd cmd = new CreateFunctionCmd(e);
      if (cmd.applyTo(currentProgram, monitor)) { made++; sb.append(e).append("\n"); }
    }
    Files.writeString(out.resolve("orphan-entries.txt"), sb.toString());
    println("candidate entries " + entries.size() + ", functions created " + made);
    DecompInterface di = new DecompInterface(); di.setOptions(new DecompileOptions()); di.openProgram(currentProgram);
    int c = 0;
    for (String l : sb.toString().split("\n")) {
      if (l.isBlank()) continue;
      Function fn = fm.getFunctionAt(toAddr(Long.parseLong(l, 16)));
      if (fn == null) continue;
      DecompileResults r = di.decompileFunction(fn, 60, monitor);
      Path p = out.resolve(String.format("%08x.c", fn.getEntryPoint().getOffset()));
      if (r != null && r.decompileCompleted()) { Files.writeString(p, r.getDecompiledFunction().getC()); c++; }
    }
    di.dispose();
    println("orphan functions decompiled " + c);
  }
}
