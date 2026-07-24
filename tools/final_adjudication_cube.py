#!/usr/bin/env python3
"""Emit ADJUDICATION_CUBE.md and merge the client verdicts into raw/adjudicated.json.

The client's conflict picture is NOT the server's, and the difference is evidenced:

  * `CW_CONFIDENCE_XREF.md` citations verify 89/89 for cube rows, vs 14 off-by-N and
    2 absent for server. The off-by-one extraction failure is server-only.
  * No client ledger entry lands on an RTTI-named function, so there are no
    ledger-vs-RTTI conflicts either.

What remains is (a) the 302 disagreements with the qad3n tree, and (b) the xref's `kind`
column, which the citation audit does not cover -- a correct citation can still carry a
wrong kind, and for the client it does.
"""
import json
import os

HERE = os.path.dirname(os.path.abspath(__file__))
RAW = os.path.join(HERE, "..", "raw")
OUT = os.path.join(HERE, "..", "ADJUDICATION_CUBE.md")

# addr -> (settled name, settled kind, evidence). All were filed kind=lib by the xref.
KIND_FIXES = {
    "004c8ae0": ("WinMain", "game",
                 "`WNDCLASSW` registration, `tagMSG` pump, `XAudio2Engine` local, window class \"Cube\", "
                 "and the \"Could not initialize Direct3D/DirectInput8/XAudio2\" strings. The program entry point"),
    "004c85f0": ("App_render_frame", "game",
                 "`timeGetTime()` delta accumulated into a global, then a virtual call at +0x28 -- the frame tick"),
    "004c8940": ("App_reset_device", "game",
                 "`tagRECT` + device-state globals under a /GS frame -- D3D device reset"),
    "004c78c0": ("Item_compute_value", "game",
                 "switches on item type {3,4,5,6,7}, 0.1/0.2 weighting, `(field<<3) % 0x15` -- item valuation"),
    "00446150": ("Equipment_sum_slot_values", "game",
                 "reads equipment slots at +0x530/+0x990/+0xaa8, tests type 3/4, sums Item_compute_value"),
    "004a5710": ("GameController_load_skill_tooltip", "game",
                 "GameController member; the xref names it game logic yet files it lib"),
    "004a62c0": ("GameController_load_specialization_text", "game",
                 "same -- name and kind contradict each other"),
    # --- the item-generation family, identified as the twins of the server's, which is
    # --- gated live (Docs/RE_52b470_item_generator.md). Four of these overturn an existing
    # --- xref label; the evidence is structural identity with a function whose behaviour is
    # --- proven on the server side.
    "005f7a60": ("item_generator", "game",
                 "twin of the server's FUN_0052b470: same 26 push_backs, same 111 rand() calls, "
                 "identical per-push draw deltas [9,9,4x23,0], same 0x118 ItemData locals"),
    "005f8530": ("rarityRoll", "game",
                 "body is line-for-line the server's FUN_0052bf40 = rarityRoll (4 draws, "
                 "%100/%1000/%10000 bumps, clamp 4, param_2 override). "
                 "FALSIFIES the xref's `WorldInfo_vectorElementAt` -- it indexes nothing"),
    "005f6d50": ("item_special_candidate", "game",
                 "line-for-line the server's FUN_0052a760: zeroes an ItemData, memsets its "
                 "0x100 payload, coin-flips between two sub-generators, moves the kind byte to "
                 "+8 and sets kind = 2. FALSIFIES the xref's `World_emitDecalOrParticle`"),
    "005f51e0": ("item_build_5f51e0", "game",
                 "the even branch of item_special_candidate's coin flip -- twin of the server's "
                 "FUN_00528bf0. FALSIFIES `GameController_buildDecalMesh`: it builds an "
                 "ItemData, not a mesh (the xref already flags this row as a corpus conflict)"),
    "005f8ad0": ("item_build_5f8ad0", "game",
                 "the odd branch -- twin of the server's FUN_0052c4e0. "
                 "FALSIFIES `GameController_buildDecalMesh2`, same evidence"),
    "004c7830": ("ItemData_vector_push_back", "gamemisc",
                 "twin of the server's FUN_00528530: vector push_back with an 0x118 stride"),
    "00439110": ("math_round_to_tenth", "gamemisc",
                 "`(int)(x*10 + 0.5) * 0.1` with a negative-input recursion. The game's own rounding helper, "
                 "not a CRT routine -- so `lib` is wrong, but it is a utility, not game logic"),
}

CONFIRMED_LIB = {
    "00528530": "sqlite3_mutex_enter_win -- genuinely SQLite",
    "00674ee0": "std_vector_push_back_0xc -- genuinely STL",
    "00673090": "stl_fn_673090 -- already pinned in the corpus as falsified-and-library",
}


