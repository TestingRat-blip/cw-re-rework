// helpers_wrapper (world) -- cube. 2 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "helpers_wrapper.h"

/* FUN_0043c020 @ 0043c020  kind=gamemisc  attributed-by=role:wrapper  size=122 */

void FUN_0043c020(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  *(undefined2 *)(in_ECX + 8) = 1;
  *(undefined2 *)(in_ECX + 4) = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  *(undefined2 *)(in_ECX + 7) = 0;
  *(undefined1 *)((int)in_ECX + 0x1e) = 0;
  in_ECX[0x49] = 0;
  memset(in_ECX + 9,0,0x100);
  in_ECX[0x4a] = 0;
  in_ECX[0x4b] = 0;
  return;
}


/* FUN_00468fc0 @ 00468fc0  kind=gamemisc  attributed-by=role:wrapper  size=56 */

void FUN_00468fc0(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint *in_ECX;
  undefined8 uVar3;
  
  uVar3 = FUN_0068d946();
  uVar1 = *in_ECX;
  uVar2 = in_ECX[1];
  *param_1 = uVar1 - (uint)uVar3;
  param_1[1] = (uVar2 - (int)((ulonglong)uVar3 >> 0x20)) - (uint)(uVar1 < (uint)uVar3);
  return;
}


