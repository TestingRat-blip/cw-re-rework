// Helpers (entity) -- cube. 24 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Helpers.h"

/* FUN_00411e50 @ 00411e50  kind=gamemisc  attributed-by=caller-vote  size=558 */

void FUN_00411e50(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  *in_ECX = param_1;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 0;
  in_ECX[0x16] = 0;
  in_ECX[0x17] = 0;
  in_ECX[0x18] = 0;
  in_ECX[0x19] = 0;
  in_ECX[0x1a] = 0;
  in_ECX[0x1b] = 0;
  in_ECX[0x1c] = 0;
  in_ECX[0x1d] = 0;
  in_ECX[0x1e] = 0;
  in_ECX[0x1f] = 0;
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0;
  in_ECX[0x22] = 0;
  in_ECX[0x23] = 0;
  in_ECX[0x24] = 0;
  in_ECX[0x25] = 0;
  in_ECX[0x26] = 0;
  in_ECX[0x27] = 0;
  in_ECX[0x28] = 0;
  in_ECX[0x29] = 0;
  in_ECX[0x2a] = 0;
  in_ECX[0x2b] = 0;
  in_ECX[0x2c] = 0;
  in_ECX[0x2d] = 0;
  in_ECX[0x2e] = 0;
  in_ECX[0x2f] = 0;
  in_ECX[0x31] = 0;
  in_ECX[0x32] = 0;
  in_ECX[0x33] = 0;
  in_ECX[0x34] = 0;
  in_ECX[0x35] = 0;
  in_ECX[0x36] = 0;
  in_ECX[0x37] = 0;
  in_ECX[0x39] = 0;
  in_ECX[0x3a] = 0;
  in_ECX[0x21b] = 0;
  in_ECX[0x21c] = 0;
  in_ECX[0x21d] = 0;
  *(undefined1 *)(in_ECX + 0x21e) = 0;
  in_ECX[0x220] = 0;
  in_ECX[0x221] = 0;
  in_ECX[0x222] = 0;
  in_ECX[0x223] = 0;
  return;
}


/* FUN_00412170 @ 00412170  kind=gamemisc  attributed-by=caller-vote  size=69 */

void FUN_00412170(float *param_1,float param_2)

{
  float *in_ECX;
  
  *param_1 = *in_ECX * param_2;
  param_1[1] = in_ECX[1] * param_2;
  param_1[2] = in_ECX[2] * param_2;
  param_1[3] = in_ECX[3] * param_2;
  return;
}


/* FUN_00424170 @ 00424170  kind=gamemisc  attributed-by=caller-vote  size=60 */

void FUN_00424170(undefined4 param_1,undefined4 *param_2)

{
  FUN_004241b0(param_1,*param_2,param_2[1],param_2[2]);
  return;
}


/* FUN_004241b0 @ 004241b0  kind=gamemisc  attributed-by=caller-vote  size=532 */

void FUN_004241b0(float param_1,float param_2,float param_3,float param_4)

{
  double dVar1;
  float fVar2;
  float fVar3;
  undefined1 auStack_5c [4];
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_c;
  
  local_c = DAT_0076aa78 ^ (uint)auStack_5c;
  dVar1 = (double)(param_2 * param_2 + param_3 * param_3 + param_4 * param_4);
  libm_sse2_sqrt_precise();
  local_58 = (float)dVar1;
  if (local_58 != 0.0) {
    dVar1 = (double)(param_1 * 0.017453292);
    libm_sse2_cos_precise();
    local_54 = (float)dVar1;
    dVar1 = (double)(param_1 * 0.017453292);
    libm_sse2_sin_precise();
    fVar2 = (float)dVar1;
    param_2 = param_2 / local_58;
    param_3 = param_3 / local_58;
    param_4 = param_4 / local_58;
    local_58 = fVar2 * param_4;
    fVar3 = 1.0 - local_54;
    local_20 = 0;
    local_1c = 0;
    local_50 = param_2 * param_2 * fVar3 + local_54;
    local_18 = 0;
    local_44 = 0;
    local_34 = 0;
    local_24 = 0;
    local_4c = fVar3 * param_2 * param_3;
    local_48 = fVar3 * param_2 * param_4;
    local_14 = 0x3f800000;
    local_40 = local_4c - local_58;
    local_4c = local_4c + local_58;
    local_30 = local_48 + fVar2 * param_3;
    local_38 = fVar3 * param_3 * param_4;
    local_48 = local_48 - fVar2 * param_3;
    local_3c = param_3 * param_3 * fVar3 + local_54;
    local_2c = local_38 - fVar2 * param_2;
    local_38 = local_38 + fVar2 * param_2;
    local_28 = param_4 * param_4 * fVar3 + local_54;
    FUN_00412400(&local_50);
  }
  __security_check_cookie(local_c ^ (uint)auStack_5c);
  return;
}


/* FUN_004243d0 @ 004243d0  kind=gamemisc  attributed-by=caller-vote  size=282 */

void FUN_004243d0(float param_1)

{
  float fVar1;
  int in_ECX;
  float fVar2;
  double dVar3;
  float fVar4;
  
  dVar3 = (double)(param_1 * 0.017453292);
  libm_sse2_cos_precise();
  fVar2 = (float)dVar3;
  dVar3 = (double)(param_1 * 0.017453292);
  libm_sse2_sin_precise();
  fVar1 = *(float *)(in_ECX + 0x10);
  fVar4 = (float)dVar3;
  *(float *)(in_ECX + 0x10) = *(float *)(in_ECX + 0x20) * fVar4 + fVar1 * fVar2;
  *(float *)(in_ECX + 0x20) = *(float *)(in_ECX + 0x20) * fVar2 - fVar1 * fVar4;
  fVar1 = *(float *)(in_ECX + 0x14);
  *(float *)(in_ECX + 0x14) = *(float *)(in_ECX + 0x24) * fVar4 + fVar1 * fVar2;
  *(float *)(in_ECX + 0x24) = *(float *)(in_ECX + 0x24) * fVar2 - fVar1 * fVar4;
  fVar1 = *(float *)(in_ECX + 0x18);
  *(float *)(in_ECX + 0x18) = *(float *)(in_ECX + 0x28) * fVar4 + fVar1 * fVar2;
  *(float *)(in_ECX + 0x28) = *(float *)(in_ECX + 0x28) * fVar2 - fVar1 * fVar4;
  fVar1 = *(float *)(in_ECX + 0x1c);
  *(float *)(in_ECX + 0x1c) = *(float *)(in_ECX + 0x2c) * fVar4 + fVar1 * fVar2;
  *(float *)(in_ECX + 0x2c) = *(float *)(in_ECX + 0x2c) * fVar2 - fVar1 * fVar4;
  return;
}


