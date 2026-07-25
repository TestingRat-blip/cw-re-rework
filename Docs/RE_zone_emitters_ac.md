# Zone-builder emitters A and C — the runestone and the street light

The last two open slices of Phase 2. `RE_zone_props.md` could only read their record
content statically:

> **Emitters A and C** inside the zone builder, which no sampled zone reached. […] Read
> their gates statically rather than sampling blindly for them.

That was the right instruction, and this is why blind sweeping never found them: **both
gates key off the region's per-zone site-kind grid**, and only 4 of a region's 4096 zones
carry the kind emitter A wants — 0.1%, so a 512-zone sweep expects half a hit. Reading
the gate first turned a hopeless search into four zones, all of which fire.

```
python tools/frida_zone_ac.py --scan --zones 32577,32577 ...   # the site-kind grid
python tools/frida_zone_ac.py --zones 32579,32755 ...          # emitter A
python tools/frida_zone_ac.py --census --zones <town zones>    # emitter C
python tools/gate_zone_ac.py
```

**Gated over 256 zones: 3,937 checks green** — 112 runestone zones (every kind-4 zone of
36 regions) and 144 town zones, yielding 112 runestones and 381 street lights
(251 `street-light01`, 130 `street-light02`) out of 6,523 rolls.

---

## What the gate actually reads: the per-zone SITE-KIND grid

`0x51d46b` compares a byte at `region + idx*16 + 0x18`, and `0x51a959`-`0x51a97c` builds
the index:

```
region = world[0xbc + ((regZ<<10) + regX)*4]          0x518725
idx    = (zx % 64)*64 + (zz % 64)                     0x51a959-0x51a96e   (signed % 64)
kind   = *(u8*)(region + idx*16 + 0x18)
```

so it is a **64×64 per-zone table, one 16-byte entry per zone, 4096 entries per region** —
not the 8×8 feature-cell grid `cw_featuregrid` models (that one is at `region + 0x14018`,
stride `0x68`, and is what the camp populator and the candidate grid read).

Scanning all 4096 entries of 36 regions gives a very stable census:

| kind | count per region | what it is |
|---|---|---|
| 0 | ~4071 | nothing |
| 1 | 4 | a **town** — always a 2×2 block of zones |
| 3 | 16 | a **dungeon** |
| 4 | 4–5 | a **runestone circle** (emitter A) |

The kind-3 reading is not a guess: the six dungeon zones this project has used as its
holdout set since the dungeon work — `(32795,32796)`, `(32796,32787)`, `(32780,32788)`,
`(32804,32788)`, `(32804,32811)`, `(32787,32796)` — are **6/6** kind 3 in this table. The
count matches the independently-derived bound too: `RE_dungeon_level_rank.md` proved a
region holds **at most 16 dungeons**, and every region scanned has exactly 16 kind-3
zones. Kind 1 lands as a 2×2 block, which is the town footprint.

⚠ **The grid itself is read live, not re-derived.** Everything downstream of the gate is
derived below; the kind byte is the one captured input, and re-deriving the grid from the
seed is left open.

---

## Emitter A — the runestone circle

```
if (kind != 4) skip                                                        0x51d46b
N = rand()%3 + 6                                                           0x51d563
for i in 0..N-1:                                    # a ring, radius 25
    ang = i*PI/N                                    # HALF a circle, not a full one
    cx = zoneCentreX + (int)(cos(ang)*25.0)
    cy = zoneCentreY + (int)(sin(ang)*25.0)
    z  = column top + 4
    hx = rand()%4 + 3 ;  hy = rand()%4 + 3          # two draws per ring point
    ... an ellipsoid voxel stamp over [-2hx,2hx] x [-2hy,2hy] x [z-20,z+20],
        material 6 with a material-0x26 shell (0x51d8f2 / 0x51d47e) ...
rec.type = 0x2d      (runestone)                                           0x51dbab
rec.pos  = ((zoneCentreX<<16) + ftol(229376.0), (zoneCentreY<<16) + ftol(229376.0), z<<16)
rec.dir  = rand()%4 ;  rec.size = (4, 4, 5)                                0x51dbb5
push -> site+0xc                                                           0x51dbf5
```

Two details worth keeping:

* **The position is the ZONE centre, not the feature centre.** `[ebp-0x138c]` /
  `[ebp-0x1388]` are set once at `0x5187d4`/`0x5187d8` as `zone*256 + 0x80`.
* **The Z settle is not `Prop_settleOnTerrain`.** It is an inline pair of loops over
  `World_getBlockFloat` (`FUN_00406050`): descend one block at a time while the block is
  non-solid, then ascend while it is solid — **uncapped**, where `FUN_005287b0` caps both
  at 50, and with no footprint or support test.
* The `+ftol(229376.0)` = **+3.5 blocks** on both horizontal axes is the same constant
  `FUN_004e0740`'s stage 2 uses (`RE_zone_props.md`), applied here as a plain bias rather
  than a `{0,7}` offset pair.

## Emitter C — the village street light

Inside the per-column loop (`0x51fa10`-`0x520371`), for a column whose top solid block has
class `0xb` with class 0 above it. The run walk is worth stating precisely, because
getting it slightly wrong is what made the first version of this gate fail:

