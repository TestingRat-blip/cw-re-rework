// Proven (render) -- cube. 10 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Proven.h"

/* mat4_rotateZ @ 00424610  kind=game  attributed-by=ledger  size=278 */

void FUN_00424610(float param_1)

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
  *in_ECX = in_ECX[4] * fVar4 + fVar1 * fVar2;
  in_ECX[4] = in_ECX[4] * fVar2 - fVar1 * fVar4;
  fVar1 = in_ECX[1];
  in_ECX[1] = in_ECX[5] * fVar4 + fVar1 * fVar2;
  in_ECX[5] = in_ECX[5] * fVar2 - fVar1 * fVar4;
  fVar1 = in_ECX[2];
  in_ECX[2] = fVar1 * fVar2 + fVar4 * in_ECX[6];
  in_ECX[6] = fVar2 * in_ECX[6] - fVar1 * fVar4;
  fVar1 = in_ECX[3];
  in_ECX[3] = in_ECX[7] * fVar4 + fVar1 * fVar2;
  in_ECX[7] = in_ECX[7] * fVar2 - fVar1 * fVar4;
  return;
}


/* mat4_scaleAxes @ 00424730  kind=game  attributed-by=ledger  size=217 */

void FUN_00424730(float param_1,float param_2,float param_3)

{
  float *in_ECX;
  
  if (param_1 != 1.0) {
    *in_ECX = *in_ECX * param_1;
    in_ECX[1] = param_1 * in_ECX[1];
    in_ECX[2] = param_1 * in_ECX[2];
    in_ECX[3] = param_1 * in_ECX[3];
  }
  if (param_2 != 1.0) {
    in_ECX[4] = in_ECX[4] * param_2;
    in_ECX[5] = in_ECX[5] * param_2;
    in_ECX[6] = in_ECX[6] * param_2;
    in_ECX[7] = in_ECX[7] * param_2;
  }
  if (param_3 != 1.0) {
    in_ECX[8] = in_ECX[8] * param_3;
    in_ECX[9] = in_ECX[9] * param_3;
    in_ECX[10] = in_ECX[10] * param_3;
    in_ECX[0xb] = in_ECX[0xb] * param_3;
  }
  return;
}


/* mat4_translate @ 00424a60  kind=game  attributed-by=ledger  size=201 */

void FUN_00424a60(float param_1,float param_2,float param_3)

{
  float *in_ECX;
  
  in_ECX[0xc] = in_ECX[4] * param_2 + *in_ECX * param_1 + in_ECX[8] * param_3 + in_ECX[0xc];
  in_ECX[0xd] = in_ECX[1] * param_1 + in_ECX[5] * param_2 + in_ECX[9] * param_3 + in_ECX[0xd];
  in_ECX[0xe] = in_ECX[2] * param_1 + in_ECX[6] * param_2 + in_ECX[10] * param_3 + in_ECX[0xe];
  in_ECX[0xf] = in_ECX[3] * param_1 + in_ECX[7] * param_2 + in_ECX[0xb] * param_3 + in_ECX[0xf];
  return;
}


/* vec3i64_toFloat @ 0042c4a0  kind=gamemisc  attributed-by=ledger  size=96 */

void FUN_0042c4a0(longlong *param_1)

{
  float *in_ECX;
  
  *in_ECX = (float)*param_1 * 1.5258789e-05;
  in_ECX[1] = (float)param_1[1] * 1.5258789e-05;
  in_ECX[2] = (float)param_1[2] * 1.5258789e-05;
  return;
}


