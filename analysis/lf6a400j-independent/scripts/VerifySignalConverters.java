import ghidra.app.script.GhidraScript;
import ghidra.app.emulator.EmulatorHelper;
import java.nio.file.*;
import java.io.*;
public class VerifySignalConverters extends GhidraScript {
 public void run() throws Exception {
  int passed=0,total=0;
  try(PrintWriter out=new PrintWriter(Files.newBufferedWriter(Paths.get(getScriptArgs()[0])))) {
   out.println("target\tinput\texpected\tactual\tresult");
   for(int kind=0;kind<2;kind++) {
    int[] samples=kind==0?new int[]{0,1,31,32,2048,5120,16384,32768,45056,65535}:new int[256];
    if(kind==1)for(int i=0;i<256;i++)samples[i]=i;
    for(int input:samples) {
     long target=kind==0?0xd0c38:0xd0638; int width=kind==0?2:1;
     int expected=kind==0?(input*25)>>5:(input+128)&255;
     EmulatorHelper emu=new EmulatorHelper(currentProgram);String status="TIMEOUT";int actual=-1;
     try {
      emu.writeMemory(toAddr(0xffff8000L),new byte[0x4000]);
      for(int r=0;r<15;r++)emu.writeRegister("r"+r,0);
      emu.writeRegister("r4",input);emu.writeRegister("r5",0xffff9000L);
      emu.writeRegister("r15",0xffffb000L);emu.writeRegister("pr",0xfffffff0L);emu.writeRegister("sr",0);
      emu.writeRegister(emu.getPCRegister(),target);
      for(int step=0;step<100;step++) {
       if((emu.readRegister(emu.getPCRegister()).longValue()&0xffffffffL)==0xfffffff0L) {
        actual=0;for(byte v:emu.readMemory(toAddr(0xffff9000L),width))actual=(actual<<8)|(v&255);
        status=actual==expected?"PASS":"MISMATCH";break;
       }
       if(!emu.step(monitor)){status="ERROR "+emu.getLastError();break;}
      }
     }finally{emu.dispose();}
     total++;if(status.equals("PASS"))passed++;
     out.printf("%08x\t%d\t%d\t%d\t%s%n",target,input,expected,actual,status);
    }
   }
  }
  println("Signal conversions: "+passed+"/"+total+" passed");
  if(passed!=total)throw new AssertionError("signal conversion validation failed");
 }
}
