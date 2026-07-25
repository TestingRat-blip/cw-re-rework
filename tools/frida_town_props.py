#!/usr/bin/env python3
"""Capture the TOWN builder's prop and spawn layer (`FUN_004e28e0`).

The prop census in `RE_zone_props.md` listed the town builder as three emit sites --
`004e310a`, `004eaa7a`, `004ee3aa`.  Those are not emit sites and not functions: each is
an `8d 9b 00 00 00 00` MSVC alignment NOP that an `eb 06` hops over, i.e. one of the three
points where Ghidra split the builder's ~64 KB body.  The real surface inside
`0x4e28e0`-`0x4f26e9` is

    56  FUN_004d6670   prop push_back        32  FUN_005287b0  Prop_settleOnTerrain
    12  FUN_004c84b0   prop record ctor      16  FUN_00524540  creature_spawn_builder
   170  rand() sites

and none of it is inlined -- the town builder is absent from `FUN_004ce8e0`'s caller list,
so every prop it makes goes through the out-of-line push_back.

The zone builder calls it at `0x51d452` for feature type **1 or 5** only:

    FUN_004e28e0(world, site, featureDescriptor)

so town zones are exactly the ones the camp populator skips.  Towns are sparse; sweep a
grid and keep the zones that fire.

    python tools/frida_town_props.py [zx zz | --block zx zz n | --grid zx zz n step]
        -> raw/town_props_capture*.json
"""
import json
import os
import sys
import threading
import time

import frida

SB = r"C:\Users\asuna\AppData\Local\Temp\cw_re\sandbox_42069"
EXE = os.path.join(SB, "Server.exe")

def town_zones(nreg, reg0=510):
    """Zones that actually hold a town, from the already-bit-exact feature generator.

    Blind sweeping is hopeless here -- towns are feature types 1 and 5, and a 256-zone
    sparse grid turned up one, in a zone at the edge of its town's radius that emitted
    nothing.  `cw_featuregen` reproduces a region's 64 feature cells from the seed, so
    ask it for the type-1/5 cells and go straight to their own zones.
    """
    sys.path.insert(0, os.path.join(os.path.dirname(os.path.abspath(__file__)),
                                    "..", "..", "cw_rederive"))
    import cw_featuregen
    import cw_seed
    base = cw_seed.base_for_seed(42069)
    out = []
    for rx in range(reg0, reg0 + nreg):
        for rz in range(reg0, reg0 + nreg):
            for c in cw_featuregen.generated_cells(base, rx, rz):
                if c["type"] in (1, 5):
                    out.append(((c["cx"] >> 16) >> 8, (c["cz"] >> 16) >> 8))
    return sorted(set(out))


NAME = "town_props_capture.json"
if len(sys.argv) >= 2 and sys.argv[1] == "--towns":
    nreg = int(sys.argv[2]) if len(sys.argv) > 2 else 3
    ZONES = town_zones(nreg)
    NAME = "town_props_capture_towns_%d.json" % nreg
elif len(sys.argv) >= 6 and sys.argv[1] == "--grid":
    zx0, zz0, n, step = (int(x) for x in sys.argv[2:6])
    ZONES = [(zx0 + i * step, zz0 + j * step) for i in range(n) for j in range(n)]
    NAME = "town_props_capture_grid_%d_%d_%d_%d.json" % (zx0, zz0, n, step)
elif len(sys.argv) >= 5 and sys.argv[1] == "--block":
    zx0, zz0, n = (int(x) for x in sys.argv[2:5])
    ZONES = [(zx0 + i, zz0 + j) for i in range(n) for j in range(n)]
    NAME = "town_props_capture_%d_%d_%d.json" % (zx0, zz0, n)
elif len(sys.argv) >= 3:
    ZONES = [(int(sys.argv[1]), int(sys.argv[2]))]
    NAME = "town_props_capture_%d_%d.json" % ZONES[0]
else:
    ZONES = [(33020 + i, 32660 + j) for i in range(6) for j in range(6)]
DUNG = {(32795, 32796), (32796, 32787), (32780, 32788),
        (32804, 32788), (32804, 32811), (32787, 32796)}
ZONES = [z for z in ZONES if z not in DUNG]
OUT = os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", "raw", NAME)

