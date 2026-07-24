// Helpers (render) -- cube. 1 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Helpers.h"

/* FUN_004c7830 @ 004c7830  kind=gamemisc  attributed-by=caller-vote  size=132 */

void FUN_004c7830(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint *in_ECX;
  
  uVar1 = in_ECX[1];
  if ((param_1 < uVar1) && (uVar2 = *in_ECX, uVar2 <= param_1)) {
    if (uVar1 == in_ECX[2]) {
      FUN_004c6940(1);
    }
    if (in_ECX[1] != 0) {
      FUN_0040ee70(((int)(param_1 - uVar2) / 0x118) * 0x118 + *in_ECX);
      in_ECX[1] = in_ECX[1] + 0x118;
      return;
    }
  }
  else {
    if (uVar1 == in_ECX[2]) {
      FUN_004c6940(1);
    }
    if (in_ECX[1] != 0) {
      FUN_0040ee70(param_1);
    }
  }
  in_ECX[1] = in_ECX[1] + 0x118;
  return;
}


