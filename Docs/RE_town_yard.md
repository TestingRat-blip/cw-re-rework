# The town builder's ROLE-6 plot — the fenced yard (`0x4e503a`–`0x4e5b9e`)

*RE'd and gated 2026-07-28 (07-28g). Gate: `tools/gate_town_yard.py`, **2,822 checks, 0
FAIL** over the 92 towns in `raw/town_props_capture*.json` (seed 42069).*

**This is the single biggest stage in the town builder.** Fourteen rand sites,
**113,353 draws over 50 role-6 plots — 49.6% of the 228,413 draws the rig records inside
`FUN_004e28e0`'s body.** It was reached the way the last five slices were: by
disassembling the span of one hot site before budgeting for it (`0x4e54e8`, 80,117 draws)
and censusing the rand sites inside it. That census turned one table row into a closed
stage, exactly as `0x4e742e` did in 07-28f — **six for six now.**

---

## 1. Where it sits

The per-plot body of the town builder is a chain of `role ==` tests on `plot[+0xc]`. Two
links are now decoded:

| VA | test | stage |
|---|---|---|
| `0x4e502f` | `cmp [eax + edx*4 + 0xc], 6` → `jne 0x4e5b9e` | **this document** |
| `0x4e5c34` | `cmp [edx + ecx*4 + 0xc], 2` → `jne 0x4eda16` | the HOUSE pass, `RE_town_house.md` |

`edx`/`ecx` is the plot index already multiplied by 7, so the stride is the 28-byte
`TownPlot` record `RE_town_verdict.md` decodes; `+0xc` is its role.

**The plots are walked r-outer / c-inner and indexed `r + n*c`** — the same order and the
same `townPlotIndex` the scan uses. That is *measured*, not assumed: each fence row hands
back one of the plot's two origin coordinates (§4), so the k-th role-6 segment in the
draw stream can be matched against the k-th role-6 entry of the plot table. **59/59
recovered origins agree.** (Lesson 13 — the order is observable here, so it is pinned
rather than carried as a free parameter.)

Role 6 is assigned by the villages-only coin pass at `0x4e2fdf`, already ported
(`CwTown.h`). A role-6 plot gets **no house**; it is left unbuilt and dressed.

## 2. The fourteen rand sites

All draw counts are over the 92 captured towns.

| VA | form | fires | draws | towns |
|---|---|---|---|---|
| `0x4e5040` | `rand() % 2` | once per plot — the **stripe axis** | 50 | 17 |
| `0x4e5083` | `rand() % 6` | once per plot — the **furnishing kind** | 50 | 17 |
| `0x4e5136` | `rand() % 10` | kind 3 only, once per **footprint cell** | 15,606 | 5 |
| `0x4e54a8` | `rand() & 3` | centre entity facing | 31 | 13 |
| `0x4e54e8` | `rand() % 10` | once per qualifying non-centre cell | **80,117** | 15 |
| `0x4e54fe` | `rand() % 4` | once per cell that rolled a zero above | 8,051 | 15 |
| `0x4e55e3` | angle | the `site+0x30` record | 670 | 10 |
| `0x4e5668` | angle | the `site+4` record | 6,065 | 14 |
| `0x4e578a` | `rand() % 2` | fence row A coin, once per plot | 50 | 17 |
| `0x4e57b9` | `rand() % 10` | once per fence-A post slot | 650 | 15 |
| `0x4e5880` | `rand() & 3` | fence-A prop type | 541 | 15 |
| `0x4e599d` | `rand() % 2` | fence row B coin, once per plot | 50 | 17 |
| `0x4e59c8` | `rand() % 10` | once per fence-B post slot | 750 | 13 |
| `0x4e5a89` | `rand() & 3` | fence-B prop type | 672 | 13 |

The census over `0x4e5000`–`0x4e5c00` returns **exactly these fourteen** and nothing else;
the gate asserts that, so a fifteenth site cannot appear unnoticed.

## 3. The pass

`span = 256 / n` and `n = 5` for a village (4 for a ruin), so **span = 51** in every
captured town. Write `half = span / 2 = 25`.

