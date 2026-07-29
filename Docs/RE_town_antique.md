# The town builder's ANTIQUE-BUILDING placements — `0x4eee3e`-`0x4ef248`

*Gate:* `tools/gate_town_antique.py` — **290 checks, 0 FAIL**, 45 placements over 45 ruin
plots, every position predicted exactly.
*Source data:* `raw/town_props_capture*.json` (`tools/frida_town_props.py`, seed 42069) and
`cw_rederive/model_id_map.json`.
*Status:* ✅ **PORTED 2026-07-29d** — `townAntiquePass` in `CwTown.h`, ab-initio gate
`rederive_townantique` **62/62**: 31/31 site sequences and **45/45 placements, 270 fields**,
every X/Y predicted exactly with no terrain. §6 records what it needed.

★ **These are the LAST two rand sites in the town builder.** With them closed the census is
**176 of 176 firing sites and 228,413 of 228,413 recorded draws — 100.00%.**

---

## 0. What they are

Two plot-role sections, structurally identical, differing in exactly one instruction — the
coin's mask:

| span | gate | model | plots |
|---|---|---|---|
| `0x4eee3e`-`0x4ef02d` | `plot[+0xc] == 0x14` | `0x84c + rand() % 2` | 31 |
| `0x4ef02d`-`0x4ef248` | `plot[+0xc] == 0x12` | `0x84c + rand() % 4` | 14 |

Each places **one model at the centre of its plot**:

```
m    = vector<Model*>::at(world + 0x1c, 0x84c + rand() % K)     the world MODEL DB
w, h = m->[+0x44], m->[+0x48]              swapped when plot[+0x14] is odd
pos  = (plotCentreX - w/2, plotCentreY - h/2, plot[+4])
while (!World_getBlockAt(pos).isSolid()) pos.z--            drop to the ground
creature_spawn_builder(m, &pos, plot[+0x14], 6, 0, site, 1, &zeroVec4, 0)
```

Both moduli are read out of the **`and` mask**, not a `div`: MSVC compiles a signed `% 2`
and `% 4` to `and eax, 0x80000001` / `and eax, 0x80000003` plus a sign fixup, so a census
looking for `idiv` finds nothing to read.

## 1. ★ A correction: they are not NPC spawns

`RE_town_plaza.md` §9 named these *"the role-`0x14` and role-`0x12` plots' **town NPC**
spawns"*, and the handoff has carried that phrasing since. They place **buildings**:

| id | model | `.cub` dims |
|---|---|---|
| `0x84c` | `antique-building1.cub` | 32 × 32 × 32 |
| `0x84d` | `antique-building2.cub` | 32 × 32 × 22 |
| `0x84e` | `antique-building3.cub` | 24 × 24 × 38 |
| `0x84f` | `antique-building4.cub` | 24 × 24 × 18 |

Three things converge on that and none of them is the name:

* the call's `type` argument is a **constant 0** in all 45 records, and `FUN_00524540` is
  the **generic** entity builder — `RE_524540_creature_spawn.md` documents it as taking a
  source, a position and a model byte, not as creature-only;
* the ids resolve through `model_id_map.json` (2,550 live model pointers joined to the
  loader, dims verified 2,529/2,550 against the decoded `.cub` files) to
  `antique-building1..4`;
* **roles `0x12` and `0x14` occur in RUINS and in no village** — 14 and 31 plots, 0
  elsewhere in 92 towns. So what these two sites place is the ruined buildings a ruin is
  made of, which is exactly what a plot role that only ruins ever receive should place.

The old name was a guess made from the callee's label (`creature_spawn_builder`) rather
than from its arguments. Lesson 25's shape, one level up: **a callee's name is evidence
about the callee, not about what this caller is using it for.**

## 2. ★ The geometry closes against a second, independent source

The position is the plot centre minus **half the model's own footprint**, so the live spawn
positions *measure* the model's width and height. Grouping the 45 records by the coin's
recorded value gives one offset per group and only two distinct values:

| role | coin | measured offset |
|---|---|---|
| `0x14` | 0, 1 | **(−16, −16)** |
| `0x12` | 0, 1 | **(−16, −16)** |
| `0x12` | 2, 3 | **(−12, −12)** |

and `model_id_map.json`, which knows nothing about this pass, says `0x84c`/`0x84d` are 32
wide and `0x84e`/`0x84f` are 24 — i.e. −16 and −12. **Two independent sources, same
numbers.**

Feeding the map's dims in, the plot lattice predicts **all 45 spawn positions exactly**:

```
X = zone.x*256 + span/2 + (r*256)/n - w/2
Y = zone.z*256 + span/2 + (c*256)/n - h/2      span = 256/n, plot index = r + n*c
```

— the same lattice `RE_town_market.md` §5 established and `rederive_townlattice` derives, so
nothing here is fitted.

The rotation is direct too: the recorded `orient` argument equals **`plot[+0x14]`** in
45 of 45, taking values 0-3.

## 3. What the data does NOT pin

* **Role `0x14`'s coin is unobservable.** `0x84c` and `0x84d` have the *same* X/Y footprint
  (32 × 32), so its `% 2` moves no position at all — 31 of the 45 records cannot tell its
  two models apart. Role `0x12`'s `% 4` is observable only as a **2-way** split (0/1 → 32
  wide, 2/3 → 24). The mask and the base index are byte-read from the binary; what the data
  confirms is the *footprint*, not the individual id.
