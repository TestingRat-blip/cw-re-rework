// Unsorted_012 (game_misc) -- cube. 150 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Unsorted_012.h"

/* FUN_006a6d30 @ 006a6d30  kind=gamemisc  attributed-by=none  size=116 */

void FUN_006a6d30(uint *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint in_EAX;
  int iVar4;
  uint uVar5;
  
  iVar1 = param_1[2] + in_EAX * 0x1c;
  if ((in_EAX < *param_1) && ((*(uint *)(iVar1 + 0x10) & 4) == 0)) {
    *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) | 4;
    puVar2 = (undefined4 *)param_1[4];
    uVar5 = param_1[1];
    *(undefined4 *)(iVar1 + 0x14) = 0;
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      uVar3 = *puVar2;
      iVar4 = FUN_006a6cb0();
      if (iVar4 != 0) {
        *(undefined4 *)(iVar1 + 0x14) = uVar3;
        break;
      }
      puVar2 = puVar2 + 1;
    }
    if (param_1[1] < *param_1) {
      *(int *)(param_1[4] + param_1[1] * 4) = iVar1;
      param_1[1] = param_1[1] + 1;
    }
  }
  return;
}


/* FUN_006a6db0 @ 006a6db0  kind=gamemisc  attributed-by=none  size=73 */

void FUN_006a6db0(undefined4 param_1)

{
  uint uVar1;
  uint *in_EAX;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  pbVar2 = (byte *)in_EAX[2];
  uVar1 = *in_EAX;
  uVar4 = 0;
  uVar3 = 0;
  uVar5 = 0;
  if (uVar1 != 0) {
    do {
      if (uVar4 == 0) {
        uVar3 = (uint)*pbVar2;
        pbVar2 = pbVar2 + 1;
        uVar4 = 0x80;
      }
      if ((uVar4 & uVar3) != 0) {
        FUN_006a6d30(param_1);
      }
      uVar5 = uVar5 + 1;
      uVar4 = (int)uVar4 >> 1;
    } while (uVar5 < uVar1);
  }
  return;
}


/* FUN_006a6e00 @ 006a6e00  kind=gamemisc  attributed-by=none  size=272 */

int FUN_006a6e00(uint *param_1,int *param_2)

{
  uint uVar1;
  int in_ECX;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint *unaff_ESI;
  uint uVar4;
  int iVar5;
  
  uVar4 = *param_1;
  uVar1 = FUN_00693a60();
  unaff_ESI[3] = uVar1;
  if (in_ECX == 0) {
    uVar1 = FUN_00693a60();
    unaff_ESI[2] = uVar1;
    uVar1 = FUN_00693a60();
    unaff_ESI[6] = uVar1;
    puVar2 = (undefined4 *)unaff_ESI[2];
    unaff_ESI[4] = unaff_ESI[3] + uVar4 * 4;
    *unaff_ESI = uVar4;
    unaff_ESI[1] = 0;
    unaff_ESI[5] = 0;
    unaff_ESI[7] = 0;
    puVar3 = (undefined4 *)param_1[2];
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar2 = *puVar3;
      puVar2[1] = puVar3[1];
      puVar2[4] = puVar3[2];
      puVar2 = puVar2 + 7;
      puVar3 = puVar3 + 3;
    }
    if (param_2 != (int *)0x0) {
      iVar5 = *param_2;
      unaff_ESI[8] = (uint)param_2;
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        FUN_006a6db0();
      }
    }
    uVar4 = *unaff_ESI;
    if ((unaff_ESI[1] != uVar4) && (uVar1 = 0, uVar4 != 0)) {
      do {
        FUN_006a6d30();
        uVar1 = uVar1 + 1;
      } while (uVar1 < uVar4);
    }
  }
  return in_ECX;
}


/* FUN_006a6f10 @ 006a6f10  kind=gamemisc  attributed-by=none  size=186 */

void FUN_006a6f10(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *in_EAX;
  int iVar4;
  uint *in_ECX;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  byte *local_8;
  uint local_4;
  
  iVar6 = *in_EAX;
  local_8 = (byte *)in_EAX[2];
  uVar8 = 0;
  uVar7 = 0;
  local_4 = 0;
  FUN_006a6d10();
  if (iVar6 != 0) {
    iVar5 = 0;
    do {
      if (uVar7 == 0) {
        local_4 = (uint)*local_8;
        local_8 = local_8 + 1;
        uVar7 = 0x80;
      }
      if ((local_4 & uVar7) != 0) {
        uVar1 = *(uint *)(in_ECX[2] + 0x10 + iVar5);
        iVar4 = in_ECX[2] + iVar5;
        if (((uVar1 & 4) == 0) && (*(uint *)(iVar4 + 0x10) = uVar1 | 4, uVar8 < *in_ECX)) {
          *(int *)(in_ECX[3] + uVar8 * 4) = iVar4;
          uVar8 = uVar8 + 1;
        }
      }
      uVar7 = (int)uVar7 >> 1;
      iVar5 = iVar5 + 0x1c;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  in_ECX[1] = uVar8;
  puVar2 = (undefined4 *)in_ECX[3];
  if (1 < (int)uVar8) {
    iVar6 = 0;
    local_4 = uVar8 - 1;
    local_8 = (byte *)puVar2;
    do {
      local_8 = (byte *)((int)local_8 + 4);
      piVar3 = *(int **)local_8;
      for (iVar5 = iVar6; (-1 < iVar5 && (*piVar3 <= *(int *)puVar2[iVar5])); iVar5 = iVar5 + -1) {
        puVar2[iVar5 + 1] = (int *)puVar2[iVar5];
        puVar2[iVar5] = piVar3;
      }
      iVar6 = iVar6 + 1;
      local_4 = local_4 + -1;
    } while (local_4 != 0);
  }
  return;
}


/* FUN_006a6fd0 @ 006a6fd0  kind=gamemisc  attributed-by=none  size=106 */

uint FUN_006a6fd0(char param_1)

{
  uint in_EAX;
  uint uVar1;
  int in_ECX;
  int iVar2;
  uint uVar3;
  
  if ((int)in_EAX < 0x41) {
    uVar1 = 0x40;
    goto LAB_006a702c;
  }
  uVar1 = *(uint *)(in_ECX + 8);
  iVar2 = in_EAX - uVar1;
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  if ((iVar2 < 0x28) && (in_EAX = uVar1, (int)uVar1 < 0x30)) {
    in_EAX = 0x30;
  }
  else if (0xbf < (int)in_EAX) {
    uVar1 = in_EAX + 0x20 & 0xffffffc0;
    goto LAB_006a702c;
  }
  uVar3 = in_EAX & 0x3f;
  uVar1 = in_EAX & 0xffffffc0;
  if (9 < uVar3) {
    if (uVar3 < 0x20) {
      uVar1 = uVar1 + 10;
      goto LAB_006a702c;
    }
    if (uVar3 < 0x36) {
      uVar1 = uVar1 + 0x36;
      goto LAB_006a702c;
    }
  }
  uVar1 = uVar1 + uVar3;
LAB_006a702c:
  if (param_1 != '\0') {
    uVar1 = uVar1 + 0x20 & 0xffffffc0;
  }
  return uVar1;
}


/* FUN_006a7040 @ 006a7040  kind=gamemisc  attributed-by=none  size=48 */

uint FUN_006a7040(void)

{
  int in_EAX;
  uint uVar1;
  int in_EDX;
  uint uVar2;
  
  uVar1 = ((in_EAX + 0x20 + in_EDX & 0xffffffc0U) - in_EAX) - in_EDX;
  uVar2 = (in_EAX + 0x20U & 0xffffffc0) - in_EAX;
  if ((int)((uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f)) <
      (int)((uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f))) {
    uVar2 = uVar1;
  }
  return uVar2;
}


/* FUN_006a7070 @ 006a7070  kind=gamemisc  attributed-by=none  size=667 */

void FUN_006a7070(int *param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int local_c;
  int local_8;
  int local_4;
  
  uVar1 = *(undefined4 *)(param_3 * 0xcc + 200 + param_2);
  iVar6 = *(int *)(param_3 * 0xcc + 0xcc + param_2);
  if ((*(byte *)(param_1 + 4) & 8) != 0) {
    return;
  }
  iVar5 = FUN_0068ebc0(*param_1,uVar1);
  uVar10 = iVar5 + iVar6;
  iVar6 = FUN_0068ebc0(param_1[1],uVar1);
  if (param_3 == 0) {
    if (*(char *)(param_4 + 0x78) == '\0') {
LAB_006a71ed:
      param_1[4] = param_1[4] | 8;
      param_1[2] = uVar10;
      param_1[3] = iVar6;
      return;
    }
    if (*(char *)(param_4 + 0x7a) == '\0') goto LAB_006a70f1;
LAB_006a7208:
    bVar4 = true;
  }
  else {
    if (param_3 == 1) {
      if (*(char *)(param_4 + 0x79) == '\0') goto LAB_006a71ed;
      if (*(char *)(param_4 + 0x7b) != '\0') goto LAB_006a7208;
    }
LAB_006a70f1:
    bVar4 = false;
  }
  param_1[3] = iVar6;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  if (param_3 == 1) {
    FUN_006a69c0(*param_1,&local_c);
  }
  if (local_c == 1) {
    local_4 = local_8 - iVar6;
LAB_006a7284:
    param_1[2] = local_4;
  }
  else {
    if (local_c == 2) goto LAB_006a7284;
    if (local_c == 3) {
      param_1[3] = local_8 - local_4;
      goto LAB_006a7284;
    }
    piVar2 = (int *)param_1[5];
    iVar5 = iVar6 >> 1;
    if (piVar2 != (int *)0x0) {
      if ((*(byte *)(piVar2 + 4) & 8) == 0) {
        FUN_006a7070(piVar2,param_2,param_3,param_4);
      }
      iVar8 = piVar2[3];
      iVar3 = piVar2[2];
      iVar7 = FUN_0068ebc0(((param_1[1] >> 1) + *param_1) - ((piVar2[1] >> 1) + *piVar2),uVar1);
      uVar10 = iVar7 + (((iVar8 >> 1) + iVar3) - iVar5);
    }
    param_1[2] = uVar10;
    param_1[3] = iVar6;
    uVar11 = uVar10;
    if (*(char *)(param_4 + 0x7c) != '\0') {
      if (iVar6 < 0x41) {
        if (iVar6 < 0x20) {
          if (iVar6 < 1) {
            uVar11 = uVar10 + 0x20 & 0xffffffc0;
          }
          else {
            uVar11 = iVar6 + 0x20 + uVar10 & 0xffffffc0;
            uVar9 = uVar10 + 0x20 & 0xffffffc0;
            iVar5 = (uVar11 - iVar6) - uVar10;
            iVar8 = uVar9 - uVar10;
            if (iVar8 < 0) {
              iVar8 = -iVar8;
            }
            if (iVar5 < 0) {
              iVar5 = -iVar5;
            }
            if (iVar8 <= iVar5) {
              uVar11 = uVar9;
            }
          }
        }
        else {
          iVar6 = 0x40;
          uVar11 = uVar10 + iVar5 & 0xffffffc0;
        }
      }
      else {
        iVar6 = FUN_006a6fd0(0);
      }
    }
    iVar5 = FUN_006a7040();
    param_1[2] = iVar5 + uVar11;
    param_1[3] = iVar6;
  }
  if (bVar4) {
    if (param_1[3] < 0x40) {
      uVar10 = 0x40;
    }
    else {
      uVar10 = param_1[3] + 0x20U & 0xffffffc0;
    }
    if (local_c == 1) {
      param_1[2] = local_8 - uVar10;
    }
    else if (local_c != 2) {
      if (local_c != 3) {
        iVar6 = (int)uVar10 >> 1;
        param_1[3] = uVar10;
        if ((uVar10 & 0x40) != 0) {
          param_1[4] = param_1[4] | 8;
          param_1[2] = ((iVar6 + param_1[2] & 0xffffffc0U) + 0x20) - iVar6;
          param_1[3] = uVar10;
          return;
        }
        param_1[4] = param_1[4] | 8;
        param_1[2] = (iVar6 + 0x20 + param_1[2] & 0xffffffc0U) - iVar6;
        param_1[3] = uVar10;
        return;
      }
      goto LAB_006a72ff;
    }
    param_1[3] = uVar10;
  }
LAB_006a72ff:
  param_1[4] = param_1[4] | 8;
  return;
}


/* FUN_006a7310 @ 006a7310  kind=gamemisc  attributed-by=none  size=42 */

void FUN_006a7310(undefined4 param_1,undefined4 param_2)

{
  int *in_EAX;
  int iVar1;
  int iVar2;
  
  iVar2 = in_EAX[2];
  for (iVar1 = *in_EAX; iVar1 != 0; iVar1 = iVar1 + -1) {
    FUN_006a7070(iVar2,param_1,param_2);
    iVar2 = iVar2 + 0x1c;
  }
  return;
}


/* FUN_006a7340 @ 006a7340  kind=gamemisc  attributed-by=none  size=385 */

void FUN_006a7340(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int *local_1c;
  int local_18;
  int local_14;
  uint local_c;
  uint local_4;
  
  local_4 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    do {
      bVar4 = false;
      if (3 < *(uint *)(*(int *)(param_1 + 0xc) + 4 + local_4 * 8)) {
        piVar7 = *(int **)(*(int *)(param_1 + 0xc) + local_4 * 8);
        piVar5 = piVar7;
        do {
          piVar5 = (int *)piVar5[1];
          if (piVar5 == piVar7) goto LAB_006a74be;
          iVar9 = piVar5[9];
          iVar10 = piVar7[9];
          iVar1 = piVar5[10];
          iVar2 = piVar7[10];
          piVar3 = piVar7;
        } while ((iVar9 - iVar10 == 0) && (iVar1 - iVar2 == 0));
        do {
          piVar8 = piVar3;
          piVar3 = (int *)*piVar8;
          if (piVar3 == piVar7) goto LAB_006a74be;
          local_18 = piVar8[9] - piVar3[9];
          local_14 = piVar8[10] - piVar3[10];
        } while (((local_18 == 0) && (local_14 == 0)) ||
                (local_c = FUN_0068ef00(iVar9 - iVar10,iVar1 - iVar2,local_18,local_14),
                local_1c = piVar8, local_c == 0));
        do {
          do {
            piVar7 = piVar5;
            piVar5 = (int *)piVar7[1];
            if (piVar5 == piVar8) {
              bVar4 = true;
            }
            iVar9 = piVar5[9] - piVar7[9];
            iVar10 = piVar5[10] - piVar7[10];
          } while (((iVar9 == 0) && (iVar10 == 0)) ||
                  (uVar6 = FUN_0068ef00(local_18,local_14,iVar9,iVar10), uVar6 == 0));
          if ((int)(uVar6 ^ local_c) < 0) {
            do {
              local_1c[3] = local_1c[3] | 4;
              local_1c = (int *)local_1c[1];
            } while (local_1c != piVar7);
            local_1c[3] = local_1c[3] | 4;
          }
          local_1c = piVar7;
          local_18 = iVar9;
          local_14 = iVar10;
          local_c = uVar6;
        } while (!bVar4);
      }
LAB_006a74be:
      local_4 = local_4 + 1;
    } while (local_4 < *(uint *)(param_1 + 4));
  }
  return;
}


/* FUN_006a74e0 @ 006a74e0  kind=gamemisc  attributed-by=none  size=63 */

void FUN_006a74e0(void)

{
  undefined4 uVar1;
  undefined4 *unaff_EDI;
  
  uVar1 = unaff_EDI[4];
  FUN_006a6cd0();
  FUN_006a6cd0();
  FUN_00691290(uVar1,unaff_EDI[2]);
  unaff_EDI[2] = 0;
  FUN_00691290(uVar1,unaff_EDI[3]);
  unaff_EDI[3] = 0;
  *unaff_EDI = 0;
  unaff_EDI[1] = 0;
  unaff_EDI[4] = 0;
  return;
}


/* FUN_006a7520 @ 006a7520  kind=gamemisc  attributed-by=none  size=77 */

int FUN_006a7520(void)

{
  int iVar1;
  int iVar2;
  uint unaff_ESI;
  uint unaff_EDI;
  
  iVar2 = (unaff_ESI ^ (int)unaff_ESI >> 0x1f) - ((int)unaff_ESI >> 0x1f);
  iVar1 = (unaff_EDI ^ (int)unaff_EDI >> 0x1f) - ((int)unaff_EDI >> 0x1f);
  if (iVar1 * 0xc < iVar2) {
    return (uint)(-1 < (int)unaff_ESI) * 4 + -2;
  }
  if (iVar2 * 0xc < iVar1) {
    return (uint)((int)unaff_EDI < 0) * 2 + -1;
  }
  return 4;
}


/* FUN_006a7570 @ 006a7570  kind=gamemisc  attributed-by=none  size=65 */

void FUN_006a7570(void)

{
  int *in_EAX;
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int unaff_EBX;
  undefined4 uVar4;
  
  puVar3 = *(undefined4 **)(in_EAX[5] + 4);
  iVar2 = *in_EAX;
  if (iVar2 != 0) {
    puVar1 = (undefined4 *)(in_EAX[2] + 0x24);
    do {
      puVar1[-5] = 0;
      puVar1[-1] = 0;
      if (unaff_EBX == 0) {
        *puVar1 = *puVar3;
        uVar4 = puVar3[1];
      }
      else {
        *puVar1 = puVar3[1];
        uVar4 = *puVar3;
      }
      puVar1[1] = uVar4;
      iVar2 = iVar2 + -1;
      puVar1 = puVar1 + 0xc;
      puVar3 = puVar3 + 2;
    } while (iVar2 != 0);
  }
  return;
}


/* FUN_006a75c0 @ 006a75c0  kind=gamemisc  attributed-by=none  size=73 */

void FUN_006a75c0(void)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int in_EDX;
  uint *unaff_ESI;
  
  iVar2 = *(int *)(unaff_ESI[5] + 4);
  iVar3 = *(int *)(unaff_ESI[5] + 8);
  uVar4 = 0;
  if (*unaff_ESI != 0) {
    puVar5 = (undefined4 *)(unaff_ESI[2] + 0x2c);
    do {
      if (in_EDX == 0) {
        *(undefined4 *)(iVar2 + uVar4 * 8) = *puVar5;
      }
      else {
        *(undefined4 *)(iVar2 + 4 + uVar4 * 8) = *puVar5;
      }
      if ((*(byte *)(puVar5 + -7) & 0x10) != 0) {
        pbVar1 = (byte *)(uVar4 + iVar3);
        *pbVar1 = *pbVar1 | (-(in_EDX != 0) & 0x20U) + 0x20;
      }
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 0xc;
    } while (uVar4 < *unaff_ESI);
  }
  return;
}


/* FUN_006a7610 @ 006a7610  kind=gamemisc  attributed-by=none  size=627 */

int FUN_006a7610(uint *param_1,short *param_2,int param_3,uint *param_4)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  undefined4 *puVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  uint local_20;
  int local_1c;
  uint local_18;
  int *local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  uint local_4;
  
  memset(param_1,0,0x80);
  uVar2 = *param_4;
  param_1[4] = uVar2;
  local_4 = uVar2;
  uVar7 = FUN_00693a60(uVar2,0x30,0,(int)param_2[1],0,&local_1c);
  param_1[2] = uVar7;
  if (local_1c == 0) {
    puVar8 = (undefined4 *)FUN_00693a60(uVar2,8,0,(int)*param_2,0,&local_1c);
    param_1[3] = (uint)puVar8;
    if (local_1c != 0) {
      return local_1c;
    }
    *param_1 = (int)param_2[1];
    sVar1 = *param_2;
    uVar2 = param_1[2];
    param_1[1] = (int)sVar1;
    local_18 = 0;
    if ((int)sVar1 != 0) {
      iVar12 = 0;
      do {
        iVar11 = (int)*(short *)(*(int *)(param_2 + 6) + local_18 * 2);
        local_14 = (int *)(iVar12 * 0x30 + uVar2);
        iVar12 = (iVar11 + 1) - iVar12;
        *puVar8 = local_14;
        puVar8[1] = iVar12;
        if (0 < iVar12) {
          *local_14 = (uVar2 - 0x30) + (iVar11 * 3 + 3) * 0x10;
          local_14[2] = (int)puVar8;
          piVar10 = local_14;
          if (1 < iVar12) {
            iVar12 = iVar12 + -1;
            piVar9 = local_14;
            do {
              iVar12 = iVar12 + -1;
              piVar10 = piVar9 + 0xc;
              piVar9[1] = (int)piVar10;
              *piVar10 = (int)piVar9;
              piVar9[0xe] = (int)puVar8;
              piVar9 = piVar10;
            } while (iVar12 != 0);
          }
          piVar10[1] = (int)local_14;
        }
        local_18 = local_18 + 1;
        puVar8 = puVar8 + 2;
        iVar12 = iVar11 + 1;
      } while (local_18 < param_1[1]);
    }
    local_18 = param_1[2];
    iVar12 = *(int *)(param_2 + 2);
    local_20 = 0;
    if (*param_1 != 0) {
      puVar13 = (uint *)(local_18 + 0xc);
      do {
        iVar11 = (int)(puVar13[-3] - local_18) / 0x30;
        local_14 = (int *)((int)(puVar13[-2] - local_18) / 0x30);
        if ((*(byte *)(local_20 + *(int *)(param_2 + 4)) & 1) == 0) {
          *puVar13 = 1;
        }
        local_8 = *(int *)(iVar12 + local_20 * 8) - *(int *)(iVar12 + iVar11 * 8);
        local_c = *(int *)(iVar12 + 4 + local_20 * 8) - *(int *)(iVar12 + 4 + iVar11 * 8);
        local_10 = FUN_006a7520();
        *(char *)(puVar13 + 2) = (char)local_10;
        iVar11 = *(int *)(iVar12 + (int)local_14 * 8);
        iVar3 = *(int *)(iVar12 + 4 + (int)local_14 * 8);
        iVar4 = *(int *)(iVar12 + local_20 * 8);
        iVar5 = *(int *)(iVar12 + 4 + local_20 * 8);
        cVar6 = FUN_006a7520();
        *(char *)((int)puVar13 + 9) = cVar6;
        if ((*puVar13 & 1) == 0) {
          if (((char)local_10 == cVar6) &&
             ((cVar6 != '\x04' ||
              (iVar11 = FUN_0068efc0(local_8,local_c,iVar11 - iVar4,iVar3 - iVar5), iVar11 != 0))))
          {
            *puVar13 = *puVar13 | 2;
          }
        }
        else {
          *puVar13 = *puVar13 | 2;
        }
        local_20 = local_20 + 1;
        puVar13 = puVar13 + 0xc;
      } while (local_20 < *param_1);
    }
    param_1[5] = (uint)param_2;
    param_1[6] = (uint)param_4;
    FUN_006a7570();
    FUN_006a7340(param_1);
    local_1c = FUN_006a6e00(param_3 + 0x10,param_3 + 0x1c);
    if (local_1c == 0) {
      local_1c = FUN_006a6e00(param_3 + 0x34,param_3 + 0x40);
    }
  }
  return local_1c;
}


/* FUN_006a7890 @ 006a7890  kind=gamemisc  attributed-by=none  size=244 */

void FUN_006a7890(void)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  uint *unaff_EBX;
  uint uVar7;
  
  uVar7 = 0;
  if (unaff_EBX[1] != 0) {
    do {
      piVar5 = *(int **)(unaff_EBX[3] + uVar7 * 8);
      piVar6 = piVar5;
      if (*(int *)(unaff_EBX[3] + 4 + uVar7 * 8) != 0) {
        do {
          piVar6 = (int *)*piVar6;
          if (piVar6 == piVar5) goto LAB_006a797d;
        } while (piVar6[9] == piVar5[9]);
        piVar5 = (int *)piVar6[1];
        piVar4 = piVar5;
        piVar3 = piVar5;
LAB_006a78d2:
        do {
          piVar4 = (int *)piVar4[1];
          if (piVar4 == piVar5) break;
          if (piVar4[9] != piVar3[9]) {
            iVar1 = piVar3[9];
            if (*(int *)((int)piVar6 + 0x24) < iVar1) {
              if (iVar1 <= piVar4[9]) {
                piVar6 = (int *)*piVar4;
                piVar3 = piVar4;
                goto LAB_006a78d2;
              }
LAB_006a7900:
              do {
                piVar3[4] = piVar3[4] | 0x40;
                piVar3 = (int *)piVar3[1];
              } while (piVar3 != piVar4);
            }
            else if (iVar1 < piVar4[9]) goto LAB_006a7900;
            piVar6 = (int *)*piVar4;
            piVar3 = piVar4;
          }
        } while( true );
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < unaff_EBX[1]);
  }
  uVar7 = 0;
  do {
    if (*unaff_EBX <= uVar7) {
      return;
    }
    piVar4 = (int *)(uVar7 * 0x30 + unaff_EBX[2]);
    uVar2 = piVar4[4];
    piVar5 = piVar4;
    piVar6 = piVar4;
    if ((uVar2 & 0x40) != 0) {
      do {
        piVar5 = (int *)*piVar5;
        if (piVar5 == piVar4) goto LAB_006a797d;
      } while (piVar5[10] == piVar4[10]);
      do {
        piVar6 = (int *)piVar6[1];
        if (piVar6 == piVar4) goto LAB_006a797d;
      } while (piVar6[10] == piVar4[10]);
    }
    iVar1 = piVar4[10];
    if ((piVar5[10] < iVar1) && (iVar1 < piVar6[10])) {
      piVar4[4] = uVar2 | 0x80;
      uVar7 = uVar7 + 1;
    }
    else {
      if ((iVar1 < piVar5[10]) && (piVar6[10] < iVar1)) {
        piVar4[4] = uVar2 | 0x100;
      }
LAB_006a797d:
      uVar7 = uVar7 + 1;
    }
  } while( true );
}


/* FUN_006a7990 @ 006a7990  kind=gamemisc  attributed-by=none  size=470 */

void FUN_006a7990(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int in_EAX;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int unaff_EDI;
  
  iVar1 = *(int *)(in_EAX + 0xc);
  uVar2 = *(uint *)(in_EAX + 4);
  if (param_2 != 0) {
    puVar4 = (uint *)(param_1 + 0x10);
    do {
      uVar9 = *puVar4;
      uVar3 = puVar4[5];
      if ((uVar9 & 0x10) == 0) {
        iVar5 = (int)(char)puVar4[1];
        if (((((iVar5 == param_3) || (iVar5 == -param_3)) ||
             (iVar5 = (int)*(char *)((int)puVar4 + 5), iVar5 == param_3)) || (iVar5 == -param_3)) &&
           (iVar5 != 0)) {
          if (iVar5 == param_3) {
            uVar8 = 0;
            if (uVar2 != 0) {
              do {
                piVar7 = *(int **)(iVar1 + uVar8 * 4);
                iVar5 = uVar3 - *piVar7;
                if ((iVar5 < unaff_EDI) && (-iVar5 < unaff_EDI)) {
                  *puVar4 = uVar9 | 0x210;
                  puVar4[4] = (uint)piVar7;
                  break;
                }
                uVar8 = uVar8 + 1;
              } while (uVar8 < uVar2);
            }
          }
          else if ((iVar5 == -param_3) && (uVar8 = 0, uVar2 != 0)) {
            do {
              piVar7 = *(int **)(iVar1 + uVar8 * 4);
              iVar5 = (uVar3 - piVar7[1]) - *piVar7;
              if ((iVar5 < unaff_EDI) && (-iVar5 < unaff_EDI)) {
                *puVar4 = uVar9 | 0x410;
                puVar4[4] = (uint)piVar7;
                break;
              }
              uVar8 = uVar8 + 1;
            } while (uVar8 < uVar2);
          }
        }
        else if ((uVar9 & 0x40) != 0) {
          if (param_3 == 2) {
            uVar8 = 0x80;
            uVar6 = 0x100;
          }
          else {
            uVar8 = 0x100;
            uVar6 = 0x80;
          }
          if ((uVar8 & uVar9) == 0) {
            if (((uVar6 & uVar9) != 0) && (uVar8 = 0, uVar2 != 0)) {
              do {
                piVar7 = *(int **)(iVar1 + uVar8 * 4);
                iVar5 = (uVar3 - piVar7[1]) - *piVar7;
                if ((iVar5 < unaff_EDI) && (-iVar5 < unaff_EDI)) {
                  uVar9 = uVar9 | 0x410;
                  goto LAB_006a7b04;
                }
                uVar8 = uVar8 + 1;
              } while (uVar8 < uVar2);
            }
          }
          else {
            uVar8 = 0;
            if (uVar2 != 0) {
LAB_006a7ab1:
              piVar7 = *(int **)(iVar1 + uVar8 * 4);
              if ((unaff_EDI <= (int)(uVar3 - *piVar7)) || (unaff_EDI <= (int)-(uVar3 - *piVar7)))
              goto LAB_006a7ac3;
              uVar9 = uVar9 | 0x210;
LAB_006a7b04:
              *puVar4 = uVar9;
              puVar4[4] = (uint)piVar7;
            }
          }
LAB_006a7b0d:
          if ((puVar4[4] == 0) && (uVar9 = 0, uVar2 != 0)) {
            do {
              piVar7 = *(int **)(iVar1 + uVar9 * 4);
              if ((*piVar7 <= (int)uVar3) && ((int)uVar3 <= piVar7[1] + *piVar7)) {
                puVar4[4] = (uint)piVar7;
                break;
              }
              uVar9 = uVar9 + 1;
            } while (uVar9 < uVar2);
          }
        }
      }
      param_2 = param_2 + -1;
      puVar4 = puVar4 + 0xc;
    } while (param_2 != 0);
  }
  return;
LAB_006a7ac3:
  uVar8 = uVar8 + 1;
  if (uVar2 <= uVar8) goto LAB_006a7b0d;
  goto LAB_006a7ab1;
}


/* FUN_006a7b70 @ 006a7b70  kind=gamemisc  attributed-by=none  size=327 */