/* FUN_004244f0 @ 004244f0  kind=gamemisc  attributed-by=caller-vote  size=278 */

void FUN_004244f0(float param_1)

{
  float fVar1;
  float *in_ECX;
  float fVar2;
  double dVar3;
  float fVar4;
  
  dVar3 = (double)(param_1 * 0.017453292);
  libm_sse2_cos_precise();
  fVar2 = (float)dVar3;
  dVar3 = (double)(param_1 * 0.017453292);
  libm_sse2_sin_precise();
  fVar1 = *in_ECX;
  fVar4 = (float)dVar3;
  *in_ECX = fVar1 * fVar2 - in_ECX[8] * fVar4;
  in_ECX[8] = in_ECX[8] * fVar2 + fVar1 * fVar4;
  fVar1 = in_ECX[1];
  in_ECX[1] = fVar1 * fVar2 - in_ECX[9] * fVar4;
  in_ECX[9] = in_ECX[9] * fVar2 + fVar1 * fVar4;
  fVar1 = in_ECX[2];
  in_ECX[2] = fVar1 * fVar2 - fVar4 * in_ECX[10];
  in_ECX[10] = fVar1 * fVar4 + fVar2 * in_ECX[10];
  fVar1 = in_ECX[3];
  in_ECX[3] = fVar1 * fVar2 - in_ECX[0xb] * fVar4;
  in_ECX[0xb] = in_ECX[0xb] * fVar2 + fVar1 * fVar4;
  return;
}


/* FUN_0043c100 @ 0043c100  kind=gamemisc  attributed-by=caller-vote  size=634 */

void FUN_0043c100(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  *(undefined1 *)(in_ECX + 0x14) = 3;
  in_ECX[0x15] = 0;
  *(undefined1 *)(in_ECX + 0x16) = 0;
  in_ECX[0x17] = 0;
  in_ECX[0x18] = 0;
  in_ECX[0x19] = 0;
  FUN_00428750();
  *(undefined2 *)(in_ECX + 0x45) = 0;
  in_ECX[0x46] = 0;
  in_ECX[0x48] = 0;
  in_ECX[0x49] = 0;
  in_ECX[0x4a] = 0;
  in_ECX[0x4b] = 0;
  *(undefined2 *)(in_ECX + 0x4c) = 0;
  in_ECX[0x4d] = 0;
  in_ECX[0x47] = 0xfffff448;
  in_ECX[0x4e] = 0;
  in_ECX[0x4f] = 0;
  in_ECX[0x50] = 0;
  in_ECX[0x51] = 0;
  in_ECX[0x52] = 0;
  in_ECX[0x53] = 0;
  in_ECX[0x54] = 0;
  in_ECX[0x55] = 0;
  in_ECX[0x56] = 0;
  in_ECX[0x58] = 0;
  in_ECX[0x59] = 0;
  in_ECX[0x57] = 0x43fa0000;
  in_ECX[0x5a] = 0x42c80000;
  in_ECX[0x5b] = 0x3f800000;
  in_ECX[0x5c] = 0x3f800000;
  in_ECX[0x5d] = 0x3f800000;
  in_ECX[0x5e] = 0x3f800000;
  *(undefined2 *)(in_ECX + 0x5f) = 0;
  in_ECX[0x61] = 0;
  in_ECX[0x62] = 0;
  in_ECX[99] = 0;
  in_ECX[100] = 0;
  in_ECX[0x65] = 0;
  *(undefined1 *)(in_ECX + 0x66) = 0;
  in_ECX[0x60] = 1;
  in_ECX[0x67] = 0xffffffff;
  in_ECX[0x6a] = 0;
  in_ECX[0x68] = 0xffffffff;
  in_ECX[0x69] = 0xffffffff;
  *(undefined1 *)(in_ECX + 0x72) = 0;
  in_ECX[0x75] = 0;
  in_ECX[0x73] = 0xffffffff;
  in_ECX[0x74] = 0xffffffff;
  *(undefined2 *)(in_ECX + 0x76) = 0;
  in_ECX[0x77] = 0;
  in_ECX[0x78] = 0;
  *(undefined2 *)(in_ECX + 0x79) = 0;
  *(undefined1 *)((int)in_ECX + 0x1e6) = 0;
  *(undefined2 *)(in_ECX + 0x7a) = 1;
  in_ECX[0xbb] = 0;
  memset(in_ECX + 0x7b,0,0x100);
  FUN_0043bc00();
  in_ECX[0x455] = 0;
  *(undefined8 *)(in_ECX + 0x456) = 0;
  *(undefined8 *)(in_ECX + 0x458) = 0;
  memset(in_ECX + 0x44a,0,0x2c);
  return;
}


/* FUN_0043c8a0 @ 0043c8a0  kind=gamemisc  attributed-by=caller-vote  size=57 */

