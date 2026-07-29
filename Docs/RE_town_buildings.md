# The town builder's BUILDING LIST — `site+0x88`

*Derived and gated 2026-07-29e. Gate: `tools/gate_town_buildings.py` — **25 checks, 0
FAIL**, every one of them a reading of `Server.exe` applied to the 23 module grids
`CwTownHouseTables.h` regenerates. Consumed by `cwgen`'s `townBuildingList`, which
`rederive_townruin` exercises over 112 buildings in 35 ruins.*

```
python tools/gate_town_buildings.py
```

**The standing blocker for both remaining town-NPC stages, and it was never a capture
problem.** `RE_town_npcs.md` §8 and `RE_town_ruin.md` §9 both list "the building list
`site+0x88`, and each building's vector SIZES" as **not derived** — the one input a port
of either stage could not supply. It is a census and a no-draw walk, and both fit in an
afternoon.

---

## 1. The census — one producer, six consumers

Every `lea ecx, [reg + 0x88]` in the whole builder body `0x4e28e0`-`0x4f2b45`:

```
4E76DB  -> 0x4F2BE0   the ONE write        std::vector<T*>::push_back
4F0065  -> 0x530550 |
4F02D9  -> 0x530550 |  the village NPC pass's reads
4F02EB  -> 0x4D3DE0 |
4F168F  -> 0x4D3DE0 |
4F21F9  -> 0x530550 |  the ruin occupant pass's reads
4F220B  -> 0x4D3DE0 |
```

and the census is **exhaustive in the other address forms too** — no `mov [reg+0x88], …`,
no `add reg, 0x88`, no indexed `[reg + reg*s + 0x88]` anywhere in the body. That is lesson
7o's "census the register form too" applied *up front* rather than after a miss, and the
gate re-runs all four scans every time.

⚠ Note the span. Over Ghidra's `0x4f26e9` boundary this census finds five of the seven —
the same 1,116-byte truncation that hid seven rand sites from every capture on disk
(`RE_town_ruin.md` §2).

## 2. ★ The pushed object is the HOUSE, and that is byte-proven

The write sits at `0x4e76db`, inside the **house entity pass**. What it pushes comes from
the frame slot `[ebp-0x5cfc]`, and that slot has exactly one writer:

```
004e6500  push 0x74
004e6508  call 0x54a7b6            operator_new
004e651e  push 4 / push 3 / push 3
004e6526  call 0x4e1f80            house_ctor(h, 3, 3, 4)
004e6535  mov [ebp-0x5cfc], eax
...
004e76d4  lea eax, [ebp-0x5cfc]
004e76da  push eax                 (push_back takes a const T&)
004e76db  lea ecx, [edi + 0x88]
004e76e1  call 0x4f2be0
```

`operator_new(0x74)` + `FUN_004e1f80(h, 3, 3, 4)` is the *same allocation* `townHousePass`
already models — the `(3, 3, 4)` that fixes `House_dimX/dimZ/dimY`. So:

**a BUILDING IS A HOUSE — one entry per role-2 plot, in plot order**, which is exactly the
sequence `townHousePass` emits. The handoff's open question ("whether the pushed object is
the same `house` the house pass builds — the pointer comes from a frame slot set further
up, not from the visible instructions") is answered by following that slot: it is.

★ And the corroboration the handoff suggested holds — 35 ruins / 112 buildings against 35
villages / 323 houses in the surround pass, and `gate_town_ruin.py` replays 35 of 35 towns
draw for draw using the role-2 plot count as its loop bound, which a wrong count cannot do.

## 3. `B[+0x60]` — the kind

```
004e655d  mov ecx, [eax + edx*4 + 0x10]     eax = the plot table, edx = the plot index
004e6567  mov [eax + 0x60], ecx
```

so **`building[+0x60] == plot[+0x10]`**, the sub-role the PROMOTION pass writes and
`rederive_townpromo` derives (140/140). The village NPC pass's five named-occupant arms
are its kinds 1..5.

`house_ctor` zeroes `+0x60`, so a plot with sub-role 0 leaves it 0 — the "generic
building" that gets `1 + rand()%2` villagers.

## 4. The three cell vectors — the INTERIOR-MARKING SWEEP

`0x4ea988`-`0x4ead3a` spends **no draws** and is a pure walk over the module grid: `i`
outer (dimX, block stride 13), `j` (dimZ, 13), `k` inner (dimY, 7).

```
for i, j, k:
    if cellAt3D(i,j,k).type   != 1: continue          0x4eaa04   a WALL
    <a 14x14x6 interior voxel fill -- writeVoxel only, no draws>
    if cellAt3D(i,j,k-1).type != 2: continue          0x4eabbc   over a BASE
    if cellAt3D(i,j,k)[+2] != 0: push -> B+0x30       0x4eabd9 / 0x4eac22
    if cellAt3D(i,j,k)[+8] == 3: push -> B+0x3c       0x4eac3e / 0x4eac87
    push -> B+0x24                                    0x4eacd2   (unconditional)
```

each pushing `anchor + (13i + 7, 13j + 7, 7k + 1)` — the furnishing pass's lattice again
(`RE_town_furnish.md` §5b.2, `RE_town_entities.md` §6), a third stage agreeing on it.

The gate reads those four predicates off the compares in the span rather than typing them,
and asserts the three `lea` targets are `+0x30` / `+0x3c` / `+0x24` in that order.

⚠ `cellAt3D` **rotates before it indexes** (lesson 7j). A rigid transform preserves the
set, so all three counts are rotation- and mirror-invariant — asserted over all 23 layouts
× 8 orientations, and it is why a port needs no rotation bookkeeping to get the sizes.

