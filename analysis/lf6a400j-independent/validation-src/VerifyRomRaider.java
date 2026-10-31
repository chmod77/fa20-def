import java.nio.file.*;
import javax.xml.parsers.*;
import org.w3c.dom.*;
import com.romraider.xml.DOMRomUnmarshaller;
import com.romraider.maps.*;
import com.romraider.swing.JProgressPane;
public class VerifyRomRaider {
 static int checked=0, rpmEntries=0;
 static void check(Table table,DataCell cell,byte[] b,int index) {
  int width=table.getStorageType(),a=table.getStorageAddress()+index*width;
  long expected=0;for(int i=0;i<width;i++)expected=(expected<<8)|(b[a+i]&255);
  if(table.isSignedData() && (expected&(1L<<(width*8-1)))!=0)expected-=1L<<(width*8);
  if(cell.getBinValue()!=expected)throw new AssertionError(table.getName()+" index "+index+" expected "+expected+" got "+cell.getBinValue());
  if(table.getName().equals("Engine Speed")) {
   double rpm=expected*25.0/128.0;
   if(Math.abs(cell.getRealValue()-rpm)>0.000001)throw new AssertionError("RPM conversion: expected "+rpm+" got "+cell.getRealValue());
   rpmEntries++;
  }
  checked++;
 }
 public static void main(String[] args)throws Exception {
  byte[] b=Files.readAllBytes(Paths.get(args[1]));Document d=DocumentBuilderFactory.newInstance().newDocumentBuilder().parse(args[0]);
  DOMRomUnmarshaller u=new DOMRomUnmarshaller();Node match=u.checkDefinitionMatch(d.getDocumentElement(),b);
  if(match==null)throw new AssertionError("ROM ID mismatch");
  JProgressPane progress=new JProgressPane();Rom rom=u.unmarshallXMLDefinition(Paths.get(args[0]).toFile(),d.getDocumentElement(),match,b,progress);
  rom.populateTables(b,progress);int tables=0;
  for(Table t:rom.getTables()) {
   if(!t.isLocked())throw new AssertionError("unlocked research table");
   if(t instanceof Table3D) {
    Table3D t3=(Table3D)t;DataCell[][] cells=t3.get3dData();
    for(int y=0;y<t3.getSizeY();y++)for(int x=0;x<t3.getSizeX();x++)check(t,cells[x][y],b,y*t3.getSizeX()+x);
    Table x=t3.getXAxis(),y=t3.getYAxis();for(int i=0;i<x.getDataSize();i++)check(x,x.getData()[i],b,i);for(int i=0;i<y.getDataSize();i++)check(y,y.getData()[i],b,i);
   }else {
    for(int i=0;i<t.getDataSize();i++)check(t,t.getData()[i],b,i);
    Table ax=((Table2D)t).getAxis();for(int i=0;i<ax.getDataSize();i++)check(ax,ax.getData()[i],b,i);
   }
   tables++;
  }
  if(!rom.getFaultyTables().isEmpty())throw new AssertionError(rom.getFaultyTables());
  if(rpmEntries!=112)throw new AssertionError("Expected 112 reviewed RPM axis entries, got "+rpmEntries);
  System.out.println("PASS: "+tables+" tables, "+checked+" cells/axis entries match ROM bytes; no faulty tables; all locked; "+rpmEntries+" RPM entries match verified physical conversion");System.exit(0);
 }
}
