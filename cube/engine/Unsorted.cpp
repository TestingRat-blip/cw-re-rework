// Unsorted (engine) -- cube. 16 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Unsorted.h"

/* FUN_00423e70 @ 00423e70  kind=gamemisc  attributed-by=logic:caller-vote  size=112 */

void FUN_00423e70(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0x3f800000;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0x3f800000;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0x3f800000;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0x3f800000;
  return;
}


/* FUN_00424f30 @ 00424f30  kind=gamemisc  attributed-by=logic:caller-vote  size=955 */

void FUN_00424f30(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float *in_ECX;
  int iVar10;
  float *pfVar11;
  
  pfVar11 = param_1;
  for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
    *pfVar11 = *in_ECX;
    in_ECX = in_ECX + 1;
    pfVar11 = pfVar11 + 1;
  }
  fVar1 = *param_1;
  fVar2 = param_1[4];
  fVar3 = param_1[8];
  fVar4 = param_1[0xc];
  fVar5 = param_2[0xd];
  fVar6 = param_2[0xe];
  fVar7 = param_2[5];
  *param_1 = *param_2 * fVar1 + param_2[1] * fVar2 + param_2[2] * fVar3 + param_2[3] * fVar4;
  fVar8 = param_2[9];
  param_1[4] = param_2[4] * fVar1 + fVar7 * fVar2 + param_2[6] * fVar3 + param_2[7] * fVar4;
  param_1[8] = param_2[8] * fVar1 + fVar8 * fVar2 + param_2[10] * fVar3 + param_2[0xb] * fVar4;
  fVar7 = param_2[1];
  param_1[0xc] = param_2[0xc] * fVar1 + fVar5 * fVar2 + fVar6 * fVar3 + param_2[0xf] * fVar4;
  fVar1 = param_1[1];
  fVar2 = param_1[5];
  fVar3 = param_1[9];
  fVar4 = param_1[0xd];
  fVar8 = param_2[5];
  param_1[1] = *param_2 * fVar1 + fVar7 * fVar2 + param_2[2] * fVar3 + param_2[3] * fVar4;
  fVar7 = param_2[9];
  param_1[5] = param_2[4] * fVar1 + fVar8 * fVar2 + param_2[6] * fVar3 + param_2[7] * fVar4;
  param_1[9] = param_2[8] * fVar1 + fVar7 * fVar2 + param_2[10] * fVar3 + param_2[0xb] * fVar4;
  fVar7 = param_2[1];
  param_1[0xd] = param_2[0xc] * fVar1 + fVar5 * fVar2 + fVar6 * fVar3 + param_2[0xf] * fVar4;
  fVar1 = param_1[2];
  fVar2 = param_1[6];
  fVar3 = param_1[10];
  fVar4 = param_1[0xe];
  fVar8 = param_2[5];
  param_1[2] = *param_2 * fVar1 + fVar7 * fVar2 + param_2[2] * fVar3 + param_2[3] * fVar4;
  fVar7 = param_2[9];
  param_1[6] = param_2[4] * fVar1 + fVar8 * fVar2 + param_2[6] * fVar3 + param_2[7] * fVar4;
  param_1[10] = param_2[8] * fVar1 + fVar7 * fVar2 + param_2[10] * fVar3 + param_2[0xb] * fVar4;
  fVar7 = param_2[0xf];
  fVar8 = *param_2;
  fVar9 = param_2[1];
  param_1[0xe] = param_2[0xc] * fVar1 + fVar5 * fVar2 + fVar6 * fVar3 + fVar7 * fVar4;
  fVar1 = param_1[3];
  fVar2 = param_1[7];
  fVar3 = param_1[0xb];
  fVar4 = param_1[0xf];
  fVar5 = param_2[5];
  param_1[3] = fVar8 * fVar1 + fVar9 * fVar2 + param_2[2] * fVar3 + param_2[3] * fVar4;
  fVar8 = param_2[8];
  param_1[7] = param_2[4] * fVar1 + fVar5 * fVar2 + param_2[6] * fVar3 + param_2[7] * fVar4;
  fVar5 = param_2[0xd];
  param_1[0xb] = fVar8 * fVar1 + param_2[9] * fVar2 + param_2[10] * fVar3 + param_2[0xb] * fVar4;
  param_1[0xf] = param_2[0xc] * fVar1 + fVar5 * fVar2 + fVar6 * fVar3 + fVar7 * fVar4;
  return;
}


/* FUN_0042bd20 @ 0042bd20  kind=gamemisc  attributed-by=logic:caller-vote  size=99 */

void FUN_0042bd20(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint *in_ECX;
  
  puVar1 = (undefined4 *)in_ECX[1];
  if ((param_1 < puVar1) && (puVar2 = (undefined4 *)*in_ECX, puVar2 <= param_1)) {
    if (puVar1 == (undefined4 *)in_ECX[2]) {
      FUN_00428d00(1);
    }
    param_1 = (undefined4 *)(((int)param_1 - (int)puVar2 & 0xfffffff0U) + *in_ECX);
  }
  else if (puVar1 == (undefined4 *)in_ECX[2]) {
    FUN_00428d00(1);
  }
  puVar1 = (undefined4 *)in_ECX[1];
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
    puVar1[2] = param_1[2];
    puVar1[3] = param_1[3];
  }
  in_ECX[1] = in_ECX[1] + 0x10;
  return;
}