void FUN_006a7b70(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  int in_EAX;
  uint uVar3;
  uint *puVar4;
  char cVar5;
  uint uVar6;
  int local_8;
  
  puVar4 = param_1;
  uVar6 = *(uint *)param_1[in_EAX * 10 + 0xf];
  uVar1 = ((uint *)param_1[in_EAX * 10 + 0xf])[2];
  cVar5 = (in_EAX != 0) + '\x01';
  FUN_0068ec40(0x20,*(undefined4 *)(in_EAX * 0xcc + 200 + param_1[6]));
  if ((1 < uVar6) && (uVar3 = *param_1, uVar3 != 0)) {
    uVar2 = *(uint *)(uVar1 + 0xc);
    if (uVar2 <= uVar3) {
      uVar3 = uVar2;
    }
    local_8 = uVar6 - 1;
    do {
      param_1 = (uint *)*puVar4;
      if (*(uint *)(uVar1 + 0x1c) <= *puVar4) {
        param_1 = (uint *)*(uint *)(uVar1 + 0x1c);
      }
      if (0 < (int)((int)param_1 - uVar3)) {
        uVar2 = puVar4[2];
        FUN_006a6f10();
        FUN_006a7990(uVar3 * 0x30 + uVar2,(int)param_1 - uVar3,cVar5);
      }
      uVar6 = uVar6 - 1;
      local_8 = local_8 + -1;
      uVar3 = (uint)param_1;
      uVar1 = uVar1 + 0x10;
    } while (local_8 != 0);
  }
  if (uVar6 == 1) {
    uVar6 = *puVar4;
    uVar1 = puVar4[2];
    FUN_006a6f10();
    FUN_006a7990(uVar1,uVar6,cVar5);
  }
  uVar6 = *puVar4;
  if (uVar6 != 0) {
    puVar4 = (uint *)(puVar4[2] + 0x10);
    do {
      if ((puVar4[4] != 0) && ((*puVar4 & 0x10) == 0)) {
        *puVar4 = *puVar4 | 0x10;
      }
      puVar4 = puVar4 + 0xc;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}


/* FUN_006a7cc0 @ 006a7cc0  kind=gamemisc  attributed-by=none  size=247 */

void FUN_006a7cc0(void)

{
  uint uVar1;
  int *in_EAX;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint *puVar5;
  int *unaff_ESI;
  int iVar6;
  int local_4;
  
  local_4 = *in_EAX;
  if (local_4 != 0) {
    puVar5 = (uint *)(in_EAX[2] + 0x10);
    do {
      if ((((((char)puVar5[1] == '\x02') || ((char)puVar5[1] == -2)) ||
           (*(char *)((int)puVar5 + 5) == '\x02')) || (*(char *)((int)puVar5 + 5) == -2)) &&
         ((*puVar5 & 0x10) == 0)) {
        iVar6 = *unaff_ESI;
        uVar4 = puVar5[5];
        if (iVar6 != 0) {
          piVar3 = unaff_ESI + 3;
          do {
            iVar2 = uVar4 - piVar3[1];
            if (iVar2 < -unaff_ESI[0x207]) break;
            uVar4 = puVar5[5];
            if (((int)uVar4 <= *piVar3 + unaff_ESI[0x207]) &&
               (((char)unaff_ESI[0x208] != '\0' || (iVar2 <= unaff_ESI[0x206])))) {
              uVar1 = piVar3[4];
              *puVar5 = *puVar5 | 0x30;
              puVar5[7] = uVar1;
            }
            piVar3 = piVar3 + 8;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        iVar6 = unaff_ESI[0x81];
        if (iVar6 != 0) {
          piVar3 = unaff_ESI + iVar6 * 8 + 0x7d;
          do {
            if ((int)(piVar3[-1] - puVar5[5]) < -unaff_ESI[0x207]) break;
            if ((*piVar3 - unaff_ESI[0x207] <= (int)puVar5[5]) &&
               (((char)unaff_ESI[0x208] != '\0' ||
                ((int)(piVar3[-1] - puVar5[5]) < unaff_ESI[0x206])))) {
              uVar4 = piVar3[4];
              *puVar5 = *puVar5 | 0x30;
              puVar5[7] = uVar4;
            }
            piVar3 = piVar3 + -8;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
      }
      local_4 = local_4 + -1;
      puVar5 = puVar5 + 0xc;
    } while (local_4 != 0);
  }
  return;
}


/* FUN_006a7dd0 @ 006a7dd0  kind=gamemisc  attributed-by=none  size=164 */

void FUN_006a7dd0(void)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int in_EAX;
  int iVar4;
  int *in_ECX;
  int iVar5;
  int *piVar6;
  
  iVar5 = *in_ECX;
  uVar1 = *(undefined4 *)(in_EAX * 0xcc + 200 + in_ECX[6]);
  if (iVar5 != 0) {
    piVar6 = (int *)(in_ECX[2] + 0x2c);
    do {
      piVar2 = (int *)piVar6[-3];
      if (piVar2 != (int *)0x0) {
        if ((piVar6[-7] & 0x200U) == 0) {
          if ((piVar6[-7] & 0x400U) == 0) {
            iVar4 = piVar6[-2] - *piVar2;
            if (iVar4 < 1) {
              iVar4 = FUN_0068ebc0(iVar4,uVar1);
              iVar4 = iVar4 + piVar2[2];
            }
            else {
              iVar3 = piVar2[1];
              if (iVar4 < iVar3) {
                if (iVar3 < 1) goto LAB_006a7e60;
                iVar4 = FUN_0068ea60(iVar4,piVar2[3],iVar3);
                iVar4 = iVar4 + piVar2[2];
              }
              else {
                iVar4 = FUN_0068ebc0(iVar4 - iVar3,uVar1);
                iVar4 = iVar4 + piVar2[3] + piVar2[2];
              }
            }
            goto LAB_006a7e63;
          }
          *piVar6 = piVar2[3] + piVar2[2];
        }
        else {
LAB_006a7e60:
          iVar4 = piVar2[2];
LAB_006a7e63:
          *piVar6 = iVar4;
        }
        piVar6[-7] = piVar6[-7] | 0x20;
      }
      piVar6 = piVar6 + 0xc;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}


/* FUN_006a7e80 @ 006a7e80  kind=gamemisc  attributed-by=none  size=520 */

uint * FUN_006a7e80(void)

{
  undefined4 uVar1;
  uint *puVar2;
  int *in_EAX;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  int in_ECX;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  int iVar11;
  uint local_54;
  int local_48;
  int local_44;
  uint local_40 [16];
  
  uVar1 = *(undefined4 *)(in_ECX * 0xcc + 200 + in_EAX[6]);
  puVar10 = (uint *)in_EAX[2];
  puVar8 = puVar10 + *in_EAX * 0xc;
  uVar6 = 0;
  local_44 = in_EAX[4];
  puVar5 = puVar10;
  if (puVar10 < puVar8) {
    do {
      if ((puVar5[4] & 0x10) != 0) {
        uVar6 = uVar6 + 1;
      }
      puVar5 = puVar5 + 0xc;
    } while (puVar5 < puVar8);
    if (uVar6 != 0) {
      if (uVar6 < 0x11) {
        puVar3 = local_40;
      }
      else {
        puVar3 = (uint *)FUN_00693a60(in_EAX[4],4,0,uVar6,0,&local_48);
        if (local_48 != 0) {
          return puVar3;
        }
      }
      local_54 = 0;
      puVar5 = puVar10;
      puVar9 = puVar3;
      do {
        puVar2 = puVar9;
        if ((puVar5[4] & 0x10) != 0) {
          while ((puVar3 < puVar2 && ((int)puVar5[9] < *(int *)(puVar2[-1] + 0x24)))) {
            *puVar2 = puVar2[-1];
            puVar2 = puVar2 + -1;
          }
          local_54 = local_54 + 1;
          *puVar2 = (uint)puVar5;
          puVar9 = puVar9 + 1;
        }
        puVar5 = puVar5 + 0xc;
      } while (puVar5 < puVar8);
      uVar6 = (int)puVar8 + (-1 - (int)puVar10);
      puVar5 = (uint *)(uVar6 * -0x55555555);
      iVar11 = uVar6 / 0x30 + 1;
      puVar10 = puVar10 + 3;
      do {
        if ((puVar10[1] & 0x10) == 0) {
          puVar5 = (uint *)*puVar10;
          if (((uint)puVar5 & 2) != 0) {
            if ((((char)puVar10[2] == '\x04') || ((char)puVar10[2] != *(char *)((int)puVar10 + 9)))
               || (((puVar10[1] & 0x40) == 0 && (((uint)puVar5 & 4) == 0)))) goto LAB_006a805c;
            *puVar10 = (uint)puVar5 & 0xfffffffd;
          }
          uVar6 = 0;
          if (local_54 == 0) {
LAB_006a7fc7:
            uVar6 = *puVar3;
            iVar4 = FUN_0068ebc0(puVar10[6] - *(int *)(uVar6 + 0x24),uVar1);
LAB_006a804e:
            puVar5 = (uint *)(iVar4 + *(int *)(uVar6 + 0x2c));
LAB_006a8051:
            puVar10[8] = (uint)puVar5;
          }
          else {
            puVar5 = (uint *)puVar10[6];
            do {
              if ((int)puVar5 < *(int *)(puVar3[uVar6] + 0x24)) break;
              uVar6 = uVar6 + 1;
            } while (uVar6 < local_54);
            if (uVar6 == 0) goto LAB_006a7fc7;
            uVar6 = puVar3[uVar6 - 1];
            uVar7 = local_54;
            if (local_54 == 0) {
LAB_006a8003:
              uVar6 = puVar3[uVar7 - 1];
              iVar4 = FUN_0068ebc0((int)puVar5 - *(int *)(uVar6 + 0x24),uVar1);
              goto LAB_006a804e;
            }
            puVar8 = puVar3 + (local_54 - 1);
            do {
              if (*(int *)(*puVar8 + 0x24) < (int)puVar5) break;
              puVar8 = puVar8 + -1;
              uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
            if (uVar7 == local_54) goto LAB_006a8003;
            uVar7 = puVar3[uVar7];
            if (puVar5 != *(uint **)(uVar6 + 0x24)) {
              if (puVar5 != *(uint **)(uVar7 + 0x24)) {
                iVar4 = FUN_0068ea60((int)puVar5 - *(int *)(uVar6 + 0x24),
                                     *(int *)(uVar7 + 0x2c) - *(int *)(uVar6 + 0x2c),
                                     (int)*(uint **)(uVar7 + 0x24) - *(int *)(uVar6 + 0x24));
                goto LAB_006a804e;
              }
              puVar5 = *(uint **)(uVar7 + 0x2c);
              goto LAB_006a8051;
            }
            puVar10[8] = *(uint *)(uVar6 + 0x2c);
          }
          puVar10[1] = puVar10[1] | 0x20;
        }
LAB_006a805c:
        puVar10 = puVar10 + 0xc;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      if (puVar3 != local_40) {
        puVar5 = (uint *)FUN_00691290(local_44,puVar3);
      }
    }
  }
  return puVar5;
}


/* FUN_006a8090 @ 006a8090  kind=gamemisc  attributed-by=none  size=438 */

void FUN_006a8090(void)

{
  undefined4 uVar1;
  int in_EAX;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int in_ECX;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int local_18;
  int local_14;
  undefined4 local_10;
  
  iVar8 = in_EAX * 0xcc + 4 + *(int *)(in_ECX + 0x18);
  uVar1 = *(undefined4 *)(iVar8 + 0xc4);
  local_18 = *(int *)(iVar8 + 200);
  puVar4 = *(uint **)(in_ECX + 0xc);
  iVar8 = *(int *)(in_ECX + 4);
  do {
    if (iVar8 == 0) {
      return;
    }
    uVar12 = *puVar4;
    uVar10 = puVar4[1] * 0x30 + uVar12;
    uVar5 = 0;
    uVar9 = 0;
    uVar2 = uVar12;
    if (uVar12 < uVar10) {
      do {
        if ((*(byte *)(uVar2 + 0x10) & 0x20) != 0) {
          if (uVar9 == 0) {
            uVar9 = uVar2;
          }
          uVar5 = uVar5 + 1;
        }
        uVar2 = uVar2 + 0x30;
      } while (uVar2 < uVar10);
      uVar2 = uVar9;
      if (uVar5 < 2) {
        if (uVar5 == 1) {
          local_18 = FUN_0068ebc0(*(undefined4 *)(uVar9 + 0x24),uVar1);
          local_18 = *(int *)(uVar9 + 0x2c) - local_18;
        }
        for (; uVar12 < uVar10; uVar12 = uVar12 + 0x30) {
          if (uVar12 != uVar9) {
            iVar3 = FUN_0068ebc0(*(undefined4 *)(uVar12 + 0x24),uVar1);
            *(int *)(uVar12 + 0x2c) = iVar3 + local_18;
          }
        }
      }
      else {
        do {
          do {
            uVar12 = uVar2;
            uVar2 = *(uint *)(uVar12 + 4);
            if (uVar2 == uVar9) goto LAB_006a8234;
          } while ((*(byte *)(uVar2 + 0x10) & 0x20) != 0);
          do {
            uVar2 = *(uint *)(uVar2 + 4);
          } while ((*(byte *)(uVar2 + 0x10) & 0x20) == 0);
          iVar3 = *(int *)(uVar12 + 0x24);
          local_14 = *(int *)(uVar2 + 0x24);
          if (local_14 < iVar3) {
            iVar11 = *(int *)(uVar2 + 0x2c);
            iVar13 = *(int *)(uVar12 + 0x2c);
            iVar6 = iVar3 - local_14;
          }
          else {
            iVar11 = *(int *)(uVar12 + 0x2c);
            iVar13 = *(int *)(uVar2 + 0x2c);
            iVar6 = local_14 - iVar3;
            local_14 = iVar3;
          }
          local_10 = 0x10000;
          if (0 < iVar6) {
            local_10 = FUN_0068ec40(iVar13 - iVar11,iVar6);
          }
          uVar12 = *(uint *)(uVar12 + 4);
          do {
            iVar3 = *(int *)(uVar12 + 0x24) - local_14;
            uVar7 = uVar1;
            if ((iVar3 < 1) || (uVar7 = local_10, iVar3 < iVar6)) {
              iVar3 = FUN_0068ebc0(iVar3,uVar7);
            }
            else {
              iVar3 = FUN_0068ebc0(iVar3 - iVar6,uVar1);
              iVar3 = iVar3 + (iVar13 - iVar11);
            }
            *(int *)(uVar12 + 0x2c) = iVar3 + iVar11;
            uVar12 = *(uint *)(uVar12 + 4);
          } while (uVar12 != uVar2);
        } while (uVar2 != uVar9);
      }
    }
LAB_006a8234:
    iVar8 = iVar8 + -1;
    puVar4 = puVar4 + 2;
  } while( true );
}


/* FUN_006a84c0 @ 006a84c0  kind=gamemisc  attributed-by=none  size=47 */

void FUN_006a84c0(void)

{
  undefined4 *in_EAX;
  
  *in_EAX = 0;
  in_EAX[1] = &LAB_006a6360;
  in_EAX[2] = &LAB_006a6320;
  in_EAX[3] = FUN_006a6370;
  in_EAX[4] = FUN_006a6100;
  in_EAX[5] = FUN_006a61f0;
  in_EAX[6] = &LAB_006a8260;
  return;
}


/* FUN_006a84f0 @ 006a84f0  kind=gamemisc  attributed-by=none  size=47 */

void FUN_006a84f0(void)

{
  undefined4 *in_EAX;
  
  *in_EAX = 0;
  in_EAX[1] = &LAB_006a63c0;
  in_EAX[2] = &LAB_006a6320;
  in_EAX[3] = &LAB_006a63d0;
  in_EAX[4] = FUN_006a6250;
  in_EAX[5] = &LAB_006a62c0;
  in_EAX[6] = &LAB_006a8260;
  return;
}


/* FUN_006a8560 @ 006a8560  kind=gamemisc  attributed-by=none  size=217 */

undefined2 FUN_006a8560(char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  
  if ((param_1 != (char *)0x0) && (param_1 < param_2)) {
    pcVar6 = param_1 + 1;
    iVar8 = 0;
    iVar7 = 0x34;
    do {
      iVar2 = iVar7 + iVar8 >> 1;
      pbVar3 = &DAT_00725408 + CONCAT11((&UNK_0072540a)[iVar2 * 2],(&UNK_0072540b)[iVar2 * 2]);
      if ((*pbVar3 & 0x7f) == (int)*param_1) {
        while (pcVar6 < param_2) {
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          if ((*pbVar3 & 0x80) == 0) {
            pbVar4 = pbVar3 + 1;
            uVar5 = pbVar3[1] & 0x7f;
            if ((char)pbVar3[1] < '\0') {
              pbVar4 = pbVar3 + 3;
            }
            pbVar4 = pbVar4 + 1;
            while( true ) {
              if ((int)uVar5 < 1) {
                return 0;
              }
              pbVar3 = &DAT_00725408 + CONCAT11(*pbVar4,pbVar4[1]);
              if ((int)cVar1 == (*pbVar3 & 0x7f)) break;
              uVar5 = uVar5 - 1;
              pbVar4 = pbVar4 + 2;
            }
          }
          else {
            pbVar4 = pbVar3 + 1;
            pbVar3 = pbVar3 + 1;
            if ((int)cVar1 != (*pbVar4 & 0x7f)) {
              return 0;
            }
          }
        }
        if ((*pbVar3 & 0x80) != 0) {
          return 0;
        }
        if ((pbVar3[1] & 0x80) == 0) {
          return 0;
        }
        return CONCAT11(pbVar3[2],pbVar3[3]);
      }
      if ((int)(*pbVar3 & 0x7f) < (int)*param_1) {
        iVar8 = iVar2 + 1;
        iVar2 = iVar7;
      }
      iVar7 = iVar2;
    } while (iVar8 < iVar2);
  }
  return 0;
}


/* FUN_006a8640 @ 006a8640  kind=gamemisc  attributed-by=none  size=217 */

uint FUN_006a8640(char *param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  
  if (*param_1 == 'u') {
    pbVar7 = (byte *)(param_1 + 1);
    if ((param_1[1] == 'n') && (param_1[2] == 'i')) {
      uVar2 = 0;
      pbVar8 = (byte *)(param_1 + 3);
      iVar6 = 4;
      do {
        uVar5 = (uint)*pbVar8;
        uVar4 = uVar5 - 0x30;
        if (9 < uVar4) {
          if (5 < uVar5 - 0x41) break;
          uVar4 = uVar5 - 0x37;
        }
        if (0xf < uVar4) break;
        iVar6 = iVar6 + -1;
        uVar2 = uVar2 * 0x10 + uVar4;
        pbVar8 = pbVar8 + 1;
      } while (0 < iVar6);
      if (iVar6 == 0) {
        if (*pbVar8 == 0) {
          return uVar2;
        }
        if (*pbVar8 == 0x2e) goto LAB_006a8719;
      }
    }
    uVar2 = 0;
    iVar6 = 6;
    do {
      uVar5 = (uint)*pbVar7;
      uVar4 = uVar5 - 0x30;
      if (9 < uVar4) {
        if (5 < uVar5 - 0x41) break;
        uVar4 = uVar5 - 0x37;
      }
      if (0xf < uVar4) break;
      iVar6 = iVar6 + -1;
      uVar2 = uVar2 * 0x10 + uVar4;
      pbVar7 = pbVar7 + 1;
    } while (0 < iVar6);
    if (iVar6 < 3) {
      if (*pbVar7 == 0) {
        return uVar2;
      }
      if (*pbVar7 == 0x2e) goto LAB_006a8719;
    }
  }
  cVar1 = *param_1;
  pcVar3 = param_1;
  while( true ) {
    if (cVar1 == '\0') {
      uVar2 = FUN_006a8560(param_1,pcVar3);
      return uVar2;
    }
    if ((cVar1 == '.') && (param_1 < pcVar3)) break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 1;
  }
  uVar2 = FUN_006a8560(param_1,pcVar3);
LAB_006a8719:
  return uVar2 | 0x80000000;
}


/* FUN_006a8770 @ 006a8770  kind=gamemisc  attributed-by=none  size=96 */

void FUN_006a8770(undefined4 param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  int unaff_EBX;
  uint uVar5;
  byte *unaff_EDI;
  bool bVar6;
  
  uVar5 = 0;
  do {
    pbVar2 = (byte *)("Delta" + (&DAT_00732a90)[uVar5]);
    pbVar4 = unaff_EDI;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_006a87b0:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_006a87b5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_006a87b0;
      pbVar2 = pbVar2 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_006a87b5:
    if (iVar3 == 0) {
      if (*(int *)(unaff_EBX + uVar5 * 4) == 0) {
        *(undefined4 *)(unaff_EBX + uVar5 * 4) = 1;
        *(undefined4 *)(param_2 + uVar5 * 4) = param_1;
      }
      return;
    }
    uVar5 = uVar5 + 1;
    if (9 < uVar5) {
      return;
    }
  } while( true );
}


/* FUN_006a87e0 @ 006a87e0  kind=gamemisc  attributed-by=none  size=30 */

void FUN_006a87e0(int param_1)

{
  uint uVar1;
  int in_ECX;
  
  uVar1 = 0;
  do {
    if (in_ECX == (&DAT_00732a10)[uVar1]) {
      *(undefined4 *)(param_1 + uVar1 * 4) = 2;
      return;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 10);
  return;
}


/* FUN_006a8800 @ 006a8800  kind=gamemisc  attributed-by=none  size=680 */

void FUN_006a8800(undefined4 param_1,int param_2,uint param_3,code *param_4,code *param_5,
                 undefined4 param_6)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 extraout_EDX;
  uint uVar5;
  int local_70;
  uint local_6c;
  int local_68;
  undefined4 local_64;
  undefined4 local_60;
  code *local_5c;
  code *local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&local_70;
  local_58 = param_4;
  local_5c = param_5;
  local_60 = param_6;
  local_6c = param_3;
  local_64 = param_1;
  local_68 = param_2;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0;
  puVar1 = (undefined4 *)FUN_00693a60(param_1,8,0,param_3 + 10,0,&local_70);
  *(undefined4 **)(param_2 + 0x14) = puVar1;
  if (local_70 != 0) {
    __security_check_cookie(local_4 ^ (uint)&local_70);
    return;
  }
  uVar5 = 0;
  if (local_6c != 0) {
    do {
      iVar2 = (*local_58)(local_60,uVar5);
      if (iVar2 != 0) {
        FUN_006a8770(uVar5,&uStack_2c);
        uVar3 = FUN_006a8640(iVar2);
        if ((uVar3 & 0x7fffffff) != 0) {
          FUN_006a87e0(&local_54);
          *puVar1 = extraout_EDX;
          puVar1[1] = uVar5;
          puVar1 = puVar1 + 2;
        }
        if (local_5c != (code *)0x0) {
          (*local_5c)(local_60,iVar2);
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < local_6c);
    if (local_54 == 1) {
      *puVar1 = 0x394;
      puVar1[1] = uStack_2c;
      puVar1 = puVar1 + 2;
    }
    if (local_50 == 1) {
      *puVar1 = 0x3a9;
      puVar1[1] = uStack_28;
      puVar1 = puVar1 + 2;
    }
    if (local_4c == 1) {
      *puVar1 = 0x2215;
      puVar1[1] = uStack_24;
      puVar1 = puVar1 + 2;
    }
    if (local_48 == 1) {
      *puVar1 = 0xad;
      puVar1[1] = uStack_20;
      puVar1 = puVar1 + 2;
    }
    if (local_44 == 1) {
      *puVar1 = 0x2c9;
      puVar1[1] = uStack_1c;
      puVar1 = puVar1 + 2;
    }
    if (local_40 == 1) {
      *puVar1 = 0x3bc;
      puVar1[1] = uStack_18;
      puVar1 = puVar1 + 2;
    }
    if (local_3c == 1) {
      *puVar1 = 0x2219;
      puVar1[1] = uStack_14;
      puVar1 = puVar1 + 2;
    }
    if (local_38 == 1) {
      *puVar1 = 0xa0;
      puVar1[1] = uStack_10;
      puVar1 = puVar1 + 2;
    }
    if (local_34 == 1) {
      *puVar1 = 0x21a;
      puVar1[1] = uStack_c;
      puVar1 = puVar1 + 2;
    }
    param_2 = local_68;
    if (local_30 == 1) {
      *puVar1 = 0x21b;
      puVar1[1] = uStack_8;
      puVar1 = puVar1 + 2;
    }
  }
  iVar2 = *(int *)(param_2 + 0x14);
  uVar5 = (int)puVar1 - iVar2 >> 3;
  if (uVar5 == 0) {
    FUN_00691290(local_64,iVar2);
    *(undefined4 *)(param_2 + 0x14) = 0;
    if (local_70 == 0) {
      *(undefined4 *)(param_2 + 0x10) = 0;
      __security_check_cookie(local_4 ^ (uint)&local_70);
      return;
    }
  }
  else {
    if (uVar5 < local_6c >> 1) {
      uVar4 = FUN_00693a60(local_64,8,local_6c,uVar5,iVar2,&local_70);
      *(undefined4 *)(param_2 + 0x14) = uVar4;
      local_70 = 0;
    }
    qsort(*(void **)(param_2 + 0x14),uVar5,8,(_PtFuncCompare *)&LAB_006a8730);
  }
  *(uint *)(param_2 + 0x10) = uVar5;
  __security_check_cookie(local_4 ^ (uint)&local_70);
  return;
}


/* FUN_006a8b20 @ 006a8b20  kind=gamemisc  attributed-by=none  size=166 */

uint FUN_006a8b20(int param_1,uint *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint local_4;
  
  uVar7 = 0;
  uVar6 = *param_2 + 1;
  local_4 = 0;
  if (*(uint *)(param_1 + 0x10) != 0) {
    iVar2 = *(int *)(param_1 + 0x14);
    uVar5 = *(uint *)(param_1 + 0x10);
    do {
      uVar3 = (uVar5 - uVar7 >> 1) + uVar7;
      uVar4 = *(uint *)(iVar2 + uVar3 * 8);
      if (uVar4 == uVar6) {
        uVar7 = *(uint *)(iVar2 + 4 + uVar3 * 8);
        *param_2 = uVar6;
        return uVar7;
      }
      uVar4 = uVar4 & 0x7fffffff;
      if (uVar4 == uVar6) {
        local_4 = *(uint *)(iVar2 + 4 + uVar3 * 8);
      }
      if (uVar4 < uVar6) {
        uVar7 = uVar3 + 1;
        uVar3 = uVar5;
      }
      uVar5 = uVar3;
    } while (uVar7 < uVar3);
    if (local_4 != 0) {
      *param_2 = uVar6;
      return local_4;
    }
  }
  if (*(uint *)(param_1 + 0x10) <= uVar7) {
    *param_2 = 0;
    return local_4;
  }
  puVar1 = (uint *)(*(int *)(param_1 + 0x14) + uVar7 * 8);
  uVar7 = puVar1[1];
  *param_2 = *puVar1 & 0x7fffffff;
  return uVar7;
}


/* FUN_006a8c20 @ 006a8c20  kind=gamemisc  attributed-by=none  size=166 */

int FUN_006a8c20(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_3;
  param_1[8] = param_3;
  uVar2 = FUN_00693a60(param_3,4,0,param_2,0,&param_3);
  param_1[6] = uVar2;
  if (param_3 == 0) {
    uVar2 = FUN_00693a60(iVar1,4,0,param_2,0,&param_3);
    param_1[7] = uVar2;
    if (param_3 == 0) {
      param_1[4] = param_2;
      param_1[5] = 0;
      *param_1 = 0;
      param_1[2] = 0;
      param_1[1] = 0;
      param_1[3] = 0xdeadbeef;
      param_1[9] = FUN_006a8c20;
      param_1[10] = &LAB_006a8e20;
      param_1[0xb] = &LAB_006a8d60;
      param_1[0xc] = FUN_006a8e80;
      return 0;
    }
  }
  FUN_00691290(iVar1,param_1[6]);
  param_1[6] = 0;
  return param_3;
}


/* FUN_006a8cd0 @ 006a8cd0  kind=gamemisc  attributed-by=none  size=39 */

void FUN_006a8cd0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *in_ECX;
  
  piVar3 = (int *)in_ECX[6];
  iVar2 = *in_ECX;
  piVar1 = piVar3 + in_ECX[4];
  for (; piVar3 < piVar1; piVar3 = piVar3 + 1) {
    if (*piVar3 != 0) {
      *piVar3 = *piVar3 + (iVar2 - param_1);
    }
  }
  return;
}


/* FUN_006a8d00 @ 006a8d00  kind=gamemisc  attributed-by=none  size=90 */

int FUN_006a8d00(undefined4 param_1)

{
  undefined4 uVar1;
  void *_Src;
  void *_Dst;
  undefined4 *unaff_ESI;
  int local_4;
  
  uVar1 = unaff_ESI[8];
  _Src = (void *)*unaff_ESI;
  _Dst = (void *)FUN_00692230(uVar1,param_1,&local_4);
  *unaff_ESI = _Dst;
  if (local_4 != 0) {
    *unaff_ESI = _Src;
    return local_4;
  }
  if (_Src != (void *)0x0) {
    memcpy(_Dst,_Src,unaff_ESI[2]);
    FUN_006a8cd0(_Src);
    FUN_00691290(uVar1,_Src);
  }
  unaff_ESI[2] = param_1;
  return 0;
}


/* FUN_006a8e80 @ 006a8e80  kind=gamemisc  attributed-by=none  size=80 */

void FUN_006a8e80(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = param_1[8];
  if (param_1[3] == -0x21524111) {
    FUN_00691290(uVar1,*param_1);
    *param_1 = 0;
    FUN_00691290(uVar1,param_1[6]);
    param_1[6] = 0;
    FUN_00691290(uVar1,param_1[7]);
    param_1[7] = 0;
    param_1[3] = 0;
  }
  return;
}


/* FUN_006a8ed0 @ 006a8ed0  kind=gamemisc  attributed-by=none  size=26 */

void FUN_006a8ed0(void)

{
  char *pcVar1;
  undefined4 *in_EDX;
  char *unaff_ESI;
  
  for (pcVar1 = (char *)*in_EDX; ((pcVar1 < unaff_ESI && (*pcVar1 != '\r')) && (*pcVar1 != '\n'));
      pcVar1 = pcVar1 + 1) {
  }
  *in_EDX = pcVar1;
  return;
}


/* FUN_006a8ef0 @ 006a8ef0  kind=gamemisc  attributed-by=none  size=73 */

void FUN_006a8ef0(void)

{
  char cVar1;
  char *in_EAX;
  char *pcVar2;
  undefined4 *unaff_EDI;
  
  for (pcVar2 = (char *)*unaff_EDI; pcVar2 < in_EAX; pcVar2 = pcVar2 + 1) {
    cVar1 = *pcVar2;
    if ((((cVar1 != ' ') && (cVar1 != '\r')) && (cVar1 != '\n')) &&
       (((cVar1 != '\t' && (cVar1 != '\f')) && (cVar1 != '\0')))) {
      if (cVar1 != '%') break;
      FUN_006a8ed0();
    }
  }
  *unaff_EDI = pcVar2;
  return;
}


/* FUN_006a8f40 @ 006a8f40  kind=gamemisc  attributed-by=none  size=124 */

undefined4 FUN_006a8f40(undefined4 *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  byte *unaff_EDI;
  
  pbVar4 = (byte *)*param_1;
  iVar5 = 0;
  uVar2 = 3;
  pbVar3 = pbVar4;
  if (unaff_EDI <= pbVar4) {
LAB_006a8fb6:
    *param_1 = pbVar4;
    return uVar2;
  }
  do {
    bVar1 = *pbVar3;
    pbVar4 = pbVar3 + 1;
    if (bVar1 == 0x5c) {
      uVar2 = 3;
      if (pbVar4 == unaff_EDI) goto LAB_006a8fb6;
      switch(*pbVar4) {
      case 0x28:
      case 0x29:
      case 0x5c:
      case 0x62:
      case 0x66:
      case 0x6e:
      case 0x72:
      case 0x74:
        pbVar4 = pbVar3 + 2;
        break;
      default:
        uVar6 = 0;
        do {
          uVar2 = 3;
          if (unaff_EDI <= pbVar4) goto LAB_006a8fb6;
          if ((*pbVar4 < 0x30) || (0x37 < *pbVar4)) break;
          uVar6 = uVar6 + 1;
          pbVar4 = pbVar4 + 1;
        } while (uVar6 < 3);
      }
    }
    else if (bVar1 == 0x28) {
      iVar5 = iVar5 + 1;
    }
    else if ((bVar1 == 0x29) && (iVar5 = iVar5 + -1, iVar5 == 0)) {
      uVar2 = 0;
      goto LAB_006a8fb6;
    }
    pbVar3 = pbVar4;
    if (unaff_EDI <= pbVar4) {
      *param_1 = pbVar4;
      return 3;
    }
  } while( true );
}


/* FUN_006a9020 @ 006a9020  kind=gamemisc  attributed-by=none  size=95 */

undefined4 FUN_006a9020(void)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined4 *unaff_EBX;
  byte *unaff_ESI;
  
  pbVar2 = (byte *)*unaff_EBX;
  do {
    pbVar3 = pbVar2;
    pbVar2 = pbVar3 + 1;
    if ((unaff_ESI <= pbVar2) || (FUN_006a8ef0(), unaff_ESI <= pbVar2)) goto LAB_006a9066;
    bVar1 = *pbVar2;
  } while ((((0x2f < bVar1) && (bVar1 < 0x3a)) || ((0x40 < bVar1 && (bVar1 < 0x47)))) ||
          ((0x60 < bVar1 && (bVar1 < 0x67))));
  if (*pbVar2 != 0x3e) {
    *unaff_EBX = pbVar2;
    return 3;
  }
LAB_006a9066:
  *unaff_EBX = pbVar3 + 2;
  return 0;
}


/* FUN_006a9080 @ 006a9080  kind=gamemisc  attributed-by=none  size=153 */

int FUN_006a9080(undefined4 *param_1)

{
  undefined1 *in_EAX;
  int iVar1;
  int iVar2;
  undefined1 *local_4;
  
  local_4 = (undefined1 *)*param_1;
  iVar2 = 0;
  iVar1 = 0;
  if (local_4 < in_EAX) {
    do {
      if (iVar1 != 0) break;
      switch(*local_4) {
      case 0x25:
        FUN_006a8ed0();
        break;
      case 0x28:
        iVar1 = FUN_006a8f40(&local_4);
        break;
      case 0x3c:
        iVar1 = FUN_006a9020();
        break;
      case 0x7b:
        iVar2 = iVar2 + 1;
        break;
      case 0x7d:
        iVar2 = iVar2 + -1;
        if (iVar2 == 0) {
          local_4 = local_4 + 1;
          goto LAB_006a90c4;
        }
      }
      local_4 = local_4 + 1;
    } while (local_4 < in_EAX);
    *param_1 = local_4;
    if (iVar2 != 0) {
      return 3;
    }
  }
  else {
LAB_006a90c4:
    *param_1 = local_4;
  }
  return iVar1;
}


/* FUN_006a9190 @ 006a9190  kind=gamemisc  attributed-by=none  size=295 */

void FUN_006a9190(int *param_1)

{
  char cVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = param_1;
  pcVar2 = (char *)param_1[2];
  iVar4 = 0;
  param_1 = (int *)*param_1;
  FUN_006a8ef0();
  if (pcVar2 <= param_1) goto LAB_006a929a;
  cVar1 = *(char *)param_1;
  if ((cVar1 != '[') && (cVar1 != ']')) {
    if (cVar1 == '{') {
      iVar4 = FUN_006a9080(&param_1);
      goto LAB_006a929a;
    }
    if (cVar1 == '(') {
      iVar4 = FUN_006a8f40(&param_1);
      goto LAB_006a929a;
    }
    if (cVar1 == '<') {
      if (((char *)((int)param_1 + 1) < pcVar2) && (*(char *)((int)param_1 + 1) == '<')) {
        param_1 = (int *)((int)param_1 + 2);
      }
      else {
        iVar4 = FUN_006a9020();
      }
      goto LAB_006a929a;
    }
    if (cVar1 != '>') {
      if (cVar1 == '/') {
        param_1 = (int *)((int)param_1 + 1);
      }
      if (param_1 < pcVar2) {
        iVar4 = 0;
        while ((((((cVar1 = *(char *)param_1, cVar1 != ' ' && (cVar1 != '\r')) && (cVar1 != '\n'))
                 && ((cVar1 != '\t' && (cVar1 != '\f')))) &&
                ((cVar1 != '\0' && ((cVar1 != '/' && (cVar1 != '(')))))) && (cVar1 != ')'))) {
          if ((((cVar1 == '<') || (cVar1 == '>')) || (cVar1 == '[')) ||
             (((cVar1 == ']' || (cVar1 == '{')) ||
              ((cVar1 == '}' ||
               ((cVar1 == '%' || (param_1 = (int *)((int)param_1 + 1), pcVar2 <= param_1))))))))
          break;
        }
      }
      goto LAB_006a929a;
    }
    param_1 = (int *)((int)param_1 + 1);
    if ((pcVar2 <= param_1) || (*(char *)param_1 != '>')) {
      iVar4 = 3;
      goto LAB_006a929a;
    }
  }
  param_1 = (int *)((int)param_1 + 1);
LAB_006a929a:
  pcVar2 = (char *)*piVar3;
  *piVar3 = (int)param_1;
  if (param_1 != (int *)pcVar2) {
    piVar3[3] = iVar4;
    return;
  }
  piVar3[3] = 3;
  return;
}


/* FUN_006a92c0 @ 006a92c0  kind=gamemisc  attributed-by=none  size=15 */

void FUN_006a92c0(void)

{
  FUN_006a8ef0();
  return;
}


/* FUN_006a92d0 @ 006a92d0  kind=gamemisc  attributed-by=none  size=281 */

void FUN_006a92d0(undefined4 *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int iVar6;
  bool bVar7;
  
  puVar4 = (undefined4 *)param_2;
  *(undefined4 *)((int)param_2 + 8) = 0;
  *(undefined4 *)param_2 = 0;
  *(undefined4 *)((int)param_2 + 4) = 0;
  FUN_006a92c0(param_1);
  param_2 = (char *)*param_1;
  pcVar2 = (char *)param_1[2];
  if (pcVar2 <= param_2) {
    return;
  }
  cVar1 = *param_2;
  *puVar4 = param_2;
  if (cVar1 == '(') {
    puVar4[2] = 2;
    iVar6 = FUN_006a8f40(&param_2);
    bVar7 = iVar6 == 0;
  }
  else {
    if (cVar1 == '[') {
      puVar4[2] = 3;
      iVar6 = 1;
      *param_1 = param_2 + 1;
      FUN_006a92c0(param_1);
      pcVar5 = (char *)*param_1;
      pcVar3 = param_2;
      while ((param_2 = pcVar5, param_2 < pcVar2 && (param_1[3] == 0))) {
        if (*param_2 == '[') {
          iVar6 = iVar6 + 1;
        }
        else if ((*param_2 == ']') && (iVar6 = iVar6 + -1, iVar6 < 1)) {
          param_2 = param_2 + 1;
          goto LAB_006a9333;
        }
        param_2 = pcVar3;
        FUN_006a9190(param_1);
        FUN_006a92c0(param_1);
        pcVar5 = (char *)*param_1;
        pcVar3 = param_2;
      }
      goto LAB_006a9336;
    }
    if (cVar1 == '{') {
      puVar4[2] = 3;
      iVar6 = FUN_006a9080(&param_2);
      bVar7 = iVar6 == 0;
    }
    else {
      puVar4[2] = ((*param_2 != '/') - 1 & 3) + 1;
      FUN_006a9190(param_1);
      param_2 = (char *)*param_1;
      bVar7 = param_1[3] == 0;
    }
  }
  if (bVar7) {
LAB_006a9333:
    puVar4[1] = param_2;
  }
LAB_006a9336:
  if (puVar4[1] == 0) {
    *puVar4 = 0;
    puVar4[2] = 0;
  }
  *param_1 = param_2;
  return;
}


/* FUN_006a93f0 @ 006a93f0  kind=gamemisc  attributed-by=none  size=195 */

void FUN_006a93f0(uint *param_1,int *param_2,int param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int local_c;
  int local_8;
  int local_4;
  
  *param_4 = -1;
  FUN_006a92d0(param_1,&local_c);
  if (local_4 == 3) {
    uVar1 = param_1[2];
    uVar2 = *param_1;
    *param_1 = local_c + 1U;
    param_1[2] = local_8 - 1U;
    piVar3 = param_2;
    if (local_c + 1U < local_8 - 1U) {
      do {
        FUN_006a92d0(param_1,&local_c);
        if (local_4 == 0) break;
        if ((param_2 != (int *)0x0) && (piVar3 < param_2 + param_3 * 3)) {
          *piVar3 = local_c;
          piVar3[1] = local_8;
          piVar3[2] = local_4;
        }
        piVar3 = piVar3 + 3;
      } while (*param_1 < param_1[2]);
    }
    *param_4 = ((int)piVar3 - (int)param_2) / 0xc;
    *param_1 = uVar2;
    param_1[2] = uVar1;
  }
  return;
}


/* FUN_006a94c0 @ 006a94c0  kind=gamemisc  attributed-by=none  size=91 */

undefined4 FUN_006a94c0(void)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 *unaff_EBX;
  char *unaff_ESI;
  
  pcVar2 = (char *)*unaff_EBX;
  pcVar1 = pcVar2 + 3;
  if ((((pcVar1 < unaff_ESI) && (*pcVar2 == 't')) && (pcVar2[1] == 'r')) &&
     ((pcVar2[2] == 'u' && (*pcVar1 == 'e')))) {
    *unaff_EBX = pcVar2 + 5;
    return 1;
  }
  if ((((pcVar2 + 4 < unaff_ESI) && ((*pcVar2 == 'f' && (pcVar2[1] == 'a')))) && (pcVar2[2] == 'l'))
     && ((*pcVar1 == 's' && (pcVar2[4] == 'e')))) {
    pcVar2 = pcVar2 + 6;
  }
  *unaff_EBX = pcVar2;
  return 0;
}


/* FUN_006a9560 @ 006a9560  kind=gamemisc  attributed-by=none  size=139 */

void FUN_006a9560(undefined4 *param_1,int param_2,int param_3,int param_4,char param_5)

{
  int iVar1;
  undefined **ppuVar2;
  undefined4 *puVar3;
  
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 1;
  param_1[1] = param_2;
  param_1[2] = param_4;
  *param_1 = *(undefined4 *)(param_2 + 100);
  if (param_4 != 0) {
    iVar1 = **(int **)(param_4 + 0x9c);
    param_1[3] = iVar1;
    param_1[4] = iVar1 + 0x14;
    param_1[5] = iVar1 + 0x38;
    FUN_0068f020(iVar1);
    param_1[0x13] = *(undefined4 *)(param_3 + 0x28);
    param_1[0x12] = 0;
    if (param_5 != '\0') {
      param_1[0x12] = *(undefined4 *)(*(int *)(param_4 + 0x9c) + 0x24);
    }
  }
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  ppuVar2 = &PTR_FUN_00732e5c;
  puVar3 = param_1 + 0x14;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *ppuVar2;
    ppuVar2 = ppuVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}


/* FUN_006a95f0 @ 006a95f0  kind=gamemisc  attributed-by=none  size=46 */

void FUN_006a95f0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 != 0) {
    puVar2 = *(undefined4 **)(param_1 + 0x10);
    *(undefined4 *)(iVar1 + 0x6c) = *puVar2;
    *(undefined4 *)(iVar1 + 0x70) = puVar2[1];
    *(undefined4 *)(iVar1 + 0x74) = puVar2[2];
    *(undefined4 *)(iVar1 + 0x78) = puVar2[3];
    *(undefined4 *)(iVar1 + 0x7c) = puVar2[4];
  }
  return;
}


/* FUN_006a9620 @ 006a9620  kind=gamemisc  attributed-by=none  size=52 */

undefined4 FUN_006a9620(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 0xc);
    if (*(uint *)(iVar1 + 4) <
        (uint)((int)*(short *)(iVar1 + 0x16) + *(short *)(iVar1 + 0x3a) + param_2)) {
      uVar2 = FUN_00693c40(iVar1,param_2,0);
      return uVar2;
    }
  }
  return 0;
}


/* FUN_006a9660 @ 006a9660  kind=gamemisc  attributed-by=none  size=85 */

void FUN_006a9660(int param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = *(int *)(param_1 + 0x14);
  if (*(char *)(param_1 + 0x44) != '\0') {
    sVar2 = *(short *)(iVar3 + 2);
    iVar4 = *(int *)(iVar3 + 8);
    piVar1 = (int *)(*(int *)(iVar3 + 4) + sVar2 * 8);
    iVar5 = FUN_0068e970(param_2);
    *piVar1 = iVar5 >> 0x10;
    iVar5 = FUN_0068e970(param_3);
    piVar1[1] = iVar5 >> 0x10;
    *(char *)(iVar4 + sVar2) = (param_4 == '\0') + '\x01';
  }
  *(short *)(iVar3 + 2) = *(short *)(iVar3 + 2) + 1;
  return;
}


/* FUN_006a96c0 @ 006a96c0  kind=gamemisc  attributed-by=none  size=49 */

int FUN_006a96c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_006a9620(param_1,1);
  if (iVar1 == 0) {
    FUN_006a9660(param_1,param_2,param_3,1);
  }
  return iVar1;
}


/* FUN_006a9700 @ 006a9700  kind=gamemisc  attributed-by=none  size=103 */

int FUN_006a9700(int param_1)

{
  short *psVar1;
  int iVar2;
  
  psVar1 = *(short **)(param_1 + 0x14);
  if (psVar1 == (short *)0x0) {
    return 3;
  }
  if (*(char *)(param_1 + 0x44) == '\0') {
    *psVar1 = *psVar1 + 1;
    return 0;
  }
  iVar2 = *(int *)(param_1 + 0xc);
  if ((*(uint *)(iVar2 + 8) < (uint)(*(short *)(iVar2 + 0x38) + 1 + (int)*(short *)(iVar2 + 0x14)))
     && (iVar2 = FUN_00693c40(iVar2,0,1), iVar2 != 0)) {
    return iVar2;
  }
  if (0 < *psVar1) {
    *(short *)(*(int *)(psVar1 + 6) + -2 + *psVar1 * 2) = psVar1[1] + -1;
  }
  *psVar1 = *psVar1 + 1;
  return 0;
}


/* FUN_006a9770 @ 006a9770  kind=gamemisc  attributed-by=none  size=56 */

int FUN_006a9770(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x40) == 3) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x40) = 3;
  iVar1 = FUN_006a9700(param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_006a96c0(param_1,param_2,param_3);
  }
  return iVar1;
}


