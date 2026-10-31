import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import java.nio.file.*;
import java.io.*;
public class ExportEvidence extends GhidraScript {
 public void run() throws Exception {
  Path out=Paths.get(getScriptArgs()[0]); Files.createDirectories(out);
  try (PrintWriter w=new PrintWriter(Files.newBufferedWriter(out.resolve("instructions.tsv")))) {
   w.println("address\tfunction\tinstruction\treferences");
   for(Instruction ins:currentProgram.getListing().getInstructions(true)) {
    Function f=getFunctionContaining(ins.getAddress());StringBuilder refs=new StringBuilder();
    for(Reference r:ins.getReferencesFrom()) refs.append(r.getToAddress()).append(":").append(r.getReferenceType()).append(";");
    w.println(ins.getAddress()+"\t"+(f==null?"":f.getEntryPoint())+"\t"+ins+"\t"+refs);
   }
  }
  try(PrintWriter w=new PrintWriter(Files.newBufferedWriter(out.resolve("functions.tsv")))) {
   for(Function f:currentProgram.getFunctionManager().getFunctions(true)) w.println(f.getEntryPoint()+"\t"+f.getBody().getNumAddresses());
  }
  DecompInterface di=new DecompInterface();di.openProgram(currentProgram);
  for(int i=1;i<getScriptArgs().length;i++) {
   long a=Long.parseLong(getScriptArgs()[i],16);
   Function f=getFunctionAt(toAddr(a));
   if(f==null)continue;
   DecompileResults r=di.decompileFunction(f,45,monitor);
   if(r.decompileCompleted())Files.writeString(out.resolve(String.format("function_%08x.c",a)),r.getDecompiledFunction().getC());
  }
  di.dispose();println("Evidence export complete");
 }
}
