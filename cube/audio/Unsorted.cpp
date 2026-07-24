// Unsorted (audio) -- cube. 6 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Unsorted.h"

/* FUN_00401120 @ 00401120  kind=gamemisc  attributed-by=logic:caller-vote  size=185 */

undefined4 FUN_00401120(undefined4 *param_1,undefined4 param_2)

{
  void *_Memory;
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0xffffffff;
  }
  memset(param_1,0,0x168);
  param_1[1] = 0x4000;
  param_1[6] = 0x400;
  _Memory = malloc(0x4000);
  *param_1 = _Memory;
  pvVar1 = malloc(0x1000);
  param_1[4] = pvVar1;
  pvVar2 = malloc(0x2000);
  param_1[5] = pvVar2;
  if (_Memory != (void *)0x0) {
    if ((pvVar1 != (void *)0x0) && (pvVar2 != (void *)0x0)) {
      param_1[0x54] = param_2;
      return 0;
    }
    free(_Memory);
  }
  if ((void *)param_1[4] != (void *)0x0) {
    free((void *)param_1[4]);
  }
  if ((void *)param_1[5] != (void *)0x0) {
    free((void *)param_1[5]);
  }
  memset(param_1,0,0x168);
  return 0xffffffff;
}


/* FUN_004012a0 @ 004012a0  kind=gamemisc  attributed-by=logic:caller-vote  size=141 */

void FUN_004012a0(void)

{
  int iVar1;
  uint uVar2;
  int *in_ECX;
  int iVar3;
  
  if (in_ECX != (int *)0x0) {
    iVar1 = *in_ECX;
    uVar2 = 0;
    iVar3 = 0;
    *(undefined4 *)(iVar1 + 0x16) = 0;
    if (0 < in_ECX[1]) {
      do {
        uVar2 = uVar2 << 8 ^
                *(uint *)(&DAT_00745900 + ((uint)*(byte *)(iVar1 + iVar3) ^ uVar2 >> 0x18) * 4);
        iVar3 = iVar3 + 1;
      } while (iVar3 < in_ECX[1]);
    }
    iVar3 = 0;
    if (0 < in_ECX[3]) {
      do {
        uVar2 = uVar2 << 8 ^
                *(uint *)(&DAT_00745900 + ((uint)*(byte *)(in_ECX[2] + iVar3) ^ uVar2 >> 0x18) * 4);
        iVar3 = iVar3 + 1;
      } while (iVar3 < in_ECX[3]);
    }
    *(char *)(iVar1 + 0x16) = (char)uVar2;
    *(char *)(iVar1 + 0x17) = (char)(uVar2 >> 8);
    *(char *)(iVar1 + 0x18) = (char)(uVar2 >> 0x10);
    *(char *)(iVar1 + 0x19) = (char)(uVar2 >> 0x18);
  }
  return;
}


/* FUN_00401330 @ 00401330  kind=gamemisc  attributed-by=logic:caller-vote  size=45 */

undefined4 FUN_00401330(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    *(undefined4 *)((int)param_1 + 4) = 0xffffffff;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 3) = 0;
  }
  return 0;
}


/* FUN_00624a70 @ 00624a70  kind=gamemisc  attributed-by=logic:caller-vote  size=506 */

