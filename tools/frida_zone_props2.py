#!/usr/bin/env python3
"""Capture the overworld prop scatter by READING THE VECTOR, not the push_back.

The first rig (`frida_zone_props.py`) hooked `FUN_004d6670`, the out-of-line
`push_back` on the 0x188 prop record.  That undercounts: `FUN_004e0740`'s second
stage pushes into the *same* `site+0xc` vector through an **inlined** push_back
(`0x4e0c60`-`0x4e0cf9` writes `*(site+0x10)` and bumps it by 0x188), so those
records are invisible to a hook on the out-of-line call.  Its rand attribution was
also capped at 64 draws per record, which silently dropped the caller's retry loop.

This rig builds one zone at a time and then reads the whole vector, so the record
list is ground truth regardless of which push_back the compiler chose:

    site+0x0c  _Myfirst      site+0x10  _Mylast      site+0x14  _Myend

and records, per zone:

  * every `rand()` draw made inside the zone builder or `FUN_004e0740`, tagged by
    return-address RVA and by global draw index -- uncapped;
  * every call to `FUN_005287b0` (the settle-and-validate predicate) with the
    candidate record BEFORE and AFTER the call plus its verdict -- the callee
    mutates the record's Z in place, so both halves matter;
  * `FUN_004e0740`'s entry anchor (`param_2` = three int64s) and its return value;
  * every out-of-line `FUN_004d6670` push, for cross-checking against the vector.

    python tools/frida_zone_props2.py [zx zz]   -> raw/zone_props2_capture[_zx_zz].json
"""
import json
import os
import sys
import threading
import time

import frida

SB = r"C:\Users\asuna\AppData\Local\Temp\cw_re\sandbox_42069"
EXE = os.path.join(SB, "Server.exe")
# the same 56-zone sample as the first rig: a 6x6 block plus 20 scattered zones,
# deliberately balanced on (zx + zz) & 1
ZONES = ([(32790 + i, 32790 + j) for i in range(6) for j in range(6)]
         + [(32700 + 37 * i, 32900 - 53 * i + (i & 1)) for i in range(12)]
         + [(33020, 32660), (32610, 33111), (32950, 32950), (33101, 32778),
            (32530, 32531), (33210, 33210), (32660, 33021), (33111, 32611)])
DUNG = {(32795, 32796), (32796, 32787), (32780, 32788),
        (32804, 32788), (32804, 32811), (32787, 32796)}
ZONES = [z for z in ZONES if z not in DUNG]
NAME = "zone_props2_capture.json"
if len(sys.argv) >= 3:
    ZONES = [(int(sys.argv[1]), int(sys.argv[2]))]
    NAME = "zone_props2_capture_%d_%d.json" % ZONES[0]
OUT = os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", "raw", NAME)

