// sqlite (_library) -- cube. 56 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "sqlite.h"

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


/* FUN_0053cb90 @ 0053cb90  kind=lib  attributed-by=lib-string  size=146 */

undefined4 FUN_0053cb90(undefined4 param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  
  if (param_2 != (byte *)0x0) {
    bVar1 = *param_2;
    pbVar2 = param_2;
    while (bVar1 != 0) {
      pbVar2 = pbVar2 + 1;
      bVar1 = *pbVar2;
    }
    if (6 < ((int)pbVar2 - (int)param_2 & 0x3fffffffU)) {
      pcVar5 = "sqlite_";
      iVar4 = 7;
      pbVar2 = param_2;
      do {
        iVar3 = iVar4;
        iVar4 = iVar3 + -1;
        if ((*pbVar2 == 0) || ((&DAT_007120d8)[*pbVar2] != (&DAT_007120d8)[(byte)*pcVar5]))
        goto LAB_0053cbe4;
        pbVar2 = pbVar2 + 1;
        pcVar5 = pcVar5 + 1;
      } while (0 < iVar4);
      iVar4 = iVar3 + -2;
LAB_0053cbe4:
      if ((iVar4 < 0) || ((&DAT_007120d8)[*pbVar2] == (&DAT_007120d8)[(byte)*pcVar5])) {
        FUN_00553950(param_1,"table %s may not be altered",param_2);
        return 1;
      }
    }
  }
  return 0;
}


/* FUN_0053d040 @ 0053d040  kind=lib  attributed-by=lib-string  size=588 */

undefined4 FUN_0053d040(undefined4 *param_1,int param_2,int param_3,int *param_4,int *param_5)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  int iVar11;
  int local_c;
  int local_8;
  
  iVar4 = *(int *)(param_3 + 0x14);
  iVar6 = *(int *)(param_3 + 0x28);
  local_c = 0;
  if (iVar4 == 1) {
    if ((-1 < *(short *)(param_2 + 0x24)) &&
       ((iVar6 == 0 ||
        (iVar5 = FUN_0057a2c0(*(undefined4 *)
                               (*(int *)(param_2 + 4) + *(short *)(param_2 + 0x24) * 0x18),iVar6),
        iVar5 == 0)))) {
      return 0;
    }
  }
  else if (param_5 != (int *)0x0) {
    local_c = FUN_00552230(*param_1,iVar4 * 4);
    if (local_c == 0) {
      return 1;
    }
    *param_5 = local_c;
  }
  iVar5 = *(int *)(param_2 + 8);
  do {
    if (iVar5 == 0) {
      if (*(char *)((int)param_1 + 0x1ca) == '\0') {
        FUN_00553950(param_1,"foreign key mismatch");
      }
      FUN_005521a0(*param_1,local_c);
      return 1;
    }
    if ((*(int *)(iVar5 + 0x24) == iVar4) && (*(char *)(iVar5 + 0x2c) != '\0')) {
      if (iVar6 == 0) {
        if (*(char *)(iVar5 + 0x2d) == '\x02') {
          if ((local_c != 0) && (0 < iVar4)) {
            puVar7 = (undefined4 *)(param_3 + 0x24);
            iVar6 = 0;
            do {
              *(undefined4 *)(local_c + iVar6 * 4) = *puVar7;
              iVar6 = iVar6 + 1;
              puVar7 = puVar7 + 2;
            } while (iVar6 < iVar4);
          }
LAB_0053d11d:
          *param_4 = iVar5;
          return 0;
        }
      }
      else {
        local_8 = 0;
        if (0 < iVar4) {
          while( true ) {
            iVar2 = local_8 * 4;
            puVar7 = (undefined4 *)
                     (*(int *)(param_2 + 4) + *(int *)(iVar2 + *(int *)(iVar5 + 4)) * 0x18);
            pbVar10 = (byte *)puVar7[4];
            pbVar8 = (byte *)"BINARY";
            if (pbVar10 != (byte *)0x0) {
              pbVar8 = pbVar10;
            }
            pbVar10 = *(byte **)(iVar2 + *(int *)(iVar5 + 0x20));
            bVar3 = *pbVar10;
            while ((bVar3 != 0 && ((&DAT_007120d8)[bVar3] == (&DAT_007120d8)[*pbVar8]))) {
              pbVar1 = pbVar10 + 1;
              pbVar10 = pbVar10 + 1;
              pbVar8 = pbVar8 + 1;
              bVar3 = *pbVar1;
            }
            if ((&DAT_007120d8)[*pbVar10] != (&DAT_007120d8)[*pbVar8]) break;
            iVar11 = 0;
            puVar9 = (undefined4 *)(param_3 + 0x28);
            do {
              pbVar10 = (byte *)*puVar9;
              bVar3 = *pbVar10;
              pbVar8 = (byte *)*puVar7;
              while ((bVar3 != 0 && ((&DAT_007120d8)[bVar3] == (&DAT_007120d8)[*pbVar8]))) {
                pbVar1 = pbVar10 + 1;
                pbVar10 = pbVar10 + 1;
                pbVar8 = pbVar8 + 1;
                bVar3 = *pbVar1;
              }
              if ((&DAT_007120d8)[*pbVar10] == (&DAT_007120d8)[*pbVar8]) {
                if (local_c != 0) {
                  *(undefined4 *)(iVar2 + local_c) = *(undefined4 *)(param_3 + 0x24 + iVar11 * 8);
                }
                break;
              }
              iVar11 = iVar11 + 1;
              puVar9 = puVar9 + 2;
            } while (iVar11 < iVar4);
            if ((iVar11 == iVar4) || (local_8 = local_8 + 1, iVar4 <= local_8)) break;
          }
        }
        if (local_8 == iVar4) goto LAB_0053d11d;
      }
    }
    iVar5 = *(int *)(iVar5 + 0x14);
  } while( true );
}


/* FUN_0053d620 @ 0053d620  kind=lib  attributed-by=lib-string  size=1731 */

undefined4
FUN_0053d620(int *param_1,int param_2,byte *param_3,byte *param_4,int param_5,undefined1 *param_6)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  short *psVar4;
  int *piVar5;
  int iVar6;
  bool bVar7;
  undefined1 uVar8;
  int *piVar9;
  int iVar10;
  char *pcVar11;
  uint uVar12;
  uint uVar13;
  byte *pbVar14;
  byte *pbVar15;
  uint uVar16;
  int iVar17;
  short *psVar18;
  undefined4 *puVar19;
  byte *pbVar20;
  undefined2 uVar21;
  int iVar22;
  int iVar23;
  bool bVar24;
  short *local_24;
  int local_20;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar6 = param_5;
  local_20 = 0;
  iVar3 = *param_1;
  iVar17 = 0;
  local_c = 0;
  local_14 = 0;
  local_24 = (short *)0x0;
  local_18 = 0;
  bVar7 = false;
  *(undefined4 *)(param_6 + 0x18) = 0xffffffff;
  *(undefined4 *)(param_6 + 0x28) = 0;
  if (param_5 == 0) {
LAB_0053dbd7:
    if ((param_3 == (byte *)0x0) && ((param_6[2] & 0x40) != 0)) {
      *(undefined4 *)(param_6 + 0x28) = 0;
      *param_6 = 0x5e;
      return 1;
    }
  }
  else {
    iVar17 = 0;
    do {
      if (iVar17 != 0) goto LAB_0053db33;
      psVar4 = *(short **)(param_5 + 4);
      if (psVar4 != (short *)0x0) {
        psVar18 = psVar4 + 4;
        local_8 = 0;
        iVar17 = local_c;
        if (0 < *psVar4) {
          do {
            piVar5 = *(int **)(psVar18 + 8);
            iVar17 = -1000000;
            if (piVar5[0x10] != 0) {
              iVar17 = 0;
              if (0 < *(int *)(iVar3 + 0x14)) {
                piVar9 = (int *)(*(int *)(iVar3 + 0x10) + 0xc);
                do {
                  if (*piVar9 == piVar5[0x10]) break;
                  iVar17 = iVar17 + 1;
                  piVar9 = piVar9 + 4;
                } while (iVar17 < *(int *)(iVar3 + 0x14));
              }
            }
            if (param_3 == (byte *)0x0) {
LAB_0053d767:
              iVar17 = local_14 + 1;
              if (local_14 == 0) {
                *(undefined4 *)(param_6 + 0x18) = *(undefined4 *)(psVar18 + 0x16);
                *(int **)(param_6 + 0x28) = piVar5;
                local_18 = piVar5[0x10];
                local_24 = psVar18;
              }
              iVar22 = 0;
              puVar19 = (undefined4 *)piVar5[1];
              local_14 = iVar17;
              if (0 < *(short *)((int)piVar5 + 0x26)) {
                do {
                  pbVar14 = (byte *)*puVar19;
                  bVar2 = *pbVar14;
                  pbVar20 = param_4;
                  while ((bVar2 != 0 && ((&DAT_007120d8)[bVar2] == (&DAT_007120d8)[*pbVar20]))) {
                    pbVar15 = pbVar14 + 1;
                    pbVar14 = pbVar14 + 1;
                    pbVar20 = pbVar20 + 1;
                    bVar2 = *pbVar15;
                  }
                  if (((&DAT_007120d8)[*pbVar14] == (&DAT_007120d8)[*pbVar20]) &&
                     ((local_c != 1 ||
                      (((*(byte *)(psVar18 + 0x10) & 4) == 0 &&
                       (iVar17 = FUN_00540990(*(undefined4 *)(psVar18 + 0x1a),param_4), iVar17 == 0)
                       ))))) {
                    local_c = local_c + 1;
                    *(undefined4 *)(param_6 + 0x18) = *(undefined4 *)(psVar18 + 0x16);
                    *(int **)(param_6 + 0x28) = piVar5;
                    local_18 = piVar5[0x10];
                    if (iVar22 == (short)piVar5[9]) {
                      *(undefined2 *)(param_6 + 0x1c) = 0xffff;
                      local_24 = psVar18;
                    }
                    else {
                      *(short *)(param_6 + 0x1c) = (short)iVar22;
                      local_24 = psVar18;
                    }
                    break;
                  }
                  iVar22 = iVar22 + 1;
                  puVar19 = puVar19 + 6;
                } while (iVar22 < *(short *)((int)piVar5 + 0x26));
              }
            }
            else {
              pbVar14 = *(byte **)(psVar18 + 6);
              if (pbVar14 == (byte *)0x0) {
                if ((*piVar5 != 0) && (iVar22 = FUN_0057a2c0(*piVar5,param_3), iVar22 == 0)) {
                  if (param_2 == 0) goto LAB_0053d767;
                  iVar17 = FUN_0057a2c0(*(undefined4 *)(*(int *)(iVar3 + 0x10) + iVar17 * 0x10),
                                        param_2);
                  bVar24 = iVar17 == 0;
                  goto LAB_0053d761;
                }
              }
              else {
                bVar2 = *pbVar14;
                pbVar20 = param_3;
                while ((bVar2 != 0 && ((&DAT_007120d8)[bVar2] == (&DAT_007120d8)[*pbVar20]))) {
                  pbVar15 = pbVar14 + 1;
                  pbVar14 = pbVar14 + 1;
                  pbVar20 = pbVar20 + 1;
                  bVar2 = *pbVar15;
                }
                bVar24 = (&DAT_007120d8)[*pbVar14] == (&DAT_007120d8)[*pbVar20];
LAB_0053d761:
                if (bVar24) goto LAB_0053d767;
              }
            }
            local_8 = local_8 + 1;
            psVar18 = psVar18 + 0x24;
            iVar17 = local_c;
          } while (local_8 < *psVar4);
        }
      }
      if ((param_2 == 0) && (param_3 != (byte *)0x0)) {
        if (iVar17 == 0) {
          if (param_1[0x6d] != 0) {
            iVar17 = param_1[0x72];
            if (((char)iVar17 == 'j') || (iVar22 = FUN_0057a2c0(&DAT_00717450,param_3), iVar22 != 0)
               ) {
              if (((char)iVar17 == 'i') ||
                 (iVar17 = FUN_0057a2c0(&DAT_00717454,param_3), iVar17 != 0)) goto LAB_0053da51;
              *(undefined4 *)(param_6 + 0x18) = 0;
            }
            else {
              *(undefined4 *)(param_6 + 0x18) = 1;
            }
            iVar22 = param_1[0x6d];
            if (iVar22 != 0) {
              iVar17 = (int)*(short *)(iVar22 + 0x26);
              local_18 = *(int *)(iVar22 + 0x40);
              local_14 = local_14 + 1;
              iVar23 = 0;
              if (0 < iVar17) {
                puVar19 = *(undefined4 **)(iVar22 + 4);
                do {
                  pbVar14 = (byte *)*puVar19;
                  bVar2 = *pbVar14;
                  pbVar20 = param_4;
                  while ((bVar2 != 0 && ((&DAT_007120d8)[bVar2] == (&DAT_007120d8)[*pbVar20]))) {
                    pbVar15 = pbVar14 + 1;
                    pbVar14 = pbVar14 + 1;
                    pbVar20 = pbVar20 + 1;
                    bVar2 = *pbVar15;
                  }
                  if ((&DAT_007120d8)[*pbVar14] == (&DAT_007120d8)[*pbVar20]) {
                    if (iVar23 == *(short *)(iVar22 + 0x24)) {
                      iVar23 = -1;
                    }
                    break;
                  }
                  iVar23 = iVar23 + 1;
                  puVar19 = puVar19 + 6;
                } while (iVar23 < iVar17);
              }
              if (iVar17 <= iVar23) {
                iVar10 = FUN_0055cf90(param_4);
                if (iVar10 != 0) {
                  iVar23 = -1;
                }
                if (iVar17 <= iVar23) goto LAB_0053da51;
              }
              iVar17 = 1;
              local_c = 1;
              uVar21 = (undefined2)iVar23;
              if (iVar23 < 0) {
                param_6[1] = 100;
                *(undefined2 *)(param_6 + 0x1c) = uVar21;
                *(int *)(param_6 + 0x28) = iVar22;
                bVar7 = true;
              }
              else if (*(int *)(param_6 + 0x18) == 0) {
                if (iVar23 < 0x20) {
                  bVar7 = true;
                  param_1[0x70] = param_1[0x70] | 1 << ((byte)iVar23 & 0x1f);
                  *(undefined2 *)(param_6 + 0x1c) = uVar21;
                  *(int *)(param_6 + 0x28) = iVar22;
                }
                else {
                  param_1[0x70] = -1;
                  *(undefined2 *)(param_6 + 0x1c) = uVar21;
                  *(int *)(param_6 + 0x28) = iVar22;
                  bVar7 = true;
                }
              }
              else {
                if (iVar23 < 0x20) {
                  uVar16 = 1 << ((byte)iVar23 & 0x1f);
                }
                else {
                  uVar16 = 0xffffffff;
                }
                bVar7 = true;
                param_1[0x71] = param_1[0x71] | uVar16;
                *(undefined2 *)(param_6 + 0x1c) = uVar21;
                *(int *)(param_6 + 0x28) = iVar22;
              }
              goto LAB_0053db1d;
            }
          }
LAB_0053da51:
          if ((local_14 == 1) && (iVar17 = FUN_0055cf90(param_4), iVar17 != 0)) {
            local_c = 1;
            *(undefined2 *)(param_6 + 0x1c) = 0xffff;
            param_6[1] = 100;
            iVar17 = 1;
          }
          else {
            piVar5 = *(int **)(param_5 + 8);
            if ((piVar5 != (int *)0x0) && (param_3 == (byte *)0x0)) {
              local_10 = 0;
              if (0 < *piVar5) {
                puVar19 = (undefined4 *)(piVar5[2] + 4);
                do {
                  pbVar14 = (byte *)*puVar19;
                  if (pbVar14 != (byte *)0x0) {
                    bVar2 = *pbVar14;
                    pbVar20 = pbVar14;
                    pbVar15 = param_4;
                    while ((bVar2 != 0 && ((&DAT_007120d8)[bVar2] == (&DAT_007120d8)[*pbVar15]))) {
                      pbVar1 = pbVar20 + 1;
                      pbVar20 = pbVar20 + 1;
                      pbVar15 = pbVar15 + 1;
                      bVar2 = *pbVar1;
                    }
                    if ((&DAT_007120d8)[*pbVar20] == (&DAT_007120d8)[*pbVar15]) {
                      if (((*(byte *)(param_5 + 0x1c) & 1) == 0) &&
                         ((*(byte *)(*(int *)(piVar5[2] + local_10 * 0x14) + 2) & 2) != 0)) {
                        FUN_00553950(param_1,"misuse of aliased aggregate %s",pbVar14);
                        return 2;
                      }
                      FUN_00545f00(param_1,piVar5,local_10,param_6,&DAT_006fc918,local_20);
                      goto LAB_0053dcab;
                    }
                  }
                  local_10 = local_10 + 1;
                  puVar19 = puVar19 + 5;
                } while (local_10 < *piVar5);
              }
            }
            local_20 = local_20 + 1;
            param_5 = *(int *)(param_5 + 0x10);
            iVar17 = local_c;
          }
        }
      }
      else if (iVar17 == 0) goto LAB_0053da51;
LAB_0053db1d:
    } while (param_5 != 0);
    if (iVar17 == 0) goto LAB_0053dbd7;
LAB_0053db33:
    if (iVar17 == 1) goto LAB_0053dc2c;
  }
  pcVar11 = "no such column";
  if (iVar17 != 0) {
    pcVar11 = "ambiguous column name";
  }
  if (param_2 == 0) {
    if (param_3 == (byte *)0x0) {
      FUN_00553950(param_1,"%s: %s",pcVar11,param_4);
    }
    else {
      FUN_00553950(param_1,"%s: %s.%s",pcVar11,param_3);
    }
  }
  else {
    FUN_00553950(param_1,"%s: %s.%s.%s",pcVar11,param_2,param_3);
  }
  *(undefined1 *)((int)param_1 + 0x11) = 1;
  *(int *)(iVar6 + 0x18) = *(int *)(iVar6 + 0x18) + 1;
LAB_0053dc2c:
  if ((-1 < *(short *)(param_6 + 0x1c)) && (local_24 != (short *)0x0)) {
    uVar16 = (uint)*(short *)(param_6 + 0x1c);
    if (0x3f < (int)uVar16) {
      uVar16 = 0x3f;
    }
    uVar12 = 1 << (uVar16 & 0x1f);
    uVar13 = 0;
    if (0x1f < uVar16) {
      uVar13 = uVar12;
    }
    uVar12 = uVar12 ^ uVar13;
    if (0x3f < uVar16) {
      uVar13 = uVar12;
    }
    *(uint *)(local_24 + 0x1c) = *(uint *)(local_24 + 0x1c) | uVar12;
    *(uint *)(local_24 + 0x1e) = *(uint *)(local_24 + 0x1e) | uVar13;
  }
  FUN_00555e30(iVar3,*(undefined4 *)(param_6 + 8));
  *(undefined4 *)(param_6 + 8) = 0;
  FUN_00555e30(iVar3,*(undefined4 *)(param_6 + 0xc));
  uVar8 = 0x98;
  if (bVar7) {
    uVar8 = 0x3c;
  }
  *(undefined4 *)(param_6 + 0xc) = 0;
  *param_6 = uVar8;
  if (local_c != 1) {
    return 2;
  }
LAB_0053dcab:
  FUN_0054abe0(param_1,param_6,local_18,*(undefined4 *)(param_5 + 4));
  *(int *)(iVar6 + 0x14) = *(int *)(iVar6 + 0x14) + 1;
  while (iVar6 != param_5) {
    iVar6 = *(int *)(iVar6 + 0x10);
    *(int *)(iVar6 + 0x14) = *(int *)(iVar6 + 0x14) + 1;
  }
  return 1;
}


/* FUN_00540ff0 @ 00540ff0  kind=lib  attributed-by=lib-string  size=440 */

void FUN_00540ff0(int *param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined1 local_5;
  
  piVar4 = (int *)param_1[2];
  iVar5 = *param_1;
  local_5 = 0;
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)FUN_0056c7b0(iVar5);
    param_1[2] = (int)piVar4;
    if (piVar4 == (int *)0x0) {
      return;
    }
    FUN_0056bdc0(piVar4,0x94);
  }
  puVar7 = (undefined4 *)(param_2 * 0x10 + *(int *)(iVar5 + 0x10));
  uVar2 = *puVar7;
  iVar5 = FUN_005572d0(iVar5,"sqlite_stat1",uVar2);
  if (iVar5 == 0) {
    FUN_0055e450(param_1,"CREATE TABLE %Q.%s(%s)",uVar2,"sqlite_stat1","tbl,idx,stat");
    iVar5 = param_1[0x65];
    local_5 = 2;
  }
  else {
    iVar5 = *(int *)(iVar5 + 0x20);
    FUN_005681e0(param_1,param_2,iVar5,1,"sqlite_stat1");
    if (param_4 == 0) {
      iVar3 = piVar4[7];
      if ((iVar3 < piVar4[8]) || (iVar6 = FUN_0053b4b0(piVar4), iVar6 == 0)) {
        iVar6 = piVar4[1];
        piVar4[7] = piVar4[7] + 1;
        *(undefined2 *)(iVar6 + iVar3 * 0x14) = 0x67;
        *(undefined1 *)(iVar6 + 3 + iVar3 * 0x14) = 0;
        *(int *)(iVar6 + 4 + iVar3 * 0x14) = iVar5;
        *(int *)(iVar6 + 8 + iVar3 * 0x14) = param_2;
        *(undefined4 *)(iVar6 + 0xc + iVar3 * 0x14) = 0;
        *(undefined4 *)(iVar6 + 0x10 + iVar3 * 0x14) = 0;
      }
    }
    else {
      FUN_0055e450(param_1,"DELETE FROM %Q.%s WHERE %s=%Q",*puVar7,"sqlite_stat1",param_5,param_4);
    }
  }
  iVar3 = piVar4[7];
  if ((iVar3 < piVar4[8]) || (iVar6 = FUN_0053b4b0(piVar4), iVar6 == 0)) {
    piVar4[7] = piVar4[7] + 1;
    puVar1 = (undefined2 *)(piVar4[1] + iVar3 * 0x14);
    *(undefined4 *)(puVar1 + 2) = param_3;
    *puVar1 = 0x28;
    *(undefined1 *)((int)puVar1 + 3) = 0;
    *(int *)(puVar1 + 4) = iVar5;
    *(int *)(puVar1 + 6) = param_2;
    *(undefined4 *)(puVar1 + 8) = 0;
  }
  iVar5 = piVar4[1];
  iVar3 = *piVar4;
  if ((iVar5 == 0) || (*(char *)(iVar3 + 0x38) != '\0')) {
    FUN_00539320(iVar3,0xfffffff2,3);
  }
  else {
    iVar6 = iVar5 + (piVar4[7] + -1) * 0x14;
    FUN_00539320(iVar3,(int)*(char *)(iVar6 + 1),
                 *(undefined4 *)(iVar5 + 0x10 + (piVar4[7] + -1) * 0x14));
    *(undefined4 *)(iVar6 + 0x10) = 3;
    *(undefined1 *)(iVar6 + 1) = 0xf2;
  }
  if (piVar4[1] != 0) {
    *(undefined1 *)(piVar4[1] + -0x11 + piVar4[7] * 0x14) = local_5;
  }
  return;
}


/* FUN_00547b70 @ 00547b70  kind=lib  attributed-by=lib-string  size=1799 */

undefined4 FUN_00547b70(char *param_1,int *param_2)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  int *piVar4;
  int iVar5;
  short *psVar6;
  int *piVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  undefined4 *puVar11;
  undefined4 *_Dst;
  undefined4 uVar12;
  int iVar13;
  byte *_Src;
  undefined1 *_Dst_00;
  undefined1 *_Dst_01;
  undefined1 *_Dst_02;
  void *_Dst_03;
  int iVar14;
  short *psVar15;
  int extraout_EDX;
  undefined4 *puVar16;
  byte *pbVar17;
  byte *pbVar18;
  char *pcVar19;
  size_t sVar20;
  byte *pbVar21;
  int local_44;
  int local_3c;
  int local_38;
  char *local_34;
  int local_30;
  int local_1c;
  int *local_18;
  
  piVar4 = *(int **)((int)param_1 + 8);
  iVar5 = *piVar4;
  if (*(char *)(iVar5 + 0x38) != '\0') {
    return 2;
  }
  psVar6 = (short *)param_2[10];
  if ((psVar6 == (short *)0x0) || ((*(ushort *)((int)param_2 + 6) & 0x10) != 0)) {
    return 1;
  }
  *(ushort *)((int)param_2 + 6) = *(ushort *)((int)param_2 + 6) | 0x10;
  piVar7 = (int *)*param_2;
  FUN_00567310(piVar4,psVar6);
  psVar15 = psVar6 + 4;
  local_30 = 0;
  iVar13 = extraout_EDX;
  if (0 < *psVar6) {
    do {
      if (*(int *)(psVar15 + 8) != 0) {
        return 1;
      }
      if (*(int *)(psVar15 + 4) == 0) {
        puVar16 = *(undefined4 **)(psVar15 + 10);
        FUN_00578760(iVar13,puVar16);
        _Dst = (undefined4 *)FUN_00552230(iVar5,0x48);
        if (_Dst != (undefined4 *)0x0) {
          memset(_Dst,0,0x48);
        }
        *(undefined4 **)(psVar15 + 8) = _Dst;
        if (_Dst == (undefined4 *)0x0) {
          return 2;
        }
        *(undefined2 *)(_Dst + 10) = 1;
        uVar12 = FUN_0055d980(iVar5,"sqlite_subquery_%p_",_Dst);
        *_Dst = uVar12;
        for (puVar11 = (undefined4 *)puVar16[0xf]; puVar11 != (undefined4 *)0x0;
            puVar11 = (undefined4 *)puVar11[0xf]) {
          puVar16 = puVar11;
        }
        FUN_005478e0(piVar4,*puVar16,(int)_Dst + 0x26,_Dst + 1);
        *(byte *)((int)_Dst + 0x2a) = *(byte *)((int)_Dst + 0x2a) | 2;
        *(undefined2 *)(_Dst + 9) = 0xffff;
        _Dst[7] = 1000000;
      }
      else {
        iVar13 = FUN_0055d7d0(piVar4,0,psVar15);
        *(int *)(psVar15 + 8) = iVar13;
        if (iVar13 == 0) {
          return 2;
        }
        *(short *)(iVar13 + 0x28) = *(short *)(iVar13 + 0x28) + 1;
        if ((*(int *)(iVar13 + 0xc) != 0) || ((*(byte *)(iVar13 + 0x2a) & 0x10) != 0)) {
          iVar14 = FUN_00576bd0(piVar4,iVar13);
          if (iVar14 != 0) {
            return 2;
          }
          uVar12 = FUN_00566d40(iVar5,*(undefined4 *)(iVar13 + 0xc),0);
          *(undefined4 *)(psVar15 + 10) = uVar12;
          FUN_00578760(param_1,uVar12);
        }
      }
      iVar13 = FUN_0055b3c0(piVar4,psVar15);
      if (iVar13 != 0) {
        return 2;
      }
      local_30 = local_30 + 1;
      psVar15 = psVar15 + 0x24;
      iVar13 = (int)param_1;
    } while (local_30 < *psVar6);
  }
  if ((*(char *)(iVar5 + 0x38) != '\0') || (iVar13 = FUN_0057a580(piVar4,param_2), iVar13 != 0)) {
    return 2;
  }
  iVar14 = 0;
  iVar13 = *piVar7;
  if (0 < iVar13) {
    puVar16 = (undefined4 *)piVar7[2];
    do {
      cVar2 = *(char *)*puVar16;
      if ((cVar2 == 'q') || ((cVar2 == 'v' && (**(char **)((char *)*puVar16 + 0xc) == 'q')))) break;
      iVar14 = iVar14 + 1;
      puVar16 = puVar16 + 5;
    } while (iVar14 < iVar13);
  }
  if (iVar14 < iVar13) {
    iVar14 = piVar7[2];
    local_18 = (int *)0x0;
    if (((*(uint *)(*piVar4 + 0x18) & 4) == 0) ||
       (bVar9 = true, (*(uint *)(*piVar4 + 0x18) & 8) != 0)) {
      bVar9 = false;
    }
    local_44 = 0;
    if (0 < iVar13) {
      do {
        puVar16 = (undefined4 *)(iVar14 + local_44 * 0x14);
        pcVar19 = (char *)*puVar16;
        cVar2 = *pcVar19;
        if ((cVar2 == 'q') || ((cVar2 == 'v' && (**(char **)(pcVar19 + 0xc) == 'q')))) {
          bVar10 = false;
          if (cVar2 == 'v') {
            pbVar21 = *(byte **)(*(int *)(pcVar19 + 8) + 4);
          }
          else {
            pbVar21 = (byte *)0x0;
          }
          local_1c = 0;
          if (0 < *psVar6) {
            psVar15 = psVar6 + 10;
            do {
              _Src = *(byte **)psVar15;
              puVar16 = *(undefined4 **)(psVar15 + 2);
              if (_Src == (byte *)0x0) {
                _Src = (byte *)*puVar16;
              }
              if (*(char *)(iVar5 + 0x38) != '\0') break;
              if (pbVar21 == (byte *)0x0) {
LAB_00547eaf:
                bVar10 = true;
                local_38 = 0;
                if (0 < *(short *)((int)puVar16 + 0x26)) {
                  local_3c = 0;
                  do {
                    param_1 = *(char **)(puVar16[1] + local_3c);
                    if (((*(byte *)(puVar16[1] + 0x16 + local_3c) & 2) == 0) &&
                       (((local_1c < 1 || (pbVar21 != (byte *)0x0)) ||
                        ((((*(byte *)(psVar15 + 10) & 4) == 0 ||
                          (iVar13 = FUN_0057af50(psVar6,local_1c,param_1,0,0), iVar13 == 0)) &&
                         (iVar13 = FUN_0055b160(*(undefined4 *)(psVar15 + 0x14),param_1), iVar13 < 0
                         )))))) {
                      if (param_1 == (char *)0x0) {
                        sVar20 = 0;
                      }
                      else {
                        cVar2 = *param_1;
                        pcVar19 = param_1;
                        while (cVar2 != '\0') {
                          pcVar19 = pcVar19 + 1;
                          cVar2 = *pcVar19;
                        }
                        sVar20 = (int)pcVar19 - (int)param_1 & 0x3fffffff;
                      }
                      _Dst_00 = (undefined1 *)FUN_00552230(iVar5,sVar20 + 0x2d);
                      if (_Dst_00 != (undefined1 *)0x0) {
                        memset(_Dst_00,0,sVar20 + 0x2d);
                        *_Dst_00 = 0x1a;
                        *(undefined2 *)(_Dst_00 + 0x1e) = 0xffff;
                        if (sVar20 == 0xffffffff) {
                          *(ushort *)(_Dst_00 + 2) = *(ushort *)(_Dst_00 + 2) | 0x400;
                          *(undefined4 *)(_Dst_00 + 4) = 0;
                        }
                        else {
                          *(undefined1 **)(_Dst_00 + 4) = _Dst_00 + 0x2c;
                          if (sVar20 != 0) {
                            memcpy(_Dst_00 + 0x2c,param_1,sVar20);
                          }
                          *(undefined1 *)(sVar20 + *(int *)(_Dst_00 + 4)) = 0;
                        }
                        *(undefined4 *)(_Dst_00 + 0x14) = 1;
                      }
                      local_34 = (char *)0x0;
                      if ((bVar9) || (_Dst_02 = _Dst_00, 1 < *psVar6)) {
                        if (_Src == (byte *)0x0) {
                          sVar20 = 0;
                        }
                        else {
                          bVar3 = *_Src;
                          pbVar17 = _Src;
                          while (bVar3 != 0) {
                            pbVar17 = pbVar17 + 1;
                            bVar3 = *pbVar17;
                          }
                          sVar20 = (int)pbVar17 - (int)_Src & 0x3fffffff;
                        }
                        _Dst_01 = (undefined1 *)FUN_00552230(iVar5,sVar20 + 0x2d);
                        if (_Dst_01 != (undefined1 *)0x0) {
                          memset(_Dst_01,0,sVar20 + 0x2d);
                          *(undefined2 *)(_Dst_01 + 0x1e) = 0xffff;
                          *_Dst_01 = 0x1a;
                          if (sVar20 == 0xffffffff) {
                            *(ushort *)(_Dst_01 + 2) = *(ushort *)(_Dst_01 + 2) | 0x400;
                            *(undefined4 *)(_Dst_01 + 4) = 0;
                          }
                          else {
                            *(undefined1 **)(_Dst_01 + 4) = _Dst_01 + 0x2c;
                            if (sVar20 != 0) {
                              memcpy(_Dst_01 + 0x2c,_Src,sVar20);
                            }
                            *(undefined1 *)(sVar20 + *(int *)(_Dst_01 + 4)) = 0;
                          }
                          *(undefined4 *)(_Dst_01 + 0x14) = 1;
                        }
                        _Dst_02 = (undefined1 *)FUN_00552230(*piVar4,0x2c);
                        if (_Dst_02 != (undefined1 *)0x0) {
                          memset(_Dst_02,0,0x2c);
                          *_Dst_02 = 0x76;
                          *(undefined2 *)(_Dst_02 + 0x1e) = 0xffff;
                          *(undefined4 *)(_Dst_02 + 0x14) = 1;
                        }
                        iVar13 = *piVar4;
                        if (_Dst_02 == (undefined1 *)0x0) {
                          FUN_00555e30(iVar13,_Dst_01);
                          FUN_00555e30(iVar13,_Dst_00);
                        }
                        else {
                          if (_Dst_00 != (undefined1 *)0x0) {
                            *(undefined1 **)(_Dst_02 + 0xc) = _Dst_00;
                            *(ushort *)(_Dst_02 + 2) =
                                 *(ushort *)(_Dst_02 + 2) | *(ushort *)(_Dst_00 + 2) & 0x100;
                          }
                          if (_Dst_01 != (undefined1 *)0x0) {
                            *(undefined1 **)(_Dst_02 + 8) = _Dst_01;
                            *(ushort *)(_Dst_02 + 2) =
                                 *(ushort *)(_Dst_02 + 2) | *(ushort *)(_Dst_01 + 2) & 0x100;
                          }
                          FUN_00536750(_Dst_02);
                          if (*(int *)(*piVar4 + 0x5c) < *(int *)(_Dst_02 + 0x14)) {
                            FUN_00553950(piVar4,"Expression tree is too large (maximum depth %d)",
                                         *(int *)(*piVar4 + 0x5c));
                          }
                        }
                        if (bVar9) {
                          param_1 = (char *)FUN_0055d980(iVar5,"%s.%s",_Src,param_1);
                          local_34 = param_1;
                        }
                      }
                      local_18 = (int *)FUN_005565a0(piVar4,local_18,_Dst_02);
                      sVar20 = 0;
                      if (param_1 != (char *)0x0) {
                        cVar2 = *param_1;
                        pcVar19 = param_1;
                        while (cVar2 != '\0') {
                          pcVar19 = pcVar19 + 1;
                          cVar2 = *pcVar19;
                        }
                        sVar20 = (int)pcVar19 - (int)param_1 & 0x3fffffff;
                      }
                      if (local_18 != (int *)0x0) {
                        iVar13 = *local_18;
                        iVar8 = local_18[2];
                        _Dst_03 = (void *)0x0;
                        if ((param_1 != (char *)0x0) &&
                           (_Dst_03 = (void *)FUN_00552230(*piVar4,sVar20 + 1),
                           _Dst_03 != (void *)0x0)) {
                          memcpy(_Dst_03,param_1,sVar20);
                          *(undefined1 *)((int)_Dst_03 + sVar20) = 0;
                        }
                        *(void **)(iVar8 + iVar13 * 0x14 + -0x10) = _Dst_03;
                      }
                      FUN_005521a0(iVar5,local_34);
                    }
                    local_38 = local_38 + 1;
                    local_3c = local_3c + 0x18;
                  } while (local_38 < *(short *)((int)puVar16 + 0x26));
                }
              }
              else {
                bVar3 = *pbVar21;
                pbVar17 = _Src;
                pbVar18 = pbVar21;
                while ((bVar3 != 0 && ((&DAT_007120d8)[bVar3] == (&DAT_007120d8)[*pbVar17]))) {
                  pbVar1 = pbVar18 + 1;
                  pbVar18 = pbVar18 + 1;
                  pbVar17 = pbVar17 + 1;
                  bVar3 = *pbVar1;
                }
                if ((&DAT_007120d8)[*pbVar18] == (&DAT_007120d8)[*pbVar17]) goto LAB_00547eaf;
              }
              local_1c = local_1c + 1;
              psVar15 = psVar15 + 0x24;
            } while (local_1c < *psVar6);
            if (bVar10) goto LAB_00548210;
          }
          if (pbVar21 == (byte *)0x0) {
            FUN_00553950(piVar4,"no tables specified");
          }
          else {
            FUN_00553950(piVar4,"no such table: %s",pbVar21);
          }
        }
        else {
          local_18 = (int *)FUN_005565a0(piVar4,local_18,pcVar19);
          if (local_18 != (int *)0x0) {
            *(undefined4 *)(local_18[2] + -0x10 + *local_18 * 0x14) = puVar16[1];
            *(undefined4 *)(local_18[2] + -0xc + *local_18 * 0x14) = puVar16[2];
            puVar16[1] = 0;
            puVar16[2] = 0;
          }
          *puVar16 = 0;
        }
LAB_00548210:
        local_44 = local_44 + 1;
      } while (local_44 < *piVar7);
    }
    FUN_00556700(iVar5,piVar7);
    *param_2 = (int)local_18;
  }
  if (((int *)*param_2 != (int *)0x0) && (*(int *)(iVar5 + 0x58) < *(int *)*param_2)) {
    FUN_00553950(piVar4,"too many columns in result set");
  }
  return 0;
}


/* FUN_005496d0 @ 005496d0  kind=lib  attributed-by=lib-string  size=517 */

void FUN_005496d0(int *param_1,int param_2)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int local_10;
  int local_c;
  
  iVar2 = *param_1;
  if ((*(char *)(iVar2 + 0x38) == '\0') &&
     (puVar3 = (undefined4 *)FUN_0055d7d0(param_1,0,param_2 + 8), puVar3 != (undefined4 *)0x0)) {
    if ((*(byte *)((int)puVar3 + 0x2a) & 0x10) != 0) {
      FUN_00553950(param_1,"virtual tables may not be altered");
      FUN_00567370(iVar2,param_2);
      return;
    }
    if (puVar3[3] != 0) {
      FUN_00553950(param_1,"Cannot add a column to a view");
      FUN_00567370(iVar2,param_2);
      return;
    }
    iVar4 = FUN_0053cb90(param_1,*puVar3);
    if (iVar4 == 0) {
      iVar4 = FUN_00565260(iVar2,puVar3[0x10]);
      piVar5 = (int *)FUN_005522c0(iVar2,0x48);
      if (piVar5 != (int *)0x0) {
        param_1[0x7f] = (int)piVar5;
        *(undefined2 *)(piVar5 + 10) = 1;
        sVar1 = *(short *)((int)puVar3 + 0x26);
        *(short *)((int)piVar5 + 0x26) = sVar1;
        iVar6 = sVar1 + -1;
        iVar6 = FUN_005522c0(iVar2,(((int)(iVar6 + (iVar6 >> 0x1f & 7U)) >> 3) * 8 + 8) * 0x18);
        piVar5[1] = iVar6;
        iVar6 = FUN_0055d980(iVar2,"sqlite_altertab_%s",*puVar3);
        *piVar5 = iVar6;
        if (((void *)piVar5[1] == (void *)0x0) || (iVar6 == 0)) {
          *(undefined1 *)(iVar2 + 0x38) = 1;
        }
        else {
          memcpy((void *)piVar5[1],(void *)puVar3[1],*(short *)((int)piVar5 + 0x26) * 0x18);
          local_c = 0;
          if (0 < *(short *)((int)piVar5 + 0x26)) {
            local_10 = 0;
            do {
              puVar8 = (undefined4 *)(piVar5[1] + local_10);
              uVar7 = FUN_00552450(iVar2,*puVar8);
              *puVar8 = uVar7;
              puVar8[4] = 0;
              puVar8[3] = 0;
              puVar8[1] = 0;
              puVar8[2] = 0;
              local_c = local_c + 1;
              local_10 = local_10 + 0x18;
            } while (local_c < *(short *)((int)piVar5 + 0x26));
          }
          piVar5[0x10] = *(int *)(*(int *)(iVar2 + 0x10) + 0xc + iVar4 * 0x10);
          piVar5[0xb] = puVar3[0xb];
          *(undefined2 *)(piVar5 + 10) = 1;
          FUN_0054bc80(param_1,0,iVar4);
          iVar6 = FUN_0055ab80(param_1);
          if (iVar6 != 0) {
            FUN_0054f7b0(param_1,iVar4);
            FUN_00567370(iVar2,param_2);
            return;
          }
        }
      }
    }
  }
  FUN_00567370(iVar2,param_2);
  return;
}


/* FUN_005498e0 @ 005498e0  kind=lib  attributed-by=lib-string  size=542 */

void FUN_005498e0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  byte *pbVar9;
  char *pcVar10;
  char *pcVar11;
  byte *local_c;
  int *local_8;
  
  iVar1 = *param_1;
  if (param_1[0x11] != 0) {
    return;
  }
  if (*(char *)(iVar1 + 0x38) != '\0') {
    return;
  }
  piVar2 = (int *)param_1[0x7f];
  local_8 = piVar2;
  iVar6 = FUN_00565260(iVar1,piVar2[0x10]);
  uVar3 = *(undefined4 *)(*(int *)(iVar1 + 0x10) + iVar6 * 0x10);
  iVar4 = *piVar2;
  iVar8 = piVar2[1] + *(short *)((int)piVar2 + 0x26) * 0x18;
  local_c = (byte *)(iVar8 + -0x18);
  pcVar11 = *(char **)(iVar8 + -0x14);
  puVar7 = (undefined4 *)FUN_005572d0(iVar1,iVar4 + 0x10,uVar3);
  iVar8 = FUN_0054ab50(param_1,0x1a,uVar3,*puVar7,0);
  if (iVar8 != 0) {
    return;
  }
  if ((pcVar11 != (char *)0x0) && (*pcVar11 == 'b')) {
    pcVar11 = (char *)0x0;
  }
  if ((local_c[0x16] & 1) != 0) {
    FUN_00553950(param_1,"Cannot add a PRIMARY KEY column");
    return;
  }
  if (local_8[2] != 0) {
    FUN_00553950(param_1,"Cannot add a UNIQUE column");
    return;
  }
  if ((((*(uint *)(iVar1 + 0x18) & 0x40000) != 0) && (local_8[4] != 0)) && (pcVar11 != (char *)0x0))
  {
    FUN_00553950(param_1,"Cannot add a REFERENCES column with non-NULL default value");
    return;
  }
  if (local_c[0x14] == 0) {
    if (pcVar11 == (char *)0x0) goto LAB_00549a40;
  }
  else if (pcVar11 == (char *)0x0) {
    FUN_00553950(param_1,"Cannot add a NOT NULL column with default value NULL");
    return;
  }
  iVar8 = FUN_0056b960(iVar1,pcVar11,1,0x62,&local_c);
  if (iVar8 != 0) {
    *(undefined1 *)(iVar1 + 0x38) = 1;
    return;
  }
  if (local_c == (byte *)0x0) {
    FUN_00553950(param_1,"Cannot add a column with non-constant default");
    return;
  }
  FUN_0056b910(local_c);
LAB_00549a40:
  local_c = (byte *)FUN_005524a0(iVar1,*param_2,param_2[1]);
  if (local_c != (byte *)0x0) {
    uVar5 = *(undefined4 *)(iVar1 + 0x18);
    pbVar9 = local_c + param_2[1] + -1;
    while ((local_c < pbVar9 && ((*pbVar9 == 0x3b || (((&DAT_007121d8)[*pbVar9] & 1) != 0))))) {
      *pbVar9 = 0;
      pbVar9 = pbVar9 + -1;
    }
    *(uint *)(iVar1 + 0x18) = *(uint *)(iVar1 + 0x18) | 0x100000;
    pcVar10 = "sqlite_temp_master";
    if (iVar6 != 1) {
      pcVar10 = "sqlite_master";
    }
    FUN_0055e450(param_1,
                 "UPDATE \"%w\".%s SET sql = substr(sql,1,%d) || \', \' || %Q || substr(sql,%d) WHERE type = \'table\' AND name = %Q"
                 ,uVar3,pcVar10,local_8[0xb],local_c,local_8[0xb] + 1,iVar4 + 0x10);
    FUN_005521a0(iVar1,local_c);
    *(undefined4 *)(iVar1 + 0x18) = uVar5;
  }
  FUN_0055e0d0(param_1,iVar6,(pcVar11 != (char *)0x0) + '\x02');
  FUN_00545780(param_1,puVar7,*puVar7);
  return;
}


/* FUN_00549b00 @ 00549b00  kind=lib  attributed-by=lib-string  size=140 */

void FUN_00549b00(void)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 uVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  
  puVar8 = &DAT_00766fd0;
  do {
    pbVar2 = *(byte **)(puVar8 + 0x18);
    uVar6 = 0;
    if (pbVar2 != (byte *)0x0) {
      bVar1 = *pbVar2;
      pbVar5 = pbVar2;
      while (bVar1 != 0) {
        pbVar5 = pbVar5 + 1;
        bVar1 = *pbVar5;
      }
      uVar6 = (int)pbVar5 - (int)pbVar2 & 0x3fffffff;
    }
    uVar7 = ((byte)(&DAT_007120d8)[*pbVar2] + uVar6) % 0x17;
    iVar4 = FUN_00539a30(&DAT_0076b4b0,uVar7,pbVar2,uVar6);
    if (iVar4 == 0) {
      uVar3 = *(undefined4 *)(&DAT_0076b4b0 + uVar7 * 4);
      *(undefined4 *)(puVar8 + 8) = 0;
      *(undefined4 *)(puVar8 + 0x1c) = uVar3;
      *(undefined **)(&DAT_0076b4b0 + uVar7 * 4) = puVar8;
    }
    else {
      *(undefined4 *)(puVar8 + 8) = *(undefined4 *)(iVar4 + 8);
      *(undefined **)(iVar4 + 8) = puVar8;
    }
    puVar8 = puVar8 + 0x24;
  } while ((int)puVar8 < 0x76703c);
  return;
}


/* FUN_00549b90 @ 00549b90  kind=lib  attributed-by=lib-string  size=828 */

void FUN_00549b90(int *param_1,int param_2,undefined4 param_3)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte *pbVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  int *piVar12;
  byte *pbVar13;
  char *pcVar14;
  int local_c;
  int local_8;
  
  local_8 = 0;
  iVar3 = *param_1;
  uVar4 = *(undefined4 *)(iVar3 + 0x18);
  local_c = 0;
  if ((*(char *)(iVar3 + 0x38) == '\0') &&
     (piVar7 = (int *)FUN_0055d7d0(param_1,0,param_2 + 8), piVar7 != (int *)0x0)) {
    iVar8 = FUN_00565260(*param_1,piVar7[0x10]);
    uVar5 = *(undefined4 *)(*(int *)(iVar3 + 0x10) + iVar8 * 0x10);
    *(uint *)(iVar3 + 0x18) = *(uint *)(iVar3 + 0x18) | 0x100000;
    local_8 = FUN_0055e3f0(iVar3,param_3);
    if (local_8 != 0) {
      iVar9 = FUN_005572d0(iVar3,local_8,uVar5);
      if ((iVar9 == 0) && (iVar9 = FUN_00557190(iVar3,local_8,uVar5), iVar9 == 0)) {
        iVar9 = FUN_0053cb90(param_1,*piVar7);
        if ((iVar9 != 0) || (iVar9 = FUN_0054f8c0(param_1,local_8), iVar9 != 0)) goto LAB_00549eab;
        if (piVar7[3] == 0) {
          iVar9 = FUN_0054ab50(param_1,0x1a,uVar5,*piVar7,0);
          if ((iVar9 == 0) && (iVar9 = FUN_00576bd0(param_1,piVar7), iVar9 == 0)) {
            if (((*(byte *)((int)piVar7 + 0x2a) & 0x10) != 0) &&
               (local_c = FUN_0055a900(iVar3,piVar7), *(int *)(**(int **)(local_c + 8) + 0x4c) == 0)
               ) {
              local_c = 0;
            }
            iVar9 = FUN_0055ab80(param_1);
            if (iVar9 != 0) {
              FUN_0054bc80(param_1,local_c != 0,iVar8);
              FUN_0054f7b0(param_1,iVar8);
              if (local_c != 0) {
                param_1[0x13] = param_1[0x13] + 1;
                iVar10 = param_1[0x13];
                FUN_0056bf50(iVar9,0x5e,0,iVar10,0,local_8,0);
                FUN_0056bf50(iVar9,0x8b,iVar10,0,0,local_c,0xfffffff6);
                piVar12 = param_1;
                if ((int *)param_1[0x6c] != (int *)0x0) {
                  piVar12 = (int *)param_1[0x6c];
                }
                *(undefined1 *)(piVar12 + 6) = 1;
              }
              pbVar6 = (byte *)*piVar7;
              iVar9 = 0;
              bVar2 = *pbVar6;
              pbVar13 = pbVar6;
              while ((bVar2 != 0 && (pbVar13 != (byte *)0xffffffff))) {
                bVar2 = *pbVar13;
                pbVar13 = pbVar13 + 1;
                if (0xbf < bVar2) {
                  bVar2 = *pbVar13;
                  while ((bVar2 & 0xc0) == 0x80) {
                    pbVar1 = pbVar13 + 1;
                    pbVar13 = pbVar13 + 1;
                    bVar2 = *pbVar1;
                  }
                }
                iVar9 = iVar9 + 1;
                bVar2 = *pbVar13;
              }
              if ((*(uint *)(iVar3 + 0x18) & 0x40000) != 0) {
                iVar10 = FUN_0057f660(param_1,piVar7);
                pcVar14 = "sqlite_temp_master";
                if (iVar10 != 0) {
                  if (iVar8 != 1) {
                    pcVar14 = "sqlite_master";
                  }
                  FUN_0055e450(param_1,
                               "UPDATE \"%w\".%s SET sql = sqlite_rename_parent(sql, %Q, %Q) WHERE %s;"
                               ,uVar5,pcVar14,pbVar6,local_8,iVar10);
                  FUN_005521a0(iVar3,iVar10);
                }
              }
              pcVar14 = "sqlite_temp_master";
              if (iVar8 != 1) {
                pcVar14 = "sqlite_master";
              }
              FUN_0055e450(param_1,
                           "UPDATE %Q.%s SET sql = CASE WHEN type = \'trigger\' THEN sqlite_rename_trigger(sql, %Q)ELSE sqlite_rename_table(sql, %Q) END, tbl_name = %Q, name = CASE WHEN type=\'table\' THEN %Q WHEN name LIKE \'sqlite_autoindex%%\' AND type=\'index\' THEN \'sqlite_autoindex_\' || %Q || substr(name,%d+18) ELSE name END WHERE tbl_name=%Q COLLATE nocase AND (type=\'table\' OR type=\'index\' OR type=\'trigger\');"
                           ,uVar5,pcVar14,local_8,local_8,local_8,local_8,local_8,iVar9,pbVar6);
              iVar8 = FUN_005572d0(iVar3,"sqlite_sequence",uVar5);
              if (iVar8 != 0) {
                FUN_0055e450(param_1,"UPDATE \"%w\".sqlite_sequence set name = %Q WHERE name = %Q",
                             uVar5,local_8,*piVar7);
              }
              iVar8 = FUN_0057f7c0(param_1,piVar7);
              if (iVar8 != 0) {
                FUN_0055e450(param_1,
                             "UPDATE sqlite_temp_master SET sql = sqlite_rename_trigger(sql, %Q), tbl_name = %Q WHERE %s;"
                             ,local_8,local_8,iVar8);
                FUN_005521a0(iVar3,iVar8);
              }
              if ((*(uint *)(iVar3 + 0x18) & 0x40000) != 0) {
                for (puVar11 = (undefined4 *)FUN_00558520(piVar7); puVar11 != (undefined4 *)0x0;
                    puVar11 = (undefined4 *)puVar11[3]) {
                  piVar12 = (int *)*puVar11;
                  if (piVar12 != piVar7) {
                    FUN_00545780(param_1,piVar12,*piVar12);
                  }
                }
              }
              FUN_00545780(param_1,piVar7,local_8);
            }
          }
          goto LAB_00549eab;
        }
        pcVar14 = "view %s may not be altered";
        iVar8 = *piVar7;
      }
      else {
        pcVar14 = "there is already another table or index with this name: %s";
        iVar8 = local_8;
      }
      FUN_00553950(param_1,pcVar14,iVar8);
    }
  }
LAB_00549eab:
  FUN_00567370(iVar3,param_2);
  FUN_005521a0(iVar3,local_8);
  *(undefined4 *)(iVar3 + 0x18) = uVar4;
  return;
}


/* FUN_00549ed0 @ 00549ed0  kind=lib  attributed-by=lib-string  size=249 */

int FUN_00549ed0(int param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int local_c;
  undefined4 local_8;
  
  for (puVar1 = *(undefined4 **)(*(int *)(param_2 * 0x10 + 0xc + *(int *)(param_1 + 0x10)) + 0x20);
      puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
    iVar5 = puVar1[2];
    puVar2 = *(uint **)(iVar5 + 8);
    uVar6 = *(uint *)(*(int *)(iVar5 + 0xc) + 0x1c);
    if (uVar6 < 10) {
      uVar6 = 10;
    }
    *puVar2 = uVar6;
    iVar4 = 1;
    uVar6 = 10;
    if (0 < *(int *)(iVar5 + 0x24)) {
      do {
        puVar2[iVar4] = uVar6;
        if (5 < uVar6) {
          uVar6 = uVar6 - 1;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 <= *(int *)(iVar5 + 0x24));
    }
    if (*(char *)(iVar5 + 0x2c) != '\0') {
      puVar2[*(int *)(iVar5 + 0x24)] = 1;
    }
  }
  local_c = param_1;
  uVar3 = *(undefined4 *)(param_2 * 0x10 + *(int *)(param_1 + 0x10));
  local_8 = uVar3;
  iVar5 = FUN_005572d0(param_1,"sqlite_stat1",uVar3);
  if (iVar5 == 0) {
    return 1;
  }
  iVar5 = FUN_0055d980(param_1,"SELECT tbl,idx,stat FROM %Q.sqlite_stat1",uVar3);
  if (iVar5 == 0) {
    *(undefined1 *)(param_1 + 0x38) = 1;
    return 7;
  }
  iVar4 = FUN_00520760(param_1,iVar5,FUN_00529cf0,&local_c,0);
  FUN_005521a0(param_1,iVar5);
  if (iVar4 == 7) {
    *(undefined1 *)(param_1 + 0x38) = 1;
  }
  return iVar4;
}


/* FUN_0054b750 @ 0054b750  kind=lib  attributed-by=lib-string  size=315 */

void FUN_0054b750(int *param_1,int param_2)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  
  iVar2 = *param_1;
  iVar4 = FUN_0054ab50(param_1,0x16,"BEGIN",0,0);
  if (iVar4 == 0) {
    piVar5 = (int *)param_1[2];
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)FUN_0056c7b0(*param_1);
      param_1[2] = (int)piVar5;
      if (piVar5 == (int *)0x0) {
        return;
      }
      FUN_0056bdc0(piVar5,0x94);
    }
    if ((param_2 != 7) && (iVar4 = 0, 0 < *(int *)(iVar2 + 0x14))) {
      param_1 = (int *)0x0;
      do {
        iVar3 = piVar5[7];
        if ((iVar3 < piVar5[8]) || (iVar6 = FUN_0053b4b0(piVar5), iVar6 == 0)) {
          piVar5[7] = piVar5[7] + 1;
          puVar1 = (undefined2 *)(piVar5[1] + iVar3 * 0x14);
          *puVar1 = 0x23;
          *(undefined1 *)((int)puVar1 + 3) = 0;
          *(int *)(puVar1 + 2) = iVar4;
          *(undefined4 *)(puVar1 + 6) = 0;
          *(undefined4 *)(puVar1 + 8) = 0;
          *(uint *)(puVar1 + 4) = (param_2 == 9) + 1;
        }
        uVar7 = 1 << ((byte)iVar4 & 0x1f);
        piVar5[0x1a] = piVar5[0x1a] | uVar7;
        if ((iVar4 != 1) &&
           (*(char *)(*(int *)(*(int *)(*piVar5 + 0x10) + 4 + (int)param_1) + 9) != '\0')) {
          piVar5[0x1b] = piVar5[0x1b] | uVar7;
        }
        param_1 = (int *)((int)param_1 + 0x10);
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(iVar2 + 0x14));
    }
    iVar2 = piVar5[7];
    if ((iVar2 < piVar5[8]) || (iVar4 = FUN_0053b4b0(piVar5), iVar4 == 0)) {
      iVar4 = piVar5[1];
      piVar5[7] = piVar5[7] + 1;
      *(undefined2 *)(iVar4 + iVar2 * 0x14) = 0x22;
      *(undefined1 *)(iVar4 + 3 + iVar2 * 0x14) = 0;
      *(undefined4 *)(iVar4 + 4 + iVar2 * 0x14) = 0;
      *(undefined4 *)(iVar4 + 8 + iVar2 * 0x14) = 0;
      *(undefined4 *)(iVar4 + 0xc + iVar2 * 0x14) = 0;
      *(undefined4 *)(iVar4 + 0x10 + iVar2 * 0x14) = 0;
    }
  }
  return;
}


/* FUN_0054b890 @ 0054b890  kind=lib  attributed-by=lib-string  size=998 */

void FUN_0054b890(int *param_1,int *param_2,int param_3,int param_4,undefined1 param_5,
                 undefined4 param_6,int param_7,undefined4 param_8,int param_9,int param_10)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined1 local_2c [20];
  undefined4 local_18;
  int local_14;
  undefined4 *local_10;
  int *local_c;
  int local_8;
  
  piVar2 = param_1;
  puVar7 = (undefined4 *)0x0;
  iVar1 = *param_1;
  if (param_9 == 0) {
    local_8 = FUN_00568810(param_1,param_2,param_3,&param_1);
    if (-1 < local_8) {
      local_c = param_1;
      goto LAB_0054b965;
    }
  }
  else if (*(int *)(param_3 + 4) == 0) {
    local_8 = 1;
    local_c = param_2;
LAB_0054b965:
    if ((param_7 != 0) && (*(char *)(iVar1 + 0x38) == '\0')) {
      if ((*(char *)(iVar1 + 0x81) != '\0') && (local_8 != 1)) {
        FUN_005521a0(iVar1,*(undefined4 *)(param_7 + 0xc));
        *(undefined4 *)(param_7 + 0xc) = 0;
      }
      iVar4 = FUN_005677f0(piVar2,param_7);
      if (((*(char *)(iVar1 + 0x81) == '\0') && (*(int *)(param_3 + 4) == 0)) && (iVar4 != 0)) {
        param_1 = (int *)0x1;
        if (*(int *)(iVar4 + 0x40) == *(int *)(*(int *)(iVar1 + 0x10) + 0x1c)) {
          local_8 = 1;
        }
      }
      if ((*(char *)(iVar1 + 0x38) == '\0') &&
         ((iVar4 = FUN_005579f0(local_2c,piVar2,local_8,"trigger",local_c), iVar4 == 0 ||
          (iVar4 = FUN_00557ad0(local_2c,param_7), iVar4 == 0)))) {
        local_10 = (undefined4 *)FUN_005677f0(piVar2,param_7);
        if (local_10 == (undefined4 *)0x0) {
          piVar3 = (int *)0x0;
          if (*(char *)(iVar1 + 0x80) == '\x01') {
            *(undefined1 *)(iVar1 + 0x82) = 1;
          }
          goto LAB_0054b8c1;
        }
        if ((*(byte *)((int)local_10 + 0x2a) & 0x10) != 0) {
          pcVar9 = "cannot create triggers on virtual tables";
          goto LAB_0054b8b6;
        }
        param_1 = (int *)FUN_0055e3f0(iVar1,local_c);
        piVar3 = param_1;
        if ((param_1 == (int *)0x0) ||
           (iVar4 = FUN_0054f8c0(piVar2,param_1), piVar3 = param_1, iVar4 != 0)) goto LAB_0054b8c1;
        local_14 = local_8 << 4;
        uVar8 = FUN_00568070(param_1);
        iVar4 = FUN_0055ad50(*(int *)(local_14 + 0xc + *(int *)(iVar1 + 0x10)) + 0x28,
                             (int)((ulonglong)uVar8 >> 0x20),(int)uVar8);
        if (iVar4 != 0) {
          if (param_10 == 0) {
            FUN_00553950(piVar2,"trigger %T already exists",local_c);
            piVar3 = param_1;
          }
          else {
            FUN_00550aa0(piVar2,local_8);
            piVar3 = param_1;
          }
          goto LAB_0054b8c1;
        }
        local_c = (int *)*local_10;
        iVar4 = FUN_005259c0(local_c,"sqlite_",7);
        if (iVar4 == 0) {
          FUN_00553950(piVar2,"cannot create trigger on system table");
          piVar2[0x11] = piVar2[0x11] + 1;
          piVar3 = param_1;
          goto LAB_0054b8c1;
        }
        if (local_10[3] == 0) {
LAB_0054bb49:
          if (param_4 == 0x30) {
            FUN_00553950(piVar2,"cannot create INSTEAD OF trigger on table: %S",param_7,0);
            piVar3 = param_1;
            goto LAB_0054b8c1;
          }
        }
        else {
          if (param_4 != 0x30) {
            pcVar9 = "BEFORE";
            if (param_4 != 0x22) {
              pcVar9 = "AFTER";
            }
            FUN_00553950(piVar2,"cannot create %s trigger on view: %S",pcVar9,param_7,0);
            piVar3 = param_1;
            goto LAB_0054b8c1;
          }
          if (local_10[3] == 0) goto LAB_0054bb49;
        }
        local_8 = FUN_00565260(iVar1,local_10[0x10]);
        local_18 = *(undefined4 *)(*(int *)(iVar1 + 0x10) + local_8 * 0x10);
        uVar6 = local_18;
        if (param_9 != 0) {
          uVar6 = *(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x10);
        }
        if ((local_8 == 1) || (param_9 != 0)) {
          uVar5 = 5;
        }
        else {
          uVar5 = 7;
        }
        iVar4 = FUN_0054ab50(piVar2,uVar5,param_1,local_c,uVar6);
        piVar3 = param_1;
        if (iVar4 != 0) goto LAB_0054b8c1;
        pcVar9 = "sqlite_temp_master";
        if (local_8 != 1) {
          pcVar9 = "sqlite_master";
        }
        iVar4 = FUN_0054ab50(piVar2,0x12,pcVar9,0,local_18);
        piVar3 = param_1;
        if (iVar4 != 0) goto LAB_0054b8c1;
        if (param_4 == 0x30) {
          param_4 = 0x22;
        }
        puVar7 = (undefined4 *)FUN_005522c0(iVar1,0x24);
        piVar3 = param_1;
        if (puVar7 == (undefined4 *)0x0) goto LAB_0054b8c1;
        *puVar7 = param_1;
        uVar6 = FUN_00552450(iVar1,*(undefined4 *)(param_7 + 0x10));
        puVar7[1] = uVar6;
        puVar7[5] = *(undefined4 *)(local_14 + 0xc + *(int *)(iVar1 + 0x10));
        puVar7[6] = local_10[0x10];
        *(undefined1 *)(puVar7 + 2) = param_5;
        *(char *)((int)puVar7 + 9) = (param_4 != 0x22) + '\x01';
        uVar6 = FUN_00536250(iVar1,param_8,1,0);
        puVar7[3] = uVar6;
        uVar6 = FUN_0055b080(iVar1,param_6);
        puVar7[4] = uVar6;
        piVar2[0x80] = (int)puVar7;
      }
    }
  }
  else {
    pcVar9 = "temporary trigger may not have qualified name";
LAB_0054b8b6:
    FUN_00553950(piVar2,pcVar9);
  }
  piVar3 = (int *)0x0;
LAB_0054b8c1:
  FUN_005521a0(iVar1,piVar3);
  FUN_00567370(iVar1,param_7);
  FUN_0055afc0(iVar1,param_6);
  FUN_00555e30(iVar1,param_8);
  if ((piVar2[0x80] == 0) && (puVar7 != (undefined4 *)0x0)) {
    FUN_00552b20(iVar1,puVar7[7]);
    FUN_005521a0(iVar1,*puVar7);
    FUN_005521a0(iVar1,puVar7[1]);
    FUN_00555e30(iVar1,puVar7[3]);
    FUN_0055afc0(iVar1,puVar7[4]);
    FUN_005521a0(iVar1,puVar7);
  }
  return;
}


/* FUN_0054f8c0 @ 0054f8c0  kind=lib  attributed-by=lib-string  size=85 */

undefined4 FUN_0054f8c0(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (((*(char *)(*param_1 + 0x81) == '\0') && (*(char *)((int)param_1 + 0x12) == '\0')) &&
     ((*(uint *)(*param_1 + 0x18) & 0x100) == 0)) {
    iVar1 = FUN_005259c0(param_2,"sqlite_",7);
    if (iVar1 == 0) {
      FUN_00553950(param_1,"object name reserved for internal use: %s",param_2);
      return 1;
    }
  }
  return 0;
}


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


/* FUN_00564420 @ 00564420  kind=lib  attributed-by=lib-string  size=91 */

void FUN_00564420(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_0054ab50(param_1,0x16,"ROLLBACK",0,0);
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
    FUN_0056be90(iVar1,0x22,1,1);
  }
  return;
}


/* FUN_00564bb0 @ 00564bb0  kind=lib  attributed-by=lib-string  size=858 */

int FUN_00564bb0(undefined4 param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  uint local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  local_10 = 0;
  if (*(char *)(param_2 + 0x36) == '\0') {
    pcVar10 = "cannot VACUUM from within a transaction";
  }
  else {
    if (*(int *)(param_2 + 0x84) < 2) {
      uVar1 = *(uint *)(param_2 + 0x18);
      uVar2 = *(undefined4 *)(param_2 + 0x48);
      *(uint *)(param_2 + 0x18) = uVar1 & 0xfffaffff | 0x100500;
      uVar3 = *(undefined4 *)(param_2 + 0x4c);
      uVar4 = *(undefined4 *)(param_2 + 0x98);
      *(undefined4 *)(param_2 + 0x98) = 0;
      local_8 = *(int *)(*(int *)(param_2 + 0x10) + 4);
      iVar9 = *(int *)(param_2 + 0x14);
      local_14 = (uint)*(byte *)(**(int **)(local_8 + 4) + 0xe);
      pcVar10 = "ATTACH \':memory:\' AS vacuum_db;";
      if (*(char *)(param_2 + 0x37) != '\x02') {
        pcVar10 = "ATTACH \'\' AS vacuum_db;";
      }
      iVar6 = FUN_00534bc0(param_2,param_1,pcVar10);
      iVar5 = *(int *)(param_2 + 0x14);
      if (iVar9 < iVar5) {
        local_10 = *(int *)(param_2 + 0x10) + -0x10 + iVar5 * 0x10;
      }
      iVar9 = local_8;
      if (iVar6 == 0) {
        iVar5 = *(int *)(*(int *)(param_2 + 0x10) + -0xc + iVar5 * 0x10);
        FUN_0054c930(iVar5);
        iVar9 = local_8;
        local_c = FUN_0054d580(local_8);
        iVar6 = FUN_00534bc0(param_2,param_1,"PRAGMA vacuum_db.synchronous=OFF");
        if (((iVar6 == 0) && (iVar6 = FUN_00534bc0(param_2,param_1,"BEGIN;"), iVar6 == 0)) &&
           (iVar6 = FUN_0054c3f0(iVar9,2), iVar6 == 0)) {
          if (*(char *)(**(int **)(iVar9 + 4) + 5) == '\x05') {
            *(undefined4 *)(param_2 + 0x40) = 0;
          }
          iVar6 = FUN_0054f2a0(iVar5,*(undefined4 *)(*(int *)(iVar9 + 4) + 0x20),local_c,0);
          if (((iVar6 == 0) &&
              ((local_14 != 0 ||
               (iVar6 = FUN_0054f2a0(iVar5,*(undefined4 *)(param_2 + 0x40),local_c,0), iVar6 == 0)))
              ) && (*(char *)(param_2 + 0x38) == '\0')) {
            if (*(char *)(param_2 + 0x3a) < '\0') {
              iVar6 = FUN_0054d4a0(iVar9);
            }
            else {
              iVar6 = (int)*(char *)(param_2 + 0x3a);
            }
            FUN_0054f150(iVar5,iVar6);
            iVar6 = FUN_00534a60(param_2,param_1,
                                 "SELECT \'CREATE TABLE vacuum_db.\' || substr(sql,14)   FROM sqlite_master WHERE type=\'table\' AND name!=\'sqlite_sequence\'   AND rootpage>0"
                                );
            if (((iVar6 == 0) &&
                (iVar6 = FUN_00534a60(param_2,param_1,
                                      "SELECT \'CREATE INDEX vacuum_db.\' || substr(sql,14)  FROM sqlite_master WHERE sql LIKE \'CREATE INDEX %\' "
                                     ), iVar6 == 0)) &&
               ((iVar6 = FUN_00534a60(param_2,param_1,
                                      "SELECT \'CREATE UNIQUE INDEX vacuum_db.\' || substr(sql,21)   FROM sqlite_master WHERE sql LIKE \'CREATE UNIQUE INDEX %\'"
                                     ), iVar6 == 0 &&
                ((((iVar6 = FUN_00534a60(param_2,param_1,
                                         "SELECT \'INSERT INTO vacuum_db.\' || quote(name) || \' SELECT * FROM main.\' || quote(name) || \';\'FROM main.sqlite_master WHERE type = \'table\' AND name!=\'sqlite_sequence\'   AND rootpage>0"
                                        ), iVar6 == 0 &&
                   (iVar6 = FUN_00534a60(param_2,param_1,
                                         "SELECT \'DELETE FROM vacuum_db.\' || quote(name) || \';\' FROM vacuum_db.sqlite_master WHERE name=\'sqlite_sequence\' "
                                        ), iVar6 == 0)) &&
                  (iVar6 = FUN_00534a60(param_2,param_1,
                                        "SELECT \'INSERT INTO vacuum_db.\' || quote(name) || \' SELECT * FROM main.\' || quote(name) || \';\' FROM vacuum_db.sqlite_master WHERE name==\'sqlite_sequence\';"
                                       ), iVar6 == 0)) &&
                 (iVar6 = FUN_00534bc0(param_2,param_1,
                                       "INSERT INTO vacuum_db.sqlite_master   SELECT type, name, tbl_name, rootpage, sql    FROM main.sqlite_master   WHERE type=\'view\' OR type=\'trigger\'      OR (type=\'table\' AND rootpage=0)"
                                      ), iVar6 == 0)))))) {
              iVar8 = 0;
              do {
                FUN_0054d510(local_8,(&DAT_007125fc)[iVar8],&local_14);
                iVar6 = FUN_0054f6e0(iVar5,(&DAT_007125fc)[iVar8],
                                     (byte)(&DAT_007125fd)[iVar8] + local_14);
                iVar9 = local_8;
                if (iVar6 != 0) goto LAB_00564eaa;
                iVar8 = iVar8 + 2;
              } while (iVar8 < 8);
              iVar6 = FUN_0054cac0(local_8,iVar5);
              if ((iVar6 == 0) && (iVar6 = FUN_0054c930(iVar5), iVar6 == 0)) {
                uVar7 = FUN_0054d4a0(iVar5);
                FUN_0054f150(iVar9,uVar7);
                iVar6 = FUN_0054f2a0(iVar9,*(undefined4 *)(*(int *)(iVar5 + 4) + 0x20),local_c,1);
              }
            }
          }
          else {
            iVar6 = 7;
          }
        }
      }
LAB_00564eaa:
      *(uint *)(param_2 + 0x18) = uVar1;
      *(undefined4 *)(param_2 + 0x48) = uVar2;
      *(undefined4 *)(param_2 + 0x4c) = uVar3;
      *(undefined4 *)(param_2 + 0x98) = uVar4;
      FUN_0054f2a0(iVar9,0xffffffff,0xffffffff,1);
      iVar9 = local_10;
      *(undefined1 *)(param_2 + 0x36) = 1;
      if (local_10 != 0) {
        FUN_0054c710(*(undefined4 *)(local_10 + 4));
        *(undefined4 *)(iVar9 + 4) = 0;
        *(undefined4 *)(iVar9 + 0xc) = 0;
      }
      FUN_00564000(param_2);
      return iVar6;
    }
    pcVar10 = "cannot VACUUM - SQL statements in progress";
  }
  FUN_005670f0(param_1,param_2,pcVar10);
  return 1;
}


/* FUN_00567880 @ 00567880  kind=lib  attributed-by=lib-string  size=947 */

void FUN_00567880(int *param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  byte bVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  bool bVar11;
  char *pcVar12;
  int iVar13;
  byte *local_8;
  
  piVar2 = param_1;
  iVar13 = *param_1;
  iVar4 = FUN_00568810(param_1,param_2,param_3,&local_8);
  if (iVar4 < 0) {
    return;
  }
  if (param_4 != 0) {
    if ((*(int *)(param_3 + 4) != 0) && (iVar4 != 1)) {
      FUN_00553950(param_1,"temporary table name must be unqualified");
      return;
    }
    param_1 = (int *)0x1;
    iVar4 = (int)param_1;
  }
  param_1 = (int *)iVar4;
  piVar2[0x82] = *(int *)local_8;
  piVar2[0x83] = *(int *)(local_8 + 4);
  pbVar5 = (byte *)FUN_0055e3f0(iVar13,local_8);
  if (pbVar5 == (byte *)0x0) {
    return;
  }
  iVar4 = FUN_0054f8c0(piVar2,pbVar5);
  if (iVar4 == 0) {
    if (*(char *)(iVar13 + 0x80) == '\x01') {
      param_4 = 1;
    }
    iVar4 = (int)param_1 * 0x10;
    uVar10 = *(undefined4 *)(iVar4 + *(int *)(iVar13 + 0x10));
    pcVar12 = "sqlite_temp_master";
    if (param_4 != 1) {
      pcVar12 = "sqlite_master";
    }
    iVar6 = FUN_0054ab50(piVar2,0x12,pcVar12,0,uVar10);
    if (iVar6 == 0) {
      if (param_5 == 0) {
        cVar3 = (param_4 != 0) * '\x02' + '\x02';
      }
      else {
        cVar3 = (param_4 == 0) * '\x02' + '\x06';
      }
      if ((param_6 != 0) || (iVar6 = FUN_0054ab50(piVar2,cVar3,pbVar5,0,uVar10), iVar6 == 0)) {
        if (*(char *)((int)piVar2 + 0x1d5) != '\0') {
LAB_00567a37:
          puVar7 = (undefined4 *)FUN_005522c0(iVar13,0x48);
          if (puVar7 == (undefined4 *)0x0) {
            *(undefined1 *)(iVar13 + 0x38) = 1;
            piVar2[0x11] = piVar2[0x11] + 1;
            piVar2[3] = 7;
            FUN_005521a0(iVar13,pbVar5);
            return;
          }
          *(undefined2 *)(puVar7 + 9) = 0xffff;
          *puVar7 = pbVar5;
          puVar7[0x10] = *(undefined4 *)(iVar4 + 0xc + *(int *)(iVar13 + 0x10));
          *(undefined2 *)(puVar7 + 10) = 1;
          puVar7[7] = 1000000;
          piVar2[0x7f] = (int)puVar7;
          if (*(char *)((int)piVar2 + 0x12) == '\0') {
            pcVar12 = "sqlite_sequence";
            do {
              bVar1 = *pbVar5;
              bVar11 = bVar1 < (byte)*pcVar12;
              if (bVar1 != *pcVar12) {
LAB_00567ac0:
                uVar8 = -(uint)bVar11 | 1;
                goto LAB_00567ac5;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar5[1];
              bVar11 = bVar1 < (byte)pcVar12[1];
              if (bVar1 != pcVar12[1]) goto LAB_00567ac0;
              pbVar5 = pbVar5 + 2;
              pcVar12 = pcVar12 + 2;
            } while (bVar1 != 0);
            uVar8 = 0;
LAB_00567ac5:
            if (uVar8 == 0) {
              *(undefined4 **)(puVar7[0x10] + 0x48) = puVar7;
            }
          }
          if (*(char *)(iVar13 + 0x81) != '\0') {
            return;
          }
          iVar4 = FUN_0055ab80(piVar2);
          if (iVar4 == 0) {
            return;
          }
          FUN_0054bc80(piVar2,0,param_1);
          if (param_6 != 0) {
            FUN_0056bdc0(iVar4,0x84);
          }
          iVar6 = piVar2[0x13];
          iVar9 = iVar6 + 1;
          piVar2[100] = iVar9;
          local_8 = (byte *)(iVar6 + 2);
          piVar2[0x65] = (int)local_8;
          piVar2[0x13] = iVar6 + 3;
          FUN_0056bef0(iVar4,0x24,param_1,iVar6 + 3,2);
          FUN_00576ba0(iVar4,param_1);
          uVar10 = FUN_0056be30(iVar4,0x1b,local_8 + 1);
          FUN_0056be90(iVar4,7,(-(uint)((*(uint *)(iVar13 + 0x18) & 0x1000) != 0) & 0xfffffffd) + 4,
                       local_8 + 1);
          FUN_0056bef0(iVar4,0x25,param_1,2,local_8 + 1);
          FUN_0056be90(iVar4,7,*(undefined1 *)(*(int *)(*(int *)(iVar13 + 0x10) + 0xc) + 0x4d),
                       local_8 + 1);
          FUN_0056bef0(iVar4,0x25,param_1,5,local_8 + 1);
          FUN_00573d80(iVar4,uVar10);
          if ((param_5 == 0) && (param_6 == 0)) {
            uVar10 = 0x69;
            iVar13 = (int)param_1;
          }
          else {
            iVar13 = 0;
            uVar10 = 7;
          }
          FUN_0056be90(iVar4,uVar10,iVar13,local_8);
          FUN_0055e4f0(piVar2,param_1);
          FUN_0056be90(iVar4,0x38,0,iVar9);
          FUN_0056be90(iVar4,10,0,iVar6 + 3);
          FUN_0056bef0(iVar4,0x39,0,iVar6 + 3,iVar9);
          FUN_0056c490(iVar4,8);
          FUN_0056bdc0(iVar4,0x2d);
          return;
        }
        uVar10 = *(undefined4 *)(iVar4 + *(int *)(iVar13 + 0x10));
        iVar6 = FUN_005637c0(piVar2);
        if (iVar6 == 0) {
          iVar6 = FUN_005572d0(iVar13,pbVar5,uVar10);
          if (iVar6 == 0) {
            iVar6 = FUN_00557190(iVar13,pbVar5,uVar10);
            if (iVar6 == 0) goto LAB_00567a37;
            pcVar12 = "there is already an index named %s";
            local_8 = pbVar5;
          }
          else {
            if (param_7 != 0) {
              FUN_00550aa0(piVar2,param_1);
              FUN_005521a0(iVar13,pbVar5);
              return;
            }
            pcVar12 = "table %T already exists";
          }
          FUN_00553950(piVar2,pcVar12,local_8);
        }
      }
    }
  }
  FUN_005521a0(iVar13,pbVar5);
  return;
}


/* FUN_00568b40 @ 00568b40  kind=lib  attributed-by=lib-string  size=7341 */

/* WARNING: Removing unreachable block (ram,0x0056a639) */
/* WARNING: Removing unreachable block (ram,0x0056a644) */
/* WARNING: Removing unreachable block (ram,0x0056a65f) */
/* WARNING: Removing unreachable block (ram,0x0056a666) */
/* WARNING: Removing unreachable block (ram,0x0056a67e) */
/* WARNING: Removing unreachable block (ram,0x0056a68f) */
/* WARNING: Removing unreachable block (ram,0x0056a693) */
/* WARNING: Removing unreachable block (ram,0x0056a6ad) */
/* WARNING: Removing unreachable block (ram,0x0056a6b8) */
/* WARNING: Removing unreachable block (ram,0x0056a682) */
/* WARNING: Removing unreachable block (ram,0x0056a66d) */
/* WARNING: Removing unreachable block (ram,0x0056a64b) */
/* WARNING: Removing unreachable block (ram,0x0056a6d0) */

void FUN_00568b40(int *param_1,int param_2,int *param_3,undefined4 param_4,int param_5)

{
  byte *pbVar1;
  undefined2 *puVar2;
  int iVar3;
  byte bVar4;
  ushort uVar5;
  char *pcVar6;
  int *piVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  uint uVar13;
  uint *puVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  byte *pbVar18;
  undefined4 *puVar19;
  byte *pbVar20;
  uint *puVar21;
  undefined8 local_94;
  undefined8 local_8c;
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 local_74;
  int local_6c;
  uint local_68;
  int local_64;
  char *local_60;
  int local_5c;
  byte *local_58;
  undefined4 *local_54;
  uint local_50;
  uint *local_4c;
  int local_48;
  int local_44;
  int *local_40;
  int local_3c;
  int local_38;
  uint *local_34;
  int *local_30;
  uint *local_2c;
  uint *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  uint *local_c;
  int *local_8;
  
  local_1c = *param_1;
  local_40 = (int *)0x0;
  local_14 = 0;
  local_60 = (char *)0x0;
  local_44 = 0;
  local_64 = 0;
  local_58 = (byte *)0x0;
  local_74 = 0;
  if ((param_1[0x11] != 0) || (*(char *)(local_1c + 0x38) != '\0')) {
    local_6c = param_2;
    iVar15 = local_14;
    goto LAB_0056a7bd;
  }
  local_6c = param_2;
  piVar9 = (int *)FUN_005677f0(param_1,param_2);
  iVar15 = local_14;
  local_8 = piVar9;
  if (piVar9 == (int *)0x0) goto LAB_0056a7bd;
  local_24 = FUN_00565260(*param_1,piVar9[0x10]);
  local_48 = FUN_005687a0(param_1,piVar9,0x6b,param_3,&local_68);
  local_50 = (uint)(piVar9[3] != 0);
  iVar10 = FUN_00576bd0(param_1,piVar9);
  iVar15 = local_14;
  if (((iVar10 != 0) ||
      (iVar10 = FUN_0055cf00(param_1,piVar9,local_68), iVar15 = local_14, iVar10 != 0)) ||
     (local_14 = FUN_00552230(local_1c,(int)*(short *)((int)piVar9 + 0x26) << 2), iVar15 = local_14,
     local_14 == 0)) goto LAB_0056a7bd;
  iVar15 = 0;
  if (0 < *(short *)((int)piVar9 + 0x26)) {
    do {
      *(undefined4 *)(local_14 + iVar15 * 4) = 0xffffffff;
      iVar15 = iVar15 + 1;
    } while (iVar15 < *(short *)((int)piVar9 + 0x26));
  }
  local_18 = param_1[0x12];
  *(int *)(param_2 + 0x34) = local_18;
  param_1[0x12] = param_1[0x12] + 1;
  iVar10 = param_1[0x12];
  for (iVar15 = piVar9[2]; iVar15 != 0; iVar15 = *(int *)(iVar15 + 0x14)) {
    iVar10 = iVar10 + 1;
    param_1[0x12] = iVar10;
  }
  local_8c = 0;
  local_84 = 0;
  local_7c = 0;
  local_94 = CONCAT44(param_2,param_1);
  local_3c = 0;
  local_10 = 0;
  if (0 < *param_3) {
    local_30 = (int *)0x0;
    do {
      piVar9 = local_30;
      iVar10 = FUN_005640a0(&local_94,*(undefined4 *)(param_3[2] + (int)local_30));
      iVar15 = local_14;
      if (iVar10 != 0) goto LAB_0056a7bd;
      iVar10 = 0;
      if (0 < *(short *)((int)local_8 + 0x26)) {
        local_54 = (undefined4 *)(param_3[2] + (int)piVar9);
        puVar19 = (undefined4 *)local_8[1];
        do {
          pbVar18 = (byte *)*puVar19;
          pbVar20 = (byte *)local_54[1];
          bVar4 = *pbVar18;
          while ((bVar4 != 0 && ((&DAT_007120d8)[bVar4] == (&DAT_007120d8)[*pbVar20]))) {
            pbVar1 = pbVar18 + 1;
            pbVar18 = pbVar18 + 1;
            pbVar20 = pbVar20 + 1;
            bVar4 = *pbVar1;
          }
          piVar9 = local_30;
          if ((&DAT_007120d8)[*pbVar18] == (&DAT_007120d8)[*pbVar20]) {
            if (iVar10 == (short)local_8[9]) {
              local_3c = 1;
              local_60 = (char *)*local_54;
            }
            *(uint *)(local_14 + iVar10 * 4) = local_10;
            break;
          }
          iVar10 = iVar10 + 1;
          puVar19 = puVar19 + 6;
        } while (iVar10 < *(short *)((int)local_8 + 0x26));
      }
      if (*(short *)((int)local_8 + 0x26) <= iVar10) {
        iVar15 = param_3[2];
        iVar11 = FUN_0055cf90(*(undefined4 *)(iVar15 + 4 + (int)piVar9));
        if (iVar11 == 0) {
          FUN_00553950(param_1,"no such column: %s",
                       *(undefined4 *)(param_3[2] + 4 + local_10 * 0x14));
          *(undefined1 *)((int)param_1 + 0x11) = 1;
          iVar15 = local_14;
          goto LAB_0056a7bd;
        }
        local_60 = *(char **)(iVar15 + (int)piVar9);
        local_3c = 1;
      }
      iVar11 = FUN_0054ab50(param_1,0x17,*local_8,*(undefined4 *)(local_8[1] + iVar10 * 0x18),
                            *(undefined4 *)(*(int *)(local_1c + 0x10) + local_24 * 0x10));
      iVar15 = local_14;
      if (iVar11 == 1) goto LAB_0056a7bd;
      if (iVar11 == 2) {
        *(undefined4 *)(local_14 + iVar10 * 4) = 0xffffffff;
      }
      local_10 = local_10 + 1;
      local_30 = piVar9 + 5;
      piVar9 = local_8;
    } while ((int)local_10 < *param_3);
  }
  local_38 = FUN_00558580(param_1,piVar9,local_14,local_3c);
  iVar15 = piVar9[2];
  iVar10 = 0;
  if (iVar15 == 0) {
LAB_00568e8c:
    piVar12 = (int *)0x0;
  }
  else {
    do {
      iVar15 = *(int *)(iVar15 + 0x14);
      iVar10 = iVar10 + 1;
    } while (iVar15 != 0);
    if (iVar10 < 1) goto LAB_00568e8c;
    piVar12 = (int *)FUN_00552230(local_1c,iVar10 * 4);
    iVar15 = local_14;
    local_40 = piVar12;
    if (piVar12 == (int *)0x0) goto LAB_0056a7bd;
  }
  for (iVar15 = piVar9[2]; iVar15 != 0; iVar15 = *(int *)(iVar15 + 0x14)) {
    if ((local_38 == 0) && (local_3c == 0)) {
      iVar10 = 0;
      if (0 < *(int *)(iVar15 + 0x24)) {
        piVar9 = *(int **)(iVar15 + 4);
        iVar11 = 0;
        do {
          if (-1 < *(int *)(local_14 + *piVar9 * 4)) {
            param_1[0x13] = param_1[0x13] + 1;
            iVar10 = param_1[0x13];
            break;
          }
          iVar11 = iVar11 + 1;
          piVar9 = piVar9 + 1;
        } while (iVar11 < *(int *)(iVar15 + 0x24));
      }
    }
    else {
      param_1[0x13] = param_1[0x13] + 1;
      iVar10 = param_1[0x13];
    }
    *piVar12 = iVar10;
    piVar12 = piVar12 + 1;
  }
  piVar9 = (int *)param_1[2];
  local_30 = piVar9;
  if (piVar9 == (int *)0x0) {
    iVar15 = *param_1;
    piVar9 = (int *)FUN_00552230(iVar15,0xc0);
    if (piVar9 == (int *)0x0) {
      piVar9 = (int *)0x0;
      local_30 = (int *)0x0;
    }
    else {
      local_30 = piVar9;
      memset(piVar9,0,0xc0);
      *piVar9 = iVar15;
      if (*(int *)(iVar15 + 4) != 0) {
        *(int **)(*(int *)(iVar15 + 4) + 0x38) = piVar9;
      }
      piVar9[0xf] = *(int *)(iVar15 + 4);
      piVar9[0xe] = 0;
      *(int **)(iVar15 + 4) = piVar9;
      piVar9[0xc] = 0x26bceaa5;
    }
    param_1[2] = (int)piVar9;
    iVar15 = local_14;
    if (piVar9 == (int *)0x0) goto LAB_0056a7bd;
    iVar15 = piVar9[7];
    if ((iVar15 < piVar9[8]) || (iVar10 = FUN_0053b4b0(piVar9), iVar10 == 0)) {
      iVar10 = piVar9[1];
      piVar9[7] = piVar9[7] + 1;
      *(undefined2 *)(iVar10 + iVar15 * 0x14) = 0x94;
      *(undefined1 *)(iVar10 + 3 + iVar15 * 0x14) = 0;
      *(undefined4 *)(iVar10 + 4 + iVar15 * 0x14) = 0;
      *(undefined4 *)(iVar10 + 8 + iVar15 * 0x14) = 0;
      *(undefined4 *)(iVar10 + 0xc + iVar15 * 0x14) = 0;
      *(undefined4 *)(iVar10 + 0x10 + iVar15 * 0x14) = 0;
    }
  }
  if (*(char *)((int)param_1 + 0x12) == '\0') {
    piVar9[0x18] = piVar9[0x18] | 0x10;
  }
  piVar12 = param_1;
  if ((int *)param_1[0x6c] != (int *)0x0) {
    piVar12 = (int *)param_1[0x6c];
  }
  FUN_00550aa0(param_1,local_24);
  iVar15 = local_14;
  *(byte *)((int)piVar12 + 0x17) = *(byte *)((int)piVar12 + 0x17) | 1;
  piVar12[0x55] = piVar12[0x55] | 1 << ((byte)local_24 & 0x1f);
  if ((*(byte *)((int)local_8 + 0x2a) & 0x10) != 0) {
    FUN_0057b9f0(param_1,param_2,local_8,param_3,local_60,local_14,param_4,param_5);
    param_4 = 0;
    local_6c = 0;
    goto LAB_0056a7bd;
  }
  param_1[0x13] = param_1[0x13] + 1;
  puVar21 = (uint *)param_1[0x13];
  local_28 = (uint *)((int)puVar21 + 1);
  param_1[0x13] = (int)local_28;
  if ((local_48 != 0) || (local_38 != 0)) {
    local_58 = (byte *)((int)puVar21 + 2);
    param_1[0x13] = (int)((int)*(short *)((int)local_8 + 0x26) + (int)local_28);
  }
  if (((local_3c != 0) || (local_48 != 0)) || (local_2c = local_28, local_38 != 0)) {
    param_1[0x13] = param_1[0x13] + 1;
    local_2c = (uint *)param_1[0x13];
  }
  local_20 = param_1[0x13] + 1;
  param_1[0x13] = (int)*(short *)((int)local_8 + 0x26) + param_1[0x13];
  local_34 = puVar21;
  if (local_50 != 0) {
    local_74 = CONCAT44(param_1,param_1[0x81]);
    param_1[0x81] = *local_8;
    FUN_0055dc60(param_1,local_8,param_4,local_18);
  }
  iVar10 = FUN_005640a0(&local_94,param_4);
  iVar15 = local_14;
  if (iVar10 != 0) goto LAB_0056a7bd;
  iVar15 = piVar9[7];
  if ((iVar15 < piVar9[8]) || (iVar10 = FUN_0053b4b0(piVar9), iVar10 == 0)) {
    iVar10 = piVar9[1];
    piVar9[7] = piVar9[7] + 1;
    *(undefined2 *)(iVar10 + iVar15 * 0x14) = 10;
    *(undefined1 *)(iVar10 + 3 + iVar15 * 0x14) = 0;
    *(undefined4 *)(iVar10 + 4 + iVar15 * 0x14) = 0;
    *(uint **)(iVar10 + 8 + iVar15 * 0x14) = puVar21;
    *(uint **)(iVar10 + 0xc + iVar15 * 0x14) = local_28;
    *(undefined4 *)(iVar10 + 0x10 + iVar15 * 0x14) = 0;
  }
  iVar10 = FUN_005788a0(param_1,param_2,param_4,0,0,4,0);
  iVar15 = local_14;
  if (iVar10 == 0) goto LAB_0056a7bd;
  local_54 = (undefined4 *)(uint)*(byte *)(iVar10 + 0xc);
  iVar15 = piVar9[7];
  if ((iVar15 < piVar9[8]) || (iVar11 = FUN_0053b4b0(piVar9), iVar11 == 0)) {
    iVar11 = piVar9[1];
    piVar9[7] = piVar9[7] + 1;
    *(int *)(iVar11 + 4 + iVar15 * 0x14) = local_18;
    *(undefined2 *)(iVar11 + iVar15 * 0x14) = 0x41;
    *(undefined1 *)(iVar11 + 3 + iVar15 * 0x14) = 0;
    *(uint **)(iVar11 + 8 + iVar15 * 0x14) = local_28;
    *(undefined4 *)(iVar11 + 0xc + iVar15 * 0x14) = 0;
    *(undefined4 *)(iVar11 + 0x10 + iVar15 * 0x14) = 0;
  }
  if ((local_54 == (undefined4 *)0x0) &&
     ((iVar15 = piVar9[7], iVar15 < piVar9[8] || (iVar11 = FUN_0053b4b0(piVar9), iVar11 == 0)))) {
    iVar11 = piVar9[1];
    piVar9[7] = piVar9[7] + 1;
    *(uint **)(iVar11 + 4 + iVar15 * 0x14) = local_34;
    *(undefined2 *)(iVar11 + iVar15 * 0x14) = 0x70;
    *(undefined1 *)(iVar11 + 3 + iVar15 * 0x14) = 0;
    *(uint **)(iVar11 + 8 + iVar15 * 0x14) = local_28;
    *(undefined4 *)(iVar11 + 0xc + iVar15 * 0x14) = 0;
    *(undefined4 *)(iVar11 + 0x10 + iVar15 * 0x14) = 0;
  }
  FUN_005794a0(iVar10);
  if (((*(byte *)(local_1c + 0x18) & 0x10) != 0) && (param_1[0x6d] == 0)) {
    param_1[0x13] = param_1[0x13] + 1;
    iVar15 = piVar9[7];
    iVar10 = param_1[0x13];
    local_64 = iVar10;
    if ((iVar15 < piVar9[8]) || (iVar11 = FUN_0053b4b0(piVar9), iVar11 == 0)) {
      iVar11 = piVar9[1];
      piVar9[7] = piVar9[7] + 1;
      *(undefined2 *)(iVar11 + iVar15 * 0x14) = 7;
      *(undefined1 *)(iVar11 + 3 + iVar15 * 0x14) = 0;
      *(undefined4 *)(iVar11 + 4 + iVar15 * 0x14) = 0;
      *(int *)(iVar11 + 8 + iVar15 * 0x14) = iVar10;
      *(undefined4 *)(iVar11 + 0xc + iVar15 * 0x14) = 0;
      *(undefined4 *)(iVar11 + 0x10 + iVar15 * 0x14) = 0;
    }
  }
  piVar12 = local_8;
  if (local_50 == 0) {
    if (local_54 == (undefined4 *)0x0) {
      FUN_0055e5f0(param_1,local_18,local_24,local_8,0x28);
    }
    if (param_5 == 5) {
LAB_00569282:
      iVar10 = 1;
      local_44 = 1;
    }
    else {
      iVar15 = piVar12[2];
      iVar10 = 0;
      local_44 = 0;
      for (; iVar15 != 0; iVar15 = *(int *)(iVar15 + 0x14)) {
        if (*(char *)(iVar15 + 0x2c) == '\x05') goto LAB_00569282;
      }
    }
    iVar15 = piVar12[2];
    local_10 = 0;
    uVar13 = local_10;
    while (local_5c = iVar15, local_10 = uVar13, iVar15 != 0) {
      if ((iVar10 != 0) || (iVar10 = 0, 0 < local_40[uVar13])) {
        local_4c = (uint *)FUN_0055b2a0(param_1,iVar15);
        iVar10 = piVar9[8];
        local_c = *(uint **)(iVar15 + 0x28);
        iVar15 = piVar9[7];
        if (iVar15 < iVar10) {
LAB_00569338:
          piVar9[7] = piVar9[7] + 1;
          puVar2 = (undefined2 *)(piVar9[1] + iVar15 * 0x14);
          *(uint *)(puVar2 + 2) = local_18 + 1 + uVar13;
          *(uint **)(puVar2 + 4) = local_c;
          *puVar2 = 0x28;
          *(undefined1 *)((int)puVar2 + 3) = 0;
          *(int *)(puVar2 + 6) = local_24;
          *(undefined4 *)(puVar2 + 8) = 0;
        }
        else {
          if (iVar10 == 0) {
            iVar10 = 0x33;
          }
          else {
            iVar10 = iVar10 * 2;
          }
          uVar13 = FUN_00552390(*piVar9,piVar9[1],iVar10 * 0x14);
          if (uVar13 != 0) {
            iVar10 = *piVar9;
            if (((iVar10 == 0) || (uVar13 < *(uint *)(iVar10 + 0x104))) ||
               (*(uint *)(iVar10 + 0x108) <= uVar13)) {
              uVar16 = (*DAT_00766608._4_4_)(uVar13);
            }
            else {
              uVar16 = (uint)*(ushort *)(iVar10 + 0xe8);
            }
            piVar9[1] = uVar13;
            piVar9[8] = uVar16 / 0x14;
            uVar13 = local_10;
            goto LAB_00569338;
          }
          iVar15 = 1;
          uVar13 = local_10;
        }
        iVar10 = piVar9[1];
        iVar11 = *piVar9;
        if ((iVar10 == 0) || (*(char *)(iVar11 + 0x38) != '\0')) {
          FUN_00539320(iVar11,0xfffffff0,local_4c);
          iVar10 = local_44;
        }
        else {
          if (iVar15 < 0) {
            iVar15 = piVar9[7] + -1;
          }
          iVar3 = iVar10 + iVar15 * 0x14;
          FUN_00539320(iVar11,(int)*(char *)(iVar3 + 1),
                       *(undefined4 *)(iVar10 + 0x10 + iVar15 * 0x14));
          *(undefined4 *)(iVar3 + 0x10) = 0;
          iVar10 = local_44;
          uVar13 = local_10;
          if (local_4c == (uint *)0x0) {
            *(undefined4 *)(iVar3 + 0x10) = 0;
            *(undefined1 *)(iVar3 + 1) = 0;
          }
          else {
            *(uint **)(iVar3 + 0x10) = local_4c;
            *(undefined1 *)(iVar3 + 1) = 0xfa;
          }
        }
      }
      uVar13 = uVar13 + 1;
      iVar15 = *(int *)(local_5c + 0x14);
    }
  }
  uVar13 = piVar9[7];
  if (local_54 == (undefined4 *)0x0) {
    local_10 = uVar13;
    if (((int)uVar13 < piVar9[8]) || (iVar15 = FUN_0053b4b0(piVar9), iVar15 == 0)) {
      iVar15 = piVar9[1];
      piVar9[7] = piVar9[7] + 1;
      *(uint **)(iVar15 + 4 + uVar13 * 0x14) = local_34;
      *(undefined2 *)(iVar15 + uVar13 * 0x14) = 0x71;
      *(undefined1 *)(iVar15 + 3 + uVar13 * 0x14) = 0;
      *(undefined4 *)(iVar15 + 8 + uVar13 * 0x14) = 0;
      *(uint **)(iVar15 + 0xc + uVar13 * 0x14) = local_28;
      *(undefined4 *)(iVar15 + 0x10 + uVar13 * 0x14) = 0;
    }
    else {
      local_10 = 1;
    }
  }
  else {
    if (((int)uVar13 < piVar9[8]) || (iVar15 = FUN_0053b4b0(piVar9), iVar15 == 0)) {
      iVar15 = piVar9[1];
      piVar9[7] = piVar9[7] + 1;
      *(undefined2 *)(iVar15 + uVar13 * 0x14) = 0x4a;
      *(undefined1 *)(iVar15 + 3 + uVar13 * 0x14) = 0;
      *(uint **)(iVar15 + 4 + uVar13 * 0x14) = local_28;
      *(undefined4 *)(iVar15 + 8 + uVar13 * 0x14) = 0;
      *(undefined4 *)(iVar15 + 0xc + uVar13 * 0x14) = 0;
      *(undefined4 *)(iVar15 + 0x10 + uVar13 * 0x14) = 0;
    }
    else {
      uVar13 = 1;
    }
    uVar16 = piVar9[7];
    local_10 = uVar16;
    if (((int)uVar16 < piVar9[8]) || (iVar15 = FUN_0053b4b0(piVar9), iVar15 == 0)) {
      iVar15 = piVar9[1];
      piVar9[7] = piVar9[7] + 1;
      *(undefined2 *)(iVar15 + uVar16 * 0x14) = 1;
      *(undefined1 *)(iVar15 + 3 + uVar16 * 0x14) = 0;
      *(undefined4 *)(iVar15 + 4 + uVar16 * 0x14) = 0;
      *(undefined4 *)(iVar15 + 8 + uVar16 * 0x14) = 0;
      *(undefined4 *)(iVar15 + 0xc + uVar16 * 0x14) = 0;
      *(undefined4 *)(iVar15 + 0x10 + uVar16 * 0x14) = 0;
    }
    else {
      local_10 = 1;
    }
    if ((-1 < (int)uVar13) && (uVar13 < (uint)piVar9[7])) {
      *(int *)(piVar9[1] + 8 + uVar13 * 0x14) = piVar9[7];
    }
  }
  iVar15 = piVar9[7];
  iVar10 = piVar9[8];
  if (iVar15 < iVar10) {
LAB_00569574:
    iVar10 = piVar9[1];
    piVar9[7] = piVar9[7] + 1;
    *(int *)(iVar10 + 4 + iVar15 * 0x14) = local_18;
    *(uint *)(iVar10 + 8 + iVar15 * 0x14) = local_10;
    *(undefined2 *)(iVar10 + iVar15 * 0x14) = 0x36;
    *(undefined1 *)(iVar10 + 3 + iVar15 * 0x14) = 0;
    *(uint **)(iVar10 + 0xc + iVar15 * 0x14) = local_28;
    *(undefined4 *)(iVar10 + 0x10 + iVar15 * 0x14) = 0;
  }
  else {
    if (iVar10 == 0) {
      iVar10 = 0x33;
    }
    else {
      iVar10 = iVar10 * 2;
    }
    uVar13 = FUN_00552390(*piVar9,piVar9[1],iVar10 * 0x14);
    if (uVar13 != 0) {
      iVar10 = *piVar9;
      if (((iVar10 == 0) || (uVar13 < *(uint *)(iVar10 + 0x104))) ||
         (*(uint *)(iVar10 + 0x108) <= uVar13)) {
        uVar16 = (*DAT_00766608._4_4_)(uVar13);
      }
      else {
        uVar16 = (uint)*(ushort *)(iVar10 + 0xe8);
      }
      piVar9[8] = uVar16 / 0x14;
      piVar9[1] = uVar13;
      goto LAB_00569574;
    }
  }
  puVar21 = local_2c;
  if (local_3c != 0) {
    if ((local_60 == (char *)0x0) || (*local_60 != -0x7c)) {
      local_c = (uint *)FUN_00554e20(param_1,local_60,local_2c);
      if (((local_c != puVar21) && (iVar15 = param_1[2], iVar15 != 0)) &&
         ((iVar10 = *(int *)(iVar15 + 0x1c), iVar10 < *(int *)(iVar15 + 0x20) ||
          (iVar11 = FUN_0053b4b0(iVar15), iVar11 == 0)))) {
        iVar11 = *(int *)(iVar15 + 4);
        *(int *)(iVar15 + 0x1c) = *(int *)(iVar15 + 0x1c) + 1;
        *(undefined2 *)(iVar11 + iVar10 * 0x14) = 0xf;
        goto LAB_005695eb;
      }
    }
    else {
      local_c = *(uint **)(local_60 + 0x18);
      iVar15 = param_1[2];
      iVar10 = *(int *)(iVar15 + 0x1c);
      if ((iVar10 < *(int *)(iVar15 + 0x20)) || (iVar11 = FUN_0053b4b0(iVar15), iVar11 == 0)) {
        iVar11 = *(int *)(iVar15 + 4);
        *(int *)(iVar15 + 0x1c) = *(int *)(iVar15 + 0x1c) + 1;
        *(undefined2 *)(iVar11 + iVar10 * 0x14) = 0xe;
LAB_005695eb:
        *(undefined1 *)(iVar11 + 3 + iVar10 * 0x14) = 0;
        *(uint **)(iVar11 + 4 + iVar10 * 0x14) = local_c;
        *(uint **)(iVar11 + 8 + iVar10 * 0x14) = local_2c;
        *(undefined4 *)(iVar11 + 0xc + iVar10 * 0x14) = 0;
        *(undefined4 *)(iVar11 + 0x10 + iVar10 * 0x14) = 0;
      }
    }
    puVar21 = local_2c;
    iVar15 = piVar9[7];
    if ((iVar15 < piVar9[8]) || (iVar10 = FUN_0053b4b0(piVar9), iVar10 == 0)) {
      iVar10 = piVar9[1];
      piVar9[7] = piVar9[7] + 1;
      *(undefined2 *)(iVar10 + iVar15 * 0x14) = 0x15;
      *(undefined1 *)(iVar10 + 3 + iVar15 * 0x14) = 0;
      *(uint **)(iVar10 + 4 + iVar15 * 0x14) = puVar21;
      *(undefined4 *)(iVar10 + 8 + iVar15 * 0x14) = 0;
      *(undefined4 *)(iVar10 + 0xc + iVar15 * 0x14) = 0;
      *(undefined4 *)(iVar10 + 0x10 + iVar15 * 0x14) = 0;
    }
  }
  piVar12 = local_8;
  if (local_38 == 0) {
    if (local_48 != 0) {
      uVar13 = 0;
      goto LAB_005696c5;
    }
  }
  else {
    uVar13 = FUN_005583e0(param_1,local_8);
LAB_005696c5:
    uVar16 = FUN_00568420(param_1,local_48,param_3,0,3,piVar12,param_5);
    local_34 = (uint *)(uVar13 | uVar16);
    iVar15 = 0;
    piVar12 = local_8;
    if (0 < *(short *)((int)local_8 + 0x26)) {
      do {
        if (((*(int *)(local_14 + iVar15 * 4) < 0) || (local_34 == (uint *)0xffffffff)) ||
           ((iVar15 < 0x20 && (((uint)local_34 & 1 << ((byte)iVar15 & 0x1f)) != 0)))) {
          FUN_00554810(piVar9,piVar12,local_18,iVar15,local_58 + iVar15);
          piVar12 = local_8;
        }
        else {
          local_c = (uint *)piVar9[7];
          iVar10 = piVar9[8];
          if (iVar10 <= (int)local_c) {
            if (iVar10 == 0) {
              iVar10 = 0x33;
            }
            else {
              iVar10 = iVar10 * 2;
            }
            uVar13 = FUN_00552390(*piVar9,piVar9[1],iVar10 * 0x14);
            piVar12 = local_8;
            if (uVar13 == 0) goto LAB_005697f0;
            iVar10 = *piVar9;
            if (((iVar10 == 0) || (uVar13 < *(uint *)(iVar10 + 0x104))) ||
               (*(uint *)(iVar10 + 0x108) <= uVar13)) {
              uVar16 = (*DAT_00766608._4_4_)(uVar13);
            }
            else {
              uVar16 = (uint)*(ushort *)(iVar10 + 0xe8);
            }
            piVar9[8] = uVar16 / 0x14;
            piVar9[1] = uVar13;
            piVar12 = local_8;
          }
          piVar9[7] = piVar9[7] + 1;
          puVar2 = (undefined2 *)(piVar9[1] + (int)local_c * 0x14);
          *puVar2 = 10;
          *(undefined1 *)((int)puVar2 + 3) = 0;
          *(undefined4 *)(puVar2 + 2) = 0;
          *(byte **)(puVar2 + 4) = local_58 + iVar15;
          *(undefined4 *)(puVar2 + 6) = 0;
          *(undefined4 *)(puVar2 + 8) = 0;
        }
LAB_005697f0:
        iVar15 = iVar15 + 1;
      } while (iVar15 < *(short *)((int)piVar12 + 0x26));
    }
    if (local_3c == 0) {
      iVar15 = piVar9[7];
      iVar10 = piVar9[8];
      if (iVar10 <= iVar15) {
        if (iVar10 == 0) {
          iVar10 = 0x33;
        }
        else {
          iVar10 = iVar10 * 2;
        }
        uVar13 = FUN_00552390(*piVar9,piVar9[1],iVar10 * 0x14);
        if (uVar13 == 0) goto LAB_005698a8;
        iVar10 = *piVar9;
        if (((iVar10 == 0) || (uVar13 < *(uint *)(iVar10 + 0x104))) ||
           (*(uint *)(iVar10 + 0x108) <= uVar13)) {
          uVar16 = (*DAT_00766608._4_4_)(uVar13);
        }
        else {
          uVar16 = (uint)*(ushort *)(iVar10 + 0xe8);
        }
        piVar9[8] = uVar16 / 0x14;
        piVar9[1] = uVar13;
      }
      iVar10 = piVar9[1];
      piVar9[7] = piVar9[7] + 1;
      *(uint **)(iVar10 + 4 + iVar15 * 0x14) = local_28;
      *(undefined2 *)(iVar10 + iVar15 * 0x14) = 0xe;
      *(undefined1 *)(iVar10 + 3 + iVar15 * 0x14) = 0;
      *(uint **)(iVar10 + 8 + iVar15 * 0x14) = local_2c;
      *(undefined4 *)(iVar10 + 0xc + iVar15 * 0x14) = 0;
      *(undefined4 *)(iVar10 + 0x10 + iVar15 * 0x14) = 0;
    }
  }
LAB_005698a8:
  piVar12 = local_8;
  local_58 = (byte *)FUN_00568420(param_1,local_48,param_3,1,1,local_8,param_5);
  iVar15 = piVar9[7];
  local_c = (uint *)(local_20 + -1 + (int)*(short *)((int)piVar12 + 0x26));
  iVar10 = piVar9[8];
  if (iVar15 < iVar10) {
LAB_00569940:
    iVar10 = piVar9[1];
    piVar9[7] = piVar9[7] + 1;
    *(undefined2 *)(iVar10 + iVar15 * 0x14) = 10;
    *(undefined1 *)(iVar10 + 3 + iVar15 * 0x14) = 0;
    *(undefined4 *)(iVar10 + 4 + iVar15 * 0x14) = 0;
    *(int *)(iVar10 + 8 + iVar15 * 0x14) = local_20;
    *(uint **)(iVar10 + 0xc + iVar15 * 0x14) = local_c;
    *(undefined4 *)(iVar10 + 0x10 + iVar15 * 0x14) = 0;
  }
  else {
    if (iVar10 == 0) {
      iVar10 = 0x33;
    }
    else {
      iVar10 = iVar10 * 2;
    }
    uVar13 = FUN_00552390(*piVar9,piVar9[1],iVar10 * 0x14);
    if (uVar13 != 0) {
      iVar10 = *piVar9;
      if (((iVar10 == 0) || (uVar13 < *(uint *)(iVar10 + 0x104))) ||
         (*(uint *)(iVar10 + 0x108) <= uVar13)) {
        uVar16 = (*DAT_00766608._4_4_)(uVar13);
      }
      else {
        uVar16 = (uint)*(ushort *)(iVar10 + 0xe8);
      }
      piVar9[8] = uVar16 / 0x14;
      piVar9[1] = uVar13;
      goto LAB_00569940;
    }
  }
  local_24 = 0;
  piVar12 = local_8;
  iVar15 = local_20;
  if (0 < *(short *)((int)local_8 + 0x26)) {
    do {
      iVar10 = local_24;
      if (local_24 != (short)piVar12[9]) {
        iVar11 = *(int *)(local_14 + local_24 * 4);
        if (iVar11 < 0) {
          if ((((local_68 & 1) == 0) || (0x1f < local_24)) ||
             (((uint)local_58 & 1 << ((byte)local_24 & 0x1f)) != 0)) {
            iVar15 = piVar9[7];
            iVar10 = piVar9[8];
            if (iVar15 < iVar10) {
LAB_00569c27:
              piVar9[7] = piVar9[7] + 1;
              puVar2 = (undefined2 *)(piVar9[1] + iVar15 * 0x14);
              *(int *)(puVar2 + 2) = local_18;
              *puVar2 = 0x1d;
              *(undefined1 *)((int)puVar2 + 3) = 0;
              *(int *)(puVar2 + 4) = local_24;
              *(int *)(puVar2 + 6) = local_20 + local_24;
              *(undefined4 *)(puVar2 + 8) = 0;
            }
            else {
              if (iVar10 == 0) {
                iVar10 = 0x33;
              }
              else {
                iVar10 = iVar10 * 2;
              }
              uVar13 = FUN_00552390(*piVar9,piVar9[1],iVar10 * 0x14);
              if (uVar13 != 0) {
                iVar10 = *piVar9;
                if (((iVar10 == 0) || (uVar13 < *(uint *)(iVar10 + 0x104))) ||
                   (*(uint *)(iVar10 + 0x108) <= uVar13)) {
                  uVar16 = (*DAT_00766608._4_4_)(uVar13);
                }
                else {
                  uVar16 = (uint)*(ushort *)(iVar10 + 0xe8);
                }
                piVar9[1] = uVar13;
                piVar9[8] = uVar16 / 0x14;
                goto LAB_00569c27;
              }
            }
            iVar15 = local_20;
            iVar10 = local_24;
            FUN_00550cd0(piVar9,local_8,local_24,local_20 + local_24);
            piVar12 = local_8;
          }
        }
        else {
          pcVar6 = *(char **)(param_3[2] + iVar11 * 0x14);
          if ((pcVar6 == (char *)0x0) || (*pcVar6 != -0x7c)) {
            puVar21 = (uint *)(iVar15 + local_24);
            local_c = puVar21;
            local_4c = (uint *)FUN_00554e20(param_1,pcVar6,puVar21);
            piVar12 = local_8;
            iVar15 = local_20;
            if ((local_4c != puVar21) &&
               (piVar7 = (int *)param_1[2], iVar10 = local_24, piVar7 != (int *)0x0)) {
              local_34 = (uint *)piVar7[7];
              iVar15 = piVar7[8];
              if (iVar15 <= (int)local_34) {
                if (iVar15 == 0) {
                  iVar15 = 0x33;
                }
                else {
                  iVar15 = iVar15 * 2;
                }
                uVar13 = FUN_00552390(*piVar7,piVar7[1],iVar15 * 0x14);
                piVar12 = local_8;
                iVar15 = local_20;
                iVar10 = local_24;
                if (uVar13 == 0) goto LAB_00569b5e;
                iVar15 = *piVar7;
                if (((iVar15 == 0) || (uVar13 < *(uint *)(iVar15 + 0x104))) ||
                   (*(uint *)(iVar15 + 0x108) <= uVar13)) {
                  uVar16 = (*DAT_00766608._4_4_)(uVar13);
                }
                else {
                  uVar16 = (uint)*(ushort *)(iVar15 + 0xe8);
                }
                piVar7[1] = uVar13;
                piVar7[8] = uVar16 / 0x14;
                puVar21 = local_c;
              }
              iVar15 = piVar7[1];
              piVar7[7] = piVar7[7] + 1;
              *(undefined2 *)(iVar15 + (int)local_34 * 0x14) = 0xf;
              *(undefined1 *)(iVar15 + 3 + (int)local_34 * 0x14) = 0;
              *(uint **)(iVar15 + 4 + (int)local_34 * 0x14) = local_4c;
              *(uint **)(iVar15 + 8 + (int)local_34 * 0x14) = puVar21;
              *(undefined4 *)(iVar15 + 0xc + (int)local_34 * 0x14) = 0;
              *(undefined4 *)(iVar15 + 0x10 + (int)local_34 * 0x14) = 0;
              piVar12 = local_8;
              iVar15 = local_20;
              iVar10 = local_24;
            }
          }
          else {
            local_34 = *(uint **)(pcVar6 + 0x18);
            piVar7 = (int *)param_1[2];
            local_c = (uint *)piVar7[7];
            iVar10 = piVar7[8];
            if (iVar10 <= (int)local_c) {
              if (iVar10 == 0) {
                iVar10 = 0x33;
              }
              else {
                iVar10 = iVar10 * 2;
              }
              uVar13 = FUN_00552390(*piVar7,piVar7[1],iVar10 * 0x14);
              piVar12 = local_8;
              iVar15 = local_20;
              iVar10 = local_24;
              if (uVar13 == 0) goto LAB_00569b5e;
              iVar15 = *piVar7;
              if (((iVar15 == 0) || (uVar13 < *(uint *)(iVar15 + 0x104))) ||
                 (*(uint *)(iVar15 + 0x108) <= uVar13)) {
                uVar16 = (*DAT_00766608._4_4_)(uVar13);
              }
              else {
                uVar16 = (uint)*(ushort *)(iVar15 + 0xe8);
              }
              piVar7[8] = uVar16 / 0x14;
              piVar7[1] = uVar13;
              piVar12 = local_8;
              iVar15 = local_20;
            }
            piVar7[7] = piVar7[7] + 1;
            puVar2 = (undefined2 *)(piVar7[1] + (int)local_c * 0x14);
            *(uint **)(puVar2 + 2) = local_34;
            *puVar2 = 0xe;
            *(undefined1 *)((int)puVar2 + 3) = 0;
            *(int *)(puVar2 + 4) = iVar15 + local_24;
            *(undefined4 *)(puVar2 + 6) = 0;
            *(undefined4 *)(puVar2 + 8) = 0;
            iVar10 = local_24;
          }
        }
      }
LAB_00569b5e:
      local_24 = iVar10 + 1;
    } while (local_24 < *(short *)((int)piVar12 + 0x26));
  }
  if ((local_68 & 1) != 0) {
    local_c = (uint *)(int)*(short *)((int)piVar12 + 0x26);
    iVar15 = piVar9[7];
    iVar10 = piVar9[8];
    if (iVar15 < iVar10) {
LAB_00569ccd:
      iVar10 = piVar9[1];
      piVar9[7] = piVar9[7] + 1;
      *(int *)(iVar10 + 4 + iVar15 * 0x14) = local_20;
      *(undefined2 *)(iVar10 + iVar15 * 0x14) = 0x1e;
      *(undefined1 *)(iVar10 + 3 + iVar15 * 0x14) = 0;
      *(uint **)(iVar10 + 8 + iVar15 * 0x14) = local_c;
      *(undefined4 *)(iVar10 + 0xc + iVar15 * 0x14) = 0;
      *(undefined4 *)(iVar10 + 0x10 + iVar15 * 0x14) = 0;
    }
    else {
      if (iVar10 == 0) {
        iVar10 = 0x33;
      }
      else {
        iVar10 = iVar10 * 2;
      }
      uVar13 = FUN_00552390(*piVar9,piVar9[1],iVar10 * 0x14);
      if (uVar13 != 0) {
        iVar10 = *piVar9;
        if (((iVar10 == 0) || (uVar13 < *(uint *)(iVar10 + 0x104))) ||
           (*(uint *)(iVar10 + 0x108) <= uVar13)) {
          uVar16 = (*DAT_00766608._4_4_)(uVar13);
        }
        else {
          uVar16 = (uint)*(ushort *)(iVar10 + 0xe8);
        }
        piVar9[8] = uVar16 / 0x14;
        piVar9[1] = uVar13;
        goto LAB_00569ccd;
      }
    }
    piVar12 = local_8;
    FUN_00568100(piVar9,local_8);
    FUN_00550410(param_1,local_48,0x6b,param_3,1,piVar12,local_28,param_5,local_10);
    iVar15 = piVar9[7];
    iVar10 = piVar9[8];
    if (iVar15 < iVar10) {
LAB_00569d94:
      iVar10 = piVar9[1];
      piVar9[7] = piVar9[7] + 1;
      *(int *)(iVar10 + 4 + iVar15 * 0x14) = local_18;
      *(uint *)(iVar10 + 8 + iVar15 * 0x14) = local_10;
      *(undefined2 *)(iVar10 + iVar15 * 0x14) = 0x36;
      *(undefined1 *)(iVar10 + 3 + iVar15 * 0x14) = 0;
      *(uint **)(iVar10 + 0xc + iVar15 * 0x14) = local_28;
      *(undefined4 *)(iVar10 + 0x10 + iVar15 * 0x14) = 0;
    }
    else {
      if (iVar10 == 0) {
        iVar10 = 0x33;
      }
      else {
        iVar10 = iVar10 * 2;
      }
      uVar13 = FUN_00552390(*piVar9,piVar9[1],iVar10 * 0x14);
      if (uVar13 != 0) {
        iVar10 = *piVar9;
        if (((iVar10 == 0) || (uVar13 < *(uint *)(iVar10 + 0x104))) ||
           (*(uint *)(iVar10 + 0x108) <= uVar13)) {
          uVar16 = (*DAT_00766608._4_4_)(uVar13);
        }
        else {
          uVar16 = (uint)*(ushort *)(iVar10 + 0xe8);
        }
        piVar9[8] = uVar16 / 0x14;
        piVar9[1] = uVar13;
        goto LAB_00569d94;
      }
    }
    iVar15 = 0;
    piVar12 = local_8;
    if (0 < *(short *)((int)local_8 + 0x26)) {
      do {
        if ((*(int *)(local_14 + iVar15 * 4) < 0) && (iVar15 != (short)piVar12[9])) {
          local_c = (uint *)piVar9[7];
          iVar10 = piVar9[8];
          if ((int)local_c < iVar10) {
LAB_00569e6b:
            piVar9[7] = piVar9[7] + 1;
            puVar2 = (undefined2 *)(piVar9[1] + (int)local_c * 0x14);
            *(int *)(puVar2 + 2) = local_18;
            *puVar2 = 0x1d;
            *(undefined1 *)((int)puVar2 + 3) = 0;
            *(int *)(puVar2 + 4) = iVar15;
            *(int *)(puVar2 + 6) = local_20 + iVar15;
            *(undefined4 *)(puVar2 + 8) = 0;
          }
          else {
            if (iVar10 == 0) {
              iVar10 = 0x33;
            }
            else {
              iVar10 = iVar10 * 2;
            }
            uVar13 = FUN_00552390(*piVar9,piVar9[1],iVar10 * 0x14);
            if (uVar13 != 0) {
              iVar10 = *piVar9;
              if (((iVar10 == 0) || (uVar13 < *(uint *)(iVar10 + 0x104))) ||
                 (*(uint *)(iVar10 + 0x108) <= uVar13)) {
                uVar16 = (*DAT_00766608._4_4_)(uVar13);
              }
              else {
                uVar16 = (uint)*(ushort *)(iVar10 + 0xe8);
              }
              piVar9[8] = uVar16 / 0x14;
              piVar9[1] = uVar13;
              goto LAB_00569e6b;
            }
          }
          FUN_00550cd0(piVar9,local_8,iVar15,local_20 + iVar15);
          piVar12 = local_8;
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 < *(short *)((int)piVar12 + 0x26));
    }
  }
  puVar21 = local_28;
  if (local_50 == 0) {
    puVar14 = (uint *)0x0;
    if (local_3c != 0) {
      puVar14 = local_28;
    }
    FUN_00558890(param_1,piVar12,local_18,local_2c,local_40,puVar14,1,param_5,local_10,0);
    if (local_38 != 0) {
      FUN_00557cc0(param_1,local_8,puVar21,0);
    }
    uVar13 = piVar9[7];
    iVar15 = piVar9[8];
    if ((int)uVar13 < iVar15) {
LAB_00569f79:
      iVar15 = piVar9[1];
      piVar9[7] = piVar9[7] + 1;
      *(undefined2 *)(iVar15 + uVar13 * 0x14) = 0x36;
      *(undefined1 *)(iVar15 + 3 + uVar13 * 0x14) = 0;
      *(int *)(iVar15 + 4 + uVar13 * 0x14) = local_18;
      *(undefined4 *)(iVar15 + 8 + uVar13 * 0x14) = 0;
      *(uint **)(iVar15 + 0xc + uVar13 * 0x14) = puVar21;
      *(undefined4 *)(iVar15 + 0x10 + uVar13 * 0x14) = 0;
    }
    else {
      if (iVar15 == 0) {
        iVar15 = 0x33;
      }
      else {
        iVar15 = iVar15 * 2;
      }
      uVar16 = FUN_00552390(*piVar9,piVar9[1],iVar15 * 0x14);
      if (uVar16 != 0) {
        iVar15 = *piVar9;
        if (((iVar15 == 0) || (uVar16 < *(uint *)(iVar15 + 0x104))) ||
           (*(uint *)(iVar15 + 0x108) <= uVar16)) {
          uVar17 = (*DAT_00766608._4_4_)(uVar16);
        }
        else {
          uVar17 = (uint)*(ushort *)(iVar15 + 0xe8);
        }
        piVar9[1] = uVar16;
        piVar9[8] = uVar17 / 0x14;
        puVar21 = local_28;
        goto LAB_00569f79;
      }
      uVar13 = 1;
    }
    FUN_00559f10(param_1,local_8,local_18,local_40);
    if ((local_38 != 0) || (local_3c != 0)) {
      local_c = (uint *)piVar9[7];
      iVar15 = piVar9[8];
      if (iVar15 <= (int)local_c) {
        if (iVar15 == 0) {
          iVar15 = 0x33;
        }
        else {
          iVar15 = iVar15 * 2;
        }
        uVar16 = FUN_00552390(*piVar9,piVar9[1],iVar15 * 0x14);
        if (uVar16 == 0) goto LAB_0056a078;
        iVar15 = *piVar9;
        if (((iVar15 == 0) || (uVar16 < *(uint *)(iVar15 + 0x104))) ||
           (*(uint *)(iVar15 + 0x108) <= uVar16)) {
          uVar17 = (*DAT_00766608._4_4_)(uVar16);
        }
        else {
          uVar17 = (uint)*(ushort *)(iVar15 + 0xe8);
        }
        piVar9[8] = uVar17 / 0x14;
        piVar9[1] = uVar16;
      }
      iVar15 = piVar9[1];
      piVar9[7] = piVar9[7] + 1;
      *(undefined2 *)(iVar15 + (int)local_c * 0x14) = 0x3b;
      *(undefined1 *)(iVar15 + 3 + (int)local_c * 0x14) = 0;
      *(int *)(iVar15 + 4 + (int)local_c * 0x14) = local_18;
      *(undefined4 *)(iVar15 + 8 + (int)local_c * 0x14) = 0;
      *(undefined4 *)(iVar15 + 0xc + (int)local_c * 0x14) = 0;
      *(undefined4 *)(iVar15 + 0x10 + (int)local_c * 0x14) = 0;
    }
LAB_0056a078:
    iVar15 = local_38;
    if ((-1 < (int)uVar13) && (uVar13 < (uint)piVar9[7])) {
      *(int *)(piVar9[1] + 8 + uVar13 * 0x14) = piVar9[7];
    }
    if (local_38 != 0) {
      FUN_00557cc0(param_1,local_8,0,local_2c);
    }
    FUN_00550e30(param_1,local_8,local_18,local_2c,local_40,1,0,0);
    if ((iVar15 != 0) && ((*(uint *)(*param_1 + 0x18) & 0x40000) != 0)) {
      local_c = (uint *)*local_8;
      uVar13 = 0;
      if (local_c != (uint *)0x0) {
        bVar4 = (byte)*local_c;
        puVar21 = local_c;
        while (bVar4 != 0) {
          puVar21 = (uint *)((int)puVar21 + 1);
          bVar4 = *(byte *)puVar21;
        }
        uVar13 = (int)puVar21 - (int)local_c & 0x3fffffff;
      }
      local_4c = (uint *)(local_8[0x10] + 0x38);
      if (*(int *)(local_8[0x10] + 0x44) == 0) {
        uVar16 = 0;
      }
      else {
        uVar16 = 0;
        local_34 = local_c;
        if (uVar13 != 0) {
          uVar16 = 0;
          uVar17 = uVar13;
          do {
            uVar8 = *local_34;
            local_34 = (uint *)((int)local_34 + 1);
            uVar17 = uVar17 - 1;
            uVar16 = uVar16 ^ (uint)(byte)(&DAT_007120d8)[(byte)uVar8] ^ uVar16 * 8;
            piVar9 = local_30;
          } while (0 < (int)uVar17);
        }
        uVar16 = uVar16 % *local_4c;
      }
      iVar15 = FUN_00537190(local_4c,local_c,uVar13,uVar16);
      piVar12 = local_8;
      if (iVar15 != 0) {
        for (iVar15 = *(int *)(iVar15 + 8); iVar15 != 0; iVar15 = *(int *)(iVar15 + 0xc)) {
          iVar10 = FUN_00537450(param_1,piVar12,iVar15,param_3);
          if (iVar10 != 0) {
            FUN_00550470(param_1,iVar10,piVar12,local_28,2,0);
          }
          piVar9 = local_30;
        }
      }
    }
  }
  if (((*(byte *)(local_1c + 0x18) & 0x10) != 0) && (param_1[0x6d] == 0)) {
    iVar15 = piVar9[7];
    iVar10 = piVar9[8];
    if (iVar10 <= iVar15) {
      if (iVar10 == 0) {
        iVar10 = 0x33;
      }
      else {
        iVar10 = iVar10 * 2;
      }
      uVar13 = FUN_00552390(*piVar9,piVar9[1],iVar10 * 0x14);
      if (uVar13 == 0) goto LAB_0056a25d;
      iVar10 = *piVar9;
      if (((iVar10 == 0) || (uVar13 < *(uint *)(iVar10 + 0x104))) ||
         (*(uint *)(iVar10 + 0x108) <= uVar13)) {
        uVar16 = (*DAT_00766608._4_4_)(uVar13);
      }
      else {
        uVar16 = (uint)*(ushort *)(iVar10 + 0xe8);
      }
      piVar9[8] = uVar16 / 0x14;
      piVar9[1] = uVar13;
    }
    iVar10 = piVar9[1];
    piVar9[7] = piVar9[7] + 1;
    *(undefined2 *)(iVar10 + iVar15 * 0x14) = 0x14;
    *(undefined1 *)(iVar10 + 3 + iVar15 * 0x14) = 0;
    *(int *)(iVar10 + 4 + iVar15 * 0x14) = local_64;
    *(undefined4 *)(iVar10 + 8 + iVar15 * 0x14) = 1;
    *(undefined4 *)(iVar10 + 0xc + iVar15 * 0x14) = 0;
    *(undefined4 *)(iVar10 + 0x10 + iVar15 * 0x14) = 0;
  }
LAB_0056a25d:
  FUN_00550410(param_1,local_48,0x6b,param_3,2,local_8,local_28,param_5,local_10);
  iVar15 = piVar9[7];
  iVar10 = piVar9[8];
  if (iVar15 < iVar10) {
LAB_0056a2ea:
    iVar10 = piVar9[1];
    piVar9[7] = piVar9[7] + 1;
    *(undefined2 *)(iVar10 + iVar15 * 0x14) = 1;
    *(undefined1 *)(iVar10 + 3 + iVar15 * 0x14) = 0;
    *(undefined4 *)(iVar10 + 4 + iVar15 * 0x14) = 0;
    *(uint *)(iVar10 + 8 + iVar15 * 0x14) = local_10;
    *(undefined4 *)(iVar10 + 0xc + iVar15 * 0x14) = 0;
    *(undefined4 *)(iVar10 + 0x10 + iVar15 * 0x14) = 0;
  }
  else {
    if (iVar10 == 0) {
      iVar10 = 0x33;
    }
    else {
      iVar10 = iVar10 * 2;
    }
    uVar13 = FUN_00552390(*piVar9,piVar9[1],iVar10 * 0x14);
    if (uVar13 != 0) {
      iVar10 = *piVar9;
      if (((iVar10 == 0) || (uVar13 < *(uint *)(iVar10 + 0x104))) ||
         (*(uint *)(iVar10 + 0x108) <= uVar13)) {
        uVar16 = (*DAT_00766608._4_4_)(uVar13);
      }
      else {
        uVar16 = (uint)*(ushort *)(iVar10 + 0xe8);
      }
      piVar9[8] = uVar16 / 0x14;
      piVar9[1] = uVar13;
      goto LAB_0056a2ea;
    }
  }
  if ((-1 < (int)local_10) && (local_10 < (uint)piVar9[7])) {
    *(int *)(piVar9[1] + 8 + local_10 * 0x14) = piVar9[7];
  }
  iVar15 = 0;
  for (local_50 = local_8[2]; local_50 != 0; local_50 = *(uint *)(local_50 + 0x14)) {
    if ((local_44 != 0) || (0 < local_40[iVar15])) {
      local_c = (uint *)piVar9[7];
      iVar10 = piVar9[8];
      if (iVar10 <= (int)local_c) {
        if (iVar10 == 0) {
          iVar10 = 0x33;
        }
        else {
          iVar10 = iVar10 * 2;
        }
        uVar13 = FUN_00552390(*piVar9,piVar9[1],iVar10 * 0x14);
        if (uVar13 == 0) goto LAB_0056a408;
        iVar10 = *piVar9;
        if (((iVar10 == 0) || (uVar13 < *(uint *)(iVar10 + 0x104))) ||
           (*(uint *)(iVar10 + 0x108) <= uVar13)) {
          uVar16 = (*DAT_00766608._4_4_)(uVar13);
        }
        else {
          uVar16 = (uint)*(ushort *)(iVar10 + 0xe8);
        }
        piVar9[8] = uVar16 / 0x14;
        piVar9[1] = uVar13;
      }
      piVar9[7] = piVar9[7] + 1;
      puVar2 = (undefined2 *)(piVar9[1] + (int)local_c * 0x14);
      *puVar2 = 0x2d;
      *(undefined1 *)((int)puVar2 + 3) = 0;
      *(int *)(puVar2 + 2) = local_18 + 1 + iVar15;
      *(undefined4 *)(puVar2 + 4) = 0;
      *(undefined4 *)(puVar2 + 6) = 0;
      *(undefined4 *)(puVar2 + 8) = 0;
    }
LAB_0056a408:
    iVar15 = iVar15 + 1;
  }
  iVar15 = piVar9[7];
  iVar10 = piVar9[8];
  if (iVar15 < iVar10) {
LAB_0056a483:
    iVar10 = piVar9[1];
    piVar9[7] = piVar9[7] + 1;
    *(undefined2 *)(iVar10 + iVar15 * 0x14) = 0x2d;
    *(undefined1 *)(iVar10 + 3 + iVar15 * 0x14) = 0;
    *(int *)(iVar10 + 4 + iVar15 * 0x14) = local_18;
    *(undefined4 *)(iVar10 + 8 + iVar15 * 0x14) = 0;
    *(undefined4 *)(iVar10 + 0xc + iVar15 * 0x14) = 0;
    *(undefined4 *)(iVar10 + 0x10 + iVar15 * 0x14) = 0;
  }
  else {
    if (iVar10 == 0) {
      iVar10 = 0x33;
    }
    else {
      iVar10 = iVar10 * 2;
    }
    uVar13 = FUN_00552390(*piVar9,piVar9[1],iVar10 * 0x14);
    if (uVar13 != 0) {
      iVar10 = *piVar9;
      if (((iVar10 == 0) || (uVar13 < *(uint *)(iVar10 + 0x104))) ||
         (*(uint *)(iVar10 + 0x108) <= uVar13)) {
        uVar16 = (*DAT_00766608._4_4_)(uVar13);
      }
      else {
        uVar16 = (uint)*(ushort *)(iVar10 + 0xe8);
      }
      piVar9[8] = uVar16 / 0x14;
      piVar9[1] = uVar13;
      goto LAB_0056a483;
    }
  }
  if ((*(char *)((int)param_1 + 0x12) == '\0') && (param_1[0x6d] == 0)) {
    FUN_0054b260(param_1);
  }
  iVar15 = local_14;
  if ((((*(byte *)(local_1c + 0x18) & 0x10) == 0) || (param_1[0x6d] != 0)) ||
     (*(char *)((int)param_1 + 0x12) != '\0')) goto LAB_0056a7bd;
  iVar15 = piVar9[7];
  iVar10 = piVar9[8];
  if (iVar15 < iVar10) {
LAB_0056a564:
    iVar10 = piVar9[1];
    piVar9[7] = piVar9[7] + 1;
    *(undefined2 *)(iVar10 + iVar15 * 0x14) = 0x10;
    *(undefined1 *)(iVar10 + 3 + iVar15 * 0x14) = 0;
    *(int *)(iVar10 + 4 + iVar15 * 0x14) = local_64;
    *(undefined4 *)(iVar10 + 8 + iVar15 * 0x14) = 1;
    *(undefined4 *)(iVar10 + 0xc + iVar15 * 0x14) = 0;
    *(undefined4 *)(iVar10 + 0x10 + iVar15 * 0x14) = 0;
  }
  else {
    if (iVar10 == 0) {
      iVar10 = 0x33;
    }
    else {
      iVar10 = iVar10 * 2;
    }
    uVar13 = FUN_00552390(*piVar9,piVar9[1],iVar10 * 0x14);
    if (uVar13 != 0) {
      iVar10 = *piVar9;
      if (((iVar10 == 0) || (uVar13 < *(uint *)(iVar10 + 0x104))) ||
         (*(uint *)(iVar10 + 0x108) <= uVar13)) {
        uVar16 = (*DAT_00766608._4_4_)(uVar13);
      }
      else {
        uVar16 = (uint)*(ushort *)(iVar10 + 0xe8);
      }
      piVar9[8] = uVar16 / 0x14;
      piVar9[1] = uVar13;
      goto LAB_0056a564;
    }
  }
  iVar15 = *piVar9;
  FUN_00545650(piVar9[4],(uint)*(ushort *)(piVar9 + 0xb) * 2);
  FUN_005521a0(iVar15,piVar9[4]);
  *(undefined2 *)(piVar9 + 0xb) = 1;
  piVar12 = (int *)FUN_00552230(iVar15,0x50);
  if (piVar12 != (int *)0x0) {
    memset(piVar12,0,0x50);
  }
  piVar9[4] = (int)piVar12;
  if (piVar12 != (int *)0x0) {
    *(undefined2 *)(piVar12 + 7) = 1;
    *piVar12 = *piVar9;
    *(undefined2 *)(piVar12 + 0x11) = 1;
    piVar12[10] = *piVar9;
  }
  iVar15 = local_14;
  if (*(char *)(*piVar9 + 0x38) == '\0') {
    piVar9 = (int *)piVar9[4];
    if (*piVar9 == 0) {
      iVar15 = 1000000000;
    }
    else {
      iVar15 = *(int *)(*piVar9 + 0x50);
    }
    iVar10 = 0;
    if (-1 < iVar15) {
      do {
        if ("rows updated"[iVar10] == '\0') break;
        iVar10 = iVar10 + 1;
      } while (iVar10 <= iVar15);
    }
    uVar5 = *(ushort *)(piVar9 + 7);
    if ((uVar5 & 0x2460) != 0) {
      if ((uVar5 & 0x2000) == 0) {
        if (((uVar5 & 0x400) == 0) || ((code *)piVar9[8] == (code *)0x0)) {
          if ((uVar5 & 0x20) == 0) {
            if ((uVar5 & 0x40) != 0) {
              piVar12 = (int *)piVar9[4];
              piVar12[1] = *(int *)(*piVar12 + 0xa4);
              *(int **)(*piVar12 + 0xa4) = piVar12;
              if ((*(byte *)(piVar9 + 7) & 0x20) != 0) {
                FUN_005644e0(piVar9[4]);
              }
              *(ushort *)(piVar9 + 7) = *(ushort *)(piVar9 + 7) & 0xbe01 | 1;
              *(undefined1 *)((int)piVar9 + 0x1e) = 5;
            }
          }
          else {
            FUN_005644e0(piVar9[4]);
          }
        }
        else {
          (*(code *)piVar9[8])(piVar9[1]);
          piVar9[8] = 0;
        }
      }
      else {
        FUN_00574670(piVar9,piVar9[4]);
        FUN_00574d40(piVar9);
      }
    }
    FUN_005521a0(*piVar9,piVar9[9]);
    piVar9[9] = 0;
    piVar9[8] = 0;
    piVar9[1] = (int)"rows updated";
    piVar9[6] = iVar10;
    *(undefined2 *)(piVar9 + 7) = 0xa02;
    *(undefined2 *)((int)piVar9 + 0x1e) = 0x103;
    iVar15 = local_14;
  }
LAB_0056a7bd:
  if (local_74._4_4_ != 0) {
    *(undefined4 *)(local_74._4_4_ + 0x204) = (undefined4)local_74;
  }
  FUN_005521a0(local_1c,local_40);
  iVar10 = local_1c;
  FUN_005521a0(local_1c,iVar15);
  FUN_00567370(iVar10,local_6c);
  FUN_00556700(iVar10,param_3);
  FUN_00555e30(iVar10,param_4);
  return;
}


/* FUN_0056c500 @ 0056c500  kind=lib  attributed-by=lib-string  size=94 */

undefined4 FUN_0056c500(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (param_2 == 0) {
    if (param_1[0x23] < 0) {
      return 0;
    }
    if (0 < param_1[0x23]) goto LAB_0056c53a;
    iVar2 = param_1[0x22];
  }
  else {
    if (0 < *(int *)(iVar1 + 0x1ec)) goto LAB_0056c53a;
    if (*(int *)(iVar1 + 0x1ec) < 0) {
      return 0;
    }
    iVar2 = *(int *)(iVar1 + 0x1e8);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_0056c53a:
  param_1[0x16] = 0x13;
  *(undefined1 *)(param_1 + 0x17) = 2;
  FUN_005670f0(param_1 + 0xd,iVar1,"foreign key constraint failed");
  return 1;
}


/* FUN_0056c9c0 @ 0056c9c0  kind=lib  attributed-by=lib-string  size=25849 */

/* WARNING: Removing unreachable block (ram,0x00571cdd) */
/* WARNING: Removing unreachable block (ram,0x0056da07) */
/* WARNING: Removing unreachable block (ram,0x00570ac3) */

void FUN_0056c9c0(int *param_1)

{
  ulonglong *puVar1;
  uint *puVar2;
  undefined1 *puVar3;
  byte bVar4;
  undefined1 uVar5;
  ushort uVar6;
  int *piVar7;
  undefined4 uVar8;
  size_t _Size;
  uint6 uVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  char cVar14;
  undefined2 uVar15;
  int iVar16;
  undefined4 *puVar17;
  byte *pbVar18;
  undefined4 *puVar19;
  int *piVar20;
  undefined8 *puVar21;
  undefined4 uVar22;
  int iVar23;
  undefined *puVar24;
  int iVar25;
  undefined4 uVar26;
  ushort uVar27;
  int iVar28;
  uint uVar29;
  undefined4 extraout_ECX;
  int iVar30;
  char *pcVar31;
  uint uVar32;
  int iVar33;
  uint uVar34;
  undefined4 *puVar35;
  undefined4 *puVar36;
  bool bVar37;
  float10 fVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  longlong lVar41;
  undefined8 uVar42;
  int local_130;
  undefined4 local_11c;
  undefined4 local_118;
  int local_114;
  int local_110;
  int local_10c;
  undefined4 *local_108;
  uint local_104;
  uint local_100;
  char local_f9;
  undefined8 local_f8;
  uint local_f0;
  int local_ec;
  undefined4 *local_e8;
  undefined4 *local_e4;
  int local_e0;
  undefined4 *local_dc;
  int *local_d8;
  int local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 *local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  byte *local_98;
  undefined4 *local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78 [8];
  undefined8 local_70;
  byte *local_68;
  byte *local_64;
  undefined4 *local_60;
  undefined4 *local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  undefined4 *local_4c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  puVar19 = (undefined4 *)*param_1;
  local_e0 = param_1[1];
  local_e4 = (undefined4 *)param_1[2];
  local_f0 = CONCAT31(local_f0._1_3_,*(undefined1 *)(*(int *)(puVar19[4] + 0xc) + 0x4d));
  local_10c = 0;
  local_104 = puVar19[8];
  local_100 = puVar19[9];
  puVar35 = (undefined4 *)0x0;
  local_d8 = param_1;
  local_ec = 0;
  local_d4 = 0;
  local_f9 = '\0';
  local_114 = 0;
  local_dc = (undefined4 *)0x0;
  local_110 = 0;
  local_e8 = puVar19;
  FUN_0056c960();
  uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
  iVar25 = CONCAT22(local_a0._6_2_,local_a0._4_2_);
  lVar41 = CONCAT44(iVar25,(undefined4 *)local_a0);
  local_c0 = uVar39;
  if (local_d8[0x16] == 7) goto LAB_00572e06;
  local_d8[0x16] = 0;
  local_d8[5] = 0;
  puVar19[0x6d] = 0;
  if (puVar19[0x38] == 0) {
    iVar28 = puVar19[0x45];
    local_ec = local_d8[0x15];
LAB_0056caa0:
    iVar30 = local_ec;
    local_c0 = uVar39;
    if (*(char *)(puVar19 + 0xe) != '\0') goto LAB_00572e06;
    if (iVar28 != 0) {
      iVar25 = local_114;
      if (puVar19[0x47] == local_114) {
        local_a0 = lVar41;
        iVar16 = (*(code *)puVar19[0x45])();
        iVar25 = 0;
        uVar39 = local_c0;
        lVar41 = local_a0;
        if (iVar16 != 0) {
          iVar16 = 9;
          local_d4 = iVar16;
          goto LAB_00572e2d;
        }
      }
      local_114 = iVar25 + 1;
    }
    if ((*(byte *)(local_e0 + 2 + iVar30 * 0x14) & 2) != 0) {
      puVar35 = local_e4 + *(int *)(local_e0 + 8 + iVar30 * 0x14) * 10;
      local_dc = puVar35;
      if ((*(ushort *)(puVar35 + 7) & 0x2460) != 0) {
        local_c0 = uVar39;
        local_a0 = lVar41;
        FUN_00574d80();
        uVar39 = local_c0;
        lVar41 = local_a0;
      }
      *(undefined2 *)(puVar35 + 7) = 4;
    }
    uVar11 = local_c8;
    piVar20 = local_d8;
    puVar10 = local_dc;
    iVar33 = local_e0;
    puVar17 = local_e4;
    puVar36 = local_e8;
    iVar23 = local_ec;
    iVar25 = (int)((ulonglong)lVar41 >> 0x20);
    local_a0._0_4_ = (undefined4 *)lVar41;
    local_c0._4_4_ = (undefined4 *)(uVar39 >> 0x20);
    puVar12 = local_c0._4_4_;
    local_c0._0_4_ = (int *)uVar39;
    local_a0._6_2_ = (undefined2)((ulonglong)lVar41 >> 0x30);
    bVar4 = *(byte *)(local_e0 + iVar30 * 0x14);
    iVar16 = local_d4;
    puVar13 = local_dc;
    uVar40 = local_d0;
    if (0x93 < bVar4 - 1) goto LAB_0056e371;
    uVar26 = (int *)local_d0;
    uVar32 = (uint)local_c8._4_4_;
    uVar34 = (uint)local_b8._4_4_;
    local_c0._7_1_ = (undefined1)(uVar39 >> 0x38);
    local_c0._4_4_ = puVar12;
    local_a0._4_4_ = iVar25;
    local_c0 = uVar39;
    switch(bVar4) {
    case 1:
      if (puVar19[0x38] == 0) goto LAB_0056e360;
      goto LAB_0056cb4e;
    case 2:
      iVar25 = *(int *)(local_e0 + 4 + iVar30 * 0x14);
      *(undefined2 *)(local_e4 + iVar25 * 10 + 7) = 4;
      local_e4[iVar25 * 10 + 4] = local_ec;
      local_e4[iVar25 * 10 + 5] = local_ec >> 0x1f;
      goto LAB_0056cbbf;
    case 3:
      local_ec = local_e4[*(int *)(local_e0 + 4 + iVar30 * 0x14) * 10 + 4];
      break;
    case 4:
      iVar25 = *(int *)(local_e0 + 4 + iVar30 * 0x14);
      *(undefined2 *)(local_e4 + iVar25 * 10 + 7) = 4;
      iVar30 = local_e4[iVar25 * 10 + 4];
      local_d0 = CONCAT44(local_d0._4_4_,iVar30);
      local_e4[iVar25 * 10 + 4] = local_ec;
      local_e4[iVar25 * 10 + 5] = local_ec >> 0x1f;
      local_ec = iVar30;
      uVar40 = local_d0;
      break;
    case 5:
      if ((*(byte *)(local_e4 + *(int *)(local_e0 + 0xc + iVar30 * 0x14) * 10 + 7) & 1) != 0)
      goto switchD_0056cb3a_caseD_6;
      break;
    case 6:
switchD_0056cb3a_caseD_6:
      if ((*(int *)(local_e0 + 4 + iVar30 * 0x14) != 0) || (local_d8[0x28] == 0)) {
        local_d8[0x16] = *(int *)(local_e0 + 4 + iVar30 * 0x14);
        *(undefined1 *)(local_d8 + 0x17) = *(undefined1 *)(local_e0 + 8 + iVar30 * 0x14);
        local_d8[0x15] = local_ec;
        iVar25 = *(int *)(local_e0 + 0x10 + iVar30 * 0x14);
        if (iVar25 == 0) {
          if (local_d8[0x16] != 0) {
            FUN_00525a30(*(undefined4 *)(local_e0 + 4 + iVar30 * 0x14),
                         "constraint failed at %d in [%s]",local_ec,local_d8[0x26]);
          }
        }
        else {
          FUN_005670f0(local_d8 + 0xd,puVar19,&DAT_00716900,iVar25);
          FUN_00525a30(*(undefined4 *)(local_e0 + 4 + iVar30 * 0x14),"abort at %d in [%s]: %s",
                       iVar23,local_d8[0x26],*(undefined4 *)(local_e0 + 0x10 + iVar30 * 0x14));
        }
        iVar25 = FUN_00573740();
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        piVar20 = local_d8;
        if (iVar25 == 5) {
LAB_00572cab:
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
          piVar20[0x16] = 5;
        }
        goto LAB_00572ea7;
      }
      iVar25 = *(int *)(local_d8[0x28] + 4);
      local_d8[0x2a] = local_d8[0x2a] + -1;
      local_d8[0x28] = iVar25;
      iVar25 = local_d8[0x19];
      puVar19[0x13] = puVar19[0x13] + iVar25;
      puVar19[0x12] = iVar25;
      local_ec = FUN_005735f0();
      local_104 = puVar19[8];
      local_100 = puVar19[9];
      if (*(int *)(local_e0 + 8 + iVar30 * 0x14) == 4) {
        local_ec = *(int *)(local_d8[1] + 8 + local_ec * 0x14) + -1;
      }
      local_e0 = local_d8[1];
      local_e4 = (undefined4 *)local_d8[2];
      iVar16 = local_d4;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      break;
    case 7:
      iVar25 = *(int *)(local_e0 + 4 + iVar30 * 0x14);
      puVar35[4] = iVar25;
      puVar35[5] = iVar25 >> 0x1f;
      break;
    case 8:
      puVar36 = *(undefined4 **)(local_e0 + 0x10 + iVar30 * 0x14);
      puVar35[4] = *puVar36;
      puVar35[5] = puVar36[1];
      break;
    case 9:
      goto switchD_0056cb3a_caseD_9;
    case 10:
      iVar25 = *(int *)(local_e0 + 0xc + iVar30 * 0x14) - *(int *)(local_e0 + 8 + iVar30 * 0x14);
      uVar15 = 1;
      if (*(int *)(local_e0 + 4 + iVar30 * 0x14) != 0) {
        uVar15 = 0x101;
      }
      local_d0._0_6_ = CONCAT24(uVar15,iVar25);
      *(undefined2 *)(local_dc + 7) = uVar15;
      puVar35 = local_dc;
      while (iVar16 = local_d4, puVar13 = puVar35, uVar40 = local_d0, uVar39 = local_c0, 0 < iVar25)
      {
        if ((*(ushort *)(puVar35 + 0x11) & 0x2460) != 0) {
          FUN_00574d80();
        }
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        *(undefined2 *)(puVar35 + 0x11) = local_d0._4_2_;
        iVar25 = (int)(int *)local_d0 + -1;
        local_d0 = CONCAT44(local_d0._4_4_,iVar25);
        puVar19 = local_e8;
        puVar35 = puVar35 + 10;
      }
      break;
    case 0xb:
      FUN_00575040(puVar35,*(undefined4 *)(local_e0 + 0x10 + iVar30 * 0x14),
                   *(undefined4 *)(local_e0 + 4 + iVar30 * 0x14));
      *(char *)((int)puVar35 + 0x1f) = (char)local_f0;
      iVar16 = local_d4;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      break;
    case 0xc:
      local_d0 = CONCAT44(local_d0._4_4_,
                          local_d8[0x11] + (*(int *)(local_e0 + 4 + iVar30 * 0x14) * 5 + -5) * 8);
      iVar25 = FUN_005753f0();
      puVar35 = local_dc;
      uVar39 = local_c0;
      if (iVar25 != 0) goto LAB_00572de0;
      FUN_005752a0(local_dc);
      iVar16 = local_d4;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      break;
    case 0xd:
      local_d0 = local_d0 & 0xffffffff;
      iVar25 = *(int *)(local_e0 + 4 + iVar30 * 0x14);
      iVar16 = *(int *)(local_e0 + 8 + iVar30 * 0x14);
      local_c8 = CONCAT44(iVar16,iVar25);
      puVar36 = local_e4 + iVar25 * 10;
      puVar35 = local_e4 + iVar16 * 10;
      iVar25 = *(int *)(local_e0 + 0xc + iVar30 * 0x14) + 1;
      local_dc = puVar35;
      while (iVar25 != 0) {
        local_d0 = CONCAT44(iVar25 + -1,puVar35[9]);
        puVar35[9] = 0;
        FUN_00574b60();
        puVar36[9] = (int *)local_d0;
        puVar36 = puVar36 + 10;
        puVar35 = puVar35 + 10;
        iVar25 = (int)local_d0._4_4_;
      }
      local_d0 = CONCAT44(0xffffffff,(int *)local_d0);
      iVar16 = local_d4;
      puVar13 = puVar35;
      uVar40 = local_d0;
      uVar39 = local_c0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      break;
    case 0xe:
      local_d0 = CONCAT44(local_d0._4_4_,*(undefined4 *)(local_e0 + 0xc + iVar30 * 0x14));
      puVar36 = local_e4 + *(int *)(local_e0 + 8 + iVar30 * 0x14) * 10;
      while( true ) {
        local_dc = puVar36;
        local_a0._4_4_ = iVar25;
        local_c0 = uVar39;
        FUN_005752a0(puVar36);
        iVar25 = local_a0._4_4_;
        uVar39 = local_c0;
        if ((*(ushort *)(puVar36 + 7) & 0x1000) != 0) {
          iVar30 = FUN_00574af0();
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
          iVar25 = local_a0._4_4_;
          uVar39 = local_c0;
          if (iVar30 != 0) goto LAB_00572e06;
        }
        lVar41 = CONCAT44(iVar25,(undefined4 *)local_a0);
        iVar30 = (int)(int *)local_d0;
        local_d0 = CONCAT44(local_d0._4_4_,(int)(int *)local_d0 + -1);
        iVar16 = local_d4;
        puVar35 = local_dc;
        puVar13 = local_dc;
        uVar40 = local_d0;
        if (iVar30 == 0) break;
        puVar36 = puVar36 + 10;
      }
      break;
    case 0xf:
      puVar35 = local_e4 + *(int *)(local_e0 + 8 + iVar30 * 0x14) * 10;
      local_dc = puVar35;
      FUN_005752a0(puVar35);
      iVar16 = local_d4;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      break;
    case 0x10:
      local_d4 = FUN_0056c500();
      iVar16 = local_d4;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      if (local_d4 == 0) {
        local_d4 = FUN_0056c6b0();
        iVar25 = local_e0;
        iVar16 = local_d4;
        puVar13 = local_dc;
        uVar40 = local_d0;
        uVar39 = local_c0;
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        if (local_d4 == 0) {
          local_d8[0x14] = local_d8[0x14] + 2U | 1;
          puVar35 = local_e4 + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 10;
          local_d8[5] = (int)puVar35;
          iVar28 = 0;
          local_d0 = ZEXT48(puVar35);
          if (*(int *)(local_e0 + 8 + iVar30 * 0x14) < 1) goto LAB_00572c54;
          goto LAB_0056d0d0;
        }
      }
      break;
    case 0x11:
      iVar25 = *(int *)(local_e0 + 4 + iVar30 * 0x14);
      if (iVar25 != 0) {
        FUN_00574ec0(local_e4 + iVar25 * 10);
        iVar16 = local_d4;
        puVar13 = local_dc;
        uVar40 = local_d0;
        uVar39 = local_c0;
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      }
      break;
    case 0x12:
      cVar14 = *(char *)(local_e0 + 3 + iVar30 * 0x14);
      local_88 = (ulonglong)CONCAT14(cVar14,local_d8[3]);
      local_dc = local_e4 + *(int *)(local_e0 + 0xc + iVar30 * 0x14) * 10;
      puVar35 = local_e4 + *(int *)(local_e0 + 8 + iVar30 * 0x14) * 10;
      iVar16 = 0;
      local_d0 = ZEXT48(puVar35) << 0x20;
      iVar25 = local_d8[3];
      if (cVar14 != '\0') {
        while( true ) {
          *(undefined4 **)(iVar25 + iVar16 * 4) = puVar35;
          local_c0 = uVar39;
          if ((*(ushort *)((int)local_d0._4_4_ + 0x1c) & 0x1000) != 0) {
            iVar25 = FUN_00574af0();
            lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
            puVar19 = puVar36;
            if (iVar25 != 0) goto LAB_00572e06;
          }
          FUN_00575310();
          iVar16 = (int)(int *)local_d0 + 1;
          puVar35 = (undefined4 *)((int)local_d0._4_4_ + 0x28);
          local_d0 = CONCAT44(puVar35,iVar16);
          if (local_88._4_4_ <= iVar16) break;
          iVar25 = (int)local_88;
          uVar39 = local_c0;
        }
      }
      puVar35 = local_dc;
      puVar19 = *(undefined4 **)(local_e0 + 0x10 + iVar30 * 0x14);
      if (*(char *)(local_e0 + 1 + iVar30 * 0x14) == -5) {
        puVar17 = puVar19;
        puVar19 = (undefined4 *)0x0;
      }
      else {
        puVar17 = (undefined4 *)*puVar19;
      }
      local_c8 = CONCAT44(puVar19,puVar17);
      local_a4._0_2_ = 1;
      local_c0._0_4_ = puVar36;
      local_a0._0_4_ = (undefined4 *)0x0;
      local_a0._4_2_ = 0;
      local_a0._6_2_ = 0;
      FUN_00574b60(&local_c0);
      local_a4 = (undefined4 *)(CONCAT22(local_a4._2_2_,(undefined2)local_a4) & 0xffffbe01 | 1);
      local_90 = local_90 & 0xffffffff00000000;
      if ((*(byte *)((int)(int *)local_c8 + 3) & 8) != 0) {
        local_94 = *(undefined4 **)(local_e0 + -4 + iVar30 * 0x14);
      }
      puVar36[8] = local_104;
      puVar36[9] = local_100;
      (**(code **)((int)(int *)local_c8 + 0xc))(&local_c8,local_88._4_4_);
      local_104 = puVar36[8];
      local_100 = puVar36[9];
      if (local_c8._4_4_ != (undefined4 *)0x0) {
        FUN_0056c910(local_c8._4_4_);
        *(undefined4 **)(local_e0 + 0x10 + iVar30 * 0x14) = local_c8._4_4_;
        *(undefined1 *)(local_e0 + 1 + iVar30 * 0x14) = 0xf9;
      }
      if (*(char *)(puVar36 + 0xe) == '\0') {
        if ((int)local_90 != 0) {
          uVar26 = FUN_0056bce0(&local_c0);
          FUN_005670f0(local_d8 + 0xd,puVar36,&DAT_00716900,uVar26);
          local_d4 = (int)local_90;
        }
        FUN_0056c290();
        FUN_00574b60(puVar35,&local_c0);
        iVar25 = FUN_005753f0(puVar35);
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        puVar19 = puVar36;
        goto joined_r0x005727a5;
      }
      FUN_00574d40();
      lVar41 = CONCAT44(CONCAT22(local_a0._6_2_,local_a0._4_2_),(undefined4 *)local_a0);
      puVar19 = puVar36;
      goto LAB_00572e06;
    case 0x13:
      puVar35 = local_e4 + *(int *)(local_e0 + 8 + iVar30 * 0x14) * 10;
      local_dc = puVar35;
      if ((*(byte *)(local_e4 + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 10 + 7) & 1) == 0) {
        lVar41 = FUN_00573c40();
        if (lVar41 == 0) {
          FUN_00574ec0(puVar35);
          iVar16 = local_d4;
          puVar35 = local_dc;
          puVar13 = local_dc;
          uVar40 = local_d0;
          uVar39 = local_c0;
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        }
        else {
          FUN_00574ec0(puVar35);
          iVar16 = local_d4;
          puVar35 = local_dc;
          puVar13 = local_dc;
          uVar40 = local_d0;
          uVar39 = local_c0;
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        }
      }
      else {
        FUN_00574f20();
        iVar16 = local_d4;
        puVar13 = local_dc;
        uVar40 = local_d0;
        uVar39 = local_c0;
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      }
      break;
    case 0x14:
      iVar25 = *(int *)(local_e0 + 4 + iVar30 * 0x14);
      FUN_00574a70();
      uVar34 = *(uint *)(local_e0 + 8 + iVar30 * 0x14);
      puVar2 = puVar17 + iVar25 * 10 + 4;
      uVar32 = *puVar2;
      *puVar2 = *puVar2 + uVar34;
      puVar17[iVar25 * 10 + 5] =
           puVar17[iVar25 * 10 + 5] + ((int)uVar34 >> 0x1f) + (uint)CARRY4(uVar32,uVar34);
      iVar16 = local_d4;
      puVar35 = local_dc;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      break;
    case 0x15:
      iVar25 = *(int *)(local_e0 + 4 + iVar30 * 0x14);
      FUN_0052b630();
      uVar39 = local_c0;
      if ((*(byte *)(puVar17 + iVar25 * 10 + 7) & 8) != 0) {
        FUN_00573cb0();
        uVar39 = local_c0;
      }
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      puVar35 = local_dc;
      if ((*(ushort *)(puVar17 + iVar25 * 10 + 7) & 4) == 0) {
        iVar30 = *(int *)(local_e0 + 8 + iVar30 * 0x14);
        if (iVar30 == 0) {
          local_d4 = 0x14;
          local_c0 = uVar39;
          goto LAB_00572d8c;
        }
        goto LAB_0056e364;
      }
      *(ushort *)(puVar17 + iVar25 * 10 + 7) = *(ushort *)(puVar17 + iVar25 * 10 + 7) & 0xbe04 | 4;
      iVar16 = local_d4;
      puVar13 = local_dc;
      uVar40 = local_d0;
      break;
    case 0x16:
      if ((*(byte *)(local_e4 + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 10 + 7) & 4) != 0) {
        FUN_00574cd0();
        iVar16 = local_d4;
        puVar13 = local_dc;
        uVar40 = local_d0;
        uVar39 = local_c0;
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      }
      break;
    case 0x17:
      local_10c = *(int *)(local_e0 + 0x10 + iVar30 * 0x14);
      break;
    case 0x18:
      if ((*(byte *)(local_e0 + 3 + iVar30 * 0x14) & 1) == 0) {
        local_10c = 0;
      }
      uVar32 = *(uint *)(local_e0 + 0xc + iVar30 * 0x14);
      local_c0._0_4_ = *(int **)(local_e0 + 0x10 + iVar30 * 0x14);
      uVar26 = *(undefined4 *)(local_e0 + 4 + iVar30 * 0x14);
      puVar35 = (undefined4 *)0x0;
      local_f8 = (double)CONCAT44(uVar26,(undefined4)local_f8);
      local_c8 = CONCAT44(*(undefined4 *)(local_e0 + 8 + iVar30 * 0x14),uVar26);
      local_d0 = (ulonglong)uVar32;
      if (0 < (int)uVar32) {
        while( true ) {
          local_c0._4_4_ = puVar35;
          if (local_10c != 0) {
            local_c0._4_4_ = *(undefined4 **)(local_10c + (int)puVar35 * 4);
          }
          local_b8 = (double)(ulonglong)
                             CONCAT14(*(undefined1 *)
                                       (*(int *)((int)(int *)local_c0 + 8) + (int)puVar35),
                                      *(undefined4 *)((int)(int *)local_c0 + ((int)puVar35 + 3) * 4)
                                     );
          local_a0._4_4_ = iVar25;
          local_110 = FUN_0055ddd0(local_e4 + (local_f8._4_4_ + (int)local_c0._4_4_) * 10);
          if (local_110 != 0) break;
          puVar35 = (undefined4 *)((int)local_d0._4_4_ + 1);
          local_d0 = CONCAT44(puVar35,(int *)local_d0);
          if ((int)(int *)local_d0 <= (int)puVar35) goto LAB_0056e0a3;
          local_f8 = (double)CONCAT44((int *)local_c8,(undefined4)local_f8);
          iVar25 = local_a0._4_4_;
        }
        if (local_b8._4_4_ != (byte *)0x0) {
          local_110 = -local_110;
        }
      }
LAB_0056e0a3:
      local_10c = 0;
      iVar16 = local_d4;
      puVar19 = local_e8;
      puVar35 = local_dc;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      break;
    case 0x19:
      if (local_110 < 0) {
        iVar30 = *(int *)(local_e0 + 4 + iVar30 * 0x14);
      }
      else {
        if (local_110 == 0) goto LAB_0056e360;
        iVar30 = *(int *)(local_e0 + 0xc + iVar30 * 0x14);
      }
      goto LAB_0056e364;
    case 0x1a:
      iVar23 = *(int *)(local_e0 + 4 + iVar30 * 0x14);
      if (*(char *)(local_d8[0x2e] + iVar23) != '\0') goto LAB_0056e360;
      *(undefined1 *)(local_d8[0x2e] + iVar23) = 1;
      break;
    case 0x1b:
    case 0x1c:
      if ((*(byte *)(local_e4 + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 10 + 7) & 1) == 0) {
        fVar38 = (float10)FUN_005759b0();
        local_f8 = (double)fVar38;
        uVar32 = (uint)(local_f8 != 0.0);
        local_d0 = CONCAT44(local_d0._4_4_,uVar32);
        if (*(char *)(local_e0 + iVar30 * 0x14) == '\x1c') {
          uVar32 = (uint)(uVar32 == 0);
          goto LAB_0056e32a;
        }
      }
      else {
        uVar32 = *(uint *)(local_e0 + 0xc + iVar30 * 0x14);
LAB_0056e32a:
        local_d0 = CONCAT44(local_d0._4_4_,uVar32);
      }
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      iVar25 = local_a0._4_4_;
      uVar39 = local_c0;
joined_r0x00571ca9:
      iVar16 = local_d4;
      puVar13 = local_dc;
      uVar40 = local_d0;
      if (uVar32 != 0) goto LAB_0056e360;
      break;
    case 0x1d:
      local_c0._0_4_ = *(int **)(local_e0 + 4 + iVar30 * 0x14);
      local_c0._4_4_ = *(undefined4 **)(local_e0 + 8 + iVar30 * 0x14);
      local_90 = 0;
      local_88 = 0;
      local_80 = 0;
      local_78 = (undefined1  [8])0x0;
      local_70 = 0;
      local_94 = local_e4 + *(int *)(local_e0 + 0xc + iVar30 * 0x14) * 10;
      piVar7 = *(int **)(local_d8[0x10] + (int)(int *)local_c0 * 4);
      local_b8 = (double)ZEXT48(piVar7);
      local_b0 = (double)CONCAT44(local_b0._4_4_,*piVar7);
      if (*piVar7 == 0) {
        if (piVar7[4] < 1) {
LAB_0056e436:
          local_d0 = local_d0 & 0xffffffff00000000;
LAB_0056e440:
          *(ushort *)(local_94 + 7) = *(ushort *)(local_94 + 7) & 0xbe01 | 1;
          iVar16 = local_d4;
          puVar19 = local_e8;
          puVar35 = local_dc;
          puVar13 = local_dc;
          uVar40 = local_d0;
          uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        }
        else {
          local_4c = local_e4 + piVar7[4] * 10;
          if (*(char *)((int)piVar7 + 0x22) == '\0') {
            local_d0 = CONCAT44(local_d0._4_4_,local_4c[6]);
            local_b8 = (double)CONCAT44(local_4c[1],piVar7);
            if ((*(byte *)(local_e0 + 3 + iVar30 * 0x14) & 0x20) == 0) {
              iVar16 = local_d8[0x14];
            }
            else {
              iVar16 = 0;
            }
            piVar7[0x14] = iVar16;
LAB_0056e565:
            uVar32 = (uint)(int *)local_d0;
LAB_0056e56b:
            iVar16 = (int)(int *)local_b8;
            local_a0._4_4_ = iVar25;
            goto LAB_0056e571;
          }
          FUN_005752a0(local_94);
          iVar16 = local_d4;
          puVar19 = local_e8;
          puVar35 = local_dc;
          puVar13 = local_dc;
          uVar40 = local_d0;
          uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
          if ((*(ushort *)(local_94 + 7) & 0x1000) != 0) {
            iVar25 = FUN_00574af0();
            lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
            iVar16 = local_d4;
            puVar19 = local_e8;
            puVar35 = local_dc;
            puVar13 = local_dc;
            uVar40 = local_d0;
            uVar39 = local_c0;
            if (iVar25 != 0) goto LAB_00572e06;
          }
        }
      }
      else {
        local_d4 = FUN_0056c810();
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        puVar19 = local_e8;
        if (local_d4 != 0) goto LAB_00572d8c;
        if (*(char *)((int)(int *)local_b8 + 0x1c) != '\0') goto LAB_0056e436;
        if (*(int *)((int)(int *)local_b8 + 0x50) != piVar20[0x14]) {
          if (*(char *)((int)(int *)local_b8 + 0x1f) == '\0') {
            FUN_0054cf70();
            iVar25 = local_a0._4_4_;
            goto LAB_0056e565;
          }
          FUN_0054dd50();
          local_d0 = CONCAT44(local_d0._4_4_,(int *)local_c8);
          uVar32 = (uint)(int *)local_c8;
          iVar25 = local_a0._4_4_;
          goto LAB_0056e56b;
        }
        uVar32 = *(uint *)((int)(int *)local_b8 + 0x54);
        local_d0 = CONCAT44(local_d0._4_4_,uVar32);
        local_b8 = (double)CONCAT44(*(undefined4 *)((int)(int *)local_b8 + 0x60),(int *)local_b8);
        iVar16 = (int)(int *)local_b8;
LAB_0056e571:
        puVar19 = local_e8;
        if (uVar32 == 0) goto LAB_0056e440;
        uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
        if ((uint)local_e8[0x14] < uVar32) goto LAB_00572de0;
        local_a4 = *(undefined4 **)(iVar16 + 0x14);
        iVar25 = *(int *)(iVar16 + 0x58);
        local_b0 = (double)CONCAT44(iVar25,(undefined4 *)local_b0);
        if (*(int *)(iVar16 + 0x50) == local_d8[0x14]) {
          local_a8 = *(undefined4 **)(iVar16 + 0x5c);
LAB_0056e826:
          puVar19 = local_e8;
          if (local_a8[(int)local_c0._4_4_] == 0) {
            if (*(char *)(local_e0 + 1 + iVar30 * 0x14) == -8) {
              FUN_005752a0(local_94,*(undefined4 *)(local_e0 + 0x10 + iVar30 * 0x14));
            }
            else {
              *(ushort *)(local_94 + 7) = *(ushort *)(local_94 + 7) & 0xbe01 | 1;
            }
          }
          else {
            if (local_b8._4_4_ == (byte *)0x0) {
              local_50 = *(uint *)(iVar25 + (int)local_c0._4_4_ * 4);
              bVar4 = *(byte *)(local_e0 + 3 + iVar30 * 0x14);
              if (((bVar4 & 0xc0) == 0) ||
                 (((local_50 < 0xc || ((local_50 & 1) != 0)) && (-1 < (char)bVar4)))) {
                local_a0._0_4_ = (undefined4 *)FUN_00576250();
                FUN_00574b60(&local_90);
                local_d4 = FUN_00574710((undefined4 *)local_b0,local_a8[(int)local_c0._4_4_],
                                        (undefined4 *)local_a0,
                                        *(undefined1 *)((int)(int *)local_b8 + 0x1f),&local_90);
                iVar16 = local_d4;
                puVar35 = local_dc;
                puVar13 = local_dc;
                uVar40 = local_d0;
                uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
                lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
                if (local_d4 != 0) break;
                pbVar18 = local_90._4_4_;
              }
              else {
                pbVar18 = (byte *)(-(uint)(local_50 < 0xc) & (uint)&local_c8);
              }
              uVar42 = CONCAT44(local_94,local_50);
              local_98 = pbVar18;
            }
            else {
              if ((*(ushort *)(local_94 + 7) & 0x2460) != 0) {
                FUN_00574d80();
                iVar25 = local_b0._4_4_;
              }
              pbVar18 = (byte *)(local_a8[(int)local_c0._4_4_] + (int)local_b8._4_4_);
              uVar42 = CONCAT44(local_94,*(undefined4 *)(iVar25 + (int)local_c0._4_4_ * 4));
            }
            FUN_00575e30(pbVar18,uVar42);
            *(char *)((int)local_94 + 0x1f) = (char)local_f0;
          }
          if (local_70._4_4_ != 0) {
            *(ushort *)(local_94 + 7) = *(ushort *)(local_94 + 7) & 0xe7ff;
            *(ushort *)(local_94 + 7) = *(ushort *)(local_94 + 7) | 0x200;
            local_94[1] = local_90._4_4_;
            local_94[9] = local_70._4_4_;
          }
          local_d4 = FUN_00574af0();
          iVar16 = local_d4;
          puVar35 = local_dc;
          puVar13 = local_dc;
          uVar40 = local_d0;
          uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        }
        else {
          local_a8 = (undefined4 *)(iVar25 + (int)local_a4 * 4);
          local_54 = 0;
          *(undefined4 **)(iVar16 + 0x5c) = local_a8;
          *(int **)((int)(int *)local_b8 + 0x54) = (int *)local_d0;
          *(int *)((int)(int *)local_b8 + 0x50) = local_d8[0x14];
          if (local_b8._4_4_ == (byte *)0x0) {
            if (*(char *)((int)(int *)local_b8 + 0x1f) == '\0') {
              local_98 = (byte *)FUN_0054cf50((undefined4 *)local_b0);
            }
            else {
              local_98 = (byte *)FUN_0054dce0();
            }
            if (local_54 < (int *)local_d0) {
              *(undefined4 *)((int)(int *)local_b8 + 0x60) = 0;
            }
            else {
              local_b8 = (double)CONCAT44(local_98,(int *)local_b8);
              *(byte **)((int)(int *)local_b8 + 0x60) = local_98;
            }
          }
          else {
            local_98 = local_b8._4_4_;
          }
          if (*local_98 < 0x80) {
            local_60 = (undefined4 *)(uint)*local_98;
            local_58 = 1;
          }
          else {
            local_58 = FUN_0055aaf0(local_98);
            local_58 = local_58 & 0xff;
          }
          if (local_60 < (undefined4 *)0x18004) {
            local_a0._0_4_ = (undefined4 *)((int)local_a4 * 5 + 3);
            if ((int)local_60 < (int)(undefined4 *)local_a0) {
              local_a0._0_4_ = local_60;
            }
            if ((local_b8._4_4_ == (byte *)0x0) && ((int)local_54 < (int)(undefined4 *)local_a0)) {
              local_78._4_2_ = 0;
              local_90 = local_90 & 0xffffffff00000000;
              local_d4 = FUN_00574710((undefined4 *)local_b0,0,(undefined4 *)local_a0);
              iVar16 = local_d4;
              puVar19 = local_e8;
              puVar35 = local_dc;
              puVar13 = local_dc;
              uVar40 = local_d0;
              uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
              lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
              if (local_d4 != 0) break;
              local_98 = local_90._4_4_;
            }
            local_64 = local_98 + (int)(undefined4 *)local_a0;
            local_68 = local_98 + local_58;
            iVar25 = 0;
            local_a0._4_4_ = 0;
            if (0 < (int)local_a4) {
              do {
                if (local_68 < local_64) {
                  local_a8[iVar25] = local_60;
                  local_a0._4_4_ = iVar25;
                  if (*local_68 < 0x80) {
                    local_50 = (uint)*local_68;
                    local_68 = local_68 + 1;
                  }
                  else {
                    uVar32 = FUN_0055aaf0(local_68);
                    local_68 = local_68 + (uVar32 & 0xff);
                  }
                  *(uint *)(local_b0._4_4_ + local_a0._4_4_ * 4) = local_50;
                  local_5c = (undefined4 *)FUN_00576250();
                  local_60 = (undefined4 *)((int)local_60 + (int)local_5c);
                  iVar25 = local_a0._4_4_;
                  if (local_60 < local_5c) {
                    local_68 = local_64 + 1;
                    break;
                  }
                }
                else {
                  local_a8[iVar25] = 0;
                }
                iVar25 = iVar25 + 1;
                local_a0._4_4_ = iVar25;
              } while (iVar25 < (int)local_a4);
            }
            FUN_00574d40();
            local_78._4_2_ = 1;
            if (((local_68 <= local_64) && (local_60 <= (int *)local_d0)) &&
               ((local_68 != local_64 || (local_60 == (int *)local_d0)))) {
              iVar25 = local_b0._4_4_;
              goto LAB_0056e826;
            }
            local_d4 = FUN_00551190();
            iVar16 = local_d4;
            puVar19 = local_e8;
            puVar35 = local_dc;
            puVar13 = local_dc;
            uVar40 = local_d0;
            uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
            lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
          }
          else {
            local_d4 = FUN_00551190();
            iVar16 = local_d4;
            puVar35 = local_dc;
            puVar13 = local_dc;
            uVar40 = local_d0;
            uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
            lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
          }
        }
      }
      break;
    case 0x1e:
      pcVar31 = *(char **)(local_e0 + 0x10 + iVar30 * 0x14);
      puVar35 = local_e4 + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 10;
      cVar14 = *pcVar31;
      uVar26 = CONCAT31(local_d0._5_3_,cVar14);
      local_d0._0_4_ = (int *)pcVar31;
      while (cVar14 != '\0') {
        local_d0 = CONCAT44(uVar26,(char *)((int)(int *)local_d0 + 1));
        if ((*(ushort *)(puVar35 + 7) & 0x4000) != 0) {
          FUN_00574600();
        }
        FUN_0052b5d0(puVar35);
        cVar14 = *(char *)(int *)local_d0;
        puVar35 = puVar35 + 10;
        uVar26 = CONCAT31(local_d0._5_3_,cVar14);
        puVar19 = local_e8;
      }
      local_d0 = CONCAT44(uVar26,(char *)((int)(int *)local_d0 + 1));
      iVar16 = local_d4;
      puVar35 = local_dc;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      break;
    case 0x1f:
      local_c0._0_4_ = (int *)0x0;
      uVar32 = 0;
      local_b0 = (double)((ulonglong)local_b0._4_4_ << 0x20);
      local_c8 = 0;
      local_98 = *(byte **)(local_e0 + 0x10 + iVar30 * 0x14);
      local_f8 = (double)CONCAT44(local_98,(undefined4)local_f8);
      puVar35 = local_e4 + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 10;
      iVar25 = *(int *)(local_e0 + 8 + iVar30 * 0x14);
      local_a0._4_2_ = (ushort)iVar25;
      local_a0._6_2_ = (undefined2)((uint)iVar25 >> 0x10);
      local_a0._0_4_ = puVar35 + iVar25 * 10 + -10;
      local_94 = (undefined4 *)(uint)*(byte *)((int)local_d8 + 0x5d);
      local_dc = local_e4 + *(int *)(local_e0 + 0xc + iVar30 * 0x14) * 10;
      local_d0 = CONCAT44(puVar35,(int *)local_d0);
      local_a4 = puVar35;
      if (puVar35 <= (undefined4 *)local_a0) {
        uVar32 = 0;
        do {
          if (local_f8._4_4_ != 0) {
            FUN_0052b5d0(puVar35,*(undefined1 *)
                                  (((int)puVar35 - (int)local_a4) / 0x28 + local_f8._4_4_));
            local_f8 = (double)CONCAT44(local_98,(undefined4)local_f8);
            uVar32 = (uint)(undefined4 *)local_b0;
            puVar35 = local_d0._4_4_;
          }
          if (((*(ushort *)(puVar35 + 7) & 0x4000) != 0) && (0 < (int)puVar35[6])) {
            FUN_00574600();
            local_f8 = (double)CONCAT44(local_98,(undefined4)local_f8);
            uVar32 = (uint)(undefined4 *)local_b0;
            puVar35 = local_d0._4_4_;
          }
          local_a8 = (undefined4 *)FUN_00576140(puVar35);
          uVar34 = FUN_00576250(local_a8);
          local_c8 = CONCAT44((int)local_c8._4_4_ + ((int)uVar34 >> 0x1f) +
                              (uint)CARRY4((uint)(int *)local_c8,uVar34),
                              (int)(int *)local_c8 + uVar34);
          local_90 = CONCAT44(uVar34,(int)local_90);
          iVar25 = FUN_0056bd90(extraout_ECX,0);
          local_c0._0_4_ = (int *)((int)(int *)local_c0 + iVar25);
          if ((*(ushort *)(puVar35 + 7) & 0x4000) == 0) {
            if (uVar34 != 0) {
              uVar32 = 0;
            }
          }
          else {
            uVar32 = uVar32 + puVar35[4];
          }
          puVar35 = puVar35 + 10;
          local_b0 = (double)CONCAT44(local_b0._4_4_,uVar32);
          local_d0 = CONCAT44(puVar35,(int *)local_d0);
        } while (puVar35 <= (undefined4 *)local_a0);
      }
      iVar25 = FUN_0056bd90((int *)local_c0);
      uVar34 = (int)(int *)local_c0 + iVar25;
      local_b0 = (double)CONCAT44(iVar25,(undefined4 *)local_b0);
      local_c0._0_4_ = (int *)uVar34;
      iVar30 = FUN_0056bd90(uVar34,(int)uVar34 >> 0x1f);
      puVar35 = local_dc;
      if (iVar25 < iVar30) {
        uVar34 = uVar34 + 1;
        local_c0._0_4_ = (int *)uVar34;
      }
      uVar29 = (uVar34 - uVar32) + (int)(int *)local_c8;
      iVar30 = ((((int)uVar34 >> 0x1f) - ((int)uVar32 >> 0x1f)) - (uint)(uVar34 < uVar32)) +
               (int)local_c8._4_4_ + (uint)CARRY4(uVar34 - uVar32,(uint)(int *)local_c8);
      local_b8 = (double)CONCAT44(iVar30,uVar29);
      iVar25 = (int)local_e8[0x14] >> 0x1f;
      puVar19 = local_e8;
      local_a0._4_4_ = CONCAT22(local_a0._6_2_,local_a0._4_2_);
      uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
      if ((iVar25 < iVar30) ||
         ((iVar25 <= iVar30 &&
          (local_a0._4_4_ = CONCAT22(local_a0._6_2_,local_a0._4_2_),
          uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0), (uint)local_e8[0x14] < uVar29))))
      goto LAB_00572de0;
      iVar25 = FUN_005748c0(local_dc);
      lVar41 = CONCAT44(CONCAT22(local_a0._6_2_,local_a0._4_2_),(undefined4 *)local_a0);
      puVar19 = local_e8;
      if (iVar25 != 0) goto LAB_00572e06;
      local_d0 = CONCAT44(local_d0._4_4_,(undefined1 *)puVar35[1]);
      if ((int *)local_c0 < 0x80) {
        *(undefined1 *)puVar35[1] = (char)(int *)local_c0;
        uVar32 = 1;
      }
      else {
        uVar32 = FUN_00563780();
      }
      uVar34 = uVar32 & 0xff;
      local_90 = CONCAT44(local_90._4_4_,uVar32) & 0xffffffff000000ff;
      local_d0 = CONCAT44(local_a4,(int *)local_d0);
      if (local_a4 <= (undefined4 *)local_a0) {
        do {
          local_a8 = (undefined4 *)FUN_00576140();
          if (local_a8 < (undefined4 *)0x80) {
            *(char *)(uVar34 + (int)(int *)local_d0) = (char)local_a8;
            uVar32 = 1;
          }
          else {
            uVar32 = FUN_00563780();
          }
          uVar34 = (int)local_90 + (uVar32 & 0xff);
          puVar19 = (undefined4 *)((int)local_d0._4_4_ + 0x28);
          local_90 = CONCAT44(local_90._4_4_,uVar34);
          local_d0 = CONCAT44(puVar19,(int *)local_d0);
        } while (puVar19 <= (undefined4 *)local_a0);
      }
      local_d0 = CONCAT44(local_a4,(int *)local_d0);
      if (local_a4 <= (undefined4 *)local_a0) {
        do {
          iVar25 = FUN_00576090((int)(int *)local_d0 + uVar34,(int)(int *)local_b8 - uVar34);
          uVar34 = (int)local_90 + iVar25;
          puVar19 = (undefined4 *)((int)local_d0._4_4_ + 0x28);
          local_90 = CONCAT44(local_90._4_4_,uVar34);
          local_d0 = CONCAT44(puVar19,(int *)local_d0);
        } while (puVar19 <= (undefined4 *)local_a0);
      }
      puVar35[6] = (int *)local_b8;
      *(undefined2 *)(puVar35 + 7) = 0x410;
      puVar35[8] = 0;
      if ((undefined4 *)local_b0 != (undefined4 *)0x0) {
        puVar35[4] = (undefined4 *)local_b0;
        *(undefined2 *)(puVar35 + 7) = 0x4410;
      }
      *(undefined1 *)((int)puVar35 + 0x1f) = 1;
      iVar16 = local_d4;
      puVar19 = local_e8;
      puVar35 = local_dc;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
      lVar41 = CONCAT44(CONCAT22(local_a0._6_2_,local_a0._4_2_),(undefined4 *)local_a0);
      break;
    case 0x20:
      iVar25 = **(int **)(local_d8[0x10] + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 4);
      local_c8 = CONCAT44(uVar32,iVar25);
      if (iVar25 == 0) {
        local_d0 = 0;
        puVar35[4] = 0;
        puVar35[5] = 0;
        uVar40 = local_d0;
      }
      else {
        local_d4 = FUN_0054cbd0();
        puVar35[4] = (int *)local_d0;
        puVar35[5] = local_d0._4_4_;
        iVar16 = local_d4;
        puVar13 = local_dc;
        uVar40 = local_d0;
        uVar39 = local_c0;
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      }
      break;
    case 0x21:
      iVar25 = *(int *)(local_e0 + 4 + iVar30 * 0x14);
      uVar26 = *(undefined4 *)(local_e0 + 0x10 + iVar30 * 0x14);
      local_f8 = (double)CONCAT44(uVar26,(undefined4)local_f8);
      local_d0 = CONCAT44(uVar26,iVar25);
      if (iVar25 == 0) {
        puVar19 = local_e8;
        if ((int)local_e8[0x22] < 1) {
          uVar26 = FUN_00568070();
          local_c8 = CONCAT44(local_c8._4_4_,uVar26);
          local_d4 = FUN_00577550(puVar36,0,puVar36[0x79] + puVar36[0x78]);
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
          puVar19 = puVar36;
          if (local_d4 != 0) goto LAB_00572d8c;
          piVar20 = (int *)FUN_00552230();
          local_c8 = CONCAT44(piVar20,(int *)local_c8);
          iVar16 = local_d4;
          puVar13 = local_dc;
          uVar40 = local_d0;
          uVar39 = local_c0;
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
          if (piVar20 != (int *)0x0) {
            *piVar20 = (int)(piVar20 + 6);
            memcpy((void *)*piVar20,local_d0._4_4_,(int)(int *)local_c8 + 1);
            if (*(char *)((int)puVar36 + 0x36) == '\0') {
              puVar36[0x78] = puVar36[0x78] + 1;
            }
            else {
              *(undefined1 *)((int)puVar36 + 0x36) = 0;
              *(undefined1 *)((int)puVar36 + 0x3d) = 1;
            }
            *(undefined4 *)((int)local_c8._4_4_ + 0x10) = puVar36[0x76];
            puVar36[0x76] = local_c8._4_4_;
            *(undefined4 *)((int)local_c8._4_4_ + 8) = puVar36[0x7a];
            *(undefined4 *)((int)local_c8._4_4_ + 0xc) = puVar36[0x7b];
            iVar16 = local_d4;
            puVar13 = local_dc;
            uVar40 = local_d0;
            uVar39 = local_c0;
            lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
          }
        }
        else {
LAB_0056eeeb:
          FUN_005670f0(local_d8 + 0xd);
          local_d4 = 5;
          iVar16 = 5;
          puVar13 = local_dc;
          uVar40 = local_d0;
          uVar39 = local_c0;
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        }
      }
      else {
        iVar16 = 0;
        local_b8 = (double)((ulonglong)uVar34 << 0x20);
        iVar30 = local_e8[0x76];
        local_c0._0_4_ = (int *)iVar30;
        if (iVar30 != 0) {
LAB_0056eff6:
          local_c0._0_4_ = (int *)iVar30;
          iVar23 = FUN_0057a2c0();
          piVar20 = local_d8;
          puVar19 = local_e8;
          if (iVar23 != 0) goto code_r0x0056f005;
          if ((0 < (int)local_e8[0x22]) && (iVar25 == 1)) {
            FUN_005670f0(local_d8 + 0xd);
            local_d4 = 5;
            iVar16 = 5;
            puVar35 = local_dc;
            puVar13 = local_dc;
            uVar40 = local_d0;
            uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
            lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
            break;
          }
          if ((*(int *)(iVar30 + 0x10) == 0) && (*(char *)((int)local_e8 + 0x3d) != '\0')) {
            local_f8 = (double)CONCAT44(1,(undefined4)local_f8);
            if (iVar25 == 1) {
              iVar25 = FUN_0056c500(local_d8);
              puVar19 = local_e8;
              lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
              if (iVar25 != 0) goto LAB_00572ea7;
              *(undefined1 *)((int)local_e8 + 0x36) = 1;
              iVar25 = FUN_00573740();
              if (iVar25 != 5) {
                *(undefined1 *)((int)puVar19 + 0x3d) = 0;
                local_d4 = piVar20[0x16];
                goto LAB_0056f1dc;
              }
              piVar20[0x15] = local_ec;
              *(undefined1 *)((int)puVar19 + 0x36) = 0;
              goto LAB_00572cab;
            }
          }
          else {
            local_f8 = (double)((ulonglong)local_f8 & 0xffffffff);
          }
          local_b8._0_4_ = (int *)((local_e8[0x78] - iVar16) - 1);
          if ((iVar25 == 2) && (local_b8._4_4_ = (byte *)0x0, 0 < (int)local_e8[5])) {
            do {
              FUN_0054f600();
              local_b8._4_4_ = (byte *)((int)local_b8._4_4_ + 1);
            } while ((int)local_b8._4_4_ < (int)puVar19[5]);
            iVar25 = (int)(int *)local_d0;
            iVar30 = (int)(int *)local_c0;
          }
          iVar23 = 0;
          local_b8 = (double)ZEXT48((int *)local_b8);
          iVar16 = local_d4;
          if (0 < (int)puVar19[5]) {
            while( true ) {
              local_d4 = iVar16;
              puVar35 = local_e8;
              local_d4 = FUN_0054efb0(*(undefined4 *)(local_e8[4] + 4 + iVar23 * 0x10));
              lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
              puVar19 = puVar35;
              local_c0 = CONCAT44(local_c0._4_4_,(int *)local_c0);
              if (local_d4 != 0) break;
              iVar23 = (int)local_b8._4_4_ + 1;
              local_b8 = (double)CONCAT44(iVar23,(int *)local_b8);
              iVar25 = (int)(int *)local_d0;
              iVar30 = (int)(int *)local_c0;
              puVar19 = local_e8;
              iVar16 = 0;
              if ((int)puVar35[5] <= iVar23) goto LAB_0056f1c0;
            }
            goto LAB_00572d8c;
          }
LAB_0056f1c0:
          if ((iVar25 == 2) && ((*(byte *)(puVar19 + 6) & 2) != 0)) {
            FUN_00553a10();
            FUN_00564000();
            puVar19[6] = puVar19[6] | 2;
LAB_0056f1dc:
            iVar25 = (int)(int *)local_d0;
            iVar30 = (int)(int *)local_c0;
          }
          if (puVar19[0x76] != iVar30) {
            do {
              local_c0._4_4_ = (undefined4 *)puVar19[0x76];
              puVar19[0x76] = local_c0._4_4_[4];
              FUN_005521a0();
              puVar19[0x78] = puVar19[0x78] + -1;
            } while ((int *)puVar19[0x76] != (int *)local_c0);
            iVar25 = (int)(int *)local_d0;
            iVar30 = (int)(int *)local_c0;
          }
          puVar19 = local_e8;
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
          uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
          if (iVar25 == 1) {
            local_e8[0x76] = *(undefined4 *)(iVar30 + 0x10);
            FUN_005521a0();
            lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
            uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
            iVar16 = local_d4;
            puVar35 = local_dc;
            puVar13 = local_dc;
            uVar40 = local_d0;
            if (local_f8._4_4_ == 0) {
              puVar19[0x78] = puVar19[0x78] + -1;
LAB_0056f285:
              local_d4 = FUN_00577550(puVar19);
              lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
              iVar16 = local_d4;
              puVar35 = local_dc;
              puVar13 = local_dc;
              uVar40 = local_d0;
              uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
              local_c0 = CONCAT44(local_c0._4_4_,(int *)local_c0);
              if (local_d4 != 0) goto LAB_00572d8c;
            }
          }
          else {
            local_e8[0x7a] = *(undefined4 *)(iVar30 + 8);
            local_e8[0x7b] = *(undefined4 *)(iVar30 + 0xc);
            iVar16 = local_d4;
            puVar35 = local_dc;
            puVar13 = local_dc;
            uVar40 = local_d0;
            if (local_f8._4_4_ == 0) goto LAB_0056f285;
          }
          break;
        }
LAB_0056f01f:
        puVar19 = local_e8;
        FUN_005670f0(local_d8 + 0xd,local_e8);
        local_d4 = 1;
        iVar16 = 1;
        puVar35 = local_dc;
        puVar13 = local_dc;
        uVar40 = local_d0;
        uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      }
      break;
    case 0x22:
      uVar34 = *(uint *)(local_e0 + 4 + iVar30 * 0x14);
      iVar25 = *(int *)(local_e0 + 8 + iVar30 * 0x14);
      local_d0 = CONCAT44(iVar25,uVar34);
      if ((uVar34 == 0) || (*(char *)((int)puVar19 + 0x36) != '\0')) {
        local_c8 = (ulonglong)uVar32 << 0x20;
      }
      else {
        local_c8 = CONCAT44(uVar32,1);
        if ((iVar25 == 0) && (0 < (int)puVar19[0x22])) goto LAB_0056eeeb;
      }
      if (uVar34 != *(byte *)((int)puVar19 + 0x36)) {
        if (iVar25 == 0) {
          iVar25 = FUN_0056c500(local_d8,1);
          piVar20 = local_d8;
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
          if (iVar25 != 0) goto LAB_00572ea7;
          *(char *)((int)puVar19 + 0x36) = (char)local_d0;
          iVar25 = FUN_00573740();
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
          if (iVar25 == 5) {
            piVar20[0x15] = local_ec;
            *(char *)((int)puVar19 + 0x36) = '\x01' - (char)local_d0;
            local_d8[0x16] = 5;
            goto LAB_00572ea7;
          }
        }
        else {
          FUN_00564340(puVar19,0x204);
          *(undefined1 *)((int)puVar19 + 0x36) = 1;
        }
        FUN_0054fdb0();
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        goto LAB_00572ea7;
      }
      FUN_005670f0(local_d8 + 0xd);
      local_d4 = 1;
      iVar16 = 1;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      break;
    case 0x23:
      iVar25 = *(int *)(puVar19[4] + 4 + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 0x10);
      local_d0 = CONCAT44(local_d0._4_4_,iVar25);
      uVar40 = local_d0;
      if (iVar25 != 0) {
        local_d4 = FUN_0054c3f0(iVar25);
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        if (local_d4 == 5) {
          local_d8[0x15] = local_ec;
          local_d8[0x16] = 5;
          goto LAB_00572ea7;
        }
        if (local_d4 != 0) goto LAB_00572d8c;
        iVar16 = local_d4;
        puVar13 = local_dc;
        uVar40 = local_d0;
        uVar39 = local_c0;
        if (((*(int *)(local_e0 + 8 + iVar30 * 0x14) != 0) &&
            ((*(byte *)(local_d8 + 0x18) & 0x80) != 0)) &&
           ((*(char *)((int)puVar19 + 0x36) == '\0' || (1 < (int)puVar19[0x21])))) {
          if (local_d8[0x1c] == 0) {
            puVar19[0x79] = puVar19[0x79] + 1;
            local_d8[0x1c] = puVar19[0x78] + puVar19[0x79];
          }
          local_d4 = FUN_00577550(puVar19,0);
          if (local_d4 == 0) {
            local_d4 = FUN_0054c3a0((int *)local_d0);
          }
          local_d8[0x24] = puVar19[0x7a];
          local_d8[0x25] = puVar19[0x7b];
          iVar16 = local_d4;
          puVar13 = local_dc;
          uVar40 = local_d0;
          uVar39 = local_c0;
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        }
      }
      break;
    case 0x24:
      iVar25 = *(int *)(local_e0 + 4 + iVar30 * 0x14);
      local_d0 = CONCAT44(iVar25,(int *)local_d0);
      uVar26 = *(undefined4 *)(local_e0 + 0xc + iVar30 * 0x14);
      local_c8 = CONCAT44(uVar32,uVar26);
      FUN_0054d510(*(undefined4 *)(puVar19[4] + 4 + iVar25 * 0x10),uVar26);
      puVar35[4] = (int *)local_d0;
      puVar35[5] = (int)(int *)local_d0 >> 0x1f;
      iVar16 = local_d4;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      break;
    case 0x25:
      local_d0 = CONCAT44(local_d0._4_4_,*(int *)(local_e0 + 4 + iVar30 * 0x14) * 0x10 + puVar19[4])
      ;
      iVar25 = *(int *)(local_e0 + 0xc + iVar30 * 0x14);
      FUN_00574a70();
      local_d4 = FUN_0054f6e0(*(undefined4 *)((int)(int *)local_d0 + 4),
                              *(undefined4 *)(local_e0 + 8 + iVar30 * 0x14),puVar17[iVar25 * 10 + 4]
                             );
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      iVar16 = *(int *)(local_e0 + 8 + iVar30 * 0x14);
      if (iVar16 == 1) {
        **(undefined4 **)((int)(int *)local_d0 + 0xc) = puVar17[iVar25 * 10 + 4];
        puVar19[6] = puVar19[6] | 2;
      }
      else if (iVar16 == 2) {
        *(undefined1 *)(*(int *)((int)(int *)local_d0 + 0xc) + 0x4c) =
             *(undefined1 *)(puVar17 + iVar25 * 10 + 4);
      }
      iVar16 = local_d4;
      puVar35 = local_dc;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      if (*(int *)(local_e0 + 4 + iVar30 * 0x14) == 1) {
        FUN_00553a10();
        local_d8[0x18] = local_d8[0x18] & 0xffffffdf;
        iVar16 = local_d4;
        puVar35 = local_dc;
        puVar13 = local_dc;
        uVar40 = local_d0;
        uVar39 = local_c0;
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      }
      break;
    case 0x26:
      iVar16 = *(int *)(puVar19[4] + 4 + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 0x10);
      local_c8 = CONCAT44(uVar32,iVar16);
      if (iVar16 == 0) {
        iVar16 = 0;
        local_d0 = 0;
        iVar23 = 0;
      }
      else {
        FUN_0054d510(iVar16,1);
        iVar23 = *(int *)(*(int *)(puVar19[4] + 0xc + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 0x10)
                         + 4);
        iVar16 = (int)(int *)local_d0;
        iVar25 = local_a0._4_4_;
        uVar39 = local_c0;
      }
      local_d0 = CONCAT44(iVar23,(int *)local_d0);
      if ((iVar16 != *(int *)(local_e0 + 8 + iVar30 * 0x14)) ||
         (iVar16 = local_d4, puVar13 = local_dc, uVar40 = local_d0,
         lVar41 = CONCAT44(iVar25,(undefined4 *)local_a0),
         iVar23 != *(int *)(local_e0 + 0xc + iVar30 * 0x14))) {
        local_a0._4_4_ = iVar25;
        local_c0 = uVar39;
        FUN_005521a0(puVar19);
        iVar25 = FUN_00552450(puVar19,"database schema has changed");
        local_d8[0xd] = iVar25;
        if ((int *)**(int **)(puVar19[4] + 0xc + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 0x10) !=
            (int *)local_d0) {
          FUN_00564060(puVar19);
        }
        local_d8[0x18] = local_d8[0x18] | 0x20;
        local_d4 = 0x11;
        iVar16 = 0x11;
        puVar13 = local_dc;
        uVar40 = local_d0;
        uVar39 = local_c0;
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      }
      break;
    case 0x27:
    case 0x28:
      if ((*(byte *)(local_d8 + 0x18) & 0x20) == 0) {
        local_d0 = 0;
        iVar25 = *(int *)(local_e0 + 8 + iVar30 * 0x14);
        iVar16 = *(int *)(local_e0 + 0xc + iVar30 * 0x14);
        local_c8 = CONCAT44(iVar16,iVar25);
        iVar23 = iVar16 * 0x10 + local_e8[4];
        local_b8 = (double)CONCAT44(iVar23,(int *)local_b8);
        local_c0._4_4_ = *(undefined4 **)(iVar23 + 4);
        if (*(char *)(local_e0 + iVar30 * 0x14) == '(') {
          local_c0._0_4_ = (int *)0x1;
          bVar4 = *(byte *)(*(int *)(iVar23 + 0xc) + 0x4c);
          if (bVar4 < *(byte *)((int)local_d8 + 0x5d)) {
            *(byte *)((int)local_d8 + 0x5d) = bVar4;
          }
        }
        else {
          local_c0._0_4_ = (int *)0x0;
        }
        iVar23 = 0;
        if ((*(byte *)(local_e0 + 3 + iVar30 * 0x14) & 2) != 0) {
          FUN_00574a70();
          local_c8 = CONCAT44(local_c8._4_4_,puVar17[iVar25 * 10 + 4]);
          if ((int)puVar17[iVar25 * 10 + 4] < 2) {
            local_d4 = FUN_00551190();
            lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
            puVar19 = local_e8;
            goto LAB_00572d8c;
          }
          iVar23 = (int)(int *)local_d0;
          iVar16 = (int)local_c8._4_4_;
        }
        iVar25 = local_e0;
        cVar14 = *(char *)(local_e0 + 1 + iVar30 * 0x14);
        if (cVar14 == -6) {
          uVar32 = *(uint *)(local_e0 + 0x10 + iVar30 * 0x14);
          local_d0 = (ulonglong)uVar32 << 0x20;
          *(undefined1 *)(uVar32 + 4) =
               *(undefined1 *)(*(int *)(*(int *)(*local_d8 + 0x10) + 0xc) + 0x4d);
          iVar23 = *(ushort *)(uVar32 + 6) + 1;
          iVar16 = (int)local_c8._4_4_;
LAB_0056f708:
          local_d0 = CONCAT44(local_d0._4_4_,iVar23);
        }
        else if (cVar14 == -0xe) {
          iVar23 = *(int *)(local_e0 + 0x10 + iVar30 * 0x14);
          goto LAB_0056f708;
        }
        iVar16 = FUN_00529890(local_d8,*(undefined4 *)(local_e0 + 4 + iVar30 * 0x14),iVar23,iVar16);
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        local_b8 = (double)CONCAT44(local_b8._4_4_,iVar16);
        puVar19 = local_e8;
        if (iVar16 == 0) goto LAB_00572e06;
        *(undefined1 *)(iVar16 + 0x1c) = 1;
        *(undefined1 *)(iVar16 + 0x20) = 1;
        local_d4 = FUN_0054ce30(local_c0._4_4_,(int *)local_c8,(int *)local_c0,local_d0._4_4_);
        ((int *)local_b8)[2] = (int)local_d0._4_4_;
        *(byte *)(*(int *)local_b8 + 0x5d) = *(byte *)(iVar25 + 3 + iVar30 * 0x14) & 1;
        *(bool *)((int)(int *)local_b8 + 0x1e) = *(char *)(iVar25 + 1 + iVar30 * 0x14) != -6;
        *(bool *)((int)(int *)local_b8 + 0x1f) = *(char *)((int)(int *)local_b8 + 0x1e) == '\0';
        iVar16 = local_d4;
        puVar19 = local_e8;
        puVar35 = local_dc;
        puVar13 = local_dc;
        uVar40 = local_d0;
        uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      }
      else {
        local_d4 = 4;
        iVar16 = 4;
      }
      break;
    case 0x29:
    case 0x2a:
      iVar25 = FUN_00529890(local_d8,*(undefined4 *)(local_e0 + 4 + iVar30 * 0x14),
                            *(undefined4 *)(local_e0 + 8 + iVar30 * 0x14),0xffffffff);
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      local_d0 = CONCAT44(local_d0._4_4_,iVar25);
      if (iVar25 == 0) goto LAB_00572e06;
      *(undefined1 *)(iVar25 + 0x1c) = 1;
      local_d4 = FUN_0054e4a0(*puVar19,0,puVar19,iVar25 + 4,
                              *(byte *)(local_e0 + 3 + iVar30 * 0x14) | 5);
      if (local_d4 == 0) {
        local_d4 = FUN_0054c3f0(*(undefined4 *)((int)(int *)local_d0 + 4));
        if (local_d4 == 0) {
          if (*(int *)(local_e0 + 0x10 + iVar30 * 0x14) == 0) {
            local_d4 = FUN_0054ce30(*(undefined4 *)((int)(int *)local_d0 + 4),1,1,0);
            *(undefined1 *)((int)(int *)local_d0 + 0x1e) = 1;
          }
          else {
            local_d4 = FUN_0054cde0(*(undefined4 *)((int)(int *)local_d0 + 4),&local_11c);
            if (local_d4 == 0) {
              local_d4 = FUN_0054ce30(*(undefined4 *)((int)(int *)local_d0 + 4),local_11c,1,
                                      *(undefined4 *)(local_e0 + 0x10 + iVar30 * 0x14));
              *(undefined4 *)((int)(int *)local_d0 + 8) =
                   *(undefined4 *)(local_e0 + 0x10 + iVar30 * 0x14);
              *(undefined1 *)(*(int *)((int)(int *)local_d0 + 8) + 4) =
                   *(undefined1 *)(*(int *)(*(int *)(*local_d8 + 0x10) + 0xc) + 0x4d);
            }
            *(undefined1 *)((int)(int *)local_d0 + 0x1e) = 0;
          }
        }
      }
      *(bool *)((int)(int *)local_d0 + 0x20) = *(char *)(local_e0 + 3 + iVar30 * 0x14) != '\b';
      *(bool *)((int)(int *)local_d0 + 0x1f) = *(char *)((int)(int *)local_d0 + 0x1e) == '\0';
      iVar16 = local_d4;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      break;
    case 0x2b:
      iVar25 = FUN_00529890(local_d8,*(undefined4 *)(local_e0 + 4 + iVar30 * 0x14),
                            *(undefined4 *)(local_e0 + 8 + iVar30 * 0x14),0xffffffff);
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      local_d0 = CONCAT44(local_d0._4_4_,iVar25);
      if (iVar25 == 0) goto LAB_00572e06;
      *(undefined4 *)(iVar25 + 8) = *(undefined4 *)(local_e0 + 0x10 + iVar30 * 0x14);
      *(undefined1 *)(*(int *)(iVar25 + 8) + 4) =
           *(undefined1 *)(*(int *)(*(int *)(*local_d8 + 0x10) + 0xc) + 0x4d);
      *(undefined1 *)(iVar25 + 0x21) = 1;
      local_d4 = FUN_005764e0(puVar19);
      iVar16 = local_d4;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      break;
    case 0x2c:
      iVar25 = FUN_00529890(local_d8,*(undefined4 *)(local_e0 + 4 + iVar30 * 0x14),
                            *(undefined4 *)(local_e0 + 0xc + iVar30 * 0x14),0xffffffff);
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      local_d0 = CONCAT44(local_d0._4_4_,iVar25);
      if (iVar25 == 0) goto LAB_00572e06;
      *(undefined1 *)(iVar25 + 0x1c) = 1;
      *(undefined4 *)(iVar25 + 0x10) = *(undefined4 *)(local_e0 + 8 + iVar30 * 0x14);
      *(undefined1 *)(iVar25 + 0x1e) = 1;
      *(undefined1 *)(iVar25 + 0x1f) = 0;
      *(undefined1 *)(iVar25 + 0x22) = *(undefined1 *)(local_e0 + 3 + iVar30 * 0x14);
      iVar16 = local_d4;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      break;
    case 0x2d:
      FUN_00573650(local_d8);
      *(undefined4 *)(local_d8[0x10] + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 4) = 0;
      iVar16 = local_d4;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      break;
    case 0x2e:
    case 0x2f:
    case 0x30:
    case 0x31:
      piVar20 = *(int **)(local_d8[0x10] + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 4);
      local_c8 = CONCAT44(uVar32,piVar20);
      if (*piVar20 == 0) goto LAB_0056e360;
      uVar5 = *(undefined1 *)(local_e0 + iVar30 * 0x14);
      local_d0 = (ulonglong)CONCAT14(uVar5,(int *)local_d0);
      *(undefined1 *)(piVar20 + 7) = 0;
      if (*(char *)((int)piVar20 + 0x1e) == '\0') {
        local_a8 = *(undefined4 **)(local_e0 + 0x10 + iVar30 * 0x14);
        local_c0._0_4_ = (int *)piVar20[2];
        local_c0._4_4_ =
             (undefined4 *)(CONCAT13(local_c0._7_1_,CONCAT12(uVar5,local_a8._0_2_)) & 0xff01ffff);
        local_b0 = (double)CONCAT44(local_b0._4_4_,
                                    local_e4 + *(int *)(local_e0 + 0xc + iVar30 * 0x14) * 10);
        if ((*(ushort *)(local_e4 + *(int *)(local_e0 + 0xc + iVar30 * 0x14) * 10 + 7) & 0x4000) !=
            0) {
          FUN_00574600();
          piVar20 = (int *)local_c8;
        }
        local_d4 = FUN_0054df80(*piVar20,&local_c0,0,0,0);
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        if (local_d4 != 0) goto LAB_00572d8c;
        *(undefined1 *)((int)(int *)local_c8 + 0x19) = 0;
      }
      else {
        puVar35 = local_e4 + *(int *)(local_e0 + 0xc + iVar30 * 0x14) * 10;
        FUN_0052b630();
        lVar41 = FUN_00573c40(puVar35);
        *(undefined1 *)((int)(int *)local_c8 + 0x19) = 0;
        if ((*(ushort *)(puVar35 + 7) & 4) == 0) {
          uVar39 = local_c0;
          if ((*(ushort *)(puVar35 + 7) & 8) == 0) {
            iVar30 = *(int *)(local_e0 + 8 + iVar30 * 0x14);
            puVar35 = local_dc;
            goto LAB_0056e364;
          }
          if (lVar41 == -0x8000000000000000) {
            local_f8 = -9.223372036854776e+18;
            if ((*(double *)(puVar35 + 2) < -9.223372036854776e+18) ||
               (0.0 < *(double *)(puVar35 + 2))) {
              local_d0 = CONCAT44(local_d0._4_4_,1);
              local_a0 = lVar41;
              if (0.0 < *(double *)(puVar35 + 2) || *(double *)(puVar35 + 2) == 0.0) {
                if ((int)local_d0._4_4_ < 0x30) {
                  local_d4 = FUN_0054dd90(*(int *)local_c8);
                  lVar41 = local_a0;
                  uVar39 = local_c0;
                  goto LAB_0056fba7;
                }
              }
              else if (0x2f < (int)local_d0._4_4_) {
                local_d4 = FUN_0054d460(*(int *)local_c8);
                lVar41 = local_a0;
                uVar39 = local_c0;
LAB_0056fba7:
                local_c0 = uVar39;
                if (local_d4 != 0) goto LAB_00572d8c;
                iVar16 = local_d4;
                puVar35 = local_dc;
                puVar13 = local_dc;
                uVar40 = local_d0;
                if ((int *)local_d0 != (int *)0x0) {
                  iVar30 = *(int *)(local_e0 + 8 + iVar30 * 0x14);
                  goto LAB_0056e364;
                }
                break;
              }
LAB_0056cbbf:
              iVar16 = local_d4;
              puVar35 = local_dc;
              local_ec = *(int *)(local_e0 + 8 + iVar30 * 0x14) + -1;
              puVar13 = local_dc;
              uVar40 = local_d0;
              break;
            }
          }
          if ((local_d0._4_4_ == (int *)0x2e) || (local_d0._4_4_ == (int *)0x30)) {
            local_f8 = (double)lVar41;
            if (local_f8 < *(double *)(puVar35 + 2)) {
              lVar41 = lVar41 + 1;
            }
          }
          else {
            local_f8 = (double)lVar41;
            if (*(double *)(puVar35 + 2) <= local_f8 && local_f8 != *(double *)(puVar35 + 2)) {
              lVar41 = lVar41 + -1;
            }
          }
        }
        local_a0 = lVar41;
        local_d4 = FUN_0054df80(*(int *)local_c8,0,lVar41,0);
        lVar41 = local_a0;
        if (local_d4 != 0) goto LAB_00572d8c;
        if ((int *)local_d0 == (int *)0x0) {
          *(undefined1 *)((int)(int *)local_c8 + 0x19) = 1;
          *(longlong *)((int)(int *)local_c8 + 0x40) = local_a0;
        }
      }
      *(undefined1 *)((int)(int *)local_c8 + 0x1d) = 0;
      ((int *)local_c8)[0x14] = 0;
      puVar35 = local_dc;
      local_a0 = lVar41;
      if ((int)local_d0._4_4_ < 0x30) {
        if (((int)(int *)local_d0 < 1) &&
           (((int *)local_d0 != (int *)0x0 || (local_d0._4_4_ != (int *)0x2e)))) {
          uVar32 = (uint)(*(char *)(*(int *)local_c8 + 0x5b) != '\x01');
          local_d0 = CONCAT44(local_d0._4_4_,uVar32);
          bVar37 = uVar32 == 0;
          goto LAB_0056de1b;
        }
        local_d4 = FUN_0054eaf0(*(int *)local_c8);
        lVar41 = local_a0;
      }
      else {
        if ((-1 < (int)(int *)local_d0) &&
           (((int *)local_d0 != (int *)0x0 || (local_d0._4_4_ != (int *)0x31)))) {
          local_d0 = ZEXT48(local_d0._4_4_) << 0x20;
          iVar16 = local_d4;
          puVar13 = local_dc;
          uVar40 = local_d0;
          uVar39 = local_c0;
          break;
        }
        local_d4 = FUN_0054e330(*(int *)local_c8);
        lVar41 = local_a0;
      }
      if (local_d4 != 0) goto LAB_00572d8c;
      *(undefined1 *)((int)(int *)local_c8 + 0x19) = 0;
      bVar37 = (int *)local_d0 == (int *)0x0;
      puVar35 = local_dc;
      goto LAB_0056de1b;
    case 0x32:
      piVar20 = *(int **)(local_d8[0x10] + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 4);
      local_d0 = CONCAT44(local_d0._4_4_,piVar20);
      uVar40 = local_d0;
      if (*piVar20 != 0) {
        *(undefined1 *)(piVar20 + 7) = 0;
        uVar42 = FUN_00573c40();
        *(undefined8 *)((int)(int *)local_d0 + 0x38) = uVar42;
        *(undefined1 *)((int)(int *)local_d0 + 0x19) = 0;
        *(undefined1 *)((int)(int *)local_d0 + 0x1d) = 1;
        iVar16 = local_d4;
        puVar13 = local_dc;
        uVar40 = local_d0;
        uVar39 = local_c0;
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      }
      break;
    case 0x33:
    case 0x34:
      uVar32 = 0;
      piVar20 = *(int **)(local_d8[0x10] + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 4);
      local_d0 = ZEXT48(piVar20) << 0x20;
      puVar35 = local_e4 + *(int *)(local_e0 + 0xc + iVar30 * 0x14) * 10;
      if (*piVar20 != 0) {
        if (*(int *)(local_e0 + 0x10 + iVar30 * 0x14) < 1) {
          puVar21 = (undefined8 *)FUN_0056c220(piVar20[2],&local_a0,0x97);
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
          local_c0 = CONCAT44(local_c0._4_4_,puVar21);
          if (puVar21 == (undefined8 *)0x0) goto LAB_00572e06;
          local_c0._0_4_ = (int *)puVar21;
          FUN_00575bc0(*(undefined4 *)((int)local_d0._4_4_ + 8),puVar35[6],puVar35[1]);
          *(byte *)((int)(int *)local_c0 + 6) = *(byte *)((int)(int *)local_c0 + 6) | 2;
          piVar20 = local_d0._4_4_;
        }
        else {
          local_b8._0_6_ = CONCAT24(*(undefined2 *)(local_e0 + 0x10 + iVar30 * 0x14),piVar20[2]);
          local_c0._0_4_ = (int *)&local_b8;
          local_b8._0_7_ = CONCAT16(2,(undefined6)local_b8);
          local_a8 = puVar35;
        }
        local_d4 = FUN_0054df80(*piVar20,(int *)local_c0,0,0,0);
        iVar25 = local_a0._4_4_;
        if (*(int *)(local_e0 + 0x10 + iVar30 * 0x14) == 0) {
          FUN_005521a0(puVar19);
          iVar25 = local_a0._4_4_;
        }
        uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
        iVar16 = local_d4;
        puVar35 = local_dc;
        puVar13 = local_dc;
        uVar40 = local_d0;
        lVar41 = CONCAT44(iVar25,(undefined4 *)local_a0);
        if (local_d4 != 0) break;
        uVar32 = (uint)((int *)local_c8 == (int *)0x0);
        local_d0 = CONCAT44(local_d0._4_4_,uVar32);
        *(undefined1 *)((int)local_d0._4_4_ + 0x1d) = 0;
        *(undefined4 *)((int)local_d0._4_4_ + 0x50) = 0;
      }
      lVar41 = CONCAT44(iVar25,(undefined4 *)local_a0);
      puVar35 = local_dc;
      uVar40 = local_d0;
      iVar16 = local_d4;
      puVar13 = local_dc;
      if (*(char *)(local_e0 + iVar30 * 0x14) == '4') {
        if (uVar32 != 0) {
          iVar30 = *(int *)(local_e0 + 8 + iVar30 * 0x14);
          lVar41 = CONCAT44(iVar25,(undefined4 *)local_a0);
          goto LAB_0056e364;
        }
      }
      else if (uVar32 == 0) {
        iVar30 = *(int *)(local_e0 + 8 + iVar30 * 0x14);
        goto LAB_0056e364;
      }
      break;
    case 0x35:
      iVar25 = *(int *)(local_e0 + 0xc + iVar30 * 0x14);
      local_c0._0_4_ = local_e4 + *(int *)(local_e0 + 0x10 + iVar30 * 0x14) * 10;
      piVar20 = *(int **)(local_d8[0x10] + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 4);
      local_d0 = CONCAT44(piVar20,(int *)local_d0);
      piVar20[0x13] = 0;
      piVar20[0x14] = 0;
      iVar23 = *piVar20;
      local_f8 = (double)CONCAT44(iVar23,(undefined4)local_f8);
      uVar6 = *(ushort *)(piVar20[2] + 6);
      uVar27 = 0;
      local_c8._0_6_ = CONCAT24(uVar6,iVar23);
      local_d0 = local_d0 & 0xffffffffffff0000;
      uVar39 = CONCAT44(puVar12,(int *)local_c0);
      if (uVar6 != 0) {
        uVar32 = 0;
        do {
          if ((*(byte *)((int *)local_c0 + uVar32 * 10 + 7) & 1) != 0) {
            iVar30 = *(int *)(local_e0 + 8 + iVar30 * 0x14);
            local_c8 = local_c8 & 0xffffffff00000000;
            puVar19 = local_e8;
            puVar35 = local_dc;
            goto LAB_0056e364;
          }
          uVar27 = uVar27 + 1;
          uVar32 = (uint)uVar27;
          local_d0 = CONCAT62(local_d0._2_6_,uVar27);
        } while (uVar32 < uVar6);
      }
      puVar19 = puVar36;
      puVar35 = puVar10;
      uVar40 = local_d0;
      if (iVar23 != 0) {
        local_b8._0_6_ = CONCAT24(uVar6 + 1,*(undefined4 *)((int)local_d0._4_4_ + 8));
        local_b8._0_7_ = CONCAT16(4,(undefined6)local_b8);
        local_a8 = (int *)local_c0;
        FUN_00574a70();
        local_a0._0_4_ = (undefined4 *)puVar17[iVar25 * 10 + 4];
        local_a0._4_2_ = (ushort)puVar17[iVar25 * 10 + 5];
        local_a0._6_2_ = (undefined2)((uint)puVar17[iVar25 * 10 + 5] >> 0x10);
        local_d4 = FUN_0054df80((int *)local_c8,&local_b8,0,0,0,(int)local_d0._4_4_ + 0x4c);
        if (((ulonglong)local_b8 & 0x4000000000000) == 0) {
          if (((undefined4 *)local_b0 != (undefined4 *)local_a0) ||
             (local_b0._4_4_ != CONCAT22(local_a0._6_2_,local_a0._4_2_))) {
            puVar17[iVar25 * 10 + 4] = (undefined4 *)local_b0;
            puVar17[iVar25 * 10 + 5] = local_b0._4_4_;
            iVar16 = local_d4;
            puVar19 = local_e8;
            puVar35 = local_dc;
            puVar13 = local_dc;
            uVar40 = local_d0;
            uVar39 = local_c0;
            lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
            break;
          }
        }
LAB_005717d0:
        iVar30 = *(int *)(local_e0 + 8 + iVar30 * 0x14);
        puVar19 = local_e8;
        puVar35 = local_dc;
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        uVar39 = local_c0;
        goto LAB_0056e364;
      }
      break;
    case 0x36:
      iVar25 = *(int *)(local_e0 + 0xc + iVar30 * 0x14);
      piVar20 = *(int **)(local_d8[0x10] + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 4);
      iVar23 = *piVar20;
      local_d0 = CONCAT44(iVar23,piVar20);
      if (iVar23 == 0) {
        iVar25 = *(int *)(local_e0 + 8 + iVar30 * 0x14);
        piVar20[0x13] = 0;
        puVar35 = puVar10;
        local_ec = iVar25 + -1;
        uVar40 = local_d0;
      }
      else {
        local_c8 = (ulonglong)uVar32 << 0x20;
        local_c0._0_4_ = (int *)local_e4[iVar25 * 10 + 4];
        local_c0._4_4_ = (undefined4 *)local_e4[iVar25 * 10 + 5];
        local_d4 = FUN_0054df80(iVar23,0,(int *)local_c0,local_c0._4_4_,0);
        *(undefined4 *)((int)(int *)local_d0 + 0x40) = local_e4[iVar25 * 10 + 4];
        *(undefined4 *)((int)(int *)local_d0 + 0x44) = local_e4[iVar25 * 10 + 5];
        *(bool *)((int)(int *)local_d0 + 0x19) = (int *)local_c8 == (int *)0x0;
        *(undefined1 *)((int)(int *)local_d0 + 0x1c) = 0;
        *(undefined4 *)((int)(int *)local_d0 + 0x50) = 0;
        *(undefined1 *)((int)(int *)local_d0 + 0x1d) = 0;
        if ((int *)local_c8 != (int *)0x0) {
          local_ec = *(int *)(local_e0 + 8 + iVar30 * 0x14) + -1;
        }
        *(int **)((int)(int *)local_d0 + 0x4c) = (int *)local_c8;
        iVar16 = local_d4;
        puVar19 = local_e8;
        puVar35 = local_dc;
        puVar13 = local_dc;
        uVar40 = local_d0;
        uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      }
      break;
    case 0x37:
      iVar25 = *(int *)(local_d8[0x10] + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 4);
      puVar35[4] = *(undefined4 *)(iVar25 + 0x30);
      puVar35[5] = *(undefined4 *)(iVar25 + 0x34);
      iVar25 = *(int *)(local_d8[0x10] + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 4);
      puVar2 = (uint *)(iVar25 + 0x30);
      uVar32 = *puVar2;
      *puVar2 = *puVar2 + 1;
      piVar20 = (int *)(iVar25 + 0x34);
      *piVar20 = *piVar20 + (uint)(0xfffffffe < uVar32);
      break;
    case 0x38:
      local_d0 = 0;
      piVar20 = *(int **)(local_d8[0x10] + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 4);
      local_c8 = ZEXT48(piVar20);
      iVar16 = *piVar20;
      if (iVar16 != 0) {
        if (*(char *)((int)piVar20 + 0x1b) == '\0') {
          local_130 = *(int *)(iVar16 + 0x20);
          iVar23 = *(int *)(iVar16 + 0x24);
          local_d0 = *(ulonglong *)(iVar16 + 0x20);
          if (local_130 == 0 && iVar23 == 0) {
            local_d4 = FUN_0054dd90(*piVar20);
            lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
            if (local_d4 != 0) goto LAB_00572d8c;
            if (local_c8._4_4_ == (undefined4 *)0x0) {
              local_d4 = FUN_0054dd50(*(int *)local_c8);
              if (((int)local_d0._4_4_ < 0x7fffffff) || ((int *)local_d0 != (int *)0xffffffff)) {
                iVar23 = (int)local_d0._4_4_ + (uint)(0xfffffffe < (int *)local_d0);
                goto LAB_005703e8;
              }
              *(undefined1 *)((int)(int *)local_c8 + 0x1b) = 1;
              local_130 = -1;
              iVar23 = (int)local_d0._4_4_;
              iVar25 = local_a0._4_4_;
              uVar39 = local_c0;
            }
            else {
              iVar23 = 0;
              local_d0._0_4_ = (int *)0x0;
LAB_005703e8:
              local_130 = (int)(int *)local_d0 + 1;
              local_d0 = CONCAT44(iVar23,local_130);
              iVar25 = local_a0._4_4_;
              uVar39 = local_c0;
            }
            piVar20 = (int *)local_c8;
          }
          local_c0._0_4_ = (int *)uVar39;
          iVar16 = *(int *)(local_e0 + 0xc + iVar30 * 0x14);
          local_a0._4_4_ = iVar25;
          if (iVar16 != 0) {
            iVar25 = local_d8[0x28];
            if (iVar25 == 0) {
              local_c0._4_4_ = local_e4 + iVar16 * 10;
            }
            else {
              local_b8 = (double)CONCAT44(local_b8._4_4_,iVar25);
              for (iVar16 = *(int *)(iVar25 + 4); iVar16 != 0; iVar16 = *(int *)(iVar16 + 4)) {
                local_b8._4_4_ = (byte *)((ulonglong)local_b8 >> 0x20);
                local_b8 = (double)CONCAT44(local_b8._4_4_,iVar16);
                iVar25 = iVar16;
              }
              local_c0._4_4_ =
                   (undefined4 *)
                   (*(int *)(iVar25 + 0xc) + *(int *)(local_e0 + 0xc + iVar30 * 0x14) * 0x28);
            }
            FUN_00574a70();
            uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
            uVar32 = local_c0._4_4_[4];
            uVar40 = local_c8;
            iVar25 = local_a0._4_4_;
            if (((uVar32 == 0xffffffff) && (local_c0._4_4_[5] == 0x7fffffff)) ||
               (*(char *)((int)(int *)local_c8 + 0x1b) != '\0')) {
LAB_00572d9f:
              local_c8 = uVar40;
              local_d4 = 0xd;
              lVar41 = CONCAT44(iVar25,(undefined4 *)local_a0);
              local_c0 = CONCAT44(local_c0._4_4_,(int *)local_c0);
              goto LAB_00572d8c;
            }
            uVar34 = uVar32 + 1;
            iVar25 = local_c0._4_4_[5] + (uint)(0xfffffffe < uVar32);
            uVar32 = (uint)(int *)local_d0;
            if (((int)local_d0._4_4_ <= iVar25) &&
               (((int)local_d0._4_4_ < iVar25 || ((int *)local_d0 < uVar34)))) {
              local_d0 = CONCAT44(iVar25,uVar34);
              uVar32 = uVar34;
            }
            local_c0._4_4_[4] = uVar32;
            local_c0._4_4_[5] = local_d0._4_4_;
            local_130 = (int)(int *)local_d0;
            iVar23 = (int)local_d0._4_4_;
            piVar20 = (int *)local_c8;
          }
          if ((iVar23 < 0x7fffffff) || (local_130 != -1)) {
            local_130 = local_130 + 1;
          }
          else {
            local_130 = 0;
          }
          local_c0 = uVar39;
          FUN_0054f260(*piVar20,local_130);
          piVar20 = (int *)local_c8;
          uVar40 = local_c8;
          iVar25 = local_a0._4_4_;
          uVar39 = local_c0;
          if (*(char *)((int)(int *)local_c8 + 0x1b) != '\0') goto LAB_00570534;
        }
        else {
LAB_00570534:
          iVar25 = (local_100 & 0x3fffffff) + (uint)(0xfffffffe < local_104);
          local_d0 = CONCAT44(iVar25,local_104 + 1);
          local_c0._0_4_ = (int *)0x0;
          local_d4 = FUN_0054df80(*piVar20,0,local_104 + 1,iVar25,0);
          uVar40 = local_c8;
          iVar25 = local_a0._4_4_;
          while (local_d4 == 0) {
            local_c8._4_4_ = (undefined4 *)(uVar40 >> 0x20);
            if ((local_c8._4_4_ != (undefined4 *)0x0) ||
               (local_c0._0_4_ = (int *)((int)(int *)local_c0 + 1), 99 < (int)(int *)local_c0)) {
              if (local_c8._4_4_ == (undefined4 *)0x0) goto LAB_00572d9f;
              break;
            }
            local_c8 = uVar40;
            local_a0._4_4_ = iVar25;
            FUN_005245e0(8);
            if ((int)(int *)local_c0 < 5) {
              local_d0._0_4_ = (int *)((uint)(int *)local_d0 & 0xffffff);
              uVar32 = 0;
            }
            else {
              uVar32 = (uint)local_d0._4_4_ & 0x3fffffff;
            }
            iVar25 = (int)(int *)local_d0 + 1;
            iVar30 = uVar32 + (0xfffffffe < (int *)local_d0);
            local_d0 = CONCAT44(iVar30,iVar25);
            local_d4 = FUN_0054df80(*(int *)local_c8,0,iVar25,iVar30,0);
            uVar40 = local_c8;
            iVar25 = local_a0._4_4_;
          }
          uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
          local_c8._0_4_ = (int *)uVar40;
        }
        local_c8 = uVar40;
        puVar3 = (undefined1 *)((int)(int *)local_c8 + 0x19);
        *puVar3 = 0;
        *(undefined1 *)((int)(int *)local_c8 + 0x1d) = 0;
        *(undefined4 *)((int)(int *)local_c8 + 0x50) = 0;
      }
      local_dc[4] = (int *)local_d0;
      local_dc[5] = local_d0._4_4_;
      iVar16 = local_d4;
      puVar35 = local_dc;
      puVar13 = local_dc;
      uVar40 = local_d0;
      lVar41 = CONCAT44(iVar25,(undefined4 *)local_a0);
      break;
    case 0x39:
    case 0x3a:
      puVar35 = local_e4 + *(int *)(local_e0 + 8 + iVar30 * 0x14) * 10;
      local_c0._0_4_ = *(int **)(local_d8[0x10] + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 4);
      uVar32 = *(uint *)(local_e0 + 0xc + iVar30 * 0x14);
      if (*(char *)(local_e0 + iVar30 * 0x14) == '9') {
        local_d0._4_4_ = local_e4 + uVar32 * 10;
        uVar32 = local_d0._4_4_[4];
        uVar29 = local_d0._4_4_[5];
      }
      else {
        uVar29 = (int)uVar32 >> 0x1f;
      }
      local_d0 = CONCAT44(local_d0._4_4_,puVar35);
      local_c8 = CONCAT44(uVar29,uVar32);
      if ((*(byte *)(local_e0 + 3 + iVar30 * 0x14) & 1) != 0) {
        local_d8[0x19] = local_d8[0x19] + 1;
      }
      if ((*(byte *)(local_e0 + 3 + iVar30 * 0x14) & 2) != 0) {
        local_e8[8] = uVar32;
        local_e8[9] = uVar29;
        local_104 = uVar32;
        local_100 = uVar29;
      }
      if ((*(byte *)(puVar35 + 7) & 1) != 0) {
        puVar35[1] = 0;
        puVar35[6] = 0;
      }
      if ((*(byte *)(local_e0 + 3 + iVar30 * 0x14) & 0x10) == 0) {
        local_b8 = (double)((ulonglong)uVar34 << 0x20);
      }
      else {
        local_b8 = (double)CONCAT44(uVar34,((int *)local_c0)[0x13]);
      }
      if ((*(ushort *)(puVar35 + 7) & 0x4000) == 0) {
        local_c0._4_4_ = (undefined4 *)0x0;
      }
      else {
        local_c0._4_4_ = (undefined4 *)puVar35[4];
      }
      FUN_0054f260(*(int *)local_c0,0);
      iVar25 = local_e0;
      local_d4 = FUN_0054d680(*(int *)local_c0,0,(int *)local_c8,local_c8._4_4_,
                              *(undefined4 *)((int)(int *)local_d0 + 4),
                              *(undefined4 *)((int)(int *)local_d0 + 0x18),local_c0._4_4_,
                              *(byte *)(local_e0 + 3 + iVar30 * 0x14) & 8,(int *)local_b8);
      puVar19 = local_e8;
      *(undefined1 *)((int)(int *)local_c0 + 0x19) = 0;
      *(undefined1 *)((int)(int *)local_c0 + 0x1d) = 0;
      ((int *)local_c0)[0x14] = 0;
      iVar16 = local_d4;
      puVar35 = local_dc;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      if (((local_d4 == 0) &&
          (uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0),
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0), local_e8[0x2f] != 0)) &&
         (uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0),
         lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0),
         *(int *)(iVar25 + 0x10 + iVar30 * 0x14) != 0)) {
        uVar26 = *(undefined4 *)(local_e8[4] + ((int *)local_c0)[3] * 0x10);
        local_b8 = (double)CONCAT44(uVar26,(int *)local_b8);
        uVar8 = *(undefined4 *)(iVar25 + 0x10 + iVar30 * 0x14);
        uVar22 = 0x12;
        if ((*(byte *)(iVar25 + 3 + iVar30 * 0x14) & 4) != 0) {
          uVar22 = 0x17;
        }
        local_b0 = (double)CONCAT44(uVar22,uVar8);
        (*(code *)local_e8[0x2f])(local_e8[0x2e],uVar22,uVar26,uVar8,(int *)local_c8);
        iVar16 = local_d4;
        puVar35 = local_dc;
        puVar13 = local_dc;
        uVar40 = local_d0;
        uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      }
      break;
    case 0x3b:
      local_d0 = 0;
      iVar25 = *(int *)(local_d8[0x10] + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 4);
      local_c8 = CONCAT44(uVar32,iVar25);
      if ((puVar19[0x2f] != 0) && (*(int *)(local_e0 + 0x10 + iVar30 * 0x14) != 0)) {
        local_d0 = *(ulonglong *)(iVar25 + 0x40);
      }
      local_d4 = FUN_0056c810();
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      if (local_d4 != 0) {
LAB_00572d8c:
        if (*(char *)(puVar19 + 0xe) == '\0') {
          iVar16 = local_d4;
          if (local_d4 == 0xc0a) goto LAB_00572e2d;
        }
        else {
          local_d4 = 7;
        }
        local_a0 = lVar41;
        uVar26 = FUN_00553860();
        FUN_005670f0(local_d8 + 0xd,puVar19,&DAT_00716900,uVar26);
        iVar16 = local_d4;
        lVar41 = local_a0;
        goto LAB_00572e2d;
      }
      FUN_0054f260(*(int *)local_c8,0);
      local_d4 = FUN_0054cfd0(*(int *)local_c8);
      *(undefined4 *)((int)(int *)local_c8 + 0x50) = 0;
      if (((local_d4 == 0) && ((code *)puVar19[0x2f] != (code *)0x0)) &&
         (iVar25 = *(int *)(local_e0 + 0x10 + iVar30 * 0x14), iVar25 != 0)) {
        (*(code *)puVar19[0x2f])
                  (puVar19[0x2e],9,
                   *(undefined4 *)(puVar19[4] + *(int *)((int)(int *)local_c8 + 0xc) * 0x10),iVar25,
                   (int *)local_d0);
      }
      iVar16 = local_d4;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      if ((*(byte *)(local_e0 + 8 + iVar30 * 0x14) & 1) != 0) {
        local_d8[0x19] = local_d8[0x19] + 1;
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      }
      break;
    case 0x3c:
      iVar25 = local_d8[0x19];
      puVar19[0x13] = puVar19[0x13] + iVar25;
      puVar19[0x12] = iVar25;
      local_d8[0x19] = 0;
      break;
    case 0x3d:
      uVar26 = *(undefined4 *)(local_d8[0x10] + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 4);
      local_d0 = CONCAT44(local_d0._4_4_,uVar26);
      local_d4 = FUN_00576430(uVar26,local_e4 + *(int *)(local_e0 + 0xc + iVar30 * 0x14) * 10);
      iVar16 = local_d4;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      if (local_d0._4_4_ != (int *)0x0) {
        iVar30 = *(int *)(local_e0 + 8 + iVar30 * 0x14);
        goto LAB_0056e364;
      }
      break;
    case 0x3e:
      puVar35 = local_e4 + *(int *)(local_e0 + 8 + iVar30 * 0x14) * 10;
      uVar26 = *(undefined4 *)(local_d8[0x10] + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 4);
      local_d0 = CONCAT44(local_d0._4_4_,uVar26);
      local_dc = puVar35;
      local_d4 = FUN_00576940(uVar26);
      iVar16 = local_d4;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      break;
    case 0x3f:
    case 0x40:
      local_dc = local_e4 + *(int *)(local_e0 + 8 + iVar30 * 0x14) * 10;
      puVar35 = *(undefined4 **)(local_d8[0x10] + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 4);
      local_d0 = CONCAT44(*puVar35,puVar35);
      local_d4 = FUN_0056c810();
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      if (local_d4 != 0) goto LAB_00572d8c;
      if (*(char *)((int)(int *)local_d0 + 0x1f) == '\0') {
        FUN_0054cf70(local_d0._4_4_);
        uVar32 = (uint)(int *)local_c8;
        uVar39 = local_c0;
        if ((uint)puVar19[0x14] < (int *)local_c8) goto LAB_00572de0;
LAB_00570af7:
        puVar35 = local_dc;
        iVar25 = FUN_005748c0(local_dc,uVar32);
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        if (iVar25 == 0) {
          puVar35[6] = (int *)local_c8;
          *(ushort *)(puVar35 + 7) = *(ushort *)(puVar35 + 7) & 0xbe10 | 0x10;
          if (*(char *)((int)(int *)local_d0 + 0x1f) == '\0') {
            local_d4 = FUN_0054cf10(local_d0._4_4_,0,(int *)local_c8);
            *(undefined1 *)((int)puVar35 + 0x1f) = 1;
            iVar16 = local_d4;
            puVar35 = local_dc;
            puVar13 = local_dc;
            uVar40 = local_d0;
            uVar39 = local_c0;
            lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
          }
          else {
            local_d4 = FUN_00528920(local_d0._4_4_,0,(int *)local_c8,puVar35[1]);
            *(undefined1 *)((int)puVar35 + 0x1f) = 1;
            iVar16 = local_d4;
            puVar13 = local_dc;
            uVar40 = local_d0;
            uVar39 = local_c0;
            lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
          }
          break;
        }
        goto LAB_00572e06;
      }
      FUN_0054dd50(local_d0._4_4_);
      uVar39 = local_c0;
      if ((longlong)local_c0 <= (longlong)(int)puVar19[0x14]) {
        local_c8 = CONCAT44(local_c8._4_4_,(int *)local_c0);
        uVar32 = (uint)(int *)local_c0;
        goto LAB_00570af7;
      }
LAB_00572de0:
      local_c0 = uVar39;
      FUN_005670f0(local_d8 + 0xd,puVar19,"string or blob too big");
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      iVar16 = 0x12;
      local_d4 = iVar16;
      goto LAB_00572e2d;
    case 0x41:
      iVar25 = *(int *)(local_d8[0x10] + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 4);
      local_d0 = CONCAT44(local_d0._4_4_,iVar25);
      uVar40 = local_d0;
      if (*(char *)(iVar25 + 0x1c) == '\0') {
        if (*(char *)(iVar25 + 0x1d) == '\0') {
          if (*(undefined4 **)(iVar25 + 0x24) == (undefined4 *)0x0) {
            local_d4 = FUN_0056c810();
            lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
            if (local_d4 != 0) goto LAB_00572d8c;
            if (*(char *)((int)(int *)local_d0 + 0x19) == '\0') {
              local_d4 = FUN_0054dd50(*(int *)local_d0);
              puVar35[4] = (int *)local_c8;
              puVar35[5] = local_c8._4_4_;
              iVar16 = local_d4;
              puVar13 = local_dc;
              uVar40 = local_d0;
              uVar39 = local_c0;
              lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
            }
            else {
              uVar26 = ((int *)local_d0)[0x11];
              local_c8 = *(ulonglong *)((int *)local_d0 + 0x10);
              puVar35[4] = (int)*(ulonglong *)((int *)local_d0 + 0x10);
              puVar35[5] = uVar26;
              iVar16 = local_d4;
              puVar13 = local_dc;
              uVar40 = local_d0;
              uVar39 = local_c0;
            }
          }
          else {
            local_c0._0_4_ = (int *)**(undefined4 **)(iVar25 + 0x24);
            local_c0._4_4_ = (undefined4 *)*(int *)local_c0;
            local_d4 = (**(code **)((int)local_c0._4_4_ + 0x30))(*(undefined4 *)(iVar25 + 0x24));
            FUN_0053b8a0(local_d8,(int *)local_c0);
            puVar35[4] = (int *)local_c8;
            puVar35[5] = local_c8._4_4_;
            iVar16 = local_d4;
            puVar13 = local_dc;
            uVar40 = local_d0;
            uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
            lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
          }
        }
        else {
          uVar26 = *(undefined4 *)(iVar25 + 0x3c);
          local_c8 = *(ulonglong *)(iVar25 + 0x38);
          puVar35[4] = *(undefined4 *)(iVar25 + 0x38);
          puVar35[5] = uVar26;
        }
      }
      else {
        *(undefined2 *)(puVar35 + 7) = 1;
      }
      break;
    case 0x42:
      piVar20 = *(int **)(local_d8[0x10] + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 4);
      local_d0 = CONCAT44(local_d0._4_4_,piVar20);
      *(undefined1 *)(piVar20 + 7) = 1;
      *(undefined1 *)((int)piVar20 + 0x19) = 0;
      uVar40 = local_d0;
      if (*piVar20 != 0) {
        FUN_0054c670();
        iVar16 = local_d4;
        puVar13 = local_dc;
        uVar40 = local_d0;
        uVar39 = local_c0;
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      }
      break;
    case 0x43:
      piVar20 = *(int **)(local_d8[0x10] + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 4);
      iVar25 = *piVar20;
      local_d0 = CONCAT44(iVar25,piVar20);
      local_c8 = (ulonglong)uVar32 << 0x20;
      if (iVar25 != 0) {
        local_d4 = FUN_0054dd90(iVar25);
        piVar20 = (int *)local_d0;
        uVar39 = local_c0;
      }
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      *(undefined1 *)(piVar20 + 7) = (undefined1)local_c8;
      *(undefined1 *)((int)(int *)local_d0 + 0x1d) = 0;
      *(undefined1 *)((int)(int *)local_d0 + 0x19) = 0;
      *(undefined4 *)((int)(int *)local_d0 + 0x50) = 0;
      iVar30 = *(int *)(local_e0 + 8 + iVar30 * 0x14);
      iVar16 = local_d4;
      puVar13 = local_dc;
      uVar40 = local_d0;
      if ((0 < iVar30) && ((int *)local_c8 != (int *)0x0)) goto LAB_0056e364;
      break;
    case 0x44:
    case 0x45:
      if ((*(byte *)(local_e4 + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 10 + 7) & 1) == 0) {
        lVar41 = FUN_00573c40();
        if (lVar41 == 0) {
          iVar25 = 0;
        }
        else {
          iVar25 = 1;
        }
      }
      else {
        iVar25 = 2;
      }
      local_d0 = CONCAT44(local_d0._4_4_,iVar25);
      if ((*(byte *)(puVar17 + *(int *)(local_e0 + 8 + iVar30 * 0x14) * 10 + 7) & 1) == 0) {
        lVar41 = FUN_00573c40();
        if (lVar41 == 0) {
          iVar16 = 0;
        }
        else {
          iVar16 = 1;
        }
      }
      else {
        iVar16 = 2;
        local_d0._0_4_ = (int *)iVar25;
      }
      iVar25 = iVar16 + (int)(int *)local_d0 * 2;
      if (*(char *)(local_e0 + iVar30 * 0x14) == 'E') {
        bVar4 = (&UNK_00712c84)[iVar25 + (int)(int *)local_d0];
      }
      else {
        bVar4 = (&UNK_00712d3c)[iVar25 + (int)(int *)local_d0];
      }
      uVar32 = (uint)bVar4;
      local_d0 = CONCAT44(iVar16,uVar32);
      puVar35 = puVar17 + *(int *)(local_e0 + 0xc + iVar30 * 0x14) * 10;
      uVar40 = local_d0;
      iVar16 = local_d4;
      puVar13 = puVar35;
      uVar39 = local_c0;
      if (uVar32 == 2) {
        *(ushort *)(puVar35 + 7) = *(ushort *)(puVar35 + 7) & 0xbe01 | 1;
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      }
      else {
        puVar35[4] = uVar32;
        puVar35[5] = 0;
        *(ushort *)(puVar35 + 7) = *(ushort *)(puVar35 + 7) & 0xbe04 | 4;
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      }
      break;
    case 0x46:
    case 0x47:
      local_d8[0x1e] = local_d8[0x1e] + 1;
      goto LAB_00570da6;
    case 0x48:
LAB_00570da6:
      puVar36 = *(undefined4 **)(local_d8[0x10] + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 4);
      local_d0 = CONCAT44(local_d0._4_4_,puVar36);
      local_c8 = CONCAT44(uVar32,1);
      if (puVar36[0x12] == 0) {
        local_d0 = CONCAT44(*puVar36,puVar36);
        local_d4 = FUN_0054d460(*puVar36);
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        iVar25 = (int)(int *)local_c8;
        *(bool *)((int)(int *)local_d0 + 0x1a) = (int *)local_c8 == (int *)0x0;
        *(undefined1 *)((int)(int *)local_d0 + 0x1d) = 0;
        *(undefined4 *)((int)(int *)local_d0 + 0x50) = 0;
        *(undefined1 *)((int)(int *)local_d0 + 0x19) = 0;
        *(undefined1 *)((int)(int *)local_d0 + 0x1c) = (undefined1)local_c8;
        bVar37 = iVar25 == 0;
      }
      else {
        local_d4 = FUN_00576660(puVar19,puVar36);
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        *(undefined1 *)((int)(int *)local_d0 + 0x1c) = (undefined1)local_c8;
        bVar37 = (int *)local_c8 == (int *)0x0;
      }
LAB_0056de1b:
      iVar16 = local_d4;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      if (!bVar37) {
        iVar30 = *(int *)(local_e0 + 8 + iVar30 * 0x14);
        goto LAB_0056e364;
      }
      break;
    case 0x49:
      if ((*(byte *)(local_e4 + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 10 + 7) & 1) != 0)
      goto LAB_0056e360;
      break;
    case 0x4a:
      bVar37 = (*(byte *)(local_e4 + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 10 + 7) & 1) == 0;
      goto LAB_0056e35e;
    default:
      puVar35 = local_e4 + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 10;
      puVar17 = local_e4 + *(int *)(local_e0 + 0xc + iVar30 * 0x14) * 10;
      uVar6 = *(ushort *)(puVar35 + 7);
      local_d0 = CONCAT26(uVar6,(undefined6)local_d0);
      uVar40 = local_d0;
      uVar27 = *(ushort *)(puVar17 + 7);
      local_d0._6_1_ = (byte)uVar6;
      local_c8 = CONCAT62(local_c8._2_6_,uVar27);
      bVar4 = *(byte *)(local_e0 + 3 + iVar30 * 0x14);
      if ((((byte)uVar27 | local_d0._6_1_) & 1) == 0) {
        local_d0._5_3_ = SUB83(uVar40,5);
        local_d0 = CONCAT35(local_d0._5_3_,CONCAT14(bVar4,uVar26)) & 0xffffff67ffffffff;
        if ((bVar4 & 0x67) != 0) {
          FUN_0052b5d0(puVar35,local_d0._4_4_);
          FUN_0052b5d0(puVar17,local_d0._4_4_,local_f0);
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
          puVar19 = local_e8;
          if (*(char *)(local_e8 + 0xe) != '\0') goto LAB_00572e06;
        }
        if ((*(ushort *)(puVar35 + 7) & 0x4000) != 0) {
          FUN_00574600();
        }
        if ((*(ushort *)(puVar17 + 7) & 0x4000) != 0) {
          FUN_00574600();
        }
        iVar25 = FUN_0055ddd0(puVar17,puVar35);
      }
      else {
        local_d0 = uVar40;
        if (-1 < (char)bVar4) {
          if ((bVar4 & 0x10) != 0) {
            puVar35 = local_e4 + *(int *)(local_e0 + 8 + iVar30 * 0x14) * 10;
            *(ushort *)(puVar35 + 7) = *(ushort *)(puVar35 + 7) & 0xbe01 | 1;
            puVar19 = puVar36;
            puVar13 = puVar35;
            break;
          }
          bVar37 = (bVar4 & 8) == 0;
          puVar19 = local_e8;
          puVar35 = local_dc;
          goto LAB_0056de1b;
        }
        if ((((uVar6 & 1) == 0) || ((uVar27 & 1) == 0)) || ((uVar27 & 0x100) != 0)) {
          iVar25 = 1;
        }
        else {
          iVar25 = 0;
        }
      }
      switch(*(undefined1 *)(local_e0 + iVar30 * 0x14)) {
      case 0x4b:
        uVar32 = (uint)(iVar25 != 0);
        break;
      case 0x4c:
        uVar32 = (uint)(iVar25 == 0);
        break;
      case 0x4d:
        uVar32 = (uint)(0 < iVar25);
        break;
      case 0x4e:
        uVar32 = (uint)(iVar25 < 1);
        break;
      case 0x4f:
        uVar32 = (uint)(iVar25 < 0);
        break;
      default:
        uVar32 = (uint)(-1 < iVar25);
      }
      if ((*(byte *)(local_e0 + 3 + iVar30 * 0x14) & 0x10) == 0) {
        if (uVar32 != 0) {
          local_ec = *(int *)(local_e0 + 8 + iVar30 * 0x14) + -1;
        }
      }
      else {
        local_dc = local_e4 + *(int *)(local_e0 + 8 + iVar30 * 0x14) * 10;
        *(ushort *)(local_dc + 7) = *(ushort *)(local_dc + 7) & 0xbe04 | 4;
        local_dc[4] = uVar32;
        local_dc[5] = 0;
      }
      *(ushort *)(puVar35 + 7) =
           *(ushort *)(puVar35 + 7) ^
           (*(ushort *)(puVar35 + 7) ^ (ushort)(local_d0 >> 0x30)) & 0x1ff;
      *(ushort *)(puVar17 + 7) =
           *(ushort *)(puVar17 + 7) ^ (*(ushort *)(puVar17 + 7) ^ (ushort)local_c8) & 0x1ff;
      iVar16 = local_d4;
      puVar19 = local_e8;
      puVar35 = local_dc;
      puVar13 = local_dc;
      uVar40 = CONCAT44((int)(local_d0 >> 0x20),uVar32);
      uVar39 = local_c0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      break;
    case 0x51:
    case 0x5c:
    case 0x5f:
      if (puVar19[0x38] != 0) goto LAB_0056cb4e;
      puVar36 = *(undefined4 **)(local_d8[0x10] + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 4);
      local_d0 = CONCAT44(local_d0._4_4_,puVar36);
      uVar40 = local_d0;
      if (puVar36 != (undefined4 *)0x0) {
        if (puVar36[0x12] == 0) {
          local_d0 = CONCAT44(1,puVar36);
          local_d4 = (**(code **)(local_e0 + 0x10 + iVar30 * 0x14))(*puVar36);
        }
        else {
          local_d4 = FUN_005765a0(puVar19,puVar36);
        }
        *(undefined1 *)((int)(int *)local_d0 + 0x1c) = local_d0._4_1_;
        *(undefined4 *)((int)(int *)local_d0 + 0x50) = 0;
        if (local_d0._4_4_ == (int *)0x0) {
          bVar4 = *(byte *)(local_e0 + 3 + iVar30 * 0x14);
          local_ec = *(int *)(local_e0 + 8 + iVar30 * 0x14) + -1;
          if (bVar4 != 0) {
            local_d8[bVar4 + 0x1c] = local_d8[bVar4 + 0x1c] + 1;
          }
        }
        *(undefined1 *)((int)(int *)local_d0 + 0x19) = 0;
        iVar16 = local_d4;
        puVar13 = local_dc;
        uVar40 = local_d0;
        uVar39 = local_c0;
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      }
      break;
    case 0x52:
    case 0x53:
    case 0x54:
    case 0x55:
      puVar36 = local_e4 + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 10;
      puVar35 = local_e4 + *(int *)(local_e0 + 0xc + iVar30 * 0x14) * 10;
      local_dc = puVar35;
      if (((*(byte *)(local_e4 + *(int *)(local_e0 + 8 + iVar30 * 0x14) * 10 + 7) |
           *(byte *)(puVar36 + 7)) & 1) == 0) {
        local_d0 = FUN_00573c40();
        uVar39 = FUN_00573c40(puVar36);
        uVar34 = (uint)(uVar39 >> 0x20);
        uVar32 = (uint)uVar39;
        cVar14 = *(char *)(local_e0 + iVar30 * 0x14);
        local_b8 = (double)CONCAT71(local_b8._1_7_,cVar14);
        if (cVar14 == 'R') {
          uVar29 = (uint)(int *)local_d0 & uVar32;
          local_d0 = CONCAT44((uint)local_d0._4_4_ & uVar34,uVar29);
        }
        else if (cVar14 == 'S') {
          uVar29 = (uint)(int *)local_d0 | uVar32;
          local_d0 = CONCAT44((uint)local_d0._4_4_ | uVar34,uVar29);
        }
        else {
          uVar29 = (uint)(int *)local_d0;
          if (uVar39 != 0) {
            if ((longlong)uVar39 < 0x100000000) {
              if ((longlong)uVar39 < 0) {
                cVar14 = -0x57 - cVar14;
                local_b8 = (double)CONCAT71(local_b8._1_7_,cVar14);
                if (((longlong)uVar39 < -0x100000000) ||
                   ((0x7fffffffffffffff < uVar39 && (uVar32 < 0xffffffc1)))) {
                  uVar39 = 0x40;
                  goto LAB_0056da0c;
                }
                uVar39 = CONCAT44(-(uVar34 + (uVar32 != 0)),-uVar32);
              }
              if ((longlong)uVar39 < 0x40) {
                if (cVar14 == 'T') {
                  local_d0 = local_d0 << (uVar39 & 0xffffffff);
                  local_c8._0_4_ = (int *)local_d0;
                  uVar29 = (uint)(int *)local_c8;
                  local_c8 = local_d0;
                }
                else {
                  local_c8 = local_d0 >> (uVar39 & 0xffffffff);
                  if (((int)local_d0._4_4_ < 1) && ((longlong)local_d0 < 0)) {
                    local_c0 = uVar39;
                    uVar42 = __allshl();
                    local_c8 = CONCAT44((uint)local_c8._4_4_ | (uint)((ulonglong)uVar42 >> 0x20),
                                        (uint)(int *)local_c8 | (uint)uVar42);
                    uVar39 = local_c0;
                  }
                  local_d0 = local_c8;
                  uVar29 = (uint)(int *)local_c8;
                }
                goto LAB_0056dafd;
              }
            }
LAB_0056da0c:
            if ((((int)local_d0._4_4_ < 1) && ((longlong)local_d0 < 0)) && (cVar14 != 'T')) {
              local_d0 = 0xffffffffffffffff;
              uVar29 = 0xffffffff;
            }
            else {
              local_d0 = 0;
              uVar29 = 0;
            }
          }
        }
LAB_0056dafd:
        local_dc[4] = uVar29;
        local_dc[5] = local_d0._4_4_;
        *(ushort *)(local_dc + 7) = *(ushort *)(local_dc + 7) & 0xbe04 | 4;
        iVar16 = local_d4;
        puVar35 = local_dc;
        puVar13 = local_dc;
        uVar40 = local_d0;
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      }
      else {
        FUN_00574f20();
        iVar16 = local_d4;
        puVar13 = local_dc;
        uVar40 = local_d0;
        uVar39 = local_c0;
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      }
      break;
    case 0x56:
    case 0x57:
    case 0x58:
    case 0x59:
    case 0x5a:
      iVar25 = *(int *)(local_e0 + 4 + iVar30 * 0x14);
      FUN_0052b630();
      puVar35 = puVar17 + *(int *)(local_e0 + 8 + iVar30 * 0x14) * 10;
      FUN_0052b630(puVar35);
      local_dc = local_e4 + *(int *)(local_e0 + 0xc + iVar30 * 0x14) * 10;
      uVar9 = CONCAT24(*(ushort *)(puVar17 + iVar25 * 10 + 7) | *(ushort *)(puVar35 + 7),
                       (int *)local_d0);
      local_d0 = (ulonglong)uVar9;
      uVar40 = local_c0;
      if (((*(ushort *)(puVar17 + iVar25 * 10 + 7) | *(ushort *)(puVar35 + 7)) & 1) != 0)
      goto LAB_0056d67a;
      local_d0._1_7_ = (uint7)(uint5)(uVar9 >> 8);
      if ((*(byte *)(puVar17 + iVar25 * 10 + 7) & *(byte *)(puVar35 + 7) & 4) == 0) {
        local_d0 = (ulonglong)local_d0._1_7_ << 8;
        uVar39 = local_c0;
        goto LAB_0056d4cd;
      }
      uVar32 = (uint)*(ulonglong *)(puVar17 + iVar25 * 10 + 4);
      uVar34 = puVar17[iVar25 * 10 + 5];
      local_c8 = *(ulonglong *)(puVar17 + iVar25 * 10 + 4);
      puVar1 = (ulonglong *)(puVar35 + 4);
      local_c0._0_4_ = (int *)*puVar1;
      local_f8 = (double)CONCAT44((int *)local_c0,(undefined4)local_f8);
      local_108 = (undefined4 *)puVar35[5];
      uVar39 = *puVar1;
      local_d0 = CONCAT71(local_d0._1_7_,1);
      local_c0._4_4_ = local_108;
      switch(*(undefined1 *)(local_e0 + iVar30 * 0x14)) {
      case 0x56:
        iVar25 = FUN_00549380(&local_c0,uVar32);
        uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
        if (iVar25 != 0) goto LAB_0056d4cd;
        break;
      case 0x57:
        iVar25 = FUN_005680a0(&local_c0,uVar32);
        uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
        goto joined_r0x0056d401;
      case 0x58:
        iVar25 = FUN_0055e2a0(&local_c0,uVar32);
        uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
joined_r0x0056d401:
        if (iVar25 == 0) break;
LAB_0056d4cd:
        local_c0 = uVar39;
        fVar38 = (float10)FUN_005759b0();
        local_b8 = (double)fVar38;
        fVar38 = (float10)FUN_005759b0(puVar35);
        local_b0 = (double)fVar38;
        switch(*(undefined1 *)(local_e0 + iVar30 * 0x14)) {
        case 0x56:
          local_b0 = local_b0 + local_b8;
          break;
        case 0x57:
          local_b0 = local_b0 - local_b8;
          break;
        case 0x58:
          local_b0 = local_b0 * local_b8;
          break;
        case 0x59:
          uVar40 = local_c0;
          if (local_b8 != 0.0) {
            local_b0 = local_b0 / local_b8;
            break;
          }
          goto LAB_0056d67a;
        default:
          uVar39 = FUN_0068d946();
          local_c8 = uVar39;
          uVar40 = FUN_0068d946();
          if (uVar39 == 0) goto LAB_0056d67a;
          if (uVar39 == 0xffffffffffffffff) {
            uVar39 = 1;
            local_c8 = 1;
          }
          local_c0 = uVar40;
          lVar41 = __allrem(uVar40,uVar39);
          local_b0 = (double)lVar41;
        }
        iVar25 = FUN_0055cec0(local_b0);
        puVar35 = local_dc;
        uVar40 = local_c0;
        if (iVar25 == 0) {
          *(double *)(local_dc + 2) = local_b0;
          *(ushort *)(local_dc + 7) = *(ushort *)(local_dc + 7) & 0xbe08 | 8;
          iVar16 = local_d4;
          puVar19 = local_e8;
          puVar13 = local_dc;
          uVar40 = local_d0;
          uVar39 = local_c0;
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
          if (((local_d0 & 0x800000000) == 0) &&
             (lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0), (char)local_d0 == '\0')) {
            FUN_00573cb0();
            iVar16 = local_d4;
            puVar19 = local_e8;
            puVar13 = local_dc;
            uVar40 = local_d0;
            uVar39 = local_c0;
            lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
          }
        }
        else {
LAB_0056d67a:
          puVar35 = local_dc;
          local_c0 = uVar40;
          FUN_00574f20();
          iVar16 = local_d4;
          puVar19 = local_e8;
          puVar13 = local_dc;
          uVar40 = local_d0;
          uVar39 = local_c0;
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        }
        goto LAB_0056e371;
      case 0x59:
        uVar40 = *puVar1;
        if (uVar32 != 0 || uVar34 != 0) {
          if ((((uVar32 & uVar34) == 0xffffffff) && ((int *)local_c0 == (int *)0x0)) &&
             (local_108 == (undefined4 *)0x80000000)) goto LAB_0056d4cd;
          uVar39 = __alldiv((int *)local_c0,local_108,uVar32,uVar34);
          break;
        }
        goto LAB_0056d67a;
      default:
        uVar40 = *puVar1;
        if (uVar32 == 0 && uVar34 == 0) goto LAB_0056d67a;
        if ((uVar32 & uVar34) == 0xffffffff) {
          uVar32 = 1;
          uVar34 = 0;
          local_c8 = 1;
        }
        uVar39 = __allrem((int *)local_c0,local_108,uVar32,uVar34);
      }
      *(ulonglong *)(local_dc + 4) = uVar39;
      *(ushort *)(local_dc + 7) = *(ushort *)(local_dc + 7) & 0xbe04 | 4;
      iVar16 = local_d4;
      puVar19 = local_e8;
      puVar35 = local_dc;
      puVar13 = local_dc;
      uVar40 = local_d0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      break;
    case 0x5b:
      puVar36 = local_e4 + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 10;
      puVar17 = local_e4 + *(int *)(local_e0 + 8 + iVar30 * 0x14) * 10;
      puVar35 = local_e4 + *(int *)(local_e0 + 0xc + iVar30 * 0x14) * 10;
      local_dc = puVar35;
      if (((*(byte *)(puVar17 + 7) | (byte)*(ushort *)(puVar36 + 7)) & 1) == 0) {
        if ((*(ushort *)(puVar36 + 7) & 0x4000) != 0) {
          iVar25 = FUN_00574600();
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
          puVar19 = local_e8;
          if (iVar25 != 0) goto LAB_00572e06;
        }
        if ((*(ushort *)(puVar17 + 7) & 0x4000) != 0) {
          iVar25 = FUN_00574600();
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
          puVar19 = local_e8;
          if (iVar25 != 0) goto LAB_00572e06;
        }
        if ((*(byte *)(puVar36 + 7) & 0x12) == 0) {
          iVar25 = FUN_00575350(puVar36);
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
          puVar19 = local_e8;
          if (iVar25 != 0) goto LAB_00572e06;
        }
        if ((*(byte *)(puVar17 + 7) & 0x12) == 0) {
          iVar25 = FUN_00575350(puVar17);
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
          puVar19 = local_e8;
          if (iVar25 != 0) goto LAB_00572e06;
        }
        puVar35 = local_dc;
        uVar32 = puVar36[6] + puVar17[6];
        local_d0 = (ulonglong)(int)uVar32;
        iVar25 = (int)local_e8[0x14] >> 0x1f;
        puVar19 = local_e8;
        uVar39 = local_c0;
        if ((iVar25 < (int)uVar32 >> 0x1f) ||
           ((iVar25 <= (int)uVar32 >> 0x1f && ((uint)local_e8[0x14] < uVar32)))) goto LAB_00572de0;
        *(ushort *)(local_dc + 7) = *(ushort *)(local_dc + 7) & 0xbe02 | 2;
        iVar25 = FUN_005748c0(local_dc,uVar32 + 2);
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        puVar19 = local_e8;
        if (iVar25 != 0) goto LAB_00572e06;
        if (puVar35 != puVar17) {
          memcpy((void *)puVar35[1],(void *)puVar17[1],puVar17[6]);
        }
        memcpy((void *)(puVar35[1] + puVar17[6]),(void *)puVar36[1],puVar36[6]);
        *(undefined1 *)((int)(int *)local_d0 + puVar35[1]) = 0;
        *(undefined1 *)(puVar35[1] + 1 + (int)(int *)local_d0) = 0;
        *(ushort *)(puVar35 + 7) = *(ushort *)(puVar35 + 7) | 0x200;
        puVar35[6] = (int *)local_d0;
        *(char *)((int)puVar35 + 0x1f) = (char)local_f0;
        iVar16 = local_d4;
        puVar19 = local_e8;
        puVar35 = local_dc;
        puVar13 = local_dc;
        uVar40 = local_d0;
        uVar39 = local_c0;
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      }
      else {
        FUN_00574f20();
        iVar16 = local_d4;
        puVar19 = local_e8;
        puVar13 = local_dc;
        uVar40 = local_d0;
        uVar39 = local_c0;
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      }
      break;
    case 0x5d:
      puVar35 = local_e4 + *(int *)(local_e0 + 8 + iVar30 * 0x14) * 10;
      local_dc = puVar35;
      if ((*(byte *)(local_e4 + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 10 + 7) & 1) == 0) {
        uVar42 = FUN_00573c40();
        FUN_00574ec0(puVar35,~(uint)uVar42,~(uint)((ulonglong)uVar42 >> 0x20));
        iVar16 = local_d4;
        puVar35 = local_dc;
        puVar13 = local_dc;
        uVar40 = local_d0;
        uVar39 = local_c0;
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      }
      else {
        FUN_00574f20();
        iVar16 = local_d4;
        puVar13 = local_dc;
        uVar40 = local_d0;
        uVar39 = local_c0;
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      }
      break;
    case 0x5e:
      *(undefined1 *)(local_e0 + iVar30 * 0x14) = 9;
      uVar42 = FUN_00568070();
      *(int *)(local_e0 + 4 + iVar30 * 0x14) = (int)uVar42;
      uVar39 = local_c0;
      if ((char)local_f0 != '\x01') {
        local_d4 = FUN_00575040(puVar35,(int)((ulonglong)uVar42 >> 0x20),0xffffffff,1);
        uVar39 = local_c0;
        if (local_d4 == 0x12) goto LAB_00572de0;
        iVar25 = FUN_0056c290(puVar35);
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        if (iVar25 != 0) goto LAB_00572e06;
        puVar35[9] = 0;
        *(ushort *)(puVar35 + 7) = *(ushort *)(puVar35 + 7) & 0xfbff | 0x800;
        if (*(char *)(local_e0 + 1 + iVar30 * 0x14) == -1) {
          FUN_005521a0(puVar19);
        }
        *(undefined1 *)(local_e0 + 1 + iVar30 * 0x14) = 0xff;
        *(undefined4 *)(local_e0 + 0x10 + iVar30 * 0x14) = puVar35[1];
        *(undefined4 *)(local_e0 + 4 + iVar30 * 0x14) = puVar35[6];
        uVar39 = local_c0;
      }
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      if ((int)puVar19[0x14] < *(int *)(local_e0 + 4 + iVar30 * 0x14)) goto LAB_00572de0;
switchD_0056cb3a_caseD_9:
      *(undefined2 *)(puVar35 + 7) = 0xa02;
      puVar35[1] = *(undefined4 *)(local_e0 + 0x10 + iVar30 * 0x14);
      puVar35[6] = *(undefined4 *)(local_e0 + 4 + iVar30 * 0x14);
      *(char *)((int)puVar35 + 0x1f) = (char)local_f0;
      iVar16 = local_d4;
      puVar13 = local_dc;
      uVar40 = local_d0;
      break;
    case 0x60:
    case 0x61:
      piVar20 = *(int **)(local_d8[0x10] + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 4);
      iVar25 = *(int *)(local_e0 + 8 + iVar30 * 0x14);
      iVar23 = *piVar20;
      local_d0 = CONCAT44(iVar23,piVar20);
      puVar19 = puVar36;
      puVar35 = puVar10;
      uVar40 = local_d0;
      if (iVar23 != 0) {
        if ((*(ushort *)(local_e4 + iVar25 * 10 + 7) & 0x4000) != 0) {
          local_d4 = FUN_00574600();
          iVar16 = local_d4;
          puVar19 = local_e8;
          puVar35 = local_dc;
          puVar13 = local_dc;
          uVar40 = local_d0;
          uVar39 = local_c0;
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
          if (local_d4 != 0) break;
          piVar20 = (int *)local_d0;
          iVar23 = (int)local_d0._4_4_;
        }
        puVar19 = local_e8;
        if (piVar20[0x12] == 0) {
          iVar16 = puVar17[iVar25 * 10 + 6];
          local_c8 = CONCAT44(puVar17[iVar25 * 10 + 1],iVar16);
          local_d4 = FUN_0054d680(iVar23,puVar17[iVar25 * 10 + 1],iVar16,iVar16 >> 0x1f,
                                  &DAT_006fc918,0,0,*(undefined4 *)(local_e0 + 0xc + iVar30 * 0x14))
          ;
          *(undefined4 *)((int)(int *)local_d0 + 0x50) = 0;
          iVar16 = local_d4;
          puVar19 = local_e8;
          puVar35 = local_dc;
          puVar13 = local_dc;
          uVar40 = local_d0;
          uVar39 = local_c0;
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        }
        else {
          local_d4 = FUN_005769c0(local_e8,piVar20);
          iVar16 = local_d4;
          puVar35 = local_dc;
          puVar13 = local_dc;
          uVar40 = local_d0;
          uVar39 = local_c0;
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        }
      }
      break;
    case 0x62:
      piVar20 = *(int **)(local_d8[0x10] + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 4);
      iVar25 = *piVar20;
      local_d0 = CONCAT44(iVar25,piVar20);
      uVar40 = local_d0;
      if (iVar25 != 0) {
        local_c0._0_4_ = (int *)piVar20[2];
        local_c0._4_3_ = (uint3)*(ushort *)(local_e0 + 0xc + iVar30 * 0x14);
        local_b0 = (double)CONCAT44(local_b0._4_4_,
                                    local_e4 + *(int *)(local_e0 + 8 + iVar30 * 0x14) * 10);
        local_d4 = FUN_0054df80(iVar25,&local_c0,0,0,0);
        if ((local_d4 == 0) && ((int *)local_c8 == (int *)0x0)) {
          local_d4 = FUN_0054cfd0();
        }
        *(undefined4 *)((int)(int *)local_d0 + 0x50) = 0;
        iVar16 = local_d4;
        puVar13 = local_dc;
        uVar40 = local_d0;
        uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      }
      break;
    case 99:
      piVar20 = *(int **)(local_d8[0x10] + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 4);
      iVar25 = *piVar20;
      local_d0 = CONCAT44(piVar20,iVar25);
      *(undefined2 *)(local_dc + 7) = 1;
      puVar35 = puVar10;
      uVar40 = local_d0;
      if (iVar25 != 0) {
        local_d4 = FUN_0056c810();
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        if (local_d4 != 0) goto LAB_00572d8c;
        iVar16 = local_d4;
        puVar35 = local_dc;
        puVar13 = local_dc;
        uVar40 = local_d0;
        uVar39 = local_c0;
        if (*(char *)((int)local_d0._4_4_ + 0x1c) == '\0') {
          local_d4 = FUN_00573ae0(puVar19,(int *)local_d0);
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
          if (local_d4 != 0) goto LAB_00572d8c;
          puVar10[4] = (int *)local_c8;
          puVar10[5] = local_c8._4_4_;
          *(undefined2 *)(puVar10 + 7) = 4;
          iVar16 = local_d4;
          puVar35 = puVar10;
          puVar13 = local_dc;
          uVar40 = local_d0;
          uVar39 = local_c0;
        }
      }
      break;
    case 100:
    case 0x65:
      piVar20 = *(int **)(local_d8[0x10] + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 4);
      local_d0 = CONCAT44(local_d0._4_4_,piVar20);
      uVar40 = local_d0;
      if (*piVar20 != 0) {
        local_c8._0_6_ = CONCAT24(*(undefined2 *)(local_e0 + 0x10 + iVar30 * 0x14),piVar20[2]);
        local_c8._7_1_ = SUB81(uVar11,7);
        local_c8._0_7_ =
             CONCAT16((*(char *)(local_e0 + 3 + iVar30 * 0x14) != '\0') + '\x02',
                      (undefined6)local_c8);
        local_b8 = (double)CONCAT44(uVar34,local_e4 + *(int *)(local_e0 + 0xc + iVar30 * 0x14) * 10)
        ;
        local_d4 = FUN_00573a20(piVar20,&local_c8);
        if (*(char *)(local_e0 + iVar30 * 0x14) == 'd') {
          iVar25 = -(int)local_d0._4_4_;
        }
        else {
          iVar25 = (int)local_d0._4_4_ + 1;
        }
        local_d0 = CONCAT44(iVar25,(int *)local_d0);
        iVar16 = local_d4;
        puVar13 = local_dc;
        uVar40 = local_d0;
        uVar39 = local_c0;
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        if (0 < iVar25) {
          iVar30 = *(int *)(local_e0 + 8 + iVar30 * 0x14);
          goto LAB_0056e364;
        }
      }
      break;
    case 0x66:
      iVar16 = 0;
      local_d0 = local_d0 & 0xffffffff;
      iVar25 = puVar19[1];
      local_c8 = CONCAT44(uVar32,iVar25);
      uVar40 = local_d0;
      while (local_d0 = uVar40, iVar25 != 0) {
        if (((*(int *)(iVar25 + 0x30) == -0x420df25d) &&
            (((byte)*(undefined4 *)(iVar25 + 0x60) & 0xc) < 8)) && (-1 < *(int *)(iVar25 + 0x54))) {
          iVar16 = iVar16 + 1;
          local_d0._0_4_ = (int *)uVar40;
          local_d0 = CONCAT44(iVar16,(int *)local_d0);
        }
        iVar25 = *(int *)(iVar25 + 0x3c);
        local_c8._4_4_ = (undefined4 *)(local_c8 >> 0x20);
        local_c8 = CONCAT44(local_c8._4_4_,iVar25);
        uVar40 = local_d0;
      }
      *(undefined2 *)(puVar35 + 7) = 1;
      local_d0._4_4_ = (int *)(uVar40 >> 0x20);
      if ((int)local_d0._4_4_ < 2) {
        iVar25 = *(int *)(local_e0 + 0xc + iVar30 * 0x14);
        local_c8 = CONCAT44(iVar25,(int *)local_c8);
        local_d4 = FUN_0054d210(*(undefined4 *)(puVar19[4] + 4 + iVar25 * 0x10),
                                *(undefined4 *)(local_e0 + 4 + iVar30 * 0x14));
        *(undefined2 *)(puVar35 + 7) = 4;
        puVar35[4] = (int *)local_d0;
        puVar35[5] = (int)(int *)local_d0 >> 0x1f;
        iVar16 = local_d4;
        puVar13 = local_dc;
        uVar40 = local_d0;
        uVar39 = local_c0;
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        if ((local_d4 == 0) &&
           (lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0), (int *)local_d0 != (int *)0x0)
           ) {
          FUN_00564480(puVar19,local_c8._4_4_,(int *)local_d0);
          local_f9 = local_c8._4_1_ + '\x01';
          iVar16 = local_d4;
          puVar13 = local_dc;
          uVar40 = local_d0;
          uVar39 = local_c0;
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        }
      }
      else {
        local_d4 = 6;
        *(undefined1 *)(local_d8 + 0x17) = 2;
        iVar16 = 6;
      }
      break;
    case 0x67:
      local_d0 = ZEXT48(local_d0._4_4_) << 0x20;
      local_d4 = FUN_0054c690(*(undefined4 *)
                               (puVar19[4] + 4 + *(int *)(local_e0 + 8 + iVar30 * 0x14) * 0x10),
                              *(undefined4 *)(local_e0 + 4 + iVar30 * 0x14));
      iVar16 = local_d4;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      if (*(int *)(local_e0 + 0xc + iVar30 * 0x14) != 0) {
        local_d8[0x19] = local_d8[0x19] + (int)(int *)local_d0;
        iVar25 = *(int *)(local_e0 + 0xc + iVar30 * 0x14);
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        if (0 < iVar25) {
          puVar2 = local_e4 + iVar25 * 10 + 4;
          uVar32 = *puVar2;
          *puVar2 = *puVar2 + (int)(int *)local_d0;
          local_e4[iVar25 * 10 + 5] =
               local_e4[iVar25 * 10 + 5] + ((int)(int *)local_d0 >> 0x1f) +
               (uint)CARRY4(uVar32,(uint)(int *)local_d0);
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        }
      }
      break;
    case 0x68:
    case 0x69:
      iVar25 = *(int *)(local_e0 + 4 + iVar30 * 0x14) * 0x10 + puVar19[4];
      local_c8 = CONCAT44(uVar32,iVar25);
      local_d0 = (ulonglong)((*(char *)(local_e0 + iVar30 * 0x14) != 'i') + 1) << 0x20;
      local_d4 = FUN_0054cde0(*(undefined4 *)(iVar25 + 4),&local_d0);
      puVar35[4] = (int *)local_d0;
      puVar35[5] = (int)(int *)local_d0 >> 0x1f;
      iVar16 = local_d4;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      break;
    case 0x6a:
      iVar25 = *(int *)(local_e0 + 4 + iVar30 * 0x14);
      pcVar31 = "sqlite_temp_master";
      if (iVar25 != 1) {
        pcVar31 = "sqlite_master";
      }
      local_d0 = CONCAT44(pcVar31,iVar25);
      local_c0._4_4_ = *(undefined4 **)(local_e0 + 4 + iVar30 * 0x14);
      local_c0._0_4_ = local_d8 + 0xd;
      local_c8._4_4_ = puVar19;
      iVar25 = FUN_0055d980(puVar19,
                            "SELECT name, rootpage, sql FROM \'%q\'.%s WHERE %s ORDER BY rowid",
                            *(undefined4 *)(puVar19[4] + iVar25 * 0x10),pcVar31);
      local_c8 = CONCAT44(local_c8._4_4_,iVar25);
      if (iVar25 == 0) {
        local_d4 = 7;
LAB_005714b4:
        FUN_00564000();
      }
      else {
        *(undefined1 *)((int)puVar19 + 0x81) = 1;
        local_b8 = (double)((ulonglong)local_b8 & 0xffffffff00000000);
        local_d4 = FUN_00520760(puVar19,iVar25,FUN_0055b540,(int)&local_c8 + 4);
        if (local_d4 == 0) {
          local_d4 = (int)(int *)local_b8;
        }
        FUN_005521a0(puVar19,(int *)local_c8);
        *(undefined1 *)((int)puVar19 + 0x81) = 0;
        if (local_d4 != 0) goto LAB_005714b4;
      }
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      iVar16 = local_d4;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      if (local_d4 == 7) goto LAB_00572e06;
      break;
    case 0x6b:
      local_d4 = FUN_00549ed0(puVar19);
      iVar16 = local_d4;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      break;
    case 0x6c:
      FUN_00568990(puVar19,*(undefined4 *)(local_e0 + 4 + iVar30 * 0x14));
      iVar16 = local_d4;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      break;
    case 0x6d:
      FUN_005688b0(puVar19,*(undefined4 *)(local_e0 + 4 + iVar30 * 0x14));
      iVar16 = local_d4;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      break;
    case 0x6e:
      FUN_00568a40(puVar19,*(undefined4 *)(local_e0 + 4 + iVar30 * 0x14));
      iVar16 = local_d4;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      break;
    case 0x6f:
      local_d0 = CONCAT44(local_d0._4_4_,*(undefined4 *)(local_e0 + 8 + iVar30 * 0x14));
      iVar25 = FUN_00552230(puVar19);
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      local_d0 = CONCAT44(iVar25,(int *)local_d0);
      if (iVar25 == 0) goto LAB_00572e06;
      local_c0._4_4_ = local_e4 + *(int *)(local_e0 + 0xc + iVar30 * 0x14) * 10;
      puVar35 = local_e4 + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 10;
      iVar16 = 0;
      local_c8 = local_c8 & 0xffffffff00000000;
      if (0 < (int)(int *)local_d0) {
        do {
          uVar26 = FUN_00573c40();
          *(undefined4 *)((int)local_d0._4_4_ + (int)(int *)local_c8 * 4) = uVar26;
          iVar16 = (int)(int *)local_c8 + 1;
          local_c8 = CONCAT44(local_c8._4_4_,iVar16);
          iVar25 = (int)local_d0._4_4_;
        } while (iVar16 < (int)(int *)local_d0);
      }
      *(undefined4 *)(iVar25 + iVar16 * 4) = 0;
      local_c0._0_4_ =
           (int *)FUN_0054d880(*(undefined4 *)
                                (puVar19[4] + 4 +
                                (uint)*(byte *)(local_e0 + 3 + iVar30 * 0x14) * 0x10),local_d0._4_4_
                               ,(int *)local_d0,local_c0._4_4_[4]);
      FUN_005521a0(puVar19,local_d0._4_4_);
      puVar2 = local_c0._4_4_ + 4;
      uVar32 = *puVar2;
      *puVar2 = *puVar2 - (int)local_c8._4_4_;
      local_c0._4_4_[5] =
           (local_c0._4_4_[5] - ((int)local_c8._4_4_ >> 0x1f)) - (uint)(uVar32 < local_c8._4_4_);
      FUN_00574f20(puVar35);
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      if (local_c8._4_4_ != (undefined4 *)0x0) {
        if ((int *)local_c0 == (int *)0x0) goto LAB_00572e06;
        FUN_00575040(puVar35,(int *)local_c0,0xffffffff,1);
      }
      FUN_0056c290(puVar35);
      iVar16 = local_d4;
      puVar35 = local_dc;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      break;
    case 0x70:
      iVar25 = *(int *)(local_e0 + 4 + iVar30 * 0x14);
      iVar30 = *(int *)(local_e0 + 8 + iVar30 * 0x14);
      if ((*(byte *)(local_e4 + iVar25 * 10 + 7) & 0x20) == 0) {
        FUN_00574f70();
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        if ((*(byte *)(puVar17 + iVar25 * 10 + 7) & 0x20) == 0) goto LAB_00572e06;
      }
      FUN_00564590(puVar17[iVar25 * 10 + 4],local_e4[iVar30 * 10 + 4]);
      iVar16 = local_d4;
      puVar35 = local_dc;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      break;
    case 0x71:
      if (puVar19[0x38] != 0) goto LAB_0056cb4e;
      iVar25 = *(int *)(local_e0 + 4 + iVar30 * 0x14);
      if ((*(byte *)(local_e4 + iVar25 * 10 + 7) & 0x20) != 0) {
        iVar25 = FUN_00564630(local_e4[iVar25 * 10 + 4]);
        if (iVar25 != 0) {
          FUN_00574ec0(local_e4 + *(int *)(local_e0 + 0xc + iVar30 * 0x14) * 10,(int *)local_d0);
          iVar16 = local_d4;
          puVar35 = local_dc;
          puVar13 = local_dc;
          uVar40 = local_d0;
          uVar39 = local_c0;
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
          break;
        }
      }
      FUN_00574f20();
      iVar30 = *(int *)(local_e0 + 8 + iVar30 * 0x14);
      puVar35 = local_dc;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      uVar39 = local_c0;
LAB_0056e364:
      iVar16 = local_d4;
      local_ec = iVar30 + -1;
      puVar13 = local_dc;
      uVar40 = local_d0;
      break;
    case 0x72:
      iVar25 = *(int *)(local_e0 + 4 + iVar30 * 0x14);
      iVar23 = *(int *)(local_e0 + 0xc + iVar30 * 0x14);
      uVar32 = *(uint *)(local_e0 + 0x10 + iVar30 * 0x14);
      local_d0 = CONCAT44(local_d0._4_4_,uVar32);
      if ((*(byte *)(local_e4 + iVar25 * 10 + 7) & 0x20) == 0) {
        FUN_00574f70();
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        puVar19 = local_e8;
        if ((*(byte *)(puVar17 + iVar25 * 10 + 7) & 0x20) == 0) goto LAB_00572e06;
        uVar32 = (uint)(int *)local_d0;
      }
      bVar37 = (int)uVar32 < 0;
      if (uVar32 != 0) {
        if (bVar37) {
          uVar32 = 0xff;
        }
        else {
          uVar32 = uVar32 & 0xf;
        }
        iVar16 = FUN_00564690(puVar17[iVar25 * 10 + 4],uVar32,local_e4[iVar23 * 10 + 4]);
        local_d0 = CONCAT44(iVar16,(int *)local_d0);
        if (iVar16 != 0) goto LAB_005717d0;
        bVar37 = (int)(int *)local_d0 < 0;
      }
      iVar16 = local_d4;
      puVar19 = local_e8;
      puVar35 = local_dc;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      if (!bVar37) {
        FUN_00564590(puVar17[iVar25 * 10 + 4],local_e4[iVar23 * 10 + 4]);
        iVar16 = local_d4;
        puVar19 = local_e8;
        puVar35 = local_dc;
        puVar13 = local_dc;
        uVar40 = local_d0;
        uVar39 = local_c0;
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      }
      break;
    case 0x73:
      iVar23 = *(int *)(local_e0 + 0x10 + iVar30 * 0x14);
      local_b8 = (double)CONCAT44(uVar34,iVar23);
      puVar36 = local_e4 + *(int *)(local_e0 + 0xc + iVar30 * 0x14) * 10;
      local_c8 = CONCAT44(uVar32,puVar36);
      if (*(char *)(local_e0 + 3 + iVar30 * 0x14) != '\0') {
        local_c0._4_4_ = (undefined4 *)local_d8[0x28];
        local_b8 = (double)CONCAT44(*(int *)(iVar23 + 0x14),iVar23);
        for (; local_c0._4_4_ != (undefined4 *)0x0; local_c0._4_4_ = (undefined4 *)local_c0._4_4_[1]
            ) {
          puVar35 = puVar10;
          uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
          if (local_c0._4_4_[6] == *(int *)(iVar23 + 0x14)) goto LAB_0056e371;
        }
      }
      if (local_d8[0x2a] < (int)puVar19[0x1e]) {
        if ((*(byte *)(puVar36 + 7) & 0x40) == 0) {
          iVar25 = *(int *)(iVar23 + 8) + *(int *)(iVar23 + 0xc);
          local_d0 = CONCAT44(*(int *)(iVar23 + 0x10) + (*(int *)(iVar23 + 0xc) + iVar25 * 10) * 4 +
                              0x48,iVar25);
          local_c0._4_4_ = (undefined4 *)FUN_005522c0(puVar19);
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
          if (local_c0._4_4_ == (undefined4 *)0x0) goto LAB_00572e06;
          FUN_00574d40();
          *(undefined2 *)((int)(int *)local_c8 + 0x1c) = 0x40;
          *(undefined4 **)((int)(int *)local_c8 + 0x10) = local_c0._4_4_;
          *local_c0._4_4_ = local_d8;
          local_c0._4_4_[0xf] = (int *)local_d0;
          local_c0._4_4_[0x10] = *(undefined4 *)((int)(int *)local_b8 + 0xc);
          local_c0._4_4_[0xb] = local_ec;
          local_c0._4_4_[3] = local_d8[2];
          local_c0._4_4_[0xd] = local_d8[6];
          local_c0._4_4_[5] = local_d8[0x10];
          *(undefined2 *)(local_c0._4_4_ + 10) = *(undefined2 *)((int)local_d8 + 0x2e);
          local_c0._4_4_[2] = local_d8[1];
          local_c0._4_4_[0xc] = local_d8[7];
          local_c0._4_4_[6] = *(undefined4 *)((int)(int *)local_b8 + 0x14);
          local_c0._4_4_[4] = local_d8[0x2e];
          local_c0._4_4_[0xe] = local_d8[0x2d];
          puVar35 = local_c0._4_4_ + 0x12;
          local_c8 = CONCAT44(puVar35,(int *)local_c8);
          local_c0._0_4_ = local_c0._4_4_ + (local_c0._4_4_[0xf] * 5 + 9) * 2;
          uVar39 = local_c8;
          while (local_c8 = uVar39, iVar25 = local_a0._4_4_, puVar35 != (int *)local_c0) {
            *(undefined2 *)(puVar35 + 7) = 0x80;
            local_c8._4_4_ = (undefined4 *)(uVar39 >> 0x20);
            *local_c8._4_4_ = puVar19;
            puVar35 = local_c8._4_4_ + 10;
            local_c8._0_4_ = (int *)uVar39;
            local_c8 = CONCAT44(puVar35,(int *)local_c8);
            uVar39 = local_c8;
          }
        }
        else {
          local_c0._4_4_ = (undefined4 *)puVar36[4];
        }
        local_d8[0x2a] = local_d8[0x2a] + 1;
        local_c0._4_4_[1] = local_d8[0x28];
        local_c0._4_4_[8] = local_104;
        local_c0._4_4_[9] = local_100;
        local_c0._4_4_[0x11] = local_d8[0x19];
        local_d8[0x28] = (int)local_c0._4_4_;
        local_e4 = local_c0._4_4_ + 8;
        local_d8[0x19] = 0;
        local_d8[2] = (int)local_e4;
        local_d8[6] = local_c0._4_4_[0xf];
        *(undefined2 *)((int)local_d8 + 0x2e) = *(undefined2 *)(local_c0._4_4_ + 0x10);
        puVar35 = local_e4 + (local_d8[6] + 1) * 10;
        local_d8[0x10] = (int)puVar35;
        local_e0 = *(int *)local_b8;
        local_d8[1] = local_e0;
        local_d8[7] = ((int *)local_b8)[1];
        local_d8[0x2e] = (int)(puVar35 + *(ushort *)((int)local_d8 + 0x2e));
        _Size = ((int *)local_b8)[4];
        local_d8[0x2d] = _Size;
        local_ec = -1;
        local_a0._4_4_ = iVar25;
        memset(puVar35 + *(ushort *)((int)local_d8 + 0x2e),0,_Size);
        iVar16 = local_d4;
        puVar35 = local_dc;
        puVar13 = local_dc;
        uVar40 = local_d0;
        uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      }
      else {
        local_d4 = 1;
        FUN_005670f0(local_d8 + 0xd,puVar19);
        iVar16 = 1;
        puVar35 = local_dc;
        puVar13 = local_dc;
        uVar40 = local_d0;
        uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      }
      break;
    case 0x74:
      iVar16 = local_d8[0x28];
      iVar25 = *(int *)(iVar16 + 0xc) +
               (*(int *)(*(int *)(iVar16 + 8) + 4 + *(int *)(iVar16 + 0x2c) * 0x14) +
               *(int *)(local_e0 + 4 + iVar30 * 0x14)) * 0x28;
      local_d0 = CONCAT44(iVar25,iVar16);
      FUN_005752a0(puVar35,iVar25);
      iVar16 = local_d4;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      break;
    case 0x75:
      uVar32 = *(uint *)(local_e0 + 8 + iVar30 * 0x14);
      if (*(int *)(local_e0 + 4 + iVar30 * 0x14) == 0) {
        puVar2 = (uint *)(local_d8 + 0x22);
        uVar34 = *puVar2;
        *puVar2 = *puVar2 + uVar32;
        local_d8[0x23] = local_d8[0x23] + ((int)uVar32 >> 0x1f) + (uint)CARRY4(uVar34,uVar32);
      }
      else {
        puVar2 = puVar19 + 0x7a;
        uVar34 = *puVar2;
        *puVar2 = *puVar2 + uVar32;
        puVar19[0x7b] = puVar19[0x7b] + ((int)uVar32 >> 0x1f) + (uint)CARRY4(uVar34,uVar32);
      }
      break;
    case 0x76:
      if (*(int *)(local_e0 + 4 + iVar30 * 0x14) == 0) {
        bVar37 = local_d8[0x22] == 0 && local_d8[0x23] == 0;
      }
      else {
        bVar37 = puVar19[0x7a] == 0 && puVar19[0x7b] == 0;
      }
LAB_0056e35e:
      if (bVar37) {
LAB_0056e360:
        iVar30 = *(int *)(local_e0 + 8 + iVar30 * 0x14);
        lVar41 = CONCAT44(iVar25,(undefined4 *)local_a0);
        goto LAB_0056e364;
      }
      break;
    case 0x77:
      uVar32 = local_d8[0x28];
      if (uVar32 == 0) {
        puVar35 = local_e4 + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 10;
      }
      else {
        for (uVar34 = *(uint *)(uVar32 + 4); uVar34 != 0; uVar34 = *(uint *)(uVar34 + 4)) {
          uVar32 = uVar34;
        }
        local_d0 = (ulonglong)uVar32 << 0x20;
        puVar35 = (undefined4 *)
                  (*(int *)(uVar32 + 0xc) + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 0x28);
      }
      local_d0 = CONCAT44(local_d0._4_4_,puVar35);
      FUN_00574a70();
      puVar36 = local_e4 + *(int *)(local_e0 + 8 + iVar30 * 0x14) * 10;
      FUN_00574a70(puVar36);
      iVar25 = puVar36[5];
      iVar16 = local_d4;
      puVar35 = local_dc;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      if ((*(int *)((int)(int *)local_d0 + 0x14) <= iVar25) &&
         ((*(int *)((int)(int *)local_d0 + 0x14) < iVar25 ||
          (lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0),
          *(uint *)((int)(int *)local_d0 + 0x10) < (uint)puVar36[4])))) {
        *(undefined4 *)((int)(int *)local_d0 + 0x10) = puVar36[4];
        *(int *)((int)(int *)local_d0 + 0x14) = iVar25;
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      }
      break;
    case 0x78:
      iVar23 = *(int *)(local_e0 + 4 + iVar30 * 0x14);
      if (-1 < (int)local_e4[iVar23 * 10 + 5]) {
        if (0 < (int)local_e4[iVar23 * 10 + 5]) goto LAB_0056e360;
        uVar32 = local_e4[iVar23 * 10 + 4];
        goto joined_r0x00571ca9;
      }
      break;
    case 0x79:
      if (((int)local_e4[*(int *)(local_e0 + 4 + iVar30 * 0x14) * 10 + 5] < 1) &&
         ((int)local_e4[*(int *)(local_e0 + 4 + iVar30 * 0x14) * 10 + 5] < 0)) goto LAB_0056e360;
      break;
    case 0x7a:
      iVar25 = *(int *)(local_e0 + 4 + iVar30 * 0x14);
      uVar34 = *(uint *)(local_e0 + 0xc + iVar30 * 0x14);
      puVar2 = local_e4 + iVar25 * 10 + 4;
      uVar32 = *puVar2;
      *puVar2 = *puVar2 + uVar34;
      local_e4[iVar25 * 10 + 5] =
           local_e4[iVar25 * 10 + 5] + ((int)uVar34 >> 0x1f) + (uint)CARRY4(uVar32,uVar34);
      puVar19 = puVar36;
      if (local_e4[iVar25 * 10 + 4] == 0 && local_e4[iVar25 * 10 + 5] == 0) {
        iVar30 = *(int *)(local_e0 + 8 + iVar30 * 0x14);
        puVar19 = local_e8;
        goto LAB_0056e364;
      }
      break;
    case 0x7b:
      uVar32 = (uint)*(byte *)(local_e0 + 3 + iVar30 * 0x14);
      local_c8._4_4_ = local_e4 + *(int *)(local_e0 + 8 + iVar30 * 0x14) * 10;
      iVar16 = local_d8[3];
      iVar23 = 0;
      local_80 = CONCAT44(local_80._4_4_,iVar16);
      local_d0 = (ulonglong)uVar32;
      if (uVar32 != 0) {
        while( true ) {
          *(undefined4 **)(iVar16 + iVar23 * 4) = local_c8._4_4_;
          local_a0._4_4_ = iVar25;
          local_c0 = uVar39;
          FUN_00575310();
          iVar23 = (int)local_d0._4_4_ + 1;
          local_c8._4_4_ = local_c8._4_4_ + 10;
          local_d0 = CONCAT44(iVar23,(int *)local_d0);
          if ((int)(int *)local_d0 <= iVar23) break;
          iVar16 = (int)local_80;
          iVar25 = local_a0._4_4_;
          uVar39 = local_c0;
        }
      }
      iVar25 = local_e0;
      local_c0._0_4_ = *(int **)(local_e0 + 0x10 + iVar30 * 0x14);
      puVar35 = local_e4 + *(int *)(local_e0 + 0xc + iVar30 * 0x14) * 10;
      local_c8 = CONCAT44(local_c8._4_4_,puVar35);
      puVar35[6] = puVar35[6] + 1;
      local_a0._4_2_ = 1;
      local_94 = (undefined4 *)0x0;
      local_98 = (byte *)0x0;
      local_b8 = (double)ZEXT48(puVar19);
      local_90 = ZEXT48(puVar35);
      local_88 = 0;
      if ((*(byte *)((int)(int *)local_c0 + 3) & 8) != 0) {
        local_90 = CONCAT44(*(undefined4 *)(local_e0 + -4 + iVar30 * 0x14),puVar35);
      }
      (**(code **)((int)(int *)local_c0 + 0x10))(&local_c0,(int *)local_d0);
      if ((int)local_88 != 0) {
        uVar26 = FUN_0056bce0(&local_b8);
        FUN_005670f0(local_d8 + 0xd,puVar19,&DAT_00716900,uVar26);
        local_d4 = (int)local_88;
      }
      if (local_88._4_4_ != 0) {
        iVar25 = *(int *)(iVar25 + -0x10 + iVar30 * 0x14);
        local_d0 = CONCAT44(iVar25,(int *)local_d0);
        if (iVar25 != 0) {
          FUN_00574ec0(local_e4 + iVar25 * 10,1);
        }
      }
      FUN_00574d40();
      iVar16 = local_d4;
      puVar35 = local_dc;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
      lVar41 = CONCAT44(CONCAT22(local_a0._6_2_,local_a0._4_2_),(undefined4 *)local_a0);
      break;
    case 0x7c:
      local_d0 = CONCAT44(local_d0._4_4_,local_e4 + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 10);
      local_d4 = FUN_00574670(local_e4 + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 10);
      if (local_d4 != 0) {
        uVar26 = FUN_0056bce0((int *)local_d0);
        FUN_005670f0(local_d8 + 0xd,puVar19,&DAT_00716900,uVar26);
      }
      FUN_0056c290((int *)local_d0);
      iVar25 = FUN_005753f0((int *)local_d0);
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
joined_r0x005727a5:
      iVar16 = local_d4;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      if (iVar25 != 0) goto LAB_00572de0;
      break;
    case 0x7d:
      local_d0 = local_d0 & 0xffffffff;
      local_c8 = 0xffffffffffffffff;
      local_d4 = FUN_0054f920(puVar19,*(undefined4 *)(local_e0 + 4 + iVar30 * 0x14),
                              *(undefined4 *)(local_e0 + 8 + iVar30 * 0x14),&local_c8);
      if (local_d4 == 5) {
        local_d4 = 0;
        local_d0 = 0x100000000;
      }
      iVar25 = 0;
      local_d0 = local_d0 & 0xffffffff00000000;
      local_c0._0_4_ = local_e4 + *(int *)(local_e0 + 0xc + iVar30 * 0x14) * 10;
      do {
        FUN_00574ec0((int *)local_c0,*(undefined4 *)((int)&local_d0 + iVar25 * 4 + 4));
        iVar25 = (int)(int *)local_d0 + 1;
        local_c0._0_4_ = (int *)local_c0 + 10;
        local_d0 = CONCAT44(local_d0._4_4_,iVar25);
        iVar16 = local_d4;
        puVar13 = local_dc;
        uVar40 = local_d0;
        uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      } while (iVar25 < 3);
      break;
    case 0x7e:
      uVar32 = *(uint *)(local_e0 + 0xc + iVar30 * 0x14);
      iVar25 = *(int *)(puVar19[4] + 4 + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 0x10);
      local_f8 = (double)CONCAT44(iVar25,(undefined4)local_f8);
      iVar16 = **(int **)(iVar25 + 4);
      local_d0 = CONCAT44(iVar16,iVar25);
      bVar4 = *(byte *)(iVar16 + 5);
      uVar34 = (uint)bVar4;
      if (uVar32 == 0xffffffff) {
        uVar32 = uVar34;
      }
      local_c8 = (ulonglong)CONCAT14(bVar4,uVar32);
      if ((2 < *(byte *)(iVar16 + 0xf)) ||
         (((**(int **)(iVar16 + 0x40) != 0 && (-1 < *(int *)(iVar16 + 0x4c))) &&
          ((0 < *(int *)(iVar16 + 0x4c) || (*(int *)(iVar16 + 0x48) != 0)))))) {
        local_c8 = (ulonglong)CONCAT14(bVar4,uVar34);
        uVar32 = uVar34;
      }
      local_c0._0_4_ = (int *)&DAT_006fc918;
      if (*(char *)(iVar16 + 0xe) == '\0') {
        local_c0._0_4_ = *(int **)(iVar16 + 0x90);
      }
      if (uVar32 == 5) {
        iVar25 = FUN_00568070();
        if (iVar25 != 0) {
          uVar42 = FUN_00560300();
          uVar32 = (uint)((ulonglong)uVar42 >> 0x20);
          if ((int)uVar42 != 0) {
            iVar25 = local_f8._4_4_;
            goto LAB_0057211b;
          }
        }
        local_c8 = CONCAT44(local_c8._4_4_,uVar34);
LAB_005720b9:
        if (local_d4 != 0) goto LAB_005720c2;
      }
      else {
LAB_0057211b:
        puVar19 = local_e8;
        if ((uVar32 == uVar34) || ((uVar34 != 5 && (uVar32 != 5)))) goto LAB_005720b9;
        if ((*(char *)((int)local_e8 + 0x36) == '\0') || (1 < (int)local_e8[0x21])) {
          local_d4 = 1;
          FUN_005670f0(local_d8 + 0xd,local_e8,"cannot change %s wal mode from within a transaction"
                      );
          iVar16 = 1;
          puVar35 = local_dc;
          puVar13 = local_dc;
          uVar40 = local_d0;
          uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
          break;
        }
        if (uVar34 == 5) {
          local_d4 = FUN_0055ef90();
          if (local_d4 == 0) {
            FUN_0055fda0(local_d0._4_4_);
            iVar25 = (int)(int *)local_d0;
LAB_005721c8:
            local_d4 = FUN_0054f3d0(iVar25);
            uVar34 = (uint)local_c8._4_4_;
            iVar16 = (int)local_d0._4_4_;
            goto LAB_005720b9;
          }
          uVar34 = (uint)local_c8._4_4_;
          iVar16 = (int)local_d0._4_4_;
        }
        else {
          if (uVar34 == 4) {
            FUN_0055fda0(iVar16);
            iVar25 = (int)(int *)local_d0;
            uVar34 = (uint)local_c8._4_4_;
            iVar16 = (int)local_d0._4_4_;
          }
          if (local_d4 == 0) goto LAB_005721c8;
        }
LAB_005720c2:
        local_c8 = CONCAT44(local_c8._4_4_,uVar34);
      }
      iVar25 = FUN_0055fda0(iVar16);
      local_c8 = CONCAT44(local_c8._4_4_,iVar25);
      puVar35 = local_e4 + *(int *)(local_e0 + 8 + iVar30 * 0x14) * 10;
      *(undefined2 *)(puVar35 + 7) = 0xa02;
      if (iVar25 == 6) {
        puVar24 = (undefined *)0x0;
      }
      else {
        puVar24 = (&PTR_s_delete_0071347c)[iVar25];
      }
      puVar35[1] = puVar24;
      local_dc = puVar35;
      uVar26 = FUN_00568070();
      puVar35[6] = uVar26;
      *(undefined1 *)((int)puVar35 + 0x1f) = 1;
      FUN_0056c290(puVar35,local_f0 & 0xff);
      iVar16 = local_d4;
      puVar19 = local_e8;
      puVar35 = local_dc;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      break;
    case 0x7f:
      local_d4 = FUN_00564bb0(local_d8 + 0xd);
      iVar16 = local_d4;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      break;
    case 0x80:
      local_d0 = CONCAT44(local_d0._4_4_,
                          *(undefined4 *)
                           (puVar19[4] + 4 + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 0x10));
      local_d4 = FUN_0054d5c0();
      iVar16 = local_d4;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      if (local_d4 == 0x65) {
        local_d4 = 0;
        iVar16 = 0;
        local_ec = *(int *)(local_e0 + 8 + iVar30 * 0x14) + -1;
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      }
      break;
    case 0x81:
      if (*(int *)(local_e0 + 4 + iVar30 * 0x14) == 0) {
        FUN_00553a10();
        iVar16 = local_d4;
        puVar13 = local_dc;
        uVar40 = local_d0;
        uVar39 = local_c0;
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      }
      else {
        local_d8[0x18] = local_d8[0x18] | 0x20;
      }
      break;
    case 0x82:
      *(undefined2 *)(puVar35 + 7) = 8;
      *(undefined8 *)(puVar35 + 2) = **(undefined8 **)(local_e0 + 0x10 + iVar30 * 0x14);
      break;
    case 0x83:
      cVar14 = *(char *)(local_e0 + 0xc + iVar30 * 0x14);
      local_118 = CONCAT31(local_118._1_3_,cVar14);
      if ((cVar14 != '\0') || ((puVar19[6] & 0x800) == 0)) {
        local_d4 = FUN_0054deb0(*(undefined4 *)
                                 (puVar19[4] + 4 + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 0x10),
                                *(undefined4 *)(local_e0 + 8 + iVar30 * 0x14));
        iVar16 = local_d4;
        puVar13 = local_dc;
        uVar40 = local_d0;
        uVar39 = local_c0;
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        if ((char)local_d4 == '\x06') {
          FUN_005670f0(local_d8 + 0xd,puVar19,"database table is locked: %s");
          iVar16 = local_d4;
          puVar13 = local_dc;
          uVar40 = local_d0;
          uVar39 = local_c0;
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        }
      }
      break;
    case 0x84:
      local_d0 = CONCAT44(local_d0._4_4_,*(undefined4 *)(local_e0 + 0x10 + iVar30 * 0x14));
      local_d4 = FUN_00576d50(puVar19);
      iVar16 = local_d4;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      if ((int *)local_d0 != (int *)0x0) {
        FUN_0053b8a0(local_d8);
        iVar16 = local_d4;
        puVar13 = local_dc;
        uVar40 = local_d0;
        uVar39 = local_c0;
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      }
      break;
    case 0x85:
      local_d4 = FUN_00576fe0(puVar19,*(undefined4 *)(local_e0 + 4 + iVar30 * 0x14),
                              *(undefined4 *)(local_e0 + 0x10 + iVar30 * 0x14));
      iVar16 = local_d4;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      break;
    case 0x86:
      local_d8[0x18] = local_d8[0x18] & 0xfffffffbU | 8;
      local_d4 = FUN_00577100(puVar19,*(undefined4 *)(local_e0 + 4 + iVar30 * 0x14));
      local_d8[0x18] = local_d8[0x18] & 0xfffffff3;
      iVar16 = local_d4;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      break;
    case 0x87:
      local_d0 = 0;
      piVar20 = *(int **)(*(int *)(local_e0 + 0x10 + iVar30 * 0x14) + 8);
      local_c8 = CONCAT44(*piVar20,piVar20);
      local_d4 = (**(code **)(*piVar20 + 0x18))(piVar20);
      FUN_0053b8a0(local_d8,(int *)local_c8);
      iVar16 = local_d4;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      if (local_d4 == 0) {
        *local_d0._4_4_ = (int)(int *)local_c8;
        iVar25 = FUN_00529890(local_d8,*(undefined4 *)(local_e0 + 4 + iVar30 * 0x14),0,0xffffffff);
        local_d0 = CONCAT44(local_d0._4_4_,iVar25);
        if (iVar25 == 0) {
          *(undefined1 *)(puVar19 + 0xe) = 1;
          (**(code **)((int)local_c8._4_4_ + 0x1c))();
          iVar16 = local_d4;
          puVar13 = local_dc;
          uVar40 = local_d0;
          uVar39 = local_c0;
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        }
        else {
          *(int **)(iVar25 + 0x24) = local_d0._4_4_;
          *(undefined4 *)(iVar25 + 0x28) = *(undefined4 *)*local_d0._4_4_;
          iVar16 = local_d4;
          puVar13 = local_dc;
          uVar40 = local_d0;
          uVar39 = local_c0;
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        }
      }
      break;
    case 0x88:
      puVar35 = local_e4 + *(int *)(local_e0 + 0xc + iVar30 * 0x14) * 10;
      local_c0._0_4_ = puVar35 + 10;
      iVar16 = *(int *)(local_d8[0x10] + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 4);
      local_108 = *(undefined4 **)(iVar16 + 0x24);
      local_b8 = (double)CONCAT44(iVar16,(int *)*local_108);
      iVar16 = *(int *)*local_108;
      local_c8 = CONCAT44(puVar35,iVar16);
      iVar23 = puVar35[0xe];
      local_f8 = (double)CONCAT44(puVar35[4],(undefined4)local_f8);
      local_d0 = CONCAT44(puVar35[4],iVar23);
      iVar33 = 0;
      local_a8 = (undefined4 *)local_d8[3];
      local_b0 = 0.0;
      local_d4 = iVar16;
      local_c0._4_4_ = local_108;
      if (0 < iVar23) {
        do {
          local_a8[iVar33] = (int *)local_c0 + (iVar33 + 1) * 10;
          FUN_00575310();
          iVar33 = local_b0._4_4_ + 1;
          local_b0 = (double)CONCAT44(iVar33,(undefined4 *)local_b0);
        } while (iVar33 < (int)(int *)local_d0);
        local_f8 = (double)CONCAT44(local_d0._4_4_,(undefined4)local_f8);
        iVar23 = (int)(int *)local_d0;
        iVar16 = (int)(int *)local_c8;
        iVar25 = local_a0._4_4_;
      }
      iVar33 = local_e0;
      local_d8[0x18] = local_d8[0x18] & 0xfffffff7U | 4;
      local_108 = local_c0._4_4_;
      local_a0._4_4_ = iVar25;
      local_d4 = (**(code **)(iVar16 + 0x20))
                           (local_c0._4_4_,local_f8._4_4_,
                            *(undefined4 *)(local_e0 + 0x10 + iVar30 * 0x14),iVar23);
      local_d8[0x18] = local_d8[0x18] & 0xfffffff3;
      FUN_0053b8a0(local_d8,(int *)local_b8);
      if (local_d4 == 0) {
        iVar25 = (**(code **)((int)(int *)local_c8 + 0x28))();
        local_b0 = (double)CONCAT44(local_b0._4_4_,iVar25);
      }
      else {
        iVar25 = (int)(undefined4 *)local_b0;
      }
      if (iVar25 != 0) {
        local_ec = *(int *)(iVar33 + 8 + iVar30 * 0x14) + -1;
      }
      *(undefined1 *)((int)local_b8._4_4_ + 0x1c) = 0;
      iVar16 = local_d4;
      puVar19 = local_e8;
      puVar35 = local_dc;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      break;
    case 0x89:
      iVar25 = *(int *)(local_d8[0x10] + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 4);
      local_c8 = CONCAT44(uVar32,local_e4 + *(int *)(local_e0 + 0xc + iVar30 * 0x14) * 10);
      if (*(char *)(iVar25 + 0x1c) == '\0') {
        local_d0 = CONCAT44(*(undefined4 *)**(undefined4 **)(iVar25 + 0x24),
                            (undefined4 *)**(undefined4 **)(iVar25 + 0x24));
        memset(&local_c0,0,0x40);
        FUN_00574b60(&local_b8,(int *)local_c8);
        local_a0._4_2_ = local_a0._4_2_ & 0xbe01 | 1;
        local_d4 = (**(code **)((int)local_d0._4_4_ + 0x2c))
                             (*(undefined4 *)(iVar25 + 0x24),&local_c0,
                              *(undefined4 *)(local_e0 + 8 + iVar30 * 0x14));
        FUN_0053b8a0(local_d8,(int *)local_d0);
        if ((int)local_88 != 0) {
          local_d4 = (int)local_88;
        }
        FUN_0056c290(&local_b8,local_f0 & 0xff);
        FUN_00574b60((int *)local_c8,&local_b8);
        iVar25 = FUN_005753f0((int *)local_c8);
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        puVar35 = local_dc;
        goto joined_r0x005727a5;
      }
      FUN_00574f20();
      iVar16 = local_d4;
      puVar35 = local_dc;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      break;
    case 0x8a:
      uVar32 = *(uint *)(local_d8[0x10] + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 4);
      local_c8 = (ulonglong)uVar32 << 0x20;
      if (*(char *)(uVar32 + 0x1c) == '\0') {
        iVar25 = *(int *)**(undefined4 **)(uVar32 + 0x24);
        local_d0 = CONCAT44(iVar25,(int *)**(undefined4 **)(uVar32 + 0x24));
        local_d8[0x18] = local_d8[0x18] & 0xfffffff7U | 4;
        local_d4 = (**(code **)(iVar25 + 0x24))();
        piVar20[0x18] = piVar20[0x18] & 0xfffffff3;
        FUN_0053b8a0(piVar20,(int *)local_d0);
        puVar19 = local_e8;
        if (local_d4 == 0) {
          iVar25 = (**(code **)((int)local_d0._4_4_ + 0x28))();
          local_c8 = CONCAT44(local_c8._4_4_,iVar25);
        }
        else {
          iVar25 = (int)(int *)local_c8;
        }
        iVar16 = local_d4;
        puVar13 = local_dc;
        uVar40 = local_d0;
        uVar39 = local_c0;
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        if (iVar25 == 0) {
          iVar30 = *(int *)(local_e0 + 8 + iVar30 * 0x14);
          goto LAB_0056e364;
        }
      }
      break;
    case 0x8b:
      local_d0 = CONCAT44(local_e4 + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 10,
                          *(undefined4 *)(*(int *)(local_e0 + 0x10 + iVar30 * 0x14) + 8));
      local_d4 = FUN_0056c290(local_e4 + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 10);
      iVar16 = local_d4;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      if (local_d4 == 0) {
        local_d4 = (**(code **)(*(int *)local_d0 + 0x4c))((int *)local_d0);
        FUN_0053b8a0(local_d8,(int *)local_d0);
        local_d8[0x18] = local_d8[0x18] & 0xffffffdf;
        iVar16 = local_d4;
        puVar13 = local_dc;
        uVar40 = local_d0;
        uVar39 = local_c0;
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      }
      break;
    case 0x8c:
      piVar20 = *(int **)(*(int *)(local_e0 + 0x10 + iVar30 * 0x14) + 8);
      iVar23 = *piVar20;
      local_d0 = CONCAT44(iVar23,piVar20);
      uVar34 = *(uint *)(local_e0 + 8 + iVar30 * 0x14);
      local_c8 = CONCAT44(uVar32,uVar34);
      uVar40 = local_d0;
      if (*(int *)(iVar23 + 0x34) != 0) {
        uVar5 = *(undefined1 *)(puVar19 + 0xf);
        local_c8 = (ulonglong)uVar34;
        local_b8 = (double)CONCAT44(local_e4 + *(int *)(local_e0 + 0xc + iVar30 * 0x14) * 10,
                                    local_d8[3]);
        if (0 < (int)uVar34) {
          do {
            local_a0._4_4_ = iVar25;
            local_c0 = uVar39;
            FUN_00575310();
            *(byte **)((int)(int *)local_b8 + (int)local_c8._4_4_ * 4) = local_b8._4_4_;
            iVar16 = (int)local_c8._4_4_ + 1;
            local_b8 = (double)CONCAT44((int)local_b8._4_4_ + 0x28,(int *)local_b8);
            local_c8 = CONCAT44(iVar16,(int *)local_c8);
            iVar25 = local_a0._4_4_;
            uVar39 = local_c0;
          } while (iVar16 < (int)(int *)local_c8);
        }
        puVar35 = local_e8;
        *(undefined1 *)(local_e8 + 0xf) = *(undefined1 *)(iVar33 + 3 + iVar30 * 0x14);
        local_d4 = (**(code **)((int)local_d0._4_4_ + 0x34))
                             ((int *)local_d0,(int *)local_c8,(int *)local_b8);
        piVar20 = local_d8;
        *(undefined1 *)(puVar35 + 0xf) = uVar5;
        FUN_0053b8a0(local_d8,(int *)local_d0);
        puVar19 = local_e8;
        puVar35 = local_dc;
        uVar40 = local_d0;
        iVar16 = local_d4;
        puVar13 = local_dc;
        uVar39 = local_c0;
        if (local_d4 == 0) {
          if (*(int *)(local_e0 + 4 + iVar30 * 0x14) == 0) {
LAB_00572ab8:
            piVar20[0x19] = piVar20[0x19] + 1;
            lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
          }
          else {
            local_100 = (uint)local_c0._4_4_;
            local_104 = (uint)(int *)local_c0;
            *(ulonglong *)(local_e8 + 8) = local_c0;
            piVar20[0x19] = piVar20[0x19] + 1;
            lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
          }
        }
        else {
          if ((local_d4 != 0x13) ||
             (*(char *)(*(int *)(local_e0 + 0x10 + iVar30 * 0x14) + 0x10) == '\0'))
          goto LAB_00572ab8;
          cVar14 = *(char *)(local_e0 + 3 + iVar30 * 0x14);
          if (cVar14 == '\x04') {
            local_d4 = 0;
            iVar16 = 0;
            lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
          }
          else if (cVar14 == '\x05') {
            *(undefined1 *)(piVar20 + 0x17) = 2;
            lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
          }
          else {
            *(char *)(piVar20 + 0x17) = cVar14;
            lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
          }
        }
      }
      break;
    case 0x8d:
      puVar36 = local_e4 + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 10;
      uVar6 = *(ushort *)(puVar36 + 7);
      puVar35 = puVar10;
      if ((uVar6 & 1) == 0) {
        *(ushort *)(puVar36 + 7) = uVar6 >> 3 & 2 | uVar6;
        if (((uVar6 >> 3 & 2) == 0 && (uVar6 & 2) == 0) && ((uVar6 & 0xc) != 0)) {
          FUN_00575350(puVar36);
        }
        *(ushort *)(puVar36 + 7) = *(ushort *)(puVar36 + 7) & 0xfff3;
        if ((*(ushort *)(puVar36 + 7) & 0x4000) == 0) {
          *(ushort *)(puVar36 + 7) = *(ushort *)(puVar36 + 7) & 0xbfe3;
          local_d4 = 0;
          iVar16 = local_d4;
          puVar35 = local_dc;
          puVar13 = local_dc;
          uVar40 = local_d0;
          uVar39 = local_c0;
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        }
        else {
          local_d4 = FUN_00574600();
          *(ushort *)(puVar36 + 7) = *(ushort *)(puVar36 + 7) & 0xbfe3;
          iVar16 = local_d4;
          puVar35 = local_dc;
          puVar13 = local_dc;
          uVar40 = local_d0;
          uVar39 = local_c0;
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        }
      }
      break;
    case 0x8e:
      puVar36 = local_e4 + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 10;
      uVar6 = *(ushort *)(puVar36 + 7);
      puVar35 = puVar10;
      if ((uVar6 & 1) == 0) {
        if ((uVar6 & 0x10) == 0) {
          if (((uVar6 & 2) == 0) && ((uVar6 & 0xc) != 0)) {
            FUN_00575350(puVar36);
          }
          *(ushort *)(puVar36 + 7) = *(ushort *)(puVar36 + 7) & 0xbe10 | 0x10;
          iVar16 = local_d4;
          puVar35 = local_dc;
          puVar13 = local_dc;
          uVar40 = local_d0;
          uVar39 = local_c0;
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        }
        else {
          *(ushort *)(puVar36 + 7) = uVar6 & 0xfe10;
        }
      }
      break;
    case 0x8f:
      FUN_00574c50();
      iVar16 = local_d4;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      break;
    case 0x90:
      if ((*(byte *)(local_e4 + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 10 + 7) & 1) == 0) {
        FUN_00574a70();
        iVar16 = local_d4;
        puVar13 = local_dc;
        uVar40 = local_d0;
        uVar39 = local_c0;
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      }
      break;
    case 0x91:
      if ((*(byte *)(local_e4 + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 10 + 7) & 1) == 0) {
        FUN_00574cd0();
        iVar16 = local_d4;
        puVar13 = local_dc;
        uVar40 = local_d0;
        uVar39 = local_c0;
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      }
      break;
    case 0x92:
      puVar35[4] = *(undefined4 *)
                    (*(int *)(*(int *)(puVar19[4] + 4 +
                                      *(int *)(local_e0 + 4 + iVar30 * 0x14) * 0x10) + 4) + 0x2c);
      puVar35[5] = 0;
      break;
    case 0x93:
      iVar25 = FUN_0054df20(*(undefined4 *)
                             (puVar19[4] + 4 + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 0x10));
      puVar35[4] = iVar25;
      puVar35[5] = iVar25 >> 0x1f;
      iVar16 = local_d4;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      break;
    case 0x94:
      if ((puVar19[0x26] != 0) && ((local_d8[0x18] & 0x400U) == 0)) {
        iVar25 = *(int *)(local_e0 + 0x10 + iVar30 * 0x14);
        if (iVar25 == 0) {
          iVar25 = local_d8[0x26];
        }
        local_d0 = CONCAT44(local_d0._4_4_,iVar25);
        uVar40 = local_d0;
        if (iVar25 != 0) {
          uVar26 = FUN_00573170(local_d8);
          local_d0 = CONCAT44(uVar26,(int *)local_d0);
          (*(code *)puVar19[0x26])(puVar19[0x27],uVar26);
          FUN_005521a0(puVar19,local_d0._4_4_);
          iVar16 = local_d4;
          puVar13 = local_dc;
          uVar40 = local_d0;
          uVar39 = local_c0;
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        }
      }
    }
LAB_0056e371:
    local_d0 = uVar40;
    local_dc = puVar13;
    local_ec = local_ec + 1;
    local_c0 = uVar39;
    if (iVar16 != 0) goto LAB_00572e2d;
    goto LAB_0056caa0;
  }
LAB_0056cb4e:
  local_d8[0x16] = 9;
  local_d4 = 9;
  local_a0._4_4_ = iVar25;
  local_c0 = uVar39;
  FUN_005670f0(local_d8 + 0xd,puVar19,&DAT_00716900,"interrupted");
  iVar16 = 9;
  lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
  goto LAB_00572e2d;
code_r0x0056f005:
  iVar16 = iVar16 + 1;
  local_b8 = (double)CONCAT44(local_b8._4_4_,iVar16);
  iVar30 = *(int *)(iVar30 + 0x10);
  local_c0._0_4_ = (int *)iVar30;
  if (iVar30 == 0) goto LAB_0056f01f;
  goto LAB_0056eff6;
LAB_0056d0d0:
  do {
    puVar19 = local_e8;
    if ((*(ushort *)(puVar35 + iVar28 * 10 + 7) & 0x1000) != 0) {
      iVar28 = FUN_00574af0();
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      if (iVar28 != 0) goto LAB_00572e06;
    }
    FUN_00574bf0();
    FUN_00575310((int)(int *)local_d0 + (int)local_d0._4_4_ * 0x28);
    iVar28 = (int)local_d0._4_4_ + 1;
    local_d0 = CONCAT44(iVar28,(int *)local_d0);
    puVar35 = (int *)local_d0;
  } while (iVar28 < *(int *)(iVar25 + 8 + iVar30 * 0x14));
LAB_00572c54:
  lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
  if (*(char *)(puVar19 + 0xe) == '\0') {
    local_d8[0x15] = local_ec + 1;
    goto LAB_00572ea7;
  }
LAB_00572e06:
  *(undefined1 *)(puVar19 + 0xe) = 1;
  local_a0 = lVar41;
  FUN_005670f0(local_d8 + 0xd,puVar19,"out of memory");
  iVar16 = 7;
  local_d4 = iVar16;
  lVar41 = local_a0;
LAB_00572e2d:
  local_d8[0x16] = iVar16;
  local_a0 = lVar41;
  FUN_00525a30(iVar16,"statement aborts at %d: [%s] %s",local_ec,local_d8[0x26],local_d8[0xd]);
  FUN_00573740(local_d8);
  cVar14 = local_f9;
  if (local_d4 == 0xc0a) {
    *(undefined1 *)(puVar19 + 0xe) = 1;
  }
  lVar41 = local_a0;
  if (local_f9 != '\0') {
    FUN_00565020();
    lVar41 = local_a0;
    if (cVar14 != '\x02') {
      FUN_00565020();
      lVar41 = local_a0;
    }
  }
LAB_00572ea7:
  local_e8[8] = local_104;
  local_e8[9] = local_100;
  local_a0 = lVar41;
  FUN_00573db0();
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00573740 @ 00573740  kind=lib  attributed-by=lib-string  size=721 */

undefined4 FUN_00573740(int *param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar2 = *param_1;
  if (*(char *)(iVar2 + 0x38) != '\0') {
    param_1[0x16] = 7;
  }
  if ((void *)param_1[0x2e] != (void *)0x0) {
    memset((void *)param_1[0x2e],0,param_1[0x2d]);
  }
  FUN_00530420(param_1);
  if (param_1[0xc] != -0x420df25d) {
    return 0;
  }
  if (param_1[0x15] < 0) goto LAB_005739e9;
  iVar6 = 0;
  FUN_0056c960(param_1);
  cVar1 = (char)param_1[0x16];
  if ((((cVar1 == '\a') || (cVar1 == '\n')) || (cVar1 == '\t')) || (cVar1 == '\r')) {
    bVar3 = true;
    if (((param_1[0x18] & 0x100U) == 0) || (cVar1 != '\t')) {
      if (((cVar1 == '\a') || (cVar1 == '\r')) && ((char)param_1[0x18] < '\0')) {
        iVar6 = 2;
      }
      else {
        FUN_00564340(iVar2,0x204);
        FUN_0054fdb0(iVar2);
        *(undefined1 *)(iVar2 + 0x36) = 1;
      }
    }
  }
  else {
    bVar3 = false;
  }
  if (((param_1[0x16] == 0) && (-1 < param_1[0x23])) &&
     ((0 < param_1[0x23] || (param_1[0x22] != 0)))) {
    param_1[0x16] = 0x13;
    *(undefined1 *)(param_1 + 0x17) = 2;
    FUN_005670f0(param_1 + 0xd,*param_1,"foreign key constraint failed");
  }
  if ((((*(int *)(iVar2 + 0x120) < 1) || (*(int *)(iVar2 + 0x138) != 0)) &&
      (*(char *)(iVar2 + 0x36) != '\0')) &&
     (*(uint *)(iVar2 + 0x88) == (~((uint)param_1[0x18] >> 8) & 1))) {
    if ((param_1[0x16] == 0) || (((char)param_1[0x17] == '\x03' && (!bVar3)))) {
      iVar4 = FUN_0056c500(param_1,1);
      if (iVar4 == 0) {
        iVar4 = FUN_0057c2a0(iVar2,param_1);
        if (iVar4 == 5) {
          if ((param_1[0x18] & 0x100U) != 0) {
            FUN_00573db0(param_1);
            return 5;
          }
        }
        else if (iVar4 == 0) {
          *(uint *)(iVar2 + 0x18) = *(uint *)(iVar2 + 0x18) & 0xfffffffd;
          *(undefined4 *)(iVar2 + 0x1e8) = 0;
          *(undefined4 *)(iVar2 + 0x1ec) = 0;
          goto LAB_00573929;
        }
        param_1[0x16] = iVar4;
        FUN_00564340(iVar2,0);
      }
      else {
        if ((param_1[0x18] & 0x100U) != 0) {
          FUN_00573db0(param_1);
          return 1;
        }
        param_1[0x16] = 0x13;
        FUN_00564340(iVar2,0);
      }
    }
    else {
      FUN_00564340(iVar2,0);
    }
LAB_00573929:
    *(undefined4 *)(iVar2 + 0x1e4) = 0;
    if (iVar6 != 0) goto LAB_00573959;
  }
  else {
    if (iVar6 == 0) {
      if ((param_1[0x16] == 0) || ((char)param_1[0x17] == '\x03')) {
        iVar6 = 1;
        goto LAB_00573959;
      }
      if ((char)param_1[0x17] == '\x02') {
        iVar6 = 2;
        goto LAB_00573959;
      }
    }
    else {
LAB_00573959:
      iVar4 = FUN_0056c6b0(param_1,iVar6);
      if (iVar4 == 0) goto LAB_005739a1;
      if ((param_1[0x16] == 0) || (param_1[0x16] == 0x13)) {
        param_1[0x16] = iVar4;
        FUN_005521a0(iVar2,param_1[0xd]);
        param_1[0xd] = 0;
      }
    }
    FUN_00564340(iVar2,0x204);
    FUN_0054fdb0(iVar2);
    *(undefined1 *)(iVar2 + 0x36) = 1;
  }
LAB_005739a1:
  if ((*(byte *)(param_1 + 0x18) & 0x10) != 0) {
    if (iVar6 == 2) {
      *(undefined4 *)(iVar2 + 0x48) = 0;
    }
    else {
      iVar6 = param_1[0x19];
      *(int *)(iVar2 + 0x4c) = *(int *)(iVar2 + 0x4c) + iVar6;
      *(int *)(iVar2 + 0x48) = iVar6;
    }
    param_1[0x19] = 0;
  }
  FUN_00573db0(param_1);
  if ((-1 < param_1[0x15]) &&
     (*(int *)(iVar2 + 0x84) = *(int *)(iVar2 + 0x84) + -1, (param_1[0x18] & 0x100U) == 0)) {
    *(int *)(iVar2 + 0x88) = *(int *)(iVar2 + 0x88) + -1;
  }
LAB_005739e9:
  param_1[0xc] = 0x519c2973;
  if (*(char *)(*param_1 + 0x38) != '\0') {
    param_1[0x16] = 7;
  }
  uVar5 = 0;
  if (param_1[0x16] == 5) {
    uVar5 = 5;
  }
  return uVar5;
}


/* FUN_005771f0 @ 005771f0  kind=lib  attributed-by=lib-string  size=396 */

void FUN_005771f0(int *param_1,int *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  uint uVar8;
  char *pcVar9;
  
  puVar2 = (undefined4 *)param_1[0x7f];
  iVar3 = *param_1;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_00528cb0(param_1);
    param_1[0x86] = 0;
    if (0 < (int)puVar2[0xc]) {
      if (*(char *)(iVar3 + 0x81) == '\0') {
        if (param_2 != (int *)0x0) {
          param_1[0x83] = (param_2[1] - param_1[0x82]) + *param_2;
        }
        uVar4 = FUN_0055d980(iVar3,"CREATE VIRTUAL TABLE %T",param_1 + 0x82);
        iVar5 = FUN_00565260(iVar3,puVar2[0x10]);
        pcVar9 = "sqlite_temp_master";
        if (iVar5 != 1) {
          pcVar9 = "sqlite_master";
        }
        FUN_0055e450(param_1,
                     "UPDATE %Q.%s SET type=\'table\', name=%Q, tbl_name=%Q, rootpage=0, sql=%Q WHERE rowid=#%d"
                     ,*(undefined4 *)(*(int *)(iVar3 + 0x10) + iVar5 * 0x10),pcVar9,*puVar2,*puVar2,
                     uVar4,param_1[100]);
        FUN_005521a0(iVar3,uVar4);
        uVar4 = FUN_0055ab80(param_1);
        FUN_0054f7b0(param_1,iVar5);
        FUN_0056be90(uVar4,0x81,0,0);
        uVar6 = FUN_0055d980(iVar3,"name=\'%q\' AND type=\'table\'",*puVar2);
        FUN_0056c120(uVar4,iVar5,uVar6);
        pcVar9 = (char *)*puVar2;
        uVar8 = 0;
        if (pcVar9 != (char *)0x0) {
          cVar1 = *pcVar9;
          pcVar7 = pcVar9;
          while (cVar1 != '\0') {
            pcVar7 = pcVar7 + 1;
            cVar1 = *pcVar7;
          }
          uVar8 = (int)pcVar7 - (int)pcVar9 & 0x3fffffff;
        }
        FUN_0056bf50(uVar4,0x85,iVar5,0,0,pcVar9,uVar8 + 1);
        return;
      }
      pcVar9 = (char *)*puVar2;
      uVar8 = 0;
      if (pcVar9 != (char *)0x0) {
        cVar1 = *pcVar9;
        pcVar7 = pcVar9;
        while (cVar1 != '\0') {
          pcVar7 = pcVar7 + 1;
          cVar1 = *pcVar7;
        }
        uVar8 = (int)pcVar7 - (int)pcVar9 & 0x3fffffff;
      }
      iVar5 = FUN_0055ada0(puVar2[0x10] + 8,pcVar9,uVar8,puVar2);
      if (iVar5 != 0) {
        *(undefined1 *)(iVar3 + 0x38) = 1;
        return;
      }
      param_1[0x7f] = 0;
    }
  }
  return;
}


/* FUN_00579e10 @ 00579e10  kind=lib  attributed-by=lib-string  size=357 */

undefined4 FUN_00579e10(int *param_1,int param_2,int param_3,int param_4)

{
  size_t _Size;
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  void *_Dst;
  
  iVar4 = param_2;
  if ((param_1[3] == 0) && (param_3 != 0)) {
    iVar4 = param_2 * 2;
  }
  if (param_1[2] < param_1[5] + iVar4) {
    iVar4 = iVar4 + param_1[2] * 2;
    param_1[2] = iVar4;
    iVar5 = *param_1;
    iVar3 = FUN_00579f80();
    if ((iVar3 != 0) || (iVar4 = FUN_00563800(iVar5,iVar4 * 4), iVar4 == 0)) {
LAB_00579f5a:
      param_1[6] = 7;
      return 1;
    }
    *param_1 = iVar4;
  }
  if (param_1[3] == 0) {
    iVar4 = 0;
    param_1[4] = param_2;
    if (0 < param_2) {
      do {
        iVar5 = FUN_00523d10(&DAT_00716900,*(undefined4 *)(param_4 + iVar4 * 4));
        if (iVar5 == 0) goto LAB_00579f5a;
        iVar4 = iVar4 + 1;
        *(int *)(*param_1 + param_1[5] * 4) = iVar5;
        param_1[5] = param_1[5] + 1;
      } while (iVar4 < param_2);
    }
  }
  else if (param_1[4] != param_2) {
    FUN_00524410(param_1[1]);
    iVar4 = FUN_00523d10("sqlite3_get_table() called with two or more incompatible queries");
    param_1[1] = iVar4;
    param_1[6] = 1;
    return 1;
  }
  if (param_3 != 0) {
    iVar4 = 0;
    if (0 < param_2) {
      do {
        pcVar2 = *(char **)(param_3 + iVar4 * 4);
        if (pcVar2 == (char *)0x0) {
          _Dst = (void *)0x0;
        }
        else {
          cVar1 = *pcVar2;
          pcVar6 = pcVar2;
          while (cVar1 != '\0') {
            pcVar6 = pcVar6 + 1;
            cVar1 = *pcVar6;
          }
          _Size = ((int)pcVar6 - (int)pcVar2 & 0x3fffffffU) + 1;
          iVar5 = FUN_00579f80();
          if ((iVar5 != 0) || (_Dst = (void *)FUN_0055da00(_Size), _Dst == (void *)0x0))
          goto LAB_00579f5a;
          memcpy(_Dst,*(void **)(param_3 + iVar4 * 4),_Size);
        }
        iVar4 = iVar4 + 1;
        *(void **)(*param_1 + param_1[5] * 4) = _Dst;
        param_1[5] = param_1[5] + 1;
      } while (iVar4 < param_2);
    }
    param_1[3] = param_1[3] + 1;
  }
  return 0;
}


/* FUN_0057d440 @ 0057d440  kind=lib  attributed-by=lib-string  size=227 */

int FUN_0057d440(int *param_1,undefined4 *param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = (int *)param_2[0xe];
  if (piVar1 != (int *)0x0) {
    do {
      if (*piVar1 == *param_1) break;
      piVar1 = (int *)piVar1[6];
    } while (piVar1 != (int *)0x0);
  }
  piVar1 = (int *)piVar1[2];
  uVar2 = (**(code **)(*piVar1 + 0xc))(piVar1,param_3);
  if (uVar2 != 0) {
    if (uVar2 == 7) {
      *(undefined1 *)(*param_1 + 0x38) = 1;
    }
    else {
      pcVar3 = (char *)piVar1[2];
      if ((char *)piVar1[2] == (char *)0x0) {
        if (uVar2 == 0x204) {
          pcVar3 = "abort due to ROLLBACK";
        }
        else {
          pcVar3 = "unknown error";
          if (((uVar2 & 0xff) < 0x1b) &&
             ((&PTR_s_not_an_error_007123d0)[uVar2 & 0xff] != (char *)0x0)) {
            pcVar3 = (&PTR_s_not_an_error_007123d0)[uVar2 & 0xff];
          }
        }
      }
      FUN_00553950(param_1,&DAT_00716900,pcVar3);
    }
  }
  FUN_00524410(piVar1[2]);
  piVar1[2] = 0;
  iVar4 = 0;
  if (0 < *param_3) {
    iVar5 = 0;
    do {
      if ((*(char *)(param_3[1] + 5 + iVar5) == '\0') && (0 < *(int *)(param_3[4] + iVar4 * 8))) {
        FUN_00553950(param_1,"table %s: xBestIndex returned an invalid plan",*param_2);
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0xc;
    } while (iVar4 < *param_3);
    return param_1[0x11];
  }
  return param_1[0x11];
}