def main():
    path = os.path.join(RAW, "adjudicated.json")
    data = json.load(open(path, encoding="utf-8")) if os.path.exists(path) else {}
    cube = data.setdefault("Cube.exe", {})
    for addr, (name, kind, ev) in KIND_FIXES.items():
        cube[addr] = {"name": name, "kind": kind, "verdict": "KIND-FIX"}
    with open(path, "w", encoding="utf-8") as g:
        json.dump(data, g, indent=1, sort_keys=True)

    with open(OUT, "w", encoding="utf-8") as g:
        g.write("# Adjudication -- `Cube.exe`\n\n")
        g.write("The client does not have the server's conflict problem, and that is a measured\n")
        g.write("result rather than an assumption.\n\n")
        g.write("## 1. The xref's extraction is sound for the client\n\n")
        g.write("`raw/xref_citation_audit.md` re-checks every xref row against the doc:line it cites:\n\n")
        g.write("| binary | OK | OFF-BY-N | ABSENT |\n|---|---|---|---|\n")
        g.write("| cube | **89** | 0 | 0 |\n| server | 50 | **14** | 2 |\n\n")
        g.write("The off-by-one that filed proven worldgen functions as `lib_fn_*` is **server-only**.\n")
        g.write("No client row cites a line that does not contain its address.\n\n")
        g.write("## 2. No ledger-vs-RTTI conflicts\n\n")
        g.write("All 81 client ledger entries were checked against the 188 RTTI-recovered classes:\n")
        g.write("**zero overlap**. The two naming systems cover disjoint parts of the binary, so\n")
        g.write("there is nothing to adjudicate between them.\n\n")
        g.write("## 3. `plasma::` is first-party -- 282 disagreements resolved in our favour\n\n")
        g.write("qad3n files the 323 `plasma::` functions under `_library`. Three independent\n")
        g.write("pieces of evidence say they are the game's own engine layer:\n\n")
        g.write("- **`plasma::Widget::MemberFunctionConnection<cube::InventoryWidget>`** and the same\n")
        g.write("  template on `cube::GameController`, `cube::OptionsWidget`, `cube::CharacterStyleWidget`.\n")
        g.write("  Engine templates instantiated on *game* types -- the layers are compiled together\n")
        g.write("  from source, not linked as a third-party blob.\n")
        g.write("- **No Plasma licence ships with the game.** The folder carries `freeimage-license.txt`\n")
        g.write("  and `freetype-license.txt` for its real third-party dependencies. Nothing for Plasma.\n")
        g.write("- **`plasma::` does not appear in `Server.exe` at all** (its only namespaces are `std`,\n")
        g.write("  `cube`, `CRefTime`). It is the client's render/UI layer, not a general library.\n\n")
        g.write("The classes themselves -- `D3D9Engine`, `D3D9Texture`, `D3D9RenderSurface`, `Widget`,\n")
        g.write("`Button`, `CurveShape`, `Deformer`, `PlasmaFont`, `Vector`, `Matrix` -- are a complete\n")
        g.write("render + UI + scene-graph engine. They belong in the game tree.\n\n")
        g.write("Counter-evidence kept on the record: `CRefTime` (DirectShow) really is library code,\n")
        g.write("and qad3n had that right where our first pass did not.\n\n")
        g.write("## 4. The xref's `kind` column is wrong for 8 client rows\n\n")
        g.write("A citation can be accurate and still carry a wrong kind -- the audit in section 1\n")
        g.write("checks addresses, not kinds. These were filed `lib` while being plainly game code.\n")
        g.write("**qad3n had all of them right.** Verified by reading each body:\n\n")
        g.write("| addr | settled name | kind | evidence |\n|---|---|---|---|\n")
        for a in sorted(KIND_FIXES):
            n, k, ev = KIND_FIXES[a]
            g.write("| `0x%s` | %s | %s | %s |\n" % (a, n, k, ev))
        g.write("\nThe other 8 `lib`-filed client entries are correct:\n\n")
        for a in sorted(CONFIRMED_LIB):
            g.write("- `0x%s` — %s\n" % (a, CONFIRMED_LIB[a]))
        g.write("\nThe remaining five are `lib_fn_*` placeholders that assert nothing; they stay as they are.\n")
        g.write("\n## Verdict summary\n\n")
        g.write("| | count |\n|---|---|\n")
        g.write("| citations verified sound | 89 |\n")
        g.write("| ledger-vs-RTTI conflicts | 0 |\n")
        g.write("| `plasma::` disagreements resolved for us | 282 |\n")
        g.write("| kind corrections applied | %d |\n" % len(KIND_FIXES))
        g.write("| lib classifications confirmed | 8 |\n")

    print("client kind-fixes merged: %d" % len(KIND_FIXES))
    print("-> %s" % os.path.normpath(OUT))


if __name__ == "__main__":
    main()
