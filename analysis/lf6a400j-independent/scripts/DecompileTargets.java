import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.listing.*;
import java.nio.file.*;
public class DecompileTargets extends GhidraScript {
 public void run() throws Exception {
  Path out=Paths.get(getScriptArgs()[0]);Files.createDirectories(out);
  DecompInterface di=new DecompInterface();di.openProgram(currentProgram);
  for(String s:Files.readAllLines(Paths.get(getScriptArgs()[1]))) {
   if(s.isBlank())continue;long a=Long.parseLong(s.trim(),16);
   Function f=getFunctionAt(toAddr(a));
   if(f==null){println("No exact function "+s);continue;}
   DecompileResults r=di.decompileFunction(f,30,monitor);
   if(r.decompileCompleted())Files.writeString(out.resolve(String.format("function_%08x.c",a)),r.getDecompiledFunction().getC());
   StringBuilder asm=new StringBuilder();for(Instruction i:currentProgram.getListing().getInstructions(f.getBody(),true))asm.append(i.getAddress()).append(" ").append(i).append("\n");
   Files.writeString(out.resolve(String.format("function_%08x.asm",a)),asm.toString());
  }
  di.dispose();println("Decompilation complete");
 }
}