longlong FUN_00624a70(int *param_1,int *param_2,int param_3,int *param_4,undefined8 *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 local_44 [16];
  int local_34;
  undefined4 local_30;
  undefined8 local_2c;
  longlong local_24;
  uint local_1c;
  int local_18;
  longlong local_14;
  uint local_c;
  int local_8;
  
  iVar3 = param_1[3];
  uVar4 = param_1[2];
  local_14 = -1;
  local_24 = -1;
  local_34 = -1;
  local_30 = 0xffffffff;
  uVar6 = 0xffffffffffffffff;
  local_1c = uVar4;
  local_18 = iVar3;
  do {
    local_c = uVar4 - 0x10000;
    local_8 = iVar3 + -1 + (uint)(0xffff < uVar4);
    if ((local_8 < 1) && (local_8 < 0)) {
      local_c = 0;
      local_8 = 0;
    }
    iVar3 = local_8;
    uVar4 = local_c;
    if (*param_1 == 0) {
      iVar2 = -0x81;
      lVar5 = local_24;
    }
    else {
      if ((code *)param_1[0xb1] != (code *)0x0) {
        local_2c = uVar6;
        iVar2 = (*(code *)param_1[0xb1])(*param_1,local_c,local_8,0);
        uVar6 = local_2c;
        if (iVar2 != -1) {
          param_1[2] = uVar4;
          param_1[3] = iVar3;
          FUN_004018f0(param_1 + 6);
          iVar2 = 0;
          uVar6 = local_2c;
          lVar5 = local_24;
          goto LAB_00624b0c;
        }
      }
      iVar2 = -0x80;
      lVar5 = local_24;
    }
LAB_00624b0c:
    if (iVar2 != 0) {
      return (longlong)iVar2;
    }
    local_24 = lVar5;
    if ((param_1[3] <= local_18) && ((param_1[3] < local_18 || ((uint)param_1[2] < local_1c)))) {
      while( true ) {
        local_2c = uVar6;
        local_24 = lVar5;
        lVar5 = FUN_006247f0(local_44,local_1c - param_1[2],
                             (local_18 - param_1[3]) - (uint)(local_1c < (uint)param_1[2]));
        if (lVar5 == -0x80) {
          return -0x80;
        }
        iVar3 = local_8;
        uVar4 = local_c;
        uVar6 = local_2c;
        if (lVar5 < 0) break;
        local_34 = FUN_004010f0(local_44);
        iVar3 = local_34 >> 0x1f;
        uVar6 = FUN_00401060(local_44);
        if ((local_34 == *param_4) && (iVar3 == *param_4 >> 0x1f)) {
          *param_5 = uVar6;
          local_14 = lVar5;
        }
        iVar3 = param_3;
        piVar1 = param_2;
        if (param_2 != (int *)0x0) {
          while (iVar3 != 0) {
            if (*piVar1 == local_34) goto LAB_00624be8;
            iVar3 = iVar3 + -1;
            piVar1 = piVar1 + 1;
          }
        }
        local_14 = -1;
LAB_00624be8:
        if ((local_18 <= param_1[3]) &&
           ((iVar3 = local_8, uVar4 = local_c, local_24 = lVar5, local_18 < param_1[3] ||
            (local_1c <= (uint)param_1[2])))) break;
      }
    }
    if (local_24 != -1) {
      if (local_14 < 0) {
        *param_4 = local_34;
        *param_5 = uVar6;
        return local_24;
      }
      return local_14;
    }
  } while( true );
}


/* FUN_00624f80 @ 00624f80  kind=gamemisc  attributed-by=logic:caller-vote  size=423 */