/* FUN_0043a3f0 @ 0043a3f0  kind=gamemisc  attributed-by=logic:caller-vote  size=84 */

undefined4 FUN_0043a3f0(ushort param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_ECX;
  undefined4 *puVar4;
  undefined4 *puVar5;
  bool bVar6;
  
  puVar2 = *(undefined4 **)(in_ECX + 0xec);
  cVar1 = *(char *)((int)puVar2[1] + 0xd);
  puVar3 = puVar2;
  puVar5 = (undefined4 *)puVar2[1];
  while (cVar1 == '\0') {
    if (*(ushort *)((int)puVar5 + 0xe) < param_1) {
      puVar4 = (undefined4 *)puVar5[2];
      puVar5 = puVar3;
    }
    else {
      puVar4 = (undefined4 *)*puVar5;
    }
    puVar3 = puVar5;
    puVar5 = puVar4;
    cVar1 = *(char *)((int)puVar4 + 0xd);
  }
  if ((puVar3 == puVar2) ||
     (bVar6 = param_1 < *(ushort *)((int)puVar3 + 0xe), _param_1 = puVar3, bVar6)) {
    _param_1 = puVar2;
  }
  return CONCAT31((int3)((uint)puVar2 >> 8),_param_1 != puVar2);
}


/* FUN_004871e0 @ 004871e0  kind=gamemisc  attributed-by=logic:caller-vote  size=112 */

void FUN_004871e0(uint param_1,undefined4 param_2)

{
  void *_Dst;
  void *_Src;
  void *pvVar1;
  undefined4 *in_ECX;
  uint uVar2;
  
  _Src = (void *)in_ECX[1];
  pvVar1 = (void *)*in_ECX;
  uVar2 = (int)_Src - (int)pvVar1 >> 2;
  if (param_1 < uVar2) {
    _Dst = (void *)((int)pvVar1 + param_1 * 4);
    if (_Dst == pvVar1) {
      in_ECX[1] = pvVar1;
      return;
    }
    if (_Dst != _Src) {
      memmove(_Dst,_Src,0);
      in_ECX[1] = _Dst;
      return;
    }
  }
  else if (uVar2 < param_1) {
    FUN_0046de30(&param_1,_Src,param_1 - uVar2,param_2);
  }
  return;
}


/* FUN_006295a0 @ 006295a0  kind=gamemisc  attributed-by=logic:caller-vote  size=4261 */

void FUN_006295a0(float *param_1,char param_2)