void FUN_0043c8a0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x134);
  if (puVar1 != (void *)0x0) {
    if (param_1 == (void *)0x0) {
      param_1 = puVar1;
      param_2 = puVar1;
    }
    *puVar1 = param_1;
    if (puVar1 + 1 != (undefined4 *)0x0) {
      puVar1[1] = param_2;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xbad_alloc();
}


/* FUN_0046ea70 @ 0046ea70  kind=gamemisc  attributed-by=caller-vote  size=42 */

void FUN_0046ea70(void)

{
  undefined4 *puVar1;
  int *in_ECX;
  
  puVar1 = (undefined4 *)*in_ECX;
  if (puVar1 == (undefined4 *)0x0) {
    return;
  }
  if (puVar1 != (undefined4 *)in_ECX[1]) {
    FUN_0046f990();
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)*puVar1);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete((void *)*in_ECX);
}


/* FUN_0046fac0 @ 0046fac0  kind=gamemisc  attributed-by=caller-vote  size=363 */

void FUN_0046fac0(void)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int in_ECX;
  float fVar7;
  float fVar8;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  fVar8 = 25.0;
  puVar2 = (undefined4 *)**(undefined4 **)(in_ECX + 0x2e8);
  while (puVar2 != *(undefined4 **)(in_ECX + 0x2e8)) {
    iVar3 = puVar2[6];
    if ((iVar3 != 0) && (*(char *)(iVar3 + 0x60) == '\x05')) {
      iVar4 = *(int *)(in_ECX + 0x8006d0);
      local_20._0_4_ = (uint)*(undefined8 *)(iVar4 + 0x10);
      local_20._4_4_ = (int)((ulonglong)*(undefined8 *)(iVar4 + 0x10) >> 0x20);
      local_20 = CONCAT44((local_20._4_4_ - *(int *)(iVar3 + 0x14)) -
                          (uint)((uint)local_20 < *(uint *)(iVar3 + 0x10)),
                          (uint)local_20 - *(uint *)(iVar3 + 0x10));
      local_18._0_4_ = (uint)*(undefined8 *)(iVar4 + 0x18);
      local_18._4_4_ = (int)((ulonglong)*(undefined8 *)(iVar4 + 0x18) >> 0x20);
      local_18 = CONCAT44((local_18._4_4_ - *(int *)(iVar3 + 0x1c)) -
                          (uint)((uint)local_18 < *(uint *)(iVar3 + 0x18)),
                          (uint)local_18 - *(uint *)(iVar3 + 0x18));
      local_10._0_4_ = (uint)*(undefined8 *)(iVar4 + 0x20);
      local_10._4_4_ = (int)((ulonglong)*(undefined8 *)(iVar4 + 0x20) >> 0x20);
      local_10 = CONCAT44((local_10._4_4_ - *(int *)(iVar3 + 0x24)) -
                          (uint)((uint)local_10 < *(uint *)(iVar3 + 0x20)),
                          (uint)local_10 - *(uint *)(iVar3 + 0x20));
      fVar7 = (float)local_20 * 1.5258789e-05 * (float)local_20 * 1.5258789e-05 +
              (float)local_18 * 1.5258789e-05 * (float)local_18 * 1.5258789e-05 +
              (float)local_10 * 1.5258789e-05 * (float)local_10 * 1.5258789e-05;
      if (fVar7 < fVar8) {
        fVar8 = fVar7;
      }
    }
    if (*(char *)((int)puVar2 + 0xd) == '\0') {
      puVar5 = (undefined4 *)puVar2[2];
      if (*(char *)((int)puVar5 + 0xd) == '\0') {
        cVar1 = *(char *)((int)*puVar5 + 0xd);
        puVar2 = puVar5;
        puVar5 = (undefined4 *)*puVar5;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)*puVar5 + 0xd);
          puVar2 = puVar5;
          puVar5 = (undefined4 *)*puVar5;
        }
      }
      else {
        cVar1 = *(char *)((int)puVar2[1] + 0xd);
        puVar6 = (undefined4 *)puVar2[1];
        puVar5 = puVar2;
        while ((puVar2 = puVar6, cVar1 == '\0' && (puVar5 == (undefined4 *)puVar2[2]))) {
          cVar1 = *(char *)((int)puVar2[1] + 0xd);
          puVar6 = (undefined4 *)puVar2[1];
          puVar5 = puVar2;
        }
      }
    }
  }
  __security_check_cookie(DAT_0076aa78 ^ (uint)&stack0xfffffffc ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004e1830 @ 004e1830  kind=gamemisc  attributed-by=caller-vote  size=118 */

void FUN_004e1830(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e9668;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = 0;
  in_ECX[1] = 0;
  uVar1 = FUN_0046d520();
  *in_ECX = uVar1;
  local_18 = local_18 & 0xffffff00;
  local_8 = 1;
  FUN_004d9b10(param_1,local_18);
  ExceptionList = local_10;
  return;
}


/* FUN_004e34b0 @ 004e34b0  kind=gamemisc  attributed-by=caller-vote  size=55 */

undefined4 * FUN_004e34b0(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  puVar1 = operator_new(0x38);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
  *puVar1 = *in_ECX;
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = *in_ECX;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = *in_ECX;
  }
  return puVar1;
}


/* FUN_004e35d0 @ 004e35d0  kind=gamemisc  attributed-by=caller-vote  size=78 */

void FUN_004e35d0(void *param_1)

{
  if (*(char *)((int)param_1 + 0xd) != '\0') {
    return;
  }
  FUN_004e35d0(*(undefined4 *)((int)param_1 + 8));
  if (7 < *(uint *)((int)param_1 + 0x28)) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)((int)param_1 + 0x14));
  }
  *(undefined4 *)((int)param_1 + 0x28) = 7;
  *(undefined4 *)((int)param_1 + 0x24) = 0;
  *(undefined2 *)((int)param_1 + 0x14) = 0;
                    /* WARNING: Subroutine does not return */
  operator_delete(param_1);
}


/* FUN_004e36e0 @ 004e36e0  kind=gamemisc  attributed-by=caller-vote  size=152 */

