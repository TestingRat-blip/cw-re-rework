// helpers_wrapper (game_misc) -- cube. 2 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "helpers_wrapper.h"

/* FUN_005a6c30 @ 005a6c30  kind=gamemisc  attributed-by=role:wrapper  size=41 */

int FUN_005a6c30(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_005a7b90();
  *(undefined2 *)(iVar1 + 0xc) = 0;
  if (iVar1 != -0x10) {
    FUN_005a6a00(param_1,0);
  }
  return iVar1;
}


/* FUN_00663eb0 @ 00663eb0  kind=gamemisc  attributed-by=role:wrapper  size=39 */

void FUN_00663eb0(int param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xa8) + *(int *)(in_ECX + 0x7c) * 0x18 != param_1) {
    FUN_0040f680(param_1,0,0xffffffff);
  }
  return;
}


