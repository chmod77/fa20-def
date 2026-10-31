import ghidra.app.script.GhidraScript;
import ghidra.app.emulator.EmulatorHelper;
import java.nio.file.*;
import java.io.*;
public class VerifyLookup extends GhidraScript {
 public void run() throws Exception {
  try(PrintWriter w=new PrintWriter(Files.newBufferedWriter(Paths.get(getScriptArgs()[1])))) {
   w.println("target\targ1\targ2\texpected\tactual\tmask\tsteps\tresult");
   int count=0,passed=0;
   for(String s:Files.readAllLines(Paths.get(getScriptArgs()[0]))) {
    String[] c=s.split("\t");long target=Long.parseLong(c[0],16),x=Long.parseLong(c[2],16),y=Long.parseLong(c[3],16),expected=Long.parseLong(c[4],16),mask=Long.parseLong(c[5],16);
    EmulatorHelper emu=new EmulatorHelper(currentProgram);int steps=0;long result=-1;String status="TIMEOUT";
    try {
     emu.writeMemory(toAddr(0x200000),Files.readAllBytes(Paths.get(c[1])));
     emu.writeMemory(toAddr(0xffff8000L),new byte[0x4000]);
     for(int r=0;r<15;r++)emu.writeRegister("r"+r,0);
     emu.writeRegister("r4",0x200000);emu.writeRegister("r5",x);emu.writeRegister("r6",y);
     emu.writeRegister("r15",0xffffb000L);emu.writeRegister("pr",0xfffffff0L);emu.writeRegister("sr",0);
     emu.writeRegister(emu.getPCRegister(),target);
     while(steps++<10000) {
      if((emu.readRegister(emu.getPCRegister()).longValue()&0xffffffffL)==0xfffffff0L) {
       result=emu.readRegister("r0").longValue()&mask;status=result==expected?"PASS":"MISMATCH";break;
      }
      if(!emu.step(monitor)){status="ERROR "+emu.getLastError();break;}
     }
    }catch(Exception e){status="EXCEPTION "+e.getMessage();}finally{emu.dispose();}
    if(status.equals("PASS"))passed++;
    w.println(c[0]+"\t"+c[2]+"\t"+c[3]+"\t"+c[4]+"\t"+Long.toHexString(result)+"\t"+c[5]+"\t"+steps+"\t"+status.replace('\n',' '));w.flush();
    if(++count%100==0)println("Validated "+count+" cases; "+passed+" passed");
   }
   println("Result: "+passed+"/"+count+" passed");
  }
 }
}