{
  undefined1 uVar1;
  float *pfVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_104;
  float local_100;
  float local_e4;
  float local_d8;
  undefined1 local_d0 [64];
  undefined1 local_90 [4];
  int local_8c;
  float local_88 [4];
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48 [4];
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  pfVar2 = (float *)FUN_0062b510(local_90);
  iVar3 = 0;
  iVar4 = (int)param_1 - (int)pfVar2;
  while (*(float *)(iVar4 + (int)pfVar2) == *pfVar2) {
    iVar3 = iVar3 + 1;
    pfVar2 = pfVar2 + 1;
    if (1 < iVar3) {
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  uVar1 = *(undefined1 *)(*(int *)(*(int *)(in_ECX + 0x148) + 0x38) + 0x2d);
  FUN_0062d7f0(local_88);
  FUN_0062d7f0(local_88);
  iVar3 = *(int *)(in_ECX + 0x148);
  local_8c = *(int *)(iVar3 + 0x38);
  FUN_00423e70();
  fVar14 = local_2c;
  fVar13 = local_30;
  fVar22 = local_34;
  fVar19 = local_38;
  fVar12 = local_48[3];
  fVar11 = local_48[2];
  fVar9 = local_48[1];
  fVar8 = local_48[0];
  iVar3 = *(int *)(iVar3 + 0x28);
  do {
    if (iVar3 == 0) {
LAB_006296c1:
      local_100 = local_c;
      local_d8 = local_10;
      local_104 = local_18;
      local_e4 = local_14;
LAB_006296f5:
      pfVar2 = (float *)FUN_0062c5b0(local_d0);
      fVar10 = pfVar2[8];
      fVar21 = pfVar2[0xf];
      fVar17 = *pfVar2 * local_48[0] + pfVar2[1] * local_38 + pfVar2[2] * local_28 +
               pfVar2[3] * local_104;
      fVar6 = local_48[0] * pfVar2[4];
      local_48[0] = fVar17;
      fVar18 = pfVar2[5] * local_38 + fVar6 + pfVar2[6] * local_28 + pfVar2[7] * local_104;
      fVar7 = local_38 * pfVar2[9];
      fVar6 = pfVar2[0xd];
      local_38 = fVar18;
      fVar20 = pfVar2[0xe];
      fVar16 = local_28 * fVar20;
      fVar15 = pfVar2[0xc];
      local_28 = fVar8 * fVar10 + fVar7 + pfVar2[10] * local_28 + pfVar2[0xb] * local_104;
      local_18 = fVar8 * fVar15 + fVar19 * fVar6 + fVar16 + fVar21 * local_104;
      local_48[1] = *pfVar2 * local_48[1] + pfVar2[1] * local_34 + pfVar2[2] * local_24 +
                    pfVar2[3] * local_e4;
      fVar8 = local_34 * pfVar2[9];
      local_34 = pfVar2[5] * local_34 + fVar9 * pfVar2[4] + pfVar2[6] * local_24 +
                 pfVar2[7] * local_e4;
      fVar19 = local_24 * fVar20;
      local_24 = fVar9 * fVar10 + fVar8 + pfVar2[10] * local_24 + pfVar2[0xb] * local_e4;
      local_14 = fVar9 * fVar15 + fVar22 * fVar6 + fVar19 + fVar21 * local_e4;
      fVar8 = local_48[2] * pfVar2[4];
      local_48[2] = *pfVar2 * local_48[2] + pfVar2[1] * local_30 + pfVar2[2] * local_20 +
                    pfVar2[3] * local_d8;
      fVar9 = local_30 * pfVar2[9];
      local_30 = pfVar2[5] * local_30 + fVar8 + pfVar2[6] * local_20 + pfVar2[7] * local_d8;
      fVar8 = local_20 * fVar20;
      local_20 = fVar11 * fVar10 + fVar9 + pfVar2[10] * local_20 + pfVar2[0xb] * local_d8;
      local_10 = fVar11 * fVar15 + fVar13 * fVar6 + fVar8 + fVar21 * local_d8;
      fVar8 = local_48[3] * pfVar2[4];
      local_48[3] = *pfVar2 * local_48[3] + pfVar2[1] * local_2c + pfVar2[2] * local_1c +
                    pfVar2[3] * local_100;
      fVar9 = local_2c * pfVar2[9];
      local_2c = pfVar2[5] * local_2c + fVar8 + pfVar2[6] * local_1c + pfVar2[7] * local_100;
      fVar20 = local_1c * fVar20;
      local_1c = fVar12 * fVar10 + fVar9 + pfVar2[10] * local_1c + pfVar2[0xb] * local_100;
      fVar8 = *(float *)(in_ECX + 0xa8);
      local_c = fVar12 * fVar15 + fVar14 * fVar6 + fVar20 + fVar21 * local_100;
      fVar9 = *(float *)(in_ECX + 0xac);
      pfVar2 = local_48;
      pfVar5 = local_88;
      for (iVar3 = 0x10; fVar13 = local_5c, fVar22 = local_6c, fVar19 = local_88[3],
          fVar12 = local_88[2], fVar11 = local_88[1], iVar3 != 0; iVar3 = iVar3 + -1) {
        *pfVar5 = *pfVar2;
        pfVar2 = pfVar2 + 1;
        pfVar5 = pfVar5 + 1;
      }
      local_88[0] = fVar17 * fVar8 + fVar18 * fVar9 + local_28 * *(float *)(in_ECX + 0xb0) +
                    local_18 * *(float *)(in_ECX + 0xb4);
      local_78 = fVar17 * *(float *)(in_ECX + 0xb8) + fVar18 * *(float *)(in_ECX + 0xbc) +
                 local_28 * *(float *)(in_ECX + 0xc0) + local_18 * *(float *)(in_ECX + 0xc4);
      fVar9 = *(float *)(in_ECX + 0xe0);
      fVar14 = *(float *)(in_ECX + 0xd8);
      local_68 = *(float *)(in_ECX + 200) * fVar17 + *(float *)(in_ECX + 0xcc) * fVar18 +
                 local_28 * *(float *)(in_ECX + 0xd0) + *(float *)(in_ECX + 0xd4) * local_18;
      local_58 = fVar14 * fVar17 + *(float *)(in_ECX + 0xdc) * fVar18 + local_28 * fVar9 +
                 *(float *)(in_ECX + 0xe4) * local_18;
      fVar10 = local_88[1] * *(float *)(in_ECX + 0xb8);
      local_88[1] = local_88[1] * fVar8 + local_74 * *(float *)(in_ECX + 0xac) +
                    local_64 * *(float *)(in_ECX + 0xb0) + local_54 * *(float *)(in_ECX + 0xb4);
      fVar8 = local_74 * *(float *)(in_ECX + 0xcc);
      fVar21 = local_74 * *(float *)(in_ECX + 0xdc);
      local_74 = local_74 * *(float *)(in_ECX + 0xbc) + fVar10 +
                 local_64 * *(float *)(in_ECX + 0xc0) + local_54 * *(float *)(in_ECX + 0xc4);
      fVar10 = local_64 * fVar9;
      local_64 = fVar11 * *(float *)(in_ECX + 200) + fVar8 + local_64 * *(float *)(in_ECX + 0xd0) +
                 local_54 * *(float *)(in_ECX + 0xd4);
      local_54 = fVar11 * fVar14 + fVar21 + fVar10 + local_54 * *(float *)(in_ECX + 0xe4);
      fVar8 = local_88[2] * *(float *)(in_ECX + 0xb8);
      local_88[2] = local_88[2] * *(float *)(in_ECX + 0xa8) + local_70 * *(float *)(in_ECX + 0xac) +
                    local_60 * *(float *)(in_ECX + 0xb0) + local_50 * *(float *)(in_ECX + 0xb4);
      fVar11 = local_70 * *(float *)(in_ECX + 0xcc);
      fVar10 = local_70 * *(float *)(in_ECX + 0xdc);
      local_70 = local_70 * *(float *)(in_ECX + 0xbc) + fVar8 + local_60 * *(float *)(in_ECX + 0xc0)
                 + local_50 * *(float *)(in_ECX + 0xc4);
      fVar8 = local_60 * fVar9;
      local_60 = fVar12 * *(float *)(in_ECX + 200) + fVar11 + local_60 * *(float *)(in_ECX + 0xd0) +
                 local_50 * *(float *)(in_ECX + 0xd4);
      local_50 = fVar12 * fVar14 + fVar10 + fVar8 + local_50 * *(float *)(in_ECX + 0xe4);
      fVar8 = local_88[3] * *(float *)(in_ECX + 0xb8);
      local_88[3] = local_88[3] * *(float *)(in_ECX + 0xa8) + local_6c * *(float *)(in_ECX + 0xac) +
                    local_5c * *(float *)(in_ECX + 0xb0) + local_4c * *(float *)(in_ECX + 0xb4);
      fVar11 = local_6c * *(float *)(in_ECX + 0xcc);
      local_6c = local_6c * *(float *)(in_ECX + 0xbc) + fVar8 + local_5c * *(float *)(in_ECX + 0xc0)
                 + local_4c * *(float *)(in_ECX + 0xc4);
      fVar8 = *(float *)(local_8c + 500);
      local_5c = fVar19 * *(float *)(in_ECX + 200) + fVar11 + local_5c * *(float *)(in_ECX + 0xd0) +
                 local_4c * *(float *)(in_ECX + 0xd4);
      fVar11 = *(float *)(local_8c + 0x1f0);
      fVar12 = *(float *)(local_8c + 0x1f8);
      fVar10 = *(float *)(local_8c + 0x228);
      local_4c = fVar19 * fVar14 + fVar22 * *(float *)(in_ECX + 0xdc) + fVar13 * fVar9 +
                 local_4c * *(float *)(in_ECX + 0xe4);
      pfVar2 = local_88;
      pfVar5 = local_48;
      for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pfVar5 = *pfVar2;
        pfVar2 = pfVar2 + 1;
        pfVar5 = pfVar5 + 1;
      }
      local_48[0] = fVar11 * local_88[0] + fVar8 * local_78 + fVar12 * local_68 +
                    *(float *)(local_8c + 0x1fc) * local_58;
      local_38 = *(float *)(local_8c + 0x200) * local_88[0] +
                 *(float *)(local_8c + 0x204) * local_78 + *(float *)(local_8c + 0x208) * local_68 +
                 *(float *)(local_8c + 0x20c) * local_58;
      fVar8 = *(float *)(local_8c + 0x220);
      local_28 = *(float *)(local_8c + 0x210) * local_88[0] +
                 *(float *)(local_8c + 0x214) * local_78 + *(float *)(local_8c + 0x218) * local_68 +
                 *(float *)(local_8c + 0x21c) * local_58;
      local_18 = fVar8 * local_88[0] + *(float *)(local_8c + 0x224) * local_78 + fVar10 * local_68 +
                 *(float *)(local_8c + 0x22c) * local_58;
      fVar12 = local_24 * fVar12;
      fVar9 = *(float *)(local_8c + 0x1fc) * local_14;
      fVar17 = local_48[1] * *(float *)(local_8c + 0x200);
      fVar11 = local_24 * *(float *)(local_8c + 0x208);
      fVar19 = *(float *)(local_8c + 0x20c) * local_14;
      fVar22 = local_24 * fVar10;
      local_24 = local_48[1] * *(float *)(local_8c + 0x210) +
                 local_34 * *(float *)(local_8c + 0x214) + local_24 * *(float *)(local_8c + 0x218) +
                 *(float *)(local_8c + 0x21c) * local_14;
      local_14 = local_48[1] * fVar8 + local_34 * *(float *)(local_8c + 0x224) + fVar22 +
                 *(float *)(local_8c + 0x22c) * local_14;
      fVar22 = local_20 * *(float *)(local_8c + 0x1f8);
      fVar13 = local_10 * *(float *)(local_8c + 0x1fc);
      fVar14 = local_48[2] * *(float *)(local_8c + 0x200);
      fVar21 = local_20 * *(float *)(local_8c + 0x208);
      fVar6 = local_10 * *(float *)(local_8c + 0x20c);
      fVar20 = local_20 * fVar10;
      local_20 = local_48[2] * *(float *)(local_8c + 0x210) +
                 local_30 * *(float *)(local_8c + 0x214) + local_20 * *(float *)(local_8c + 0x218) +
                 local_10 * *(float *)(local_8c + 0x21c);
      local_10 = local_48[2] * fVar8 + local_30 * *(float *)(local_8c + 0x224) + fVar20 +
                 local_10 * *(float *)(local_8c + 0x22c);
      fVar20 = local_1c * *(float *)(local_8c + 0x1f8);
      fVar15 = *(float *)(local_8c + 0x1fc) * local_c;
      fVar18 = local_48[3] * *(float *)(local_8c + 0x200);
      fVar7 = local_1c * *(float *)(local_8c + 0x208);
      fVar16 = *(float *)(local_8c + 0x20c) * local_c;
      fVar10 = local_1c * fVar10;
      local_1c = local_48[3] * *(float *)(local_8c + 0x210) +
                 local_2c * *(float *)(local_8c + 0x214) + local_1c * *(float *)(local_8c + 0x218) +
                 *(float *)(local_8c + 0x21c) * local_c;
      local_c = local_48[3] * fVar8 + local_2c * *(float *)(local_8c + 0x224) + fVar10 +
                *(float *)(local_8c + 0x22c) * local_c;
      local_48[1] = *(float *)(local_8c + 0x1f0) * local_48[1] +
                    *(float *)(local_8c + 500) * local_34 + fVar12 + fVar9;
      local_48[2] = local_48[2] * *(float *)(local_8c + 0x1f0) +
                    local_30 * *(float *)(local_8c + 500) + fVar22 + fVar13;
      local_48[3] = *(float *)(local_8c + 0x1f0) * local_48[3] +
                    *(float *)(local_8c + 500) * local_2c + fVar20 + fVar15;
      local_34 = fVar17 + *(float *)(local_8c + 0x204) * local_34 + fVar11 + fVar19;
      local_30 = local_30 * *(float *)(local_8c + 0x204) + fVar14 + fVar21 + fVar6;
      local_2c = fVar18 + *(float *)(local_8c + 0x204) * local_2c + fVar7 + fVar16;
      FUN_0058c440();
      iVar3 = *(int *)(*(int *)(in_ECX + 0x148) + 0x38);
      FUN_00424f30(local_88,in_ECX + 0xe8);
      fVar11 = 1.0 / (local_6c * 0.0 + local_88[3] * 0.0 + local_4c);
      fVar8 = param_1[1];
      fVar9 = *param_1;
      iVar4 = *(int *)(iVar3 + 0x68);
      iVar3 = *(int *)(iVar3 + 0x94);
      fVar12 = 1.0 / (fVar9 * local_48[3] + fVar8 * local_2c + local_c);
      *(float *)(iVar3 + iVar4 * 8) =
           (fVar12 * (fVar9 * local_48[0] + fVar8 * local_38 + local_18) -
           fVar11 * (local_78 * 0.0 + local_88[0] * 0.0 + local_58)) + *(float *)(iVar3 + iVar4 * 8)
      ;
      *(float *)(iVar3 + 4 + iVar4 * 8) =
           (fVar12 * (fVar9 * local_48[1] + fVar8 * local_34 + local_14) -
           fVar11 * (local_74 * 0.0 + local_88[1] * 0.0 + local_54)) +
           *(float *)(iVar3 + 4 + iVar4 * 8);
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x148) + 0x38) + 4))(1);
      FUN_0062d7f0(local_d0);
      FUN_0062d7f0(local_d0);
      if (param_2 == '\0') {
        *(undefined1 *)(*(int *)(*(int *)(in_ECX + 0x148) + 0x38) + 0x2d) = uVar1;
        FUN_00637260();
      }
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    if (*(int *)(iVar3 + 0x40) != 0) {
      if (*(int *)(iVar3 + 0x40) != 0) {
        pfVar2 = (float *)FUN_0062c5b0(local_88);
        fVar21 = 1.0 / (pfVar2[7] * 0.0 + pfVar2[3] * 0.0 + pfVar2[0xf]);
        fVar10 = fVar21 * (pfVar2[4] * 0.0 + *pfVar2 * 0.0 + pfVar2[0xc]) * -1.0;
        fVar21 = fVar21 * (pfVar2[5] * 0.0 + pfVar2[1] * 0.0 + pfVar2[0xd]) * -1.0;
        local_104 = local_38 * fVar21 + local_48[0] * fVar10 + local_18;
        local_e4 = local_34 * fVar21 + local_48[1] * fVar10 + local_14;
        local_d8 = local_30 * fVar21 + local_48[2] * fVar10 + local_10;
        local_100 = local_2c * fVar21 + local_48[3] * fVar10 + local_c;
        goto LAB_006296f5;
      }
      goto LAB_006296c1;
    }
    iVar3 = *(int *)(iVar3 + 0x28);
  } while( true );
}


