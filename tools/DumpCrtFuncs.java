// Dump named functions from the PDB-applied CRT DLLs -> raw/<dll>.symbols.tsv
//@category CubeWorld
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import java.io.*;
public class DumpCrtFuncs extends GhidraScript {
  public void run() throws Exception {
    String out = getScriptArgs()[0];
    String prog = currentProgram.getName();
    long base = currentProgram.getImageBase().getOffset();
    PrintWriter w = new PrintWriter(new FileWriter(new File(out, prog + ".symbols.tsv")));
    w.println("rva\tname\tsize");
    int n=0;
    for (Function f : currentProgram.getFunctionManager().getFunctions(true)) {
      String nm = f.getName();
      if (nm.startsWith("FUN_") || nm.startsWith("thunk_")) continue;
      long rva = f.getEntryPoint().getOffset() - base;
      w.printf("%x\t%s\t%d%n", rva, nm, f.getBody().getNumAddresses());
      n++;
    }
    w.close();
    println("DumpCrtFuncs " + prog + ": " + n + " named functions -> " + out);
  }
}