/* App_render_frame @ 004c85f0  kind=game  attributed-by=ledger  size=304 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c85f0(void)

{
  DWORD DVar1;
  int iVar2;
  
  if ((DAT_0076b1b4 != (int *)0x0) && (DAT_0076b1c8 != (int *)0x0)) {
    DVar1 = timeGetTime();
    if (DAT_0076b234 == 0) {
      DAT_0076b234 = DVar1;
    }
    (**(code **)(*DAT_0076b1c8 + 0x28))(DVar1 - DAT_0076b234);
    if ((((DAT_0076b1c8[0x5d] != DAT_0076b1dc) || (DAT_0076b1c8[0x5e] != DAT_0076b1e0)) ||
        (DAT_0076b1c8[0x5c] != DAT_0076b1d8)) || (DAT_0076b1c8[0x5f] != DAT_0076b1e4)) {
      _DAT_0076b1d8 = *(undefined8 *)(DAT_0076b1c8 + 0x5c);
      _DAT_0076b1e0 = *(undefined8 *)(DAT_0076b1c8 + 0x5e);
      _DAT_0076b1e8 = *(undefined8 *)(DAT_0076b1c8 + 0x60);
      _DAT_0076b1f0 = *(undefined8 *)(DAT_0076b1c8 + 0x62);
      _DAT_0076b1f8 = *(undefined8 *)(DAT_0076b1c8 + 100);
      _DAT_0076b200 = *(undefined8 *)(DAT_0076b1c8 + 0x66);
      FUN_004c8940(0);
    }
    DAT_0076b234 = DVar1;
    (**(code **)(*DAT_0076b1c8 + 0x2c))();
    iVar2 = (**(code **)(*DAT_0076b1b4 + 0x44))(DAT_0076b1b4,0,0,0,0);
    if (iVar2 == -0x7789f798) {
      DAT_0076b1d1 = 1;
    }
  }
  return;
}


/* GameController_buildDecalMesh @ 005f51e0  kind=game  attributed-by=ledger  size=1237 */

/* WARNING: Removing unreachable block (ram,0x005f568f) */

void FUN_005f51e0(undefined4 param_1,undefined2 param_2,undefined1 param_3,int param_4)

