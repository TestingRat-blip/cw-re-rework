// Helpers (db) -- cube. 6 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Helpers.h"

/* FUN_0040c380 @ 0040c380  kind=gamemisc  attributed-by=caller-vote  size=12 */

undefined4 * FUN_0040c380(void)

{
  undefined4 *in_ECX;
  
  if (0xf < (uint)in_ECX[5]) {
    return (undefined4 *)*in_ECX;
  }
  return in_ECX;
}


/* FUN_00526480 @ 00526480  kind=gamemisc  attributed-by=caller-vote  size=32 */

void FUN_00526480(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_0055d830(param_1,param_2,param_3,0,0,param_4,param_5);
  return;
}


/* FUN_00526b60 @ 00526b60  kind=gamemisc  attributed-by=caller-vote  size=30 */

void FUN_00526b60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_0052e070(param_1,param_2,param_3,param_4,param_5,1);
  return;
}


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


/* FUN_0052e070 @ 0052e070  kind=gamemisc  attributed-by=caller-vote  size=182 */

int FUN_0052e070(int *param_1,int param_2,int param_3,undefined4 param_4,code *param_5,
                undefined4 param_6)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0057d290(param_1,param_2);
  if (iVar1 == 0) {
    if (param_3 != 0) {
      iVar1 = param_1[0x11] + param_2 * 0x28 + -0x28;
      iVar2 = FUN_00575040(iVar1,param_3,param_4,param_6,param_5);
      if ((iVar2 == 0) && ((char)param_6 != '\0')) {
        iVar2 = FUN_0056c290(iVar1,*(undefined1 *)(*(int *)(*(int *)(*param_1 + 0x10) + 0xc) + 0x4d)
                            );
      }
      FUN_00553890(*param_1,iVar2,0);
      iVar1 = FUN_0054a110(*param_1,iVar2);
    }
    if (*(int *)(*param_1 + 0xc) != 0) {
      (*DAT_00766638)(*(int *)(*param_1 + 0xc));
      return iVar1;
    }
  }
  else if ((param_5 != (code *)0x0) && (param_5 != (code *)0xffffffff)) {
    (*param_5)(param_3);
  }
  return iVar1;
}