```
0051fa91  dec eax                  ; eax = count - 1
0051fa92  cmp ecx, eax             ; ecx = i
0051fa94  jge 0x51fac0             ; i >= count-1  ->  ALWAYS take the qualify path
```

so the walk is *not* "for every run boundary": for `i < count-1` the block above must be
non-solid, but **the last block always qualifies for the test**, and the class it compares
against 0 is read at index `count` — one past the counted extent. Modelling the loop as
`k < n-1` undercounted the qualifying columns by 3–18 per town and failed the gate; the
census now mirrors the branch exactly.

```
road = FUN_004d19f0(x, y)                       # the VILLAGE ROAD field
if (road <= 0.75) skip                                                     0x51fb53
if ((x + 90*y) % 470) skip                                                 0x51fb70
if (rand() % 16) skip                                                      0x51fb7e
for k in 0..6: if solid(x, y, z0+k) skip        # seven clear blocks       0x51fba0
rec.type = FUN_004fc140(x, y) > 0.8 ? 0x33 (1,1,8) : 0x32 (2,2,8)          0x51fbfa
rec.pos  = (x<<16, y<<16, z0<<16)               # NO half-block bias
rec.dir  = rand()%4 ;  push -> site+0xc                                    0x51fcdb
```

`0x32` / `0x33` are `street-light01` / `street-light02` (`FireStreetLight`) and `0x2d` is
`runestone` — `assets/props/prop_ids.json`. Every clause of the gate reads as that:
`road > 0.75` means `(1-w)² > 0.75`, i.e. **inside ~0.37 of the village radius**; the
`% 470` lattice spaces the lamps along a line; seven clear blocks is headroom for an
8-tall post; and the `0xb` ground is why the lights only turn up in **desert** towns.

`FUN_004fc140`'s `> 0.8` here is the *same function and the same threshold* the forest
tree builder uses to pick its tree type (`CW_CONFIDENCE_XREF.md:105`). Two independent
worldgen decisions thresholding one per-column field at the same 0.8 is a strong lead that
`lib_fn_4fc140` is misfiled under `_library` — but a lead is all it is, and the label is
**left alone** until the body itself is read. Recorded here so the next pass has it.

---

## ⚠ Retraction: emitter C does not build a string

`RE_zone_props.md` recorded, and `HANDOFF_PROMPT.md` repeated:

> **C** (`0x51fcdb`): […] it builds a **string** on the way (`FUN_004cde40` × 3,
> `FUN_00406380`, `FUN_00402a40`) — a named prop, not a plain one.

There is no string. The three functions are eight, sixteen and sixteen instructions long
and disassembling any one of them settles it:

| addr | body | what it is |
|---|---|---|
| `004cde40` | `cdq; shld edx,eax,0x10; shl eax,0x10; store [ecx], [ecx+4]` | **int → int64 16.16** |
| `00406380` | copies 6 dwords to `[ecx..ecx+0x14]`, `ret 0x18` | **a 3 × int64 position ctor** |
| `00402a40` | copies the same 24 bytes | **position assign** |

The three calls convert `z`, `y`, `x` (pushed right-to-left, so the ctor receives
`x, y, z`) and the result is assigned to the record's `pos` at `+8`. What made it look
like string building in the decompile is that the calls return a struct by value, so
Ghidra threaded the hidden return-slot pointers through as extra arguments and printed
the *call-site addresses* `0x51fc72` / `0x51fc82` / `0x51fc92` as parameter values.

This is the `RE_dungeon_markers.md` lesson again, on a decompile instead of a capture:
name the cheapest observation that would falsify the reading and make it. Here that was
one disassembly of an eight-instruction function.

---

## What is gated

`tools/gate_zone_ac.py`, over `raw/zone_ac_capture*.json`:

**Emitter A** — that a runestone is emitted **iff** the zone's site kind is 4; that
`N = rand()%3 + 6`; that the ring spends exactly two draws per point and the branch's
whole stream is `1 + 2N + 1`; that the record is type `0x2d`, size `(4,4,5)`; that both
horizontal coordinates are the zone centre `+3.5` blocks exactly; that Z is a whole block;
and that `dir` is the last draw `% 4`.

**Emitter C** — that each pushed record is a street light with the size its type implies;
that its position carries no half-block bias; that its column sits on the
`(x + 90y) % 470` lattice; that `dir` is the matching draw `% 4`; that one dir draw is
spent per pushed record; that a record is only pushed where a roll came up 0; and that
the number of rolls equals the number of class-`0xb` lattice columns with `road > 0.75`,
counted independently by walking the finished zone's own columns and calling the game's
`FUN_004d19f0` on each.

---

## The rig

`tools/frida_zone_ac.py`. Three notes:

* `--scan` reads a whole region's 4096-entry site-kind table after building **one** zone,
  which is how the type-4 zones were found without sweeping.
* `--census` walks the finished zone's columns (`col+0x10` baseZ, `col+0x18` block array,
  `col+0x1c` count — from `FUN_004d23f0`'s in-range path at `0x4d248d`) and evaluates
  emitter C's own class/lattice/road gates, so a town that emits nothing reports *why*
  rather than staying silent.
* `FUN_004d6670` is **thiscall** — `ecx` is the vector and the record is `args[0]`, not
  `args[1]`. Reading the wrong slot gave a record with type `0x80035ff` and a position of
  −82 billion, which is what a plausible-looking garbage read looks like.
