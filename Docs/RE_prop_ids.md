# The static-entity prop ids — the client's own table

`RE_zone_props.md`'s last open item:

> **Ids beyond the table.** `assets/props/prop_ids.json` stops at 0x37; `0x41`, `0x42`
> and `0x45` are unnamed. The client's type→slot table is the source the existing rows
> came from.

There is such a table. It is not a data table — it is a straight-line init block in
`Cube.exe` at **`0x461ca0`-`0x4634e0`** that fills two `vector<VoxelModel*>` members of
the client's world, one slot at a time:

```
push  <type>                      ; the slot index
lea   ecx, [ebx + <ARRAY>]        ; +0x800718 or +0x800724
call  0x468c60                    ; &array[type]
push  <dbId>                      ; the world model-DB index
mov   ecx, edi                    ; edi = the model DB
call  0x4120c0                    ; &db[dbId]
mov   [esi], eax                  ; array[type] = &db[dbId]
```

```
python tools/extract_prop_models.py      -> raw/static_prop_models.json
```

---

## ★ There are two arrays, and reading the decompile merges them

* **`world+0x800718`** — vegetation and wall decor: flowers, grass, shop signs, ivy,
  inca art, torches, liana, chandelier, cobwebs. **64 slots**, 58 assigned. This is the
  "hanging" namespace `prop_ids.json` already documents.
* **`world+0x800724`** — the **static-entity / prop** namespace the server's emitters
  write into `descriptor[0]`. **78 slots** (`resize(0x4e)` at `0x462c02`), 75 assigned;
  types **6, 14 and 70 are never assigned a model**.

Both are `thiscall`, so the `this` pointer is implicit and the decompile prints *both* as
a bare `vector_at_stride4(type)`. Reading it that way produces one merged table in which
every low type is assigned twice — and picking either the first or the last value gives a
wrong answer for a different half of the range. The `lea ecx, [ebx + …]` in the
disassembly is the only thing that separates them.

**The method validates itself on data it did not fit:** the extraction reproduces all
eight of `prop_ids.json`'s `hanging` rows exactly (`0x33` torch-red — the file really
does spell it `torch-read.cub` — through `0x3a` cobwebs2), which were derived
independently and long before this pass.

## The ids this session's emitters use

| id | model | record size | placed by |
|---|---|---|---|
| `0x41` (65) | **campfire** | (2.4, 2.4, 0.5) | `FUN_004e0740` stage 1 |
| `0x42` (66) | **tent** | (4, 4, 3) | stage 2, `rand()%4 == 0` |
| `0x45` (69) | **wood-mat** | (2, 2, 0.1) | stage 2, `rand()%4 == 3` |
| `0x10` (16) | stool | (1, 1, 0.5) | stage 2, `rand()%4 == 1` |
| `0x0c` (12) | table | (3, 3, 1) | stage 2, `rand()%4 == 2` |
| `0x0f` (15) | **stone-stool** | — | the dungeon scatter (the style-4 id `RE_52a830_scatter.md` found missing) |

So `FUN_004e0740` — the odd-parity overworld prop emitter — is building a **campsite**: a
campfire at the anchor, then one of {tent, table, stool, wood-mat} at each of four
positions ±3.5 blocks around it. Every size in that table matches its model, which is the
check that the naming is right rather than merely consistent: a 2×2×0.1 record is a mat, a
4×4×3 record is a tent.

Types `0x43`/`0x44` are **beach-umbrella** and **beach-towel** — the same family, not
reached by any emitter RE'd so far.

## ⚠ Three corrections to `assets/props/prop_ids.json`

34 of its 37 rows are confirmed. Three are wrong:

| type | `prop_ids.json` | proven |
|---|---|---|
| 17 (`0x11`) | stone-stool | **sandstone-stool** |
| 50 (`0x32`) | street-light01 | **street-light02** |
| 51 (`0x33`) | street-light02 | **street-light01** |

The street-light swap is independently corroborated by emitter C, which is gated:
`FUN_004fc140 > 0.8` emits `0x33` with record size **(1, 1, 8)** and the other arm emits
`0x32` with **(2, 2, 8)** — and `street-light01.cub` is `[5, 5, 25]` where
`street-light02.cub` is `[6, 11, 25]`. The slimmer model takes the slimmer footprint.
`RE_zone_emitters_ac.md` named them the other way round on the strength of
`prop_ids.json`; that is corrected there too.

Also: **`prop_ids.json` type 14 = sandstone-table has no slot in the client array.**
`sandstone-table.cub` (db 2494) is loaded into the model DB but never bound to a static
type, and slot 14 is left null — so no prop can render as one. Types 6 and 70 are null
the same way.

## What the table adds

38 ids the file did not have, including the whole `door` / `window` / `trap` / `lever`
group (1-5, 7-9, 11) that dungeons use, `bed` (19), the three `market-stand`s (21-23),
`cupboard` / `desktop` / `counter` (29-31), nine `flower-vase`s (56-64), the campsite
family (65-69) and the seven crafting stations (71-77: furnace, anvil, spinningwheel,
loom, sawbench, workbench, customization-bench).

`raw/static_prop_models.json` holds both namespaces with the model-DB index and the
`.cub` name for every assigned slot, plus the null slots.

## Applied to the engine (RatForge `1b4a02e`)

`tools/cw_rederive/model_id_map.json`'s `static_entity_types` was rebuilt from this table
(38 → 75 rows, `ambiguous` false throughout, each row carrying its model-DB index) and
`cw_extract_props.py` re-run: the pack goes 40 → 85 models.

`dungeonPropModelName` in `src/worldgen/Dungeons.cpp` carried the same two errors **plus**
`chest-base`, which would have stopped resolving the moment the pack was rebuilt (the
`.cub` is `chest-base02`). Fixed; the switch now agrees with the client on all 37 rows but
one — `0x0e`, which the engine keeps drawing as `sandstone-table` even though the client
binds nothing, because the server's scatter still emits it. That divergence is stated in
the code and the packer keeps the model via `EXTRA_MODELS` for it.

Verified after the change: `--dungeontest` OK (*decoration props placed + resolvable*),
`--proptest` OK (85 models, 8/8 spot-checks), `--gentest` OK, and the whole `cwgen_test`
battery green with the **output hash unchanged at `AB6C2A00E6BF77A4`** — prop naming is a
rendering concern, not a generation one.