```
if plot.role != 6: skip to 0x4e5b9e

axis = rand() % 2                                   0x4e5040
B, C, D = 0, 0, 0 ; scale = 0.1f                    0x4e504c-0x4e5075
kind = rand() % 6                                   0x4e5083   switch table at 0x4f2b48

for i in 0..span-1:                                 X, outer     0x4e50c0
  for j in 0..span-1:                               Z, inner     0x4e50d0
      switch (kind):                                             0x4e50d9
        0: B=0x10, C=0x17                    (scale stays 0.1)
        1: C=0x19, D=4,  scale=0.2
        2: C=0x1a,       scale=0.2
        3: D=4; if rand()%10 == 0:  C=0x15, scale=0.05           0x4e5136
                else:               C=0x1d, scale=0.2
        4: C=0x1e, D=4,  scale=0.2
        5: B=0x11, C=0x18, scale=0.15

      col = Chunk_getColumnAt(originX + i, originZ + j)
      if col.count == 0:            next cell
      if class(col.top) != 4:       next cell        0x4e5222  cmp eax, 4

      recolour col.top                               0x4e5368  VoxelColumn_setBlock
        stripe = ((axis ? j : i) >> 1) & 1           0x4e525a / 0x4e5286
        stripe selects one of two colour sources     0x4e5272 / 0x4e529e
        and feeds FUN_004e1520 with it as a float    0x4e52ae
        (a 0.7f literal is staged at 0x4e52d1; which
         argument it lands on is NOT yet established)

      if i == half and j == half:                                0x4e536d
          spawn a 0x10f0 entity, +0x28 = 6, +0x2c = 0x8c
          +0x54 = (rand() & 3) * 90.0f               0x4e54a8
          push to site+0x18
          next cell

      if rand() % 10 != 0:          next cell        0x4e54e8
      if rand() % 4 == 0 and B != 0:                 0x4e54fe
          record{ [0]=0xb, [1]=B, angle=rand()*360/32767, 0.1f, 2 }   0x4e55e3
          push to site+0x30
      elif C != 0:
          record{ id=C, D, scale, angle }                              0x4e5668
          angle = 0 when C == 0x19, else rand()*360/32767  0x4e5651
          push to site+4  (a std::list)

if rand() % 2 != 0:                                  0x4e578a
    for k in 0..half-1:                              0x4e57b3
        if rand() % 10 == 0: next
        col = Chunk_getColumnAt(originX + 2k+1, originZ)
        if col.count == 0 or class(col.top) == 0: next
        prop{ type = 0x34 + (rand() & 3), pos, scale (2.0, 1.0, 1.5) }  0x4e5880
        push to site+0xc

if rand() % 2 != 0:                                  0x4e599d
    the same again, with the axes swapped:           0x4e59c8 / 0x4e5a89
    Chunk_getColumnAt(originX, originZ + 2k+1)
```

The switch cases are `0x4e50eb / 0x4e5101 / 0x4e511f / 0x4e5130 / 0x4e516e / 0x4e5189`,
read out of the jump table at `0x4f2b48` by the gate every run rather than transcribed.

**The stripe.** `(idx >> 1) & 1` gives 2-wide alternating bands, along Z when the axis
coin is odd and along X otherwise. It is the only use either loop variable has beyond
addressing.

## 4. The fence rows are proven records, not just draws

The two fence loops push into **`site+0xc`**, and `RE_town_props.md` §73 established that
`site+0xc` is the one vector `frida_town_props.py` hooks. So the capture holds the finished
48-byte prop record for every fence post — 1,213 of them — and the gate checks each
field-by-field:

* **`type == 0x34 + (rand() & 3)`** — 1,213/1,213, pairing the k-th `0x4e5880`/`0x4e5a89`
  draw with the k-th recorded push. `assets/props/prop_ids.json` resolves `0x34`–`0x37` to
  **`fence01`–`fence04`**, unambiguously.
* **the coordinate form** — 1,213/1,213 have `x % 65536 == 0` and `z % 65536 == 32768`.
  The Z-ish coordinate of a fence post carries **exactly half a block** and the X-ish one
  does not, in *both* loops, i.e. it is a property of the record slot and not of which
  axis the row happens to run along. Anything porting this must reproduce the asymmetry.
* **the positions** — row A runs `(originX + 2k+1, originZ)`, row B runs
  `(originX, originZ + 2k+1)`, for `k` in `0..half-1`. The fixed coordinate of each row is
  what §1's plot-order check reads back.

## 5. ⚠ What is NOT proven — the other two containers

The 1-in-10 decorations do **not** go to `site+0xc`. They go to a `std::list` at
**`site+4`** (ids `0x15`, `0x17`, `0x18`, `0x19`, `0x1a`, `0x1d`, `0x1e`) and a second
record class at **`site+0x30`** (kind `0xb`, subtype `0x10`/`0x11`). **No capture on disk
records either container**, so:

* the ids above are gated only as **the immediates the binary holds** — the gate re-reads
  all nine out of `Server.exe` and diffs them — never as resolved models;
* **do not read them off `assets/props/prop_ids.json`.** Doing so makes them
  `market-stand1/3`, `barrel`, `crate`, `open-crate`, `cupboard`, `desktop`, `stool` and
  `sandstone-stool`, which is a coherent enough story that it was written down here and
  then removed. That table is the `site+0xc` **props** namespace; there are **two**
  static-entity namespaces (`world+0x800718` and `world+0x800724`), the `site+0x30` record
  is plainly not in the props one (it is a byte-tagged `0xb` record, not a dword type),
  and `site+4` is a different container again. This is lesson A1 in its usual clothes: the
  ids are captured bytes, what they *mean* is still a guess.
* **the falsifier is cheap and needs no new decode.** `frida_town_props.py` already hooks
  one push site; hooking `0x528450`'s call at `0x4e5743` (`site+4`) and `0x41f5b0`'s at
  `0x4e561d` (`site+0x30`) with the same record dump would settle both namespaces in one
  server run. Until then the stage's *draw accounting* is closed and its *output* is half
  closed.

For the same reason the stage is named for its fences, which are proven, and not for its
furniture, which is not.

## 6. What still blocks a port

The draw arithmetic is fully derived, but the **cell count is not**: `0x4e54e8` fires once
per column whose top block class is 4, and `0x4e5880`/`0x4e5a89` need
`class(col.top) != 0`. Those read the *finished* town terrain — the same input
`RE_town_verdict.md` §6 already depends on, which cwgen produces bit-exact in the flat/dry
majority and not everywhere. The port therefore inherits the verdict scan's terrain
coverage exactly, and nothing more; it needs no new terrain work of its own.

The `TownTerrain` interface in `src/worldgen/cw/CwTown.h` already exposes everything this
stage reads (`column`, `recordClass`), and `townPlotOriginX/Z`, `townPlotIndex` and
`townPlotSpan` are all present. **The port is a mechanical addition on top of the
promotion pass; it is not blocked on RE.** It is left undone deliberately, so that this
slice lands with its gate green and the `cwgen_test` hash untouched.

## 7. Falsification record

| claim | how it was tested | result |
|---|---|---|
| the span is gated on role 6 | byte-read at `0x4e502f`; role-6 plot count vs `0x4e5040` draws | 17/17 towns |
| loop bound is `span`, span is 51 | kind-3 plots spend `span²` at `0x4e5136` | 15,606 = 6 × 51², exact |
| `kind = rand() % 6`, 6-case table | per-kind B/C predicates over 50 plots | 150/150 |
| `0x4e54fe` fires on `0x4e54e8 % 10 == 0` | count per town | 17/17 |
| fence coins gate a `span/2` loop | count per town | 34/34 |
| `type == 0x34 + rand()&3` | every recorded fence prop | 1,213/1,213 |
| plot order r-outer/c-inner, `r + n*c` | origins recovered from fence rows vs plot table | 59/59 |
| no fifteenth rand site in the span | census of `0x4e5000`–`0x4e5c00` | 14, exact |
| the ids are market furniture | **NOT TESTED — see §5.** The container is unhooked | withdrawn |

## 8. What this leaves

Counted mechanically rather than by adding up doc numbers: **39 of the 176 firing rand
sites are now closed, carrying 138,935 of the 228,413 draws** the rig records inside the
builder body (60.8%).

The next target is **`0x4ef7c8`** (52,811 draws, 28 towns), which the same span-first
census shows is *not* a scatter at all but a **per-voxel column paint** — a three-deep
`x / z / y` nest whose innermost draw is a `0.75 + rand()*0.1/32767` shade jitter, gated on
a loop-invariant `double >= 49.0` at `[ebp-0x5cc8]`. Its neighbours `0x4ef938`/`0x4ef94e`
fire in **59** towns against `0x4ef7c8`'s 28, so they are *not* downstream of that gate and
are a separate sub-stage — a `lib_fn_513760` call whose type is `lib_fn_4fc140` thresholded
at exactly **0.8**, which is the third independent worldgen decision to threshold that
function there (see the open thread in `HANDOFF_PROMPT.md`). Read `0x4ef600`–`0x4f0000`
before budgeting for it.
