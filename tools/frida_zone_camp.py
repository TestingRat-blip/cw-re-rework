#!/usr/bin/env python3
"""Capture `FUN_005104e0` -- the fifth prop emitter, and what else it feeds.

`RE_zone_props.md` found this function by censusing `FUN_004ce8e0`
(`vector<PropRecord>::_Reserve`) instead of the out-of-line `push_back`: it pushes prop
records through an inlined `push_back`, so the old census could not see it.  Its body
also constructs `Spawn` objects and species lists, which is why nothing was named.

The zone builder calls it at `0x51eac7` with

    FUN_005104e0(world, site, featureDescriptor, &candidatePositions, 5)

after building a 14x14 grid of candidate positions (step 18 blocks, 0..234) at
`0x51e839`-`0x51eab5`, and only when the zone's feature type is not in {0, 1, 5, 0xa,
0xe}.  Most zones have no feature at all, so the rig sweeps a block and keeps only the
zones where the function actually fires.

Per firing it records:

  * the four arguments, the whole feature descriptor, and every candidate position;
  * every `rand()` draw inside the body (0x5104e0-0x5133a9, which spans the NOP-split
    fragment at 0x51210a), tagged by return-address RVA;
  * every `FUN_004f2be0` push (the 4-byte-element vector push_back it uses both for its
    internal species/kind lists and for `site+0x18`), tagged by target vector;
  * every `FUN_004f7540` / `FUN_005285c0` species-group call;
  * every `Prop_settleOnTerrain` test, with the record before and after;
  * `site+0xc` (props) and `site+0x18` (entity pointers) before and after, plus a dump
    of every `Spawn` the call added.

    python tools/frida_zone_camp.py [zx zz | --block zx zz n]
        -> raw/zone_camp_capture[_zx_zz].json
"""
import json
import os
import sys
import threading
import time

import frida

SB = r"C:\Users\asuna\AppData\Local\Temp\cw_re\sandbox_42069"
EXE = os.path.join(SB, "Server.exe")

NAME = "zone_camp_capture.json"
if len(sys.argv) >= 6 and sys.argv[1] == "--grid":
    # sparse sampling: a feature covers several zones, so a solid block re-samples the
    # same handful of features.  Striding hits far more distinct ones for the same cost.
    zx0, zz0, n, step = (int(x) for x in sys.argv[2:6])
    ZONES = [(zx0 + i * step, zz0 + j * step) for i in range(n) for j in range(n)]
    NAME = "zone_camp_capture_grid_%d_%d_%d_%d.json" % (zx0, zz0, n, step)
elif len(sys.argv) >= 5 and sys.argv[1] == "--block":
    zx0, zz0, n = int(sys.argv[2]), int(sys.argv[3]), int(sys.argv[4])
    ZONES = [(zx0 + i, zz0 + j) for i in range(n) for j in range(n)]
    NAME = "zone_camp_capture_%d_%d_%d.json" % (zx0, zz0, n)
elif len(sys.argv) >= 3:
    ZONES = [(int(sys.argv[1]), int(sys.argv[2]))]
    NAME = "zone_camp_capture_%d_%d.json" % ZONES[0]
else:
    # a block around the reference dungeons, wide enough to catch a few features
    ZONES = [(32780 + i, 32780 + j) for i in range(12) for j in range(12)]
DUNG = {(32795, 32796), (32796, 32787), (32780, 32788),
        (32804, 32788), (32804, 32811), (32787, 32796)}
ZONES = [z for z in ZONES if z not in DUNG]
OUT = os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", "raw", NAME)