/* FUN_0062b400 @ 0062b400  kind=gamemisc  attributed-by=logic:caller-vote  size=36 */

undefined4 FUN_0062b400(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(*(int *)(in_ECX + 0x148) + 0x28);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (*(int *)(iVar1 + 0x40) != 0) break;
    iVar1 = *(int *)(iVar1 + 0x28);
  }
  return *(undefined4 *)(iVar1 + 0x40);
}


/* FUN_0062b510 @ 0062b510  kind=gamemisc  attributed-by=logic:caller-vote  size=1036 */

void FUN_0062b510(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  float *pfVar12;
  int in_ECX;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_d8;
  float local_d0;
  float local_cc;
  undefined1 local_c8 [64];
  undefined1 local_88 [64];
  float local_48;
  float local_44;
  float local_3c;
  float local_38;
  float local_34;
  float local_2c;
  float local_28;
  float local_24;
  float local_1c;
  float local_18;
  float local_14;
  float local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  FUN_00423e70();
  iVar11 = *(int *)(*(int *)(in_ECX + 0x148) + 0x28);
  do {
    if (iVar11 == 0) {
LAB_0062b551:
      local_d0 = local_c;
      local_d8 = local_14;
      local_cc = local_18;
LAB_0062b578:
      pfVar12 = (float *)FUN_0062c5b0(local_c8);
      fVar13 = pfVar12[0xd];
      fVar15 = pfVar12[0xe];
      fVar1 = *pfVar12;
      fVar2 = pfVar12[1];
      fVar3 = pfVar12[5];
      fVar4 = pfVar12[2];
      fVar5 = pfVar12[3];
      fVar6 = pfVar12[4];
      fVar7 = pfVar12[0xc];
      fVar8 = pfVar12[6];
      fVar9 = pfVar12[7];
      fVar10 = pfVar12[0xf];
      fVar14 = 1.0 / ((local_3c * *pfVar12 + local_2c * pfVar12[1] + local_1c * pfVar12[2] +
                      local_d0 * pfVar12[3]) * 0.0 +
                      (local_2c * pfVar12[5] + pfVar12[4] * local_3c + local_1c * pfVar12[6] +
                      local_d0 * pfVar12[7]) * 0.0 +
                     pfVar12[0xd] * local_2c + fVar7 * local_3c + local_1c * fVar15 +
                     local_d0 * pfVar12[0xf]);
      *param_1 = ((local_48 * *pfVar12 + local_38 * pfVar12[1] + local_28 * pfVar12[2] +
                  local_cc * pfVar12[3]) * 0.0 +
                  (local_38 * pfVar12[5] + pfVar12[4] * local_48 + local_28 * pfVar12[6] +
                  local_cc * pfVar12[7]) * 0.0 +
                 pfVar12[0xd] * local_38 + pfVar12[0xc] * local_48 + local_28 * fVar15 +
                 local_cc * pfVar12[0xf]) * fVar14;
      param_1[1] = ((local_44 * fVar1 + local_34 * fVar2 + local_24 * fVar4 + local_d8 * fVar5) *
                    0.0 + (local_34 * fVar3 + fVar6 * local_44 + local_24 * fVar8 + local_d8 * fVar9
                          ) * 0.0 +
                   fVar13 * local_34 + fVar7 * local_44 + local_24 * fVar15 + local_d8 * fVar10) *
                   fVar14;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    if (*(int *)(iVar11 + 0x40) != 0) {
      if (*(int *)(iVar11 + 0x40) != 0) {
        pfVar12 = (float *)FUN_0062c5b0(local_88);
        fVar13 = 1.0 / (pfVar12[7] * 0.0 + pfVar12[3] * 0.0 + pfVar12[0xf]);
        fVar15 = (pfVar12[4] * 0.0 + *pfVar12 * 0.0 + pfVar12[0xc]) * fVar13 * -1.0;
        fVar13 = (pfVar12[5] * 0.0 + pfVar12[1] * 0.0 + pfVar12[0xd]) * fVar13 * -1.0;
        local_cc = local_38 * fVar13 + local_48 * fVar15 + local_18;
        local_d8 = local_34 * fVar13 + local_44 * fVar15 + local_14;
        local_d0 = local_2c * fVar13 + local_3c * fVar15 + local_c;
        goto LAB_0062b578;
      }
      goto LAB_0062b551;
    }
    iVar11 = *(int *)(iVar11 + 0x28);
  } while( true );
}


/* FUN_0062de60 @ 0062de60  kind=gamemisc  attributed-by=logic:caller-vote  size=783 */

void FUN_0062de60(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  int in_ECX;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_d0;
  float local_cc;
  undefined1 local_c8 [64];
  undefined1 local_88 [64];
  float local_48;
  float local_44;
  float local_38;
  float local_34;
  float local_28;
  float local_24;
  float local_18;
  float local_14;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  fVar7 = *(float *)(in_ECX + 0x50);
  fVar8 = *(float *)(in_ECX + 0x60);
  fVar10 = *(float *)(in_ECX + 0x54);
  fVar12 = (*(float *)(in_ECX + 0x78) + fVar7) - fVar8;
  fVar9 = (*(float *)(in_ECX + 0x74) + fVar10) - *(float *)(in_ECX + 100);
  fVar11 = (*(float *)(in_ECX + 0x7c) + fVar10) - *(float *)(in_ECX + 100);
  fVar6 = (*(float *)(in_ECX + 0x70) + fVar7) - fVar8;
  if (fVar12 < 0.0) {
    fVar12 = 0.0;
  }
  if (fVar6 < fVar12) {
    fVar6 = fVar12;
  }
  if (fVar11 < 0.0) {
    fVar11 = 0.0;
  }
  if (fVar9 < fVar11) {
    fVar9 = fVar11;
  }
  fVar10 = (fVar9 + *(float *)(in_ECX + 100)) - fVar10;
  fVar7 = (fVar6 + fVar8) - fVar7;
  FUN_00423e70();
  iVar4 = *(int *)(*(int *)(in_ECX + 0x148) + 0x28);
  do {
    if (iVar4 == 0) {
LAB_0062df31:
      local_d0 = local_14;
      local_cc = local_18;
LAB_0062df4b:
      pfVar5 = (float *)FUN_0062c5b0(local_88);
      fVar8 = pfVar5[4];
      fVar6 = pfVar5[1];
      fVar9 = *pfVar5;
      fVar11 = pfVar5[2];
      fVar12 = pfVar5[6];
      fVar1 = pfVar5[3];
      fVar2 = pfVar5[7];
      fVar3 = pfVar5[5];
      *param_1 = fVar7 * (local_48 * *pfVar5 + local_38 * pfVar5[1] + local_28 * pfVar5[2] +
                         local_cc * pfVar5[3]) +
                 fVar10 * (local_38 * pfVar5[5] + local_48 * pfVar5[4] + local_28 * pfVar5[6] +
                          local_cc * pfVar5[7]);
      param_1[1] = fVar7 * (local_44 * fVar9 + local_34 * fVar6 + local_24 * fVar11 +
                           local_d0 * fVar1) +
                   fVar10 * (local_34 * fVar3 + local_44 * fVar8 + local_24 * fVar12 +
                            local_d0 * fVar2);
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    if (*(int *)(iVar4 + 0x40) != 0) {
      if (*(int *)(iVar4 + 0x40) != 0) {
        pfVar5 = (float *)FUN_0062c5b0(local_c8);
        fVar8 = 1.0 / (pfVar5[7] * 0.0 + pfVar5[3] * 0.0 + pfVar5[0xf]);
        fVar6 = (pfVar5[4] * 0.0 + *pfVar5 * 0.0 + pfVar5[0xc]) * fVar8 * -1.0;
        fVar8 = (pfVar5[5] * 0.0 + pfVar5[1] * 0.0 + pfVar5[0xd]) * fVar8 * -1.0;
        local_cc = local_38 * fVar8 + local_48 * fVar6 + local_18;
        local_d0 = local_34 * fVar8 + local_44 * fVar6 + local_14;
        goto LAB_0062df4b;
      }
      goto LAB_0062df31;
    }
    iVar4 = *(int *)(iVar4 + 0x28);
  } while( true );
}


/* FUN_00636810 @ 00636810  kind=gamemisc  attributed-by=logic:caller-vote  size=91 */

void FUN_00636810(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  int *piVar1;
  
  if (*(int *)(in_ECX + 0x34) != 0) {
    FUN_00664c10(param_1,param_2);
  }
  if (*(int *)(in_ECX + 0x38) != 0) {
    FUN_00664c10(param_1,param_2);
  }
  if (*(int *)(in_ECX + 0x3c) != 0) {
    FUN_00664c10(param_1,param_2);
  }
  piVar1 = (int *)**(int **)(in_ECX + 0x2c);
  if (piVar1 != *(int **)(in_ECX + 0x2c)) {
    do {
      FUN_00636810(param_1,param_2);
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)(in_ECX + 0x2c));
  }
  return;
}


/* FUN_0063a8e0 @ 0063a8e0  kind=gamemisc  attributed-by=logic:caller-vote  size=143 */

undefined4 * FUN_0063a8e0(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_1 != param_2) {
    puVar2 = (undefined4 *)(param_1 + 8);
    puVar1 = param_3 + 6;
    param_1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(param_1 + -0x18 + (int)puVar1);
        puVar1[-5] = puVar2[-1];
        puVar1[-4] = *puVar2;
        puVar1[-3] = puVar2[1];
        puVar1[-2] = puVar2[2];
        puVar1[-1] = puVar2[3];
        *puVar1 = puVar2[4];
        puVar1[1] = puVar2[5];
        puVar1[2] = puVar2[6];
        puVar1[3] = puVar2[7];
        puVar1[4] = puVar2[8];
        puVar1[5] = puVar2[9];
        *(undefined1 *)(puVar1 + 6) = *(undefined1 *)(puVar2 + 10);
      }
      puVar1 = puVar1 + 0xd;
      param_3 = param_3 + 0xd;
      puVar2 = puVar2 + 0xd;
    } while (param_1 + -0x18 + (int)puVar1 != param_2);
    return param_3;
  }
  return param_3;
}


