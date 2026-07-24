#!/usr/bin/env python3
"""reccmp-style instruction comparison: our VS2012-compiled reconstruction vs the original.

Normalises both sides to (mnemonic, operand-shape) — absolute addresses, symbol names and
stack-slot spellings are masked, exactly as reccmp masks relocations — then diffs. A match
means the reconstruction compiles to the same instruction sequence as the shipped binary.

Inputs:
  <name>.asm            MASM listing from `cl /FA` (our reconstruction)
  <name>.orig.txt       Ghidra disasm of the original function (DisasmRange output)
"""
import re
import sys

# mask the parts reccmp ignores: constant pool refs, stack slots, absolute addresses
def norm(mnem, ops):
    ops = ops.lower()
    ops = re.sub(r"dword ptr ", "", ops)
    ops = re.sub(r"float ptr ", "", ops)
    # stack slots first (before const masking): _x$[ebp], tv131[esp-4], plain [ebp + 0x8]
    ops = re.sub(r"[\w$]*\[e[bs]p[^\]]*\]", "[STK]", ops)
    # constant-pool memory refs: __real@41a00000 and [0x0055874c] are the same operand kind
    ops = re.sub(r"__real@[0-9a-f]+", "[CONST]", ops)
    ops = re.sub(r"__xmm@[0-9a-f]+", "[CONST]", ops)
    ops = re.sub(r"\[0x[0-9a-f]+\]", "[CONST]", ops)
    ops = re.sub(r"\s+", " ", ops).strip().rstrip(",")
    ops = re.sub(r"\s*,\s*", ",", ops)          # normalise comma spacing
    mnem = mnem.lower()
    if mnem == "ret":                               # normalise ret imm: 0x8 == 8, ret == ret 0
        m = re.match(r"(?:0x)?([0-9a-f]+)", ops)
        ops = str(int(m.group(1), 16 if ops.startswith("0x") else 10)) if m else "0"
    if mnem == "call":                              # reccmp masks call destinations
        ops = "TARGET"
    # canonicalise conditional-jump synonyms (Ghidra "JC" == MASM "jb", same opcode 0x72)
    JSYN = {"jb": "jb", "jc": "jb", "jnae": "jb", "jae": "jae", "jnb": "jae", "jnc": "jae",
            "je": "je", "jz": "je", "jne": "jne", "jnz": "jne", "jbe": "jbe", "jna": "jbe",
            "ja": "ja", "jnbe": "ja", "jl": "jl", "jnge": "jl", "jge": "jge", "jnl": "jge",
            "jle": "jle", "jng": "jle", "jg": "jg", "jnle": "jg", "js": "js", "jns": "jns",
            "jp": "jp", "jnp": "jnp", "jmp": "jmp"}
    if mnem in JSYN:
        mnem = JSYN[mnem]
        ops = "LABEL"
    return mnem, ops


def parse_masm(path):
    out = []
    for line in open(path, encoding="utf-8", errors="replace"):
        s = line.strip()
        if not s or s.startswith(";") or "PROC" in s or "ENDP" in s or s.endswith(":"):
            continue
        if re.match(r"^[\w$]+\s*=", s):          # MASM symbol equate (tv131 = 8)
            continue
        m = re.match(r"^([a-z][a-z0-9]+)\s+(.*?)(?:\s*;.*)?$", s)
        if m and m.group(1) not in ("public", "extrn", "end", "title", "include"):
            out.append(norm(m.group(1), m.group(2)))
        elif re.match(r"^(ret|pop|push|cdq|cwde|leave|nop|fldz|fld1|fchs|fabs|fsqrt|fstp|fld)\b", s):
            mm = re.match(r"^(\w+)\s*(.*)$", s)
            out.append(norm(mm.group(1), mm.group(2)))
    return out


def parse_ghidra(path):
    out = []
    for line in open(path, encoding="utf-8", errors="replace"):
        m = re.match(r"^0x[0-9a-f]+\s+(\w+)\s*(.*)$", line.strip())
        if m:
            out.append(norm(m.group(1), m.group(2)))
    return out


def main():
    name = sys.argv[1]
    ours = parse_masm(name + ".asm")
    orig = parse_ghidra(name + ".orig.txt")
    n = max(len(ours), len(orig))
    match = 0
    print("  %-28s | %-28s" % ("ORIGINAL (shipped)", "OURS (VS2012 recompile)"))
    print("  " + "-" * 60)
    for i in range(n):
        o = orig[i] if i < len(orig) else ("", "")
        u = ours[i] if i < len(ours) else ("", "")
        ok = (o == u)
        if ok:
            match += 1
        print("  %-28s %s %-28s" % ("%s %s" % o, "==" if ok else "!=", "%s %s" % u))
    pct = 100.0 * match / max(1, n)
    print("  " + "-" * 60)
    print("  LINEAR MATCH:   %d/%d instructions (%.1f%%)" % (match, n, pct))
    # multiset: same instructions regardless of order (block layout / branch polarity)
    from collections import Counter
    co, cu = Counter(orig), Counter(ours)
    inter = sum((co & cu).values())
    union = sum((co | cu).values())
    print("  MULTISET MATCH: %d/%d instructions (%.1f%%)  [ignores block order]"
          % (inter, union, 100.0 * inter / max(1, union)))
    diff = (co - cu) + (cu - co)
    if diff:
        print("  differing instructions: " + ", ".join("%s %s" % k for k in diff))
    return 0 if match == n else 1


if __name__ == "__main__":
    sys.exit(main())
