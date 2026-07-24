// sqlite_00 (_library) -- cube. 200 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "sqlite_00.h"

/* FUN_004497b0 @ 004497b0  kind=lib  attributed-by=lib-string  size=89 */

undefined4 FUN_004497b0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int in_ECX;
  
  puVar1 = (undefined4 *)(in_ECX + 4);
  if (*(int *)(in_ECX + 4) != 0) {
    FUN_00520620(*(int *)(in_ECX + 4));
    *puVar1 = 0;
  }
  if (0xf < (uint)param_1[5]) {
    param_1 = (undefined4 *)*param_1;
  }
  iVar2 = FUN_00525590(param_1,puVar1);
  if (iVar2 != 0) {
    return 0;
  }
  FUN_00520760(*puVar1,"CREATE TABLE blobs(key TEXT PRIMARY KEY, value BLOB);",0,0,0);
  return 1;
}


/* FUN_0051c890 @ 0051c890  kind=lib  attributed-by=lib-island  size=101 */

undefined8 FUN_0051c890(int param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 local_c;
  
  uVar1 = *(ushort *)(param_1 + 0x1c);
  if ((uVar1 & 4) != 0) {
    return *(undefined8 *)(param_1 + 0x10);
  }
  if ((uVar1 & 8) != 0) {
    uVar2 = FUN_00534710(*(undefined8 *)(param_1 + 8));
    return uVar2;
  }
  local_c = 0;
  if ((uVar1 & 0x12) != 0) {
    FUN_0054a9a0(*(undefined4 *)(param_1 + 4),&local_c,*(undefined4 *)(param_1 + 0x18),
                 *(undefined1 *)(param_1 + 0x1f));
  }
  return local_c;
}


/* FUN_0051d170 @ 0051d170  kind=lib  attributed-by=lib-string  size=81 */

void FUN_0051d170(int param_1,uint param_2)

{
  char *pcVar1;
  
  *(uint *)(param_1 + 0x38) = param_2;
  if ((*(byte *)(param_1 + 0x24) & 1) != 0) {
    if (param_2 == 0x204) {
      pcVar1 = "abort due to ROLLBACK";
    }
    else {
      pcVar1 = "unknown error";
      if (((param_2 & 0xff) < 0x1b) &&
         ((&PTR_s_not_an_error_007123d0)[param_2 & 0xff] != (char *)0x0)) {
        pcVar1 = (&PTR_s_not_an_error_007123d0)[param_2 & 0xff];
      }
    }
    FUN_00575040(param_1 + 8,pcVar1,0xffffffff,1,0);
  }
  return;
}


/* FUN_0051d270 @ 0051d270  kind=lib  attributed-by=lib-island  size=92 */

void FUN_0051d270(int param_1,undefined4 param_2,undefined4 param_3)

{
  if ((*(ushort *)(param_1 + 0x24) & 0x2460) != 0) {
    FUN_00574d80((undefined4 *)(param_1 + 8));
  }
  FUN_005521a0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x2c));
  *(undefined4 *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0x1c) = param_3;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined2 *)(param_1 + 0x24) = 4;
  *(undefined1 *)(param_1 + 0x26) = 1;
  return;
}


/* FUN_0051d2d0 @ 0051d2d0  kind=lib  attributed-by=lib-island  size=77 */

void FUN_0051d2d0(int param_1)

{
  int *piVar1;
  
  if ((*(byte *)(param_1 + 0x24) & 0x40) != 0) {
    piVar1 = *(int **)(param_1 + 0x18);
    piVar1[1] = *(int *)(*piVar1 + 0xa4);
    *(int **)(*piVar1 + 0xa4) = piVar1;
  }
  if ((*(byte *)(param_1 + 0x24) & 0x20) != 0) {
    FUN_005644e0(*(undefined4 *)(param_1 + 0x18));
  }
  *(ushort *)(param_1 + 0x24) = *(ushort *)(param_1 + 0x24) & 0xbe01 | 1;
  *(undefined1 *)(param_1 + 0x26) = 5;
  return;
}


/* FUN_0051e390 @ 0051e390  kind=lib  attributed-by=lib-string  size=1468 */

void FUN_0051e390(int param_1,undefined4 param_2,undefined4 *param_3)

{
  byte *pbVar1;
  byte bVar2;
  int *piVar3;
  undefined8 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  void *_Src;
  undefined1 *puVar7;
  byte *pbVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  char *pcVar14;
  byte *pbVar15;
  int *piVar16;
  uint local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  int *local_14;
  byte *local_10;
  uint local_c;
  void *local_8;
  
  piVar3 = *(int **)(param_1 + 8);
  local_c = 0;
  local_18 = 0;
  local_14 = (int *)0x0;
  local_8 = (void *)0x0;
  puVar7 = (undefined1 *)FUN_0056bce0(*param_3,1);
  pbVar8 = (byte *)FUN_0056bce0(param_3[1],1);
  iVar13 = piVar3[5];
  local_1c = &DAT_006fc918;
  if (puVar7 != (undefined1 *)0x0) {
    local_1c = puVar7;
  }
  local_10 = &DAT_006fc918;
  if (pbVar8 != (byte *)0x0) {
    local_10 = pbVar8;
  }
  if (iVar13 < piVar3[0x1b] + 2) {
    if (*(char *)((int)piVar3 + 0x36) == '\0') {
      local_8 = (void *)FUN_0055d980(piVar3,"cannot ATTACH database within transaction");
      goto LAB_0051e825;
    }
    iVar12 = 0;
    if (0 < iVar13) {
      puVar9 = (undefined4 *)piVar3[4];
      do {
        pbVar8 = (byte *)*puVar9;
        bVar2 = *pbVar8;
        pbVar15 = local_10;
        while ((bVar2 != 0 && ((&DAT_007120d8)[bVar2] == (&DAT_007120d8)[*pbVar15]))) {
          pbVar1 = pbVar8 + 1;
          pbVar8 = pbVar8 + 1;
          pbVar15 = pbVar15 + 1;
          bVar2 = *pbVar1;
        }
        if ((&DAT_007120d8)[*pbVar8] == (&DAT_007120d8)[*pbVar15]) {
          local_8 = (void *)FUN_0055d980(piVar3,"database %s is already in use",local_10);
          goto LAB_0051e825;
        }
        iVar13 = piVar3[5];
        iVar12 = iVar12 + 1;
        puVar9 = puVar9 + 4;
      } while (iVar12 < iVar13);
    }
    if ((int *)piVar3[4] == piVar3 + 0x6e) {
      puVar10 = (undefined8 *)FUN_00552230(piVar3,0x30);
      if (puVar10 == (undefined8 *)0x0) {
        return;
      }
      puVar4 = (undefined8 *)piVar3[4];
      *puVar10 = *puVar4;
      puVar10[1] = puVar4[1];
      puVar10[2] = puVar4[2];
      puVar10[3] = puVar4[3];
    }
    else {
      puVar10 = (undefined8 *)FUN_00552390(piVar3,(int *)piVar3[4],(iVar13 + 1) * 0x10);
      if (puVar10 == (undefined8 *)0x0) {
        return;
      }
    }
    piVar3[4] = (int)puVar10;
    piVar16 = (int *)(puVar10 + piVar3[5] * 2);
    piVar16[0] = 0;
    piVar16[1] = 0;
    piVar16[2] = 0;
    piVar16[3] = 0;
    local_c = piVar3[10];
    iVar13 = FUN_00560540(*(undefined4 *)(*piVar3 + 0x10),local_1c,&local_c,&local_20,&local_18,
                          &local_14);
    piVar5 = local_14;
    uVar6 = local_18;
    if (iVar13 != 0) {
      if (iVar13 == 7) {
        *(undefined1 *)(piVar3 + 0xe) = 1;
      }
      *(undefined4 *)(param_1 + 0x38) = 1;
      if (local_14 == (int *)0x0) {
        if ((*(byte *)(param_1 + 0x24) & 0x40) != 0) {
          piVar3 = *(int **)(param_1 + 0x18);
          piVar3[1] = *(int *)(*piVar3 + 0xa4);
          *(int **)(*piVar3 + 0xa4) = piVar3;
        }
        if ((*(byte *)(param_1 + 0x24) & 0x20) != 0) {
          FUN_005644e0(*(undefined4 *)(param_1 + 0x18));
        }
        *(ushort *)(param_1 + 0x24) = *(ushort *)(param_1 + 0x24) & 0xbe01 | 1;
        *(undefined1 *)(param_1 + 0x26) = 5;
        FUN_00524410(0);
        return;
      }
      iVar13 = *(int *)(param_1 + 8);
      if (iVar13 == 0) {
        iVar13 = 1000000000;
      }
      else {
        iVar13 = *(int *)(iVar13 + 0x50);
      }
      iVar12 = 0;
      if (-1 < iVar13) {
        do {
          if (*(char *)(iVar12 + (int)local_14) == '\0') break;
          iVar12 = iVar12 + 1;
        } while (iVar12 <= iVar13);
      }
      if ((iVar12 <= iVar13) &&
         (iVar13 = FUN_005748c0((int *)(param_1 + 8),iVar12 + 1,0), iVar13 == 0)) {
        memcpy(*(void **)(param_1 + 0xc),piVar5,iVar12 + 1);
        *(int *)(param_1 + 0x20) = iVar12;
        *(undefined4 *)(param_1 + 0x24) = 0x1030202;
      }
      FUN_00524410(piVar5);
      return;
    }
    local_14 = piVar16 + 1;
    uVar11 = FUN_0054e4a0(local_20,local_18,piVar3,local_14,0,local_c | 0x100);
    local_c = uVar11;
    FUN_00524410(uVar6);
    piVar3[5] = piVar3[5] + 1;
    if (uVar11 == 0x13) {
      uVar11 = 1;
      local_c = 1;
      local_8 = (void *)FUN_0055d980(piVar3,"database is already attached");
    }
    else if (uVar11 == 0) {
      iVar13 = FUN_00565140(piVar3,*local_14);
      piVar16[3] = iVar13;
      if (iVar13 == 0) {
        uVar11 = 7;
        local_c = uVar11;
      }
      else if ((*(char *)(iVar13 + 0x4c) != '\0') &&
              (*(char *)(iVar13 + 0x4d) != *(char *)(*(int *)(piVar3[4] + 0xc) + 0x4d))) {
        local_8 = (void *)FUN_0055d980(piVar3,
                                       "attached databases must use the same text encoding as main database"
                                      );
        uVar11 = 1;
        local_c = uVar11;
      }
      FUN_0055f310(**(undefined4 **)(piVar16[1] + 4),*(undefined1 *)((int)piVar3 + 0x39));
      iVar13 = *(int *)(piVar3[4] + 4);
      if (iVar13 == 0) {
        FUN_0054f0e0(piVar16[1],0);
      }
      else {
        FUN_0054d260(iVar13);
        local_20 = *(ushort *)(*(int *)(iVar13 + 4) + 0x16) >> 2 & 1;
        if (*(char *)(iVar13 + 9) != '\0') {
          piVar5 = (int *)(iVar13 + 0xc);
          *piVar5 = *piVar5 + -1;
          if (*piVar5 == 0) {
            iVar12 = *(int *)(*(int *)(iVar13 + 4) + 0x38);
            if (iVar12 != 0) {
              (*DAT_00766638)(iVar12);
            }
            *(undefined1 *)(iVar13 + 10) = 0;
          }
        }
        FUN_0054f0e0(piVar16[1],local_20);
      }
    }
    *(undefined1 *)((int)piVar16 + 9) = 3;
    iVar13 = FUN_00552450(piVar3,local_10);
    *piVar16 = iVar13;
    if (uVar11 == 0) {
      if (iVar13 == 0) {
        uVar11 = 7;
        local_c = 7;
      }
      else {
        FUN_0054d340(piVar3);
        uVar11 = FUN_0055b460(piVar3,&local_8);
        local_c = uVar11;
        FUN_0054de20(piVar3);
        if (uVar11 == 0) {
          return;
        }
      }
    }
    iVar12 = piVar3[5] + -1;
    iVar13 = *(int *)(piVar3[4] + 4 + iVar12 * 0x10);
    if (iVar13 != 0) {
      FUN_0054c710(iVar13);
      *(undefined4 *)(piVar3[4] + 4 + iVar12 * 0x10) = 0;
      *(undefined4 *)(piVar3[4] + 0xc + iVar12 * 0x10) = 0;
    }
    FUN_00564000(piVar3);
    piVar3[5] = iVar12;
    if ((uVar11 == 7) || (uVar11 == 0xc0a)) {
      *(undefined1 *)(piVar3 + 0xe) = 1;
      FUN_005521a0(piVar3,local_8);
      local_8 = (void *)FUN_0055d980(piVar3,"out of memory");
      goto LAB_0051e825;
    }
    if (local_8 == (void *)0x0) {
      local_8 = (void *)FUN_0055d980(piVar3,"unable to open database: %s",local_1c);
      goto LAB_0051e825;
    }
  }
  else {
    local_8 = (void *)FUN_0055d980(piVar3,"too many attached databases - max %d",piVar3[0x1b]);
LAB_0051e825:
    if (local_8 == (void *)0x0) goto LAB_0051e8f8;
  }
  _Src = local_8;
  *(undefined4 *)(param_1 + 0x38) = 1;
  if (local_8 == (void *)0x0) {
    if ((*(byte *)(param_1 + 0x24) & 0x40) != 0) {
      piVar5 = *(int **)(param_1 + 0x18);
      piVar5[1] = *(int *)(*piVar5 + 0xa4);
      *(int **)(*piVar5 + 0xa4) = piVar5;
    }
    if ((*(byte *)(param_1 + 0x24) & 0x20) != 0) {
      FUN_005644e0(*(undefined4 *)(param_1 + 0x18));
    }
    *(ushort *)(param_1 + 0x24) = *(ushort *)(param_1 + 0x24) & 0xbe01 | 1;
    *(undefined1 *)(param_1 + 0x26) = 5;
  }
  else {
    iVar13 = *(int *)(param_1 + 8);
    if (iVar13 == 0) {
      iVar13 = 1000000000;
    }
    else {
      iVar13 = *(int *)(iVar13 + 0x50);
    }
    iVar12 = 0;
    param_3 = (undefined4 *)0x0;
    if (-1 < iVar13) {
      do {
        param_3 = (undefined4 *)iVar12;
        if (*(char *)(iVar12 + (int)local_8) == '\0') break;
        iVar12 = iVar12 + 1;
        param_3 = (undefined4 *)iVar12;
      } while (iVar12 <= iVar13);
    }
    local_20 = (int)param_3 + 1;
    if (((int)param_3 <= iVar13) &&
       (iVar13 = FUN_005748c0((int *)(param_1 + 8),local_20,0), iVar13 == 0)) {
      memcpy(*(void **)(param_1 + 0xc),_Src,local_20);
      *(undefined4 **)(param_1 + 0x20) = param_3;
      *(undefined4 *)(param_1 + 0x24) = 0x1030202;
    }
  }
  FUN_005521a0(piVar3,local_8);
LAB_0051e8f8:
  if ((local_c != 0) && (*(uint *)(param_1 + 0x38) = local_c, (*(byte *)(param_1 + 0x24) & 1) != 0))
  {
    if (local_c == 0x204) {
      pcVar14 = "abort due to ROLLBACK";
    }
    else {
      pcVar14 = "unknown error";
      if (((local_c & 0xff) < 0x1b) &&
         ((&PTR_s_not_an_error_007123d0)[local_c & 0xff] != (char *)0x0)) {
        pcVar14 = (&PTR_s_not_an_error_007123d0)[local_c & 0xff];
      }
    }
    FUN_00575040(param_1 + 8,pcVar14,0xffffffff,1,0);
  }
  return;
}


/* FUN_005203c0 @ 005203c0  kind=lib  attributed-by=lib-string  size=266 */

undefined4 FUN_005203c0(byte *param_1)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  char *pcVar9;
  undefined **local_8;
  
  pcVar9 = "SQLITE_";
  iVar5 = 7;
  pbVar7 = param_1;
  do {
    iVar4 = iVar5;
    iVar5 = iVar4 + -1;
    if ((*pbVar7 == 0) || ((&DAT_007120d8)[*pbVar7] != (&DAT_007120d8)[(byte)*pcVar9]))
    goto LAB_005203f8;
    pbVar7 = pbVar7 + 1;
    pcVar9 = pcVar9 + 1;
  } while (0 < iVar5);
  iVar5 = iVar4 + -2;
LAB_005203f8:
  if ((iVar5 < 0) || ((&DAT_007120d8)[*pbVar7] == (&DAT_007120d8)[(byte)*pcVar9])) {
    param_1 = param_1 + 7;
  }
  uVar6 = 0;
  if (param_1 != (byte *)0x0) {
    bVar1 = *param_1;
    pbVar7 = param_1;
    while (bVar1 != 0) {
      pbVar7 = pbVar7 + 1;
      bVar1 = *pbVar7;
    }
    uVar6 = (int)pbVar7 - (int)param_1 & 0x3fffffff;
  }
  local_8 = &PTR_s_CURDIR_007120cc;
  do {
    bVar2 = uVar6 != 0;
    pbVar7 = *local_8;
    uVar3 = uVar6;
    pbVar8 = param_1;
    while (bVar2) {
      if ((*pbVar8 == 0) || ((&DAT_007120d8)[*pbVar8] != (&DAT_007120d8)[*pbVar7])) break;
      pbVar8 = pbVar8 + 1;
      pbVar7 = pbVar7 + 1;
      bVar2 = 0 < (int)(uVar3 - 1);
      uVar3 = uVar3 - 1;
    }
    if ((((int)(uVar3 - 1) < 0) || ((&DAT_007120d8)[*pbVar8] == (&DAT_007120d8)[*pbVar7])) &&
       ((bVar1 = (*local_8)[uVar6], bVar1 == 0 || (bVar1 == 0x3d)))) {
      return 1;
    }
    local_8 = local_8 + 1;
    if (0x7120d7 < (int)local_8) {
      return 0;
    }
  } while( true );
}


/* FUN_005204d0 @ 005204d0  kind=lib  attributed-by=lib-island  size=24 */

undefined * FUN_005204d0(uint param_1)

{
  if (param_1 < 3) {
    return (&PTR_s_CURDIR_007120cc)[param_1];
  }
  return (undefined *)0x0;
}


/* FUN_00520760 @ 00520760  kind=lib  attributed-by=lib-island  size=1284 */

uint FUN_00520760(int param_1,byte *param_2,code *param_3,undefined4 param_4,int *param_5)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  void *pvVar6;
  undefined4 uVar7;
  undefined *puVar8;
  int iVar9;
  uint uVar10;
  char *pcVar11;
  char *pcVar12;
  byte *pbVar13;
  uint uVar14;
  size_t sVar15;
  byte *local_30;
  int local_2c;
  uint local_28;
  int local_24;
  int local_20;
  void *local_1c;
  byte *local_18;
  int local_14;
  void *local_10;
  uint local_c;
  int *local_8;
  
  uVar14 = 0;
  local_c = 0;
  local_8 = (int *)0x0;
  local_10 = (void *)0x0;
  local_20 = 0;
  iVar5 = FUN_00564f10(param_1);
  if (iVar5 == 0) {
    FUN_00525a30(0x15,"misuse at line %d of [%.10s]",0x161bf,
                 "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
    return 0x15;
  }
  pbVar13 = &DAT_006fc918;
  if (param_2 != (byte *)0x0) {
    pbVar13 = param_2;
  }
  local_18 = pbVar13;
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(param_1 + 0xc));
  }
  FUN_00553890(param_1,0,0);
LAB_005207e0:
  while( true ) {
    pvVar6 = (void *)0x0;
    if (uVar14 == 0) goto LAB_005207fd;
    do {
      if ((uVar14 != 0x11) || (local_20 = local_20 + 1, 1 < local_20)) goto LAB_00520acd;
LAB_005207fd:
      if (*pbVar13 == 0) goto LAB_00520acd;
      local_1c = (void *)0x0;
      local_8 = (int *)0x0;
      uVar14 = FUN_0055d830(param_1,pbVar13,0xffffffff,0,0,&local_8,&local_30);
      local_c = uVar14;
    } while (uVar14 != 0);
    if (local_8 != (int *)0x0) break;
    local_18 = local_30;
    pbVar13 = local_30;
  }
  iVar5 = 0;
  uVar14 = (uint)*(ushort *)(local_8 + 0xb);
  local_2c = 0;
  local_c = 0;
  local_28 = uVar14;
LAB_00520853:
  local_c = FUN_00527300(local_8);
  if (param_3 != (code *)0x0) {
    if (local_c == 100) {
      if (iVar5 == 0) goto LAB_00520897;
LAB_005208f5:
      local_1c = (void *)((int)pvVar6 + uVar14 * 4);
      pvVar6 = local_10;
      if (0 < (int)uVar14) {
        local_14 = 0;
        iVar5 = 0;
        do {
          piVar4 = local_8;
          iVar9 = local_14;
          if (local_8 == (int *)0x0) {
LAB_00520968:
            puVar8 = &DAT_00712628;
          }
          else {
            if (((local_8[5] == 0) || ((int)(uint)*(ushort *)(local_8 + 0xb) <= iVar5)) ||
               (iVar5 < 0)) {
              if (*local_8 != 0) {
                iVar3 = *(int *)(*local_8 + 0xc);
                if (iVar3 != 0) {
                  (*DAT_00766630)(iVar3);
                }
                FUN_00553890(*piVar4,0x19,0);
              }
              goto LAB_00520968;
            }
            if (*(int *)(*local_8 + 0xc) != 0) {
              (*DAT_00766630)(*(int *)(*local_8 + 0xc));
            }
            puVar8 = (undefined *)(piVar4[5] + iVar9);
          }
          local_24 = FUN_0056bce0(puVar8,1);
          if (piVar4 != (int *)0x0) {
            iVar9 = *piVar4;
            uVar14 = piVar4[0x16];
            if (iVar9 == 0) {
              uVar10 = 0xff;
            }
            else {
              if ((*(char *)(iVar9 + 0x38) != '\0') || (uVar14 == 0xc0a)) {
                FUN_00553890(iVar9,7,0);
                *(undefined1 *)(iVar9 + 0x38) = 0;
                uVar14 = 7;
              }
              uVar10 = *(uint *)(iVar9 + 0x30);
            }
            piVar4[0x16] = uVar10 & uVar14;
            iVar9 = local_14;
            if (*(int *)(*piVar4 + 0xc) != 0) {
              (*DAT_00766638)(*(int *)(*piVar4 + 0xc));
              iVar9 = local_14;
            }
          }
          piVar4 = local_8;
          *(int *)((int)local_1c + iVar5 * 4) = local_24;
          if (local_24 == 0) {
            iVar9 = FUN_005326d0(local_8,iVar5);
            cVar1 = *(char *)(iVar9 + 0x1e);
            FUN_00532670(piVar4);
            iVar9 = local_14;
            if (cVar1 != '\x05') {
              *(undefined1 *)(param_1 + 0x38) = 1;
              pvVar6 = local_10;
              goto LAB_00520acd;
            }
          }
          iVar5 = iVar5 + 1;
          local_14 = iVar9 + 0x28;
          pvVar6 = local_10;
          uVar14 = local_28;
        } while (iVar5 < (int)local_28);
      }
    }
    else {
      if (local_c != 0x65) goto LAB_00520a2f;
      if ((iVar5 != 0) || ((*(byte *)(param_1 + 0x18) & 0x20) == 0)) goto LAB_00520a38;
LAB_00520897:
      sVar15 = uVar14 * 8 + 1;
      pvVar6 = (void *)FUN_00552230(param_1,sVar15);
      local_10 = pvVar6;
      if ((pvVar6 == (void *)0x0) || (memset(pvVar6,0,sVar15), pvVar6 == (void *)0x0))
      goto LAB_00520acd;
      iVar5 = 0;
      if (0 < (int)uVar14) {
        do {
          uVar7 = FUN_00527080(local_8,iVar5);
          *(undefined4 *)((int)pvVar6 + iVar5 * 4) = uVar7;
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)uVar14);
      }
      local_2c = 1;
      if (local_c == 100) goto LAB_005208f5;
    }
    iVar9 = (*param_3)(param_4,uVar14,local_1c,pvVar6);
    iVar5 = local_2c;
    if (iVar9 != 0) goto LAB_00520aa8;
  }
LAB_00520a2f:
  if (local_c != 100) goto LAB_00520a38;
  goto LAB_00520853;
LAB_00520a38:
  uVar14 = FUN_005734d0(local_8);
  local_8 = (int *)0x0;
  if (uVar14 != 0x11) {
    local_20 = 0;
    bVar2 = (&DAT_007121d8)[*local_30];
    local_18 = local_30;
    while ((bVar2 & 1) != 0) {
      pbVar13 = local_18 + 1;
      local_18 = local_18 + 1;
      bVar2 = (&DAT_007121d8)[*pbVar13];
    }
  }
  pbVar13 = local_18;
  local_c = uVar14;
  FUN_005521a0(param_1,pvVar6);
  local_10 = (void *)0x0;
  goto LAB_005207e0;
LAB_00520aa8:
  local_c = 4;
  FUN_005734d0(local_8);
  local_8 = (int *)0x0;
  FUN_00553890(param_1,4,0);
LAB_00520acd:
  piVar4 = local_8;
  if (local_8 != (int *)0x0) {
    if ((local_8[0xc] == -0x420df25d) || (local_8[0xc] == 0x519c2973)) {
      FUN_00575ca0(local_8);
    }
    iVar5 = *piVar4;
    FUN_0056c560(iVar5,piVar4);
    if (piVar4[0xe] == 0) {
      *(int *)(iVar5 + 4) = piVar4[0xf];
    }
    else {
      *(int *)(piVar4[0xe] + 0x3c) = piVar4[0xf];
    }
    if (piVar4[0xf] != 0) {
      *(int *)(piVar4[0xf] + 0x38) = piVar4[0xe];
    }
    piVar4[0xc] = -0x49f93c38;
    *piVar4 = 0;
    FUN_005521a0(iVar5,piVar4);
  }
  FUN_005521a0(param_1,pvVar6);
  if ((*(char *)(param_1 + 0x38) != '\0') || (uVar14 = local_c, local_c == 0xc0a)) {
    FUN_00553890(param_1,7,0);
    *(undefined1 *)(param_1 + 0x38) = 0;
    uVar14 = 7;
  }
  uVar14 = *(uint *)(param_1 + 0x30) & uVar14;
  if (uVar14 != 0) {
    iVar5 = *(int *)(param_1 + 0x44);
    if (((iVar5 == 0x4b771290) || (iVar5 == -0x5fd65969)) || (iVar5 == -0xfc486fa)) {
      if (*(char *)(param_1 + 0x38) == '\0') {
        uVar10 = *(uint *)(param_1 + 0x2c) & *(uint *)(param_1 + 0x30);
      }
      else {
        uVar10 = 7;
      }
    }
    else {
      FUN_00525a30(0x15,"API call with %s database connection pointer","invalid");
      FUN_00525a30(0x15,"misuse at line %d of [%.10s]",0x1bee8,
                   "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
      uVar10 = 0x15;
    }
    if (uVar14 == uVar10) {
      if (param_5 != (int *)0x0) {
        pcVar11 = (char *)FUN_00525e30(param_1);
        uVar10 = 0;
        if (pcVar11 != (char *)0x0) {
          cVar1 = *pcVar11;
          pcVar12 = pcVar11;
          while (cVar1 != '\0') {
            pcVar12 = pcVar12 + 1;
            cVar1 = *pcVar12;
          }
          uVar10 = (int)pcVar12 - (int)pcVar11 & 0x3fffffff;
        }
        sVar15 = uVar10 + 1;
        iVar5 = FUN_0055da00(sVar15);
        *param_5 = iVar5;
        if (iVar5 == 0) {
          uVar14 = 7;
          FUN_00553890(param_1,7,0);
        }
        else {
          pvVar6 = (void *)FUN_00525e30(param_1);
          memcpy((void *)*param_5,pvVar6,sVar15);
        }
      }
      goto LAB_00520c4d;
    }
  }
  if (param_5 != (int *)0x0) {
    *param_5 = 0;
  }
LAB_00520c4d:
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(param_1 + 0xc));
  }
  return uVar14;
}


/* FUN_00520d30 @ 00520d30  kind=lib  attributed-by=lib-island  size=232 */

void FUN_00520d30(int param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x30);
  if ((*(ushort *)(iVar2 + 0x1c) & 0x2000) == 0) {
    FUN_00574d80();
    *(undefined2 *)(iVar2 + 0x1c) = 1;
    *(undefined4 *)(iVar2 + 4) = 0;
  }
  puVar1 = *(undefined8 **)(iVar2 + 4);
  if (((puVar1 != (undefined8 *)0x0) && (-1 < *(int *)((int)puVar1 + 0x14))) &&
     ((0 < *(int *)((int)puVar1 + 0x14) || (*(int *)(puVar1 + 2) != 0)))) {
    if (*(char *)(puVar1 + 3) == '\0') {
      if (*(char *)((int)puVar1 + 0x19) == '\0') {
        FUN_0051d270(param_1,*(undefined4 *)(puVar1 + 1),*(undefined4 *)((int)puVar1 + 0xc));
        return;
      }
      FUN_00574df0(param_1 + 8,*puVar1);
      return;
    }
    *(undefined4 *)(param_1 + 0x38) = 1;
    if (*(int *)(param_1 + 8) == 0) {
      iVar2 = 1000000000;
    }
    else {
      iVar2 = *(int *)(*(int *)(param_1 + 8) + 0x50);
    }
    iVar3 = 0;
    if (-1 < iVar2) {
      do {
        if ("integer overflow"[iVar3] == '\0') break;
        iVar3 = iVar3 + 1;
      } while (iVar3 <= iVar2);
    }
    if ((iVar3 <= iVar2) && (iVar2 = FUN_005748c0(param_1 + 8,iVar3 + 1U,0), iVar2 == 0)) {
      memcpy(*(void **)(param_1 + 0xc),"integer overflow",iVar3 + 1U);
      *(int *)(param_1 + 0x20) = iVar3;
      *(undefined4 *)(param_1 + 0x24) = 0x1030202;
    }
  }
  return;
}


/* FUN_00521a60 @ 00521a60  kind=lib  attributed-by=lib-string  size=2001 */

uint FUN_00521a60(uint param_1,int param_2,undefined4 param_3,byte *param_4,undefined4 param_5,
                 undefined4 param_6,int param_7,undefined4 *param_8)

{
  byte *pbVar1;
  undefined8 *puVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  int *piVar9;
  byte *pbVar10;
  int *piVar11;
  undefined4 uVar12;
  undefined *puVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  byte *pbVar17;
  int iVar18;
  undefined4 *puVar19;
  undefined8 uVar20;
  char *pcVar21;
  int local_28;
  uint local_20;
  int local_1c;
  uint *local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  uint *local_8;
  
  local_14 = (uint)(param_7 != 0);
  local_28 = 0;
  local_10 = 0;
  local_c = 0;
  *param_8 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(param_1 + 0xc));
  }
  puVar7 = (uint *)FUN_00552230(param_1,0x1c);
  puVar16 = (uint *)0x0;
  local_18 = puVar7;
  if (puVar7 != (uint *)0x0) {
    puVar7[0] = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    puVar7[4] = 0;
    puVar7[5] = 0;
    puVar7[6] = 0;
    local_8 = (uint *)FUN_00552230(param_1,0x230);
    puVar16 = local_8;
    if (local_8 != (uint *)0x0) {
      do {
        puVar7 = local_8;
        memset(local_8,0,0x230);
        *puVar7 = param_1;
        FUN_005521a0(param_1,local_c);
        local_c = 0;
        local_20 = 0;
        FUN_0054d340(param_1);
        if ((*(char *)(*puVar7 + 0x81) == '\0') &&
           (uVar8 = FUN_0055b460(*puVar7,puVar7 + 1), uVar8 != 0)) {
          puVar7[0x11] = puVar7[0x11] + 1;
          puVar7[3] = uVar8;
LAB_0052215d:
          if (puVar7[1] != 0) {
            FUN_005521a0(param_1,0);
            local_c = puVar7[1];
            puVar7[1] = 0;
          }
          local_10 = 1;
          FUN_0054de20(param_1);
          puVar16 = local_8;
          goto LAB_00522080;
        }
        piVar9 = (int *)FUN_005572d0(*puVar7,param_3,param_2);
        if (piVar9 == (int *)0x0) {
          if (param_2 == 0) {
            FUN_00553950(puVar7,"%s: %s","no such table",param_3);
          }
          else {
            FUN_00553950(puVar7,"%s: %s.%s","no such table",param_2);
          }
          *(undefined1 *)((int)puVar7 + 0x11) = 1;
          goto LAB_0052215d;
        }
        if ((*(byte *)((int)piVar9 + 0x2a) & 0x10) != 0) {
          FUN_00553950(puVar7,"cannot open virtual table: %s",param_3);
          goto LAB_0052215d;
        }
        if (piVar9[3] != 0) {
          FUN_00553950(puVar7,"cannot open view: %s",param_3);
          goto LAB_0052215d;
        }
        uVar8 = (uint)*(short *)((int)piVar9 + 0x26);
        uVar15 = 0;
        if (0 < (int)uVar8) {
          puVar19 = (undefined4 *)piVar9[1];
          do {
            pbVar10 = (byte *)*puVar19;
            bVar3 = *pbVar10;
            pbVar17 = param_4;
            while ((bVar3 != 0 && ((&DAT_007120d8)[bVar3] == (&DAT_007120d8)[*pbVar17]))) {
              pbVar1 = pbVar10 + 1;
              pbVar10 = pbVar10 + 1;
              pbVar17 = pbVar17 + 1;
              bVar3 = *pbVar1;
            }
            if ((&DAT_007120d8)[*pbVar10] == (&DAT_007120d8)[*pbVar17]) break;
            uVar15 = uVar15 + 1;
            puVar19 = puVar19 + 6;
          } while ((int)uVar15 < (int)uVar8);
        }
        if (uVar15 == uVar8) {
          FUN_005521a0(param_1,0);
          pcVar21 = "no such column: \"%s\"";
LAB_00522064:
          local_c = FUN_0055d980(param_1,pcVar21,param_4);
          local_10 = 1;
          FUN_0054de20(param_1);
          puVar16 = local_8;
          goto LAB_00522080;
        }
        if (local_14 != 0) {
          pbVar10 = (byte *)0x0;
          if ((*(uint *)(param_1 + 0x18) & 0x40000) != 0) {
            for (iVar18 = piVar9[4]; iVar18 != 0; iVar18 = *(int *)(iVar18 + 4)) {
              iVar14 = *(int *)(iVar18 + 0x14);
              if (0 < iVar14) {
                puVar7 = (uint *)(iVar18 + 0x24);
                pbVar17 = pbVar10;
                do {
                  pbVar10 = (byte *)"foreign key";
                  if (*puVar7 != uVar15) {
                    pbVar10 = pbVar17;
                  }
                  puVar7 = puVar7 + 2;
                  iVar14 = iVar14 + -1;
                  pbVar17 = pbVar10;
                } while (iVar14 != 0);
              }
            }
          }
          for (iVar18 = piVar9[2]; iVar18 != 0; iVar18 = *(int *)(iVar18 + 0x14)) {
            iVar14 = *(int *)(iVar18 + 0x24);
            if (0 < iVar14) {
              puVar7 = *(uint **)(iVar18 + 4);
              pbVar17 = pbVar10;
              do {
                pbVar10 = (byte *)"indexed";
                if (*puVar7 != uVar15) {
                  pbVar10 = pbVar17;
                }
                puVar7 = puVar7 + 1;
                iVar14 = iVar14 + -1;
                pbVar17 = pbVar10;
              } while (iVar14 != 0);
            }
          }
          if (pbVar10 != (byte *)0x0) {
            FUN_005521a0(param_1,0);
            pcVar21 = "cannot open %s column for writing";
            param_4 = pbVar10;
            goto LAB_00522064;
          }
        }
        puVar7 = (uint *)FUN_00552230(param_1,0xc0);
        if (puVar7 == (uint *)0x0) {
          puVar7 = (uint *)0x0;
        }
        else {
          memset(puVar7,0,0xc0);
          *puVar7 = param_1;
          if (*(int *)(param_1 + 4) != 0) {
            *(uint **)(*(int *)(param_1 + 4) + 0x38) = puVar7;
          }
          puVar7[0xf] = *(uint *)(param_1 + 4);
          puVar7[0xe] = 0;
          *(uint **)(param_1 + 4) = puVar7;
          puVar7[0xc] = 0x26bceaa5;
        }
        local_18[5] = (uint)puVar7;
        if (puVar7 != (uint *)0x0) {
          local_1c = -1000000;
          if (piVar9[0x10] != 0) {
            iVar18 = 0;
            local_1c = 0;
            if (0 < *(int *)(param_1 + 0x14)) {
              piVar11 = (int *)(*(int *)(param_1 + 0x10) + 0xc);
              do {
                local_1c = iVar18;
                if (*piVar11 == piVar9[0x10]) break;
                iVar18 = iVar18 + 1;
                piVar11 = piVar11 + 4;
                local_1c = iVar18;
              } while (iVar18 < *(int *)(param_1 + 0x14));
            }
          }
          iVar18 = local_1c;
          FUN_0056c070(puVar7,0xc,&DAT_00712c54);
          if ((puVar7[7] != 0) && (*(int *)(puVar7[1] + 4) = iVar18, puVar7[7] != 0)) {
            *(uint *)(puVar7[1] + 8) = local_14;
          }
          if ((1 < puVar7[7]) && (*(int *)(puVar7[1] + 0x18) = iVar18, 1 < puVar7[7])) {
            *(undefined4 *)(puVar7[1] + 0x1c) = *(undefined4 *)piVar9[0x10];
          }
          if (1 < puVar7[7]) {
            *(undefined4 *)(puVar7[1] + 0x20) = *(undefined4 *)(piVar9[0x10] + 4);
          }
          uVar8 = 1 << ((byte)iVar18 & 0x1f);
          puVar7[0x1a] = puVar7[0x1a] | uVar8;
          if ((iVar18 != 1) &&
             (*(char *)(*(int *)(*(int *)(*puVar7 + 0x10) + 4 + iVar18 * 0x10) + 9) != '\0')) {
            puVar7[0x1b] = puVar7[0x1b] | uVar8;
          }
          if ((2 < puVar7[7]) && (*(int *)(puVar7[1] + 0x2c) = iVar18, 2 < puVar7[7])) {
            *(int *)(puVar7[1] + 0x30) = piVar9[8];
          }
          if (2 < puVar7[7]) {
            *(uint *)(puVar7[1] + 0x34) = local_14;
          }
          uVar8 = puVar7[1];
          iVar14 = *piVar9;
          uVar5 = *puVar7;
          if ((uVar8 == 0) || (*(char *)(uVar5 + 0x38) != '\0')) {
            FUN_00539320(uVar5,0,iVar14);
          }
          else {
            FUN_00539320(uVar5,(int)*(char *)(uVar8 + 0x29),*(undefined4 *)(uVar8 + 0x38));
            *(undefined4 *)(uVar8 + 0x38) = 0;
            if (iVar14 == 0) {
              *(undefined4 *)(uVar8 + 0x38) = 0;
              *(undefined1 *)(uVar8 + 0x29) = 0;
            }
            else {
              uVar20 = FUN_00568070(iVar14);
              uVar12 = FUN_005524a0(*puVar7,(int)((ulonglong)uVar20 >> 0x20),(int)uVar20);
              *(undefined4 *)(uVar8 + 0x38) = uVar12;
              *(undefined1 *)(uVar8 + 0x29) = 0xff;
            }
          }
          uVar8 = puVar7[1];
          if (uVar8 != 0) {
            puVar2 = (undefined8 *)(uVar8 + (4 - local_14) * 0x14);
            FUN_00539320(*puVar7,(int)*(char *)((int)puVar2 + 1),
                         *(undefined4 *)(uVar8 + 0x10 + (4 - local_14) * 0x14));
            *puVar2 = 0;
            puVar2[1] = 0;
            *(undefined4 *)(puVar2 + 2) = 0;
            *(undefined1 *)puVar2 = 0x95;
            iVar18 = local_1c;
          }
          uVar8 = local_14 + 3;
          if ((uVar8 < puVar7[7]) &&
             (*(int *)(puVar7[1] + 8 + uVar8 * 0x14) = piVar9[8], uVar8 < puVar7[7])) {
            *(int *)(puVar7[1] + 0xc + uVar8 * 0x14) = iVar18;
          }
          uVar5 = puVar7[1];
          uVar6 = *puVar7;
          iVar18 = *(short *)((int)piVar9 + 0x26) + 1;
          if ((uVar5 == 0) || (*(char *)(uVar6 + 0x38) != '\0')) {
            FUN_00539320(uVar6,0xfffffff2,iVar18);
          }
          else {
            if ((int)uVar8 < 0) {
              uVar8 = puVar7[7] - 1;
            }
            iVar14 = uVar5 + uVar8 * 0x14;
            FUN_00539320(uVar6,(int)*(char *)(iVar14 + 1),
                         *(undefined4 *)(uVar5 + 0x10 + uVar8 * 0x14));
            *(int *)(iVar14 + 0x10) = iVar18;
            *(undefined1 *)(iVar14 + 1) = 0xf2;
          }
          if (7 < puVar7[7]) {
            *(int *)(puVar7[1] + 0x94) = (int)*(short *)((int)piVar9 + 0x26);
          }
          if (*(char *)(param_1 + 0x38) == '\0') {
            local_8[0x73] = 1;
            local_8[0x13] = 1;
            local_8[0x12] = 1;
            FUN_00574250(puVar7,local_8);
          }
        }
        puVar7 = local_18;
        *local_18 = local_14;
        local_18[3] = uVar15;
        local_18[6] = param_1;
        FUN_0054de20(param_1);
        if (*(char *)(param_1 + 0x38) != '\0') goto LAB_005220d8;
        piVar9 = (int *)puVar7[5];
        iVar18 = FUN_0057d290(piVar9,1);
        if (iVar18 == 0) {
          puVar19 = (undefined4 *)piVar9[0x11];
          uVar4 = *(ushort *)(puVar19 + 7);
          if ((uVar4 & 0x2460) != 0) {
            if ((uVar4 & 0x2000) == 0) {
              if (((uVar4 & 0x400) == 0) || ((code *)puVar19[8] == (code *)0x0)) {
                if ((uVar4 & 0x20) == 0) {
                  if ((uVar4 & 0x40) != 0) {
                    FUN_00574f20(puVar19);
                  }
                }
                else {
                  FUN_005644e0(puVar19[4]);
                }
              }
              else {
                (*(code *)puVar19[8])(puVar19[1]);
                puVar19[8] = 0;
              }
            }
            else {
              FUN_00574670(puVar19,puVar19[4]);
              FUN_00574d40(puVar19);
            }
          }
          FUN_005521a0(*puVar19,puVar19[9]);
          puVar19[4] = param_5;
          puVar19[5] = param_6;
          puVar19[1] = 0;
          puVar19[9] = 0;
          puVar19[8] = 0;
          *(undefined2 *)(puVar19 + 7) = 4;
          *(undefined1 *)((int)puVar19 + 0x1e) = 1;
          if (*(int *)(*piVar9 + 0xc) != 0) {
            (*DAT_00766638)(*(int *)(*piVar9 + 0xc));
          }
        }
        puVar7 = local_18;
        local_10 = FUN_0052e230(local_18,param_5,param_6,&local_20);
        local_28 = local_28 + 1;
        if ((4 < local_28) || (local_10 != 0x11)) goto LAB_005220d2;
        local_c = local_20;
      } while( true );
    }
  }
LAB_005220e1:
  if (*(char *)(param_1 + 0x38) == '\0') {
    *param_8 = puVar7;
    goto LAB_005221c7;
  }
LAB_00522080:
  if ((local_18 != (uint *)0x0) && (piVar9 = (int *)local_18[5], piVar9 != (int *)0x0)) {
    if ((piVar9[0xc] == -0x420df25d) || (piVar9[0xc] == 0x519c2973)) {
      FUN_00575ca0(piVar9);
    }
    iVar18 = *piVar9;
    FUN_0056c560(iVar18,piVar9);
    if (piVar9[0xe] == 0) {
      *(int *)(iVar18 + 4) = piVar9[0xf];
    }
    else {
      *(int *)(piVar9[0xe] + 0x3c) = piVar9[0xf];
    }
    if (piVar9[0xf] != 0) {
      *(int *)(piVar9[0xf] + 0x38) = piVar9[0xe];
    }
    piVar9[0xc] = -0x49f93c38;
    *piVar9 = 0;
    FUN_005521a0(iVar18,piVar9);
  }
  FUN_005521a0(param_1,local_18);
LAB_005221c7:
  uVar8 = local_c;
  puVar13 = &DAT_00716900;
  if (local_c == 0) {
    puVar13 = (undefined *)0x0;
  }
  FUN_00553890(param_1,local_10,puVar13,local_c);
  FUN_005521a0(param_1,uVar8);
  FUN_005521a0(param_1,puVar16);
  if ((*(char *)(param_1 + 0x38) != '\0') || (uVar8 = local_10, local_10 == 0xc0a)) {
    FUN_00553890(param_1,7,0);
    *(undefined1 *)(param_1 + 0x38) = 0;
    uVar8 = 7;
  }
  uVar15 = *(uint *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(param_1 + 0xc));
  }
  return uVar15 & uVar8;
LAB_005220d2:
  local_c = local_20;
LAB_005220d8:
  puVar16 = local_8;
  if (local_10 == 0) goto LAB_005220e1;
  goto LAB_00522080;
}


/* FUN_005224a0 @ 005224a0  kind=lib  attributed-by=lib-island  size=150 */

int FUN_005224a0(byte *param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  bool bVar7;
  
  iVar2 = FUN_00579f80();
  if (iVar2 != 0) {
    return 0;
  }
  if (DAT_007665e4 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (*DAT_00766628)(2);
    if (iVar2 != 0) {
      (*DAT_00766630)(iVar2);
    }
  }
  iVar6 = DAT_0076b3b8;
  if (DAT_0076b3b8 != 0) {
    while (param_1 != (byte *)0x0) {
      pbVar3 = *(byte **)(iVar6 + 0x10);
      pbVar5 = param_1;
      do {
        bVar1 = *pbVar5;
        bVar7 = bVar1 < *pbVar3;
        if (bVar1 != *pbVar3) {
LAB_00522511:
          uVar4 = -(uint)bVar7 | 1;
          goto LAB_00522516;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar7 = bVar1 < pbVar3[1];
        if (bVar1 != pbVar3[1]) goto LAB_00522511;
        pbVar5 = pbVar5 + 2;
        pbVar3 = pbVar3 + 2;
      } while (bVar1 != 0);
      uVar4 = 0;
LAB_00522516:
      if ((uVar4 == 0) || (iVar6 = *(int *)(iVar6 + 0xc), iVar6 == 0)) break;
    }
  }
  if (iVar2 != 0) {
    (*DAT_00766638)(iVar2);
  }
  return iVar6;
}


/* FUN_00522700 @ 00522700  kind=lib  attributed-by=lib-island  size=22 */

void FUN_00522700(int param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0052270e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_00766630)();
    return;
  }
  return;
}


/* FUN_00522740 @ 00522740  kind=lib  attributed-by=lib-island  size=22 */

void FUN_00522740(int param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0052274e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_00766638)();
    return;
  }
  return;
}


/* FUN_00522940 @ 00522940  kind=lib  attributed-by=lib-island  size=170 */

undefined4 FUN_00522940(int param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 1;
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(param_1 + 0xc));
  }
  iVar3 = FUN_005522f0(param_1,param_2);
  if (iVar3 != 0) {
    FUN_0054d260(iVar3);
    piVar1 = *(int **)(**(int **)(iVar3 + 4) + 0x3c);
    if (param_3 == 7) {
      uVar4 = 0;
      *param_4 = piVar1;
    }
    else if (*piVar1 == 0) {
      uVar4 = 0xc;
    }
    else {
      uVar4 = (**(code **)(*piVar1 + 0x28))(piVar1,param_3,param_4);
    }
    if (*(char *)(iVar3 + 9) != '\0') {
      piVar1 = (int *)(iVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        iVar2 = *(int *)(*(int *)(iVar3 + 4) + 0x38);
        if (iVar2 != 0) {
          (*DAT_00766638)(iVar2);
        }
        *(undefined1 *)(iVar3 + 10) = 0;
      }
    }
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(param_1 + 0xc));
  }
  return uVar4;
}


/* FUN_00523850 @ 00523850  kind=lib  attributed-by=lib-island  size=174 */

undefined4 FUN_00523850(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (0 < param_2) {
    if (iVar1 != 0) {
      (*DAT_00766630)(iVar1);
    }
    *(code **)(param_1 + 0x1ac) = FUN_0057a410;
    *(int *)(param_1 + 0x1b0) = param_1;
    *(undefined4 *)(param_1 + 0x1b4) = 0;
    *(undefined4 *)(param_1 + 0x1dc) = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      (*DAT_00766638)(*(int *)(param_1 + 0xc));
    }
    *(int *)(param_1 + 0x1dc) = param_2;
    return 0;
  }
  if (iVar1 != 0) {
    (*DAT_00766630)(iVar1);
  }
  *(undefined4 *)(param_1 + 0x1ac) = 0;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(param_1 + 0xc));
  }
  return 0;
}


/* FUN_00523d10 @ 00523d10  kind=lib  attributed-by=lib-island  size=33 */

undefined4 FUN_00523d10(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00579f80();
  if (iVar1 != 0) {
    return 0;
  }
  uVar2 = FUN_00523d40(param_1,&stack0x00000008);
  return uVar2;
}


/* FUN_00523d40 @ 00523d40  kind=lib  attributed-by=lib-island  size=139 */

void FUN_00523d40(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_6c;
  undefined1 *local_68;
  undefined1 *local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_54;
  undefined2 local_53;
  undefined1 local_50 [72];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar1 = FUN_00579f80();
  if (iVar1 != 0) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  local_68 = local_50;
  local_6c = 0;
  local_60 = 0;
  local_5c = 0x46;
  local_58 = 1000000000;
  local_53 = 2;
  local_54 = 0;
  local_64 = local_68;
  FUN_0056aa30(&local_6c,0,param_1,param_2);
  FUN_00567fb0(&local_6c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_005240c0 @ 005240c0  kind=lib  attributed-by=lib-island  size=90 */

void FUN_005240c0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  undefined1 local_8;
  undefined2 local_7;
  
  if (0 < param_1) {
    local_1c = param_2;
    local_18 = param_2;
    local_20 = 0;
    local_14 = 0;
    local_10 = param_1;
    local_c = 0;
    local_7 = 0;
    local_8 = 0;
    FUN_0056aa30(&local_20,0,param_3,&stack0x00000010);
    FUN_00567fb0(&local_20);
  }
  return;
}


/* FUN_00524410 @ 00524410  kind=lib  attributed-by=lib-island  size=152 */

void FUN_00524410(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    if (DAT_007665e0 == 0) {
      (*DAT_00766604)(param_1);
    }
    else {
      if (DAT_0076b488 != 0) {
        (*DAT_00766630)(DAT_0076b488);
      }
      iVar1 = (*DAT_00766608._4_4_)(param_1);
      DAT_0076b360 = DAT_0076b360 - iVar1;
      if (DAT_0076b388 < DAT_0076b360) {
        DAT_0076b388 = DAT_0076b360;
      }
      DAT_0076b384 = DAT_0076b384 + -1;
      if (DAT_0076b3ac < DAT_0076b384) {
        DAT_0076b3ac = DAT_0076b384;
      }
      (*DAT_00766604)(param_1);
      if (DAT_0076b488 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00524495. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*DAT_00766638)();
        return;
      }
    }
  }
  return;
}


/* FUN_005245e0 @ 005245e0  kind=lib  attributed-by=lib-island  size=88 */

void FUN_005245e0(int param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  
  if (DAT_007665e4 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (*DAT_00766628)(5);
    if (iVar2 != 0) {
      (*DAT_00766630)(iVar2);
    }
  }
  for (; param_1 != 0; param_1 = param_1 + -1) {
    uVar1 = FUN_00544c20();
    *param_2 = uVar1;
    param_2 = param_2 + 1;
  }
  if (iVar2 != 0) {
    (*DAT_00766638)(iVar2);
  }
  return;
}


/* FUN_00524a00 @ 00524a00  kind=lib  attributed-by=lib-island  size=2478 */

uint FUN_00524a00(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  bool bVar12;
  undefined8 uVar13;
  int *local_3c;
  uint local_38;
  int *local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  undefined4 *local_20;
  int *local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  if (*(int *)(param_1[5] + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(param_1[5] + 0xc));
  }
  FUN_0054d260(param_1[6]);
  if ((*param_1 != 0) && (iVar8 = *(int *)(*param_1 + 0xc), iVar8 != 0)) {
    (*DAT_00766630)(iVar8);
  }
  uVar10 = param_1[7];
  if (((uVar10 != 0) && (uVar10 != 5)) && (uVar10 != 6)) goto LAB_00525354;
  iVar8 = **(int **)(param_1[6] + 4);
  local_18 = **(int **)(param_1[1] + 4);
  bVar5 = false;
  local_c = iVar8;
  if ((*param_1 == 0) || (*(char *)((int)*(int **)(param_1[6] + 4) + 0x13) != '\x02')) {
    uVar10 = 0;
    if (param_1[3] == 0) {
      uVar10 = FUN_0054c3f0(param_1[1],2);
      if (uVar10 != 0) goto LAB_00524c37;
      param_1[3] = 1;
      FUN_0054d510(param_1[1],1,param_1 + 2);
    }
    local_8 = param_1[6];
    if (*(char *)(local_8 + 8) == '\0') {
      iVar8 = *(int *)(local_8 + 4);
      uVar10 = 0;
      FUN_0054d260(local_8);
      if ((*(char *)(local_8 + 8) != '\x02') && (*(char *)(local_8 + 8) != '\x01')) {
        if (((*(byte *)(iVar8 + 0x16) & 0x40) == 0) || (**(int **)(iVar8 + 0x4c) == 0)) {
          uVar10 = FUN_00544bb0(local_8,1,1);
          if (uVar10 == 0) {
            *(ushort *)(iVar8 + 0x16) = *(ushort *)(iVar8 + 0x16) & 0xfff7;
            if (*(int *)(iVar8 + 0x2c) == 0) {
              *(ushort *)(iVar8 + 0x16) = *(ushort *)(iVar8 + 0x16) | 8;
            }
LAB_00524b32:
            if (*(int *)(iVar8 + 0xc) == 0) goto code_r0x00524b38;
            if (uVar10 != 0) goto LAB_00524b4d;
            goto LAB_00524b89;
          }
        }
        else {
          uVar10 = 0x106;
        }
      }
      goto LAB_00524c07;
    }
  }
  else {
    uVar10 = 5;
  }
  goto LAB_00524c37;
code_r0x00524b38:
  uVar10 = FUN_0053d2a0(iVar8);
  if (uVar10 != 0) {
LAB_00524b4d:
    if ((*(char *)(iVar8 + 0x13) == '\0') && (*(int *)(iVar8 + 0xc) != 0)) {
      iVar4 = *(int *)(*(int *)(iVar8 + 0xc) + 0x44);
      if (iVar4 != 0) {
        iVar7 = *(int *)(iVar4 + 0x10);
        FUN_00561130(iVar4);
        if (*(int *)(*(int *)(iVar7 + 0xb4) + 0xc) == 0) {
          FUN_00541a10(iVar7);
        }
      }
      *(undefined4 *)(iVar8 + 0xc) = 0;
    }
LAB_00524b89:
    if (((char)uVar10 != '\x05') || (*(char *)(iVar8 + 0x13) != '\0')) goto LAB_00524bc8;
    iVar4 = *(int *)(iVar8 + 4);
    if (((undefined4 *)(iVar4 + 0x1ac) == (undefined4 *)0x0) ||
       ((pcVar3 = *(code **)(iVar4 + 0x1ac), pcVar3 == (code *)0x0 || (*(int *)(iVar4 + 0x1b4) < 0))
       )) goto LAB_00524bc8;
    iVar7 = (*pcVar3)(*(undefined4 *)(iVar4 + 0x1b0),*(int *)(iVar4 + 0x1b4));
    if (iVar7 == 0) goto LAB_00524bc1;
    *(int *)(iVar4 + 0x1b4) = *(int *)(iVar4 + 0x1b4) + 1;
  }
  goto LAB_00524b32;
LAB_00524bc1:
  *(undefined4 *)(iVar4 + 0x1b4) = 0xffffffff;
LAB_00524bc8:
  if (uVar10 == 0) {
    if ((*(char *)(local_8 + 8) == '\0') &&
       (*(int *)(iVar8 + 0x28) = *(int *)(iVar8 + 0x28) + 1, *(char *)(local_8 + 9) != '\0')) {
      *(undefined1 *)(local_8 + 0x24) = 1;
      *(undefined4 *)(local_8 + 0x28) = *(undefined4 *)(iVar8 + 0x48);
      *(uint *)(iVar8 + 0x48) = local_8 + 0x1c;
    }
    *(undefined1 *)(local_8 + 8) = 1;
    if (*(char *)(iVar8 + 0x13) == '\0') {
      *(undefined1 *)(iVar8 + 0x13) = 1;
    }
  }
LAB_00524c07:
  if (*(char *)(local_8 + 9) != '\0') {
    piVar1 = (int *)(local_8 + 0xc);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      iVar8 = *(int *)(*(int *)(local_8 + 4) + 0x38);
      if (iVar8 != 0) {
        (*DAT_00766638)(iVar8);
      }
      *(undefined1 *)(local_8 + 10) = 0;
    }
  }
  bVar5 = true;
  iVar8 = local_c;
LAB_00524c37:
  uVar9 = *(uint *)(*(int *)(param_1[6] + 4) + 0x20);
  local_10 = (*(int **)(param_1[1] + 4))[8];
  local_30 = (uint)*(byte *)(**(int **)(param_1[1] + 4) + 5);
  if (((uVar10 == 0) && (local_30 == 5)) && (uVar9 != local_10)) {
    uVar10 = 8;
  }
  local_8 = *(uint *)(*(int *)(param_1[6] + 4) + 0x2c);
  local_1c = (int *)0x0;
  while (((param_2 < 0 || ((int)local_1c < param_2)) && (local_14 = param_1[4], local_14 <= local_8)
         )) {
    if (uVar10 != 0) goto LAB_00524d4a;
    if ((local_14 != DAT_007666d0 / *(uint *)(*(int *)(param_1[6] + 4) + 0x20) + 1) &&
       (uVar10 = FUN_0055eb70(iVar8,local_14,&local_3c,0), piVar1 = local_3c, uVar10 == 0)) {
      uVar10 = FUN_0052ba20(param_1,local_14,local_3c[1]);
      local_34 = (int *)piVar1[4];
      FUN_00561130(piVar1);
      if (*(int *)(local_34[0x2d] + 0xc) == 0) {
        FUN_00541a10(local_34);
      }
    }
    param_1[4] = param_1[4] + 1;
    local_1c = (int *)((int)local_1c + 1);
    iVar8 = local_c;
  }
  if (uVar10 == 0) {
    param_1[9] = local_8;
    param_1[8] = (local_8 - param_1[4]) + 1;
    if (local_8 < (uint)param_1[4]) goto LAB_00524d53;
    if (param_1[10] == 0) {
      iVar8 = **(int **)(param_1[6] + 4);
      param_1[0xb] = *(int *)(iVar8 + 0x58);
      *(int **)(iVar8 + 0x58) = param_1;
      param_1[10] = 1;
    }
    goto LAB_0052521c;
  }
LAB_00524d4a:
  if (uVar10 == 0x65) {
LAB_00524d53:
    if (local_8 == 0) {
      iVar8 = param_1[1];
      FUN_0054d260(iVar8);
      *(undefined4 *)(*(int *)(iVar8 + 4) + 0x2c) = 0;
      uVar10 = FUN_00540a20(*(undefined4 *)(iVar8 + 4));
      if (*(char *)(iVar8 + 9) != '\0') {
        piVar1 = (int *)(iVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          iVar4 = *(int *)(*(int *)(iVar8 + 4) + 0x38);
          if (iVar4 != 0) {
            (*DAT_00766638)(iVar4);
          }
          *(undefined1 *)(iVar8 + 10) = 0;
        }
      }
      local_8 = 1;
      if ((uVar10 == 0) || (uVar10 == 0x65)) goto LAB_00524dab;
    }
    else {
LAB_00524dab:
      local_3c = (int *)(param_1[2] + 1);
      local_34 = (int *)param_1[1];
      iVar8 = local_34[1];
      FUN_0054d260(local_34);
      iVar4 = *(int *)(*(int *)(iVar8 + 0xc) + 0x38);
      uVar10 = FUN_00560330(*(undefined4 *)(*(int *)(iVar8 + 0xc) + 0x44));
      piVar1 = local_34;
      if (uVar10 == 0) {
        *(char *)(iVar4 + 0x28) = (char)((uint)local_3c >> 0x18);
        *(char *)(iVar4 + 0x29) = (char)((uint)local_3c >> 0x10);
        *(char *)(iVar4 + 0x2a) = (char)((uint)local_3c >> 8);
        *(char *)(iVar4 + 0x2b) = (char)local_3c;
      }
      if (*(char *)((int)local_34 + 9) != '\0') {
        piVar2 = local_34 + 3;
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          if (*(int *)(local_34[1] + 0x38) != 0) {
            (*DAT_00766638)(*(int *)(local_34[1] + 0x38));
          }
          *(undefined1 *)((int)piVar1 + 10) = 0;
        }
      }
    }
    uVar6 = local_8;
    if (uVar10 == 0) {
      if (*param_1 != 0) {
        FUN_00564000(*param_1);
      }
      if ((local_30 != 5) || (uVar10 = FUN_0054f3d0(param_1[1],2), uVar10 == 0)) {
        if ((int)uVar9 < (int)local_10) {
          iVar8 = (int)((int)local_10 / (int)uVar9 + -1 + uVar6) / ((int)local_10 / (int)uVar9);
          if (iVar8 == DAT_007666d0 / *(uint *)(*(int *)(param_1[1] + 4) + 0x20) + 1) {
            iVar8 = iVar8 + -1;
          }
        }
        else {
          iVar8 = ((int)uVar9 / (int)local_10) * uVar6;
        }
        *(int *)(local_18 + 0x18) = iVar8;
        if ((int)uVar9 < (int)local_10) {
          local_2c = (int)uVar9 >> 0x1f;
          local_28 = uVar9;
          uVar13 = __allmul(uVar6,(int)uVar6 >> 0x1f,uVar9,local_2c);
          local_3c = (int *)((ulonglong)uVar13 >> 0x20);
          local_8 = (uint)uVar13;
          local_34 = *(int **)(local_18 + 0x3c);
          uVar10 = FUN_0055f050(local_18,0,1);
          local_30 = DAT_007666d0 + local_10;
          local_1c = (int *)((int)local_30 >> 0x1f);
          if (((int)local_3c < (int)local_1c) ||
             (((int)local_3c <= (int)local_1c && (local_8 <= local_30)))) {
            local_30 = local_8;
            local_1c = local_3c;
          }
          local_10 = DAT_007666d0 + uVar9;
          local_14 = (int)local_10 >> 0x1f;
          piVar1 = local_34;
          while (local_34 = piVar1, uVar10 == 0) {
            if (((int)local_1c < (int)local_14) ||
               (((int)local_1c <= (int)local_14 && (local_30 <= local_10)))) {
              uVar10 = (**(code **)(*piVar1 + 0x18))(piVar1,&local_38);
              if (uVar10 == 0) {
                if (((int)local_3c <= (int)local_34) &&
                   (((int)local_3c < (int)local_34 || (local_8 < local_38)))) {
                  uVar10 = (**(code **)(*piVar1 + 0x10))(piVar1,local_8,local_3c);
                }
                if (uVar10 == 0) {
                  if (*(char *)(local_18 + 7) == '\0') {
                    uVar10 = (**(code **)(**(int **)(local_18 + 0x3c) + 0x14))
                                       (*(int **)(local_18 + 0x3c),*(undefined1 *)(local_18 + 0xb));
                  }
                  else {
                    piVar1 = *(int **)(local_18 + 0x3c);
                    if ((*piVar1 != 0) &&
                       (uVar10 = (**(code **)(*piVar1 + 0x28))(piVar1,8,0), uVar10 == 0xc)) {
                      uVar10 = 0;
                    }
                  }
                  goto LAB_00525191;
                }
              }
              break;
            }
            local_20 = (undefined4 *)0x0;
            iVar8 = __alldiv(local_10,local_14,local_28,local_2c);
            local_24 = iVar8 + 1;
            if (local_24 == 0) {
              FUN_00525a30(0xb,"database corruption at line %d of [%.10s]",0xa57c,
                           "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
              uVar10 = 0xb;
            }
            else {
              uVar10 = *(uint *)(local_c + 0x28);
              if ((uVar10 == 0) &&
                 (uVar10 = FUN_00560e90(*(undefined4 *)(local_c + 0xb4),local_24,1,&local_20),
                 puVar11 = local_20, uVar10 == 0)) {
                if (local_20[4] != 0) {
                  *(int *)(local_c + 0xa0) = *(int *)(local_c + 0xa0) + 1;
                  goto LAB_00525090;
                }
                local_20[4] = local_c;
                if ((0x7fffffff < local_24) ||
                   (local_24 == (int)DAT_007666d0 / (int)*(size_t *)(local_c + 0x80) + 1U)) {
                  FUN_00525a30(0xb,"database corruption at line %d of [%.10s]",0xa5a2,
                               "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
                  uVar10 = 0xb;
LAB_00525040:
                  if ((*(byte *)(puVar11 + 6) & 2) != 0) {
                    FUN_00544570(puVar11);
                  }
                  iVar8 = puVar11[7];
                  *(int *)(iVar8 + 0xc) = *(int *)(iVar8 + 0xc) + -1;
                  if (puVar11[5] == 1) {
                    *(undefined4 *)(iVar8 + 0x2c) = 0;
                  }
                  (*DAT_00766664)(*(undefined4 *)(iVar8 + 0x28),*puVar11,1);
                  goto LAB_00525072;
                }
                if (((*(char *)(local_c + 0xe) == '\0') && (local_24 <= *(uint *)(local_c + 0x18)))
                   && (**(int **)(local_c + 0x3c) != 0)) {
                  *(int *)(local_c + 0xa4) = *(int *)(local_c + 0xa4) + 1;
                  uVar10 = FUN_00544d80(local_20);
                  if (uVar10 != 0) goto LAB_00525040;
                }
                else {
                  if (*(uint *)(local_c + 0x84) < local_24) {
                    uVar10 = 0xd;
                    goto LAB_00525040;
                  }
                  memset((void *)local_20[1],0,*(size_t *)(local_c + 0x80));
                }
              }
              else {
LAB_00525072:
                if (*(int *)(*(int *)(local_c + 0xb4) + 0xc) == 0) {
                  FUN_00541a10(local_c);
                }
                puVar11 = (undefined4 *)0x0;
                if (uVar10 != 0) goto LAB_005250d0;
              }
LAB_00525090:
              uVar10 = (**(code **)(*local_34 + 0xc))(local_34,puVar11[1],uVar9,local_10,local_14);
              local_24 = puVar11[4];
              FUN_00561130(puVar11);
              if (*(int *)(*(int *)(local_24 + 0xb4) + 0xc) == 0) {
                FUN_00541a10(local_24);
              }
            }
LAB_005250d0:
            bVar12 = CARRY4(local_10,local_28);
            local_10 = local_10 + local_28;
            local_14 = local_14 + local_2c + (uint)bVar12;
            piVar1 = local_34;
          }
        }
        else {
          uVar10 = FUN_0055f050(local_18,0,0);
LAB_00525191:
          if (uVar10 == 0) {
            iVar8 = param_1[1];
            if (*(char *)(iVar8 + 8) != '\0') {
              FUN_0054d260(iVar8);
              if (*(char *)(iVar8 + 8) == '\x02') {
                local_3c = *(int **)(iVar8 + 4);
                iVar4 = *local_3c;
                uVar10 = *(uint *)(iVar4 + 0x28);
                if (uVar10 != 0) {
LAB_005252b5:
                  if (*(char *)(iVar8 + 9) != '\0') {
                    piVar1 = (int *)(iVar8 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    if (*piVar1 == 0) {
                      iVar4 = *(int *)(*(int *)(iVar8 + 4) + 0x38);
                      if (iVar4 != 0) {
                        (*DAT_00766638)(iVar4);
                      }
                      *(undefined1 *)(iVar8 + 10) = 0;
                    }
                  }
                  goto LAB_0052521c;
                }
                if (((*(char *)(iVar4 + 0xf) == '\x02') && (*(char *)(iVar4 + 4) != '\0')) &&
                   (*(char *)(iVar4 + 5) == '\x01')) {
                  *(undefined1 *)(iVar4 + 0xf) = 1;
                }
                else {
                  uVar10 = FUN_00541e00(iVar4,*(undefined1 *)(iVar4 + 0x12));
                  if (((uVar10 & 0xff) == 0xd) || ((uVar10 & 0xff) == 10)) {
                    *(uint *)(iVar4 + 0x28) = uVar10;
                    *(undefined1 *)(iVar4 + 0xf) = 6;
                  }
                  if (uVar10 != 0) goto LAB_005252b5;
                }
                *(undefined1 *)((int)local_3c + 0x13) = 1;
              }
              FUN_0052e890(iVar8);
              if (*(char *)(iVar8 + 9) != '\0') {
                piVar1 = (int *)(iVar8 + 0xc);
                *piVar1 = *piVar1 + -1;
                if (*piVar1 == 0) {
                  iVar4 = *(int *)(*(int *)(iVar8 + 4) + 0x38);
                  if (iVar4 != 0) {
                    (*DAT_00766638)(iVar4);
                  }
                  *(undefined1 *)(iVar8 + 10) = 0;
                }
              }
            }
            uVar10 = 0x65;
          }
        }
      }
    }
  }
LAB_0052521c:
  if (bVar5) {
    FUN_0054c990(param_1[6],0);
    iVar8 = param_1[6];
    if (*(char *)(iVar8 + 8) != '\0') {
      FUN_0054d260(iVar8);
      if (*(char *)(iVar8 + 8) == '\x02') {
        piVar1 = *(int **)(iVar8 + 4);
        iVar4 = *piVar1;
        if (*(int *)(iVar4 + 0x28) == 0) {
          if (((*(char *)(iVar4 + 0xf) == '\x02') && (*(char *)(iVar4 + 4) != '\0')) &&
             (*(char *)(iVar4 + 5) == '\x01')) {
            *(undefined1 *)(iVar4 + 0xf) = 1;
          }
          else {
            uVar9 = FUN_00541e00(iVar4,*(undefined1 *)(iVar4 + 0x12));
            if (((uVar9 & 0xff) == 0xd) || ((uVar9 & 0xff) == 10)) {
              *(uint *)(iVar4 + 0x28) = uVar9;
              *(undefined1 *)(iVar4 + 0xf) = 6;
            }
            if (uVar9 != 0) goto LAB_00525320;
          }
          *(undefined1 *)((int)piVar1 + 0x13) = 1;
          goto LAB_00525317;
        }
      }
      else {
LAB_00525317:
        FUN_0052e890(iVar8);
      }
LAB_00525320:
      if (*(char *)(iVar8 + 9) != '\0') {
        piVar1 = (int *)(iVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          iVar4 = *(int *)(*(int *)(iVar8 + 4) + 0x38);
          if (iVar4 != 0) {
            (*DAT_00766638)(iVar4);
          }
          *(undefined1 *)(iVar8 + 10) = 0;
        }
      }
    }
  }
  if (uVar10 == 0xc0a) {
    uVar10 = 7;
  }
  param_1[7] = uVar10;
LAB_00525354:
  if ((*param_1 != 0) && (iVar8 = *(int *)(*param_1 + 0xc), iVar8 != 0)) {
    (*DAT_00766638)(iVar8);
  }
  iVar8 = param_1[6];
  if (*(char *)(iVar8 + 9) != '\0') {
    piVar1 = (int *)(iVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      iVar4 = *(int *)(*(int *)(iVar8 + 4) + 0x38);
      if (iVar4 != 0) {
        (*DAT_00766638)(iVar4);
      }
      *(undefined1 *)(iVar8 + 10) = 0;
    }
  }
  if (*(int *)(param_1[5] + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(param_1[5] + 0xc));
  }
  return uVar10;
}


/* FUN_00525400 @ 00525400  kind=lib  attributed-by=lib-island  size=246 */

int FUN_00525400(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar1 = param_1[5];
  iVar6 = *(int *)(iVar1 + 0xc);
  if (iVar6 != 0) {
    (*DAT_00766630)(iVar6);
  }
  FUN_0054d260(param_1[6]);
  if (*param_1 != 0) {
    iVar6 = *(int *)(*param_1 + 0xc);
    if (iVar6 != 0) {
      (*DAT_00766630)(iVar6);
    }
    if (*param_1 != 0) {
      *(int *)(param_1[6] + 0x10) = *(int *)(param_1[6] + 0x10) + -1;
    }
  }
  if (param_1[10] != 0) {
    piVar5 = (int *)(**(int **)(param_1[6] + 4) + 0x58);
    piVar2 = (int *)*piVar5;
    while (piVar2 != param_1) {
      piVar5 = (int *)(*piVar5 + 0x2c);
      piVar2 = (int *)*piVar5;
    }
    *piVar5 = param_1[0xb];
  }
  FUN_0054ed50(param_1[1],0);
  iVar6 = param_1[7];
  if (iVar6 == 0x65) {
    iVar6 = 0;
  }
  FUN_00553890(*param_1,iVar6,0);
  if (*param_1 != 0) {
    FUN_0055d180(*param_1);
  }
  iVar3 = param_1[6];
  if (*(char *)(iVar3 + 9) != '\0') {
    piVar2 = (int *)(iVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      iVar4 = *(int *)(*(int *)(iVar3 + 4) + 0x38);
      if (iVar4 != 0) {
        (*DAT_00766638)(iVar4);
      }
      *(undefined1 *)(iVar3 + 10) = 0;
    }
  }
  if (*param_1 != 0) {
    FUN_00524410(param_1);
  }
  FUN_0055d180(iVar1);
  return iVar6;
}


/* FUN_005256b0 @ 005256b0  kind=lib  attributed-by=lib-island  size=329 */

void FUN_005256b0(int param_1,undefined4 param_2,int *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  ulonglong uVar5;
  double local_c;
  
  iVar2 = *param_3;
  if (*(char *)(iVar2 + 0x1e) != '\x01') {
    if (*(char *)(iVar2 + 0x1e) != '\x05') {
      uVar1 = *(ushort *)(iVar2 + 0x1c);
      if ((uVar1 & 8) == 0) {
        if ((uVar1 & 4) == 0) {
          dVar4 = 0.0;
          if ((uVar1 & 0x12) != 0) {
            local_c = 0.0;
            FUN_0054a330(*(undefined4 *)(iVar2 + 4),&local_c,*(undefined4 *)(iVar2 + 0x18),
                         *(undefined1 *)(iVar2 + 0x1f));
            dVar4 = local_c;
          }
        }
        else {
          local_c = (double)*(longlong *)(iVar2 + 0x10);
          dVar4 = local_c;
        }
      }
      else {
        dVar4 = *(double *)(iVar2 + 8);
      }
      if (dVar4 < 0.0) {
        dVar4 = -dVar4;
      }
      FUN_00574df0(param_1 + 8,dVar4);
      return;
    }
    FUN_0051d2d0();
    return;
  }
  uVar5 = FUN_0051c890(iVar2);
  iVar2 = (int)uVar5;
  if (((longlong)uVar5 < 0x100000000) && ((longlong)uVar5 < 0)) {
    if (iVar2 == 0 && (uVar5 & 0x7fffffff00000000) == 0) {
      *(undefined4 *)(param_1 + 0x38) = 1;
      iVar2 = *(int *)(param_1 + 8);
      if (iVar2 == 0) {
        iVar2 = 1000000000;
      }
      else {
        iVar2 = *(int *)(iVar2 + 0x50);
      }
      iVar3 = 0;
      if (-1 < iVar2) {
        do {
          if ("integer overflow"[iVar3] == '\0') break;
          iVar3 = iVar3 + 1;
        } while (iVar3 <= iVar2);
      }
      if ((iVar3 <= iVar2) && (iVar2 = FUN_005748c0((int *)(param_1 + 8),iVar3 + 1,0), iVar2 == 0))
      {
        memcpy(*(void **)(param_1 + 0xc),"integer overflow",iVar3 + 1);
        *(int *)(param_1 + 0x20) = iVar3;
        *(undefined4 *)(param_1 + 0x24) = 0x1030202;
      }
      return;
    }
    uVar5 = CONCAT44(-((int)(uVar5 >> 0x20) + (uint)(iVar2 != 0)),-iVar2);
  }
  FUN_0051d270(param_1,uVar5);
  return;
}


/* FUN_005259c0 @ 005259c0  kind=lib  attributed-by=lib-island  size=88 */

int FUN_005259c0(byte *param_1,byte *param_2,int param_3)

{
  while (0 < param_3) {
    if ((*param_1 == 0) || ((&DAT_007120d8)[*param_1] != (&DAT_007120d8)[*param_2])) break;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    param_3 = param_3 + -1;
  }
  if (param_3 + -1 < 0) {
    return 0;
  }
  return (uint)(byte)(&DAT_007120d8)[*param_1] - (uint)(byte)(&DAT_007120d8)[*param_2];
}


/* FUN_00525a30 @ 00525a30  kind=lib  attributed-by=lib-island  size=32 */

void FUN_00525a30(undefined4 param_1,undefined4 param_2)

{
  if (DAT_007666c4 != 0) {
    FUN_00545c40(param_1,param_2,&stack0x0000000c);
  }
  return;
}


/* FUN_00525c40 @ 00525c40  kind=lib  attributed-by=lib-island  size=107 */

undefined4 FUN_00525c40(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (param_2 < 1) {
    if (iVar1 != 0) {
      (*DAT_00766630)(iVar1);
    }
    *(undefined4 *)(param_1 + 0xc0) = 0;
    *(undefined4 *)(param_1 + 0xc4) = 0;
  }
  else {
    if (iVar1 != 0) {
      (*DAT_00766630)(iVar1);
    }
    *(code **)(param_1 + 0xc0) = FUN_00577d90;
    *(int *)(param_1 + 0xc4) = param_2;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(param_1 + 0xc));
  }
  return 0;
}


/* FUN_00525cb0 @ 00525cb0  kind=lib  attributed-by=lib-island  size=104 */

uint FUN_00525cb0(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x44);
    if (((iVar1 != 0x4b771290) && (iVar1 != -0x5fd65969)) && (iVar1 != -0xfc486fa)) {
      FUN_00525a30(0x15,"API call with %s database connection pointer","invalid");
      FUN_00525a30(0x15,"misuse at line %d of [%.10s]",0x1bee8,
                   "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
      return 0x15;
    }
    if (*(char *)(param_1 + 0x38) == '\0') {
      return *(uint *)(param_1 + 0x30) & *(uint *)(param_1 + 0x2c);
    }
  }
  return 7;
}


/* FUN_00525e30 @ 00525e30  kind=lib  attributed-by=lib-string  size=214 */

char * FUN_00525e30(int param_1)

{
  int iVar1;
  char *pcVar2;
  
  if (param_1 == 0) {
    return "out of memory";
  }
  iVar1 = *(int *)(param_1 + 0x44);
  if (((iVar1 != 0x4b771290) && (iVar1 != -0x5fd65969)) && (iVar1 != -0xfc486fa)) {
    FUN_00525a30(0x15,"API call with %s database connection pointer","invalid");
    FUN_00525a30(0x15,"misuse at line %d of [%.10s]",0x1bea3,
                 "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
    return "library routine called out of sequence";
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(param_1 + 0xc));
  }
  if (*(char *)(param_1 + 0x38) == '\0') {
    pcVar2 = (char *)FUN_0056bce0(*(undefined4 *)(param_1 + 0xd4),1);
    if (pcVar2 == (char *)0x0) {
      pcVar2 = (char *)FUN_00553860(*(undefined4 *)(param_1 + 0x2c));
    }
  }
  else {
    pcVar2 = "out of memory";
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(param_1 + 0xc));
  }
  return pcVar2;
}


/* FUN_00527080 @ 00527080  kind=lib  attributed-by=lib-island  size=108 */

undefined4 FUN_00527080(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *param_1;
  if ((param_2 < (int)(uint)*(ushort *)(param_1 + 0xb)) && (-1 < param_2)) {
    if (*(int *)(iVar1 + 0xc) != 0) {
      (*DAT_00766630)(*(int *)(iVar1 + 0xc));
    }
    uVar2 = FUN_0056bce0(param_1[4] + param_2 * 0x28,1);
    if (*(char *)(iVar1 + 0x38) != '\0') {
      *(undefined1 *)(iVar1 + 0x38) = 0;
      uVar2 = 0;
    }
    if (*(int *)(iVar1 + 0xc) != 0) {
      (*DAT_00766638)(*(int *)(iVar1 + 0xc));
    }
    return uVar2;
  }
  return 0;
}


/* FUN_00527300 @ 00527300  kind=lib  attributed-by=lib-island  size=618 */

uint FUN_00527300(int *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  char *pcVar8;
  int local_cc [48];
  int local_c;
  int local_8;
  
  piVar3 = param_1;
  if (param_1 == (int *)0x0) {
    pcVar8 = "API called with NULL prepared statement";
  }
  else {
    local_8 = *param_1;
    if (local_8 != 0) {
      if (*(int *)(local_8 + 0xc) != 0) {
        (*DAT_00766630)(*(int *)(local_8 + 0xc));
      }
      piVar3[0x18] = piVar3[0x18] & 0xfffffbff;
      uVar4 = FUN_00567ca0(piVar3);
      iVar5 = 0;
      if (uVar4 == 0x11) {
        while (local_c = iVar5 + 1, iVar5 < 5) {
          if ((piVar3[0x18] & 0x200U) == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = piVar3[0x26];
          }
          iVar1 = *piVar3;
          uVar4 = FUN_0055d830(iVar1,iVar5,0xffffffff,0,piVar3,&param_1,0);
          iVar5 = local_8;
          if (uVar4 != 0) {
            if (uVar4 == 7) {
              *(undefined1 *)(iVar1 + 0x38) = 1;
            }
            if (((piVar3[0x18] & 0x200U) != 0) && (*(int *)(local_8 + 0xd4) != 0)) {
              param_1 = (int *)FUN_0056bce0(*(int *)(local_8 + 0xd4),1);
              FUN_005521a0(iVar5,piVar3[0xd]);
              if (*(char *)(iVar5 + 0x38) == '\0') {
                iVar5 = FUN_00552450(iVar5,param_1);
                piVar3[0xd] = iVar5;
              }
              else {
                piVar3[0xd] = 0;
                uVar4 = 7;
              }
              piVar3[0x16] = uVar4;
            }
            break;
          }
          piVar6 = param_1;
          piVar7 = local_cc;
          for (iVar5 = 0x30; iVar5 != 0; iVar5 = iVar5 + -1) {
            *piVar7 = *piVar6;
            piVar6 = piVar6 + 1;
            piVar7 = piVar7 + 1;
          }
          piVar6 = piVar3;
          piVar7 = param_1;
          for (iVar5 = 0x30; iVar5 != 0; iVar5 = iVar5 + -1) {
            *piVar7 = *piVar6;
            piVar6 = piVar6 + 1;
            piVar7 = piVar7 + 1;
          }
          piVar6 = local_cc;
          piVar7 = piVar3;
          for (iVar5 = 0x30; iVar5 != 0; iVar5 = iVar5 + -1) {
            *piVar7 = *piVar6;
            piVar6 = piVar6 + 1;
            piVar7 = piVar7 + 1;
          }
          iVar5 = param_1[0xf];
          param_1[0xf] = piVar3[0xf];
          piVar3[0xf] = iVar5;
          iVar5 = param_1[0xe];
          param_1[0xe] = piVar3[0xe];
          piVar3[0xe] = iVar5;
          iVar5 = param_1[0x26];
          param_1[0x26] = piVar3[0x26];
          piVar3[0x26] = iVar5;
          piVar3[0x18] = piVar3[0x18] ^ (param_1[0x18] ^ piVar3[0x18]) & 0x200U;
          FUN_005682d0(param_1,piVar3);
          piVar6 = param_1;
          param_1[0x16] = 0;
          if ((param_1[0xc] == -0x420df25d) || (param_1[0xc] == 0x519c2973)) {
            FUN_00575ca0(param_1);
          }
          iVar5 = *piVar6;
          FUN_0056c560(iVar5,piVar6);
          if (piVar6[0xe] == 0) {
            *(int *)(iVar5 + 4) = piVar6[0xf];
          }
          else {
            *(int *)(piVar6[0xe] + 0x3c) = piVar6[0xf];
          }
          if (piVar6[0xf] != 0) {
            *(int *)(piVar6[0xf] + 0x38) = piVar6[0xe];
          }
          piVar6[0xc] = -0x49f93c38;
          *piVar6 = 0;
          FUN_005521a0(iVar5,piVar6);
          FUN_005280f0(piVar3);
          piVar3[0x18] = piVar3[0x18] | 0x400;
          uVar4 = FUN_00567ca0(piVar3);
          iVar5 = local_c;
          if (uVar4 != 0x11) break;
        }
      }
      iVar5 = local_8;
      if ((*(char *)(local_8 + 0x38) != '\0') || (uVar4 == 0xc0a)) {
        FUN_00553890(local_8,7,0);
        *(undefined1 *)(iVar5 + 0x38) = 0;
        uVar4 = 7;
      }
      uVar2 = *(uint *)(iVar5 + 0x30);
      if (*(int *)(iVar5 + 0xc) != 0) {
        (*DAT_00766638)(*(int *)(iVar5 + 0xc));
      }
      return uVar2 & uVar4;
    }
    pcVar8 = "API called with finalized prepared statement";
    local_8 = 0;
  }
  FUN_00525a30(0x15,pcVar8);
  FUN_00525a30(0x15,"misuse at line %d of [%.10s]",0xf350,"c0e09560d26f0a6456be9dd3447f5311eb4f238f"
              );
  return 0x15;
}


/* FUN_00528070 @ 00528070  kind=lib  attributed-by=lib-island  size=115 */

undefined4 FUN_00528070(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar1 = *param_1;
  if (iVar1 == 0) {
    FUN_00525a30(0x15,"API called with finalized prepared statement");
    FUN_00525a30(0x15,"misuse at line %d of [%.10s]",0xf1bd,
                 "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
    return 0x15;
  }
  if (*(int *)(iVar1 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(iVar1 + 0xc));
  }
  uVar2 = FUN_005734d0(param_1);
  uVar2 = FUN_0054a110(iVar1,uVar2);
  FUN_0055d180(iVar1);
  return uVar2;
}


/* FUN_005280f0 @ 005280f0  kind=lib  attributed-by=lib-island  size=191 */

uint FUN_005280f0(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (*(int *)(*param_1 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(*param_1 + 0xc));
  }
  uVar2 = FUN_00575ca0(param_1);
  iVar1 = *param_1;
  param_1[0x15] = -1;
  param_1[0x16] = 0;
  *(undefined2 *)(param_1 + 0x17) = 0xff02;
  param_1[0xc] = -0x420df25d;
  param_1[0x19] = 0;
  param_1[0x14] = 1;
  param_1[0x1c] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  if (iVar1 == 0) {
    uVar3 = 0xff;
  }
  else {
    if ((*(char *)(iVar1 + 0x38) != '\0') || (uVar2 == 0xc0a)) {
      FUN_00553890(iVar1,7,0);
      *(undefined1 *)(iVar1 + 0x38) = 0;
      uVar2 = 7;
    }
    uVar3 = *(uint *)(iVar1 + 0x30);
  }
  if (*(int *)(*param_1 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(*param_1 + 0xc));
  }
  return uVar3 & uVar2;
}


/* FUN_00528920 @ 00528920  kind=lib  attributed-by=lib-island  size=829 */

int FUN_00528920(int param_1,uint param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  FILL unaff_EDI;
  undefined4 uVar7;
  int local_24;
  uint local_20;
  int local_1c;
  int local_18;
  undefined4 *local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  local_14 = *(undefined4 **)(param_1 + 4);
  iVar4 = *(int *)(param_1 + 0x88 + *(short *)(param_1 + 0x5e) * 4);
  local_8 = 0;
  local_20 = iVar4;
  if (*(short *)(param_1 + 0x42) == 0) {
    uVar3 = (uint)*(ushort *)(param_1 + 0x60 + *(short *)(param_1 + 0x5e) * 2);
    FUN_0052eda0(iVar4,(uint)(CONCAT11(*(undefined1 *)(*(int *)(iVar4 + 0x40) + uVar3 * 2),
                                       *(undefined1 *)(*(int *)(iVar4 + 0x40) + 1 + uVar3 * 2)) &
                             *(ushort *)(iVar4 + 0x12)) + *(int *)(iVar4 + 0x38),param_1 + 0x28);
    *(undefined1 *)(param_1 + 0x5a) = 1;
  }
  local_c = (uint)*(ushort *)(param_1 + 0x3c) + *(int *)(param_1 + 0x30);
  if (*(char *)(iVar4 + 2) == '\0') {
    iVar4 = *(int *)(param_1 + 0x28);
  }
  else {
    iVar4 = 0;
  }
  if (((uint)(*(int *)(param_1 + 0x34) + iVar4) < param_2 + param_3) ||
     (iVar4 = 0,
     (uint)(*(int *)(local_20 + 0x38) + local_14[9]) < (uint)*(ushort *)(param_1 + 0x3e) + local_c))
  {
    uVar7 = 0xcbfb;
    goto LAB_00528c42;
  }
  uVar3 = (uint)*(ushort *)(param_1 + 0x3e);
  if (param_2 < uVar3) {
    local_1c = param_3;
    if (uVar3 < param_2 + param_3) {
      local_1c = uVar3 - param_2;
    }
    iVar4 = FUN_00533880(local_c + param_2,param_4,local_1c,param_5,*(undefined4 *)(local_20 + 0x44)
                        );
    param_3 = param_3 - local_1c;
    local_18 = param_4 + local_1c;
    param_2 = 0;
    local_8 = iVar4;
    if (iVar4 != 0) {
      return iVar4;
    }
  }
  else {
    param_2 = param_2 - uVar3;
    local_18 = param_4;
  }
  if (param_3 == 0) {
    return iVar4;
  }
  local_20 = (uint)*(ushort *)(param_1 + 0x3e);
  iVar6 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(local_20 + local_c),
                                     *(undefined1 *)(local_20 + 1 + local_c)),
                            *(undefined1 *)(local_20 + 2 + local_c)),
                   *(undefined1 *)(local_20 + 3 + local_c));
  local_10 = local_14[9] - 4;
  local_c = iVar6;
  if ((*(char *)(param_1 + 0x5c) != '\0') && (*(int *)(param_1 + 0x14) == 0)) {
    uVar3 = ((*(int *)(param_1 + 0x38) - local_20) + -1 + local_10) / local_10;
    pvVar2 = operator_new__(uVar3 * 4,unaff_EDI);
    *(void **)(param_1 + 0x14) = pvVar2;
    iVar4 = local_8;
    if ((uVar3 != 0) && (pvVar2 == (void *)0x0)) {
      iVar4 = 7;
    }
  }
  local_20 = *(int *)(param_1 + 0x14);
  if (local_20 == 0) {
LAB_00528b08:
    uVar3 = 0;
  }
  else {
    uVar3 = param_2 / local_10;
    if (*(int *)(local_20 + uVar3 * 4) == 0) goto LAB_00528b08;
    iVar6 = *(int *)(local_20 + uVar3 * 4);
    param_2 = param_2 % local_10;
    local_c = iVar6;
  }
  if (iVar4 == 0) {
    local_1c = uVar3 << 2;
    iVar5 = param_3;
    uVar3 = param_2;
    while ((iVar5 != 0 && (iVar6 != 0))) {
      if (*(int *)(param_1 + 0x14) != 0) {
        *(int *)(local_1c + *(int *)(param_1 + 0x14)) = iVar6;
        iVar5 = param_3;
      }
      if (uVar3 < local_10) {
        local_20 = iVar5;
        if (local_10 < uVar3 + iVar5) {
          local_20 = local_10 - uVar3;
        }
        local_8 = FUN_0055eb70(*local_14,iVar6,&local_24,0);
        iVar4 = local_24;
        if (local_8 == 0) {
          iVar5 = *(int *)(local_24 + 4);
          iVar6 = FUN_00559fd0(iVar5);
          local_c = iVar6;
          local_8 = FUN_00533880(param_2 + 4 + iVar5,local_18,local_20,param_5,iVar4);
          FUN_005602d0(iVar4);
          uVar3 = 0;
          param_2 = 0;
        }
        iVar5 = param_3 - local_20;
        local_18 = local_18 + local_20;
        iVar4 = local_8;
        param_3 = iVar5;
      }
      else {
        local_20 = *(int *)(param_1 + 0x14);
        if ((local_20 == 0) ||
           (iVar1 = *(int *)(local_1c + 4 + local_20), uVar3 = param_2, iVar1 == 0)) {
          iVar4 = FUN_0053ab00(local_14,iVar6,0,&local_c);
          uVar3 = uVar3 - local_10;
          iVar5 = param_3;
          iVar6 = local_c;
          param_2 = uVar3;
        }
        else {
          uVar3 = param_2 - local_10;
          iVar6 = iVar1;
          param_2 = uVar3;
          local_c = iVar1;
        }
      }
      local_1c = local_1c + 4;
      if (iVar4 != 0) {
        return iVar4;
      }
    }
    if ((iVar4 == 0) && (iVar5 != 0)) {
      uVar7 = 0xcc81;
LAB_00528c42:
      FUN_00525a30(0xb,"database corruption at line %d of [%.10s]",uVar7,
                   "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
      return 0xb;
    }
  }
  return iVar4;
}


/* FUN_00528c60 @ 00528c60  kind=lib  attributed-by=lib-island  size=57 */

char * FUN_00528c60(undefined1 param_1)

{
  switch(param_1) {
  case 6:
    return "RESTRICT";
  case 7:
    return "SET NULL";
  case 8:
    return "SET DEFAULT";
  case 9:
    return "CASCADE";
  default:
    return "NO ACTION";
  }
}


/* FUN_00528cb0 @ 00528cb0  kind=lib  attributed-by=lib-island  size=105 */

void FUN_00528cb0(undefined4 *param_1)

{
  void *_Src;
  size_t _Size;
  undefined4 uVar1;
  void *_Dst;
  
  _Src = (void *)param_1[0x86];
  if ((_Src != (void *)0x0) && (param_1[0x7f] != 0)) {
    _Size = param_1[0x87];
    uVar1 = *param_1;
    _Dst = (void *)FUN_00552230(uVar1,_Size + 1);
    if (_Dst != (void *)0x0) {
      memcpy(_Dst,_Src,_Size);
      *(undefined1 *)((int)_Dst + _Size) = 0;
    }
    FUN_00528d20(uVar1,param_1[0x7f],_Dst);
  }
  return;
}


/* FUN_00528d20 @ 00528d20  kind=lib  attributed-by=lib-island  size=140 */

void FUN_00528d20(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_2 + 0x30);
  *(int *)(param_2 + 0x30) = iVar1 + 1;
  iVar2 = FUN_00552390(param_1,*(undefined4 *)(param_2 + 0x34),(iVar1 + 1) * 4 + 4);
  if (iVar2 == 0) {
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        FUN_005521a0(param_1,*(undefined4 *)(*(int *)(param_2 + 0x34) + iVar2 * 4));
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar1);
    }
    FUN_005521a0(param_1,param_3);
    FUN_005521a0(param_1,*(undefined4 *)(param_2 + 0x34));
    *(undefined4 *)(param_2 + 0x30) = 0;
    *(undefined4 *)(param_2 + 0x34) = 0;
    return;
  }
  *(undefined4 *)(iVar2 + iVar1 * 4) = param_3;
  *(undefined4 *)(iVar2 + 4 + iVar1 * 4) = 0;
  *(int *)(param_2 + 0x34) = iVar2;
  return;
}


/* FUN_00528db0 @ 00528db0  kind=lib  attributed-by=lib-island  size=594 */

uint FUN_00528db0(int param_1,uint param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  uint local_18;
  uint *local_10;
  int local_c;
  int local_8;
  
  local_18 = 0;
  local_8 = 0;
  uVar6 = 0;
  if (0 < *(int *)(param_1 + 0x60)) {
    local_c = 0;
    do {
      if ((param_2 <= *(uint *)(*(int *)(param_1 + 0x5c) + 0x14 + local_c)) &&
         (puVar5 = *(uint **)(*(int *)(param_1 + 0x5c) + 0x10 + local_c), puVar5 != (uint *)0x0)) {
        uVar6 = param_2 - 1;
        if (4000 < *puVar5) {
          do {
            uVar8 = puVar5[2];
            if (uVar8 == 0) break;
            uVar2 = uVar6 / uVar8;
            uVar6 = uVar6 % uVar8;
            if (puVar5[uVar2 + 3] == 0) {
              if (DAT_007665e0 == 0) {
                local_10 = (uint *)(*DAT_00766600)(0x200);
              }
              else {
                if (DAT_0076b488 != 0) {
                  (*DAT_00766630)(DAT_0076b488);
                }
                FUN_0053dcf0(0x200,&local_10);
                if (DAT_0076b488 != 0) {
                  (*DAT_00766638)(DAT_0076b488);
                }
              }
              puVar3 = local_10;
              if (local_10 != (uint *)0x0) {
                memset(local_10,0,0x200);
                *puVar3 = uVar8;
              }
              puVar5[uVar2 + 3] = (uint)puVar3;
              if (puVar3 == (uint *)0x0) goto LAB_00528f36;
            }
            puVar5 = (uint *)puVar5[uVar2 + 3];
          } while (4000 < *puVar5);
          if (4000 < *puVar5) {
            uVar2 = uVar6 % 0x7d;
            uVar6 = uVar6 + 1;
            uVar8 = puVar5[uVar2 + 3];
            if (uVar8 == 0) {
              uVar8 = puVar5[1];
              if (0x7b < uVar8) goto LAB_00528f18;
            }
            else {
              do {
                if (uVar8 == uVar6) goto LAB_00528ffc;
                uVar2 = uVar2 + 1 & -(uint)(uVar2 + 1 < 0x7d);
                uVar8 = puVar5[uVar2 + 3];
              } while (uVar8 != 0);
LAB_00528f18:
              uVar8 = puVar5[1];
              if (0x3d < uVar8) {
                puVar3 = (uint *)FUN_0055da00(500);
                if (puVar3 == (uint *)0x0) {
LAB_00528f36:
                  local_18 = local_18 | 7;
                }
                else {
                  puVar7 = puVar5 + 3;
                  puVar9 = puVar3;
                  for (iVar4 = 0x7d; iVar4 != 0; iVar4 = iVar4 + -1) {
                    *puVar9 = *puVar7;
                    puVar7 = puVar7 + 1;
                    puVar9 = puVar9 + 1;
                  }
                  memset(puVar5 + 3,0,500);
                  puVar5[2] = (*puVar5 + 0x7c) / 0x7d;
                  uVar6 = FUN_0054c100(puVar5,uVar6);
                  uVar8 = 0;
                  do {
                    if (puVar3[uVar8] != 0) {
                      uVar2 = FUN_0054c100(puVar5,puVar3[uVar8]);
                      uVar6 = uVar6 | uVar2;
                    }
                    uVar8 = uVar8 + 1;
                  } while (uVar8 < 0x7d);
                  FUN_00524410(puVar3);
                  local_18 = local_18 | uVar6;
                }
                goto LAB_00528ffc;
              }
            }
            puVar5[1] = uVar8 + 1;
            puVar5[uVar2 + 3] = uVar6;
            goto LAB_00528ffc;
          }
        }
        pbVar1 = (byte *)((uVar6 >> 3) + 0xc + (int)puVar5);
        *pbVar1 = *pbVar1 | '\x01' << ((byte)uVar6 & 7);
      }
LAB_00528ffc:
      local_8 = local_8 + 1;
      local_c = local_c + 0x30;
      uVar6 = local_18;
    } while (local_8 < *(int *)(param_1 + 0x60));
  }
  return uVar6;
}


/* FUN_00529020 @ 00529020  kind=lib  attributed-by=lib-island  size=186 */

void FUN_00529020(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,int param_7,undefined4 *param_8)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *_Dst;
  
  iVar1 = *param_1;
  uVar2 = FUN_005511c0(iVar1,param_2,param_3,param_4);
  iVar3 = FUN_005511c0(iVar1,param_2,param_5,param_6);
  _Dst = (undefined1 *)FUN_00552230(*param_1,0x2c);
  if (_Dst != (undefined1 *)0x0) {
    memset(_Dst,0,0x2c);
    *_Dst = 0x4c;
    *(undefined2 *)(_Dst + 0x1e) = 0xffff;
    *(undefined4 *)(_Dst + 0x14) = 1;
  }
  FUN_005540d0(*param_1,_Dst,uVar2,iVar3);
  if (_Dst != (undefined1 *)0x0) {
    if (*(int *)(*param_1 + 0x5c) < *(int *)(_Dst + 0x14)) {
      FUN_00553950(param_1,"Expression tree is too large (maximum depth %d)",
                   *(int *)(*param_1 + 0x5c));
    }
    if (param_7 != 0) {
      *(ushort *)(_Dst + 2) = *(ushort *)(_Dst + 2) | 1;
      *(undefined2 *)(_Dst + 0x20) = *(undefined2 *)(iVar3 + 0x18);
    }
  }
  uVar2 = FUN_00553d70(iVar1,*param_8,_Dst);
  *param_8 = uVar2;
  return;
}


/* FUN_00529110 @ 00529110  kind=lib  attributed-by=lib-island  size=1907 */

int FUN_00529110(undefined4 *param_1,int *param_2,uint *param_3,uint param_4,char param_5)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  uint *puVar3;
  undefined3 uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  int local_2c;
  uint local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  char local_5;
  
  iVar10 = 0;
  local_14 = param_1[3];
  local_1c = param_1[0xb];
  iVar6 = *(int *)(local_14 + 0x38);
  uVar11 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar6 + 0x24),*(undefined1 *)(iVar6 + 0x25)),
                             *(undefined1 *)(iVar6 + 0x26)),*(undefined1 *)(iVar6 + 0x27));
  if (local_1c <= uVar11) {
    FUN_00525a30(0xb,"database corruption at line %d of [%.10s]",0xcfcc,
                 "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
    return 0xb;
  }
  if (uVar11 == 0) {
    iVar6 = FUN_00560330(*(undefined4 *)(local_14 + 0x44));
    if (iVar6 != 0) {
      return iVar6;
    }
    uVar11 = DAT_007666d0 / (uint)param_1[8];
    param_1[0xb] = param_1[0xb] + 1;
    if (param_1[0xb] == uVar11 + 1) {
      param_1[0xb] = param_1[0xb] + 1;
    }
    if (*(char *)((int)param_1 + 0x11) != '\0') {
      iVar6 = param_1[0xb];
      iVar10 = FUN_00544710(param_1,iVar6);
      if (iVar10 == iVar6) {
        local_28 = 0;
        iVar6 = FUN_0052e950(param_1,iVar6,&local_28,1);
        uVar11 = local_28;
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = FUN_00560330(*(undefined4 *)(local_28 + 0x44));
        FUN_00545740(uVar11);
        if (iVar6 != 0) {
          return iVar6;
        }
        uVar11 = DAT_007666d0 / (uint)param_1[8];
        param_1[0xb] = param_1[0xb] + 1;
        if (param_1[0xb] == uVar11 + 1) {
          param_1[0xb] = param_1[0xb] + 1;
        }
      }
    }
    uVar13 = param_1[0xb];
    iVar6 = *(int *)(param_1[3] + 0x38);
    *(char *)(iVar6 + 0x1c) = (char)((uint)uVar13 >> 0x18);
    *(char *)(iVar6 + 0x1d) = (char)((uint)uVar13 >> 0x10);
    *(char *)(iVar6 + 0x1e) = (char)((uint)uVar13 >> 8);
    *(char *)(iVar6 + 0x1f) = (char)uVar13;
    uVar11 = param_1[0xb];
    *param_3 = uVar11;
    iVar6 = FUN_0052e950(param_1,uVar11,param_2,1);
    if (iVar6 != 0) {
      return iVar6;
    }
    iVar6 = FUN_00560330(*(undefined4 *)(*param_2 + 0x44));
    if (iVar6 == 0) goto LAB_0052981d;
    FUN_00545740(*param_2);
  }
  else {
    local_c = local_c & 0xffffff00;
    if ((param_5 != '\0') && (param_4 <= local_1c)) {
      iVar6 = FUN_005445e0(param_1,param_4,&local_5,0);
      if (iVar6 != 0) {
        return iVar6;
      }
      local_c = local_c & 0xff;
      if (local_5 == '\x02') {
        local_c = 1;
      }
      *param_3 = param_4;
    }
    iVar6 = FUN_00560330(*(undefined4 *)(local_14 + 0x44));
    if (iVar6 != 0) {
      return iVar6;
    }
    iVar6 = uVar11 - 1;
    iVar7 = *(int *)(local_14 + 0x38);
    *(char *)(iVar7 + 0x24) = (char)((uint)iVar6 >> 0x18);
    *(char *)(iVar7 + 0x25) = (char)((uint)iVar6 >> 0x10);
    *(char *)(iVar7 + 0x26) = (char)((uint)iVar6 >> 8);
    *(char *)(iVar7 + 0x27) = (char)iVar6;
    do {
      if (iVar10 == 0) {
        iVar6 = *(int *)(local_14 + 0x38);
        uVar4 = CONCAT21(CONCAT11(*(undefined1 *)(iVar6 + 0x20),*(undefined1 *)(iVar6 + 0x21)),
                         *(undefined1 *)(iVar6 + 0x22));
        uVar2 = *(undefined1 *)(iVar6 + 0x23);
      }
      else {
        puVar9 = *(undefined1 **)(iVar10 + 0x38);
        uVar4 = CONCAT21(CONCAT11(*puVar9,puVar9[1]),puVar9[2]);
        uVar2 = puVar9[3];
      }
      uVar11 = CONCAT31(uVar4,uVar2);
      local_18 = iVar10;
      if (local_1c < uVar11) {
        FUN_00525a30(0xb,"database corruption at line %d of [%.10s]",0xcff9,
                     "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
        iVar6 = 0xb;
        goto LAB_005296d1;
      }
      iVar6 = FUN_0055eb70(*param_1,uVar11,&local_2c,0);
      if (iVar6 != 0) goto LAB_005296d1;
      iVar10 = *(int *)(local_2c + 8);
      *(undefined4 *)(iVar10 + 0x38) = *(undefined4 *)(local_2c + 4);
      *(undefined4 **)(iVar10 + 0x34) = param_1;
      *(byte *)(iVar10 + 5) = (uVar11 != 1) - 1U & 100;
      local_10 = *(int *)(iVar10 + 0x38);
      *(int *)(iVar10 + 0x44) = local_2c;
      *(uint *)(iVar10 + 0x48) = uVar11;
      local_20 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(local_10 + 4),
                                            *(undefined1 *)(local_10 + 5)),
                                   *(undefined1 *)(local_10 + 6)),*(undefined1 *)(local_10 + 7));
      if ((local_20 == 0) && ((char)local_c == '\0')) {
        iVar6 = FUN_00560330(local_2c);
        if (iVar6 == 0) {
          *param_3 = uVar11;
          *(undefined4 *)(*(int *)(local_14 + 0x38) + 0x20) = **(undefined4 **)(iVar10 + 0x38);
          *param_2 = iVar10;
          iVar10 = 0;
          goto LAB_005295f6;
        }
        break;
      }
      if (((uint)param_1[9] >> 2) - 2 < local_20) {
        uVar13 = 0xd015;
LAB_00529671:
        FUN_00525a30(0xb,"database corruption at line %d of [%.10s]",uVar13,
                     "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
        iVar6 = 0xb;
        break;
      }
      if (((char)local_c == '\0') || (param_4 != uVar11)) {
        if (local_20 != 0) {
          if (param_4 == 0) {
LAB_00529500:
            uVar12 = 0;
          }
          else {
            local_28 = 0;
            iVar7 = FUN_00559fd0(local_10 + 8);
            iVar7 = FUN_00548fe0(iVar7 - param_4);
            uVar11 = 1;
            if (local_20 < 2) goto LAB_00529500;
            puVar9 = (undefined1 *)(local_10 + 0xe);
            do {
              iVar8 = CONCAT31(CONCAT21(CONCAT11(puVar9[-2],puVar9[-1]),*puVar9),puVar9[1]) -
                      param_4;
              if (iVar8 < 0) {
                if (iVar8 == -0x80000000) {
                  iVar8 = 0x7fffffff;
                }
                else {
                  iVar8 = -iVar8;
                }
              }
              if (iVar8 < iVar7) {
                iVar7 = iVar8;
                local_28 = uVar11;
              }
              uVar11 = uVar11 + 1;
              puVar9 = puVar9 + 4;
              uVar12 = local_28;
            } while (uVar11 < local_20);
          }
          uVar11 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(local_10 + 8 + uVar12 * 4),
                                              *(undefined1 *)(local_10 + 9 + uVar12 * 4)),
                                     *(undefined1 *)(local_10 + 10 + uVar12 * 4)),
                            *(undefined1 *)(local_10 + 0xb + uVar12 * 4));
          if (local_1c < uVar11) {
            uVar13 = 0xd06c;
            goto LAB_00529671;
          }
          if (((char)local_c == '\0') || (uVar11 == param_4)) {
            *param_3 = uVar11;
            iVar6 = FUN_00560330(*(undefined4 *)(iVar10 + 0x44));
            if (iVar6 != 0) break;
            uVar11 = local_20 - 1;
            if (uVar12 < uVar11) {
              *(undefined4 *)(local_10 + 8 + uVar12 * 4) =
                   *(undefined4 *)(local_10 + 4 + local_20 * 4);
            }
            *(char *)(local_10 + 4) = (char)(uVar11 >> 0x18);
            *(char *)(local_10 + 5) = (char)(uVar11 >> 0x10);
            *(char *)(local_10 + 6) = (char)(uVar11 >> 8);
            *(char *)(local_10 + 7) = (char)uVar11;
            uVar11 = *param_3;
            puVar3 = (uint *)param_1[0xf];
            if ((puVar3 == (uint *)0x0) ||
               ((uVar11 <= *puVar3 && (iVar6 = FUN_0054c2e0(puVar3,uVar11), iVar6 == 0)))) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            iVar6 = FUN_0052e950(param_1,uVar11,param_2,!bVar5);
            if ((iVar6 == 0) && (iVar6 = FUN_00560330(*(undefined4 *)(*param_2 + 0x44)), iVar6 != 0)
               ) {
              FUN_00545740(*param_2);
            }
            local_c = local_c & 0xffffff00;
          }
        }
      }
      else {
        local_c = local_c & 0xffffff00;
        *param_2 = iVar10;
        iVar6 = FUN_00560330(*(undefined4 *)(iVar10 + 0x44));
        iVar7 = local_18;
        uVar11 = local_20;
        if (iVar6 != 0) break;
        if (local_20 == 0) {
          if (local_18 == 0) {
            puVar1 = (undefined4 *)(iVar10 + 0x38);
            iVar10 = 0;
            *(undefined4 *)(*(int *)(local_14 + 0x38) + 0x20) = *(undefined4 *)*puVar1;
          }
          else {
            iVar6 = FUN_00560330(*(undefined4 *)(local_18 + 0x44));
            if (iVar6 != 0) break;
            **(undefined4 **)(iVar7 + 0x38) = **(undefined4 **)(iVar10 + 0x38);
            iVar10 = 0;
          }
        }
        else {
          local_20 = FUN_00559fd0(*(int *)(iVar10 + 0x38) + 8);
          if (local_1c < local_20) {
            iVar6 = FUN_00551190(0xd035);
            break;
          }
          iVar6 = FUN_0052e950(param_1,local_20,&local_24,0);
          if (iVar6 != 0) break;
          iVar6 = FUN_00560330(*(undefined4 *)(local_24 + 0x44));
          if (iVar6 != 0) {
            FUN_00545740(local_24);
            break;
          }
          **(undefined4 **)(local_24 + 0x38) = **(undefined4 **)(iVar10 + 0x38);
          FUN_00563650(*(int *)(local_24 + 0x38) + 4,uVar11 - 1);
          iVar7 = local_24;
          memcpy((void *)(*(int *)(local_24 + 0x38) + 8),(void *)(*(int *)(iVar10 + 0x38) + 0xc),
                 (uVar11 - 1) * 4);
          FUN_00545740(iVar7);
          iVar7 = local_18;
          if (local_18 == 0) {
            FUN_00563650(*(int *)(local_14 + 0x38) + 0x20,local_20);
            iVar10 = 0;
          }
          else {
            iVar6 = FUN_00560330(*(undefined4 *)(local_18 + 0x44));
            if (iVar6 != 0) break;
            FUN_00563650(*(undefined4 *)(iVar7 + 0x38),local_20);
            iVar10 = 0;
          }
        }
      }
LAB_005295f6:
      if ((local_18 != 0) && (iVar7 = *(int *)(local_18 + 0x44), iVar7 != 0)) {
        iVar8 = *(int *)(iVar7 + 0x10);
        FUN_00561130(iVar7);
        if (*(int *)(*(int *)(iVar8 + 0xb4) + 0xc) == 0) {
          FUN_00541a10(iVar8);
        }
      }
      local_18 = 0;
    } while ((char)local_c != '\0');
    if ((iVar10 != 0) && (iVar10 = *(int *)(iVar10 + 0x44), iVar10 != 0)) {
      iVar7 = *(int *)(iVar10 + 0x10);
      FUN_00561130(iVar10);
      if (*(int *)(*(int *)(iVar7 + 0xb4) + 0xc) == 0) {
        FUN_00541a10(iVar7);
      }
    }
LAB_005296d1:
    if ((local_18 != 0) && (iVar10 = *(int *)(local_18 + 0x44), iVar10 != 0)) {
      iVar7 = *(int *)(iVar10 + 0x10);
      FUN_00561130(iVar10);
      if (*(int *)(*(int *)(iVar7 + 0xb4) + 0xc) == 0) {
        FUN_00541a10(iVar7);
      }
    }
  }
  if (iVar6 != 0) {
    *param_2 = 0;
    return iVar6;
  }
LAB_0052981d:
  puVar9 = (undefined1 *)*param_2;
  iVar6 = *(int *)(puVar9 + 0x44);
  if (*(short *)(iVar6 + 0x1a) < 2) {
    *puVar9 = 0;
    return 0;
  }
  if ((puVar9 != (undefined1 *)0x0) && (iVar6 != 0)) {
    iVar10 = *(int *)(iVar6 + 0x10);
    FUN_00561130(iVar6);
    if (*(int *)(*(int *)(iVar10 + 0xb4) + 0xc) == 0) {
      FUN_00541a10(iVar10);
    }
  }
  FUN_00525a30(0xb,"database corruption at line %d of [%.10s]",0xd0ba,
               "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
  return 0xb;
}


/* FUN_00529890 @ 00529890  kind=lib  attributed-by=lib-island  size=210 */

undefined4 * FUN_00529890(int param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *_Dst;
  int iVar4;
  void *_Dst_00;
  
  iVar2 = param_2 * 4;
  iVar1 = *(int *)(param_1 + 8) + (*(int *)(param_1 + 0x18) - param_2) * 0x28;
  iVar3 = param_3 * 8 + 0x68;
  iVar4 = *(int *)(iVar2 + *(int *)(param_1 + 0x40));
  if (iVar4 != 0) {
    FUN_00573650(param_1,iVar4);
    *(undefined4 *)(iVar2 + *(int *)(param_1 + 0x40)) = 0;
  }
  iVar4 = FUN_005748c0(iVar1,(-(uint)(param_5 != 0) & 0xd8) + iVar3,0);
  if (iVar4 == 0) {
    _Dst = *(undefined4 **)(iVar1 + 4);
    *(undefined4 **)(iVar2 + *(int *)(param_1 + 0x40)) = _Dst;
    memset(_Dst,0,0x68);
    _Dst[3] = param_4;
    _Dst[5] = param_3;
    if (param_3 != 0) {
      _Dst[0x16] = *(int *)(iVar1 + 4) + 0x68;
    }
    if (param_5 != 0) {
      _Dst_00 = (void *)(*(int *)(iVar1 + 4) + iVar3);
      *_Dst = _Dst_00;
      memset(_Dst_00,0,0x5e);
    }
    return _Dst;
  }
  return (undefined4 *)0x0;
}


/* FUN_00529970 @ 00529970  kind=lib  attributed-by=lib-string  size=363 */

int * FUN_00529970(undefined4 *param_1)

{
  size_t _Size;
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  byte *pbVar5;
  int *_Dst;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  int iVar11;
  int iVar12;
  int local_c;
  
  puVar3 = (undefined4 *)*param_1;
  iVar8 = param_1[2];
  iVar11 = param_1[1];
  piVar4 = (int *)param_1[8];
  iVar6 = *(int *)(iVar11 + 0x18);
  iVar12 = 0;
  if (0 < iVar6) {
    pbVar5 = (byte *)(*(int *)(iVar11 + 0x20) + 0x10);
    do {
      if ((*(int *)(pbVar5 + -8) == *(int *)(iVar8 + 0x2c)) && ((*pbVar5 & 0x81) == 0)) {
        iVar12 = iVar12 + 1;
      }
      pbVar5 = pbVar5 + 0x28;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  local_c = 0;
  if (piVar4 != (int *)0x0) {
    iVar6 = *piVar4;
    iVar7 = 0;
    if (0 < iVar6) {
      puVar9 = (undefined4 *)piVar4[2];
      do {
        if ((*(char *)*puVar9 != -0x68) ||
           (*(int *)((char *)*puVar9 + 0x18) != *(int *)(iVar8 + 0x2c))) break;
        iVar7 = iVar7 + 1;
        puVar9 = puVar9 + 5;
      } while (iVar7 < iVar6);
    }
    local_c = 0;
    if (iVar7 == iVar6) {
      local_c = iVar6;
    }
  }
  _Size = iVar12 * 0x14 + 0x30 + local_c * 8;
  _Dst = (int *)FUN_00552230(*puVar3,_Size);
  if (_Dst == (int *)0x0) {
    FUN_00553950(puVar3,"out of memory");
    return (int *)0x0;
  }
  memset(_Dst,0,_Size);
  *_Dst = iVar12;
  piVar1 = _Dst + 0xc + iVar12 * 3;
  _Dst[2] = local_c;
  _Dst[4] = (int)(piVar1 + local_c * 2);
  _Dst[1] = (int)(_Dst + 0xc);
  _Dst[3] = (int)piVar1;
  iVar6 = 0;
  if (0 < *(int *)(iVar11 + 0x18)) {
    pbVar5 = (byte *)(*(int *)(iVar11 + 0x20) + 0x10);
    pbVar10 = (byte *)(_Dst + 0xd);
    do {
      if ((*(int *)(pbVar5 + -8) == *(int *)(iVar8 + 0x2c)) && ((*pbVar5 & 0x81) == 0)) {
        *(undefined4 *)(pbVar10 + -4) = *(undefined4 *)(pbVar5 + -4);
        *(int *)(pbVar10 + 4) = iVar6;
        *pbVar10 = *pbVar5;
        pbVar10 = pbVar10 + 0xc;
      }
      iVar6 = iVar6 + 1;
      pbVar5 = pbVar5 + 0x28;
    } while (iVar6 < *(int *)(iVar11 + 0x18));
  }
  iVar8 = 0;
  if (0 < local_c) {
    iVar11 = 0;
    do {
      iVar8 = iVar8 + 1;
      piVar2 = (int *)(piVar4[2] + iVar11);
      iVar11 = iVar11 + 0x14;
      piVar1[iVar8 * 2 + -2] = (int)*(short *)(*piVar2 + 0x1c);
      *(undefined1 *)(piVar1 + iVar8 * 2 + -1) = *(undefined1 *)(piVar4[2] + -8 + iVar11);
    } while (iVar8 < local_c);
  }
  return _Dst;
}


/* FUN_00529ae0 @ 00529ae0  kind=lib  attributed-by=lib-island  size=482 */

int FUN_00529ae0(int param_1,int param_2,int *param_3)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint local_8;
  
  uVar7 = (uint)*(byte *)(param_1 + 5);
  iVar5 = *(int *)(param_1 + 0x38);
  iVar3 = *(int *)(*(int *)(param_1 + 0x34) + 0x24);
  bVar2 = *(byte *)(iVar5 + 7 + uVar7);
  iVar6 = iVar5 + uVar7;
  uVar1 = (uint)*(ushort *)(param_1 + 0xc) + (uint)*(ushort *)(param_1 + 0x10) * 2;
  uVar4 = (CONCAT11(*(undefined1 *)(iVar6 + 5),*(undefined1 *)(iVar6 + 6)) - 1 & 0xffff) + 1;
  if (uVar4 < uVar1) {
    FUN_00525a30(0xb,"database corruption at line %d of [%.10s]",0xc14c,
                 "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
    return 0xb;
  }
  if (bVar2 < 0x3c) {
    if (uVar1 + 2 <= uVar4) {
      uVar8 = (uint)CONCAT11(*(undefined1 *)(uVar7 + 1 + iVar5),*(undefined1 *)(uVar7 + 2 + iVar5));
      if (uVar8 != 0) {
        local_8 = uVar7 + 1;
        do {
          uVar7 = uVar8;
          if ((iVar3 + -4 < (int)uVar7) || (uVar7 < local_8 + 4)) {
            FUN_00525a30(0xb,"database corruption at line %d of [%.10s]",0xc15f,
                         "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
            return 0xb;
          }
          uVar8 = (uint)CONCAT11(*(undefined1 *)(uVar7 + 2 + iVar5),
                                 *(undefined1 *)(uVar7 + 3 + iVar5));
          if (param_2 <= (int)uVar8) {
            param_2 = uVar8 - param_2;
            if (param_2 < 4) {
              *(undefined2 *)(local_8 + iVar5) = *(undefined2 *)(uVar7 + iVar5);
              *(byte *)(iVar6 + 7) = bVar2 + (char)param_2;
              *param_3 = param_2 + uVar7;
              return 0;
            }
            if (iVar3 < (int)(uVar8 + uVar7)) {
              iVar6 = FUN_00551190(0xc16c);
              return iVar6;
            }
            *(char *)(uVar7 + 2 + iVar5) = (char)((uint)param_2 >> 8);
            *(char *)(uVar7 + 3 + iVar5) = (char)param_2;
            *param_3 = param_2 + uVar7;
            return 0;
          }
          uVar8 = (uint)CONCAT11(*(undefined1 *)(uVar7 + iVar5),*(undefined1 *)(uVar7 + 1 + iVar5));
          local_8 = uVar7;
        } while (uVar8 != 0);
      }
    }
  }
  else {
    iVar5 = FUN_00533f40(param_1);
    if (iVar5 != 0) {
      return iVar5;
    }
    uVar4 = (CONCAT11(*(undefined1 *)(iVar6 + 5),*(undefined1 *)(iVar6 + 6)) - 1 & 0xffff) + 1;
  }
  if ((int)uVar4 < (int)(uVar1 + 2 + param_2)) {
    iVar5 = FUN_00533f40(param_1);
    if (iVar5 != 0) {
      return iVar5;
    }
    uVar4 = (CONCAT11(*(undefined1 *)(iVar6 + 5),*(undefined1 *)(iVar6 + 6)) - 1 & 0xffff) + 1;
  }
  param_2 = uVar4 - param_2;
  *(char *)(iVar6 + 5) = (char)((uint)param_2 >> 8);
  *(char *)(iVar6 + 6) = (char)param_2;
  *param_3 = param_2;
  return 0;
}


/* FUN_00529cd0 @ 00529cd0  kind=lib  attributed-by=lib-island  size=30 */

void FUN_00529cd0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x50) == 0) {
    uVar1 = FUN_00543f40(*(undefined4 *)(param_1 + 0x20));
    *(undefined4 *)(param_1 + 0x50) = uVar1;
  }
  return;
}


/* FUN_0052a0c0 @ 0052a0c0  kind=lib  attributed-by=lib-island  size=388 */

void FUN_0052a0c0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  
  iVar1 = *(int *)(*(int *)(*param_1 + 0x10) + 0xc + param_2 * 0x10);
  piVar4 = param_1;
  if ((int *)param_1[0x6c] != (int *)0x0) {
    piVar4 = (int *)param_1[0x6c];
  }
  FUN_00550aa0(param_1,param_2);
  piVar4[0x55] = piVar4[0x55] | 1 << ((byte)param_2 & 0x1f);
  iVar5 = param_1[0x12];
  param_1[0x12] = iVar5 + 3;
  FUN_00540ff0(param_1,param_2,iVar5,0,0);
  iVar2 = param_1[0x13];
  for (puVar3 = *(undefined4 **)(iVar1 + 0x10); puVar3 != (undefined4 *)0x0;
      puVar3 = (undefined4 *)*puVar3) {
    FUN_0052a250(param_1,puVar3[2],0,iVar5,iVar2 + 1);
  }
  piVar4 = (int *)param_1[2];
  if (piVar4 == (int *)0x0) {
    iVar1 = *param_1;
    piVar4 = (int *)FUN_00552230(iVar1,0xc0);
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      memset(piVar4,0,0xc0);
      *piVar4 = iVar1;
      if (*(int *)(iVar1 + 4) != 0) {
        *(int **)(*(int *)(iVar1 + 4) + 0x38) = piVar4;
      }
      piVar4[0xf] = *(int *)(iVar1 + 4);
      piVar4[0xe] = 0;
      *(int **)(iVar1 + 4) = piVar4;
      piVar4[0xc] = 0x26bceaa5;
    }
    param_1[2] = (int)piVar4;
    if (piVar4 == (int *)0x0) {
      return;
    }
    iVar1 = piVar4[7];
    if ((iVar1 < piVar4[8]) || (iVar5 = FUN_0053b4b0(piVar4), iVar5 == 0)) {
      iVar5 = piVar4[1];
      piVar4[7] = piVar4[7] + 1;
      *(undefined2 *)(iVar5 + iVar1 * 0x14) = 0x94;
      *(undefined1 *)(iVar5 + 3 + iVar1 * 0x14) = 0;
      *(undefined4 *)(iVar5 + 4 + iVar1 * 0x14) = 0;
      *(undefined4 *)(iVar5 + 8 + iVar1 * 0x14) = 0;
      *(undefined4 *)(iVar5 + 0xc + iVar1 * 0x14) = 0;
      *(undefined4 *)(iVar5 + 0x10 + iVar1 * 0x14) = 0;
    }
  }
  iVar1 = piVar4[7];
  if ((iVar1 < piVar4[8]) || (iVar5 = FUN_0053b4b0(piVar4), iVar5 == 0)) {
    iVar5 = piVar4[1];
    piVar4[7] = piVar4[7] + 1;
    *(undefined2 *)(iVar5 + iVar1 * 0x14) = 0x6b;
    *(undefined1 *)(iVar5 + 3 + iVar1 * 0x14) = 0;
    *(int *)(iVar5 + 4 + iVar1 * 0x14) = param_2;
    *(undefined4 *)(iVar5 + 8 + iVar1 * 0x14) = 0;
    *(undefined4 *)(iVar5 + 0xc + iVar1 * 0x14) = 0;
    *(undefined4 *)(iVar5 + 0x10 + iVar1 * 0x14) = 0;
  }
  return;
}


/* FUN_0052a250 @ 0052a250  kind=lib  attributed-by=lib-island  size=4762 */

void FUN_0052a250(int *param_1,int *param_2,undefined4 *param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined4 uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  void *pvVar22;
  int iVar23;
  uint uVar24;
  uint *puVar25;
  int iVar26;
  int iVar27;
  char *pcVar28;
  int iVar30;
  uint local_30;
  int local_20;
  uint local_1c;
  int local_8;
  char *pcVar29;
  
  iVar1 = param_5 + 2;
  iVar9 = param_5 + 4;
  iVar10 = param_5 + 5;
  piVar13 = (int *)param_1[2];
  iVar6 = *param_1;
  iVar11 = param_5 + 6;
  iVar12 = param_5 + 7;
  local_1c = 0xffffffff;
  if (piVar13 == (int *)0x0) {
    piVar13 = (int *)FUN_0056c7b0(iVar6);
    param_1[2] = (int)piVar13;
    if (piVar13 == (int *)0x0) {
      return;
    }
    FUN_0056bdc0(piVar13,0x94);
  }
  if (((param_2 != (int *)0x0) && (param_2[8] != 0)) &&
     ((piVar7 = (int *)*param_2, *piVar7 != 0x696c7173 ||
      (((short)piVar7[1] != 0x6574 || (*(char *)((int)piVar7 + 6) != '_')))))) {
    iVar14 = FUN_00565260(iVar6,param_2[0x10]);
    iVar15 = FUN_0054ab50(param_1,0x1c,piVar7,0,
                          *(undefined4 *)(*(int *)(iVar6 + 0x10) + iVar14 * 0x10));
    if (iVar15 == 0) {
      FUN_005681e0(param_1,iVar14,param_2[8],0,*param_2);
      iVar15 = param_1[0x12];
      param_1[0x12] = iVar15 + 1;
      FUN_0056bf50(piVar13,0x5e,0,param_5,0,*param_2,0);
      for (puVar8 = (undefined4 *)param_2[2]; puVar8 != (undefined4 *)0x0;
          puVar8 = (undefined4 *)puVar8[5]) {
        local_30 = 0;
        if ((param_3 == (undefined4 *)0x0) || (param_3 == puVar8)) {
          iVar30 = puVar8[9];
          iVar16 = FUN_00552230(iVar6,iVar30 * 4);
          if (iVar16 != 0) {
            uVar17 = FUN_0055b2a0(param_1,puVar8);
            iVar23 = iVar12 + iVar30 * 2 + 1;
            if (param_1[0x13] < iVar23) {
              param_1[0x13] = iVar23;
            }
            FUN_0056bf50(piVar13,0x27,iVar15,puVar8[10],iVar14,uVar17,0xfffffff0);
            FUN_0056bf50(piVar13,0x5e,0,param_5 + 1,0,*puVar8,0);
            iVar23 = 0;
            if (-1 < iVar30) {
              do {
                FUN_0056be90(piVar13,7,0,iVar12 + iVar23);
                iVar23 = iVar23 + 1;
              } while (iVar23 <= iVar30);
            }
            iVar23 = 0;
            if (0 < iVar30) {
              do {
                iVar26 = piVar13[7];
                if ((iVar26 < piVar13[8]) || (iVar18 = FUN_0053b4b0(piVar13), iVar18 == 0)) {
                  piVar13[7] = piVar13[7] + 1;
                  puVar2 = (undefined2 *)(piVar13[1] + iVar26 * 0x14);
                  *puVar2 = 10;
                  *(undefined1 *)((int)puVar2 + 3) = 0;
                  *(undefined4 *)(puVar2 + 2) = 0;
                  *(int *)(puVar2 + 4) = iVar23 + iVar30 + param_5 + 8;
                  *(undefined4 *)(puVar2 + 6) = 0;
                  *(undefined4 *)(puVar2 + 8) = 0;
                }
                iVar23 = iVar23 + 1;
              } while (iVar23 < iVar30);
            }
            uVar21 = piVar13[9];
            piVar13[9] = uVar21 + 1;
            if ((uVar21 & uVar21 - 1) == 0) {
              iVar23 = piVar13[10];
              iVar26 = *piVar13;
              iVar18 = FUN_00552390(iVar26,iVar23,uVar21 * 8 + 4);
              if (iVar18 == 0) {
                FUN_005521a0(iVar26,iVar23);
              }
              piVar13[10] = iVar18;
            }
            if (piVar13[10] != 0) {
              *(undefined4 *)(piVar13[10] + uVar21 * 4) = 0xffffffff;
            }
            iVar26 = -1 - uVar21;
            iVar23 = piVar13[7];
            if ((iVar23 < piVar13[8]) || (iVar18 = FUN_0053b4b0(piVar13), iVar18 == 0)) {
              iVar18 = piVar13[1];
              piVar13[7] = piVar13[7] + 1;
              *(undefined2 *)(iVar18 + iVar23 * 0x14) = 0x48;
              *(undefined1 *)(iVar18 + 3 + iVar23 * 0x14) = 0;
              *(int *)(iVar18 + 4 + iVar23 * 0x14) = iVar15;
              *(int *)(iVar18 + 8 + iVar23 * 0x14) = iVar26;
              *(undefined4 *)(iVar18 + 0xc + iVar23 * 0x14) = 0;
              *(undefined4 *)(iVar18 + 0x10 + iVar23 * 0x14) = 0;
            }
            iVar23 = piVar13[7];
            if ((iVar23 < piVar13[8]) || (iVar18 = FUN_0053b4b0(piVar13), iVar18 == 0)) {
              iVar18 = piVar13[1];
              piVar13[7] = piVar13[7] + 1;
              *(undefined2 *)(iVar18 + iVar23 * 0x14) = 0x14;
              *(undefined1 *)(iVar18 + 3 + iVar23 * 0x14) = 0;
              *(int *)(iVar18 + 4 + iVar23 * 0x14) = iVar12;
              *(undefined4 *)(iVar18 + 8 + iVar23 * 0x14) = 1;
              *(undefined4 *)(iVar18 + 0xc + iVar23 * 0x14) = 0;
              *(undefined4 *)(iVar18 + 0x10 + iVar23 * 0x14) = 0;
            }
            local_8 = 0;
            if (0 < iVar30) {
              do {
                iVar18 = piVar13[7];
                if ((iVar18 < piVar13[8]) || (iVar19 = FUN_0053b4b0(piVar13), iVar19 == 0)) {
                  iVar19 = piVar13[1];
                  piVar13[7] = piVar13[7] + 1;
                  *(int *)(iVar19 + 4 + iVar18 * 0x14) = iVar15;
                  *(undefined2 *)(iVar19 + iVar18 * 0x14) = 0x1d;
                  *(undefined1 *)(iVar19 + 3 + iVar18 * 0x14) = 0;
                  *(int *)(iVar19 + 8 + iVar18 * 0x14) = local_8;
                  *(int *)(iVar19 + 0xc + iVar18 * 0x14) = param_5 + 3;
                  *(undefined4 *)(iVar19 + 0x10 + iVar18 * 0x14) = 0;
                }
                if (local_8 == 0) {
                  local_30 = piVar13[7];
                  if (((int)local_30 < piVar13[8]) || (iVar18 = FUN_0053b4b0(piVar13), iVar18 == 0))
                  {
                    piVar13[7] = piVar13[7] + 1;
                    puVar2 = (undefined2 *)(piVar13[1] + local_30 * 0x14);
                    *puVar2 = 0x1c;
                    *(undefined1 *)((int)puVar2 + 3) = 0;
                    *(int *)(puVar2 + 2) = param_5 + 8;
                    *(undefined4 *)(puVar2 + 4) = 0;
                    *(undefined4 *)(puVar2 + 6) = 0;
                    *(undefined4 *)(puVar2 + 8) = 0;
                  }
                  else {
                    local_30 = 1;
                  }
                }
                iVar18 = *param_1;
                cVar4 = *(char *)(iVar18 + 0x81);
                iVar19 = *(int *)(local_8 * 4 + puVar8[8]);
                bVar5 = *(byte *)(*(int *)(*(int *)(iVar18 + 0x10) + 0xc) + 0x4d);
                if (iVar19 == 0) {
                  iVar18 = *(int *)(iVar18 + 8);
                }
                else {
                  iVar18 = FUN_00537090(iVar18,iVar19,cVar4);
                }
                iVar27 = 0;
                if (iVar18 != 0) {
                  iVar27 = iVar18 + (uint)bVar5 * 0x14 + -0x14;
                }
                if ((cVar4 == '\0') && ((iVar27 == 0 || (*(int *)(iVar27 + 0xc) == 0)))) {
                  iVar27 = FUN_0055a020(param_1,bVar5,iVar27,iVar19);
                }
                local_20 = piVar13[7];
                if ((local_20 < piVar13[8]) || (iVar18 = FUN_0053b4b0(piVar13), iVar18 == 0)) {
                  piVar13[7] = piVar13[7] + 1;
                  puVar2 = (undefined2 *)(piVar13[1] + local_20 * 0x14);
                  *(int *)(puVar2 + 2) = param_5 + 3;
                  *puVar2 = 0x4b;
                  *(undefined1 *)((int)puVar2 + 3) = 0;
                  *(undefined4 *)(puVar2 + 4) = 0;
                  *(int *)(puVar2 + 6) = local_8 + iVar30 + param_5 + 8;
                  *(undefined4 *)(puVar2 + 8) = 0;
                }
                else {
                  local_20 = 1;
                }
                iVar18 = piVar13[1];
                iVar19 = *piVar13;
                if ((iVar18 == 0) || (*(char *)(iVar19 + 0x38) != '\0')) {
                  FUN_00539320(iVar19,0xfffffffc,iVar27);
                }
                else {
                  iVar20 = local_20;
                  if (local_20 < 0) {
                    iVar20 = piVar13[7] + -1;
                  }
                  iVar3 = iVar18 + iVar20 * 0x14;
                  FUN_00539320(iVar19,(int)*(char *)(iVar3 + 1),
                               *(undefined4 *)(iVar18 + 0x10 + iVar20 * 0x14));
                  *(undefined4 *)(iVar3 + 0x10) = 0;
                  if (iVar27 == 0) {
                    *(undefined4 *)(iVar3 + 0x10) = 0;
                    *(undefined1 *)(iVar3 + 1) = 0;
                  }
                  else {
                    *(int *)(iVar3 + 0x10) = iVar27;
                    *(undefined1 *)(iVar3 + 1) = 0xfc;
                  }
                }
                *(int *)(local_8 * 4 + iVar16) = local_20;
                if (piVar13[1] != 0) {
                  *(undefined1 *)(piVar13[1] + -0x11 + piVar13[7] * 0x14) = 0x80;
                }
                local_8 = local_8 + 1;
              } while (local_8 < iVar30);
            }
            iVar18 = piVar13[7];
            if ((iVar18 < piVar13[8]) || (iVar19 = FUN_0053b4b0(piVar13), iVar19 == 0)) {
              iVar19 = piVar13[1];
              piVar13[7] = piVar13[7] + 1;
              *(undefined2 *)(iVar19 + iVar18 * 0x14) = 1;
              *(undefined1 *)(iVar19 + 3 + iVar18 * 0x14) = 0;
              *(undefined4 *)(iVar19 + 4 + iVar18 * 0x14) = 0;
              *(int *)(iVar19 + 8 + iVar18 * 0x14) = iVar26;
              *(undefined4 *)(iVar19 + 0xc + iVar18 * 0x14) = 0;
              *(undefined4 *)(iVar19 + 0x10 + iVar18 * 0x14) = 0;
            }
            local_8 = 0;
            if (0 < iVar30) {
              do {
                uVar21 = *(uint *)(iVar16 + local_8 * 4);
                if ((-1 < (int)uVar21) && (uVar21 < (uint)piVar13[7])) {
                  *(int *)(piVar13[1] + 8 + uVar21 * 0x14) = piVar13[7];
                }
                if (((local_8 == 0) && (-1 < (int)local_30)) && (local_30 < (uint)piVar13[7])) {
                  *(int *)(piVar13[1] + 8 + local_30 * 0x14) = piVar13[7];
                }
                iVar18 = piVar13[7];
                iVar19 = piVar13[8];
                if (iVar18 < iVar19) {
LAB_0052a853:
                  piVar13[7] = piVar13[7] + 1;
                  puVar2 = (undefined2 *)(piVar13[1] + iVar18 * 0x14);
                  *puVar2 = 0x14;
                  *(undefined1 *)((int)puVar2 + 3) = 0;
                  *(int *)(puVar2 + 2) = local_8 + 1 + iVar12;
                  *(undefined4 *)(puVar2 + 4) = 1;
                  *(undefined4 *)(puVar2 + 6) = 0;
                  *(undefined4 *)(puVar2 + 8) = 0;
                }
                else {
                  if (iVar19 == 0) {
                    iVar19 = 0x33;
                  }
                  else {
                    iVar19 = iVar19 * 2;
                  }
                  uVar21 = FUN_00552390(*piVar13,piVar13[1],iVar19 * 0x14);
                  if (uVar21 != 0) {
                    iVar19 = *piVar13;
                    if (((iVar19 == 0) || (uVar21 < *(uint *)(iVar19 + 0x104))) ||
                       (*(uint *)(iVar19 + 0x108) <= uVar21)) {
                      uVar24 = (*DAT_00766608._4_4_)(uVar21);
                    }
                    else {
                      uVar24 = (uint)*(ushort *)(iVar19 + 0xe8);
                    }
                    piVar13[8] = uVar24 / 0x14;
                    piVar13[1] = uVar21;
                    goto LAB_0052a853;
                  }
                }
                iVar18 = piVar13[7];
                iVar19 = piVar13[8];
                if (iVar18 < iVar19) {
LAB_0052a8f3:
                  piVar13[7] = piVar13[7] + 1;
                  puVar2 = (undefined2 *)(piVar13[1] + iVar18 * 0x14);
                  *(int *)(puVar2 + 2) = iVar15;
                  *puVar2 = 0x1d;
                  *(undefined1 *)((int)puVar2 + 3) = 0;
                  *(int *)(puVar2 + 4) = local_8;
                  *(int *)(puVar2 + 6) = iVar30 + local_8 + param_5 + 8;
                  *(undefined4 *)(puVar2 + 8) = 0;
                }
                else {
                  if (iVar19 == 0) {
                    iVar19 = 0x33;
                  }
                  else {
                    iVar19 = iVar19 * 2;
                  }
                  uVar21 = FUN_00552390(*piVar13,piVar13[1],iVar19 * 0x14);
                  if (uVar21 != 0) {
                    iVar19 = *piVar13;
                    if (((iVar19 == 0) || (uVar21 < *(uint *)(iVar19 + 0x104))) ||
                       (*(uint *)(iVar19 + 0x108) <= uVar21)) {
                      uVar24 = (*DAT_00766608._4_4_)(uVar21);
                    }
                    else {
                      uVar24 = (uint)*(ushort *)(iVar19 + 0xe8);
                    }
                    piVar13[8] = uVar24 / 0x14;
                    piVar13[1] = uVar21;
                    goto LAB_0052a8f3;
                  }
                }
                local_8 = local_8 + 1;
              } while (local_8 < iVar30);
            }
            FUN_005521a0(iVar6,iVar16);
            if (piVar13[10] != 0) {
              *(int *)(piVar13[10] - (iVar26 * 4 + 4)) = piVar13[7];
            }
            iVar16 = piVar13[7];
            iVar26 = piVar13[8];
            if (iVar16 < iVar26) {
LAB_0052a9d2:
              iVar26 = piVar13[1];
              piVar13[7] = piVar13[7] + 1;
              *(int *)(iVar26 + 4 + iVar16 * 0x14) = iVar15;
              *(undefined2 *)(iVar26 + iVar16 * 0x14) = 0x5f;
              *(undefined1 *)(iVar26 + 3 + iVar16 * 0x14) = 0;
              *(int *)(iVar26 + 8 + iVar16 * 0x14) = iVar23;
              *(undefined4 *)(iVar26 + 0xc + iVar16 * 0x14) = 0;
              *(undefined4 *)(iVar26 + 0x10 + iVar16 * 0x14) = 0;
            }
            else {
              if (iVar26 == 0) {
                iVar26 = 0x33;
              }
              else {
                iVar26 = iVar26 * 2;
              }
              uVar21 = FUN_00552390(*piVar13,piVar13[1],iVar26 * 0x14);
              if (uVar21 != 0) {
                iVar26 = *piVar13;
                if (((iVar26 == 0) || (uVar21 < *(uint *)(iVar26 + 0x104))) ||
                   (*(uint *)(iVar26 + 0x108) <= uVar21)) {
                  uVar24 = (*DAT_00766608._4_4_)(uVar21);
                }
                else {
                  uVar24 = (uint)*(ushort *)(iVar26 + 0xe8);
                }
                piVar13[8] = uVar24 / 0x14;
                piVar13[1] = uVar21;
                goto LAB_0052a9d2;
              }
            }
            puVar25 = (uint *)(piVar13 + 1);
            iVar16 = piVar13[7];
            iVar23 = piVar13[8];
            if (iVar16 < iVar23) {
LAB_0052aa7c:
              iVar23 = piVar13[1];
              piVar13[7] = piVar13[7] + 1;
              *(undefined2 *)(iVar23 + iVar16 * 0x14) = 0x2d;
              *(undefined1 *)(iVar23 + 3 + iVar16 * 0x14) = 0;
              *(int *)(iVar23 + 4 + iVar16 * 0x14) = iVar15;
              *(undefined4 *)(iVar23 + 8 + iVar16 * 0x14) = 0;
              *(undefined4 *)(iVar23 + 0xc + iVar16 * 0x14) = 0;
              *(undefined4 *)(iVar23 + 0x10 + iVar16 * 0x14) = 0;
            }
            else {
              if (iVar23 == 0) {
                iVar23 = 0x33;
              }
              else {
                iVar23 = iVar23 * 2;
              }
              uVar21 = FUN_00552390(*piVar13,*puVar25,iVar23 * 0x14);
              if (uVar21 != 0) {
                iVar23 = *piVar13;
                if (((iVar23 == 0) || (uVar21 < *(uint *)(iVar23 + 0x104))) ||
                   (*(uint *)(iVar23 + 0x108) <= uVar21)) {
                  uVar24 = (*DAT_00766608._4_4_)(uVar21);
                }
                else {
                  uVar24 = (uint)*(ushort *)(iVar23 + 0xe8);
                }
                piVar13[8] = uVar24 / 0x14;
                piVar13[1] = uVar21;
                goto LAB_0052aa7c;
              }
            }
            iVar16 = piVar13[7];
            iVar23 = piVar13[8];
            if (iVar16 < iVar23) {
LAB_0052ab20:
              iVar23 = piVar13[1];
              piVar13[7] = piVar13[7] + 1;
              *(undefined2 *)(iVar23 + iVar16 * 0x14) = 0xf;
              *(undefined1 *)(iVar23 + 3 + iVar16 * 0x14) = 0;
              *(int *)(iVar23 + 4 + iVar16 * 0x14) = iVar12;
              *(int *)(iVar23 + 8 + iVar16 * 0x14) = iVar1;
              *(undefined4 *)(iVar23 + 0xc + iVar16 * 0x14) = 0;
              *(undefined4 *)(iVar23 + 0x10 + iVar16 * 0x14) = 0;
            }
            else {
              if (iVar23 == 0) {
                iVar23 = 0x33;
              }
              else {
                iVar23 = iVar23 * 2;
              }
              uVar21 = FUN_00552390(*piVar13,piVar13[1],iVar23 * 0x14);
              if (uVar21 != 0) {
                iVar23 = *piVar13;
                if (((iVar23 == 0) || (uVar21 < *(uint *)(iVar23 + 0x104))) ||
                   (*(uint *)(iVar23 + 0x108) <= uVar21)) {
                  uVar24 = (*DAT_00766608._4_4_)(uVar21);
                }
                else {
                  uVar24 = (uint)*(ushort *)(iVar23 + 0xe8);
                }
                piVar13[8] = uVar24 / 0x14;
                piVar13[1] = uVar21;
                goto LAB_0052ab20;
              }
            }
            if ((int)local_1c < 0) {
              local_1c = piVar13[7];
              iVar16 = piVar13[8];
              if (iVar16 <= (int)local_1c) {
                if (iVar16 == 0) {
                  iVar16 = 0x33;
                }
                else {
                  iVar16 = iVar16 * 2;
                }
                uVar21 = FUN_00552390(*piVar13,piVar13[1],iVar16 * 0x14);
                if (uVar21 == 0) {
                  local_1c = 1;
                  goto LAB_0052ac09;
                }
                iVar16 = *piVar13;
                if (((iVar16 == 0) || (uVar21 < *(uint *)(iVar16 + 0x104))) ||
                   (*(uint *)(iVar16 + 0x108) <= uVar21)) {
                  uVar24 = (*DAT_00766608._4_4_)(uVar21);
                }
                else {
                  uVar24 = (uint)*(ushort *)(iVar16 + 0xe8);
                }
                piVar13[8] = uVar24 / 0x14;
                piVar13[1] = uVar21;
              }
              iVar16 = piVar13[1];
              piVar13[7] = piVar13[7] + 1;
              *(undefined2 *)(iVar16 + local_1c * 0x14) = 0x1c;
              *(undefined1 *)(iVar16 + 3 + local_1c * 0x14) = 0;
              *(int *)(iVar16 + 4 + local_1c * 0x14) = iVar12;
              *(undefined4 *)(iVar16 + 8 + local_1c * 0x14) = 0;
              *(undefined4 *)(iVar16 + 0xc + local_1c * 0x14) = 0;
              *(undefined4 *)(iVar16 + 0x10 + local_1c * 0x14) = 0;
            }
LAB_0052ac09:
            local_20 = 0;
            if (0 < iVar30) {
              do {
                iVar16 = piVar13[7];
                iVar23 = piVar13[8];
                if (iVar16 < iVar23) {
LAB_0052ac9d:
                  iVar23 = piVar13[1];
                  piVar13[7] = piVar13[7] + 1;
                  *(undefined2 *)(iVar23 + iVar16 * 0x14) = 0x5e;
                  *(undefined1 *)(iVar23 + 3 + iVar16 * 0x14) = 0;
                  *(undefined4 *)(iVar23 + 4 + iVar16 * 0x14) = 0;
                  *(int *)(iVar23 + 8 + iVar16 * 0x14) = iVar10;
                  *(undefined4 *)(iVar23 + 0xc + iVar16 * 0x14) = 0;
                  *(undefined4 *)(iVar23 + 0x10 + iVar16 * 0x14) = 0;
                }
                else {
                  if (iVar23 == 0) {
                    iVar23 = 0x33;
                  }
                  else {
                    iVar23 = iVar23 * 2;
                  }
                  uVar21 = FUN_00552390(*piVar13,piVar13[1],iVar23 * 0x14);
                  if (uVar21 != 0) {
                    iVar23 = *piVar13;
                    if (((iVar23 == 0) || (uVar21 < *(uint *)(iVar23 + 0x104))) ||
                       (*(uint *)(iVar23 + 0x108) <= uVar21)) {
                      uVar24 = (*DAT_00766608._4_4_)(uVar21);
                    }
                    else {
                      uVar24 = (uint)*(ushort *)(iVar23 + 0xe8);
                    }
                    piVar13[8] = uVar24 / 0x14;
                    piVar13[1] = uVar21;
                    goto LAB_0052ac9d;
                  }
                  iVar16 = 1;
                }
                iVar23 = piVar13[1];
                iVar26 = *piVar13;
                if ((iVar23 == 0) || (*(char *)(iVar26 + 0x38) != '\0')) {
                  FUN_00539320(iVar26,0,&DAT_006fcfbc);
                }
                else {
                  if (iVar16 < 0) {
                    iVar16 = piVar13[7] + -1;
                  }
                  iVar18 = iVar23 + iVar16 * 0x14;
                  FUN_00539320(iVar26,(int)*(char *)(iVar18 + 1),
                               *(undefined4 *)(iVar23 + 0x10 + iVar16 * 0x14));
                  *(undefined4 *)(iVar18 + 0x10) = 0;
                  pcVar28 = " ";
                  do {
                    pcVar29 = pcVar28;
                    pcVar28 = pcVar29 + 1;
                  } while (*pcVar28 != '\0');
                  uVar21 = (uint)(pcVar29 + -0x6fcfbb) & 0x3fffffff;
                  pvVar22 = (void *)FUN_00552230(*piVar13,uVar21 + 1);
                  if (pvVar22 != (void *)0x0) {
                    memcpy(pvVar22,&DAT_006fcfbc,uVar21);
                    *(undefined1 *)((int)pvVar22 + uVar21) = 0;
                  }
                  *(void **)(iVar18 + 0x10) = pvVar22;
                  *(undefined1 *)(iVar18 + 1) = 0xff;
                }
                iVar16 = piVar13[7];
                iVar23 = piVar13[8];
                if (iVar16 < iVar23) {
LAB_0052adeb:
                  uVar21 = *puVar25;
                  piVar13[7] = piVar13[7] + 1;
                  *(int *)(uVar21 + 4 + iVar16 * 0x14) = iVar10;
                  *(undefined2 *)(uVar21 + iVar16 * 0x14) = 0x5b;
                  *(undefined1 *)(uVar21 + 3 + iVar16 * 0x14) = 0;
                  *(int *)(uVar21 + 8 + iVar16 * 0x14) = iVar1;
                  *(int *)(uVar21 + 0xc + iVar16 * 0x14) = iVar1;
                  *(undefined4 *)(uVar21 + 0x10 + iVar16 * 0x14) = 0;
                }
                else {
                  if (iVar23 == 0) {
                    iVar23 = 0x33;
                  }
                  else {
                    iVar23 = iVar23 * 2;
                  }
                  uVar21 = FUN_00552390(*piVar13,*puVar25,iVar23 * 0x14);
                  if (uVar21 != 0) {
                    iVar23 = *piVar13;
                    if (((iVar23 == 0) || (uVar21 < *(uint *)(iVar23 + 0x104))) ||
                       (*(uint *)(iVar23 + 0x108) <= uVar21)) {
                      uVar24 = (*DAT_00766608._4_4_)(uVar21);
                    }
                    else {
                      uVar24 = (uint)*(ushort *)(iVar23 + 0xe8);
                    }
                    piVar13[8] = uVar24 / 0x14;
                    *puVar25 = uVar21;
                    goto LAB_0052adeb;
                  }
                }
                iVar16 = piVar13[7];
                iVar23 = piVar13[8];
                if (iVar16 < iVar23) {
LAB_0052ae8a:
                  piVar13[7] = piVar13[7] + 1;
                  puVar2 = (undefined2 *)(*puVar25 + iVar16 * 0x14);
                  *(int *)(puVar2 + 4) = local_20 + 1 + iVar12;
                  *puVar2 = 0x56;
                  *(undefined1 *)((int)puVar2 + 3) = 0;
                  *(int *)(puVar2 + 2) = iVar12;
                  *(int *)(puVar2 + 6) = iVar10;
                  *(undefined4 *)(puVar2 + 8) = 0;
                }
                else {
                  if (iVar23 == 0) {
                    iVar23 = 0x33;
                  }
                  else {
                    iVar23 = iVar23 * 2;
                  }
                  uVar21 = FUN_00552390(*piVar13,*puVar25,iVar23 * 0x14);
                  if (uVar21 != 0) {
                    iVar23 = *piVar13;
                    if (((iVar23 == 0) || (uVar21 < *(uint *)(iVar23 + 0x104))) ||
                       (*(uint *)(iVar23 + 0x108) <= uVar21)) {
                      uVar24 = (*DAT_00766608._4_4_)(uVar21);
                    }
                    else {
                      uVar24 = (uint)*(ushort *)(iVar23 + 0xe8);
                    }
                    piVar13[8] = uVar24 / 0x14;
                    *puVar25 = uVar21;
                    goto LAB_0052ae8a;
                  }
                }
                iVar16 = piVar13[7];
                iVar23 = piVar13[8];
                if (iVar16 < iVar23) {
LAB_0052af2c:
                  uVar21 = *puVar25;
                  piVar13[7] = piVar13[7] + 1;
                  *(undefined2 *)(uVar21 + iVar16 * 0x14) = 0x14;
                  *(undefined1 *)(uVar21 + 3 + iVar16 * 0x14) = 0;
                  *(int *)(uVar21 + 4 + iVar16 * 0x14) = iVar10;
                  *(undefined4 *)(uVar21 + 8 + iVar16 * 0x14) = 0xffffffff;
                  *(undefined4 *)(uVar21 + 0xc + iVar16 * 0x14) = 0;
                  *(undefined4 *)(uVar21 + 0x10 + iVar16 * 0x14) = 0;
                }
                else {
                  if (iVar23 == 0) {
                    iVar23 = 0x33;
                  }
                  else {
                    iVar23 = iVar23 * 2;
                  }
                  uVar21 = FUN_00552390(*piVar13,*puVar25,iVar23 * 0x14);
                  if (uVar21 != 0) {
                    iVar23 = *piVar13;
                    if (((iVar23 == 0) || (uVar21 < *(uint *)(iVar23 + 0x104))) ||
                       (*(uint *)(iVar23 + 0x108) <= uVar21)) {
                      uVar24 = (*DAT_00766608._4_4_)(uVar21);
                    }
                    else {
                      uVar24 = (uint)*(ushort *)(iVar23 + 0xe8);
                    }
                    piVar13[8] = uVar24 / 0x14;
                    *puVar25 = uVar21;
                    goto LAB_0052af2c;
                  }
                }
                iVar16 = piVar13[7];
                iVar23 = piVar13[8];
                if (iVar16 < iVar23) {
LAB_0052afd0:
                  piVar13[7] = piVar13[7] + 1;
                  puVar2 = (undefined2 *)(*puVar25 + iVar16 * 0x14);
                  *puVar2 = 0x59;
                  *(int *)(puVar2 + 2) = local_20 + 1 + iVar12;
                  *(undefined1 *)((int)puVar2 + 3) = 0;
                  *(int *)(puVar2 + 4) = iVar10;
                  *(int *)(puVar2 + 6) = iVar10;
                  *(undefined4 *)(puVar2 + 8) = 0;
                }
                else {
                  if (iVar23 == 0) {
                    iVar23 = 0x33;
                  }
                  else {
                    iVar23 = iVar23 * 2;
                  }
                  uVar21 = FUN_00552390(*piVar13,*puVar25,iVar23 * 0x14);
                  if (uVar21 != 0) {
                    iVar23 = *piVar13;
                    if (((iVar23 == 0) || (uVar21 < *(uint *)(iVar23 + 0x104))) ||
                       (*(uint *)(iVar23 + 0x108) <= uVar21)) {
                      uVar24 = (*DAT_00766608._4_4_)(uVar21);
                    }
                    else {
                      uVar24 = (uint)*(ushort *)(iVar23 + 0xe8);
                    }
                    piVar13[8] = uVar24 / 0x14;
                    *puVar25 = uVar21;
                    goto LAB_0052afd0;
                  }
                }
                iVar16 = piVar13[7];
                iVar23 = piVar13[8];
                if (iVar16 < iVar23) {
LAB_0052b070:
                  uVar21 = *puVar25;
                  piVar13[7] = piVar13[7] + 1;
                  *(undefined2 *)(uVar21 + iVar16 * 0x14) = 0x90;
                  *(undefined1 *)(uVar21 + 3 + iVar16 * 0x14) = 0;
                  *(int *)(uVar21 + 4 + iVar16 * 0x14) = iVar10;
                  *(undefined4 *)(uVar21 + 8 + iVar16 * 0x14) = 0;
                  *(undefined4 *)(uVar21 + 0xc + iVar16 * 0x14) = 0;
                  *(undefined4 *)(uVar21 + 0x10 + iVar16 * 0x14) = 0;
                }
                else {
                  if (iVar23 == 0) {
                    iVar23 = 0x33;
                  }
                  else {
                    iVar23 = iVar23 * 2;
                  }
                  uVar21 = FUN_00552390(*piVar13,*puVar25,iVar23 * 0x14);
                  if (uVar21 != 0) {
                    iVar23 = *piVar13;
                    if (((iVar23 == 0) || (uVar21 < *(uint *)(iVar23 + 0x104))) ||
                       (*(uint *)(iVar23 + 0x108) <= uVar21)) {
                      uVar24 = (*DAT_00766608._4_4_)(uVar21);
                    }
                    else {
                      uVar24 = (uint)*(ushort *)(iVar23 + 0xe8);
                    }
                    piVar13[8] = uVar24 / 0x14;
                    *puVar25 = uVar21;
                    goto LAB_0052b070;
                  }
                }
                iVar16 = piVar13[7];
                iVar23 = piVar13[8];
                if (iVar16 < iVar23) {
LAB_0052b114:
                  uVar21 = *puVar25;
                  piVar13[7] = piVar13[7] + 1;
                  *(int *)(uVar21 + 4 + iVar16 * 0x14) = iVar10;
                  *(undefined2 *)(uVar21 + iVar16 * 0x14) = 0x5b;
                  *(undefined1 *)(uVar21 + 3 + iVar16 * 0x14) = 0;
                  *(int *)(uVar21 + 8 + iVar16 * 0x14) = iVar1;
                  *(int *)(uVar21 + 0xc + iVar16 * 0x14) = iVar1;
                  *(undefined4 *)(uVar21 + 0x10 + iVar16 * 0x14) = 0;
                }
                else {
                  if (iVar23 == 0) {
                    iVar23 = 0x33;
                  }
                  else {
                    iVar23 = iVar23 * 2;
                  }
                  uVar21 = FUN_00552390(*piVar13,*puVar25,iVar23 * 0x14);
                  if (uVar21 != 0) {
                    iVar23 = *piVar13;
                    if (((iVar23 == 0) || (uVar21 < *(uint *)(iVar23 + 0x104))) ||
                       (*(uint *)(iVar23 + 0x108) <= uVar21)) {
                      uVar24 = (*DAT_00766608._4_4_)(uVar21);
                    }
                    else {
                      uVar24 = (uint)*(ushort *)(iVar23 + 0xe8);
                    }
                    piVar13[8] = uVar24 / 0x14;
                    *puVar25 = uVar21;
                    goto LAB_0052b114;
                  }
                }
                local_20 = local_20 + 1;
              } while (local_20 < iVar30);
            }
            iVar30 = piVar13[7];
            iVar16 = piVar13[8];
            if (iVar30 < iVar16) {
LAB_0052b1d0:
              uVar21 = *puVar25;
              piVar13[7] = piVar13[7] + 1;
              *(int *)(uVar21 + 4 + iVar30 * 0x14) = param_5;
              *(undefined2 *)(uVar21 + iVar30 * 0x14) = 0x1f;
              *(undefined1 *)(uVar21 + 3 + iVar30 * 0x14) = 0;
              *(undefined4 *)(uVar21 + 8 + iVar30 * 0x14) = 3;
              *(int *)(uVar21 + 0xc + iVar30 * 0x14) = iVar9;
              *(undefined4 *)(uVar21 + 0x10 + iVar30 * 0x14) = 0;
            }
            else {
              if (iVar16 == 0) {
                iVar16 = 0x33;
              }
              else {
                iVar16 = iVar16 * 2;
              }
              uVar21 = FUN_00552390(*piVar13,*puVar25,iVar16 * 0x14);
              if (uVar21 != 0) {
                iVar16 = *piVar13;
                if (((iVar16 == 0) || (uVar21 < *(uint *)(iVar16 + 0x104))) ||
                   (*(uint *)(iVar16 + 0x108) <= uVar21)) {
                  uVar24 = (*DAT_00766608._4_4_)(uVar21);
                }
                else {
                  uVar24 = (uint)*(ushort *)(iVar16 + 0xe8);
                }
                piVar13[8] = uVar24 / 0x14;
                *puVar25 = uVar21;
                goto LAB_0052b1d0;
              }
              iVar30 = 1;
            }
            iVar16 = *piVar13;
            uVar21 = *puVar25;
            if ((uVar21 == 0) || (*(char *)(iVar16 + 0x38) != '\0')) {
              FUN_00539320(iVar16,0,&DAT_00717d50);
            }
            else {
              if (iVar30 < 0) {
                iVar30 = piVar13[7] + -1;
              }
              iVar23 = uVar21 + iVar30 * 0x14;
              FUN_00539320(iVar16,(int)*(char *)(iVar23 + 1),
                           *(undefined4 *)(uVar21 + 0x10 + iVar30 * 0x14));
              *(undefined4 *)(iVar23 + 0x10) = 0;
              pcVar28 = "aaa";
              do {
                pcVar29 = pcVar28;
                pcVar28 = pcVar29 + 1;
              } while (*pcVar28 != '\0');
              uVar21 = (uint)(pcVar29 + -0x717d4f) & 0x3fffffff;
              pvVar22 = (void *)FUN_00552230(*piVar13,uVar21 + 1);
              if (pvVar22 != (void *)0x0) {
                memcpy(pvVar22,&DAT_00717d50,uVar21);
                *(undefined1 *)((int)pvVar22 + uVar21) = 0;
              }
              *(void **)(iVar23 + 0x10) = pvVar22;
              *(undefined1 *)(iVar23 + 1) = 0xff;
            }
            iVar30 = piVar13[7];
            iVar16 = piVar13[8];
            if (iVar30 < iVar16) {
LAB_0052b30b:
              uVar21 = *puVar25;
              piVar13[7] = piVar13[7] + 1;
              *(undefined4 *)(uVar21 + 4 + iVar30 * 0x14) = param_4;
              *(undefined2 *)(uVar21 + iVar30 * 0x14) = 0x38;
              *(undefined1 *)(uVar21 + 3 + iVar30 * 0x14) = 0;
              *(int *)(uVar21 + 8 + iVar30 * 0x14) = iVar11;
              *(undefined4 *)(uVar21 + 0xc + iVar30 * 0x14) = 0;
              *(undefined4 *)(uVar21 + 0x10 + iVar30 * 0x14) = 0;
            }
            else {
              if (iVar16 == 0) {
                iVar16 = 0x33;
              }
              else {
                iVar16 = iVar16 * 2;
              }
              uVar21 = FUN_00552390(*piVar13,*puVar25,iVar16 * 0x14);
              if (uVar21 != 0) {
                iVar16 = *piVar13;
                if (((iVar16 == 0) || (uVar21 < *(uint *)(iVar16 + 0x104))) ||
                   (*(uint *)(iVar16 + 0x108) <= uVar21)) {
                  uVar24 = (*DAT_00766608._4_4_)(uVar21);
                }
                else {
                  uVar24 = (uint)*(ushort *)(iVar16 + 0xe8);
                }
                piVar13[8] = uVar24 / 0x14;
                *puVar25 = uVar21;
                goto LAB_0052b30b;
              }
            }
            iVar30 = piVar13[7];
            iVar16 = piVar13[8];
            if (iVar30 < iVar16) {
LAB_0052b3ae:
              uVar21 = *puVar25;
              piVar13[7] = piVar13[7] + 1;
              *(undefined4 *)(uVar21 + 4 + iVar30 * 0x14) = param_4;
              *(int *)(uVar21 + 8 + iVar30 * 0x14) = iVar9;
              *(undefined2 *)(uVar21 + iVar30 * 0x14) = 0x39;
              *(undefined1 *)(uVar21 + 3 + iVar30 * 0x14) = 0;
              *(int *)(uVar21 + 0xc + iVar30 * 0x14) = iVar11;
              *(undefined4 *)(uVar21 + 0x10 + iVar30 * 0x14) = 0;
            }
            else {
              if (iVar16 == 0) {
                iVar16 = 0x33;
              }
              else {
                iVar16 = iVar16 * 2;
              }
              uVar21 = FUN_00552390(*piVar13,*puVar25,iVar16 * 0x14);
              if (uVar21 != 0) {
                iVar16 = *piVar13;
                if (((iVar16 == 0) || (uVar21 < *(uint *)(iVar16 + 0x104))) ||
                   (*(uint *)(iVar16 + 0x108) <= uVar21)) {
                  uVar24 = (*DAT_00766608._4_4_)(uVar21);
                }
                else {
                  uVar24 = (uint)*(ushort *)(iVar16 + 0xe8);
                }
                piVar13[8] = uVar24 / 0x14;
                *puVar25 = uVar21;
                goto LAB_0052b3ae;
              }
            }
            if (*puVar25 != 0) {
              *(undefined1 *)((*puVar25 - 0x11) + piVar13[7] * 0x14) = 8;
            }
          }
        }
      }
      if (param_2[2] == 0) {
        FUN_0056bef0(piVar13,0x27,iVar15,param_2[8],iVar14);
        FUN_0056be90(piVar13,0x20,iVar15,iVar1);
        FUN_0056be30(piVar13,0x2d,iVar15);
        uVar21 = FUN_0056be30(piVar13,0x1c,iVar1);
      }
      else {
        if ((-1 < (int)local_1c) && (local_1c < (uint)piVar13[7])) {
          *(int *)(piVar13[1] + 8 + local_1c * 0x14) = piVar13[7];
        }
        uVar21 = FUN_0056bdc0(piVar13,1);
      }
      FUN_0056be90(piVar13,10,0,param_5 + 1);
      FUN_0056bf50(piVar13,0x1f,param_5,3,iVar9,&DAT_00717d50,0);
      FUN_0056be90(piVar13,0x38,param_4,iVar11);
      FUN_0056bef0(piVar13,0x39,param_4,iVar9,iVar11);
      if (piVar13[1] != 0) {
        *(undefined1 *)(piVar13[1] + -0x11 + piVar13[7] * 0x14) = 8;
      }
      if (param_1[0x13] < iVar9) {
        param_1[0x13] = iVar9;
      }
      if ((-1 < (int)uVar21) && (uVar21 < (uint)piVar13[7])) {
        *(int *)(piVar13[1] + 8 + uVar21 * 0x14) = piVar13[7];
      }
    }
  }
  return;
}


/* FUN_0052b4f0 @ 0052b4f0  kind=lib  attributed-by=lib-island  size=220 */

void FUN_0052b4f0(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  
  iVar4 = -1000000;
  if (param_2[0x10] != 0) {
    iVar3 = *(int *)(*param_1 + 0x14);
    iVar4 = 0;
    if (0 < iVar3) {
      piVar1 = (int *)(*(int *)(*param_1 + 0x10) + 0xc);
      do {
        if (*piVar1 == param_2[0x10]) break;
        iVar4 = iVar4 + 1;
        piVar1 = piVar1 + 4;
      } while (iVar4 < iVar3);
    }
  }
  piVar1 = param_1;
  if ((int *)param_1[0x6c] != (int *)0x0) {
    piVar1 = (int *)param_1[0x6c];
  }
  FUN_00550aa0(param_1,iVar4);
  piVar1[0x55] = piVar1[0x55] | 1 << ((byte)iVar4 & 0x1f);
  iVar3 = param_1[0x12];
  param_1[0x12] = iVar3 + 3;
  if (param_3 == (undefined4 *)0x0) {
    puVar5 = &DAT_00717d58;
    puVar2 = param_2;
  }
  else {
    puVar5 = &DAT_00717d54;
    puVar2 = param_3;
  }
  FUN_00540ff0(param_1,iVar4,iVar3,*puVar2,puVar5);
  FUN_0052a250(param_1,param_2,param_3,iVar3,param_1[0x13] + 1);
  iVar3 = param_1[2];
  if (iVar3 == 0) {
    iVar3 = FUN_0056c7b0(*param_1);
    param_1[2] = iVar3;
    if (iVar3 == 0) {
      return;
    }
    FUN_0056bdc0(iVar3,0x94);
  }
  FUN_0056be30(iVar3,0x6b,iVar4);
  return;
}


/* FUN_0052b5d0 @ 0052b5d0  kind=lib  attributed-by=lib-island  size=86 */

void FUN_0052b5d0(int param_1,char param_2,undefined1 param_3)

{
  if (param_2 == 'a') {
    if (((*(ushort *)(param_1 + 0x1c) & 2) == 0) && ((*(ushort *)(param_1 + 0x1c) & 0xc) != 0)) {
      FUN_00575350(param_1,param_3);
    }
    *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) & 0xfff3;
    return;
  }
  if (param_2 != 'b') {
    FUN_0052b630(param_1);
    if ((*(byte *)(param_1 + 0x1c) & 8) != 0) {
      FUN_00573cb0(param_1);
    }
  }
  return;
}


/* FUN_0052b630 @ 0052b630  kind=lib  attributed-by=lib-island  size=122 */

void FUN_0052b630(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 local_14;
  undefined4 local_c;
  undefined4 local_8;
  
  if (((*(ushort *)(param_1 + 0x1c) & 0xc) == 0) &&
     (uVar1 = *(undefined1 *)(param_1 + 0x1f), (*(ushort *)(param_1 + 0x1c) & 2) != 0)) {
    iVar2 = FUN_0054a330(*(undefined4 *)(param_1 + 4),&local_14,*(undefined4 *)(param_1 + 0x18),
                         uVar1);
    if (iVar2 != 0) {
      iVar2 = FUN_0054a9a0(*(undefined4 *)(param_1 + 4),&local_c,*(undefined4 *)(param_1 + 0x18),
                           uVar1);
      if (iVar2 == 0) {
        *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) | 4;
        *(undefined4 *)(param_1 + 0x10) = local_c;
        *(undefined4 *)(param_1 + 0x14) = local_8;
        return;
      }
      *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) | 8;
      *(undefined8 *)(param_1 + 8) = local_14;
    }
  }
  return;
}


/* FUN_0052b6b0 @ 0052b6b0  kind=lib  attributed-by=lib-island  size=157 */

void FUN_0052b6b0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint _Size;
  int iVar6;
  
  iVar1 = *(int *)(param_1 + 0x38);
  uVar5 = (uint)*(byte *)(param_1 + 5);
  iVar2 = *(int *)(*(int *)(param_1 + 0x34) + 0x24);
  iVar6 = iVar2;
  puVar4 = (undefined1 *)(*(int *)(param_1 + 0x40) + param_2 * 2);
  iVar3 = param_2;
  while (iVar3 = iVar3 + -1, -1 < iVar3) {
    _Size = (uint)*(ushort *)(param_4 + iVar3 * 2);
    iVar6 = iVar6 - _Size;
    puVar4[-2] = (char)((uint)iVar6 >> 8);
    puVar4[-1] = (char)iVar6;
    memcpy((void *)(iVar1 + iVar6),*(void **)(param_3 + iVar3 * 4),_Size);
    puVar4 = puVar4 + -2;
  }
  *(char *)(uVar5 + 3 + iVar1) = (char)((uint)param_2 >> 8);
  *(char *)(uVar5 + 5 + iVar1) = (char)((uint)iVar6 >> 8);
  *(char *)(uVar5 + 6 + iVar1) = (char)iVar6;
  *(char *)(uVar5 + 4 + iVar1) = (char)param_2;
  *(short *)(param_1 + 0xe) =
       *(short *)(param_1 + 0xe) + (((short)iVar6 + (short)param_2 * -2) - (short)iVar2);
  *(short *)(param_1 + 0x10) = (short)param_2;
  return;
}


/* FUN_0052b750 @ 0052b750  kind=lib  attributed-by=lib-island  size=122 */

undefined4 FUN_0052b750(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  uVar1 = 0;
  if ((*(byte *)(param_3 + 0x2a) & 8) != 0) {
    puVar3 = param_1;
    if ((undefined4 *)param_1[0x6c] != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)param_1[0x6c];
    }
    for (puVar2 = (undefined4 *)puVar3[0x6b]; puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)*puVar2) {
      if (puVar2[1] == param_3) goto LAB_0052b7c3;
    }
    puVar2 = (undefined4 *)FUN_00552230(*param_1,0x10);
    if (puVar2 == (undefined4 *)0x0) {
      return 0;
    }
    *puVar2 = puVar3[0x6b];
    puVar3[0x6b] = puVar2;
    puVar2[1] = param_3;
    puVar2[2] = param_2;
    puVar3[0x13] = puVar3[0x13] + 2;
    puVar2[3] = puVar3[0x13];
    puVar3[0x13] = puVar3[0x13] + 1;
LAB_0052b7c3:
    uVar1 = puVar2[3];
  }
  return uVar1;
}


/* FUN_0052b7d0 @ 0052b7d0  kind=lib  attributed-by=lib-island  size=32 */

void FUN_0052b7d0(int param_1,int param_2,undefined4 param_3)

{
  if (0 < param_2) {
    FUN_0056be90(*(undefined4 *)(param_1 + 8),0x77,param_2,param_3);
  }
  return;
}


/* FUN_0052b7f0 @ 0052b7f0  kind=lib  attributed-by=lib-island  size=553 */

int FUN_0052b7f0(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int local_c;
  
  local_c = 0;
  iVar1 = *param_1;
  for (iVar2 = param_1[2]; iVar2 != 0; iVar2 = *(int *)(iVar2 + 8)) {
    FUN_00524410(*(undefined4 *)(iVar2 + 0x14));
    *(undefined4 *)(iVar2 + 0x14) = 0;
  }
  if (*(char *)((int)param_1 + 0x12) == '\0') {
    uVar8 = param_1[0xb];
    if (uVar8 < 2) {
      uVar5 = 0;
    }
    else {
      uVar5 = (uint)param_1[9] / 5 + 1;
      iVar2 = ((uVar8 - 2) / uVar5) * uVar5;
      uVar5 = iVar2 + 2;
      if (uVar5 == DAT_007666d0 / (uint)param_1[8] + 1) {
        uVar5 = iVar2 + 3;
      }
    }
    if ((uVar5 == uVar8) || (uVar5 = DAT_007666d0 / (uint)param_1[8] + 1, uVar8 == uVar5)) {
      FUN_00525a30(0xb,"database corruption at line %d of [%.10s]",0xc8c9,
                   "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
      return 0xb;
    }
    iVar2 = *(int *)(param_1[3] + 0x38);
    iVar4 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar2 + 0x24),*(undefined1 *)(iVar2 + 0x25)),
                              *(undefined1 *)(iVar2 + 0x26)),*(undefined1 *)(iVar2 + 0x27));
    uVar6 = (uint)param_1[9] / 5;
    iVar2 = FUN_00544710(param_1,uVar8);
    uVar7 = (uVar8 - (iVar2 + iVar4 + (uVar6 - uVar8)) / uVar6) - iVar4;
    if ((uVar5 < uVar8) && (uVar7 < uVar5)) {
      uVar7 = uVar7 - 1;
    }
    while( true ) {
      if (uVar7 < 2) {
        uVar3 = 0;
      }
      else {
        iVar2 = ((uVar7 - 2) / (uVar6 + 1)) * (uVar6 + 1);
        uVar3 = iVar2 + 2;
        if (uVar3 == uVar5) {
          uVar3 = iVar2 + 3;
        }
      }
      if ((uVar3 != uVar7) && (uVar7 != uVar5)) break;
      uVar7 = uVar7 - 1;
    }
    if (uVar8 < uVar7) {
      FUN_00525a30(0xb,"database corruption at line %d of [%.10s]",0xc8d6,
                   "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
      return 0xb;
    }
    iVar2 = 0;
    if (uVar7 < uVar8) {
      do {
        if (iVar2 != 0) break;
        iVar2 = FUN_0053b980(param_1,uVar7,uVar8);
        uVar8 = uVar8 - 1;
      } while (uVar7 < uVar8);
      local_c = iVar2;
      if ((iVar2 != 0x65) && (iVar2 != 0)) goto LAB_0052b9d2;
    }
    if (iVar4 != 0) {
      local_c = FUN_00560330(*(undefined4 *)(param_1[3] + 0x44));
      *(undefined4 *)(*(int *)(param_1[3] + 0x38) + 0x20) = 0;
      *(undefined4 *)(*(int *)(param_1[3] + 0x38) + 0x24) = 0;
      iVar2 = *(int *)(param_1[3] + 0x38);
      *(char *)(iVar2 + 0x1c) = (char)(uVar7 >> 0x18);
      *(char *)(iVar2 + 0x1d) = (char)(uVar7 >> 0x10);
      *(char *)(iVar2 + 0x1e) = (char)(uVar7 >> 8);
      *(char *)(iVar2 + 0x1f) = (char)uVar7;
      *(uint *)(*param_1 + 0x18) = uVar7;
      param_1[0xb] = uVar7;
    }
    if (local_c != 0) {
LAB_0052b9d2:
      FUN_0055fbc0(iVar1);
      return local_c;
    }
  }
  return 0;
}


/* FUN_0052ba20 @ 0052ba20  kind=lib  attributed-by=lib-island  size=386 */

/* WARNING: Removing unreachable block (ram,0x0052baaa) */

int FUN_0052ba20(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  size_t sVar3;
  size_t sVar4;
  longlong lVar5;
  size_t sVar6;
  int iVar7;
  int extraout_ECX;
  int iVar8;
  longlong lVar9;
  size_t _Size;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 4);
  iVar2 = *piVar1;
  sVar3 = piVar1[8];
  sVar4 = *(size_t *)(*(int *)(*(int *)(param_1 + 0x18) + 4) + 0x20);
  sVar6 = sVar3;
  if ((int)sVar4 < (int)sVar3) {
    sVar6 = sVar4;
  }
  lVar9 = __allmul(param_2,0,sVar4,(int)sVar4 >> 0x1f);
  iVar8 = 0;
  if ((sVar4 != sVar3) && (*(char *)(iVar2 + 0xe) != '\0')) {
    iVar8 = 8;
  }
  for (lVar5 = lVar9 - (int)sVar4; (iVar8 == 0 && (lVar5 < lVar9)); lVar5 = lVar5 + (int)sVar3) {
    param_2 = 0;
    iVar7 = __alldvrm(lVar5,sVar3,(int)sVar3 >> 0x1f);
    if (iVar7 + 1 != DAT_007666d0 / *(uint *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x20) + 1) {
      iVar8 = FUN_0055eb70(iVar2,iVar7 + 1,&param_2,0);
      if ((iVar8 == 0) && (iVar8 = FUN_00560330(param_2), iVar8 == 0)) {
        _Size = sVar6;
        iVar7 = __allrem(lVar5,sVar4,(int)sVar4 >> 0x1f);
        memcpy((void *)(*(int *)(param_2 + 4) + extraout_ECX),(void *)(iVar7 + param_3),_Size);
        **(undefined1 **)(param_2 + 8) = 0;
      }
      if (param_2 != 0) {
        iVar7 = *(int *)(param_2 + 0x10);
        FUN_00561130(param_2);
        if (*(int *)(*(int *)(iVar7 + 0xb4) + 0xc) == 0) {
          FUN_00541a10(iVar7);
        }
      }
    }
  }
  return iVar8;
}


/* FUN_0052bbb0 @ 0052bbb0  kind=lib  attributed-by=lib-island  size=388 */

void FUN_0052bbb0(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_20;
  undefined1 local_18 [16];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x24);
  local_20 = 0;
  do {
    while( true ) {
      iVar7 = (int)*(short *)(param_1 + 0x5e);
      iVar4 = *(int *)(param_1 + 0x88 + iVar7 * 4);
      if (iVar7 != 0) break;
      if ((*(char *)(iVar4 + 1) == (char)*(short *)(param_1 + 0x5e)) ||
         (iVar4 = FUN_0052bd40(iVar4,param_1 + 0x8c), iVar4 != 0)) goto LAB_0052bd11;
      *(undefined4 *)(param_1 + 0x5e) = 1;
      *(undefined2 *)(param_1 + 0x62) = 0;
    }
    if ((*(char *)(iVar4 + 1) == '\0') && ((uint)*(ushort *)(iVar4 + 0xe) <= (uint)(iVar2 * 2) / 3))
    break;
    iVar3 = *(int *)(param_1 + 0x84 + iVar7 * 4);
    sVar1 = *(short *)(param_1 + 0x5e + iVar7 * 2);
    iVar5 = FUN_00560330(*(undefined4 *)(iVar3 + 0x44));
    iVar6 = local_20;
    if (iVar5 == 0) {
      if ((((*(char *)(iVar4 + 4) == '\0') || (*(char *)(iVar4 + 1) != '\x01')) ||
          (*(short *)(iVar4 + 0x14) != *(short *)(iVar4 + 0x10))) ||
         ((*(int *)(iVar3 + 0x48) == 1 || (*(short *)(iVar3 + 0x10) != sVar1)))) {
        iVar6 = FUN_00543f40(*(undefined4 *)(*(int *)(param_1 + 4) + 0x20));
        iVar5 = FUN_0052be70(iVar3,sVar1,iVar6,iVar7 == 1,*(undefined1 *)(param_1 + 0x5d));
        if (local_20 != 0) {
          FUN_00544190(local_20);
        }
      }
      else {
        iVar5 = FUN_0052cd80(iVar3,iVar4,local_18);
      }
    }
    local_20 = iVar6;
    iVar7 = *(int *)(iVar4 + 0x44);
    *(undefined1 *)(iVar4 + 1) = 0;
    if (iVar7 != 0) {
      iVar4 = *(int *)(iVar7 + 0x10);
      FUN_00561130(iVar7);
      if (*(int *)(*(int *)(iVar4 + 0xb4) + 0xc) == 0) {
        FUN_00541a10(iVar4);
      }
    }
    *(short *)(param_1 + 0x5e) = *(short *)(param_1 + 0x5e) + -1;
  } while (iVar5 == 0);
LAB_0052bd11:
  if (local_20 != 0) {
    FUN_00544190(local_20);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0052bd40 @ 0052bd40  kind=lib  attributed-by=lib-island  size=301 */

int FUN_0052bd40(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_c;
  undefined4 local_8;
  
  iVar4 = param_1;
  puVar1 = (undefined4 *)(param_1 + 0x44);
  iVar5 = 0;
  local_c = 0;
  local_8 = 0;
  param_1 = *(int *)(param_1 + 0x34);
  iVar3 = FUN_00560330(*puVar1);
  iVar2 = param_1;
  if (iVar3 == 0) {
    param_1 = FUN_00529110(param_1,&local_c,&local_8,*(undefined4 *)(iVar4 + 0x48),0);
    iVar5 = local_c;
    FUN_005337c0(iVar4,local_c,&param_1);
    if (*(char *)(iVar2 + 0x11) != '\0') {
      FUN_00544760(iVar2,local_8,5,*(undefined4 *)(iVar4 + 0x48),&param_1);
    }
    iVar3 = param_1;
    if (param_1 == 0) {
      memcpy((void *)(iVar5 + 0x14),(void *)(iVar4 + 0x14),(uint)*(byte *)(iVar4 + 1) * 2);
      memcpy((void *)(iVar5 + 0x20),(void *)(iVar4 + 0x20),(uint)*(byte *)(iVar4 + 1) << 2);
      *(undefined1 *)(iVar5 + 1) = *(undefined1 *)(iVar4 + 1);
      FUN_00583190(iVar4,**(byte **)(iVar5 + 0x38) & 0xf7);
      iVar4 = (uint)*(byte *)(iVar4 + 5) + *(int *)(iVar4 + 0x38);
      *(char *)(iVar4 + 8) = (char)((uint)local_8 >> 0x18);
      *(char *)(iVar4 + 9) = (char)((uint)local_8 >> 0x10);
      *(char *)(iVar4 + 10) = (char)((uint)local_8 >> 8);
      *(char *)(iVar4 + 0xb) = (char)local_8;
      *param_2 = iVar5;
      return 0;
    }
  }
  *param_2 = 0;
  if ((iVar5 != 0) && (iVar4 = *(int *)(iVar5 + 0x44), iVar4 != 0)) {
    iVar2 = *(int *)(iVar4 + 0x10);
    FUN_00561130(iVar4);
    if (*(int *)(*(int *)(iVar2 + 0xb4) + 0xc) == 0) {
      FUN_00541a10(iVar2);
    }
  }
  return iVar3;
}


/* FUN_0052be70 @ 0052be70  kind=lib  attributed-by=lib-island  size=3825 */

/* WARNING: Type propagation algorithm not settling */

void FUN_0052be70(int param_1,uint param_2,int param_3,int param_4,int param_5)

{
  short *psVar1;
  byte bVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  int *piVar6;
  undefined2 uVar7;
  uint uVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined4 uVar11;
  undefined1 *puVar12;
  int iVar13;
  undefined4 *puVar14;
  int iVar15;
  undefined1 *puVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  undefined4 *puVar20;
  ushort *puVar21;
  void *_Dst;
  uint uVar22;
  undefined4 *puVar23;
  uint *puVar24;
  undefined4 *puVar25;
  undefined1 *puVar26;
  undefined4 local_d0;
  undefined4 local_cc;
  ushort local_b8;
  uint auStack_b4 [7];
  uint local_98 [4];
  undefined4 local_88;
  uint local_84;
  uint local_80;
  undefined1 *local_7c;
  int local_78;
  int local_74;
  uint local_70;
  undefined1 *local_6c;
  uint local_68;
  int local_64;
  undefined4 *local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  uint local_40;
  uint local_3c;
  int local_38;
  int local_34 [5];
  uint auStack_20 [6];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar13 = 0;
  local_48 = *(int *)(param_1 + 0x34);
  local_50 = param_1;
  local_78 = param_3;
  local_44 = 0;
  local_58 = 0;
  auStack_b4[4] = 0;
  local_7c = (undefined1 *)0x0;
  local_5c = 0;
  if (param_3 == 0) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  uVar19 = (uint)*(byte *)(param_1 + 1) + (uint)*(ushort *)(param_1 + 0x10);
  if (uVar19 < 2) {
    local_3c = 0;
  }
  else {
    if (param_2 == 0) {
      local_3c = 0;
    }
    else if (param_2 == uVar19) {
      local_3c = (uVar19 - 2) + param_5;
    }
    else {
      local_3c = param_2 - 1;
    }
    uVar19 = 2 - param_5;
  }
  local_54 = uVar19 + 1;
  uVar17 = (local_3c - *(byte *)(param_1 + 1)) + uVar19;
  if (uVar17 == *(ushort *)(param_1 + 0x10)) {
    local_6c = (undefined1 *)(*(int *)(param_1 + 0x38) + 8 + (uint)*(byte *)(param_1 + 5));
  }
  else {
    local_6c = (undefined1 *)
               ((uint)(CONCAT11(*(undefined1 *)(*(int *)(param_1 + 0x40) + uVar17 * 2),
                                *(undefined1 *)(*(int *)(param_1 + 0x40) + 1 + uVar17 * 2)) &
                      *(ushort *)(param_1 + 0x12)) + *(int *)(param_1 + 0x38));
  }
  local_98[3] = CONCAT31(CONCAT21(CONCAT11(*local_6c,local_6c[1]),local_6c[2]),local_6c[3]);
  puVar24 = auStack_b4 + uVar19 + 7;
  local_88 = local_98[3];
  local_38 = FUN_0053a6a0(local_48,local_98[3],puVar24);
  local_34[0] = local_38;
  iVar18 = local_50;
  do {
    local_50 = iVar18;
    local_34[0] = local_38;
    if (local_38 != 0) {
      memset(auStack_b4 + 7,0,uVar19 * 4 + 4);
LAB_0052c150:
      FUN_005652a0(local_5c);
      iVar18 = 0;
      iVar13 = local_54;
      if (0 < local_54) {
        do {
          if ((auStack_b4[iVar18 + 7] != 0) &&
             (puVar23 = *(undefined4 **)(auStack_b4[iVar18 + 7] + 0x44),
             puVar23 != (undefined4 *)0x0)) {
            psVar1 = (short *)((int)puVar23 + 0x1a);
            *psVar1 = *psVar1 + -1;
            iVar5 = puVar23[4];
            if (*psVar1 == 0) {
              *(int *)(puVar23[7] + 0xc) = *(int *)(puVar23[7] + 0xc) + -1;
              if ((*(byte *)(puVar23 + 6) & 2) == 0) {
                iVar9 = puVar23[7];
                if (*(int *)(iVar9 + 0x1c) != 0) {
                  if (puVar23[5] == 1) {
                    *(undefined4 *)(iVar9 + 0x2c) = 0;
                  }
                  (*DAT_00766664)(*(undefined4 *)(iVar9 + 0x28),*puVar23,0);
                }
              }
              else {
                puVar14 = (undefined4 *)puVar23[7];
                if ((undefined4 *)puVar14[2] == puVar23) {
                  for (iVar13 = puVar23[9]; (iVar13 != 0 && ((*(byte *)(iVar13 + 0x18) & 4) != 0));
                      iVar13 = *(int *)(iVar13 + 0x24)) {
                  }
                  puVar14[2] = iVar13;
                }
                if (puVar23[8] == 0) {
                  puVar14[1] = puVar23[9];
                }
                else {
                  *(undefined4 *)(puVar23[8] + 0x24) = puVar23[9];
                }
                if (puVar23[9] == 0) {
                  *puVar14 = puVar23[8];
                }
                else {
                  *(undefined4 *)(puVar23[9] + 0x20) = puVar23[8];
                }
                piVar6 = (int *)puVar23[7];
                puVar23[8] = 0;
                puVar23[9] = 0;
                iVar13 = *piVar6;
                puVar23[8] = iVar13;
                if (iVar13 != 0) {
                  *(undefined4 **)(iVar13 + 0x24) = puVar23;
                }
                *piVar6 = (int)puVar23;
                if (piVar6[1] == 0) {
                  piVar6[1] = (int)puVar23;
                }
                iVar13 = local_54;
                if ((piVar6[2] == 0) && ((*(byte *)(puVar23 + 6) & 4) == 0)) {
                  piVar6[2] = (int)puVar23;
                }
              }
            }
            if (*(int *)(*(int *)(iVar5 + 0xb4) + 0xc) == 0) {
              FUN_00541a10(iVar5);
            }
          }
          iVar18 = iVar18 + 1;
        } while (iVar18 < iVar13);
      }
      iVar18 = 0;
      iVar13 = local_58;
      if (0 < local_58) {
        do {
          if ((auStack_20[iVar18 + 1] != 0) &&
             (puVar23 = *(undefined4 **)(auStack_20[iVar18 + 1] + 0x44),
             puVar23 != (undefined4 *)0x0)) {
            psVar1 = (short *)((int)puVar23 + 0x1a);
            *psVar1 = *psVar1 + -1;
            iVar5 = puVar23[4];
            if (*psVar1 == 0) {
              *(int *)(puVar23[7] + 0xc) = *(int *)(puVar23[7] + 0xc) + -1;
              if ((*(byte *)(puVar23 + 6) & 2) == 0) {
                iVar9 = puVar23[7];
                if (*(int *)(iVar9 + 0x1c) != 0) {
                  if (puVar23[5] == 1) {
                    *(undefined4 *)(iVar9 + 0x2c) = 0;
                  }
                  (*DAT_00766664)(*(undefined4 *)(iVar9 + 0x28),*puVar23,0);
                }
              }
              else {
                puVar14 = (undefined4 *)puVar23[7];
                if ((undefined4 *)puVar14[2] == puVar23) {
                  for (iVar13 = puVar23[9]; (iVar13 != 0 && ((*(byte *)(iVar13 + 0x18) & 4) != 0));
                      iVar13 = *(int *)(iVar13 + 0x24)) {
                  }
                  puVar14[2] = iVar13;
                }
                if (puVar23[8] == 0) {
                  puVar14[1] = puVar23[9];
                }
                else {
                  *(undefined4 *)(puVar23[8] + 0x24) = puVar23[9];
                }
                if (puVar23[9] == 0) {
                  *puVar14 = puVar23[8];
                }
                else {
                  *(undefined4 *)(puVar23[9] + 0x20) = puVar23[8];
                }
                piVar6 = (int *)puVar23[7];
                puVar23[8] = 0;
                puVar23[9] = 0;
                iVar13 = *piVar6;
                puVar23[8] = iVar13;
                if (iVar13 != 0) {
                  *(undefined4 **)(iVar13 + 0x24) = puVar23;
                }
                *piVar6 = (int)puVar23;
                if (piVar6[1] == 0) {
                  piVar6[1] = (int)puVar23;
                }
                iVar13 = local_58;
                if ((piVar6[2] == 0) && ((*(byte *)(puVar23 + 6) & 4) == 0)) {
                  piVar6[2] = (int)puVar23;
                }
              }
            }
            if (*(int *)(*(int *)(iVar5 + 0xb4) + 0xc) == 0) {
              FUN_00541a10(iVar5);
            }
          }
          iVar18 = iVar18 + 1;
        } while (iVar18 < iVar13);
      }
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    iVar13 = iVar13 + *(byte *)(*puVar24 + 1) + 1 + (uint)*(ushort *)(*puVar24 + 0x10);
    uVar17 = uVar19 - 1;
    local_64 = iVar13;
    if (uVar19 == 0) {
      uVar19 = iVar13 + 3U & 0xfffffffc;
      local_80 = *(int *)(local_48 + 0x20) + 0x50;
      local_5c = FUN_005653d0(local_80 * local_54 + *(int *)(local_48 + 0x20) + uVar19 * 6);
      if (local_5c == 0) {
        local_34[0] = 7;
      }
      else {
        local_4c = local_5c + uVar19 * 4;
        local_84 = (uint)*(byte *)(local_98[0] + 3) << 2;
        local_68 = (uint)*(byte *)(local_98[0] + 4);
        local_40 = local_4c + uVar19 * 2;
        local_70 = 0;
        if (local_54 < 1) {
          iVar13 = 0;
        }
        else {
          local_64 = 0;
          do {
            puVar23 = (undefined4 *)auStack_b4[local_70 + 7];
            puVar14 = (undefined4 *)(local_40 + *(int *)(local_48 + 0x20) + local_64);
            auStack_b4[local_70 + 1] = (uint)puVar14;
            puVar20 = puVar23;
            puVar25 = puVar14;
            for (iVar13 = 0x13; iVar13 != 0; iVar13 = iVar13 + -1) {
              *puVar25 = *puVar20;
              puVar20 = puVar20 + 1;
              puVar25 = puVar25 + 1;
            }
            puVar14[0xe] = puVar14 + 0x13;
            local_60 = puVar14;
            memcpy(puVar14 + 0x13,(void *)puVar23[0xe],*(size_t *)(local_48 + 0x20));
            local_74 = (uint)*(ushort *)(puVar14 + 4) + (uint)*(byte *)((int)puVar14 + 1);
            if (*(byte *)((int)puVar14 + 1) == 0) {
              iVar13 = puVar14[0xe];
              uVar4 = *(ushort *)((int)puVar14 + 0x12);
              if (local_74 != 0) {
                puVar10 = (undefined1 *)(iVar13 + (uint)*(ushort *)(puVar14 + 3));
                do {
                  iVar18 = (uint)(CONCAT11(*puVar10,puVar10[1]) & uVar4) + iVar13;
                  *(int *)(local_5c + local_44 * 4) = iVar18;
                  uVar7 = FUN_0052f130(local_60,iVar18);
                  *(undefined2 *)(local_4c + -2 + (local_44 + 1) * 2) = uVar7;
                  local_74 = local_74 + -1;
                  local_44 = local_44 + 1;
                  puVar10 = puVar10 + 2;
                  puVar14 = local_60;
                } while (local_74 != 0);
              }
            }
            else {
              uVar19 = 0;
              if (local_74 != 0) {
                do {
                  iVar13 = *(byte *)((int)puVar14 + 1) - 1;
                  uVar17 = uVar19;
                  if (-1 < iVar13) {
                    puVar21 = (ushort *)((int)puVar14 + (*(byte *)((int)puVar14 + 1) + 9) * 2);
                    do {
                      if ((int)(uint)*puVar21 <= (int)uVar17) {
                        if (*puVar21 == uVar17) {
                          iVar13 = puVar14[iVar13 + 8];
                          goto LAB_0052c32a;
                        }
                        uVar17 = uVar17 - 1;
                      }
                      puVar21 = puVar21 + -1;
                      iVar13 = iVar13 + -1;
                    } while (-1 < iVar13);
                  }
                  iVar13 = (uint)(CONCAT11(*(undefined1 *)(puVar14[0x10] + uVar17 * 2),
                                           *(undefined1 *)(puVar14[0x10] + 1 + uVar17 * 2)) &
                                 *(ushort *)((int)puVar14 + 0x12)) + puVar14[0xe];
LAB_0052c32a:
                  *(int *)(local_5c + local_44 * 4) = iVar13;
                  uVar7 = FUN_0052f130(puVar14,iVar13);
                  *(undefined2 *)(local_4c + -2 + (local_44 + 1) * 2) = uVar7;
                  uVar19 = uVar19 + 1;
                  local_44 = local_44 + 1;
                } while ((int)uVar19 < local_74);
              }
            }
            uVar19 = local_70;
            if (((int)local_70 < local_54 + -1) && (local_68 == 0)) {
              uVar4 = (ushort)auStack_20[local_70 + 1];
              *(ushort *)(local_4c + local_44 * 2) = uVar4;
              _Dst = (void *)(local_40 + auStack_b4[4]);
              auStack_b4[4] = auStack_b4[4] + uVar4;
              memcpy(_Dst,(void *)auStack_b4[local_70 + 5],(uint)uVar4);
              *(uint *)(local_5c + local_44 * 4) = (local_84 & 0xffff) + (int)_Dst;
              psVar1 = (short *)(local_4c + local_44 * 2);
              *psVar1 = *psVar1 - (short)local_84;
              if (*(char *)((int)puVar14 + 3) == '\0') {
                **(undefined4 **)(local_5c + local_44 * 4) = *(undefined4 *)(puVar14[0xe] + 8);
              }
              else if (*(ushort *)(local_4c + local_44 * 2) < 4) {
                *(undefined2 *)(local_4c + local_44 * 2) = 4;
              }
              local_44 = local_44 + 1;
            }
            local_70 = uVar19 + 1;
            local_64 = local_64 + local_80;
            iVar13 = local_44;
          } while ((int)(uVar19 + 1) < local_54);
        }
        iVar5 = local_50;
        iVar18 = *(int *)(local_48 + 0x24);
        iVar9 = 0;
        iVar15 = 0;
        uVar19 = 0;
        if (iVar13 < 1) {
LAB_0052c4a2:
          auStack_20[iVar15 + 1] = uVar19;
          local_60 = (undefined4 *)(iVar15 + 1);
          local_34[(int)local_60] = iVar13;
          local_64 = iVar15;
          local_74 = iVar15;
          puVar23 = local_60;
          while (0 < local_74) {
            uVar19 = auStack_20[local_74 + 1];
            uVar17 = auStack_20[local_74];
            while( true ) {
              iVar18 = local_34[local_74] + -1;
              iVar13 = (iVar18 - local_68) + 1;
              if ((uVar19 != 0) &&
                 ((param_5 != 0 ||
                  ((int)((uVar17 - *(ushort *)(local_4c + iVar18 * 2)) + -2) <
                   (int)(*(ushort *)(local_4c + iVar13 * 2) + 2 + uVar19))))) break;
              uVar19 = uVar19 + *(ushort *)(local_4c + iVar13 * 2) + 2;
              uVar17 = uVar17 + (-2 - (uint)*(ushort *)(local_4c + iVar18 * 2));
              local_34[local_74] = local_34[local_74] + -1;
            }
            auStack_20[local_74 + 1] = uVar19;
            auStack_20[local_74] = uVar17;
            local_74 = local_74 + -1;
            puVar23 = local_60;
          }
          if (1 < *(uint *)(local_98[0] + 0x48)) {
            iVar13 = 0;
            local_70 = (uint)**(byte **)(local_98[0] + 0x38);
            if (0 < (int)puVar23) {
              do {
                if (iVar13 < local_54) {
                  local_40 = auStack_b4[iVar13 + 7];
                  auStack_20[iVar13 + 1] = local_40;
                  uVar11 = *(undefined4 *)(local_40 + 0x44);
                  auStack_b4[iVar13 + 7] = 0;
                  local_34[0] = FUN_00560330(uVar11);
                  local_58 = local_58 + 1;
                  local_38 = local_34[0];
                  if (local_34[0] != 0) goto LAB_0052c150;
                }
                else {
                  uVar11 = local_88;
                  if (param_5 != 0) {
                    uVar11 = 1;
                  }
                  local_34[0] = FUN_00529110(local_48,&local_40,auStack_b4 + 10,uVar11,0);
                  local_38 = local_34[0];
                  if (local_34[0] != 0) goto LAB_0052c150;
                  local_58 = local_58 + 1;
                  cVar3 = *(char *)(local_48 + 0x11);
                  auStack_20[iVar13 + 1] = local_40;
                  if (cVar3 != '\0') {
                    FUN_00544760(local_48,*(undefined4 *)(local_40 + 0x48),5,
                                 *(undefined4 *)(iVar5 + 0x48),&local_38);
                    local_34[0] = local_38;
                    if (local_38 != 0) goto LAB_0052c150;
                  }
                  local_88 = local_98[3];
                }
                iVar13 = iVar13 + 1;
                local_38 = local_34[0];
              } while (iVar13 < (int)puVar23);
            }
            iVar18 = local_34[0];
            if (iVar13 < local_54) {
              do {
                uVar19 = auStack_b4[iVar13 + 7];
                if (iVar18 != 0) goto LAB_0052c150;
                local_34[0] = FUN_00539460(*(undefined4 *)(uVar19 + 0x34),uVar19,
                                           *(undefined4 *)(uVar19 + 0x48));
                local_38 = local_34[0];
                if (local_34[0] != 0) goto LAB_0052c150;
                if ((uVar19 != 0) &&
                   (puVar23 = *(undefined4 **)(uVar19 + 0x44), puVar23 != (undefined4 *)0x0)) {
                  psVar1 = (short *)((int)puVar23 + 0x1a);
                  *psVar1 = *psVar1 + -1;
                  iVar18 = puVar23[4];
                  if (*psVar1 == 0) {
                    *(int *)(puVar23[7] + 0xc) = *(int *)(puVar23[7] + 0xc) + -1;
                    if ((*(byte *)(puVar23 + 6) & 2) == 0) {
                      iVar5 = puVar23[7];
                      if (*(int *)(iVar5 + 0x1c) != 0) {
                        if (puVar23[5] == 1) {
                          *(undefined4 *)(iVar5 + 0x2c) = 0;
                        }
                        (*DAT_00766664)(*(undefined4 *)(iVar5 + 0x28),*puVar23,0);
                      }
                    }
                    else {
                      puVar14 = (undefined4 *)puVar23[7];
                      if ((undefined4 *)puVar14[2] == puVar23) {
                        for (iVar5 = puVar23[9];
                            (iVar5 != 0 && ((*(byte *)(iVar5 + 0x18) & 4) != 0));
                            iVar5 = *(int *)(iVar5 + 0x24)) {
                        }
                        puVar14[2] = iVar5;
                      }
                      if (puVar23[8] == 0) {
                        puVar14[1] = puVar23[9];
                      }
                      else {
                        *(undefined4 *)(puVar23[8] + 0x24) = puVar23[9];
                      }
                      if (puVar23[9] == 0) {
                        *puVar14 = puVar23[8];
                      }
                      else {
                        *(undefined4 *)(puVar23[9] + 0x20) = puVar23[8];
                      }
                      piVar6 = (int *)puVar23[7];
                      puVar23[8] = 0;
                      puVar23[9] = 0;
                      iVar5 = *piVar6;
                      puVar23[8] = iVar5;
                      if (iVar5 != 0) {
                        *(undefined4 **)(iVar5 + 0x24) = puVar23;
                      }
                      *piVar6 = (int)puVar23;
                      if (piVar6[1] == 0) {
                        piVar6[1] = (int)puVar23;
                      }
                      if ((piVar6[2] == 0) && ((*(byte *)(puVar23 + 6) & 4) == 0)) {
                        piVar6[2] = (int)puVar23;
                      }
                    }
                  }
                  if (*(int *)(*(int *)(iVar18 + 0xb4) + 0xc) == 0) {
                    FUN_00541a10(iVar18);
                  }
                }
                iVar18 = local_34[0];
                auStack_b4[iVar13 + 7] = 0;
                iVar13 = iVar13 + 1;
              } while (iVar13 < local_54);
            }
            uVar19 = 0;
            if (0 < local_64) {
              do {
                local_40 = auStack_20[uVar19 + 1];
                local_80 = uVar19 + 1;
                uVar17 = *(uint *)(local_40 + 0x48);
                uVar8 = local_80;
                uVar22 = uVar19;
                if ((int)local_80 < (int)local_60) {
                  do {
                    if (*(uint *)(auStack_20[uVar8 + 1] + 0x48) < uVar17) {
                      uVar17 = *(uint *)(auStack_20[uVar8 + 1] + 0x48);
                      uVar22 = uVar8;
                    }
                    uVar8 = uVar8 + 1;
                  } while ((int)uVar8 < (int)local_60);
                  if ((int)uVar19 < (int)uVar22) {
                    auStack_20[uVar19 + 1] = auStack_20[uVar22 + 1];
                    auStack_20[uVar22 + 1] = local_40;
                  }
                }
                uVar19 = local_80;
              } while ((int)local_80 < local_64);
            }
            local_40 = auStack_20[local_58];
            iVar13 = 0;
            uVar11 = *(undefined4 *)(local_40 + 0x48);
            *local_6c = (char)((uint)uVar11 >> 0x18);
            local_6c[1] = (char)((uint)uVar11 >> 0x10);
            local_6c[2] = (char)((uint)uVar11 >> 8);
            local_6c[3] = (char)uVar11;
            local_6c = (undefined1 *)0x0;
            if (0 < local_58) {
              do {
                puVar10 = local_6c;
                uVar19 = auStack_20[(int)local_6c + 1];
                local_80 = uVar19;
                FUN_00583190(uVar19,local_70);
                iVar18 = local_34[(int)(puVar10 + 1)];
                FUN_0052b6b0(uVar19,iVar18 - iVar13,local_5c + iVar13 * 4,local_4c + iVar13 * 2);
                uVar19 = local_80;
                if (iVar18 < local_44) {
                  puVar23 = *(undefined4 **)(local_5c + iVar18 * 4);
                  uVar8 = (uint)*(ushort *)(local_4c + iVar18 * 2);
                  local_60 = (undefined4 *)(local_7c + local_78);
                  uVar17 = (local_84 & 0xffff) + uVar8;
                  puVar14 = local_60;
                  if (*(char *)(local_80 + 3) == '\0') {
                    *(undefined4 *)(*(int *)(local_80 + 0x38) + 8) = *puVar23;
                  }
                  else if (local_68 == 0) {
                    puVar23 = puVar23 + -1;
                    if (uVar8 == 4) {
                      uVar17 = FUN_0052f130(local_50,puVar23);
                      uVar17 = uVar17 & 0xffff;
                      puVar14 = local_60;
                    }
                  }
                  else {
                    iVar18 = iVar18 + -1;
                    FUN_0052eda0(local_80,*(undefined4 *)(local_5c + iVar18 * 4),&local_d0);
                    puVar23 = local_60;
                    iVar13 = FUN_00563680(local_60 + 1,local_d0,local_cc);
                    uVar17 = iVar13 + 4;
                    puVar14 = (undefined4 *)0x0;
                  }
                  uVar8 = local_3c;
                  local_7c = local_7c + uVar17;
                  FUN_0053bd90(local_50,local_3c,puVar23,uVar17,puVar14,
                               *(undefined4 *)(uVar19 + 0x48),&local_38);
                  local_34[0] = local_38;
                  if (local_38 != 0) goto LAB_0052c150;
                  iVar18 = iVar18 + 1;
                  local_3c = uVar8 + 1;
                }
                local_6c = local_6c + 1;
                iVar13 = iVar18;
              } while ((int)local_6c < local_58);
            }
            if ((local_70 & 8) == 0) {
              *(undefined4 *)(*(int *)(local_40 + 0x38) + 8) =
                   *(undefined4 *)(*(int *)(auStack_b4[local_54] + 0x38) + 8);
            }
            local_3c = auStack_20[1];
            if (((param_4 != 0) && (*(short *)(local_50 + 0x10) == 0)) &&
               ((ushort)*(byte *)(local_50 + 5) <= *(ushort *)(auStack_20[1] + 0xe))) {
              FUN_005337c0(auStack_20[1],local_50,&local_38);
              local_34[0] = local_38;
              if (local_38 == 0) {
                local_34[0] = FUN_00539460(*(undefined4 *)(auStack_20[1] + 0x34),auStack_20[1],
                                           *(undefined4 *)(auStack_20[1] + 0x48));
              }
              goto LAB_0052c150;
            }
            if (*(char *)(local_48 + 0x11) == '\0') goto LAB_0052c150;
            local_70 = auStack_b4[1];
            local_7c = (undefined1 *)(uint)*(byte *)(auStack_b4[1] + 1);
            puVar10 = local_7c + *(ushort *)(auStack_b4[1] + 0x10);
            if (local_7c == (undefined1 *)0x0) {
              puVar26 = (undefined1 *)0xffffffff;
            }
            else {
              puVar26 = (undefined1 *)(uint)*(ushort *)(auStack_b4[1] + 0x14);
            }
            puVar16 = (undefined1 *)0x0;
            local_78 = 0;
            local_40 = 0;
            if (0 < local_44) {
              local_64 = 0;
              do {
                uVar19 = local_40;
                uVar17 = 0;
                if (puVar16 == puVar10) {
                  uVar17 = (uint)(local_68 == 0);
                  do {
                    local_70 = auStack_b4[local_78 + 2];
                    local_78 = local_78 + 1;
                    local_6c = (undefined1 *)(uint)*(byte *)(local_70 + 1);
                    puVar10 = local_6c + *(ushort *)(local_70 + 0x10) + uVar17 + (int)puVar16;
                    if (*(byte *)(local_70 + 1) != 0) {
                      local_7c = local_6c;
                      puVar26 = puVar16 + *(ushort *)(local_70 + 0x14) + uVar17;
                    }
                  } while (puVar16 == puVar10);
                }
                if (puVar16 == puVar26) {
                  local_7c = local_7c + -1;
                  uVar17 = 1;
                  if (0 < (int)local_7c) {
                    puVar26 = puVar26 + 1;
                  }
                }
                if (puVar16 == *(undefined1 **)((int)local_34 + local_64 + 4)) {
                  local_40 = local_40 + 1;
                  local_64 = local_40 * 4;
                  local_3c = auStack_20[uVar19 + 2];
                  if (local_68 != 0) goto LAB_0052ca6b;
                }
                else {
LAB_0052ca6b:
                  if ((uVar17 != 0) || (*(int *)(local_70 + 0x48) != *(int *)(local_3c + 0x48))) {
                    if ((short)local_84 == 0) {
                      puVar12 = *(undefined1 **)(local_5c + (int)puVar16 * 4);
                      FUN_00544760(local_48,CONCAT31(CONCAT21(CONCAT11(*puVar12,puVar12[1]),
                                                              puVar12[2]),puVar12[3]),5,
                                   *(undefined4 *)(local_3c + 0x48),&local_38);
                      local_34[0] = local_38;
                    }
                    if (*(ushort *)(local_3c + 10) < *(ushort *)(local_4c + (int)puVar16 * 2)) {
                      local_80 = *(uint *)(local_5c + (int)puVar16 * 4);
                      if ((local_34[0] == 0) &&
                         (FUN_0052eda0(local_3c,local_80,&local_d0), local_b8 != 0)) {
                        puVar12 = (undefined1 *)(local_b8 + local_80);
                        FUN_00544760(*(undefined4 *)(local_3c + 0x34),
                                     CONCAT31(CONCAT21(CONCAT11(*puVar12,puVar12[1]),puVar12[2]),
                                              puVar12[3]),3,*(undefined4 *)(local_3c + 0x48),
                                     &local_38);
                        local_34[0] = local_38;
                      }
                    }
                  }
                }
                puVar16 = puVar16 + 1;
              } while ((int)puVar16 < local_44);
            }
            iVar13 = local_58;
            if (((short)local_84 == 0) && (iVar18 = 0, 0 < local_58)) {
              do {
                iVar5 = *(int *)(auStack_20[iVar18 + 1] + 0x38);
                FUN_00544760(local_48,CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar5 + 8),
                                                                 *(undefined1 *)(iVar5 + 9)),
                                                        *(undefined1 *)(iVar5 + 10)),
                                               *(undefined1 *)(iVar5 + 0xb)),5,
                             *(undefined4 *)(auStack_20[iVar18 + 1] + 0x48),&local_38);
                iVar18 = iVar18 + 1;
              } while (iVar18 < iVar13);
              local_34[0] = local_38;
            }
            goto LAB_0052c150;
          }
          uVar11 = 0xd543;
        }
        else {
          while( true ) {
            uVar17 = (uint)*(ushort *)(local_4c + iVar9 * 2);
            uVar19 = uVar19 + 2 + uVar17;
            if ((int)(((local_84 & 0xffff) - 0xc) + iVar18) < (int)uVar19) break;
LAB_0052c49a:
            iVar9 = iVar9 + 1;
            iVar13 = local_44;
            if (local_44 <= iVar9) goto LAB_0052c4a2;
          }
          auStack_20[iVar15 + 1] = uVar19 - uVar17;
          local_34[iVar15 + 1] = iVar9;
          if (local_68 != 0) {
            iVar9 = iVar9 + -1;
          }
          iVar15 = iVar15 + 1;
          uVar19 = 0;
          if (iVar15 < 5) goto LAB_0052c49a;
          uVar11 = 0xd505;
        }
        FUN_00525a30(0xb,"database corruption at line %d of [%.10s]",uVar11,
                     "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
        local_34[0] = 0xb;
      }
      goto LAB_0052c150;
    }
    if ((local_3c + uVar17 == (uint)*(ushort *)(iVar18 + 0x14)) && (*(char *)(iVar18 + 1) != '\0'))
    {
      puVar10 = *(undefined1 **)(iVar18 + 0x20);
      uVar11 = CONCAT31(CONCAT21(CONCAT11(*puVar10,puVar10[1]),puVar10[2]),puVar10[3]);
      local_88 = uVar11;
      auStack_b4[uVar19 + 4] = (uint)puVar10;
      local_98[3] = uVar11;
      uVar8 = FUN_0052f130(iVar18,puVar10);
      auStack_20[uVar19] = uVar8 & 0xffff;
      *(undefined1 *)(local_50 + 1) = 0;
    }
    else {
      iVar13 = (local_3c - *(byte *)(iVar18 + 1)) + uVar17;
      puVar10 = (undefined1 *)
                ((uint)(CONCAT11(*(undefined1 *)(*(int *)(iVar18 + 0x40) + iVar13 * 2),
                                 *(undefined1 *)(*(int *)(iVar18 + 0x40) + 1 + iVar13 * 2)) &
                       *(ushort *)(iVar18 + 0x12)) + *(int *)(iVar18 + 0x38));
      uVar11 = CONCAT31(CONCAT21(CONCAT11(*puVar10,puVar10[1]),puVar10[2]),puVar10[3]);
      auStack_b4[uVar19 + 4] = (uint)puVar10;
      local_98[3] = uVar11;
      local_88 = uVar11;
      uVar8 = FUN_0052f130(iVar18,puVar10);
      uVar8 = uVar8 & 0xffff;
      bVar2 = *(byte *)(local_48 + 0x16);
      auStack_20[uVar19] = uVar8;
      iVar13 = local_50;
      if ((bVar2 & 4) != 0) {
        local_40 = (int)auStack_b4[uVar19 + 4] - *(int *)(local_50 + 0x38);
        if (*(int *)(local_48 + 0x24) < (int)(uVar8 + local_40)) {
          FUN_00525a30(0xb,"database corruption at line %d of [%.10s]",0xd47a,
                       "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
          local_34[0] = 0xb;
          memset(auStack_b4 + 7,0,uVar17 * 4 + 4);
          goto LAB_0052c150;
        }
        memcpy((void *)(local_78 + local_40),(void *)auStack_b4[uVar19 + 4],uVar8);
        iVar13 = local_50;
        auStack_b4[uVar19 + 4] = auStack_b4[uVar19 + 4] + (local_78 - *(int *)(local_50 + 0x38));
      }
      FUN_00534780(iVar13,(local_3c - *(byte *)(iVar13 + 1)) + uVar17,uVar8,&local_38);
      iVar13 = local_64;
    }
    puVar24 = auStack_b4 + uVar19 + 6;
    local_38 = FUN_0053a6a0(local_48,local_88,puVar24);
    local_34[0] = local_38;
    uVar19 = uVar17;
    iVar18 = local_50;
  } while( true );
}


/* FUN_0052cd80 @ 0052cd80  kind=lib  attributed-by=lib-island  size=398 */

int FUN_0052cd80(int param_1,int param_2,int param_3)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  int local_8;
  
  iVar3 = param_2;
  iVar4 = *(int *)(param_2 + 0x34);
  if (*(short *)(param_2 + 0x10) == 0) {
    FUN_00525a30(0xb,"database corruption at line %d of [%.10s]",0xd329,
                 "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
    return 0xb;
  }
  param_2 = FUN_00529110(iVar4,&local_8,&local_10,0,0);
  if (param_2 == 0) {
    uVar2 = *(undefined4 *)(iVar3 + 0x20);
    pbVar8 = (byte *)(param_3 + 4);
    local_14 = uVar2;
    local_c = FUN_0052f130(iVar3,uVar2);
    local_c = local_c & 0xffff;
    FUN_00583190(local_8,0xd);
    FUN_0052b6b0(local_8,1,&local_14,&local_c);
    if ((*(char *)(iVar4 + 0x11) != '\0') &&
       (FUN_00544760(iVar4,local_10,5,*(undefined4 *)(param_1 + 0x48),&param_2),
       *(ushort *)(local_8 + 10) < (ushort)local_c)) {
      FUN_00544870(local_8,uVar2,&param_2);
    }
    pbVar5 = (byte *)((uint)(CONCAT11(*(undefined1 *)
                                       (*(int *)(iVar3 + 0x40) + -2 +
                                       (uint)*(ushort *)(iVar3 + 0x10) * 2),
                                      *(undefined1 *)
                                       (*(int *)(iVar3 + 0x40) + -1 +
                                       (uint)*(ushort *)(iVar3 + 0x10) * 2)) &
                            *(ushort *)(iVar3 + 0x12)) + *(int *)(iVar3 + 0x38));
    pbVar7 = pbVar5;
    do {
      pbVar6 = pbVar7;
      pbVar7 = pbVar6 + 1;
      if ((*pbVar6 & 0x80) == 0) break;
    } while (pbVar7 < pbVar5 + 9);
    do {
      bVar1 = *pbVar7;
      *pbVar8 = bVar1;
      pbVar8 = pbVar8 + 1;
      pbVar7 = pbVar7 + 1;
      if ((bVar1 & 0x80) == 0) break;
    } while (pbVar7 < pbVar6 + 10);
    FUN_0053bd90(param_1,*(undefined2 *)(param_1 + 0x10),param_3,(int)pbVar8 - param_3,0,
                 *(undefined4 *)(iVar3 + 0x48),&param_2);
    iVar4 = (uint)*(byte *)(param_1 + 5) + *(int *)(param_1 + 0x38);
    *(char *)(iVar4 + 8) = (char)((uint)local_10 >> 0x18);
    *(char *)(iVar4 + 9) = (char)((uint)local_10 >> 0x10);
    *(char *)(iVar4 + 10) = (char)((uint)local_10 >> 8);
    *(char *)(iVar4 + 0xb) = (char)local_10;
    if ((local_8 != 0) && (iVar4 = *(int *)(local_8 + 0x44), iVar4 != 0)) {
      iVar3 = *(int *)(iVar4 + 0x10);
      FUN_00561130(iVar4);
      if (*(int *)(*(int *)(iVar3 + 0xb4) + 0xc) == 0) {
        FUN_00541a10(iVar3);
      }
    }
  }
  return param_2;
}


/* FUN_0052cf10 @ 0052cf10  kind=lib  attributed-by=lib-island  size=267 */

void FUN_0052cf10(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int extraout_ECX;
  uint unaff_ESI;
  uint uVar4;
  float10 fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  longlong lVar10;
  undefined4 uVar11;
  
  dVar9 = 1.0;
  dVar8 = *(double *)((int *)*param_1 + 0x6e);
  iVar2 = param_1[2];
  if ((((1.0 < dVar8) && ((*(uint *)(*(int *)*param_1 + 0x18) & 0x80000) != 0)) &&
      (((param_1[0xe] & 0x100f3000U) == 0 || (param_1[0xe] < 0)))) &&
     ((*(byte *)(iVar2 + 0x24) & 7) == 0)) {
    iVar3 = *(int *)(*(int *)(iVar2 + 0x10) + 0x1c);
    dVar7 = (double)iVar3 + *(double *)(&DAT_00745f30 + (iVar3 >> 0x1f) * -8);
    fVar5 = (float10)FUN_00534920(dVar7);
    dVar6 = (double)fVar5;
    dVar8 = (dVar7 / dVar8 + dVar9) * dVar6 * 2.0;
    if (dVar8 < *(double *)(param_1 + 0x14)) {
      lVar10 = (ulonglong)unaff_ESI << 0x20;
      uVar4 = *(uint *)(extraout_ECX + 0x20);
      uVar1 = uVar4 + *(int *)(extraout_ECX + 0x18) * 0x28;
      if (uVar4 < uVar1) {
        while( true ) {
          uVar11 = (undefined4)((ulonglong)lVar10 >> 0x20);
          lVar10 = CONCAT44(uVar11,param_1[5]);
          iVar3 = FUN_0057b180(uVar4,iVar2,param_1[4],param_1[5],uVar11);
          if (iVar3 != 0) break;
          uVar4 = uVar4 + 0x28;
          if (uVar1 <= uVar4) {
            return;
          }
        }
        *(double *)(param_1 + 0x14) = dVar8;
        param_1[0xe] = 0x20000000;
        *(double *)(param_1 + 0x10) = dVar6 + dVar9;
        param_1[0x16] = *(int *)(uVar4 + 0x18);
        param_1[0x17] = *(int *)(uVar4 + 0x1c);
      }
    }
  }
  return;
}


/* FUN_0052d020 @ 0052d020  kind=lib  attributed-by=lib-island  size=2397 */

void FUN_0052d020(undefined4 *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  int *piVar3;
  int iVar4;
  ushort *puVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ushort uVar11;
  uint uVar12;
  undefined4 uVar13;
  uint *puVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 local_cc [4];
  undefined4 *local_c8;
  undefined4 *local_c4;
  int local_c0;
  undefined4 local_b8;
  undefined4 local_a8;
  undefined1 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined8 local_94;
  uint local_8c;
  undefined4 local_88;
  double local_84;
  int local_7c;
  uint local_78;
  uint local_74;
  int local_70;
  uint *local_6c;
  int *local_68;
  uint local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_40;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  uint local_24;
  int local_20;
  int local_1c;
  undefined1 *local_18;
  char local_13;
  char local_12;
  char local_11;
  undefined1 *local_10;
  char local_a;
  char local_9;
  uint local_8;
  
  local_68 = (int *)*param_1;
  local_1c = param_1[1];
  iVar7 = param_1[2];
  local_20 = *(int *)(iVar7 + 0x2c);
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  local_88 = 0xffffffff;
  *(undefined8 *)(param_1 + 0x14) = 0x547d42aea2879f2e;
  local_18 = *(undefined1 **)(iVar7 + 0x44);
  local_38 = ((byte)~*(byte *)(iVar7 + 0x20) & 8) << 4 | 3;
  local_8c = local_38;
  local_7c = iVar7;
  local_10 = local_18;
  if (local_18 == (undefined1 *)0x0) {
    memset(local_cc,0,0x30);
    local_c8 = &local_88;
    local_c4 = &local_9c;
    local_c0 = *(int *)(iVar7 + 0x10);
    local_9c = *(undefined4 *)(local_c0 + 0x1c);
    local_98 = 1;
    local_a8 = 1;
    local_a0 = 5;
    if ((*(byte *)(iVar7 + 0x24) & 1) == 0) {
      local_b8 = *(undefined4 *)(*(int *)(iVar7 + 0x10) + 8);
    }
    local_10 = local_cc;
    local_74 = 0xfff0ffff;
    local_38 = 3;
    local_18 = (undefined1 *)0x0;
  }
  else {
    local_74 = 0xffffcfff;
  }
  if ((uint *)param_1[8] == (uint *)0x0) {
    local_78 = 0;
  }
  else {
    local_78 = *(uint *)param_1[8];
  }
  if (param_1[0xb] == 0) {
    local_34 = 0;
    local_a = 0 < (int)local_78;
    local_9 = param_1[9] != 0;
  }
  else {
    local_34 = (uint)*(ushort *)(param_1[0xb] * 0x58 + -0x52 + param_1[0xd]);
    local_a = (int)local_34 < (int)local_78;
    local_9 = '\0';
  }
  while (local_10 != (undefined1 *)0x0) {
    local_6c = *(uint **)(local_10 + 8);
    local_60._0_4_ = 0;
    uVar10 = (uint)local_60;
    uVar12 = 0;
    iVar7 = 1;
    local_30 = 0;
    local_70 = 1;
    local_84 = 1.0;
    local_28 = 0;
    local_13 = '\0';
    local_58 = 0;
    local_48 = 0;
    local_40 = 0;
    local_60 = (ulonglong)(ushort)local_34 << 0x30;
    local_8 = 0;
    local_12 = local_9;
    local_11 = local_a;
    if (0 < *(int *)(local_10 + 0x24)) {
      do {
        uVar10 = local_8;
        piVar3 = (int *)FUN_005372f0(local_1c,local_20,
                                     *(undefined4 *)(*(int *)(local_10 + 4) + uVar12 * 4),param_1[4]
                                     ,param_1[5],local_38,local_18);
        if (piVar3 == (int *)0x0) break;
        local_8 = uVar10 | 0x11000;
        uVar13 = local_60._4_4_;
        local_60 = CONCAT44(local_60._4_4_,uVar10) | 0x11000;
        if ((*(ushort *)(piVar3 + 4) & 1) == 0) {
          if ((char)*(ushort *)(piVar3 + 4) < '\0') {
            local_8 = uVar10 | 0x91000;
            local_60 = CONCAT44(uVar13,uVar10) | 0x91000;
          }
        }
        else {
          local_8 = uVar10 | 0x51000;
          local_60 = CONCAT44(uVar13,uVar10) | 0x51000;
          if ((*(ushort *)(*piVar3 + 2) & 0x800) == 0) {
            piVar1 = *(int **)(*piVar3 + 0x10);
            if ((piVar1 != (int *)0x0) && (iVar4 = *piVar1, iVar4 != 0)) {
              iVar7 = iVar7 * iVar4;
              local_70 = iVar7;
            }
          }
          else {
            iVar7 = iVar7 * 0x19;
            local_30 = 1;
            local_70 = iVar7;
          }
        }
        uVar11 = (short)uVar12 + 1;
        uVar12 = (uint)uVar11;
        local_40 = CONCAT44(local_40._4_4_ | piVar3[7],(uint)local_40 | piVar3[6]);
        local_60._0_6_ = CONCAT24(uVar11,(uint)local_60);
        uVar10 = local_8;
      } while ((int)uVar12 < *(int *)(local_10 + 0x24));
    }
    puVar2 = local_18;
    uVar9 = uVar10;
    local_2c = uVar12;
    if ((uVar12 == *(uint *)(local_10 + 0x24)) && (local_10[0x2c] != '\0')) {
      if ((uVar10 & 0xc0000) == 0) {
        uVar13 = local_60._4_4_;
        local_60 = CONCAT44(local_60._4_4_,uVar10) | 0x2000000;
        if ((param_1[0xb] == 0) ||
           (uVar9 = uVar10 | 0x2000000, local_8 = uVar10 | 0x2000000,
           (*(uint *)(param_1[0xb] * 0x58 + -0x58 + param_1[0xd]) & 0x4000000) != 0)) {
          local_60 = CONCAT44(uVar13,uVar10) | 0x6000000;
          uVar9 = uVar10 | 0x6000000;
          local_8 = uVar10 | 0x6000000;
        }
      }
    }
    else if (local_10[0x2e] == '\0') {
      if (uVar12 == *(uint *)(local_10 + 0x24)) {
        uVar13 = 0xffffffff;
      }
      else {
        uVar13 = *(undefined4 *)(*(int *)(local_10 + 4) + uVar12 * 4);
      }
      iVar7 = FUN_005372f0(local_1c,local_20,uVar13,param_1[4],param_1[5],0x3c,local_18);
      if (iVar7 != 0) {
        iVar7 = FUN_005372f0(local_1c,local_20,uVar13,param_1[4],param_1[5],0x18,puVar2);
        iVar4 = FUN_005372f0(local_1c,local_20,uVar13,param_1[4],param_1[5],0x24,local_18);
        dVar16 = 1.0;
        local_84 = 1.0;
        if (iVar4 != 0) {
          dVar16 = 4.0;
          local_84 = 4.0;
        }
        uVar12 = local_40._4_4_;
        uVar9 = (uint)local_40;
        if (iVar7 != 0) {
          uVar9 = (uint)local_40 | *(uint *)(iVar7 + 0x18);
          local_84 = dVar16 * 4.0;
          uVar10 = uVar10 | 0x100000;
          uVar12 = local_40._4_4_ | *(uint *)(iVar7 + 0x1c);
          local_28 = 1;
          local_40 = CONCAT44(uVar12,uVar9);
        }
        if (iVar4 != 0) {
          local_28 = local_28 + 1;
          uVar10 = uVar10 | 0x200000;
          local_40 = CONCAT44(uVar12 | *(uint *)(iVar4 + 0x1c),uVar9 | *(uint *)(iVar4 + 0x18));
        }
        uVar9 = uVar10 | 0x22000;
        local_60 = CONCAT44(local_60._4_4_,uVar10) | 0x22000;
        local_8 = uVar9;
      }
    }
    uVar10 = local_2c;
    if ((local_a != '\0') && ((*(byte *)(local_7c + 0x20) & 8) == 0)) {
      local_24 = 2;
      uVar11 = FUN_0053c840(param_1,local_10,local_20,&local_24);
      local_60 = CONCAT26(uVar11,(undefined6)local_60);
      if (((int)local_34 < (int)(uint)uVar11) || (uVar12 = uVar9, (uVar9 & 0x4000000) != 0)) {
        uVar12 = uVar9 | 0x800000;
        local_60 = CONCAT44(local_60._4_4_,uVar9) | 0x800000;
        local_8 = uVar12;
      }
      uVar8 = uVar12;
      if (local_78 == uVar11) {
        uVar8 = uVar12 | 0x22000;
        local_11 = '\0';
        local_60 = CONCAT44(local_60._4_4_,uVar12) | 0x22000;
        local_8 = uVar8;
      }
      uVar9 = uVar8;
      if ((local_24 & 1) != 0) {
        uVar9 = uVar8 | 0x1000000;
        local_60 = CONCAT44(local_60._4_4_,uVar8) | 0x1000000;
        local_8 = uVar9;
      }
    }
    uVar12 = uVar9;
    if (((local_9 != '\0') &&
        (iVar7 = FUN_0053c270(local_68,local_1c,local_10,local_20,param_1[9],uVar10), iVar7 != 0))
       && ((uVar9 & 0x40000) == 0)) {
      uVar12 = uVar9 | 0x40022000;
      local_12 = '\0';
      local_60 = CONCAT44(local_60._4_4_,uVar9) | 0x40022000;
      local_8 = uVar12;
    }
    cVar6 = local_13;
    if (local_18 != (undefined1 *)0x0) {
      iVar7 = *(int *)(local_18 + 0x24);
      uVar10 = *(uint *)(local_7c + 0x38);
      local_64 = *(uint *)(local_7c + 0x3c);
      uVar9 = uVar12;
      if (0 < iVar7) {
        puVar14 = *(uint **)(local_18 + 4);
        do {
          uVar12 = *puVar14;
          if ((int)uVar12 < 0x3f) {
            uVar9 = 1 << (uVar12 & 0x1f);
            uVar8 = 0;
            if (0x1f < uVar12) {
              uVar8 = uVar9;
            }
            uVar9 = uVar9 ^ uVar8;
            if (0x3f < uVar12) {
              uVar8 = uVar9;
            }
            uVar10 = uVar10 & ~uVar9;
            local_64 = local_64 & ~uVar8;
          }
          puVar14 = puVar14 + 1;
          iVar7 = iVar7 + -1;
          uVar9 = local_8;
          local_24 = uVar10;
        } while (iVar7 != 0);
      }
      if (uVar10 == 0 && local_64 == 0) {
        uVar12 = uVar9 | 0x400000;
        local_60 = CONCAT44(local_60._4_4_,uVar9) | 0x400000;
        local_8 = uVar12;
      }
      else {
        uVar12 = uVar9;
        cVar6 = '\x01';
      }
    }
    uVar10 = local_6c[local_2c];
    dVar16 = (double)(int)(local_70 * uVar10) +
             *(double *)(&DAT_00745f30 + ((int)(local_70 * uVar10) >> 0x1f) * -8);
    iVar7 = local_70;
    if ((local_30 != 0) &&
       (uVar9 = *local_6c,
       (double)(int)uVar9 + *(double *)(&DAT_00745f30 + ((int)uVar9 >> 0x1f) * -8) < dVar16 * 2.0))
    {
      dVar16 = (double)(uVar9 >> 1) + 0.0;
      iVar7 = (int)(dVar16 / ((double)(int)uVar10 +
                             *(double *)(&DAT_00745f30 + ((int)uVar10 >> 0x1f) * -8)));
    }
    dVar16 = dVar16 / local_84;
    if (dVar16 < 1.0) {
      dVar16 = 1.0;
    }
    if ((((uVar12 & 0xfe7fffff) == 0x400000) && ((*(byte *)(local_1c + 0x16) & 4) == 0)) &&
       ((DAT_007665f0 != 0 && ((*(byte *)(*local_68 + 0x34) & 0x40) == 0)))) {
      iVar7 = *local_6c * 3 + *(int *)(local_10 + 0x24);
      uVar9 = uVar12 | 0x80020000;
      dVar19 = (double)iVar7 + *(double *)(&DAT_00745f30 + (iVar7 >> 0x1f) * -8);
      local_60 = CONCAT44(local_60._4_4_,uVar12) | 0x80020000;
LAB_0052d62e:
      uVar11 = local_60._6_2_;
      local_8 = uVar9;
    }
    else {
      uVar10 = *local_6c;
      if ((uVar12 & 0x100f3000) == 0) {
        uVar9 = uVar12 & 0xffbfffff;
        dVar19 = (double)(int)(uVar10 << 2) +
                 *(double *)(&DAT_00745f30 + ((int)(uVar10 << 2) >> 0x1f) * -8);
        local_60 = CONCAT44(local_60._4_4_,uVar12) & 0xffffffffffbfffff;
        if (local_18 == (undefined1 *)0x0) goto LAB_0052d62e;
        uVar9 = uVar12 & 0xff3fffff;
        local_60 = CONCAT26((ushort)local_34,(int6)CONCAT44(local_60._4_4_,uVar12)) &
                   0xffffffffff3fffff;
        uVar11 = (ushort)local_34;
        local_8 = uVar9;
      }
      else {
        dVar15 = 1.0;
        dVar19 = 10.0;
        if (10.0 < (double)(int)uVar10 + *(double *)(&DAT_00745f30 + ((int)uVar10 >> 0x1f) * -8)) {
          do {
            dVar19 = dVar19 * 10.0;
            dVar15 = dVar15 + 1.0;
          } while (dVar19 < (double)(int)uVar10 +
                            *(double *)(&DAT_00745f30 + ((int)uVar10 >> 0x1f) * -8));
        }
        dVar19 = (double)iVar7;
        if ((local_18 != (undefined1 *)0x0) && (cVar6 != '\0')) {
          dVar19 = dVar19 + dVar16;
        }
        dVar19 = dVar19 * dVar15 + dVar16;
        uVar9 = uVar12;
        uVar11 = local_60._6_2_;
      }
    }
    if (local_11 != '\0') {
      dVar17 = 1.0;
      dVar15 = 10.0;
      dVar18 = ((double)(int)(local_78 - uVar11) * dVar16) / (double)(int)local_78;
      if (10.0 < dVar18) {
        do {
          dVar15 = dVar15 * 10.0;
          dVar17 = dVar17 + 1.0;
        } while (dVar15 < dVar18);
      }
      dVar19 = (double)(byte)((local_60._6_2_ == 0) + 2) * dVar17 * dVar16 + dVar19;
      uVar11 = local_60._6_2_;
    }
    if (local_12 != '\0') {
      dVar15 = 1.0;
      dVar17 = 10.0;
      if (10.0 < dVar16) {
        do {
          dVar17 = dVar17 * 10.0;
          dVar15 = dVar15 + 1.0;
        } while (dVar17 < dVar16);
      }
      dVar19 = dVar19 + dVar15 * dVar16 * 3.0;
    }
    if ((2.0 < dVar16) && (dVar19 <= *(double *)(param_1 + 0x14))) {
      uVar10 = 0;
      piVar3 = *(int **)(local_1c + 4);
      iVar7 = *piVar3;
      if (0 < iVar7) {
        do {
          piVar3 = piVar3 + 1;
          if (*piVar3 == local_20) {
            uVar12 = 1 << (uVar10 & 0x1f);
            local_30 = 0;
            if (0x1f < uVar10) {
              local_30 = uVar12;
            }
            uVar12 = uVar12 ^ local_30;
            if (0x3f < uVar10) {
              local_30 = uVar12;
            }
            goto LAB_0052d80b;
          }
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < iVar7);
      }
      local_94 = 0;
      local_94._0_4_ = 0;
      local_30 = 0;
      uVar12 = (uint)local_94;
LAB_0052d80b:
      iVar7 = *(int *)(local_1c + 0x18);
      puVar5 = (ushort *)(*(int *)(local_1c + 0x20) + 0x10);
      do {
        if (iVar7 == 0) break;
        if ((((puVar5[1] & 2) == 0) && ((param_1[6] & *(uint *)(puVar5 + 8)) == uVar12)) &&
           ((param_1[7] & *(uint *)(puVar5 + 10)) == local_30)) {
          uVar11 = *puVar5;
          if ((uVar11 & 0x83) == 0) {
            if ((uVar11 & 0x3c) == 0) {
              if (uVar11 != 0x800) {
                dVar16 = dVar16 * 0.5;
              }
            }
            else if (local_28 == 0) {
              dVar16 = dVar16 / 3.0;
            }
            else {
              local_28 = local_28 + -1;
            }
          }
          else if (local_2c == 0) {
            dVar16 = dVar16 / 10.0;
          }
          else {
            local_2c = local_2c - 1;
          }
        }
        iVar7 = iVar7 + -1;
        puVar5 = puVar5 + 0x14;
      } while (2.0 < dVar16);
      uVar9 = local_8;
      uVar11 = local_60._6_2_;
      if (dVar16 < 2.0) {
        dVar16 = 2.0;
      }
    }
    if (((local_18 == (undefined1 *)0x0) || (uVar9 != 0)) &&
       ((dVar19 < *(double *)(param_1 + 0x14) ||
        ((dVar19 <= *(double *)(param_1 + 0x14) &&
         ((*(ushort *)((int)param_1 + 0x3e) < uVar11 || (dVar16 < *(double *)(param_1 + 0x10))))))))
       ) {
      *(ulonglong *)(param_1 + 0xe) = local_60;
      *(double *)(param_1 + 0x10) = dVar16;
      *(undefined8 *)(param_1 + 0x12) = 0;
      *(double *)(param_1 + 0x14) = dVar19;
      *(undefined8 *)(param_1 + 0x16) = local_40;
      param_1[0xe] = param_1[0xe] & local_74;
      param_1[0x12] = local_18;
    }
    if (*(int *)(local_7c + 0x44) != 0) break;
    local_18 = *(undefined1 **)(local_10 + 0x14);
    local_74 = 0xffffcfff;
    local_38 = local_8c;
    local_10 = local_18;
  }
  uVar10 = local_38;
  if ((param_1[8] == 0) && ((*(uint *)(*local_68 + 0x18) & 0x10000) != 0)) {
    param_1[0xe] = param_1[0xe] | 0x1000000;
  }
  FUN_0052d9f0(param_1);
  FUN_0052cf10(param_1);
  param_1[0xe] = param_1[0xe] | uVar10;
  return;
}


/* FUN_0052d990 @ 0052d990  kind=lib  attributed-by=lib-island  size=91 */

void FUN_0052d990(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = param_1;
  if ((*(byte *)(*(int *)(param_1[2] + 0x10) + 0x2a) & 0x10) != 0) {
    param_1 = (undefined4 *)0x0;
    puVar1[10] = &param_1;
    FUN_0052dd50();
    if (*(int *)((int)param_1 + 0x1c) != 0) {
      FUN_00524410(*(undefined4 *)((int)param_1 + 0x18));
    }
    FUN_005521a0(*(undefined4 *)*puVar1,param_1);
    return;
  }
  FUN_0052d020(param_1);
  return;
}


/* FUN_0052d9f0 @ 0052d9f0  kind=lib  attributed-by=lib-island  size=858 */

void FUN_0052d9f0(undefined4 *param_1)

{
  int iVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 **ppuVar9;
  uint uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined4 *local_208 [8];
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  double local_1c8;
  double local_1b8;
  uint local_1b0;
  uint local_1ac;
  double local_1a8;
  double local_1a0;
  undefined4 *local_198;
  int local_194;
  uint local_190;
  uint local_18c;
  uint local_188;
  uint local_184;
  undefined8 local_180;
  uint local_178;
  uint local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 *local_160;
  undefined1 local_15c;
  undefined2 local_15a;
  undefined4 local_158;
  uint local_150;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_198 = (undefined4 *)param_1[1];
  local_194 = *(int *)(param_1[2] + 0x2c);
  piVar5 = (int *)local_198[1];
  uVar3 = 0;
  iVar1 = *piVar5;
  if (0 < iVar1) {
    do {
      piVar5 = piVar5 + 1;
      if (*piVar5 == local_194) {
        local_178 = 1 << (uVar3 & 0x1f);
        local_174 = 0;
        if (0x1f < uVar3) {
          local_174 = local_178;
        }
        local_178 = local_178 ^ local_174;
        if (0x3f < uVar3) {
          local_174 = local_178;
        }
        goto LAB_0052da57;
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < iVar1);
  }
  local_180 = 0;
  local_180._4_4_ = 0;
  local_180._0_4_ = 0;
  local_178 = (uint)local_180;
  local_174 = local_180._4_4_;
LAB_0052da57:
  local_184 = local_198[8];
  local_190 = local_184 + local_198[6] * 0x28;
  if (((((*(byte *)(param_1[2] + 0x24) & 1) == 0) && (*(int *)(param_1[2] + 0x44) == 0)) &&
      ((*(byte *)((int)local_198 + 0x16) & 0x80) == 0)) && (local_184 < local_190)) {
    do {
      if (((*(short *)(local_184 + 0x10) == 0x100) &&
          ((~local_178 & param_1[4] & *(uint *)(local_184 + 0x20)) == 0 &&
           (~local_174 & param_1[5] & *(uint *)(local_184 + 0x24)) == 0)) &&
         (iVar1 = *(int *)(local_184 + 0xc),
         (*(uint *)(iVar1 + 0x168) & local_178) != 0 || (*(uint *)(iVar1 + 0x16c) & local_174) != 0)
         ) {
        uVar3 = *(int *)(iVar1 + 0x20) + *(int *)(iVar1 + 0x18) * 0x28;
        puVar7 = param_1;
        ppuVar9 = local_208;
        for (iVar6 = 0x18; iVar6 != 0; iVar6 = iVar6 + -1) {
          *ppuVar9 = (undefined4 *)*puVar7;
          puVar7 = puVar7 + 1;
          ppuVar9 = ppuVar9 + 1;
        }
        local_1e8 = 0;
        local_1e4 = 0;
        local_1e0 = 0;
        uVar8 = *(uint *)(iVar1 + 0x20);
        local_180 = 0;
        local_180._4_4_ = 0;
        dVar11 = 0.0;
        dVar12 = 0.0;
        local_180._0_4_ = 0;
        local_1a8 = 0.0;
        local_1a0 = 0.0;
        uVar4 = (uint)local_180;
        uVar10 = local_180._4_4_;
        local_18c = uVar3;
        if (uVar8 < uVar3) {
          local_188 = 0;
          do {
            if (*(short *)(uVar8 + 0x10) == 0x200) {
              local_208[1] = *(undefined4 **)(uVar8 + 0xc);
LAB_0052dc0c:
              FUN_0052d990(local_208);
              dVar11 = local_1b8 + local_1a8;
              uVar4 = local_188 | local_1b0;
              uVar10 = uVar10 | local_1ac;
              dVar12 = local_1c8 + local_1a0;
              uVar3 = local_18c;
              local_1a8 = dVar11;
              local_1a0 = dVar12;
              local_188 = uVar4;
              if (*(double *)(param_1 + 0x14) <= dVar11) break;
            }
            else if (*(int *)(uVar8 + 8) == local_194) {
              local_160 = local_198;
              local_170 = *local_198;
              local_16c = local_198[1];
              local_15a = 0;
              local_15c = 0x45;
              local_158 = 1;
              local_208[1] = &local_170;
              local_150 = uVar8;
              goto LAB_0052dc0c;
            }
            uVar8 = uVar8 + 0x28;
          } while (uVar8 < uVar3);
        }
        if (param_1[8] != 0) {
          dVar13 = 1.0;
          dVar14 = 10.0;
          if (10.0 < dVar12) {
            do {
              dVar14 = dVar14 * 10.0;
              dVar13 = dVar13 + 1.0;
            } while (dVar14 < dVar12);
          }
          dVar11 = dVar11 + dVar13 * dVar12;
        }
        if (dVar11 < *(double *)(param_1 + 0x14)) {
          *(double *)(param_1 + 0x14) = dVar11;
          param_1[0x16] = uVar4;
          param_1[0x17] = uVar10;
          *(double *)(param_1 + 0x10) = dVar12;
          if (param_1[0xb] == 0) {
            uVar2 = 0;
          }
          else {
            uVar2 = *(undefined2 *)(param_1[0xb] * 0x58 + -0x52 + param_1[0xd]);
          }
          *(undefined2 *)((int)param_1 + 0x3e) = uVar2;
          param_1[0xe] = 0x10000000;
          param_1[0x12] = local_184;
        }
      }
      local_184 = local_184 + 0x28;
    } while (local_184 < local_190);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0052dd50 @ 0052dd50  kind=lib  attributed-by=lib-island  size=543 */

void FUN_0052dd50(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  void *_Dst;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  int local_c;
  
  uVar1 = *param_1;
  iVar2 = param_1[1];
  uVar3 = *(undefined4 *)(param_1[2] + 0x10);
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  param_1[0xe] = 0x8000000;
  piVar7 = *(int **)param_1[10];
  if (piVar7 == (int *)0x0) {
    piVar7 = (int *)FUN_00529970(param_1);
    *(int **)param_1[10] = piVar7;
    if (piVar7 == (int *)0x0) {
      return;
    }
  }
  _Dst = (void *)piVar7[4];
  local_c = 0;
  if (0 < *piVar7) {
    iVar10 = piVar7[1] + 5;
    do {
      iVar8 = *(int *)(iVar2 + 0x20);
      *(bool *)iVar10 =
           (*(uint *)(iVar8 + 0x18 + *(int *)(iVar10 + 3) * 0x28) & param_1[4]) == 0 &&
           (*(uint *)(iVar8 + 0x1c + *(int *)(iVar10 + 3) * 0x28) & param_1[5]) == 0;
      local_c = local_c + 1;
      iVar10 = iVar10 + 0xc;
    } while (local_c < *piVar7);
  }
  memset(_Dst,0,*piVar7 << 3);
  if (piVar7[7] != 0) {
    FUN_00524410(piVar7[6]);
  }
  iVar10 = piVar7[2];
  piVar7[6] = 0;
  piVar7[5] = 0;
  piVar7[7] = 0;
  piVar7[8] = 0;
  piVar7[10] = -0x5d7860d2;
  piVar7[0xb] = 0x546d42ae;
  if (param_1[8] == 0) {
    piVar7[2] = 0;
  }
  iVar8 = FUN_0057d440(uVar1,uVar3,piVar7);
  if (iVar8 == 0) {
    iVar8 = 0;
    if (0 < *piVar7) {
      piVar9 = (int *)(piVar7[1] + 8);
      do {
        if (0 < *(int *)((int)_Dst + iVar8 * 8)) {
          iVar4 = *piVar9;
          iVar5 = *(int *)(iVar2 + 0x20);
          param_1[0x16] = param_1[0x16] | *(uint *)(iVar5 + 0x18 + iVar4 * 0x28);
          param_1[0x17] = param_1[0x17] | *(uint *)(iVar5 + 0x1c + iVar4 * 0x28);
        }
        iVar8 = iVar8 + 1;
        piVar9 = piVar9 + 3;
      } while (iVar8 < *piVar7);
    }
    dVar13 = *(double *)(piVar7 + 10);
    if ((param_1[8] != 0) && (piVar7[8] == 0)) {
      dVar11 = 1.0;
      dVar12 = 10.0;
      if (10.0 < dVar13) {
        do {
          dVar12 = dVar12 * 10.0;
          dVar11 = dVar11 + 1.0;
        } while (dVar12 < dVar13);
      }
      dVar13 = dVar13 + dVar11 * dVar13;
    }
    if (dVar13 <= 5e+98) {
      *(double *)(param_1 + 0x14) = dVar13;
    }
    else {
      *(undefined8 *)(param_1 + 0x14) = 0x546d42aea2879f2e;
    }
    param_1[0x12] = piVar7;
    if (piVar7[8] == 0) {
      if (param_1[0xb] == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined2 *)(param_1[0xb] * 0x58 + -0x52 + param_1[0xd]);
      }
      *(undefined2 *)((int)param_1 + 0x3e) = uVar6;
    }
    else {
      param_1[0xe] = param_1[0xe] | 0x800000;
      *(short *)((int)param_1 + 0x3e) = (short)iVar10;
    }
    *(undefined2 *)(param_1 + 0xf) = 0;
    piVar7[2] = iVar10;
    FUN_0052d9f0(param_1);
  }
  return;
}


/* FUN_0052e030 @ 0052e030  kind=lib  attributed-by=lib-island  size=53 */

void FUN_0052e030(int *param_1,char *param_2,undefined1 *param_3,undefined1 param_4)

{
  int iVar1;
  
  iVar1 = *param_1;
  if ((*(char *)(iVar1 + 0x38) == '\0') && (*param_2 == 'b')) {
    *param_3 = param_4;
    FUN_00555e30(iVar1,*(undefined4 *)(param_3 + 0xc));
    *(undefined4 *)(param_3 + 0xc) = 0;
  }
  return;
}


/* FUN_0052e230 @ 0052e230  kind=lib  attributed-by=lib-island  size=374 */

int FUN_0052e230(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  
  uVar7 = 0;
  iVar6 = *(int *)(param_1 + 0x14);
  iVar4 = *(int *)(iVar6 + 0x44);
  *(undefined4 *)(iVar4 + 0x10) = param_2;
  *(undefined4 *)(iVar4 + 0x14) = param_3;
  iVar4 = FUN_00527300(*(undefined4 *)(param_1 + 0x14));
  if (iVar4 == 100) {
    uVar2 = *(uint *)(*(int *)(**(int **)(iVar6 + 0x40) + 0x58) + *(int *)(param_1 + 0xc) * 4);
    if (0xb < uVar2) {
      *(undefined4 *)(param_1 + 8) =
           *(undefined4 *)(*(int *)(**(int **)(iVar6 + 0x40) + 0x5c) + *(int *)(param_1 + 0xc) * 4);
      *(uint *)(param_1 + 4) = uVar2 - 0xc >> 1;
      puVar3 = *(undefined4 **)**(undefined4 **)(iVar6 + 0x40);
      *(undefined4 **)(param_1 + 0x10) = puVar3;
      FUN_0054d260(*puVar3);
      iVar6 = *(int *)(param_1 + 0x10);
      FUN_00524410(*(undefined4 *)(iVar6 + 0x14));
      *(undefined4 *)(iVar6 + 0x14) = 0;
      *(undefined1 *)(iVar6 + 0x5c) = 1;
      iVar6 = **(int **)(param_1 + 0x10);
      if (*(char *)(iVar6 + 9) != '\0') {
        piVar1 = (int *)(iVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          iVar4 = *(int *)(*(int *)(iVar6 + 4) + 0x38);
          if (iVar4 != 0) {
            (*DAT_00766638)(iVar4);
          }
          *(undefined1 *)(iVar6 + 10) = 0;
        }
      }
      *param_4 = 0;
      return 0;
    }
    if (uVar2 == 0) {
      pcVar5 = "null";
    }
    else {
      pcVar5 = "real";
      if (uVar2 != 7) {
        pcVar5 = "integer";
      }
    }
    uVar7 = FUN_0055d980(*(undefined4 *)(param_1 + 0x18),"cannot open value of type %s",pcVar5);
    iVar4 = 1;
    FUN_00528070(*(undefined4 *)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    iVar6 = FUN_00528070(*(int *)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x14) = 0;
    if (iVar6 == 0) {
      uVar7 = FUN_0055d980(*(undefined4 *)(param_1 + 0x18),"no such rowid: %lld",param_2,param_3);
      *param_4 = uVar7;
      return 1;
    }
    uVar7 = FUN_00525e30(*(undefined4 *)(param_1 + 0x18));
    uVar7 = FUN_0055d980(*(undefined4 *)(param_1 + 0x18),&DAT_00716900,uVar7);
    *param_4 = uVar7;
    return iVar6;
  }
  *param_4 = uVar7;
  return iVar4;
}


/* FUN_0052e3b0 @ 0052e3b0  kind=lib  attributed-by=lib-island  size=595 */

int FUN_0052e3b0(int param_1,uint *param_2,byte param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  iVar3 = *(int *)(param_1 + 4);
  if (*(char *)(iVar3 + 0x11) == '\0') {
    iVar3 = FUN_00529110(iVar3,&local_8,&local_c,1,0);
    uVar5 = local_8;
    uVar6 = local_c;
    if (iVar3 != 0) {
      return iVar3;
    }
  }
  else {
    for (iVar1 = *(int *)(iVar3 + 8); iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
      FUN_00524410(*(undefined4 *)(iVar1 + 0x14));
      *(undefined4 *)(iVar1 + 0x14) = 0;
    }
    FUN_0054d510(param_1,4,&local_c);
    local_8 = local_c - 1;
    uVar6 = local_c;
    while( true ) {
      uVar6 = uVar6 + 1;
      if (uVar6 < 2) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(uint *)(iVar3 + 0x24) / 5 + 1;
        iVar1 = (local_8 / uVar5) * uVar5;
        uVar5 = iVar1 + 2;
        if (uVar5 == DAT_007666d0 / *(uint *)(iVar3 + 0x20) + 1) {
          uVar5 = iVar1 + 3;
        }
      }
      if ((uVar6 != uVar5) && (uVar6 != DAT_007666d0 / *(uint *)(iVar3 + 0x20) + 1)) break;
      local_8 = local_8 + 1;
    }
    local_8 = FUN_00529110(iVar3,&local_18,&local_10,uVar6,1);
    if (local_8 != 0) {
      return local_8;
    }
    if (local_10 == uVar6) {
      local_8 = 0;
      uVar5 = local_18;
    }
    else {
      local_c = local_c & 0xffffff00;
      local_14 = local_8;
      FUN_00545740(local_18);
      iVar1 = FUN_0052e950(iVar3,uVar6,&local_8,0);
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar1 = FUN_005445e0(iVar3,uVar6,&local_c,&local_14);
      if (((char)local_c == '\x01') || ((char)local_c == '\x02')) {
        iVar1 = FUN_00551190(0xd8a0);
      }
      uVar5 = local_8;
      if (iVar1 != 0) {
        FUN_00545740(local_8);
        return iVar1;
      }
      local_18 = FUN_00545a20(iVar3,local_8,local_c,local_14,local_10,0);
      FUN_00545740(uVar5);
      if (local_18 != 0) {
        return local_18;
      }
      iVar1 = FUN_0052e950(iVar3,uVar6,&local_8,0);
      uVar5 = local_8;
      if (iVar1 != 0) {
        return iVar1;
      }
      local_8 = FUN_00560330(*(undefined4 *)(local_8 + 0x44));
      if (local_8 != 0) {
        FUN_00545740(uVar5);
        return local_8;
      }
    }
    FUN_00544760(iVar3,uVar6,1,0,&local_8);
    uVar2 = local_8;
    if ((local_8 != 0) || (uVar2 = FUN_0054f6e0(param_1,4,uVar6), uVar2 != 0)) {
      FUN_00545740(uVar5);
      return uVar2;
    }
  }
  uVar4 = 10;
  if ((param_3 & 1) != 0) {
    uVar4 = 0xd;
  }
  FUN_00583190(uVar5,uVar4);
  iVar3 = *(int *)(uVar5 + 0x44);
  if (iVar3 != 0) {
    iVar1 = *(int *)(iVar3 + 0x10);
    FUN_00561130(iVar3);
    if (*(int *)(*(int *)(iVar1 + 0xb4) + 0xc) == 0) {
      FUN_00541a10(iVar1);
    }
  }
  *param_2 = uVar6;
  return 0;
}


/* FUN_0052e610 @ 0052e610  kind=lib  attributed-by=lib-island  size=116 */

undefined4 FUN_0052e610(int param_1,int param_2,int param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((param_3 != 0) && ((*(byte *)(iVar1 + 0x16) & 1) != 0)) {
    return 8;
  }
  if ((param_2 == 1) && (*(int *)(iVar1 + 0x2c) == 0)) {
    param_2 = 0;
  }
  param_5[6] = param_2;
  *(undefined2 *)((int)param_5 + 0x5e) = 0xffff;
  param_5[4] = param_4;
  *param_5 = param_1;
  param_5[1] = iVar1;
  *(char *)(param_5 + 0x16) = (char)param_3;
  iVar2 = *(int *)(iVar1 + 8);
  param_5[2] = iVar2;
  if (iVar2 != 0) {
    *(int **)(iVar2 + 0xc) = param_5;
  }
  *(int **)(iVar1 + 8) = param_5;
  *(undefined1 *)((int)param_5 + 0x5b) = 0;
  param_5[8] = 0;
  param_5[9] = 0;
  return 0;
}


/* FUN_0052e690 @ 0052e690  kind=lib  attributed-by=lib-island  size=501 */

int FUN_0052e690(int param_1,uint param_2,uint *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint local_c;
  int local_8;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  if (puVar1[2] != 0) {
    return 0x106;
  }
  iVar2 = FUN_0055eb70(*puVar1,param_2,&local_c,0);
  if (iVar2 == 0) {
    iVar2 = *(int *)(local_c + 8);
    *(undefined4 *)(iVar2 + 0x38) = *(undefined4 *)(local_c + 4);
    *(uint *)(iVar2 + 0x44) = local_c;
    *(undefined4 **)(iVar2 + 0x34) = puVar1;
    *(uint *)(iVar2 + 0x48) = param_2;
    *(byte *)(iVar2 + 5) = (param_2 != 1) - 1U & 100;
    iVar3 = FUN_0054c690(param_1,param_2,0);
    local_8 = iVar3;
    if (iVar3 != 0) {
      FUN_00545740(iVar2);
      return iVar3;
    }
    *param_3 = 0;
    if (param_2 < 2) {
      FUN_00583190(iVar2,9);
      FUN_00545740(iVar2);
      iVar2 = 0;
    }
    else {
      if (*(char *)((int)puVar1 + 0x11) == '\0') {
        FUN_00539430(iVar2,&local_8);
        FUN_00545740(iVar2);
        return local_8;
      }
      FUN_0054d510(param_1,4,&local_c);
      uVar6 = local_c;
      if (param_2 == local_c) {
        FUN_00539430(iVar2,&local_8);
        FUN_00545740(iVar2);
        if (local_8 != 0) {
          return local_8;
        }
LAB_0052e812:
        uVar4 = DAT_007666d0 / (uint)puVar1[8];
        do {
          do {
            uVar6 = uVar6 - 1;
          } while (uVar6 == uVar4 + 1);
          uVar5 = FUN_00544710(puVar1,uVar6);
        } while (uVar5 == uVar6);
        iVar2 = FUN_0054f6e0(param_1,4,uVar6);
        return iVar2;
      }
      FUN_00545740(iVar2);
      iVar2 = FUN_0052e950(puVar1,uVar6,&local_c,0);
      if (iVar2 == 0) {
        iVar2 = FUN_0055f390(*puVar1,*(undefined4 *)(local_c + 0x44),param_2,0);
        local_8 = iVar2;
        if (iVar2 == 0) {
          *(uint *)(local_c + 0x48) = param_2;
          iVar2 = FUN_005489b0(local_c);
        }
        FUN_00545740(local_c);
        if (iVar2 != 0) {
          return iVar2;
        }
        local_c = 0;
        local_8 = FUN_0052e950(puVar1,uVar6,&local_c,0);
        uVar4 = local_c;
        FUN_00539430(local_c,&local_8);
        FUN_00545740(uVar4);
        iVar2 = local_8;
        if (local_8 == 0) {
          *param_3 = uVar6;
          goto LAB_0052e812;
        }
      }
    }
  }
  return iVar2;
}


/* FUN_0052e890 @ 0052e890  kind=lib  attributed-by=lib-island  size=189 */

void FUN_0052e890(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = param_1[1];
  FUN_0054c040(*(undefined4 *)(iVar2 + 0x3c));
  *(undefined4 *)(iVar2 + 0x3c) = 0;
  if ((char)param_1[2] != '\0') {
    if (1 < *(int *)(*param_1 + 0x84)) {
      iVar2 = param_1[1];
      if (*(int **)(iVar2 + 0x4c) == param_1) {
        *(ushort *)(iVar2 + 0x16) = *(ushort *)(iVar2 + 0x16) & 0xff9f;
        *(undefined4 *)(iVar2 + 0x4c) = 0;
        for (iVar2 = *(int *)(iVar2 + 0x48); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0xc)) {
          *(undefined1 *)(iVar2 + 8) = 1;
        }
      }
      *(undefined1 *)(param_1 + 2) = 1;
      return;
    }
    if ((char)param_1[2] != '\0') {
      FUN_0052ff10(param_1);
      piVar1 = (int *)(iVar2 + 0x28);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        *(undefined1 *)(iVar2 + 0x13) = 0;
      }
    }
  }
  *(undefined1 *)(param_1 + 2) = 0;
  if ((*(char *)(iVar2 + 0x13) == '\0') && (*(int *)(iVar2 + 0xc) != 0)) {
    iVar3 = *(int *)(*(int *)(iVar2 + 0xc) + 0x44);
    if (iVar3 != 0) {
      iVar4 = *(int *)(iVar3 + 0x10);
      FUN_00561130(iVar3);
      if (*(int *)(*(int *)(iVar4 + 0xb4) + 0xc) == 0) {
        FUN_00541a10(iVar4);
      }
    }
    *(undefined4 *)(iVar2 + 0xc) = 0;
  }
  return;
}


/* FUN_0052e950 @ 0052e950  kind=lib  attributed-by=lib-island  size=81 */

int FUN_0052e950(undefined4 *param_1,int param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int local_8;
  
  iVar1 = FUN_0055eb70(*param_1,param_2,&local_8,param_4);
  if (iVar1 == 0) {
    iVar1 = *(int *)(local_8 + 8);
    *(undefined4 *)(iVar1 + 0x38) = *(undefined4 *)(local_8 + 4);
    *(byte *)(iVar1 + 5) = (param_2 != 1) - 1U & 100;
    *(int *)(iVar1 + 0x44) = local_8;
    *(undefined4 **)(iVar1 + 0x34) = param_1;
    *(int *)(iVar1 + 0x48) = param_2;
    *param_3 = iVar1;
    iVar1 = 0;
  }
  return iVar1;
}


/* FUN_0052e9b0 @ 0052e9b0  kind=lib  attributed-by=lib-island  size=547 */

undefined4 FUN_0052e9b0(char *param_1)

{
  uint uVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  ushort uVar9;
  ushort uVar10;
  uint uVar11;
  undefined1 *puVar12;
  int iVar13;
  
  if (*param_1 == '\0') {
    bVar2 = param_1[5];
    iVar5 = *(int *)(param_1 + 0x38);
    iVar13 = *(int *)(param_1 + 0x34);
    puVar12 = (undefined1 *)((uint)bVar2 + iVar5);
    iVar7 = FUN_00533ea0(param_1,*puVar12);
    if (iVar7 != 0) {
      FUN_00525a30(0xb,"database corruption at line %d of [%.10s]",0xc231,
                   "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
      return 0xb;
    }
    *(short *)(param_1 + 0x12) = *(short *)(iVar13 + 0x20) + -1;
    uVar9 = (3 - (ushort)(byte)param_1[3]) * 4 + (ushort)bVar2;
    param_1[1] = '\0';
    iVar7 = *(int *)(iVar13 + 0x24);
    *(ushort *)(param_1 + 0xc) = uVar9;
    *(int *)(param_1 + 0x3c) = iVar7 + iVar5;
    *(uint *)(param_1 + 0x40) = (uint)uVar9 + iVar5;
    uVar3 = puVar12[5];
    uVar4 = puVar12[6];
    uVar10 = CONCAT11(puVar12[3],puVar12[4]);
    *(ushort *)(param_1 + 0x10) = uVar10;
    if ((*(int *)(iVar13 + 0x20) - 8U) / 6 < (uint)uVar10) {
      FUN_00525a30(0xb,"database corruption at line %d of [%.10s]",0xc23d,
                   "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
      return 0xb;
    }
    uVar1 = (uint)uVar9 + (uint)uVar10 * 2;
    iVar13 = (uint)(byte)puVar12[7] + (CONCAT11(uVar3,uVar4) - 1 & 0xffff) + 1;
    uVar9 = CONCAT11(puVar12[1],puVar12[2]);
    uVar6 = (uint)uVar9;
    while (uVar9 != 0) {
      if ((uVar6 < uVar1) || (iVar7 + -4 < (int)uVar6)) {
        FUN_00525a30(0xb,"database corruption at line %d of [%.10s]",0xc268,
                     "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
        return 0xb;
      }
      uVar9 = CONCAT11(*(undefined1 *)(uVar6 + iVar5),*(undefined1 *)(uVar6 + 1 + iVar5));
      uVar11 = (uint)CONCAT11(*(undefined1 *)(uVar6 + 2 + iVar5),*(undefined1 *)(uVar6 + 3 + iVar5))
      ;
      if (((uVar9 != 0) && ((uint)uVar9 <= uVar6 + 3 + uVar11)) || (iVar7 < (int)(uVar6 + uVar11)))
      {
        FUN_00525a30(0xb,"database corruption at line %d of [%.10s]",0xc26f,
                     "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
        return 0xb;
      }
      iVar13 = iVar13 + uVar11;
      uVar6 = (uint)uVar9;
    }
    if (iVar7 < iVar13) {
      uVar8 = FUN_00551190(0xc27d);
      return uVar8;
    }
    *(short *)(param_1 + 0xe) = (short)iVar13 - (short)uVar1;
    *param_1 = '\x01';
  }
  return 0;
}


/* FUN_0052ec30 @ 0052ec30  kind=lib  attributed-by=lib-island  size=262 */

void FUN_0052ec30(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int local_a0 [38];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  piVar4 = (int *)0x0;
  if (param_2 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    puVar2 = *(undefined4 **)(param_1 + 0x10);
    uVar1 = (uint)*(ushort *)((int)puVar2 + 6) * 0x28 + 0x40;
    if (uVar1 < 0x97) {
      piVar3 = local_a0;
      piVar4 = (int *)0x0;
    }
    else {
      piVar3 = (int *)FUN_00552230(*puVar2,uVar1);
      piVar4 = piVar3;
      if (piVar3 == (int *)0x0) {
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
    piVar3[4] = (int)(piVar3 + 6);
    *piVar3 = (int)puVar2;
    *(short *)(piVar3 + 1) = *(short *)((int)puVar2 + 6) + 1;
    FUN_00575bc0(*(undefined4 *)(param_1 + 0x10),param_3,param_2,piVar3);
  }
  FUN_0054df80(param_1,piVar3,param_3,param_4,param_5,param_6);
  if (piVar4 != (int *)0x0) {
    FUN_005521a0(**(undefined4 **)(param_1 + 0x10),piVar4);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0052ed40 @ 0052ed40  kind=lib  attributed-by=lib-island  size=95 */

int FUN_0052ed40(int *param_1,int param_2)

{
  int iVar1;
  int local_8;
  
  local_8 = 0;
  FUN_00560e90(*(undefined4 *)(*param_1 + 0xb4),param_2,0,&local_8);
  if (local_8 != 0) {
    iVar1 = *(int *)(local_8 + 8);
    *(undefined4 *)(iVar1 + 0x38) = *(undefined4 *)(local_8 + 4);
    *(int **)(iVar1 + 0x34) = param_1;
    *(int *)(iVar1 + 0x48) = param_2;
    *(int *)(iVar1 + 0x44) = local_8;
    *(byte *)(iVar1 + 5) = (param_2 != 1) - 1U & 100;
    return iVar1;
  }
  return 0;
}


/* FUN_0052eda0 @ 0052eda0  kind=lib  attributed-by=lib-island  size=310 */

void FUN_0052eda0(int param_1,uint param_2,uint *param_3)

{
  byte bVar1;
  uint *puVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ushort uVar7;
  short sVar8;
  
  puVar2 = param_3;
  param_3[2] = param_2;
  uVar4 = (uint)*(byte *)(param_1 + 6);
  uVar7 = (ushort)*(byte *)(param_1 + 6);
  if (*(char *)(param_1 + 2) == '\0') {
    param_3[3] = 0;
    bVar1 = *(byte *)(uVar7 + param_2);
    if (bVar1 < 0x80) {
      uVar3 = 1;
      uVar6 = (uint)bVar1;
    }
    else {
      param_3 = (uint *)uVar4;
      uVar3 = FUN_0055aaf0((byte *)(uVar7 + param_2),&param_3);
      uVar3 = uVar3 & 0xff;
      uVar6 = (uint)param_3;
    }
    *puVar2 = uVar6;
    puVar2[1] = 0;
  }
  else {
    if (*(char *)(param_1 + 4) == '\0') {
      uVar6 = 0;
      param_3 = (uint *)uVar4;
    }
    else {
      bVar1 = *(byte *)(uVar7 + param_2);
      if (bVar1 < 0x80) {
        uVar7 = uVar7 + 1;
        uVar6 = (uint)bVar1;
        param_3 = (uint *)uVar4;
      }
      else {
        param_3 = (uint *)uVar4;
        uVar3 = FUN_0055aaf0((byte *)(uVar7 + param_2),&param_3);
        uVar7 = uVar7 + (uVar3 & 0xff);
        uVar6 = (uint)param_3;
      }
    }
    uVar3 = FUN_0055a920(uVar7 + param_2,puVar2);
    puVar2[3] = uVar6;
  }
  sVar8 = uVar7 + (uVar3 & 0xff);
  puVar2[4] = uVar6;
  *(short *)(puVar2 + 5) = sVar8;
  if (uVar6 <= *(ushort *)(param_1 + 8)) {
    uVar7 = sVar8 + (short)uVar6;
    *(ushort *)((int)puVar2 + 0x1a) = uVar7;
    if (uVar7 < 4) {
      *(undefined2 *)((int)puVar2 + 0x1a) = 4;
    }
    *(short *)((int)puVar2 + 0x16) = (short)uVar6;
    *(undefined2 *)(puVar2 + 6) = 0;
    return;
  }
  uVar7 = *(ushort *)(param_1 + 10);
  iVar5 = (uVar6 - uVar7) % (*(int *)(*(int *)(param_1 + 0x34) + 0x24) - 4U) + (uint)uVar7;
  if ((int)(uint)*(ushort *)(param_1 + 8) < iVar5) {
    *(ushort *)((int)puVar2 + 0x16) = uVar7;
  }
  else {
    *(short *)((int)puVar2 + 0x16) = (short)iVar5;
  }
  sVar8 = *(short *)((int)puVar2 + 0x16) + sVar8;
  *(short *)(puVar2 + 6) = sVar8;
  *(short *)((int)puVar2 + 0x1a) = sVar8 + 4;
  return;
}


/* FUN_0052eee0 @ 0052eee0  kind=lib  attributed-by=lib-island  size=74 */

int FUN_0052eee0(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x5b) == '\x03') {
    return *(int *)(param_1 + 0x54);
  }
  *(undefined1 *)(param_1 + 0x5b) = 0;
  iVar1 = FUN_0052ec30(param_1,*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x48),
                       *(undefined4 *)(param_1 + 0x4c),0,param_1 + 0x54);
  if (iVar1 == 0) {
    FUN_00524410(*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  return iVar1;
}


/* FUN_0052ef30 @ 0052ef30  kind=lib  attributed-by=lib-island  size=100 */

undefined4 FUN_0052ef30(int param_1,uint param_2)

{
  undefined4 *_Dst;
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x3c) == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x2c);
    _Dst = (undefined4 *)FUN_0055da00(0x200);
    if (_Dst != (undefined4 *)0x0) {
      memset(_Dst,0,0x200);
      *_Dst = uVar1;
    }
    *(undefined4 **)(param_1 + 0x3c) = _Dst;
    if (_Dst == (undefined4 *)0x0) {
      return 7;
    }
  }
  if (param_2 <= **(uint **)(param_1 + 0x3c)) {
    uVar1 = FUN_0054c100();
    return uVar1;
  }
  return 0;
}


/* FUN_0052efa0 @ 0052efa0  kind=lib  attributed-by=lib-island  size=215 */

void FUN_0052efa0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 200) != 0) {
    iVar1 = FUN_00552450(param_1,param_3);
    if (iVar1 == 0) {
      return;
    }
    (**(code **)(param_1 + 200))(*(undefined4 *)(param_1 + 0xd0),param_1,param_2,iVar1);
    FUN_005521a0(param_1,iVar1);
  }
  if (*(int *)(param_1 + 0xcc) != 0) {
    piVar2 = (int *)FUN_00552230(param_1,0x28);
    if (piVar2 != (int *)0x0) {
      piVar2[0] = 0;
      piVar2[1] = 0;
      piVar2[2] = 0;
      piVar2[3] = 0;
      piVar2[4] = 0;
      piVar2[5] = 0;
      piVar2[6] = 0;
      piVar2[7] = 0;
      piVar2[8] = 0;
      piVar2[9] = 0;
      *(undefined2 *)(piVar2 + 7) = 1;
      *(undefined1 *)((int)piVar2 + 0x1e) = 5;
      *piVar2 = param_1;
      FUN_00575040(piVar2,param_3,0xffffffff,1,0);
    }
    iVar1 = FUN_0056bce0(piVar2,2);
    if (iVar1 != 0) {
      (**(code **)(param_1 + 0xcc))
                (*(undefined4 *)(param_1 + 0xd0),param_1,
                 *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x10) + 0xc) + 0x4d),iVar1);
    }
    FUN_0056b910(piVar2);
  }
  return;
}


/* FUN_0052f080 @ 0052f080  kind=lib  attributed-by=lib-island  size=163 */

void FUN_0052f080(int param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x138) != 0) {
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x120)) {
      do {
        puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x138) + iVar4 * 4);
        piVar2 = (int *)puVar1[2];
        if ((piVar2 != (int *)0x0) && (*(code **)(param_2 + *piVar2) != (code *)0x0)) {
          (**(code **)(param_2 + *piVar2))(piVar2);
        }
        piVar2 = puVar1 + 3;
        *piVar2 = *piVar2 + -1;
        uVar3 = *puVar1;
        puVar1[5] = 0;
        if (*piVar2 == 0) {
          piVar2 = (int *)puVar1[2];
          if (piVar2 != (int *)0x0) {
            (**(code **)(*piVar2 + 0x10))(piVar2);
          }
          FUN_005521a0(uVar3,puVar1);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(param_1 + 0x120));
    }
    FUN_005521a0(param_1,*(undefined4 *)(param_1 + 0x138));
    *(undefined4 *)(param_1 + 0x120) = 0;
    *(undefined4 *)(param_1 + 0x138) = 0;
  }
  return;
}


/* FUN_0052f130 @ 0052f130  kind=lib  attributed-by=lib-island  size=200 */

uint FUN_0052f130(uint param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  
  uVar3 = param_1;
  pbVar4 = (byte *)((uint)*(byte *)(param_1 + 6) + param_2);
  if (*(char *)(param_1 + 2) == '\0') {
    if (*pbVar4 < 0x80) {
      param_1 = (uint)*pbVar4;
      uVar5 = 1;
    }
    else {
      uVar5 = FUN_0055aaf0(pbVar4,&param_1);
      uVar5 = uVar5 & 0xff;
    }
    pbVar4 = pbVar4 + uVar5;
  }
  else {
    if (*(char *)(param_1 + 4) == '\0') {
      param_1 = 0;
    }
    else if (*pbVar4 < 0x80) {
      param_1 = (uint)*pbVar4;
      pbVar4 = pbVar4 + 1;
    }
    else {
      uVar5 = FUN_0055aaf0(pbVar4,&param_1);
      pbVar4 = pbVar4 + (uVar5 & 0xff);
    }
    pbVar1 = pbVar4 + 9;
    do {
      bVar2 = *pbVar4;
      pbVar4 = pbVar4 + 1;
      if ((bVar2 & 0x80) == 0) break;
    } while (pbVar4 < pbVar1);
  }
  if (*(ushort *)(uVar3 + 8) < param_1) {
    uVar5 = (uint)*(ushort *)(uVar3 + 10);
    param_1 = (param_1 - uVar5) % (*(int *)(*(int *)(uVar3 + 0x34) + 0x24) - 4U) + uVar5;
    if (*(ushort *)(uVar3 + 8) < param_1) {
      param_1 = uVar5;
    }
    param_1 = param_1 + 4;
  }
  pbVar4 = pbVar4 + (param_1 - param_2);
  if (pbVar4 < (byte *)0x4) {
    pbVar4 = (byte *)0x4;
  }
  return (uint)pbVar4 & 0xffff;
}


/* FUN_0052f200 @ 0052f200  kind=lib  attributed-by=lib-island  size=167 */

undefined4 FUN_0052f200(int *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  cVar1 = *param_2;
  if ((cVar1 < '0') || ('2' < cVar1)) {
    iVar3 = FUN_0057a2c0(param_2,&DAT_00718a48);
    if (iVar3 == 0) {
      uVar4 = 1;
    }
    else {
      iVar3 = FUN_0057a2c0(param_2,"memory");
      uVar4 = (-(uint)(iVar3 != 0) & 0xfffffffe) + 2;
    }
  }
  else {
    uVar4 = (int)cVar1 - 0x30;
  }
  iVar3 = *param_1;
  if (*(byte *)(iVar3 + 0x37) != uVar4) {
    iVar2 = *(int *)(*(int *)(iVar3 + 0x10) + 0x14);
    if (iVar2 != 0) {
      if ((*(char *)(iVar3 + 0x36) == '\0') || (*(char *)(iVar2 + 8) != '\0')) {
        FUN_00553950(param_1,"temporary storage cannot be changed from within a transaction");
        return 1;
      }
      FUN_0054c710(iVar2);
      *(undefined4 *)(*(int *)(iVar3 + 0x10) + 0x14) = 0;
      FUN_00564000(iVar3);
    }
    *(char *)(iVar3 + 0x37) = (char)uVar4;
  }
  return 0;
}


/* FUN_0052f2b0 @ 0052f2b0  kind=lib  attributed-by=lib-island  size=105 */

void FUN_0052f2b0(int param_1,int param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    if (*(int *)(param_1 + 0x28) != 0) {
      FUN_00567e70(param_1 + 0x1c,&DAT_00716af8,1);
    }
    if (param_2 != 0) {
      FUN_00567e70(param_1 + 0x1c,param_2,0xffffffff);
    }
    FUN_0056aa30(param_1 + 0x1c,1,param_3,&stack0x00000010);
    if (*(char *)(param_1 + 0x34) != '\0') {
      *(undefined4 *)(param_1 + 0x18) = 1;
    }
  }
  return;
}


/* FUN_0052f320 @ 0052f320  kind=lib  attributed-by=lib-island  size=230 */

undefined4 FUN_0052f320(undefined4 *param_1,int *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  int iVar6;
  int local_c;
  int local_8;
  
  if ((param_1 == (undefined4 *)0x0) || (param_2 == (int *)0x0)) {
    return 1;
  }
  local_c = 0;
  if (0 < *param_2) {
    local_8 = 0;
    do {
      iVar6 = 0;
      if (0 < (int)param_1[1]) {
        puVar4 = (undefined4 *)*param_1;
        do {
          pbVar3 = (byte *)*puVar4;
          bVar2 = *pbVar3;
          pbVar5 = *(byte **)(param_2[2] + 4 + local_8);
          while ((bVar2 != 0 && ((&DAT_007120d8)[bVar2] == (&DAT_007120d8)[*pbVar5]))) {
            pbVar1 = pbVar3 + 1;
            pbVar3 = pbVar3 + 1;
            pbVar5 = pbVar5 + 1;
            bVar2 = *pbVar1;
          }
          if ((&DAT_007120d8)[*pbVar3] == (&DAT_007120d8)[*pbVar5]) {
            if (-1 < iVar6) {
              return 1;
            }
            break;
          }
          iVar6 = iVar6 + 1;
          puVar4 = puVar4 + 2;
        } while (iVar6 < (int)param_1[1]);
      }
      local_c = local_c + 1;
      local_8 = local_8 + 0x14;
    } while (local_c < *param_2);
  }
  return 0;
}


/* FUN_0052f410 @ 0052f410  kind=lib  attributed-by=lib-island  size=511 */

void FUN_0052f410(int *param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  int iVar10;
  undefined4 uVar11;
  int local_10;
  int local_c;
  int local_8;
  
  iVar6 = param_4;
  iVar10 = param_3;
  if (0 < param_4) {
    while (iVar7 = param_4 + -1, param_1[4] != 0) {
      if (iVar10 < 1) {
        FUN_0052f2b0(param_1,param_5,"%d of %d pages missing from overflow list starting at %d",
                     param_4,iVar6,param_3);
        return;
      }
      iVar8 = FUN_0052f6a0(param_1,iVar10,param_5);
      if (iVar8 != 0) {
        return;
      }
      iVar8 = FUN_0055eb70(param_1[1],iVar10,&local_10,0);
      if (iVar8 != 0) {
        FUN_0052f2b0(param_1,param_5,"failed to get page %d",iVar10);
        return;
      }
      puVar5 = *(undefined1 **)(local_10 + 4);
      if (param_2 == 0) {
        param_4 = iVar7;
        if ((*(char *)(*param_1 + 0x11) != '\0') && (0 < iVar7)) {
          uVar11 = FUN_00559fd0(puVar5,4,iVar10,param_5);
          FUN_0052f610(param_1,uVar11);
        }
      }
      else {
        local_c = CONCAT31(CONCAT21(CONCAT11(puVar5[4],puVar5[5]),puVar5[6]),puVar5[7]);
        if (*(char *)(*param_1 + 0x11) != '\0') {
          FUN_0052f610(param_1,iVar10,2,0,param_5);
        }
        if (((int)(*(int *)(*param_1 + 0x24) + (*(int *)(*param_1 + 0x24) >> 0x1f & 3U)) >> 2) + -2
            < local_c) {
          FUN_0052f2b0(param_1,param_5,"freelist leaf count too big on page %d",iVar10);
          param_4 = param_4 + -2;
        }
        else {
          if (0 < local_c) {
            puVar9 = puVar5 + 10;
            local_8 = local_c;
            do {
              uVar11 = CONCAT31(CONCAT21(CONCAT11(puVar9[-2],puVar9[-1]),*puVar9),puVar9[1]);
              if (*(char *)(*param_1 + 0x11) != '\0') {
                FUN_0052f610(param_1,uVar11,2,0,param_5);
              }
              FUN_0052f6a0(param_1,uVar11,param_5);
              puVar9 = puVar9 + 4;
              local_8 = local_8 + -1;
            } while (local_8 != 0);
            local_8 = 0;
          }
          param_4 = iVar7 - local_c;
        }
      }
      uVar1 = *puVar5;
      uVar2 = puVar5[1];
      uVar3 = puVar5[2];
      uVar4 = puVar5[3];
      iVar10 = *(int *)(local_10 + 0x10);
      FUN_00561130(local_10);
      if (*(int *)(*(int *)(iVar10 + 0xb4) + 0xc) == 0) {
        FUN_00541a10(iVar10);
      }
      iVar10 = CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),uVar4);
      if (param_4 < 1) {
        return;
      }
    }
  }
  return;
}


/* FUN_0052f610 @ 0052f610  kind=lib  attributed-by=lib-island  size=136 */

void FUN_0052f610(undefined4 *param_1,undefined4 param_2,char param_3,int param_4,undefined4 param_5
                 )

{
  int iVar1;
  int local_c;
  char local_5;
  
  iVar1 = FUN_005445e0(*param_1,param_2,&local_5,&local_c);
  if (iVar1 != 0) {
    if ((iVar1 == 7) || (iVar1 == 0xc0a)) {
      param_1[6] = 1;
    }
    FUN_0052f2b0(param_1,param_5,"Failed to read ptrmap key=%d",param_2);
    return;
  }
  if ((local_5 != param_3) || (local_c != param_4)) {
    FUN_0052f2b0(param_1,param_5,"Bad ptr map entry key=%d expected=(%d,%d) got=(%d,%d)",param_2,
                 param_3,param_4,local_5,local_c);
  }
  return;
}


/* FUN_0052f6a0 @ 0052f6a0  kind=lib  attributed-by=lib-island  size=121 */

undefined4 FUN_0052f6a0(int param_1,uint param_2,undefined4 param_3)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  
  if (param_2 == 0) {
    return 1;
  }
  if (*(uint *)(param_1 + 0xc) < param_2) {
    FUN_0052f2b0(param_1,param_3,"invalid page number %d",param_2);
    return 1;
  }
  pbVar3 = (byte *)((param_2 >> 3) + *(int *)(param_1 + 8));
  bVar2 = (byte)param_2 & 7;
  bVar1 = *pbVar3;
  if ((bVar1 & (byte)(1 << bVar2)) != 0) {
    FUN_0052f2b0(param_1,param_3,"2nd reference to page %d",param_2);
    return 1;
  }
  *pbVar3 = '\x01' << bVar2 | bVar1;
  return 0;
}


/* FUN_0052f720 @ 0052f720  kind=lib  attributed-by=lib-island  size=2004 */

void FUN_0052f720(int *param_1,int param_2,undefined4 param_3,uint *param_4,uint *param_5)

{
  short *psVar1;
  byte bVar2;
  undefined4 *puVar3;
  int *piVar4;
  ushort uVar5;
  uint *puVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  void *_Dst;
  undefined1 *puVar10;
  uint uVar11;
  undefined1 *puVar12;
  undefined4 uVar13;
  undefined1 *puVar14;
  size_t _Size;
  uint uVar15;
  undefined1 *puVar16;
  char *pcVar17;
  uint uVar18;
  uint local_c0;
  int local_bc;
  undefined1 *local_b4;
  ushort local_aa;
  ushort local_a8;
  uint *local_a0;
  int local_9c;
  uint local_98;
  undefined8 local_94;
  int local_8c;
  undefined1 *local_88;
  uint *local_84;
  undefined8 local_80;
  int local_78;
  undefined4 *local_74;
  undefined1 *local_70;
  undefined1 local_6c [100];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_a0 = param_4;
  local_84 = param_5;
  local_94 = 0;
  local_80 = 0;
  FUN_005240c0(100,local_6c,"Page %d: ",param_2);
  local_74 = (undefined4 *)*param_1;
  local_8c = local_74[9];
  if ((param_2 == 0) || (iVar7 = FUN_0052f6a0(param_1,param_2,param_3), iVar7 != 0)) {
LAB_0052feee:
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar7 = FUN_0055eb70(*local_74,param_2,&local_70,0);
  if (iVar7 != 0) {
    FUN_0052f2b0(param_1,local_6c,"unable to get the page. error code=%d",iVar7);
    goto LAB_0052feee;
  }
  puVar14 = *(undefined1 **)(local_70 + 8);
  *(undefined4 *)(puVar14 + 0x38) = *(undefined4 *)(local_70 + 4);
  *(undefined4 **)(puVar14 + 0x34) = local_74;
  *(undefined1 **)(puVar14 + 0x44) = local_70;
  *(int *)(puVar14 + 0x48) = param_2;
  puVar14[5] = (param_2 != 1) - 1U & 100;
  *puVar14 = 0;
  local_88 = puVar14;
  iVar7 = FUN_0052e9b0(puVar14);
  if (iVar7 != 0) {
    FUN_0052f2b0(param_1,local_6c,"btreeInitPage() returns error code %d",iVar7);
    FUN_00545740(puVar14);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  local_9c = 0;
  local_78 = 0;
  if (*(short *)(puVar14 + 0x10) != 0) {
    do {
      iVar7 = local_78;
      if (param_1[4] == 0) break;
      FUN_005240c0(100,local_6c,"On tree page %d cell %d: ",param_2,local_78);
      puVar16 = (undefined1 *)
                ((uint)(CONCAT11(*(undefined1 *)(*(int *)(puVar14 + 0x40) + local_78 * 2),
                                 *(undefined1 *)(*(int *)(puVar14 + 0x40) + 1 + iVar7 * 2)) &
                       *(ushort *)(puVar14 + 0x12)) + *(int *)(puVar14 + 0x38));
      FUN_0052eda0(puVar14,puVar16,&local_c0);
      local_70 = local_b4;
      if (puVar14[2] == '\0') {
        puVar10 = local_b4 + local_c0;
      }
      else if (local_78 == 0) {
        local_80 = CONCAT44(local_bc,local_c0);
        local_94 = CONCAT44(local_bc,local_c0);
        puVar10 = local_b4;
      }
      else {
        if ((local_bc <= (int)local_80._4_4_) &&
           ((local_bc < (int)local_80._4_4_ || (local_c0 <= (uint)local_80)))) {
          FUN_0052f2b0(param_1,local_6c,"Rowid %lld out of order (previous was %lld)",local_c0,
                       local_bc,(uint)local_80,local_80._4_4_);
        }
        local_80 = CONCAT44(local_bc,local_c0);
        puVar10 = local_70;
      }
      puVar12 = puVar14;
      if (((undefined1 *)(uint)local_aa < puVar10) &&
         (local_70 = puVar16 + local_a8, puVar12 = local_88,
         local_70 <= (undefined1 *)(*(int *)(puVar14 + 0x38) + local_74[9]))) {
        local_98 = (uint)(puVar10 + ((local_8c + -5) - (int)(uint)local_aa)) / (local_8c - 4U);
        local_70 = (undefined1 *)FUN_00559fd0(local_70);
        if (*(char *)((int)local_74 + 0x11) != '\0') {
          FUN_0052f610(param_1,local_70,3,param_2,local_6c);
        }
        FUN_0052f410(param_1,0,local_70,local_98,local_6c);
      }
      puVar14 = puVar12;
      iVar7 = local_78;
      iVar9 = local_9c;
      if (puVar12[3] == '\0') {
        uVar13 = CONCAT31(CONCAT21(CONCAT11(*puVar16,puVar16[1]),puVar16[2]),puVar16[3]);
        if (*(char *)((int)local_74 + 0x11) != '\0') {
          FUN_0052f610(param_1,uVar13,5,param_2,local_6c);
        }
        iVar7 = local_78;
        puVar8 = &local_80;
        if (local_78 == 0) {
          puVar8 = (undefined8 *)0x0;
        }
        iVar9 = FUN_0052f720(param_1,uVar13,local_6c,&local_94,puVar8);
        puVar14 = local_88;
        if ((0 < iVar7) && (iVar9 != local_9c)) {
          FUN_0052f2b0(param_1,local_6c,"Child page depth differs");
          puVar14 = local_88;
        }
      }
      local_9c = iVar9;
      local_78 = iVar7 + 1;
    } while (local_78 < (int)(uint)*(ushort *)(puVar14 + 0x10));
  }
  if (puVar14[3] == '\0') {
    iVar7 = (uint)(byte)puVar14[5] + *(int *)(puVar14 + 0x38);
    uVar13 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar7 + 8),*(undefined1 *)(iVar7 + 9)),
                               *(undefined1 *)(iVar7 + 10)),*(undefined1 *)(iVar7 + 0xb));
    FUN_005240c0(100,local_6c,"On page %d at right child: ",param_2);
    if (*(char *)((int)local_74 + 0x11) != '\0') {
      FUN_0052f610(param_1,uVar13,5,param_2,local_6c);
    }
    puVar8 = &local_80;
    if (*(short *)(puVar14 + 0x10) == 0) {
      puVar8 = (undefined8 *)0x0;
    }
    FUN_0052f720(param_1,uVar13,local_6c,0,puVar8);
    if (puVar14[3] == '\0') goto LAB_0052fbc0;
  }
  puVar6 = local_a0;
  if (puVar14[2] == '\0') goto LAB_0052fbc0;
  if (local_a0 == (uint *)0x0) {
    if (local_84 == (uint *)0x0) goto LAB_0052fbc0;
    uVar11 = *local_84;
    uVar15 = local_84[1];
    if (((int)uVar15 < local_94._4_4_) ||
       (((int)uVar15 <= local_94._4_4_ && (uVar11 < (uint)local_94)))) goto LAB_0052fbc0;
    pcVar17 = "Rowid %lld out of order (min less than parent max of %lld)";
    uVar18 = (uint)local_94;
    iVar7 = local_94._4_4_;
  }
  else {
    uVar11 = *local_a0;
    uVar15 = local_a0[1];
    if (local_84 != (uint *)0x0) {
      if ((local_94._4_4_ <= (int)uVar15) &&
         ((local_94._4_4_ < (int)uVar15 || ((uint)local_94 <= uVar11)))) {
        FUN_0052f2b0(param_1,local_6c,"Rowid %lld out of order (min less than parent min of %lld)",
                     (uint)local_94,local_94._4_4_,uVar11,uVar15);
      }
      uVar11 = local_84[1];
      if (((int)uVar11 <= (int)local_80._4_4_) &&
         (((int)uVar11 < (int)local_80._4_4_ || (*local_84 < (uint)local_80)))) {
        FUN_0052f2b0(param_1,local_6c,"Rowid %lld out of order (max larger than parent max of %lld)"
                     ,(uint)local_80,local_80._4_4_,*local_84,uVar11);
      }
      *puVar6 = (uint)local_80;
      puVar6[1] = local_80._4_4_;
      goto LAB_0052fbc0;
    }
    if (((int)local_80._4_4_ < (int)uVar15) ||
       (((int)local_80._4_4_ <= (int)uVar15 && ((uint)local_80 <= uVar11)))) goto LAB_0052fbc0;
    pcVar17 = "Rowid %lld out of order (max larger than parent min of %lld)";
    uVar18 = (uint)local_80;
    iVar7 = local_80._4_4_;
  }
  FUN_0052f2b0(param_1,local_6c,pcVar17,uVar18,iVar7,uVar11,uVar15);
LAB_0052fbc0:
  local_84 = *(uint **)(puVar14 + 0x38);
  local_70 = (undefined1 *)(uint)(byte)puVar14[5];
  _Dst = (void *)FUN_00543f40(local_74[8]);
  if (_Dst == (void *)0x0) {
    param_1[6] = 1;
  }
  else {
    local_74 = (undefined4 *)(local_70 + (int)local_84);
    _Size = (CONCAT11(*(undefined1 *)((int)local_74 + 5),*(undefined1 *)((int)local_74 + 6)) - 1 &
            0xffff) + 1;
    memset((void *)(_Size + (int)_Dst),0,local_8c - _Size);
    memset(_Dst,1,_Size);
    local_98 = (uint)CONCAT11(*(undefined1 *)((int)local_74 + 3),*(undefined1 *)(local_74 + 1));
    local_a0 = (uint *)(local_70 + (3 - (uint)(byte)local_88[3]) * 4);
    local_78 = 0;
    if (local_98 != 0) {
      local_70 = (undefined1 *)((int)local_84 + (int)local_a0);
      do {
        uVar15 = (uint)CONCAT11(*local_70,local_70[1]);
        uVar11 = 0x10000;
        if ((int)uVar15 <= local_8c + -4) {
          uVar11 = FUN_0052f130(local_88,(int)local_84 + uVar15);
          uVar11 = uVar11 & 0xffff;
        }
        if ((int)((uVar15 - 1) + uVar11) < local_8c) {
          for (iVar7 = (uVar15 - 1) + uVar11; (int)uVar15 <= iVar7; iVar7 = iVar7 + -1) {
            *(char *)(iVar7 + (int)_Dst) = *(char *)(iVar7 + (int)_Dst) + '\x01';
          }
        }
        else {
          FUN_0052f2b0(param_1,0,"Corruption detected in cell %d on page %d",local_78,param_2);
        }
        local_78 = local_78 + 1;
        local_70 = local_70 + 2;
      } while (local_78 < (int)local_98);
    }
    puVar14 = local_88;
    uVar5 = CONCAT11(*(undefined1 *)((int)local_74 + 1),*(undefined1 *)((int)local_74 + 2));
    while (uVar11 = (uint)uVar5, uVar11 != 0) {
      for (iVar7 = (uVar11 - 1) +
                   (uint)CONCAT11(*(undefined1 *)((int)local_84 + 2 + uVar11),
                                  *(undefined1 *)((int)local_84 + 3 + uVar11)); (int)uVar11 <= iVar7
          ; iVar7 = iVar7 + -1) {
        *(char *)(iVar7 + (int)_Dst) = *(char *)(iVar7 + (int)_Dst) + '\x01';
      }
      uVar5 = CONCAT11(*(undefined1 *)((int)local_84 + uVar11),
                       *(undefined1 *)((int)local_84 + 1 + uVar11));
    }
    puVar16 = (undefined1 *)0x0;
    iVar7 = 0;
    local_70 = (undefined1 *)0x0;
    if (0 < local_8c) {
      do {
        if (*(char *)(iVar7 + (int)_Dst) == '\0') {
          puVar16 = puVar16 + 1;
          local_70 = puVar16;
        }
        else if ('\x01' < *(char *)(iVar7 + (int)_Dst)) {
          FUN_0052f2b0(param_1,0,"Multiple uses for byte %d of page %d",iVar7,param_2);
          puVar16 = local_70;
          break;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < local_8c);
    }
    if (puVar16 != (undefined1 *)(uint)*(byte *)((int)local_74 + 7)) {
      FUN_0052f2b0(param_1,0,"Fragmentation of %d bytes reported as %d on page %d",puVar16,
                   (undefined1 *)(uint)*(byte *)((int)local_74 + 7),param_2);
    }
  }
  FUN_00544190(_Dst);
  puVar3 = *(undefined4 **)(puVar14 + 0x44);
  if (puVar3 != (undefined4 *)0x0) {
    psVar1 = (short *)((int)puVar3 + 0x1a);
    *psVar1 = *psVar1 + -1;
    iVar7 = puVar3[4];
    if (*psVar1 == 0) {
      *(int *)(puVar3[7] + 0xc) = *(int *)(puVar3[7] + 0xc) + -1;
      if ((*(byte *)(puVar3 + 6) & 2) == 0) {
        iVar9 = puVar3[7];
        if (*(int *)(iVar9 + 0x1c) != 0) {
          if (puVar3[5] == 1) {
            *(undefined4 *)(iVar9 + 0x2c) = 0;
          }
          (*DAT_00766664)(*(undefined4 *)(iVar9 + 0x28),*puVar3,0);
        }
      }
      else {
        FUN_00544570(puVar3);
        piVar4 = (int *)puVar3[7];
        iVar9 = *piVar4;
        puVar3[8] = iVar9;
        if (iVar9 != 0) {
          *(undefined4 **)(iVar9 + 0x24) = puVar3;
        }
        *piVar4 = (int)puVar3;
        if (piVar4[1] == 0) {
          piVar4[1] = (int)puVar3;
        }
        if ((piVar4[2] == 0) && ((*(byte *)(puVar3 + 6) & 4) == 0)) {
          piVar4[2] = (int)puVar3;
        }
      }
    }
    if (*(int *)(*(int *)(iVar7 + 0xb4) + 0xc) == 0) {
      bVar2 = *(byte *)(iVar7 + 0xf);
      if ((bVar2 != 6) && (bVar2 != 0)) {
        if (bVar2 < 2) {
          if (*(char *)(iVar7 + 4) == '\0') {
            FUN_00541e00(iVar7,0);
          }
        }
        else {
          if (DAT_0076b3bc != (code *)0x0) {
            (*DAT_0076b3bc)();
          }
          FUN_0055fbc0(iVar7);
          if (DAT_0076b3c0 != (code *)0x0) {
            (*DAT_0076b3c0)();
            FUN_00542a20(iVar7);
            __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
            return;
          }
        }
      }
      FUN_00542a20(iVar7);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0052ff10 @ 0052ff10  kind=lib  attributed-by=lib-island  size=251 */

void FUN_0052ff10(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = *(int *)(param_1 + 4);
  piVar4 = (int *)(iVar1 + 0x48);
  iVar3 = *(int *)(iVar1 + 0x48);
  while (iVar3 != 0) {
    piVar2 = (int *)*piVar4;
    if (*piVar2 == param_1) {
      *piVar4 = piVar2[3];
      if (piVar2[1] != 1) {
        if (DAT_007665e0 == 0) {
          (*DAT_00766604)(piVar2);
        }
        else {
          if (DAT_0076b488 != 0) {
            (*DAT_00766630)(DAT_0076b488);
          }
          iVar3 = (*DAT_00766608._4_4_)(piVar2);
          DAT_0076b360 = DAT_0076b360 - iVar3;
          if (DAT_0076b388 < DAT_0076b360) {
            DAT_0076b388 = DAT_0076b360;
          }
          DAT_0076b384 = DAT_0076b384 + -1;
          if (DAT_0076b3ac < DAT_0076b384) {
            DAT_0076b3ac = DAT_0076b384;
          }
          (*DAT_00766604)(piVar2);
          if (DAT_0076b488 != 0) {
            (*DAT_00766638)(DAT_0076b488);
          }
        }
      }
    }
    else {
      piVar4 = piVar2 + 3;
    }
    iVar3 = *piVar4;
  }
  if (*(int *)(iVar1 + 0x4c) == param_1) {
    *(ushort *)(iVar1 + 0x16) = *(ushort *)(iVar1 + 0x16) & 0xff9f;
    *(undefined4 *)(iVar1 + 0x4c) = 0;
    return;
  }
  if (*(int *)(iVar1 + 0x28) == 2) {
    *(ushort *)(iVar1 + 0x16) = *(ushort *)(iVar1 + 0x16) & 0xffbf;
  }
  return;
}


/* FUN_00530010 @ 00530010  kind=lib  attributed-by=lib-island  size=484 */

int FUN_00530010(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined1 local_2c [16];
  int local_1c;
  ushort local_16;
  ushort local_14;
  uint local_c;
  uint local_8;
  
  iVar6 = param_2;
  iVar4 = param_1;
  piVar1 = *(int **)(param_1 + 0x34);
  FUN_0052eda0(param_1,param_2,local_2c);
  if (local_14 != 0) {
    puVar5 = (undefined1 *)((uint)local_14 + iVar6);
    if ((undefined1 *)((uint)*(ushort *)(iVar4 + 0x12) + *(int *)(iVar4 + 0x38)) < puVar5 + 3) {
      FUN_00525a30(0xb,"database corruption at line %d of [%.10s]",0xd161,
                   "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
      return 0xb;
    }
    local_c = ((local_1c - (uint)local_16) + -1 + (piVar1[9] - 4U)) / (piVar1[9] - 4U);
    uVar3 = CONCAT31(CONCAT21(CONCAT11(*puVar5,puVar5[1]),puVar5[2]),puVar5[3]);
    while (local_c != 0) {
      local_c = local_c - 1;
      local_8 = 0;
      param_1 = 0;
      if ((uVar3 < 2) || ((uint)piVar1[0xb] < uVar3)) {
        FUN_00525a30(0xb,"database corruption at line %d of [%.10s]",0xd16f,
                     "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
        return 0xb;
      }
      if (local_c == 0) {
LAB_005300fc:
        param_1 = 0;
        FUN_00560e90(*(undefined4 *)(*piVar1 + 0xb4),uVar3,0,&param_1);
        if (param_1 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(param_1 + 8);
          *(undefined4 *)(iVar4 + 0x38) = *(undefined4 *)(param_1 + 4);
          *(int *)(iVar4 + 0x44) = param_1;
          *(int **)(iVar4 + 0x34) = piVar1;
          *(uint *)(iVar4 + 0x48) = uVar3;
          *(byte *)(iVar4 + 5) = (uVar3 != 1) - 1U & 100;
        }
        if (iVar4 != 0) goto LAB_00530148;
LAB_00530172:
        iVar6 = FUN_00539460(piVar1,iVar4,uVar3);
      }
      else {
        iVar4 = FUN_0053ab00(piVar1,uVar3,&param_1,&local_8);
        if (iVar4 != 0) {
          return iVar4;
        }
        iVar4 = param_1;
        if (param_1 == 0) goto LAB_005300fc;
LAB_00530148:
        if (*(short *)(*(int *)(iVar4 + 0x44) + 0x1a) == 1) goto LAB_00530172;
        FUN_00525a30(0xb,"database corruption at line %d of [%.10s]",0xd183,
                     "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
        iVar6 = 0xb;
      }
      if ((iVar4 != 0) && (iVar4 = *(int *)(iVar4 + 0x44), iVar4 != 0)) {
        iVar2 = *(int *)(iVar4 + 0x10);
        FUN_00561130(iVar4);
        if (*(int *)(*(int *)(iVar2 + 0xb4) + 0xc) == 0) {
          FUN_00541a10(iVar2);
        }
      }
      uVar3 = local_8;
      if (iVar6 != 0) {
        return iVar6;
      }
    }
  }
  return 0;
}


/* FUN_00530200 @ 00530200  kind=lib  attributed-by=lib-island  size=407 */

int FUN_00530200(int param_1,uint param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  int local_8;
  
  if (*(uint *)(param_1 + 0x2c) < param_2) {
    FUN_00525a30(0xb,"database corruption at line %d of [%.10s]",0xd8f8,
                 "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
    return 0xb;
  }
  iVar3 = FUN_0053a6a0(param_1,param_2,&local_8);
  if (iVar3 != 0) {
    return iVar3;
  }
  param_2 = 0;
  if (*(short *)(local_8 + 0x10) != 0) {
    do {
      puVar4 = (undefined1 *)
               ((uint)(CONCAT11(*(undefined1 *)(*(int *)(local_8 + 0x40) + param_2 * 2),
                                *(undefined1 *)(*(int *)(local_8 + 0x40) + 1 + param_2 * 2)) &
                      *(ushort *)(local_8 + 0x12)) + *(int *)(local_8 + 0x38));
      if (((*(char *)(local_8 + 3) == '\0') &&
          (iVar3 = FUN_00530200(param_1,CONCAT31(CONCAT21(CONCAT11(*puVar4,puVar4[1]),puVar4[2]),
                                                 puVar4[3]),1,param_4), iVar3 != 0)) ||
         (iVar3 = FUN_00530010(local_8,puVar4), iVar3 != 0)) goto LAB_00530366;
      param_2 = param_2 + 1;
    } while ((int)param_2 < (int)(uint)*(ushort *)(local_8 + 0x10));
  }
  if (*(char *)(local_8 + 3) == '\0') {
    iVar3 = *(int *)(local_8 + 0x38);
    iVar3 = FUN_00530200(param_1,CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar3 + 8),
                                                            *(undefined1 *)(iVar3 + 9)),
                                                   *(undefined1 *)(iVar3 + 10)),
                                          *(undefined1 *)(iVar3 + 0xb)),1,param_4);
    if (iVar3 != 0) goto LAB_00530366;
  }
  else if (param_4 != (int *)0x0) {
    *param_4 = *param_4 + (uint)*(ushort *)(local_8 + 0x10);
  }
  if (param_3 == 0) {
    iVar3 = FUN_00560330(*(undefined4 *)(local_8 + 0x44));
    if (iVar3 == 0) {
      FUN_00583190(local_8,**(byte **)(local_8 + 0x38) | 8);
    }
  }
  else {
    iVar3 = FUN_00539460(*(undefined4 *)(local_8 + 0x34),local_8,*(undefined4 *)(local_8 + 0x48));
  }
LAB_00530366:
  iVar1 = *(int *)(local_8 + 0x44);
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x10);
    FUN_00561130(iVar1);
    if (*(int *)(*(int *)(iVar2 + 0xb4) + 0xc) == 0) {
      FUN_00541a10(iVar2);
    }
  }
  return iVar3;
}


/* FUN_005303a0 @ 005303a0  kind=lib  attributed-by=lib-island  size=118 */

void FUN_005303a0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  FUN_00556700(param_1,*param_2);
  FUN_00567370(param_1,param_2[10]);
  FUN_00555e30(param_1,param_2[0xb]);
  FUN_00556700(param_1,param_2[0xc]);
  FUN_00555e30(param_1,param_2[0xd]);
  FUN_00556700(param_1,param_2[0xe]);
  iVar1 = param_2[0xf];
  if (iVar1 != 0) {
    FUN_005303a0(param_1,iVar1);
    FUN_005521a0(param_1,iVar1);
  }
  FUN_00555e30(param_1,param_2[0x12]);
  FUN_00555e30(param_1,param_2[0x13]);
  return;
}


/* FUN_00530420 @ 00530420  kind=lib  attributed-by=lib-island  size=341 */

void FUN_00530420(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = (int *)param_1[0x28];
  if (piVar1 != (int *)0x0) {
    for (piVar2 = (int *)piVar1[1]; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
      piVar1 = piVar2;
    }
    piVar2 = (int *)*piVar1;
    iVar5 = *piVar2;
    piVar2[0x2e] = piVar1[4];
    piVar2[0x2d] = piVar1[0xe];
    piVar2[1] = piVar1[2];
    piVar2[7] = piVar1[0xc];
    piVar2[2] = piVar1[3];
    piVar2[6] = piVar1[0xd];
    piVar2[0x10] = piVar1[5];
    *(short *)((int)piVar2 + 0x2e) = (short)piVar1[10];
    *(int *)(iVar5 + 0x20) = piVar1[8];
    *(int *)(iVar5 + 0x24) = piVar1[9];
    piVar2[0x19] = piVar1[0x11];
  }
  param_1[0x28] = 0;
  param_1[0x2a] = 0;
  if ((param_1[0x10] != 0) && (iVar5 = 0, *(short *)((int)param_1 + 0x2e) != 0)) {
    do {
      piVar1 = *(int **)(param_1[0x10] + iVar5 * 4);
      if (piVar1 != (int *)0x0) {
        FUN_00576360(*param_1,piVar1);
        if (piVar1[1] == 0) {
          if (*piVar1 != 0) {
            FUN_0054c7f0(*piVar1);
          }
        }
        else {
          FUN_0054c710(piVar1[1]);
        }
        iVar3 = piVar1[9];
        if (iVar3 != 0) {
          iVar4 = piVar1[10];
          param_1[0x18] = param_1[0x18] & 0xfffffff7 | 4;
          (**(code **)(iVar4 + 0x1c))(iVar3);
          param_1[0x18] = param_1[0x18] & 0xfffffff3;
        }
        *(undefined4 *)(param_1[0x10] + iVar5 * 4) = 0;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)(uint)*(ushort *)((int)param_1 + 0x2e));
  }
  if (param_1[2] != 0) {
    FUN_00545650(param_1[2] + 0x28,param_1[6]);
  }
  iVar5 = param_1[0x29];
  while (iVar5 != 0) {
    iVar5 = param_1[0x29];
    param_1[0x29] = *(undefined4 *)(iVar5 + 4);
    FUN_00573540(iVar5);
    iVar5 = param_1[0x29];
  }
  return;
}


/* FUN_00530580 @ 00530580  kind=lib  attributed-by=lib-island  size=718 */

int FUN_00530580(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,int param_6,undefined4 *param_7)

{
  size_t _Size;
  undefined2 *puVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  undefined4 uVar8;
  char cVar9;
  int iVar10;
  char *_Src;
  char *pcVar11;
  int *piVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  byte *pbVar16;
  int iVar17;
  byte bVar18;
  int iVar19;
  uint uVar20;
  int local_c;
  void *local_8;
  
  uVar3 = param_2[7];
  iVar4 = param_2[4];
  iVar5 = param_1[2];
  uVar20 = (uint)*(ushort *)(param_2 + 1);
  iVar10 = param_6 + uVar20;
  local_c = param_1[0x13] + 1;
  param_1[0x13] = iVar10 + param_1[0x13];
  _Src = (char *)FUN_0055b220(iVar5,iVar4);
  if (_Src == (char *)0x0) {
    local_8 = (void *)0x0;
  }
  else {
    cVar2 = *_Src;
    pcVar11 = _Src;
    while (cVar2 != '\0') {
      pcVar11 = pcVar11 + 1;
      cVar2 = *pcVar11;
    }
    _Size = ((int)pcVar11 - (int)_Src & 0x3fffffffU) + 1;
    local_8 = (void *)FUN_00552230(*param_1,_Size);
    if ((local_8 != (void *)0x0) && (memcpy(local_8,_Src,_Size), local_8 != (void *)0x0))
    goto LAB_00530622;
  }
  *(undefined1 *)(*param_1 + 0x38) = 1;
LAB_00530622:
  param_6 = 0;
  if (uVar20 == 0) {
    *param_7 = local_8;
    return local_c;
  }
  do {
    piVar12 = (int *)FUN_005372f0(param_3,uVar3,*(undefined4 *)(*(int *)(iVar4 + 4) + param_6 * 4),
                                  param_4,param_5,*param_2,iVar4);
    if (piVar12 == (int *)0x0) {
      *param_7 = local_8;
      return local_c;
    }
    iVar19 = param_6 + local_c;
    iVar13 = FUN_00530cf0(param_1,piVar12,param_2,iVar19);
    iVar17 = local_c;
    if (iVar13 != iVar19) {
      if (iVar10 == 1) {
        iVar17 = iVar13;
        if ((local_c != 0) && (*(byte *)((int)param_1 + 0x13) < 8)) {
          iVar13 = 0;
          piVar14 = param_1 + 0x19;
          do {
            if (piVar14[4] == local_c) {
              *(undefined1 *)(piVar14 + 2) = 1;
              goto LAB_00530710;
            }
            iVar13 = iVar13 + 1;
            piVar14 = piVar14 + 6;
          } while (iVar13 < 10);
          param_1[*(byte *)((int)param_1 + 0x13) + 7] = local_c;
          *(char *)((int)param_1 + 0x13) = *(char *)((int)param_1 + 0x13) + '\x01';
        }
      }
      else {
        iVar6 = *(int *)(iVar5 + 0x1c);
        if ((iVar6 < *(int *)(iVar5 + 0x20)) || (iVar15 = FUN_0053b4b0(iVar5), iVar15 == 0)) {
          *(int *)(iVar5 + 0x1c) = *(int *)(iVar5 + 0x1c) + 1;
          iVar15 = *(int *)(iVar5 + 4);
          *(undefined2 *)(iVar15 + iVar6 * 0x14) = 0xf;
          *(undefined1 *)(iVar15 + 3 + iVar6 * 0x14) = 0;
          *(int *)(iVar15 + 4 + iVar6 * 0x14) = iVar13;
          *(int *)(iVar15 + 8 + iVar6 * 0x14) = iVar19;
          *(undefined4 *)(iVar15 + 0xc + iVar6 * 0x14) = 0;
          *(undefined4 *)(iVar15 + 0x10 + iVar6 * 0x14) = 0;
        }
      }
    }
LAB_00530710:
    local_c = iVar17;
    if ((*(byte *)(piVar12 + 4) & 0x81) == 0) {
      uVar8 = param_2[9];
      pbVar7 = *(byte **)(*piVar12 + 0xc);
      for (pbVar16 = pbVar7; (*pbVar16 == 0x9d || (*pbVar16 == 0x9c));
          pbVar16 = *(byte **)(pbVar16 + 8)) {
      }
      bVar18 = *pbVar16;
      if (bVar18 == 0x84) {
        bVar18 = pbVar16[0x23];
      }
      if (((bVar18 != 0x5e) && ((bVar18 < 0x81 || (0x83 < bVar18)))) &&
         ((iVar17 = *(int *)(iVar5 + 0x1c), iVar17 < *(int *)(iVar5 + 0x20) ||
          (iVar13 = FUN_0053b4b0(iVar5), iVar13 == 0)))) {
        *(int *)(iVar5 + 0x1c) = *(int *)(iVar5 + 0x1c) + 1;
        puVar1 = (undefined2 *)(*(int *)(iVar5 + 4) + iVar17 * 0x14);
        *puVar1 = 0x49;
        *(undefined1 *)((int)puVar1 + 3) = 0;
        *(int *)(puVar1 + 2) = param_6 + local_c;
        *(undefined4 *)(puVar1 + 4) = uVar8;
        *(undefined4 *)(puVar1 + 6) = 0;
        *(undefined4 *)(puVar1 + 8) = 0;
      }
      if (local_8 != (void *)0x0) {
        cVar2 = *(char *)(param_6 + (int)local_8);
        cVar9 = FUN_00553b20(pbVar7);
        if (cVar9 == '\0') {
          if (cVar2 != '\0') goto LAB_005307fb;
LAB_00530801:
          *(undefined1 *)(param_6 + (int)local_8) = 0x62;
        }
        else if (cVar2 == '\0') {
LAB_005307fb:
          if ((char)(cVar9 + cVar2) == 'b') goto LAB_00530801;
        }
        else if ((cVar9 < 'c') && (cVar2 < 'c')) goto LAB_00530801;
        iVar17 = FUN_00556a80(pbVar7,*(undefined1 *)(param_6 + (int)local_8));
        if (iVar17 != 0) {
          *(undefined1 *)(param_6 + (int)local_8) = 0x62;
        }
      }
    }
    param_6 = param_6 + 1;
    if ((int)uVar20 <= param_6) {
      *param_7 = local_8;
      return local_c;
    }
  } while( true );
}


/* FUN_00530850 @ 00530850  kind=lib  attributed-by=lib-island  size=109 */

void FUN_00530850(int param_1,int param_2,int param_3,char *param_4)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  if (param_4 != (char *)0x0) {
    for (; (0 < param_3 && (*param_4 == 'b')); param_4 = param_4 + 1) {
      param_3 = param_3 + -1;
      param_2 = param_2 + 1;
    }
    for (; (1 < param_3 && (param_4[param_3 + -1] == 'b')); param_3 = param_3 + -1) {
    }
    if (0 < param_3) {
      FUN_0056be90(uVar1,0x1e,param_2,param_3);
      FUN_0056c320(uVar1,0xffffffff,param_4,param_3);
      FUN_00554430(param_1,param_2,param_3);
    }
  }
  return;
}


/* FUN_005308c0 @ 005308c0  kind=lib  attributed-by=lib-island  size=432 */

void FUN_005308c0(undefined4 *param_1,int param_2,short *param_3,char *param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  ulonglong local_24 [4];
  
  uVar2 = *param_1;
  local_24[1] = 0;
  local_24[2] = 0;
  local_24[3] = 0;
  local_24[0] = ZEXT48(param_1);
  iVar4 = FUN_00546130(local_24,param_5);
  if (((iVar4 == 0) && (iVar4 = FUN_00546130(local_24,param_6), iVar4 == 0)) &&
     (iVar4 = FUN_00546130(local_24,param_7), iVar4 == 0)) {
    if (param_4 != (char *)0x0) {
      if (*param_4 == '^') {
        uVar5 = *(undefined4 *)(param_4 + 4);
      }
      else {
        uVar5 = 0;
      }
      iVar4 = FUN_0054ab50(param_1,param_2,uVar5,0,0);
      if (iVar4 != 0) goto LAB_00530a47;
    }
    piVar6 = (int *)FUN_0055ab80(param_1);
    iVar4 = param_1[0x10];
    if ((int)param_1[0xf] < 4) {
      iVar4 = param_1[0x13] + 1;
      param_1[0x13] = param_1[0x13] + 4;
    }
    else {
      param_1[0x10] = iVar4 + 4;
      param_1[0xf] = param_1[0xf] + -4;
    }
    FUN_005545d0(param_1,param_5,iVar4);
    FUN_005545d0(param_1,param_6,iVar4 + 1);
    FUN_005545d0(param_1,param_7,iVar4 + 2);
    if (piVar6 != (int *)0x0) {
      FUN_0056bef0(piVar6,0x12,0,(iVar4 - *param_3) + 3,iVar4 + 3);
      if (piVar6[1] != 0) {
        *(char *)(piVar6[1] + -0x11 + piVar6[7] * 0x14) = (char)*param_3;
      }
      iVar4 = piVar6[1];
      iVar3 = *piVar6;
      if ((iVar4 == 0) || (*(char *)(iVar3 + 0x38) != '\0')) {
        FUN_00539320(iVar3,0xfffffffb,param_3);
      }
      else {
        iVar1 = iVar4 + (piVar6[7] + -1) * 0x14;
        FUN_00539320(iVar3,(int)*(char *)(iVar1 + 1),
                     *(undefined4 *)(iVar4 + 0x10 + (piVar6[7] + -1) * 0x14));
        *(short **)(iVar1 + 0x10) = param_3;
        *(undefined1 *)(iVar1 + 1) = 0xfb;
      }
      FUN_0056be30(piVar6,0x81,param_2 == 0x18);
    }
  }
  else {
    param_1[0x11] = param_1[0x11] + 1;
  }
LAB_00530a47:
  FUN_00555e30(uVar2,param_5);
  FUN_00555e30(uVar2,param_6);
  FUN_00555e30(uVar2,param_7);
  return;
}


/* FUN_00530a70 @ 00530a70  kind=lib  attributed-by=lib-island  size=361 */

int FUN_00530a70(int param_1,int param_2,int param_3,undefined1 param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7,byte param_8)

{
  undefined1 *puVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar9 = param_2;
  if (((*(ushort *)(param_2 + 2) & 0x100) != 0) ||
     (((iVar9 = param_3, param_3 != 0 && ((*(ushort *)(param_3 + 2) & 0x100) != 0)) ||
      (iVar7 = FUN_00555b70(param_1,param_2), iVar7 == 0)))) {
    iVar7 = FUN_00555b70(param_1,iVar9);
  }
  cVar4 = FUN_00553b20(param_3);
  cVar5 = FUN_00553b20(param_2);
  if (cVar5 == '\0') {
    if (cVar4 == '\0') {
      bVar6 = 0x62;
      goto LAB_00530af1;
    }
  }
  else if (cVar4 != '\0') {
    if ((cVar5 < 'c') && (cVar4 < 'c')) {
      bVar6 = 0x62;
    }
    else {
      bVar6 = 99;
    }
    goto LAB_00530af1;
  }
  bVar6 = cVar5 + cVar4;
LAB_00530af1:
  piVar3 = *(int **)(param_1 + 8);
  iVar9 = piVar3[7];
  if ((iVar9 < piVar3[8]) || (iVar8 = FUN_0053b4b0(piVar3), iVar8 == 0)) {
    piVar3[7] = piVar3[7] + 1;
    puVar1 = (undefined1 *)(piVar3[1] + iVar9 * 0x14);
    *puVar1 = param_4;
    *(undefined4 *)(puVar1 + 4) = param_6;
    *(undefined4 *)(puVar1 + 8) = param_7;
    puVar1[3] = 0;
    *(undefined4 *)(puVar1 + 0xc) = param_5;
    *(undefined4 *)(puVar1 + 0x10) = 0;
    puVar1[1] = 0;
  }
  else {
    iVar9 = 1;
  }
  if ((piVar3[1] == 0) || (*(char *)(*piVar3 + 0x38) != '\0')) {
    FUN_00539320(*piVar3,0xfffffffc,iVar7);
  }
  else {
    iVar8 = iVar9;
    if (iVar9 < 0) {
      iVar8 = piVar3[7] + -1;
    }
    iVar2 = piVar3[1] + iVar8 * 0x14;
    FUN_00539320(*piVar3,(int)*(char *)(piVar3[1] + 1 + iVar8 * 0x14),
                 *(undefined4 *)(piVar3[1] + 0x10 + iVar8 * 0x14));
    *(undefined4 *)(iVar2 + 0x10) = 0;
    if (iVar7 == 0) {
      *(undefined4 *)(iVar2 + 0x10) = 0;
      *(undefined1 *)(iVar2 + 1) = 0;
    }
    else {
      *(int *)(iVar2 + 0x10) = iVar7;
      *(undefined1 *)(iVar2 + 1) = 0xfc;
    }
  }
  iVar7 = *(int *)(*(int *)(param_1 + 8) + 4);
  if (iVar7 != 0) {
    *(byte *)(iVar7 + -0x11 + *(int *)(*(int *)(param_1 + 8) + 0x1c) * 0x14) = param_8 | bVar6;
  }
  return iVar9;
}


/* FUN_00530be0 @ 00530be0  kind=lib  attributed-by=lib-island  size=264 */

void FUN_00530be0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = *(int *)(param_1 + 8);
  if (*(char *)(param_1 + 0x13) == '\0') {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
    iVar5 = *(int *)(param_1 + 0x4c);
  }
  else {
    bVar1 = *(char *)(param_1 + 0x13) - 1;
    *(byte *)(param_1 + 0x13) = bVar1;
    iVar5 = *(int *)(param_1 + 0x1c + (uint)bVar1 * 4);
  }
  FUN_0056bfc0(iVar3,0x34,param_2,param_3,param_5,param_4);
  iVar4 = *(int *)(iVar3 + 0x1c);
  if ((iVar4 < *(int *)(iVar3 + 0x20)) || (iVar2 = FUN_0053b4b0(iVar3), iVar2 == 0)) {
    *(int *)(iVar3 + 0x1c) = *(int *)(iVar3 + 0x1c) + 1;
    iVar2 = *(int *)(iVar3 + 4);
    *(undefined4 *)(iVar2 + 4 + iVar4 * 0x14) = param_5;
    *(undefined2 *)(iVar2 + iVar4 * 0x14) = 0x1f;
    *(undefined1 *)(iVar2 + 3 + iVar4 * 0x14) = 0;
    *(undefined4 *)(iVar2 + 8 + iVar4 * 0x14) = param_4;
    *(int *)(iVar2 + 0xc + iVar4 * 0x14) = iVar5;
    *(undefined4 *)(iVar2 + 0x10 + iVar4 * 0x14) = 0;
  }
  iVar4 = *(int *)(iVar3 + 0x1c);
  if ((iVar4 < *(int *)(iVar3 + 0x20)) || (iVar2 = FUN_0053b4b0(iVar3), iVar2 == 0)) {
    *(int *)(iVar3 + 0x1c) = *(int *)(iVar3 + 0x1c) + 1;
    iVar3 = *(int *)(iVar3 + 4);
    *(undefined2 *)(iVar3 + iVar4 * 0x14) = 0x61;
    *(undefined1 *)(iVar3 + 3 + iVar4 * 0x14) = 0;
    *(undefined4 *)(iVar3 + 4 + iVar4 * 0x14) = param_2;
    *(int *)(iVar3 + 8 + iVar4 * 0x14) = iVar5;
    *(undefined4 *)(iVar3 + 0xc + iVar4 * 0x14) = 0;
    *(undefined4 *)(iVar3 + 0x10 + iVar4 * 0x14) = 0;
  }
  if ((iVar5 != 0) && (*(byte *)(param_1 + 0x13) < 8)) {
    iVar4 = 0;
    iVar3 = param_1 + 100;
    while (*(int *)(iVar3 + 0x10) != iVar5) {
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x18;
      if (9 < iVar4) {
        *(int *)(param_1 + 0x1c + (uint)*(byte *)(param_1 + 0x13) * 4) = iVar5;
        *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
        return;
      }
    }
    *(undefined1 *)(iVar3 + 8) = 1;
  }
  return;
}


/* FUN_00530cf0 @ 00530cf0  kind=lib  attributed-by=lib-island  size=302 */

undefined4 FUN_00530cf0(undefined4 *param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  
  pcVar1 = (char *)*param_2;
  uVar2 = param_1[2];
  if (*pcVar1 == 'L') {
    param_4 = FUN_00554e20(param_1,*(undefined4 *)(pcVar1 + 0xc),param_4);
  }
  else if (*pcVar1 == 'I') {
    FUN_0056be90(uVar2,10,0,param_4);
  }
  else {
    iVar4 = FUN_00556e50(param_1,pcVar1,0);
    uVar7 = *(undefined4 *)(pcVar1 + 0x18);
    FUN_0056be90(uVar2,0x48,uVar7,0);
    if (*(int *)(param_3 + 0x40) == 0) {
      uVar5 = FUN_005741e0(uVar2);
      *(undefined4 *)(param_3 + 0x28) = uVar5;
    }
    *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + 1;
    uVar5 = *(undefined4 *)(param_3 + 0x44);
    uVar3 = *param_1;
    iVar6 = FUN_00552390(uVar3,uVar5,*(int *)(param_3 + 0x40) << 3);
    if (iVar6 == 0) {
      FUN_005521a0(uVar3,uVar5);
    }
    *(int *)(param_3 + 0x44) = iVar6;
    if (iVar6 == 0) {
      *(undefined4 *)(param_3 + 0x40) = 0;
    }
    else {
      iVar6 = iVar6 + *(int *)(param_3 + 0x40) * 8;
      *(undefined4 *)(iVar6 + -8) = uVar7;
      if (iVar4 == 1) {
        uVar7 = FUN_0056be90(uVar2,0x41,uVar7);
      }
      else {
        uVar7 = FUN_0056bef0(uVar2,0x1d,uVar7,0,param_4);
      }
      *(undefined4 *)(iVar6 + -4) = uVar7;
      FUN_0056be30(uVar2,0x49,param_4);
    }
  }
  FUN_005342a0(param_3,param_2);
  return param_4;
}


/* FUN_00530e20 @ 00530e20  kind=lib  attributed-by=lib-island  size=224 */

void FUN_00530e20(int param_1,int param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int local_c;
  int local_8;
  
  puVar2 = *(undefined4 **)(param_1 + 8);
  if ((*(ushort *)(param_2 + 2) & 0x400) != 0) {
    iVar4 = *(int *)(param_2 + 4);
    if (param_3 != 0) {
      iVar4 = -iVar4;
    }
    FUN_0056be90(puVar2,7,iVar4,param_4);
    return;
  }
  pcVar3 = *(char **)(param_2 + 4);
  uVar6 = 0;
  if (pcVar3 != (char *)0x0) {
    cVar1 = *pcVar3;
    pcVar5 = pcVar3;
    while (cVar1 != '\0') {
      pcVar5 = pcVar5 + 1;
      cVar1 = *pcVar5;
    }
    uVar6 = (int)pcVar5 - (int)pcVar3 & 0x3fffffff;
  }
  iVar4 = FUN_0054a9a0(pcVar3,&local_c,uVar6,1);
  if (iVar4 == 0) {
    iVar4 = local_8;
    iVar8 = local_c;
    if (param_3 != 0) {
      iVar8 = -local_c;
      iVar4 = -(local_8 + (uint)(local_c != 0));
    }
  }
  else {
    if ((iVar4 != 2) || (param_3 == 0)) {
      FUN_00532120(puVar2,pcVar3,param_3,param_4);
      return;
    }
    iVar4 = -0x80000000;
    iVar8 = 0;
  }
  piVar7 = (int *)FUN_00552230(*puVar2,8);
  if (piVar7 != (int *)0x0) {
    *piVar7 = iVar8;
    piVar7[1] = iVar4;
  }
  FUN_0056bf50(puVar2,8,0,param_4,0,piVar7,0xfffffff3);
  return;
}


/* FUN_00530f00 @ 00530f00  kind=lib  attributed-by=lib-island  size=89 */

void FUN_00530f00(int param_1,int param_2,int param_3)

{
  uint uVar1;
  
  if ((*(int *)(param_2 + 0xc) != 0) && (param_3 != 0)) {
    FUN_0056be90(param_1,0x14,*(int *)(param_2 + 0xc),0xffffffff);
    uVar1 = FUN_0056be30(param_1,0x79,*(undefined4 *)(param_2 + 0xc));
    FUN_0056be90(param_1,1,0,param_3);
    if ((-1 < (int)uVar1) && (uVar1 < *(uint *)(param_1 + 0x1c))) {
      *(uint *)(*(int *)(param_1 + 4) + 8 + uVar1 * 0x14) = *(uint *)(param_1 + 0x1c);
    }
  }
  return;
}


/* FUN_00530f60 @ 00530f60  kind=lib  attributed-by=lib-island  size=4528 */

undefined8 FUN_00530f60(int *param_1,int param_2,ushort param_3,uint param_4,uint param_5)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  byte bVar9;
  undefined1 uVar10;
  char cVar11;
  short sVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined4 uVar19;
  undefined4 *puVar20;
  int iVar21;
  int iVar22;
  uint *puVar23;
  int *piVar24;
  int *piVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  undefined4 *puVar29;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  int iVar30;
  short *psVar31;
  uint *puVar32;
  int iVar33;
  char *pcVar34;
  int iVar35;
  short *psVar36;
  uint local_64;
  uint uStack_60;
  undefined4 local_58;
  int local_54;
  uint local_50;
  int local_44;
  int local_40;
  int local_3c;
  uint local_34;
  int *local_28;
  short *local_24;
  int local_20;
  int *local_1c;
  int local_18;
  
  iVar1 = param_1[8];
  piVar2 = (int *)*param_1;
  puVar32 = (uint *)(param_1 + param_2 * 0x16 + 0xe);
  piVar25 = (int *)piVar2[2];
  local_20 = 0;
  iVar30 = param_1[1] + (uint)(byte)puVar32[0xd] * 0x48;
  uVar3 = *(uint *)(iVar30 + 0x34);
  uVar26 = *puVar32 >> 0x18 & 1;
  if (((*puVar32 & 0x400000) == 0) || (bVar8 = true, (param_3 & 0x20) != 0)) {
    bVar8 = false;
  }
  uVar13 = FUN_005741e0();
  puVar32[10] = uVar13;
  puVar32[9] = uVar13;
  uVar14 = FUN_005741e0();
  puVar32[0xb] = uVar14;
  if (((char)puVar32[0xd] != '\0') && ((*(byte *)(iVar30 + 0x28) & 8) != 0)) {
    iVar21 = piVar2[0x13];
    piVar2[0x13] = iVar21 + 1U;
    puVar32[6] = iVar21 + 1U;
    FUN_0056be90(piVar25,7);
  }
  if ((*(byte *)(iVar30 + 0x2c) & 4) == 0) {
    uVar4 = *puVar32;
    if ((uVar4 & 0x8000000) == 0) {
      if ((uVar4 & 0x1000) == 0) {
        if ((uVar4 & 0x2000) == 0) {
          if ((uVar4 & 0x30000) == 0) {
            if ((uVar4 & 0x10000000) != 0) {
              uVar26 = piVar2[0x12];
              piVar2[0x13] = piVar2[0x13] + 1;
              piVar2[0x12] = uVar26 + 1;
              uVar13 = piVar2[0x13];
              local_34 = 0;
              local_1c = (int *)0x0;
              iVar22 = FUN_005741e0();
              iVar21 = *(int *)(puVar32[4] + 0xc);
              local_28 = (int *)0x0;
              *(undefined1 *)((int)puVar32 + 0x35) = 3;
              puVar32[0xe] = uVar13;
              bVar8 = false;
              if (param_1[7] < 2) {
                local_24 = (short *)param_1[1];
              }
              else {
                iVar35 = (param_1[7] - param_2) + -1;
                local_24 = (short *)FUN_00552230();
                if (local_24 == (short *)0x0) {
                  return CONCAT44(param_5,param_4);
                }
                sVar12 = (short)iVar35 + 1;
                local_24[1] = sVar12;
                *local_24 = sVar12;
                puVar29 = (undefined4 *)(iVar30 + 8);
                psVar31 = local_24 + 4;
                for (iVar28 = 0x12; iVar28 != 0; iVar28 = iVar28 + -1) {
                  *(undefined4 *)psVar31 = *puVar29;
                  puVar29 = puVar29 + 1;
                  psVar31 = psVar31 + 2;
                }
                iVar28 = param_1[1];
                if (0 < iVar35) {
                  puVar23 = puVar32 + 0x23;
                  psVar31 = local_24 + 0x28;
                  do {
                    uVar13 = *puVar23;
                    puVar23 = puVar23 + 0x16;
                    puVar29 = (undefined4 *)(iVar28 + 8 + (uint)(byte)uVar13 * 0x48);
                    psVar36 = psVar31;
                    for (iVar33 = 0x12; iVar33 != 0; iVar33 = iVar33 + -1) {
                      *(undefined4 *)psVar36 = *puVar29;
                      puVar29 = puVar29 + 1;
                      psVar36 = psVar36 + 2;
                    }
                    iVar35 = iVar35 + -1;
                    psVar31 = psVar31 + 0x24;
                  } while (iVar35 != 0);
                }
              }
              if ((param_3 & 8) == 0) {
                local_1c = (int *)(piVar2[0x13] + 1);
                piVar2[0x13] = piVar2[0x13] + 2;
                FUN_0056be90(piVar25,10);
              }
              uVar13 = FUN_0056be90(piVar25,7);
              if ((1 < *(int *)(iVar1 + 0x18)) && (local_54 = 0, 0 < *(int *)(iVar1 + 0x18))) {
                local_50 = 0;
                local_28 = (int *)0x0;
                do {
                  iVar35 = *(int *)(iVar1 + 0x20);
                  if ((((*(byte *)(*(int *)(local_50 + iVar35) + 2) & 1) == 0) &&
                      ((*(byte *)(local_50 + 0x12 + iVar35) & 0x12) == 0)) &&
                     ((*(ushort *)(local_50 + 0x10 + iVar35) & 0xfff) != 0)) {
                    uVar19 = FUN_00536250(*piVar2,*(int *)(local_50 + iVar35));
                    local_28 = (int *)FUN_00553d70(*piVar2,local_28,uVar19);
                  }
                  local_54 = local_54 + 1;
                  local_50 = local_50 + 0x28;
                } while (local_54 < *(int *)(iVar1 + 0x18));
                if (local_28 != (int *)0x0) {
                  local_28 = (int *)FUN_00552230();
                  if (local_28 != (int *)0x0) {
                    memset(local_28,0,0x2c);
                    *(undefined1 *)local_28 = 0x45;
                    *(undefined2 *)((int)local_28 + 0x1e) = 0xffff;
                    *(undefined4 *)((int)local_28 + 0x14) = 1;
                  }
                  FUN_005540d0(*piVar2,local_28);
                  if ((local_28 != (int *)0x0) &&
                     (*(int *)(*piVar2 + 0x5c) < *(int *)((int)local_28 + 0x14))) {
                    FUN_00553950(piVar2);
                  }
                }
              }
              local_3c = 0;
              if (0 < *(int *)(iVar21 + 0x18)) {
                do {
                  iVar35 = *(int *)(iVar21 + 0x20);
                  if ((*(uint *)(iVar35 + 8 + local_3c * 0x28) == uVar3) ||
                     (*(short *)(iVar35 + 0x10 + local_3c * 0x28) == 0x200)) {
                    piVar24 = *(int **)(iVar35 + local_3c * 0x28);
                    if (local_28 != (int *)0x0) {
                      *(int **)((int)local_28 + 8) = piVar24;
                      piVar24 = local_28;
                    }
                    iVar35 = FUN_005788a0(piVar2,local_24,piVar24,0,0);
                    if (iVar35 != 0) {
                      FUN_00534f70(piVar2,local_24,iVar35 + 0x38,param_2);
                      if ((param_3 & 8) == 0) {
                        iVar28 = local_3c;
                        if (local_3c == *(int *)(iVar21 + 0x18) + -1) {
                          iVar28 = -1;
                        }
                        uVar19 = FUN_00554760(piVar2,*(undefined4 *)(iVar30 + 0x18),0xffffffff,uVar3
                                             );
                        FUN_0056bfc0(piVar25,0x72,local_1c,piVar25[7] + 2,uVar19,iVar28);
                      }
                      FUN_0056be90(piVar25,2);
                      if (*(char *)(iVar35 + 0xd) != '\0') {
                        bVar8 = true;
                      }
                      if ((((*(uint *)(iVar35 + 0x38) & 0xf0000) == 0) ||
                          ((*(uint *)(iVar35 + 0x38) & 0x20000000) != 0)) ||
                         ((local_3c != 0 && (*(uint *)(iVar35 + 0x48) != local_34)))) {
                        local_34 = 0;
                      }
                      else {
                        local_34 = *(uint *)(iVar35 + 0x48);
                      }
                      FUN_005794a0();
                    }
                  }
                  local_3c = local_3c + 1;
                } while (local_3c < *(int *)(iVar21 + 0x18));
              }
              puVar32[0x10] = local_34;
              if (local_34 != 0) {
                puVar32[8] = uVar26;
              }
              if (local_28 != (int *)0x0) {
                *(undefined4 *)((int)local_28 + 8) = 0;
                FUN_00555e30();
              }
              if (uVar13 < (uint)piVar25[7]) {
                *(int *)(piVar25[1] + 4 + uVar13 * 0x14) = piVar25[7];
              }
              FUN_0056be90(piVar25,1);
              if (piVar25[10] != 0) {
                *(int *)(piVar25[10] - (iVar22 * 4 + 4)) = piVar25[7];
              }
              if (1 < param_1[7]) {
                FUN_005521a0();
              }
              if (!bVar8) {
                FUN_005342a0();
              }
              goto LAB_00531a7a;
            }
            *(undefined *)((int)puVar32 + 0x35) = (&DAT_00712a5c)[uVar26];
            puVar32[0xe] = uVar3;
            iVar30 = FUN_0056be90(piVar25,(&DAT_00712ad4)[uVar26]);
            puVar32[0xf] = iVar30 + 1;
          }
          else {
            uVar27 = (uint)(ushort)puVar32[1];
            uVar13 = puVar32[4];
            uVar6 = puVar32[8];
            bVar7 = false;
            local_28 = (int *)0x0;
            local_1c = (int *)0x0;
            if (uVar27 == *(uint *)(uVar13 + 0x24)) {
              local_3c = 0xffffffff;
            }
            else {
              local_3c = *(undefined4 *)(*(int *)(uVar13 + 4) + uVar27 * 4);
            }
            if ((((param_3 & 1) != 0) && ((uVar4 & 0x800000) != 0)) &&
               ((int)uVar27 < *(int *)(uVar13 + 0x24))) {
              bVar7 = true;
            }
            if ((uVar4 & 0x100000) != 0) {
              local_1c = (int *)FUN_005372f0(iVar1,uVar3,local_3c,param_4,param_5);
            }
            piVar24 = local_1c;
            if ((*puVar32 & 0x200000) != 0) {
              local_28 = (int *)FUN_005372f0(iVar1,uVar3,local_3c,param_4,param_5);
            }
            iVar30 = FUN_00530580(piVar2,puVar32,iVar1,param_4,param_5);
            iVar21 = FUN_00552450(*piVar2,local_34);
            uVar4 = puVar32[10];
            if ((((int)uVar27 < (int)*(uint *)(uVar13 + 0x24)) &&
                (uVar26 == (*(char *)(uVar27 + *(int *)(uVar13 + 0x1c)) == '\0'))) ||
               ((uVar26 != 0 && (*(uint *)(uVar13 + 0x24) == uVar27)))) {
              local_1c = local_28;
              local_28 = piVar24;
            }
            if ((local_28 == (int *)0x0) || (local_44 = 0, (*(byte *)(local_28 + 4) & 0x28) != 0)) {
              local_44 = 1;
            }
            if ((local_1c == (int *)0x0) || (local_50 = 0, (*(byte *)(local_1c + 4) & 0x28) != 0)) {
              local_50 = 1;
            }
            if ((local_28 != (int *)0x0) || (local_40 = 0, uVar27 != 0)) {
              local_40 = 1;
            }
            if (local_28 == (int *)0x0) {
              uVar13 = uVar27;
              if (bVar7) {
                FUN_0056be90(piVar25,10);
                local_44 = 0;
                local_40 = 1;
                goto LAB_00531879;
              }
            }
            else {
              uVar19 = *(undefined4 *)(*local_28 + 0xc);
              FUN_005545d0(piVar2);
              FUN_00554c60(piVar25,uVar19,iVar30 + uVar27,uVar4);
              if (local_34 != 0) {
                cVar11 = FUN_00550df0();
                if (cVar11 == 'b') {
                  *(undefined1 *)(uVar27 + local_34) = 0x62;
                }
                iVar22 = FUN_00556a80();
                if (iVar22 != 0) {
                  *(undefined1 *)(uVar27 + local_34) = 0x62;
                }
              }
LAB_00531879:
              uVar13 = uVar27 + 1;
            }
            FUN_00530850(piVar2,iVar30);
            FUN_0056bfc0(piVar25,(&UNK_00712694)[(local_44 + local_40 * 2) * 2 + uVar26],uVar6,uVar4
                         ,iVar30,uVar13);
            if (local_1c != (int *)0x0) {
              uVar19 = *(undefined4 *)(*local_1c + 0xc);
              FUN_00554430(piVar2);
              FUN_005545d0(piVar2,uVar19,iVar30 + uVar27);
              FUN_00554c60(piVar25,uVar19,iVar30 + uVar27,uVar4);
              if (iVar21 != 0) {
                cVar11 = FUN_00550df0();
                if (cVar11 == 'b') {
                  *(undefined1 *)(iVar21 + uVar27) = 0x62;
                }
                iVar22 = FUN_00556a80();
                if (iVar22 != 0) {
                  *(undefined1 *)(iVar21 + uVar27) = 0x62;
                }
              }
              FUN_00530850(piVar2,iVar30);
            }
            FUN_005521a0();
            FUN_005521a0(*piVar2,iVar21);
            puVar32[0xf] = piVar25[7];
            if ((local_1c == (int *)0x0) && (uVar27 == 0)) {
              iVar30 = 0;
            }
            else {
              iVar30 = 1;
            }
            if ((&DAT_0071269c)[(uVar26 + 1) * iVar30] != -0x6b) {
              FUN_0056bfc0(piVar25,(&DAT_0071269c)[(uVar26 + 1) * iVar30],uVar6,uVar4);
              FUN_0056c490(piVar25,local_50 != uVar26);
            }
            uVar19 = FUN_0055a1f0();
            if ((*puVar32 & 0x300000) != 0) {
              FUN_0056bef0(piVar25,0x1d,uVar6);
              FUN_0056be90(piVar25,0x49,uVar19,uVar14);
            }
            FUN_00563fb0();
            FUN_005342a0(puVar32,local_28);
            FUN_005342a0(puVar32,local_1c);
            if (!bVar8) {
              local_20 = FUN_0055a1f0();
              FUN_0056be90(piVar25,99,uVar6);
              FUN_00554490(piVar2,uVar3,0xffffffff,local_20);
              FUN_0056be90(piVar25,0x32,extraout_EDX_00,local_20);
            }
            if ((*puVar32 & 0x2000000) == 0) {
              uVar10 = 0x5f;
              if (uVar26 != 0) {
                uVar10 = 0x5c;
              }
              *(undefined1 *)((int)puVar32 + 0x35) = uVar10;
            }
            else {
              *(undefined1 *)((int)puVar32 + 0x35) = 0x95;
            }
            puVar32[0xe] = uVar6;
            if (-1 < (int)*puVar32) goto LAB_00531a7a;
          }
          *(undefined1 *)((int)puVar32 + 0x36) = 1;
        }
        else {
          cVar11 = -0x6b;
          local_44 = 0;
          puVar20 = (undefined4 *)FUN_005372f0(iVar1,uVar3,0xffffffff,param_4,param_5);
          local_24 = (short *)FUN_005372f0(iVar1,uVar3,0xffffffff,param_4,param_5,0x18,0);
          puVar29 = puVar20;
          if (uVar26 != 0) {
            puVar29 = (undefined4 *)local_24;
            local_24 = (short *)puVar20;
          }
          if (puVar29 == (undefined4 *)0x0) {
            uVar19 = 0x48;
            if (uVar26 != 0) {
              uVar19 = 0x43;
            }
            FUN_0056be90(piVar25,uVar19);
          }
          else {
            pbVar5 = (byte *)*puVar29;
            uVar19 = FUN_00555b10(piVar2);
            FUN_0056bef0(piVar25,(&stack0xffffff87)[*pbVar5],uVar3,uVar13,uVar19);
            FUN_00554430(piVar2,uVar19,1);
            FUN_00563fb0(piVar2,local_58);
            FUN_005342a0(puVar32,puVar29);
          }
          if (local_24 != (short *)0x0) {
            pcVar34 = *(char **)local_24;
            piVar2[0x13] = piVar2[0x13] + 1;
            local_44 = piVar2[0x13];
            FUN_005545d0(piVar2);
            if ((*pcVar34 == 'O') || (*pcVar34 == 'M')) {
              cVar11 = (uVar26 == 0) * '\x02' + 'N';
            }
            else {
              cVar11 = (uVar26 != 0) * '\x02' + 'M';
            }
            FUN_005342a0();
          }
          uVar14 = piVar25[7];
          uVar10 = 0x5f;
          if (uVar26 != 0) {
            uVar10 = 0x5c;
          }
          *(undefined1 *)((int)puVar32 + 0x35) = uVar10;
          puVar32[0xe] = uVar3;
          puVar32[0xf] = uVar14;
          if ((puVar29 == (undefined4 *)0x0) && (local_24 == (short *)0x0)) {
            *(undefined1 *)((int)puVar32 + 0x36) = 1;
          }
          if (cVar11 != -0x6b) {
            local_20 = FUN_0055a1f0();
            FUN_0056be90(piVar25,0x41,uVar3);
            FUN_00554490(piVar2,uVar3,0xffffffff,local_20);
            FUN_0056bef0(piVar25,cVar11,local_44,uVar13,extraout_EDX);
            if (piVar25[1] != 0) {
              *(undefined1 *)(piVar25[1] + -0x11 + piVar25[7] * 0x14) = 0x6b;
            }
          }
        }
      }
      else {
        if (*(char *)((int)piVar2 + 0x13) == '\0') {
          piVar2[0x13] = piVar2[0x13] + 1;
          local_20 = piVar2[0x13];
        }
        else {
          bVar9 = *(char *)((int)piVar2 + 0x13) - 1;
          *(byte *)((int)piVar2 + 0x13) = bVar9;
          local_20 = piVar2[bVar9 + 7];
        }
        uVar19 = FUN_005372f0(iVar1,uVar3,0xffffffff,param_4,param_5);
        uVar19 = FUN_00530cf0(piVar2,uVar19,puVar32,local_20);
        uVar26 = puVar32[10];
        FUN_0056be90(piVar25,0x15,uVar19,uVar26);
        FUN_0056bef0(piVar25,0x36,uVar3,uVar26,uVar19);
        FUN_00554490(piVar2,uVar3);
        *(undefined1 *)((int)puVar32 + 0x35) = 0x95;
      }
    }
    else {
      piVar24 = (int *)puVar32[4];
      iVar22 = *piVar24;
      iVar35 = piVar24[4];
      iVar28 = piVar24[1];
      piVar2[0x17] = piVar2[0x17] + 1;
      iVar30 = iVar22 + 2;
      iVar21 = piVar2[0x10];
      if (piVar2[0xf] < iVar30) {
        iVar21 = piVar2[0x13] + 1;
        piVar2[0x13] = piVar2[0x13] + iVar30;
      }
      else {
        piVar2[0xf] = piVar2[0xf] - iVar30;
        piVar2[0x10] = iVar21 + iVar30;
      }
      local_18 = 1;
      if (0 < iVar22) {
        do {
          iVar33 = 0;
          if (0 < iVar22) {
            do {
              if (*(int *)(iVar35 + iVar33 * 8) == local_18) {
                iVar18 = iVar21 + local_18 + 1;
                pcVar34 = *(char **)(*(int *)(*(int *)(iVar1 + 0x20) +
                                             *(int *)(iVar28 + 8 + iVar33 * 0xc) * 0x28) + 0xc);
                if ((pcVar34 == (char *)0x0) || (*pcVar34 != -0x7c)) {
                  iVar16 = FUN_00554e20(piVar2);
                  if (((iVar16 == iVar18) || (iVar15 = piVar2[2], iVar15 == 0)) ||
                     ((local_54 = *(int *)(iVar15 + 0x1c), *(int *)(iVar15 + 0x20) <= local_54 &&
                      (iVar17 = FUN_0053b4b0(), iVar17 != 0)))) break;
                  *(int *)(iVar15 + 0x1c) = *(int *)(iVar15 + 0x1c) + 1;
                  iVar15 = *(int *)(iVar15 + 4);
                  *(int *)(iVar15 + 4 + local_54 * 0x14) = iVar16;
                  *(undefined2 *)(iVar15 + local_54 * 0x14) = 0xf;
                }
                else {
                  uVar19 = *(undefined4 *)(pcVar34 + 0x18);
                  iVar16 = piVar2[2];
                  local_54 = *(int *)(iVar16 + 0x1c);
                  if ((*(int *)(iVar16 + 0x20) <= local_54) &&
                     (iVar15 = FUN_0053b4b0(), iVar15 != 0)) break;
                  *(int *)(iVar16 + 0x1c) = *(int *)(iVar16 + 0x1c) + 1;
                  iVar15 = *(int *)(iVar16 + 4);
                  *(undefined4 *)(iVar15 + 4 + local_54 * 0x14) = uVar19;
                  *(undefined2 *)(iVar15 + local_54 * 0x14) = 0xe;
                }
                *(undefined4 *)(iVar15 + 0x10 + local_54 * 0x14) = 0;
                *(undefined4 *)(iVar15 + 0xc + local_54 * 0x14) = 0;
                *(int *)(iVar15 + 8 + local_54 * 0x14) = iVar18;
                *(undefined1 *)(iVar15 + 3 + local_54 * 0x14) = 0;
                break;
              }
              iVar33 = iVar33 + 1;
            } while (iVar33 < iVar22);
          }
        } while ((iVar33 != iVar22) && (local_18 = local_18 + 1, local_18 <= iVar22));
      }
      iVar28 = piVar24[5];
      iVar33 = piVar25[7];
      if ((iVar33 < piVar25[8]) || (iVar18 = FUN_0053b4b0(), iVar18 == 0)) {
        piVar25[7] = piVar25[7] + 1;
        iVar18 = piVar25[1];
        *(int *)(iVar18 + 4 + iVar33 * 0x14) = iVar28;
        *(undefined2 *)(iVar18 + iVar33 * 0x14) = 7;
        *(undefined1 *)(iVar18 + 3 + iVar33 * 0x14) = 0;
        *(int *)(iVar18 + 8 + iVar33 * 0x14) = iVar21;
        *(undefined4 *)(iVar18 + 0xc + iVar33 * 0x14) = 0;
        *(undefined4 *)(iVar18 + 0x10 + iVar33 * 0x14) = 0;
      }
      iVar28 = piVar25[7];
      if ((iVar28 < piVar25[8]) || (iVar33 = FUN_0053b4b0(), iVar33 == 0)) {
        piVar25[7] = piVar25[7] + 1;
        iVar33 = piVar25[1];
        *(undefined2 *)(iVar33 + iVar28 * 0x14) = 7;
        iVar33 = iVar33 + iVar28 * 0x14;
        *(int *)(iVar33 + 4) = local_18 + -1;
        *(undefined1 *)(iVar33 + 3) = 0;
        *(int *)(iVar33 + 8) = iVar21 + 1;
        *(undefined4 *)(iVar33 + 0xc) = 0;
        *(undefined4 *)(iVar33 + 0x10) = 0;
      }
      iVar28 = piVar25[7];
      if ((iVar28 < piVar25[8]) || (iVar33 = FUN_0053b4b0(), iVar33 == 0)) {
        iVar33 = piVar25[1];
        piVar25[7] = piVar25[7] + 1;
        *(uint *)(iVar33 + 4 + iVar28 * 0x14) = uVar3;
        *(uint *)(iVar33 + 8 + iVar28 * 0x14) = uVar13;
        *(int *)(iVar33 + 0xc + iVar28 * 0x14) = iVar21;
        *(undefined2 *)(iVar33 + iVar28 * 0x14) = 0x88;
        *(undefined1 *)(iVar33 + 3 + iVar28 * 0x14) = 0;
        *(undefined4 *)(iVar33 + 0x10 + iVar28 * 0x14) = 0;
      }
      else {
        iVar28 = 1;
      }
      FUN_0056c320(piVar25,iVar28);
      piVar24[7] = 0;
      if (0 < iVar22) {
        pcVar34 = (char *)(iVar35 + 4);
        iVar35 = iVar22;
        do {
          if (*pcVar34 != '\0') {
            FUN_005342a0();
          }
          pcVar34 = pcVar34 + 8;
          iVar35 = iVar35 + -1;
        } while (iVar35 != 0);
      }
      puVar32[0xe] = uVar3;
      *(undefined1 *)((int)puVar32 + 0x35) = 0x8a;
      puVar32[0xf] = piVar25[7];
      piVar24 = piVar2 + 0x1d;
      iVar35 = 10;
      do {
        iVar28 = *piVar24;
        if ((iVar21 <= iVar28) && (iVar28 <= iVar21 + iVar22 + 1)) {
          if ((char)piVar24[-2] != '\0') {
            if (*(byte *)((int)piVar2 + 0x13) < 8) {
              piVar2[*(byte *)((int)piVar2 + 0x13) + 7] = iVar28;
              *(char *)((int)piVar2 + 0x13) = *(char *)((int)piVar2 + 0x13) + '\x01';
            }
            *(undefined1 *)(piVar24 + -2) = 0;
          }
          *piVar24 = 0;
        }
        piVar24 = piVar24 + 6;
        iVar35 = iVar35 + -1;
      } while (iVar35 != 0);
      if (piVar2[0xf] < iVar30) {
        piVar2[0xf] = iVar30;
        piVar2[0x10] = iVar21;
      }
      piVar2[0x17] = piVar2[0x17] + -1;
      piVar24 = piVar2 + 0x1d;
      iVar30 = 10;
      do {
        if ((*piVar24 != 0) && (piVar2[0x17] < piVar24[-1])) {
          if ((char)piVar24[-2] != '\0') {
            if (*(byte *)((int)piVar2 + 0x13) < 8) {
              piVar2[*(byte *)((int)piVar2 + 0x13) + 7] = *piVar24;
              *(char *)((int)piVar2 + 0x13) = *(char *)((int)piVar2 + 0x13) + '\x01';
            }
            *(undefined1 *)(piVar24 + -2) = 0;
          }
          *piVar24 = 0;
        }
        piVar24 = piVar24 + 6;
        iVar30 = iVar30 + -1;
      } while (iVar30 != 0);
    }
  }
  else {
    iVar30 = *(int *)(iVar30 + 0x24);
    FUN_0056be90(piVar25,7);
    uVar26 = FUN_0056be30(piVar25,4,iVar30);
    puVar32[0xf] = uVar26;
    FUN_0056be90(piVar25,0x1b,iVar30 + 1,uVar13);
    *(undefined1 *)((int)puVar32 + 0x35) = 1;
  }
LAB_00531a7a:
  puVar23 = *(uint **)(iVar1 + 4);
  uVar13 = 0;
  uVar26 = *puVar23;
  if (0 < (int)uVar26) {
    do {
      puVar23 = puVar23 + 1;
      if (*puVar23 == uVar3) {
        local_64 = 1 << (uVar13 & 0x1f);
        uStack_60 = 0;
        if (0x1f < uVar13) {
          uStack_60 = local_64;
        }
        local_64 = local_64 ^ uStack_60;
        if (0x3f < uVar13) {
          uStack_60 = local_64;
        }
        goto LAB_00531aae;
      }
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < (int)uVar26);
  }
  uStack_60 = 0;
  local_64 = 0;
LAB_00531aae:
  param_4 = param_4 & ~local_64;
  param_5 = param_5 & ~uStack_60;
  piVar24 = *(int **)(iVar1 + 0x20);
  for (iVar30 = *(int *)(iVar1 + 0x18); 0 < iVar30; iVar30 = iVar30 + -1) {
    if ((*(byte *)((int)piVar24 + 0x12) & 6) == 0) {
      if ((piVar24[8] & param_4) == 0 && (piVar24[9] & param_5) == 0) {
        if ((puVar32[6] == 0) || ((*(byte *)(*piVar24 + 2) & 1) != 0)) {
          FUN_00555f40(piVar2,*piVar24);
          *(byte *)((int)piVar24 + 0x12) = *(byte *)((int)piVar24 + 0x12) | 4;
        }
      }
      else {
        *(undefined1 *)((int)param_1 + 0xd) = 1;
      }
    }
    piVar24 = piVar24 + 10;
  }
  uVar3 = puVar32[6];
  if (uVar3 == 0) goto LAB_005320c6;
  puVar32[0xc] = piVar25[7];
  iVar30 = piVar25[7];
  if (iVar30 < piVar25[8]) {
LAB_00532047:
    iVar21 = piVar25[1];
    piVar25[7] = piVar25[7] + 1;
    *(undefined2 *)(iVar21 + iVar30 * 0x14) = 7;
    *(undefined1 *)(iVar21 + 3 + iVar30 * 0x14) = 0;
    *(undefined4 *)(iVar21 + 4 + iVar30 * 0x14) = 1;
    *(uint *)(iVar21 + 8 + iVar30 * 0x14) = uVar3;
    *(undefined4 *)(iVar21 + 0xc + iVar30 * 0x14) = 0;
    *(undefined4 *)(iVar21 + 0x10 + iVar30 * 0x14) = 0;
  }
  else {
    uVar26 = FUN_00552390(*piVar25);
    if (uVar26 != 0) {
      iVar21 = *piVar25;
      if (((iVar21 == 0) || (uVar26 < *(uint *)(iVar21 + 0x104))) ||
         (*(uint *)(iVar21 + 0x108) <= uVar26)) {
        uVar13 = (*DAT_00766608._4_4_)();
      }
      else {
        uVar13 = (uint)*(ushort *)(iVar21 + 0xe8);
      }
      piVar25[8] = uVar13 / 0x14;
      piVar25[1] = uVar26;
      goto LAB_00532047;
    }
  }
  FUN_00554130();
  iVar30 = 0;
  puVar29 = *(undefined4 **)(iVar1 + 0x20);
  if (0 < *(int *)(iVar1 + 0x18)) {
    do {
      if (((*(byte *)((int)puVar29 + 0x12) & 6) == 0) &&
         ((puVar29[8] & param_4) == 0 && (puVar29[9] & param_5) == 0)) {
        FUN_00555f40(piVar2,*puVar29);
        *(byte *)((int)puVar29 + 0x12) = *(byte *)((int)puVar29 + 0x12) | 4;
      }
      iVar30 = iVar30 + 1;
      puVar29 = puVar29 + 10;
    } while (iVar30 < *(int *)(iVar1 + 0x18));
  }
LAB_005320c6:
  if ((local_20 != 0) && (*(byte *)((int)piVar2 + 0x13) < 8)) {
    iVar30 = 0;
    piVar25 = piVar2 + 0x19;
    while (piVar25[4] != local_20) {
      iVar30 = iVar30 + 1;
      piVar25 = piVar25 + 6;
      if (9 < iVar30) {
        piVar2[*(byte *)((int)piVar2 + 0x13) + 7] = local_20;
        *(char *)((int)piVar2 + 0x13) = *(char *)((int)piVar2 + 0x13) + '\x01';
        return CONCAT44(param_5,param_4);
      }
    }
    *(undefined1 *)(piVar25 + 2) = 1;
  }
  return CONCAT44(param_5,param_4);
}


/* FUN_00532120 @ 00532120  kind=lib  attributed-by=lib-island  size=303 */

void FUN_00532120(int *param_1,char *param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined8 local_c;
  
  if (param_2 != (char *)0x0) {
    cVar1 = *param_2;
    pcVar3 = param_2;
    while (cVar1 != '\0') {
      pcVar3 = pcVar3 + 1;
      cVar1 = *pcVar3;
    }
    FUN_0054a330(param_2,&local_c,(int)pcVar3 - (int)param_2 & 0x3fffffff,1);
    if (param_3 != 0) {
      local_c = local_c ^ 0x8000000000000000;
    }
    puVar4 = (undefined4 *)FUN_00552230(*param_1,8);
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = (undefined4)local_c;
      puVar4[1] = local_c._4_4_;
    }
    iVar6 = param_1[7];
    if ((iVar6 < param_1[8]) || (iVar5 = FUN_0053b4b0(param_1), iVar5 == 0)) {
      iVar5 = param_1[1];
      param_1[7] = param_1[7] + 1;
      *(undefined2 *)(iVar5 + iVar6 * 0x14) = 0x82;
      *(undefined1 *)(iVar5 + 3 + iVar6 * 0x14) = 0;
      *(undefined4 *)(iVar5 + 4 + iVar6 * 0x14) = 0;
      *(undefined4 *)(iVar5 + 8 + iVar6 * 0x14) = param_4;
      *(undefined4 *)(iVar5 + 0xc + iVar6 * 0x14) = 0;
      *(undefined4 *)(iVar5 + 0x10 + iVar6 * 0x14) = 0;
    }
    else {
      iVar6 = 1;
    }
    iVar5 = param_1[1];
    iVar2 = *param_1;
    if ((iVar5 != 0) && (*(char *)(iVar2 + 0x38) == '\0')) {
      if (iVar6 < 0) {
        iVar6 = param_1[7] + -1;
      }
      FUN_00539320(iVar2,(int)*(char *)(iVar5 + 1 + iVar6 * 0x14),
                   *(undefined4 *)(iVar5 + 0x10 + iVar6 * 0x14));
      *(undefined4 *)(iVar5 + 0x10 + iVar6 * 0x14) = 0;
      if (puVar4 != (undefined4 *)0x0) {
        *(undefined4 **)(iVar5 + 0x10 + iVar6 * 0x14) = puVar4;
        *(undefined1 *)(iVar5 + 1 + iVar6 * 0x14) = 0xf4;
        return;
      }
      *(undefined4 *)(iVar5 + 0x10 + iVar6 * 0x14) = 0;
      *(undefined1 *)(iVar5 + 1 + iVar6 * 0x14) = 0;
      return;
    }
    FUN_00539320(iVar2,0xfffffff4,puVar4);
  }
  return;
}


/* FUN_00532250 @ 00532250  kind=lib  attributed-by=lib-island  size=306 */

void FUN_00532250(undefined4 *param_1)

{
  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_c;
  
  piVar7 = (int *)param_1[2];
  if (piVar7 == (int *)0x0) {
    piVar7 = (int *)FUN_0056c7b0(*param_1);
    param_1[2] = piVar7;
    if (piVar7 != (int *)0x0) {
      FUN_0056bdc0(piVar7,0x94);
    }
  }
  iVar10 = 0;
  if (0 < (int)param_1[0x69]) {
    local_c = 0;
    do {
      iVar11 = piVar7[7];
      puVar8 = (undefined4 *)(param_1[0x6a] + local_c);
      uVar3 = *puVar8;
      iVar4 = puVar8[3];
      bVar2 = *(byte *)(puVar8 + 2);
      uVar5 = puVar8[1];
      if (iVar11 < piVar7[8]) {
LAB_005322dc:
        iVar9 = piVar7[1];
        piVar7[7] = piVar7[7] + 1;
        *(undefined4 *)(iVar9 + 4 + iVar11 * 0x14) = uVar3;
        *(undefined4 *)(iVar9 + 8 + iVar11 * 0x14) = uVar5;
        *(undefined2 *)(iVar9 + iVar11 * 0x14) = 0x83;
        *(undefined1 *)(iVar9 + 3 + iVar11 * 0x14) = 0;
        *(uint *)(iVar9 + 0xc + iVar11 * 0x14) = (uint)bVar2;
        *(undefined4 *)(iVar9 + 0x10 + iVar11 * 0x14) = 0;
      }
      else {
        iVar9 = FUN_0053b4b0(piVar7);
        if (iVar9 == 0) goto LAB_005322dc;
        iVar11 = 1;
      }
      iVar9 = piVar7[1];
      iVar6 = *piVar7;
      if ((iVar9 == 0) || (*(char *)(iVar6 + 0x38) != '\0')) {
        FUN_00539320(iVar6,0xfffffffe,iVar4);
      }
      else {
        if (iVar11 < 0) {
          iVar11 = piVar7[7] + -1;
        }
        iVar1 = iVar9 + iVar11 * 0x14;
        FUN_00539320(iVar6,(int)*(char *)(iVar1 + 1),*(undefined4 *)(iVar9 + 0x10 + iVar11 * 0x14));
        *(undefined4 *)(iVar1 + 0x10) = 0;
        if (iVar4 == 0) {
          *(undefined4 *)(iVar1 + 0x10) = 0;
          *(undefined1 *)(iVar1 + 1) = 0;
        }
        else {
          *(int *)(iVar1 + 0x10) = iVar4;
          *(undefined1 *)(iVar1 + 1) = 0xfe;
        }
      }
      iVar10 = iVar10 + 1;
      local_c = local_c + 0x10;
    } while (iVar10 < (int)param_1[0x69]);
  }
  return;
}


/* FUN_00532390 @ 00532390  kind=lib  attributed-by=lib-island  size=477 */

void FUN_00532390(undefined4 *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined2 local_18 [2];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar2 = param_1[2];
  uVar3 = *param_1;
  for (; param_2 != (char *)0x0; param_2 = *(char **)(param_2 + 0x20)) {
    if (param_3 == 99) {
      cVar4 = param_2[1];
    }
    else {
      cVar4 = (char)param_3;
    }
    *(char *)((int)param_1 + 0x1c9) = cVar4;
    param_1[0x57] = 0;
    cVar1 = *param_2;
    if (cVar1 == 'i') {
      uVar6 = FUN_0055b080(uVar3,*(undefined4 *)(param_2 + 0x1c),cVar4);
      uVar6 = FUN_00566d40(uVar3,*(undefined4 *)(param_2 + 8),0,uVar6);
      uVar6 = FUN_005567e0(uVar3,*(undefined4 *)(param_2 + 0x18),0,uVar6);
      uVar6 = FUN_0057b080(param_1,param_2,uVar6);
      FUN_0055bc20(param_1,uVar6);
    }
    else if (cVar1 == 'j') {
      uVar6 = FUN_00536250(uVar3,*(undefined4 *)(param_2 + 0x14),0,0);
      uVar6 = FUN_0057b080(param_1,param_2,uVar6);
      FUN_00552560(param_1,uVar6);
    }
    else if (cVar1 == 'k') {
      uVar6 = FUN_00536250(uVar3,*(undefined4 *)(param_2 + 0x14),0,0);
      uVar6 = FUN_005567e0(uVar3,*(undefined4 *)(param_2 + 0x18),0,uVar6,
                           *(undefined1 *)((int)param_1 + 0x1c9));
      uVar6 = FUN_0057b080(param_1,param_2,uVar6);
      FUN_00568b40(param_1,uVar6);
    }
    else {
      iVar5 = FUN_00566d40(uVar3,*(undefined4 *)(param_2 + 8));
      local_18[0] = 4;
      local_14 = 0;
      local_10 = 0;
      local_c = 0;
      FUN_005654f0(param_1,iVar5,local_18);
      if (iVar5 != 0) {
        FUN_005303a0(uVar3,iVar5);
        FUN_005521a0(uVar3,iVar5);
      }
    }
    if ((*param_2 != 't') &&
       ((iVar5 = *(int *)(iVar2 + 0x1c), iVar5 < *(int *)(iVar2 + 0x20) ||
        (iVar7 = FUN_0053b4b0(iVar2), iVar7 == 0)))) {
      *(int *)(iVar2 + 0x1c) = *(int *)(iVar2 + 0x1c) + 1;
      iVar7 = *(int *)(iVar2 + 4);
      *(undefined2 *)(iVar7 + iVar5 * 0x14) = 0x3c;
      *(undefined1 *)(iVar7 + 3 + iVar5 * 0x14) = 0;
      *(undefined4 *)(iVar7 + 4 + iVar5 * 0x14) = 0;
      *(undefined4 *)(iVar7 + 8 + iVar5 * 0x14) = 0;
      *(undefined4 *)(iVar7 + 0xc + iVar5 * 0x14) = 0;
      *(undefined4 *)(iVar7 + 0x10 + iVar5 * 0x14) = 0;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00532570 @ 00532570  kind=lib  attributed-by=lib-island  size=116 */

undefined4 FUN_00532570(byte *param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  int iVar6;
  
  iVar6 = 0;
  if (0 < *(int *)(param_2 + 0x24)) {
    puVar4 = *(undefined4 **)(param_2 + 0x20);
    do {
      pbVar3 = (byte *)*puVar4;
      bVar2 = *pbVar3;
      pbVar5 = param_1;
      while ((bVar2 != 0 && ((&DAT_007120d8)[bVar2] == (&DAT_007120d8)[*pbVar5]))) {
        pbVar1 = pbVar3 + 1;
        pbVar3 = pbVar3 + 1;
        pbVar5 = pbVar5 + 1;
        bVar2 = *pbVar1;
      }
      if ((&DAT_007120d8)[*pbVar3] == (&DAT_007120d8)[*pbVar5]) {
        return 1;
      }
      iVar6 = iVar6 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar6 < *(int *)(param_2 + 0x24));
  }
  return 0;
}


/* FUN_005325f0 @ 005325f0  kind=lib  attributed-by=lib-island  size=124 */

int FUN_005325f0(int param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  int iVar6;
  
  iVar6 = 0;
  if (0 < *(short *)(param_1 + 0x26)) {
    puVar4 = *(undefined4 **)(param_1 + 4);
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
      puVar4 = puVar4 + 6;
    } while (iVar6 < *(short *)(param_1 + 0x26));
  }
  return -1;
}


/* FUN_00532670 @ 00532670  kind=lib  attributed-by=lib-island  size=96 */

void FUN_00532670(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 != (int *)0x0) {
    uVar3 = param_1[0x16];
    iVar1 = *param_1;
    if (iVar1 == 0) {
      uVar2 = 0xff;
    }
    else {
      if ((*(char *)(iVar1 + 0x38) != '\0') || (uVar3 == 0xc0a)) {
        FUN_00553890(iVar1,7,0);
        *(undefined1 *)(iVar1 + 0x38) = 0;
        uVar3 = 7;
      }
      uVar2 = *(uint *)(iVar1 + 0x30);
    }
    param_1[0x16] = uVar2 & uVar3;
    if (*(int *)(*param_1 + 0xc) != 0) {
                    /* WARNING: Could not recover jumptable at 0x005326c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_00766638)();
      return;
    }
  }
  return;
}


/* FUN_005326d0 @ 005326d0  kind=lib  attributed-by=lib-island  size=111 */

undefined * FUN_005326d0(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    if (((param_1[5] != 0) && (param_2 < (int)(uint)*(ushort *)(param_1 + 0xb))) && (-1 < param_2))
    {
      if (*(int *)(*param_1 + 0xc) != 0) {
        (*DAT_00766630)(*(int *)(*param_1 + 0xc));
      }
      return (undefined *)(param_1[5] + param_2 * 0x28);
    }
    if (*param_1 != 0) {
      iVar1 = *(int *)(*param_1 + 0xc);
      if (iVar1 != 0) {
        (*DAT_00766630)(iVar1);
      }
      FUN_00553890(*param_1,0x19,0);
    }
  }
  return &DAT_00712628;
}


/* FUN_00532740 @ 00532740  kind=lib  attributed-by=lib-island  size=410 */

char * FUN_00532740(int *param_1,char *param_2,undefined4 *param_3,undefined4 *param_4,
                   undefined4 *param_5)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  short *psVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int local_34;
  int local_30;
  int *local_24;
  undefined4 *local_14;
  undefined4 local_10;
  undefined4 local_c;
  char *local_8;
  
  pcVar5 = (char *)0x0;
  local_c = 0;
  local_10 = 0;
  local_8 = (char *)0x0;
  if ((param_2 == (char *)0x0) || (param_1[1] == 0)) {
    return (char *)0x0;
  }
  cVar1 = *param_2;
  if (cVar1 == 't') {
    uVar8 = **(undefined4 **)(**(int **)(param_2 + 0x10) + 8);
    local_30 = (*(int **)(param_2 + 0x10))[10];
    local_34 = *param_1;
LAB_00532830:
    local_24 = param_1;
    pcVar5 = (char *)FUN_00532740(&local_34,uVar8,&local_c,&local_10,&local_8);
    uVar8 = local_c;
    goto LAB_005327d8;
  }
  if ((cVar1 != -0x68) && (uVar8 = 0, cVar1 != -0x66)) goto LAB_005327d8;
  puVar7 = (undefined4 *)0x0;
  local_14 = (undefined4 *)0x0;
  do {
    if (puVar7 != (undefined4 *)0x0) goto LAB_005327fd;
    psVar4 = (short *)param_1[1];
    iVar2 = 0;
    iVar6 = (int)*psVar4;
    if (0 < iVar6) {
      piVar3 = (int *)(psVar4 + 0x1a);
      do {
        if (*piVar3 == *(int *)(param_2 + 0x18)) break;
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 0x12;
      } while (iVar2 < iVar6);
      psVar4 = (short *)param_1[1];
    }
    if (iVar2 < iVar6) {
      local_14 = *(undefined4 **)(psVar4 + iVar2 * 0x24 + 0xe);
      puVar7 = *(undefined4 **)(psVar4 + iVar2 * 0x24 + 0xc);
    }
    else {
      param_1 = (int *)param_1[4];
    }
  } while (param_1 != (int *)0x0);
  if (puVar7 == (undefined4 *)0x0) {
LAB_005327d4:
    pcVar5 = (char *)0x0;
  }
  else {
LAB_005327fd:
    if (local_14 != (undefined4 *)0x0) {
      iVar2 = (int)*(short *)(param_2 + 0x1c);
      if ((-1 < iVar2) && (iVar2 < *(int *)*local_14)) {
        uVar8 = *(undefined4 *)(((int *)*local_14)[2] + iVar2 * 0x14);
        local_30 = local_14[10];
        local_34 = *param_1;
        goto LAB_00532830;
      }
      goto LAB_005327d4;
    }
    if (puVar7[0x10] == 0) goto LAB_005327d4;
    iVar2 = (int)*(short *)(param_2 + 0x1c);
    if ((iVar2 < 0) && (iVar2 = (int)*(short *)(puVar7 + 9), iVar2 < 0)) {
      pcVar5 = "INTEGER";
      local_8 = "rowid";
    }
    else {
      pcVar5 = *(char **)(puVar7[1] + 0xc + iVar2 * 0x18);
      local_8 = *(char **)(puVar7[1] + iVar2 * 0x18);
    }
    local_10 = *puVar7;
    if ((int *)*param_1 != (int *)0x0) {
      iVar2 = *(int *)*param_1;
      iVar6 = FUN_00565260(iVar2,puVar7[0x10]);
      uVar8 = *(undefined4 *)(*(int *)(iVar2 + 0x10) + iVar6 * 0x10);
      goto LAB_005327d8;
    }
  }
  uVar8 = 0;
LAB_005327d8:
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = uVar8;
    *param_4 = local_10;
    *param_5 = local_8;
  }
  return pcVar5;
}


/* FUN_005328e0 @ 005328e0  kind=lib  attributed-by=lib-island  size=155 */

char FUN_005328e0(int param_1)

{
  char cVar1;
  char cVar2;
  
  cVar1 = FUN_00553b20(*(undefined4 *)(param_1 + 8));
  if (*(int *)(param_1 + 0xc) == 0) {
    if ((*(ushort *)(param_1 + 2) & 0x800) == 0) {
      if (cVar1 == '\0') {
        cVar1 = 'b';
      }
      return cVar1;
    }
    cVar2 = FUN_00553b20(**(undefined4 **)(**(int **)(param_1 + 0x10) + 8));
    if (cVar2 != '\0') {
      if (cVar1 != '\0') {
        if ((cVar2 < 'c') && (cVar1 < 'c')) {
          return 'b';
        }
        return 'c';
      }
      goto LAB_00532960;
    }
  }
  else {
    cVar2 = FUN_00553b20(*(int *)(param_1 + 0xc));
    if (cVar2 != '\0') {
      if (cVar1 != '\0') {
        if ('b' < cVar2) {
          return 'c';
        }
        if (cVar1 < 'c') {
          return 'b';
        }
        return 'c';
      }
      goto LAB_00532960;
    }
  }
  if (cVar1 == '\0') {
    return 'b';
  }
LAB_00532960:
  return cVar1 + cVar2;
}


/* FUN_00532b80 @ 00532b80  kind=lib  attributed-by=lib-island  size=387 */

void FUN_00532b80(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  int local_8;
  
  if ((*(int *)(param_2 + 8) == 0) && (FUN_00554130(param_1), *(int *)(param_2 + 0x48) != 0)) {
    param_1[0x13] = param_1[0x13] + 1;
    uVar1 = param_1[0x13];
    *(undefined4 *)(param_2 + 8) = uVar1;
    iVar3 = param_1[2];
    if (iVar3 == 0) {
      iVar3 = FUN_0056c7b0(*param_1);
      param_1[2] = iVar3;
      if (iVar3 == 0) {
        return;
      }
      FUN_0056bdc0(iVar3,0x94);
    }
    uVar5 = FUN_00556530(*(undefined4 *)(param_2 + 0x48),&local_8);
    if ((int)uVar5 == 0) {
      FUN_005545d0(param_1,*(undefined4 *)(param_2 + 0x48),(int)((ulonglong)uVar5 >> 0x20));
      FUN_0056be30(iVar3,0x15,uVar1);
      FUN_0056be90(iVar3,0x7a,uVar1,param_3);
    }
    else {
      FUN_0056be90(iVar3,7,local_8);
      if (local_8 == 0) {
        FUN_0056be90(iVar3,1,0,param_3);
      }
      else if ((double)local_8 < *(double *)(param_2 + 0x20)) {
        *(double *)(param_2 + 0x20) = (double)local_8;
      }
    }
    if (*(int *)(param_2 + 0x4c) != 0) {
      param_1[0x13] = param_1[0x13] + 1;
      iVar2 = param_1[0x13];
      *(int *)(param_2 + 0xc) = iVar2;
      param_1[0x13] = param_1[0x13] + 1;
      FUN_005545d0(param_1,*(undefined4 *)(param_2 + 0x4c),iVar2);
      FUN_0056be30(iVar3,0x15,iVar2);
      uVar4 = FUN_0056be30(iVar3,0x78,iVar2);
      FUN_0056be90(iVar3,7,0,iVar2);
      if ((-1 < (int)uVar4) && (uVar4 < *(uint *)(iVar3 + 0x1c))) {
        *(uint *)(*(int *)(iVar3 + 4) + 8 + uVar4 * 0x14) = *(uint *)(iVar3 + 0x1c);
      }
      FUN_0056bef0(iVar3,0x56,uVar1,iVar2,iVar2 + 1);
      uVar4 = FUN_0056be30(iVar3,0x78,uVar1);
      FUN_0056be90(iVar3,7,0xffffffff,iVar2 + 1);
      if ((-1 < (int)uVar4) && (uVar4 < *(uint *)(iVar3 + 0x1c))) {
        *(uint *)(*(int *)(iVar3 + 4) + 8 + uVar4 * 0x14) = *(uint *)(iVar3 + 0x1c);
      }
    }
  }
  return;
}


/* FUN_00532e30 @ 00532e30  kind=lib  attributed-by=lib-island  size=68 */

undefined4 FUN_00532e30(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 4) != 0) {
    return 1;
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    piVar1 = (int *)(*(int *)(param_1 + 0x10) + 4);
    do {
      if ((*piVar1 != 0) && (*(int *)(*piVar1 + 0x10) != 0)) {
        return 1;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 4;
    } while (iVar2 < *(int *)(param_1 + 0x14));
  }
  return 0;
}


/* FUN_00532e80 @ 00532e80  kind=lib  attributed-by=lib-island  size=2074 */

void FUN_00532e80(undefined4 *param_1,int param_2,uint param_3,uint param_4,uint param_5,
                 uint *param_6)

{
  size_t _Size;
  int *piVar1;
  undefined2 *puVar2;
  char cVar3;
  short sVar4;
  int *piVar5;
  int iVar6;
  char cVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int iVar14;
  char *pcVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int *piVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  bool bVar23;
  int iVar24;
  uint uStack_38;
  uint local_2c;
  uint local_28;
  uint local_18;
  int local_10;
  uint local_c;
  
  piVar5 = (int *)param_1[2];
  uVar9 = FUN_00550380(param_1);
  iVar22 = *(int *)(param_3 + 0x10);
  piVar19 = *(int **)(param_2 + 0x20);
  piVar1 = piVar19 + *(int *)(param_2 + 0x18) * 10;
  uStack_38 = 0;
  local_10 = 0;
  if (piVar19 < piVar1) {
    iVar11 = *(int *)(param_3 + 0x2c);
    local_18 = 0;
    local_c = 0;
    do {
      if (((piVar19[2] == iVar11) && ((short)piVar19[4] == 2)) &&
         (uStack_38 = local_c, (piVar19[6] & param_4) == 0 && (piVar19[7] & param_5) == 0)) {
        uVar10 = piVar19[3];
        cVar3 = *(char *)(*(int *)(iVar22 + 4) + 0x15 + uVar10 * 0x18);
        cVar7 = FUN_005328e0(*piVar19);
        if (cVar7 == 'a') {
          bVar23 = cVar3 == 'a';
LAB_00532f47:
          if (!bVar23) goto LAB_00532f95;
        }
        else if (cVar7 != 'b') {
          bVar23 = 'b' < cVar3;
          goto LAB_00532f47;
        }
        uVar16 = 0;
        if ((int)uVar10 < 0x40) {
          uVar16 = 1 << (uVar10 & 0x1f);
          uVar20 = 0;
          if (0x1f < uVar10) {
            uVar20 = uVar16;
          }
          uVar16 = uVar16 ^ uVar20;
          if (0x3f < uVar10) {
            uVar20 = uVar16;
          }
        }
        else {
          uVar20 = 0x80000000;
        }
        if ((uVar16 & local_18) == 0 && (uVar20 & local_c) == 0) {
          local_10 = local_10 + 1;
          local_18 = local_18 | uVar16;
          uStack_38 = local_c | uVar20;
          local_c = uStack_38;
        }
      }
LAB_00532f95:
      piVar19 = piVar19 + 10;
    } while (piVar19 < piVar1);
  }
  else {
    local_18 = 0;
  }
  *(short *)(param_6 + 1) = (short)local_10;
  uVar10 = ~local_18 & *(uint *)(param_3 + 0x38);
  uVar16 = (~uStack_38 | 0x80000000) & *(uint *)(param_3 + 0x3c);
  sVar4 = *(short *)(iVar22 + 0x26);
  iVar11 = 0x3f;
  if (sVar4 < 0x3f) {
    iVar11 = (int)sVar4;
  }
  uVar20 = 0;
  if (0 < iVar11) {
    do {
      uVar17 = 1 << (uVar20 & 0x1f);
      uVar18 = 0;
      if (0x1f < uVar20) {
        uVar18 = uVar17;
      }
      uVar17 = uVar17 ^ uVar18;
      if (0x3f < uVar20) {
        uVar18 = uVar17;
      }
      if ((uVar17 & uVar10) != 0 || (uVar18 & uVar16) != 0) {
        local_10 = local_10 + 1;
      }
      uVar20 = uVar20 + 1;
    } while ((int)uVar20 < iVar11);
  }
  if ((*(uint *)(param_3 + 0x3c) & 0x80000000) != 0) {
    local_10 = local_10 + -0x3f + (int)sVar4;
  }
  *param_6 = *param_6 | 0x410002;
  _Size = local_10 * 9 + 0x30;
  puVar12 = (undefined4 *)FUN_00552230(*param_1,_Size);
  if (puVar12 == (undefined4 *)0x0) {
    return;
  }
  memset(puVar12,0,_Size);
  param_6[4] = (uint)puVar12;
  puVar13 = puVar12 + 0xc;
  puVar12[8] = puVar13;
  puVar12[1] = puVar13 + local_10;
  puVar12[7] = puVar13 + local_10 + local_10;
  *puVar12 = "auto-index";
  puVar12[9] = local_10;
  puVar12[3] = iVar22;
  piVar19 = *(int **)(param_2 + 0x20);
  local_28 = 0;
  uVar20 = local_28;
  if (piVar19 < piVar1) {
    local_2c = 0;
    local_28 = 0;
    uVar20 = 0;
    do {
      if (((piVar19[2] == *(int *)(param_3 + 0x2c)) && ((short)piVar19[4] == 2)) &&
         ((piVar19[6] & param_4) == 0 && (piVar19[7] & param_5) == 0)) {
        uVar17 = piVar19[3];
        cVar3 = *(char *)(*(int *)(*(int *)(param_3 + 0x10) + 4) + 0x15 + uVar17 * 0x18);
        iVar14 = *piVar19;
        cVar7 = FUN_005328e0(iVar14);
        if (cVar7 == 'a') {
          bVar23 = cVar3 == 'a';
LAB_0053315e:
          if (!bVar23) goto LAB_00533204;
        }
        else if (cVar7 != 'b') {
          bVar23 = 'b' < cVar3;
          goto LAB_0053315e;
        }
        uVar18 = 0;
        if ((int)uVar17 < 0x40) {
          uVar18 = 1 << (uVar17 & 0x1f);
          uVar21 = 0;
          if (0x1f < uVar17) {
            uVar21 = uVar18;
          }
          uVar18 = uVar18 ^ uVar21;
          if (0x3f < uVar17) {
            uVar21 = uVar18;
          }
        }
        else {
          uVar21 = 0x80000000;
        }
        if ((uVar18 & local_28) == 0 && (uVar21 & local_2c) == 0) {
          local_2c = local_2c | uVar21;
          local_28 = local_28 | uVar18;
          *(uint *)(puVar12[1] + uVar20 * 4) = uVar17;
          iVar6 = *(int *)(iVar14 + 0xc);
          iVar14 = *(int *)(iVar14 + 8);
          iVar24 = iVar14;
          if ((((*(ushort *)(iVar14 + 2) & 0x100) == 0) &&
              ((iVar24 = iVar6, iVar6 == 0 || ((*(ushort *)(iVar6 + 2) & 0x100) == 0)))) &&
             (puVar13 = (undefined4 *)FUN_00555b70(param_1,iVar14), puVar13 != (undefined4 *)0x0)) {
LAB_005331f7:
            pcVar15 = (char *)*puVar13;
          }
          else {
            puVar13 = (undefined4 *)FUN_00555b70(param_1,iVar24);
            pcVar15 = "BINARY";
            if (puVar13 != (undefined4 *)0x0) goto LAB_005331f7;
          }
          uVar20 = uVar20 + 1;
          *(char **)(puVar12[8] + -4 + uVar20 * 4) = pcVar15;
        }
      }
LAB_00533204:
      piVar19 = piVar19 + 10;
    } while (piVar19 < piVar1);
  }
  local_28 = uVar20;
  uVar20 = 0;
  if (0 < iVar11) {
    do {
      uVar17 = 1 << (uVar20 & 0x1f);
      uVar18 = 0;
      if (0x1f < uVar20) {
        uVar18 = uVar17;
      }
      uVar17 = uVar17 ^ uVar18;
      if (0x3f < uVar20) {
        uVar18 = uVar17;
      }
      if ((uVar17 & uVar10) != 0 || (uVar18 & uVar16) != 0) {
        local_28 = local_28 + 1;
        *(uint *)(puVar12[1] + -4 + local_28 * 4) = uVar20;
        *(char **)(puVar12[8] + -4 + local_28 * 4) = "BINARY";
      }
      uVar20 = uVar20 + 1;
    } while ((int)uVar20 < iVar11);
  }
  if (((*(uint *)(param_3 + 0x3c) & 0x80000000) != 0) &&
     (iVar11 = 0x3f, 0x3f < *(short *)(iVar22 + 0x26))) {
    iVar14 = local_28 << 2;
    do {
      *(int *)(iVar14 + puVar12[1]) = iVar11;
      iVar11 = iVar11 + 1;
      *(char **)(iVar14 + puVar12[8]) = "BINARY";
      iVar14 = iVar14 + 4;
    } while (iVar11 < *(short *)(iVar22 + 0x26));
  }
  iVar14 = FUN_0055b2a0(param_1,puVar12);
  iVar22 = piVar5[7];
  iVar11 = piVar5[8];
  uVar10 = param_6[8];
  if (iVar22 < iVar11) {
LAB_0053333a:
    piVar5[7] = piVar5[7] + 1;
    puVar2 = (undefined2 *)(piVar5[1] + iVar22 * 0x14);
    *(uint *)(puVar2 + 2) = uVar10;
    *puVar2 = 0x29;
    *(undefined1 *)((int)puVar2 + 3) = 0;
    *(int *)(puVar2 + 4) = local_10 + 1;
    *(undefined4 *)(puVar2 + 6) = 0;
    *(undefined4 *)(puVar2 + 8) = 0;
  }
  else {
    if (iVar11 == 0) {
      iVar11 = 0x33;
    }
    else {
      iVar11 = iVar11 * 2;
    }
    uVar16 = FUN_00552390(*piVar5,piVar5[1],iVar11 * 0x14);
    if (uVar16 != 0) {
      iVar11 = *piVar5;
      if (((iVar11 == 0) || (uVar16 < *(uint *)(iVar11 + 0x104))) ||
         (*(uint *)(iVar11 + 0x108) <= uVar16)) {
        uVar20 = (*DAT_00766608._4_4_)(uVar16);
      }
      else {
        uVar20 = (uint)*(ushort *)(iVar11 + 0xe8);
      }
      piVar5[8] = uVar20 / 0x14;
      piVar5[1] = uVar16;
      goto LAB_0053333a;
    }
    iVar22 = 1;
  }
  iVar11 = piVar5[1];
  iVar6 = *piVar5;
  if ((iVar11 == 0) || (*(char *)(iVar6 + 0x38) != '\0')) {
    FUN_00539320(iVar6,0xfffffff0,iVar14);
  }
  else {
    if (iVar22 < 0) {
      iVar22 = piVar5[7] + -1;
    }
    iVar24 = iVar11 + iVar22 * 0x14;
    FUN_00539320(iVar6,(int)*(char *)(iVar24 + 1),*(undefined4 *)(iVar11 + 0x10 + iVar22 * 0x14));
    *(undefined4 *)(iVar24 + 0x10) = 0;
    if (iVar14 == 0) {
      *(undefined4 *)(iVar24 + 0x10) = 0;
      *(undefined1 *)(iVar24 + 1) = 0;
    }
    else {
      *(int *)(iVar24 + 0x10) = iVar14;
      *(undefined1 *)(iVar24 + 1) = 0xfa;
    }
  }
  param_3 = piVar5[7];
  uVar10 = param_6[7];
  iVar22 = piVar5[8];
  if ((int)param_3 < iVar22) {
LAB_0053344e:
    iVar22 = piVar5[1];
    piVar5[7] = piVar5[7] + 1;
    *(undefined2 *)(iVar22 + param_3 * 0x14) = 0x48;
    *(undefined1 *)(iVar22 + 3 + param_3 * 0x14) = 0;
    *(uint *)(iVar22 + 4 + param_3 * 0x14) = uVar10;
    *(undefined4 *)(iVar22 + 8 + param_3 * 0x14) = 0;
    *(undefined4 *)(iVar22 + 0xc + param_3 * 0x14) = 0;
    *(undefined4 *)(iVar22 + 0x10 + param_3 * 0x14) = 0;
  }
  else {
    if (iVar22 == 0) {
      iVar22 = 0x33;
    }
    else {
      iVar22 = iVar22 * 2;
    }
    uVar16 = FUN_00552390(*piVar5,piVar5[1],iVar22 * 0x14);
    if (uVar16 != 0) {
      iVar22 = *piVar5;
      if (((iVar22 == 0) || (uVar16 < *(uint *)(iVar22 + 0x104))) ||
         (*(uint *)(iVar22 + 0x108) <= uVar16)) {
        uVar20 = (*DAT_00766608._4_4_)(uVar16);
      }
      else {
        uVar20 = (uint)*(ushort *)(iVar22 + 0xe8);
      }
      piVar5[8] = uVar20 / 0x14;
      piVar5[1] = uVar16;
      goto LAB_0053344e;
    }
    param_3 = 1;
  }
  if (*(char *)((int)param_1 + 0x13) == '\0') {
    param_1[0x13] = param_1[0x13] + 1;
    iVar22 = param_1[0x13];
  }
  else {
    bVar8 = *(char *)((int)param_1 + 0x13) - 1;
    *(byte *)((int)param_1 + 0x13) = bVar8;
    iVar22 = param_1[bVar8 + 7];
  }
  FUN_00559920(param_1,puVar12,param_6[7],iVar22,1);
  iVar11 = piVar5[7];
  uVar10 = param_6[8];
  iVar14 = piVar5[8];
  if (iVar11 < iVar14) {
LAB_00533536:
    iVar14 = piVar5[1];
    piVar5[7] = piVar5[7] + 1;
    *(undefined2 *)(iVar14 + iVar11 * 0x14) = 0x61;
    *(undefined1 *)(iVar14 + 3 + iVar11 * 0x14) = 0;
    *(uint *)(iVar14 + 4 + iVar11 * 0x14) = uVar10;
    *(int *)(iVar14 + 8 + iVar11 * 0x14) = iVar22;
    *(undefined4 *)(iVar14 + 0xc + iVar11 * 0x14) = 0;
    *(undefined4 *)(iVar14 + 0x10 + iVar11 * 0x14) = 0;
  }
  else {
    if (iVar14 == 0) {
      iVar14 = 0x33;
    }
    else {
      iVar14 = iVar14 * 2;
    }
    uVar16 = FUN_00552390(*piVar5,piVar5[1],iVar14 * 0x14);
    if (uVar16 != 0) {
      iVar14 = *piVar5;
      if (((iVar14 == 0) || (uVar16 < *(uint *)(iVar14 + 0x104))) ||
         (*(uint *)(iVar14 + 0x108) <= uVar16)) {
        uVar20 = (*DAT_00766608._4_4_)(uVar16);
      }
      else {
        uVar20 = (uint)*(ushort *)(iVar14 + 0xe8);
      }
      piVar5[8] = uVar20 / 0x14;
      piVar5[1] = uVar16;
      goto LAB_00533536;
    }
  }
  if (piVar5[1] != 0) {
    *(undefined1 *)(piVar5[1] + -0x11 + piVar5[7] * 0x14) = 0x10;
  }
  iVar11 = piVar5[7];
  uVar10 = param_6[7];
  iVar14 = piVar5[8];
  if (iVar14 <= iVar11) {
    if (iVar14 == 0) {
      iVar14 = 0x33;
    }
    else {
      iVar14 = iVar14 * 2;
    }
    uVar16 = FUN_00552390(*piVar5,piVar5[1],iVar14 * 0x14);
    if (uVar16 == 0) goto LAB_00533629;
    iVar14 = *piVar5;
    if (((iVar14 == 0) || (uVar16 < *(uint *)(iVar14 + 0x104))) ||
       (*(uint *)(iVar14 + 0x108) <= uVar16)) {
      uVar20 = (*DAT_00766608._4_4_)(uVar16);
    }
    else {
      uVar20 = (uint)*(ushort *)(iVar14 + 0xe8);
    }
    piVar5[8] = uVar20 / 0x14;
    piVar5[1] = uVar16;
  }
  piVar5[7] = piVar5[7] + 1;
  puVar2 = (undefined2 *)(piVar5[1] + iVar11 * 0x14);
  *(uint *)(puVar2 + 2) = uVar10;
  *puVar2 = 0x5f;
  *(undefined1 *)((int)puVar2 + 3) = 0;
  *(uint *)(puVar2 + 4) = param_3 + 1;
  *(undefined4 *)(puVar2 + 6) = 0;
  *(undefined4 *)(puVar2 + 8) = 0;
LAB_00533629:
  if (piVar5[1] != 0) {
    *(undefined1 *)(piVar5[1] + -0x11 + piVar5[7] * 0x14) = 3;
  }
  if ((-1 < (int)param_3) && (param_3 < (uint)piVar5[7])) {
    *(int *)(piVar5[1] + 8 + param_3 * 0x14) = piVar5[7];
  }
  if ((iVar22 != 0) && (*(byte *)((int)param_1 + 0x13) < 8)) {
    iVar11 = 0;
    puVar12 = param_1 + 0x19;
    do {
      if (puVar12[4] == iVar22) {
        *(undefined1 *)(puVar12 + 2) = 1;
        goto LAB_00533682;
      }
      iVar11 = iVar11 + 1;
      puVar12 = puVar12 + 6;
    } while (iVar11 < 10);
    param_1[*(byte *)((int)param_1 + 0x13) + 7] = iVar22;
    *(char *)((int)param_1 + 0x13) = *(char *)((int)param_1 + 0x13) + '\x01';
  }
LAB_00533682:
  if ((-1 < (int)uVar9) && (uVar9 < (uint)piVar5[7])) {
    *(int *)(piVar5[1] + 8 + uVar9 * 0x14) = piVar5[7];
  }
  return;
}


/* FUN_005337c0 @ 005337c0  kind=lib  attributed-by=lib-island  size=188 */

void FUN_005337c0(int param_1,undefined1 *param_2,int *param_3)

{
  void *_Src;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  if (*param_3 == 0) {
    iVar3 = *(int *)(param_1 + 0x34);
    iVar2 = *(int *)(param_1 + 0x38);
    iVar1 = *(int *)(param_2 + 0x38);
    iVar5 = 0;
    if (*(int *)(param_2 + 0x48) == 1) {
      iVar5 = 100;
    }
    _Src = (void *)((uint)*(byte *)(param_1 + 5) + iVar2);
    uVar4 = (uint)CONCAT11(*(undefined1 *)(*(byte *)(param_1 + 5) + 5 + iVar2),
                           *(undefined1 *)((int)_Src + 6));
    memcpy((void *)(iVar1 + uVar4),(void *)(uVar4 + iVar2),*(int *)(iVar3 + 0x24) - uVar4);
    memcpy((void *)(iVar1 + iVar5),_Src,
           (uint)*(ushort *)(param_1 + 0xc) + (uint)*(ushort *)(param_1 + 0x10) * 2);
    *param_2 = 0;
    iVar2 = FUN_0052e9b0(param_2);
    if (iVar2 != 0) {
      *param_3 = iVar2;
      return;
    }
    if (*(char *)(iVar3 + 0x11) != '\0') {
      iVar3 = FUN_005489b0(param_2);
      *param_3 = iVar3;
    }
  }
  return;
}


/* FUN_00533880 @ 00533880  kind=lib  attributed-by=lib-island  size=66 */

int FUN_00533880(void *param_1,void *param_2,size_t param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  
  if (param_4 == 0) {
    memcpy(param_2,param_1,param_3);
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_00560330(param_5);
    if (iVar1 == 0) {
      memcpy(param_1,param_2,param_3);
      return 0;
    }
  }
  return iVar1;
}


/* FUN_005338d0 @ 005338d0  kind=lib  attributed-by=lib-string  size=143 */

void FUN_005338d0(int *param_1,undefined *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  iVar1 = *param_1;
  if (*(char *)(iVar1 + 0x38) == '\0') {
    if ((*(uint *)(iVar1 + 0x18) & 0x8000) == 0) {
      puVar3 = &DAT_00715ec8;
      if (param_2 != (undefined *)0x0) {
        puVar3 = param_2;
      }
      FUN_005670f0(param_1[1],iVar1,"malformed database schema (%s)",puVar3);
      if (param_3 != 0) {
        uVar2 = FUN_0055d8f0(iVar1,*(undefined4 *)param_1[1],"%s - %s",*(undefined4 *)param_1[1],
                             param_3);
        *(undefined4 *)param_1[1] = uVar2;
      }
    }
    if (*(char *)(iVar1 + 0x38) == '\0') {
      FUN_00525a30(0xb,"database corruption at line %d of [%.10s]",0x16d12,
                   "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
      param_1[3] = 0xb;
      return;
    }
  }
  param_1[3] = 7;
  return;
}


/* FUN_00533c50 @ 00533c50  kind=lib  attributed-by=lib-string  size=580 */

char * FUN_00533c50(int param_1,undefined4 *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  undefined4 *puVar8;
  char *pcVar9;
  size_t _Size;
  int iVar10;
  int iVar11;
  undefined *local_20;
  int local_18;
  undefined1 *local_14;
  char *local_10;
  undefined1 *local_c;
  uint local_8;
  
  puVar8 = (undefined4 *)param_2[1];
  iVar10 = (int)*(short *)((int)param_2 + 0x26);
  iVar7 = 0;
  iVar11 = iVar10;
  if (0 < iVar10) {
    do {
      pcVar6 = (char *)*puVar8;
      iVar3 = 0;
      cVar1 = *pcVar6;
      while (cVar1 != '\0') {
        if (cVar1 == '\"') {
          iVar3 = iVar3 + 1;
        }
        pcVar4 = pcVar6 + 1;
        pcVar6 = pcVar6 + 1;
        iVar3 = iVar3 + 1;
        cVar1 = *pcVar4;
      }
      iVar7 = iVar7 + 7 + iVar3;
      puVar8 = puVar8 + 6;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  pcVar6 = (char *)*param_2;
  iVar11 = 0;
  cVar1 = *pcVar6;
  while (cVar1 != '\0') {
    if (cVar1 == '\"') {
      iVar11 = iVar11 + 1;
    }
    pcVar4 = pcVar6 + 1;
    pcVar6 = pcVar6 + 1;
    iVar11 = iVar11 + 1;
    cVar1 = *pcVar4;
  }
  iVar7 = iVar11 + 2 + iVar7;
  if (iVar7 < 0x32) {
    local_c = &DAT_006fc918;
    local_14 = &DAT_00718150;
    local_20 = &DAT_00718154;
  }
  else {
    local_c = &DAT_00718158;
    local_14 = &DAT_0071815c;
    local_20 = &DAT_00718164;
  }
  iVar7 = iVar10 * 6 + 0x23 + iVar7;
  if (iVar7 - 1U < 0x7ffffeff) {
    if (DAT_007665e0 == 0) {
      pcVar6 = (char *)(*DAT_00766600)(iVar7);
    }
    else {
      if (DAT_0076b488 != 0) {
        (*DAT_00766630)(DAT_0076b488);
      }
      FUN_0053dcf0(iVar7,&local_10);
      pcVar6 = local_10;
      if (DAT_0076b488 != 0) {
        (*DAT_00766638)(DAT_0076b488);
        pcVar6 = local_10;
      }
    }
    if (pcVar6 != (char *)0x0) {
      FUN_005240c0(iVar7,pcVar6,"CREATE TABLE ");
      cVar1 = *pcVar6;
      pcVar4 = pcVar6;
      while (cVar1 != '\0') {
        pcVar4 = pcVar4 + 1;
        cVar1 = *pcVar4;
      }
      local_8 = (int)pcVar4 - (int)pcVar6 & 0x3fffffff;
      FUN_0053b7f0(pcVar6,&local_8,*param_2);
      pcVar6[local_8] = '(';
      local_10 = (char *)param_2[1];
      iVar11 = local_8 + 1;
      local_18 = 0;
      if (0 < *(short *)((int)param_2 + 0x26)) {
        do {
          pcVar4 = pcVar6 + iVar11;
          FUN_005240c0(iVar7 - iVar11,pcVar4,local_c);
          pcVar9 = local_10;
          local_8 = 0;
          if (pcVar4 != (char *)0x0) {
            cVar1 = *pcVar4;
            pcVar5 = pcVar4;
            while (cVar1 != '\0') {
              pcVar5 = pcVar5 + 1;
              cVar1 = *pcVar5;
            }
            local_8 = (int)pcVar5 - (int)pcVar4 & 0x3fffffff;
          }
          local_8 = iVar11 + local_8;
          local_c = local_14;
          FUN_0053b7f0(pcVar6,&local_8,*(undefined4 *)local_10);
          uVar2 = local_8;
          pcVar4 = *(char **)(&DAT_007121fc + pcVar9[0x15] * 4);
          _Size = 0;
          if (pcVar4 != (char *)0x0) {
            cVar1 = *pcVar4;
            pcVar9 = pcVar4;
            while (cVar1 != '\0') {
              pcVar9 = pcVar9 + 1;
              cVar1 = *pcVar9;
            }
            _Size = (int)pcVar9 - (int)pcVar4 & 0x3fffffff;
          }
          memcpy(pcVar6 + local_8,pcVar4,_Size);
          local_10 = local_10 + 0x18;
          local_18 = local_18 + 1;
          iVar11 = uVar2 + _Size;
        } while (local_18 < *(short *)((int)param_2 + 0x26));
      }
      FUN_005240c0(iVar7 - iVar11,pcVar6 + iVar11,&DAT_00716900,local_20);
      return pcVar6;
    }
  }
  *(undefined1 *)(param_1 + 0x38) = 1;
  return (char *)0x0;
}


/* FUN_00533ea0 @ 00533ea0  kind=lib  attributed-by=lib-island  size=152 */

undefined4 FUN_00533ea0(int param_1,uint param_2)

{
  int iVar1;
  char cVar2;
  
  iVar1 = *(int *)(param_1 + 0x34);
  cVar2 = (char)((int)param_2 >> 3);
  *(char *)(param_1 + 3) = cVar2;
  *(char *)(param_1 + 6) = ('\x01' - cVar2) * '\x04';
  if ((param_2 & 0xfffffff7) == 5) {
    *(char *)(param_1 + 4) = cVar2;
    *(undefined1 *)(param_1 + 2) = 1;
    *(undefined2 *)(param_1 + 8) = *(undefined2 *)(iVar1 + 0x1c);
    *(undefined2 *)(param_1 + 10) = *(undefined2 *)(iVar1 + 0x1e);
    *(undefined1 *)(param_1 + 7) = *(undefined1 *)(iVar1 + 0x14);
    return 0;
  }
  if ((param_2 & 0xfffffff7) == 2) {
    *(undefined1 *)(param_1 + 2) = 0;
    *(undefined1 *)(param_1 + 4) = 0;
    *(undefined2 *)(param_1 + 8) = *(undefined2 *)(iVar1 + 0x18);
    *(undefined2 *)(param_1 + 10) = *(undefined2 *)(iVar1 + 0x1a);
    *(undefined1 *)(param_1 + 7) = *(undefined1 *)(iVar1 + 0x14);
    return 0;
  }
  FUN_00525a30(0xb,"database corruption at line %d of [%.10s]",0xc20a,
               "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
  return 0xb;
}


/* FUN_00533f40 @ 00533f40  kind=lib  attributed-by=lib-island  size=436 */

undefined4 FUN_00533f40(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined1 *puVar11;
  int local_1c;
  
  uVar1 = *(ushort *)(param_1 + 0xc);
  iVar2 = *(int *)(**(int **)(param_1 + 0x34) + 0xb0);
  iVar3 = *(int *)(param_1 + 0x38);
  uVar7 = (uint)*(ushort *)(param_1 + 0x10);
  iVar9 = (uint)*(byte *)(param_1 + 5) + iVar3;
  iVar4 = (*(int **)(param_1 + 0x34))[9];
  uVar6 = (uint)CONCAT11(*(undefined1 *)(iVar9 + 5),
                         *(undefined1 *)(*(byte *)(param_1 + 5) + 6 + iVar3));
  memcpy((void *)(iVar2 + uVar6),(void *)(uVar6 + iVar3),iVar4 - uVar6);
  uVar6 = (uint)uVar1 + uVar7 * 2;
  local_1c = 0;
  iVar8 = iVar4;
  if (uVar7 != 0) {
    puVar11 = (undefined1 *)(iVar3 + (uint)uVar1);
    do {
      uVar10 = (uint)CONCAT11(*puVar11,puVar11[1]);
      if ((uVar10 < uVar6) || (iVar4 + -4 < (int)uVar10)) {
        FUN_00525a30(0xb,"database corruption at line %d of [%.10s]",0xc107,
                     "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
        return 0xb;
      }
      uVar5 = FUN_0052f130(param_1,iVar2 + uVar10);
      uVar5 = uVar5 & 0xffff;
      iVar8 = iVar8 - uVar5;
      if ((iVar8 < (int)uVar6) || (iVar4 < (int)(uVar5 + uVar10))) {
        FUN_00525a30(0xb,"database corruption at line %d of [%.10s]",0xc113,
                     "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
        return 0xb;
      }
      memcpy((void *)(iVar3 + iVar8),(void *)(iVar2 + uVar10),uVar5);
      local_1c = local_1c + 1;
      *puVar11 = (char)((uint)iVar8 >> 8);
      puVar11[1] = (char)iVar8;
      puVar11 = puVar11 + 2;
    } while (local_1c < (int)uVar7);
  }
  *(char *)(iVar9 + 6) = (char)iVar8;
  *(char *)(iVar9 + 5) = (char)((uint)iVar8 >> 8);
  *(undefined2 *)(iVar9 + 1) = 0;
  *(undefined1 *)(iVar9 + 7) = 0;
  memset((void *)(uVar6 + iVar3),0,iVar8 - uVar6);
  if (iVar8 - uVar6 == (uint)*(ushort *)(param_1 + 0xe)) {
    return 0;
  }
  FUN_00525a30(0xb,"database corruption at line %d of [%.10s]",0xc124,
               "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
  return 0xb;
}


/* FUN_00534100 @ 00534100  kind=lib  attributed-by=lib-string  size=270 */

void FUN_00534100(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  
  iVar3 = param_1[2];
  if (iVar3 == 0) {
    iVar3 = FUN_0056c7b0(*param_1);
    param_1[2] = iVar3;
    if (iVar3 != 0) {
      FUN_0056bdc0(iVar3,0x94);
    }
  }
  if (*(char *)((int)param_1 + 0x13) == '\0') {
    param_1[0x13] = param_1[0x13] + 1;
    iVar7 = param_1[0x13];
  }
  else {
    bVar2 = *(char *)((int)param_1 + 0x13) - 1;
    *(byte *)((int)param_1 + 0x13) = bVar2;
    iVar7 = param_1[bVar2 + 7];
  }
  iVar1 = *(int *)(iVar3 + 0x1c);
  if ((iVar1 < *(int *)(iVar3 + 0x20)) || (iVar4 = FUN_0053b4b0(iVar3), iVar4 == 0)) {
    *(int *)(iVar3 + 0x1c) = *(int *)(iVar3 + 0x1c) + 1;
    iVar3 = *(int *)(iVar3 + 4);
    *(undefined4 *)(iVar3 + 4 + iVar1 * 0x14) = param_2;
    *(undefined2 *)(iVar3 + iVar1 * 0x14) = 0x66;
    *(undefined1 *)(iVar3 + 3 + iVar1 * 0x14) = 0;
    *(int *)(iVar3 + 8 + iVar1 * 0x14) = iVar7;
    *(int *)(iVar3 + 0xc + iVar1 * 0x14) = param_3;
    *(undefined4 *)(iVar3 + 0x10 + iVar1 * 0x14) = 0;
  }
  piVar6 = param_1;
  if ((int *)param_1[0x6c] != (int *)0x0) {
    piVar6 = (int *)param_1[0x6c];
  }
  *(undefined1 *)(piVar6 + 6) = 1;
  pcVar5 = "sqlite_temp_master";
  if (param_3 != 1) {
    pcVar5 = "sqlite_master";
  }
  FUN_0055e450(param_1,"UPDATE %Q.%s SET rootpage=%d WHERE #%d AND rootpage=#%d",
               *(undefined4 *)(*(int *)(*param_1 + 0x10) + param_3 * 0x10),pcVar5,param_2,iVar7,
               iVar7);
  if ((iVar7 != 0) && (*(byte *)((int)param_1 + 0x13) < 8)) {
    iVar3 = 0;
    piVar6 = param_1 + 0x19;
    while (piVar6[4] != iVar7) {
      iVar3 = iVar3 + 1;
      piVar6 = piVar6 + 6;
      if (9 < iVar3) {
        param_1[*(byte *)((int)param_1 + 0x13) + 7] = iVar7;
        *(char *)((int)param_1 + 0x13) = *(char *)((int)param_1 + 0x13) + '\x01';
        return;
      }
    }
    *(undefined1 *)(piVar6 + 2) = 1;
  }
  return;
}


/* FUN_00534210 @ 00534210  kind=lib  attributed-by=lib-island  size=134 */

void FUN_00534210(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_2 + 0x20);
  iVar4 = 0;
  do {
    if ((iVar4 == 0) || (iVar6 = 0, iVar1 < iVar4)) {
      iVar6 = iVar1;
    }
    for (iVar2 = *(int *)(param_2 + 8); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x14)) {
      iVar3 = *(int *)(iVar2 + 0x28);
      if (((iVar4 == 0) || (iVar3 < iVar4)) && (iVar6 < iVar3)) {
        iVar6 = iVar3;
      }
    }
    if (iVar6 == 0) {
      return;
    }
    iVar4 = -1000000;
    if (*(int *)(param_2 + 0x40) != 0) {
      iVar2 = *(int *)(*param_1 + 0x14);
      iVar4 = 0;
      if (0 < iVar2) {
        piVar5 = (int *)(*(int *)(*param_1 + 0x10) + 0xc);
        do {
          if (*piVar5 == *(int *)(param_2 + 0x40)) break;
          iVar4 = iVar4 + 1;
          piVar5 = piVar5 + 4;
        } while (iVar4 < iVar2);
      }
    }
    FUN_00534100(param_1,iVar6,iVar4);
    iVar4 = iVar6;
  } while( true );
}


/* FUN_005342a0 @ 005342a0  kind=lib  attributed-by=lib-island  size=72 */

void FUN_005342a0(int param_1,int *param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 != (int *)0x0) {
    do {
      if ((*(byte *)((int)param_2 + 0x12) & 4) != 0) {
        return;
      }
      if ((*(int *)(param_1 + 0x18) != 0) && ((*(byte *)(*param_2 + 2) & 1) == 0)) {
        return;
      }
      iVar2 = param_2[1];
      *(byte *)((int)param_2 + 0x12) = *(byte *)((int)param_2 + 0x12) | 4;
      if (iVar2 < 0) {
        return;
      }
      iVar3 = *(int *)(param_2[5] + 0x20);
      pcVar1 = (char *)(iVar3 + 0x13 + iVar2 * 0x28);
      *pcVar1 = *pcVar1 + -1;
      param_2 = (int *)(iVar3 + iVar2 * 0x28);
    } while (*pcVar1 == '\0');
  }
  return;
}


/* FUN_005343b0 @ 005343b0  kind=lib  attributed-by=lib-island  size=649 */

char * FUN_005343b0(int param_1,char *param_2,int param_3)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  undefined8 uVar10;
  
  switch(*(undefined1 *)(param_1 + 1)) {
  case 0xed:
    *param_2 = '\0';
    return param_2;
  case 0xee:
    FUN_005240c0(param_3,param_2,"program");
    return param_2;
  case 0xef:
  case 0xfa:
    iVar3 = *(int *)(param_1 + 0x10);
    FUN_005240c0(param_3,param_2,"keyinfo(%d",*(undefined2 *)(iVar3 + 6));
    iVar4 = FUN_00568070(param_2);
    param_1 = 0;
    if (*(short *)(iVar3 + 6) != 0) {
      puVar5 = (undefined4 *)(iVar3 + 0xc);
      while( true ) {
        if ((undefined4 *)*puVar5 == (undefined4 *)0x0) {
          pcVar6 = "nil";
        }
        else {
          pcVar6 = *(char **)*puVar5;
        }
        uVar9 = 0;
        if (pcVar6 != (char *)0x0) {
          cVar1 = *pcVar6;
          pcVar8 = pcVar6;
          while (cVar1 != '\0') {
            pcVar8 = pcVar8 + 1;
            cVar1 = *pcVar8;
          }
          uVar9 = (int)pcVar8 - (int)pcVar6 & 0x3fffffff;
        }
        if (param_3 + -6 < (int)(uVar9 + iVar4)) break;
        param_2[iVar4] = ',';
        iVar7 = iVar4 + 1;
        if (*(char *)(param_1 + *(int *)(iVar3 + 8)) != '\0') {
          param_2[iVar7] = '-';
          iVar7 = iVar4 + 2;
        }
        memcpy(param_2 + iVar7,pcVar6,uVar9 + 1);
        param_1 = param_1 + 1;
        puVar5 = puVar5 + 1;
        iVar4 = iVar7 + uVar9;
        if ((int)(uint)*(ushort *)(iVar3 + 6) <= param_1) {
          (param_2 + iVar4)[0] = ')';
          (param_2 + iVar4)[1] = '\0';
          return param_2;
        }
      }
      builtin_strncpy(param_2 + iVar4,",...",4);
    }
    (param_2 + iVar4)[0] = ')';
    (param_2 + iVar4)[1] = '\0';
    return param_2;
  default:
    pcVar6 = *(char **)(param_1 + 0x10);
    if (*(char **)(param_1 + 0x10) == (char *)0x0) {
      *param_2 = '\0';
      pcVar6 = param_2;
    }
    return pcVar6;
  case 0xf1:
    FUN_005240c0(param_3,param_2,"intarray");
    return param_2;
  case 0xf2:
    FUN_005240c0(param_3,param_2,&DAT_00703880,*(undefined4 *)(param_1 + 0x10));
    return param_2;
  case 0xf3:
    uVar10 = **(undefined8 **)(param_1 + 0x10);
    break;
  case 0xf4:
    uVar10 = **(undefined8 **)(param_1 + 0x10);
LAB_00534548:
    FUN_005240c0(param_3,param_2,"%.16g",uVar10);
    return param_2;
  case 0xf6:
    puVar5 = *(undefined4 **)(*(int *)(param_1 + 0x10) + 8);
    FUN_005240c0(param_3,param_2,"vtab:%p:%p",puVar5,*puVar5);
    return param_2;
  case 0xf8:
    iVar3 = *(int *)(param_1 + 0x10);
    uVar2 = *(ushort *)(iVar3 + 0x1c);
    if ((uVar2 & 2) != 0) {
      return *(char **)(iVar3 + 4);
    }
    if ((uVar2 & 4) == 0) {
      if ((uVar2 & 8) == 0) {
        if ((uVar2 & 1) != 0) {
          FUN_005240c0(param_3,param_2,&DAT_00716880);
          return param_2;
        }
        return "(blob)";
      }
      uVar10 = *(undefined8 *)(iVar3 + 8);
      goto LAB_00534548;
    }
    uVar10 = *(undefined8 *)(iVar3 + 0x10);
    break;
  case 0xfb:
    FUN_005240c0(param_3,param_2,"%s(%d)",*(undefined4 *)(*(short **)(param_1 + 0x10) + 0xc),
                 (int)**(short **)(param_1 + 0x10));
    return param_2;
  case 0xfc:
    FUN_005240c0(param_3,param_2,"collseq(%.20s)",**(undefined4 **)(param_1 + 0x10));
    return param_2;
  }
  FUN_005240c0(param_3,param_2,&DAT_0071680c,uVar10);
  return param_2;
}


/* FUN_00534680 @ 00534680  kind=lib  attributed-by=lib-island  size=131 */

int FUN_00534680(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_8;
  
  iVar2 = 0;
  iVar4 = 0;
  local_8 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    iVar5 = 0;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 4 + iVar5);
      if (iVar1 != 0) {
        iVar3 = 0;
        iVar2 = *(int *)(**(int **)(iVar1 + 4) + 0xb8);
        if (iVar2 != 0) {
          iVar3 = *(int *)(iVar2 + 0xc);
          *(undefined4 *)(iVar2 + 0xc) = 0;
        }
        iVar2 = local_8;
        if (((*(code **)(param_1 + 0xc0) != (code *)0x0) && (0 < iVar3)) && (local_8 == 0)) {
          local_8 = (**(code **)(param_1 + 0xc0))
                              (*(undefined4 *)(param_1 + 0xc4),param_1,
                               *(undefined4 *)(*(int *)(param_1 + 0x10) + iVar5),iVar3);
          iVar2 = local_8;
        }
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x10;
    } while (iVar4 < *(int *)(param_1 + 0x14));
  }
  return iVar2;
}


/* FUN_00534710 @ 00534710  kind=lib  attributed-by=lib-island  size=104 */

undefined8 FUN_00534710(double param_1)

{
  undefined8 uVar1;
  
  if (-9.223372036854776e+18 <= param_1) {
    if (param_1 <= 9.223372036854776e+18) {
      uVar1 = FUN_0068d946();
      return uVar1;
    }
  }
  return 0x8000000000000000;
}


/* FUN_00534780 @ 00534780  kind=lib  attributed-by=lib-island  size=222 */

void FUN_00534780(int param_1,int param_2,int param_3,int *param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined2 *puVar5;
  
  if (*param_4 == 0) {
    puVar5 = (undefined2 *)(*(int *)(param_1 + 0x40) + param_2 * 2);
    uVar4 = (uint)CONCAT11(*(undefined1 *)puVar5,*(undefined1 *)((int)puVar5 + 1));
    iVar2 = (uint)*(byte *)(param_1 + 5) + *(int *)(param_1 + 0x38);
    if ((CONCAT11(*(undefined1 *)(iVar2 + 5),*(undefined1 *)(iVar2 + 6)) <= uVar4) &&
       (param_3 + uVar4 <= *(uint *)(*(int *)(param_1 + 0x34) + 0x24))) {
      iVar3 = FUN_00539780(param_1,uVar4,param_3);
      if (iVar3 == 0) {
        uVar1 = *(ushort *)(param_1 + 0x10);
        iVar3 = *(int *)(param_1 + 0x40);
        for (; puVar5 < (undefined2 *)(iVar3 + (uVar1 - 1) * 2); puVar5 = puVar5 + 1) {
          *puVar5 = puVar5[1];
        }
        *(short *)(param_1 + 0x10) = *(short *)(param_1 + 0x10) + -1;
        *(char *)(iVar2 + 3) = (char)((ushort)*(undefined2 *)(param_1 + 0x10) >> 8);
        *(undefined1 *)(iVar2 + 4) = *(undefined1 *)(param_1 + 0x10);
        *(short *)(param_1 + 0xe) = *(short *)(param_1 + 0xe) + 2;
        return;
      }
      *param_4 = iVar3;
      return;
    }
    FUN_00525a30(0xb,"database corruption at line %d of [%.10s]",0xd250,
                 "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
    *param_4 = 0xb;
  }
  return;
}


/* FUN_00534860 @ 00534860  kind=lib  attributed-by=lib-island  size=105 */

uint FUN_00534860(int param_1,uint param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  
  if ((param_2 & 1) == 0) {
    uVar4 = 0x2c;
  }
  else if (((*(int *)(param_1 + 8) != 0) || (*(int *)(param_1 + 0xc) != 0)) ||
          (uVar4 = 0x4008, *(int *)(param_1 + 0x10) != 0)) {
    uVar4 = 0x2018;
  }
  uVar4 = uVar4 & 0xfff;
  if (((*(ushort *)(param_1 + 2) & 0x400) == 0) &&
     (pcVar2 = *(char **)(param_1 + 4), pcVar2 != (char *)0x0)) {
    cVar1 = *pcVar2;
    pcVar3 = pcVar2;
    while (cVar1 != '\0') {
      pcVar3 = pcVar3 + 1;
      cVar1 = *pcVar3;
    }
    uVar4 = uVar4 + 1 + ((int)pcVar3 - (int)pcVar2 & 0x3fffffffU);
  }
  return uVar4 + 7 & 0xfffffff8;
}


/* FUN_005348d0 @ 005348d0  kind=lib  attributed-by=lib-island  size=72 */

int FUN_005348d0(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != 0) {
    iVar1 = FUN_00534860(param_1,param_2);
    if ((param_2 & 1) != 0) {
      iVar2 = FUN_005348d0(*(undefined4 *)(param_1 + 0xc),param_2);
      iVar3 = FUN_005348d0(*(undefined4 *)(param_1 + 8),param_2);
      iVar1 = iVar3 + iVar1 + iVar2;
    }
    return iVar1;
  }
  return 0;
}


/* FUN_00534920 @ 00534920  kind=lib  attributed-by=lib-island  size=74 */

float10 FUN_00534920(double param_1)

{
  double dVar1;
  double dVar2;
  undefined8 local_c;
  
  dVar1 = 1.0;
  local_c = 1.0;
  dVar2 = 10.0;
  if (10.0 < param_1) {
    do {
      dVar2 = dVar2 * 10.0;
      dVar1 = dVar1 + 1.0;
      local_c = dVar1;
    } while (dVar2 < param_1);
  }
  return (float10)local_c;
}


/* FUN_00534a60 @ 00534a60  kind=lib  attributed-by=lib-island  size=346 */

int FUN_00534a60(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int *local_8;
  
  iVar2 = FUN_0055d830(param_1,param_3,0xffffffff,0,0,&local_8,0);
  if (iVar2 == 0) {
    iVar2 = FUN_00527300(local_8);
    piVar1 = local_8;
    while (iVar2 == 100) {
      local_8 = piVar1;
      if (piVar1 == (int *)0x0) {
LAB_00534af3:
        puVar3 = &DAT_00712628;
      }
      else {
        if ((piVar1[5] == 0) || ((short)piVar1[0xb] == 0)) {
          if (*piVar1 != 0) {
            iVar2 = *(int *)(*piVar1 + 0xc);
            if (iVar2 != 0) {
              (*DAT_00766630)(iVar2);
            }
            FUN_00553890(*piVar1,0x19,0);
          }
          goto LAB_00534af3;
        }
        if (*(int *)(*piVar1 + 0xc) != 0) {
          (*DAT_00766630)(*(int *)(*piVar1 + 0xc));
        }
        puVar3 = (undefined *)piVar1[5];
      }
      uVar4 = FUN_0056bce0(puVar3,1);
      if (piVar1 != (int *)0x0) {
        iVar2 = *piVar1;
        uVar7 = piVar1[0x16];
        if (iVar2 == 0) {
          uVar5 = 0xff;
        }
        else {
          if ((*(char *)(iVar2 + 0x38) != '\0') || (uVar7 == 0xc0a)) {
            FUN_00553890(iVar2,7,0);
            *(undefined1 *)(iVar2 + 0x38) = 0;
            uVar7 = 7;
          }
          uVar5 = *(uint *)(iVar2 + 0x30);
        }
        piVar1[0x16] = uVar5 & uVar7;
        if (*(int *)(*piVar1 + 0xc) != 0) {
          (*DAT_00766638)(*(int *)(*piVar1 + 0xc));
        }
      }
      iVar2 = FUN_00534bc0(param_1,param_2,uVar4);
      if (iVar2 != 0) {
        iVar6 = FUN_005734d0(local_8);
        goto LAB_00534b92;
      }
      iVar2 = FUN_00527300();
      piVar1 = local_8;
    }
    iVar2 = FUN_005734d0(piVar1);
    iVar6 = iVar2;
LAB_00534b92:
    if (iVar6 != 0) {
      uVar4 = FUN_00525e30(param_1);
      FUN_005670f0(param_2,param_1,uVar4);
    }
  }
  return iVar2;
}


/* FUN_00534bc0 @ 00534bc0  kind=lib  attributed-by=lib-island  size=126 */

int FUN_00534bc0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_3 == 0) {
    return 7;
  }
  iVar1 = FUN_0055d830(param_1,param_3,0xffffffff,0,0,&param_3,0);
  if (iVar1 != 0) {
    uVar2 = FUN_00525e30(param_1);
    FUN_005670f0(param_2,param_1,uVar2);
    iVar1 = FUN_00525cb0(param_1);
    return iVar1;
  }
  FUN_00527300(param_3);
  iVar1 = FUN_005734d0(param_3);
  if (iVar1 != 0) {
    uVar2 = FUN_00525e30(param_1);
    FUN_005670f0(param_2,param_1,uVar2);
  }
  return iVar1;
}


/* FUN_00534c40 @ 00534c40  kind=lib  attributed-by=lib-island  size=293 */

void FUN_00534c40(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  if (*(char *)(param_1 + 0x75) != '\x02') {
    return;
  }
  piVar2 = (int *)param_1[2];
  if (param_2 == 0x71) {
    pcVar5 = "UNION ALL";
  }
  else if (param_2 == 0x72) {
    pcVar5 = "EXCEPT";
  }
  else if (param_2 == 0x73) {
    pcVar5 = "INTERSECT";
  }
  else {
    pcVar5 = "UNION";
  }
  pcVar6 = "USING TEMP B-TREE ";
  if (param_5 == 0) {
    pcVar6 = "";
  }
  iVar7 = FUN_0055d980(*param_1,"COMPOUND SUBQUERIES %d AND %d %s(%s)",param_3,param_4,pcVar6,pcVar5
                      );
  uVar3 = param_1[0x79];
  iVar9 = piVar2[7];
  if ((iVar9 < piVar2[8]) || (iVar8 = FUN_0053b4b0(piVar2), iVar8 == 0)) {
    iVar8 = piVar2[1];
    piVar2[7] = piVar2[7] + 1;
    *(undefined2 *)(iVar8 + iVar9 * 0x14) = 0x96;
    *(undefined1 *)(iVar8 + 3 + iVar9 * 0x14) = 0;
    *(undefined4 *)(iVar8 + 4 + iVar9 * 0x14) = uVar3;
    *(undefined4 *)(iVar8 + 8 + iVar9 * 0x14) = 0;
    *(undefined4 *)(iVar8 + 0xc + iVar9 * 0x14) = 0;
    *(undefined4 *)(iVar8 + 0x10 + iVar9 * 0x14) = 0;
  }
  else {
    iVar9 = 1;
  }
  iVar8 = piVar2[1];
  iVar4 = *piVar2;
  if ((iVar8 != 0) && (*(char *)(iVar4 + 0x38) == '\0')) {
    if (iVar9 < 0) {
      iVar9 = piVar2[7] + -1;
    }
    iVar1 = iVar8 + iVar9 * 0x14;
    FUN_00539320(iVar4,(int)*(char *)(iVar1 + 1),*(undefined4 *)(iVar8 + 0x10 + iVar9 * 0x14));
    *(undefined4 *)(iVar1 + 0x10) = 0;
    if (iVar7 != 0) {
      *(int *)(iVar1 + 0x10) = iVar7;
      *(undefined1 *)(iVar1 + 1) = 0xff;
      return;
    }
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(undefined1 *)(iVar1 + 1) = 0;
    return;
  }
  FUN_00539320(iVar4,0xffffffff,iVar7);
  return;
}


/* FUN_00534d70 @ 00534d70  kind=lib  attributed-by=lib-island  size=487 */

undefined4 FUN_00534d70(undefined4 param_1,char *param_2,int param_3)

{
  int iVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  undefined2 local_f;
  uint local_c;
  int local_8;
  
  puVar2 = (uint *)param_2;
  local_8 = *(int *)(param_3 + 4);
  local_c = *(uint *)((int)param_2 + 0x10);
  uVar4 = (uint)(ushort)*(uint *)((int)param_2 + 4);
  iVar1 = *(int *)(local_c + 4);
  if ((uVar4 == 0) && ((*(uint *)param_2 & 0x300000) == 0)) {
    return 0;
  }
  local_28 = param_1;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 1000000000;
  local_f = 1;
  local_10 = 0;
  FUN_00567e70(&local_28,&DAT_00719b0c,2);
  iVar5 = 0;
  if (uVar4 != 0) {
    do {
      uVar3 = *(undefined4 *)(local_8 + *(int *)(iVar1 + iVar5 * 4) * 0x18);
      if (iVar5 != 0) {
        FUN_00567e70(&local_28," AND ",5);
      }
      FUN_00567e70(&local_28,uVar3,0xffffffff);
      FUN_00567e70(&local_28,&DAT_00737940,1);
      FUN_00567e70(&local_28,&DAT_00715ec8,1);
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar4);
  }
  iVar6 = iVar5;
  if ((*(uint *)param_2 & 0x200000) != 0) {
    if (iVar5 == *(int *)(local_c + 0x24)) {
      param_2 = "rowid";
    }
    else {
      param_2 = *(char **)(local_8 + *(int *)(iVar1 + iVar5 * 4) * 0x18);
    }
    if (iVar5 != 0) {
      FUN_00567e70(&local_28," AND ",5);
    }
    FUN_00567e70(&local_28,param_2,0xffffffff);
    FUN_00567e70(&local_28,&DAT_00719b10,1);
    FUN_00567e70(&local_28,&DAT_00715ec8,1);
    iVar6 = iVar5 + 1;
  }
  if ((*puVar2 & 0x100000) != 0) {
    if (iVar5 == *(int *)(local_c + 0x24)) {
      pcVar7 = "rowid";
    }
    else {
      pcVar7 = *(char **)(local_8 + *(int *)(iVar1 + iVar5 * 4) * 0x18);
    }
    if (iVar6 != 0) {
      FUN_00567e70(&local_28," AND ",5);
    }
    FUN_00567e70(&local_28,pcVar7,0xffffffff);
    FUN_00567e70(&local_28,&DAT_00719b14,1);
    FUN_00567e70(&local_28,&DAT_00715ec8,1);
  }
  FUN_00567e70(&local_28,&DAT_00718154,1);
  uVar3 = FUN_00567fb0(&local_28);
  return uVar3;
}


/* FUN_00534f70 @ 00534f70  kind=lib  attributed-by=lib-island  size=581 */

void FUN_00534f70(undefined4 *param_1,int param_2,uint *param_3,undefined4 param_4,
                 undefined4 param_5,ushort param_6)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  char *pcVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  
  if (*(char *)(param_1 + 0x75) != '\x02') {
    return;
  }
  uVar6 = (uint)(byte)param_3[0xd];
  uVar1 = *param_3;
  uVar2 = param_1[2];
  uVar3 = param_1[0x79];
  uVar12 = *param_1;
  if ((uVar1 & 0x10000000) != 0) {
    return;
  }
  if ((param_6 & 0x40) != 0) {
    return;
  }
  if ((((short)param_3[1] == 0) && ((uVar1 & 0x300000) == 0)) && ((param_6 & 3) == 0)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  pcVar7 = "SEARCH";
  if (!bVar5) {
    pcVar7 = "SCAN";
  }
  uVar8 = FUN_0055d980(uVar12,&DAT_00716900,pcVar7);
  if (*(int *)(param_2 + 0x1c + uVar6 * 0x48) == 0) {
    uVar13 = *(uint *)(param_2 + 0x10 + uVar6 * 0x48);
    pcVar7 = "%s TABLE %s";
  }
  else {
    uVar13 = (uint)*(byte *)(param_2 + 0x30 + uVar6 * 0x48);
    pcVar7 = "%s SUBQUERY %d";
  }
  uVar8 = FUN_0055d8f0(uVar12,uVar8,pcVar7,uVar8,uVar13);
  iVar4 = *(int *)(param_2 + 0x14 + uVar6 * 0x48);
  if (iVar4 != 0) {
    uVar8 = FUN_0055d8f0(uVar12,uVar8,"%s AS %s",uVar8,iVar4);
  }
  if ((uVar1 & 0xf0000) == 0) {
    if ((uVar1 & 0x3000) == 0) {
      if ((uVar1 & 0x8000000) != 0) {
        uVar8 = FUN_0055d8f0(uVar12,uVar8,"%s VIRTUAL TABLE INDEX %d:%s",uVar8,
                             *(undefined4 *)(param_3[4] + 0x14),*(undefined4 *)(param_3[4] + 0x18));
      }
    }
    else {
      uVar8 = FUN_0055d8f0(uVar12,uVar8,"%s USING INTEGER PRIMARY KEY",uVar8);
      if ((uVar1 & 0x1000) == 0) {
        if ((uVar1 & 0x300000) == 0x300000) {
          pcVar7 = "%s (rowid>? AND rowid<?)";
        }
        else if ((uVar1 & 0x200000) == 0) {
          if ((uVar1 & 0x100000) == 0) goto LAB_0053510e;
          pcVar7 = "%s (rowid<?)";
        }
        else {
          pcVar7 = "%s (rowid>?)";
        }
      }
      else {
        pcVar7 = "%s (rowid=?)";
      }
      uVar8 = FUN_0055d8f0(uVar12,uVar8,pcVar7,uVar8);
    }
  }
  else {
    uVar9 = FUN_00534d70(uVar12,param_3,*(undefined4 *)(param_2 + 0x18 + uVar6 * 0x48));
    uVar6 = uVar1 & 0x20000000;
    if (uVar6 == 0) {
      puVar14 = *(undefined1 **)param_3[4];
    }
    else {
      puVar14 = &DAT_006fc918;
    }
    puVar10 = (undefined4 *)&DAT_006fc918;
    if (uVar6 == 0) {
      puVar10 = &DAT_006fcfbc;
    }
    pcVar7 = "COVERING ";
    if ((uVar1 & 0x400000) == 0) {
      pcVar7 = "";
    }
    pcVar11 = "AUTOMATIC ";
    if (uVar6 == 0) {
      pcVar11 = "";
    }
    uVar8 = FUN_0055d8f0(uVar12,uVar8,"%s USING %s%sINDEX%s%s%s",uVar8,pcVar11,pcVar7,puVar10,
                         puVar14,uVar9);
    FUN_005521a0(uVar12,uVar9);
  }
LAB_0053510e:
  if ((param_6 & 3) == 0) {
    uVar15 = FUN_0068d946();
  }
  else {
    uVar15 = 1;
  }
  uVar12 = FUN_0055d8f0(uVar12,uVar8,"%s (~%lld rows)",uVar8,uVar15);
  FUN_0056bf50(uVar2,0x96,uVar3,param_4,param_5,uVar12,0xffffffff);
  return;
}


/* FUN_005351c0 @ 005351c0  kind=lib  attributed-by=lib-island  size=269 */

void FUN_005351c0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined1 *puVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  if (*(char *)(param_1 + 0x75) != '\x02') {
    return;
  }
  if (param_3 == (undefined4 *)0x0) {
    puVar5 = &DAT_006fc918;
  }
  else {
    puVar5 = (undefined1 *)*param_3;
  }
  pcVar6 = "USING COVERING INDEX ";
  if (param_3 == (undefined4 *)0x0) {
    pcVar6 = "";
  }
  iVar7 = FUN_0055d980(*param_1,"SCAN TABLE %s %s%s(~%d rows)",*param_2,pcVar6,puVar5,param_2[7]);
  uVar2 = param_1[0x79];
  piVar3 = (int *)param_1[2];
  iVar9 = piVar3[7];
  if ((iVar9 < piVar3[8]) || (iVar8 = FUN_0053b4b0(piVar3), iVar8 == 0)) {
    iVar8 = piVar3[1];
    piVar3[7] = piVar3[7] + 1;
    *(undefined2 *)(iVar8 + iVar9 * 0x14) = 0x96;
    *(undefined1 *)(iVar8 + 3 + iVar9 * 0x14) = 0;
    *(undefined4 *)(iVar8 + 4 + iVar9 * 0x14) = uVar2;
    *(undefined4 *)(iVar8 + 8 + iVar9 * 0x14) = 0;
    *(undefined4 *)(iVar8 + 0xc + iVar9 * 0x14) = 0;
    *(undefined4 *)(iVar8 + 0x10 + iVar9 * 0x14) = 0;
  }
  else {
    iVar9 = 1;
  }
  iVar8 = piVar3[1];
  iVar4 = *piVar3;
  if ((iVar8 != 0) && (*(char *)(iVar4 + 0x38) == '\0')) {
    if (iVar9 < 0) {
      iVar9 = piVar3[7] + -1;
    }
    iVar1 = iVar8 + iVar9 * 0x14;
    FUN_00539320(iVar4,(int)*(char *)(iVar1 + 1),*(undefined4 *)(iVar8 + 0x10 + iVar9 * 0x14));
    *(undefined4 *)(iVar1 + 0x10) = 0;
    if (iVar7 != 0) {
      *(int *)(iVar1 + 0x10) = iVar7;
      *(undefined1 *)(iVar1 + 1) = 0xff;
      return;
    }
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(undefined1 *)(iVar1 + 1) = 0;
    return;
  }
  FUN_00539320(iVar4,0xffffffff,iVar7);
  return;
}


/* FUN_005352d0 @ 005352d0  kind=lib  attributed-by=lib-island  size=231 */

void FUN_005352d0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (*(char *)(param_1 + 0x75) != '\x02') {
    return;
  }
  piVar2 = (int *)param_1[2];
  iVar5 = FUN_0055d980(*param_1,"USE TEMP B-TREE FOR %s",param_2);
  uVar3 = param_1[0x79];
  iVar7 = piVar2[7];
  if ((iVar7 < piVar2[8]) || (iVar6 = FUN_0053b4b0(piVar2), iVar6 == 0)) {
    iVar6 = piVar2[1];
    piVar2[7] = piVar2[7] + 1;
    *(undefined2 *)(iVar6 + iVar7 * 0x14) = 0x96;
    *(undefined1 *)(iVar6 + 3 + iVar7 * 0x14) = 0;
    *(undefined4 *)(iVar6 + 4 + iVar7 * 0x14) = uVar3;
    *(undefined4 *)(iVar6 + 8 + iVar7 * 0x14) = 0;
    *(undefined4 *)(iVar6 + 0xc + iVar7 * 0x14) = 0;
    *(undefined4 *)(iVar6 + 0x10 + iVar7 * 0x14) = 0;
  }
  else {
    iVar7 = 1;
  }
  iVar6 = piVar2[1];
  iVar4 = *piVar2;
  if ((iVar6 != 0) && (*(char *)(iVar4 + 0x38) == '\0')) {
    if (iVar7 < 0) {
      iVar7 = piVar2[7] + -1;
    }
    iVar1 = iVar6 + iVar7 * 0x14;
    FUN_00539320(iVar4,(int)*(char *)(iVar1 + 1),*(undefined4 *)(iVar6 + 0x10 + iVar7 * 0x14));
    *(undefined4 *)(iVar1 + 0x10) = 0;
    if (iVar5 != 0) {
      *(int *)(iVar1 + 0x10) = iVar5;
      *(undefined1 *)(iVar1 + 1) = 0xff;
      return;
    }
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(undefined1 *)(iVar1 + 1) = 0;
    return;
  }
  FUN_00539320(iVar4,0xffffffff,iVar5);
  return;
}


/* FUN_005353c0 @ 005353c0  kind=lib  attributed-by=lib-island  size=55 */

bool FUN_005353c0(int param_1)

{
  int iVar1;
  int local_8;
  
  local_8 = 0;
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    iVar1 = FUN_00556530(param_1,&local_8);
    if (iVar1 != 0) {
      return local_8 == 0;
    }
  }
  return false;
}


/* FUN_00535400 @ 00535400  kind=lib  attributed-by=lib-island  size=1777 */

void FUN_00535400(undefined4 param_1,undefined4 *param_2,int param_3)

{
  char cVar1;
  byte *pbVar2;
  int *piVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  byte bVar6;
  undefined2 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined1 *_Dst;
  char *pcVar12;
  uint uVar13;
  char *pcVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  int local_48;
  uint local_40;
  undefined1 *local_3c;
  undefined1 *local_38;
  uint local_34;
  char *local_30;
  uint local_2c;
  byte *local_28;
  uint local_24;
  undefined4 local_20;
  char *pcStack_1c;
  uint local_18;
  int local_14;
  int *local_10;
  int local_c;
  undefined4 local_8;
  
  puVar4 = param_2;
  local_10 = (int *)*param_2;
  local_c = *local_10;
  local_20 = 0;
  pcStack_1c = (char *)0x0;
  local_3c = (undefined1 *)0x0;
  local_24 = 0;
  local_38 = (undefined1 *)0x0;
  if (*(char *)(local_c + 0x38) != '\0') {
    return;
  }
  local_14 = param_3 * 0x28;
  pcVar14 = (char *)(param_2[8] + local_14);
  pbVar2 = *(byte **)pcVar14;
  local_8 = param_2[1];
  uVar15 = FUN_00536850(local_8,*(undefined4 *)(pbVar2 + 8));
  uVar13 = (uint)((ulonglong)uVar15 >> 0x20);
  local_28 = (byte *)(uint)*pbVar2;
  if (local_28 == (byte *)0x48) {
    if ((*(ushort *)(pbVar2 + 2) & 0x800) == 0) {
      uVar16 = FUN_00536480(local_8,*(undefined4 *)(pbVar2 + 0x10));
    }
    else {
      uVar16 = FUN_005365e0();
    }
  }
  else {
    if (local_28 == (byte *)0x49) {
      pcVar14[0x18] = '\0';
      pcVar14[0x19] = '\0';
      pcVar14[0x1a] = '\0';
      pcVar14[0x1b] = '\0';
      pcVar14[0x1c] = '\0';
      pcVar14[0x1d] = '\0';
      pcVar14[0x1e] = '\0';
      pcVar14[0x1f] = '\0';
      goto LAB_005354bb;
    }
    uVar16 = FUN_00536850(local_8,*(undefined4 *)(pbVar2 + 0xc));
  }
  *(undefined8 *)(pcVar14 + 0x18) = uVar16;
LAB_005354bb:
  uVar16 = FUN_00536850(local_8,pbVar2);
  local_34 = (uint)((ulonglong)uVar16 >> 0x20);
  local_2c = (uint)uVar16;
  if ((pbVar2[2] & 1) == 0) {
    lVar17 = CONCAT44(pcStack_1c,local_20);
  }
  else {
    lVar17 = FUN_0053aab0(local_8,(int)*(short *)(pbVar2 + 0x20));
    uVar16 = CONCAT44(local_34 | (uint)((ulonglong)lVar17 >> 0x20),local_2c | (uint)lVar17);
    lVar17 = lVar17 + -1;
  }
  local_40 = (uint)((ulonglong)lVar17 >> 0x20);
  local_18 = (uint)lVar17;
  local_34 = (uint)((ulonglong)uVar16 >> 0x20);
  local_2c = (uint)uVar16;
  *(undefined8 *)(pcVar14 + 0x20) = uVar16;
  pcVar14[8] = -1;
  pcVar14[9] = -1;
  pcVar14[10] = -1;
  pcVar14[0xb] = -1;
  pcVar14[4] = -1;
  pcVar14[5] = -1;
  pcVar14[6] = -1;
  pcVar14[7] = -1;
  pcVar14[0x10] = '\0';
  pcVar14[0x11] = '\0';
  if (((local_28 == (byte *)0x48) ||
      (((0x4b < (int)local_28 && ((int)local_28 < 0x51)) || (local_28 == (byte *)0x49)))) &&
     ((*(uint *)(pcVar14 + 0x18) & (uint)uVar15) == 0 && (*(uint *)(pcVar14 + 0x1c) & uVar13) == 0))
  {
    local_28 = (byte *)FUN_00556b70(*(undefined4 *)(pbVar2 + 8));
    uVar16 = FUN_00556b70(*(undefined4 *)(pbVar2 + 0xc));
    pcStack_1c = (char *)uVar16;
    if (*local_28 == 0x98) {
      *(undefined4 *)(pcVar14 + 8) = *(undefined4 *)(local_28 + 0x18);
      *(int *)(pcVar14 + 0xc) = (int)*(short *)(local_28 + 0x1c);
      uVar7 = FUN_00541210((int)((ulonglong)uVar16 >> 0x20));
      *(undefined2 *)(pcVar14 + 0x10) = uVar7;
    }
    iVar8 = local_c;
    uVar16 = CONCAT44(local_34,local_2c);
    if ((pcStack_1c != (char *)0x0) && (uVar16 = CONCAT44(local_34,local_2c), *pcStack_1c == -0x68))
    {
      pbVar5 = pbVar2;
      pcVar12 = pcVar14;
      if (-1 < *(int *)(pcVar14 + 8)) {
        local_28 = (byte *)FUN_00536250(local_c,pbVar2,0,0);
        if (*(char *)(iVar8 + 0x38) != '\0') {
          FUN_00555e30(iVar8,local_28);
          return;
        }
        iVar8 = FUN_0057f560(param_2,local_28,3);
        if (iVar8 == 0) {
          return;
        }
        pcVar12 = (char *)(param_2[8] + iVar8 * 0x28);
        *(int *)(pcVar12 + 4) = param_3;
        pcVar14 = (char *)(param_2[8] + local_14);
        pcVar14[0x12] = pcVar14[0x12] | 8;
        pcVar14[0x13] = '\x01';
        pbVar5 = local_28;
      }
      pcStack_1c = pcVar12;
      local_28 = pbVar5;
      FUN_005361d0(local_10,local_28);
      uVar16 = FUN_00556b70(*(undefined4 *)(local_28 + 8));
      *(undefined4 *)(pcStack_1c + 8) = *(undefined4 *)((int)uVar16 + 0x18);
      *(int *)(pcStack_1c + 0xc) = (int)*(short *)((int)uVar16 + 0x1c);
      *(uint *)(pcStack_1c + 0x1c) = uVar13 | local_40;
      *(uint *)(pcStack_1c + 0x18) = (uint)uVar15 | local_18;
      *(uint *)(pcStack_1c + 0x20) = local_2c;
      *(uint *)(pcStack_1c + 0x24) = local_34;
      uVar7 = FUN_00541210(*(undefined1 *)((ulonglong)uVar16 >> 0x20));
      uVar16 = CONCAT44(local_34,local_2c);
      *(undefined2 *)(pcStack_1c + 0x10) = uVar7;
    }
  }
  else if ((*pbVar2 == 0x47) && (*(char *)(param_2 + 5) == 'E')) {
    iVar8 = *(int *)(pbVar2 + 0x10);
    local_34 = 0;
    local_48 = 0;
    do {
      iVar11 = local_c;
      uVar9 = FUN_00536250(local_c,*(undefined4 *)(local_48 + *(int *)(iVar8 + 8)),0,0);
      uVar10 = FUN_00536250(iVar11,*(undefined4 *)(pbVar2 + 8),0,0);
      uVar9 = FUN_0055eaf0(local_10,(&DAT_007126a4)[local_34],uVar10,uVar9,0);
      iVar11 = FUN_0057f560(param_2,uVar9,3);
      FUN_00535400(param_1,param_2,iVar11);
      local_34 = local_34 + 1;
      uVar16 = CONCAT44(local_34,local_2c);
      pcVar14 = (char *)(local_14 + param_2[8]);
      *(int *)(param_2[8] + 4 + iVar11 * 0x28) = param_3;
      local_48 = local_48 + 0x14;
    } while (local_48 < 0x28);
    pcVar14[0x13] = '\x02';
  }
  else if (*pbVar2 == 0x44) {
    FUN_00535b00(param_1,param_2,param_3);
    uVar16 = CONCAT44(local_34,local_2c);
    pcVar14 = (char *)(param_2[8] + local_14);
  }
  local_34 = (uint)((ulonglong)uVar16 >> 0x20);
  local_2c = (uint)uVar16;
  if (*(char *)(param_2 + 5) == 'E') {
    iVar11 = FUN_0053c4e0(local_10,pbVar2,&local_3c,&local_24,&local_38);
    iVar8 = local_c;
    uVar16 = CONCAT44(local_34,local_2c);
    if (iVar11 != 0) {
      uVar9 = *(undefined4 *)(*(int *)(*(int *)(pbVar2 + 0x10) + 8) + 0x14);
      iVar11 = FUN_00536250(local_c,local_3c,0,0);
      if (*(char *)(iVar8 + 0x38) == '\0') {
        pcVar14 = *(char **)(iVar11 + 4);
        uVar13 = 0;
        if (pcVar14 != (char *)0x0) {
          cVar1 = *pcVar14;
          pcVar12 = pcVar14;
          while (cVar1 != '\0') {
            pcVar12 = pcVar12 + 1;
            cVar1 = *pcVar12;
          }
          uVar13 = (int)pcVar12 - (int)pcVar14 & 0x3fffffff;
        }
        bVar6 = pcVar14[uVar13 - 1];
        local_34 = local_24;
        if (local_38 != (undefined1 *)0x0) {
          if (bVar6 == 0x40) {
            local_34 = 0;
          }
          bVar6 = (&DAT_007120d8)[bVar6];
        }
        pcVar14[uVar13 - 1] = bVar6 + 1;
      }
      else {
        local_34 = local_24;
      }
      local_30 = "NOCASE";
      if (local_38 == (undefined1 *)0x0) {
        local_30 = "BINARY";
      }
      local_2c = 6;
      param_2 = (undefined4 *)FUN_00536250(iVar8,uVar9,0,0);
      piVar3 = local_10;
      iVar8 = FUN_00553bb0(*local_10,0x5c,&local_30,1);
      if (iVar8 != 0) {
        *(ushort *)(iVar8 + 2) = *(ushort *)(iVar8 + 2) | 0x100;
        *(undefined4 **)(iVar8 + 8) = param_2;
        param_2 = (undefined4 *)iVar8;
      }
      local_38 = (undefined1 *)FUN_00552230(*piVar3,0x2c);
      if (local_38 != (undefined1 *)0x0) {
        memset(local_38,0,0x2c);
        *local_38 = 0x50;
        *(undefined2 *)(local_38 + 0x1e) = 0xffff;
        *(undefined4 *)(local_38 + 0x14) = 1;
      }
      FUN_005540d0(*piVar3,local_38,param_2,local_3c);
      if ((local_38 != (undefined1 *)0x0) && (*(int *)(*piVar3 + 0x5c) < *(int *)(local_38 + 0x14)))
      {
        FUN_00553950(piVar3,"Expression tree is too large (maximum depth %d)",
                     *(int *)(*piVar3 + 0x5c));
      }
      local_38 = (undefined1 *)FUN_0057f560(puVar4,local_38,3);
      FUN_00535400(param_1,puVar4,local_38);
      param_2 = (undefined4 *)FUN_00536250(local_c,uVar9,0,0);
      iVar8 = FUN_00553bb0(*piVar3,0x5c,&local_30,1);
      if (iVar8 != 0) {
        *(undefined4 **)(iVar8 + 8) = param_2;
        *(ushort *)(iVar8 + 2) = *(ushort *)(iVar8 + 2) | 0x100;
        param_2 = (undefined4 *)iVar8;
      }
      local_3c = (undefined1 *)FUN_00552230(*piVar3,0x2c);
      if (local_3c != (undefined1 *)0x0) {
        memset(local_3c,0,0x2c);
        *local_3c = 0x4f;
        *(undefined2 *)(local_3c + 0x1e) = 0xffff;
        *(undefined4 *)(local_3c + 0x14) = 1;
      }
      FUN_005540d0(*piVar3,local_3c,param_2,iVar11);
      if ((local_3c != (undefined1 *)0x0) && (*(int *)(*piVar3 + 0x5c) < *(int *)(local_3c + 0x14)))
      {
        FUN_00553950(piVar3,"Expression tree is too large (maximum depth %d)",
                     *(int *)(*piVar3 + 0x5c));
      }
      iVar8 = FUN_0057f560(puVar4,local_3c,3);
      FUN_00535400(param_1,puVar4,iVar8);
      pcVar14 = (char *)(local_14 + puVar4[8]);
      uVar16 = CONCAT44(local_34,local_2c);
      if (local_34 != 0) {
        *(int *)(puVar4[8] + 4 + (int)local_38 * 0x28) = param_3;
        *(int *)(puVar4[8] + 4 + iVar8 * 0x28) = param_3;
        pcVar14[0x13] = '\x02';
        uVar16 = CONCAT44(local_34,local_2c);
      }
    }
  }
  local_34 = (uint)((ulonglong)uVar16 >> 0x20);
  local_2c = (uint)uVar16;
  if ((((*pbVar2 == 0x97) && (iVar8 = FUN_0057a2c0(*(undefined4 *)(pbVar2 + 4),"match"), iVar8 == 0)
       ) && (piVar3 = *(int **)(pbVar2 + 0x10), *piVar3 == 2)) &&
     (**(char **)(piVar3[2] + 0x14) == -0x68)) {
    uVar9 = *(undefined4 *)piVar3[2];
    iVar8 = ((undefined4 *)piVar3[2])[5];
    uVar18 = FUN_00536850(local_8,uVar9);
    uVar19 = FUN_00536850(local_8,iVar8);
    if ((uVar18 & uVar19) == 0) {
      local_3c = (undefined1 *)FUN_00536250(local_c,uVar9,0,0);
      piVar3 = local_10;
      _Dst = (undefined1 *)FUN_00552230(*local_10,0x2c);
      if (_Dst != (undefined1 *)0x0) {
        memset(_Dst,0,0x2c);
        *_Dst = 0x32;
        *(undefined2 *)(_Dst + 0x1e) = 0xffff;
        *(undefined4 *)(_Dst + 0x14) = 1;
      }
      FUN_005540d0(*piVar3,_Dst,0,local_3c);
      if ((_Dst != (undefined1 *)0x0) && (*(int *)(*piVar3 + 0x5c) < *(int *)(_Dst + 0x14))) {
        FUN_00553950(piVar3,"Expression tree is too large (maximum depth %d)",
                     *(int *)(*piVar3 + 0x5c));
      }
      iVar11 = FUN_0057f560(puVar4,_Dst,3);
      iVar11 = puVar4[8] + iVar11 * 0x28;
      *(ulonglong *)(iVar11 + 0x18) = uVar18;
      *(undefined4 *)(iVar11 + 8) = *(undefined4 *)(iVar8 + 0x18);
      *(int *)(iVar11 + 0xc) = (int)*(short *)(iVar8 + 0x1c);
      *(undefined2 *)(iVar11 + 0x10) = 0x40;
      *(int *)(iVar11 + 4) = param_3;
      pcVar14 = (char *)(puVar4[8] + local_14);
      pcVar14[0x12] = pcVar14[0x12] | 8;
      pcVar14[0x13] = '\x01';
      *(undefined4 *)(iVar11 + 0x20) = *(undefined4 *)(pcVar14 + 0x20);
      *(undefined4 *)(iVar11 + 0x24) = *(undefined4 *)(pcVar14 + 0x24);
    }
  }
  *(uint *)(pcVar14 + 0x18) = *(uint *)(pcVar14 + 0x18) | local_18;
  *(uint *)(pcVar14 + 0x1c) = *(uint *)(pcVar14 + 0x1c) | local_40;
  return;
}


/* FUN_00535b00 @ 00535b00  kind=lib  attributed-by=lib-island  size=1422 */

void FUN_00535b00(undefined4 param_1,undefined4 *param_2,int param_3)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  char cVar9;
  undefined2 uVar10;
  undefined4 *_Dst;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined1 *_Dst_00;
  int iVar13;
  int *piVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  undefined4 uVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  byte *pbVar21;
  int *piVar22;
  int iVar23;
  int iVar24;
  undefined8 uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  uint local_4c;
  uint uStack_48;
  uint uStack_3c;
  uint local_1c;
  uint local_18;
  uint local_10;
  uint local_c;
  
  piVar2 = (int *)*param_2;
  piVar22 = (int *)param_2[1];
  piVar14 = (int *)(param_2[8] + param_3 * 0x28);
  iVar13 = *piVar2;
  iVar17 = *piVar14;
  _Dst = (undefined4 *)FUN_00552230(iVar13,0x170);
  if (_Dst != (undefined4 *)0x0) {
    memset(_Dst,0,0x170);
  }
  piVar14[3] = (int)_Dst;
  if (_Dst != (undefined4 *)0x0) {
    *(byte *)((int)piVar14 + 0x12) = *(byte *)((int)piVar14 + 0x12) | 0x10;
    uVar10 = *(undefined2 *)((int)param_2 + 0x16);
    *_Dst = *param_2;
    _Dst[1] = piVar22;
    _Dst[4] = 0;
    _Dst[6] = 0;
    _Dst[7] = 8;
    _Dst[8] = _Dst + 10;
    _Dst[2] = 0;
    _Dst[3] = 0;
    *(undefined2 *)((int)_Dst + 0x16) = uVar10;
    FUN_0057f770(_Dst,iVar17,0x44);
    iVar24 = _Dst[6];
    while (iVar24 = iVar24 + -1, -1 < iVar24) {
      FUN_00535400(param_1,_Dst,iVar24);
    }
    if (*(char *)(iVar13 + 0x38) == '\0') {
      iVar24 = _Dst[6];
      puVar20 = (undefined4 *)_Dst[8];
      uVar16 = 0xffffffff;
      uVar15 = 0xffffffff;
      local_c = ~param_2[2];
      uStack_3c = ~param_2[3];
      local_18 = 0xffffffff;
      local_1c = 0xffffffff;
      local_10 = uStack_3c;
      while ((iVar24 = iVar24 + -1, -1 < iVar24 && (uVar16 != 0 || uVar15 != 0))) {
        if ((char)*(undefined2 *)(puVar20 + 4) == '\0') {
          puVar11 = (undefined4 *)FUN_00552230(iVar13,0x168);
          uStack_3c = 0;
          if (puVar11 == (undefined4 *)0x0) {
            local_10 = 0;
            local_c = 0;
            uVar15 = local_1c;
            uVar16 = local_18;
          }
          else {
            *(byte *)((int)puVar20 + 0x12) = *(byte *)((int)puVar20 + 0x12) | 0x20;
            *(undefined2 *)(puVar20 + 4) = 0x200;
            puVar20[3] = puVar11;
            uVar10 = *(undefined2 *)((int)param_2 + 0x16);
            *puVar11 = *param_2;
            puVar11[1] = piVar22;
            puVar11[4] = 0;
            puVar11[6] = 0;
            puVar11[7] = 8;
            puVar11[8] = puVar11 + 10;
            puVar11[2] = 0;
            puVar11[3] = 0;
            *(undefined2 *)((int)puVar11 + 0x16) = uVar10;
            FUN_0057f770(puVar11,*puVar20,0x45);
            iVar23 = puVar11[6];
            while (iVar23 = iVar23 + -1, -1 < iVar23) {
              FUN_00535400(param_1,puVar11,iVar23);
            }
            puVar11[4] = param_2;
            local_4c = 0;
            uStack_48 = 0;
            if (*(char *)(iVar13 + 0x38) == '\0') {
              puVar19 = (undefined4 *)puVar11[8];
              iVar23 = puVar11[6];
              if (0 < iVar23) {
                local_10 = 0;
                do {
                  bVar1 = *(byte *)*puVar19;
                  if ((bVar1 == 0x48) || (((0x4b < bVar1 && (bVar1 < 0x51)) || (bVar1 == 0x49)))) {
                    uVar25 = FUN_0053aab0(piVar22,puVar19[2]);
                    local_4c = local_10 | (uint)uVar25;
                    uStack_48 = uStack_48 | (uint)((ulonglong)uVar25 >> 0x20);
                    local_10 = local_4c;
                  }
                  puVar19 = puVar19 + 10;
                  iVar23 = iVar23 + -1;
                } while (iVar23 != 0);
              }
            }
            local_10 = 0;
            local_c = 0;
            uVar15 = local_1c & uStack_48;
            uVar16 = local_18 & local_4c;
            local_1c = local_1c & uStack_48;
            local_18 = local_18 & local_4c;
          }
        }
        else {
          bVar1 = *(byte *)((int)puVar20 + 0x12);
          if ((bVar1 & 8) == 0) {
            uVar26 = FUN_0053aab0(piVar22,puVar20[2]);
            if ((bVar1 & 2) != 0) {
              uVar27 = FUN_0053aab0(piVar22,*(undefined4 *)(_Dst[8] + 8 + puVar20[1] * 0x28));
              uVar26 = uVar27 | uVar26;
            }
            uStack_3c = (uint)(uVar26 >> 0x20);
            uVar16 = local_18 & (uint)uVar26;
            uVar15 = local_1c & uStack_3c;
            local_1c = uVar15;
            local_18 = uVar16;
            if (*(short *)(puVar20 + 4) == 2) {
              local_c = local_c & (uint)uVar26;
              uStack_3c = local_10 & uStack_3c;
              local_10 = uStack_3c;
            }
            else {
              uStack_3c = 0;
              local_10 = 0;
              local_c = 0;
            }
          }
        }
        puVar20 = puVar20 + 10;
      }
      _Dst[0x5a] = uVar16;
      _Dst[0x5b] = uVar15;
      if (uVar16 == 0 && uVar15 == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = 0x100;
      }
      *(undefined2 *)(piVar14 + 4) = uVar10;
      if (local_c != 0 || uStack_3c != 0) {
        bVar6 = false;
        local_1c = -1;
        local_18 = 0;
LAB_00535e30:
        if (!bVar6) {
          iVar23 = _Dst[6] + -1;
          iVar24 = _Dst[8];
          if (iVar23 < 0) {
            return;
          }
          do {
            iVar3 = *(int *)(iVar24 + 8);
            *(byte *)(iVar24 + 0x12) = *(byte *)(iVar24 + 0x12) & 0xbf;
            if (iVar3 != local_1c) {
              uVar16 = 0;
              piVar5 = piVar22;
              if (0 < *piVar22) {
                do {
                  if (piVar5[1] == iVar3) {
                    local_4c = 1 << (uVar16 & 0x1f);
                    uStack_48 = 0;
                    if (0x1f < uVar16) {
                      uStack_48 = local_4c;
                    }
                    local_4c = local_4c ^ uStack_48;
                    if (0x3f < uVar16) {
                      uStack_48 = local_4c;
                    }
                    goto LAB_00535e7a;
                  }
                  uVar16 = uVar16 + 1;
                  piVar5 = piVar5 + 1;
                } while ((int)uVar16 < *piVar22);
              }
              uStack_48 = 0;
              local_4c = 0;
LAB_00535e7a:
              if ((local_4c & local_c) != 0 || (uStack_48 & local_10) != 0) goto LAB_00535eab;
            }
            iVar24 = iVar24 + 0x28;
            iVar23 = iVar23 + -1;
            if (iVar23 < 0) {
              return;
            }
          } while( true );
        }
        goto LAB_00535f3a;
      }
    }
  }
  return;
LAB_00535eab:
  iVar4 = *(int *)(iVar24 + 0xc);
  bVar6 = true;
  bVar7 = true;
  pbVar21 = (byte *)(iVar24 + 0x12);
  do {
    if (!bVar6) break;
    if (*(int *)(pbVar21 + -10) == iVar3) {
      if (*(int *)(pbVar21 + -6) == iVar4) {
        iVar24 = *(int *)(pbVar21 + -0x12);
        cVar8 = FUN_00553b20(*(undefined4 *)(iVar24 + 0xc));
        if ((cVar8 == '\0') || (cVar9 = FUN_00553b20(*(undefined4 *)(iVar24 + 8)), cVar8 == cVar9))
        {
          *pbVar21 = *pbVar21 | 0x40;
          bVar6 = bVar7;
        }
        else {
          bVar7 = false;
          bVar6 = bVar7;
        }
      }
      else {
        bVar7 = false;
        bVar6 = false;
      }
    }
    else {
      *pbVar21 = *pbVar21 & 0xbf;
    }
    pbVar21 = pbVar21 + 0x28;
    iVar23 = iVar23 + -1;
  } while (-1 < iVar23);
  local_18 = local_18 + 1;
  local_1c = iVar3;
  if (1 < (int)local_18) {
    if (!bVar6) {
      return;
    }
LAB_00535f3a:
    iVar24 = _Dst[6];
    piVar22 = (int *)_Dst[8];
    uVar18 = 0;
    uVar12 = 0;
    while (iVar24 = iVar24 + -1, -1 < iVar24) {
      if ((*(byte *)((int)piVar22 + 0x12) & 0x40) != 0) {
        uVar12 = FUN_00536250(iVar13,*(undefined4 *)(*piVar22 + 0xc),0,0);
        uVar18 = FUN_005565a0(*param_2,uVar18,uVar12);
        uVar12 = *(undefined4 *)(*piVar22 + 8);
      }
      piVar22 = piVar22 + 10;
    }
    iVar24 = FUN_00536250(iVar13,uVar12,0,0);
    _Dst_00 = (undefined1 *)FUN_00552230(*piVar2,0x2c);
    if (_Dst_00 != (undefined1 *)0x0) {
      memset(_Dst_00,0,0x2c);
      *_Dst_00 = 0x48;
      *(undefined2 *)(_Dst_00 + 0x1e) = 0xffff;
      *(undefined4 *)(_Dst_00 + 0x14) = 1;
    }
    iVar23 = *piVar2;
    if (_Dst_00 != (undefined1 *)0x0) {
      if (iVar24 != 0) {
        *(int *)(_Dst_00 + 8) = iVar24;
        *(ushort *)(_Dst_00 + 2) = *(ushort *)(_Dst_00 + 2) | *(ushort *)(iVar24 + 2) & 0x100;
      }
      FUN_00536750(_Dst_00);
      if (*(int *)(*piVar2 + 0x5c) < *(int *)(_Dst_00 + 0x14)) {
        FUN_00553950(piVar2,"Expression tree is too large (maximum depth %d)",
                     *(int *)(*piVar2 + 0x5c));
      }
      *(ushort *)(_Dst_00 + 2) = *(ushort *)(_Dst_00 + 2) | *(ushort *)(iVar17 + 2) & 1;
      uVar10 = *(undefined2 *)(iVar17 + 0x20);
      *(undefined4 *)(_Dst_00 + 0x10) = uVar18;
      *(undefined2 *)(_Dst_00 + 0x20) = uVar10;
      iVar13 = FUN_0057f560(param_2,_Dst_00,3);
      FUN_00535400(param_1,param_2,iVar13);
      iVar17 = param_3 * 0x28 + param_2[8];
      *(int *)(param_2[8] + 4 + iVar13 * 0x28) = param_3;
      *(undefined1 *)(iVar17 + 0x13) = 1;
      *(undefined2 *)(iVar17 + 0x10) = 0x800;
      return;
    }
    FUN_00555e30(iVar23,iVar24);
    FUN_00555e30(iVar23,0);
    FUN_00556700(iVar13,uVar18);
    *(undefined2 *)(piVar14 + 4) = 0x800;
    return;
  }
  goto LAB_00535e30;
}


/* FUN_00536090 @ 00536090  kind=lib  attributed-by=lib-island  size=312 */

void FUN_00536090(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  undefined8 *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 local_b4 [8];
  undefined8 *local_ac;
  undefined4 local_a8;
  undefined1 local_88 [8];
  undefined8 *local_80;
  undefined4 local_7c;
  undefined1 local_5c [8];
  undefined1 *local_54;
  undefined1 *local_50;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined4 local_8;
  
  puVar1 = *(undefined8 **)(param_2 + 8);
  local_30 = *puVar1;
  local_28 = puVar1[1];
  local_20 = puVar1[2];
  local_18 = puVar1[3];
  local_10 = puVar1[4];
  local_8 = *(undefined4 *)(puVar1 + 5);
  local_54 = local_88;
  local_50 = local_b4;
  local_5c[0] = 0x45;
  local_88[0] = 0x50;
  local_80 = &local_30;
  local_7c = **(undefined4 **)(*(int *)(param_2 + 0x10) + 8);
  local_ac = &local_30;
  local_b4[0] = 0x4e;
  local_a8 = *(undefined4 *)(*(int *)(*(int *)(param_2 + 0x10) + 8) + 0x14);
  if (*(char *)(param_1 + 0x13) == '\0') {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
    iVar5 = *(int *)(param_1 + 0x4c);
  }
  else {
    bVar2 = *(char *)(param_1 + 0x13) - 1;
    *(byte *)(param_1 + 0x13) = bVar2;
    iVar5 = *(int *)(param_1 + 0x1c + (uint)bVar2 * 4);
  }
  iVar3 = FUN_00554e20(param_1,&local_30,iVar5);
  if (iVar3 != iVar5) {
    FUN_00563fb0(param_1,iVar5);
    iVar5 = 0;
  }
  local_18 = CONCAT44(local_18._4_4_,iVar3);
  local_30 = CONCAT71(local_30._1_7_,0x84);
  if (param_4 == 0) {
    FUN_00555f40(param_1,local_5c,param_3,param_5);
  }
  else {
    FUN_00556200();
  }
  if ((iVar5 != 0) && (*(byte *)(param_1 + 0x13) < 8)) {
    iVar4 = 0;
    iVar3 = param_1 + 100;
    while (*(int *)(iVar3 + 0x10) != iVar5) {
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x18;
      if (9 < iVar4) {
        *(int *)(param_1 + 0x1c + (uint)*(byte *)(param_1 + 0x13) * 4) = iVar5;
        *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
        return;
      }
    }
    *(undefined1 *)(iVar3 + 8) = 1;
  }
  return;
}


/* FUN_005361d0 @ 005361d0  kind=lib  attributed-by=lib-island  size=121 */

void FUN_005361d0(undefined4 param_1,byte *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  ushort uVar4;
  
  uVar1 = *(ushort *)(*(int *)(param_2 + 0xc) + 2);
  uVar4 = uVar1 & 0x100;
  if (uVar4 == (*(ushort *)(*(int *)(param_2 + 8) + 2) & 0x100)) {
    if (uVar4 == 0) {
      iVar3 = FUN_00555b70(param_1,*(int *)(param_2 + 8));
      if (iVar3 != 0) {
        *(ushort *)(*(int *)(param_2 + 8) + 2) = *(ushort *)(*(int *)(param_2 + 8) + 2) | 0x100;
      }
    }
    else {
      *(ushort *)(*(int *)(param_2 + 0xc) + 2) = uVar1 & 0xfeff;
    }
  }
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_2 + 8) = uVar2;
  if (0x4c < *param_2) {
    *param_2 = (*param_2 + 0xb3 ^ 2) + 0x4d;
  }
  return;
}


/* FUN_00536250 @ 00536250  kind=lib  attributed-by=lib-island  size=554 */

void * FUN_00536250(undefined4 param_1,void *param_2,uint param_3,int *param_4)

{
  ushort uVar1;
  void *_Src;
  void *_Dst;
  uint uVar2;
  void *_Dst_00;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  size_t _Size;
  undefined8 uVar7;
  size_t local_14;
  ushort local_10;
  
  _Src = param_2;
  if (param_2 == (void *)0x0) {
    return (void *)0x0;
  }
  uVar5 = param_3 & 1;
  local_10 = 0;
  if (param_4 == (int *)0x0) {
    uVar3 = FUN_005348d0(param_2,param_3);
    _Dst = (void *)FUN_00552230(param_1,uVar3);
  }
  else {
    _Dst = (void *)*param_4;
    local_10 = 0x8000;
  }
  if (_Dst != (void *)0x0) {
    if (uVar5 == 0) {
      uVar2 = 0x2c;
    }
    else if (((*(int *)((int)_Src + 8) != 0) || (*(int *)((int)_Src + 0xc) != 0)) ||
            (uVar2 = 0x4008, *(int *)((int)_Src + 0x10) != 0)) {
      uVar2 = 0x2018;
    }
    uVar1 = *(ushort *)((int)_Src + 2);
    param_2 = _Dst;
    if (((uVar1 & 0x400) == 0) && (*(int *)((int)_Src + 4) != 0)) {
      uVar7 = FUN_00568070(*(int *)((int)_Src + 4));
      local_14 = (int)uVar7 + 1;
      uVar6 = (uint)((ulonglong)uVar7 >> 0x20);
    }
    else {
      local_14 = 0;
      uVar6 = uVar5;
    }
    if (uVar6 == 0) {
      if ((uVar1 & 0x4000) == 0) {
        _Size = (-(uint)((uVar1 & 0x2000) != 0) & 0xffffffec) + 0x2c;
      }
      else {
        _Size = 8;
      }
      memcpy(_Dst,_Src,_Size);
      memset((void *)((int)param_2 + _Size),0,0x2c - _Size);
    }
    else {
      memcpy(_Dst,_Src,uVar2 & 0xfff);
    }
    *(ushort *)((int)_Dst + 2) =
         (ushort)uVar2 & 0x6000 | *(ushort *)((int)_Dst + 2) & 0x1fff | local_10;
    if (local_14 != 0) {
      _Dst_00 = (void *)((int)param_2 + (uVar2 & 0xfff));
      *(void **)((int)_Dst + 4) = _Dst_00;
      memcpy(_Dst_00,*(void **)((int)_Src + 4),local_14);
    }
    if (((*(ushort *)((int)_Dst + 2) | *(ushort *)((int)_Src + 2)) & 0x4000) == 0) {
      if ((*(ushort *)((int)_Src + 2) & 0x800) == 0) {
        uVar3 = FUN_005567e0(param_1,*(undefined4 *)((int)_Src + 0x10),uVar5);
      }
      else {
        uVar3 = FUN_00566d40();
      }
      *(undefined4 *)((int)_Dst + 0x10) = uVar3;
    }
    if ((*(ushort *)((int)_Dst + 2) & 0x6000) == 0) {
      *(undefined1 *)((int)_Dst + 0x22) = 0;
      if ((*(ushort *)((int)_Src + 2) & 0x4000) == 0) {
        uVar3 = FUN_00536250(param_1,*(undefined4 *)((int)_Src + 8),0,0);
        *(undefined4 *)((int)_Dst + 8) = uVar3;
        uVar3 = FUN_00536250(param_1,*(undefined4 *)((int)_Src + 0xc),0,0);
        *(undefined4 *)((int)_Dst + 0xc) = uVar3;
        return _Dst;
      }
    }
    else {
      iVar4 = FUN_00534860(_Src,param_3);
      param_2 = (void *)((int)param_2 + iVar4);
      if ((*(ushort *)((int)_Dst + 2) & 0x2000) != 0) {
        uVar3 = FUN_00536250(param_1,*(undefined4 *)((int)_Src + 8),1,&param_2);
        *(undefined4 *)((int)_Dst + 8) = uVar3;
        uVar3 = FUN_00536250(param_1,*(undefined4 *)((int)_Src + 0xc),1,&param_2);
        *(undefined4 *)((int)_Dst + 0xc) = uVar3;
      }
      if (param_4 != (int *)0x0) {
        *param_4 = (int)param_2;
      }
    }
  }
  return _Dst;
}


/* FUN_00536480 @ 00536480  kind=lib  attributed-by=lib-island  size=119 */

undefined8 FUN_00536480(undefined4 param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  uint local_8;
  
  piVar1 = param_2;
  if (param_2 == (int *)0x0) {
    return 0;
  }
  iVar3 = 0;
  if (0 < *param_2) {
    local_8 = 0;
    iVar2 = 0;
    param_2 = (int *)0x0;
    do {
      uVar4 = FUN_00536850(param_1,*(undefined4 *)(piVar1[2] + iVar2));
      param_2 = (int *)((uint)param_2 | (uint)uVar4);
      local_8 = local_8 | (uint)((ulonglong)uVar4 >> 0x20);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x14;
    } while (iVar3 < *piVar1);
    return CONCAT44(local_8,param_2);
  }
  return 0;
}


/* FUN_005365e0 @ 005365e0  kind=lib  attributed-by=lib-island  size=349 */

undefined8 FUN_005365e0(undefined4 param_1,undefined4 *param_2)

{
  short *psVar1;
  int *piVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0;
  }
  local_10 = 0;
  local_14 = 0;
  do {
    psVar1 = (short *)param_2[10];
    piVar2 = (int *)*param_2;
    if ((piVar2 == (int *)0x0) || (*piVar2 < 1)) {
      local_c = 0;
      local_8 = 0;
    }
    else {
      local_c = 0;
      iVar4 = 0;
      local_8 = 0;
      iVar5 = 0;
      do {
        uVar6 = FUN_00536850(param_1,*(undefined4 *)(piVar2[2] + iVar4));
        local_8 = local_8 | (uint)uVar6;
        local_c = local_c | (uint)((ulonglong)uVar6 >> 0x20);
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 0x14;
      } while (iVar5 < *piVar2);
    }
    uVar6 = FUN_00536480(param_1,param_2[0xc]);
    uVar7 = FUN_00536480(param_1,param_2[0xe]);
    uVar8 = FUN_00536850(param_1,param_2[0xb]);
    uVar9 = FUN_00536850(param_1,param_2[0xd]);
    local_14 = local_14 | (uint)uVar6 | local_8 | (uint)uVar7 | (uint)uVar8 | (uint)uVar9;
    local_10 = local_10 | (uint)((ulonglong)uVar6 >> 0x20) | local_c |
               (uint)((ulonglong)uVar7 >> 0x20) | (uint)((ulonglong)uVar8 >> 0x20) |
               (uint)((ulonglong)uVar9 >> 0x20);
    if ((psVar1 != (short *)0x0) && (local_c = 0, 0 < *psVar1)) {
      psVar3 = psVar1 + 0x1c;
      do {
        uVar6 = FUN_005365e0(param_1,*(undefined4 *)(psVar3 + -0xe));
        uVar7 = FUN_00536850(param_1,*(undefined4 *)psVar3);
        local_14 = local_14 | (uint)uVar6 | (uint)uVar7;
        local_c = local_c + 1;
        local_10 = local_10 | (uint)((ulonglong)uVar6 >> 0x20) | (uint)((ulonglong)uVar7 >> 0x20);
        psVar3 = psVar3 + 0x24;
      } while ((int)local_c < (int)*psVar1);
    }
    param_2 = (undefined4 *)param_2[0xf];
  } while (param_2 != (undefined4 *)0x0);
  return CONCAT44(local_10,local_14);
}


/* FUN_00536750 @ 00536750  kind=lib  attributed-by=lib-island  size=146 */

void FUN_00536750(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_8;
  
  local_8 = 0;
  if ((*(int *)(param_1 + 8) != 0) &&
     (iVar3 = *(int *)(*(int *)(param_1 + 8) + 0x14), local_8 = 0, 0 < iVar3)) {
    local_8 = iVar3;
  }
  if ((*(int *)(param_1 + 0xc) != 0) &&
     (iVar3 = *(int *)(*(int *)(param_1 + 0xc) + 0x14), local_8 < iVar3)) {
    local_8 = iVar3;
  }
  if ((*(ushort *)(param_1 + 2) & 0x800) == 0) {
    piVar1 = *(int **)(param_1 + 0x10);
    if ((piVar1 != (int *)0x0) && (iVar3 = 0, 0 < *piVar1)) {
      iVar4 = 0;
      do {
        if ((*(int *)(iVar4 + piVar1[2]) != 0) &&
           (iVar2 = *(int *)(*(int *)(iVar4 + piVar1[2]) + 0x14), local_8 < iVar2)) {
          local_8 = iVar2;
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0x14;
      } while (iVar3 < *piVar1);
    }
    *(int *)(param_1 + 0x14) = local_8 + 1;
    return;
  }
  FUN_0053b770(*(undefined4 *)(param_1 + 0x10),&local_8);
  *(int *)(param_1 + 0x14) = local_8 + 1;
  return;
}


/* FUN_00536850 @ 00536850  kind=lib  attributed-by=lib-island  size=134 */

ulonglong FUN_00536850(undefined4 param_1,char *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (param_2 == (char *)0x0) {
    return 0;
  }
  if (*param_2 == -0x68) {
    uVar1 = FUN_0053aab0(param_1,*(undefined4 *)(param_2 + 0x18));
    return uVar1;
  }
  uVar1 = FUN_00536850(param_1,*(undefined4 *)(param_2 + 0xc));
  uVar2 = FUN_00536850(param_1,*(undefined4 *)(param_2 + 8));
  if ((*(ushort *)(param_2 + 2) & 0x800) != 0) {
    uVar3 = FUN_005365e0();
    return uVar3 | uVar1 | uVar2;
  }
  uVar3 = FUN_00536480(param_1,*(undefined4 *)(param_2 + 0x10));
  return uVar1 | uVar2 | uVar3;
}


/* FUN_005368e0 @ 005368e0  kind=lib  attributed-by=lib-island  size=136 */

int FUN_005368e0(int param_1,uint *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x88 + *(short *)(param_1 + 0x5e) * 4);
  if (*(short *)(param_1 + 0x42) == 0) {
    uVar2 = (uint)*(ushort *)(param_1 + 0x60 + *(short *)(param_1 + 0x5e) * 2);
    FUN_0052eda0(iVar1,(uint)(CONCAT11(*(undefined1 *)(*(int *)(iVar1 + 0x40) + uVar2 * 2),
                                       *(undefined1 *)(*(int *)(iVar1 + 0x40) + 1 + uVar2 * 2)) &
                             *(ushort *)(iVar1 + 0x12)) + *(int *)(iVar1 + 0x38),param_1 + 0x28);
  }
  iVar3 = (uint)*(ushort *)(param_1 + 0x3c) + *(int *)(param_1 + 0x30);
  if (*(char *)(iVar1 + 2) == '\0') {
    iVar1 = *(int *)(param_1 + 0x28);
  }
  else {
    iVar1 = 0;
  }
  if (param_3 != 0) {
    *param_2 = (uint)*(ushort *)(param_1 + 0x3e) - iVar1;
    return iVar3 + iVar1;
  }
  *param_2 = (uint)*(ushort *)(param_1 + 0x3e);
  return iVar3;
}


/* FUN_00536970 @ 00536970  kind=lib  attributed-by=lib-island  size=140 */

int FUN_00536970(undefined4 param_1,int *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if ((*param_2 == 0) && (param_2[1] != 0)) {
    uVar1 = param_2[3];
    if ((int)uVar1 < param_2[4]) {
      iVar3 = (**(code **)(*(int *)param_2[8] + 0xc))
                        ((int *)param_2[8],param_2[1] + uVar1,param_2[4] - uVar1,uVar1 + param_2[6],
                         ((int)uVar1 >> 0x1f) + param_2[7] + (uint)CARRY4(uVar1,param_2[6]));
      *param_2 = iVar3;
    }
  }
  uVar1 = param_2[4];
  uVar2 = param_2[6];
  iVar3 = param_2[7];
  *param_3 = uVar1 + param_2[6];
  param_3[1] = ((int)uVar1 >> 0x1f) + iVar3 + (uint)CARRY4(uVar1,uVar2);
  FUN_005521a0(param_1,param_2[1]);
  iVar3 = *param_2;
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  return iVar3;
}


/* FUN_00536a00 @ 00536a00  kind=lib  attributed-by=lib-island  size=133 */

void FUN_00536a00(int param_1,undefined4 param_2,undefined8 *param_3,uint param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x10) + 4) + 4) + 0x20);
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  iVar2 = FUN_00552230(param_1,iVar1);
  *(int *)((int)param_3 + 4) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)param_3 = 7;
    return;
  }
  uVar3 = __allrem(param_4,param_5,iVar1,iVar1 >> 0x1f);
  *(uint *)((int)param_3 + 0xc) = uVar3;
  *(uint *)(param_3 + 2) = uVar3;
  *(uint *)((int)param_3 + 0x1c) = (param_5 - ((int)uVar3 >> 0x1f)) - (uint)(param_4 < uVar3);
  *(int *)(param_3 + 1) = iVar1;
  *(uint *)(param_3 + 3) = param_4 - uVar3;
  *(undefined4 *)(param_3 + 4) = param_2;
  return;
}


/* FUN_00536a90 @ 00536a90  kind=lib  attributed-by=lib-island  size=191 */

void FUN_00536a90(int *param_1,int param_2,size_t param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  size_t sVar5;
  size_t _Size;
  
  sVar5 = param_3;
  while ((0 < (int)sVar5 && (*param_1 == 0))) {
    _Size = sVar5;
    if (param_1[2] - param_1[4] < (int)sVar5) {
      _Size = param_1[2] - param_1[4];
    }
    memcpy((void *)(param_1[1] + param_1[4]),(void *)((param_2 - sVar5) + param_3),_Size);
    param_1[4] = param_1[4] + _Size;
    if (param_1[4] == param_1[2]) {
      uVar2 = param_1[3];
      iVar4 = (**(code **)(*(int *)param_1[8] + 0xc))
                        ((int *)param_1[8],param_1[1] + uVar2,param_1[4] - uVar2,uVar2 + param_1[6],
                         ((int)uVar2 >> 0x1f) + param_1[7] + (uint)CARRY4(uVar2,param_1[6]));
      *param_1 = iVar4;
      uVar3 = param_1[2];
      puVar1 = (uint *)(param_1 + 6);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 + uVar3;
      param_1[4] = 0;
      param_1[3] = 0;
      param_1[7] = param_1[7] + ((int)uVar3 >> 0x1f) + (uint)CARRY4(uVar2,uVar3);
    }
    sVar5 = sVar5 - _Size;
  }
  return;
}


/* FUN_00536b50 @ 00536b50  kind=lib  attributed-by=lib-island  size=838 */

int FUN_00536b50(size_t param_1,void *param_2,void *param_3,size_t param_4,int param_5,void *param_6
                ,size_t param_7,size_t param_8,uint *param_9)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar7;
  size_t _Size;
  size_t sVar8;
  undefined1 local_40 [22];
  ushort local_2a;
  ushort local_28;
  ushort local_26;
  uint local_20;
  int local_1c;
  undefined4 *local_18;
  int local_14;
  uint local_10;
  int local_c;
  void *local_8;
  uint uVar6;
  
  iVar1 = param_1;
  local_c = 0;
  local_1c = *(int *)(param_1 + 0x34);
  uVar4 = 0;
  iVar7 = 0;
  if (*(char *)(param_1 + 3) == '\0') {
    iVar7 = 4;
  }
  local_14 = 0;
  local_10 = 0;
  if (*(char *)(param_1 + 4) == '\0') {
    param_8 = 0;
    param_7 = 0;
  }
  else {
    iVar2 = FUN_00563680((int)param_2 + iVar7,param_8 + param_7,(int)(param_8 + param_7) >> 0x1f);
    iVar7 = iVar7 + iVar2;
  }
  param_1 = param_4;
  iVar2 = FUN_00563680((int)param_2 + iVar7,param_4,param_5);
  FUN_0052eda0(iVar1,param_2,local_40);
  param_8 = param_8 + param_7;
  if (*(char *)(iVar1 + 2) == '\0') {
    if ((0 < param_5) ||
       (((-1 < param_5 && (0x7fffffff < param_4)) || (local_8 = param_3, param_3 == (void *)0x0))))
    {
      FUN_00525a30(0xb,"database corruption at line %d of [%.10s]",0xd1d1,
                   "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
      return 0xb;
    }
    param_8 = param_8 + param_4;
  }
  else {
    local_8 = param_6;
    param_1 = param_7;
    param_7 = 0;
  }
  sVar8 = (size_t)local_2a;
  *param_9 = (uint)local_26;
  local_18 = (undefined4 *)((uint)local_28 + (int)param_2);
  param_2 = (void *)(iVar7 + iVar2 + (int)param_2);
  if (0 < (int)param_8) {
    do {
      iVar1 = local_1c;
      if (sVar8 == 0) {
        uVar6 = uVar4;
        uVar5 = uVar4;
        if (*(char *)(local_1c + 0x11) != '\0') {
          do {
            uVar5 = uVar6 + 1;
            if (uVar5 < 2) {
              uVar3 = 0;
            }
            else {
              uVar3 = *(uint *)(local_1c + 0x24) / 5 + 1;
              iVar7 = ((uVar6 - 1) / uVar3) * uVar3;
              uVar3 = iVar7 + 2;
              if (uVar3 == DAT_007666d0 / *(uint *)(local_1c + 0x20) + 1) {
                uVar3 = iVar7 + 3;
              }
            }
            uVar6 = uVar5;
          } while ((uVar3 == uVar5) ||
                  (local_10 = uVar5, uVar5 == DAT_007666d0 / *(uint *)(local_1c + 0x20) + 1));
        }
        local_20 = uVar4;
        iVar7 = FUN_00529110(local_1c,&local_14,&local_10,uVar5,0);
        uVar4 = local_10;
        param_2 = (void *)iVar7;
        if (*(char *)(iVar1 + 0x11) == '\0') {
LAB_00536d26:
          if (iVar7 != 0) {
LAB_00536e39:
            if ((local_c != 0) && (iVar1 = *(int *)(local_c + 0x44), iVar1 != 0)) {
              iVar2 = *(int *)(iVar1 + 0x10);
              FUN_00561130(iVar1);
              if (*(int *)(*(int *)(iVar2 + 0xb4) + 0xc) == 0) {
                FUN_00541a10(iVar2);
              }
            }
            return iVar7;
          }
        }
        else {
          if (iVar7 != 0) goto LAB_00536e39;
          FUN_00544760(iVar1,local_10,(local_20 != 0) + '\x03',local_20,&param_2);
          iVar7 = (int)param_2;
          if (param_2 != (void *)0x0) {
            if ((local_14 != 0) && (iVar2 = *(int *)(local_14 + 0x44), iVar2 != 0)) {
              param_2 = *(void **)(iVar2 + 0x10);
              FUN_00561130(iVar2);
              if (*(int *)(*(int *)((int)param_2 + 0xb4) + 0xc) == 0) {
                FUN_00541a10(param_2);
              }
            }
            goto LAB_00536d26;
          }
        }
        *(char *)local_18 = (char)(uVar4 >> 0x18);
        *(char *)((int)local_18 + 1) = (char)(uVar4 >> 0x10);
        *(char *)((int)local_18 + 2) = (char)(uVar4 >> 8);
        *(char *)((int)local_18 + 3) = (char)uVar4;
        if ((local_c != 0) && (iVar7 = *(int *)(local_c + 0x44), iVar7 != 0)) {
          iVar2 = *(int *)(iVar7 + 0x10);
          FUN_00561130(iVar7);
          if (*(int *)(*(int *)(iVar2 + 0xb4) + 0xc) == 0) {
            FUN_00541a10(iVar2);
          }
        }
        local_c = local_14;
        local_18 = *(undefined4 **)(local_14 + 0x38);
        *local_18 = 0;
        param_2 = (void *)(*(int *)(local_14 + 0x38) + 4);
        sVar8 = *(int *)(iVar1 + 0x24) - 4;
      }
      _Size = param_8;
      if ((int)sVar8 < (int)param_8) {
        _Size = sVar8;
      }
      if ((int)param_1 < 1) {
        memset(param_2,0,_Size);
      }
      else {
        if ((int)param_1 < (int)_Size) {
          _Size = param_1;
        }
        memcpy(param_2,local_8,_Size);
      }
      local_8 = (void *)((int)local_8 + _Size);
      param_1 = param_1 - _Size;
      param_8 = param_8 - _Size;
      param_2 = (void *)((int)param_2 + _Size);
      sVar8 = sVar8 - _Size;
      if (param_1 == 0) {
        param_1 = param_7;
        local_8 = param_6;
      }
    } while (0 < (int)param_8);
    if ((local_c != 0) && (iVar1 = *(int *)(local_c + 0x44), iVar1 != 0)) {
      iVar7 = *(int *)(iVar1 + 0x10);
      FUN_00561130(iVar1);
      if (*(int *)(*(int *)(iVar7 + 0xb4) + 0xc) == 0) {
        FUN_00541a10(iVar7);
      }
    }
  }
  return 0;
}


/* FUN_00536ea0 @ 00536ea0  kind=lib  attributed-by=lib-island  size=272 */

void FUN_00536ea0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int local_c;
  
  piVar2 = *(int **)(param_1 + 8);
  local_c = 0;
  piVar6 = *(int **)(param_2 + 0x20);
  if (0 < *(int *)(param_2 + 0x24)) {
    do {
      if (*(undefined4 **)(*piVar6 + 0x10) == (undefined4 *)0x0) {
        param_1 = 0;
      }
      else {
        param_1 = **(undefined4 **)(*piVar6 + 0x10);
      }
      iVar3 = piVar6[1];
      iVar7 = piVar2[7];
      iVar4 = piVar6[2];
      if ((iVar7 < piVar2[8]) || (iVar5 = FUN_0053b4b0(piVar2), iVar5 == 0)) {
        iVar5 = piVar2[1];
        piVar2[7] = piVar2[7] + 1;
        *(int *)(iVar5 + 4 + iVar7 * 0x14) = iVar4;
        *(undefined2 *)(iVar5 + iVar7 * 0x14) = 0x7c;
        *(undefined1 *)(iVar5 + 3 + iVar7 * 0x14) = 0;
        *(int *)(iVar5 + 8 + iVar7 * 0x14) = param_1;
        *(undefined4 *)(iVar5 + 0xc + iVar7 * 0x14) = 0;
        *(undefined4 *)(iVar5 + 0x10 + iVar7 * 0x14) = 0;
      }
      else {
        iVar7 = 1;
      }
      iVar4 = piVar2[1];
      iVar5 = *piVar2;
      if ((iVar4 == 0) || (*(char *)(iVar5 + 0x38) != '\0')) {
        FUN_00539320(iVar5,0xfffffffb,iVar3);
      }
      else {
        if (iVar7 < 0) {
          iVar7 = piVar2[7] + -1;
        }
        iVar1 = iVar4 + iVar7 * 0x14;
        FUN_00539320(iVar5,(int)*(char *)(iVar1 + 1),*(undefined4 *)(iVar4 + 0x10 + iVar7 * 0x14));
        *(undefined4 *)(iVar1 + 0x10) = 0;
        if (iVar3 == 0) {
          *(undefined4 *)(iVar1 + 0x10) = 0;
          *(undefined1 *)(iVar1 + 1) = 0;
        }
        else {
          *(int *)(iVar1 + 0x10) = iVar3;
          *(undefined1 *)(iVar1 + 1) = 0xfb;
        }
      }
      local_c = local_c + 1;
      piVar6 = piVar6 + 4;
    } while (local_c < *(int *)(param_2 + 0x24));
  }
  return;
}


/* FUN_00536fb0 @ 00536fb0  kind=lib  attributed-by=lib-string  size=218 */

undefined4 FUN_00536fb0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *_Dst;
  int iVar2;
  
  iVar1 = FUN_00556be0(param_2,param_3);
  if (iVar1 == 1) {
    _Dst = (int *)FUN_00552230(param_1,0x230);
    if (_Dst == (int *)0x0) {
      FUN_00553890(param_1,7,"out of memory");
    }
    else {
      memset(_Dst,0,0x230);
      *_Dst = param_2;
      iVar2 = FUN_0055e870(_Dst);
      if (iVar2 != 0) {
        FUN_00553890(param_1,_Dst[3],&DAT_00716900,_Dst[1]);
      }
      FUN_005521a0(param_1,_Dst[1]);
      FUN_005521a0(param_1,_Dst);
      if (iVar2 == 0) goto LAB_0053703e;
    }
    return 0;
  }
  if (iVar1 < 0) {
    FUN_00553890(param_1,1,"unknown database %s",param_3);
    return 0;
  }
LAB_0053703e:
  return *(undefined4 *)(*(int *)(param_2 + 0x10) + 4 + iVar1 * 0x10);
}


/* FUN_00537090 @ 00537090  kind=lib  attributed-by=lib-island  size=249 */

int * FUN_00537090(int param_1,char *param_2,int param_3)

{
  int *_Dst;
  char cVar1;
  uint uVar2;
  int iVar3;
  int *_Dst_00;
  char *pcVar4;
  size_t _Size;
  
  _Size = 0;
  if (param_2 != (char *)0x0) {
    cVar1 = *param_2;
    pcVar4 = param_2;
    while (cVar1 != '\0') {
      pcVar4 = pcVar4 + 1;
      cVar1 = *pcVar4;
    }
    _Size = (int)pcVar4 - (int)param_2 & 0x3fffffff;
  }
  if (*(int *)(param_1 + 0x1a8) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0057a870(param_2,_Size);
    uVar2 = uVar2 % *(uint *)(param_1 + 0x19c);
  }
  iVar3 = FUN_00537190(param_1 + 0x19c,param_2,_Size,uVar2);
  if ((iVar3 != 0) && (*(int **)(iVar3 + 8) != (int *)0x0)) {
    return *(int **)(iVar3 + 8);
  }
  _Dst_00 = (int *)0x0;
  if (((param_3 != 0) &&
      (_Dst_00 = (int *)FUN_00552230(param_1,_Size + 0x3d), _Dst_00 != (int *)0x0)) &&
     (memset(_Dst_00,0,_Size + 0x3d), _Dst_00 != (int *)0x0)) {
    _Dst = _Dst_00 + 0xf;
    *_Dst_00 = (int)_Dst;
    *(undefined1 *)(_Dst_00 + 1) = 1;
    _Dst_00[5] = (int)_Dst;
    *(undefined1 *)(_Dst_00 + 6) = 2;
    _Dst_00[10] = (int)_Dst;
    *(undefined1 *)(_Dst_00 + 0xb) = 3;
    memcpy(_Dst,param_2,_Size);
    *(undefined1 *)(_Size + *_Dst_00) = 0;
    iVar3 = FUN_0055ada0(param_1 + 0x19c,*_Dst_00,_Size,_Dst_00);
    if (iVar3 != 0) {
      *(undefined1 *)(param_1 + 0x38) = 1;
      FUN_005521a0(param_1,iVar3);
      return (int *)0x0;
    }
  }
  return _Dst_00;
}


/* FUN_00537190 @ 00537190  kind=lib  attributed-by=lib-island  size=156 */

undefined4 * FUN_00537190(int param_1,byte *param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  iVar3 = *(int *)(param_1 + 0xc);
  if (iVar3 == 0) {
    puVar1 = *(undefined4 **)(param_1 + 8);
    iVar3 = *(int *)(param_1 + 4);
  }
  else {
    puVar1 = *(undefined4 **)(iVar3 + 4 + param_4 * 8);
    iVar3 = *(int *)(iVar3 + param_4 * 8);
  }
  do {
    if ((iVar3 == 0) || (iVar3 = iVar3 + -1, puVar1 == (undefined4 *)0x0)) {
      return (undefined4 *)0x0;
    }
    if (puVar1[4] == param_3) {
      pbVar4 = (byte *)puVar1[3];
      iVar2 = param_3;
      pbVar5 = param_2;
      while (0 < iVar2) {
        if ((*pbVar4 == 0) || ((&DAT_007120d8)[*pbVar4] != (&DAT_007120d8)[*pbVar5])) break;
        pbVar4 = pbVar4 + 1;
        pbVar5 = pbVar5 + 1;
        iVar2 = iVar2 + -1;
      }
      if ((iVar2 + -1 < 0) || ((&DAT_007120d8)[*pbVar4] == (&DAT_007120d8)[*pbVar5])) {
        return puVar1;
      }
    }
    puVar1 = (undefined4 *)*puVar1;
  } while( true );
}


/* FUN_00537230 @ 00537230  kind=lib  attributed-by=lib-island  size=180 */

int FUN_00537230(undefined4 param_1,int *param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = *(undefined4 *)(param_5 * 4 + *(int *)(param_4 + 0x20));
  iVar5 = 0;
  if (0 < *param_2) {
    iVar6 = 0;
    do {
      for (pcVar2 = *(char **)(iVar6 + param_2[2]);
          (pcVar2 != (char *)0x0 && ((*pcVar2 == '\\' || (*pcVar2 == '\x18'))));
          pcVar2 = *(char **)(pcVar2 + 8)) {
      }
      if ((((*pcVar2 == -0x68) &&
           ((int)*(short *)(pcVar2 + 0x1c) == *(int *)(param_5 * 4 + *(int *)(param_4 + 4)))) &&
          (*(int *)(pcVar2 + 0x18) == param_3)) &&
         ((puVar3 = (undefined4 *)FUN_00555b70(param_1,*(char **)(iVar6 + param_2[2])),
          puVar3 != (undefined4 *)0x0 && (iVar4 = FUN_0057a2c0(*puVar3,uVar1), iVar4 == 0)))) {
        return iVar5;
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 0x14;
    } while (iVar5 < *param_2);
  }
  return -1;
}


/* FUN_005372f0 @ 005372f0  kind=lib  attributed-by=lib-island  size=351 */

int * FUN_005372f0(undefined4 *param_1,int param_2,int param_3,uint param_4,uint param_5,
                  ushort param_6,int param_7)

{
  char cVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  bool bVar8;
  
  do {
    if (param_1 == (undefined4 *)0x0) {
      return (int *)0x0;
    }
    piVar7 = (int *)param_1[8];
    for (iVar6 = param_1[6]; iVar6 != 0; iVar6 = iVar6 + -1) {
      if ((((piVar7[2] == param_2) && ((piVar7[6] & param_4) == 0 && (piVar7[7] & param_5) == 0)) &&
          (piVar7[3] == param_3)) && ((param_6 & 0xfff & *(ushort *)(piVar7 + 4)) != 0)) {
        if (param_3 < 0) {
          return piVar7;
        }
        if (param_7 == 0) {
          return piVar7;
        }
        if (*(ushort *)(piVar7 + 4) == 0x80) {
          return piVar7;
        }
        piVar5 = (int *)*param_1;
        cVar1 = *(char *)(*(int *)(*(int *)(param_7 + 0xc) + 4) + 0x15 + param_3 * 0x18);
        cVar2 = FUN_005328e0(*piVar7);
        if (cVar2 == 'a') {
          bVar8 = cVar1 == 'a';
LAB_005373b7:
          if (!bVar8) goto LAB_0053741d;
        }
        else if (cVar2 != 'b') {
          bVar8 = 'b' < cVar1;
          goto LAB_005373b7;
        }
        puVar3 = (undefined4 *)
                 FUN_0054bcc0(piVar5,*(undefined4 *)(*piVar7 + 8),*(undefined4 *)(*piVar7 + 0xc));
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = *(undefined4 **)(*piVar5 + 8);
        }
        iVar4 = 0;
        piVar5 = *(int **)(param_7 + 4);
        if (*piVar5 != param_3) {
          do {
            if (*(int *)(param_7 + 0x24) <= iVar4) {
              return (int *)0x0;
            }
            piVar5 = piVar5 + 1;
            iVar4 = iVar4 + 1;
          } while (*piVar5 != param_3);
        }
        iVar4 = FUN_0057a2c0(*puVar3,*(undefined4 *)(*(int *)(param_7 + 0x20) + iVar4 * 4));
        if (iVar4 == 0) {
          return piVar7;
        }
      }
LAB_0053741d:
      piVar7 = piVar7 + 10;
    }
    param_1 = (undefined4 *)param_1[4];
  } while( true );
}


/* FUN_00537450 @ 00537450  kind=lib  attributed-by=lib-string  size=2539 */

int * FUN_00537450(int *param_1,int param_2,int *param_3,int param_4)

{
  char cVar1;
  undefined1 uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  short *psVar10;
  undefined4 uVar11;
  int *_Dst;
  int *piVar12;
  size_t _Size;
  void *_Dst_00;
  char *pcVar13;
  uint _Size_00;
  char *local_60;
  uint local_5c;
  undefined *local_58;
  undefined4 local_54;
  undefined *local_50;
  undefined4 local_4c;
  char *local_48;
  uint local_44;
  int *local_40;
  short *local_3c;
  char *local_38;
  undefined1 *local_34;
  int local_30;
  char *local_2c;
  int *local_28;
  uint local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  uint local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  iVar4 = *param_1;
  iVar6 = (param_4 != 0) + 7;
  local_24 = (uint)*(byte *)((param_4 != 0) + 0x19 + (int)param_3);
  local_28 = (int *)param_3[iVar6];
  local_40 = param_3 + iVar6;
  if (local_24 == 0) {
    return local_28;
  }
  if (local_28 != (int *)0x0) {
    return local_28;
  }
  local_20 = local_28;
  local_1c = local_28;
  local_18 = local_28;
  local_10 = local_28;
  local_c = local_28;
  local_8 = local_28;
  iVar6 = FUN_0053d040(param_1,param_2,param_3,&local_28,&local_1c);
  if (iVar6 != 0) {
    return (int *)0x0;
  }
  local_30 = 0;
  if (0 < param_3[5]) {
    local_50 = &DAT_00717454;
    local_4c = 3;
    local_58 = &DAT_00717450;
    local_54 = 3;
    do {
      if (local_1c == (int *)0x0) {
        iVar6 = param_3[9];
      }
      else {
        iVar6 = local_1c[local_30];
      }
      if (local_28 == (int *)0x0) {
        local_48 = "oid";
      }
      else {
        local_48 = *(char **)(*(int *)(param_2 + 4) + *(int *)(local_28[1] + local_30 * 4) * 0x18);
      }
      local_3c = (short *)(iVar6 * 0x18);
      local_60 = *(char **)((int)local_3c + *(int *)(*param_3 + 4));
      local_44 = 0;
      if (local_48 != (char *)0x0) {
        cVar1 = *local_48;
        pcVar7 = local_48;
        while (cVar1 != '\0') {
          pcVar7 = pcVar7 + 1;
          cVar1 = *pcVar7;
        }
        local_44 = (int)pcVar7 - (int)local_48 & 0x3fffffff;
      }
      local_5c = 0;
      if (local_60 != (char *)0x0) {
        cVar1 = *local_60;
        pcVar7 = local_60;
        while (cVar1 != '\0') {
          pcVar7 = pcVar7 + 1;
          cVar1 = *pcVar7;
        }
        local_5c = (int)pcVar7 - (int)local_60 & 0x3fffffff;
      }
      local_2c = local_60;
      local_14 = local_5c;
      iVar6 = FUN_00553bb0(*param_1,0x1a,&local_60,1);
      local_38 = (char *)iVar6;
      FUN_005540d0(*param_1,iVar6,0,0);
      if ((iVar6 != 0) && (*(int *)(*param_1 + 0x5c) < *(int *)(iVar6 + 0x14))) {
        FUN_00553950(param_1,"Expression tree is too large (maximum depth %d)",
                     *(int *)(*param_1 + 0x5c));
      }
      puVar8 = (undefined1 *)FUN_00553bb0(*param_1,0x1a,&local_48,1);
      local_34 = puVar8;
      FUN_005540d0(*param_1,puVar8,0,0);
      if ((puVar8 != (undefined1 *)0x0) && (*(int *)(*param_1 + 0x5c) < *(int *)(puVar8 + 0x14))) {
        FUN_00553950(param_1,"Expression tree is too large (maximum depth %d)",
                     *(int *)(*param_1 + 0x5c));
      }
      iVar6 = FUN_00553bb0(*param_1,0x1a,&local_50,1);
      FUN_005540d0(*param_1,iVar6,0,0);
      if ((iVar6 != 0) && (*(int *)(*param_1 + 0x5c) < *(int *)(iVar6 + 0x14))) {
        FUN_00553950(param_1,"Expression tree is too large (maximum depth %d)",
                     *(int *)(*param_1 + 0x5c));
      }
      puVar8 = (undefined1 *)FUN_00552230(*param_1,0x2c);
      if (puVar8 != (undefined1 *)0x0) {
        memset(puVar8,0,0x2c);
        *puVar8 = 0x76;
        *(undefined2 *)(puVar8 + 0x1e) = 0xffff;
        *(undefined4 *)(puVar8 + 0x14) = 1;
      }
      FUN_005540d0(*param_1,puVar8,iVar6,local_34);
      if ((puVar8 != (undefined1 *)0x0) && (*(int *)(*param_1 + 0x5c) < *(int *)(puVar8 + 0x14))) {
        FUN_00553950(param_1,"Expression tree is too large (maximum depth %d)",
                     *(int *)(*param_1 + 0x5c));
      }
      puVar9 = (undefined1 *)FUN_00552230(*param_1,0x2c);
      if (puVar9 != (undefined1 *)0x0) {
        memset(puVar9,0,0x2c);
        *puVar9 = 0x4c;
        *(undefined2 *)(puVar9 + 0x1e) = 0xffff;
        *(undefined4 *)(puVar9 + 0x14) = 1;
      }
      FUN_005540d0(*param_1,puVar9,puVar8,local_38);
      if ((puVar9 != (undefined1 *)0x0) && (*(int *)(*param_1 + 0x5c) < *(int *)(puVar9 + 0x14))) {
        FUN_00553950(param_1,"Expression tree is too large (maximum depth %d)",
                     *(int *)(*param_1 + 0x5c));
      }
      local_c = (int *)FUN_00553d70(iVar4,local_c,puVar9);
      if (param_4 != 0) {
        iVar6 = FUN_00553bb0(*param_1,0x1a,&local_48,1);
        local_38 = (char *)iVar6;
        FUN_005540d0(*param_1,iVar6,0,0);
        if ((iVar6 != 0) && (*(int *)(*param_1 + 0x5c) < *(int *)(iVar6 + 0x14))) {
          FUN_00553950(param_1,"Expression tree is too large (maximum depth %d)",
                       *(int *)(*param_1 + 0x5c));
        }
        iVar6 = FUN_00553bb0(*param_1,0x1a,&local_58,1);
        FUN_005540d0(*param_1,iVar6,0,0);
        if ((iVar6 != 0) && (*(int *)(*param_1 + 0x5c) < *(int *)(iVar6 + 0x14))) {
          FUN_00553950(param_1,"Expression tree is too large (maximum depth %d)",
                       *(int *)(*param_1 + 0x5c));
        }
        puVar8 = (undefined1 *)FUN_00552230(*param_1,0x2c);
        local_34 = puVar8;
        if (puVar8 != (undefined1 *)0x0) {
          memset(puVar8,0,0x2c);
          *puVar8 = 0x76;
          *(undefined2 *)(puVar8 + 0x1e) = 0xffff;
          *(undefined4 *)(puVar8 + 0x14) = 1;
        }
        FUN_005540d0(*param_1,puVar8,iVar6,local_38);
        if ((puVar8 != (undefined1 *)0x0) && (*(int *)(*param_1 + 0x5c) < *(int *)(puVar8 + 0x14)))
        {
          FUN_00553950(param_1,"Expression tree is too large (maximum depth %d)",
                       *(int *)(*param_1 + 0x5c));
        }
        iVar6 = FUN_00553bb0(*param_1,0x1a,&local_48,1);
        local_38 = (char *)iVar6;
        FUN_005540d0(*param_1,iVar6,0,0);
        if ((iVar6 != 0) && (*(int *)(*param_1 + 0x5c) < *(int *)(iVar6 + 0x14))) {
          FUN_00553950(param_1,"Expression tree is too large (maximum depth %d)",
                       *(int *)(*param_1 + 0x5c));
        }
        iVar6 = FUN_00553bb0(*param_1,0x1a,&local_50,1);
        FUN_005540d0(*param_1,iVar6,0,0);
        if ((iVar6 != 0) && (*(int *)(*param_1 + 0x5c) < *(int *)(iVar6 + 0x14))) {
          FUN_00553950(param_1,"Expression tree is too large (maximum depth %d)",
                       *(int *)(*param_1 + 0x5c));
        }
        puVar8 = (undefined1 *)FUN_00552230(*param_1,0x2c);
        if (puVar8 != (undefined1 *)0x0) {
          memset(puVar8,0,0x2c);
          *puVar8 = 0x76;
          *(undefined2 *)(puVar8 + 0x1e) = 0xffff;
          *(undefined4 *)(puVar8 + 0x14) = 1;
        }
        FUN_005540d0(*param_1,puVar8,iVar6,local_38);
        if ((puVar8 != (undefined1 *)0x0) && (*(int *)(*param_1 + 0x5c) < *(int *)(puVar8 + 0x14)))
        {
          FUN_00553950(param_1,"Expression tree is too large (maximum depth %d)",
                       *(int *)(*param_1 + 0x5c));
        }
        puVar9 = (undefined1 *)FUN_00552230(*param_1,0x2c);
        if (puVar9 != (undefined1 *)0x0) {
          memset(puVar9,0,0x2c);
          *puVar9 = 0x46;
          *(undefined2 *)(puVar9 + 0x1e) = 0xffff;
          *(undefined4 *)(puVar9 + 0x14) = 1;
        }
        FUN_005540d0(*param_1,puVar9,puVar8,local_34);
        if ((puVar9 != (undefined1 *)0x0) && (*(int *)(*param_1 + 0x5c) < *(int *)(puVar9 + 0x14)))
        {
          FUN_00553950(param_1,"Expression tree is too large (maximum depth %d)",
                       *(int *)(*param_1 + 0x5c));
        }
        local_10 = (int *)FUN_00553d70(iVar4,local_10,puVar9);
      }
      if (local_24 != 6) {
        if (local_24 == 9) {
          if (param_4 == 0) goto LAB_00537adc;
          iVar6 = FUN_00553bb0(*param_1,0x1a,&local_48,1);
          local_38 = (char *)iVar6;
          FUN_005540d0(*param_1,iVar6,0,0);
          if ((iVar6 != 0) && (*(int *)(*param_1 + 0x5c) < *(int *)(iVar6 + 0x14))) {
            FUN_00553950(param_1,"Expression tree is too large (maximum depth %d)",
                         *(int *)(*param_1 + 0x5c));
          }
          iVar6 = FUN_00553bb0(*param_1,0x1a,&local_58,1);
          FUN_005540d0(*param_1,iVar6,0,0);
          if ((iVar6 != 0) && (*(int *)(*param_1 + 0x5c) < *(int *)(iVar6 + 0x14))) {
            FUN_00553950(param_1,"Expression tree is too large (maximum depth %d)",
                         *(int *)(*param_1 + 0x5c));
          }
          puVar8 = (undefined1 *)FUN_00552230(*param_1,0x2c);
          pcVar7 = local_38;
          if (puVar8 != (undefined1 *)0x0) {
            memset(puVar8,0,0x2c);
            *puVar8 = 0x76;
            *(undefined2 *)(puVar8 + 0x1e) = 0xffff;
            *(undefined4 *)(puVar8 + 0x14) = 1;
            pcVar7 = local_38;
          }
LAB_00537a5b:
          FUN_005540d0(*param_1,puVar8,iVar6,pcVar7);
          if ((puVar8 != (undefined1 *)0x0) && (*(int *)(*param_1 + 0x5c) < *(int *)(puVar8 + 0x14))
             ) {
            FUN_00553950(param_1,"Expression tree is too large (maximum depth %d)",
                         *(int *)(*param_1 + 0x5c));
          }
        }
        else {
          if ((local_24 != 8) ||
             (iVar6 = *(int *)(*(int *)(*param_3 + 4) + 4 + (int)local_3c), iVar6 == 0)) {
            puVar8 = (undefined1 *)FUN_00552230(*param_1,0x2c);
            if (puVar8 != (undefined1 *)0x0) {
              memset(puVar8,0,0x2c);
              *puVar8 = 0x62;
              *(undefined4 *)(puVar8 + 0x14) = 1;
              *(undefined2 *)(puVar8 + 0x1e) = 0xffff;
            }
            iVar6 = 0;
            pcVar7 = (char *)0;
            goto LAB_00537a5b;
          }
          puVar8 = (undefined1 *)FUN_00536250(iVar4,iVar6,0,0);
        }
        local_18 = (int *)FUN_005565a0(param_1,local_18,puVar8);
        if (local_18 != (int *)0x0) {
          iVar6 = *local_18;
          iVar5 = local_18[2];
          if (local_2c == (char *)0x0) {
            _Dst_00 = (void *)0x0;
          }
          else {
            _Dst_00 = (void *)FUN_00552230(*param_1,local_14 + 1);
            if (_Dst_00 != (void *)0x0) {
              memcpy(_Dst_00,local_2c,local_14);
              *(undefined1 *)((int)_Dst_00 + local_14) = 0;
            }
          }
          *(void **)(iVar5 + iVar6 * 0x14 + -0x10) = _Dst_00;
        }
      }
LAB_00537adc:
      local_30 = local_30 + 1;
    } while (local_30 < param_3[5]);
  }
  FUN_005521a0(iVar4,local_1c);
  local_38 = *(char **)*param_3;
  _Size = 0;
  if (local_38 != (char *)0x0) {
    cVar1 = *local_38;
    pcVar7 = local_38;
    while (cVar1 != '\0') {
      pcVar7 = pcVar7 + 1;
      cVar1 = *pcVar7;
    }
    _Size = (int)pcVar7 - (int)local_38 & 0x3fffffff;
  }
  if (local_24 != 6) goto LAB_00537c7a;
  pcVar7 = "foreign key constraint failed";
  do {
    pcVar13 = pcVar7;
    pcVar7 = pcVar13 + 1;
  } while (*pcVar7 != '\0');
  _Size_00 = (uint)(pcVar13 + -0x716feb) & 0x3fffffff;
  local_3c = (short *)(_Size_00 + 0x2d);
  local_60 = local_38;
  local_5c = _Size;
  puVar8 = (undefined1 *)FUN_00552230(iVar4,local_3c);
  if (puVar8 != (undefined1 *)0x0) {
    memset(puVar8,0,(size_t)local_3c);
    *(undefined2 *)(puVar8 + 0x1e) = 0xffff;
    *puVar8 = 0x38;
    if (_Size_00 == 0xffffffff) {
      *(ushort *)(puVar8 + 2) = *(ushort *)(puVar8 + 2) | 0x400;
      *(undefined4 *)(puVar8 + 4) = 0;
    }
    else {
      *(undefined1 **)(puVar8 + 4) = puVar8 + 0x2c;
      if (_Size_00 != 0) {
        memcpy(puVar8 + 0x2c,"foreign key constraint failed",_Size_00);
      }
      *(undefined1 *)(_Size_00 + *(int *)(puVar8 + 4)) = 0;
    }
    *(undefined4 *)(puVar8 + 0x14) = 1;
    puVar8[1] = 2;
  }
  psVar10 = (short *)FUN_00552230(iVar4,0x50);
  if (psVar10 == (short *)0x0) {
LAB_00537c46:
    psVar10 = (short *)0x0;
  }
  else {
    memset(psVar10,0,0x50);
    psVar10[1] = 1;
    psVar10 = (short *)FUN_00567680(iVar4,psVar10,1,(int)*psVar10);
    local_3c = psVar10;
    if (*(char *)(iVar4 + 0x38) != '\0') {
      FUN_00567370(iVar4,psVar10);
      goto LAB_00537c46;
    }
    sVar3 = *psVar10;
    uVar11 = FUN_0055e3f0(iVar4,&local_60);
    *(undefined4 *)(psVar10 + sVar3 * 0x24 + -0x1c) = uVar11;
    uVar11 = FUN_0055e3f0(iVar4,0);
    *(undefined4 *)(psVar10 + sVar3 * 0x24 + -0x1e) = uVar11;
    psVar10 = local_3c;
  }
  uVar11 = FUN_005565a0(param_1,0,puVar8,psVar10,local_c,0,0,0,0,0,0);
  local_20 = (int *)FUN_00566e90(param_1,uVar11);
  local_c = (int *)0x0;
LAB_00537c7a:
  uVar2 = *(undefined1 *)(iVar4 + 0xea);
  *(undefined1 *)(iVar4 + 0xea) = 0;
  _Dst = (int *)FUN_00552230(iVar4,_Size + 0x4d);
  if ((_Dst != (int *)0x0) && (memset(_Dst,0,_Size + 0x4d), _Dst != (int *)0x0)) {
    local_8 = _Dst + 9;
    _Dst[7] = (int)local_8;
    _Dst[0xc] = (int)(_Dst + 0x13);
    _Dst[0xd] = _Size;
    memcpy(_Dst + 0x13,local_38,_Size);
    iVar6 = FUN_00536250(iVar4,local_c,1,0);
    local_8[5] = iVar6;
    iVar6 = FUN_005567e0(iVar4,local_18,1);
    local_8[6] = iVar6;
    iVar6 = FUN_00566d40(iVar4,local_20,1);
    local_8[2] = iVar6;
    if (local_10 != (int *)0x0) {
      piVar12 = (int *)FUN_00552230(*param_1,0x2c);
      if (piVar12 != (int *)0x0) {
        memset(piVar12,0,0x2c);
        *(undefined1 *)piVar12 = 0x13;
        *(undefined2 *)((int)piVar12 + 0x1e) = 0xffff;
        piVar12[5] = 1;
      }
      FUN_005540d0(*param_1,piVar12,local_10,0);
      if ((piVar12 != (int *)0x0) && (*(int *)(*param_1 + 0x5c) < piVar12[5])) {
        FUN_00553950(param_1,"Expression tree is too large (maximum depth %d)",
                     *(int *)(*param_1 + 0x5c));
      }
      local_10 = piVar12;
      iVar6 = FUN_00536250(iVar4,piVar12,1,0);
      _Dst[3] = iVar6;
    }
  }
  *(undefined1 *)(iVar4 + 0xea) = uVar2;
  FUN_00555e30(iVar4,local_c);
  FUN_00555e30(iVar4,local_10);
  FUN_00556700(iVar4,local_18);
  piVar12 = local_20;
  if (local_20 != (int *)0x0) {
    FUN_005303a0(iVar4,local_20);
    FUN_005521a0(iVar4,piVar12);
  }
  if (*(char *)(iVar4 + 0x38) != '\x01') {
    if (local_24 == 6) {
      *(undefined1 *)local_8 = 0x74;
    }
    else if ((local_24 == 9) && (param_4 == 0)) {
      *(undefined1 *)local_8 = 0x6a;
    }
    else {
      *(undefined1 *)local_8 = 0x6b;
    }
    local_8[1] = (int)_Dst;
    _Dst[5] = *(int *)(param_2 + 0x40);
    _Dst[6] = *(int *)(param_2 + 0x40);
    *local_40 = (int)_Dst;
    *(char *)(_Dst + 2) = (param_4 != 0) + 'j';
    return _Dst;
  }
  FUN_00538be0(iVar4,_Dst);
  return (int *)0x0;
}


/* FUN_00537e40 @ 00537e40  kind=lib  attributed-by=lib-string  size=2072 */

void FUN_00537e40(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,int *param_5,
                 int *param_6,int param_7,int param_8,int param_9)

{
  undefined2 *puVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  uint uVar15;
  int *piVar16;
  uint uVar17;
  int iVar18;
  undefined4 *puVar19;
  undefined8 uVar20;
  int local_8;
  
  puVar19 = param_1;
  piVar3 = (int *)param_1[2];
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)FUN_0056c7b0(*param_1);
    param_1[2] = piVar3;
    if (piVar3 != (int *)0x0) {
      FUN_0056bdc0(piVar3,0x94);
    }
  }
  iVar4 = param_1[0x12] + -1;
  iVar5 = FUN_005741e0(piVar3);
  if (param_8 < 0) {
    FUN_0056be90(piVar3,0x76,(char)param_5[6],iVar5);
  }
  iVar18 = 0;
  if (0 < param_5[5]) {
    do {
      iVar7 = param_6[iVar18];
      iVar8 = piVar3[7];
      if ((iVar8 < piVar3[8]) || (iVar6 = FUN_0053b4b0(piVar3), iVar6 == 0)) {
        piVar3[7] = piVar3[7] + 1;
        iVar6 = piVar3[1];
        *(int *)(iVar6 + 4 + iVar8 * 0x14) = iVar7 + 1 + param_7;
        *(undefined2 *)(iVar6 + iVar8 * 0x14) = 0x49;
        *(undefined1 *)(iVar6 + 3 + iVar8 * 0x14) = 0;
        *(int *)(iVar6 + 8 + iVar8 * 0x14) = iVar5;
        *(undefined4 *)(iVar6 + 0xc + iVar8 * 0x14) = 0;
        *(undefined4 *)(iVar6 + 0x10 + iVar8 * 0x14) = 0;
      }
      iVar18 = iVar18 + 1;
    } while (iVar18 < param_5[5]);
  }
  if (param_9 == 0) {
    if (param_4 == 0) {
      if (*(char *)((int)param_1 + 0x13) == '\0') {
        param_1[0x13] = param_1[0x13] + 1;
        iVar18 = param_1[0x13];
      }
      else {
        bVar2 = *(char *)((int)param_1 + 0x13) - 1;
        *(byte *)((int)param_1 + 0x13) = bVar2;
        iVar18 = param_1[bVar2 + 7];
      }
      iVar7 = *param_6;
      iVar8 = piVar3[7];
      if ((iVar8 < piVar3[8]) || (iVar6 = FUN_0053b4b0(piVar3), iVar6 == 0)) {
        piVar3[7] = piVar3[7] + 1;
        iVar6 = piVar3[1];
        *(undefined2 *)(iVar6 + iVar8 * 0x14) = 0xf;
        *(undefined1 *)(iVar6 + 3 + iVar8 * 0x14) = 0;
        *(int *)(iVar6 + 4 + iVar8 * 0x14) = iVar7 + param_7 + 1;
        *(int *)(iVar6 + 8 + iVar8 * 0x14) = iVar18;
        *(undefined4 *)(iVar6 + 0xc + iVar8 * 0x14) = 0;
        *(undefined4 *)(iVar6 + 0x10 + iVar8 * 0x14) = 0;
      }
      param_1 = (undefined4 *)piVar3[7];
      if (((int)param_1 < piVar3[8]) || (iVar7 = FUN_0053b4b0(piVar3), iVar7 == 0)) {
        iVar7 = piVar3[1];
        piVar3[7] = piVar3[7] + 1;
        *(undefined2 *)(iVar7 + (int)param_1 * 0x14) = 0x15;
        *(undefined1 *)(iVar7 + 3 + (int)param_1 * 0x14) = 0;
        *(int *)(iVar7 + 4 + (int)param_1 * 0x14) = iVar18;
        *(undefined4 *)(iVar7 + 8 + (int)param_1 * 0x14) = 0;
        *(undefined4 *)(iVar7 + 0xc + (int)param_1 * 0x14) = 0;
        *(undefined4 *)(iVar7 + 0x10 + (int)param_1 * 0x14) = 0;
      }
      else {
        param_1 = (undefined4 *)0x1;
      }
      if ((param_3 == *param_5) && (param_8 == 1)) {
        FUN_0056bef0(piVar3,0x4c,param_7,iVar5,iVar18);
      }
      FUN_0055e5f0(puVar19,iVar4,param_2,param_3,0x27);
      iVar7 = piVar3[7];
      if ((iVar7 < piVar3[8]) || (iVar8 = FUN_0053b4b0(piVar3), iVar8 == 0)) {
        piVar3[7] = piVar3[7] + 1;
        iVar8 = piVar3[1];
        *(undefined2 *)(iVar8 + iVar7 * 0x14) = 0x36;
        *(undefined1 *)(iVar8 + 3 + iVar7 * 0x14) = 0;
        *(int *)(iVar8 + 4 + iVar7 * 0x14) = iVar4;
        *(undefined4 *)(iVar8 + 8 + iVar7 * 0x14) = 0;
        *(int *)(iVar8 + 0xc + iVar7 * 0x14) = iVar18;
        *(undefined4 *)(iVar8 + 0x10 + iVar7 * 0x14) = 0;
      }
      iVar7 = piVar3[7];
      if ((iVar7 < piVar3[8]) || (iVar8 = FUN_0053b4b0(piVar3), iVar8 == 0)) {
        piVar3[7] = piVar3[7] + 1;
        iVar8 = piVar3[1];
        *(undefined2 *)(iVar8 + iVar7 * 0x14) = 1;
        *(undefined1 *)(iVar8 + 3 + iVar7 * 0x14) = 0;
        *(undefined4 *)(iVar8 + 4 + iVar7 * 0x14) = 0;
        *(int *)(iVar8 + 8 + iVar7 * 0x14) = iVar5;
        *(undefined4 *)(iVar8 + 0xc + iVar7 * 0x14) = 0;
        *(undefined4 *)(iVar8 + 0x10 + iVar7 * 0x14) = 0;
      }
      uVar17 = piVar3[7];
      uVar15 = uVar17 - 2;
      if ((-1 < (int)uVar15) && (uVar15 < uVar17)) {
        *(uint *)(piVar3[1] + 8 + uVar15 * 0x14) = uVar17;
      }
      if ((-1 < (int)param_1) && (param_1 < (uint)piVar3[7])) {
        *(int *)(piVar3[1] + 8 + (int)param_1 * 0x14) = piVar3[7];
      }
      if ((iVar18 != 0) && (*(byte *)((int)puVar19 + 0x13) < 8)) {
        iVar7 = 0;
        puVar14 = puVar19 + 0x19;
        do {
          if (puVar14[4] == iVar18) {
            *(undefined1 *)(puVar14 + 2) = 1;
            goto LAB_0053850c;
          }
          iVar7 = iVar7 + 1;
          puVar14 = puVar14 + 6;
        } while (iVar7 < 10);
        puVar19[*(byte *)((int)puVar19 + 0x13) + 7] = iVar18;
        *(char *)((int)puVar19 + 0x13) = *(char *)((int)puVar19 + 0x13) + '\x01';
      }
    }
    else {
      iVar18 = param_5[5];
      local_8 = param_1[0x10];
      if ((int)param_1[0xf] < iVar18) {
        local_8 = param_1[0x13] + 1;
        param_1[0x13] = param_1[0x13] + iVar18;
      }
      else {
        param_1[0x10] = local_8 + iVar18;
        param_1[0xf] = param_1[0xf] - iVar18;
      }
      if (*(char *)((int)param_1 + 0x13) == '\0') {
        param_1[0x13] = param_1[0x13] + 1;
        iVar7 = param_1[0x13];
      }
      else {
        bVar2 = *(char *)((int)param_1 + 0x13) - 1;
        *(byte *)((int)param_1 + 0x13) = bVar2;
        iVar7 = param_1[bVar2 + 7];
      }
      iVar6 = FUN_0055b2a0(param_1,param_4);
      uVar13 = *(undefined4 *)(param_4 + 0x28);
      iVar8 = piVar3[7];
      if ((iVar8 < piVar3[8]) || (iVar9 = FUN_0053b4b0(piVar3), iVar9 == 0)) {
        piVar3[7] = piVar3[7] + 1;
        puVar1 = (undefined2 *)(piVar3[1] + iVar8 * 0x14);
        *(int *)(puVar1 + 2) = iVar4;
        *(undefined4 *)(puVar1 + 4) = uVar13;
        *puVar1 = 0x27;
        *(undefined1 *)((int)puVar1 + 3) = 0;
        *(undefined4 *)(puVar1 + 6) = param_2;
        *(undefined4 *)(puVar1 + 8) = 0;
      }
      iVar8 = piVar3[1];
      iVar9 = *piVar3;
      if ((iVar8 == 0) || (*(char *)(iVar9 + 0x38) != '\0')) {
        FUN_00539320(iVar9,0xfffffff0,iVar6);
      }
      else {
        iVar10 = iVar8 + (piVar3[7] + -1) * 0x14;
        FUN_00539320(iVar9,(int)*(char *)(iVar10 + 1),
                     *(undefined4 *)(iVar8 + 0x10 + (piVar3[7] + -1) * 0x14));
        *(undefined4 *)(iVar10 + 0x10) = 0;
        if (iVar6 == 0) {
          *(undefined4 *)(iVar10 + 0x10) = 0;
          *(undefined1 *)(iVar10 + 1) = 0;
        }
        else {
          *(int *)(iVar10 + 0x10) = iVar6;
          *(undefined1 *)(iVar10 + 1) = 0xfa;
        }
      }
      iVar8 = 0;
      if (0 < iVar18) {
        do {
          iVar6 = param_6[iVar8];
          iVar9 = piVar3[7];
          if ((iVar9 < piVar3[8]) || (iVar10 = FUN_0053b4b0(piVar3), iVar10 == 0)) {
            piVar3[7] = piVar3[7] + 1;
            iVar10 = piVar3[1];
            *(undefined2 *)(iVar10 + iVar9 * 0x14) = 0xe;
            iVar10 = iVar10 + iVar9 * 0x14;
            *(int *)(iVar10 + 4) = iVar6 + 1 + param_7;
            *(undefined1 *)(iVar10 + 3) = 0;
            *(int *)(iVar10 + 8) = local_8 + iVar8;
            *(undefined4 *)(iVar10 + 0xc) = 0;
            *(undefined4 *)(iVar10 + 0x10) = 0;
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < iVar18);
      }
      if ((param_3 == *param_5) && (param_8 == 1)) {
        iVar8 = piVar3[7];
        iVar6 = 0;
        if (0 < iVar18) {
          do {
            iVar9 = param_6[iVar6];
            iVar10 = *(int *)(*(int *)(param_4 + 4) + iVar6 * 4);
            iVar11 = param_7 + 1 + iVar10;
            if (iVar10 == *(short *)(param_3 + 0x24)) {
              iVar11 = param_7;
            }
            iVar10 = piVar3[7];
            if ((iVar10 < piVar3[8]) || (iVar12 = FUN_0053b4b0(piVar3), iVar12 == 0)) {
              piVar3[7] = piVar3[7] + 1;
              iVar12 = piVar3[1];
              *(int *)(iVar12 + 4 + iVar10 * 0x14) = iVar9 + 1 + param_7;
              *(int *)(iVar12 + 8 + iVar10 * 0x14) = iVar8 + 1 + iVar18;
              *(undefined2 *)(iVar12 + iVar10 * 0x14) = 0x4b;
              *(undefined1 *)(iVar12 + 3 + iVar10 * 0x14) = 0;
              *(int *)(iVar12 + 0xc + iVar10 * 0x14) = iVar11;
              *(undefined4 *)(iVar12 + 0x10 + iVar10 * 0x14) = 0;
            }
            if (piVar3[1] != 0) {
              *(undefined1 *)(piVar3[1] + -0x11 + piVar3[7] * 0x14) = 8;
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < iVar18);
        }
        iVar8 = piVar3[7];
        if ((iVar8 < piVar3[8]) || (iVar6 = FUN_0053b4b0(piVar3), iVar6 == 0)) {
          iVar6 = piVar3[1];
          piVar3[7] = piVar3[7] + 1;
          *(undefined2 *)(iVar6 + iVar8 * 0x14) = 1;
          *(undefined1 *)(iVar6 + 3 + iVar8 * 0x14) = 0;
          *(undefined4 *)(iVar6 + 4 + iVar8 * 0x14) = 0;
          *(int *)(iVar6 + 8 + iVar8 * 0x14) = iVar5;
          *(undefined4 *)(iVar6 + 0xc + iVar8 * 0x14) = 0;
          *(undefined4 *)(iVar6 + 0x10 + iVar8 * 0x14) = 0;
        }
      }
      iVar8 = piVar3[7];
      if ((iVar8 < piVar3[8]) || (iVar6 = FUN_0053b4b0(piVar3), iVar6 == 0)) {
        iVar6 = piVar3[1];
        piVar3[7] = piVar3[7] + 1;
        *(int *)(iVar6 + 4 + iVar8 * 0x14) = local_8;
        *(int *)(iVar6 + 8 + iVar8 * 0x14) = iVar18;
        *(undefined2 *)(iVar6 + iVar8 * 0x14) = 0x1f;
        *(undefined1 *)(iVar6 + 3 + iVar8 * 0x14) = 0;
        *(int *)(iVar6 + 0xc + iVar8 * 0x14) = iVar7;
        *(undefined4 *)(iVar6 + 0x10 + iVar8 * 0x14) = 0;
      }
      iVar9 = FUN_0055b220(piVar3,param_4);
      iVar8 = piVar3[1];
      iVar6 = *piVar3;
      if ((iVar8 == 0) || (*(char *)(iVar6 + 0x38) != '\0')) {
        FUN_00539320(iVar6,0,iVar9);
      }
      else {
        iVar10 = iVar8 + (piVar3[7] + -1) * 0x14;
        FUN_00539320(iVar6,(int)*(char *)(iVar10 + 1),
                     *(undefined4 *)(iVar8 + 0x10 + (piVar3[7] + -1) * 0x14));
        *(undefined4 *)(iVar10 + 0x10) = 0;
        if (iVar9 == 0) {
          *(undefined4 *)(iVar10 + 0x10) = 0;
          *(undefined1 *)(iVar10 + 1) = 0;
        }
        else {
          uVar20 = FUN_00568070(iVar9);
          uVar13 = FUN_005524a0(*piVar3,(int)((ulonglong)uVar20 >> 0x20),(int)uVar20);
          *(undefined4 *)(iVar10 + 0x10) = uVar13;
          *(undefined1 *)(iVar10 + 1) = 0xff;
        }
      }
      FUN_0056bfc0(piVar3,0x34,iVar4,iVar5,iVar7,0);
      if ((iVar7 != 0) && (*(byte *)((int)param_1 + 0x13) < 8)) {
        iVar8 = 0;
        puVar14 = param_1 + 0x19;
        do {
          if (puVar14[4] == iVar7) {
            *(undefined1 *)(puVar14 + 2) = 1;
            goto LAB_005384b2;
          }
          iVar8 = iVar8 + 1;
          puVar14 = puVar14 + 6;
        } while (iVar8 < 10);
        param_1[*(byte *)((int)param_1 + 0x13) + 7] = iVar7;
        *(char *)((int)param_1 + 0x13) = *(char *)((int)param_1 + 0x13) + '\x01';
      }
LAB_005384b2:
      piVar16 = param_1 + 0x1d;
      iVar7 = 10;
      do {
        iVar8 = *piVar16;
        if ((local_8 <= iVar8) && (iVar8 <= iVar18 + local_8 + -1)) {
          if ((char)piVar16[-2] != '\0') {
            if (*(byte *)((int)param_1 + 0x13) < 8) {
              param_1[*(byte *)((int)param_1 + 0x13) + 7] = iVar8;
              *(char *)((int)param_1 + 0x13) = *(char *)((int)param_1 + 0x13) + '\x01';
            }
            *(undefined1 *)(piVar16 + -2) = 0;
          }
          *piVar16 = 0;
        }
        piVar16 = piVar16 + 6;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      if ((int)param_1[0xf] < iVar18) {
        param_1[0xf] = iVar18;
        param_1[0x10] = local_8;
      }
    }
  }
LAB_0053850c:
  if ((((char)param_5[6] == '\0') && (puVar19[0x6c] == 0)) &&
     (*(char *)((int)puVar19 + 0x17) == '\0')) {
    FUN_0055abc0(puVar19,2,"foreign key constraint failed",0xfffffffe);
  }
  else {
    if ((0 < param_8) && ((char)param_5[6] == '\0')) {
      if ((undefined4 *)puVar19[0x6c] != (undefined4 *)0x0) {
        puVar19 = (undefined4 *)puVar19[0x6c];
      }
      *(undefined1 *)(puVar19 + 6) = 1;
    }
    iVar18 = piVar3[7];
    bVar2 = *(byte *)(param_5 + 6);
    if ((iVar18 < piVar3[8]) || (iVar7 = FUN_0053b4b0(piVar3), iVar7 == 0)) {
      iVar7 = piVar3[1];
      piVar3[7] = piVar3[7] + 1;
      *(undefined2 *)(iVar7 + iVar18 * 0x14) = 0x75;
      *(undefined1 *)(iVar7 + 3 + iVar18 * 0x14) = 0;
      *(uint *)(iVar7 + 4 + iVar18 * 0x14) = (uint)bVar2;
      *(int *)(iVar7 + 8 + iVar18 * 0x14) = param_8;
      *(undefined4 *)(iVar7 + 0xc + iVar18 * 0x14) = 0;
      *(undefined4 *)(iVar7 + 0x10 + iVar18 * 0x14) = 0;
    }
  }
  if (piVar3[10] != 0) {
    *(int *)(piVar3[10] - (iVar5 * 4 + 4)) = piVar3[7];
  }
  iVar5 = piVar3[7];
  iVar18 = piVar3[8];
  if (iVar18 <= iVar5) {
    if (iVar18 == 0) {
      iVar18 = 0x33;
    }
    else {
      iVar18 = iVar18 * 2;
    }
    uVar15 = FUN_00552390(*piVar3,piVar3[1],iVar18 * 0x14);
    if (uVar15 == 0) {
      return;
    }
    iVar18 = *piVar3;
    if (((iVar18 == 0) || (uVar15 < *(uint *)(iVar18 + 0x104))) ||
       (*(uint *)(iVar18 + 0x108) <= uVar15)) {
      uVar17 = (*DAT_00766608._4_4_)(uVar15);
    }
    else {
      uVar17 = (uint)*(ushort *)(iVar18 + 0xe8);
    }
    piVar3[8] = uVar17 / 0x14;
    piVar3[1] = uVar15;
  }
  iVar18 = piVar3[1];
  piVar3[7] = piVar3[7] + 1;
  *(undefined2 *)(iVar18 + iVar5 * 0x14) = 0x2d;
  *(undefined1 *)(iVar18 + 3 + iVar5 * 0x14) = 0;
  *(int *)(iVar18 + 4 + iVar5 * 0x14) = iVar4;
  *(undefined4 *)(iVar18 + 8 + iVar5 * 0x14) = 0;
  *(undefined4 *)(iVar18 + 0xc + iVar5 * 0x14) = 0;
  *(undefined4 *)(iVar18 + 0x10 + iVar5 * 0x14) = 0;
  return;
}


/* FUN_00538660 @ 00538660  kind=lib  attributed-by=lib-island  size=1397 */

void FUN_00538660(int *param_1,int param_2,int param_3,int param_4,int *param_5,int param_6,
                 int param_7,int param_8)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  char *pcVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  int iVar10;
  size_t _Size;
  int *local_48;
  int iStack_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  char *local_28;
  uint local_24;
  char *local_20;
  size_t local_1c;
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  iVar4 = *param_1;
  iVar3 = param_1[2];
  local_8 = 0;
  local_14 = 0;
  local_18 = iVar3;
  local_c = iVar4;
  if (iVar3 == 0) {
    iVar3 = FUN_0056c7b0(iVar4);
    param_1[2] = iVar3;
    local_18 = iVar3;
    if (iVar3 != 0) {
      FUN_0056bdc0(iVar3,0x94);
    }
  }
  if (param_8 < 0) {
    local_14 = *(uint *)(iVar3 + 0x1c);
    bVar1 = *(byte *)(param_5 + 6);
    if (((int)local_14 < *(int *)(iVar3 + 0x20)) || (iVar4 = FUN_0053b4b0(iVar3), iVar4 == 0)) {
      *(int *)(iVar3 + 0x1c) = *(int *)(iVar3 + 0x1c) + 1;
      iVar4 = *(int *)(iVar3 + 4);
      *(undefined2 *)(iVar4 + local_14 * 0x14) = 0x76;
      *(undefined1 *)(iVar4 + 3 + local_14 * 0x14) = 0;
      *(uint *)(iVar4 + 4 + local_14 * 0x14) = (uint)bVar1;
      *(undefined4 *)(iVar4 + 8 + local_14 * 0x14) = 0;
      *(undefined4 *)(iVar4 + 0xc + local_14 * 0x14) = 0;
      *(undefined4 *)(iVar4 + 0x10 + local_14 * 0x14) = 0;
      iVar4 = local_c;
    }
    else {
      local_14 = 1;
      iVar4 = local_c;
    }
  }
  local_10 = 0;
  if (param_5[5] < 1) {
    uVar9 = 0;
  }
  else {
    do {
      puVar5 = (undefined1 *)FUN_00552230(iVar4,0x2d);
      if (puVar5 != (undefined1 *)0x0) {
        memset(puVar5,0,0x2d);
        *(undefined2 *)(puVar5 + 0x1e) = 0xffff;
        *puVar5 = 0x84;
        *(undefined1 **)(puVar5 + 4) = puVar5 + 0x2c;
        puVar5[0x2c] = 0;
        *(undefined4 *)(puVar5 + 0x14) = 1;
        if (puVar5 != (undefined1 *)0x0) {
          if (param_4 == 0) {
            *(int *)(puVar5 + 0x18) = param_7;
            puVar5[1] = 100;
          }
          else {
            iVar10 = *(int *)(*(int *)(param_4 + 4) + local_10 * 4);
            iVar3 = *(int *)(param_3 + 4) + iVar10 * 0x18;
            if (*(short *)(param_3 + 0x24) == iVar10) {
              iVar10 = -1;
            }
            *(int *)(puVar5 + 0x18) = param_7 + 1 + iVar10;
            puVar5[1] = *(undefined1 *)(iVar3 + 0x15);
            local_28 = *(char **)(iVar3 + 0x10);
            if (local_28 == (char *)0x0) {
              local_28 = (char *)**(undefined4 **)(iVar4 + 8);
            }
            local_24 = 0;
            if (local_28 != (char *)0x0) {
              cVar2 = *local_28;
              pcVar6 = local_28;
              while (cVar2 != '\0') {
                pcVar6 = pcVar6 + 1;
                cVar2 = *pcVar6;
              }
              local_24 = (int)pcVar6 - (int)local_28 & 0x3fffffff;
            }
            if ((local_24 != 0) &&
               (puVar7 = (undefined1 *)FUN_00553bb0(*param_1,0x5c,&local_28,1),
               puVar7 != (undefined1 *)0x0)) {
              *(ushort *)(puVar7 + 2) = *(ushort *)(puVar7 + 2) | 0x100;
              *(undefined1 **)(puVar7 + 8) = puVar5;
              puVar5 = puVar7;
            }
          }
        }
      }
      if (param_6 == 0) {
        iVar4 = param_5[9];
      }
      else {
        iVar4 = *(int *)(param_6 + local_10 * 4);
      }
      local_20 = *(char **)(*(int *)(*param_5 + 4) + iVar4 * 0x18);
      if (local_20 == (char *)0x0) {
        _Size = 0;
      }
      else {
        cVar2 = *local_20;
        pcVar6 = local_20;
        while (cVar2 != '\0') {
          pcVar6 = pcVar6 + 1;
          cVar2 = *pcVar6;
        }
        _Size = (int)pcVar6 - (int)local_20 & 0x3fffffff;
      }
      local_1c = _Size + 0x2d;
      puVar7 = (undefined1 *)FUN_00552230(local_c,local_1c);
      if (puVar7 != (undefined1 *)0x0) {
        memset(puVar7,0,local_1c);
        *(undefined2 *)(puVar7 + 0x1e) = 0xffff;
        *puVar7 = 0x1a;
        if (_Size == 0xffffffff) {
          *(ushort *)(puVar7 + 2) = *(ushort *)(puVar7 + 2) | 0x400;
          *(undefined4 *)(puVar7 + 4) = 0;
        }
        else {
          *(undefined1 **)(puVar7 + 4) = puVar7 + 0x2c;
          if (_Size != 0) {
            memcpy(puVar7 + 0x2c,local_20,_Size);
          }
          *(undefined1 *)(_Size + *(int *)(puVar7 + 4)) = 0;
        }
        *(undefined4 *)(puVar7 + 0x14) = 1;
      }
      puVar8 = (undefined1 *)FUN_00552230(*param_1,0x2c);
      if (puVar8 != (undefined1 *)0x0) {
        memset(puVar8,0,0x2c);
        *puVar8 = 0x4c;
        *(undefined2 *)(puVar8 + 0x1e) = 0xffff;
        *(undefined4 *)(puVar8 + 0x14) = 1;
      }
      local_20 = (char *)*param_1;
      if (puVar8 == (undefined1 *)0x0) {
        FUN_00555e30(local_20,puVar5);
        FUN_00555e30(local_20,puVar7);
      }
      else {
        if (puVar7 != (undefined1 *)0x0) {
          *(undefined1 **)(puVar8 + 0xc) = puVar7;
          *(ushort *)(puVar8 + 2) = *(ushort *)(puVar8 + 2) | *(ushort *)(puVar7 + 2) & 0x100;
        }
        if (puVar5 != (undefined1 *)0x0) {
          *(undefined1 **)(puVar8 + 8) = puVar5;
          *(ushort *)(puVar8 + 2) = *(ushort *)(puVar8 + 2) | *(ushort *)(puVar5 + 2) & 0x100;
        }
        FUN_00536750(puVar8);
        if (*(int *)(*param_1 + 0x5c) < *(int *)(puVar8 + 0x14)) {
          FUN_00553950(param_1,"Expression tree is too large (maximum depth %d)",
                       *(int *)(*param_1 + 0x5c));
        }
      }
      iVar4 = local_c;
      uVar9 = FUN_00553d70(local_c,local_8,puVar8);
      local_10 = local_10 + 1;
      local_8 = uVar9;
    } while (local_10 < param_5[5]);
  }
  if ((param_3 == *param_5) && (0 < param_8)) {
    puVar5 = (undefined1 *)FUN_00552230(iVar4,0x2d);
    if (puVar5 != (undefined1 *)0x0) {
      memset(puVar5,0,0x2d);
      *(undefined2 *)(puVar5 + 0x1e) = 0xffff;
      *puVar5 = 0x84;
      *(undefined1 **)(puVar5 + 4) = puVar5 + 0x2c;
      puVar5[0x2c] = 0;
      *(undefined4 *)(puVar5 + 0x14) = 1;
    }
    puVar7 = (undefined1 *)FUN_00552230(iVar4,0x2d);
    if (puVar7 != (undefined1 *)0x0) {
      memset(puVar7,0,0x2d);
      *puVar7 = 0x98;
      *(undefined2 *)(puVar7 + 0x1e) = 0xffff;
      *(undefined1 **)(puVar7 + 4) = puVar7 + 0x2c;
      puVar7[0x2c] = 0;
      *(undefined4 *)(puVar7 + 0x14) = 1;
    }
    if ((puVar5 != (undefined1 *)0x0) && (puVar7 != (undefined1 *)0x0)) {
      *(int *)(puVar5 + 0x18) = param_7;
      puVar5[1] = 100;
      *(undefined4 *)(puVar7 + 0x18) = *(undefined4 *)(param_2 + 0x34);
      *(undefined2 *)(puVar7 + 0x1c) = 0xffff;
    }
    puVar8 = (undefined1 *)FUN_00552230(*param_1,0x2c);
    if (puVar8 != (undefined1 *)0x0) {
      memset(puVar8,0,0x2c);
      *puVar8 = 0x4b;
      *(undefined2 *)(puVar8 + 0x1e) = 0xffff;
      *(undefined4 *)(puVar8 + 0x14) = 1;
    }
    iVar4 = *param_1;
    if (puVar8 == (undefined1 *)0x0) {
      FUN_00555e30(iVar4,puVar5);
      FUN_00555e30(iVar4,puVar7);
    }
    else {
      if (puVar7 != (undefined1 *)0x0) {
        *(undefined1 **)(puVar8 + 0xc) = puVar7;
        *(ushort *)(puVar8 + 2) = *(ushort *)(puVar8 + 2) | *(ushort *)(puVar7 + 2) & 0x100;
      }
      if (puVar5 != (undefined1 *)0x0) {
        *(undefined1 **)(puVar8 + 8) = puVar5;
        *(ushort *)(puVar8 + 2) = *(ushort *)(puVar8 + 2) | *(ushort *)(puVar5 + 2) & 0x100;
      }
      FUN_00536750(puVar8);
      if (*(int *)(*param_1 + 0x5c) < *(int *)(puVar8 + 0x14)) {
        FUN_00553950(param_1,"Expression tree is too large (maximum depth %d)",
                     *(int *)(*param_1 + 0x5c));
      }
    }
    uVar9 = FUN_00553d70(local_c,local_8,puVar8);
    local_8 = uVar9;
  }
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  _local_48 = CONCAT44(param_2,param_1);
  FUN_005640a0(&local_48,uVar9);
  iVar4 = FUN_005788a0(param_1,param_2,uVar9,0,0,0,0);
  if ((0 < param_8) && ((char)param_5[6] == '\0')) {
    if ((int *)param_1[0x6c] != (int *)0x0) {
      param_1 = (int *)param_1[0x6c];
    }
    *(undefined1 *)(param_1 + 6) = 1;
  }
  bVar1 = *(byte *)(param_5 + 6);
  iVar3 = *(int *)(local_18 + 0x1c);
  if ((iVar3 < *(int *)(local_18 + 0x20)) || (iVar10 = FUN_0053b4b0(local_18), iVar10 == 0)) {
    *(int *)(local_18 + 0x1c) = *(int *)(local_18 + 0x1c) + 1;
    iVar10 = *(int *)(local_18 + 4);
    *(undefined2 *)(iVar10 + iVar3 * 0x14) = 0x75;
    *(undefined1 *)(iVar10 + 3 + iVar3 * 0x14) = 0;
    *(uint *)(iVar10 + 4 + iVar3 * 0x14) = (uint)bVar1;
    *(int *)(iVar10 + 8 + iVar3 * 0x14) = param_8;
    *(undefined4 *)(iVar10 + 0xc + iVar3 * 0x14) = 0;
    *(undefined4 *)(iVar10 + 0x10 + iVar3 * 0x14) = 0;
  }
  if (iVar4 != 0) {
    FUN_005794a0(iVar4);
  }
  FUN_00555e30(local_c,local_8);
  if (((local_14 != 0) && (-1 < (int)local_14)) && (local_14 < *(uint *)(local_18 + 0x1c))) {
    *(uint *)(*(int *)(local_18 + 4) + 8 + local_14 * 0x14) = *(uint *)(local_18 + 0x1c);
  }
  return;
}


/* FUN_00538be0 @ 00538be0  kind=lib  attributed-by=lib-island  size=88 */

void FUN_00538be0(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0x1c);
    FUN_00555e30(param_1,*(undefined4 *)(iVar1 + 0x14));
    FUN_00556700(param_1,*(undefined4 *)(iVar1 + 0x18));
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar1 != 0) {
      FUN_005303a0(param_1,iVar1);
      FUN_005521a0(param_1,iVar1);
    }
    FUN_00555e30(param_1,*(undefined4 *)(param_2 + 0xc));
    FUN_005521a0(param_1,param_2);
  }
  return;
}


/* FUN_00538c40 @ 00538c40  kind=lib  attributed-by=lib-island  size=399 */

undefined4 FUN_00538c40(int *param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  int *_Dst;
  int iVar4;
  byte *pbVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  byte *pbVar8;
  int iVar9;
  
  iVar9 = 0;
  ppuVar6 = &PTR_s_full_column_names_00713148;
  while( true ) {
    pbVar8 = *ppuVar6;
    bVar2 = *param_2;
    pbVar5 = param_2;
    while ((bVar2 != 0 && ((&DAT_007120d8)[bVar2] == (&DAT_007120d8)[*pbVar8]))) {
      pbVar1 = pbVar5 + 1;
      pbVar5 = pbVar5 + 1;
      pbVar8 = pbVar8 + 1;
      bVar2 = *pbVar1;
    }
    if ((&DAT_007120d8)[*pbVar5] == (&DAT_007120d8)[*pbVar8]) break;
    iVar9 = iVar9 + 1;
    ppuVar6 = ppuVar6 + 2;
    if (0xd < iVar9) {
      return 0;
    }
  }
  _Dst = (int *)param_1[2];
  iVar9 = *param_1;
  if (_Dst == (int *)0x0) {
    _Dst = (int *)FUN_00552230(iVar9,0xc0);
    if (_Dst == (int *)0x0) {
      _Dst = (int *)0x0;
    }
    else {
      memset(_Dst,0,0xc0);
      *_Dst = iVar9;
      if (*(int *)(iVar9 + 4) != 0) {
        *(int **)(*(int *)(iVar9 + 4) + 0x38) = _Dst;
      }
      _Dst[0xf] = *(int *)(iVar9 + 4);
      _Dst[0xe] = 0;
      *(int **)(iVar9 + 4) = _Dst;
      _Dst[0xc] = 0x26bceaa5;
    }
    param_1[2] = (int)_Dst;
    if (_Dst == (int *)0x0) {
      return 1;
    }
    FUN_0056bdc0(_Dst,0x94);
  }
  if (param_3 != 0) {
    puVar7 = ppuVar6[1];
    if (*(char *)(iVar9 + 0x36) == '\0') {
      puVar7 = (undefined *)((uint)puVar7 & 0xfffbffff);
    }
    cVar3 = FUN_0053b110(param_3,1,0);
    if (cVar3 == '\0') {
      *(uint *)(iVar9 + 0x18) = *(uint *)(iVar9 + 0x18) & ~(uint)puVar7;
    }
    else {
      *(uint *)(iVar9 + 0x18) = *(uint *)(iVar9 + 0x18) | (uint)puVar7;
    }
    iVar9 = _Dst[7];
    if ((iVar9 < _Dst[8]) || (iVar4 = FUN_0053b4b0(_Dst), iVar4 == 0)) {
      iVar4 = _Dst[1];
      _Dst[7] = _Dst[7] + 1;
      *(undefined2 *)(iVar4 + iVar9 * 0x14) = 0x81;
      *(undefined1 *)(iVar4 + 3 + iVar9 * 0x14) = 0;
      *(undefined4 *)(iVar4 + 4 + iVar9 * 0x14) = 0;
      *(undefined4 *)(iVar4 + 8 + iVar9 * 0x14) = 0;
      *(undefined4 *)(iVar4 + 0xc + iVar9 * 0x14) = 0;
      *(undefined4 *)(iVar4 + 0x10 + iVar9 * 0x14) = 0;
    }
    return 1;
  }
  FUN_00546df0(param_1,*ppuVar6,(*(uint *)(iVar9 + 0x18) & (uint)ppuVar6[1]) != 0,0);
  return 1;
}


/* FUN_00538dd0 @ 00538dd0  kind=lib  attributed-by=lib-island  size=1350 */

undefined4 FUN_00538dd0(int *param_1,undefined4 *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  short *psVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  short *psVar7;
  int iVar8;
  undefined4 uVar9;
  ushort uVar10;
  int iVar11;
  int iVar12;
  short *psVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 *local_20;
  int local_18;
  int local_14;
  
  iVar1 = *param_1;
  iVar12 = param_1[0x81];
  if ((*(byte *)(iVar1 + 0x34) & 1) != 0) {
    return 0;
  }
  psVar2 = (short *)param_2[10];
  uVar3 = *(undefined4 *)(psVar2 + param_3 * 0x24 + 0x1a);
  puVar4 = *(undefined4 **)(psVar2 + param_3 * 0x24 + 0xe);
  if (param_4 == 0) {
    if ((param_5 != 0) && (1 < *psVar2)) {
      return 0;
    }
  }
  else if (param_5 != 0) {
    return 0;
  }
  iVar11 = puVar4[0x12];
  if (((((((iVar11 != 0) && (param_2[0x12] != 0)) || (puVar4[0x13] != 0)) ||
        ((param_2[0x11] != 0 && (iVar11 != 0)))) ||
       ((*(short *)puVar4[10] == 0 || ((*(byte *)((int)puVar4 + 6) & 1) != 0)))) ||
      ((iVar11 != 0 && ((1 < *psVar2 || (param_4 != 0)))))) ||
     ((((uVar10 = *(ushort *)((int)param_2 + 6) & 1, uVar10 != 0 && (param_5 != 0)) ||
       ((param_2[0xe] != 0 && (puVar4[0xe] != 0)))) ||
      (((param_4 != 0 && (puVar4[0xe] != 0)) ||
       (((iVar11 != 0 && ((param_2[0xb] != 0 || ((iVar11 != 0 && (uVar10 != 0)))))) ||
        ((*(byte *)(psVar2 + param_3 * 0x24 + 0x14) & 0x20) != 0)))))))) {
    return 0;
  }
  if (puVar4[0xf] != 0) {
    if (puVar4[0xe] != 0) {
      return 0;
    }
    if (param_4 != 0) {
      return 0;
    }
    if (uVar10 != 0) {
      return 0;
    }
    puVar14 = puVar4;
    if (*psVar2 != 1) {
      return 0;
    }
    do {
      if ((*(byte *)((int)puVar14 + 6) & 5) != 0) {
        return 0;
      }
      puVar15 = (undefined4 *)puVar14[0xf];
      if ((puVar15 != (undefined4 *)0x0) && (*(char *)(puVar14 + 1) != 'q')) {
        return 0;
      }
      if (*(short *)puVar14[10] < 1) {
        return 0;
      }
      if (*(int *)*puVar4 != *(int *)*puVar14) {
        return 0;
      }
      puVar14 = puVar15;
    } while (puVar15 != (undefined4 *)0x0);
    piVar5 = (int *)param_2[0xe];
    if ((piVar5 != (int *)0x0) && (0 < *piVar5)) {
      psVar7 = (short *)(piVar5[2] + 0xe);
      iVar11 = 0;
      do {
        if (*psVar7 == 0) {
          return 0;
        }
        iVar11 = iVar11 + 1;
        psVar7 = psVar7 + 10;
      } while (iVar11 < *piVar5);
    }
  }
  param_1[0x81] = *(int *)(psVar2 + param_3 * 0x24 + 8);
  FUN_0054ab50(param_1,0x15,0,0,0);
  param_1[0x81] = iVar12;
  for (iVar12 = puVar4[0xf]; iVar12 != 0; iVar12 = *(int *)(iVar12 + 0x3c)) {
    iVar11 = param_2[0xf];
    uVar9 = param_2[0xe];
    uVar6 = param_2[0x12];
    param_2[0xe] = 0;
    param_2[10] = 0;
    param_2[0xf] = 0;
    param_2[0x12] = 0;
    iVar8 = FUN_00566d40(iVar1,param_2,0);
    param_2[0x12] = uVar6;
    param_2[0xe] = uVar9;
    param_2[10] = psVar2;
    *(undefined1 *)(param_2 + 1) = 0x71;
    param_2[0x11] = 0;
    if (iVar8 != 0) {
      *(int *)(iVar8 + 0x3c) = iVar11;
      *(undefined4 *)(iVar8 + 0x44) = 0;
      iVar11 = iVar8;
    }
    param_2[0xf] = iVar11;
    if (*(char *)(iVar1 + 0x38) != '\0') {
      return 1;
    }
  }
  puVar4 = *(undefined4 **)(psVar2 + param_3 * 0x24 + 0xe);
  FUN_005521a0(iVar1,*(undefined4 *)(psVar2 + param_3 * 0x24 + 6));
  FUN_005521a0(iVar1,*(undefined4 *)(psVar2 + param_3 * 0x24 + 8));
  FUN_005521a0(iVar1,*(undefined4 *)(psVar2 + param_3 * 0x24 + 10));
  iVar12 = *(int *)(psVar2 + param_3 * 0x24 + 0xc);
  (psVar2 + param_3 * 0x24 + 6)[0] = 0;
  (psVar2 + param_3 * 0x24 + 6)[1] = 0;
  (psVar2 + param_3 * 0x24 + 8)[0] = 0;
  (psVar2 + param_3 * 0x24 + 8)[1] = 0;
  (psVar2 + param_3 * 0x24 + 10)[0] = 0;
  (psVar2 + param_3 * 0x24 + 10)[1] = 0;
  (psVar2 + param_3 * 0x24 + 0xe)[0] = 0;
  (psVar2 + param_3 * 0x24 + 0xe)[1] = 0;
  local_20 = puVar4;
  if (iVar12 != 0) {
    if (*(short *)(iVar12 + 0x28) == 1) {
      if ((int *)param_1[0x6c] != (int *)0x0) {
        param_1 = (int *)param_1[0x6c];
      }
      *(int *)(iVar12 + 0x44) = param_1[0x89];
      param_1[0x89] = iVar12;
    }
    else {
      *(short *)(iVar12 + 0x28) = *(short *)(iVar12 + 0x28) + -1;
    }
    (psVar2 + param_3 * 0x24 + 0xc)[0] = 0;
    (psVar2 + param_3 * 0x24 + 0xc)[1] = 0;
  }
  do {
    psVar7 = (short *)local_20[10];
    local_18 = param_2[10];
    local_14 = (int)*psVar7;
    param_1._3_1_ = 0;
    if (local_18 == 0) {
      local_18 = FUN_00567180(iVar1,0,0,0);
      param_2[10] = local_18;
      if (local_18 == 0) break;
    }
    else {
      param_1._3_1_ = (undefined1)psVar2[param_3 * 0x24 + 0x14];
    }
    if (1 < local_14) {
      local_18 = FUN_00567680(iVar1,local_18,local_14 + -1,param_3 + 1);
      param_2[10] = local_18;
      if (*(char *)(iVar1 + 0x38) != '\0') break;
    }
    if (0 < local_14) {
      psVar7 = psVar7 + 4;
      puVar14 = (undefined4 *)(param_3 * 0x48 + 8 + local_18);
      do {
        FUN_0055afc0(iVar1,puVar14[0xd]);
        psVar13 = psVar7;
        puVar15 = puVar14;
        for (iVar12 = 0x12; iVar12 != 0; iVar12 = iVar12 + -1) {
          *puVar15 = *(undefined4 *)psVar13;
          psVar13 = psVar13 + 2;
          puVar15 = puVar15 + 1;
        }
        memset(psVar7,0,0x48);
        puVar14 = puVar14 + 0x12;
        psVar7 = psVar7 + 0x24;
        local_14 = local_14 + -1;
      } while (local_14 != 0);
    }
    *(undefined1 *)(param_3 * 0x48 + 0x28 + local_18) = param_1._3_1_;
    piVar5 = (int *)*param_2;
    param_1 = (int *)0x0;
    if (0 < *piVar5) {
      iVar12 = 0;
      do {
        if (*(int *)(iVar12 + 4 + piVar5[2]) == 0) {
          uVar9 = FUN_00552450(iVar1,*(undefined4 *)(iVar12 + 8 + piVar5[2]));
          FUN_00552be0(uVar9);
          *(undefined4 *)(iVar12 + 4 + piVar5[2]) = uVar9;
        }
        param_1 = (int *)((int)param_1 + 1);
        iVar12 = iVar12 + 0x14;
      } while ((int)param_1 < *piVar5);
    }
    FUN_0057ab40(iVar1,*param_2,uVar3,*local_20);
    if (param_4 != 0) {
      FUN_0057ab40(iVar1,param_2[0xc],uVar3,*local_20);
      uVar9 = FUN_0057aa80(iVar1,param_2[0xd],uVar3,*local_20);
      param_2[0xd] = uVar9;
    }
    if (local_20[0xe] == 0) {
      if (param_2[0xe] != 0) {
        FUN_0057ab40(iVar1,param_2[0xe],uVar3,*local_20);
      }
    }
    else {
      param_2[0xe] = local_20[0xe];
      local_20[0xe] = 0;
    }
    if (local_20[0xb] == 0) {
      param_1 = (int *)0x0;
    }
    else {
      param_1 = (int *)FUN_00536250(iVar1,local_20[0xb],0,0);
    }
    if (param_5 == 0) {
      uVar9 = FUN_0057aa80(iVar1,param_2[0xb],uVar3,*local_20);
      param_2[0xb] = uVar9;
      uVar9 = FUN_00553d70(iVar1,uVar9,param_1);
      param_2[0xb] = uVar9;
    }
    else {
      uVar9 = param_2[0xb];
      param_2[0xd] = uVar9;
      param_2[0xb] = param_1;
      uVar9 = FUN_0057aa80(iVar1,uVar9,uVar3,*local_20);
      param_2[0xd] = uVar9;
      uVar9 = FUN_00536250(iVar1,local_20[0xd],0,0);
      uVar9 = FUN_00553d70(iVar1,param_2[0xd],uVar9);
      param_2[0xd] = uVar9;
      uVar9 = FUN_005567e0(iVar1,local_20[0xc],0);
      param_2[0xc] = uVar9;
    }
    *(ushort *)((int)param_2 + 6) =
         *(ushort *)((int)param_2 + 6) | *(ushort *)((int)local_20 + 6) & 1;
    if (local_20[0x12] != 0) {
      param_2[0x12] = local_20[0x12];
      local_20[0x12] = 0;
    }
    param_2 = (undefined4 *)param_2[0xf];
    local_20 = (undefined4 *)local_20[0xf];
  } while (param_2 != (undefined4 *)0x0);
  FUN_00566d10(iVar1,puVar4);
  return 1;
}


/* FUN_00539320 @ 00539320  kind=lib  attributed-by=lib-island  size=228 */

void FUN_00539320(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  
  if (param_3 != (int *)0x0) {
    switch(param_2) {
    case 0xfffffff0:
    case 0xfffffff1:
    case 0xfffffff3:
    case 0xfffffff4:
    case 0xfffffffa:
    case 0xffffffff:
switchD_00539346_caseD_fffffff0:
      FUN_005521a0(param_1,param_3);
      return;
    case 0xfffffff2:
    case 0xfffffff7:
    case 0xfffffffc:
    case 0xfffffffd:
    case 0xfffffffe:
      break;
    case 0xfffffff5:
      if (*(int *)(param_1 + 0x1f0) == 0) {
        FUN_00524410(param_3);
        return;
      }
      break;
    case 0xfffffff6:
      if (*(int *)(param_1 + 0x1f0) == 0) {
        FUN_005776a0(param_3);
      }
      break;
    case 0xfffffff8:
      if (*(int *)(param_1 + 0x1f0) != 0) {
        FUN_005521a0(param_1,param_3[9]);
        FUN_005521a0(param_1,param_3);
        return;
      }
      FUN_0056b910(param_3);
      return;
    case 0xfffffff9:
      iVar1 = *param_3;
      if ((iVar1 != 0) && ((*(byte *)(iVar1 + 3) & 4) != 0)) {
        FUN_005521a0(param_1,iVar1);
      }
      if (*(int *)(param_1 + 0x1f0) == 0) {
        FUN_0056c910(param_3,0);
      }
      FUN_005521a0(param_1,param_3);
      return;
    case 0xfffffffb:
      if ((*param_3 & 0x4000000) != 0) goto switchD_00539346_caseD_fffffff0;
      break;
    default:
      goto switchD_00539346_default;
    }
  }
switchD_00539346_default:
  return;
}


/* FUN_00539430 @ 00539430  kind=lib  attributed-by=lib-island  size=35 */

void FUN_00539430(int param_1,int *param_2)

{
  int iVar1;
  
  if (*param_2 == 0) {
    iVar1 = FUN_00539460(*(undefined4 *)(param_1 + 0x34),param_1,*(undefined4 *)(param_1 + 0x48));
    *param_2 = iVar1;
  }
  return;
}


/* FUN_00539460 @ 00539460  kind=lib  attributed-by=lib-island  size=786 */

uint FUN_00539460(undefined1 *param_1,undefined1 *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 local_10;
  int local_8;
  
  iVar4 = (int)param_1;
  iVar1 = *(int *)((int)param_1 + 0xc);
  local_8 = 0;
  local_10 = 0;
  if (param_2 == (undefined1 *)0x0) {
    puVar6 = (undefined1 *)FUN_0052ed40(param_1,param_3);
  }
  else {
    *(short *)(*(int *)(param_2 + 0x44) + 0x1a) = *(short *)(*(int *)(param_2 + 0x44) + 0x1a) + 1;
    puVar6 = param_2;
  }
  param_1 = puVar6;
  param_2 = (undefined1 *)FUN_00560330(*(undefined4 *)(iVar1 + 0x44));
  uVar7 = (uint)param_2;
  if (param_2 == (undefined1 *)0x0) {
    iVar2 = *(int *)(iVar1 + 0x38);
    iVar8 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar2 + 0x24),*(undefined1 *)(iVar2 + 0x25)),
                              *(undefined1 *)(iVar2 + 0x26)),*(undefined1 *)(iVar2 + 0x27));
    iVar9 = iVar8 + 1;
    *(char *)(iVar2 + 0x24) = (char)((uint)iVar9 >> 0x18);
    *(char *)(iVar2 + 0x25) = (char)((uint)iVar9 >> 0x10);
    *(char *)(iVar2 + 0x26) = (char)((uint)iVar9 >> 8);
    *(char *)(iVar2 + 0x27) = (char)iVar9;
    if ((*(byte *)(iVar4 + 0x16) & 4) != 0) {
      if (((puVar6 == (undefined1 *)0x0) &&
          (uVar7 = FUN_0052e950(iVar4,param_3,&param_1,0), puVar6 = param_1, uVar7 != 0)) ||
         (param_2 = (undefined1 *)FUN_00560330(*(undefined4 *)(puVar6 + 0x44)),
         uVar7 = (uint)param_2, param_2 != (undefined1 *)0x0)) goto LAB_00539706;
      memset(*(void **)(puVar6 + 0x38),0,*(size_t *)(*(int *)(puVar6 + 0x34) + 0x20));
    }
    if ((*(char *)(iVar4 + 0x11) == '\0') ||
       (FUN_00544760(iVar4,param_3,2,0,&param_2), uVar7 = (uint)param_2,
       param_2 == (undefined1 *)0x0)) {
      if (iVar8 != 0) {
        iVar2 = *(int *)(iVar1 + 0x38);
        local_10 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar2 + 0x20),
                                              *(undefined1 *)(iVar2 + 0x21)),
                                     *(undefined1 *)(iVar2 + 0x22)),*(undefined1 *)(iVar2 + 0x23));
        uVar7 = FUN_0052e950(iVar4,local_10,&local_8,0);
        if (uVar7 != 0) goto LAB_00539706;
        iVar2 = *(int *)(local_8 + 0x38);
        uVar7 = *(uint *)(iVar4 + 0x24) >> 2;
        param_2 = (undefined1 *)
                  CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar2 + 4),*(undefined1 *)(iVar2 + 5)),
                                    *(undefined1 *)(iVar2 + 6)),*(undefined1 *)(iVar2 + 7));
        if (uVar7 - 2 < param_2) {
          uVar7 = FUN_00551190(0xd110);
          goto LAB_00539706;
        }
        if (param_2 < uVar7 - 8) {
          uVar7 = FUN_00560330(*(undefined4 *)(local_8 + 0x44));
          uVar5 = (uint)param_2;
          if (uVar7 == 0) {
            FUN_00563650(*(int *)(local_8 + 0x38) + 4,(int)param_2 + 1);
            FUN_00563650(*(int *)(local_8 + 0x38) + uVar5 * 4 + 8,param_3);
            if ((puVar6 != (undefined1 *)0x0) && ((*(byte *)(iVar4 + 0x16) & 4) == 0)) {
              iVar1 = *(int *)(puVar6 + 0x44);
              if (((*(ushort *)(iVar1 + 0x18) & 2) != 0) &&
                 (*(int *)(*(int *)(iVar1 + 0x10) + 0x60) == 0)) {
                *(ushort *)(iVar1 + 0x18) = *(ushort *)(iVar1 + 0x18) | 0x20;
              }
            }
            uVar7 = FUN_0052ef30(iVar4,param_3);
          }
          goto LAB_00539706;
        }
      }
      if (((puVar6 != (undefined1 *)0x0) ||
          (uVar7 = FUN_0052e950(iVar4,param_3,&param_1,0), puVar6 = param_1, uVar7 == 0)) &&
         (uVar7 = FUN_00560330(*(undefined4 *)(puVar6 + 0x44)), uVar7 == 0)) {
        puVar3 = *(undefined1 **)(puVar6 + 0x38);
        *puVar3 = (char)((uint)local_10 >> 0x18);
        puVar3[1] = (char)((uint)local_10 >> 0x10);
        puVar3[3] = (char)local_10;
        puVar3[2] = (char)((uint)local_10 >> 8);
        *(undefined4 *)(*(int *)(puVar6 + 0x38) + 4) = 0;
        iVar1 = *(int *)(iVar1 + 0x38);
        *(char *)(iVar1 + 0x20) = (char)((uint)param_3 >> 0x18);
        *(char *)(iVar1 + 0x21) = (char)((uint)param_3 >> 0x10);
        *(char *)(iVar1 + 0x22) = (char)((uint)param_3 >> 8);
        *(char *)(iVar1 + 0x23) = (char)param_3;
      }
    }
  }
LAB_00539706:
  if (puVar6 != (undefined1 *)0x0) {
    *puVar6 = 0;
    iVar1 = *(int *)(puVar6 + 0x44);
    if (iVar1 != 0) {
      iVar4 = *(int *)(iVar1 + 0x10);
      FUN_00561130(iVar1);
      if (*(int *)(*(int *)(iVar4 + 0xb4) + 0xc) == 0) {
        FUN_00541a10(iVar4);
      }
    }
  }
  if ((local_8 != 0) && (iVar1 = *(int *)(local_8 + 0x44), iVar1 != 0)) {
    iVar4 = *(int *)(iVar1 + 0x10);
    FUN_00561130(iVar1);
    if (*(int *)(*(int *)(iVar4 + 0xb4) + 0xc) == 0) {
      FUN_00541a10(iVar4);
    }
  }
  return uVar7;
}


/* FUN_00539780 @ 00539780  kind=lib  attributed-by=lib-island  size=593 */

undefined4 FUN_00539780(int param_1,int param_2,size_t param_3)

{
  byte bVar1;
  undefined1 uVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 *puVar10;
  uint uVar11;
  undefined1 *puVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint local_c;
  
  iVar6 = *(int *)(param_1 + 0x38);
  if ((*(byte *)(*(int *)(param_1 + 0x34) + 0x16) & 4) != 0) {
    memset((void *)(param_2 + iVar6),0,param_3);
  }
  uVar9 = (uint)*(byte *)(param_1 + 5);
  uVar11 = uVar9 + 1;
  uVar7 = CONCAT11(*(undefined1 *)(uVar11 + iVar6),*(undefined1 *)(uVar9 + 2 + iVar6));
  uVar14 = uVar11;
  while ((uVar8 = (uint)uVar7, uVar15 = uVar8, (int)uVar8 < param_2 && (uVar15 = 0, uVar8 != 0))) {
    if (uVar8 < uVar14 + 4) {
      FUN_00525a30(0xb,"database corruption at line %d of [%.10s]",0xc1ba,
                   "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
      return 0xb;
    }
    uVar14 = uVar8;
    uVar7 = CONCAT11(*(undefined1 *)(uVar8 + iVar6),*(undefined1 *)(uVar8 + 1 + iVar6));
  }
  if ((int)uVar15 <= *(int *)(*(int *)(param_1 + 0x34) + 0x24) + -4) {
    *(char *)(uVar14 + iVar6) = (char)((uint)param_2 >> 8);
    *(char *)(uVar14 + 1 + iVar6) = (char)param_2;
    *(char *)(iVar6 + 1 + param_2) = (char)uVar15;
    *(char *)(iVar6 + param_2) = (char)(uVar15 >> 8);
    *(char *)(iVar6 + 2 + param_2) = (char)(param_3 >> 8);
    *(char *)(iVar6 + 3 + param_2) = (char)param_3;
    *(short *)(param_1 + 0xe) = *(short *)(param_1 + 0xe) + (short)param_3;
    uVar7 = CONCAT11(*(undefined1 *)(uVar11 + iVar6),*(undefined1 *)(uVar9 + 2 + iVar6));
    do {
      local_c = (uint)uVar7;
      if (local_c == 0) {
        cVar3 = *(char *)(uVar9 + 1 + iVar6);
        cVar4 = *(char *)(uVar9 + 5 + iVar6);
        if (cVar3 == cVar4) {
          bVar1 = *(byte *)(uVar9 + 2 + iVar6);
          bVar5 = *(byte *)(uVar9 + 6 + iVar6);
          if (bVar1 == bVar5) {
            uVar11 = (uint)CONCAT11(cVar3,bVar1);
            *(undefined2 *)(uVar9 + 1 + iVar6) = *(undefined2 *)(uVar11 + iVar6);
            iVar13 = (uint)CONCAT11(*(undefined1 *)(uVar11 + 2 + iVar6),
                                    *(undefined1 *)(uVar11 + 3 + iVar6)) +
                     ((CONCAT11(bVar5,cVar4) & 0xff) << 8 | (uint)bVar5);
            *(char *)(uVar9 + 5 + iVar6) = (char)((uint)iVar13 >> 8);
            *(char *)(uVar9 + 6 + iVar6) = (char)iVar13;
          }
        }
        return 0;
      }
      uVar15 = (uint)CONCAT11(*(undefined1 *)(local_c + iVar6),*(undefined1 *)(iVar6 + 1 + local_c))
      ;
      puVar10 = (undefined1 *)(iVar6 + 2 + local_c);
      puVar12 = (undefined1 *)(iVar6 + 3 + local_c);
      uVar14 = (uint)CONCAT11(*puVar10,*puVar12);
      if ((uVar15 <= local_c + 3 + uVar14) && (uVar15 != 0)) {
        iVar13 = (uVar15 - uVar14) - local_c;
        if ((iVar13 < 0) || (bVar1 = *(byte *)(uVar9 + 7 + iVar6), (int)(uint)bVar1 < iVar13)) {
          FUN_00525a30(0xb,"database corruption at line %d of [%.10s]",0xc1d2,
                       "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
          return 0xb;
        }
        *(byte *)(uVar9 + 7 + iVar6) = bVar1 - (char)iVar13;
        uVar2 = *(undefined1 *)(uVar15 + iVar6);
        *(undefined1 *)(iVar6 + 1 + local_c) = *(undefined1 *)(iVar6 + 1 + uVar15);
        *(undefined1 *)(local_c + iVar6) = uVar2;
        iVar13 = (CONCAT11(*(undefined1 *)(iVar6 + 2 + uVar15),*(undefined1 *)(iVar6 + 3 + uVar15))
                 - local_c) + uVar15;
        *puVar10 = (char)((uint)iVar13 >> 8);
        *puVar12 = (char)iVar13;
        local_c = uVar11;
      }
      uVar7 = CONCAT11(*(undefined1 *)(local_c + iVar6),*(undefined1 *)(iVar6 + 1 + local_c));
      uVar11 = local_c;
    } while( true );
  }
  FUN_00525a30(0xb,"database corruption at line %d of [%.10s]",0xc1bf,
               "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
  return 0xb;
}


/* FUN_005399e0 @ 005399e0  kind=lib  attributed-by=lib-island  size=28 */

void FUN_005399e0(int param_1)

{
  FUN_00544190(*(undefined4 *)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0x50) = 0;
  return;
}


/* FUN_00539a00 @ 00539a00  kind=lib  attributed-by=lib-island  size=41 */

void FUN_00539a00(undefined4 param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 0x20);
  if ((piVar1 != (int *)0x0) && (*piVar1 = *piVar1 + -1, *piVar1 == 0)) {
    (*(code *)piVar1[1])(piVar1[2]);
    FUN_005521a0(param_1,piVar1);
  }
  return;
}


/* FUN_00539a30 @ 00539a30  kind=lib  attributed-by=lib-island  size=132 */

int FUN_00539a30(int param_1,int param_2,byte *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  iVar1 = *(int *)(param_1 + param_2 * 4);
  do {
    if (iVar1 == 0) {
      return 0;
    }
    pbVar3 = *(byte **)(iVar1 + 0x18);
    iVar2 = param_4;
    pbVar4 = param_3;
    while (0 < iVar2) {
      if ((*pbVar3 == 0) || ((&DAT_007120d8)[*pbVar3] != (&DAT_007120d8)[*pbVar4])) break;
      pbVar3 = pbVar3 + 1;
      pbVar4 = pbVar4 + 1;
      iVar2 = iVar2 + -1;
    }
    if (((iVar2 + -1 < 0) || ((&DAT_007120d8)[*pbVar3] == (&DAT_007120d8)[*pbVar4])) &&
       (*(char *)(*(int *)(iVar1 + 0x18) + param_4) == '\0')) {
      return iVar1;
    }
    iVar1 = *(int *)(iVar1 + 0x1c);
  } while( true );
}


/* FUN_00539ac0 @ 00539ac0  kind=lib  attributed-by=lib-island  size=420 */

void FUN_00539ac0(int *param_1,short *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  code *pcVar13;
  int local_10;
  
  iVar1 = *param_1;
  iVar2 = param_1[2];
  if (((((char)param_1[0x75] == '\0') && ((char)param_1[4] == '\0')) && (iVar2 != 0)) &&
     (*(char *)(iVar1 + 0x38) == '\0')) {
    *(undefined1 *)(param_1 + 4) = 1;
    uVar3 = *(uint *)(iVar1 + 0x18);
    uVar5 = uVar3 >> 2 & 1;
    FUN_005762b0(iVar2,*param_3);
    iVar12 = 0;
    if (0 < *param_3) {
      local_10 = 0;
      do {
        puVar10 = (undefined4 *)(param_3[2] + local_10);
        pcVar7 = (char *)*puVar10;
        if (pcVar7 != (char *)0x0) {
          iVar6 = puVar10[1];
          if (iVar6 == 0) {
            if (((*pcVar7 == -0x68) || (*pcVar7 == -0x66)) && (param_2 != (short *)0x0)) {
              iVar11 = (int)*(short *)(pcVar7 + 0x1c);
              iVar6 = 0;
              if (0 < *param_2) {
                piVar9 = (int *)(param_2 + 0x1a);
                do {
                  if (*piVar9 == *(int *)(pcVar7 + 0x18)) break;
                  iVar6 = iVar6 + 1;
                  piVar9 = piVar9 + 0x12;
                } while (iVar6 < *param_2);
              }
              puVar4 = *(undefined4 **)(param_2 + iVar6 * 0x24 + 0xc);
              if ((iVar11 < 0) && (iVar11 = (int)*(short *)(puVar4 + 9), iVar11 < 0)) {
                pcVar7 = "rowid";
              }
              else {
                pcVar7 = *(char **)(puVar4[1] + iVar11 * 0x18);
              }
              if ((uVar3 >> 3 & 1) == 0) {
                if (uVar5 == 0) {
                  uVar8 = puVar10[2];
                  goto LAB_00539c26;
                }
              }
              else if (uVar5 == 0) {
                FUN_00576270(iVar2,iVar12,0,pcVar7,0xffffffff);
                goto LAB_00539c3c;
              }
              uVar8 = FUN_0055d980(iVar1,"%s.%s",*puVar4,pcVar7);
              FUN_00576270(iVar2,iVar12,0,uVar8,FUN_0055dc20);
              goto LAB_00539c3c;
            }
            uVar8 = puVar10[2];
LAB_00539c26:
            pcVar13 = FUN_0055dc20;
            iVar6 = FUN_00552450(iVar1,uVar8,FUN_0055dc20);
          }
          else {
            pcVar13 = (code *)0xffffffff;
          }
          FUN_00576270(iVar2,iVar12,0,iVar6,pcVar13);
        }
LAB_00539c3c:
        iVar12 = iVar12 + 1;
        local_10 = local_10 + 0x14;
      } while (iVar12 < *param_3);
    }
    FUN_00539c70(param_1,param_2,param_3);
  }
  return;
}


/* FUN_00539c70 @ 00539c70  kind=lib  attributed-by=lib-island  size=297 */

void FUN_00539c70(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  void *_Src;
  int iVar4;
  int iVar5;
  int local_28;
  undefined4 local_24;
  int local_8;
  
  local_24 = param_2;
  piVar2 = *(int **)(param_1 + 8);
  local_28 = param_1;
  param_2 = 0;
  if (0 < *param_3) {
    local_8 = 0;
    do {
      _Src = (void *)FUN_00532740(&local_28,*(undefined4 *)(local_8 + param_3[2]),0,0,0);
      if (*(char *)(*piVar2 + 0x38) == '\0') {
        piVar1 = (int *)(piVar2[4] + ((uint)*(ushort *)(piVar2 + 0xb) + param_2) * 0x28);
        if (_Src == (void *)0x0) {
          if ((*(byte *)(piVar1 + 7) & 0x40) != 0) {
            piVar3 = (int *)piVar1[4];
            piVar3[1] = *(int *)(*piVar3 + 0xa4);
            *(int **)(*piVar3 + 0xa4) = piVar3;
          }
          if ((*(byte *)(piVar1 + 7) & 0x20) != 0) {
            FUN_005644e0(piVar1[4]);
          }
          *(ushort *)(piVar1 + 7) = *(ushort *)(piVar1 + 7) & 0xbe01 | 1;
          *(undefined1 *)((int)piVar1 + 0x1e) = 5;
        }
        else {
          if (*piVar1 == 0) {
            iVar4 = 1000000000;
          }
          else {
            iVar4 = *(int *)(*piVar1 + 0x50);
          }
          iVar5 = 0;
          if (-1 < iVar4) {
            do {
              if (*(char *)(iVar5 + (int)_Src) == '\0') break;
              iVar5 = iVar5 + 1;
            } while (iVar5 <= iVar4);
          }
          if ((iVar5 <= iVar4) && (iVar4 = FUN_005748c0(piVar1,iVar5 + 1,0), iVar4 == 0)) {
            memcpy((void *)piVar1[1],_Src,iVar5 + 1);
            piVar1[6] = iVar5;
            piVar1[7] = 0x1030202;
          }
        }
      }
      param_2 = param_2 + 1;
      local_8 = local_8 + 0x14;
    } while (param_2 < *param_3);
  }
  return;
}


/* FUN_00539da0 @ 00539da0  kind=lib  attributed-by=lib-island  size=823 */

undefined4
FUN_00539da0(int *param_1,int *param_2,int param_3,undefined1 *param_4,undefined4 param_5,
            int param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  
  iVar1 = param_1[2];
  uVar2 = *(undefined4 *)(iVar1 + 0x1c);
  iVar5 = FUN_005741e0(iVar1);
  if (param_6 != 0) {
    uVar6 = FUN_0056be30(iVar1,0x1c,param_6);
    iVar7 = FUN_0056bf50(iVar1,0x18,*(undefined4 *)(param_3 + 8),param_6 + 1,
                         *(undefined4 *)(param_3 + 0xc),param_7,param_8);
    iVar3 = *(int *)(iVar1 + 0x1c);
    if ((iVar3 < *(int *)(iVar1 + 0x20)) || (iVar8 = FUN_0053b4b0(iVar1), iVar8 == 0)) {
      *(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x1c) + 1;
      iVar8 = *(int *)(iVar1 + 4);
      *(undefined2 *)(iVar8 + iVar3 * 0x14) = 0x19;
      iVar8 = iVar8 + iVar3 * 0x14;
      *(undefined1 *)(iVar8 + 3) = 0;
      *(int *)(iVar8 + 4) = iVar7 + 2;
      *(int *)(iVar8 + 8) = iVar5;
      *(int *)(iVar8 + 0xc) = iVar7 + 2;
      *(undefined4 *)(iVar8 + 0x10) = 0;
    }
    if ((-1 < (int)uVar6) && (uVar6 < *(uint *)(iVar1 + 0x1c))) {
      *(uint *)(*(int *)(iVar1 + 4) + 8 + uVar6 * 0x14) = *(uint *)(iVar1 + 0x1c);
    }
    iVar3 = *(int *)(param_3 + 0xc);
    uVar10 = *(undefined4 *)(param_3 + 8);
    iVar7 = *(int *)(iVar1 + 0x1c);
    if ((iVar7 < *(int *)(iVar1 + 0x20)) || (iVar8 = FUN_0053b4b0(iVar1), iVar8 == 0)) {
      *(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x1c) + 1;
      iVar8 = *(int *)(iVar1 + 4);
      *(undefined4 *)(iVar8 + 4 + iVar7 * 0x14) = uVar10;
      *(int *)(iVar8 + 8 + iVar7 * 0x14) = param_6 + 1;
      *(undefined2 *)(iVar8 + iVar7 * 0x14) = 0xe;
      *(undefined1 *)(iVar8 + 3 + iVar7 * 0x14) = 0;
      *(int *)(iVar8 + 0xc + iVar7 * 0x14) = iVar3 + -1;
      *(undefined4 *)(iVar8 + 0x10 + iVar7 * 0x14) = 0;
    }
    iVar3 = *(int *)(iVar1 + 0x1c);
    if ((iVar3 < *(int *)(iVar1 + 0x20)) || (iVar7 = FUN_0053b4b0(iVar1), iVar7 == 0)) {
      *(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x1c) + 1;
      iVar7 = *(int *)(iVar1 + 4);
      *(undefined2 *)(iVar7 + iVar3 * 0x14) = 7;
      *(undefined1 *)(iVar7 + 3 + iVar3 * 0x14) = 0;
      *(undefined4 *)(iVar7 + 4 + iVar3 * 0x14) = 1;
      *(int *)(iVar7 + 8 + iVar3 * 0x14) = param_6;
      *(undefined4 *)(iVar7 + 0xc + iVar3 * 0x14) = 0;
      *(undefined4 *)(iVar7 + 0x10 + iVar3 * 0x14) = 0;
    }
  }
  if (*(char *)(*param_1 + 0x38) == '\0') {
    FUN_00530f00(iVar1,param_2,iVar5);
    switch(*param_4) {
    case 6:
      FUN_00554ca0(param_1,*(undefined4 *)(param_3 + 8),*(undefined4 *)(param_4 + 4),1);
      break;
    case 7:
      uVar4 = FUN_00550df0(**(undefined4 **)(*param_2 + 8),param_4[1]);
      param_4[1] = uVar4;
      uVar10 = FUN_0055a1f0(param_1);
      FUN_0056bf50(iVar1,0x1f,*(undefined4 *)(param_3 + 8),1,uVar10,param_4 + 1,1);
      FUN_00554430(param_1,*(undefined4 *)(param_3 + 8),1);
      FUN_0056be90(iVar1,0x61,*(undefined4 *)(param_4 + 4),uVar10);
      FUN_00563fb0(param_1,uVar10);
      break;
    case 8:
    case 9:
      uVar11 = FUN_0055a1f0(param_1);
      uVar10 = (undefined4)uVar11;
      uVar9 = FUN_0055a1f0((int)((ulonglong)uVar11 >> 0x20));
      FUN_0056bef0(iVar1,0x1f,*(undefined4 *)(param_3 + 8),*(undefined4 *)(param_3 + 0xc),uVar10);
      FUN_0056be90(iVar1,0x38,*(undefined4 *)(param_4 + 4),uVar9);
      FUN_0056bef0(iVar1,0x39,*(undefined4 *)(param_4 + 4),uVar10,uVar9);
      if (*(int *)(iVar1 + 4) != 0) {
        *(undefined1 *)(*(int *)(iVar1 + 4) + -0x11 + *(int *)(iVar1 + 0x1c) * 0x14) = 8;
      }
      FUN_00563fb0(param_1,uVar9);
      FUN_00563fb0(param_1,uVar10);
      break;
    case 10:
      if (*(int *)(param_4 + 8) == 0) {
        uVar10 = FUN_0055a1b0(param_1,*(undefined4 *)(param_3 + 0xc));
        *(undefined4 *)(param_4 + 8) = uVar10;
        *(undefined4 *)(param_4 + 0xc) = *(undefined4 *)(param_3 + 0xc);
      }
      FUN_00554ca0(param_1,*(undefined4 *)(param_3 + 8),*(undefined4 *)(param_4 + 8),
                   *(undefined4 *)(param_4 + 0xc));
      FUN_0056be30(iVar1,4,*(undefined4 *)(param_4 + 4));
      break;
    default:
      FUN_0056be90(iVar1,0x10,*(undefined4 *)(param_3 + 8),*(undefined4 *)(param_3 + 0xc));
      FUN_00554430(param_1,*(undefined4 *)(param_3 + 8),*(undefined4 *)(param_3 + 0xc));
    }
    if (param_2[2] != 0) {
      FUN_0056bef0(iVar1,0x7a,param_2[2],param_9,0xffffffff);
    }
    if (*(int *)(iVar1 + 0x28) != 0) {
      *(undefined4 *)(*(int *)(iVar1 + 0x28) - (iVar5 * 4 + 4)) = *(undefined4 *)(iVar1 + 0x1c);
    }
    FUN_0056be30(iVar1,3,param_5);
    return uVar2;
  }
  return 0;
}


/* FUN_0053a0f0 @ 0053a0f0  kind=lib  attributed-by=lib-island  size=1439 */

void FUN_0053a0f0(int param_1,int param_2,int param_3,int param_4,char *param_5)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int local_20;
  int local_14;
  
  iVar6 = param_3;
  iVar8 = FUN_005741e0(param_3);
  iVar9 = FUN_005741e0(param_3);
  piVar2 = *(int **)(param_2 + 0x38);
  cVar1 = *param_5;
  uVar3 = *(undefined4 *)(param_5 + 4);
  iVar4 = piVar2[1];
  local_14 = 0;
  if (*(char *)(param_1 + 0x13) == '\0') {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
    iVar13 = *(int *)(param_1 + 0x4c);
  }
  else {
    bVar7 = *(char *)(param_1 + 0x13) - 1;
    *(byte *)(param_1 + 0x13) = bVar7;
    iVar13 = *(int *)(param_1 + 0x1c + (uint)bVar7 * 4);
  }
  if ((cVar1 == '\x05') || (cVar1 == '\n')) {
    local_14 = *(int *)(param_1 + 0x48);
    *(int *)(param_1 + 0x48) = local_14 + 1;
    iVar14 = *(int *)(param_3 + 0x1c);
    if ((iVar14 < *(int *)(param_3 + 0x20)) || (iVar12 = FUN_0053b4b0(param_3), iVar12 == 0)) {
      *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
      iVar12 = *(int *)(param_3 + 4);
      *(int *)(iVar12 + 4 + iVar14 * 0x14) = local_14;
      *(undefined2 *)(iVar12 + iVar14 * 0x14) = 0x2c;
      *(undefined1 *)(iVar12 + 3 + iVar14 * 0x14) = 0;
      *(int *)(iVar12 + 8 + iVar14 * 0x14) = iVar13;
      *(int *)(iVar12 + 0xc + iVar14 * 0x14) = param_4;
      *(undefined4 *)(iVar12 + 0x10 + iVar14 * 0x14) = 0;
    }
    param_3 = 0;
  }
  else if (*(char *)(param_1 + 0x13) == '\0') {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
    param_3 = *(int *)(param_1 + 0x4c);
  }
  else {
    bVar7 = *(char *)(param_1 + 0x13) - 1;
    *(byte *)(param_1 + 0x13) = bVar7;
    param_3 = *(int *)(param_1 + 0x1c + (uint)bVar7 * 4);
  }
  if ((*(byte *)(param_2 + 6) & 0x40) == 0) {
    local_20 = FUN_0056be90(iVar6,0x47,iVar4,iVar8);
    local_20 = local_20 + 1;
    FUN_00530f00(iVar6,param_2,iVar9);
    iVar14 = *piVar2;
    iVar12 = *(int *)(iVar6 + 0x1c);
    if ((iVar12 < *(int *)(iVar6 + 0x20)) || (iVar11 = FUN_0053b4b0(iVar6), iVar11 == 0)) {
      *(int *)(iVar6 + 0x1c) = *(int *)(iVar6 + 0x1c) + 1;
      iVar11 = *(int *)(iVar6 + 4);
      *(int *)(iVar11 + 4 + iVar12 * 0x14) = iVar4;
      *(undefined2 *)(iVar11 + iVar12 * 0x14) = 0x1d;
      *(undefined1 *)(iVar11 + 3 + iVar12 * 0x14) = 0;
      *(int *)(iVar11 + 8 + iVar12 * 0x14) = iVar14 + 1;
      *(int *)(iVar11 + 0xc + iVar12 * 0x14) = iVar13;
      *(undefined4 *)(iVar11 + 0x10 + iVar12 * 0x14) = 0;
    }
  }
  else {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
    uVar5 = *(undefined4 *)(param_1 + 0x4c);
    iVar14 = *(int *)(param_1 + 0x48);
    *(int *)(param_1 + 0x48) = iVar14 + 1;
    iVar12 = *piVar2;
    iVar11 = *(int *)(iVar6 + 0x1c);
    if ((iVar11 < *(int *)(iVar6 + 0x20)) || (iVar10 = FUN_0053b4b0(iVar6), iVar10 == 0)) {
      *(int *)(iVar6 + 0x1c) = *(int *)(iVar6 + 0x1c) + 1;
      iVar10 = *(int *)(iVar6 + 4);
      *(int *)(iVar10 + 4 + iVar11 * 0x14) = iVar14;
      *(undefined4 *)(iVar10 + 8 + iVar11 * 0x14) = uVar5;
      *(undefined2 *)(iVar10 + iVar11 * 0x14) = 0x2c;
      *(undefined1 *)(iVar10 + 3 + iVar11 * 0x14) = 0;
      *(int *)(iVar10 + 0xc + iVar11 * 0x14) = iVar12 + 2;
      *(undefined4 *)(iVar10 + 0x10 + iVar11 * 0x14) = 0;
    }
    local_20 = FUN_0056be90(iVar6,0x46,iVar4,iVar8);
    local_20 = local_20 + 1;
    FUN_00530f00(iVar6,param_2,iVar9);
    FUN_0056be90(iVar6,0x3e,iVar4,uVar5);
    iVar12 = *piVar2;
    iVar11 = *(int *)(iVar6 + 0x1c);
    if ((iVar11 < *(int *)(iVar6 + 0x20)) || (iVar10 = FUN_0053b4b0(iVar6), iVar10 == 0)) {
      *(int *)(iVar6 + 0x1c) = *(int *)(iVar6 + 0x1c) + 1;
      iVar10 = *(int *)(iVar6 + 4);
      *(int *)(iVar10 + 4 + iVar11 * 0x14) = iVar14;
      *(undefined2 *)(iVar10 + iVar11 * 0x14) = 0x1d;
      *(undefined1 *)(iVar10 + 3 + iVar11 * 0x14) = 0;
      *(int *)(iVar10 + 8 + iVar11 * 0x14) = iVar12 + 1;
      *(int *)(iVar10 + 0xc + iVar11 * 0x14) = iVar13;
      *(undefined4 *)(iVar10 + 0x10 + iVar11 * 0x14) = 0;
    }
    if (*(int *)(iVar6 + 4) != 0) {
      *(undefined1 *)(*(int *)(iVar6 + 4) + -0x11 + *(int *)(iVar6 + 0x1c) * 0x14) = 0x20;
    }
  }
  switch(cVar1) {
  case '\x06':
    FUN_00554ca0(param_1,iVar13,uVar3,1);
    break;
  case '\a':
    FUN_0056bf50(iVar6,0x1f,iVar13,1,param_3,param_5 + 1,1);
    FUN_00554430(param_1,iVar13,1);
    FUN_0056be90(iVar6,0x61,uVar3,param_3);
    break;
  case '\b':
  case '\t':
    FUN_0056be90(iVar6,0x38,uVar3,param_3);
    FUN_0056bef0(iVar6,0x39,uVar3,iVar13,param_3);
    if (*(int *)(iVar6 + 4) != 0) {
      *(undefined1 *)(*(int *)(iVar6 + 4) + -0x11 + *(int *)(iVar6 + 0x1c) * 0x14) = 8;
    }
    break;
  default:
    iVar14 = 0;
    if (0 < param_4) {
      do {
        iVar12 = *(int *)(param_5 + 8);
        iVar11 = *(int *)(iVar6 + 0x1c);
        if ((iVar11 < *(int *)(iVar6 + 0x20)) || (iVar10 = FUN_0053b4b0(iVar6), iVar10 == 0)) {
          *(int *)(iVar6 + 0x1c) = *(int *)(iVar6 + 0x1c) + 1;
          iVar10 = *(int *)(iVar6 + 4);
          *(int *)(iVar10 + 4 + iVar11 * 0x14) = local_14;
          *(undefined2 *)(iVar10 + iVar11 * 0x14) = 0x1d;
          *(undefined1 *)(iVar10 + 3 + iVar11 * 0x14) = 0;
          *(int *)(iVar10 + 8 + iVar11 * 0x14) = iVar14;
          *(int *)(iVar10 + 0xc + iVar11 * 0x14) = iVar12 + iVar14;
          *(undefined4 *)(iVar10 + 0x10 + iVar11 * 0x14) = 0;
        }
        if ((iVar14 == 0) && (*(int *)(iVar6 + 4) != 0)) {
          *(undefined1 *)(*(int *)(iVar6 + 4) + -0x11 + *(int *)(iVar6 + 0x1c) * 0x14) = 0x20;
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 < param_4);
    }
    iVar14 = *(int *)(iVar6 + 0x1c);
    if (cVar1 == '\x05') {
      uVar3 = *(undefined4 *)(param_5 + 8);
      if ((iVar14 < *(int *)(iVar6 + 0x20)) || (iVar12 = FUN_0053b4b0(iVar6), iVar12 == 0)) {
        iVar12 = *(int *)(iVar6 + 4);
        *(int *)(iVar6 + 0x1c) = *(int *)(iVar6 + 0x1c) + 1;
        *(undefined4 *)(iVar12 + 4 + iVar14 * 0x14) = uVar3;
        *(undefined2 *)(iVar12 + iVar14 * 0x14) = 0x10;
        *(undefined1 *)(iVar12 + 3 + iVar14 * 0x14) = 0;
        *(int *)(iVar12 + 8 + iVar14 * 0x14) = param_4;
        *(undefined4 *)(iVar12 + 0xc + iVar14 * 0x14) = 0;
        *(undefined4 *)(iVar12 + 0x10 + iVar14 * 0x14) = 0;
      }
      FUN_00554430(param_1,*(undefined4 *)(param_5 + 8),param_4);
    }
    else {
      uVar3 = *(undefined4 *)(param_5 + 4);
      if ((iVar14 < *(int *)(iVar6 + 0x20)) || (iVar12 = FUN_0053b4b0(iVar6), iVar12 == 0)) {
        iVar12 = *(int *)(iVar6 + 4);
        *(int *)(iVar6 + 0x1c) = *(int *)(iVar6 + 0x1c) + 1;
        *(undefined2 *)(iVar12 + iVar14 * 0x14) = 4;
        *(undefined1 *)(iVar12 + 3 + iVar14 * 0x14) = 0;
        *(undefined4 *)(iVar12 + 4 + iVar14 * 0x14) = uVar3;
        *(undefined4 *)(iVar12 + 8 + iVar14 * 0x14) = 0;
        *(undefined4 *)(iVar12 + 0xc + iVar14 * 0x14) = 0;
        *(undefined4 *)(iVar12 + 0x10 + iVar14 * 0x14) = 0;
      }
    }
  }
  if ((iVar13 != 0) && (*(byte *)(param_1 + 0x13) < 8)) {
    iVar14 = param_1 + 100;
    iVar12 = 0;
    do {
      if (*(int *)(iVar14 + 0x10) == iVar13) {
        *(undefined1 *)(iVar14 + 8) = 1;
        goto LAB_0053a55e;
      }
      iVar12 = iVar12 + 1;
      iVar14 = iVar14 + 0x18;
    } while (iVar12 < 10);
    *(int *)(param_1 + 0x1c + (uint)*(byte *)(param_1 + 0x13) * 4) = iVar13;
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
  }
LAB_0053a55e:
  if ((param_3 != 0) && (*(byte *)(param_1 + 0x13) < 8)) {
    iVar14 = 0;
    iVar13 = param_1 + 100;
    do {
      if (*(int *)(iVar13 + 0x10) == param_3) {
        *(undefined1 *)(iVar13 + 8) = 1;
        goto LAB_0053a590;
      }
      iVar14 = iVar14 + 1;
      iVar13 = iVar13 + 0x18;
    } while (iVar14 < 10);
    *(int *)(param_1 + 0x1c + (uint)*(byte *)(param_1 + 0x13) * 4) = param_3;
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
  }
LAB_0053a590:
  if (*(int *)(iVar6 + 0x28) != 0) {
    *(undefined4 *)(*(int *)(iVar6 + 0x28) - (iVar9 * 4 + 4)) = *(undefined4 *)(iVar6 + 0x1c);
  }
  iVar9 = *(int *)(iVar6 + 0x1c);
  if ((*(byte *)(param_2 + 6) & 0x40) == 0) {
    if ((*(int *)(iVar6 + 0x20) <= iVar9) && (iVar13 = FUN_0053b4b0(iVar6), iVar13 != 0))
    goto LAB_0053a61b;
    iVar13 = *(int *)(iVar6 + 4);
    *(int *)(iVar6 + 0x1c) = *(int *)(iVar6 + 0x1c) + 1;
    *(undefined2 *)(iVar13 + iVar9 * 0x14) = 0x5f;
  }
  else {
    if ((*(int *)(iVar6 + 0x20) <= iVar9) && (iVar13 = FUN_0053b4b0(iVar6), iVar13 != 0))
    goto LAB_0053a61b;
    iVar13 = *(int *)(iVar6 + 4);
    *(int *)(iVar6 + 0x1c) = *(int *)(iVar6 + 0x1c) + 1;
    *(undefined2 *)(iVar13 + iVar9 * 0x14) = 0x51;
  }
  *(int *)(iVar13 + 4 + iVar9 * 0x14) = iVar4;
  *(undefined4 *)(iVar13 + 0x10 + iVar9 * 0x14) = 0;
  *(undefined4 *)(iVar13 + 0xc + iVar9 * 0x14) = 0;
  *(int *)(iVar13 + 8 + iVar9 * 0x14) = local_20;
  *(undefined1 *)(iVar13 + 3 + iVar9 * 0x14) = 0;
LAB_0053a61b:
  if (*(int *)(iVar6 + 0x28) != 0) {
    *(undefined4 *)(*(int *)(iVar6 + 0x28) - (iVar8 * 4 + 4)) = *(undefined4 *)(iVar6 + 0x1c);
  }
  if (((cVar1 == '\x05') || (cVar1 == '\n')) &&
     ((iVar4 = *(int *)(iVar6 + 0x1c), iVar4 < *(int *)(iVar6 + 0x20) ||
      (iVar8 = FUN_0053b4b0(iVar6), iVar8 == 0)))) {
    iVar8 = *(int *)(iVar6 + 4);
    *(int *)(iVar6 + 0x1c) = *(int *)(iVar6 + 0x1c) + 1;
    *(undefined2 *)(iVar8 + iVar4 * 0x14) = 0x2d;
    *(undefined1 *)(iVar8 + 3 + iVar4 * 0x14) = 0;
    *(int *)(iVar8 + 4 + iVar4 * 0x14) = local_14;
    *(undefined4 *)(iVar8 + 8 + iVar4 * 0x14) = 0;
    *(undefined4 *)(iVar8 + 0xc + iVar4 * 0x14) = 0;
    *(undefined4 *)(iVar8 + 0x10 + iVar4 * 0x14) = 0;
  }
  return;
}


/* FUN_0053a6a0 @ 0053a6a0  kind=lib  attributed-by=lib-island  size=141 */

int FUN_0053a6a0(undefined4 *param_1,uint param_2,int *param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  uVar1 = param_2;
  if ((uint)param_1[0xb] < param_2) {
    FUN_00525a30(0xb,"database corruption at line %d of [%.10s]",0xc300,
                 "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
    return 0xb;
  }
  iVar3 = FUN_0055eb70(*param_1,param_2,&param_2,0);
  piVar2 = param_3;
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_2 + 8);
    *(undefined4 *)(iVar3 + 0x38) = *(undefined4 *)(param_2 + 4);
    *(undefined4 **)(iVar3 + 0x34) = param_1;
    *(uint *)(iVar3 + 0x44) = param_2;
    *(uint *)(iVar3 + 0x48) = uVar1;
    *(byte *)(iVar3 + 5) = (uVar1 != 1) - 1U & 100;
    *param_3 = iVar3;
    iVar3 = FUN_0052e9b0(iVar3);
    if (iVar3 != 0) {
      FUN_00545740(*piVar2);
    }
  }
  return iVar3;
}


/* FUN_0053a730 @ 0053a730  kind=lib  attributed-by=lib-island  size=171 */

uint FUN_0053a730(byte *param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  pbVar3 = param_1;
  pbVar7 = &DAT_00703530;
  bVar2 = *param_1;
  pbVar6 = param_1;
  while ((bVar2 != 0 && ((&DAT_007120d8)[bVar2] == (&DAT_007120d8)[*pbVar7]))) {
    pbVar1 = pbVar6 + 1;
    pbVar6 = pbVar6 + 1;
    pbVar7 = pbVar7 + 1;
    bVar2 = *pbVar1;
  }
  if ((&DAT_007120d8)[*pbVar6] == (&DAT_007120d8)[*pbVar7]) {
    return 0;
  }
  iVar4 = FUN_0057a2c0(param_1,&DAT_00718a34);
  if (iVar4 == 0) {
    return 1;
  }
  iVar4 = FUN_0057a2c0(pbVar3,"incremental");
  if (iVar4 == 0) {
    return 2;
  }
  param_1 = (byte *)0x0;
  FUN_0055a0e0(pbVar3,&param_1);
  uVar5 = 0;
  if (param_1 < 3) {
    uVar5 = (uint)param_1;
  }
  return uVar5 & 0xff;
}


/* FUN_0053a7f0 @ 0053a7f0  kind=lib  attributed-by=lib-island  size=81 */

void FUN_0053a7f0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(short *)(param_1 + 0x42) == 0) {
    iVar1 = *(int *)(param_1 + 0x88 + *(short *)(param_1 + 0x5e) * 4);
    uVar2 = (uint)*(ushort *)(param_1 + 0x60 + *(short *)(param_1 + 0x5e) * 2);
    FUN_0052eda0(iVar1,(uint)(CONCAT11(*(undefined1 *)(*(int *)(iVar1 + 0x40) + uVar2 * 2),
                                       *(undefined1 *)(*(int *)(iVar1 + 0x40) + 1 + uVar2 * 2)) &
                             *(ushort *)(iVar1 + 0x12)) + *(int *)(iVar1 + 0x38),param_1 + 0x28);
    *(undefined1 *)(param_1 + 0x5a) = 1;
  }
  return;
}


/* FUN_0053aa70 @ 0053aa70  kind=lib  attributed-by=lib-island  size=64 */

undefined4 FUN_0053aa70(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = FUN_0057a2c0(param_1,"exclusive");
    if (iVar1 == 0) {
      return 1;
    }
    iVar1 = FUN_0057a2c0(param_1,"normal");
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 0xffffffff;
}


/* FUN_0053aab0 @ 0053aab0  kind=lib  attributed-by=lib-island  size=66 */

undefined8 FUN_0053aab0(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = 0;
  iVar1 = *param_1;
  if (0 < iVar1) {
    do {
      param_1 = param_1 + 1;
      if (*param_1 == param_2) {
        uVar3 = 1 << (uVar2 & 0x1f);
        uVar4 = 0;
        if (0x1f < uVar2) {
          uVar4 = uVar3;
        }
        uVar3 = uVar3 ^ uVar4;
        if (0x3f < uVar2) {
          uVar4 = uVar3;
        }
        return CONCAT44(uVar4,uVar3);
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < iVar1);
  }
  return 0;
}


/* FUN_0053ab00 @ 0053ab00  kind=lib  attributed-by=lib-island  size=356 */

int FUN_0053ab00(undefined4 *param_1,uint param_2,int *param_3,uint *param_4)

{
  uint *puVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  uint local_8;
  
  puVar4 = param_1;
  if (*(char *)((int)param_1 + 0x11) == '\0') {
LAB_0053aba5:
    iVar5 = FUN_0055eb70(*puVar4,param_2,&param_1,0);
    if (iVar5 == 0) {
      iVar8 = param_1[2];
      *(undefined4 *)(iVar8 + 0x38) = param_1[1];
      *(uint *)(iVar8 + 0x48) = param_2;
      *(undefined4 **)(iVar8 + 0x44) = param_1;
      puVar2 = *(undefined1 **)(iVar8 + 0x38);
      *(byte *)(iVar8 + 5) = (param_2 != 1) - 1U & 100;
      *(undefined4 **)(iVar8 + 0x34) = puVar4;
      uVar7 = CONCAT31(CONCAT21(CONCAT11(*puVar2,puVar2[1]),puVar2[2]),puVar2[3]);
      goto LAB_0053ac08;
    }
LAB_0053ac04:
    uVar7 = 0;
  }
  else {
    puVar6 = (undefined4 *)(param_2 - 1);
    uVar7 = param_2;
    while( true ) {
      uVar7 = uVar7 + 1;
      if (uVar7 < 2) {
        uVar9 = 0;
      }
      else {
        uVar9 = (uint)param_1[9] / 5 + 1;
        iVar5 = ((uint)puVar6 / uVar9) * uVar9;
        uVar9 = iVar5 + 2;
        if (uVar9 == DAT_007666d0 / (uint)param_1[8] + 1) {
          uVar9 = iVar5 + 3;
        }
      }
      if ((uVar9 != uVar7) && (uVar7 != DAT_007666d0 / (uint)param_1[8] + 1)) break;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    puVar1 = param_1 + 0xb;
    param_1 = puVar6;
    if (*puVar1 < uVar7) goto LAB_0053aba5;
    iVar5 = FUN_005445e0(puVar4,uVar7,(int)&param_1 + 3,&local_8);
    if (iVar5 != 0) goto LAB_0053ac04;
    bVar10 = param_1._3_1_ != '\x04';
    if ((bVar10) || (local_8 != param_2)) goto LAB_0053aba5;
    iVar5 = 0x65;
  }
  iVar8 = 0;
LAB_0053ac08:
  *param_4 = uVar7;
  if (param_3 == (int *)0x0) {
    if ((iVar8 != 0) && (iVar8 = *(int *)(iVar8 + 0x44), iVar8 != 0)) {
      iVar3 = *(int *)(iVar8 + 0x10);
      FUN_00561130(iVar8);
      if (*(int *)(*(int *)(iVar3 + 0xb4) + 0xc) == 0) {
        FUN_00541a10(iVar3);
      }
    }
    if (iVar5 == 0x65) {
      iVar5 = 0;
    }
    return iVar5;
  }
  *param_3 = iVar8;
  if (iVar5 == 0x65) {
    iVar5 = 0;
  }
  return iVar5;
}


/* FUN_0053ad90 @ 0053ad90  kind=lib  attributed-by=lib-island  size=887 */

int * FUN_0053ad90(int *param_1,int *param_2,int param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  ulonglong local_44 [4];
  int local_24;
  int local_20;
  int *local_1c;
  int local_18;
  int local_14;
  int *local_10;
  int *local_c;
  int local_8;
  
  piVar2 = (int *)param_1[0x6c];
  piVar3 = param_1;
  if (piVar2 != (int *)0x0) {
    piVar3 = piVar2;
  }
  piVar3 = (int *)piVar3[0x8a];
  while( true ) {
    if (piVar3 == (int *)0x0) {
      iVar6 = *param_1;
      local_c = param_1;
      if (piVar2 != (int *)0x0) {
        local_c = piVar2;
      }
      local_18 = 0;
      local_8 = iVar6;
      piVar2 = (int *)FUN_00552230(iVar6,0x18);
      if (piVar2 != (int *)0x0) {
        piVar2[0] = 0;
        piVar2[1] = 0;
        piVar2[2] = 0;
        piVar2[3] = 0;
        piVar2[4] = 0;
        piVar2[5] = 0;
        piVar2[1] = local_c[0x8a];
        local_c[0x8a] = (int)piVar2;
        local_1c = piVar2;
        piVar3 = (int *)FUN_00552230(iVar6,0x1c);
        if (piVar3 != (int *)0x0) {
          piVar3[0] = 0;
          piVar3[1] = 0;
          piVar3[2] = 0;
          piVar3[3] = 0;
          piVar3[4] = 0;
          piVar3[5] = 0;
          piVar3[6] = 0;
        }
        piVar2[2] = (int)piVar3;
        if (piVar3 != (int *)0x0) {
          iVar6 = local_c[2];
          piVar3[6] = *(int *)(iVar6 + 0xb0);
          *(int **)(iVar6 + 0xb0) = piVar3;
          *piVar2 = (int)param_2;
          piVar2[3] = param_4;
          piVar2[4] = -1;
          piVar2[5] = -1;
          piVar2 = (int *)FUN_00552230(local_8,0x230);
          if (piVar2 != (int *)0x0) {
            memset(piVar2,0,0x230);
            local_44[1] = 0;
            local_44[2] = 0;
            local_44[3] = 0;
            local_44[0] = ZEXT48(piVar2);
            piVar4 = (int *)piVar2[2];
            piVar2[0x6d] = param_3;
            piVar2[0x6c] = (int)local_c;
            *piVar2 = local_8;
            piVar2[0x81] = *param_2;
            *(char *)(piVar2 + 0x72) = (char)param_2[2];
            *(undefined8 *)(piVar2 + 0x6e) = *(undefined8 *)(param_1 + 0x6e);
            local_10 = piVar4;
            if (piVar4 == (int *)0x0) {
              piVar4 = (int *)FUN_0056c7b0(local_8);
              piVar1 = local_1c;
              piVar2[2] = (int)piVar4;
              local_10 = piVar4;
              if (piVar4 == (int *)0x0) {
                FUN_005521a0(local_8,piVar2);
                return piVar1;
              }
              FUN_0056bdc0(piVar4,0x94);
            }
            local_24 = FUN_0055d980(local_8,"-- TRIGGER %s",*param_2);
            local_14 = piVar4[1];
            iVar6 = *piVar4;
            if ((local_14 == 0) || (*(char *)(iVar6 + 0x38) != '\0')) {
              FUN_00539320(iVar6,0xffffffff,local_24);
            }
            else {
              iVar5 = piVar4[7] + -1;
              local_20 = iVar5 * 5;
              FUN_00539320(iVar6,(int)*(char *)(local_14 + 1 + iVar5 * 0x14),
                           *(undefined4 *)(local_14 + 0x10 + iVar5 * 0x14));
              *(undefined4 *)(local_14 + 0x10 + local_20 * 4) = 0;
              if (local_24 == 0) {
                *(undefined4 *)(local_14 + 0x10 + local_20 * 4) = 0;
                *(undefined1 *)(local_14 + 1 + local_20 * 4) = 0;
              }
              else {
                *(int *)(local_14 + 0x10 + local_20 * 4) = local_24;
                *(undefined1 *)(local_14 + 1 + local_20 * 4) = 0xff;
              }
            }
            if (param_2[3] != 0) {
              local_14 = FUN_00536250(local_8,param_2[3],0,0);
              iVar6 = FUN_005640a0(local_44,local_14);
              if ((iVar6 == 0) && (*(char *)(local_8 + 0x38) == '\0')) {
                local_18 = FUN_005741e0(piVar4);
                FUN_00555f40(piVar2,local_14,local_18,8);
              }
              FUN_00555e30(local_8,local_14);
            }
            FUN_00532390(piVar2,param_2[7],param_4);
            if ((local_18 != 0) && (piVar4[10] != 0)) {
              *(int *)(piVar4[10] - (local_18 * 4 + 4)) = piVar4[7];
            }
            FUN_0056bdc0(piVar4,6);
            if (param_1[0x11] == 0) {
              param_1[1] = piVar2[1];
              param_1[0x11] = piVar2[0x11];
            }
            else {
              FUN_005521a0(*piVar2,piVar2[1]);
            }
            if (*(char *)(local_8 + 0x38) == '\0') {
              iVar6 = piVar4[1];
              FUN_005469d0(local_10,local_c + 0x66);
              piVar3[1] = local_10[7];
              local_10[1] = 0;
              *piVar3 = iVar6;
              piVar4 = local_10;
            }
            piVar1 = local_1c;
            piVar3[2] = piVar2[0x13];
            piVar3[3] = piVar2[0x12];
            piVar3[4] = piVar2[0x15];
            piVar3[5] = (int)param_2;
            local_1c[4] = piVar2[0x70];
            local_1c[5] = piVar2[0x71];
            FUN_0056c8b0(piVar4);
            FUN_005521a0(local_8,piVar2);
            return piVar1;
          }
        }
      }
      return (int *)0x0;
    }
    if (((int *)*piVar3 == param_2) && (piVar3[3] == param_4)) break;
    piVar3 = (int *)piVar3[1];
  }
  return piVar3;
}


/* FUN_0053b110 @ 0053b110  kind=lib  attributed-by=lib-island  size=151 */

uint FUN_0053b110(byte *param_1,int param_2,byte param_3)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  pbVar3 = param_1;
  bVar1 = *param_1;
  pbVar2 = param_1;
  if (((&DAT_007121d8)[bVar1] & 4) != 0) {
    param_1 = (byte *)0x0;
    FUN_0055a0e0(pbVar3,&param_1);
    return (uint)param_1 & 0xff;
  }
  while (bVar1 != 0) {
    bVar1 = pbVar2[1];
    pbVar2 = pbVar2 + 1;
  }
  uVar5 = (int)pbVar2 - (int)param_1 & 0x3fffffff;
  iVar6 = 0;
  param_1 = (byte *)(7 - param_2);
  if (0 < 7 - param_2) {
    do {
      if (((byte)(&DAT_007130f0)[iVar6] == uVar5) &&
         (iVar4 = FUN_005259c0("onoffalseyestruefull" + (byte)(&DAT_007130e8)[iVar6],pbVar3,uVar5),
         iVar4 == 0)) {
        return (uint)(byte)(&DAT_007130f8)[iVar6];
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)param_1);
  }
  return (uint)param_3;
}


/* FUN_0053b4b0 @ 0053b4b0  kind=lib  attributed-by=lib-island  size=125 */

undefined4 FUN_0053b4b0(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  if (param_1[8] == 0) {
    iVar1 = 0x33;
  }
  else {
    iVar1 = param_1[8] * 2;
  }
  uVar2 = FUN_00552390(*param_1,param_1[1],iVar1 * 0x14);
  if (uVar2 != 0) {
    iVar1 = *param_1;
    if (((iVar1 == 0) || (uVar2 < *(uint *)(iVar1 + 0x104))) || (*(uint *)(iVar1 + 0x108) <= uVar2))
    {
      uVar4 = (*DAT_00766608._4_4_)(uVar2);
    }
    else {
      uVar4 = (uint)*(ushort *)(iVar1 + 0xe8);
    }
    param_1[8] = uVar4 / 0x14;
    param_1[1] = uVar2;
  }
  uVar3 = 7;
  if (uVar2 != 0) {
    uVar3 = 0;
  }
  return uVar3;
}


/* FUN_0053b530 @ 0053b530  kind=lib  attributed-by=lib-island  size=104 */

undefined4 FUN_0053b530(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x120) % 5 == 0) {
    iVar2 = FUN_00552390(param_1,*(undefined4 *)(param_1 + 0x138),
                         *(int *)(param_1 + 0x120) * 4 + 0x14);
    if (iVar2 == 0) {
      return 7;
    }
    iVar1 = *(int *)(param_1 + 0x120);
    *(undefined8 *)(iVar2 + iVar1 * 4) = 0;
    *(undefined8 *)(iVar2 + 8 + iVar1 * 4) = 0;
    *(undefined4 *)(iVar2 + 0x10 + iVar1 * 4) = 0;
    *(int *)(param_1 + 0x138) = iVar2;
  }
  return 0;
}


/* FUN_0053b5a0 @ 0053b5a0  kind=lib  attributed-by=lib-island  size=391 */

int FUN_0053b5a0(int *param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  int local_c;
  int local_8;
  
  piVar1 = param_1;
  iVar4 = *param_1;
  local_8 = 1;
  bVar5 = *(int *)param_1[0x10] == 0;
  *param_2 = 0;
  if (bVar5) {
    iVar2 = (**(code **)(iVar4 + 0x20))(iVar4,param_1[0x25],0,&local_8);
    if (iVar2 != 0) {
      return iVar2;
    }
    if (local_8 == 0) {
      return 0;
    }
  }
  local_c = 0;
  iVar2 = (**(code **)(*(int *)piVar1[0xf] + 0x24))((int *)piVar1[0xf],&local_c);
  if (((iVar2 == 0) && (local_c == 0)) && (iVar2 = FUN_00541470(piVar1,&param_1), iVar2 == 0)) {
    if (param_1 == (int *)0x0) {
      if (DAT_0076b3bc != (code *)0x0) {
        (*DAT_0076b3bc)();
      }
      iVar3 = FUN_00541340(piVar1,2);
      if ((iVar3 == 0) &&
         ((**(code **)(iVar4 + 0x1c))(iVar4,piVar1[0x25],0), (char)piVar1[1] == '\0')) {
        FUN_00541a70(piVar1,1);
      }
      if (DAT_0076b3c0 != (code *)0x0) {
        (*DAT_0076b3c0)();
        return 0;
      }
    }
    else {
      if (bVar5) {
        param_1 = (int *)0x801;
        iVar4 = (**(code **)(iVar4 + 0x18))(iVar4,piVar1[0x25],piVar1[0x10],0x801,&param_1);
        if (iVar4 != 0) {
          if (iVar4 != 0xe) {
            return iVar4;
          }
          *param_2 = 1;
          return 0;
        }
      }
      param_1 = (int *)((uint)param_1 & 0xffffff);
      iVar2 = (**(code **)(*(int *)piVar1[0x10] + 8))((int *)piVar1[0x10],(int)&param_1 + 3,1,0,0);
      if (iVar2 == 0x20a) {
        iVar2 = 0;
      }
      if (bVar5) {
        FUN_0055e900(piVar1[0x10]);
      }
      *param_2 = (uint)(param_1._3_1_ != '\0');
    }
  }
  return iVar2;
}


/* FUN_0053b730 @ 0053b730  kind=lib  attributed-by=lib-island  size=54 */

void FUN_0053b730(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((param_1 != (int *)0x0) && (iVar2 = 0, 0 < *param_1)) {
    iVar3 = 0;
    do {
      if ((*(int *)(iVar3 + param_1[2]) != 0) &&
         (iVar1 = *(int *)(*(int *)(iVar3 + param_1[2]) + 0x14), *param_2 < iVar1)) {
        *param_2 = iVar1;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x14;
    } while (iVar2 < *param_1);
  }
  return;
}


/* FUN_0053b770 @ 0053b770  kind=lib  attributed-by=lib-island  size=120 */

void FUN_0053b770(undefined4 *param_1,int *param_2)

{
  int iVar1;
  
  for (; param_1 != (undefined4 *)0x0; param_1 = (undefined4 *)param_1[0xf]) {
    if ((param_1[0xb] != 0) && (iVar1 = *(int *)(param_1[0xb] + 0x14), *param_2 < iVar1)) {
      *param_2 = iVar1;
    }
    if ((param_1[0xd] != 0) && (iVar1 = *(int *)(param_1[0xd] + 0x14), *param_2 < iVar1)) {
      *param_2 = iVar1;
    }
    if ((param_1[0x12] != 0) && (iVar1 = *(int *)(param_1[0x12] + 0x14), *param_2 < iVar1)) {
      *param_2 = iVar1;
    }
    if ((param_1[0x13] != 0) && (iVar1 = *(int *)(param_1[0x13] + 0x14), *param_2 < iVar1)) {
      *param_2 = iVar1;
    }
    FUN_0053b730(*param_1,param_2);
    FUN_0053b730(param_1[0xc],param_2);
    FUN_0053b730(param_1[0xe],param_2);
  }
  return;
}


/* FUN_0053b7f0 @ 0053b7f0  kind=lib  attributed-by=lib-island  size=166 */

void FUN_0053b7f0(int param_1,int *param_2,byte *param_3)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *param_2;
  iVar4 = 0;
  bVar3 = *param_3;
  while ((bVar3 != 0 && ((((&DAT_007121d8)[bVar3] & 6) != 0 || (bVar3 == 0x5f))))) {
    iVar2 = iVar4 + 1;
    iVar4 = iVar4 + 1;
    bVar3 = param_3[iVar2];
  }
  if ((((&DAT_007121d8)[*param_3] & 4) == 0) && (iVar2 = FUN_0053cd40(param_3,iVar4), iVar2 == 0x1a)
     ) {
    bVar3 = param_3[iVar4];
    if (bVar3 == 0) goto LAB_0053b862;
  }
  else {
    bVar3 = 1;
  }
  *(undefined1 *)(iVar5 + param_1) = 0x22;
  iVar5 = iVar5 + 1;
LAB_0053b862:
  bVar1 = *param_3;
  while (bVar1 != 0) {
    *(byte *)(iVar5 + param_1) = *param_3;
    iVar4 = iVar5 + 1;
    if (*param_3 == 0x22) {
      *(undefined1 *)(iVar4 + param_1) = 0x22;
      iVar4 = iVar5 + 2;
    }
    param_3 = param_3 + 1;
    iVar5 = iVar4;
    bVar1 = *param_3;
  }
  if (bVar3 != 0) {
    *(undefined1 *)(iVar5 + param_1) = 0x22;
    iVar5 = iVar5 + 1;
  }
  *(undefined1 *)(iVar5 + param_1) = 0;
  *param_2 = iVar5;
  return;
}


/* FUN_0053b8a0 @ 0053b8a0  kind=lib  attributed-by=lib-island  size=123 */

void FUN_0053b8a0(undefined4 *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  char *_Src;
  char *pcVar3;
  size_t _Size;
  void *_Dst;
  
  uVar2 = *param_1;
  FUN_005521a0(uVar2,param_1[0xd]);
  _Src = *(char **)(param_2 + 8);
  if (_Src == (char *)0x0) {
    _Dst = (void *)0x0;
  }
  else {
    cVar1 = *_Src;
    pcVar3 = _Src;
    while (cVar1 != '\0') {
      pcVar3 = pcVar3 + 1;
      cVar1 = *pcVar3;
    }
    _Size = ((int)pcVar3 - (int)_Src & 0x3fffffffU) + 1;
    _Dst = (void *)FUN_00552230(uVar2,_Size);
    if (_Dst != (void *)0x0) {
      memcpy(_Dst,_Src,_Size);
    }
  }
  param_1[0xd] = _Dst;
  FUN_00524410(*(undefined4 *)(param_2 + 8));
  *(undefined4 *)(param_2 + 8) = 0;
  return;
}


/* FUN_0053b940 @ 0053b940  kind=lib  attributed-by=lib-island  size=62 */

void FUN_0053b940(undefined4 param_1,int param_2)

{
  undefined8 local_18;
  undefined8 local_10;
  int local_8;
  
  if (0 < param_2) {
    local_8 = param_2;
    local_10 = 0;
    local_18 = 0x53b920;
    FUN_00578680(&local_18,param_1);
  }
  return;
}


/* FUN_0053b980 @ 0053b980  kind=lib  attributed-by=lib-island  size=1030 */

int FUN_0053b980(int *param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int local_18;
  undefined4 local_14;
  int local_10;
  undefined4 *local_c;
  uint local_8;
  
  uVar5 = param_3;
  if (param_3 < 2) {
    uVar3 = 0;
  }
  else {
    uVar3 = (uint)param_1[9] / 5 + 1;
    iVar2 = ((param_3 - 2) / uVar3) * uVar3;
    uVar3 = iVar2 + 2;
    if (uVar3 == DAT_007666d0 / (uint)param_1[8] + 1) {
      uVar3 = iVar2 + 3;
    }
  }
  if ((uVar3 != param_3) && (param_3 != DAT_007666d0 / (uint)param_1[8] + 1)) {
    iVar2 = *(int *)(param_1[3] + 0x38);
    if (CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar2 + 0x24),*(undefined1 *)(iVar2 + 0x25)),
                          *(undefined1 *)(iVar2 + 0x26)),*(undefined1 *)(iVar2 + 0x27)) == 0) {
      return 0x65;
    }
    iVar2 = FUN_005445e0(param_1,param_3,&local_8,&local_14);
    if (iVar2 != 0) {
      return iVar2;
    }
    if ((char)local_8 == '\x01') {
      iVar2 = FUN_00551190(0xc83e);
      return iVar2;
    }
    if ((char)local_8 == '\x02') {
      if (param_2 != (undefined4 *)0x0) {
        return 0;
      }
      iVar2 = FUN_00529110(param_1,&param_3,&local_18,uVar5,1);
      if (iVar2 != 0) {
        return iVar2;
      }
      FUN_00545740(param_3);
      goto LAB_0053bb25;
    }
    iVar2 = FUN_0052e950(param_1,uVar5,&param_3,0);
    if (iVar2 != 0) {
      return iVar2;
    }
    do {
      local_18 = FUN_00529110(param_1,&local_10,&local_c,0,0);
      if (local_18 != 0) {
        FUN_00545740(param_3);
        return local_18;
      }
      FUN_00545740(local_10);
    } while ((param_2 != (undefined4 *)0x0) && (param_2 < local_c));
    local_10 = FUN_00560330(*(undefined4 *)(param_3 + 0x44));
    if (local_10 == 0) {
      local_10 = FUN_00545a20(param_1,param_3,local_8,local_14,local_c,param_2 != (undefined4 *)0x0)
      ;
    }
    FUN_00545740(param_3);
    if (local_10 != 0) {
      return local_10;
    }
  }
  if (param_2 != (undefined4 *)0x0) {
    return 0;
  }
LAB_0053bb25:
  local_8 = uVar5 - 3;
  do {
    uVar5 = uVar5 - 1;
    param_3 = DAT_007666d0 / (uint)param_1[8] + 1;
    if (uVar5 != param_3) {
      if (uVar5 < 2) {
        uVar3 = 0;
      }
      else {
        uVar3 = (uint)param_1[9] / 5 + 1;
        iVar2 = (local_8 / uVar3) * uVar3;
        uVar3 = iVar2 + 2;
        if (uVar3 == param_3) {
          uVar3 = iVar2 + 3;
        }
      }
      if (uVar3 != uVar5) {
        *(uint *)(*param_1 + 0x18) = uVar5;
        param_1[0xb] = uVar5;
        return 0;
      }
    }
    if (uVar5 < 2) {
      uVar3 = 0;
    }
    else {
      uVar3 = (uint)param_1[9] / 5 + 1;
      iVar2 = (local_8 / uVar3) * uVar3;
      uVar3 = iVar2 + 2;
      if (uVar3 == param_3) {
        uVar3 = iVar2 + 3;
      }
    }
    if (uVar3 == uVar5) {
      iVar2 = *param_1;
      if (uVar5 == 0) {
        FUN_00525a30(0xb,"database corruption at line %d of [%.10s]",0xa57c,
                     "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
        return 0xb;
      }
      param_3 = *(int *)(iVar2 + 0x28);
      if ((param_3 == 0) &&
         (param_3 = FUN_00560e90(*(undefined4 *)(iVar2 + 0xb4),uVar5,1,&local_c), puVar4 = local_c,
         param_3 == 0)) {
        if (local_c[4] != 0) {
          *(int *)(iVar2 + 0xa0) = *(int *)(iVar2 + 0xa0) + 1;
          goto LAB_0053bce7;
        }
        local_c[4] = iVar2;
        if ((0x7fffffff < uVar5) ||
           (uVar5 == (int)DAT_007666d0 / (int)*(size_t *)(iVar2 + 0x80) + 1U)) {
          FUN_00525a30(0xb,"database corruption at line %d of [%.10s]",0xa5a2,
                       "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
          param_3 = 0xb;
LAB_0053bc94:
          if ((*(byte *)(puVar4 + 6) & 2) != 0) {
            FUN_00544570(puVar4);
          }
          iVar1 = puVar4[7];
          *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + -1;
          if (puVar4[5] == 1) {
            *(undefined4 *)(iVar1 + 0x2c) = 0;
          }
          (*DAT_00766664)(*(undefined4 *)(iVar1 + 0x28),*puVar4,1);
          goto LAB_0053bcc6;
        }
        if (((*(char *)(iVar2 + 0xe) == '\0') && (uVar5 <= *(uint *)(iVar2 + 0x18))) &&
           (**(int **)(iVar2 + 0x3c) != 0)) {
          *(int *)(iVar2 + 0xa4) = *(int *)(iVar2 + 0xa4) + 1;
          param_3 = FUN_00544d80(local_c);
          if (param_3 != 0) goto LAB_0053bc94;
        }
        else {
          if (*(uint *)(iVar2 + 0x84) < uVar5) {
            param_3 = 0xd;
            goto LAB_0053bc94;
          }
          memset((void *)local_c[1],0,*(size_t *)(iVar2 + 0x80));
        }
      }
      else {
LAB_0053bcc6:
        if (*(int *)(*(int *)(iVar2 + 0xb4) + 0xc) == 0) {
          FUN_00541a10(iVar2);
        }
        puVar4 = (undefined4 *)0x0;
        local_c = (undefined4 *)0x0;
        if (param_3 != 0) {
          return param_3;
        }
      }
LAB_0053bce7:
      iVar2 = puVar4[2];
      *(undefined4 *)(iVar2 + 0x38) = puVar4[1];
      *(int **)(iVar2 + 0x34) = param_1;
      *(undefined4 **)(iVar2 + 0x44) = puVar4;
      *(uint *)(iVar2 + 0x48) = uVar5;
      *(byte *)(iVar2 + 5) = (uVar5 != 1) - 1U & 100;
      param_3 = FUN_00560330(puVar4);
      iVar2 = *(int *)(iVar2 + 0x44);
      if (iVar2 != 0) {
        iVar1 = *(int *)(iVar2 + 0x10);
        FUN_00561130(iVar2);
        if (*(int *)(*(int *)(iVar1 + 0xb4) + 0xc) == 0) {
          FUN_00541a10(iVar1);
        }
      }
      if (param_3 != 0) {
        return param_3;
      }
    }
    local_8 = local_8 - 1;
  } while( true );
}


/* FUN_0053bd90 @ 0053bd90  kind=lib  attributed-by=lib-island  size=419 */

void FUN_0053bd90(int param_1,int param_2,undefined1 *param_3,int param_4,undefined1 *param_5,
                 int param_6,int *param_7)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined2 *puVar7;
  uint uVar8;
  undefined2 *puVar9;
  int local_8;
  
  uVar8 = -(uint)(param_6 != 0) & 4;
  local_8 = 0;
  if (*param_7 == 0) {
    if ((*(char *)(param_1 + 1) == '\0') && (param_4 + 2 <= (int)(uint)*(ushort *)(param_1 + 0xe)))
    {
      iVar6 = FUN_00560330(*(undefined4 *)(param_1 + 0x44));
      if (iVar6 == 0) {
        iVar4 = *(int *)(param_1 + 0x38);
        uVar2 = *(ushort *)(param_1 + 0xc);
        uVar3 = *(ushort *)(param_1 + 0x10);
        iVar6 = FUN_00529ae0(param_1,param_4,&local_8);
        iVar5 = local_8;
        if (iVar6 == 0) {
          *(short *)(param_1 + 0x10) = *(short *)(param_1 + 0x10) + 1;
          *(short *)(param_1 + 0xe) = *(short *)(param_1 + 0xe) + (-2 - (short)param_4);
          memcpy((void *)(iVar4 + uVar8 + local_8),param_3 + uVar8,param_4 - uVar8);
          if (param_6 != 0) {
            FUN_00563650(iVar4 + iVar5,param_6);
          }
          puVar9 = (undefined2 *)((uint)uVar2 + param_2 * 2 + iVar4);
          for (puVar7 = (undefined2 *)((uint)uVar2 + (uint)uVar3 * 2 + iVar4); puVar9 < puVar7;
              puVar7 = puVar7 + -1) {
            *puVar7 = puVar7[-1];
          }
          *(char *)((int)puVar9 + 1) = (char)local_8;
          *(char *)puVar9 = (char)((uint)local_8 >> 8);
          *(undefined1 *)(*(byte *)(param_1 + 5) + 3 + iVar4) = *(undefined1 *)(param_1 + 0x11);
          *(undefined1 *)(*(byte *)(param_1 + 5) + 4 + iVar4) = *(undefined1 *)(param_1 + 0x10);
          if (*(char *)(*(int *)(param_1 + 0x34) + 0x11) == '\0') {
            return;
          }
          FUN_00544870(param_1,param_3,param_7);
          return;
        }
      }
      *param_7 = iVar6;
      return;
    }
    if (param_5 != (undefined1 *)0x0) {
      memcpy(param_5 + uVar8,param_3 + uVar8,param_4 - uVar8);
      param_3 = param_5;
    }
    if (param_6 != 0) {
      *param_3 = (char)((uint)param_6 >> 0x18);
      param_3[1] = (char)((uint)param_6 >> 0x10);
      param_3[2] = (char)((uint)param_6 >> 8);
      param_3[3] = (char)param_6;
    }
    bVar1 = *(byte *)(param_1 + 1);
    *(byte *)(param_1 + 1) = bVar1 + 1;
    *(undefined1 **)(param_1 + 0x20 + (uint)bVar1 * 4) = param_3;
    *(undefined2 *)(param_1 + 0x14 + (uint)bVar1 * 2) = (undefined2)param_2;
  }
  return;
}


/* FUN_0053bf40 @ 0053bf40  kind=lib  attributed-by=lib-island  size=103 */

void FUN_0053bf40(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  if (param_2 != (int *)0x0) {
    if (*param_2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = param_2[1];
    }
    *param_2 = *param_2 + 1;
    param_2[1] = (int)param_3;
    if (iVar1 != 0) {
      *param_3 = iVar1;
      param_3[1] = *(int *)(iVar1 + 4);
      if (*(undefined4 **)(iVar1 + 4) != (undefined4 *)0x0) {
        **(undefined4 **)(iVar1 + 4) = param_3;
        *(int **)(iVar1 + 4) = param_3;
        return;
      }
      *(int **)(param_1 + 8) = param_3;
      *(int **)(iVar1 + 4) = param_3;
      return;
    }
  }
  *param_3 = *(int *)(param_1 + 8);
  if (*(int *)(param_1 + 8) != 0) {
    *(int **)(*(int *)(param_1 + 8) + 4) = param_3;
  }
  param_3[1] = 0;
  *(int **)(param_1 + 8) = param_3;
  return;
}


/* FUN_0053bfb0 @ 0053bfb0  kind=lib  attributed-by=lib-island  size=83 */

undefined4 FUN_0053bfb0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = *(int *)(*(int *)(iVar1 + 0x10) + 0x14);
  if (iVar2 != 0) {
    if ((*(char *)(iVar1 + 0x36) == '\0') || (*(char *)(iVar2 + 8) != '\0')) {
      FUN_00553950(param_1,"temporary storage cannot be changed from within a transaction");
      return 1;
    }
    FUN_0054c710(iVar2);
    *(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x14) = 0;
    FUN_00564000(iVar1);
  }
  return 0;
}


/* FUN_0053c0e0 @ 0053c0e0  kind=lib  attributed-by=lib-island  size=88 */

bool FUN_0053c0e0(int *param_1)

{
  short *psVar1;
  
  if ((((((param_1 != (int *)0x0) && (param_1[0xf] == 0)) &&
        ((*(byte *)((int)param_1 + 6) & 5) == 0)) && ((param_1[0x12] == 0 && (param_1[0xb] == 0))))
      && ((psVar1 = (short *)param_1[10], *psVar1 == 1 &&
          ((*(int *)(psVar1 + 0xe) == 0 && (*(int *)(psVar1 + 0xc) != 0)))))) &&
     (((*(byte *)(*(int *)(psVar1 + 0xc) + 0x2a) & 0x10) == 0 && (*(int *)*param_1 == 1)))) {
    return **(char **)((int *)*param_1)[2] == -0x68;
  }
  return false;
}


/* FUN_0053c270 @ 0053c270  kind=lib  attributed-by=lib-island  size=369 */

undefined4
FUN_0053c270(undefined4 param_1,undefined4 param_2,int *param_3,int param_4,int *param_5,int param_6
            )

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint local_18;
  uint uStack_14;
  int local_10;
  uint local_c;
  uint local_8;
  
  if ((*param_3 == 0) || (0x3f < *param_5)) {
    return 0;
  }
  local_18 = 0;
  uStack_14 = 0;
  local_c = 0;
  if (0 < *param_5) {
    local_10 = 0;
    local_8 = 0;
    do {
      for (pcVar1 = *(char **)(local_10 + param_5[2]);
          (pcVar1 != (char *)0x0 && ((*pcVar1 == '\\' || (*pcVar1 == '\x18'))));
          pcVar1 = *(char **)(pcVar1 + 8)) {
      }
      if (*pcVar1 != -0x68) {
        return 0;
      }
      piVar2 = (int *)FUN_005372f0(param_2,*(undefined4 *)(pcVar1 + 0x18),
                                   (int)*(short *)(pcVar1 + 0x1c),0xffffffff,0xffffffff,2,0);
      if (piVar2 == (int *)0x0) {
LAB_0053c320:
        if (*(int *)(pcVar1 + 0x18) != param_4) {
          return 0;
        }
        uVar5 = 1 << (local_c & 0x1f);
        uVar6 = 0;
        if (0x1f < local_c) {
          uVar6 = uVar5;
        }
        uVar5 = uVar5 ^ uVar6;
        if (0x3f < local_c) {
          uVar6 = uVar5;
        }
        local_18 = local_18 | uVar5;
        local_8 = local_8 | uVar6;
      }
      else {
        iVar3 = FUN_0054bcc0(param_1,*(undefined4 *)(*piVar2 + 8),*(undefined4 *)(*piVar2 + 0xc));
        iVar4 = FUN_00555b70(param_1,pcVar1);
        if (iVar3 != iVar4) goto LAB_0053c320;
      }
      local_c = local_c + 1;
      local_10 = local_10 + 0x14;
      uStack_14 = local_8;
    } while ((int)local_c < *param_5);
  }
  if (local_18 != 0 || uStack_14 != 0) {
    while ((param_6 < param_3[9] &&
           (uVar5 = FUN_00537230(param_1,param_5,param_4,param_3,param_6), -1 < (int)uVar5))) {
      uVar6 = 1 << (uVar5 & 0x1f);
      uVar7 = 0;
      if (0x1f < uVar5) {
        uVar7 = uVar6;
      }
      uVar6 = uVar6 ^ uVar7;
      if (0x3f < uVar5) {
        uVar7 = uVar6;
      }
      local_18 = local_18 & ~uVar6;
      uStack_14 = uStack_14 & ~uVar7;
      param_6 = param_6 + 1;
      if (local_18 == 0 && uStack_14 == 0) {
        return 1;
      }
    }
    if (local_18 != 0 || uStack_14 != 0) {
      return 0;
    }
  }
  return 1;
}


/* FUN_0053c3f0 @ 0053c3f0  kind=lib  attributed-by=lib-island  size=235 */

undefined4 FUN_0053c3f0(undefined4 param_1,short *param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  if (*param_2 != 1) {
    return 0;
  }
  iVar1 = *(int *)(param_2 + 0x1a);
  iVar2 = *(int *)(param_2 + 0xc);
  iVar6 = 0;
  if (0 < *param_4) {
    puVar5 = (undefined4 *)param_4[2];
    do {
      for (pcVar3 = (char *)*puVar5;
          (pcVar3 != (char *)0x0 && ((*pcVar3 == '\\' || (*pcVar3 == '\x18'))));
          pcVar3 = *(char **)(pcVar3 + 8)) {
      }
      if (((*pcVar3 == -0x68) && (*(int *)(pcVar3 + 0x18) == iVar1)) &&
         (*(short *)(pcVar3 + 0x1c) < 0)) {
        return 1;
      }
      iVar6 = iVar6 + 1;
      puVar5 = puVar5 + 5;
    } while (iVar6 < *param_4);
  }
  iVar6 = *(int *)(iVar2 + 8);
  do {
    if (iVar6 == 0) {
      return 0;
    }
    if (*(char *)(iVar6 + 0x2c) != '\0') {
      iVar7 = 0;
      bVar8 = *(int *)(iVar6 + 0x24) == 0;
      if (0 < *(int *)(iVar6 + 0x24)) {
        do {
          iVar4 = FUN_005372f0(param_3,iVar1,*(undefined4 *)(*(int *)(iVar6 + 4) + iVar7 * 4),
                               0xffffffff,0xffffffff,2,iVar6);
          if ((iVar4 == 0) &&
             ((iVar4 = FUN_00537230(param_1,param_4,iVar1,iVar6,iVar7), iVar4 < 0 ||
              (*(char *)(*(int *)(iVar2 + 4) + 0x14 +
                        *(int *)(*(int *)(iVar6 + 4) + iVar7 * 4) * 0x18) == '\0')))) break;
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(iVar6 + 0x24));
        bVar8 = iVar7 == *(int *)(iVar6 + 0x24);
      }
      if (bVar8) {
        return 1;
      }
    }
    iVar6 = *(int *)(iVar6 + 0x14);
  } while( true );
}


/* FUN_0053c4e0 @ 0053c4e0  kind=lib  attributed-by=lib-island  size=492 */

bool FUN_0053c4e0(undefined4 *param_1,int param_2,int *param_3,int *param_4,undefined4 param_5)

{
  uint uVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  char *pcVar10;
  undefined8 uVar11;
  int local_10;
  char local_8;
  char local_7;
  char local_6;
  
  uVar3 = *param_1;
  pcVar10 = (char *)0x0;
  local_10 = 0;
  iVar7 = FUN_0055ce30(uVar3,param_2,param_5,&local_8);
  if (iVar7 == 0) {
    return false;
  }
  puVar4 = *(undefined4 **)(*(int *)(param_2 + 0x10) + 8);
  pcVar5 = (char *)puVar4[5];
  if (((*pcVar5 != -0x68) || (cVar6 = FUN_00553b20(pcVar5), cVar6 != 'a')) ||
     ((*(byte *)(*(int *)(pcVar5 + 0x28) + 0x2a) & 0x10) != 0)) {
    return false;
  }
  pcVar5 = (char *)*puVar4;
  cVar6 = *pcVar5;
  if (cVar6 == -0x7c) {
    cVar6 = pcVar5[0x23];
  }
  if (cVar6 == -0x7b) {
    sVar2 = *(short *)(pcVar5 + 0x1c);
    local_10 = FUN_005736e0(param_1[0x7c],(int)sVar2,0x62);
    if ((local_10 != 0) && (*(char *)(local_10 + 0x1e) == '\x03')) {
      pcVar10 = (char *)FUN_0056bce0(local_10,1);
    }
    FUN_00576330(param_1[2],(int)sVar2);
  }
  else {
    if (cVar6 != '^') goto LAB_0053c6aa;
    pcVar10 = *(char **)(pcVar5 + 4);
  }
  if (pcVar10 != (char *)0x0) {
    cVar9 = *pcVar10;
    iVar7 = 0;
    if (cVar9 != '\0') {
      do {
        if (((cVar9 == local_8) || (cVar9 == local_7)) || (cVar9 == local_6)) break;
        cVar9 = pcVar10[iVar7 + 1];
        iVar7 = iVar7 + 1;
      } while (cVar9 != '\0');
      if ((iVar7 != 0) && (pcVar10[iVar7 + -1] != -1)) {
        if ((cVar9 == local_8) && (pcVar10[iVar7 + 1] == '\0')) {
          iVar8 = 1;
        }
        else {
          iVar8 = 0;
        }
        *param_4 = iVar8;
        iVar8 = FUN_00553a30(uVar3,0x5e,pcVar10);
        if (iVar8 != 0) {
          *(undefined1 *)(iVar7 + *(int *)(iVar8 + 4)) = 0;
        }
        *param_3 = iVar8;
        if (cVar6 == -0x7b) {
          iVar7 = param_1[2];
          FUN_00576330(iVar7,(int)*(short *)(pcVar5 + 0x1c));
          if ((*param_4 != 0) && (*(char *)(*(int *)(pcVar5 + 4) + 1) != '\0')) {
            uVar11 = FUN_0055a1f0(param_1);
            FUN_00554e20((int)((ulonglong)uVar11 >> 0x20),pcVar5,(int)uVar11);
            uVar1 = *(uint *)(iVar7 + 0x1c) - 1;
            if (uVar1 < *(uint *)(iVar7 + 0x1c)) {
              *(undefined4 *)(*(int *)(iVar7 + 4) + 0xc + uVar1 * 0x14) = 0;
            }
            FUN_00563fb0(param_1,(int)uVar11);
          }
        }
        goto LAB_0053c6aa;
      }
    }
    pcVar10 = (char *)0x0;
  }
LAB_0053c6aa:
  FUN_0056b910(local_10);
  return pcVar10 != (char *)0x0;
}


/* FUN_0053c730 @ 0053c730  kind=lib  attributed-by=lib-island  size=167 */

int FUN_0053c730(int param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  uint *puVar4;
  int *piVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  puVar4 = (uint *)(*(int *)(param_1 + 0x34) + -0x58 + iVar1 * 0x58);
  while( true ) {
    iVar1 = iVar1 + -1;
    if (iVar1 < 0) {
      return 0;
    }
    if (puVar4[7] == param_2) break;
    puVar4 = puVar4 + -0x16;
  }
  if ((*puVar4 & 0x4000000) != 0) {
    return 1;
  }
  uVar2 = puVar4[4];
  if (uVar2 == 0) {
    if (param_3 != -1) {
      return 0;
    }
  }
  else if (-1 < param_3) {
    iVar1 = *(int *)(uVar2 + 0x24);
    iVar6 = 0;
    if (iVar1 < 1) {
      return 0;
    }
    piVar5 = *(int **)(uVar2 + 4);
    while (param_3 != *piVar5) {
      iVar6 = iVar6 + 1;
      piVar5 = piVar5 + 1;
      if (iVar1 <= iVar6) {
        return 0;
      }
    }
    if (iVar1 <= iVar6) {
      return 0;
    }
    bVar3 = *(byte *)(iVar6 + *(int *)(uVar2 + 0x1c));
    goto LAB_0053c7be;
  }
  bVar3 = 0;
LAB_0053c7be:
  if ((*puVar4 & 0x1000000) != 0) {
    bVar3 = 1 - bVar3;
  }
  return bVar3 + 2;
}


/* FUN_0053c7e0 @ 0053c7e0  kind=lib  attributed-by=lib-island  size=94 */

int FUN_0053c7e0(int *param_1,int param_2)

{
  short *psVar1;
  char *pcVar2;
  int iVar3;
  
  if ((((param_1[0xb] == 0) && (*(int *)*param_1 == 1)) &&
      (psVar1 = (short *)param_1[10], *psVar1 == 1)) && (*(int *)(psVar1 + 0xe) == 0)) {
    iVar3 = *(int *)(psVar1 + 0xc);
    pcVar2 = *(char **)((int *)*param_1)[2];
    if ((((*(byte *)(iVar3 + 0x2a) & 0x10) == 0) && (*pcVar2 == -0x67)) &&
       ((*(int *)(param_2 + 0x24) != 0 &&
        ((*(byte *)(*(int *)(*(int *)(param_2 + 0x20) + 4) + 3) & 0x10) != 0)))) {
      if ((pcVar2[2] & 0x10U) != 0) {
        iVar3 = 0;
      }
      return iVar3;
    }
  }
  return 0;
}


/* FUN_0053c840 @ 0053c840  kind=lib  attributed-by=lib-island  size=848 */

uint FUN_0053c840(undefined4 *param_1,int *param_2,int param_3,uint *param_4)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  bool bVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  bool bVar17;
  bool bVar18;
  undefined8 uVar19;
  uint local_40;
  uint uStack_3c;
  uint local_28;
  uint local_20;
  uint local_14;
  undefined4 *local_c;
  
  iVar14 = param_2[3];
  piVar2 = (int *)*param_1;
  local_20 = 2;
  iVar3 = *piVar2;
  bVar6 = false;
  if (param_1[0xb] == 0) {
    uVar11 = 0;
  }
  else {
    iVar13 = param_1[0xb] * 0x58;
    uVar11 = (uint)*(ushort *)(iVar13 + -0x52 + param_1[0xd]);
    if (((*(uint *)(iVar13 + -0x58 + param_1[0xd]) & 0x800000) == 0) ||
       ((*(byte *)(iVar3 + 0x34) & 0x80) != 0)) {
      return uVar11;
    }
  }
  piVar4 = (int *)param_1[8];
  if (*(char *)((int)param_2 + 0x2e) != '\0') {
    return uVar11;
  }
  iVar13 = *piVar4;
  bVar18 = (char)param_2[0xb] != '\0';
  iVar15 = 0;
  local_c = (undefined4 *)(piVar4[2] + uVar11 * 0x14);
  uVar12 = uVar11;
  local_14 = uVar11;
  uVar7 = local_20;
joined_r0x0053c8e9:
  local_20 = uVar7;
  if ((iVar13 <= (int)uVar12) || (param_2[9] < iVar15)) goto LAB_0053cac6;
  for (pcVar5 = (char *)*local_c;
      (pcVar5 != (char *)0x0 && ((*pcVar5 == '\\' || (*pcVar5 == '\x18'))));
      pcVar5 = *(char **)(pcVar5 + 8)) {
  }
  if ((*pcVar5 != -0x68) || (*(int *)(pcVar5 + 0x18) != param_3)) goto LAB_0053cac6;
  if ((*param_2 == 0) || (param_2[9] <= iVar15)) {
    iVar16 = -1;
    local_28 = 0;
    iVar9 = 0;
  }
  else {
    iVar16 = *(int *)(param_2[1] + iVar15 * 4);
    if (iVar16 == *(short *)(param_2[3] + 0x24)) {
      iVar16 = -1;
    }
    local_28 = (uint)*(byte *)(param_2[7] + iVar15);
    iVar9 = *(int *)(param_2[8] + iVar15 * 4);
  }
  if (*(short *)(pcVar5 + 0x1c) == iVar16) {
    if (iVar9 == 0) {
      bVar17 = true;
    }
    else {
      puVar8 = (undefined4 *)FUN_00555b70(piVar2,*local_c);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = *(undefined4 **)(iVar3 + 8);
      }
      iVar9 = FUN_0057a2c0(*puVar8,iVar9);
      bVar17 = iVar9 == 0;
    }
  }
  else {
    bVar17 = false;
  }
  bVar1 = *(byte *)(local_c + 3);
  piVar10 = (int *)FUN_005372f0(param_1[1],param_3,iVar16,param_1[4],param_1[5],0x83,param_2);
  if (piVar10 == (int *)0x0) {
LAB_0053ca4c:
    iVar9 = 0;
LAB_0053ca51:
    if (!bVar17) goto LAB_0053ca55;
    if (((iVar9 != 1) && (local_20 = local_28 ^ bVar1, uVar7 != 2)) &&
       (local_20 = uVar7, (local_28 ^ bVar1) != uVar7)) goto LAB_0053cac6;
    uVar12 = uVar12 + 1;
    local_c = local_c + 5;
    local_14 = uVar12;
    if (iVar16 < 0) {
      bVar6 = true;
LAB_0053cac6:
      if (local_c == (undefined4 *)(piVar4[2] + uVar11 * 0x14)) {
        return uVar11;
      }
      *param_4 = local_20 & 1;
      if ((bVar6) || ((bVar18 && (param_2[9] <= iVar15)))) {
        piVar2 = *(int **)(param_1[1] + 4);
        uVar11 = 0;
        piVar10 = piVar2;
        if (0 < *piVar2) {
          do {
            if (piVar10[1] == param_3) {
              local_40 = 1 << (uVar11 & 0x1f);
              uStack_3c = 0;
              if (0x1f < uVar11) {
                uStack_3c = local_40;
              }
              local_40 = local_40 ^ uStack_3c;
              if (0x3f < uVar11) {
                uStack_3c = local_40;
              }
              goto LAB_0053cb30;
            }
            uVar11 = uVar11 + 1;
            piVar10 = piVar10 + 1;
          } while ((int)uVar11 < *piVar2);
        }
        local_40 = 0;
        uStack_3c = 0;
LAB_0053cb30:
        uVar12 = local_14;
        if ((int)local_14 < iVar13) {
          iVar14 = local_14 * 0x14;
          do {
            uVar19 = FUN_00536850(piVar2,*(undefined4 *)(iVar14 + piVar4[2]));
            if (((uint)uVar19 & ~local_40) != 0 ||
                ((uint)((ulonglong)uVar19 >> 0x20) & ~uStack_3c) != 0) {
              return local_14;
            }
            uVar12 = local_14 + 1;
            iVar14 = iVar14 + 0x14;
            local_14 = uVar12;
          } while ((int)uVar12 < iVar13);
        }
      }
      return uVar12;
    }
    if ((*(char *)(*(int *)(iVar14 + 4) + 0x14 + iVar16 * 0x18) == '\0') && (iVar9 != 1)) {
      bVar18 = false;
    }
  }
  else {
    if ((short)piVar10[4] == 1) goto LAB_0053cac6;
    if ((short)piVar10[4] == 0x80) {
      bVar18 = false;
      iVar9 = 1;
      goto LAB_0053ca51;
    }
    if (piVar10[6] == 0 && piVar10[7] == 0) {
      iVar9 = 1;
      goto LAB_0053ca51;
    }
    pcVar5 = *(char **)(*piVar10 + 0xc);
    if (*pcVar5 != -0x68) goto LAB_0053ca4c;
    iVar9 = FUN_0053c730(param_1,*(undefined4 *)(pcVar5 + 0x18),(int)*(short *)(pcVar5 + 0x1c));
    if (bVar17) {
      if ((iVar9 < 2) || (iVar9 == *(byte *)(local_c + 3) + 2)) goto LAB_0053ca51;
      goto LAB_0053cac6;
    }
LAB_0053ca55:
    if (iVar9 == 0) goto LAB_0053cac6;
  }
  iVar15 = iVar15 + 1;
  uVar7 = local_20;
  goto joined_r0x0053c8e9;
}