/* FUN_00659ef0 @ 00659ef0  kind=gamemisc  attributed-by=logic:caller-vote  size=82 */

undefined4 FUN_00659ef0(undefined4 *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  bool bVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int in_ECX;
  undefined4 *puVar6;
  
  puVar2 = *(undefined4 **)(in_ECX + 300);
  cVar1 = *(char *)((int)puVar2[1] + 0xd);
  puVar4 = puVar2;
  puVar6 = (undefined4 *)puVar2[1];
  while (cVar1 == '\0') {
    if ((int)puVar6[4] < (int)param_1) {
      puVar5 = (undefined4 *)puVar6[2];
      puVar6 = puVar4;
    }
    else {
      puVar5 = (undefined4 *)*puVar6;
    }
    puVar4 = puVar6;
    puVar6 = puVar5;
    cVar1 = *(char *)((int)puVar5 + 0xd);
  }
  if ((puVar4 == puVar2) || (bVar3 = (int)param_1 < (int)puVar4[4], param_1 = puVar4, bVar3)) {
    param_1 = puVar2;
  }
  if (param_1 != puVar2) {
    return param_1[5];
  }
  return 0;
}


/* FUN_0065ae10 @ 0065ae10  kind=gamemisc  attributed-by=logic:caller-vote  size=103 */