JS = r"""
const b = Process.mainModule.base;
let world = null, genTid = -1, cap = false, randN = 0;
// FUN_004e28e0 and its three NOP-split fragments are one body
const TB = [0xe28e0, 0xf26f0];
let cur = null, collecting = false;

function ra(ctx){ try { return ctx.returnAddress.sub(b).toUInt32(); } catch(e){ return -1; } }
function inTB(r){ return r >= TB[0] && r < TB[1]; }
function rd(p, n){ try { return Array.from(new Uint8Array(p.readByteArray(n))); } catch(e){ return null; } }

Interceptor.attach(b.add(0xd83a0), { onEnter(){ if (!world) world = this.context.ecx; } });
Interceptor.replace(b.add(0x149550), new NativeCallback(function(){}, 'void', ['pointer'], 'fastcall'));
Interceptor.replace(b.add(0xd78e0), new NativeCallback(function(){}, 'void', ['pointer','int','int'], 'thiscall'));

const m = Process.findModuleByName('MSVCR110.dll') || Process.findModuleByName('msvcr110.dll');
Interceptor.attach(m.getExportByName('rand'), { onLeave(rv){
  if (!cap || this.threadId !== genTid) return;
  const n = randN++;
  if (cur && collecting && inTB(ra(this))) cur.draws.push([ra(this), rv.toInt32(), n]);
}});

// FUN_004d6670 -- the out-of-line prop push_back (`this` = the target vector)
Interceptor.attach(b.add(0xd6670), { onEnter(args){
  if (!cur || !collecting || this.threadId !== genTid) return;
  // record EVERY push made while the town builder runs, not only the ones from its own
  // body: it calls out to helpers that push too, and filtering by RA loses them (369
  // records in one town's vector against 246 pushes from the body alone)
  cur.pushes.push({ ra: ra(this), n: randN, vec: this.context.ecx.toString(),
                    rec: rd(args[0], 0x30) });
}});

// FUN_005287b0 -- Prop_settleOnTerrain, which rewrites the record's Z in place
Interceptor.attach(b.add(0x1287b0), {
  onEnter(args){
    if (!cur || !collecting || this.threadId !== genTid) return;
    this.h = { ra: ra(this), n: randN, before: rd(args[0], 0x30) };
    this.p = args[0];
  },
  onLeave(rv){
    if (!this.h) return;
    this.h.after = rd(this.p, 0x30);
    this.h.ok = rv.toInt32() & 0xff;
    cur.settles.push(this.h);
  }
});

// The PLOT TABLE.  FUN_004f36f0(&vectorHeader, n*n) allocates the n*n plot array,
// 0x1c bytes a record; FUN_004e19f0 is the plot sort, which runs once per town after the
// table is filled.  Recipe from the parent project's tools/cubeworld_re/capture_town.py,
// where the table's coordinate math is already bit-exact.
let plotHdr = 0, plotCount = 0;
function readPlots(){
  if (!plotHdr) return null;
  try {
    const base = ptr(plotHdr).readU32();
    const out = [];
    for (let i = 0; i < plotCount && i < 256; i++)
      out.push(rd(ptr(base).add(i * 0x1c), 0x1c));
    return out;
  } catch(e){ return null; }
}
Interceptor.attach(b.add(0xf36f0), { onEnter(){
  if (!cur || !collecting || this.threadId !== genTid) return;
  plotHdr = this.context.ecx.toUInt32();
  plotCount = this.context.esp.add(4).readInt();
}});
Interceptor.attach(b.add(0xe19f0), { onEnter(){
  if (!cur || !collecting || this.threadId !== genTid) return;
  if (!cur.plotsAtSort) cur.plotsAtSort = readPlots();
}});
// A second snapshot taken LATE -- FUN_004d8dc0 is the house's module-count accessor, so
// the first call is well after role promotion has rewritten the plot record's +0xc.  The
// sort-time snapshot holds the raw verdict; this one holds the role.
Interceptor.attach(b.add(0xd8dc0), { onEnter(){
  if (!cur || !collecting || this.threadId !== genTid) return;
  if (!cur.plotsLate) cur.plotsLate = readPlots();
}});
// FUN_004e1f80(house, 3, 3, 4) -- the house ctor, hard-coded to a 3x3 module grid.
// Counting it says how many plots actually got a house.
Interceptor.attach(b.add(0xe1f80), { onEnter(args){
  if (!cur || !collecting || this.threadId !== genTid) return;
  cur.houses.push([args[0].toInt32(), args[1].toInt32(), args[2].toInt32(), randN]);
}});

// FUN_00524540 -- creature_spawn_builder; the town's inhabitants
Interceptor.attach(b.add(0x124540), { onEnter(args){
  if (!cur || !collecting || this.threadId !== genTid) return;
  const r = ra(this);
  if (!inTB(r)) return;
  // (src, pos, orient, p4, type, p6, p7, outList, p9)
  cur.spawncalls.push({ ra: r, n: randN, pos: rd(args[1], 0x18),
                        orient: args[2].toInt32(), type: args[4].toInt32(),
                        out: args[7].toString() });
}});

function vecOf(site, off, stride, n){
  const first = site.add(off).readPointer(), last = site.add(off + 4).readPointer();
  const cnt = last.sub(first).toInt32() / stride;
  const out = [];
  for (let i = 0; i < cnt && i < 8192; i++)
    out.push(n ? rd(first.add(i * stride), n) : first.add(i * stride).readU32());
  return out;
}

Interceptor.attach(b.add(0xe28e0), {
  onEnter(args){
    if (!cap || this.threadId !== genTid) return;
    this.site = args[0];
    collecting = true;
    plotHdr = 0; plotCount = 0;
    cur = { site: args[0].toString(), desc: rd(args[1], 0x60),
            draws: [], pushes: [], settles: [], spawncalls: [], houses: [],
            randN0: randN };
    try { cur.props0 = vecOf(args[0], 0xc, 0x188, 0).length; } catch(e){ cur.props0 = 0; }
    try { cur.ents0 = vecOf(args[0], 0x18, 4, 0).length; } catch(e){ cur.ents0 = 0; }
  },
  onLeave(){
    if (!cur || !this.site) return;
    try { cur.props = vecOf(this.site, 0xc, 0x188, 0x30); } catch(e){ cur.propsErr = '' + e; }
    try { cur.ents = vecOf(this.site, 0x18, 4, 0).length; } catch(e){}
    cur.randN1 = randN;
    cur.plots = readPlots();
    cur.plotCount = plotCount;
    // stop here: genOne only clears `cur` after the whole zone build, so without this
    // the rig keeps recording pushes the town builder did not make
    collecting = false;
  }
});

const zb = new NativeFunction(b.add(0x118630), 'void', ['pointer','uint32','uint32'], 'thiscall');

rpc.exports = {
  ready(){ return world ? world.toString() : null; },
  genOne(zx, zz){
    if (!world) return 'no-world';
    cap = true; genTid = Process.getCurrentThreadId();
    cur = null;
    zb(world, zx >>> 0, zz >>> 0);
    const out = cur;
    cur = null;
    if (!out) return null;            // no town in this zone
    out.zone = [zx, zz];
    return out;
  }
};
"""


