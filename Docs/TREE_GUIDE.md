# `cw_decomp` — fresh decompilation and structuring of Cube World alpha

A from-scratch reconstruction of `Cube.exe` and `Server.exe` into an organised source tree,
built from our own Ghidra analysis and our own proven-label ledger.

This is **not** `tools/Source_check`. That tree is qad3n's third-party decompile, kept as a
lead map; the standing assessment is *bodies reliable, labels and `_library` placement not*
(6/7 worldgen labels were wrong). This tree is laid out the same way on purpose so the two
can be diffed file-for-file, but every identity here is attributed from our own evidence.

## Status — complete (2026-07-23)

| | `Server.exe` | `Cube.exe` |
|---|---|---|
| functions | 6,268 | 13,011 |
| decompiled | 6,268 (4 failed) | 13,011 (9 failed) |
| RTTI classes recovered | 55 | 188 |
| emitted `.cpp` files | 79 | 200 |
| unattributed | 2,433 | 5,094 |

279 files, 39 MB of organised pseudo-C; 40 MB of raw JSONL behind it. Largest single
file 1.35 MB — files are capped on both function count (200) and bytes (1.5 MB),
because Ghidra boundary artifacts decompile to half-megabyte bodies and once made a
10.9 MB file.

### Attribution provenance

| source | server | cube | |
|---|---|---|---|
| `eh` | 3,388 | 7,005 | MSVC `/EHsc` funclets — identified *because* the toolchain is pinned |
| `none` | 2,010 | 3,197 | no claim made; see `GAP_ANALYSIS.md` |
| `caller-vote` | 413 | 1,862 | unanimous callers, heuristic |
| `rtti` | 71 | 511 | recovered class architecture |
| `ledger` | 129 | 81 | our bit-exact / live-gated identities |
| `stl-ns` + `import-ns` | 188 | 244 | STL and DLL imports |
| `lib-string` + `crt-name` | 68 | 68 | static third-party by signature |
| `rtti-lib-ns` | 1 | 43 | `Concurrency::` (VC11 PPL), `CRefTime` (DirectShow) |

59% of the server and 57% of the client is compiler/library scaffolding rather than
game code — dominated by the 10,393 exception funclets across both binaries.

## Why a fresh pass

`CubeAudit` was fully auto-analysed but **RTTI class recovery had never been run on it** —
a metadata dump found only 115 namespaced functions, and those were imports. The 3,394
"named" functions were auto-generated `Catch_All@…` exception funclets, not real names.
The class architecture that makes a tree navigable simply was not there.

Three things we have now that the earlier passes did not:

- **The toolchain is identified** — MSVC 11.0 (VS2012), `/MD /EHsc /GS /sdl- /SAFESEH`.
  See `../msvc_vs2012_rtm/README.md`. That tells us what is game code and what is compiler
  scaffolding, which is exactly where qad3n's `_library` placement went wrong.
- **The exact CRT symbols** — `../crt_symbols/`, GUID-verified against the shipped DLLs.
  Every call across the CRT boundary can be named rather than guessed.
- **The VC11 headers and CRT source** — `../msvc_vs2012_rtm/vc11_librarycore86/`. Inlined
  STL and `<cmath>` code can be recognised as library code instead of being mistaken for
  game logic.

## Pipeline

**Full narrative with per-tool rationale and next steps: [`PIPELINE.md`](PIPELINE.md).**

The Ghidra project here is a **copy** of `tools/ghidra_proj/CubeAudit` (208 MB), so the
permanent project is never mutated. Re-analysis was deliberately avoided: a fresh import
wedged on a `VarnodeContext` error, and the stored analysis is known-good and matches the
qad3n function counts exactly (12,983 / 6,152).

```bash
# 1. consolidate every proven identity in the corpus -> raw/labels.json
python tools/harvest_labels.py

# 2. per-function metadata (fast, no decompilation)
analyzeHeadless.bat ghidra CubeAudit -process Server.exe -noanalysis \
    -scriptPath tools -postScript MetaDump.java raw

# 3. RTTI class recovery -- supplies the class architecture
analyzeHeadless.bat ghidra CubeAudit -process Server.exe -noanalysis \
    -postScript RecoverClassesFromRTTIScript.java

# 4. bulk decompile (multi-threaded; args = outdir, threads, [limit])
analyzeHeadless.bat ghidra CubeAudit -process Server.exe -noanalysis \
    -scriptPath tools -postScript DecompDump.java raw 6

# 5. emit the organised tree
python tools/structure.py
```

