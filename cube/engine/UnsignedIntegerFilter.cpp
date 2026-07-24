// UnsignedIntegerFilter (engine) -- cube. 1 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "UnsignedIntegerFilter.h"

/* plasma::UnsignedIntegerFilter::vfunction1 @ 00637e20  kind=game  attributed-by=rtti  size=89 */

undefined4 __thiscall
plasma::UnsignedIntegerFilter::vfunction1(UnsignedIntegerFilter *this,undefined4 *param_1)

{
  int iVar1;
  uint3 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar1 = param_1[4];
  uVar2 = (uint3)((uint)param_1 >> 8);
  if (iVar1 == 0) {
    return CONCAT31(uVar2,1);
  }
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      puVar4 = param_1;
      if (7 < (uint)param_1[5]) {
        puVar4 = (undefined4 *)*param_1;
      }
      if (*(ushort *)((int)puVar4 + iVar3 * 2) < 0x30) {
LAB_00637e71:
        return (uint)uVar2 << 8;
      }
      puVar4 = param_1;
      if (7 < (uint)param_1[5]) {
        puVar4 = (undefined4 *)*param_1;
      }
      if (0x39 < *(ushort *)((int)puVar4 + iVar3 * 2)) goto LAB_00637e71;
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return CONCAT31(uVar2,1);
}


