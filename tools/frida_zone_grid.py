#!/usr/bin/env python3
"""Capture the zone builder's CANDIDATE GRID -- `0x51e839`-`0x51eab5`.

This is the last captured input of `gate_zone_camp.py`: the camp populator
(`FUN_005104e0`) is handed a `vector<int64 x,y,z>` of candidate positions and the gate
took that list as given.  The loop that builds it lives inline in the zone builder:

    for (i = 0; i < 14; i++)                       # [ebp-0x1338], offset [ebp-0x12ec] += 18
      for (j = 0; j < 14; j++)                     # [ebp-0x1360] += 18
        counter = i + 3*j                          # [ebp-0x1328], += 3 per inner step
        if (counter % M) continue                  # M = [ebp-0x1368]
        X = site[0x60]*256 + 4 + 18*i
        Y = site[0x64]*256 + 4 + 18*j
        w = FUN_0052c820(desc, X<<16, Y<<16)       # the feature falloff weight
        t = (1.0 - w) > 0 ? (1.0 - w)^2 : 0
        if (rand()/32767.0 > t*0.75) continue
        ... scan z up from the column base for the first non-solid block ...
        push (X<<16 + 32768, Y<<16 + 32768, z<<16)

so the rig records, in emit order and per zone: the site, the whole feature descriptor,
the live value of the modulus M, and for every cell that reaches the roll its `(X, Y)`,
the falloff weight the game computed, the squared term it derived from it, the `rand()`
it drew, and the record it pushed.

    python tools/frida_zone_grid.py [zx zz | --block zx zz n | --grid zx zz n step]
        -> raw/zone_grid_capture[...].json

`--grid` is the one to prefer: a feature covers several zones, so a solid block
re-samples the same handful of features (the lesson from `RE_5104e0_camp.md`).
"""
import json
import os
import sys
import threading
import time

import frida

SB = r"C:\Users\asuna\AppData\Local\Temp\cw_re\sandbox_42069"
EXE = os.path.join(SB, "Server.exe")

NAME = "zone_grid_capture.json"
if len(sys.argv) >= 6 and sys.argv[1] == "--grid":
    zx0, zz0, n, step = (int(x) for x in sys.argv[2:6])
    ZONES = [(zx0 + i * step, zz0 + j * step) for i in range(n) for j in range(n)]
    NAME = "zone_grid_capture_grid_%d_%d_%d_%d.json" % (zx0, zz0, n, step)
elif len(sys.argv) >= 5 and sys.argv[1] == "--block":
    zx0, zz0, n = int(sys.argv[2]), int(sys.argv[3]), int(sys.argv[4])
    ZONES = [(zx0 + i, zz0 + j) for i in range(n) for j in range(n)]
    NAME = "zone_grid_capture_%d_%d_%d.json" % (zx0, zz0, n)
elif len(sys.argv) >= 3:
    ZONES = [(int(sys.argv[1]), int(sys.argv[2]))]
    NAME = "zone_grid_capture_%d_%d.json" % ZONES[0]
else:
    ZONES = [(32780 + i, 32780 + j) for i in range(12) for j in range(12)]
DUNG = {(32795, 32796), (32796, 32787), (32780, 32788),
        (32804, 32788), (32804, 32811), (32787, 32796)}
ZONES = [z for z in ZONES if z not in DUNG]
OUT = os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", "raw", NAME)