Repeat 2–4 with `-process Cube.exe`.

## Layout

```
tools/      the pipeline (2 Ghidra scripts, 2 Python passes)
ghidra/     copy of the CubeAudit project — analysis + recovered classes
raw/        intermediate JSONL: metadata, decompiled bodies, label ledger
cube/       client tree      \  world/ entity/ ai/ db/ net/ ui/ render/ audio/
server/     server tree      /  control/ game_misc/ _library/ include/
```

Each binary folder carries:

- `attribution.tsv` — every function: address, name, kind, module, class, **and how it was
  attributed** (`ledger` / `rtti` / `crt-name` / `lib-string` / `eh` / `none`). That last
  column is the point: it makes the confidence of every placement visible, which is what
  the qad3n tree lacked.
- `GAP_ANALYSIS.md` — unnamed non-library functions ordered by size, with caller/callee
  counts and sample strings. The big ones are where the remaining game logic is.

## Attribution order

1. **Our proven ledger** (`raw/labels.json`) — bit-exact / live-gated identities. Outranks everything.
2. **Static-library islands** (`lib-island`) — SQLite / FreeType carved as contiguous linker
   blocks (`flirt_islands.py`, `raw/libislands_report.md`).
3. **RTTI** — the class architecture, recovered from intact `cube::` type info.
4. **Library detection** — CRT/STL name shapes, import namespaces, MSVC EH funclets, other
   static third-party by string signature. (`zlib` is dynamically linked — resolved by import.)
5. **Unattributed** — lands in `game_misc/Unsorted` and is listed in `GAP_ANALYSIS.md`.

Nothing here is a guess presented as a fact: if a name came from a heuristic, the
`attributed_by` column says so.

### Namespace evidence

Top-level RTTI namespaces, split by count rather than assumption (`Cube.exe`):
`plasma` 323, `cube` 167, `std` 96, `Concurrency` 41, `abstr` 21, `CRefTime` 1, `type_info` 1.

- **`plasma` / `abstr` — first-party.** Wollay's own engine layer: `Widget`, `Button`,
  `Edit`, `ScrollSlider`, `MeshShape`, `D3D9Engine`, `PlasmaFont`. qad3n filed these as
  `_library`; they are game code, and they are the bulk of our 282 client disagreements.
- **`Concurrency` — library.** Microsoft PPL (`<ppl.h>`), ships with VC11. We only know
  that because the toolchain is pinned to MSVC 11.0.
- **`CRefTime` — library.** A DirectShow base class. qad3n got this right and our first
  pass got it wrong: "RTTI namespace ⇒ game code" is too permissive.

## Cross-check against qad3n (`COMPARISON_vs_Source_check.md`)

| | server | cube |
|---|---|---|
| functions in both trees | 6,152 | 12,983 |
| agree on game-vs-library | 4,023 (65.4%) | 9,017 (69.5%) |
| **genuine conflicts** | **44** | **302** |
| we left unattributed — no claim | 2,085 | 3,664 |

The unattributed column is reported separately on purpose. Counting it as
"disagreement" would inflate the conflict figure to 2,130 / 3,966 and imply our tree
contradicts theirs where in fact it asserts nothing.

## Known-good and known-bad

