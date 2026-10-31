import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.pcode.*;
import ghidra.program.model.symbol.*;
import java.nio.file.*;
import java.io.*;
import java.util.*;

/* Inter-procedural origin tracing of lookup-routine inputs.
   Args: callsTSV outTSV
   callsTSV: function<TAB>callAddr<TAB>descriptor (hex)
   For each lookup call, resolves the varnodes passed in r5 and r6 (inputs 1/2)
   back through COPY/casts/MULTIEQUAL/LOAD to RAM loads, constants, or callers' arguments.
   Arithmetic encountered is recorded in the path (so scaling transforms are visible). */
public class TraceLookupInputs extends GhidraScript {
  DecompInterface di;
  Map<Function,HighFunction> cache=new HashMap<>();
  HighFunction hf(Function f){
    if(cache.containsKey(f))return cache.get(f);
    DecompileResults r=di.decompileFunction(f,60,monitor);
    HighFunction h=r!=null&&r.decompileCompleted()?r.getHighFunction():null;
    cache.put(f,h);return h;
  }
  String hex(long v){return Long.toHexString(v&0xffffffffL).toUpperCase();}

  void resolve(Varnode v,Function f,String path,int depth,Set<String> out,Set<String> seen){
    if(v==null){out.add("?null"+path);return;}
    if(depth>14||out.size()>12){out.add("?deep"+path);return;}
    String key=f.getEntryPoint()+":"+v.toString()+":"+path;
    if(!seen.add(key))return;
    if(v.isConstant()){out.add("CONST:"+hex(v.getOffset())+path);return;}
    if(v.isAddress()&&v.getAddress().getAddressSpace().isMemorySpace()){
      out.add("RAM:"+hex(v.getOffset())+":"+v.getSize()+path);return;}
    PcodeOp d=v.getDef();
    if(d==null){
      HighVariable hv=v.getHigh();
      if(hv instanceof HighParam){
        int slot=((HighParam)hv).getSlot();
        boolean any=false;
        for(long[] cr:callers.getOrDefault(f.getEntryPoint().getOffset(),List.of())){
          Function c=getFunctionAt(toAddr(cr[0])); if(c==null)continue;
          HighFunction ch=hf(c); if(ch==null)continue;
          Address from=toAddr(cr[1]);
          Iterator<PcodeOpAST> it=ch.getPcodeOps(from);
          while(it.hasNext()){PcodeOpAST op=it.next();
            if((op.getOpcode()==PcodeOp.CALL||op.getOpcode()==PcodeOp.CALLIND)&&op.getNumInputs()>slot+1){any=true;
              resolve(op.getInput(slot+1),c,path+" <-arg"+slot+"@"+from,depth+1,out,seen);}}
        }
        // also indirect: pointer-table dispatch is not followed
        if(!any)out.add("PARAM:"+f.getEntryPoint()+":"+slot+path);
        return;
      }
      if(v.isRegister()){out.add("REG:"+v.getAddress()+path);return;}
      out.add("?input:"+v+path);return;
    }
    int opc=d.getOpcode();
    switch(opc){
      case PcodeOp.COPY: case PcodeOp.INT_ZEXT: case PcodeOp.INT_SEXT: case PcodeOp.CAST: case PcodeOp.SUBPIECE:
        resolve(d.getInput(0),f,path+(opc==PcodeOp.INT_SEXT?" sext":opc==PcodeOp.SUBPIECE?" trunc"+v.getSize():""),depth+1,out,seen);return;
      case PcodeOp.MULTIEQUAL:
        for(int i=0;i<d.getNumInputs();i++)resolve(d.getInput(i),f,path+" |phi",depth+1,out,seen);return;
      case PcodeOp.INDIRECT:
        resolve(d.getInput(0),f,path,depth+1,out,seen);return;
      case PcodeOp.LOAD:{
        Varnode p=d.getInput(1);
        Long a=constAddr(p,f,0);
        if(a!=null){out.add("RAM:"+hex(a)+":"+v.getSize()+path);return;}
        out.add("LOADPTR:"+describe(p)+path);return;}
      case PcodeOp.CALL:
        out.add("CALLRET:"+d.getInput(0).getAddress()+path);return;
      default:
        String opn=d.getMnemonic();
        StringBuilder sb=new StringBuilder(" "+opn);
        for(int i=1;i<d.getNumInputs();i++){Varnode x=d.getInput(i);sb.append(x.isConstant()?"(#"+hex(x.getOffset())+")":"(var)");}
        // follow first non-constant input, mark expression
        boolean followed=false;
        for(int i=0;i<d.getNumInputs();i++){Varnode x=d.getInput(i);
          if(!x.isConstant()){resolve(x,f,path+sb,depth+1,out,seen);followed=true;}}
        if(!followed)out.add("EXPRCONST"+path+sb);
    }
  }
  Long constAddr(Varnode p,Function f,int depth){
    if(depth>60||p==null)return null;
    if(p.isConstant())return p.getOffset();
    if(p.isAddress()&&p.getAddress().getAddressSpace().isMemorySpace()&&p.getDef()==null){
      long off=p.getOffset(); if(off<0x180000){ try{
        if(p.getSize()==2)return (long)getShort(toAddr(off))&0xffffffffL;
        if(p.getSize()==1)return (long)getByte(toAddr(off))&0xffffffffL;
        return (long)getInt(toAddr(off))&0xffffffffL;}catch(Exception e){return null;} } return null;}
    if(p.isRegister()&&p.getDef()==null&&p.getOffset()==0x3c&&gbr.containsKey(f.getEntryPoint().getOffset()))
      return gbr.get(f.getEntryPoint().getOffset());
    PcodeOp d=p.getDef(); if(d==null)return null;
    switch(d.getOpcode()){
      case PcodeOp.COPY: case PcodeOp.CAST: case PcodeOp.INT_ZEXT: case PcodeOp.INDIRECT: return constAddr(d.getInput(0),f,depth+1);
      case PcodeOp.INT_SEXT:{Long x=constAddr(d.getInput(0),f,depth+1); if(x==null)return null; int sz=d.getInput(0).getSize(); long m=1L<<(sz*8); if(x>=m/2)x=x-m; return x&0xffffffffL;}
      case PcodeOp.INT_SUB:{Long x=constAddr(d.getInput(0),f,depth+1),y=constAddr(d.getInput(1),f,depth+1); return x!=null&&y!=null?(x-y)&0xffffffffL:null;}
      case PcodeOp.PTRSUB: case PcodeOp.INT_ADD: case PcodeOp.PTRADD:{
        Long a=constAddr(d.getInput(0),f,depth+1),b=constAddr(d.getInput(1),f,depth+1);
        if(a!=null&&b!=null){ long m=1; if(d.getOpcode()==PcodeOp.PTRADD){Long mm=constAddr(d.getInput(2),f,depth+1); if(mm==null)return null; m=mm;} return (a+b*m)&0xffffffffL;}
        return null;}
      case PcodeOp.LOAD:{ // literal pool pointer
        Long la=constAddr(d.getInput(1),f,depth+1); if(la==null)return null;
        try{ return (long)getInt(toAddr(la))&0xffffffffL;}catch(Exception e){return null;}}
    }
    return null;
  }
  String describe(Varnode p){return tree(p,0);}
  String tree(Varnode p,int dep){ if(p==null)return "null"; if(dep>5)return "..";
    PcodeOp d=p.getDef(); if(d==null)return p.isConstant()?"#"+hex(p.getOffset()):p.toString();
    StringBuilder sb=new StringBuilder(d.getMnemonic()+"(");
    for(int i=0;i<d.getNumInputs();i++){if(i>0)sb.append(",");sb.append(tree(d.getInput(i),dep+1));}
    return sb.append(")").toString();}

