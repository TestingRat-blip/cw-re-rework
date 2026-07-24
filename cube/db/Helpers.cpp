// Helpers (db) -- cube. 2 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Helpers.h"

/* FUN_00527590 @ 00527590  kind=gamemisc  attributed-by=caller-vote  size=127 */

undefined4 FUN_00527590(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_005326d0(param_1,param_2);
  if ((*(byte *)(iVar1 + 0x1c) & 0x12) == 0) {
    uVar2 = FUN_0056bce0(iVar1,1);
    FUN_00532670(param_1);
    return uVar2;
  }
  FUN_00574600(iVar1);
  *(ushort *)(iVar1 + 0x1c) = *(ushort *)(iVar1 + 0x1c) & 0xfffd | 0x10;
  if (*(int *)(iVar1 + 0x18) != 0) {
    uVar2 = *(undefined4 *)(iVar1 + 4);
    FUN_00532670(param_1);
    return uVar2;
  }
  FUN_00532670(param_1);
  return 0;
}


/* FUN_00527610 @ 00527610  kind=gamemisc  attributed-by=caller-vote  size=95 */

int FUN_00527610(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_005326d0(param_1,param_2);
  if ((*(byte *)(iVar1 + 0x1c) & 0x10) == 0) {
    iVar2 = FUN_0056bce0(iVar1,1);
    if (iVar2 == 0) {
      FUN_00532670(param_1);
      return 0;
    }
  }
  iVar2 = *(int *)(iVar1 + 0x18);
  if ((*(ushort *)(iVar1 + 0x1c) & 0x4000) != 0) {
    iVar2 = iVar2 + *(int *)(iVar1 + 0x10);
  }
  FUN_00532670(param_1);
  return iVar2;
}


