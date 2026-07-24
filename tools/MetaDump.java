// Per-function metadata for the fresh Cube World decomp (no decompilation — fast).
// Emits <outdir>/<Program>.meta.jsonl, one JSON object per function.
// Usage: -postScript MetaDump.java <outdir>
//@category CubeWorld
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;
import ghidra.program.model.listing.Data;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.ReferenceIterator;
import ghidra.program.model.symbol.Symbol;
import ghidra.program.model.symbol.SymbolIterator;
import ghidra.program.model.symbol.SymbolType;
import ghidra.program.model.symbol.Namespace;

import java.io.*;
import java.util.*;

public class MetaDump extends GhidraScript {

    private static String esc(String s) {
        if (s == null) return "";
        StringBuilder b = new StringBuilder();
        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            switch (c) {
                case '"':  b.append("\\\""); break;
                case '\\': b.append("\\\\"); break;
                case '\n': b.append("\\n");  break;
                case '\r': b.append("\\r");  break;
                case '\t': b.append("\\t");  break;
                default:
                    if (c < 0x20 || c > 0x7e) b.append(String.format("\\u%04x", (int) c));
                    else b.append(c);
            }
        }
        return b.toString();
    }

    private static String arr(Collection<String> xs) {
        StringBuilder b = new StringBuilder("[");
        boolean first = true;
        for (String x : xs) {
            if (!first) b.append(",");
            b.append('"').append(esc(x)).append('"');
            first = false;
        }
        return b.append("]").toString();
    }

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        File outDir = new File(args.length > 0 ? args[0] : System.getProperty("user.home"));
        outDir.mkdirs();
        String prog = currentProgram.getName();

        PrintWriter out = new PrintWriter(new BufferedWriter(
                new OutputStreamWriter(new FileOutputStream(new File(outDir, prog + ".meta.jsonl")), "UTF-8"), 1 << 20));

        FunctionManager fm = currentProgram.getFunctionManager();
        int total = fm.getFunctionCount();
        int n = 0;

        for (Function f : fm.getFunctions(true)) {
            if (monitor.isCancelled()) break;
            Address ep = f.getEntryPoint();

            // callees (direct)
            TreeSet<String> callees = new TreeSet<>();
            for (Function c : f.getCalledFunctions(monitor)) callees.add(c.getEntryPoint().toString());
            TreeSet<String> callers = new TreeSet<>();
            for (Function c : f.getCallingFunctions(monitor)) callers.add(c.getEntryPoint().toString());

            // referenced string literals inside the body
            TreeSet<String> strs = new TreeSet<>();
            ReferenceIterator ri = currentProgram.getReferenceManager()
                    .getReferenceIterator(f.getBody().getMinAddress());
            while (ri.hasNext()) {
                Reference r = ri.next();
                if (!f.getBody().contains(r.getFromAddress())) break;
                Data d = getDataAt(r.getToAddress());
                if (d != null && d.hasStringValue()) {
                    Object v = d.getValue();
                    if (v != null) {
                        String s = v.toString();
                        if (s.length() >= 4 && s.length() <= 160) strs.add(s);
                    }
                }
                if (strs.size() > 40) break;
            }

            Namespace ns = f.getParentNamespace();
            String nsName = (ns == null) ? "" : ns.getName(true);

            StringBuilder b = new StringBuilder(512);
            b.append("{\"addr\":\"").append(ep).append('"');
            b.append(",\"name\":\"").append(esc(f.getName())).append('"');
            b.append(",\"ns\":\"").append(esc(nsName)).append('"');
            b.append(",\"size\":").append(f.getBody().getNumAddresses());
            b.append(",\"thunk\":").append(f.isThunk());
            b.append(",\"ext\":").append(f.isExternal());
            b.append(",\"cc\":\"").append(esc(f.getCallingConventionName())).append('"');
            b.append(",\"proto\":\"").append(esc(f.getSignature().getPrototypeString(true))).append('"');
            b.append(",\"callees\":").append(arr(callees));
            b.append(",\"callers\":").append(arr(callers));
            b.append(",\"strings\":").append(arr(strs));
            b.append('}');
            out.println(b);

            if ((++n % 1000) == 0) {
                println("MetaDump " + prog + ": " + n + "/" + total);
                out.flush();
            }
        }
        out.close();

        // Separate dump: RTTI / class namespaces present in the symbol table.
        PrintWriter cw = new PrintWriter(new BufferedWriter(new FileWriter(new File(outDir, prog + ".classes.txt"))));
        SymbolIterator si = currentProgram.getSymbolTable().getSymbolIterator();
        TreeSet<String> classes = new TreeSet<>();
        while (si.hasNext()) {
            Symbol s = si.next();
            if (s.getSymbolType() == SymbolType.CLASS) classes.add(s.getName(true));
        }
        for (String c : classes) cw.println(c);
        cw.close();

        println("MetaDump DONE " + prog + ": " + n + " functions, " + classes.size() + " classes -> " + outDir);
    }
}