- `ADJUDICATION.md` — **all 113 conflicts settled** against the decompiled body (or the
  raw bytes where the decompiler lied): B 48, neither 32, A 15, unresolved 10,
  compatible 4, kind-only 4. The 73 settled identities feed back as the top-authority
  ledger, so the tree reflects the verdicts rather than whichever source won precedence.
  Unresolved cases stay unattributed on purpose. `raw/label_conflicts.md` is the raw input.

  **The 14 off-by-N rows have been fixed at source** (`raw/xref_fixes_applied.md`;
  backup at `docs/CW_CONFIDENCE_XREF.md.bak`). Re-audit: server went from
  50 OK / 14 off-by-N / 2 absent to **64 OK / 0 off-by-N / 2 absent**, with the row and
  line counts unchanged. Two rows changed name outright rather than just kind:

  - `0x522840` was `World_computeSlopeShade`; the cited line reads *biome-border
    `FUN_00522840` 100/100*. It is `biome_border` — a wrong identity, not a wrong kind.
  - `0x54a946` was `ftol2_round`; its own evidence quote reads *TRUNCATE toward zero
    (proven: 303/303 exact 16.16 positions)*, corroborated at `CW_RE_SOURCE.md:783`
    and `:4593`. Rounding and truncation are not interchangeable in a bit-exact port.

  Nine more were `lib_fn_*`/`lib` placeholders sitting on proven game code —
  `temperature_blend` (40/40 live), `town_builder`, `ground_knoll` (60521/60521),
  `feature_count_range`, `house_furniture_placer`, `dungeon_scatter_emitter`,
  `world_create`. Three had no identity in the source at all and are now named
  `UNRESOLVED_*` rather than carrying an unearned `lib`.

  **A stale upstream line was found and flagged, not silently propagated.**
  `CW_RE_MASTER_INDEX.md:161` still calls `0x4ffbf0` a *tree/canopy ellipsoid*; that was
  corrected to the ground **knoll** on 2026-07-18 (`CWGEN_PORT_FOREST_CPP_NEXT.md:41`).
  Applying the cited line verbatim would have reintroduced a falsified label, so the xref
  row carries a `[CORRECTED …]` marker and the master-index line remains stale upstream.

  Two rows keep unreliable citations: `0x4286f0` and `0x52a830` cite lines their address
  does not appear at or near. Both labels are independently confirmed (the first from the
  decompiled body, the second from its own note plus `CW_DUNGEON_DECORATION_RE.md:23`),
  so the labels stand while the citations do not.

  Two systematic failures, in opposite directions:
  - **`CW_CONFIDENCE_XREF.md`'s `lib_fn_*` rows are an extraction artifact.** `0x4f9010`,
    `0x5234b0`, `0x5236d0` are filed `lib`, each citing `CW_RE_MASTER_INDEX.md:158` —
    while line **159** of that same file records them as *room carve / corridor / seg
    carve, bit-exact vs captures*. Off by one row. `0x518630`, `0x4e28e0` and `0x500300`
    (zone/town/dungeon builders) are mislabelled the same way.
  - **`cw_callgraph.py` gives game semantics to STL/CRT primitives.** `0x4013f0` is
    `std::vector<int>` indexing, not `model_db_lookup`; `0x428590`/`0x528450` are
    `std::list::push_back` (confirmed at `VC/include/list:1951`), not `conn_edge_append`
    and `prop_scatter`.

  Neither source is reliable as a whole; reading the body was the only way to settle them.

- `ADJUDICATION_CUBE.md` — the client, adjudicated separately because **its conflict
  picture is genuinely different, and that is measured rather than assumed**:

  - `raw/xref_citation_audit.md` re-checks every xref row against the doc:line it cites.
    Cube: **89 OK, 0 off-by-N, 0 absent.** Server: 50 OK, **14 off-by-N**, 2 absent.
    The extraction failure is server-only.
  - Zero of the 81 client ledger entries land on an RTTI-named function, so there are no
    ledger-vs-RTTI conflicts either.
  - **`plasma::` is first-party** — settling 282 of the 302 disagreements with qad3n in
    our favour. Evidence: engine templates instantiated on game types
    (`plasma::Widget::MemberFunctionConnection<cube::InventoryWidget>`); no Plasma licence
    ships while FreeImage and FreeType both do; and `plasma::` is absent from `Server.exe`
    entirely. It is the client's render/UI layer, and it now has its own `engine/` folder.
  - **8 kind corrections.** A citation can be accurate and still carry a wrong kind — the
    audit checks addresses, not kinds. `WinMain`, `App_render_frame`, `App_reset_device`,
    `Item_compute_value`, `Equipment_sum_slot_values` and three others were filed `lib`.
    `0x4c8ae0` registers a `WNDCLASSW`, pumps `tagMSG`, builds an `XAudio2Engine` and
    carries the "Could not initialize Direct3D" strings. qad3n had all eight right.
- **Orphans.** `GAP_ANALYSIS.md` flags unnamed functions with zero callers. At
  0.4–0.5 MB of decompiled output apiece and unaligned entry points (`0x4eaa7a`,
  `0x4e310a`, …) these are almost certainly `/EHsc` landing pads and `/GS` epilogues
  that Ghidra split off, not real routines. Treat one as a fragment of its preceding
  function until shown otherwise.
- **Bodies are pseudo-C and do not compile.** Same caveat as the qad3n tree.