void FUN_004e36e0(void *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e9a88;
  local_10 = ExceptionList;
  if (*(char *)((int)param_1 + 0xd) != '\0') {
    return;
  }
  ExceptionList = &local_10;
  FUN_004e36e0(*(undefined4 *)((int)param_1 + 8));
  local_8 = 0;
  cube::QuestText::~QuestText((QuestText *)((int)param_1 + 0x28));
  local_8 = 0xffffffff;
  if (7 < *(uint *)((int)param_1 + 0x24)) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)((int)param_1 + 0x10));
  }
  *(undefined4 *)((int)param_1 + 0x24) = 7;
  *(undefined4 *)((int)param_1 + 0x20) = 0;
  *(undefined2 *)((int)param_1 + 0x10) = 0;
                    /* WARNING: Subroutine does not return */
  operator_delete(param_1);
}


/* FUN_004e3840 @ 004e3840  kind=gamemisc  attributed-by=caller-vote  size=189 */

undefined4 * FUN_004e3840(undefined4 *param_1,int *param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *in_ECX;
  undefined1 local_8 [4];
  
  piVar2 = (int *)*in_ECX;
  piVar3 = param_2;
  if ((param_2 == (int *)*piVar2) && (param_3 == piVar2)) {
    FUN_004e35d0(piVar2[1]);
    *(int *)(*in_ECX + 4) = *in_ECX;
    *(int *)*in_ECX = *in_ECX;
    *(int *)(*in_ECX + 8) = *in_ECX;
    in_ECX[1] = 0;
    *param_1 = *(undefined4 *)*in_ECX;
    return param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0xd) == '\0') {
      param_2 = (int *)piVar3[2];
      if (*(char *)((int)param_2 + 0xd) == '\0') {
        cVar1 = *(char *)(*param_2 + 0xd);
        piVar2 = (int *)*param_2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0xd);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0xd);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0xd);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    FUN_004e3900(local_8,piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return param_1;
}


/* FUN_004e3900 @ 004e3900  kind=gamemisc  attributed-by=caller-vote  size=647 */

/* WARNING: Removing unreachable block (ram,0x004e39cd) */
/* WARNING: Removing unreachable block (ram,0x004e39dd) */
/* WARNING: Removing unreachable block (ram,0x004e39e6) */
/* WARNING: Removing unreachable block (ram,0x004e39e9) */
/* WARNING: Removing unreachable block (ram,0x004e39d9) */
/* WARNING: Removing unreachable block (ram,0x004e39f7) */
/* WARNING: Removing unreachable block (ram,0x004e3a06) */
/* WARNING: Removing unreachable block (ram,0x004e3a11) */
/* WARNING: Removing unreachable block (ram,0x004e3a0d) */
/* WARNING: Removing unreachable block (ram,0x004e3a01) */
/* WARNING: Removing unreachable block (ram,0x004e3a14) */

void FUN_004e3900(undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *in_ECX;
  int *piVar5;
  int *piVar6;
  
  if (*(char *)((int)param_2 + 0xd) != '\0') {
                    /* WARNING: Subroutine does not return */
    std::_Xout_of_range("invalid map/set<T> iterator");
  }
  FUN_005c3ea0();
  piVar6 = (int *)*param_2;
  if (*(char *)((int)piVar6 + 0xd) == '\0') {
    if (*(char *)(param_2[2] + 0xd) == '\0') {
      piVar6 = (int *)param_2[2];
    }
  }
  else {
    piVar6 = (int *)param_2[2];
  }
  piVar5 = (int *)param_2[1];
  if (*(char *)((int)piVar6 + 0xd) == '\0') {
    piVar6[1] = (int)piVar5;
  }
  if (*(int **)(*in_ECX + 4) == param_2) {
    *(int **)(*in_ECX + 4) = piVar6;
  }
  else if ((int *)*piVar5 == param_2) {
    *piVar5 = (int)piVar6;
  }
  else {
    piVar5[2] = (int)piVar6;
  }
  puVar1 = (undefined4 *)*in_ECX;
  if ((int *)*puVar1 == param_2) {
    piVar3 = piVar5;
    if (*(char *)((int)piVar6 + 0xd) == '\0') {
      piVar3 = (int *)FUN_004e6ce0(piVar6);
    }
    *puVar1 = piVar3;
  }
  iVar2 = *in_ECX;
  if (*(int **)(iVar2 + 8) == param_2) {
    if (*(char *)((int)piVar6 + 0xd) == '\0') {
      uVar4 = FUN_00428aa0(piVar6);
      *(undefined4 *)(iVar2 + 8) = uVar4;
    }
    else {
      *(int **)(iVar2 + 8) = piVar5;
    }
  }
  if ((char)param_2[3] == '\x01') {
    if (piVar6 != *(int **)(*in_ECX + 4)) {
      do {
        piVar3 = piVar5;
        if ((char)piVar6[3] != '\x01') break;
        piVar5 = (int *)*piVar3;
        if (piVar6 == piVar5) {
          piVar5 = (int *)piVar3[2];
          if ((char)piVar5[3] == '\0') {
            *(undefined1 *)(piVar5 + 3) = 1;
            *(undefined1 *)(piVar3 + 3) = 0;
            FUN_004e37e0(piVar3);
            piVar5 = (int *)piVar3[2];
          }
          if (*(char *)((int)piVar5 + 0xd) == '\0') {
            if ((*(char *)(*piVar5 + 0xc) != '\x01') || (*(char *)(piVar5[2] + 0xc) != '\x01')) {
              if (*(char *)(piVar5[2] + 0xc) == '\x01') {
                *(undefined1 *)(*piVar5 + 0xc) = 1;
                *(undefined1 *)(piVar5 + 3) = 0;
                FUN_0042cac0(piVar5);
                piVar5 = (int *)piVar3[2];
              }
              *(char *)(piVar5 + 3) = (char)piVar3[3];
              *(undefined1 *)(piVar3 + 3) = 1;
              *(undefined1 *)(piVar5[2] + 0xc) = 1;
              FUN_004e37e0(piVar3);
              *(undefined1 *)(piVar6 + 3) = 1;
              goto LAB_004e3b5e;
            }
LAB_004e3b00:
            *(undefined1 *)(piVar5 + 3) = 0;
          }
        }
        else {
          if ((char)piVar5[3] == '\0') {
            *(undefined1 *)(piVar5 + 3) = 1;
            *(undefined1 *)(piVar3 + 3) = 0;
            FUN_0042cac0(piVar3);
            piVar5 = (int *)*piVar3;
          }
          if (*(char *)((int)piVar5 + 0xd) == '\0') {
            if ((*(char *)(piVar5[2] + 0xc) == '\x01') && (*(char *)(*piVar5 + 0xc) == '\x01'))
            goto LAB_004e3b00;
            if (*(char *)(*piVar5 + 0xc) == '\x01') {
              *(undefined1 *)(piVar5[2] + 0xc) = 1;
              *(undefined1 *)(piVar5 + 3) = 0;
              FUN_004e37e0(piVar5);
              piVar5 = (int *)*piVar3;
            }
            *(char *)(piVar5 + 3) = (char)piVar3[3];
            *(undefined1 *)(piVar3 + 3) = 1;
            *(undefined1 *)(*piVar5 + 0xc) = 1;
            FUN_0042cac0(piVar3);
            *(undefined1 *)(piVar6 + 3) = 1;
            goto LAB_004e3b5e;
          }
        }
        piVar5 = (int *)piVar3[1];
        piVar6 = piVar3;
      } while (piVar3 != *(int **)(*in_ECX + 4));
    }
    *(undefined1 *)(piVar6 + 3) = 1;
  }
LAB_004e3b5e:
  if (7 < (uint)param_2[10]) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_2[5]);
  }
  param_2[10] = 7;
  param_2[9] = 0;
  *(undefined2 *)(param_2 + 5) = 0;
                    /* WARNING: Subroutine does not return */
  operator_delete(param_2);
}