/* FUN_006a97b0 @ 006a97b0  kind=gamemisc  attributed-by=none  size=137 */

void FUN_006a97b0(int param_1)

{
  short sVar1;
  short sVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  psVar3 = *(short **)(param_1 + 0x14);
  if (psVar3 != (short *)0x0) {
    sVar1 = *psVar3;
    if (sVar1 < 2) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(short *)(*(int *)(psVar3 + 6) + -4 + sVar1 * 2) + 1;
    }
    sVar2 = psVar3[1];
    if (1 < sVar2) {
      iVar4 = *(int *)(psVar3 + 2);
      iVar6 = (int)sVar2;
      if (((*(int *)(iVar4 + iVar5 * 8) == *(int *)(iVar4 + -8 + iVar6 * 8)) &&
          (*(int *)(iVar4 + 4 + iVar5 * 8) == *(int *)(iVar4 + -4 + iVar6 * 8))) &&
         (*(char *)(*(int *)(psVar3 + 4) + -1 + iVar6) == '\x01')) {
        psVar3[1] = sVar2 + -1;
      }
    }
    if (0 < sVar1) {
      sVar2 = psVar3[1];
      if (iVar5 == sVar2 + -1) {
        *psVar3 = sVar1 + -1;
        psVar3[1] = sVar2 + -1;
        return;
      }
      *(short *)(*(int *)(psVar3 + 6) + -2 + sVar1 * 2) = sVar2 + -1;
    }
  }
  return;
}


/* FUN_006a9840 @ 006a9840  kind=gamemisc  attributed-by=none  size=133 */

uint FUN_006a9840(void)

{
  byte bVar1;
  int in_EAX;
  byte *pbVar2;
  uint uVar3;
  uint in_ECX;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  bool bVar8;
  
  if (0xff < in_ECX) {
    return 0xffffffff;
  }
  pbVar2 = (byte *)(**(code **)(*(int *)(in_EAX + 0x544) + 0x14))
                             (*(undefined2 *)
                               (*(int *)(*(int *)(in_EAX + 0x544) + 0x18) + in_ECX * 2));
  uVar3 = 0;
  if (*(uint *)(in_EAX + 0x548) != 0) {
    puVar7 = *(undefined4 **)(in_EAX + 0x54c);
    do {
      pbVar4 = (byte *)*puVar7;
      if ((pbVar4 != (byte *)0x0) && (pbVar6 = pbVar2, *pbVar4 == *pbVar2)) {
        do {
          bVar1 = *pbVar4;
          bVar8 = bVar1 < *pbVar6;
          if (bVar1 != *pbVar6) {
LAB_006a98a7:
            iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_006a98ac;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar8 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_006a98a7;
          pbVar4 = pbVar4 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_006a98ac:
        if (iVar5 == 0) {
          return uVar3;
        }
      }
      uVar3 = uVar3 + 1;
      puVar7 = puVar7 + 1;
    } while (uVar3 < *(uint *)(in_EAX + 0x548));
  }
  return 0xffffffff;
}


/* FUN_006a98d0 @ 006a98d0  kind=gamemisc  attributed-by=none  size=14 */

void FUN_006a98d0(void)

{
  int in_EAX;
  
  (**(code **)(in_EAX + 0x5c0))();
  return;
}


/* FUN_006a98e0 @ 006a98e0  kind=gamemisc  attributed-by=none  size=172 */

undefined4
FUN_006a98e0(void *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  
  memset(param_1,0,0x5dc);
  iVar1 = FUN_0068fe10(*(undefined4 *)(param_2 + 0x60),"postscript-cmaps");
  if (iVar1 == 0) {
    return 7;
  }
  *(int *)((int)param_1 + 0x544) = iVar1;
  FUN_006a9560(param_1,param_2,param_3,param_4,param_7);
  *(undefined4 *)((int)param_1 + 0x548) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((int)param_1 + 0x54c) = param_5;
  *(undefined4 *)((int)param_1 + 0x5b8) = param_6;
  *(undefined4 *)((int)param_1 + 0x5bc) = param_8;
  *(undefined4 *)((int)param_1 + 0x5c0) = param_9;
  *(code **)((int)param_1 + 0x5c4) = FUN_006a98e0;
  *(undefined1 **)((int)param_1 + 0x5c8) = &LAB_006a9990;
  *(code **)((int)param_1 + 0x5cc) = FUN_006aabd0;
  return 0;
}


/* FUN_006a99a0 @ 006a99a0  kind=gamemisc  attributed-by=none  size=55 */

void FUN_006a99a0(int param_1)

{
  int iVar1;
  int iVar2;
  int *in_EAX;
  
  iVar1 = *in_EAX;
  iVar2 = *(int *)(iVar1 + 0x1e4);
  in_EAX[6] = *(int *)(iVar1 + 0x1a0);
  in_EAX[7] = *(int *)(iVar1 + 0x1a4);
  in_EAX[5] = *(int *)(iVar2 + 0x14);
  if (param_1 != 0) {
    in_EAX[4] = *(int *)(iVar2 + 0x1c);
    return;
  }
  in_EAX[4] = *(int *)(iVar2 + 0x18);
  return;
}


/* FUN_006a9a00 @ 006a9a00  kind=gamemisc  attributed-by=none  size=140 */

uint FUN_006a9a00(int param_1,uint param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  uint uVar7;
  bool bVar8;
  
  if (0xff < param_2) {
    return 0;
  }
  pbVar2 = (byte *)(**(code **)(param_1 + 0x14))
                             (*(undefined2 *)(*(int *)(param_1 + 0x10) + param_2 * 2));
  uVar7 = 0;
  if (*(uint *)(param_1 + 0x18) == 0) {
    return 0;
  }
  puVar6 = *(undefined4 **)(param_1 + 0x1c);
  do {
    pbVar3 = (byte *)*puVar6;
    if ((pbVar3 != (byte *)0x0) && (pbVar5 = pbVar2, *pbVar3 == *pbVar2)) {
      do {
        bVar1 = *pbVar3;
        bVar8 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_006a9a62:
          iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_006a9a67;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar8 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_006a9a62;
        pbVar3 = pbVar3 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_006a9a67:
      if (iVar4 == 0) {
        return uVar7;
      }
    }
    uVar7 = uVar7 + 1;
    puVar6 = puVar6 + 1;
    if (*(uint *)(param_1 + 0x18) <= uVar7) {
      return 0;
    }
  } while( true );
}


/* FUN_006a9a90 @ 006a9a90  kind=gamemisc  attributed-by=none  size=61 */

int FUN_006a9a90(undefined4 param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *param_2;
  do {
    uVar1 = uVar1 + 1;
    if (0xff < uVar1) {
      *param_2 = 0;
      return 0;
    }
    iVar2 = FUN_006a9a00(param_1,uVar1);
  } while (iVar2 == 0);
  *param_2 = uVar1;
  return iVar2;
}


/* FUN_006a9b80 @ 006a9b80  kind=gamemisc  attributed-by=none  size=63 */

short FUN_006a9b80(int param_1,uint *param_2)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  short *psVar4;
  
  uVar3 = *(uint *)(param_1 + 0x10);
  sVar1 = 0;
  uVar2 = *param_2 + 1;
  if (*param_2 + 1 < uVar3) {
    uVar2 = uVar3;
  }
  uVar3 = *(int *)(param_1 + 0x14) + uVar3;
  if (uVar2 < uVar3) {
    psVar4 = (short *)(*(int *)(param_1 + 0x18) + uVar2 * 2);
    do {
      sVar1 = *psVar4;
      if (sVar1 != 0) goto LAB_006a9bb9;
      uVar2 = uVar2 + 1;
      psVar4 = psVar4 + 1;
    } while (uVar2 < uVar3);
  }
  uVar2 = 0;
LAB_006a9bb9:
  *param_2 = uVar2;
  return sVar1;
}


/* FUN_006a9c50 @ 006a9c50  kind=gamemisc  attributed-by=none  size=102 */

uint FUN_006a9c50(void)

{
  byte *pbVar1;
  uint uVar2;
  undefined4 *in_EDX;
  
  if (0 < (int)in_EDX[3]) {
    return 0x3b;
  }
  do {
    pbVar1 = (byte *)*in_EDX;
    if ((byte *)in_EDX[2] <= pbVar1) {
      in_EDX[3] = 3;
      return 0xffffffff;
    }
    uVar2 = (uint)*pbVar1;
    *in_EDX = pbVar1 + 1;
  } while ((uVar2 == 0x20) || (uVar2 == 9));
  if ((uVar2 == 0xd) || (uVar2 == 10)) {
    in_EDX[3] = 2;
  }
  else {
    if (uVar2 == 0x3b) {
      in_EDX[3] = 1;
      return 0x3b;
    }
    if ((uVar2 == 0xffffffff) || (uVar2 == 0x1a)) {
      in_EDX[3] = 3;
      return uVar2;
    }
  }
  return uVar2;
}


/* FUN_006a9cc0 @ 006a9cc0  kind=gamemisc  attributed-by=none  size=99 */

int FUN_006a9cc0(void)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  int *extraout_EDX;
  
  FUN_006a9c50();
  if (0 < extraout_EDX[3]) {
    return 0;
  }
  iVar2 = *extraout_EDX + -1;
  while (pbVar1 = (byte *)*extraout_EDX, pbVar1 < (byte *)extraout_EDX[2]) {
    uVar3 = (uint)*pbVar1;
    *extraout_EDX = (int)(pbVar1 + 1);
    if ((uVar3 == 0x20) || (uVar3 == 9)) {
      return iVar2;
    }
    if ((uVar3 == 0xd) || (uVar3 == 10)) {
      extraout_EDX[3] = 2;
      return iVar2;
    }
    if (uVar3 == 0x3b) {
      extraout_EDX[3] = 1;
      return iVar2;
    }
    if ((uVar3 == 0xffffffff) || (uVar3 == 0x1a)) break;
  }
  extraout_EDX[3] = 3;
  return iVar2;
}


/* FUN_006a9d30 @ 006a9d30  kind=gamemisc  attributed-by=none  size=74 */

int FUN_006a9d30(void)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  int *extraout_EDX;
  
  FUN_006a9c50();
  if (1 < extraout_EDX[3]) {
    return 0;
  }
  iVar1 = *extraout_EDX;
  while (pbVar2 = (byte *)*extraout_EDX, pbVar2 < (byte *)extraout_EDX[2]) {
    uVar3 = (uint)*pbVar2;
    *extraout_EDX = (int)(pbVar2 + 1);
    if ((uVar3 == 0xd) || (uVar3 == 10)) {
      extraout_EDX[3] = 2;
      return iVar1 + -1;
    }
    if ((uVar3 == 0xffffffff) || (uVar3 == 0x1a)) break;
  }
  extraout_EDX[3] = 3;
  return iVar1 + -1;
}


/* FUN_006a9d80 @ 006a9d80  kind=gamemisc  attributed-by=none  size=130 */

void FUN_006a9d80(char param_1,int *param_2)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int extraout_EDX;
  int extraout_EDX_00;
  undefined8 uVar3;
  
  iVar2 = *(int *)(in_EAX + 4);
  if (param_1 == '\0') {
    do {
      iVar1 = *(int *)(iVar2 + 0xc);
      while (iVar1 < 1) {
        FUN_006a9cc0();
        iVar2 = extraout_EDX_00;
        iVar1 = *(int *)(extraout_EDX_00 + 0xc);
      }
      *(undefined4 *)(iVar2 + 0xc) = 0;
      uVar3 = FUN_006a9cc0();
      iVar2 = (int)((ulonglong)uVar3 >> 0x20);
    } while ((((int)uVar3 == 0) && (*(int *)(iVar2 + 0xc) < 3)) && (0 < *(int *)(iVar2 + 0xc)));
  }
  else {
    do {
      if (*(int *)(iVar2 + 0xc) < 2) {
        FUN_006a9d30();
        iVar2 = extraout_EDX;
      }
      *(undefined4 *)(iVar2 + 0xc) = 0;
      uVar3 = FUN_006a9cc0();
      iVar2 = (int)((ulonglong)uVar3 >> 0x20);
    } while ((((int)uVar3 == 0) && (*(int *)(iVar2 + 0xc) < 3)) && (1 < *(int *)(iVar2 + 0xc)));
  }
  if (param_2 != (int *)0x0) {
    if ((int)uVar3 != 0) {
      *param_2 = (*(int *)((ulonglong)uVar3 >> 0x20) - (int)uVar3) + -1;
      return;
    }
    *param_2 = 0;
  }
  return;
}


/* FUN_006a9e10 @ 006a9e10  kind=gamemisc  attributed-by=none  size=72 */

int FUN_006a9e10(void)

{
  int iVar1;
  size_t unaff_EBX;
  int iVar2;
  char *unaff_EDI;
  
  iVar2 = 0;
  do {
    if (*(&PTR_s_Ascender_00732ff8)[iVar2] == *unaff_EDI) {
      for (; iVar2 < 0x4a; iVar2 = iVar2 + 1) {
        if (*(&PTR_s_Ascender_00732ff8)[iVar2] != *unaff_EDI) {
          return 0x4b;
        }
        iVar1 = strncmp((&PTR_s_Ascender_00732ff8)[iVar2],unaff_EDI,unaff_EBX);
        if (iVar1 == 0) {
          return iVar2;
        }
      }
    }
    iVar2 = iVar2 + 1;
    if (0x49 < iVar2) {
      return 0x4b;
    }
  } while( true );
}


/* FUN_006a9eb0 @ 006a9eb0  kind=gamemisc  attributed-by=none  size=29 */

void FUN_006a9eb0(undefined4 *param_1)

{
  FUN_00691290(*param_1,param_1[1]);
  param_1[1] = 0;
  return;
}


/* FUN_006a9ed0 @ 006a9ed0  kind=gamemisc  attributed-by=none  size=37 */

int FUN_006a9ed0(int *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1 << 0x10 | param_1[1];
  uVar2 = *param_2 << 0x10 | param_2[1];
  if (uVar2 < uVar1) {
    return 1;
  }
  return -(uint)(uVar1 < uVar2);
}


/* FUN_006a9f00 @ 006a9f00  kind=gamemisc  attributed-by=none  size=126 */

undefined4 FUN_006a9f00(undefined4 param_1,int param_2)

{
  int in_EAX;
  int iVar1;
  undefined1 local_4 [4];
  
  while (in_EAX != 0) {
    in_EAX = in_EAX + -1;
    iVar1 = FUN_006a9d80(1,0);
    if (iVar1 == 0) {
      return 0xa0;
    }
  }
  iVar1 = FUN_006a9d80(1,local_4);
  while( true ) {
    if (iVar1 == 0) {
      return 0xa0;
    }
    iVar1 = FUN_006a9e10();
    if ((iVar1 == param_2) || (iVar1 == 0x14)) break;
    iVar1 = FUN_006a9d80(1,local_4);
  }
  return 0;
}


/* FUN_006a9f80 @ 006a9f80  kind=gamemisc  attributed-by=none  size=145 */

int FUN_006a9f80(undefined4 *param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  byte *pbVar4;
  byte *unaff_ESI;
  int unaff_EDI;
  bool bVar5;
  
  pbVar4 = (byte *)*param_1;
  iVar3 = 0;
  bVar5 = false;
  if ((pbVar4 != unaff_ESI) && (unaff_EDI - 2U < 0x23)) {
    bVar1 = *pbVar4;
    if ((bVar1 == 0x2d) || (bVar1 == 0x2b)) {
      bVar5 = bVar1 == 0x2d;
      pbVar4 = pbVar4 + 1;
      if (pbVar4 == unaff_ESI) {
        return 0;
      }
    }
    while (((((((pbVar4 < unaff_ESI && (bVar1 = *pbVar4, bVar1 != 0x20)) && (bVar1 != 0xd)) &&
              ((bVar1 != 10 && (bVar1 != 9)))) &&
             ((bVar1 != 0xc && ((bVar1 != 0 && (bVar1 < 0x80)))))) &&
            (cVar2 = (&DAT_00733120)[bVar1 & 0x7f], -1 < cVar2)) && (cVar2 < unaff_EDI))) {
      pbVar4 = pbVar4 + 1;
      iVar3 = iVar3 * unaff_EDI + (int)cVar2;
    }
    if (bVar5) {
      iVar3 = -iVar3;
    }
    *param_1 = pbVar4;
    return iVar3;
  }
  return 0;
}


/* FUN_006aa020 @ 006aa020  kind=gamemisc  attributed-by=none  size=46 */

void FUN_006aa020(void)

{
  char *pcVar1;
  char *in_EAX;
  undefined4 *unaff_EBX;
  
  FUN_006a9f80();
  pcVar1 = (char *)*unaff_EBX;
  if ((pcVar1 < in_EAX) && (*pcVar1 == '#')) {
    *unaff_EBX = pcVar1 + 1;
    FUN_006a9f80();
  }
  return;
}


/* FUN_006aa050 @ 006aa050  kind=gamemisc  attributed-by=none  size=349 */

int FUN_006aa050(uint *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  pbVar4 = (byte *)*param_1;
  iVar6 = 0;
  bVar7 = false;
  if (pbVar4 == param_2) {
    return 0;
  }
  bVar1 = *pbVar4;
  if ((bVar1 == 0x2d) || (bVar1 == 0x2b)) {
    bVar7 = bVar1 == 0x2d;
    pbVar4 = pbVar4 + 1;
    if (pbVar4 == param_2) {
      return 0;
    }
  }
  if (*pbVar4 == 0x2e) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_006aa020();
    iVar2 = iVar2 << 0x10;
  }
  iVar5 = 1;
  if ((param_2 <= pbVar4) || (iVar5 = 1, iVar3 = 1, *pbVar4 != 0x2e)) {
LAB_006aa11f:
    if ((pbVar4 + 1 < param_2) && ((*pbVar4 == 0x65 || (*pbVar4 == 0x45)))) {
      iVar3 = FUN_006aa020();
      param_3 = param_3 + iVar3;
      pbVar4 = pbVar4 + 1;
    }
    for (; 0 < param_3; param_3 = param_3 + -1) {
      iVar2 = iVar2 * 10;
      iVar6 = iVar6 * 10;
    }
    if (param_3 < 0) {
      param_3 = -param_3;
      do {
        iVar2 = iVar2 / 10;
        iVar5 = iVar5 * 10;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
    if (iVar6 != 0) {
      iVar6 = FUN_0068ec40(iVar6,iVar5);
      iVar2 = iVar2 + iVar6;
    }
    if (bVar7) {
      iVar2 = -iVar2;
    }
    *param_1 = (uint)pbVar4;
    return iVar2;
  }
joined_r0x006aa0c3:
  iVar5 = iVar3;
  pbVar4 = pbVar4 + 1;
  if ((((pbVar4 < param_2) &&
       ((((bVar1 = *pbVar4, bVar1 != 0x20 && (bVar1 != 0xd)) && (bVar1 != 10)) &&
        ((bVar1 != 9 && (bVar1 != 0xc)))))) && (bVar1 != 0)) &&
     ((bVar1 < 0x80 && ((byte)(&DAT_00733120)[bVar1 & 0x7f] < 10)))) {
    if ((iVar2 != 0) || (param_3 < 1)) goto LAB_006aa103;
    param_3 = param_3 + -1;
    goto LAB_006aa111;
  }
  goto LAB_006aa11f;
LAB_006aa103:
  iVar3 = iVar5;
  if (iVar5 < 10000000) {
    iVar5 = iVar5 * 10;
LAB_006aa111:
    iVar6 = (int)(char)(&DAT_00733120)[bVar1 & 0x7f] + iVar6 * 10;
    iVar3 = iVar5;
  }
  goto joined_r0x006aa0c3;
}


/* FUN_006aa1c0 @ 006aa1c0  kind=gamemisc  attributed-by=none  size=156 */

int FUN_006aa1c0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  iVar1 = *param_1;
  uVar5 = 0;
  iVar2 = 0;
  uVar4 = 1;
  uVar6 = in_ECX * 2;
  if ((uint)(param_2 - iVar1) < (uint)(in_ECX * 2)) {
    uVar6 = param_2 - iVar1;
  }
  if (uVar6 != 0) {
    do {
      uVar3 = (uint)*(byte *)(iVar1 + uVar5);
      if (((((uVar3 != 0x20) && (uVar3 != 0xd)) && (uVar3 != 10)) &&
          ((uVar3 != 9 && (uVar3 != 0xc)))) && (uVar3 != 0)) {
        if ((0x7f < uVar3) || (0xf < (uint)(int)(char)(&DAT_00733120)[uVar3 & 0x7f])) break;
        uVar4 = uVar4 << 4 | (int)(char)(&DAT_00733120)[uVar3 & 0x7f];
        if ((uVar4 & 0x100) != 0) {
          *(char *)(iVar2 + param_3) = (char)uVar4;
          iVar2 = iVar2 + 1;
          uVar4 = 1;
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
    if (uVar4 != 1) {
      *(char *)(iVar2 + param_3) = (char)uVar4 << 4;
      iVar2 = iVar2 + 1;
    }
  }
  *param_1 = iVar1 + uVar5;
  return iVar2;
}


/* FUN_006aa260 @ 006aa260  kind=gamemisc  attributed-by=none  size=119 */

uint FUN_006aa260(int *param_1,int param_2,uint param_3,ushort *param_4)

{
  int iVar1;
  byte *in_EAX;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  iVar1 = *param_1;
  uVar3 = *param_4;
  uVar4 = (uint)uVar3;
  if ((uint)(param_2 - iVar1) < param_3) {
    param_3 = param_2 - iVar1;
  }
  uVar5 = 0;
  if (param_3 != 0) {
    iVar6 = iVar1 - (int)in_EAX;
    uVar2 = param_3;
    do {
      uVar5 = (in_EAX[iVar6] + uVar4) * -0x3193 + 0x58bf;
      *in_EAX = (byte)(uVar4 >> 8) ^ in_EAX[iVar6];
      uVar4 = uVar5 & 0xffff;
      uVar3 = (ushort)uVar5;
      in_EAX = in_EAX + 1;
      uVar2 = uVar2 - 1;
      uVar5 = param_3;
    } while (uVar2 != 0);
  }
  *param_1 = iVar1 + param_3;
  *param_4 = uVar3;
  return uVar5;
}


/* FUN_006aa2e0 @ 006aa2e0  kind=gamemisc  attributed-by=none  size=246 */

int FUN_006aa2e0(undefined4 *param_1,char *param_2,int param_3,undefined4 *param_4)

{
  char *pcVar1;
  char *pcVar2;
  undefined2 extraout_var;
  char cVar3;
  undefined4 *puVar4;
  char *local_c;
  int local_8;
  undefined4 *local_4;
  
  pcVar1 = param_2;
  local_c = (char *)*param_1;
  local_8 = 0;
  if (param_2 <= local_c) goto LAB_006aa3c7;
  cVar3 = '\0';
  if (*local_c == '[') {
    cVar3 = ']';
LAB_006aa317:
    local_c = local_c + 1;
  }
  else if (*local_c == '{') {
    cVar3 = '}';
    goto LAB_006aa317;
  }
  if (local_c < param_2) {
    local_4 = param_4;
    while (FUN_006a8ef0(), pcVar2 = local_c, local_c < pcVar1) {
      if (*local_c == cVar3) {
        *param_1 = local_c + 1;
        return local_8;
      }
      if (param_4 == (undefined4 *)0x0) {
        puVar4 = &param_2;
      }
      else {
        puVar4 = local_4;
        if (param_3 <= local_8) break;
      }
      FUN_006aa050(&local_c,pcVar1,0);
      *(undefined2 *)puVar4 = extraout_var;
      if (pcVar2 == local_c) {
        local_8 = -1;
        break;
      }
      local_8 = local_8 + 1;
      local_4 = (undefined4 *)((int)local_4 + 2);
      if (cVar3 == '\0') break;
      if (pcVar1 <= local_c) {
        *param_1 = local_c;
        return local_8;
      }
    }
  }
LAB_006aa3c7:
  *param_1 = local_c;
  return local_8;
}


/* FUN_006aa3e0 @ 006aa3e0  kind=gamemisc  attributed-by=none  size=230 */

int FUN_006aa3e0(undefined4 *param_1,char *param_2,int param_3,undefined4 *param_4,
                undefined4 param_5)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  char *local_c;
  undefined4 *local_8;
  undefined4 local_4;
  
  pcVar1 = param_2;
  local_c = (char *)*param_1;
  iVar4 = 0;
  if (param_2 <= local_c) goto LAB_006aa4b8;
  param_2._0_1_ = '\0';
  if (*local_c == '[') {
    param_2._0_1_ = ']';
LAB_006aa419:
    local_c = local_c + 1;
  }
  else if (*local_c == '{') {
    param_2._0_1_ = '}';
    goto LAB_006aa419;
  }
  if (local_c < pcVar1) {
    local_8 = param_4;
    while (FUN_006a8ef0(), pcVar2 = local_c, local_c < pcVar1) {
      if (*local_c == (char)param_2) {
        *param_1 = local_c + 1;
        return iVar4;
      }
      if (param_4 == (undefined4 *)0x0) {
        puVar5 = &local_4;
      }
      else {
        puVar5 = local_8;
        if (param_3 <= iVar4) break;
      }
      uVar3 = FUN_006aa050(&local_c,pcVar1,param_5);
      *puVar5 = uVar3;
      if (pcVar2 == local_c) {
        iVar4 = -1;
        break;
      }
      local_8 = local_8 + 1;
      iVar4 = iVar4 + 1;
      if ((char)param_2 == '\0') break;
      if (pcVar1 <= local_c) {
        *param_1 = local_c;
        return iVar4;
      }
    }
  }
LAB_006aa4b8:
  *param_1 = local_c;
  return iVar4;
}


/* FUN_006aa4d0 @ 006aa4d0  kind=gamemisc  attributed-by=none  size=314 */

void FUN_006aa4d0(int *param_1,int param_2,int param_3,int param_4)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  void *pvVar5;
  size_t _Size;
  void *local_44;
  void *local_40;
  int *local_3c;
  int local_38;
  int *local_34;
  int local_30;
  int local_2c;
  int iStack_28;
  int local_24;
  void *local_20;
  void *local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  int local_c;
  undefined4 uStack_8;
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&local_44;
  local_34 = param_1;
  local_38 = param_2;
  local_24 = param_3;
  FUN_006a92d0(param_1,&local_20);
  if (local_18 == 0) {
LAB_006aa741:
    __security_check_cookie(local_4 ^ (uint)&local_44);
    return;
  }
  iVar3 = 0;
  local_30 = 1;
  local_44 = local_20;
  local_40 = local_1c;
  iVar2 = local_18;
  if (*(int *)(local_38 + 8) == 7) {
    local_2c = param_1[2];
    local_3c = (int *)*param_1;
    *param_1 = (int)local_20 + 1;
    param_1[2] = (int)local_1c + -1;
    FUN_006a92d0(param_1,&local_14);
    *param_1 = (int)local_3c;
    param_1[2] = local_2c;
    iVar2 = local_c;
  }
  if (iVar2 == 3) {
    if (param_4 == 0) goto LAB_006aa741;
    local_44 = (void *)((int)local_20 + 1);
    local_1c = (void *)((int)local_1c + -1);
    local_30 = param_4;
    iVar3 = 1;
    local_40 = local_1c;
    if (param_4 == 0) {
LAB_006aa6da:
      __security_check_cookie(local_4 ^ (uint)&local_44);
      return;
    }
  }
  local_3c = (int *)(local_24 + iVar3 * 4);
  pvVar5 = local_1c;
LAB_006aa5b0:
  piVar4 = (int *)(*local_3c + *(int *)(local_38 + 0x10));
  FUN_006a8ef0();
  switch(*(undefined4 *)(local_38 + 8)) {
  case 1:
    iVar2 = FUN_006a94c0();
    param_1 = local_34;
    pvVar5 = local_40;
    break;
  case 2:
    iVar2 = FUN_006aa020();
    param_1 = local_34;
    break;
  case 3:
    iVar2 = FUN_006aa050(&local_44,pvVar5,0);
    break;
  case 4:
    iVar2 = FUN_006aa050(&local_44,pvVar5,3);
    break;
  case 5:
  case 6:
    iVar2 = param_1[4];
    param_1 = local_34;
    pvVar1 = local_40;
    if (local_40 <= local_44) goto LAB_006aa6c2;
    if (local_18 == 4) {
      iVar3 = -1;
    }
    else {
      if (local_18 != 2) goto LAB_006aa741;
      iVar3 = -2;
    }
    _Size = (int)pvVar5 + (iVar3 - (int)local_44);
    pvVar5 = (void *)((int)local_44 + 1);
    local_44 = pvVar5;
    if (*piVar4 != 0) {
      FUN_00691290(iVar2,*piVar4);
      *piVar4 = 0;
    }
    pvVar1 = (void *)FUN_00692230(iVar2,_Size + 1,&iStack_28);
    if (iStack_28 != 0) goto LAB_006aa6da;
    memcpy(pvVar1,pvVar5,_Size);
    *(undefined1 *)((int)pvVar1 + _Size) = 0;
    *piVar4 = (int)pvVar1;
    param_1 = local_34;
    pvVar1 = local_40;
    goto LAB_006aa6c2;
  case 7:
    iVar2 = FUN_006aa3e0(&local_44,pvVar5,4,&local_14,0);
    if (-1 < iVar2) {
      iVar2 = FUN_0068e970(local_14);
      *piVar4 = iVar2;
      iVar2 = FUN_0068e970(uStack_10);
      piVar4[1] = iVar2;
      iVar2 = FUN_0068e970(local_c);
      piVar4[2] = iVar2;
      iVar2 = FUN_0068e970(uStack_8);
      piVar4[3] = iVar2;
      pvVar1 = pvVar5;
      goto LAB_006aa6c2;
    }
  default:
    goto LAB_006aa741;
  }
  pvVar1 = pvVar5;
  if (*(char *)(local_38 + 0x14) == '\x01') {
    *(char *)piVar4 = (char)iVar2;
  }
  else if (*(char *)(local_38 + 0x14) == '\x02') {
    *(short *)piVar4 = (short)iVar2;
  }
  else {
    *piVar4 = iVar2;
  }
LAB_006aa6c2:
  local_3c = local_3c + 1;
  local_30 = local_30 + -1;
  pvVar5 = pvVar1;
  if (local_30 == 0) goto LAB_006aa6da;
  goto LAB_006aa5b0;
}


/* FUN_006aa8b0 @ 006aa8b0  kind=gamemisc  attributed-by=none  size=24 */

void FUN_006aa8b0(undefined4 param_1)

{
  FUN_006a92c0(param_1);
  FUN_006aa020();
  return;
}


/* FUN_006aa8d0 @ 006aa8d0  kind=gamemisc  attributed-by=none  size=119 */

undefined4
FUN_006aa8d0(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,char param_5)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)param_1;
  FUN_006a92c0(param_1);
  cVar2 = param_5;
  param_1 = (char *)*puVar1;
  if ((char *)puVar1[2] <= param_1) {
    return 0;
  }
  if (param_5 != '\0') {
    if (*param_1 != '<') {
      return 3;
    }
    param_1 = param_1 + 1;
  }
  uVar3 = FUN_006aa1c0(&param_1,(char *)puVar1[2],param_2);
  *param_4 = uVar3;
  if (cVar2 != '\0') {
    if ((param_1 < (char *)puVar1[2]) && (*param_1 != '>')) {
      return 3;
    }
    param_1 = param_1 + 1;
  }
  *puVar1 = param_1;
  return 0;
}