{
  uint uVar1;
  bool bVar2;
  undefined1 local_12c;
  undefined1 local_12b;
  int local_128;
  undefined4 local_124;
  undefined1 local_120;
  char local_11f;
  undefined1 local_11e;
  undefined2 local_11c;
  undefined1 local_118 [256];
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f47ab;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  local_12b = 0;
  local_124 = 0;
  local_11e = 0;
  local_18 = 0;
  memset(local_118,0,0x100);
  local_11c = param_2;
  local_120 = param_3;
  if ((param_4 == 1) || (param_4 < 0)) {
    local_11f = 1;
    local_12c = 7;
    local_128 = rand();
    local_128 = local_128 % 100;
    FUN_004c7830(&local_12c);
    local_12c = 4;
    local_128 = rand();
    local_128 = local_128 % 100;
    FUN_004c7830(&local_12c);
    local_12c = 5;
    local_128 = rand();
    local_128 = local_128 % 100;
    FUN_004c7830(&local_12c);
    local_12c = 6;
    local_128 = rand();
    local_128 = local_128 % 100;
    FUN_004c7830(&local_12c);
  }
  if ((param_4 == 3) || (param_4 < 0)) {
    local_11f = 0x19;
    local_12c = 7;
    local_128 = rand();
    local_128 = local_128 % 100;
    FUN_004c7830(&local_12c);
    local_12c = 7;
    local_128 = rand();
    local_128 = local_128 % 100;
    FUN_004c7830(&local_12c);
    local_12c = 4;
    local_128 = rand();
    local_128 = local_128 % 100;
    FUN_004c7830(&local_12c);
    local_12c = 5;
    local_128 = rand();
    local_128 = local_128 % 100;
    FUN_004c7830(&local_12c);
    local_12c = 6;
    local_128 = rand();
    local_128 = local_128 % 100;
    FUN_004c7830(&local_12c);
  }
  if ((param_4 == 2) || (param_4 < 0)) {
    local_11f = 0x1a;
    local_12c = 7;
    local_128 = rand();
    local_128 = local_128 % 100;
    FUN_004c7830(&local_12c);
    local_12c = 7;
    local_128 = rand();
    local_128 = local_128 % 100;
    FUN_004c7830(&local_12c);
    local_12c = 4;
    local_128 = rand();
    local_128 = local_128 % 100;
    FUN_004c7830(&local_12c);
    local_12c = 5;
    local_128 = rand();
    local_128 = local_128 % 100;
    FUN_004c7830(&local_12c);
    local_12c = 6;
    local_128 = rand();
    local_128 = local_128 % 100;
    FUN_004c7830(&local_12c);
  }
  if ((param_4 == 4) || (param_4 < 0)) {
    local_11f = 0x1b;
    local_12c = 7;
    local_128 = rand();
    local_128 = local_128 % 100;
    FUN_004c7830(&local_12c);
    local_12c = 7;
    local_128 = rand();
    local_128 = local_128 % 100;
    FUN_004c7830(&local_12c);
    local_12c = 4;
    local_128 = rand();
    local_128 = local_128 % 100;
    FUN_004c7830(&local_12c);
    local_12c = 5;
    local_128 = rand();
    local_128 = local_128 % 100;
    FUN_004c7830(&local_12c);
    local_12c = 6;
    local_128 = rand();
    local_128 = local_128 % 100;
    FUN_004c7830(&local_12c);
  }
  uVar1 = rand();
  uVar1 = uVar1 & 0x80000001;
  bVar2 = uVar1 == 0;
  if ((int)uVar1 < 0) {
    bVar2 = (uVar1 - 1 | 0xfffffffe) == 0xffffffff;
  }
  local_11f = !bVar2 + '\v';
  local_12c = 8;
  local_128 = rand();
  local_128 = local_128 % 100;
  FUN_004c7830(&local_12c);
  uVar1 = rand();
  uVar1 = uVar1 & 0x80000001;
  bVar2 = uVar1 == 0;
  if ((int)uVar1 < 0) {
    bVar2 = (uVar1 - 1 | 0xfffffffe) == 0xffffffff;
  }
  local_11f = !bVar2 + '\v';
  local_12c = 9;
  local_128 = rand();
  local_128 = local_128 % 100;
  FUN_004c7830(&local_12c);
  uVar1 = rand();
  FUN_0040ee70((uVar1 % 0) * 0x118);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* GameController_buildDecalMesh2 @ 005f8ad0  kind=game  attributed-by=ledger  size=817 */

/* WARNING: Removing unreachable block (ram,0x005f8ddb) */

void FUN_005f8ad0(undefined4 param_1,undefined2 param_2,undefined1 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined1 local_12c;
  char local_12b;
  int local_128;
  undefined4 local_124;
  undefined1 local_120;
  char local_11f;
  undefined1 local_11e;
  undefined2 local_11c;
  undefined1 local_118 [256];
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f48cb;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  local_12b = 0;
  local_128 = 0;
  local_124 = 0;
  local_11e = 0;
  local_18 = 0;
  memset(local_118,0,0x100);
  local_11c = param_2;
  local_120 = param_3;
  local_11f = 1;
  local_12c = 3;
  if ((param_4 == 1) || (param_4 < 0)) {
    iVar1 = rand();
    local_12b = (char)(iVar1 % 3);
    local_128 = rand();
    local_128 = local_128 % 100;
    FUN_004c7830(&local_12c);
    local_11f = 1;
    iVar1 = rand();
    local_12b = (char)(iVar1 % 3) + '\x0f';
    local_128 = rand();
    local_128 = local_128 % 100;
    FUN_004c7830(&local_12c);
    local_12b = 0xd;
    local_128 = rand();
    local_128 = local_128 % 100;
    FUN_004c7830(&local_12c);
  }
  if ((param_4 == 4) || (param_4 < 0)) {
    local_12b = 3;
    local_128 = rand();
    local_128 = local_128 % 100;
    FUN_004c7830(&local_12c);
    local_12b = 5;
    local_128 = rand();
    local_128 = local_128 % 100;
    FUN_004c7830(&local_12c);
    local_12b = 4;
    local_128 = rand();
    local_128 = local_128 % 100;
    FUN_004c7830(&local_12c);
  }
  local_11f = '\x02';
  if ((param_4 == 2) || (param_4 < 0)) {
    local_12b = 6;
    local_128 = rand();
    local_128 = local_128 % 100;
    FUN_004c7830(&local_12c);
    rand();
    local_12b = 8;
    local_128 = rand();
    local_128 = local_128 % 100;
    FUN_004c7830(&local_12c);
  }
  if ((param_4 == 3) || (param_4 < 0)) {
    local_12b = 10;
    local_128 = rand();
    local_128 = local_128 % 100;
    FUN_004c7830(&local_12c);
    local_12b = 0xb;
    local_128 = rand();
    local_128 = local_128 % 100;
    FUN_004c7830(&local_12c);
    local_12b = 0xc;
    uVar2 = rand();
    uVar2 = uVar2 & 0x80000001;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
    }
    local_11f = '\f' - (uVar2 != 0);
    local_128 = rand();
    local_128 = local_128 % 100;
    FUN_004c7830(&local_12c);
  }
  uVar2 = rand();
  FUN_0040ee70((uVar2 % 0) * 0x118);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* vec3_distanceSquared @ 005f8e10  kind=gamemisc  attributed-by=ledger  size=1325 */

float10 FUN_005f8e10(uint *param_1,uint *param_2)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  double dVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint *in_ECX;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 local_2c;
  
  fVar1 = (float)in_ECX[4];
  if (fVar1 < 0.001) {
    return (float10)0;
  }
  uVar8 = in_ECX[6];
  if (((uVar8 != 0xb) && (uVar8 != 0xc)) && (uVar8 != 0xe)) {
    uVar2 = *param_2;
    uVar3 = param_2[1];
    if (uVar8 == 0xd) {
      uVar13 = FUN_0068d946();
      iVar11 = (int)((ulonglong)uVar13 >> 0x20);
      uVar9 = (uint)uVar13;
      uVar8 = *param_1;
      uVar4 = param_1[1];
      uVar13 = FUN_0068d946();
      iVar12 = (int)((ulonglong)uVar13 >> 0x20);
      uVar10 = (uint)uVar13;
      local_2c = CONCAT44((1 - iVar11) - (uint)(0x617d0000 < uVar9),0x617d0000 - uVar9);
      dVar5 = (double)local_2c;
      local_2c = CONCAT44((0x80 - iVar12) - (uint)(0xad580000 < uVar10),-0x52a80000 - uVar10);
      FUN_004c0ef0((double)local_2c * 1.52587890625e-05,dVar5 * 1.52587890625e-05);
      uVar13 = FUN_0068d946();
      uVar7 = (uint)uVar13 - *in_ECX;
      local_2c = CONCAT44((((int)((ulonglong)uVar13 >> 0x20) - in_ECX[1]) -
                          (uint)((uint)uVar13 < *in_ECX)) + uVar4 + (uint)CARRY4(uVar7,uVar8),
                          uVar7 + uVar8);
      fVar6 = (float)local_2c;
      local_2c = CONCAT44(-(uint)(0x700000 < uVar9) - iVar11,0x700000 - uVar9);
      dVar5 = (double)local_2c;
      local_2c = CONCAT44(-(uint)(0xd5f0000 < uVar10) - iVar12,0xd5f0000 - uVar10);
      FUN_004c0ef0((double)local_2c * 1.52587890625e-05,dVar5 * 1.52587890625e-05);
      uVar13 = FUN_0068d946();
      uVar8 = (uint)uVar13 - in_ECX[2];
      local_2c = CONCAT44((((int)((ulonglong)uVar13 >> 0x20) - in_ECX[3]) -
                          (uint)((uint)uVar13 < in_ECX[2])) + uVar3 + (uint)CARRY4(uVar8,uVar2),
                          uVar8 + uVar2);
      return (float10)(((float)local_2c * 1.5258789e-05 * (float)local_2c * 1.5258789e-05 +
                       fVar6 * 1.5258789e-05 * fVar6 * 1.5258789e-05) / (fVar1 * fVar1));
    }
    uVar13 = FUN_0068d946();
    iVar11 = (int)((ulonglong)uVar13 >> 0x20);
    uVar9 = (uint)uVar13;
    uVar8 = *param_1;
    uVar4 = param_1[1];
    uVar13 = FUN_0068d946();
    iVar12 = (int)((ulonglong)uVar13 >> 0x20);
    uVar10 = (uint)uVar13;
    local_2c = CONCAT44((1 - iVar11) - (uint)(0x617d0000 < uVar9),0x617d0000 - uVar9);
    dVar5 = (double)local_2c;
    local_2c = CONCAT44((0x80 - iVar12) - (uint)(0xad580000 < uVar10),-0x52a80000 - uVar10);
    FUN_004c0ef0((double)local_2c * 1.52587890625e-05,dVar5 * 1.52587890625e-05);
    uVar13 = FUN_0068d946();
    uVar7 = (uint)uVar13 - *in_ECX;
    local_2c = CONCAT44((((int)((ulonglong)uVar13 >> 0x20) - in_ECX[1]) -
                        (uint)((uint)uVar13 < *in_ECX)) + uVar4 + (uint)CARRY4(uVar7,uVar8),
                        uVar7 + uVar8);
    fVar6 = (float)local_2c;
    local_2c = CONCAT44(-(uint)(0x700000 < uVar9) - iVar11,0x700000 - uVar9);
    dVar5 = (double)local_2c;
    local_2c = CONCAT44(-(uint)(0xd5f0000 < uVar10) - iVar12,0xd5f0000 - uVar10);
    FUN_004c0ef0((double)local_2c * 1.52587890625e-05,dVar5 * 1.52587890625e-05);
    uVar13 = FUN_0068d946();
    uVar8 = (uint)uVar13 - in_ECX[2];
    local_2c = CONCAT44((((int)((ulonglong)uVar13 >> 0x20) - in_ECX[3]) -
                        (uint)((uint)uVar13 < in_ECX[2])) + uVar3 + (uint)CARRY4(uVar8,uVar2),
                        uVar8 + uVar2);
    return (float10)(((float)local_2c * 1.5258789e-05 * (float)local_2c * 1.5258789e-05 +
                     fVar6 * 1.5258789e-05 * fVar6 * 1.5258789e-05) / (fVar1 * fVar1));
  }
  local_2c = CONCAT44((param_1[1] - in_ECX[1]) - (uint)(*param_1 < *in_ECX),*param_1 - *in_ECX);
  fVar6 = (float)local_2c;
  local_2c = CONCAT44((param_2[1] - in_ECX[3]) - (uint)(*param_2 < in_ECX[2]),*param_2 - in_ECX[2]);
  return (float10)(((float)local_2c * 1.5258789e-05 * (float)local_2c * 1.5258789e-05 +
                   fVar6 * 1.5258789e-05 * fVar6 * 1.5258789e-05) / (fVar1 * fVar1));
}