longlong FUN_00624f80(undefined4 param_1)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int *unaff_ESI;
  bool bVar10;
  longlong lVar11;
  undefined1 local_4c [32];
  undefined1 local_2c [16];
  uint local_1c;
  uint local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_14 = 0;
  local_10 = 0;
  local_c = unaff_ESI[0x72];
  local_8 = -1;
  while( true ) {
    while( true ) {
      while( true ) {
        piVar1 = unaff_ESI + 6;
        uVar5 = FUN_00401480(piVar1,local_2c);
        lVar11 = CONCAT44(local_10,local_14);
        if (-1 < (int)uVar5) break;
        puVar2 = (uint *)(unaff_ESI + 2);
        uVar3 = *puVar2;
        *puVar2 = *puVar2 - uVar5;
        unaff_ESI[3] = (unaff_ESI[3] - ((int)uVar5 >> 0x1f)) - (uint)(uVar3 < uVar5);
      }
      if (uVar5 == 0) break;
      local_1c = unaff_ESI[2];
      iVar8 = unaff_ESI[3];
      unaff_ESI[2] = uVar5 + local_1c;
      unaff_ESI[3] = ((int)uVar5 >> 0x1f) + iVar8 + (uint)CARRY4(uVar5,local_1c);
      if (iVar8 < 0) goto LAB_006250fe;
      iVar8 = FUN_00401020(local_2c);
      lVar11 = CONCAT44(local_10,local_14);
      if (iVar8 != 0) goto LAB_006250fe;
      iVar8 = FUN_004010f0(local_2c);
      if (iVar8 == local_c) {
        piVar1 = unaff_ESI + 0x1e;
        FUN_004015c0(piVar1,local_2c);
        iVar8 = FUN_00401b10(piVar1,local_4c);
        iVar4 = local_8;
        while (iVar8 != 0) {
          iVar9 = iVar4;
          if ((0 < iVar8) && (iVar9 = FUN_006d0470(param_1,local_4c), iVar4 != -1)) {
            uVar5 = iVar9 + iVar4 >> 2;
            bVar10 = CARRY4(local_14,uVar5);
            local_14 = local_14 + uVar5;
            local_10 = local_10 + (iVar9 + iVar4 >> 0x1f) + (uint)bVar10;
          }
          iVar8 = FUN_00401b10(piVar1,local_4c);
          iVar4 = iVar9;
        }
        local_8 = iVar4;
        lVar11 = FUN_00401060(local_2c);
        if (lVar11 != -1) {
          lVar11 = FUN_00401060(local_2c);
          lVar11 = lVar11 - CONCAT44(local_10,local_14);
          goto LAB_006250fe;
        }
      }
    }
    piVar6 = _errno();
    *piVar6 = 0;
    lVar11 = CONCAT44(local_10,local_14);
    if ((unaff_ESI[0xb0] == 0) || (lVar11 = CONCAT44(local_10,local_14), *unaff_ESI == 0))
    goto LAB_006250fe;
    uVar7 = FUN_004013a0(piVar1,0x800);
    iVar8 = (*(code *)unaff_ESI[0xb0])(uVar7,1,0x800,*unaff_ESI);
    if (0 < iVar8) {
      FUN_00401450(piVar1,iVar8);
    }
    lVar11 = CONCAT44(local_10,local_14);
    if (iVar8 == 0) break;
    if (iVar8 < 0) {
LAB_006250fe:
      local_10 = (int)((ulonglong)lVar11 >> 0x20);
      if ((local_10 < 1) && (lVar11 < 0)) {
        return 0;
      }
      return lVar11;
    }
  }
  _errno();
  lVar11 = CONCAT44(local_10,local_14);
  goto LAB_006250fe;
}


/* FUN_00625130 @ 00625130  kind=gamemisc  attributed-by=logic:caller-vote  size=1183 */