/* FUN_006aa950 @ 006aa950  kind=gamemisc  attributed-by=none  size=31 */

void FUN_006aa950(int param_1,undefined4 param_2)

{
  FUN_006a92c0(param_1);
  FUN_006aa050(param_1,*(undefined4 *)(param_1 + 8),param_2);
  return;
}


/* FUN_006aa970 @ 006aa970  kind=gamemisc  attributed-by=none  size=36 */

void FUN_006aa970(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_006a92c0(param_1);
  FUN_006aa2e0(param_1,*(undefined4 *)(param_1 + 8),param_2,param_3);
  return;
}


/* FUN_006aa9a0 @ 006aa9a0  kind=gamemisc  attributed-by=none  size=41 */

void FUN_006aa9a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_006a92c0(param_1);
  FUN_006aa3e0(param_1,*(undefined4 *)(param_1 + 8),param_2,param_3,param_4);
  return;
}


/* FUN_006aa9f0 @ 006aa9f0  kind=gamemisc  attributed-by=none  size=468 */

int FUN_006aa9f0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int in_EAX;
  int iVar8;
  int in_ECX;
  int in_EDX;
  int local_10;
  int local_4;
  
  if ((*(char *)(in_EDX + 0x5d8) != '\0') ||
     ((param_2 = param_2 + *(int *)(in_EDX + 0x20), *(int *)(in_EDX + 0x54c) == 0 &&
      (*(int *)(*(int *)(*(int *)(in_EDX + 4) + 0x80) + 0x34) == 0)))) {
    return 0xa0;
  }
  local_10 = in_EAX;
  if (*(int *)(*(int *)(*(int *)(in_EDX + 4) + 0x80) + 0x34) == 0) {
    in_ECX = FUN_006a9840();
    local_10 = FUN_006a9840();
  }
  if ((-1 < in_ECX) && (-1 < local_10)) {
    if (*(char *)(in_EDX + 0x45) == '\0') {
      FUN_0068f0a0(*(undefined4 *)(in_EDX + 0xc));
      *(undefined1 *)(in_EDX + 0x5d8) = 1;
      local_4 = FUN_006a98d0();
      *(undefined1 *)(in_EDX + 0x5d8) = 0;
      if (local_4 == 0) {
        uVar4 = *(undefined4 *)(in_EDX + 0x28);
        uVar5 = *(undefined4 *)(in_EDX + 0x2c);
        uVar6 = *(undefined4 *)(in_EDX + 0x20);
        uVar7 = *(undefined4 *)(in_EDX + 0x24);
        *(undefined4 *)(in_EDX + 0x20) = 0;
        *(undefined4 *)(in_EDX + 0x24) = 0;
        *(int *)(in_EDX + 0x18) = param_2 - param_1;
        *(undefined4 *)(in_EDX + 0x1c) = param_3;
        *(undefined1 *)(in_EDX + 0x5d8) = 1;
        local_4 = FUN_006a98d0();
        *(undefined1 *)(in_EDX + 0x5d8) = 0;
        if (local_4 == 0) {
          *(undefined4 *)(in_EDX + 0x20) = uVar6;
          *(undefined4 *)(in_EDX + 0x24) = uVar7;
          *(undefined4 *)(in_EDX + 0x28) = uVar4;
          *(undefined4 *)(in_EDX + 0x2c) = uVar5;
          *(undefined4 *)(in_EDX + 0x18) = 0;
          *(undefined4 *)(in_EDX + 0x1c) = 0;
        }
      }
    }
    else {
      iVar1 = *(int *)(in_EDX + 8);
      iVar2 = **(int **)(iVar1 + 0x9c);
      local_4 = FUN_00693db0(iVar2,2);
      if (local_4 == 0) {
        piVar3 = *(int **)(iVar2 + 0x58);
        *(undefined2 *)(piVar3 + 1) = 0x202;
        *piVar3 = in_ECX;
        piVar3[2] = 0;
        piVar3[3] = 0;
        piVar3[8] = local_10;
        *(undefined2 *)(piVar3 + 9) = 2;
        iVar8 = FUN_0068e970(param_2 - param_1);
        piVar3[10] = iVar8 >> 0x10;
        iVar8 = FUN_0068e970(param_3);
        piVar3[0xb] = iVar8 >> 0x10;
        *(undefined4 *)(iVar1 + 0x80) = 2;
        *(undefined4 *)(iVar1 + 0x84) = *(undefined4 *)(iVar2 + 0x34);
        *(undefined4 *)(iVar1 + 0x48) = 0x636f6d70;
        *(undefined4 *)(iVar2 + 0x54) = 2;
        return 0;
      }
    }
    return local_4;
  }
  return 0xa0;
}


/* FUN_006aabd0 @ 006aabd0  kind=gamemisc  attributed-by=none  size=742 */

undefined4 FUN_006aabd0(int param_1,byte *param_2,uint param_3)

{
  uint *puVar1;
  byte bVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  uint *puVar12;
  byte *pbVar13;
  uint uVar14;
  undefined4 *puVar15;
  uint *local_38;
  byte *pbStack_28;
  int local_24;
  uint local_1c;
  uint *puStack_18;
  undefined4 *local_14;
  uint local_10;
  byte *pbStack_c;
  byte *pbStack_8;
  int local_4;
  
  iVar9 = param_1;
  uVar6 = (uint)&local_1c ^ (uint)&param_1 ^ (uint)&param_2;
  local_1c = ((int)((int)uVar6 >> 10 ^ uVar6) >> 10 ^ uVar6) & 0xffff;
  local_4 = param_1;
  local_24 = 0;
  if (local_1c == 0) {
    local_1c = 0x7384;
  }
  *(int *)(param_1 + 0x470) = param_1 + 0x70;
  *(int *)(param_1 + 0x540) = param_1 + 0x474;
  puVar3 = *(undefined4 **)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x40) = 0;
  puVar15 = (undefined4 *)(param_1 + 0x474);
  local_14 = puVar15;
  if (*(int *)(param_1 + 0x5d4) != 0) {
    memset(*(void **)(param_1 + 0x5d0),0,*(int *)(param_1 + 0x5d4) * 4);
  }
  pbStack_28 = param_2;
  *(byte **)(iVar9 + 0x478) = param_2;
  pbVar7 = param_2 + param_3;
  *(byte **)(iVar9 + 0x47c) = pbVar7;
  *puVar15 = param_2;
  uVar6 = *(uint *)(iVar9 + 0x18);
  uVar4 = *(uint *)(iVar9 + 0x1c);
  local_10 = uVar6;
  if (puVar3 != (undefined4 *)0x0) {
    (*(code *)puVar3[1])(*puVar3);
  }
  param_3 = param_3 & 0xffffff00;
  if (pbVar7 <= pbStack_28) {
    return 0;
  }
  do {
    puStack_18 = *(uint **)(param_1 + 0x470);
    pbVar13 = pbStack_28 + 1;
    uVar8 = 0;
    iVar11 = 0;
    switch(*pbStack_28) {
    case 1:
      uVar8 = 0x10;
      pbStack_28 = pbVar13;
      break;
    default:
      bVar2 = *pbStack_28;
      if (bVar2 < 0x20) {
        return 0xa0;
      }
      if (bVar2 < 0xf7) {
        iVar11 = bVar2 - 0x8b;
        pbStack_28 = pbVar13;
      }
      else {
        pbVar13 = pbStack_28 + 2;
        if (pbVar7 < pbVar13) {
          return 0xa0;
        }
        bVar2 = *pbStack_28;
        if (bVar2 < 0xfb) {
          iVar11 = (uint)bVar2 * 0x100 + -0xf694 + (uint)pbStack_28[1];
          pbStack_28 = pbVar13;
        }
        else {
          iVar11 = ((uint)bVar2 * -0x100 + 0xfa94) - (uint)pbStack_28[1];
          pbStack_28 = pbVar13;
        }
      }
LAB_006aaee1:
      if ((char)param_3 == '\0') {
        iVar11 = iVar11 << 0x10;
      }
      break;
    case 3:
      uVar8 = 0x12;
      pbStack_28 = pbVar13;
      break;
    case 4:
      uVar8 = 0xe;
      pbStack_28 = pbVar13;
      break;
    case 5:
      uVar8 = 9;
      pbStack_28 = pbVar13;
      break;
    case 6:
      uVar8 = 6;
      pbStack_28 = pbVar13;
      break;
    case 7:
      uVar8 = 0xd;
      pbStack_28 = pbVar13;
      break;
    case 8:
      uVar8 = 0xb;
      pbStack_28 = pbVar13;
      break;
    case 9:
      uVar8 = 5;
      pbStack_28 = pbVar13;
      break;
    case 10:
      uVar8 = 0x16;
      pbStack_28 = pbVar13;
      break;
    case 0xb:
      uVar8 = 0x18;
      pbStack_28 = pbVar13;
      break;
    case 0xc:
      if (pbVar7 < pbVar13) {
        return 0xa0;
      }
      pbStack_28 = pbStack_28 + 2;
      switch(*pbVar13) {
      case 0:
        uVar8 = 0xf;
        break;
      case 1:
        uVar8 = 0x13;
        break;
      case 2:
        uVar8 = 0x11;
        break;
      default:
        goto switchD_006aadd5_caseD_3;
      case 6:
        uVar8 = 3;
        break;
      case 7:
        uVar8 = 4;
        break;
      case 0xc:
        uVar8 = 0x14;
        break;
      case 0x10:
        uVar8 = 0x15;
        break;
      case 0x11:
        uVar8 = 0x17;
        break;
      case 0x21:
        uVar8 = 0x19;
      }
      break;
    case 0xd:
      uVar8 = 2;
      pbStack_28 = pbVar13;
      break;
    case 0xe:
      uVar8 = 1;
      pbStack_28 = pbVar13;
      break;
    case 0xf:
      uVar8 = 0x1a;
      pbStack_28 = pbVar13;
      break;
    case 0x15:
      uVar8 = 10;
      pbStack_28 = pbVar13;
      break;
    case 0x16:
      uVar8 = 7;
      pbStack_28 = pbVar13;
      break;
    case 0x1e:
      uVar8 = 0xc;
      pbStack_28 = pbVar13;
      break;
    case 0x1f:
      uVar8 = 8;
      pbStack_28 = pbVar13;
      break;
    case 0xff:
      pbStack_8 = pbStack_28 + 5;
      if (pbVar7 < pbStack_8) {
        return 0xa0;
      }
      iVar11 = CONCAT31(CONCAT21(CONCAT11(*pbVar13,pbStack_28[2]),pbStack_28[3]),pbStack_28[4]);
      pbStack_28 = pbStack_8;
      if (iVar11 + 32000U < 0xfa01) goto LAB_006aaee1;
      if ((char)param_3 == '\0') {
        param_3 = CONCAT31(param_3._1_3_,1);
      }
    }
    if (((0 < local_24) && (uVar8 != 0)) && ((uVar8 < 0x16 || (0x18 < uVar8)))) {
      local_24 = 0;
    }
    if ((char)param_3 != '\0') {
      if (uVar8 != 0) {
        if (uVar8 != 0x14) {
          param_3 = param_3 & 0xffffff00;
        }
        goto LAB_006aaf1c;
      }
LAB_006aaf20:
      if (0x3ff < (int)((int)puStack_18 + (-0x70 - param_1) & 0xfffffffcU)) {
switchD_006aadd5_caseD_3:
        return 0xa0;
      }
      *puStack_18 = iVar11;
      *(uint **)(param_1 + 0x470) = puStack_18 + 1;
      goto LAB_006ab89c;
    }
LAB_006aaf1c:
    if (uVar8 == 0) goto LAB_006aaf20;
    if (uVar8 != 0x15) {
      if ((int)puStack_18 + (-0x70 - param_1) >> 2 < (int)(&DAT_00732f88)[uVar8]) {
        return 0xa1;
      }
      if (0x19 < uVar8 - 1) {
        return 0xa0;
      }
      uVar10 = (*(code *)(&PTR_LAB_006abb50)[uVar8 - 1])();
      return uVar10;
    }
    if ((int)((int)puStack_18 + (-0x70 - param_1) & 0xfffffffcU) < 8) {
      return 0xa1;
    }
    pbStack_c = (byte *)(int)*(short *)((int)puStack_18 + -2);
    iVar11 = (int)*(short *)((int)puStack_18 + -6);
    if ((int)puStack_18 + (-0x78 - param_1) >> 2 < iVar11) {
      return 0xa1;
    }
    puVar1 = puStack_18 + (-2 - iVar11);
    local_38 = (uint *)0x0;
    local_24 = 0;
    puStack_18 = puVar1;
    switch(pbStack_c) {
    case (byte *)0x0:
      if (iVar11 != 3) {
        return 0xa0;
      }
      if (*(int *)(param_1 + 0x578) == 0) {
        return 0xa0;
      }
      if (*(int *)(param_1 + 0x57c) != 7) {
        return 0xa0;
      }
      *puVar1 = uVar6;
      puVar1[1] = uVar4;
      *(uint **)(param_1 + 0x470) = puVar1 + 2;
      break;
    case (byte *)0x1:
      if (iVar11 != 0) {
        return 0xa0;
      }
      *(undefined4 *)(param_1 + 0x578) = 1;
      *(undefined4 *)(param_1 + 0x57c) = 0;
      iVar11 = FUN_006a9770(iVar9,uVar6,uVar4);
      if (iVar11 != 0) {
        return 0;
      }
      iVar11 = FUN_006a9620(iVar9,6);
      if (iVar11 != 0) {
        return 0;
      }
      *(uint **)(param_1 + 0x470) = puVar1;
      break;
    case (byte *)0x2:
      if (iVar11 != 0) {
        return 0xa0;
      }
      uVar8 = *(uint *)(param_1 + 0x57c);
      *(uint *)(param_1 + 0x57c) = uVar8 + 1;
      if (uVar8 - 1 < 6) {
        if ((uVar8 == 3) || (uVar8 == 6)) {
          FUN_006a9660(iVar9,uVar6,uVar4,1);
          *(uint **)(param_1 + 0x470) = puVar1;
        }
        else {
          FUN_006a9660(iVar9,uVar6,uVar4,uVar8 & 0xffffff00);
          *(uint **)(param_1 + 0x470) = puVar1;
        }
        break;
      }
      goto LAB_006ab2a8;
    case (byte *)0x3:
      if (iVar11 != 1) {
        return 0xa0;
      }
      local_38 = (uint *)0x1;
      if (puVar3 == (undefined4 *)0x0) goto LAB_006ab2a8;
      (*(code *)puVar3[5])(*puVar3,(int)*(short *)(*(int *)(iVar9 + 0x14) + 2));
      *(uint **)(param_1 + 0x470) = puVar1 + 1;
      break;
    default:
      *(uint **)(param_1 + 0x470) = puVar1;
      local_24 = iVar11;
      break;
    case (byte *)0xc:
    case (byte *)0xd:
      *(int *)(param_1 + 0x470) = param_1 + 0x70;
      break;
    case (byte *)0xe:
    case (byte *)0xf:
    case (byte *)0x10:
    case (byte *)0x11:
    case (byte *)0x12:
      puVar5 = *(uint **)(param_1 + 0x5b8);
      if (puVar5 == (uint *)0x0) {
        return 0xa0;
      }
      pbStack_8 = (byte *)(((pbStack_c == (byte *)0x12) - 0xd) + (int)pbStack_c);
      if (iVar11 != *puVar5 * (int)pbStack_8) {
        return 0xa0;
      }
      puVar12 = puVar1 + (int)pbStack_8;
      local_38 = puVar1;
      pbVar13 = pbStack_8;
      if (pbStack_8 != (byte *)0x0) {
        do {
          pbStack_c = pbVar13;
          uVar8 = *local_38;
          uVar14 = 1;
          if (1 < *puVar5) {
            do {
              iVar9 = FUN_0068ebc0(*puVar12,*(undefined4 *)(puVar5[0x22] + uVar14 * 4));
              uVar14 = uVar14 + 1;
              uVar8 = uVar8 + iVar9;
              puVar12 = puVar12 + 1;
            } while (uVar14 < *puVar5);
          }
          *local_38 = uVar8;
          local_38 = local_38 + 1;
          pbVar13 = pbStack_c + -1;
        } while (pbStack_c + -1 != (byte *)0x0);
        pbStack_c = (byte *)0x0;
      }
      *(uint **)(param_1 + 0x470) = puStack_18 + (int)pbStack_8;
      iVar9 = local_4;
      break;
    case (byte *)0x13:
      if (iVar11 != 1) {
        return 0xa0;
      }
      if (*(uint **)(param_1 + 0x5b8) == (uint *)0x0) {
        return 0xa0;
      }
      iVar11 = (int)*(short *)((int)puVar1 + 2);
      if (iVar11 < 0) {
        return 0xa0;
      }
      pbStack_8 = (byte *)**(uint **)(param_1 + 0x5b8);
      if (*(byte **)(param_1 + 0x5d4) < pbStack_8 + iVar11) {
        return 0xa0;
      }
      memcpy((void *)(*(int *)(param_1 + 0x5d0) + iVar11 * 4),
             *(void **)(*(int *)(param_1 + 0x5b8) + 0x88),(int)pbStack_8 * 4);
      *(uint **)(param_1 + 0x470) = puVar1;
      break;
    case (byte *)0x14:
      if (iVar11 != 2) {
        return 0xa0;
      }
      *puVar1 = *puVar1 + puVar1[1];
      goto LAB_006ab29c;
    case (byte *)0x15:
      if (iVar11 != 2) {
        return 0xa0;
      }
      *puVar1 = *puVar1 - puVar1[1];
      goto LAB_006ab29c;
    case (byte *)0x16:
      if (iVar11 != 2) {
        return 0xa0;
      }
      uVar8 = FUN_0068ebc0(*puVar1,puVar1[1]);
      goto LAB_006ab29a;
    case (byte *)0x17:
      if (iVar11 != 2) {
        return 0xa0;
      }
      if (puVar1[1] == 0) {
        return 0xa0;
      }
      uVar8 = FUN_0068ec40(*puVar1,puVar1[1]);
      goto LAB_006ab29a;
    case (byte *)0x18:
      if (iVar11 != 2) {
        return 0xa0;
      }
      if (*(int *)(param_1 + 0x5b8) == 0) {
        return 0xa0;
      }
      uVar8 = (uint)*(short *)((int)puVar1 + 6);
      if ((int)uVar8 < 0) {
        return 0xa0;
      }
      if (*(uint *)(param_1 + 0x5d4) <= uVar8) {
        return 0xa0;
      }
      *(uint *)(*(int *)(param_1 + 0x5d0) + uVar8 * 4) = *puVar1;
      *(uint **)(param_1 + 0x470) = puVar1;
      break;
    case (byte *)0x19:
      if (iVar11 != 1) {
        return 0xa0;
      }
      if (*(int *)(param_1 + 0x5b8) == 0) {
        return 0xa0;
      }
      uVar8 = (uint)*(short *)((int)puVar1 + 2);
      if ((int)uVar8 < 0) {
        return 0xa0;
      }
      if (*(uint *)(param_1 + 0x5d4) <= uVar8) {
        return 0xa0;
      }
      uVar8 = *(uint *)(*(int *)(param_1 + 0x5d0) + uVar8 * 4);
LAB_006ab29a:
      *puVar1 = uVar8;
      goto LAB_006ab29c;
    case (byte *)0x1b:
      if (iVar11 != 4) {
        return 0xa0;
      }
      if ((int)puVar1[3] < (int)puVar1[2]) {
        *puVar1 = puVar1[1];
      }
      *(uint **)(param_1 + 0x470) = puVar1 + 1;
      break;
    case (byte *)0x1c:
      if (iVar11 != 0) {
        return 0xa0;
      }
      uVar8 = local_1c;
      if (0x7fff < (int)local_1c) {
        uVar8 = local_1c + 1;
      }
      *puVar1 = uVar8;
      local_1c = FUN_0068ebc0(local_1c,0x10000 - local_1c);
      if (local_1c == 0) {
        local_1c = 0x2873;
      }
LAB_006ab29c:
      local_38 = (uint *)0x1;
LAB_006ab2a8:
      *(uint **)(param_1 + 0x470) = puVar1 + (int)local_38;
    }
LAB_006ab89c:
    if (pbVar7 <= pbStack_28) {
      return 0;
    }
  } while( true );
}


/* FUN_006abbc0 @ 006abbc0  kind=gamemisc  attributed-by=none  size=300 */

uint FUN_006abbc0(char *param_1,uint param_2)

{
  char *pcVar1;
  char *_Str1;
  void *_Dst;
  int in_ECX;
  int iVar2;
  size_t _Size;
  int *piVar3;
  undefined8 uVar4;
  uint local_c;
  int iStack_4;
  
  pcVar1 = param_1;
  if (5 < param_2) {
    return 0;
  }
  local_c = 0;
  if (param_2 != 0) {
    piVar3 = (int *)(in_ECX + 4);
    do {
      if (piVar3[-1] == 0) {
        uVar4 = FUN_006a9d30();
      }
      else {
        uVar4 = FUN_006a9cc0();
      }
      _Str1 = (char *)uVar4;
      if (_Str1 == (char *)0x0) {
        return local_c;
      }
      iVar2 = *(int *)((ulonglong)uVar4 >> 0x20) - (int)_Str1;
      _Size = iVar2 - 1;
      param_1 = _Str1;
      switch(piVar3[-1]) {
      case 0:
      case 1:
        _Dst = (void *)FUN_00691240(*(undefined4 *)pcVar1,iVar2,&iStack_4);
        *piVar3 = (int)_Dst;
        if (iStack_4 == 0) {
          memcpy(_Dst,_Str1,_Size);
          *(undefined1 *)(_Size + *piVar3) = 0;
        }
        break;
      case 2:
        iVar2 = FUN_006aa050(&param_1,_Str1 + _Size,0);
        *piVar3 = iVar2;
        break;
      case 3:
        iVar2 = FUN_006aa020();
        *piVar3 = iVar2;
        break;
      case 4:
        if ((_Size == 4) && (iVar2 = strncmp(_Str1,"true",4), iVar2 == 0)) {
          *(undefined1 *)piVar3 = 1;
        }
        else {
          *(undefined1 *)piVar3 = 0;
        }
        break;
      case 5:
        if (*(code **)(pcVar1 + 0xc) == (code *)0x0) {
          *piVar3 = 0;
        }
        else {
          iVar2 = (**(code **)(pcVar1 + 0xc))(_Str1,_Size,*(undefined4 *)(pcVar1 + 0x10));
          *piVar3 = iVar2;
        }
      }
      local_c = local_c + 1;
      piVar3 = piVar3 + 2;
    } while (local_c < param_2);
  }
  return local_c;
}


/* FUN_006abd10 @ 006abd10  kind=gamemisc  attributed-by=none  size=56 */

undefined4 FUN_006abd10(undefined4 *param_1)

{
  int iVar1;
  undefined4 local_4;
  
  iVar1 = FUN_006abbc0();
  if (iVar1 == 1) {
    *param_1 = local_4;
    return 0;
  }
  return 0xa0;
}


/* FUN_006abd50 @ 006abd50  kind=gamemisc  attributed-by=none  size=205 */

void FUN_006abd50(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int local_40;
  int local_3c;
  int local_38;
  int *local_34;
  int local_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  int iStack_8;
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&local_40;
  iVar3 = param_1[2];
  piVar5 = (int *)(iVar3 + 0x20);
  local_3c = -1;
  local_34 = piVar5;
  local_30 = iVar3;
  iVar1 = FUN_006abd10(piVar5);
  if (iVar1 == 0) {
    if (*piVar5 != 0) {
      uVar2 = FUN_00693a60(*param_1,0x14,0,*piVar5,0,&local_40);
      *(undefined4 *)(iVar3 + 0x1c) = uVar2;
      if (local_40 != 0) goto LAB_006abea8;
    }
    iVar3 = FUN_006a9d80(1,&local_40);
    if (iVar3 != 0) {
      local_38 = -0x14;
LAB_006abde0:
      uVar2 = FUN_006a9e10();
      switch(uVar2) {
      case 0x14:
      case 0x15:
      case 0x17:
        *piVar5 = local_3c + 1;
        __security_check_cookie(local_4 ^ (uint)&local_40);
        return;
      default:
        break;
      case 0x38:
        goto LAB_006abe05;
      case 0x4b:
        goto LAB_006abe8a;
      }
    }
  }
LAB_006abea3:
LAB_006abea8:
  __security_check_cookie(local_4 ^ (uint)&local_40);
  return;
LAB_006abe05:
  local_38 = local_38 + 0x14;
  local_3c = local_3c + 1;
  if (*piVar5 <= local_3c) goto LAB_006abea3;
  piVar4 = (int *)(*(int *)(local_30 + 0x1c) + local_38);
  uStack_2c = 3;
  uStack_24 = 2;
  uStack_1c = 2;
  uStack_14 = 2;
  uStack_c = 2;
  iVar3 = FUN_006abbc0(param_1,5);
  if (iVar3 != 5) goto LAB_006abea3;
  piVar4[1] = iStack_20;
  piVar4[3] = iStack_10;
  *piVar4 = iStack_28;
  piVar4[2] = iStack_18;
  piVar4[4] = iStack_8;
  piVar5 = local_34;
  if ((iStack_28 < 0) && (0 < iStack_18)) {
    piVar4[2] = -iStack_18;
  }
LAB_006abe8a:
  iVar3 = FUN_006a9d80(1,&local_40);
  if (iVar3 == 0) goto LAB_006abea3;
  goto LAB_006abde0;
}


/* FUN_006abf20 @ 006abf20  kind=gamemisc  attributed-by=none  size=422 */

void FUN_006abf20(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&local_34;
  iVar5 = param_1[2];
  local_30 = -1;
  local_28 = iVar5;
  iVar1 = FUN_006abd10((int *)(iVar5 + 0x28));
  if (iVar1 == 0) {
    iVar1 = *(int *)(iVar5 + 0x28);
    if (iVar1 != 0) {
      uVar2 = FUN_00693a60(*param_1,0x10,0,iVar1,0,&local_34);
      *(undefined4 *)(iVar5 + 0x24) = uVar2;
      if (local_34 != 0) goto LAB_006ac082;
    }
    iVar1 = FUN_006a9d80(1,&local_34);
    if (iVar1 != 0) {
      local_2c = -0x10;
LAB_006abfb0:
      iVar1 = FUN_006a9e10();
      switch(iVar1) {
      case 0x14:
      case 0x15:
      case 0x16:
        *(size_t *)(iVar5 + 0x28) = local_30 + 1U;
        qsort(*(void **)(iVar5 + 0x24),local_30 + 1U,0x10,FUN_006a9ed0);
        __security_check_cookie(local_4 ^ (uint)&local_34);
        return;
      default:
        break;
      case 0x22:
      case 0x24:
      case 0x25:
        goto switchD_006abfd0_caseD_22;
      case 0x4b:
        goto switchD_006abfd0_caseD_4b;
      }
    }
  }
switchD_006abfd0_caseD_17:
LAB_006ac082:
  __security_check_cookie(local_4 ^ (uint)&local_34);
  return;
switchD_006abfd0_caseD_22:
  local_2c = local_2c + 0x10;
  local_30 = local_30 + 1;
  if (*(int *)(iVar5 + 0x28) <= local_30) goto switchD_006abfd0_caseD_17;
  puVar4 = (undefined4 *)(*(int *)(iVar5 + 0x24) + local_2c);
  local_24 = 5;
  local_1c = 5;
  local_14 = 3;
  local_c = 3;
  iVar3 = FUN_006abbc0(param_1,4);
  if (iVar3 < 3) goto switchD_006abfd0_caseD_17;
  *puVar4 = local_20;
  puVar4[1] = local_18;
  iVar5 = local_28;
  if (iVar1 == 0x25) {
    puVar4[2] = 0;
    puVar4[3] = local_10;
  }
  else {
    puVar4[2] = local_10;
    if ((iVar1 != 0x22) || (uVar2 = local_8, iVar3 != 4)) {
      uVar2 = 0;
    }
    puVar4[3] = uVar2;
  }
switchD_006abfd0_caseD_4b:
  iVar1 = FUN_006a9d80(1,&local_34);
  if (iVar1 == 0) goto switchD_006abfd0_caseD_17;
  goto LAB_006abfb0;
}


/* FUN_006ac110 @ 006ac110  kind=gamemisc  attributed-by=none  size=116 */

