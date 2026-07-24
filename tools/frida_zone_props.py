#!/usr/bin/env python3
"""Capture the OVERWORLD prop scatter -- the zone builder's own `site+0xc` emitters.

A caller census of the 0x188 prop record's push_back (`FUN_004d6670`) and ctor
(`FUN_004c84b0`) says exactly who emits props anywhere in the game:

    004e0740  a standalone emitter, called only from the zone builder
    004e310a / 004eaa7a / 004ee3aa   the town builder
    00502dca / 005054fa              the dungeon assembler   (done -- RE_dungeon_lights.md etc)
    0051c90a / 0051ed6a              the ZONE BUILDER        (this rig)
    00524540  creature_spawn_builder

So the overworld prop/vegetation entity layer is four emit sites inside
`FUN_00518630`'s body:

    0x51cd1e  -> FUN_004e0740        gated on the climate/river field (0x52cd50)
    0x51dbf5  inline emitter A
    0x51e796  inline emitter B
    0x51fcdb  inline emitter C

This records every record each one pushes, with the rand draws attributed by return
address, on a plain (non-dungeon) zone.

    python tools/frida_zone_props.py [zx zz]   -> raw/zone_props_capture[_zx_zz].json
"""
import base64
import json
import os
import sys
import threading
import time

import frida

SB = r"C:\Users\asuna\AppData\Local\Temp\cw_re\sandbox_42069"
EXE = os.path.join(SB, "Server.exe")
# a 6x6 block of plain zones near the reference dungeons, none of them a known
# dungeon zone -- enough biome variety to exercise all four emitters
ZONES = ([(32790 + i, 32790 + j) for i in range(6) for j in range(6)]
          # scattered across other regions, deliberately BALANCED on (zx+zz)&1 --
          # the first pass drew them all even by accident, which tested nothing
          + [(32700 + 37 * i, 32900 - 53 * i + (i & 1)) for i in range(12)]
          + [(33020, 32660), (32610, 33111), (32950, 32950), (33101, 32778),
             (32530, 32531), (33210, 33210), (32660, 33021), (33111, 32611)])
DUNG = {(32795, 32796), (32796, 32787), (32780, 32788),
        (32804, 32788), (32804, 32811), (32787, 32796)}
ZONES = [z for z in ZONES if z not in DUNG]
NAME = "zone_props_capture.json"
if len(sys.argv) >= 3:
    ZONES = [(int(sys.argv[1]), int(sys.argv[2]))]
    NAME = "zone_props_capture_%d_%d.json" % ZONES[0]
OUT = os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", "raw", NAME)

JS = r"""
const b = Process.mainModule.base;
let world = null, genTid = -1, cap = false, randN = 0;
const props = [], draws = [], events = [];
// the zone builder's body (FUN_00518630 is NOP-split into 0x11c90a and 0x11ed6a)
const ZB = [0x118630, 0x122000];
// FUN_004e0740, the standalone emitter the zone builder calls at 0x11cd1e
const E0 = [0xe0740, 0xe0f33];
let pend = [];   // draws since the last push_back
let curZone = null;

Interceptor.attach(b.add(0xd83a0), { onEnter(){ if (!world) world = this.context.ecx; } });
Interceptor.replace(b.add(0x149550), new NativeCallback(function(){}, 'void', ['pointer'], 'fastcall'));
Interceptor.replace(b.add(0xd78e0), new NativeCallback(function(){}, 'void', ['pointer','int','int'], 'thiscall'));

const m = Process.findModuleByName('MSVCR110.dll') || Process.findModuleByName('msvcr110.dll');
Interceptor.attach(m.getExportByName('rand'), { onLeave(rv){
  if (!cap || this.threadId !== genTid) return;
  randN++;
  let rva = 0; try { rva = this.returnAddress.sub(b).toUInt32(); } catch(e){ return; }
  const inZB = rva >= ZB[0] && rva < ZB[1], inE0 = rva >= E0[0] && rva < E0[1];
  if (!inZB && !inE0) return;
  if (pend.length < 64) pend.push([rva, rv.toInt32(), randN - 1]);
}});

// FUN_004d6670 = push_back on the prop vector (`this` = site+0xc, args[0] = the record)
Interceptor.attach(b.add(0xd6670), { onEnter(args){
  if (!cap || this.threadId !== genTid) return;
  let rva = 0; try { rva = this.returnAddress.sub(b).toUInt32(); } catch(e){ return; }
  const inZB = rva >= ZB[0] && rva < ZB[1], inE0 = rva >= E0[0] && rva < E0[1];
  if (!inZB && !inE0) return;
  const r = { ra: rva, randN: randN, vec: this.context.ecx.toString(), zone: curZone };
  try { r.b = Array.from(new Uint8Array(args[0].readByteArray(0x60))); } catch(e){}
  r.rands = pend; pend = [];
  if (props.length < 20000) props.push(r);
}});

const zb = new NativeFunction(b.add(0x118630), 'void', ['pointer','uint32','uint32'], 'thiscall');
rpc.exports = {
  ready(){ return world ? world.toString() : null; },
  gen(zones){
    if (!world) return 'no-world';
    cap = true; genTid = Process.getCurrentThreadId();
    const n0 = randN, done = [];
    try {
      for (const z of zones) {
        curZone = z;
        const p0 = props.length;
        zb(world, z[0]>>>0, z[1]>>>0);
        done.push([z[0], z[1], props.length - p0]);
      }
      return {zones: done, props: props.length, draws: randN - n0};
    } catch(e){ return 'EXC:'+e+' after '+done.length; }
  },
  count(){ return props.length; },
  slice(a, n){ return props.slice(a, a + n); }
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
        res = [None]

        def driver():
            res[0] = api.gen([list(z) for z in ZONES])

        th = threading.Thread(target=driver, daemon=True)
        th.start()
        th.join(1500)
        print("gen ->", res[0], flush=True)

        n = api.count()
        props = []
        for a in range(0, n, 500):
            props.extend(api.slice(a, 500))
        with open(OUT, "w") as f:
            json.dump({"seed": 42069, "zones": [list(z) for z in ZONES],
                       "result": res[0], "props": props}, f)
        print("props %d -> %s" % (len(props), OUT), flush=True)
    finally:
        try:
            frida.kill(pid)
        except Exception:
            pass
    os._exit(0)


if __name__ == "__main__":
    main()