def main():
    if not os.path.exists(EXE):
        print("MISSING", EXE)
        sys.exit(1)
    pid = frida.spawn(EXE, cwd=SB)
    try:
        s = frida.attach(pid)
        sc = s.create_script(JS)
        sc.on("message", lambda mm, d: print("[msg]", mm, flush=True)
              if mm.get("type") != "send" else None)
        sc.load()
        frida.resume(pid)
        api = sc.exports_sync
        t0 = time.time()
        while api.ready() is None and time.time() - t0 < 20:
            time.sleep(0.3)
        print("world:", api.ready(), "  zones:", len(ZONES), flush=True)

        hits, res = [], [None]

        def driver():
            for zx, zz in ZONES:
                r = api.gen_one(zx, zz)
                if isinstance(r, str):
                    print("  %d,%d -> %s" % (zx, zz, r), flush=True)
                    continue
                if r is None:
                    continue
                hits.append(r)
                print("  TOWN %d,%d  draws=%d pushes=%d settles=%d spawns=%d props=%d"
                      % (zx, zz, len(r["draws"]), len(r["pushes"]), len(r["settles"]),
                         len(r["spawncalls"]), len(r.get("props") or [])), flush=True)
            res[0] = "ok"

        th = threading.Thread(target=driver, daemon=True)
        th.start()
        th.join(5400)
        print("driver -> %s   %d of %d zones had a town"
              % (res[0], len(hits), len(ZONES)), flush=True)
        with open(OUT, "w") as f:
            json.dump({"seed": 42069, "zones": [list(z) for z in ZONES], "hits": hits}, f)
        print("-> %s" % OUT, flush=True)
    finally:
        try:
            frida.kill(pid)
        except Exception:
            pass
    os._exit(0)


if __name__ == "__main__":
    main()