int FUN_006ac110(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_4 [4];
  
  iVar1 = FUN_006a9d80(1,local_4);
  while (iVar1 != 0) {
    uVar2 = FUN_006a9e10();
    switch(uVar2) {
    case 0x14:
    case 0x15:
      return 0;
    default:
      goto LAB_006ac180;
    case 0x32:
    case 0x33:
      iVar1 = FUN_006abf20();
      break;
    case 0x35:
      iVar1 = FUN_006abd50();
      break;
    case 0x4b:
      goto switchD_006ac14a_caseD_4b;
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_006ac14a_caseD_4b:
    iVar1 = FUN_006a9d80(1,local_4);
  }
LAB_006ac180:
  return 0xa0;
}


/* FUN_006ac1e0 @ 006ac1e0  kind=gamemisc  attributed-by=none  size=318 */

void FUN_006ac1e0(undefined4 *param_1)

{
  char *_Str1;
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 *local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint local_c;
  
  local_c = DAT_0076aa78 ^ (uint)&local_44;
  puVar3 = (undefined1 *)param_1[2];
  local_30 = *param_1;
  local_3c = 0xa0;
  local_38 = 0;
  local_44 = puVar3;
  if (puVar3 == (undefined1 *)0x0) {
    __security_check_cookie(local_c ^ (uint)&local_44);
    return;
  }
  _Str1 = (char *)FUN_006a9d80(1,&local_40);
  if (((_Str1 == (char *)0x0) || (local_40 != 0x10)) ||
     (iVar1 = strncmp(_Str1,"StartFontMetrics",0x10), iVar1 != 0)) {
LAB_006ac46e:
    __security_check_cookie(local_c ^ (uint)&local_44);
    return;
  }
  iVar1 = FUN_006a9d80(1,&local_40);
  do {
    if (iVar1 == 0) {
LAB_006ac2d7:
      uVar2 = local_30;
      FUN_00691290(local_30,*(undefined4 *)(puVar3 + 0x1c));
      *(undefined4 *)(puVar3 + 0x1c) = 0;
      *(undefined4 *)(puVar3 + 0x20) = 0;
      FUN_00691290(uVar2,*(undefined4 *)(puVar3 + 0x24));
      *(undefined4 *)(puVar3 + 0x24) = 0;
      *(undefined4 *)(puVar3 + 0x28) = 0;
      *puVar3 = 0;
      __security_check_cookie(local_c ^ (uint)&local_44);
      return;
    }
    uVar2 = FUN_006a9e10();
    switch(uVar2) {
    case 0:
      uStack_2c = 2;
      iVar1 = FUN_006abbc0(param_1,1);
      puVar3 = local_44;
      if (iVar1 != 1) goto LAB_006ac2d7;
      *(undefined4 *)(local_44 + 0x14) = uStack_28;
      break;
    case 0xe:
      uStack_2c = 2;
      iVar1 = FUN_006abbc0(param_1,1);
      puVar3 = local_44;
      if (iVar1 != 1) goto LAB_006ac2d7;
      *(undefined4 *)(local_44 + 0x18) = uStack_28;
      break;
    case 0x14:
      goto LAB_006ac455;
    case 0x1a:
      uStack_2c = 2;
      uStack_24 = 2;
      uStack_1c = 2;
      uStack_14 = 2;
      iVar1 = FUN_006abbc0(param_1,4);
      puVar3 = local_44;
      if (iVar1 != 4) goto LAB_006ac2d7;
      *(undefined4 *)(local_44 + 4) = uStack_28;
      *(undefined4 *)(local_44 + 8) = uStack_20;
      *(undefined4 *)(local_44 + 0xc) = uStack_18;
      *(undefined4 *)(local_44 + 0x10) = uStack_10;
      break;
    case 0x1e:
      uStack_2c = 4;
      iVar1 = FUN_006abbc0(param_1,1);
      puVar3 = local_44;
      if (iVar1 != 1) goto LAB_006ac2d7;
      *local_44 = (undefined1)uStack_28;
      break;
    case 0x28:
      iVar1 = FUN_006abd10(&local_38);
      puVar3 = local_44;
      if (iVar1 != 0) goto LAB_006ac2d7;
      if ((local_38 != 0) && (local_38 != 2)) {
        local_3c = 7;
        goto LAB_006ac2d7;
      }
      break;
    case 0x2d:
      uStack_34 = 0;
      iVar1 = FUN_006abd10(&uStack_34);
      puVar3 = local_44;
      if (iVar1 != 0) goto LAB_006ac2d7;
      local_3c = FUN_006a9f00(param_1,0x11);
      if (local_3c != 0) goto LAB_006ac46e;
      break;
    case 0x31:
      local_3c = FUN_006ac110();
      puVar3 = local_44;
      if (local_3c == 0) {
LAB_006ac455:
        __security_check_cookie(local_c ^ (uint)&local_44);
        return;
      }
      goto LAB_006ac2d7;
    }
    iVar1 = FUN_006a9d80(1,&local_40);
    puVar3 = local_44;
  } while( true );
}


/* FUN_006ac4e0 @ 006ac4e0  kind=gamemisc  attributed-by=none  size=61 */

void FUN_006ac4e0(void)

{
  int in_EAX;
  uint uVar1;
  byte *in_EDX;
  
  for (; in_EAX != 0; in_EAX = in_EAX + -1) {
    uVar1 = *in_EDX >> 1 & 0x55 | (*in_EDX & 0x55) * 2;
    uVar1 = uVar1 >> 2 & 0x33 | (uVar1 & 0x33) * 4;
    *in_EDX = (byte)(uVar1 >> 4) | (char)uVar1 << 4;
    in_EDX = in_EDX + 1;
  }
  return;
}


/* FUN_006ac520 @ 006ac520  kind=gamemisc  attributed-by=none  size=34 */

void FUN_006ac520(void)

{
  undefined1 uVar1;
  undefined1 *in_EAX;
  uint in_ECX;
  uint uVar2;
  
  if (1 < in_ECX) {
    uVar2 = in_ECX >> 1;
    do {
      uVar1 = *in_EAX;
      *in_EAX = in_EAX[1];
      in_EAX[1] = uVar1;
      in_EAX = in_EAX + 2;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}


/* FUN_006ac550 @ 006ac550  kind=gamemisc  attributed-by=none  size=48 */

void FUN_006ac550(void)

{
  undefined1 uVar1;
  int in_EAX;
  undefined1 *puVar2;
  uint in_ECX;
  uint uVar3;
  
  if (3 < in_ECX) {
    puVar2 = (undefined1 *)(in_EAX + 1);
    uVar3 = in_ECX >> 2;
    do {
      uVar1 = puVar2[-1];
      puVar2[-1] = puVar2[2];
      puVar2[2] = uVar1;
      uVar1 = *puVar2;
      *puVar2 = puVar2[1];
      puVar2[1] = uVar1;
      puVar2 = puVar2 + 4;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}


/* FUN_006ac580 @ 006ac580  kind=gamemisc  attributed-by=none  size=482 */

int FUN_006ac580(undefined4 param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  uint local_c;
  
  iVar9 = param_2;
  uVar2 = *(undefined4 *)(param_2 + 100);
  piVar1 = (int *)(param_2 + 0xb8);
  param_2 = FUN_006908c0(param_1,0);
  if ((param_2 != 0) || (param_2 = FUN_00692010(param_1,&DAT_007331b0,piVar1), param_2 != 0)) {
    return 1;
  }
  if (((*piVar1 == 0x70636601) && (uVar12 = *(uint *)(iVar9 + 0xbc), uVar12 < 0x8000000)) &&
     (uVar12 != 0)) {
    iVar10 = FUN_00693a60(uVar2,0x10,0,uVar12,0,&param_2);
    *(int *)(iVar9 + 0xc0) = iVar10;
    if (param_2 != 0) {
      return 0x40;
    }
    uVar12 = 0;
    if (*(int *)(iVar9 + 0xbc) != 0) {
      do {
        param_2 = FUN_00692010(param_1,&DAT_007331c0,iVar10);
        if (param_2 != 0) {
          FUN_00691290(uVar2,*(undefined4 *)(iVar9 + 0xc0));
          *(undefined4 *)(iVar9 + 0xc0) = 0;
          return param_2;
        }
        uVar12 = uVar12 + 1;
        iVar10 = iVar10 + 0x10;
        param_2 = 0;
      } while (uVar12 < *(uint *)(iVar9 + 0xbc));
    }
    iVar10 = *(int *)(iVar9 + 0xbc);
    iVar3 = *(int *)(iVar9 + 0xc0);
    local_c = 0;
    if (iVar10 != 1) {
      do {
        bVar8 = false;
        if (iVar10 - local_c == 1) {
          return 0;
        }
        puVar11 = (uint *)(iVar3 + 0x1c);
        uVar12 = 0;
        do {
          if (*puVar11 < puVar11[-4]) {
            uVar4 = puVar11[-5];
            uVar5 = puVar11[-4];
            uVar6 = puVar11[-7];
            uVar7 = puVar11[-6];
            puVar11[-7] = puVar11[-3];
            puVar11[-6] = puVar11[-2];
            puVar11[-5] = puVar11[-1];
            puVar11[-3] = uVar6;
            puVar11[-2] = uVar7;
            puVar11[-1] = uVar4;
            puVar11[-4] = *puVar11;
            *puVar11 = uVar5;
            bVar8 = true;
          }
          if ((*puVar11 < puVar11[-5]) || (*puVar11 - puVar11[-5] < puVar11[-4])) {
            return 9;
          }
          uVar12 = uVar12 + 1;
          puVar11 = puVar11 + 4;
        } while (uVar12 < (*(int *)(iVar9 + 0xbc) - local_c) - 1);
        if (!bVar8) {
          return 0;
        }
        iVar10 = *(int *)(iVar9 + 0xbc);
        local_c = local_c + 1;
      } while (local_c < iVar10 - 1U);
    }
    return 0;
  }
  return 3;
}


/* FUN_006ac770 @ 006ac770  kind=gamemisc  attributed-by=none  size=134 */

void FUN_006ac770(void)

{
  uint in_EAX;
  int iVar1;
  short *unaff_ESI;
  byte local_8;
  byte local_7;
  byte local_6;
  byte local_5;
  byte local_4;
  
  if ((in_EAX & 0xffffff00) == 0) {
    FUN_00692010();
    return;
  }
  iVar1 = FUN_00692010();
  if (iVar1 == 0) {
    *unaff_ESI = local_8 - 0x80;
    unaff_ESI[1] = local_7 - 0x80;
    unaff_ESI[2] = local_6 - 0x80;
    unaff_ESI[3] = local_5 - 0x80;
    unaff_ESI[4] = local_4 - 0x80;
    unaff_ESI[5] = 0;
  }
  return;
}


/* FUN_006ac800 @ 006ac800  kind=gamemisc  attributed-by=none  size=119 */

undefined4 FUN_006ac800(int param_1,int *param_2,int *param_3)

{
  uint in_EAX;
  int iVar1;
  uint uVar2;
  int *piVar3;
  int unaff_EBX;
  int *unaff_EDI;
  
  uVar2 = 0;
  piVar3 = unaff_EDI;
  if (in_EAX != 0) {
    do {
      if (*piVar3 == param_1) {
        if ((*(uint *)(unaff_EBX + 8) <= (uint)unaff_EDI[uVar2 * 4 + 3]) &&
           (iVar1 = FUN_00690900(), iVar1 == 0)) {
          *param_3 = unaff_EDI[uVar2 * 4 + 2];
          *param_2 = unaff_EDI[uVar2 * 4 + 1];
          return 0;
        }
        *param_3 = 0;
        return 0x53;
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 4;
    } while (uVar2 < in_EAX);
  }
  *param_3 = 0;
  return 3;
}


/* FUN_006ac880 @ 006ac880  kind=gamemisc  attributed-by=none  size=24 */

uint FUN_006ac880(void)

{
  uint uVar1;
  int *in_ECX;
  uint in_EDX;
  int unaff_ESI;
  
  uVar1 = 0;
  if (in_EDX != 0) {
    do {
      if (*in_ECX == unaff_ESI) {
        return CONCAT31((int3)(uVar1 >> 8),1);
      }
      uVar1 = uVar1 + 1;
      in_ECX = in_ECX + 4;
    } while (uVar1 < in_EDX);
  }
  return uVar1 & 0xffffff00;
}


/* FUN_006ac8a0 @ 006ac8a0  kind=gamemisc  attributed-by=none  size=128 */

undefined4 * FUN_006ac8a0(byte *param_1)

{
  byte bVar1;
  bool bVar2;
  int in_EAX;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 *puVar7;
  bool bVar8;
  
  bVar2 = false;
  iVar6 = 0;
  puVar7 = *(undefined4 **)(in_EAX + 0x11c);
  if (0 < *(int *)(in_EAX + 0x118)) {
    do {
      if (bVar2) goto LAB_006ac907;
      pbVar3 = (byte *)*puVar7;
      pbVar5 = param_1;
      do {
        bVar1 = *pbVar3;
        bVar8 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_006ac8f0:
          iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_006ac8f5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar8 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_006ac8f0;
        pbVar3 = pbVar3 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_006ac8f5:
      if (iVar4 == 0) {
        bVar2 = true;
      }
      iVar6 = iVar6 + 1;
      puVar7 = puVar7 + 3;
    } while (iVar6 < *(int *)(in_EAX + 0x118));
    if (bVar2) {
LAB_006ac907:
      return *(undefined4 **)(in_EAX + 0x11c) + iVar6 * 3 + -3;
    }
  }
  return (undefined4 *)0x0;
}


/* FUN_006ac920 @ 006ac920  kind=gamemisc  attributed-by=none  size=751 */

int FUN_006ac920(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  undefined4 *puVar8;
  int local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  uint local_8;
  uint local_4;
  
  local_14 = *(undefined4 *)(param_1 + 100);
  local_c = 0;
  local_10 = 0;
  local_18 = FUN_006ac800(1,&local_8,&local_4);
  if (((local_18 == 0) && (uVar2 = FUN_00690d40(), local_18 == 0)) && ((uVar2 & 0xffffff00) == 0)) {
    local_8 = uVar2 >> 2 & 1;
    if (local_8 == 0) {
      uVar2 = FUN_00690d40();
    }
    else {
      uVar2 = FUN_00690cd0();
    }
    if (local_18 == 0) {
      if (uVar2 <= local_4 / 9) {
        *(uint *)(param_1 + 0x118) = uVar2;
        local_c = FUN_00693a60(local_14,0xc,0,uVar2,0,&local_18);
        if (local_18 != 0) goto LAB_006acbe0;
        uVar7 = 0;
        iVar3 = local_18;
        if (uVar2 != 0) {
          do {
            iVar3 = FUN_00692010();
            local_18 = iVar3;
            if (iVar3 != 0) goto LAB_006acbe0;
            uVar7 = uVar7 + 1;
            local_18 = 0;
          } while (uVar7 < uVar2);
        }
        local_18 = iVar3;
        if (((uVar2 & 3) != 0) && (local_18 = FUN_00690900(), local_18 != 0)) {
          local_18 = 0x53;
          goto LAB_006acbe0;
        }
        if (local_8 == 1) {
          uVar7 = FUN_00690cd0();
        }
        else {
          uVar7 = FUN_00690d40();
        }
        if (local_18 != 0) goto LAB_006acbe0;
        if (uVar7 <= local_4 + uVar2 * -9) {
          local_10 = FUN_00693a60(local_14,1,0,uVar7,0,&local_18);
          if (((local_18 == 0) && (local_18 = FUN_00691ec0(), local_18 == 0)) &&
             (iVar3 = FUN_00693a60(local_14,0xc,0,uVar2,0,&local_18), local_18 == 0)) {
            uVar5 = 0;
            *(int *)(param_1 + 0x11c) = iVar3;
            if (uVar2 != 0) {
              puVar8 = (undefined4 *)(iVar3 + 8);
              local_4 = iVar3 - local_c;
              pcVar6 = (char *)(local_c + 4);
              do {
                uVar1 = *(uint *)(pcVar6 + -4);
                if (((int)uVar1 < 0) || (uVar7 < uVar1)) {
LAB_006acc08:
                  local_18 = 9;
                  goto LAB_006acbe0;
                }
                uVar4 = FUN_00691310(local_14,uVar1 + local_10,&local_18);
                puVar8[-2] = uVar4;
                if (local_18 != 0) goto LAB_006acbe0;
                pcVar6[local_4] = *pcVar6;
                if (*pcVar6 == '\0') {
                  *puVar8 = *(undefined4 *)(pcVar6 + 4);
                }
                else {
                  uVar1 = *(uint *)(pcVar6 + 4);
                  if (((int)uVar1 < 0) || (uVar7 < uVar1)) goto LAB_006acc08;
                  uVar4 = FUN_00691310(local_14,uVar1 + local_10,&local_18);
                  *puVar8 = uVar4;
                  if (local_18 != 0) goto LAB_006acbe0;
                }
                uVar5 = uVar5 + 1;
                pcVar6 = pcVar6 + 0xc;
                puVar8 = puVar8 + 3;
              } while (uVar5 < uVar2);
            }
            local_18 = 0;
          }
          goto LAB_006acbe0;
        }
      }
      local_18 = 8;
    }
  }
LAB_006acbe0:
  uVar4 = local_14;
  FUN_00691290(local_14,local_c);
  FUN_00691290(uVar4,local_10);
  return local_18;
}


/* FUN_006acc20 @ 006acc20  kind=gamemisc  attributed-by=none  size=437 */

int FUN_006acc20(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint local_c;
  uint local_8;
  undefined4 local_4;
  
  iVar1 = param_2;
  local_4 = *(undefined4 *)(param_2 + 100);
  param_2 = 0;
  param_2 = FUN_006ac800(4,&local_8,&local_c);
  if ((param_2 != 0) || (local_8 = FUN_00690d40(param_1,&param_2), param_2 != 0)) {
    return param_2;
  }
  uVar4 = local_8 & 0xffffff00;
  if ((uVar4 == 0) || (uVar4 == 0x100)) {
    if (uVar4 == 0) {
      if ((local_8 & 4) == 0) {
        uVar2 = FUN_00690d40(param_1,&param_2);
      }
      else {
        uVar2 = FUN_00690cd0(param_1,&param_2);
      }
    }
    else {
      if ((local_8 & 4) == 0) {
        uVar2 = FUN_00690bf0(param_1,&param_2);
      }
      else {
        uVar2 = FUN_00690b80(param_1,&param_2);
      }
      uVar2 = uVar2 & 0xffff;
    }
    if (param_2 == 0) {
      *(uint *)(iVar1 + 0x120) = uVar2;
      if (uVar2 == 0) {
        return 8;
      }
      if (uVar4 == 0) {
        if (local_c / 0xc < uVar2) {
          return 8;
        }
      }
      else if (local_c / 5 < uVar2) {
        return 8;
      }
      iVar3 = FUN_00693a60(local_4,0x10,0,uVar2,0,&param_2);
      *(int *)(iVar1 + 0x124) = iVar3;
      if (param_2 == 0) {
        uVar4 = 0;
        if (uVar2 == 0) {
          return 0;
        }
        do {
          param_2 = FUN_006ac770();
          *(undefined4 *)(iVar3 + 0xc) = 0;
          if (param_2 != 0) {
            FUN_00691290(local_4,*(undefined4 *)(iVar1 + 0x124));
            *(undefined4 *)(iVar1 + 0x124) = 0;
            return param_2;
          }
          uVar4 = uVar4 + 1;
          iVar3 = iVar3 + 0x10;
          param_2 = 0;
        } while (uVar4 < uVar2);
        return 0;
      }
      return 0x40;
    }
  }
  return 3;
}


/* FUN_006acde0 @ 006acde0  kind=gamemisc  attributed-by=none  size=473 */

void FUN_006acde0(void)

{
  uint uVar1;
  undefined4 uVar2;
  int in_ECX;
  int in_EDX;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int local_2c;
  int local_28;
  uint local_24;
  int local_20;
  undefined4 local_1c;
  uint local_18 [5];
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&local_2c;
  local_1c = *(undefined4 *)(in_EDX + 100);
  local_2c = 0;
  local_20 = in_EDX;
  local_2c = FUN_006ac800(8,&local_24,local_18);
  if ((local_2c != 0) || (local_2c = FUN_00691f30(), local_2c != 0)) {
LAB_006acfa7:
    __security_check_cookie(local_4 ^ (uint)&local_2c);
    return;
  }
  local_24 = FUN_00690ae0();
  uVar4 = local_24 >> 2 & 1;
  if (uVar4 == 0) {
    uVar1 = FUN_00690ae0();
  }
  else {
    uVar1 = FUN_00690aa0();
  }
  FUN_00691fe0();
  if (((((local_24 & 0xffffff00) != 0) || ((int)*(uint *)(in_EDX + 0x120) < 0)) ||
      (uVar1 != *(uint *)(in_EDX + 0x120))) ||
     (local_28 = FUN_00693a60(local_1c,4,0,uVar1,0,&local_2c), local_2c != 0)) goto LAB_006acfa7;
  uVar5 = 0;
  if (uVar1 != 0) {
    do {
      if (uVar4 == 1) {
        uVar2 = FUN_00690cd0();
      }
      else {
        uVar2 = FUN_00690d40();
      }
      *(undefined4 *)(local_28 + uVar5 * 4) = uVar2;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar1);
    if (local_2c != 0) goto LAB_006acf78;
  }
  uVar5 = 0;
  do {
    if (uVar4 == 1) {
      FUN_00690cd0();
    }
    else {
      FUN_00690d40();
    }
    if (local_2c != 0) goto LAB_006acf78;
    uVar5 = uVar5 + 1;
  } while (uVar5 < 4);
  if (uVar1 != 0) {
    iVar3 = 0;
    uVar4 = 0;
    do {
      uVar5 = *(uint *)(local_28 + uVar4 * 4);
      if ((-1 < (int)uVar5) && (uVar5 <= local_18[0])) {
        *(uint *)(*(int *)(local_20 + 0x124) + 0xc + iVar3) = *(int *)(in_ECX + 8) + uVar5;
      }
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 0x10;
    } while (uVar4 < uVar1);
  }
  *(uint *)(local_20 + 0x134) = local_24;
LAB_006acf78:
  FUN_00691290(local_1c,local_28);
  __security_check_cookie(local_4 ^ (uint)&local_2c);
  return;
}


/* FUN_006acfc0 @ 006acfc0  kind=gamemisc  attributed-by=none  size=601 */

int FUN_006acfc0(int param_1)

{
  short sVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  int local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  uint local_14;
  int local_10;
  uint local_c;
  int local_8;
  int local_4;
  
  local_20 = *(undefined4 *)(param_1 + 100);
  local_24 = 0;
  local_4 = 0;
  local_24 = FUN_006ac800(0x20,&local_14,&local_8);
  if ((local_24 != 0) || (local_24 = FUN_00691f30(), local_24 != 0)) {
    return local_24;
  }
  local_14 = FUN_00690ae0();
  local_c = local_14 >> 2 & 1;
  if (local_c == 0) {
    sVar1 = FUN_00690a70();
    local_18 = (int)sVar1;
    sVar2 = FUN_00690a70();
    sVar1 = FUN_00690a70();
    local_1c = (int)sVar1;
    sVar1 = FUN_00690a70();
    uVar3 = FUN_00690a70();
  }
  else {
    sVar1 = FUN_00690a40();
    local_18 = (int)sVar1;
    sVar2 = FUN_00690a40();
    sVar1 = FUN_00690a40();
    local_1c = (int)sVar1;
    sVar1 = FUN_00690a40();
    uVar3 = FUN_00690a40();
  }
  *(undefined2 *)(param_1 + 0x130) = uVar3;
  FUN_00691fe0();
  uVar9 = local_20;
  if ((local_14 & 0xffffff00) == 0) {
    local_8 = (sVar2 - local_18) + 1;
    local_10 = ((sVar1 - local_1c) + 1) * local_8;
    iVar4 = FUN_00693a60(local_20,8,0,local_10,0,&local_24);
    if (local_24 != 0) {
      return 0x40;
    }
    local_24 = FUN_00691f30();
    iVar5 = local_4;
    if (local_24 == 0) {
      iVar10 = 0;
      local_14 = 0;
      if (0 < local_10) {
        do {
          uVar8 = local_14;
          if (local_c == 1) {
            sVar1 = FUN_00690a40();
          }
          else {
            sVar1 = FUN_00690a70();
          }
          if (sVar1 != -1) {
            *(short *)(iVar4 + 4 + iVar10 * 8) = sVar1;
            iVar10 = iVar10 + 1;
            *(int *)(iVar4 + -8 + iVar10 * 8) =
                 ((int)uVar8 / local_8 + local_1c) * 0x100 + (int)uVar8 % local_8 + local_18;
            uVar8 = local_14;
          }
          local_14 = uVar8 + 1;
        } while ((int)local_14 < local_10);
      }
      FUN_00691fe0();
      iVar5 = FUN_00693a60(local_20,8,0,iVar10,0,&local_24);
      uVar9 = local_20;
      if (local_24 == 0) {
        iVar7 = 0;
        if (0 < iVar10) {
          puVar6 = (undefined2 *)(iVar5 + 4);
          do {
            *(undefined4 *)(puVar6 + -2) = *(undefined4 *)(iVar4 + iVar7 * 8);
            *puVar6 = *(undefined2 *)((iVar4 - iVar5) + (int)puVar6);
            iVar7 = iVar7 + 1;
            puVar6 = puVar6 + 4;
          } while (iVar7 < iVar10);
        }
        *(int *)(param_1 + 0x128) = iVar10;
        *(int *)(param_1 + 300) = iVar5;
        FUN_00691290(local_20,iVar4);
        return local_24;
      }
    }
    FUN_00691290(uVar9,iVar5);
    FUN_00691290(uVar9,iVar4);
    return local_24;
  }
  return 3;
}


/* FUN_006ad220 @ 006ad220  kind=gamemisc  attributed-by=none  size=322 */

void FUN_006ad220(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  uint local_8;
  uint local_4;
  
  iVar1 = FUN_006ac800(param_1,&local_8,&local_4);
  if (iVar1 == 0) {
    local_8 = FUN_00690d40();
    local_4 = local_8 & 0xffffff00;
    if ((((local_4 == 0) || (local_4 == 0x100)) && (iVar1 = FUN_00692010(), iVar1 == 0)) &&
       (iVar1 = FUN_006ac770(), iVar1 == 0)) {
      iVar1 = FUN_006ac770();
      if (iVar1 == 0) {
        if (local_4 == 0x100) {
          iVar1 = FUN_006ac770();
          if (iVar1 == 0) {
            FUN_006ac770();
            return;
          }
        }
        else {
          *(undefined4 *)(in_ECX + 0xf8) = *(undefined4 *)(in_ECX + 0xd8);
          *(undefined4 *)(in_ECX + 0xfc) = *(undefined4 *)(in_ECX + 0xdc);
          *(undefined4 *)(in_ECX + 0x100) = *(undefined4 *)(in_ECX + 0xe0);
          *(undefined4 *)(in_ECX + 0x104) = *(undefined4 *)(in_ECX + 0xe4);
          *(undefined4 *)(in_ECX + 0x108) = *(undefined4 *)(in_ECX + 0xe8);
          *(undefined4 *)(in_ECX + 0x10c) = *(undefined4 *)(in_ECX + 0xec);
          *(undefined4 *)(in_ECX + 0x110) = *(undefined4 *)(in_ECX + 0xf0);
          *(undefined4 *)(in_ECX + 0x114) = *(undefined4 *)(in_ECX + 0xf4);
        }
      }
    }
  }
  return;
}


/* FUN_006ad370 @ 006ad370  kind=gamemisc  attributed-by=none  size=467 */

void FUN_006ad370(void)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined1 *_Dst;
  uint uVar5;
  uint uVar6;
  int unaff_EBX;
  uint uVar7;
  int local_28;
  char *local_24 [4];
  uint local_14 [4];
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&local_28;
  uVar7 = 0;
  local_28 = 0;
  local_24[0] = (char *)0x0;
  local_24[1] = (undefined1 *)0x0;
  local_24[2] = (char *)0x0;
  local_24[3] = (char *)0x0;
  *(undefined4 *)(unaff_EBX + 0xc) = 0;
  iVar3 = FUN_006ac8a0("SLANT");
  if (((iVar3 != 0) && (*(char *)(iVar3 + 4) != '\0')) &&
     ((cVar2 = **(char **)(iVar3 + 8), cVar2 == 'O' ||
      (((cVar2 == 'o' || (cVar2 == 'I')) || (cVar2 == 'i')))))) {
    *(undefined4 *)(unaff_EBX + 0xc) = 1;
    if ((**(char **)(iVar3 + 8) == 'O') || (local_24[2] = "Italic", **(char **)(iVar3 + 8) == 'o'))
    {
      local_24[2] = "Oblique";
    }
  }
  iVar3 = FUN_006ac8a0("WEIGHT_NAME");
  if (((iVar3 != 0) && (*(char *)(iVar3 + 4) != '\0')) &&
     ((**(char **)(iVar3 + 8) == 'B' || (**(char **)(iVar3 + 8) == 'b')))) {
    *(uint *)(unaff_EBX + 0xc) = *(uint *)(unaff_EBX + 0xc) | 2;
    local_24[1] = "Bold";
  }
  iVar3 = FUN_006ac8a0("SETWIDTH_NAME");
  if ((iVar3 != 0) && (*(char *)(iVar3 + 4) != '\0')) {
    cVar2 = **(char **)(iVar3 + 8);
    if ((cVar2 != '\0') && ((cVar2 != 'N' && (cVar2 != 'n')))) {
      local_24[3] = *(char **)(iVar3 + 8);
    }
  }
  iVar3 = FUN_006ac8a0("ADD_STYLE_NAME");
  if ((iVar3 != 0) && (*(char *)(iVar3 + 4) != '\0')) {
    cVar2 = **(char **)(iVar3 + 8);
    if ((cVar2 != '\0') && ((cVar2 != 'N' && (cVar2 != 'n')))) {
      local_24[0] = *(char **)(iVar3 + 8);
    }
  }
  iVar3 = 0;
  uVar6 = 0;
  do {
    pcVar4 = *(char **)((int)local_24 + uVar6);
    *(undefined4 *)((int)local_14 + uVar6) = 0;
    if (pcVar4 != (char *)0x0) {
      pcVar1 = pcVar4 + 1;
      do {
        cVar2 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar2 != '\0');
      *(int *)((int)local_14 + uVar6) = (int)pcVar4 - (int)pcVar1;
      iVar3 = iVar3 + 1 + ((int)pcVar4 - (int)pcVar1);
    }
    uVar6 = uVar6 + 4;
  } while (uVar6 < 0x10);
  if (iVar3 == 0) {
    local_24[0] = "Regular";
    local_14[0] = 7;
    iVar3 = 8;
  }
  _Dst = (undefined1 *)FUN_00692230(*(undefined4 *)(unaff_EBX + 100),iVar3,&local_28);
  *(undefined1 **)(unaff_EBX + 0x18) = _Dst;
  if (local_28 == 0) {
    do {
      pcVar4 = local_24[uVar7];
      uVar6 = local_14[uVar7];
      if (pcVar4 != (char *)0x0) {
        if (_Dst != *(undefined1 **)(unaff_EBX + 0x18)) {
          *_Dst = 0x20;
          _Dst = _Dst + 1;
        }
        memcpy(_Dst,pcVar4,uVar6);
        if (((uVar7 == 0) || (uVar7 == 3)) && (uVar5 = 0, uVar6 != 0)) {
          do {
            if (_Dst[uVar5] == ' ') {
              _Dst[uVar5] = 0x2d;
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar6);
        }
        _Dst = _Dst + uVar6;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < 4);
    *_Dst = 0;
  }
  __security_check_cookie(local_4 ^ (uint)&local_28);
  return;
}


/* FUN_006ad550 @ 006ad550  kind=gamemisc  attributed-by=none  size=844 */

undefined4 FUN_006ad550(void)

{
  short sVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  short *psVar6;
  int iVar7;
  undefined4 uVar8;
  short sVar9;
  short sVar10;
  undefined4 *unaff_EDI;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = unaff_EDI[0x19];
  local_c = 0;
  local_c = FUN_006ac580();
  if ((((local_c == 0) && (local_c = FUN_006ac920(), local_c == 0)) &&
      ((cVar3 = FUN_006ac880(), cVar3 != '\0' || (local_c = FUN_006ad220(2), local_c == 0)))) &&
     ((((local_c = FUN_006acc20(), local_c == 0 && (local_c = FUN_006acde0(), local_c == 0)) &&
       (local_c = FUN_006acfc0(), local_c == 0)) &&
      ((iVar4 = 0, cVar3 == '\0' || (iVar4 = FUN_006ad220(0x100), iVar4 == 0)))))) {
    local_c = iVar4;
    *unaff_EDI = 1;
    unaff_EDI[1] = 0;
    unaff_EDI[2] = 0x92;
    if (*(char *)((int)unaff_EDI + 199) != '\0') {
      unaff_EDI[2] = 0x96;
    }
    local_c = FUN_006ad370();
    if (local_c == 0) {
      iVar4 = FUN_006ac8a0("FAMILY_NAME");
      if ((iVar4 == 0) || (*(char *)(iVar4 + 4) == '\0')) {
        unaff_EDI[5] = 0;
      }
      else {
        uVar5 = FUN_00691310(local_8,*(undefined4 *)(iVar4 + 8),&local_c);
        unaff_EDI[5] = uVar5;
        if (local_c != 0) {
          return 3;
        }
      }
      unaff_EDI[4] = unaff_EDI[0x48] + 1;
      unaff_EDI[7] = 1;
      psVar6 = (short *)FUN_00693a60(local_8,0x10,0,1,0,&local_c);
      unaff_EDI[8] = psVar6;
      if (local_c == 0) {
        psVar6[0] = 0;
        psVar6[1] = 0;
        psVar6[2] = 0;
        psVar6[3] = 0;
        psVar6[4] = 0;
        psVar6[5] = 0;
        psVar6[6] = 0;
        psVar6[7] = 0;
        local_4 = 0;
        sVar9 = *(short *)(unaff_EDI + 0x34);
        sVar1 = *(short *)(unaff_EDI + 0x33);
        sVar10 = 0;
        *psVar6 = sVar9 + sVar1;
        iVar4 = FUN_006ac8a0("AVERAGE_WIDTH");
        if (iVar4 == 0) {
          lVar2 = (longlong)((short)(sVar9 + sVar1) * 2) * 0x55555556;
          psVar6[1] = (short)((ulonglong)lVar2 >> 0x20) - (short)(lVar2 >> 0x3f);
        }
        else {
          iVar4 = *(int *)(iVar4 + 8) + 5;
          psVar6[1] = ((short)(iVar4 / 10) + (short)(iVar4 >> 0x1f)) -
                      (short)((longlong)iVar4 * 0x66666667 >> 0x3f);
        }
        iVar4 = FUN_006ac8a0("POINT_SIZE");
        if (iVar4 != 0) {
          *(int *)(psVar6 + 2) = (*(int *)(iVar4 + 8) * 0x70800 + 0x8d27) / 0x11a4e;
        }
        iVar4 = FUN_006ac8a0("PIXEL_SIZE");
        if (iVar4 != 0) {
          *(int *)(psVar6 + 6) = (int)*(short *)(iVar4 + 8) << 6;
        }
        iVar4 = FUN_006ac8a0("RESOLUTION_X");
        if (iVar4 == 0) {
          sVar9 = (short)local_4;
        }
        else {
          sVar9 = *(short *)(iVar4 + 8);
        }
        iVar4 = FUN_006ac8a0("RESOLUTION_Y");
        if (iVar4 != 0) {
          sVar10 = *(short *)(iVar4 + 8);
        }
        if (*(int *)(psVar6 + 6) == 0) {
          *(int *)(psVar6 + 6) = *(int *)(psVar6 + 2);
          if (sVar10 != 0) {
            *(int *)(psVar6 + 6) = ((int)sVar10 * *(int *)(psVar6 + 2)) / 0x48;
          }
        }
        if ((sVar9 == 0) || (sVar10 == 0)) {
          *(undefined4 *)(psVar6 + 4) = *(undefined4 *)(psVar6 + 6);
        }
        else {
          *(int *)(psVar6 + 4) = ((int)sVar9 * *(int *)(psVar6 + 6)) / (int)sVar10;
        }
        iVar4 = FUN_006ac8a0("CHARSET_REGISTRY");
        iVar7 = FUN_006ac8a0("CHARSET_ENCODING");
        uVar5 = local_8;
        if ((((iVar4 != 0) && (*(char *)(iVar4 + 4) != '\0')) && (iVar7 != 0)) &&
           (*(char *)(iVar7 + 4) != '\0')) {
          uVar8 = FUN_00691310(local_8,*(undefined4 *)(iVar7 + 8),&local_c);
          unaff_EDI[0x2c] = uVar8;
          if (local_c != 0) {
            return 3;
          }
          uVar5 = FUN_00691310(uVar5,*(undefined4 *)(iVar4 + 8),&local_c);
          unaff_EDI[0x2d] = uVar5;
        }
        if (local_c == 0) {
          return 0;
        }
      }
    }
  }
  return 3;
}


/* FUN_006ad990 @ 006ad990  kind=gamemisc  attributed-by=none  size=306 */

void FUN_006ad990(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar2 = param_1;
  iVar3 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 100);
    FUN_00691290(uVar1,*(undefined4 *)(param_1 + 300));
    *(undefined4 *)(param_1 + 300) = 0;
    FUN_00691290(uVar1,*(undefined4 *)(param_1 + 0x124));
    *(undefined4 *)(param_1 + 0x124) = 0;
    if ((*(int *)(param_1 + 0x11c) != 0) && (0 < *(int *)(param_1 + 0x118))) {
      param_1 = 0;
      do {
        puVar4 = (undefined4 *)(*(int *)(iVar2 + 0x11c) + param_1);
        if (puVar4 != (undefined4 *)0x0) {
          FUN_00691290(uVar1,*puVar4);
          *puVar4 = 0;
          if (*(char *)(puVar4 + 1) != '\0') {
            FUN_00691290(uVar1,puVar4[2]);
            puVar4[2] = 0;
          }
        }
        param_1 = param_1 + 0xc;
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(iVar2 + 0x118));
    }
    FUN_00691290(uVar1,*(undefined4 *)(iVar2 + 0x11c));
    *(undefined4 *)(iVar2 + 0x11c) = 0;
    FUN_00691290(uVar1,*(undefined4 *)(iVar2 + 0xc0));
    *(undefined4 *)(iVar2 + 0xc0) = 0;
    FUN_00691290(uVar1,*(undefined4 *)(iVar2 + 0x14));
    *(undefined4 *)(iVar2 + 0x14) = 0;
    FUN_00691290(uVar1,*(undefined4 *)(iVar2 + 0x18));
    *(undefined4 *)(iVar2 + 0x18) = 0;
    FUN_00691290(uVar1,*(undefined4 *)(iVar2 + 0x20));
    *(undefined4 *)(iVar2 + 0x20) = 0;
    FUN_00691290(uVar1,*(undefined4 *)(iVar2 + 0xb0));
    *(undefined4 *)(iVar2 + 0xb0) = 0;
    FUN_00691290(uVar1,*(undefined4 *)(iVar2 + 0xb4));
    *(undefined4 *)(iVar2 + 0xb4) = 0;
    if (*(int *)(iVar2 + 0x68) == iVar2 + 0x84) {
      FUN_006908a0(iVar2 + 0x84);
      *(undefined4 *)(iVar2 + 0x68) = *(undefined4 *)(iVar2 + 0xac);
    }
  }
  return;
}


/* FUN_006adad0 @ 006adad0  kind=gamemisc  attributed-by=none  size=415 */

undefined4 FUN_006adad0(undefined4 param_1,int param_2)

{
  byte bVar1;
  char *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined4 uVar9;
  byte *pbVar10;
  bool bVar11;
  int local_c [3];
  
  iVar4 = FUN_006ad550();
  if (iVar4 != 0) {
    FUN_006ad990(param_2);
    iVar4 = param_2 + 0x84;
    iVar5 = FUN_006cf6b0(iVar4,param_1);
    if (((char)iVar5 == '\a') ||
       ((iVar5 != 0 && ((iVar5 = FUN_006cd080(iVar4,param_1), (char)iVar5 == '\a' || (iVar5 != 0))))
       )) {
LAB_006adb2d:
      FUN_006ad990(param_2);
      return 2;
    }
    *(undefined4 *)(param_2 + 0xac) = param_1;
    *(int *)(param_2 + 0x68) = iVar4;
    iVar4 = FUN_006ad550();
    if (iVar4 != 0) goto LAB_006adb2d;
  }
  pcVar2 = *(char **)(param_2 + 0xb4);
  bVar11 = false;
  bVar3 = false;
  if (((((pcVar2 == (char *)0x0) ||
        (pbVar8 = *(byte **)(param_2 + 0xb0), bVar3 = bVar11, pbVar8 == (byte *)0x0)) ||
       ((*pcVar2 != 'i' && (*pcVar2 != 'I')))) || ((pcVar2[1] != 's' && (pcVar2[1] != 'S')))) ||
     ((pcVar2[2] != 'o' && (pcVar2[2] != 'O')))) goto LAB_006adc2c;
  pbVar7 = (byte *)(pcVar2 + 3);
  pbVar10 = &DAT_007234e0;
  pbVar6 = pbVar7;
  do {
    bVar1 = *pbVar6;
    bVar11 = bVar1 < *pbVar10;
    if (bVar1 != *pbVar10) {
LAB_006adbc0:
      iVar4 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
      goto LAB_006adbc5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar6[1];
    bVar11 = bVar1 < pbVar10[1];
    if (bVar1 != pbVar10[1]) goto LAB_006adbc0;
    pbVar6 = pbVar6 + 2;
    pbVar10 = pbVar10 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_006adbc5:
  if (iVar4 != 0) {
    pbVar6 = &DAT_007234d8;
    do {
      bVar1 = *pbVar7;
      bVar11 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_006adbf0:
        iVar4 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
        goto LAB_006adbf5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar7[1];
      bVar11 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_006adbf0;
      pbVar7 = pbVar7 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_006adbf5:
    if (iVar4 != 0) goto LAB_006adc2c;
    pbVar7 = &DAT_007157e0;
    do {
      bVar1 = *pbVar8;
      bVar11 = bVar1 < *pbVar7;
      if (bVar1 != *pbVar7) {
LAB_006adc20:
        iVar4 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
        goto LAB_006adc25;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar8[1];
      bVar11 = bVar1 < pbVar7[1];
      if (bVar1 != pbVar7[1]) goto LAB_006adc20;
      pbVar8 = pbVar8 + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_006adc25:
    if (iVar4 != 0) goto LAB_006adc2c;
  }
  bVar3 = true;
LAB_006adc2c:
  local_c[0] = param_2;
  local_c[1] = 0;
  local_c[2] = 0;
  if (bVar3) {
    local_c[1] = 0x756e6963;
    local_c[2] = 0x10003;
  }
  uVar9 = FUN_00693ed0(&DAT_007332c4,0,local_c,0);
  return uVar9;
}


/* FUN_006adfd0 @ 006adfd0  kind=gamemisc  attributed-by=none  size=89 */

void FUN_006adfd0(void)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_EDI;
  
  uVar1 = *(undefined4 *)(unaff_EDI + 100);
  iVar2 = *(int *)(unaff_EDI + 0x84);
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 0xa0) != 0) {
      FUN_00691ee0(*(undefined4 *)(unaff_EDI + 0x68),iVar2 + 0xa0);
    }
    FUN_00691290(uVar1,*(undefined4 *)(iVar2 + 0xa8));
    *(undefined4 *)(iVar2 + 0xa8) = 0;
    FUN_00691290(uVar1,iVar2);
    *(undefined4 *)(unaff_EDI + 0x84) = 0;
  }
  return;
}


/* FUN_006ae030 @ 006ae030  kind=gamemisc  attributed-by=none  size=187 */

int FUN_006ae030(void)

{
  short sVar1;
  int in_EAX;
  int iVar2;
  
  iVar2 = FUN_006908c0();
  if ((iVar2 != 0) || (iVar2 = FUN_00692010(), iVar2 != 0)) {
    return iVar2;
  }
  sVar1 = *(short *)(in_EAX + 4);
  if (((sVar1 == 0x200) || (sVar1 == 0x300)) &&
     (((*(short *)(in_EAX + 4) != 0x300) - 1 & 0x1e) + 0x76 <= *(uint *)(in_EAX + 8))) {
    if (sVar1 == 0x200) {
      *(undefined4 *)(in_EAX + 0x84) = 0;
      *(undefined4 *)(in_EAX + 0x88) = 0;
      *(undefined4 *)(in_EAX + 0x8c) = 0;
    }
    if ((*(byte *)(in_EAX + 0x48) & 1) == 0) {
      iVar2 = FUN_006908c0();
      if (iVar2 != 0) {
        return iVar2;
      }
      iVar2 = FUN_00693a30();
      return iVar2;
    }
  }
  return 2;
}


/* FUN_006ae0f0 @ 006ae0f0  kind=gamemisc  attributed-by=none  size=1770 */

void FUN_006ae0f0(uint param_1)

{
  int iVar1;
  uint uVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  uint *in_ECX;
  ushort uVar8;
  int iVar9;
  uint *puVar10;
  undefined1 auStack_bc [4];
  int local_b8;
  uint *local_b4;
  int local_b0;
  short local_ac;
  ushort local_aa;
  uint local_a8;
  short local_a4;
  ushort local_a2;
  ushort local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  int local_90;
  undefined1 local_8c [4];
  uint local_88;
  int local_84;
  uint local_80;
  undefined1 local_7c [4];
  int local_78;
  undefined1 local_74 [8];
  int local_6c;
  int local_64;
  int local_60;
  short local_5c;
  ushort local_5a;
  short local_58;
  short local_56;
  int local_54;
  undefined1 local_4c [12];
  ushort local_40;
  ushort local_3e;
  undefined1 local_3c [12];
  ushort local_30;
  ushort local_2e;
  undefined1 local_2c [12];
  ushort local_20;
  ushort local_1e;
  int local_1c;
  undefined4 local_18;
  uint local_c;
  
  local_c = DAT_0076aa78 ^ (uint)auStack_bc;
  local_9c = in_ECX[0x19];
  uVar2 = in_ECX[0x1a];
  in_ECX[0x21] = 0;
  local_b4 = in_ECX;
  local_b8 = FUN_006908c0(uVar2,0);
  if ((local_b8 != 0) || (iVar4 = FUN_00692010(uVar2,&DAT_00733390,&local_ac), iVar4 != 0))
  goto LAB_006ae7c5;
  local_b8 = 2;
  if (local_ac == 0x5a4d) {
    local_b8 = FUN_006908c0(uVar2,local_aa);
    if ((local_b8 != 0) || (iVar4 = FUN_00692010(uVar2,&DAT_007333a4,&local_a4), iVar4 != 0))
    goto LAB_006ae7c5;
    local_b8 = 2;
    if (local_a4 == 0x454e) {
      local_b0 = 0;
      local_b8 = FUN_006908c0(uVar2,(uint)local_a2 + (uint)local_aa);
      if ((local_b8 != 0) ||
         (local_b8 = FUN_00691f30(uVar2,(uint)local_a0 - (uint)local_a2), local_b8 != 0))
      goto LAB_006ae7c5;
      local_a8 = FUN_00690a70(uVar2);
      local_a8 = local_a8 & 0xffff;
      sVar3 = FUN_00690a70(uVar2);
      while (uVar5 = 0, sVar3 != 0) {
        uVar5 = FUN_00690a70(uVar2);
        uVar5 = uVar5 & 0xffff;
        if (sVar3 == -0x7ff8) {
          iVar4 = FUN_00690930(uVar2);
          local_b0 = iVar4 + 4 + (*(int *)(uVar2 + 0x20) - *(int *)(uVar2 + 0x24));
          break;
        }
        *(int *)(uVar2 + 0x20) = *(int *)(uVar2 + 0x20) + uVar5 * 0xc + 4;
        sVar3 = FUN_00690a70();
      }
      FUN_00691fe0(uVar2);
      puVar10 = local_b4;
      iVar4 = local_b8;
      if ((((short)uVar5 == 0) || (local_b0 == 0)) ||
         (*(uint *)(uVar2 + 4) <= uVar5 * 0x76 && uVar5 * 0x76 - *(uint *)(uVar2 + 4) != 0))
      goto LAB_006ae441;
      *local_b4 = uVar5;
      if ((int)uVar5 <= (int)param_1) goto LAB_006ae2af;
      if ((int)param_1 < 0) goto LAB_006ae7c5;
      uVar5 = FUN_00692230(local_9c,0xac,&local_b8);
      puVar10[0x21] = uVar5;
      if (local_b8 != 0) goto LAB_006ae7c5;
      local_b8 = FUN_006908c0(uVar2,local_b0 + param_1 * 0xc);
      if ((local_b8 != 0) || (local_b8 = FUN_00691f30(uVar2,0xc), uVar5 = local_a8, local_b8 != 0))
      goto LAB_006ae7ba;
      uVar6 = FUN_00690a70(uVar2);
      *(uint *)local_b4[0x21] = (uVar6 & 0xffff) << ((byte)uVar5 & 0x1f);
      uVar6 = FUN_00690a70(uVar2);
      *(uint *)(local_b4[0x21] + 0xa4) = (uVar6 & 0xffff) << ((byte)uVar5 & 0x1f);
      *(int *)(uVar2 + 0x20) = *(int *)(uVar2 + 0x20) + 8;
      FUN_00691fe0(uVar2);
      local_b8 = FUN_006ae030();
      puVar10 = local_b4;
    }
    else {
      puVar10 = in_ECX;
      if (local_a4 == 0x4550) {
        local_b8 = FUN_006908c0(uVar2,local_aa);
        if ((local_b8 == 0) &&
           (local_b8 = FUN_00692010(uVar2,&DAT_007333bc,&local_60), local_b8 == 0)) {
          iVar4 = 0;
          if ((local_60 == 0x4550) &&
             (((local_5c == 0x14c && (local_58 == 0xe0)) && (local_56 == 0x10b)))) {
            *in_ECX = 0;
            uVar8 = 0;
            if (local_5a != 0) {
              do {
                local_b8 = 0;
                local_b8 = FUN_00692010(uVar2,&DAT_007333f0,local_74);
                if (local_b8 != 0) goto LAB_006ae7c5;
                if (local_54 == local_6c) {
                  local_b8 = FUN_006908c0(uVar2,local_64);
                  if ((local_b8 != 0) ||
                     (local_b8 = FUN_00692010(uVar2,&DAT_00733410,local_4c), local_b8 != 0))
                  goto LAB_006ae7c5;
                  local_b0 = local_64;
                  local_a8 = 0;
                  puVar10 = local_b4;
                  if ((uint)local_3e + (uint)local_40 == 0) goto LAB_006ae79d;
                  uVar5 = 0;
                  local_b8 = 0;
                  goto LAB_006ae4bc;
                }
                uVar8 = uVar8 + 1;
                iVar4 = 0;
              } while (uVar8 < local_5a);
            }
          }
          goto LAB_006ae441;
        }
        goto LAB_006ae7c5;
      }
    }
    goto LAB_006ae79d;
  }
  goto LAB_006ae7ba;
  while( true ) {
    iVar4 = 0;
    if (-1 < (int)local_80) goto LAB_006ae441;
    local_80 = local_80 & 0x7fffffff;
    iVar9 = local_80 + local_64;
    local_90 = iVar9;
    local_b8 = FUN_006908c0(uVar2,iVar9);
    if ((local_b8 != 0) || (local_b8 = FUN_00692010(uVar2,&DAT_00733410,local_3c), local_b8 != 0))
    goto LAB_006ae7c5;
    local_94 = 0;
    if ((uint)local_2e + (uint)local_30 != 0) {
      uVar5 = 0;
      local_b8 = 0;
      local_94 = 0;
      do {
        local_b8 = FUN_006908c0(uVar2,iVar9 + 0x10 + uVar5 * 8);
        if ((local_b8 != 0) ||
           (local_b8 = FUN_00692010(uVar2,&DAT_00733430,local_8c), local_b8 != 0))
        goto LAB_006ae7c5;
        iVar4 = 0;
        if (-1 < (int)local_88) goto LAB_006ae441;
        local_88 = local_88 & 0x7fffffff;
        iVar1 = local_88 + local_64;
        local_b8 = FUN_006908c0(uVar2,iVar1);
        if ((local_b8 != 0) ||
           (local_b8 = FUN_00692010(uVar2,&DAT_00733410,local_2c), local_b8 != 0))
        goto LAB_006ae7c5;
        local_98 = 0;
        if ((uint)local_1e + (uint)local_20 != 0) {
          uVar5 = 0;
          local_b8 = 0;
          local_98 = 0;
          do {
            local_b8 = FUN_006908c0(uVar2,iVar1 + 0x10 + uVar5 * 8);
            if ((local_b8 != 0) ||
               (local_b8 = FUN_00692010(uVar2,&DAT_00733430,local_7c), local_b8 != 0))
            goto LAB_006ae7c5;
            iVar4 = 0;
            if ((local_88 & 0x80000000) != 0) goto LAB_006ae441;
            if (local_84 == 8) {
              local_b8 = FUN_006908c0(uVar2,local_78 + local_b0);
              if ((local_b8 != 0) ||
                 (local_b8 = FUN_00692010(uVar2,&DAT_00733440,&local_1c), puVar10 = local_b4,
                 local_b8 != 0)) goto LAB_006ae7c5;
              if (param_1 == *local_b4) {
                piVar7 = (int *)FUN_00692230(local_9c,0xac,&local_b8);
                puVar10[0x21] = (uint)piVar7;
                if (local_b8 != 0) goto LAB_006ae7c5;
                *piVar7 = (local_1c - local_6c) + local_64;
                *(undefined4 *)(puVar10[0x21] + 0xa4) = local_18;
                local_b8 = FUN_006ae030();
                if (local_b8 != 0) goto LAB_006ae7ba;
              }
              *puVar10 = *puVar10 + 1;
            }
            local_98 = local_98 + 1;
            uVar5 = local_98 & 0xffff;
            iVar9 = local_90;
          } while (uVar5 < (uint)local_1e + (uint)local_20);
        }
        local_94 = local_94 + 1;
        uVar5 = local_94 & 0xffff;
      } while (uVar5 < (uint)local_2e + (uint)local_30);
    }
    local_a8 = local_a8 + 1;
    uVar5 = local_a8 & 0xffff;
    puVar10 = local_b4;
    if ((uint)local_3e + (uint)local_40 <= uVar5) break;
LAB_006ae4bc:
    local_b8 = FUN_006908c0(uVar2,local_b0 + 0x10 + uVar5 * 8);
    if ((local_b8 != 0) || (local_b8 = FUN_00692010(uVar2,&DAT_00733430,&local_84), local_b8 != 0))
    goto LAB_006ae7c5;
  }
LAB_006ae79d:
  iVar4 = local_b8;
  if (*puVar10 == 0) {
LAB_006ae441:
    local_b8 = iVar4;
    __security_check_cookie(local_c ^ (uint)auStack_bc);
    return;
  }
  if ((int)*puVar10 <= (int)param_1) {
LAB_006ae2af:
    __security_check_cookie(local_c ^ (uint)auStack_bc);
    return;
  }
  if (local_b8 == 0) goto LAB_006ae7c5;
LAB_006ae7ba:
  FUN_006adfd0();
LAB_006ae7c5:
  __security_check_cookie(local_c ^ (uint)auStack_bc);
  return;
}


/* FUN_006af030 @ 006af030  kind=gamemisc  attributed-by=none  size=48 */

undefined4 FUN_006af030(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = param_1;
  uVar2 = FUN_006931e0(*(undefined4 *)(*param_1 + 500),&param_1);
  piVar1[0xb] = (int)param_1;
  FUN_0068fcc0(param_1);
  return uVar2;
}


/* FUN_006af100 @ 006af100  kind=gamemisc  attributed-by=none  size=54 */

void FUN_006af100(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00691390(*(int *)(*param_1 + 500) + 0x6c,param_1[0xb]);
  if (iVar1 != 0) {
    FUN_006919d0(param_1[0xb]);
    param_1[0xb] = 0;
  }
  return;
}


/* FUN_006af140 @ 006af140  kind=gamemisc  attributed-by=none  size=58 */

void FUN_006af140(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1;
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 500);
  if (*(int *)(*(int *)(param_1 + 4) + 0x54) == 0) {
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(iVar1 + 0x54);
    return;
  }
  FUN_00692580(iVar1,&param_1);
  *(int *)(iVar2 + 0xa0) = param_1;
  return;
}


/* FUN_006af1a0 @ 006af1a0  kind=gamemisc  attributed-by=none  size=114 */

void FUN_006af1a0(void)

{
  int unaff_ESI;
  
  FUN_00691600();
  *(undefined4 *)(unaff_ESI + 0x18) = 0;
  *(undefined4 *)(unaff_ESI + 0x1c) = 0;
  *(undefined4 *)(unaff_ESI + 0x20) = 0;
  *(undefined4 *)(unaff_ESI + 0x24) = 0;
  *(undefined4 *)(unaff_ESI + 0x28) = 0;
  *(undefined4 *)(unaff_ESI + 0x2c) = 0;
  *(undefined4 *)(unaff_ESI + 0x30) = 0;
  *(undefined4 *)(unaff_ESI + 0x34) = 0;
  *(undefined4 *)(unaff_ESI + 0x6c) = 0;
  *(undefined4 *)(unaff_ESI + 0x70) = 0;
  *(undefined4 *)(unaff_ESI + 0x74) = 0;
  *(undefined4 *)(unaff_ESI + 0x78) = 0;
  *(undefined4 *)(unaff_ESI + 0x7c) = 0;
  *(undefined4 *)(unaff_ESI + 0x4c) = 0;
  *(undefined4 *)(unaff_ESI + 0x50) = 0;
  *(undefined4 *)(unaff_ESI + 0x54) = 0;
  *(undefined4 *)(unaff_ESI + 0x58) = 0;
  *(undefined4 *)(unaff_ESI + 0x5c) = 0;
  *(undefined4 *)(unaff_ESI + 0x60) = 0;
  *(undefined4 *)(unaff_ESI + 100) = 0;
  *(undefined4 *)(unaff_ESI + 0x68) = 0;
  *(undefined4 *)(unaff_ESI + 0x80) = 0;
  *(undefined4 *)(unaff_ESI + 0x84) = 0;
  *(undefined4 *)(unaff_ESI + 0x88) = 0;
  *(undefined4 *)(unaff_ESI + 0x8c) = 0;
  *(undefined4 *)(unaff_ESI + 0x98) = 0;
  *(undefined4 *)(unaff_ESI + 0x48) = 0;
  *(undefined4 *)(unaff_ESI + 0x38) = 0;
  *(undefined4 *)(unaff_ESI + 0x3c) = 0;
  return;
}


/* FUN_006af220 @ 006af220  kind=gamemisc  attributed-by=none  size=238 */

void FUN_006af220(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 0x60) + 0x28);
  FUN_006af1a0();
  iVar1 = (**(code **)(iVar1 + 0x50))
                    (*(undefined4 *)(param_1 + 0xa0),*(undefined4 *)(param_2 + 0x2c),param_3,
                     param_4 | 8);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0xa0);
    puVar3 = (undefined4 *)(iVar1 + 0x18);
    puVar4 = (undefined4 *)(param_1 + 0x18);
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(iVar1 + 0x38);
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(iVar1 + 0x3c);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(iVar1 + 0x48);
    *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(iVar1 + 0x6c);
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(iVar1 + 0x70);
    *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(iVar1 + 0x74);
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(iVar1 + 0x78);
    *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(iVar1 + 0x7c);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar1 + 0x4c);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar1 + 0x50);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar1 + 0x54);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar1 + 0x58);
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(iVar1 + 0x5c);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(iVar1 + 0x60);
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(iVar1 + 100);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(iVar1 + 0x68);
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(iVar1 + 0x80);
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(iVar1 + 0x84);
    *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(iVar1 + 0x88);
    *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(iVar1 + 0x8c);
  }
  return;
}


