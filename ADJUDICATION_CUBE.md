# Adjudication -- `Cube.exe`

The client does not have the server's conflict problem, and that is a measured
result rather than an assumption.

## 1. The xref's extraction is sound for the client

`raw/xref_citation_audit.md` re-checks every xref row against the doc:line it cites:

| binary | OK | OFF-BY-N | ABSENT |
|---|---|---|---|
| cube | **89** | 0 | 0 |
| server | 50 | **14** | 2 |

The off-by-one that filed proven worldgen functions as `lib_fn_*` is **server-only**.
No client row cites a line that does not contain its address.

## 2. No ledger-vs-RTTI conflicts

All 81 client ledger entries were checked against the 188 RTTI-recovered classes:
**zero overlap**. The two naming systems cover disjoint parts of the binary, so
there is nothing to adjudicate between them.

## 3. `plasma::` is first-party -- 282 disagreements resolved in our favour

qad3n files the 323 `plasma::` functions under `_library`. Three independent
pieces of evidence say they are the game's own engine layer:

- **`plasma::Widget::MemberFunctionConnection<cube::InventoryWidget>`** and the same
  template on `cube::GameController`, `cube::OptionsWidget`, `cube::CharacterStyleWidget`.
  Engine templates instantiated on *game* types -- the layers are compiled together
  from source, not linked as a third-party blob.
- **No Plasma licence ships with the game.** The folder carries `freeimage-license.txt`
  and `freetype-license.txt` for its real third-party dependencies. Nothing for Plasma.
- **`plasma::` does not appear in `Server.exe` at all** (its only namespaces are `std`,
  `cube`, `CRefTime`). It is the client's render/UI layer, not a general library.

The classes themselves -- `D3D9Engine`, `D3D9Texture`, `D3D9RenderSurface`, `Widget`,
`Button`, `CurveShape`, `Deformer`, `PlasmaFont`, `Vector`, `Matrix` -- are a complete
render + UI + scene-graph engine. They belong in the game tree.

Counter-evidence kept on the record: `CRefTime` (DirectShow) really is library code,
and qad3n had that right where our first pass did not.

## 4. The xref's `kind` column is wrong for 8 client rows

A citation can be accurate and still carry a wrong kind -- the audit in section 1
checks addresses, not kinds. These were filed `lib` while being plainly game code.
**qad3n had all of them right.** Verified by reading each body:

| addr | settled name | kind | evidence |
|---|---|---|---|
| `0x00439110` | math_round_to_tenth | gamemisc | `(int)(x*10 + 0.5) * 0.1` with a negative-input recursion. The game's own rounding helper, not a CRT routine -- so `lib` is wrong, but it is a utility, not game logic |
| `0x00446150` | Equipment_sum_slot_values | game | reads equipment slots at +0x530/+0x990/+0xaa8, tests type 3/4, sums Item_compute_value |
| `0x004a5710` | GameController_load_skill_tooltip | game | GameController member; the xref names it game logic yet files it lib |
| `0x004a62c0` | GameController_load_specialization_text | game | same -- name and kind contradict each other |
| `0x004c7830` | ItemData_vector_push_back | gamemisc | twin of the server's FUN_00528530: vector push_back with an 0x118 stride |
| `0x004c78c0` | Item_compute_value | game | switches on item type {3,4,5,6,7}, 0.1/0.2 weighting, `(field<<3) % 0x15` -- item valuation |
| `0x004c85f0` | App_render_frame | game | `timeGetTime()` delta accumulated into a global, then a virtual call at +0x28 -- the frame tick |
| `0x004c8940` | App_reset_device | game | `tagRECT` + device-state globals under a /GS frame -- D3D device reset |
| `0x004c8ae0` | WinMain | game | `WNDCLASSW` registration, `tagMSG` pump, `XAudio2Engine` local, window class "Cube", and the "Could not initialize Direct3D/DirectInput8/XAudio2" strings. The program entry point |
| `0x005f51e0` | item_build_5f51e0 | game | the even branch of item_special_candidate's coin flip -- twin of the server's FUN_00528bf0. FALSIFIES `GameController_buildDecalMesh`: it builds an ItemData, not a mesh (the xref already flags this row as a corpus conflict) |
| `0x005f6d50` | item_special_candidate | game | line-for-line the server's FUN_0052a760: zeroes an ItemData, memsets its 0x100 payload, coin-flips between two sub-generators, moves the kind byte to +8 and sets kind = 2. FALSIFIES the xref's `World_emitDecalOrParticle` |
| `0x005f7a60` | item_generator | game | twin of the server's FUN_0052b470: same 26 push_backs, same 111 rand() calls, identical per-push draw deltas [9,9,4x23,0], same 0x118 ItemData locals |
| `0x005f8530` | rarityRoll | game | body is line-for-line the server's FUN_0052bf40 = rarityRoll (4 draws, %100/%1000/%10000 bumps, clamp 4, param_2 override). FALSIFIES the xref's `WorldInfo_vectorElementAt` -- it indexes nothing |
| `0x005f8ad0` | item_build_5f8ad0 | game | the odd branch -- twin of the server's FUN_0052c4e0. FALSIFIES `GameController_buildDecalMesh2`, same evidence |

The other 8 `lib`-filed client entries are correct:

- `0x00528530` — sqlite3_mutex_enter_win -- genuinely SQLite
- `0x00673090` — stl_fn_673090 -- already pinned in the corpus as falsified-and-library
- `0x00674ee0` — std_vector_push_back_0xc -- genuinely STL

The remaining five are `lib_fn_*` placeholders that assert nothing; they stay as they are.

## Verdict summary

| | count |
|---|---|
| citations verified sound | 89 |
| ledger-vs-RTTI conflicts | 0 |
| `plasma::` disagreements resolved for us | 282 |
| kind corrections applied | 14 |
| lib classifications confirmed | 8 |
