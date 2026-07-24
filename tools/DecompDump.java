// Bulk-decompile every function. Emits <outdir>/<Program>.decomp.jsonl  {addr,name,proto,c}
// Multi-threaded: one DecompInterface per worker (DecompInterface is not thread-safe).
// Usage: -postScript DecompDump.java <outdir> [threads]
//@category CubeWorld
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileOptions;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.listing.Function;
import ghidra.util.task.TaskMonitor;

import java.io.*;
import java.util.*;
import java.util.Set;
import java.util.HashSet;
import java.util.concurrent.*;
import java.util.concurrent.atomic.AtomicInteger;

public class DecompDump extends GhidraScript {

    private static String esc(String s) {
        if (s == null) return "";
        StringBuilder b = new StringBuilder(s.length() + 32);
        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            switch (c) {
                case '"':  b.append("\\\""); break;
                case '\\': b.append("\\\\"); break;
                case '\n': b.append("\\n");  break;
                case '\r': break;
                case '\t': b.append("\\t");  break;
                default:
                    if (c < 0x20) b.append(' ');
                    else if (c > 0x7e) b.append(String.format("\\u%04x", (int) c));
                    else b.append(c);
            }
        }
        return b.toString();
    }

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        File outDir = new File(args.length > 0 ? args[0] : System.getProperty("user.home"));
        outDir.mkdirs();
        int nThreads = args.length > 1 ? Integer.parseInt(args[1]) : 6;
        String prog = currentProgram.getName();

        // Usage: <outdir> [threads] [limit] [timeoutSec] [addr...]
        // Trailing addresses restrict the pass to those entry points -- a retry lane for
        // functions that blow the default timeout (the big worldgen routines do).
        // NOTE: analyzeHeadless splits script args on commas, so addresses must be passed
        // as separate trailing arguments, never as one comma-separated string.
        int limit = args.length > 2 ? Integer.parseInt(args[2]) : Integer.MAX_VALUE;
        final int timeoutSec = args.length > 3 ? Integer.parseInt(args[3]) : 60;
        final Set<String> only = new HashSet<>();
        for (int i = 4; i < args.length; i++) {
            if (!args[i].trim().isEmpty()) only.add(args[i].trim().toLowerCase());
        }
        final String suffix = only.isEmpty() ? "" : ".retry";

        // special token "@members": restrict to functions in a non-global, non-DLL
        // namespace (the RTTI classes) — the set whose `this` type the struct pass changed.
        boolean membersOnly = only.remove("@members");
        final List<Function> funcs = new ArrayList<>();
        for (Function f : currentProgram.getFunctionManager().getFunctions(true)) {
            if (f.isExternal()) continue;
            if (!only.isEmpty() && !only.contains(f.getEntryPoint().toString().toLowerCase())) continue;
            if (membersOnly) {
                ghidra.program.model.symbol.Namespace ns = f.getParentNamespace();
                if (ns == null || ns.isGlobal()) continue;
                String cn = ns.getName(true);
                if (cn.startsWith("std::") || cn.toUpperCase().contains(".DLL")) continue;
            }
            funcs.add(f);
            if (funcs.size() >= limit) break;
        }
        final int total = funcs.size();
        println("DecompDump " + prog + ": " + total + " functions on " + nThreads + " threads");

        final PrintWriter out = new PrintWriter(new BufferedWriter(
                new OutputStreamWriter(new FileOutputStream(new File(outDir, prog + ".decomp" + suffix + ".jsonl")), "UTF-8"), 1 << 22));
        final Object lock = new Object();
        final AtomicInteger done = new AtomicInteger();
        final AtomicInteger failed = new AtomicInteger();
        final AtomicInteger next = new AtomicInteger();

        ExecutorService pool = Executors.newFixedThreadPool(nThreads);
        List<Future<?>> futures = new ArrayList<>();
        for (int t = 0; t < nThreads; t++) {
            futures.add(pool.submit(new Runnable() {
                public void run() {
                    DecompInterface di = new DecompInterface();
                    DecompileOptions opts = new DecompileOptions();
                    di.setOptions(opts);
                    di.toggleCCode(true);
                    di.toggleSyntaxTree(true);
                    di.setSimplificationStyle("decompile");
                    if (!di.openProgram(currentProgram)) return;
                    try {
                        while (true) {
                            int i = next.getAndIncrement();
                            if (i >= total) break;
                            Function f = funcs.get(i);
                            String c = null;
                            try {
                                DecompileResults r = di.decompileFunction(f, timeoutSec, TaskMonitor.DUMMY);
                                if (r != null && r.decompileCompleted() && r.getDecompiledFunction() != null) {
                                    c = r.getDecompiledFunction().getC();
                                }
                            } catch (Throwable ignored) { }
                            if (c == null) { failed.incrementAndGet(); c = ""; }
                            StringBuilder b = new StringBuilder(c.length() + 256);
                            b.append("{\"addr\":\"").append(f.getEntryPoint()).append('"');
                            b.append(",\"name\":\"").append(esc(f.getName())).append('"');
                            b.append(",\"proto\":\"").append(esc(f.getSignature().getPrototypeString(true))).append('"');
                            b.append(",\"c\":\"").append(esc(c)).append("\"}");
                            String line = b.toString();
                            synchronized (lock) { out.println(line); }
                            int d = done.incrementAndGet();
                            if ((d % 500) == 0) {
                                synchronized (lock) { out.flush(); }
                                println("DecompDump " + prog + ": " + d + "/" + total + " (" + failed.get() + " failed)");
                            }
                        }
                    } finally {
                        di.dispose();
                    }
                }
            }));
        }
        pool.shutdown();
        for (Future<?> f : futures) { try { f.get(); } catch (Exception ignored) { } }
        pool.awaitTermination(10, TimeUnit.MINUTES);
        out.close();
        println("DecompDump DONE " + prog + ": " + done.get() + "/" + total + ", " + failed.get() + " failed -> " + outDir);
    }
}