/* FUN_006af450 @ 006af450  kind=gamemisc  attributed-by=none  size=37 */

void FUN_006af450(void)

{
  int unaff_ESI;
  
  if (*(char *)(unaff_ESI + 0x54) == '\0') {
    FUN_00691290(*(undefined4 *)(unaff_ESI + 0x10),*(undefined4 *)(unaff_ESI + 0x4c));
    *(undefined4 *)(unaff_ESI + 0x4c) = 0;
  }
  (**(code **)(unaff_ESI + 0x18))();
  return;
}


/* FUN_006af480 @ 006af480  kind=gamemisc  attributed-by=none  size=33 */

undefined4 FUN_006af480(void)

{
  char in_AL;
  
  if ((((in_AL != ' ') && (in_AL != '\t')) && (in_AL != '\r')) &&
     (((in_AL != '\n' && (in_AL != '\f')) && (in_AL != '\0')))) {
    return 0;
  }
  return 1;
}


/* FUN_006af4b0 @ 006af4b0  kind=gamemisc  attributed-by=none  size=243 */

void FUN_006af4b0(int param_1,int param_2)

{
  undefined2 extraout_var;
  int iVar1;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  uint uStack_10;
  int iStack_c;
  int iStack_8;
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&local_1c;
  (**(code **)(param_2 + 0x34))(param_2,6,&local_1c,3);
  iVar1 = (uStack_10 ^ (int)uStack_10 >> 0x1f) - ((int)uStack_10 >> 0x1f);
  FUN_0068ec40(0x3e80000,iVar1);
  *(undefined2 *)(param_1 + 0x44) = extraout_var;
  if (iVar1 != 0x10000) {
    local_1c = FUN_0068ec40(local_1c,iVar1);
    uStack_18 = FUN_0068ec40(uStack_18,iVar1);
    uStack_14 = FUN_0068ec40(uStack_14,iVar1);
    iStack_c = FUN_0068ec40(iStack_c,iVar1);
    iStack_8 = FUN_0068ec40(iStack_8,iVar1);
    uStack_10 = 0x10000;
  }
  *(undefined4 *)(param_1 + 0x1b4) = local_1c;
  *(uint *)(param_1 + 0x1c0) = uStack_10;
  *(undefined4 *)(param_1 + 0x1bc) = uStack_18;
  *(undefined4 *)(param_1 + 0x1b8) = uStack_14;
  *(int *)(param_1 + 0x1c4) = iStack_c >> 0x10;
  *(int *)(param_1 + 0x1c8) = iStack_8 >> 0x10;
  __security_check_cookie(local_4 ^ (uint)&local_1c);
  return;
}


/* FUN_006af5b0 @ 006af5b0  kind=gamemisc  attributed-by=none  size=802 */

void FUN_006af5b0(int param_1,int *param_2)

{
  byte *pbVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  byte extraout_CL;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  int iStack_10;
  byte *local_c;
  uint uStack_8;
  undefined4 *local_4;
  
  local_4 = *(undefined4 **)(param_1 + 0x1e8);
  pbVar1 = (byte *)param_2[2];
  local_c = pbVar1;
  (*(code *)param_2[7])(param_2);
  pbVar9 = (byte *)*param_2;
  if (pbVar9 < pbVar1) {
    bVar6 = *pbVar9;
    if ((bVar6 - 0x30 < 10) || (bVar6 == 0x5b)) {
      iVar3 = param_2[4];
      if (bVar6 != 0x5b) {
        uStack_8 = (*(code *)param_2[9])(param_2);
      }
      else {
        uStack_8 = 0x100;
        *param_2 = (int)(pbVar9 + 1);
      }
      uVar8 = uStack_8;
      bVar2 = bVar6 == 0x5b;
      (*(code *)param_2[7])(param_2);
      if ((byte *)*param_2 < local_c) {
        *(uint *)(param_1 + 0x174) = uVar8;
        param_2[0x16] = uVar8;
        uVar4 = FUN_00693a60(iVar3,2,0,uVar8,0,&iStack_10);
        *(undefined4 *)(param_1 + 0x180) = uVar4;
        if (iStack_10 == 0) {
          uVar4 = FUN_00693a60(iVar3,4,0,uVar8,0,&iStack_10);
          *(undefined4 *)(param_1 + 0x184) = uVar4;
          if ((iStack_10 == 0) &&
             (iStack_10 = (**(code **)*local_4)(param_2 + 0x17,uVar8,iVar3), iStack_10 == 0)) {
            uVar7 = 0;
            iStack_10 = 0;
            if (uVar8 != 0) {
              do {
                (*(code *)param_2[0x22])(param_2 + 0x17,uVar7,".notdef",8);
                uVar7 = uVar7 + 1;
              } while (uVar7 < uVar8);
            }
            uVar8 = 0;
            local_4 = (undefined4 *)0x0;
            (*(code *)param_2[7])(param_2);
            if ((byte *)*param_2 < local_c) {
              while( true ) {
                pbVar9 = (byte *)*param_2;
                bVar6 = *pbVar9;
                if ((((bVar6 == 100) && (pbVar9 + 3 < local_c)) && (pbVar9[1] == 0x65)) &&
                   ((pbVar9[2] == 0x66 && (iVar3 = FUN_006af480(), bVar6 = extraout_CL, iVar3 != 0))
                   )) {
                  *(undefined4 *)(param_1 + 0x170) = 1;
                  *param_2 = (int)(pbVar9 + 3);
                  return;
                }
                if (bVar6 == 0x5d) break;
                uVar7 = uVar8;
                if (bVar6 - 0x30 < 10) {
                  if (!bVar2) {
                    uVar7 = (*(code *)param_2[9])(param_2);
                    (*(code *)param_2[7])(param_2);
                  }
LAB_006af80c:
                  pbVar9 = (byte *)*param_2;
                  if (((*pbVar9 == 0x2f) && (pbVar9 + 2 < local_c)) && (uVar8 < uStack_8)) {
                    pbVar9 = pbVar9 + 1;
                    *param_2 = (int)pbVar9;
                    (*(code *)param_2[8])(param_2);
                    if (param_2[3] != 0) {
                      return;
                    }
                    iVar3 = *param_2;
                    iVar5 = (*(code *)param_2[0x22])
                                      (param_2 + 0x17,uVar7,pbVar9,(iVar3 - (int)pbVar9) + 1);
                    param_2[3] = iVar5;
                    if (iVar5 != 0) {
                      return;
                    }
                    uVar8 = (int)local_4 + 1;
                    *(undefined1 *)(*(int *)(param_2[0x1d] + uVar7 * 4) + (iVar3 - (int)pbVar9)) = 0
                    ;
                    local_4 = (undefined4 *)uVar8;
                  }
                }
                else {
                  if (bVar2) goto LAB_006af80c;
                  (*(code *)param_2[8])(param_2);
                  if (param_2[3] != 0) {
                    return;
                  }
                }
                (*(code *)param_2[7])(param_2);
                if (local_c <= (byte *)*param_2) {
                  *(undefined4 *)(param_1 + 0x170) = 1;
                  *param_2 = (int)pbVar9;
                  return;
                }
              }
              pbVar9 = pbVar9 + 1;
            }
            *(undefined4 *)(param_1 + 0x170) = 1;
            *param_2 = (int)pbVar9;
            return;
          }
        }
        param_2[3] = iStack_10;
      }
      return;
    }
    if ((pbVar9 + 0x11 < pbVar1) &&
       (iVar3 = strncmp((char *)pbVar9,"StandardEncoding",0x10), iVar3 == 0)) {
      *(undefined4 *)(param_1 + 0x170) = 2;
      return;
    }
    if ((pbVar9 + 0xf < pbVar1) &&
       (iVar3 = strncmp((char *)pbVar9,"ExpertEncoding",0xe), iVar3 == 0)) {
      *(undefined4 *)(param_1 + 0x170) = 4;
      return;
    }
    if ((pbVar9 + 0x12 < pbVar1) &&
       (iVar3 = strncmp((char *)pbVar9,"ISOLatin1Encoding",0x11), iVar3 == 0)) {
      *(undefined4 *)(param_1 + 0x170) = 3;
      return;
    }
  }
  param_2[3] = 3;
  return;
}


/* FUN_006af8e0 @ 006af8e0  kind=gamemisc  attributed-by=none  size=998 */

void FUN_006af8e0(int param_1,uint *param_2)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uStack_30;
  int local_2c;
  uint uStack_28;
  uint uStack_24;
  uint local_20;
  int iStack_1c;
  int iStack_18;
  byte *pbStack_14;
  char *local_10;
  int iStack_c;
  uint uStack_8;
  int iStack_4;
  
  local_20 = param_2[4];
  pcVar3 = (char *)param_2[2];
  uVar13 = 0;
  uVar12 = 0;
  local_2c = 0;
  bVar5 = false;
  local_10 = pcVar3;
  (*(code *)param_2[7])(param_2);
  pcVar4 = (char *)*param_2;
  if ((pcVar4 < pcVar3) && (cVar1 = *pcVar4, *param_2 = (uint)(pcVar4 + 1), cVar1 == '[')) {
    (*(code *)param_2[7])(param_2);
    uVar10 = 0;
    iStack_18 = 0;
    uStack_28 = 0;
    iStack_c = 0;
    uStack_24 = 0;
    if ((char *)*param_2 < local_10) {
      do {
        pbStack_14 = (byte *)*param_2;
        bVar2 = *pbStack_14;
        if (bVar2 == 0x5d) {
          *param_2 = *param_2 + 1;
          goto LAB_006afcac;
        }
        if (bVar2 == 0x3c) {
          (*(code *)param_2[8])(param_2);
          if (param_2[3] != 0) goto LAB_006afcac;
          iVar11 = (int)((*param_2 - (int)pbStack_14) + -1) / 2;
          local_2c = FUN_00693a60(local_20,1,iStack_c,iVar11,local_2c,&uStack_30);
          if (uStack_30 != 0) goto LAB_006afca9;
          *param_2 = (uint)pbStack_14;
          bVar5 = true;
          (*(code *)param_2[0xb])(param_2,local_2c,iVar11,&uStack_8,1);
          uStack_28 = uStack_8;
          uVar10 = uStack_24;
          iStack_c = iVar11;
        }
        else if (bVar2 - 0x30 < 10) {
          if (!bVar5) {
            uStack_28 = (*(code *)param_2[9])(param_2);
            (*(code *)param_2[8])(param_2);
            if (param_2[3] != 0) {
              return;
            }
            local_2c = *param_2 + 1;
            pcVar3 = (char *)(*param_2 + 1 + uStack_28);
            *param_2 = (uint)pcVar3;
            if (pcVar3 < local_10) goto LAB_006afa51;
          }
          uStack_30 = 3;
          goto LAB_006afca9;
        }
LAB_006afa51:
        if (local_2c == 0) {
LAB_006afc9c:
          uStack_30 = 3;
          goto LAB_006afca9;
        }
        if (*(char *)((uStack_28 - 1) + local_2c) == '\0') {
          uVar8 = uStack_28 & 0x80000001;
          if ((int)uVar8 < 0) {
            uVar8 = (uVar8 - 1 | 0xfffffffe) + 1;
          }
          if (uVar8 == 1) {
            uStack_28 = uStack_28 - 1;
          }
        }
        if (uStack_28 == 0) goto LAB_006afc9c;
        pbStack_14 = (byte *)0x0;
        if (0 < (int)uStack_28) {
          do {
            if (iStack_18 == 0) {
              iVar11 = *(int *)(param_1 + 0x1ec);
              if (0xb < uVar10) {
                uVar12 = (uint)*(byte *)(iVar11 + 4) * 0x10 + (uint)*(byte *)(iVar11 + 5);
                uVar13 = uVar12 * 0x10 + 0xc;
                iStack_18 = 1;
                uVar7 = FUN_00693a60(local_20,1,0xc,uVar13,iVar11,&uStack_30);
                *(undefined4 *)(param_1 + 0x1ec) = uVar7;
                if (uStack_30 == 0) goto LAB_006afb1d;
                goto LAB_006afca9;
              }
              *(byte *)(uVar10 + iVar11) = pbStack_14[local_2c];
LAB_006afc4d:
              uVar10 = uVar10 + 1;
              uStack_24 = uVar10;
            }
            else {
              if (iStack_18 == 1) {
LAB_006afb1d:
                if (uVar10 < uVar13) {
LAB_006afc3d:
                  *(byte *)(uVar10 + *(int *)(param_1 + 0x1ec)) = pbStack_14[local_2c];
                  goto LAB_006afc4d;
                }
                iVar11 = 0;
                iStack_18 = 0;
                iStack_1c = 0;
                if (1 < uVar12) {
                  puVar6 = (undefined1 *)(*(int *)(param_1 + 0x1ec) + 0x1a);
                  iVar9 = (uVar12 - 2 >> 1) + 1;
                  iVar11 = iVar9 * 2;
                  do {
                    iStack_18 = iStack_18 +
                                (CONCAT31(CONCAT21(CONCAT11(puVar6[-2],puVar6[-1]),*puVar6),
                                          puVar6[1]) + 3U & 0xfffffffc);
                    iStack_1c = iStack_1c +
                                (CONCAT31(CONCAT21(CONCAT11(puVar6[0xe],puVar6[0xf]),puVar6[0x10]),
                                          puVar6[0x11]) + 3U & 0xfffffffc);
                    puVar6 = puVar6 + 0x20;
                    iVar9 = iVar9 + -1;
                    uVar10 = uStack_24;
                    iStack_4 = iVar11;
                  } while (iVar9 != 0);
                }
                if (iVar11 < (int)uVar12) {
                  iVar9 = *(int *)(param_1 + 0x1ec) + 0x18 + iVar11 * 0x10;
                  uVar13 = uVar13 + (CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)
                                                                 (*(int *)(param_1 + 0x1ec) + 0x18 +
                                                                 iVar11 * 0x10),
                                                                *(undefined1 *)(iVar9 + 1)),
                                                       *(undefined1 *)(iVar9 + 2)),
                                              *(undefined1 *)(iVar9 + 3)) + 3U & 0xfffffffc);
                }
                uVar13 = uVar13 + iStack_1c + iStack_18;
                iStack_18 = 2;
                *(uint *)(param_1 + 0x1f0) = uVar13;
                uVar7 = FUN_00693a60(local_20,1,uVar12 * 0x10 + 0xc,uVar13 + 1,
                                     *(undefined4 *)(param_1 + 0x1ec),&uStack_30);
                *(undefined4 *)(param_1 + 0x1ec) = uVar7;
                if (uStack_30 == 0) goto LAB_006afc39;
                goto LAB_006afca9;
              }
              if (iStack_18 == 2) {
LAB_006afc39:
                if (uVar10 < uVar13) goto LAB_006afc3d;
                goto LAB_006afc9c;
              }
            }
            pbStack_14 = pbStack_14 + 1;
          } while ((int)pbStack_14 < (int)uStack_28);
        }
        (*(code *)param_2[7])(param_2);
      } while ((char *)*param_2 < local_10);
    }
  }
  uStack_30 = 3;