JS = r"""
const b = Process.mainModule.base;
let world = null, genTid = -1, cap = false;
let cur = null;

function ra(ctx){ try { return ctx.returnAddress.sub(b).toUInt32(); } catch(e){ return -1; } }
function rd(p, n){ try { return Array.from(new Uint8Array(p.readByteArray(n))); } catch(e){ return null; } }
function i64(p){ try { return p.readS64().toString(); } catch(e){ return null; } }

Interceptor.attach(b.add(0xd83a0), { onEnter(){ if (!world) world = this.context.ecx; } });
Interceptor.replace(b.add(0x149550), new NativeCallback(function(){}, 'void', ['pointer'], 'fastcall'));
Interceptor.replace(b.add(0xd78e0), new NativeCallback(function(){}, 'void', ['pointer','int','int'], 'thiscall'));

// --- loop preamble: the site, the descriptor and the live modulus -------------------
Interceptor.attach(b.add(0x11e839), { onEnter(){
  if (!cap || this.threadId !== genTid) return;
  const ebp = this.context.ebp;
  const site = ebp.sub(0x1308).readPointer();
  const desc = ebp.sub(0x1300).readPointer();
  cur = { site: site.toString(),
          siteZone: [site.add(0x60).readS32(), site.add(0x64).readS32()],
          desc: rd(desc, 0x60),
          mod: ebp.sub(0x1368).readS32(),
          ev: [] };
}});

// --- the roll, and everything the cell computed on the way to it --------------------
// The whole cell is read at the `rand()` call, NOT at hooks placed inside the loop.
// Frida's ia32 interceptor does not preserve xmm/x87 across a callback, and the two
// obvious hook sites are both inside live float state: at `0x51e918` the game is holding
// 1.0f in xmm0 for the `subss` two instructions later, and a callback between the call
// to `0x52c820` and the `fstp` at `0x51e920` corrupts that function's x87 result -- a
// first cut hooked both and every zone came back with a constant garbage weight
// (2.74e21) and zero candidates, where the same zone really keeps 22.
//
// `0x51e94c` is safe: by then `X`, `Y`, the weight and the squared term are all spilled
// to the frame, and the game reloads xmm0/xmm1 from memory after the call.  rand's own
// prologue has not run at the hook point, so EBP is still the zone builder's.
const m = Process.findModuleByName('MSVCR110.dll') || Process.findModuleByName('msvcr110.dll');
Interceptor.attach(m.getExportByName('rand'), {
  onEnter(){
    if (!cur || this.threadId !== genTid) return;
    if (this.context.esp.readPointer().sub(b).toUInt32() !== 0x11e952) return;
    const ebp = this.context.ebp;
    this.cell = [ebp.sub(0x12f0).readS32(),      // X   (0x51e8d8)
                 ebp.sub(0x12dc).readS32(),      // Y   (0x51e8af)
                 ebp.sub(0x1330).readFloat(),    // w   (0x51e920 fstp)
                 ebp.sub(0x12d0).readFloat()];   // t   (0x51e936 / 0x51e944)
  },
  onLeave(rv){
    if (this.cell) cur.ev.push(['c', this.cell[0], this.cell[1], this.cell[2],
                                this.cell[3], rv.toInt32()]);
  }
});

// (`FUN_00406100`, the column lookup the z-scan starts from, is deliberately NOT hooked:
// it is the hottest function in the build and an Interceptor on it stalls the whole zone.
// The scanned z arrives in the pushed record anyway.)

// --- the accepted record ------------------------------------------------------------
Interceptor.attach(b.add(0xe1420), { onEnter(args){
  if (!cur || this.threadId !== genTid) return;
  if (ra(this) !== 0x11ea58) return;
  cur.ev.push(['p', rd(args[0], 0x18)]);
}});

// --- the final vector, as the camp populator sees it ---------------------------------
Interceptor.attach(b.add(0x1104e0), { onEnter(args){
  if (!cur || this.threadId !== genTid) return;
  cur.cand = [];
  try {
    const f = args[2].readPointer(), l = args[2].add(4).readPointer();
    const n = l.sub(f).toInt32() / 0x18;
    for (let i = 0; i < n && i < 1024; i++) cur.cand.push(rd(f.add(i * 0x18), 0x18));
  } catch(e){ cur.candErr = '' + e; }
}});

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
    if (!out) return null;            // feature type in {0,1,5,0xa,0xe}: loop never ran
    out.zone = [zx, zz];
    return out;
  }
};
"""


def main():
    if not os.path.exists(EXE):
        sys.exit("no sandbox server at %s" % EXE)
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

    def run():
        for k, (zx, zz) in enumerate(ZONES):
            print("  -> zone %d,%d" % (zx, zz), flush=True)
            try:
                h = script.exports_sync.gen_one(zx, zz)
            except Exception as exc:
                print("  zone %d,%d failed: %s" % (zx, zz, exc))
                continue
            if h:
                hits.append(h)
                print("  %4d/%d  zone %d,%d  mod=%s  rolls=%d  kept=%d"
                      % (k + 1, len(ZONES), zx, zz, h.get('mod'),
                         sum(1 for e in h['ev'] if e[0] == 'c'),
                         len(h.get('cand') or [])))
        done.set()

    threading.Thread(target=run, daemon=True).start()
    done.wait(timeout=3600)

    out = {"seed": 42069, "zones": len(ZONES), "hits": hits}
    with open(OUT, "w", encoding="utf-8") as fh:
        json.dump(out, fh)
    print("-> %s  (%d firing zones of %d)" % (os.path.abspath(OUT), len(hits), len(ZONES)))
    os._exit(0)


main()