/* vec3_store4 @ 005f9620  kind=gamemisc  attributed-by=ledger  size=1426 */

float * FUN_005f9620(float *param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  int iVar2;
  int in_ECX;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_28;
  float local_18;
  float local_8;
  
  fVar3 = (float10)FUN_004c0ef0((double)param_3 * 0.1 + 98984.0,(double)param_4 * 0.4);
  fVar4 = (float10)FUN_004c0ef0((double)param_2 * 0.1,(double)param_4 * 0.4);
  iVar2 = FUN_004347a0();
  if (iVar2 == 0) {
    fVar5 = (float10)FUN_005c4dd0(param_2,param_3);
    fVar8 = (float)fVar5;
  }
  else {
    fVar8 = *(float *)(iVar2 + 8);
  }
  iVar2 = FUN_004347a0();
  if (iVar2 == 0) {
    FUN_005c4800(param_2,param_3);
  }
  local_28 = 120.0;
  local_18 = 120.0;
  local_8 = 130.0;
  if (0.5 <= fVar8) {
    if (0.75 < fVar8) {
      fVar8 = (fVar8 - 0.75) * 4.0;
      fVar5 = (float10)FUN_004c0ef0((double)fVar8 * 0.001 + 6544.0,(double)param_3 * 0.001 + 123.0);
      local_18 = (1.0 - fVar8) * 120.0;
      local_8 = (1.0 - fVar8) * 130.0 + fVar8 * 100.0;
      local_28 = local_18 + fVar8 * 200.0;
      local_18 = local_18 + ((float)fVar5 * 20.0 + 130.0) * fVar8;
    }
  }
  else {
    fVar8 = fVar8 * 2.0;
    fVar9 = 1.0 - fVar8;
    local_28 = fVar9 * 10.0 + fVar8 * 160.0;
    local_18 = fVar9 * 20.0 + fVar8 * 160.0;
    local_8 = fVar9 * 50.0 + fVar8 * 170.0;
  }
  fVar5 = (float10)FUN_004c0ef0((double)*(int *)(in_ECX + 0x80022c) + (double)param_2 * 0.005,
                                (double)*(int *)(in_ECX + 0x800230) + (double)param_3 * 0.005);
  fVar8 = (((float)fVar3 + (float)fVar4) * 0.5 + 1.0) * 0.5 * 160.0;
  fVar10 = fVar8 + local_28 + 0.0;
  fVar9 = fVar8 + local_18 + 0.0;
  fVar8 = fVar8 + local_8 + ((float)fVar5 + 1.0) * 10.0;
  *param_1 = fVar10;
  param_1[1] = fVar9;
  param_1[2] = fVar8;
  if (0.0 <= fVar10) {
    if (255.0 < fVar10) {
      *param_1 = 255.0;
    }
  }
  else {
    *param_1 = 0.0;
  }
  if (fVar9 < 0.0) {
    param_1[1] = 0.0;
  }
  if (255.0 < param_1[1]) {
    param_1[1] = 255.0;
  }
  if (fVar8 < 0.0) {
    param_1[2] = 0.0;
  }
  if (255.0 < param_1[2]) {
    param_1[2] = 255.0;
  }
  iVar2 = FUN_004347a0();
  if (iVar2 == 0) {
    fVar3 = (float10)FUN_005ef040(param_2,param_3);
    fVar8 = (float)fVar3;
  }
  else {
    fVar8 = *(float *)(iVar2 + 0xc);
  }
  if (0.0 < fVar8) {
    fVar3 = (float10)FUN_004c0ef0((double)param_2 * 0.05,(double)param_3 * 0.05);
    fVar4 = (float10)FUN_004c0ef0((double)param_2 * 0.02,(double)param_3 * 0.02);
    fVar9 = (float)fVar3 * 0.1 + (float)fVar4;
    if (1.0 < fVar9) {
      fVar9 = 1.0;
    }
    fVar10 = param_1[1];
    fVar1 = param_1[2];
    fVar7 = 1.0 - ABS(fVar9);
    fVar6 = 1.0 - fVar8;
    fVar7 = fVar7 * fVar7 * fVar7 * fVar7 * fVar7;
    fVar9 = *param_1;
    fVar3 = (float10)FUN_004c0ef0((double)param_2 * 0.1,(double)param_3 * 0.1);
    *param_1 = fVar9 * fVar6 + (fVar7 * 200.0 + 10.0) * fVar8;
    param_1[1] = fVar10 * fVar6 + (((float)fVar3 + 1.0) * fVar7 * 50.0 + 10.0) * fVar8;
    param_1[2] = fVar1 * fVar6 + fVar8 * 10.0;
  }
  return param_1;
}