/* FUN_004e3f40 @ 004e3f40  kind=gamemisc  attributed-by=caller-vote  size=189 */

undefined4 * FUN_004e3f40(undefined4 *param_1,int *param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *in_ECX;
  undefined1 local_8 [4];
  
  piVar2 = (int *)*in_ECX;
  piVar3 = param_2;
  if ((param_2 == (int *)*piVar2) && (param_3 == piVar2)) {
    FUN_004e36e0(piVar2[1]);
    *(int *)(*in_ECX + 4) = *in_ECX;
    *(int *)*in_ECX = *in_ECX;
    *(int *)(*in_ECX + 8) = *in_ECX;
    in_ECX[1] = 0;
    *param_1 = *(undefined4 *)*in_ECX;
    return param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0xd) == '\0') {
      param_2 = (int *)piVar3[2];
      if (*(char *)((int)param_2 + 0xd) == '\0') {
        cVar1 = *(char *)(*param_2 + 0xd);
        piVar2 = (int *)*param_2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0xd);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0xd);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0xd);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    FUN_004e4000(local_8,piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return param_1;
}


/* FUN_004e4000 @ 004e4000  kind=gamemisc  attributed-by=caller-vote  size=657 */

/* WARNING: Removing unreachable block (ram,0x004e40e1) */
/* WARNING: Removing unreachable block (ram,0x004e40f1) */
/* WARNING: Removing unreachable block (ram,0x004e40fa) */
/* WARNING: Removing unreachable block (ram,0x004e40fd) */
/* WARNING: Removing unreachable block (ram,0x004e40ed) */
/* WARNING: Removing unreachable block (ram,0x004e410b) */
/* WARNING: Removing unreachable block (ram,0x004e4117) */
/* WARNING: Removing unreachable block (ram,0x004e4122) */
/* WARNING: Removing unreachable block (ram,0x004e411e) */
/* WARNING: Removing unreachable block (ram,0x004e4112) */
/* WARNING: Removing unreachable block (ram,0x004e4125) */

