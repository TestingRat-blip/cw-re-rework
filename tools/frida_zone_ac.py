#!/usr/bin/env python3
"""Capture the zone builder's emitters **A** (`0x51dbf5`) and **C** (`0x51fcdb`).

These are the last two open slices of Phase 2. `RE_zone_props.md` could only read their
record content statically because no sampled zone reached either. Their gates, read out
of the disassembly first (`Docs/RE_zone_emitters_ac.md`), say where to look:

**A** -- `if (desc[idx].type == 4)` at `0x51d46b`, i.e. the zone's feature-grid cell is a
type-4 (plateau/lake) cell. The branch first stamps a ring of `rand()%3 + 6` stone blobs
of radius 25 around the ZONE CENTRE, then emits one prop at that centre:
type `0x2d`, size (4, 4, 5), `dir = rand()%4`, both horizontal axes biased by
`+ftol(229376.0)` = +3.5 blocks, and Z settled by a descend-to-solid then
ascend-to-clear pair (`FUN_00406050`, uncapped -- not `Prop_settleOnTerrain`).

**C** -- inside the per-column loop at `0x51fa10`-`0x520371`, for a column whose top
solid block has class `0xb` with class 0 above it:

    road = FUN_004d19f0(x, y)                 # the village road field
    if (road <= 0.75) skip                                            0x51fb53
    if ((x + 90*y) % 470) skip                                        0x51fb70
    if (rand() % 16) skip                                             0x51fb7e
    for k in 0..6: if solid(x, y, z0+k) skip   # seven clear blocks    0x51fba0
    type = FUN_004fc140(x, y) > 0.8 ? 0x33 (1,1,8) : 0x32 (2,2,8)     0x51fc46
    pos  = (x<<16, y<<16, z0<<16); dir = rand()%4; push to site+0xc   0x51fcdb

so C needs a village AND sand AND a 470-lattice column AND a 1-in-16 roll. The rig
therefore also CENSUSES each zone's columns against C's first two gates, so a zone that
cannot fire says why instead of just staying silent.

    python tools/frida_zone_ac.py --t4 [nreg]      # zones of type-4 feature cells
    python tools/frida_zone_ac.py --towns [nreg]   # zones of type-1/5 cells
    python tools/frida_zone_ac.py zx zz
        -> raw/zone_ac_capture[...].json
"""
import json
import os
import sys
import threading
import time

import frida

SB = r"C:\Users\asuna\AppData\Local\Temp\cw_re\sandbox_42069"
EXE = os.path.join(SB, "Server.exe")
HERE = os.path.dirname(os.path.abspath(__file__))


def cells_of_type(nreg, types, reg0=510):
    """Zones whose feature cell is one of `types`, from the bit-exact feature generator.

    Sweeping blindly is the wrong move here (the lesson from RE_town_props.md): ask
    cw_featuregen which cells exist and go to their zones.
    """
    sys.path.insert(0, os.path.join(HERE, "..", "..", "cw_rederive"))
    import cw_featuregen
    import cw_seed
    base = cw_seed.base_for_seed(42069)
    out = []
    for rx in range(reg0, reg0 + nreg):
        for rz in range(reg0, reg0 + nreg):
            for c in cw_featuregen.generated_cells(base, rx, rz):
                if c["type"] in types:
                    out.append(((c["cx"] >> 16) >> 8, (c["cz"] >> 16) >> 8))
    return sorted(set(out))


CENSUS = "--census" in sys.argv
if CENSUS:
    sys.argv.remove("--census")
SCAN = "--scan" in sys.argv
if SCAN:
    sys.argv.remove("--scan")

NAME = "zone_ac_capture.json"
if len(sys.argv) >= 3 and sys.argv[1] == "--zones":
    ZONES = [tuple(int(v) for v in a.split(",")) for a in sys.argv[2:]]
    NAME = "zone_ac_capture_zones_%d.json" % len(ZONES)
elif len(sys.argv) >= 5 and sys.argv[1] == "--block":
    zx0, zz0, n = (int(x) for x in sys.argv[2:5])
    ZONES = [(zx0 + i, zz0 + j) for i in range(n) for j in range(n)]
    NAME = "zone_ac_capture_%d_%d_%d.json" % (zx0, zz0, n)