* **The w/h swap on an odd `plot[+0x14]` is invisible**, because all four models are square
  in X/Y. It is disassembled, not measured — lesson 13's shape, a transform no observable
  here can see. (It would matter for any model family that is not square.)
* **The third `.cub` dimension is never read** by this span: the placement centres in X/Y
  and drops to the ground.

## 4. Numbers

| | |
|---|---|
| span | `0x4eee3e`-`0x4ef248` |
| rand sites | **2** — `0x4eee4f` (`%2`) and `0x4ef03e` (`%4`) |
| recorded draws | **45** — 31 + 14, one per plot |
| spawns | **45**, one per plot, `creature_spawn_builder` at `0x4ef01c` / `0x4ef20b` |
| models | `antique-building1` ×20, `2` ×18, `3` ×3, `4` ×4 |
| gate | `gate_town_antique.py`, **290 ok / 0 FAIL** |

## 5. ★ The town builder is CLOSED

Same span census as `RE_town_plaza.md` §9, re-run over every corrected span:

| span | sites | draws |
|---|---|---|
| scan/verdict `0x4e2a80`-`0x4e3093` | 3 | 3,310 |
| promotion `0x4e3095`-`0x4e39e9` | 12 | 280 |
| market `0x4e3a3f`-`0x4e5023` | 40 | 218 |
| role-6 yard `0x4e503a`-`0x4e5b9e` | 14 | 113,353 |
| house `0x4e6520`-`0x4e74a5` | 13 | 17,947 |
| house entity `0x4e74a5`-`0x4ea988` | 11 | 7,597 |
| furnishing `0x4ead3a`-`0x4ecf20` | 13 | 8,717 |
| surround `0x4ecfb5`-`0x4ed9ea` | 8 | 6,408 |
| inhabitants `0x4eda0b`-`0x4edcbf` | 4 | 4,099 |
| **antique buildings `0x4eee3e`-`0x4ef248`** | **2** | **45** |
| plaza `0x4ef248`-`0x4f0046` | 7 | 56,181 |
| village NPC `0x4f0046`-`0x4f16b6` | 38 | 7,386 |
| ruin occupants `0x4f16bb`-`0x4f2b45` | 11 | 2,872 |

**176 of 176 firing sites, 228,413 of 228,413 recorded draws — 100.00%. Nothing is open.**

⚠ That is a statement about the **recorded** stream. Three stages spend draws in callees the
rig's filter cannot list — the furnishing factory (`RE_town_furnish.md`), the surround
factory (`RE_town_surround.md`), the market's two factories (`RE_town_market.md`) and the
NPC pass's three occupant initialisers (`RE_town_npcs.md`) — plus the seven sites past the
old body bound (`RE_town_ruin.md` §2). All of those are priced or derived in their own
files, but none of them is in the 228,413.

⚠ And **RE-closed is not PORT-closed.** Five stages are gated and unported: house entity,
house surround, village NPC, ruin occupants, and the market. That is the remaining town
work, and it is larger than anything left to decode.

## 6. The PORT

✅ **Ported 2026-07-29d** as `townAntiquePass` in `src/worldgen/cw/CwTown.h`; ab-initio gate
`gateRederiveTownAntique` (section 68), golden built by
`tools/cw_rederive/make_townantique_golden.py`.

| input | status |
|---|---|
| the plot roles `0x12` / `0x14`, `plot[+0x14]`, `plot[+4]` | **FED** — the first two are the promotion pass's, `maxH` is region-cache-blocked |
| the plot lattice | **derived** — `rederive_townlattice` |
| the model id | **derived** — `0x84c + rand()%K`, both constants byte-read |
| the model's `w`,`h` | **tabled** — `.cub` dimensions for exactly four ids, from `model_id_map.json`, which knows nothing about this pass (§2) |
| the ground drop | **FED** — the gate asserts only that the live z is at or below `plot[+4]`, which is all `while (!solid) --z` can produce; it does not pretend to derive it |

`rederive_townantique` **62/62**:

| | |
|---|---|
| SITE SEQUENCE — which arm each draw came from, in stream order | **31 / 31** towns |
| placements: plotIdx / role / modelId / rot / x / y | **45 / 45**, 270 fields, **no terrain** |
| the live z is at or below `plot[+4]` | **45 / 45** |

★ Because the two arms are selected by the plot's ROLE and visited by the plot loop, the
site sequence is a statement about the **loop order** (r outer, c inner, index `r + n*c`) as
much as about the roles — the golden's own generator asserts the same pairing independently
before it writes a byte.

★ The model census comes out **38 placements on a 32-wide model and 7 on a 24-wide**, which
is exactly §4's `antique-building1 ×20 + 2 ×18` and `3 ×3 + 4 ×4`.

⚠ **§3's null baselines are carried into the gate's own output rather than left here**: role
`0x14`'s `% 2` moves no position, role `0x12`'s `% 4` resolves only 2-way, and the
odd-rotation w/h swap is untestable in this corpus because all four models are square. The
port implements the swap from the disassembly and the gate says out loud that it cannot test
it.