void FUN_004e4000(undefined4 param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *in_ECX;
  int *piVar4;
  int *piVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e9ab8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(char *)((int)param_2 + 0xd) != '\0') {
                    /* WARNING: Subroutine does not return */
    std::_Xout_of_range("invalid map/set<T> iterator");
  }
  FUN_005c3ea0(DAT_0076aa78 ^ (uint)&stack0xfffffffc);
  piVar5 = (int *)*param_2;
  if (*(char *)((int)piVar5 + 0xd) == '\0') {
    if (*(char *)(param_2[2] + 0xd) == '\0') {
      piVar5 = (int *)param_2[2];
    }
  }
  else {
    piVar5 = (int *)param_2[2];
  }
  piVar4 = (int *)param_2[1];
  if (*(char *)((int)piVar5 + 0xd) == '\0') {
    piVar5[1] = (int)piVar4;
  }
  if (*(int **)(*in_ECX + 4) == param_2) {
    *(int **)(*in_ECX + 4) = piVar5;
  }
  else if ((int *)*piVar4 == param_2) {
    *piVar4 = (int)piVar5;
  }
  else {
    piVar4[2] = (int)piVar5;
  }
  puVar2 = (undefined4 *)*in_ECX;
  if ((int *)*puVar2 == param_2) {
    piVar1 = piVar4;
    if (*(char *)((int)piVar5 + 0xd) == '\0') {
      piVar1 = (int *)FUN_004e6ce0(piVar5);
      puVar2 = (undefined4 *)*in_ECX;
    }
    *puVar2 = piVar1;
  }
  if (*(int **)(*in_ECX + 8) == param_2) {
    if (*(char *)((int)piVar5 + 0xd) == '\0') {
      uVar3 = FUN_00428aa0(piVar5);
      *(undefined4 *)(*in_ECX + 8) = uVar3;
    }
    else {
      *(int **)(*in_ECX + 8) = piVar4;
    }
  }
  if ((char)param_2[3] == '\x01') {
    if (piVar5 != *(int **)(*in_ECX + 4)) {
      do {
        piVar1 = piVar4;
        if ((char)piVar5[3] != '\x01') break;
        piVar4 = (int *)*piVar1;
        if (piVar5 == piVar4) {
          piVar4 = (int *)piVar1[2];
          if ((char)piVar4[3] == '\0') {
            *(undefined1 *)(piVar4 + 3) = 1;
            *(undefined1 *)(piVar1 + 3) = 0;
            FUN_004e37e0(piVar1);
            piVar4 = (int *)piVar1[2];
          }
          if (*(char *)((int)piVar4 + 0xd) == '\0') {
            if ((*(char *)(*piVar4 + 0xc) != '\x01') || (*(char *)(piVar4[2] + 0xc) != '\x01')) {
              if (*(char *)(piVar4[2] + 0xc) == '\x01') {
                *(undefined1 *)(*piVar4 + 0xc) = 1;
                *(undefined1 *)(piVar4 + 3) = 0;
                FUN_0042cac0(piVar4);
                piVar4 = (int *)piVar1[2];
              }
              *(char *)(piVar4 + 3) = (char)piVar1[3];
              *(undefined1 *)(piVar1 + 3) = 1;
              *(undefined1 *)(piVar4[2] + 0xc) = 1;
              FUN_004e37e0(piVar1);
              break;
            }
LAB_004e4201:
            *(undefined1 *)(piVar4 + 3) = 0;
          }
        }
        else {
          if ((char)piVar4[3] == '\0') {
            *(undefined1 *)(piVar4 + 3) = 1;
            *(undefined1 *)(piVar1 + 3) = 0;
            FUN_0042cac0(piVar1);
            piVar4 = (int *)*piVar1;
          }
          if (*(char *)((int)piVar4 + 0xd) == '\0') {
            if ((*(char *)(piVar4[2] + 0xc) == '\x01') && (*(char *)(*piVar4 + 0xc) == '\x01'))
            goto LAB_004e4201;
            if (*(char *)(*piVar4 + 0xc) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0xc) = 1;
              *(undefined1 *)(piVar4 + 3) = 0;
              FUN_004e37e0(piVar4);
              piVar4 = (int *)*piVar1;
            }
            *(char *)(piVar4 + 3) = (char)piVar1[3];
            *(undefined1 *)(piVar1 + 3) = 1;
            *(undefined1 *)(*piVar4 + 0xc) = 1;
            FUN_0042cac0(piVar1);
            break;
          }
        }
        piVar4 = (int *)piVar1[1];
        piVar5 = piVar1;
      } while (piVar1 != *(int **)(*in_ECX + 4));
    }
    *(undefined1 *)(piVar5 + 3) = 1;
  }
  local_8 = 0;
  cube::QuestText::~QuestText((QuestText *)(param_2 + 10));
  if (7 < (uint)param_2[9]) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_2[4]);
  }
  param_2[9] = 7;
  param_2[8] = 0;
  *(undefined2 *)(param_2 + 4) = 0;
                    /* WARNING: Subroutine does not return */
  operator_delete(param_2);
}


/* FUN_004e65a0 @ 004e65a0  kind=gamemisc  attributed-by=caller-vote  size=1139 */

void FUN_004e65a0(int param_1,undefined4 param_2,char *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int in_ECX;
  float10 fVar11;
  undefined1 local_a4 [64];
  float local_64 [2];
  float local_5c [2];
  undefined4 local_54;
  undefined4 local_44;
  uint local_40;
  undefined1 local_3c [8];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e9ea8;
  local_10 = ExceptionList;
  uVar7 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar7;
  if (((*(int *)(param_1 + 0x10) == 0) ||
      (iVar8 = *(int *)(in_ECX + 0x16c) / *(int *)(in_ECX + 0x1d4), iVar8 < *(int *)(in_ECX + 0x1d0)
      )) || (iVar9 = FUN_00639800(in_ECX + 0x1a8), iVar9 == 0)) goto LAB_004e69f8;
  (**(code **)(**(int **)(in_ECX + 4) + 0x38))(local_a4,uVar7);
  FUN_0065e720(param_1,local_a4,(float)*(int *)(in_ECX + 0x1c0),0,0,0,0,local_5c,local_64,0,1,
               0xffffffff,0);
  cVar6 = FUN_00439190(param_1,&DAT_007020b8);
  if ((((cVar6 == '\0') && (cVar6 = FUN_00439190(param_1,&DAT_007020bc), cVar6 == '\0')) &&
      ((cVar6 = FUN_00439190(param_1,&DAT_007020c0), cVar6 == '\0' &&
       ((cVar6 = FUN_00439190(param_1,&DAT_007020c4), cVar6 == '\0' &&
        (cVar6 = FUN_00439190(param_1,&DAT_007020c8), cVar6 == '\0')))))) &&
     (cVar6 = FUN_00439190(param_1,&DAT_007020cc), cVar6 == '\0')) {
    cVar6 = FUN_00439190(param_1,&DAT_00701ba8);
    bVar5 = false;
    if (cVar6 != '\0') goto LAB_004e6722;
  }
  else {
LAB_004e6722:
    bVar5 = true;
  }
  if (*param_3 == '\0') {
    if (bVar5) {
      *(int *)(in_ECX + 0x1c8) = *(int *)(in_ECX + 0x1c8) + 3;
    }
    else {
      *(int *)(in_ECX + 0x1c8) = *(int *)(in_ECX + 0x1c8) + 0xe;
    }
  }
  cVar6 = FUN_00439190(param_1,&DAT_007020bc);
  *param_3 = cVar6 != '\0';
  if ((!bVar5) &&
     (iVar9 = *(int *)(in_ECX + 0x1c8), fVar11 = (float10)FUN_00627d50(),
     (float)fVar11 - 30.0 < (float)(iVar9 + (int)(local_64[0] - local_5c[0])))) {
    *(undefined4 *)(in_ECX + 0x1c8) = 0;
    *(int *)(in_ECX + 0x1cc) = *(int *)(in_ECX + 0x1cc) + 0x12;
  }
  iVar9 = *(int *)(param_1 + 0x10);
  iVar3 = *(int *)(*(int *)(in_ECX + 0x148) + 0x38);
  iVar4 = *(int *)(iVar3 + 0x170);
  iVar3 = *(int *)(iVar3 + 0x19c);
  fVar1 = *(float *)(iVar3 + iVar4 * 8);
  fVar2 = *(float *)(iVar3 + 4 + iVar4 * 8);
  local_40 = 7;
  local_44 = 0;
  local_54 = (void *)((uint)local_54._2_2_ << 0x10);
  FUN_0040f680(param_1,0,0xffffffff);
  local_8 = 0;
  if (iVar8 < *(int *)(in_ECX + 0x1d0) + iVar9) {
    iVar9 = iVar8 - *(int *)(in_ECX + 0x1d0);
    uVar10 = FUN_0043a450(local_3c,0,iVar9);
    FUN_00467fa0(uVar10);
    FUN_00593e50();
  }
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0x3f800000;
  FUN_0065bc70(&local_54,(float)(*(int *)(in_ECX + 0x1c8) + 10) + fVar1,
               (float)(*(int *)(in_ECX + 0x1cc) + 0x19) + fVar2,(float)*(int *)(in_ECX + 0x1c0),
               (float)*(int *)(in_ECX + 0x1c4),0,0,0,param_2,&local_34,&local_24,0,1);
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  FUN_0065bc70(&local_54,(float)(*(int *)(in_ECX + 0x1c8) + 10) + fVar1,
               (float)(*(int *)(in_ECX + 0x1cc) + 0x19) + fVar2,(float)*(int *)(in_ECX + 0x1c0),0,0,
               0,0,param_2,&local_24,&local_34,0,1);
  *(int *)(in_ECX + 0x1c8) = *(int *)(in_ECX + 0x1c8) + (int)(local_64[0] - local_5c[0]);
  *(int *)(in_ECX + 0x1d0) = *(int *)(in_ECX + 0x1d0) + iVar9 + 1;
  if (7 < local_40) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_54);
  }
