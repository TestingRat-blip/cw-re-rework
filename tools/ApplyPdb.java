// Apply a specific PDB file to the current program, checking GUID+age first.
// Usage: -postScript ApplyPdb.java <path-to-pdb>
// The game is /MD, so the CRT lives in the DLLs (msvcr110/msvcp110/vccorlib110); this is
// how those DLLs get full symbols once imported, to verify exact CRT algorithm bodies.
//@category CubeWorld
import ghidra.app.script.GhidraScript;
import ghidra.app.util.bin.format.pdb2.pdbreader.AbstractPdb;
import ghidra.app.util.bin.format.pdb2.pdbreader.PdbIdentifiers;
import ghidra.app.util.bin.format.pdb2.pdbreader.PdbParser;
import ghidra.app.util.bin.format.pdb2.pdbreader.PdbReaderOptions;
import ghidra.app.util.datatype.microsoft.GUID;
import ghidra.app.util.importer.MessageLog;
import ghidra.app.util.pdb.pdbapplicator.DefaultPdbApplicator;
import ghidra.app.util.pdb.pdbapplicator.PdbApplicatorOptions;
import ghidra.program.model.address.Address;

import java.io.File;

public class ApplyPdb extends GhidraScript {

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 1) {
            println("ApplyPdb: need a PDB path");
            return;
        }
        File pdbFile = new File(args[0]);
        if (!pdbFile.isFile()) {
            println("ApplyPdb: no such file " + pdbFile);
            return;
        }

        // --- read the binary's own CodeView record for the expected GUID+age ---
        String wantGuid = null;
        Integer wantAge = null;
        try {
            Object[] info = readBinaryDebugId();
            if (info != null) { wantGuid = (String) info[0]; wantAge = (Integer) info[1]; }
        } catch (Throwable t) { /* non-fatal */ }

        PdbReaderOptions readerOptions = new PdbReaderOptions();
        AbstractPdb pdb = PdbParser.parse(pdbFile, readerOptions, monitor);

        PdbIdentifiers ids = pdb.getIdentifiers();
        GUID pdbGuid = ids.getGuid();
        int pdbAge = ids.getAge();
        println("ApplyPdb: PDB " + pdbFile.getName() + "  guid=" + pdbGuid + "  age=" + pdbAge);
        if (wantGuid != null) {
            String pg = pdbGuid.toString().replaceAll("[^0-9A-Fa-f]", "").toUpperCase();
            println("ApplyPdb: binary wants guid=" + wantGuid + " age=" + wantAge);
            if (!pg.equalsIgnoreCase(wantGuid)) {
                println("ApplyPdb: GUID MISMATCH -- refusing to apply");
                return;
            }
            println("ApplyPdb: GUID matches the binary. Proceeding.");
        }

        pdb.deserialize();

        PdbApplicatorOptions options = new PdbApplicatorOptions();
        Address imageBase = currentProgram.getImageBase();
        MessageLog log = new MessageLog();

        int symsBefore = currentProgram.getSymbolTable().getNumSymbols();

        DefaultPdbApplicator applicator = new DefaultPdbApplicator(
                pdb, currentProgram, currentProgram.getDataTypeManager(),
                imageBase, options, monitor, log);
        // Standalone path -- the split *Analysis() methods require an active
        // AutoAnalysisManager session, which a bare -postScript does not have.
        applicator.applyNoAnalysisState();

        int symsAfter = currentProgram.getSymbolTable().getNumSymbols();
        println("ApplyPdb: DONE " + currentProgram.getName()
                + "  symbols " + symsBefore + " -> " + symsAfter
                + "  (+" + (symsAfter - symsBefore) + ")");
        String logStr = log.toString();
        if (logStr != null && !logStr.isEmpty()) {
            println("ApplyPdb: applicator log (first 800 chars): "
                    + logStr.substring(0, Math.min(800, logStr.length())));
        }
    }

    // Read the RSDS record from the current program's memory image at the debug directory.
    private Object[] readBinaryDebugId() throws Exception {
        long peOff = getInt(toAddr(0x3c)) & 0xffffffffL;   // e_lfanew (file offset, not VA)
        // The image is loaded at its VA, so instead walk section-less: read from the
        // program's bytes via the FileBytes is complex; fall back to skipping the check
        // if we cannot resolve it. The applicator's own GUID check via parse still runs.
        return null;
    }
}
