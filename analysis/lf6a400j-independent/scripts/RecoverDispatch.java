import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import java.nio.file.*;
import java.util.*;
public class RecoverDispatch extends GhidraScript {
 public void run()throws Exception {
  TreeSet<Long> targets=new TreeSet<>();StringBuilder report=new StringBuilder("entry\tservice\tthunk\ttarget\tprior_function\n");
  for(long a=0x7634;a<0x7724;a+=8) {
   long thunk=currentProgram.getMemory().getInt(toAddr(a+4))&0xffffffffL;
   if(thunk>=0x180000)continue;
   int w=currentProgram.getMemory().getShort(toAddr(thunk))&0xffff;
   if((w&0xff00)!=0xd300 || (currentProgram.getMemory().getInt(toAddr(thunk+2))!=0x432b0009))continue;
   long pool=((thunk+4)&~3L)+(w&255)*4;long target=currentProgram.getMemory().getInt(toAddr(pool))&0xffffffffL;
   Function prior=getFunctionContaining(toAddr(target));
   report.append(String.format("%08x\t%02x\t%08x\t%08x\t%s\n",a,currentProgram.getMemory().getByte(toAddr(a))&255,thunk,target,prior==null?"none":prior.getEntryPoint()));
   for(long t:new long[]{thunk,target}){disassemble(toAddr(t));if(getFunctionAt(toAddr(t))==null)createFunction(toAddr(t),null);}
   targets.add(target);
  }
  Files.writeString(Paths.get(getScriptArgs()[0],"diagnostic-dispatch.tsv"),report.toString());
  Files.writeString(Paths.get(getScriptArgs()[0],"diagnostic-targets.txt"),String.join("\n",targets.stream().map(x->Long.toHexString(x)).toList())+"\n");
  println("Recovered "+targets.size()+" dispatch destinations from ROM jump thunks");
 }
}
