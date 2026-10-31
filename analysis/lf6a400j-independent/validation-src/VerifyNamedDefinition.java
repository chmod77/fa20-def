import java.nio.file.*;
import javax.xml.parsers.*;
import org.w3c.dom.*;
import com.romraider.xml.DOMRomUnmarshaller;
import com.romraider.maps.*;
import com.romraider.util.JEPUtil;
import com.romraider.swing.JProgressPane;

/* Validates the named/scaled definition with RomRaider's own parser:
   1. every data cell and axis entry RomRaider reads equals the big-endian ROM bytes (address, width, sign, X/Y order);
   2. every cell's real value equals the scaling expression evaluated (RomRaider JEP) on the raw value, and the
      to_byte expression maps that real value back to the raw value (|err| < 0.5 LSB): scalings are self-consistent;
   3. every table whose name starts with "Unidentified" is locked (with its axes);
   4. no faulty tables.  Usage (from RomRaider/): VerifyNamedDefinition <xml> <rom> */
public class VerifyNamedDefinition {
 static int checked = 0, scaled = 0, statics = 0;
 static void check(Table t, DataCell c, byte[] b, int index) {
  int w = t.getStorageType(), a = t.getStorageAddress() + index * w;
  long raw = 0; for (int i = 0; i < w; i++) raw = (raw << 8) | (b[a + i] & 255);
  if (t.isSignedData() && (raw & (1L << (w * 8 - 1))) != 0) raw -= 1L << (w * 8);
  if (c.getBinValue() != raw) throw new AssertionError(t.getName() + " index " + index + " expected " + raw + " got " + c.getBinValue());
  Scale s = t.getCurrentScale();
  double real = JEPUtil.evaluate(s.getExpression(), raw);
  if (Double.isNaN(real) || Double.isInfinite(real)) throw new AssertionError(t.getName() + " non-finite real at " + index);
  if (Math.abs(c.getRealValue() - real) > 1e-6 * Math.max(1, Math.abs(real))) throw new AssertionError(t.getName() + " real " + c.getRealValue() + " != expr " + real);
  double back = JEPUtil.evaluate(s.getByteExpression(), real);
  if (Math.abs(back - raw) >= 0.5) throw new AssertionError(t.getName() + " to_byte(" + real + ")=" + back + " != raw " + raw + " [" + s.getExpression() + " / " + s.getByteExpression() + "]");
  if (!s.getExpression().equals("x")) scaled++;
  checked++;
 }
 public static void main(String[] args) throws Exception {
  byte[] b = Files.readAllBytes(Paths.get(args[1]));
  Document d = DocumentBuilderFactory.newInstance().newDocumentBuilder().parse(args[0]);
  DOMRomUnmarshaller u = new DOMRomUnmarshaller(); Node match = u.checkDefinitionMatch(d.getDocumentElement(), b);
  if (match == null) throw new AssertionError("ROM ID mismatch");
  JProgressPane progress = new JProgressPane();
  Rom rom = u.unmarshallXMLDefinition(Paths.get(args[0]).toFile(), d.getDocumentElement(), match, b, progress);
  rom.populateTables(b, progress);
  int tables = 0, unlocked = 0;
  for (Table t : rom.getTables()) {
   boolean unid = t.getName().startsWith("Unidentified");
   if (unid && !t.isLocked()) throw new AssertionError("unidentified table unlocked: " + t.getName());
   if (!t.isLocked()) unlocked++;
   if (t instanceof Table3D) {
    Table3D t3 = (Table3D) t; DataCell[][] cells = t3.get3dData();
    for (int y = 0; y < t3.getSizeY(); y++) for (int x = 0; x < t3.getSizeX(); x++) check(t, cells[x][y], b, y * t3.getSizeX() + x);
    Table x = t3.getXAxis(), y = t3.getYAxis();
    for (int i = 0; i < x.getDataSize(); i++) check(x, x.getData()[i], b, i);
    for (int i = 0; i < y.getDataSize(); i++) check(y, y.getData()[i], b, i);
   } else {
    for (int i = 0; i < t.getDataSize(); i++) check(t, t.getData()[i], b, i);
    Table ax = ((Table2D) t).getAxis();
    if (ax.isStaticDataTable()) { if (ax.getDataSize() != t.getDataSize()) throw new AssertionError(t.getName() + " static axis size"); statics++; }
    else for (int i = 0; i < ax.getDataSize(); i++) check(ax, ax.getData()[i], b, i);
   }
   tables++;
  }
  if (!rom.getFaultyTables().isEmpty()) throw new AssertionError(rom.getFaultyTables());
  System.out.println("PASS: " + tables + " tables (" + unlocked + " identified/unlocked), " + checked + " cells/axis entries match ROM bytes; "
    + statics + " static axes; " + scaled + " scaled values round-trip through expression/to_byte; all unidentified tables locked; no faulty tables");
  System.exit(0);
 }
}
