# `site+0x48`, the stub's terrain probe, and the boss species vector — all three closed

The three items `WORLDGEN_RE_PLAN.md` still listed as open in the dungeon entity layer. All are
now derived and gated; one needed a new capture, one needed none at all.

```
python tools/frida_dungeon_marker.py [zx zz]   # capture -> raw/dungeon_marker_capture*.json
python tools/gate_dungeon_marker.py            # 12 markers + 480/480 probe verdicts
python tools/gate_dungeon_lights.py --all      # the stub SET, now fully derived
python tools/gate_5078b3_boss.py --all         # the species vector, now derived
```

---

## 1. `site+0x48` — a fourth container nobody had looked at

The assembler feeds four containers, not three. Alongside the `site+4` decor list, the
`site+0xc` prop vector and the `site+0x30` ground-item vector there is `site+0x48`, and exactly
**two call sites in the whole 36 KB body** push into it (`FUN_005284a0`):

| site | fires | record type |
|---|---|---|
| `0x5048c7` | the kind-4 **entrance** cell | 5 |
| `0x507aa0` | the `cell.flags & 4` **boss** block | 6 |

Both records are built by `FUN_004f7490`, take the type at `+0x00`, and get a position at
`+0x128` (3 × int64 16.16) through `FUN_00406380` → `FUN_00402a40`. One of each per dungeon —
so the container is the dungeon's **two structure markers**, not a scatter.

### The entrance marker — derived from the cell grid alone

```c
// 0x504832, the kind-4 arm of the cell dispatch at 0x504820
rec.type  = 5;
rec.pos   = ( baseX + I*10 + 5,  baseY + J*10 + 5,  baseZ + K*10 ) << 16;
rec.+0x14 = 1;                       // FUN_004f7490 (ctor)
rec.+0x11c = rec.+0x120 = -1;        // ctor, never written on this path
site->markers_0x48.push_back(rec);
```

Note the Z has **no `+5`** while X and Y do — the marker sits on the entrance cell's floor, not
at its centre. **6/6 exact** on every field across the six dungeons, and the kind-4 cell the
grid predicts is the cell the push happened on, 6/6.

### The boss marker — nothing new

`0x507aa0` writes type 6, copies the position straight off the boss spawn (`spawn+0x10`, so it
carries the float32 half-block rounding the boss RE already documents), and fills two fields the
entrance leaves at −1:

| field | source |
|---|---|
| `+0x11c` | `FUN_0041fff0(site+0x18)` |
| `+0x120` | `spawn+0x2c` — the boss's model byte, i.e. **the species that was picked** |

Watch the register: `esi` is the *spawn* until `0x507a7c` and the *site* after it, so
`[esi+0x2c]` and `[esi+0x48]` in adjacent instructions are fields of different objects. The
marker's cell is the single `cell.flags & 4` cell, 6/6.

---

## 2. The wall stub's third gate — derived, and order-free

`RE_dungeon_lights.md` modelled two of the stub's three gates (the coin and the solid-rock
neighbour) and left the third: a `FUN_00405fd0` + `FUN_004061f0` probe that drops the stub when
the point past the wall face comes back solid. Its probe points are **off the 10-unit lattice**,
so the grid rig's lattice dump never covered them.

Reading the four blocks gives an exactly symmetric rule — cell-centre in the tangential axis,
three blocks past the wall face in the normal axis, two up:

| dir | neighbour | record offset | **probe offset** | call |
|---|---|---|---|---|
| 0 | `(I, J-1)` | `(5, -1, 2)` | `(5, -3, 2)` | `0x504a4e` |
| 2 | `(I, J+1)` | `(5, 11, 2)` | `(5, 13, 2)` | `0x504c0b` |
| 3 | `(I-1, J)` | `(-1, 5, 2)` | `(-3, 5, 2)` | `0x504da4` |
| 1 | `(I+1, J)` | `(11, 5, 2)` | `(13, 5, 2)` | `0x504f55` |

`tools/frida_dungeon_marker.py` records every probe and then samples the finished world at all
four probe points of every cell. Two results:

- **order-free — 480/480.** Re-reading each probed point at `asmLeave` returns exactly what the
  probe saw mid-scan. The stub blocks run *before* their cell's box fill, so this was the real
  risk; it does not bite.
- **the verdict is the mob pass's material test — 480/480 derived.**
  `solid ⇔ (block[3] & 0x1f) ∉ {0, 2}`, evaluated on the finished world, reproduces every live
  boolean in call order.

With that, `gate_dungeon_lights.py` no longer checks only the records of the stubs that happened
to be emitted — it **predicts the whole stub set, in emit order**:

| zone | style | candidates | rejected | stubs |
|---|---|---|---|---|
| (32795, 32796) | 3 | 122 | 84 | 38 |
| (32780, 32788) | 1 | 115 | 62 | 53 |
| (32796, 32787) | 0 | 135 | 50 | 85 |
| (32804, 32788) | 3 | 108 | 4 | 104 |
| (32787, 32796) / (32804, 32811) | 2 | 0 | 0 | 0 |
| **total** | | **480** | **200** | **280** |

**What the rejects actually are matters for the port.** In the reference dungeon 79 of the 84
rejects read `(200, 200, 200, class 1)` — the *dungeon's own stone*, not terrain; only 5 are
terrain materials (`0x24`, `0x06`). So a terrain-height test alone does not model this gate.
RatForge's `Dungeons.cpp` currently rejects on `terr()` surface height at exactly these probe
offsets, which means it **over-emits stubs** wherever the wall backs onto the dungeon's own
mass. That is the one place this RE is ahead of the port.

---

## 3. The boss species vector — a four-way table, no capture needed

`gate_5078b3_boss.py` had been replaying `species` from the capture. It never needed to: the
vector `[ebp-0x2be8]` is built in the assembler's **prologue** (`0x500370`–`0x500693`) by a
five-entry jump table on `style - 1`:

```
005003b8  lea eax, [edx - 1]           ; edx = style
005003ca  cmp eax, 4
005003cd  ja  0x50065b                 ; the default arm
005003d3  jmp dword ptr [eax*4 + 0x509d80]
```

Reading the table off the binary:

| style | arm | species |
|---|---|---|
| 1 | `0x500538` | `{15, 16}` |
| 2 | `0x500538` | `{15, 16}` |
| 3 | `0x5004ae` | `{2, 3}` |
| 4 | `0x50065b` (default) | `{11, 12}` |
| 5 | `0x5003da` | `{78, 77}` |
| 0 | default — `0 - 1` is unsigned-huge, so it fails `ja` | `{11, 12}` |

Two things a reader would guess wrong: **styles 1 and 2 share an arm** (so it is a four-way
table, not six), and **the style-5 pair is stored descending** (`0x4e` then `0x4d`). All six
live vectors match, 6/6 — `[2,3] [15,16] [15,16] [11,12] [2,3] [15,16]` for styles
3, 1, 2, 0, 3, 2.

### The lead it opens

Each arm also fills two more creature lists (`[ebp-0x37c]`, `[ebp-0x370]`) which go to a
*second* container `[ebp-0x2bf4]` via `FUN_005285c0`, and the style-1/2 arm picks one of three
extra ids (`0x61` / `0x11` / `0x5e`) with a `rand() % 3`. That container is what the **mob**
pass's spawns read — `0x50754d` passes `[ebp-0x374]`, built per spawn just above, as
`FUN_00524540`'s species argument. Mob *placement* is already bit-exact; mob *species* is the
next thread, and it starts here rather than in the mob pass.

---

## Status

| item | state |
|---|---|
| `site+0x48` entrance marker | derived from the grid, 6/6 |
| `site+0x48` boss marker | cell + type derived, position = the gated boss spawn, 6/6 |
| stub terrain probe | derived, 480/480, and proven order-free |
| stub SET (all three gates) | derived in emit order, 280/280 |
| boss species vector | derived from the prologue jump table, 6/6 |
| chandelier `0x507760` | was already gated in `RE_hanging_decor.md` — the plan's "open" note was stale |

**Every emitter and every gate of the dungeon assembler is now reproducible from the cell grid,
the rand stream and the finished voxel stamp.** The remaining dungeon-entity work is the mob
*species* container and the engine half of light emission.