elif len(sys.argv) >= 2 and sys.argv[1] == "--t4":
    nreg = int(sys.argv[2]) if len(sys.argv) > 2 else 3
    ZONES = cells_of_type(nreg, (4,))
    NAME = "zone_ac_capture_t4_%d.json" % nreg
elif len(sys.argv) >= 2 and sys.argv[1] == "--towns":
    nreg = int(sys.argv[2]) if len(sys.argv) > 2 else 3
    ZONES = cells_of_type(nreg, (1, 5))
    NAME = "zone_ac_capture_towns_%d.json" % nreg
elif len(sys.argv) >= 3:
    ZONES = [(int(sys.argv[1]), int(sys.argv[2]))]
    NAME = "zone_ac_capture_%d_%d.json" % ZONES[0]
else:
    sys.exit(__doc__)
DUNG = {(32795, 32796), (32796, 32787), (32780, 32788),
        (32804, 32788), (32804, 32811), (32787, 32796)}
ZONES = [z for z in ZONES if z not in DUNG]
OUT = os.path.join(HERE, "..", "raw", NAME)

JS = r"""
const b = Process.mainModule.base;
let world = null, genTid = -1, cap = false, randN = 0;
let cur = null;

const RA_A_PUSH = 0x11dbfa;      // FUN_004d6670 from emitter A
const RA_C_PUSH = 0x11fce0;      // FUN_004d6670 from emitter C
const RA_C_ROAD = 0x11fb45;      // FUN_004d19f0 from emitter C's class-0xb branch

function ra(ctx){ try { return ctx.returnAddress.sub(b).toUInt32(); } catch(e){ return -1; } }
function rd(p, n){ try { return Array.from(new Uint8Array(p.readByteArray(n))); } catch(e){ return null; } }

Interceptor.attach(b.add(0xd83a0), { onEnter(){ if (!world) world = this.context.ecx; } });
Interceptor.replace(b.add(0x149550), new NativeCallback(function(){}, 'void', ['pointer'], 'fastcall'));
Interceptor.replace(b.add(0xd78e0), new NativeCallback(function(){}, 'void', ['pointer','int','int'], 'thiscall'));

// --- emitter A's gate, read for EVERY zone (0x51d45f is on the main path) -------------
// Integer-only code here, so a callback is safe (see RE_zone_grid.md on the xmm/x87 trap).
Interceptor.attach(b.add(0x11d45f), { onEnter(){
  if (!cap || this.threadId !== genTid || !cur) return;
  const ebp = this.context.ebp;
  try {
    const desc = ebp.sub(0x137c).readPointer();
    const off  = ebp.sub(0x1344).readS32();
    cur.gateA = { desc: desc.toString(), off: off,
                  type: desc.add(off + 0x18).readU8(),
                  // the whole 16-byte per-zone entry, to see what the type byte sits in
                  entry: rd(desc.add(off + 0x18), 16),
                  cx: ebp.sub(0x138c).readS32(),
                  cy: ebp.sub(0x1388).readS32() };
    cur.site = ebp.sub(0x1308).readPointer().toString();
    cur.randAtGateA = randN;
  } catch(e){ cur.gateAErr = '' + e; }
}});

// --- the two push sites ---------------------------------------------------------------
Interceptor.attach(b.add(0xd6670), { onEnter(args){
  if (!cur || this.threadId !== genTid) return;
  const r = ra(this);
  if (r !== RA_A_PUSH && r !== RA_C_PUSH) return;
  // thiscall: ecx is the vector, so the record is the FIRST stack argument
  cur.pushes.push({ ra: r, vec: this.context.ecx.toString(),
                    rec: rd(args[0], 0x30), n: randN });
}});

// --- how close emitter C gets: one call per class-0xb column ---------------------------
Interceptor.attach(b.add(0xd19f0), {
  onEnter(args){
    if (!cur || this.threadId !== genTid) return;
    if (ra(this) !== RA_C_ROAD) { this.c = null; return; }
    this.c = [args[0].toInt32(), args[1].toInt32()];
  },
  onLeave(){
    if (!this.c || !cur) return;
    cur.classB += 1;
    if (cur.roadSamples.length < 64) cur.roadSamples.push(this.c);
  }
});

const m = Process.findModuleByName('MSVCR110.dll') || Process.findModuleByName('msvcr110.dll');
Interceptor.attach(m.getExportByName('rand'), { onLeave(rv){
  if (!cap || this.threadId !== genTid) return;
  const n = randN++;
  if (!cur) return;
  const r = ra(this);
  if ((r >= 0x11d476 && r < 0x11dc00) || (r >= 0x11fa10 && r < 0x11fce6))
    cur.draws.push([r, rv.toInt32(), n]);
}});

// --- the column census: emitter C's first two gates, evaluated on the finished zone ----
// col+0x10 = baseZ, col+0x18 = block array (4 bytes/block), col+0x1c = count
// (from FUN_004d23f0's in-range path at 0x4d248d).
// thiscall: Frida wants the `this` pointer declared as the first parameter
const getCol = new NativeFunction(b.add(0x6100), 'pointer',
                                  ['pointer','int','int','pointer'], 'thiscall');

const roadAt = new NativeFunction(b.add(0xd19f0), 'float',
                                  ['pointer','int','int'], 'thiscall');

function census(site, zx, zz){
  const hist = {}, lat = {};
  let latCols = 0, sandLat = 0, sandLatRoad = 0, oob = 0;
  const roadHits = [];
  for (let i = 0; i < 256; i++) {
    for (let j = 0; j < 256; j++) {
      const x = zx * 256 + i, y = zz * 256 + j;
      const onLat = (((x + 90 * y) % 470) + 470) % 470 === 0;
      if (!onLat && ((i | j) & 3)) continue;         // full lattice + a 1-in-16 sample
      const col = getCol(world, x, y, site);
      if (col.isNull()) continue;
      let n = 0, arr = null;
      try { n = col.add(0x1c).readS32(); arr = col.add(0x18).readPointer(); } catch(e){ continue; }
      if (!n || arr.isNull()) continue;
      // emitter C's own rule, mirrored exactly (0x51fa8b-0x51fb26):
      //   `cmp i, count-1 ; jge LAB` -- so the LAST block always takes the qualify path,
      //   and the class it compares is read at index `count`, one past the counted
      //   extent.  Skipping that k undercounts the qualifying columns (it did, by 3-18
      //   per town), so the loop runs to n-1 inclusive and reads arr[k+1] as the game does.
      // The k = n-1 pass reads arr[n], which can land on an unmapped page -- the game
      // survives that (its allocation has slack), Frida's readU8 throws.  Guard it per
      // column so one unreadable tail cannot abort the whole zone's census.
      for (let k = 0; k < n; k++) {
        let c0, c1;
        try {
          if (k < n - 1) {
            const above = arr.add((k + 1) * 4 + 3).readU8() & 0x1f;
            if (above !== 0 && above !== 2) continue;    // `if (isSolid(blk)) skip`
          }
          c0 = arr.add(k * 4 + 3).readU8() & 0x1f;
          c1 = arr.add((k + 1) * 4 + 3).readU8() & 0x1f;
        } catch(e) { oob++; continue; }
        if (c1 !== 0) continue;
        hist[c0] = (hist[c0] || 0) + 1;
        if (onLat) {
          lat[c0] = (lat[c0] || 0) + 1;
          if (c0 === 0xb) {
            sandLat++;
            // emitter C's road gate, evaluated with the game's own function
            const r = roadAt(world, x, y);
            if (r > 0.75) { sandLatRoad++; if (roadHits.length < 32) roadHits.push([x, y, r]); }
          }
        }
      }
      if (onLat) latCols++;
    }
  }
  return { hist: hist, lat: lat, latCols: latCols, sandLat: sandLat,
           sandLatRoad: sandLatRoad, roadHits: roadHits, oob: oob };
}

const zb = new NativeFunction(b.add(0x118630), 'void', ['pointer','uint32','uint32'], 'thiscall');

rpc.exports = {
  ready(){ return world ? world.toString() : null; },
  // Emitter A's gate reads `region + idx*16 + 0x18` with idx = (zx%64)*64 + (zz%64)
  // (0x51a959-0x51a97c). One zone build materialises the region; then the WHOLE 64x64
  // per-zone table can be read at once, which beats sweeping for a type-4 zone.
  scanRegion(zx, zz){
    if (!world) return 'no-world';
    cap = true; genTid = Process.getCurrentThreadId();
    cur = { pushes: [], draws: [], classB: 0, roadSamples: [], zone: [zx, zz] };
    zb(world, zx >>> 0, zz >>> 0);
    const g = cur.gateA; cur = null;
    if (!g) return null;
    const region = ptr(g.desc);
    const base0 = (zx - (zx % 64)), base1 = (zz - (zz % 64));
    const hist = {}, byType = {};
    for (let i = 0; i < 64; i++) {
      for (let j = 0; j < 64; j++) {
        const idx = i * 64 + j;
        const t = region.add(idx * 16 + 0x18).readU8();
        hist[t] = (hist[t] || 0) + 1;
        if (t !== 0) {
          if (!byType[t]) byType[t] = [];
          if (byType[t].length < 40) byType[t].push([base0 + i, base1 + j]);
        }
      }
    }
    return { zone: [zx, zz], region: g.desc, hist: hist, byType: byType };
  },
  genOne(zx, zz, doCensus){
    if (!world) return 'no-world';
    cap = true; genTid = Process.getCurrentThreadId();
    cur = { pushes: [], draws: [], classB: 0, roadSamples: [], zone: [zx, zz] };
    zb(world, zx >>> 0, zz >>> 0);
    const out = cur;
    if (doCensus && out.site) {
      try { out.census = census(ptr(out.site), zx, zz); }
      catch(e){ out.censusErr = '' + e; }
    }
    cur = null;
    return out;
  }
};
"""


