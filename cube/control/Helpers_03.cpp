// Helpers_03 (control) -- cube. 171 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Helpers_03.h"

/* FUN_00608a60 @ 00608a60  kind=gamemisc  attributed-by=caller-vote  size=44 */

int FUN_00608a60(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_0046d990();
  *(undefined2 *)(iVar1 + 0xc) = 0;
  if ((undefined4 *)(iVar1 + 0x10) != (undefined4 *)0x0) {
    *(undefined4 *)(iVar1 + 0x10) = *param_1;
    *(undefined4 *)(iVar1 + 0x14) = param_1[1];
  }
  return iVar1;
}


/* FUN_00608a90 @ 00608a90  kind=gamemisc  attributed-by=caller-vote  size=130 */

int FUN_00608a90(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f5081;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_0046d590(param_1,param_2);
  local_8 = 1;
  if ((undefined4 *)(iVar1 + 8) != (undefined4 *)0x0) {
    *(undefined4 *)(iVar1 + 8) = *param_3;
    *(undefined4 *)(iVar1 + 0xc) = param_3[1];
    FUN_00458e90(param_3 + 2);
  }
  ExceptionList = local_10;
  return iVar1;
}


/* FUN_00608b30 @ 00608b30  kind=gamemisc  attributed-by=caller-vote  size=92 */

void FUN_00608b30(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f50a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_00608db0(*(undefined4 *)*in_ECX,param_1,param_2,param_2);
  ExceptionList = local_10;
  return;
}


/* FUN_00608ba0 @ 00608ba0  kind=gamemisc  attributed-by=caller-vote  size=116 */

void FUN_00608ba0(int *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int *in_ECX;
  
  iVar2 = *in_ECX;
  uVar7 = FUN_00608c80(*(undefined4 *)(*param_1 + 4),iVar2,param_2);
  *(undefined4 *)(iVar2 + 4) = uVar7;
  piVar3 = (int *)*in_ECX;
  in_ECX[1] = param_1[1];
  piVar4 = (int *)piVar3[1];
  if (*(char *)((int)piVar4 + 0xd) != '\0') {
    *piVar3 = (int)piVar3;
    *(int *)(*in_ECX + 8) = *in_ECX;
    return;
  }
  cVar1 = *(char *)(*piVar4 + 0xd);
  piVar6 = (int *)*piVar4;
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*piVar6 + 0xd);
    piVar4 = piVar6;
    piVar6 = (int *)*piVar6;
  }
  *piVar3 = (int)piVar4;
  iVar2 = *(int *)(*in_ECX + 4);
  iVar5 = *(int *)(iVar2 + 8);
  cVar1 = *(char *)(iVar5 + 0xd);
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*(int *)(iVar5 + 8) + 0xd);
    iVar2 = iVar5;
    iVar5 = *(int *)(iVar5 + 8);
  }
  *(int *)(*in_ECX + 8) = iVar2;
  return;
}


/* FUN_00608c20 @ 00608c20  kind=gamemisc  attributed-by=caller-vote  size=86 */

undefined4 * FUN_00608c20(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_1 != param_2) {
    puVar2 = param_1 + 4;
    do {
      *param_3 = puVar2[-4];
      param_3[1] = puVar2[-3];
      param_3[2] = puVar2[-2];
      param_3[3] = puVar2[-1];
      param_3[4] = *puVar2;
      param_3[5] = puVar2[1];
      param_3[6] = puVar2[2];
      puVar1 = puVar2 + 4;
      param_3 = param_3 + 8;
      puVar2 = puVar2 + 8;
    } while (puVar1 != param_2);
    return param_3;
  }
  return param_3;
}


/* FUN_00608c80 @ 00608c80  kind=gamemisc  attributed-by=caller-vote  size=159 */

undefined4 * FUN_00608c80(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *in_ECX;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f50c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar3 = (undefined4 *)*in_ECX;
  if (*(char *)((int)param_1 + 0xd) == '\0') {
    puVar1 = (undefined4 *)FUN_00608a60(param_1 + 4);
    puVar1[1] = param_2;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 3);
    if (*(char *)((int)puVar3 + 0xd) != '\0') {
      puVar3 = puVar1;
    }
    local_8 = 0;
    uVar2 = FUN_00608c80(*param_1,puVar1,param_3);
    *puVar1 = uVar2;
    uVar2 = FUN_00608c80(param_1[2],puVar1,param_3);
    puVar1[2] = uVar2;
  }
  ExceptionList = local_10;
  return puVar3;
}


/* FUN_00608d40 @ 00608d40  kind=gamemisc  attributed-by=caller-vote  size=101 */

void FUN_00608d40(int *param_1,int *param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  if (param_1 != param_2) {
    iVar4 = *param_3;
    do {
      iVar4 = iVar4 + 1;
      *param_3 = iVar4;
      if (*(char *)((int)param_1 + 0xd) == '\0') {
        piVar2 = (int *)param_1[2];
        if (*(char *)((int)piVar2 + 0xd) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0xd);
          param_1 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0xd);
            param_1 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(param_1[1] + 0xd);
          piVar3 = (int *)param_1[1];
          piVar2 = param_1;
          while ((param_1 = piVar3, cVar1 == '\0' && (piVar2 == (int *)param_1[2]))) {
            cVar1 = *(char *)(param_1[1] + 0xd);
            piVar3 = (int *)param_1[1];
            piVar2 = param_1;
          }
        }
      }
    } while (param_1 != param_2);
  }
  return;
}


/* FUN_00608db0 @ 00608db0  kind=gamemisc  attributed-by=caller-vote  size=155 */

void FUN_00608db0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f50e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  while( true ) {
    if (param_2 == param_3) {
      ExceptionList = local_10;
      return;
    }
    iVar1 = FUN_00608a20(param_1,*(undefined4 *)(param_1 + 4),param_2);
    if (*(int *)(in_ECX + 4) == 0xaaaaaa9) break;
    *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 1;
    *(int *)(param_1 + 4) = iVar1;
    **(int **)(iVar1 + 4) = iVar1;
    param_2 = param_2 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("list<T> too long");
}


/* FUN_00608e80 @ 00608e80  kind=gamemisc  attributed-by=caller-vote  size=118 */

void FUN_00608e80(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f5108;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = 0;
  in_ECX[1] = 0;
  uVar1 = FUN_0043c870();
  *in_ECX = uVar1;
  local_18 = local_18 & 0xffffff00;
  local_8 = 1;
  FUN_00608ba0(param_1,local_18);
  ExceptionList = local_10;
  return;
}


/* FUN_00608f20 @ 00608f20  kind=gamemisc  attributed-by=caller-vote  size=31 */

void FUN_00608f20(void)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  uVar1 = FUN_0046d550(0,0);
  *in_ECX = uVar1;
  return;
}


/* FUN_00608f40 @ 00608f40  kind=gamemisc  attributed-by=caller-vote  size=27 */

void FUN_00608f40(void)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  uVar1 = FUN_00678520();
  *in_ECX = uVar1;
  return;
}


/* FUN_00608f60 @ 00608f60  kind=gamemisc  attributed-by=caller-vote  size=132 */

undefined4 * FUN_00608f60(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e9148;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = *(undefined4 *)(param_1 + 0x60);
  in_ECX[1] = *(undefined4 *)(param_1 + 100);
  uVar1 = *(undefined4 *)(param_1 + 0x40);
  uVar2 = *(undefined4 *)(param_1 + 0x3c);
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  uVar3 = FUN_0046d590(0,0);
  in_ECX[2] = uVar3;
  local_8 = 0;
  FUN_00608b30(uVar2,uVar1);
  ExceptionList = local_10;
  return in_ECX;
}


/* FUN_00608ff0 @ 00608ff0  kind=gamemisc  attributed-by=caller-vote  size=136 */

void FUN_00608ff0(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = param_1;
  FUN_00468790(param_1);
  FUN_00608e80(iVar1 + 0x78,(int)&param_1 + 3);
  *(undefined4 *)(in_ECX + 0x80) = *(undefined4 *)(iVar1 + 0x80);
  *(undefined4 *)(in_ECX + 0x84) = *(undefined4 *)(iVar1 + 0x84);
  *(undefined4 *)(in_ECX + 0x88) = *(undefined4 *)(iVar1 + 0x88);
  *(undefined4 *)(in_ECX + 0x8c) = *(undefined4 *)(iVar1 + 0x8c);
  *(undefined4 *)(in_ECX + 0x90) = *(undefined4 *)(iVar1 + 0x90);
  *(undefined4 *)(in_ECX + 0x94) = *(undefined4 *)(iVar1 + 0x94);
  *(undefined4 *)(in_ECX + 0x98) = *(undefined4 *)(iVar1 + 0x98);
  *(undefined4 *)(in_ECX + 0x9c) = *(undefined4 *)(iVar1 + 0x9c);
  return;
}


/* FUN_00609080 @ 00609080  kind=gamemisc  attributed-by=caller-vote  size=262 */

void FUN_00609080(int *param_1)

{
  void *pvVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int *in_ECX;
  uint uVar5;
  uint uVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar2 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f5130;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (in_ECX != param_1) {
    iVar4 = *param_1;
    if (iVar4 == param_1[1]) {
      iVar4 = *in_ECX;
    }
    else {
      pvVar1 = (void *)*in_ECX;
      uVar5 = param_1[1] - iVar4 >> 5;
      uVar6 = in_ECX[1] - (int)pvVar1 >> 5;
      if (uVar6 < uVar5) {
        if ((uint)(in_ECX[2] - (int)pvVar1 >> 5) < uVar5) {
          if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            operator_delete(pvVar1);
          }
          cVar3 = FUN_00609210(param_1[1] - *param_1 >> 5);
          if (cVar3 == '\0') {
            ExceptionList = local_10;
            return;
          }
          local_8 = 0;
          iVar4 = FUN_005ae9a0(*piVar2,piVar2[1],*in_ECX,(int)&param_1 + 3,param_1);
        }
        else {
          iVar4 = uVar6 * 0x20 + *param_1;
          FUN_00608c20(*param_1,iVar4,pvVar1,param_1);
          iVar4 = FUN_005ae9a0(iVar4,piVar2[1],in_ECX[1],(int)&param_1 + 3,param_1);
        }
      }
      else {
        FUN_00608c20(iVar4,param_1[1],pvVar1,param_1);
        iVar4 = (piVar2[1] - *piVar2 & 0xffffffe0U) + *in_ECX;
      }
    }
    in_ECX[1] = iVar4;
  }
  ExceptionList = local_10;
  return;
}


/* FUN_006091a0 @ 006091a0  kind=gamemisc  attributed-by=caller-vote  size=9 */

int FUN_006091a0(void)

{
  int *in_ECX;
  
  return *(int *)(*in_ECX + 4) + 8;
}


/* FUN_006091b0 @ 006091b0  kind=gamemisc  attributed-by=caller-vote  size=19 */

void FUN_006091b0(int *param_1)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  *param_1 = iVar1;
  *in_ECX = *(int *)(iVar1 + 4);
  return;
}


/* FUN_006091d0 @ 006091d0  kind=gamemisc  attributed-by=caller-vote  size=57 */

undefined4 FUN_006091d0(void)

{
  uint *in_ECX;
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_0068d946();
  iVar1 = (int)((ulonglong)uVar2 >> 0x20);
  if ((iVar1 <= (int)in_ECX[1]) && ((iVar1 < (int)in_ECX[1] || ((uint)uVar2 <= *in_ECX)))) {
    return 1;
  }
  return 0;
}


/* FUN_00609210 @ 00609210  kind=gamemisc  attributed-by=caller-vote  size=101 */

uint FUN_00609210(uint param_1)

{
  uint in_EAX;
  void *pvVar1;
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  if (param_1 == 0) {
    return in_EAX & 0xffffff00;
  }
  if (0x7ffffff < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  pvVar1 = operator_new(param_1 * 0x20);
  if (pvVar1 != (void *)0x0) {
    *in_ECX = pvVar1;
    in_ECX[1] = pvVar1;
    pvVar1 = (void *)((int)pvVar1 + param_1 * 0x20);
    in_ECX[2] = pvVar1;
    return CONCAT31((int3)((uint)pvVar1 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  std::_Xbad_alloc();
}


/* FUN_0060aa00 @ 0060aa00  kind=gamemisc  attributed-by=caller-vote  size=77 */

undefined4 FUN_0060aa00(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 local_c [4];
  undefined1 local_8 [4];
  
  puVar3 = (undefined4 *)FUN_00609280(local_c,param_1);
  uVar1 = *puVar3;
  uVar2 = puVar3[1];
  param_1 = 0;
  FUN_00608d40(uVar1,uVar2,&param_1,0);
  FUN_0067eb10(local_8,uVar1,uVar2);
  return param_1;
}


/* FUN_0060aa50 @ 0060aa50  kind=gamemisc  attributed-by=caller-vote  size=8 */

int FUN_0060aa50(void)

{
  undefined4 *in_ECX;
  
  return *(int *)*in_ECX + 8;
}


/* FUN_0060aa60 @ 0060aa60  kind=gamemisc  attributed-by=caller-vote  size=11 */

byte FUN_0060aa60(void)

{
  int in_ECX;
  
  return *(byte *)(in_ECX + 3) >> 5 & 1;
}


/* FUN_0060aa70 @ 0060aa70  kind=gamemisc  attributed-by=caller-vote  size=67 */

void FUN_0060aa70(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  iVar2 = FUN_00608a90(iVar1,*(undefined4 *)(iVar1 + 4),param_1);
  if (in_ECX[1] == 0xaaaaaa9) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  in_ECX[1] = in_ECX[1] + 1;
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}


/* FUN_0060ab30 @ 0060ab30  kind=gamemisc  attributed-by=caller-vote  size=6596 */

void FUN_0060ab30(int param_1)

{
  uint *puVar1;
  int *piVar2;
  bool bVar3;
  int *piVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined *puVar9;
  int in_ECX;
  uint extraout_ECX;
  int iVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  undefined1 *puVar16;
  bool bVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  longlong lVar24;
  char local_2e8 [4];
  char local_2e4 [4];
  undefined2 local_2e0;
  undefined1 local_2de;
  float local_2dc;
  uint local_2d8;
  uint local_2d4;
  float local_2d0;
  uint local_2cc;
  uint local_2c8;
  int local_2c4;
  float local_2c0;
  float local_2bc;
  int local_2b8;
  uint local_2b4;
  uint local_2b0;
  float local_2ac;
  int *local_2a8;
  float local_2a4;
  float local_2a0;
  float local_29c;
  float local_298;
  float local_294;
  char local_28d;
  float local_28c;
  float local_288;
  float local_284;
  float local_27c;
  float local_278;
  float local_274;
  float local_24c [13];
  float local_218;
  float local_214;
  float local_210;
  float local_20c;
  float local_208;
  int local_204;
  int local_200;
  int local_1fc;
  int local_1f8;
  int local_1f4;
  int local_1f0;
  int local_1ec;
  int local_1e8;
  int local_1e4;
  int local_1e0;
  int local_1dc;
  int local_1d8;
  uint local_1d4 [12];
  float local_1a4 [4];
  float local_194;
  float local_190;
  uint local_18c [6];
  float local_174 [3];
  int local_168;
  int iStack_164;
  int local_160;
  int iStack_15c;
  int local_158;
  int iStack_154;
  int local_150;
  int iStack_14c;
  int local_148;
  int iStack_144;
  int local_140;
  int iStack_13c;
  float local_138;
  float fStack_134;
  float local_130;
  float local_12c;
  float fStack_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float fStack_110;
  float local_10c;
  float local_108;
  float fStack_104;
  float local_100;
  float local_fc;
  float fStack_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  uint local_a4;
  float local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  float local_8c;
  float fStack_88;
  float local_84;
  float local_80;
  float fStack_7c;
  float local_78;
  float local_74;
  float fStack_70;
  float local_6c;
  float local_68;
  float fStack_64;
  float local_60;
  float local_5c;
  float fStack_58;
  float local_54;
  float local_50;
  float fStack_4c;
  float local_48;
  float local_44;
  float fStack_40;
  float local_3c;
  undefined8 local_38;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  int local_20;
  int local_1c;
  int local_18;
  float local_14;
  float fStack_10;
  float local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_2b8 = param_1;
  if (0.0 < *(float *)(param_1 + 0x16c) || *(float *)(param_1 + 0x16c) == 0.0) {
    local_2d8 = 0;
    local_2c4 = in_ECX;
LAB_0060ab70:
    local_2bc = *(float *)(local_2b8 + 0x80);
    local_2a4 = *(float *)(local_2b8 + 0x84);
    local_29c = *(float *)(local_2b8 + 0x88);
    local_1a4[0] = *(float *)(local_2b8 + 0x80) * 0.5;
    iVar13 = 0;
    local_1a4[1] = *(float *)(local_2b8 + 0x84) * 0.5;
    local_1a4[2] = *(float *)(local_2b8 + 0x88) * 0.5;
    do {
      local_294 = local_1a4[iVar13] * 65536.0;
      uVar23 = FUN_0068d946();
      local_18c[iVar13 * 2] = (uint)uVar23;
      local_18c[iVar13 * 2 + 1] = (uint)((ulonglong)uVar23 >> 0x20);
      iVar13 = iVar13 + 1;
    } while (iVar13 < 3);
    local_2d4 = *(uint *)(local_2b8 + 0x10);
    local_2c8 = *(uint *)(local_2b8 + 0x14);
    local_2cc = *(uint *)(local_2b8 + 0x18);
    local_2c0 = *(float *)(local_2b8 + 0x1c);
    local_204 = local_2d4 - local_18c[0];
    local_2b0 = *(uint *)(local_2b8 + 0x20);
    local_2ac = *(float *)(local_2b8 + 0x24);
    local_200 = (local_2c8 - local_18c[1]) - (uint)(local_2d4 < local_18c[0]);
    local_1fc = local_2cc - local_18c[2];
    local_1f8 = ((int)local_2c0 - local_18c[3]) - (uint)(local_2cc < local_18c[2]);
    local_1f4 = local_2b0 - local_18c[4];
    local_1f0 = ((int)local_2ac - local_18c[5]) - (uint)(local_2b0 < local_18c[4]);
    local_298 = local_2c0;
    FUN_0042f040(&local_a4,&local_204);
    iVar13 = 0;
    local_174[0] = local_2bc * 0.5;
    local_174[1] = local_2a4 * 0.5;
    local_174[2] = local_29c * 0.5;
    do {
      local_2d0 = local_174[iVar13] * 65536.0;
      uVar23 = FUN_0068d946();
      local_1d4[iVar13 * 2] = (uint)uVar23;
      local_1d4[iVar13 * 2 + 1] = (uint)((ulonglong)uVar23 >> 0x20);
      iVar13 = iVar13 + 1;
    } while (iVar13 < 3);
    local_1ec = local_2d4 + local_1d4[0];
    local_1e8 = local_2c8 + local_1d4[1] + (uint)CARRY4(local_2d4,local_1d4[0]);
    local_1e4 = local_2cc + local_1d4[2];
    local_1e0 = (int)local_298 + local_1d4[3] + (uint)CARRY4(local_2cc,local_1d4[2]);
    local_1dc = local_2b0 + local_1d4[4];
    local_1d8 = (int)local_2ac + local_1d4[5] + (uint)CARRY4(local_2b0,local_1d4[4]);
    FUN_0042f040(&local_98,&local_1ec);
    piVar12 = (int *)(extraout_ECX & 0xffffff00);
    local_2b0 = local_a4;
    iVar13 = local_94;
    fVar20 = local_a0;
    local_2a8 = piVar12;
    if ((int)local_a4 <= local_98) {
      do {
        local_29c = fVar20;
        iVar14 = local_9c;
        fVar20 = local_29c;
        if ((int)local_29c <= iVar13) {
          do {
            if (iVar14 <= local_90) {
              iVar13 = ((int)local_29c >> 0x1f & 0xffU) + (int)local_29c;
              uVar15 = iVar13 >> 8;
              uVar6 = (int)(local_2b0 + ((int)local_2b0 >> 0x1f & 0xffU)) >> 8;
              local_2b4 = uVar6;
              do {
                if ((((-1 < (int)uVar6) && (-1 < (int)uVar15)) && ((int)uVar6 < 0x10000)) &&
                   ((int)uVar15 < 0x10000)) {
                  iVar7 = (int)(local_2b4 + ((int)local_2b4 >> 0x1f & 0x3fU)) >> 6;
                  iVar10 = (int)((iVar13 >> 0x1f & 0x3fU) + uVar15) >> 6;
                  uVar6 = local_2b4;
                  piVar12 = local_2a8;
                  if (((-1 < iVar7) && (-1 < iVar10)) &&
                     ((iVar7 < 0x400 &&
                      ((iVar10 < 0x400 &&
                       (iVar7 = *(int *)(local_2c4 + 0xbc + (iVar7 * 0x400 + iVar10) * 4),
                       iVar7 != 0)))))) {
                    uVar11 = local_2b4 & 0x8000003f;
                    if ((int)uVar11 < 0) {
                      uVar11 = (uVar11 - 1 | 0xffffffc0) + 1;
                    }
                    uVar8 = uVar15 & 0x8000003f;
                    if ((int)uVar8 < 0) {
                      uVar8 = (uVar8 - 1 | 0xffffffc0) + 1;
                    }
                    iVar10 = uVar11 * 0x40 + uVar8;
                    if (*(int *)(iVar7 + 0x10018 + iVar10 * 4) != 0) {
                      if ((((((int)local_2b0 < 0) || ((int)local_29c < 0)) ||
                           (0xffffff < (int)local_2b0)) ||
                          ((0xffffff < (int)local_29c || (iVar7 == 0)))) ||
                         (iVar7 = *(int *)(iVar7 + 0x10018 + iVar10 * 4), iVar7 == 0)) {
LAB_0060afac:
                        puVar9 = &DAT_0076de34;
                      }
                      else {
                        uVar6 = (uint)local_29c & 0x800000ff;
                        if ((int)uVar6 < 0) {
                          uVar6 = (uVar6 - 1 | 0xffffff00) + 1;
                        }
                        uVar11 = local_2b0 & 0x800000ff;
                        if ((int)uVar11 < 0) {
                          uVar11 = (uVar11 - 1 | 0xffffff00) + 1;
                        }
                        iVar7 = (uVar6 * 0x100 + uVar11) * 0x20 + *(int *)(iVar7 + 0xa8);
                        if ((iVar7 == 0) || (iVar10 = *(int *)(iVar7 + 0x10), iVar14 < iVar10))
                        goto LAB_0060afac;
                        if (iVar14 < *(int *)(iVar7 + 0x1c) + iVar10) {
                          puVar9 = (undefined *)FUN_0042f730(iVar14 - iVar10);
                          if ((((puVar9[3] & 0x1f) == 0) && (iVar14 < 1)) &&
                             ((puVar9[3] & 0x40) == 0)) {
                            puVar9 = &DAT_0076de2c;
                          }
                        }
                        else {
                          puVar9 = &DAT_0076de2c;
                          if (0 < iVar14) {
                            puVar9 = &DAT_0076de30;
                          }
                        }
                      }
                      uVar6 = local_2b4;
                      piVar12 = local_2a8;
                      if (((puVar9[3] & 0x1f) != 0) &&
                         (piVar12 = (int *)((uint)local_2a8 & 0xff), local_2a8 = piVar12,
                         (puVar9[3] & 0x1f) != 2)) {
                        piVar12 = (int *)0x1;
                        local_2a8 = piVar12;
                      }
                    }
                  }
                }
                iVar7 = local_2b8;
                iVar14 = iVar14 + 1;
              } while (iVar14 <= local_90);
              iVar14 = local_9c;
              if ((char)piVar12 != '\0') {
                local_2dc = *(float *)(local_2b8 + 0x88) * 0.5 * 65536.0;
                uVar23 = FUN_0068d946();
                local_2c0 = (float)((ulonglong)uVar23 >> 0x20);
                local_2c8 = (uint)uVar23;
                uVar6 = *(uint *)(iVar7 + 0x20);
                iVar13 = uVar6 - local_2c8;
                iVar14 = (*(int *)(iVar7 + 0x24) - (int)local_2c0) - (uint)(uVar6 < local_2c8);
                if ((iVar14 < 1) && (iVar14 < 0)) {
                  iVar13 = __alldiv(iVar13,iVar14,0x10000,0);
                  uVar6 = iVar13 - 1;
                }
                else {
                  uVar6 = __alldiv(iVar13,iVar14,0x10000,0);
                }
                bVar17 = CARRY4(uVar6 * 0x10000,local_2c8);
                iVar14 = uVar6 * 0x10000 + local_2c8;
                iVar13 = (((int)uVar6 >> 0x1f) << 0x10 | uVar6 >> 0x10) + (int)local_2c0;
                lVar24 = FUN_0068d946();
                local_2d8 = local_2d8 + 1;
                *(longlong *)(local_2b8 + 0x20) = lVar24 + CONCAT44(iVar13 + (uint)bVar17,iVar14);
                *(undefined4 *)(local_2b8 + 0x1180) = 0;
                if ((int)local_2d8 < 1) goto LAB_0060ab70;
                goto LAB_0060b03f;
              }
            }
            local_29c = (float)((int)local_29c + 1);
            iVar13 = local_94;
            fVar20 = local_a0;
          } while ((int)local_29c <= local_94);
        }
        local_2b0 = local_2b0 + 1;
      } while ((int)local_2b0 <= local_98);
    }
LAB_0060b03f:
    piVar12 = (int *)**(int **)(local_2c4 + 0xc);
    iVar13 = local_2c4;
    iVar14 = local_2b8;
    local_2a8 = piVar12;
    if (piVar12 != *(int **)(local_2c4 + 0xc)) {
LAB_0060b060:
      fVar20 = (float)piVar12[6];
      local_298 = fVar20;
      if (fVar20 != 0.0) {
        local_2d8 = *(uint *)(iVar14 + 0x10);
        local_2c8 = *(uint *)(iVar14 + 0x14);
        local_2a4 = *(float *)(iVar14 + 0x18);
        local_29c = *(float *)(local_2b8 + 0x1c);
        local_2a0 = *(float *)(local_2b8 + 0x24);
        local_2ac = *(float *)(local_2b8 + 0x20);
        local_168 = local_2d8 - *(uint *)((int)fVar20 + 0x80U);
        iStack_164 = (local_2c8 - *(int *)((int)fVar20 + 0x84)) -
                     (uint)(local_2d8 < *(uint *)((int)fVar20 + 0x80U));
        local_160 = (int)local_2a4 - (int)*(float *)((int)fVar20 + 0x88U);
        iStack_15c = ((int)local_29c - *(int *)((int)fVar20 + 0x8c)) -
                     (uint)((uint)local_2a4 < (uint)*(float *)((int)fVar20 + 0x88U));
        local_158 = (int)local_2ac - (int)*(float *)((int)fVar20 + 0x90U);
        iStack_154 = ((int)local_2a0 - *(int *)((int)fVar20 + 0x94)) -
                     (uint)((uint)local_2ac < (uint)*(float *)((int)fVar20 + 0x90U));
        local_120 = (float)CONCAT44(iStack_164,local_168) * 1.5258789e-05;
        local_294 = (float)CONCAT44(iStack_154,local_158);
        local_11c = (float)CONCAT44(iStack_15c,local_160) * 1.5258789e-05;
        local_118 = local_294 * 1.5258789e-05;
        iVar13 = local_2c4;
        iVar14 = local_2b8;
        piVar12 = local_2a8;
        local_2c0 = local_29c;
        if (((local_11c * local_11c + local_120 * local_120 + local_118 * local_118 <= 4096.0) &&
            (0x280c < (int)(*(int *)(local_2c4 + 0x24) - *(int *)(local_2c4 + 0x20) & 0xfffffffcU)))
           && (local_2d0 = *(float *)(*(int *)(local_2c4 + 0x20) + 0x280c), local_2d0 != 0.0)) {
          local_2b0 = *(uint *)((int)local_2d0 + 0x48);
          local_2cc = *(uint *)((int)local_2d0 + 0x44);
          local_2d4 = *(uint *)((int)local_2d0 + 0x4c);
          fVar19 = (float)(int)local_2b0 * 0.5 * 0.0;
          fVar21 = (float)(int)local_2d4 * 0.5 * 0.0;
          fVar22 = (float)(int)local_2cc * 0.5 * 0.0;
          local_c0 = fVar19 + (float)(int)local_2cc * 0.5 + fVar21 + 0.0;
          fVar19 = fVar22 + fVar19;
          local_bc = fVar22 + (float)(int)local_2b0 * 0.5 + fVar21 + 0.0;
          local_b8 = fVar19 + (float)(int)local_2d4 * 0.5 + 0.0;
          local_b4 = fVar19 + fVar21 + 1.0;
          local_2c0 = *(float *)((int)fVar20 + 0x98);
          local_294 = -local_2c0 * 0.017453292;
          dVar18 = (double)local_294;
          libm_sse2_cos_precise();
          local_2bc = (float)dVar18;
          dVar18 = (double)local_294;
          libm_sse2_sin_precise();
          local_ec = (float)dVar18;
          fVar19 = local_ec * 0.0;
          local_150 = local_2d8 - *(uint *)((int)fVar20 + 0x80U);
          local_f0 = local_2bc + fVar19;
          local_d8 = local_2bc * 0.0;
          local_dc = local_2bc - fVar19;
          local_e0 = local_d8 - local_ec;
          local_ec = local_ec + local_d8;
          local_e8 = local_d8 + fVar19;
          local_d8 = local_d8 - fVar19;
          local_e4 = local_e8;
          local_d4 = local_d8;
          iStack_14c = (local_2c8 - *(int *)((int)fVar20 + 0x84)) -
                       (uint)(local_2d8 < *(uint *)((int)fVar20 + 0x80U));
          local_148 = (int)local_2a4 - (int)*(float *)((int)fVar20 + 0x88U);
          iStack_144 = ((int)local_29c - *(int *)((int)fVar20 + 0x8c)) -
                       (uint)((uint)local_2a4 < (uint)*(float *)((int)fVar20 + 0x88U));
          local_140 = (int)local_2ac - (int)*(float *)((int)fVar20 + 0x90U);
          iStack_13c = ((int)local_2a0 - *(int *)((int)fVar20 + 0x94)) -
                       (uint)((uint)local_2ac < (uint)*(float *)((int)fVar20 + 0x90U));
          local_b0 = (float)CONCAT44(iStack_14c,local_150) * 1.5258789e-05;
          local_ac = (float)CONCAT44(iStack_144,local_148) * 1.5258789e-05;
          local_a8 = (float)CONCAT44(iStack_13c,local_140) * 1.5258789e-05;
          local_294 = local_a8 * 0.0;
          local_c0 = local_ac * local_e0 + local_b0 * local_f0 + local_294 + local_c0;
          local_bc = local_ac * local_dc + local_b0 * local_ec + local_294 + local_bc;
          local_2ac = local_ac * local_d8 + local_b0 * local_e8 + local_a8 + local_b8;
          local_b8 = local_2ac;
          local_298 = local_ac * local_d8 + local_b0 * local_e8 + local_294 + local_b4;
          local_b4 = local_298;
          local_114 = local_e0 * 0.0 + local_f0 * 0.0 + 0.0 + local_c0;
          local_10c = local_d8 * 0.0 + local_e8 * 0.0 + 0.0 + local_2ac;
          fStack_110 = local_dc * 0.0 + local_ec * 0.0 + 0.0 + local_bc;
          local_c = 1.0 / (local_d8 * 0.0 + local_e8 * 0.0 + 0.0 + local_298);
          fVar20 = local_114 * local_c;
          local_2bc = *(float *)(local_2b8 + 0x84);
          fVar19 = fStack_110 * local_c;
          _local_14 = CONCAT44(fVar19,fVar20);
          local_c = local_10c * local_c;
          local_2a4 = *(float *)(local_2b8 + 0x80);
          local_24c[0xc] = *(float *)(local_2b8 + 0x80) * 0.5;
          local_218 = *(float *)(local_2b8 + 0x84) * 0.5;
          local_2a0 = *(float *)(local_2b8 + 0x88);
          local_214 = *(float *)(local_2b8 + 0x88) * 0.5;
          _local_44 = CONCAT44(fVar19 - local_218,fVar20 - local_24c[0xc]);
          local_3c = local_c - local_214;
          iVar13 = 0;
          do {
            uVar23 = FUN_0068d946();
            local_24c[iVar13 * 2 + 6] = (float)uVar23;
            local_24c[iVar13 * 2 + 7] = (float)((ulonglong)uVar23 >> 0x20);
            iVar13 = iVar13 + 1;
          } while (iVar13 < 3);
          FUN_0042f040(&local_2c,local_24c + 6);
          piVar12 = local_2a8;
          local_50 = (float)_local_14;
          local_210 = local_2a4 * 0.5;
          local_20c = local_2bc * 0.5;
          fStack_4c = (float)((ulonglong)_local_14 >> 0x20);
          local_208 = local_2a0 * 0.5;
          _local_50 = CONCAT44(fStack_4c + local_2bc * 0.5,local_50 + local_2a4 * 0.5);
          local_48 = local_c + local_2a0 * 0.5;
          iVar13 = 0;
          do {
            uVar23 = FUN_0068d946();
            local_24c[iVar13 * 2] = (float)uVar23;
            local_24c[iVar13 * 2 + 1] = (float)((ulonglong)uVar23 >> 0x20);
            iVar13 = iVar13 + 1;
          } while (iVar13 < 3);
          FUN_0042f040(&local_20,local_24c);
          fVar20 = local_2a4;
          piVar2 = local_2a8;
          local_28d = '\0';
          local_2ac = local_2c;
          local_298 = local_2c;
          while (iVar13 = local_2c4, iVar14 = local_2b8, (int)local_298 <= local_20) {
            local_29c = local_28;
            while ((int)local_29c <= local_1c) {
              local_294 = local_24;
              if ((int)local_24 <= local_18) {
                local_2e0 = 0;
                local_2de = 0;
                do {
                  if (((((int)local_298 < 0) || ((int)local_29c < 0)) ||
                      (((int)local_294 < 0 ||
                       (((int)local_2cc <= (int)local_298 || ((int)local_2b0 <= (int)local_29c))))))
                     || ((int)local_2d4 <= (int)local_294)) {
                    puVar16 = &DAT_0076b340;
                  }
                  else {
                    puVar16 = (undefined1 *)
                              (((local_2b0 * (int)local_294 + (int)local_29c) * local_2cc +
                               (int)local_298) * 3 + *(int *)((int)local_2d0 + 0x30));
                  }
                  iVar7 = 0;
                  do {
                    if (((char *)((int)&local_2e0 + iVar7))[(int)puVar16 - (int)&local_2e0] !=
                        *(char *)((int)&local_2e0 + iVar7)) {
                      local_28d = '\x01';
                      break;
                    }
                    iVar7 = iVar7 + 1;
                  } while (iVar7 < 3);
                  local_294 = (float)((int)local_294 + 1);
                } while ((int)local_294 <= local_18);
                piVar12 = local_2a8;
                if (local_28d != '\0') {
                  fVar19 = -1.0;
                  local_298 = (float)((int)local_2c + 1);
                  local_28d = 1;
                  bVar17 = true;
                  if (local_20 + 1 < (int)local_298) goto LAB_0060bc08;
                  local_2e4[0] = '\0';
                  local_2e4[1] = '\0';
                  local_2e4[2] = 0;
                  goto LAB_0060bb20;
                }
              }
              local_29c = (float)((int)local_29c + 1);
            }
            local_298 = (float)((int)local_298 + 1);
          }
        }
      }
      goto LAB_0060baa3;
    }
  }
LAB_0060c4f3:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
LAB_0060bb20:
  do {
    local_29c = local_28;
    do {
      local_294 = local_24;
      do {
        if ((((((int)local_298 < 0) || ((int)local_29c < 0)) || ((int)local_294 < 0)) ||
            (((int)local_2cc <= (int)local_298 || ((int)local_2b0 <= (int)local_29c)))) ||
           ((int)local_2d4 <= (int)local_294)) {
          puVar16 = &DAT_0076b340;
        }
        else {
          puVar16 = (undefined1 *)
                    (((local_2b0 * (int)local_294 + (int)local_29c) * local_2cc + (int)local_298) *
                     3 + *(int *)((int)local_2d0 + 0x30));
        }
        iVar7 = 0;
        do {
          if ((local_2e4 + iVar7)[(int)puVar16 - (int)local_2e4] != local_2e4[iVar7]) {
            local_28d = 0;
            bVar17 = false;
            break;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < 3);
        local_294 = (float)((int)local_294 + 1);
      } while ((int)local_294 <= local_18);
      if (!bVar17) {
        local_298 = local_30;
        goto LAB_0060bcc5;
      }
      local_29c = (float)((int)local_29c + 1);
    } while ((int)local_29c <= local_1c);
    local_298 = (float)((int)local_298 + 1);
  } while ((int)local_298 <= local_20 + 1);
LAB_0060bc08:
  fStack_104 = fStack_10;
  local_100 = local_c;
  local_108 = (float)(int)local_2c + 1.05 + local_2a4 * 0.5;
  local_54 = local_c - local_c;
  local_298 = local_c;
  fVar21 = fStack_10 - fStack_10;
  fVar19 = local_108 - local_14;
  _local_5c = CONCAT44(fVar21,fVar19);
  local_38 = CONCAT44(fStack_10,local_108);
  local_30 = local_c;
  fVar19 = fVar21 * fVar21 + fVar19 * fVar19 + local_54 * local_54;
LAB_0060bcc5:
  local_29c = (float)((int)local_2c - 1);
  local_28d = 1;
  bVar17 = true;
  if ((int)local_29c <= local_20 + -1) {
    local_2e8[0] = '\0';
    local_2e8[1] = '\0';
    local_2e8[2] = 0;
    do {
      local_2a4 = local_28;
      do {
        local_294 = local_24;
        do {
          if ((((int)local_29c < 0) || ((int)local_2a4 < 0)) ||
             (((int)local_294 < 0 ||
              ((((int)local_2cc <= (int)local_29c || ((int)local_2b0 <= (int)local_2a4)) ||
               ((int)local_2d4 <= (int)local_294)))))) {
            puVar16 = &DAT_0076b340;
          }
          else {
            puVar16 = (undefined1 *)
                      (((local_2b0 * (int)local_294 + (int)local_2a4) * local_2cc + (int)local_29c)
                       * 3 + *(int *)((int)local_2d0 + 0x30));
          }
          iVar7 = 0;
          do {
            if ((local_2e8 + iVar7)[(int)puVar16 - (int)local_2e8] != local_2e8[iVar7]) {
              local_28d = 0;
              bVar17 = false;
              break;
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < 3);
          local_294 = (float)((int)local_294 + 1);
        } while ((int)local_294 <= local_18);
        if (!bVar17) goto LAB_0060bec6;
        local_2a4 = (float)((int)local_2a4 + 1);
      } while ((int)local_2a4 <= local_1c);
      local_29c = (float)((int)local_29c + 1);
    } while ((int)local_29c <= local_20 + -1);
  }
  fStack_f8 = fStack_10;
  local_f4 = local_c;
  local_fc = ((float)local_20 - 0.05) - fVar20 * 0.5;
  fStack_64 = fStack_10 - fStack_10;
  local_68 = local_fc - local_14;
  local_60 = local_c - local_c;
  fVar20 = fStack_64 * fStack_64 + local_68 * local_68 + local_60 * local_60;
  if ((fVar19 < 0.0) || (fVar20 < fVar19)) {
    local_38 = CONCAT44(fStack_10,local_fc);
    local_298 = local_c;
    local_30 = local_c;
    fVar19 = fVar20;
  }
LAB_0060bec6:
  bVar17 = true;
  local_28d = 1;
  bVar3 = true;
  local_29c = local_2c;
  local_2a0 = (float)((int)local_28 + 1U);
  local_2a4 = (float)((int)local_28 + 1U);
  do {
    if ((int)local_2a4 <= local_1c + 1) {
      local_2dc = (float)((uint)local_2dc & 0xff000000);
      bVar17 = bVar3;
      do {
        local_294 = local_24;
        do {
          if ((((int)local_29c < 0) || ((int)local_2a4 < 0)) ||
             (((int)local_294 < 0 ||
              ((((int)local_2cc <= (int)local_29c || ((int)local_2b0 <= (int)local_2a4)) ||
               ((int)local_2d4 <= (int)local_294)))))) {
            puVar16 = &DAT_0076b340;
          }
          else {
            puVar16 = (undefined1 *)
                      (((local_2b0 * (int)local_294 + (int)local_2a4) * local_2cc + (int)local_29c)
                       * 3 + *(int *)((int)local_2d0 + 0x30));
          }
          iVar7 = 0;
          do {
            if (((char *)((int)&local_2dc + iVar7))[(int)puVar16 - (int)&local_2dc] !=
                *(char *)((int)&local_2dc + iVar7)) {
              local_28d = 0;
              bVar17 = false;
              break;
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < 3);
          local_294 = (float)((int)local_294 + 1);
        } while ((int)local_294 <= local_18);
        if (!bVar17) goto LAB_0060c0b3;
        local_2a4 = (float)((int)local_2a4 + 1);
        bVar3 = bVar17;
      } while ((int)local_2a4 <= local_1c + 1);
    }
    if (!bVar17) goto LAB_0060c0b3;
    local_29c = (float)((int)local_29c + 1);
    local_2a4 = local_2a0;
  } while ((int)local_29c <= local_20);
  local_138 = local_14;
  local_130 = local_c;
  fStack_134 = (float)(int)local_28 + 1.05 + local_2bc * 0.5;
  local_6c = local_c - local_c;
  fStack_70 = fStack_134 - fStack_10;
  local_74 = local_14 - local_14;
  fVar20 = fStack_70 * fStack_70 + local_74 * local_74 + local_6c * local_6c;
  if ((fVar19 < 0.0) || (fVar20 < fVar19)) {
    local_38 = CONCAT44(fStack_134,local_14);
    local_298 = local_c;
    local_30 = local_c;
    fVar19 = fVar20;
  }
LAB_0060c0b3:
  local_298 = local_30;
  cVar5 = '\x01';
  local_28d = '\x01';
  local_2a0 = (float)((int)local_28 - 1U);
  fVar20 = (float)((int)local_28 - 1U);
  do {
    local_2a4 = fVar20;
    if ((int)fVar20 <= local_1c + -1) {
      local_2b4 = local_2b4 & 0xff000000;
      do {
        local_294 = local_24;
        do {
          if ((((int)local_2ac < 0) || ((int)fVar20 < 0)) ||
             (((int)local_294 < 0 ||
              ((((int)local_2cc <= (int)local_2ac || ((int)local_2b0 <= (int)fVar20)) ||
               ((int)local_2d4 <= (int)local_294)))))) {
            puVar16 = &DAT_0076b340;
          }
          else {
            puVar16 = (undefined1 *)
                      (((local_2b0 * (int)local_294 + (int)fVar20) * local_2cc + (int)local_2ac) * 3
                      + *(int *)((int)local_2d0 + 0x30));
          }
          iVar7 = 0;
          do {
            if (((char *)((int)&local_2b4 + iVar7))[(int)puVar16 - (int)&local_2b4] !=
                *(char *)((int)&local_2b4 + iVar7)) {
              local_28d = '\0';
              break;
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < 3);
          local_294 = (float)((int)local_294 + 1);
        } while ((int)local_294 <= local_18);
        local_2a4 = fVar20;
        if (local_28d == '\0') goto LAB_0060c2a7;
        fVar20 = (float)((int)fVar20 + 1);
        local_2a4 = fVar20;
        cVar5 = local_28d;
      } while ((int)fVar20 <= local_1c + -1);
    }
    if (cVar5 == '\0') goto LAB_0060c2a7;
    local_2ac = (float)((int)local_2ac + 1);
    fVar20 = local_2a0;
  } while ((int)local_2ac <= local_20);
  local_12c = local_14;
  local_124 = local_c;
  fStack_128 = ((float)local_1c - 0.05) - local_2bc * 0.5;
  fStack_88 = fStack_128 - fStack_10;
  local_8c = local_14 - local_14;
  local_84 = local_c - local_c;
  fVar20 = fStack_88 * fStack_88 + local_8c * local_8c + local_84 * local_84;
  if ((fVar19 < 0.0) || (fVar20 < fVar19)) {
    local_38 = CONCAT44(fStack_128,local_14);
    local_30 = local_c;
    fVar19 = fVar20;
  }
LAB_0060c2a7:
  fVar20 = local_30;
  uVar23 = local_38;
  piVar12 = piVar2;
  if (0.0 <= fVar19) {
    local_2c0 = local_2c0 * 0.017453292;
    dVar18 = (double)local_2c0;
    libm_sse2_cos_precise();
    local_2bc = (float)dVar18;
    dVar18 = (double)local_2c0;
    libm_sse2_sin_precise();
    fVar22 = (float)dVar18;
    fVar19 = fVar22 * 0.0;
    iVar13 = 0;
    local_2a0 = fVar19 + local_2bc;
    local_28c = local_2a0;
    fVar21 = local_2bc * 0.0;
    local_2bc = local_2bc - fVar19;
    local_294 = fVar22 + fVar21;
    local_2c0 = fVar21 - fVar19;
    local_80 = (float)uVar23;
    fStack_7c = (float)((ulonglong)uVar23 >> 0x20);
    fStack_7c = fStack_7c - fStack_10;
    local_80 = local_80 - local_14;
    local_278 = local_2bc;
    local_78 = fVar20 - local_c;
    local_274 = local_2c0;
    local_288 = local_294;
    local_27c = fVar21 - fVar22;
    local_284 = fVar21 + fVar19;
    local_1a4[3] = fStack_7c * (fVar21 - fVar22) + local_80 * local_2a0 + local_78 * 0.0;
    local_194 = fStack_7c * local_2bc + local_80 * local_294 + local_78 * 0.0;
    local_190 = fStack_7c * local_2c0 + local_80 * (fVar21 + fVar19) + local_78;
    do {
      uVar23 = FUN_0068d946();
      local_1d4[iVar13 * 2 + 6] = (uint)uVar23;
      local_1d4[iVar13 * 2 + 7] = (uint)((ulonglong)uVar23 >> 0x20);
      iVar13 = iVar13 + 1;
    } while (iVar13 < 3);
    *(uint *)(local_2b8 + 0x10) = local_2d8 + local_1d4[6];
    *(uint *)(local_2b8 + 0x14) = local_2c8 + local_1d4[7] + (uint)CARRY4(local_2d8,local_1d4[6]);
    puVar1 = (uint *)(local_2b8 + 0x18);
    uVar6 = *puVar1;
    *puVar1 = *puVar1 + local_1d4[8];
    *(int *)(local_2b8 + 0x1c) =
         *(int *)(local_2b8 + 0x1c) + local_1d4[9] + (uint)CARRY4(uVar6,local_1d4[8]);
    puVar1 = (uint *)(local_2b8 + 0x20);
    uVar6 = *puVar1;
    *puVar1 = *puVar1 + local_1d4[10];
    *(int *)(local_2b8 + 0x24) =
         *(int *)(local_2b8 + 0x24) + local_1d4[0xb] + (uint)CARRY4(uVar6,local_1d4[10]);
    iVar13 = local_2c4;
    iVar14 = local_2b8;
  }
LAB_0060baa3:
  if (*(char *)((int)piVar12 + 0xd) == '\0') {
    piVar2 = (int *)piVar12[2];
    if (*(char *)((int)piVar2 + 0xd) == '\0') {
      cVar5 = *(char *)(*piVar2 + 0xd);
      piVar12 = piVar2;
      piVar2 = (int *)*piVar2;
      while (local_2a8 = piVar12, cVar5 == '\0') {
        cVar5 = *(char *)(*piVar2 + 0xd);
        piVar12 = piVar2;
        piVar2 = (int *)*piVar2;
      }
    }
    else {
      cVar5 = *(char *)(piVar12[1] + 0xd);
      piVar4 = (int *)piVar12[1];
      piVar2 = piVar12;
      while ((piVar12 = piVar4, local_2a8 = piVar12, cVar5 == '\0' && (piVar2 == (int *)piVar12[2]))
            ) {
        cVar5 = *(char *)(piVar12[1] + 0xd);
        piVar4 = (int *)piVar12[1];
        piVar2 = piVar12;
      }
    }
  }
  if (piVar12 == *(int **)(iVar13 + 0xc)) goto LAB_0060c4f3;
  goto LAB_0060b060;
}


/* FUN_00622d40 @ 00622d40  kind=gamemisc  attributed-by=caller-vote  size=30 */

float10 FUN_00622d40(float param_1)

{
  double dVar1;
  
  dVar1 = (double)param_1;
  libm_sse2_exp_precise();
  return (float10)(float)dVar1;
}


/* FUN_00627c00 @ 00627c00  kind=gamemisc  attributed-by=caller-vote  size=166 */

void FUN_00627c00(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  int in_ECX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *(undefined4 *)(in_ECX + 0x48) = *param_3;
  *(undefined4 *)(in_ECX + 0x4c) = param_3[1];
  *(undefined4 *)(in_ECX + 0x50) = *param_4;
  *(undefined4 *)(in_ECX + 0x54) = param_4[1];
  *(undefined4 *)(in_ECX + 0x58) = *param_1;
  *(undefined4 *)(in_ECX + 0x5c) = param_1[1];
  *(undefined4 *)(in_ECX + 0x60) = *param_2;
  *(undefined4 *)(in_ECX + 100) = param_2[1];
  *(undefined4 *)(in_ECX + 0x68) = *param_1;
  *(undefined4 *)(in_ECX + 0x6c) = param_1[1];
  *(undefined4 *)(in_ECX + 0x70) = *param_2;
  *(undefined4 *)(in_ECX + 0x74) = param_2[1];
  *(float *)(in_ECX + 0x78) = *(float *)(in_ECX + 0x60) - *(float *)(in_ECX + 0x50);
  *(float *)(in_ECX + 0x7c) = *(float *)(in_ECX + 100) - *(float *)(in_ECX + 0x54);
  puVar2 = param_5;
  puVar3 = (undefined4 *)(in_ECX + 0xa8);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(in_ECX + 0xe8);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_5;
    param_5 = param_5 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_0058c440();
  return;
}


/* FUN_0062baf0 @ 0062baf0  kind=gamemisc  attributed-by=caller-vote  size=34 */

void FUN_0062baf0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_006295a0(param_1,0);
  FUN_0062bb90(param_2,param_3);
  return;
}


/* FUN_0062c570 @ 0062c570  kind=gamemisc  attributed-by=caller-vote  size=64 */

void FUN_0062c570(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_10 = param_1;
  local_c = param_2;
  FUN_0062bb90(&local_10,param_3);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0062de20 @ 0062de20  kind=gamemisc  attributed-by=caller-vote  size=23 */

void FUN_0062de20(int param_1)

{
  int in_ECX;
  
  if (param_1 != 0) {
    *(int *)(param_1 + 0x40) = in_ECX;
  }
  *(int *)(in_ECX + 0x148) = param_1;
  return;
}


/* FUN_0062f750 @ 0062f750  kind=gamemisc  attributed-by=caller-vote  size=174 */

int FUN_0062f750(int param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f5769;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_00630a40();
  *(undefined2 *)(iVar1 + 0xc) = 0;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  if ((undefined1 *)(iVar1 + 0x10) != (undefined1 *)0x0) {
    *(undefined4 *)(iVar1 + 0x24) = 0xf;
    *(undefined4 *)(iVar1 + 0x20) = 0;
    *(undefined1 *)(iVar1 + 0x10) = 0;
    FUN_0040c0a0(param_1,0,0xffffffff);
    *(undefined4 *)(iVar1 + 0x3c) = 0xf;
    *(undefined4 *)(iVar1 + 0x38) = 0;
    local_8 = CONCAT31(local_8._1_3_,2);
    *(undefined1 *)(iVar1 + 0x28) = 0;
    FUN_0040c0a0(param_1 + 0x18,0,0xffffffff);
  }
  ExceptionList = local_10;
  return iVar1;
}


/* FUN_0062f820 @ 0062f820  kind=gamemisc  attributed-by=caller-vote  size=134 */

int FUN_0062f820(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f57a1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_00439600(param_1,param_2);
  local_8 = 1;
  if ((undefined1 *)(iVar1 + 8) != (undefined1 *)0x0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0xf;
    *(undefined4 *)(iVar1 + 0x18) = 0;
    *(undefined1 *)(iVar1 + 8) = 0;
    FUN_0040c0a0(param_3,0,0xffffffff);
  }
  ExceptionList = local_10;
  return iVar1;
}


/* FUN_0062f8f0 @ 0062f8f0  kind=gamemisc  attributed-by=caller-vote  size=159 */

undefined4 * FUN_0062f8f0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *in_ECX;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f57c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar3 = (undefined4 *)*in_ECX;
  if (*(char *)((int)param_1 + 0xd) == '\0') {
    puVar1 = (undefined4 *)FUN_0062f750(param_1 + 4);
    puVar1[1] = param_2;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 3);
    if (*(char *)((int)puVar3 + 0xd) != '\0') {
      puVar3 = puVar1;
    }
    local_8 = 0;
    uVar2 = FUN_0062f8f0(*param_1,puVar1,param_3);
    *puVar1 = uVar2;
    uVar2 = FUN_0062f8f0(param_1[2],puVar1,param_3);
    puVar1[2] = uVar2;
  }
  ExceptionList = local_10;
  return puVar3;
}


/* FUN_0062f9b0 @ 0062f9b0  kind=gamemisc  attributed-by=caller-vote  size=515 */

void FUN_0062f9b0(undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 param_4,
                 int *param_5)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *in_ECX;
  int *piVar5;
  int *piVar6;
  
  if (0x3fffffd < (uint)in_ECX[1]) {
    FUN_00630a80(param_5);
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("map/set<T> too long");
  }
  in_ECX[1] = in_ECX[1] + 1;
  param_5[1] = (int)param_3;
  if (param_3 == (undefined4 *)*in_ECX) {
    ((undefined4 *)*in_ECX)[1] = param_5;
    *(int **)*in_ECX = param_5;
    *(int **)(*in_ECX + 8) = param_5;
  }
  else if (param_2 == '\0') {
    param_3[2] = param_5;
    if (param_3 == *(undefined4 **)(*in_ECX + 8)) {
      *(int **)(*in_ECX + 8) = param_5;
    }
  }
  else {
    *param_3 = param_5;
    if (param_3 == *(undefined4 **)*in_ECX) {
      *(int **)*in_ECX = param_5;
    }
  }
  cVar1 = *(char *)(param_5[1] + 0xc);
  piVar4 = param_5;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*in_ECX + 4) + 0xc) = 1;
      *param_1 = param_5;
      return;
    }
    piVar6 = (int *)piVar4[1];
    piVar5 = *(int **)piVar6[1];
    if (piVar6 == piVar5) {
      piVar5 = (int *)((undefined4 *)piVar6[1])[2];
      if ((char)piVar5[3] != '\0') {
        if (piVar4 == (int *)piVar6[2]) {
          piVar4 = (int *)piVar6[2];
          piVar6[2] = *piVar4;
          if (*(char *)(*piVar4 + 0xd) == '\0') {
            *(int **)(*piVar4 + 4) = piVar6;
          }
          piVar4[1] = piVar6[1];
          if (piVar6 == *(int **)(*in_ECX + 4)) {
            *(int **)(*in_ECX + 4) = piVar4;
          }
          else {
            piVar5 = (int *)piVar6[1];
            if (piVar6 == (int *)*piVar5) {
              *piVar5 = (int)piVar4;
            }
            else {
              piVar5[2] = (int)piVar4;
            }
          }
          *piVar4 = (int)piVar6;
          piVar6[1] = (int)piVar4;
          piVar4 = piVar6;
        }
        *(undefined1 *)(piVar4[1] + 0xc) = 1;
        *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
        piVar6 = *(int **)(piVar4[1] + 4);
        piVar5 = (int *)*piVar6;
        *piVar6 = piVar5[2];
        if (*(char *)(piVar5[2] + 0xd) == '\0') {
          *(int **)(piVar5[2] + 4) = piVar6;
        }
        piVar5[1] = piVar6[1];
        if (piVar6 == *(int **)(*in_ECX + 4)) {
          *(int **)(*in_ECX + 4) = piVar5;
          piVar5[2] = (int)piVar6;
        }
        else {
          piVar2 = (int *)piVar6[1];
          if (piVar6 == (int *)piVar2[2]) {
            piVar2[2] = (int)piVar5;
            piVar5[2] = (int)piVar6;
          }
          else {
            *piVar2 = (int)piVar5;
            piVar5[2] = (int)piVar6;
          }
        }
        goto LAB_0062fb8e;
      }
LAB_0062fae5:
      *(undefined1 *)(piVar6 + 3) = 1;
      *(undefined1 *)(piVar5 + 3) = 1;
      *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
      piVar4 = *(int **)(piVar4[1] + 4);
    }
    else {
      if ((char)piVar5[3] == '\0') goto LAB_0062fae5;
      if (piVar4 == (int *)*piVar6) {
        iVar3 = *piVar6;
        *piVar6 = *(int *)(iVar3 + 8);
        if (*(char *)(*(int *)(iVar3 + 8) + 0xd) == '\0') {
          *(int **)(*(int *)(iVar3 + 8) + 4) = piVar6;
        }
        *(int *)(iVar3 + 4) = piVar6[1];
        if (piVar6 == *(int **)(*in_ECX + 4)) {
          *(int *)(*in_ECX + 4) = iVar3;
        }
        else {
          piVar4 = (int *)piVar6[1];
          if (piVar6 == (int *)piVar4[2]) {
            piVar4[2] = iVar3;
          }
          else {
            *piVar4 = iVar3;
          }
        }
        *(int **)(iVar3 + 8) = piVar6;
        piVar6[1] = iVar3;
        piVar4 = piVar6;
      }
      *(undefined1 *)(piVar4[1] + 0xc) = 1;
      *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
      piVar6 = *(int **)(piVar4[1] + 4);
      piVar5 = (int *)piVar6[2];
      piVar6[2] = *piVar5;
      if (*(char *)(*piVar5 + 0xd) == '\0') {
        *(int **)(*piVar5 + 4) = piVar6;
      }
      piVar5[1] = piVar6[1];
      if (piVar6 == *(int **)(*in_ECX + 4)) {
        *(int **)(*in_ECX + 4) = piVar5;
      }
      else {
        piVar2 = (int *)piVar6[1];
        if (piVar6 == (int *)*piVar2) {
          *piVar2 = (int)piVar5;
        }
        else {
          piVar2[2] = (int)piVar5;
        }
      }
      *piVar5 = (int)piVar6;
LAB_0062fb8e:
      piVar6[1] = (int)piVar5;
    }
    cVar1 = *(char *)(piVar4[1] + 0xc);
  } while( true );
}


/* FUN_0062ffb0 @ 0062ffb0  kind=gamemisc  attributed-by=caller-vote  size=599 */

void FUN_0062ffb0(undefined4 *param_1,char param_2,byte *param_3,undefined4 param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *in_ECX;
  int *piVar8;
  byte *pbVar9;
  byte *pbVar10;
  bool bVar11;
  int *local_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f5800;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = (int *)*in_ECX;
  bVar11 = true;
  local_8 = 0;
  piVar8 = (int *)piVar1[1];
  local_24 = piVar1;
  while (*(char *)((int)piVar8 + 0xd) == '\0') {
    pbVar9 = (byte *)(piVar8 + 4);
    if (param_2 == '\0') {
      uVar2 = piVar8[8];
      if (0xf < (uint)piVar8[9]) {
        pbVar9 = *(byte **)pbVar9;
      }
      uVar3 = *(uint *)(param_3 + 0x10);
      pbVar10 = param_3;
      if (0xf < *(uint *)(param_3 + 0x14)) {
        pbVar10 = *(byte **)param_3;
      }
      uVar5 = uVar2;
      if (uVar3 < uVar2) {
        uVar5 = uVar3;
      }
      if (uVar5 == 0) {
LAB_00630130:
        if (uVar3 < uVar2) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = (uint)(uVar3 != uVar2);
        }
      }
      else {
        while (uVar4 = uVar5 - 4, 3 < uVar5) {
          if (*(int *)pbVar10 != *(int *)pbVar9) goto LAB_006300f6;
          pbVar10 = pbVar10 + 4;
          pbVar9 = pbVar9 + 4;
          uVar5 = uVar4;
        }
        if (uVar4 == 0xfffffffc) {
LAB_0063012a:
          uVar5 = 0;
        }
        else {
LAB_006300f6:
          bVar11 = *pbVar10 < *pbVar9;
          if ((*pbVar10 == *pbVar9) &&
             ((uVar4 == 0xfffffffd ||
              ((bVar11 = pbVar10[1] < pbVar9[1], pbVar10[1] == pbVar9[1] &&
               ((uVar4 == 0xfffffffe ||
                ((bVar11 = pbVar10[2] < pbVar9[2], pbVar10[2] == pbVar9[2] &&
                 ((uVar4 == 0xffffffff || (bVar11 = pbVar10[3] < pbVar9[3], pbVar10[3] == pbVar9[3])
                  ))))))))))) goto LAB_0063012a;
          uVar5 = -(uint)bVar11 | 1;
        }
        if (uVar5 == 0) goto LAB_00630130;
      }
      bVar11 = (int)uVar5 < 0;
    }
    else {
      uVar2 = *(uint *)(param_3 + 0x10);
      pbVar10 = param_3;
      if (0xf < *(uint *)(param_3 + 0x14)) {
        pbVar10 = *(byte **)param_3;
      }
      uVar3 = piVar8[8];
      if (0xf < (uint)piVar8[9]) {
        pbVar9 = *(byte **)pbVar9;
      }
      uVar5 = uVar2;
      if (uVar3 < uVar2) {
        uVar5 = uVar3;
      }
      if (uVar5 == 0) {
LAB_00630091:
        if (uVar3 < uVar2) {
          bVar11 = false;
          goto LAB_00630145;
        }
        uVar5 = (uint)(uVar3 != uVar2);
      }
      else {
        while (uVar4 = uVar5 - 4, 3 < uVar5) {
          if (*(int *)pbVar9 != *(int *)pbVar10) goto LAB_00630057;
          pbVar9 = pbVar9 + 4;
          pbVar10 = pbVar10 + 4;
          uVar5 = uVar4;
        }
        if (uVar4 == 0xfffffffc) {
LAB_0063008b:
          uVar5 = 0;
        }
        else {
LAB_00630057:
          bVar11 = *pbVar9 < *pbVar10;
          if ((*pbVar9 == *pbVar10) &&
             ((uVar4 == 0xfffffffd ||
              ((bVar11 = pbVar9[1] < pbVar10[1], pbVar9[1] == pbVar10[1] &&
               ((uVar4 == 0xfffffffe ||
                ((bVar11 = pbVar9[2] < pbVar10[2], pbVar9[2] == pbVar10[2] &&
                 ((uVar4 == 0xffffffff || (bVar11 = pbVar9[3] < pbVar10[3], pbVar9[3] == pbVar10[3])
                  ))))))))))) goto LAB_0063008b;
          uVar5 = -(uint)bVar11 | 1;
        }
        if (uVar5 == 0) goto LAB_00630091;
      }
      bVar11 = -1 < (int)uVar5;
    }
LAB_00630145:
    local_24 = piVar8;
    if (bVar11 == false) {
      piVar8 = (int *)piVar8[2];
    }
    else {
      piVar8 = (int *)*piVar8;
    }
  }
  _param_2 = local_24;
  if (bVar11 != false) {
    if (local_24 == (int *)*piVar1) {
      bVar11 = true;
      puVar6 = (undefined4 *)&param_2;
      pbVar9 = param_3;
      goto LAB_00630181;
    }
    FUN_0042c740();
  }
  pbVar9 = param_3;
  piVar1 = _param_2;
  pbVar10 = param_3;
  if (0xf < *(uint *)(param_3 + 0x14)) {
    pbVar10 = *(byte **)param_3;
  }
  iVar7 = FUN_0040c520(0,_param_2[8],pbVar10,*(int *)(param_3 + 0x10));
  if (-1 < iVar7) {
    FUN_00630a80(param_4);
    *param_1 = piVar1;
    *(undefined1 *)(param_1 + 1) = 0;
    ExceptionList = local_10;
    return;
  }
  puVar6 = &param_3;
LAB_00630181:
  puVar6 = (undefined4 *)FUN_0062f9b0(puVar6,bVar11,local_24,pbVar9,param_4);
  *param_1 = *puVar6;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return;
}


/* FUN_00630220 @ 00630220  kind=gamemisc  attributed-by=caller-vote  size=157 */

void FUN_00630220(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f5820;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  while( true ) {
    if (param_2 == param_3) {
      ExceptionList = local_10;
      return;
    }
    iVar1 = FUN_00583cb0(param_1,*(undefined4 *)(param_1 + 4),param_2 + 2);
    if (*(int *)(in_ECX + 4) == 0x15555554) break;
    *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 1;
    *(int *)(param_1 + 4) = iVar1;
    **(int **)(iVar1 + 4) = iVar1;
    param_2 = (undefined4 *)*param_2;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("list<T> too long");
}


/* FUN_006302f0 @ 006302f0  kind=gamemisc  attributed-by=caller-vote  size=207 */

void FUN_006302f0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  int *piVar3;
  uint uStack_28;
  undefined1 local_18 [4];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f5840;
  local_10 = ExceptionList;
  uStack_28 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_28;
  ExceptionList = &local_10;
  piVar3 = (int *)*in_ECX;
  local_8 = 0;
  for (; piVar3 = (int *)*piVar3, param_1 != param_2; param_1 = (undefined4 *)*param_1) {
    if (piVar3 == (int *)*in_ECX) goto LAB_00630355;
    if (piVar3 + 2 != param_1 + 2) {
      FUN_0040c0a0(param_1 + 2,0,0xffffffff);
    }
  }
LAB_006303ae:
  FUN_00633ce0(local_18,piVar3,*in_ECX);
  ExceptionList = local_10;
  return;
LAB_00630355:
  for (; param_1 != param_2; param_1 = (undefined4 *)*param_1) {
    iVar1 = *in_ECX;
    iVar2 = FUN_0062f820(iVar1,*(undefined4 *)(iVar1 + 4),param_1 + 2);
    if (in_ECX[1] == 0x7fffffe) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("list<T> too long");
    }
    in_ECX[1] = in_ECX[1] + 1;
    *(int *)(iVar1 + 4) = iVar2;
    **(int **)(iVar2 + 4) = iVar2;
  }
  goto LAB_006303ae;
}


/* FUN_006303d0 @ 006303d0  kind=gamemisc  attributed-by=caller-vote  size=127 */

void FUN_006303d0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f5868;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = 0;
  in_ECX[1] = 0;
  puVar1 = (undefined4 *)FUN_0046d550(0,0);
  *in_ECX = puVar1;
  local_8 = 1;
  FUN_00630220(*puVar1,*(undefined4 *)*param_1,(undefined4 *)*param_1,param_1);
  ExceptionList = local_10;
  return;
}


/* FUN_00630850 @ 00630850  kind=gamemisc  attributed-by=caller-vote  size=279 */

void FUN_00630850(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *in_ECX;
  undefined1 local_60 [4];
  void *local_5c;
  undefined4 local_4c;
  uint local_48;
  void *local_44;
  undefined4 local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f5960;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar1 = FUN_00408fc0(param_1);
  if (iVar1 != *in_ECX) {
    piVar2 = (int *)(iVar1 + 0x10);
    if (0xf < *(uint *)(iVar1 + 0x24)) {
      piVar2 = (int *)*piVar2;
    }
    iVar3 = FUN_0040c520(0,*(undefined4 *)(param_1 + 0x10),piVar2,*(undefined4 *)(iVar1 + 0x20));
    if (-1 < iVar3) goto LAB_0063094f;
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  local_8 = 0;
  uVar4 = FUN_0062f690(param_1,local_2c,0);
  local_8 = CONCAT31(local_8._1_3_,1);
  iVar3 = FUN_0062f8c0(uVar4);
  FUN_0062fdc0(local_60,iVar1,iVar3 + 0x10,iVar3);
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_44);
  }
  local_30 = 0xf;
  local_34 = 0;
  local_44 = (void *)((uint)local_44 & 0xffffff00);
  if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_5c);
  }
  local_48 = 0xf;
  local_4c = 0;
  local_5c = (void *)((uint)local_5c & 0xffffff00);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
LAB_0063094f:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00630a40 @ 00630a40  kind=gamemisc  attributed-by=caller-vote  size=55 */

undefined4 * FUN_00630a40(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  puVar1 = operator_new(0x40);
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


/* FUN_00630ae0 @ 00630ae0  kind=gamemisc  attributed-by=caller-vote  size=119 */

void FUN_00630ae0(int *param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *in_ECX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar4 = (undefined4 *)*in_ECX;
  puVar1 = (undefined4 *)puVar4[1];
  puVar5 = puVar4;
  if (*(char *)((int)puVar1 + 0xd) == '\0') {
    puVar2 = puVar1;
    do {
      if ((uint)puVar2[4] < *param_2) {
        puVar3 = (undefined4 *)puVar2[2];
      }
      else {
        if ((*(char *)((int)puVar4 + 0xd) != '\0') && (*param_2 < (uint)puVar2[4])) {
          puVar4 = puVar2;
        }
        puVar3 = (undefined4 *)*puVar2;
        puVar5 = puVar2;
      }
      puVar2 = puVar3;
    } while (*(char *)((int)puVar3 + 0xd) == '\0');
  }
  if (*(char *)((int)puVar4 + 0xd) == '\0') {
    puVar1 = (undefined4 *)*puVar4;
  }
  if (*(char *)((int)puVar1 + 0xd) == '\0') {
    do {
      if (*param_2 < (uint)puVar1[4]) {
        puVar2 = (undefined4 *)*puVar1;
        puVar4 = puVar1;
      }
      else {
        puVar2 = (undefined4 *)puVar1[2];
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0xd) == '\0');
  }
  *param_1 = (int)puVar5;
  param_1[1] = (int)puVar4;
  return;
}


/* FUN_00630be0 @ 00630be0  kind=gamemisc  attributed-by=caller-vote  size=2168 */

void FUN_00630be0(float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  float *pfVar9;
  int in_ECX;
  int iVar10;
  float *pfVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
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
  local_4c = param_1;
  if (*(int *)((int)param_1 + 0x28) != 0) {
    FUN_00636870(param_1);
  }
  iVar10 = *(int *)(in_ECX + 0x2c);
  iVar8 = FUN_00583cb0(iVar10,*(undefined4 *)(iVar10 + 4),&local_4c);
  if (*(int *)(in_ECX + 0x30) == 0x15555554) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  *(int *)(in_ECX + 0x30) = *(int *)(in_ECX + 0x30) + 1;
  *(int *)(iVar10 + 4) = iVar8;
  **(int **)(iVar8 + 4) = iVar8;
  *(int *)((int)param_1 + 0x28) = in_ECX;
  iVar10 = *(int *)((int)param_1 + 0x38);
  pfVar9 = (float *)(iVar10 + 0x1b0);
  pfVar11 = (float *)(in_ECX + 0x48);
  pfVar12 = local_48;
  for (iVar8 = 0x10; fVar6 = local_20, fVar5 = local_24, fVar17 = local_28, fVar4 = local_30,
      fVar3 = local_34, fVar18 = local_38, fVar16 = local_48[2], fVar19 = local_48[1],
      fVar14 = local_48[0], iVar8 != 0; iVar8 = iVar8 + -1) {
    *pfVar12 = *pfVar11;
    pfVar11 = pfVar11 + 1;
    pfVar12 = pfVar12 + 1;
  }
  fVar1 = *(float *)(iVar10 + 0x1e8);
  fVar2 = *(float *)(iVar10 + 0x1ec);
  local_48[0] = local_48[0] * *pfVar9 + local_38 * *(float *)(iVar10 + 0x1b4) +
                local_28 * *(float *)(iVar10 + 0x1b8) + local_18 * *(float *)(iVar10 + 0x1bc);
  fVar13 = *(float *)(iVar10 + 0x1d4) * local_38;
  local_38 = *(float *)(iVar10 + 0x1c0) * fVar14 + local_38 * *(float *)(iVar10 + 0x1c4) +
             local_28 * *(float *)(iVar10 + 0x1c8) + local_18 * *(float *)(iVar10 + 0x1cc);
  local_28 = *(float *)(iVar10 + 0x1d0) * fVar14 + fVar13 + local_28 * *(float *)(iVar10 + 0x1d8) +
             local_18 * *(float *)(iVar10 + 0x1dc);
  local_18 = *(float *)(iVar10 + 0x1e0) * fVar14 + *(float *)(iVar10 + 0x1e4) * fVar18 +
             fVar1 * fVar17 + local_18 * fVar2;
  local_48[1] = local_48[1] * *pfVar9 + local_34 * *(float *)(iVar10 + 0x1b4) +
                local_24 * *(float *)(iVar10 + 0x1b8) + local_14 * *(float *)(iVar10 + 0x1bc);
  fVar14 = *(float *)(iVar10 + 0x1d4) * local_34;
  local_34 = *(float *)(iVar10 + 0x1c0) * fVar19 + local_34 * *(float *)(iVar10 + 0x1c4) +
             local_24 * *(float *)(iVar10 + 0x1c8) + local_14 * *(float *)(iVar10 + 0x1cc);
  local_24 = *(float *)(iVar10 + 0x1d0) * fVar19 + fVar14 + local_24 * *(float *)(iVar10 + 0x1d8) +
             local_14 * *(float *)(iVar10 + 0x1dc);
  local_14 = *(float *)(iVar10 + 0x1e0) * fVar19 + *(float *)(iVar10 + 0x1e4) * fVar3 +
             fVar1 * fVar5 + local_14 * fVar2;
  local_48[2] = local_48[2] * *pfVar9 + local_30 * *(float *)(iVar10 + 0x1b4) +
                local_20 * *(float *)(iVar10 + 0x1b8) + local_10 * *(float *)(iVar10 + 0x1bc);
  fVar14 = *(float *)(iVar10 + 0x1d4) * local_30;
  local_30 = *(float *)(iVar10 + 0x1c0) * fVar16 + local_30 * *(float *)(iVar10 + 0x1c4) +
             local_20 * *(float *)(iVar10 + 0x1c8) + local_10 * *(float *)(iVar10 + 0x1cc);
  local_20 = *(float *)(iVar10 + 0x1d0) * fVar16 + fVar14 + local_20 * *(float *)(iVar10 + 0x1d8) +
             local_10 * *(float *)(iVar10 + 0x1dc);
  local_10 = *(float *)(iVar10 + 0x1e0) * fVar16 + *(float *)(iVar10 + 0x1e4) * fVar4 +
             fVar1 * fVar6 + local_10 * fVar2;
  local_48[3] = local_48[3] * *pfVar9 + local_2c * *(float *)(iVar10 + 0x1b4) +
                local_1c * *(float *)(iVar10 + 0x1b8) + local_c * *(float *)(iVar10 + 0x1bc);
  local_2c = *(float *)(iVar10 + 0x1c0) * local_48[3] + local_2c * *(float *)(iVar10 + 0x1c4) +
             local_1c * *(float *)(iVar10 + 0x1c8) + local_c * *(float *)(iVar10 + 0x1cc);
  local_1c = *(float *)(iVar10 + 0x1d0) * local_48[3] + *(float *)(iVar10 + 0x1d4) * local_2c +
             local_1c * *(float *)(iVar10 + 0x1d8) + local_c * *(float *)(iVar10 + 0x1dc);
  local_c = *(float *)(iVar10 + 0x1e0) * local_48[3] + *(float *)(iVar10 + 0x1e4) * local_2c +
            fVar1 * local_1c + local_c * fVar2;
  pfVar11 = local_48;
  pfVar12 = (float *)((int)param_1 + 0x48);
  for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
    *pfVar12 = *pfVar11;
    pfVar11 = pfVar11 + 1;
    pfVar12 = pfVar12 + 1;
  }
  fVar14 = *(float *)(in_ECX + 0x8c);
  fVar19 = *(float *)(in_ECX + 0x88);
  pfVar11 = (float *)(*(int *)((int)param_1 + 0x38) + 0x1f0);
  pfVar12 = local_48;
  for (iVar10 = 0x10; fVar7 = local_20, fVar13 = local_24, fVar2 = local_28, fVar1 = local_2c,
      fVar6 = local_30, fVar5 = local_34, fVar17 = local_38, fVar4 = local_48[3],
      fVar3 = local_48[2], fVar18 = local_48[1], fVar16 = local_48[0], iVar10 != 0;
      iVar10 = iVar10 + -1) {
    *pfVar12 = *pfVar11;
    pfVar11 = pfVar11 + 1;
    pfVar12 = pfVar12 + 1;
  }
  local_48[0] = fVar19 * local_48[0] + fVar14 * local_38 + *(float *)(in_ECX + 0x90) * local_28 +
                *(float *)(in_ECX + 0x94) * local_18;
  fVar14 = *(float *)(in_ECX + 0xbc);
  fVar19 = *(float *)(in_ECX + 0xc0);
  fVar15 = *(float *)(in_ECX + 0xac) * local_38;
  local_38 = *(float *)(in_ECX + 0x9c) * local_38 + *(float *)(in_ECX + 0x98) * fVar16 +
             *(float *)(in_ECX + 0xa0) * local_28 + *(float *)(in_ECX + 0xa4) * local_18;
  local_28 = *(float *)(in_ECX + 0xa8) * fVar16 + fVar15 + *(float *)(in_ECX + 0xb0) * local_28 +
             *(float *)(in_ECX + 0xb4) * local_18;
  local_18 = *(float *)(in_ECX + 0xb8) * fVar16 + fVar14 * fVar17 + fVar19 * fVar2 +
             *(float *)(in_ECX + 0xc4) * local_18;
  fVar16 = *(float *)(in_ECX + 0x98) * local_48[1];
  local_48[1] = *(float *)(in_ECX + 0x88) * local_48[1] + *(float *)(in_ECX + 0x8c) * local_34 +
                *(float *)(in_ECX + 0x90) * local_24 + *(float *)(in_ECX + 0x94) * local_14;
  fVar17 = *(float *)(in_ECX + 0xac) * local_34;
  local_34 = *(float *)(in_ECX + 0x9c) * local_34 + fVar16 + *(float *)(in_ECX + 0xa0) * local_24 +
             *(float *)(in_ECX + 0xa4) * local_14;
  local_24 = *(float *)(in_ECX + 0xa8) * fVar18 + fVar17 + *(float *)(in_ECX + 0xb0) * local_24 +
             *(float *)(in_ECX + 0xb4) * local_14;
  local_14 = *(float *)(in_ECX + 0xb8) * fVar18 + fVar14 * fVar5 + fVar19 * fVar13 +
             *(float *)(in_ECX + 0xc4) * local_14;
  fVar16 = *(float *)(in_ECX + 0x98) * local_48[2];
  local_48[2] = *(float *)(in_ECX + 0x88) * local_48[2] + *(float *)(in_ECX + 0x8c) * local_30 +
                *(float *)(in_ECX + 0x90) * local_20 + *(float *)(in_ECX + 0x94) * local_10;
  fVar18 = *(float *)(in_ECX + 0xac) * local_30;
  local_30 = *(float *)(in_ECX + 0x9c) * local_30 + fVar16 + *(float *)(in_ECX + 0xa0) * local_20 +
             *(float *)(in_ECX + 0xa4) * local_10;
  local_20 = *(float *)(in_ECX + 0xa8) * fVar3 + fVar18 + *(float *)(in_ECX + 0xb0) * local_20 +
             *(float *)(in_ECX + 0xb4) * local_10;
  local_10 = *(float *)(in_ECX + 0xb8) * fVar3 + fVar14 * fVar6 + fVar19 * fVar7 +
             *(float *)(in_ECX + 0xc4) * local_10;
  local_48[3] = *(float *)(in_ECX + 0x88) * local_48[3] + *(float *)(in_ECX + 0x8c) * local_2c +
                *(float *)(in_ECX + 0x90) * local_1c + *(float *)(in_ECX + 0x94) * local_c;
  fVar19 = fVar19 * local_1c;
  local_4c = *(float *)(in_ECX + 0xa8) * fVar4;
  local_2c = *(float *)(in_ECX + 0x9c) * local_2c + *(float *)(in_ECX + 0x98) * fVar4 +
             *(float *)(in_ECX + 0xa0) * local_1c + *(float *)(in_ECX + 0xa4) * local_c;
  local_1c = local_4c + *(float *)(in_ECX + 0xac) * fVar1 + *(float *)(in_ECX + 0xb0) * local_1c +
             *(float *)(in_ECX + 0xb4) * local_c;
  local_c = *(float *)(in_ECX + 0xb8) * fVar4 + *(float *)(in_ECX + 0xbc) * fVar1 + fVar19 +
            *(float *)(in_ECX + 0xc4) * local_c;
  pfVar11 = local_48;
  pfVar12 = (float *)((int)param_1 + 0x88);
  for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
    *pfVar12 = *pfVar11;
    pfVar11 = pfVar11 + 1;
    pfVar12 = pfVar12 + 1;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00631460 @ 00631460  kind=gamemisc  attributed-by=caller-vote  size=192 */

void FUN_00631460(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  int *piVar4;
  undefined4 uVar5;
  undefined1 local_18 [8];
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  puVar1 = param_1;
  if (7 < (uint)param_1[5]) {
    puVar1 = (undefined4 *)*param_1;
  }
  iVar2 = FUN_00428db0(0,*(undefined4 *)(in_ECX + 0x1c),puVar1,param_1[4]);
  if (((iVar2 == 0) && (FUN_00630be0(*(undefined4 *)(param_2 + 0x148)), (char)param_3 != '\0')) &&
     (*(int *)(in_ECX + 0x40) != 0)) {
    uVar5 = 1;
    local_10 = 0;
    local_c = 0;
    uVar3 = FUN_0062de60(local_18);
    FUN_0062baf0(&local_10,uVar3,uVar5);
  }
  piVar4 = (int *)**(int **)(in_ECX + 0x2c);
  if (piVar4 != *(int **)(in_ECX + 0x2c)) {
    do {
      FUN_00631460(param_1,param_2,param_3);
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)*(int *)(in_ECX + 0x2c));
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00632640 @ 00632640  kind=gamemisc  attributed-by=caller-vote  size=72 */

void FUN_00632640(void)

{
  undefined4 *puVar1;
  void *pvVar2;
  int *in_ECX;
  
  puVar1 = (undefined4 *)*in_ECX;
  pvVar2 = (void *)*puVar1;
  *puVar1 = puVar1;
  *(int *)(*in_ECX + 4) = *in_ECX;
  in_ECX[1] = 0;
  if (pvVar2 == (void *)*in_ECX) {
    return;
  }
  if (0xf < *(uint *)((int)pvVar2 + 0x1c)) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)((int)pvVar2 + 8));
  }
  *(undefined4 *)((int)pvVar2 + 0x1c) = 0xf;
  *(undefined4 *)((int)pvVar2 + 0x18) = 0;
  *(undefined1 *)((int)pvVar2 + 8) = 0;
                    /* WARNING: Subroutine does not return */
  operator_delete(pvVar2);
}


/* FUN_006326d0 @ 006326d0  kind=gamemisc  attributed-by=caller-vote  size=411 */

int FUN_006326d0(uint param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int in_ECX;
  int *piVar11;
  undefined4 local_8;
  
  if (*(int **)(in_ECX + 0x34) == (int *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = (**(code **)(**(int **)(in_ECX + 0x34) + 0x34))();
  }
  if (*(int **)(in_ECX + 0x38) == (int *)0x0) {
    local_8 = 0;
  }
  else {
    local_8 = (**(code **)(**(int **)(in_ECX + 0x38) + 8))();
  }
  if (*(int **)(in_ECX + 0x3c) == (int *)0x0) {
    uVar8 = 0;
  }
  else {
    uVar8 = (**(code **)(**(int **)(in_ECX + 0x3c) + 8))();
  }
  iVar9 = FUN_0064f4e0(local_8,uVar7,uVar8,param_1,in_ECX + 0xc);
  if (*(int **)(in_ECX + 0x40) == (int *)0x0) {
    if ((param_1 == 0) || (iVar10 = *(int *)(param_1 + 0x44), iVar10 == 0)) goto LAB_0063274f;
  }
  else {
    (**(code **)(**(int **)(in_ECX + 0x40) + 0xa0))(iVar9);
    iVar10 = *(int *)(iVar9 + 0x40);
  }
  *(int *)(iVar9 + 0x44) = iVar10;
LAB_0063274f:
  if ((*(int *)(iVar9 + 0x44) != 0) && (*(int **)(iVar9 + 0x34) != (int *)0x0)) {
    (**(code **)(**(int **)(iVar9 + 0x34) + 4))(1);
  }
  piVar11 = (int *)**(int **)(in_ECX + 0x2c);
  if (piVar11 != *(int **)(in_ECX + 0x2c)) {
    do {
      if ((~(byte)(*(uint *)(piVar11[2] + 200) >> 2) & 1) != 0) {
        FUN_006326d0(iVar9);
      }
      piVar11 = (int *)*piVar11;
    } while (piVar11 != (int *)*(int *)(in_ECX + 0x2c));
  }
  *(undefined4 *)(iVar9 + 200) = *(undefined4 *)(in_ECX + 200);
  if ((undefined4 *)(iVar9 + 0xe0) != (undefined4 *)(in_ECX + 0xe0)) {
    puVar2 = *(undefined4 **)(in_ECX + 0xe0);
    FUN_006302f0(*puVar2,puVar2);
  }
  piVar11 = (int *)(iVar9 + 0xe8);
  if (piVar11 != (int *)(in_ECX + 0xe8)) {
    FUN_00630b60(*(undefined4 *)(*piVar11 + 4));
    param_1 = param_1 & 0xffffff00;
    *(int *)(*piVar11 + 4) = *piVar11;
    *(int *)*piVar11 = *piVar11;
    *(int *)(*piVar11 + 8) = *piVar11;
    *(undefined4 *)(iVar9 + 0xec) = 0;
    iVar10 = *piVar11;
    uVar7 = FUN_0062f8f0(*(undefined4 *)(*(int *)(in_ECX + 0xe8) + 4),iVar10,param_1);
    *(undefined4 *)(iVar10 + 4) = uVar7;
    piVar3 = (int *)*piVar11;
    *(undefined4 *)(iVar9 + 0xec) = *(undefined4 *)(in_ECX + 0xec);
    piVar4 = (int *)piVar3[1];
    if (*(char *)((int)piVar4 + 0xd) == '\0') {
      cVar1 = *(char *)(*piVar4 + 0xd);
      piVar6 = (int *)*piVar4;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar6 + 0xd);
        piVar4 = piVar6;
        piVar6 = (int *)*piVar6;
      }
      *piVar3 = (int)piVar4;
      iVar10 = *(int *)(*piVar11 + 4);
      iVar5 = *(int *)(iVar10 + 8);
      cVar1 = *(char *)(iVar5 + 0xd);
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*(int *)(iVar5 + 8) + 0xd);
        iVar10 = iVar5;
        iVar5 = *(int *)(iVar5 + 8);
      }
      *(int *)(*piVar11 + 8) = iVar10;
      return iVar9;
    }
    *piVar3 = (int)piVar3;
    *(int *)(*piVar11 + 8) = *piVar11;
  }
  return iVar9;
}


/* FUN_00632870 @ 00632870  kind=gamemisc  attributed-by=caller-vote  size=127 */

void FUN_00632870(void)

{
  undefined4 *puVar1;
  int in_ECX;
  undefined4 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f5998;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006303d0(in_ECX + 0x2c);
  local_8 = 0;
  for (puVar1 = (undefined4 *)*local_18; puVar1 != local_18; puVar1 = (undefined4 *)*puVar1) {
    FUN_006504e0(puVar1[2]);
  }
  puVar1 = (undefined4 *)*local_18;
  *local_18 = local_18;
  local_18[1] = local_18;
  if (puVar1 == local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_18);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(puVar1);
}


/* FUN_00633c90 @ 00633c90  kind=gamemisc  attributed-by=caller-vote  size=77 */

undefined4 FUN_00633c90(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 local_c [4];
  undefined1 local_8 [4];
  
  puVar3 = (undefined4 *)FUN_00630ae0(local_c,param_1);
  uVar1 = *puVar3;
  uVar2 = puVar3[1];
  param_1 = 0;
  FUN_00608d40(uVar1,uVar2,&param_1,0);
  FUN_0067eb10(local_8,uVar1,uVar2);
  return param_1;
}


/* FUN_00633ce0 @ 00633ce0  kind=gamemisc  attributed-by=caller-vote  size=128 */

undefined4 * FUN_00633ce0(undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  undefined4 *in_ECX;
  
  if ((param_2 == *(int **)*in_ECX) && (param_3 == (int *)*in_ECX)) {
    FUN_00632640();
    *param_1 = *in_ECX;
    return param_1;
  }
  do {
    piVar1 = param_2;
    if (piVar1 == param_3) {
      *param_1 = param_3;
      return param_1;
    }
    param_2 = (int *)*piVar1;
  } while (piVar1 == (int *)*in_ECX);
  *(int **)piVar1[1] = (int *)*piVar1;
  *(int *)(*piVar1 + 4) = piVar1[1];
  if ((uint)piVar1[7] < 0x10) {
    piVar1[7] = 0xf;
    piVar1[6] = 0;
    *(undefined1 *)(piVar1 + 2) = 0;
                    /* WARNING: Subroutine does not return */
    operator_delete(piVar1);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete((void *)piVar1[2]);
}


/* FUN_00633dd0 @ 00633dd0  kind=gamemisc  attributed-by=caller-vote  size=158 */

void FUN_00633dd0(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_ECX;
  int *piVar5;
  
  puVar1 = param_2;
  puVar2 = param_2;
  if (7 < (uint)param_2[5]) {
    puVar2 = (undefined4 *)*param_2;
  }
  iVar3 = FUN_00428db0(0,in_ECX[7],puVar2,param_2[4]);
  if (iVar3 == 0) {
    iVar3 = *param_1;
    param_2 = in_ECX;
    iVar4 = FUN_00583cb0(iVar3,*(undefined4 *)(iVar3 + 4),&param_2);
    if (param_1[1] == 0x15555554) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("list<T> too long");
    }
    param_1[1] = param_1[1] + 1;
    *(int *)(iVar3 + 4) = iVar4;
    **(int **)(iVar4 + 4) = iVar4;
  }
  piVar5 = *(int **)in_ECX[0xb];
  if (piVar5 != (int *)in_ECX[0xb]) {
    do {
      FUN_00633dd0(param_1,puVar1);
      piVar5 = (int *)*piVar5;
    } while (piVar5 != (int *)in_ECX[0xb]);
  }
  return;
}


/* FUN_00634940 @ 00634940  kind=gamemisc  attributed-by=caller-vote  size=290 */

void FUN_00634940(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  undefined4 extraout_EDX;
  int *piVar3;
  undefined4 uVar4;
  void *local_20 [4];
  int local_10;
  uint local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar1 = *(int *)(in_ECX + 0x34);
  uVar4 = 0;
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x48) == 3)) {
    iVar2 = *(int *)(iVar1 + 0x7c);
    iVar1 = *(int *)(iVar1 + 0xa8);
    param_1[5] = 7;
    param_1[4] = 0;
    *(undefined2 *)param_1 = 0;
    FUN_0040f680(iVar1 + iVar2 * 0x18,0,0xffffffff);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX,uVar4);
    return;
  }
  piVar3 = (int *)**(int **)(in_ECX + 0x2c);
  if (piVar3 != *(int **)(in_ECX + 0x2c)) {
    do {
      FUN_00634940(local_20);
      if (local_10 != 0) {
        param_1[5] = 7;
        param_1[4] = 0;
        *(undefined2 *)param_1 = 0;
        if (local_c < 8) {
          if (local_10 + 1 != 0) {
            memmove(param_1,local_20,(local_10 + 1) * 2);
            param_1[4] = local_10;
            param_1[5] = local_c;
            goto LAB_00634a00;
          }
        }
        else {
          *param_1 = local_20[0];
        }
        param_1[4] = local_10;
        param_1[5] = local_c;
        goto LAB_00634a00;
      }
      if (7 < local_c) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_20[0]);
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*(int *)(in_ECX + 0x2c));
  }
  param_1[5] = 7;
  param_1[4] = 0;
  *(undefined2 *)param_1 = 0;
  FUN_0040f7a0(&PTR_006fccac,0);
LAB_00634a00:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00635550 @ 00635550  kind=gamemisc  attributed-by=caller-vote  size=412 */

void FUN_00635550(undefined4 *param_1,undefined4 *param_2,char param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int in_ECX;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  int *piVar4;
  undefined4 uVar5;
  void *local_20 [4];
  int local_10;
  uint local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  uVar5 = 0;
  puVar2 = param_2;
  if (7 < (uint)param_2[5]) {
    puVar2 = (undefined4 *)*param_2;
  }
  iVar3 = FUN_00428db0(0,*(undefined4 *)(in_ECX + 0x1c),puVar2,param_2[4]);
  if (iVar3 == 0) {
    if (param_3 != '\0') {
      FUN_00634940(param_1);
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX,uVar5);
      return;
    }
    iVar3 = *(int *)(in_ECX + 0x34);
    if ((iVar3 != 0) && (*(int *)(iVar3 + 0x48) == 3)) {
      iVar1 = *(int *)(iVar3 + 0x7c);
      iVar3 = *(int *)(iVar3 + 0xa8);
      param_1[5] = 7;
      param_1[4] = 0;
      *(undefined2 *)param_1 = 0;
      FUN_0040f680(iVar3 + iVar1 * 0x18,0,0xffffffff);
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX_00,uVar5);
      return;
    }
    FUN_0040eb60(&PTR_006fccac);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX_01,uVar5);
    return;
  }
  piVar4 = (int *)**(int **)(in_ECX + 0x2c);
  if (piVar4 != *(int **)(in_ECX + 0x2c)) {
    do {
      FUN_00635550(local_20,param_2,param_3);
      if (local_10 != 0) {
        param_1[5] = 7;
        param_1[4] = 0;
        *(undefined2 *)param_1 = 0;
        if (local_c < 8) {
          if (local_10 + 1 != 0) {
            memmove(param_1,local_20,(local_10 + 1) * 2);
            param_1[4] = local_10;
            param_1[5] = local_c;
            goto LAB_00635690;
          }
        }
        else {
          *param_1 = local_20[0];
        }
        param_1[4] = local_10;
        param_1[5] = local_c;
        goto LAB_00635690;
      }
      if (7 < local_c) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_20[0]);
      }
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)*(int *)(in_ECX + 0x2c));
  }
  param_1[5] = 7;
  param_1[4] = 0;
  *(undefined2 *)param_1 = 0;
  FUN_0040f7a0(&PTR_006fccac,0);
LAB_00635690:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00635700 @ 00635700  kind=gamemisc  attributed-by=caller-vote  size=82 */

void FUN_00635700(void)

{
  undefined4 uVar1;
  int in_ECX;
  int *piVar2;
  
  if ((~(byte)(*(uint *)(in_ECX + 200) >> 2) & 1) == 0) {
    return;
  }
  if (*(int **)(in_ECX + 0x40) == (int *)0x0) {
    if (*(int *)(in_ECX + 0x28) == 0) goto LAB_00635730;
    uVar1 = *(undefined4 *)(*(int *)(in_ECX + 0x28) + 0x44);
  }
  else {
    (**(code **)(**(int **)(in_ECX + 0x40) + 0x1c))();
    uVar1 = *(undefined4 *)(in_ECX + 0x40);
  }
  *(undefined4 *)(in_ECX + 0x44) = uVar1;
LAB_00635730:
  piVar2 = (int *)**(int **)(in_ECX + 0x2c);
  if (piVar2 != *(int **)(in_ECX + 0x2c)) {
    do {
      FUN_00635700();
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*(int *)(in_ECX + 0x2c));
  }
  return;
}


/* FUN_006364f0 @ 006364f0  kind=gamemisc  attributed-by=caller-vote  size=102 */

undefined4 FUN_006364f0(void)

{
  char cVar1;
  int in_ECX;
  int *piVar2;
  
  if ((((*(int *)(in_ECX + 0x34) == 0) || (*(char *)(*(int *)(in_ECX + 0x34) + 0x2c) == '\0')) &&
      ((*(int *)(in_ECX + 0x38) == 0 || (*(char *)(*(int *)(in_ECX + 0x38) + 0x2c) == '\0')))) &&
     ((*(int *)(in_ECX + 0x3c) == 0 || (*(char *)(*(int *)(in_ECX + 0x3c) + 0x2c) == '\0')))) {
    piVar2 = (int *)**(int **)(in_ECX + 0x2c);
    if (piVar2 != *(int **)(in_ECX + 0x2c)) {
      do {
        if (((~(byte)(*(uint *)(piVar2[2] + 200) >> 2) & 1) != 0) &&
           (cVar1 = FUN_006364f0(), cVar1 != '\0')) {
          return 1;
        }
        piVar2 = (int *)*piVar2;
      } while (piVar2 != (int *)*(int *)(in_ECX + 0x2c));
    }
    return 0;
  }
  return 1;
}


/* FUN_00636560 @ 00636560  kind=gamemisc  attributed-by=caller-vote  size=678 */

void FUN_00636560(float *param_1,uint param_2)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  char cVar4;
  float *pfVar5;
  int *piVar6;
  int iVar7;
  int in_ECX;
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
  if (((*(int *)(*(int *)(*(int *)(in_ECX + 0x3c) + 0x94) +
                *(int *)(*(int *)(in_ECX + 0x3c) + 0x68) * 4) != 0) &&
      ((~(byte)(*(uint *)(in_ECX + 200) >> 2) & 1) != 0)) &&
     ((*(uint *)(in_ECX + 200) >> 0xc & 1) == 0)) {
    iVar7 = *(int *)(in_ECX + 0x40);
    if (((iVar7 != 0) && (*(int *)(iVar7 + 0x3c) != 0)) &&
       (((*(uint *)(*(int *)(in_ECX + 4) + 0x18c) >> 1 & 1) != 0 &&
        ((*(uint *)(iVar7 + 0x128) >> 8 & 1) == 0)))) {
      FUN_0062dc20(&local_20);
      FUN_0062dcd0(&local_18);
      if (((*param_1 < local_20) || (param_1[1] < local_1c)) ||
         ((local_18 + local_20 < *param_1 || (local_14 + local_1c < param_1[1]))))
      goto LAB_006367f3;
    }
    fVar1 = *param_1;
    fVar2 = param_1[1];
    local_24 = 1.0 / (*(float *)(in_ECX + 0x94) * fVar1 + *(float *)(in_ECX + 0xa4) * fVar2 +
                     *(float *)(in_ECX + 0xc4));
    local_28 = local_24 *
               (*(float *)(in_ECX + 0x98) * fVar2 + fVar1 * *(float *)(in_ECX + 0x88) +
               *(float *)(in_ECX + 0xb8));
    local_24 = local_24 *
               (*(float *)(in_ECX + 0x8c) * fVar1 + *(float *)(in_ECX + 0x9c) * fVar2 +
               *(float *)(in_ECX + 0xbc));
    local_10 = local_28;
    local_c = local_24;
    if (((*(int *)(in_ECX + 0x44) != 0) && (*(int **)(in_ECX + 0x34) != (int *)0x0)) &&
       (cVar4 = (**(code **)(**(int **)(in_ECX + 0x34) + 0x14))(), cVar4 != '\0')) {
      pfVar5 = (float *)(**(code **)(*(int *)(*(int *)(in_ECX + 0x44) + 0x24) + 4))
                                  (&local_18,&local_10);
      local_10 = *pfVar5;
      local_c = pfVar5[1];
    }
    if (((*(int **)(in_ECX + 0x34) == (int *)0x0) ||
        (cVar4 = (**(code **)(**(int **)(in_ECX + 0x34) + 0x10))(&local_10), cVar4 == '\0')) &&
       ((*(int **)(in_ECX + 0x40) == (int *)0x0 ||
        ((cVar4 = (**(code **)(**(int **)(in_ECX + 0x40) + 0x14))(&local_28), cVar4 == '\0' &&
         ((*(uint *)(*(int *)(in_ECX + 0x40) + 0x128) >> 8 & 1) == 0)))))) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((*(int *)(*(int *)(*(int *)(in_ECX + 0x3c) + 0xec) +
                 *(int *)(*(int *)(in_ECX + 0x3c) + 0xc0) * 4) == 0) || (bVar3)) {
      piVar6 = *(int **)(in_ECX + 0x2c);
      if (piVar6 != (int *)*piVar6) {
        do {
          iVar7 = FUN_00636560(param_1,param_2);
          if (iVar7 != 0) goto LAB_006367f3;
          piVar6 = (int *)piVar6[1];
        } while (piVar6 != (int *)**(undefined4 **)(in_ECX + 0x2c));
      }
      if (((((param_2 & 4) == 0) || ((*(uint *)(in_ECX + 200) >> 3 & 1) == 0)) &&
          (((param_2 & 1) == 0 || ((*(byte *)(in_ECX + 200) & 1) == 0)))) &&
         (((param_2 & 2) != 0 || ((~(byte)(*(uint *)(in_ECX + 200) >> 1) & 1) != 0)))) {
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
  }
LAB_006367f3:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_006368e0 @ 006368e0  kind=gamemisc  attributed-by=caller-vote  size=109 */

void FUN_006368e0(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  undefined1 local_c [8];
  
  iVar2 = param_1;
  iVar1 = *(int *)(in_ECX + 0x3c);
  if (iVar1 != param_1) {
    if (iVar1 != 0) {
      if (*(int *)(iVar1 + 0x208) == 1) {
        FUN_00650460(iVar1);
      }
      else {
        FUN_00633c90(&param_1);
      }
    }
    if (iVar2 != 0) {
      FUN_0058e7d0(local_c,0,&param_1,DAT_0076de66);
    }
    *(int *)(in_ECX + 0x3c) = iVar2;
  }
  return;
}


/* FUN_00636950 @ 00636950  kind=gamemisc  attributed-by=caller-vote  size=57 */

void FUN_00636950(int param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x28) != 0) {
    FUN_00636870(in_ECX);
  }
  if (param_1 != 0) {
    FUN_00636870(param_1);
    FUN_00636870(in_ECX);
    FUN_00630be0(in_ECX);
  }
  return;
}


/* FUN_00636990 @ 00636990  kind=gamemisc  attributed-by=caller-vote  size=100 */

void FUN_00636990(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  undefined1 local_c [8];
  
  iVar2 = param_1;
  iVar1 = *(int *)(in_ECX + 0x34);
  if (iVar1 != param_1) {
    if (iVar1 != 0) {
      if (*(int *)(iVar1 + 0x54) == 1) {
        FUN_006507c0(iVar1);
      }
      else {
        FUN_00633c90(&param_1);
      }
    }
    if (iVar2 != 0) {
      FUN_0058e7d0(local_c,0,&param_1,DAT_0076de66);
    }
    *(int *)(in_ECX + 0x34) = iVar2;
  }
  return;
}


/* FUN_00636a00 @ 00636a00  kind=gamemisc  attributed-by=caller-vote  size=193 */

void FUN_00636a00(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int in_ECX;
  int *piVar4;
  
  if ((~(byte)(*(uint *)(in_ECX + 200) >> 2) & 1) != 0) {
    puVar2 = param_1;
    if (7 < (uint)param_1[5]) {
      puVar2 = (undefined4 *)*param_1;
    }
    iVar3 = FUN_00428db0(0,*(undefined4 *)(in_ECX + 0x1c),puVar2,param_1[4]);
    if (iVar3 == 0) {
      if ((char)param_3 != '\0') {
        FUN_00636ad0(param_2);
        return;
      }
      piVar4 = *(int **)(in_ECX + 0x34);
      if (((piVar4 != (int *)0x0) && (piVar4[0x12] == 3)) &&
         (cVar1 = FUN_004514e0(piVar4[0x2a] + piVar4[0x1f] * 0x18,param_2), cVar1 != '\0')) {
        FUN_00467f60(param_2);
        (**(code **)(*piVar4 + 4))(1);
        return;
      }
    }
    else {
      piVar4 = (int *)**(int **)(in_ECX + 0x2c);
      if (piVar4 != *(int **)(in_ECX + 0x2c)) {
        do {
          FUN_00636a00(param_1,param_2,param_3);
          piVar4 = (int *)*piVar4;
        } while (piVar4 != (int *)*(int *)(in_ECX + 0x2c));
      }
    }
  }
  return;
}


/* FUN_00636db0 @ 00636db0  kind=gamemisc  attributed-by=caller-vote  size=317 */

void FUN_00636db0(byte *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int in_ECX;
  byte *pbVar7;
  uint uVar8;
  byte *pbVar9;
  bool bVar10;
  
  piVar1 = *(int **)(in_ECX + 0xe0);
  piVar5 = (int *)*piVar1;
  if (piVar5 != piVar1) {
    uVar2 = *(uint *)(param_1 + 0x10);
    do {
      pbVar7 = (byte *)(piVar5 + 2);
      pbVar9 = param_1;
      if (0xf < *(uint *)(param_1 + 0x14)) {
        pbVar9 = *(byte **)param_1;
      }
      uVar3 = piVar5[6];
      if (0xf < (uint)piVar5[7]) {
        pbVar7 = *(byte **)pbVar7;
      }
      uVar8 = uVar2;
      if (uVar3 < uVar2) {
        uVar8 = uVar3;
      }
      if (uVar8 == 0) {
LAB_00636e63:
        if ((uVar2 <= uVar3) && (uVar3 == uVar2)) goto LAB_00636ec2;
      }
      else {
        while (uVar4 = uVar8 - 4, 3 < uVar8) {
          if (*(int *)pbVar7 != *(int *)pbVar9) goto LAB_00636e26;
          pbVar7 = pbVar7 + 4;
          pbVar9 = pbVar9 + 4;
          uVar8 = uVar4;
        }
        if (uVar4 == 0xfffffffc) {
LAB_00636e5a:
          uVar8 = 0;
        }
        else {
LAB_00636e26:
          bVar10 = *pbVar7 < *pbVar9;
          if ((*pbVar7 == *pbVar9) &&
             ((uVar4 == 0xfffffffd ||
              ((bVar10 = pbVar7[1] < pbVar9[1], pbVar7[1] == pbVar9[1] &&
               ((uVar4 == 0xfffffffe ||
                ((bVar10 = pbVar7[2] < pbVar9[2], pbVar7[2] == pbVar9[2] &&
                 ((uVar4 == 0xffffffff || (bVar10 = pbVar7[3] < pbVar9[3], pbVar7[3] == pbVar9[3])))
                 ))))))))) goto LAB_00636e5a;
          uVar8 = -(uint)bVar10 | 1;
        }
        if (uVar8 == 0) goto LAB_00636e63;
      }
      piVar5 = (int *)*piVar5;
    } while (piVar5 != piVar1);
  }
  iVar6 = FUN_0062f820(piVar1,piVar1[1],param_1);
  if (*(int *)(in_ECX + 0xe4) == 0x7fffffe) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  *(int *)(in_ECX + 0xe4) = *(int *)(in_ECX + 0xe4) + 1;
  piVar1[1] = iVar6;
  **(int **)(iVar6 + 4) = iVar6;
LAB_00636ec2:
  iVar6 = FUN_00630850(param_1);
  if (iVar6 != param_2) {
    FUN_0040c0a0(param_2,0,0xffffffff);
  }
  return;
}


/* FUN_00636ef0 @ 00636ef0  kind=gamemisc  attributed-by=caller-vote  size=32 */

void FUN_00636ef0(int param_1)

{
  int in_ECX;
  
  if (param_1 != 0) {
    FUN_0062de20();
    return;
  }
  *(undefined4 *)(in_ECX + 0x40) = 0;
  return;
}


/* FUN_00637120 @ 00637120  kind=gamemisc  attributed-by=caller-vote  size=140 */

void FUN_00637120(void)

{
  undefined4 uVar1;
  int in_ECX;
  int *piVar2;
  
  piVar2 = *(int **)(in_ECX + 0x34);
  if ((piVar2 != (int *)0x0) && (1 < piVar2[0x15])) {
    uVar1 = (**(code **)(*piVar2 + 0x34))();
    FUN_00636990(uVar1);
  }
  piVar2 = *(int **)(in_ECX + 0x38);
  if ((piVar2 != (int *)0x0) && (1 < piVar2[0x6b])) {
    uVar1 = (**(code **)(*piVar2 + 8))();
    FUN_00636b70(uVar1);
  }
  piVar2 = *(int **)(in_ECX + 0x3c);
  if ((piVar2 != (int *)0x0) && (1 < piVar2[0x82])) {
    uVar1 = (**(code **)(*piVar2 + 8))();
    FUN_006368e0(uVar1);
  }
  piVar2 = (int *)**(int **)(in_ECX + 0x2c);
  if (piVar2 != *(int **)(in_ECX + 0x2c)) {
    do {
      if (((~(byte)(*(uint *)(piVar2[2] + 200) >> 2) & 1) != 0) &&
         ((*(uint *)(piVar2[2] + 200) >> 3 & 1) == 0)) {
        FUN_00637120();
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*(int *)(in_ECX + 0x2c));
  }
  return;
}


/* FUN_00638db0 @ 00638db0  kind=gamemisc  attributed-by=caller-vote  size=468 */

undefined4 * FUN_00638db0(undefined4 *param_1,int *param_2,undefined4 *param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *in_ECX;
  undefined4 uVar5;
  uint uStack_2c;
  undefined1 local_1c [4];
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f5a70;
  local_10 = ExceptionList;
  uStack_2c = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_2c;
  ExceptionList = &local_10;
  local_8 = 0;
  if (in_ECX[1] == 0) {
    param_2 = (int *)*in_ECX;
    local_14 = (undefined1 *)&uStack_2c;
  }
  else {
    piVar3 = (int *)*in_ECX;
    if (param_2 != (int *)*piVar3) {
      if (param_2 == piVar3) {
        puVar4 = param_3;
        if (7 < (uint)param_3[5]) {
          puVar4 = (undefined4 *)*param_3;
        }
        local_14 = (undefined1 *)&uStack_2c;
        iVar2 = FUN_00428db0(0,*(undefined4 *)(piVar3[2] + 0x20),puVar4,param_3[4]);
        if (-1 < iVar2) goto LAB_00638f51;
        param_2 = *(int **)(*in_ECX + 8);
        uVar5 = 0;
        goto LAB_00638df9;
      }
      piVar3 = param_2 + 4;
      if (7 < (uint)param_2[9]) {
        piVar3 = (int *)*piVar3;
      }
      local_18 = in_ECX;
      iVar2 = FUN_00428db0(0,param_3[4],piVar3,param_2[8]);
      if (iVar2 < 0) {
        FUN_0042c740();
        cVar1 = FUN_0046d1f0(param_2 + 4,param_3);
        if (cVar1 == '\0') goto LAB_00638ef6;
        if (*(char *)(param_2[2] + 0xd) == '\0') {
          uVar5 = 1;
          goto LAB_00638df9;
        }
      }
      else {
LAB_00638ef6:
        cVar1 = FUN_0046d1f0(param_2 + 4,param_3);
        if ((cVar1 == '\0') ||
           ((FUN_005c3ea0(), param_2 != (int *)*local_18 &&
            (cVar1 = FUN_0046d1f0(param_3,param_2 + 4), cVar1 == '\0')))) {
LAB_00638f51:
          local_8 = 0xffffffff;
          puVar4 = (undefined4 *)FUN_006612f0(local_1c,0,param_3,param_4);
          *param_1 = *puVar4;
          ExceptionList = local_10;
          return param_1;
        }
        if (*(char *)(param_2[2] + 0xd) == '\0') {
          uVar5 = 1;
          goto LAB_00638df9;
        }
      }
      uVar5 = 0;
      goto LAB_00638df9;
    }
    piVar3 = param_2 + 4;
    if (7 < (uint)param_2[9]) {
      piVar3 = (int *)*piVar3;
    }
    local_14 = (undefined1 *)&uStack_2c;
    iVar2 = FUN_00428db0(0,param_3[4],piVar3,param_2[8]);
    if (-1 < iVar2) goto LAB_00638f51;
  }
  uVar5 = 1;
LAB_00638df9:
  FUN_0058dc20(param_1,uVar5,param_2,param_3,param_4);
  ExceptionList = local_10;
  return param_1;
}


/* FUN_00639210 @ 00639210  kind=gamemisc  attributed-by=caller-vote  size=227 */

void FUN_00639210(int *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int *in_ECX;
  undefined4 *puVar6;
  undefined4 *local_c;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)*in_ECX;
  cVar1 = *(char *)((int)local_8[1] + 0xd);
  puVar2 = local_8;
  local_c = (undefined4 *)local_8[1];
  while (cVar1 == '\0') {
    piVar5 = local_c + 4;
    puVar3 = param_2;
    if (7 < (uint)param_2[5]) {
      puVar3 = (undefined4 *)*param_2;
    }
    iVar4 = FUN_00428db0(0,local_c[8],puVar3,param_2[4]);
    if (iVar4 < 0) {
      puVar3 = (undefined4 *)local_c[2];
      local_c = puVar2;
    }
    else {
      if (*(char *)((int)local_8 + 0xd) != '\0') {
        if (7 < (uint)local_c[9]) {
          piVar5 = (int *)*piVar5;
        }
        iVar4 = FUN_00428db0(0,param_2[4],piVar5,local_c[8]);
        if (iVar4 < 0) {
          local_8 = local_c;
        }
      }
      puVar3 = (undefined4 *)*local_c;
    }
    puVar2 = local_c;
    local_c = puVar3;
    cVar1 = *(char *)((int)puVar3 + 0xd);
  }
  if (*(char *)((int)local_8 + 0xd) == '\0') {
    puVar3 = (undefined4 *)*local_8;
  }
  else {
    puVar3 = *(undefined4 **)(*in_ECX + 4);
  }
  cVar1 = *(char *)((int)puVar3 + 0xd);
  while (cVar1 == '\0') {
    piVar5 = puVar3 + 4;
    if (7 < (uint)puVar3[9]) {
      piVar5 = (int *)*piVar5;
    }
    iVar4 = FUN_00428db0(0,param_2[4],piVar5,puVar3[8]);
    if (iVar4 < 0) {
      puVar6 = (undefined4 *)*puVar3;
      local_8 = puVar3;
    }
    else {
      puVar6 = (undefined4 *)puVar3[2];
    }
    puVar3 = puVar6;
    cVar1 = *(char *)((int)puVar6 + 0xd);
  }
  param_1[1] = (int)local_8;
  *param_1 = (int)puVar2;
  return;
}


/* FUN_006393e0 @ 006393e0  kind=gamemisc  attributed-by=caller-vote  size=119 */

void FUN_006393e0(void)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int in_ECX;
  int *piVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x24));
  piVar4 = (int *)**(int **)(in_ECX + 0x10);
  if (piVar4 != *(int **)(in_ECX + 0x10)) {
    do {
      if (piVar4[10] != 0) {
        FUN_0065b2a0();
      }
      if (*(char *)((int)piVar4 + 0xd) == '\0') {
        piVar2 = (int *)piVar4[2];
        if (*(char *)((int)piVar2 + 0xd) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0xd);
          piVar4 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0xd);
            piVar4 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar4[1] + 0xd);
          piVar3 = (int *)piVar4[1];
          piVar2 = piVar4;
          while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar4[2]))) {
            cVar1 = *(char *)(piVar4[1] + 0xd);
            piVar3 = (int *)piVar4[1];
            piVar2 = piVar4;
          }
        }
      }
    } while (piVar4 != *(int **)(in_ECX + 0x10));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x24));
  return;
}


/* FUN_00639a70 @ 00639a70  kind=gamemisc  attributed-by=caller-vote  size=188 */

uint FUN_00639a70(ushort *param_1,uint param_2,uint param_3)

{
  ushort uVar1;
  ushort *puVar2;
  undefined4 *puVar3;
  ushort *puVar4;
  undefined4 *in_ECX;
  uint uVar5;
  ushort *puVar6;
  
  if (param_3 == 0) {
    uVar5 = in_ECX[4];
    if (param_2 < (uint)in_ECX[4]) {
      uVar5 = param_2;
    }
    return uVar5;
  }
  if ((uint)in_ECX[4] < param_3) {
    return 0xffffffff;
  }
  uVar5 = in_ECX[4] - param_3;
  if (param_2 < uVar5) {
    uVar5 = param_2;
  }
  puVar3 = in_ECX;
  if (7 < (uint)in_ECX[5]) {
    puVar3 = (undefined4 *)*in_ECX;
  }
  puVar6 = (ushort *)((int)puVar3 + uVar5 * 2);
  uVar1 = *param_1;
  do {
    puVar4 = puVar6;
    uVar5 = param_3;
    puVar2 = param_1;
    if (*puVar6 == uVar1) {
      while( true ) {
        if (uVar5 == 0) goto LAB_00639ae2;
        if (*puVar4 != *puVar2) break;
        puVar4 = puVar4 + 1;
        uVar5 = uVar5 - 1;
        puVar2 = puVar2 + 1;
      }
      if ((-(uint)(*puVar4 < *puVar2) & 0xfffffffe) == 0xffffffff) {
LAB_00639ae2:
        if (7 < (uint)in_ECX[5]) {
          in_ECX = (undefined4 *)*in_ECX;
        }
        return (int)puVar6 - (int)in_ECX >> 1;
      }
    }
    puVar4 = (ushort *)FUN_0040f490();
    if (puVar6 == puVar4) {
      return 0xffffffff;
    }
    puVar6 = puVar6 + -1;
  } while( true );
}


/* FUN_00639be0 @ 00639be0  kind=gamemisc  attributed-by=caller-vote  size=52 */

int FUN_00639be0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_006819e0();
  *(undefined2 *)(iVar1 + 0xc) = 0;
  if ((undefined4 *)(iVar1 + 0x10) != (undefined4 *)0x0) {
    *(undefined4 *)(iVar1 + 0x10) = *param_1;
    *(undefined4 *)(iVar1 + 0x14) = param_1[1];
    *(undefined4 *)(iVar1 + 0x18) = param_1[2];
  }
  return iVar1;
}


/* FUN_00639c50 @ 00639c50  kind=gamemisc  attributed-by=caller-vote  size=47 */

void FUN_00639c50(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    puVar2 = param_1;
    do {
      *puVar1 = *puVar2;
      puVar1[1] = *(undefined4 *)((int)param_1 + (4 - (int)param_3) + (int)puVar1);
      puVar2 = puVar2 + 2;
      puVar1 = puVar1 + 2;
    } while (puVar2 != param_2);
  }
  return;
}


/* FUN_00639d30 @ 00639d30  kind=gamemisc  attributed-by=caller-vote  size=504 */

void FUN_00639d30(undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 param_4,
                 int *param_5)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *in_ECX;
  int *piVar5;
  int *piVar6;
  
  if (0x9249247 < (uint)in_ECX[1]) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_5);
  }
  in_ECX[1] = in_ECX[1] + 1;
  param_5[1] = (int)param_3;
  if (param_3 == (undefined4 *)*in_ECX) {
    ((undefined4 *)*in_ECX)[1] = param_5;
    *(int **)*in_ECX = param_5;
    *(int **)(*in_ECX + 8) = param_5;
  }
  else if (param_2 == '\0') {
    param_3[2] = param_5;
    if (param_3 == *(undefined4 **)(*in_ECX + 8)) {
      *(int **)(*in_ECX + 8) = param_5;
    }
  }
  else {
    *param_3 = param_5;
    if (param_3 == *(undefined4 **)*in_ECX) {
      *(int **)*in_ECX = param_5;
    }
  }
  cVar1 = *(char *)(param_5[1] + 0xc);
  piVar4 = param_5;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*in_ECX + 4) + 0xc) = 1;
      *param_1 = param_5;
      return;
    }
    piVar6 = (int *)piVar4[1];
    piVar5 = *(int **)piVar6[1];
    if (piVar6 == piVar5) {
      piVar5 = (int *)((undefined4 *)piVar6[1])[2];
      if ((char)piVar5[3] != '\0') {
        if (piVar4 == (int *)piVar6[2]) {
          piVar4 = (int *)piVar6[2];
          piVar6[2] = *piVar4;
          if (*(char *)(*piVar4 + 0xd) == '\0') {
            *(int **)(*piVar4 + 4) = piVar6;
          }
          piVar4[1] = piVar6[1];
          if (piVar6 == *(int **)(*in_ECX + 4)) {
            *(int **)(*in_ECX + 4) = piVar4;
          }
          else {
            piVar5 = (int *)piVar6[1];
            if (piVar6 == (int *)*piVar5) {
              *piVar5 = (int)piVar4;
            }
            else {
              piVar5[2] = (int)piVar4;
            }
          }
          *piVar4 = (int)piVar6;
          piVar6[1] = (int)piVar4;
          piVar4 = piVar6;
        }
        *(undefined1 *)(piVar4[1] + 0xc) = 1;
        *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
        piVar6 = *(int **)(piVar4[1] + 4);
        piVar5 = (int *)*piVar6;
        *piVar6 = piVar5[2];
        if (*(char *)(piVar5[2] + 0xd) == '\0') {
          *(int **)(piVar5[2] + 4) = piVar6;
        }
        piVar5[1] = piVar6[1];
        if (piVar6 == *(int **)(*in_ECX + 4)) {
          *(int **)(*in_ECX + 4) = piVar5;
          piVar5[2] = (int)piVar6;
        }
        else {
          piVar2 = (int *)piVar6[1];
          if (piVar6 == (int *)piVar2[2]) {
            piVar2[2] = (int)piVar5;
            piVar5[2] = (int)piVar6;
          }
          else {
            *piVar2 = (int)piVar5;
            piVar5[2] = (int)piVar6;
          }
        }
        goto LAB_00639f11;
      }
LAB_00639e68:
      *(undefined1 *)(piVar6 + 3) = 1;
      *(undefined1 *)(piVar5 + 3) = 1;
      *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
      piVar4 = *(int **)(piVar4[1] + 4);
    }
    else {
      if ((char)piVar5[3] == '\0') goto LAB_00639e68;
      if (piVar4 == (int *)*piVar6) {
        iVar3 = *piVar6;
        *piVar6 = *(int *)(iVar3 + 8);
        if (*(char *)(*(int *)(iVar3 + 8) + 0xd) == '\0') {
          *(int **)(*(int *)(iVar3 + 8) + 4) = piVar6;
        }
        *(int *)(iVar3 + 4) = piVar6[1];
        if (piVar6 == *(int **)(*in_ECX + 4)) {
          *(int *)(*in_ECX + 4) = iVar3;
        }
        else {
          piVar4 = (int *)piVar6[1];
          if (piVar6 == (int *)piVar4[2]) {
            piVar4[2] = iVar3;
          }
          else {
            *piVar4 = iVar3;
          }
        }
        *(int **)(iVar3 + 8) = piVar6;
        piVar6[1] = iVar3;
        piVar4 = piVar6;
      }
      *(undefined1 *)(piVar4[1] + 0xc) = 1;
      *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
      piVar6 = *(int **)(piVar4[1] + 4);
      piVar5 = (int *)piVar6[2];
      piVar6[2] = *piVar5;
      if (*(char *)(*piVar5 + 0xd) == '\0') {
        *(int **)(*piVar5 + 4) = piVar6;
      }
      piVar5[1] = piVar6[1];
      if (piVar6 == *(int **)(*in_ECX + 4)) {
        *(int **)(*in_ECX + 4) = piVar5;
      }
      else {
        piVar2 = (int *)piVar6[1];
        if (piVar6 == (int *)*piVar2) {
          *piVar2 = (int)piVar5;
        }
        else {
          piVar2[2] = (int)piVar5;
        }
      }
      *piVar5 = (int)piVar6;
LAB_00639f11:
      piVar6[1] = (int)piVar5;
    }
    cVar1 = *(char *)(piVar4[1] + 0xc);
  } while( true );
}


/* FUN_0063a190 @ 0063a190  kind=gamemisc  attributed-by=caller-vote  size=475 */

undefined4 * FUN_0063a190(undefined4 *param_1,int *param_2,uint *param_3,undefined4 param_4)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 *in_ECX;
  bool bVar4;
  uint uStack_30;
  undefined1 local_20 [12];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f5b80;
  local_10 = ExceptionList;
  uStack_30 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  if (in_ECX[1] == 0) {
    local_14 = (undefined1 *)&uStack_30;
    FUN_00452a10(param_1,1,*in_ECX,param_3,param_4);
    ExceptionList = local_10;
    return param_1;
  }
  piVar1 = (int *)*in_ECX;
  if (param_2 == (int *)*piVar1) {
    local_14 = (undefined1 *)&uStack_30;
    puVar2 = &uStack_30;
    if (*param_3 < (uint)param_2[4]) {
LAB_0063a20f:
      local_14 = (undefined1 *)puVar2;
      FUN_00452a10(param_1,1,param_2,param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    local_14 = (undefined1 *)&uStack_30;
    if (*(uint *)(piVar1[2] + 0x10) < *param_3) {
      local_14 = (undefined1 *)&uStack_30;
      FUN_00452a10(param_1,0,piVar1[2],param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else {
    bVar4 = (uint)param_2[4] < *param_3;
    puVar2 = &uStack_30;
    if (*param_3 < (uint)param_2[4]) {
      FUN_0042c740();
      if ((uint)param_2[4] < *param_3) {
        puVar2 = (uint *)local_14;
        if (*(char *)(param_2[2] + 0xd) != '\0') {
          FUN_00452a10(param_1,0,param_2,param_3,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        goto LAB_0063a20f;
      }
      bVar4 = (uint)param_2[4] < *param_3;
      puVar2 = (uint *)local_14;
    }
    local_14 = (undefined1 *)puVar2;
    if ((bVar4) && ((FUN_005c3ea0(), param_2 == piVar1 || (*param_3 < (uint)param_2[4])))) {
      if (*(char *)(param_2[2] + 0xd) == '\0') {
        FUN_00452a10(param_1,1,param_2,param_3,param_4);
        ExceptionList = local_10;
        return param_1;
      }
      FUN_00452a10(param_1,0,param_2,param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  local_8 = 0xffffffff;
  puVar3 = (undefined4 *)FUN_0063a4e0(local_20,0,param_3,param_4);
  *param_1 = *puVar3;
  ExceptionList = local_10;
  return param_1;
}


/* FUN_0063a4e0 @ 0063a4e0  kind=gamemisc  attributed-by=caller-vote  size=223 */

void FUN_0063a4e0(undefined4 *param_1,char param_2,uint *param_3,void *param_4)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *in_ECX;
  bool bVar5;
  int *piVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar2 = param_3;
  puStack_c = &LAB_006f5bc0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = (int *)*in_ECX;
  bVar5 = true;
  local_8 = 0;
  piVar6 = piVar1;
  if (*(char *)(piVar1[1] + 0xd) == '\0') {
    piVar3 = (int *)piVar1[1];
    do {
      piVar6 = piVar3;
      if (param_2 == '\0') {
        bVar5 = *param_3 < (uint)piVar6[4];
      }
      else {
        bVar5 = *param_3 <= (uint)piVar6[4];
      }
      if (bVar5 == false) {
        piVar3 = (int *)piVar6[2];
      }
      else {
        piVar3 = (int *)*piVar6;
      }
    } while (*(char *)((int)piVar3 + 0xd) == '\0');
  }
  _param_2 = piVar6;
  if (bVar5 != false) {
    if (piVar6 == (int *)*piVar1) {
      bVar5 = true;
      goto LAB_0063a573;
    }
    FUN_0042c740();
  }
  if (*puVar2 <= (uint)_param_2[4]) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_4);
  }
LAB_0063a573:
  puVar4 = (undefined4 *)FUN_00452a10(&param_2,bVar5,piVar6,puVar2,param_4);
  *param_1 = *puVar4;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return;
}


/* FUN_0063d730 @ 0063d730  kind=gamemisc  attributed-by=caller-vote  size=130 */

uint * FUN_0063d730(uint *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int *in_ECX;
  undefined4 *puVar5;
  uint local_c [2];
  
  puVar1 = (undefined4 *)*in_ECX;
  puVar5 = puVar1;
  if (*(char *)((int)puVar1[1] + 0xd) == '\0') {
    puVar2 = (undefined4 *)puVar1[1];
    do {
      if ((uint)puVar2[4] < *param_1) {
        puVar3 = (undefined4 *)puVar2[2];
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
        puVar5 = puVar2;
      }
      puVar2 = puVar3;
    } while (*(char *)((int)puVar3 + 0xd) == '\0');
  }
  if ((puVar5 != puVar1) && ((uint)puVar5[4] <= *param_1)) {
    return puVar5 + 5;
  }
  local_c[0] = *param_1;
  local_c[1] = 0;
  iVar4 = FUN_00608a60(local_c);
  FUN_0063a190(&param_1,puVar5,iVar4 + 0x10,iVar4);
  return param_1 + 5;
}


/* FUN_00642610 @ 00642610  kind=gamemisc  attributed-by=caller-vote  size=181 */

void FUN_00642610(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e6bb2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = in_ECX[1];
  if ((param_1 < uVar1) && (uVar2 = *in_ECX, uVar2 <= param_1)) {
    if (uVar1 == in_ECX[2]) {
      FUN_0063ddc0(1);
    }
    param_1 = *in_ECX + ((int)(param_1 - uVar2) / 0xc) * 0xc;
    uVar1 = in_ECX[1];
    local_8 = 0;
  }
  else {
    if (uVar1 == in_ECX[2]) {
      FUN_0063ddc0(1);
    }
    uVar1 = in_ECX[1];
    local_8 = 1;
  }
  if (uVar1 != 0) {
    FUN_005a7990(param_1);
  }
  in_ECX[1] = in_ECX[1] + 0xc;
  ExceptionList = local_10;
  return;
}


/* FUN_00642a20 @ 00642a20  kind=gamemisc  attributed-by=caller-vote  size=41 */

void FUN_00642a20(undefined4 param_1,char param_2)

{
  int *in_ECX;
  
  FUN_0066b200(param_1);
  if (param_2 != '\0') {
    FUN_0063fec0();
    (**(code **)(*in_ECX + 4))(1);
  }
  return;
}


/* FUN_00642a50 @ 00642a50  kind=gamemisc  attributed-by=caller-vote  size=63 */

void FUN_00642a50(int param_1,char param_2)

{
  int *in_ECX;
  
  if (param_1 < 0) {
    param_1 = 0;
  }
  if (6 < param_1) {
    param_1 = 6;
  }
  in_ECX[0x2c9] = param_1;
  if (param_2 != '\0') {
    FUN_0063fec0();
    (**(code **)(*in_ECX + 4))(1);
  }
  return;
}


/* FUN_0064ac00 @ 0064ac00  kind=gamemisc  attributed-by=caller-vote  size=691 */

void FUN_0064ac00(void)

{
  undefined4 uVar1;
  int in_ECX;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  float fVar5;
  
  if ((*(int *)(in_ECX + 0x888) == 0) ||
     (*(int *)(*(int *)(in_ECX + 0x888) + 0x4c) !=
      *(int *)(*(int *)(in_ECX + 0x7f8) + *(int *)(in_ECX + 0x7cc) * 4))) {
    uVar1 = FUN_00659ef0(*(undefined4 *)(*(int *)(in_ECX + 0x7f8) + *(int *)(in_ECX + 0x7cc) * 4));
    *(undefined4 *)(in_ECX + 0x888) = uVar1;
  }
  if ((*(int *)(in_ECX + 0x88c) == 0) ||
     (*(int *)(*(int *)(in_ECX + 0x88c) + 0x4c) !=
      *(int *)(*(int *)(in_ECX + 0x850) + *(int *)(in_ECX + 0x824) * 4))) {
    uVar1 = FUN_00659ef0(*(undefined4 *)(*(int *)(in_ECX + 0x850) + *(int *)(in_ECX + 0x824) * 4));
    *(undefined4 *)(in_ECX + 0x88c) = uVar1;
  }
  if (*(int *)(in_ECX + 0xc10) != 0) {
    *(undefined4 *)(*(int *)(in_ECX + 0xc10) + 0x68) = *(undefined4 *)(in_ECX + 0x888);
    *(undefined4 *)(*(int *)(in_ECX + 0xc10) + 0xac) =
         *(undefined4 *)(*(int *)(in_ECX + 0x488) + *(int *)(in_ECX + 0x45c) * 4);
    *(undefined4 *)(*(int *)(in_ECX + 0xc10) + 0xb0) =
         *(undefined4 *)(*(int *)(in_ECX + 0x4e0) + *(int *)(in_ECX + 0x4b4) * 4);
    *(undefined4 *)(*(int *)(in_ECX + 0xc10) + 0xb4) =
         *(undefined4 *)(*(int *)(in_ECX + 0x538) + *(int *)(in_ECX + 0x50c) * 4);
    *(undefined4 *)(*(int *)(in_ECX + 0xc10) + 0xb8) =
         *(undefined4 *)(*(int *)(in_ECX + 0x590) + *(int *)(in_ECX + 0x564) * 4);
    puVar3 = (undefined4 *)(in_ECX + 0x890);
    puVar4 = (undefined4 *)(*(int *)(in_ECX + 0xc10) + 0x6c);
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  if (*(int *)(in_ECX + 0xc14) != 0) {
    *(undefined4 *)(*(int *)(in_ECX + 0xc14) + 0x68) = *(undefined4 *)(in_ECX + 0x88c);
    *(undefined4 *)(*(int *)(in_ECX + 0xc14) + 0xac) =
         *(undefined4 *)(*(int *)(in_ECX + 0x5e8) + *(int *)(in_ECX + 0x5bc) * 4);
    *(undefined4 *)(*(int *)(in_ECX + 0xc14) + 0xb0) =
         *(undefined4 *)(*(int *)(in_ECX + 0x640) + *(int *)(in_ECX + 0x614) * 4);
    *(undefined4 *)(*(int *)(in_ECX + 0xc14) + 0xb4) =
         *(undefined4 *)(*(int *)(in_ECX + 0x698) + *(int *)(in_ECX + 0x66c) * 4);
    *(undefined4 *)(*(int *)(in_ECX + 0xc14) + 0xb8) =
         *(undefined4 *)(*(int *)(in_ECX + 0x6f0) + *(int *)(in_ECX + 0x6c4) * 4);
    FUN_00423e70();
    fVar5 = *(float *)(*(int *)(in_ECX + 0x748) + *(int *)(in_ECX + 0x71c) * 4);
    if (0.0 < fVar5) {
      fVar5 = 1.0 / fVar5;
      iVar2 = *(int *)(in_ECX + 0xc14);
      if (fVar5 != 1.0) {
        *(float *)(iVar2 + 0x6c) = *(float *)(iVar2 + 0x6c) * fVar5;
        *(float *)(iVar2 + 0x70) = *(float *)(iVar2 + 0x70) * fVar5;
        *(float *)(iVar2 + 0x74) = *(float *)(iVar2 + 0x74) * fVar5;
        *(float *)(iVar2 + 0x78) = *(float *)(iVar2 + 0x78) * fVar5;
      }
    }
  }
  if (*(int *)(in_ECX + 0xc18) != 0) {
    *(undefined4 *)(*(int *)(in_ECX + 0xc18) + 0x68) = *(undefined4 *)(in_ECX + 0x888);
    *(undefined4 *)(*(int *)(in_ECX + 0xc18) + 0xac) =
         *(undefined4 *)(*(int *)(in_ECX + 0x488) + *(int *)(in_ECX + 0x45c) * 4);
    *(undefined4 *)(*(int *)(in_ECX + 0xc18) + 0xb0) =
         *(undefined4 *)(*(int *)(in_ECX + 0x4e0) + *(int *)(in_ECX + 0x4b4) * 4);
    *(undefined4 *)(*(int *)(in_ECX + 0xc18) + 0xb4) =
         *(undefined4 *)(*(int *)(in_ECX + 0x538) + *(int *)(in_ECX + 0x50c) * 4);
    *(undefined4 *)(*(int *)(in_ECX + 0xc18) + 0xb8) =
         *(undefined4 *)(*(int *)(in_ECX + 0x590) + *(int *)(in_ECX + 0x564) * 4);
    puVar3 = (undefined4 *)(in_ECX + 0x890);
    puVar4 = (undefined4 *)(*(int *)(in_ECX + 0xc18) + 0x6c);
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  return;
}


/* FUN_0064af30 @ 0064af30  kind=gamemisc  attributed-by=caller-vote  size=194 */

void FUN_0064af30(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  code *pcVar2;
  undefined4 *puVar3;
  
  pcVar2 = memmove_exref;
  in_ECX[5] = 0xf;
  in_ECX[4] = 0;
  *(undefined1 *)in_ECX = 0;
  if ((uint)param_1[5] < 0x10) {
    if (param_1[4] + 1 != 0) {
      memmove(in_ECX,param_1,param_1[4] + 1);
      pcVar2 = memmove_exref;
    }
  }
  else {
    *in_ECX = *param_1;
    *param_1 = 0;
  }
  in_ECX[4] = param_1[4];
  in_ECX[5] = param_1[5];
  param_1[5] = 0xf;
  param_1[4] = 0;
  *(undefined1 *)param_1 = 0;
  puVar1 = in_ECX + 6;
  puVar3 = param_1 + 6;
  in_ECX[0xb] = 0xf;
  in_ECX[10] = 0;
  *(undefined1 *)puVar1 = 0;
  if ((uint)param_1[0xb] < 0x10) {
    if (param_1[10] + 1 != 0) {
      (*pcVar2)(puVar1,puVar3,param_1[10] + 1);
    }
  }
  else {
    *puVar1 = *puVar3;
    *puVar3 = 0;
  }
  in_ECX[10] = param_1[10];
  in_ECX[0xb] = param_1[0xb];
  param_1[0xb] = 0xf;
  param_1[10] = 0;
  *(undefined1 *)puVar3 = 0;
  return;
}


/* FUN_0064b000 @ 0064b000  kind=gamemisc  attributed-by=caller-vote  size=194 */

void FUN_0064b000(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  code *pcVar2;
  
  pcVar2 = memmove_exref;
  in_ECX[5] = 0xf;
  in_ECX[4] = 0;
  *(undefined1 *)in_ECX = 0;
  if ((uint)param_1[5] < 0x10) {
    if (param_1[4] + 1 != 0) {
      memmove(in_ECX,param_1,param_1[4] + 1);
      pcVar2 = memmove_exref;
    }
  }
  else {
    *in_ECX = *param_1;
    *param_1 = 0;
  }
  in_ECX[4] = param_1[4];
  in_ECX[5] = param_1[5];
  param_1[5] = 0xf;
  param_1[4] = 0;
  *(undefined1 *)param_1 = 0;
  puVar1 = in_ECX + 6;
  in_ECX[0xb] = 0xf;
  in_ECX[10] = 0;
  *(undefined1 *)puVar1 = 0;
  if ((uint)param_2[5] < 0x10) {
    if (param_2[4] + 1 != 0) {
      (*pcVar2)(puVar1,param_2,param_2[4] + 1);
    }
  }
  else {
    *puVar1 = *param_2;
    *param_2 = 0;
  }
  in_ECX[10] = param_2[4];
  in_ECX[0xb] = param_2[5];
  param_2[5] = 0xf;
  param_2[4] = 0;
  *(undefined1 *)param_2 = 0;
  return;
}


/* FUN_0064b3d0 @ 0064b3d0  kind=gamemisc  attributed-by=caller-vote  size=113 */

int FUN_0064b3d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f6011;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_0064e3d0(param_1,param_2);
  local_8 = 1;
  if (iVar1 != -8) {
    FUN_0064d770(param_3);
  }
  ExceptionList = local_10;
  return iVar1;
}


/* FUN_0064b490 @ 0064b490  kind=gamemisc  attributed-by=caller-vote  size=41 */

int FUN_0064b490(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_004050c0();
  *(undefined2 *)(iVar1 + 0xc) = 0;
  if (iVar1 != -0x10) {
    FUN_0064aec0(param_1,0);
  }
  return iVar1;
}


/* FUN_0064b4c0 @ 0064b4c0  kind=gamemisc  attributed-by=caller-vote  size=41 */

int FUN_0064b4c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_0046d710(param_1,param_2);
  if (iVar1 != -8) {
    FUN_0064af30(param_3,0);
  }
  return iVar1;
}


/* FUN_0064b970 @ 0064b970  kind=gamemisc  attributed-by=caller-vote  size=525 */

undefined4 * FUN_0064b970(undefined4 *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  undefined4 *puVar5;
  undefined4 *in_ECX;
  bool bVar6;
  uint uStack_34;
  undefined1 local_24 [8];
  int local_1c;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f6030;
  local_10 = ExceptionList;
  uStack_34 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_34;
  ExceptionList = &local_10;
  local_8 = 0;
  if (in_ECX[1] == 0) {
    local_14 = (undefined1 *)&uStack_34;
    FUN_0064b540(param_1,1,*in_ECX,param_3,param_4);
    ExceptionList = local_10;
    return param_1;
  }
  piVar1 = (int *)*in_ECX;
  if (param_2 == (int *)*piVar1) {
    local_14 = (undefined1 *)&uStack_34;
    if (*param_3 < param_2[4]) {
      local_14 = (undefined1 *)&uStack_34;
      FUN_0064b540(param_1,1,param_2,param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    local_14 = (undefined1 *)&uStack_34;
    if (*(int *)(piVar1[2] + 0x10) < *param_3) {
      local_14 = (undefined1 *)&uStack_34;
      FUN_0064b540(param_1,0,piVar1[2],param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else {
    iVar2 = param_2[4];
    local_1c = *param_3;
    bVar6 = SBORROW4(iVar2,local_1c);
    iVar3 = iVar2 - local_1c;
    puVar4 = &uStack_34;
    if (local_1c < iVar2) {
      local_18 = param_2;
      FUN_0042c740();
      if (local_18[4] < local_1c) {
        if (*(char *)(local_18[2] + 0xd) != '\0') {
          FUN_0064b540(param_1,0,local_18,param_3,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        FUN_0064b540(param_1,1,param_2,param_3,param_4);
        ExceptionList = local_10;
        return param_1;
      }
      bVar6 = SBORROW4(param_2[4],local_1c);
      iVar3 = param_2[4] - local_1c;
      puVar4 = (uint *)local_14;
    }
    local_14 = (undefined1 *)puVar4;
    if (bVar6 != iVar3 < 0) {
      local_18 = param_2;
      FUN_005c3ea0();
      if ((local_18 == piVar1) || (local_1c < local_18[4])) {
        if (*(char *)(param_2[2] + 0xd) != '\0') {
          FUN_0064b540(param_1,0,param_2,param_3,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        FUN_0064b540(param_1,1,local_18,param_3,param_4);
        ExceptionList = local_10;
        return param_1;
      }
    }
  }
  local_8 = 0xffffffff;
  puVar5 = (undefined4 *)FUN_0064bba0(local_24,0,param_3,param_4);
  *param_1 = *puVar5;
  ExceptionList = local_10;
  return param_1;
}


/* FUN_0064bba0 @ 0064bba0  kind=gamemisc  attributed-by=caller-vote  size=257 */

void FUN_0064bba0(undefined4 *param_1,char param_2,int *param_3,void *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *in_ECX;
  bool bVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = param_3;
  puStack_c = &LAB_006f6050;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar3 = (undefined4 *)*in_ECX;
  local_8 = 0;
  bVar4 = true;
  if (*(char *)((int)puVar3[1] + 0xd) == '\0') {
    puVar2 = (undefined4 *)puVar3[1];
    do {
      puVar3 = puVar2;
      if (param_2 == '\0') {
        bVar4 = *param_3 < (int)puVar3[4];
      }
      else {
        bVar4 = *param_3 <= (int)puVar3[4];
      }
      if (bVar4 == false) {
        puVar2 = (undefined4 *)puVar3[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar3;
      }
    } while (*(char *)((int)puVar2 + 0xd) == '\0');
  }
  _param_2 = puVar3;
  if (bVar4) {
    if (puVar3 == *(undefined4 **)*in_ECX) {
      bVar4 = true;
      goto LAB_0064bc31;
    }
    FUN_0042c740();
  }
  if (*piVar1 <= (int)_param_2[4]) {
    if (*(uint *)((int)param_4 + 0x28) < 0x10) {
      *(undefined4 *)((int)param_4 + 0x28) = 0xf;
      *(undefined4 *)((int)param_4 + 0x24) = 0;
      *(undefined1 *)((int)param_4 + 0x14) = 0;
                    /* WARNING: Subroutine does not return */
      operator_delete(param_4);
    }
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)((int)param_4 + 0x14));
  }
LAB_0064bc31:
  puVar3 = (undefined4 *)FUN_0064b540(&param_2,bVar4,puVar3,piVar1,param_4);
  *param_1 = *puVar3;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return;
}


/* FUN_0064bdf0 @ 0064bdf0  kind=gamemisc  attributed-by=caller-vote  size=70 */

void FUN_0064bdf0(undefined4 *param_1,undefined2 *param_2,undefined2 *param_3,undefined2 *param_4,
                 code *param_5)

{
  undefined2 uVar1;
  
  if (param_2 == param_3) {
    *param_1 = param_4;
    return;
  }
  do {
    uVar1 = (*param_5)(*param_2);
    *param_4 = uVar1;
    param_2 = param_2 + 1;
    param_4 = param_4 + 1;
  } while (param_2 != param_3);
  *param_1 = param_4;
  return;
}


/* FUN_0064bec0 @ 0064bec0  kind=gamemisc  attributed-by=caller-vote  size=118 */

void FUN_0064bec0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 extraout_EDX;
  undefined4 uVar3;
  void *local_38;
  uint local_24;
  void *local_20;
  uint local_c;
  
  uVar1 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  uVar3 = 0;
  uVar2 = FUN_0064b000(param_2,param_3,0);
  FUN_0064af30(uVar2,0);
  if (0xf < local_c) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_20);
  }
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_38);
  }
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc,extraout_EDX,uVar3);
  return;
}


/* FUN_0064bf40 @ 0064bf40  kind=gamemisc  attributed-by=caller-vote  size=521 */

void FUN_0064bf40(basic_istream<char,std::char_traits<char>_> *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint unaff_EDI;
  uint uVar6;
  undefined8 local_3c;
  uint local_34;
  int iStack_30;
  char local_24 [4];
  char local_20 [4];
  undefined4 local_1c;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  std::basic_istream<char,std::char_traits<char>_>::read
            (param_1,(char *)&local_8,(ulonglong)unaff_EDI << 0x20);
  puVar2 = (undefined8 *)std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
  local_3c._4_4_ = (int)((ulonglong)*puVar2 >> 0x20);
  local_3c._0_4_ = (uint)*puVar2;
  local_34 = (uint)puVar2[1];
  local_c = local_34 + (uint)local_3c + local_8;
  iStack_30 = (int)((ulonglong)puVar2[1] >> 0x20);
  local_10 = iStack_30 +
             local_3c._4_4_ + ((int)local_8 >> 0x1f) + (uint)CARRY4((uint)local_3c,local_8) +
             (uint)CARRY4(local_34,(uint)local_3c + local_8);
  local_8 = 0;
  uVar6 = local_8;
  while( true ) {
    puVar3 = (uint *)std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
    if (((puVar3[2] + *puVar3 == local_c) &&
        (puVar3[3] + puVar3[1] + (uint)CARRY4(puVar3[2],*puVar3) == local_10)) ||
       ((*(byte *)((int)&param_1[3].vbtablePtr +
                  param_1->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset) & 1) != 0))
    break;
    std::basic_istream<char,std::char_traits<char>_>::read
              (param_1,(char *)&local_14,(ulonglong)unaff_EDI << 0x20);
    if (local_14 == 1) {
      std::basic_istream<char,std::char_traits<char>_>::read
                (param_1,local_24,(ulonglong)unaff_EDI << 0x20);
      std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
      uVar4 = (**(code **)(*param_2 + 4))();
      if (uVar6 == uVar4) {
        (**(code **)(*param_2 + 8))();
      }
      std::basic_istream<char,std::char_traits<char>_>::read
                (param_1,(char *)**(undefined4 **)(param_2[0x13] + uVar6 * 4),
                 (ulonglong)unaff_EDI << 0x20);
      local_8 = uVar6 + 1;
      uVar6 = local_8;
    }
    else if (local_14 == 2) {
      std::basic_istream<char,std::char_traits<char>_>::read
                (param_1,local_20,(ulonglong)unaff_EDI << 0x20);
      std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
      std::basic_istream<char,std::char_traits<char>_>::read
                (param_1,(char *)&local_1c,(ulonglong)unaff_EDI << 0x20);
      uVar1 = local_1c;
      iVar5 = 0;
      uVar6 = local_8;
      if (0 < (int)(param_2[0x14] - param_2[0x13] & 0xfffffffcU)) {
        do {
          FUN_0040d9d0(uVar1);
          iVar5 = iVar5 + 1;
          uVar6 = local_8;
        } while (iVar5 < param_2[0x14] - param_2[0x13] >> 2);
      }
    }
    else if (local_14 == 3) {
      FUN_00653ad0();
    }
    else {
      std::basic_istream<char,std::char_traits<char>_>::read
                (param_1,(char *)&local_18,(ulonglong)unaff_EDI << 0x20);
      uVar6 = local_18;
      iVar5 = (int)local_18 >> 0x1f;
      puVar2 = (undefined8 *)std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
      local_3c._0_4_ = (uint)*puVar2;
      local_3c._4_4_ = (int)((ulonglong)*puVar2 >> 0x20);
      local_3c = CONCAT44(local_3c._4_4_ + iVar5 + (uint)CARRY4((uint)local_3c,uVar6),
                          (uint)local_3c + uVar6);
      std::basic_istream<char,std::char_traits<char>_>::seekg
                (param_1,local_3c,puVar2[1],(int)puVar2[2],(int)((ulonglong)puVar2[2] >> 0x20));
      uVar6 = local_8;
    }
  }
  return;
}


/* FUN_0064c150 @ 0064c150  kind=gamemisc  attributed-by=caller-vote  size=521 */

void FUN_0064c150(basic_istream<char,std::char_traits<char>_> *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint unaff_EDI;
  uint uVar6;
  undefined8 local_3c;
  uint local_34;
  int iStack_30;
  char local_24 [4];
  char local_20 [4];
  undefined4 local_1c;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  std::basic_istream<char,std::char_traits<char>_>::read
            (param_1,(char *)&local_8,(ulonglong)unaff_EDI << 0x20);
  puVar2 = (undefined8 *)std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
  local_3c._4_4_ = (int)((ulonglong)*puVar2 >> 0x20);
  local_3c._0_4_ = (uint)*puVar2;
  local_34 = (uint)puVar2[1];
  local_c = local_34 + (uint)local_3c + local_8;
  iStack_30 = (int)((ulonglong)puVar2[1] >> 0x20);
  local_10 = iStack_30 +
             local_3c._4_4_ + ((int)local_8 >> 0x1f) + (uint)CARRY4((uint)local_3c,local_8) +
             (uint)CARRY4(local_34,(uint)local_3c + local_8);
  local_8 = 0;
  uVar6 = local_8;
  while( true ) {
    puVar3 = (uint *)std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
    if (((puVar3[2] + *puVar3 == local_c) &&
        (puVar3[3] + puVar3[1] + (uint)CARRY4(puVar3[2],*puVar3) == local_10)) ||
       ((*(byte *)((int)&param_1[3].vbtablePtr +
                  param_1->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset) & 1) != 0))
    break;
    std::basic_istream<char,std::char_traits<char>_>::read
              (param_1,(char *)&local_14,(ulonglong)unaff_EDI << 0x20);
    if (local_14 == 1) {
      std::basic_istream<char,std::char_traits<char>_>::read
                (param_1,local_24,(ulonglong)unaff_EDI << 0x20);
      std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
      uVar4 = (**(code **)(*param_2 + 4))();
      if (uVar6 == uVar4) {
        (**(code **)(*param_2 + 8))();
      }
      std::basic_istream<char,std::char_traits<char>_>::read
                (param_1,(char *)**(undefined4 **)(param_2[0x13] + uVar6 * 4),
                 (ulonglong)unaff_EDI << 0x20);
      local_8 = uVar6 + 1;
      uVar6 = local_8;
    }
    else if (local_14 == 2) {
      std::basic_istream<char,std::char_traits<char>_>::read
                (param_1,local_20,(ulonglong)unaff_EDI << 0x20);
      std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
      std::basic_istream<char,std::char_traits<char>_>::read
                (param_1,(char *)&local_1c,(ulonglong)unaff_EDI << 0x20);
      uVar1 = local_1c;
      iVar5 = 0;
      uVar6 = local_8;
      if (0 < (int)(param_2[0x14] - param_2[0x13] & 0xfffffffcU)) {
        do {
          FUN_0042bea0(uVar1);
          iVar5 = iVar5 + 1;
          uVar6 = local_8;
        } while (iVar5 < param_2[0x14] - param_2[0x13] >> 2);
      }
    }
    else if (local_14 == 3) {
      FUN_00653ad0();
    }
    else {
      std::basic_istream<char,std::char_traits<char>_>::read
                (param_1,(char *)&local_18,(ulonglong)unaff_EDI << 0x20);
      uVar6 = local_18;
      iVar5 = (int)local_18 >> 0x1f;
      puVar2 = (undefined8 *)std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
      local_3c._0_4_ = (uint)*puVar2;
      local_3c._4_4_ = (int)((ulonglong)*puVar2 >> 0x20);
      local_3c = CONCAT44(local_3c._4_4_ + iVar5 + (uint)CARRY4((uint)local_3c,uVar6),
                          (uint)local_3c + uVar6);
      std::basic_istream<char,std::char_traits<char>_>::seekg
                (param_1,local_3c,puVar2[1],(int)puVar2[2],(int)((ulonglong)puVar2[2] >> 0x20));
      uVar6 = local_8;
    }
  }
  return;
}


/* FUN_0064c360 @ 0064c360  kind=gamemisc  attributed-by=caller-vote  size=521 */

void FUN_0064c360(basic_istream<char,std::char_traits<char>_> *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint unaff_EDI;
  uint uVar6;
  undefined8 local_3c;
  uint local_34;
  int iStack_30;
  char local_24 [4];
  char local_20 [4];
  undefined4 local_1c;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  std::basic_istream<char,std::char_traits<char>_>::read
            (param_1,(char *)&local_8,(ulonglong)unaff_EDI << 0x20);
  puVar2 = (undefined8 *)std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
  local_3c._4_4_ = (int)((ulonglong)*puVar2 >> 0x20);
  local_3c._0_4_ = (uint)*puVar2;
  local_34 = (uint)puVar2[1];
  local_c = local_34 + (uint)local_3c + local_8;
  iStack_30 = (int)((ulonglong)puVar2[1] >> 0x20);
  local_10 = iStack_30 +
             local_3c._4_4_ + ((int)local_8 >> 0x1f) + (uint)CARRY4((uint)local_3c,local_8) +
             (uint)CARRY4(local_34,(uint)local_3c + local_8);
  local_8 = 0;
  uVar6 = local_8;
  while( true ) {
    puVar3 = (uint *)std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
    if (((puVar3[2] + *puVar3 == local_c) &&
        (puVar3[3] + puVar3[1] + (uint)CARRY4(puVar3[2],*puVar3) == local_10)) ||
       ((*(byte *)((int)&param_1[3].vbtablePtr +
                  param_1->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset) & 1) != 0))
    break;
    std::basic_istream<char,std::char_traits<char>_>::read
              (param_1,(char *)&local_14,(ulonglong)unaff_EDI << 0x20);
    if (local_14 == 1) {
      std::basic_istream<char,std::char_traits<char>_>::read
                (param_1,local_24,(ulonglong)unaff_EDI << 0x20);
      std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
      uVar4 = (**(code **)(*param_2 + 4))();
      if (uVar6 == uVar4) {
        (**(code **)(*param_2 + 8))();
      }
      std::basic_istream<char,std::char_traits<char>_>::read
                (param_1,(char *)**(undefined4 **)(param_2[0x13] + uVar6 * 4),
                 (ulonglong)unaff_EDI << 0x20);
      local_8 = uVar6 + 1;
      uVar6 = local_8;
    }
    else if (local_14 == 2) {
      std::basic_istream<char,std::char_traits<char>_>::read
                (param_1,local_20,(ulonglong)unaff_EDI << 0x20);
      std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
      std::basic_istream<char,std::char_traits<char>_>::read
                (param_1,(char *)&local_1c,(ulonglong)unaff_EDI << 0x20);
      uVar1 = local_1c;
      iVar5 = 0;
      uVar6 = local_8;
      if (0 < (int)(param_2[0x14] - param_2[0x13] & 0xfffffffcU)) {
        do {
          FUN_0042bf80(uVar1);
          iVar5 = iVar5 + 1;
          uVar6 = local_8;
        } while (iVar5 < param_2[0x14] - param_2[0x13] >> 2);
      }
    }
    else if (local_14 == 3) {
      FUN_00653ad0();
    }
    else {
      std::basic_istream<char,std::char_traits<char>_>::read
                (param_1,(char *)&local_18,(ulonglong)unaff_EDI << 0x20);
      uVar6 = local_18;
      iVar5 = (int)local_18 >> 0x1f;
      puVar2 = (undefined8 *)std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
      local_3c._0_4_ = (uint)*puVar2;
      local_3c._4_4_ = (int)((ulonglong)*puVar2 >> 0x20);
      local_3c = CONCAT44(local_3c._4_4_ + iVar5 + (uint)CARRY4((uint)local_3c,uVar6),
                          (uint)local_3c + uVar6);
      std::basic_istream<char,std::char_traits<char>_>::seekg
                (param_1,local_3c,puVar2[1],(int)puVar2[2],(int)((ulonglong)puVar2[2] >> 0x20));
      uVar6 = local_8;
    }
  }
  return;
}


/* FUN_0064c570 @ 0064c570  kind=gamemisc  attributed-by=caller-vote  size=403 */

void FUN_0064c570(basic_istream<char,std::char_traits<char>_> *param_1,int *param_2)

{
  undefined8 *puVar1;
  uint *puVar2;
  int iVar3;
  uint unaff_EDI;
  uint uVar4;
  undefined8 local_38;
  uint local_30;
  int iStack_2c;
  char local_20 [4];
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  std::basic_istream<char,std::char_traits<char>_>::read
            (param_1,(char *)&local_c,(ulonglong)unaff_EDI << 0x20);
  puVar1 = (undefined8 *)std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
  local_8 = 0;
  local_38._4_4_ = (int)((ulonglong)*puVar1 >> 0x20);
  local_38._0_4_ = (uint)*puVar1;
  local_30 = (uint)puVar1[1];
  local_10 = local_30 + (uint)local_38 + local_c;
  iStack_2c = (int)((ulonglong)puVar1[1] >> 0x20);
  local_14 = iStack_2c +
             local_38._4_4_ + ((int)local_c >> 0x1f) + (uint)CARRY4((uint)local_38,local_c) +
             (uint)CARRY4(local_30,(uint)local_38 + local_c);
  local_c = 0;
  uVar4 = local_c;
  while( true ) {
    puVar2 = (uint *)std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
    if (((puVar2[2] + *puVar2 == local_10) &&
        (puVar2[3] + puVar2[1] + (uint)CARRY4(puVar2[2],*puVar2) == local_14)) ||
       ((*(byte *)((int)&param_1[3].vbtablePtr +
                  param_1->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset) & 1) != 0))
    break;
    std::basic_istream<char,std::char_traits<char>_>::read
              (param_1,(char *)&local_18,(ulonglong)unaff_EDI << 0x20);
    if (local_18 == 1) {
      std::basic_istream<char,std::char_traits<char>_>::read
                (param_1,local_20,(ulonglong)unaff_EDI << 0x20);
      std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
      iVar3 = (**(code **)(*param_2 + 4))();
      if (local_8 == iVar3) {
        (**(code **)(*param_2 + 8))();
      }
      std::basic_istream<char,std::char_traits<char>_>::read
                (param_1,(char *)(param_2[0x13] + uVar4),(ulonglong)unaff_EDI << 0x20);
      local_8 = local_8 + 1;
      local_c = uVar4 + 0x40;
      uVar4 = local_c;
    }
    else if (local_18 == 3) {
      FUN_00653ad0();
    }
    else {
      std::basic_istream<char,std::char_traits<char>_>::read
                (param_1,(char *)&local_1c,(ulonglong)unaff_EDI << 0x20);
      uVar4 = local_1c;
      iVar3 = (int)local_1c >> 0x1f;
      puVar1 = (undefined8 *)std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
      local_38._0_4_ = (uint)*puVar1;
      local_38._4_4_ = (int)((ulonglong)*puVar1 >> 0x20);
      local_38 = CONCAT44(local_38._4_4_ + iVar3 + (uint)CARRY4((uint)local_38,uVar4),
                          (uint)local_38 + uVar4);
      std::basic_istream<char,std::char_traits<char>_>::seekg
                (param_1,local_38,puVar1[1],(int)puVar1[2],(int)((ulonglong)puVar1[2] >> 0x20));
      uVar4 = local_c;
    }
  }
  return;
}


/* FUN_0064c710 @ 0064c710  kind=gamemisc  attributed-by=caller-vote  size=392 */

void FUN_0064c710(basic_istream<char,std::char_traits<char>_> *param_1,int *param_2)

{
  undefined8 *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint unaff_EDI;
  uint uVar5;
  undefined8 local_34;
  uint local_2c;
  int iStack_28;
  char local_1c [4];
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  std::basic_istream<char,std::char_traits<char>_>::read
            (param_1,(char *)&local_8,(ulonglong)unaff_EDI << 0x20);
  puVar1 = (undefined8 *)std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
  local_34._4_4_ = (int)((ulonglong)*puVar1 >> 0x20);
  local_34._0_4_ = (uint)*puVar1;
  local_2c = (uint)puVar1[1];
  local_c = local_2c + (uint)local_34 + local_8;
  iStack_28 = (int)((ulonglong)puVar1[1] >> 0x20);
  local_10 = iStack_28 +
             local_34._4_4_ + ((int)local_8 >> 0x1f) + (uint)CARRY4((uint)local_34,local_8) +
             (uint)CARRY4(local_2c,(uint)local_34 + local_8);
  local_8 = 0;
  uVar5 = local_8;
  while( true ) {
    puVar2 = (uint *)std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
    if (((puVar2[2] + *puVar2 == local_c) &&
        (puVar2[3] + puVar2[1] + (uint)CARRY4(puVar2[2],*puVar2) == local_10)) ||
       ((*(byte *)((int)&param_1[3].vbtablePtr +
                  param_1->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset) & 1) != 0))
    break;
    std::basic_istream<char,std::char_traits<char>_>::read
              (param_1,(char *)&local_14,(ulonglong)unaff_EDI << 0x20);
    if (local_14 == 1) {
      std::basic_istream<char,std::char_traits<char>_>::read
                (param_1,local_1c,(ulonglong)unaff_EDI << 0x20);
      std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
      uVar3 = (**(code **)(*param_2 + 4))();
      if (uVar5 == uVar3) {
        (**(code **)(*param_2 + 8))();
      }
      std::basic_istream<char,std::char_traits<char>_>::read
                (param_1,(char *)(param_2[0x13] + uVar5 * 8),(ulonglong)unaff_EDI << 0x20);
      local_8 = uVar5 + 1;
      uVar5 = local_8;
    }
    else if (local_14 == 3) {
      FUN_00653ad0();
    }
    else {
      std::basic_istream<char,std::char_traits<char>_>::read
                (param_1,(char *)&local_18,(ulonglong)unaff_EDI << 0x20);
      uVar5 = local_18;
      iVar4 = (int)local_18 >> 0x1f;
      puVar1 = (undefined8 *)std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
      local_34._0_4_ = (uint)*puVar1;
      local_34._4_4_ = (int)((ulonglong)*puVar1 >> 0x20);
      local_34 = CONCAT44(local_34._4_4_ + iVar4 + (uint)CARRY4((uint)local_34,uVar5),
                          (uint)local_34 + uVar5);
      std::basic_istream<char,std::char_traits<char>_>::seekg
                (param_1,local_34,puVar1[1],(int)puVar1[2],(int)((ulonglong)puVar1[2] >> 0x20));
      uVar5 = local_8;
    }
  }
  return;
}


/* FUN_0064c8a0 @ 0064c8a0  kind=gamemisc  attributed-by=caller-vote  size=403 */

void FUN_0064c8a0(basic_istream<char,std::char_traits<char>_> *param_1,int *param_2)

{
  undefined8 *puVar1;
  uint *puVar2;
  int iVar3;
  uint unaff_EDI;
  uint uVar4;
  undefined8 local_38;
  uint local_30;
  int iStack_2c;
  char local_20 [4];
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  std::basic_istream<char,std::char_traits<char>_>::read
            (param_1,(char *)&local_c,(ulonglong)unaff_EDI << 0x20);
  puVar1 = (undefined8 *)std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
  local_8 = 0;
  local_38._4_4_ = (int)((ulonglong)*puVar1 >> 0x20);
  local_38._0_4_ = (uint)*puVar1;
  local_30 = (uint)puVar1[1];
  local_10 = local_30 + (uint)local_38 + local_c;
  iStack_2c = (int)((ulonglong)puVar1[1] >> 0x20);
  local_14 = iStack_2c +
             local_38._4_4_ + ((int)local_c >> 0x1f) + (uint)CARRY4((uint)local_38,local_c) +
             (uint)CARRY4(local_30,(uint)local_38 + local_c);
  local_c = 0;
  uVar4 = local_c;
  while( true ) {
    puVar2 = (uint *)std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
    if (((puVar2[2] + *puVar2 == local_10) &&
        (puVar2[3] + puVar2[1] + (uint)CARRY4(puVar2[2],*puVar2) == local_14)) ||
       ((*(byte *)((int)&param_1[3].vbtablePtr +
                  param_1->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset) & 1) != 0))
    break;
    std::basic_istream<char,std::char_traits<char>_>::read
              (param_1,(char *)&local_18,(ulonglong)unaff_EDI << 0x20);
    if (local_18 == 1) {
      std::basic_istream<char,std::char_traits<char>_>::read
                (param_1,local_20,(ulonglong)unaff_EDI << 0x20);
      std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
      iVar3 = (**(code **)(*param_2 + 4))();
      if (local_8 == iVar3) {
        (**(code **)(*param_2 + 8))();
      }
      std::basic_istream<char,std::char_traits<char>_>::read
                (param_1,(char *)(param_2[0x13] + uVar4),(ulonglong)unaff_EDI << 0x20);
      local_8 = local_8 + 1;
      local_c = uVar4 + 0xc;
      uVar4 = local_c;
    }
    else if (local_18 == 3) {
      FUN_00653ad0();
    }
    else {
      std::basic_istream<char,std::char_traits<char>_>::read
                (param_1,(char *)&local_1c,(ulonglong)unaff_EDI << 0x20);
      uVar4 = local_1c;
      iVar3 = (int)local_1c >> 0x1f;
      puVar1 = (undefined8 *)std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
      local_38._0_4_ = (uint)*puVar1;
      local_38._4_4_ = (int)((ulonglong)*puVar1 >> 0x20);
      local_38 = CONCAT44(local_38._4_4_ + iVar3 + (uint)CARRY4((uint)local_38,uVar4),
                          (uint)local_38 + uVar4);
      std::basic_istream<char,std::char_traits<char>_>::seekg
                (param_1,local_38,puVar1[1],(int)puVar1[2],(int)((ulonglong)puVar1[2] >> 0x20));
      uVar4 = local_c;
    }
  }
  return;
}


/* FUN_0064ca40 @ 0064ca40  kind=gamemisc  attributed-by=caller-vote  size=403 */

void FUN_0064ca40(basic_istream<char,std::char_traits<char>_> *param_1,int *param_2)

{
  undefined8 *puVar1;
  uint *puVar2;
  int iVar3;
  uint unaff_EDI;
  uint uVar4;
  undefined8 local_38;
  uint local_30;
  int iStack_2c;
  char local_20 [4];
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  std::basic_istream<char,std::char_traits<char>_>::read
            (param_1,(char *)&local_c,(ulonglong)unaff_EDI << 0x20);
  puVar1 = (undefined8 *)std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
  local_8 = 0;
  local_38._4_4_ = (int)((ulonglong)*puVar1 >> 0x20);
  local_38._0_4_ = (uint)*puVar1;
  local_30 = (uint)puVar1[1];
  local_10 = local_30 + (uint)local_38 + local_c;
  iStack_2c = (int)((ulonglong)puVar1[1] >> 0x20);
  local_14 = iStack_2c +
             local_38._4_4_ + ((int)local_c >> 0x1f) + (uint)CARRY4((uint)local_38,local_c) +
             (uint)CARRY4(local_30,(uint)local_38 + local_c);
  local_c = 0;
  uVar4 = local_c;
  while( true ) {
    puVar2 = (uint *)std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
    if (((puVar2[2] + *puVar2 == local_10) &&
        (puVar2[3] + puVar2[1] + (uint)CARRY4(puVar2[2],*puVar2) == local_14)) ||
       ((*(byte *)((int)&param_1[3].vbtablePtr +
                  param_1->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset) & 1) != 0))
    break;
    std::basic_istream<char,std::char_traits<char>_>::read
              (param_1,(char *)&local_18,(ulonglong)unaff_EDI << 0x20);
    if (local_18 == 1) {
      std::basic_istream<char,std::char_traits<char>_>::read
                (param_1,local_20,(ulonglong)unaff_EDI << 0x20);
      std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
      iVar3 = (**(code **)(*param_2 + 4))();
      if (local_8 == iVar3) {
        (**(code **)(*param_2 + 8))();
      }
      std::basic_istream<char,std::char_traits<char>_>::read
                (param_1,(char *)(param_2[0x13] + uVar4),(ulonglong)unaff_EDI << 0x20);
      local_8 = local_8 + 1;
      local_c = uVar4 + 0x10;
      uVar4 = local_c;
    }
    else if (local_18 == 3) {
      FUN_00653ad0();
    }
    else {
      std::basic_istream<char,std::char_traits<char>_>::read
                (param_1,(char *)&local_1c,(ulonglong)unaff_EDI << 0x20);
      uVar4 = local_1c;
      iVar3 = (int)local_1c >> 0x1f;
      puVar1 = (undefined8 *)std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
      local_38._0_4_ = (uint)*puVar1;
      local_38._4_4_ = (int)((ulonglong)*puVar1 >> 0x20);
      local_38 = CONCAT44(local_38._4_4_ + iVar3 + (uint)CARRY4((uint)local_38,uVar4),
                          (uint)local_38 + uVar4);
      std::basic_istream<char,std::char_traits<char>_>::seekg
                (param_1,local_38,puVar1[1],(int)puVar1[2],(int)((ulonglong)puVar1[2] >> 0x20));
      uVar4 = local_c;
    }
  }
  return;
}


/* FUN_0064cbe0 @ 0064cbe0  kind=gamemisc  attributed-by=caller-vote  size=392 */

void FUN_0064cbe0(basic_istream<char,std::char_traits<char>_> *param_1,int *param_2)

{
  undefined8 *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint unaff_EDI;
  uint uVar5;
  undefined8 local_34;
  uint local_2c;
  int iStack_28;
  char local_1c [4];
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  std::basic_istream<char,std::char_traits<char>_>::read
            (param_1,(char *)&local_8,(ulonglong)unaff_EDI << 0x20);
  puVar1 = (undefined8 *)std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
  local_34._4_4_ = (int)((ulonglong)*puVar1 >> 0x20);
  local_34._0_4_ = (uint)*puVar1;
  local_2c = (uint)puVar1[1];
  local_c = local_2c + (uint)local_34 + local_8;
  iStack_28 = (int)((ulonglong)puVar1[1] >> 0x20);
  local_10 = iStack_28 +
             local_34._4_4_ + ((int)local_8 >> 0x1f) + (uint)CARRY4((uint)local_34,local_8) +
             (uint)CARRY4(local_2c,(uint)local_34 + local_8);
  local_8 = 0;
  uVar5 = local_8;
  while( true ) {
    puVar2 = (uint *)std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
    if (((puVar2[2] + *puVar2 == local_c) &&
        (puVar2[3] + puVar2[1] + (uint)CARRY4(puVar2[2],*puVar2) == local_10)) ||
       ((*(byte *)((int)&param_1[3].vbtablePtr +
                  param_1->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset) & 1) != 0))
    break;
    std::basic_istream<char,std::char_traits<char>_>::read
              (param_1,(char *)&local_14,(ulonglong)unaff_EDI << 0x20);
    if (local_14 == 1) {
      std::basic_istream<char,std::char_traits<char>_>::read
                (param_1,local_1c,(ulonglong)unaff_EDI << 0x20);
      std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
      uVar3 = (**(code **)(*param_2 + 4))();
      if (uVar5 == uVar3) {
        (**(code **)(*param_2 + 8))();
      }
      std::basic_istream<char,std::char_traits<char>_>::read
                (param_1,(char *)(param_2[0x13] + uVar5 * 4),(ulonglong)unaff_EDI << 0x20);
      local_8 = uVar5 + 1;
      uVar5 = local_8;
    }
    else if (local_14 == 3) {
      FUN_00653ad0();
    }
    else {
      std::basic_istream<char,std::char_traits<char>_>::read
                (param_1,(char *)&local_18,(ulonglong)unaff_EDI << 0x20);
      uVar5 = local_18;
      iVar4 = (int)local_18 >> 0x1f;
      puVar1 = (undefined8 *)std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
      local_34._0_4_ = (uint)*puVar1;
      local_34._4_4_ = (int)((ulonglong)*puVar1 >> 0x20);
      local_34 = CONCAT44(local_34._4_4_ + iVar4 + (uint)CARRY4((uint)local_34,uVar5),
                          (uint)local_34 + uVar5);
      std::basic_istream<char,std::char_traits<char>_>::seekg
                (param_1,local_34,puVar1[1],(int)puVar1[2],(int)((ulonglong)puVar1[2] >> 0x20));
      uVar5 = local_8;
    }
  }
  return;
}


/* FUN_0064ced0 @ 0064ced0  kind=gamemisc  attributed-by=caller-vote  size=264 */

void * __thiscall
FUN_0064ced0(void *this,undefined4 param_2,uint param_3,undefined4 param_4,int param_5)

{
  basic_streambuf<char,std::char_traits<char>_> *this_00;
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f60fd;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_5 != 0) {
    *(basic_ifstream<char,std::char_traits<char>_>_vbtable **)this =
         &std::basic_ifstream<char,std::char_traits<char>_>::vbtable;
    *(code **)((int)this + 0x70) = _vftable__exref;
    *(code **)((int)this + 0x70) = _vftable__exref;
    local_8 = 0;
  }
  this_00 = (basic_streambuf<char,std::char_traits<char>_> *)((int)this + 0x10);
  std::basic_istream<char,std::char_traits<char>_>::basic_istream<char,std::char_traits<char>_>
            (this,(basic_streambuf<char,std::char_traits<char>_> *)this_00,false);
  local_8 = 1;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_ifstream<char,std::char_traits<char>_> */
  *(basic_ifstream<char,std::char_traits<char>_>_vftable **)((int)this + *(int *)(*(int *)this + 4))
       = &std::basic_ifstream<char,std::char_traits<char>_>::vftable;
  *(int *)(*(int *)(*(int *)this + 4) + -4 + (int)this) = *(int *)(*(int *)this + 4) + -0x70;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            (this_00);
  local_8._0_1_ = 2;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_filebuf<char,std::char_traits<char>_> */
  *this_00 = (basic_streambuf<char,std::char_traits<char>_>)
             &std::basic_filebuf<char,std::char_traits<char>_>::vftable;
  *(undefined1 *)((int)this + 0x5c) = 0;
  *(undefined1 *)((int)this + 0x55) = 0;
  std::basic_streambuf<char,std::char_traits<char>_>::_Init(this_00);
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 0x58) = DAT_0076af5c;
  *(undefined4 *)((int)this + 0x50) = 0;
  local_8 = CONCAT31(local_8._1_3_,3);
  iVar1 = FUN_00653210(param_2,param_3 | 1,param_4);
  if (iVar1 == 0) {
    std::basic_ios<char,std::char_traits<char>_>::setstate
              ((basic_ios<char,std::char_traits<char>_> *)(*(int *)(*(int *)this + 4) + (int)this),2
               ,false);
  }
  ExceptionList = local_10;
  return this;
}


/* FUN_0064d770 @ 0064d770  kind=gamemisc  attributed-by=caller-vote  size=151 */

void FUN_0064d770(int param_1)

{
  undefined1 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f62c8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(in_ECX + 0x14) = 0xf;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *in_ECX = 0;
  FUN_0040c0a0(param_1,0,0xffffffff);
  *(undefined4 *)(in_ECX + 0x2c) = 0xf;
  *(undefined4 *)(in_ECX + 0x28) = 0;
  local_8 = 0;
  in_ECX[0x18] = 0;
  FUN_0040c0a0(param_1 + 0x18,0,0xffffffff);
  *(undefined4 *)(in_ECX + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  ExceptionList = local_10;
  return;
}


/* FUN_0064dd90 @ 0064dd90  kind=gamemisc  attributed-by=caller-vote  size=67 */

void FUN_0064dd90(void)

{
  undefined4 *in_ECX;
  
  if (0xf < (uint)in_ECX[0xb]) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)in_ECX[6]);
  }
  in_ECX[0xb] = 0xf;
  in_ECX[10] = 0;
  *(undefined1 *)(in_ECX + 6) = 0;
  if (0xf < (uint)in_ECX[5]) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)*in_ECX);
  }
  in_ECX[5] = 0xf;
  in_ECX[4] = 0;
  *(undefined1 *)in_ECX = 0;
  return;
}


/* FUN_0064de80 @ 0064de80  kind=gamemisc  attributed-by=caller-vote  size=47 */

void FUN_0064de80(void)

{
  int in_ECX;
  undefined1 local_8 [4];
  
  if (*(void **)(in_ECX + 100) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(in_ECX + 100));
  }
  FUN_004e6e60(local_8,**(undefined4 **)(in_ECX + 0x58),*(undefined4 **)(in_ECX + 0x58));
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(in_ECX + 0x58));
}


/* FUN_0064dfb0 @ 0064dfb0  kind=gamemisc  attributed-by=caller-vote  size=310 */

void FUN_0064dfb0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *in_ECX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 local_4c [4];
  void *local_48 [4];
  undefined4 local_38;
  uint local_34;
  int local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f6460;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)*in_ECX;
  puVar5 = puVar1;
  if (*(char *)((int)puVar1[1] + 0xd) == '\0') {
    puVar3 = (undefined4 *)puVar1[1];
    do {
      if ((int)puVar3[4] < *param_1) {
        puVar4 = (undefined4 *)puVar3[2];
      }
      else {
        puVar4 = (undefined4 *)*puVar3;
        puVar5 = puVar3;
      }
      puVar3 = puVar4;
    } while (*(char *)((int)puVar4 + 0xd) == '\0');
  }
  if ((puVar5 == puVar1) || (*param_1 < (int)puVar5[4])) {
    local_30 = *param_1;
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = (void *)((uint)local_48[0] & 0xffffff00);
    local_8 = 0;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    memmove(local_2c,local_48,1);
    local_1c = local_38;
    local_18 = local_34;
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = (void *)((uint)local_48[0] & 0xffffff00);
    local_8 = CONCAT31(local_8._1_3_,1);
    iVar2 = FUN_0064b490(&local_30);
    FUN_0064b970(local_4c,puVar5,iVar2 + 0x10,iVar2);
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_48[0]);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0064e0f0 @ 0064e0f0  kind=gamemisc  attributed-by=caller-vote  size=310 */

void FUN_0064e0f0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *in_ECX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 local_4c [4];
  void *local_48 [4];
  undefined4 local_38;
  uint local_34;
  int local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f6460;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)*in_ECX;
  puVar5 = puVar1;
  if (*(char *)((int)puVar1[1] + 0xd) == '\0') {
    puVar3 = (undefined4 *)puVar1[1];
    do {
      if ((int)puVar3[4] < *param_1) {
        puVar4 = (undefined4 *)puVar3[2];
      }
      else {
        puVar4 = (undefined4 *)*puVar3;
        puVar5 = puVar3;
      }
      puVar3 = puVar4;
    } while (*(char *)((int)puVar4 + 0xd) == '\0');
  }
  if ((puVar5 == puVar1) || (*param_1 < (int)puVar5[4])) {
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = (void *)((uint)local_48[0] & 0xffffff00);
    local_30 = *param_1;
    local_8 = 0;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    memmove(local_2c,local_48,1);
    local_1c = local_38;
    local_18 = local_34;
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = (void *)((uint)local_48[0] & 0xffffff00);
    local_8 = CONCAT31(local_8._1_3_,1);
    iVar2 = FUN_0064b490(&local_30);
    FUN_0064b970(local_4c,puVar5,iVar2 + 0x10,iVar2);
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_48[0]);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0064e3d0 @ 0064e3d0  kind=gamemisc  attributed-by=caller-vote  size=54 */

void FUN_0064e3d0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x44);
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


/* FUN_0064ef70 @ 0064ef70  kind=gamemisc  attributed-by=caller-vote  size=110 */

void FUN_0064ef70(int param_1,code *param_2,undefined4 param_3)

{
  int *piVar1;
  
  if (((*(int *)(*(int *)(*(int *)(param_1 + 0x3c) + 0x94) +
                *(int *)(*(int *)(param_1 + 0x3c) + 0x68) * 4) != 0) &&
      ((~(byte)(*(uint *)(param_1 + 200) >> 2) & 1) != 0)) &&
     ((~(byte)(*(uint *)(param_1 + 200) >> 1) & 1) != 0)) {
    if (*(int *)(param_1 + 0x40) != 0) {
      (*param_2)();
    }
    piVar1 = (int *)**(int **)(param_1 + 0x2c);
    if (piVar1 != *(int **)(param_1 + 0x2c)) {
      do {
        FUN_0064ef70(piVar1[2],param_2,param_3);
        piVar1 = (int *)*piVar1;
      } while (piVar1 != (int *)*(int *)(param_1 + 0x2c));
    }
  }
  return;
}


/* FUN_0064f400 @ 0064f400  kind=gamemisc  attributed-by=caller-vote  size=210 */

Movie * FUN_0064f400(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  Movie *pMVar7;
  undefined4 *puVar8;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar2 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f64cb;
  local_10 = ExceptionList;
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar1 = (int *)(in_ECX + 0xac);
  iVar4 = FUN_004e3790(param_1);
  if (iVar4 != *piVar1) {
    piVar5 = (int *)(iVar4 + 0x10);
    if (7 < *(uint *)(iVar4 + 0x24)) {
      piVar5 = (int *)*piVar5;
    }
    iVar6 = FUN_00428db0(0,*(undefined4 *)(param_1 + 0x10),piVar5,*(undefined4 *)(iVar4 + 0x20));
    param_1 = iVar4;
    if (-1 < iVar6) goto LAB_0064f46c;
  }
  param_1 = *piVar1;
LAB_0064f46c:
  if ((param_1 != *piVar1) && (*(undefined4 **)(param_1 + 0x28) != (undefined4 *)0x0)) {
    (**(code **)**(undefined4 **)(param_1 + 0x28))(1,uVar3);
  }
  pMVar7 = operator_new(0x34);
  local_8 = 0;
  if (pMVar7 == (Movie *)0x0) {
    pMVar7 = (Movie *)0x0;
  }
  else {
    pMVar7 = plasma::Movie::Movie(pMVar7,in_ECX,iVar2);
  }
  local_8 = 0xffffffff;
  puVar8 = (undefined4 *)FUN_00661830(iVar2);
  *puVar8 = pMVar7;
  ExceptionList = local_10;
  return pMVar7;
}


/* FUN_006503e0 @ 006503e0  kind=gamemisc  attributed-by=caller-vote  size=117 */

Widget * FUN_006503e0(int param_1,undefined4 param_2)

{
  Widget *pWVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f661b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pWVar1 = operator_new(0x160);
  local_8 = 0;
  if (pWVar1 != (Widget *)0x0) {
    pWVar1 = plasma::Widget::Widget(pWVar1,in_ECX,param_1,param_2);
    ExceptionList = local_10;
    return pWVar1;
  }
  ExceptionList = local_10;
  return (Widget *)0x0;
}


/* FUN_00650460 @ 00650460  kind=gamemisc  attributed-by=caller-vote  size=78 */

void FUN_00650460(undefined4 *param_1)

{
  int *piVar1;
  int in_ECX;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x58));
  piVar1 = (int *)param_1[0x83];
  if (piVar1 != *(int **)(in_ECX + 0x8c)) {
    *(int *)piVar1[1] = *piVar1;
    *(int *)(*piVar1 + 4) = piVar1[1];
                    /* WARNING: Subroutine does not return */
    operator_delete(piVar1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x58));
  (**(code **)*param_1)(1);
  return;
}


/* FUN_006507c0 @ 006507c0  kind=gamemisc  attributed-by=caller-vote  size=72 */

void FUN_006507c0(undefined4 *param_1)

{
  int *piVar1;
  int in_ECX;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x58));
  piVar1 = (int *)param_1[0x13];
  if (piVar1 != *(int **)(in_ECX + 0x74)) {
    *(int *)piVar1[1] = *piVar1;
    *(int *)(*piVar1 + 4) = piVar1[1];
                    /* WARNING: Subroutine does not return */
    operator_delete(piVar1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x58));
  (**(code **)*param_1)(1);
  return;
}


/* FUN_00650810 @ 00650810  kind=gamemisc  attributed-by=caller-vote  size=119 */

void FUN_00650810(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_ECX;
  undefined1 local_c [8];
  
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x58));
  puVar2 = param_1;
  piVar1 = (int *)param_1[0x15];
  if (piVar1 != *(int **)(in_ECX + 0x9c)) {
    *(int *)piVar1[1] = *piVar1;
    *(int *)(*piVar1 + 4) = piVar1[1];
                    /* WARNING: Subroutine does not return */
    operator_delete(piVar1);
  }
  puVar3 = (undefined4 *)FUN_00667dd0(local_c,param_1 + 0x13);
  FUN_0067eb10(&param_1,*puVar3,puVar3[1]);
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x58));
  (**(code **)*puVar2)(1);
  return;
}


/* FUN_00650980 @ 00650980  kind=gamemisc  attributed-by=caller-vote  size=71 */

int FUN_00650980(void)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0x4c))();
  if ((int *)in_ECX[0x11] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[0x11] + 4))(in_ECX[0x43],in_ECX[0x44]);
  }
  in_ECX[4] = 0;
  in_ECX[0x12] = 0;
  FUN_00632910(1);
  (**(code **)(*in_ECX + 0x50))();
  return in_ECX[4];
}


/* FUN_00650ae0 @ 00650ae0  kind=gamemisc  attributed-by=caller-vote  size=30 */

void FUN_00650ae0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 200) == 0) {
    FUN_00636560(in_ECX + 0xd4,0);
  }
  return;
}


/* FUN_00650b00 @ 00650b00  kind=gamemisc  attributed-by=caller-vote  size=754 */

void FUN_00650b00(undefined4 *param_1,float param_2,undefined4 param_3,float param_4,char param_5)

{
  int *piVar1;
  ushort ****ppppuVar2;
  undefined4 ****ppppuVar3;
  int iVar4;
  basic_ifstream<char,std::char_traits<char>_> *in_ECX;
  ushort ****ppppuVar5;
  int *piVar6;
  TypeDescriptor *pTVar7;
  uint uStack_80;
  void *local_70 [4];
  int local_60;
  uint local_5c;
  basic_ifstream<char,std::char_traits<char>_> *local_58;
  undefined4 *local_54;
  ushort **local_50;
  ushort ***local_4c;
  undefined4 ***local_48 [4];
  undefined4 local_38;
  uint local_34;
  ushort ***local_30 [4];
  int local_20;
  uint local_1c;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f6660;
  local_10 = ExceptionList;
  uStack_80 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_80;
  ExceptionList = &local_10;
  local_54 = param_1;
  local_50 = (ushort **)0x2f;
  local_58 = in_ECX;
  local_18 = uStack_80;
  ppppuVar2 = (ushort ****)FUN_00639a70(&local_50,0xffffffff,1);
  local_50 = (ushort **)0x5c;
  local_4c = (ushort ***)ppppuVar2;
  local_50 = (ushort **)FUN_00639a70(&local_50,0xffffffff,1);
  ppppuVar5 = (ushort ****)&local_50;
  if ((int)local_50 <= (int)ppppuVar2) {
    ppppuVar5 = &local_4c;
  }
  FUN_0043a450(local_48,(int)*ppppuVar5 + 1,(param_1[4] - (int)*ppppuVar5) + -1);
  piVar1 = *(int **)&in_ECX[1].basic_ifstream<char,std::char_traits<char>_>_data.field_0x24;
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  piVar6 = (int *)*piVar1;
  if (piVar6 != piVar1) {
    do {
      ppppuVar3 = local_48;
      if (7 < local_34) {
        ppppuVar3 = (undefined4 ****)local_48[0];
      }
      iVar4 = FUN_00428db0(0,*(undefined4 *)(piVar6[2] + 0x44),ppppuVar3,local_38);
      if ((((iVar4 == 0) && (iVar4 = piVar6[2], *(float *)(iVar4 + 0x4c) == param_2)) &&
          (*(char *)(iVar4 + 0x54) == (char)param_3)) && (*(float *)(iVar4 + 0x50) == param_4)) {
        if (param_5 == '\0') {
          pTVar7 = &plasma::PlasmaFont::RTTI_Type_Descriptor;
        }
        else {
          pTVar7 = &plasma::PixelFont::RTTI_Type_Descriptor;
        }
        iVar4 = __RTDynamicCast(iVar4,0,&plasma::Font::RTTI_Type_Descriptor,pTVar7,0);
        if (iVar4 != 0) goto LAB_00650cb1;
      }
      piVar6 = (int *)*piVar6;
      param_1 = local_54;
    } while (piVar6 != (int *)*(int *)&in_ECX[1].basic_ifstream<char,std::char_traits<char>_>_data.
                                       field_0x24);
  }
  local_8._0_1_ = 1;
  local_4c = (ushort ***)0x2e;
  iVar4 = FUN_00639a70(&local_4c,0xffffffff,1);
  FUN_0043a450(local_30,iVar4 + 1,(param_1[4] - iVar4) + -1);
  local_4c = (ushort ***)local_30;
  if (7 < local_1c) {
    local_4c = local_30[0];
  }
  local_4c = (ushort ***)((int)local_4c + local_20 * 2);
  ppppuVar5 = local_30;
  if (7 < local_1c) {
    ppppuVar5 = (ushort ****)local_30[0];
  }
  local_8._0_1_ = 2;
  ppppuVar2 = ppppuVar5;
  if (ppppuVar5 != (ushort ****)local_4c) {
    for (; ppppuVar5 != (ushort ****)local_4c; ppppuVar5 = (ushort ****)((int)ppppuVar5 + 2)) {
      iVar4 = toupper((uint)*(ushort *)ppppuVar5);
      *(ushort *)ppppuVar2 = (ushort)iVar4;
      ppppuVar2 = (ushort ****)((int)ppppuVar2 + 2);
    }
  }
  iVar4 = FUN_00428db0(0,local_20,&DAT_0071eb48,3);
  if ((iVar4 == 0) && (param_5 != '\0')) {
    local_5c = 7;
    local_70[0] = (void *)((uint)local_70[0] & 0xffff0000);
    local_60 = iVar4;
    FUN_0040f7a0(&PTR_006fccac,0);
    local_8._0_1_ = 3;
    FUN_006570c0(local_54,param_2,param_3,param_4,local_70);
  }
  else {
    iVar4 = FUN_00428db0(0,local_20,&DAT_0071eb48,3);
    if (iVar4 != 0) {
      std::basic_ifstream<char,std::char_traits<char>_>::
      basic_ifstream<char,std::char_traits<char>_>(local_58,local_54,(int)param_2);
      goto LAB_00650d5d;
    }
    local_5c = 7;
    local_70[0] = (void *)((uint)local_70[0] & 0xffff0000);
    local_60 = iVar4;
    FUN_0040f7a0(&PTR_006fccac,0);
    local_8._0_1_ = 4;
    std::basic_ifstream<char,std::char_traits<char>_>::basic_ifstream<char,std::char_traits<char>_>
              (local_54,(int)param_2,(float)local_70);
  }
  if (7 < local_5c) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_70[0]);
  }
  local_5c = 7;
  local_60 = 0;
  local_70[0] = (void *)((uint)local_70[0] & 0xffff0000);
LAB_00650d5d:
  if (7 < local_1c) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_30[0]);
  }
  local_1c = 7;
  local_20 = 0;
  local_30[0] = (ushort ***)((uint)local_30[0] & 0xffff0000);
LAB_00650cb1:
  if (7 < local_34) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_48[0]);
  }
  FUN_00650e0b();
  return;
}


/* FUN_00650e0b @ 00650e0b  kind=gamemisc  attributed-by=caller-vote  size=30 */

void FUN_00650e0b(void)

{
  uint unaff_EBP;
  undefined4 uStack0000000c;
  
  ExceptionList = *(void **)(unaff_EBP - 0xc);
  uStack0000000c = 0x650e23;
  __security_check_cookie(*(uint *)(unaff_EBP - 0x14) ^ unaff_EBP);
  return;
}


/* FUN_006526b0 @ 006526b0  kind=gamemisc  attributed-by=caller-vote  size=84 */

void FUN_006526b0(void)

{
  int *piVar1;
  int in_ECX;
  int *piVar2;
  undefined4 local_8;
  
  FUN_00635700();
  piVar2 = (int *)**(int **)(in_ECX + 0x7c);
  if (piVar2 != *(int **)(in_ECX + 0x7c)) {
    local_8 = 0;
    do {
      (**(code **)(*(int *)piVar2[2] + 0x1c))();
      piVar1 = (int *)FUN_00468910(&local_8);
      if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar1)();
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*(int *)(in_ECX + 0x7c));
  }
  return;
}


/* FUN_006527f0 @ 006527f0  kind=gamemisc  attributed-by=caller-vote  size=336 */

void FUN_006527f0(void)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int in_ECX;
  int local_8;
  
  iVar4 = *(int *)(in_ECX + 200);
  *(uint *)(in_ECX + 0xf4) = *(uint *)(in_ECX + 0xf4) | 1;
  local_8 = in_ECX;
  if (iVar4 == 0) {
    iVar4 = FUN_00636560(in_ECX + 0xd4,0);
    if (iVar4 != 0) goto LAB_00652822;
  }
  else {
LAB_00652822:
    iVar1 = *(int *)(iVar4 + 0x44);
    if (((iVar1 != 0) && ((*(uint *)(iVar1 + 0x128) >> 5 & 1) != 0)) &&
       (*(char *)(iVar1 + 0x15c) != '\0')) {
      *(int *)(in_ECX + 0xfc) = iVar1;
      FUN_0064ef70(*(undefined4 *)(in_ECX + 0xb4),&LAB_0064e22c,0);
      goto LAB_00652865;
    }
  }
  *(undefined4 *)(in_ECX + 0xfc) = 0;
LAB_00652865:
  if (*(int *)(in_ECX + 0xd0) != 0) {
    cVar3 = FUN_006326a0(iVar4);
    if (cVar3 == '\0') {
      FUN_00653360(0,0);
    }
  }
  if ((iVar4 == 0) || (*(int *)(iVar4 + 0x40) != *(int *)(in_ECX + 0xcc))) {
    if (*(int *)(in_ECX + 0xcc) != 0) {
      *(undefined1 *)(*(int *)(in_ECX + 0xcc) + 0x134) = 1;
      FUN_00653620(*(undefined4 *)(*(int *)(in_ECX + 0xcc) + 0x148),0x13);
    }
    *(undefined4 *)(in_ECX + 0xcc) = 0;
  }
  if (iVar4 != 0) {
    piVar5 = *(int **)(iVar4 + 0x44);
    if ((piVar5 != (int *)0x0) && ((char)piVar5[0x57] != '\0')) {
      (**(code **)(*piVar5 + 0x2c))();
    }
    if (((~(byte)(*(uint *)(iVar4 + 200) >> 1) & 1) != 0) &&
       (iVar4 = *(int *)(iVar4 + 0x44), iVar4 != 0)) {
      local_8 = 2;
      piVar5 = (int *)FUN_00468910(&local_8);
      puVar2 = (undefined4 *)*piVar5;
      if ((puVar2 != (undefined4 *)0x0) &&
         ((*(char *)(iVar4 + 0x15c) != '\0' || (*(char *)(puVar2 + 1) == '\0')))) {
        (**(code **)*puVar2)();
      }
    }
  }
  FUN_0064ef70(*(undefined4 *)(in_ECX + 0xb4),&LAB_0064e231,0);
  return;
}


/* FUN_00652940 @ 00652940  kind=gamemisc  attributed-by=caller-vote  size=295 */

void FUN_00652940(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int in_ECX;
  int local_8;
  
  iVar3 = *(int *)(in_ECX + 200);
  *(uint *)(in_ECX + 0xf4) = *(uint *)(in_ECX + 0xf4) & 0xfffffffe;
  local_8 = in_ECX;
  if (iVar3 == 0) {
    iVar3 = FUN_00636560(in_ECX + 0xd4,0);
  }
  if ((*(int *)(in_ECX + 0xd0) != 0) && (*(int *)(in_ECX + 0xfc) != 0)) {
    FUN_00653360(0,0);
  }
  if (iVar3 != 0) {
    piVar4 = *(int **)(iVar3 + 0x44);
    if ((piVar4 != (int *)0x0) && ((char)piVar4[0x57] != '\0')) {
      (**(code **)(*piVar4 + 0x30))();
    }
    if (((~(byte)(*(uint *)(iVar3 + 200) >> 1) & 1) != 0) &&
       (iVar3 = *(int *)(iVar3 + 0x44), iVar3 != 0)) {
      local_8 = 3;
      piVar4 = (int *)FUN_00468910(&local_8);
      puVar1 = (undefined4 *)*piVar4;
      if ((puVar1 != (undefined4 *)0x0) &&
         ((*(char *)(iVar3 + 0x15c) != '\0' || (*(char *)(puVar1 + 1) == '\0')))) {
        (**(code **)*puVar1)();
      }
    }
  }
  iVar3 = *(int *)(in_ECX + 200);
  if (iVar3 == 0) {
    iVar3 = FUN_00636560(in_ECX + 0xd4,0);
    if (iVar3 == 0) goto LAB_00652a4d;
  }
  iVar5 = FUN_00636560(in_ECX + 0xd4,0);
  if (iVar5 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = *(int **)(iVar5 + 0x44);
  }
  piVar2 = *(int **)(iVar3 + 0x44);
  if (piVar2 != piVar4) {
    if ((piVar2 != (int *)0x0) && ((char)piVar2[0x57] != '\0')) {
      (**(code **)(*piVar2 + 0x5c))();
    }
    FUN_00653620(iVar3,0xe);
  }
LAB_00652a4d:
  FUN_0064ef70(*(undefined4 *)(in_ECX + 0xb4),&LAB_0064e236,0);
  return;
}


/* FUN_00652a70 @ 00652a70  kind=gamemisc  attributed-by=caller-vote  size=228 */

void FUN_00652a70(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  int local_8;
  
  iVar2 = *(int *)(in_ECX + 200);
  *(uint *)(in_ECX + 0xf4) = *(uint *)(in_ECX + 0xf4) | 2;
  local_8 = in_ECX;
  if (iVar2 == 0) {
    iVar2 = FUN_00636560(in_ECX + 0xd4,0);
    if (iVar2 != 0) goto LAB_00652aa2;
  }
  else {
LAB_00652aa2:
    if (*(int *)(iVar2 + 0x40) == *(int *)(in_ECX + 0xcc)) goto LAB_00652add;
  }
  if (*(int *)(in_ECX + 0xcc) != 0) {
    *(undefined1 *)(*(int *)(in_ECX + 0xcc) + 0x134) = 1;
    FUN_00653620(*(undefined4 *)(*(int *)(in_ECX + 0xcc) + 0x148),0x13);
  }
  *(undefined4 *)(in_ECX + 0xcc) = 0;
LAB_00652add:
  if (iVar2 != 0) {
    piVar3 = *(int **)(iVar2 + 0x44);
    if ((piVar3 != (int *)0x0) && ((char)piVar3[0x57] != '\0')) {
      (**(code **)(*piVar3 + 0x38))();
    }
    if (((~(byte)(*(uint *)(iVar2 + 200) >> 1) & 1) != 0) &&
       (iVar2 = *(int *)(iVar2 + 0x44), iVar2 != 0)) {
      local_8 = 5;
      piVar3 = (int *)FUN_00468910(&local_8);
      puVar1 = (undefined4 *)*piVar3;
      if ((puVar1 != (undefined4 *)0x0) &&
         ((*(char *)(iVar2 + 0x15c) != '\0' || (*(char *)(puVar1 + 1) == '\0')))) {
        (**(code **)*puVar1)();
      }
    }
  }
  FUN_0064ef70(*(undefined4 *)(in_ECX + 0xb4),&LAB_0064e23b,0);
  return;
}


/* FUN_00652b60 @ 00652b60  kind=gamemisc  attributed-by=caller-vote  size=165 */

void FUN_00652b60(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  int local_8;
  
  iVar2 = *(int *)(in_ECX + 200);
  *(uint *)(in_ECX + 0xf4) = *(uint *)(in_ECX + 0xf4) & 0xfffffffd;
  local_8 = in_ECX;
  if (iVar2 == 0) {
    iVar2 = FUN_00636560(in_ECX + 0xd4,0);
    if (iVar2 == 0) goto LAB_00652beb;
  }
  piVar3 = *(int **)(iVar2 + 0x44);
  if ((piVar3 != (int *)0x0) && ((char)piVar3[0x57] != '\0')) {
    (**(code **)(*piVar3 + 0x3c))();
  }
  if (((~(byte)(*(uint *)(iVar2 + 200) >> 1) & 1) != 0) &&
     (iVar2 = *(int *)(iVar2 + 0x44), iVar2 != 0)) {
    local_8 = 6;
    piVar3 = (int *)FUN_00468910(&local_8);
    puVar1 = (undefined4 *)*piVar3;
    if ((puVar1 != (undefined4 *)0x0) &&
       ((*(char *)(iVar2 + 0x15c) != '\0' || (*(char *)(puVar1 + 1) == '\0')))) {
      (**(code **)*puVar1)();
    }
  }
LAB_00652beb:
  FUN_0064ef70(*(undefined4 *)(in_ECX + 0xb4),&LAB_0064e243,0);
  return;
}


/* FUN_00652c10 @ 00652c10  kind=gamemisc  attributed-by=caller-vote  size=450 */

void FUN_00652c10(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int in_ECX;
  int *piVar5;
  
  *(undefined4 *)(in_ECX + 0xdc) = *(undefined4 *)(in_ECX + 0xd4);
  *(undefined4 *)(in_ECX + 0xe0) = *(undefined4 *)(in_ECX + 0xd8);
  iVar3 = *(int *)(in_ECX + 200);
  *(undefined4 *)(in_ECX + 0xd4) = param_1;
  *(int *)(in_ECX + 0xd8) = param_2;
  if (iVar3 == 0) {
    iVar3 = FUN_00636560((undefined4 *)(in_ECX + 0xd4),0);
  }
  if (*(int *)(in_ECX + 0xc4) == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = *(int **)(*(int *)(in_ECX + 0xc4) + 0x44);
  }
  if (iVar3 == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = *(int **)(iVar3 + 0x44);
  }
  if (piVar4 != piVar5) {
    if ((piVar4 != (int *)0x0) && ((char)piVar4[0x57] != '\0')) {
      (**(code **)(*piVar4 + 0x5c))();
    }
    iVar1 = *(int *)(in_ECX + 0xc4);
    if (((iVar1 != 0) && ((~(byte)(*(uint *)(iVar1 + 200) >> 1) & 1) != 0)) &&
       (param_2 = *(int *)(iVar1 + 0x44), param_2 != 0)) {
      param_1 = 0xe;
      piVar4 = (int *)FUN_00468910(&param_1);
      puVar2 = (undefined4 *)*piVar4;
      if ((puVar2 != (undefined4 *)0x0) &&
         ((*(char *)(param_2 + 0x15c) != '\0' || (*(char *)(puVar2 + 1) == '\0')))) {
        (**(code **)*puVar2)();
      }
    }
    if ((piVar5 != (int *)0x0) && ((char)piVar5[0x57] != '\0')) {
      (**(code **)(*piVar5 + 0x58))();
    }
    if (iVar3 == 0) goto LAB_00652db1;
    if (((~(byte)(*(uint *)(iVar3 + 200) >> 1) & 1) != 0) &&
       (param_2 = *(int *)(iVar3 + 0x44), param_2 != 0)) {
      param_1 = 0xd;
      piVar4 = (int *)FUN_00468910(&param_1);
      puVar2 = (undefined4 *)*piVar4;
      if ((puVar2 != (undefined4 *)0x0) &&
         ((*(char *)(param_2 + 0x15c) != '\0' || (*(char *)(puVar2 + 1) == '\0')))) {
        (**(code **)*puVar2)();
      }
    }
  }
  if (iVar3 != 0) {
    if ((piVar5 != (int *)0x0) && ((char)piVar5[0x57] != '\0')) {
      (**(code **)(*piVar5 + 0x54))();
    }
    if (((~(byte)(*(uint *)(iVar3 + 200) >> 1) & 1) != 0) &&
       (iVar1 = *(int *)(iVar3 + 0x44), iVar1 != 0)) {
      param_1 = 0xc;
      piVar4 = (int *)FUN_00468910(&param_1);
      puVar2 = (undefined4 *)*piVar4;
      if ((puVar2 != (undefined4 *)0x0) &&
         ((*(char *)(iVar1 + 0x15c) != '\0' || (*(char *)(puVar2 + 1) == '\0')))) {
        (**(code **)*puVar2)();
      }
    }
  }
LAB_00652db1:
  *(int *)(in_ECX + 0xc4) = iVar3;
  FUN_0064ef70(*(undefined4 *)(in_ECX + 0xb4),&LAB_0064e24b,0);
  return;
}


/* FUN_006536d0 @ 006536d0  kind=gamemisc  attributed-by=caller-vote  size=67 */

void FUN_006536d0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  iVar2 = FUN_0064b4c0(iVar1,*(undefined4 *)(iVar1 + 4),param_1);
  if (in_ECX[1] == 0x4924923) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  in_ECX[1] = in_ECX[1] + 1;
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}


/* FUN_00653720 @ 00653720  kind=gamemisc  attributed-by=caller-vote  size=67 */

void FUN_00653720(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  iVar2 = FUN_0064b3d0(iVar1,*(undefined4 *)(iVar1 + 4),param_1);
  if (in_ECX[1] == 0x3c3c3c2) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  in_ECX[1] = in_ECX[1] + 1;
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}


/* FUN_00653770 @ 00653770  kind=gamemisc  attributed-by=caller-vote  size=847 */

void FUN_00653770(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5)

{
  char cVar1;
  undefined4 uVar2;
  basic_ostream<wchar_t,std::char_traits<wchar_t>_> *this;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  code *pcVar6;
  undefined4 ******ppppppuVar7;
  undefined4 ******ppppppuVar8;
  _func_basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_>_ptr_basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_>_ptr
  *p_Var9;
  basic_ios<char,std::char_traits<char>_> local_110 [8];
  int local_b0;
  undefined1 local_a0 [92];
  void *local_44 [4];
  undefined4 local_34;
  basic_ifstream<char,std::char_traits<char>_>_vftable *local_30;
  undefined4 *****local_2c [4];
  int local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f67f6;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_a0._76_4_ = param_2;
  local_a0._72_4_ = param_5;
  p_Var9 = endl_exref;
  uVar2 = FUN_0040e440(wcout_exref,"read ",param_1,endl_exref,local_14);
  this = (basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)FUN_00424ba0(uVar2);
  std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<(this,p_Var9);
  local_a0._84_4_ = 0x2f;
  iVar3 = FUN_00639a70(local_a0 + 0x54,0xffffffff,1);
  local_a0._84_4_ = 0x5c;
  local_a0._88_4_ = iVar3;
  local_a0._84_4_ = FUN_00639a70(local_a0 + 0x54,0xffffffff,1);
  puVar4 = (undefined4 *)(local_a0 + 0x54);
  if ((int)local_a0._84_4_ <= iVar3) {
    puVar4 = (undefined4 *)(local_a0 + 0x58);
  }
  uVar2 = *puVar4;
  puVar4 = param_1;
  if (7 < (uint)param_1[5]) {
    puVar4 = (undefined4 *)*param_1;
  }
  FUN_0064ced0(local_110,puVar4,0x20,0x40,1);
  local_8 = 0;
  if (local_b0 == 0) goto LAB_00653a8e;
  FUN_0043a450(local_44,0,uVar2);
  uVar2 = local_a0._80_4_;
  local_a0._88_4_ = **(int **)(local_a0._80_4_ + 0x13c);
  local_8._0_1_ = 1;
  iVar5 = FUN_004521c0(local_a0._88_4_,*(undefined4 *)(local_a0._88_4_ + 4),local_44);
  iVar3 = *(int *)(uVar2 + 0x140);
  if (iVar3 == 0x7fffffe) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  *(int *)(uVar2 + 0x140) = iVar3 + 1;
  *(int *)(local_a0._88_4_ + 4) = iVar5;
  **(int **)(iVar5 + 4) = iVar5;
  local_a0._88_4_ = 0x2e;
  iVar3 = FUN_00639a70(local_a0 + 0x58,0xffffffff,1);
  pcVar6 = (code *)((param_1[4] - iVar3) + -1);
  FUN_0043a450(local_2c,iVar3 + 1,pcVar6);
  ppppppuVar7 = local_2c;
  if (7 < local_18) {
    ppppppuVar7 = (undefined4 ******)local_2c[0];
  }
  ppppppuVar7 = (undefined4 ******)((int)ppppppuVar7 + local_1c * 2);
  ppppppuVar8 = local_2c;
  if (7 < local_18) {
    ppppppuVar8 = (undefined4 ******)local_2c[0];
  }
  local_8 = CONCAT31(local_8._1_3_,2);
  if (ppppppuVar8 != ppppppuVar7) {
    pcVar6 = toupper_exref;
    FUN_0064bdf0(local_a0 + 0x58,ppppppuVar8,ppppppuVar7,ppppppuVar8,toupper_exref);
  }
  std::basic_istream<char,std::char_traits<char>_>::seekg
            ((basic_istream<char,std::char_traits<char>_> *)local_110,0,0,0,0,0,pcVar6);
  iVar3 = FUN_00428db0(0,local_1c,&DAT_0071eb80,3);
  if (iVar3 == 0) {
    FUN_006555d0(local_110,local_a0._76_4_,param_3,param_4);
LAB_00653a18:
    iVar3 = FUN_0040c4c0();
    if (iVar3 == 0) {
      std::basic_ios<char,std::char_traits<char>_>::setstate
                ((basic_ios<char,std::char_traits<char>_> *)
                 (&local_110[0].ios_base.field_0x0 + *(int *)(local_110[0].ios_base._0_4_ + 4)),2,
                 false);
    }
  }
  else {
    iVar3 = FUN_00428db0(0,local_1c,&DAT_0071eb88,3);
    if (((iVar3 == 0) || (cVar1 = FUN_00439190(local_2c,&DAT_0071eb90), cVar1 != '\0')) ||
       (cVar1 = FUN_00439190(local_2c,&DAT_0071eb98), cVar1 != '\0')) {
      if (param_4 == 0) {
        param_4 = local_a0._80_4_ + 0x14;
      }
      FUN_006816c0(local_a0._80_4_,param_4,local_a0._76_4_,param_3,local_110,local_a0._72_4_);
      local_8._0_1_ = 3;
      FUN_00681c70();
      local_8 = CONCAT31(local_8._1_3_,2);
      FUN_0064de80();
      goto LAB_00653a18;
    }
    FUN_0046fa90();
  }
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  local_18 = 7;
  local_1c = 0;
  local_2c[0] = (undefined4 *****)((uint)local_2c[0] & 0xffff0000);
  if ((basic_ifstream<char,std::char_traits<char>_>_vftable *)0x7 < local_30) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_44[0]);
  }
  local_30 = (basic_ifstream<char,std::char_traits<char>_>_vftable *)0x7;
  local_34 = 0;
  local_44[0] = (void *)((uint)local_44[0] & 0xffff0000);
LAB_00653a8e:
  std::basic_ifstream<char,std::char_traits<char>_>::basic_ifstream<char,std::char_traits<char>_>
            ((basic_ifstream<char,std::char_traits<char>_> *)local_a0);
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
            ((basic_ios<char,std::char_traits<char>_> *)local_a0);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00653ad0 @ 00653ad0  kind=gamemisc  attributed-by=caller-vote  size=1307 */

void FUN_00653ad0(basic_istream<char,std::char_traits<char>_> *param_1,undefined4 param_2,
                 undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  uint *puVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  char local_11c [4];
  char local_118 [4];
  undefined8 local_114;
  char local_fc [4];
  char local_f8 [4];
  char local_f4 [4];
  uint local_f0;
  int iStack_ec;
  int local_c0;
  int local_bc;
  uint local_b8;
  undefined4 local_b4;
  uint local_b0;
  int local_ac;
  uint local_a8;
  undefined4 local_a4;
  int local_a0;
  int local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  int local_6c;
  undefined4 local_68;
  undefined4 local_64;
  uint local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f6838;
  local_10 = ExceptionList;
  uVar4 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_64 = param_2;
  local_98 = param_3;
  local_14 = uVar4;
  std::basic_istream<char,std::char_traits<char>_>::read
            (param_1,(char *)&local_60,(ulonglong)uVar4 << 0x20);
  puVar5 = (undefined8 *)std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
  uVar1 = *puVar5;
  uVar2 = puVar5[1];
  local_90._4_4_ = (int)((ulonglong)uVar1 >> 0x20);
  local_80 = puVar5[2];
  local_90._0_4_ = (uint)uVar1;
  local_88._4_4_ = (int)((ulonglong)uVar2 >> 0x20);
  local_68 = 0;
  local_88._0_4_ = (uint)uVar2;
  local_a0 = (uint)local_88 + (uint)local_90 + local_60;
  local_60 = local_88._4_4_ +
             local_90._4_4_ + ((int)local_60 >> 0x1f) + (uint)CARRY4((uint)local_90,local_60) +
             (uint)CARRY4((uint)local_88,(uint)local_90 + local_60);
  local_90 = uVar1;
  local_88 = uVar2;
  uVar3 = local_60;
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          puVar6 = (uint *)std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
          if (((puVar6[2] + *puVar6 == local_a0) &&
              (puVar6[3] + puVar6[1] + (uint)CARRY4(puVar6[2],*puVar6) == uVar3)) ||
             ((*(byte *)((int)&param_1[3].vbtablePtr +
                        param_1->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset) & 1) !=
              0)) {
            ExceptionList = local_10;
            __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
            return;
          }
          std::basic_istream<char,std::char_traits<char>_>::read
                    (param_1,(char *)&local_ac,(ulonglong)uVar4 << 0x20);
          if (local_ac != 1) break;
          std::basic_istream<char,std::char_traits<char>_>::read
                    (param_1,local_118,(ulonglong)uVar4 << 0x20);
          std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
          std::basic_istream<char,std::char_traits<char>_>::read
                    (param_1,(char *)&local_9c,(ulonglong)uVar4 << 0x20);
          local_6c = local_9c;
          uVar7 = FUN_0064dfb0(&local_6c);
          uVar7 = FUN_006089c0(local_2c,uVar7);
          local_8 = 0;
          local_68 = FUN_006619a0(uVar7);
          local_8 = 0xffffffff;
          if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
            operator_delete(local_2c[0]);
          }
          local_18 = 7;
          local_1c = 0;
          local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
        }
        if (local_ac != 2) break;
        std::basic_istream<char,std::char_traits<char>_>::read
                  (param_1,(char *)&local_b8,(ulonglong)uVar4 << 0x20);
        uVar3 = local_b8;
        iVar9 = (int)local_b8 >> 0x1f;
        puVar5 = (undefined8 *)std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
        uVar1 = *puVar5;
        uVar2 = puVar5[1];
        local_90._4_4_ = (int)((ulonglong)uVar1 >> 0x20);
        local_80 = puVar5[2];
        local_90._0_4_ = (uint)uVar1;
        uVar8 = (uint)local_90 + uVar3;
        local_88._4_4_ = (int)((ulonglong)uVar2 >> 0x20);
        local_70 = 0;
        local_88._0_4_ = (uint)uVar2;
        local_c0 = (uint)local_88 + uVar8;
        iVar9 = local_88._4_4_ + local_90._4_4_ + iVar9 + (uint)CARRY4((uint)local_90,uVar3) +
                (uint)CARRY4((uint)local_88,uVar8);
        local_74 = 0;
        local_78 = 0;
        local_90 = uVar1;
        local_88 = uVar2;
        local_6c = iVar9;
        while( true ) {
          puVar6 = (uint *)std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
          if (((puVar6[2] + *puVar6 == local_c0) &&
              (puVar6[3] + puVar6[1] + (uint)CARRY4(puVar6[2],*puVar6) == iVar9)) ||
             ((*(byte *)((int)&param_1[3].vbtablePtr +
                        param_1->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset) & 1) !=
              0)) break;
          std::basic_istream<char,std::char_traits<char>_>::read
                    (param_1,(char *)&local_bc,(ulonglong)uVar4 << 0x20);
          if (local_bc == 1) {
            std::basic_istream<char,std::char_traits<char>_>::read
                      (param_1,local_f4,(ulonglong)uVar4 << 0x20);
            std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
            std::basic_istream<char,std::char_traits<char>_>::read
                      (param_1,(char *)&local_94,(ulonglong)uVar4 << 0x20);
            local_70 = local_94;
          }
          else if (local_bc == 2) {
            std::basic_istream<char,std::char_traits<char>_>::read
                      (param_1,local_fc,(ulonglong)uVar4 << 0x20);
            std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
            std::basic_istream<char,std::char_traits<char>_>::read
                      (param_1,(char *)&local_b4,(ulonglong)uVar4 << 0x20);
            local_74 = local_b4;
          }
          else if (local_bc == 3) {
            std::basic_istream<char,std::char_traits<char>_>::read
                      (param_1,local_f8,(ulonglong)uVar4 << 0x20);
            std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
            std::basic_istream<char,std::char_traits<char>_>::read
                      (param_1,(char *)&local_a4,(ulonglong)uVar4 << 0x20);
            local_78 = local_a4;
          }
          else {
            std::basic_istream<char,std::char_traits<char>_>::read
                      (param_1,(char *)&local_a8,(ulonglong)uVar4 << 0x20);
            uVar3 = local_a8;
            iVar10 = (int)local_a8 >> 0x1f;
            puVar5 = (undefined8 *)std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
            local_f0 = (uint)*puVar5;
            iVar9 = local_f0 + uVar3;
            iStack_ec = (int)((ulonglong)*puVar5 >> 0x20);
            iVar10 = iStack_ec + iVar10 + (uint)CARRY4(local_f0,uVar3);
            _local_f0 = CONCAT44(iVar10,iVar9);
            std::basic_istream<char,std::char_traits<char>_>::seekg
                      (param_1,iVar9,iVar10,puVar5[1],(int)puVar5[2],
                       (int)((ulonglong)puVar5[2] >> 0x20));
            iVar9 = local_6c;
          }
        }
        FUN_006779e0();
        uVar3 = local_60;
      }
      if (local_ac == 3) break;
      std::basic_istream<char,std::char_traits<char>_>::read
                (param_1,(char *)&local_b0,(ulonglong)uVar4 << 0x20);
      uVar3 = local_b0;
      iVar9 = (int)local_b0 >> 0x1f;
      puVar5 = (undefined8 *)std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
      local_114._0_4_ = (uint)*puVar5;
      local_114._4_4_ = (int)((ulonglong)*puVar5 >> 0x20);
      local_114 = CONCAT44(local_114._4_4_ + iVar9 + (uint)CARRY4((uint)local_114,uVar3),
                           (uint)local_114 + uVar3);
      std::basic_istream<char,std::char_traits<char>_>::seekg
                (param_1,local_114,puVar5[1],(int)puVar5[2],(int)((ulonglong)puVar5[2] >> 0x20));
      uVar3 = local_60;
    }
    std::basic_istream<char,std::char_traits<char>_>::read
              (param_1,local_11c,(ulonglong)uVar4 << 0x20);
    std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
    FUN_00658530(local_44,param_1);
    local_8 = 1;
    uVar7 = FUN_006089c0(local_5c);
    local_8 = CONCAT31(local_8._1_3_,2);
    local_68 = FUN_006619a0(uVar7);
    if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_5c[0]);
    }
    local_48 = 7;
    local_4c = 0;
    local_5c[0] = (void *)((uint)local_5c[0] & 0xffff0000);
    local_8 = 0xffffffff;
    if (0xf < local_30) break;
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(local_44[0]);
}


/* FUN_00654000 @ 00654000  kind=gamemisc  attributed-by=caller-vote  size=566 */

Button * FUN_00654000(Button *param_1)

{
  undefined8 uVar1;
  basic_istream<char,std::char_traits<char>_> *this;
  uint uVar2;
  char cVar3;
  uint uVar4;
  undefined8 *puVar5;
  Button *this_00;
  uint *puVar6;
  int iVar7;
  bool bVar8;
  char local_5c [4];
  undefined4 local_58;
  undefined4 local_48;
  uint local_44;
  uint local_40;
  int local_3c;
  undefined4 local_38;
  undefined8 local_34;
  undefined8 local_2c;
  undefined8 local_24;
  int local_1c;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  this = (basic_istream<char,std::char_traits<char>_> *)param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f6873;
  local_10 = ExceptionList;
  uVar4 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  std::basic_istream<char,std::char_traits<char>_>::read
            ((basic_istream<char,std::char_traits<char>_> *)param_1,(char *)&local_14,
             (ulonglong)uVar4 << 0x20);
  iVar7 = (int)local_14 >> 0x1f;
  puVar5 = (undefined8 *)
           std::basic_istream<char,std::char_traits<char>_>::tellg
                     ((basic_istream<char,std::char_traits<char>_> *)param_1);
  uVar1 = *puVar5;
  local_2c = puVar5[1];
  local_24 = puVar5[2];
  local_34._0_4_ = (uint)uVar1;
  bVar8 = CARRY4((uint)local_34,local_14);
  local_14 = (uint)local_34 + local_14;
  local_34._4_4_ = (int)((ulonglong)uVar1 >> 0x20);
  local_18 = local_34._4_4_ + iVar7 + (uint)bVar8;
  local_44 = 7;
  local_48 = 0;
  local_58 = (void *)((uint)local_58._2_2_ << 0x10);
  local_34 = uVar1;
  FUN_0040f7a0(&PTR_006fccac,0);
  local_8 = 0;
  this_00 = operator_new(0x238);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (this_00 == (Button *)0x0) {
    param_1 = (Button *)0x0;
  }
  else {
    param_1 = plasma::Button::Button(this_00,local_1c,0,0,&local_58);
  }
  local_8 = 0xffffffff;
  if (7 < local_44) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_58);
  }
  local_58 = (void *)((uint)local_58 & 0xffff0000);
  bVar8 = CARRY4((uint)local_2c,local_14);
  local_14 = (uint)local_2c + local_14;
  local_44 = 7;
  local_3c = local_2c._4_4_ + local_18 + (uint)bVar8;
  local_48 = 0;
  iVar7 = local_3c;
  while( true ) {
    puVar6 = (uint *)std::basic_istream<char,std::char_traits<char>_>::tellg(this);
    if (((puVar6[2] + *puVar6 == local_14) &&
        (puVar6[3] + puVar6[1] + (uint)CARRY4(puVar6[2],*puVar6) == iVar7)) ||
       ((*(byte *)((int)&this[3].vbtablePtr +
                  this->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset) & 1) != 0))
    break;
    std::basic_istream<char,std::char_traits<char>_>::read
              (this,(char *)&local_18,(ulonglong)uVar4 << 0x20);
    if (local_18 == 0xf) {
      std::basic_istream<char,std::char_traits<char>_>::read(this,local_5c,(ulonglong)uVar4 << 0x20)
      ;
      std::basic_istream<char,std::char_traits<char>_>::tellg(this);
      std::basic_istream<char,std::char_traits<char>_>::read
                (this,(char *)&local_38,(ulonglong)uVar4 << 0x20);
      (param_1->Button_data).offset_0xcc = local_38;
    }
    else {
      cVar3 = FUN_00659940();
      if (cVar3 == '\0') {
        std::basic_istream<char,std::char_traits<char>_>::read
                  (this,(char *)&local_40,(ulonglong)uVar4 << 0x20);
        uVar2 = local_40;
        iVar7 = (int)local_40 >> 0x1f;
        puVar5 = (undefined8 *)std::basic_istream<char,std::char_traits<char>_>::tellg(this);
        local_34._0_4_ = (uint)*puVar5;
        local_34._4_4_ = (int)((ulonglong)*puVar5 >> 0x20);
        local_34 = CONCAT44(local_34._4_4_ + iVar7 + (uint)CARRY4((uint)local_34,uVar2),
                            (uint)local_34 + uVar2);
        std::basic_istream<char,std::char_traits<char>_>::seekg
                  (this,local_34,puVar5[1],(int)puVar5[2],(int)((ulonglong)puVar5[2] >> 0x20));
        iVar7 = local_3c;
      }
    }
  }
  ExceptionList = local_10;
  return param_1;
}


/* FUN_00654240 @ 00654240  kind=gamemisc  attributed-by=caller-vote  size=1155 */

void FUN_00654240(basic_istream<char,std::char_traits<char>_> *param_1,undefined4 param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong *puVar4;
  int *extraout_EAX;
  uint *puVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined8 *puVar8;
  int iVar9;
  int *piVar10;
  ContinuousAttribute<plasma::Vector<3,float>_> *pCVar11;
  undefined1 local_14c [24];
  undefined1 local_134 [24];
  undefined1 local_11c [24];
  undefined1 local_104 [24];
  undefined1 local_ec [24];
  undefined1 local_d4 [24];
  undefined8 local_bc;
  undefined4 local_a4;
  undefined4 local_94;
  uint local_90;
  int local_8c;
  int local_88;
  int local_84;
  uint local_80;
  int local_7c;
  uint local_78;
  char *local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int *local_64;
  int local_60;
  ContinuousAttribute<plasma::Vector<3,float>_> *local_5c;
  int local_58;
  uint local_54;
  undefined4 local_50;
  uint local_4c;
  int *local_48;
  void *local_44 [5];
  uint local_30;
  undefined8 local_2c;
  undefined8 local_24;
  undefined8 local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f68ce;
  local_10 = ExceptionList;
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_50 = param_2;
  local_14 = uVar3;
  std::basic_istream<char,std::char_traits<char>_>::read
            (param_1,(char *)&local_54,(ulonglong)uVar3 << 0x20);
  puVar4 = (ulonglong *)std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
  uVar1 = *puVar4;
  local_24 = puVar4[1];
  local_1c = puVar4[2];
  local_2c._0_4_ = (void *)uVar1;
  local_4c = (int)(void *)local_2c + local_54;
  local_2c._4_4_ = (int)(uVar1 >> 0x20);
  local_58 = local_2c._4_4_ + ((int)local_54 >> 0x1f) +
             (uint)CARRY4((uint)(void *)local_2c,local_54);
  local_90 = 7;
  local_94 = 0;
  local_a4 = (void *)((uint)local_a4._2_2_ << 0x10);
  local_2c = uVar1;
  FUN_0040f7a0(&PTR_006fccac,0);
  local_8 = 0;
  local_5c = operator_new(0x3f8);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (local_5c == (ContinuousAttribute<plasma::Vector<3,float>_> *)0x0) {
    local_64 = (int *)0x0;
  }
  else {
    plasma::ContinuousAttribute<plasma::Vector<3,float>_>::
    ContinuousAttribute<plasma::Vector<3,float>_>(local_5c,local_48,&local_a4);
    local_64 = extraout_EAX;
  }
  if (7 < local_90) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_a4);
  }
  local_90 = 7;
  local_94 = 0;
  local_a4 = (void *)((uint)local_a4 & 0xffff0000);
  local_74 = (char *)0x0;
  local_70 = 0;
  local_6c = 0;
  local_60 = local_64[0xe2];
  local_68 = CONCAT31(local_68._1_3_,(char)local_64[0xe0]);
  local_48 = (int *)local_64[0xe1];
  local_54 = local_64[0xe3];
  local_7c = (uint)local_24 + local_4c;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  local_5c = (ContinuousAttribute<plasma::Vector<3,float>_> *)
             (local_24._4_4_ + local_58 + (uint)CARRY4((uint)local_24,local_4c));
  piVar10 = local_64;
  pCVar11 = local_5c;
  do {
    puVar5 = (uint *)std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
    if (((puVar5[2] + *puVar5 == local_7c) &&
        ((ContinuousAttribute<plasma::Vector<3,float>_> *)
         (puVar5[3] + puVar5[1] + (uint)CARRY4(puVar5[2],*puVar5)) == pCVar11)) ||
       ((*(byte *)((int)&param_1[3].vbtablePtr +
                  param_1->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset) & 1) != 0)) {
      FUN_0067bd40(&local_74);
      FUN_0067bd10(local_60);
      FUN_0067bd00(local_68);
      piVar10[0xe1] = (int)local_48;
      FUN_0067bcc0(local_54);
      (**(code **)(*piVar10 + 4))(1);
      if (local_74 != (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_74);
      }
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
    std::basic_istream<char,std::char_traits<char>_>::read
              (param_1,(char *)&local_58,(ulonglong)uVar3 << 0x20);
    switch(local_58) {
    case 1:
      FUN_00650a20(local_ec,param_1);
      uVar6 = FUN_00658530(local_44);
      local_8._0_1_ = 3;
      piVar7 = (int *)FUN_006089c0(&local_2c,uVar6);
      local_8._0_1_ = 4;
      if (piVar10 + 3 != piVar7) {
        FUN_0040f680();
      }
      if (7 < local_1c._4_4_) {
                    /* WARNING: Subroutine does not return */
        operator_delete((void *)local_2c);
      }
      local_1c = 0x700000000;
      local_2c = local_2c & 0xffffffffffff0000;
      local_8._0_1_ = 2;
      if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_44[0]);
      }
      break;
    case 2:
      FUN_00650a20(local_14c,param_1);
      std::basic_istream<char,std::char_traits<char>_>::read
                (param_1,(char *)&local_4c,(ulonglong)uVar3 << 0x20);
      if (0 < (int)local_4c) {
        FUN_0040d9d0(local_4c);
        std::basic_istream<char,std::char_traits<char>_>::read
                  (param_1,local_74,(ulonglong)uVar3 << 0x20);
      }
      break;
    case 3:
      FUN_0064c150();
      break;
    case 4:
      FUN_0064c150();
      break;
    case 5:
      FUN_0064c360();
      break;
    case 6:
      FUN_0064bf40();
      break;
    default:
      std::basic_istream<char,std::char_traits<char>_>::read
                (param_1,(char *)&local_80,(ulonglong)uVar3 << 0x20);
      uVar2 = local_80;
      iVar9 = (int)local_80 >> 0x1f;
      puVar8 = (undefined8 *)std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
      local_bc._0_4_ = (uint)*puVar8;
      local_bc._4_4_ = (int)((ulonglong)*puVar8 >> 0x20);
      local_bc = CONCAT44(local_bc._4_4_ + iVar9 + (uint)CARRY4((uint)local_bc,uVar2),
                          (uint)local_bc + uVar2);
      std::basic_istream<char,std::char_traits<char>_>::seekg
                (param_1,local_bc,puVar8[1],(int)puVar8[2],(int)((ulonglong)puVar8[2] >> 0x20));
      piVar10 = local_64;
      pCVar11 = local_5c;
      break;
    case 8:
      FUN_00650a20(local_134,param_1);
      std::basic_istream<char,std::char_traits<char>_>::read
                (param_1,(char *)&local_88,(ulonglong)uVar3 << 0x20);
      local_60 = local_88;
      break;
    case 9:
      FUN_00650a20(local_104,param_1);
      std::basic_istream<char,std::char_traits<char>_>::read
                (param_1,(char *)&local_8c,(ulonglong)uVar3 << 0x20);
      local_68 = CONCAT31(local_68._1_3_,local_8c != 0);
      break;
    case 10:
      FUN_00650a20(local_11c,param_1);
      std::basic_istream<char,std::char_traits<char>_>::read
                (param_1,(char *)&local_84,(ulonglong)uVar3 << 0x20);
      local_48 = (int *)local_84;
      break;
    case 0xb:
      FUN_00650a20(local_d4,param_1);
      std::basic_istream<char,std::char_traits<char>_>::read
                (param_1,(char *)&local_78,(ulonglong)uVar3 << 0x20);
      local_54 = local_78;
    }
  } while( true );
}


/* FUN_00654700 @ 00654700  kind=gamemisc  attributed-by=caller-vote  size=496 */

Edit * FUN_00654700(Edit *param_1)

{
  undefined8 uVar1;
  basic_istream<char,std::char_traits<char>_> *this;
  uint uVar2;
  char cVar3;
  uint uVar4;
  undefined8 *puVar5;
  Edit *this_00;
  uint *puVar6;
  int iVar7;
  bool bVar8;
  undefined8 local_54;
  uint local_4c;
  int iStack_48;
  undefined4 local_3c;
  undefined4 local_2c;
  uint local_28;
  int local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  this = (basic_istream<char,std::char_traits<char>_> *)param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f6913;
  local_10 = ExceptionList;
  uVar4 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  std::basic_istream<char,std::char_traits<char>_>::read
            ((basic_istream<char,std::char_traits<char>_> *)param_1,(char *)&local_18,
             (ulonglong)uVar4 << 0x20);
  iVar7 = (int)local_18 >> 0x1f;
  puVar5 = (undefined8 *)
           std::basic_istream<char,std::char_traits<char>_>::tellg
                     ((basic_istream<char,std::char_traits<char>_> *)param_1);
  uVar1 = puVar5[1];
  local_54._0_4_ = (uint)*puVar5;
  bVar8 = CARRY4((uint)local_54,local_18);
  local_18 = (uint)local_54 + local_18;
  local_54._4_4_ = (int)((ulonglong)*puVar5 >> 0x20);
  local_1c = local_54._4_4_ + iVar7 + (uint)bVar8;
  local_28 = 7;
  local_2c = 0;
  local_3c = (void *)((uint)local_3c._2_2_ << 0x10);
  FUN_0040f7a0(&PTR_006fccac,0);
  local_8 = 0;
  this_00 = operator_new(0x17c);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (this_00 == (Edit *)0x0) {
    param_1 = (Edit *)0x0;
  }
  else {
    param_1 = plasma::Edit::Edit(this_00,local_14,0,&local_3c);
  }
  local_8 = 0xffffffff;
  if (7 < local_28) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_3c);
  }
  iStack_48 = (int)((ulonglong)uVar1 >> 0x20);
  local_3c = (void *)((uint)local_3c & 0xffff0000);
  local_4c = (uint)uVar1;
  bVar8 = CARRY4(local_4c,local_18);
  local_18 = local_4c + local_18;
  local_28 = 7;
  local_24 = iStack_48 + local_1c + (uint)bVar8;
  local_2c = 0;
  iVar7 = local_24;
  while( true ) {
    puVar6 = (uint *)std::basic_istream<char,std::char_traits<char>_>::tellg(this);
    if (((puVar6[2] + *puVar6 == local_18) &&
        (puVar6[3] + puVar6[1] + (uint)CARRY4(puVar6[2],*puVar6) == iVar7)) ||
       ((*(byte *)((int)&this[3].vbtablePtr +
                  this->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset) & 1) != 0))
    break;
    std::basic_istream<char,std::char_traits<char>_>::read
              (this,(char *)&local_1c,(ulonglong)uVar4 << 0x20);
    cVar3 = FUN_00659940();
    if (cVar3 == '\0') {
      std::basic_istream<char,std::char_traits<char>_>::read
                (this,(char *)&local_20,(ulonglong)uVar4 << 0x20);
      uVar2 = local_20;
      iVar7 = (int)local_20 >> 0x1f;
      puVar5 = (undefined8 *)std::basic_istream<char,std::char_traits<char>_>::tellg(this);
      local_54._0_4_ = (uint)*puVar5;
      local_54._4_4_ = (int)((ulonglong)*puVar5 >> 0x20);
      local_54 = CONCAT44(local_54._4_4_ + iVar7 + (uint)CARRY4((uint)local_54,uVar2),
                          (uint)local_54 + uVar2);
      std::basic_istream<char,std::char_traits<char>_>::seekg
                (this,local_54,puVar5[1],(int)puVar5[2],(int)((ulonglong)puVar5[2] >> 0x20));
      iVar7 = local_24;
    }
  }
  ExceptionList = local_10;
  return param_1;
}


/* FUN_00654900 @ 00654900  kind=gamemisc  attributed-by=caller-vote  size=1212 */

void FUN_00654900(basic_istream<char,std::char_traits<char>_> *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint *puVar4;
  undefined1 *puVar5;
  int iVar6;
  GenericShape *pGVar7;
  int *piVar8;
  bool bVar9;
  char local_f0 [4];
  char local_ec [4];
  char local_e8 [4];
  char local_e4 [4];
  undefined4 local_e0;
  undefined4 local_d0;
  uint local_cc;
  undefined4 local_c8;
  undefined4 local_b8;
  uint local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  GenericShape *local_98;
  uint local_94;
  int local_90;
  int *local_8c;
  GenericShape *local_88;
  void *local_84 [4];
  undefined4 local_74;
  uint local_70;
  void *local_6c [4];
  undefined4 local_5c;
  uint local_58;
  void *local_54 [4];
  undefined4 local_44;
  uint local_40;
  void *local_3c [4];
  undefined4 local_2c;
  uint local_28;
  undefined8 local_24;
  undefined8 local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f6984;
  local_10 = ExceptionList;
  uVar2 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar2;
  std::basic_istream<char,std::char_traits<char>_>::read
            (param_1,(char *)&local_88,(ulonglong)uVar2 << 0x20);
  puVar3 = (undefined8 *)std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
  uVar1 = *puVar3;
  local_a8 = puVar3[1];
  local_a0 = puVar3[2];
  local_b0._0_4_ = (uint)uVar1;
  local_94 = (int)&local_88->vftablePtr + (uint)local_b0;
  local_b0._4_4_ = (int)((ulonglong)uVar1 >> 0x20);
  local_90 = local_b0._4_4_ + ((int)local_88 >> 0x1f) + (uint)CARRY4((uint)local_b0,(uint)local_88);
  local_b4 = 7;
  local_b8 = 0;
  local_c8 = (void *)((uint)local_c8._2_2_ << 0x10);
  local_b0 = uVar1;
  FUN_0040f7a0(&PTR_006fccac,0);
  local_8 = 0;
  local_cc = 7;
  local_d0 = 0;
  local_e0 = (void *)((uint)local_e0._2_2_ << 0x10);
  FUN_0040f7a0(&PTR_006fccac,0);
  local_8._0_1_ = 1;
  local_98 = operator_new(0x8c);
  local_8 = CONCAT31(local_8._1_3_,2);
  if (local_98 == (GenericShape *)0x0) {
    local_88 = (GenericShape *)0x0;
  }
  else {
    local_88 = plasma::GenericShape::GenericShape(local_98,local_8c,&local_e0,&local_c8);
  }
  if (7 < local_cc) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_e0);
  }
  local_cc = 7;
  local_d0 = 0;
  local_e0 = (void *)((uint)local_e0 & 0xffff0000);
  local_8 = 0xffffffff;
  if (7 < local_b4) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_c8);
  }
  local_c8 = (void *)((uint)local_c8 & 0xffff0000);
  bVar9 = CARRY4((uint)local_a8,local_94);
  local_94 = (uint)local_a8 + local_94;
  local_b4 = 7;
  local_8c = (int *)(local_a8._4_4_ + local_90 + (uint)bVar9);
  local_b8 = 0;
  pGVar7 = local_88;
  piVar8 = local_8c;
  do {
    puVar4 = (uint *)std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
    if (((puVar4[2] + *puVar4 == local_94) &&
        ((int *)(puVar4[3] + puVar4[1] + (uint)CARRY4(puVar4[2],*puVar4)) == piVar8)) ||
       ((*(byte *)((int)&param_1[3].vbtablePtr +
                  param_1->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset) & 1) != 0)) {
      (*pGVar7->vftablePtr->vfunction2)(pGVar7);
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
    std::basic_istream<char,std::char_traits<char>_>::read
              (param_1,(char *)&local_90,(ulonglong)uVar2 << 0x20);
    switch(local_90) {
    case 1:
      std::basic_istream<char,std::char_traits<char>_>::read
                (param_1,local_e4,(ulonglong)uVar2 << 0x20);
      std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
      FUN_00658530(local_6c,param_1);
      local_8 = 3;
      puVar5 = (undefined1 *)FUN_006089c0(local_3c);
      local_8 = CONCAT31(local_8._1_3_,4);
      if (&pGVar7->NamedObject_data != (NamedObject_data *)puVar5) {
        FUN_0040f680();
      }
      if (7 < local_28) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_3c[0]);
      }
      local_28 = 7;
      local_2c = 0;
      local_3c[0] = (void *)((uint)local_3c[0] & 0xffff0000);
      local_8 = 0xffffffff;
      if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_6c[0]);
      }
      local_58 = 0xf;
      local_5c = 0;
      local_6c[0] = (void *)((uint)local_6c[0] & 0xffffff00);
      break;
    case 2:
      std::basic_istream<char,std::char_traits<char>_>::read
                (param_1,local_f0,(ulonglong)uVar2 << 0x20);
      std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
      FUN_00658530(local_54,param_1);
      local_8 = 5;
      puVar5 = (undefined1 *)FUN_006089c0(local_84);
      local_8 = CONCAT31(local_8._1_3_,6);
      if (&(pGVar7->NamedObject_data).offset_0x60 != (undefined4 *)puVar5) {
        FUN_0040f680();
      }
      if (7 < local_70) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_84[0]);
      }
      local_70 = 7;
      local_74 = 0;
      local_84[0] = (void *)((uint)local_84[0] & 0xffff0000);
      local_8 = 0xffffffff;
      if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_54[0]);
      }
      local_40 = 0xf;
      local_44 = 0;
      local_54[0] = (void *)((uint)local_54[0] & 0xffffff00);
      break;
    case 3:
      std::basic_istream<char,std::char_traits<char>_>::read
                (param_1,local_e8,(ulonglong)uVar2 << 0x20);
      std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
      std::basic_istream<char,std::char_traits<char>_>::read
                (param_1,(char *)&local_1c,(ulonglong)uVar2 << 0x20);
      (pGVar7->NamedObject_data).offset_0x50 = (undefined4)local_1c;
      (pGVar7->NamedObject_data).offset_0x54 = local_1c._4_4_;
      break;
    case 4:
      std::basic_istream<char,std::char_traits<char>_>::read
                (param_1,local_ec,(ulonglong)uVar2 << 0x20);
      std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
      std::basic_istream<char,std::char_traits<char>_>::read
                (param_1,(char *)&local_24,(ulonglong)uVar2 << 0x20);
      (pGVar7->NamedObject_data).offset_0x58 = (undefined4)local_24;
      (pGVar7->NamedObject_data).offset_0x5c = local_24._4_4_;
      break;
    default:
      std::basic_istream<char,std::char_traits<char>_>::read
                (param_1,(char *)&local_98,(ulonglong)uVar2 << 0x20);
      pGVar7 = local_98;
      iVar6 = (int)local_98 >> 0x1f;
      puVar3 = (undefined8 *)std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
      local_b0._0_4_ = (uint)*puVar3;
      local_b0._4_4_ = (int)((ulonglong)*puVar3 >> 0x20);
      local_b0 = CONCAT44(local_b0._4_4_ + iVar6 + (uint)CARRY4((uint)local_b0,(uint)pGVar7),
                          (int)&pGVar7->vftablePtr + (uint)local_b0);
      std::basic_istream<char,std::char_traits<char>_>::seekg
                (param_1,local_b0,puVar3[1],(int)puVar3[2],(int)((ulonglong)puVar3[2] >> 0x20));
      pGVar7 = local_88;
      piVar8 = local_8c;
    }
  } while( true );
}


/* FUN_00654df0 @ 00654df0  kind=gamemisc  attributed-by=caller-vote  size=496 */

ListWidget * FUN_00654df0(ListWidget *param_1)

{
  undefined8 uVar1;
  basic_istream<char,std::char_traits<char>_> *this;
  uint uVar2;
  char cVar3;
  uint uVar4;
  undefined8 *puVar5;
  ListWidget *this_00;
  uint *puVar6;
  int iVar7;
  bool bVar8;
  undefined8 local_54;
  uint local_4c;
  int iStack_48;
  undefined4 local_3c;
  undefined4 local_2c;
  uint local_28;
  int local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  this = (basic_istream<char,std::char_traits<char>_> *)param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f6913;
  local_10 = ExceptionList;
  uVar4 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  std::basic_istream<char,std::char_traits<char>_>::read
            ((basic_istream<char,std::char_traits<char>_> *)param_1,(char *)&local_18,
             (ulonglong)uVar4 << 0x20);
  iVar7 = (int)local_18 >> 0x1f;
  puVar5 = (undefined8 *)
           std::basic_istream<char,std::char_traits<char>_>::tellg
                     ((basic_istream<char,std::char_traits<char>_> *)param_1);
  uVar1 = puVar5[1];
  local_54._0_4_ = (uint)*puVar5;
  bVar8 = CARRY4((uint)local_54,local_18);
  local_18 = (uint)local_54 + local_18;
  local_54._4_4_ = (int)((ulonglong)*puVar5 >> 0x20);
  local_1c = local_54._4_4_ + iVar7 + (uint)bVar8;
  local_28 = 7;
  local_2c = 0;
  local_3c = (void *)((uint)local_3c._2_2_ << 0x10);
  FUN_0040f7a0(&PTR_006fccac,0);
  local_8 = 0;
  this_00 = operator_new(0x160);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (this_00 == (ListWidget *)0x0) {
    param_1 = (ListWidget *)0x0;
  }
  else {
    param_1 = plasma::ListWidget::ListWidget(this_00,local_14,0,&local_3c);
  }
  local_8 = 0xffffffff;
  if (7 < local_28) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_3c);
  }
  iStack_48 = (int)((ulonglong)uVar1 >> 0x20);
  local_3c = (void *)((uint)local_3c & 0xffff0000);
  local_4c = (uint)uVar1;
  bVar8 = CARRY4(local_4c,local_18);
  local_18 = local_4c + local_18;
  local_28 = 7;
  local_24 = iStack_48 + local_1c + (uint)bVar8;
  local_2c = 0;
  iVar7 = local_24;
  while( true ) {
    puVar6 = (uint *)std::basic_istream<char,std::char_traits<char>_>::tellg(this);
    if (((puVar6[2] + *puVar6 == local_18) &&
        (puVar6[3] + puVar6[1] + (uint)CARRY4(puVar6[2],*puVar6) == iVar7)) ||
       ((*(byte *)((int)&this[3].vbtablePtr +
                  this->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset) & 1) != 0))
    break;
    std::basic_istream<char,std::char_traits<char>_>::read
              (this,(char *)&local_1c,(ulonglong)uVar4 << 0x20);
    cVar3 = FUN_00659940();
    if (cVar3 == '\0') {
      std::basic_istream<char,std::char_traits<char>_>::read
                (this,(char *)&local_20,(ulonglong)uVar4 << 0x20);
      uVar2 = local_20;
      iVar7 = (int)local_20 >> 0x1f;
      puVar5 = (undefined8 *)std::basic_istream<char,std::char_traits<char>_>::tellg(this);
      local_54._0_4_ = (uint)*puVar5;
      local_54._4_4_ = (int)((ulonglong)*puVar5 >> 0x20);
      local_54 = CONCAT44(local_54._4_4_ + iVar7 + (uint)CARRY4((uint)local_54,uVar2),
                          (uint)local_54 + uVar2);
      std::basic_istream<char,std::char_traits<char>_>::seekg
                (this,local_54,puVar5[1],(int)puVar5[2],(int)((ulonglong)puVar5[2] >> 0x20));
      iVar7 = local_24;
    }
  }
  ExceptionList = local_10;
  return param_1;
}


/* FUN_00654ff0 @ 00654ff0  kind=gamemisc  attributed-by=caller-vote  size=1470 */

void FUN_00654ff0(basic_istream<char,std::char_traits<char>_> *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint *puVar6;
  void **ppvVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  char local_13c [4];
  char local_138 [4];
  char local_134 [4];
  char local_130 [4];
  undefined8 local_12c;
  undefined8 local_fc;
  uint local_e4;
  undefined4 local_e0;
  int local_dc;
  undefined4 local_d8;
  uint local_d4;
  int local_d0;
  int local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  uint local_c0;
  undefined4 local_bc;
  int local_b8 [2];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  int local_98;
  undefined4 local_94;
  uint local_90;
  void *local_8c [4];
  undefined4 local_7c;
  uint local_78;
  void *local_74 [4];
  undefined4 local_64;
  uint local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [4];
  void *local_1c;
  void *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f69d3;
  local_10 = ExceptionList;
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_d8 = param_2;
  local_14 = uVar3;
  std::basic_istream<char,std::char_traits<char>_>::read
            (param_1,(char *)&local_90,(ulonglong)uVar3 << 0x20);
  uVar10 = local_90;
  iVar9 = (int)local_90 >> 0x1f;
  puVar4 = (undefined8 *)std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
  uVar1 = *puVar4;
  uVar2 = puVar4[1];
  local_b0._4_4_ = (int)((ulonglong)uVar1 >> 0x20);
  local_a0 = puVar4[2];
  local_b0._0_4_ = (uint)uVar1;
  local_a8._0_4_ = (uint)uVar2;
  uVar5 = (uint)local_b0 + uVar10;
  local_a8._4_4_ = (int)((ulonglong)uVar2 >> 0x20);
  local_cc = (uint)local_a8 + uVar5;
  local_98 = local_a8._4_4_ + local_b0._4_4_ + iVar9 + (uint)CARRY4((uint)local_b0,uVar10) +
             (uint)CARRY4((uint)local_a8,uVar5);
  local_94 = 0;
  iVar9 = local_98;
  local_b0 = uVar1;
  local_a8 = uVar2;
  do {
    while( true ) {
      while( true ) {
        puVar6 = (uint *)std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
        if (((puVar6[2] + *puVar6 == local_cc) &&
            (puVar6[3] + puVar6[1] + (uint)CARRY4(puVar6[2],*puVar6) == iVar9)) ||
           ((*(byte *)((int)&param_1[3].vbtablePtr +
                      param_1->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset) & 1) != 0
           )) {
          ExceptionList = local_10;
          __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
          return;
        }
        std::basic_istream<char,std::char_traits<char>_>::read
                  (param_1,(char *)local_b8,(ulonglong)uVar3 << 0x20);
        if (local_b8[0] != 1) break;
        std::basic_istream<char,std::char_traits<char>_>::read
                  (param_1,local_130,(ulonglong)uVar3 << 0x20);
        std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
        FUN_00658530(local_44,param_1);
        local_8 = 0;
        uVar8 = FUN_006089c0(local_5c);
        local_8 = CONCAT31(local_8._1_3_,1);
        local_94 = FUN_0064f400(uVar8);
        if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
          operator_delete(local_5c[0]);
        }
        local_48 = 7;
        local_4c = 0;
        local_5c[0] = (void *)((uint)local_5c[0] & 0xffff0000);
        local_8 = 0xffffffff;
        if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
          operator_delete(local_44[0]);
        }
        local_30 = 0xf;
        local_34 = 0;
        local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
      }
      if (local_b8[0] == 2) break;
      std::basic_istream<char,std::char_traits<char>_>::read
                (param_1,(char *)&local_c0,(ulonglong)uVar3 << 0x20);
      uVar10 = local_c0;
      iVar9 = (int)local_c0 >> 0x1f;
      puVar4 = (undefined8 *)std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
      local_12c._0_4_ = (uint)*puVar4;
      local_12c._4_4_ = (int)((ulonglong)*puVar4 >> 0x20);
      local_12c = CONCAT44(local_12c._4_4_ + iVar9 + (uint)CARRY4((uint)local_12c,uVar10),
                           (uint)local_12c + uVar10);
      std::basic_istream<char,std::char_traits<char>_>::seekg
                (param_1,local_12c,puVar4[1],(int)puVar4[2],(int)((ulonglong)puVar4[2] >> 0x20));
      iVar9 = local_98;
    }
    std::basic_istream<char,std::char_traits<char>_>::read
              (param_1,(char *)&local_d4,(ulonglong)uVar3 << 0x20);
    uVar10 = local_d4;
    iVar9 = (int)local_d4 >> 0x1f;
    puVar4 = (undefined8 *)std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
    uVar1 = *puVar4;
    uVar2 = puVar4[1];
    local_b0._4_4_ = (int)((ulonglong)uVar1 >> 0x20);
    local_a0 = puVar4[2];
    local_b0._0_4_ = (uint)uVar1;
    uVar5 = (uint)local_b0 + uVar10;
    local_18 = (void *)0xf;
    local_1c = (void *)0x0;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    local_a8._0_4_ = (uint)uVar2;
    local_a8._4_4_ = (int)((ulonglong)uVar2 >> 0x20);
    local_90 = (uint)local_a8 + uVar5;
    local_d0 = local_a8._4_4_ + local_b0._4_4_ + iVar9 + (uint)CARRY4((uint)local_b0,uVar10) +
               (uint)CARRY4((uint)local_a8,uVar5);
    local_8 = 2;
    iVar9 = local_d0;
    uVar10 = local_90;
    local_b0 = uVar1;
    local_a8 = uVar2;
    while( true ) {
      puVar6 = (uint *)std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
      if (((puVar6[2] + *puVar6 == uVar10) &&
          (puVar6[3] + puVar6[1] + (uint)CARRY4(puVar6[2],*puVar6) == iVar9)) ||
         ((*(byte *)((int)&param_1[3].vbtablePtr +
                    param_1->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset) & 1) != 0))
      break;
      std::basic_istream<char,std::char_traits<char>_>::read
                (param_1,(char *)&local_dc,(ulonglong)uVar3 << 0x20);
      if (local_dc == 1) {
        std::basic_istream<char,std::char_traits<char>_>::read
                  (param_1,local_138,(ulonglong)uVar3 << 0x20);
        std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
        std::basic_istream<char,std::char_traits<char>_>::read
                  (param_1,(char *)&local_e0,(ulonglong)uVar3 << 0x20);
        local_c4 = local_e0;
        ppvVar7 = (void **)FUN_0064dfb0(&local_c4);
        if (local_2c != ppvVar7) {
          FUN_0040c0a0();
        }
      }
      else if (local_dc == 2) {
        std::basic_istream<char,std::char_traits<char>_>::read
                  (param_1,local_13c,(ulonglong)uVar3 << 0x20);
        std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
        std::basic_istream<char,std::char_traits<char>_>::read
                  (param_1,(char *)&local_bc,(ulonglong)uVar3 << 0x20);
        local_c8 = local_bc;
      }
      else if (local_dc == 3) {
        std::basic_istream<char,std::char_traits<char>_>::read
                  (param_1,local_134,(ulonglong)uVar3 << 0x20);
        std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
        ppvVar7 = (void **)FUN_00658530(local_74,param_1);
        if (local_2c != ppvVar7) {
          if ((void *)0xf < local_18) {
                    /* WARNING: Subroutine does not return */
            operator_delete(local_2c[0]);
          }
          local_18 = (void *)0xf;
          local_1c = (void *)0x0;
          local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
          if (ppvVar7[5] < (void *)0x10) {
            if ((int)ppvVar7[4] + 1U != 0) {
              memmove(local_2c,ppvVar7,(int)ppvVar7[4] + 1U);
            }
          }
          else {
            local_2c[0] = *ppvVar7;
            *ppvVar7 = (void *)0x0;
          }
          local_1c = ppvVar7[4];
          local_18 = ppvVar7[5];
          ppvVar7[5] = (void *)0xf;
          ppvVar7[4] = (void *)0x0;
          *(undefined1 *)ppvVar7 = 0;
        }
        if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
          operator_delete(local_74[0]);
        }
        local_60 = 0xf;
        local_64 = 0;
        local_74[0] = (void *)((uint)local_74[0] & 0xffffff00);
        uVar10 = local_90;
      }
      else {
        std::basic_istream<char,std::char_traits<char>_>::read
                  (param_1,(char *)&local_e4,(ulonglong)uVar3 << 0x20);
        uVar10 = local_e4;
        iVar9 = (int)local_e4 >> 0x1f;
        puVar4 = (undefined8 *)std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
        local_fc._0_4_ = (uint)*puVar4;
        local_fc._4_4_ = (int)((ulonglong)*puVar4 >> 0x20);
        local_fc = CONCAT44(local_fc._4_4_ + iVar9 + (uint)CARRY4((uint)local_fc,uVar10),
                            (uint)local_fc + uVar10);
        std::basic_istream<char,std::char_traits<char>_>::seekg
                  (param_1,local_fc,puVar4[1],(int)puVar4[2],(int)((ulonglong)puVar4[2] >> 0x20));
        iVar9 = local_d0;
        uVar10 = local_90;
      }
    }
    uVar8 = FUN_006089c0(local_8c,local_2c);
    local_8 = CONCAT31(local_8._1_3_,3);
    FUN_00677e90(uVar8,local_c8);
    if (7 < local_78) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_8c[0]);
    }
    local_78 = 7;
    local_7c = 0;
    local_8c[0] = (void *)((uint)local_8c[0] & 0xffff0000);
    local_8 = 0xffffffff;
    iVar9 = local_98;
    if ((void *)0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
  } while( true );
}


/* FUN_006555d0 @ 006555d0  kind=gamemisc  attributed-by=caller-vote  size=6041 */

void FUN_006555d0(basic_istream<char,std::char_traits<char>_> *param_1,int param_2,byte param_3,
                 float *param_4)

{
  float fVar1;
  byte bVar2;
  void *pvVar3;
  int *piVar4;
  int *piVar5;
  char cVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint *puVar9;
  void **ppvVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int *piVar14;
  int *piVar15;
  int *in_ECX;
  basic_istream<char,std::char_traits<char>_> *pbVar16;
  int iVar17;
  undefined4 *puVar18;
  int iVar19;
  char *pcVar20;
  float fVar21;
  bool bVar22;
  undefined1 local_660 [24];
  undefined1 local_648 [24];
  undefined1 local_630 [24];
  undefined1 local_618 [24];
  undefined1 local_600 [24];
  undefined1 local_5e8 [48];
  undefined1 local_5b8 [24];
  undefined1 local_5a0 [24];
  undefined1 local_588 [24];
  undefined1 local_570 [24];
  undefined1 local_558 [24];
  undefined1 local_540 [24];
  undefined1 local_528 [24];
  undefined1 local_510 [48];
  undefined1 local_4e0 [24];
  undefined1 local_4c8 [24];
  undefined1 local_4b0 [48];
  undefined1 local_480 [48];
  undefined1 local_450 [24];
  undefined1 local_438 [24];
  undefined1 local_420 [24];
  undefined1 local_408 [24];
  undefined1 local_3f0 [24];
  undefined1 local_3d8 [24];
  undefined1 local_3c0 [24];
  undefined1 local_3a8 [24];
  undefined1 local_390 [24];
  undefined1 local_378 [24];
  undefined4 local_360;
  undefined4 local_35c;
  undefined4 local_358;
  int local_354;
  undefined4 local_350;
  undefined4 local_34c;
  int local_348;
  undefined4 local_344;
  basic_istream<char,std::char_traits<char>_> *local_340;
  int local_33c;
  undefined1 local_338 [4];
  undefined4 local_334;
  undefined4 local_330;
  undefined4 local_32c;
  undefined4 local_328;
  undefined4 local_324;
  char *local_320;
  undefined4 local_31c;
  undefined4 local_318;
  uint local_314;
  int local_310;
  uint local_30c;
  int local_308;
  int local_2fc;
  int local_2f8;
  undefined4 *local_2f4;
  undefined4 local_2f0;
  float local_2ec;
  int local_2e8;
  float local_2e4;
  undefined4 *local_2e0;
  undefined4 local_2dc;
  float local_2d8;
  int *local_2d4;
  undefined4 local_2d0;
  undefined4 *local_2cc;
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined4 local_2c0;
  int local_2bc;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined4 local_2a8;
  undefined4 local_2a4;
  int *local_2a0;
  undefined4 local_29c;
  float *local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined4 local_28c;
  int local_288;
  int *local_284;
  undefined4 local_280;
  int local_27c;
  int *local_278;
  int local_274;
  float local_270;
  int local_26c;
  int local_268;
  undefined1 local_264 [48];
  undefined1 local_234 [24];
  undefined1 local_21c [24];
  undefined1 local_204 [24];
  undefined1 local_1ec [24];
  undefined1 local_1d4 [24];
  undefined1 local_1bc [24];
  undefined1 local_1a4 [24];
  undefined1 local_18c [24];
  DiscreteAttribute<int> local_174;
  DiscreteAttribute<int> local_11c;
  ContinuousAttribute<plasma::Vector<4,float>_> local_c4;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  uint local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f6b28;
  local_10 = ExceptionList;
  uVar7 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_2fc = param_2;
  local_340 = param_1;
  local_298 = param_4;
  if (param_4 == (float *)0x0) {
    local_298 = (float *)(in_ECX + 5);
  }
  local_2a0 = (int *)0x0;
  local_29c = 0;
  local_278 = in_ECX;
  local_14 = uVar7;
  local_2a0 = (int *)FUN_0043c870();
  local_8 = 0;
  local_2a8 = 0;
  local_2a4 = 0;
  local_2a8 = FUN_0043c870();
  local_8._0_1_ = 1;
  local_2c4 = 0;
  local_2c0 = 0;
  local_2c4 = FUN_0043c870();
  local_8._0_1_ = 2;
  local_284 = (int *)0x0;
  local_280 = 0;
  local_284 = (int *)FUN_0043c870();
  local_8._0_1_ = 3;
  local_290 = 0;
  local_28c = 0;
  local_290 = FUN_0064e370();
  local_8._0_1_ = 4;
  local_2b0 = 0;
  local_2ac = 0;
  local_2b0 = FUN_0043c870();
  local_8._0_1_ = 5;
  local_2b8 = 0;
  local_2b4 = 0;
  local_2b8 = FUN_0043c870();
  local_8._0_1_ = 6;
  local_268 = -1;
  puVar8 = (undefined4 *)FUN_00468910(&local_268);
  *puVar8 = 0;
  local_268 = -1;
  puVar8 = (undefined4 *)FUN_00468910(&local_268);
  *puVar8 = 0;
  local_268 = -1;
  puVar8 = (undefined4 *)FUN_00468910(&local_268);
  *puVar8 = 0xffffffff;
  local_268 = -1;
  puVar8 = (undefined4 *)FUN_00468910(&local_268);
  *puVar8 = 0xffffffff;
  local_268 = -1;
  puVar8 = (undefined4 *)FUN_00468910(&local_268);
  *puVar8 = 0;
  local_268 = -1;
  puVar8 = (undefined4 *)FUN_00468910(&local_268);
  iVar19 = 0;
  *puVar8 = 0;
  local_288 = 0;
  local_2f8 = 0;
  local_26c = 0;
  local_2bc = 0;
  local_298[2] = 100.0;
  local_298[3] = 0.0;
  local_2d0 = 0;
  local_2d4 = (int *)FUN_0064e3d0(0,0);
  local_8._0_1_ = 7;
  local_2dc = 0;
  local_2e0 = (undefined4 *)FUN_0046d550(0,0);
  local_8._0_1_ = 8;
  bVar2 = *(byte *)((int)&param_1[3].vbtablePtr +
                   param_1->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset);
  while (((bVar2 & 1) == 0 &&
         (std::basic_istream<char,std::char_traits<char>_>::read
                    (param_1,(char *)&local_360,(ulonglong)uVar7 << 0x20),
         (*(byte *)((int)&param_1[3].vbtablePtr +
                   param_1->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset) & 1) == 0)))
  {
    switch(local_360) {
    case 1:
      local_268 = local_2f8;
      local_2f8 = local_2f8 + 1;
      puVar8 = (undefined4 *)FUN_00468910(&local_268);
      uVar13 = FUN_00659320(param_1,&local_290);
      *puVar8 = uVar13;
      iVar19 = local_26c;
      break;
    default:
      FUN_00659e80(param_1);
      break;
    case 3:
      local_268 = local_288;
      local_288 = local_288 + 1;
      puVar8 = (undefined4 *)FUN_00468910(&local_268);
      uVar13 = FUN_00657f80(param_1,&local_290,&local_2b0);
      *puVar8 = uVar13;
      iVar19 = local_26c;
      break;
    case 4:
      local_268 = FUN_00658630(param_1,&local_290,&local_2b8);
      FUN_004860b0(&local_268);
      local_268 = local_288;
      local_288 = local_288 + 1;
      uVar13 = *(undefined4 *)(local_2e0[1] + 8);
      puVar8 = (undefined4 *)FUN_00468910(&local_268);
      *puVar8 = uVar13;
      iVar19 = local_26c;
      break;
    case 5:
      FUN_00650a20(&local_314,param_1);
      local_18 = 0xf;
      local_1c = 0;
      local_2c = local_2c & 0xffffff00;
      iVar19 = -1;
      local_334 = 1;
      local_330 = 1;
      local_32c = 1;
      local_328 = 1;
      local_324 = 1;
      local_294 = 0;
      local_274 = 0;
      local_320 = (char *)0x0;
      local_31c = 0;
      local_318 = 0;
      local_268 = local_314 + local_30c;
      local_8._0_1_ = 0xb;
      local_27c = local_310 + local_308 + (uint)CARRY4(local_314,local_30c);
      pcVar20 = (char *)0x0;
      while( true ) {
        puVar9 = (uint *)std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
        if (((puVar9[2] + *puVar9 == local_268) &&
            (puVar9[3] + puVar9[1] + (uint)CARRY4(puVar9[2],*puVar9) == local_27c)) ||
           ((*(byte *)((int)&param_1[3].vbtablePtr +
                      param_1->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset) & 1) != 0
           )) break;
        std::basic_istream<char,std::char_traits<char>_>::read
                  (param_1,(char *)&local_34c,(ulonglong)uVar7 << 0x20);
        switch(local_34c) {
        case 1:
          FUN_00650a20(local_600,param_1);
          uVar13 = FUN_00658530(local_1bc,param_1);
          FUN_00404090(uVar13);
          FUN_00403eb0();
          break;
        case 2:
          FUN_00650a20(local_630,param_1);
          iVar19 = FUN_0064cd70(param_1);
          break;
        case 3:
          FUN_00650a20(local_660,param_1);
          local_334 = FUN_0064cd70(param_1);
          break;
        case 4:
          FUN_00650a20(local_528,param_1);
          local_330 = FUN_0064cd70(param_1);
          break;
        case 5:
          FUN_00650a20(local_408,param_1);
          local_32c = FUN_0064cd70(param_1);
          break;
        case 6:
          FUN_00650a20(local_558,param_1);
          local_294 = FUN_0064cd70(param_1);
          break;
        case 7:
          FUN_00650a20(local_3c0,param_1);
          local_274 = FUN_0064cd70(param_1);
          break;
        case 8:
          FUN_00650a20(local_5e8,param_1);
          iVar17 = FUN_0064cd70(param_1);
          pcVar20 = local_320;
          if (0 < iVar17) {
            FUN_005870c0(iVar17);
            pcVar20 = local_320;
            std::basic_istream<char,std::char_traits<char>_>::read
                      (param_1,local_320,CONCAT44(uVar7,iVar17 >> 0x1f));
          }
          break;
        case 9:
          FUN_00650a20(local_618,param_1);
          local_328 = FUN_0064cd70(param_1);
          break;
        case 10:
          FUN_00650a20(local_438,param_1);
          local_324 = FUN_0064cd70(param_1);
          break;
        default:
          FUN_00659e80(param_1);
        }
      }
      local_27c = iVar19;
      if (iVar19 != -1) {
        uVar13 = FUN_006089c0(local_18c,&local_2c);
        local_8._0_1_ = 0xc;
        iVar19 = (**(code **)(*local_278 + 8))(local_294,local_274,pcVar20,&local_334,uVar13,0);
        local_8._0_1_ = 0xb;
        FUN_00593e50();
        uVar13 = *(undefined4 *)(iVar19 + 0x4c);
        puVar8 = (undefined4 *)FUN_00468910(&local_27c);
        *puVar8 = uVar13;
      }
      FUN_005fb860();
      local_8._0_1_ = 8;
      FUN_00403eb0();
      iVar19 = local_26c;
      break;
    case 6:
      FUN_00650a20(&local_314,param_1);
      local_c4.Attribute_data._44_4_ = 0xf;
      local_c4.Attribute_data._40_4_ = 0;
      local_c4.Attribute_data.offset_0x18._0_1_ = 0;
      local_c4.Attribute_data.offset_0x44 = 0xf;
      local_c4.Attribute_data._69_3_ = 0;
      local_c4.Attribute_data.offset_0x40 = 0;
      local_c4.Attribute_data.offset_0x30._0_1_ = 0;
      local_8 = CONCAT31(local_8._1_3_,0xd);
      FUN_004ec1b0(&DAT_006fc918);
      FUN_004ec1b0(&DAT_006fc918);
      bVar22 = CARRY4(local_314,local_30c);
      iVar17 = local_314 + local_30c;
      iVar19 = local_310 + local_308;
      local_c4.ContinuousAttribute<plasma::Vector<4,float>_>_data.offset_0x0 = 0;
      local_c4.ContinuousAttribute<plasma::Vector<4,float>_>_data.offset_0x4 = 0;
      local_c4.ContinuousAttribute<plasma::Vector<4,float>_>_data.offset_0x8 = 0xffffffff;
      while( true ) {
        puVar9 = (uint *)std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
        if (((puVar9[2] + *puVar9 == iVar17) &&
            (puVar9[3] + puVar9[1] + (uint)CARRY4(puVar9[2],*puVar9) == iVar19 + (uint)bVar22)) ||
           ((*(byte *)((int)&param_1[3].vbtablePtr +
                      param_1->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset) & 1) != 0
           )) break;
        std::basic_istream<char,std::char_traits<char>_>::read
                  (param_1,(char *)&local_35c,(ulonglong)uVar7 << 0x20);
        switch(local_35c) {
        case 1:
          FUN_00650a20(&local_2c,param_1);
          uVar13 = FUN_00658530(local_204,param_1);
          FUN_00404090(uVar13);
          FUN_00403eb0();
          break;
        case 2:
          FUN_00650a20(local_588,param_1);
          uVar13 = FUN_00658530(local_1a4,param_1);
          FUN_00404090(uVar13);
          FUN_00403eb0();
          break;
        case 3:
          FUN_00650a20(local_4c8,param_1);
          std::basic_istream<char,std::char_traits<char>_>::read
                    (param_1,(char *)&local_33c,(ulonglong)uVar7 << 0x20);
          local_c4.ContinuousAttribute<plasma::Vector<4,float>_>_data.offset_0x0 = local_33c;
          break;
        case 4:
          FUN_00650a20(local_648,param_1);
          std::basic_istream<char,std::char_traits<char>_>::read
                    (param_1,(char *)&local_350,(ulonglong)uVar7 << 0x20);
          local_c4.ContinuousAttribute<plasma::Vector<4,float>_>_data.offset_0x8 = local_350;
          break;
        default:
          FUN_00659e80(param_1);
        }
      }
      FUN_00653720(&local_c4.Attribute_data.offset_0x18);
      local_8._0_1_ = 8;
      FUN_0064dd90();
      iVar19 = local_26c;
      break;
    case 7:
      FUN_00650a20(&local_314,param_1);
      local_18 = 0xf;
      local_1c = 0;
      local_2c = local_2c & 0xffffff00;
      local_8._0_1_ = 0xe;
      local_27c = 0;
      local_294 = 0;
      local_268 = 0;
      local_2f0 = 0;
      local_2f4 = (undefined4 *)FUN_0046d550(0,0);
      local_8._0_1_ = 0xf;
      local_274 = 0;
      FUN_00403350(&DAT_006fc918);
      local_8._0_1_ = 0x10;
      plasma::DiscreteAttribute<int>::DiscreteAttribute<int>(&local_11c,local_390,&local_274);
      local_8._0_1_ = 0x12;
      FUN_00403eb0();
      local_274 = 0;
      FUN_00403350(&DAT_006fc918);
      local_8._0_1_ = 0x13;
      plasma::DiscreteAttribute<int>::DiscreteAttribute<int>(&local_174,local_378,&local_274);
      local_8._0_1_ = 0x15;
      FUN_00403eb0();
      FUN_00403350(&DAT_006fc918);
      local_8._0_1_ = 0x16;
      plasma::ContinuousAttribute<plasma::Vector<4,float>_>::
      ContinuousAttribute<plasma::Vector<4,float>_>(&local_c4,local_3a8,&local_330);
      local_8._0_1_ = 0x18;
      FUN_00403eb0();
      puVar11 = (undefined8 *)
                (local_c4.Attribute_data.offset_0x1c * 0x10 +
                local_c4.ContinuousAttribute<plasma::Vector<4,float>_>_data.offset_0x0);
      local_6c = 0x3f800000;
      uStack_68 = 0x3f800000;
      local_64 = 0x3f800000;
      uStack_60 = 0x3f800000;
      *puVar11 = 0x3f8000003f800000;
      puVar11[1] = 0x3f8000003f800000;
      *(undefined4 *)
       (local_11c.DiscreteAttribute<int>_data.offset_0x0 + local_11c.Attribute_data.offset_0x1c * 4)
           = 1;
      *(undefined4 *)
       (local_174.DiscreteAttribute<int>_data.offset_0x0 + local_174.Attribute_data.offset_0x1c * 4)
           = 0;
      local_2c8 = 0;
      local_2cc = (undefined4 *)FUN_0046d710(0,0);
      local_274 = local_314 + local_30c;
      local_8._0_1_ = 0x19;
      iVar19 = local_274;
      while( true ) {
        puVar9 = (uint *)std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
        if (((puVar9[2] + *puVar9 == iVar19) &&
            (puVar9[3] + puVar9[1] + (uint)CARRY4(puVar9[2],*puVar9) ==
             local_310 + local_308 + (uint)CARRY4(local_314,local_30c))) ||
           ((*(byte *)((int)&param_1[3].vbtablePtr +
                      param_1->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset) & 1) != 0
           )) break;
        std::basic_istream<char,std::char_traits<char>_>::read
                  (param_1,(char *)&local_358,(ulonglong)uVar7 << 0x20);
        switch(local_358) {
        case 1:
          FUN_00650a20(local_5b8,param_1);
          uVar13 = FUN_00658530(local_1ec,param_1);
          FUN_00404090(uVar13);
          FUN_00403eb0();
          break;
        case 2:
          FUN_00650a20(local_450,param_1);
          FUN_0064cd70(param_1);
          break;
        case 3:
          FUN_00650a20(local_480,param_1);
          local_2e8 = FUN_0064cd70(param_1);
          FUN_004860b0(&local_2e8);
          break;
        case 4:
          FUN_00650a20(local_3d8,param_1);
          local_27c = FUN_0064cd70(param_1);
          piVar15 = (int *)FUN_00468910(&local_27c);
          local_27c = *piVar15;
          iVar19 = local_274;
          break;
        case 5:
          FUN_00650a20(local_3f0,param_1);
          local_294 = FUN_0064cd70(param_1);
          puVar8 = (undefined4 *)FUN_00468910(&local_294);
          local_294 = *puVar8;
          iVar19 = local_274;
          break;
        case 6:
          FUN_00650a20(local_420,param_1);
          local_268 = FUN_0064cd70(param_1);
          piVar15 = (int *)FUN_00468910(&local_268);
          local_268 = *piVar15;
          iVar19 = local_274;
          break;
        case 7:
          FUN_00650a20(local_4b0,param_1);
          local_344 = FUN_0064cd70(param_1);
          break;
        case 8:
          FUN_0064cbe0(param_1,&local_11c,&local_290);
          break;
        case 9:
          FUN_0064cbe0(param_1,&local_174,&local_290);
          break;
        case 10:
          FUN_00650a20(local_4e0,param_1);
          uVar13 = FUN_00658530(local_234,param_1);
          local_8._0_1_ = 0x1a;
          uVar12 = FUN_00658530(local_21c,param_1);
          uVar13 = FUN_0064bec0(local_264,uVar12,uVar13);
          local_8._0_1_ = 0x1c;
          FUN_006536d0(uVar13);
          FUN_0064dd90();
          FUN_00403eb0();
          local_8._0_1_ = 0x19;
          FUN_00403eb0();
          iVar19 = local_274;
          break;
        case 0xb:
          FUN_0064ca40(param_1,&local_c4,&local_290);
          break;
        default:
          FUN_00659e80(param_1);
        }
      }
      iVar19 = local_2fc;
      if (local_2bc != 0) {
        uVar13 = FUN_006089c0(local_1d4,&local_2c);
        local_8._0_1_ = 0x1d;
        iVar19 = FUN_0064f4e0(local_294,local_27c,0,0,uVar13);
        local_8._0_1_ = 0x19;
        FUN_00593e50();
        FUN_00636ef0(local_268);
        puVar18 = local_2cc;
        *(undefined4 *)(iVar19 + 200) = local_344;
        for (puVar8 = (undefined4 *)*local_2cc; puVar8 != puVar18; puVar8 = (undefined4 *)*puVar8) {
          FUN_00636db0(puVar8 + 8,puVar8 + 2);
        }
        if ((param_3 & 4) != 0) {
          *(uint *)(iVar19 + 200) = *(uint *)(iVar19 + 200) | 8;
        }
      }
      iVar17 = local_2bc;
      if ((undefined4 **)(iVar19 + 0xd8) != &local_2f4) {
        FUN_004ab940(*local_2f4,local_2f4);
      }
      local_2bc = iVar17 + 1;
      local_2e8 = iVar17;
      piVar15 = (int *)FUN_00468910(&local_2e8);
      *piVar15 = iVar19;
      FUN_00681b70();
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2cc);
    case 8:
      FUN_00654ff0(param_1,&local_290);
      break;
    case 9:
      FUN_00650a20(&local_2c,param_1);
      local_30 = 0xf;
      local_34 = 0;
      local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
      local_268 = local_2c + local_24;
      local_8 = CONCAT31(local_8._1_3_,9);
      local_27c = local_28 + local_20 + (uint)CARRY4(local_2c,local_24);
      local_274 = -1;
      iVar19 = -1;
      iVar17 = local_27c;
      while( true ) {
        puVar9 = (uint *)std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
        if (((puVar9[2] + *puVar9 == local_268) &&
            (puVar9[3] + puVar9[1] + (uint)CARRY4(puVar9[2],*puVar9) == iVar17)) ||
           ((*(byte *)((int)&param_1[3].vbtablePtr +
                      param_1->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset) & 1) != 0
           )) break;
        std::basic_istream<char,std::char_traits<char>_>::read
                  (param_1,(char *)&local_348,(ulonglong)uVar7 << 0x20);
        if (local_348 == 1) {
          FUN_00650a20(local_338,param_1);
          std::basic_istream<char,std::char_traits<char>_>::read
                    (param_1,(char *)&local_354,(ulonglong)uVar7 << 0x20);
          iVar19 = local_354;
        }
        else if (local_348 == 3) {
          FUN_00650a20(&local_314,param_1);
          ppvVar10 = (void **)FUN_00658530(local_5c,param_1);
          if (local_44 != ppvVar10) {
            if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
              operator_delete(local_44[0]);
            }
            local_30 = 0xf;
            local_34 = 0;
            local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
            FUN_00405060(ppvVar10);
          }
          if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
            operator_delete(local_5c[0]);
          }
          local_48 = 0xf;
          local_4c = 0;
          local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
          iVar17 = local_27c;
        }
        else {
          FUN_00659e80();
        }
      }
      local_274 = iVar19;
      if (iVar19 != -1) {
        ppvVar10 = (void **)FUN_0064e0f0(&local_274);
        if (ppvVar10 != local_44) {
          FUN_0040c0a0(local_44,0,0xffffffff);
        }
      }
      local_8._0_1_ = 8;
      FUN_00403eb0();
      iVar19 = local_26c;
      break;
    case 10:
      local_268 = local_288;
      local_288 = local_288 + 1;
      puVar8 = (undefined4 *)FUN_00468910(&local_268);
      uVar13 = FUN_00654240(param_1,&local_290);
      *puVar8 = uVar13;
      iVar19 = local_26c;
      break;
    case 0xb:
    case 0xc:
      local_26c = iVar19 + 1;
      local_268 = iVar19;
      puVar8 = (undefined4 *)FUN_00468910(&local_268);
      uVar13 = FUN_00659740(param_1);
      *puVar8 = uVar13;
      iVar19 = local_26c;
      break;
    case 0xd:
      local_26c = iVar19 + 1;
      local_268 = iVar19;
      puVar8 = (undefined4 *)FUN_00468910(&local_268);
      uVar13 = FUN_00654000(param_1);
      *puVar8 = uVar13;
      iVar19 = local_26c;
      break;
    case 0xe:
      local_26c = iVar19 + 1;
      local_268 = iVar19;
      puVar8 = (undefined4 *)FUN_00468910(&local_268);
      uVar13 = FUN_00654700(param_1);
      *puVar8 = uVar13;
      iVar19 = local_26c;
      break;
    case 0x11:
      local_26c = iVar19 + 1;
      local_268 = iVar19;
      puVar8 = (undefined4 *)FUN_00468910(&local_268);
      uVar13 = FUN_00657a00(param_1);
      *puVar8 = uVar13;
      iVar19 = local_26c;
      break;
    case 0x12:
      local_26c = iVar19 + 1;
      local_268 = iVar19;
      puVar8 = (undefined4 *)FUN_00468910(&local_268);
      uVar13 = FUN_00657ce0(param_1);
      *puVar8 = uVar13;
      iVar19 = local_26c;
      break;
    case 0x13:
      local_26c = iVar19 + 1;
      local_268 = iVar19;
      puVar8 = (undefined4 *)FUN_00468910(&local_268);
      uVar13 = FUN_00654df0(param_1);
      *puVar8 = uVar13;
      iVar19 = local_26c;
      break;
    case 0x14:
      FUN_00650a20(local_510,param_1);
      std::basic_istream<char,std::char_traits<char>_>::read
                (param_1,(char *)&local_2e4,(ulonglong)uVar7 << 0x20);
      *local_298 = local_2e4;
      break;
    case 0x15:
      FUN_00650a20(local_540,param_1);
      std::basic_istream<char,std::char_traits<char>_>::read
                (param_1,(char *)&local_2d8,(ulonglong)uVar7 << 0x20);
      local_298[1] = local_2d8;
      break;
    case 0x16:
      FUN_00650a20(local_570,param_1);
      std::basic_istream<char,std::char_traits<char>_>::read
                (param_1,(char *)&local_2ec,(ulonglong)uVar7 << 0x20);
      local_298[2] = local_2ec;
      break;
    case 0x17:
      FUN_00650a20(local_5a0,param_1);
      std::basic_istream<char,std::char_traits<char>_>::read
                (param_1,(char *)&local_270,(ulonglong)uVar7 << 0x20);
      local_298[3] = local_270;
      break;
    case 0x18:
      local_268 = local_288;
      local_288 = local_288 + 1;
      puVar8 = (undefined4 *)FUN_00468910(&local_268);
      uVar13 = FUN_00654900(param_1,&local_290);
      *puVar8 = uVar13;
      iVar19 = local_26c;
    }
    bVar2 = *(byte *)((int)&param_1[3].vbtablePtr +
                     param_1->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset);
  }
  if (param_1[0x18].vbtablePtr == (basic_istream<char,std::char_traits<char>_>_vbtable *)0x0) {
    pbVar16 = (basic_istream<char,std::char_traits<char>_> *)0x0;
  }
  else {
    cVar6 = FUN_00405cc0();
    pbVar16 = param_1 + 4;
    if (cVar6 == '\0') {
      pbVar16 = (basic_istream<char,std::char_traits<char>_> *)0x0;
    }
    iVar19 = fclose((FILE *)param_1[0x18].vbtablePtr);
    if (iVar19 != 0) {
      pbVar16 = (basic_istream<char,std::char_traits<char>_> *)0x0;
    }
  }
  *(undefined1 *)&param_1[0x17].vbtablePtr = 0;
  *(undefined1 *)((int)&param_1[0x15].vbtablePtr + 1) = 0;
  std::basic_streambuf<char,std::char_traits<char>_>::_Init
            ((basic_streambuf<char,std::char_traits<char>_> *)(param_1 + 4));
  param_1[0x18].vbtablePtr = (basic_istream<char,std::char_traits<char>_>_vbtable *)0x0;
  param_1[0x16].vbtablePtr = (basic_istream<char,std::char_traits<char>_>_vbtable *)DAT_0076af5c;
  param_1[0x14].vbtablePtr = (basic_istream<char,std::char_traits<char>_>_vbtable *)0x0;
  if (pbVar16 == (basic_istream<char,std::char_traits<char>_> *)0x0) {
    std::basic_ios<char,std::char_traits<char>_>::setstate
              ((basic_ios<char,std::char_traits<char>_> *)
               ((int)&param_1->vbtablePtr +
               param_1->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset),2,false);
  }
  piVar15 = (int *)*local_2a0;
  piVar14 = local_2a0;
  if (piVar15 != local_2a0) {
    do {
      if (piVar15[5] != 0) {
        piVar14 = (int *)**(int **)(piVar15[5] + 0xd8);
        if (piVar14 != *(int **)(piVar15[5] + 0xd8)) {
          do {
            puVar8 = (undefined4 *)FUN_00468910(piVar14 + 2);
            FUN_00630be0(*puVar8);
            piVar14 = (int *)*piVar14;
          } while (piVar14 != (int *)*(int *)(piVar15[5] + 0xd8));
        }
        iVar19 = piVar15[5];
        puVar8 = *(undefined4 **)(iVar19 + 0xd8);
        pvVar3 = (void *)*puVar8;
        *puVar8 = puVar8;
        *(int *)(*(int *)(iVar19 + 0xd8) + 4) = *(int *)(iVar19 + 0xd8);
        *(undefined4 *)(iVar19 + 0xdc) = 0;
        piVar14 = local_2a0;
        if (pvVar3 != *(void **)(iVar19 + 0xd8)) {
                    /* WARNING: Subroutine does not return */
          operator_delete(pvVar3);
        }
      }
      if (*(char *)((int)piVar15 + 0xd) == '\0') {
        piVar4 = (int *)piVar15[2];
        if (*(char *)((int)piVar4 + 0xd) == '\0') {
          cVar6 = *(char *)(*piVar4 + 0xd);
          piVar15 = piVar4;
          piVar4 = (int *)*piVar4;
          while (cVar6 == '\0') {
            cVar6 = *(char *)(*piVar4 + 0xd);
            piVar15 = piVar4;
            piVar4 = (int *)*piVar4;
          }
        }
        else {
          cVar6 = *(char *)(piVar15[1] + 0xd);
          piVar5 = (int *)piVar15[1];
          piVar4 = piVar15;
          while ((piVar15 = piVar5, cVar6 == '\0' && (piVar4 == (int *)piVar15[2]))) {
            cVar6 = *(char *)(piVar15[1] + 0xd);
            piVar5 = (int *)piVar15[1];
            piVar4 = piVar15;
          }
        }
      }
    } while (piVar15 != piVar14);
  }
  iVar19 = local_2fc;
  if (((param_3 & 1) == 0) && (piVar15 = (int *)*piVar14, piVar15 != piVar14)) {
    do {
      if ((piVar15[5] != 0) &&
         ((iVar17 = *(int *)(piVar15[5] + 0x28), iVar17 == 0 || (iVar17 == iVar19)))) {
        FUN_00637120();
        piVar14 = local_2a0;
      }
      if (*(char *)((int)piVar15 + 0xd) == '\0') {
        piVar4 = (int *)piVar15[2];
        if (*(char *)((int)piVar4 + 0xd) == '\0') {
          cVar6 = *(char *)(*piVar4 + 0xd);
          piVar15 = piVar4;
          piVar4 = (int *)*piVar4;
          while (cVar6 == '\0') {
            cVar6 = *(char *)(*piVar4 + 0xd);
            piVar15 = piVar4;
            piVar4 = (int *)*piVar4;
          }
        }
        else {
          cVar6 = *(char *)(piVar15[1] + 0xd);
          piVar5 = (int *)piVar15[1];
          piVar4 = piVar15;
          while ((piVar15 = piVar5, cVar6 == '\0' && (piVar4 == (int *)piVar15[2]))) {
            cVar6 = *(char *)(piVar15[1] + 0xd);
            piVar5 = (int *)piVar15[1];
            piVar4 = piVar15;
          }
        }
      }
    } while (piVar15 != piVar14);
  }
  piVar15 = (int *)*local_2d4;
  if (piVar15 != local_2d4) {
    do {
      uVar13 = FUN_006089c0(local_5c,piVar15 + 8);
      local_8._0_1_ = 0x1e;
      iVar19 = FUN_00650b00(uVar13,(float)piVar15[0xe],0,piVar15[0xf],1);
      local_8._0_1_ = 8;
      if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_5c[0]);
      }
      local_48 = 7;
      local_4c = 0;
      local_5c[0] = (void *)((uint)local_5c[0] & 0xffff0000);
      if (iVar19 != 0) {
        uVar13 = *(undefined4 *)(iVar19 + 0x30);
        puVar8 = (undefined4 *)FUN_00468910(piVar15 + 0x10);
        *puVar8 = uVar13;
        local_270 = *(float *)(iVar19 + 0x30);
        piVar14 = (int *)FUN_00468910(&local_270);
        *piVar14 = iVar19;
      }
      piVar15 = (int *)*piVar15;
    } while (piVar15 != local_2d4);
  }
  puVar18 = local_2e0;
  for (puVar8 = (undefined4 *)*local_2e0; puVar8 != local_2e0; puVar8 = (undefined4 *)*puVar8) {
  }
  piVar15 = (int *)*local_284;
  if (piVar15 != local_284) {
    do {
      iVar19 = __RTDynamicCast(piVar15[5],0,&plasma::Widget::RTTI_Type_Descriptor,
                               &plasma::ScrollButton::RTTI_Type_Descriptor,0);
      if (iVar19 != 0) {
        puVar8 = (undefined4 *)FUN_00468910(iVar19 + 0x248);
        FUN_0067d9e0(*puVar8);
      }
      iVar19 = __RTDynamicCast(piVar15[5],0,&plasma::Widget::RTTI_Type_Descriptor,
                               &plasma::ScrollSlider::RTTI_Type_Descriptor,0);
      if (iVar19 != 0) {
        puVar8 = (undefined4 *)FUN_00468910(iVar19 + 0x250);
        FUN_00662fb0(*puVar8);
      }
      if (*(char *)((int)piVar15 + 0xd) == '\0') {
        piVar14 = (int *)piVar15[2];
        if (*(char *)((int)piVar14 + 0xd) == '\0') {
          cVar6 = *(char *)(*piVar14 + 0xd);
          piVar15 = piVar14;
          piVar14 = (int *)*piVar14;
          while (cVar6 == '\0') {
            cVar6 = *(char *)(*piVar14 + 0xd);
            piVar15 = piVar14;
            piVar14 = (int *)*piVar14;
          }
        }
        else {
          cVar6 = *(char *)(piVar15[1] + 0xd);
          piVar4 = (int *)piVar15[1];
          piVar14 = piVar15;
          while ((piVar15 = piVar4, cVar6 == '\0' && (piVar14 == (int *)piVar15[2]))) {
            cVar6 = *(char *)(piVar15[1] + 0xd);
            piVar4 = (int *)piVar15[1];
            piVar14 = piVar15;
          }
        }
      }
    } while (piVar15 != local_284);
  }
  piVar15 = local_278;
  if ((param_3 & 2) == 0) {
    local_2d8 = (float)local_278[0x43];
    fVar21 = (float)local_278[0x41];
    iVar19 = local_278[0x42];
    local_2e4 = (float)local_278[0x44];
    fVar1 = *local_298;
    local_278[0x44] = (int)local_298[1];
    local_278[0x41] = 0;
    local_278[0x42] = 0;
    local_278[0x43] = (int)fVar1;
    local_2ec = fVar21;
    FUN_00635700();
    piVar4 = local_278;
    piVar14 = *(int **)piVar15[0x1f];
    if (piVar14 != (int *)piVar15[0x1f]) {
      local_270 = 0.0;
      do {
        (**(code **)(*(int *)piVar14[2] + 0x1c))();
        piVar15 = (int *)FUN_00468910(&local_270);
        if ((undefined4 *)*piVar15 != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)*piVar15)();
        }
        piVar14 = (int *)*piVar14;
        fVar21 = local_2ec;
      } while (piVar14 != (int *)piVar4[0x1f]);
    }
    local_278[0x41] = (int)fVar21;
    local_278[0x43] = (int)local_2d8;
    local_278[0x44] = (int)local_2e4;
    local_278[0x42] = iVar19;
    piVar15 = *(int **)local_278[0x1f];
    puVar18 = local_2e0;
    if (piVar15 != (int *)local_278[0x1f]) {
      local_270 = 1.4013e-45;
      do {
        (**(code **)(*(int *)piVar15[2] + 0x20))();
        piVar14 = (int *)FUN_00468910(&local_270);
        if ((undefined4 *)*piVar14 != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)*piVar14)();
        }
        piVar15 = (int *)*piVar15;
        puVar18 = local_2e0;
      } while (piVar15 != (int *)local_278[0x1f]);
    }
  }
  puVar8 = (undefined4 *)*puVar18;
  *puVar18 = puVar18;
  puVar18[1] = puVar18;
  if (puVar8 == puVar18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(puVar18);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(puVar8);
}


/* FUN_006570c0 @ 006570c0  kind=gamemisc  attributed-by=caller-vote  size=935 */

void FUN_006570c0(void **param_1,int param_2,undefined1 param_3,PixelFont *param_4)

{
  int *piVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  PixelFont *pPVar5;
  undefined4 uVar6;
  int extraout_EAX;
  Font *in_ECX;
  PixelFont **ppPVar7;
  PixelFont *pPVar8;
  int *piVar9;
  void **ppvVar10;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  uint local_88;
  void **local_84;
  PixelFont *local_80;
  PixelFont *local_7c;
  PixelFont *local_78;
  void *local_74 [4];
  undefined4 local_64;
  uint local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  PixelFont *local_44 [4];
  int local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = -1;
  puStack_c = &LAB_006f6b91;
  local_10 = ExceptionList;
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_84 = param_1;
  local_80 = param_4;
  local_78 = (PixelFont *)0x2e;
  local_14 = uVar3;
  iVar4 = FUN_00639a70(&local_78,0xffffffff,1);
  FUN_0043a450(local_44,iVar4 + 1,(int)param_1[4] + (-1 - iVar4));
  local_8 = 0;
  local_78 = (PixelFont *)0x2f;
  pPVar5 = (PixelFont *)FUN_00639a70(&local_78,0xffffffff,1);
  local_78 = (PixelFont *)0x5c;
  local_7c = pPVar5;
  local_78 = (PixelFont *)FUN_00639a70(&local_78,0xffffffff,1);
  ppPVar7 = &local_78;
  if ((int)local_78 <= (int)pPVar5) {
    ppPVar7 = &local_7c;
  }
  local_78 = *ppPVar7;
  local_7c = (PixelFont *)local_44;
  if (7 < local_30) {
    local_7c = local_44[0];
  }
  pPVar5 = (PixelFont *)((int)&local_7c->vftablePtr + local_34 * 2);
  pPVar8 = (PixelFont *)local_44;
  if (7 < local_30) {
    pPVar8 = local_44[0];
  }
  if (pPVar8 != pPVar5) {
    FUN_0064bdf0(&local_7c,pPVar8,pPVar5,local_7c,toupper_exref,uVar3);
  }
  FUN_0043a450(local_2c,(undefined1 *)((int)&local_78->vftablePtr + 1),
               (int)param_1[4] + (-1 - (int)local_78));
  local_8._0_1_ = 1;
  iVar4 = FUN_00428db0(0,local_34,&DAT_0071eb48,3);
  if (iVar4 == 0) {
    local_7c = operator_new(0x74);
    local_8._0_1_ = 2;
    if (local_7c == (PixelFont *)0x0) {
      pPVar5 = (PixelFont *)0x0;
    }
    else {
      pPVar5 = plasma::PixelFont::PixelFont(local_7c,in_ECX,(int)local_2c);
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    if (&(pPVar5->NamedObject_data).offset_0x28 != local_2c) {
      FUN_0040f680(local_2c,0,0xffffffff);
    }
    (pPVar5->NamedObject_data).offset_0x40 = param_2;
    *(PixelFont **)&(pPVar5->NamedObject_data).offset_0x44 = local_80;
    (pPVar5->NamedObject_data).offset_0x48 = param_3;
  }
  else {
    iVar4 = FUN_00658c40(param_1);
    if (iVar4 == 0) {
      piVar1 = (int *)(in_ECX->NamedObject_data).offset_0x130;
      piVar9 = (int *)*piVar1;
      uVar2 = (undefined1)local_8;
      if (piVar9 != piVar1) {
        do {
          local_8._0_1_ = uVar2;
          uVar6 = FUN_00451850(local_74,piVar9 + 2,&DAT_006fd42c);
          local_8._0_1_ = 0xd;
          uVar6 = FUN_004517d0(local_5c,uVar6,local_2c);
          local_8._0_1_ = 0xe;
          iVar4 = FUN_00658c40(uVar6);
          if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
            operator_delete(local_5c[0]);
          }
          local_48 = 7;
          local_4c = 0;
          local_5c[0] = (void *)((uint)local_5c[0] & 0xffff0000);
          local_8._0_1_ = 1;
          uVar2 = (undefined1)local_8;
          local_8._0_1_ = 1;
          if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
            operator_delete(local_74[0]);
          }
          local_60 = 7;
          local_64 = 0;
          local_74[0] = (void *)((uint)local_74[0] & 0xffff0000);
          if (iVar4 != 0) goto LAB_00657345;
          piVar9 = (int *)*piVar9;
        } while (piVar9 != (int *)(in_ECX->NamedObject_data).offset_0x130);
      }
      local_80 = operator_new(0x74);
      ppvVar10 = local_84;
      local_8._0_1_ = 0xf;
      if (local_80 == (PixelFont *)0x0) {
        pPVar5 = (PixelFont *)0x0;
      }
      else {
        pPVar5 = plasma::PixelFont::PixelFont(local_80,in_ECX,(int)local_84);
      }
      local_8 = CONCAT31(local_8._1_3_,1);
      if (&(pPVar5->NamedObject_data).offset_0x28 == ppvVar10) goto LAB_00657420;
    }
    else {
LAB_00657345:
      local_98 = 1;
      local_94 = 0;
      local_90 = 0;
      local_8c = 1;
      local_88 = 1;
      FUN_006612d0(&local_98);
      *(undefined1 *)(iVar4 + 0x50) = 1;
      local_88 = 7;
      local_8c = 0;
      local_9c = (void *)((uint)local_9c._2_2_ << 0x10);
      FUN_0040f7a0(&PTR_006fccac,0);
      local_8._0_1_ = 0x10;
      std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
      basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                ((basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                 in_ECX,iVar4,-1,-1,&local_9c);
      local_8 = CONCAT31(local_8._1_3_,1);
      if (7 < local_88) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_9c);
      }
      local_88 = 7;
      local_8c = 0;
      local_9c = (void *)((uint)local_9c & 0xffff0000);
      if ((extraout_EAX == 0) || (ppvVar10 = local_2c, (void **)(extraout_EAX + 0x34) == ppvVar10))
      goto LAB_00657420;
    }
    FUN_0040f680(ppvVar10,0,0xffffffff);
  }
LAB_00657420:
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  local_18 = 7;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_44[0]);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00657a00 @ 00657a00  kind=gamemisc  attributed-by=caller-vote  size=496 */

ScrollButton * FUN_00657a00(ScrollButton *param_1)

{
  undefined8 uVar1;
  basic_istream<char,std::char_traits<char>_> *this;
  uint uVar2;
  char cVar3;
  uint uVar4;
  undefined8 *puVar5;
  ScrollButton *this_00;
  uint *puVar6;
  int iVar7;
  bool bVar8;
  undefined8 local_54;
  uint local_4c;
  int iStack_48;
  undefined4 local_3c;
  undefined4 local_2c;
  uint local_28;
  int local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  this = (basic_istream<char,std::char_traits<char>_> *)param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f6913;
  local_10 = ExceptionList;
  uVar4 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  std::basic_istream<char,std::char_traits<char>_>::read
            ((basic_istream<char,std::char_traits<char>_> *)param_1,(char *)&local_18,
             (ulonglong)uVar4 << 0x20);
  iVar7 = (int)local_18 >> 0x1f;
  puVar5 = (undefined8 *)
           std::basic_istream<char,std::char_traits<char>_>::tellg
                     ((basic_istream<char,std::char_traits<char>_> *)param_1);
  uVar1 = puVar5[1];
  local_54._0_4_ = (uint)*puVar5;
  bVar8 = CARRY4((uint)local_54,local_18);
  local_18 = (uint)local_54 + local_18;
  local_54._4_4_ = (int)((ulonglong)*puVar5 >> 0x20);
  local_1c = local_54._4_4_ + iVar7 + (uint)bVar8;
  local_28 = 7;
  local_2c = 0;
  local_3c = (void *)((uint)local_3c._2_2_ << 0x10);
  FUN_0040f7a0(&PTR_006fccac,0);
  local_8 = 0;
  this_00 = operator_new(0x24c);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (this_00 == (ScrollButton *)0x0) {
    param_1 = (ScrollButton *)0x0;
  }
  else {
    param_1 = plasma::ScrollButton::ScrollButton(this_00,local_14,0,&local_3c);
  }
  local_8 = 0xffffffff;
  if (7 < local_28) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_3c);
  }
  iStack_48 = (int)((ulonglong)uVar1 >> 0x20);
  local_3c = (void *)((uint)local_3c & 0xffff0000);
  local_4c = (uint)uVar1;
  bVar8 = CARRY4(local_4c,local_18);
  local_18 = local_4c + local_18;
  local_28 = 7;
  local_24 = iStack_48 + local_1c + (uint)bVar8;
  local_2c = 0;
  iVar7 = local_24;
  while( true ) {
    puVar6 = (uint *)std::basic_istream<char,std::char_traits<char>_>::tellg(this);
    if (((puVar6[2] + *puVar6 == local_18) &&
        (puVar6[3] + puVar6[1] + (uint)CARRY4(puVar6[2],*puVar6) == iVar7)) ||
       ((*(byte *)((int)&this[3].vbtablePtr +
                  this->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset) & 1) != 0))
    break;
    std::basic_istream<char,std::char_traits<char>_>::read
              (this,(char *)&local_1c,(ulonglong)uVar4 << 0x20);
    cVar3 = FUN_00657c00();
    if (cVar3 == '\0') {
      std::basic_istream<char,std::char_traits<char>_>::read
                (this,(char *)&local_20,(ulonglong)uVar4 << 0x20);
      uVar2 = local_20;
      iVar7 = (int)local_20 >> 0x1f;
      puVar5 = (undefined8 *)std::basic_istream<char,std::char_traits<char>_>::tellg(this);
      local_54._0_4_ = (uint)*puVar5;
      local_54._4_4_ = (int)((ulonglong)*puVar5 >> 0x20);
      local_54 = CONCAT44(local_54._4_4_ + iVar7 + (uint)CARRY4((uint)local_54,uVar2),
                          (uint)local_54 + uVar2);
      std::basic_istream<char,std::char_traits<char>_>::seekg
                (this,local_54,puVar5[1],(int)puVar5[2],(int)((ulonglong)puVar5[2] >> 0x20));
      iVar7 = local_24;
    }
  }
  ExceptionList = local_10;
  return param_1;
}


/* FUN_00657c00 @ 00657c00  kind=gamemisc  attributed-by=caller-vote  size=209 */

undefined4
FUN_00657c00(basic_istream<char,std::char_traits<char>_> *param_1,int param_2,int param_3)

{
  basic_istream<char,std::char_traits<char>_> *this;
  undefined4 uVar1;
  uint unaff_ESI;
  undefined1 local_1c [24];
  
  this = param_1;
  if (param_3 == 0x11) {
    FUN_00650a20(local_1c,param_1);
    std::basic_istream<char,std::char_traits<char>_>::read
              (this,(char *)&param_1,(ulonglong)unaff_ESI << 0x20);
    *(basic_istream<char,std::char_traits<char>_> **)(param_2 + 0x238) = param_1;
    return 1;
  }
  if (param_3 != 0x12) {
    if (param_3 != 0x13) {
      uVar1 = FUN_00659940(param_1,param_2,param_3);
      return uVar1;
    }
    FUN_00650a20(local_1c,param_1);
    std::basic_istream<char,std::char_traits<char>_>::read
              (this,(char *)&param_1,(ulonglong)unaff_ESI << 0x20);
    *(basic_istream<char,std::char_traits<char>_> **)(param_2 + 0x248) = param_1;
    return 1;
  }
  FUN_00650a20(local_1c,param_1);
  std::basic_istream<char,std::char_traits<char>_>::read
            (this,(char *)&param_1,(ulonglong)unaff_ESI << 0x20);
  *(basic_istream<char,std::char_traits<char>_> **)(param_2 + 0x23c) = param_1;
  return 1;
}


/* FUN_00657ce0 @ 00657ce0  kind=gamemisc  attributed-by=caller-vote  size=496 */

ScrollSlider * FUN_00657ce0(ScrollSlider *param_1)

{
  undefined8 uVar1;
  basic_istream<char,std::char_traits<char>_> *this;
  uint uVar2;
  char cVar3;
  uint uVar4;
  undefined8 *puVar5;
  ScrollSlider *this_00;
  uint *puVar6;
  int iVar7;
  bool bVar8;
  undefined8 local_54;
  uint local_4c;
  int iStack_48;
  undefined4 local_3c;
  undefined4 local_2c;
  uint local_28;
  int local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  this = (basic_istream<char,std::char_traits<char>_> *)param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f6913;
  local_10 = ExceptionList;
  uVar4 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  std::basic_istream<char,std::char_traits<char>_>::read
            ((basic_istream<char,std::char_traits<char>_> *)param_1,(char *)&local_18,
             (ulonglong)uVar4 << 0x20);
  iVar7 = (int)local_18 >> 0x1f;
  puVar5 = (undefined8 *)
           std::basic_istream<char,std::char_traits<char>_>::tellg
                     ((basic_istream<char,std::char_traits<char>_> *)param_1);
  uVar1 = puVar5[1];
  local_54._0_4_ = (uint)*puVar5;
  bVar8 = CARRY4((uint)local_54,local_18);
  local_18 = (uint)local_54 + local_18;
  local_54._4_4_ = (int)((ulonglong)*puVar5 >> 0x20);
  local_1c = local_54._4_4_ + iVar7 + (uint)bVar8;
  local_28 = 7;
  local_2c = 0;
  local_3c = (void *)((uint)local_3c._2_2_ << 0x10);
  FUN_0040f7a0(&PTR_006fccac,0);
  local_8 = 0;
  this_00 = operator_new(0x254);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (this_00 == (ScrollSlider *)0x0) {
    param_1 = (ScrollSlider *)0x0;
  }
  else {
    param_1 = plasma::ScrollSlider::ScrollSlider(this_00,local_14,0,&local_3c);
  }
  local_8 = 0xffffffff;
  if (7 < local_28) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_3c);
  }
  iStack_48 = (int)((ulonglong)uVar1 >> 0x20);
  local_3c = (void *)((uint)local_3c & 0xffff0000);
  local_4c = (uint)uVar1;
  bVar8 = CARRY4(local_4c,local_18);
  local_18 = local_4c + local_18;
  local_28 = 7;
  local_24 = iStack_48 + local_1c + (uint)bVar8;
  local_2c = 0;
  iVar7 = local_24;
  while( true ) {
    puVar6 = (uint *)std::basic_istream<char,std::char_traits<char>_>::tellg(this);
    if (((puVar6[2] + *puVar6 == local_18) &&
        (puVar6[3] + puVar6[1] + (uint)CARRY4(puVar6[2],*puVar6) == iVar7)) ||
       ((*(byte *)((int)&this[3].vbtablePtr +
                  this->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset) & 1) != 0))
    break;
    std::basic_istream<char,std::char_traits<char>_>::read
              (this,(char *)&local_1c,(ulonglong)uVar4 << 0x20);
    cVar3 = FUN_00657ee0();
    if (cVar3 == '\0') {
      std::basic_istream<char,std::char_traits<char>_>::read
                (this,(char *)&local_20,(ulonglong)uVar4 << 0x20);
      uVar2 = local_20;
      iVar7 = (int)local_20 >> 0x1f;
      puVar5 = (undefined8 *)std::basic_istream<char,std::char_traits<char>_>::tellg(this);
      local_54._0_4_ = (uint)*puVar5;
      local_54._4_4_ = (int)((ulonglong)*puVar5 >> 0x20);
      local_54 = CONCAT44(local_54._4_4_ + iVar7 + (uint)CARRY4((uint)local_54,uVar2),
                          (uint)local_54 + uVar2);
      std::basic_istream<char,std::char_traits<char>_>::seekg
                (this,local_54,puVar5[1],(int)puVar5[2],(int)((ulonglong)puVar5[2] >> 0x20));
      iVar7 = local_24;
    }
  }
  ExceptionList = local_10;
  return param_1;
}


/* FUN_00657ee0 @ 00657ee0  kind=gamemisc  attributed-by=caller-vote  size=150 */

undefined4
FUN_00657ee0(basic_istream<char,std::char_traits<char>_> *param_1,int param_2,int param_3)

{
  basic_istream<char,std::char_traits<char>_> *this;
  undefined4 uVar1;
  uint unaff_ESI;
  undefined1 local_1c [24];
  
  this = param_1;
  if (param_3 == 0x14) {
    FUN_00650a20(local_1c,param_1);
    std::basic_istream<char,std::char_traits<char>_>::read
              (this,(char *)&param_1,(ulonglong)unaff_ESI << 0x20);
    *(uint *)(param_2 + 0x238) =
         (uint)(param_1 != (basic_istream<char,std::char_traits<char>_> *)0x0);
    return 1;
  }
  if (param_3 != 0x15) {
    uVar1 = FUN_00659940(param_1,param_2,param_3);
    return uVar1;
  }
  FUN_00650a20(local_1c,param_1);
  std::basic_istream<char,std::char_traits<char>_>::read
            (this,(char *)&param_1,(ulonglong)unaff_ESI << 0x20);
  *(basic_istream<char,std::char_traits<char>_> **)(param_2 + 0x250) = param_1;
  return 1;
}


/* FUN_00657f80 @ 00657f80  kind=gamemisc  attributed-by=caller-vote  size=1338 */

void FUN_00657f80(basic_istream<char,std::char_traits<char>_> *param_1,undefined4 param_2,
                 undefined4 param_3)

{
  undefined ***pppuVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  SmoothMeshShape *pSVar6;
  uint *puVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 uVar13;
  bool bVar14;
  undefined1 local_148 [24];
  undefined1 local_130 [24];
  undefined1 local_118 [24];
  undefined1 local_100 [24];
  undefined1 local_e8 [24];
  undefined1 local_d0 [24];
  undefined4 local_b8;
  undefined4 local_a8;
  uint local_a4;
  uint local_a0;
  int local_9c;
  undefined4 local_98;
  undefined4 local_94;
  int local_90;
  undefined4 local_8c;
  basic_istream<char,std::char_traits<char>_> *local_88;
  int local_84;
  float local_80;
  undefined8 local_7c;
  undefined8 local_74;
  undefined8 local_6c;
  undefined4 *local_64;
  undefined4 *local_60;
  undefined4 local_5c;
  SmoothMeshShape *local_58;
  uint local_54;
  float local_50;
  uint local_4c;
  undefined4 local_48;
  void *local_44 [5];
  uint local_30;
  undefined1 local_2c [24];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f6c66;
  local_10 = ExceptionList;
  uVar4 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_48 = param_2;
  local_8c = param_3;
  local_88 = param_1;
  local_14 = uVar4;
  std::basic_istream<char,std::char_traits<char>_>::read
            (param_1,(char *)&local_54,(ulonglong)uVar4 << 0x20);
  puVar5 = (undefined8 *)std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
  uVar3 = *puVar5;
  local_74 = puVar5[1];
  local_6c = puVar5[2];
  local_7c._0_4_ = (uint)uVar3;
  bVar14 = CARRY4((uint)local_7c,local_54);
  local_4c = (uint)local_7c + local_54;
  local_7c._4_4_ = (int)((ulonglong)uVar3 >> 0x20);
  iVar12 = local_7c._4_4_ + ((int)local_54 >> 0x1f);
  local_a4 = 7;
  local_a8 = 0;
  local_b8 = (void *)((uint)local_b8._2_2_ << 0x10);
  local_7c = uVar3;
  FUN_0040f7a0(&PTR_006fccac,0);
  local_8 = 0;
  local_58 = operator_new(0xc34);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (local_58 == (SmoothMeshShape *)0x0) {
    pSVar6 = (SmoothMeshShape *)0x0;
  }
  else {
    pSVar6 = plasma::SmoothMeshShape::SmoothMeshShape(local_58,(int)local_50,&local_b8);
  }
  if (7 < local_a4) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_b8);
  }
  local_a4 = 7;
  local_a8 = 0;
  local_b8 = (void *)((uint)local_b8 & 0xffff0000);
  local_64 = (undefined4 *)0x0;
  local_60 = (undefined4 *)0x0;
  local_5c = 0;
  local_54 = (pSVar6->SmoothMeshShape_data).offset_0x240;
  local_50 = (pSVar6->SmoothMeshShape_data).offset_0x324;
  local_90 = (uint)local_74 + local_4c;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  local_9c = (int)local_74._4_4_ + iVar12 + (uint)bVar14 + (uint)CARRY4((uint)local_74,local_4c);
  uVar13 = local_48;
  do {
    puVar7 = (uint *)std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
    if (((puVar7[2] + *puVar7 == local_90) &&
        (puVar7[3] + puVar7[1] + (uint)CARRY4(puVar7[2],*puVar7) == local_9c)) ||
       ((*(byte *)((int)&param_1[3].vbtablePtr +
                  param_1->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset) & 1) != 0)) {
      (pSVar6->SmoothMeshShape_data).offset_0x324 = local_50;
      FUN_00642a20(&local_64,0);
      FUN_00642a50(local_54,1);
      puVar2 = local_64;
      if (local_64 == (undefined4 *)0x0) {
        ExceptionList = local_10;
        __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
        return;
      }
      while( true ) {
        if (puVar2 == local_60) {
                    /* WARNING: Subroutine does not return */
          operator_delete(local_64);
        }
        if ((void *)*puVar2 != (void *)0x0) break;
        puVar2 = puVar2 + 3;
      }
                    /* WARNING: Subroutine does not return */
      operator_delete((void *)*puVar2);
    }
    std::basic_istream<char,std::char_traits<char>_>::read
              (param_1,(char *)&local_98,(ulonglong)uVar4 << 0x20);
    switch(local_98) {
    case 1:
      FUN_00650a20(local_d0,param_1);
      uVar8 = FUN_00658530(local_44,param_1);
      local_8._0_1_ = 3;
      puVar9 = (undefined1 *)FUN_006089c0(local_2c,uVar8);
      local_8._0_1_ = 4;
      if (&pSVar6->NamedObject_data != (NamedObject_data *)puVar9) {
        FUN_0040f680(puVar9,0,0xffffffff);
      }
      FUN_00593e50();
      local_8._0_1_ = 2;
      if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_44[0]);
      }
      break;
    case 2:
      FUN_00650a20(local_100,param_1);
      std::basic_istream<char,std::char_traits<char>_>::read
                (param_1,(char *)&local_94,(ulonglong)uVar4 << 0x20);
      local_74 = local_74 & 0xffffffff;
      local_6c = 0;
      FUN_0040d9d0(local_94);
      local_8._0_1_ = 5;
      std::basic_istream<char,std::char_traits<char>_>::read
                (param_1,local_74._4_4_,(ulonglong)uVar4 << 0x20);
      FUN_00642610((int)&local_74 + 4);
      local_8._0_1_ = 2;
      FUN_005fb860();
      uVar13 = local_48;
      break;
    case 3:
      FUN_00650a20(local_130,param_1);
      std::basic_istream<char,std::char_traits<char>_>::read
                (param_1,(char *)&local_4c,(ulonglong)uVar4 << 0x20);
      if (0 < (int)local_4c) {
        FUN_0040d9d0(local_4c);
        std::basic_istream<char,std::char_traits<char>_>::read
                  (param_1,(char *)(pSVar6->MeshShape_data).offset_0x164,(ulonglong)uVar4 << 0x20);
        uVar13 = local_48;
      }
      break;
    case 4:
      FUN_0064c150(param_1,&(pSVar6->NamedObject_data).offset_0x50,uVar13);
      break;
    case 5:
      FUN_0064c150(param_1,&(pSVar6->NamedObject_data).field_0xa8,uVar13);
      break;
    case 6:
      FUN_0064c360(param_1,&(pSVar6->NamedObject_data).field_0x100,uVar13);
      break;
    case 7:
      pppuVar1 = &(pSVar6->MeshShape_data).offset_0x64c;
      FUN_0064cbe0(param_1,pppuVar1,local_48);
      local_84 = 0;
      iVar10 = (*(code *)(*pppuVar1)[1])();
      iVar12 = local_84;
      uVar13 = local_48;
      if (0 < iVar10) {
        do {
          puVar2 = (undefined4 *)((pSVar6->MeshShape_data).offset_0x698 + iVar12 * 4);
          puVar11 = (undefined4 *)FUN_00468910(puVar2);
          *puVar2 = *puVar11;
          iVar12 = iVar12 + 1;
          iVar10 = (*(code *)(pSVar6->MeshShape_data).offset_0x64c[1])();
          uVar13 = local_48;
          param_1 = local_88;
        } while (iVar12 < iVar10);
      }
      break;
    case 8:
      FUN_0064c710(param_1,&(pSVar6->MeshShape_data).field_0x17c,uVar13);
      break;
    case 9:
      FUN_0064c8a0(param_1,&(pSVar6->MeshShape_data).offset_0x22c,uVar13);
      break;
    case 10:
      FUN_0064c570(param_1,&(pSVar6->MeshShape_data).field_0x284,uVar13);
      break;
    case 0xb:
      FUN_0064c710(param_1,&(pSVar6->MeshShape_data).field_0x1d4,uVar13);
      break;
    case 0xc:
      FUN_00650a20(local_e8,param_1);
      std::basic_istream<char,std::char_traits<char>_>::read
                (param_1,(char *)&local_a0,(ulonglong)uVar4 << 0x20);
      local_54 = local_a0;
      break;
    default:
      FUN_00659e80(param_1);
      break;
    case 0xe:
      FUN_00650a20(local_148,param_1);
      std::basic_istream<char,std::char_traits<char>_>::read
                (param_1,(char *)&local_58,(ulonglong)uVar4 << 0x20);
      (pSVar6->MeshShape_data).offset_0x6fc = local_58;
      break;
    case 0xf:
      FUN_0064c360(param_1,&(pSVar6->MeshShape_data).field_0x4,uVar13);
      break;
    case 0x10:
      FUN_0064bf40(param_1,&(pSVar6->MeshShape_data).field_0x10c,uVar13);
      break;
    case 0x11:
      FUN_00650a20(local_118,param_1);
      std::basic_istream<char,std::char_traits<char>_>::read
                (param_1,(char *)&local_80,(ulonglong)uVar4 << 0x20);
      local_50 = local_80;
    }
  } while( true );
}


/* FUN_00658630 @ 00658630  kind=gamemisc  attributed-by=caller-vote  size=1530 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00658630(basic_istream<char,std::char_traits<char>_> *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  TextShape *pTVar5;
  uint uVar6;
  undefined8 *puVar7;
  int *extraout_EAX;
  uint *puVar8;
  uint uVar9;
  undefined4 *_Src;
  int *piVar10;
  short *psVar11;
  short *psVar12;
  int iVar13;
  int *piVar14;
  undefined4 *_Dst;
  bool bVar15;
  char local_110 [4];
  char local_10c [4];
  undefined8 local_108;
  undefined8 local_f0;
  undefined4 local_d8;
  undefined4 local_c8;
  uint local_c4;
  int local_c0;
  int local_bc;
  uint local_b8;
  int local_b4;
  int local_b0;
  uint local_ac;
  int local_a8;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined8 local_94;
  undefined4 local_8c;
  TextShape *local_88;
  int local_84;
  int local_80;
  int *local_7c;
  uint local_78;
  void *local_74 [4];
  undefined4 local_64;
  uint local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f6cc1;
  local_10 = ExceptionList;
  uVar6 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8c = param_2;
  local_14 = uVar6;
  std::basic_istream<char,std::char_traits<char>_>::read
            (param_1,(char *)&local_78,(ulonglong)uVar6 << 0x20);
  iVar13 = (int)local_78 >> 0x1f;
  puVar7 = (undefined8 *)std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
  uVar1 = *puVar7;
  local_9c = puVar7[1];
  local_94 = puVar7[2];
  local_a4._0_4_ = (uint)uVar1;
  bVar15 = CARRY4((uint)local_a4,local_78);
  local_78 = (uint)local_a4 + local_78;
  local_a4._4_4_ = (int)((ulonglong)uVar1 >> 0x20);
  local_80 = local_a4._4_4_ + iVar13 + (uint)bVar15;
  local_c4 = 7;
  local_c8 = 0;
  local_d8 = (void *)((uint)local_d8._2_2_ << 0x10);
  local_a4 = uVar1;
  FUN_0040f7a0(&PTR_006fccac,0);
  local_18 = 7;
  local_1c = 0;
  local_2c = (void *)((uint)local_2c._2_2_ << 0x10);
  psVar11 = (short *)0x0;
  local_8 = 0;
  if (_DAT_00000000 != 0) {
    do {
      psVar12 = psVar11;
      psVar11 = psVar12 + 1;
    } while (*psVar12 != 0);
    psVar11 = (short *)((int)psVar12 >> 1);
  }
  FUN_0040f7a0(0,psVar11);
  local_8._0_1_ = 1;
  local_88 = operator_new(0x21c);
  local_8 = CONCAT31(local_8._1_3_,2);
  if (local_88 == (TextShape *)0x0) {
    local_7c = (int *)0x0;
  }
  else {
    plasma::TextShape::TextShape(local_88,local_84,&local_2c,&local_d8);
    local_7c = extraout_EAX;
  }
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c);
  }
  local_18 = 7;
  local_1c = 0;
  local_2c = (void *)((uint)local_2c & 0xffff0000);
  local_8 = 0xffffffff;
  if (7 < local_c4) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_d8);
  }
  local_d8 = (void *)((uint)local_d8 & 0xffff0000);
  local_b4 = (uint)local_9c + local_78;
  local_c4 = 7;
  local_80 = local_9c._4_4_ + local_80 + (uint)CARRY4((uint)local_9c,local_78);
  local_c8 = 0;
  piVar14 = local_7c;
  iVar13 = local_80;
  do {
    while( true ) {
      while( true ) {
        puVar8 = (uint *)std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
        if (((puVar8[2] + *puVar8 == local_b4) &&
            (puVar8[3] + puVar8[1] + (uint)CARRY4(puVar8[2],*puVar8) == iVar13)) ||
           ((*(byte *)((int)&param_1[3].vbtablePtr +
                      param_1->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset) & 1) != 0
           )) {
          (**(code **)(*piVar14 + 4))(1);
          ExceptionList = local_10;
          __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
          return;
        }
        std::basic_istream<char,std::char_traits<char>_>::read
                  (param_1,(char *)&local_bc,(ulonglong)uVar6 << 0x20);
        if (local_bc != 1) break;
        std::basic_istream<char,std::char_traits<char>_>::read
                  (param_1,local_110,(ulonglong)uVar6 << 0x20);
        std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
        FUN_00658530(local_44,param_1);
        local_8 = 3;
        piVar10 = (int *)FUN_006089c0(local_5c);
        local_8 = CONCAT31(local_8._1_3_,4);
        if (piVar14 + 3 != piVar10) {
          FUN_0040f680();
        }
        if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
          operator_delete(local_5c[0]);
        }
        local_48 = 7;
        local_4c = 0;
        local_5c[0] = (void *)((uint)local_5c[0] & 0xffff0000);
        local_8 = 0xffffffff;
        if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
          operator_delete(local_44[0]);
        }
        local_30 = 0xf;
        local_34 = 0;
        local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
      }
      if (local_bc == 2) break;
      if (local_bc == 3) {
        FUN_0064ca40();
      }
      else {
        std::basic_istream<char,std::char_traits<char>_>::read
                  (param_1,(char *)&local_b8,(ulonglong)uVar6 << 0x20);
        uVar4 = local_b8;
        iVar13 = (int)local_b8 >> 0x1f;
        puVar7 = (undefined8 *)std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
        local_108._0_4_ = (uint)*puVar7;
        local_108._4_4_ = (int)((ulonglong)*puVar7 >> 0x20);
        local_108 = CONCAT44(local_108._4_4_ + iVar13 + (uint)CARRY4((uint)local_108,uVar4),
                             (uint)local_108 + uVar4);
        std::basic_istream<char,std::char_traits<char>_>::seekg
                  (param_1,local_108,puVar7[1],(int)puVar7[2],(int)((ulonglong)puVar7[2] >> 0x20));
        piVar14 = local_7c;
        iVar13 = local_80;
      }
    }
    std::basic_istream<char,std::char_traits<char>_>::read
              (param_1,(char *)&local_ac,(ulonglong)uVar6 << 0x20);
    uVar4 = local_ac;
    iVar13 = (int)local_ac >> 0x1f;
    puVar7 = (undefined8 *)std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
    uVar1 = *puVar7;
    uVar2 = puVar7[1];
    local_a4._4_4_ = (int)((ulonglong)uVar1 >> 0x20);
    local_94 = puVar7[2];
    local_a4._0_4_ = (uint)uVar1;
    local_9c._0_4_ = (uint)uVar2;
    uVar9 = (uint)local_a4 + uVar4;
    local_84 = 0;
    local_a8 = (uint)local_9c + uVar9;
    local_9c._4_4_ = (int)((ulonglong)uVar2 >> 0x20);
    local_c0 = local_9c._4_4_ + local_a4._4_4_ + iVar13 + (uint)CARRY4((uint)local_a4,uVar4) +
               (uint)CARRY4((uint)local_9c,uVar9);
    local_78 = 0;
    local_a4 = uVar1;
    local_9c = uVar2;
    piVar14 = local_7c;
    iVar3 = local_84;
    while( true ) {
      puVar8 = (uint *)std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
      iVar13 = local_80;
      if (((puVar8[2] + *puVar8 == local_a8) &&
          (puVar8[3] + puVar8[1] + (uint)CARRY4(puVar8[2],*puVar8) == local_c0)) ||
         ((*(byte *)((int)&param_1[3].vbtablePtr +
                    param_1->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset) & 1) != 0))
      break;
      std::basic_istream<char,std::char_traits<char>_>::read
                (param_1,(char *)&local_b0,(ulonglong)uVar6 << 0x20);
      if (local_b0 == 1) {
        std::basic_istream<char,std::char_traits<char>_>::read
                  (param_1,local_10c,(ulonglong)uVar6 << 0x20);
        std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
        iVar13 = (**(code **)(piVar14[0x17] + 4))();
        if (iVar3 == iVar13) {
          (**(code **)(piVar14[0x17] + 8))();
        }
        _Src = (undefined4 *)FUN_00659670(local_74,param_1);
        _Dst = (undefined4 *)(local_7c[0x2a] + local_78);
        if (_Dst != _Src) {
          if (7 < (uint)_Dst[5]) {
                    /* WARNING: Subroutine does not return */
            operator_delete((void *)*_Dst);
          }
          _Dst[5] = 7;
          _Dst[4] = 0;
          *(undefined2 *)_Dst = 0;
          if ((uint)_Src[5] < 8) {
            if (_Src[4] + 1 != 0) {
              memmove(_Dst,_Src,(_Src[4] + 1) * 2);
            }
          }
          else {
            *_Dst = *_Src;
            *_Src = 0;
          }
          _Dst[4] = _Src[4];
          _Dst[5] = _Src[5];
          _Src[5] = 7;
          _Src[4] = 0;
          *(undefined2 *)_Src = 0;
        }
        if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
          operator_delete(local_74[0]);
        }
        local_84 = local_84 + 1;
        local_78 = local_78 + 0x18;
        local_60 = 7;
        local_64 = 0;
        local_74[0] = (void *)((uint)local_74[0] & 0xffff0000);
        piVar14 = local_7c;
        iVar3 = local_84;
      }
      else if (local_b0 == 3) {
        FUN_00653ad0();
      }
      else {
        std::basic_istream<char,std::char_traits<char>_>::read
                  (param_1,(char *)&local_88,(ulonglong)uVar6 << 0x20);
        pTVar5 = local_88;
        iVar13 = (int)local_88 >> 0x1f;
        puVar7 = (undefined8 *)std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
        local_f0._0_4_ = (uint)*puVar7;
        local_f0._4_4_ = (int)((ulonglong)*puVar7 >> 0x20);
        local_f0 = CONCAT44(local_f0._4_4_ + iVar13 + (uint)CARRY4((uint)local_f0,(uint)pTVar5),
                            (int)&pTVar5->vftablePtr + (uint)local_f0);
        std::basic_istream<char,std::char_traits<char>_>::seekg
                  (param_1,local_f0,puVar7[1],(int)puVar7[2],(int)((ulonglong)puVar7[2] >> 0x20));
        piVar14 = local_7c;
        iVar3 = local_84;
      }
    }
  } while( true );
}


/* FUN_00658c40 @ 00658c40  kind=gamemisc  attributed-by=caller-vote  size=840 */

void FUN_00658c40(undefined4 *param_1)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  undefined4 ****ppppuVar4;
  int iVar5;
  undefined4 ****ppppuVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_64;
  uint local_60;
  void *local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  int local_4c;
  uint local_48;
  int *local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined4 ***local_2c [4];
  int local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f6d08;
  local_10 = ExceptionList;
  uVar2 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_30 = 0x2e;
  local_14 = uVar2;
  iVar3 = FUN_00639a70(&local_30,0xffffffff,1);
  FUN_0043a450(local_2c,iVar3 + 1,(param_1[4] - iVar3) + -1);
  ppppuVar4 = local_2c;
  if (7 < local_18) {
    ppppuVar4 = (undefined4 ****)local_2c[0];
  }
  ppppuVar4 = (undefined4 ****)((int)ppppuVar4 + local_1c * 2);
  ppppuVar6 = local_2c;
  if (7 < local_18) {
    ppppuVar6 = (undefined4 ****)local_2c[0];
  }
  local_8 = 0;
  if (ppppuVar6 != ppppuVar4) {
    FUN_0064bdf0(&local_40,ppppuVar6,ppppuVar4,ppppuVar6,toupper_exref,uVar2);
  }
  uVar2 = 0xffffffff;
  iVar3 = FUN_00428db0(0,local_1c,&DAT_0071eb50,3);
  if (iVar3 == 0) {
    uVar2 = 2;
  }
  iVar3 = FUN_00428db0(0,local_1c,&DAT_0071eb58,3);
  uVar2 = -(uint)(iVar3 != 0) & uVar2;
  iVar3 = FUN_00428db0(0,local_1c,&DAT_0071eb60,3);
  if (iVar3 == 0) {
    uVar2 = 0xd;
  }
  iVar3 = FUN_00428db0(0,local_1c,&DAT_0071eb68,3);
  if (iVar3 == 0) {
    uVar2 = 0xe;
  }
  iVar3 = FUN_00428db0(0,local_1c,&DAT_0071eb70,3);
  if (iVar3 == 0) {
    uVar2 = 0x12;
  }
  iVar3 = FUN_00428db0(0,local_1c,&DAT_0071eb78,3);
  if (iVar3 == 0) {
    uVar2 = 0x11;
  }
  else if (uVar2 == 0xffffffff) goto LAB_00658f62;
  if (7 < (uint)param_1[5]) {
    param_1 = (undefined4 *)*param_1;
  }
  iVar3 = _FreeImage_LoadU_12(uVar2,param_1,0);
  local_30 = iVar3;
  if (iVar3 != 0) {
    iVar5 = _FreeImage_GetWidth_4(iVar3);
    local_40 = iVar5;
    local_50 = _FreeImage_GetHeight_4(iVar3);
    local_5c = (void *)0x0;
    local_58 = 0;
    local_54 = 0;
    FUN_005870c0(local_50 * iVar5 * 4);
    local_8 = CONCAT31(local_8._1_3_,1);
    uVar2 = _FreeImage_GetLine_4(iVar3);
    local_48 = _FreeImage_GetWidth_4(iVar3);
    local_48 = uVar2 / local_48;
    iVar7 = 0;
    local_34 = 0;
    iVar5 = _FreeImage_GetHeight_4(iVar3);
    pvVar1 = local_5c;
    if (0 < iVar5) {
      local_3c = -1;
      do {
        iVar5 = _FreeImage_GetHeight_4(iVar3);
        local_4c = _FreeImage_GetScanLine_8(iVar3,iVar5 + local_3c);
        local_38 = 0;
        iVar5 = _FreeImage_GetWidth_4(iVar3);
        if (0 < iVar5) {
          puVar8 = (undefined1 *)(local_4c + 1);
          do {
            *(undefined1 *)((int)pvVar1 + iVar7) = puVar8[1];
            *(undefined1 *)((int)pvVar1 + iVar7 + 1) = *puVar8;
            *(undefined1 *)((int)pvVar1 + iVar7 + 2) = puVar8[-1];
            if (local_48 == 3) {
              *(undefined1 *)((int)pvVar1 + iVar7 + 3) = 0xff;
            }
            else {
              *(undefined1 *)((int)pvVar1 + iVar7 + 3) = puVar8[2];
            }
            local_38 = local_38 + 1;
            iVar7 = iVar7 + 4;
            puVar8 = puVar8 + local_48;
            iVar5 = _FreeImage_GetWidth_4(local_30);
            iVar3 = local_30;
          } while (local_38 < iVar5);
        }
        local_34 = local_34 + 1;
        local_3c = local_3c + -1;
        iVar5 = _FreeImage_GetHeight_4(iVar3);
      } while (local_34 < iVar5);
    }
    _FreeImage_Unload_4(iVar3);
    local_60 = 7;
    local_64 = 0;
    local_74 = (void *)((uint)local_74._2_2_ << 0x10);
    FUN_0040f7a0(&PTR_006fccac,0);
    local_8 = CONCAT31(local_8._1_3_,2);
    local_88 = 1;
    local_84 = 1;
    local_80 = 1;
    local_7c = 1;
    local_78 = 1;
    (**(code **)(*local_44 + 8))(local_40,local_50,pvVar1,&local_88,&local_74,0);
    if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_74);
    }
    local_60 = 7;
    local_64 = 0;
    local_74 = (void *)((uint)local_74 & 0xffff0000);
    if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar1);
    }
  }
LAB_00658f62:
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00658fa0 @ 00658fa0  kind=gamemisc  attributed-by=caller-vote  size=872 */

void FUN_00658fa0(int param_1,int param_2,int param_3)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  undefined4 ****ppppuVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 ****ppppuVar8;
  undefined1 *puVar9;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_64;
  uint local_60;
  void *local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  int local_4c;
  uint local_48;
  int *local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined4 ***local_2c [4];
  int local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f6d08;
  local_10 = ExceptionList;
  uVar2 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_34 = param_2;
  local_30 = param_3;
  local_38 = 0x2e;
  local_14 = uVar2;
  iVar3 = FUN_00639a70(&local_38,0xffffffff,1);
  FUN_0043a450(local_2c,iVar3 + 1,(*(int *)(param_1 + 0x10) - iVar3) + -1);
  ppppuVar4 = local_2c;
  if (7 < local_18) {
    ppppuVar4 = (undefined4 ****)local_2c[0];
  }
  ppppuVar4 = (undefined4 ****)((int)ppppuVar4 + local_1c * 2);
  ppppuVar8 = local_2c;
  if (7 < local_18) {
    ppppuVar8 = (undefined4 ****)local_2c[0];
  }
  local_8 = 0;
  if (ppppuVar8 != ppppuVar4) {
    FUN_0064bdf0(&local_40,ppppuVar8,ppppuVar4,ppppuVar8,toupper_exref,uVar2);
  }
  uVar2 = 0xffffffff;
  iVar3 = FUN_00428db0(0,local_1c,&DAT_0071eb50,3);
  if (iVar3 == 0) {
    uVar2 = 2;
  }
  iVar3 = FUN_00428db0(0,local_1c,&DAT_0071eb58,3);
  uVar2 = -(uint)(iVar3 != 0) & uVar2;
  iVar3 = FUN_00428db0(0,local_1c,&DAT_0071eb60,3);
  if (iVar3 == 0) {
    uVar2 = 0xd;
  }
  iVar3 = FUN_00428db0(0,local_1c,&DAT_0071eb68,3);
  if (iVar3 == 0) {
    uVar2 = 0xe;
  }
  iVar3 = FUN_00428db0(0,local_1c,&DAT_0071eb70,3);
  if (iVar3 == 0) {
    uVar2 = 0x12;
  }
  iVar3 = FUN_00428db0(0,local_1c,&DAT_0071eb78,3);
  if (iVar3 == 0) {
    uVar2 = 0x11;
  }
  else if (uVar2 == 0xffffffff) goto LAB_006592e2;
  uVar5 = _FreeImage_OpenMemory_8(local_34,local_30);
  iVar3 = _FreeImage_LoadFromMemory_12(uVar2,uVar5,0);
  local_38 = iVar3;
  _FreeImage_CloseMemory_4(uVar5);
  if (iVar3 != 0) {
    iVar6 = _FreeImage_GetWidth_4(iVar3);
    local_40 = iVar6;
    local_50 = _FreeImage_GetHeight_4(iVar3);
    local_5c = (void *)0x0;
    local_58 = 0;
    local_54 = 0;
    FUN_005870c0(local_50 * iVar6 * 4);
    local_8 = CONCAT31(local_8._1_3_,1);
    uVar2 = _FreeImage_GetLine_4(iVar3);
    local_48 = _FreeImage_GetWidth_4(iVar3);
    local_48 = uVar2 / local_48;
    iVar7 = 0;
    local_30 = 0;
    iVar6 = _FreeImage_GetHeight_4(iVar3);
    pvVar1 = local_5c;
    if (0 < iVar6) {
      local_34 = -1;
      do {
        iVar6 = _FreeImage_GetHeight_4(iVar3);
        local_4c = _FreeImage_GetScanLine_8(iVar3,iVar6 + local_34);
        local_3c = 0;
        iVar6 = _FreeImage_GetWidth_4(iVar3);
        if (0 < iVar6) {
          puVar9 = (undefined1 *)(local_4c + 1);
          do {
            *(undefined1 *)((int)pvVar1 + iVar7) = puVar9[1];
            *(undefined1 *)((int)pvVar1 + iVar7 + 1) = *puVar9;
            *(undefined1 *)((int)pvVar1 + iVar7 + 2) = puVar9[-1];
            if (local_48 == 3) {
              *(undefined1 *)((int)pvVar1 + iVar7 + 3) = 0xff;
            }
            else {
              *(undefined1 *)((int)pvVar1 + iVar7 + 3) = puVar9[2];
            }
            local_3c = local_3c + 1;
            iVar7 = iVar7 + 4;
            puVar9 = puVar9 + local_48;
            iVar6 = _FreeImage_GetWidth_4(local_38);
            iVar3 = local_38;
          } while (local_3c < iVar6);
        }
        local_30 = local_30 + 1;
        local_34 = local_34 + -1;
        iVar6 = _FreeImage_GetHeight_4(iVar3);
      } while (local_30 < iVar6);
    }
    _FreeImage_Unload_4(iVar3);
    local_60 = 7;
    local_64 = 0;
    local_74 = (void *)((uint)local_74._2_2_ << 0x10);
    FUN_0040f7a0(&PTR_006fccac,0);
    local_8 = CONCAT31(local_8._1_3_,2);
    local_88 = 1;
    local_84 = 1;
    local_80 = 1;
    local_7c = 1;
    local_78 = 1;
    (**(code **)(*local_44 + 8))(local_40,local_50,pvVar1,&local_88,&local_74,0);
    if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_74);
    }
    local_60 = 7;
    local_64 = 0;
    local_74 = (void *)((uint)local_74 & 0xffff0000);
    if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar1);
    }
  }
LAB_006592e2:
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00659320 @ 00659320  kind=gamemisc  attributed-by=caller-vote  size=802 */

void FUN_00659320(basic_istream<char,std::char_traits<char>_> *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  ContinuousAttribute<plasma::Vector<3,float>_> *pCVar2;
  uint uVar3;
  undefined8 *puVar4;
  int *extraout_EAX;
  uint *puVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  bool bVar9;
  char local_90 [4];
  undefined4 local_8c;
  undefined4 local_7c;
  uint local_78;
  undefined8 local_74;
  undefined8 local_6c;
  undefined8 local_64;
  ContinuousAttribute<plasma::Vector<3,float>_> *local_5c;
  int local_58;
  uint local_54;
  int local_50;
  undefined4 local_4c;
  int *local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f6d56;
  local_10 = ExceptionList;
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_4c = param_2;
  local_14 = uVar3;
  std::basic_istream<char,std::char_traits<char>_>::read
            (param_1,(char *)&local_48,(ulonglong)uVar3 << 0x20);
  puVar4 = (undefined8 *)std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
  uVar1 = *puVar4;
  local_6c = puVar4[1];
  local_64 = puVar4[2];
  local_74._0_4_ = (uint)uVar1;
  local_54 = (uint)local_74 + (int)local_48;
  local_74._4_4_ = (int)((ulonglong)uVar1 >> 0x20);
  local_50 = local_74._4_4_ + ((int)local_48 >> 0x1f) + (uint)CARRY4((uint)local_74,(uint)local_48);
  local_78 = 7;
  local_7c = 0;
  local_8c = (void *)((uint)local_8c._2_2_ << 0x10);
  local_74 = uVar1;
  FUN_0040f7a0(&PTR_006fccac,0);
  local_8 = 0;
  local_5c = operator_new(0x234);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (local_5c == (ContinuousAttribute<plasma::Vector<3,float>_> *)0x0) {
    local_48 = (int *)0x0;
  }
  else {
    plasma::ContinuousAttribute<plasma::Vector<3,float>_>::
    ContinuousAttribute<plasma::Vector<3,float>_>(local_5c,local_58,&local_8c);
    local_48 = extraout_EAX;
  }
  local_8 = 0xffffffff;
  if (7 < local_78) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_8c);
  }
  local_8c = (void *)((uint)local_8c & 0xffff0000);
  bVar9 = CARRY4((uint)local_6c,local_54);
  local_54 = (uint)local_6c + local_54;
  local_78 = 7;
  local_58 = local_6c._4_4_ + local_50 + (uint)bVar9;
  local_7c = 0;
  piVar8 = local_48;
  iVar7 = local_58;
  do {
    puVar5 = (uint *)std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
    if (((puVar5[2] + *puVar5 == local_54) &&
        (puVar5[3] + puVar5[1] + (uint)CARRY4(puVar5[2],*puVar5) == iVar7)) ||
       ((*(byte *)((int)&param_1[3].vbtablePtr +
                  param_1->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset) & 1) != 0)) {
      (**(code **)(*piVar8 + 4))(1);
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
    std::basic_istream<char,std::char_traits<char>_>::read
              (param_1,(char *)&local_50,(ulonglong)uVar3 << 0x20);
    switch(local_50) {
    case 1:
      std::basic_istream<char,std::char_traits<char>_>::read
                (param_1,local_90,(ulonglong)uVar3 << 0x20);
      std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
      FUN_00658530(local_2c,param_1);
      local_8 = 2;
      piVar6 = (int *)FUN_006089c0(local_44);
      local_8 = CONCAT31(local_8._1_3_,3);
      if (piVar8 + 3 != piVar6) {
        FUN_0040f680();
      }
      if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_44[0]);
      }
      local_30 = 7;
      local_34 = 0;
      local_44[0] = (void *)((uint)local_44[0] & 0xffff0000);
      local_8 = 0xffffffff;
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_2c[0]);
      }
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      break;
    case 2:
      FUN_0064c710();
      break;
    case 3:
      FUN_0064c8a0();
      break;
    default:
      std::basic_istream<char,std::char_traits<char>_>::read
                (param_1,(char *)&local_5c,(ulonglong)uVar3 << 0x20);
      pCVar2 = local_5c;
      iVar7 = (int)local_5c >> 0x1f;
      puVar4 = (undefined8 *)std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
      local_74._0_4_ = (uint)*puVar4;
      local_74._4_4_ = (int)((ulonglong)*puVar4 >> 0x20);
      local_74 = CONCAT44(local_74._4_4_ + iVar7 + (uint)CARRY4((uint)local_74,(uint)pCVar2),
                          (int)&pCVar2->vftablePtr + (uint)local_74);
      std::basic_istream<char,std::char_traits<char>_>::seekg
                (param_1,local_74,puVar4[1],(int)puVar4[2],(int)((ulonglong)puVar4[2] >> 0x20));
      piVar8 = local_48;
      iVar7 = local_58;
      break;
    case 5:
      FUN_0064c710();
      break;
    case 6:
      FUN_0064c570();
    }
  } while( true );
}


/* FUN_00659740 @ 00659740  kind=gamemisc  attributed-by=caller-vote  size=496 */

Widget * FUN_00659740(Widget *param_1)

{
  undefined8 uVar1;
  basic_istream<char,std::char_traits<char>_> *this;
  uint uVar2;
  char cVar3;
  uint uVar4;
  undefined8 *puVar5;
  Widget *this_00;
  uint *puVar6;
  int iVar7;
  bool bVar8;
  undefined8 local_54;
  uint local_4c;
  int iStack_48;
  undefined4 local_3c;
  undefined4 local_2c;
  uint local_28;
  int local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  this = (basic_istream<char,std::char_traits<char>_> *)param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f6913;
  local_10 = ExceptionList;
  uVar4 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  std::basic_istream<char,std::char_traits<char>_>::read
            ((basic_istream<char,std::char_traits<char>_> *)param_1,(char *)&local_18,
             (ulonglong)uVar4 << 0x20);
  iVar7 = (int)local_18 >> 0x1f;
  puVar5 = (undefined8 *)
           std::basic_istream<char,std::char_traits<char>_>::tellg
                     ((basic_istream<char,std::char_traits<char>_> *)param_1);
  uVar1 = puVar5[1];
  local_54._0_4_ = (uint)*puVar5;
  bVar8 = CARRY4((uint)local_54,local_18);
  local_18 = (uint)local_54 + local_18;
  local_54._4_4_ = (int)((ulonglong)*puVar5 >> 0x20);
  local_1c = local_54._4_4_ + iVar7 + (uint)bVar8;
  local_28 = 7;
  local_2c = 0;
  local_3c = (void *)((uint)local_3c._2_2_ << 0x10);
  FUN_0040f7a0(&PTR_006fccac,0);
  local_8 = 0;
  this_00 = operator_new(0x160);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (this_00 == (Widget *)0x0) {
    param_1 = (Widget *)0x0;
  }
  else {
    param_1 = plasma::Widget::Widget(this_00,local_14,0,&local_3c);
  }
  local_8 = 0xffffffff;
  if (7 < local_28) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_3c);
  }
  iStack_48 = (int)((ulonglong)uVar1 >> 0x20);
  local_3c = (void *)((uint)local_3c & 0xffff0000);
  local_4c = (uint)uVar1;
  bVar8 = CARRY4(local_4c,local_18);
  local_18 = local_4c + local_18;
  local_28 = 7;
  local_24 = iStack_48 + local_1c + (uint)bVar8;
  local_2c = 0;
  iVar7 = local_24;
  while( true ) {
    puVar6 = (uint *)std::basic_istream<char,std::char_traits<char>_>::tellg(this);
    if (((puVar6[2] + *puVar6 == local_18) &&
        (puVar6[3] + puVar6[1] + (uint)CARRY4(puVar6[2],*puVar6) == iVar7)) ||
       ((*(byte *)((int)&this[3].vbtablePtr +
                  this->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset) & 1) != 0))
    break;
    std::basic_istream<char,std::char_traits<char>_>::read
              (this,(char *)&local_1c,(ulonglong)uVar4 << 0x20);
    cVar3 = FUN_00659940();
    if (cVar3 == '\0') {
      std::basic_istream<char,std::char_traits<char>_>::read
                (this,(char *)&local_20,(ulonglong)uVar4 << 0x20);
      uVar2 = local_20;
      iVar7 = (int)local_20 >> 0x1f;
      puVar5 = (undefined8 *)std::basic_istream<char,std::char_traits<char>_>::tellg(this);
      local_54._0_4_ = (uint)*puVar5;
      local_54._4_4_ = (int)((ulonglong)*puVar5 >> 0x20);
      local_54 = CONCAT44(local_54._4_4_ + iVar7 + (uint)CARRY4((uint)local_54,uVar2),
                          (uint)local_54 + uVar2);
      std::basic_istream<char,std::char_traits<char>_>::seekg
                (this,local_54,puVar5[1],(int)puVar5[2],(int)((ulonglong)puVar5[2] >> 0x20));
      iVar7 = local_24;
    }
  }
  ExceptionList = local_10;
  return param_1;
}


/* FUN_00659e80 @ 00659e80  kind=gamemisc  attributed-by=caller-vote  size=112 */

void FUN_00659e80(basic_istream<char,std::char_traits<char>_> *param_1)

{
  undefined8 *puVar1;
  uint unaff_EDI;
  undefined8 local_20;
  uint local_8;
  
  std::basic_istream<char,std::char_traits<char>_>::read
            (param_1,(char *)&local_8,(ulonglong)unaff_EDI << 0x20);
  puVar1 = (undefined8 *)std::basic_istream<char,std::char_traits<char>_>::tellg(param_1);
  local_20._0_4_ = (uint)*puVar1;
  local_20._4_4_ = (int)((ulonglong)*puVar1 >> 0x20);
  local_20 = CONCAT44(local_20._4_4_ + ((int)local_8 >> 0x1f) + (uint)CARRY4((uint)local_20,local_8)
                      ,(uint)local_20 + local_8);
  std::basic_istream<char,std::char_traits<char>_>::seekg
            (param_1,local_20,puVar1[1],(int)puVar1[2],(int)((ulonglong)puVar1[2] >> 0x20));
  return;
}


/* FUN_0065a010 @ 0065a010  kind=gamemisc  attributed-by=caller-vote  size=42 */

void FUN_0065a010(undefined4 param_1,undefined4 param_2,undefined8 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_0043c8e0(param_1,param_2);
  if ((undefined8 *)(iVar1 + 8) != (undefined8 *)0x0) {
    *(undefined8 *)(iVar1 + 8) = *param_3;
    *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(param_3 + 1);
  }
  return;
}


/* FUN_0065a040 @ 0065a040  kind=gamemisc  attributed-by=caller-vote  size=130 */

int FUN_0065a040(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f6de1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_0046d650(param_1,param_2);
  local_8 = 1;
  if ((undefined4 *)(iVar1 + 8) != (undefined4 *)0x0) {
    *(undefined4 *)(iVar1 + 8) = *param_3;
    *(undefined4 *)(iVar1 + 0xc) = param_3[1];
    FUN_005a7990(param_3 + 2);
  }
  ExceptionList = local_10;
  return iVar1;
}


/* FUN_0065aef0 @ 0065aef0  kind=gamemisc  attributed-by=caller-vote  size=219 */

void FUN_0065aef0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *in_ECX;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *local_c;
  
  puVar5 = (undefined4 *)*in_ECX;
  puVar6 = (undefined4 *)puVar5[1];
  local_c = puVar5;
  if (*(char *)((int)puVar6 + 0xd) == '\0') {
    iVar1 = *param_2;
    puVar3 = puVar6;
    do {
      iVar2 = puVar3[4];
      if ((iVar2 < iVar1) ||
         ((iVar2 <= iVar1 &&
          (((int)puVar3[5] < param_2[1] ||
           (((iVar2 <= iVar1 && ((int)puVar3[5] <= param_2[1])) && ((int)puVar3[6] < param_2[2])))))
          ))) {
        puVar4 = (undefined4 *)puVar3[2];
      }
      else {
        if (*(char *)((int)puVar5 + 0xd) != '\0') {
          if (iVar2 <= iVar1) {
            if (((int)puVar3[5] <= param_2[1]) &&
               (((int)puVar3[5] < param_2[1] || ((int)puVar3[6] <= param_2[2])))) goto LAB_0065af5e;
          }
          puVar5 = puVar3;
        }
LAB_0065af5e:
        puVar4 = (undefined4 *)*puVar3;
        local_c = puVar3;
      }
      puVar3 = puVar4;
    } while (*(char *)((int)puVar4 + 0xd) == '\0');
  }
  if (*(char *)((int)puVar5 + 0xd) == '\0') {
    puVar6 = (undefined4 *)*puVar5;
  }
  if (*(char *)((int)puVar6 + 0xd) == '\0') {
    do {
      if (*param_2 < (int)puVar6[4]) {
LAB_0065afad:
        puVar3 = (undefined4 *)*puVar6;
        puVar5 = puVar6;
      }
      else {
        if (*param_2 <= (int)puVar6[4]) {
          if ((param_2[1] < (int)puVar6[5]) ||
             ((param_2[1] <= (int)puVar6[5] && (param_2[2] < (int)puVar6[6])))) goto LAB_0065afad;
        }
        puVar3 = (undefined4 *)puVar6[2];
      }
      puVar6 = puVar3;
    } while (*(char *)((int)puVar3 + 0xd) == '\0');
  }
  param_1[1] = (int)puVar5;
  *param_1 = (int)local_c;
  return;
}


/* FUN_0065afd0 @ 0065afd0  kind=gamemisc  attributed-by=caller-vote  size=417 */

void FUN_0065afd0(int *param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  int *in_ECX;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *local_10;
  undefined4 *local_c;
  
  local_10 = (undefined4 *)*in_ECX;
  puVar9 = (undefined4 *)local_10[1];
  local_c = local_10;
  if (*(char *)((int)puVar9 + 0xd) == '\0') {
    iVar6 = *param_2;
    puVar7 = puVar9;
    do {
      iVar4 = puVar7[4];
      if (iVar4 < iVar6) {
LAB_0065b0ac:
        puVar8 = (undefined4 *)puVar7[2];
      }
      else {
        if (iVar4 <= iVar6) {
          if ((int)puVar7[5] < param_2[1]) goto LAB_0065b0ac;
          if ((iVar4 <= iVar6) && ((int)puVar7[5] <= param_2[1])) {
            piVar5 = (int *)puVar7[7];
            piVar3 = (int *)puVar7[6];
            piVar2 = (int *)param_2[2];
            if (piVar3 != piVar5) {
              do {
                if (piVar2 == (int *)param_2[3]) {
                  if (piVar3 != piVar5) goto LAB_0065b06a;
                  break;
                }
                if (*piVar3 < *piVar2) goto LAB_0065b0ac;
                if (*piVar2 < *piVar3) goto LAB_0065b06a;
                piVar5 = (int *)puVar7[7];
                piVar3 = piVar3 + 1;
                piVar2 = piVar2 + 1;
              } while (piVar3 != piVar5);
            }
            if (piVar2 != (int *)param_2[3]) goto LAB_0065b0ac;
LAB_0065b06a:
            iVar4 = puVar7[4];
            iVar6 = *param_2;
          }
        }
        if (*(char *)((int)local_c + 0xd) != '\0') {
          if (iVar4 <= iVar6) {
            if (((int)puVar7[5] <= param_2[1]) &&
               (((int)puVar7[5] < param_2[1] ||
                (cVar1 = FUN_005a78a0(param_2[2],param_2[3],puVar7[6],puVar7[7]), cVar1 == '\0'))))
            goto LAB_0065b0a5;
          }
          local_c = puVar7;
        }
LAB_0065b0a5:
        puVar8 = (undefined4 *)*puVar7;
        local_10 = puVar7;
      }
      iVar6 = *param_2;
      puVar7 = puVar8;
    } while (*(char *)((int)puVar8 + 0xd) == '\0');
  }
  if (*(char *)((int)local_c + 0xd) == '\0') {
    puVar9 = (undefined4 *)*local_c;
  }
  puVar7 = local_c;
  if (*(char *)((int)puVar9 + 0xd) == '\0') {
    do {
      if (*param_2 < (int)puVar9[4]) {
LAB_0065b150:
        puVar8 = (undefined4 *)*puVar9;
        puVar7 = puVar9;
        local_c = puVar9;
      }
      else if ((int)puVar9[4] < *param_2) {
LAB_0065b148:
        puVar8 = (undefined4 *)puVar9[2];
      }
      else {
        if (param_2[1] < (int)puVar9[5]) goto LAB_0065b150;
        if ((int)puVar9[5] < param_2[1]) goto LAB_0065b148;
        piVar2 = (int *)puVar9[7];
        piVar5 = (int *)puVar9[6];
        for (piVar3 = (int *)param_2[2]; puVar7 = local_c, piVar3 != (int *)param_2[3];
            piVar3 = piVar3 + 1) {
          if (piVar5 == piVar2) {
            if (piVar3 != (int *)param_2[3]) goto LAB_0065b148;
            break;
          }
          if (*piVar3 < *piVar5) goto LAB_0065b150;
          if (*piVar5 < *piVar3) goto LAB_0065b148;
          piVar2 = (int *)puVar9[7];
          piVar5 = piVar5 + 1;
        }
        if (piVar5 != piVar2) goto LAB_0065b150;
        puVar8 = (undefined4 *)puVar9[2];
      }
      puVar9 = puVar8;
    } while (*(char *)((int)puVar8 + 0xd) == '\0');
  }
  *param_1 = (int)local_10;
  param_1[1] = (int)puVar7;
  return;
}


/* FUN_0065b2a0 @ 0065b2a0  kind=gamemisc  attributed-by=caller-vote  size=1271 */

void FUN_0065b2a0(void)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  int in_ECX;
  int *piVar9;
  undefined1 local_48 [8];
  int *local_40;
  undefined4 local_3c;
  undefined4 *local_38;
  int local_34;
  int *local_30;
  int local_2c;
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  LPCRITICAL_SECTION local_20;
  int *local_1c;
  int *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f6f60;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_20 = (LPCRITICAL_SECTION)(in_ECX + 0x10c);
  local_14 = in_ECX;
  EnterCriticalSection(local_20);
  local_34 = 0;
  puVar5 = (undefined4 *)FUN_0043c8e0(0,0);
  local_1c = (int *)(in_ECX + 0x68);
  piVar9 = (int *)**(int **)(in_ECX + 0x68);
  local_8 = 0;
  local_38 = puVar5;
  if (piVar9 != *(int **)(in_ECX + 0x68)) {
    do {
      if (piVar9[7] != 0) {
        local_2c = 0;
        local_30 = (int *)FUN_0046d550(0,0);
        piVar8 = (int *)**(int **)piVar9[7];
        local_8 = CONCAT31(local_8._1_3_,1);
        if (piVar8 != *(int **)piVar9[7]) {
          do {
            iVar6 = piVar8[5];
            if (iVar6 != 0) {
              if (*(char *)(iVar6 + 0x30) == '\0') {
                if (*(int *)(iVar6 + 0x28) != 0) {
                  FUN_00650810(*(int *)(iVar6 + 0x28));
                }
                    /* WARNING: Subroutine does not return */
                operator_delete((void *)piVar8[5]);
              }
              *(undefined1 *)(iVar6 + 0x30) = 0;
            }
            if (*(char *)((int)piVar8 + 0xd) == '\0') {
              piVar2 = (int *)piVar8[2];
              if (*(char *)((int)piVar2 + 0xd) == '\0') {
                cVar1 = *(char *)(*piVar2 + 0xd);
                piVar8 = piVar2;
                piVar2 = (int *)*piVar2;
                while (cVar1 == '\0') {
                  cVar1 = *(char *)(*piVar2 + 0xd);
                  piVar8 = piVar2;
                  piVar2 = (int *)*piVar2;
                }
              }
              else {
                cVar1 = *(char *)(piVar8[1] + 0xd);
                piVar4 = (int *)piVar8[1];
                piVar2 = piVar8;
                while ((piVar8 = piVar4, cVar1 == '\0' && (piVar2 == (int *)piVar8[2]))) {
                  cVar1 = *(char *)(piVar8[1] + 0xd);
                  piVar4 = (int *)piVar8[1];
                  piVar2 = piVar8;
                }
              }
            }
          } while (piVar8 != *(int **)piVar9[7]);
        }
        piVar8 = (int *)*local_30;
        if (piVar8 != local_30) {
          do {
            local_18 = (int *)(uint)*(ushort *)(piVar8 + 2);
            puVar5 = (undefined4 *)FUN_00667dd0(&local_40,&local_18);
            FUN_0067eb10(local_24,*puVar5,puVar5[1]);
            piVar8 = (int *)*piVar8;
          } while (piVar8 != local_30);
        }
        piVar8 = local_30;
        puVar5 = local_38;
        if (*(int *)(piVar9[7] + 4) != 0) {
LAB_0065b4d1:
          piVar9 = (int *)*piVar8;
          *piVar8 = (int)piVar8;
          local_8 = local_8 & 0xffffff00;
          piVar8[1] = (int)piVar8;
          local_2c = 0;
          if (piVar9 == piVar8) {
                    /* WARNING: Subroutine does not return */
            operator_delete(piVar8);
          }
                    /* WARNING: Subroutine does not return */
          operator_delete(piVar9);
        }
        if (*(int *)(local_14 + 200) == piVar9[7]) {
          *(undefined4 *)(local_14 + 200) = 0;
        }
        if (*(int *)(local_14 + 0xcc) == piVar9[7]) {
          *(undefined4 *)(local_14 + 0xcc) = 0;
        }
        puVar3 = (undefined4 *)piVar9[7];
        if (puVar3 != (undefined4 *)0x0) {
          FUN_0067eb10(local_28,*(undefined4 *)*puVar3,(undefined4 *)*puVar3);
                    /* WARNING: Subroutine does not return */
          operator_delete((void *)*puVar3);
        }
        iVar6 = FUN_0065a010(local_38,local_38[1],piVar9 + 4);
        if (local_34 != 0xccccccb) {
          puVar5[1] = iVar6;
          local_34 = local_34 + 1;
          **(int **)(iVar6 + 4) = iVar6;
          goto LAB_0065b4d1;
        }
        goto LAB_0065b603;
      }
      if (*(char *)((int)piVar9 + 0xd) == '\0') {
        piVar8 = (int *)piVar9[2];
        if (*(char *)((int)piVar8 + 0xd) == '\0') {
          cVar1 = *(char *)(*piVar8 + 0xd);
          piVar9 = piVar8;
          piVar8 = (int *)*piVar8;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar8 + 0xd);
            piVar9 = piVar8;
            piVar8 = (int *)*piVar8;
          }
        }
        else {
          cVar1 = *(char *)(piVar9[1] + 0xd);
          piVar2 = (int *)piVar9[1];
          piVar8 = piVar9;
          while ((piVar9 = piVar2, cVar1 == '\0' && (piVar8 == (int *)piVar9[2]))) {
            cVar1 = *(char *)(piVar9[1] + 0xd);
            piVar2 = (int *)piVar9[1];
            piVar8 = piVar9;
          }
        }
      }
    } while (piVar9 != (int *)*local_1c);
  }
  for (puVar3 = (undefined4 *)*puVar5; puVar3 != puVar5; puVar3 = (undefined4 *)*puVar3) {
    puVar7 = (undefined4 *)FUN_0065aef0(&local_40,puVar3 + 2);
    FUN_0067eb10(local_28,*puVar7,puVar7[1]);
  }
  local_2c = 0;
  piVar8 = (int *)FUN_0046d650(0,0);
  local_18 = (int *)(local_14 + 0x70);
  local_8._0_1_ = 2;
  piVar9 = *(int **)*local_18;
  local_30 = piVar8;
  if (piVar9 != (int *)*local_18) {
    do {
      if (piVar9[9] != 0) {
        local_3c = 0;
        local_40 = (int *)FUN_0046d550(0,0);
        piVar8 = (int *)**(int **)piVar9[9];
        local_8 = CONCAT31(local_8._1_3_,3);
        if (piVar8 != *(int **)piVar9[9]) {
          do {
            iVar6 = piVar8[5];
            if (iVar6 != 0) {
              if (*(char *)(iVar6 + 0x30) == '\0') {
                if (*(int *)(iVar6 + 0x28) != 0) {
                  FUN_00650810(*(int *)(iVar6 + 0x28));
                }
                    /* WARNING: Subroutine does not return */
                operator_delete((void *)piVar8[5]);
              }
              *(undefined1 *)(iVar6 + 0x30) = 0;
            }
            if (*(char *)((int)piVar8 + 0xd) == '\0') {
              piVar2 = (int *)piVar8[2];
              if (*(char *)((int)piVar2 + 0xd) == '\0') {
                cVar1 = *(char *)(*piVar2 + 0xd);
                piVar8 = piVar2;
                piVar2 = (int *)*piVar2;
                while (cVar1 == '\0') {
                  cVar1 = *(char *)(*piVar2 + 0xd);
                  piVar8 = piVar2;
                  piVar2 = (int *)*piVar2;
                }
              }
              else {
                cVar1 = *(char *)(piVar8[1] + 0xd);
                piVar4 = (int *)piVar8[1];
                piVar2 = piVar8;
                while ((piVar8 = piVar4, cVar1 == '\0' && (piVar2 == (int *)piVar8[2]))) {
                  cVar1 = *(char *)(piVar8[1] + 0xd);
                  piVar4 = (int *)piVar8[1];
                  piVar2 = piVar8;
                }
              }
            }
          } while (piVar8 != *(int **)piVar9[9]);
        }
        piVar8 = (int *)*local_40;
        if (piVar8 != local_40) {
          do {
            local_1c = (int *)(uint)*(ushort *)(piVar8 + 2);
            puVar5 = (undefined4 *)FUN_00667dd0(local_48,&local_1c);
            FUN_0067eb10(local_28,*puVar5,puVar5[1]);
            piVar8 = (int *)*piVar8;
          } while (piVar8 != local_40);
        }
        piVar2 = local_30;
        piVar8 = local_40;
        if (*(int *)(piVar9[9] + 4) == 0) {
          if (*(int *)(local_14 + 200) == piVar9[9]) {
            *(undefined4 *)(local_14 + 200) = 0;
          }
          if (*(int *)(local_14 + 0xcc) == piVar9[9]) {
            *(undefined4 *)(local_14 + 0xcc) = 0;
          }
          puVar5 = (undefined4 *)piVar9[9];
          if (puVar5 != (undefined4 *)0x0) {
            FUN_0067eb10(local_24,*(undefined4 *)*puVar5,(undefined4 *)*puVar5);
                    /* WARNING: Subroutine does not return */
            operator_delete((void *)*puVar5);
          }
          iVar6 = FUN_0065a040(local_30,local_30[1],piVar9 + 4);
          if (local_2c == 0x9249248) {
LAB_0065b603:
                    /* WARNING: Subroutine does not return */
            std::_Xlength_error("list<T> too long");
          }
          piVar2[1] = iVar6;
          local_2c = local_2c + 1;
          **(int **)(iVar6 + 4) = iVar6;
        }
        piVar9 = (int *)*piVar8;
        *piVar8 = (int)piVar8;
        local_8 = CONCAT31(local_8._1_3_,2);
        piVar8[1] = (int)piVar8;
        local_3c = 0;
        if (piVar9 == piVar8) {
                    /* WARNING: Subroutine does not return */
          operator_delete(piVar8);
        }
                    /* WARNING: Subroutine does not return */
        operator_delete(piVar9);
      }
      if (*(char *)((int)piVar9 + 0xd) == '\0') {
        piVar2 = (int *)piVar9[2];
        if (*(char *)((int)piVar2 + 0xd) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0xd);
          piVar9 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0xd);
            piVar9 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar9[1] + 0xd);
          piVar4 = (int *)piVar9[1];
          piVar2 = piVar9;
          while ((piVar9 = piVar4, cVar1 == '\0' && (piVar2 == (int *)piVar9[2]))) {
            cVar1 = *(char *)(piVar9[1] + 0xd);
            piVar4 = (int *)piVar9[1];
            piVar2 = piVar9;
          }
        }
      }
    } while (piVar9 != (int *)*local_18);
  }
  for (piVar9 = (int *)*piVar8; piVar9 != piVar8; piVar9 = (int *)*piVar9) {
    puVar5 = (undefined4 *)FUN_0065afd0(local_48,piVar9 + 2);
    FUN_0065d060(local_28,*puVar5,puVar5[1]);
  }
  LeaveCriticalSection(local_20);
  FUN_0065b890();
                    /* WARNING: Subroutine does not return */
  operator_delete(local_30);
}


/* FUN_0065b890 @ 0065b890  kind=gamemisc  attributed-by=caller-vote  size=53 */

void FUN_0065b890(void)

{
  undefined4 *puVar1;
  void *pvVar2;
  int *in_ECX;
  
  puVar1 = (undefined4 *)*in_ECX;
  pvVar2 = (void *)*puVar1;
  *puVar1 = puVar1;
  *(int *)(*in_ECX + 4) = *in_ECX;
  in_ECX[1] = 0;
  if (pvVar2 == (void *)*in_ECX) {
    return;
  }
  if (*(void **)((int)pvVar2 + 0x10) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)((int)pvVar2 + 0x10));
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(pvVar2);
}


/* FUN_0065d060 @ 0065d060  kind=gamemisc  attributed-by=caller-vote  size=189 */

undefined4 * FUN_0065d060(undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_0065b180(piVar2[1]);
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
    FUN_0065d120(local_8,piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return param_1;
}


/* FUN_0065d120 @ 0065d120  kind=gamemisc  attributed-by=caller-vote  size=626 */

/* WARNING: Removing unreachable block (ram,0x0065d1ed) */
/* WARNING: Removing unreachable block (ram,0x0065d1fd) */
/* WARNING: Removing unreachable block (ram,0x0065d206) */
/* WARNING: Removing unreachable block (ram,0x0065d209) */
/* WARNING: Removing unreachable block (ram,0x0065d1f9) */
/* WARNING: Removing unreachable block (ram,0x0065d217) */
/* WARNING: Removing unreachable block (ram,0x0065d226) */
/* WARNING: Removing unreachable block (ram,0x0065d231) */
/* WARNING: Removing unreachable block (ram,0x0065d22d) */
/* WARNING: Removing unreachable block (ram,0x0065d221) */
/* WARNING: Removing unreachable block (ram,0x0065d234) */

void FUN_0065d120(undefined4 param_1,int *param_2)

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
              goto LAB_0065d37e;
            }
LAB_0065d320:
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
            goto LAB_0065d320;
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
            goto LAB_0065d37e;
          }
        }
        piVar5 = (int *)piVar3[1];
        piVar6 = piVar3;
      } while (piVar3 != *(int **)(*in_ECX + 4));
    }
    *(undefined1 *)(piVar6 + 3) = 1;
  }
LAB_0065d37e:
  if ((void *)param_2[6] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_2[6]);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(param_2);
}


/* FUN_006612d0 @ 006612d0  kind=gamemisc  attributed-by=caller-vote  size=24 */

void FUN_006612d0(undefined4 param_1)

{
  int in_ECX;
  
  FUN_00661260(*(undefined4 *)(in_ECX + 0x44),*(undefined4 *)(in_ECX + 0x48),
               *(undefined4 *)(in_ECX + 0x24),param_1);
  return;
}


/* FUN_006612f0 @ 006612f0  kind=gamemisc  attributed-by=caller-vote  size=330 */

void FUN_006612f0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,void *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *in_ECX;
  bool bVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar4 = param_3;
  puStack_c = &LAB_006f7210;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  bVar6 = true;
  local_8 = 0;
  puVar1 = (undefined4 *)*in_ECX;
  puVar5 = (undefined4 *)((undefined4 *)*in_ECX)[1];
  while (*(char *)((int)puVar5 + 0xd) == '\0') {
    if ((char)param_2 == '\0') {
      piVar3 = puVar5 + 4;
      if (7 < (uint)puVar5[9]) {
        piVar3 = (int *)*piVar3;
      }
      iVar2 = FUN_00428db0(0,puVar4[4],piVar3,puVar5[8]);
      bVar6 = iVar2 < 0;
    }
    else {
      puVar1 = puVar4;
      if (7 < (uint)puVar4[5]) {
        puVar1 = (undefined4 *)*puVar4;
      }
      iVar2 = FUN_00428db0(0,puVar5[8],puVar1,puVar4[4]);
      bVar6 = -1 < iVar2;
    }
    puVar1 = puVar5;
    if (bVar6 == false) {
      puVar5 = (undefined4 *)puVar5[2];
    }
    else {
      puVar5 = (undefined4 *)*puVar5;
    }
  }
  param_2 = puVar1;
  if (bVar6 != false) {
    if (puVar1 == *(undefined4 **)*in_ECX) {
      bVar6 = true;
      goto LAB_006613ae;
    }
    FUN_0042c740();
  }
  puVar5 = puVar4;
  if (7 < (uint)puVar4[5]) {
    puVar5 = (undefined4 *)*puVar4;
  }
  iVar2 = FUN_00428db0(0,param_2[8],puVar5,puVar4[4]);
  if (-1 < iVar2) {
    if (*(uint *)((int)param_4 + 0x24) < 8) {
      *(undefined4 *)((int)param_4 + 0x24) = 7;
      *(undefined4 *)((int)param_4 + 0x20) = 0;
      *(undefined2 *)((int)param_4 + 0x10) = 0;
                    /* WARNING: Subroutine does not return */
      operator_delete(param_4);
    }
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)((int)param_4 + 0x10));
  }
LAB_006613ae:
  puVar4 = (undefined4 *)FUN_0058dc20(&param_2,bVar6,puVar1,puVar4,param_4);
  *param_1 = *puVar4;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return;
}


/* FUN_006619a0 @ 006619a0  kind=gamemisc  attributed-by=caller-vote  size=125 */

undefined4 FUN_006619a0(undefined4 param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f7dcb;
  local_10 = ExceptionList;
  uVar1 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_006621e0(param_1);
  pvVar2 = operator_new(0x10);
  local_8 = 0;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00459a90(uVar1);
  }
  local_8 = 0xffffffff;
  puVar4 = (undefined4 *)FUN_00661830(param_1);
  *puVar4 = uVar3;
  ExceptionList = local_10;
  return uVar3;
}


/* FUN_00661f80 @ 00661f80  kind=gamemisc  attributed-by=caller-vote  size=569 */

void FUN_00661f80(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int *in_ECX;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *local_24;
  undefined4 *local_20;
  int local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f72d8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = in_ECX;
  (**(code **)(*in_ECX + 0x10))(param_1,DAT_0076aa78 ^ (uint)&stack0xfffffffc);
  piVar7 = *(int **)in_ECX[1];
  local_18 = piVar7;
  if (piVar7 != (int *)in_ECX[1]) {
    do {
      local_24 = (int *)piVar7[10];
      iVar10 = 0;
      iVar6 = (local_24[1] - *local_24) / 0xc;
      if (0 < iVar6) {
        iVar9 = *local_24;
        do {
          if (local_24[3] == 0) {
            iVar8 = iVar10;
            if (iVar10 < 0) {
              iVar8 = 0;
            }
            if (iVar6 <= iVar8) {
              iVar8 = iVar6 + -1;
            }
          }
          else {
            iVar8 = (iVar6 + iVar10) % iVar6;
          }
          if (param_1 < *(int *)(iVar9 + iVar8 * 0xc)) {
            if (local_24[3] == 0) {
              iVar8 = iVar10;
              if (iVar10 < 0) {
                iVar8 = 0;
              }
              if (iVar6 <= iVar8) {
                iVar8 = iVar6 + -1;
              }
            }
            else {
              iVar8 = (iVar6 + iVar10) % iVar6;
            }
            piVar7 = (int *)(iVar9 + iVar8 * 0xc);
            *piVar7 = *piVar7 + -1;
          }
          iVar9 = *local_24;
          iVar6 = (local_24[1] - iVar9) / 0xc;
          iVar10 = iVar10 + 1;
          piVar7 = local_18;
        } while (iVar10 < iVar6);
      }
      if (*(char *)((int)piVar7 + 0xd) == '\0') {
        piVar2 = (int *)piVar7[2];
        if (*(char *)((int)piVar2 + 0xd) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0xd);
          piVar7 = piVar2;
          piVar2 = (int *)*piVar2;
          while (local_18 = piVar7, cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0xd);
            piVar7 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar7[1] + 0xd);
          piVar4 = (int *)piVar7[1];
          piVar2 = piVar7;
          while ((piVar7 = piVar4, local_18 = piVar7, cVar1 == '\0' && (piVar2 == (int *)piVar7[2]))
                ) {
            cVar1 = *(char *)(piVar7[1] + 0xd);
            piVar4 = (int *)piVar7[1];
            piVar2 = piVar7;
          }
        }
      }
    } while (piVar7 != (int *)local_14[1]);
  }
  iVar10 = 0;
  local_1c = 0;
  puVar5 = (undefined4 *)FUN_0046d550(0,0);
  iVar9 = 0;
  local_18 = (int *)local_14[3];
  iVar6 = (local_14[4] - (int)local_18) / 0xc;
  local_8 = 0;
  local_20 = puVar5;
  if (0 < iVar6) {
    do {
      if (local_14[6] == 0) {
        iVar8 = iVar9;
        if (iVar9 < 0) {
          iVar8 = 0;
        }
        if (iVar6 <= iVar8) {
          iVar8 = iVar6 + -1;
        }
      }
      else {
        iVar8 = (iVar6 + iVar9) % iVar6;
      }
      if (*(int *)((int)local_18 + iVar8 * 0xc) == param_1) {
        local_24 = (int *)(iVar9 - iVar10);
        iVar6 = FUN_00583cb0(puVar5,puVar5[1],&local_24);
        if (iVar10 == 0x15555554) {
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("list<T> too long");
        }
        puVar5[1] = iVar6;
        iVar10 = iVar10 + 1;
        **(int **)(iVar6 + 4) = iVar6;
        local_1c = iVar10;
      }
      iVar9 = iVar9 + 1;
      local_18 = (int *)local_14[3];
      iVar6 = (local_14[4] - (int)local_18) / 0xc;
    } while (iVar9 < iVar6);
  }
  for (puVar3 = (undefined4 *)*puVar5; puVar3 != puVar5; puVar3 = (undefined4 *)*puVar3) {
    FUN_00677990(puVar3[2]);
  }
  puVar3 = (undefined4 *)*puVar5;
  *puVar5 = puVar5;
  puVar5[1] = puVar5;
  if (puVar3 == puVar5) {
                    /* WARNING: Subroutine does not return */
    operator_delete(puVar5);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(puVar3);
}


/* FUN_006621e0 @ 006621e0  kind=gamemisc  attributed-by=caller-vote  size=259 */

void FUN_006621e0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int in_ECX;
  int iVar6;
  int iVar7;
  undefined1 local_10 [12];
  
  iVar7 = param_1;
  piVar1 = (int *)(in_ECX + 4);
  iVar2 = FUN_004e3790(param_1);
  if (iVar2 != *piVar1) {
    piVar3 = (int *)(iVar2 + 0x10);
    if (7 < *(uint *)(iVar2 + 0x24)) {
      piVar3 = (int *)*piVar3;
    }
    iVar4 = FUN_00428db0(0,*(undefined4 *)(iVar7 + 0x10),piVar3,*(undefined4 *)(iVar2 + 0x20));
    param_1 = iVar2;
    if (-1 < iVar4) goto LAB_0066222c;
  }
  param_1 = *piVar1;
LAB_0066222c:
  if ((param_1 == *piVar1) || (piVar1 = *(int **)(param_1 + 0x28), piVar1 == (int *)0x0)) {
    return;
  }
  puVar5 = (undefined4 *)FUN_00639210(local_10,iVar7);
  FUN_00661a20(&param_1,*puVar5,puVar5[1]);
  iVar7 = *piVar1;
  iVar2 = (piVar1[1] - iVar7) / 0xc;
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      if (piVar1[3] == 0) {
        iVar6 = iVar4;
        if (iVar4 < 0) {
          iVar6 = 0;
        }
        if (iVar2 <= iVar6) {
          iVar6 = iVar2 + -1;
        }
      }
      else {
        iVar6 = (iVar2 + iVar4) % iVar2;
      }
      FUN_00661f80(*(undefined4 *)(iVar7 + iVar6 * 0xc));
      iVar7 = *piVar1;
      iVar2 = (piVar1[1] - iVar7) / 0xc;
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  if ((void *)*piVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(piVar1);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete((void *)*piVar1);
}


/* FUN_00665d30 @ 00665d30  kind=gamemisc  attributed-by=caller-vote  size=511 */

void FUN_00665d30(undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 param_4)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *in_ECX;
  int *piVar6;
  int *piVar7;
  
  if (0xaaaaaa8 < (uint)in_ECX[1]) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("map/set<T> too long");
  }
  piVar3 = (int *)FUN_00608a60(param_4);
  in_ECX[1] = in_ECX[1] + 1;
  piVar3[1] = (int)param_3;
  if (param_3 == (undefined4 *)*in_ECX) {
    ((undefined4 *)*in_ECX)[1] = piVar3;
    *(int **)*in_ECX = piVar3;
    iVar4 = *in_ECX;
  }
  else {
    if (param_2 != '\0') {
      *param_3 = piVar3;
      if (param_3 == *(undefined4 **)*in_ECX) {
        *(int **)*in_ECX = piVar3;
      }
      goto LAB_00665d8e;
    }
    param_3[2] = piVar3;
    iVar4 = *in_ECX;
    if (param_3 != *(undefined4 **)(iVar4 + 8)) goto LAB_00665d8e;
  }
  *(int **)(iVar4 + 8) = piVar3;
LAB_00665d8e:
  cVar1 = *(char *)(piVar3[1] + 0xc);
  piVar5 = piVar3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*in_ECX + 4) + 0xc) = 1;
      *param_1 = piVar3;
      return;
    }
    piVar7 = (int *)piVar5[1];
    piVar6 = *(int **)piVar7[1];
    if (piVar7 == piVar6) {
      piVar6 = (int *)((undefined4 *)piVar7[1])[2];
      if ((char)piVar6[3] != '\0') {
        if (piVar5 == (int *)piVar7[2]) {
          piVar5 = (int *)piVar7[2];
          piVar7[2] = *piVar5;
          if (*(char *)(*piVar5 + 0xd) == '\0') {
            *(int **)(*piVar5 + 4) = piVar7;
          }
          piVar5[1] = piVar7[1];
          if (piVar7 == *(int **)(*in_ECX + 4)) {
            *(int **)(*in_ECX + 4) = piVar5;
          }
          else {
            piVar6 = (int *)piVar7[1];
            if (piVar7 == (int *)*piVar6) {
              *piVar6 = (int)piVar5;
            }
            else {
              piVar6[2] = (int)piVar5;
            }
          }
          *piVar5 = (int)piVar7;
          piVar7[1] = (int)piVar5;
          piVar5 = piVar7;
        }
        *(undefined1 *)(piVar5[1] + 0xc) = 1;
        *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0xc) = 0;
        piVar7 = *(int **)(piVar5[1] + 4);
        piVar6 = (int *)*piVar7;
        *piVar7 = piVar6[2];
        if (*(char *)(piVar6[2] + 0xd) == '\0') {
          *(int **)(piVar6[2] + 4) = piVar7;
        }
        piVar6[1] = piVar7[1];
        if (piVar7 == *(int **)(*in_ECX + 4)) {
          *(int **)(*in_ECX + 4) = piVar6;
          piVar6[2] = (int)piVar7;
        }
        else {
          piVar2 = (int *)piVar7[1];
          if (piVar7 == (int *)piVar2[2]) {
            piVar2[2] = (int)piVar6;
            piVar6[2] = (int)piVar7;
          }
          else {
            *piVar2 = (int)piVar6;
            piVar6[2] = (int)piVar7;
          }
        }
        goto LAB_00665f0a;
      }
LAB_00665e61:
      *(undefined1 *)(piVar7 + 3) = 1;
      *(undefined1 *)(piVar6 + 3) = 1;
      *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0xc) = 0;
      piVar5 = *(int **)(piVar5[1] + 4);
    }
    else {
      if ((char)piVar6[3] == '\0') goto LAB_00665e61;
      if (piVar5 == (int *)*piVar7) {
        iVar4 = *piVar7;
        *piVar7 = *(int *)(iVar4 + 8);
        if (*(char *)(*(int *)(iVar4 + 8) + 0xd) == '\0') {
          *(int **)(*(int *)(iVar4 + 8) + 4) = piVar7;
        }
        *(int *)(iVar4 + 4) = piVar7[1];
        if (piVar7 == *(int **)(*in_ECX + 4)) {
          *(int *)(*in_ECX + 4) = iVar4;
        }
        else {
          piVar5 = (int *)piVar7[1];
          if (piVar7 == (int *)piVar5[2]) {
            piVar5[2] = iVar4;
          }
          else {
            *piVar5 = iVar4;
          }
        }
        *(int **)(iVar4 + 8) = piVar7;
        piVar7[1] = iVar4;
        piVar5 = piVar7;
      }
      *(undefined1 *)(piVar5[1] + 0xc) = 1;
      *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0xc) = 0;
      piVar7 = *(int **)(piVar5[1] + 4);
      piVar6 = (int *)piVar7[2];
      piVar7[2] = *piVar6;
      if (*(char *)(*piVar6 + 0xd) == '\0') {
        *(int **)(*piVar6 + 4) = piVar7;
      }
      piVar6[1] = piVar7[1];
      if (piVar7 == *(int **)(*in_ECX + 4)) {
        *(int **)(*in_ECX + 4) = piVar6;
      }
      else {
        piVar2 = (int *)piVar7[1];
        if (piVar7 == (int *)*piVar2) {
          *piVar2 = (int)piVar6;
        }
        else {
          piVar2[2] = (int)piVar6;
        }
      }
      *piVar6 = (int)piVar7;
LAB_00665f0a:
      piVar7[1] = (int)piVar6;
    }
    cVar1 = *(char *)(piVar5[1] + 0xc);
  } while( true );
}


/* FUN_00667dd0 @ 00667dd0  kind=gamemisc  attributed-by=caller-vote  size=119 */

void FUN_00667dd0(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *in_ECX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar4 = (undefined4 *)*in_ECX;
  puVar1 = (undefined4 *)puVar4[1];
  puVar5 = puVar4;
  if (*(char *)((int)puVar1 + 0xd) == '\0') {
    puVar2 = puVar1;
    do {
      if ((int)puVar2[4] < *param_2) {
        puVar3 = (undefined4 *)puVar2[2];
      }
      else {
        if ((*(char *)((int)puVar4 + 0xd) != '\0') && (*param_2 < (int)puVar2[4])) {
          puVar4 = puVar2;
        }
        puVar3 = (undefined4 *)*puVar2;
        puVar5 = puVar2;
      }
      puVar2 = puVar3;
    } while (*(char *)((int)puVar3 + 0xd) == '\0');
  }
  if (*(char *)((int)puVar4 + 0xd) == '\0') {
    puVar1 = (undefined4 *)*puVar4;
  }
  if (*(char *)((int)puVar1 + 0xd) == '\0') {
    do {
      if (*param_2 < (int)puVar1[4]) {
        puVar2 = (undefined4 *)*puVar1;
        puVar4 = puVar1;
      }
      else {
        puVar2 = (undefined4 *)puVar1[2];
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0xd) == '\0');
  }
  *param_1 = (int)puVar5;
  param_1[1] = (int)puVar4;
  return;
}


/* FUN_00668950 @ 00668950  kind=gamemisc  attributed-by=caller-vote  size=201 */

void FUN_00668950(uint param_1)

{
  uint uVar1;
  int *in_ECX;
  void *pvVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar1 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f7da0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar2 = (void *)0x0;
  if (param_1 != 0) {
    if (param_1 < 0x15555556) {
      pvVar2 = operator_new(param_1 * 0xc);
      if (pvVar2 != (void *)0x0) goto LAB_006689af;
    }
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
LAB_006689af:
  local_8 = 0;
  FUN_00666110(*in_ECX,in_ECX[1],pvVar2,(int)&param_1 + 3,0,param_1);
  param_1 = (in_ECX[1] - *in_ECX) / 0xc;
  if ((void *)*in_ECX != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)*in_ECX);
  }
  *in_ECX = (int)pvVar2;
  in_ECX[2] = (int)((int)pvVar2 + uVar1 * 0xc);
  in_ECX[1] = (int)((int)pvVar2 + param_1 * 0xc);
  ExceptionList = local_10;
  return;
}


/* FUN_00677760 @ 00677760  kind=gamemisc  attributed-by=caller-vote  size=48 */

void FUN_00677760(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  for (; param_1 != param_2; param_1 = (undefined8 *)((int)param_1 + 0xc)) {
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = *param_1;
      *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_1 + 1);
    }
    param_3 = (undefined8 *)((int)param_3 + 0xc);
  }
  return;
}


/* FUN_00677990 @ 00677990  kind=gamemisc  attributed-by=caller-vote  size=66 */

void FUN_00677990(int param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int *in_ECX;
  
  puVar2 = (undefined8 *)in_ECX[1];
  puVar1 = (undefined8 *)(*in_ECX + param_1 * 0xc);
  puVar3 = puVar1;
  while (puVar3 = (undefined8 *)((int)puVar3 + 0xc), puVar3 != puVar2) {
    *puVar1 = *puVar3;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar3 + 1);
    puVar1 = (undefined8 *)((int)puVar1 + 0xc);
  }
  in_ECX[1] = in_ECX[1] + -0xc;
  return;
}


/* FUN_00677b00 @ 00677b00  kind=gamemisc  attributed-by=caller-vote  size=150 */

undefined2 * FUN_00677b00(int param_1,int param_2,undefined2 *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_006f83e1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uStack_7 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x1c) {
    local_8 = 1;
    if (param_3 != (undefined2 *)0x0) {
      *(undefined4 *)(param_3 + 10) = 7;
      *(undefined4 *)(param_3 + 8) = 0;
      *param_3 = 0;
      FUN_0040f680(param_1,0,0xffffffff);
      *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(param_1 + 0x18);
    }
    param_3 = param_3 + 0xe;
  }
  ExceptionList = local_10;
  return param_3;
}


/* FUN_00677e20 @ 00677e20  kind=gamemisc  attributed-by=caller-vote  size=111 */

int FUN_00677e20(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  
  iVar3 = in_ECX[2] - in_ECX[1];
  iVar2 = iVar3 * -0x6db6db6d;
  if ((uint)(iVar3 / 0x1c) < param_1) {
    iVar2 = (in_ECX[1] - *in_ECX) / 0x1c;
    if (0x9249249U - iVar2 < param_1) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("vector<T> too long");
    }
    uVar1 = FUN_005aee40(iVar2 + param_1);
    iVar2 = FUN_00677d10(uVar1);
  }
  return iVar2;
}


/* FUN_00677e90 @ 00677e90  kind=gamemisc  attributed-by=caller-vote  size=261 */

void FUN_00677e90(undefined4 *param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  int local_34;
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f72a8;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar1 = (int *)(in_ECX + 0x24);
  local_34 = 0;
  if (0 < (*(int *)(in_ECX + 0x28) - *piVar1) / 0x1c) {
    iVar4 = 0;
    do {
      if (*(int *)(*piVar1 + iVar4 + 0x18) == param_2) {
        puVar2 = param_1;
        if (7 < (uint)param_1[5]) {
          puVar2 = (undefined4 *)*param_1;
        }
        iVar3 = FUN_00428db0(0,*(undefined4 *)(*piVar1 + iVar4 + 0x10),puVar2,param_1[4]);
        if (iVar3 == 0) goto LAB_00677f7a;
      }
      local_34 = local_34 + 1;
      iVar4 = iVar4 + 0x1c;
    } while (local_34 < (*(int *)(in_ECX + 0x28) - *piVar1) / 0x1c);
  }
  local_1c = 7;
  local_20 = 0;
  local_30[0] = (void *)((uint)local_30[0] & 0xffff0000);
  FUN_0040f680(param_1,0,0xffffffff);
  local_18 = param_2;
  local_8 = 0;
  FUN_00677fa0(local_30);
  if (7 < local_1c) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_30[0]);
  }
LAB_00677f7a:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00677fa0 @ 00677fa0  kind=gamemisc  attributed-by=caller-vote  size=218 */

void FUN_00677fa0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint *in_ECX;
  undefined2 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f8472;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = in_ECX[1];
  if ((param_1 < uVar1) && (uVar2 = *in_ECX, uVar2 <= param_1)) {
    if (uVar1 == in_ECX[2]) {
      FUN_00677e20(1);
    }
    puVar3 = (undefined2 *)in_ECX[1];
    param_1 = *in_ECX + ((int)(param_1 - uVar2) / 0x1c) * 0x1c;
    local_8 = 0;
  }
  else {
    if (uVar1 == in_ECX[2]) {
      FUN_00677e20(1);
    }
    puVar3 = (undefined2 *)in_ECX[1];
    local_8 = 1;
  }
  if (puVar3 != (undefined2 *)0x0) {
    *(undefined4 *)(puVar3 + 10) = 7;
    *(undefined4 *)(puVar3 + 8) = 0;
    *puVar3 = 0;
    FUN_0040f680(param_1,0,0xffffffff);
    *(undefined4 *)(puVar3 + 0xc) = *(undefined4 *)(param_1 + 0x18);
  }
  in_ECX[1] = in_ECX[1] + 0x1c;
  ExceptionList = local_10;
  return;
}


/* FUN_0067bcc0 @ 0067bcc0  kind=gamemisc  attributed-by=caller-vote  size=57 */

void FUN_0067bcc0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x38c) = param_1;
  if (*(int *)(in_ECX + 0x388) < 0) {
    *(undefined4 *)(in_ECX + 0x388) = 0;
  }
  if (1000 < *(int *)(in_ECX + 0x388)) {
    *(undefined4 *)(in_ECX + 0x388) = 1000;
  }
  return;
}


/* FUN_0067bd00 @ 0067bd00  kind=gamemisc  attributed-by=caller-vote  size=16 */

void FUN_0067bd00(undefined1 param_1)

{
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 0x380) = param_1;
  return;
}


/* FUN_0067bd10 @ 0067bd10  kind=gamemisc  attributed-by=caller-vote  size=45 */

void FUN_0067bd10(int param_1)

{
  int in_ECX;
  
  if (param_1 < 0) {
    param_1 = 0;
  }
  *(int *)(in_ECX + 0x388) = param_1;
  if (100 < param_1) {
    param_1 = 100;
  }
  *(int *)(in_ECX + 0x388) = param_1;
  return;
}


/* FUN_0067bd40 @ 0067bd40  kind=gamemisc  attributed-by=caller-vote  size=15 */

void FUN_0067bd40(void)

{
  FUN_0067a7b0();
  return;
}


/* FUN_0067d9e0 @ 0067d9e0  kind=gamemisc  attributed-by=caller-vote  size=16 */

void FUN_0067d9e0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x240) = param_1;
  return;
}


/* FUN_0067fdb0 @ 0067fdb0  kind=gamemisc  attributed-by=caller-vote  size=47 */

void FUN_0067fdb0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 2) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
    }
    param_3 = param_3 + 2;
  }
  return;
}


/* FUN_00681260 @ 00681260  kind=gamemisc  attributed-by=caller-vote  size=143 */

void FUN_00681260(int *param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f8b80;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  cVar2 = FUN_0046d440(param_1[1] - *param_1 >> 3);
  if (cVar2 != '\0') {
    local_8 = 0;
    uVar3 = FUN_0067fdb0(*piVar1,piVar1[1],*in_ECX,(int)&param_1 + 3,param_1);
    in_ECX[1] = uVar3;
  }
  ExceptionList = local_10;
  return;
}


/* FUN_006816c0 @ 006816c0  kind=gamemisc  attributed-by=caller-vote  size=345 */

void FUN_006816c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  uint uVar1;
  undefined4 uVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f8c70;
  local_10 = ExceptionList;
  uVar1 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00688030(param_5);
  local_8 = 0;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  *(undefined4 *)(in_ECX + 0x24) = 0;
  uVar2 = FUN_0043c870(uVar1);
  *(undefined4 *)(in_ECX + 0x20) = uVar2;
  local_8._0_1_ = 1;
  *(undefined4 *)(in_ECX + 0x28) = 0;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  uVar2 = FUN_0043c870();
  *(undefined4 *)(in_ECX + 0x28) = uVar2;
  local_8._0_1_ = 2;
  *(undefined4 *)(in_ECX + 0x30) = 0;
  *(undefined4 *)(in_ECX + 0x34) = 0;
  uVar2 = FUN_0043c870();
  *(undefined4 *)(in_ECX + 0x30) = uVar2;
  local_8._0_1_ = 3;
  *(undefined4 *)(in_ECX + 0x38) = 0;
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  uVar2 = FUN_0043c870();
  *(undefined4 *)(in_ECX + 0x38) = uVar2;
  local_8._0_1_ = 4;
  *(undefined4 *)(in_ECX + 0x40) = 0;
  *(undefined4 *)(in_ECX + 0x44) = 0;
  uVar2 = FUN_0043c870();
  *(undefined4 *)(in_ECX + 0x40) = uVar2;
  local_8._0_1_ = 5;
  *(undefined4 *)(in_ECX + 0x48) = 0;
  *(undefined4 *)(in_ECX + 0x4c) = 0;
  uVar2 = FUN_0043c870();
  *(undefined4 *)(in_ECX + 0x48) = uVar2;
  local_8._0_1_ = 6;
  *(undefined4 *)(in_ECX + 0x50) = 0;
  *(undefined4 *)(in_ECX + 0x54) = 0;
  uVar2 = FUN_0043c870();
  *(undefined4 *)(in_ECX + 0x50) = uVar2;
  local_8._0_1_ = 7;
  *(undefined4 *)(in_ECX + 0x58) = 0;
  *(undefined4 *)(in_ECX + 0x5c) = 0;
  uVar2 = FUN_0046d4b0();
  *(undefined4 *)(in_ECX + 0x58) = uVar2;
  local_8 = CONCAT31(local_8._1_3_,8);
  *(undefined4 *)(in_ECX + 0x60) = param_4;
  FUN_00681260(param_6);
  *(undefined4 *)(in_ECX + 0x70) = param_1;
  *(undefined4 *)(in_ECX + 0x74) = param_2;
  *(undefined4 *)(in_ECX + 0x78) = param_3;
  ExceptionList = local_10;
  return;
}


/* FUN_006819e0 @ 006819e0  kind=gamemisc  attributed-by=caller-vote  size=55 */

undefined4 * FUN_006819e0(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  puVar1 = operator_new(0x1c);
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


/* FUN_00681a20 @ 00681a20  kind=gamemisc  attributed-by=caller-vote  size=49 */

void FUN_00681a20(int param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  
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


/* FUN_00681b70 @ 00681b70  kind=gamemisc  attributed-by=caller-vote  size=104 */

void FUN_00681b70(void)

{
  undefined4 *puVar1;
  void *pvVar2;
  int *in_ECX;
  
  puVar1 = (undefined4 *)*in_ECX;
  pvVar2 = (void *)*puVar1;
  *puVar1 = puVar1;
  *(int *)(*in_ECX + 4) = *in_ECX;
  in_ECX[1] = 0;
  if (pvVar2 == (void *)*in_ECX) {
    return;
  }
  if (0xf < *(uint *)((int)pvVar2 + 0x34)) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)((int)pvVar2 + 0x20));
  }
  *(undefined4 *)((int)pvVar2 + 0x34) = 0xf;
  *(undefined4 *)((int)pvVar2 + 0x30) = 0;
  *(undefined1 *)((int)pvVar2 + 0x20) = 0;
  if (0xf < *(uint *)((int)pvVar2 + 0x1c)) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)((int)pvVar2 + 8));
  }
  *(undefined4 *)((int)pvVar2 + 0x1c) = 0xf;
  *(undefined4 *)((int)pvVar2 + 0x18) = 0;
  *(undefined1 *)((int)pvVar2 + 8) = 0;
                    /* WARNING: Subroutine does not return */
  operator_delete(pvVar2);
}


/* FUN_00687b10 @ 00687b10  kind=gamemisc  attributed-by=caller-vote  size=100 */

undefined8 FUN_00687b10(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  int local_c;
  int local_8;
  
  iVar5 = 0x3ffff;
  uVar4 = 0xffffffe5;
  local_8 = 0x3ffff;
  local_c = 0;
  if (0 < (int)param_1[4]) {
    do {
      puVar3 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar3 = (undefined4 *)*param_1;
      }
      uVar1 = uVar4 >> 0x1b;
      bVar6 = uVar4 * 0x20 < uVar4;
      uVar2 = uVar4 * 0x1f;
      uVar4 = *(byte *)((int)puVar3 + local_c) + uVar2;
      iVar5 = (((local_8 << 5 | uVar1) - local_8) - (uint)bVar6) +
              (uint)CARRY4((uint)*(byte *)((int)puVar3 + local_c),uVar2);
      local_c = local_c + 1;
      local_8 = iVar5;
    } while (local_c < (int)param_1[4]);
  }
  return CONCAT44(iVar5,uVar4);
}


/* FUN_00688030 @ 00688030  kind=gamemisc  attributed-by=caller-vote  size=139 */

void FUN_00688030(undefined4 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f91f8;
  local_10 = ExceptionList;
  uVar1 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = 0;
  in_ECX[1] = 0;
  uVar2 = FUN_00439600(0,0);
  *in_ECX = uVar2;
  in_ECX[2] = param_1;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  local_8 = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  uVar2 = FUN_0064e370(uVar1);
  in_ECX[6] = uVar2;
  ExceptionList = local_10;
  return;
}


