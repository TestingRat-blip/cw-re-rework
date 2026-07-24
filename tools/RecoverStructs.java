// Recover per-class struct LAYOUTS from usage, keyed by the RTTI class architecture.
//
// MSVC RTTI gives the class NAME and base hierarchy but not field layout. This infers the
// layout the way a reverse-engineer does: for every member function of a class, take the
// `this` pointer and let Ghidra's FillOutStructureHelper build a struct from how `this` is
// accessed, then MERGE those per-function structs into one class struct and apply it.
//
// Usage: -postScript RecoverStructs.java <outdir> <mode> [classFilter]
//   mode = dry   : print recovered fields per class, change nothing
//   mode = apply : create/replace the class struct, set each member fn's `this` type
//   classFilter  : substring; only classes whose full name contains it (default: all)
//@category CubeWorld
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.app.decompiler.util.FillOutStructureHelper;
import ghidra.program.model.data.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.pcode.*;
import ghidra.program.model.symbol.Namespace;
import ghidra.util.task.TaskMonitor;

import java.io.*;
import java.util.*;

public class RecoverStructs extends GhidraScript {

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        File outDir = new File(args.length > 0 ? args[0] : System.getProperty("user.home"));
        outDir.mkdirs();
        String mode = args.length > 1 ? args[1] : "dry";
        String filter = args.length > 2 ? args[2] : "";
        boolean apply = mode.equalsIgnoreCase("apply");
        String prog = currentProgram.getName();

        // group member functions by owning class namespace
        TreeMap<String, List<Function>> byClass = new TreeMap<>();
        for (Function f : currentProgram.getFunctionManager().getFunctions(true)) {
            if (f.isThunk() || f.isExternal()) continue;
            Namespace ns = f.getParentNamespace();
            if (ns == null || ns.isGlobal()) continue;
            String cn = ns.getName(true);
            if (cn.startsWith("std::") || cn.contains(".DLL") || cn.contains(".dll")) continue;
            if (!filter.isEmpty() && !cn.contains(filter)) continue;
            byClass.computeIfAbsent(cn, k -> new ArrayList<>()).add(f);
        }

        DecompInterface di = new DecompInterface();
        di.setOptions(new DecompileOptions());
        di.openProgram(currentProgram);
        FillOutStructureHelper helper = new FillOutStructureHelper(currentProgram, monitor);

        PrintWriter rep = new PrintWriter(new BufferedWriter(
                new FileWriter(new File(outDir, prog + ".structs." + mode + ".txt"))));
        rep.println("# Struct recovery (" + mode + ") for " + prog);
        int classesDone = 0, fieldsTotal = 0, appliedStructs = 0;

        for (Map.Entry<String, List<Function>> e : byClass.entrySet()) {
            if (monitor.isCancelled()) break;
            String cn = e.getKey();
            List<Function> members = e.getValue();

            // merged offset -> (datatype, length); keep the widest observed access
            TreeMap<Long, DataType> fields = new TreeMap<>();
            long maxLen = 0;
            int fnUsed = 0;

            for (Function f : members) {
                if (monitor.isCancelled()) break;
                DecompileResults dr;
                try {
                    dr = di.decompileFunction(f, 45, TaskMonitor.DUMMY);
                } catch (Throwable t) { continue; }
                if (dr == null || !dr.decompileCompleted()) continue;
                HighFunction hf = dr.getHighFunction();
                if (hf == null) continue;
                LocalSymbolMap lsm = hf.getLocalSymbolMap();
                if (lsm.getNumParams() < 1) continue;
                HighParam p0 = lsm.getParam(0);   // HighParam IS a HighVariable
                if (p0 == null) continue;
                HighVariable thisVar = p0;
                Structure s;
                try {
                    s = helper.processStructure(thisVar, f, false, true, di);
                } catch (Throwable t) { continue; }
                if (s == null) continue;
                fnUsed++;
                for (DataTypeComponent c : s.getDefinedComponents()) {
                    long off = c.getOffset();
                    DataType dt = c.getDataType();
                    DataType prev = fields.get(off);
                    if (prev == null || dt.getLength() > prev.getLength()) {
                        fields.put(off, dt);
                    }
                    maxLen = Math.max(maxLen, off + Math.max(1, dt.getLength()));
                }
            }

            if (fields.isEmpty()) continue;
            classesDone++;
            fieldsTotal += fields.size();
            rep.println(String.format("%n== %s  (%d member fns, %d used, %d fields, ~0x%x bytes)",
                    cn, members.size(), fnUsed, fields.size(), maxLen));
            for (Map.Entry<Long, DataType> fe : fields.entrySet()) {
                rep.println(String.format("   +0x%-4x  %s", fe.getKey(), fe.getValue().getName()));
            }

            if (apply) {
                String sName = cn.replaceAll("[^A-Za-z0-9_]", "_") + "_data";
                StructureDataType sdt = new StructureDataType(sName, (int) Math.max(maxLen, 1));
                for (Map.Entry<Long, DataType> fe : fields.entrySet()) {
                    int off = (int) (long) fe.getKey();
                    DataType dt = fe.getValue();
                    int len = Math.max(1, dt.getLength());
                    if (off + len <= sdt.getLength()) {
                        try {
                            sdt.replaceAtOffset(off, dt, len, "field_0x" + Integer.toHexString(off), null);
                        } catch (Throwable ignore) { }
                    }
                }
                DataType applied = currentProgram.getDataTypeManager().addDataType(
                        sdt, DataTypeConflictHandler.REPLACE_HANDLER);
                DataType ptr = currentProgram.getDataTypeManager().getPointer(applied);
                for (Function f : members) {
                    try {
                        if (f.getParameterCount() >= 1) {
                            f.getParameter(0).setDataType(ptr, ghidra.program.model.symbol.SourceType.ANALYSIS);
                        }
                    } catch (Throwable ignore) { }
                }
                appliedStructs++;
            }
        }
        rep.close();
        di.dispose();
        println("RecoverStructs " + mode + " " + prog + ": " + classesDone + " classes, "
                + fieldsTotal + " fields" + (apply ? ", " + appliedStructs + " structs applied" : "")
                + " -> " + outDir);
    }
}
