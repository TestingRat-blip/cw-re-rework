// indirect_dispatch_target (control) -- cube. 3 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "indirect_dispatch_target.h"

/* FUN_0043ec90 @ 0043ec90  kind=gamemisc  attributed-by=role:dispatch-target  size=34 */

float10 FUN_0043ec90(undefined4 param_1)

{
  switch(param_1) {
  case 5:
  case 0x1a:
    return (float10)0.5;
  default:
    return (float10)1;
  case 0x15:
  case 0x48:
    return (float10)0.1;
  case 0x1e:
  case 0x20:
    return (float10)0.4;
  case 0x1f:
  case 0x21:
    return (float10)0.6;
  case 0x25:
  case 0x2b:
  case 0x39:
  case 0x3a:
  case 0x44:
    return (float10)2.0;
  case 0x37:
    return (float10)0.25;
  }
}


/* FUN_00446e80 @ 00446e80  kind=gamemisc  attributed-by=role:dispatch-target  size=622 */

void FUN_00446e80(void)

{
  ushort uVar1;
  int *piVar2;
  uint uVar3;
  int in_ECX;
  float10 fVar4;
  double dVar5;
  int *local_24;
  int local_20;
  float local_1c;
  float local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e2bd8;
  local_10 = ExceptionList;
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  dVar5 = 2.0;
  libm_sse2_pow_precise(uVar3);
  local_18 = (float)dVar5;
  dVar5 = 2.0;
  libm_sse2_pow_precise();
  local_18 = *(float *)(in_ECX + 0x180) * (float)dVar5 * local_18;
  local_14 = local_18;
  FUN_0043df60(&local_24);
  local_8 = 0;
  if (local_20 == 0) {
    uVar1 = *(ushort *)(in_ECX + 0x7e);
    if ((uVar1 & 8) != 0) {
      dVar5 = 2.0;
      libm_sse2_pow_precise(uVar3);
      local_1c = (float)dVar5;
      dVar5 = 2.0;
      libm_sse2_pow_precise();
      local_18 = local_1c * (float)dVar5 * 2.0 + local_14;
      local_14 = local_18;
    }
    if ((uVar1 & 0x10) != 0) {
      dVar5 = 2.0;
      libm_sse2_pow_precise(uVar3);
      local_1c = (float)dVar5;
      dVar5 = 2.0;
      libm_sse2_pow_precise();
      local_18 = local_1c * (float)dVar5 * 8.0 + local_14;
    }
  }
  else {
    for (piVar2 = (int *)*local_24; piVar2 != local_24; piVar2 = (int *)*piVar2) {
      fVar4 = (float10)FUN_004c7f60();
      local_1c = (float)fVar4;
      local_18 = local_1c + local_14;
      local_14 = local_18;
    }
  }
  piVar2 = (int *)*local_24;
  *local_24 = (int)local_24;
  local_24[1] = (int)local_24;
  if (piVar2 != local_24) {
                    /* WARNING: Subroutine does not return */
    operator_delete(piVar2);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(local_24);
}


/* FUN_00459660 @ 00459660  kind=gamemisc  attributed-by=role:dispatch-target  size=115 */

void FUN_00459660(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0xffffffff;
  in_ECX[1] = 0xffffffff;
  in_ECX[2] = 0xffffffff;
  in_ECX[3] = 0xffffffff;
  in_ECX[4] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0x13] = 0x3f000000;
  in_ECX[0x14] = 0x3f800000;
  in_ECX[0x15] = 0x3f800000;
  in_ECX[0x16] = 0;
  *(undefined1 *)(in_ECX + 0x17) = 0;
  in_ECX[0x18] = 0;
  *(undefined1 *)(in_ECX + 0x19) = 0;
  in_ECX[0x1a] = 0;
  in_ECX[0x1b] = 0;
  return;
}


