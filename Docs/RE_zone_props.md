# The overworld prop scatter — opened, and Phase 2's premise retired

Phase 2 of `WORLDGEN_RE_PLAN.md` said to start at `FUN_004c8420`, "the Phase-12 prop/decoration
entity emitter". That is wrong — `004c8420` is `DungeonProp_copy_0x188`, the record's copy ctor
(relabelled 2026-07-24 while doing the dungeon lights). This is where the layer actually lives.

```
python tools/frida_zone_props.py     # 56 zones -> raw/zone_props_capture.json
python tools/gate_zone_props.py      # the invariants below
```

---

## The census that scopes the whole layer

Rather than guess which function emits props, ask who *can*: every prop is a 0x188 record pushed
by `FUN_004d6670` and built by `FUN_004c84b0`. Their combined caller list is nine sites, and it
covers the entire game:

| caller | subsystem | state |
|---|---|---|
| `004e310a`, `004eaa7a`, `004ee3aa` | **town builder** | open |
| `00502dca`, `005054fa` | dungeon assembler | ✅ done (`RE_dungeon_lights.md`, `RE_52a830_scatter.md`) |
| `00524540` | `creature_spawn_builder` | ✅ done (the mob pass) |
| `004e0740` | called **only** by the zone builder | this document |
| `0051c90a`, `0051ed6a` | **zone builder** (NOP-split fragments of `FUN_00518630`) | this document |

So the remaining prop work is exactly two subsystems: the overworld zone builder and the town
builder. Nothing else in Server.exe can produce one.

## The zone builder's four emit sites

```
0x51cd1e  -> FUN_004e0740   inside a retry loop, up to 10 candidate positions (@0x51cd34)
0x51dbf5  inline emitter A  -- never fired in 56 zones
0x51e796  inline emitter B
0x51fcdb  inline emitter C  -- never fired in 56 zones
```

## What 56 live zones establish

The sample is a 6×6 block plus 20 zones scattered across other regions. ⚠ The first attempt at
the scattered set drew every one of them with an **even** `zx + zz` by accident, which tested
nothing; it is now balanced on purpose, 10 odd and 10 even.

- **Exactly one prop per zone**, pushed into that zone's *own* `site+0xc` — 54 props, 54
  distinct vectors.
- **Which emitter runs is `(zx + zz) & 1`.** Even → emitter B, odd → `FUN_004e0740`. 54/54,
  including out of sample.
- **Emitter B** always emits type **0** — `goddess2`, the client's `Statue` entity — sized
  `(2, 2, 8)`, with `dir = rand() % 4` (`0x51e774`). Its Z is one above the first solid block
  found by scanning **down**: `0x51e647` calls `World_getBlockAt`, `0x51e650` masks
  `& 0x1f` and loops while the class is 0 or 2. That is `Block_isSolid` again — a third
  independent call site for the predicate the mob pass and the wall stub already proved.
- **`FUN_004e0740`** always emits type **0x41** sized `(2.4, 2.4, 0.5)`, and may place nothing:
  it opens by evaluating `FUN_0052cd50` — the climate/river field — and returns immediately when
  `1.0 - gate*50.0 >= 0.0`, i.e. **on a river band** (`gate <= 0.02`, the same constant the
  river RE proved). 2 of the 26 odd-parity zones produced no prop.

The gate locks all of that plus "the prop lands inside its own zone's 256-block square".

## Open, in order

1. **The position.** Both emitters jitter within the zone; the draws are captured
   (`rands` per record) but the arithmetic is not decoded yet.
2. **`FUN_004e0740`'s second stage.** After its first push it runs a `rand() % 4` switch
   selecting ids `0x10` / `0x0c` / `0x45` / `0x42` with sizes `(1,1,0.5)` / `(3,3,1)` /
   `(2,2,0.1)` / `(4,4,3)`. Only one `FUN_004d6670` call exists in its body, so those records go
   to a **different container** — find it.
3. **Emitters A and C**, which no sampled zone reached. Read their gates statically rather than
   sampling blindly for them.
4. **Ids beyond the table.** `assets/props/prop_ids.json` stops at 0x37; `0x41`, `0x42` and
   `0x45` are unnamed. The client's type→slot table is the source the existing rows came from.
5. **The town builder's three emitters**, the other half of the census.
