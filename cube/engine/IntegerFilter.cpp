// IntegerFilter (engine) -- cube. 1 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "IntegerFilter.h"

/* plasma::IntegerFilter::vfunction1 @ 00637d10  kind=game  attributed-by=rtti  size=113 */

undefined4 __thiscall plasma::IntegerFilter::vfunction1(IntegerFilter *this,short *param_1)

{
  uint uVar1;
  uint3 uVar2;
  uint uVar3;
  short *psVar4;
  
  uVar2 = (uint3)((uint)param_1 >> 8);
  if (*(int *)(param_1 + 8) == 0) {
    return CONCAT31(uVar2,1);
  }
  uVar1 = *(uint *)(param_1 + 10);
  psVar4 = param_1;
  if (7 < uVar1) {
    psVar4 = *(short **)param_1;
  }
  uVar3 = (uint)(*psVar4 == 0x2d);
  while( true ) {
    if (*(int *)(param_1 + 8) <= (int)uVar3) {
      return CONCAT31(uVar2,1);
    }
    psVar4 = param_1;
    if (7 < uVar1) {
      psVar4 = *(short **)param_1;
    }
    if ((ushort)psVar4[uVar3] < 0x30) break;
    psVar4 = param_1;
    if (7 < uVar1) {
      psVar4 = *(short **)param_1;
    }
    if (0x39 < (ushort)psVar4[uVar3]) break;
    uVar3 = uVar3 + 1;
  }
  return (uint)uVar2 << 8;
}


