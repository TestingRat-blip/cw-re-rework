# The landform predicate — and the second land mask the ports never had

```
python tools/gate_zone_landform.py     # 22 checks, 2 zones, no server
```

**Status: solved and ported.** `CwZoneScatter::landformQualifies` found no qualifying tile
in zone (32795,32748), where the live server spends **15 keep rolls + 1 selector**, so cwgen
declared the zone Exact when it is not. The cause is not in the predicate: it is in `surfH`,
which was short inside **every type-6/0xd feature cell** in both ports.

With it fixed, that zone's landform pass replays **16/16 draws, values and order, ab initio
from the zone seed**, and `zoneTreeExact` admits descriptor type 6 — `rederive_campgrid` goes
from **1 zone replayed ab initio to 7** (39 → 273 live draw values) and `rederive_campstream`
from 2/2 to 4/4.

---

## The gate chain, re-read from the disassembly

`FUN_00518630`'s per-column loop reaches the landform keep roll only through five gates.
All five were already modelled correctly; the table is here because two of them were
recorded with the wrong operands.

| gate | where | test |
|---|---|---|
| G1 | `0x51975b` | `l132c < sh` (`l132c` = `f32(f32(f32(nA+1)*20) + bh)`) |
| G2 | `0x519838` | `1 - abs(f32(nB+nC))*4 >= 0` |
| G3 | `0x519ccb` | `surf > bed` |
| G4 | `0x51a1ed` | `f32(surf - bed) > 2.0` (`[0x558708]`) |
| G5 | `0x51a1fa`-`0x51a20c` | `(X + 3*Z) % 7 == 0`, then `rand()` at `0x51a214` |

* **G5's axes.** `re_landform.py`'s own docstring and its `landform_count` demo had
  `(Z + 3*X)`. The operands are `[ebp-0x1318] + 3*[ebp-0x12c8]`, and those two slots are
  `writeVoxel`'s first and second arguments at `0x51a1cc`/`0x51a1c6` — X and Z. Corrected;
  `cw_decoration.landform_pass` and `CwZoneScatter::anyLandformTile` always had it right.
* **G3 is reached on both paths.** `0x519a14` (`sh - 2 > fb`) forks into a two-voxel carve
  loop or straight to `0x519ccb`; the jump target is the `comiss` itself, because `xmm2`
  (surf) / `xmm3` (bed) / `xmm6` (sh) are still live in registers on the short path and only
  the carve path has to reload them. Both paths test G3 identically.

## The finding: the builder keeps TWO land masks

The predicate's inputs come from the column-generation prologue that runs immediately
before it, and that prologue stores the land mask twice:

| slot | value | what reads it |
|---|---|---|
| `[ebp-0x12d8]` | `FUN_00523d80`'s return (the type-2/4/5/6/7/10 deforms *inside* the land-mask function) | `term_a * lm` in surfH (`0x5190bd`); `inner` (`0x519956`) and `fb` (`0x5199bf`) in the predicate |
| `[ebp-0x12f4]` | that value **plus a further deform the builder applies itself, for cell types 6 and 0xd only** (`0x518e6e`-`0x518fd3`) | the ROUGHNESS product `lr` (`0x518ff3`), hence surfH's second term, hence the slope weight (`0x51904e`) and the flat-rock weight (`0x5192fa`) |

```
if (cell->type != 6 && cell->type != 0xd) goto skip            0x518e6e
w  = World_objectFalloffWeight(cell, X<<16, Z<<16)             0x518ebe
t  = (1-w) > 0 ? (1-w)^2 : 0 ;  t = min(t*2, 1)                0x518edf-0x518ef8
W  = 1 - (1 - t^2)^2                                           0x518efd-0x518f12
g  = clamp(noise(X*0.01 + 985, Z*0.01 + 98584) * 1.3 + 1)      0x518f4e
lmLr = (3g^2 - 2g^3) * W * 0.4  +  lm                          0x518f9d-0x518fd3
```

Both ports had a single `lm` for all four uses, so inside a 6/0xd cell `lr` — and therefore
`surfH` — came out short. In zone (32795,32748) the tallest relief `surf - bed` reached
**1.71** against the 2.0 cliff threshold: 110 columns passed G1-G3 and **none** passed G4.

This is not a new discovery so much as an **un-fix**: `CwColumn::roughBlend` carried exactly
this block until commit `08c8b67`, which removed it as a "type-6/0xd roughness boost" on the
correct observation that `cw_height.roughness` has no feature term. The term was never in the
roughness — it is in the land mask that multiplies it, and the old code had it in the right
place. The Python never had it at all.

★ **DURABLE: "X has no feature term" does not license deleting a feature term that sits
next to X.** The removal reasoned about the wrong factor of a product.

## What proves it

**1. The rand stream, ab initio.** Zone (32795,32748), seed 42069, `raw/zone_props2_capture_32795_32748.json`:

```
port: [9132, 27137, 11057, 28740, 30616, 19623, 70, 12599, 20073, 27761, 24686, 19822, 20984, 11881, 13531, 98]
live: [9132, 27137, 11057, 28740, 30616, 19623, 70, 12599, 20073, 27761, 24686, 19822, 20984, 11881, 13531, 98]
```