## 5. `cell[+2]` is a RUNTIME field, and the port's modulus for it was wrong

`CwTownHouseTables.h` says "the +2 field is never written by any of the 23 grids", and
that is true of the *tables*. It is written at runtime, once per house, by the house pass:

```
0x4e6fed-0x4e71cd    for i, j (k FIXED at 1), if the module qualifies, scan its own
                     13x13 block footprint for the max column top and store it in
                     cell[+4]; keep the house-wide max in [ebp-0x5c5c]
0x4e7240-0x4e72f3    cands = [(i,j,1) :  cellAt3D(i,j,1).type == 1            0x4e7261
                                    and cellAt3D(i,j,2)[+3] == 0             0x4e7276
                                    and cellAt3D(i,j,1)[+4] == maxTop        0x4e7292
                                    and cellAt3D(i,j,1)[+8] != 3]            0x4e72a7
0x4e731b             if cands: pick = cands[rand() % |cands|]
0x4e737a             cellAt3D(pick)[+2] = 1
```

★ **`CwTown.h` had that modulus as "the number of type-1 modules in the whole 3×3×4
grid".** The binary walks `(i, j)` at `k == 1` only and applies three further tests — **7
candidates against 2 in layout 0**, too large by up to 5. The draw is spent either way, so
no draw-count gate in this repo could ever have caught it, and *nothing consumed the value*
until the building list did (lesson 7y: a stage's shape is not its census; lesson 7l: a
constant a doc had to argue for is worth re-pinning by a later consumer).

⚠ **The third test is TERRAIN**, so *which* module is marked is region-cache-blocked like
every other plot height in this builder. The correction is therefore to the CANDIDATE
COUNT, which is derived, not to the pick, which is not — and `cwgen` now hashes
`wallCandidates` rather than `wallPick` so the suite's identity holds only derived values.

**It does not matter for the building list**, and that is a result rather than luck: every
candidate is also a `cells24` entry (asserted over 23 × 8), so

```
|cells30| == 1 for every house, whatever the terrain says
```

and no consumer reads a `cells30` **position** — only whether it is empty. That is exactly
what `RE_town_npcs.md` §2 observed live from the other side: *"the building's own `+0x30`
in 440 of 440"*.

## 6. What the counts come out at

Over the 23 layouts (identical under all 8 rotations/mirrors):

| | min | max |
|---|---|---|
| `\|cells24\|` | **3** | 7 |
| `\|cells30\|` | 1 | 1 |
| `\|cells3c\|` | 0 | 1 |
| candidates (no terrain) | 1 | 6 |

Three consequences a port can rely on:

* **`cells24` is never empty**, so the `0x4f2262` / `0x4f0343` guards never skip a
  building. Live: 112 of 112 ruin buildings and 286 of 286 village buildings are processed.
* **the cell list can never run out inside a building** — 3 minimum against at most 2 pack
  picks plus 1 patrol pick — so `gate_town_ruin.py`'s cell-exhaustion branch (the one place
  that gate reads the answer off the recorded stream) is **provably dead**.
* ★ **`|cells3c| == 1` in layouts 20, 21 and 22 and 0 in the other twenty — and
  `kHouseFixed` / `kHouseSub1`, the layouts a sub-role 1..5 plot gets, are exactly
  `{22}` and `{20, 21}`.** So the buildings that take a NAMED occupant are exactly the
  buildings with a cell for one to stand on, and the NPC pass's `rand() % |cells3c|` is
  never a division by zero. Two tables that know nothing about each other, agreeing
  (lesson 7q) — the closest thing this derivation has to live proof.

## 7. What this gate does NOT prove

Said out loud, because everything above is a reading of the binary applied to a derived
grid rather than a measurement.

* **No capture hooks any of the three vectors.** `frida_town_props.py` records `pushes`,
  `settles` and `spawncalls`; the interior sweep uses `vec3i_vector_push_back` into a
  house-local vector and `writeVoxel`, none of which is hooked. There is no live count of
  `|cells24|` anywhere.
* What IS live is the **consequence**: `rederive_townruin` derives all 112 buildings of 35
  ruins from the plot table and lands every one of their 2,872 recorded draws on its
  recorded stream offset, plus 406 the rig never saw. A wrong building count desynchronises
  everything after it, so the count is proven even though the cells are not.
* **The marked module is not derived** (§5), and the gate says so rather than reporting the
  candidate count as if it were the pick.
* The `desc[0x1c]` arms the corpus never exercises are unexercised here too — this file
  makes no claim about a layout the 23 grids do not contain.

## 8. What this unblocks

| stage | doc | what is left |
|---|---|---|
| **RUIN OCCUPANTS** | `RE_town_ruin.md` | ✅ **PORTED 07-29e** — `rederive_townruin` 140/140 |
| **VILLAGE NPC** | `RE_town_npcs.md` | ✅ **PORTED 07-29f** — `rederive_townnpcs` 231/231. The building list carried three of the five per-town bits outright (C, D and, through the plot table, B) |
| **HOUSE ENTITY** | `RE_town_entities.md` | unaffected — its blocker is the per-emit-site model anchor in the server's model DB |

## 9. Numbers

| | |
|---|---|
| producer | `0x4e76db` -> `0x4f2be0`, one, byte-censused in four address forms |
| consumers | six, three per NPC/ruin pass |
| the object | `operator_new(0x74)` + `FUN_004e1f80(h, 3, 3, 4)` — a HOUSE |
| filler | the interior-marking sweep `0x4ea988`-`0x4ead3a`, **0 draws** |
| live corpus | 435 role-2 plots over 92 towns; 112 buildings in the 35 gated ruins |
| gate | `gate_town_buildings.py`, **25 ok / 0 FAIL** |
