// Unsorted (world) -- cube. 25 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Unsorted.h"

/* FUN_0042c500 @ 0042c500  kind=gamemisc  attributed-by=logic:caller-vote  size=26 */

void FUN_0042c500(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  in_ECX[2] = param_3;
  return;
}


/* FUN_0042f7e0 @ 0042f7e0  kind=gamemisc  attributed-by=logic:caller-vote  size=119 */

undefined * FUN_0042f7e0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  
  iVar2 = FUN_004347a0(param_1,param_2,param_4);
  if (iVar2 == 0) {
    return &DAT_0076afc4;
  }
  iVar1 = *(int *)(iVar2 + 0x10);
  if (param_3 < iVar1) {
    return &DAT_0076afc4;
  }
  if (*(int *)(iVar2 + 0x1c) + iVar1 <= param_3) {
    puVar3 = &DAT_0076afbc;
    if (0 < param_3) {
      puVar3 = &DAT_0076afc0;
    }
    return puVar3;
  }
  puVar3 = (undefined *)FUN_0042f730(param_3 - iVar1);
  if ((((puVar3[3] & 0x1f) == 0) && (param_3 < 1)) && ((puVar3[3] & 0x40) == 0)) {
    puVar3 = &DAT_0076afbc;
  }
  return puVar3;
}


/* FUN_004347a0 @ 004347a0  kind=gamemisc  attributed-by=logic:caller-vote  size=208 */

int FUN_004347a0(uint param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if ((((-1 < (int)param_1) && (-1 < (int)param_2)) && ((int)param_1 < 0x1000000)) &&
     ((int)param_2 < 0x1000000)) {
    if (param_3 == 0) {
      param_3 = FUN_00434d10((int)(param_1 + ((int)param_1 >> 0x1f & 0xffU)) >> 8,
                             (int)(param_2 + ((int)param_2 >> 0x1f & 0xffU)) >> 8);
    }
    else {
      iVar1 = *(int *)(param_3 + 0x60) * 0x100;
      if ((int)param_1 < iVar1) {
        return 0;
      }
      iVar2 = *(int *)(param_3 + 100) * 0x100;
      if ((int)param_2 < iVar2) {
        return 0;
      }
      if (iVar1 + 0x100 <= (int)param_1) {
        return 0;
      }
      if (iVar2 + 0x100 <= (int)param_2) {
        return 0;
      }
    }
    if (param_3 != 0) {
      param_2 = param_2 & 0x800000ff;
      if ((int)param_2 < 0) {
        param_2 = (param_2 - 1 | 0xffffff00) + 1;
      }
      param_1 = param_1 & 0x800000ff;
      if ((int)param_1 < 0) {
        param_1 = (param_1 - 1 | 0xffffff00) + 1;
      }
      return (param_1 + param_2 * 0x100) * 0x20 + *(int *)(param_3 + 0xa8);
    }
  }
  return 0;
}


/* FUN_00434a90 @ 00434a90  kind=gamemisc  attributed-by=logic:caller-vote  size=54 */

undefined4 FUN_00434a90(int param_1,int param_2)

{
  int in_ECX;
  
  if ((((-1 < param_1) && (-1 < param_2)) && (param_1 < 0x400)) && (param_2 < 0x400)) {
    return *(undefined4 *)(in_ECX + 0xbc + (param_1 * 0x400 + param_2) * 4);
  }
  return 0;
}


/* FUN_0044a650 @ 0044a650  kind=gamemisc  attributed-by=logic:caller-vote  size=61 */

int FUN_0044a650(int param_1,int param_2,int param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (param_3 != 0) {
      FUN_0044a8c0(param_1);
    }
    param_1 = param_1 + 0x148;
    param_3 = param_3 + 0x148;
  } while (param_1 != param_2);
  return param_3;
}


/* FUN_0044e7a0 @ 0044e7a0  kind=gamemisc  attributed-by=logic:caller-vote  size=228 */

void FUN_0044e7a0(undefined4 param_1,undefined4 param_2,int param_3,undefined *param_4,
                 undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 local_1c;
  undefined1 local_1a;
  undefined2 local_18;
  undefined1 local_16;
  undefined1 local_15;
  undefined1 local_14 [12];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar2 = FUN_004347a0(param_1,param_2,param_5);
  if ((iVar2 != 0) &&
     ((param_4[3] != 0 || (param_3 < *(int *)(iVar2 + 0x1c) + *(int *)(iVar2 + 0x10))))) {
    iVar1 = *(int *)(iVar2 + 0x10);
    if ((param_3 < 1) && ((param_4[3] & 0x5f) == 0)) {
      param_4 = &DAT_0076b010;
    }
    FUN_0044e700(param_3 - iVar1,param_4);
    while (param_3 = param_3 + 1, param_3 < iVar1) {
      iVar3 = FUN_005f9620(local_14,param_1,param_2,param_3,param_5);
      iVar4 = 0;
      do {
        iVar5 = iVar4 + 1;
        *(char *)((int)&local_1c + iVar4) = (char)(int)*(float *)(iVar3 + iVar4 * 4);
        iVar4 = iVar5;
      } while (iVar5 < 3);
      local_18 = local_1c;
      local_16 = local_1a;
      local_15 = 6;
      FUN_0044e700(param_3 - *(int *)(iVar2 + 0x10),&local_18);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00456f20 @ 00456f20  kind=gamemisc  attributed-by=logic:caller-vote  size=72 */

void FUN_00456f20(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  if (param_1 != param_2) {
    puVar2 = param_1 + 2;
    do {
      if (param_3 != (undefined1 *)0x0) {
        *param_3 = puVar2[-2];
        param_3[1] = puVar2[-1];
        param_3[2] = *puVar2;
        param_3[3] = puVar2[1];
        *(undefined4 *)(param_3 + 4) = *(undefined4 *)(puVar2 + 2);
      }
      param_3 = param_3 + 8;
      puVar1 = puVar2 + 6;
      puVar2 = puVar2 + 8;
    } while (puVar1 != param_2);
  }
  return;
}


/* FUN_00457ea0 @ 00457ea0  kind=gamemisc  attributed-by=logic:caller-vote  size=23 */

void FUN_00457ea0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = *param_3;
  *param_1 = *param_2;
  param_1[1] = uVar1;
  return;
}


/* FUN_0046ebe0 @ 0046ebe0  kind=gamemisc  attributed-by=logic:caller-vote  size=717 */

void FUN_0046ebe0(char *param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int *in_ECX;
  undefined4 extraout_EDX;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int local_244;
  int *local_240;
  int local_23c [71];
  char local_120;
  char local_11f;
  short local_110;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  pcVar6 = param_1;
  if (param_2 == -1) {
    param_2 = FUN_0047fa30(param_1);
  }
  if (*param_1 == '\0') goto LAB_0046ee9a;
  if ((in_ECX[1] - *in_ECX) / 0xc <= param_2) {
    FUN_00487380(param_2 + 1);
  }
  FUN_0040ee70(param_1);
  iVar4 = 1;
  if (((local_120 == '\f') || (local_120 == '\r')) || (local_120 == '\x15')) {
LAB_0046ec90:
    iVar4 = (int)local_110;
    local_110 = 1;
  }
  else if (local_120 == '\v') {
    if (local_11f != '\x0e') goto LAB_0046ec90;
  }
  else if (((local_120 == '\0') || (local_120 == '\x19')) ||
          ((local_120 == '\x14' || ((local_120 == '\x18' || (local_120 == '\x17'))))))
  goto LAB_0046ec90;
  if (*param_1 == '\f') {
    cVar2 = param_1[0xd];
    if (cVar2 == '\n') {
LAB_0046ecbc:
      in_ECX[0x4a] = in_ECX[0x4a] + iVar4;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX,pcVar6);
      return;
    }
    if (cVar2 == '\v') {
      in_ECX[0x4a] = in_ECX[0x4a] + iVar4 * 10000;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX,pcVar6);
      return;
    }
    if (cVar2 == '\f') {
      iVar4 = iVar4 * 100;
      goto LAB_0046ecbc;
    }
  }
  if (*param_1 == '\r') {
    in_ECX[0x4b] = in_ECX[0x4b] + iVar4;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX,pcVar6);
    return;
  }
  iVar5 = -1;
  piVar3 = (int *)(*in_ECX + param_2 * 0xc);
  local_244 = 0;
  if (0 < (piVar3[1] - *piVar3) / 0x11c) {
    piVar1 = (int *)*piVar3;
    local_240 = piVar1;
    do {
      if ((*local_240 == 0) && (iVar5 < 0)) {
        iVar5 = local_244;
      }
      cVar2 = FUN_0047f9f0();
      if ((cVar2 != '\0') && (cVar2 = FUN_0042f4a0(&local_120), cVar2 != '\0')) {
        piVar1 = piVar1 + local_244 * 0x47;
        *piVar1 = *piVar1 + iVar4;
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      local_244 = local_244 + 1;
      local_240 = local_240 + 0x47;
    } while (local_244 < (piVar3[1] - *piVar3) / 0x11c);
    if (-1 < iVar5) {
      FUN_0042c5e0(&local_120);
      *(int *)(iVar5 * 0x11c + *(int *)(param_2 * 0xc + *in_ECX)) = iVar4;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  FUN_0043c0a0();
  FUN_0042c5e0(&local_120);
  local_23c[0] = iVar4;
  FUN_00486700(local_23c);
LAB_0046ee9a:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004c6940 @ 004c6940  kind=gamemisc  attributed-by=logic:caller-vote  size=111 */

int FUN_004c6940(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  
  iVar3 = in_ECX[2] - in_ECX[1];
  iVar2 = iVar3 * -0x15f15f15;
  if ((uint)(iVar3 / 0x118) < param_1) {
    iVar2 = (in_ECX[1] - *in_ECX) / 0x118;
    if (0xea0ea0U - iVar2 < param_1) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("vector<T> too long");
    }
    uVar1 = FUN_004c67f0(iVar2 + param_1);
    iVar2 = FUN_004c6840(uVar1);
  }
  return iVar2;
}


/* FUN_004c7e80 @ 004c7e80  kind=gamemisc  attributed-by=logic:caller-vote  size=80 */

uint FUN_004c7e80(float param_1,char param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  float10 fVar6;
  
  uVar1 = *(ushort *)(in_ECX + 0x10);
  uVar2 = (uint)uVar1;
  if (1 < (short)uVar1) {
    fVar6 = (float10)FUN_0043ca60((float)(int)(short)uVar1);
    if ((float)fVar6 - param_1 <= 0.0) {
      *(undefined2 *)(in_ECX + 0x10) = 1;
      return 1;
    }
    fVar6 = (float10)FUN_004462f0((float)fVar6 - param_1);
    iVar4 = (int)fVar6;
    iVar5 = (int)*(short *)(in_ECX + 0x10);
    if (iVar4 < 1) {
      iVar4 = 1;
    }
    if (param_2 != '\0') {
      fVar6 = (float10)FUN_0043ca60((float)iVar5);
      param_1 = (float)fVar6 + param_1;
      if (0.9999 < param_1) {
        param_1 = 0.9999;
      }
      fVar6 = (float10)FUN_004462f0(param_1);
      iVar5 = (int)fVar6;
    }
    iVar3 = rand();
    iVar5 = (iVar5 - iVar4) + 1;
    uVar2 = iVar3 / iVar5;
    *(short *)(in_ECX + 0x10) = (short)(iVar3 % iVar5) + (short)iVar4;
  }
  return uVar2;
}


/* FUN_004cb0c0 @ 004cb0c0  kind=gamemisc  attributed-by=logic:caller-vote  size=62 */

undefined1 * FUN_004cb0c0(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
    }
    param_1 = param_1 + 3;
    param_3 = param_3 + 3;
  } while (param_1 != param_2);
  return param_3;
}


