# The per-zone site-kind grid, derived from the seed

`RE_zone_emitters_ac.md` found this table because zone-builder emitters A and C both gate
on it, and had to leave it captured:

> ⚠ **The grid itself is read live, not re-derived.** Everything downstream of the gate is
> derived below; the kind byte is the one captured input, and re-deriving the grid from the
> seed is left open.

This closes it. **The grid is a product of `FUN_0050e080` — the feature generator
`cw_featuregen` already reproduces bit-exact.** That is the same lesson as the dungeon
`counter`: *check the existing port before doing new RE*, because the answer was already
being computed and thrown away.

```
python tools/frida_zone_ac.py --scan --zones <one zone per region> ...
python tools/gate_site_kind.py
```

**Gated over 118 regions: 590 checks green** — every one of 483,328 grid slots accounted
(2,633 non-zero: 472 towns, 1,779 dungeons, 382 runestone circles; the rest checked as
zero). The scan spans two bands, so the sample crosses region tiers: dungeons per region
run **7 to 16**, towns are **exactly 4 every time**, and no kind other than
`{0, 1, 3, 4}` occurs anywhere.

---

## Where it lives

```
region = world[0xbc + ((regZ<<10) + regX)*4]         0x518725
idx    = (zx % 64)*64 + (zz % 64)                    0x51a959-0x51a97c
entry  = region + idx*16 + 0x18                      # 16 bytes, 4096 per region
kind   = entry[0]                                    # the byte emitter A tests
```

## Who writes it — a complete census, by byte scan

The decompile only shows some of these (one store is rendered in a form no obvious text
pattern matches), so the census was done on the image instead: scanning `.text` for
`mov byte ptr [reg + reg*s + 0x18], imm8` finds **exactly six stores of a site kind in
the whole binary**, all inside `FUN_0050e080`:

| bytes | site | kind |
|---|---|---|
| `c6 44 18 18 03` | `0x50ec3f` | **3** — dungeon |
| `c6 44 f3 18 04` | `0x50f3a2` | **4** — runestone circle |
| `c6 44 c3 18 01` ×4 | `0x50fd5d` / `7d` / `9d` / `bd` | **1** — town |

The four town stores each pair with a `+0x19` store of `1`, `2`, `3`, `4` — a corner
index — and read their zone from a 12-byte-stride array (`+4` = zone X index, `+8` = zone
Z index).

> ★ **2026-07-28d: that `+0x19` byte has a consumer, and it is a big one.** It is the
> town builder's `site+0x79` — the site record's descriptor base is `site+0x60`, so
> `+0x78`/`+0x79` are this entry's kind and tag — and it selects the entire special-role
> set of the builder's promotion pass. Derived tag == live byte in **92 of 92** captured
> towns (`RE_town_promotion.md`), which also explains why every RUIN reads 0: a type-5
> cell writes no site-kind entry at all. `zoneSiteTag()` in cwgen returns it.
>
> The rank is only well defined if the top-4 selection has no tie at its boundary. Over
> the 25 type-1 cells of the sampled regions there is none anywhere in or at the boundary
> of the top four, and the smallest 4th-best score is 0.287 — measured, not assumed.

## The rules

* **kind 3** at the zone containing every **type-14** feature cell's centre.
* **kind 4** at the zone containing every **type-10** cell's centre.
* **kind 1** at the **top four** of the 64 zones of the **type-1** cell's own tile.

The town scoring (`0x50fc60`-`0x50fd21`) is an 8×8 sweep of that cell's tile — a tile is
8×8 zones — querying each zone's **centre** (`zone*256 + 0x80`):

```
for i in 0..7: for j in 0..7:
    w = FUN_0052c820(cell, (tileZoneX(i)*256 + 128)<<16, (tileZoneZ(j)*256 + 128)<<16)
    score = (1.0f - w) > 0 ? (1.0f - w)^2 : 0.0f
sort DESCENDING by score           (FUN_004f5f40)
the first four -> kind 1, tagged 1..4 at +0x19 in that order
```

`FUN_0052c820` is the falloff the candidate-grid work proved bit-exact
(`RE_zone_grid.md`), and for type 1 it takes the **warped** path — which is exactly why
the four town zones scatter around the town centre instead of forming a 2×2 block, and
why the centre zone itself is often *not* among them. A plain proximity stencil looked
plausible on one region and fell apart on the next; the warped falloff is 36/36.

## What is gated

`tools/gate_site_kind.py` derives each scanned region's **whole 4096-entry grid** from the
seed alone and compares it against the live table:

* every non-zero entry, kind for kind, as a set comparison of the whole grid;
* the count of zero entries, so the untouched 99.9% is accounted rather than ignored;
* the kind-1 / kind-3 / kind-4 zone sets separately.

Nothing here is replayed — no `rand()`, no captured state. The only live data is the table
being checked.

## Two things deliberately not claimed

* **The write-order precedence is read, not tested.** The stores run 3 → 4 → 1 (by
  address), so a town zone would overwrite a dungeon or runestone kind. The derivation
  applies that order, but **no sampled region has a collision**: across all 118 regions,
  no type-14 zone coincides with a type-10 zone or a town zone — 0/0/0. The ordering is
  what the binary does; this gate does not exercise it, and the sample suggests it may
  never fire.
* **The loop shapes are not claimed.** The decompile reads as if the kind-4 pass runs a
  fixed five iterations, but regions carry 4 *and* 5 type-10 cells and the derived set
  matches the live set exactly in both cases — so a fixed five is wrong somewhere, and the
  rule is stated as "one per type-10 cell", which is what the data supports.