undefined4 FUN_0065ae10(uint param_1)

{
  void *pvVar1;
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  if (param_1 == 0) {
    return 0;
  }
  if (0x3fffffff < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  pvVar1 = operator_new(param_1 * 4);
  if (pvVar1 != (void *)0x0) {
    *in_ECX = pvVar1;
    in_ECX[1] = pvVar1;
    pvVar1 = (void *)((int)pvVar1 + param_1 * 4);
    in_ECX[2] = pvVar1;
    return CONCAT31((int3)((uint)pvVar1 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  std::_Xbad_alloc();
}


/* FUN_0065e8d0 @ 0065e8d0  kind=gamemisc  attributed-by=logic:caller-vote  size=413 */

void FUN_0065e8d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,float param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,float param_8,
                 float *param_9,float *param_10,uint param_11,undefined4 param_12)

{
  int in_ECX;
  float fVar1;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f7008;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x10c));
  FUN_006605c0(param_4,param_5,param_6,param_7,param_3,param_12);
  fVar1 = param_4 / *(float *)(in_ECX + 0xe4);
  param_4 = param_4 / *(float *)(in_ECX + 0xe0);
  if ((char)param_12 != '\0') {
    param_8 = param_8 / param_4;
  }
  if ((param_11 & 0x10) == 0) {
    FUN_0065ded0(param_1,param_2,param_9,param_10,param_11);
  }
  else {
    local_18 = 7;
    local_1c = 0;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
    FUN_0040f680(param_1,0,0xffffffff);
    local_8 = 0;
    FUN_00660d50(local_2c,param_8);
    FUN_0065ded0(local_2c,param_2,param_9,param_10,param_11);
    if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
  }
  *param_9 = *param_9 * param_4;
  param_9[1] = param_9[1] * fVar1;
  *param_10 = *param_10 * param_4;
  param_10[1] = param_10[1] * fVar1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x10c));
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00661680 @ 00661680  kind=gamemisc  attributed-by=logic:caller-vote  size=392 */

