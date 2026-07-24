// UnsignedFloatFilter (engine) -- cube. 1 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "UnsignedFloatFilter.h"

/* plasma::UnsignedFloatFilter::vfunction1 @ 00637d90  kind=game  attributed-by=rtti  size=135 */

undefined4 __thiscall
plasma::UnsignedFloatFilter::vfunction1(UnsignedFloatFilter *this,undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  uint3 uVar4;
  undefined4 *puVar5;
  int iVar6;
  
  iVar1 = param_1[4];
  uVar4 = (uint3)((uint)param_1 >> 8);
  if (iVar1 == 0) {
    return CONCAT31(uVar4,1);
  }
  bVar3 = false;
  iVar6 = 0;
  if (0 < iVar1) {
    uVar2 = param_1[5];
    do {
      puVar5 = param_1;
      if (7 < uVar2) {
        puVar5 = (undefined4 *)*param_1;
      }
      if (*(short *)((int)puVar5 + iVar6 * 2) == 0x2e) {
LAB_00637e03:
        if (bVar3) {
LAB_00637dfa:
          return (uint)uVar4 << 8;
        }
        bVar3 = true;
      }
      else {
        puVar5 = param_1;
        if (7 < uVar2) {
          puVar5 = (undefined4 *)*param_1;
        }
        if (*(short *)((int)puVar5 + iVar6 * 2) == 0x2c) goto LAB_00637e03;
        puVar5 = param_1;
        if (7 < uVar2) {
          puVar5 = (undefined4 *)*param_1;
        }
        if (*(ushort *)((int)puVar5 + iVar6 * 2) < 0x30) goto LAB_00637dfa;
        puVar5 = param_1;
        if (7 < uVar2) {
          puVar5 = (undefined4 *)*param_1;
        }
        if (0x39 < *(ushort *)((int)puVar5 + iVar6 * 2)) goto LAB_00637dfa;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar1);
  }
  return CONCAT31(uVar4,1);
}