LAB_004e69f8:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004e6c60 @ 004e6c60  kind=gamemisc  attributed-by=caller-vote  size=86 */

void FUN_004e6c60(int param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  
  if (*(char *)(param_1 + 0xd) != '\0') {
    return;
  }
  FUN_004e6c60(*(undefined4 *)(param_1 + 8));
  puVar1 = *(undefined4 **)(param_1 + 0x14);
  pvVar2 = (void *)*puVar1;
  *puVar1 = puVar1;
  *(int *)(*(int *)(param_1 + 0x14) + 4) = *(int *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (pvVar2 != *(void **)(param_1 + 0x14)) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar2);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(param_1 + 0x14));
}


/* FUN_004e6e60 @ 004e6e60  kind=gamemisc  attributed-by=caller-vote  size=189 */

undefined4 * FUN_004e6e60(undefined4 *param_1,int *param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *in_ECX;
  undefined1 local_8 [4];
  
  piVar2 = (int *)*in_ECX;
  piVar3 = param_2;
  if ((param_2 == (int *)*piVar2) && (param_3 == piVar2)) {
    FUN_004e6c60(piVar2[1]);
    *(int *)(*in_ECX + 4) = *in_ECX;
    *(int *)*in_ECX = *in_ECX;
    *(int *)(*in_ECX + 8) = *in_ECX;
    in_ECX[1] = 0;
    *param_1 = *(undefined4 *)*in_ECX;
    return param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0xd) == '\0') {
      param_2 = (int *)piVar3[2];
      if (*(char *)((int)param_2 + 0xd) == '\0') {
        cVar1 = *(char *)(*param_2 + 0xd);
        piVar2 = (int *)*param_2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0xd);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0xd);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0xd);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    FUN_004e6f20(local_8,piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return param_1;
}


/* FUN_004e6f20 @ 004e6f20  kind=gamemisc  attributed-by=caller-vote  size=625 */

/* WARNING: Removing unreachable block (ram,0x004e6fed) */
/* WARNING: Removing unreachable block (ram,0x004e6ffd) */
/* WARNING: Removing unreachable block (ram,0x004e7006) */
/* WARNING: Removing unreachable block (ram,0x004e7009) */
/* WARNING: Removing unreachable block (ram,0x004e6ff9) */
/* WARNING: Removing unreachable block (ram,0x004e7017) */
/* WARNING: Removing unreachable block (ram,0x004e7026) */
/* WARNING: Removing unreachable block (ram,0x004e7031) */
/* WARNING: Removing unreachable block (ram,0x004e702d) */
/* WARNING: Removing unreachable block (ram,0x004e7021) */
/* WARNING: Removing unreachable block (ram,0x004e7034) */

