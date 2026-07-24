// Resolve the INDIRECT call graph: for every function, find all incoming references,
// including address-taken pointers held in vtables / dispatch tables / data. Ghidra's
// call graph only records direct `call FUN_x`, so vtable- and fnptr-dispatched functions
// look like 0-caller orphans. This distinguishes real-but-indirect from genuine artifacts.
//
// Emits <outdir>/<prog>.indirefs.jsonl, one object per function:
//   {addr, name, direct[], code_ptr[], data_ptr[]}
//     direct   : functions that `call` it directly (entry-point of the caller)
//     code_ptr : functions whose BODY takes its address (push/mov of the fn pointer)
//     data_ptr : data locations holding its address, tagged with the containing symbol
//                (a vtable, a jump/dispatch table, ...) — {addr, container}
//@category CubeWorld
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Data;
import ghidra.program.model.mem.MemoryBlock;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.ReferenceIterator;
import ghidra.program.model.symbol.RefType;
import ghidra.program.model.symbol.Symbol;

import java.io.*;
import java.util.*;

public class IndirectRefs extends GhidraScript {

    private static String esc(String s) {
        if (s == null) return "";
        StringBuilder b = new StringBuilder();
        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            if (c == '"' || c == '\\') b.append('\\').append(c);
            else if (c < 0x20 || c > 0x7e) b.append(' ');
            else b.append(c);
        }
        return b.toString();
    }

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        File outDir = new File(args.length > 0 ? args[0] : System.getProperty("user.home"));
        outDir.mkdirs();
        String prog = currentProgram.getName();
        PrintWriter out = new PrintWriter(new BufferedWriter(
                new OutputStreamWriter(new FileOutputStream(new File(outDir, prog + ".indirefs.jsonl")), "UTF-8"), 1 << 20));

        var fm = currentProgram.getFunctionManager();
        var refMgr = currentProgram.getReferenceManager();
        int total = fm.getFunctionCount(), n = 0;

        for (Function f : fm.getFunctions(true)) {
            if (monitor.isCancelled()) break;
            Address ep = f.getEntryPoint();

            TreeSet<String> direct = new TreeSet<>();
            TreeSet<String> codePtr = new TreeSet<>();
            List<String> dataPtr = new ArrayList<>();

            ReferenceIterator ri = refMgr.getReferencesTo(ep);
            while (ri.hasNext()) {
                Reference r = ri.next();
                Address from = r.getFromAddress();
                RefType rt = r.getReferenceType();
                Function fromFn = fm.getFunctionContaining(from);

                if (rt.isCall() && fromFn != null) {
                    direct.add(fromFn.getEntryPoint().toString());
                } else if (fromFn != null) {
                    // address taken inside a function body (push/mov of fn ptr) or a computed call
                    if (rt.isCall()) direct.add(fromFn.getEntryPoint().toString());
                    else codePtr.add(fromFn.getEntryPoint().toString());
                } else {
                    // reference lives in DATA -> a vtable / dispatch table / global fn ptr
                    MemoryBlock blk = getMemoryBlock(from);
                    String container = null;
                    Symbol prim = getSymbolAt(from);
                    if (prim != null) container = prim.getName(true);
                    if (container == null) {
                        // nearest preceding label = the table/vtable base this slot belongs to
                        Symbol before = tableBaseSymbol(from);
                        if (before != null) container = before.getName(true);
                    }
                    String seg = blk != null ? blk.getName() : "?";
                    dataPtr.add("{\"addr\":\"" + from + "\",\"seg\":\"" + esc(seg)
                            + "\",\"container\":\"" + esc(container == null ? "" : container) + "\"}");
                }
            }

            if (direct.isEmpty() && codePtr.isEmpty() && dataPtr.isEmpty()) {
                // no incoming refs at all — keep it, that's the genuine-orphan signal
            }

            StringBuilder b = new StringBuilder(256);
            b.append("{\"addr\":\"").append(ep).append("\",\"name\":\"").append(esc(f.getName())).append('"');
            b.append(",\"direct\":[").append(join(direct)).append(']');
            b.append(",\"code_ptr\":[").append(join(codePtr)).append(']');
            b.append(",\"data_ptr\":[").append(String.join(",", dataPtr)).append("]}");
            out.println(b);

            if ((++n % 2000) == 0) { out.flush(); println("IndirectRefs " + prog + ": " + n + "/" + total); }
        }
        out.close();
        println("IndirectRefs DONE " + prog + ": " + n + " functions -> " + outDir);
    }

    // nearest label at-or-before an address (the base of the vtable/dispatch table)
    private Symbol tableBaseSymbol(Address a) {
        try {
            var it = currentProgram.getSymbolTable().getSymbolIterator(a, false);
            while (it.hasNext()) {
                Symbol s = it.next();
                if (s.getAddress().isMemoryAddress()) return s;
            }
        } catch (Throwable ignore) { }
        return null;
    }

    private static String join(TreeSet<String> s) {
        StringBuilder b = new StringBuilder();
        boolean first = true;
        for (String x : s) { if (!first) b.append(','); b.append('"').append(x).append('"'); first = false; }
        return b.toString();
    }
}