void FUN_00661680(int param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int in_ECX;
  int *piVar7;
  int *piVar8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f727b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00677970(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  piVar8 = (int *)(in_ECX + 4);
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  piVar7 = *(int **)*piVar8;
  if (piVar7 != (int *)*piVar8) {
    do {
      puVar6 = (undefined4 *)piVar7[10];
      if (puVar6 != (undefined4 *)0x0) {
        if ((void *)*puVar6 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          operator_delete(puVar6);
        }
                    /* WARNING: Subroutine does not return */
        operator_delete((void *)*puVar6);
      }
      if (*(char *)((int)piVar7 + 0xd) == '\0') {
        piVar2 = (int *)piVar7[2];
        if (*(char *)((int)piVar2 + 0xd) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0xd);
          piVar7 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0xd);
            piVar7 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar7[1] + 0xd);
          piVar3 = (int *)piVar7[1];
          piVar2 = piVar7;
          while ((piVar7 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar7[2]))) {
            cVar1 = *(char *)(piVar7[1] + 0xd);
            piVar3 = (int *)piVar7[1];
            piVar2 = piVar7;
          }
        }
      }
    } while (piVar7 != (int *)*piVar8);
  }
  FUN_00661940(*(undefined4 *)(*piVar8 + 4));
  *(int *)(*piVar8 + 4) = *piVar8;
  *(int *)*piVar8 = *piVar8;
  *(int *)(*piVar8 + 8) = *piVar8;
  *(undefined4 *)(in_ECX + 8) = 0;
  piVar8 = (int *)**(int **)(param_1 + 4);
  if (piVar8 != *(int **)(param_1 + 4)) {
    do {
      pvVar4 = operator_new(0x10);
      local_8 = 0;
      if (pvVar4 == (void *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_00677790(piVar8[10]);
      }
      local_8 = 0xffffffff;
      puVar6 = (undefined4 *)FUN_00661830(piVar8 + 4);
      *puVar6 = uVar5;
      if (*(char *)((int)piVar8 + 0xd) == '\0') {
        piVar7 = (int *)piVar8[2];
        if (*(char *)((int)piVar7 + 0xd) == '\0') {
          cVar1 = *(char *)(*piVar7 + 0xd);
          piVar8 = piVar7;
          piVar7 = (int *)*piVar7;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar7 + 0xd);
            piVar8 = piVar7;
            piVar7 = (int *)*piVar7;
          }
        }
        else {
          cVar1 = *(char *)(piVar8[1] + 0xd);
          piVar2 = (int *)piVar8[1];
          piVar7 = piVar8;
          while ((piVar8 = piVar2, cVar1 == '\0' && (piVar7 == (int *)piVar8[2]))) {
            cVar1 = *(char *)(piVar8[1] + 0xd);
            piVar2 = (int *)piVar8[1];
            piVar7 = piVar8;
          }
        }
      }
    } while (piVar8 != *(int **)(param_1 + 4));
  }
  ExceptionList = local_10;
  return;
}


/* FUN_00691b30 @ 00691b30  kind=gamemisc  attributed-by=logic:caller-vote  size=89 */

void FUN_00691b30(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int in_EDX;
  int iVar5;
  undefined8 uVar6;
  
  uVar2 = **(undefined4 **)(in_EDX + 4);
  puVar1 = *(undefined4 **)(in_EDX + 4) + 0x27;
  uVar6 = FUN_00691390(puVar1);
  iVar5 = (int)((ulonglong)uVar6 >> 0x20);
  iVar4 = (int)uVar6;
  if (iVar4 != 0) {
    iVar3 = *(int *)(iVar5 + 0x14);
    if ((*(int *)(iVar3 + 0x24) == 0x6f75746c) && (iVar5 = *(int *)(iVar5 + 0x3c), iVar5 != 0)) {
      (**(code **)(*(int *)(iVar3 + 0x38) + 0x14))(iVar5);
    }
    FUN_006913e0(puVar1,iVar4);
    FUN_00691290(uVar2,iVar4);
    FUN_0068fd60();
  }
  return;
}