/* FUN_0059a0e0 @ 0059a0e0  kind=gamemisc  attributed-by=logic:caller-vote  size=1805 */

/* WARNING: Removing unreachable block (ram,0x0059a64d) */

void FUN_0059a0e0(int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  byte bVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int local_1c;
  int local_18;
  ushort local_c;
  undefined2 local_8;
  
  iVar17 = param_1 - param_5;
  iVar13 = param_3 + param_5;
  if (iVar17 < iVar13) {
    iVar15 = iVar17;
    do {
      iVar5 = param_2 - param_5;
      if (param_2 - param_5 < param_4 + param_5) {
        do {
          iVar3 = FUN_004347a0(iVar15,iVar5,param_6);
          if (iVar3 != 0) {
            iVar3 = *(int *)(iVar3 + 0x1c);
            bVar2 = true;
            while (iVar3 = iVar3 + -1, -1 < iVar3) {
              puVar4 = (ushort *)FUN_0059aaf0(iVar3);
              if (((*(byte *)((int)puVar4 + 3) & 0x1f) == 0) ||
                 ((*(byte *)((int)puVar4 + 3) & 0x1f) == 2)) {
                if (bVar2) {
                  local_8 = CONCAT11(0xff,(byte)*puVar4);
                  bVar14 = 0xff;
                }
                else {
                  local_c = (ushort)(byte)*puVar4;
                  bVar14 = 0;
                  local_8 = local_c;
                }
                *puVar4 = local_8;
                *(byte *)(puVar4 + 1) = bVar14;
              }
              else {
                bVar2 = false;
              }
            }
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < param_4 + param_5);
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 < iVar13);
  }
  local_1c = 0;
  do {
    if (iVar17 < iVar13) {
      iVar15 = iVar17;
      do {
        iVar5 = param_2 - param_5;
        if (param_2 - param_5 < param_4 + param_5) {
          do {
            iVar3 = FUN_004347a0(iVar15,iVar5,param_6);
            if ((iVar3 != 0) && (local_18 = 0, 0 < *(int *)(iVar3 + 0x1c))) {
              do {
                iVar6 = FUN_0059aaf0(local_18);
                if ((((*(byte *)(iVar6 + 3) & 0x1f) == 0) || ((*(byte *)(iVar6 + 3) & 0x1f) == 2))
                   && (*(char *)(iVar6 + 2) != -1)) {
                  iVar18 = *(int *)(iVar3 + 0x10) + local_18;
                  uVar16 = 0;
                  iVar7 = FUN_004347a0(iVar15 + -1,iVar5,param_6);
                  if (iVar7 == 0) {
                    puVar8 = &DAT_0076b7d4;
                  }
                  else {
                    iVar11 = *(int *)(iVar7 + 0x10);
                    if (iVar18 < iVar11) {
                      puVar8 = &DAT_0076b7d4;
                    }
                    else if (iVar18 < *(int *)(iVar7 + 0x1c) + iVar11) {
                      puVar8 = (undefined *)FUN_0042f730(iVar18 - iVar11);
                      if ((((puVar8[3] & 0x1f) == 0) && (iVar18 < 1)) && ((puVar8[3] & 0x40) == 0))
                      {
                        puVar8 = &DAT_0076b7cc;
                      }
                    }
                    else {
                      puVar8 = &DAT_0076b7cc;
                      if (0 < iVar18) {
                        puVar8 = &DAT_0076b7d0;
                      }
                    }
                  }
                  bVar14 = puVar8[3] & 0x1f;
                  if (bVar14 == 0xd) {
                    uVar9 = 0xff;
LAB_0059a2f6:
                    uVar16 = uVar9;
                    if (uVar9 < 0xff) goto LAB_0059a303;
                  }
                  else {
                    if (((puVar8[3] & 0x1f) == 0) || (bVar14 == 2)) {
                      if ((byte)puVar8[2] < 5) {
                        uVar9 = 5;
                      }
                      else {
                        uVar9 = (uint)(byte)puVar8[2];
                        if (uVar9 == 0) goto LAB_0059a303;
                      }
                      goto LAB_0059a2f6;
                    }
LAB_0059a303:
                    iVar7 = FUN_004347a0(iVar15 + 1,iVar5,param_6);
                    if (iVar7 == 0) {
                      puVar8 = &DAT_0076b7d4;
                    }
                    else {
                      iVar11 = *(int *)(iVar7 + 0x10);
                      if (iVar18 < iVar11) {
                        puVar8 = &DAT_0076b7d4;
                      }
                      else if (iVar18 < *(int *)(iVar7 + 0x1c) + iVar11) {
                        puVar8 = (undefined *)FUN_0042f730(iVar18 - iVar11);
                        if ((((puVar8[3] & 0x1f) == 0) && (iVar18 < 1)) && ((puVar8[3] & 0x40) == 0)
                           ) {
                          puVar8 = &DAT_0076b7cc;
                        }
                      }
                      else {
                        puVar8 = &DAT_0076b7cc;
                        if (0 < iVar18) {
                          puVar8 = &DAT_0076b7d0;
                        }
                      }
                    }
                    bVar14 = puVar8[3] & 0x1f;
                    if (bVar14 == 0xd) {
                      uVar10 = 0xff;
                    }
                    else if (((puVar8[3] & 0x1f) == 0) || (bVar14 == 2)) {
                      if ((byte)puVar8[2] < 5) {
                        uVar10 = 5;
                      }
                      else {
                        uVar10 = (uint)(byte)puVar8[2];
                      }
                    }
                    else {
                      uVar10 = 0;
                    }
                    uVar9 = uVar16;
                    if (uVar16 < uVar10) {
                      uVar9 = uVar10;
                    }
                    if (uVar9 < 0xff) {
                      iVar7 = FUN_004347a0(iVar15,iVar5 + -1,param_6);
                      if (iVar7 == 0) {
                        puVar8 = &DAT_0076b7d4;
                      }
                      else {
                        iVar11 = *(int *)(iVar7 + 0x10);
                        if (iVar18 < iVar11) {
                          puVar8 = &DAT_0076b7d4;
                        }
                        else if (iVar18 < *(int *)(iVar7 + 0x1c) + iVar11) {
                          puVar8 = (undefined *)FUN_0042f730(iVar18 - iVar11);
                          if ((((puVar8[3] & 0x1f) == 0) && (iVar18 < 1)) &&
                             ((puVar8[3] & 0x40) == 0)) {
                            puVar8 = &DAT_0076b7cc;
                          }
                        }
                        else {
                          puVar8 = &DAT_0076b7cc;
                          if (0 < iVar18) {
                            puVar8 = &DAT_0076b7d0;
                          }
                        }
                      }
                      bVar14 = puVar8[3] & 0x1f;
                      if (bVar14 == 0xd) {
                        uVar16 = 0xff;
                      }
                      else if (((puVar8[3] & 0x1f) == 0) || (bVar14 == 2)) {
                        if ((byte)puVar8[2] < 5) {
                          uVar16 = 5;
                        }
                        else {
                          uVar16 = (uint)(byte)puVar8[2];
                        }
                      }
                      else {
                        uVar16 = 0;
                      }
                      if (uVar9 < uVar16) {
                        uVar9 = uVar16;
                      }
                      if (uVar9 < 0xff) {
                        iVar7 = FUN_004347a0(iVar15,iVar5 + 1,param_6);
                        if (iVar7 == 0) {
                          puVar8 = &DAT_0076b7d4;
                        }
                        else {
                          iVar11 = *(int *)(iVar7 + 0x10);
                          if (iVar18 < iVar11) {
                            puVar8 = &DAT_0076b7d4;
                          }
                          else if (iVar18 < *(int *)(iVar7 + 0x1c) + iVar11) {
                            puVar8 = (undefined *)FUN_0042f730(iVar18 - iVar11);
                            if ((((puVar8[3] & 0x1f) == 0) && (iVar18 < 1)) &&
                               ((puVar8[3] & 0x40) == 0)) {
                              puVar8 = &DAT_0076b7cc;
                            }
                          }
                          else {
                            puVar8 = &DAT_0076b7cc;
                            if (0 < iVar18) {
                              puVar8 = &DAT_0076b7d0;
                            }
                          }
                        }
                        bVar14 = puVar8[3] & 0x1f;
                        if (bVar14 == 0xd) {
                          uVar16 = 0xff;
                        }
                        else if (((puVar8[3] & 0x1f) == 0) || (bVar14 == 2)) {
                          if ((byte)puVar8[2] < 5) {
                            uVar16 = 5;
                          }
                          else {
                            uVar16 = (uint)(byte)puVar8[2];
                          }
                        }
                        else {
                          uVar16 = 0;
                        }
                        if (uVar9 < uVar16) {
                          uVar9 = uVar16;
                        }
                        if (uVar9 < 0xff) {
                          iVar7 = iVar18 + -1;
                          iVar11 = FUN_004347a0(iVar15,iVar5,param_6);
                          if (iVar11 == 0) {
                            puVar8 = &DAT_0076b7d4;
                          }
                          else {
                            iVar1 = *(int *)(iVar11 + 0x10);
                            if (iVar7 < iVar1) {
                              puVar8 = &DAT_0076b7d4;
                            }
                            else if (iVar7 < *(int *)(iVar11 + 0x1c) + iVar1) {
                              puVar8 = (undefined *)FUN_0042f730(iVar7 - iVar1);
                              if ((((puVar8[3] & 0x1f) == 0) && (iVar7 < 1)) &&
                                 ((puVar8[3] & 0x40) == 0)) {
                                puVar8 = &DAT_0076b7cc;
                              }
                            }
                            else {
                              puVar8 = &DAT_0076b7cc;
                              if (0 < iVar7) {
                                puVar8 = &DAT_0076b7d0;
                              }
                            }
                          }
                          bVar14 = puVar8[3] & 0x1f;
                          if (bVar14 == 0xd) {
                            uVar16 = 0xff;
                          }
                          else if (((puVar8[3] & 0x1f) == 0) || (bVar14 == 2)) {
                            if ((byte)puVar8[2] < 5) {
                              uVar16 = 5;
                            }
                            else {
                              uVar16 = (uint)(byte)puVar8[2];
                            }
                          }
                          else {
                            uVar16 = 0;
                          }
                          if (uVar9 < uVar16) {
                            uVar9 = uVar16;
                          }
                          if (uVar9 < 0xff) {
                            iVar18 = iVar18 + 1;
                            iVar7 = FUN_004347a0(iVar15,iVar5,param_6);
                            if (iVar7 == 0) {
                              puVar8 = &DAT_0076b7d4;
                            }
                            else {
                              iVar11 = *(int *)(iVar7 + 0x10);
                              if (iVar18 < iVar11) {
                                puVar8 = &DAT_0076b7d4;
                              }
                              else if (iVar18 < *(int *)(iVar7 + 0x1c) + iVar11) {
                                puVar8 = (undefined *)FUN_0042f730(iVar18 - iVar11);
                                if ((((puVar8[3] & 0x1f) == 0) && (iVar18 < 1)) &&
                                   ((puVar8[3] & 0x40) == 0)) {
                                  puVar8 = &DAT_0076b7cc;
                                }
                              }
                              else {
                                puVar8 = &DAT_0076b7cc;
                                if (0 < iVar18) {
                                  puVar8 = &DAT_0076b7d0;
                                }
                              }
                            }
                            bVar14 = puVar8[3] & 0x1f;
                            if (bVar14 == 0xd) {
                              if (uVar9 < 0xff) {
                                uVar9 = 0xff;
                              }
                            }
                            else if (((puVar8[3] & 0x1f) == 0) || (bVar14 == 2)) {
                              bVar14 = puVar8[2];
                              if (bVar14 < 5) {
                                if (uVar9 < 5) {
                                  uVar9 = 5;
                                }
                              }
                              else if (uVar9 < bVar14) {
                                uVar9 = (uint)bVar14;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  *(char *)(iVar6 + 1) = (char)((uVar9 * 0x55) / 100);
                }
                local_18 = local_18 + 1;
              } while (local_18 < *(int *)(iVar3 + 0x1c));
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < param_4 + param_5);
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 < iVar13);
    }
    if (iVar17 < iVar13) {
      iVar15 = iVar17;
      do {
        iVar5 = param_2 - param_5;
        if (param_2 - param_5 < param_4 + param_5) {
          do {
            iVar3 = FUN_004347a0(iVar15,iVar5,param_6);
            if ((iVar3 != 0) && (iVar6 = 0, 0 < *(int *)(iVar3 + 0x1c))) {
              do {
                iVar18 = FUN_0059aaf0(iVar6);
                if (((*(byte *)(iVar18 + 3) & 0x1f) == 0) || ((*(byte *)(iVar18 + 3) & 0x1f) == 2))
                {
                  *(undefined1 *)(iVar18 + 2) = *(undefined1 *)(iVar18 + 1);
                }
                iVar6 = iVar6 + 1;
              } while (iVar6 < *(int *)(iVar3 + 0x1c));
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < param_4 + param_5);
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 < iVar13);
    }
    local_1c = local_1c + 1;
    if (0xf < local_1c) {
      for (; iVar13 = param_2, param_1 < param_3; param_1 = param_1 + 1) {
        for (; iVar13 < param_4; iVar13 = iVar13 + 1) {
          iVar17 = FUN_004347a0(param_1,iVar13,param_6);
          if ((iVar17 != 0) && (iVar15 = 0, 0 < *(int *)(iVar17 + 0x1c))) {
            do {
              puVar12 = (undefined1 *)FUN_0059aaf0(iVar15);
              if (((puVar12[3] & 0x1f) == 0) || ((puVar12[3] & 0x1f) == 2)) {
                *puVar12 = puVar12[2];
              }
              iVar15 = iVar15 + 1;
            } while (iVar15 < *(int *)(iVar17 + 0x1c));
          }
        }
      }
      return;
    }
  } while( true );
}


/* FUN_0059a9b0 @ 0059a9b0  kind=gamemisc  attributed-by=logic:caller-vote  size=166 */

undefined4 FUN_0059a9b0(undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  float10 fVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_0068d946();
  uVar1 = __alldiv(uVar4,0x10000,0);
  iVar2 = __alldiv(param_1,param_2,0x10000,0);
  iVar2 = FUN_00487da0((int)(iVar2 + (iVar2 >> 0x1f & 0x7ffU)) >> 0xb,uVar1);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x18) != 0)) {
    fVar3 = (float10)FUN_005f8e10(&param_1,&param_3);
    if ((float)fVar3 <= 1.0) {
      return *(undefined4 *)(iVar2 + 0x24);
    }
  }
  return 1;
}


/* FUN_005a52e0 @ 005a52e0  kind=gamemisc  attributed-by=logic:caller-vote  size=1481 */

void __thiscall FUN_005a52e0(void *this,uint param_2,int param_3)

{
  void *pvVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iStack_100;
  basic_iostream<char,std::char_traits<char>_> local_fc;
  basic_streambuf<char,std::char_traits<char>_> local_e4 [2];
  undefined1 local_dc [8];
  undefined4 *local_d4;
  undefined4 *local_c4;
  undefined4 *local_b4;
  undefined4 local_ac;
  uint local_a8;
  code *local_94 [18];
  int local_4c;
  int local_48;
  void *local_44;
  int local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  void *local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f3208;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_4c = param_3;
  local_34 = 0;
  *(uint *)((int)this + 0x800164) = param_2;
  local_30 = this;
  srand(param_2);
  iVar3 = rand();
  *(int *)((int)this + 0x800188) = iVar3 % 100000;
  iVar3 = 4;
  piVar6 = (int *)((int)this + 0x800168);
  do {
    iVar4 = rand();
    *piVar6 = iVar4 % 100000;
    iVar3 = iVar3 + -1;
    piVar6 = piVar6 + 1;
  } while (iVar3 != 0);
  iVar3 = 0x14;
  piVar6 = (int *)((int)local_30 + 0x80018c);
  do {
    iVar4 = rand();
    *piVar6 = iVar4 % 100000;
    iVar3 = iVar3 + -1;
    piVar6 = piVar6 + 1;
  } while (iVar3 != 0);
  iVar3 = 2;
  piVar6 = (int *)((int)local_30 + 0x8001dc);
  do {
    iVar4 = rand();
    *piVar6 = iVar4 % 100000;
    iVar3 = iVar3 + -1;
    piVar6 = piVar6 + 1;
  } while (iVar3 != 0);
  iVar3 = 2;
  piVar6 = (int *)((int)local_30 + 0x8001e4);
  do {
    iVar4 = rand();
    *piVar6 = iVar4 % 100000;
    iVar3 = iVar3 + -1;
    piVar6 = piVar6 + 1;
  } while (iVar3 != 0);
  iVar3 = 2;
  piVar6 = (int *)((int)local_30 + 0x8001ec);
  do {
    iVar4 = rand();
    *piVar6 = iVar4 % 100000;
    iVar3 = iVar3 + -1;
    piVar6 = piVar6 + 1;
  } while (iVar3 != 0);
  iVar3 = 2;
  piVar6 = (int *)((int)local_30 + 0x8001f4);
  do {
    iVar4 = rand();
    *piVar6 = iVar4 % 100000;
    iVar3 = iVar3 + -1;
    piVar6 = piVar6 + 1;
  } while (iVar3 != 0);
  iVar3 = 8;
  piVar6 = (int *)((int)local_30 + 0x8001fc);
  do {
    iVar4 = rand();
    *piVar6 = iVar4 % 100000;
    iVar3 = iVar3 + -1;
    piVar6 = piVar6 + 1;
  } while (iVar3 != 0);
  iVar3 = 6;
  piVar6 = (int *)((int)local_30 + 0x80021c);
  do {
    iVar4 = rand();
    *piVar6 = iVar4 % 100000;
    iVar3 = iVar3 + -1;
    piVar6 = piVar6 + 1;
  } while (iVar3 != 0);
  iVar3 = 6;
  piVar6 = (int *)((int)local_30 + 0x800234);
  do {
    iVar4 = rand();
    *piVar6 = iVar4 % 100000;
    iVar3 = iVar3 + -1;
    piVar6 = piVar6 + 1;
  } while (iVar3 != 0);
  iVar3 = 10;
  piVar6 = (int *)((int)local_30 + 0x80024c);
  do {
    iVar4 = rand();
    *piVar6 = iVar4 % 100000;
    iVar3 = iVar3 + -1;
    piVar6 = piVar6 + 1;
  } while (iVar3 != 0);
  iVar3 = 4;
  piVar6 = (int *)((int)local_30 + 0x800274);
  do {
    iVar4 = rand();
    *piVar6 = iVar4 % 100000;
    iVar3 = iVar3 + -1;
    piVar6 = piVar6 + 1;
  } while (iVar3 != 0);
  iVar3 = 2;
  piVar6 = (int *)((int)local_30 + 0x800284);
  do {
    iVar4 = rand();
    *piVar6 = iVar4 % 100000;
    iVar3 = iVar3 + -1;
    piVar6 = piVar6 + 1;
  } while (iVar3 != 0);
  iVar3 = 4;
  piVar6 = (int *)((int)local_30 + 0x800178);
  do {
    iVar4 = rand();
    *piVar6 = iVar4 % 100000;
    iVar3 = iVar3 + -1;
    piVar6 = piVar6 + 1;
  } while (iVar3 != 0);
  iVar3 = 2;
  piVar6 = (int *)((int)local_30 + 0x80028c);
  do {
    iVar4 = rand();
    *piVar6 = iVar4 % 100000;
    iVar3 = iVar3 + -1;
    piVar6 = piVar6 + 1;
  } while (iVar3 != 0);
  iVar3 = 2;
  piVar6 = (int *)((int)local_30 + 0x800294);
  do {
    iVar4 = rand();
    *piVar6 = iVar4 % 100000;
    iVar3 = iVar3 + -1;
    piVar6 = piVar6 + 1;
  } while (iVar3 != 0);
  local_34 = 0x400;
  piVar6 = (int *)((int)local_30 + 0xbc);
  do {
    local_48 = 0x400;
    do {
      iVar3 = local_48;
      if (*piVar6 != 0) {
        if (*(char *)((int)local_30 + 0xb4) == '\0') {
          iVar3 = 0x10018;
          do {
            iVar4 = 0x40;
            do {
              FUN_005a5050(local_30,*(undefined4 *)(*piVar6 + iVar3));
              iVar3 = iVar3 + 4;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          } while (iVar3 < 0x14018);
        }
        iVar3 = local_48;
        if ((undefined4 *)*piVar6 != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)*piVar6)(1);
        }
        *piVar6 = 0;
      }
      pvVar1 = local_30;
      if ((void *)piVar6[0x100000] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        operator_delete((void *)piVar6[0x100000]);
      }
      piVar6 = piVar6 + 1;
      local_48 = iVar3 + -1;
    } while (local_48 != 0);
    local_34 = local_34 + -1;
  } while (local_34 != 0);
  FUN_00449400();
  iVar3 = local_4c;
  *(undefined4 *)((int)pvVar1 + 0x8000f0) = 0x4b002080;
  *(undefined4 *)((int)pvVar1 + 0x8000f4) = 0x4b002080;
  *(undefined4 *)((int)pvVar1 + 0x8000f8) = 0;
  if ((int)pvVar1 + 0x94 != local_4c) {
    FUN_0040c0a0(local_4c,0,0xffffffff);
  }
  if ((*(char *)((int)pvVar1 + 0xb4) == '\0') && (*(int *)((int)pvVar1 + 0xa4) != 0)) {
    local_fc.vbtablePtr =
         (basic_iostream<char,std::char_traits<char>_>_vbtable *)
         &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
          vbtable;
    local_fc.basic_ostream<char,std::char_traits<char>_>.vbtablePtr =
         (basic_ostream<char,std::char_traits<char>_>_vbtable *)&DAT_006fcd08;
    local_94[0] = _vftable__exref;
    local_8 = 0;
    local_34 = 1;
    std::basic_iostream<char,std::char_traits<char>_>::basic_iostream<char,std::char_traits<char>_>
              (&local_fc,(basic_streambuf<char,std::char_traits<char>_> *)local_e4);
    local_8 = 1;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> */
    *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
     ((int)&local_fc.vbtablePtr +
     (local_fc.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
         &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    *(int *)((int)&iStack_100 +
            (local_fc.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
         (local_fc.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset + -0x68;
    std::basic_streambuf<char,std::char_traits<char>_>::
    basic_streambuf<char,std::char_traits<char>_>(local_e4);
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> */
    local_e4[0] = (basic_streambuf<char,std::char_traits<char>_>)
                  &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    local_ac = 0;
    local_a8 = 0;
    local_8 = 3;
    uVar5 = FUN_00449150(&local_fc.basic_ostream<char,std::char_traits<char>_>,"Save/world_",iVar3,
                         &DAT_00701e5c);
    uVar5 = FUN_00401ff0(uVar5);
    FUN_00449150(uVar5);
    uVar5 = FUN_0040e140(local_2c);
    local_8._0_1_ = 4;
    FUN_004497b0(uVar5);
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    local_44 = (void *)0x0;
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    local_8._0_1_ = 5;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_0040c280(&DAT_00715b40,4);
    local_8 = CONCAT31(local_8._1_3_,6);
    cVar2 = FUN_004498d0(local_2c,&local_44);
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    if (cVar2 != '\0') {
      iVar4 = local_40 - (int)local_44;
      iVar3 = iVar4;
      if (local_38 + 4 <= iVar4) {
        *(undefined4 *)((int)pvVar1 + 0x800160) = *(undefined4 *)((int)local_44 + local_38);
        iVar3 = local_38 + 4;
      }
      local_38 = iVar4;
      if (iVar3 + 4 <= iVar4) {
        *(undefined4 *)((int)pvVar1 + 0x80015c) = *(undefined4 *)((int)local_44 + iVar3);
        local_38 = iVar3 + 4;
      }
    }
    if (local_44 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_44);
    }
    local_8 = 0xffffffff;
    *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
     ((int)&local_fc.vbtablePtr +
     (local_fc.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
         &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    *(int *)((int)&iStack_100 +
            (local_fc.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
         (local_fc.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset + -0x68;
    local_e4[0] = (basic_streambuf<char,std::char_traits<char>_>)
                  &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    if ((local_a8 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(*(void **)local_dc._4_4_);
    }
    std::basic_streambuf<char,std::char_traits<char>_>::setg
              (local_e4,(char *)0x0,(char *)0x0,(char *)0x0);
    *local_d4 = 0;
    *local_c4 = 0;
    *local_b4 = 0;
    local_a8 = local_a8 & 0xfffffffe;
    local_ac = 0;
    std::basic_streambuf<char,std::char_traits<char>_>::
    ~basic_streambuf<char,std::char_traits<char>_>(local_e4);
    std::basic_iostream<char,std::char_traits<char>_>::~basic_iostream<char,std::char_traits<char>_>
              ((basic_iostream<char,std::char_traits<char>_> *)local_dc);
    std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
              ((basic_ios<char,std::char_traits<char>_> *)local_94);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_005ade10 @ 005ade10  kind=gamemisc  attributed-by=logic:caller-vote  size=78 */

undefined4 * FUN_005ade10(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
      param_3[3] = param_1[3];
      param_3[4] = param_1[4];
      param_3[5] = param_1[5];
    }
    param_1 = param_1 + 6;
    param_3 = param_3 + 6;
  } while (param_1 != param_2);
  return param_3;
}


/* FUN_005ae950 @ 005ae950  kind=gamemisc  attributed-by=logic:caller-vote  size=68 */

void FUN_005ae950(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  for (; param_1 != param_2; param_1 = (undefined8 *)((int)param_1 + 0x1c)) {
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
      *(undefined4 *)(param_3 + 3) = *(undefined4 *)(param_1 + 3);
    }
    param_3 = (undefined8 *)((int)param_3 + 0x1c);
  }
  return;
}


/* FUN_005c36a0 @ 005c36a0  kind=gamemisc  attributed-by=logic:caller-vote  size=61 */

int FUN_005c36a0(int param_1,int param_2,int param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (param_3 != 0) {
      FUN_005c3950(param_1);
    }
    param_1 = param_1 + 0x140;
    param_3 = param_3 + 0x140;
  } while (param_1 != param_2);
  return param_3;
}


/* FUN_005c36e0 @ 005c36e0  kind=gamemisc  attributed-by=logic:caller-vote  size=138 */

int FUN_005c36e0(int param_1,int param_2,int param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_006f3d19;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uStack_7 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x18) {
    local_8 = 1;
    if (param_3 != 0) {
      FUN_005a7990(param_1);
      local_8 = 2;
      FUN_005a7990(param_1 + 0xc);
    }
    param_3 = param_3 + 0x18;
  }
  ExceptionList = local_10;
  return param_3;
}


/* FUN_005c4800 @ 005c4800  kind=gamemisc  attributed-by=logic:caller-vote  size=1482 */

void FUN_005c4800(float param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  uint uVar4;
  float fVar5;
  uint *puVar6;
  float10 fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int local_b4;
  uint local_b0;
  int local_ac;
  uint local_a8;
  uint *local_a4;
  int local_a0;
  int local_9c;
  uint local_98;
  float local_94;
  int local_90;
  int local_8c;
  float local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  float local_74;
  float local_70;
  uint *local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  uint local_58;
  uint uStack_54;
  uint local_50;
  uint uStack_4c;
  uint local_48;
  uint uStack_44;
  uint local_40;
  uint uStack_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_84 = (int)((int)param_1 + -0x4000 + ((int)param_1 + -0x4000 >> 0x1f & 0x3fffU)) >> 0xe;
  local_80 = (int)((param_2 - 0x4000) + ((int)(param_2 - 0x4000) >> 0x1f & 0x3fffU)) >> 0xe;
  local_68 = (float)((int)((int)param_1 + 0x4000 + ((int)param_1 + 0x4000 >> 0x1f & 0x3fffU)) >> 0xe
                    );
  fVar5 = (float)((int)(((int)(param_2 + 0x4000) >> 0x1f & 0x3fffU) + param_2 + 0x4000) >> 0xe);
  local_94 = param_1;
  local_98 = param_2;
  local_7c = in_ECX;
  local_74 = fVar5;
  fVar7 = (float10)FUN_004c0ef0((double)(int)param_2 * 0.0005,0x40aabe0000000000);
  local_70 = (float)fVar7;
  local_88 = local_70 * 3.0 * 256.0;
  local_60 = local_88;
  fVar7 = (float10)FUN_004c0ef0((double)(int)param_1 * 0.0005,0x40d6df4000000000);
  fVar8 = local_94;
  uVar1 = local_98;
  local_5c = (float)fVar7 * 3.0 * 256.0;
  puVar6 = (uint *)0x0;
  local_a4 = (uint *)0x0;
  local_70 = (float)(int)((float)(int)param_1 + local_88);
  local_8c = 0;
  local_88 = (float)(int)((float)(int)local_98 + local_5c);
  local_a0 = local_84;
  if (local_84 <= (int)local_68) {
    local_90 = local_84 * 0x400 + 0x10002f;
    local_78 = local_90;
    do {
      local_9c = local_80;
      if (local_80 <= (int)fVar5) {
        do {
          if ((((local_a0 < 0) || (local_9c < 0)) || (0x20002e < local_78)) ||
             ((0x3ff < local_9c ||
              (local_6c = *(uint **)(in_ECX + (local_9c + local_78) * 4), local_6c == (uint *)0x0)))
             ) goto LAB_005c4db1;
          local_48 = *local_6c;
          uStack_44 = ((int)local_48 >> 0x1f) << 0x10 | local_48 >> 0x10;
          local_48 = local_48 * 0x10000;
          local_40 = local_6c[1];
          uStack_3c = ((int)local_40 >> 0x1f) << 0x10 | local_40 >> 0x10;
          local_40 = local_40 * 0x10000;
          local_18 = CONCAT44((uStack_44 -
                              (((int)local_70 >> 0x1f) << 0x10 | (uint)local_70 >> 0x10)) -
                              (uint)(local_48 < (uint)((int)local_70 * 0x10000)),
                              local_48 + (int)local_70 * -0x10000);
          local_10 = CONCAT44((uStack_3c -
                              (((int)local_88 >> 0x1f) << 0x10 | (uint)local_88 >> 0x10)) -
                              (uint)(local_40 < (uint)((int)local_88 * 0x10000)),
                              local_40 + (int)local_88 * -0x10000);
          local_64 = (float)local_10;
          local_30 = (float)local_18 * 1.5258789e-05;
          local_2c = local_64 * 1.5258789e-05;
          iVar2 = (int)(local_2c * local_2c + local_30 * local_30);
          if ((local_a4 == (uint *)0x0) || (iVar2 < local_8c)) {
            local_a4 = local_6c;
            local_8c = iVar2;
          }
          local_9c = local_9c + 1;
          fVar5 = local_74;
          in_ECX = local_7c;
          puVar6 = local_a4;
        } while (local_9c <= (int)local_74);
      }
      local_a0 = local_a0 + 1;
      local_78 = local_78 + 0x400;
    } while (local_a0 <= (int)local_68);
    if (puVar6 != (uint *)0x0) {
      fVar10 = 0.0;
      fVar9 = 0.0;
      do {
        local_78 = local_80;
        if (local_80 <= (int)fVar5) {
          do {
            if (((local_84 < 0) || (local_78 < 0)) ||
               ((0x20002e < local_90 ||
                ((0x3ff < local_78 ||
                 (local_6c = *(uint **)(in_ECX + (local_78 + local_90) * 4), local_6c == (uint *)0x0
                 )))))) goto LAB_005c4db1;
            local_58 = *local_6c;
            uStack_54 = ((int)local_58 >> 0x1f) << 0x10 | local_58 >> 0x10;
            local_58 = local_58 * 0x10000;
            local_50 = local_6c[1];
            uStack_4c = ((int)local_50 >> 0x1f) << 0x10 | local_50 >> 0x10;
            local_50 = local_50 * 0x10000;
            local_28 = CONCAT44((uStack_54 -
                                (((int)local_70 >> 0x1f) << 0x10 | (uint)local_70 >> 0x10)) -
                                (uint)(local_58 < (uint)((int)local_70 * 0x10000)),
                                local_58 + (int)local_70 * -0x10000);
            local_20 = CONCAT44((uStack_4c -
                                (((int)local_88 >> 0x1f) << 0x10 | (uint)local_88 >> 0x10)) -
                                (uint)(local_50 < (uint)((int)local_88 * 0x10000)),
                                local_50 + (int)local_88 * -0x10000);
            local_64 = (float)local_20;
            local_38 = (float)local_28 * 1.5258789e-05;
            local_34 = local_64 * 1.5258789e-05;
            fVar5 = (float)((int)(local_34 * local_34 + local_38 * local_38) - local_8c) * 5e-07;
            if (1.0 < fVar5) {
              fVar5 = 1.0;
            }
            fVar10 = fVar10 + (1.0 - fVar5);
            local_78 = local_78 + 1;
            fVar9 = fVar9 + (float)local_6c[3] * (1.0 - fVar5);
            fVar5 = local_74;
            in_ECX = local_7c;
          } while (local_78 <= (int)local_74);
        }
        local_84 = local_84 + 1;
        local_90 = local_90 + 0x400;
        in_ECX = local_7c;
      } while (local_84 <= (int)local_68);
      if (0.0 < fVar10) {
        local_74 = fVar9 / fVar10;
        uVar3 = (int)local_98 >> 0x1f;
        uVar4 = (int)local_94 >> 0x1f;
        local_68 = local_74;
        iVar2 = FUN_00487da0((int)((int)local_94 + (uVar4 & 0x7ff)) >> 0xb,
                             (int)(local_98 + (uVar3 & 0x7ff)) >> 0xb);
        if (((local_74 < 0.2) && (iVar2 != 0)) && (*(int *)(iVar2 + 0x18) == 3)) {
          local_b0 = uVar3 << 0x10 | uVar1 >> 0x10;
          local_b4 = uVar1 << 0x10;
          local_a8 = uVar4 << 0x10 | (uint)fVar8 >> 0x10;
          local_ac = (int)fVar8 << 0x10;
          fVar7 = (float10)FUN_005f8e10(&local_ac,&local_b4);
          local_94 = (float)fVar7;
          fVar5 = 1.0 - local_94;
          fVar8 = 0.0;
          if (0.0 < fVar5) {
            fVar8 = fVar5 * fVar5;
          }
          local_68 = fVar8 * 0.3 + local_74;
          if (1.0 < local_68) {
            local_68 = 1.0;
          }
        }
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
  }
LAB_005c4db1:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_005c7730 @ 005c7730  kind=gamemisc  attributed-by=logic:caller-vote  size=2867 */

void ** FUN_005c7730(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  void **ppvVar7;
  bool bVar8;
  float fVar9;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar2 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1598;
  local_10 = ExceptionList;
  uVar4 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  if ((*(ushort *)(param_1 + 0x7a) & 0x40) != 0) {
    return &local_10;
  }
  cVar3 = *(char *)(param_1 + 0x30);
  ppvVar7 = (void **)CONCAT31((int3)((uint)&local_10 >> 8),cVar3);
  ExceptionList = &local_10;
  if (cVar3 == -0x78) {
LAB_005c81ee:
    *(undefined2 *)(param_1 + 0x350) = 4;
    *(undefined1 *)(param_1 + 0x35d) = 6;
    iVar6 = rand();
    ppvVar7 = (void **)(iVar6 / 5);
    *(char *)(iVar2 + 0x351) = (char)(iVar6 % 5) + '\x02';
LAB_005c8227:
    *(undefined4 *)(iVar2 + 0xf60) = 0x3dcccccd;
    *(undefined4 *)(iVar2 + 0xf5c) = 0x3e99999a;
    *(undefined4 *)(iVar2 + 0xf64) = 0x41200000;
    *(undefined4 *)(iVar2 + 0xf68) = 0x41200000;
    ExceptionList = local_10;
    return ppvVar7;
  }
  if ((((cVar3 == -0x7c) || (cVar3 == -0x80)) || (cVar3 == -0x7f)) ||
     ((((cVar3 == -0x7e || (cVar3 == -0x7d)) ||
       ((cVar3 == -0x7b || ((cVar3 == -0x7a || (cVar3 == -0x79)))))) || (cVar3 == -0x77)))) {
    if (cVar3 != -0x78) {
      *(undefined2 *)(param_1 + 0x350) = 4;
      *(undefined1 *)(param_1 + 0x35d) = 6;
      goto LAB_005c8227;
    }
    goto LAB_005c81ee;
  }
  puVar1 = (undefined1 *)(param_1 + 0x8c8);
  *(undefined2 *)(param_1 + 0x7b0) = 0;
  *puVar1 = 0;
  *(undefined1 *)(param_1 + 0x8c9) = 0;
  *(undefined2 *)(param_1 + 0x698) = 0;
  *(undefined2 *)(param_1 + 0x350) = 0;
  *(undefined2 *)(param_1 + 0x468) = 0;
  *(undefined2 *)(param_1 + 0x580) = 0;
  *(undefined2 *)(param_1 + 0x238) = 0;
  if ((*(ushort *)(param_1 + 0x7a) & 0x18) != 0) {
LAB_005c7e0c:
    *(undefined2 *)(param_1 + 0x7b0) = 0;
    *puVar1 = 0;
LAB_005c7e18:
    *(undefined1 *)(param_1 + 0x8c9) = 0;
    goto LAB_005c7e1f;
  }
  if (*(int *)(param_1 + 0x28) == 6) goto LAB_005c7e1f;
  iVar6 = *(int *)(param_1 + 0x2c);
  if (iVar6 == 0x76) goto LAB_005c7e0c;
  if (iVar6 == 0x75) {
    param_1 = 0x5c;
    FUN_0066add0(&param_1);
    *(undefined4 *)(iVar2 + 0x10b8) = 0;
    param_1 = 0x11;
    FUN_0066add0(&param_1);
    param_1 = 0x60;
    FUN_0066add0(&param_1);
    goto LAB_005c7e1f;
  }
  if (iVar6 == 0x6c) {
LAB_005c7dce:
    param_1 = 0x5b;
    FUN_0066add0(&param_1);
    param_1 = 0x5d;
    FUN_0066add0(&param_1);
LAB_005c7e00:
    *(undefined1 *)(iVar2 + 0x8c8) = 3;
    *(undefined1 *)(iVar2 + 0x8c9) = 0x11;
LAB_005c7db2:
    *(undefined1 *)(iVar2 + 0x8d5) = 2;
    *(undefined2 *)(iVar2 + 0x7b0) = 0;
  }
  else {
    if ((iVar6 == 0x72) || (iVar6 == 0x2e)) {
      if ((iVar6 == 0x6c) || (iVar6 == 0x72)) goto LAB_005c7dce;
      goto LAB_005c7e00;
    }
    if (iVar6 != 0x73) {
      if (iVar6 == 0x6d) {
        param_1 = 0x56;
        FUN_0066add0(&param_1);
        param_1 = 0x5d;
        FUN_0066add0(&param_1);
        param_1 = 0x5b;
        FUN_0066add0(&param_1);
        *(undefined1 *)(iVar2 + 0x8c9) = 2;
        *(undefined1 *)(iVar2 + 0x8c8) = 3;
        *(undefined1 *)(iVar2 + 0x8d5) = 7;
        *(undefined2 *)(iVar2 + 0x7b0) = 0x203;
        *(undefined1 *)(iVar2 + 0x7bd) = 7;
        goto LAB_005c7e1f;
      }
      if (iVar6 == 0x51) {
        param_1 = 0x57;
        FUN_0066add0(&param_1);
        *puVar1 = 3;
        *(undefined1 *)(iVar2 + 0x8c9) = 0xc;
        *(undefined1 *)(iVar2 + 0x8d5) = 0xb;
        *(undefined2 *)(iVar2 + 0x7b0) = 0xc03;
        *(undefined1 *)(iVar2 + 0x7bd) = 0xb;
        goto LAB_005c7e1f;
      }
      if (iVar6 == 0x52) {
        *puVar1 = 3;
        *(undefined1 *)(param_1 + 0x8d5) = 1;
        *(undefined2 *)(param_1 + 0x7b0) = 3;
        *(undefined1 *)(param_1 + 0x7bd) = 1;
        goto LAB_005c7e18;
      }
      if ((((iVar6 == 0x2f) || (iVar6 == 0x6f)) || (iVar6 == 0x71)) || (iVar6 == 0x70))
      goto LAB_005c7e1f;
      if ((iVar6 != 0x2d) && (iVar6 != 0x2b)) {
        uVar5 = rand();
        uVar5 = uVar5 & 0x80000003;
        if ((int)uVar5 < 0) {
          uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
        }
        *(char *)(iVar2 + 0x30) = (char)uVar5 + '\x01';
        if (*(int *)(iVar2 + 0x2c) == 0x61) {
          *(undefined1 *)(iVar2 + 0x30) = 4;
        }
        switch(*(undefined1 *)(iVar2 + 0x30)) {
        case 1:
          uVar5 = rand();
          uVar5 = uVar5 & 0x80000001;
          if ((int)uVar5 < 0) {
            uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
          }
          *(char *)(iVar2 + 0x31) = (char)uVar5;
          iVar6 = rand();
          iVar6 = iVar6 % 3;
          if (iVar6 == 0) {
            *puVar1 = 3;
            iVar6 = rand();
            *(undefined1 *)(iVar2 + 0x8d5) = 1;
            *(undefined2 *)(iVar2 + 0x7b0) = 0;
            *(char *)(iVar2 + 0x8c9) = (char)(iVar6 % 3) + '\x0f';
          }
          else {
            if (iVar6 == 1) {
              *puVar1 = 3;
              iVar6 = rand();
              *(undefined1 *)(iVar2 + 0x8d5) = 1;
              *(undefined1 *)(iVar2 + 0x7b0) = 3;
              *(char *)(iVar2 + 0x8c9) = (char)(iVar6 % 3);
              iVar6 = rand();
              cVar3 = (char)(iVar6 % 3);
              goto LAB_005c7bd0;
            }
            if (iVar6 == 2) {
              *puVar1 = 3;
              iVar6 = rand();
              *(undefined1 *)(iVar2 + 0x8d5) = 1;
              *(undefined2 *)(iVar2 + 0x7b0) = 0xd03;
              *(char *)(iVar2 + 0x8c9) = (char)(iVar6 % 3);
              goto LAB_005c7bd6;
            }
          }
          break;
        case 2:
          uVar5 = rand();
          uVar5 = uVar5 & 0x80000001;
          if ((int)uVar5 < 0) {
            uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
          }
          *(char *)(iVar2 + 0x31) = (char)uVar5;
          *puVar1 = 3;
          iVar6 = rand();
          *(undefined1 *)(iVar2 + 0x8d5) = 2;
          *(char *)(iVar2 + 0x8c9) = (char)(iVar6 % 3) + '\x06';
          break;
        case 3:
          uVar5 = rand();
          uVar5 = uVar5 & 0x80000001;
          if ((int)uVar5 < 0) {
            uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
          }
          *(char *)(iVar2 + 0x31) = (char)uVar5;
          iVar6 = rand();
          iVar6 = iVar6 % 3;
          if (iVar6 == 0) {
            *(undefined1 *)(iVar2 + 0x8c9) = 10;
          }
          else {
            if (iVar6 != 1) {
              if (iVar6 == 2) {
                *puVar1 = 3;
                *(undefined1 *)(iVar2 + 0x8c9) = 0xc;
                *(undefined1 *)(iVar2 + 0x8d5) = 0xb;
                *(undefined2 *)(iVar2 + 0x7b0) = 0xc03;
                *(undefined1 *)(iVar2 + 0x7bd) = 0xb;
              }
              break;
            }
            *(undefined1 *)(iVar2 + 0x8c9) = 0xb;
          }
          *puVar1 = 3;
          *(undefined1 *)(iVar2 + 0x8d5) = 2;
          *(undefined2 *)(iVar2 + 0x7b0) = 0;
          break;
        case 4:
          uVar5 = rand();
          uVar5 = uVar5 & 0x80000001;
          if ((int)uVar5 < 0) {
            uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
          }
          *(char *)(iVar2 + 0x31) = (char)uVar5;
          *puVar1 = 3;
          iVar6 = rand();
          *(undefined1 *)(iVar2 + 0x8d5) = 1;
          cVar3 = (char)(iVar6 % 3) + '\x03';
          *(char *)(iVar2 + 0x8c9) = cVar3;
          if (cVar3 == '\x05') {
            *(undefined2 *)(iVar2 + 0x7b0) = 0;
            *(undefined1 *)(iVar2 + 0x7bd) = 0;
          }
          else {
            *(undefined1 *)(iVar2 + 0x7b0) = 3;
LAB_005c7bd0:
            *(char *)(iVar2 + 0x7b1) = cVar3;
LAB_005c7bd6:
            *(undefined1 *)(iVar2 + 0x7bd) = 1;
          }
        }
        if ((*(byte *)(iVar2 + 0x7a) & 0x20) == 0) {
          cVar3 = *(char *)(iVar2 + 0x8c9);
          param_1 = 1;
          if (((cVar3 == '\n') || (cVar3 == '\v')) || (cVar3 == '\f')) {
            param_1 = 0x19;
          }
          else if (((cVar3 == '\x06') || (cVar3 == '\a')) || (cVar3 == '\b')) {
            param_1 = 0x1a;
          }
          else if (((cVar3 == '\x03') || (cVar3 == '\x04')) || (cVar3 == '\x05')) {
            param_1 = 0x1b;
          }
          *(undefined1 *)(iVar2 + 0x350) = 4;
          *(undefined2 *)(iVar2 + 0x360) = *(undefined2 *)(iVar2 + 0x34);
          *(char *)(iVar2 + 0x35d) = (char)param_1;
          uVar5 = rand();
          uVar5 = uVar5 & 0x80000001;
          bVar8 = uVar5 == 0;
          if ((int)uVar5 < 0) {
            bVar8 = (uVar5 - 1 | 0xfffffffe) == 0xffffffff;
          }
          if (!bVar8) {
            *(undefined2 *)(iVar2 + 0x6a8) = *(undefined2 *)(iVar2 + 0x34);
            *(undefined1 *)(iVar2 + 0x698) = 7;
            *(char *)(iVar2 + 0x6a5) = (char)param_1;
          }
          uVar5 = rand();
          uVar5 = uVar5 & 0x80000001;
          bVar8 = uVar5 == 0;
          if ((int)uVar5 < 0) {
            bVar8 = (uVar5 - 1 | 0xfffffffe) == 0xffffffff;
          }
          if (!bVar8) {
            *(undefined2 *)(iVar2 + 0x590) = *(undefined2 *)(iVar2 + 0x34);
            *(undefined1 *)(iVar2 + 0x580) = 5;
            *(char *)(iVar2 + 0x58d) = (char)param_1;
          }
          uVar5 = rand();
          uVar5 = uVar5 & 0x80000001;
          bVar8 = uVar5 == 0;
          if ((int)uVar5 < 0) {
            bVar8 = (uVar5 - 1 | 0xfffffffe) == 0xffffffff;
          }
          if (!bVar8) {
            *(undefined2 *)(iVar2 + 0x478) = *(undefined2 *)(iVar2 + 0x34);
            *(undefined1 *)(iVar2 + 0x468) = 6;
            *(char *)(iVar2 + 0x475) = (char)param_1;
          }
          iVar6 = rand();
          if (iVar6 % 10 == 0) {
            *(undefined1 *)(iVar2 + 0x238) = 8;
            *(undefined2 *)(iVar2 + 0x248) = *(undefined2 *)(iVar2 + 0x34);
            uVar5 = rand();
            uVar5 = uVar5 & 0x80000001;
            if ((int)uVar5 < 0) {
              uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
            }
            *(char *)(iVar2 + 0x245) = '\f' - (uVar5 != 0);
          }
          iVar6 = rand();
          if (iVar6 % 10 == 0) {
            *(undefined1 *)(iVar2 + 0xaf8) = 9;
            *(undefined2 *)(iVar2 + 0xb08) = *(undefined2 *)(iVar2 + 0x34);
            uVar5 = rand();
            uVar5 = uVar5 & 0x80000001;
            if ((int)uVar5 < 0) {
              uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
            }
            *(char *)(iVar2 + 0xb05) = '\f' - (uVar5 != 0);
          }
          iVar6 = rand();
          if (iVar6 % 10 == 0) {
            *(undefined1 *)(iVar2 + 0x9e0) = 9;
            *(undefined2 *)(iVar2 + 0x9f0) = *(undefined2 *)(iVar2 + 0x34);
            uVar5 = rand();
            uVar5 = uVar5 & 0x80000001;
            if ((int)uVar5 < 0) {
              uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
            }
            *(char *)(iVar2 + 0x9ed) = '\f' - (uVar5 != 0);
          }
        }
        goto LAB_005c7e1f;
      }
      param_1 = 0x5f;
      FUN_0066add0(&param_1);
      *(undefined1 *)(iVar2 + 0x31) = 2;
      *puVar1 = 3;
      uVar5 = rand();
      uVar5 = uVar5 & 0x80000001;
      if ((int)uVar5 < 0) {
        uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
      }
      *(char *)(iVar2 + 0x8c9) = (char)uVar5 + '\n';
      goto LAB_005c7db2;
    }
    param_1 = 0x56;
    FUN_0066add0(&param_1);
    param_1 = 0x5d;
    FUN_0066add0(&param_1);
    *(undefined1 *)(iVar2 + 0x8c9) = 4;
    *(undefined1 *)(iVar2 + 0x8c8) = 3;
    *(undefined1 *)(iVar2 + 0x8d5) = 1;
    *(undefined2 *)(iVar2 + 0x7b0) = 0x403;
    *(undefined1 *)(iVar2 + 0x7bd) = 1;
  }
LAB_005c7e1f:
  *(undefined2 *)(iVar2 + 0x8d8) = *(undefined2 *)(iVar2 + 0x34);
  *(undefined2 *)(iVar2 + 0x7c0) = *(undefined2 *)(iVar2 + 0x34);
  if ((char)param_2 != '\0') goto LAB_005c81a6;
  switch(*(undefined4 *)(iVar2 + 0x2c)) {
  case 0x11:
  case 0x5e:
  case 0x61:
    *(undefined4 *)(iVar2 + 0xf58) = 0x43c80000;
    *(undefined4 *)(iVar2 + 0xf60) = 0x3fc00000;
    param_2 = 0x5d;
    goto LAB_005c7f52;
  case 0x15:
    *(undefined4 *)(iVar2 + 0xf58) = 0x437a0000;
    *(undefined4 *)(iVar2 + 0xf60) = 0x40000000;
    param_2 = 0x45;
    FUN_0066add0(&param_2);
    goto LAB_005c8021;
  case 0x19:
    *(undefined4 *)(iVar2 + 0xf58) = 0x43480000;
    *(undefined4 *)(iVar2 + 0xf60) = 0x3f000000;
    goto LAB_005c8021;
  case 0x2e:
  case 0x52:
    param_2 = 0x56;
    goto LAB_005c7f48;
  case 0x2f:
  case 0x58:
    *(undefined4 *)(iVar2 + 0xf58) = 0x437a0000;
    *(undefined4 *)(iVar2 + 0xf60) = 0x40400000;
    *(float *)(iVar2 + 0xf5c) = *(float *)(iVar2 + 0xf5c) * 0.5;
    goto LAB_005c8021;
  case 0x51:
    param_2 = 0x5c;
LAB_005c7f48:
    *(undefined4 *)(iVar2 + 0xf58) = 0x437a0000;
LAB_005c7f52:
    *(undefined4 *)(iVar2 + 0xf64) = 0x40400000;
    *(undefined4 *)(iVar2 + 0xf68) = 0x40400000;
    FUN_0066add0(&param_2);
    break;
  case 0x55:
    *(undefined4 *)(iVar2 + 0xf58) = 0x447a0000;
    *(undefined4 *)(iVar2 + 0xf60) = 0x40000000;
LAB_005c8021:
    *(undefined4 *)(iVar2 + 0xf68) = 0x40400000;
    *(undefined4 *)(iVar2 + 0xf64) = 0x40400000;
    break;
  case 0x56:
    *(undefined2 *)(iVar2 + 0x30) = 0x103;
    break;
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x76:
    *(undefined4 *)(iVar2 + 0xf58) = 0x451c4000;
    *(undefined4 *)(iVar2 + 0xf60) = 0x40c00000;
    *(undefined4 *)(iVar2 + 0xf64) = 0x40a00000;
    *(undefined4 *)(iVar2 + 0xf68) = 0x40a00000;
    cVar3 = FUN_00444820(uVar4);
    if (cVar3 == '\0') {
      *(undefined4 *)(iVar2 + 0xf5c) = 0x3f000000;
    }
    else {
      *(undefined4 *)(iVar2 + 0xf5c) = 0x3f400000;
    }
    break;
  case 0x75:
    *(undefined4 *)(iVar2 + 0xf58) = 0x451c4000;
    *(undefined4 *)(iVar2 + 0xf60) = 0x40a00000;
    *(undefined4 *)(iVar2 + 0xf64) = 0x40800000;
    *(undefined4 *)(iVar2 + 0xf68) = 0x40a00000;
    break;
  case 0x77:
    *(undefined4 *)(iVar2 + 0xf5c) = 0x3f000000;
    *(undefined4 *)(iVar2 + 0xf58) = 0x451c4000;
    *(undefined4 *)(iVar2 + 0xf60) = 0x40c00000;
    *(undefined4 *)(iVar2 + 0xf64) = 0x41200000;
    *(undefined4 *)(iVar2 + 0xf68) = 0x41200000;
  }
  if ((*(ushort *)(iVar2 + 0x7a) & 0x200) != 0) {
    fVar9 = *(float *)(iVar2 + 0xf58) * 15.0;
    *(float *)(iVar2 + 0xf58) = fVar9;
    if (10000.0 < fVar9) {
      *(undefined4 *)(iVar2 + 0xf58) = 0x461c4000;
    }
    *(float *)(iVar2 + 0xf60) = *(float *)(iVar2 + 0xf60) * 3.0;
    *(float *)(iVar2 + 0xf5c) = *(float *)(iVar2 + 0xf5c) * 0.75;
    *(float *)(iVar2 + 0xf64) = *(float *)(iVar2 + 0xf64) + 2.0;
    *(float *)(iVar2 + 0xf68) = *(float *)(iVar2 + 0xf68) + 2.0;
    local_8 = 0;
    param_2 = 0x5c;
    FUN_0066add0(&param_2);
    param_2 = 0x5d;
    FUN_0066add0(&param_2);
    param_2 = 0x56;
    FUN_0066add0(&param_2);
    param_2 = 0x59;
    FUN_0066add0(&param_2);
    param_2 = 0x57;
    FUN_0066add0(&param_2);
    uVar4 = rand();
    FUN_0066add0((uVar4 % 0) * 4);
    iVar6 = rand();
    param_2 = 0x11;
    *(int *)(iVar2 + 0x10b8) = iVar6 % 3;
    FUN_0066add0(&param_2);
    param_2 = 0x60;
    FUN_0066add0(&param_2);
    FUN_005fb860();
  }
LAB_005c81a6:
  iVar6 = rand();
  *(int *)(iVar2 + 0x7b4) = iVar6;
  iVar6 = rand();
  *(int *)(iVar2 + 0x8cc) = iVar6;
  iVar6 = rand();
  *(int *)(iVar2 + 0x69c) = iVar6;
  iVar6 = rand();
  *(int *)(iVar2 + 0x354) = iVar6;
  iVar6 = rand();
  *(int *)(iVar2 + 0x584) = iVar6;
  ppvVar7 = (void **)rand();
  *(void ***)(iVar2 + 0x46c) = ppvVar7;
  ExceptionList = local_10;
  return ppvVar7;
}


/* FUN_005effa0 @ 005effa0  kind=gamemisc  attributed-by=logic:caller-vote  size=1920 */

void FUN_005effa0(uint param_1,uint param_2,float param_3)

{
  int iVar1;
  longlong *plVar2;
  uint uVar3;
  float10 fVar4;
  double dVar5;
  float fVar6;
  undefined1 auStack_90 [4];
  float local_8c;
  float local_88;
  uint local_84;
  float local_80;
  uint local_7c;
  int local_78;
  uint local_74;
  uint local_6c;
  float local_68;
  uint local_64;
  undefined8 local_60;
  undefined8 local_58;
  int local_50;
  uint local_4c;
  int local_48;
  uint local_44;
  int local_40;
  uint local_3c;
  int local_38;
  uint local_34;
  int local_30;
  uint local_2c;
  float local_28;
  undefined1 local_20 [20];
  uint local_c;
  
  local_c = DAT_0076aa78 ^ (uint)auStack_90;
  local_60 = (double)(int)param_2 * 0.01;
  local_58 = (double)(int)param_1 * 0.01;
  local_6c = param_1;
  local_84 = param_2;
  local_68 = param_3;
  fVar4 = (float10)FUN_004c0ef0(local_58,local_60);
  local_80 = (float)fVar4;
  local_8c = 1.0 - local_80 * local_80;
  fVar4 = (float10)FUN_004c0ef0((double)*(int *)(local_78 + 0x8001dc) + local_58 + 843.0,
                                (double)*(int *)(local_78 + 0x8001e0) + local_60 + 984.0);
  local_80 = (float)fVar4 * 0.1;
  fVar4 = (float10)FUN_004c0ef0((double)(int)param_1 * 0.0025 +
                                (double)*(int *)(local_78 + 0x8001dc),
                                (double)(int)param_2 * 0.0025 +
                                (double)*(int *)(local_78 + 0x8001e0));
  local_88 = 1.0 - ABS(local_80 + (float)fVar4) * ((1.0 - local_8c * local_8c) * 1.3 + 2.0);
  fVar4 = (float10)FUN_004c0ef0((double)(int)param_1 * 0.005 + 94.0,
                                (double)(int)param_2 * 0.005 + 874.0);
  local_8c = (float)fVar4;
  local_88 = local_88 * (local_8c * 0.4 + 0.6);
  uVar3 = (int)param_1 >> 0x1f;
  iVar1 = FUN_00487da0((int)(param_1 + (uVar3 & 0x7ff)) >> 0xb,
                       (int)(param_2 + ((int)param_2 >> 0x1f & 0x7ffU)) >> 0xb);
  if ((iVar1 != 0) && ((*(int *)(iVar1 + 0x18) == 6 || (*(int *)(iVar1 + 0x18) == 7)))) {
    local_4c = ((int)local_84 >> 0x1f) << 0x10 | local_84 >> 0x10;
    local_50 = local_84 << 0x10;
    local_58 = (double)CONCAT44(uVar3 << 0x10 | param_1 >> 0x10,param_1 << 0x10);
    fVar4 = (float10)FUN_005f8e10(&local_58,&local_50);
    local_8c = (float)fVar4;
    local_80 = 0.5;
    if (local_88 < 1.0) {
      if (1.0 < local_88 + 0.5) {
        local_80 = 1.0 - local_88;
      }
    }
    else {
      local_80 = 0.0;
    }
    if (0.36 < local_8c) {
      if (local_8c < 1.0) {
        dVar5 = (double)local_8c;
        libm_sse2_sqrt_precise();
        fVar6 = ((float)dVar5 - 0.6) / 0.39999998;
        fVar6 = 1.0 - fVar6 * fVar6;
        local_88 = fVar6 * fVar6 * local_80 + local_88;
      }
    }
    else {
      fVar6 = (1.0 - local_8c / 0.36) * 1.5;
      if (1.0 < fVar6) {
        fVar6 = 1.0;
      }
      local_88 = (local_80 + local_88) * (1.0 - fVar6 * fVar6) + fVar6 * fVar6 * 0.0;
    }
  }
  if (0.0 <= local_88) {
    fVar4 = (float10)FUN_005f9340();
    local_8c = (float)fVar4;
    fVar6 = local_8c * 2.0;
    if (1.0 < fVar6) {
      fVar6 = 1.0;
    }
    local_80 = (fVar6 * 3.0 * fVar6 - fVar6 * 2.0 * fVar6 * fVar6) * local_88;
    fVar4 = (float10)FUN_005f9f70();
    local_8c = (float)fVar4;
    fVar6 = local_8c;
    if (1.0 < local_8c) {
      fVar6 = 1.0;
    }
    local_68 = (fVar6 * 3.0 * fVar6 - fVar6 * 2.0 * fVar6 * fVar6) * local_80;
    fVar4 = (float10)FUN_005989d0(param_1,local_84);
    local_8c = (float)fVar4;
    fVar6 = local_8c * 2.0;
    if (1.0 < local_8c * 2.0) {
      fVar6 = 1.0;
    }
    fVar6 = 1.0 - (fVar6 * 3.0 * fVar6 - fVar6 * 2.0 * fVar6 * fVar6);
    local_88 = fVar6 * fVar6 * fVar6 * local_68;
  }
  else {
    local_88 = 0.0;
  }
  fVar6 = local_88;
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x18) == 2) {
      local_64 = ((int)local_84 >> 0x1f) << 0x10 | local_84 >> 0x10;
      local_68 = (float)(local_84 << 0x10);
      local_7c = uVar3 << 0x10 | param_1 >> 0x10;
      local_80 = (float)(param_1 << 0x10);
      fVar4 = (float10)FUN_005f8e10(&local_80,&local_68);
      fVar6 = 1.0 - (float)fVar4;
      local_8c = 0.0;
      if (0.0 < fVar6) {
        local_8c = fVar6 * fVar6;
      }
      local_8c = (local_88 * 3.0 * local_88 - local_88 * 2.0 * local_88 * local_88) + local_8c;
      __security_check_cookie(local_c ^ (uint)auStack_90);
      return;
    }
    if ((*(int *)(iVar1 + 0x18) == 10) && (0.0 < *(float *)(iVar1 + 0x10))) {
      local_44 = ((int)local_6c >> 0x1f) << 0x10 | local_6c >> 0x10;
      local_3c = ((int)local_84 >> 0x1f) << 0x10 | local_84 >> 0x10;
      local_48 = local_6c << 0x10;
      local_40 = local_84 << 0x10;
      local_38 = local_48;
      local_34 = local_44;
      local_30 = local_40;
      local_2c = local_3c;
      plVar2 = (longlong *)FUN_005c3ef0(local_20,&local_38);
      local_8c = (float)plVar2[1];
      local_28 = (float)*plVar2 * 1.5258789e-05;
      fVar6 = (local_8c * 1.5258789e-05 * local_8c * 1.5258789e-05 + local_28 * local_28) /
              (*(float *)(iVar1 + 0x10) * *(float *)(iVar1 + 0x10));
      param_1 = local_6c;
      if (fVar6 < 1.0) {
        fVar6 = 1.0 - fVar6;
        local_88 = (1.0 - fVar6 * fVar6) * local_88;
      }
    }
    if ((*(int *)(iVar1 + 0x18) == 4) || (fVar6 = local_88, *(int *)(iVar1 + 0x18) == 5)) {
      local_74 = ((int)local_84 >> 0x1f) << 0x10 | local_84 >> 0x10;
      local_78 = local_84 << 0x10;
      local_60 = (double)CONCAT44(((int)param_1 >> 0x1f) << 0x10 | param_1 >> 0x10,param_1 << 0x10);
      fVar4 = (float10)FUN_005f8e10(&local_60,&local_78);
      local_8c = (float)fVar4;
      if (0.25 < local_8c) {
        fVar6 = local_88;
        if (local_8c < 1.0) {
          dVar5 = (double)local_8c;
          libm_sse2_sqrt_precise();
          fVar6 = ((float)dVar5 - 0.5) * 2.0;
          fVar6 = 1.0 - fVar6 * fVar6;
          fVar6 = (1.0 - fVar6 * fVar6) * local_88;
        }
      }
      else {
        fVar6 = 0.0;
      }
    }
  }
  local_8c = fVar6 * 3.0 * fVar6 - fVar6 * 2.0 * fVar6 * fVar6;
  __security_check_cookie(local_c ^ (uint)auStack_90);
  return;
}


/* FUN_0062ddc0 @ 0062ddc0  kind=gamemisc  attributed-by=logic:caller-vote  size=47 */

void FUN_0062ddc0(int param_1,char param_2)

{
  int in_ECX;
  
  if (in_ECX + 0x80 != param_1) {
    FUN_0040f680(param_1,0,0xffffffff);
  }
  if (param_2 != '\0') {
    FUN_0062b920();
  }
  return;
}


/* FUN_00688b20 @ 00688b20  kind=gamemisc  attributed-by=logic:caller-vote  size=54 */

void FUN_00688b20(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x48);
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


/* `eh_vector_destructor_iterator' @ 0068d800  kind=gamemisc  attributed-by=logic:caller-vote  size=83 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void __stdcall `eh vector destructor iterator'(void *,unsigned int,int,void (__thiscall*)(void
   *))
   
   Library: Visual Studio 2012 Release */

void _eh_vector_destructor_iterator_
               (void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4)

{
  void *in_stack_ffffffd0;
  
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) break;
    (*param_4)(in_stack_ffffffd0);
  }
  FUN_0068d85f();
  return;
}