LAB_006afca9:
  param_2[3] = uStack_30;
LAB_006afcac:
  if (bVar5) {
    FUN_00691290(local_20,local_2c);
  }
  return;
}


/* FUN_006afcd0 @ 006afcd0  kind=gamemisc  attributed-by=none  size=1054 */

void FUN_006afcd0(uint param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  byte extraout_CL;
  byte bVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  int iStack_c;
  
  puVar2 = *(undefined4 **)(param_1 + 0x1e8);
  pbVar8 = (byte *)param_2[2];
  iVar4 = param_2[4];
  param_1 = 0;
  bVar11 = false;
  (*(code *)param_2[7])(param_2);
  if ((byte *)*param_2 < pbVar8) {
    bVar6 = *(byte *)*param_2;
    if (bVar6 - 0x30 < 10) {
      iVar3 = (*(code *)param_2[9])(param_2);
      param_2[0x24] = iVar3;
      if (param_2[3] != 0) {
        return;
      }
LAB_006afdb5:
      if ((byte *)*param_2 < pbVar8) {
        iVar3 = (**(code **)*puVar2)(param_2 + 0x32,param_2[0x24],iVar4);
        if (((iVar3 != 0) ||
            (iVar3 = (**(code **)*puVar2)(param_2 + 0x25,param_2[0x24],iVar4), iVar3 != 0)) ||
           (iVar3 = (**(code **)*puVar2)(param_2 + 0x3f,4,iVar4), iVar3 != 0)) goto LAB_006b00e3;
        uVar9 = 0;
        (*(code *)param_2[7])(param_2);
        pbVar7 = (byte *)*param_2;
        while (((pbVar7 < pbVar8 &&
                (((bVar6 = *pbVar7, bVar6 != 0x65 || (pbVar8 <= pbVar7 + 3)) ||
                 ((pbVar7[1] != 0x6e ||
                  ((pbVar7[2] != 100 || (iVar4 = FUN_006af480(), bVar6 = extraout_CL, iVar4 == 0))))
                 )))) && (bVar6 != 0x3e))) {
          (*(code *)param_2[8])(param_2);
          if (param_2[3] != 0) {
            return;
          }
          if (*pbVar7 == 0x2f) {
            pbVar7 = pbVar7 + 1;
            if (pbVar8 <= pbVar7) goto LAB_006b00de;
            iVar4 = *param_2;
            iVar3 = (*(code *)param_2[0x30])(param_2 + 0x25,uVar9,pbVar7,(iVar4 - (int)pbVar7) + 1);
            if (iVar3 != 0) goto LAB_006b00e3;
            *(undefined1 *)((iVar4 - (int)pbVar7) + *(int *)(param_2[0x2b] + uVar9 * 4)) = 0;
            if (*pbVar7 == 0x2e) {
              pbVar7 = *(byte **)(param_2[0x2b] + uVar9 * 4);
              pcVar5 = ".notdef";
              do {
                bVar6 = *pcVar5;
                bVar10 = bVar6 < *pbVar7;
                if (bVar6 != *pbVar7) {
LAB_006afef0:
                  iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
                  goto LAB_006afef5;
                }
                if (bVar6 == 0) break;
                bVar6 = pcVar5[1];
                bVar10 = bVar6 < pbVar7[1];
                if (bVar6 != pbVar7[1]) goto LAB_006afef0;
                pcVar5 = pcVar5 + 2;
                pbVar7 = pbVar7 + 2;
              } while (bVar6 != 0);
              iVar4 = 0;
LAB_006afef5:
              if (iVar4 == 0) {
                bVar11 = true;
                param_1 = uVar9;
              }
            }
            (*(code *)param_2[7])(param_2);
            iVar4 = *param_2;
            (*(code *)param_2[9])(param_2);
            pbVar7 = (byte *)*param_2;
            if (pbVar8 <= pbVar7) goto LAB_006b00de;
            iVar3 = (*(code *)param_2[0x3d])(param_2 + 0x32,uVar9,iVar4,pbVar7 + (1 - iVar4));
            if (iVar3 != 0) goto LAB_006b00e3;
            iVar3 = uVar9 * 4;
            uVar9 = uVar9 + 1;
            pbVar7[*(int *)(param_2[0x38] + iVar3) - iVar4] = 0;
            if ((uint)param_2[0x24] <= uVar9) break;
          }
          (*(code *)param_2[7])(param_2);
          pbVar7 = (byte *)*param_2;
        }
        param_2[0x24] = uVar9;
        if (bVar11) {
          pcVar5 = ".notdef";
          pbVar8 = *(byte **)param_2[0x2b];
          do {
            bVar6 = *pcVar5;
            bVar11 = bVar6 < *pbVar8;
            if (bVar6 != *pbVar8) {
LAB_006affb0:
              iVar4 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
              goto LAB_006affb5;
            }
            if (bVar6 == 0) break;
            bVar6 = pcVar5[1];
            bVar11 = bVar6 < pbVar8[1];
            if (bVar6 != pbVar8[1]) goto LAB_006affb0;
            pcVar5 = pcVar5 + 2;
            pbVar8 = pbVar8 + 2;
          } while (bVar6 != 0);
          iVar4 = 0;
LAB_006affb5:
          if (iVar4 == 0) {
            return;
          }
          piVar1 = param_2 + 0x3f;
          iVar3 = (*(code *)param_2[0x4a])
                            (piVar1,0,*(byte **)param_2[0x2b],*(undefined4 *)param_2[0x2c]);
          if (iVar3 == 0) {
            iVar3 = (*(code *)param_2[0x4a])
                              (piVar1,1,*(undefined4 *)param_2[0x38],*(undefined4 *)param_2[0x39]);
            if (((((iVar3 == 0) &&
                  (iVar3 = (*(code *)param_2[0x4a])
                                     (piVar1,2,*(undefined4 *)(param_2[0x2b] + param_1 * 4),
                                      *(undefined4 *)(param_2[0x2c] + param_1 * 4)), iVar3 == 0)) &&
                 (iVar3 = (*(code *)param_2[0x4a])
                                    (piVar1,3,*(undefined4 *)(param_2[0x38] + param_1 * 4),
                                     *(undefined4 *)(param_2[0x39] + param_1 * 4)), iVar3 == 0)) &&
                ((iVar3 = (*(code *)param_2[0x30])
                                    (param_2 + 0x25,param_1,*(undefined4 *)param_2[0x45],
                                     *(undefined4 *)param_2[0x46]), iVar3 == 0 &&
                 (iVar3 = (*(code *)param_2[0x3d])
                                    (param_2 + 0x32,param_1,*(undefined4 *)(param_2[0x45] + 4),
                                     *(undefined4 *)(param_2[0x46] + 4)), iVar3 == 0)))) &&
               ((iVar3 = (*(code *)param_2[0x30])
                                   (param_2 + 0x25,0,*(undefined4 *)(param_2[0x45] + 8),
                                    *(undefined4 *)(param_2[0x46] + 8)), iVar3 == 0 &&
                (iVar3 = (*(code *)param_2[0x3d])
                                   (param_2 + 0x32,0,*(undefined4 *)(param_2[0x45] + 0xc),
                                    *(undefined4 *)(param_2[0x46] + 0xc)), iVar3 == 0)))) {
              return;
            }
          }
          goto LAB_006b00e3;
        }
      }
    }
    else if (bVar6 == 0x3c) {
      iStack_c = 0;
      (*(code *)param_2[8])(param_2);
      if (param_2[3] != 0) {
        return;
      }
      (*(code *)param_2[7])(param_2);
      pbVar7 = (byte *)*param_2;
      if (pbVar7 < pbVar8) {
        do {
          if (*(char *)*param_2 == '/') {
            iStack_c = iStack_c + 1;
          }
          else if (*(char *)*param_2 == '>') {
            param_2[0x24] = iStack_c;
            *param_2 = (int)pbVar7;
            break;
          }
          (*(code *)param_2[8])(param_2);
          if (param_2[3] != 0) {
            return;
          }
          (*(code *)param_2[7])(param_2);
        } while ((byte *)*param_2 < pbVar8);
        goto LAB_006afdb5;
      }
    }
  }
LAB_006b00de:
  iVar3 = 3;
LAB_006b00e3:
  param_2[3] = iVar3;
  return;
}


/* FUN_006b00f0 @ 006b00f0  kind=gamemisc  attributed-by=none  size=122 */

undefined4 FUN_006b00f0(void)

{
  int iVar1;
  int in_EAX;
  undefined4 uVar2;
  int unaff_ESI;
  
  iVar1 = *(int *)(in_EAX + 8);
  if (iVar1 == 10) {
    (**(code **)(in_EAX + 0xc))();
    return *(undefined4 *)(unaff_ESI + 0xc);
  }
  if ((iVar1 != 8) && (iVar1 != 9)) {
    uVar2 = (**(code **)(unaff_ESI + 0x40))();
    return uVar2;
  }
  uVar2 = (**(code **)(unaff_ESI + 0x44))();
  return uVar2;
}


/* FUN_006b0170 @ 006b0170  kind=gamemisc  attributed-by=none  size=505 */

uint FUN_006b0170(void)

{
  int *piVar1;
  uint uVar2;
  int in_EAX;
  int iVar3;
  uint in_ECX;
  int *piVar4;
  uint *in_EDX;
  int *piVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  char *_Str1;
  int *piVar9;
  undefined **ppuStack_18;
  int iStack_4;
  
  *in_EDX = in_ECX;
  pcVar6 = (char *)(in_ECX + in_EAX);
  in_EDX[2] = (uint)pcVar6;
  in_EDX[3] = 0;
  (*(code *)in_EDX[7])();
  pcVar7 = (char *)*in_EDX;
  while (pcVar7 < pcVar6) {
    pcVar7 = (char *)*in_EDX;
    if (((*pcVar7 == 'F') && (pcVar7 + 0x19 < pcVar6)) &&
       (iVar3 = strncmp(pcVar7,"FontDirectory",0xd), iVar3 == 0)) {
      (*(code *)in_EDX[8])();
      (*(code *)in_EDX[7])();
      pcVar7 = (char *)*in_EDX;
      _Str1 = pcVar7;
      if (pcVar7 < pcVar6) {
        do {
          if (((*_Str1 == 'k') && (_Str1 + 5 < pcVar6)) &&
             (iVar3 = strncmp(_Str1,"known",5), iVar3 == 0)) {
            if (_Str1 < pcVar6) {
              (*(code *)in_EDX[8])();
              (*(code *)in_EDX[0xe])();
              if (iStack_4 == 3) {
                pcVar7 = (char *)*in_EDX;
              }
            }
            goto LAB_006b024f;
          }
          (*(code *)in_EDX[8])();
          if (in_EDX[3] != 0) goto LAB_006b035e;
          (*(code *)in_EDX[7])();
          _Str1 = (char *)*in_EDX;
        } while (_Str1 < pcVar6);
        *in_EDX = (uint)pcVar7;
      }
      else {
LAB_006b024f:
        *in_EDX = (uint)pcVar7;
      }
    }
    else if ((*pcVar7 == '/') && (pcVar7 + 2 < pcVar6)) {
      piVar9 = (int *)(pcVar7 + 1);
      *in_EDX = (uint)piVar9;
      (*(code *)in_EDX[8])();
      if (in_EDX[3] != 0) break;
      uVar8 = (int)*in_EDX - (int)piVar9;
      if ((uVar8 - 1 < 0x15) && ((char *)*in_EDX < pcVar6)) {
        ppuStack_18 = &PTR_s_version_00733640;
        do {
          piVar5 = (int *)*ppuStack_18;
          if ((piVar5 != (int *)0x0) && ((char)*piVar9 == (char)*piVar5)) {
            piVar4 = piVar5;
            do {
              iVar3 = *piVar4;
              piVar4 = (int *)((int)piVar4 + 1);
            } while ((char)iVar3 != '\0');
            piVar1 = piVar9;
            uVar2 = uVar8;
            if (uVar8 == (int)piVar4 - ((int)piVar5 + 1)) {
              for (; 3 < uVar2; uVar2 = uVar2 - 4) {
                if (*piVar1 != *piVar5) goto LAB_006b0310;
                piVar5 = piVar5 + 1;
                piVar1 = piVar1 + 1;
              }
              if ((uVar2 == 0) ||
                 (((char)*piVar5 == (char)*piVar1 &&
                  ((uVar2 < 2 ||
                   ((*(char *)((int)piVar5 + 1) == *(char *)((int)piVar1 + 1) &&
                    ((uVar2 < 3 || (*(char *)((int)piVar5 + 2) == *(char *)((int)piVar1 + 2)))))))))
                 )) {
                uVar8 = FUN_006b00f0();
                in_EDX[3] = uVar8;
                if (uVar8 != 0) {
                  return uVar8;
                }
                break;
              }
            }
          }
LAB_006b0310:
          ppuStack_18 = ppuStack_18 + 9;
        } while ((int)ppuStack_18 < 0x733910);
      }
    }
    else {
      (*(code *)in_EDX[8])();
      if (in_EDX[3] != 0) break;
    }
    (*(code *)in_EDX[7])();
    pcVar7 = (char *)*in_EDX;
  }
LAB_006b035e:
  return in_EDX[3];
}


/* FUN_006b0370 @ 006b0370  kind=gamemisc  attributed-by=none  size=44 */

void FUN_006b0370(void)

{
  void *unaff_ESI;
  
  memset(unaff_ESI,0,0x130);
  *(undefined4 *)((int)unaff_ESI + 0x90) = 0;
  *(undefined4 *)((int)unaff_ESI + 0x58) = 0;
  *(undefined4 *)((int)unaff_ESI + 0x68) = 0;
  *(undefined4 *)((int)unaff_ESI + 0xd4) = 0;
  *(undefined4 *)((int)unaff_ESI + 0xa0) = 0;
  return;
}


/* FUN_006b03a0 @ 006b03a0  kind=gamemisc  attributed-by=none  size=95 */

void FUN_006b03a0(void)

{
  int in_EAX;
  
  if (*(code **)(in_EAX + 0x8c) != (code *)0x0) {
    (**(code **)(in_EAX + 0x8c))(in_EAX + 0x5c);
  }
  if (*(code **)(in_EAX + 0xf8) != (code *)0x0) {
    (**(code **)(in_EAX + 0xf8))(in_EAX + 200);
  }
  if (*(code **)(in_EAX + 0xc4) != (code *)0x0) {
    (**(code **)(in_EAX + 0xc4))(in_EAX + 0x94);
  }
  if (*(code **)(in_EAX + 300) != (code *)0x0) {
    (**(code **)(in_EAX + 300))(in_EAX + 0xfc);
  }
  FUN_006af450();
  return;
}


/* FUN_006b04d0 @ 006b04d0  kind=gamemisc  attributed-by=none  size=28 */

undefined4 FUN_006b04d0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0xa8);
  for (iVar1 = 0x31; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_2 = *puVar2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  return 0;
}


/* FUN_006b0500 @ 006b0500  kind=gamemisc  attributed-by=none  size=609 */

int FUN_006b0500(void)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte *pbVar4;
  int iVar5;
  char *pcVar6;
  byte *pbVar7;
  byte *pbVar8;
  int unaff_EBX;
  undefined4 *puVar9;
  int iVar10;
  bool bVar11;
  int local_144;
  int local_140;
  int local_13c;
  int local_138;
  byte *local_134;
  undefined4 local_d8;
  int local_c4;
  int local_bc;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_84;
  undefined4 local_68;
  int local_5c;
  undefined4 local_50;
  undefined4 local_4c;
  
  uVar2 = *(undefined4 *)(unaff_EBX + 100);
  FUN_006b0370();
  uVar3 = FUN_00692230(uVar2,0xc,&local_140);
  *(undefined4 *)(unaff_EBX + 0x1ec) = uVar3;
  if (((local_140 == 0) && (local_140 = FUN_006af310(uVar2), local_140 == 0)) &&
     (local_140 = FUN_006b0170(), local_140 == 0)) {
    if (*(char *)(unaff_EBX + 0x1b1) == '*') {
      *(undefined4 *)(unaff_EBX + 0x1a0) = local_a0;
      if (local_5c == 0) {
        local_140 = 3;
      }
      *(undefined4 *)(unaff_EBX + 0x18c) = local_68;
      *(undefined4 *)(unaff_EBX + 0x1a8) = local_50;
      local_5c = 0;
      *(undefined4 *)(unaff_EBX + 0x1ac) = local_4c;
      *(undefined4 *)(unaff_EBX + 400) = local_9c;
      *(undefined4 *)(unaff_EBX + 0x1a4) = local_84;
      local_9c = 0;
      local_84 = 0;
      if (*(int *)(unaff_EBX + 0x170) == 1) {
        local_13c = 0;
        local_138 = 0;
        local_144 = 0;
        if (0 < local_c4) {
LAB_006b0632:
          iVar10 = 0;
          *(undefined2 *)(*(int *)(unaff_EBX + 0x180) + local_144 * 2) = 0;
          *(char **)(*(int *)(unaff_EBX + 0x184) + local_144 * 4) = ".notdef";
          local_134 = *(byte **)(local_bc + local_144 * 4);
          if ((local_134 != (byte *)0x0) && (0 < *(int *)(unaff_EBX + 0x1a0))) {
            puVar9 = *(undefined4 **)(unaff_EBX + 0x1a4);
            do {
              pbVar8 = (byte *)*puVar9;
              pbVar4 = local_134;
              pbVar7 = pbVar8;
              do {
                bVar1 = *pbVar4;
                bVar11 = bVar1 < *pbVar7;
                if (bVar1 != *pbVar7) {
LAB_006b06a0:
                  iVar5 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                  goto LAB_006b06a5;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar4[1];
                bVar11 = bVar1 < pbVar7[1];
                if (bVar1 != pbVar7[1]) goto LAB_006b06a0;
                pbVar4 = pbVar4 + 2;
                pbVar7 = pbVar7 + 2;
              } while (bVar1 != 0);
              iVar5 = 0;
LAB_006b06a5:
              if (iVar5 == 0) {
                *(short *)(*(int *)(unaff_EBX + 0x180) + local_144 * 2) = (short)iVar10;
                *(byte **)(*(int *)(unaff_EBX + 0x184) + local_144 * 4) = pbVar8;
                pcVar6 = ".notdef";
                goto LAB_006b06d5;
              }
              iVar10 = iVar10 + 1;
              puVar9 = puVar9 + 1;
            } while (iVar10 < *(int *)(unaff_EBX + 0x1a0));
          }
          goto LAB_006b071f;
        }
LAB_006b0731:
        *(int *)(unaff_EBX + 0x178) = local_13c;
        *(int *)(unaff_EBX + 0x17c) = local_138;
        *(undefined4 *)(unaff_EBX + 0x174) = local_d8;
      }
    }
    else {
      local_140 = 2;
    }
  }
  FUN_006b03a0();
  return local_140;
  while( true ) {
    bVar1 = pcVar6[1];
    bVar11 = bVar1 < pbVar8[1];
    if (bVar1 != pbVar8[1]) goto LAB_006b06f5;
    pcVar6 = pcVar6 + 2;
    pbVar8 = pbVar8 + 2;
    if (bVar1 == 0) break;
LAB_006b06d5:
    bVar1 = *pcVar6;
    bVar11 = bVar1 < *pbVar8;
    if (bVar1 != *pbVar8) {
LAB_006b06f5:
      iVar10 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
      goto LAB_006b06fa;
    }
    if (bVar1 == 0) break;
  }
  iVar10 = 0;
LAB_006b06fa:
  if (iVar10 != 0) {
    if (local_144 < local_13c) {
      local_13c = local_144;
    }
    if (local_138 <= local_144) {
      local_138 = local_144 + 1;
    }
  }
LAB_006b071f:
  local_144 = local_144 + 1;
  if (local_c4 <= local_144) goto LAB_006b0731;
  goto LAB_006b0632;
}


/* FUN_006b0770 @ 006b0770  kind=gamemisc  attributed-by=none  size=648 */

int FUN_006b0770(undefined4 param_1,undefined4 *param_2,int param_3,int param_4,undefined4 param_5)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  undefined4 *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_8;
  undefined4 local_4;
  
  piVar4 = param_2 + 0x7d;
  *piVar4 = 0;
  *param_2 = 1;
  iVar5 = FUN_0068fe10(param_2[0x18],"postscript-cmaps");
  param_2[0x79] = iVar5;
  iVar6 = FUN_0068fdf0(*(undefined4 *)(param_2[0x18] + 4),"psaux");
  param_2[0x7a] = iVar6;
  iVar7 = FUN_006b0500();
  if ((iVar7 == 0) && (-1 < param_3)) {
    if (0 < param_3) {
      return 6;
    }
    param_2[4] = param_2[0x68];
    param_2[9] = 0;
    param_2[1] = 0;
    param_2[2] = 0x211;
    if (*(char *)(param_2 + 0x27) != '\0') {
      param_2[2] = 0x215;
    }
    param_2[2] = param_2[2] | 0x800;
    pcVar9 = (char *)param_2[0x24];
    param_2[5] = pcVar9;
    param_2[6] = "Regular";
    if (pcVar9 == (char *)0x0) {
      if (param_2[0x5b] != 0) {
        param_2[5] = param_2[0x5b];
      }
    }
    else {
      pcVar8 = (char *)param_2[0x23];
      if (pcVar8 != (char *)0x0) {
        cVar1 = *pcVar8;
        while (cVar1 != '\0') {
          cVar2 = *pcVar9;
          if (cVar1 == cVar2) {
            pcVar9 = pcVar9 + 1;
LAB_006b084f:
            pcVar8 = pcVar8 + 1;
          }
          else {
            if ((cVar1 == ' ') || (cVar1 == '-')) goto LAB_006b084f;
            if ((cVar2 != ' ') && (cVar2 != '-')) {
              if (*pcVar9 == '\0') {
                param_2[6] = pcVar8;
              }
              break;
            }
            pcVar9 = pcVar9 + 1;
          }
          cVar1 = *pcVar8;
        }
      }
    }
    local_18 = param_2[0x7c];
    local_1c = param_2[0x7b];
    param_2[7] = 0;
    param_2[8] = 0;
    local_20 = 1;
    if (param_4 != 0) {
      local_20 = 0x11;
      local_8 = param_4;
      local_4 = param_5;
    }
    iVar7 = FUN_00694b60(*(undefined4 *)(param_2[0x18] + 4),&local_20,0,piVar4);
    if (iVar7 == 0) {
      FUN_006919d0(*(undefined4 *)(*piVar4 + 0x58));
      iVar3 = *piVar4;
      param_2[0xd] = *(undefined4 *)(iVar3 + 0x34);
      param_2[0xe] = *(undefined4 *)(iVar3 + 0x38);
      param_2[0xf] = *(undefined4 *)(iVar3 + 0x3c);
      param_2[0x10] = *(undefined4 *)(iVar3 + 0x40);
      *(undefined2 *)(param_2 + 0x11) = *(undefined2 *)(iVar3 + 0x44);
      *(undefined2 *)((int)param_2 + 0x46) = *(undefined2 *)(iVar3 + 0x46);
      *(undefined2 *)(param_2 + 0x12) = *(undefined2 *)(iVar3 + 0x48);
      *(undefined2 *)((int)param_2 + 0x4a) = *(undefined2 *)(iVar3 + 0x4a);
      *(undefined2 *)(param_2 + 0x13) = *(undefined2 *)(iVar3 + 0x4c);
      *(undefined2 *)((int)param_2 + 0x4e) = *(undefined2 *)(iVar3 + 0x4e);
      *(undefined2 *)(param_2 + 0x14) = *(undefined2 *)((int)param_2 + 0x9e);
      *(undefined2 *)((int)param_2 + 0x52) = *(undefined2 *)(param_2 + 0x28);
      param_2[3] = 0;
      if (param_2[0x26] != 0) {
        param_2[3] = 1;
      }
      if ((*(byte *)(iVar3 + 0xc) & 2) != 0) {
        param_2[3] = param_2[3] | 2;
      }
      if ((*(byte *)(iVar3 + 8) & 0x20) != 0) {
        param_2[2] = param_2[2] | 0x20;
      }
      if ((iVar5 != 0) && (iVar6 != 0)) {
        piVar4 = *(int **)(iVar6 + 0x14);
        local_2c = param_2;
        local_24 = 0x10003;
        local_28 = 0x756e6963;
        iVar7 = FUN_00693ed0(piVar4[3],0,&local_2c,0);
        if ((iVar7 == 0) || (iVar7 == 0xa3)) {
          iVar7 = 0;
          switch(param_2[0x5c]) {
          case 1:
            local_28 = 0x41444243;
            local_24 = 0x20007;
            iVar5 = piVar4[2];
            break;
          case 2:
            local_28 = 0x41444f42;
            local_24 = 7;
            iVar5 = *piVar4;
            break;
          case 3:
            local_28 = 0x6c617431;
            local_24 = 0x30007;
            iVar5 = piVar4[3];
            break;
          case 4:
            local_28 = 0x41444245;
            local_24 = 0x10007;
            iVar5 = piVar4[1];
            break;
          default:
            goto LAB_006b0a58;
          }
          if (iVar5 != 0) {
            iVar7 = FUN_00693ed0(iVar5,0,&local_2c,0);
          }
        }
      }
    }
  }
LAB_006b0a58:
  return iVar7;
}


/* FUN_006b0a80 @ 006b0a80  kind=gamemisc  attributed-by=none  size=147 */

int FUN_006b0a80(uint *param_1,uint *param_2,undefined4 param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  byte *unaff_EBX;
  byte *pbVar5;
  byte *pbVar6;
  uint local_4;
  
  pbVar5 = (byte *)*param_1;
  pbVar6 = pbVar5 + 1;
  iVar4 = 0;
  if (pbVar6 <= unaff_EBX) {
    local_4 = (uint)*pbVar5;
    if (local_4 == 0) {
      *param_1 = (uint)pbVar6;
      return iVar4;
    }
    while (pbVar5 = pbVar6, pbVar6 + 2 <= unaff_EBX) {
      pbVar1 = pbVar6 + 1;
      pbVar5 = pbVar6 + 2;
      pbVar6 = pbVar5 + *pbVar6;
      if (unaff_EBX < pbVar6) break;
      if (param_2 != (uint *)0x0) {
        uVar2 = param_2[1];
        puVar3 = param_2;
        while (uVar2 != 0) {
          if (*puVar3 == (uint)*pbVar1) {
            iVar4 = (*(code *)puVar3[1])(pbVar5,pbVar6,param_3);
            if (iVar4 != 0) goto LAB_006b0af1;
            break;
          }
          uVar2 = puVar3[3];
          puVar3 = puVar3 + 2;
        }
      }
      local_4 = local_4 - 1;
      pbVar5 = pbVar6;
      if (local_4 == 0) {
LAB_006b0af1:
        *param_1 = (uint)pbVar5;
        return iVar4;
      }
    }
  }
  *param_1 = (uint)pbVar5;
  return 8;
}


/* FUN_006b0b20 @ 006b0b20  kind=gamemisc  attributed-by=none  size=44 */

void FUN_006b0b20(void)

{
  int iVar1;
  int unaff_ESI;
  
  iVar1 = FUN_006908c0();
  if (iVar1 == 0) {
    iVar1 = FUN_00692010();
    if (iVar1 == 0) {
      *(int *)(unaff_ESI + 0x24) = *(int *)(unaff_ESI + 0x24) + *(int *)(unaff_ESI + 0x48) * 0x10000
      ;
    }
  }
  return;
}


/* FUN_006b0b50 @ 006b0b50  kind=gamemisc  attributed-by=none  size=34 */

undefined1 FUN_006b0b50(void)

{
  undefined1 uVar1;
  int *in_ECX;
  
  uVar1 = 1;
  if ((((*in_ECX != 0x50465230) || (4 < (uint)in_ECX[1])) || ((uint)in_ECX[3] < 0x3a)) ||
     (in_ECX[2] != 0xd0a)) {
    uVar1 = 0;
  }
  return uVar1;
}


/* FUN_006b0b80 @ 006b0b80  kind=gamemisc  attributed-by=none  size=57 */

void FUN_006b0b80(void)

{
  int iVar1;
  uint uVar2;
  uint *unaff_EBX;
  
  iVar1 = FUN_006908c0();
  if (iVar1 != 0) {
    *unaff_EBX = 0;
    return;
  }
  uVar2 = FUN_00690b80();
  *unaff_EBX = uVar2 & 0xffff;
  return;
}


/* FUN_006b0bc0 @ 006b0bc0  kind=gamemisc  attributed-by=none  size=479 */

int FUN_006b0bc0(int param_1,byte *param_2,undefined4 *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  int local_14 [5];
  
  local_14[0] = 0;
  if ((byte *)(param_1 + 5U) <= param_2) {
    uVar5 = (uint)*(byte *)(param_1 + 4);
    bVar1 = *(byte *)(param_1 + 3);
    uVar6 = uVar5 + param_3[0x17];
    pbVar8 = (byte *)(param_1 + 5);
    if ((uint)param_3[0x18] < uVar6) {
      uVar6 = uVar6 + 3 & 0xfffffffc;
      uVar2 = FUN_00693a60(*param_3,0x24,param_3[0x17],uVar6,param_3[0x19],local_14);
      param_3[0x19] = uVar2;
      if (local_14[0] != 0) {
        return local_14[0];
      }
      param_3[0x18] = uVar6;
    }
    iVar7 = 8;
    if ((bVar1 & 1) != 0) {
      iVar7 = 9;
    }
    if ((bVar1 & 2) != 0) {
      iVar7 = iVar7 + 1;
    }
    if ((bVar1 & 4) != 0) {
      iVar7 = iVar7 + 1;
    }
    if ((bVar1 & 8) != 0) {
      iVar7 = iVar7 + 1;
    }
    if ((bVar1 & 0x10) != 0) {
      iVar7 = iVar7 + 1;
    }
    puVar4 = (uint *)(param_3[0x19] + param_3[0x17] * 0x24);
    uVar6 = uVar5;
    if (pbVar8 + iVar7 * uVar5 <= param_2) {
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        if ((bVar1 & 1) == 0) {
          uVar3 = (uint)*pbVar8;
          pbVar9 = pbVar8 + 1;
        }
        else {
          pbVar9 = pbVar8 + 2;
          uVar3 = (uint)CONCAT11(*pbVar8,pbVar8[1]);
        }
        *puVar4 = uVar3;
        if ((bVar1 & 2) == 0) {
          uVar3 = (uint)*pbVar9;
          pbVar8 = pbVar9 + 1;
        }
        else {
          pbVar8 = pbVar9 + 2;
          uVar3 = (uint)CONCAT11(*pbVar9,pbVar9[1]);
        }
        puVar4[1] = uVar3;
        puVar4[2] = (uint)*pbVar8;
        if ((bVar1 & 4) == 0) {
          pbVar9 = pbVar8 + 3;
          uVar3 = (uint)pbVar8[1];
        }
        else {
          pbVar9 = pbVar8 + 4;
          uVar3 = (uint)CONCAT11(pbVar8[1],pbVar8[2]);
        }
        puVar4[5] = uVar3 << 8 | (uint)pbVar9[-1];
        if ((bVar1 & 8) == 0) {
          pbVar10 = pbVar9 + 2;
          uVar3 = (uint)*pbVar9;
        }
        else {
          pbVar10 = pbVar9 + 3;
          uVar3 = (uint)CONCAT11(*pbVar9,pbVar9[1]);
        }
        puVar4[6] = uVar3 << 8 | (uint)pbVar10[-1];
        if ((bVar1 & 0x10) == 0) {
          uVar3 = (uint)*pbVar10;
          pbVar8 = pbVar10 + 1;
        }
        else {
          pbVar8 = pbVar10 + 2;
          uVar3 = (uint)CONCAT11(*pbVar10,pbVar10[1]);
        }
        puVar4[7] = uVar3;
        puVar4 = puVar4 + 9;
      }
      param_3[0x17] = param_3[0x17] + uVar5;
      return local_14[0];
    }
  }
  return 8;
}


/* FUN_006b0eb0 @ 006b0eb0  kind=gamemisc  attributed-by=none  size=416 */

int FUN_006b0eb0(undefined1 *param_1,byte *param_2,undefined4 *param_3)

{
  byte *pbVar1;
  int iVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  byte bVar5;
  uint uVar6;
  undefined4 uVar7;
  int local_8;
  undefined4 local_4;
  
  uVar7 = *param_3;
  local_8 = 0;
  local_4 = uVar7;
  puVar3 = (undefined4 *)FUN_00692230(uVar7,0x18,&local_8);
  if (local_8 != 0) {
    return local_8;
  }
  if (param_1 + 4 <= param_2) {
    *(undefined1 *)(puVar3 + 1) = *param_1;
    *(ushort *)((int)puVar3 + 6) = CONCAT11(param_1[1],param_1[2]);
    *(undefined1 *)((int)puVar3 + 5) = param_1[3];
    pbVar4 = param_1 + 4;
    puVar3[3] = pbVar4 + (param_3[1] - param_3[0x25]);
    bVar5 = *(byte *)((int)puVar3 + 5) & 1;
    puVar3[2] = 3;
    if (bVar5 != 0) {
      puVar3[2] = 5;
    }
    if ((*(byte *)((int)puVar3 + 5) & 2) != 0) {
      puVar3[2] = puVar3[2] + 1;
    }
    uVar6 = (uint)*(byte *)(puVar3 + 1);
    iVar2 = puVar3[2];
    uVar7 = local_4;
    if (pbVar4 + uVar6 * iVar2 <= param_2) {
      if (*(char *)(puVar3 + 1) == '\0') {
        FUN_00691290(local_4,puVar3);
        return local_8;
      }
      if (bVar5 == 0) {
        puVar3[4] = (uint)*pbVar4 << 0x10 | (uint)(byte)param_1[5];
        puVar3[5] = (uint)pbVar4[(uVar6 - 1) * iVar2] << 0x10 |
                    (uint)(pbVar4 + (uVar6 - 1) * iVar2)[1];
      }
      else {
        pbVar1 = pbVar4 + (uVar6 - 1) * iVar2 + 2;
        puVar3[4] = CONCAT22(CONCAT11(*pbVar4,param_1[5]),CONCAT11(param_1[6],param_1[7]));
        puVar3[5] = CONCAT22(CONCAT11(pbVar1[-2],pbVar1[-1]),CONCAT11(*pbVar1,pbVar1[1]));
      }
      *puVar3 = 0;
      *(undefined4 **)param_3[0x23] = puVar3;
      param_3[0x23] = puVar3;
      param_3[0x21] = param_3[0x21] + (uint)*(byte *)(puVar3 + 1);
      return 0;
    }
  }
  FUN_00691290(uVar7,puVar3);
  return 8;
}


/* FUN_006b1050 @ 006b1050  kind=gamemisc  attributed-by=none  size=121 */

int FUN_006b1050(undefined4 param_1,undefined4 *param_2)

