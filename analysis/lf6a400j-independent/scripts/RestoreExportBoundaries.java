import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import java.nio.file.*;
public class RestoreExportBoundaries extends GhidraScript {
 public void run()throws Exception {
  for(long a:new long[]{0x7e620,0x7e700})currentProgram.getFunctionManager().removeFunction(toAddr(a));
  for(long parent:new long[]{0x7e5c8,0x7e664}) {
   AddressSet body=new AddressSet();
   for(String line:Files.readAllLines(Paths.get(getScriptArgs()[0]))) {
    String[] r=line.split("\t",-1);if(r.length<2 || !r[1].equals(String.format("%08x",parent)))continue;
    Instruction ins=getInstructionAt(toAddr(Long.parseLong(r[0],16)));
    if(ins!=null)body.add(ins.getMinAddress(),ins.getMaxAddress());
   }
   Function f=getFunctionAt(toAddr(parent));if(f==null || body.isEmpty())throw new Exception("Missing original boundary");f.setBody(body);
  }
  println("Restored original analysis boundaries for exploratory tail addresses");
 }
}