JS = r"""
const b = Process.mainModule.base;
let world = null, genTid = -1, cap = false, randN = 0;
// the zone builder's body (FUN_00518630, NOP-split at 0x11c90a / 0x11ed6a) and
// FUN_004e0740, the standalone emitter it calls at 0x11cd1e
const ZB = [0x118630, 0x122000], E0 = [0xe0740, 0xe0f33];
let draws = [], settles = [], pushes = [], emits = [], site = null;

function inRange(rva){ return (rva >= ZB[0] && rva < ZB[1]) || (rva >= E0[0] && rva < E0[1]); }
function ra(ctx){ try { return ctx.returnAddress.sub(b).toUInt32(); } catch(e){ return -1; } }
function rd(p, n){ try { return Array.from(new Uint8Array(p.readByteArray(n))); } catch(e){ return null; } }

Interceptor.attach(b.add(0xd83a0), { onEnter(){ if (!world) world = this.context.ecx; } });
Interceptor.replace(b.add(0x149550), new NativeCallback(function(){}, 'void', ['pointer'], 'fastcall'));
Interceptor.replace(b.add(0xd78e0), new NativeCallback(function(){}, 'void', ['pointer','int','int'], 'thiscall'));

const m = Process.findModuleByName('MSVCR110.dll') || Process.findModuleByName('msvcr110.dll');
Interceptor.attach(m.getExportByName('rand'), { onLeave(rv){
  if (!cap || this.threadId !== genTid) return;
  const n = randN++;
  const r = ra(this);
  if (inRange(r)) draws.push([r, rv.toInt32(), n]);
}});

// FUN_005287b0(world, record*, site, char) -- settle the record onto the terrain and
// judge it.  It rewrites record+0x18 (Z, 16.16 int64), so snapshot both sides.
Interceptor.attach(b.add(0x1287b0), {
  onEnter(args){
    if (!cap || this.threadId !== genTid) return;
    this.hit = { ra: ra(this), n: randN, rec: args[0].toString(),
                 site: args[1].toString(), flag: args[2].toInt32() & 0xff,
                 before: rd(args[0], 0x30) };
    this.p = args[0];
    if (site === null) site = args[1].toString();
  },
  onLeave(rv){
    if (!this.hit) return;
    this.hit.after = rd(this.p, 0x30);
    this.hit.ok = rv.toInt32() & 0xff;
    settles.push(this.hit);
  }
});

// FUN_004d6670 = the OUT-OF-LINE push_back (`this` = site+0xc, args[0] = the record)
Interceptor.attach(b.add(0xd6670), { onEnter(args){
  if (!cap || this.threadId !== genTid) return;
  // record EVERY push, not just the zone builder's: the town builder shares this
  // vector, and an unattributed record is what made the first gate look exact
  const r = ra(this);
  pushes.push({ ra: r, n: randN, vec: this.context.ecx.toString(), rec: rd(args[0], 0x30) });
  // `this` is site+0xc -- emitter B never calls FUN_005287b0 or FUN_004e0740, so this
  // is the only place an even-parity zone reveals its site
  if (site === null) site = this.context.ecx.sub(0xc).toString();
}});

// FUN_004e0740(world, site, int64 pos[3]) -- the odd-parity emitter
Interceptor.attach(b.add(0xe0740), {
  onEnter(args){
    if (!cap || this.threadId !== genTid) return;
    site = args[0].toString();
    this.e = { n: randN, site: args[0].toString(), anchor: rd(args[1], 0x18) };
  },
  onLeave(rv){ if (this.e){ this.e.ret = rv.toInt32() & 0xff; this.e.n_end = randN; emits.push(this.e); } }
});

const zb = new NativeFunction(b.add(0x118630), 'void', ['pointer','uint32','uint32'], 'thiscall');

// read the whole prop vector out of a site
function vector(p){
  const s = ptr(p);
  const first = s.add(0xc).readPointer(), last = s.add(0x10).readPointer();
  const n = last.sub(first).toInt32() / 0x188;
  const out = [];
  for (let i = 0; i < n && i < 512; i++) out.push(rd(first.add(i * 0x188), 0x30));
  return { n: n, recs: out };
}

rpc.exports = {
  ready(){ return world ? world.toString() : null; },
  genOne(zx, zz){
    if (!world) return 'no-world';
    cap = true; genTid = Process.getCurrentThreadId();
    draws = []; settles = []; pushes = []; emits = []; site = null;
    const n0 = randN;
    zb(world, zx >>> 0, zz >>> 0);
    const out = { zone: [zx, zz], draws: draws, settles: settles, pushes: pushes,
                  emits: emits, site: site, randN0: n0, randN1: randN };
    if (site !== null) { try { out.vec = vector(site); } catch(e){ out.vecErr = '' + e; } }
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

        zones = []
        res = [None]

        def driver():
            for zx, zz in ZONES:
                r = api.gen_one(zx, zz)
                if isinstance(r, str):
                    print("  %d,%d -> %s" % (zx, zz, r), flush=True)
                    continue
                zones.append(r)
                print("  %d,%d  parity=%d  vec=%s  settles=%d  pushes=%d  draws=%d"
                      % (zx, zz, (zx + zz) & 1,
                         r.get("vec", {}).get("n", "?"), len(r["settles"]),
                         len(r["pushes"]), len(r["draws"])), flush=True)
            res[0] = "ok"

        th = threading.Thread(target=driver, daemon=True)
        th.start()
        th.join(2400)
        print("driver ->", res[0], flush=True)
        with open(OUT, "w") as f:
            json.dump({"seed": 42069, "zones": zones}, f)
        print("%d zones -> %s" % (len(zones), OUT), flush=True)
    finally:
        try:
            frida.kill(pid)
        except Exception:
            pass
    os._exit(0)


if __name__ == "__main__":
    main()