int FUN_00625130(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4,int param_5,
                uint param_6,int param_7,undefined4 param_8,int param_9,int param_10,int *param_11,
                int param_12,int param_13)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  bool bVar12;
  undefined8 uVar13;
  longlong lVar14;
  undefined4 local_74 [8];
  undefined1 local_54 [16];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  undefined4 local_28;
  undefined8 local_24;
  uint local_1c;
  int local_18;
  undefined8 local_14;
  undefined4 local_c;
  int local_8;
  
  iVar5 = param_12;
  piVar4 = param_1;
  lVar14 = CONCAT44(local_24._4_4_,(undefined4)local_24);
  local_2c = 0xffffffff;
  local_28 = 0xffffffff;
  iVar6 = param_1[0x72];
  local_1c = param_6;
  local_18 = param_7;
  iVar8 = param_12;
  piVar1 = param_11;
  local_8 = iVar6;
  if (param_11 != (int *)0x0) {
    while (iVar8 != 0) {
      local_14._0_4_ = param_6;
      local_14._4_4_ = param_7;
      iVar3 = param_13;
      if (*piVar1 == param_10) {
        while (param_13 = iVar3, param_10 != iVar6) {
          param_10 = iVar6;
          uVar13 = FUN_00624a70(piVar4,param_11,iVar5,&param_10,&param_8);
          *(undefined8 *)(piVar4 + 2) = uVar13;
          iVar3 = param_13;
        }
        piVar4[0xd] = iVar3 + 1;
        if ((void *)piVar4[0xe] != (void *)0x0) {
          free((void *)piVar4[0xe]);
        }
        if ((void *)piVar4[0x10] != (void *)0x0) {
          free((void *)piVar4[0x10]);
        }
        if ((void *)piVar4[0xf] != (void *)0x0) {
          free((void *)piVar4[0xf]);
        }
        iVar6 = piVar4[0xd];
        pvVar7 = malloc(iVar6 * 8 + 8);
        piVar4[0xe] = (int)pvVar7;
        pvVar7 = realloc((void *)piVar4[0x12],iVar6 << 5);
        piVar4[0x12] = (int)pvVar7;
        pvVar7 = realloc((void *)piVar4[0x13],piVar4[0xd] << 4);
        iVar6 = piVar4[0xd];
        piVar4[0x13] = (int)pvVar7;
        pvVar7 = malloc(iVar6 * 4);
        piVar4[0x10] = (int)pvVar7;
        pvVar7 = malloc(iVar6 * 8);
        piVar4[0xf] = (int)pvVar7;
        pvVar7 = malloc(iVar6 << 4);
        piVar4[0x11] = (int)pvVar7;
        iVar6 = piVar4[0xe];
        *(uint *)(iVar6 + 8 + iVar3 * 8) = param_6;
        *(int *)(iVar6 + 0xc + iVar3 * 8) = param_7;
        iVar6 = piVar4[0xe];
        *(undefined4 *)(iVar6 + iVar3 * 8) = param_2;
        *(undefined4 *)(iVar6 + 4 + iVar3 * 8) = param_3;
        if ((param_9 < 1) && (param_9 < 0)) {
          param_8 = 0;
          param_9 = 0;
        }
        iVar6 = piVar4[0x11];
        *(undefined4 *)(iVar6 + 8 + iVar3 * 0x10) = param_8;
        *(int *)(iVar6 + 0xc + iVar3 * 0x10) = param_9;
        return 0;
      }
      iVar8 = iVar8 + -1;
      piVar1 = piVar1 + 1;
    }
  }
  param_1 = (void *)0x0;
  local_c = 0;
  local_24 = CONCAT44(local_24._4_4_,(undefined4)local_24);
  local_14 = CONCAT44(param_7,param_6);
  if ((param_5 <= param_7) &&
     ((local_24 = lVar14, lVar14 = CONCAT44(param_7,param_6), param_5 < param_7 ||
      (local_14 = CONCAT44(param_7,param_6), lVar14 = CONCAT44(param_7,param_6), param_4 < param_6))
     )) {
    do {
      bVar12 = -1 < (int)((local_18 - param_5) - (uint)(local_1c < param_4));
      if ((local_18 - param_5 != (uint)(local_1c < param_4) && bVar12) ||
         ((uVar13 = CONCAT44(param_5,param_4), bVar12 &&
          (uVar13 = CONCAT44(param_5,param_4), 0xffff < local_1c - param_4)))) {
        local_14 = lVar14;
        uVar13 = __alldiv(local_1c + param_4,local_18 + param_5 + (uint)CARRY4(local_1c,param_4),2,0
                         );
        lVar14 = local_14;
      }
      local_34._4_4_ = (int)((ulonglong)uVar13 >> 0x20);
      uVar11 = (uint)uVar13;
      if ((uVar11 != piVar4[2]) || (local_34._4_4_ != piVar4[3])) {
        if (*piVar4 == 0) {
          iVar6 = -0x81;
        }
        else {
          if ((code *)piVar4[0xb1] != (code *)0x0) {
            local_14 = lVar14;
            iVar6 = (*(code *)piVar4[0xb1])(*piVar4,uVar13,0);
            lVar14 = local_14;
            if (iVar6 != -1) {
              *(undefined8 *)(piVar4 + 2) = uVar13;
              FUN_004018f0(piVar4 + 6);
              iVar6 = 0;
              lVar14 = local_14;
              goto LAB_00625512;
            }
          }
          iVar6 = -0x80;
        }
LAB_00625512:
        if (iVar6 != 0) {
          return iVar6;
        }
      }
      local_14 = lVar14;
      lVar14 = FUN_006247f0(local_54,0xffffffff,0xffffffff);
      if (lVar14 == -0x80) {
        return -0x80;
      }
      local_24 = lVar14;
      if (-1 < lVar14) {
        iVar8 = FUN_004010f0(local_54);
        piVar1 = param_11;
        iVar6 = param_12;
        if (param_11 != (int *)0x0) {
          while (iVar6 != 0) {
            if (*piVar1 == iVar8) {
              param_4 = piVar4[2];
              param_5 = piVar4[3];
              goto LAB_00625592;
            }
            piVar1 = piVar1 + 1;
            iVar6 = iVar6 + -1;
          }
        }
      }
      local_18 = local_34._4_4_;
      local_1c = uVar11;
      if (-1 < local_24) {
        local_14 = local_24;
      }
LAB_00625592:
      lVar14 = local_14;
    } while ((param_5 < local_18) || ((param_5 <= local_18 && (param_4 < local_1c))));
  }
  iVar5 = local_8;
  iVar8 = (uint)local_14;
  *(longlong *)(piVar4 + 2) = local_14;
  lVar14 = local_14;
  iVar6 = local_8 + 1;
  while (iVar6 != iVar5) {
    param_5 = iVar5;
    local_14 = lVar14;
    uVar13 = FUN_00624a70(piVar4,param_11,param_12,&param_5,&local_2c);
    *(undefined8 *)(piVar4 + 2) = uVar13;
    lVar14 = local_14;
    iVar6 = param_5;
  }
  local_14._4_4_ = (int)((ulonglong)lVar14 >> 0x20);
  if ((piVar4[2] != iVar8) || (piVar4[3] != local_14._4_4_)) {
    iVar6 = FUN_00624790(iVar8,local_14._4_4_);
    local_14 = lVar14;
    lVar14 = local_14;
    if (iVar6 != 0) {
      return iVar6;
    }
  }
  local_14 = lVar14;
  iVar6 = FUN_00624c70(piVar4,local_74,&local_44,&param_1,&local_c);
  if (iVar6 == 0) {
    param_4 = piVar4[2];
    param_5 = piVar4[3];
    iVar8 = piVar4[0x72];
    local_34 = FUN_00624f80(local_74);
    iVar5 = param_13;
    iVar6 = FUN_00625130(piVar4,local_14,piVar4[2],piVar4[3],param_6,param_7,param_8,param_9,
                         param_10,param_1,local_c,param_13 + 1);
    if (iVar6 == 0) {
      uVar13 = local_34;
      lVar14 = local_14;
      if (param_1 != (void *)0x0) {
        free(param_1);
        uVar13 = local_34;
        lVar14 = local_14;
      }
      local_14._4_4_ = (int)((ulonglong)lVar14 >> 0x20);
      local_14._0_4_ = (uint)lVar14;
      local_34._4_4_ = (int)((ulonglong)uVar13 >> 0x20);
      local_34._0_4_ = (uint)uVar13;
      iVar6 = piVar4[0xe];
      *(uint *)(iVar6 + 8 + iVar5 * 8) = (uint)local_14;
      *(int *)(iVar6 + 0xc + iVar5 * 8) = local_14._4_4_;
      *(int *)(piVar4[0x10] + 4 + iVar5 * 4) = iVar8;
      iVar6 = piVar4[0xf];
      *(uint *)(iVar6 + 8 + iVar5 * 8) = param_4;
      *(int *)(iVar6 + 0xc + iVar5 * 8) = param_5;
      puVar9 = local_74;
      puVar10 = (undefined4 *)((iVar5 + 1) * 0x20 + piVar4[0x12]);
      for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      iVar6 = piVar4[0x13];
      *(undefined4 *)(iVar6 + 0x10 + param_13 * 0x10) = local_44;
      *(undefined4 *)(iVar6 + 0x14 + param_13 * 0x10) = local_40;
      iVar6 = iVar6 + 0x10 + param_13 * 0x10;
      *(undefined4 *)(iVar6 + 8) = local_3c;
      *(undefined4 *)(iVar6 + 0xc) = local_38;
      iVar6 = piVar4[0x11];
      *(undefined4 *)(iVar6 + 8 + param_13 * 0x10) = local_2c;
      *(undefined4 *)(iVar6 + 0xc + param_13 * 0x10) = local_28;
      iVar6 = piVar4[0x11];
      *(uint *)(iVar6 + 0x10 + param_13 * 0x10) = (uint)local_34;
      *(int *)(iVar6 + 0x14 + param_13 * 0x10) = local_34._4_4_;
      iVar6 = piVar4[0x11];
      puVar2 = (uint *)(iVar6 + 0x18 + param_13 * 0x10);
      uVar11 = *puVar2;
      *puVar2 = *puVar2 - (uint)local_34;
      piVar1 = (int *)(iVar6 + param_13 * 0x10 + 0x1c);
      *piVar1 = (*piVar1 - local_34._4_4_) - (uint)(uVar11 < (uint)local_34);
      iVar6 = *(int *)(piVar4[0x11] + 0x1c + param_13 * 0x10);
      puVar9 = (undefined4 *)(piVar4[0x11] + 0x18 + param_13 * 0x10);
      if ((iVar6 < 1) && (iVar6 < 0)) {
        *puVar9 = 0;
        puVar9[1] = 0;
      }
      iVar6 = 0;
    }
  }
  return iVar6;
}