JS = r"""
const b = Process.mainModule.base;
let world = null, genTid = -1, cap = false, randN = 0;
// FUN_005104e0 plus its NOP-split fragment at 0x51210a -- one body
const F5 = [0x1104e0, 0x1133a9];
let cur = null;

function ra(ctx){ try { return ctx.returnAddress.sub(b).toUInt32(); } catch(e){ return -1; } }
function inF5(r){ return r >= F5[0] && r < F5[1]; }
function rd(p, n){ try { return Array.from(new Uint8Array(p.readByteArray(n))); } catch(e){ return null; } }

Interceptor.attach(b.add(0xd83a0), { onEnter(){ if (!world) world = this.context.ecx; } });
Interceptor.replace(b.add(0x149550), new NativeCallback(function(){}, 'void', ['pointer'], 'fastcall'));
Interceptor.replace(b.add(0xd78e0), new NativeCallback(function(){}, 'void', ['pointer','int','int'], 'thiscall'));

const m = Process.findModuleByName('MSVCR110.dll') || Process.findModuleByName('msvcr110.dll');
Interceptor.attach(m.getExportByName('rand'), { onLeave(rv){
  if (!cap || this.threadId !== genTid) return;
  const n = randN++;
  if (cur && inF5(ra(this))) cur.draws.push([ra(this), rv.toInt32(), n]);
}});

// a vector<int32>::push_back the body uses for BOTH its internal kind/species lists and
// for site+0x18 (where the element is a Spawn*), so keep the target vector with each push
function vecHook(addr, bucket){
  Interceptor.attach(b.add(addr), { onEnter(args){
    if (!cur || this.threadId !== genTid) return;
    const r = ra(this);
    if (!inF5(r)) return;
    let v = null; try { v = args[0].readU32(); } catch(e){}
    cur[bucket].push([r, this.context.ecx.toString(), v, randN]);
  }});
}
vecHook(0xf2be0, 'vpush');       // vector<u32>::push_back

// SpeciesGroup_push_back -- read the GROUP being pushed, not just the fact of the push.
// A group is 0x18 bytes: two vector<int32> at +0 and +0xc, and the arms reset and refill
// them between pushes, so the contents at push time are the only ground truth.
function ints(p){
  const f = p.readPointer(), l = p.add(4).readPointer();
  const n = l.sub(f).toInt32() / 4, out = [];
  for (let i = 0; i < n && i < 64; i++) out.push(f.add(i * 4).readS32());
  return out;
}
Interceptor.attach(b.add(0x1285c0), { onEnter(args){
  if (!cur || this.threadId !== genTid) return;
  const r = ra(this);
  if (!inF5(r)) return;
  let g = null;
  try { g = [ints(args[0]), ints(args[0].add(0xc))]; } catch(e){ g = '' + e; }
  cur.gpush.push([r, this.context.ecx.toString(), args[0].toString(), g, randN]);
}});

Interceptor.attach(b.add(0xf7540), { onEnter(){        // SpeciesGroup_ctor
  if (!cur || this.threadId !== genTid) return;
  if (inF5(ra(this))) cur.gctor.push([ra(this), this.context.ecx.toString(), randN]);
}});

Interceptor.attach(b.add(0x1287b0), {                  // Prop_settleOnTerrain
  onEnter(args){
    if (!cur || this.threadId !== genTid) return;
    if (!inF5(ra(this))) return;
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

function vecOf(site, off, stride, n){        // read a std::vector out of the site
  const first = site.add(off).readPointer(), last = site.add(off + 4).readPointer();
  const cnt = last.sub(first).toInt32() / stride;
  const out = [];
  for (let i = 0; i < cnt && i < 4096; i++)
    out.push(n ? rd(first.add(i * stride), n) : first.add(i * stride).readU32());
  return out;
}

Interceptor.attach(b.add(0x1104e0), {
  onEnter(args){
    if (!cap || this.threadId !== genTid) return;
    const site = args[0], desc = args[1], cand = args[2];
    this.site = site;
    cur = { site: site.toString(), p4: args[3].toInt32(),
            desc: rd(desc, 0x60), draws: [], vpush: [], gpush: [], gctor: [],
            settles: [], randN0: randN };
    // the candidate grid: a vector of 0x18-byte {int64 x, y, z}
    try {
      const f = cand.readPointer(), l = cand.add(4).readPointer();
      const n = l.sub(f).toInt32() / 0x18;
      cur.cand = [];
      for (let i = 0; i < n && i < 1024; i++) cur.cand.push(rd(f.add(i * 0x18), 0x18));
    } catch(e){ cur.candErr = '' + e; }
    try { cur.props0 = vecOf(site, 0xc, 0x188, 0).length; } catch(e){}
    try { cur.ents0 = vecOf(site, 0x18, 4, 0); } catch(e){ cur.ents0 = []; }
  },
  onLeave(){
    if (!cur || !this.site) return;
    try { cur.props = vecOf(this.site, 0xc, 0x188, 0x30); } catch(e){ cur.propsErr = '' + e; }
    try {
      cur.ents = vecOf(this.site, 0x18, 4, 0);
      cur.spawns = [];
      for (const p of cur.ents.slice(cur.ents0.length))
        cur.spawns.push(rd(ptr(p), 0x60));
    } catch(e){ cur.entsErr = '' + e; }
    cur.randN1 = randN;
    this.done = cur;
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
    if (!out) return null;              // no feature in this zone: never called
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
            for k, (zx, zz) in enumerate(ZONES):
                r = api.gen_one(zx, zz)
                if isinstance(r, str):
                    print("  %d,%d -> %s" % (zx, zz, r), flush=True)
                    continue
                if r is None:
                    continue
                hits.append(r)
                print("  HIT %d,%d  cand=%d draws=%d vpush=%d gctor=%d settles=%d "
                      "props=%d spawns=%d"
                      % (zx, zz, len(r.get("cand") or []), len(r["draws"]),
                         len(r["vpush"]), len(r["gctor"]), len(r["settles"]),
                         len(r.get("props") or []), len(r.get("spawns") or [])),
                      flush=True)
            res[0] = "ok"

        th = threading.Thread(target=driver, daemon=True)
        th.start()
        th.join(5400)
        print("driver -> %s   %d of %d zones fired" % (res[0], len(hits), len(ZONES)),
              flush=True)
        with open(OUT, "w") as f:
            json.dump({"seed": 42069, "zones": [list(z) for z in ZONES],
                       "hits": hits}, f)
        print("-> %s" % OUT, flush=True)
    finally:
        try:
            frida.kill(pid)
        except Exception:
            pass
    os._exit(0)


if __name__ == "__main__":
    main()
