import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.pcode.*;
import java.nio.file.*;
import java.io.*;
import java.util.*;

/* For each target RAM variable, find STOREs to it (via supplied writer list: var<TAB>function)
   and print the stored value's expression tree in terms of RAM loads, constants (with float decode),
   parameters and call results. Args: writersTSV outTXT gbrTSV */
public class TraceVarWriters extends GhidraScript {
  DecompInterface di; Map<Long,Long> gbr=new HashMap<>();
  Map<Function,HighFunction> cache=new HashMap<>();
  HighFunction hf(Function f){ if(cache.containsKey(f))return cache.get(f);
    DecompileResults r=di.decompileFunction(f,60,monitor);
    HighFunction h=r!=null&&r.decompileCompleted()?r.getHighFunction():null; cache.put(f,h); return h;}
  String hx(long v){return "0x"+Long.toHexString(v&0xffffffffL).toUpperCase();}
  Long cval(Varnode p,Function f,int dep){
    if(p==null||dep>60)return null;
    if(p.isConstant())return p.getOffset();
    if(p.isAddress()&&p.getDef()==null&&p.getOffset()<0x180000){try{
      if(p.getSize()==2)return (long)getShort(toAddr(p.getOffset()))&0xffffffffL;
      if(p.getSize()==1)return (long)getByte(toAddr(p.getOffset()))&0xffL;
      return (long)getInt(toAddr(p.getOffset()))&0xffffffffL;}catch(Exception e){return null;}}
    if(p.isRegister()&&p.getDef()==null&&p.getOffset()==0x3c)return gbr.get(f.getEntryPoint().getOffset());
    PcodeOp d=p.getDef(); if(d==null)return null;
    switch(d.getOpcode()){
      case PcodeOp.COPY: case PcodeOp.CAST: case PcodeOp.INT_ZEXT: case PcodeOp.INDIRECT: return cval(d.getInput(0),f,dep+1);
      case PcodeOp.INT_SEXT:{Long x=cval(d.getInput(0),f,dep+1); if(x==null)return null; int sz=d.getInput(0).getSize(); long m=1L<<(sz*8); if(x>=m/2)x-=m; return x&0xffffffffL;}
      case PcodeOp.PTRSUB: case PcodeOp.INT_ADD:{Long a=cval(d.getInput(0),f,dep+1),b=cval(d.getInput(1),f,dep+1); return a!=null&&b!=null?(a+b)&0xffffffffL:null;}
      case PcodeOp.PTRADD:{Long a=cval(d.getInput(0),f,dep+1),b=cval(d.getInput(1),f,dep+1),c=cval(d.getInput(2),f,dep+1); return a!=null&&b!=null&&c!=null?(a+b*c)&0xffffffffL:null;}
      case PcodeOp.LOAD:{Long a=cval(d.getInput(1),f,dep+1); if(a==null||a>=0x180000)return null; try{
        int sz=p.getSize(); if(sz==2)return (long)getShort(toAddr(a))&0xffffL; if(sz==1)return (long)getByte(toAddr(a))&0xffL; return (long)getInt(toAddr(a))&0xffffffffL;}catch(Exception e){return null;}}
    }
    return null;
  }
  String expr(Varnode v,Function f,int dep,Set<Varnode> seen){
    if(v==null)return "null"; if(dep>14)return "…";
    if(v.isConstant()){long c=v.getOffset(); String s=hx(c);
      if(v.getSize()==4){float fl=Float.intBitsToFloat((int)c); if(Math.abs(fl)>1e-6&&Math.abs(fl)<1e7&&(c&0x7f800000L)!=0)s+="{f"+fl+"}";}
      if(v.getSize()==8){double db=Double.longBitsToDouble(c); if(Math.abs(db)>1e-9&&Math.abs(db)<1e9)s+="{d"+db+"}";}
      return s;}
    PcodeOp d=v.getDef();
    if(d==null){ HighVariable hv=v.getHigh(); if(hv instanceof HighParam)return "PARAM"+((HighParam)hv).getSlot();
      if(v.isAddress()&&v.getOffset()<0x180000){Long c=cval(v,f,0); if(c!=null){ String s="ROM["+hx(v.getOffset())+"]="+hx(c);
        if(v.getSize()==4){float fl=Float.intBitsToFloat((int)(long)c); if(Math.abs(fl)>1e-6&&Math.abs(fl)<1e7)s+="{f"+fl+"}";} return s;}}
      return v.toString();}
    if(!seen.add(v))return "<loop>";
    int o=d.getOpcode();
    if(o==PcodeOp.LOAD){Long a=cval(d.getInput(1),f,0);
      if(a!=null){ if(a<0x180000){Long c=cval(v,f,0); String s="ROM["+hx(a)+"]"+(c!=null?"="+hx(c):"");
          if(c!=null&&v.getSize()==4){float fl=Float.intBitsToFloat((int)(long)c); if(Math.abs(fl)>1e-6&&Math.abs(fl)<1e7)s+="{f"+fl+"}";} return s;}
        return "RAM"+v.getSize()+"["+hx(a)+"]";}
      return "*("+expr(d.getInput(1),f,dep+1,seen)+")";}
    if(o==PcodeOp.CALL||o==PcodeOp.CALLIND){StringBuilder sb=new StringBuilder("call "+(o==PcodeOp.CALL?d.getInput(0).getAddress().toString():expr(d.getInput(0),f,dep+1,seen))+"(");
      for(int i=1;i<d.getNumInputs();i++){if(i>1)sb.append(", ");sb.append(expr(d.getInput(i),f,dep+1,seen));} return sb.append(")").toString();}
    if(o==PcodeOp.COPY||o==PcodeOp.CAST||o==PcodeOp.INDIRECT||o==PcodeOp.INT_ZEXT)return expr(d.getInput(0),f,dep+1,seen);
    if(o==PcodeOp.MULTIEQUAL){StringBuilder sb=new StringBuilder("phi(");
      for(int i=0;i<d.getNumInputs();i++){if(i>0)sb.append(" | ");sb.append(expr(d.getInput(i),f,dep+1,seen));} return sb.append(")").toString();}
    StringBuilder sb=new StringBuilder(d.getMnemonic()+"(");
    for(int i=0;i<d.getNumInputs();i++){if(i>0)sb.append(", ");sb.append(expr(d.getInput(i),f,dep+1,seen));}
    return sb.append(")").toString();
  }
  public void run() throws Exception {
    String[] a=getScriptArgs();
    for(String l:Files.readAllLines(Paths.get(a[2]))){String[] f=l.split("\t");gbr.put(Long.parseLong(f[0],16),Long.parseLong(f[1],16));}
    di=new DecompInterface(); di.openProgram(currentProgram);
    try(PrintWriter out=new PrintWriter(Files.newBufferedWriter(Paths.get(a[1])))){
      for(String l:Files.readAllLines(Paths.get(a[0]))){
        if(l.isBlank())continue; String[] f=l.split("\t"); long var=Long.parseLong(f[0],16);
        Function fn=getFunctionAt(toAddr(Long.parseLong(f[1],16))); if(fn==null){out.println(f[0]+" "+f[1]+" NOFUNC");continue;}
        HighFunction h=hf(fn); if(h==null){out.println(f[0]+" "+f[1]+" NODECOMP");continue;}
        Iterator<PcodeOpAST> it=h.getPcodeOps(); int n=0;
        while(it.hasNext()){PcodeOpAST op=it.next(); if(op.getOpcode()!=PcodeOp.STORE)continue;
          Long ad=cval(op.getInput(1),fn,0); if(ad==null||ad!=var)continue;
          out.println("VAR "+hx(var)+" @ "+op.getSeqnum().getTarget()+" in "+fn.getEntryPoint()+" size "+op.getInput(2).getSize()+"\n   = "+expr(op.getInput(2),fn,0,new HashSet<>()));
          n++;}
        if(n==0)out.println("VAR "+hx(var)+" in "+fn.getEntryPoint()+": no resolved STORE");
      }
    }
    di.dispose();
  }
}