16/16 values in order, starting at index 0 of the zone's own LCG stream — 15 keep rolls at
`0x51a21a`, and after the fourth (28740, the only one ≡ 0 mod 30) the selector at `0x51a22f`
(30616 % 4 = 0 → case 0, whose inner draw is gated on `surf <= sh` and does not fire).
The predicate has to pick exactly 15 columns out of the ~9,300 the stride samples; nothing
else in the pass is free to absorb an error.

**2. A live surface probe, independent of the rand stream.** The same capture's 16 settle
records carry the live world's terrain Y at 16 columns. In the group at
(8395755-8395762, 8383561-8383568) — inside the type-6 cell, away from the knoll grid —
the corrected surfH puts every settle on the known `surfH + 2` convention, where the old one
was 3 to 5 blocks under:

| column | live Y | surfH (fixed) | surfH (before) |
|---|---|---|---|
| 8395755, 8383561 | 163 | 161 (+2) | 159 (+4) |
| 8395758, 8383564 | 163 | 161 (+2) | 160 (+3) |
| 8395762, 8383561 | 163 | 161 (+2) | 159 (+4) |
| 8395762, 8383568 | 163 | 161 (+2) | 159 (+4) |

(The six records around 8395608-8395615 sit on the type-6 **knoll grid**'s stamped ground and
read +9 to +12 over bare terrain under either formula — expected, not a residual.)

**3. It changes nothing outside 6/0xd.** `rederive_deform` samples 52,897 feature columns
across types 1,2,3,4,5,6,7,10,11,12,14,15. Regenerating the golden moved **1,252 rows, all
of them type 6** — every other type is byte-identical. The live proofs
`deformed_surf_height` already carried (type 2 17,664/17,664; type 10 mountain walk) are
untouched by construction.

## Ported

| | |
|---|---|
| `CwColumn::roughBlend` | restores the deform; returns `sum` (bare roughness) and `lmLr` alongside `roughBlend`/`cliffW` |
| `SurfInfo` | gains `roughSum` + `specialLr`; `special` stays `[ebp-0x12d8]` |
| `CwColumn::emitColumn` | `fb` from `roughSum * special` (was reconstructing the roughness by dividing `roughBlend` by `special`, which stops being valid once the two masks differ) |
| `CwZoneScatter::landformQualifies` | same, for its own `fb` |
| `CwWorldGen::dryColumnSurface`, `cwgen_test` | pass `specialLr` to `surfaceAssembly` — the `lm*8` rock weight reads `[ebp-0x12f4]` at `0x5192fa` |
| `CwForest::zoneTreeExact` | admits descriptor type 6 |
| `cw_featuregrid.builder_lm_lr` | the deform; used by `deformed_surf_height`, `cw_column`, `cw_forest`'s cover material, `re_landform` |

Gate results after the change: the whole `cwgen_test` suite green (`rederive_deform` and
`rederive_dry` goldens regenerated — both are **port==port**, generated by
`rederive_oracle.py`), `rederive_campgrid` **15738/15738 with 7 zones ab initio**,
`rederive_campstream` **4/4**, `gate_zone_tail` 6558/6558, `gate_zone_grid`, `gate_zone_camp`
unchanged.

## Carried forward

* **`re_landform` was pinned to seed 444444 at import.** Its `BASE` and octave offsets were
  computed once, so `cw_decoration.landform_pass` on any other world silently used 444444's
  terrain. It never bit only because every non-444444 zone the replay ran on had zero
  qualifying tiles. It now has `set_seed()` and re-syncs to `cw_seed.SEED` on every call;
  `zonescatter_oracle.py` had been riding on the import side effect and now configures 444444
  explicitly.
  ★ **A module that caches seed-derived tables at import is a global-state bug waiting for
  the first caller who changes the seed.**
* **The zones cwgen still declines.** (32795,32748), (32811,32742) and (32660,33021) are
  genuine Landform zones (16 / 575 / 1368 draws) — correctly declined, because the landform
  pass's own draw REPLAY (the keep/selector/case switch, and which columns append the bigrock
  list) is modelled in `cw_decoration` but not in cwgen, which only classifies.
* ✅ **`0x51ad52` is read (2026-07-26c, `RE_zone_tail.md`).** It is shared by types 0xd
  **and 4**, it fires only in the zone holding the cell's centre, and it spends **zero
  rand draws** — an exhaustive census of the pre-chain's 18 rand sites puts none of them
  in the span. It computes a column-top scan and discards it. So it is *not* the type-0xd
  counterpart of this deform and never could have been: it cannot move the stream, and
  the deform above is what type 0xd actually needed.
* ⚠ ~~`RE_camp_descriptor.md` calls zone (32800,32799) "a type-6 descriptor"; it is
  **type 7**.~~ **Retracted 2026-07-26c — it is type 6.** Both ports index cell 35 of
  region (513,512) and both read 6; cwgen declines the zone because `classifyZone` does
  not call it Exact. Under `force` it now replays the Python's 58 trees exactly.