  Map<Long,List<long[]>> callers=new HashMap<>();
  Map<Long,Long> gbr=new HashMap<>();
  public void run() throws Exception {
    String[] a=getScriptArgs();
    for(String l:Files.readAllLines(Paths.get(a[2]))){String[] f=l.split("\t");
      callers.computeIfAbsent(Long.parseLong(f[0],16),k->new ArrayList<>()).add(new long[]{Long.parseLong(f[1],16),Long.parseLong(f[2],16)});}
    for(String l:Files.readAllLines(Paths.get(a[4]))){String[] f=l.split("\t");gbr.put(Long.parseLong(f[0],16),Long.parseLong(f[1],16));}
    // Fix lookup prototypes: (desc r4, in1 r5, in2 r6) for rank 2, (desc, in1) for rank 1
    ghidra.program.model.data.DataType u4=ghidra.program.model.data.UnsignedIntegerDataType.dataType;
    for(String l:Files.readAllLines(Paths.get(a[3]))){String[] f=l.split("\t");
      Function lf=getFunctionAt(toAddr(Long.parseLong(f[0],16))); if(lf==null)continue;
      int n=Integer.parseInt(f[1])+1;
      List<ParameterImpl> ps=new ArrayList<>();
      String[] regs={"r4","r5","r6"};
      for(int i=0;i<n;i++)ps.add(new ParameterImpl("p"+i,u4,currentProgram.getRegister(regs[i]),currentProgram));
      lf.updateFunction(null,new ReturnParameterImpl(u4,currentProgram.getRegister("r0"),currentProgram),ps,
        Function.FunctionUpdateType.CUSTOM_STORAGE,true,ghidra.program.model.symbol.SourceType.USER_DEFINED);
    }
    di=new DecompInterface(); di.openProgram(currentProgram);
    try(PrintWriter out=new PrintWriter(Files.newBufferedWriter(Paths.get(a[1])))){
      out.println("function\tcall\tdescriptor\tinput\torigins");
      for(String l:Files.readAllLines(Paths.get(a[0]))){
        if(l.isBlank())continue; String[] f=l.split("\t");
        Function fn=getFunctionAt(toAddr(Long.parseLong(f[0],16))); Address ca=toAddr(Long.parseLong(f[1],16));
        HighFunction h=fn==null?null:hf(fn);
        if(h==null){out.println(f[0]+"\t"+f[1]+"\t"+f[2]+"\t-\tNODECOMP");continue;}
        Iterator<PcodeOpAST> it=h.getPcodeOps(ca); boolean found=false;
        while(it.hasNext()){PcodeOpAST op=it.next();
          if(op.getOpcode()!=PcodeOp.CALL&&op.getOpcode()!=PcodeOp.CALLIND)continue; found=true;
          for(int i=2;i<op.getNumInputs()&&i<=3;i++){
            Set<String> o=new TreeSet<>(); resolve(op.getInput(i),fn,"",0,o,new HashSet<>());
            out.println(f[0]+"\t"+f[1]+"\t"+f[2]+"\t"+(i-1)+"\t"+String.join(" ;; ",o));
          }
        }
        if(!found)out.println(f[0]+"\t"+f[1]+"\t"+f[2]+"\t-\tNOCALLOP");
      }
    }
    di.dispose();
  }
}