void FUN_004e6f20(undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvVar3;
  int *piVar4;
  undefined4 uVar5;
  int *in_ECX;
  int *piVar6;
  int *piVar7;
  
  if (*(char *)((int)param_2 + 0xd) != '\0') {
                    /* WARNING: Subroutine does not return */
    std::_Xout_of_range("invalid map/set<T> iterator");
  }
  FUN_005c3ea0();
  piVar7 = (int *)*param_2;
  if (*(char *)((int)piVar7 + 0xd) == '\0') {
    if (*(char *)(param_2[2] + 0xd) == '\0') {
      piVar7 = (int *)param_2[2];
    }
  }
  else {
    piVar7 = (int *)param_2[2];
  }
  piVar6 = (int *)param_2[1];
  if (*(char *)((int)piVar7 + 0xd) == '\0') {
    piVar7[1] = (int)piVar6;
  }
  if (*(int **)(*in_ECX + 4) == param_2) {
    *(int **)(*in_ECX + 4) = piVar7;
  }
  else if ((int *)*piVar6 == param_2) {
    *piVar6 = (int)piVar7;
  }
  else {
    piVar6[2] = (int)piVar7;
  }
  puVar1 = (undefined4 *)*in_ECX;
  if ((int *)*puVar1 == param_2) {
    piVar4 = piVar6;
    if (*(char *)((int)piVar7 + 0xd) == '\0') {
      piVar4 = (int *)FUN_004e6ce0(piVar7);
    }
    *puVar1 = piVar4;
  }
  iVar2 = *in_ECX;
  if (*(int **)(iVar2 + 8) == param_2) {
    if (*(char *)((int)piVar7 + 0xd) == '\0') {
      uVar5 = FUN_00428aa0(piVar7);
      *(undefined4 *)(iVar2 + 8) = uVar5;
    }
    else {
      *(int **)(iVar2 + 8) = piVar6;
    }
  }
  if ((char)param_2[3] == '\x01') {
    if (piVar7 != *(int **)(*in_ECX + 4)) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[3] != '\x01') break;
        piVar6 = (int *)*piVar4;
        if (piVar7 == piVar6) {
          piVar6 = (int *)piVar4[2];
          if ((char)piVar6[3] == '\0') {
            *(undefined1 *)(piVar6 + 3) = 1;
            *(undefined1 *)(piVar4 + 3) = 0;
            FUN_004e37e0(piVar4);
            piVar6 = (int *)piVar4[2];
          }
          if (*(char *)((int)piVar6 + 0xd) == '\0') {
            if ((*(char *)(*piVar6 + 0xc) != '\x01') || (*(char *)(piVar6[2] + 0xc) != '\x01')) {
              if (*(char *)(piVar6[2] + 0xc) == '\x01') {
                *(undefined1 *)(*piVar6 + 0xc) = 1;
                *(undefined1 *)(piVar6 + 3) = 0;
                FUN_0042cac0(piVar6);
                piVar6 = (int *)piVar4[2];
              }
              *(char *)(piVar6 + 3) = (char)piVar4[3];
              *(undefined1 *)(piVar4 + 3) = 1;
              *(undefined1 *)(piVar6[2] + 0xc) = 1;
              FUN_004e37e0(piVar4);
              break;
            }
LAB_004e7117:
            *(undefined1 *)(piVar6 + 3) = 0;
          }
        }
        else {
          if ((char)piVar6[3] == '\0') {
            *(undefined1 *)(piVar6 + 3) = 1;
            *(undefined1 *)(piVar4 + 3) = 0;
            FUN_0042cac0(piVar4);
            piVar6 = (int *)*piVar4;
          }
          if (*(char *)((int)piVar6 + 0xd) == '\0') {
            if ((*(char *)(piVar6[2] + 0xc) == '\x01') && (*(char *)(*piVar6 + 0xc) == '\x01'))
            goto LAB_004e7117;
            if (*(char *)(*piVar6 + 0xc) == '\x01') {
              *(undefined1 *)(piVar6[2] + 0xc) = 1;
              *(undefined1 *)(piVar6 + 3) = 0;
              FUN_004e37e0(piVar6);
              piVar6 = (int *)*piVar4;
            }
            *(char *)(piVar6 + 3) = (char)piVar4[3];
            *(undefined1 *)(piVar4 + 3) = 1;
            *(undefined1 *)(*piVar6 + 0xc) = 1;
            FUN_0042cac0(piVar4);
            break;
          }
        }
        piVar6 = (int *)piVar4[1];
        piVar7 = piVar4;
      } while (piVar4 != *(int **)(*in_ECX + 4));
    }
    *(undefined1 *)(piVar7 + 3) = 1;
  }
  puVar1 = (undefined4 *)param_2[5];
  pvVar3 = (void *)*puVar1;
  *puVar1 = puVar1;
  *(int *)(param_2[5] + 4) = param_2[5];
  param_2[6] = 0;
  if (pvVar3 != (void *)param_2[5]) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar3);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete((void *)param_2[5]);
}


/* FUN_005eeee0 @ 005eeee0  kind=gamemisc  attributed-by=caller-vote  size=180 */

void FUN_005eeee0(uint *param_1,uint param_2,int param_3,uint param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  
  uVar4 = *param_1;
  uVar1 = param_1[1];
  uVar5 = ((int)uVar4 >> 0x1f) << 0x10 | uVar4 >> 0x10;
  uVar2 = ((int)uVar1 >> 0x1f) << 0x10 | uVar1 >> 0x10;
  uVar4 = uVar4 * 0x10000;
  uVar1 = uVar1 * 0x10000;
  iVar3 = (uVar2 - param_5) - (uint)(uVar1 < param_4);
  fVar6 = (float)CONCAT44((uVar5 - param_3) - (uint)(uVar4 < param_2),uVar4 - param_2) *
          1.5258789e-05;
  fVar7 = (float)CONCAT44(iVar3,uVar1 - param_4) * 1.5258789e-05;
  __security_check_cookie
            (DAT_0076aa78 ^ (uint)&stack0xfffffffc ^ (uint)&stack0xfffffffc,iVar3,
             fVar7 * fVar7 + fVar6 * fVar6,uVar4,uVar5,uVar1,uVar2);
  return;
}


/* FUN_005eefa0 @ 005eefa0  kind=gamemisc  attributed-by=caller-vote  size=159 */

float * FUN_005eefa0(float *param_1,int param_2,int param_3)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_004c0ef0((double)param_3 * 0.0005,0x40aabe0000000000);
  *param_1 = (float)fVar1 * 3.0 * 256.0;
  fVar1 = (float10)FUN_004c0ef0((double)param_2 * 0.0005,0x40d6df4000000000);
  param_1[1] = (float)fVar1 * 3.0 * 256.0;
  return param_1;
}