{
  uint in_EAX;
  uint uVar1;
  void *unaff_EBX;
  void *_Dst;
  int local_4;
  
  _Dst = (void *)0x0;
  local_4 = 0;
  if ((in_EAX != 0) && (*(char *)((int)unaff_EBX + (in_EAX - 1)) == '\0')) {
    in_EAX = in_EAX - 1;
  }
  uVar1 = 0;
  if (in_EAX != 0) {
    do {
      if ((*(byte *)(uVar1 + (int)unaff_EBX) < 0x20) || (0x7f < *(byte *)(uVar1 + (int)unaff_EBX)))
      goto LAB_006b10bb;
      uVar1 = uVar1 + 1;
    } while (uVar1 < in_EAX);
  }
  if (in_EAX != 0) {
    _Dst = (void *)FUN_00692230(param_1,in_EAX + 1,&local_4);
    if (local_4 == 0) {
      memcpy(_Dst,unaff_EBX,in_EAX);
      *(undefined1 *)((int)_Dst + in_EAX) = 0;
    }
  }
LAB_006b10bb:
  *param_2 = _Dst;
  return local_4;
}


/* FUN_006b1190 @ 006b1190  kind=gamemisc  attributed-by=none  size=1209 */

int FUN_006b1190(int param_1,int param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  short sVar3;
  int in_EAX;
  byte *pbVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  undefined4 *unaff_EDI;
  int local_1c;
  byte *local_18;
  undefined4 local_14;
  uint local_10;
  byte *local_c;
  uint local_8;
  uint local_4;
  
  local_14 = *(undefined4 *)(param_1 + 0x1c);
  *unaff_EDI = local_14;
  unaff_EDI[1] = param_2;
  unaff_EDI[0x22] = 0;
  unaff_EDI[0x23] = unaff_EDI + 0x22;
  local_1c = FUN_006908c0(param_1,param_2);
  if (local_1c != 0) {
    return local_1c;
  }
  local_1c = FUN_00691f30(param_1);
  if (local_1c != 0) {
    return local_1c;
  }
  unaff_EDI[0x25] = *(undefined4 *)(param_1 + 0x20);
  puVar2 = *(undefined1 **)(param_1 + 0x20);
  pbVar14 = puVar2 + in_EAX;
  pbVar15 = local_18;
  local_c = pbVar14;
  if (puVar2 + 0xf <= pbVar14) {
    unaff_EDI[2] = (uint)CONCAT11(*puVar2,puVar2[1]);
    unaff_EDI[3] = (uint)CONCAT11(puVar2[2],puVar2[3]);
    unaff_EDI[4] = (uint)CONCAT11(puVar2[4],puVar2[5]);
    unaff_EDI[5] = (int)(short)((short)(char)puVar2[6] << 8) | (uint)(byte)puVar2[7];
    unaff_EDI[6] = (int)(short)((short)(char)puVar2[8] << 8) | (uint)(byte)puVar2[9];
    unaff_EDI[7] = (int)(short)((short)(char)puVar2[10] << 8) | (uint)(byte)puVar2[0xb];
    unaff_EDI[8] = (int)(short)((short)(char)puVar2[0xc] << 8) | (uint)(byte)puVar2[0xd];
    bVar1 = puVar2[0xe];
    local_4 = (uint)bVar1;
    local_8 = local_4 & 4;
    unaff_EDI[9] = local_4;
    local_18 = puVar2 + 0xf;
    if ((bVar1 & 4) == 0) {
      local_18 = puVar2 + 0x11;
      pbVar15 = puVar2 + 0xf;
      if (pbVar14 < local_18) goto LAB_006b1553;
      unaff_EDI[10] = (int)(short)((short)(char)puVar2[0xf] << 8) | (uint)(byte)puVar2[0x10];
    }
    iVar7 = 0;
    if (((char)bVar1 < '\0') &&
       (local_1c = FUN_006b0a80(&local_18,&DAT_00733ab4), iVar7 = local_1c, local_1c != 0))
    goto LAB_006b1621;
    local_1c = iVar7;
    pbVar4 = local_18 + 3;
    pbVar15 = local_18;
    if (pbVar4 <= pbVar14) {
      local_10 = (uint)CONCAT21(CONCAT11(*local_18,local_18[1]),local_18[2]);
      pbVar13 = pbVar4;
      if (local_10 != 0) {
        local_18 = pbVar4 + local_10;
        if (pbVar14 < pbVar4 + local_10) goto LAB_006b1553;
        do {
          pbVar13 = local_18;
          if (((local_18 < pbVar4 + 4) || (uVar12 = (uint)CONCAT11(*pbVar4,pbVar4[1]), uVar12 < 4))
             || (local_10 < uVar12)) break;
          sVar3 = CONCAT11(pbVar4[2],pbVar4[3]);
          if (sVar3 == 1) {
            puVar10 = unaff_EDI + 0x15;
LAB_006b13d2:
            local_1c = FUN_006b1050(local_14,puVar10);
            if (local_1c != 0) {
              return local_1c;
            }
          }
          else if (sVar3 == 2) {
            if (pbVar4 + 0x24 <= pbVar4 + uVar12) {
              unaff_EDI[0xb] = (int)(short)((short)(char)pbVar4[0xe] << 8) | (uint)pbVar4[0xf];
              unaff_EDI[0xc] = (int)(short)((short)(char)pbVar4[0x10] << 8) | (uint)pbVar4[0x11];
              unaff_EDI[0xd] = (int)(short)((short)(char)pbVar4[0x12] << 8) | (uint)pbVar4[0x13];
            }
          }
          else if (sVar3 == 3) {
            puVar10 = unaff_EDI + 0x16;
            goto LAB_006b13d2;
          }
          local_10 = local_10 - uVar12;
          pbVar13 = local_18;
          pbVar4 = pbVar4 + uVar12;
          pbVar14 = local_c;
        } while (local_10 != 0);
      }
      pbVar4 = pbVar13 + 1;
      pbVar15 = local_18;
      if (pbVar4 <= pbVar14) {
        uVar12 = (uint)*pbVar13;
        unaff_EDI[0x1a] = uVar12;
        if (pbVar4 + uVar12 * 2 <= pbVar14) {
          uVar5 = FUN_00693a60(local_14,4,0,uVar12,0,&local_1c);
          unaff_EDI[0x1b] = uVar5;
          if (local_1c != 0) goto LAB_006b1621;
          uVar6 = 0;
          pbVar15 = pbVar4;
          if (uVar12 != 0) {
            do {
              pbVar4 = pbVar15 + 2;
              *(uint *)(unaff_EDI[0x1b] + uVar6 * 4) =
                   (int)(short)((short)(char)*pbVar15 << 8) | (uint)pbVar15[1];
              uVar6 = uVar6 + 1;
              pbVar15 = pbVar4;
            } while (uVar6 < uVar12);
          }
          pbVar15 = local_18;
          if (pbVar4 + 8 <= pbVar14) {
            unaff_EDI[0x1c] = (uint)*pbVar4;
            unaff_EDI[0x1d] = (uint)pbVar4[1];
            unaff_EDI[0x11] = (uint)CONCAT11(pbVar4[2],pbVar4[3]);
            unaff_EDI[0xe] = (uint)CONCAT11(pbVar4[4],pbVar4[5]);
            pbVar13 = pbVar4 + 8;
            uVar12 = (uint)CONCAT11(pbVar4[6],pbVar4[7]);
            unaff_EDI[0x1e] = uVar12;
            unaff_EDI[0x1f] = pbVar13 + (param_2 - *(int *)(param_1 + 0x20));
            uVar5 = FUN_00693a60(local_14,0x10,0,uVar12,0,&local_1c);
            unaff_EDI[0x20] = uVar5;
            if (local_1c != 0) goto LAB_006b1621;
            uVar6 = local_4 & 2;
            iVar7 = 4;
            if (uVar6 != 0) {
              iVar7 = 5;
            }
            if (local_8 != 0) {
              iVar7 = iVar7 + 2;
            }
            uVar11 = local_4 & 8;
            if (uVar11 != 0) {
              iVar7 = iVar7 + 1;
            }
            local_c = (byte *)(local_4 & 0x10);
            if (local_c != (byte *)0x0) {
              iVar7 = iVar7 + 1;
            }
            local_10 = local_4 & 0x20;
            if (local_10 != 0) {
              iVar7 = iVar7 + 1;
            }
            pbVar15 = local_18;
            local_4 = uVar11;
            if (pbVar13 + iVar7 * uVar12 <= pbVar14) {
              if (uVar12 != 0) {
                iVar7 = 0;
                do {
                  puVar9 = (uint *)(unaff_EDI[0x20] + iVar7);
                  if (uVar6 == 0) {
                    uVar8 = (uint)*pbVar13;
                    pbVar14 = pbVar13 + 1;
                  }
                  else {
                    pbVar14 = pbVar13 + 2;
                    uVar8 = (uint)CONCAT11(*pbVar13,pbVar13[1]);
                  }
                  *puVar9 = uVar8;
                  if (local_8 == 0) {
                    uVar8 = unaff_EDI[10];
                  }
                  else {
                    bVar1 = *pbVar14;
                    pbVar15 = pbVar14 + 1;
                    pbVar14 = pbVar14 + 2;
                    uVar8 = (int)(short)((short)(char)bVar1 << 8) | (uint)*pbVar15;
                  }
                  puVar9[1] = uVar8;
                  if (uVar11 != 0) {
                    pbVar14 = pbVar14 + 1;
                  }
                  if (local_c == (byte *)0x0) {
                    uVar8 = (uint)*pbVar14;
                    pbVar15 = pbVar14 + 1;
                  }
                  else {
                    pbVar15 = pbVar14 + 2;
                    uVar8 = (uint)CONCAT11(*pbVar14,pbVar14[1]);
                  }
                  puVar9[2] = uVar8;
                  if (local_10 == 0) {
                    pbVar13 = pbVar15 + 2;
                    uVar8 = (uint)*pbVar15;
                  }
                  else {
                    pbVar13 = pbVar15 + 3;
                    uVar8 = (uint)CONCAT11(*pbVar15,pbVar15[1]);
                  }
                  iVar7 = iVar7 + 0x10;
                  uVar12 = uVar12 - 1;
                  puVar9[3] = uVar8 << 8 | (uint)pbVar13[-1];
                } while (uVar12 != 0);
              }
              goto LAB_006b1621;
            }
          }
        }
      }
    }
  }
LAB_006b1553:
  local_18 = pbVar15;
  local_1c = 8;
LAB_006b1621:
  FUN_00691fe0(param_1);
  uVar5 = FUN_00690930(param_1);
  unaff_EDI[0x24] = uVar5;
  unaff_EDI[0x25] = 0;
  return local_1c;
}


/* FUN_006b1650 @ 006b1650  kind=gamemisc  attributed-by=none  size=39 */

void FUN_006b1650(void)

{
  undefined4 *in_EAX;
  undefined4 in_EDX;
  
  *in_EAX = 0;
  in_EAX[1] = 0;
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  in_EAX[5] = 0;
  in_EAX[6] = 0;
  in_EAX[8] = 0;
  in_EAX[7] = in_EDX;
  *(undefined1 *)(in_EAX + 8) = 0;
  FUN_0068f020();
  return;
}


/* FUN_006b1680 @ 006b1680  kind=gamemisc  attributed-by=none  size=59 */

void FUN_006b1680(void)

{
  undefined4 uVar1;
  int unaff_ESI;
  
  uVar1 = **(undefined4 **)(unaff_ESI + 0x1c);
  FUN_00691290(uVar1,*(undefined4 *)(unaff_ESI + 8));
  *(undefined4 *)(unaff_ESI + 8) = 0;
  *(undefined4 *)(unaff_ESI + 0xc) = 0;
  *(undefined4 *)(unaff_ESI + 4) = 0;
  FUN_00691290(uVar1,*(undefined4 *)(unaff_ESI + 0x18));
  *(undefined4 *)(unaff_ESI + 0x18) = 0;
  *(undefined4 *)(unaff_ESI + 0x14) = 0;
  *(undefined4 *)(unaff_ESI + 0x10) = 0;
  *(undefined4 *)(unaff_ESI + 0x1c) = 0;
  *(undefined1 *)(unaff_ESI + 0x20) = 0;
  return;
}


/* FUN_006b16c0 @ 006b16c0  kind=gamemisc  attributed-by=none  size=109 */

void FUN_006b16c0(int param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = *(int *)(param_1 + 0x1c);
  if (*(char *)(param_1 + 0x20) != '\0') {
    sVar1 = *(short *)(iVar3 + 0x3a);
    sVar2 = *(short *)(iVar3 + 0x38);
    iVar5 = sVar1 + -1;
    iVar6 = 0;
    if (0 < sVar2) {
      iVar6 = (int)*(short *)(*(int *)(iVar3 + 0x44) + -2 + sVar2 * 2);
    }
    iVar4 = iVar5 - iVar6;
    if (iVar6 < iVar5) {
      iVar4 = *(int *)(iVar3 + 0x3c);
      if ((*(int *)(iVar4 + iVar6 * 8) == *(int *)(iVar4 + iVar5 * 8)) &&
         (*(int *)(iVar4 + 4 + iVar6 * 8) == *(int *)(iVar4 + 4 + iVar5 * 8))) {
        *(short *)(iVar3 + 0x3a) = sVar1 + -1;
        iVar5 = sVar1 + -2;
      }
      iVar4 = iVar5 - iVar6;
    }
    if (SBORROW4(iVar5,iVar6) == iVar4 < 0) {
      *(short *)(*(int *)(iVar3 + 0x44) + sVar2 * 2) = (short)iVar5;
      *(short *)(iVar3 + 0x38) = *(short *)(iVar3 + 0x38) + 1;
    }
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}


/* FUN_006b1730 @ 006b1730  kind=gamemisc  attributed-by=none  size=5 */

void FUN_006b1730(void)

{
  int in_EAX;
  
  *(undefined1 *)(in_EAX + 0x20) = 0;
  return;
}


/* FUN_006b1740 @ 006b1740  kind=gamemisc  attributed-by=none  size=94 */

int FUN_006b1740(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  undefined4 *in_ECX;
  int iVar3;
  
  iVar1 = *(int *)(in_EAX + 0x1c);
  if (*(char *)(in_EAX + 0x20) == '\0') {
    return 8;
  }
  if ((*(uint *)(iVar1 + 4) < (uint)(*(short *)(iVar1 + 0x3a) + 1 + (int)*(short *)(iVar1 + 0x16)))
     && (iVar2 = FUN_00693c40(iVar1,1,0), iVar2 != 0)) {
    return iVar2;
  }
  iVar3 = (int)*(short *)(iVar1 + 0x3a);
  iVar2 = *(int *)(iVar1 + 0x3c);
  *(undefined4 *)(iVar2 + iVar3 * 8) = *in_ECX;
  *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = in_ECX[1];
  *(undefined1 *)(iVar3 + *(int *)(iVar1 + 0x40)) = 1;
  *(short *)(iVar1 + 0x3a) = *(short *)(iVar1 + 0x3a) + 1;
  return 0;
}


/* FUN_006b17a0 @ 006b17a0  kind=gamemisc  attributed-by=none  size=136 */

int FUN_006b17a0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  undefined2 *puVar4;
  undefined4 *unaff_EBX;
  
  iVar2 = *(int *)(in_EAX + 0x1c);
  if (*(char *)(in_EAX + 0x20) == '\0') {
    return 8;
  }
  if ((*(uint *)(iVar2 + 4) < (uint)(*(short *)(iVar2 + 0x3a) + 3 + (int)*(short *)(iVar2 + 0x16)))
     && (iVar3 = FUN_00693c40(iVar2,3,0), iVar3 != 0)) {
    return iVar3;
  }
  puVar1 = (undefined4 *)(*(int *)(iVar2 + 0x3c) + *(short *)(iVar2 + 0x3a) * 8);
  puVar4 = (undefined2 *)(*(int *)(iVar2 + 0x40) + (int)*(short *)(iVar2 + 0x3a));
  *puVar1 = *param_1;
  puVar1[1] = param_1[1];
  puVar1[2] = *param_2;
  puVar1[3] = param_2[1];
  puVar1[4] = *unaff_EBX;
  puVar1[5] = unaff_EBX[1];
  *puVar4 = 0x202;
  *(undefined1 *)(puVar4 + 1) = 1;
  *(short *)(iVar2 + 0x3a) = *(short *)(iVar2 + 0x3a) + 3;
  return 0;
}


/* FUN_006b1830 @ 006b1830  kind=gamemisc  attributed-by=none  size=82 */

void FUN_006b1830(void)

{
  int iVar1;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EDI + 0x1c);
  FUN_006b16c0();
  *(undefined1 *)(unaff_EDI + 0x20) = 1;
  if ((*(uint *)(iVar1 + 4) < (uint)(*(short *)(iVar1 + 0x3a) + 1 + (int)*(short *)(iVar1 + 0x16)))
     || (*(uint *)(iVar1 + 8) < (uint)(*(short *)(iVar1 + 0x38) + 1 + (int)*(short *)(iVar1 + 0x14))
        )) {
    iVar1 = FUN_00693c40(iVar1,1,1);
    if (iVar1 != 0) {
      return;
    }
  }
  FUN_006b1740();
  return;
}


/* FUN_006b1890 @ 006b1890  kind=gamemisc  attributed-by=none  size=19 */

void FUN_006b1890(void)

{
  int unaff_ESI;
  
  FUN_006b16c0();
  FUN_0068f0c0(*(undefined4 *)(unaff_ESI + 0x1c));
  return;
}


/* FUN_006b1960 @ 006b1960  kind=gamemisc  attributed-by=none  size=158 */

uint FUN_006b1960(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint local_4;
  
  uVar5 = *param_2;
  local_4 = 0;
  do {
    uVar5 = uVar5 + 1;
    uVar4 = 0;
    uVar2 = *(uint *)(param_1 + 0x10);
    while( true ) {
      uVar3 = uVar2;
      if (uVar3 <= uVar4) {
        if (*(uint *)(param_1 + 0x10) <= uVar4) {
          *param_2 = 0;
          return local_4;
        }
        if (uVar4 == 0) {
          *param_2 = 0;
          return 0;
        }
        *param_2 = *(uint *)(*(int *)(param_1 + 0x14) + uVar4 * 0x10);
        return uVar4 + 1;
      }
      uVar2 = (uVar3 - uVar4 >> 1) + uVar4;
      uVar1 = *(uint *)(uVar2 * 0x10 + *(int *)(param_1 + 0x14));
      if (uVar1 == uVar5) break;
      if (uVar1 < uVar5) {
        uVar4 = uVar2 + 1;
        uVar2 = uVar3;
      }
    }
    local_4 = uVar2;
    if (uVar2 != 0) {
      *param_2 = uVar5;
      return uVar2 + 1;
    }
  } while( true );
}


/* FUN_006b1a80 @ 006b1a80  kind=gamemisc  attributed-by=none  size=18 */

void FUN_006b1a80(void)

{
  FUN_006b1680();
  return;
}


/* FUN_006b1aa0 @ 006b1aa0  kind=gamemisc  attributed-by=none  size=537 */

int FUN_006b1aa0(int param_1,uint param_2,uint param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  
  *param_4 = 0;
  param_4[1] = 0;
  if (param_2 != 0) {
    param_2 = param_2 - 1;
  }
  if (param_3 != 0) {
    param_3 = param_3 - 1;
  }
  if (*(uint *)(param_1 + 0x198) < param_2) {
    return 0;
  }
  if (*(uint *)(param_1 + 0x198) < param_3) {
    return 0;
  }
  piVar12 = *(int **)(param_1 + 0x1a8);
  iVar1 = *(int *)(param_1 + 0x68);
  uVar6 = *(int *)(*(int *)(param_1 + 0x1a0) + param_2 * 0x10) << 0x10 |
          (uint)*(ushort *)(*(int *)(param_1 + 0x1a0) + param_3 * 0x10);
  if (piVar12 == (int *)0x0) {
    return 0;
  }
  while ((uVar6 < (uint)piVar12[4] || ((uint)piVar12[5] < uVar6))) {
    piVar12 = (int *)*piVar12;
    if (piVar12 == (int *)0x0) {
      return 0;
    }
  }
  iVar2 = FUN_006908c0(iVar1,piVar12[3]);
  if (iVar2 != 0) {
    return iVar2;
  }
  iVar2 = FUN_00691f30(iVar1,(uint)*(byte *)(piVar12 + 1) * piVar12[2]);
  if (iVar2 != 0) {
    return iVar2;
  }
  bVar9 = *(byte *)(piVar12 + 1);
  uVar8 = piVar12[2];
  iVar2 = FUN_006914c0((uint)bVar9);
  iVar11 = (uint)bVar9 - iVar2;
  uVar10 = iVar2 * uVar8;
  pbVar5 = *(byte **)(iVar1 + 0x20);
  bVar9 = *(byte *)((int)piVar12 + 5) & 1;
  param_1._0_1_ = *(byte *)((int)piVar12 + 5) & 2;
  if (iVar11 == 0) {
LAB_006b1be8:
    if (uVar8 <= uVar10 && uVar10 - uVar8 != 0) {
      do {
        uVar10 = uVar10 >> 1;
        pbVar3 = pbVar5 + uVar10;
        if (bVar9 == 0) {
          pbVar4 = pbVar3 + 2;
          uVar7 = (uint)*pbVar3 << 0x10;
        }
        else {
          pbVar4 = pbVar3 + 4;
          uVar7 = (uint)CONCAT21(CONCAT11(*pbVar3,pbVar3[1]),pbVar3[2]) << 8;
        }
        if ((uVar7 | pbVar4[-1]) == uVar6) goto LAB_006b1c77;
        if ((uVar7 | pbVar4[-1]) < uVar6) {
          pbVar5 = pbVar3;
        }
      } while (uVar8 < uVar10);
    }
    if (bVar9 == 0) {
      pbVar4 = pbVar5 + 2;
      uVar8 = (uint)*pbVar5 << 0x10;
    }
    else {
      pbVar4 = pbVar5 + 4;
      uVar8 = (uint)CONCAT21(CONCAT11(*pbVar5,pbVar5[1]),pbVar5[2]) << 8;
    }
    if ((uVar8 | pbVar4[-1]) != uVar6) goto LAB_006b1ca0;
  }
  else {
    pbVar3 = pbVar5 + iVar11 * uVar8;
    if (bVar9 == 0) {
      pbVar4 = pbVar3 + 2;
      uVar7 = (uint)*pbVar3 << 0x10;
    }
    else {
      pbVar4 = pbVar3 + 4;
      uVar7 = (uint)CONCAT21(CONCAT11(*pbVar3,pbVar3[1]),pbVar3[2]) << 8;
    }
    if ((uVar7 | pbVar4[-1]) != uVar6) {
      if ((uVar7 | pbVar4[-1]) < uVar6) {
        if ((byte)param_1 == 0) {
          pbVar5 = pbVar4 + 1;
        }
        else {
          pbVar5 = pbVar4 + 2;
        }
      }
      goto LAB_006b1be8;
    }
  }
LAB_006b1c77:
  if ((byte)param_1 == 0) {
    uVar6 = (uint)*pbVar4;
  }
  else {
    uVar6 = (int)(short)((short)(char)*pbVar4 << 8) | (uint)pbVar4[1];
  }
  *param_4 = (int)*(short *)((int)piVar12 + 6) + uVar6;
LAB_006b1ca0:
  FUN_00691fe0(iVar1);
  return 0;
}


/* FUN_006b1e00 @ 006b1e00  kind=gamemisc  attributed-by=none  size=57 */

void FUN_006b1e00(char param_1)

{
  int iVar1;
  int *in_EAX;
  int *in_ECX;
  
  *in_EAX = in_ECX[3];
  in_EAX[1] = in_ECX[2];
  in_EAX[2] = in_ECX[1];
  iVar1 = *in_ECX;
  in_EAX[4] = in_EAX[2] * iVar1;
  in_EAX[3] = iVar1;
  if (param_1 == '\0') {
    *in_EAX = *in_EAX + (*in_ECX + -1) * in_EAX[1];
    in_EAX[1] = -in_EAX[1];
  }
  return;
}


/* FUN_006b1e40 @ 006b1e40  kind=gamemisc  attributed-by=none  size=175 */

void FUN_006b1e40(char *param_1)

{
  int *in_EAX;
  int in_ECX;
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  int local_c;
  
  local_c = in_EAX[2];
  uVar2 = 0;
  uVar1 = (in_ECX - (int)param_1) * 8;
  puVar6 = (undefined1 *)*in_EAX;
  uVar5 = 0x80;
  cVar3 = '\0';
  if (in_EAX[4] < (int)uVar1) {
    uVar1 = in_EAX[4];
  }
  uVar4 = uVar1 & 7;
  if (0 < (int)uVar1) {
    do {
      if ((uVar1 & 7) == uVar4) {
        cVar3 = *param_1;
        param_1 = param_1 + 1;
      }
      if (cVar3 < '\0') {
        uVar2 = uVar2 | uVar5;
      }
      cVar3 = cVar3 * '\x02';
      local_c = local_c + -1;
      uVar5 = uVar5 >> 1;
      if (local_c < 1) {
        *puVar6 = (char)uVar2;
        local_c = in_EAX[2];
        *in_EAX = *in_EAX + in_EAX[1];
        puVar6 = (undefined1 *)*in_EAX;
LAB_006b1ed6:
        uVar2 = 0;
        uVar5 = 0x80;
      }
      else if (uVar5 == 0) {
        *puVar6 = (char)uVar2;
        puVar6 = puVar6 + 1;
        goto LAB_006b1ed6;
      }
      uVar1 = uVar1 - 1;
    } while (0 < (int)uVar1);
    if (uVar5 != 0x80) {
      *puVar6 = (char)uVar2;
    }
  }
  return;
}


/* FUN_006b1f00 @ 006b1f00  kind=gamemisc  attributed-by=none  size=256 */

void FUN_006b1f00(byte *param_1)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  byte *in_EAX;
  uint uVar4;
  uint uVar5;
  int *in_EDX;
  uint local_14;
  uint local_10;
  undefined1 *local_c;
  int local_8;
  int local_4;
  
  local_c = (undefined1 *)*in_EDX;
  local_4 = in_EDX[4];
  local_8 = in_EDX[2];
  uVar5 = 0;
  bVar3 = true;
  uVar4 = 0;
  local_14 = 0x80;
  local_10 = 0;
  bVar2 = true;
  if (0 < local_4) {
    do {
      if (bVar2) {
        do {
          if (bVar3) {
            if (param_1 <= in_EAX) break;
            bVar1 = *in_EAX;
            in_EAX = in_EAX + 1;
            uVar4 = bVar1 & 0xf;
            bVar3 = false;
            uVar5 = (int)(uint)bVar1 >> 4;
          }
          else {
            bVar3 = true;
            uVar5 = uVar4;
          }
        } while (uVar5 == 0);
      }
      if (bVar3) {
        local_10 = local_10 | local_14;
      }
      local_14 = local_14 >> 1;
      local_8 = local_8 + -1;
      if (local_8 < 1) {
        *local_c = (undefined1)local_10;
        local_8 = in_EDX[2];
        *in_EDX = *in_EDX + in_EDX[1];
        local_c = (undefined1 *)*in_EDX;
LAB_006b1fb9:
        local_10 = 0;
        local_14 = 0x80;
      }
      else if (local_14 == 0) {
        *local_c = (undefined1)local_10;
        local_c = local_c + 1;
        goto LAB_006b1fb9;
      }
      uVar5 = uVar5 - 1;
      bVar2 = (int)uVar5 < 1;
      local_4 = local_4 + -1;
    } while (0 < local_4);
    if (local_14 != 0x80) {
      *local_c = (undefined1)local_10;
    }
  }
  return;
}


/* FUN_006b2000 @ 006b2000  kind=gamemisc  attributed-by=none  size=188 */

void FUN_006b2000(byte *param_1,byte *param_2)

{
  bool bVar1;
  bool bVar2;
  int *in_EAX;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint uVar6;
  int local_8;
  int local_4;
  
  local_8 = in_EAX[2];
  local_4 = in_EAX[4];
  puVar5 = (undefined1 *)*in_EAX;
  uVar6 = 0x80;
  uVar4 = 0;
  uVar3 = 0;
  bVar2 = true;
  bVar1 = true;
  if (0 < local_4) {
    do {
      if (bVar1) {
        do {
          if (param_2 <= param_1) break;
          uVar3 = (uint)*param_1;
          param_1 = param_1 + 1;
          bVar2 = (bool)(bVar2 ^ 1);
        } while (uVar3 == 0);
      }
      if (bVar2) {
        uVar4 = uVar4 | uVar6;
      }
      local_8 = local_8 + -1;
      uVar6 = uVar6 >> 1;
      if (local_8 < 1) {
        *puVar5 = (char)uVar4;
        local_8 = in_EAX[2];
        *in_EAX = *in_EAX + in_EAX[1];
        puVar5 = (undefined1 *)*in_EAX;
LAB_006b2093:
        uVar4 = 0;
        uVar6 = 0x80;
      }
      else if (uVar6 == 0) {
        *puVar5 = (char)uVar4;
        puVar5 = puVar5 + 1;
        goto LAB_006b2093;
      }
      uVar3 = uVar3 - 1;
      bVar1 = (int)uVar3 < 1;
      local_4 = local_4 + -1;
    } while (0 < local_4);
    if (uVar6 != 0x80) {
      *puVar5 = (char)uVar4;
    }
  }
  return;
}


/* FUN_006b20c0 @ 006b20c0  kind=gamemisc  attributed-by=none  size=274 */

void FUN_006b20c0(int param_1,byte *param_2,uint param_3,uint *param_4,uint *param_5)

{
  uint in_EAX;
  byte *pbVar1;
  byte *pbVar2;
  uint in_ECX;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = 4;
  if ((in_EAX & 1) != 0) {
    iVar6 = 5;
  }
  if ((in_EAX & 2) != 0) {
    iVar6 = iVar6 + 1;
  }
  if ((in_EAX & 4) != 0) {
    iVar6 = iVar6 + 1;
  }
  uVar5 = 0;
  if (in_ECX != 0) {
    do {
      uVar3 = in_ECX + uVar5 >> 1;
      pbVar1 = (byte *)(uVar3 * iVar6 + param_1);
      if (param_2 < pbVar1 + iVar6) break;
      if ((in_EAX & 1) == 0) {
        uVar4 = (uint)*pbVar1;
        pbVar2 = pbVar1 + 1;
      }
      else {
        pbVar2 = pbVar1 + 2;
        uVar4 = (uint)CONCAT11(*pbVar1,pbVar1[1]);
      }
      if (uVar4 == param_3) {
        if ((in_EAX & 2) == 0) {
          uVar5 = (uint)*pbVar2;
          pbVar1 = pbVar2 + 1;
        }
        else {
          pbVar1 = pbVar2 + 2;
          uVar5 = (uint)CONCAT11(*pbVar2,pbVar2[1]);
        }
        *param_5 = uVar5;
        if ((in_EAX & 4) == 0) {
          *param_4 = (uint)CONCAT11(*pbVar1,pbVar1[1]);
          return;
        }
        *param_4 = (uint)CONCAT21(CONCAT11(*pbVar1,pbVar1[1]),pbVar1[2]);
        return;
      }
      if (uVar4 < param_3) {
        uVar5 = uVar3;
        uVar3 = in_ECX;
      }
      in_ECX = uVar3;
    } while (uVar5 < uVar3);
  }
  *param_5 = 0;
  *param_4 = 0;
  return;
}


/* FUN_006b21e0 @ 006b21e0  kind=gamemisc  attributed-by=none  size=560 */

undefined4
FUN_006b21e0(uint *param_1,byte *param_2,uint param_3,uint *param_4,uint *param_5,uint *param_6,
            uint *param_7,uint *param_8,uint *param_9)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint local_4;
  
  pbVar3 = (byte *)*param_1;
  pbVar5 = pbVar3 + 1;
  if (param_2 < pbVar5) {
    return 8;
  }
  bVar1 = *pbVar3;
  uVar6 = 0;
  uVar8 = 0;
  uVar9 = 0;
  local_4 = 0;
  pbVar4 = pbVar5;
  switch(bVar1 & 3) {
  case 0:
    pbVar4 = pbVar3 + 2;
    if (param_2 < pbVar4) {
      return 8;
    }
    uVar6 = (int)(char)*pbVar5 >> 4;
    uVar8 = (int)(char)(*pbVar5 << 4) >> 4;
    break;
  case 1:
    if (param_2 < pbVar3 + 3) {
      return 8;
    }
    uVar6 = (uint)(char)*pbVar5;
    uVar8 = (uint)(char)pbVar3[2];
    pbVar4 = pbVar3 + 3;
    break;
  case 2:
    if (param_2 < pbVar3 + 5) {
      return 8;
    }
    uVar6 = (int)(short)((short)(char)*pbVar5 << 8) | (uint)pbVar3[2];
    pbVar4 = pbVar3 + 5;
    uVar8 = (uint)(short)((short)(char)pbVar3[3] << 8);
    goto LAB_006b22c0;
  case 3:
    if (param_2 < pbVar3 + 7) {
      return 8;
    }
    uVar6 = (uint)CONCAT21(CONCAT11(*pbVar5,pbVar3[2]),pbVar3[3]);
    pbVar4 = pbVar3 + 7;
    uVar8 = (int)CONCAT11(pbVar3[4],pbVar3[5]) << 8;
LAB_006b22c0:
    uVar8 = uVar8 | pbVar4[-1];
  }
  switch(bVar1 >> 2 & 3) {
  case 0:
    uVar9 = 0;
    local_4 = 0;
    break;
  case 1:
    if (param_2 < pbVar4 + 1) {
      return 8;
    }
    uVar9 = (int)(char)*pbVar4 >> 4 & 0xf;
    local_4 = (int)(char)*pbVar4 & 0xf;
    pbVar4 = pbVar4 + 1;
    break;
  case 2:
    if (param_2 < pbVar4 + 2) {
      return 8;
    }
    local_4 = (uint)pbVar4[1];
    uVar9 = (uint)*pbVar4;
    pbVar4 = pbVar4 + 2;
    break;
  case 3:
    if (param_2 < pbVar4 + 4) {
      return 8;
    }
    uVar9 = (uint)CONCAT11(*pbVar4,pbVar4[1]);
    local_4 = (uint)CONCAT11(pbVar4[2],pbVar4[3]);
    pbVar4 = pbVar4 + 4;
  }
  uVar7 = 0;
  switch(bVar1 >> 4 & 3) {
  case 0:
    uVar7 = param_3;
    break;
  case 1:
    if (param_2 < pbVar4 + 1) {
      return 8;
    }
    bVar2 = *pbVar4;
    pbVar4 = pbVar4 + 1;
    uVar7 = (int)(char)bVar2 << 8;
    break;
  case 2:
    pbVar5 = pbVar4 + 2;
    if (param_2 < pbVar5) {
      return 8;
    }
    uVar7 = (uint)(short)((short)(char)*pbVar4 << 8);
    goto LAB_006b23cf;
  case 3:
    pbVar5 = pbVar4 + 3;
    if (param_2 < pbVar5) {
      return 8;
    }
    uVar7 = (int)CONCAT11(*pbVar4,pbVar4[1]) << 8;
LAB_006b23cf:
    pbVar4 = pbVar5;
    uVar7 = uVar7 | pbVar5[-1];
  }
  *param_4 = uVar6;
  *param_5 = uVar8;
  *param_6 = uVar9;
  *param_7 = local_4;
  *param_8 = uVar7;
  *param_9 = (uint)(bVar1 >> 6);
  *param_1 = (uint)pbVar4;
  return 0;
}


