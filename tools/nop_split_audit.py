#!/usr/bin/env python3
"""Find Ghidra "functions" that are really MSVC alignment NOPs inside a bigger function.

Surfaced while RE-ing the dungeon mob pass: `FUN_0050702a` had 0 incoming references of any
kind and was filed as a jumptable case-body / artifact. It is neither -- the bytes at
`0x50702a` are `8d 9b 00 00 00 00` (`lea ebx,[ebx+0]`), the 6-byte NOP MSVC emits to 16-align
a loop head, sitting between a `jmp` and its target *inside* `FUN_00500300` (the dungeon
assembler). Ghidra started a function at the padding and gave it the whole rest of the body.

Signature of the pattern, all four parts required:
  1. zero incoming references (no call, no code pointer, no data pointer)
  2. the entry bytes are a multi-byte NOP
  3. the immediately preceding instruction stream ends in an unconditional `jmp` over it
  4. the previous function's body ends exactly at this address (contiguous tiling)

Anything matching should be merged into its predecessor, not counted as an artifact or a
`_indirect_*` handler. `adjudicate_none.py` imports `detect()` from here and gives every hit
the `body-split` role, so the merge happens in the pipeline rather than only in this report.

-> raw/<prog>.nopsplits.md, raw/<prog>.nopsplits.json
"""
import json
import os
import struct
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
RAW = os.path.join(ROOT, "raw")
GAME = r"C:\Users\asuna\Desktop\RatRealms\CubegameV1"

# the multi-byte NOP forms MSVC 11 emits as inter-block alignment padding
NOPS = [b"\x8d\x9b\x00\x00\x00\x00", b"\x8d\xbf\x00\x00\x00\x00", b"\x8d\xb6\x00\x00\x00\x00",
        b"\x8d\xa4\x24\x00\x00\x00\x00", b"\x8d\x64\x24\x00", b"\x8d\x49\x00", b"\x8d\x76\x00",
        b"\x0f\x1f", b"\x66\x90", b"\x90"]


def pe_reader(path):
    d = open(path, "rb").read()
    e = struct.unpack_from("<I", d, 0x3C)[0]
    nsec = struct.unpack_from("<H", d, e + 6)[0]
    optsz = struct.unpack_from("<H", d, e + 20)[0]
    base = struct.unpack_from("<I", d, e + 24 + 28)[0]
    secs = []
    for i in range(nsec):
        o = e + 24 + optsz + i * 40
        vs, va, rs, ra = struct.unpack_from("<IIII", d, o + 8)
        secs.append((va, vs, ra))

    def rd(vaddr, n):
        r = vaddr - base
        for va, vs, ra in secs:
            if va <= r < va + vs:
                return d[ra + (r - va):ra + (r - va) + n]
        return b""
    return rd


def detect(prog):
    """-> {addr8: {nop, jmp_over, owner, size}} for every zero-reference alignment-NOP split.

    Importable entry point; `adjudicate_none.py` calls this. Returns {} rather than raising
    if the binary is not on disk, so the pipeline still runs without the game installed.
    """
    try:
        hits, _ = audit(prog)
    except (OSError, KeyError, struct.error):
        return {}
    return {"%08x" % a: {"nop": b, "jmp_over": j, "owner": ("%08x" % o) if o else None,
                         "size": sz}
            for a, sz, b, j, o in hits}


def audit(prog):
    rd = pe_reader(os.path.join(GAME, prog))
    meta = {}
    for line in open(os.path.join(RAW, "%s.meta.jsonl" % prog), encoding="utf-8"):
        j = json.loads(line)
        a = int(j.get("address") or j.get("addr"), 16)
        meta[a] = j
    refs = {}
    for line in open(os.path.join(RAW, "%s.indirefs.jsonl" % prog), encoding="utf-8"):
        j = json.loads(line)
        refs[int(j.get("address") or j.get("addr"), 16)] = j

    starts = sorted(meta)
    hits = []
    for n, a in enumerate(starts):
        r = refs.get(a)
        if r is None or r["direct"] or r["code_ptr"] or r["data_ptr"]:
            continue
        b = rd(a, 8)
        nop = next((x for x in NOPS if b.startswith(x)), None)
        if nop is None:
            continue
        # part 3: the preceding instruction is a `jmp rel8` that hops exactly over the NOP
        pre = rd(a - 2, 2)
        jumped = len(pre) == 2 and pre[0] == 0xEB and (a - 2) + 2 + pre[1] == a + len(nop)
        # walk back over the run of zero-reference neighbours to the owning function
        owner, k = None, n - 1
        while k >= 0:
            p = starts[k]
            pr = refs.get(p)
            if pr is None or pr["direct"] or pr["code_ptr"] or pr["data_ptr"]:
                owner = p
                break
            k -= 1
        hits.append((a, meta[a].get("size") or 0, nop.hex(), jumped, owner))
    return hits, len(refs)


def main():
    progs = sys.argv[1:] or ["Server.exe", "Cube.exe"]
    for prog in progs:
        hits, total = audit(prog)
        out = os.path.join(RAW, "%s.nopsplits.md" % prog)
        with open(out, "w", encoding="utf-8") as f:
            f.write("# %s -- zero-reference functions that are alignment NOPs\n\n" % prog)
            f.write("%d of %d functions. Each should be merged into its owning function.\n\n"
                    % (len(hits), total))
            f.write("| addr | body bytes Ghidra gave it | NOP | jmp hops over it | owning function |\n")
            f.write("|---|---|---|---|---|\n")
            for a, sz, b, jumped, owner in hits:
                f.write("| `0x%08x` | %d | `%s` | %s | %s |\n"
                        % (a, sz, b, "yes" if jumped else "-",
                           ("`0x%08x`" % owner) if owner else "unresolved"))
        with open(os.path.join(RAW, "%s.nopsplits.json" % prog), "w", encoding="utf-8") as f:
            json.dump(detect(prog), f, indent=0, sort_keys=True)
        named = sum(1 for h in hits if h[4])
        jmp = sum(1 for h in hits if h[3])
        print("%-11s %4d/%d zero-ref functions are alignment NOPs (%d with the jmp-over, "
              "%d traced to an owner) -> %s"
              % (prog, len(hits), total, jmp, named, os.path.relpath(out, ROOT)))


if __name__ == "__main__":
    main()