def main():
    if not os.path.exists(EXE):
        sys.exit("no sandbox server at %s" % EXE)
    print("%d zones to build" % len(ZONES))
    pid = frida.spawn([EXE], cwd=SB)
    session = frida.attach(pid)
    script = session.create_script(JS)
    script.on('message', lambda msg, data: print("  [js] %s" % msg))
    script.load()
    frida.resume(pid)

    for _ in range(600):
        time.sleep(0.1)
        try:
            if script.exports_sync.ready():
                break
        except Exception:
            pass
    else:
        sys.exit("world never appeared")

    hits, done = [], threading.Event()

    def run_scan():
        """One zone per region, then read that region's whole 64x64 per-zone table."""
        seen = set()
        for (zx, zz) in ZONES:
            key = (zx // 64, zz // 64)
            if key in seen:
                continue
            seen.add(key)
            try:
                r = script.exports_sync.scan_region(zx, zz)
            except Exception as exc:
                print("  region %s failed: %s" % (key, exc))
                continue
            if not r:
                continue
            hits.append(r)
            print("  region %d,%d  types: %s" % (key[0], key[1], r["hist"]), flush=True)
            for t, zs in sorted(r["byType"].items()):
                print("      type %s -> %d zones, e.g. %s" % (t, len(zs), zs[:6]), flush=True)
        done.set()

    def run():
        for k, (zx, zz) in enumerate(ZONES):
            try:
                h = script.exports_sync.gen_one(zx, zz, CENSUS)
            except Exception as exc:
                print("  zone %d,%d failed: %s" % (zx, zz, exc))
                continue
            if not h:
                continue
            hits.append(h)
            g = h.get("gateA") or {}
            cen = h.get("census") or {}
            print("  %3d/%d zone %d,%d  featType=%s  A=%d C=%d  class0xb cols=%d  "
                  "lat=%d sandLat=%d"
                  % (k + 1, len(ZONES), zx, zz, g.get("type"),
                     sum(1 for p in h["pushes"] if p["ra"] == 0x11dbfa),
                     sum(1 for p in h["pushes"] if p["ra"] == 0x11fce0),
                     h.get("classB", 0), cen.get("latCols", 0), cen.get("sandLat", 0)),
                  flush=True)
        done.set()

    threading.Thread(target=run_scan if SCAN else run, daemon=True).start()
    done.wait(timeout=7200)

    out = {"seed": 42069, "zones": len(ZONES), "hits": hits}
    with open(OUT, "w", encoding="utf-8") as fh:
        json.dump(out, fh)
    print("-> %s  (%d zones)" % (os.path.abspath(OUT), len(hits)))
    os._exit(0)


main()
