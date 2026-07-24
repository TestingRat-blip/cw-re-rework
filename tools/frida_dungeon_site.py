#!/usr/bin/env python3
"""Dump the dungeon SITE object the assembler is called with, to source its level and rank.

FUN_00500300's first stack argument is the site record -- the same object whose +0x4 / +0xc /
+0x18 / +0x30 / +0x48 containers the whole decoration pass fills. Its two remaining unmodelled
inputs come straight off it:

    ecx = [site + 0x80]   -> [ebp-0x2bac]   the dungeon LEVEL
    al  = [site + 0x84]   -> [ebp-0x2bd4]   the RARITY byte

Neither is written by any `mov [reg+0x80/0x84]` in .text (only struct copies are), so this
dumps the record itself plus the chunk entry the caller reads its style from
(`byte [chunk+0x18]` kind == 3, `byte [chunk+0x19]` sub-type = style), to find what they track.

-> raw/dungeon_site_capture[_zx_zz].json
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
ZONE = (32795, 32796)
NAME = "dungeon_site_capture.json"
if len(sys.argv) >= 3:
    ZONE = (int(sys.argv[1]), int(sys.argv[2]))
    NAME = "dungeon_site_capture_%d_%d.json" % ZONE
OUT = os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", "raw", NAME)

JS = r"""
const b = Process.mainModule.base;
let world = null, genTid = -1, cap = false;
const sites = [];

Interceptor.attach(b.add(0xd83a0), { onEnter(){ if (!world) world = this.context.ecx; } });
Interceptor.replace(b.add(0x149550), new NativeCallback(function(){}, 'void', ['pointer'], 'fastcall'));
Interceptor.replace(b.add(0xd78e0), new NativeCallback(function(){}, 'void', ['pointer','int','int'], 'thiscall'));

// FUN_00500300(site, p2, baseX, baseY, style, flag) -- args[0] is the site record.
Interceptor.attach(b.add(0x100300), { onEnter(args){
  if (!cap || this.threadId !== genTid) return;
  const p = args[0];
  const r = { site: p.toString(), p2: args[1].toInt32(),
              baseX: args[2].toInt32(), baseY: args[3].toInt32(),
              style: args[4].toInt32(), flag: args[5].toInt32(),
              world: this.context.ecx.toString() };
  try {
    r.level = p.add(0x80).readS32();
    r.rank  = p.add(0x84).readU8();
    r.bytes = Array.from(new Uint8Array(p.readByteArray(0xC0)));
  } catch(e){ r.err = ''+e; }
  sites.push(r);
}});

const zb = new NativeFunction(b.add(0x118630), 'void', ['pointer','uint32','uint32'], 'thiscall');
rpc.exports = {
  ready(){ return world ? world.toString() : null; },
  gen(zx, zz){
    if (!world) return 'no-world';
    cap = true; genTid = Process.getCurrentThreadId();
    try { zb(world, zx>>>0, zz>>>0); return {sites: sites.length}; }
    catch(e){ return 'EXC:'+e; }
  },
  sites(){ return sites; }
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
        sc.on("message", lambda mm, d: print("[msg]", mm.get("description", mm), flush=True)
              if mm.get("type") != "send" else None)
        sc.load()
        frida.resume(pid)
        api = sc.exports_sync
        t0 = time.time()
        while api.ready() is None and time.time() - t0 < 20:
            time.sleep(0.3)
        res = [None]

        def driver():
            res[0] = api.gen(ZONE[0], ZONE[1])
        th = threading.Thread(target=driver, daemon=True)
        th.start()
        th.join(timeout=300)
        time.sleep(1.0)
        sites = api.sites()
    finally:
        try:
            frida.kill(pid)
        except Exception:
            pass

    for r in sites:
        print("  site %s level=%s rank=%s style=%s flag=%s base=(%s,%s)"
              % (r["site"], r.get("level"), r.get("rank"), r["style"], r["flag"],
                 r["baseX"], r["baseY"]), flush=True)
        if r.get("bytes"):
            r["bytes_b64"] = base64.b64encode(bytes(r["bytes"])).decode()
            r.pop("bytes")
    with open(OUT, "w") as f:
        json.dump({"seed": 42069, "zone": ZONE, "sites": sites}, f)
    print("wrote %s" % os.path.normpath(OUT), flush=True)
    sys.stdout.flush()
    os._exit(0)


main()
