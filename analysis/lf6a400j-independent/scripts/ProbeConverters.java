import ghidra.app.script.GhidraScript;
import ghidra.app.emulator.EmulatorHelper;
import java.nio.file.*;
import java.io.*;
import java.util.*;
/* Generic converter probe. Args: casesTSV outTSV.
   cases: name target inreg inwidth signed outreg outwidth [reg=value ...]
   Sweeps the input over its full domain (8-bit: all; 16-bit: 1025 points incl. edges), all other
   registers 0 unless given, scratch RAM zeroed, output pointer = 0xFFFF9000. */
public class ProbeConverters extends GhidraScript {
 public void run() throws Exception {
  String[] a=getScriptArgs();
  List<String> lines=Files.readAllLines(Paths.get(a[0]));
  try(PrintWriter out=new PrintWriter(Files.newBufferedWriter(Paths.get(a[1])))) {
   out.println("name\ttarget\tinput\toutput\tstatus");
   for(String l:lines){ if(l.isBlank()||l.startsWith("#"))continue; String[] f=l.split("\t");
    String name=f[0]; long target=Long.parseLong(f[1],16); String inreg=f[2]; int inw=Integer.parseInt(f[3]);
    boolean sgn=f[4].equals("1"); String outreg=f[5]; int outw=Integer.parseInt(f[6]);
    List<Long> xs=new ArrayList<>();
    if(inw==1){for(int i=0;i<256;i++)xs.add((long)i);} else {for(int i=0;i<=1024;i++)xs.add(Math.min(65535L,(long)i*64));xs.add(1L);xs.add(65535L);xs.add(32767L);xs.add(32768L);}
    for(long x:xs){
     long rx=x; if(sgn){ if(inw==1&&x>127)rx=x-256; if(inw==2&&x>32767)rx=x-65536; }
     EmulatorHelper emu=new EmulatorHelper(currentProgram); String st="TIMEOUT"; long y=-1;
     try{
      emu.writeMemory(toAddr(0xffff8000L),new byte[0x4000]);
      for(int r=0;r<15;r++)emu.writeRegister("r"+r,0);
      for(int k=7;k<f.length;k++){String[] kv=f[k].split("=");emu.writeRegister(kv[0],Long.decode(kv[1]));}
      emu.writeRegister(inreg,rx&0xffffffffL); emu.writeRegister(outreg,0xffff9000L);
      emu.writeRegister("r15",0xffffb000L);emu.writeRegister("pr",0xfffffff0L);emu.writeRegister("sr",0);
      emu.writeRegister(emu.getPCRegister(),target);
      for(int s=0;s<3000;s++){
       if((emu.readRegister(emu.getPCRegister()).longValue()&0xffffffffL)==0xfffffff0L){
        y=0;for(byte v:emu.readMemory(toAddr(0xffff9000L),outw))y=(y<<8)|(v&255);st="OK";break;}
       if(!emu.step(monitor)){st="ERROR "+emu.getLastError();break;}
      }
     }finally{emu.dispose();}
     out.printf("%s\t%08x\t%d\t%d\t%s%n",name,target,x,y,st);
    }
   }
  }
 }
}
