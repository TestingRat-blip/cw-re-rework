// FloatFilter (engine) -- cube. 1 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "FloatFilter.h"

/* plasma::FloatFilter::vfunction1 @ 00637c60  kind=game  attributed-by=rtti  size=165 */

undefined4 __thiscall plasma::FloatFilter::vfunction1(FloatFilter *this,short *param_1)

{
  uint uVar1;
  bool bVar2;
  uint3 uVar3;
  uint uVar4;
  short *psVar5;
  
  uVar3 = (uint3)((uint)param_1 >> 8);
  if (*(int *)(param_1 + 8) == 0) {
    return CONCAT31(uVar3,1);
  }
  uVar1 = *(uint *)(param_1 + 10);
  psVar5 = param_1;
  if (7 < uVar1) {
    psVar5 = *(short **)param_1;
  }
  uVar4 = (uint)(*psVar5 == 0x2d);
  bVar2 = false;
  do {
    if (*(int *)(param_1 + 8) <= (int)uVar4) {
      return CONCAT31(uVar3,1);
    }
    psVar5 = param_1;
    if (7 < uVar1) {
      psVar5 = *(short **)param_1;
    }
    if (psVar5[uVar4] == 0x2e) {
LAB_00637cf1:
      if (bVar2) {
LAB_00637ce8:
        return (uint)uVar3 << 8;
      }
      bVar2 = true;
    }
    else {
      psVar5 = param_1;
      if (7 < uVar1) {
        psVar5 = *(short **)param_1;
      }
      if (psVar5[uVar4] == 0x2c) goto LAB_00637cf1;
      psVar5 = param_1;
      if (7 < uVar1) {
        psVar5 = *(short **)param_1;
      }
      if ((ushort)psVar5[uVar4] < 0x30) goto LAB_00637ce8;
      psVar5 = param_1;
      if (7 < uVar1) {
        psVar5 = *(short **)param_1;
      }
      if (0x39 < (ushort)psVar5[uVar4]) goto LAB_00637ce8;
    }
    uVar4 = uVar4 + 1;
  } while( true );
}