/* vec2_store @ 005f9e50  kind=gamemisc  attributed-by=ledger  size=276 */

float * FUN_005f9e50(float *param_1,int param_2,int param_3)

{
  float10 fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = (float10)FUN_004c0ef0((double)param_2 * 0.04,(double)param_3 * 0.04);
  fVar3 = ((float)fVar1 + 1.0) * 0.5;
  fVar2 = 1.0 - fVar3;
  fVar4 = fVar3 * 190.0 + fVar2 * 100.0;
  fVar5 = fVar3 * 220.0 + fVar2 * 180.0;
  fVar2 = fVar3 * 255.0 + fVar2 * 255.0;
  *param_1 = fVar4;
  param_1[1] = fVar5;
  param_1[2] = fVar2;
  if (0.0 <= fVar4) {
    if (255.0 < fVar4) {
      *param_1 = 255.0;
    }
  }
  else {
    *param_1 = 0.0;
  }
  if (fVar5 < 0.0) {
    param_1[1] = 0.0;
  }
  if (255.0 < param_1[1]) {
    param_1[1] = 255.0;
  }
  if (fVar2 < 0.0) {
    param_1[2] = 0.0;
  }
  if (255.0 < param_1[2]) {
    param_1[2] = 255.0;
  }
  return param_1;
}


