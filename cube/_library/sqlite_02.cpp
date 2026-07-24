// sqlite_02 (_library) -- cube. 200 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "sqlite_02.h"

/* FUN_0054fa40 @ 0054fa40  kind=lib  attributed-by=lib-string  size=471 */

void FUN_0054fa40(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  uint *puVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int local_3c;
  uint local_38;
  byte local_20 [24];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  pbVar3 = *(byte **)(*(int *)(*param_1 + 0x10) + param_2 * 0x10);
  local_3c = 1;
  do {
    FUN_005240c0(0x18,local_20,"sqlite_stat%d",local_3c);
    iVar4 = *param_1;
    pbVar9 = local_20;
    bVar2 = local_20[0];
    while (bVar2 != 0) {
      pbVar9 = pbVar9 + 1;
      bVar2 = *pbVar9;
    }
    iVar5 = *(int *)(iVar4 + 0x14);
    uVar10 = (int)pbVar9 - (int)local_20 & 0x3fffffff;
    local_38 = 0;
    if (0 < iVar5) {
      do {
        uVar11 = local_38;
        if ((int)local_38 < 2) {
          uVar11 = local_38 ^ 1;
        }
        if (pbVar3 == (byte *)0x0) {
LAB_0054fb3f:
          iVar7 = *(int *)(*(int *)(iVar4 + 0x10) + 0xc + uVar11 * 0x10);
          puVar8 = (uint *)(iVar7 + 8);
          if (*(int *)(iVar7 + 0x14) == 0) {
            uVar11 = 0;
          }
          else {
            uVar11 = 0;
            pbVar9 = local_20;
            uVar12 = uVar10;
            if (uVar10 != 0) {
              do {
                uVar12 = uVar12 - 1;
                uVar11 = uVar11 ^ (uint)(byte)(&DAT_007120d8)[*pbVar9] ^ uVar11 * 8;
                pbVar9 = pbVar9 + 1;
              } while (0 < (int)uVar12);
            }
            uVar11 = uVar11 % *puVar8;
          }
          iVar7 = FUN_00537190(puVar8,local_20,uVar10,uVar11);
          if ((iVar7 != 0) && (*(int *)(iVar7 + 8) != 0)) {
            FUN_0055e450(param_1,"DELETE FROM %Q.%s WHERE %s=%Q",pbVar3,local_20,param_3,param_4);
            break;
          }
        }
        else {
          pbVar9 = *(byte **)(*(int *)(iVar4 + 0x10) + uVar11 * 0x10);
          bVar2 = *pbVar3;
          pbVar6 = pbVar3;
          while ((bVar2 != 0 && ((&DAT_007120d8)[bVar2] == (&DAT_007120d8)[*pbVar9]))) {
            pbVar1 = pbVar6 + 1;
            pbVar6 = pbVar6 + 1;
            pbVar9 = pbVar9 + 1;
            bVar2 = *pbVar1;
          }
          if ((&DAT_007120d8)[*pbVar6] == (&DAT_007120d8)[*pbVar9]) goto LAB_0054fb3f;
        }
        local_38 = local_38 + 1;
      } while ((int)local_38 < iVar5);
    }
    local_3c = local_3c + 1;
    if (3 < local_3c) {
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
  } while( true );
}


/* FUN_0054fcf0 @ 0054fcf0  kind=lib  attributed-by=lib-island  size=178 */

void FUN_0054fcf0(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_1[0x24]) {
    do {
      (**(code **)(*param_1 + 0x34))(*param_1,*(undefined4 *)(param_1[0x25] + iVar2 * 4));
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1[0x24]);
  }
  piVar1 = (int *)param_1[0x25];
  if (param_1[0x7c] != 0) {
    if (((piVar1 != (int *)0x0) && ((int *)param_1[0x41] <= piVar1)) &&
       (piVar1 < (int *)param_1[0x42])) {
      *(int *)param_1[0x7c] = *(int *)param_1[0x7c] + (uint)*(ushort *)(param_1 + 0x3a);
      return;
    }
    iVar2 = (*DAT_00766608._4_4_)(piVar1);
    *(int *)param_1[0x7c] = *(int *)param_1[0x7c] + iVar2;
    return;
  }
  if (((piVar1 != (int *)0x0) && ((int *)param_1[0x41] <= piVar1)) &&
     (piVar1 < (int *)param_1[0x42])) {
    *piVar1 = param_1[0x40];
    param_1[0x3b] = param_1[0x3b] + -1;
    param_1[0x40] = (int)piVar1;
    return;
  }
  FUN_00524410();
  return;
}


/* FUN_0054fdb0 @ 0054fdb0  kind=lib  attributed-by=lib-island  size=186 */

void FUN_0054fdb0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x1d8);
  while (iVar2 != 0) {
    puVar1 = *(undefined4 **)(param_1 + 0x1d8);
    *(undefined4 *)(param_1 + 0x1d8) = puVar1[4];
    if (*(int *)(param_1 + 0x1f0) == 0) {
      if ((puVar1 < *(undefined4 **)(param_1 + 0x104)) ||
         (*(undefined4 **)(param_1 + 0x108) <= puVar1)) {
        FUN_00524410(puVar1);
      }
      else {
        *puVar1 = *(undefined4 *)(param_1 + 0x100);
        *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + -1;
        *(undefined4 **)(param_1 + 0x100) = puVar1;
      }
    }
    else if ((puVar1 < *(undefined4 **)(param_1 + 0x104)) ||
            (*(undefined4 **)(param_1 + 0x108) <= puVar1)) {
      iVar2 = (*DAT_00766608._4_4_)(puVar1);
      **(int **)(param_1 + 0x1f0) = **(int **)(param_1 + 0x1f0) + iVar2;
    }
    else {
      **(int **)(param_1 + 0x1f0) = **(int **)(param_1 + 0x1f0) + (uint)*(ushort *)(param_1 + 0xe8);
    }
    iVar2 = *(int *)(param_1 + 0x1d8);
  }
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  *(undefined4 *)(param_1 + 0x1e4) = 0;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  return;
}


/* FUN_0054fe80 @ 0054fe80  kind=lib  attributed-by=lib-island  size=555 */

int FUN_0054fe80(int *param_1,undefined4 param_2,undefined2 *param_3)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  iVar4 = param_1[2];
  iVar2 = param_1[0x13] + 1;
  iVar3 = param_1[0x13] + 2;
  param_1[0x13] = iVar3;
  if (iVar4 == 0) {
    iVar4 = FUN_0056c7b0(*param_1);
    param_1[2] = iVar4;
    if (iVar4 != 0) {
      FUN_0056bdc0(iVar4,0x94);
    }
  }
  iVar6 = *(int *)(iVar4 + 0x1c);
  if ((iVar6 < *(int *)(iVar4 + 0x20)) || (iVar5 = FUN_0053b4b0(iVar4), iVar5 == 0)) {
    *(int *)(iVar4 + 0x1c) = *(int *)(iVar4 + 0x1c) + 1;
    puVar1 = (undefined2 *)(*(int *)(iVar4 + 4) + iVar6 * 0x14);
    *(int *)(puVar1 + 2) = iVar6 + 2;
    *puVar1 = 7;
    *(undefined1 *)((int)puVar1 + 3) = 0;
    *(int *)(puVar1 + 4) = iVar2;
    *(undefined4 *)(puVar1 + 6) = 0;
    *(undefined4 *)(puVar1 + 8) = 0;
  }
  iVar6 = *(int *)(iVar4 + 0x1c);
  if ((iVar6 < *(int *)(iVar4 + 0x20)) || (iVar5 = FUN_0053b4b0(iVar4), iVar5 == 0)) {
    iVar5 = *(int *)(iVar4 + 4);
    *(int *)(iVar4 + 0x1c) = *(int *)(iVar4 + 0x1c) + 1;
    *(undefined2 *)(iVar5 + iVar6 * 0x14) = 7;
    *(undefined1 *)(iVar5 + 3 + iVar6 * 0x14) = 0;
    *(undefined4 *)(iVar5 + 4 + iVar6 * 0x14) = 0;
    *(int *)(iVar5 + 8 + iVar6 * 0x14) = iVar3;
    *(undefined4 *)(iVar5 + 0xc + iVar6 * 0x14) = 0;
    *(undefined4 *)(iVar5 + 0x10 + iVar6 * 0x14) = 0;
  }
  *param_3 = 10;
  *(int *)(param_3 + 2) = iVar2;
  *(undefined4 *)(param_3 + 4) = 0;
  *(undefined4 *)(param_3 + 6) = 0;
  uVar7 = *(uint *)(iVar4 + 0x1c);
  if (((int)uVar7 < *(int *)(iVar4 + 0x20)) || (iVar6 = FUN_0053b4b0(iVar4), iVar6 == 0)) {
    iVar6 = *(int *)(iVar4 + 4);
    *(int *)(iVar4 + 0x1c) = *(int *)(iVar4 + 0x1c) + 1;
    *(undefined2 *)(iVar6 + uVar7 * 0x14) = 1;
    *(undefined1 *)(iVar6 + 3 + uVar7 * 0x14) = 0;
    *(undefined4 *)(iVar6 + 4 + uVar7 * 0x14) = 0;
    *(undefined4 *)(iVar6 + 8 + uVar7 * 0x14) = 0;
    *(undefined4 *)(iVar6 + 0xc + uVar7 * 0x14) = 0;
    *(undefined4 *)(iVar6 + 0x10 + uVar7 * 0x14) = 0;
  }
  else {
    uVar7 = 1;
  }
  iVar6 = FUN_005654f0(param_1,param_2,param_3);
  if (*(char *)(*param_1 + 0x38) == '\0') {
    if (iVar6 == 0) {
      iVar6 = *(int *)(iVar4 + 0x1c);
      if ((iVar6 < *(int *)(iVar4 + 0x20)) || (iVar5 = FUN_0053b4b0(iVar4), iVar5 == 0)) {
        iVar5 = *(int *)(iVar4 + 4);
        *(int *)(iVar4 + 0x1c) = *(int *)(iVar4 + 0x1c) + 1;
        *(undefined2 *)(iVar5 + iVar6 * 0x14) = 7;
        *(undefined1 *)(iVar5 + 3 + iVar6 * 0x14) = 0;
        *(undefined4 *)(iVar5 + 4 + iVar6 * 0x14) = 1;
        *(int *)(iVar5 + 8 + iVar6 * 0x14) = iVar3;
        *(undefined4 *)(iVar5 + 0xc + iVar6 * 0x14) = 0;
        *(undefined4 *)(iVar5 + 0x10 + iVar6 * 0x14) = 0;
      }
      FUN_0056be30(iVar4,4,iVar2);
      iVar2 = *(int *)(iVar4 + 0x1c);
      if ((iVar2 < *(int *)(iVar4 + 0x20)) || (iVar3 = FUN_0053b4b0(iVar4), iVar3 == 0)) {
        iVar3 = *(int *)(iVar4 + 4);
        *(int *)(iVar4 + 0x1c) = *(int *)(iVar4 + 0x1c) + 1;
        *(undefined2 *)(iVar3 + iVar2 * 0x14) = 6;
        *(undefined1 *)(iVar3 + 3 + iVar2 * 0x14) = 0;
        *(undefined4 *)(iVar3 + 4 + iVar2 * 0x14) = 2;
        *(undefined4 *)(iVar3 + 8 + iVar2 * 0x14) = 2;
        *(undefined4 *)(iVar3 + 0xc + iVar2 * 0x14) = 0;
        *(undefined4 *)(iVar3 + 0x10 + iVar2 * 0x14) = 0;
      }
      if ((-1 < (int)uVar7) && (uVar7 < *(uint *)(iVar4 + 0x1c))) {
        *(uint *)(*(int *)(iVar4 + 4) + 8 + uVar7 * 0x14) = *(uint *)(iVar4 + 0x1c);
      }
      return 0;
    }
    return iVar6;
  }
  if (iVar6 != 0) {
    return iVar6;
  }
  return 7;
}


/* FUN_005500b0 @ 005500b0  kind=lib  attributed-by=lib-string  size=708 */

void FUN_005500b0(int *param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  int iVar11;
  undefined8 uVar12;
  
  iVar3 = *param_1;
  puVar4 = (undefined4 *)(param_3 * 0x10 + *(int *)(iVar3 + 0x10));
  piVar5 = (int *)param_1[2];
  if (piVar5 == (int *)0x0) {
    piVar5 = (int *)FUN_0056c7b0(iVar3);
    param_1[2] = (int)piVar5;
    if (piVar5 != (int *)0x0) {
      FUN_0056bdc0(piVar5,0x94);
    }
  }
  piVar10 = param_1;
  if ((int *)param_1[0x6c] != (int *)0x0) {
    piVar10 = (int *)param_1[0x6c];
  }
  FUN_00550aa0(param_1,param_3);
  *(byte *)((int)piVar10 + 0x17) = *(byte *)((int)piVar10 + 0x17) | 1;
  piVar10[0x55] = piVar10[0x55] | 1 << ((byte)param_3 & 0x1f);
  if ((*(byte *)((int)param_2 + 0x2a) & 0x10) != 0) {
    FUN_0056bdc0(piVar5,0x84);
  }
  for (iVar6 = FUN_00568620(param_1,param_2); iVar6 != 0; iVar6 = *(int *)(iVar6 + 0x20)) {
    FUN_00553260(param_1,iVar6);
  }
  if ((*(byte *)((int)param_2 + 0x2a) & 8) != 0) {
    FUN_0055e450(param_1,"DELETE FROM %Q.sqlite_sequence WHERE name=%Q",*puVar4,*param_2);
  }
  pcVar7 = "sqlite_temp_master";
  if (param_3 != 1) {
    pcVar7 = "sqlite_master";
  }
  FUN_0055e450(param_1,"DELETE FROM %Q.%s WHERE tbl_name=%Q and type!=\'trigger\'",*puVar4,pcVar7,
               *param_2);
  if (param_4 == 0) {
    if ((*(byte *)((int)param_2 + 0x2a) & 0x10) == 0) {
      FUN_00534210(param_1,param_2);
      goto LAB_005501b4;
    }
  }
  else {
LAB_005501b4:
    if ((*(byte *)((int)param_2 + 0x2a) & 0x10) == 0) goto LAB_00550295;
  }
  iVar6 = piVar5[7];
  iVar11 = *param_2;
  if ((iVar6 < piVar5[8]) || (iVar8 = FUN_0053b4b0(piVar5), iVar8 == 0)) {
    iVar8 = piVar5[1];
    piVar5[7] = piVar5[7] + 1;
    *(int *)(iVar8 + 4 + iVar6 * 0x14) = param_3;
    *(undefined2 *)(iVar8 + iVar6 * 0x14) = 0x86;
    *(undefined1 *)(iVar8 + 3 + iVar6 * 0x14) = 0;
    *(undefined4 *)(iVar8 + 8 + iVar6 * 0x14) = 0;
    *(undefined4 *)(iVar8 + 0xc + iVar6 * 0x14) = 0;
    *(undefined4 *)(iVar8 + 0x10 + iVar6 * 0x14) = 0;
  }
  else {
    iVar6 = 1;
  }
  iVar8 = *piVar5;
  if ((piVar5[1] == 0) || (*(char *)(iVar8 + 0x38) != '\0')) {
    FUN_00539320(iVar8,0,iVar11);
  }
  else {
    if (iVar6 < 0) {
      iVar6 = piVar5[7] + -1;
    }
    iVar1 = piVar5[1] + iVar6 * 0x14;
    FUN_00539320(iVar8,(int)*(char *)(iVar1 + 1),*(undefined4 *)(piVar5[1] + 0x10 + iVar6 * 0x14));
    *(undefined4 *)(iVar1 + 0x10) = 0;
    if (iVar11 == 0) {
      *(undefined4 *)(iVar1 + 0x10) = 0;
      *(undefined1 *)(iVar1 + 1) = 0;
    }
    else {
      uVar12 = FUN_00568070(iVar11);
      uVar9 = FUN_005524a0(*piVar5,(int)((ulonglong)uVar12 >> 0x20),(int)uVar12);
      *(undefined4 *)(iVar1 + 0x10) = uVar9;
      *(undefined1 *)(iVar1 + 1) = 0xff;
    }
  }
LAB_00550295:
  iVar6 = *param_2;
  iVar11 = piVar5[7];
  if ((iVar11 < piVar5[8]) || (iVar8 = FUN_0053b4b0(piVar5), iVar8 == 0)) {
    iVar8 = piVar5[1];
    piVar5[7] = piVar5[7] + 1;
    *(undefined2 *)(iVar8 + iVar11 * 0x14) = 0x6c;
    *(undefined1 *)(iVar8 + 3 + iVar11 * 0x14) = 0;
    *(int *)(iVar8 + 4 + iVar11 * 0x14) = param_3;
    *(undefined4 *)(iVar8 + 8 + iVar11 * 0x14) = 0;
    *(undefined4 *)(iVar8 + 0xc + iVar11 * 0x14) = 0;
    *(undefined4 *)(iVar8 + 0x10 + iVar11 * 0x14) = 0;
  }
  else {
    iVar11 = 1;
  }
  iVar8 = piVar5[1];
  iVar1 = *piVar5;
  if ((iVar8 == 0) || (*(char *)(iVar1 + 0x38) != '\0')) {
    FUN_00539320(iVar1,0,iVar6);
  }
  else {
    if (iVar11 < 0) {
      iVar11 = piVar5[7] + -1;
    }
    iVar2 = iVar8 + iVar11 * 0x14;
    FUN_00539320(iVar1,(int)*(char *)(iVar2 + 1),*(undefined4 *)(iVar8 + 0x10 + iVar11 * 0x14));
    *(undefined4 *)(iVar2 + 0x10) = 0;
    if (iVar6 == 0) {
      *(undefined4 *)(iVar2 + 0x10) = 0;
      *(undefined1 *)(iVar2 + 1) = 0;
    }
    else {
      uVar12 = FUN_00568070(iVar6);
      uVar9 = FUN_005524a0(*piVar5,(int)((ulonglong)uVar12 >> 0x20),(int)uVar12);
      *(undefined4 *)(iVar2 + 0x10) = uVar9;
      *(undefined1 *)(iVar2 + 1) = 0xff;
    }
  }
  FUN_0054f7b0(param_1,param_3);
  FUN_0057a790(iVar3,param_3);
  return;
}


/* FUN_00550380 @ 00550380  kind=lib  attributed-by=lib-island  size=144 */

int FUN_00550380(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_1[2];
  if (iVar3 == 0) {
    iVar3 = FUN_0056c7b0(*param_1);
    param_1[2] = iVar3;
    if (iVar3 != 0) {
      FUN_0056bdc0(iVar3,0x94);
    }
  }
  iVar1 = param_1[0x15];
  param_1[0x15] = iVar1 + 1;
  iVar2 = *(int *)(iVar3 + 0x1c);
  if (*(int *)(iVar3 + 0x20) <= iVar2) {
    iVar4 = FUN_0053b4b0(iVar3);
    if (iVar4 != 0) {
      return 1;
    }
  }
  iVar4 = *(int *)(iVar3 + 4);
  *(int *)(iVar3 + 0x1c) = *(int *)(iVar3 + 0x1c) + 1;
  *(int *)(iVar4 + 4 + iVar2 * 0x14) = iVar1;
  *(undefined2 *)(iVar4 + iVar2 * 0x14) = 0x1a;
  *(undefined1 *)(iVar4 + 3 + iVar2 * 0x14) = 0;
  *(undefined4 *)(iVar4 + 8 + iVar2 * 0x14) = 0;
  *(undefined4 *)(iVar4 + 0xc + iVar2 * 0x14) = 0;
  *(undefined4 *)(iVar4 + 0x10 + iVar2 * 0x14) = 0;
  return iVar2;
}


/* FUN_00550410 @ 00550410  kind=lib  attributed-by=lib-island  size=87 */

void FUN_00550410(undefined4 param_1,int param_2,uint param_3,undefined4 param_4,uint param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  
  for (; param_2 != 0; param_2 = *(int *)(param_2 + 0x20)) {
    if (((*(byte *)(param_2 + 8) == param_3) && (*(byte *)(param_2 + 9) == param_5)) &&
       (iVar1 = FUN_0052f320(*(undefined4 *)(param_2 + 0x10),param_4), iVar1 != 0)) {
      FUN_00550470(param_1,param_2,param_6,param_7,param_8,param_9);
    }
  }
  return;
}


/* FUN_00550470 @ 00550470  kind=lib  attributed-by=lib-island  size=297 */

void FUN_00550470(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                 ,undefined4 param_6)

{
  undefined2 *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  piVar3 = param_1;
  piVar4 = (int *)param_1[2];
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)FUN_0056c7b0(*param_1);
    param_1[2] = (int)piVar4;
    if (piVar4 != (int *)0x0) {
      FUN_0056bdc0(piVar4,0x94);
    }
  }
  iVar5 = FUN_0053ad90(param_1,param_2,param_3,param_5);
  if (iVar5 != 0) {
    if ((*param_2 == 0) ||
       (iVar2 = *param_1, param_1._0_1_ = 1, (*(uint *)(iVar2 + 0x18) & 0x20000) != 0)) {
      param_1._0_1_ = 0;
    }
    iVar7 = piVar3[0x13] + 1;
    piVar3[0x13] = iVar7;
    iVar2 = piVar4[7];
    if ((iVar2 < piVar4[8]) || (iVar6 = FUN_0053b4b0(piVar4), iVar6 == 0)) {
      piVar4[7] = piVar4[7] + 1;
      puVar1 = (undefined2 *)(piVar4[1] + iVar2 * 0x14);
      *(undefined4 *)(puVar1 + 2) = param_4;
      *puVar1 = 0x73;
      *(undefined1 *)((int)puVar1 + 3) = 0;
      *(undefined4 *)(puVar1 + 4) = param_6;
      *(int *)(puVar1 + 6) = iVar7;
      *(undefined4 *)(puVar1 + 8) = 0;
    }
    iVar2 = piVar4[1];
    iVar5 = *(int *)(iVar5 + 8);
    iVar7 = *piVar4;
    if ((iVar2 == 0) || (*(char *)(iVar7 + 0x38) != '\0')) {
      FUN_00539320(iVar7,0xffffffee,iVar5);
    }
    else {
      iVar6 = iVar2 + (piVar4[7] + -1) * 0x14;
      FUN_00539320(iVar7,(int)*(char *)(iVar6 + 1),
                   *(undefined4 *)(iVar2 + 0x10 + (piVar4[7] + -1) * 0x14));
      *(undefined4 *)(iVar6 + 0x10) = 0;
      if (iVar5 == 0) {
        *(undefined4 *)(iVar6 + 0x10) = 0;
        *(undefined1 *)(iVar6 + 1) = 0;
      }
      else {
        *(int *)(iVar6 + 0x10) = iVar5;
        *(undefined1 *)(iVar6 + 1) = 0xee;
      }
    }
    if (piVar4[1] != 0) {
      *(undefined1 *)(piVar4[1] + -0x11 + piVar4[7] * 0x14) = param_1._0_1_;
    }
    return;
  }
  return;
}


/* FUN_005505a0 @ 005505a0  kind=lib  attributed-by=lib-island  size=1120 */

void FUN_005505a0(int *param_1,char *param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined4 local_54;
  undefined4 local_50;
  int local_4c;
  undefined4 local_48;
  int local_44;
  int *local_40;
  int local_3c;
  uint local_38;
  int local_34;
  char local_2d;
  code *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar2 = param_1[2];
  local_38 = 0xffffffff;
  local_44 = 0;
  if (iVar2 == 0) {
    iVar2 = FUN_0056c7b0(*param_1);
    param_1[2] = iVar2;
    if (iVar2 == 0) goto LAB_0055069e;
    FUN_0056bdc0(iVar2,0x94);
  }
  uVar3 = 0xffffffff;
  param_1[0x17] = param_1[0x17] + 1;
  if ((param_2[2] & 0x20U) == 0) {
    uVar3 = FUN_00550380(param_1);
    local_38 = uVar3;
  }
  if ((char)param_1[0x75] == '\x02') {
    pcVar7 = "LIST";
    if (*param_2 != 'H') {
      pcVar7 = "SCALAR";
    }
    pcVar4 = "";
    if ((int)uVar3 < 0) {
      pcVar4 = "CORRELATED ";
    }
    uVar5 = FUN_0055d980(*param_1,"EXECUTE %s%s SUBQUERY %d",pcVar4,pcVar7,param_1[0x7a]);
    FUN_0056bf50(iVar2,0x96,param_1[0x79],0,0,uVar5,0xffffffff);
  }
  if (*param_2 == 'H') {
    local_48 = *(undefined4 *)(param_2 + 8);
    if (param_3 != 0) {
      FUN_0056be90(iVar2,10,0,param_3);
    }
    local_2d = FUN_00553b20(local_48);
    *(int *)(param_2 + 0x18) = param_1[0x12];
    param_1[0x12] = param_1[0x12] + 1;
    local_50 = FUN_0056be90(iVar2,0x2a,*(undefined4 *)(param_2 + 0x18),param_4 == 0);
    if ((param_3 == 0) && (*(int *)(iVar2 + 4) != 0)) {
      *(undefined1 *)(*(int *)(iVar2 + 4) + -0x11 + *(int *)(iVar2 + 0x1c) * 0x14) = 8;
    }
    local_18 = 0x1000000000000;
    local_10 = 0x76b3c4;
    if ((*(ushort *)(param_2 + 2) & 0x800) == 0) {
      local_40 = *(int **)(param_2 + 0x10);
      if (local_40 != (int *)0x0) {
        if (local_2d == '\0') {
          local_2d = 'b';
        }
        uVar5 = FUN_00555b70(param_1,*(undefined4 *)(param_2 + 8));
        local_10 = CONCAT44(uVar5,&DAT_0076b3c4);
        local_48 = FUN_0055a1f0(param_1);
        local_34 = FUN_0055a1f0(param_1);
        FUN_0056be90(iVar2,10,0,local_34);
        local_4c = *local_40;
        local_40 = (int *)local_40[2];
        for (; 0 < local_4c; local_4c = local_4c + -1) {
          local_3c = *local_40;
          if (-1 < (int)local_38) {
            local_1c = 1;
            local_2c = FUN_00536500;
            local_28 = FUN_00548960;
            FUN_00578680(&local_2c,local_3c);
            if (local_1c == 0) {
              FUN_0056c4b0(iVar2,local_38);
              local_38 = 0xffffffff;
            }
          }
          iVar6 = local_3c;
          if (param_4 == 0) {
LAB_00550918:
            local_3c = FUN_00554e20(param_1,iVar6,local_48);
            if (param_4 == 0) {
              FUN_0056bf50(iVar2,0x1f,local_3c,1,local_34,&local_2d,1);
              FUN_00554430(param_1,local_3c,1);
              FUN_0056be90(iVar2,0x61,*(undefined4 *)(param_2 + 0x18),local_34);
            }
            else {
              FUN_0056be90(iVar2,0x15,local_3c,*(int *)(iVar2 + 0x1c) + 2);
              FUN_0056bef0(iVar2,0x39,*(undefined4 *)(param_2 + 0x18),local_34,local_3c);
            }
          }
          else {
            uVar8 = FUN_00556530(local_3c,&local_54);
            iVar6 = (int)((ulonglong)uVar8 >> 0x20);
            if ((int)uVar8 == 0) goto LAB_00550918;
            FUN_0056bef0(iVar2,0x3a,*(undefined4 *)(param_2 + 0x18),local_34,local_54);
          }
          local_40 = local_40 + 5;
        }
        FUN_00563fb0(param_1,local_48);
        FUN_00563fb0(param_1,local_34);
      }
    }
    else {
      local_24 = *(undefined4 *)(param_2 + 0x18);
      local_28 = (code *)CONCAT31(CONCAT21(local_28._2_2_,local_2d),7);
      local_20 = 0;
      local_1c = 0;
      *(undefined4 *)(*(int *)(param_2 + 0x10) + 8) = 0;
      iVar6 = FUN_005654f0(param_1,*(undefined4 *)(param_2 + 0x10),&local_28);
      if (iVar6 != 0) goto LAB_0055069e;
      piVar1 = (int *)**(int **)(param_2 + 0x10);
      if ((piVar1 != (int *)0x0) && (0 < *piVar1)) {
        uVar5 = FUN_0054bcc0(param_1,*(undefined4 *)(param_2 + 8),*(undefined4 *)piVar1[2]);
        local_10 = CONCAT44(uVar5,(undefined4)local_10);
      }
    }
    if (param_4 == 0) {
      FUN_0056c320(iVar2,local_50,&local_18,0xfffffffa);
    }
  }
  else {
    local_44 = *(int *)(param_2 + 0x10);
    iVar6 = param_1[0x13] + 1;
    param_1[0x13] = iVar6;
    local_18 = CONCAT44(iVar6,(undefined4)local_18);
    local_18._1_7_ = (uint7)((ulonglong)local_18 >> 8) & 0xffffffffffff00;
    local_10 = 0;
    if (*param_2 == 't') {
      local_18 = CONCAT71(local_18._1_7_,6);
      uVar5 = 10;
    }
    else {
      local_18 = CONCAT71(local_18._1_7_,3);
      uVar5 = 7;
    }
    FUN_0056be90(iVar2,uVar5,0,iVar6);
    iVar6 = local_44;
    FUN_00555e30(*param_1,*(undefined4 *)(local_44 + 0x48));
    local_34 = FUN_00553bb0(*param_1,0x81,&PTR_DAT_007122e0,1);
    FUN_005540d0(*param_1,local_34,0,0);
    if ((local_34 != 0) && (*(int *)(*param_1 + 0x5c) < *(int *)(local_34 + 0x14))) {
      FUN_00553950(param_1,"Expression tree is too large (maximum depth %d)",
                   *(int *)(*param_1 + 0x5c));
    }
    *(int *)(iVar6 + 0x48) = local_34;
    *(undefined4 *)(iVar6 + 8) = 0;
    iVar6 = FUN_005654f0(param_1,iVar6,&local_18);
    if (iVar6 != 0) {
LAB_0055069e:
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    local_44 = local_18._4_4_;
  }
  if ((-1 < (int)local_38) && (local_38 < *(uint *)(iVar2 + 0x1c))) {
    *(uint *)(*(int *)(iVar2 + 4) + 8 + local_38 * 0x14) = *(uint *)(iVar2 + 0x1c);
  }
  FUN_005543e0(param_1,1);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00550a00 @ 00550a00  kind=lib  attributed-by=lib-island  size=155 */

void FUN_00550a00(int *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  
  iVar3 = *param_1;
  iVar7 = 0;
  if (0 < *(int *)(iVar3 + 0x14)) {
    iVar5 = 0;
    do {
      if (*(int *)(*(int *)(iVar3 + 0x10) + 4 + iVar5) != 0) {
        if (param_2 != (byte *)0x0) {
          pbVar6 = *(byte **)(*(int *)(iVar3 + 0x10) + iVar5);
          bVar2 = *param_2;
          pbVar4 = param_2;
          while ((bVar2 != 0 && ((&DAT_007120d8)[bVar2] == (&DAT_007120d8)[*pbVar6]))) {
            pbVar1 = pbVar4 + 1;
            pbVar4 = pbVar4 + 1;
            pbVar6 = pbVar6 + 1;
            bVar2 = *pbVar1;
          }
          if ((&DAT_007120d8)[*pbVar4] != (&DAT_007120d8)[*pbVar6]) goto LAB_00550a8b;
        }
        FUN_00550aa0(param_1,iVar7);
      }
LAB_00550a8b:
      iVar7 = iVar7 + 1;
      iVar5 = iVar5 + 0x10;
    } while (iVar7 < *(int *)(iVar3 + 0x14));
  }
  return;
}


/* FUN_00550aa0 @ 00550aa0  kind=lib  attributed-by=lib-island  size=181 */

void FUN_00550aa0(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  piVar1 = (int *)param_1[0x6c];
  piVar4 = param_1;
  if ((piVar1 != (int *)0x0) && (piVar4 = piVar1, piVar1 != param_1)) {
    param_1[0x57] = -1;
  }
  if (piVar4[0x57] == 0) {
    iVar2 = piVar4[2];
    if (iVar2 == 0) {
      iVar2 = FUN_0056c7b0(*piVar4);
      piVar4[2] = iVar2;
      if (iVar2 == 0) {
        return;
      }
      FUN_0056bdc0(iVar2,0x94);
    }
    iVar2 = FUN_0056be90(iVar2,1,0,0);
    piVar4[0x57] = iVar2 + 1;
  }
  if (-1 < param_2) {
    uVar3 = 1 << ((byte)param_2 & 0x1f);
    if ((uVar3 & piVar4[0x56]) == 0) {
      piVar4[0x56] = piVar4[0x56] | uVar3;
      piVar4[param_2 + 0x58] = **(int **)(*(int *)(*piVar4 + 0x10) + 0xc + param_2 * 0x10);
      if (param_2 == 1) {
        FUN_0055e870(piVar4);
      }
    }
  }
  return;
}


/* FUN_00550b60 @ 00550b60  kind=lib  attributed-by=lib-island  size=359 */

void FUN_00550b60(int param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_8;
  
  iVar5 = param_1;
  iVar8 = 2;
  iVar7 = 2;
  if (2 < *(int *)(param_1 + 0x14)) {
    param_1 = 0x20;
    local_8 = 0x20;
    do {
      iVar2 = *(int *)(iVar5 + 0x10);
      if (*(int *)(local_8 + 4 + iVar2) == 0) {
        puVar3 = *(undefined4 **)(local_8 + iVar2);
        if (*(int *)(iVar5 + 0x1f0) == 0) {
          if (((puVar3 == (undefined4 *)0x0) || (puVar3 < *(undefined4 **)(iVar5 + 0x104))) ||
             (*(undefined4 **)(iVar5 + 0x108) <= puVar3)) {
            FUN_00524410(puVar3);
          }
          else {
            *puVar3 = *(undefined4 *)(iVar5 + 0x100);
            *(int *)(iVar5 + 0xec) = *(int *)(iVar5 + 0xec) + -1;
            *(undefined4 **)(iVar5 + 0x100) = puVar3;
          }
        }
        else if (((puVar3 == (undefined4 *)0x0) || (puVar3 < *(undefined4 **)(iVar5 + 0x104))) ||
                (*(undefined4 **)(iVar5 + 0x108) <= puVar3)) {
          iVar6 = (*DAT_00766608._4_4_)(puVar3);
          **(int **)(iVar5 + 0x1f0) = **(int **)(iVar5 + 0x1f0) + iVar6;
        }
        else {
          **(int **)(iVar5 + 0x1f0) = **(int **)(iVar5 + 0x1f0) + (uint)*(ushort *)(iVar5 + 0xe8);
        }
        *(undefined4 *)(local_8 + iVar2) = 0;
      }
      else {
        if (iVar8 < iVar7) {
          *(undefined8 *)(param_1 + iVar2) = *(undefined8 *)(local_8 + iVar2);
          *(undefined8 *)(param_1 + 8 + iVar2) = *(undefined8 *)(local_8 + 8 + iVar2);
        }
        iVar8 = iVar8 + 1;
        param_1 = param_1 + 0x10;
      }
      iVar7 = iVar7 + 1;
      local_8 = local_8 + 0x10;
    } while (iVar7 < *(int *)(iVar5 + 0x14));
  }
  memset((void *)(iVar8 * 0x10 + *(int *)(iVar5 + 0x10)),0,(*(int *)(iVar5 + 0x14) - iVar8) * 0x10);
  *(int *)(iVar5 + 0x14) = iVar8;
  if (iVar8 < 3) {
    puVar4 = *(undefined8 **)(iVar5 + 0x10);
    puVar1 = (undefined8 *)(iVar5 + 0x1b8);
    if (puVar4 != puVar1) {
      *puVar1 = *puVar4;
      *(undefined8 *)(iVar5 + 0x1c0) = puVar4[1];
      *(undefined8 *)(iVar5 + 0x1c8) = puVar4[2];
      *(undefined8 *)(iVar5 + 0x1d0) = puVar4[3];
      FUN_005521a0(iVar5,puVar4);
      *(undefined8 **)(iVar5 + 0x10) = puVar1;
    }
  }
  return;
}


/* FUN_00550cd0 @ 00550cd0  kind=lib  attributed-by=lib-island  size=184 */

void FUN_00550cd0(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = param_2;
  if (*(int *)(param_2 + 0xc) == 0) {
    iVar5 = param_3 * 0x18;
    FUN_0056b960(*param_1,*(undefined4 *)(*(int *)(param_2 + 4) + 4 + iVar5),
                 *(undefined1 *)(*(int *)(*(int *)(*param_1 + 0x10) + 0xc) + 0x4d),
                 *(undefined1 *)(*(int *)(param_2 + 4) + 0x15 + iVar5),&param_2);
    if (param_2 != 0) {
      iVar2 = param_1[1];
      iVar3 = *param_1;
      if ((iVar2 == 0) || (*(char *)(iVar3 + 0x38) != '\0')) {
        FUN_00539320(iVar3,0xfffffff8,param_2);
      }
      else {
        iVar1 = iVar2 + (param_1[7] + -1) * 0x14;
        FUN_00539320(iVar3,(int)*(char *)(iVar1 + 1),
                     *(undefined4 *)(iVar2 + 0x10 + (param_1[7] + -1) * 0x14));
        *(int *)(iVar1 + 0x10) = param_2;
        *(undefined1 *)(iVar1 + 1) = 0xf8;
      }
    }
    if ((-1 < param_4) && (*(char *)(iVar5 + 0x15 + *(int *)(iVar4 + 4)) == 'e')) {
      FUN_0056be30(param_1,0x16,param_4);
    }
  }
  return;
}


/* FUN_00550d90 @ 00550d90  kind=lib  attributed-by=lib-string  size=91 */

void FUN_00550d90(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_0054ab50(param_1,0x16,"COMMIT",0,0);
  if (iVar1 == 0) {
    iVar1 = param_1[2];
    if (iVar1 == 0) {
      iVar1 = FUN_0056c7b0(*param_1);
      param_1[2] = iVar1;
      if (iVar1 == 0) {
        return;
      }
      FUN_0056bdc0(iVar1,0x94);
    }
    FUN_0056be90(iVar1,0x22,1,0);
  }
  return;
}


/* FUN_00550df0 @ 00550df0  kind=lib  attributed-by=lib-island  size=56 */

int FUN_00550df0(undefined4 param_1,char param_2)

{
  char cVar1;
  
  cVar1 = FUN_00553b20(param_1);
  if (cVar1 == '\0') {
    if (param_2 != '\0') goto LAB_00550e1e;
  }
  else {
    if (param_2 == '\0') {
LAB_00550e1e:
      return (int)cVar1 + (int)param_2;
    }
    if (('b' < cVar1) || ('b' < param_2)) {
      return 99;
    }
  }
  return 0x62;
}


/* FUN_00550e30 @ 00550e30  kind=lib  attributed-by=lib-island  size=854 */

void FUN_00550e30(undefined4 *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8)

{
  undefined2 *puVar1;
  short sVar2;
  int iVar3;
  byte bVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  undefined4 local_8;
  
  piVar5 = (int *)param_1[2];
  if (piVar5 == (int *)0x0) {
    piVar5 = (int *)FUN_0056c7b0(*param_1);
    param_1[2] = piVar5;
    if (piVar5 != (int *)0x0) {
      FUN_0056bdc0(piVar5,0x94);
    }
  }
  iVar11 = 0;
  for (iVar12 = param_2[2]; iVar12 != 0; iVar12 = *(int *)(iVar12 + 0x14)) {
    iVar11 = iVar11 + 1;
  }
  while (iVar11 = iVar11 + -1, -1 < iVar11) {
    iVar12 = *(int *)(param_5 + iVar11 * 4);
    if (iVar12 != 0) {
      iVar3 = piVar5[7];
      if ((iVar3 < piVar5[8]) || (iVar6 = FUN_0053b4b0(piVar5), iVar6 == 0)) {
        piVar5[7] = piVar5[7] + 1;
        puVar1 = (undefined2 *)(piVar5[1] + iVar3 * 0x14);
        *(int *)(puVar1 + 2) = param_3 + 1 + iVar11;
        *puVar1 = 0x61;
        *(undefined1 *)((int)puVar1 + 3) = 0;
        *(int *)(puVar1 + 4) = iVar12;
        *(undefined4 *)(puVar1 + 6) = 0;
        *(undefined4 *)(puVar1 + 8) = 0;
      }
      if ((param_8 != 0) && (piVar5[1] != 0)) {
        *(undefined1 *)(piVar5[1] + -0x11 + piVar5[7] * 0x14) = 0x10;
      }
    }
  }
  if (*(char *)((int)param_1 + 0x13) == '\0') {
    param_1[0x13] = param_1[0x13] + 1;
    local_8 = param_1[0x13];
  }
  else {
    bVar4 = *(char *)((int)param_1 + 0x13) - 1;
    *(byte *)((int)param_1 + 0x13) = bVar4;
    local_8 = param_1[bVar4 + 7];
  }
  sVar2 = *(short *)((int)param_2 + 0x26);
  iVar12 = piVar5[7];
  iVar11 = piVar5[8];
  if (iVar12 < iVar11) {
LAB_00550f96:
    iVar11 = piVar5[1];
    piVar5[7] = piVar5[7] + 1;
    *(int *)(iVar11 + 4 + iVar12 * 0x14) = param_4 + 1;
    *(int *)(iVar11 + 8 + iVar12 * 0x14) = (int)sVar2;
    *(undefined2 *)(iVar11 + iVar12 * 0x14) = 0x1f;
    *(undefined1 *)(iVar11 + 3 + iVar12 * 0x14) = 0;
    *(undefined4 *)(iVar11 + 0xc + iVar12 * 0x14) = local_8;
    *(undefined4 *)(iVar11 + 0x10 + iVar12 * 0x14) = 0;
  }
  else {
    if (iVar11 == 0) {
      iVar11 = 0x33;
    }
    else {
      iVar11 = iVar11 * 2;
    }
    uVar7 = FUN_00552390(*piVar5,piVar5[1],iVar11 * 0x14);
    if (uVar7 != 0) {
      iVar11 = *piVar5;
      if (((iVar11 == 0) || (uVar7 < *(uint *)(iVar11 + 0x104))) ||
         (*(uint *)(iVar11 + 0x108) <= uVar7)) {
        uVar9 = (*DAT_00766608._4_4_)(uVar7);
      }
      else {
        uVar9 = (uint)*(ushort *)(iVar11 + 0xe8);
      }
      piVar5[8] = uVar9 / 0x14;
      piVar5[1] = uVar7;
      goto LAB_00550f96;
    }
  }
  FUN_00568100(piVar5,param_2);
  sVar2 = *(short *)((int)param_2 + 0x26);
  piVar10 = param_1 + 0x1d;
  iVar12 = 10;
  do {
    iVar11 = *piVar10;
    if ((param_4 + 1 <= iVar11) && (iVar11 <= sVar2 + param_4)) {
      if ((char)piVar10[-2] != '\0') {
        if (*(byte *)((int)param_1 + 0x13) < 8) {
          param_1[*(byte *)((int)param_1 + 0x13) + 7] = iVar11;
          *(char *)((int)param_1 + 0x13) = *(char *)((int)param_1 + 0x13) + '\x01';
        }
        *(undefined1 *)(piVar10 + -2) = 0;
      }
      *piVar10 = 0;
    }
    piVar10 = piVar10 + 6;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  if (*(char *)((int)param_1 + 0x12) == '\0') {
    bVar4 = (param_6 != 0) * '\x02' + 2U | 1;
  }
  else {
    bVar4 = 0;
  }
  if (param_7 != 0) {
    bVar4 = bVar4 | 8;
  }
  if (param_8 != 0) {
    bVar4 = bVar4 | 0x10;
  }
  iVar12 = piVar5[7];
  iVar11 = piVar5[8];
  if (iVar11 <= iVar12) {
    if (iVar11 == 0) {
      iVar11 = 0x33;
    }
    else {
      iVar11 = iVar11 * 2;
    }
    uVar7 = FUN_00552390(*piVar5,piVar5[1],iVar11 * 0x14);
    if (uVar7 == 0) goto LAB_005510fe;
    iVar11 = *piVar5;
    if (((iVar11 == 0) || (uVar7 < *(uint *)(iVar11 + 0x104))) ||
       (*(uint *)(iVar11 + 0x108) <= uVar7)) {
      uVar9 = (*DAT_00766608._4_4_)(uVar7);
    }
    else {
      uVar9 = (uint)*(ushort *)(iVar11 + 0xe8);
    }
    piVar5[8] = uVar9 / 0x14;
    piVar5[1] = uVar7;
  }
  iVar11 = piVar5[1];
  piVar5[7] = piVar5[7] + 1;
  *(int *)(iVar11 + 4 + iVar12 * 0x14) = param_3;
  *(undefined4 *)(iVar11 + 8 + iVar12 * 0x14) = local_8;
  *(undefined2 *)(iVar11 + iVar12 * 0x14) = 0x39;
  *(undefined1 *)(iVar11 + 3 + iVar12 * 0x14) = 0;
  *(int *)(iVar11 + 0xc + iVar12 * 0x14) = param_4;
  *(undefined4 *)(iVar11 + 0x10 + iVar12 * 0x14) = 0;
LAB_005510fe:
  if (*(char *)((int)param_1 + 0x12) == '\0') {
    iVar12 = piVar5[1];
    iVar11 = *param_2;
    iVar3 = *piVar5;
    if ((iVar12 == 0) || (*(char *)(iVar3 + 0x38) != '\0')) {
      FUN_00539320(iVar3,0,iVar11);
    }
    else {
      iVar6 = iVar12 + (piVar5[7] + -1) * 0x14;
      FUN_00539320(iVar3,(int)*(char *)(iVar6 + 1),
                   *(undefined4 *)(iVar12 + 0x10 + (piVar5[7] + -1) * 0x14));
      *(undefined4 *)(iVar6 + 0x10) = 0;
      if (iVar11 == 0) {
        *(undefined4 *)(iVar6 + 0x10) = 0;
        *(undefined1 *)(iVar6 + 1) = 0;
      }
      else {
        uVar8 = FUN_00568070(iVar11);
        uVar8 = FUN_005524a0(*piVar5,iVar11,uVar8);
        *(undefined4 *)(iVar6 + 0x10) = uVar8;
        *(undefined1 *)(iVar6 + 1) = 0xff;
      }
    }
  }
  if (piVar5[1] != 0) {
    *(byte *)(piVar5[1] + -0x11 + piVar5[7] * 0x14) = bVar4;
  }
  return;
}


/* FUN_00551190 @ 00551190  kind=lib  attributed-by=lib-island  size=33 */

undefined4 FUN_00551190(undefined4 param_1)

{
  FUN_00525a30(0xb,"database corruption at line %d of [%.10s]",param_1,
               "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
  return 0xb;
}


/* FUN_005511c0 @ 005511c0  kind=lib  attributed-by=lib-island  size=167 */

undefined1 * FUN_005511c0(undefined4 param_1,int param_2,int param_3,uint param_4)

{
  undefined1 *_Dst;
  uint uVar1;
  uint uVar2;
  
  _Dst = (undefined1 *)FUN_00552230(param_1,0x2c);
  if (_Dst != (undefined1 *)0x0) {
    memset(_Dst,0,0x2c);
    param_2 = param_2 + param_3 * 0x48;
    *_Dst = 0x98;
    *(undefined2 *)(_Dst + 0x1e) = 0xffff;
    *(undefined4 *)(_Dst + 0x14) = 1;
    *(undefined4 *)(_Dst + 0x28) = *(undefined4 *)(param_2 + 0x18);
    *(undefined4 *)(_Dst + 0x18) = *(undefined4 *)(param_2 + 0x34);
    if ((int)*(short *)(*(int *)(_Dst + 0x28) + 0x24) == param_4) {
      *(ushort *)(_Dst + 2) = *(ushort *)(_Dst + 2) | 4;
      *(undefined2 *)(_Dst + 0x1c) = 0xffff;
      return _Dst;
    }
    *(short *)(_Dst + 0x1c) = (short)param_4;
    if (0x3f < (int)param_4) {
      param_4 = 0x3f;
    }
    uVar1 = 1 << (param_4 & 0x1f);
    uVar2 = 0;
    if (0x1f < param_4) {
      uVar2 = uVar1;
    }
    uVar1 = uVar1 ^ uVar2;
    if (0x3f < param_4) {
      uVar2 = uVar1;
    }
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) | uVar1;
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) | uVar2;
    *(ushort *)(_Dst + 2) = *(ushort *)(_Dst + 2) | 4;
  }
  return _Dst;
}


/* FUN_00551270 @ 00551270  kind=lib  attributed-by=lib-string  size=837 */

void FUN_00551270(int *param_1,int *param_2,undefined4 *param_3,int *param_4,undefined4 param_5)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  byte *pbVar10;
  undefined1 *puVar11;
  int *piVar12;
  undefined4 *puVar13;
  size_t sVar14;
  byte *pbVar15;
  int *_Dst;
  undefined1 *local_20;
  int local_18;
  int local_14;
  int local_8;
  
  iVar4 = param_1[0x7f];
  iVar5 = *param_1;
  _Dst = (int *)0x0;
  if ((iVar4 == 0) || (*(char *)((int)param_1 + 0x1d5) != '\0')) goto LAB_00551593;
  if (param_2 == (int *)0x0) {
    iVar7 = *(short *)(iVar4 + 0x26) + -1;
    if (iVar7 < 0) goto LAB_00551593;
    if ((param_4 != (int *)0x0) && (*param_4 != 1)) {
      FUN_00553950(param_1,"foreign key on %s should reference only one column of table %T",
                   *(undefined4 *)(*(int *)(iVar4 + 4) + iVar7 * 0x18),param_3);
      goto LAB_00551593;
    }
    local_8 = 1;
  }
  else {
    if ((param_4 != (int *)0x0) && (*param_4 != *param_2)) {
      FUN_00553950(param_1,
                   "number of columns in foreign key does not match the number of columns in the referenced table"
                  );
      goto LAB_00551593;
    }
    local_8 = *param_2;
  }
  sVar14 = param_3[1] + 0x25 + local_8 * 8;
  if ((param_4 != (int *)0x0) && (iVar7 = *param_4, 0 < iVar7)) {
    puVar13 = (undefined4 *)(param_4[2] + 4);
    do {
      pcVar6 = (char *)*puVar13;
      uVar9 = 0;
      if (pcVar6 != (char *)0x0) {
        cVar2 = *pcVar6;
        pcVar8 = pcVar6;
        while (cVar2 != '\0') {
          pcVar8 = pcVar8 + 1;
          cVar2 = *pcVar8;
        }
        uVar9 = (int)pcVar8 - (int)pcVar6 & 0x3fffffff;
      }
      sVar14 = sVar14 + 1 + uVar9;
      puVar13 = puVar13 + 5;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  _Dst = (int *)FUN_00552230(iVar5,sVar14);
  if ((_Dst != (int *)0x0) && (memset(_Dst,0,sVar14), _Dst != (int *)0x0)) {
    *_Dst = iVar4;
    _Dst[1] = *(int *)(iVar4 + 0x10);
    piVar12 = _Dst + local_8 * 2 + 9;
    _Dst[2] = (int)piVar12;
    memcpy(piVar12,(void *)*param_3,param_3[1]);
    *(undefined1 *)((int)piVar12 + param_3[1]) = 0;
    FUN_00552be0(piVar12);
    local_20 = (undefined1 *)(param_3[1] + 1 + (int)piVar12);
    _Dst[5] = local_8;
    if (param_2 == (int *)0x0) {
      _Dst[9] = *(short *)(iVar4 + 0x26) + -1;
    }
    else {
      local_14 = 0;
      if (0 < local_8) {
        piVar12 = _Dst + 9;
        local_18 = 0;
        do {
          iVar7 = 0;
          if (0 < *(short *)(iVar4 + 0x26)) {
            puVar13 = *(undefined4 **)(iVar4 + 4);
            do {
              pbVar10 = (byte *)*puVar13;
              bVar3 = *pbVar10;
              pbVar15 = *(byte **)(param_2[2] + 4 + local_18);
              while ((bVar3 != 0 && ((&DAT_007120d8)[bVar3] == (&DAT_007120d8)[*pbVar15]))) {
                pbVar1 = pbVar10 + 1;
                pbVar10 = pbVar10 + 1;
                pbVar15 = pbVar15 + 1;
                bVar3 = *pbVar1;
              }
              if ((&DAT_007120d8)[*pbVar10] == (&DAT_007120d8)[*pbVar15]) {
                *piVar12 = iVar7;
                break;
              }
              iVar7 = iVar7 + 1;
              puVar13 = puVar13 + 6;
            } while (iVar7 < *(short *)(iVar4 + 0x26));
          }
          if (*(short *)(iVar4 + 0x26) <= iVar7) {
            FUN_00553950(param_1,"unknown column \"%s\" in foreign key definition",
                         *(undefined4 *)(param_2[2] + 4 + local_14 * 0x14));
            goto LAB_00551593;
          }
          local_14 = local_14 + 1;
          local_18 = local_18 + 0x14;
          piVar12 = piVar12 + 2;
        } while (local_14 < local_8);
      }
    }
    if ((param_4 != (int *)0x0) && (0 < local_8)) {
      iVar7 = 0;
      piVar12 = _Dst + 10;
      do {
        pcVar6 = *(char **)(iVar7 + 4 + param_4[2]);
        if (pcVar6 == (char *)0x0) {
          sVar14 = 0;
        }
        else {
          cVar2 = *pcVar6;
          pcVar8 = pcVar6;
          while (cVar2 != '\0') {
            pcVar8 = pcVar8 + 1;
            cVar2 = *pcVar8;
          }
          sVar14 = (int)pcVar8 - (int)pcVar6 & 0x3fffffff;
        }
        *piVar12 = (int)local_20;
        memcpy(local_20,*(void **)(iVar7 + 4 + param_4[2]),sVar14);
        puVar11 = local_20 + sVar14;
        local_20 = puVar11 + 1;
        *puVar11 = 0;
        piVar12 = piVar12 + 2;
        iVar7 = iVar7 + 0x14;
        local_8 = local_8 + -1;
      } while (local_8 != 0);
    }
    *(undefined1 *)(_Dst + 6) = 0;
    *(char *)((int)_Dst + 0x19) = (char)param_5;
    *(char *)((int)_Dst + 0x1a) = (char)((uint)param_5 >> 8);
    pcVar6 = (char *)_Dst[2];
    uVar9 = 0;
    if (pcVar6 != (char *)0x0) {
      cVar2 = *pcVar6;
      pcVar8 = pcVar6;
      while (cVar2 != '\0') {
        pcVar8 = pcVar8 + 1;
        cVar2 = *pcVar8;
      }
      uVar9 = (int)pcVar8 - (int)pcVar6 & 0x3fffffff;
    }
    piVar12 = (int *)FUN_0055ada0(*(int *)(iVar4 + 0x40) + 0x38,pcVar6,uVar9,_Dst);
    if (piVar12 == _Dst) {
      *(undefined1 *)(iVar5 + 0x38) = 1;
    }
    else {
      if (piVar12 != (int *)0x0) {
        _Dst[3] = (int)piVar12;
        piVar12[4] = (int)_Dst;
      }
      *(int **)(iVar4 + 0x10) = _Dst;
      _Dst = (int *)0x0;
    }
  }
LAB_00551593:
  FUN_005521a0(iVar5,_Dst);
  FUN_00556700(iVar5,param_2);
  FUN_00556700(iVar5,param_4);
  return;
}


/* FUN_005515c0 @ 005515c0  kind=lib  attributed-by=lib-island  size=461 */

int FUN_005515c0(int param_1,int param_2,int param_3,uint param_4,undefined4 param_5,int param_6,
                int param_7,int param_8,int *param_9)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  undefined2 *puVar4;
  uint extraout_EDX;
  undefined8 uVar5;
  
  if (param_2 == 0) goto LAB_005516a1;
  if (param_6 == 0) {
    if (param_8 == 0) goto LAB_005515e6;
    if (param_7 == 0) goto LAB_005516a1;
  }
  else {
    if (param_8 != 0) goto LAB_005516a1;
LAB_005515e6:
    if (param_7 != 0) goto LAB_005516a1;
  }
  if (param_3 + 1U < 0x81) {
    uVar5 = FUN_00568070(param_2);
    iVar3 = (int)((ulonglong)uVar5 >> 0x20);
    iVar1 = (int)uVar5;
    if (iVar1 < 0x100) {
      if (param_4 == 4) {
        param_4 = 2;
      }
      else if (param_4 == 5) {
        iVar3 = FUN_005515c0(param_1,iVar3,param_3,1,param_5,param_6,param_7,param_8,param_9);
        if (iVar3 != 0) {
          return iVar3;
        }
        iVar3 = FUN_005515c0(param_1,param_2,param_3,2,param_5,param_6,param_7,param_8,param_9);
        if (iVar3 != 0) {
          return iVar3;
        }
        param_4 = 3;
        iVar3 = param_2;
      }
      psVar2 = (short *)FUN_00556c60(param_1,iVar3,iVar1,param_3,param_4,0);
      if (((psVar2 != (short *)0x0) && (*(byte *)(psVar2 + 1) == param_4)) && (*psVar2 == param_3))
      {
        if (*(int *)(param_1 + 0x84) != 0) {
          FUN_00553890(param_1,5,"unable to delete/modify user-function due to active statements");
          return 5;
        }
        FUN_00553a10(param_1);
        param_4 = extraout_EDX;
      }
      puVar4 = (undefined2 *)FUN_00556c60(param_1,param_2,iVar1,param_3,param_4,1);
      if (puVar4 == (undefined2 *)0x0) {
        return 7;
      }
      FUN_00539a00(param_1,puVar4);
      if (param_9 != (int *)0x0) {
        *param_9 = *param_9 + 1;
      }
      *(int **)(puVar4 + 0x10) = param_9;
      *(int *)(puVar4 + 6) = param_6;
      *(int *)(puVar4 + 10) = param_8;
      *(undefined4 *)(puVar4 + 2) = param_5;
      *(int *)(puVar4 + 8) = param_7;
      *puVar4 = (short)param_3;
      *(undefined1 *)((int)puVar4 + 3) = 0;
      return 0;
    }
  }
LAB_005516a1:
  FUN_00525a30(0x15,"misuse at line %d of [%.10s]",0x1bcbe,
               "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
  return 0x15;
}


/* FUN_00551790 @ 00551790  kind=lib  attributed-by=lib-string  size=2153 */

undefined4 *
FUN_00551790(int *param_1,undefined4 param_2,int param_3,int param_4,int *param_5,int param_6,
            int param_7,int *param_8,undefined1 param_9,int param_10)

{
  size_t _Size;
  byte *pbVar1;
  void *pvVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  undefined1 local_58 [20];
  undefined4 local_44;
  int local_40;
  undefined4 *local_3c;
  int local_38;
  char *local_34;
  int local_30;
  char *local_2c;
  int *local_28;
  int *local_24;
  undefined4 *local_20;
  int local_1c;
  undefined4 *local_18;
  void *local_14;
  int *local_10;
  int *local_c;
  int local_8;
  
  iVar9 = *param_1;
  local_3c = (undefined4 *)0x0;
  local_14 = (void *)0x0;
  local_24 = (int *)0x0;
  local_28 = (int *)0x0;
  local_1c = iVar9;
  if ((*(char *)(iVar9 + 0x38) != '\0') || (*(char *)((int)param_1 + 0x1d5) != '\0'))
  goto LAB_00551fd6;
  if ((*(char *)(iVar9 + 0x81) == '\0') && (iVar3 = FUN_0055b460(iVar9,param_1 + 1), iVar3 != 0)) {
    param_1[0x11] = param_1[0x11] + 1;
    param_1[3] = iVar3;
    goto LAB_00551fd6;
  }
  if (param_4 == 0) {
    piVar4 = (int *)param_1[0x7f];
    local_c = piVar4;
    if (piVar4 == (int *)0x0) goto LAB_00551fd6;
    local_8 = FUN_00565260(iVar9,piVar4[0x10]);
  }
  else {
    local_8 = FUN_00568810(param_1,param_2,param_3,&local_24);
    if (local_8 < 0) goto LAB_00551fd6;
    if ((((*(char *)(iVar9 + 0x81) == '\0') &&
         (iVar3 = FUN_005677f0(param_1,param_4), *(int *)(param_3 + 4) == 0)) && (iVar3 != 0)) &&
       (*(int *)(iVar3 + 0x40) == *(int *)(*(int *)(iVar9 + 0x10) + 0x1c))) {
      local_8 = 1;
    }
    iVar3 = FUN_005579f0(local_58,param_1,local_8,"index",local_24);
    if (iVar3 != 0) {
      FUN_00557ad0(local_58,param_4);
    }
    piVar4 = (int *)FUN_0055d7d0(param_1,0,param_4 + 8);
    local_c = piVar4;
    if (piVar4 == (int *)0x0) goto LAB_00551fd6;
  }
  iVar3 = *piVar4;
  local_38 = local_8 * 0x10;
  local_20 = (undefined4 *)(*(int *)(iVar9 + 0x10) + local_38);
  iVar5 = FUN_005259c0(iVar3,"sqlite_",7);
  if ((iVar5 == 0) &&
     (((*(int *)(iVar3 + 7) != 0x65746c61 || (*(int *)(iVar3 + 0xb) != 0x62617472)) ||
      (*(char *)(iVar3 + 0xf) != '_')))) {
    FUN_00553950(param_1,"table %s may not be indexed",iVar3);
    goto LAB_00551fd6;
  }
  if (local_c[3] != 0) {
    FUN_00553950(param_1,"views may not be indexed");
    goto LAB_00551fd6;
  }
  if ((*(byte *)((int)local_c + 0x2a) & 0x10) != 0) {
    FUN_00553950(param_1,"virtual tables may not be indexed");
    goto LAB_00551fd6;
  }
  if (local_24 == (int *)0x0) {
    iVar12 = 1;
    for (iVar5 = local_c[2]; iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x14)) {
      iVar12 = iVar12 + 1;
    }
    local_14 = (void *)FUN_0055d980(iVar9,"sqlite_autoindex_%s_%d",iVar3,iVar12);
    puVar8 = local_20;
    if (local_14 == (void *)0x0) goto LAB_00551fd6;
  }
  else {
    local_14 = (void *)FUN_0055e3f0(iVar9,local_24);
    if ((local_14 == (void *)0x0) ||
       (iVar3 = FUN_0054f8c0(param_1,local_14), pvVar2 = local_14, iVar3 != 0)) goto LAB_00551fd6;
    if ((*(char *)(iVar9 + 0x81) == '\0') && (iVar3 = FUN_005572d0(iVar9,local_14,0), iVar3 != 0)) {
      FUN_00553950(param_1,"there is already a table named %s",pvVar2);
      goto LAB_00551fd6;
    }
    puVar8 = local_20;
    iVar3 = FUN_00557190(iVar9,local_14,*local_20);
    if (iVar3 != 0) {
      if (param_10 == 0) {
        FUN_00553950(param_1,"index %s already exists",local_14);
      }
      else {
        FUN_00550aa0(param_1,local_8);
      }
      goto LAB_00551fd6;
    }
  }
  uVar11 = *puVar8;
  pcVar6 = "sqlite_temp_master";
  if (local_8 != 1) {
    pcVar6 = "sqlite_master";
  }
  iVar3 = FUN_0054ab50(param_1,0x12,pcVar6,0,uVar11);
  piVar4 = local_c;
  if (iVar3 != 0) goto LAB_00551fd6;
  uVar7 = 1;
  if (local_8 == 1) {
    uVar7 = 3;
  }
  iVar3 = FUN_0054ab50(param_1,uVar7,local_14,*local_c,uVar11);
  if (iVar3 != 0) goto LAB_00551fd6;
  local_10 = param_5;
  if (param_5 == (int *)0x0) {
    local_44 = *(undefined4 *)(piVar4[1] + -0x18 + *(short *)((int)piVar4 + 0x26) * 0x18);
    local_40 = FUN_00568070(local_44);
    param_5 = (int *)FUN_005565a0(param_1,0,0);
    local_10 = param_5;
    if (param_5 == (int *)0x0) goto LAB_00551fd6;
    FUN_00556980(param_1,param_5,&local_44,0);
    *(undefined1 *)(param_5[2] + 0xc) = param_9;
  }
  iVar3 = 0;
  if (0 < *param_5) {
    iVar5 = 0;
    do {
      if ((*(int *)(iVar5 + param_5[2]) != 0) &&
         (puVar8 = (undefined4 *)FUN_00555b70(param_1,*(int *)(iVar5 + param_5[2])),
         puVar8 != (undefined4 *)0x0)) {
        iVar9 = FUN_00568070(*puVar8);
        local_28 = (int *)((int)local_28 + iVar9 + 1);
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 0x14;
      param_5 = local_10;
      iVar9 = local_1c;
    } while (iVar3 < *local_10);
  }
  local_30 = FUN_00568070(local_14);
  local_34 = (char *)*local_10;
  puVar8 = (undefined4 *)
           FUN_005522c0(iVar9,(int)local_28 +
                              (int)local_34 * 9 + ((int)local_34 * 4 + 0xbU & 0xfffffff8) + local_30
                              + 0x31);
  local_18 = puVar8;
  if (*(char *)(iVar9 + 0x38) == '\0') {
    iVar3 = ((int)local_34 * 4 + 8U & 0xfffffff8) + (int)(puVar8 + 0xc);
    puVar8[8] = iVar3;
    iVar3 = iVar3 + (int)local_34 * 4;
    puVar8[1] = iVar3;
    iVar3 = iVar3 + (int)local_34 * 4;
    puVar8[2] = puVar8 + 0xc;
    pcVar6 = local_34 + iVar3;
    puVar8[7] = iVar3;
    *puVar8 = pcVar6;
    local_2c = pcVar6 + local_30 + 1;
    memcpy(pcVar6,local_14,local_30 + 1);
    puVar10 = local_20;
    puVar8[3] = local_c;
    puVar8[9] = *local_10;
    *(char *)(puVar8 + 0xb) = (char)param_6;
    *(bool *)((int)puVar8 + 0x2d) = local_24 == (int *)0x0;
    puVar8[6] = *(undefined4 *)(local_38 + 0xc + *(int *)(iVar9 + 0x10));
    local_20 = (undefined4 *)0x0;
    local_40 = (*(byte *)(puVar10[3] + 0x4c) < 4) - 1;
    local_28 = (int *)local_10[2];
    if (0 < *local_10) {
      do {
        local_34 = (char *)local_28[1];
        iVar9 = (int)*(short *)((int)local_c + 0x26);
        puVar8 = (undefined4 *)local_c[1];
        iVar3 = 0;
        local_30 = iVar9;
        if (0 < iVar9) {
          do {
            iVar5 = FUN_0057a2c0(local_34,*puVar8);
            if (iVar5 == 0) break;
            iVar3 = iVar3 + 1;
            puVar8 = puVar8 + 6;
          } while (iVar3 < iVar9);
        }
        puVar8 = local_18;
        if (local_30 <= iVar3) {
          FUN_00553950(param_1,"table %s has no column named %s",*local_c,local_34);
          *(undefined1 *)((int)param_1 + 0x11) = 1;
          goto LAB_00551da0;
        }
        *(int *)(local_18[1] + (int)local_20 * 4) = iVar3;
        if ((*local_28 == 0) ||
           (puVar10 = (undefined4 *)FUN_00555b70(param_1,*local_28), puVar10 == (undefined4 *)0x0))
        {
          pcVar6 = *(char **)(local_c[1] + 0x10 + iVar3 * 0x18);
          local_34 = "BINARY";
          if (pcVar6 != (char *)0x0) {
            local_34 = pcVar6;
          }
        }
        else {
          uVar14 = FUN_00568070(*puVar10);
          _Size = (int)uVar14 + 1;
          memcpy(local_2c,(void *)((ulonglong)uVar14 >> 0x20),_Size);
          local_34 = local_2c;
          local_2c = local_2c + _Size;
        }
        iVar9 = local_1c;
        if ((*(char *)(local_1c + 0x81) == '\0') &&
           (iVar3 = FUN_0055d6b0(param_1,local_34), iVar3 == 0)) goto LAB_00551da0;
        *(char **)(puVar8[8] + (int)local_20 * 4) = local_34;
        pbVar1 = (byte *)(local_28 + 3);
        local_28 = local_28 + 5;
        *(byte *)((int)local_20 + puVar8[7]) = *pbVar1 & (byte)local_40;
        local_20 = (undefined4 *)((int)local_20 + 1);
      } while ((int)local_20 < *local_10);
    }
    FUN_005524e0(puVar8);
    if (local_c == (int *)param_1[0x7f]) {
      puVar10 = local_18;
      puVar8 = local_18;
      for (iVar3 = local_c[2]; local_18 = puVar8, iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x14)) {
        iVar9 = *(int *)(iVar3 + 0x24);
        puVar8 = puVar10;
        if (iVar9 == puVar10[9]) {
          iVar5 = 0;
          if (0 < iVar9) {
            iVar12 = puVar10[1];
            iVar13 = *(int *)(iVar3 + 4) - iVar12;
            do {
              piVar4 = (int *)(iVar12 + iVar5 * 4);
              if (*(int *)(iVar13 + (int)piVar4) != *piVar4) {
LAB_00551dc8:
                iVar9 = *(int *)(iVar3 + 0x24);
                puVar8 = local_18;
                break;
              }
              iVar9 = *(int *)(*(int *)(iVar3 + 0x20) + iVar5 * 4);
              iVar12 = *(int *)(puVar10[8] + iVar5 * 4);
              if ((iVar9 != iVar12) &&
                 (iVar9 = FUN_0057a2c0(iVar9,iVar12), puVar10 = local_18, iVar9 != 0))
              goto LAB_00551dc8;
              iVar9 = *(int *)(iVar3 + 0x24);
              iVar12 = puVar10[1];
              iVar5 = iVar5 + 1;
              puVar8 = local_18;
            } while (iVar5 < iVar9);
          }
          if (iVar5 == iVar9) {
            if (*(char *)(iVar3 + 0x2c) != *(char *)(puVar8 + 0xb)) {
              if ((*(char *)(iVar3 + 0x2c) != 'c') && (*(char *)(puVar8 + 0xb) != 'c')) {
                FUN_00553950(param_1,"conflicting ON CONFLICT clauses specified",0);
                puVar8 = local_18;
              }
              if (*(char *)(iVar3 + 0x2c) == 'c') {
                *(undefined1 *)(iVar3 + 0x2c) = *(undefined1 *)(puVar8 + 0xb);
              }
            }
            goto LAB_00551da0;
          }
        }
        iVar9 = local_1c;
        puVar10 = puVar8;
        puVar8 = local_18;
      }
    }
    if (*(char *)(iVar9 + 0x81) == '\0') {
      param_1[0x13] = param_1[0x13] + 1;
      iVar3 = param_1[0x13];
      local_30 = FUN_0055ab80(param_1);
      if (local_30 != 0) {
        FUN_0054bc80(param_1,1,local_8);
        FUN_0056be90(local_30,0x68,local_8,iVar3);
        if (param_7 == 0) {
          local_34 = (char *)0x0;
        }
        else {
          pcVar6 = "";
          if (param_6 != 0) {
            pcVar6 = " UNIQUE";
          }
          local_34 = (char *)FUN_0055d980(iVar9,"CREATE%s INDEX %.*s",pcVar6,
                                          (*param_8 - *local_24) + 1,*local_24);
        }
        pcVar6 = "sqlite_temp_master";
        if (local_8 != 1) {
          pcVar6 = "sqlite_master";
        }
        FUN_0055e450(param_1,"INSERT INTO %Q.%s VALUES(\'index\',%Q,%Q,#%d,%Q);",
                     *(undefined4 *)(local_38 + *(int *)(iVar9 + 0x10)),pcVar6,*puVar8,*local_c,
                     iVar3,local_34);
        FUN_005521a0(iVar9,local_34);
        if (param_4 != 0) {
          FUN_00563950(param_1,puVar8,iVar3);
          FUN_0054f7b0(param_1,local_8);
          uVar11 = FUN_0055d980(iVar9,"name=\'%q\' AND type=\'index\'",*puVar8);
          iVar3 = local_30;
          FUN_0056c120(local_30,local_8,uVar11);
          FUN_0056be30(iVar3,0x81,0);
        }
        goto LAB_00551f6e;
      }
    }
    else {
      uVar14 = FUN_00568070(*puVar8,puVar8);
      iVar3 = FUN_0055ada0(puVar8[6] + 0x18,(int)((ulonglong)uVar14 >> 0x20),(int)uVar14);
      if (iVar3 == 0) {
        *(uint *)(iVar9 + 0x18) = *(uint *)(iVar9 + 0x18) | 2;
        if (param_4 != 0) {
          puVar8[10] = *(undefined4 *)(iVar9 + 0x7c);
        }
LAB_00551f6e:
        if ((*(char *)(iVar9 + 0x81) != '\0') || (param_4 == 0)) {
          param_5 = local_10;
          local_3c = puVar8;
          if ((param_6 == 5) &&
             ((iVar3 = local_c[2], iVar3 != 0 && (*(char *)(iVar3 + 0x2c) != '\x05')))) {
            iVar5 = *(int *)(iVar3 + 0x14);
            while ((iVar5 != 0 &&
                   (iVar12 = *(int *)(iVar3 + 0x14), *(char *)(iVar12 + 0x2c) != '\x05'))) {
              iVar5 = *(int *)(iVar12 + 0x14);
              iVar3 = iVar12;
            }
            puVar8[5] = *(undefined4 *)(iVar3 + 0x14);
            *(undefined4 **)(iVar3 + 0x14) = puVar8;
          }
          else {
            puVar8[5] = local_c[2];
            local_c[2] = (int)puVar8;
          }
          goto LAB_00551fd6;
        }
      }
      else {
        *(undefined1 *)(iVar9 + 0x38) = 1;
      }
    }
  }
LAB_00551da0:
  puVar8 = local_18;
  iVar9 = local_1c;
  param_5 = local_10;
  if (local_18 != (undefined4 *)0x0) {
    FUN_005521a0(local_1c,local_18[4]);
    iVar9 = local_1c;
    FUN_005521a0(local_1c,puVar8);
    param_5 = local_10;
  }
LAB_00551fd6:
  FUN_00556700(iVar9,param_5);
  FUN_00567370(iVar9,param_4);
  FUN_005521a0(iVar9,local_14);
  return local_3c;
}


/* FUN_00552000 @ 00552000  kind=lib  attributed-by=lib-island  size=411 */

void FUN_00552000(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined1 local_20 [20];
  int local_c;
  undefined4 local_8;
  
  local_8 = 0;
  iVar1 = *param_1;
  if (param_1[0x73] < 1) {
    FUN_00567880(param_1,param_3,param_4,param_6,1,0,param_7);
    iVar2 = param_1[0x7f];
    if ((iVar2 == 0) || (param_1[0x11] != 0)) {
      if (param_5 != 0) {
        FUN_005303a0(iVar1,param_5);
        FUN_005521a0(iVar1,param_5);
      }
    }
    else {
      FUN_00568810(param_1,param_3,param_4,&local_8);
      uVar3 = FUN_00565260(iVar1,*(undefined4 *)(iVar2 + 0x40));
      iVar4 = FUN_005579f0(local_20,param_1,uVar3,&DAT_00718188,local_8);
      if ((iVar4 != 0) && (iVar4 = FUN_00557a40(local_20,param_5), iVar4 != 0)) {
        FUN_00566d10(iVar1,param_5);
        return;
      }
      uVar3 = FUN_00566d40(iVar1,param_5,1);
      *(undefined4 *)(iVar2 + 0xc) = uVar3;
      if (param_5 != 0) {
        FUN_005303a0(iVar1,param_5);
        FUN_005521a0(iVar1,param_5);
      }
      if (*(char *)(iVar1 + 0x38) == '\0') {
        if (*(char *)(iVar1 + 0x81) == '\0') {
          FUN_00576bd0(param_1,iVar2);
        }
        pcVar5 = (char *)param_1[0x84];
        if ((*pcVar5 != '\0') && (*pcVar5 != ';')) {
          pcVar5 = pcVar5 + param_1[0x85];
        }
        iVar1 = *param_2;
        local_c = (int)pcVar5 - iVar1;
        while ((0 < local_c && (((&DAT_007121d8)[*(byte *)(iVar1 + -1 + local_c)] & 1) != 0))) {
          local_c = local_c + -1;
        }
        local_c = iVar1 + -1 + local_c;
        local_8 = 1;
        FUN_00553490(param_1,0,&local_c,0);
        return;
      }
    }
  }
  else {
    FUN_00553950(param_1,"parameters are not allowed in views");
    if (param_5 != 0) {
      FUN_005303a0(iVar1,param_5);
      FUN_005521a0(iVar1,param_5);
      return;
    }
  }
  return;
}


/* FUN_005521a0 @ 005521a0  kind=lib  attributed-by=lib-island  size=139 */

void FUN_005521a0(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x1f0) != 0) {
      if (((param_2 != (undefined4 *)0x0) && (*(undefined4 **)(param_1 + 0x104) <= param_2)) &&
         (param_2 < *(undefined4 **)(param_1 + 0x108))) {
        **(int **)(param_1 + 0x1f0) =
             **(int **)(param_1 + 0x1f0) + (uint)*(ushort *)(param_1 + 0xe8);
        return;
      }
      iVar1 = (*DAT_00766608._4_4_)(param_2);
      **(int **)(param_1 + 0x1f0) = **(int **)(param_1 + 0x1f0) + iVar1;
      return;
    }
    if (((param_2 != (undefined4 *)0x0) && (*(undefined4 **)(param_1 + 0x104) <= param_2)) &&
       (param_2 < *(undefined4 **)(param_1 + 0x108))) {
      *param_2 = *(undefined4 *)(param_1 + 0x100);
      *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + -1;
      *(undefined4 **)(param_1 + 0x100) = param_2;
      return;
    }
  }
  FUN_00524410(param_2);
  return;
}


/* FUN_00552230 @ 00552230  kind=lib  attributed-by=lib-island  size=138 */

undefined4 * FUN_00552230(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x38) != '\0') {
      return (undefined4 *)0x0;
    }
    if (*(char *)(param_1 + 0xea) != '\0') {
      if ((int)(uint)*(ushort *)(param_1 + 0xe8) < param_2) {
        *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 1;
      }
      else {
        puVar2 = *(undefined4 **)(param_1 + 0x100);
        if (puVar2 != (undefined4 *)0x0) {
          uVar1 = *puVar2;
          *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + 1;
          *(undefined4 *)(param_1 + 0x100) = uVar1;
          *(int *)(param_1 + 0xf4) = *(int *)(param_1 + 0xf4) + 1;
          if (*(int *)(param_1 + 0xf0) < *(int *)(param_1 + 0xec)) {
            *(int *)(param_1 + 0xf0) = *(int *)(param_1 + 0xec);
          }
          return puVar2;
        }
        *(int *)(param_1 + 0xfc) = *(int *)(param_1 + 0xfc) + 1;
      }
    }
  }
  puVar2 = (undefined4 *)FUN_0055da00(param_2);
  if ((puVar2 == (undefined4 *)0x0) && (param_1 != 0)) {
    *(undefined1 *)(param_1 + 0x38) = 1;
  }
  return puVar2;
}


/* FUN_005522c0 @ 005522c0  kind=lib  attributed-by=lib-island  size=43 */

void * FUN_005522c0(undefined4 param_1,size_t param_2)

{
  void *_Dst;
  
  _Dst = (void *)FUN_00552230(param_1,param_2);
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,param_2);
  }
  return _Dst;
}


/* FUN_005522f0 @ 005522f0  kind=lib  attributed-by=lib-island  size=146 */

undefined4 FUN_005522f0(int param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  int iVar6;
  
  if (0 < *(int *)(param_1 + 0x14)) {
    iVar6 = 0;
    puVar4 = *(undefined4 **)(param_1 + 0x10);
    do {
      if (puVar4[1] != 0) {
        if (param_2 == (byte *)0x0) {
LAB_00552379:
          return (*(undefined4 **)(param_1 + 0x10))[iVar6 * 4 + 1];
        }
        pbVar5 = (byte *)*puVar4;
        bVar2 = *param_2;
        pbVar3 = param_2;
        while ((bVar2 != 0 && ((&DAT_007120d8)[bVar2] == (&DAT_007120d8)[*pbVar5]))) {
          pbVar1 = pbVar3 + 1;
          pbVar3 = pbVar3 + 1;
          pbVar5 = pbVar5 + 1;
          bVar2 = *pbVar1;
        }
        if ((&DAT_007120d8)[*pbVar3] == (&DAT_007120d8)[*pbVar5]) goto LAB_00552379;
      }
      iVar6 = iVar6 + 1;
      puVar4 = puVar4 + 4;
    } while (iVar6 < *(int *)(param_1 + 0x14));
  }
  return 0;
}


/* FUN_00552390 @ 00552390  kind=lib  attributed-by=lib-island  size=180 */

void * FUN_00552390(int param_1,void *param_2,int param_3)

{
  void *_Dst;
  int iVar1;
  void *pvVar2;
  
  pvVar2 = (void *)0x0;
  if (*(char *)(param_1 + 0x38) == '\0') {
    if (param_2 == (void *)0x0) {
      pvVar2 = (void *)FUN_00552230(param_1,param_3);
      return pvVar2;
    }
    if ((param_2 < *(void **)(param_1 + 0x104)) || (*(void **)(param_1 + 0x108) <= param_2)) {
      iVar1 = FUN_00579f80();
      if (iVar1 != 0) {
        *(undefined1 *)(param_1 + 0x38) = 1;
        return (void *)0x0;
      }
      pvVar2 = (void *)FUN_00563800(param_2,param_3);
      if (pvVar2 == (void *)0x0) {
        *(undefined1 *)(param_1 + 0x38) = 1;
      }
    }
    else {
      if (param_3 <= (int)(uint)*(ushort *)(param_1 + 0xe8)) {
        return param_2;
      }
      _Dst = (void *)FUN_00552230(param_1,param_3);
      pvVar2 = (void *)0x0;
      if (_Dst != (void *)0x0) {
        memcpy(_Dst,param_2,(uint)*(ushort *)(param_1 + 0xe8));
        FUN_005521a0(param_1,param_2);
        return _Dst;
      }
    }
  }
  return pvVar2;
}


/* FUN_00552450 @ 00552450  kind=lib  attributed-by=lib-island  size=77 */

void * FUN_00552450(undefined4 param_1,char *param_2)

{
  size_t _Size;
  char cVar1;
  char *pcVar2;
  void *_Dst;
  
  if (param_2 != (char *)0x0) {
    cVar1 = *param_2;
    pcVar2 = param_2;
    while (cVar1 != '\0') {
      pcVar2 = pcVar2 + 1;
      cVar1 = *pcVar2;
    }
    _Size = ((int)pcVar2 - (int)param_2 & 0x3fffffffU) + 1;
    _Dst = (void *)FUN_00552230(param_1,_Size);
    if (_Dst != (void *)0x0) {
      memcpy(_Dst,param_2,_Size);
    }
    return _Dst;
  }
  return (void *)0x0;
}


/* FUN_005524a0 @ 005524a0  kind=lib  attributed-by=lib-island  size=62 */

void * FUN_005524a0(undefined4 param_1,void *param_2,size_t param_3)

{
  void *_Dst;
  
  if (param_2 == (void *)0x0) {
    return (void *)0x0;
  }
  _Dst = (void *)FUN_00552230(param_1,param_3 + 1);
  if (_Dst != (void *)0x0) {
    memcpy(_Dst,param_2,param_3);
    *(undefined1 *)((int)_Dst + param_3) = 0;
  }
  return _Dst;
}


/* FUN_005524e0 @ 005524e0  kind=lib  attributed-by=lib-island  size=80 */

void FUN_005524e0(int param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  
  puVar1 = *(uint **)(param_1 + 8);
  uVar3 = *(uint *)(*(int *)(param_1 + 0xc) + 0x1c);
  if (uVar3 < 10) {
    uVar3 = 10;
  }
  *puVar1 = uVar3;
  iVar2 = 1;
  uVar3 = 10;
  if (0 < *(int *)(param_1 + 0x24)) {
    do {
      puVar1[iVar2] = uVar3;
      if (5 < uVar3) {
        uVar3 = uVar3 - 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 <= *(int *)(param_1 + 0x24));
  }
  if (*(char *)(param_1 + 0x2c) != '\0') {
    puVar1[*(int *)(param_1 + 0x24)] = 1;
  }
  return;
}


/* FUN_00552540 @ 00552540  kind=lib  attributed-by=lib-island  size=31 */

void FUN_00552540(int param_1,undefined1 param_2)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x1fc) != 0) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0x1fc) + 0x10), iVar1 != 0)) {
    *(undefined1 *)(iVar1 + 0x18) = param_2;
  }
  return;
}


/* FUN_00552560 @ 00552560  kind=lib  attributed-by=lib-island  size=1084 */

void FUN_00552560(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined8 local_54;
  undefined8 local_4c;
  undefined8 local_44;
  undefined8 local_3c;
  undefined8 local_34;
  int local_2c;
  int *local_28;
  int local_24;
  int local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int *local_c;
  int local_8;
  
  iVar5 = *param_1;
  local_20 = -1;
  local_34 = 0;
  local_8 = iVar5;
  if (((param_1[0x11] == 0) && (*(char *)(iVar5 + 0x38) == '\0')) &&
     (piVar1 = (int *)FUN_005677f0(param_1,param_2), local_28 = piVar1, piVar1 != (int *)0x0)) {
    local_24 = FUN_005687a0(param_1,piVar1,0x6a,0,0);
    local_1c = (uint)(piVar1[3] != 0);
    iVar2 = FUN_00576bd0(param_1,piVar1);
    if ((iVar2 == 0) && (iVar2 = FUN_0055cf00(param_1,piVar1,local_24 != 0), iVar2 == 0)) {
      local_18 = FUN_00565260(iVar5,piVar1[0x10]);
      local_2c = FUN_0054ab50(param_1,9,*piVar1,0,
                              *(undefined4 *)(*(int *)(iVar5 + 0x10) + local_18 * 0x10));
      if (local_2c != 1) {
        local_14 = param_1[0x12];
        *(int *)(param_2 + 0x34) = local_14;
        param_1[0x12] = param_1[0x12] + 1;
        iVar2 = param_1[0x12];
        for (iVar5 = piVar1[2]; iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x14)) {
          iVar2 = iVar2 + 1;
          param_1[0x12] = iVar2;
        }
        if (local_1c == 0) {
          local_c = local_34._4_4_;
          local_10 = (int)local_34;
        }
        else {
          local_10 = param_1[0x81];
          local_c = param_1;
          param_1[0x81] = *piVar1;
        }
        iVar3 = FUN_0055ab80(param_1);
        piVar7 = local_c;
        iVar2 = local_10;
        iVar5 = local_8;
        if (iVar3 != 0) {
          if (*(char *)((int)param_1 + 0x12) == '\0') {
            *(uint *)(iVar3 + 0x60) = *(uint *)(iVar3 + 0x60) | 0x10;
          }
          FUN_0054bc80(param_1,1,local_18);
          if (local_1c != 0) {
            FUN_0055dc60(param_1,piVar1,param_3,local_14);
          }
          local_4c = 0;
          local_44 = 0;
          local_3c = 0;
          local_54 = CONCAT44(param_2,param_1);
          iVar4 = FUN_005640a0(&local_54,param_3);
          piVar7 = local_c;
          iVar2 = local_10;
          iVar5 = local_8;
          if (iVar4 == 0) {
            if ((*(byte *)(local_8 + 0x18) & 0x10) != 0) {
              param_1[0x13] = param_1[0x13] + 1;
              local_20 = param_1[0x13];
              FUN_0056be90(iVar3,7,0,local_20);
            }
            if ((((local_2c == 0) && (param_3 == 0)) &&
                ((local_24 == 0 && ((*(byte *)((int)piVar1 + 0x2a) & 0x10) == 0)))) &&
               (((*(uint *)(*param_1 + 0x18) & 0x40000) == 0 ||
                ((iVar5 = FUN_00558520(piVar1), iVar5 == 0 && (piVar1[4] == 0)))))) {
              FUN_0056bf50(iVar3,0x67,piVar1[8],local_18,local_20,*piVar1,0xfffffffe);
              iVar2 = local_18;
              for (iVar5 = piVar1[2]; iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x14)) {
                FUN_0056be90(iVar3,0x67,*(undefined4 *)(iVar5 + 0x28),iVar2);
              }
            }
            else {
              local_18 = param_1[0x13] + 1;
              param_1[0x13] = param_1[0x13] + 2;
              FUN_0056be90(iVar3,10,0,local_18);
              local_2c = FUN_005788a0(param_1,param_2,param_3,0,0,8,0);
              piVar7 = local_c;
              iVar2 = local_10;
              iVar5 = local_8;
              if (local_2c == 0) goto LAB_00552976;
              uVar6 = FUN_00554760(param_1,piVar1,0xffffffff,local_14,local_18 + 1,0);
              FUN_0056be90(iVar3,0x70,local_18,uVar6);
              if ((*(byte *)(local_8 + 0x18) & 0x10) != 0) {
                FUN_0056be90(iVar3,0x14,local_20,1);
              }
              FUN_005794a0(local_2c);
              local_2c = FUN_005741e0(iVar3);
              if (local_1c == 0) {
                FUN_0055e6e0(param_1,piVar1,local_14,0x28);
              }
              uVar6 = FUN_0056bef0(iVar3,0x71,local_18,local_2c,local_18 + 1);
              local_34 = CONCAT44(uVar6,(int)local_34);
              if ((*(byte *)((int)piVar1 + 0x2a) & 0x10) == 0) {
                FUN_00559bc0(param_1,piVar1,local_14,local_18 + 1,
                             *(char *)((int)param_1 + 0x12) == '\0',local_24,99);
              }
              else {
                uVar6 = FUN_0055a900(local_8,piVar1);
                FUN_00577380(param_1,local_28);
                FUN_0056bf50(iVar3,0x8c,0,1,local_18 + 1,uVar6,0xfffffff6);
                FUN_0056c490(iVar3,2);
                piVar1 = param_1;
                if ((int *)param_1[0x6c] != (int *)0x0) {
                  piVar1 = (int *)param_1[0x6c];
                }
                *(undefined1 *)(piVar1 + 6) = 1;
                piVar1 = local_28;
              }
              FUN_0056be90(iVar3,1,0,local_34._4_4_);
              FUN_00575e10(iVar3,local_2c);
              if ((local_1c == 0) && ((*(byte *)((int)piVar1 + 0x2a) & 0x10) == 0)) {
                iVar2 = local_14;
                for (iVar5 = piVar1[2]; iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x14)) {
                  iVar2 = iVar2 + 1;
                  FUN_0056be90(iVar3,0x2d,iVar2,*(undefined4 *)(iVar5 + 0x28));
                }
                FUN_0056be30(iVar3,0x2d,local_14);
              }
            }
            if ((*(char *)((int)param_1 + 0x12) == '\0') && (param_1[0x6d] == 0)) {
              FUN_0054b260(param_1);
            }
            piVar7 = local_c;
            iVar2 = local_10;
            iVar5 = local_8;
            if ((((*(byte *)(local_8 + 0x18) & 0x10) != 0) &&
                (*(char *)((int)param_1 + 0x12) == '\0')) && (param_1[0x6d] == 0)) {
              FUN_0056be90(iVar3,0x10,local_20,1);
              FUN_005762b0(iVar3,1);
              FUN_00576270(iVar3,0,0,"rows deleted",0);
              piVar7 = local_c;
              iVar2 = local_10;
              iVar5 = local_8;
            }
          }
        }
        goto LAB_00552976;
      }
    }
  }
  piVar7 = local_34._4_4_;
  iVar2 = (int)local_34;
LAB_00552976:
  if (piVar7 != (int *)0x0) {
    piVar7[0x81] = iVar2;
  }
  FUN_00567370(iVar5,param_2);
  FUN_00555e30(iVar5,param_3);
  return;
}


/* FUN_005529a0 @ 005529a0  kind=lib  attributed-by=lib-island  size=375 */

void FUN_005529a0(int param_1,undefined4 *param_2)

{
  short *psVar1;
  byte bVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  uint *puVar6;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  if (param_2 != (undefined4 *)0x0) {
    if ((param_1 == 0) || (*(int *)(param_1 + 0x1f0) == 0)) {
      psVar1 = (short *)(param_2 + 10);
      *psVar1 = *psVar1 + -1;
      if (*psVar1 != 0) {
        return;
      }
    }
    puVar5 = (undefined4 *)param_2[2];
    while (puVar5 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)puVar5[5];
      if ((param_1 == 0) || (*(int *)(param_1 + 0x1f0) == 0)) {
        pbVar4 = (byte *)*puVar5;
        uVar9 = 0;
        if (pbVar4 != (byte *)0x0) {
          bVar2 = *pbVar4;
          pbVar8 = pbVar4;
          while (bVar2 != 0) {
            pbVar8 = pbVar8 + 1;
            bVar2 = *pbVar8;
          }
          uVar9 = (int)pbVar8 - (int)pbVar4 & 0x3fffffff;
        }
        puVar6 = (uint *)(puVar5[6] + 0x18);
        if (*puVar6 == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = 0;
          pbVar8 = pbVar4;
          uVar11 = uVar9;
          if (uVar9 != 0) {
            do {
              uVar11 = uVar11 - 1;
              uVar10 = uVar10 ^ (uint)(byte)(&DAT_007120d8)[*pbVar8] ^ uVar10 * 8;
              pbVar8 = pbVar8 + 1;
            } while (0 < (int)uVar11);
          }
          uVar10 = uVar10 % *puVar6;
        }
        iVar7 = FUN_00537190(puVar6,pbVar4,uVar9,uVar10);
        if (iVar7 != 0) {
          FUN_00545b50(puVar6,iVar7,uVar10);
        }
      }
      FUN_005521a0(param_1,puVar5[4]);
      FUN_005521a0(param_1,puVar5);
      puVar5 = puVar3;
    }
    FUN_005581b0(param_1,param_2);
    FUN_0057a480(param_1,param_2);
    FUN_005521a0(param_1,*param_2);
    FUN_005521a0(param_1,param_2[5]);
    iVar7 = param_2[3];
    if (iVar7 != 0) {
      FUN_005303a0(param_1,iVar7);
      FUN_005521a0(param_1,iVar7);
    }
    FUN_00556700(param_1,param_2[6]);
    FUN_00577190(param_1,param_2);
    FUN_005521a0(param_1,param_2);
  }
  return;
}


/* FUN_00552b20 @ 00552b20  kind=lib  attributed-by=lib-island  size=184 */

void FUN_00552b20(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  while (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0x20);
    FUN_00555e30(param_1,*(undefined4 *)(param_2 + 0x14));
    FUN_00556700(param_1,*(undefined4 *)(param_2 + 0x18));
    puVar2 = *(undefined4 **)(param_2 + 8);
    if (puVar2 != (undefined4 *)0x0) {
      FUN_00556700(param_1,*puVar2);
      FUN_00567370(param_1,puVar2[10]);
      FUN_00555e30(param_1,puVar2[0xb]);
      FUN_00556700(param_1,puVar2[0xc]);
      FUN_00555e30(param_1,puVar2[0xd]);
      FUN_00556700(param_1,puVar2[0xe]);
      FUN_00566d10(param_1,puVar2[0xf]);
      FUN_00555e30(param_1,puVar2[0x12]);
      FUN_00555e30(param_1,puVar2[0x13]);
      FUN_005521a0(param_1,puVar2);
    }
    FUN_0055afc0(param_1,*(undefined4 *)(param_2 + 0x1c));
    FUN_005521a0(param_1,param_2);
    param_2 = iVar1;
  }
  return;
}


/* FUN_00552be0 @ 00552be0  kind=lib  attributed-by=lib-island  size=107 */

int FUN_00552be0(char *param_1)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  char cVar4;
  
  if (param_1 == (char *)0x0) {
    return -1;
  }
  cVar4 = *param_1;
  switch(cVar4) {
  case '\"':
  case '\'':
  case '`':
    break;
  default:
    return -1;
  case '[':
    cVar4 = ']';
  }
  pcVar1 = param_1 + 1;
  iVar2 = 0;
  if (*pcVar1 != '\0') {
    pcVar3 = param_1 + 2;
    do {
      if (*pcVar1 == cVar4) {
        if (*pcVar3 != cVar4) break;
        param_1[iVar2] = cVar4;
        pcVar3 = pcVar3 + 1;
        pcVar1 = pcVar1 + 1;
      }
      else {
        param_1[iVar2] = *pcVar1;
      }
      iVar2 = iVar2 + 1;
      pcVar1 = pcVar1 + 1;
      pcVar3 = pcVar3 + 1;
    } while (*pcVar1 != '\0');
  }
  param_1[iVar2] = '\0';
  return iVar2;
}


/* FUN_00552ca0 @ 00552ca0  kind=lib  attributed-by=lib-string  size=493 */

void FUN_00552ca0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  
  iVar1 = *param_1;
  if (*(char *)(iVar1 + 0x38) == '\0') {
    if (*(char *)(iVar1 + 0x81) == '\0') {
      iVar4 = FUN_0055b460(iVar1,param_1 + 1);
      if (iVar4 != 0) {
        param_1[0x11] = param_1[0x11] + 1;
        param_1[3] = iVar4;
        FUN_00567370(iVar1,param_2);
        return;
      }
    }
    uVar2 = *(undefined4 *)(param_2 + 0xc);
    puVar5 = (undefined4 *)FUN_00557190(iVar1,*(undefined4 *)(param_2 + 0x10),uVar2);
    if (puVar5 == (undefined4 *)0x0) {
      if (param_3 == 0) {
        FUN_00553950(param_1,"no such index: %S",param_2,0);
        *(undefined1 *)((int)param_1 + 0x11) = 1;
        FUN_00567370(iVar1,param_2);
        return;
      }
      FUN_00550a00(param_1,uVar2);
      *(undefined1 *)((int)param_1 + 0x11) = 1;
      FUN_00567370(iVar1,param_2);
      return;
    }
    if (*(char *)((int)puVar5 + 0x2d) != '\0') {
      FUN_00553950(param_1,
                   "index associated with UNIQUE or PRIMARY KEY constraint cannot be dropped",0);
      FUN_00567370(iVar1,param_2);
      return;
    }
    iVar4 = FUN_00565260(iVar1,puVar5[6]);
    puVar3 = (undefined4 *)puVar5[3];
    uVar2 = *(undefined4 *)(iVar4 * 0x10 + *(int *)(iVar1 + 0x10));
    pcVar8 = "sqlite_temp_master";
    if (iVar4 != 1) {
      pcVar8 = "sqlite_master";
    }
    iVar6 = FUN_0054ab50(param_1,9,pcVar8,0,uVar2);
    if (iVar6 == 0) {
      uVar7 = 10;
      if (iVar4 != 0) {
        uVar7 = 0xc;
      }
      iVar6 = FUN_0054ab50(param_1,uVar7,*puVar5,*puVar3,uVar2);
      if (iVar6 == 0) {
        iVar6 = FUN_0055ab80(param_1);
        if (iVar6 != 0) {
          FUN_0054bc80(param_1,1,iVar4);
          pcVar8 = "sqlite_temp_master";
          if (iVar4 != 1) {
            pcVar8 = "sqlite_master";
          }
          FUN_0055e450(param_1,"DELETE FROM %Q.%s WHERE name=%Q AND type=\'index\'",
                       *(undefined4 *)(iVar4 * 0x10 + *(int *)(iVar1 + 0x10)),pcVar8,*puVar5);
          FUN_0054fa40(param_1,iVar4,&DAT_00717d54,*puVar5);
          FUN_0054f7b0(param_1,iVar4);
          FUN_00534100(param_1,puVar5[10],iVar4);
          FUN_0056bf50(iVar6,0x6d,iVar4,0,0,*puVar5,0);
        }
      }
    }
  }
  FUN_00567370(iVar1,param_2);
  return;
}


/* FUN_00552e90 @ 00552e90  kind=lib  attributed-by=lib-string  size=578 */

void FUN_00552e90(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined8 uVar8;
  
  iVar1 = *param_1;
  if (*(char *)(iVar1 + 0x38) != '\0') goto LAB_005530c0;
  if (param_4 != 0) {
    *(char *)(iVar1 + 0x3b) = *(char *)(iVar1 + 0x3b) + '\x01';
  }
  puVar3 = (undefined4 *)FUN_0055d7d0(param_1,param_3,param_2 + 8);
  if (param_4 != 0) {
    *(char *)(iVar1 + 0x3b) = *(char *)(iVar1 + 0x3b) + -1;
  }
  if (puVar3 == (undefined4 *)0x0) {
    if (param_4 != 0) {
      FUN_00550a00(param_1,*(undefined4 *)(param_2 + 0xc));
      FUN_00567370(iVar1,param_2);
      return;
    }
    goto LAB_005530c0;
  }
  iVar4 = FUN_00565260(iVar1,puVar3[0x10]);
  if (((*(byte *)((int)puVar3 + 0x2a) & 0x10) != 0) &&
     (iVar5 = FUN_00576bd0(param_1,puVar3), iVar5 != 0)) goto LAB_005530c0;
  pcVar7 = "sqlite_temp_master";
  if (iVar4 != 1) {
    pcVar7 = "sqlite_master";
  }
  uVar2 = *(undefined4 *)(*(int *)(iVar1 + 0x10) + iVar4 * 0x10);
  iVar5 = FUN_0054ab50(param_1,9,pcVar7,0,uVar2);
  if (iVar5 != 0) goto LAB_005530c0;
  if (param_3 == 0) {
    if ((*(byte *)((int)puVar3 + 0x2a) & 0x10) == 0) {
      iVar5 = (uint)(iVar4 == 1) * 2 + 0xb;
      goto LAB_00552f9e;
    }
    uVar8 = FUN_0055a900(iVar1,puVar3);
    iVar5 = (int)((ulonglong)uVar8 >> 0x20);
    uVar6 = *(undefined4 *)(*(int *)((int)uVar8 + 4) + 4);
  }
  else {
    iVar5 = (uint)(iVar4 != 1) * 2 + 0xf;
LAB_00552f9e:
    uVar6 = 0;
  }
  iVar5 = FUN_0054ab50(param_1,iVar5,*puVar3,uVar6,uVar2);
  if ((iVar5 == 0) && (iVar5 = FUN_0054ab50(param_1,9,*puVar3,0,uVar2), iVar5 == 0)) {
    uVar2 = *puVar3;
    iVar5 = FUN_005259c0(uVar2,"sqlite_",7);
    if ((iVar5 == 0) && (iVar5 = FUN_005259c0(*puVar3,"sqlite_stat",0xb), iVar5 != 0)) {
      FUN_00553950(param_1,"table %s may not be dropped",uVar2);
      FUN_00567370(iVar1,param_2);
      return;
    }
    if (param_3 == 0) {
      if (puVar3[3] != 0) {
        FUN_00553950(param_1,"use DROP VIEW to delete view %s",uVar2);
        FUN_00567370(iVar1,param_2);
        return;
      }
    }
    else if (puVar3[3] == 0) {
      FUN_00553950(param_1,"use DROP TABLE to delete table %s",uVar2);
      FUN_00567370(iVar1,param_2);
      return;
    }
    iVar5 = FUN_0055ab80(param_1);
    if (iVar5 != 0) {
      FUN_0054bc80(param_1,1,iVar4);
      FUN_0054fa40(param_1,iVar4,&DAT_00717d58,*puVar3);
      FUN_005582f0(param_1,param_2,puVar3);
      FUN_005500b0(param_1,puVar3,iVar4,param_3);
    }
  }
LAB_005530c0:
  FUN_00567370(iVar1,param_2);
  return;
}


/* FUN_005530e0 @ 005530e0  kind=lib  attributed-by=lib-island  size=376 */

void FUN_005530e0(int *param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  char *pcVar10;
  uint uVar11;
  int local_c;
  
  local_c = 0;
  iVar2 = *param_1;
  if (*(char *)(iVar2 + 0x38) == '\0') {
    if ((*(char *)(iVar2 + 0x81) == '\0') && (iVar5 = FUN_0055b460(iVar2,param_1 + 1), iVar5 != 0))
    {
      param_1[0x11] = param_1[0x11] + 1;
      param_1[3] = iVar5;
      FUN_00567370(iVar2,param_2);
      return;
    }
    iVar5 = *(int *)(param_2 + 0xc);
    pcVar3 = *(char **)(param_2 + 0x10);
    uVar11 = 0;
    if (pcVar3 != (char *)0x0) {
      cVar1 = *pcVar3;
      pcVar10 = pcVar3;
      while (cVar1 != '\0') {
        pcVar10 = pcVar10 + 1;
        cVar1 = *pcVar10;
      }
      uVar11 = (int)pcVar10 - (int)pcVar3 & 0x3fffffff;
    }
    iVar4 = *(int *)(iVar2 + 0x14);
    uVar7 = 0;
    if (0 < iVar4) {
      do {
        uVar8 = uVar7;
        if ((int)uVar7 < 2) {
          uVar8 = uVar7 ^ 1;
        }
        if ((iVar5 == 0) ||
           (iVar6 = FUN_0057a2c0(*(undefined4 *)(*(int *)(iVar2 + 0x10) + uVar8 * 0x10),iVar5),
           iVar6 == 0)) {
          iVar6 = *(int *)(*(int *)(iVar2 + 0x10) + 0xc + uVar8 * 0x10);
          puVar9 = (uint *)(iVar6 + 0x28);
          if (*(int *)(iVar6 + 0x34) == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = FUN_0057a870(pcVar3,uVar11);
            uVar8 = uVar8 % *puVar9;
          }
          iVar6 = FUN_00537190(puVar9,*(undefined4 *)(param_2 + 0x10),uVar11,uVar8);
          if (iVar6 == 0) {
            local_c = 0;
          }
          else {
            local_c = *(int *)(iVar6 + 8);
            if (local_c != 0) goto LAB_00553205;
          }
        }
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < iVar4);
      if (local_c != 0) {
LAB_00553205:
        FUN_00553260(param_1,local_c);
        goto LAB_00553247;
      }
    }
    if (param_3 == 0) {
      FUN_00553950(param_1,"no such trigger: %S",param_2,0);
    }
    else {
      FUN_00550a00(param_1,iVar5);
    }
    *(undefined1 *)((int)param_1 + 0x11) = 1;
  }
LAB_00553247:
  FUN_00567370(iVar2,param_2);
  return;
}


/* FUN_00553260 @ 00553260  kind=lib  attributed-by=lib-string  size=548 */

void FUN_00553260(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  char *pcVar10;
  int *piVar11;
  int iVar12;
  undefined8 uVar13;
  
  iVar5 = *param_1;
  iVar12 = -1000000;
  if (param_2[5] != 0) {
    iVar12 = 0;
    if (0 < *(int *)(iVar5 + 0x14)) {
      piVar3 = (int *)(*(int *)(iVar5 + 0x10) + 0xc);
      do {
        if (*piVar3 == param_2[5]) break;
        iVar12 = iVar12 + 1;
        piVar3 = piVar3 + 4;
      } while (iVar12 < *(int *)(iVar5 + 0x14));
    }
  }
  puVar4 = (undefined4 *)FUN_0057b020(param_2);
  uVar7 = *(undefined4 *)(*(int *)(iVar5 + 0x10) + iVar12 * 0x10);
  if (iVar12 == 1) {
    pcVar10 = "sqlite_temp_master";
    uVar8 = 0xe;
  }
  else {
    pcVar10 = "sqlite_master";
    uVar8 = 0x10;
  }
  iVar5 = FUN_0054ab50(param_1,uVar8,*param_2,*puVar4,uVar7);
  if ((iVar5 == 0) && (iVar5 = FUN_0054ab50(param_1,9,pcVar10,0,uVar7), iVar5 == 0)) {
    piVar3 = (int *)param_1[2];
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)FUN_0056c7b0(*param_1);
      param_1[2] = (int)piVar3;
      if (piVar3 == (int *)0x0) {
        return;
      }
      FUN_0056bdc0(piVar3,0x94);
    }
    piVar11 = param_1;
    if ((int *)param_1[0x6c] != (int *)0x0) {
      piVar11 = (int *)param_1[0x6c];
    }
    FUN_00550aa0(param_1,iVar12);
    piVar11[0x55] = piVar11[0x55] | 1 << ((byte)iVar12 & 0x1f);
    FUN_0055e4f0(param_1,iVar12);
    iVar6 = FUN_0056c070(piVar3,9,&DAT_007131c0);
    iVar5 = *piVar3;
    iVar2 = *param_2;
    iVar9 = iVar6 + 1;
    if ((piVar3[1] == 0) || (*(char *)(iVar5 + 0x38) != '\0')) {
      FUN_00539320(iVar5,0,iVar2);
    }
    else {
      if (iVar9 < 0) {
        iVar9 = piVar3[7] + -1;
      }
      iVar1 = piVar3[1] + iVar9 * 0x14;
      FUN_00539320(iVar5,(int)*(char *)(iVar1 + 1),*(undefined4 *)(piVar3[1] + 0x10 + iVar9 * 0x14))
      ;
      *(undefined4 *)(iVar1 + 0x10) = 0;
      if (iVar2 == 0) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined1 *)(iVar1 + 1) = 0;
      }
      else {
        uVar13 = FUN_00568070(iVar2);
        uVar7 = FUN_005524a0(*piVar3,(int)((ulonglong)uVar13 >> 0x20),(int)uVar13);
        *(undefined4 *)(iVar1 + 0x10) = uVar7;
        *(undefined1 *)(iVar1 + 1) = 0xff;
      }
    }
    iVar5 = piVar3[1];
    iVar2 = *piVar3;
    iVar6 = iVar6 + 4;
    if ((iVar5 == 0) || (*(char *)(iVar2 + 0x38) != '\0')) {
      FUN_00539320(iVar2,0xfffffffe,"trigger");
    }
    else {
      if (iVar6 < 0) {
        iVar6 = piVar3[7] + -1;
      }
      iVar9 = iVar5 + iVar6 * 0x14;
      FUN_00539320(iVar2,(int)*(char *)(iVar9 + 1),*(undefined4 *)(iVar5 + 0x10 + iVar6 * 0x14));
      *(char **)(iVar9 + 0x10) = "trigger";
      *(undefined1 *)(iVar9 + 1) = 0xfe;
    }
    FUN_0054f7b0(param_1,iVar12);
    FUN_0056be90(piVar3,0x2d,0,0);
    FUN_0056bf50(piVar3,0x6e,iVar12,0,0,*param_2,0);
    if (param_1[0x13] < 3) {
      param_1[0x13] = 3;
    }
  }
  return;
}


/* FUN_00553490 @ 00553490  kind=lib  attributed-by=lib-string  size=972 */

void FUN_00553490(int *param_1,int *param_2,int *param_3,int param_4)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  char *pcVar12;
  char *local_88;
  int local_7c;
  undefined2 local_78 [8];
  undefined4 local_68;
  undefined4 *local_60;
  undefined4 local_44;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar10 = *param_1;
  if ((((param_3 != (int *)0x0) || (param_4 != 0)) && (*(char *)(iVar10 + 0x38) == '\0')) &&
     (puVar2 = (undefined4 *)param_1[0x7f], puVar2 != (undefined4 *)0x0)) {
    iVar4 = FUN_00565260(iVar10,puVar2[0x10]);
    piVar3 = (int *)puVar2[6];
    if (piVar3 != (int *)0x0) {
      local_28 = 0;
      local_20 = 0;
      local_18 = 0;
      local_10 = 0;
      memset(local_78,0,0x50);
      local_78[0] = 1;
      local_68 = *puVar2;
      local_44 = 0xffffffff;
      local_28 = CONCAT44(local_78,param_1);
      local_10._0_5_ = CONCAT14(4,(undefined4)local_10);
      local_7c = 0;
      local_60 = puVar2;
      if (0 < *piVar3) {
        local_88 = (char *)0x0;
        do {
          iVar5 = FUN_005640a0(&local_28,*(undefined4 *)((int)local_88 + piVar3[2]));
          if (iVar5 != 0) goto LAB_0055384c;
          local_7c = local_7c + 1;
          local_88 = (char *)((int)local_88 + 0x14);
        } while (local_7c < *piVar3);
      }
    }
    if ((*(char *)(iVar10 + 0x81) == '\0') ||
       (puVar2[8] = *(undefined4 *)(iVar10 + 0x7c), *(char *)(iVar10 + 0x81) == '\0')) {
      iVar5 = param_1[2];
      if (iVar5 == 0) {
        iVar5 = FUN_0056c7b0(*param_1);
        param_1[2] = iVar5;
        if (iVar5 == 0) goto LAB_0055384c;
        FUN_0056bdc0(iVar5,0x94);
      }
      FUN_0056be30(iVar5,0x2d,0);
      if (puVar2[3] == 0) {
        local_88 = "table";
        pcVar12 = "TABLE";
      }
      else {
        local_88 = "view";
        pcVar12 = "VIEW";
      }
      if (param_4 == 0) {
        uVar7 = FUN_0055d980(iVar10,"CREATE %s %.*s",pcVar12,(*param_3 - param_1[0x82]) + 1,
                             param_1[0x82]);
      }
      else {
        FUN_0056bef0(iVar5,0x28,1,param_1[0x65],iVar4);
        if (*(int *)(iVar5 + 4) != 0) {
          *(undefined1 *)(*(int *)(iVar5 + 4) + -0x11 + *(int *)(iVar5 + 0x1c) * 0x14) = 2;
        }
        param_1[0x12] = 2;
        local_18 = CONCAT62(local_18._2_6_,8);
        local_18 = CONCAT44(1,(undefined4)local_18);
        local_10 = 0;
        FUN_005654f0(param_1,param_4,&local_18);
        FUN_0056be30(iVar5,0x2d,1);
        if (param_1[0x11] == 0) {
          iVar6 = FUN_00564270(param_1,param_4);
          if (iVar6 == 0) goto LAB_0055384c;
          *(undefined2 *)((int)puVar2 + 0x26) = *(undefined2 *)(iVar6 + 0x26);
          puVar2[1] = *(undefined4 *)(iVar6 + 4);
          *(undefined2 *)(iVar6 + 0x26) = 0;
          *(undefined4 *)(iVar6 + 4) = 0;
          FUN_005529a0(iVar10,iVar6);
        }
        uVar7 = FUN_00533c50(iVar10,puVar2);
      }
      pcVar12 = "sqlite_temp_master";
      if (iVar4 != 1) {
        pcVar12 = "sqlite_master";
      }
      FUN_0055e450(param_1,
                   "UPDATE %Q.%s SET type=\'%s\', name=%Q, tbl_name=%Q, rootpage=#%d, sql=%Q WHERE rowid=#%d"
                   ,*(undefined4 *)(iVar4 * 0x10 + *(int *)(iVar10 + 0x10)),pcVar12,local_88,*puVar2
                   ,*puVar2,param_1[0x65],uVar7,param_1[100]);
      FUN_005521a0(iVar10,uVar7);
      FUN_0054f7b0(param_1,iVar4);
      if (((*(byte *)((int)puVar2 + 0x2a) & 8) != 0) &&
         (puVar11 = (undefined4 *)(*(int *)(iVar10 + 0x10) + iVar4 * 0x10),
         *(int *)(puVar11[3] + 0x48) == 0)) {
        FUN_0055e450(param_1,"CREATE TABLE %Q.sqlite_sequence(name,seq)",*puVar11);
      }
      uVar7 = FUN_0055d980(iVar10,"tbl_name=\'%q\'",*puVar2);
      FUN_0056c120(iVar5,iVar4,uVar7);
      if (*(char *)(iVar10 + 0x81) == '\0') goto LAB_0055384c;
    }
    pcVar12 = (char *)*puVar2;
    uVar9 = 0;
    if (pcVar12 != (char *)0x0) {
      cVar1 = *pcVar12;
      pcVar8 = pcVar12;
      while (cVar1 != '\0') {
        pcVar8 = pcVar8 + 1;
        cVar1 = *pcVar8;
      }
      uVar9 = (int)pcVar8 - (int)pcVar12 & 0x3fffffff;
    }
    iVar4 = FUN_0055ada0(puVar2[0x10] + 8,pcVar12,uVar9,puVar2);
    if (iVar4 != 0) {
      *(undefined1 *)(iVar10 + 0x38) = 1;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    param_1[0x7f] = 0;
    *(uint *)(iVar10 + 0x18) = *(uint *)(iVar10 + 0x18) | 2;
    if (puVar2[3] == 0) {
      if (*param_2 == 0) {
        param_2 = param_3;
      }
      iVar10 = FUN_0056a8f0(param_1[0x82],*param_2 - param_1[0x82]);
      puVar2[0xb] = iVar10 + 0xd;
    }
  }
LAB_0055384c:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00553860 @ 00553860  kind=lib  attributed-by=lib-string  size=48 */

char * FUN_00553860(uint param_1)

{
  char *pcVar1;
  
  if (param_1 == 0x204) {
    pcVar1 = "abort due to ROLLBACK";
  }
  else if ((0x1a < (param_1 & 0xff)) ||
          (pcVar1 = (&PTR_s_not_an_error_007123d0)[param_1 & 0xff], pcVar1 == (char *)0x0)) {
    return "unknown error";
  }
  return pcVar1;
}


/* FUN_00553890 @ 00553890  kind=lib  attributed-by=lib-island  size=186 */

void FUN_00553890(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0xd4) == 0) {
      iVar2 = FUN_0056bc90(param_1);
      *(int *)(param_1 + 0xd4) = iVar2;
      if (iVar2 == 0) {
        return;
      }
    }
    *(undefined4 *)(param_1 + 0x2c) = param_2;
    if (param_3 == 0) {
      iVar2 = *(int *)(param_1 + 0xd4);
      if (iVar2 != 0) {
        if ((*(byte *)(iVar2 + 0x1c) & 0x40) != 0) {
          piVar1 = *(int **)(iVar2 + 0x10);
          piVar1[1] = *(int *)(*piVar1 + 0xa4);
          *(int **)(*piVar1 + 0xa4) = piVar1;
        }
        if ((*(byte *)(iVar2 + 0x1c) & 0x20) != 0) {
          FUN_005644e0(*(undefined4 *)(iVar2 + 0x10));
        }
        *(ushort *)(iVar2 + 0x1c) = *(ushort *)(iVar2 + 0x1c) & 0xbe01 | 1;
        *(undefined1 *)(iVar2 + 0x1e) = 5;
      }
    }
    else {
      uVar3 = FUN_0056a9b0(param_1,param_3,&stack0x00000010);
      if (*(int *)(param_1 + 0xd4) != 0) {
        FUN_00575040(*(int *)(param_1 + 0xd4),uVar3,0xffffffff,1,FUN_0055dc20);
        return;
      }
    }
  }
  return;
}


/* FUN_00553950 @ 00553950  kind=lib  attributed-by=lib-island  size=183 */

void FUN_00553950(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int local_6c;
  undefined1 *local_68;
  undefined1 *local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  char local_54;
  undefined2 local_53;
  undefined1 local_50 [72];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_68 = local_50;
  iVar1 = *param_1;
  local_58 = *(undefined4 *)(iVar1 + 0x50);
  local_60 = 0;
  local_5c = 0x46;
  local_53 = 1;
  local_54 = '\0';
  local_6c = iVar1;
  local_64 = local_68;
  FUN_0056aa30(&local_6c,1,param_2,&stack0x0000000c);
  iVar2 = FUN_00567fb0(&local_6c);
  if (local_54 != '\0') {
    *(undefined1 *)(iVar1 + 0x38) = 1;
  }
  if (*(char *)(iVar1 + 0x3b) != '\0') {
    FUN_005521a0(iVar1,iVar2);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  param_1[0x11] = param_1[0x11] + 1;
  FUN_005521a0(iVar1,param_1[1]);
  param_1[1] = iVar2;
  param_1[3] = 1;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00553a10 @ 00553a10  kind=lib  attributed-by=lib-island  size=29 */

void FUN_00553a10(int param_1)

{
  int iVar1;
  
  for (iVar1 = *(int *)(param_1 + 4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x3c)) {
    *(uint *)(iVar1 + 0x60) = *(uint *)(iVar1 + 0x60) | 0x20;
  }
  return;
}


/* FUN_00553a30 @ 00553a30  kind=lib  attributed-by=lib-island  size=67 */

void FUN_00553a30(undefined4 param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  char *local_c;
  uint local_8;
  
  local_c = param_3;
  if (param_3 == (char *)0x0) {
    local_8 = 0;
  }
  else {
    cVar1 = *param_3;
    pcVar2 = param_3;
    while (cVar1 != '\0') {
      pcVar2 = pcVar2 + 1;
      cVar1 = *pcVar2;
    }
    local_8 = (int)pcVar2 - (int)param_3 & 0x3fffffff;
  }
  FUN_00553bb0(param_1,param_2,&local_c,0);
  return;
}


/* FUN_00553a80 @ 00553a80  kind=lib  attributed-by=lib-island  size=96 */

int FUN_00553a80(undefined4 *param_1,int param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *local_c;
  uint local_8;
  
  local_c = param_3;
  local_8 = 0;
  if (param_3 != (char *)0x0) {
    cVar1 = *param_3;
    pcVar2 = param_3;
    while (cVar1 != '\0') {
      pcVar2 = pcVar2 + 1;
      cVar1 = *pcVar2;
    }
    local_8 = (int)pcVar2 - (int)param_3 & 0x3fffffff;
  }
  if ((local_8 != 0) && (iVar3 = FUN_00553bb0(*param_1,0x5c,&local_c,1), iVar3 != 0)) {
    *(ushort *)(iVar3 + 2) = *(ushort *)(iVar3 + 2) | 0x100;
    *(int *)(iVar3 + 8) = param_2;
    return iVar3;
  }
  return param_2;
}


/* FUN_00553ae0 @ 00553ae0  kind=lib  attributed-by=lib-island  size=56 */

int FUN_00553ae0(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (*(int *)(param_3 + 4) != 0) {
    iVar1 = FUN_00553bb0(*param_1,0x5c,param_3,1);
    if (iVar1 != 0) {
      *(int *)(iVar1 + 8) = param_2;
      *(ushort *)(iVar1 + 2) = *(ushort *)(iVar1 + 2) | 0x100;
      return iVar1;
    }
  }
  return param_2;
}


/* FUN_00553b20 @ 00553b20  kind=lib  attributed-by=lib-island  size=133 */

char FUN_00553b20(char *param_1)

{
  char cVar1;
  
  while( true ) {
    for (; (param_1 != (char *)0x0 && ((*param_1 == '\\' || (*param_1 == '\x18'))));
        param_1 = *(char **)(param_1 + 8)) {
    }
    cVar1 = *param_1;
    if (cVar1 != 't') break;
    param_1 = (char *)**(undefined4 **)(**(int **)(param_1 + 0x10) + 8);
  }
  if (cVar1 == '%') {
    cVar1 = FUN_00549610(*(undefined4 *)(param_1 + 4));
    return cVar1;
  }
  if ((((cVar1 == -0x66) || (cVar1 == -0x68)) || (cVar1 == -0x7c)) &&
     (*(int *)(param_1 + 0x28) != 0)) {
    if (-1 < *(short *)(param_1 + 0x1c)) {
      return *(char *)(*(int *)(*(int *)(param_1 + 0x28) + 4) + 0x15 +
                      *(short *)(param_1 + 0x1c) * 0x18);
    }
    return 'd';
  }
  return param_1[1];
}


/* FUN_00553bb0 @ 00553bb0  kind=lib  attributed-by=lib-island  size=254 */

undefined1 * FUN_00553bb0(undefined4 param_1,int param_2,int *param_3,int param_4)

{
  char cVar1;
  int iVar2;
  undefined1 *_Dst;
  int iVar3;
  undefined4 local_8;
  
  iVar3 = 0;
  local_8 = 0;
  if (param_3 != (int *)0x0) {
    if ((param_2 == 0x81) && (*param_3 != 0)) {
      iVar2 = FUN_0055a0e0(*param_3,&local_8);
      if (iVar2 != 0) goto LAB_00553be7;
    }
    iVar3 = param_3[1] + 1;
  }
LAB_00553be7:
  _Dst = (undefined1 *)FUN_00552230(param_1,iVar3 + 0x2c);
  if (_Dst != (undefined1 *)0x0) {
    memset(_Dst,0,iVar3 + 0x2c);
    *_Dst = (char)param_2;
    *(undefined2 *)(_Dst + 0x1e) = 0xffff;
    if (param_3 != (int *)0x0) {
      if (iVar3 == 0) {
        *(ushort *)(_Dst + 2) = *(ushort *)(_Dst + 2) | 0x400;
        *(undefined4 *)(_Dst + 4) = local_8;
        *(undefined4 *)(_Dst + 0x14) = 1;
        return _Dst;
      }
      *(undefined1 **)(_Dst + 4) = _Dst + 0x2c;
      if (param_3[1] != 0) {
        memcpy(_Dst + 0x2c,(void *)*param_3,param_3[1]);
      }
      *(undefined1 *)(param_3[1] + *(int *)(_Dst + 4)) = 0;
      if (((param_4 != 0) && (2 < iVar3)) &&
         ((cVar1 = *(char *)*param_3, cVar1 == '\'' ||
          (((cVar1 == '\"' || (cVar1 == '[')) || (cVar1 == '`')))))) {
        FUN_00552be0(*(undefined4 *)(_Dst + 4));
        if (cVar1 == '\"') {
          *(ushort *)(_Dst + 2) = *(ushort *)(_Dst + 2) | 0x40;
        }
      }
    }
    *(undefined4 *)(_Dst + 0x14) = 1;
  }
  return _Dst;
}


/* FUN_00553cb0 @ 00553cb0  kind=lib  attributed-by=lib-island  size=101 */

void FUN_00553cb0(undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 local_18;
  undefined8 local_10;
  undefined4 local_8;
  
  if (param_2 != (int *)0x0) {
    puVar1 = (undefined4 *)param_2[2];
    iVar2 = 0;
    if (0 < *param_2) {
      do {
        local_8 = param_1;
        local_10 = 0;
        local_18 = 0x6a1aa000529de0;
        FUN_00578680(&local_18,*puVar1);
        iVar2 = iVar2 + 1;
        puVar1 = puVar1 + 5;
      } while (iVar2 < *param_2);
    }
  }
  return;
}


/* FUN_00553d20 @ 00553d20  kind=lib  attributed-by=lib-island  size=65 */

void FUN_00553d20(undefined4 param_1,undefined4 param_2)

{
  undefined8 local_18;
  undefined8 local_10;
  undefined4 local_8;
  
  local_8 = param_1;
  local_10 = 0;
  local_18 = 0x6a1aa000529de0;
  FUN_00578680(&local_18,param_2);
  return;
}


/* FUN_00553d70 @ 00553d70  kind=lib  attributed-by=lib-island  size=199 */

undefined1 * FUN_00553d70(undefined4 param_1,undefined1 *param_2,undefined1 *param_3)

{
  byte *pbVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *_Dst;
  undefined1 *puVar4;
  
  puVar2 = param_3;
  puVar4 = param_2;
  if (param_2 == (undefined1 *)0x0) {
    return param_3;
  }
  if (param_3 == (undefined1 *)0x0) {
    return param_2;
  }
  pbVar1 = param_2 + 2;
  param_2 = (undefined1 *)0x0;
  if ((*pbVar1 & 1) == 0) {
    iVar3 = FUN_00556530(puVar4,&param_2);
    if ((iVar3 != 0) && (param_2 == (undefined1 *)0x0)) goto LAB_00553e0d;
  }
  iVar3 = FUN_005353c0(puVar2);
  if (iVar3 == 0) {
    _Dst = (undefined1 *)FUN_00552230(param_1,0x2c);
    if (_Dst != (undefined1 *)0x0) {
      memset(_Dst,0,0x2c);
      *_Dst = 0x45;
      *(undefined2 *)(_Dst + 0x1e) = 0xffff;
      *(undefined4 *)(_Dst + 0x14) = 1;
    }
    FUN_005540d0(param_1,_Dst,puVar4,puVar2);
    return _Dst;
  }
LAB_00553e0d:
  FUN_00555e30(param_1,puVar4);
  FUN_00555e30(param_1,puVar2);
  puVar4 = (undefined1 *)FUN_00553bb0(param_1,0x81,&PTR_DAT_007122d8,0);
  return puVar4;
}


/* FUN_00553e40 @ 00553e40  kind=lib  attributed-by=lib-island  size=655 */

void FUN_00553e40(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  void *_Dst;
  short sVar8;
  int *piVar9;
  int *piVar10;
  uint _Size;
  bool bVar11;
  uint local_10;
  int local_c;
  int *local_8;
  
  iVar2 = *param_1;
  if (param_2 == 0) {
    return;
  }
  local_8 = *(int **)(param_2 + 4);
  if (*(char *)((int)local_8 + 1) == '\0') {
    param_1[0x73] = param_1[0x73] + 1;
    *(short *)(param_2 + 0x1c) = (short)param_1[0x73];
    goto LAB_0055408d;
  }
  piVar10 = local_8;
  cVar1 = (char)*local_8;
  while (cVar1 != '\0') {
    piVar10 = (int *)((int)piVar10 + 1);
    cVar1 = *(char *)piVar10;
  }
  _Size = (int)piVar10 - (int)local_8 & 0x3fffffff;
  if ((char)*local_8 == '?') {
    iVar6 = FUN_0054a9a0((int)local_8 + 1,&local_10,_Size - 1,1);
    sVar8 = (short)local_10;
    *(short *)(param_2 + 0x1c) = sVar8;
    if (((iVar6 == 0) && (-1 < local_c)) && ((0 < local_c || (local_10 != 0)))) {
      iVar6 = (int)*(uint *)(iVar2 + 0x74) >> 0x1f;
      if ((iVar6 <= local_c) && ((iVar6 < local_c || (*(uint *)(iVar2 + 0x74) < local_10))))
      goto LAB_00553ee4;
    }
    else {
LAB_00553ee4:
      FUN_00553950(param_1,"variable number must be between ?1 and ?%d",
                   *(undefined4 *)(iVar2 + 0x74));
      sVar8 = 0;
    }
    iVar6 = param_1[0x73] >> 0x1f;
    if ((iVar6 <= local_c) && ((iVar6 < local_c || ((uint)param_1[0x73] < local_10)))) {
      param_1[0x73] = local_10;
    }
  }
  else {
    iVar6 = 0;
    local_c = 0;
    if (0 < param_1[0x74]) {
      do {
        piVar10 = *(int **)(param_1[0x7b] + iVar6 * 4);
        if (piVar10 != (int *)0x0) {
          piVar9 = local_8;
          uVar5 = _Size - 3;
          uVar4 = _Size + 1;
          while (uVar3 = uVar5, 3 < uVar4) {
            if (*piVar10 != *piVar9) goto LAB_00553f5f;
            piVar10 = piVar10 + 1;
            piVar9 = piVar9 + 1;
            uVar5 = uVar3 - 4;
            uVar4 = uVar3;
          }
          if (uVar3 != 0xfffffffc) {
LAB_00553f5f:
            if (((char)*piVar10 != (char)*piVar9) ||
               ((uVar3 != 0xfffffffd &&
                ((*(char *)((int)piVar10 + 1) != *(char *)((int)piVar9 + 1) ||
                 ((uVar3 != 0xfffffffe &&
                  ((*(char *)((int)piVar10 + 2) != *(char *)((int)piVar9 + 2) ||
                   ((uVar3 != 0xffffffff &&
                    (*(char *)((int)piVar10 + 3) != *(char *)((int)piVar9 + 3)))))))))))))
            goto LAB_00553f9f;
          }
          sVar8 = (short)local_c + 1;
          *(short *)(param_2 + 0x1c) = sVar8;
          bVar11 = sVar8 == 0;
          if (!bVar11) goto LAB_00553fcd;
          break;
        }
LAB_00553f9f:
        local_c = local_c + 1;
        iVar6 = (int)(short)local_c;
      } while (iVar6 < param_1[0x74]);
    }
    iVar6 = param_1[0x73];
    param_1[0x73] = iVar6 + 1;
    sVar8 = (short)(iVar6 + 1);
    *(short *)(param_2 + 0x1c) = sVar8;
  }
  bVar11 = sVar8 == 0;
LAB_00553fcd:
  if (!bVar11 && -1 < sVar8) {
    iVar6 = (int)sVar8;
    if (param_1[0x74] < iVar6) {
      iVar7 = FUN_00552390(iVar2,param_1[0x7b],iVar6 * 4);
      if (iVar7 == 0) {
        return;
      }
      param_1[0x7b] = iVar7;
      memset((void *)(iVar7 + param_1[0x74] * 4),0,(iVar6 - param_1[0x74]) * 4);
      param_1[0x74] = iVar6;
    }
    if (((char)*local_8 != '?') || (*(int *)(param_1[0x7b] + -4 + iVar6 * 4) == 0)) {
      FUN_005521a0(iVar2,*(undefined4 *)(param_1[0x7b] + -4 + iVar6 * 4));
      _Dst = (void *)FUN_00552230(iVar2,_Size + 1);
      if (_Dst != (void *)0x0) {
        memcpy(_Dst,local_8,_Size);
        *(undefined1 *)((int)_Dst + _Size) = 0;
      }
      *(void **)(param_1[0x7b] + -4 + iVar6 * 4) = _Dst;
    }
  }
LAB_0055408d:
  if ((param_1[0x11] == 0) && (*(int *)(iVar2 + 0x74) < param_1[0x73])) {
    FUN_00553950(param_1,"too many SQL variables");
  }
  return;
}


/* FUN_005540d0 @ 005540d0  kind=lib  attributed-by=lib-island  size=95 */

void FUN_005540d0(undefined4 param_1,int param_2,int param_3,int param_4)

{
  if (param_2 == 0) {
    FUN_00555e30(param_1,param_3);
    FUN_00555e30(param_1,param_4);
    return;
  }
  if (param_4 != 0) {
    *(int *)(param_2 + 0xc) = param_4;
    *(ushort *)(param_2 + 2) = *(ushort *)(param_2 + 2) | *(ushort *)(param_4 + 2) & 0x100;
  }
  if (param_3 != 0) {
    *(int *)(param_2 + 8) = param_3;
    *(ushort *)(param_2 + 2) = *(ushort *)(param_2 + 2) | *(ushort *)(param_3 + 2) & 0x100;
  }
  FUN_00536750(param_2);
  return;
}


/* FUN_00554130 @ 00554130  kind=lib  attributed-by=lib-island  size=526 */

void FUN_00554130(int param_1)

{
  if (*(int *)(param_1 + 0x74) != 0) {
    if (*(char *)(param_1 + 0x6c) != '\0') {
      if (*(byte *)(param_1 + 0x13) < 8) {
        *(int *)(param_1 + 0x1c + (uint)*(byte *)(param_1 + 0x13) * 4) = *(int *)(param_1 + 0x74);
        *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
      }
      *(undefined1 *)(param_1 + 0x6c) = 0;
    }
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  if (*(int *)(param_1 + 0x8c) != 0) {
    if (*(char *)(param_1 + 0x84) != '\0') {
      if (*(byte *)(param_1 + 0x13) < 8) {
        *(int *)(param_1 + 0x1c + (uint)*(byte *)(param_1 + 0x13) * 4) = *(int *)(param_1 + 0x8c);
        *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
      }
      *(undefined1 *)(param_1 + 0x84) = 0;
    }
    *(undefined4 *)(param_1 + 0x8c) = 0;
  }
  if (*(int *)(param_1 + 0xa4) != 0) {
    if (*(char *)(param_1 + 0x9c) != '\0') {
      if (*(byte *)(param_1 + 0x13) < 8) {
        *(int *)(param_1 + 0x1c + (uint)*(byte *)(param_1 + 0x13) * 4) = *(int *)(param_1 + 0xa4);
        *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
      }
      *(undefined1 *)(param_1 + 0x9c) = 0;
    }
    *(undefined4 *)(param_1 + 0xa4) = 0;
  }
  if (*(int *)(param_1 + 0xbc) != 0) {
    if (*(char *)(param_1 + 0xb4) != '\0') {
      if (*(byte *)(param_1 + 0x13) < 8) {
        *(int *)(param_1 + 0x1c + (uint)*(byte *)(param_1 + 0x13) * 4) = *(int *)(param_1 + 0xbc);
        *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
      }
      *(undefined1 *)(param_1 + 0xb4) = 0;
    }
    *(undefined4 *)(param_1 + 0xbc) = 0;
  }
  if (*(int *)(param_1 + 0xd4) != 0) {
    if (*(char *)(param_1 + 0xcc) != '\0') {
      if (*(byte *)(param_1 + 0x13) < 8) {
        *(int *)(param_1 + 0x1c + (uint)*(byte *)(param_1 + 0x13) * 4) = *(int *)(param_1 + 0xd4);
        *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
      }
      *(undefined1 *)(param_1 + 0xcc) = 0;
    }
    *(undefined4 *)(param_1 + 0xd4) = 0;
  }
  if (*(int *)(param_1 + 0xec) != 0) {
    if (*(char *)(param_1 + 0xe4) != '\0') {
      if (*(byte *)(param_1 + 0x13) < 8) {
        *(int *)(param_1 + 0x1c + (uint)*(byte *)(param_1 + 0x13) * 4) = *(int *)(param_1 + 0xec);
        *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
      }
      *(undefined1 *)(param_1 + 0xe4) = 0;
    }
    *(undefined4 *)(param_1 + 0xec) = 0;
  }
  if (*(int *)(param_1 + 0x104) != 0) {
    if (*(char *)(param_1 + 0xfc) != '\0') {
      if (*(byte *)(param_1 + 0x13) < 8) {
        *(int *)(param_1 + 0x1c + (uint)*(byte *)(param_1 + 0x13) * 4) = *(int *)(param_1 + 0x104);
        *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
      }
      *(undefined1 *)(param_1 + 0xfc) = 0;
    }
    *(undefined4 *)(param_1 + 0x104) = 0;
  }
  if (*(int *)(param_1 + 0x11c) != 0) {
    if (*(char *)(param_1 + 0x114) != '\0') {
      if (*(byte *)(param_1 + 0x13) < 8) {
        *(int *)(param_1 + 0x1c + (uint)*(byte *)(param_1 + 0x13) * 4) = *(int *)(param_1 + 0x11c);
        *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
      }
      *(undefined1 *)(param_1 + 0x114) = 0;
    }
    *(undefined4 *)(param_1 + 0x11c) = 0;
  }
  if (*(int *)(param_1 + 0x134) != 0) {
    if (*(char *)(param_1 + 300) != '\0') {
      if (*(byte *)(param_1 + 0x13) < 8) {
        *(int *)(param_1 + 0x1c + (uint)*(byte *)(param_1 + 0x13) * 4) = *(int *)(param_1 + 0x134);
        *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
      }
      *(undefined1 *)(param_1 + 300) = 0;
    }
    *(undefined4 *)(param_1 + 0x134) = 0;
  }
  if (*(int *)(param_1 + 0x14c) != 0) {
    if (*(char *)(param_1 + 0x144) != '\0') {
      if (*(byte *)(param_1 + 0x13) < 8) {
        *(int *)(param_1 + 0x1c + (uint)*(byte *)(param_1 + 0x13) * 4) = *(int *)(param_1 + 0x14c);
        *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
      }
      *(undefined1 *)(param_1 + 0x144) = 0;
    }
    *(undefined4 *)(param_1 + 0x14c) = 0;
  }
  return;
}


/* FUN_00554340 @ 00554340  kind=lib  attributed-by=lib-island  size=155 */

void FUN_00554340(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x74) == param_2) {
    *(undefined1 *)(param_1 + 0x6c) = 0;
  }
  if (*(int *)(param_1 + 0x8c) == param_2) {
    *(undefined1 *)(param_1 + 0x84) = 0;
  }
  if (*(int *)(param_1 + 0xa4) == param_2) {
    *(undefined1 *)(param_1 + 0x9c) = 0;
  }
  if (*(int *)(param_1 + 0xbc) == param_2) {
    *(undefined1 *)(param_1 + 0xb4) = 0;
  }
  if (*(int *)(param_1 + 0xd4) == param_2) {
    *(undefined1 *)(param_1 + 0xcc) = 0;
  }
  if (*(int *)(param_1 + 0xec) == param_2) {
    *(undefined1 *)(param_1 + 0xe4) = 0;
  }
  if (*(int *)(param_1 + 0x104) == param_2) {
    *(undefined1 *)(param_1 + 0xfc) = 0;
  }
  if (*(int *)(param_1 + 0x11c) == param_2) {
    *(undefined1 *)(param_1 + 0x114) = 0;
  }
  if (*(int *)(param_1 + 0x134) == param_2) {
    *(undefined1 *)(param_1 + 300) = 0;
  }
  if (*(int *)(param_1 + 0x14c) == param_2) {
    *(undefined1 *)(param_1 + 0x144) = 0;
  }
  return;
}


/* FUN_005543e0 @ 005543e0  kind=lib  attributed-by=lib-island  size=80 */

void FUN_005543e0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) - param_2;
  piVar1 = (int *)(param_1 + 0x74);
  iVar2 = 10;
  do {
    if ((*piVar1 != 0) && (*(int *)(param_1 + 0x5c) < piVar1[-1])) {
      if ((char)piVar1[-2] != '\0') {
        if (*(byte *)(param_1 + 0x13) < 8) {
          *(int *)(param_1 + 0x1c + (uint)*(byte *)(param_1 + 0x13) * 4) = *piVar1;
          *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
        }
        *(undefined1 *)(piVar1 + -2) = 0;
      }
      *piVar1 = 0;
    }
    piVar1 = piVar1 + 6;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


/* FUN_00554430 @ 00554430  kind=lib  attributed-by=lib-island  size=90 */

void FUN_00554430(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)(param_1 + 0x74);
  iVar3 = 10;
  do {
    iVar1 = *piVar2;
    if ((param_2 <= iVar1) && (iVar1 <= param_3 + -1 + param_2)) {
      if ((char)piVar2[-2] != '\0') {
        if (*(byte *)(param_1 + 0x13) < 8) {
          *(int *)(param_1 + 0x1c + (uint)*(byte *)(param_1 + 0x13) * 4) = iVar1;
          *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
        }
        *(undefined1 *)(piVar2 + -2) = 0;
      }
      *piVar2 = 0;
    }
    piVar2 = piVar2 + 6;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}


/* FUN_00554490 @ 00554490  kind=lib  attributed-by=lib-island  size=306 */

void FUN_00554490(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if ((*(byte *)(*param_1 + 0x34) & 2) != 0) {
    return;
  }
  iVar1 = 0;
  piVar2 = param_1 + 0x19;
  do {
    if (piVar2[4] == 0) {
      piVar2[3] = param_1[0x17];
      *piVar2 = param_2;
      piVar2[1] = param_3;
      piVar2[4] = param_4;
      *(undefined1 *)(piVar2 + 2) = 0;
      piVar2[5] = param_1[0x18];
      param_1[0x18] = param_1[0x18] + 1;
      return;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 6;
  } while (iVar1 < 10);
  iVar3 = -1;
  iVar1 = 0x7fffffff;
  if (param_1[0x1e] < 0x7fffffff) {
    iVar3 = 0;
    iVar1 = param_1[0x1e];
  }
  if (param_1[0x24] < iVar1) {
    iVar3 = 1;
    iVar1 = param_1[0x24];
  }
  if (param_1[0x2a] < iVar1) {
    iVar3 = 2;
    iVar1 = param_1[0x2a];
  }
  if (param_1[0x30] < iVar1) {
    iVar3 = 3;
    iVar1 = param_1[0x30];
  }
  if (param_1[0x36] < iVar1) {
    iVar3 = 4;
    iVar1 = param_1[0x36];
  }
  if (param_1[0x3c] < iVar1) {
    iVar3 = 5;
    iVar1 = param_1[0x3c];
  }
  if (param_1[0x42] < iVar1) {
    iVar3 = 6;
    iVar1 = param_1[0x42];
  }
  if (param_1[0x48] < iVar1) {
    iVar3 = 7;
    iVar1 = param_1[0x48];
  }
  if (param_1[0x4e] < iVar1) {
    iVar3 = 8;
    iVar1 = param_1[0x4e];
  }
  if (param_1[0x54] < iVar1) {
    iVar3 = 9;
  }
  else if (iVar3 < 0) {
    return;
  }
  param_1[iVar3 * 6 + 0x1c] = param_1[0x17];
  param_1[iVar3 * 6 + 0x19] = param_2;
  param_1[iVar3 * 6 + 0x1a] = param_3;
  param_1[iVar3 * 6 + 0x1d] = param_4;
  *(undefined1 *)(param_1 + iVar3 * 6 + 0x1b) = 0;
  param_1[iVar3 * 6 + 0x1e] = param_1[0x18];
  param_1[0x18] = param_1[0x18] + 1;
  return;
}


/* FUN_005545d0 @ 005545d0  kind=lib  attributed-by=lib-island  size=92 */

int FUN_005545d0(int param_1,char *param_2,int param_3)

{
  int iVar1;
  
  if ((param_2 != (char *)0x0) && (*param_2 == -0x7c)) {
    FUN_0056be90(*(undefined4 *)(param_1 + 8),0xe,*(undefined4 *)(param_2 + 0x18),param_3);
    return param_3;
  }
  iVar1 = FUN_00554e20(param_1,param_2,param_3);
  if ((iVar1 != param_3) && (*(int *)(param_1 + 8) != 0)) {
    FUN_0056be90(*(int *)(param_1 + 8),0xf,iVar1,param_3);
  }
  return param_3;
}


/* FUN_00554630 @ 00554630  kind=lib  attributed-by=lib-island  size=122 */

int FUN_00554630(int param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)(param_1 + 8);
  if ((param_2 == (char *)0x0) || (*param_2 != -0x7c)) {
    iVar2 = FUN_00554e20(param_1,param_2,param_3);
    if ((iVar2 == param_3) || (iVar3 = *(int *)(param_1 + 8), iVar3 == 0)) goto LAB_0055467e;
    uVar4 = 0xf;
  }
  else {
    iVar2 = *(int *)(param_2 + 0x18);
    uVar4 = 0xe;
    iVar3 = iVar1;
  }
  FUN_0056be90(iVar3,uVar4,iVar2,param_3);
LAB_0055467e:
  if (*param_2 != -0x7c) {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
    uVar4 = *(undefined4 *)(param_1 + 0x4c);
    FUN_0056be90(iVar1,0xe,param_3,uVar4);
    *(undefined4 *)(param_2 + 0x18) = uVar4;
    param_2[0x23] = *param_2;
    *param_2 = -0x7c;
  }
  return param_3;
}


/* FUN_005546b0 @ 005546b0  kind=lib  attributed-by=lib-island  size=170 */

int FUN_005546b0(int param_1,int *param_2,int param_3,int param_4)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  
  iVar2 = *param_2;
  puVar7 = (undefined4 *)param_2[2];
  param_2 = (int *)iVar2;
  if (0 < iVar2) {
    do {
      iVar5 = FUN_00554e20(param_1,*puVar7,param_3);
      if (iVar5 != param_3) {
        iVar3 = *(int *)(param_1 + 8);
        iVar4 = *(int *)(iVar3 + 0x1c);
        if ((iVar4 < *(int *)(iVar3 + 0x20)) || (iVar6 = FUN_0053b4b0(iVar3), iVar6 == 0)) {
          *(int *)(iVar3 + 0x1c) = *(int *)(iVar3 + 0x1c) + 1;
          iVar3 = *(int *)(iVar3 + 4);
          *(undefined1 *)(iVar3 + 3 + iVar4 * 0x14) = 0;
          pcVar1 = (char *)(iVar3 + iVar4 * 0x14);
          *pcVar1 = (param_4 == 0) + '\x0e';
          *(int *)(pcVar1 + 4) = iVar5;
          *(int *)(pcVar1 + 8) = param_3;
          pcVar1[0xc] = '\0';
          pcVar1[0xd] = '\0';
          pcVar1[0xe] = '\0';
          pcVar1[0xf] = '\0';
          pcVar1[0x10] = '\0';
          pcVar1[0x11] = '\0';
          pcVar1[0x12] = '\0';
          pcVar1[0x13] = '\0';
          pcVar1[1] = '\0';
        }
      }
      param_3 = param_3 + 1;
      puVar7 = puVar7 + 5;
      param_2 = (int *)((int)param_2 + -1);
    } while (param_2 != (int *)0x0);
    return iVar2;
  }
  return iVar2;
}


/* FUN_00554760 @ 00554760  kind=lib  attributed-by=lib-island  size=166 */

undefined4
FUN_00554760(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,char param_6)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int extraout_EDX;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = 0;
  piVar3 = (int *)(param_1 + 100);
  while (((piVar3[4] < 1 || (*piVar3 != param_4)) || (piVar3[1] != param_3))) {
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 6;
    if (9 < iVar2) {
      FUN_00554810(iVar1,param_2,param_4,param_3,param_5);
      if (param_6 == '\0') {
        FUN_00554490(param_1,param_4,param_3,param_5);
      }
      else if (*(int *)(iVar1 + 4) != 0) {
        *(char *)(*(int *)(iVar1 + 4) + -0x11 + *(int *)(iVar1 + 0x1c) * 0x14) = param_6;
        return param_5;
      }
      return param_5;
    }
  }
  piVar3[5] = *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  FUN_00554340(param_1,piVar3[4]);
  return *(undefined4 *)(extraout_EDX + 0x10);
}


/* FUN_00554810 @ 00554810  kind=lib  attributed-by=lib-island  size=165 */

void FUN_00554810(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if ((param_4 < 0) || (param_4 == *(short *)(param_2 + 0x24))) {
    iVar1 = *(int *)(param_1 + 0x1c);
    if ((iVar1 < *(int *)(param_1 + 0x20)) || (iVar3 = FUN_0053b4b0(param_1), iVar3 == 0)) {
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
      iVar3 = *(int *)(param_1 + 4);
      *(undefined2 *)(iVar3 + iVar1 * 0x14) = 0x41;
      iVar3 = iVar3 + iVar1 * 0x14;
      *(undefined4 *)(iVar3 + 4) = param_3;
      *(undefined1 *)(iVar3 + 3) = 0;
      *(undefined4 *)(iVar3 + 8) = param_5;
      *(undefined4 *)(iVar3 + 0xc) = 0;
      *(undefined4 *)(iVar3 + 0x10) = 0;
    }
  }
  else {
    uVar2 = 0x1d;
    if ((*(byte *)(param_2 + 0x2a) & 0x10) != 0) {
      uVar2 = 0x89;
    }
    FUN_0056bef0(param_1,uVar2,param_3,param_4,param_5);
  }
  if (-1 < param_4) {
    FUN_00550cd0(param_1,param_2,param_4,param_5);
  }
  return;
}


/* FUN_005548c0 @ 005548c0  kind=lib  attributed-by=lib-island  size=918 */

void FUN_005548c0(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  int iVar10;
  undefined4 uVar11;
  int local_c;
  undefined1 local_5;
  
  piVar1 = *(int **)(param_1 + 8);
  local_c = 0;
  iVar3 = FUN_00556e50(param_1,param_2,&local_c);
  local_5 = FUN_005328e0(param_2);
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
  if (*(char *)(param_1 + 0x13) == '\0') {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
    iVar10 = *(int *)(param_1 + 0x4c);
  }
  else {
    bVar9 = *(char *)(param_1 + 0x13) - 1;
    *(byte *)(param_1 + 0x13) = bVar9;
    iVar10 = *(int *)(param_1 + 0x1c + (uint)bVar9 * 4);
  }
  pcVar2 = *(char **)(param_2 + 8);
  if ((pcVar2 == (char *)0x0) || (*pcVar2 != -0x7c)) {
    iVar5 = FUN_00554e20(param_1,pcVar2,iVar10);
    if ((iVar5 == iVar10) || (iVar4 = *(int *)(param_1 + 8), iVar4 == 0)) goto LAB_00554951;
    uVar11 = 0xf;
  }
  else {
    iVar5 = *(int *)(pcVar2 + 0x18);
    uVar11 = 0xe;
    iVar4 = *(int *)(param_1 + 8);
  }
  FUN_0056be90(iVar4,uVar11,iVar5,iVar10);
LAB_00554951:
  if (param_4 == param_3) {
    FUN_0056be90(piVar1,0x49,iVar10,param_4);
  }
  else {
    uVar6 = FUN_0056be30(piVar1,0x4a,iVar10);
    FUN_0056be90(piVar1,0x48,*(undefined4 *)(param_2 + 0x18),param_3);
    iVar5 = piVar1[7];
    if ((iVar5 < piVar1[8]) || (iVar4 = FUN_0053b4b0(piVar1), iVar4 == 0)) {
      piVar1[7] = piVar1[7] + 1;
      iVar4 = piVar1[1];
      *(undefined2 *)(iVar4 + iVar5 * 0x14) = 1;
      *(undefined1 *)(iVar4 + 3 + iVar5 * 0x14) = 0;
      *(undefined4 *)(iVar4 + 4 + iVar5 * 0x14) = 0;
      *(int *)(iVar4 + 8 + iVar5 * 0x14) = param_4;
      *(undefined4 *)(iVar4 + 0xc + iVar5 * 0x14) = 0;
      *(undefined4 *)(iVar4 + 0x10 + iVar5 * 0x14) = 0;
    }
    if ((-1 < (int)uVar6) && (uVar6 < (uint)piVar1[7])) {
      *(int *)(piVar1[1] + 8 + uVar6 * 0x14) = piVar1[7];
    }
  }
  if (iVar3 == 1) {
    FUN_0056be90(piVar1,0x15,iVar10,param_3);
    uVar11 = *(undefined4 *)(param_2 + 0x18);
    iVar3 = piVar1[7];
    if ((iVar3 < piVar1[8]) || (iVar5 = FUN_0053b4b0(piVar1), iVar5 == 0)) {
      piVar1[7] = piVar1[7] + 1;
      iVar5 = piVar1[1];
      *(undefined4 *)(iVar5 + 4 + iVar3 * 0x14) = uVar11;
      *(undefined2 *)(iVar5 + iVar3 * 0x14) = 0x36;
      *(undefined1 *)(iVar5 + 3 + iVar3 * 0x14) = 0;
      *(int *)(iVar5 + 8 + iVar3 * 0x14) = param_3;
      *(int *)(iVar5 + 0xc + iVar3 * 0x14) = iVar10;
      *(undefined4 *)(iVar5 + 0x10 + iVar3 * 0x14) = 0;
    }
  }
  else {
    iVar3 = piVar1[7];
    if ((iVar3 < piVar1[8]) || (iVar5 = FUN_0053b4b0(piVar1), iVar5 == 0)) {
      iVar5 = piVar1[1];
      piVar1[7] = piVar1[7] + 1;
      *(undefined2 *)(iVar5 + iVar3 * 0x14) = 0x1e;
      *(undefined1 *)(iVar5 + 3 + iVar3 * 0x14) = 0;
      *(int *)(iVar5 + 4 + iVar3 * 0x14) = iVar10;
      *(undefined4 *)(iVar5 + 8 + iVar3 * 0x14) = 1;
      *(undefined4 *)(iVar5 + 0xc + iVar3 * 0x14) = 0;
      *(undefined4 *)(iVar5 + 0x10 + iVar3 * 0x14) = 0;
    }
    else {
      iVar3 = 1;
    }
    iVar5 = *piVar1;
    if ((piVar1[1] == 0) || (*(char *)(iVar5 + 0x38) != '\0')) {
      FUN_00539320(iVar5,1,&local_5);
    }
    else {
      if (iVar3 < 0) {
        iVar3 = piVar1[7] + -1;
      }
      iVar4 = piVar1[1] + iVar3 * 0x14;
      FUN_00539320(iVar5,(int)*(char *)(iVar4 + 1),*(undefined4 *)(piVar1[1] + 0x10 + iVar3 * 0x14))
      ;
      *(undefined4 *)(iVar4 + 0x10) = 0;
      uVar11 = FUN_005524a0(*piVar1,&local_5,1);
      *(undefined4 *)(iVar4 + 0x10) = uVar11;
      *(undefined1 *)(iVar4 + 1) = 0xff;
    }
    if ((local_c == 0) || (param_3 == param_4)) {
      FUN_0056bfc0(piVar1,0x33,*(undefined4 *)(param_2 + 0x18),param_3,iVar10,1);
    }
    else {
      uVar6 = FUN_0056bfc0(piVar1,0x34,*(undefined4 *)(param_2 + 0x18),0,iVar10,1);
      uVar7 = FUN_0056be30(piVar1,0x4a,local_c);
      uVar8 = FUN_0056bfc0(piVar1,0x34,*(undefined4 *)(param_2 + 0x18),0,local_c,1);
      FUN_0056be90(piVar1,7,0xffffffff,local_c);
      if ((-1 < (int)uVar8) && (uVar8 < (uint)piVar1[7])) {
        *(int *)(piVar1[1] + 8 + uVar8 * 0x14) = piVar1[7];
      }
      FUN_0056be90(piVar1,0x14,local_c,1);
      if ((-1 < (int)uVar7) && (uVar7 < (uint)piVar1[7])) {
        *(int *)(piVar1[1] + 8 + uVar7 * 0x14) = piVar1[7];
      }
      FUN_0056be90(piVar1,0x1b,local_c,param_4);
      FUN_0056be90(piVar1,1,0,param_3);
      if ((-1 < (int)uVar6) && (uVar6 < (uint)piVar1[7])) {
        *(int *)(piVar1[1] + 8 + uVar6 * 0x14) = piVar1[7];
      }
    }
  }
  if ((iVar10 != 0) && (*(byte *)(param_1 + 0x13) < 8)) {
    iVar5 = 0;
    iVar3 = param_1 + 100;
    while (*(int *)(iVar3 + 0x10) != iVar10) {
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + 0x18;
      if (9 < iVar5) {
        *(int *)(param_1 + 0x1c + (uint)*(byte *)(param_1 + 0x13) * 4) = iVar10;
        *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
        FUN_005543e0(param_1,1);
        return;
      }
    }
    *(undefined1 *)(iVar3 + 8) = 1;
  }
  FUN_005543e0(param_1,1);
  return;
}


/* FUN_00554c60 @ 00554c60  kind=lib  attributed-by=lib-island  size=63 */

void FUN_00554c60(undefined4 param_1,byte *param_2)

{
  byte bVar1;
  
  for (; (*param_2 == 0x9d || (*param_2 == 0x9c)); param_2 = *(byte **)(param_2 + 8)) {
  }
  bVar1 = *param_2;
  if (bVar1 == 0x84) {
    bVar1 = param_2[0x23];
  }
  if ((bVar1 != 0x5e) && ((bVar1 < 0x81 || (0x83 < bVar1)))) {
    FUN_0056be90();
    return;
  }
  return;
}


/* FUN_00554ca0 @ 00554ca0  kind=lib  attributed-by=lib-island  size=371 */

void FUN_00554ca0(int param_1,int param_2,int param_3,int param_4)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 8);
  iVar3 = *(int *)(iVar2 + 0x1c);
  if ((iVar3 < *(int *)(iVar2 + 0x20)) || (iVar4 = FUN_0053b4b0(iVar2), iVar4 == 0)) {
    *(int *)(iVar2 + 0x1c) = *(int *)(iVar2 + 0x1c) + 1;
    puVar1 = (undefined2 *)(*(int *)(iVar2 + 4) + iVar3 * 0x14);
    *puVar1 = 0xd;
    *(undefined1 *)((int)puVar1 + 3) = 0;
    *(int *)(puVar1 + 2) = param_2;
    *(int *)(puVar1 + 4) = param_3;
    *(int *)(puVar1 + 6) = param_4 + -1;
    *(undefined4 *)(puVar1 + 8) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x74);
  if ((param_2 <= iVar2) && (iVar2 < param_2 + param_4)) {
    *(int *)(param_1 + 0x74) = (iVar2 - param_2) + param_3;
  }
  iVar2 = *(int *)(param_1 + 0x8c);
  if ((param_2 <= iVar2) && (iVar2 < param_2 + param_4)) {
    *(int *)(param_1 + 0x8c) = (iVar2 - param_2) + param_3;
  }
  iVar2 = *(int *)(param_1 + 0xa4);
  if ((param_2 <= iVar2) && (iVar2 < param_2 + param_4)) {
    *(int *)(param_1 + 0xa4) = (iVar2 - param_2) + param_3;
  }
  iVar2 = *(int *)(param_1 + 0xbc);
  if ((param_2 <= iVar2) && (iVar2 < param_2 + param_4)) {
    *(int *)(param_1 + 0xbc) = (iVar2 - param_2) + param_3;
  }
  iVar2 = *(int *)(param_1 + 0xd4);
  if ((param_2 <= iVar2) && (iVar2 < param_2 + param_4)) {
    *(int *)(param_1 + 0xd4) = (iVar2 - param_2) + param_3;
  }
  iVar2 = *(int *)(param_1 + 0xec);
  if ((param_2 <= iVar2) && (iVar2 < param_2 + param_4)) {
    *(int *)(param_1 + 0xec) = (iVar2 - param_2) + param_3;
  }
  iVar2 = *(int *)(param_1 + 0x104);
  if ((param_2 <= iVar2) && (iVar2 < param_2 + param_4)) {
    *(int *)(param_1 + 0x104) = (iVar2 - param_2) + param_3;
  }
  iVar2 = *(int *)(param_1 + 0x11c);
  if ((param_2 <= iVar2) && (iVar2 < param_2 + param_4)) {
    *(int *)(param_1 + 0x11c) = (iVar2 - param_2) + param_3;
  }
  iVar2 = *(int *)(param_1 + 0x134);
  if ((param_2 <= iVar2) && (iVar2 < param_2 + param_4)) {
    *(int *)(param_1 + 0x134) = (iVar2 - param_2) + param_3;
  }
  iVar2 = *(int *)(param_1 + 0x14c);
  if ((param_2 <= iVar2) && (iVar2 < param_2 + param_4)) {
    *(int *)(param_1 + 0x14c) = (iVar2 - param_2) + param_3;
  }
  return;
}


/* FUN_00554e20 @ 00554e20  kind=lib  attributed-by=lib-string  size=3065 */

int FUN_00554e20(int *param_1,byte *param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined1 *puVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  int *piVar15;
  undefined8 uVar16;
  undefined1 local_88 [8];
  undefined8 *local_80;
  undefined1 *local_7c;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 local_4c;
  undefined8 local_44;
  undefined8 local_3c;
  undefined4 local_34;
  int local_30;
  int local_2c;
  int *local_28;
  char *local_24;
  undefined8 *local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  int *local_10;
  int local_c;
  int local_8;
  
  iVar12 = param_3;
  piVar15 = param_1;
  local_2c = *param_1;
  piVar14 = (int *)param_1[2];
  local_8 = param_3;
  local_c = 0;
  local_10 = (int *)0x0;
  if (piVar14 == (int *)0x0) {
    return 0;
  }
  local_14 = 0x62;
  if (param_2 != (byte *)0x0) {
    local_14 = (uint)*param_2;
  }
  local_28 = piVar14;
  switch(local_14) {
  case 0x13:
  case 0x5d:
    uVar10 = FUN_00555b10(param_1,*(undefined4 *)(param_2 + 8),&local_c);
    local_8 = param_3;
    FUN_0056be90(piVar14,local_14,uVar10,param_3);
    break;
  case 0x14:
  case 0x74:
    iVar12 = FUN_005505a0(param_1,param_2,0,0);
    return iVar12;
  default:
    piVar11 = (int *)(*(int **)(param_2 + 0x10))[2];
    local_18 = **(int **)(param_2 + 0x10);
    param_1 = (int *)0x0;
    local_28 = (int *)FUN_005741e0(piVar14);
    local_20 = *(undefined8 **)(param_2 + 8);
    if (local_20 != (undefined8 *)0x0) {
      local_5c = *local_20;
      local_54 = local_20[1];
      local_4c = local_20[2];
      local_44 = local_20[3];
      local_3c = local_20[4];
      local_34 = *(undefined4 *)(local_20 + 5);
      uVar10 = FUN_00555b10(piVar15,local_20,&local_c);
      local_44 = CONCAT44(local_44._4_4_,uVar10);
      local_80 = &local_5c;
      param_1 = (int *)local_88;
      local_5c = CONCAT71(local_5c._1_7_,0x84);
      local_88[0] = 0x4c;
    }
    if (0 < (int)local_18) {
      local_18 = (local_18 - 1 >> 1) + 1;
      do {
        piVar15[0x17] = piVar15[0x17] + 1;
        puVar4 = (undefined1 *)*piVar11;
        if (local_20 != (undefined8 *)0x0) {
          puVar4 = (undefined1 *)param_1;
          local_7c = (undefined1 *)*piVar11;
        }
        param_1 = (int *)puVar4;
        local_2c = FUN_005741e0(piVar14);
        FUN_00555f40(piVar15,param_1,local_2c,8);
        pcVar3 = (char *)piVar11[5];
        if ((pcVar3 == (char *)0x0) || (*pcVar3 != -0x7c)) {
          iVar12 = FUN_00554e20(piVar15,pcVar3,param_3);
          if ((iVar12 != param_3) && (iVar13 = piVar15[2], iVar13 != 0)) {
            uVar10 = 0xf;
            goto LAB_005558ce;
          }
        }
        else {
          iVar12 = *(int *)(pcVar3 + 0x18);
          uVar10 = 0xe;
          iVar13 = piVar15[2];
LAB_005558ce:
          FUN_0056be90(iVar13,uVar10,iVar12,param_3);
        }
        local_1c = piVar14[7];
        if ((local_1c < piVar14[8]) || (iVar12 = FUN_0053b4b0(piVar14), iVar12 == 0)) {
          piVar14[7] = piVar14[7] + 1;
          iVar12 = piVar14[1];
          *(undefined2 *)(iVar12 + local_1c * 0x14) = 1;
          *(undefined1 *)(iVar12 + 3 + local_1c * 0x14) = 0;
          *(undefined4 *)(iVar12 + 4 + local_1c * 0x14) = 0;
          *(int **)(iVar12 + 8 + local_1c * 0x14) = local_28;
          *(undefined4 *)(iVar12 + 0xc + local_1c * 0x14) = 0;
          *(undefined4 *)(iVar12 + 0x10 + local_1c * 0x14) = 0;
        }
        FUN_005543e0(piVar15,1);
        if (piVar14[10] != 0) {
          *(int *)(piVar14[10] - (local_2c * 4 + 4)) = piVar14[7];
        }
        piVar11 = piVar11 + 10;
        local_18 = local_18 + -1;
      } while (local_18 != 0);
    }
    if (*(int *)(param_2 + 0xc) == 0) {
      iVar12 = piVar14[7];
      if ((iVar12 < piVar14[8]) || (iVar13 = FUN_0053b4b0(piVar14), iVar13 == 0)) {
        iVar13 = piVar14[1];
        piVar14[7] = piVar14[7] + 1;
        *(undefined2 *)(iVar13 + iVar12 * 0x14) = 10;
        *(undefined1 *)(iVar13 + 3 + iVar12 * 0x14) = 0;
        *(undefined4 *)(iVar13 + 4 + iVar12 * 0x14) = 0;
        *(int *)(iVar13 + 8 + iVar12 * 0x14) = param_3;
        *(undefined4 *)(iVar13 + 0xc + iVar12 * 0x14) = 0;
        *(undefined4 *)(iVar13 + 0x10 + iVar12 * 0x14) = 0;
      }
      goto LAB_005559f4;
    }
    piVar15[0x17] = piVar15[0x17] + 1;
    pcVar3 = *(char **)(param_2 + 0xc);
    if ((pcVar3 == (char *)0x0) || (*pcVar3 != -0x7c)) {
      iVar12 = FUN_00554e20(piVar15,pcVar3,param_3);
      if ((iVar12 != param_3) && (iVar13 = piVar15[2], iVar13 != 0)) {
        uVar10 = 0xf;
        goto LAB_0055599a;
      }
    }
    else {
      iVar12 = *(int *)(pcVar3 + 0x18);
      uVar10 = 0xe;
      iVar13 = piVar15[2];
LAB_0055599a:
      FUN_0056be90(iVar13,uVar10,iVar12,param_3);
    }
    FUN_005543e0(piVar15,1);
LAB_005559f4:
    if (piVar14[10] == 0) {
      return param_3;
    }
    *(int *)(piVar14[10] - ((int)local_28 * 4 + 4)) = piVar14[7];
    return param_3;
  case 0x18:
  case 0x5c:
  case 0x9d:
    iVar12 = FUN_00554e20(param_1,*(undefined4 *)(param_2 + 8),param_3);
    return iVar12;
  case 0x25:
    local_8 = FUN_00554e20(param_1,*(undefined4 *)(param_2 + 8),param_3);
    cVar5 = FUN_00549610(*(undefined4 *)(param_2 + 4));
    if (local_8 != param_3) {
      FUN_0056be90(piVar14,0xf,local_8,param_3);
      local_8 = param_3;
    }
    FUN_0056be30(piVar14,cVar5 + 0x2c,local_8);
    iVar12 = local_8;
    FUN_00554430(param_1,local_8,1);
    return iVar12;
  case 0x38:
    if (param_1[0x6d] == 0) {
      FUN_00553950(param_1,"RAISE() may only be used within a trigger-program");
      return 0;
    }
    if (param_2[1] == 2) {
      if ((int *)param_1[0x6c] != (int *)0x0) {
        piVar15 = (int *)param_1[0x6c];
      }
      *(undefined1 *)(piVar15 + 6) = 1;
    }
    if (param_2[1] != 4) {
      FUN_0055abc0(param_1,(int)(char)param_2[1],*(undefined4 *)(param_2 + 4),0);
      return param_3;
    }
    FUN_0056bf50(piVar14,6,0,4,0);
    return param_3;
  case 0x3c:
    iVar12 = *(int *)(param_2 + 0x28);
    FUN_0056be90(piVar14,0x74,
                 *(short *)(param_2 + 0x1c) + 1 +
                 (*(short *)(iVar12 + 0x26) + 1) * *(int *)(param_2 + 0x18),param_3);
    if (*(short *)(param_2 + 0x1c) < 0) {
      return param_3;
    }
    if (*(char *)(*(int *)(iVar12 + 4) + 0x15 + *(short *)(param_2 + 0x1c) * 0x18) != 'e') {
      return param_3;
    }
    FUN_0056be30(piVar14,0x16,param_3);
    return param_3;
  case 0x44:
  case 0x45:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
    uVar10 = FUN_00555b10(param_1,*(undefined4 *)(param_2 + 8),&local_c);
    uVar6 = FUN_00555b10(param_1,*(undefined4 *)(param_2 + 0xc),&local_10);
    FUN_0056bef0(piVar14,local_14,uVar6,uVar10,param_3);
    break;
  case 0x46:
  case 0x92:
    uVar10 = FUN_00555b10(param_1,*(undefined4 *)(param_2 + 8),&local_c);
    uVar6 = FUN_00555b10(param_1,*(undefined4 *)(param_2 + 0xc),&local_10);
    FUN_00530a70(param_1,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),
                 (local_14 == 0x46) + 'K',uVar10,uVar6,param_3,0x90);
    break;
  case 0x47:
    local_18 = *(uint *)(param_2 + 8);
    puVar2 = *(undefined4 **)(*(int *)(param_2 + 0x10) + 8);
    uVar10 = *puVar2;
    uVar6 = FUN_00555b10(param_1,local_18,&local_c);
    FUN_00555b10(param_1,uVar10,&local_10);
    local_20 = (undefined8 *)FUN_0055a1f0(param_1);
    uVar16 = FUN_0055a1f0(param_1);
    local_1c = (int)uVar16;
    FUN_00530a70(param_1,local_18,uVar10,0x50,uVar6,(int)((ulonglong)uVar16 >> 0x20),local_20,0x10);
    uVar10 = puVar2[5];
    FUN_00563fb0(param_1,local_10);
    uVar9 = FUN_00555b10(param_1,uVar10,&local_10);
    iVar12 = local_1c;
    FUN_00530a70(param_1,local_18,uVar10,0x4e,uVar6,uVar9,local_1c,0x10);
    puVar8 = local_20;
    FUN_0056bef0(local_28,0x45,local_20,iVar12,param_3);
    FUN_00563fb0(param_1,puVar8);
    FUN_00563fb0(param_1,iVar12);
    break;
  case 0x48:
    uVar10 = FUN_005741e0(piVar14);
    uVar6 = FUN_005741e0(piVar14);
    FUN_0056be90(local_28,10,0,param_3);
    FUN_005548c0(param_1,param_2,uVar10,uVar6);
    piVar14 = local_28;
    FUN_0056be90(local_28,7,1,param_3);
    FUN_00575e10(piVar14,uVar10);
    FUN_0056be90(piVar14,0x14,param_3,0);
    FUN_00575e10(piVar14,uVar6);
    return local_8;
  case 0x49:
  case 0x4a:
    FUN_0056be90(piVar14,7,1,param_3);
    uVar10 = FUN_00555b10(param_1,*(undefined4 *)(param_2 + 8),&local_c);
    uVar10 = FUN_0056be30(piVar14,local_14,uVar10);
    FUN_0056be90(piVar14,0x14,param_3,0xffffffff);
    FUN_00573d80(piVar14,uVar10);
    break;
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
    uVar10 = FUN_00555b10(param_1,*(undefined4 *)(param_2 + 8),&local_c);
    uVar6 = FUN_00555b10(param_1,*(undefined4 *)(param_2 + 0xc),&local_10);
    FUN_00530a70(param_1,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),local_14,uVar10
                 ,uVar6,param_3,0x10);
    break;
  case 0x5e:
    FUN_0056bf50(piVar14,0x5e,0,param_3,0,*(undefined4 *)(param_2 + 4),0);
    return param_3;
  case 0x62:
    FUN_0056be90(piVar14,10,0,param_3);
    return param_3;
  case 0x81:
    FUN_00530e20(param_1,param_2,0,param_3);
    return param_3;
  case 0x82:
    FUN_00532120(piVar14,*(undefined4 *)(param_2 + 4),0,param_3);
    return param_3;
  case 0x83:
    uVar16 = FUN_00568070(*(int *)(param_2 + 4) + 2);
    iVar12 = (int)uVar16 + -1;
    uVar10 = FUN_0055aeb0(*piVar14,(int)((ulonglong)uVar16 >> 0x20),iVar12);
    FUN_0056bf50(piVar14,0xb,iVar12 / 2,param_3,0,uVar10,0xffffffff);
    return local_8;
  case 0x84:
    return *(int *)(param_2 + 0x18);
  case 0x85:
    FUN_0056be90(piVar14,0xc,(int)*(short *)(param_2 + 0x1c),param_3);
    if (*(char *)(*(int *)(param_2 + 4) + 1) == '\0') {
      return param_3;
    }
    iVar12 = piVar14[1];
    iVar13 = *(int *)(param_1[0x7b] + -4 + *(short *)(param_2 + 0x1c) * 4);
    iVar7 = *piVar14;
    if ((iVar12 != 0) && (*(char *)(iVar7 + 0x38) == '\0')) {
      iVar1 = iVar12 + (piVar14[7] + -1) * 0x14;
      FUN_00539320(iVar7,(int)*(char *)(iVar1 + 1),
                   *(undefined4 *)(iVar12 + 0x10 + (piVar14[7] + -1) * 0x14));
      *(undefined4 *)(iVar1 + 0x10) = 0;
      if (iVar13 != 0) {
        *(int *)(iVar1 + 0x10) = iVar13;
        *(undefined1 *)(iVar1 + 1) = 0xfe;
        return local_8;
      }
      *(undefined4 *)(iVar1 + 0x10) = 0;
      *(undefined1 *)(iVar1 + 1) = 0;
      return local_8;
    }
    FUN_00539320(iVar7,0xfffffffe,iVar13);
    return param_3;
  case 0x97:
  case 0x9b:
    local_18 = 0;
    local_20 = (undefined8 *)0x0;
    local_1c = CONCAT31(local_1c._1_3_,
                        *(undefined1 *)(*(int *)(*(int *)(local_2c + 0x10) + 0xc) + 0x4d));
    if ((*(ushort *)(param_2 + 2) & 0x4000) == 0) {
      local_10 = *(int **)(param_2 + 0x10);
      if (local_10 == (int *)0x0) goto LAB_005552c0;
      local_c = *local_10;
    }
    else {
      local_10 = (int *)0x0;
LAB_005552c0:
      local_c = 0;
    }
    local_24 = *(char **)(param_2 + 4);
    uVar16 = FUN_00568070(local_24);
    local_30 = (int)uVar16;
    local_14 = FUN_00556c60(local_2c,(int)((ulonglong)uVar16 >> 0x20),local_30,local_c,local_1c,0);
    if (local_14 == 0) {
      FUN_00553950(param_1,"unknown function: %.*s()",local_30,local_24);
      return param_3;
    }
    if ((*(byte *)(local_14 + 3) & 0x20) != 0) {
      local_18 = FUN_005741e0(piVar14);
      FUN_005545d0(param_1,*(undefined4 *)local_10[2],param_3);
      if (1 < local_c) {
        param_1 = (int *)(local_c + -1);
        param_3 = 0x14;
        do {
          FUN_0056be90(piVar14,0x4a,iVar12,local_18);
          FUN_00554430(piVar15,iVar12,1);
          piVar15[0x17] = piVar15[0x17] + 1;
          FUN_005545d0(piVar15,*(undefined4 *)(param_3 + local_10[2]),iVar12);
          FUN_005543e0(piVar15,1);
          param_3 = param_3 + 0x14;
          param_1 = (int *)((int)param_1 + -1);
        } while (param_1 != (int *)0x0);
      }
      FUN_00575e10(piVar14,local_18);
      return iVar12;
    }
    if (local_10 == (int *)0x0) {
      local_1c = 0;
    }
    else {
      local_1c = FUN_0055a1b0(param_1,local_c);
      if ((*(byte *)(local_14 + 3) & 0xc0) != 0) {
        local_24 = *(char **)local_10[2];
        if ((*local_24 == -0x68) || (*local_24 == -0x66)) {
          local_24[0x23] = *(byte *)(local_14 + 3);
        }
      }
      param_1[0x17] = param_1[0x17] + 1;
      FUN_005546b0(param_1,local_10,local_1c,1);
      FUN_005543e0(param_1,1);
    }
    if ((local_c < 2) || ((param_2[2] & 0x80) == 0)) {
      if (local_c < 1) goto LAB_00555447;
      uVar10 = *(undefined4 *)local_10[2];
    }
    else {
      uVar10 = *(undefined4 *)(local_10[2] + 0x14);
    }
    local_14 = FUN_00577410(local_2c,local_14,local_c,uVar10);
LAB_00555447:
    piVar15 = local_10;
    local_30 = 0;
    local_24 = (char *)0x1;
    if (0 < local_c) {
      iVar13 = 0;
      iVar12 = local_c;
      do {
        if ((local_30 < 0x20) &&
           (iVar7 = FUN_005564b0(*(undefined4 *)(piVar15[2] + iVar13)), iVar12 = local_c, iVar7 != 0
           )) {
          local_18 = local_18 | (uint)local_24;
        }
        if (((*(byte *)(local_14 + 3) & 8) != 0) && (local_20 == (undefined8 *)0x0)) {
          local_20 = (undefined8 *)FUN_00555b70(param_1,*(undefined4 *)(piVar15[2] + iVar13));
          iVar12 = local_c;
        }
        local_24 = (char *)((int)local_24 << 1 | (uint)((int)local_24 < 0));
        local_30 = local_30 + 1;
        iVar13 = iVar13 + 0x14;
        piVar14 = local_28;
      } while (local_30 < iVar12);
    }
    if ((*(byte *)(local_14 + 3) & 8) != 0) {
      puVar8 = local_20;
      if (local_20 == (undefined8 *)0x0) {
        puVar8 = *(undefined8 **)(local_2c + 8);
      }
      FUN_0056bf50(piVar14,0x11,0,0,0,puVar8,0xfffffffc);
    }
    FUN_0056bf50(piVar14,0x12,local_18,local_1c,param_3,local_14,0xfffffffb);
    iVar12 = local_c;
    FUN_0056c490(piVar14,local_c);
    if (iVar12 == 0) {
      return local_8;
    }
    FUN_00563f80(param_1,local_1c,iVar12);
    return local_8;
  case 0x99:
    if (*(int *)(param_2 + 0x24) != 0) {
      return *(int *)(*(int *)(*(int *)(param_2 + 0x24) + 0x20) + 8 +
                     *(short *)(param_2 + 0x1e) * 0x10);
    }
    FUN_00553950(param_1,"misuse of aggregate: %s()",*(undefined4 *)(param_2 + 4));
    return param_3;
  case 0x9a:
    iVar12 = *(int *)(*(int *)(param_2 + 0x24) + 0x14) + *(short *)(param_2 + 0x1e) * 0x18;
    pcVar3 = *(char **)(param_2 + 0x24);
    if (*pcVar3 == '\0') {
      return *(int *)(iVar12 + 0x10);
    }
    if (pcVar3[1] != '\0') {
      FUN_0056bef0(piVar14,0x1d,*(undefined4 *)(pcVar3 + 8),*(undefined4 *)(iVar12 + 0xc),param_3);
      return param_3;
    }
  case 0x98:
    if (-1 < *(int *)(param_2 + 0x18)) {
      iVar12 = FUN_00554760(param_1,*(undefined4 *)(param_2 + 0x28),(int)*(short *)(param_2 + 0x1c),
                            *(int *)(param_2 + 0x18),param_3,param_2[0x23]);
      return iVar12;
    }
    return (int)*(short *)(param_2 + 0x1c) + param_1[0x16];
  case 0x9c:
    pcVar3 = *(char **)(param_2 + 8);
    if (*pcVar3 == -0x7f) {
      FUN_00530e20(param_1,pcVar3,1,param_3);
      local_8 = param_3;
    }
    else if (*pcVar3 == -0x7e) {
      FUN_00532120(piVar14,*(undefined4 *)(pcVar3 + 4),1,param_3);
      local_8 = param_3;
    }
    else {
      iVar12 = FUN_0055a1f0(param_1);
      local_c = iVar12;
      FUN_0056be90(piVar14,7,0,iVar12);
      uVar10 = FUN_00555b10(param_1,*(undefined4 *)(param_2 + 8),&local_10);
      FUN_0056bef0(piVar14,0x57,uVar10,iVar12,param_3);
      local_8 = param_3;
    }
  }
  if ((local_c != 0) && (*(byte *)((int)param_1 + 0x13) < 8)) {
    iVar12 = 0;
    piVar14 = param_1 + 0x19;
    do {
      if (piVar14[4] == local_c) {
        *(undefined1 *)(piVar14 + 2) = 1;
        goto LAB_0055569d;
      }
      iVar12 = iVar12 + 1;
      piVar14 = piVar14 + 6;
    } while (iVar12 < 10);
    param_1[*(byte *)((int)param_1 + 0x13) + 7] = local_c;
    *(char *)((int)param_1 + 0x13) = *(char *)((int)param_1 + 0x13) + '\x01';
  }
LAB_0055569d:
  if ((local_10 != (int *)0x0) && (*(byte *)((int)param_1 + 0x13) < 8)) {
    iVar12 = 0;
    piVar14 = param_1 + 0x19;
    do {
      if ((int *)piVar14[4] == local_10) {
        *(undefined1 *)(piVar14 + 2) = 1;
        return local_8;
      }
      iVar12 = iVar12 + 1;
      piVar14 = piVar14 + 6;
    } while (iVar12 < 10);
    param_1[*(byte *)((int)param_1 + 0x13) + 7] = (int)local_10;
    *(char *)((int)param_1 + 0x13) = *(char *)((int)param_1 + 0x13) + '\x01';
    return local_8;
  }
  return local_8;
}


/* FUN_00555b10 @ 00555b10  kind=lib  attributed-by=lib-island  size=91 */

int FUN_00555b10(int param_1,undefined4 param_2,int *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x13) == '\0') {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
    iVar3 = *(int *)(param_1 + 0x4c);
  }
  else {
    bVar1 = *(char *)(param_1 + 0x13) - 1;
    *(byte *)(param_1 + 0x13) = bVar1;
    iVar3 = *(int *)(param_1 + 0x1c + (uint)bVar1 * 4);
  }
  iVar2 = FUN_00554e20(param_1,param_2,iVar3);
  if (iVar2 == iVar3) {
    *param_3 = iVar3;
    return iVar2;
  }
  FUN_00563fb0(param_1,iVar3);
  *param_3 = 0;
  return iVar2;
}


/* FUN_00555b70 @ 00555b70  kind=lib  attributed-by=lib-island  size=316 */

uint FUN_00555b70(int *param_1,char *param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  
  iVar5 = *param_1;
  if (param_2 == (char *)0x0) {
    return 0;
  }
  do {
    cVar1 = *param_2;
    if ((cVar1 == '%') || (cVar1 == -99)) {
      pcVar4 = *(char **)(param_2 + 8);
    }
    else {
      if (cVar1 == '\\') {
        if (*(char *)(iVar5 + 0x81) == '\0') {
          puVar6 = (undefined4 *)
                   FUN_0055a020(param_1,*(undefined1 *)
                                         (*(int *)(*(int *)(iVar5 + 0x10) + 0xc) + 0x4d),0,
                                *(undefined4 *)(param_2 + 4));
        }
        else {
          puVar6 = (undefined4 *)
                   FUN_00556ba0(iVar5,*(undefined1 *)(*(int *)(*(int *)(iVar5 + 0x10) + 0xc) + 0x4d)
                                ,*(undefined4 *)(param_2 + 4),0);
        }
LAB_00555c7a:
        if (puVar6 != (undefined4 *)0x0) {
          iVar5 = FUN_0055a020(param_1,*(undefined1 *)
                                        (*(int *)(*(int *)(*param_1 + 0x10) + 0xc) + 0x4d),puVar6,
                               *puVar6);
          return -(uint)(iVar5 != 0) & (uint)puVar6;
        }
        return 0;
      }
      if ((*(int *)(param_2 + 0x28) != 0) &&
         ((((cVar1 == -0x66 || (cVar1 == -0x68)) || (cVar1 == -0x7c)) || (cVar1 == '<')))) {
        if (*(short *)(param_2 + 0x1c) < 0) {
          return 0;
        }
        iVar3 = *(int *)(*(int *)(*(int *)(param_2 + 0x28) + 4) + 0x10 +
                        *(short *)(param_2 + 0x1c) * 0x18);
        bVar2 = *(byte *)(*(int *)(*(int *)(iVar5 + 0x10) + 0xc) + 0x4d);
        if (iVar3 == 0) {
          iVar5 = *(int *)(iVar5 + 8);
        }
        else {
          iVar5 = FUN_00537090(iVar5,iVar3,0);
        }
        puVar6 = (undefined4 *)0x0;
        if (iVar5 != 0) {
          puVar6 = (undefined4 *)(iVar5 + (uint)bVar2 * 0x14 + -0x14);
        }
        goto LAB_00555c7a;
      }
      if ((*(ushort *)(param_2 + 2) & 0x100) == 0) {
        return 0;
      }
      pcVar4 = *(char **)(param_2 + 8);
      if ((pcVar4 == (char *)0x0) || ((*(ushort *)(pcVar4 + 2) & 0x100) == 0)) {
        pcVar4 = *(char **)(param_2 + 0xc);
      }
    }
    param_2 = pcVar4;
    if (pcVar4 == (char *)0x0) {
      return 0;
    }
  } while( true );
}


/* FUN_00555cb0 @ 00555cb0  kind=lib  attributed-by=lib-island  size=381 */

char FUN_00555cb0(char *param_1,char *param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  bool bVar7;
  
  if ((param_1 == (char *)0x0) || (param_2 == (char *)0x0)) {
    cVar2 = '\x02';
    if (param_2 == param_1) {
      cVar2 = '\0';
    }
    return cVar2;
  }
  if ((((*(ushort *)(param_1 + 2) & 0x800) == 0) && ((*(ushort *)(param_2 + 2) & 0x800) == 0)) &&
     ((((byte)*(ushort *)(param_2 + 2) ^ (byte)*(ushort *)(param_1 + 2)) & 0x10) == 0)) {
    if (*param_1 == *param_2) {
      iVar3 = FUN_00555cb0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_2 + 8));
      if (iVar3 != 0) {
        return '\x02';
      }
      iVar3 = FUN_00555cb0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_2 + 0xc));
      if (iVar3 != 0) {
        return '\x02';
      }
      iVar3 = FUN_00556680(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_2 + 0x10));
      if (iVar3 != 0) {
        return '\x02';
      }
      if (*(int *)(param_1 + 0x18) != *(int *)(param_2 + 0x18)) {
        return '\x02';
      }
      if (*(short *)(param_1 + 0x1c) != *(short *)(param_2 + 0x1c)) {
        return '\x02';
      }
      if ((*(ushort *)(param_1 + 2) & 0x400) == 0) {
        cVar2 = *param_1;
        if (((cVar2 != -0x68) && (cVar2 != -0x66)) &&
           (pbVar6 = *(byte **)(param_1 + 4), pbVar6 != (byte *)0x0)) {
          if ((*(ushort *)(param_2 + 2) & 0x400) != 0) {
            return '\x02';
          }
          pbVar4 = *(byte **)(param_2 + 4);
          if (pbVar4 == (byte *)0x0) {
            return '\x02';
          }
          do {
            bVar1 = *pbVar6;
            bVar7 = bVar1 < *pbVar4;
            if (bVar1 != *pbVar4) {
LAB_00555df6:
              uVar5 = -(uint)bVar7 | 1;
              goto LAB_00555dfb;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar6[1];
            bVar7 = bVar1 < pbVar4[1];
            if (bVar1 != pbVar4[1]) goto LAB_00555df6;
            pbVar6 = pbVar6 + 2;
            pbVar4 = pbVar4 + 2;
          } while (bVar1 != 0);
          uVar5 = 0;
LAB_00555dfb:
          if (uVar5 != 0) {
            return (cVar2 != '\\') + '\x01';
          }
        }
      }
      else if (((*(ushort *)(param_2 + 2) & 0x400) == 0) ||
              (*(int *)(param_1 + 4) != *(int *)(param_2 + 4))) {
        return '\x02';
      }
      return '\0';
    }
    if ((*param_1 == '\\') &&
       (iVar3 = FUN_00555cb0(*(undefined4 *)(param_1 + 8),param_2), iVar3 < 2)) {
      return '\x01';
    }
    if ((*param_2 == '\\') &&
       (iVar3 = FUN_00555cb0(param_1,*(undefined4 *)(param_2 + 8)), iVar3 < 2)) {
      return '\x01';
    }
  }
  return '\x02';
}


/* FUN_00555e30 @ 00555e30  kind=lib  attributed-by=lib-island  size=156 */

void FUN_00555e30(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    if ((*(ushort *)(param_2 + 2) & 0x4000) == 0) {
      FUN_00555e30(param_1,*(undefined4 *)(param_2 + 8));
      FUN_00555e30(param_1,*(undefined4 *)(param_2 + 0xc));
      if (((*(ushort *)(param_2 + 2) & 0x2000) == 0) && ((*(byte *)(param_2 + 0x22) & 1) != 0)) {
        FUN_005521a0(param_1,*(undefined4 *)(param_2 + 4));
      }
      if ((*(ushort *)(param_2 + 2) & 0x800) == 0) {
        FUN_00556700(param_1,*(undefined4 *)(param_2 + 0x10));
      }
      else {
        iVar1 = *(int *)(param_2 + 0x10);
        if (iVar1 != 0) {
          FUN_005303a0(param_1,iVar1);
          FUN_005521a0(param_1,iVar1);
        }
      }
    }
    if ((*(ushort *)(param_2 + 2) & 0x8000) == 0) {
      FUN_005521a0(param_1,param_2);
    }
  }
  return;
}


/* FUN_00555ed0 @ 00555ed0  kind=lib  attributed-by=lib-island  size=102 */

int FUN_00555ed0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = FUN_00553bb0(iVar1,0x97,param_3,1);
  if (iVar2 == 0) {
    FUN_00556700(iVar1,param_2);
    return 0;
  }
  *(undefined4 *)(iVar2 + 0x10) = param_2;
  FUN_00536750(iVar2);
  if (*(int *)(*param_1 + 0x5c) < *(int *)(iVar2 + 0x14)) {
    FUN_00553950(param_1,"Expression tree is too large (maximum depth %d)",*(int *)(*param_1 + 0x5c)
                );
  }
  return iVar2;
}


/* FUN_00555f40 @ 00555f40  kind=lib  attributed-by=lib-island  size=525 */

void FUN_00555f40(int param_1,byte *param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 local_8;
  
  uVar4 = param_4;
  uVar6 = param_3;
  pbVar3 = param_2;
  iVar2 = param_1;
  iVar1 = *(int *)(param_1 + 8);
  param_1 = 0;
  local_8 = 0;
  if ((iVar1 != 0) && (param_2 != (byte *)0x0)) {
    iVar7 = (*param_2 + 1 ^ 1) - 1;
    switch((uint)*param_2) {
    case 0x13:
      FUN_00556200(iVar2,*(undefined4 *)(param_2 + 8),param_3,param_4);
      break;
    default:
      uVar6 = FUN_00555b10(iVar2,param_2,&param_1);
      FUN_0056bef0(iVar1,0x1c,uVar6,param_3,param_4 != 0);
      break;
    case 0x44:
      uVar6 = FUN_005741e0(iVar1);
      uVar4 = param_4;
      *(int *)(iVar2 + 0x5c) = *(int *)(iVar2 + 0x5c) + 1;
      FUN_00556200(iVar2,*(undefined4 *)(param_2 + 8),uVar6,param_4 ^ 8);
      FUN_00555f40(iVar2,*(undefined4 *)(param_2 + 0xc),param_3,uVar4);
      FUN_00575e10(iVar1,uVar6);
      FUN_005543e0(iVar2,1);
      break;
    case 0x45:
      FUN_00555f40(iVar2,*(undefined4 *)(param_2 + 8),param_3,param_4);
      FUN_00555f40(iVar2,*(undefined4 *)(param_2 + 0xc),uVar6,uVar4);
      break;
    case 0x46:
    case 0x92:
      uVar6 = FUN_00555b10(iVar2,*(undefined4 *)(param_2 + 8),&param_1);
      uVar5 = FUN_00555b10(iVar2,*(undefined4 *)(pbVar3 + 0xc),&local_8);
      FUN_00530a70(iVar2,*(undefined4 *)(pbVar3 + 8),*(undefined4 *)(pbVar3 + 0xc),
                   (*pbVar3 != 0x46) + 'K',uVar6,uVar5,param_3,0x80);
      break;
    case 0x47:
      FUN_00536090(iVar2,param_2,param_3,0,param_4);
      break;
    case 0x48:
      if (param_4 == 0) {
        uVar6 = FUN_005741e0(iVar1);
        FUN_005548c0(iVar2,pbVar3,param_3,uVar6);
        FUN_00575e10(iVar1,uVar6);
      }
      else {
        FUN_005548c0(iVar2,param_2,param_3,param_3);
      }
      break;
    case 0x49:
    case 0x4a:
      uVar6 = FUN_00555b10(iVar2,*(undefined4 *)(param_2 + 8),&param_1);
      FUN_0056be90(iVar1,iVar7,uVar6,param_3);
      break;
    case 0x4b:
    case 0x4c:
    case 0x4d:
    case 0x4e:
    case 0x4f:
    case 0x50:
      uVar6 = FUN_00555b10(iVar2,*(undefined4 *)(param_2 + 8),&param_1);
      uVar5 = FUN_00555b10(iVar2,*(undefined4 *)(pbVar3 + 0xc),&local_8);
      FUN_00530a70(iVar2,*(undefined4 *)(pbVar3 + 8),*(undefined4 *)(pbVar3 + 0xc),iVar7,uVar6,uVar5
                   ,param_3,param_4);
    }
    FUN_00563fb0(iVar2,param_1);
    FUN_00563fb0(iVar2,local_8);
  }
  return;
}


/* FUN_00556200 @ 00556200  kind=lib  attributed-by=lib-island  size=521 */

void FUN_00556200(int param_1,byte *param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 local_c;
  uint local_8;
  
  uVar4 = param_4;
  uVar7 = param_3;
  pbVar3 = param_2;
  iVar2 = param_1;
  iVar1 = *(int *)(param_1 + 8);
  param_1 = 0;
  local_c = 0;
  if ((iVar1 != 0) && (param_2 != (byte *)0x0)) {
    local_8 = (uint)*param_2;
    switch(local_8) {
    case 0x13:
      FUN_00555f40(iVar2,*(undefined4 *)(param_2 + 8),param_3,param_4);
      break;
    default:
      uVar7 = FUN_00555b10(iVar2,param_2,&param_1);
      FUN_0056bef0(iVar1,0x1b,uVar7,param_3,param_4 != 0);
      break;
    case 0x44:
      FUN_00556200(iVar2,*(undefined4 *)(param_2 + 8),param_3,param_4);
      FUN_00556200(iVar2,*(undefined4 *)(param_2 + 0xc),uVar7,uVar4);
      break;
    case 0x45:
      uVar7 = FUN_005741e0(iVar1);
      uVar4 = param_4;
      *(int *)(iVar2 + 0x5c) = *(int *)(iVar2 + 0x5c) + 1;
      FUN_00555f40(iVar2,*(undefined4 *)(param_2 + 8),uVar7,param_4 ^ 8);
      FUN_00556200(iVar2,*(undefined4 *)(param_2 + 0xc),param_3,uVar4);
      FUN_00575e10(iVar1,uVar7);
      FUN_005543e0(iVar2,1);
      break;
    case 0x46:
    case 0x92:
      uVar7 = FUN_00555b10(iVar2,*(undefined4 *)(param_2 + 8),&param_1);
      uVar5 = FUN_00555b10(iVar2,*(undefined4 *)(pbVar3 + 0xc),&local_c);
      FUN_00530a70(iVar2,*(undefined4 *)(pbVar3 + 8),*(undefined4 *)(pbVar3 + 0xc),
                   (local_8 == 0x46) + 'K',uVar7,uVar5,param_3,0x80);
      break;
    case 0x47:
      FUN_00536090(iVar2,param_2,param_3,1,param_4);
      break;
    case 0x48:
      uVar6 = FUN_005741e0(iVar1);
      uVar7 = param_3;
      uVar5 = uVar6;
      if (param_4 != 0) {
        uVar5 = param_3;
      }
      FUN_005548c0(iVar2,param_2,uVar6,uVar5);
      FUN_0056be90(iVar1,1,0,uVar7);
      FUN_00575e10(iVar1,uVar6);
      break;
    case 0x49:
    case 0x4a:
      uVar7 = FUN_00555b10(iVar2,*(undefined4 *)(param_2 + 8),&param_1);
      FUN_0056be90(iVar1,local_8,uVar7,param_3);
      break;
    case 0x4b:
    case 0x4c:
    case 0x4d:
    case 0x4e:
    case 0x4f:
    case 0x50:
      uVar7 = FUN_00555b10(iVar2,*(undefined4 *)(param_2 + 8),&param_1);
      uVar5 = FUN_00555b10(iVar2,*(undefined4 *)(pbVar3 + 0xc),&local_c);
      FUN_00530a70(iVar2,*(undefined4 *)(pbVar3 + 8),*(undefined4 *)(pbVar3 + 0xc),local_8,uVar7,
                   uVar5,param_3,param_4);
    }
    FUN_00563fb0(iVar2,param_1);
    FUN_00563fb0(iVar2,local_c);
  }
  return;
}


/* FUN_005564b0 @ 005564b0  kind=lib  attributed-by=lib-island  size=49 */

undefined4 FUN_005564b0(undefined4 param_1)

{
  code *local_18;
  code *local_14;
  undefined4 local_8;
  
  local_8 = 1;
  local_18 = FUN_00536500;
  local_14 = FUN_00548960;
  FUN_00578680(&local_18,param_1);
  return local_8;
}


/* FUN_005564f0 @ 005564f0  kind=lib  attributed-by=lib-island  size=49 */

undefined4 FUN_005564f0(undefined4 param_1)

{
  code *local_18;
  code *local_14;
  undefined4 local_8;
  
  local_8 = 3;
  local_18 = FUN_00536500;
  local_14 = FUN_00548960;
  FUN_00578680(&local_18,param_1);
  return local_8;
}


/* FUN_00556530 @ 00556530  kind=lib  attributed-by=lib-island  size=108 */

undefined4 FUN_00556530(char *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if ((*(ushort *)(param_1 + 2) & 0x400) != 0) {
    *param_2 = *(int *)(param_1 + 4);
    return 1;
  }
  if (*param_1 == -100) {
    iVar1 = FUN_00556530(*(undefined4 *)(param_1 + 8),&param_1);
    if (iVar1 != 0) {
      *param_2 = -(int)param_1;
      uVar2 = 1;
    }
  }
  else if (*param_1 == -99) {
    uVar2 = FUN_00556530(*(undefined4 *)(param_1 + 8),param_2);
    return uVar2;
  }
  return uVar2;
}


/* FUN_005565a0 @ 005565a0  kind=lib  attributed-by=lib-island  size=174 */

uint * FUN_005565a0(undefined4 *param_1,uint *param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar2 = *param_1;
  if (param_2 == (uint *)0x0) {
    param_2 = (uint *)FUN_00552230(uVar2,0xc);
    if (param_2 != (uint *)0x0) {
      param_2[0] = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      uVar3 = FUN_00552230(uVar2,0x14);
      param_2[2] = uVar3;
      if (uVar3 != 0) goto LAB_00556620;
    }
LAB_00556604:
    FUN_00555e30(uVar2,param_3);
    FUN_00556700(uVar2,param_2);
    return (uint *)0x0;
  }
  uVar3 = *param_2;
  if ((uVar3 & uVar3 - 1) == 0) {
    uVar3 = FUN_00552390(uVar2,param_2[2],uVar3 * 0x28);
    if (uVar3 == 0) goto LAB_00556604;
    param_2[2] = uVar3;
  }
LAB_00556620:
  puVar1 = (undefined8 *)(param_2[2] + *param_2 * 0x14);
  *param_2 = *param_2 + 1;
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  *(undefined4 *)puVar1 = param_3;
  return param_2;
}


/* FUN_00556650 @ 00556650  kind=lib  attributed-by=lib-island  size=40 */

void FUN_00556650(int *param_1,int *param_2)

{
  if ((param_2 != (int *)0x0) && (*(int *)(*param_1 + 0x58) < *param_2)) {
    FUN_00553950();
    return;
  }
  return;
}


/* FUN_00556680 @ 00556680  kind=lib  attributed-by=lib-island  size=114 */

undefined4 FUN_00556680(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == (int *)0x0) {
    if (param_2 == (int *)0x0) {
      return 0;
    }
  }
  else if ((param_2 != (int *)0x0) && (*param_1 == *param_2)) {
    iVar2 = 0;
    if (0 < *param_1) {
      iVar3 = 0;
      do {
        if (*(char *)(param_1[2] + 0xc + iVar3) != *(char *)(param_2[2] + 0xc + iVar3)) {
          return 1;
        }
        iVar1 = FUN_00555cb0(*(undefined4 *)(param_1[2] + iVar3),*(undefined4 *)(param_2[2] + iVar3)
                            );
        if (iVar1 != 0) {
          return 1;
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x14;
      } while (iVar2 < *param_1);
    }
    return 0;
  }
  return 1;
}


/* FUN_00556700 @ 00556700  kind=lib  attributed-by=lib-island  size=221 */

void FUN_00556700(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (param_2 != (int *)0x0) {
    iVar3 = 0;
    puVar4 = (undefined4 *)param_2[2];
    if (0 < *param_2) {
      do {
        FUN_00555e30(param_1,*puVar4);
        puVar1 = (undefined4 *)puVar4[1];
        if (param_1 == 0) {
LAB_0055679f:
          FUN_00524410(puVar1);
        }
        else if (*(int *)(param_1 + 0x1f0) == 0) {
          if (((puVar1 == (undefined4 *)0x0) || (puVar1 < *(undefined4 **)(param_1 + 0x104))) ||
             (*(undefined4 **)(param_1 + 0x108) <= puVar1)) goto LAB_0055679f;
          *puVar1 = *(undefined4 *)(param_1 + 0x100);
          *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + -1;
          *(undefined4 **)(param_1 + 0x100) = puVar1;
        }
        else if (((puVar1 == (undefined4 *)0x0) || (puVar1 < *(undefined4 **)(param_1 + 0x104))) ||
                (*(undefined4 **)(param_1 + 0x108) <= puVar1)) {
          iVar2 = (*DAT_00766608._4_4_)(puVar1);
          **(int **)(param_1 + 0x1f0) = **(int **)(param_1 + 0x1f0) + iVar2;
        }
        else {
          **(int **)(param_1 + 0x1f0) =
               **(int **)(param_1 + 0x1f0) + (uint)*(ushort *)(param_1 + 0xe8);
        }
        FUN_005521a0(param_1,puVar4[2]);
        iVar3 = iVar3 + 1;
        puVar4 = puVar4 + 5;
      } while (iVar3 < *param_2);
    }
    FUN_005521a0(param_1,param_2[2]);
    FUN_005521a0(param_1,param_2);
  }
  return;
}


/* FUN_005567e0 @ 005567e0  kind=lib  attributed-by=lib-island  size=405 */

int * FUN_005567e0(undefined4 param_1,int *param_2,uint param_3)

{
  char cVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  char *pcVar7;
  size_t sVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int local_8;
  
  if (param_2 == (int *)0x0) {
    return (int *)0x0;
  }
  piVar3 = (int *)FUN_00552230(param_1,0xc);
  if (piVar3 != (int *)0x0) {
    piVar3[1] = 0;
    iVar4 = *param_2;
    *piVar3 = iVar4;
    if ((param_3 & 1) == 0) {
      iVar4 = 1;
      if (1 < *param_2) {
        do {
          iVar4 = iVar4 * 2;
        } while (iVar4 < *param_2);
      }
    }
    iVar4 = FUN_00552230(param_1,iVar4 * 0x14);
    piVar3[2] = iVar4;
    if (iVar4 != 0) {
      puVar10 = (undefined4 *)param_2[2];
      local_8 = 0;
      if (0 < *param_2) {
        puVar9 = (undefined4 *)(iVar4 + 8);
        iVar4 = iVar4 - (int)puVar10;
        do {
          uVar5 = FUN_00536250(param_1,*puVar10,param_3,0);
          *(undefined4 *)(iVar4 + (int)puVar10) = uVar5;
          pcVar2 = (char *)puVar10[1];
          if (pcVar2 == (char *)0x0) {
            pvVar6 = (void *)0x0;
          }
          else {
            cVar1 = *pcVar2;
            pcVar7 = pcVar2;
            while (cVar1 != '\0') {
              pcVar7 = pcVar7 + 1;
              cVar1 = *pcVar7;
            }
            sVar8 = ((int)pcVar7 - (int)pcVar2 & 0x3fffffffU) + 1;
            pvVar6 = (void *)FUN_00552230(param_1,sVar8);
            if (pvVar6 != (void *)0x0) {
              memcpy(pvVar6,pcVar2,sVar8);
            }
          }
          puVar9[-1] = pvVar6;
          pcVar2 = (char *)puVar10[2];
          if (pcVar2 == (char *)0x0) {
            pvVar6 = (void *)0x0;
          }
          else {
            cVar1 = *pcVar2;
            pcVar7 = pcVar2;
            while (cVar1 != '\0') {
              pcVar7 = pcVar7 + 1;
              cVar1 = *pcVar7;
            }
            sVar8 = ((int)pcVar7 - (int)pcVar2 & 0x3fffffffU) + 1;
            pvVar6 = (void *)FUN_00552230(param_1,sVar8);
            if (pvVar6 != (void *)0x0) {
              memcpy(pvVar6,pcVar2,sVar8);
            }
          }
          *puVar9 = pvVar6;
          *(undefined1 *)(puVar9 + 1) = *(undefined1 *)(puVar10 + 3);
          *(undefined1 *)((int)puVar9 + 5) = 0;
          *(undefined2 *)((int)puVar9 + 6) = *(undefined2 *)((int)puVar10 + 0xe);
          *(undefined2 *)(puVar9 + 2) = *(undefined2 *)(puVar10 + 4);
          local_8 = local_8 + 1;
          puVar9 = puVar9 + 5;
          puVar10 = puVar10 + 5;
        } while (local_8 < *param_2);
      }
      return piVar3;
    }
    FUN_005521a0(param_1,piVar3);
  }
  return (int *)0x0;
}


/* FUN_00556980 @ 00556980  kind=lib  attributed-by=lib-island  size=115 */

void FUN_00556980(undefined4 *param_1,int *param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  void *_Src;
  size_t _Size;
  void *_Dst;
  
  if (param_2 != (int *)0x0) {
    iVar1 = *param_2;
    iVar2 = param_2[2];
    _Src = (void *)*param_3;
    _Size = param_3[1];
    if (_Src == (void *)0x0) {
      _Dst = (void *)0x0;
    }
    else {
      _Dst = (void *)FUN_00552230(*param_1,_Size + 1);
      if (_Dst != (void *)0x0) {
        memcpy(_Dst,_Src,_Size);
        *(undefined1 *)((int)_Dst + _Size) = 0;
      }
    }
    *(void **)(iVar2 + iVar1 * 0x14 + -0x10) = _Dst;
    if ((param_4 != 0) && (_Dst != (void *)0x0)) {
      FUN_00552be0(_Dst);
    }
  }
  return;
}


/* FUN_00556a00 @ 00556a00  kind=lib  attributed-by=lib-island  size=120 */

void FUN_00556a00(undefined4 *param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  void *_Src;
  void *_Dst;
  size_t _Size;
  
  uVar2 = *param_1;
  if (param_2 != (int *)0x0) {
    iVar1 = param_2[2] + *param_2 * 0x14;
    FUN_005521a0(uVar2,*(undefined4 *)(iVar1 + -0xc));
    _Src = *(void **)(param_3 + 4);
    _Size = *(int *)(param_3 + 8) - (int)_Src;
    if (_Src == (void *)0x0) {
      *(undefined4 *)(iVar1 + -0xc) = 0;
      return;
    }
    _Dst = (void *)FUN_00552230(uVar2,_Size + 1);
    if (_Dst != (void *)0x0) {
      memcpy(_Dst,_Src,_Size);
      *(undefined1 *)((int)_Dst + _Size) = 0;
    }
    *(void **)(iVar1 + -0xc) = _Dst;
  }
  return;
}


/* FUN_00556a80 @ 00556a80  kind=lib  attributed-by=lib-island  size=106 */

bool FUN_00556a80(char *param_1,char param_2)

{
  char cVar1;
  bool bVar2;
  
  if (param_2 != 'b') {
    for (; (*param_1 == -99 || (*param_1 == -100)); param_1 = *(char **)(param_1 + 8)) {
    }
    cVar1 = *param_1;
    if (cVar1 == -0x7c) {
      cVar1 = param_1[0x23];
    }
    switch(cVar1) {
    case '^':
      return param_2 == 'a';
    default:
      goto switchD_00556abf_caseD_5f;
    case -0x7e:
      bVar2 = param_2 == 'e';
      break;
    case -0x7d:
      goto switchD_00556abf_caseD_83;
    case -0x68:
      if (-1 < *(short *)(param_1 + 0x1c)) {
        return false;
      }
    case -0x7f:
      bVar2 = param_2 == 'd';
    }
    if ((!bVar2) && (param_2 != 'c')) {
switchD_00556abf_caseD_5f:
      return false;
    }
  }
switchD_00556abf_caseD_83:
  return true;
}


/* FUN_00556b40 @ 00556b40  kind=lib  attributed-by=lib-island  size=47 */

void FUN_00556b40(int *param_1,int param_2)

{
  FUN_00536750(param_2);
  if (*(int *)(*param_1 + 0x5c) < *(int *)(param_2 + 0x14)) {
    FUN_00553950(param_1,"Expression tree is too large (maximum depth %d)",*(int *)(*param_1 + 0x5c)
                );
  }
  return;
}


/* FUN_00556b70 @ 00556b70  kind=lib  attributed-by=lib-island  size=37 */

void FUN_00556b70(char *param_1)

{
  for (; (param_1 != (char *)0x0 && ((*param_1 == '\\' || (*param_1 == '\x18'))));
      param_1 = *(char **)(param_1 + 8)) {
  }
  return;
}


/* FUN_00556ba0 @ 00556ba0  kind=lib  attributed-by=lib-island  size=58 */

int FUN_00556ba0(int param_1,byte param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_3 == 0) {
    iVar1 = *(int *)(param_1 + 8);
  }
  else {
    iVar1 = FUN_00537090(param_1,param_3,param_4);
  }
  if (iVar1 != 0) {
    return iVar1 + ((uint)param_2 * 5 + -5) * 4;
  }
  return 0;
}


/* FUN_00556be0 @ 00556be0  kind=lib  attributed-by=lib-island  size=118 */

int FUN_00556be0(int param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  int iVar8;
  
  if (param_2 == (char *)0x0) {
    return -1;
  }
  cVar1 = *param_2;
  pcVar7 = param_2;
  while (cVar1 != '\0') {
    pcVar7 = pcVar7 + 1;
    cVar1 = *pcVar7;
  }
  iVar8 = *(int *)(param_1 + 0x14) + -1;
  puVar6 = (undefined4 *)(iVar8 * 0x10 + *(int *)(param_1 + 0x10));
  while( true ) {
    if (iVar8 < 0) {
      return iVar8;
    }
    pcVar2 = (char *)*puVar6;
    uVar4 = 0;
    if (pcVar2 != (char *)0x0) {
      cVar1 = *pcVar2;
      pcVar3 = pcVar2;
      while (cVar1 != '\0') {
        pcVar3 = pcVar3 + 1;
        cVar1 = *pcVar3;
      }
      uVar4 = (int)pcVar3 - (int)pcVar2 & 0x3fffffff;
    }
    if ((((int)pcVar7 - (int)param_2 & 0x3fffffffU) == uVar4) &&
       (iVar5 = FUN_0057a2c0(pcVar2,param_2), iVar5 == 0)) break;
    puVar6 = puVar6 + -4;
    iVar8 = iVar8 + -1;
  }
  return iVar8;
}


/* FUN_00556c60 @ 00556c60  kind=lib  attributed-by=lib-island  size=491 */

short * FUN_00556c60(int param_1,byte *param_2,size_t param_3,int param_4,byte param_5,char param_6)

{
  short sVar1;
  short *psVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  short *_Dst;
  uint local_8;
  
  iVar4 = (int)((byte)(&DAT_007120d8)[*param_2] + param_3) % 0x17;
  uVar5 = 0;
  _Dst = (short *)0x0;
  local_8 = 0;
  for (psVar2 = (short *)FUN_00539a30(param_1 + 0x140,iVar4,param_2,param_3); psVar2 != (short *)0x0
      ; psVar2 = *(short **)(psVar2 + 4)) {
    if (param_4 == -2) {
      if ((*(int *)(psVar2 + 6) == 0) && (*(int *)(psVar2 + 8) == 0)) {
        uVar3 = 0;
      }
      else {
        uVar3 = 6;
      }
    }
    else {
      sVar1 = *psVar2;
      if ((sVar1 == param_4) || (sVar1 < 0)) {
        uVar3 = 1;
        if (sVar1 == param_4) {
          uVar3 = 4;
        }
        uVar5 = local_8;
        if (param_5 == *(byte *)(psVar2 + 1)) {
          uVar3 = uVar3 + 2;
        }
        else if ((*(byte *)(psVar2 + 1) & param_5 & 2) != 0) {
          uVar3 = uVar3 + 1;
        }
      }
      else {
        uVar3 = 0;
      }
    }
    if (uVar5 < uVar3) {
      uVar5 = uVar3;
      _Dst = psVar2;
      local_8 = uVar3;
    }
  }
  if (param_6 == '\0') {
    if ((_Dst == (short *)0x0) || ((*(uint *)(param_1 + 0x18) & 0x100000) != 0)) {
      uVar5 = 0;
      for (psVar2 = (short *)FUN_00539a30(&DAT_0076b4b0,iVar4,param_2,param_3);
          psVar2 != (short *)0x0; psVar2 = *(short **)(psVar2 + 4)) {
        if (param_4 == -2) {
          if ((*(int *)(psVar2 + 6) == 0) && (*(int *)(psVar2 + 8) == 0)) {
            uVar3 = 0;
          }
          else {
            uVar3 = 6;
          }
        }
        else {
          sVar1 = *psVar2;
          if ((sVar1 == param_4) || (sVar1 < 0)) {
            uVar3 = 1;
            if (sVar1 == param_4) {
              uVar3 = 4;
            }
            if (param_5 == *(byte *)(psVar2 + 1)) {
              uVar3 = uVar3 + 2;
            }
            else if ((*(byte *)(psVar2 + 1) & param_5 & 2) != 0) {
              uVar3 = uVar3 + 1;
            }
          }
          else {
            uVar3 = 0;
          }
        }
        if (uVar5 < uVar3) {
          uVar5 = uVar3;
          _Dst = psVar2;
        }
      }
    }
  }
  else if (uVar5 < 6) {
    _Dst = (short *)FUN_00552230(param_1,param_3 + 0x25);
    if (_Dst == (short *)0x0) {
      return (short *)0x0;
    }
    memset(_Dst,0,param_3 + 0x25);
    if (_Dst == (short *)0x0) {
      return (short *)0x0;
    }
    *(short **)(_Dst + 0xc) = _Dst + 0x12;
    *_Dst = (short)param_4;
    *(byte *)(_Dst + 1) = param_5;
    memcpy(_Dst + 0x12,param_2,param_3);
    *(undefined1 *)(param_3 + *(int *)(_Dst + 0xc)) = 0;
    FUN_005587a0(param_1 + 0x140,_Dst);
  }
  if ((_Dst != (short *)0x0) &&
     (((*(int *)(_Dst + 8) != 0 || (*(int *)(_Dst + 6) != 0)) || (param_6 != '\0')))) {
    return _Dst;
  }
  return (short *)0x0;
}


/* FUN_00556e50 @ 00556e50  kind=lib  attributed-by=lib-island  size=822 */

int FUN_00556e50(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  int local_14;
  int local_8;
  
  iVar1 = param_1[0x12];
  param_1[0x12] = iVar1 + 1;
  local_14 = param_1[2];
  local_8 = 0;
  if (local_14 == 0) {
    local_14 = FUN_0056c7b0(*param_1);
    param_1[2] = local_14;
    if (local_14 != 0) {
      FUN_0056bdc0(local_14,0x94);
    }
  }
  if ((*(ushort *)(param_2 + 2) & 0x800) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(param_2 + 0x10);
  }
  if (param_1[0x11] == 0) {
    uVar15 = FUN_0053c0e0(uVar4);
    piVar11 = (int *)((ulonglong)uVar15 >> 0x20);
    if ((int)uVar15 != 0) {
      iVar13 = *param_1;
      puVar2 = *(undefined4 **)(piVar11[10] + 0x18);
      iVar12 = **(int **)(*piVar11 + 8);
      iVar3 = (int)*(short *)(iVar12 + 0x1c);
      uVar4 = FUN_00565260(iVar13,puVar2[0x10]);
      FUN_00550aa0(param_1,uVar4);
      FUN_005681e0(param_1,uVar4,puVar2[8],0,*puVar2);
      if (iVar3 < 0) {
        uVar5 = FUN_00550380(param_1);
        FUN_0055e5f0(param_1,iVar1,uVar4,puVar2,0x27);
        iVar12 = 1;
        if ((-1 < (int)uVar5) && (uVar5 < *(uint *)(local_14 + 0x1c))) {
          *(uint *)(*(int *)(local_14 + 4) + 8 + uVar5 * 0x14) = *(uint *)(local_14 + 0x1c);
          *(int *)(param_2 + 0x18) = iVar1;
          return 1;
        }
LAB_005570a1:
        *(int *)(param_2 + 0x18) = iVar1;
        return iVar12;
      }
      iVar6 = FUN_0054bcc0(param_1,*(undefined4 *)(param_2 + 8),iVar12);
      iVar7 = FUN_0055b1e0(param_2,*(undefined1 *)(puVar2[1] + 0x15 + iVar3 * 0x18));
      iVar14 = puVar2[2];
      if (iVar14 != 0) {
        iVar12 = 0;
        do {
          if (iVar12 != 0) goto LAB_005570a1;
          if (iVar7 == 0) goto LAB_005570b3;
          if (((**(int **)(iVar14 + 4) == iVar3) &&
              (iVar8 = FUN_00556ba0(iVar13,*(undefined1 *)
                                            (*(int *)(*(int *)(iVar13 + 0x10) + 0xc) + 0x4d),
                                    **(undefined4 **)(iVar14 + 0x20),0), iVar12 = local_8,
              iVar8 == iVar6)) &&
             ((param_3 != (int *)0x0 ||
              ((*(int *)(iVar14 + 0x24) == 1 && (*(char *)(iVar14 + 0x2c) != '\0')))))) {
            uVar9 = FUN_0055b2a0(param_1,iVar14);
            uVar10 = FUN_00550380(param_1);
            FUN_0056bf50(local_14,0x27,iVar1,*(undefined4 *)(iVar14 + 0x28),uVar4,uVar9,0xfffffff0);
            local_8 = 3;
            FUN_00573d80(local_14,uVar10);
            if (param_3 == (int *)0x0) {
              iVar12 = 3;
            }
            else {
              iVar12 = local_8;
              if (*(char *)(puVar2[1] + 0x14 + iVar3 * 0x18) == '\0') {
                iVar8 = param_1[0x13] + 1;
                param_1[0x13] = iVar8;
                *param_3 = iVar8;
                FUN_0056be90(local_14,10,0,iVar8);
              }
            }
          }
          iVar14 = *(int *)(iVar14 + 0x14);
        } while (iVar14 != 0);
        if (iVar12 != 0) goto LAB_005570a1;
      }
    }
  }
LAB_005570b3:
  uVar15 = *(undefined8 *)(param_1 + 0x6e);
  iVar13 = 0;
  iVar1 = 2;
  iVar12 = iVar1;
  if (param_3 == (int *)0x0) {
    param_1[0x6e] = 0;
    param_1[0x6f] = 0x3ff00000;
    iVar12 = 2;
    if ((*(short *)(*(int *)(param_2 + 8) + 0x1c) < 0) &&
       (iVar12 = iVar1, (*(ushort *)(param_2 + 2) & 0x800) == 0)) {
      iVar12 = 1;
    }
  }
  else {
    param_1[0x13] = param_1[0x13] + 1;
    iVar13 = param_1[0x13];
    *param_3 = iVar13;
    iVar1 = *(int *)(local_14 + 0x1c);
    if ((iVar1 < *(int *)(local_14 + 0x20)) || (iVar3 = FUN_0053b4b0(local_14), iVar3 == 0)) {
      *(int *)(local_14 + 0x1c) = *(int *)(local_14 + 0x1c) + 1;
      iVar3 = *(int *)(local_14 + 4);
      *(undefined2 *)(iVar3 + iVar1 * 0x14) = 10;
      *(undefined1 *)(iVar3 + 3 + iVar1 * 0x14) = 0;
      *(undefined4 *)(iVar3 + 4 + iVar1 * 0x14) = 0;
      *(int *)(iVar3 + 8 + iVar1 * 0x14) = iVar13;
      *(undefined4 *)(iVar3 + 0xc + iVar1 * 0x14) = 0;
      *(undefined4 *)(iVar3 + 0x10 + iVar1 * 0x14) = 0;
    }
  }
  FUN_005505a0(param_1,param_2,iVar13,iVar12 == 1);
  *(undefined8 *)(param_1 + 0x6e) = uVar15;
  return iVar12;
}


/* FUN_00557190 @ 00557190  kind=lib  attributed-by=lib-island  size=310 */

int FUN_00557190(int param_1,byte *param_2,byte *param_3)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  uint local_c;
  int local_8;
  
  local_8 = 0;
  uVar10 = 0;
  if (param_2 != (byte *)0x0) {
    bVar2 = *param_2;
    pbVar9 = param_2;
    while (bVar2 != 0) {
      pbVar9 = pbVar9 + 1;
      bVar2 = *pbVar9;
    }
    uVar10 = (int)pbVar9 - (int)param_2 & 0x3fffffff;
  }
  iVar3 = *(int *)(param_1 + 0x14);
  local_c = 0;
  iVar6 = 0;
  if (0 < iVar3) {
    iVar4 = *(int *)(param_1 + 0x10);
    do {
      uVar5 = local_c;
      if ((int)local_c < 2) {
        uVar5 = local_c ^ 1;
      }
      iVar6 = *(int *)(uVar5 * 0x10 + 0xc + iVar4);
      if (param_3 == (byte *)0x0) {
LAB_0055724b:
        puVar7 = (uint *)(iVar6 + 0x18);
        if (*(int *)(iVar6 + 0x24) == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = 0;
          uVar11 = uVar10;
          pbVar9 = param_2;
          if (uVar10 != 0) {
            do {
              uVar11 = uVar11 - 1;
              uVar5 = uVar5 ^ (uint)(byte)(&DAT_007120d8)[*pbVar9] ^ uVar5 * 8;
              pbVar9 = pbVar9 + 1;
            } while (0 < (int)uVar11);
          }
          uVar5 = uVar5 % *puVar7;
        }
        iVar6 = FUN_00537190(puVar7,param_2,uVar10,uVar5);
        if (iVar6 == 0) {
          local_8 = 0;
        }
        else {
          local_8 = *(int *)(iVar6 + 8);
          if (local_8 != 0) {
            return local_8;
          }
        }
      }
      else {
        pbVar9 = *(byte **)(uVar5 * 0x10 + iVar4);
        bVar2 = *param_3;
        pbVar8 = param_3;
        while ((bVar2 != 0 && ((&DAT_007120d8)[bVar2] == (&DAT_007120d8)[*pbVar9]))) {
          pbVar1 = pbVar8 + 1;
          pbVar8 = pbVar8 + 1;
          pbVar9 = pbVar9 + 1;
          bVar2 = *pbVar1;
        }
        if ((&DAT_007120d8)[*pbVar8] == (&DAT_007120d8)[*pbVar9]) goto LAB_0055724b;
      }
      local_c = local_c + 1;
      iVar6 = local_8;
    } while ((int)local_c < iVar3);
  }
  return iVar6;
}


/* FUN_005572d0 @ 005572d0  kind=lib  attributed-by=lib-island  size=311 */

int FUN_005572d0(int param_1,byte *param_2,byte *param_3)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint local_c;
  int local_8;
  
  local_8 = 0;
  uVar8 = 0;
  if (param_2 != (byte *)0x0) {
    bVar2 = *param_2;
    pbVar7 = param_2;
    while (bVar2 != 0) {
      pbVar7 = pbVar7 + 1;
      bVar2 = *pbVar7;
    }
    uVar8 = (int)pbVar7 - (int)param_2 & 0x3fffffff;
  }
  iVar3 = *(int *)(param_1 + 0x14);
  local_c = 0;
  iVar4 = 0;
  if (0 < iVar3) {
    do {
      uVar10 = local_c;
      if ((int)local_c < 2) {
        uVar10 = local_c ^ 1;
      }
      if (param_3 == (byte *)0x0) {
LAB_0055737f:
        iVar4 = *(int *)(*(int *)(param_1 + 0x10) + 0xc + uVar10 * 0x10);
        puVar5 = (uint *)(iVar4 + 8);
        if (*(int *)(iVar4 + 0x14) == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = 0;
          uVar9 = uVar8;
          pbVar7 = param_2;
          if (uVar8 != 0) {
            do {
              uVar9 = uVar9 - 1;
              uVar10 = uVar10 ^ (uint)(byte)(&DAT_007120d8)[*pbVar7] ^ uVar10 * 8;
              pbVar7 = pbVar7 + 1;
            } while (0 < (int)uVar9);
          }
          uVar10 = uVar10 % *puVar5;
        }
        iVar4 = FUN_00537190(puVar5,param_2,uVar8,uVar10);
        if (iVar4 == 0) {
          local_8 = 0;
        }
        else {
          local_8 = *(int *)(iVar4 + 8);
          if (local_8 != 0) {
            return local_8;
          }
        }
      }
      else {
        pbVar7 = *(byte **)(*(int *)(param_1 + 0x10) + uVar10 * 0x10);
        bVar2 = *param_3;
        pbVar6 = param_3;
        while ((bVar2 != 0 && ((&DAT_007120d8)[bVar2] == (&DAT_007120d8)[*pbVar7]))) {
          pbVar1 = pbVar6 + 1;
          pbVar6 = pbVar6 + 1;
          pbVar7 = pbVar7 + 1;
          bVar2 = *pbVar1;
        }
        if ((&DAT_007120d8)[*pbVar6] == (&DAT_007120d8)[*pbVar7]) goto LAB_0055737f;
      }
      local_c = local_c + 1;
      iVar4 = local_8;
    } while ((int)local_c < iVar3);
  }
  return iVar4;
}


/* FUN_00557410 @ 00557410  kind=lib  attributed-by=lib-island  size=730 */

void FUN_00557410(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *local_10;
  int local_c;
  uint local_8;
  
  iVar1 = *param_1;
  if (*(char *)(iVar1 + 0x38) != '\0') {
    return;
  }
  if (*(char *)((int)param_1 + 0x12) != '\0') {
    return;
  }
  if (param_1[0x11] != 0) {
    return;
  }
  piVar3 = (int *)FUN_0055ab80(param_1);
  if (piVar3 != (int *)0x0) {
    FUN_0056bdc0(piVar3,6);
    if (0 < param_1[0x57]) {
      FUN_00573d80(piVar3,param_1[0x57] + -1);
      iVar6 = 0;
      local_8 = 1;
      if (0 < *(int *)(iVar1 + 0x14)) {
        local_10 = param_1 + 0x58;
        local_c = 0;
        do {
          if ((param_1[0x56] & local_8) != 0) {
            FUN_00576ba0(piVar3,iVar6);
            FUN_0056be90(piVar3,0x23,iVar6,(param_1[0x55] & local_8) != 0);
            if (*(char *)(iVar1 + 0x81) == '\0') {
              FUN_0056bef0(piVar3,0x26,iVar6,*local_10,
                           *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0xc + local_c) + 4));
            }
          }
          local_10 = local_10 + 1;
          local_8 = local_8 * 2;
          iVar6 = iVar6 + 1;
          local_c = local_c + 0x10;
        } while (iVar6 < *(int *)(iVar1 + 0x14));
      }
      local_10 = (int *)0x0;
      if (0 < param_1[0x76]) {
        do {
          for (piVar2 = *(int **)(*(int *)(param_1[0x88] + (int)local_10 * 4) + 0x38);
              (piVar2 != (int *)0x0 && (*piVar2 != iVar1)); piVar2 = (int *)piVar2[6]) {
          }
          iVar6 = piVar3[7];
          if ((iVar6 < piVar3[8]) || (iVar4 = FUN_0053b4b0(piVar3), iVar4 == 0)) {
            iVar4 = piVar3[1];
            piVar3[7] = piVar3[7] + 1;
            *(undefined2 *)(iVar4 + iVar6 * 0x14) = 0x84;
            *(undefined1 *)(iVar4 + 3 + iVar6 * 0x14) = 0;
            *(undefined4 *)(iVar4 + 4 + iVar6 * 0x14) = 0;
            *(undefined4 *)(iVar4 + 8 + iVar6 * 0x14) = 0;
            *(undefined4 *)(iVar4 + 0xc + iVar6 * 0x14) = 0;
            *(undefined4 *)(iVar4 + 0x10 + iVar6 * 0x14) = 0;
          }
          else {
            iVar6 = 1;
          }
          if ((piVar3[1] != 0) && (*(char *)(*piVar3 + 0x38) == '\0')) {
            if (iVar6 < 0) {
              iVar6 = piVar3[7] + -1;
            }
            iVar4 = piVar3[1] + iVar6 * 0x14;
            FUN_00539320(*piVar3,(int)*(char *)(piVar3[1] + 1 + iVar6 * 0x14),
                         *(undefined4 *)(piVar3[1] + 0x10 + iVar6 * 0x14));
            *(undefined4 *)(iVar4 + 0x10) = 0;
            if (piVar2 == (int *)0x0) {
              *(undefined4 *)(iVar4 + 0x10) = 0;
              *(undefined1 *)(iVar4 + 1) = 0;
            }
            else {
              *(int **)(iVar4 + 0x10) = piVar2;
              *(undefined1 *)(iVar4 + 1) = 0xf6;
              piVar2[3] = piVar2[3] + 1;
            }
          }
          local_10 = (int *)((int)local_10 + 1);
        } while ((int)local_10 < param_1[0x76]);
      }
      param_1[0x76] = 0;
      FUN_00532250(param_1);
      FUN_0054ae60(param_1);
      iVar6 = piVar3[7];
      iVar4 = param_1[0x57];
      if ((iVar6 < piVar3[8]) || (iVar5 = FUN_0053b4b0(piVar3), iVar5 == 0)) {
        iVar5 = piVar3[1];
        piVar3[7] = piVar3[7] + 1;
        *(undefined2 *)(iVar5 + iVar6 * 0x14) = 1;
        *(undefined1 *)(iVar5 + 3 + iVar6 * 0x14) = 0;
        *(undefined4 *)(iVar5 + 4 + iVar6 * 0x14) = 0;
        *(int *)(iVar5 + 8 + iVar6 * 0x14) = iVar4;
        *(undefined4 *)(iVar5 + 0xc + iVar6 * 0x14) = 0;
        *(undefined4 *)(iVar5 + 0x10 + iVar6 * 0x14) = 0;
      }
    }
    if ((param_1[0x11] == 0) && (*(char *)(iVar1 + 0x38) == '\0')) {
      if ((param_1[0x6b] != 0) && (param_1[0x12] == 0)) {
        param_1[0x12] = 1;
      }
      FUN_00574250(piVar3,param_1);
      param_1[3] = 0x65;
      *(undefined1 *)(param_1 + 4) = 0;
      goto LAB_005576b0;
    }
  }
  param_1[3] = 1;
LAB_005576b0:
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x73] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  return;
}


/* FUN_005576f0 @ 005576f0  kind=lib  attributed-by=lib-string  size=602 */

void FUN_005576f0(int *param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined8 uVar8;
  int *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  char *local_24;
  char **local_20;
  char *local_1c;
  uint local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  puVar6 = (undefined4 *)param_1[0x80];
  iVar7 = *param_1;
  param_1[0x80] = 0;
  local_10 = iVar7;
  if (param_1[0x11] == 0) {
    if (puVar6 == (undefined4 *)0x0) {
      FUN_00552b20(iVar7,param_2);
      return;
    }
    local_c = *puVar6;
    local_8 = FUN_00565260(iVar7,puVar6[5]);
    puVar6[7] = param_2;
    for (; param_2 != 0; param_2 = *(int *)(param_2 + 0x20)) {
      *(undefined4 **)(param_2 + 4) = puVar6;
    }
    local_1c = (char *)*puVar6;
    local_18 = 0;
    if (local_1c != (char *)0x0) {
      cVar1 = *local_1c;
      pcVar2 = local_1c;
      while (cVar1 != '\0') {
        pcVar2 = pcVar2 + 1;
        cVar1 = *pcVar2;
      }
      local_18 = (int)pcVar2 - (int)local_1c & 0x3fffffff;
    }
    param_2 = 0;
    if ((-1 < local_8) && (local_8 != 1)) {
      local_30 = param_1;
      local_28 = *(undefined4 *)(*(int *)(*param_1 + 0x10) + local_8 * 0x10);
      local_2c = *(undefined4 *)(*(int *)(*param_1 + 0x10) + 0xc + local_8 * 0x10);
      local_20 = &local_1c;
      local_24 = "trigger";
      iVar3 = FUN_00557bd0(&local_30,puVar6[7]);
      if (iVar3 != 0) goto LAB_005578ff;
    }
    if (*(char *)(iVar7 + 0x81) == '\0') {
      local_14 = FUN_0055ab80(param_1);
      if (local_14 != 0) {
        FUN_0054bc80(param_1,0,local_8);
        uVar4 = FUN_005524a0(iVar7,*param_3,param_3[1]);
        pcVar2 = "sqlite_temp_master";
        if (local_8 != 1) {
          pcVar2 = "sqlite_master";
        }
        FUN_0055e450(param_1,"INSERT INTO %Q.%s VALUES(\'trigger\',%Q,%Q,0,\'CREATE TRIGGER %q\')",
                     *(undefined4 *)(*(int *)(local_10 + 0x10) + local_8 * 0x10),pcVar2,local_c,
                     puVar6[1],uVar4);
        iVar7 = local_10;
        FUN_005521a0(local_10,uVar4);
        FUN_0054f7b0(param_1,local_8);
        uVar4 = FUN_0055d980(iVar7,"type=\'trigger\' AND name=\'%q\'",local_c);
        FUN_0056c120(local_14,local_8,uVar4);
        if (*(char *)(iVar7 + 0x81) != '\0') goto LAB_0055786f;
      }
    }
    else {
LAB_0055786f:
      uVar4 = local_c;
      uVar8 = FUN_00568070(local_c,puVar6);
      puVar5 = (undefined4 *)FUN_0055ada0((int)((ulonglong)uVar8 >> 0x20),uVar4,(int)uVar8);
      if (puVar5 == (undefined4 *)0x0) {
        if (puVar6[5] == puVar6[6]) {
          uVar8 = FUN_00568070(puVar6[1]);
          iVar3 = FUN_0055ad50(puVar6[6] + 8,(int)((ulonglong)uVar8 >> 0x20),(int)uVar8);
          puVar6[8] = *(undefined4 *)(iVar3 + 0x3c);
          *(undefined4 **)(iVar3 + 0x3c) = puVar6;
          FUN_00552b20(iVar7,0);
          return;
        }
        goto LAB_00557939;
      }
      *(undefined1 *)(iVar7 + 0x38) = 1;
      puVar6 = puVar5;
    }
  }
LAB_005578ff:
  if (puVar6 != (undefined4 *)0x0) {
    FUN_00552b20(iVar7,puVar6[7]);
    FUN_005521a0(iVar7,*puVar6);
    FUN_005521a0(iVar7,puVar6[1]);
    FUN_00555e30(iVar7,puVar6[3]);
    FUN_0055afc0(iVar7,puVar6[4]);
    FUN_005521a0(iVar7,puVar6);
  }
LAB_00557939:
  FUN_00552b20(iVar7,param_2);
  return;
}


/* FUN_00557950 @ 00557950  kind=lib  attributed-by=lib-island  size=147 */

undefined4 FUN_00557950(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  while( true ) {
    if ((param_2 == 0) || ((*(ushort *)(param_2 + 2) & 0x4000) != 0)) {
      return 0;
    }
    if ((*(ushort *)(param_2 + 2) & 0x800) == 0) {
      piVar1 = *(int **)(param_2 + 0x10);
      if (piVar1 != (int *)0x0) {
        puVar4 = (undefined4 *)piVar1[2];
        iVar2 = 0;
        if (0 < *piVar1) {
          do {
            iVar3 = FUN_00557950(param_1,*puVar4);
            if (iVar3 != 0) {
              return 1;
            }
            iVar2 = iVar2 + 1;
            puVar4 = puVar4 + 5;
          } while (iVar2 < *piVar1);
        }
      }
    }
    else {
      iVar2 = FUN_00557a40(param_1,*(undefined4 *)(param_2 + 0x10));
      if (iVar2 != 0) {
        return 1;
      }
    }
    iVar2 = FUN_00557950(param_1,*(undefined4 *)(param_2 + 0xc));
    if (iVar2 != 0) break;
    param_2 = *(int *)(param_2 + 8);
  }
  return 1;
}


/* FUN_005579f0 @ 005579f0  kind=lib  attributed-by=lib-island  size=72 */

undefined4
FUN_005579f0(undefined4 *param_1,int *param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  
  if ((-1 < param_3) && (param_3 != 1)) {
    iVar1 = *param_2;
    *param_1 = param_2;
    param_1[2] = *(undefined4 *)(*(int *)(iVar1 + 0x10) + param_3 * 0x10);
    param_1[1] = *(undefined4 *)(*(int *)(iVar1 + 0x10) + 0xc + param_3 * 0x10);
    param_1[3] = param_4;
    param_1[4] = param_5;
    return 1;
  }
  return 0;
}


/* FUN_00557a40 @ 00557a40  kind=lib  attributed-by=lib-island  size=142 */

undefined4 FUN_00557a40(undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  while( true ) {
    if (param_2 == (undefined4 *)0x0) {
      return 0;
    }
    piVar1 = (int *)*param_2;
    if (piVar1 != (int *)0x0) {
      puVar4 = (undefined4 *)piVar1[2];
      iVar3 = 0;
      if (0 < *piVar1) {
        do {
          iVar2 = FUN_00557950(param_1,*puVar4);
          if (iVar2 != 0) {
            return 1;
          }
          iVar3 = iVar3 + 1;
          puVar4 = puVar4 + 5;
        } while (iVar3 < *piVar1);
      }
    }
    iVar3 = FUN_00557ad0(param_1,param_2[10]);
    if (((iVar3 != 0) || (iVar3 = FUN_00557950(param_1,param_2[0xb]), iVar3 != 0)) ||
       (iVar3 = FUN_00557950(param_1,param_2[0xd]), iVar3 != 0)) break;
    param_2 = (undefined4 *)param_2[0xf];
  }
  return 1;
}


/* FUN_00557ad0 @ 00557ad0  kind=lib  attributed-by=lib-island  size=248 */

undefined4 FUN_00557ad0(undefined4 *param_1,short *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  byte bVar4;
  byte *pbVar5;
  byte *pbVar6;
  short *psVar7;
  int local_8;
  
  if (param_2 == (short *)0x0) {
    return 0;
  }
  pbVar1 = (byte *)param_1[2];
  local_8 = 0;
  psVar7 = param_2 + 4;
  if (0 < *param_2) {
    do {
      pbVar2 = *(byte **)(psVar7 + 2);
      pbVar5 = pbVar2;
      if (pbVar2 != (byte *)0x0) {
        bVar4 = *pbVar2;
        pbVar6 = pbVar1;
        if (bVar4 != 0) {
          do {
            if ((&DAT_007120d8)[bVar4] != (&DAT_007120d8)[*pbVar6]) break;
            bVar4 = pbVar2[1];
            pbVar2 = pbVar2 + 1;
            pbVar6 = pbVar6 + 1;
          } while (bVar4 != 0);
          pbVar5 = *(byte **)(psVar7 + 2);
        }
        if ((&DAT_007120d8)[*pbVar2] != (&DAT_007120d8)[*pbVar6]) {
          FUN_00553950(*param_1,"%s %T cannot reference objects in database %s",param_1[3],
                       param_1[4],*(undefined4 *)(psVar7 + 2));
          return 1;
        }
      }
      FUN_005521a0(*(undefined4 *)*param_1,pbVar5);
      psVar7[2] = 0;
      psVar7[3] = 0;
      *(undefined4 *)psVar7 = param_1[1];
      iVar3 = FUN_00557a40(param_1,*(undefined4 *)(psVar7 + 10));
      if ((iVar3 != 0) || (iVar3 = FUN_00557950(param_1,*(undefined4 *)(psVar7 + 0x18)), iVar3 != 0)
         ) {
        return 1;
      }
      local_8 = local_8 + 1;
      psVar7 = psVar7 + 0x24;
    } while (local_8 < *param_2);
  }
  return 0;
}


/* FUN_00557bd0 @ 00557bd0  kind=lib  attributed-by=lib-island  size=122 */

undefined4 FUN_00557bd0(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  while( true ) {
    if (param_2 == 0) {
      return 0;
    }
    iVar2 = FUN_00557a40(param_1,*(undefined4 *)(param_2 + 8));
    if ((iVar2 != 0) || (iVar2 = FUN_00557950(param_1,*(undefined4 *)(param_2 + 0x14)), iVar2 != 0))
    break;
    piVar1 = *(int **)(param_2 + 0x18);
    if (piVar1 != (int *)0x0) {
      puVar4 = (undefined4 *)piVar1[2];
      iVar2 = 0;
      if (0 < *piVar1) {
        do {
          iVar3 = FUN_00557950(param_1,*puVar4);
          if (iVar3 != 0) {
            return 1;
          }
          iVar2 = iVar2 + 1;
          puVar4 = puVar4 + 5;
        } while (iVar2 < *piVar1);
      }
    }
    param_2 = *(int *)(param_2 + 0x20);
  }
  return 1;
}


/* FUN_00557c50 @ 00557c50  kind=lib  attributed-by=lib-island  size=86 */

void FUN_00557c50(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  if ((*(uint *)(*param_1 + 0x18) & 0x40000) != 0) {
    for (iVar1 = FUN_00558520(param_2); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
      iVar2 = FUN_00537450(param_1,param_2,iVar1,param_3);
      if (iVar2 != 0) {
        FUN_00550470(param_1,iVar2,param_2,param_4,2,0);
      }
    }
  }
  return;
}


/* FUN_00557cc0 @ 00557cc0  kind=lib  attributed-by=lib-island  size=1253 */

void FUN_00557cc0(int *param_1,undefined4 *param_2,int param_3,int param_4)

{
  byte bVar1;
  short sVar2;
  undefined4 uVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  short *psVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  byte *pbVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint local_28;
  uint local_24;
  byte *local_20;
  uint *local_1c;
  uint local_18;
  int local_14;
  uint *local_10;
  int local_c;
  int local_8;
  
  local_8 = *param_1;
  local_24 = (uint)*(byte *)((int)param_1 + 0x1ca);
  if ((*(uint *)(local_8 + 0x18) & 0x40000) != 0) {
    local_c = -1000000;
    if (param_2[0x10] != 0) {
      iVar16 = 0;
      local_c = 0;
      if (0 < *(int *)(local_8 + 0x14)) {
        piVar6 = (int *)(*(int *)(local_8 + 0x10) + 0xc);
        do {
          local_c = iVar16;
          if (*piVar6 == param_2[0x10]) break;
          iVar16 = iVar16 + 1;
          piVar6 = piVar6 + 4;
          local_c = iVar16;
        } while (iVar16 < *(int *)(local_8 + 0x14));
      }
    }
    uVar3 = *(undefined4 *)(*(int *)(local_8 + 0x10) + local_c * 0x10);
    piVar6 = param_1;
    puVar7 = param_2;
    for (iVar16 = param_2[4]; param_2 = puVar7, iVar16 != 0; iVar16 = *(int *)(iVar16 + 4)) {
      local_14 = 0;
      local_1c = (uint *)0x0;
      local_18 = 0;
      if (*(char *)((int)piVar6 + 0x1ca) == '\0') {
        puVar7 = (undefined4 *)FUN_0055d730(piVar6,0,*(undefined4 *)(iVar16 + 8),uVar3);
      }
      else {
        puVar7 = (undefined4 *)FUN_005572d0(local_8);
      }
      if ((puVar7 == (undefined4 *)0x0) ||
         (iVar8 = FUN_0053d040(piVar6,puVar7,iVar16,&local_14,&local_1c), iVar8 != 0)) {
        if (local_24 == 0) {
          return;
        }
        if (*(char *)(local_8 + 0x38) != '\0') {
          return;
        }
        if (puVar7 == (undefined4 *)0x0) {
          iVar8 = piVar6[2];
          if (iVar8 == 0) {
            iVar8 = FUN_0056c7b0(*piVar6);
            piVar6[2] = iVar8;
            if (iVar8 != 0) {
              FUN_0056bdc0(iVar8,0x94);
            }
          }
          local_14 = *(int *)(iVar8 + 0x1c) + 1 + *(int *)(iVar16 + 0x14);
          iVar12 = 0;
          if (0 < *(int *)(iVar16 + 0x14)) {
            local_20 = (byte *)(iVar16 + 0x24);
            do {
              local_18 = *(int *)local_20 + param_3 + 1;
              local_1c = *(uint **)(iVar8 + 0x1c);
              if (((int)local_1c < *(int *)(iVar8 + 0x20)) ||
                 (iVar9 = FUN_0053b4b0(iVar8), iVar9 == 0)) {
                *(int *)(iVar8 + 0x1c) = *(int *)(iVar8 + 0x1c) + 1;
                iVar9 = *(int *)(iVar8 + 4);
                *(uint *)(iVar9 + 4 + (int)local_1c * 0x14) = local_18;
                *(undefined2 *)(iVar9 + (int)local_1c * 0x14) = 0x49;
                *(undefined1 *)(iVar9 + 3 + (int)local_1c * 0x14) = 0;
                *(int *)(iVar9 + 8 + (int)local_1c * 0x14) = local_14;
                *(undefined4 *)(iVar9 + 0xc + (int)local_1c * 0x14) = 0;
                *(undefined4 *)(iVar9 + 0x10 + (int)local_1c * 0x14) = 0;
              }
              iVar12 = iVar12 + 1;
              local_20 = (byte *)((int)local_20 + 8);
            } while (iVar12 < *(int *)(iVar16 + 0x14));
          }
          local_20 = (byte *)(uint)*(byte *)(iVar16 + 0x18);
          iVar12 = *(int *)(iVar8 + 0x1c);
          if ((iVar12 < *(int *)(iVar8 + 0x20)) ||
             (iVar9 = FUN_0053b4b0(iVar8), piVar6 = param_1, iVar9 == 0)) {
            iVar9 = *(int *)(iVar8 + 4);
            *(int *)(iVar8 + 0x1c) = *(int *)(iVar8 + 0x1c) + 1;
            *(undefined2 *)(iVar9 + iVar12 * 0x14) = 0x75;
            *(undefined1 *)(iVar9 + 3 + iVar12 * 0x14) = 0;
            *(byte **)(iVar9 + 4 + iVar12 * 0x14) = local_20;
            *(undefined4 *)(iVar9 + 8 + iVar12 * 0x14) = 0xffffffff;
            *(undefined4 *)(iVar9 + 0xc + iVar12 * 0x14) = 0;
            *(undefined4 *)(iVar9 + 0x10 + iVar12 * 0x14) = 0;
            piVar6 = param_1;
          }
        }
      }
      else {
        if (local_1c == (uint *)0x0) {
          puVar11 = &local_28;
          local_28 = *(uint *)(iVar16 + 0x24);
          local_10 = puVar11;
        }
        else {
          local_10 = local_1c;
          puVar11 = local_1c;
        }
        local_20 = (byte *)0x0;
        local_10 = puVar11;
        if (0 < *(int *)(iVar16 + 0x14)) {
          do {
            iVar8 = (int)local_20 * 4;
            if (puVar11[(int)local_20] == (int)*(short *)(param_2 + 9)) {
              puVar11[(int)local_20] = 0xffffffff;
            }
            if (*(int *)(local_8 + 0x10c) != 0) {
              if (local_14 == 0) {
                iVar8 = (int)*(short *)(puVar7 + 9);
              }
              else {
                iVar8 = *(int *)(iVar8 + *(int *)(local_14 + 4));
              }
              iVar8 = FUN_0054acc0(piVar6,*puVar7,*(undefined4 *)(puVar7[1] + iVar8 * 0x18),local_c)
              ;
              local_18 = (uint)(iVar8 == 2);
              puVar11 = local_10;
            }
            local_20 = local_20 + 1;
          } while ((int)local_20 < *(int *)(iVar16 + 0x14));
        }
        FUN_005681e0(piVar6,local_c,puVar7[8],0,*puVar7);
        piVar6[0x12] = piVar6[0x12] + 1;
        if (param_3 != 0) {
          FUN_00537e40(piVar6,local_c,puVar7,local_14,iVar16,local_10,param_3,0xffffffff,local_18);
        }
        if (param_4 != 0) {
          FUN_00537e40(piVar6,local_c,puVar7,local_14,iVar16,local_10,param_4,1,local_18);
        }
        FUN_005521a0(local_8,local_1c);
      }
      puVar7 = param_2;
    }
    pbVar4 = (byte *)*puVar7;
    uVar15 = 0;
    if (pbVar4 != (byte *)0x0) {
      bVar1 = *pbVar4;
      pbVar14 = pbVar4;
      while (bVar1 != 0) {
        pbVar14 = pbVar14 + 1;
        bVar1 = *pbVar14;
      }
      uVar15 = (int)pbVar14 - (int)pbVar4 & 0x3fffffff;
    }
    local_1c = (uint *)(puVar7[0x10] + 0x38);
    if (*(int *)(puVar7[0x10] + 0x44) == 0) {
      uVar17 = 0;
    }
    else {
      uVar17 = 0;
      pbVar14 = pbVar4;
      uVar13 = uVar15;
      local_20 = pbVar4;
      if (uVar15 != 0) {
        do {
          local_20 = pbVar14 + 1;
          uVar13 = uVar13 - 1;
          uVar17 = uVar17 ^ (uint)(byte)(&DAT_007120d8)[*pbVar14] ^ uVar17 * 8;
          pbVar14 = local_20;
          piVar6 = param_1;
        } while (0 < (int)uVar13);
      }
      uVar17 = uVar17 % *local_1c;
    }
    iVar16 = FUN_00537190(local_1c,pbVar4,uVar15,uVar17);
    if (iVar16 != 0) {
      for (puVar5 = *(undefined4 **)(iVar16 + 8); puVar5 != (undefined4 *)0x0;
          puVar5 = (undefined4 *)puVar5[3]) {
        local_1c = (uint *)0x0;
        param_1 = (int *)0x0;
        if (((*(char *)(puVar5 + 6) != '\0') || (piVar6[0x6c] != 0)) ||
           (*(char *)((int)piVar6 + 0x17) != '\0')) {
          iVar16 = FUN_0053d040(piVar6,puVar7,puVar5,&local_1c,&param_1);
          if (iVar16 == 0) {
            psVar10 = (short *)FUN_00552230(local_8,0x50);
            if (psVar10 != (short *)0x0) {
              memset(psVar10,0,0x50);
              psVar10[1] = 1;
              psVar10 = (short *)FUN_00567680(local_8,psVar10,1,(int)*psVar10);
              if (*(char *)(local_8 + 0x38) == '\0') {
                sVar2 = *psVar10;
                (psVar10 + sVar2 * 0x24 + -0x1c)[0] = 0;
                (psVar10 + sVar2 * 0x24 + -0x1c)[1] = 0;
                (psVar10 + sVar2 * 0x24 + -0x1e)[0] = 0;
                (psVar10 + sVar2 * 0x24 + -0x1e)[1] = 0;
                *(undefined4 *)(psVar10 + 0xc) = *puVar5;
                *(undefined4 *)(psVar10 + 8) = *(undefined4 *)*puVar5;
                *(short *)(*(int *)(psVar10 + 0xc) + 0x28) =
                     *(short *)(*(int *)(psVar10 + 0xc) + 0x28) + 1;
                *(int *)(psVar10 + 0x1a) = piVar6[0x12];
                piVar6[0x12] = piVar6[0x12] + 1;
                if (param_4 != 0) {
                  FUN_00538660(piVar6,psVar10,param_2,local_1c,puVar5,param_1,param_4,0xffffffff);
                }
                if (param_3 != 0) {
                  FUN_00538660(piVar6,psVar10,param_2,local_1c,puVar5,param_1,param_3,1);
                }
                psVar10[8] = 0;
                psVar10[9] = 0;
              }
              FUN_00567370(local_8,psVar10);
            }
            FUN_005521a0(local_8,param_1);
          }
          else {
            if (local_24 == 0) {
              return;
            }
            if (*(char *)(local_8 + 0x38) != '\0') {
              return;
            }
          }
        }
        puVar7 = param_2;
      }
    }
  }
  return;
}


/* FUN_005581b0 @ 005581b0  kind=lib  attributed-by=lib-island  size=317 */

void FUN_005581b0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  char *pcVar7;
  
  iVar4 = *(int *)(param_2 + 0x10);
  while (iVar4 != 0) {
    if ((param_1 == 0) || (*(int *)(param_1 + 0x1f0) == 0)) {
      if (*(int *)(iVar4 + 0x10) == 0) {
        iVar2 = *(int *)(iVar4 + 0xc);
        if (iVar2 == 0) {
          pcVar7 = *(char **)(iVar4 + 8);
        }
        else {
          pcVar7 = *(char **)(iVar2 + 8);
        }
        uVar6 = 0;
        if (pcVar7 != (char *)0x0) {
          cVar1 = *pcVar7;
          pcVar5 = pcVar7;
          while (cVar1 != '\0') {
            pcVar5 = pcVar5 + 1;
            cVar1 = *pcVar5;
          }
          uVar6 = (int)pcVar5 - (int)pcVar7 & 0x3fffffff;
        }
        FUN_0055ada0(*(int *)(param_2 + 0x40) + 0x38,pcVar7,uVar6,iVar2);
      }
      else {
        *(undefined4 *)(*(int *)(iVar4 + 0x10) + 0xc) = *(undefined4 *)(iVar4 + 0xc);
      }
      if (*(int *)(iVar4 + 0xc) != 0) {
        *(undefined4 *)(*(int *)(iVar4 + 0xc) + 0x10) = *(undefined4 *)(iVar4 + 0x10);
      }
    }
    iVar2 = *(int *)(iVar4 + 0x1c);
    if (iVar2 != 0) {
      iVar3 = *(int *)(iVar2 + 0x1c);
      FUN_00555e30(param_1,*(undefined4 *)(iVar3 + 0x14));
      FUN_00556700(param_1,*(undefined4 *)(iVar3 + 0x18));
      iVar3 = *(int *)(iVar3 + 8);
      if (iVar3 != 0) {
        FUN_005303a0(param_1,iVar3);
        FUN_005521a0(param_1,iVar3);
      }
      FUN_00555e30(param_1,*(undefined4 *)(iVar2 + 0xc));
      FUN_005521a0(param_1,iVar2);
    }
    iVar2 = *(int *)(iVar4 + 0x20);
    if (iVar2 != 0) {
      iVar3 = *(int *)(iVar2 + 0x1c);
      FUN_00555e30(param_1,*(undefined4 *)(iVar3 + 0x14));
      FUN_00556700(param_1,*(undefined4 *)(iVar3 + 0x18));
      iVar3 = *(int *)(iVar3 + 8);
      if (iVar3 != 0) {
        FUN_005303a0(param_1,iVar3);
        FUN_005521a0(param_1,iVar3);
      }
      FUN_00555e30(param_1,*(undefined4 *)(iVar2 + 0xc));
      FUN_005521a0(param_1,iVar2);
    }
    iVar2 = *(int *)(iVar4 + 4);
    FUN_005521a0(param_1,iVar4);
    iVar4 = iVar2;
  }
  return;
}


/* FUN_005582f0 @ 005582f0  kind=lib  attributed-by=lib-string  size=230 */

void FUN_005582f0(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = *param_1;
  if ((((*(uint *)(iVar1 + 0x18) & 0x40000) != 0) && ((*(byte *)(param_3 + 0x2a) & 0x10) == 0)) &&
     (*(int *)(param_3 + 0xc) == 0)) {
    iVar2 = FUN_0055ab80(param_1);
    iVar3 = FUN_00558520(param_3);
    if (iVar3 == 0) {
      iVar3 = *(int *)(param_3 + 0x10);
      if (iVar3 == 0) {
        return;
      }
      while (*(char *)(iVar3 + 0x18) == '\0') {
        iVar3 = *(int *)(iVar3 + 4);
        if (iVar3 == 0) {
          return;
        }
      }
      iVar3 = FUN_005741e0(iVar2);
      FUN_0056be90(iVar2,0x76,1,iVar3);
    }
    else {
      iVar3 = 0;
    }
    *(undefined1 *)((int)param_1 + 0x1ca) = 1;
    uVar4 = FUN_00567420(iVar1,param_2,0,0);
    FUN_00552560(param_1,uVar4);
    *(undefined1 *)((int)param_1 + 0x1ca) = 0;
    FUN_0056be90(iVar2,0x76,0,*(int *)(iVar2 + 0x1c) + 2);
    FUN_0055abc0(param_1,2,"foreign key constraint failed",0xfffffffe);
    if ((iVar3 != 0) && (*(int *)(iVar2 + 0x28) != 0)) {
      *(undefined4 *)(*(int *)(iVar2 + 0x28) - (iVar3 * 4 + 4)) = *(undefined4 *)(iVar2 + 0x1c);
    }
  }
  return;
}


/* FUN_005583e0 @ 005583e0  kind=lib  attributed-by=lib-island  size=310 */

uint FUN_005583e0(int *param_1,undefined4 *param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  uint *local_c;
  uint local_8;
  
  uVar7 = 0;
  if ((*(uint *)(*param_1 + 0x18) & 0x40000) == 0) {
    return 0;
  }
  for (iVar4 = param_2[4]; iVar4 != 0; iVar4 = *(int *)(iVar4 + 4)) {
    iVar8 = *(int *)(iVar4 + 0x14);
    if (0 < iVar8) {
      piVar5 = (int *)(iVar4 + 0x24);
      do {
        if (*piVar5 < 0x20) {
          uVar3 = 1 << ((byte)*piVar5 & 0x1f);
        }
        else {
          uVar3 = 0xffffffff;
        }
        uVar7 = uVar7 | uVar3;
        piVar5 = piVar5 + 2;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  pbVar2 = (byte *)*param_2;
  local_8 = 0;
  if (pbVar2 != (byte *)0x0) {
    bVar1 = *pbVar2;
    pbVar9 = pbVar2;
    while (bVar1 != 0) {
      pbVar9 = pbVar9 + 1;
      bVar1 = *pbVar9;
    }
    local_8 = (int)pbVar9 - (int)pbVar2 & 0x3fffffff;
  }
  local_c = (uint *)(param_2[0x10] + 0x38);
  uVar3 = 0;
  if (*(int *)(param_2[0x10] + 0x44) != 0) {
    uVar6 = local_8;
    pbVar9 = pbVar2;
    if (local_8 != 0) {
      do {
        uVar6 = uVar6 - 1;
        uVar3 = uVar3 ^ (uint)(byte)(&DAT_007120d8)[*pbVar9] ^ uVar3 * 8;
        pbVar9 = pbVar9 + 1;
      } while (0 < (int)uVar6);
    }
    uVar3 = uVar3 % *local_c;
  }
  iVar4 = FUN_00537190(local_c,pbVar2,local_8,uVar3);
  if (iVar4 != 0) {
    for (iVar4 = *(int *)(iVar4 + 8); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0xc)) {
      local_c = (uint *)0x0;
      FUN_0053d040(param_1,param_2,iVar4,&local_c,0);
      if ((local_c != (uint *)0x0) && (uVar3 = local_c[9], 0 < (int)uVar3)) {
        piVar5 = (int *)local_c[1];
        do {
          if (*piVar5 < 0x20) {
            uVar6 = 1 << ((byte)*piVar5 & 0x1f);
          }
          else {
            uVar6 = 0xffffffff;
          }
          uVar7 = uVar7 | uVar6;
          piVar5 = piVar5 + 1;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
    }
  }
  return uVar7;
}


/* FUN_00558520 @ 00558520  kind=lib  attributed-by=lib-island  size=94 */

undefined4 FUN_00558520(undefined4 *param_1)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  char *pcVar6;
  uint uVar7;
  
  pcVar2 = (char *)*param_1;
  uVar7 = 0;
  if (pcVar2 != (char *)0x0) {
    cVar1 = *pcVar2;
    pcVar6 = pcVar2;
    while (cVar1 != '\0') {
      pcVar6 = pcVar6 + 1;
      cVar1 = *pcVar6;
    }
    uVar7 = (int)pcVar6 - (int)pcVar2 & 0x3fffffff;
  }
  puVar5 = (uint *)(param_1[0x10] + 0x38);
  if (*(int *)(param_1[0x10] + 0x44) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0057a870(pcVar2,uVar7);
    uVar3 = uVar3 % *puVar5;
  }
  iVar4 = FUN_00537190(puVar5,pcVar2,uVar7,uVar3);
  if (iVar4 == 0) {
    return 0;
  }
  return *(undefined4 *)(iVar4 + 8);
}


/* FUN_00558580 @ 00558580  kind=lib  attributed-by=lib-island  size=529 */

undefined4 FUN_00558580(int *param_1,undefined4 *param_2,int param_3,int param_4)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  uint *puVar4;
  byte *pbVar5;
  ushort uVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  uint uVar10;
  undefined4 *puVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  
  if ((*(uint *)(*param_1 + 0x18) & 0x40000) != 0) {
    if (param_3 == 0) {
      iVar3 = FUN_00558520(param_2);
      if ((iVar3 != 0) || (param_2[4] != 0)) {
        return 1;
      }
    }
    else {
      for (iVar3 = param_2[4]; iVar3 != 0; iVar3 = *(int *)(iVar3 + 4)) {
        iVar7 = 0;
        if (0 < *(int *)(iVar3 + 0x14)) {
          piVar9 = (int *)(iVar3 + 0x24);
          do {
            if (-1 < *(int *)(param_3 + *piVar9 * 4)) {
              return 1;
            }
            if ((*piVar9 == (int)*(short *)(param_2 + 9)) && (param_4 != 0)) {
              return 1;
            }
            iVar7 = iVar7 + 1;
            piVar9 = piVar9 + 2;
          } while (iVar7 < *(int *)(iVar3 + 0x14));
        }
      }
      pbVar5 = (byte *)*param_2;
      uVar13 = 0;
      if (pbVar5 != (byte *)0x0) {
        bVar2 = *pbVar5;
        pbVar12 = pbVar5;
        while (bVar2 != 0) {
          pbVar12 = pbVar12 + 1;
          bVar2 = *pbVar12;
        }
        uVar13 = (int)pbVar12 - (int)pbVar5 & 0x3fffffff;
      }
      puVar4 = (uint *)(param_2[0x10] + 0x38);
      if (*(int *)(param_2[0x10] + 0x44) == 0) {
        uVar14 = 0;
      }
      else {
        uVar14 = 0;
        uVar10 = uVar13;
        pbVar12 = pbVar5;
        if (uVar13 != 0) {
          do {
            uVar10 = uVar10 - 1;
            uVar14 = uVar14 ^ (uint)(byte)(&DAT_007120d8)[*pbVar12] ^ uVar14 * 8;
            pbVar12 = pbVar12 + 1;
          } while (0 < (int)uVar10);
        }
        uVar14 = uVar14 % *puVar4;
      }
      iVar3 = FUN_00537190(puVar4,pbVar5,uVar13,uVar14);
      if (iVar3 != 0) {
        for (iVar3 = *(int *)(iVar3 + 8); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0xc)) {
          param_1 = (int *)0x0;
          if (0 < *(int *)(iVar3 + 0x14)) {
            puVar8 = (undefined4 *)(iVar3 + 0x28);
            do {
              iVar7 = 0;
              if (0 < *(short *)((int)param_2 + 0x26)) {
                puVar11 = (undefined4 *)param_2[1];
                do {
                  if ((byte *)*puVar8 == (byte *)0x0) {
                    uVar6 = *(ushort *)((int)puVar11 + 0x16) & 1;
                  }
                  else {
                    pbVar5 = (byte *)*puVar11;
                    bVar2 = *pbVar5;
                    pbVar12 = (byte *)*puVar8;
                    while ((bVar2 != 0 && ((&DAT_007120d8)[bVar2] == (&DAT_007120d8)[*pbVar12]))) {
                      pbVar1 = pbVar5 + 1;
                      pbVar5 = pbVar5 + 1;
                      pbVar12 = pbVar12 + 1;
                      bVar2 = *pbVar1;
                    }
                    uVar6 = (ushort)((&DAT_007120d8)[*pbVar5] == (&DAT_007120d8)[*pbVar12]);
                  }
                  if (uVar6 != 0) {
                    if (-1 < *(int *)(param_3 + iVar7 * 4)) {
                      return 1;
                    }
                    if ((iVar7 == *(short *)(param_2 + 9)) && (param_4 != 0)) {
                      return 1;
                    }
                  }
                  iVar7 = iVar7 + 1;
                  puVar11 = puVar11 + 6;
                } while (iVar7 < *(short *)((int)param_2 + 0x26));
              }
              param_1 = (int *)((int)param_1 + 1);
              puVar8 = puVar8 + 2;
            } while ((int)param_1 < *(int *)(iVar3 + 0x14));
          }
        }
      }
    }
  }
  return 0;
}


/* FUN_005587a0 @ 005587a0  kind=lib  attributed-by=lib-island  size=113 */

void FUN_005587a0(int param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  
  pbVar2 = *(byte **)(param_2 + 0x18);
  uVar5 = 0;
  if (pbVar2 != (byte *)0x0) {
    bVar1 = *pbVar2;
    pbVar4 = pbVar2;
    while (bVar1 != 0) {
      pbVar4 = pbVar4 + 1;
      bVar1 = *pbVar4;
    }
    uVar5 = (int)pbVar4 - (int)pbVar2 & 0x3fffffff;
  }
  uVar6 = ((byte)(&DAT_007120d8)[*pbVar2] + uVar5) % 0x17;
  iVar3 = FUN_00539a30(param_1,uVar6,pbVar2,uVar5);
  if (iVar3 == 0) {
    *(undefined4 *)(param_2 + 8) = 0;
    *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_1 + uVar6 * 4);
    *(int *)(param_1 + uVar6 * 4) = param_2;
    return;
  }
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(iVar3 + 8);
  *(int *)(iVar3 + 8) = param_2;
  return;
}


/* FUN_00558890 @ 00558890  kind=lib  attributed-by=lib-island  size=4187 */

void FUN_00558890(int *param_1,undefined4 *param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,uint param_8,undefined4 param_9,int *param_10)

{
  undefined2 *puVar1;
  char cVar2;
  byte bVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  void *_Dst;
  int *piVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  size_t _Size;
  char *pcVar15;
  undefined4 uVar16;
  int local_54;
  void *local_50;
  void *local_4c;
  uint local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c;
  undefined2 local_3b;
  int local_38;
  void *local_34;
  int local_30;
  int local_2c;
  int *local_28;
  void *local_24;
  int local_20;
  uint local_1c;
  int *local_18;
  int local_14;
  int *local_10;
  uint local_c;
  int local_8;
  
  local_c = 0;
  local_20 = 0;
  if ((param_6 == 0) || (param_7 == 0)) {
    local_30 = param_4;
  }
  else {
    local_30 = param_6;
  }
  piVar4 = (int *)param_1[2];
  local_14 = *param_1;
  local_18 = piVar4;
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)FUN_0056c7b0(local_14);
    param_1[2] = (int)piVar4;
    local_18 = piVar4;
    if (piVar4 != (int *)0x0) {
      FUN_0056bdc0(piVar4,0x94);
    }
  }
  local_24 = (void *)(int)*(short *)((int)param_2 + 0x26);
  iVar14 = param_4 + 1;
  local_1c = 0;
  local_2c = iVar14;
  if (0 < (int)local_24) {
    local_10 = (int *)0x0;
    do {
      piVar11 = local_10;
      local_10 = piVar11;
      if (local_1c != (int)*(short *)(param_2 + 9)) {
        uVar12 = (uint)*(byte *)((int)local_10 + 0x14 + param_2[1]);
        if (uVar12 != 0) {
          uVar13 = param_8;
          if ((param_8 == 99) && (uVar13 = uVar12, uVar12 == 99)) {
            uVar13 = 2;
          }
          else if ((uVar13 == 5) && (*(int *)((int)local_10 + 4 + param_2[1]) == 0)) {
            uVar13 = 2;
          }
          switch(uVar13) {
          case 2:
            piVar7 = param_1;
            if ((int *)param_1[0x6c] != (int *)0x0) {
              piVar7 = (int *)param_1[0x6c];
            }
            *(undefined1 *)(piVar7 + 6) = 1;
          case 1:
          case 3:
            FUN_0056bef0(piVar4,5,0x13,uVar13,iVar14);
            local_28 = (int *)FUN_0055d980(local_14,"%s.%s may not be NULL",*param_2,
                                           *(undefined4 *)((int)piVar11 + param_2[1]));
            iVar5 = *piVar4;
            if ((piVar4[1] == 0) || (*(char *)(iVar5 + 0x38) != '\0')) {
              FUN_00539320(iVar5,0xffffffff,local_28);
              local_10 = piVar11;
            }
            else {
              iVar8 = piVar4[7] + -1;
              local_34 = (void *)(piVar4[1] + iVar8 * 0x14);
              FUN_00539320(iVar5,(int)*(char *)(piVar4[1] + 1 + iVar8 * 0x14),
                           *(undefined4 *)(piVar4[1] + 0x10 + iVar8 * 0x14));
              *(undefined4 *)((int)local_34 + 0x10) = 0;
              if (local_28 == (int *)0x0) {
                *(undefined4 *)((int)local_34 + 0x10) = 0;
                *(undefined1 *)((int)local_34 + 1) = 0;
                local_10 = piVar11;
              }
              else {
                *(int **)((int)local_34 + 0x10) = local_28;
                *(undefined1 *)((int)local_34 + 1) = 0xff;
                local_10 = piVar11;
              }
            }
            break;
          case 4:
            FUN_0056be90(piVar4,0x49,iVar14,param_9);
            local_10 = piVar11;
            break;
          default:
            uVar12 = piVar4[7];
            if (((int)uVar12 < piVar4[8]) || (iVar5 = FUN_0053b4b0(piVar4), iVar5 == 0)) {
              iVar5 = piVar4[1];
              piVar4[7] = piVar4[7] + 1;
              *(undefined2 *)(iVar5 + uVar12 * 0x14) = 0x4a;
              *(undefined1 *)(iVar5 + 3 + uVar12 * 0x14) = 0;
              *(int *)(iVar5 + 4 + uVar12 * 0x14) = iVar14;
              *(undefined4 *)(iVar5 + 8 + uVar12 * 0x14) = 0;
              *(undefined4 *)(iVar5 + 0xc + uVar12 * 0x14) = 0;
              *(undefined4 *)(iVar5 + 0x10 + uVar12 * 0x14) = 0;
            }
            else {
              uVar12 = 1;
            }
            pcVar6 = *(char **)((int)local_10 + 4 + param_2[1]);
            if ((pcVar6 == (char *)0x0) || (*pcVar6 != -0x7c)) {
              iVar5 = FUN_00554e20(param_1,pcVar6,iVar14);
              if ((iVar5 != iVar14) && (iVar8 = param_1[2], iVar8 != 0)) {
                uVar16 = 0xf;
                goto LAB_00558ac8;
              }
            }
            else {
              iVar5 = *(int *)(pcVar6 + 0x18);
              uVar16 = 0xe;
              iVar8 = param_1[2];
LAB_00558ac8:
              FUN_0056be90(iVar8,uVar16,iVar5,iVar14);
            }
            if ((-1 < (int)uVar12) && (uVar12 < (uint)piVar4[7])) {
              *(int *)(piVar4[1] + 8 + uVar12 * 0x14) = piVar4[7];
            }
          }
        }
      }
      local_1c = local_1c + 1;
      local_10 = (int *)((int)local_10 + 0x18);
      iVar14 = iVar14 + 1;
    } while ((int)local_1c < (int)local_24);
  }
  local_10 = (int *)param_2[6];
  if ((local_10 != (int *)0x0) && ((*(uint *)(local_14 + 0x18) & 0x400) == 0)) {
    param_1[0x16] = local_2c;
    uVar12 = 2;
    if (param_8 != 99) {
      uVar12 = param_8;
    }
    local_28 = (int *)0x0;
    if (0 < *local_10) {
      local_1c = 0;
      do {
        uVar13 = piVar4[9];
        piVar4[9] = uVar13 + 1;
        if ((uVar13 & uVar13 - 1) == 0) {
          local_34 = (void *)piVar4[10];
          local_24 = (void *)*piVar4;
          local_8 = FUN_00552390(local_24,local_34,uVar13 * 8 + 4);
          if (local_8 == 0) {
            FUN_005521a0(local_24,local_34);
          }
          piVar4[10] = local_8;
        }
        uVar9 = local_1c;
        if (piVar4[10] != 0) {
          *(undefined4 *)(piVar4[10] + uVar13 * 4) = 0xffffffff;
        }
        local_34 = (void *)(-uVar13 - 1);
        FUN_00556200(param_1,*(undefined4 *)(local_1c + local_10[2]),local_34,8);
        if (uVar12 == 4) {
          iVar14 = piVar4[7];
          if ((iVar14 < piVar4[8]) || (iVar5 = FUN_0053b4b0(piVar4), iVar5 == 0)) {
            iVar5 = piVar4[1];
            piVar4[7] = piVar4[7] + 1;
            *(undefined2 *)(iVar5 + iVar14 * 0x14) = 1;
            *(undefined1 *)(iVar5 + 3 + iVar14 * 0x14) = 0;
            *(undefined4 *)(iVar5 + 4 + iVar14 * 0x14) = 0;
            *(undefined4 *)(iVar5 + 8 + iVar14 * 0x14) = param_9;
            *(undefined4 *)(iVar5 + 0xc + iVar14 * 0x14) = 0;
            *(undefined4 *)(iVar5 + 0x10 + iVar14 * 0x14) = 0;
          }
        }
        else {
          iVar14 = *(int *)(uVar9 + 4 + local_10[2]);
          if (uVar12 == 5) {
            uVar12 = 2;
          }
          if (iVar14 == 0) {
            FUN_0055abc0(param_1,uVar12,0,0xffffffff);
            local_1c = uVar9;
          }
          else {
            uVar16 = FUN_0055d980(local_14,"constraint %s failed",iVar14);
            FUN_0055abc0(param_1,uVar12,uVar16,0xffffffff);
            local_1c = uVar9;
          }
        }
        if (piVar4[10] != 0) {
          *(int *)(piVar4[10] - ((int)local_34 * 4 + 4)) = piVar4[7];
        }
        local_28 = (int *)((int)local_28 + 1);
        local_1c = local_1c + 0x14;
      } while ((int)local_28 < *local_10);
    }
  }
  if (param_6 != 0) {
    uVar12 = param_8;
    if ((param_8 == 99) &&
       (uVar12 = (uint)*(byte *)((int)param_2 + 0x2b), *(byte *)((int)param_2 + 0x2b) == 99)) {
      uVar12 = 2;
    }
    if (param_7 != 0) {
      local_c = piVar4[7];
      if (((int)local_c < piVar4[8]) || (iVar14 = FUN_0053b4b0(piVar4), iVar14 == 0)) {
        iVar14 = piVar4[1];
        piVar4[7] = piVar4[7] + 1;
        *(undefined2 *)(iVar14 + local_c * 0x14) = 0x4c;
        *(undefined1 *)(iVar14 + 3 + local_c * 0x14) = 0;
        *(int *)(iVar14 + 4 + local_c * 0x14) = param_4;
        *(undefined4 *)(iVar14 + 8 + local_c * 0x14) = 0;
        *(int *)(iVar14 + 0xc + local_c * 0x14) = param_6;
        *(undefined4 *)(iVar14 + 0x10 + local_c * 0x14) = 0;
      }
      else {
        local_c = 1;
      }
    }
    uVar13 = piVar4[7];
    if (((int)uVar13 < piVar4[8]) || (iVar14 = FUN_0053b4b0(piVar4), iVar14 == 0)) {
      iVar14 = piVar4[1];
      piVar4[7] = piVar4[7] + 1;
      *(int *)(iVar14 + 4 + uVar13 * 0x14) = param_3;
      *(undefined2 *)(iVar14 + uVar13 * 0x14) = 0x36;
      *(undefined1 *)(iVar14 + 3 + uVar13 * 0x14) = 0;
      *(undefined4 *)(iVar14 + 8 + uVar13 * 0x14) = 0;
      *(int *)(iVar14 + 0xc + uVar13 * 0x14) = param_4;
      *(undefined4 *)(iVar14 + 0x10 + uVar13 * 0x14) = 0;
    }
    else {
      uVar13 = 1;
    }
    switch(uVar12) {
    case 4:
      iVar14 = piVar4[7];
      if ((iVar14 < piVar4[8]) || (iVar5 = FUN_0053b4b0(piVar4), iVar5 == 0)) {
        iVar5 = piVar4[1];
        piVar4[7] = piVar4[7] + 1;
        *(undefined2 *)(iVar5 + iVar14 * 0x14) = 1;
        *(undefined1 *)(iVar5 + 3 + iVar14 * 0x14) = 0;
        *(undefined4 *)(iVar5 + 4 + iVar14 * 0x14) = 0;
        *(undefined4 *)(iVar5 + 8 + iVar14 * 0x14) = param_9;
        *(undefined4 *)(iVar5 + 0xc + iVar14 * 0x14) = 0;
        *(undefined4 *)(iVar5 + 0x10 + iVar14 * 0x14) = 0;
      }
      break;
    case 5:
      iVar14 = 0;
      if ((((*(uint *)(local_14 + 0x18) & 0x20000) == 0) ||
          (iVar14 = FUN_005687a0(param_1,param_2,0x6a,0,0), iVar14 == 0)) &&
         (((*(uint *)(*param_1 + 0x18) & 0x40000) == 0 ||
          ((iVar5 = FUN_00558520(param_2), iVar5 == 0 && (param_2[4] == 0)))))) {
        if (param_2[2] != 0) {
          piVar11 = param_1;
          if ((int *)param_1[0x6c] != (int *)0x0) {
            piVar11 = (int *)param_1[0x6c];
          }
          *(undefined1 *)((int)piVar11 + 0x17) = 1;
          FUN_00559f10(param_1,param_2,param_3,0);
        }
        local_20 = 1;
      }
      else {
        piVar11 = param_1;
        if ((int *)param_1[0x6c] != (int *)0x0) {
          piVar11 = (int *)param_1[0x6c];
        }
        *(undefined1 *)((int)piVar11 + 0x17) = 1;
        FUN_00559bc0(param_1,param_2,param_3,param_4,0,iVar14,5);
        local_20 = 1;
      }
      break;
    default:
      uVar12 = 2;
    case 1:
    case 2:
    case 3:
      FUN_0055abc0(param_1,uVar12,"PRIMARY KEY must be unique",0xfffffffe);
    }
    if ((-1 < (int)uVar13) && (uVar13 < (uint)piVar4[7])) {
      *(int *)(piVar4[1] + 8 + uVar13 * 0x14) = piVar4[7];
    }
    if (((param_7 != 0) && (-1 < (int)local_c)) && (local_c < (uint)piVar4[7])) {
      *(int *)(piVar4[1] + 8 + local_c * 0x14) = piVar4[7];
    }
  }
  local_c = 0;
  local_8 = param_2[2];
  do {
    if (local_8 == 0) {
      if (param_10 != (int *)0x0) {
        *param_10 = local_20;
      }
      return;
    }
    if (*(int *)(param_5 + local_c * 4) != 0) {
      uVar12 = param_1[0x10];
      iVar14 = *(int *)(local_8 + 0x24) + 1;
      if (param_1[0xf] < iVar14) {
        uVar12 = param_1[0x13] + 1;
        param_1[0x13] = param_1[0x13] + iVar14;
      }
      else {
        param_1[0x10] = iVar14 + uVar12;
        param_1[0xf] = param_1[0xf] - iVar14;
      }
      local_10 = (int *)0x0;
      uVar13 = uVar12;
      if (0 < *(int *)(local_8 + 0x24)) {
        do {
          local_1c = uVar13;
          iVar14 = piVar4[7];
          local_34 = *(void **)(*(int *)(local_8 + 4) + (int)local_10 * 4);
          iVar5 = piVar4[8];
          if (local_34 == (void *)(int)*(short *)(param_2 + 9)) {
            if (iVar5 <= iVar14) {
              if (iVar5 == 0) {
                iVar5 = 0x33;
              }
              else {
                iVar5 = iVar5 * 2;
              }
              uVar13 = FUN_00552390(*piVar4,piVar4[1],iVar5 * 0x14);
              if (uVar13 == 0) goto LAB_00559099;
              iVar5 = *piVar4;
              if (((iVar5 == 0) || (uVar13 < *(uint *)(iVar5 + 0x104))) ||
                 (*(uint *)(iVar5 + 0x108) <= uVar13)) {
                uVar9 = (*DAT_00766608._4_4_)(uVar13);
              }
              else {
                uVar9 = (uint)*(ushort *)(iVar5 + 0xe8);
              }
              piVar4[8] = uVar9 / 0x14;
              piVar4[1] = uVar13;
            }
            iVar5 = piVar4[1];
            piVar4[7] = piVar4[7] + 1;
            *(int *)(iVar5 + 4 + iVar14 * 0x14) = param_4;
            *(undefined2 *)(iVar5 + iVar14 * 0x14) = 0xf;
            *(undefined1 *)(iVar5 + 3 + iVar14 * 0x14) = 0;
            *(uint *)(iVar5 + 8 + iVar14 * 0x14) = local_1c;
            *(undefined4 *)(iVar5 + 0xc + iVar14 * 0x14) = 0;
            *(undefined4 *)(iVar5 + 0x10 + iVar14 * 0x14) = 0;
          }
          else {
            if (iVar5 <= iVar14) {
              if (iVar5 == 0) {
                iVar5 = 0x33;
              }
              else {
                iVar5 = iVar5 * 2;
              }
              uVar13 = FUN_00552390(*piVar4,piVar4[1],iVar5 * 0x14);
              if (uVar13 == 0) goto LAB_00559099;
              iVar5 = *piVar4;
              if (((iVar5 == 0) || (uVar13 < *(uint *)(iVar5 + 0x104))) ||
                 (*(uint *)(iVar5 + 0x108) <= uVar13)) {
                uVar9 = (*DAT_00766608._4_4_)(uVar13);
              }
              else {
                uVar9 = (uint)*(ushort *)(iVar5 + 0xe8);
              }
              piVar4[8] = uVar9 / 0x14;
              piVar4[1] = uVar13;
            }
            piVar4[7] = piVar4[7] + 1;
            puVar1 = (undefined2 *)(piVar4[1] + iVar14 * 0x14);
            *puVar1 = 0xf;
            *(undefined1 *)((int)puVar1 + 3) = 0;
            *(int *)(puVar1 + 2) = (int)local_34 + local_2c;
            *(uint *)(puVar1 + 4) = local_1c;
            *(undefined4 *)(puVar1 + 6) = 0;
            *(undefined4 *)(puVar1 + 8) = 0;
          }
LAB_00559099:
          local_1c = local_1c + 1;
          local_10 = (int *)((int)local_10 + 1);
          uVar13 = local_1c;
        } while ((int)local_10 < *(int *)(local_8 + 0x24));
      }
      iVar14 = piVar4[7];
      iVar5 = piVar4[8];
      if (iVar14 < iVar5) {
LAB_0055911b:
        piVar4[7] = piVar4[7] + 1;
        puVar1 = (undefined2 *)(piVar4[1] + iVar14 * 0x14);
        *(int *)(puVar1 + 2) = param_4;
        *puVar1 = 0xf;
        *(undefined1 *)((int)puVar1 + 3) = 0;
        *(uint *)(puVar1 + 4) = (int)local_10 + uVar12;
        *(undefined4 *)(puVar1 + 6) = 0;
        *(undefined4 *)(puVar1 + 8) = 0;
      }
      else {
        if (iVar5 == 0) {
          iVar5 = 0x33;
        }
        else {
          iVar5 = iVar5 * 2;
        }
        uVar13 = FUN_00552390(*piVar4,piVar4[1],iVar5 * 0x14);
        if (uVar13 != 0) {
          iVar5 = *piVar4;
          if (((iVar5 == 0) || (uVar13 < *(uint *)(iVar5 + 0x104))) ||
             (*(uint *)(iVar5 + 0x108) <= uVar13)) {
            uVar9 = (*DAT_00766608._4_4_)(uVar13);
          }
          else {
            uVar9 = (uint)*(ushort *)(iVar5 + 0xe8);
          }
          piVar4[8] = uVar9 / 0x14;
          piVar4[1] = uVar13;
          goto LAB_0055911b;
        }
      }
      local_28 = *(int **)(param_5 + local_c * 4);
      local_34 = (void *)piVar4[7];
      iVar14 = *(int *)(local_8 + 0x24);
      iVar5 = piVar4[8];
      if ((int)local_34 < iVar5) {
LAB_005591d2:
        iVar5 = piVar4[1];
        piVar4[7] = piVar4[7] + 1;
        *(uint *)(iVar5 + 4 + (int)local_34 * 0x14) = uVar12;
        *(undefined2 *)(iVar5 + (int)local_34 * 0x14) = 0x1f;
        *(undefined1 *)(iVar5 + 3 + (int)local_34 * 0x14) = 0;
        *(int *)(iVar5 + 8 + (int)local_34 * 0x14) = iVar14 + 1;
        *(int **)(iVar5 + 0xc + (int)local_34 * 0x14) = local_28;
        *(undefined4 *)(iVar5 + 0x10 + (int)local_34 * 0x14) = 0;
      }
      else {
        if (iVar5 == 0) {
          iVar5 = 0x33;
        }
        else {
          iVar5 = iVar5 * 2;
        }
        uVar13 = FUN_00552390(*piVar4,piVar4[1],iVar5 * 0x14);
        if (uVar13 != 0) {
          iVar5 = *piVar4;
          if (((iVar5 == 0) || (uVar13 < *(uint *)(iVar5 + 0x104))) ||
             (*(uint *)(iVar5 + 0x108) <= uVar13)) {
            uVar9 = (*DAT_00766608._4_4_)(uVar13);
          }
          else {
            uVar9 = (uint)*(ushort *)(iVar5 + 0xe8);
          }
          piVar4[8] = uVar9 / 0x14;
          piVar4[1] = uVar13;
          goto LAB_005591d2;
        }
      }
      pcVar6 = (char *)FUN_0055b220(piVar4,local_8);
      iVar14 = piVar4[1];
      iVar5 = *piVar4;
      if ((iVar14 == 0) || (*(char *)(iVar5 + 0x38) != '\0')) {
        FUN_00539320(iVar5,0,pcVar6);
      }
      else {
        iVar8 = iVar14 + (piVar4[7] + -1) * 0x14;
        local_28 = (int *)iVar8;
        FUN_00539320(iVar5,(int)*(char *)(iVar8 + 1),
                     *(undefined4 *)(iVar14 + 0x10 + (piVar4[7] + -1) * 0x14));
        *(undefined4 *)(iVar8 + 0x10) = 0;
        if (pcVar6 == (char *)0x0) {
          *(undefined4 *)(iVar8 + 0x10) = 0;
          *(undefined1 *)(iVar8 + 1) = 0;
        }
        else {
          cVar2 = *pcVar6;
          pcVar15 = pcVar6;
          while (cVar2 != '\0') {
            pcVar15 = pcVar15 + 1;
            cVar2 = *pcVar15;
          }
          uVar13 = (int)pcVar15 - (int)pcVar6 & 0x3fffffff;
          local_34 = (void *)FUN_00552230(*piVar4,uVar13 + 1);
          if (local_34 != (void *)0x0) {
            memcpy(local_34,pcVar6,uVar13);
            *(undefined1 *)((int)local_34 + uVar13) = 0;
          }
          *(void **)((int)local_28 + 0x10) = local_34;
          *(undefined1 *)((int)local_28 + 1) = 0xff;
        }
      }
      piVar11 = local_18;
      iVar14 = *(int *)(local_8 + 0x24);
      local_28 = param_1 + 0x19;
      piVar4 = param_1 + 0x1d;
      iVar5 = 10;
      do {
        iVar8 = *piVar4;
        if (((int)uVar12 <= iVar8) && (iVar8 <= (int)(iVar14 + uVar12))) {
          if ((char)piVar4[-2] != '\0') {
            if (*(byte *)((int)param_1 + 0x13) < 8) {
              param_1[*(byte *)((int)param_1 + 0x13) + 7] = iVar8;
              *(char *)((int)param_1 + 0x13) = *(char *)((int)param_1 + 0x13) + '\x01';
            }
            *(undefined1 *)(piVar4 + -2) = 0;
          }
          *piVar4 = 0;
        }
        piVar4 = piVar4 + 6;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      uVar13 = (uint)*(byte *)(local_8 + 0x2c);
      if (uVar13 == 0) {
        local_34 = (void *)(*(int *)(local_8 + 0x24) + 1);
        piVar4 = param_1 + 0x1d;
        iVar14 = 10;
        do {
          iVar5 = *piVar4;
          if (((int)uVar12 <= iVar5) && (iVar5 <= (int)((uVar12 - 1) + (int)local_34))) {
            if ((char)piVar4[-2] != '\0') {
              if (*(byte *)((int)param_1 + 0x13) < 8) {
                param_1[*(byte *)((int)param_1 + 0x13) + 7] = iVar5;
                *(char *)((int)param_1 + 0x13) = *(char *)((int)param_1 + 0x13) + '\x01';
              }
              *(undefined1 *)(piVar4 + -2) = 0;
            }
            *piVar4 = 0;
          }
          piVar4 = piVar4 + 6;
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
        piVar4 = local_18;
        if (param_1[0xf] < (int)local_34) {
          param_1[0xf] = (int)local_34;
          param_1[0x10] = uVar12;
        }
      }
      else {
        local_1c = param_8;
        if ((param_8 == 99) && (local_1c = uVar13, uVar13 == 99)) {
          local_1c = 2;
        }
        if (local_20 != 0) {
          if (local_1c == 4) {
            local_1c = 5;
          }
          else if (local_1c == 3) {
            local_1c = 2;
          }
        }
        if (*(char *)((int)param_1 + 0x13) == '\0') {
          param_1[0x13] = param_1[0x13] + 1;
          local_10 = (int *)param_1[0x13];
        }
        else {
          bVar3 = *(char *)((int)param_1 + 0x13) - 1;
          *(byte *)((int)param_1 + 0x13) = bVar3;
          local_10 = (int *)param_1[bVar3 + 7];
        }
        iVar14 = local_18[7];
        iVar5 = local_18[8];
        if (iVar14 < iVar5) {
LAB_00559459:
          iVar5 = piVar11[1];
          piVar11[7] = piVar11[7] + 1;
          *(int *)(iVar5 + 4 + iVar14 * 0x14) = local_30;
          *(undefined2 *)(iVar5 + iVar14 * 0x14) = 0xf;
          *(undefined1 *)(iVar5 + 3 + iVar14 * 0x14) = 0;
          *(int **)(iVar5 + 8 + iVar14 * 0x14) = local_10;
          *(undefined4 *)(iVar5 + 0xc + iVar14 * 0x14) = 0;
          *(undefined4 *)(iVar5 + 0x10 + iVar14 * 0x14) = 0;
        }
        else {
          if (iVar5 == 0) {
            iVar5 = 0x33;
          }
          else {
            iVar5 = iVar5 * 2;
          }
          uVar13 = FUN_00552390(*local_18,local_18[1],iVar5 * 0x14);
          if (uVar13 != 0) {
            iVar5 = *piVar11;
            if (((iVar5 == 0) || (uVar13 < *(uint *)(iVar5 + 0x104))) ||
               (*(uint *)(iVar5 + 0x108) <= uVar13)) {
              uVar9 = (*DAT_00766608._4_4_)(uVar13);
            }
            else {
              uVar9 = (uint)*(ushort *)(iVar5 + 0xe8);
            }
            piVar11[8] = uVar9 / 0x14;
            piVar11[1] = uVar13;
            goto LAB_00559459;
          }
        }
        uVar13 = piVar11[7];
        iVar14 = piVar11[8];
        local_34 = (void *)uVar13;
        if ((int)uVar13 < iVar14) {
LAB_005594fe:
          piVar11[7] = piVar11[7] + 1;
          puVar1 = (undefined2 *)(piVar11[1] + uVar13 * 0x14);
          *puVar1 = 0x35;
          *(uint *)(puVar1 + 2) = local_c + 1 + param_3;
          *(undefined1 *)((int)puVar1 + 3) = 0;
          *(undefined4 *)(puVar1 + 4) = 0;
          *(int **)(puVar1 + 6) = local_10;
          *(undefined4 *)(puVar1 + 8) = 0;
        }
        else {
          if (iVar14 == 0) {
            iVar14 = 0x33;
          }
          else {
            iVar14 = iVar14 * 2;
          }
          uVar9 = FUN_00552390(*piVar11,piVar11[1],iVar14 * 0x14);
          if (uVar9 != 0) {
            iVar14 = *piVar11;
            if (((iVar14 == 0) || (uVar9 < *(uint *)(iVar14 + 0x104))) ||
               (*(uint *)(iVar14 + 0x108) <= uVar9)) {
              uVar10 = (*DAT_00766608._4_4_)(uVar9);
            }
            else {
              uVar10 = (uint)*(ushort *)(iVar14 + 0xe8);
            }
            piVar11[8] = uVar10 / 0x14;
            piVar11[1] = uVar9;
            goto LAB_005594fe;
          }
          uVar13 = 1;
          local_34 = (void *)0x1;
        }
        iVar14 = piVar11[1];
        iVar5 = *piVar11;
        if ((iVar14 == 0) || (*(char *)(iVar5 + 0x38) != '\0')) {
          FUN_00539320(iVar5,0xfffffff2,uVar12);
        }
        else {
          if ((int)uVar13 < 0) {
            uVar13 = piVar11[7] - 1;
          }
          iVar8 = iVar14 + uVar13 * 0x14;
          FUN_00539320(iVar5,(int)*(char *)(iVar8 + 1),
                       *(undefined4 *)(iVar14 + 0x10 + uVar13 * 0x14));
          *(uint *)(iVar8 + 0x10) = uVar12;
          *(undefined1 *)(iVar8 + 1) = 0xf2;
        }
        piVar4 = local_18;
        local_38 = *(int *)(local_8 + 0x24) + 1;
        piVar11 = local_28 + 4;
        iVar14 = 10;
        do {
          iVar5 = *piVar11;
          if (((int)uVar12 <= iVar5) && (iVar5 <= (int)((uVar12 - 1) + local_38))) {
            if ((char)piVar11[-2] != '\0') {
              if (*(byte *)((int)param_1 + 0x13) < 8) {
                param_1[*(byte *)((int)param_1 + 0x13) + 7] = iVar5;
                *(char *)((int)param_1 + 0x13) = *(char *)((int)param_1 + 0x13) + '\x01';
              }
              *(undefined1 *)(piVar11 + -2) = 0;
            }
            *piVar11 = 0;
          }
          piVar11 = piVar11 + 6;
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
        if (param_1[0xf] < local_38) {
          param_1[0xf] = local_38;
          param_1[0x10] = uVar12;
        }
        if ((int)local_1c < 1) {
LAB_00559839:
          piVar11 = param_1;
          if ((int *)param_1[0x6c] != (int *)0x0) {
            piVar11 = (int *)param_1[0x6c];
          }
          *(undefined1 *)((int)piVar11 + 0x17) = 1;
          iVar14 = 0;
          if ((*(uint *)(local_14 + 0x18) & 0x20000) != 0) {
            bVar3 = 0;
            iVar14 = 0;
            iVar5 = iVar14;
            if ((*(uint *)(*param_1 + 0x18) & 0x400000) != 0) {
              iVar14 = FUN_00568620(param_1,param_2);
              iVar5 = iVar14;
            }
            for (; iVar14 != 0; iVar14 = *(int *)(iVar14 + 0x20)) {
              if (*(char *)(iVar14 + 8) == 'j') {
                bVar3 = bVar3 | *(byte *)(iVar14 + 9);
              }
            }
            iVar14 = 0;
            if (bVar3 != 0) {
              iVar14 = iVar5;
            }
          }
          piVar11 = local_10;
          FUN_00559bc0(param_1,param_2,param_3,local_10,0,iVar14,5);
          local_20 = 1;
          local_10 = piVar11;
        }
        else if ((int)local_1c < 4) {
          local_54 = local_14;
          pcVar6 = "columns ";
          if (*(int *)(local_8 + 0x24) < 2) {
            pcVar6 = "column ";
          }
          iVar14 = 0;
          local_50 = (void *)0x0;
          local_4c = (void *)0x0;
          local_48 = 0;
          local_44 = 0;
          local_40 = 200;
          local_3b = 1;
          local_3c = 0;
          if (0 < *(int *)(local_8 + 0x24)) {
            do {
              uVar16 = *(undefined4 *)
                        (param_2[1] + *(int *)(*(int *)(local_8 + 4) + iVar14 * 4) * 0x18);
              FUN_00567e70(&local_54,pcVar6,0xffffffff);
              pcVar6 = ", ";
              FUN_00567e70(&local_54,uVar16,0xffffffff);
              iVar14 = iVar14 + 1;
            } while (iVar14 < *(int *)(local_8 + 0x24));
          }
          piVar4 = local_18;
          pcVar6 = " are not unique";
          if (*(int *)(local_8 + 0x24) < 2) {
            pcVar6 = " is not unique";
          }
          FUN_00567e70(&local_54,pcVar6,0xffffffff);
          uVar12 = local_48;
          _Dst = local_4c;
          if (local_4c != (void *)0x0) {
            *(undefined1 *)(local_48 + (int)local_4c) = 0;
            if (((char)local_3b != '\0') && (local_4c == local_50)) {
              _Size = local_48 + 1;
              if ((char)local_3b == '\x01') {
                _Dst = (void *)FUN_00552230(local_54,_Size);
              }
              else {
                iVar14 = FUN_00579f80();
                if (iVar14 == 0) {
                  if (uVar12 < 0x7ffffeff) {
                    if (DAT_007665e0 == 0) {
                      local_24 = (void *)(*DAT_00766600)(_Size);
                      _Dst = local_24;
                    }
                    else {
                      if (DAT_0076b488 != 0) {
                        (*DAT_00766630)(DAT_0076b488);
                      }
                      FUN_0053dcf0(_Size,&local_24);
                      _Dst = local_24;
                      if (DAT_0076b488 != 0) {
                        (*DAT_00766638)(DAT_0076b488);
                        _Dst = local_24;
                      }
                    }
                  }
                  else {
                    local_24 = (void *)0x0;
                    _Dst = local_24;
                  }
                }
                else {
                  _Dst = (void *)0x0;
                }
              }
              if (_Dst != (void *)0x0) {
                memcpy(_Dst,local_50,_Size);
              }
            }
          }
          FUN_0055abc0(param_1,local_1c,_Dst,0);
          FUN_005521a0(local_54,_Dst);
        }
        else {
          if (local_1c != 4) goto LAB_00559839;
          iVar14 = local_18[7];
          if ((iVar14 < local_18[8]) || (iVar5 = FUN_0053b4b0(local_18), iVar5 == 0)) {
            iVar5 = piVar4[1];
            piVar4[7] = piVar4[7] + 1;
            *(undefined2 *)(iVar5 + iVar14 * 0x14) = 1;
            *(undefined1 *)(iVar5 + 3 + iVar14 * 0x14) = 0;
            *(undefined4 *)(iVar5 + 4 + iVar14 * 0x14) = 0;
            *(undefined4 *)(iVar5 + 8 + iVar14 * 0x14) = param_9;
            *(undefined4 *)(iVar5 + 0xc + iVar14 * 0x14) = 0;
            *(undefined4 *)(iVar5 + 0x10 + iVar14 * 0x14) = 0;
          }
        }
        if ((-1 < (int)local_34) && (local_34 < (uint)piVar4[7])) {
          *(int *)(piVar4[1] + 8 + (int)local_34 * 0x14) = piVar4[7];
        }
        if ((local_10 != (int *)0x0) && (*(byte *)((int)param_1 + 0x13) < 8)) {
          iVar14 = 0;
          piVar11 = local_28;
          do {
            if ((int *)piVar11[4] == local_10) {
              *(undefined1 *)(piVar11 + 2) = 1;
              goto LAB_005598ce;
            }
            iVar14 = iVar14 + 1;
            piVar11 = piVar11 + 6;
          } while (iVar14 < 10);
          param_1[*(byte *)((int)param_1 + 0x13) + 7] = (int)local_10;
          *(char *)((int)param_1 + 0x13) = *(char *)((int)param_1 + 0x13) + '\x01';
        }
      }
    }
LAB_005598ce:
    local_8 = *(int *)(local_8 + 0x14);
    local_c = local_c + 1;
  } while( true );
}


/* FUN_00559920 @ 00559920  kind=lib  attributed-by=lib-island  size=660 */

int FUN_00559920(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  int local_c;
  
  iVar2 = *(int *)(param_2 + 0xc);
  iVar7 = *(int *)(param_2 + 0x24);
  iVar9 = param_1[0x10];
  piVar3 = (int *)param_1[2];
  iVar1 = iVar7 + 1;
  if (param_1[0xf] < iVar1) {
    iVar9 = param_1[0x13] + 1;
    param_1[0x13] = param_1[0x13] + iVar1;
  }
  else {
    param_1[0x10] = iVar9 + iVar1;
    param_1[0xf] = param_1[0xf] - iVar1;
  }
  iVar10 = piVar3[7];
  if ((iVar10 < piVar3[8]) || (iVar5 = FUN_0053b4b0(piVar3), iVar5 == 0)) {
    piVar3[7] = piVar3[7] + 1;
    iVar5 = piVar3[1];
    *(undefined2 *)(iVar5 + iVar10 * 0x14) = 0x41;
    iVar5 = iVar5 + iVar10 * 0x14;
    *(undefined4 *)(iVar5 + 4) = param_3;
    *(undefined1 *)(iVar5 + 3) = 0;
    *(int *)(iVar5 + 8) = iVar9 + iVar7;
    *(undefined4 *)(iVar5 + 0xc) = 0;
    *(undefined4 *)(iVar5 + 0x10) = 0;
  }
  iVar10 = 0;
  local_c = iVar9;
  if (0 < iVar7) {
    do {
      iVar5 = *(int *)(*(int *)(param_2 + 4) + iVar10 * 4);
      iVar4 = piVar3[7];
      if (iVar5 == *(short *)(iVar2 + 0x24)) {
        if ((iVar4 < piVar3[8]) || (iVar5 = FUN_0053b4b0(piVar3), iVar5 == 0)) {
          piVar3[7] = piVar3[7] + 1;
          iVar5 = piVar3[1];
          *(undefined2 *)(iVar5 + iVar4 * 0x14) = 0xf;
          iVar5 = iVar5 + iVar4 * 0x14;
          *(int *)(iVar5 + 4) = iVar7 + iVar9;
          *(undefined1 *)(iVar5 + 3) = 0;
          *(int *)(iVar5 + 8) = local_c;
          *(undefined4 *)(iVar5 + 0xc) = 0;
          *(undefined4 *)(iVar5 + 0x10) = 0;
        }
      }
      else {
        if ((iVar4 < piVar3[8]) || (iVar6 = FUN_0053b4b0(piVar3), iVar6 == 0)) {
          piVar3[7] = piVar3[7] + 1;
          iVar6 = piVar3[1];
          *(undefined4 *)(iVar6 + 4 + iVar4 * 0x14) = param_3;
          *(int *)(iVar6 + 0xc + iVar4 * 0x14) = local_c;
          *(undefined2 *)(iVar6 + iVar4 * 0x14) = 0x1d;
          *(undefined1 *)(iVar6 + 3 + iVar4 * 0x14) = 0;
          *(int *)(iVar6 + 8 + iVar4 * 0x14) = iVar5;
          *(undefined4 *)(iVar6 + 0x10 + iVar4 * 0x14) = 0;
        }
        FUN_00550cd0(piVar3,iVar2,iVar5,0xffffffff);
      }
      iVar10 = iVar10 + 1;
      local_c = local_c + 1;
    } while (iVar10 < iVar7);
  }
  if (param_5 != 0) {
    if ((*(int *)(iVar2 + 0xc) == 0) && ((*(byte *)(*param_1 + 0x34) & 0x10) == 0)) {
      param_2 = FUN_0055b220(piVar3,param_2);
    }
    else {
      param_2 = 0;
    }
    iVar2 = piVar3[7];
    if ((iVar2 < piVar3[8]) || (iVar7 = FUN_0053b4b0(piVar3), iVar7 == 0)) {
      piVar3[7] = piVar3[7] + 1;
      iVar7 = piVar3[1];
      *(undefined2 *)(iVar7 + iVar2 * 0x14) = 0x1f;
      iVar7 = iVar7 + iVar2 * 0x14;
      *(int *)(iVar7 + 4) = iVar9;
      *(int *)(iVar7 + 8) = iVar1;
      *(undefined1 *)(iVar7 + 3) = 0;
      *(undefined4 *)(iVar7 + 0xc) = param_4;
      *(undefined4 *)(iVar7 + 0x10) = 0;
    }
    iVar2 = piVar3[1];
    iVar7 = *piVar3;
    if ((iVar2 == 0) || (*(char *)(iVar7 + 0x38) != '\0')) {
      FUN_00539320(iVar7,0,param_2);
    }
    else {
      iVar10 = iVar2 + (piVar3[7] + -1) * 0x14;
      FUN_00539320(iVar7,(int)*(char *)(iVar10 + 1),
                   *(undefined4 *)(iVar2 + 0x10 + (piVar3[7] + -1) * 0x14));
      *(undefined4 *)(iVar10 + 0x10) = 0;
      if (param_2 == 0) {
        *(undefined4 *)(iVar10 + 0x10) = 0;
        *(undefined1 *)(iVar10 + 1) = 0;
      }
      else {
        uVar11 = FUN_00568070(param_2);
        uVar8 = FUN_005524a0(*piVar3,(int)((ulonglong)uVar11 >> 0x20),(int)uVar11);
        *(undefined4 *)(iVar10 + 0x10) = uVar8;
        *(undefined1 *)(iVar10 + 1) = 0xff;
      }
    }
  }
  FUN_00554430(param_1,iVar9,iVar1);
  if (param_1[0xf] < iVar1) {
    param_1[0xf] = iVar1;
    param_1[0x10] = iVar9;
  }
  return iVar9;
}


/* FUN_00559bc0 @ 00559bc0  kind=lib  attributed-by=lib-island  size=844 */

void FUN_00559bc0(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 int param_6,undefined4 param_7)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  int local_8;
  
  piVar3 = param_2;
  piVar2 = (int *)param_1[2];
  local_8 = 0;
  iVar4 = FUN_005741e0(piVar2);
  iVar6 = piVar2[7];
  if ((iVar6 < piVar2[8]) || (iVar5 = FUN_0053b4b0(piVar2), iVar5 == 0)) {
    iVar5 = piVar2[1];
    piVar2[7] = piVar2[7] + 1;
    *(undefined4 *)(iVar5 + 4 + iVar6 * 0x14) = param_3;
    *(int *)(iVar5 + 8 + iVar6 * 0x14) = iVar4;
    *(undefined2 *)(iVar5 + iVar6 * 0x14) = 0x36;
    *(undefined1 *)(iVar5 + 3 + iVar6 * 0x14) = 0;
    *(undefined4 *)(iVar5 + 0xc + iVar6 * 0x14) = param_4;
    *(undefined4 *)(iVar5 + 0x10 + iVar6 * 0x14) = 0;
  }
  if ((((*(uint *)(*param_1 + 0x18) & 0x40000) != 0) &&
      ((iVar6 = FUN_00558520(param_2), iVar6 != 0 || (param_2[4] != 0)))) || (param_6 != 0)) {
    param_2 = (int *)0x0;
    for (iVar6 = param_6; iVar6 != 0; iVar6 = *(int *)(iVar6 + 0x20)) {
      if ((((*(char *)(iVar6 + 8) == 'j') && ((*(byte *)(iVar6 + 9) & 3) != 0)) &&
          (iVar5 = FUN_0052f320(*(undefined4 *)(iVar6 + 0x10),0), iVar5 != 0)) &&
         (iVar5 = FUN_0053ad90(param_1,iVar6,piVar3,param_7), iVar5 != 0)) {
        param_2 = (int *)((uint)param_2 | *(uint *)(iVar5 + 0x10));
      }
    }
    uVar7 = FUN_005583e0(param_1,piVar3);
    iVar6 = param_1[0x13];
    param_1[0x13] = *(short *)((int)piVar3 + 0x26) + 1 + iVar6;
    iVar5 = piVar2[7];
    local_8 = iVar6 + 1;
    if ((iVar5 < piVar2[8]) || (iVar8 = FUN_0053b4b0(piVar2), iVar8 == 0)) {
      iVar8 = piVar2[1];
      piVar2[7] = piVar2[7] + 1;
      *(undefined4 *)(iVar8 + 4 + iVar5 * 0x14) = param_4;
      *(undefined2 *)(iVar8 + iVar5 * 0x14) = 0xe;
      *(undefined1 *)(iVar8 + 3 + iVar5 * 0x14) = 0;
      *(int *)(iVar8 + 8 + iVar5 * 0x14) = local_8;
      *(undefined4 *)(iVar8 + 0xc + iVar5 * 0x14) = 0;
      *(undefined4 *)(iVar8 + 0x10 + iVar5 * 0x14) = 0;
    }
    iVar5 = 0;
    if (0 < *(short *)((int)piVar3 + 0x26)) {
      do {
        if ((((uint)param_2 | uVar7) == 0xffffffff) ||
           ((((uint)param_2 | uVar7) & 1 << ((byte)iVar5 & 0x1f)) != 0)) {
          FUN_00554810(piVar2,piVar3,param_3,iVar5,iVar6 + 2 + iVar5);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(short *)((int)piVar3 + 0x26));
    }
    FUN_00550410(param_1,param_6,0x6a,0,1,piVar3,local_8,param_7,iVar4);
    iVar6 = piVar2[7];
    if ((iVar6 < piVar2[8]) || (iVar5 = FUN_0053b4b0(piVar2), iVar5 == 0)) {
      piVar2[7] = piVar2[7] + 1;
      iVar5 = piVar2[1];
      *(undefined4 *)(iVar5 + 4 + iVar6 * 0x14) = param_3;
      *(int *)(iVar5 + 8 + iVar6 * 0x14) = iVar4;
      *(undefined2 *)(iVar5 + iVar6 * 0x14) = 0x36;
      *(undefined1 *)(iVar5 + 3 + iVar6 * 0x14) = 0;
      *(undefined4 *)(iVar5 + 0xc + iVar6 * 0x14) = param_4;
      *(undefined4 *)(iVar5 + 0x10 + iVar6 * 0x14) = 0;
    }
    FUN_00557cc0(param_1,piVar3,local_8,0);
  }
  if (piVar3[3] == 0) {
    FUN_00559f10(param_1,piVar3,param_3,0);
    iVar6 = piVar2[7];
    if ((iVar6 < piVar2[8]) || (iVar5 = FUN_0053b4b0(piVar2), iVar5 == 0)) {
      piVar2[7] = piVar2[7] + 1;
      iVar5 = piVar2[1];
      *(undefined2 *)(iVar5 + iVar6 * 0x14) = 0x3b;
      iVar5 = iVar5 + iVar6 * 0x14;
      *(undefined4 *)(iVar5 + 4) = param_3;
      *(undefined1 *)(iVar5 + 3) = 0;
      *(undefined4 *)(iVar5 + 0xc) = 0;
      *(undefined4 *)(iVar5 + 0x10) = 0;
      *(uint *)(iVar5 + 8) = (uint)(param_5 != 0);
    }
    if (param_5 != 0) {
      iVar6 = piVar2[1];
      iVar5 = *piVar3;
      iVar8 = *piVar2;
      if ((iVar6 == 0) || (*(char *)(iVar8 + 0x38) != '\0')) {
        FUN_00539320(iVar8,0,iVar5);
      }
      else {
        iVar1 = iVar6 + (piVar2[7] + -1) * 0x14;
        FUN_00539320(iVar8,(int)*(char *)(iVar1 + 1),
                     *(undefined4 *)(iVar6 + 0x10 + (piVar2[7] + -1) * 0x14));
        *(undefined4 *)(iVar1 + 0x10) = 0;
        if (iVar5 == 0) {
          *(undefined4 *)(iVar1 + 0x10) = 0;
          *(undefined1 *)(iVar1 + 1) = 0;
        }
        else {
          uVar10 = FUN_00568070(iVar5);
          uVar9 = FUN_005524a0(*piVar2,(int)((ulonglong)uVar10 >> 0x20),(int)uVar10);
          *(undefined4 *)(iVar1 + 0x10) = uVar9;
          *(undefined1 *)(iVar1 + 1) = 0xff;
        }
      }
    }
  }
  FUN_00557c50(param_1,piVar3,0,local_8);
  FUN_00550410(param_1,param_6,0x6a,0,2,piVar3,local_8,param_7,iVar4);
  if (piVar2[10] != 0) {
    *(int *)(piVar2[10] - (iVar4 * 4 + 4)) = piVar2[7];
  }
  return;
}


/* FUN_00559f10 @ 00559f10  kind=lib  attributed-by=lib-island  size=187 */

void FUN_00559f10(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  
  piVar8 = param_4;
  iVar5 = param_3;
  for (iVar1 = *(int *)(param_2 + 8); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x14)) {
    iVar5 = iVar5 + 1;
    if ((param_4 == (int *)0x0) || (*piVar8 != 0)) {
      uVar6 = FUN_00559920(param_1,iVar1,param_3,0,0);
      iVar2 = *(int *)(param_1 + 8);
      iVar3 = *(int *)(iVar1 + 0x24);
      iVar4 = *(int *)(iVar2 + 0x1c);
      if ((iVar4 < *(int *)(iVar2 + 0x20)) || (iVar7 = FUN_0053b4b0(iVar2), iVar7 == 0)) {
        *(int *)(iVar2 + 0x1c) = *(int *)(iVar2 + 0x1c) + 1;
        iVar2 = *(int *)(iVar2 + 4);
        *(int *)(iVar2 + 4 + iVar4 * 0x14) = iVar5;
        *(undefined4 *)(iVar2 + 8 + iVar4 * 0x14) = uVar6;
        *(undefined2 *)(iVar2 + iVar4 * 0x14) = 0x62;
        *(undefined1 *)(iVar2 + 3 + iVar4 * 0x14) = 0;
        *(int *)(iVar2 + 0xc + iVar4 * 0x14) = iVar3 + 1;
        *(undefined4 *)(iVar2 + 0x10 + iVar4 * 0x14) = 0;
      }
    }
    piVar8 = piVar8 + 1;
  }
  return;
}


/* FUN_00559fd0 @ 00559fd0  kind=lib  attributed-by=lib-island  size=38 */

undefined4 FUN_00559fd0(undefined1 *param_1)

{
  return CONCAT31(CONCAT21(CONCAT11(*param_1,param_1[1]),param_1[2]),param_1[3]);
}


/* FUN_0055a000 @ 0055a000  kind=lib  attributed-by=lib-island  size=30 */

bool FUN_0055a000(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = FUN_0053b110(param_1,1,param_2);
  return cVar1 != '\0';
}


/* FUN_0055a020 @ 0055a020  kind=lib  attributed-by=lib-string  size=178 */

int FUN_0055a020(int *param_1,byte param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  if (param_3 == 0) {
    if (param_4 == 0) {
      iVar1 = *(int *)(iVar2 + 8);
    }
    else {
      iVar1 = FUN_00537090(iVar2,param_4,0);
    }
    if ((iVar1 != 0) && (param_3 = iVar1 + (uint)param_2 * 0x14 + -0x14, param_3 != 0))
    goto LAB_0055a061;
LAB_0055a067:
    FUN_0052efa0(iVar2,(uint)param_2,param_4);
    if (param_4 == 0) {
      iVar1 = *(int *)(iVar2 + 8);
    }
    else {
      iVar1 = FUN_00537090(iVar2,param_4,0);
    }
    if (iVar1 == 0) goto LAB_0055a0ba;
    param_3 = iVar1 + (uint)param_2 * 0x14 + -0x14;
  }
  else {
LAB_0055a061:
    if (*(int *)(param_3 + 0xc) == 0) goto LAB_0055a067;
  }
  if (param_3 != 0) {
    if (*(int *)(param_3 + 0xc) != 0) {
      return param_3;
    }
    iVar2 = FUN_0057ae20(iVar2,param_3);
    if (iVar2 == 0) {
      return param_3;
    }
  }
LAB_0055a0ba:
  FUN_00553950(param_1,"no such collation sequence: %s",param_4);
  return 0;
}


/* FUN_0055a0e0 @ 0055a0e0  kind=lib  attributed-by=lib-island  size=193 */

undefined4 FUN_0055a0e0(char *param_1,uint *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  bool bVar7;
  uint local_10;
  uint uStack_c;
  uint local_8;
  
  local_8 = 0;
  if (*param_1 == '-') {
    local_8 = 1;
  }
  else if (*param_1 != '+') goto LAB_0055a10c;
  param_1 = param_1 + 1;
LAB_0055a10c:
  cVar1 = *param_1;
  pcVar6 = param_1;
  while (cVar1 == '0') {
    pcVar6 = pcVar6 + 1;
    cVar1 = *pcVar6;
  }
  uStack_c = 0;
  local_10 = 0;
  param_1 = (char *)0x0;
  do {
    uVar5 = (int)pcVar6[(int)param_1] - 0x30;
    if (9 < uVar5) break;
    uVar2 = local_10 >> 0x1e;
    bVar7 = CARRY4(local_10,local_10 * 4);
    uVar4 = local_10 * 5;
    uVar3 = local_10 * 10;
    local_10 = uVar3 + uVar5;
    uStack_c = ((uStack_c + (uStack_c << 2 | uVar2) + (uint)bVar7) * 2 | uVar4 >> 0x1f) +
               ((int)uVar5 >> 0x1f) + (uint)CARRY4(uVar3,uVar5);
    param_1 = (char *)((int)param_1 + 1);
  } while ((int)param_1 < 0xb);
  if ((int)param_1 < 0xb) {
    uVar5 = (uint)(local_10 < local_8);
    if (((int)(uStack_c - uVar5) < 0) ||
       ((uStack_c == uVar5 || SBORROW4(uStack_c,uVar5) && (local_10 - local_8 < 0x80000000)))) {
      if (local_8 != 0) {
        local_10 = -local_10;
      }
      *param_2 = local_10;
      return 1;
    }
  }
  return 0;
}


/* FUN_0055a1b0 @ 0055a1b0  kind=lib  attributed-by=lib-island  size=51 */

int FUN_0055a1b0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if (param_2 <= *(int *)(param_1 + 0x3c)) {
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) - param_2;
    *(int *)(param_1 + 0x40) = iVar1 + param_2;
    return iVar1;
  }
  iVar1 = *(int *)(param_1 + 0x4c);
  *(int *)(param_1 + 0x4c) = iVar1 + param_2;
  return iVar1 + 1;
}


/* FUN_0055a1f0 @ 0055a1f0  kind=lib  attributed-by=lib-island  size=36 */

int FUN_0055a1f0(int param_1)

{
  byte bVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x13) == '\0') {
    iVar2 = *(int *)(param_1 + 0x4c) + 1;
    *(int *)(param_1 + 0x4c) = iVar2;
    return iVar2;
  }
  bVar1 = *(char *)(param_1 + 0x13) - 1;
  *(byte *)(param_1 + 0x13) = bVar1;
  return *(int *)(param_1 + 0x1c + (uint)bVar1 * 4);
}


/* FUN_0055a220 @ 0055a220  kind=lib  attributed-by=lib-island  size=1481 */

uint FUN_0055a220(byte *param_1,undefined4 *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  
  uVar4 = (uint)*param_1;
  switch(uVar4) {
  case 9:
  case 10:
  case 0xc:
  case 0xd:
  case 0x20:
    uVar4 = 1;
    bVar1 = (&DAT_007121d8)[param_1[1]];
    while ((bVar1 & 1) != 0) {
      iVar6 = uVar4 + 1;
      uVar4 = uVar4 + 1;
      bVar1 = (&DAT_007121d8)[param_1[iVar6]];
    }
    break;
  default:
switchD_0055a23e_caseD_b:
    if (((&DAT_007121d8)[uVar4] & 0x46) != 0) {
      uVar4 = 1;
      bVar1 = (&DAT_007121d8)[param_1[1]];
      while ((bVar1 & 0x46) != 0) {
        iVar6 = uVar4 + 1;
        uVar4 = uVar4 + 1;
        bVar1 = (&DAT_007121d8)[param_1[iVar6]];
      }
      uVar3 = FUN_0053cd40(param_1,uVar4);
      *param_2 = uVar3;
      return uVar4;
    }
    *param_2 = 0x94;
    return 1;
  case 0x21:
    if (param_1[1] != 0x3d) {
      *param_2 = 0x94;
      return 2;
    }
    goto LAB_0055a3b2;
  case 0x22:
  case 0x27:
  case 0x60:
    uVar2 = 1;
    bVar1 = param_1[1];
    while (uVar5 = (uint)bVar1, uVar5 != 0) {
      if (uVar5 == uVar4) {
        if (param_1[uVar2 + 1] != uVar4) break;
        uVar2 = uVar2 + 1;
      }
      iVar6 = uVar2 + 1;
      uVar2 = uVar2 + 1;
      bVar1 = param_1[iVar6];
    }
    if (uVar5 == 0x27) {
      *param_2 = 0x5e;
      return uVar2 + 1;
    }
    if (uVar5 != 0) {
      *param_2 = 0x1a;
      return uVar2 + 1;
    }
    *param_2 = 0x94;
    return uVar2;
  case 0x23:
    uVar4 = 1;
    if (((&DAT_007121d8)[param_1[1]] & 4) != 0) {
      do {
        iVar6 = uVar4 + 1;
        uVar4 = uVar4 + 1;
      } while (((&DAT_007121d8)[param_1[iVar6]] & 4) != 0);
      if (1 < (int)uVar4) {
        *param_2 = 0x84;
        return uVar4;
      }
    }
  case 0x24:
  case 0x3a:
  case 0x40:
    *param_2 = 0x85;
    uVar2 = (uint)param_1[1];
    iVar6 = 0;
    uVar4 = 1;
    if (uVar2 != 0) {
      do {
        if (((&DAT_007121d8)[uVar2] & 0x46) == 0) {
          if (uVar2 == 0x28) {
            if (0 < iVar6) goto LAB_0055a710;
            break;
          }
          if ((uVar2 != 0x3a) || (param_1[uVar4 + 1] != 0x3a)) break;
          uVar4 = uVar4 + 1;
        }
        else {
          iVar6 = iVar6 + 1;
        }
        uVar2 = (uint)param_1[uVar4 + 1];
        uVar4 = uVar4 + 1;
      } while (uVar2 != 0);
LAB_0055a73b:
      if (iVar6 != 0) {
        return uVar4;
      }
    }
    *param_2 = 0x94;
    return uVar4;
  case 0x25:
    *param_2 = 0x5a;
    return 1;
  case 0x26:
    *param_2 = 0x52;
    return 1;
  case 0x28:
    *param_2 = 0x16;
    return 1;
  case 0x29:
    *param_2 = 0x17;
    return 1;
  case 0x2a:
    *param_2 = 0x58;
    return 1;
  case 0x2b:
    *param_2 = 0x56;
    return 1;
  case 0x2c:
    *param_2 = 0x19;
    return 1;
  case 0x2d:
    if (param_1[1] != 0x2d) {
      *param_2 = 0x57;
      return 1;
    }
    bVar1 = param_1[2];
    uVar4 = 2;
    if (bVar1 != 0) {
      while (bVar1 != 10) {
        bVar1 = param_1[uVar4 + 1];
        uVar4 = uVar4 + 1;
        if (bVar1 == 0) {
          *param_2 = 0x95;
          return uVar4;
        }
      }
    }
    break;
  case 0x2e:
    if (((&DAT_007121d8)[param_1[1]] & 4) == 0) {
      *param_2 = 0x76;
      return 1;
    }
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
    uVar4 = 0;
    *param_2 = 0x81;
    bVar1 = (&DAT_007121d8)[*param_1];
    while ((bVar1 & 4) != 0) {
      iVar6 = uVar4 + 1;
      uVar4 = uVar4 + 1;
      bVar1 = (&DAT_007121d8)[param_1[iVar6]];
    }
    if (param_1[uVar4] == 0x2e) {
      bVar1 = (&DAT_007121d8)[param_1[uVar4 + 1]];
      uVar2 = uVar4;
      while (uVar4 = uVar2 + 1, (bVar1 & 4) != 0) {
        bVar1 = (&DAT_007121d8)[param_1[uVar2 + 2]];
        uVar2 = uVar4;
      }
      *param_2 = 0x82;
    }
    if (((param_1[uVar4] == 0x65) || (param_1[uVar4] == 0x45)) &&
       ((bVar1 = param_1[uVar4 + 1], ((&DAT_007121d8)[bVar1] & 4) != 0 ||
        (((bVar1 == 0x2b || (bVar1 == 0x2d)) && (((&DAT_007121d8)[param_1[uVar4 + 2]] & 4) != 0)))))
       ) {
      iVar6 = uVar4 + 2;
      uVar4 = uVar4 + 2;
      bVar1 = (&DAT_007121d8)[param_1[iVar6]];
      while ((bVar1 & 4) != 0) {
        iVar6 = uVar4 + 1;
        uVar4 = uVar4 + 1;
        bVar1 = (&DAT_007121d8)[param_1[iVar6]];
      }
      *param_2 = 0x82;
    }
    if (((&DAT_007121d8)[param_1[uVar4]] & 0x46) == 0) {
      return uVar4;
    }
    do {
      uVar4 = uVar4 + 1;
      *param_2 = 0x94;
    } while (((&DAT_007121d8)[param_1[uVar4]] & 0x46) != 0);
    return uVar4;
  case 0x2f:
    if ((param_1[1] != 0x2a) || (bVar1 = param_1[2], bVar1 == 0)) {
      *param_2 = 0x59;
      return 1;
    }
    for (uVar4 = 3; (bVar1 != 0x2a || (param_1[uVar4] != 0x2f)); uVar4 = uVar4 + 1) {
      bVar1 = param_1[uVar4];
      if (bVar1 == 0) goto LAB_0055a347;
    }
    uVar4 = uVar4 + 1;
LAB_0055a347:
    *param_2 = 0x95;
    return uVar4;
  case 0x3b:
    *param_2 = 1;
    return 1;
  case 0x3c:
    bVar1 = param_1[1];
    if (bVar1 == 0x3d) {
      *param_2 = 0x4e;
      return 2;
    }
    if (bVar1 != 0x3e) {
      if (bVar1 == 0x3c) {
        *param_2 = 0x54;
        return 2;
      }
      *param_2 = 0x4f;
      return 1;
    }
LAB_0055a3b2:
    *param_2 = 0x4b;
    return 2;
  case 0x3d:
    *param_2 = 0x4c;
    return (param_1[1] == 0x3d) + 1;
  case 0x3e:
    if (param_1[1] == 0x3d) {
      *param_2 = 0x50;
      return 2;
    }
    if (param_1[1] == 0x3e) {
      *param_2 = 0x55;
      return 2;
    }
    *param_2 = 0x4d;
    return 1;
  case 0x3f:
    uVar4 = 1;
    *param_2 = 0x85;
    if (((&DAT_007121d8)[param_1[1]] & 4) == 0) {
      return 1;
    }
    do {
      iVar6 = uVar4 + 1;
      uVar4 = uVar4 + 1;
    } while (((&DAT_007121d8)[param_1[iVar6]] & 4) != 0);
    return uVar4;
  case 0x58:
  case 0x78:
    if (param_1[1] != 0x27) goto switchD_0055a23e_caseD_b;
    uVar4 = 2;
    *param_2 = 0x83;
    bVar1 = (&DAT_007121d8)[param_1[2]];
    while ((bVar1 & 8) != 0) {
      iVar6 = uVar4 + 1;
      uVar4 = uVar4 + 1;
      bVar1 = (&DAT_007121d8)[param_1[iVar6]];
    }
    if (param_1[uVar4] == 0x27) {
      uVar2 = uVar4 & 0x80000001;
      bVar7 = uVar2 == 0;
      if ((int)uVar2 < 0) {
        bVar7 = (uVar2 - 1 | 0xfffffffe) == 0xffffffff;
      }
      if (bVar7) goto LAB_0055a7af;
    }
    *param_2 = 0x94;
    bVar1 = param_1[uVar4];
    while ((bVar1 != 0 && (bVar1 != 0x27))) {
      iVar6 = uVar4 + 1;
      uVar4 = uVar4 + 1;
      bVar1 = param_1[iVar6];
    }
LAB_0055a7af:
    if (param_1[uVar4] != 0) {
      uVar4 = uVar4 + 1;
    }
    return uVar4;
  case 0x5b:
    for (uVar2 = 1; (uVar4 != 0x5d && (uVar4 = (uint)param_1[uVar2], uVar4 != 0)); uVar2 = uVar2 + 1
        ) {
    }
    uVar3 = 0x94;
    if (uVar4 == 0x5d) {
      uVar3 = 0x1a;
    }
    *param_2 = uVar3;
    return uVar2;
  case 0x7c:
    if (param_1[1] != 0x7c) {
      *param_2 = 0x53;
      return 1;
    }
    *param_2 = 0x5b;
    return 2;
  case 0x7e:
    *param_2 = 0x5d;
    return 1;
  }
  *param_2 = 0x95;
  return uVar4;
  while (uVar5 != 0x29) {
LAB_0055a710:
    uVar2 = uVar4;
    uVar5 = (uint)param_1[uVar2 + 1];
    uVar4 = uVar2 + 1;
    if ((uVar5 == 0) || (((&DAT_007121d8)[uVar5] & 1) != 0)) {
      if (uVar5 == 0x29) {
        uVar4 = uVar2 + 2;
      }
      else {
        *param_2 = 0x94;
      }
      goto LAB_0055a73b;
    }
  }
  uVar4 = uVar2 + 2;
  goto LAB_0055a73b;
}


/* FUN_0055a900 @ 0055a900  kind=lib  attributed-by=lib-island  size=29 */

void FUN_0055a900(int param_1,int param_2)

{
  int *piVar1;
  
  for (piVar1 = *(int **)(param_2 + 0x38); (piVar1 != (int *)0x0 && (*piVar1 != param_1));
      piVar1 = (int *)piVar1[6]) {
  }
  return;
}


/* FUN_0055a920 @ 0055a920  kind=lib  attributed-by=lib-island  size=450 */

undefined4 FUN_0055a920(byte *param_1,uint *param_2)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = (uint)*param_1;
  if (-1 < (char)*param_1) {
    *param_2 = uVar3;
    param_2[1] = 0;
    return 1;
  }
  uVar4 = (uint)param_1[1];
  if (-1 < (char)param_1[1]) {
    *param_2 = (uVar3 & 0x7f) << 7 | uVar4;
    param_2[1] = 0;
    return 2;
  }
  uVar3 = uVar3 << 0xe | (uint)param_1[2];
  if (-1 < (char)param_1[2]) {
    *param_2 = (uVar4 & 0x7f) << 7 | uVar3 & 0x1fc07f;
    param_2[1] = 0;
    return 3;
  }
  uVar4 = uVar4 << 0xe | (uint)param_1[3];
  uVar3 = uVar3 & 0x1fc07f;
  if (-1 < (char)param_1[3]) {
    *param_2 = uVar4 & 0x1fc07f | uVar3 << 7;
    param_2[1] = 0;
    return 4;
  }
  uVar1 = uVar3 << 0xe | (uint)param_1[4];
  uVar4 = uVar4 & 0x1fc07f;
  if (-1 < (char)param_1[4]) {
    *param_2 = uVar4 << 7 | uVar1;
    param_2[1] = uVar3 >> 0x12;
    return 5;
  }
  uVar3 = uVar3 << 7 | uVar4;
  uVar4 = uVar4 << 0xe | (uint)param_1[5];
  if (-1 < (char)param_1[5]) {
    *param_2 = (uVar1 & 0x1fc07f) << 7 | uVar4;
    param_2[1] = uVar3 >> 0x12;
    return 6;
  }
  uVar1 = uVar1 << 0xe | (uint)param_1[6];
  if (-1 < (char)param_1[6]) {
    *param_2 = (uVar4 << 7 ^ uVar1) & 0xfe03f80 ^ uVar1;
    param_2[1] = uVar3 >> 0xb;
    return 7;
  }
  uVar5 = uVar4 << 0xe | (uint)param_1[7];
  uVar4 = (uVar1 & 0x1fc07f) << 7;
  if (-1 < (char)param_1[7]) {
    *param_2 = uVar5 & 0xf01fc07f | uVar4;
    param_2[1] = uVar3 >> 4;
    return 8;
  }
  bVar2 = param_1[4];
  *param_2 = (uVar5 & 0x1fc07f | uVar4) << 8 | (uint)param_1[8];
  param_2[1] = bVar2 >> 3 & 0xf | uVar3 << 4;
  return 9;
}


/* FUN_0055aaf0 @ 0055aaf0  kind=lib  attributed-by=lib-island  size=137 */

undefined1 FUN_0055aaf0(byte *param_1,uint *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  uint local_c;
  int local_8;
  
  bVar1 = param_1[1];
  if (-1 < (char)bVar1) {
    *param_2 = (*param_1 & 0x7f) << 7 | (uint)bVar1;
    return 2;
  }
  if ((char)param_1[2] < '\0') {
    uVar2 = FUN_0055a920(param_1,&local_c);
    if (local_8 != 0) {
      *param_2 = 0xffffffff;
      return uVar2;
    }
    *param_2 = local_c;
    return uVar2;
  }
  *param_2 = (bVar1 & 0x7f) << 7 | ((uint)*param_1 << 0xe | (uint)param_1[2]) & 0x1fc07f;
  return 3;
}


/* FUN_0055ab80 @ 0055ab80  kind=lib  attributed-by=lib-island  size=54 */

int FUN_0055ab80(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[2];
  if (iVar1 == 0) {
    iVar1 = FUN_0056c7b0(*param_1);
    param_1[2] = iVar1;
    if (iVar1 != 0) {
      FUN_0056bdc0(iVar1,0x94);
    }
  }
  return iVar1;
}


/* FUN_0055abc0 @ 0055abc0  kind=lib  attributed-by=lib-island  size=169 */

void FUN_0055abc0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_1[2];
  if (iVar1 == 0) {
    iVar1 = FUN_0056c7b0(*param_1);
    param_1[2] = iVar1;
    if (iVar1 != 0) {
      FUN_0056bdc0(iVar1,0x94);
    }
  }
  if (param_2 == 2) {
    if ((undefined4 *)param_1[0x6c] != (undefined4 *)0x0) {
      param_1 = (undefined4 *)param_1[0x6c];
    }
    *(undefined1 *)(param_1 + 6) = 1;
  }
  iVar3 = *(int *)(iVar1 + 0x1c);
  if (*(int *)(iVar1 + 0x20) <= iVar3) {
    iVar2 = FUN_0053b4b0(iVar1);
    if (iVar2 != 0) {
      iVar3 = 1;
      goto LAB_0055ac54;
    }
  }
  iVar2 = *(int *)(iVar1 + 4);
  *(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x1c) + 1;
  *(undefined2 *)(iVar2 + iVar3 * 0x14) = 6;
  *(undefined1 *)(iVar2 + 3 + iVar3 * 0x14) = 0;
  *(undefined4 *)(iVar2 + 4 + iVar3 * 0x14) = 0x13;
  *(int *)(iVar2 + 8 + iVar3 * 0x14) = param_2;
  *(undefined4 *)(iVar2 + 0xc + iVar3 * 0x14) = 0;
  *(undefined4 *)(iVar2 + 0x10 + iVar3 * 0x14) = 0;
LAB_0055ac54:
  FUN_0056c320(iVar1,iVar3,param_3,param_4);
  return;
}


/* FUN_0055ac70 @ 0055ac70  kind=lib  attributed-by=lib-island  size=214 */

void FUN_0055ac70(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)param_1[2];
  param_1[2] = 0;
  FUN_00524410(param_1[3]);
  param_1[3] = 0;
  *param_1 = 0;
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar1;
    if (DAT_007665e0 == 0) {
      (*DAT_00766604)(puVar1);
      puVar1 = puVar2;
    }
    else {
      if (DAT_0076b488 != 0) {
        (*DAT_00766630)(DAT_0076b488);
      }
      iVar3 = (*DAT_00766608._4_4_)(puVar1);
      DAT_0076b360 = DAT_0076b360 - iVar3;
      if (DAT_0076b388 < DAT_0076b360) {
        DAT_0076b388 = DAT_0076b360;
      }
      DAT_0076b384 = DAT_0076b384 + -1;
      if (DAT_0076b3ac < DAT_0076b384) {
        DAT_0076b3ac = DAT_0076b384;
      }
      (*DAT_00766604)(puVar1);
      puVar1 = puVar2;
      if (DAT_0076b488 != 0) {
        (*DAT_00766638)(DAT_0076b488);
      }
    }
  }
  param_1[1] = 0;
  return;
}


/* FUN_0055ad50 @ 0055ad50  kind=lib  attributed-by=lib-island  size=65 */

undefined4 FUN_0055ad50(uint *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  
  if (param_1[3] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0057a870(param_2,param_3);
    uVar1 = uVar1 % *param_1;
  }
  iVar2 = FUN_00537190(param_1,param_2,param_3,uVar1);
  if (iVar2 != 0) {
    return *(undefined4 *)(iVar2 + 8);
  }
  return 0;
}


/* FUN_0055ada0 @ 0055ada0  kind=lib  attributed-by=lib-island  size=272 */

uint FUN_0055ada0(uint *param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  
  uVar1 = *param_1;
  if (uVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0057a870(param_2,param_3);
    uVar2 = uVar2 % uVar1;
  }
  iVar3 = FUN_00537190(param_1,param_2,param_3,uVar2);
  if (iVar3 != 0) {
    uVar1 = *(uint *)(iVar3 + 8);
    if (param_4 == 0) {
      FUN_00545b50(param_1,iVar3,uVar2);
      return uVar1;
    }
    *(uint *)(iVar3 + 0xc) = param_2;
    *(uint *)(iVar3 + 8) = param_4;
    return uVar1;
  }
  if (param_4 != 0) {
    puVar4 = (uint *)FUN_0055da00(0x14);
    if (puVar4 == (uint *)0x0) {
      return param_4;
    }
    puVar4[3] = param_2;
    puVar4[4] = param_3;
    puVar4[2] = param_4;
    param_1[1] = param_1[1] + 1;
    uVar1 = param_1[1];
    if ((9 < uVar1) && (*param_1 * 2 < uVar1)) {
      iVar3 = FUN_005452d0(param_1,uVar1 * 2);
      if (iVar3 != 0) {
        uVar2 = FUN_0057a870(param_2,param_3);
        uVar2 = uVar2 % *param_1;
      }
    }
    if (param_1[3] != 0) {
      FUN_0053bf40(param_1,param_1[3] + uVar2 * 8,puVar4);
      return 0;
    }
    *puVar4 = param_1[2];
    if (param_1[2] != 0) {
      *(uint **)(param_1[2] + 4) = puVar4;
    }
    puVar4[1] = 0;
    param_1[2] = (uint)puVar4;
  }
  return 0;
}


/* FUN_0055aeb0 @ 0055aeb0  kind=lib  attributed-by=lib-island  size=142 */

int FUN_0055aeb0(undefined4 param_1,int param_2,int param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar3 = FUN_00552230(param_1,param_3 / 2 + 1);
  if (iVar3 != 0) {
    uVar5 = 0;
    if (0 < param_3 + -1) {
      do {
        cVar2 = *(char *)(param_2 + 1 + uVar5);
        pcVar1 = (char *)(param_2 + uVar5);
        uVar4 = uVar5 >> 1;
        uVar5 = uVar5 + 2;
        *(byte *)(uVar4 + iVar3) =
             cVar2 + (cVar2 >> 6 & 1U) * -7 & 0xf ^ (*pcVar1 + (*pcVar1 >> 6 & 1U) * -7) * '\x10';
      } while ((int)uVar5 < param_3 + -1);
    }
    *(undefined1 *)((int)uVar5 / 2 + iVar3) = 0;
  }
  return iVar3;
}


/* FUN_0055af40 @ 0055af40  kind=lib  attributed-by=lib-island  size=117 */

int * FUN_0055af40(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  
  piVar2 = param_2;
  if (param_2 == (int *)0x0) {
    piVar2 = (int *)FUN_00552230(param_1,8);
    if (piVar2 == (int *)0x0) {
      return (int *)0x0;
    }
    piVar2[0] = 0;
    piVar2[1] = 0;
  }
  iVar3 = FUN_0054a2b0(param_1,*piVar2,8,piVar2 + 1,&param_2);
  piVar1 = param_2;
  *piVar2 = iVar3;
  if ((int)param_2 < 0) {
    FUN_0055afc0(param_1,piVar2);
    return (int *)0x0;
  }
  uVar4 = FUN_0055e3f0(param_1,param_3);
  *(undefined4 *)(*piVar2 + (int)piVar1 * 8) = uVar4;
  return piVar2;
}


/* FUN_0055afc0 @ 0055afc0  kind=lib  attributed-by=lib-island  size=191 */

void FUN_0055afc0(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 != (int *)0x0) {
    iVar3 = 0;
    if (0 < param_2[1]) {
      do {
        puVar1 = *(undefined4 **)(*param_2 + iVar3 * 8);
        if (param_1 == 0) {
LAB_0055b055:
          FUN_00524410(puVar1);
        }
        else if (*(int *)(param_1 + 0x1f0) == 0) {
          if (((puVar1 == (undefined4 *)0x0) || (puVar1 < *(undefined4 **)(param_1 + 0x104))) ||
             (*(undefined4 **)(param_1 + 0x108) <= puVar1)) goto LAB_0055b055;
          *puVar1 = *(undefined4 *)(param_1 + 0x100);
          *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + -1;
          *(undefined4 **)(param_1 + 0x100) = puVar1;
        }
        else if (((puVar1 == (undefined4 *)0x0) || (puVar1 < *(undefined4 **)(param_1 + 0x104))) ||
                (*(undefined4 **)(param_1 + 0x108) <= puVar1)) {
          iVar2 = (*DAT_00766608._4_4_)(puVar1);
          **(int **)(param_1 + 0x1f0) = **(int **)(param_1 + 0x1f0) + iVar2;
        }
        else {
          **(int **)(param_1 + 0x1f0) =
               **(int **)(param_1 + 0x1f0) + (uint)*(ushort *)(param_1 + 0xe8);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < param_2[1]);
    }
    FUN_005521a0(param_1,*param_2);
    FUN_005521a0(param_1,param_2);
  }
  return;
}


/* FUN_0055b080 @ 0055b080  kind=lib  attributed-by=lib-island  size=221 */

int * FUN_0055b080(undefined4 param_1,int *param_2)

{
  char cVar1;
  char *_Src;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  size_t _Size;
  undefined4 *puVar5;
  undefined4 *puVar6;
  void *_Dst;
  int local_8;
  
  if (param_2 == (int *)0x0) {
    return (int *)0x0;
  }
  piVar2 = (int *)FUN_00552230(param_1,8);
  if (piVar2 != (int *)0x0) {
    piVar2[1] = param_2[1];
    iVar3 = FUN_00552230(param_1,param_2[1] << 3);
    *piVar2 = iVar3;
    if (iVar3 != 0) {
      local_8 = 0;
      if (0 < param_2[1]) {
        do {
          puVar5 = (undefined4 *)(*param_2 + local_8 * 8);
          puVar6 = (undefined4 *)(*piVar2 + local_8 * 8);
          _Src = (char *)*puVar5;
          if (_Src == (char *)0x0) {
            _Dst = (void *)0x0;
          }
          else {
            cVar1 = *_Src;
            pcVar4 = _Src;
            while (cVar1 != '\0') {
              pcVar4 = pcVar4 + 1;
              cVar1 = *pcVar4;
            }
            _Size = ((int)pcVar4 - (int)_Src & 0x3fffffffU) + 1;
            _Dst = (void *)FUN_00552230(param_1,_Size);
            if (_Dst != (void *)0x0) {
              memcpy(_Dst,_Src,_Size);
            }
          }
          *puVar6 = _Dst;
          puVar6[1] = puVar5[1];
          local_8 = local_8 + 1;
        } while (local_8 < param_2[1]);
      }
      return piVar2;
    }
    FUN_005521a0(param_1,piVar2);
  }
  return (int *)0x0;
}


/* FUN_0055b160 @ 0055b160  kind=lib  attributed-by=lib-island  size=127 */

int FUN_0055b160(undefined4 *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  int iVar6;
  
  if (param_1 == (undefined4 *)0x0) {
    return -1;
  }
  iVar6 = 0;
  if (0 < (int)param_1[1]) {
    puVar4 = (undefined4 *)*param_1;
    do {
      pbVar3 = (byte *)*puVar4;
      bVar2 = *pbVar3;
      pbVar5 = param_2;
      while ((bVar2 != 0 && ((&DAT_007120d8)[bVar2] == (&DAT_007120d8)[*pbVar5]))) {
        pbVar1 = pbVar3 + 1;
        pbVar3 = pbVar3 + 1;
        pbVar5 = pbVar5 + 1;
        bVar2 = *pbVar1;
      }
      if ((&DAT_007120d8)[*pbVar3] == (&DAT_007120d8)[*pbVar5]) {
        return iVar6;
      }
      iVar6 = iVar6 + 1;
      puVar4 = puVar4 + 2;
    } while (iVar6 < (int)param_1[1]);
  }
  return -1;
}


/* FUN_0055b1e0 @ 0055b1e0  kind=lib  attributed-by=lib-island  size=54 */

bool FUN_0055b1e0(undefined4 param_1,char param_2)

{
  char cVar1;
  
  cVar1 = FUN_005328e0(param_1);
  if (cVar1 == 'a') {
    return param_2 == 'a';
  }
  if (cVar1 != 'b') {
    return 'b' < param_2;
  }
  return true;
}


/* FUN_0055b220 @ 0055b220  kind=lib  attributed-by=lib-island  size=116 */

undefined4 FUN_0055b220(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_2 + 0x10) == 0) {
    iVar1 = *(int *)(param_2 + 0xc);
    iVar3 = *param_1;
    iVar2 = FUN_0055da00(*(int *)(param_2 + 0x24) + 2);
    *(int *)(param_2 + 0x10) = iVar2;
    if (iVar2 == 0) {
      *(undefined1 *)(iVar3 + 0x38) = 1;
      return 0;
    }
    iVar2 = 0;
    iVar3 = iVar2;
    if (0 < *(int *)(param_2 + 0x24)) {
      do {
        iVar2 = iVar3 + 1;
        *(undefined1 *)(iVar3 + *(int *)(param_2 + 0x10)) =
             *(undefined1 *)
              (*(int *)(iVar1 + 4) + 0x15 + *(int *)(*(int *)(param_2 + 4) + iVar3 * 4) * 0x18);
        iVar3 = iVar2;
      } while (iVar2 < *(int *)(param_2 + 0x24));
    }
    *(undefined1 *)(iVar2 + *(int *)(param_2 + 0x10)) = 100;
    *(undefined1 *)(iVar2 + 1 + *(int *)(param_2 + 0x10)) = 0;
  }
  return *(undefined4 *)(param_2 + 0x10);
}


/* FUN_0055b2a0 @ 0055b2a0  kind=lib  attributed-by=lib-island  size=287 */

int * FUN_0055b2a0(int *param_1,int param_2)

{
  size_t _Size;
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *_Dst;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar3 = *param_1;
  iVar4 = *(int *)(param_2 + 0x24);
  _Size = iVar4 * 5 + 0xc;
  _Dst = (int *)FUN_00552230(iVar3,_Size);
  if (_Dst != (int *)0x0) {
    memset(_Dst,0,_Size);
    if (_Dst != (int *)0x0) {
      iVar8 = 0;
      *_Dst = *param_1;
      _Dst[2] = (int)(_Dst + iVar4 + 3);
      if (0 < iVar4) {
        do {
          iVar6 = *param_1;
          cVar1 = *(char *)(iVar6 + 0x81);
          iVar5 = *(int *)(*(int *)(param_2 + 0x20) + iVar8 * 4);
          bVar2 = *(byte *)(*(int *)(*(int *)(iVar6 + 0x10) + 0xc) + 0x4d);
          if (iVar5 == 0) {
            iVar6 = *(int *)(iVar6 + 8);
          }
          else {
            iVar6 = FUN_00537090(iVar6,iVar5,cVar1);
          }
          iVar7 = 0;
          if (iVar6 != 0) {
            iVar7 = iVar6 + (uint)bVar2 * 0x14 + -0x14;
          }
          if ((cVar1 == '\0') && ((iVar7 == 0 || (*(int *)(iVar7 + 0xc) == 0)))) {
            iVar7 = FUN_0055a020(param_1,bVar2,iVar7,iVar5);
          }
          _Dst[iVar8 + 3] = iVar7;
          *(undefined1 *)(iVar8 + _Dst[2]) = *(undefined1 *)(iVar8 + *(int *)(param_2 + 0x1c));
          iVar8 = iVar8 + 1;
        } while (iVar8 < iVar4);
      }
      *(short *)((int)_Dst + 6) = (short)iVar4;
    }
  }
  if (param_1[0x11] != 0) {
    FUN_005521a0(iVar3,_Dst);
    return (int *)0x0;
  }
  return _Dst;
}


/* FUN_0055b3c0 @ 0055b3c0  kind=lib  attributed-by=lib-string  size=155 */

undefined4 FUN_0055b3c0(int param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  if ((*(int *)(param_2 + 0x10) != 0) &&
     (pbVar3 = *(byte **)(param_2 + 0x40), pbVar3 != (byte *)0x0)) {
    puVar4 = *(undefined4 **)(*(int *)(param_2 + 0x10) + 8);
    while( true ) {
      if (puVar4 == (undefined4 *)0x0) {
        FUN_00553950(param_1,"no such index: %s",pbVar3,0);
        *(undefined1 *)(param_1 + 0x11) = 1;
        return 1;
      }
      pbVar5 = (byte *)*puVar4;
      bVar2 = *pbVar5;
      pbVar6 = pbVar3;
      while ((bVar2 != 0 && ((&DAT_007120d8)[bVar2] == (&DAT_007120d8)[*pbVar6]))) {
        pbVar1 = pbVar5 + 1;
        pbVar5 = pbVar5 + 1;
        pbVar6 = pbVar6 + 1;
        bVar2 = *pbVar1;
      }
      if ((&DAT_007120d8)[*pbVar5] == (&DAT_007120d8)[*pbVar6]) break;
      puVar4 = (undefined4 *)puVar4[5];
    }
    *(undefined4 **)(param_2 + 0x44) = puVar4;
  }
  return 0;
}


/* FUN_0055b460 @ 0055b460  kind=lib  attributed-by=lib-island  size=217 */

int FUN_0055b460(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = param_1;
  uVar1 = *(uint *)(param_1 + 0x18);
  iVar4 = 0;
  *(undefined1 *)(param_1 + 0x81) = 1;
  param_1 = 0;
  iVar3 = 0;
  do {
    if (*(int *)(iVar2 + 0x14) <= iVar3) {
      if ((((iVar4 == 0) && (1 < *(int *)(iVar2 + 0x14))) &&
          ((*(byte *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x1c) + 0x4e) & 1) == 0)) &&
         (iVar4 = FUN_0055b750(iVar2,1,param_2), iVar4 != 0)) {
        FUN_00565020(*(undefined4 *)(*(int *)(iVar2 + 0x10) + 0x1c));
      }
      break;
    }
    if ((((*(byte *)(*(int *)(*(int *)(iVar2 + 0x10) + 0xc + param_1) + 0x4e) & 1) == 0) &&
        (iVar3 != 1)) && (iVar4 = FUN_0055b750(iVar2,iVar3,param_2), iVar4 != 0)) {
      FUN_00565020(*(undefined4 *)(*(int *)(iVar2 + 0x10) + 0xc + param_1));
      FUN_00565020(*(undefined4 *)(*(int *)(iVar2 + 0x10) + 0x1c));
    }
    param_1 = param_1 + 0x10;
    iVar3 = iVar3 + 1;
  } while (iVar4 == 0);
  *(undefined1 *)(iVar2 + 0x81) = 0;
  if ((iVar4 == 0) && ((~(uVar1 >> 1) & 1) != 0)) {
    *(uint *)(iVar2 + 0x18) = *(uint *)(iVar2 + 0x18) & 0xfffffffd;
  }
  return iVar4;
}


/* FUN_0055b540 @ 0055b540  kind=lib  attributed-by=lib-string  size=527 */

undefined4 FUN_0055b540(int *param_1,undefined4 param_2,int *param_3)

{
  ushort *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined *puVar5;
  undefined4 uVar6;
  int iVar7;
  
  piVar4 = param_3;
  piVar3 = param_1;
  iVar7 = *param_1;
  iVar2 = param_1[2];
  puVar1 = (ushort *)(*(int *)(*(int *)(iVar7 + 0x10) + 0xc + iVar2 * 0x10) + 0x4e);
  *puVar1 = *puVar1 & 0xfffb;
  if (*(char *)(iVar7 + 0x38) != '\0') {
    iVar7 = *param_1;
    if (*(char *)(iVar7 + 0x38) == '\0') {
      if ((*(uint *)(iVar7 + 0x18) & 0x8000) == 0) {
        puVar5 = &DAT_00715ec8;
        if ((undefined *)*param_3 != (undefined *)0x0) {
          puVar5 = (undefined *)*param_3;
        }
        FUN_005670f0(param_1[1],iVar7,"malformed database schema (%s)",puVar5);
      }
      if (*(char *)(iVar7 + 0x38) == '\0') {
        FUN_00525a30(0xb,"database corruption at line %d of [%.10s]",0x16d12,
                     "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
        piVar3[3] = 0xb;
        return 1;
      }
    }
    piVar3[3] = 7;
    return 1;
  }
  if (param_3 != (int *)0x0) {
    if (param_3[1] == 0) {
      FUN_005338d0(param_1,*param_3,0);
      return 0;
    }
    if (((char *)param_3[2] != (char *)0x0) && (*(char *)param_3[2] != '\0')) {
      *(char *)(iVar7 + 0x80) = (char)iVar2;
      uVar6 = FUN_0054a970(param_3[1]);
      *(undefined4 *)(iVar7 + 0x7c) = uVar6;
      *(undefined1 *)(iVar7 + 0x82) = 0;
      FUN_0055d830(iVar7,piVar4[2],0xffffffff,0,0,&param_1,0);
      iVar2 = *(int *)(iVar7 + 0x2c);
      *(undefined1 *)(iVar7 + 0x80) = 0;
      if ((iVar2 != 0) && (*(char *)(iVar7 + 0x82) == '\0')) {
        piVar3[3] = iVar2;
        if (iVar2 == 7) {
          *(undefined1 *)(iVar7 + 0x38) = 1;
          FUN_00528070(param_1);
          return 0;
        }
        if ((iVar2 != 9) && ((char)iVar2 != '\x06')) {
          uVar6 = FUN_00525e30(iVar7);
          FUN_005338d0(piVar3,*piVar4,uVar6);
        }
      }
      FUN_00528070(param_1);
      return 0;
    }
    if (*param_3 == 0) {
      iVar7 = *param_1;
      if (*(char *)(iVar7 + 0x38) == '\0') {
        if ((*(uint *)(iVar7 + 0x18) & 0x8000) == 0) {
          FUN_005670f0(param_1[1],iVar7,"malformed database schema (%s)",&DAT_00715ec8);
        }
        if (*(char *)(iVar7 + 0x38) == '\0') {
          FUN_00525a30(0xb,"database corruption at line %d of [%.10s]",0x16d12,
                       "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
          piVar3[3] = 0xb;
          return 0;
        }
      }
      piVar3[3] = 7;
      return 0;
    }
    iVar7 = FUN_00557190(iVar7,*param_3,*(undefined4 *)(*(int *)(iVar7 + 0x10) + iVar2 * 0x10));
    if (iVar7 != 0) {
      iVar7 = FUN_0055a0e0(piVar4[1],iVar7 + 0x28);
      if (iVar7 == 0) {
        FUN_005338d0(piVar3,*piVar4,"invalid rootpage");
      }
    }
  }
  return 0;
}


/* FUN_0055b750 @ 0055b750  kind=lib  attributed-by=lib-string  size=1226 */

void FUN_0055b750(int param_1,int param_2,undefined4 param_3)

{
  ushort *puVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  int iVar9;
  byte bVar10;
  int iVar11;
  undefined4 *puVar12;
  char *pcVar13;
  int local_4c;
  undefined4 local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  char *local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  char *local_18;
  undefined1 *local_14;
  char *local_10;
  uint local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_20 = param_1;
  local_28 = param_2;
  local_30 = param_3;
  local_3c = 0;
  if (param_2 == 1) {
    local_10 = 
    "CREATE TEMP TABLE sqlite_temp_master(\n  type text,\n  name text,\n  tbl_name text,\n  rootpage integer,\n  sql text\n)"
    ;
    local_34 = "sqlite_temp_master";
  }
  else {
    local_10 = 
    "CREATE TABLE sqlite_master(\n  type text,\n  name text,\n  tbl_name text,\n  rootpage integer,\n  sql text\n)"
    ;
    local_34 = "sqlite_master";
  }
  local_14 = &DAT_007157e0;
  local_c = 0;
  local_4c = param_1;
  local_44 = param_2;
  local_40 = 0;
  local_48 = param_3;
  local_18 = local_34;
  FUN_0055b540(&local_4c,3,&local_18,0);
  iVar11 = local_40;
  if (local_40 != 0) goto LAB_0055bbfc;
  iVar11 = param_2 * 0x10;
  local_38 = iVar11;
  iVar4 = FUN_005572d0(param_1,local_34,*(undefined4 *)(*(int *)(param_1 + 0x10) + iVar11));
  if (iVar4 != 0) {
    *(byte *)(iVar4 + 0x2a) = *(byte *)(iVar4 + 0x2a) | 1;
  }
  iVar11 = iVar11 + *(int *)(param_1 + 0x10);
  local_2c = iVar11;
  if (*(int *)(iVar11 + 4) == 0) {
    if (param_2 == 1) {
      puVar1 = (ushort *)(*(int *)(*(int *)(param_1 + 0x10) + 0x1c) + 0x4e);
      *puVar1 = *puVar1 | 1;
    }
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  FUN_0054d260(*(int *)(iVar11 + 4));
  local_24 = *(int *)(iVar11 + 4);
  if (*(char *)(local_24 + 8) == '\0') {
    iVar4 = *(int *)(local_24 + 4);
    iVar11 = 0;
    FUN_0054d260(local_24);
    if ((*(char *)(local_24 + 8) != '\x02') && (*(char *)(local_24 + 8) != '\x01')) {
      if (((*(byte *)(iVar4 + 0x16) & 0x40) == 0) || (**(int **)(iVar4 + 0x4c) == 0)) {
        iVar11 = FUN_00544bb0(local_24,1,1);
        if (iVar11 == 0) {
          *(ushort *)(iVar4 + 0x16) = *(ushort *)(iVar4 + 0x16) & 0xfff7;
          if (*(int *)(iVar4 + 0x2c) == 0) {
            *(ushort *)(iVar4 + 0x16) = *(ushort *)(iVar4 + 0x16) | 8;
          }
LAB_0055b8b0:
          if (*(int *)(iVar4 + 0xc) == 0) goto code_r0x0055b8b6;
          if (iVar11 != 0) goto LAB_0055b8cb;
          goto LAB_0055b907;
        }
      }
      else {
        iVar11 = 0x106;
      }
    }
    goto LAB_0055b985;
  }
LAB_0055b9d6:
  iVar4 = 0;
  puVar12 = &local_1c;
  do {
    iVar4 = iVar4 + 1;
    FUN_0054d510(*(undefined4 *)(iVar11 + 4),iVar4,puVar12);
    param_1 = local_20;
    iVar9 = local_28;
    puVar12 = puVar12 + 1;
  } while (iVar4 < 5);
  **(undefined4 **)(iVar11 + 0xc) = local_1c;
  if (local_c == 0) {
    puVar1 = (ushort *)(*(int *)(*(int *)(local_20 + 0x10) + 0xc + local_38) + 0x4e);
    *puVar1 = *puVar1 | 4;
LAB_0055ba60:
    *(undefined1 *)(*(int *)(iVar11 + 0xc) + 0x4d) =
         *(undefined1 *)(*(int *)(*(int *)(local_20 + 0x10) + 0xc) + 0x4d);
    if (*(int *)(*(int *)(iVar11 + 0xc) + 0x50) == 0) {
      puVar7 = local_14;
      if ((int)local_14 < 0) {
        if (local_14 != (undefined1 *)0x80000000) {
          puVar7 = (undefined1 *)-(int)local_14;
          goto LAB_0055ba8f;
        }
        puVar7 = (undefined1 *)0x7fffffff;
      }
      else {
LAB_0055ba8f:
        if (puVar7 == (undefined1 *)0x0) {
          puVar7 = (undefined1 *)0x7d0;
        }
      }
      *(undefined1 **)(*(int *)(iVar11 + 0xc) + 0x50) = puVar7;
      FUN_0054f1d0(*(undefined4 *)(iVar11 + 4),*(undefined4 *)(*(int *)(iVar11 + 0xc) + 0x50));
    }
    *(char *)(*(int *)(iVar11 + 0xc) + 0x4c) = (char)local_18;
    if (*(char *)(*(int *)(iVar11 + 0xc) + 0x4c) == '\0') {
      *(undefined1 *)(*(int *)(iVar11 + 0xc) + 0x4c) = 1;
    }
    if (4 < *(byte *)(*(int *)(iVar11 + 0xc) + 0x4c)) {
      pcVar13 = "unsupported file format";
      goto LAB_0055ba3b;
    }
    if ((iVar9 == 0) && (3 < (int)local_18)) {
      *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xffffefff;
    }
    uVar8 = FUN_0055d980(param_1,"SELECT name, rootpage, sql FROM \'%q\'.%s ORDER BY rowid",
                         *(undefined4 *)(*(int *)(param_1 + 0x10) + local_38),local_34);
    uVar6 = *(undefined4 *)(local_20 + 0x10c);
    *(undefined4 *)(local_20 + 0x10c) = 0;
    iVar11 = FUN_00520760(local_20,uVar8,FUN_0055b540,&local_4c,0);
    param_1 = local_20;
    if (iVar11 == 0) {
      iVar11 = local_40;
    }
    *(undefined4 *)(local_20 + 0x10c) = uVar6;
    FUN_005521a0(local_20,uVar8);
    if (iVar11 == 0) {
      FUN_00549ed0(param_1,local_28);
    }
    if (*(char *)(param_1 + 0x38) == '\0') {
      if (iVar11 != 0) goto LAB_0055bb6b;
LAB_0055bb74:
      puVar1 = (ushort *)(*(int *)(*(int *)(param_1 + 0x10) + 0xc + local_38) + 0x4e);
      *puVar1 = *puVar1 | 1;
      iVar11 = 0;
    }
    else {
      iVar11 = 7;
      FUN_00564000(param_1);
LAB_0055bb6b:
      if ((*(uint *)(param_1 + 0x18) & 0x8000) != 0) goto LAB_0055bb74;
    }
  }
  else {
    if (local_28 == 0) {
      bVar10 = (byte)local_c & 3;
      if ((local_c & 3) == 0) {
        bVar10 = 1;
      }
      *(byte *)(*(int *)(*(int *)(local_20 + 0x10) + 0xc) + 0x4d) = bVar10;
      goto LAB_0055ba60;
    }
    if (local_c == *(byte *)(*(int *)(*(int *)(local_20 + 0x10) + 0xc) + 0x4d)) goto LAB_0055ba60;
    pcVar13 = "attached databases must use the same text encoding as main database";
LAB_0055ba3b:
    FUN_005670f0(local_30,param_1,pcVar13);
    iVar11 = 1;
  }
  if (local_3c != 0) {
    iVar4 = *(int *)(local_2c + 4);
    FUN_0054d260(iVar4);
    iVar9 = FUN_0054c990(iVar4,0);
    if (iVar9 == 0) {
      FUN_0054ca30(iVar4,0);
    }
    if (*(char *)(iVar4 + 9) != '\0') {
      piVar2 = (int *)(iVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        iVar9 = *(int *)(*(int *)(iVar4 + 4) + 0x38);
        if (iVar9 != 0) {
          (*DAT_00766638)(iVar9);
        }
        *(undefined1 *)(iVar4 + 10) = 0;
      }
    }
  }
  goto LAB_0055bbd3;
code_r0x0055b8b6:
  iVar11 = FUN_0053d2a0(iVar4);
  if (iVar11 != 0) {
LAB_0055b8cb:
    if ((*(char *)(iVar4 + 0x13) == '\0') && (*(int *)(iVar4 + 0xc) != 0)) {
      iVar9 = *(int *)(*(int *)(iVar4 + 0xc) + 0x44);
      if (iVar9 != 0) {
        iVar5 = *(int *)(iVar9 + 0x10);
        FUN_00561130(iVar9);
        if (*(int *)(*(int *)(iVar5 + 0xb4) + 0xc) == 0) {
          FUN_00541a10(iVar5);
        }
      }
      *(undefined4 *)(iVar4 + 0xc) = 0;
    }
LAB_0055b907:
    if (((char)iVar11 != '\x05') || (*(char *)(iVar4 + 0x13) != '\0')) goto LAB_0055b946;
    iVar9 = *(int *)(iVar4 + 4);
    if (((undefined4 *)(iVar9 + 0x1ac) == (undefined4 *)0x0) ||
       ((pcVar3 = *(code **)(iVar9 + 0x1ac), pcVar3 == (code *)0x0 || (*(int *)(iVar9 + 0x1b4) < 0))
       )) goto LAB_0055b946;
    iVar5 = (*pcVar3)(*(undefined4 *)(iVar9 + 0x1b0),*(int *)(iVar9 + 0x1b4));
    if (iVar5 == 0) goto LAB_0055b93f;
    *(int *)(iVar9 + 0x1b4) = *(int *)(iVar9 + 0x1b4) + 1;
  }
  goto LAB_0055b8b0;
LAB_0055b93f:
  *(undefined4 *)(iVar9 + 0x1b4) = 0xffffffff;
LAB_0055b946:
  param_1 = local_20;
  if (iVar11 == 0) {
    if ((*(char *)(local_24 + 8) == '\0') &&
       (*(int *)(iVar4 + 0x28) = *(int *)(iVar4 + 0x28) + 1, *(char *)(local_24 + 9) != '\0')) {
      *(undefined1 *)(local_24 + 0x24) = 1;
      *(undefined4 *)(local_24 + 0x28) = *(undefined4 *)(iVar4 + 0x48);
      *(int *)(iVar4 + 0x48) = local_24 + 0x1c;
    }
    *(undefined1 *)(local_24 + 8) = 1;
    if (*(char *)(iVar4 + 0x13) == '\0') {
      *(undefined1 *)(iVar4 + 0x13) = 1;
    }
  }
LAB_0055b985:
  if (*(char *)(local_24 + 9) != '\0') {
    piVar2 = (int *)(local_24 + 0xc);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      iVar4 = *(int *)(*(int *)(local_24 + 4) + 0x38);
      if (iVar4 != 0) {
        (*DAT_00766638)(iVar4);
      }
      *(undefined1 *)(local_24 + 10) = 0;
    }
  }
  if (iVar11 == 0) {
    local_3c = 1;
    iVar11 = local_2c;
    goto LAB_0055b9d6;
  }
  uVar6 = FUN_00553860(iVar11);
  FUN_005670f0(local_30,param_1,&DAT_00716900,uVar6);
LAB_0055bbd3:
  iVar4 = *(int *)(local_2c + 4);
  if (*(char *)(iVar4 + 9) != '\0') {
    piVar2 = (int *)(iVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      iVar9 = *(int *)(*(int *)(iVar4 + 4) + 0x38);
      if (iVar9 != 0) {
        (*DAT_00766638)(iVar9);
      }
      *(undefined1 *)(iVar4 + 10) = 0;
    }
  }
LAB_0055bbfc:
  if ((iVar11 == 7) || (iVar11 == 0xc0a)) {
    *(undefined1 *)(param_1 + 0x38) = 1;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0055bc20 @ 0055bc20  kind=lib  attributed-by=lib-island  size=4386 */

void FUN_0055bc20(int *param_1,int param_2,int *param_3,undefined4 *param_4,int *param_5,int param_6
                 )

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  char *pcVar11;
  uint *puVar12;
  int iVar13;
  undefined1 uVar14;
  ushort *puVar15;
  int *piVar16;
  undefined4 *puVar17;
  int *piVar18;
  int *piVar19;
  undefined8 uVar20;
  ulonglong local_a8 [4];
  int local_88;
  int local_84;
  int local_80;
  uint local_7c;
  int local_78;
  int local_74;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int *local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined4 *local_48;
  int local_44;
  int local_40;
  int *local_3c;
  int local_38;
  int local_34;
  int *local_30;
  int *local_2c;
  int *local_28;
  int *local_24;
  uint local_20;
  undefined4 *local_1c;
  undefined8 local_18;
  undefined8 local_10;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_78 = param_2;
  local_58 = param_3;
  local_48 = param_4;
  local_7c = 0;
  local_6c = 0;
  local_44 = 0;
  local_74 = 0;
  local_84 = 0;
  local_38 = 0;
  local_80 = 0;
  local_4c = *param_1;
  local_24 = param_1;
  local_28 = param_5;
  local_5c = 0;
  local_64 = -1;
  local_54 = 0;
  local_40 = 0;
  local_18 = 0;
  local_10 = 0;
  if ((((param_1[0x11] != 0) || (*(char *)(local_4c + 0x38) != '\0')) ||
      (*(int *)(param_2 + 0x10) == 0)) ||
     (local_1c = (undefined4 *)FUN_005677f0(param_1,param_2), local_1c == (undefined4 *)0x0))
  goto LAB_0055cca2;
  iVar2 = FUN_00565260(local_4c,local_1c[0x10]);
  iVar3 = FUN_0054ab50(param_1,0x12,*local_1c,0,
                       *(undefined4 *)(*(int *)(local_4c + 0x10) + iVar2 * 0x10));
  param_5 = local_28;
  if (iVar3 != 0) goto LAB_0055cca2;
  local_68 = FUN_005687a0(param_1,local_1c,0x69,0,&local_20);
  local_70 = (uint)(local_1c[3] != 0);
  iVar3 = FUN_00576bd0(param_1,local_1c);
  param_5 = local_28;
  if (((iVar3 != 0) ||
      (iVar3 = FUN_0055cf00(param_1,local_1c,local_20), param_5 = local_28, iVar3 != 0)) ||
     (piVar4 = (int *)FUN_0055ab80(param_1), param_5 = local_28, local_2c = piVar4,
     piVar4 == (int *)0x0)) goto LAB_0055cca2;
  if (*(char *)((int)local_24 + 0x12) == '\0') {
    piVar4[0x18] = piVar4[0x18] | 0x10;
  }
  if ((local_48 == (undefined4 *)0x0) && (local_68 == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  FUN_0054bc80(local_24,uVar5,iVar2);
  if ((local_28 != (int *)0x0) ||
     (iVar3 = FUN_005804f0(local_24,local_1c,local_48,param_6,iVar2), iVar3 == 0)) {
    local_50 = FUN_0052b750(local_24,iVar2,local_1c);
    if (local_48 == (undefined4 *)0x0) {
      local_a8[1] = 0;
      local_a8[2] = 0;
      local_a8[3] = 0;
      local_a8[0] = ZEXT48(local_24);
      local_40 = -1;
      if (local_58 == (int *)0x0) {
        local_60 = 0;
      }
      else {
        local_60 = *local_58;
      }
      iVar2 = 0;
      piVar16 = local_24;
      if (0 < local_60) {
        iVar3 = 0;
        do {
          iVar13 = FUN_005640a0(local_a8,*(undefined4 *)(iVar3 + local_58[2]));
          param_5 = local_28;
          if (iVar13 != 0) goto LAB_0055cca2;
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + 0x14;
          piVar16 = local_24;
        } while (iVar2 < local_60);
      }
    }
    else {
      iVar3 = FUN_0054fe80(local_24,local_48,&local_18);
      piVar16 = local_24;
      param_5 = local_28;
      if (iVar3 != 0) goto LAB_0055cca2;
      local_38 = local_18._4_4_ + 1;
      local_74 = (int)local_10;
      local_60 = *(int *)*local_48;
      if ((local_68 != 0) || (iVar2 = FUN_005451e0(local_24,0,iVar2,local_1c), iVar2 != 0)) {
        local_40 = piVar16[0x12];
        local_54 = 1;
        piVar16[0x12] = local_40 + 1;
        uVar5 = FUN_0055a1f0(piVar16);
        uVar20 = FUN_0055a1f0(piVar16);
        local_34 = (int)uVar20;
        FUN_0056be90(piVar4,0x2a,(int)((ulonglong)uVar20 >> 0x20),local_60);
        uVar6 = FUN_0056be30(piVar4,4,local_18._4_4_);
        uVar7 = FUN_0056be30(local_2c,0x1b,local_38);
        FUN_0056bef0(local_2c,0x1f,local_74,local_60,uVar5);
        FUN_0056be90(local_2c,0x38,local_40,local_34);
        FUN_0056bef0(local_2c,0x39,local_40,uVar5,local_34);
        piVar4 = local_2c;
        FUN_0056be90(local_2c,1,0,uVar6);
        FUN_00573d80(piVar4,uVar7);
        piVar16 = local_24;
        FUN_00563fb0(local_24,uVar5);
        FUN_00563fb0(piVar16,local_34);
      }
    }
    iVar2 = 0;
    if (((*(byte *)((int)local_1c + 0x2a) & 0x10) != 0) &&
       (iVar3 = (int)*(short *)((int)local_1c + 0x26), 0 < iVar3)) {
      puVar15 = (ushort *)(local_1c[1] + 0x16);
      do {
        iVar2 = iVar2 + (*puVar15 >> 1 & 1);
        puVar15 = puVar15 + 0xc;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    if (local_28 == (int *)0x0) {
      if (local_60 != 0) {
        iVar2 = *(short *)((int)local_1c + 0x26) - iVar2;
        if (local_60 != iVar2) {
          FUN_00553950(piVar16,"table %S has %d columns but %d values were supplied",local_78,0,
                       iVar2,local_60);
          param_5 = local_28;
          goto LAB_0055cca2;
        }
        if (0 < local_60) {
          local_64 = (int)*(short *)(local_1c + 9);
        }
      }
    }
    else {
      iVar2 = local_28[1];
      if (local_60 != iVar2) {
        FUN_00553950(piVar16,"%d values for %d columns",local_60,iVar2);
        param_5 = local_28;
        goto LAB_0055cca2;
      }
      iVar3 = 0;
      if (0 < iVar2) {
        do {
          iVar3 = iVar3 + 1;
          *(undefined4 *)(*local_28 + -4 + iVar3 * 8) = 0xffffffff;
        } while (iVar3 < local_28[1]);
      }
      local_34 = 0;
      piVar16 = local_28;
      puVar17 = local_1c;
      if (0 < local_28[1]) {
        do {
          iVar2 = 0;
          if (0 < *(short *)((int)puVar17 + 0x26)) {
            local_30 = (int *)(*piVar16 + local_34 * 8);
            puVar9 = (undefined4 *)puVar17[1];
            do {
              iVar3 = FUN_0057a2c0(*local_30,*puVar9);
              piVar16 = local_28;
              puVar17 = local_1c;
              if (iVar3 == 0) {
                local_30[1] = iVar2;
                if (iVar2 == *(short *)(local_1c + 9)) {
                  local_64 = local_34;
                }
                break;
              }
              iVar2 = iVar2 + 1;
              puVar9 = puVar9 + 6;
            } while (iVar2 < *(short *)((int)local_1c + 0x26));
          }
          iVar3 = local_34;
          iVar13 = local_64;
          if ((*(short *)((int)puVar17 + 0x26) <= iVar2) &&
             (iVar2 = FUN_0055cf90(*(undefined4 *)(*piVar16 + local_34 * 8)), piVar19 = local_24,
             param_5 = local_28, piVar16 = local_28, puVar17 = local_1c, iVar13 = iVar3, iVar2 == 0)
             ) {
            FUN_00553950(local_24,"table %S has no column named %s",local_78,0,
                         *(undefined4 *)(*local_28 + iVar3 * 8));
            *(undefined1 *)((int)piVar19 + 0x11) = 1;
            goto LAB_0055cca2;
          }
          local_64 = iVar13;
          local_34 = iVar3 + 1;
        } while (local_34 < piVar16[1]);
      }
    }
    piVar16 = local_24;
    if ((*(byte *)(local_4c + 0x18) & 0x10) != 0) {
      local_24[0x13] = local_24[0x13] + 1;
      local_84 = local_24[0x13];
      FUN_0056be90(piVar4,7,0,local_84);
    }
    if (local_70 == 0) {
      local_5c = piVar16[0x12];
      iVar2 = FUN_0055e6e0(piVar16,local_1c,local_5c,0x28);
      local_80 = FUN_00552230(local_4c,iVar2 * 4 + 4);
      param_5 = local_28;
      if (local_80 == 0) goto LAB_0055cca2;
      iVar3 = 0;
      if (0 < iVar2) {
        do {
          piVar16[0x13] = piVar16[0x13] + 1;
          *(int *)(local_80 + iVar3 * 4) = piVar16[0x13];
          iVar3 = iVar3 + 1;
        } while (iVar3 < iVar2);
      }
    }
    if (local_54 == 0) {
      if (local_48 != (undefined4 *)0x0) {
        local_6c = FUN_0056be30(piVar4,4,local_18._4_4_);
        local_7c = FUN_0056be30(piVar4,0x1b,local_38);
      }
    }
    else {
      local_7c = FUN_0056be30(piVar4,0x48,local_40);
      local_6c = piVar4[7];
    }
    iVar2 = piVar16[0x13];
    local_2c = (int *)(iVar2 + 1);
    iVar3 = *(short *)((int)local_1c + 0x26) + 1 + iVar2;
    piVar16[0x13] = iVar3;
    piVar19 = local_2c;
    if ((*(byte *)((int)local_1c + 0x2a) & 0x10) != 0) {
      piVar19 = (int *)(iVar2 + 2);
      piVar16[0x13] = iVar3 + 1;
    }
    local_88 = (int)piVar19 + 1;
    local_3c = piVar19;
    local_34 = FUN_005741e0(piVar4);
    if ((local_20 & 1) != 0) {
      uVar10 = piVar16[0x10];
      iVar2 = *(short *)((int)local_1c + 0x26) + 1;
      if (piVar16[0xf] < iVar2) {
        uVar10 = piVar16[0x13] + 1;
        piVar16[0x13] = piVar16[0x13] + iVar2;
      }
      else {
        piVar16[0x10] = iVar2 + uVar10;
        piVar16[0xf] = piVar16[0xf] - iVar2;
      }
      local_20 = uVar10;
      if (local_64 < 0) {
        FUN_0056be90(piVar4,7,0xffffffff);
      }
      else {
        if (local_54 == 0) {
          FUN_005545d0(piVar16,*(undefined4 *)(local_58[2] + local_64 * 0x14),uVar10);
        }
        else {
          FUN_0056bef0(piVar4,0x1d,local_40,local_64);
        }
        uVar8 = FUN_0056be30(piVar4,0x4a,uVar10);
        FUN_0056be90(piVar4,7,0xffffffff,local_20);
        uVar10 = local_20;
        if ((-1 < (int)uVar8) && (uVar8 < (uint)piVar4[7])) {
          *(int *)(piVar4[1] + 8 + uVar8 * 0x14) = piVar4[7];
        }
        FUN_0056be30(piVar4,0x15,local_20);
      }
      local_30 = (int *)0x0;
      puVar17 = local_1c;
      if (0 < *(short *)((int)local_1c + 0x26)) {
        local_38 = 0;
        do {
          piVar16 = local_30;
          piVar19 = local_30;
          if (local_28 != (int *)0x0) {
            piVar19 = (int *)0x0;
            if (0 < local_28[1]) {
              puVar9 = (undefined4 *)(*local_28 + 4);
              do {
                if ((int *)*puVar9 == local_30) break;
                piVar19 = (int *)((int)piVar19 + 1);
                puVar9 = puVar9 + 2;
              } while ((int)piVar19 < local_28[1]);
            }
          }
          if (((local_54 == 0) && (local_58 == (int *)0x0)) ||
             ((local_28 != (int *)0x0 && (local_28[1] <= (int)piVar19)))) {
            pcVar11 = *(char **)(puVar17[1] + 4 + local_38);
            iVar2 = local_20 + 1 + (int)local_30;
            if ((pcVar11 == (char *)0x0) || (*pcVar11 != -0x7c)) {
              iVar3 = FUN_00554e20(local_24,pcVar11,iVar2);
              puVar17 = local_1c;
              if ((iVar3 == iVar2) || (iVar13 = local_24[2], iVar13 == 0)) goto LAB_0055c307;
              uVar5 = 0xf;
            }
            else {
              iVar3 = *(int *)(pcVar11 + 0x18);
              uVar5 = 0xe;
              iVar13 = local_24[2];
            }
            FUN_0056be90(iVar13,uVar5,iVar3,iVar2);
            puVar17 = local_1c;
          }
          else if (local_54 == 0) {
            FUN_00554630(local_24,*(undefined4 *)(local_58[2] + (int)piVar19 * 0x14),
                         local_20 + 1 + (int)local_30);
            puVar17 = local_1c;
          }
          else {
            iVar2 = piVar4[7];
            if ((iVar2 < piVar4[8]) ||
               (iVar3 = FUN_0053b4b0(piVar4), puVar17 = local_1c, piVar16 = local_30, iVar3 == 0)) {
              piVar4[7] = piVar4[7] + 1;
              puVar1 = (undefined2 *)(piVar4[1] + iVar2 * 0x14);
              *(int *)(puVar1 + 2) = local_40;
              *(int **)(puVar1 + 4) = piVar19;
              *puVar1 = 0x1d;
              *(undefined1 *)((int)puVar1 + 3) = 0;
              *(uint *)(puVar1 + 6) = (int)local_30 + local_20 + 1;
              *(undefined4 *)(puVar1 + 8) = 0;
              piVar16 = local_30;
            }
          }
LAB_0055c307:
          local_30 = (int *)((int)piVar16 + 1);
          local_38 = local_38 + 0x18;
          uVar10 = local_20;
        } while ((int)local_30 < (int)*(short *)((int)puVar17 + 0x26));
      }
      if (local_70 == 0) {
        FUN_0056be90(piVar4,0x1e,uVar10 + 1,(int)*(short *)((int)puVar17 + 0x26));
        FUN_00568100(piVar4,local_1c);
      }
      piVar16 = local_24;
      FUN_00550410(local_24,local_68,0x69,0,1,local_1c,
                   (uVar10 - (int)*(short *)((int)local_1c + 0x26)) + -1,param_6,local_34);
      iVar2 = *(short *)((int)local_1c + 0x26) + 1;
      FUN_00554430(piVar16,local_20,iVar2);
      piVar19 = local_3c;
      if (piVar16[0xf] < iVar2) {
        piVar16[0xf] = iVar2;
        piVar16[0x10] = local_20;
      }
    }
    piVar18 = local_24;
    if (local_70 == 0) {
      if ((*(byte *)((int)local_1c + 0x2a) & 0x10) != 0) {
        FUN_0056be90(piVar4,10,0,local_2c);
      }
      if (local_64 < 0) {
        if ((*(byte *)((int)local_1c + 0x2a) & 0x10) == 0) {
          FUN_0056bef0(piVar4,0x38,local_5c,piVar19,local_50);
LAB_0055c5a8:
          local_44 = 1;
        }
        else {
          FUN_0056be90(piVar4,10,0,piVar19);
        }
      }
      else {
        if (local_54 == 0) {
          if (local_48 == (undefined4 *)0x0) {
            FUN_005545d0(piVar16,*(undefined4 *)(local_58[2] + local_64 * 0x14),piVar19);
            if (*(char *)(*piVar4 + 0x38) == '\0') {
              pcVar11 = (char *)(piVar4[1] + (piVar4[7] + -1) * 0x14);
              if (pcVar11 == (char *)0x0) goto LAB_0055c3d9;
            }
            else {
              pcVar11 = &DAT_0076b50c;
            }
            if ((*pcVar11 == '\n') && ((*(byte *)((int)local_1c + 0x2a) & 0x10) == 0)) {
              *(int *)(pcVar11 + 4) = local_5c;
              *pcVar11 = '8';
              *(int **)(pcVar11 + 8) = piVar19;
              *(int *)(pcVar11 + 0xc) = local_50;
              goto LAB_0055c5a8;
            }
          }
          else {
            FUN_0056be90(piVar4,0xf,local_74 + local_64);
          }
        }
        else {
          FUN_0056bef0(piVar4,0x1d,local_40,local_64);
        }
LAB_0055c3d9:
        if ((*(byte *)((int)local_1c + 0x2a) & 0x10) == 0) {
          uVar10 = FUN_0056be30(piVar4,0x4a,piVar19);
          FUN_0056bef0(piVar4,0x38,local_5c,local_3c,local_50);
          piVar19 = local_3c;
          if ((-1 < (int)uVar10) && (uVar10 < (uint)piVar4[7])) {
            *(int *)(piVar4[1] + 8 + uVar10 * 0x14) = piVar4[7];
          }
          FUN_0056be30(piVar4,0x15,local_3c);
        }
        else {
          FUN_0056be90(piVar4,0x49,piVar19,piVar4[7] + 2);
          FUN_0056be30(piVar4,0x15,piVar19);
        }
      }
      if (0 < local_50) {
        FUN_0056be90(piVar16[2],0x77,local_50,piVar19);
      }
      local_38 = 0;
      local_20 = 0;
      if (0 < *(short *)((int)local_1c + 0x26)) {
        local_50 = 0;
        do {
          piVar16 = local_24;
          piVar19 = (int *)(local_88 + local_20);
          local_30 = piVar19;
          if (local_20 == (int)*(short *)(local_1c + 9)) {
            iVar2 = piVar4[7];
            if ((iVar2 < piVar4[8]) || (iVar3 = FUN_0053b4b0(piVar4), iVar3 == 0)) {
              iVar3 = piVar4[1];
              piVar4[7] = piVar4[7] + 1;
              *(undefined2 *)(iVar3 + iVar2 * 0x14) = 10;
              *(undefined1 *)(iVar3 + 3 + iVar2 * 0x14) = 0;
              *(undefined4 *)(iVar3 + 4 + iVar2 * 0x14) = 0;
              *(int **)(iVar3 + 8 + iVar2 * 0x14) = piVar19;
              *(undefined4 *)(iVar3 + 0xc + iVar2 * 0x14) = 0;
              *(undefined4 *)(iVar3 + 0x10 + iVar2 * 0x14) = 0;
            }
          }
          else {
            if (local_28 == (int *)0x0) {
              if ((*(byte *)(local_1c[1] + 0x16 + local_50) & 2) == 0) {
                iVar2 = local_20 - local_38;
LAB_0055c6dc:
                if (-1 < iVar2) goto LAB_0055c6e7;
              }
              else {
                local_38 = local_38 + 1;
              }
            }
            else {
              iVar2 = 0;
              if (0 < local_28[1]) {
                puVar12 = (uint *)(*local_28 + 4);
                do {
                  if (*puVar12 == local_20) break;
                  iVar2 = iVar2 + 1;
                  puVar12 = puVar12 + 2;
                } while (iVar2 < local_28[1]);
                goto LAB_0055c6dc;
              }
LAB_0055c6e7:
              if ((local_60 != 0) && ((local_28 == (int *)0x0 || (iVar2 < local_28[1])))) {
                if (local_54 == 0) {
                  if (local_48 == (undefined4 *)0x0) {
                    FUN_005545d0(local_24,*(undefined4 *)(local_58[2] + iVar2 * 0x14),piVar19);
                  }
                  else {
                    FUN_0056be90(piVar4,0xf,local_74 + iVar2);
                  }
                }
                else {
                  iVar3 = piVar4[7];
                  if ((iVar3 < piVar4[8]) || (iVar13 = FUN_0053b4b0(piVar4), iVar13 == 0)) {
                    iVar13 = piVar4[1];
                    piVar4[7] = piVar4[7] + 1;
                    *(int *)(iVar13 + 8 + iVar3 * 0x14) = iVar2;
                    *(undefined2 *)(iVar13 + iVar3 * 0x14) = 0x1d;
                    *(undefined1 *)(iVar13 + 3 + iVar3 * 0x14) = 0;
                    *(int *)(iVar13 + 4 + iVar3 * 0x14) = local_40;
                    *(int **)(iVar13 + 0xc + iVar3 * 0x14) = local_30;
                    *(undefined4 *)(iVar13 + 0x10 + iVar3 * 0x14) = 0;
                  }
                }
                goto LAB_0055c7ed;
              }
            }
            pcVar11 = *(char **)(local_1c[1] + 4 + local_50);
            if ((pcVar11 == (char *)0x0) || (*pcVar11 != -0x7c)) {
              local_3c = (int *)FUN_00554e20(local_24,pcVar11,piVar19);
              if (((local_3c != piVar19) && (iVar2 = piVar16[2], iVar2 != 0)) &&
                 ((iVar3 = *(int *)(iVar2 + 0x1c), iVar3 < *(int *)(iVar2 + 0x20) ||
                  (iVar13 = FUN_0053b4b0(iVar2), iVar13 == 0)))) {
                iVar13 = *(int *)(iVar2 + 4);
                *(int *)(iVar2 + 0x1c) = *(int *)(iVar2 + 0x1c) + 1;
                *(undefined2 *)(iVar13 + iVar3 * 0x14) = 0xf;
                goto LAB_0055c7c7;
              }
            }
            else {
              local_3c = *(int **)(pcVar11 + 0x18);
              iVar2 = local_24[2];
              iVar3 = *(int *)(iVar2 + 0x1c);
              if ((iVar3 < *(int *)(iVar2 + 0x20)) || (iVar13 = FUN_0053b4b0(iVar2), iVar13 == 0)) {
                iVar13 = *(int *)(iVar2 + 4);
                *(int *)(iVar2 + 0x1c) = *(int *)(iVar2 + 0x1c) + 1;
                *(undefined2 *)(iVar13 + iVar3 * 0x14) = 0xe;
LAB_0055c7c7:
                *(undefined4 *)(iVar13 + 0x10 + iVar3 * 0x14) = 0;
                *(undefined4 *)(iVar13 + 0xc + iVar3 * 0x14) = 0;
                *(int **)(iVar13 + 8 + iVar3 * 0x14) = local_30;
                *(int **)(iVar13 + 4 + iVar3 * 0x14) = local_3c;
                *(undefined1 *)(iVar13 + 3 + iVar3 * 0x14) = 0;
              }
            }
          }
LAB_0055c7ed:
          local_20 = local_20 + 1;
          local_50 = local_50 + 0x18;
        } while ((int)local_20 < (int)*(short *)((int)local_1c + 0x26));
      }
      puVar17 = local_1c;
      piVar18 = local_24;
      if ((*(byte *)((int)local_1c + 0x2a) & 0x10) == 0) {
        FUN_00558890(local_24,local_1c,local_5c,local_2c,local_80,-1 < local_64,0,param_6,local_34,
                     &local_30);
        FUN_00557cc0(piVar18,puVar17,0,local_2c);
        FUN_00550e30(piVar18,puVar17,local_5c,local_2c,local_80,0,local_44,local_30 == (int *)0x0);
      }
      else {
        for (piVar16 = (int *)local_1c[0xe]; (piVar16 != (int *)0x0 && (*piVar16 != local_4c));
            piVar16 = (int *)piVar16[6]) {
        }
        FUN_00577380(local_24,local_1c);
        iVar2 = piVar4[7];
        local_44 = *(short *)((int)local_1c + 0x26) + 2;
        if ((iVar2 < piVar4[8]) || (iVar3 = FUN_0053b4b0(piVar4), iVar3 == 0)) {
          iVar3 = piVar4[1];
          piVar4[7] = piVar4[7] + 1;
          *(int *)(iVar3 + 8 + iVar2 * 0x14) = local_44;
          *(undefined2 *)(iVar3 + iVar2 * 0x14) = 0x8c;
          *(undefined1 *)(iVar3 + 3 + iVar2 * 0x14) = 0;
          *(undefined4 *)(iVar3 + 4 + iVar2 * 0x14) = 1;
          *(int **)(iVar3 + 0xc + iVar2 * 0x14) = local_2c;
          *(undefined4 *)(iVar3 + 0x10 + iVar2 * 0x14) = 0;
        }
        else {
          iVar2 = 1;
        }
        iVar3 = piVar4[1];
        if ((iVar3 != 0) && (*(char *)(*piVar4 + 0x38) == '\0')) {
          if (iVar2 < 0) {
            iVar2 = piVar4[7] + -1;
          }
          iVar13 = iVar3 + iVar2 * 0x14;
          FUN_00539320(*piVar4,(int)*(char *)(iVar13 + 1),
                       *(undefined4 *)(iVar3 + 0x10 + iVar2 * 0x14));
          *(undefined4 *)(iVar13 + 0x10) = 0;
          if (piVar16 == (int *)0x0) {
            *(undefined4 *)(iVar13 + 0x10) = 0;
            *(undefined1 *)(iVar13 + 1) = 0;
          }
          else {
            *(int **)(iVar13 + 0x10) = piVar16;
            *(undefined1 *)(iVar13 + 1) = 0xf6;
            piVar16[3] = piVar16[3] + 1;
          }
        }
        if (piVar4[1] != 0) {
          uVar14 = (undefined1)param_6;
          if (param_6 == 99) {
            uVar14 = 2;
          }
          *(undefined1 *)(piVar4[1] + -0x11 + piVar4[7] * 0x14) = uVar14;
        }
        piVar16 = local_24;
        if ((int *)local_24[0x6c] != (int *)0x0) {
          piVar16 = (int *)local_24[0x6c];
        }
        *(undefined1 *)(piVar16 + 6) = 1;
        piVar18 = local_24;
      }
    }
    if (((*(byte *)(local_4c + 0x18) & 0x10) != 0) &&
       ((iVar2 = piVar4[7], iVar2 < piVar4[8] || (iVar3 = FUN_0053b4b0(piVar4), iVar3 == 0)))) {
      iVar3 = piVar4[1];
      piVar4[7] = piVar4[7] + 1;
      *(undefined2 *)(iVar3 + iVar2 * 0x14) = 0x14;
      *(undefined1 *)(iVar3 + 3 + iVar2 * 0x14) = 0;
      *(int *)(iVar3 + 4 + iVar2 * 0x14) = local_84;
      *(undefined4 *)(iVar3 + 8 + iVar2 * 0x14) = 1;
      *(undefined4 *)(iVar3 + 0xc + iVar2 * 0x14) = 0;
      *(undefined4 *)(iVar3 + 0x10 + iVar2 * 0x14) = 0;
    }
    iVar2 = local_34;
    if (local_68 != 0) {
      FUN_00550410(piVar18,local_68,0x69,0,2,local_1c,
                   (local_88 - *(short *)((int)local_1c + 0x26)) + -2,param_6,local_34);
    }
    if (piVar4[10] != 0) {
      *(int *)(piVar4[10] - (iVar2 * 4 + 4)) = piVar4[7];
    }
    if (local_54 == 0) {
      if (local_48 != (undefined4 *)0x0) {
        iVar2 = piVar4[7];
        if ((iVar2 < piVar4[8]) || (iVar3 = FUN_0053b4b0(piVar4), iVar3 == 0)) {
          iVar3 = piVar4[1];
          piVar4[7] = piVar4[7] + 1;
          *(undefined2 *)(iVar3 + iVar2 * 0x14) = 1;
          *(undefined1 *)(iVar3 + 3 + iVar2 * 0x14) = 0;
          *(undefined4 *)(iVar3 + 4 + iVar2 * 0x14) = 0;
          *(int *)(iVar3 + 8 + iVar2 * 0x14) = local_6c;
          *(undefined4 *)(iVar3 + 0xc + iVar2 * 0x14) = 0;
          *(undefined4 *)(iVar3 + 0x10 + iVar2 * 0x14) = 0;
        }
        if ((-1 < (int)local_7c) && (local_7c < (uint)piVar4[7])) {
          *(int *)(piVar4[1] + 8 + local_7c * 0x14) = piVar4[7];
        }
      }
    }
    else {
      iVar2 = piVar4[7];
      if ((iVar2 < piVar4[8]) || (iVar3 = FUN_0053b4b0(piVar4), iVar3 == 0)) {
        iVar3 = piVar4[1];
        piVar4[7] = piVar4[7] + 1;
        *(undefined2 *)(iVar3 + iVar2 * 0x14) = 0x5f;
        *(undefined1 *)(iVar3 + 3 + iVar2 * 0x14) = 0;
        *(int *)(iVar3 + 4 + iVar2 * 0x14) = local_40;
        *(int *)(iVar3 + 8 + iVar2 * 0x14) = local_6c;
        *(undefined4 *)(iVar3 + 0xc + iVar2 * 0x14) = 0;
        *(undefined4 *)(iVar3 + 0x10 + iVar2 * 0x14) = 0;
      }
      iVar2 = local_40;
      if ((-1 < (int)local_7c) && (local_7c < (uint)piVar4[7])) {
        *(int *)(piVar4[1] + 8 + local_7c * 0x14) = piVar4[7];
      }
      iVar3 = piVar4[7];
      if ((iVar3 < piVar4[8]) || (iVar13 = FUN_0053b4b0(piVar4), iVar13 == 0)) {
        iVar13 = piVar4[1];
        piVar4[7] = piVar4[7] + 1;
        *(undefined2 *)(iVar13 + iVar3 * 0x14) = 0x2d;
        *(undefined1 *)(iVar13 + 3 + iVar3 * 0x14) = 0;
        *(int *)(iVar13 + 4 + iVar3 * 0x14) = iVar2;
        *(undefined4 *)(iVar13 + 8 + iVar3 * 0x14) = 0;
        *(undefined4 *)(iVar13 + 0xc + iVar3 * 0x14) = 0;
        *(undefined4 *)(iVar13 + 0x10 + iVar3 * 0x14) = 0;
      }
    }
    puVar17 = local_1c;
    if (((*(byte *)((int)local_1c + 0x2a) & 0x10) == 0) && (local_70 == 0)) {
      iVar2 = piVar4[7];
      if ((iVar2 < piVar4[8]) || (iVar3 = FUN_0053b4b0(piVar4), iVar3 == 0)) {
        iVar3 = piVar4[1];
        piVar4[7] = piVar4[7] + 1;
        *(undefined2 *)(iVar3 + iVar2 * 0x14) = 0x2d;
        *(undefined1 *)(iVar3 + 3 + iVar2 * 0x14) = 0;
        *(int *)(iVar3 + 4 + iVar2 * 0x14) = local_5c;
        *(undefined4 *)(iVar3 + 8 + iVar2 * 0x14) = 0;
        *(undefined4 *)(iVar3 + 0xc + iVar2 * 0x14) = 0;
        *(undefined4 *)(iVar3 + 0x10 + iVar2 * 0x14) = 0;
      }
      iVar2 = puVar17[2];
      if (iVar2 != 0) {
        local_44 = local_5c + 1;
        do {
          iVar3 = piVar4[7];
          if ((iVar3 < piVar4[8]) || (iVar13 = FUN_0053b4b0(piVar4), iVar13 == 0)) {
            iVar13 = piVar4[1];
            piVar4[7] = piVar4[7] + 1;
            *(undefined2 *)(iVar13 + iVar3 * 0x14) = 0x2d;
            *(undefined1 *)(iVar13 + 3 + iVar3 * 0x14) = 0;
            *(int *)(iVar13 + 4 + iVar3 * 0x14) = local_44;
            *(undefined4 *)(iVar13 + 8 + iVar3 * 0x14) = 0;
            *(undefined4 *)(iVar13 + 0xc + iVar3 * 0x14) = 0;
            *(undefined4 *)(iVar13 + 0x10 + iVar3 * 0x14) = 0;
          }
          iVar2 = *(int *)(iVar2 + 0x14);
          local_44 = local_44 + 1;
        } while (iVar2 != 0);
      }
    }
  }
  if ((*(char *)((int)local_24 + 0x12) == '\0') && (local_24[0x6d] == 0)) {
    FUN_0054b260(local_24);
  }
  param_5 = local_28;
  if ((((*(byte *)(local_4c + 0x18) & 0x10) != 0) && (*(char *)((int)local_24 + 0x12) == '\0')) &&
     (local_24[0x6d] == 0)) {
    iVar2 = piVar4[7];
    if ((iVar2 < piVar4[8]) || (iVar3 = FUN_0053b4b0(piVar4), iVar3 == 0)) {
      iVar3 = piVar4[1];
      piVar4[7] = piVar4[7] + 1;
      *(undefined2 *)(iVar3 + iVar2 * 0x14) = 0x10;
      *(undefined1 *)(iVar3 + 3 + iVar2 * 0x14) = 0;
      *(int *)(iVar3 + 4 + iVar2 * 0x14) = local_84;
      *(undefined4 *)(iVar3 + 8 + iVar2 * 0x14) = 1;
      *(undefined4 *)(iVar3 + 0xc + iVar2 * 0x14) = 0;
      *(undefined4 *)(iVar3 + 0x10 + iVar2 * 0x14) = 0;
    }
    FUN_005762b0(piVar4,1);
    param_5 = local_28;
    if (*(char *)(*piVar4 + 0x38) == '\0') {
      FUN_00575040(piVar4[4],"rows inserted",0xffffffff,1,0);
      param_5 = local_28;
    }
  }
LAB_0055cca2:
  iVar2 = local_4c;
  FUN_00567370(local_4c,local_78);
  FUN_00556700(iVar2,local_58);
  puVar17 = local_48;
  if (local_48 != (undefined4 *)0x0) {
    FUN_00556700(iVar2,*local_48);
    FUN_00567370(iVar2,puVar17[10]);
    FUN_00555e30(iVar2,puVar17[0xb]);
    FUN_00556700(iVar2,puVar17[0xc]);
    FUN_00555e30(iVar2,puVar17[0xd]);
    FUN_00556700(iVar2,puVar17[0xe]);
    FUN_00566d10(iVar2,puVar17[0xf]);
    FUN_00555e30(iVar2,puVar17[0x12]);
    FUN_00555e30(iVar2,puVar17[0x13]);
    FUN_005521a0(iVar2,puVar17);
  }
  FUN_0055afc0(iVar2,param_5);
  FUN_005521a0(iVar2,local_80);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0055ce30 @ 0055ce30  kind=lib  attributed-by=lib-island  size=135 */

undefined4 FUN_0055ce30(undefined4 param_1,char *param_2,uint *param_3,undefined2 *param_4)

{
  char cVar1;
  char *pcVar2;
  undefined2 *puVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  
  if (((*param_2 != -0x69) || (*(int **)(param_2 + 0x10) == (int *)0x0)) ||
     (**(int **)(param_2 + 0x10) != 2)) {
    return 0;
  }
  pcVar2 = *(char **)(param_2 + 4);
  uVar5 = 0;
  if (pcVar2 != (char *)0x0) {
    cVar1 = *pcVar2;
    pcVar4 = pcVar2;
    while (cVar1 != '\0') {
      pcVar4 = pcVar4 + 1;
      cVar1 = *pcVar4;
    }
    uVar5 = (int)pcVar4 - (int)pcVar2 & 0x3fffffff;
  }
  iVar6 = FUN_00556c60(param_1,pcVar2,uVar5,2,1,0);
  if ((iVar6 != 0) && ((*(byte *)(iVar6 + 3) & 1) != 0)) {
    puVar3 = *(undefined2 **)(iVar6 + 4);
    *param_4 = *puVar3;
    *(undefined1 *)(param_4 + 1) = *(undefined1 *)(puVar3 + 1);
    *param_3 = ~(uint)(*(byte *)(iVar6 + 3) >> 1) & 1;
    return 1;
  }
  return 0;
}


/* FUN_0055cec0 @ 0055cec0  kind=lib  attributed-by=lib-island  size=57 */

/* WARNING: Removing unreachable block (ram,0x0055ceea) */

undefined4 FUN_0055cec0(void)

{
  return 0;
}


/* FUN_0055cf00 @ 0055cf00  kind=lib  attributed-by=lib-island  size=142 */

undefined4 FUN_0055cf00(int *param_1,undefined4 *param_2,int param_3)

{
  int *piVar1;
  
  if ((*(byte *)((int)param_2 + 0x2a) & 0x10) != 0) {
    piVar1 = (int *)param_2[0xe];
    if (piVar1 != (int *)0x0) {
      do {
        if (*piVar1 == *param_1) break;
        piVar1 = (int *)piVar1[6];
      } while (piVar1 != (int *)0x0);
    }
    if (*(int *)(*(int *)piVar1[1] + 0x34) == 0) goto LAB_0055cf4d;
  }
  if ((((*(byte *)((int)param_2 + 0x2a) & 1) == 0) || ((*(uint *)(*param_1 + 0x18) & 0x100) != 0))
     || (*(char *)((int)param_1 + 0x12) != '\0')) {
    if ((param_3 == 0) && (param_2[3] != 0)) {
      FUN_00553950(param_1,"cannot modify %s because it is a view",*param_2);
      return 1;
    }
    return 0;
  }
LAB_0055cf4d:
  FUN_00553950(param_1,"table %s may not be modified",*param_2);
  return 1;
}


/* FUN_0055cf90 @ 0055cf90  kind=lib  attributed-by=lib-island  size=126 */

bool FUN_0055cf90(byte *param_1)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  pbVar5 = &DAT_0071776c;
  bVar2 = *param_1;
  pbVar4 = param_1;
  while ((bVar2 != 0 && ((&DAT_007120d8)[bVar2] == (&DAT_007120d8)[*pbVar5]))) {
    pbVar1 = pbVar4 + 1;
    pbVar4 = pbVar4 + 1;
    pbVar5 = pbVar5 + 1;
    bVar2 = *pbVar1;
  }
  if (((&DAT_007120d8)[*pbVar4] != (&DAT_007120d8)[*pbVar5]) &&
     (iVar3 = FUN_0057a2c0(param_1,"ROWID"), iVar3 != 0)) {
    iVar3 = FUN_0057a2c0(param_1,&DAT_0071777c);
    return iVar3 == 0;
  }
  return true;
}


/* FUN_0055d020 @ 0055d020  kind=lib  attributed-by=lib-island  size=337 */

uint FUN_0055d020(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  int local_28 [4];
  undefined4 *local_18;
  uint local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  local_28[0] = param_2;
  local_28[2] = param_4;
  local_c = 0;
  local_28[1] = param_3;
  local_10 = 0;
LAB_0055d045:
  local_18 = (undefined4 *)local_28[local_10];
  uVar2 = local_c;
  if (local_18 != (undefined4 *)0x0) {
    local_14 = local_18[1];
    local_8 = 0;
    pbVar3 = &DAT_00713464;
    do {
      if (local_14 == pbVar3[1]) {
        pbVar5 = (byte *)*local_18;
        pbVar4 = (byte *)("naturaleftouterightfullinnercross" + *pbVar3);
        uVar2 = local_14;
        while (0 < (int)uVar2) {
          if ((*pbVar5 == 0) || ((&DAT_007120d8)[*pbVar5] != (&DAT_007120d8)[*pbVar4])) break;
          pbVar5 = pbVar5 + 1;
          pbVar4 = pbVar4 + 1;
          uVar2 = uVar2 - 1;
        }
        if (((int)(uVar2 - 1) < 0) || ((&DAT_007120d8)[*pbVar5] == (&DAT_007120d8)[*pbVar4]))
        goto LAB_0055d113;
      }
      pbVar3 = pbVar3 + 3;
      local_8 = local_8 + 1;
      if (0x713478 < (int)pbVar3) {
        uVar2 = local_c | 0x40;
        break;
      }
    } while( true );
  }
  goto LAB_0055d0dc;
LAB_0055d113:
  uVar2 = local_c | (byte)(&DAT_00713466)[local_8 * 3];
  local_10 = local_10 + 1;
  local_c = uVar2;
  if (2 < local_10) {
LAB_0055d0dc:
    if ((((byte)uVar2 & 0x21) == 0x21) || ((uVar2 & 0x40) != 0)) {
      puVar1 = (undefined4 *)0x6fcfbd;
      if (param_4 != 0) {
        puVar1 = &DAT_006fcfbc;
      }
      FUN_00553950(param_1,"unknown or unsupported join type: %T %T%s%T",param_2,param_3,puVar1,
                   param_4);
      uVar2 = 1;
    }
    else if ((uVar2 & 0x20) != 0) {
      if (((byte)uVar2 & 0x18) == 8) {
        return uVar2;
      }
      FUN_00553950(param_1,"RIGHT and FULL OUTER JOINs are not currently supported");
      return 1;
    }
    return uVar2;
  }
  goto LAB_0055d045;
}


/* FUN_0055d180 @ 0055d180  kind=lib  attributed-by=lib-island  size=767 */

void FUN_0055d180(int param_1)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int local_8;
  
  iVar5 = param_1;
  if ((*(int *)(param_1 + 0x44) == 0x64cffc7f) && (iVar6 = FUN_00532e30(param_1), iVar6 == 0)) {
    FUN_0054fdb0(param_1);
    iVar6 = 0;
    if (0 < *(int *)(param_1 + 0x14)) {
      param_1 = 0;
      do {
        iVar9 = *(int *)(iVar5 + 0x10) + param_1;
        if (*(int *)(iVar9 + 4) != 0) {
          FUN_0054c710(*(int *)(iVar9 + 4));
          *(undefined4 *)(iVar9 + 4) = 0;
          if (iVar6 != 1) {
            *(undefined4 *)(iVar9 + 0xc) = 0;
          }
        }
        iVar6 = iVar6 + 1;
        param_1 = param_1 + 0x10;
      } while (iVar6 < *(int *)(iVar5 + 0x14));
    }
    iVar6 = *(int *)(*(int *)(iVar5 + 0x10) + 0x1c);
    if (iVar6 != 0) {
      FUN_00565020(iVar6);
    }
    FUN_005776d0(iVar5);
    FUN_00550b60(iVar5);
    piVar7 = (int *)(iVar5 + 0x140);
    local_8 = 0x17;
    do {
      iVar6 = *piVar7;
      while (iVar6 != 0) {
        iVar9 = *(int *)(iVar6 + 0x1c);
        iVar10 = iVar6;
        do {
          piVar2 = *(int **)(iVar10 + 0x20);
          if ((piVar2 != (int *)0x0) && (*piVar2 = *piVar2 + -1, *piVar2 == 0)) {
            (*(code *)piVar2[1])(piVar2[2]);
            FUN_005521a0(iVar5,piVar2);
          }
          iVar3 = *(int *)(iVar10 + 8);
          FUN_005521a0(iVar5,iVar10);
          iVar10 = iVar3;
          iVar6 = iVar9;
        } while (iVar3 != 0);
      }
      piVar7 = piVar7 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    for (puVar4 = *(undefined4 **)(iVar5 + 0x1a4); puVar4 != (undefined4 *)0x0;
        puVar4 = (undefined4 *)*puVar4) {
      iVar6 = puVar4[2];
      puVar8 = (undefined4 *)(iVar6 + 0x10);
      iVar9 = 3;
      do {
        if ((code *)*puVar8 != (code *)0x0) {
          (*(code *)*puVar8)(puVar8[-2]);
        }
        puVar8 = puVar8 + 5;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      FUN_005521a0(iVar5,iVar6);
    }
    FUN_0055ac70(iVar5 + 0x19c);
    for (puVar4 = *(undefined4 **)(iVar5 + 300); puVar4 != (undefined4 *)0x0;
        puVar4 = (undefined4 *)*puVar4) {
      iVar6 = puVar4[2];
      if (*(code **)(iVar6 + 0xc) != (code *)0x0) {
        (**(code **)(iVar6 + 0xc))(*(undefined4 *)(iVar6 + 8));
      }
      FUN_005521a0(iVar5,iVar6);
    }
    FUN_0055ac70(iVar5 + 0x124);
    FUN_00553890(iVar5,0,0);
    puVar4 = *(undefined4 **)(iVar5 + 0xd4);
    if (puVar4 != (undefined4 *)0x0) {
      uVar1 = *(ushort *)(puVar4 + 7);
      if ((uVar1 & 0x2460) != 0) {
        if ((uVar1 & 0x2000) == 0) {
          if (((uVar1 & 0x400) == 0) || ((code *)puVar4[8] == (code *)0x0)) {
            if ((uVar1 & 0x20) == 0) {
              if ((uVar1 & 0x40) != 0) {
                piVar7 = (int *)puVar4[4];
                piVar7[1] = *(int *)(*piVar7 + 0xa4);
                *(int **)(*piVar7 + 0xa4) = piVar7;
                if ((*(byte *)(puVar4 + 7) & 0x20) != 0) {
                  FUN_005644e0(puVar4[4]);
                }
                *(ushort *)(puVar4 + 7) = *(ushort *)(puVar4 + 7) & 0xbe01 | 1;
                *(undefined1 *)((int)puVar4 + 0x1e) = 5;
              }
            }
            else {
              FUN_005644e0(puVar4[4]);
            }
          }
          else {
            (*(code *)puVar4[8])(puVar4[1]);
            puVar4[8] = 0;
          }
        }
        else {
          FUN_00574670(puVar4,puVar4[4]);
          FUN_00574d40(puVar4);
        }
      }
      FUN_005521a0(*puVar4,puVar4[9]);
      puVar4[1] = 0;
      puVar4[9] = 0;
      puVar4[8] = 0;
      FUN_005521a0(*puVar4,puVar4);
    }
    FUN_0054fcf0(iVar5);
    *(undefined4 *)(iVar5 + 0x44) = 0xb5357930;
    FUN_005521a0(iVar5,*(undefined4 *)(*(int *)(iVar5 + 0x10) + 0x1c));
    if (*(int *)(iVar5 + 0xc) != 0) {
      (*DAT_00766638)(*(int *)(iVar5 + 0xc));
    }
    *(undefined4 *)(iVar5 + 0x44) = 0x9f3c2d33;
    if (*(int *)(iVar5 + 0xc) != 0) {
      (*DAT_0076662c)(*(int *)(iVar5 + 0xc));
    }
    if (*(char *)(iVar5 + 0xeb) != '\0') {
      FUN_00524410(*(undefined4 *)(iVar5 + 0x104));
    }
    FUN_00524410(iVar5);
    return;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(param_1 + 0xc));
  }
  return;
}


/* FUN_0055d490 @ 0055d490  kind=lib  attributed-by=lib-string  size=540 */

undefined4 FUN_0055d490(int *param_1,char *param_2,char *param_3,int *param_4)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  code *pcVar9;
  int iVar10;
  void *_Dst;
  
  piVar3 = param_4;
  piVar2 = param_1;
  iVar7 = *param_1;
  param_1 = (int *)0x0;
  uVar5 = 0;
  if (param_2 != (char *)0x0) {
    cVar1 = *param_2;
    pcVar4 = param_2;
    while (cVar1 != '\0') {
      pcVar4 = pcVar4 + 1;
      cVar1 = *pcVar4;
    }
    uVar5 = (int)pcVar4 - (int)param_2 & 0x3fffffff;
  }
  iVar6 = uVar5 + 300;
  if (param_4 != (int *)0x0) {
    *param_4 = 0;
  }
  if ((piVar2[6] & 0x200000U) == 0) {
    if (param_4 != (int *)0x0) {
      iVar7 = FUN_00523d10("not authorized");
      *piVar3 = iVar7;
    }
    return 1;
  }
  param_4 = (int *)"sqlite3_extension_init";
  if (param_3 != (char *)0x0) {
    param_4 = (int *)param_3;
  }
  iVar8 = (**(code **)(iVar7 + 0x28))(iVar7,param_2);
  if (iVar8 == 0) {
    if (piVar3 != (int *)0x0) {
      iVar8 = FUN_00579f80();
      if (iVar8 == 0) {
        param_1 = (int *)FUN_0055da00(iVar6);
      }
      else {
        param_1 = (int *)0x0;
      }
      *piVar3 = (int)param_1;
      if (param_1 != (int *)0x0) {
        FUN_005240c0(iVar6,param_1,"unable to open shared library [%s]",param_2);
        (**(code **)(iVar7 + 0x2c))(iVar7,uVar5 + 299,param_1);
      }
    }
    return 1;
  }
  pcVar9 = (code *)(**(code **)(iVar7 + 0x30))(iVar7,iVar8,param_4);
  if (pcVar9 == (code *)0x0) {
    if (piVar3 != (int *)0x0) {
      iVar10 = FUN_00568070(param_4);
      iVar6 = iVar6 + iVar10;
      iVar10 = FUN_00579f80();
      if (iVar10 == 0) {
        param_1 = (int *)FUN_0055da00(iVar6);
      }
      else {
        param_1 = (int *)0x0;
      }
      *piVar3 = (int)param_1;
      if (param_1 != (int *)0x0) {
        FUN_005240c0(iVar6,param_1,"no entry point [%s] in shared library [%s]",param_4,param_2);
        (**(code **)(iVar7 + 0x2c))(iVar7,iVar6 + -1,param_1);
      }
      (**(code **)(iVar7 + 0x34))(iVar7,iVar8);
    }
    return 1;
  }
  iVar6 = (*pcVar9)(piVar2,&param_1,&PTR_FUN_00712d48);
  if (iVar6 == 0) {
    _Dst = (void *)FUN_005522c0(piVar2,piVar2[0x24] * 4 + 4);
    if (_Dst != (void *)0x0) {
      if (0 < piVar2[0x24]) {
        memcpy(_Dst,(void *)piVar2[0x25],piVar2[0x24] << 2);
      }
      FUN_005521a0(piVar2,piVar2[0x25]);
      piVar2[0x25] = (int)_Dst;
      *(int *)((int)_Dst + piVar2[0x24] * 4) = iVar8;
      piVar2[0x24] = piVar2[0x24] + 1;
      return 0;
    }
    return 7;
  }
  if (piVar3 != (int *)0x0) {
    iVar6 = FUN_00523d10("error during initialization: %s",param_1);
    *piVar3 = iVar6;
  }
  FUN_00524410(param_1);
  (**(code **)(iVar7 + 0x34))(iVar7,iVar8);
  return 1;
}


/* FUN_0055d6b0 @ 0055d6b0  kind=lib  attributed-by=lib-island  size=113 */

int FUN_0055d6b0(int *param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *param_1;
  cVar1 = *(char *)(iVar3 + 0x81);
  bVar2 = *(byte *)(*(int *)(*(int *)(iVar3 + 0x10) + 0xc) + 0x4d);
  if (param_2 == 0) {
    iVar3 = *(int *)(iVar3 + 8);
  }
  else {
    iVar3 = FUN_00537090(iVar3,param_2,cVar1);
  }
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar4 = iVar3 + (uint)bVar2 * 0x14 + -0x14;
  }
  if ((cVar1 == '\0') && ((iVar4 == 0 || (*(int *)(iVar4 + 0xc) == 0)))) {
    iVar3 = FUN_0055a020(param_1,bVar2,iVar4,param_2);
    return iVar3;
  }
  return iVar4;
}


/* FUN_0055d730 @ 0055d730  kind=lib  attributed-by=lib-string  size=150 */

int FUN_0055d730(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  char *pcVar2;
  
  if (*(char *)(*param_1 + 0x81) == '\0') {
    iVar1 = FUN_0055b460(*param_1,param_1 + 1);
    if (iVar1 != 0) {
      param_1[0x11] = param_1[0x11] + 1;
      param_1[3] = iVar1;
      return 0;
    }
  }
  iVar1 = FUN_005572d0(*param_1,param_3,param_4);
  if (iVar1 == 0) {
    pcVar2 = "no such view";
    if (param_2 == 0) {
      pcVar2 = "no such table";
    }
    if (param_4 != 0) {
      FUN_00553950(param_1,"%s: %s.%s",pcVar2,param_4);
      *(undefined1 *)((int)param_1 + 0x11) = 1;
      return 0;
    }
    FUN_00553950(param_1,"%s: %s",pcVar2,param_3);
    *(undefined1 *)((int)param_1 + 0x11) = 1;
  }
  return iVar1;
}


/* FUN_0055d7d0 @ 0055d7d0  kind=lib  attributed-by=lib-island  size=83 */

void FUN_0055d7d0(int *param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (*param_3 == 0) {
    iVar2 = param_3[1];
  }
  else {
    iVar2 = *param_1;
    iVar3 = 0;
    if (0 < *(int *)(iVar2 + 0x14)) {
      piVar1 = (int *)(*(int *)(iVar2 + 0x10) + 0xc);
      do {
        if (*piVar1 == *param_3) break;
        iVar3 = iVar3 + 1;
        piVar1 = piVar1 + 4;
      } while (iVar3 < *(int *)(iVar2 + 0x14));
    }
    iVar2 = *(int *)(*(int *)(iVar2 + 0x10) + iVar3 * 0x10);
  }
  FUN_0055d730(param_1,param_2,param_3[2],iVar2);
  return;
}


/* FUN_0055d830 @ 0055d830  kind=lib  attributed-by=lib-island  size=187 */

int FUN_0055d830(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 *param_6,undefined4 param_7)

{
  int iVar1;
  
  *param_6 = 0;
  iVar1 = FUN_00564f10(param_1);
  if (iVar1 == 0) {
    FUN_00525a30(0x15,"misuse at line %d of [%.10s]",0x16fa8,
                 "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
    return 0x15;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(param_1 + 0xc));
  }
  FUN_0054d340(param_1);
  iVar1 = FUN_005631b0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  if (iVar1 == 0x11) {
    FUN_00528070(*param_6);
    iVar1 = FUN_005631b0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  FUN_0054de20(param_1);
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(param_1 + 0xc));
  }
  return iVar1;
}


/* FUN_0055d8f0 @ 0055d8f0  kind=lib  attributed-by=lib-island  size=138 */

void FUN_0055d8f0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int local_6c;
  undefined1 *local_68;
  undefined1 *local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  char local_54;
  undefined2 local_53;
  undefined1 local_50 [72];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_68 = local_50;
  local_58 = *(undefined4 *)(param_1 + 0x50);
  local_60 = 0;
  local_5c = 0x46;
  local_53 = 1;
  local_54 = '\0';
  local_6c = param_1;
  local_64 = local_68;
  FUN_0056aa30(&local_6c,1,param_3,&stack0x00000010);
  FUN_00567fb0(&local_6c);
  if (local_54 != '\0') {
    *(undefined1 *)(param_1 + 0x38) = 1;
  }
  FUN_005521a0(param_1,param_2);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0055d980 @ 0055d980  kind=lib  attributed-by=lib-island  size=117 */

void FUN_0055d980(int param_1,undefined4 param_2)

{
  int local_6c;
  undefined1 *local_68;
  undefined1 *local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  char local_54;
  undefined2 local_53;
  undefined1 local_50 [72];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_68 = local_50;
  local_58 = *(undefined4 *)(param_1 + 0x50);
  local_60 = 0;
  local_5c = 0x46;
  local_53 = 1;
  local_54 = '\0';
  local_6c = param_1;
  local_64 = local_68;
  FUN_0056aa30(&local_6c,1,param_2,&stack0x0000000c);
  FUN_00567fb0(&local_6c);
  if (local_54 != '\0') {
    *(undefined1 *)(param_1 + 0x38) = 1;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0055da00 @ 0055da00  kind=lib  attributed-by=lib-island  size=101 */

int FUN_0055da00(int param_1)

{
  int iVar1;
  
  iVar1 = param_1;
  if (0x7ffffefe < param_1 - 1U) {
    return 0;
  }
  if (DAT_007665e0 != 0) {
    if (DAT_0076b488 != 0) {
      (*DAT_00766630)(DAT_0076b488);
    }
    FUN_0053dcf0(iVar1,&param_1);
    if (DAT_0076b488 != 0) {
      (*DAT_00766638)(DAT_0076b488);
    }
    return param_1;
  }
  iVar1 = (*DAT_00766600)(param_1);
  return iVar1;
}


/* FUN_0055da70 @ 0055da70  kind=lib  attributed-by=lib-island  size=118 */

void FUN_0055da70(undefined4 param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = DAT_0076b49c;
  pcVar2 = DAT_0076b498;
  iVar1 = DAT_0076b360;
  if (DAT_0076b498 != (code *)0x0) {
    iVar4 = DAT_0076b360 >> 0x1f;
    DAT_0076b498 = (code *)0x0;
    if (DAT_0076b488 != 0) {
      (*DAT_00766638)(DAT_0076b488);
    }
    (*pcVar2)(uVar3,iVar1,iVar4,param_1);
    if (DAT_0076b488 != 0) {
      (*DAT_00766630)(DAT_0076b488);
    }
  }
  DAT_0076b498 = pcVar2;
  DAT_0076b49c = uVar3;
  return;
}


/* FUN_0055daf0 @ 0055daf0  kind=lib  attributed-by=lib-island  size=293 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0055daf0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  
  if (DAT_00766600 == 0) {
    FUN_00579aa0(4,&PTR_FUN_00713494);
  }
  _DAT_0076b488 = 0;
  _DAT_0076b490 = 0;
  _DAT_0076b498 = 0;
  _DAT_0076b4a0 = 0;
  _DAT_0076b4a8 = 0;
  if (DAT_007665e4 != 0) {
    uVar2 = (*DAT_00766628)(3);
    _DAT_0076b488 = CONCAT44(DAT_0076b488_4,uVar2);
  }
  if (((DAT_00766688 == (undefined4 *)0x0) || ((int)DAT_0076668c < 100)) || (DAT_00766690 < 1)) {
    _DAT_0076b4a0 = _DAT_0076b4a0 & 0xffffffff00000000;
    DAT_00766688 = (undefined4 *)0x0;
    DAT_0076668c = 0;
    DAT_00766690 = 0;
  }
  else {
    _DAT_0076b4a8 = CONCAT44(DAT_0076b4ac,DAT_00766690);
    uVar6 = DAT_0076668c & 0xfffffff8;
    iVar5 = DAT_00766690 + -1;
    _DAT_0076b4a0 = ZEXT48(DAT_00766688) << 0x20;
    lVar1 = _DAT_0076b4a0;
    DAT_0076b4a4 = DAT_00766688;
    puVar3 = DAT_00766688;
    puVar4 = DAT_00766688;
    DAT_0076668c = uVar6;
    if (0 < iVar5) {
      do {
        _DAT_0076b4a0 = lVar1;
        puVar4 = (undefined4 *)((int)puVar3 + uVar6);
        *puVar3 = puVar4;
        iVar5 = iVar5 + -1;
        puVar3 = puVar4;
        lVar1 = _DAT_0076b4a0;
      } while (iVar5 != 0);
    }
    *puVar4 = 0;
    _DAT_0076b4a0 = CONCAT44(DAT_0076b4a4,puVar4 + 1);
  }
  if (((DAT_00766694 == 0) || (DAT_00766698 < 0x200)) || (DAT_0076669c < 1)) {
    DAT_00766694 = 0;
    DAT_00766698 = 0;
    DAT_0076669c = 0;
  }
  (*_DAT_00766614)(DAT_00766618._4_4_);
  return;
}


/* FUN_0055dc60 @ 0055dc60  kind=lib  attributed-by=lib-island  size=354 */

void FUN_0055dc60(int *param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  short *psVar5;
  undefined4 uVar6;
  undefined2 local_18 [2];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar2 = *param_1;
  iVar3 = FUN_00566d40(iVar2,param_2[3],0);
  if (param_3 == 0) goto LAB_0055dd74;
  uVar4 = FUN_00536250(iVar2,param_3,0,0);
  psVar5 = (short *)FUN_00552230(iVar2,0x50);
  if (psVar5 == (short *)0x0) {
LAB_0055dcf3:
    psVar5 = (short *)0x0;
    if (iVar3 != 0) {
      FUN_005303a0(iVar2,iVar3);
      FUN_005521a0(iVar2,iVar3);
    }
  }
  else {
    memset(psVar5,0,0x50);
    psVar5[1] = 1;
    psVar5 = (short *)FUN_00567680(iVar2,psVar5,1,(int)*psVar5);
    if (*(char *)(iVar2 + 0x38) != '\0') {
      FUN_00567370(iVar2,psVar5);
      goto LAB_0055dcf3;
    }
    sVar1 = *psVar5;
    uVar6 = FUN_0055e3f0(iVar2,0);
    *(undefined4 *)(psVar5 + sVar1 * 0x24 + -0x1c) = uVar6;
    uVar6 = FUN_0055e3f0(iVar2,0);
    *(undefined4 *)(psVar5 + sVar1 * 0x24 + -0x1e) = uVar6;
    uVar6 = FUN_00552450(iVar2,*param_2);
    *(undefined4 *)(psVar5 + 10) = uVar6;
    *(int *)(psVar5 + 0xe) = iVar3;
  }
  iVar3 = FUN_00566e90(param_1,0,psVar5,uVar4,0,0,0,0,0,0);
  if (iVar3 != 0) {
    *(ushort *)(iVar3 + 6) = *(ushort *)(iVar3 + 6) | 0x100;
  }
LAB_0055dd74:
  local_14 = param_4;
  local_18[0] = 9;
  local_10 = 0;
  local_c = 0;
  FUN_005654f0(param_1,iVar3,local_18);
  if (iVar3 != 0) {
    FUN_005303a0(iVar2,iVar3);
    FUN_005521a0(iVar2,iVar3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0055ddd0 @ 0055ddd0  kind=lib  attributed-by=lib-island  size=574 */

uint FUN_0055ddd0(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined4 uVar12;
  bool bVar13;
  double dVar14;
  double dVar15;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 local_4c;
  undefined8 local_44;
  undefined8 local_3c;
  undefined8 local_34;
  undefined8 local_2c;
  undefined8 local_24;
  undefined8 local_1c;
  undefined8 local_14;
  
  uVar1 = *(ushort *)(param_1 + 0x1c);
  uVar2 = *(ushort *)(param_2 + 0x1c);
  uVar3 = uVar2 | uVar1;
  if ((uVar3 & 1) != 0) {
    return (uVar2 & 1) - (uVar1 & 1);
  }
  if ((uVar3 & 0xc) != 0) {
    if ((uVar1 & 0xc) == 0) {
      return 1;
    }
    if ((uVar2 & 0xc) != 0) {
      if ((uVar2 & uVar1 & 4) != 0) {
        iVar6 = *(int *)(param_1 + 0x14);
        iVar7 = *(int *)(param_2 + 0x14);
        if (iVar6 <= iVar7) {
          if (iVar6 < iVar7) {
            return 0xffffffff;
          }
          if (*(uint *)(param_1 + 0x10) < *(uint *)(param_2 + 0x10)) {
            return 0xffffffff;
          }
          if ((iVar6 < iVar7) ||
             ((iVar6 <= iVar7 && (*(uint *)(param_1 + 0x10) <= *(uint *)(param_2 + 0x10))))) {
            return 0;
          }
        }
        return 1;
      }
      if ((uVar1 & 8) == 0) {
        dVar15 = (double)*(longlong *)(param_1 + 0x10);
      }
      else {
        dVar15 = *(double *)(param_1 + 8);
      }
      if ((uVar2 & 8) == 0) {
        dVar14 = (double)*(longlong *)(param_2 + 0x10);
      }
      else {
        dVar14 = *(double *)(param_2 + 8);
      }
      if (dVar14 <= dVar15) {
        return (uint)(dVar14 < dVar15);
      }
    }
    return 0xffffffff;
  }
  if ((uVar3 & 2) != 0) {
    if ((uVar1 & 2) == 0) {
      return 1;
    }
    if ((uVar2 & 2) == 0) {
      return 0xffffffff;
    }
    if (param_3 != 0) {
      if (*(char *)(param_1 + 0x1f) != *(char *)(param_3 + 4)) {
        local_34 = 0;
        local_2c = 0;
        local_24 = 0;
        local_1c = 0;
        local_14 = 0;
        local_5c = 0;
        local_54 = 0;
        local_4c = 0;
        local_44 = 0;
        local_3c = 0;
        FUN_005752a0(&local_34,param_1,0x1000);
        FUN_005752a0(&local_5c,param_2,0x1000);
        iVar6 = FUN_0056bce0(&local_34,*(undefined1 *)(param_3 + 4));
        uVar12 = (undefined4)local_1c;
        if (iVar6 == 0) {
          uVar12 = 0;
        }
        iVar7 = FUN_0056bce0(&local_5c,*(undefined1 *)(param_3 + 4));
        uVar9 = (undefined4)local_44;
        if (iVar7 == 0) {
          uVar9 = 0;
        }
        uVar5 = (**(code **)(param_3 + 0xc))(*(undefined4 *)(param_3 + 8),uVar12,iVar6,uVar9,iVar7);
        FUN_00574d40(&local_34);
        FUN_00574d40(&local_5c);
        return uVar5;
      }
      uVar5 = (**(code **)(param_3 + 0xc))
                        (*(undefined4 *)(param_3 + 8),*(undefined4 *)(param_1 + 0x18),
                         *(undefined4 *)(param_1 + 4),*(undefined4 *)(param_2 + 0x18),
                         *(undefined4 *)(param_2 + 4));
      return uVar5;
    }
  }
  uVar5 = *(uint *)(param_1 + 0x18);
  pbVar10 = *(byte **)(param_1 + 4);
  pbVar11 = *(byte **)(param_2 + 4);
  uVar8 = uVar5;
  if (*(int *)(param_2 + 0x18) < (int)uVar5) {
    uVar8 = *(uint *)(param_2 + 0x18);
  }
  while (uVar4 = uVar8 - 4, 3 < uVar8) {
    if (*(int *)pbVar10 != *(int *)pbVar11) goto LAB_0055dfc8;
    pbVar10 = pbVar10 + 4;
    pbVar11 = pbVar11 + 4;
    uVar8 = uVar4;
  }
  if (uVar4 != 0xfffffffc) {
LAB_0055dfc8:
    bVar13 = *pbVar10 < *pbVar11;
    if ((*pbVar10 != *pbVar11) ||
       ((uVar4 != 0xfffffffd &&
        ((bVar13 = pbVar10[1] < pbVar11[1], pbVar10[1] != pbVar11[1] ||
         ((uVar4 != 0xfffffffe &&
          ((bVar13 = pbVar10[2] < pbVar11[2], pbVar10[2] != pbVar11[2] ||
           ((uVar4 != 0xffffffff && (bVar13 = pbVar10[3] < pbVar11[3], pbVar10[3] != pbVar11[3])))))
          ))))))) {
      uVar8 = -(uint)bVar13 | 1;
      goto LAB_0055dffe;
    }
  }
  uVar8 = 0;
LAB_0055dffe:
  if (uVar8 == 0) {
    uVar8 = uVar5 - *(int *)(param_2 + 0x18);
  }
  return uVar8;
}


/* FUN_0055e010 @ 0055e010  kind=lib  attributed-by=lib-island  size=41 */

void FUN_0055e010(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined **)param_1 = &DAT_00712500;
  return;
}


/* FUN_0055e0d0 @ 0055e0d0  kind=lib  attributed-by=lib-island  size=453 */

void FUN_0055e0d0(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  
  puVar1 = param_1;
  piVar3 = (int *)param_1[2];
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)FUN_0056c7b0(*param_1);
    param_1[2] = piVar3;
    if (piVar3 == (int *)0x0) {
      return;
    }
    FUN_0056bdc0(piVar3,0x94);
  }
  if (*(char *)((int)param_1 + 0x13) == '\0') {
    param_1[0x13] = param_1[0x13] + 1;
    param_1 = (undefined4 *)param_1[0x13];
  }
  else {
    bVar2 = *(char *)((int)param_1 + 0x13) - 1;
    *(byte *)((int)param_1 + 0x13) = bVar2;
    param_1 = (undefined4 *)param_1[bVar2 + 7];
  }
  if (*(char *)((int)puVar1 + 0x13) == '\0') {
    puVar1[0x13] = puVar1[0x13] + 1;
    uVar7 = puVar1[0x13];
  }
  else {
    bVar2 = *(char *)((int)puVar1 + 0x13) - 1;
    *(byte *)((int)puVar1 + 0x13) = bVar2;
    uVar7 = puVar1[bVar2 + 7];
  }
  iVar5 = piVar3[7];
  if ((iVar5 < piVar3[8]) || (iVar4 = FUN_0053b4b0(piVar3), iVar4 == 0)) {
    piVar3[7] = piVar3[7] + 1;
    iVar4 = piVar3[1];
    *(int *)(iVar4 + 4 + iVar5 * 0x14) = param_2;
    *(undefined2 *)(iVar4 + iVar5 * 0x14) = 0x24;
    *(undefined1 *)(iVar4 + 3 + iVar5 * 0x14) = 0;
    *(undefined4 **)(iVar4 + 8 + iVar5 * 0x14) = param_1;
    *(undefined4 *)(iVar4 + 0xc + iVar5 * 0x14) = 2;
    *(undefined4 *)(iVar4 + 0x10 + iVar5 * 0x14) = 0;
  }
  uVar6 = 1 << ((byte)param_2 & 0x1f);
  piVar3[0x1a] = piVar3[0x1a] | uVar6;
  if ((param_2 != 1) &&
     (*(char *)(*(int *)(*(int *)(*piVar3 + 0x10) + 4 + param_2 * 0x10) + 9) != '\0')) {
    piVar3[0x1b] = piVar3[0x1b] | uVar6;
  }
  FUN_0056be90(piVar3,7,param_3,uVar7);
  uVar6 = piVar3[7];
  if (((int)uVar6 < piVar3[8]) || (iVar5 = FUN_0053b4b0(piVar3), iVar5 == 0)) {
    iVar5 = piVar3[1];
    piVar3[7] = piVar3[7] + 1;
    *(undefined4 *)(iVar5 + 4 + uVar6 * 0x14) = uVar7;
    *(undefined2 *)(iVar5 + uVar6 * 0x14) = 0x50;
    *(undefined1 *)(iVar5 + 3 + uVar6 * 0x14) = 0;
    *(undefined4 *)(iVar5 + 8 + uVar6 * 0x14) = 0;
    *(undefined4 **)(iVar5 + 0xc + uVar6 * 0x14) = param_1;
    *(undefined4 *)(iVar5 + 0x10 + uVar6 * 0x14) = 0;
  }
  else {
    uVar6 = 1;
  }
  iVar5 = piVar3[7];
  if ((iVar5 < piVar3[8]) || (iVar4 = FUN_0053b4b0(piVar3), iVar4 == 0)) {
    piVar3[7] = piVar3[7] + 1;
    iVar4 = piVar3[1];
    *(int *)(iVar4 + 4 + iVar5 * 0x14) = param_2;
    *(undefined2 *)(iVar4 + iVar5 * 0x14) = 0x25;
    *(undefined1 *)(iVar4 + 3 + iVar5 * 0x14) = 0;
    *(undefined4 *)(iVar4 + 8 + iVar5 * 0x14) = 2;
    *(undefined4 *)(iVar4 + 0xc + iVar5 * 0x14) = uVar7;
    *(undefined4 *)(iVar4 + 0x10 + iVar5 * 0x14) = 0;
  }
  if ((-1 < (int)uVar6) && (uVar6 < (uint)piVar3[7])) {
    *(int *)(piVar3[1] + 8 + uVar6 * 0x14) = piVar3[7];
  }
  FUN_00563fb0(puVar1,param_1);
  FUN_00563fb0(puVar1,uVar7);
  return;
}


/* FUN_0055e2a0 @ 0055e2a0  kind=lib  attributed-by=lib-island  size=224 */

undefined4 FUN_0055e2a0(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 unaff_EBX;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar2 = __alldvrm(*param_1,param_1[1],0,1);
  uVar3 = __alldvrm(param_2,param_3,0,1);
  param_3 = (uint)((ulonglong)uVar3 >> 0x20);
  lVar4 = __allmul(uVar3,uVar2);
  if (lVar4 == 0) {
    lVar4 = __allmul((int)uVar3,param_3,extraout_ECX,unaff_EBX);
    lVar5 = __allmul(extraout_ECX_00,unaff_EBX,uVar2);
    param_3 = (uint)(lVar4 + lVar5);
    if ((int)((ulonglong)(lVar4 + lVar5) >> 0x20) + (uint)(0x7fffffff < param_3) == 0) {
      param_2 = 0;
      uVar2 = __allmul(extraout_ECX_00,unaff_EBX,extraout_ECX,unaff_EBX);
      iVar1 = FUN_00549380(&param_2,uVar2);
      if (iVar1 == 0) {
        *param_1 = param_2;
        param_1[1] = param_3;
        return 0;
      }
    }
  }
  return 1;
}


/* FUN_0055e380 @ 0055e380  kind=lib  attributed-by=lib-island  size=102 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0055e380(void)

{
  undefined **ppuVar1;
  
  if (DAT_00766628 == (undefined *)0x0) {
    ppuVar1 = &PTR_LAB_00715558;
    if (DAT_007665e4 == 0) {
      ppuVar1 = &PTR_vfunction14_00714d04;
    }
    _DAT_0076662c = *(undefined8 *)(ppuVar1 + 3);
    _DAT_00766624 = ppuVar1[1];
    DAT_00766620 = (code *)*ppuVar1;
    _DAT_00766634 = *(undefined8 *)(ppuVar1 + 5);
    DAT_00766628 = ppuVar1[2];
    _DAT_0076663c = *(undefined8 *)(ppuVar1 + 7);
  }
                    /* WARNING: Could not recover jumptable at 0x0055e3e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00766620)();
  return;
}


/* FUN_0055e3f0 @ 0055e3f0  kind=lib  attributed-by=lib-island  size=96 */

void * FUN_0055e3f0(undefined4 param_1,undefined4 *param_2)

{
  void *_Src;
  size_t _Size;
  void *_Dst;
  
  if (param_2 == (undefined4 *)0x0) {
    return (void *)0x0;
  }
  _Src = (void *)*param_2;
  _Size = param_2[1];
  if (_Src == (void *)0x0) {
    FUN_00552be0(0);
    return (void *)0x0;
  }
  _Dst = (void *)FUN_00552230(param_1,_Size + 1);
  if (_Dst != (void *)0x0) {
    memcpy(_Dst,_Src,_Size);
    *(undefined1 *)((int)_Dst + _Size) = 0;
  }
  FUN_00552be0(_Dst);
  return _Dst;
}


/* FUN_0055e450 @ 0055e450  kind=lib  attributed-by=lib-island  size=147 */

void FUN_0055e450(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *_Dst;
  undefined4 local_74 [25];
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
  local_8 = 0;
  local_10 = *param_1;
  if ((param_1[0x11] == 0) &&
     (local_c = FUN_0056a9b0(local_10,param_2,&stack0x0000000c), local_c != 0)) {
    *(char *)((int)param_1 + 0x12) = *(char *)((int)param_1 + 0x12) + '\x01';
    _Dst = param_1 + 0x73;
    puVar3 = _Dst;
    puVar4 = local_74;
    for (iVar2 = 0x19; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    memset(_Dst,0,100);
    iVar2 = local_c;
    FUN_00564800(param_1,local_c,&local_8);
    uVar1 = local_10;
    FUN_005521a0(local_10,local_8);
    FUN_005521a0(uVar1,iVar2);
    *(char *)((int)param_1 + 0x12) = *(char *)((int)param_1 + 0x12) + -1;
    puVar3 = local_74;
    for (iVar2 = 0x19; iVar2 != 0; iVar2 = iVar2 + -1) {
      *_Dst = *puVar3;
      puVar3 = puVar3 + 1;
      _Dst = _Dst + 1;
    }
  }
  return;
}


/* FUN_0055e4f0 @ 0055e4f0  kind=lib  attributed-by=lib-string  size=242 */

void FUN_0055e4f0(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  
  piVar3 = (int *)param_1[2];
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)FUN_0056c7b0(*param_1);
    param_1[2] = piVar3;
    if (piVar3 != (int *)0x0) {
      FUN_0056bdc0(piVar3,0x94);
    }
  }
  pcVar4 = "sqlite_temp_master";
  if (param_2 != 1) {
    pcVar4 = "sqlite_master";
  }
  FUN_005681e0(param_1,param_2,1,1,pcVar4);
  iVar2 = piVar3[7];
  if ((iVar2 < piVar3[8]) || (iVar5 = FUN_0053b4b0(piVar3), iVar5 == 0)) {
    piVar3[7] = piVar3[7] + 1;
    iVar5 = piVar3[1];
    *(undefined2 *)(iVar5 + iVar2 * 0x14) = 0x28;
    *(undefined1 *)(iVar5 + 3 + iVar2 * 0x14) = 0;
    *(undefined4 *)(iVar5 + 4 + iVar2 * 0x14) = 0;
    *(undefined4 *)(iVar5 + 8 + iVar2 * 0x14) = 1;
    *(int *)(iVar5 + 0xc + iVar2 * 0x14) = param_2;
    *(undefined4 *)(iVar5 + 0x10 + iVar2 * 0x14) = 0;
  }
  iVar2 = piVar3[1];
  iVar5 = *piVar3;
  if ((iVar2 == 0) || (*(char *)(iVar5 + 0x38) != '\0')) {
    FUN_00539320(iVar5,0xfffffff2,5);
  }
  else {
    iVar1 = iVar2 + (piVar3[7] + -1) * 0x14;
    FUN_00539320(iVar5,(int)*(char *)(iVar1 + 1),
                 *(undefined4 *)(iVar2 + 0x10 + (piVar3[7] + -1) * 0x14));
    *(undefined4 *)(iVar1 + 0x10) = 5;
    *(undefined1 *)(iVar1 + 1) = 0xf2;
  }
  if (param_1[0x12] == 0) {
    param_1[0x12] = 1;
  }
  return;
}


/* FUN_0055e5f0 @ 0055e5f0  kind=lib  attributed-by=lib-island  size=232 */

void FUN_0055e5f0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 int param_5)

{
  undefined1 *puVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  
  piVar6 = (int *)param_1[2];
  if (piVar6 == (int *)0x0) {
    piVar6 = (int *)FUN_0056c7b0(*param_1);
    param_1[2] = piVar6;
    if (piVar6 != (int *)0x0) {
      FUN_0056bdc0(piVar6,0x94);
    }
  }
  FUN_005681e0(param_1,param_3,param_4[8],param_5 == 0x28,*param_4);
  iVar4 = piVar6[7];
  uVar5 = param_4[8];
  if (piVar6[8] <= iVar4) {
    iVar7 = FUN_0053b4b0(piVar6);
    if (iVar7 != 0) goto LAB_0055e68d;
  }
  piVar6[7] = piVar6[7] + 1;
  puVar1 = (undefined1 *)(piVar6[1] + iVar4 * 0x14);
  *puVar1 = (char)param_5;
  *(undefined4 *)(puVar1 + 4) = param_2;
  *(undefined4 *)(puVar1 + 8) = uVar5;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 0xc) = param_3;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  puVar1[1] = 0;
LAB_0055e68d:
  iVar4 = piVar6[1];
  sVar3 = *(short *)((int)param_4 + 0x26);
  iVar7 = *piVar6;
  if ((iVar4 != 0) && (*(char *)(iVar7 + 0x38) == '\0')) {
    iVar2 = iVar4 + (piVar6[7] + -1) * 0x14;
    FUN_00539320(iVar7,(int)*(char *)(iVar2 + 1),
                 *(undefined4 *)(iVar4 + 0x10 + (piVar6[7] + -1) * 0x14));
    *(int *)(iVar2 + 0x10) = (int)sVar3;
    *(undefined1 *)(iVar2 + 1) = 0xf2;
    return;
  }
  FUN_00539320(iVar7,0xfffffff2,(int)sVar3);
  return;
}


/* FUN_0055e6e0 @ 0055e6e0  kind=lib  attributed-by=lib-island  size=397 */

int FUN_0055e6e0(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  iVar3 = param_2;
  if ((*(byte *)(param_2 + 0x2a) & 0x10) != 0) {
    return 0;
  }
  piVar7 = (int *)(param_2 + 0x40);
  iVar8 = *param_1;
  param_2 = -1000000;
  if (*piVar7 != 0) {
    iVar11 = 0;
    param_2 = 0;
    if (0 < *(int *)(iVar8 + 0x14)) {
      piVar6 = (int *)(*(int *)(iVar8 + 0x10) + 0xc);
      do {
        if (*piVar6 == *piVar7) break;
        iVar11 = iVar11 + 1;
        piVar6 = piVar6 + 4;
      } while (iVar11 < *(int *)(iVar8 + 0x14));
      iVar8 = *param_1;
      param_2 = iVar11;
    }
  }
  piVar7 = (int *)param_1[2];
  if (piVar7 == (int *)0x0) {
    piVar7 = (int *)FUN_0056c7b0(iVar8);
    param_1[2] = (int)piVar7;
    if (piVar7 != (int *)0x0) {
      FUN_0056bdc0(piVar7,0x94);
    }
  }
  FUN_0055e5f0(param_1,param_3,param_2,iVar3,param_4);
  iVar8 = 1;
  for (iVar3 = *(int *)(iVar3 + 8); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x14)) {
    iVar9 = FUN_0055b2a0(param_1,iVar3);
    iVar11 = piVar7[7];
    uVar4 = *(undefined4 *)(iVar3 + 0x28);
    if ((iVar11 < piVar7[8]) || (iVar10 = FUN_0053b4b0(piVar7), iVar10 == 0)) {
      piVar7[7] = piVar7[7] + 1;
      puVar1 = (undefined1 *)(piVar7[1] + iVar11 * 0x14);
      *puVar1 = (char)param_4;
      puVar1[3] = 0;
      *(int *)(puVar1 + 4) = iVar8 + param_3;
      *(undefined4 *)(puVar1 + 8) = uVar4;
      *(int *)(puVar1 + 0xc) = param_2;
      *(undefined4 *)(puVar1 + 0x10) = 0;
      puVar1[1] = 0;
    }
    else {
      iVar11 = 1;
    }
    iVar10 = piVar7[1];
    iVar5 = *piVar7;
    if ((iVar10 == 0) || (*(char *)(iVar5 + 0x38) != '\0')) {
      FUN_00539320(iVar5,0xfffffff0,iVar9);
    }
    else {
      if (iVar11 < 0) {
        iVar11 = piVar7[7] + -1;
      }
      iVar2 = iVar10 + iVar11 * 0x14;
      FUN_00539320(iVar5,(int)*(char *)(iVar2 + 1),*(undefined4 *)(iVar10 + 0x10 + iVar11 * 0x14));
      *(undefined4 *)(iVar2 + 0x10) = 0;
      if (iVar9 == 0) {
        *(undefined4 *)(iVar2 + 0x10) = 0;
        *(undefined1 *)(iVar2 + 1) = 0;
      }
      else {
        *(int *)(iVar2 + 0x10) = iVar9;
        *(undefined1 *)(iVar2 + 1) = 0xfa;
      }
    }
    iVar8 = iVar8 + 1;
  }
  if (param_1[0x12] < param_3 + iVar8) {
    param_1[0x12] = param_3 + iVar8;
  }
  return iVar8 + -1;
}


/* FUN_0055e870 @ 0055e870  kind=lib  attributed-by=lib-island  size=137 */

undefined4 FUN_0055e870(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = param_1;
  puVar1 = (undefined4 *)*param_1;
  if ((*(int *)(puVar1[4] + 0x14) == 0) && ((char)param_1[0x75] == '\0')) {
    iVar3 = FUN_0054e4a0(*puVar1,0,puVar1,&param_1,0,0x21e);
    if (iVar3 != 0) {
      FUN_00553950(piVar2,"unable to open a temporary database file for storing temporary tables");
      piVar2[3] = iVar3;
      return 1;
    }
    *(int **)(puVar1[4] + 0x14) = param_1;
    iVar3 = FUN_0054f2a0(param_1,puVar1[0x10],0xffffffff,0);
    if (iVar3 == 7) {
      *(undefined1 *)(puVar1 + 0xe) = 1;
      return 1;
    }
  }
  return 0;
}


/* FUN_0055e900 @ 0055e900  kind=lib  attributed-by=lib-island  size=36 */

undefined4 FUN_0055e900(int *param_1)

{
  undefined4 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = (**(code **)(*param_1 + 4))(param_1);
    *param_1 = 0;
    return uVar1;
  }
  return 0;
}


/* FUN_0055e930 @ 0055e930  kind=lib  attributed-by=lib-island  size=91 */

undefined4 FUN_0055e930(int *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  double local_c;
  
  if ((1 < *param_1) && ((code *)param_1[0x12] != (code *)0x0)) {
    uVar1 = (*(code *)param_1[0x12])(param_1,param_2);
    return uVar1;
  }
  uVar1 = (*(code *)param_1[0x10])(param_1,&local_c);
  local_c = local_c * 86400000.0;
  uVar2 = FUN_0068d946();
  *param_2 = uVar2;
  return uVar1;
}


/* FUN_0055e990 @ 0055e990  kind=lib  attributed-by=lib-island  size=105 */

int FUN_0055e990(int param_1,undefined4 param_2,undefined4 *param_3,uint param_4,undefined4 param_5)

{
  size_t _Size;
  void *_Dst;
  int iVar1;
  
  _Size = *(size_t *)(param_1 + 4);
  _Dst = (void *)FUN_0055da00(_Size);
  if (_Dst == (void *)0x0) {
    return 7;
  }
  memset(_Dst,0,_Size);
  iVar1 = (**(code **)(param_1 + 0x18))(param_1,param_2,_Dst,param_4 & 0x87f7f,param_5);
  if (iVar1 != 0) {
    FUN_00524410(_Dst);
    return iVar1;
  }
  *param_3 = _Dst;
  return 0;
}


/* FUN_0055ea00 @ 0055ea00  kind=lib  attributed-by=lib-island  size=31 */

void FUN_0055ea00(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  (**(code **)(*param_1 + 8))(param_1,param_2,param_3,param_4,param_5);
  return;
}


/* FUN_0055ea20 @ 0055ea20  kind=lib  attributed-by=lib-island  size=25 */

void FUN_0055ea20(int *param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(*param_1 + 0x10))(param_1,param_2,param_3);
  return;
}


/* FUN_0055ea40 @ 0055ea40  kind=lib  attributed-by=lib-island  size=31 */

void FUN_0055ea40(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  (**(code **)(*param_1 + 0xc))(param_1,param_2,param_3,param_4,param_5);
  return;
}


/* FUN_0055ea60 @ 0055ea60  kind=lib  attributed-by=lib-island  size=135 */

void FUN_0055ea60(undefined4 *param_1,uint param_2,int param_3)

{
  if (DAT_0076b74c != 0) {
    if (param_3 < 0x5b) {
      DAT_0076b758 = param_3 / 10 + 1;
    }
    else {
      DAT_0076b758 = 10;
    }
    DAT_0076b768 = (undefined4 *)0x0;
    DAT_0076b770 = 0;
    DAT_0076b750 = param_2 & 0xfffffff8;
    DAT_0076b76c = param_3;
    DAT_0076b754 = param_3;
    DAT_0076b75c = param_1;
    DAT_0076b760 = param_1;
    for (; param_3 != 0; param_3 = param_3 + -1) {
      *DAT_0076b760 = DAT_0076b768;
      DAT_0076b768 = DAT_0076b760;
      DAT_0076b760 = (undefined4 *)((int)DAT_0076b760 + (param_2 & 0xfffffff8));
    }
  }
  return;
}


/* FUN_0055eaf0 @ 0055eaf0  kind=lib  attributed-by=lib-island  size=116 */

int FUN_0055eaf0(int *param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  
  if (((param_2 == 0x45) && (param_3 != 0)) && (param_4 != 0)) {
    iVar1 = FUN_00553d70(*param_1,param_3,param_4);
  }
  else {
    iVar1 = FUN_00553bb0(*param_1,param_2,param_5,1);
    FUN_005540d0(*param_1,iVar1,param_3,param_4);
  }
  if ((iVar1 != 0) && (*(int *)(*param_1 + 0x5c) < *(int *)(iVar1 + 0x14))) {
    FUN_00553950(param_1,"Expression tree is too large (maximum depth %d)",*(int *)(*param_1 + 0x5c)
                );
  }
  return iVar1;
}


/* FUN_0055eb70 @ 0055eb70  kind=lib  attributed-by=lib-island  size=422 */

int FUN_0055eb70(int param_1,uint param_2,int *param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    FUN_00525a30(0xb,"database corruption at line %d of [%.10s]",0xa57c,
                 "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
    return 0xb;
  }
  iVar3 = *(int *)(param_1 + 0x28);
  if ((iVar3 == 0) &&
     (iVar3 = FUN_00560e90(*(undefined4 *)(param_1 + 0xb4),param_2,1,param_3), iVar3 == 0)) {
    puVar1 = (undefined4 *)*param_3;
    if ((puVar1[4] != 0) && (param_4 == 0)) {
      *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
      return 0;
    }
    puVar1[4] = param_1;
    if ((param_2 < 0x80000000) && (param_2 != DAT_007666d0 / *(int *)(param_1 + 0x80) + 1U)) {
      if ((((*(char *)(param_1 + 0xe) == '\0') && (param_2 <= *(uint *)(param_1 + 0x18))) &&
          (param_4 == 0)) && (**(int **)(param_1 + 0x3c) != 0)) {
        *(int *)(param_1 + 0xa4) = *(int *)(param_1 + 0xa4) + 1;
        iVar3 = FUN_00544d80(puVar1);
        if (iVar3 == 0) {
          return 0;
        }
      }
      else {
        if (param_2 <= *(uint *)(param_1 + 0x84)) {
          if (param_4 != 0) {
            if (DAT_0076b3bc != (code *)0x0) {
              (*DAT_0076b3bc)();
            }
            if (param_2 <= *(uint *)(param_1 + 0x1c)) {
              FUN_0054c100(*(undefined4 *)(param_1 + 0x38),param_2);
            }
            FUN_00528db0(param_1,param_2);
            if (DAT_0076b3c0 != (code *)0x0) {
              (*DAT_0076b3c0)();
            }
          }
          memset((void *)puVar1[1],0,*(size_t *)(param_1 + 0x80));
          return 0;
        }
        iVar3 = 0xd;
      }
    }
    else {
      FUN_00525a30(0xb,"database corruption at line %d of [%.10s]",0xa5a2,
                   "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
      iVar3 = 0xb;
    }
    if ((*(byte *)(puVar1 + 6) & 2) != 0) {
      FUN_00544570(puVar1);
    }
    iVar2 = puVar1[7];
    *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + -1;
    if (puVar1[5] == 1) {
      *(undefined4 *)(iVar2 + 0x2c) = 0;
    }
    (*DAT_00766664)(*(undefined4 *)(iVar2 + 0x28),*puVar1,1);
  }
  if (*(int *)(*(int *)(param_1 + 0xb4) + 0xc) == 0) {
    FUN_00541a10(param_1);
  }
  *param_3 = 0;
  return iVar3;
}


/* FUN_0055ed20 @ 0055ed20  kind=lib  attributed-by=lib-island  size=232 */

/* WARNING: Removing unreachable block (ram,0x0055ee05) */

int FUN_0055ed20(int param_1,int param_2,undefined1 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if ((*(int *)(param_1 + 0x28) == 0) &&
     (*(undefined1 *)(param_1 + 0x15) = param_3, iVar2 = 0, *(char *)(param_1 + 0xf) == '\x01')) {
    if (*(int *)(param_1 + 0xb8) == 0) {
      if ((*(byte *)(param_1 + 0x10) < 2) || (*(byte *)(param_1 + 0x10) == 5)) {
        iVar2 = (**(code **)(**(int **)(param_1 + 0x3c) + 0x1c))(*(int **)(param_1 + 0x3c),2);
        if (iVar2 != 0) {
          return iVar2;
        }
        if (*(char *)(param_1 + 0x10) != '\x05') {
          *(undefined1 *)(param_1 + 0x10) = 2;
        }
      }
      iVar2 = 0;
      if (param_2 != 0) {
        iVar2 = FUN_00542b40(param_1,4);
      }
    }
    else {
      if ((*(char *)(param_1 + 4) != '\0') && (*(char *)(*(int *)(param_1 + 0xb8) + 0x2b) == '\0'))
      {
        iVar2 = FUN_00541340(param_1,4);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = *(int *)(param_1 + 0xb8);
        if (*(char *)(iVar2 + 0x2b) == '\0') {
          (**(code **)(**(int **)(iVar2 + 4) + 0x38))
                    (*(int **)(iVar2 + 4),*(short *)(iVar2 + 0x28) + 3,1,5);
        }
        *(undefined1 *)(iVar2 + 0x2b) = 1;
      }
      iVar2 = FUN_00577a60(*(undefined4 *)(param_1 + 0xb8));
    }
    if (iVar2 == 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      *(undefined1 *)(param_1 + 0xf) = 2;
      *(undefined4 *)(param_1 + 0x24) = uVar1;
      *(undefined4 *)(param_1 + 0x20) = uVar1;
      *(undefined4 *)(param_1 + 0x1c) = uVar1;
      *(undefined4 *)(param_1 + 0x48) = 0;
      *(undefined4 *)(param_1 + 0x4c) = 0;
    }
  }
  return iVar2;
}


/* FUN_0055ee10 @ 0055ee10  kind=lib  attributed-by=lib-island  size=64 */

void FUN_0055ee10(int param_1)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 0xe) == '\0') && (*(char *)(param_1 + 0xc) == '\0')) {
    for (iVar1 = *(int *)(param_1 + 0x58); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x2c)) {
      *(undefined4 *)(iVar1 + 0x10) = 1;
    }
    FUN_005611b0(*(undefined4 *)(param_1 + 0xb4),0);
  }
  return;
}


/* FUN_0055ee50 @ 0055ee50  kind=lib  attributed-by=lib-island  size=309 */

undefined4 FUN_0055ee50(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 0xb0);
  if (DAT_0076b3bc != (code *)0x0) {
    (*DAT_0076b3bc)();
  }
  *(undefined1 *)(param_1 + 4) = 0;
  FUN_00577c80(*(undefined4 *)(param_1 + 0xb8),*(undefined1 *)(param_1 + 9),
               *(undefined4 *)(param_1 + 0x80),uVar1);
  iVar2 = *(int *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0xb8) = 0;
  for (; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x2c)) {
    *(undefined4 *)(iVar2 + 0x10) = 1;
  }
  FUN_005611b0(*(undefined4 *)(param_1 + 0xb4),0);
  if (*(char *)(param_1 + 0xe) == '\0') {
    piVar3 = *(int **)(param_1 + 0x40);
    if (*piVar3 != 0) {
      if ((*(char *)(param_1 + 7) != '\0') ||
         (uVar4 = (**(code **)(*piVar3 + 0x14))(piVar3,2), uVar4 == 0)) {
        uVar4 = (**(code **)(**(int **)(param_1 + 0x40) + 0x18))
                          (*(int **)(param_1 + 0x40),param_1 + 0x50);
      }
      if (((uVar4 & 0xff) == 0xd) || ((uVar4 & 0xff) == 10)) {
        *(uint *)(param_1 + 0x28) = uVar4;
        *(undefined1 *)(param_1 + 0xf) = 6;
      }
    }
    FUN_00541a10(param_1);
  }
  else {
    FUN_00542a20(param_1);
  }
  if (DAT_0076b3c0 != (code *)0x0) {
    (*DAT_0076b3c0)();
  }
  piVar3 = *(int **)(param_1 + 0x40);
  if (*piVar3 != 0) {
    (**(code **)(*piVar3 + 4))(piVar3);
    *piVar3 = 0;
  }
  piVar3 = *(int **)(param_1 + 0x3c);
  if (*piVar3 != 0) {
    (**(code **)(*piVar3 + 4))(piVar3);
    *piVar3 = 0;
  }
  FUN_00544190(uVar1);
  iVar2 = *(int *)(*(int *)(param_1 + 0xb4) + 0x28);
  if (iVar2 != 0) {
    (*DAT_00766670)(iVar2);
  }
  FUN_00524410(param_1);
  return 0;
}


/* FUN_0055ef90 @ 0055ef90  kind=lib  attributed-by=lib-island  size=178 */

void FUN_0055ef90(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = param_1;
  if (param_1[0x2e] == 0) {
    piVar1 = param_1 + 4;
    param_1 = (int *)0x0;
    if (((char)*piVar1 == '\0') || ((char)*piVar1 == '\x05')) {
      iVar3 = (**(code **)(*(int *)piVar2[0xf] + 0x1c))((int *)piVar2[0xf],1);
      if (iVar3 != 0) {
        return;
      }
      if ((char)piVar2[4] != '\x05') {
        *(undefined1 *)(piVar2 + 4) = 1;
      }
    }
    iVar3 = (**(code **)(*piVar2 + 0x20))(*piVar2,piVar2[0x2f],0,&param_1);
    if (iVar3 != 0) {
      return;
    }
    if ((param_1 != (int *)0x0) && (iVar3 = FUN_00541390(piVar2), iVar3 != 0)) {
      return;
    }
  }
  if ((piVar2[0x2e] != 0) && (iVar3 = FUN_005412e0(piVar2), iVar3 == 0)) {
    FUN_00577c80(piVar2[0x2e],*(undefined1 *)((int)piVar2 + 9),piVar2[0x20],piVar2[0x2c]);
    piVar2[0x2e] = 0;
  }
  return;
}


/* FUN_0055f050 @ 0055f050  kind=lib  attributed-by=lib-island  size=514 */

int FUN_0055f050(uint param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 local_8;
  
  uVar3 = param_1;
  if (*(int *)(param_1 + 0x28) != 0) {
    return *(int *)(param_1 + 0x28);
  }
  if (*(byte *)(param_1 + 0xf) < 3) {
    return 0;
  }
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(int *)(param_1 + 0xb8) == 0) {
      iVar4 = FUN_00542000(param_1,0);
      if (iVar4 != 0) {
        return iVar4;
      }
      uVar1 = *(uint *)(uVar3 + 0x18);
      uVar2 = *(uint *)(uVar3 + 0x1c);
      if ((uVar1 < uVar2) && (*(char *)(uVar3 + 5) != '\x02')) {
        iVar4 = DAT_007666d0 / *(int *)(uVar3 + 0x80);
        uVar7 = uVar1 + 1;
        *(uint *)(uVar3 + 0x18) = uVar2;
        param_1 = uVar7;
        if (uVar7 <= uVar2) {
          do {
            param_1 = uVar7;
            iVar5 = FUN_0054c2e0(*(undefined4 *)(uVar3 + 0x38),uVar7);
            if ((iVar5 == 0) && (uVar7 != iVar4 + 1U)) {
              iVar5 = FUN_0055eb70(uVar3,uVar7,&local_8,0);
              uVar6 = local_8;
              if (iVar5 != 0) {
                return iVar5;
              }
              iVar5 = FUN_00560330(local_8);
              FUN_005602d0(uVar6);
              uVar7 = param_1;
              if (iVar5 != 0) {
                return iVar5;
              }
            }
            uVar7 = uVar7 + 1;
            param_1 = uVar7;
          } while (uVar7 <= *(uint *)(uVar3 + 0x1c));
        }
        *(uint *)(uVar3 + 0x18) = uVar1;
      }
      iVar4 = FUN_00580270(uVar3,param_2);
      if (iVar4 != 0) {
        return iVar4;
      }
      iVar4 = FUN_0057ac30(uVar3,0);
      if (iVar4 != 0) {
        return iVar4;
      }
      uVar6 = FUN_00560cd0(*(undefined4 *)(uVar3 + 0xb4));
      iVar4 = FUN_00542df0(uVar3,uVar6);
      if (iVar4 != 0) {
        return iVar4;
      }
      FUN_00560c70(*(undefined4 *)(uVar3 + 0xb4));
      iVar4 = *(int *)(uVar3 + 0x18);
      if ((iVar4 != *(int *)(uVar3 + 0x20)) &&
         (iVar4 = FUN_00542920(uVar3,iVar4 - (uint)(iVar4 == DAT_007666d0 / *(int *)(uVar3 + 0x80) +
                                                             1)), iVar4 != 0)) {
        return iVar4;
      }
      iVar4 = 0;
      if (param_3 == 0) {
        iVar4 = FUN_00560280(uVar3);
      }
      if (iVar4 != 0) {
        return iVar4;
      }
    }
    else {
      iVar4 = FUN_00560cd0(*(undefined4 *)(param_1 + 0xb4));
      param_1 = 0;
      if (iVar4 == 0) {
        FUN_0055eb70(uVar3,1,&param_1,0);
        *(undefined4 *)(param_1 + 0xc) = 0;
        iVar4 = param_1;
      }
      iVar5 = param_1;
      iVar4 = FUN_00541ab0(uVar3,iVar4,*(undefined4 *)(uVar3 + 0x18),1);
      FUN_005602d0(iVar5);
      if (iVar4 != 0) {
        return iVar4;
      }
      FUN_00560c70(*(undefined4 *)(uVar3 + 0xb4));
    }
  }
  else {
    for (iVar4 = *(int *)(param_1 + 0x58); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x2c)) {
      *(undefined4 *)(iVar4 + 0x10) = 1;
    }
  }
  if (*(int *)(uVar3 + 0xb8) == 0) {
    *(undefined1 *)(uVar3 + 0xf) = 5;
  }
  return 0;
}


/* FUN_0055f260 @ 0055f260  kind=lib  attributed-by=lib-island  size=75 */

void FUN_0055f260(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    if (((*(char *)(param_1 + 0xf) == '\x02') && (*(char *)(param_1 + 4) != '\0')) &&
       (*(char *)(param_1 + 5) == '\x01')) {
      *(undefined1 *)(param_1 + 0xf) = 1;
      return;
    }
    uVar1 = FUN_00541e00(param_1,*(undefined1 *)(param_1 + 0x12));
    if (((uVar1 & 0xff) == 0xd) || ((uVar1 & 0xff) == 10)) {
      *(uint *)(param_1 + 0x28) = uVar1;
      *(undefined1 *)(param_1 + 0xf) = 6;
    }
  }
  return;
}


/* FUN_0055f2b0 @ 0055f2b0  kind=lib  attributed-by=lib-island  size=96 */

undefined8 FUN_0055f2b0(int param_1,int param_2,uint param_3)

{
  int iVar1;
  
  if ((-2 < (int)param_3) && ((param_3 < 0x80000000 || (param_2 == -1)))) {
    iVar1 = *(int *)(param_1 + 0xb8);
    *(int *)(param_1 + 0x88) = param_2;
    *(uint *)(param_1 + 0x8c) = param_3;
    if (iVar1 != 0) {
      *(int *)(iVar1 + 0x10) = param_2;
      *(uint *)(iVar1 + 0x14) = param_3;
      return *(undefined8 *)(param_1 + 0x88);
    }
    return CONCAT44(*(undefined4 *)(param_1 + 0x8c),param_2);
  }
  return *(undefined8 *)(param_1 + 0x88);
}


/* FUN_0055f310 @ 0055f310  kind=lib  attributed-by=lib-island  size=44 */

undefined1 FUN_0055f310(int param_1,int param_2)

{
  if (((-1 < param_2) && (*(char *)(param_1 + 0xc) == '\0')) &&
     ((*(int *)(param_1 + 0xb8) == 0 || (*(char *)(*(int *)(param_1 + 0xb8) + 0x2b) != '\x02')))) {
    *(char *)(param_1 + 4) = (char)param_2;
  }
  return *(undefined1 *)(param_1 + 4);
}


/* FUN_0055f390 @ 0055f390  kind=lib  attributed-by=lib-island  size=435 */

int FUN_0055f390(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint local_8;
  
  iVar3 = param_2;
  iVar4 = param_1;
  local_8 = 0;
  if ((*(char *)(param_1 + 0xe) != '\0') && (iVar5 = FUN_00560330(param_2), iVar5 != 0)) {
    return iVar5;
  }
  if ((((*(byte *)(iVar3 + 0x18) & 2) != 0) && (iVar5 = FUN_0057a8b0(iVar3), iVar5 != 0)) &&
     (iVar5 = FUN_0057a9b0(iVar3), iVar5 != 0)) {
    return iVar5;
  }
  if (((*(ushort *)(iVar3 + 0x18) & 4) != 0) && (param_4 == 0)) {
    local_8 = *(uint *)(iVar3 + 0x14);
  }
  *(ushort *)(iVar3 + 0x18) = *(ushort *)(iVar3 + 0x18) & 0xfffb;
  FUN_00560e90(*(undefined4 *)(iVar4 + 0xb4),param_3,0,&param_1);
  iVar5 = param_1;
  if (param_1 != 0) {
    *(ushort *)(iVar3 + 0x18) = *(ushort *)(iVar3 + 0x18) | *(ushort *)(param_1 + 0x18) & 4;
    if (*(char *)(iVar4 + 0xe) == '\0') {
      FUN_00560e50(param_1);
    }
    else {
      FUN_005610a0(param_1,*(int *)(iVar4 + 0x18) + 1);
    }
  }
  param_1 = *(int *)(iVar3 + 0x14);
  FUN_005610a0(iVar3,param_3);
  *(ushort *)(iVar3 + 0x18) = *(ushort *)(iVar3 + 0x18) & 0xffdf;
  if ((*(ushort *)(iVar3 + 0x18) & 2) == 0) {
    *(ushort *)(iVar3 + 0x18) = *(ushort *)(iVar3 + 0x18) | 2;
    piVar1 = *(int **)(iVar3 + 0x1c);
    iVar2 = *piVar1;
    *(int *)(iVar3 + 0x20) = iVar2;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x24) = iVar3;
    }
    *piVar1 = iVar3;
    if (piVar1[1] == 0) {
      piVar1[1] = iVar3;
    }
    if ((piVar1[2] == 0) && ((*(byte *)(iVar3 + 0x18) & 4) == 0)) {
      piVar1[2] = iVar3;
    }
  }
  if ((*(char *)(iVar4 + 0xe) != '\0') && (FUN_005610a0(iVar5,param_1), iVar5 != 0)) {
    iVar3 = *(int *)(iVar5 + 0x10);
    FUN_00561130(iVar5);
    if (*(int *)(*(int *)(iVar3 + 0xb4) + 0xc) == 0) {
      FUN_00541a10(iVar3);
    }
  }
  if (local_8 != 0) {
    iVar5 = FUN_0055eb70(iVar4,local_8,&param_1,0);
    iVar3 = param_1;
    if (iVar5 != 0) {
      if (local_8 <= *(uint *)(iVar4 + 0x1c)) {
        FUN_0054bf60(*(undefined4 *)(iVar4 + 0x38),local_8,*(undefined4 *)(iVar4 + 0xb0));
      }
      return iVar5;
    }
    *(ushort *)(param_1 + 0x18) = *(ushort *)(param_1 + 0x18) | 4;
    FUN_00561050(param_1);
    iVar4 = *(int *)(iVar3 + 0x10);
    FUN_00561130(iVar3);
    if (*(int *)(*(int *)(iVar4 + 0xb4) + 0xc) == 0) {
      FUN_00541a10(iVar4);
    }
  }
  return 0;
}


/* FUN_0055f550 @ 0055f550  kind=lib  attributed-by=lib-island  size=1124 */

int FUN_0055f550(code *param_1,undefined4 *param_2,char *param_3,int param_4,byte param_5,
                uint param_6,uint param_7)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  byte bVar6;
  uint uVar7;
  uint *_Dst;
  void *pvVar8;
  code *pcVar9;
  char *pcVar10;
  byte bVar11;
  size_t _Size;
  uint *puVar12;
  char *pcVar13;
  int iVar14;
  char local_1c;
  uint local_14;
  char *local_10;
  uint *local_c;
  int local_8;
  
  bVar11 = param_5;
  uVar7 = (uint)param_1;
  local_1c = '\0';
  bVar5 = false;
  local_c = (uint *)0x0;
  bVar6 = ~param_5;
  _Size = 0;
  pcVar13 = (char *)0x0;
  local_8 = 0;
  local_14 = 0x400;
  local_10 = (char *)0x0;
  if (*(int *)((int)param_1 + 4) < 0x29) {
    _param_5 = 0x28;
  }
  else {
    _param_5 = *(int *)((int)param_1 + 4) + 7U & 0xfffffff8;
  }
  *param_2 = 0;
  if ((bVar11 & 2) == 0) {
LAB_0055f5f0:
    if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
      iVar14 = *(int *)((int)param_1 + 8) + 1;
      _Dst = (uint *)FUN_0055da00(iVar14 * 2);
      pcVar13 = param_3;
      if (_Dst == (uint *)0x0) {
        return 7;
      }
      *(char *)_Dst = '\0';
      local_c = _Dst;
      local_8 = (**(code **)(uVar7 + 0x24))(uVar7,param_3,iVar14,_Dst);
      cVar2 = (char)*_Dst;
      puVar12 = _Dst;
      while (cVar2 != '\0') {
        puVar12 = (uint *)((int)puVar12 + 1);
        cVar2 = *(char *)puVar12;
      }
      _Size = (int)puVar12 - (int)_Dst & 0x3fffffff;
      cVar2 = *pcVar13;
      pcVar10 = pcVar13;
      while (cVar2 != '\0') {
        pcVar10 = pcVar10 + 1;
        cVar2 = *pcVar10;
      }
      local_10 = pcVar13 + ((int)pcVar10 - (int)pcVar13 & 0x3fffffffU) + 1;
      cVar2 = *local_10;
      pcVar13 = local_10;
      while (cVar2 != '\0') {
        cVar2 = *pcVar13;
        pcVar10 = pcVar13;
        while (cVar2 != '\0') {
          pcVar10 = pcVar10 + 1;
          cVar2 = *pcVar10;
        }
        pcVar13 = pcVar13 + ((int)pcVar10 - (int)pcVar13 & 0x3fffffffU) + 1;
        if (pcVar13 == (char *)0x0) {
          uVar7 = 0;
        }
        else {
          cVar2 = *pcVar13;
          pcVar10 = pcVar13;
          while (cVar2 != '\0') {
            pcVar10 = pcVar10 + 1;
            cVar2 = *pcVar10;
          }
          uVar7 = (int)pcVar10 - (int)pcVar13 & 0x3fffffff;
        }
        pcVar13 = pcVar13 + uVar7 + 1;
        cVar2 = *pcVar13;
      }
      pcVar13 = pcVar13 + (1 - (int)local_10);
      if ((local_8 != 0) ||
         ((*(int *)((int)param_1 + 8) < (int)(_Size + 8) &&
          (local_8 = FUN_0054f780(0xa306), local_8 != 0)))) goto LAB_0055f989;
    }
  }
  else {
    bVar5 = true;
    if (param_3 != (char *)0x0) {
      if (*param_3 == '\0') goto LAB_0055f5f0;
      local_c = (uint *)FUN_00552450(0,param_3);
      if (local_c == (uint *)0x0) {
        return 7;
      }
      _Size = FUN_00568070(local_c);
      param_3 = (char *)0x0;
    }
  }
  iVar3 = *(int *)((int)param_1 + 4);
  iVar14 = _param_5 * 2;
  _Dst = (uint *)FUN_0055da00(pcVar13 + _Size * 3 + iVar14 + (iVar3 + 7U & 0xfffffff8) + 0x101);
  if (_Dst == (uint *)0x0) {
    FUN_00524410(local_c);
    return 7;
  }
  memset(_Dst,0,(size_t)(pcVar13 + _Size * 3 + iVar14 + (iVar3 + 7U & 0xfffffff8) + 0x101));
  _Dst[0x2d] = (uint)(_Dst + 0x30);
  _Dst[0xf] = (uint)(_Dst + 0x3c);
  pcVar10 = (char *)((int)(_Dst + 0x3c) + (*(int *)((int)param_1 + 4) + 7U & 0xfffffff8));
  _Dst[0x11] = (uint)pcVar10;
  pcVar10 = pcVar10 + _param_5;
  _Dst[0x10] = (uint)pcVar10;
  pcVar10 = pcVar10 + _param_5;
  _Dst[0x24] = (uint)pcVar10;
  if (local_c != (uint *)0x0) {
    _Dst[0x25] = (uint)(pcVar10 + (int)(pcVar13 + _Size + 1));
    memcpy(pcVar10,local_c,_Size);
    if (pcVar13 != (char *)0x0) {
      memcpy((void *)(_Dst[0x24] + 1 + _Size),local_10,(size_t)pcVar13);
    }
    puVar12 = local_c;
    memcpy((void *)_Dst[0x25],local_c,_Size);
    uVar7 = _Dst[0x25];
    *(undefined8 *)(uVar7 + _Size) = 0x6c616e72756f6a2d;
    *(undefined2 *)(uVar7 + 8 + _Size) = 0;
    pvVar8 = (void *)(_Dst[0x25] + 9 + _Size);
    _Dst[0x2f] = (uint)pvVar8;
    memcpy(pvVar8,puVar12,_Size);
    uVar7 = _Dst[0x2f];
    *(undefined4 *)(uVar7 + _Size) = 0x6c61772d;
    *(undefined1 *)(uVar7 + 4 + _Size) = 0;
    FUN_00524410(puVar12);
  }
  uVar7 = (uint)param_1;
  *_Dst = (uint)param_1;
  _Dst[0x1e] = param_6;
  if ((param_3 == (char *)0x0) || (*param_3 == '\0')) {
    bVar11 = (byte)param_6 & 1;
    local_1c = '\x01';
    ((char *)((int)_Dst + 0xf))[0] = '\x01';
    ((char *)((int)_Dst + 0xf))[1] = '\x04';
    if (local_8 == 0) goto LAB_0055f884;
  }
  else {
    puVar1 = (undefined4 *)((int)param_1 + 0x18);
    param_1 = (code *)0x0;
    local_8 = (*(code *)*puVar1)(uVar7,_Dst[0x24],_Dst[0xf],param_6 & 0x87f7f,&param_1);
    bVar11 = (byte)((uint)param_1 & 1);
    if (local_8 == 0) {
      if (((uint)param_1 & 1) == 0) {
        FUN_00548bd0(_Dst);
        uVar7 = _Dst[0x1f];
        if ((0x400 < uVar7) && (local_14 = uVar7, 0x2000 < uVar7)) {
          local_14 = 0x2000;
        }
      }
LAB_0055f884:
      local_8 = FUN_0055fe80(_Dst,&local_14,0xffffffff);
      if (local_8 == 0) {
        pvVar8 = (void *)_Dst[0x2d];
        param_1 = (code *)(param_4 + 7U & 0xfffffff8);
        memset(pvVar8,0,0x30);
        uVar7 = (uint)param_1;
        *(uint *)((int)pvVar8 + 0x14) = local_14;
        *(code **)((int)pvVar8 + 0x18) = param_1;
        *(uint **)((int)pvVar8 + 0x24) = _Dst;
        *(undefined4 *)((int)pvVar8 + 0x10) = 100;
        param_1 = FUN_00541820;
        *(uint *)((int)pvVar8 + 0x1c) = (uint)!bVar5;
        pcVar9 = (code *)0x0;
        if (!bVar5) {
          pcVar9 = FUN_00541820;
        }
        *(code **)((int)pvVar8 + 0x20) = pcVar9;
        *(byte *)((int)_Dst + 6) = bVar6 & 1;
        _Dst[0x21] = 0x3fffffff;
        *(char *)(_Dst + 3) = local_1c;
        *(char *)(_Dst + 1) = local_1c;
        *(char *)((int)_Dst + 0x11) = local_1c;
        *(bool *)((int)_Dst + 0xe) = bVar5;
        *(byte *)((int)_Dst + 0xd) = bVar11;
        *(char *)((int)_Dst + 7) = local_1c;
        if (local_1c == '\0') {
          _Dst[2] = 0x2220201;
        }
        *(short *)(_Dst + 0x1d) = (short)uVar7;
        _Dst[0x22] = 0xffffffff;
        _Dst[0x23] = 0xffffffff;
        FUN_00548bd0(_Dst);
        if ((bVar6 & 1) == 0) {
          *(char *)((int)_Dst + 5) = '\x02';
        }
        else if (bVar5) {
          *(char *)((int)_Dst + 5) = '\x04';
        }
        _Dst[0x2b] = param_7;
        *param_2 = _Dst;
        return 0;
      }
    }
  }
  piVar4 = (int *)_Dst[0xf];
  if (*piVar4 != 0) {
    (**(code **)(*piVar4 + 4))(piVar4);
    *piVar4 = 0;
  }
LAB_0055f989:
  FUN_00524410(_Dst);
  return local_8;
}


/* FUN_0055f9c0 @ 0055f9c0  kind=lib  attributed-by=lib-island  size=303 */

undefined4 FUN_0055f9c0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *_Dst;
  void *_Dst_00;
  undefined4 *puVar5;
  
  iVar3 = param_1;
  iVar1 = *(int *)(param_1 + 0x60);
  if ((iVar1 < param_2) && (*(char *)(param_1 + 6) != '\0')) {
    iVar4 = FUN_00563800(*(undefined4 *)(param_1 + 0x5c),param_2 * 0x30);
    if (iVar4 == 0) {
      return 7;
    }
    _Dst_00 = (void *)(iVar1 * 0x30 + iVar4);
    memset(_Dst_00,0,(param_2 - iVar1) * 0x30);
    *(int *)(param_1 + 0x5c) = iVar4;
    if (iVar1 < param_2) {
      puVar5 = (undefined4 *)((int)_Dst_00 + 0x24);
      param_1 = iVar1;
      do {
        puVar5[-4] = *(undefined4 *)(iVar3 + 0x18);
        if (**(int **)(iVar3 + 0x40) == 0) {
LAB_0055fa63:
          iVar4 = *(int *)(iVar3 + 0x7c);
          puVar5[-8] = 0;
        }
        else {
          iVar1 = *(int *)(iVar3 + 0x4c);
          iVar4 = *(int *)(iVar3 + 0x48);
          if ((iVar1 < 0) || ((iVar1 < 1 && (iVar4 == 0)))) goto LAB_0055fa63;
          puVar5[-8] = iVar1;
        }
        puVar5[-9] = iVar4;
        puVar5[-3] = *(undefined4 *)(iVar3 + 0x34);
        uVar2 = *(undefined4 *)(iVar3 + 0x18);
        _Dst = (undefined4 *)FUN_0055da00(0x200);
        if (_Dst != (undefined4 *)0x0) {
          memset(_Dst,0,0x200);
          *_Dst = uVar2;
        }
        puVar5[-5] = _Dst;
        if (_Dst == (undefined4 *)0x0) {
          return 7;
        }
        iVar1 = *(int *)(iVar3 + 0xb8);
        if (iVar1 != 0) {
          puVar5[-2] = *(undefined4 *)(iVar1 + 0x44);
          puVar5[-1] = *(undefined4 *)(iVar1 + 0x4c);
          *puVar5 = *(undefined4 *)(iVar1 + 0x50);
          puVar5[1] = *(undefined4 *)(iVar1 + 0x68);
        }
        param_1 = param_1 + 1;
        puVar5 = puVar5 + 0xc;
        *(int *)(iVar3 + 0x60) = param_1;
      } while (param_1 < param_2);
    }
  }
  return 0;
}


/* FUN_0055faf0 @ 0055faf0  kind=lib  attributed-by=lib-island  size=115 */

int FUN_0055faf0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if ((*(char *)(param_1 + 0xc) == '\0') && (*(int *)(param_1 + 0xb8) == 0)) {
    if ((*(char *)(param_1 + 4) == '\0') &&
       ((*(int *)**(int **)(param_1 + 0x3c) < 2 || (((int *)**(int **)(param_1 + 0x3c))[0xd] == 0)))
       ) {
      return 0xe;
    }
    piVar1 = *(int **)(param_1 + 0x40);
    if (*piVar1 != 0) {
      (**(code **)(*piVar1 + 4))(piVar1);
      *piVar1 = 0;
    }
    iVar2 = FUN_00541390(param_1);
    if (iVar2 == 0) {
      *(undefined1 *)(param_1 + 5) = 5;
      *(undefined1 *)(param_1 + 0xf) = 0;
      return 0;
    }
  }
  else {
    *param_2 = 1;
  }
  return iVar2;
}


/* FUN_0055fb70 @ 0055fb70  kind=lib  attributed-by=lib-island  size=67 */

int FUN_0055fb70(int param_1,size_t param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  
  memset(param_3,0,param_2);
  piVar1 = *(int **)(param_1 + 0x3c);
  if (*piVar1 != 0) {
    iVar2 = (**(code **)(*piVar1 + 8))(piVar1,param_3,param_2,0,0);
    if (iVar2 == 0x20a) {
      iVar2 = 0;
    }
    return iVar2;
  }
  return 0;
}


/* FUN_0055fbc0 @ 0055fbc0  kind=lib  attributed-by=lib-island  size=170 */

uint FUN_0055fbc0(int param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  bVar1 = *(byte *)(param_1 + 0xf);
  if (bVar1 == 6) {
    return *(uint *)(param_1 + 0x28);
  }
  if (bVar1 < 2) {
    return 0;
  }
  if (*(int *)(param_1 + 0xb8) == 0) {
    if ((**(int **)(param_1 + 0x40) == 0) || (bVar1 == 2)) {
      uVar2 = FUN_00541e00(param_1,0);
      if ((*(char *)(param_1 + 0xe) == '\0') && (2 < bVar1)) {
        *(undefined4 *)(param_1 + 0x28) = 4;
        *(undefined1 *)(param_1 + 0xf) = 6;
        return uVar2;
      }
      goto LAB_0055fc0a;
    }
    uVar3 = FUN_005422c0(param_1,0);
  }
  else {
    uVar2 = FUN_0055fc70(param_1,2,0xffffffff);
    uVar3 = FUN_00541e00(param_1,*(undefined1 *)(param_1 + 0x12));
    if (uVar2 != 0) goto LAB_0055fc0a;
  }
  uVar2 = uVar3;
LAB_0055fc0a:
  if (((uVar2 & 0xff) == 0xd) || ((uVar2 & 0xff) == 10)) {
    *(uint *)(param_1 + 0x28) = uVar2;
    *(undefined1 *)(param_1 + 0xf) = 6;
  }
  return uVar2;
}


/* FUN_0055fc70 @ 0055fc70  kind=lib  attributed-by=lib-island  size=235 */

int FUN_0055fc70(int param_1,int param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  
  if ((*(int *)(param_1 + 0x28) != 0) || (*(int *)(param_1 + 0x60) <= param_3)) {
    return *(int *)(param_1 + 0x28);
  }
  param_3 = (uint)(param_2 != 1) + param_3;
  if (param_3 < *(int *)(param_1 + 0x60)) {
    iVar3 = param_3 * 0x30;
    iVar2 = param_3;
    do {
      FUN_0054c040(*(undefined4 *)(iVar3 + 0x10 + *(int *)(param_1 + 0x5c)));
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x30;
    } while (iVar2 < *(int *)(param_1 + 0x60));
  }
  *(int *)(param_1 + 0x60) = param_3;
  iVar3 = 0;
  if (param_2 == 1) {
    if (param_3 == 0) {
      puVar1 = (undefined *)**(undefined4 **)(param_1 + 0x44);
      if (puVar1 != (undefined *)0x0) {
        if (puVar1 == &DAT_00712500) {
          iVar3 = FUN_0051f6b0(*(undefined4 **)(param_1 + 0x44),0,0);
        }
        *(undefined4 *)(param_1 + 0x34) = 0;
      }
    }
  }
  else if ((*(int *)(param_1 + 0xb8) != 0) || (**(int **)(param_1 + 0x40) != 0)) {
    if (param_3 != 0) {
      iVar3 = FUN_00541500(param_1,*(int *)(param_1 + 0x5c) + -0x30 + param_3 * 0x30);
      return iVar3;
    }
    iVar3 = FUN_00541500(param_1,0);
    return iVar3;
  }
  return iVar3;
}


/* FUN_0055fd60 @ 0055fd60  kind=lib  attributed-by=lib-island  size=57 */

void FUN_0055fd60(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x98) = param_2;
  *(undefined4 *)(param_1 + 0x9c) = param_3;
  if (**(int **)(param_1 + 0x3c) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0055fd95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x3c) + 0x28))();
    return;
  }
  return;
}


/* FUN_0055fda0 @ 0055fda0  kind=lib  attributed-by=lib-island  size=223 */

undefined1 FUN_0055fda0(int *param_1,uint param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  
  bVar1 = *(byte *)((int)param_1 + 5);
  if (((*(char *)((int)param_1 + 0xe) != '\0') && (param_2 != 4)) && (param_2 != 2)) {
    param_2 = (uint)bVar1;
  }
  if (((param_2 != bVar1) && (*(char *)((int)param_1 + 5) = (char)param_2, (char)param_1[1] == '\0')
      ) && (((bVar1 & 5) == 1 && ((param_2 & 1) == 0)))) {
    FUN_0055e900(param_1[0x10]);
    if (1 < *(byte *)(param_1 + 4)) {
      (**(code **)(*param_1 + 0x1c))(*param_1,param_1[0x25],0);
      return *(undefined1 *)((int)param_1 + 5);
    }
    cVar2 = *(char *)((int)param_1 + 0xf);
    iVar3 = 0;
    if (cVar2 == '\0') {
      iVar3 = FUN_00560030(param_1);
    }
    if (*(char *)((int)param_1 + 0xf) == '\x01') {
      iVar3 = FUN_00541340(param_1,2);
    }
    if ((iVar3 == 0) && ((**(code **)(*param_1 + 0x1c))(*param_1,param_1[0x25],0), cVar2 == '\x01'))
    {
      FUN_00541a70(param_1,1);
      return *(undefined1 *)((int)param_1 + 5);
    }
    if (cVar2 == '\0') {
      FUN_00542a20(param_1);
    }
  }
  return *(undefined1 *)((int)param_1 + 5);
}


/* FUN_0055fe80 @ 0055fe80  kind=lib  attributed-by=lib-island  size=291 */

int FUN_0055fe80(int param_1,uint *param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 local_c;
  
  uVar1 = *param_2;
  iVar5 = 0;
  if ((((*(char *)(param_1 + 0xe) == '\0') || (*(int *)(param_1 + 0x18) == 0)) &&
      (*(int *)(*(int *)(param_1 + 0xb4) + 0xc) == 0)) &&
     ((uVar1 != 0 && (uVar1 != *(uint *)(param_1 + 0x80))))) {
    local_c = 0;
    if ((*(char *)(param_1 + 0xf) != '\0') && (piVar2 = *(int **)(param_1 + 0x3c), *piVar2 != 0)) {
      iVar5 = (**(code **)(*piVar2 + 0x18))(piVar2,&local_c);
      if (iVar5 != 0) goto LAB_0055ff7c;
    }
    iVar3 = FUN_00543f40(uVar1);
    if (iVar3 == 0) {
      iVar5 = 7;
    }
    else {
      FUN_005428f0(param_1);
      uVar4 = __alldiv(uVar1 + (uint)local_c + -1,
                       (local_c._4_4_ + (uint)CARRY4(uVar1,(uint)local_c)) -
                       (uint)(uVar1 + (uint)local_c == 0),uVar1,0);
      *(undefined4 *)(param_1 + 0x18) = uVar4;
      *(uint *)(param_1 + 0x80) = uVar1;
      FUN_00544190(*(undefined4 *)(param_1 + 0xb0));
      *(int *)(param_1 + 0xb0) = iVar3;
      iVar3 = *(int *)(param_1 + 0xb4);
      if (*(int *)(iVar3 + 0x28) != 0) {
        (*DAT_00766670)(*(int *)(iVar3 + 0x28));
        *(undefined4 *)(iVar3 + 0x28) = 0;
        *(undefined4 *)(iVar3 + 0x2c) = 0;
      }
      *(uint *)(iVar3 + 0x14) = uVar1;
    }
  }
LAB_0055ff7c:
  *param_2 = *(uint *)(param_1 + 0x80);
  if (iVar5 == 0) {
    if (param_3 < 0) {
      param_3 = (int)*(short *)(param_1 + 0x76);
    }
    *(short *)(param_1 + 0x76) = (short)param_3;
  }
  return iVar5;
}


/* FUN_0055ffb0 @ 0055ffb0  kind=lib  attributed-by=lib-island  size=123 */

void FUN_0055ffb0(int param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  char cVar2;
  
  if ((param_2 == 1) || (*(char *)(param_1 + 0xc) != '\0')) {
    cVar1 = '\x01';
  }
  else {
    cVar1 = '\0';
  }
  *(char *)(param_1 + 7) = cVar1;
  if ((param_2 == 3) && (*(char *)(param_1 + 0xc) == '\0')) {
    cVar2 = '\x01';
  }
  else {
    cVar2 = '\0';
  }
  *(char *)(param_1 + 8) = cVar2;
  if (cVar1 == '\0') {
    if (param_3 == 0) {
      *(undefined1 *)(param_1 + 0xb) = 2;
      if (param_4 == 0) {
        *(undefined1 *)(param_1 + 9) = 2;
      }
      else {
        *(undefined1 *)(param_1 + 9) = 3;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0xb) = 3;
      *(undefined1 *)(param_1 + 9) = 3;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0xb) = 0;
    *(undefined1 *)(param_1 + 9) = 0;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 0xb);
  if (cVar2 != '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 0xb) | 0x20;
  }
  return;
}


/* FUN_00560030 @ 00560030  kind=lib  attributed-by=lib-island  size=589 */

void FUN_00560030(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  bool bVar5;
  int local_20;
  uint local_1c;
  int local_18 [5];
  
  local_18[4] = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  uVar4 = 0;
  if ((*(char *)((int)param_1 + 0xe) != '\0') && (param_1[10] != 0)) goto LAB_0056026d;
  if ((param_1[0x2e] == 0) && (*(char *)((int)param_1 + 0xf) == '\0')) {
    local_1c = 1;
    iVar1 = FUN_00542b40(param_1,1);
    if (iVar1 != 0) goto LAB_0056024c;
    if (*(byte *)(param_1 + 4) < 2) {
      iVar1 = FUN_0053b5a0(param_1,&local_1c);
      if (iVar1 != 0) goto LAB_0056024c;
      if (local_1c != 0) goto LAB_005600b0;
LAB_00560178:
      if (((char)param_1[3] == '\0') &&
         ((param_1[0x16] != 0 || (iVar1 = FUN_00561110(param_1[0x2d]), 0 < iVar1)))) {
        local_1c = 0;
        iVar1 = FUN_00541470(param_1,&local_1c);
        if (iVar1 != 0) goto LAB_0056024c;
        if (local_1c == 0) {
          local_18[0] = 0;
          local_18[1] = 0;
          local_18[2] = 0;
          local_18[3] = 0;
        }
        else {
          iVar1 = (**(code **)(*(int *)param_1[0xf] + 8))((int *)param_1[0xf],local_18,0x10,0x18,0);
          if (iVar1 != 0) goto LAB_0056024c;
        }
        piVar2 = param_1 + 0x19;
        piVar3 = local_18;
        uVar4 = 0xc;
        do {
          if (*piVar2 != *piVar3) {
            FUN_005428f0(param_1);
            break;
          }
          piVar2 = piVar2 + 1;
          piVar3 = piVar3 + 1;
          bVar5 = 3 < uVar4;
          uVar4 = uVar4 - 4;
        } while (bVar5);
      }
      uVar4 = FUN_005413e0(param_1);
      goto LAB_0056021b;
    }
LAB_005600b0:
    iVar1 = FUN_00541340(param_1,4);
    if (iVar1 != 0) goto LAB_0056024c;
    uVar4 = 0;
    if (*(int *)param_1[0x10] == 0) {
      iVar1 = *param_1;
      uVar4 = (**(code **)(iVar1 + 0x20))(iVar1,param_1[0x25],0,&local_20);
      if ((((uVar4 == 0) && (local_20 != 0)) &&
          (local_1c = uVar4,
          uVar4 = (**(code **)(iVar1 + 0x18))(iVar1,param_1[0x25],param_1[0x10],0x802,&local_1c),
          uVar4 == 0)) && ((local_1c & 1) != 0)) {
        uVar4 = FUN_0054f780(0xa4b6);
        FUN_0055e900(param_1[0x10]);
      }
    }
    if (*(int *)param_1[0x10] == 0) {
      if ((char)param_1[1] == '\0') {
        FUN_00541a70(param_1,1);
      }
LAB_00560168:
      if (uVar4 == 0) goto LAB_00560178;
    }
    else {
      uVar4 = FUN_00541900(param_1);
      if (uVar4 == 0) {
        uVar4 = FUN_005422c0(param_1,1);
        *(undefined1 *)((int)param_1 + 0xf) = 0;
        goto LAB_00560168;
      }
    }
    FUN_00541fd0(param_1,uVar4);
  }
  else {
LAB_0056021b:
    if (param_1[0x2e] != 0) {
      uVar4 = FUN_00541270(param_1);
    }
    if (*(char *)((int)param_1 + 0xf) == '\0') {
      if (uVar4 != 0) goto LAB_0056024c;
      uVar4 = FUN_00541470(param_1,param_1 + 6);
    }
  }
  if (uVar4 == 0) {
    *(undefined1 *)((int)param_1 + 0xf) = 1;
LAB_0056026d:
    __security_check_cookie(local_18[4] ^ (uint)&stack0xfffffffc);
    return;
  }
LAB_0056024c:
  FUN_00542a20(param_1);
  __security_check_cookie(local_18[4] ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00560280 @ 00560280  kind=lib  attributed-by=lib-island  size=70 */

int FUN_00560280(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 7) == '\0') {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x3c) + 0x14))
                      (*(int **)(param_1 + 0x3c),*(undefined1 *)(param_1 + 0xb));
    return iVar2;
  }
  piVar1 = *(int **)(param_1 + 0x3c);
  if (*piVar1 != 0) {
    iVar2 = (**(code **)(*piVar1 + 0x28))(piVar1,8,0);
    if (iVar2 == 0xc) {
      iVar2 = 0;
    }
    return iVar2;
  }
  return 0;
}


/* FUN_005602d0 @ 005602d0  kind=lib  attributed-by=lib-island  size=47 */

void FUN_005602d0(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x10);
    FUN_00561130(param_1);
    if (*(int *)(*(int *)(iVar1 + 0xb4) + 0xc) == 0) {
      FUN_00541a10(iVar1);
    }
  }
  return;
}


