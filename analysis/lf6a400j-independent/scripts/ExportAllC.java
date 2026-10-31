import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.lang.*;
import ghidra.program.model.symbol.*;
import java.math.BigInteger;
import java.nio.file.*;
import java.util.*;

/* Export decompiled C for every function with GBR context applied.
   Args: outDir gbrTSV labelsTSV
   labelsTSV: hexaddr<TAB>label  (applied as primary user labels; used for descriptors / known RAM vars)
   Writes outDir/<entry>.c ; one file per function. */
public class ExportAllC extends GhidraScript {
  public void run() throws Exception {
    String[] a = getScriptArgs();
    Path out = Paths.get(a[0]); Files.createDirectories(out);
    Register gbr = currentProgram.getRegister("gbr");
    ProgramContext ctx = currentProgram.getProgramContext();
    int n = 0;
    for (String l : Files.readAllLines(Paths.get(a[1]))) {
      String[] f = l.split("\t"); if (f.length < 2) continue;
      Function fn = getFunctionAt(toAddr(Long.parseLong(f[0], 16)));
      if (fn == null) continue;
      BigInteger v = new BigInteger(f[1], 16);
      for (AddressRange r : fn.getBody()) ctx.setValue(gbr, r.getMinAddress(), r.getMaxAddress(), v);
      n++;
    }
    println("GBR applied to " + n + " functions");
    for (ghidra.program.model.mem.MemoryBlock b : currentProgram.getMemory().getBlocks()) {
      if (b.getStart().getOffset() < 0x180000L) { b.setWrite(false); println("read-only: " + b.getName()); }
    }
    SymbolTable st = currentProgram.getSymbolTable();
    if (a.length > 2) for (String l : Files.readAllLines(Paths.get(a[2]))) {
      String[] f = l.split("\t"); if (f.length < 2) continue;
      Address ad = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(Long.parseLong(f[0], 16));
      try { Symbol s = st.createLabel(ad, f[1], SourceType.USER_DEFINED); s.setPrimary(); } catch (Exception e) { println("label fail " + f[0] + " " + e); }
    }
    // Compiler runtime helpers with non-standard (r0/r1) argument registers, established from their
    // assembly (div0u/div0s+div1 sequences, shll/shlr jump tables).  ret is r0 in all cases.
    String[][] helpers = {
      {"16c540", "__udiv8_r1_by_r0", "r1", "r0"}, {"16c580", "__sdiv32_r1_by_r0", "r1", "r0"},
      {"16c588", "__udiv32_r1_by_r0", "r1", "r0"}, {"16c65c", "__sdiv16_r1_by_r0", "r1", "r0"},
      {"16c6a0", "__udiv16_r1_by_r0", "r1", "r0"}, {"16c6d8", "__sdiv32b_r1_by_r0", "r1", "r0"},
      {"16c6f0", "__udiv32b_r1_by_r0", "r1", "r0"}, {"16c7cc", "__udiv16b_r1_by_r0", "r1", "r0"},
      {"16c834", "__shl_r0_by_r1", "r0", "r1"}, {"16c8f4", "__shr_r0_by_r1", "r0", "r1"}};
    for (String[] h : helpers) {
      Function f = getFunctionAt(toAddr(Long.parseLong(h[0], 16)));
      if (f == null) { println("no helper fn " + h[0]); continue; }
      ghidra.program.model.data.DataType it = ghidra.program.model.data.IntegerDataType.dataType;
      Parameter p1 = new ParameterImpl("a", it, new VariableStorage(currentProgram, currentProgram.getRegister(h[2])), currentProgram);
      Parameter p2 = new ParameterImpl("b", it, new VariableStorage(currentProgram, currentProgram.getRegister(h[3])), currentProgram);
      ReturnParameterImpl ret = new ReturnParameterImpl(it, new VariableStorage(currentProgram, currentProgram.getRegister("r0")), currentProgram);
      f.updateFunction(null, ret, Function.FunctionUpdateType.CUSTOM_STORAGE, true, SourceType.USER_DEFINED, p1, p2);
      f.setName(h[1], SourceType.USER_DEFINED);
    }
    DecompInterface di = new DecompInterface();
    DecompileOptions o = new DecompileOptions(); di.setOptions(o);
    di.openProgram(currentProgram);
    int c = 0;
    Set<Long> only = null;
    if (a.length > 3) { only = new HashSet<>(); for (String l : Files.readAllLines(Paths.get(a[3]))) if (!l.isBlank()) only.add(Long.parseLong(l.trim(), 16)); }
    for (Function fn : currentProgram.getFunctionManager().getFunctions(true)) {
      if (only != null && !only.contains(fn.getEntryPoint().getOffset())) continue;
      if (monitor.isCancelled()) break;
      Path p = out.resolve(String.format("%08x.c", fn.getEntryPoint().getOffset()));
      DecompileResults r = di.decompileFunction(fn, 60, monitor);
      if (r != null && r.decompileCompleted()) { Files.writeString(p, r.getDecompiledFunction().getC()); c++; }
      else Files.writeString(p, "/* decompile failed: " + (r == null ? "null" : r.getErrorMessage()) + " */\n");
    }
    di.dispose();
    println("exported " + c);
  }
}
