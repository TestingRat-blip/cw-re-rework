// sqlite (_library) -- server. 59 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "sqlite.h"

/* FUN_00413010 @ 00413010  kind=lib  attributed-by=lib-string  size=89 */

uint __thiscall FUN_00413010(void *this,int *param_1)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = (int *)((int)this + 4);
  if (*(int **)((int)this + 4) != (int *)0x0) {
    FUN_00462fe0(*(int **)((int)this + 4));
    *piVar1 = 0;
  }
  if (0xf < (uint)param_1[5]) {
    param_1 = (int *)*param_1;
  }
  uVar2 = FUN_00467f50(param_1,piVar1);
  if (uVar2 != 0) {
    return uVar2 & 0xffffff00;
  }
  uVar2 = FUN_00463120(*piVar1,(byte *)"CREATE TABLE blobs(key TEXT PRIMARY KEY, value BLOB);",
                       (undefined *)0x0,0,(int *)0x0);
  return CONCAT31((int3)(uVar2 >> 8),1);
}


/* FUN_0045fb30 @ 0045fb30  kind=lib  attributed-by=lib-string  size=81 */

void __cdecl FUN_0045fb30(int param_1,uint param_2)

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
         ((&PTR_s_not_an_error_00569918)[param_2 & 0xff] != (char *)0x0)) {
        pcVar1 = (&PTR_s_not_an_error_00569918)[param_2 & 0xff];
      }
    }
    FUN_004b79e0((int *)(param_1 + 8),pcVar1,0xffffffff,'\x01',(undefined *)0x0);
  }
  return;
}


/* FUN_00460d50 @ 00460d50  kind=lib  attributed-by=lib-string  size=1468 */

void __cdecl FUN_00460d50(int param_1,undefined4 param_2,undefined4 *param_3)

{
  byte *pbVar1;
  byte bVar2;
  int *piVar3;
  undefined8 *puVar4;
  int *piVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  void *pvVar10;
  undefined4 *puVar11;
  int iVar12;
  char *pcVar13;
  byte *pbVar14;
  int iVar15;
  undefined *local_20;
  int *local_1c;
  byte *local_18;
  undefined4 *local_14;
  byte *local_10;
  uint local_c;
  undefined4 *local_8;
  
  piVar3 = *(int **)(param_1 + 8);
  local_c = 0;
  local_18 = (byte *)0x0;
  local_14 = (undefined4 *)0x0;
  local_8 = (undefined4 *)0x0;
  piVar5 = (int *)FUN_004ae680((int *)*param_3,1);
  pbVar6 = (byte *)FUN_004ae680((int *)param_3[1],1);
  iVar12 = piVar3[5];
  local_1c = (int *)&DAT_0055b524;
  if (piVar5 != (int *)0x0) {
    local_1c = piVar5;
  }
  local_10 = &DAT_0055b524;
  if (pbVar6 != (byte *)0x0) {
    local_10 = pbVar6;
  }
  if (iVar12 < piVar3[0x1b] + 2) {
    if (*(char *)((int)piVar3 + 0x36) == '\0') {
      local_8 = (undefined4 *)
                FUN_004a02d0((int)piVar3,(byte *)"cannot ATTACH database within transaction");
      goto LAB_004611e5;
    }
    iVar15 = 0;
    if (0 < iVar12) {
      puVar9 = (undefined4 *)piVar3[4];
      do {
        pbVar6 = (byte *)*puVar9;
        bVar2 = *pbVar6;
        pbVar14 = local_10;
        while ((bVar2 != 0 && ((&DAT_00569620)[bVar2] == (&DAT_00569620)[*pbVar14]))) {
          pbVar1 = pbVar6 + 1;
          pbVar6 = pbVar6 + 1;
          pbVar14 = pbVar14 + 1;
          bVar2 = *pbVar1;
        }
        if ((&DAT_00569620)[*pbVar6] == (&DAT_00569620)[*pbVar14]) {
          local_8 = (undefined4 *)FUN_004a02d0((int)piVar3,(byte *)"database %s is already in use");
          goto LAB_004611e5;
        }
        iVar12 = piVar3[5];
        iVar15 = iVar15 + 1;
        puVar9 = puVar9 + 4;
      } while (iVar15 < iVar12);
    }
    if ((int *)piVar3[4] == piVar3 + 0x6e) {
      puVar7 = (undefined8 *)FUN_00494b90((int)piVar3,0x30);
      if (puVar7 == (undefined8 *)0x0) {
        return;
      }
      puVar4 = (undefined8 *)piVar3[4];
      *puVar7 = *puVar4;
      puVar7[1] = puVar4[1];
      puVar7[2] = puVar4[2];
      puVar7[3] = puVar4[3];
    }
    else {
      puVar7 = (undefined8 *)FUN_00494cf0((int)piVar3,(int *)piVar3[4],(iVar12 + 1) * 0x10);
      if (puVar7 == (undefined8 *)0x0) {
        return;
      }
    }
    piVar3[4] = (int)puVar7;
    puVar7 = puVar7 + piVar3[5] * 2;
    *puVar7 = 0;
    puVar7[1] = 0;
    local_c = piVar3[10];
    iVar12 = FUN_004a2e90(*(byte **)(*piVar3 + 0x10),local_1c,&local_c,(int *)&local_20,&local_18,
                          &local_14);
    puVar9 = local_14;
    pbVar6 = local_18;
    if (iVar12 != 0) {
      if (iVar12 == 7) {
        *(undefined1 *)(piVar3 + 0xe) = 1;
      }
      *(undefined4 *)(param_1 + 0x38) = 1;
      if (local_14 == (undefined4 *)0x0) {
        if ((*(byte *)(param_1 + 0x24) & 0x40) != 0) {
          piVar3 = *(int **)(param_1 + 0x18);
          piVar3[1] = *(int *)(*piVar3 + 0xa4);
          *(int **)(*piVar3 + 0xa4) = piVar3;
        }
        if ((*(byte *)(param_1 + 0x24) & 0x20) != 0) {
          FUN_004a6e20(*(undefined4 **)(param_1 + 0x18));
        }
        *(ushort *)(param_1 + 0x24) = *(ushort *)(param_1 + 0x24) & 0xbe01 | 1;
        *(undefined1 *)(param_1 + 0x26) = 5;
        FUN_00466dd0(0);
        return;
      }
      iVar12 = *(int *)(param_1 + 8);
      if (iVar12 == 0) {
        iVar12 = 1000000000;
      }
      else {
        iVar12 = *(int *)(iVar12 + 0x50);
      }
      iVar15 = 0;
      if (-1 < iVar12) {
        do {
          if (*(char *)(iVar15 + (int)local_14) == '\0') break;
          iVar15 = iVar15 + 1;
        } while (iVar15 <= iVar12);
      }
      if ((iVar15 <= iVar12) &&
         (iVar12 = FUN_004b7260((int *)(param_1 + 8),iVar15 + 1,0), iVar12 == 0)) {
        memcpy(*(void **)(param_1 + 0xc),puVar9,iVar15 + 1);
        *(int *)(param_1 + 0x20) = iVar15;
        *(undefined4 *)(param_1 + 0x24) = 0x1030202;
      }
      FUN_00466dd0((int)puVar9);
      return;
    }
    local_14 = (undefined4 *)((int)puVar7 + 4);
    uVar8 = FUN_00490e00(local_20,local_18,(int)piVar3,local_14,0,local_c | 0x100);
    local_c = uVar8;
    FUN_00466dd0((int)pbVar6);
    piVar3[5] = piVar3[5] + 1;
    if (uVar8 == 0x13) {
      uVar8 = 1;
      local_c = 1;
      local_8 = (undefined4 *)FUN_004a02d0((int)piVar3,(byte *)"database is already attached");
    }
    else if (uVar8 == 0) {
      pvVar10 = FUN_004a7a80((int)piVar3,(undefined4 *)*local_14);
      *(void **)((int)puVar7 + 0xc) = pvVar10;
      if (pvVar10 == (void *)0x0) {
        uVar8 = 7;
        local_c = uVar8;
      }
      else if ((*(char *)((int)pvVar10 + 0x4c) != '\0') &&
              (*(char *)((int)pvVar10 + 0x4d) != *(char *)(*(int *)(piVar3[4] + 0xc) + 0x4d))) {
        local_8 = (undefined4 *)
                  FUN_004a02d0((int)piVar3,
                               (byte *)
                               "attached databases must use the same text encoding as main database"
                              );
        uVar8 = 1;
        local_c = uVar8;
      }
      FUN_004a1c60(**(int **)(*(int *)((int)puVar7 + 4) + 4),(uint)*(byte *)((int)piVar3 + 0x39));
      puVar9 = *(undefined4 **)(piVar3[4] + 4);
      if (puVar9 == (undefined4 *)0x0) {
        FUN_00491a40(*(undefined4 **)((int)puVar7 + 4),0);
      }
      else {
        FUN_0048fbc0(puVar9);
        local_20 = (undefined *)(*(ushort *)(puVar9[1] + 0x16) >> 2 & 1);
        if (*(char *)((int)puVar9 + 9) != '\0') {
          piVar5 = puVar9 + 3;
          *piVar5 = *piVar5 + -1;
          if (*piVar5 == 0) {
            iVar12 = *(int *)(puVar9[1] + 0x38);
            if (iVar12 != 0) {
              (*DAT_00582b20)(iVar12);
            }
            *(undefined1 *)((int)puVar9 + 10) = 0;
          }
        }
        FUN_00491a40(*(undefined4 **)((int)puVar7 + 4),(int)local_20);
      }
    }
    *(undefined1 *)((int)puVar7 + 9) = 3;
    puVar9 = FUN_00494db0((int)piVar3,(char *)local_10);
    *(undefined4 **)puVar7 = puVar9;
    if (uVar8 == 0) {
      if (puVar9 == (undefined4 *)0x0) {
        uVar8 = 7;
        local_c = 7;
      }
      else {
        FUN_0048fca0((int)piVar3);
        uVar8 = FUN_0049ddb0((int)piVar3,(int *)&local_8);
        local_c = uVar8;
        FUN_00490780((int)piVar3);
        if (uVar8 == 0) {
          return;
        }
      }
    }
    iVar12 = piVar3[5] + -1;
    piVar5 = *(int **)(piVar3[4] + 4 + iVar12 * 0x10);
    if (piVar5 != (int *)0x0) {
      FUN_0048f070(piVar5);
      *(undefined4 *)(piVar3[4] + 4 + iVar12 * 0x10) = 0;
      *(undefined4 *)(piVar3[4] + 0xc + iVar12 * 0x10) = 0;
    }
    FUN_004a6940((int)piVar3);
    piVar3[5] = iVar12;
    if ((uVar8 == 7) || (uVar8 == 0xc0a)) {
      *(undefined1 *)(piVar3 + 0xe) = 1;
      FUN_00494b00((int)piVar3,local_8);
      local_8 = (undefined4 *)FUN_004a02d0((int)piVar3,(byte *)"out of memory");
      goto LAB_004611e5;
    }
    if (local_8 == (undefined4 *)0x0) {
      local_8 = (undefined4 *)FUN_004a02d0((int)piVar3,(byte *)"unable to open database: %s");
      goto LAB_004611e5;
    }
  }
  else {
    local_8 = (undefined4 *)FUN_004a02d0((int)piVar3,(byte *)"too many attached databases - max %d")
    ;
LAB_004611e5:
    if (local_8 == (undefined4 *)0x0) goto LAB_004612b8;
  }
  puVar9 = local_8;
  *(undefined4 *)(param_1 + 0x38) = 1;
  if (local_8 == (undefined4 *)0x0) {
    if ((*(byte *)(param_1 + 0x24) & 0x40) != 0) {
      piVar5 = *(int **)(param_1 + 0x18);
      piVar5[1] = *(int *)(*piVar5 + 0xa4);
      *(int **)(*piVar5 + 0xa4) = piVar5;
    }
    if ((*(byte *)(param_1 + 0x24) & 0x20) != 0) {
      FUN_004a6e20(*(undefined4 **)(param_1 + 0x18));
    }
    *(ushort *)(param_1 + 0x24) = *(ushort *)(param_1 + 0x24) & 0xbe01 | 1;
    *(undefined1 *)(param_1 + 0x26) = 5;
  }
  else {
    iVar12 = *(int *)(param_1 + 8);
    if (iVar12 == 0) {
      iVar12 = 1000000000;
    }
    else {
      iVar12 = *(int *)(iVar12 + 0x50);
    }
    puVar11 = (undefined4 *)0x0;
    param_3 = (undefined4 *)0x0;
    if (-1 < iVar12) {
      do {
        param_3 = puVar11;
        if (*(char *)((int)puVar11 + (int)local_8) == '\0') break;
        puVar11 = (undefined4 *)((int)puVar11 + 1);
        param_3 = puVar11;
      } while ((int)puVar11 <= iVar12);
    }
    local_20 = (undefined *)((int)param_3 + 1);
    if (((int)param_3 <= iVar12) &&
       (iVar12 = FUN_004b7260((int *)(param_1 + 8),(int)local_20,0), iVar12 == 0)) {
      memcpy(*(void **)(param_1 + 0xc),puVar9,(size_t)local_20);
      *(undefined4 **)(param_1 + 0x20) = param_3;
      *(undefined4 *)(param_1 + 0x24) = 0x1030202;
    }
  }
  FUN_00494b00((int)piVar3,local_8);
LAB_004612b8:
  if ((local_c != 0) && (*(uint *)(param_1 + 0x38) = local_c, (*(byte *)(param_1 + 0x24) & 1) != 0))
  {
    if (local_c == 0x204) {
      pcVar13 = "abort due to ROLLBACK";
    }
    else {
      pcVar13 = "unknown error";
      if (((local_c & 0xff) < 0x1b) &&
         ((&PTR_s_not_an_error_00569918)[local_c & 0xff] != (char *)0x0)) {
        pcVar13 = (&PTR_s_not_an_error_00569918)[local_c & 0xff];
      }
    }
    FUN_004b79e0((int *)(param_1 + 8),pcVar13,0xffffffff,'\x01',(undefined *)0x0);
  }
  return;
}


/* FUN_00462d70 @ 00462d70  kind=lib  attributed-by=lib-string  size=266 */

undefined4 __cdecl FUN_00462d70(byte *param_1)

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
    if ((*pbVar7 == 0) || ((&DAT_00569620)[*pbVar7] != (&DAT_00569620)[(byte)*pcVar9]))
    goto LAB_00462da8;
    pbVar7 = pbVar7 + 1;
    pcVar9 = pcVar9 + 1;
  } while (0 < iVar5);
  iVar5 = iVar4 + -2;
LAB_00462da8:
  if ((iVar5 < 0) || ((&DAT_00569620)[*pbVar7] == (&DAT_00569620)[(byte)*pcVar9])) {
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
  local_8 = &PTR_s_CURDIR_00569614;
  do {
    bVar2 = uVar6 != 0;
    pbVar7 = *local_8;
    uVar3 = uVar6;
    pbVar8 = param_1;
    while (bVar2) {
      if ((*pbVar8 == 0) || ((&DAT_00569620)[*pbVar8] != (&DAT_00569620)[*pbVar7])) break;
      pbVar8 = pbVar8 + 1;
      pbVar7 = pbVar7 + 1;
      bVar2 = 0 < (int)(uVar3 - 1);
      uVar3 = uVar3 - 1;
    }
    if ((((int)(uVar3 - 1) < 0) || ((&DAT_00569620)[*pbVar8] == (&DAT_00569620)[*pbVar7])) &&
       ((bVar1 = (*local_8)[uVar6], bVar1 == 0 || (bVar1 == 0x3d)))) {
      return 1;
    }
    local_8 = local_8 + 1;
    if (0x56961f < (int)local_8) {
      return 0;
    }
  } while( true );
}


/* FUN_00464420 @ 00464420  kind=lib  attributed-by=lib-string  size=2001 */

uint __cdecl
FUN_00464420(uint param_1,byte *param_2,byte *param_3,byte *param_4,int param_5,int param_6,
            int param_7,undefined4 *param_8)

{
  byte *pbVar1;
  undefined8 *puVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  int *piVar6;
  uint *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  int *piVar11;
  uint uVar12;
  undefined4 *puVar13;
  int iVar14;
  void *extraout_EDX;
  uint uVar15;
  uint *puVar16;
  byte *pbVar17;
  char *pcVar18;
  char *pcVar19;
  int iVar20;
  int local_28;
  undefined4 *local_20;
  int local_1c;
  uint *local_18;
  uint local_14;
  uint local_10;
  undefined4 *local_c;
  uint *local_8;
  
  local_14 = (uint)(param_7 != 0);
  local_28 = 0;
  local_10 = 0;
  local_c = (undefined4 *)0x0;
  *param_8 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b18)(*(int *)(param_1 + 0xc));
  }
  puVar7 = FUN_00494b90(param_1,0x1c);
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
    local_8 = FUN_00494b90(param_1,0x230);
    puVar16 = local_8;
    if (local_8 != (uint *)0x0) {
      do {
        puVar7 = local_8;
        memset(local_8,0,0x230);
        *puVar7 = param_1;
        FUN_00494b00(param_1,local_c);
        local_c = (undefined4 *)0x0;
        local_20 = (undefined4 *)0x0;
        FUN_0048fca0(param_1);
        if ((*(char *)(*puVar7 + 0x81) == '\0') &&
           (uVar8 = FUN_0049ddb0(*puVar7,(int *)(puVar7 + 1)), uVar8 != 0)) {
          puVar7[0x11] = puVar7[0x11] + 1;
          puVar7[3] = uVar8;
LAB_00464b1d:
          if (puVar7[1] != 0) {
            FUN_00494b00(param_1,(undefined4 *)0x0);
            local_c = (undefined4 *)puVar7[1];
            puVar7[1] = 0;
          }
          local_10 = 1;
          FUN_00490780(param_1);
          puVar16 = local_8;
          goto LAB_00464a40;
        }
        puVar9 = (undefined4 *)FUN_00499c30(*puVar7,param_3,param_2);
        if (puVar9 == (undefined4 *)0x0) {
          if (param_2 == (byte *)0x0) {
            FUN_004962b0((int *)puVar7,(byte *)"%s: %s");
          }
          else {
            FUN_004962b0((int *)puVar7,(byte *)"%s: %s.%s");
          }
          *(undefined1 *)((int)puVar7 + 0x11) = 1;
          goto LAB_00464b1d;
        }
        if ((*(byte *)((int)puVar9 + 0x2a) & 0x10) != 0) {
          FUN_004962b0((int *)puVar7,(byte *)"cannot open virtual table: %s");
          goto LAB_00464b1d;
        }
        if (puVar9[3] != 0) {
          FUN_004962b0((int *)puVar7,(byte *)"cannot open view: %s");
          goto LAB_00464b1d;
        }
        uVar8 = (uint)*(short *)((int)puVar9 + 0x26);
        uVar15 = 0;
        if (0 < (int)uVar8) {
          puVar13 = (undefined4 *)puVar9[1];
          do {
            pbVar10 = (byte *)*puVar13;
            bVar3 = *pbVar10;
            pbVar17 = param_4;
            while ((bVar3 != 0 && ((&DAT_00569620)[bVar3] == (&DAT_00569620)[*pbVar17]))) {
              pbVar1 = pbVar10 + 1;
              pbVar10 = pbVar10 + 1;
              pbVar17 = pbVar17 + 1;
              bVar3 = *pbVar1;
            }
            if ((&DAT_00569620)[*pbVar10] == (&DAT_00569620)[*pbVar17]) break;
            uVar15 = uVar15 + 1;
            puVar13 = puVar13 + 6;
          } while ((int)uVar15 < (int)uVar8);
        }
        if (uVar15 == uVar8) {
          FUN_00494b00(param_1,(undefined4 *)0x0);
          pcVar18 = "no such column: \"%s\"";
LAB_00464a24:
          local_c = (undefined4 *)FUN_004a02d0(param_1,(byte *)pcVar18);
          local_10 = 1;
          FUN_00490780(param_1);
          puVar16 = local_8;
          goto LAB_00464a40;
        }
        if (local_14 != 0) {
          pcVar18 = (char *)0x0;
          if ((*(uint *)(param_1 + 0x18) & 0x40000) != 0) {
            for (iVar20 = puVar9[4]; iVar20 != 0; iVar20 = *(int *)(iVar20 + 4)) {
              iVar14 = *(int *)(iVar20 + 0x14);
              if (0 < iVar14) {
                puVar7 = (uint *)(iVar20 + 0x24);
                pcVar19 = pcVar18;
                do {
                  pcVar18 = "foreign key";
                  if (*puVar7 != uVar15) {
                    pcVar18 = pcVar19;
                  }
                  puVar7 = puVar7 + 2;
                  iVar14 = iVar14 + -1;
                  pcVar19 = pcVar18;
                } while (iVar14 != 0);
              }
            }
          }
          for (iVar20 = puVar9[2]; iVar20 != 0; iVar20 = *(int *)(iVar20 + 0x14)) {
            iVar14 = *(int *)(iVar20 + 0x24);
            if (0 < iVar14) {
              puVar7 = *(uint **)(iVar20 + 4);
              pcVar19 = pcVar18;
              do {
                pcVar18 = "indexed";
                if (*puVar7 != uVar15) {
                  pcVar18 = pcVar19;
                }
                puVar7 = puVar7 + 1;
                iVar14 = iVar14 + -1;
                pcVar19 = pcVar18;
              } while (iVar14 != 0);
            }
          }
          if (pcVar18 != (char *)0x0) {
            FUN_00494b00(param_1,(undefined4 *)0x0);
            pcVar18 = "cannot open %s column for writing";
            goto LAB_00464a24;
          }
        }
        puVar7 = FUN_00494b90(param_1,0xc0);
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
          if (puVar9[0x10] != 0) {
            iVar20 = 0;
            local_1c = 0;
            if (0 < *(int *)(param_1 + 0x14)) {
              piVar11 = (int *)(*(int *)(param_1 + 0x10) + 0xc);
              do {
                local_1c = iVar20;
                if (*piVar11 == puVar9[0x10]) break;
                iVar20 = iVar20 + 1;
                piVar11 = piVar11 + 4;
                local_1c = iVar20;
              } while (iVar20 < *(int *)(param_1 + 0x14));
            }
          }
          iVar20 = local_1c;
          FUN_004aea10((int *)puVar7,0xc,0x56a19c);
          if ((puVar7[7] != 0) && (*(int *)(puVar7[1] + 4) = iVar20, puVar7[7] != 0)) {
            *(uint *)(puVar7[1] + 8) = local_14;
          }
          if ((1 < puVar7[7]) && (*(int *)(puVar7[1] + 0x18) = iVar20, 1 < puVar7[7])) {
            *(undefined4 *)(puVar7[1] + 0x1c) = *(undefined4 *)puVar9[0x10];
          }
          if (1 < puVar7[7]) {
            *(undefined4 *)(puVar7[1] + 0x20) = *(undefined4 *)(puVar9[0x10] + 4);
          }
          uVar8 = 1 << ((byte)iVar20 & 0x1f);
          puVar7[0x1a] = puVar7[0x1a] | uVar8;
          if ((iVar20 != 1) &&
             (*(char *)(*(int *)(*(int *)(*puVar7 + 0x10) + 4 + iVar20 * 0x10) + 9) != '\0')) {
            puVar7[0x1b] = puVar7[0x1b] | uVar8;
          }
          if ((2 < puVar7[7]) && (*(int *)(puVar7[1] + 0x2c) = iVar20, 2 < puVar7[7])) {
            *(undefined4 *)(puVar7[1] + 0x30) = puVar9[8];
          }
          if (2 < puVar7[7]) {
            *(uint *)(puVar7[1] + 0x34) = local_14;
          }
          uVar8 = puVar7[1];
          piVar11 = (int *)*puVar9;
          uVar12 = *puVar7;
          if ((uVar8 == 0) || (*(char *)(uVar12 + 0x38) != '\0')) {
            FUN_0047bc80(uVar12,0,piVar11);
          }
          else {
            FUN_0047bc80(uVar12,(int)*(char *)(uVar8 + 0x29),*(int **)(uVar8 + 0x38));
            *(undefined4 *)(uVar8 + 0x38) = 0;
            if (piVar11 == (int *)0x0) {
              *(undefined4 *)(uVar8 + 0x38) = 0;
              *(undefined1 *)(uVar8 + 0x29) = 0;
            }
            else {
              uVar12 = FUN_004aa9b0((char *)piVar11);
              puVar13 = FUN_00494e00(*puVar7,extraout_EDX,uVar12);
              *(undefined4 **)(uVar8 + 0x38) = puVar13;
              *(undefined1 *)(uVar8 + 0x29) = 0xff;
            }
          }
          uVar8 = puVar7[1];
          if (uVar8 != 0) {
            puVar2 = (undefined8 *)(uVar8 + (4 - local_14) * 0x14);
            FUN_0047bc80(*puVar7,(int)*(char *)((int)puVar2 + 1),
                         *(int **)(uVar8 + 0x10 + (4 - local_14) * 0x14));
            *puVar2 = 0;
            puVar2[1] = 0;
            *(undefined4 *)(puVar2 + 2) = 0;
            *(undefined1 *)puVar2 = 0x95;
            iVar20 = local_1c;
          }
          uVar8 = local_14 + 3;
          if ((uVar8 < puVar7[7]) &&
             (*(undefined4 *)(puVar7[1] + 8 + uVar8 * 0x14) = puVar9[8], uVar8 < puVar7[7])) {
            *(int *)(puVar7[1] + 0xc + uVar8 * 0x14) = iVar20;
          }
          uVar12 = puVar7[1];
          uVar5 = *puVar7;
          piVar11 = (int *)(*(short *)((int)puVar9 + 0x26) + 1);
          if ((uVar12 == 0) || (*(char *)(uVar5 + 0x38) != '\0')) {
            FUN_0047bc80(uVar5,0xfffffff2,piVar11);
          }
          else {
            if ((int)uVar8 < 0) {
              uVar8 = puVar7[7] - 1;
            }
            iVar20 = uVar12 + uVar8 * 0x14;
            FUN_0047bc80(uVar5,(int)*(char *)(iVar20 + 1),*(int **)(uVar12 + 0x10 + uVar8 * 0x14));
            *(int **)(iVar20 + 0x10) = piVar11;
            *(undefined1 *)(iVar20 + 1) = 0xf2;
          }
          if (7 < puVar7[7]) {
            *(int *)(puVar7[1] + 0x94) = (int)*(short *)((int)puVar9 + 0x26);
          }
          if (*(char *)(param_1 + 0x38) == '\0') {
            local_8[0x73] = 1;
            local_8[0x13] = 1;
            local_8[0x12] = 1;
            FUN_004b6bf0((int *)puVar7,(int)local_8);
          }
        }
        puVar7 = local_18;
        *local_18 = local_14;
        local_18[3] = uVar15;
        local_18[6] = param_1;
        FUN_00490780(param_1);
        if (*(char *)(param_1 + 0x38) != '\0') goto LAB_00464a98;
        piVar11 = (int *)puVar7[5];
        iVar20 = FUN_004bfc30(piVar11,1);
        if (iVar20 == 0) {
          piVar6 = (int *)piVar11[0x11];
          uVar4 = *(ushort *)(piVar6 + 7);
          if ((uVar4 & 0x2460) != 0) {
            if ((uVar4 & 0x2000) == 0) {
              if (((uVar4 & 0x400) == 0) || ((code *)piVar6[8] == (code *)0x0)) {
                if ((uVar4 & 0x20) == 0) {
                  if ((uVar4 & 0x40) != 0) {
                    FUN_004b78c0((int)piVar6);
                  }
                }
                else {
                  FUN_004a6e20((undefined4 *)piVar6[4]);
                }
              }
              else {
                (*(code *)piVar6[8])(piVar6[1]);
                piVar6[8] = 0;
              }
            }
            else {
              FUN_004b7010(piVar6,piVar6[4]);
              FUN_004b76e0(piVar6);
            }
          }
          FUN_00494b00(*piVar6,(undefined4 *)piVar6[9]);
          piVar6[4] = param_5;
          piVar6[5] = param_6;
          piVar6[1] = 0;
          piVar6[9] = 0;
          piVar6[8] = 0;
          *(undefined2 *)(piVar6 + 7) = 4;
          *(undefined1 *)((int)piVar6 + 0x1e) = 1;
          if (*(int *)(*piVar11 + 0xc) != 0) {
            (*DAT_00582b20)(*(int *)(*piVar11 + 0xc));
          }
        }
        puVar7 = local_18;
        local_10 = FUN_00470ba0((int)local_18,param_5,param_6,&local_20);
        local_28 = local_28 + 1;
        if ((4 < local_28) || (local_10 != 0x11)) goto LAB_00464a92;
        local_c = local_20;
      } while( true );
    }
  }
LAB_00464aa1:
  if (*(char *)(param_1 + 0x38) == '\0') {
    *param_8 = puVar7;
    goto LAB_00464b87;
  }
LAB_00464a40:
  if ((local_18 != (uint *)0x0) && (piVar11 = (int *)local_18[5], piVar11 != (int *)0x0)) {
    if ((piVar11[0xc] == -0x420df25d) || (piVar11[0xc] == 0x519c2973)) {
      FUN_004b8640(piVar11);
    }
    iVar20 = *piVar11;
    FUN_004aef00(iVar20,(int)piVar11);
    if (piVar11[0xe] == 0) {
      *(int *)(iVar20 + 4) = piVar11[0xf];
    }
    else {
      *(int *)(piVar11[0xe] + 0x3c) = piVar11[0xf];
    }
    if (piVar11[0xf] != 0) {
      *(int *)(piVar11[0xf] + 0x38) = piVar11[0xe];
    }
    piVar11[0xc] = -0x49f93c38;
    *piVar11 = 0;
    FUN_00494b00(iVar20,piVar11);
  }
  FUN_00494b00(param_1,local_18);
LAB_00464b87:
  puVar9 = local_c;
  pbVar10 = &DAT_0056de50;
  if (local_c == (undefined4 *)0x0) {
    pbVar10 = (byte *)0x0;
  }
  FUN_004961f0(param_1,local_10,pbVar10);
  FUN_00494b00(param_1,puVar9);
  FUN_00494b00(param_1,puVar16);
  if ((*(char *)(param_1 + 0x38) != '\0') || (uVar8 = local_10, local_10 == 0xc0a)) {
    FUN_004961f0(param_1,7,(byte *)0x0);
    *(undefined1 *)(param_1 + 0x38) = 0;
    uVar8 = 7;
  }
  uVar15 = *(uint *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b20)(*(int *)(param_1 + 0xc));
  }
  return uVar15 & uVar8;
LAB_00464a92:
  local_c = local_20;
LAB_00464a98:
  puVar16 = local_8;
  if (local_10 == 0) goto LAB_00464aa1;
  goto LAB_00464a40;
}


/* FUN_004687f0 @ 004687f0  kind=lib  attributed-by=lib-string  size=214 */

char * __cdecl FUN_004687f0(int param_1)

{
  int iVar1;
  char *pcVar2;
  
  if (param_1 == 0) {
    return "out of memory";
  }
  iVar1 = *(int *)(param_1 + 0x44);
  if (((iVar1 != 0x4b771290) && (iVar1 != -0x5fd65969)) && (iVar1 != -0xfc486fa)) {
    FUN_004683f0(0x15,"API call with %s database connection pointer");
    FUN_004683f0(0x15,"misuse at line %d of [%.10s]");
    return "library routine called out of sequence";
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b18)(*(int *)(param_1 + 0xc));
  }
  if (*(char *)(param_1 + 0x38) == '\0') {
    pcVar2 = (char *)FUN_004ae680(*(int **)(param_1 + 0xd4),1);
    if (pcVar2 == (char *)0x0) {
      pcVar2 = FUN_004961c0(*(uint *)(param_1 + 0x2c));
    }
  }
  else {
    pcVar2 = "out of memory";
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b20)(*(int *)(param_1 + 0xc));
  }
  return pcVar2;
}


/* FUN_0046c340 @ 0046c340  kind=lib  attributed-by=lib-string  size=363 */

int * __cdecl FUN_0046c340(undefined4 *param_1)

{
  size_t _Size;
  int *piVar1;
  int *piVar2;
  int *piVar3;
  byte *pbVar4;
  int *_Dst;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  int iVar10;
  int iVar11;
  int local_c;
  
  piVar2 = (int *)*param_1;
  iVar7 = param_1[2];
  iVar10 = param_1[1];
  piVar3 = (int *)param_1[8];
  iVar5 = *(int *)(iVar10 + 0x18);
  iVar11 = 0;
  if (0 < iVar5) {
    pbVar4 = (byte *)(*(int *)(iVar10 + 0x20) + 0x10);
    do {
      if ((*(int *)(pbVar4 + -8) == *(int *)(iVar7 + 0x2c)) && ((*pbVar4 & 0x81) == 0)) {
        iVar11 = iVar11 + 1;
      }
      pbVar4 = pbVar4 + 0x28;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  local_c = 0;
  if (piVar3 != (int *)0x0) {
    iVar5 = *piVar3;
    iVar6 = 0;
    if (0 < iVar5) {
      puVar8 = (undefined4 *)piVar3[2];
      do {
        if ((*(char *)*puVar8 != -0x68) ||
           (*(int *)((char *)*puVar8 + 0x18) != *(int *)(iVar7 + 0x2c))) break;
        iVar6 = iVar6 + 1;
        puVar8 = puVar8 + 5;
      } while (iVar6 < iVar5);
    }
    local_c = 0;
    if (iVar6 == iVar5) {
      local_c = iVar5;
    }
  }
  _Size = iVar11 * 0x14 + 0x30 + local_c * 8;
  _Dst = FUN_00494b90(*piVar2,_Size);
  if (_Dst == (int *)0x0) {
    FUN_004962b0(piVar2,(byte *)"out of memory");
    return (int *)0x0;
  }
  memset(_Dst,0,_Size);
  *_Dst = iVar11;
  piVar2 = _Dst + 0xc + iVar11 * 3;
  _Dst[2] = local_c;
  _Dst[4] = (int)(piVar2 + local_c * 2);
  _Dst[1] = (int)(_Dst + 0xc);
  _Dst[3] = (int)piVar2;
  iVar5 = 0;
  if (0 < *(int *)(iVar10 + 0x18)) {
    pbVar4 = (byte *)(*(int *)(iVar10 + 0x20) + 0x10);
    pbVar9 = (byte *)(_Dst + 0xd);
    do {
      if ((*(int *)(pbVar4 + -8) == *(int *)(iVar7 + 0x2c)) && ((*pbVar4 & 0x81) == 0)) {
        *(undefined4 *)(pbVar9 + -4) = *(undefined4 *)(pbVar4 + -4);
        *(int *)(pbVar9 + 4) = iVar5;
        *pbVar9 = *pbVar4;
        pbVar9 = pbVar9 + 0xc;
      }
      iVar5 = iVar5 + 1;
      pbVar4 = pbVar4 + 0x28;
    } while (iVar5 < *(int *)(iVar10 + 0x18));
  }
  iVar7 = 0;
  if (0 < local_c) {
    iVar10 = 0;
    do {
      iVar7 = iVar7 + 1;
      piVar1 = (int *)(piVar3[2] + iVar10);
      iVar10 = iVar10 + 0x14;
      piVar2[iVar7 * 2 + -2] = (int)*(short *)(*piVar1 + 0x1c);
      *(undefined1 *)(piVar2 + iVar7 * 2 + -1) = *(undefined1 *)(piVar3[2] + -8 + iVar10);
    } while (iVar7 < local_c);
  }
  return _Dst;
}


/* FUN_00476240 @ 00476240  kind=lib  attributed-by=lib-string  size=143 */

void __cdecl FUN_00476240(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *param_1;
  if (*(char *)(iVar1 + 0x38) == '\0') {
    if (((*(uint *)(iVar1 + 0x18) & 0x8000) == 0) &&
       (FUN_004a9a30((int *)param_1[1],iVar1,(byte *)"malformed database schema (%s)"), param_3 != 0
       )) {
      uVar2 = FUN_004a0240(iVar1,*(undefined4 **)param_1[1],(byte *)"%s - %s");
      *(undefined4 *)param_1[1] = uVar2;
    }
    if (*(char *)(iVar1 + 0x38) == '\0') {
      FUN_004683f0(0xb,"database corruption at line %d of [%.10s]");
      param_1[3] = 0xb;
      return;
    }
  }
  param_1[3] = 7;
  return;
}


/* FUN_004765c0 @ 004765c0  kind=lib  attributed-by=lib-string  size=580 */

char * __cdecl FUN_004765c0(int param_1,undefined4 *param_2)

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
  int local_18;
  byte *local_14;
  char *local_10;
  byte *local_c;
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
    local_c = &DAT_0055b524;
    local_14 = &DAT_0056f6a0;
  }
  else {
    local_c = &DAT_0056f6a8;
    local_14 = &DAT_0056f6ac;
  }
  iVar7 = iVar10 * 6 + 0x23 + iVar7;
  if (iVar7 - 1U < 0x7ffffeff) {
    if (DAT_00582ac8 == 0) {
      pcVar6 = (char *)(*DAT_00582ae8)(iVar7);
    }
    else {
      if (DAT_00583f40 != 0) {
        (*DAT_00582b18)(DAT_00583f40);
      }
      FUN_00480650(iVar7,(int *)&local_10);
      pcVar6 = local_10;
      if (DAT_00583f40 != 0) {
        (*DAT_00582b20)(DAT_00583f40);
        pcVar6 = local_10;
      }
    }
    if (pcVar6 != (char *)0x0) {
      FUN_00466a80(iVar7,pcVar6,(byte *)"CREATE TABLE ");
      cVar1 = *pcVar6;
      pcVar4 = pcVar6;
      while (cVar1 != '\0') {
        pcVar4 = pcVar4 + 1;
        cVar1 = *pcVar4;
      }
      local_8 = (int)pcVar4 - (int)pcVar6 & 0x3fffffff;
      FUN_0047e150((int)pcVar6,(int *)&local_8,(byte *)*param_2);
      pcVar6[local_8] = '(';
      local_10 = (char *)param_2[1];
      iVar11 = local_8 + 1;
      local_18 = 0;
      if (0 < *(short *)((int)param_2 + 0x26)) {
        do {
          pcVar4 = pcVar6 + iVar11;
          FUN_00466a80(iVar7 - iVar11,pcVar4,local_c);
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
          FUN_0047e150((int)pcVar6,(int *)&local_8,*(byte **)local_10);
          uVar2 = local_8;
          pcVar4 = *(char **)(&DAT_00569744 + pcVar9[0x15] * 4);
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
      FUN_00466a80(iVar7 - iVar11,pcVar6 + iVar11,&DAT_0056de50);
      return pcVar6;
    }
  }
  *(undefined1 *)(param_1 + 0x38) = 1;
  return (char *)0x0;
}


/* FUN_00476a70 @ 00476a70  kind=lib  attributed-by=lib-string  size=270 */

void __cdecl FUN_00476a70(int *param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  piVar2 = (int *)param_1[2];
  if (piVar2 == (int *)0x0) {
    piVar2 = FUN_004af150(*param_1);
    param_1[2] = (int)piVar2;
    if (piVar2 != (int *)0x0) {
      FUN_004ae760(piVar2,0x94);
    }
  }
  if (*(char *)((int)param_1 + 0x13) == '\0') {
    param_1[0x13] = param_1[0x13] + 1;
    iVar5 = param_1[0x13];
  }
  else {
    bVar1 = *(char *)((int)param_1 + 0x13) - 1;
    *(byte *)((int)param_1 + 0x13) = bVar1;
    iVar5 = param_1[bVar1 + 7];
  }
  iVar4 = piVar2[7];
  if ((iVar4 < piVar2[8]) || (iVar3 = FUN_0047de10(piVar2), iVar3 == 0)) {
    piVar2[7] = piVar2[7] + 1;
    iVar3 = piVar2[1];
    *(undefined4 *)(iVar3 + 4 + iVar4 * 0x14) = param_2;
    *(undefined2 *)(iVar3 + iVar4 * 0x14) = 0x66;
    *(undefined1 *)(iVar3 + 3 + iVar4 * 0x14) = 0;
    *(int *)(iVar3 + 8 + iVar4 * 0x14) = iVar5;
    *(undefined4 *)(iVar3 + 0xc + iVar4 * 0x14) = param_3;
    *(undefined4 *)(iVar3 + 0x10 + iVar4 * 0x14) = 0;
  }
  piVar2 = param_1;
  if ((int *)param_1[0x6c] != (int *)0x0) {
    piVar2 = (int *)param_1[0x6c];
  }
  *(undefined1 *)(piVar2 + 6) = 1;
  FUN_004a0da0(param_1,(byte *)"UPDATE %Q.%s SET rootpage=%d WHERE #%d AND rootpage=#%d");
  if ((iVar5 != 0) && (*(byte *)((int)param_1 + 0x13) < 8)) {
    iVar4 = 0;
    piVar2 = param_1 + 0x19;
    while (piVar2[4] != iVar5) {
      iVar4 = iVar4 + 1;
      piVar2 = piVar2 + 6;
      if (9 < iVar4) {
        param_1[*(byte *)((int)param_1 + 0x13) + 7] = iVar5;
        *(char *)((int)param_1 + 0x13) = *(char *)((int)param_1 + 0x13) + '\x01';
        return;
      }
    }
    *(undefined1 *)(piVar2 + 2) = 1;
  }
  return;
}


/* FUN_00479910 @ 00479910  kind=lib  attributed-by=lib-string  size=218 */

undefined4 __cdecl FUN_00479910(int param_1,int param_2,byte *param_3)

{
  int iVar1;
  int *_Dst;
  int iVar2;
  
  iVar1 = FUN_00499540(param_2,param_3);
  if (iVar1 == 1) {
    _Dst = FUN_00494b90(param_1,0x230);
    if (_Dst == (int *)0x0) {
      FUN_004961f0(param_1,7,(byte *)"out of memory");
    }
    else {
      memset(_Dst,0,0x230);
      *_Dst = param_2;
      iVar2 = FUN_004a11c0(_Dst);
      if (iVar2 != 0) {
        FUN_004961f0(param_1,_Dst[3],&DAT_0056de50);
      }
      FUN_00494b00(param_1,(undefined4 *)_Dst[1]);
      FUN_00494b00(param_1,_Dst);
      if (iVar2 == 0) goto LAB_0047999e;
    }
    return 0;
  }
  if (iVar1 < 0) {
    FUN_004961f0(param_1,1,(byte *)"unknown database %s");
    return 0;
  }
LAB_0047999e:
  return *(undefined4 *)(*(int *)(param_2 + 0x10) + 4 + iVar1 * 0x10);
}


/* FUN_00479db0 @ 00479db0  kind=lib  attributed-by=lib-string  size=2539 */

uint * __cdecl FUN_00479db0(int *param_1,int param_2,int *param_3,int param_4)

{
  char cVar1;
  undefined1 uVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  short *psVar10;
  uint *puVar11;
  uint *puVar12;
  int *piVar13;
  size_t _Size;
  char *pcVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
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
  undefined4 *local_34;
  int local_30;
  char *local_2c;
  uint *local_28;
  uint local_24;
  uint *local_20;
  uint *local_1c;
  uint *local_18;
  uint local_14;
  uint *local_10;
  uint *local_c;
  uint *local_8;
  
  iVar4 = *param_1;
  iVar6 = (param_4 != 0) + 7;
  local_24 = (uint)*(byte *)((param_4 != 0) + 0x19 + (int)param_3);
  local_28 = (uint *)param_3[iVar6];
  local_40 = param_3 + iVar6;
  if (local_24 == 0) {
    return local_28;
  }
  if (local_28 != (uint *)0x0) {
    return local_28;
  }
  local_20 = local_28;
  local_1c = local_28;
  local_18 = local_28;
  local_10 = local_28;
  local_c = local_28;
  local_8 = local_28;
  iVar6 = FUN_0047f9a0(param_1,param_2,(int)param_3,(int *)&local_28,&local_1c);
  if (iVar6 != 0) {
    return (uint *)0x0;
  }
  local_30 = 0;
  if (0 < param_3[5]) {
    local_50 = &DAT_0056e9a4;
    local_4c = 3;
    local_58 = &DAT_0056e9a0;
    local_54 = 3;
    do {
      if (local_1c == (uint *)0x0) {
        uVar15 = param_3[9];
      }
      else {
        uVar15 = local_1c[local_30];
      }
      if (local_28 == (uint *)0x0) {
        local_48 = "oid";
      }
      else {
        local_48 = *(char **)(*(int *)(param_2 + 4) + *(int *)(local_28[1] + local_30 * 4) * 0x18);
      }
      local_3c = (short *)(uVar15 * 0x18);
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
      puVar8 = FUN_00496510(*param_1,0x1a,&local_60,1);
      local_38 = (char *)puVar8;
      FUN_00496a30(*param_1,(int)puVar8,(undefined4 *)0x0,(undefined4 *)0x0);
      if ((puVar8 != (undefined4 *)0x0) && (*(int *)(*param_1 + 0x5c) < (int)puVar8[5])) {
        FUN_004962b0(param_1,(byte *)"Expression tree is too large (maximum depth %d)");
      }
      puVar8 = FUN_00496510(*param_1,0x1a,&local_48,1);
      local_34 = puVar8;
      FUN_00496a30(*param_1,(int)puVar8,(undefined4 *)0x0,(undefined4 *)0x0);
      if ((puVar8 != (undefined4 *)0x0) && (*(int *)(*param_1 + 0x5c) < (int)puVar8[5])) {
        FUN_004962b0(param_1,(byte *)"Expression tree is too large (maximum depth %d)");
      }
      puVar8 = FUN_00496510(*param_1,0x1a,&local_50,1);
      FUN_00496a30(*param_1,(int)puVar8,(undefined4 *)0x0,(undefined4 *)0x0);
      if ((puVar8 != (undefined4 *)0x0) && (*(int *)(*param_1 + 0x5c) < (int)puVar8[5])) {
        FUN_004962b0(param_1,(byte *)"Expression tree is too large (maximum depth %d)");
      }
      puVar9 = FUN_00494b90(*param_1,0x2c);
      if (puVar9 != (undefined4 *)0x0) {
        memset(puVar9,0,0x2c);
        *(undefined1 *)puVar9 = 0x76;
        *(undefined2 *)((int)puVar9 + 0x1e) = 0xffff;
        puVar9[5] = 1;
      }
      FUN_00496a30(*param_1,(int)puVar9,puVar8,local_34);
      if ((puVar9 != (undefined4 *)0x0) && (*(int *)(*param_1 + 0x5c) < (int)puVar9[5])) {
        FUN_004962b0(param_1,(byte *)"Expression tree is too large (maximum depth %d)");
      }
      pcVar7 = (char *)FUN_00494b90(*param_1,0x2c);
      if (pcVar7 != (char *)0x0) {
        memset(pcVar7,0,0x2c);
        *pcVar7 = 'L';
        pcVar7[0x1e] = -1;
        pcVar7[0x1f] = -1;
        pcVar7[0x14] = '\x01';
        pcVar7[0x15] = '\0';
        pcVar7[0x16] = '\0';
        pcVar7[0x17] = '\0';
      }
      FUN_00496a30(*param_1,(int)pcVar7,puVar9,(undefined4 *)local_38);
      if ((pcVar7 != (char *)0x0) && (*(int *)(*param_1 + 0x5c) < *(int *)(pcVar7 + 0x14))) {
        FUN_004962b0(param_1,(byte *)"Expression tree is too large (maximum depth %d)");
      }
      local_c = (uint *)FUN_004966d0(iVar4,(char *)local_c,pcVar7);
      if (param_4 != 0) {
        puVar8 = FUN_00496510(*param_1,0x1a,&local_48,1);
        local_38 = (char *)puVar8;
        FUN_00496a30(*param_1,(int)puVar8,(undefined4 *)0x0,(undefined4 *)0x0);
        if ((puVar8 != (undefined4 *)0x0) && (*(int *)(*param_1 + 0x5c) < (int)puVar8[5])) {
          FUN_004962b0(param_1,(byte *)"Expression tree is too large (maximum depth %d)");
        }
        puVar8 = FUN_00496510(*param_1,0x1a,&local_58,1);
        FUN_00496a30(*param_1,(int)puVar8,(undefined4 *)0x0,(undefined4 *)0x0);
        if ((puVar8 != (undefined4 *)0x0) && (*(int *)(*param_1 + 0x5c) < (int)puVar8[5])) {
          FUN_004962b0(param_1,(byte *)"Expression tree is too large (maximum depth %d)");
        }
        puVar9 = FUN_00494b90(*param_1,0x2c);
        local_34 = puVar9;
        if (puVar9 != (undefined4 *)0x0) {
          memset(puVar9,0,0x2c);
          *(undefined1 *)puVar9 = 0x76;
          *(undefined2 *)((int)puVar9 + 0x1e) = 0xffff;
          puVar9[5] = 1;
        }
        FUN_00496a30(*param_1,(int)puVar9,puVar8,(undefined4 *)local_38);
        if ((puVar9 != (undefined4 *)0x0) && (*(int *)(*param_1 + 0x5c) < (int)puVar9[5])) {
          FUN_004962b0(param_1,(byte *)"Expression tree is too large (maximum depth %d)");
        }
        puVar8 = FUN_00496510(*param_1,0x1a,&local_48,1);
        local_38 = (char *)puVar8;
        FUN_00496a30(*param_1,(int)puVar8,(undefined4 *)0x0,(undefined4 *)0x0);
        if ((puVar8 != (undefined4 *)0x0) && (*(int *)(*param_1 + 0x5c) < (int)puVar8[5])) {
          FUN_004962b0(param_1,(byte *)"Expression tree is too large (maximum depth %d)");
        }
        puVar8 = FUN_00496510(*param_1,0x1a,&local_50,1);
        FUN_00496a30(*param_1,(int)puVar8,(undefined4 *)0x0,(undefined4 *)0x0);
        if ((puVar8 != (undefined4 *)0x0) && (*(int *)(*param_1 + 0x5c) < (int)puVar8[5])) {
          FUN_004962b0(param_1,(byte *)"Expression tree is too large (maximum depth %d)");
        }
        puVar9 = FUN_00494b90(*param_1,0x2c);
        if (puVar9 != (undefined4 *)0x0) {
          memset(puVar9,0,0x2c);
          *(undefined1 *)puVar9 = 0x76;
          *(undefined2 *)((int)puVar9 + 0x1e) = 0xffff;
          puVar9[5] = 1;
        }
        FUN_00496a30(*param_1,(int)puVar9,puVar8,(undefined4 *)local_38);
        if ((puVar9 != (undefined4 *)0x0) && (*(int *)(*param_1 + 0x5c) < (int)puVar9[5])) {
          FUN_004962b0(param_1,(byte *)"Expression tree is too large (maximum depth %d)");
        }
        pcVar7 = (char *)FUN_00494b90(*param_1,0x2c);
        if (pcVar7 != (char *)0x0) {
          memset(pcVar7,0,0x2c);
          *pcVar7 = 'F';
          pcVar7[0x1e] = -1;
          pcVar7[0x1f] = -1;
          pcVar7[0x14] = '\x01';
          pcVar7[0x15] = '\0';
          pcVar7[0x16] = '\0';
          pcVar7[0x17] = '\0';
        }
        FUN_00496a30(*param_1,(int)pcVar7,puVar9,local_34);
        if ((pcVar7 != (char *)0x0) && (*(int *)(*param_1 + 0x5c) < *(int *)(pcVar7 + 0x14))) {
          FUN_004962b0(param_1,(byte *)"Expression tree is too large (maximum depth %d)");
        }
        local_10 = (uint *)FUN_004966d0(iVar4,(char *)local_10,pcVar7);
      }
      if (local_24 != 6) {
        if (local_24 == 9) {
          if (param_4 == 0) goto LAB_0047a43c;
          puVar8 = FUN_00496510(*param_1,0x1a,&local_48,1);
          local_38 = (char *)puVar8;
          FUN_00496a30(*param_1,(int)puVar8,(undefined4 *)0x0,(undefined4 *)0x0);
          if ((puVar8 != (undefined4 *)0x0) && (*(int *)(*param_1 + 0x5c) < (int)puVar8[5])) {
            FUN_004962b0(param_1,(byte *)"Expression tree is too large (maximum depth %d)");
          }
          puVar9 = FUN_00496510(*param_1,0x1a,&local_58,1);
          FUN_00496a30(*param_1,(int)puVar9,(undefined4 *)0x0,(undefined4 *)0x0);
          if ((puVar9 != (undefined4 *)0x0) && (*(int *)(*param_1 + 0x5c) < (int)puVar9[5])) {
            FUN_004962b0(param_1,(byte *)"Expression tree is too large (maximum depth %d)");
          }
          puVar8 = FUN_00494b90(*param_1,0x2c);
          pcVar7 = local_38;
          if (puVar8 != (undefined4 *)0x0) {
            memset(puVar8,0,0x2c);
            *(undefined1 *)puVar8 = 0x76;
            *(undefined2 *)((int)puVar8 + 0x1e) = 0xffff;
            puVar8[5] = 1;
            pcVar7 = local_38;
          }
LAB_0047a3bb:
          FUN_00496a30(*param_1,(int)puVar8,puVar9,(undefined4 *)pcVar7);
          if ((puVar8 != (undefined4 *)0x0) && (*(int *)(*param_1 + 0x5c) < (int)puVar8[5])) {
            FUN_004962b0(param_1,(byte *)"Expression tree is too large (maximum depth %d)");
          }
        }
        else {
          if ((local_24 != 8) ||
             (puVar8 = *(undefined4 **)(*(int *)(*param_3 + 4) + 4 + (int)local_3c),
             puVar8 == (undefined4 *)0x0)) {
            puVar8 = FUN_00494b90(*param_1,0x2c);
            if (puVar8 != (undefined4 *)0x0) {
              memset(puVar8,0,0x2c);
              *(undefined1 *)puVar8 = 0x62;
              puVar8[5] = 1;
              *(undefined2 *)((int)puVar8 + 0x1e) = 0xffff;
            }
            puVar9 = (undefined4 *)0x0;
            pcVar7 = (char *)(undefined4 *)0x0;
            goto LAB_0047a3bb;
          }
          puVar8 = FUN_00478bb0(iVar4,puVar8,0,(int *)0x0);
        }
        local_18 = FUN_00498f00(param_1,local_18,puVar8);
        if (local_18 != (uint *)0x0) {
          uVar15 = *local_18;
          uVar5 = local_18[2];
          if (local_2c == (char *)0x0) {
            puVar8 = (undefined4 *)0x0;
          }
          else {
            puVar8 = FUN_00494b90(*param_1,local_14 + 1);
            if (puVar8 != (undefined4 *)0x0) {
              memcpy(puVar8,local_2c,local_14);
              *(undefined1 *)((int)puVar8 + local_14) = 0;
            }
          }
          *(undefined4 **)(uVar5 + uVar15 * 0x14 + -0x10) = puVar8;
        }
      }
LAB_0047a43c:
      local_30 = local_30 + 1;
    } while (local_30 < param_3[5]);
  }
  FUN_00494b00(iVar4,local_1c);
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
  if (local_24 != 6) goto LAB_0047a5da;
  pcVar7 = "foreign key constraint failed";
  do {
    pcVar14 = pcVar7;
    pcVar7 = pcVar14 + 1;
  } while (*pcVar7 != '\0');
  uVar15 = (uint)(pcVar14 + -0x56e53b) & 0x3fffffff;
  local_3c = (short *)(uVar15 + 0x2d);
  local_60 = local_38;
  local_5c = _Size;
  puVar8 = FUN_00494b90(iVar4,(int)local_3c);
  if (puVar8 != (undefined4 *)0x0) {
    memset(puVar8,0,(size_t)local_3c);
    *(undefined2 *)((int)puVar8 + 0x1e) = 0xffff;
    *(undefined1 *)puVar8 = 0x38;
    if (uVar15 == 0xffffffff) {
      *(ushort *)((int)puVar8 + 2) = *(ushort *)((int)puVar8 + 2) | 0x400;
      puVar8[1] = 0;
    }
    else {
      puVar8[1] = puVar8 + 0xb;
      if (uVar15 != 0) {
        memcpy(puVar8 + 0xb,"foreign key constraint failed",uVar15);
      }
      *(undefined1 *)(uVar15 + puVar8[1]) = 0;
    }
    puVar8[5] = 1;
    *(undefined1 *)((int)puVar8 + 1) = 2;
  }
  psVar10 = (short *)FUN_00494b90(iVar4,0x50);
  if (psVar10 == (short *)0x0) {
LAB_0047a5a6:
    psVar10 = (short *)0x0;
  }
  else {
    memset(psVar10,0,0x50);
    psVar10[1] = 1;
    psVar10 = FUN_004a9fc0(iVar4,psVar10,1,(int)*psVar10);
    local_3c = psVar10;
    if (*(char *)(iVar4 + 0x38) != '\0') {
      FUN_004a9cb0(iVar4,psVar10);
      goto LAB_0047a5a6;
    }
    sVar3 = *psVar10;
    pcVar7 = FUN_004a0d40(iVar4,&local_60);
    *(char **)(psVar10 + sVar3 * 0x24 + -0x1c) = pcVar7;
    pcVar7 = FUN_004a0d40(iVar4,(undefined4 *)0x0);
    *(char **)(psVar10 + sVar3 * 0x24 + -0x1e) = pcVar7;
    psVar10 = local_3c;
  }
  uVar20 = 0;
  uVar19 = 0;
  iVar6 = 0;
  uVar18 = 0;
  uVar17 = 0;
  uVar16 = 0;
  puVar12 = local_c;
  puVar11 = FUN_00498f00(param_1,(uint *)0x0,puVar8);
  local_20 = (uint *)FUN_004a97d0(param_1,(int *)puVar11,(undefined4 *)psVar10,puVar12,uVar16,uVar17
                                  ,uVar18,iVar6,uVar19,uVar20);
  local_c = (uint *)0x0;
LAB_0047a5da:
  uVar2 = *(undefined1 *)(iVar4 + 0xea);
  *(undefined1 *)(iVar4 + 0xea) = 0;
  puVar12 = FUN_00494b90(iVar4,_Size + 0x4d);
  if ((puVar12 != (uint *)0x0) && (memset(puVar12,0,_Size + 0x4d), puVar12 != (uint *)0x0)) {
    local_8 = puVar12 + 9;
    puVar12[7] = (uint)local_8;
    puVar12[0xc] = (uint)(puVar12 + 0x13);
    puVar12[0xd] = _Size;
    memcpy(puVar12 + 0x13,local_38,_Size);
    puVar8 = FUN_00478bb0(iVar4,local_c,1,(int *)0x0);
    local_8[5] = (uint)puVar8;
    piVar13 = FUN_00499140(iVar4,(int *)local_18,1);
    local_8[6] = (uint)piVar13;
    puVar8 = FUN_004a9680(iVar4,local_20,1);
    local_8[2] = (uint)puVar8;
    if (local_10 != (uint *)0x0) {
      puVar11 = FUN_00494b90(*param_1,0x2c);
      if (puVar11 != (uint *)0x0) {
        memset(puVar11,0,0x2c);
        *(char *)puVar11 = '\x13';
        ((char *)((int)puVar11 + 0x1e))[0] = -1;
        ((char *)((int)puVar11 + 0x1e))[1] = -1;
        puVar11[5] = 1;
      }
      FUN_00496a30(*param_1,(int)puVar11,local_10,(undefined4 *)0x0);
      if ((puVar11 != (uint *)0x0) && (*(int *)(*param_1 + 0x5c) < (int)puVar11[5])) {
        FUN_004962b0(param_1,(byte *)"Expression tree is too large (maximum depth %d)");
      }
      local_10 = puVar11;
      puVar8 = FUN_00478bb0(iVar4,puVar11,1,(int *)0x0);
      puVar12[3] = (uint)puVar8;
    }
  }
  *(undefined1 *)(iVar4 + 0xea) = uVar2;
  FUN_00498790(iVar4,local_c);
  FUN_00498790(iVar4,local_10);
  FUN_00499060(iVar4,(int *)local_18);
  puVar11 = local_20;
  if (local_20 != (uint *)0x0) {
    FUN_00472d10(iVar4,local_20);
    FUN_00494b00(iVar4,puVar11);
  }
  if (*(char *)(iVar4 + 0x38) != '\x01') {
    if (local_24 == 6) {
      *(char *)local_8 = 't';
    }
    else if ((local_24 == 9) && (param_4 == 0)) {
      *(char *)local_8 = 'j';
    }
    else {
      *(char *)local_8 = 'k';
    }
    local_8[1] = (uint)puVar12;
    puVar12[5] = *(uint *)(param_2 + 0x40);
    puVar12[6] = *(uint *)(param_2 + 0x40);
    *local_40 = (int)puVar12;
    *(char *)(puVar12 + 2) = (param_4 != 0) + 'j';
    return puVar12;
  }
  FUN_0047b540(iVar4,puVar12);
  return (uint *)0x0;
}


/* FUN_0047a7a0 @ 0047a7a0  kind=lib  attributed-by=lib-string  size=2072 */

void __cdecl
FUN_0047a7a0(int *param_1,int param_2,int *param_3,int param_4,int *param_5,int *param_6,int param_7
            ,int param_8,int param_9)

{
  undefined2 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  byte bVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 *puVar16;
  uint uVar17;
  void *extraout_EDX;
  int iVar18;
  int *piVar19;
  int local_8;
  
  piVar19 = param_1;
  piVar6 = (int *)param_1[2];
  if (piVar6 == (int *)0x0) {
    piVar6 = FUN_004af150(*param_1);
    param_1[2] = (int)piVar6;
    if (piVar6 != (int *)0x0) {
      FUN_004ae760(piVar6,0x94);
    }
  }
  iVar7 = param_1[0x12] + -1;
  iVar8 = FUN_004b6b80(piVar6);
  if (param_8 < 0) {
    FUN_004ae830(piVar6,0x76,(uint)*(byte *)(param_5 + 6),iVar8);
  }
  iVar18 = 0;
  if (0 < param_5[5]) {
    do {
      iVar10 = param_6[iVar18];
      iVar11 = piVar6[7];
      if ((iVar11 < piVar6[8]) || (iVar9 = FUN_0047de10(piVar6), iVar9 == 0)) {
        piVar6[7] = piVar6[7] + 1;
        iVar9 = piVar6[1];
        *(int *)(iVar9 + 4 + iVar11 * 0x14) = iVar10 + 1 + param_7;
        *(undefined2 *)(iVar9 + iVar11 * 0x14) = 0x49;
        *(undefined1 *)(iVar9 + 3 + iVar11 * 0x14) = 0;
        *(int *)(iVar9 + 8 + iVar11 * 0x14) = iVar8;
        *(undefined4 *)(iVar9 + 0xc + iVar11 * 0x14) = 0;
        *(undefined4 *)(iVar9 + 0x10 + iVar11 * 0x14) = 0;
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
        bVar5 = *(char *)((int)param_1 + 0x13) - 1;
        *(byte *)((int)param_1 + 0x13) = bVar5;
        iVar18 = param_1[bVar5 + 7];
      }
      iVar10 = *param_6;
      iVar11 = piVar6[7];
      if ((iVar11 < piVar6[8]) || (iVar9 = FUN_0047de10(piVar6), iVar9 == 0)) {
        piVar6[7] = piVar6[7] + 1;
        iVar9 = piVar6[1];
        *(undefined2 *)(iVar9 + iVar11 * 0x14) = 0xf;
        *(undefined1 *)(iVar9 + 3 + iVar11 * 0x14) = 0;
        *(int *)(iVar9 + 4 + iVar11 * 0x14) = iVar10 + param_7 + 1;
        *(int *)(iVar9 + 8 + iVar11 * 0x14) = iVar18;
        *(undefined4 *)(iVar9 + 0xc + iVar11 * 0x14) = 0;
        *(undefined4 *)(iVar9 + 0x10 + iVar11 * 0x14) = 0;
      }
      param_1 = (int *)piVar6[7];
      if (((int)param_1 < piVar6[8]) || (iVar10 = FUN_0047de10(piVar6), iVar10 == 0)) {
        iVar10 = piVar6[1];
        piVar6[7] = piVar6[7] + 1;
        *(undefined2 *)(iVar10 + (int)param_1 * 0x14) = 0x15;
        *(undefined1 *)(iVar10 + 3 + (int)param_1 * 0x14) = 0;
        *(int *)(iVar10 + 4 + (int)param_1 * 0x14) = iVar18;
        *(undefined4 *)(iVar10 + 8 + (int)param_1 * 0x14) = 0;
        *(undefined4 *)(iVar10 + 0xc + (int)param_1 * 0x14) = 0;
        *(undefined4 *)(iVar10 + 0x10 + (int)param_1 * 0x14) = 0;
      }
      else {
        param_1 = (int *)0x1;
      }
      if ((param_3 == (int *)*param_5) && (param_8 == 1)) {
        FUN_004ae890(piVar6,0x4c,param_7,iVar8,iVar18);
      }
      FUN_004a0f40(piVar19,iVar7,param_2,param_3,0x27);
      iVar10 = piVar6[7];
      if ((iVar10 < piVar6[8]) || (iVar11 = FUN_0047de10(piVar6), iVar11 == 0)) {
        piVar6[7] = piVar6[7] + 1;
        iVar11 = piVar6[1];
        *(undefined2 *)(iVar11 + iVar10 * 0x14) = 0x36;
        *(undefined1 *)(iVar11 + 3 + iVar10 * 0x14) = 0;
        *(int *)(iVar11 + 4 + iVar10 * 0x14) = iVar7;
        *(undefined4 *)(iVar11 + 8 + iVar10 * 0x14) = 0;
        *(int *)(iVar11 + 0xc + iVar10 * 0x14) = iVar18;
        *(undefined4 *)(iVar11 + 0x10 + iVar10 * 0x14) = 0;
      }
      iVar10 = piVar6[7];
      if ((iVar10 < piVar6[8]) || (iVar11 = FUN_0047de10(piVar6), iVar11 == 0)) {
        piVar6[7] = piVar6[7] + 1;
        iVar11 = piVar6[1];
        *(undefined2 *)(iVar11 + iVar10 * 0x14) = 1;
        *(undefined1 *)(iVar11 + 3 + iVar10 * 0x14) = 0;
        *(undefined4 *)(iVar11 + 4 + iVar10 * 0x14) = 0;
        *(int *)(iVar11 + 8 + iVar10 * 0x14) = iVar8;
        *(undefined4 *)(iVar11 + 0xc + iVar10 * 0x14) = 0;
        *(undefined4 *)(iVar11 + 0x10 + iVar10 * 0x14) = 0;
      }
      uVar3 = piVar6[7];
      uVar17 = uVar3 - 2;
      if ((-1 < (int)uVar17) && (uVar17 < uVar3)) {
        *(uint *)(piVar6[1] + 8 + uVar17 * 0x14) = uVar3;
      }
      if ((-1 < (int)param_1) && (param_1 < (int *)piVar6[7])) {
        *(int **)(piVar6[1] + 8 + (int)param_1 * 0x14) = (int *)piVar6[7];
      }
      if ((iVar18 != 0) && (*(byte *)((int)piVar19 + 0x13) < 8)) {
        iVar10 = 0;
        piVar12 = piVar19 + 0x19;
        do {
          if (piVar12[4] == iVar18) {
            *(undefined1 *)(piVar12 + 2) = 1;
            goto LAB_0047ae6c;
          }
          iVar10 = iVar10 + 1;
          piVar12 = piVar12 + 6;
        } while (iVar10 < 10);
        piVar19[*(byte *)((int)piVar19 + 0x13) + 7] = iVar18;
        *(char *)((int)piVar19 + 0x13) = *(char *)((int)piVar19 + 0x13) + '\x01';
      }
    }
    else {
      iVar18 = param_5[5];
      local_8 = param_1[0x10];
      if (param_1[0xf] < iVar18) {
        local_8 = param_1[0x13] + 1;
        param_1[0x13] = param_1[0x13] + iVar18;
      }
      else {
        param_1[0x10] = local_8 + iVar18;
        param_1[0xf] = param_1[0xf] - iVar18;
      }
      if (*(char *)((int)param_1 + 0x13) == '\0') {
        param_1[0x13] = param_1[0x13] + 1;
        iVar10 = param_1[0x13];
      }
      else {
        bVar5 = *(char *)((int)param_1 + 0x13) - 1;
        *(byte *)((int)param_1 + 0x13) = bVar5;
        iVar10 = param_1[bVar5 + 7];
      }
      piVar12 = FUN_0049dbf0(param_1,param_4);
      uVar4 = *(undefined4 *)(param_4 + 0x28);
      iVar11 = piVar6[7];
      if ((iVar11 < piVar6[8]) || (iVar9 = FUN_0047de10(piVar6), iVar9 == 0)) {
        piVar6[7] = piVar6[7] + 1;
        puVar1 = (undefined2 *)(piVar6[1] + iVar11 * 0x14);
        *(int *)(puVar1 + 2) = iVar7;
        *(undefined4 *)(puVar1 + 4) = uVar4;
        *puVar1 = 0x27;
        *(undefined1 *)((int)puVar1 + 3) = 0;
        *(int *)(puVar1 + 6) = param_2;
        *(undefined4 *)(puVar1 + 8) = 0;
      }
      iVar11 = piVar6[1];
      iVar9 = *piVar6;
      if ((iVar11 == 0) || (*(char *)(iVar9 + 0x38) != '\0')) {
        FUN_0047bc80(iVar9,0xfffffff0,piVar12);
      }
      else {
        iVar2 = iVar11 + (piVar6[7] + -1) * 0x14;
        FUN_0047bc80(iVar9,(int)*(char *)(iVar2 + 1),
                     *(int **)(iVar11 + 0x10 + (piVar6[7] + -1) * 0x14));
        *(undefined4 *)(iVar2 + 0x10) = 0;
        if (piVar12 == (int *)0x0) {
          *(undefined4 *)(iVar2 + 0x10) = 0;
          *(undefined1 *)(iVar2 + 1) = 0;
        }
        else {
          *(int **)(iVar2 + 0x10) = piVar12;
          *(undefined1 *)(iVar2 + 1) = 0xfa;
        }
      }
      iVar11 = 0;
      if (0 < iVar18) {
        do {
          iVar9 = param_6[iVar11];
          iVar2 = piVar6[7];
          if ((iVar2 < piVar6[8]) || (iVar13 = FUN_0047de10(piVar6), iVar13 == 0)) {
            piVar6[7] = piVar6[7] + 1;
            iVar13 = piVar6[1];
            *(undefined2 *)(iVar13 + iVar2 * 0x14) = 0xe;
            iVar13 = iVar13 + iVar2 * 0x14;
            *(int *)(iVar13 + 4) = iVar9 + 1 + param_7;
            *(undefined1 *)(iVar13 + 3) = 0;
            *(int *)(iVar13 + 8) = local_8 + iVar11;
            *(undefined4 *)(iVar13 + 0xc) = 0;
            *(undefined4 *)(iVar13 + 0x10) = 0;
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < iVar18);
      }
      if ((param_3 == (int *)*param_5) && (param_8 == 1)) {
        iVar11 = piVar6[7];
        iVar9 = 0;
        if (0 < iVar18) {
          do {
            iVar2 = param_6[iVar9];
            iVar13 = *(int *)(*(int *)(param_4 + 4) + iVar9 * 4);
            iVar14 = param_7 + 1 + iVar13;
            if (iVar13 == (short)param_3[9]) {
              iVar14 = param_7;
            }
            iVar13 = piVar6[7];
            if ((iVar13 < piVar6[8]) || (iVar15 = FUN_0047de10(piVar6), iVar15 == 0)) {
              piVar6[7] = piVar6[7] + 1;
              iVar15 = piVar6[1];
              *(int *)(iVar15 + 4 + iVar13 * 0x14) = iVar2 + 1 + param_7;
              *(int *)(iVar15 + 8 + iVar13 * 0x14) = iVar11 + 1 + iVar18;
              *(undefined2 *)(iVar15 + iVar13 * 0x14) = 0x4b;
              *(undefined1 *)(iVar15 + 3 + iVar13 * 0x14) = 0;
              *(int *)(iVar15 + 0xc + iVar13 * 0x14) = iVar14;
              *(undefined4 *)(iVar15 + 0x10 + iVar13 * 0x14) = 0;
            }
            if (piVar6[1] != 0) {
              *(undefined1 *)(piVar6[1] + -0x11 + piVar6[7] * 0x14) = 8;
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < iVar18);
        }
        iVar11 = piVar6[7];
        if ((iVar11 < piVar6[8]) || (iVar9 = FUN_0047de10(piVar6), iVar9 == 0)) {
          iVar9 = piVar6[1];
          piVar6[7] = piVar6[7] + 1;
          *(undefined2 *)(iVar9 + iVar11 * 0x14) = 1;
          *(undefined1 *)(iVar9 + 3 + iVar11 * 0x14) = 0;
          *(undefined4 *)(iVar9 + 4 + iVar11 * 0x14) = 0;
          *(int *)(iVar9 + 8 + iVar11 * 0x14) = iVar8;
          *(undefined4 *)(iVar9 + 0xc + iVar11 * 0x14) = 0;
          *(undefined4 *)(iVar9 + 0x10 + iVar11 * 0x14) = 0;
        }
      }
      iVar11 = piVar6[7];
      if ((iVar11 < piVar6[8]) || (iVar9 = FUN_0047de10(piVar6), iVar9 == 0)) {
        iVar9 = piVar6[1];
        piVar6[7] = piVar6[7] + 1;
        *(int *)(iVar9 + 4 + iVar11 * 0x14) = local_8;
        *(int *)(iVar9 + 8 + iVar11 * 0x14) = iVar18;
        *(undefined2 *)(iVar9 + iVar11 * 0x14) = 0x1f;
        *(undefined1 *)(iVar9 + 3 + iVar11 * 0x14) = 0;
        *(int *)(iVar9 + 0xc + iVar11 * 0x14) = iVar10;
        *(undefined4 *)(iVar9 + 0x10 + iVar11 * 0x14) = 0;
      }
      piVar12 = (int *)FUN_0049db70(piVar6,param_4);
      iVar11 = piVar6[1];
      iVar9 = *piVar6;
      if ((iVar11 == 0) || (*(char *)(iVar9 + 0x38) != '\0')) {
        FUN_0047bc80(iVar9,0,piVar12);
      }
      else {
        iVar2 = iVar11 + (piVar6[7] + -1) * 0x14;
        FUN_0047bc80(iVar9,(int)*(char *)(iVar2 + 1),
                     *(int **)(iVar11 + 0x10 + (piVar6[7] + -1) * 0x14));
        *(undefined4 *)(iVar2 + 0x10) = 0;
        if (piVar12 == (int *)0x0) {
          *(undefined4 *)(iVar2 + 0x10) = 0;
          *(undefined1 *)(iVar2 + 1) = 0;
        }
        else {
          uVar17 = FUN_004aa9b0((char *)piVar12);
          puVar16 = FUN_00494e00(*piVar6,extraout_EDX,uVar17);
          *(undefined4 **)(iVar2 + 0x10) = puVar16;
          *(undefined1 *)(iVar2 + 1) = 0xff;
        }
      }
      FUN_004ae960(piVar6,0x34,iVar7,iVar8,iVar10,(int *)0x0);
      if ((iVar10 != 0) && (*(byte *)((int)param_1 + 0x13) < 8)) {
        iVar11 = 0;
        piVar12 = param_1 + 0x19;
        do {
          if (piVar12[4] == iVar10) {
            *(undefined1 *)(piVar12 + 2) = 1;
            goto LAB_0047ae12;
          }
          iVar11 = iVar11 + 1;
          piVar12 = piVar12 + 6;
        } while (iVar11 < 10);
        param_1[*(byte *)((int)param_1 + 0x13) + 7] = iVar10;
        *(char *)((int)param_1 + 0x13) = *(char *)((int)param_1 + 0x13) + '\x01';
      }
LAB_0047ae12:
      piVar12 = param_1 + 0x1d;
      iVar10 = 10;
      do {
        iVar11 = *piVar12;
        if ((local_8 <= iVar11) && (iVar11 <= iVar18 + local_8 + -1)) {
          if ((char)piVar12[-2] != '\0') {
            if (*(byte *)((int)param_1 + 0x13) < 8) {
              param_1[*(byte *)((int)param_1 + 0x13) + 7] = iVar11;
              *(char *)((int)param_1 + 0x13) = *(char *)((int)param_1 + 0x13) + '\x01';
            }
            *(undefined1 *)(piVar12 + -2) = 0;
          }
          *piVar12 = 0;
        }
        piVar12 = piVar12 + 6;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
      if (param_1[0xf] < iVar18) {
        param_1[0xf] = iVar18;
        param_1[0x10] = local_8;
      }
    }
  }
LAB_0047ae6c:
  if ((((char)param_5[6] == '\0') && (piVar19[0x6c] == 0)) &&
     (*(char *)((int)piVar19 + 0x17) == '\0')) {
    FUN_0049d510(piVar19,2,(int *)"foreign key constraint failed",0xfffffffe);
  }
  else {
    if ((0 < param_8) && ((char)param_5[6] == '\0')) {
      if ((int *)piVar19[0x6c] != (int *)0x0) {
        piVar19 = (int *)piVar19[0x6c];
      }
      *(undefined1 *)(piVar19 + 6) = 1;
    }
    iVar18 = piVar6[7];
    bVar5 = *(byte *)(param_5 + 6);
    if ((iVar18 < piVar6[8]) || (iVar10 = FUN_0047de10(piVar6), iVar10 == 0)) {
      iVar10 = piVar6[1];
      piVar6[7] = piVar6[7] + 1;
      *(undefined2 *)(iVar10 + iVar18 * 0x14) = 0x75;
      *(undefined1 *)(iVar10 + 3 + iVar18 * 0x14) = 0;
      *(uint *)(iVar10 + 4 + iVar18 * 0x14) = (uint)bVar5;
      *(int *)(iVar10 + 8 + iVar18 * 0x14) = param_8;
      *(undefined4 *)(iVar10 + 0xc + iVar18 * 0x14) = 0;
      *(undefined4 *)(iVar10 + 0x10 + iVar18 * 0x14) = 0;
    }
  }
  if (piVar6[10] != 0) {
    *(int *)(piVar6[10] - (iVar8 * 4 + 4)) = piVar6[7];
  }
  iVar8 = piVar6[7];
  iVar18 = piVar6[8];
  if (iVar18 <= iVar8) {
    if (iVar18 == 0) {
      iVar18 = 0x33;
    }
    else {
      iVar18 = iVar18 * 2;
    }
    puVar16 = FUN_00494cf0(*piVar6,(undefined4 *)piVar6[1],iVar18 * 0x14);
    if (puVar16 == (undefined4 *)0x0) {
      return;
    }
    iVar18 = *piVar6;
    if (((iVar18 == 0) || (puVar16 < *(undefined4 **)(iVar18 + 0x104))) ||
       (*(undefined4 **)(iVar18 + 0x108) <= puVar16)) {
      uVar17 = (*DAT_00582af0._4_4_)(puVar16);
    }
    else {
      uVar17 = (uint)*(ushort *)(iVar18 + 0xe8);
    }
    piVar6[8] = uVar17 / 0x14;
    piVar6[1] = (int)puVar16;
  }
  iVar18 = piVar6[1];
  piVar6[7] = piVar6[7] + 1;
  *(undefined2 *)(iVar18 + iVar8 * 0x14) = 0x2d;
  *(undefined1 *)(iVar18 + 3 + iVar8 * 0x14) = 0;
  *(int *)(iVar18 + 4 + iVar8 * 0x14) = iVar7;
  *(undefined4 *)(iVar18 + 8 + iVar8 * 0x14) = 0;
  *(undefined4 *)(iVar18 + 0xc + iVar8 * 0x14) = 0;
  *(undefined4 *)(iVar18 + 0x10 + iVar8 * 0x14) = 0;
  return;
}


/* FUN_0047f4f0 @ 0047f4f0  kind=lib  attributed-by=lib-string  size=146 */

undefined4 __cdecl FUN_0047f4f0(int *param_1,byte *param_2)

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
      do {
        iVar3 = iVar4;
        iVar4 = iVar3 + -1;
        if ((*param_2 == 0) || ((&DAT_00569620)[*param_2] != (&DAT_00569620)[(byte)*pcVar5]))
        goto LAB_0047f544;
        param_2 = param_2 + 1;
        pcVar5 = pcVar5 + 1;
      } while (0 < iVar4);
      iVar4 = iVar3 + -2;
LAB_0047f544:
      if ((iVar4 < 0) || ((&DAT_00569620)[*param_2] == (&DAT_00569620)[(byte)*pcVar5])) {
        FUN_004962b0(param_1,(byte *)"table %s may not be altered");
        return 1;
      }
    }
  }
  return 0;
}


/* FUN_0047fa9a @ 0047fa9a  kind=lib  attributed-by=lib-string  size=344 */

undefined4 __fastcall FUN_0047fa9a(undefined4 param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  int *piVar3;
  int in_EAX;
  int iVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  byte *pbVar7;
  int iVar8;
  
  while( true ) {
    iVar8 = *(int *)(unaff_ESI + 4);
    *(int *)(unaff_EBP + -0x14) = in_EAX * 4;
    puVar5 = (undefined4 *)(*(int *)(param_2 + 4) + *(int *)(in_EAX * 4 + iVar8) * 0x18);
    pbVar7 = (byte *)puVar5[4];
    pbVar6 = (byte *)"BINARY";
    if (pbVar7 != (byte *)0x0) {
      pbVar6 = pbVar7;
    }
    pbVar7 = *(byte **)(*(int *)(unaff_EBP + -0x14) + *(int *)(unaff_ESI + 0x20));
    bVar2 = *pbVar7;
    while ((bVar2 != 0 && ((&DAT_00569620)[bVar2] == (&DAT_00569620)[*pbVar6]))) {
      pbVar1 = pbVar7 + 1;
      pbVar7 = pbVar7 + 1;
      pbVar6 = pbVar6 + 1;
      bVar2 = *pbVar1;
    }
    if ((&DAT_00569620)[*pbVar7] != (&DAT_00569620)[*pbVar6]) break;
    pbVar7 = (byte *)*puVar5;
    puVar5 = *(undefined4 **)(unaff_EBP + -0x1c);
    *(byte **)(unaff_EBP + -0x20) = pbVar7;
    iVar8 = 0;
    do {
      pbVar6 = (byte *)*puVar5;
      bVar2 = *pbVar6;
      while ((bVar2 != 0 && ((&DAT_00569620)[bVar2] == (&DAT_00569620)[*pbVar7]))) {
        pbVar1 = pbVar6 + 1;
        pbVar6 = pbVar6 + 1;
        pbVar7 = pbVar7 + 1;
        bVar2 = *pbVar1;
      }
      if ((&DAT_00569620)[*pbVar6] == (&DAT_00569620)[*pbVar7]) {
        if (*(int *)(unaff_EBP + -8) != 0) {
          *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + *(int *)(unaff_EBP + -8)) =
               *(undefined4 *)(*(int *)(unaff_EBP + 0x10) + 0x24 + iVar8 * 8);
        }
        break;
      }
      pbVar7 = *(byte **)(unaff_EBP + -0x20);
      iVar8 = iVar8 + 1;
      puVar5 = puVar5 + 2;
    } while (iVar8 < *(int *)(unaff_EBP + -0x18));
    unaff_EBX = *(int *)(unaff_EBP + -0x18);
    in_EAX = *(int *)(unaff_EBP + -4);
    if (iVar8 == unaff_EBX) goto LAB_0047fba8;
    unaff_ESI = *(int *)(unaff_EBP + -0x10);
    param_2 = *(int *)(unaff_EBP + 0xc);
    in_EAX = in_EAX + 1;
    *(int *)(unaff_EBP + -4) = in_EAX;
    if (unaff_EBX <= in_EAX) {
LAB_0047fba8:
      unaff_ESI = *(int *)(unaff_EBP + -0x10);
      param_2 = *(int *)(unaff_EBP + 0xc);
      do {
        if (in_EAX == unaff_EBX) {
LAB_0047fa7d:
          **(int **)(unaff_EBP + 0x14) = unaff_ESI;
          return 0;
        }
        while( true ) {
          do {
            unaff_ESI = *(int *)(unaff_ESI + 0x14);
            *(int *)(unaff_EBP + -0x10) = unaff_ESI;
            if (unaff_ESI == 0) {
              puVar5 = *(undefined4 **)(unaff_EBP + -8);
              piVar3 = *(int **)(unaff_EBP + 8);
              if (*(char *)((int)piVar3 + 0x1ca) == '\0') {
                FUN_004962b0(piVar3,(byte *)"foreign key mismatch");
              }
              FUN_00494b00(*piVar3,puVar5);
              return 1;
            }
          } while ((*(int *)(unaff_ESI + 0x24) != unaff_EBX) ||
                  (*(char *)(unaff_ESI + 0x2c) == '\0'));
          if (*(int *)(unaff_EBP + -0xc) != 0) break;
          if (*(char *)(unaff_ESI + 0x2d) == '\x02') {
            iVar8 = *(int *)(unaff_EBP + -8);
            if ((iVar8 != 0) && (0 < unaff_EBX)) {
              puVar5 = (undefined4 *)(*(int *)(unaff_EBP + 0x10) + 0x24);
              iVar4 = 0;
              do {
                *(undefined4 *)(iVar8 + iVar4 * 4) = *puVar5;
                iVar4 = iVar4 + 1;
                puVar5 = puVar5 + 2;
              } while (iVar4 < unaff_EBX);
            }
            goto LAB_0047fa7d;
          }
        }
        in_EAX = 0;
        *(undefined4 *)(unaff_EBP + -4) = 0;
      } while (unaff_EBX < 1);
    }
  }
  in_EAX = *(int *)(unaff_EBP + -4);
  goto LAB_0047fba8;
}


/* FUN_0047ff80 @ 0047ff80  kind=lib  attributed-by=lib-string  size=1731 */

undefined4 __cdecl
FUN_0047ff80(int *param_1,byte *param_2,byte *param_3,byte *param_4,int param_5,char *param_6)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  bool bVar6;
  char cVar7;
  int *piVar8;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  int iVar13;
  short *psVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  byte *pbVar17;
  undefined2 uVar18;
  int iVar19;
  int iVar20;
  bool bVar21;
  short *local_24;
  int local_20;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar5 = param_5;
  local_20 = 0;
  iVar3 = *param_1;
  local_c = 0;
  local_14 = 0;
  local_24 = (short *)0x0;
  local_18 = 0;
  bVar6 = false;
  param_6[0x18] = -1;
  param_6[0x19] = -1;
  param_6[0x1a] = -1;
  param_6[0x1b] = -1;
  param_6[0x28] = '\0';
  param_6[0x29] = '\0';
  param_6[0x2a] = '\0';
  param_6[0x2b] = '\0';
  if (param_5 == 0) {
LAB_00480537:
    if ((param_3 == (byte *)0x0) && ((param_6[2] & 0x40U) != 0)) {
      param_6[0x28] = '\0';
      param_6[0x29] = '\0';
      param_6[0x2a] = '\0';
      param_6[0x2b] = '\0';
      *param_6 = '^';
      return 1;
    }
  }
  else {
    iVar13 = 0;
    do {
      if (iVar13 != 0) goto LAB_00480493;
      psVar4 = *(short **)(param_5 + 4);
      if (psVar4 != (short *)0x0) {
        psVar14 = psVar4 + 4;
        local_8 = 0;
        iVar13 = local_c;
        if (0 < *psVar4) {
          do {
            puVar16 = *(undefined4 **)(psVar14 + 8);
            iVar13 = -1000000;
            if (puVar16[0x10] != 0) {
              iVar13 = 0;
              if (0 < *(int *)(iVar3 + 0x14)) {
                piVar8 = (int *)(*(int *)(iVar3 + 0x10) + 0xc);
                do {
                  if (*piVar8 == puVar16[0x10]) break;
                  iVar13 = iVar13 + 1;
                  piVar8 = piVar8 + 4;
                } while (iVar13 < *(int *)(iVar3 + 0x14));
              }
            }
            if (param_3 == (byte *)0x0) {
LAB_004800c7:
              iVar13 = local_14 + 1;
              if (local_14 == 0) {
                *(undefined4 *)(param_6 + 0x18) = *(undefined4 *)(psVar14 + 0x16);
                *(undefined4 **)(param_6 + 0x28) = puVar16;
                local_18 = puVar16[0x10];
                local_24 = psVar14;
              }
              iVar19 = 0;
              puVar15 = (undefined4 *)puVar16[1];
              local_14 = iVar13;
              if (0 < *(short *)((int)puVar16 + 0x26)) {
                do {
                  pbVar11 = (byte *)*puVar15;
                  bVar2 = *pbVar11;
                  pbVar17 = param_4;
                  while ((bVar2 != 0 && ((&DAT_00569620)[bVar2] == (&DAT_00569620)[*pbVar17]))) {
                    pbVar1 = pbVar11 + 1;
                    pbVar11 = pbVar11 + 1;
                    pbVar17 = pbVar17 + 1;
                    bVar2 = *pbVar1;
                  }
                  if (((&DAT_00569620)[*pbVar11] == (&DAT_00569620)[*pbVar17]) &&
                     ((local_c != 1 ||
                      (((*(byte *)(psVar14 + 0x10) & 4) == 0 &&
                       (iVar13 = FUN_004832f0(*(undefined4 **)(psVar14 + 0x1a),param_4), iVar13 == 0
                       )))))) {
                    local_c = local_c + 1;
                    *(undefined4 *)(param_6 + 0x18) = *(undefined4 *)(psVar14 + 0x16);
                    *(undefined4 **)(param_6 + 0x28) = puVar16;
                    local_18 = puVar16[0x10];
                    if (iVar19 == *(short *)(puVar16 + 9)) {
                      param_6[0x1c] = -1;
                      param_6[0x1d] = -1;
                      local_24 = psVar14;
                    }
                    else {
                      *(short *)(param_6 + 0x1c) = (short)iVar19;
                      local_24 = psVar14;
                    }
                    break;
                  }
                  iVar19 = iVar19 + 1;
                  puVar15 = puVar15 + 6;
                } while (iVar19 < *(short *)((int)puVar16 + 0x26));
              }
            }
            else {
              pbVar11 = *(byte **)(psVar14 + 6);
              if (pbVar11 == (byte *)0x0) {
                if (((byte *)*puVar16 != (byte *)0x0) &&
                   (iVar19 = FUN_004bcc60((byte *)*puVar16,param_3), iVar19 == 0)) {
                  if (param_2 == (byte *)0x0) goto LAB_004800c7;
                  iVar13 = FUN_004bcc60(*(byte **)(*(int *)(iVar3 + 0x10) + iVar13 * 0x10),param_2);
                  bVar21 = iVar13 == 0;
                  goto LAB_004800c1;
                }
              }
              else {
                bVar2 = *pbVar11;
                pbVar17 = param_3;
                while ((bVar2 != 0 && ((&DAT_00569620)[bVar2] == (&DAT_00569620)[*pbVar17]))) {
                  pbVar1 = pbVar11 + 1;
                  pbVar11 = pbVar11 + 1;
                  pbVar17 = pbVar17 + 1;
                  bVar2 = *pbVar1;
                }
                bVar21 = (&DAT_00569620)[*pbVar11] == (&DAT_00569620)[*pbVar17];
LAB_004800c1:
                if (bVar21) goto LAB_004800c7;
              }
            }
            local_8 = local_8 + 1;
            psVar14 = psVar14 + 0x24;
            iVar13 = local_c;
          } while (local_8 < *psVar4);
        }
      }
      if ((param_2 == (byte *)0x0) && (param_3 != (byte *)0x0)) {
        if (iVar13 == 0) {
          if (param_1[0x6d] != 0) {
            iVar13 = param_1[0x72];
            if (((char)iVar13 == 'j') || (iVar19 = FUN_004bcc60(&DAT_0056e9a0,param_3), iVar19 != 0)
               ) {
              if (((char)iVar13 == 'i') ||
                 (iVar13 = FUN_004bcc60(&DAT_0056e9a4,param_3), iVar13 != 0)) goto LAB_004803b1;
              param_6[0x18] = '\0';
              param_6[0x19] = '\0';
              param_6[0x1a] = '\0';
              param_6[0x1b] = '\0';
            }
            else {
              param_6[0x18] = '\x01';
              param_6[0x19] = '\0';
              param_6[0x1a] = '\0';
              param_6[0x1b] = '\0';
            }
            iVar19 = param_1[0x6d];
            if (iVar19 != 0) {
              iVar13 = (int)*(short *)(iVar19 + 0x26);
              local_18 = *(int *)(iVar19 + 0x40);
              local_14 = local_14 + 1;
              iVar20 = 0;
              if (0 < iVar13) {
                puVar16 = *(undefined4 **)(iVar19 + 4);
                do {
                  pbVar11 = (byte *)*puVar16;
                  bVar2 = *pbVar11;
                  pbVar17 = param_4;
                  while ((bVar2 != 0 && ((&DAT_00569620)[bVar2] == (&DAT_00569620)[*pbVar17]))) {
                    pbVar1 = pbVar11 + 1;
                    pbVar11 = pbVar11 + 1;
                    pbVar17 = pbVar17 + 1;
                    bVar2 = *pbVar1;
                  }
                  if ((&DAT_00569620)[*pbVar11] == (&DAT_00569620)[*pbVar17]) {
                    if (iVar20 == *(short *)(iVar19 + 0x24)) {
                      iVar20 = -1;
                    }
                    break;
                  }
                  iVar20 = iVar20 + 1;
                  puVar16 = puVar16 + 6;
                } while (iVar20 < iVar13);
              }
              if (iVar13 <= iVar20) {
                bVar21 = FUN_0049f8e0(param_4);
                if (CONCAT31(extraout_var,bVar21) != 0) {
                  iVar20 = -1;
                }
                if (iVar13 <= iVar20) goto LAB_004803b1;
              }
              iVar13 = 1;
              local_c = 1;
              uVar18 = (undefined2)iVar20;
              if (iVar20 < 0) {
                param_6[1] = 'd';
                *(undefined2 *)(param_6 + 0x1c) = uVar18;
                *(int *)(param_6 + 0x28) = iVar19;
                bVar6 = true;
              }
              else if (*(int *)(param_6 + 0x18) == 0) {
                if (iVar20 < 0x20) {
                  bVar6 = true;
                  param_1[0x70] = param_1[0x70] | 1 << ((byte)iVar20 & 0x1f);
                  *(undefined2 *)(param_6 + 0x1c) = uVar18;
                  *(int *)(param_6 + 0x28) = iVar19;
                }
                else {
                  param_1[0x70] = -1;
                  *(undefined2 *)(param_6 + 0x1c) = uVar18;
                  *(int *)(param_6 + 0x28) = iVar19;
                  bVar6 = true;
                }
              }
              else {
                if (iVar20 < 0x20) {
                  uVar12 = 1 << ((byte)iVar20 & 0x1f);
                }
                else {
                  uVar12 = 0xffffffff;
                }
                bVar6 = true;
                param_1[0x71] = param_1[0x71] | uVar12;
                *(undefined2 *)(param_6 + 0x1c) = uVar18;
                *(int *)(param_6 + 0x28) = iVar19;
              }
              goto LAB_0048047d;
            }
          }
LAB_004803b1:
          if ((local_14 == 1) &&
             (bVar21 = FUN_0049f8e0(param_4), CONCAT31(extraout_var_00,bVar21) != 0)) {
            local_c = 1;
            param_6[0x1c] = -1;
            param_6[0x1d] = -1;
            param_6[1] = 'd';
            iVar13 = 1;
          }
          else {
            piVar8 = *(int **)(param_5 + 8);
            if ((piVar8 != (int *)0x0) && (param_3 == (byte *)0x0)) {
              local_10 = 0;
              if (0 < *piVar8) {
                puVar16 = (undefined4 *)(piVar8[2] + 4);
                do {
                  pbVar11 = (byte *)*puVar16;
                  if (pbVar11 != (byte *)0x0) {
                    bVar2 = *pbVar11;
                    pbVar17 = param_4;
                    while ((bVar2 != 0 && ((&DAT_00569620)[bVar2] == (&DAT_00569620)[*pbVar17]))) {
                      pbVar1 = pbVar11 + 1;
                      pbVar11 = pbVar11 + 1;
                      pbVar17 = pbVar17 + 1;
                      bVar2 = *pbVar1;
                    }
                    if ((&DAT_00569620)[*pbVar11] == (&DAT_00569620)[*pbVar17]) {
                      if (((*(byte *)(param_5 + 0x1c) & 1) == 0) &&
                         ((*(byte *)(*(int *)(piVar8[2] + local_10 * 0x14) + 2) & 2) != 0)) {
                        FUN_004962b0(param_1,(byte *)"misuse of aliased aggregate %s");
                        return 2;
                      }
                      FUN_00488860(param_1,(int)piVar8,local_10,param_6,"",local_20);
                      goto LAB_0048060b;
                    }
                  }
                  local_10 = local_10 + 1;
                  puVar16 = puVar16 + 5;
                } while (local_10 < *piVar8);
              }
            }
            local_20 = local_20 + 1;
            param_5 = *(int *)(param_5 + 0x10);
            iVar13 = local_c;
          }
        }
      }
      else if (iVar13 == 0) goto LAB_004803b1;
LAB_0048047d:
    } while (param_5 != 0);
    if (iVar13 == 0) goto LAB_00480537;
LAB_00480493:
    if (iVar13 == 1) goto LAB_0048058c;
  }
  if (param_2 == (byte *)0x0) {
    if (param_3 == (byte *)0x0) {
      FUN_004962b0(param_1,(byte *)"%s: %s");
    }
    else {
      FUN_004962b0(param_1,(byte *)"%s: %s.%s");
    }
  }
  else {
    FUN_004962b0(param_1,(byte *)"%s: %s.%s.%s");
  }
  *(undefined1 *)((int)param_1 + 0x11) = 1;
  *(int *)(iVar5 + 0x18) = *(int *)(iVar5 + 0x18) + 1;
LAB_0048058c:
  if ((-1 < *(short *)(param_6 + 0x1c)) && (local_24 != (short *)0x0)) {
    uVar12 = (uint)*(short *)(param_6 + 0x1c);
    if (0x3f < (int)uVar12) {
      uVar12 = 0x3f;
    }
    uVar9 = 1 << (uVar12 & 0x1f);
    uVar10 = 0;
    if (0x1f < uVar12) {
      uVar10 = uVar9;
    }
    uVar9 = uVar9 ^ uVar10;
    if (0x3f < uVar12) {
      uVar10 = uVar9;
    }
    *(uint *)(local_24 + 0x1c) = *(uint *)(local_24 + 0x1c) | uVar9;
    *(uint *)(local_24 + 0x1e) = *(uint *)(local_24 + 0x1e) | uVar10;
  }
  FUN_00498790(iVar3,*(undefined4 **)(param_6 + 8));
  puVar16 = *(undefined4 **)(param_6 + 0xc);
  param_6[8] = '\0';
  param_6[9] = '\0';
  param_6[10] = '\0';
  param_6[0xb] = '\0';
  FUN_00498790(iVar3,puVar16);
  cVar7 = -0x68;
  if (bVar6) {
    cVar7 = '<';
  }
  param_6[0xc] = '\0';
  param_6[0xd] = '\0';
  param_6[0xe] = '\0';
  param_6[0xf] = '\0';
  *param_6 = cVar7;
  if (local_c != 1) {
    return 2;
  }
LAB_0048060b:
  FUN_0048d540(param_1,param_6,local_18,*(short **)(param_5 + 4));
  *(int *)(iVar5 + 0x14) = *(int *)(iVar5 + 0x14) + 1;
  while (iVar5 != param_5) {
    iVar5 = *(int *)(iVar5 + 0x10);
    *(int *)(iVar5 + 0x14) = *(int *)(iVar5 + 0x14) + 1;
  }
  return 1;
}


/* FUN_00483950 @ 00483950  kind=lib  attributed-by=lib-string  size=440 */

void __cdecl FUN_00483950(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined2 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined1 local_5;
  
  piVar3 = (int *)param_1[2];
  iVar4 = *param_1;
  local_5 = 0;
  if (piVar3 == (int *)0x0) {
    piVar3 = FUN_004af150(iVar4);
    param_1[2] = (int)piVar3;
    if (piVar3 == (int *)0x0) {
      return;
    }
    FUN_004ae760(piVar3,0x94);
  }
  iVar4 = FUN_00499c30(iVar4,(byte *)"sqlite_stat1",
                       *(byte **)(param_2 * 0x10 + *(int *)(iVar4 + 0x10)));
  if (iVar4 == 0) {
    FUN_004a0da0(param_1,(byte *)"CREATE TABLE %Q.%s(%s)");
    iVar4 = param_1[0x65];
    local_5 = 2;
  }
  else {
    iVar4 = *(int *)(iVar4 + 0x20);
    FUN_004aab20(param_1,param_2,iVar4,'\x01',(int)"sqlite_stat1");
    if (param_4 == 0) {
      iVar2 = piVar3[7];
      if ((iVar2 < piVar3[8]) || (iVar5 = FUN_0047de10(piVar3), iVar5 == 0)) {
        iVar5 = piVar3[1];
        piVar3[7] = piVar3[7] + 1;
        *(undefined2 *)(iVar5 + iVar2 * 0x14) = 0x67;
        *(undefined1 *)(iVar5 + 3 + iVar2 * 0x14) = 0;
        *(int *)(iVar5 + 4 + iVar2 * 0x14) = iVar4;
        *(int *)(iVar5 + 8 + iVar2 * 0x14) = param_2;
        *(undefined4 *)(iVar5 + 0xc + iVar2 * 0x14) = 0;
        *(undefined4 *)(iVar5 + 0x10 + iVar2 * 0x14) = 0;
      }
    }
    else {
      FUN_004a0da0(param_1,(byte *)"DELETE FROM %Q.%s WHERE %s=%Q");
    }
  }
  iVar2 = piVar3[7];
  if ((iVar2 < piVar3[8]) || (iVar5 = FUN_0047de10(piVar3), iVar5 == 0)) {
    piVar3[7] = piVar3[7] + 1;
    puVar1 = (undefined2 *)(piVar3[1] + iVar2 * 0x14);
    *(undefined4 *)(puVar1 + 2) = param_3;
    *puVar1 = 0x28;
    *(undefined1 *)((int)puVar1 + 3) = 0;
    *(int *)(puVar1 + 4) = iVar4;
    *(int *)(puVar1 + 6) = param_2;
    *(undefined4 *)(puVar1 + 8) = 0;
  }
  iVar4 = piVar3[1];
  iVar2 = *piVar3;
  if ((iVar4 == 0) || (*(char *)(iVar2 + 0x38) != '\0')) {
    FUN_0047bc80(iVar2,0xfffffff2,(int *)0x3);
  }
  else {
    iVar5 = iVar4 + (piVar3[7] + -1) * 0x14;
    FUN_0047bc80(iVar2,(int)*(char *)(iVar5 + 1),*(int **)(iVar4 + 0x10 + (piVar3[7] + -1) * 0x14));
    *(undefined4 *)(iVar5 + 0x10) = 3;
    *(undefined1 *)(iVar5 + 1) = 0xf2;
  }
  if (piVar3[1] != 0) {
    *(undefined1 *)(piVar3[1] + -0x11 + piVar3[7] * 0x14) = local_5;
  }
  return;
}


/* FUN_00488dd0 @ 00488dd0  kind=lib  attributed-by=lib-string  size=711 */

undefined4 __cdecl FUN_00488dd0(int param_1,char *param_2)

{
  byte bVar1;
  ushort uVar2;
  undefined4 *puVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  byte *pbVar7;
  bool bVar8;
  undefined4 uVar9;
  uint uVar10;
  short *psVar11;
  int iVar12;
  int extraout_EDX;
  undefined4 *puVar13;
  bool bVar14;
  int local_10;
  
  puVar3 = *(undefined4 **)(param_1 + 0x10);
  uVar2 = *(ushort *)(param_2 + 2);
  piVar4 = (int *)*puVar3;
  if ((uVar2 & 4) != 0) {
    return 1;
  }
  *(ushort *)(param_2 + 2) = uVar2 | 4;
  switch(*param_2) {
  case '\x14':
  case 'H':
  case 't':
    if ((uVar2 & 0x800) != 0) {
      iVar12 = puVar3[5];
      if ((*(byte *)(puVar3 + 7) & 4) != 0) {
        FUN_004962b0(piVar4,(byte *)"subqueries prohibited in CHECK constraints");
      }
      FUN_004bb100(param_1,*(undefined4 **)(param_2 + 0x10));
      if (iVar12 != puVar3[5]) {
        *(ushort *)(param_2 + 2) = *(ushort *)(param_2 + 2) | 0x20;
      }
    }
    break;
  case '\x1a':
    uVar9 = FUN_0047ff80(piVar4,(byte *)0x0,(byte *)0x0,*(byte **)(param_2 + 4),(int)puVar3,param_2)
    ;
    return uVar9;
  case 'v':
    pcVar5 = *(char **)(param_2 + 0xc);
    if (*pcVar5 != '\x1a') {
      uVar9 = FUN_0047ff80(piVar4,*(byte **)(*(int *)(param_2 + 8) + 4),
                           *(byte **)(*(int *)(pcVar5 + 8) + 4),
                           *(byte **)(*(int *)(pcVar5 + 0xc) + 4),(int)puVar3,param_2);
      return uVar9;
    }
    uVar9 = FUN_0047ff80(piVar4,(byte *)0x0,*(byte **)(*(int *)(param_2 + 8) + 4),
                         *(byte **)(pcVar5 + 4),(int)puVar3,param_2);
    return uVar9;
  case -0x7b:
    if ((*(byte *)(puVar3 + 7) & 4) != 0) {
      FUN_004962b0(piVar4,(byte *)"parameters prohibited in CHECK constraints");
    }
    break;
  case -0x69:
  case -0x65:
    piVar6 = *(int **)(param_2 + 0x10);
    if (piVar6 == (int *)0x0) {
      local_10 = 0;
    }
    else {
      local_10 = *piVar6;
    }
    bVar8 = false;
    bVar14 = false;
    bVar1 = *(byte *)(*(int *)(*(int *)(*piVar4 + 0x10) + 0xc) + 0x4d);
    pbVar7 = *(byte **)(param_2 + 4);
    uVar10 = FUN_004aa9b0((char *)pbVar7);
    psVar11 = FUN_004995c0(extraout_EDX,pbVar7,uVar10,local_10,bVar1,'\0');
    if (psVar11 == (short *)0x0) {
      psVar11 = FUN_004995c0(*piVar4,pbVar7,uVar10,-2,bVar1,'\0');
      if (psVar11 == (short *)0x0) {
        FUN_004962b0(piVar4,(byte *)"no such function: %.*s");
        puVar3[6] = puVar3[6] + 1;
        goto LAB_00488fc8;
      }
      bVar8 = true;
    }
    else {
      bVar14 = *(int *)(psVar11 + 6) == 0;
    }
    iVar12 = FUN_0048d4b0(piVar4,0x1f,0,*(undefined4 *)(psVar11 + 0xc),0);
    if (iVar12 != 0) {
      if (iVar12 == 1) {
        FUN_004962b0(piVar4,(byte *)"not authorized to use function: %s");
        puVar3[6] = puVar3[6] + 1;
      }
      *param_2 = 'b';
      return 1;
    }
    if ((bVar14) && ((*(byte *)(puVar3 + 7) & 1) == 0)) {
      FUN_004962b0(piVar4,(byte *)"misuse of aggregate function %.*s()");
      puVar3[6] = puVar3[6] + 1;
      bVar14 = false;
    }
    else {
      if (bVar8) {
        FUN_004962b0(piVar4,(byte *)"wrong number of arguments to function %.*s()");
        puVar3[6] = puVar3[6] + 1;
      }
      if (bVar14) {
        *(byte *)(puVar3 + 7) = *(byte *)(puVar3 + 7) & 0xfe;
      }
    }
LAB_00488fc8:
    FUN_004bb0b0(param_1,piVar6);
    if (bVar14) {
      *param_2 = -0x67;
      param_2[0x23] = '\0';
      puVar13 = puVar3;
      while (iVar12 = FUN_0049b170((int)param_2,puVar13[1]), iVar12 == 0) {
        param_2[0x23] = param_2[0x23] + '\x01';
        puVar13 = (undefined4 *)puVar13[4];
        if (puVar13 == (undefined4 *)0x0) {
          *(byte *)(puVar3 + 7) = *(byte *)(puVar3 + 7) | 1;
          return 1;
        }
      }
      *(byte *)(puVar13 + 7) = *(byte *)(puVar13 + 7) | 2;
      *(byte *)(puVar3 + 7) = *(byte *)(puVar3 + 7) | 1;
    }
    return 1;
  }
  if ((piVar4[0x11] == 0) && (*(char *)(*piVar4 + 0x38) == '\0')) {
    return 0;
  }
  return 2;
}


/* FUN_0048a4d0 @ 0048a4d0  kind=lib  attributed-by=lib-string  size=1799 */

undefined4 __cdecl FUN_0048a4d0(byte *param_1,int *param_2)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  int *piVar4;
  int iVar5;
  short *psVar6;
  int *piVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  int iVar16;
  byte *_Src;
  undefined4 *_Dst;
  undefined4 *puVar17;
  int iVar18;
  short *psVar19;
  byte *extraout_EDX;
  byte *pbVar20;
  int *piVar21;
  byte *pbVar22;
  size_t sVar23;
  byte *pbVar24;
  int local_44;
  int local_3c;
  int local_38;
  byte *local_34;
  int local_30;
  int local_1c;
  uint *local_18;
  
  piVar4 = *(int **)(param_1 + 8);
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
  FUN_004a9c50((int)piVar4,psVar6);
  piVar21 = (int *)(psVar6 + 4);
  local_30 = 0;
  pbVar24 = extraout_EDX;
  if (0 < *psVar6) {
    do {
      if (piVar21[4] != 0) {
        return 1;
      }
      if (piVar21[2] == 0) {
        puVar15 = (undefined4 *)piVar21[5];
        FUN_004bb100((int)pbVar24,puVar15);
        puVar13 = FUN_00494b90(iVar5,0x48);
        if (puVar13 != (undefined4 *)0x0) {
          memset(puVar13,0,0x48);
        }
        piVar21[4] = (int)puVar13;
        if (puVar13 == (undefined4 *)0x0) {
          return 2;
        }
        *(undefined2 *)(puVar13 + 10) = 1;
        uVar14 = FUN_004a02d0(iVar5,(byte *)"sqlite_subquery_%p_");
        *puVar13 = uVar14;
        for (puVar17 = (undefined4 *)puVar15[0xf]; puVar17 != (undefined4 *)0x0;
            puVar17 = (undefined4 *)puVar17[0xf]) {
          puVar15 = puVar17;
        }
        FUN_0048a240(piVar4,(int *)*puVar15,(undefined2 *)((int)puVar13 + 0x26),puVar13 + 1);
        *(byte *)((int)puVar13 + 0x2a) = *(byte *)((int)puVar13 + 0x2a) | 2;
        *(undefined2 *)(puVar13 + 9) = 0xffff;
        puVar13[7] = 1000000;
      }
      else {
        iVar16 = FUN_004a0120(piVar4,0,piVar21);
        piVar21[4] = iVar16;
        if (iVar16 == 0) {
          return 2;
        }
        *(short *)(iVar16 + 0x28) = *(short *)(iVar16 + 0x28) + 1;
        if ((*(int *)(iVar16 + 0xc) != 0) || ((*(byte *)(iVar16 + 0x2a) & 0x10) != 0)) {
          iVar18 = FUN_004b9570(piVar4,iVar16);
          if (iVar18 != 0) {
            return 2;
          }
          puVar15 = FUN_004a9680(iVar5,*(undefined4 **)(iVar16 + 0xc),0);
          piVar21[5] = (int)puVar15;
          FUN_004bb100((int)param_1,puVar15);
        }
      }
      iVar16 = FUN_0049dd10(piVar4,(int)piVar21);
      if (iVar16 != 0) {
        return 2;
      }
      local_30 = local_30 + 1;
      piVar21 = piVar21 + 0x12;
      pbVar24 = param_1;
    } while (local_30 < *psVar6);
  }
  if ((*(char *)(iVar5 + 0x38) != '\0') || (iVar16 = FUN_004bcf20(piVar4,(int)param_2), iVar16 != 0)
     ) {
    return 2;
  }
  iVar18 = 0;
  iVar16 = *piVar7;
  if (0 < iVar16) {
    puVar15 = (undefined4 *)piVar7[2];
    do {
      cVar2 = *(char *)*puVar15;
      if ((cVar2 == 'q') || ((cVar2 == 'v' && (**(char **)((char *)*puVar15 + 0xc) == 'q')))) break;
      iVar18 = iVar18 + 1;
      puVar15 = puVar15 + 5;
    } while (iVar18 < iVar16);
  }
  if (iVar18 < iVar16) {
    iVar18 = piVar7[2];
    local_18 = (uint *)0x0;
    if (((*(uint *)(*piVar4 + 0x18) & 4) == 0) ||
       (bVar11 = true, (*(uint *)(*piVar4 + 0x18) & 8) != 0)) {
      bVar11 = false;
    }
    local_44 = 0;
    if (0 < iVar16) {
      do {
        puVar15 = (undefined4 *)(iVar18 + local_44 * 0x14);
        pcVar8 = (char *)*puVar15;
        cVar2 = *pcVar8;
        if ((cVar2 == 'q') || ((cVar2 == 'v' && (**(char **)(pcVar8 + 0xc) == 'q')))) {
          bVar12 = false;
          if (cVar2 == 'v') {
            pbVar24 = *(byte **)(*(int *)(pcVar8 + 8) + 4);
          }
          else {
            pbVar24 = (byte *)0x0;
          }
          local_1c = 0;
          if (0 < *psVar6) {
            psVar19 = psVar6 + 10;
            do {
              _Src = *(byte **)psVar19;
              puVar15 = *(undefined4 **)(psVar19 + 2);
              if (_Src == (byte *)0x0) {
                _Src = (byte *)*puVar15;
              }
              if (*(char *)(iVar5 + 0x38) != '\0') break;
              if (pbVar24 == (byte *)0x0) {
LAB_0048a80f:
                bVar12 = true;
                local_38 = 0;
                if (0 < *(short *)((int)puVar15 + 0x26)) {
                  local_3c = 0;
                  do {
                    param_1 = *(byte **)(puVar15[1] + local_3c);
                    if (((*(byte *)(puVar15[1] + 0x16 + local_3c) & 2) == 0) &&
                       (((local_1c < 1 || (pbVar24 != (byte *)0x0)) ||
                        ((((*(byte *)(psVar19 + 10) & 4) == 0 ||
                          (iVar16 = FUN_004bd8f0((int)psVar6,local_1c,param_1,(int *)0x0,(int *)0x0)
                          , iVar16 == 0)) &&
                         (iVar16 = FUN_0049dab0(*(undefined4 **)(psVar19 + 0x14),param_1),
                         iVar16 < 0)))))) {
                      if (param_1 == (byte *)0x0) {
                        sVar23 = 0;
                      }
                      else {
                        bVar3 = *param_1;
                        pbVar20 = param_1;
                        while (bVar3 != 0) {
                          pbVar20 = pbVar20 + 1;
                          bVar3 = *pbVar20;
                        }
                        sVar23 = (int)pbVar20 - (int)param_1 & 0x3fffffff;
                      }
                      puVar13 = FUN_00494b90(iVar5,sVar23 + 0x2d);
                      if (puVar13 != (undefined4 *)0x0) {
                        memset(puVar13,0,sVar23 + 0x2d);
                        *(undefined1 *)puVar13 = 0x1a;
                        *(undefined2 *)((int)puVar13 + 0x1e) = 0xffff;
                        if (sVar23 == 0xffffffff) {
                          *(ushort *)((int)puVar13 + 2) = *(ushort *)((int)puVar13 + 2) | 0x400;
                          puVar13[1] = 0;
                        }
                        else {
                          puVar13[1] = puVar13 + 0xb;
                          if (sVar23 != 0) {
                            memcpy(puVar13 + 0xb,param_1,sVar23);
                          }
                          *(undefined1 *)(sVar23 + puVar13[1]) = 0;
                        }
                        puVar13[5] = 1;
                      }
                      local_34 = (byte *)0x0;
                      if ((bVar11) || (puVar17 = puVar13, 1 < *psVar6)) {
                        if (_Src == (byte *)0x0) {
                          sVar23 = 0;
                        }
                        else {
                          bVar3 = *_Src;
                          pbVar20 = _Src;
                          while (bVar3 != 0) {
                            pbVar20 = pbVar20 + 1;
                            bVar3 = *pbVar20;
                          }
                          sVar23 = (int)pbVar20 - (int)_Src & 0x3fffffff;
                        }
                        _Dst = FUN_00494b90(iVar5,sVar23 + 0x2d);
                        if (_Dst != (undefined4 *)0x0) {
                          memset(_Dst,0,sVar23 + 0x2d);
                          *(undefined2 *)((int)_Dst + 0x1e) = 0xffff;
                          *(undefined1 *)_Dst = 0x1a;
                          if (sVar23 == 0xffffffff) {
                            *(ushort *)((int)_Dst + 2) = *(ushort *)((int)_Dst + 2) | 0x400;
                            _Dst[1] = 0;
                          }
                          else {
                            _Dst[1] = _Dst + 0xb;
                            if (sVar23 != 0) {
                              memcpy(_Dst + 0xb,_Src,sVar23);
                            }
                            *(undefined1 *)(sVar23 + _Dst[1]) = 0;
                          }
                          _Dst[5] = 1;
                        }
                        puVar17 = FUN_00494b90(*piVar4,0x2c);
                        if (puVar17 != (undefined4 *)0x0) {
                          memset(puVar17,0,0x2c);
                          *(undefined1 *)puVar17 = 0x76;
                          *(undefined2 *)((int)puVar17 + 0x1e) = 0xffff;
                          puVar17[5] = 1;
                        }
                        iVar16 = *piVar4;
                        if (puVar17 == (undefined4 *)0x0) {
                          FUN_00498790(iVar16,_Dst);
                          FUN_00498790(iVar16,puVar13);
                        }
                        else {
                          if (puVar13 != (undefined4 *)0x0) {
                            puVar17[3] = puVar13;
                            *(ushort *)((int)puVar17 + 2) =
                                 *(ushort *)((int)puVar17 + 2) |
                                 *(ushort *)((int)puVar13 + 2) & 0x100;
                          }
                          if (_Dst != (undefined4 *)0x0) {
                            puVar17[2] = _Dst;
                            *(ushort *)((int)puVar17 + 2) =
                                 *(ushort *)((int)puVar17 + 2) | *(ushort *)((int)_Dst + 2) & 0x100;
                          }
                          FUN_004790b0((int)puVar17);
                          if (*(int *)(*piVar4 + 0x5c) < (int)puVar17[5]) {
                            FUN_004962b0(piVar4,(byte *)
                                                "Expression tree is too large (maximum depth %d)");
                          }
                        }
                        if (bVar11) {
                          param_1 = (byte *)FUN_004a02d0(iVar5,(byte *)"%s.%s");
                          local_34 = param_1;
                        }
                      }
                      local_18 = FUN_00498f00(piVar4,local_18,puVar17);
                      sVar23 = 0;
                      if (param_1 != (byte *)0x0) {
                        bVar3 = *param_1;
                        pbVar20 = param_1;
                        while (bVar3 != 0) {
                          pbVar20 = pbVar20 + 1;
                          bVar3 = *pbVar20;
                        }
                        sVar23 = (int)pbVar20 - (int)param_1 & 0x3fffffff;
                      }
                      if (local_18 != (uint *)0x0) {
                        uVar9 = *local_18;
                        uVar10 = local_18[2];
                        puVar13 = (undefined4 *)0x0;
                        if ((param_1 != (byte *)0x0) &&
                           (puVar13 = FUN_00494b90(*piVar4,sVar23 + 1), puVar13 != (undefined4 *)0x0
                           )) {
                          memcpy(puVar13,param_1,sVar23);
                          *(undefined1 *)((int)puVar13 + sVar23) = 0;
                        }
                        *(undefined4 **)(uVar10 + uVar9 * 0x14 + -0x10) = puVar13;
                      }
                      FUN_00494b00(iVar5,(undefined4 *)local_34);
                    }
                    local_38 = local_38 + 1;
                    local_3c = local_3c + 0x18;
                  } while (local_38 < *(short *)((int)puVar15 + 0x26));
                }
              }
              else {
                bVar3 = *pbVar24;
                pbVar20 = _Src;
                pbVar22 = pbVar24;
                while ((bVar3 != 0 && ((&DAT_00569620)[bVar3] == (&DAT_00569620)[*pbVar20]))) {
                  pbVar1 = pbVar22 + 1;
                  pbVar22 = pbVar22 + 1;
                  pbVar20 = pbVar20 + 1;
                  bVar3 = *pbVar1;
                }
                if ((&DAT_00569620)[*pbVar22] == (&DAT_00569620)[*pbVar20]) goto LAB_0048a80f;
              }
              local_1c = local_1c + 1;
              psVar19 = psVar19 + 0x24;
            } while (local_1c < *psVar6);
            if (bVar12) goto LAB_0048ab70;
          }
          if (pbVar24 == (byte *)0x0) {
            FUN_004962b0(piVar4,(byte *)"no tables specified");
          }
          else {
            FUN_004962b0(piVar4,(byte *)"no such table: %s");
          }
        }
        else {
          local_18 = FUN_00498f00(piVar4,local_18,(undefined4 *)pcVar8);
          if (local_18 != (uint *)0x0) {
            *(undefined4 *)((local_18[2] - 0x10) + *local_18 * 0x14) = puVar15[1];
            *(undefined4 *)((local_18[2] - 0xc) + *local_18 * 0x14) = puVar15[2];
            puVar15[1] = 0;
            puVar15[2] = 0;
          }
          *puVar15 = 0;
        }
LAB_0048ab70:
        local_44 = local_44 + 1;
      } while (local_44 < *piVar7);
    }
    FUN_00499060(iVar5,piVar7);
    *param_2 = (int)local_18;
  }
  if (((int *)*param_2 != (int *)0x0) && (*(int *)(iVar5 + 0x58) < *(int *)*param_2)) {
    FUN_004962b0(piVar4,(byte *)"too many columns in result set");
  }
  return 0;
}


/* FUN_0048c030 @ 0048c030  kind=lib  attributed-by=lib-string  size=517 */

void __cdecl FUN_0048c030(int *param_1,short *param_2)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int local_10;
  int local_c;
  
  iVar2 = *param_1;
  if ((*(char *)(iVar2 + 0x38) == '\0') &&
     (puVar3 = (undefined4 *)FUN_004a0120(param_1,0,(int *)(param_2 + 4)),
     puVar3 != (undefined4 *)0x0)) {
    if ((*(byte *)((int)puVar3 + 0x2a) & 0x10) != 0) {
      FUN_004962b0(param_1,(byte *)"virtual tables may not be altered");
      FUN_004a9cb0(iVar2,param_2);
      return;
    }
    if (puVar3[3] != 0) {
      FUN_004962b0(param_1,(byte *)"Cannot add a column to a view");
      FUN_004a9cb0(iVar2,param_2);
      return;
    }
    iVar4 = FUN_0047f4f0(param_1,(byte *)*puVar3);
    if (iVar4 == 0) {
      iVar4 = FUN_004a7ba0(iVar2,puVar3[0x10]);
      piVar5 = FUN_00494c20(iVar2,0x48);
      if (piVar5 != (int *)0x0) {
        param_1[0x7f] = (int)piVar5;
        *(undefined2 *)(piVar5 + 10) = 1;
        sVar1 = *(short *)((int)puVar3 + 0x26);
        *(short *)((int)piVar5 + 0x26) = sVar1;
        iVar6 = sVar1 + -1;
        puVar7 = FUN_00494c20(iVar2,(((int)(iVar6 + (iVar6 >> 0x1f & 7U)) >> 3) * 8 + 8) * 0x18);
        piVar5[1] = (int)puVar7;
        iVar6 = FUN_004a02d0(iVar2,(byte *)"sqlite_altertab_%s");
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
              puVar7 = FUN_00494db0(iVar2,(char *)*puVar8);
              *puVar8 = puVar7;
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
          FUN_0048e5e0(param_1,0,iVar4);
          piVar5 = FUN_0049d4d0(param_1);
          if (piVar5 != (int *)0x0) {
            FUN_00492110(param_1,iVar4);
            FUN_004a9cb0(iVar2,param_2);
            return;
          }
        }
      }
    }
  }
  FUN_004a9cb0(iVar2,param_2);
  return;
}


/* FUN_0048c240 @ 0048c240  kind=lib  attributed-by=lib-string  size=542 */

void __cdecl FUN_0048c240(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  byte *pbVar7;
  char *pcVar8;
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
  iVar4 = FUN_004a7ba0(iVar1,piVar2[0x10]);
  pbVar7 = *(byte **)(*(int *)(iVar1 + 0x10) + iVar4 * 0x10);
  iVar6 = piVar2[1] + *(short *)((int)piVar2 + 0x26) * 0x18;
  local_c = (byte *)(iVar6 + -0x18);
  pcVar8 = *(char **)(iVar6 + -0x14);
  puVar5 = (undefined4 *)FUN_00499c30(iVar1,(byte *)(*piVar2 + 0x10),pbVar7);
  iVar6 = FUN_0048d4b0(param_1,0x1a,pbVar7,*puVar5,0);
  if (iVar6 != 0) {
    return;
  }
  if ((pcVar8 != (char *)0x0) && (*pcVar8 == 'b')) {
    pcVar8 = (char *)0x0;
  }
  if ((local_c[0x16] & 1) != 0) {
    FUN_004962b0(param_1,(byte *)"Cannot add a PRIMARY KEY column");
    return;
  }
  if (local_8[2] != 0) {
    FUN_004962b0(param_1,(byte *)"Cannot add a UNIQUE column");
    return;
  }
  if ((((*(uint *)(iVar1 + 0x18) & 0x40000) != 0) && (local_8[4] != 0)) && (pcVar8 != (char *)0x0))
  {
    FUN_004962b0(param_1,(byte *)"Cannot add a REFERENCES column with non-NULL default value");
    return;
  }
  if (local_c[0x14] == 0) {
    if (pcVar8 == (char *)0x0) goto LAB_0048c3a0;
  }
  else if (pcVar8 == (char *)0x0) {
    FUN_004962b0(param_1,(byte *)"Cannot add a NOT NULL column with default value NULL");
    return;
  }
  iVar6 = FUN_004ae300(iVar1,pcVar8,1,0x62,&local_c);
  if (iVar6 != 0) {
    *(undefined1 *)(iVar1 + 0x38) = 1;
    return;
  }
  if (local_c == (byte *)0x0) {
    FUN_004962b0(param_1,(byte *)"Cannot add a column with non-constant default");
    return;
  }
  FUN_004ae2b0((int *)local_c);
LAB_0048c3a0:
  local_c = (byte *)FUN_00494e00(iVar1,(void *)*param_2,param_2[1]);
  if (local_c != (byte *)0x0) {
    uVar3 = *(undefined4 *)(iVar1 + 0x18);
    pbVar7 = local_c + param_2[1] + -1;
    while ((local_c < pbVar7 && ((*pbVar7 == 0x3b || (((&DAT_00569720)[*pbVar7] & 1) != 0))))) {
      *pbVar7 = 0;
      pbVar7 = pbVar7 + -1;
    }
    *(uint *)(iVar1 + 0x18) = *(uint *)(iVar1 + 0x18) | 0x100000;
    FUN_004a0da0(param_1,(byte *)
                         "UPDATE \"%w\".%s SET sql = substr(sql,1,%d) || \', \' || %Q || substr(sql,%d) WHERE type = \'table\' AND name = %Q"
                );
    FUN_00494b00(iVar1,(undefined4 *)local_c);
    *(undefined4 *)(iVar1 + 0x18) = uVar3;
  }
  FUN_004a0a20(param_1,iVar4,(pcVar8 != (char *)0x0) + 2);
  FUN_004880e0(param_1,puVar5);
  return;
}


/* FUN_0048c460 @ 0048c460  kind=lib  attributed-by=lib-string  size=140 */

void FUN_0048c460(void)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 uVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  
  puVar8 = &DAT_005834b8;
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
    uVar7 = ((byte)(&DAT_00569620)[*pbVar2] + uVar6) % 0x17;
    iVar4 = FUN_0047c390(0x583f68,uVar7,pbVar2,uVar6);
    if (iVar4 == 0) {
      uVar3 = *(undefined4 *)(&DAT_00583f68 + uVar7 * 4);
      *(undefined4 *)(puVar8 + 8) = 0;
      *(undefined4 *)(puVar8 + 0x1c) = uVar3;
      *(undefined **)(&DAT_00583f68 + uVar7 * 4) = puVar8;
    }
    else {
      *(undefined4 *)(puVar8 + 8) = *(undefined4 *)(iVar4 + 8);
      *(undefined **)(iVar4 + 8) = puVar8;
    }
    puVar8 = puVar8 + 0x24;
  } while ((int)puVar8 < 0x583524);
  return;
}


/* FUN_0048c4f0 @ 0048c4f0  kind=lib  attributed-by=lib-string  size=828 */

void __cdecl FUN_0048c4f0(int *param_1,short *param_2,undefined4 *param_3)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  byte *pbVar11;
  char *pcVar12;
  int *local_c;
  byte *local_8;
  
  local_8 = (byte *)0x0;
  iVar3 = *param_1;
  uVar4 = *(undefined4 *)(iVar3 + 0x18);
  local_c = (int *)0x0;
  if ((*(char *)(iVar3 + 0x38) == '\0') &&
     (puVar6 = (undefined4 *)FUN_004a0120(param_1,0,(int *)(param_2 + 4)),
     puVar6 != (undefined4 *)0x0)) {
    iVar7 = FUN_004a7ba0(*param_1,puVar6[0x10]);
    pbVar5 = *(byte **)(*(int *)(iVar3 + 0x10) + iVar7 * 0x10);
    *(uint *)(iVar3 + 0x18) = *(uint *)(iVar3 + 0x18) | 0x100000;
    local_8 = (byte *)FUN_004a0d40(iVar3,param_3);
    if (local_8 != (byte *)0x0) {
      iVar8 = FUN_00499c30(iVar3,local_8,pbVar5);
      if ((iVar8 == 0) && (iVar8 = FUN_00499af0(iVar3,local_8,pbVar5), iVar8 == 0)) {
        iVar8 = FUN_0047f4f0(param_1,(byte *)*puVar6);
        if ((iVar8 != 0) || (iVar8 = FUN_00492220(param_1,local_8), iVar8 != 0)) goto LAB_0048c80b;
        if (puVar6[3] == 0) {
          iVar8 = FUN_0048d4b0(param_1,0x1a,pbVar5,*puVar6,0);
          if ((iVar8 == 0) && (iVar8 = FUN_004b9570(param_1,(int)puVar6), iVar8 == 0)) {
            if (((*(byte *)((int)puVar6 + 0x2a) & 0x10) != 0) &&
               (local_c = (int *)FUN_0049d250(iVar3,(int)puVar6),
               *(int *)(*(int *)local_c[2] + 0x4c) == 0)) {
              local_c = (int *)0x0;
            }
            piVar9 = FUN_0049d4d0(param_1);
            if (piVar9 != (int *)0x0) {
              FUN_0048e5e0(param_1,local_c != (int *)0x0,iVar7);
              FUN_00492110(param_1,iVar7);
              if (local_c != (int *)0x0) {
                param_1[0x13] = param_1[0x13] + 1;
                iVar7 = param_1[0x13];
                FUN_004ae8f0(piVar9,0x5e,0,iVar7,0,(int *)local_8,0);
                FUN_004ae8f0(piVar9,0x8b,iVar7,0,0,local_c,0xfffffff6);
                piVar9 = param_1;
                if ((int *)param_1[0x6c] != (int *)0x0) {
                  piVar9 = (int *)param_1[0x6c];
                }
                *(undefined1 *)(piVar9 + 6) = 1;
              }
              pbVar11 = (byte *)*puVar6;
              bVar2 = *pbVar11;
              while ((bVar2 != 0 && (pbVar11 != (byte *)0xffffffff))) {
                bVar2 = *pbVar11;
                pbVar11 = pbVar11 + 1;
                if (0xbf < bVar2) {
                  bVar2 = *pbVar11;
                  while ((bVar2 & 0xc0) == 0x80) {
                    pbVar1 = pbVar11 + 1;
                    pbVar11 = pbVar11 + 1;
                    bVar2 = *pbVar1;
                  }
                }
                bVar2 = *pbVar11;
              }
              if (((*(uint *)(iVar3 + 0x18) & 0x40000) != 0) &&
                 (puVar10 = FUN_004c2000(param_1,puVar6), puVar10 != (undefined4 *)0x0)) {
                FUN_004a0da0(param_1,(byte *)
                                     "UPDATE \"%w\".%s SET sql = sqlite_rename_parent(sql, %Q, %Q) WHERE %s;"
                            );
                FUN_00494b00(iVar3,puVar10);
              }
              FUN_004a0da0(param_1,(byte *)
                                   "UPDATE %Q.%s SET sql = CASE WHEN type = \'trigger\' THEN sqlite_rename_trigger(sql, %Q)ELSE sqlite_rename_table(sql, %Q) END, tbl_name = %Q, name = CASE WHEN type=\'table\' THEN %Q WHEN name LIKE \'sqlite_autoindex%%\' AND type=\'index\' THEN \'sqlite_autoindex_\' || %Q || substr(name,%d+18) ELSE name END WHERE tbl_name=%Q COLLATE nocase AND (type=\'table\' OR type=\'index\' OR type=\'trigger\');"
                          );
              iVar7 = FUN_00499c30(iVar3,(byte *)"sqlite_sequence",pbVar5);
              if (iVar7 != 0) {
                FUN_004a0da0(param_1,(byte *)
                                     "UPDATE \"%w\".sqlite_sequence set name = %Q WHERE name = %Q");
              }
              puVar10 = (undefined4 *)FUN_004c2160(param_1,puVar6);
              if (puVar10 != (undefined4 *)0x0) {
                FUN_004a0da0(param_1,(byte *)
                                     "UPDATE sqlite_temp_master SET sql = sqlite_rename_trigger(sql, %Q), tbl_name = %Q WHERE %s;"
                            );
                FUN_00494b00(iVar3,puVar10);
              }
              if ((*(uint *)(iVar3 + 0x18) & 0x40000) != 0) {
                for (puVar10 = (undefined4 *)FUN_0049ae70(puVar6); puVar10 != (undefined4 *)0x0;
                    puVar10 = (undefined4 *)puVar10[3]) {
                  if ((undefined4 *)*puVar10 != puVar6) {
                    FUN_004880e0(param_1,(undefined4 *)*puVar10);
                  }
                }
              }
              FUN_004880e0(param_1,puVar6);
            }
          }
          goto LAB_0048c80b;
        }
        pcVar12 = "view %s may not be altered";
      }
      else {
        pcVar12 = "there is already another table or index with this name: %s";
      }
      FUN_004962b0(param_1,(byte *)pcVar12);
    }
  }
LAB_0048c80b:
  FUN_004a9cb0(iVar3,param_2);
  FUN_00494b00(iVar3,(undefined4 *)local_8);
  *(undefined4 *)(iVar3 + 0x18) = uVar4;
  return;
}


/* FUN_0048c85a @ 0048c85a  kind=lib  attributed-by=lib-string  size=213 */

uint FUN_0048c85a(void)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  uint unaff_EBX;
  int unaff_EBP;
  int *unaff_EDI;
  
  do {
    iVar1 = unaff_EDI[2];
    puVar2 = *(uint **)(iVar1 + 8);
    uVar5 = *(uint *)(*(int *)(iVar1 + 0xc) + 0x1c);
    if (uVar5 < 10) {
      uVar5 = unaff_EBX;
    }
    *puVar2 = uVar5;
    iVar3 = 1;
    uVar5 = unaff_EBX;
    if (0 < *(int *)(iVar1 + 0x24)) {
      do {
        puVar2[iVar3] = uVar5;
        if (5 < uVar5) {
          uVar5 = uVar5 - 1;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 <= *(int *)(iVar1 + 0x24));
    }
    if (*(char *)(iVar1 + 0x2c) != '\0') {
      puVar2[*(int *)(iVar1 + 0x24)] = 1;
    }
    unaff_EDI = (int *)*unaff_EDI;
  } while (unaff_EDI != (int *)0x0);
  iVar1 = *(int *)(unaff_EBP + 8);
  iVar3 = *(int *)(iVar1 + 0x10);
  *(int *)(unaff_EBP + -8) = iVar1;
  pbVar4 = *(byte **)(*(int *)(unaff_EBP + 0xc) + iVar3);
  *(byte **)(unaff_EBP + -4) = pbVar4;
  iVar3 = FUN_00499c30(iVar1,(byte *)"sqlite_stat1",pbVar4);
  if (iVar3 == 0) {
    return 1;
  }
  pbVar4 = (byte *)FUN_004a02d0(iVar1,(byte *)"SELECT tbl,idx,stat FROM %Q.sqlite_stat1");
  if (pbVar4 == (byte *)0x0) {
    *(undefined1 *)(iVar1 + 0x38) = 1;
    return 7;
  }
  uVar5 = FUN_00463120(iVar1,pbVar4,FUN_0046c6c0,unaff_EBP + -8,(int *)0x0);
  FUN_00494b00(iVar1,(undefined4 *)pbVar4);
  if (uVar5 == 7) {
    *(undefined1 *)(iVar1 + 0x38) = 1;
  }
  return uVar5;
}


/* FUN_0048e0b0 @ 0048e0b0  kind=lib  attributed-by=lib-string  size=315 */

void __cdecl FUN_0048e0b0(int *param_1,int param_2)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  
  iVar2 = *param_1;
  iVar4 = FUN_0048d4b0(param_1,0x16,"BEGIN",0,0);
  if (iVar4 == 0) {
    piVar5 = (int *)param_1[2];
    if (piVar5 == (int *)0x0) {
      piVar5 = FUN_004af150(*param_1);
      param_1[2] = (int)piVar5;
      if (piVar5 == (int *)0x0) {
        return;
      }
      FUN_004ae760(piVar5,0x94);
    }
    if ((param_2 != 7) && (iVar4 = 0, 0 < *(int *)(iVar2 + 0x14))) {
      param_1 = (int *)0x0;
      do {
        iVar3 = piVar5[7];
        if ((iVar3 < piVar5[8]) || (iVar6 = FUN_0047de10(piVar5), iVar6 == 0)) {
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
        param_1 = param_1 + 4;
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(iVar2 + 0x14));
    }
    iVar2 = piVar5[7];
    if ((iVar2 < piVar5[8]) || (iVar4 = FUN_0047de10(piVar5), iVar4 == 0)) {
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


/* FUN_0048e1f0 @ 0048e1f0  kind=lib  attributed-by=lib-string  size=998 */

void __cdecl
FUN_0048e1f0(byte *param_1,byte *param_2,int param_3,int param_4,undefined1 param_5,int *param_6,
            short *param_7,undefined4 *param_8,int param_9,int param_10)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 uVar9;
  byte *extraout_EDX;
  undefined4 *puVar10;
  char *pcVar11;
  undefined4 local_2c [5];
  undefined4 local_18;
  int local_14;
  undefined4 *local_10;
  byte *local_c;
  uint local_8;
  
  pbVar2 = param_1;
  puVar10 = (undefined4 *)0x0;
  iVar1 = *(int *)param_1;
  if (param_9 == 0) {
    local_8 = FUN_004ab150((int *)param_1,(undefined4 *)param_2,param_3,(int *)&param_1);
    if (-1 < (int)local_8) {
      local_c = param_1;
      goto LAB_0048e2c5;
    }
  }
  else if (*(int *)(param_3 + 4) == 0) {
    local_8 = 1;
    local_c = param_2;
LAB_0048e2c5:
    if ((param_7 != (short *)0x0) && (*(char *)(iVar1 + 0x38) == '\0')) {
      if ((*(char *)(iVar1 + 0x81) != '\0') && (local_8 != 1)) {
        FUN_00494b00(iVar1,*(undefined4 **)(param_7 + 6));
        param_7[6] = 0;
        param_7[7] = 0;
      }
      iVar4 = FUN_004aa130((int *)pbVar2,(int)param_7);
      if (((*(char *)(iVar1 + 0x81) == '\0') && (*(int *)(param_3 + 4) == 0)) && (iVar4 != 0)) {
        param_1 = (byte *)0x1;
        if (*(int *)(iVar4 + 0x40) == *(int *)(*(int *)(iVar1 + 0x10) + 0x1c)) {
          local_8 = 1;
        }
      }
      if ((*(char *)(iVar1 + 0x38) == '\0') &&
         ((iVar4 = FUN_0049a350(local_2c,(int *)pbVar2,local_8,"trigger",local_c), iVar4 == 0 ||
          (iVar4 = FUN_0049a430(local_2c,param_7), iVar4 == 0)))) {
        local_10 = (undefined4 *)FUN_004aa130((int *)pbVar2,(int)param_7);
        if (local_10 == (undefined4 *)0x0) {
          pbVar3 = (byte *)0x0;
          if (*(char *)(iVar1 + 0x80) == '\x01') {
            *(undefined1 *)(iVar1 + 0x82) = 1;
          }
          goto LAB_0048e221;
        }
        if ((*(byte *)((int)local_10 + 0x2a) & 0x10) != 0) {
          pcVar11 = "cannot create triggers on virtual tables";
          goto LAB_0048e216;
        }
        param_1 = (byte *)FUN_004a0d40(iVar1,(undefined4 *)local_c);
        pbVar3 = param_1;
        if ((param_1 == (byte *)0x0) ||
           (iVar4 = FUN_00492220((int *)pbVar2,param_1), pbVar3 = param_1, iVar4 != 0))
        goto LAB_0048e221;
        local_14 = local_8 << 4;
        uVar5 = FUN_004aa9b0((char *)param_1);
        iVar4 = FUN_0049d6a0((uint *)(*(int *)(local_14 + 0xc + *(int *)(iVar1 + 0x10)) + 0x28),
                             extraout_EDX,uVar5);
        if (iVar4 != 0) {
          if (param_10 == 0) {
            FUN_004962b0((int *)pbVar2,(byte *)"trigger %T already exists");
            pbVar3 = param_1;
          }
          else {
            FUN_00493400((int *)pbVar2,local_8);
            pbVar3 = param_1;
          }
          goto LAB_0048e221;
        }
        local_c = (byte *)*local_10;
        iVar4 = FUN_00468380(local_c,(byte *)"sqlite_",7);
        if (iVar4 == 0) {
          FUN_004962b0((int *)pbVar2,(byte *)"cannot create trigger on system table");
          *(int *)(pbVar2 + 0x44) = *(int *)(pbVar2 + 0x44) + 1;
          pbVar3 = param_1;
          goto LAB_0048e221;
        }
        if (local_10[3] == 0) {
LAB_0048e4a9:
          if (param_4 == 0x30) {
            FUN_004962b0((int *)pbVar2,(byte *)"cannot create INSTEAD OF trigger on table: %S");
            pbVar3 = param_1;
            goto LAB_0048e221;
          }
        }
        else {
          if (param_4 != 0x30) {
            FUN_004962b0((int *)pbVar2,(byte *)"cannot create %s trigger on view: %S");
            pbVar3 = param_1;
            goto LAB_0048e221;
          }
          if (local_10[3] == 0) goto LAB_0048e4a9;
        }
        local_8 = FUN_004a7ba0(iVar1,local_10[0x10]);
        local_18 = *(undefined4 *)(*(int *)(iVar1 + 0x10) + local_8 * 0x10);
        uVar9 = local_18;
        if (param_9 != 0) {
          uVar9 = *(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x10);
        }
        if ((local_8 == 1) || (param_9 != 0)) {
          uVar6 = 5;
        }
        else {
          uVar6 = 7;
        }
        iVar4 = FUN_0048d4b0((int *)pbVar2,uVar6,param_1,local_c,uVar9);
        pbVar3 = param_1;
        if (iVar4 != 0) goto LAB_0048e221;
        pcVar11 = "sqlite_temp_master";
        if (local_8 != 1) {
          pcVar11 = "sqlite_master";
        }
        iVar4 = FUN_0048d4b0((int *)pbVar2,0x12,pcVar11,0,local_18);
        pbVar3 = param_1;
        if (iVar4 != 0) goto LAB_0048e221;
        if (param_4 == 0x30) {
          param_4 = 0x22;
        }
        puVar10 = FUN_00494c20(iVar1,0x24);
        pbVar3 = param_1;
        if (puVar10 == (undefined4 *)0x0) goto LAB_0048e221;
        *puVar10 = param_1;
        puVar7 = FUN_00494db0(iVar1,*(char **)(param_7 + 8));
        puVar10[1] = puVar7;
        puVar10[5] = *(undefined4 *)(local_14 + 0xc + *(int *)(iVar1 + 0x10));
        puVar10[6] = local_10[0x10];
        *(undefined1 *)(puVar10 + 2) = param_5;
        *(char *)((int)puVar10 + 9) = (param_4 != 0x22) + '\x01';
        puVar7 = FUN_00478bb0(iVar1,param_8,1,(int *)0x0);
        puVar10[3] = puVar7;
        piVar8 = FUN_0049d9d0(iVar1,param_6);
        puVar10[4] = piVar8;
        *(undefined4 **)(pbVar2 + 0x200) = puVar10;
      }
    }
  }
  else {
    pcVar11 = "temporary trigger may not have qualified name";
LAB_0048e216:
    FUN_004962b0((int *)pbVar2,(byte *)pcVar11);
  }
  pbVar3 = (byte *)0x0;
LAB_0048e221:
  FUN_00494b00(iVar1,(undefined4 *)pbVar3);
  FUN_004a9cb0(iVar1,param_7);
  FUN_0049d910(iVar1,param_6);
  FUN_00498790(iVar1,param_8);
  if ((*(int *)(pbVar2 + 0x200) == 0) && (puVar10 != (undefined4 *)0x0)) {
    FUN_00495480(iVar1,(undefined4 *)puVar10[7]);
    FUN_00494b00(iVar1,(undefined4 *)*puVar10);
    FUN_00494b00(iVar1,(undefined4 *)puVar10[1]);
    FUN_00498790(iVar1,(undefined4 *)puVar10[3]);
    FUN_0049d910(iVar1,(int *)puVar10[4]);
    FUN_00494b00(iVar1,puVar10);
  }
  return;
}


/* FUN_00492220 @ 00492220  kind=lib  attributed-by=lib-string  size=85 */

undefined4 __cdecl FUN_00492220(int *param_1,byte *param_2)

{
  int iVar1;
  
  if (((*(char *)(*param_1 + 0x81) == '\0') && (*(char *)((int)param_1 + 0x12) == '\0')) &&
     ((*(uint *)(*param_1 + 0x18) & 0x100) == 0)) {
    iVar1 = FUN_00468380(param_2,(byte *)"sqlite_",7);
    if (iVar1 == 0) {
      FUN_004962b0(param_1,(byte *)"object name reserved for internal use: %s");
      return 1;
    }
  }
  return 0;
}


/* FUN_004923a0 @ 004923a0  kind=lib  attributed-by=lib-string  size=471 */

void __cdecl FUN_004923a0(int *param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  uint *puVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int local_3c;
  uint local_38;
  byte local_20 [24];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  pbVar3 = *(byte **)(*(int *)(*param_1 + 0x10) + param_2 * 0x10);
  local_3c = 1;
  do {
    FUN_00466a80(0x18,local_20,(byte *)"sqlite_stat%d");
    iVar4 = *param_1;
    pbVar10 = local_20;
    bVar2 = local_20[0];
    while (bVar2 != 0) {
      pbVar10 = pbVar10 + 1;
      bVar2 = *pbVar10;
    }
    iVar5 = *(int *)(iVar4 + 0x14);
    uVar11 = (int)pbVar10 - (int)local_20 & 0x3fffffff;
    local_38 = 0;
    if (0 < iVar5) {
      do {
        uVar12 = local_38;
        if ((int)local_38 < 2) {
          uVar12 = local_38 ^ 1;
        }
        if (pbVar3 == (byte *)0x0) {
LAB_0049249f:
          iVar6 = *(int *)(*(int *)(iVar4 + 0x10) + 0xc + uVar12 * 0x10);
          puVar9 = (uint *)(iVar6 + 8);
          if (*(int *)(iVar6 + 0x14) == 0) {
            uVar12 = 0;
          }
          else {
            uVar12 = 0;
            pbVar10 = local_20;
            uVar13 = uVar11;
            if (uVar11 != 0) {
              do {
                uVar13 = uVar13 - 1;
                uVar12 = uVar12 ^ (uint)(byte)(&DAT_00569620)[*pbVar10] ^ uVar12 * 8;
                pbVar10 = pbVar10 + 1;
              } while (0 < (int)uVar13);
            }
            uVar12 = uVar12 % *puVar9;
          }
          puVar8 = FUN_00479af0((int)puVar9,local_20,uVar11,uVar12);
          if ((puVar8 != (undefined4 *)0x0) && (puVar8[2] != 0)) {
            FUN_004a0da0(param_1,(byte *)"DELETE FROM %Q.%s WHERE %s=%Q");
            break;
          }
        }
        else {
          pbVar10 = *(byte **)(*(int *)(iVar4 + 0x10) + uVar12 * 0x10);
          bVar2 = *pbVar3;
          pbVar7 = pbVar3;
          while ((bVar2 != 0 && ((&DAT_00569620)[bVar2] == (&DAT_00569620)[*pbVar10]))) {
            pbVar1 = pbVar7 + 1;
            pbVar7 = pbVar7 + 1;
            pbVar10 = pbVar10 + 1;
            bVar2 = *pbVar1;
          }
          if ((&DAT_00569620)[*pbVar7] == (&DAT_00569620)[*pbVar10]) goto LAB_0049249f;
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


/* FUN_00492a10 @ 00492a10  kind=lib  attributed-by=lib-string  size=708 */

void __cdecl FUN_00492a10(int *param_1,undefined4 *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  void *extraout_EDX;
  void *extraout_EDX_00;
  int *piVar9;
  
  iVar3 = *param_1;
  piVar4 = (int *)param_1[2];
  if (piVar4 == (int *)0x0) {
    piVar4 = FUN_004af150(iVar3);
    param_1[2] = (int)piVar4;
    if (piVar4 != (int *)0x0) {
      FUN_004ae760(piVar4,0x94);
    }
  }
  piVar9 = param_1;
  if ((int *)param_1[0x6c] != (int *)0x0) {
    piVar9 = (int *)param_1[0x6c];
  }
  FUN_00493400(param_1,param_3);
  *(byte *)((int)piVar9 + 0x17) = *(byte *)((int)piVar9 + 0x17) | 1;
  piVar9[0x55] = piVar9[0x55] | 1 << ((byte)param_3 & 0x1f);
  if ((*(byte *)((int)param_2 + 0x2a) & 0x10) != 0) {
    FUN_004ae760(piVar4,0x84);
  }
  for (puVar5 = (undefined4 *)FUN_004aaf60(param_1,param_2); puVar5 != (undefined4 *)0x0;
      puVar5 = (undefined4 *)puVar5[8]) {
    FUN_00495bc0(param_1,puVar5);
  }
  if ((*(byte *)((int)param_2 + 0x2a) & 8) != 0) {
    FUN_004a0da0(param_1,(byte *)"DELETE FROM %Q.sqlite_sequence WHERE name=%Q");
  }
  FUN_004a0da0(param_1,(byte *)"DELETE FROM %Q.%s WHERE tbl_name=%Q and type!=\'trigger\'");
  if (param_4 == 0) {
    if ((*(byte *)((int)param_2 + 0x2a) & 0x10) == 0) {
      FUN_00476b80(param_1,(int)param_2);
      goto LAB_00492b14;
    }
  }
  else {
LAB_00492b14:
    if ((*(byte *)((int)param_2 + 0x2a) & 0x10) == 0) goto LAB_00492bf5;
  }
  iVar8 = piVar4[7];
  piVar9 = (int *)*param_2;
  if ((iVar8 < piVar4[8]) || (iVar6 = FUN_0047de10(piVar4), iVar6 == 0)) {
    iVar6 = piVar4[1];
    piVar4[7] = piVar4[7] + 1;
    *(int *)(iVar6 + 4 + iVar8 * 0x14) = param_3;
    *(undefined2 *)(iVar6 + iVar8 * 0x14) = 0x86;
    *(undefined1 *)(iVar6 + 3 + iVar8 * 0x14) = 0;
    *(undefined4 *)(iVar6 + 8 + iVar8 * 0x14) = 0;
    *(undefined4 *)(iVar6 + 0xc + iVar8 * 0x14) = 0;
    *(undefined4 *)(iVar6 + 0x10 + iVar8 * 0x14) = 0;
  }
  else {
    iVar8 = 1;
  }
  iVar6 = *piVar4;
  if ((piVar4[1] == 0) || (*(char *)(iVar6 + 0x38) != '\0')) {
    FUN_0047bc80(iVar6,0,piVar9);
  }
  else {
    if (iVar8 < 0) {
      iVar8 = piVar4[7] + -1;
    }
    iVar1 = piVar4[1] + iVar8 * 0x14;
    FUN_0047bc80(iVar6,(int)*(char *)(iVar1 + 1),*(int **)(piVar4[1] + 0x10 + iVar8 * 0x14));
    *(undefined4 *)(iVar1 + 0x10) = 0;
    if (piVar9 == (int *)0x0) {
      *(undefined4 *)(iVar1 + 0x10) = 0;
      *(undefined1 *)(iVar1 + 1) = 0;
    }
    else {
      uVar7 = FUN_004aa9b0((char *)piVar9);
      puVar5 = FUN_00494e00(*piVar4,extraout_EDX,uVar7);
      *(undefined4 **)(iVar1 + 0x10) = puVar5;
      *(undefined1 *)(iVar1 + 1) = 0xff;
    }
  }
LAB_00492bf5:
  piVar9 = (int *)*param_2;
  iVar8 = piVar4[7];
  if ((iVar8 < piVar4[8]) || (iVar6 = FUN_0047de10(piVar4), iVar6 == 0)) {
    iVar6 = piVar4[1];
    piVar4[7] = piVar4[7] + 1;
    *(undefined2 *)(iVar6 + iVar8 * 0x14) = 0x6c;
    *(undefined1 *)(iVar6 + 3 + iVar8 * 0x14) = 0;
    *(int *)(iVar6 + 4 + iVar8 * 0x14) = param_3;
    *(undefined4 *)(iVar6 + 8 + iVar8 * 0x14) = 0;
    *(undefined4 *)(iVar6 + 0xc + iVar8 * 0x14) = 0;
    *(undefined4 *)(iVar6 + 0x10 + iVar8 * 0x14) = 0;
  }
  else {
    iVar8 = 1;
  }
  iVar6 = piVar4[1];
  iVar1 = *piVar4;
  if ((iVar6 == 0) || (*(char *)(iVar1 + 0x38) != '\0')) {
    FUN_0047bc80(iVar1,0,piVar9);
  }
  else {
    if (iVar8 < 0) {
      iVar8 = piVar4[7] + -1;
    }
    iVar2 = iVar6 + iVar8 * 0x14;
    FUN_0047bc80(iVar1,(int)*(char *)(iVar2 + 1),*(int **)(iVar6 + 0x10 + iVar8 * 0x14));
    *(undefined4 *)(iVar2 + 0x10) = 0;
    if (piVar9 == (int *)0x0) {
      *(undefined4 *)(iVar2 + 0x10) = 0;
      *(undefined1 *)(iVar2 + 1) = 0;
    }
    else {
      uVar7 = FUN_004aa9b0((char *)piVar9);
      puVar5 = FUN_00494e00(*piVar4,extraout_EDX_00,uVar7);
      *(undefined4 **)(iVar2 + 0x10) = puVar5;
      *(undefined1 *)(iVar2 + 1) = 0xff;
    }
  }
  FUN_00492110(param_1,param_3);
  FUN_004bd130(iVar3,param_3);
  return;
}


/* FUN_004936f0 @ 004936f0  kind=lib  attributed-by=lib-string  size=91 */

void __cdecl FUN_004936f0(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_0048d4b0(param_1,0x16,"COMMIT",0,0);
  if (iVar1 == 0) {
    piVar2 = (int *)param_1[2];
    if (piVar2 == (int *)0x0) {
      piVar2 = FUN_004af150(*param_1);
      param_1[2] = (int)piVar2;
      if (piVar2 == (int *)0x0) {
        return;
      }
      FUN_004ae760(piVar2,0x94);
    }
    FUN_004ae830(piVar2,0x22,1,0);
  }
  return;
}


/* FUN_00493bd0 @ 00493bd0  kind=lib  attributed-by=lib-string  size=837 */

void __cdecl
FUN_00493bd0(int *param_1,int *param_2,undefined4 *param_3,int *param_4,undefined4 param_5)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  byte *pbVar9;
  undefined1 *puVar10;
  byte *pbVar11;
  int *piVar12;
  undefined4 *puVar13;
  size_t sVar14;
  int *_Dst;
  int iVar15;
  undefined1 *local_20;
  int local_18;
  int local_14;
  int local_8;
  
  iVar4 = param_1[0x7f];
  iVar5 = *param_1;
  _Dst = (int *)0x0;
  if ((iVar4 == 0) || (*(char *)((int)param_1 + 0x1d5) != '\0')) goto LAB_00493ef3;
  if (param_2 == (int *)0x0) {
    if (*(short *)(iVar4 + 0x26) + -1 < 0) goto LAB_00493ef3;
    if ((param_4 != (int *)0x0) && (*param_4 != 1)) {
      FUN_004962b0(param_1,(byte *)"foreign key on %s should reference only one column of table %T")
      ;
      goto LAB_00493ef3;
    }
    local_8 = 1;
  }
  else {
    if ((param_4 != (int *)0x0) && (*param_4 != *param_2)) {
      FUN_004962b0(param_1,(byte *)
                           "number of columns in foreign key does not match the number of columns in the referenced table"
                  );
      goto LAB_00493ef3;
    }
    local_8 = *param_2;
  }
  sVar14 = param_3[1] + 0x25 + local_8 * 8;
  if ((param_4 != (int *)0x0) && (iVar15 = *param_4, 0 < iVar15)) {
    puVar13 = (undefined4 *)(param_4[2] + 4);
    do {
      pcVar6 = (char *)*puVar13;
      uVar8 = 0;
      if (pcVar6 != (char *)0x0) {
        cVar2 = *pcVar6;
        pcVar7 = pcVar6;
        while (cVar2 != '\0') {
          pcVar7 = pcVar7 + 1;
          cVar2 = *pcVar7;
        }
        uVar8 = (int)pcVar7 - (int)pcVar6 & 0x3fffffff;
      }
      sVar14 = sVar14 + 1 + uVar8;
      puVar13 = puVar13 + 5;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
  }
  _Dst = FUN_00494b90(iVar5,sVar14);
  if ((_Dst != (int *)0x0) && (memset(_Dst,0,sVar14), _Dst != (int *)0x0)) {
    *_Dst = iVar4;
    _Dst[1] = *(int *)(iVar4 + 0x10);
    piVar12 = _Dst + local_8 * 2 + 9;
    _Dst[2] = (int)piVar12;
    memcpy(piVar12,(void *)*param_3,param_3[1]);
    *(undefined1 *)((int)piVar12 + param_3[1]) = 0;
    FUN_00495540((char *)piVar12);
    local_20 = (undefined1 *)((int)piVar12 + param_3[1] + 1);
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
          iVar15 = 0;
          if (0 < *(short *)(iVar4 + 0x26)) {
            puVar13 = *(undefined4 **)(iVar4 + 4);
            do {
              pbVar9 = (byte *)*puVar13;
              bVar3 = *pbVar9;
              pbVar11 = *(byte **)(param_2[2] + 4 + local_18);
              while ((bVar3 != 0 && ((&DAT_00569620)[bVar3] == (&DAT_00569620)[*pbVar11]))) {
                pbVar1 = pbVar9 + 1;
                pbVar9 = pbVar9 + 1;
                pbVar11 = pbVar11 + 1;
                bVar3 = *pbVar1;
              }
              if ((&DAT_00569620)[*pbVar9] == (&DAT_00569620)[*pbVar11]) {
                *piVar12 = iVar15;
                break;
              }
              iVar15 = iVar15 + 1;
              puVar13 = puVar13 + 6;
            } while (iVar15 < *(short *)(iVar4 + 0x26));
          }
          if (*(short *)(iVar4 + 0x26) <= iVar15) {
            FUN_004962b0(param_1,(byte *)"unknown column \"%s\" in foreign key definition");
            goto LAB_00493ef3;
          }
          local_14 = local_14 + 1;
          local_18 = local_18 + 0x14;
          piVar12 = piVar12 + 2;
        } while (local_14 < local_8);
      }
    }
    if ((param_4 != (int *)0x0) && (0 < local_8)) {
      iVar15 = 0;
      piVar12 = _Dst + 10;
      do {
        pcVar6 = *(char **)(iVar15 + 4 + param_4[2]);
        if (pcVar6 == (char *)0x0) {
          sVar14 = 0;
        }
        else {
          cVar2 = *pcVar6;
          pcVar7 = pcVar6;
          while (cVar2 != '\0') {
            pcVar7 = pcVar7 + 1;
            cVar2 = *pcVar7;
          }
          sVar14 = (int)pcVar7 - (int)pcVar6 & 0x3fffffff;
        }
        *piVar12 = (int)local_20;
        memcpy(local_20,*(void **)(iVar15 + 4 + param_4[2]),sVar14);
        puVar10 = local_20 + sVar14;
        local_20 = puVar10 + 1;
        *puVar10 = 0;
        piVar12 = piVar12 + 2;
        iVar15 = iVar15 + 0x14;
        local_8 = local_8 + -1;
      } while (local_8 != 0);
    }
    *(undefined1 *)(_Dst + 6) = 0;
    *(char *)((int)_Dst + 0x19) = (char)param_5;
    *(char *)((int)_Dst + 0x1a) = (char)((uint)param_5 >> 8);
    pbVar9 = (byte *)_Dst[2];
    uVar8 = 0;
    if (pbVar9 != (byte *)0x0) {
      bVar3 = *pbVar9;
      pbVar11 = pbVar9;
      while (bVar3 != 0) {
        pbVar11 = pbVar11 + 1;
        bVar3 = *pbVar11;
      }
      uVar8 = (int)pbVar11 - (int)pbVar9 & 0x3fffffff;
    }
    piVar12 = (int *)FUN_0049d6f0((uint *)(*(int *)(iVar4 + 0x40) + 0x38),pbVar9,uVar8,(uint)_Dst);
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
LAB_00493ef3:
  FUN_00494b00(iVar5,_Dst);
  FUN_00499060(iVar5,param_2);
  FUN_00499060(iVar5,param_4);
  return;
}


/* FUN_004940f0 @ 004940f0  kind=lib  attributed-by=lib-string  size=2153 */

int * __cdecl
FUN_004940f0(int *param_1,undefined4 *param_2,int param_3,short *param_4,uint *param_5,int param_6,
            int param_7,undefined4 param_8,undefined1 param_9,int param_10)

{
  byte *pbVar1;
  undefined4 uVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 uVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  void *_Src;
  byte *extraout_EDX;
  int iVar14;
  int iVar15;
  undefined4 local_58 [5];
  char *local_44;
  uint local_40;
  int *local_3c;
  int local_38;
  byte *local_34;
  int *local_30;
  byte *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  int local_1c;
  int *local_18;
  byte *local_14;
  uint *local_10;
  undefined4 *local_c;
  uint local_8;
  
  iVar10 = *param_1;
  local_3c = (int *)0x0;
  local_14 = (byte *)0x0;
  local_24 = (undefined4 *)0x0;
  local_28 = (undefined4 *)0x0;
  local_1c = iVar10;
  if ((*(char *)(iVar10 + 0x38) != '\0') || (*(char *)((int)param_1 + 0x1d5) != '\0'))
  goto LAB_00494936;
  if ((*(char *)(iVar10 + 0x81) == '\0') && (iVar4 = FUN_0049ddb0(iVar10,param_1 + 1), iVar4 != 0))
  {
    param_1[0x11] = param_1[0x11] + 1;
    param_1[3] = iVar4;
    goto LAB_00494936;
  }
  if (param_4 == (short *)0x0) {
    puVar5 = (undefined4 *)param_1[0x7f];
    local_c = puVar5;
    if (puVar5 == (undefined4 *)0x0) goto LAB_00494936;
    local_8 = FUN_004a7ba0(iVar10,puVar5[0x10]);
  }
  else {
    local_8 = FUN_004ab150(param_1,param_2,param_3,(int *)&local_24);
    if ((int)local_8 < 0) goto LAB_00494936;
    if ((((*(char *)(iVar10 + 0x81) == '\0') &&
         (iVar4 = FUN_004aa130(param_1,(int)param_4), *(int *)(param_3 + 4) == 0)) && (iVar4 != 0))
       && (*(int *)(iVar4 + 0x40) == *(int *)(*(int *)(iVar10 + 0x10) + 0x1c))) {
      local_8 = 1;
    }
    iVar4 = FUN_0049a350(local_58,param_1,local_8,"index",local_24);
    if (iVar4 != 0) {
      FUN_0049a430(local_58,param_4);
    }
    puVar5 = (undefined4 *)FUN_004a0120(param_1,0,(int *)(param_4 + 4));
    local_c = puVar5;
    if (puVar5 == (undefined4 *)0x0) goto LAB_00494936;
  }
  pbVar1 = (byte *)*puVar5;
  local_38 = local_8 * 0x10;
  local_20 = (undefined4 *)(*(int *)(iVar10 + 0x10) + local_38);
  iVar4 = FUN_00468380(pbVar1,(byte *)"sqlite_",7);
  if ((iVar4 == 0) &&
     (((*(int *)(pbVar1 + 7) != 0x65746c61 || (*(int *)(pbVar1 + 0xb) != 0x62617472)) ||
      (pbVar1[0xf] != 0x5f)))) {
    FUN_004962b0(param_1,(byte *)"table %s may not be indexed");
    goto LAB_00494936;
  }
  if (local_c[3] != 0) {
    FUN_004962b0(param_1,(byte *)"views may not be indexed");
    goto LAB_00494936;
  }
  if ((*(byte *)((int)local_c + 0x2a) & 0x10) != 0) {
    FUN_004962b0(param_1,(byte *)"virtual tables may not be indexed");
    goto LAB_00494936;
  }
  if (local_24 == (undefined4 *)0x0) {
    for (iVar4 = local_c[2]; iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x14)) {
    }
    local_14 = (byte *)FUN_004a02d0(iVar10,(byte *)"sqlite_autoindex_%s_%d");
    puVar5 = local_20;
    if (local_14 == (byte *)0x0) goto LAB_00494936;
  }
  else {
    local_14 = (byte *)FUN_004a0d40(iVar10,local_24);
    if ((local_14 == (byte *)0x0) || (iVar4 = FUN_00492220(param_1,local_14), iVar4 != 0))
    goto LAB_00494936;
    if ((*(char *)(iVar10 + 0x81) == '\0') &&
       (iVar4 = FUN_00499c30(iVar10,local_14,(byte *)0x0), iVar4 != 0)) {
      FUN_004962b0(param_1,(byte *)"there is already a table named %s");
      goto LAB_00494936;
    }
    puVar5 = local_20;
    iVar4 = FUN_00499af0(iVar10,local_14,(byte *)*local_20);
    if (iVar4 != 0) {
      if (param_10 == 0) {
        FUN_004962b0(param_1,(byte *)"index %s already exists");
      }
      else {
        FUN_00493400(param_1,local_8);
      }
      goto LAB_00494936;
    }
  }
  uVar2 = *puVar5;
  pcVar6 = "sqlite_temp_master";
  if (local_8 != 1) {
    pcVar6 = "sqlite_master";
  }
  iVar4 = FUN_0048d4b0(param_1,0x12,pcVar6,0,uVar2);
  puVar5 = local_c;
  if (iVar4 != 0) goto LAB_00494936;
  uVar7 = 1;
  if (local_8 == 1) {
    uVar7 = 3;
  }
  iVar4 = FUN_0048d4b0(param_1,uVar7,local_14,*local_c,uVar2);
  if (iVar4 != 0) goto LAB_00494936;
  local_10 = param_5;
  if (param_5 == (uint *)0x0) {
    local_44 = *(char **)(puVar5[1] + -0x18 + *(short *)((int)puVar5 + 0x26) * 0x18);
    local_40 = FUN_004aa9b0(local_44);
    param_5 = FUN_00498f00(param_1,(uint *)0x0,(undefined4 *)0x0);
    local_10 = param_5;
    if (param_5 == (uint *)0x0) goto LAB_00494936;
    FUN_004992e0(param_1,(int *)param_5,&local_44,0);
    *(undefined1 *)(param_5[2] + 0xc) = param_9;
  }
  iVar4 = 0;
  if (0 < (int)*param_5) {
    iVar15 = 0;
    do {
      if ((*(char **)(iVar15 + param_5[2]) != (char *)0x0) &&
         (puVar5 = (undefined4 *)FUN_004984d0(param_1,*(char **)(iVar15 + param_5[2])),
         puVar5 != (undefined4 *)0x0)) {
        uVar8 = FUN_004aa9b0((char *)*puVar5);
        local_28 = (undefined4 *)((int)local_28 + uVar8 + 1);
      }
      iVar4 = iVar4 + 1;
      iVar15 = iVar15 + 0x14;
      param_5 = local_10;
      iVar10 = local_1c;
    } while (iVar4 < (int)*local_10);
  }
  local_30 = (int *)FUN_004aa9b0((char *)local_14);
  local_34 = (byte *)*local_10;
  piVar9 = FUN_00494c20(iVar10,(int)local_30 +
                               (int)local_28 +
                               (int)local_34 * 9 + ((int)local_34 * 4 + 0xbU & 0xfffffff8) + 0x31);
  local_18 = piVar9;
  if (*(char *)(iVar10 + 0x38) == '\0') {
    iVar4 = ((int)local_34 * 4 + 8U & 0xfffffff8) + (int)(piVar9 + 0xc);
    piVar9[8] = iVar4;
    iVar4 = iVar4 + (int)local_34 * 4;
    piVar9[1] = iVar4;
    iVar4 = iVar4 + (int)local_34 * 4;
    piVar9[2] = (int)(piVar9 + 0xc);
    pbVar1 = local_34 + iVar4;
    piVar9[7] = iVar4;
    *piVar9 = (int)pbVar1;
    local_2c = pbVar1 + (int)local_30 + 1;
    memcpy(pbVar1,local_14,(int)local_30 + 1);
    puVar5 = local_20;
    piVar9[3] = (int)local_c;
    piVar9[9] = *local_10;
    *(char *)(piVar9 + 0xb) = (char)param_6;
    *(bool *)((int)piVar9 + 0x2d) = local_24 == (undefined4 *)0x0;
    piVar9[6] = *(int *)(local_38 + 0xc + *(int *)(iVar10 + 0x10));
    local_20 = (undefined4 *)0x0;
    local_40 = (*(byte *)(puVar5[3] + 0x4c) < 4) - 1;
    local_28 = (undefined4 *)local_10[2];
    if (0 < (int)*local_10) {
      do {
        local_34 = (byte *)local_28[1];
        piVar9 = (int *)(int)*(short *)((int)local_c + 0x26);
        puVar5 = (undefined4 *)local_c[1];
        iVar10 = 0;
        local_30 = piVar9;
        if (0 < (int)piVar9) {
          do {
            iVar4 = FUN_004bcc60(local_34,(byte *)*puVar5);
            if (iVar4 == 0) break;
            iVar10 = iVar10 + 1;
            puVar5 = puVar5 + 6;
          } while (iVar10 < (int)piVar9);
        }
        piVar9 = local_18;
        if ((int)local_30 <= iVar10) {
          FUN_004962b0(param_1,(byte *)"table %s has no column named %s");
          *(undefined1 *)((int)param_1 + 0x11) = 1;
          goto LAB_00494700;
        }
        *(int *)(local_18[1] + (int)local_20 * 4) = iVar10;
        if (((char *)*local_28 == (char *)0x0) ||
           (puVar5 = (undefined4 *)FUN_004984d0(param_1,(char *)*local_28),
           puVar5 == (undefined4 *)0x0)) {
          pbVar1 = *(byte **)(local_c[1] + 0x10 + iVar10 * 0x18);
          local_34 = (byte *)"BINARY";
          if (pbVar1 != (byte *)0x0) {
            local_34 = pbVar1;
          }
        }
        else {
          uVar8 = FUN_004aa9b0((char *)*puVar5);
          memcpy(local_2c,_Src,uVar8 + 1);
          local_34 = local_2c;
          local_2c = local_2c + uVar8 + 1;
        }
        iVar10 = local_1c;
        if ((*(char *)(local_1c + 0x81) == '\0') &&
           (piVar11 = FUN_004a0000(param_1,local_34), piVar11 == (int *)0x0)) goto LAB_00494700;
        *(byte **)(piVar9[8] + (int)local_20 * 4) = local_34;
        pbVar1 = (byte *)(local_28 + 3);
        local_28 = local_28 + 5;
        *(byte *)((int)local_20 + piVar9[7]) = *pbVar1 & (byte)local_40;
        local_20 = (undefined4 *)((int)local_20 + 1);
      } while ((int)local_20 < (int)*local_10);
    }
    FUN_00494e40((int)piVar9);
    if (local_c == (undefined4 *)param_1[0x7f]) {
      piVar11 = local_18;
      piVar9 = local_18;
      for (iVar4 = local_c[2]; local_18 = piVar9, iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x14)) {
        iVar10 = *(int *)(iVar4 + 0x24);
        piVar9 = piVar11;
        if (iVar10 == piVar11[9]) {
          iVar15 = 0;
          if (0 < iVar10) {
            iVar13 = piVar11[1];
            iVar14 = *(int *)(iVar4 + 4) - iVar13;
            do {
              piVar9 = (int *)(iVar13 + iVar15 * 4);
              if (*(int *)(iVar14 + (int)piVar9) != *piVar9) {
LAB_00494728:
                iVar10 = *(int *)(iVar4 + 0x24);
                piVar9 = local_18;
                break;
              }
              pbVar1 = *(byte **)(*(int *)(iVar4 + 0x20) + iVar15 * 4);
              pbVar3 = *(byte **)(piVar11[8] + iVar15 * 4);
              if ((pbVar1 != pbVar3) &&
                 (iVar10 = FUN_004bcc60(pbVar1,pbVar3), piVar11 = local_18, iVar10 != 0))
              goto LAB_00494728;
              iVar10 = *(int *)(iVar4 + 0x24);
              iVar13 = piVar11[1];
              iVar15 = iVar15 + 1;
              piVar9 = local_18;
            } while (iVar15 < iVar10);
          }
          if (iVar15 == iVar10) {
            if (*(char *)(iVar4 + 0x2c) != (char)piVar9[0xb]) {
              if ((*(char *)(iVar4 + 0x2c) != 'c') && ((char)piVar9[0xb] != 'c')) {
                FUN_004962b0(param_1,(byte *)"conflicting ON CONFLICT clauses specified");
                piVar9 = local_18;
              }
              if (*(char *)(iVar4 + 0x2c) == 'c') {
                *(char *)(iVar4 + 0x2c) = (char)piVar9[0xb];
              }
            }
            goto LAB_00494700;
          }
        }
        iVar10 = local_1c;
        piVar11 = piVar9;
        piVar9 = local_18;
      }
    }
    if (*(char *)(iVar10 + 0x81) == '\0') {
      param_1[0x13] = param_1[0x13] + 1;
      iVar4 = param_1[0x13];
      local_30 = FUN_0049d4d0(param_1);
      if (local_30 != (int *)0x0) {
        FUN_0048e5e0(param_1,1,local_8);
        FUN_004ae830(local_30,0x68,local_8,iVar4);
        if (param_7 == 0) {
          local_34 = (byte *)0x0;
        }
        else {
          local_34 = (byte *)FUN_004a02d0(iVar10,(byte *)"CREATE%s INDEX %.*s");
        }
        FUN_004a0da0(param_1,(byte *)"INSERT INTO %Q.%s VALUES(\'index\',%Q,%Q,#%d,%Q);");
        FUN_00494b00(iVar10,(undefined4 *)local_34);
        if (param_4 != (short *)0x0) {
          FUN_004a6290(param_1,piVar9,iVar4);
          FUN_00492110(param_1,local_8);
          piVar12 = (int *)FUN_004a02d0(iVar10,(byte *)"name=\'%q\' AND type=\'index\'");
          piVar11 = local_30;
          FUN_004aeac0(local_30,local_8,piVar12);
          FUN_004ae7d0(piVar11,0x81,0);
        }
        goto LAB_004948ce;
      }
    }
    else {
      piVar11 = piVar9;
      uVar8 = FUN_004aa9b0((char *)*piVar9);
      uVar8 = FUN_0049d6f0((uint *)(piVar9[6] + 0x18),extraout_EDX,uVar8,(uint)piVar11);
      if (uVar8 == 0) {
        *(uint *)(iVar10 + 0x18) = *(uint *)(iVar10 + 0x18) | 2;
        if (param_4 != (short *)0x0) {
          piVar9[10] = *(int *)(iVar10 + 0x7c);
        }
LAB_004948ce:
        if ((*(char *)(iVar10 + 0x81) != '\0') || (param_4 == (short *)0x0)) {
          param_5 = local_10;
          local_3c = piVar9;
          if ((param_6 == 5) &&
             ((iVar4 = local_c[2], iVar4 != 0 && (*(char *)(iVar4 + 0x2c) != '\x05')))) {
            iVar15 = *(int *)(iVar4 + 0x14);
            while ((iVar15 != 0 &&
                   (iVar13 = *(int *)(iVar4 + 0x14), *(char *)(iVar13 + 0x2c) != '\x05'))) {
              iVar15 = *(int *)(iVar13 + 0x14);
              iVar4 = iVar13;
            }
            piVar9[5] = *(int *)(iVar4 + 0x14);
            *(int **)(iVar4 + 0x14) = piVar9;
          }
          else {
            piVar9[5] = local_c[2];
            local_c[2] = piVar9;
          }
          goto LAB_00494936;
        }
      }
      else {
        *(undefined1 *)(iVar10 + 0x38) = 1;
      }
    }
  }
LAB_00494700:
  piVar9 = local_18;
  iVar10 = local_1c;
  param_5 = local_10;
  if (local_18 != (int *)0x0) {
    FUN_00494b00(local_1c,(undefined4 *)local_18[4]);
    iVar10 = local_1c;
    FUN_00494b00(local_1c,piVar9);
    param_5 = local_10;
  }
LAB_00494936:
  FUN_00499060(iVar10,(int *)param_5);
  FUN_004a9cb0(iVar10,param_4);
  FUN_00494b00(iVar10,(undefined4 *)local_14);
  return local_3c;
}


/* FUN_00495600 @ 00495600  kind=lib  attributed-by=lib-string  size=493 */

void __cdecl FUN_00495600(int *param_1,short *param_2,int param_3)

{
  int iVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  
  iVar1 = *param_1;
  if (*(char *)(iVar1 + 0x38) == '\0') {
    if ((*(char *)(iVar1 + 0x81) == '\0') && (iVar5 = FUN_0049ddb0(iVar1,param_1 + 1), iVar5 != 0))
    {
      param_1[0x11] = param_1[0x11] + 1;
      param_1[3] = iVar5;
      FUN_004a9cb0(iVar1,param_2);
      return;
    }
    pbVar2 = *(byte **)(param_2 + 6);
    puVar6 = (undefined4 *)FUN_00499af0(iVar1,*(byte **)(param_2 + 8),pbVar2);
    if (puVar6 == (undefined4 *)0x0) {
      if (param_3 == 0) {
        FUN_004962b0(param_1,(byte *)"no such index: %S");
        *(undefined1 *)((int)param_1 + 0x11) = 1;
        FUN_004a9cb0(iVar1,param_2);
        return;
      }
      FUN_00493360(param_1,pbVar2);
      *(undefined1 *)((int)param_1 + 0x11) = 1;
      FUN_004a9cb0(iVar1,param_2);
      return;
    }
    if (*(char *)((int)puVar6 + 0x2d) != '\0') {
      FUN_004962b0(param_1,(byte *)
                           "index associated with UNIQUE or PRIMARY KEY constraint cannot be dropped"
                  );
      FUN_004a9cb0(iVar1,param_2);
      return;
    }
    iVar5 = FUN_004a7ba0(iVar1,puVar6[6]);
    puVar3 = (undefined4 *)puVar6[3];
    uVar4 = *(undefined4 *)(iVar5 * 0x10 + *(int *)(iVar1 + 0x10));
    pcVar7 = "sqlite_temp_master";
    if (iVar5 != 1) {
      pcVar7 = "sqlite_master";
    }
    iVar8 = FUN_0048d4b0(param_1,9,pcVar7,0,uVar4);
    if (iVar8 == 0) {
      uVar9 = 10;
      if (iVar5 != 0) {
        uVar9 = 0xc;
      }
      iVar8 = FUN_0048d4b0(param_1,uVar9,*puVar6,*puVar3,uVar4);
      if ((iVar8 == 0) && (piVar10 = FUN_0049d4d0(param_1), piVar10 != (int *)0x0)) {
        FUN_0048e5e0(param_1,1,iVar5);
        FUN_004a0da0(param_1,(byte *)"DELETE FROM %Q.%s WHERE name=%Q AND type=\'index\'");
        FUN_004923a0(param_1,iVar5);
        FUN_00492110(param_1,iVar5);
        FUN_00476a70(param_1,puVar6[10],iVar5);
        FUN_004ae8f0(piVar10,0x6d,iVar5,0,0,(int *)*puVar6,0);
      }
    }
  }
  FUN_004a9cb0(iVar1,param_2);
  return;
}


/* FUN_004957f0 @ 004957f0  kind=lib  attributed-by=lib-string  size=578 */

void __cdecl FUN_004957f0(int *param_1,short *param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  char *pcVar8;
  undefined8 uVar9;
  
  iVar1 = *param_1;
  if (*(char *)(iVar1 + 0x38) != '\0') goto LAB_00495a20;
  if (param_4 != 0) {
    *(char *)(iVar1 + 0x3b) = *(char *)(iVar1 + 0x3b) + '\x01';
  }
  puVar3 = (undefined4 *)FUN_004a0120(param_1,param_3,(int *)(param_2 + 4));
  if (param_4 != 0) {
    *(char *)(iVar1 + 0x3b) = *(char *)(iVar1 + 0x3b) + -1;
  }
  if (puVar3 == (undefined4 *)0x0) {
    if (param_4 != 0) {
      FUN_00493360(param_1,*(byte **)(param_2 + 6));
      FUN_004a9cb0(iVar1,param_2);
      return;
    }
    goto LAB_00495a20;
  }
  iVar4 = FUN_004a7ba0(iVar1,puVar3[0x10]);
  if (((*(byte *)((int)puVar3 + 0x2a) & 0x10) != 0) &&
     (iVar5 = FUN_004b9570(param_1,(int)puVar3), iVar5 != 0)) goto LAB_00495a20;
  pcVar8 = "sqlite_temp_master";
  if (iVar4 != 1) {
    pcVar8 = "sqlite_master";
  }
  uVar2 = *(undefined4 *)(*(int *)(iVar1 + 0x10) + iVar4 * 0x10);
  iVar5 = FUN_0048d4b0(param_1,9,pcVar8,0,uVar2);
  if (iVar5 != 0) goto LAB_00495a20;
  if (param_3 == 0) {
    if ((*(byte *)((int)puVar3 + 0x2a) & 0x10) == 0) {
      iVar5 = (uint)(iVar4 == 1) * 2 + 0xb;
      goto LAB_004958fe;
    }
    uVar9 = FUN_0049d250(iVar1,(int)puVar3);
    iVar5 = (int)((ulonglong)uVar9 >> 0x20);
    uVar6 = *(undefined4 *)(*(int *)((int)uVar9 + 4) + 4);
  }
  else {
    iVar5 = (uint)(iVar4 != 1) * 2 + 0xf;
LAB_004958fe:
    uVar6 = 0;
  }
  iVar5 = FUN_0048d4b0(param_1,iVar5,*puVar3,uVar6,uVar2);
  if ((iVar5 == 0) && (iVar5 = FUN_0048d4b0(param_1,9,*puVar3,0,uVar2), iVar5 == 0)) {
    iVar5 = FUN_00468380((byte *)*puVar3,(byte *)"sqlite_",7);
    if ((iVar5 == 0) &&
       (iVar5 = FUN_00468380((byte *)*puVar3,(byte *)"sqlite_stat",0xb), iVar5 != 0)) {
      FUN_004962b0(param_1,(byte *)"table %s may not be dropped");
      FUN_004a9cb0(iVar1,param_2);
      return;
    }
    if (param_3 == 0) {
      if (puVar3[3] != 0) {
        FUN_004962b0(param_1,(byte *)"use DROP VIEW to delete view %s");
        FUN_004a9cb0(iVar1,param_2);
        return;
      }
    }
    else if (puVar3[3] == 0) {
      FUN_004962b0(param_1,(byte *)"use DROP TABLE to delete table %s");
      FUN_004a9cb0(iVar1,param_2);
      return;
    }
    piVar7 = FUN_0049d4d0(param_1);
    if (piVar7 != (int *)0x0) {
      FUN_0048e5e0(param_1,1,iVar4);
      FUN_004923a0(param_1,iVar4);
      FUN_0049ac40(param_1,param_2,puVar3);
      FUN_00492a10(param_1,puVar3,iVar4,param_3);
    }
  }
LAB_00495a20:
  FUN_004a9cb0(iVar1,param_2);
  return;
}


/* FUN_00495bc0 @ 00495bc0  kind=lib  attributed-by=lib-string  size=548 */

void __cdecl FUN_00495bc0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  void *extraout_EDX;
  char *pcVar10;
  int *piVar11;
  int iVar12;
  
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
  puVar4 = (undefined4 *)FUN_004bd9c0((int)param_2);
  uVar2 = *(undefined4 *)(*(int *)(iVar5 + 0x10) + iVar12 * 0x10);
  if (iVar12 == 1) {
    pcVar10 = "sqlite_temp_master";
    uVar8 = 0xe;
  }
  else {
    pcVar10 = "sqlite_master";
    uVar8 = 0x10;
  }
  iVar5 = FUN_0048d4b0(param_1,uVar8,*param_2,*puVar4,uVar2);
  if ((iVar5 == 0) && (iVar5 = FUN_0048d4b0(param_1,9,pcVar10,0,uVar2), iVar5 == 0)) {
    piVar3 = (int *)param_1[2];
    if (piVar3 == (int *)0x0) {
      piVar3 = FUN_004af150(*param_1);
      param_1[2] = (int)piVar3;
      if (piVar3 == (int *)0x0) {
        return;
      }
      FUN_004ae760(piVar3,0x94);
    }
    piVar11 = param_1;
    if ((int *)param_1[0x6c] != (int *)0x0) {
      piVar11 = (int *)param_1[0x6c];
    }
    FUN_00493400(param_1,iVar12);
    piVar11[0x55] = piVar11[0x55] | 1 << ((byte)iVar12 & 0x1f);
    FUN_004a0e40(param_1,iVar12);
    iVar6 = FUN_004aea10(piVar3,9,0x56a708);
    iVar5 = *piVar3;
    piVar11 = (int *)*param_2;
    iVar9 = iVar6 + 1;
    if ((piVar3[1] == 0) || (*(char *)(iVar5 + 0x38) != '\0')) {
      FUN_0047bc80(iVar5,0,piVar11);
    }
    else {
      if (iVar9 < 0) {
        iVar9 = piVar3[7] + -1;
      }
      iVar1 = piVar3[1] + iVar9 * 0x14;
      FUN_0047bc80(iVar5,(int)*(char *)(iVar1 + 1),*(int **)(piVar3[1] + 0x10 + iVar9 * 0x14));
      *(undefined4 *)(iVar1 + 0x10) = 0;
      if (piVar11 == (int *)0x0) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined1 *)(iVar1 + 1) = 0;
      }
      else {
        uVar7 = FUN_004aa9b0((char *)piVar11);
        puVar4 = FUN_00494e00(*piVar3,extraout_EDX,uVar7);
        *(undefined4 **)(iVar1 + 0x10) = puVar4;
        *(undefined1 *)(iVar1 + 1) = 0xff;
      }
    }
    iVar5 = piVar3[1];
    iVar9 = *piVar3;
    iVar6 = iVar6 + 4;
    if ((iVar5 == 0) || (*(char *)(iVar9 + 0x38) != '\0')) {
      FUN_0047bc80(iVar9,0xfffffffe,(int *)"trigger");
    }
    else {
      if (iVar6 < 0) {
        iVar6 = piVar3[7] + -1;
      }
      iVar1 = iVar5 + iVar6 * 0x14;
      FUN_0047bc80(iVar9,(int)*(char *)(iVar1 + 1),*(int **)(iVar5 + 0x10 + iVar6 * 0x14));
      *(char **)(iVar1 + 0x10) = "trigger";
      *(undefined1 *)(iVar1 + 1) = 0xfe;
    }
    FUN_00492110(param_1,iVar12);
    FUN_004ae830(piVar3,0x2d,0,0);
    FUN_004ae8f0(piVar3,0x6e,iVar12,0,0,(int *)*param_2,0);
    if (param_1[0x13] < 3) {
      param_1[0x13] = 3;
    }
  }
  return;
}


/* FUN_00495df0 @ 00495df0  kind=lib  attributed-by=lib-string  size=972 */

void __cdecl FUN_00495df0(int *param_1,int *param_2,int *param_3,int *param_4)

{
  byte bVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  ushort uVar4;
  int iVar5;
  undefined2 extraout_var;
  int *piVar6;
  undefined4 *puVar7;
  char *pcVar8;
  int *piVar9;
  byte *pbVar10;
  uint uVar11;
  int iVar12;
  int local_88;
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
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  iVar12 = *param_1;
  if ((((param_3 != (int *)0x0) || (param_4 != (int *)0x0)) && (*(char *)(iVar12 + 0x38) == '\0'))
     && (puVar2 = (undefined4 *)param_1[0x7f], puVar2 != (undefined4 *)0x0)) {
    iVar5 = FUN_004a7ba0(iVar12,puVar2[0x10]);
    piVar6 = (int *)puVar2[6];
    if (piVar6 != (int *)0x0) {
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
      if (0 < *piVar6) {
        local_88 = 0;
        do {
          uVar4 = FUN_004a69e0((int *)&local_28,*(int *)(local_88 + piVar6[2]));
          if (CONCAT22(extraout_var,uVar4) != 0) goto LAB_004961ac;
          local_7c = local_7c + 1;
          local_88 = local_88 + 0x14;
        } while (local_7c < *piVar6);
      }
    }
    if ((*(char *)(iVar12 + 0x81) == '\0') ||
       (puVar2[8] = *(undefined4 *)(iVar12 + 0x7c), *(char *)(iVar12 + 0x81) == '\0')) {
      piVar6 = (int *)param_1[2];
      if (piVar6 == (int *)0x0) {
        piVar6 = FUN_004af150(*param_1);
        param_1[2] = (int)piVar6;
        if (piVar6 == (int *)0x0) goto LAB_004961ac;
        FUN_004ae760(piVar6,0x94);
      }
      FUN_004ae7d0(piVar6,0x2d,0);
      if (param_4 == (int *)0x0) {
        pcVar8 = (char *)FUN_004a02d0(iVar12,(byte *)"CREATE %s %.*s");
      }
      else {
        FUN_004ae890(piVar6,0x28,1,param_1[0x65],iVar5);
        if (piVar6[1] != 0) {
          *(undefined1 *)(piVar6[1] + -0x11 + piVar6[7] * 0x14) = 2;
        }
        param_1[0x12] = 2;
        local_18 = CONCAT62(local_18._2_6_,8);
        local_18 = CONCAT44(1,(undefined4)local_18);
        local_10 = 0;
        FUN_004a7e30(param_1,param_4,(byte *)&local_18);
        FUN_004ae7d0(piVar6,0x2d,1);
        if (param_1[0x11] == 0) {
          puVar7 = FUN_004a6bb0(param_1,param_4);
          if (puVar7 == (undefined4 *)0x0) goto LAB_004961ac;
          *(undefined2 *)((int)puVar2 + 0x26) = *(undefined2 *)((int)puVar7 + 0x26);
          puVar2[1] = puVar7[1];
          *(undefined2 *)((int)puVar7 + 0x26) = 0;
          puVar7[1] = 0;
          FUN_00495300(iVar12,puVar7);
        }
        pcVar8 = FUN_004765c0(iVar12,puVar2);
      }
      FUN_004a0da0(param_1,(byte *)
                           "UPDATE %Q.%s SET type=\'%s\', name=%Q, tbl_name=%Q, rootpage=#%d, sql=%Q WHERE rowid=#%d"
                  );
      FUN_00494b00(iVar12,(undefined4 *)pcVar8);
      FUN_00492110(param_1,iVar5);
      if (((*(byte *)((int)puVar2 + 0x2a) & 8) != 0) &&
         (*(int *)(*(int *)(*(int *)(iVar12 + 0x10) + iVar5 * 0x10 + 0xc) + 0x48) == 0)) {
        FUN_004a0da0(param_1,(byte *)"CREATE TABLE %Q.sqlite_sequence(name,seq)");
      }
      piVar9 = (int *)FUN_004a02d0(iVar12,(byte *)"tbl_name=\'%q\'");
      FUN_004aeac0(piVar6,iVar5,piVar9);
      if (*(char *)(iVar12 + 0x81) == '\0') goto LAB_004961ac;
    }
    pbVar3 = (byte *)*puVar2;
    uVar11 = 0;
    if (pbVar3 != (byte *)0x0) {
      bVar1 = *pbVar3;
      pbVar10 = pbVar3;
      while (bVar1 != 0) {
        pbVar10 = pbVar10 + 1;
        bVar1 = *pbVar10;
      }
      uVar11 = (int)pbVar10 - (int)pbVar3 & 0x3fffffff;
    }
    uVar11 = FUN_0049d6f0((uint *)(puVar2[0x10] + 8),pbVar3,uVar11,(uint)puVar2);
    if (uVar11 != 0) {
      *(undefined1 *)(iVar12 + 0x38) = 1;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    param_1[0x7f] = 0;
    *(uint *)(iVar12 + 0x18) = *(uint *)(iVar12 + 0x18) | 2;
    if (puVar2[3] == 0) {
      if (*param_2 == 0) {
        param_2 = param_3;
      }
      iVar12 = FUN_004ad230((byte *)param_1[0x82],*param_2 - param_1[0x82]);
      puVar2[0xb] = iVar12 + 0xd;
    }
  }
LAB_004961ac:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004961c0 @ 004961c0  kind=lib  attributed-by=lib-string  size=48 */

char * __cdecl FUN_004961c0(uint param_1)

{
  char *pcVar1;
  
  if (param_1 == 0x204) {
    pcVar1 = "abort due to ROLLBACK";
  }
  else if ((0x1a < (param_1 & 0xff)) ||
          (pcVar1 = (&PTR_s_not_an_error_00569918)[param_1 & 0xff], pcVar1 == (char *)0x0)) {
    return "unknown error";
  }
  return pcVar1;
}


/* FUN_00497780 @ 00497780  kind=lib  attributed-by=lib-string  size=3065 */

int __cdecl FUN_00497780(int *param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  int extraout_EDX;
  byte *extraout_EDX_00;
  undefined4 extraout_EDX_01;
  int *piVar10;
  undefined1 uVar11;
  char *pcVar12;
  undefined1 local_88 [8];
  undefined8 *local_80;
  int *local_7c;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 local_4c;
  undefined8 local_44;
  undefined8 local_3c;
  undefined4 local_34;
  uint local_30;
  int local_2c;
  int *local_28;
  char *local_24;
  int *local_20;
  int local_1c;
  char *local_18;
  int *local_14;
  int *local_10;
  int local_c;
  int local_8;
  
  iVar6 = param_3;
  piVar4 = param_1;
  local_2c = *param_1;
  piVar9 = (int *)param_1[2];
  local_8 = param_3;
  local_c = 0;
  local_10 = (int *)0x0;
  if (piVar9 == (int *)0x0) {
    return 0;
  }
  local_14 = (int *)0x62;
  if (param_2 != (byte *)0x0) {
    local_14 = (int *)(uint)*param_2;
  }
  local_28 = piVar9;
  switch(local_14) {
  case (int *)0x13:
  case (int *)0x5d:
    iVar6 = FUN_00498470((int)param_1,*(undefined4 *)(param_2 + 8),&local_c);
    local_8 = param_3;
    FUN_004ae830(piVar9,(char)local_14,iVar6,param_3);
    break;
  case (int *)0x14:
  case (int *)0x74:
    iVar6 = FUN_00492f00(param_1,(char *)param_2,0,0);
    return iVar6;
  default:
    puVar7 = (undefined4 *)(*(int **)(param_2 + 0x10))[2];
    local_18 = (char *)**(int **)(param_2 + 0x10);
    param_1 = (int *)0x0;
    local_28 = (int *)FUN_004b6b80(piVar9);
    local_20 = *(int **)(param_2 + 8);
    if (local_20 != (int *)0x0) {
      local_5c = *(undefined8 *)local_20;
      local_54 = *(undefined8 *)((int)local_20 + 8);
      local_4c = *(undefined8 *)((int)local_20 + 0x10);
      local_44 = *(undefined8 *)((int)local_20 + 0x18);
      local_3c = *(undefined8 *)((int)local_20 + 0x20);
      local_34 = *(undefined4 *)((int)local_20 + 0x28);
      iVar6 = FUN_00498470((int)piVar4,local_20,&local_c);
      local_44 = CONCAT44(local_44._4_4_,iVar6);
      local_80 = &local_5c;
      param_1 = (int *)local_88;
      local_5c = CONCAT71(local_5c._1_7_,0x84);
      local_88[0] = 0x4c;
    }
    if (0 < (int)local_18) {
      local_18 = (char *)(((int)local_18 - 1U >> 1) + 1);
      do {
        piVar4[0x17] = piVar4[0x17] + 1;
        piVar10 = (int *)*puVar7;
        if (local_20 != (int *)0x0) {
          piVar10 = param_1;
          local_7c = (int *)*puVar7;
        }
        param_1 = piVar10;
        local_2c = FUN_004b6b80(piVar9);
        FUN_004988a0(piVar4,(char *)param_1,local_2c,8);
        pbVar1 = (byte *)puVar7[5];
        if ((pbVar1 == (byte *)0x0) || (*pbVar1 != 0x84)) {
          iVar6 = FUN_00497780(piVar4,pbVar1,param_3);
          if ((iVar6 != param_3) && (piVar10 = (int *)piVar4[2], piVar10 != (int *)0x0)) {
            uVar11 = 0xf;
            goto LAB_0049822e;
          }
        }
        else {
          iVar6 = *(int *)(pbVar1 + 0x18);
          uVar11 = 0xe;
          piVar10 = (int *)piVar4[2];
LAB_0049822e:
          FUN_004ae830(piVar10,uVar11,iVar6,param_3);
        }
        local_1c = piVar9[7];
        if ((local_1c < piVar9[8]) || (iVar6 = FUN_0047de10(piVar9), iVar6 == 0)) {
          piVar9[7] = piVar9[7] + 1;
          iVar6 = piVar9[1];
          *(undefined2 *)(iVar6 + local_1c * 0x14) = 1;
          *(undefined1 *)(iVar6 + 3 + local_1c * 0x14) = 0;
          *(undefined4 *)(iVar6 + 4 + local_1c * 0x14) = 0;
          *(int **)(iVar6 + 8 + local_1c * 0x14) = local_28;
          *(undefined4 *)(iVar6 + 0xc + local_1c * 0x14) = 0;
          *(undefined4 *)(iVar6 + 0x10 + local_1c * 0x14) = 0;
        }
        FUN_00496d40((int)piVar4,1);
        if (piVar9[10] != 0) {
          *(int *)(piVar9[10] - (local_2c * 4 + 4)) = piVar9[7];
        }
        puVar7 = puVar7 + 10;
        local_18 = (char *)((int)local_18 + -1);
      } while (local_18 != (char *)0x0);
    }
    if (*(int *)(param_2 + 0xc) == 0) {
      iVar6 = piVar9[7];
      if ((iVar6 < piVar9[8]) || (iVar8 = FUN_0047de10(piVar9), iVar8 == 0)) {
        iVar8 = piVar9[1];
        piVar9[7] = piVar9[7] + 1;
        *(undefined2 *)(iVar8 + iVar6 * 0x14) = 10;
        *(undefined1 *)(iVar8 + 3 + iVar6 * 0x14) = 0;
        *(undefined4 *)(iVar8 + 4 + iVar6 * 0x14) = 0;
        *(int *)(iVar8 + 8 + iVar6 * 0x14) = param_3;
        *(undefined4 *)(iVar8 + 0xc + iVar6 * 0x14) = 0;
        *(undefined4 *)(iVar8 + 0x10 + iVar6 * 0x14) = 0;
      }
      goto LAB_00498354;
    }
    piVar4[0x17] = piVar4[0x17] + 1;
    pbVar1 = *(byte **)(param_2 + 0xc);
    if ((pbVar1 == (byte *)0x0) || (*pbVar1 != 0x84)) {
      iVar6 = FUN_00497780(piVar4,pbVar1,param_3);
      if ((iVar6 != param_3) && (piVar10 = (int *)piVar4[2], piVar10 != (int *)0x0)) {
        uVar11 = 0xf;
        goto LAB_004982fa;
      }
    }
    else {
      iVar6 = *(int *)(pbVar1 + 0x18);
      uVar11 = 0xe;
      piVar10 = (int *)piVar4[2];
LAB_004982fa:
      FUN_004ae830(piVar10,uVar11,iVar6,param_3);
    }
    FUN_00496d40((int)piVar4,1);
LAB_00498354:
    if (piVar9[10] == 0) {
      return param_3;
    }
    *(int *)(piVar9[10] - ((int)local_28 * 4 + 4)) = piVar9[7];
    return param_3;
  case (int *)0x18:
  case (int *)0x5c:
  case (int *)0x9d:
    iVar6 = FUN_00497780(param_1,*(byte **)(param_2 + 8),param_3);
    return iVar6;
  case (int *)0x25:
    local_8 = FUN_00497780(param_1,*(byte **)(param_2 + 8),param_3);
    cVar2 = FUN_0048bf70(*(byte **)(param_2 + 4));
    if (local_8 != param_3) {
      FUN_004ae830(piVar9,0xf,local_8,param_3);
      local_8 = param_3;
    }
    FUN_004ae7d0(piVar9,cVar2 + ',',local_8);
    iVar6 = local_8;
    FUN_00496d90((int)param_1,local_8,1);
    return iVar6;
  case (int *)0x38:
    if (param_1[0x6d] == 0) {
      FUN_004962b0(param_1,(byte *)"RAISE() may only be used within a trigger-program");
      return 0;
    }
    if (param_2[1] == 2) {
      if ((int *)param_1[0x6c] != (int *)0x0) {
        piVar4 = (int *)param_1[0x6c];
      }
      *(undefined1 *)(piVar4 + 6) = 1;
    }
    if (param_2[1] != 4) {
      FUN_0049d510(param_1,(int)(char)param_2[1],*(int **)(param_2 + 4),0);
      return param_3;
    }
    FUN_004ae8f0(piVar9,6,0,4,0,*(int **)(param_2 + 4),0);
    return param_3;
  case (int *)0x3c:
    iVar6 = *(int *)(param_2 + 0x28);
    FUN_004ae830(piVar9,0x74,
                 *(short *)(param_2 + 0x1c) + 1 +
                 (*(short *)(iVar6 + 0x26) + 1) * *(int *)(param_2 + 0x18),param_3);
    if (*(short *)(param_2 + 0x1c) < 0) {
      return param_3;
    }
    if (*(char *)(*(int *)(iVar6 + 4) + 0x15 + *(short *)(param_2 + 0x1c) * 0x18) != 'e') {
      return param_3;
    }
    FUN_004ae7d0(piVar9,0x16,param_3);
    return param_3;
  case (int *)0x44:
  case (int *)0x45:
  case (int *)0x52:
  case (int *)0x53:
  case (int *)0x54:
  case (int *)0x55:
  case (int *)0x56:
  case (int *)0x57:
  case (int *)0x58:
  case (int *)0x59:
  case (int *)0x5a:
  case (int *)0x5b:
    iVar6 = FUN_00498470((int)param_1,*(undefined4 *)(param_2 + 8),&local_c);
    iVar8 = FUN_00498470((int)param_1,*(undefined4 *)(param_2 + 0xc),(int *)&local_10);
    FUN_004ae890(piVar9,(char)local_14,iVar8,iVar6,param_3);
    break;
  case (int *)0x46:
  case (int *)0x92:
    iVar6 = FUN_00498470((int)param_1,*(undefined4 *)(param_2 + 8),&local_c);
    iVar8 = FUN_00498470((int)param_1,*(undefined4 *)(param_2 + 0xc),(int *)&local_10);
    FUN_004733e0(param_1,*(char **)(param_2 + 8),*(char **)(param_2 + 0xc),
                 (local_14 == (int *)0x46) + 'K',iVar6,iVar8,param_3,0x90);
    break;
  case (int *)0x47:
    local_18 = *(char **)(param_2 + 8);
    puVar7 = *(undefined4 **)(*(int *)(param_2 + 0x10) + 8);
    pcVar12 = (char *)*puVar7;
    iVar8 = FUN_00498470((int)param_1,local_18,&local_c);
    FUN_00498470((int)param_1,pcVar12,(int *)&local_10);
    local_20 = (int *)FUN_0049cb40((int)param_1);
    local_1c = FUN_0049cb40((int)param_1);
    FUN_004733e0(param_1,local_18,pcVar12,0x50,iVar8,extraout_EDX_01,local_20,0x10);
    pcVar12 = (char *)puVar7[5];
    FUN_004a68f0((int)param_1,(int)local_10);
    iVar5 = FUN_00498470((int)param_1,pcVar12,(int *)&local_10);
    iVar6 = local_1c;
    FUN_004733e0(param_1,local_18,pcVar12,0x4e,iVar8,iVar5,local_1c,0x10);
    piVar9 = local_20;
    FUN_004ae890(local_28,0x45,local_20,iVar6,param_3);
    FUN_004a68f0((int)param_1,(int)piVar9);
    FUN_004a68f0((int)param_1,iVar6);
    break;
  case (int *)0x48:
    iVar6 = FUN_004b6b80(piVar9);
    iVar8 = FUN_004b6b80(piVar9);
    FUN_004ae830(local_28,10,0,param_3);
    FUN_00497220(param_1,(char *)param_2,iVar6,iVar8);
    piVar9 = local_28;
    FUN_004ae830(local_28,7,1,param_3);
    FUN_004b87b0((int)piVar9,iVar6);
    FUN_004ae830(piVar9,0x14,param_3,0);
    FUN_004b87b0((int)piVar9,iVar8);
    return local_8;
  case (int *)0x49:
  case (int *)0x4a:
    FUN_004ae830(piVar9,7,1,param_3);
    iVar6 = FUN_00498470((int)param_1,*(undefined4 *)(param_2 + 8),&local_c);
    uVar3 = FUN_004ae7d0(piVar9,(char)local_14,iVar6);
    FUN_004ae830(piVar9,0x14,param_3,0xffffffff);
    FUN_004b6720((int)piVar9,uVar3);
    break;
  case (int *)0x4b:
  case (int *)0x4c:
  case (int *)0x4d:
  case (int *)0x4e:
  case (int *)0x4f:
  case (int *)0x50:
    iVar6 = FUN_00498470((int)param_1,*(undefined4 *)(param_2 + 8),&local_c);
    iVar8 = FUN_00498470((int)param_1,*(undefined4 *)(param_2 + 0xc),(int *)&local_10);
    FUN_004733e0(param_1,*(char **)(param_2 + 8),*(char **)(param_2 + 0xc),(char)local_14,iVar6,
                 iVar8,param_3,0x10);
    break;
  case (int *)0x5e:
    FUN_004ae8f0(piVar9,0x5e,0,param_3,0,*(int **)(param_2 + 4),0);
    return param_3;
  case (int *)0x62:
    FUN_004ae830(piVar9,10,0,param_3);
    return param_3;
  case (int *)0x81:
    FUN_00473790((int)param_1,(int)param_2,0,param_3);
    return param_3;
  case (int *)0x82:
    FUN_00474a90(piVar9,*(byte **)(param_2 + 4),0,param_3);
    return param_3;
  case (int *)0x83:
    uVar3 = FUN_004aa9b0((char *)(*(int *)(param_2 + 4) + 2));
    piVar4 = FUN_0049d800(*piVar9,extraout_EDX,uVar3 - 1);
    FUN_004ae8f0(piVar9,0xb,(int)(uVar3 - 1) / 2,param_3,0,piVar4,0xffffffff);
    return local_8;
  case (int *)0x84:
    return *(int *)(param_2 + 0x18);
  case (int *)0x85:
    FUN_004ae830(piVar9,0xc,(int)*(short *)(param_2 + 0x1c),param_3);
    if (*(char *)(*(int *)(param_2 + 4) + 1) == '\0') {
      return param_3;
    }
    iVar6 = piVar9[1];
    piVar4 = *(int **)(param_1[0x7b] + -4 + *(short *)(param_2 + 0x1c) * 4);
    iVar8 = *piVar9;
    if ((iVar6 != 0) && (*(char *)(iVar8 + 0x38) == '\0')) {
      iVar5 = iVar6 + (piVar9[7] + -1) * 0x14;
      FUN_0047bc80(iVar8,(int)*(char *)(iVar5 + 1),*(int **)(iVar6 + 0x10 + (piVar9[7] + -1) * 0x14)
                  );
      *(undefined4 *)(iVar5 + 0x10) = 0;
      if (piVar4 != (int *)0x0) {
        *(int **)(iVar5 + 0x10) = piVar4;
        *(undefined1 *)(iVar5 + 1) = 0xfe;
        return local_8;
      }
      *(undefined4 *)(iVar5 + 0x10) = 0;
      *(undefined1 *)(iVar5 + 1) = 0;
      return local_8;
    }
    FUN_0047bc80(iVar8,0xfffffffe,piVar4);
    return param_3;
  case (int *)0x97:
  case (int *)0x9b:
    local_18 = (char *)0x0;
    local_20 = (int *)0x0;
    local_1c = CONCAT31(local_1c._1_3_,
                        *(undefined1 *)(*(int *)(*(int *)(local_2c + 0x10) + 0xc) + 0x4d));
    if ((*(ushort *)(param_2 + 2) & 0x4000) == 0) {
      local_10 = *(int **)(param_2 + 0x10);
      if (local_10 == (int *)0x0) goto LAB_00497c20;
      local_c = *local_10;
    }
    else {
      local_10 = (int *)0x0;
LAB_00497c20:
      local_c = 0;
    }
    local_24 = *(char **)(param_2 + 4);
    local_30 = FUN_004aa9b0(local_24);
    local_14 = (int *)FUN_004995c0(local_2c,extraout_EDX_00,local_30,local_c,(byte)local_1c,'\0');
    if (local_14 == (int *)0x0) {
      FUN_004962b0(param_1,(byte *)"unknown function: %.*s()");
      return param_3;
    }
    if ((*local_14 & 0x20000000) != 0) {
      local_18 = (char *)FUN_004b6b80(piVar9);
      FUN_00496f30(param_1,*(byte **)local_10[2],param_3);
      if (1 < local_c) {
        param_1 = (int *)(local_c + -1);
        param_3 = 0x14;
        do {
          FUN_004ae830(piVar9,0x4a,iVar6,local_18);
          FUN_00496d90((int)piVar4,iVar6,1);
          piVar4[0x17] = piVar4[0x17] + 1;
          FUN_00496f30(piVar4,*(byte **)(param_3 + local_10[2]),iVar6);
          FUN_00496d40((int)piVar4,1);
          param_3 = param_3 + 0x14;
          param_1 = (int *)((int)param_1 + -1);
        } while (param_1 != (int *)0x0);
      }
      FUN_004b87b0((int)piVar9,(int)local_18);
      return iVar6;
    }
    if (local_10 == (int *)0x0) {
      local_1c = 0;
    }
    else {
      local_1c = FUN_0049cb00((int)param_1,local_c);
      if ((*(byte *)((int)local_14 + 3) & 0xc0) != 0) {
        local_24 = *(char **)local_10[2];
        if ((*local_24 == -0x68) || (*local_24 == -0x66)) {
          local_24[0x23] = *(byte *)((int)local_14 + 3);
        }
      }
      param_1[0x17] = param_1[0x17] + 1;
      FUN_00497010((int)param_1,local_10,local_1c,1);
      FUN_00496d40((int)param_1,1);
    }
    if ((local_c < 2) || ((param_2[2] & 0x80) == 0)) {
      if (local_c < 1) goto LAB_00497da7;
      pcVar12 = *(char **)local_10[2];
    }
    else {
      pcVar12 = *(char **)(local_10[2] + 0x14);
    }
    local_14 = (int *)FUN_004b9db0(local_2c,(undefined8 *)local_14,local_c,pcVar12);
LAB_00497da7:
    piVar4 = local_10;
    local_30 = 0;
    local_24 = (char *)0x1;
    if (0 < local_c) {
      iVar8 = 0;
      iVar6 = local_c;
      do {
        if (((int)local_30 < 0x20) &&
           (iVar5 = FUN_00498e10(*(int *)(piVar4[2] + iVar8)), iVar6 = local_c, iVar5 != 0)) {
          local_18 = (char *)((uint)local_18 | (uint)local_24);
        }
        if (((*local_14 & 0x8000000) != 0) && (local_20 == (int *)0x0)) {
          local_20 = (int *)FUN_004984d0(param_1,*(char **)(piVar4[2] + iVar8));
          iVar6 = local_c;
        }
        local_24 = (char *)((int)local_24 << 1 | (uint)((int)local_24 < 0));
        local_30 = local_30 + 1;
        iVar8 = iVar8 + 0x14;
        piVar9 = local_28;
      } while ((int)local_30 < iVar6);
    }
    if ((*local_14 & 0x8000000) != 0) {
      piVar4 = local_20;
      if (local_20 == (int *)0x0) {
        piVar4 = *(int **)(local_2c + 8);
      }
      FUN_004ae8f0(piVar9,0x11,0,0,0,piVar4,0xfffffffc);
    }
    FUN_004ae8f0(piVar9,0x12,local_18,local_1c,param_3,local_14,0xfffffffb);
    iVar6 = local_c;
    FUN_004aee30((int)piVar9,(char)local_c);
    if (iVar6 == 0) {
      return local_8;
    }
    FUN_004a68c0((int)param_1,local_1c,iVar6);
    return local_8;
  case (int *)0x99:
    if (*(int *)(param_2 + 0x24) != 0) {
      return *(int *)(*(int *)(*(int *)(param_2 + 0x24) + 0x20) + 8 +
                     *(short *)(param_2 + 0x1e) * 0x10);
    }
    FUN_004962b0(param_1,(byte *)"misuse of aggregate: %s()");
    return param_3;
  case (int *)0x9a:
    iVar6 = *(int *)(*(int *)(param_2 + 0x24) + 0x14) + *(short *)(param_2 + 0x1e) * 0x18;
    pcVar12 = *(char **)(param_2 + 0x24);
    if (*pcVar12 == '\0') {
      return *(int *)(iVar6 + 0x10);
    }
    if (pcVar12[1] != '\0') {
      FUN_004ae890(piVar9,0x1d,*(undefined4 *)(pcVar12 + 8),*(undefined4 *)(iVar6 + 0xc),param_3);
      return param_3;
    }
  case (int *)0x98:
    if (-1 < *(int *)(param_2 + 0x18)) {
      iVar6 = FUN_004970c0(param_1,*(int **)(param_2 + 0x28),(int)*(short *)(param_2 + 0x1c),
                           *(int *)(param_2 + 0x18),param_3,param_2[0x23]);
      return iVar6;
    }
    return (int)*(short *)(param_2 + 0x1c) + param_1[0x16];
  case (int *)0x9c:
    pcVar12 = *(char **)(param_2 + 8);
    if (*pcVar12 == -0x7f) {
      FUN_00473790((int)param_1,(int)pcVar12,1,param_3);
      local_8 = param_3;
    }
    else if (*pcVar12 == -0x7e) {
      FUN_00474a90(piVar9,*(byte **)(pcVar12 + 4),1,param_3);
      local_8 = param_3;
    }
    else {
      iVar6 = FUN_0049cb40((int)param_1);
      local_c = iVar6;
      FUN_004ae830(piVar9,7,0,iVar6);
      iVar8 = FUN_00498470((int)param_1,*(undefined4 *)(param_2 + 8),(int *)&local_10);
      FUN_004ae890(piVar9,0x57,iVar8,iVar6,param_3);
      local_8 = param_3;
    }
  }
  if ((local_c != 0) && (*(byte *)((int)param_1 + 0x13) < 8)) {
    iVar6 = 0;
    piVar9 = param_1 + 0x19;
    do {
      if (piVar9[4] == local_c) {
        *(undefined1 *)(piVar9 + 2) = 1;
        goto LAB_00497ffd;
      }
      iVar6 = iVar6 + 1;
      piVar9 = piVar9 + 6;
    } while (iVar6 < 10);
    param_1[*(byte *)((int)param_1 + 0x13) + 7] = local_c;
    *(char *)((int)param_1 + 0x13) = *(char *)((int)param_1 + 0x13) + '\x01';
  }
LAB_00497ffd:
  if ((local_10 != (int *)0x0) && (*(byte *)((int)param_1 + 0x13) < 8)) {
    iVar6 = 0;
    piVar9 = param_1 + 0x19;
    do {
      if ((int *)piVar9[4] == local_10) {
        *(undefined1 *)(piVar9 + 2) = 1;
        return local_8;
      }
      iVar6 = iVar6 + 1;
      piVar9 = piVar9 + 6;
    } while (iVar6 < 10);
    param_1[*(byte *)((int)param_1 + 0x13) + 7] = (int)local_10;
    *(char *)((int)param_1 + 0x13) = *(char *)((int)param_1 + 0x13) + '\x01';
    return local_8;
  }
  return local_8;
}


/* FUN_0049a050 @ 0049a050  kind=lib  attributed-by=lib-string  size=602 */

void __cdecl FUN_0049a050(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  char cVar1;
  byte *pbVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  uint uVar7;
  uint *extraout_EDX;
  byte *extraout_EDX_00;
  undefined4 *puVar8;
  int iVar9;
  int *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  char *local_24;
  char **local_20;
  char *local_1c;
  uint local_18;
  int *local_14;
  int local_10;
  byte *local_c;
  int local_8;
  
  puVar8 = (undefined4 *)param_1[0x80];
  iVar9 = *param_1;
  param_1[0x80] = 0;
  local_10 = iVar9;
  if (param_1[0x11] == 0) {
    if (puVar8 == (undefined4 *)0x0) {
      FUN_00495480(iVar9,param_2);
      return;
    }
    local_c = (byte *)*puVar8;
    local_8 = FUN_004a7ba0(iVar9,puVar8[5]);
    puVar8[7] = param_2;
    for (; param_2 != (undefined4 *)0x0; param_2 = (undefined4 *)param_2[8]) {
      param_2[1] = puVar8;
    }
    local_1c = (char *)*puVar8;
    local_18 = 0;
    if (local_1c != (char *)0x0) {
      cVar1 = *local_1c;
      pcVar3 = local_1c;
      while (cVar1 != '\0') {
        pcVar3 = pcVar3 + 1;
        cVar1 = *pcVar3;
      }
      local_18 = (int)pcVar3 - (int)local_1c & 0x3fffffff;
    }
    param_2 = (undefined4 *)0x0;
    if ((-1 < local_8) && (local_8 != 1)) {
      local_30 = param_1;
      local_28 = *(undefined4 *)(*(int *)(*param_1 + 0x10) + local_8 * 0x10);
      local_2c = *(undefined4 *)(*(int *)(*param_1 + 0x10) + 0xc + local_8 * 0x10);
      local_20 = &local_1c;
      local_24 = "trigger";
      iVar4 = FUN_0049a530(&local_30,puVar8[7]);
      if (iVar4 != 0) goto LAB_0049a25f;
    }
    if (*(char *)(iVar9 + 0x81) == '\0') {
      local_14 = FUN_0049d4d0(param_1);
      if (local_14 != (int *)0x0) {
        FUN_0048e5e0(param_1,0,local_8);
        puVar5 = FUN_00494e00(iVar9,(void *)*param_3,param_3[1]);
        FUN_004a0da0(param_1,(byte *)
                             "INSERT INTO %Q.%s VALUES(\'trigger\',%Q,%Q,0,\'CREATE TRIGGER %q\')");
        iVar9 = local_10;
        FUN_00494b00(local_10,puVar5);
        FUN_00492110(param_1,local_8);
        piVar6 = (int *)FUN_004a02d0(iVar9,(byte *)"type=\'trigger\' AND name=\'%q\'");
        FUN_004aeac0(local_14,local_8,piVar6);
        if (*(char *)(iVar9 + 0x81) != '\0') goto LAB_0049a1cf;
      }
    }
    else {
LAB_0049a1cf:
      pbVar2 = local_c;
      puVar5 = puVar8;
      uVar7 = FUN_004aa9b0((char *)local_c);
      puVar5 = (undefined4 *)FUN_0049d6f0(extraout_EDX,pbVar2,uVar7,(uint)puVar5);
      if (puVar5 == (undefined4 *)0x0) {
        if (puVar8[5] == puVar8[6]) {
          uVar7 = FUN_004aa9b0((char *)puVar8[1]);
          iVar4 = FUN_0049d6a0((uint *)(puVar8[6] + 8),extraout_EDX_00,uVar7);
          puVar8[8] = *(undefined4 *)(iVar4 + 0x3c);
          *(undefined4 **)(iVar4 + 0x3c) = puVar8;
          FUN_00495480(iVar9,(undefined4 *)0x0);
          return;
        }
        goto LAB_0049a299;
      }
      *(undefined1 *)(iVar9 + 0x38) = 1;
      puVar8 = puVar5;
    }
  }
LAB_0049a25f:
  if (puVar8 != (undefined4 *)0x0) {
    FUN_00495480(iVar9,(undefined4 *)puVar8[7]);
    FUN_00494b00(iVar9,(undefined4 *)*puVar8);
    FUN_00494b00(iVar9,(undefined4 *)puVar8[1]);
    FUN_00498790(iVar9,(undefined4 *)puVar8[3]);
    FUN_0049d910(iVar9,(int *)puVar8[4]);
    FUN_00494b00(iVar9,puVar8);
  }
LAB_0049a299:
  FUN_00495480(iVar9,param_2);
  return;
}


/* FUN_0049ac40 @ 0049ac40  kind=lib  attributed-by=lib-string  size=230 */

void __cdecl FUN_0049ac40(int *param_1,short *param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  short *psVar4;
  byte *pbVar5;
  
  iVar1 = *param_1;
  if ((((*(uint *)(iVar1 + 0x18) & 0x40000) != 0) && ((*(byte *)((int)param_3 + 0x2a) & 0x10) == 0))
     && (param_3[3] == 0)) {
    piVar2 = FUN_0049d4d0(param_1);
    iVar3 = FUN_0049ae70(param_3);
    if (iVar3 == 0) {
      iVar3 = param_3[4];
      if (iVar3 == 0) {
        return;
      }
      while (*(char *)(iVar3 + 0x18) == '\0') {
        iVar3 = *(int *)(iVar3 + 4);
        if (iVar3 == 0) {
          return;
        }
      }
      iVar3 = FUN_004b6b80(piVar2);
      FUN_004ae830(piVar2,0x76,1,iVar3);
    }
    else {
      iVar3 = 0;
    }
    pbVar5 = (byte *)0x0;
    *(undefined1 *)((int)param_1 + 0x1ca) = 1;
    psVar4 = FUN_004a9d60(iVar1,param_2,0);
    FUN_00494ec0(param_1,psVar4,pbVar5);
    *(undefined1 *)((int)param_1 + 0x1ca) = 0;
    FUN_004ae830(piVar2,0x76,0,piVar2[7] + 2);
    FUN_0049d510(param_1,2,(int *)"foreign key constraint failed",0xfffffffe);
    if ((iVar3 != 0) && (piVar2[10] != 0)) {
      *(int *)(piVar2[10] - (iVar3 * 4 + 4)) = piVar2[7];
    }
  }
  return;
}


/* FUN_0049c970 @ 0049c970  kind=lib  attributed-by=lib-string  size=178 */

int * __cdecl FUN_0049c970(int *param_1,byte param_2,int *param_3,byte *param_4)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *param_1;
  if (param_3 == (int *)0x0) {
    if (param_4 == (byte *)0x0) {
      piVar1 = *(int **)(iVar2 + 8);
    }
    else {
      piVar1 = FUN_004799f0(iVar2,param_4,0);
    }
    if ((piVar1 != (int *)0x0) && (param_3 = piVar1 + (uint)param_2 * 5 + -5, param_3 != (int *)0x0)
       ) goto LAB_0049c9b1;
LAB_0049c9b7:
    FUN_00471910(iVar2,(uint)param_2,(char *)param_4);
    if (param_4 == (byte *)0x0) {
      piVar1 = *(int **)(iVar2 + 8);
    }
    else {
      piVar1 = FUN_004799f0(iVar2,param_4,0);
    }
    if (piVar1 == (int *)0x0) goto LAB_0049ca0a;
    param_3 = piVar1 + (uint)param_2 * 5 + -5;
  }
  else {
LAB_0049c9b1:
    if (param_3[3] == 0) goto LAB_0049c9b7;
  }
  if (param_3 != (int *)0x0) {
    if (param_3[3] != 0) {
      return param_3;
    }
    iVar2 = FUN_004bd7c0(iVar2,(undefined8 *)param_3);
    if (iVar2 == 0) {
      return param_3;
    }
  }
LAB_0049ca0a:
  FUN_004962b0(param_1,(byte *)"no such collation sequence: %s");
  return (int *)0x0;
}


/* FUN_0049dd10 @ 0049dd10  kind=lib  attributed-by=lib-string  size=155 */

undefined4 __cdecl FUN_0049dd10(int *param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  if ((*(int *)(param_2 + 0x10) != 0) && (*(byte **)(param_2 + 0x40) != (byte *)0x0)) {
    puVar3 = *(undefined4 **)(*(int *)(param_2 + 0x10) + 8);
    while( true ) {
      if (puVar3 == (undefined4 *)0x0) {
        FUN_004962b0(param_1,(byte *)"no such index: %s");
        *(undefined1 *)((int)param_1 + 0x11) = 1;
        return 1;
      }
      pbVar4 = (byte *)*puVar3;
      bVar2 = *pbVar4;
      pbVar5 = *(byte **)(param_2 + 0x40);
      while ((bVar2 != 0 && ((&DAT_00569620)[bVar2] == (&DAT_00569620)[*pbVar5]))) {
        pbVar1 = pbVar4 + 1;
        pbVar4 = pbVar4 + 1;
        pbVar5 = pbVar5 + 1;
        bVar2 = *pbVar1;
      }
      if ((&DAT_00569620)[*pbVar4] == (&DAT_00569620)[*pbVar5]) break;
      puVar3 = (undefined4 *)puVar3[5];
    }
    *(undefined4 **)(param_2 + 0x44) = puVar3;
  }
  return 0;
}


/* FUN_0049de90 @ 0049de90  kind=lib  attributed-by=lib-string  size=527 */

undefined4 __cdecl FUN_0049de90(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  ushort *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  
  puVar4 = param_3;
  piVar3 = param_1;
  iVar7 = *param_1;
  iVar2 = param_1[2];
  puVar1 = (ushort *)(*(int *)(*(int *)(iVar7 + 0x10) + 0xc + iVar2 * 0x10) + 0x4e);
  *puVar1 = *puVar1 & 0xfffb;
  if (*(char *)(iVar7 + 0x38) != '\0') {
    iVar7 = *param_1;
    if (*(char *)(iVar7 + 0x38) == '\0') {
      if ((*(uint *)(iVar7 + 0x18) & 0x8000) == 0) {
        FUN_004a9a30((int *)param_1[1],iVar7,(byte *)"malformed database schema (%s)");
      }
      if (*(char *)(iVar7 + 0x38) == '\0') {
        FUN_004683f0(0xb,"database corruption at line %d of [%.10s]");
        piVar3[3] = 0xb;
        return 1;
      }
    }
    piVar3[3] = 7;
    return 1;
  }
  if (param_3 != (undefined4 *)0x0) {
    if (param_3[1] == 0) {
      FUN_00476240(param_1,*param_3,0);
      return 0;
    }
    if (((char *)param_3[2] != (char *)0x0) && (*(char *)param_3[2] != '\0')) {
      *(char *)(iVar7 + 0x80) = (char)iVar2;
      uVar5 = FUN_0048d2d0((char *)param_3[1]);
      *(uint *)(iVar7 + 0x7c) = uVar5;
      *(undefined1 *)(iVar7 + 0x82) = 0;
      FUN_004a0180(iVar7,(void *)puVar4[2],0xffffffff,0,0,&param_1,(int *)0x0);
      iVar2 = *(int *)(iVar7 + 0x2c);
      *(undefined1 *)(iVar7 + 0x80) = 0;
      if ((iVar2 != 0) && (*(char *)(iVar7 + 0x82) == '\0')) {
        piVar3[3] = iVar2;
        if (iVar2 == 7) {
          *(undefined1 *)(iVar7 + 0x38) = 1;
          FUN_0046aa30(param_1);
          return 0;
        }
        if ((iVar2 != 9) && ((char)iVar2 != '\x06')) {
          pcVar6 = FUN_004687f0(iVar7);
          FUN_00476240(piVar3,*puVar4,(int)pcVar6);
        }
      }
      FUN_0046aa30(param_1);
      return 0;
    }
    if ((byte *)*param_3 == (byte *)0x0) {
      iVar7 = *param_1;
      if (*(char *)(iVar7 + 0x38) == '\0') {
        if ((*(uint *)(iVar7 + 0x18) & 0x8000) == 0) {
          FUN_004a9a30((int *)param_1[1],iVar7,(byte *)"malformed database schema (%s)");
        }
        if (*(char *)(iVar7 + 0x38) == '\0') {
          FUN_004683f0(0xb,"database corruption at line %d of [%.10s]");
          piVar3[3] = 0xb;
          return 0;
        }
      }
      piVar3[3] = 7;
      return 0;
    }
    iVar7 = FUN_00499af0(iVar7,(byte *)*param_3,*(byte **)(*(int *)(iVar7 + 0x10) + iVar2 * 0x10));
    if ((iVar7 != 0) && (iVar7 = FUN_0049ca30((char *)puVar4[1],(uint *)(iVar7 + 0x28)), iVar7 == 0)
       ) {
      FUN_00476240(piVar3,*puVar4,0x5703d8);
    }
  }
  return 0;
}


/* FUN_0049e0a0 @ 0049e0a0  kind=lib  attributed-by=lib-string  size=1226 */

void __cdecl FUN_0049e0a0(int param_1,int param_2,int *param_3)

{
  ushort *puVar1;
  int *piVar2;
  int *piVar3;
  uint *puVar4;
  code *pcVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  byte *pbVar10;
  uint uVar11;
  byte bVar12;
  int iVar13;
  uint uVar14;
  undefined4 *puVar15;
  char *pcVar16;
  int local_4c;
  int *local_48;
  int local_44;
  uint local_40;
  int local_3c;
  int local_38;
  byte *local_34;
  int *local_30;
  int local_2c;
  int local_28;
  undefined4 *local_24;
  int local_20;
  undefined4 local_1c;
  byte *local_18;
  undefined *local_14;
  char *local_10;
  uint local_c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_20 = param_1;
  local_28 = param_2;
  local_30 = param_3;
  local_3c = 0;
  if (param_2 == 1) {
    local_10 = 
    "CREATE TEMP TABLE sqlite_temp_master(\n  type text,\n  name text,\n  tbl_name text,\n  rootpage integer,\n  sql text\n)"
    ;
    local_34 = (byte *)0x56e7b8;
  }
  else {
    local_10 = 
    "CREATE TABLE sqlite_master(\n  type text,\n  name text,\n  tbl_name text,\n  rootpage integer,\n  sql text\n)"
    ;
    local_34 = (byte *)0x56e7cc;
  }
  local_14 = &DAT_0056cd2c;
  local_c = 0;
  local_4c = param_1;
  local_44 = param_2;
  local_40 = 0;
  local_48 = param_3;
  local_18 = local_34;
  FUN_0049de90(&local_4c,3,&local_18);
  uVar14 = local_40;
  if (local_40 != 0) goto LAB_0049e54c;
  iVar13 = param_2 * 0x10;
  local_38 = iVar13;
  iVar8 = FUN_00499c30(param_1,local_34,*(byte **)(*(int *)(param_1 + 0x10) + iVar13));
  if (iVar8 != 0) {
    *(byte *)(iVar8 + 0x2a) = *(byte *)(iVar8 + 0x2a) | 1;
  }
  iVar13 = iVar13 + *(int *)(param_1 + 0x10);
  local_2c = iVar13;
  if (*(undefined4 **)(iVar13 + 4) == (undefined4 *)0x0) {
    if (param_2 == 1) {
      puVar1 = (ushort *)(*(int *)(*(int *)(param_1 + 0x10) + 0x1c) + 0x4e);
      *puVar1 = *puVar1 | 1;
    }
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  FUN_0048fbc0(*(undefined4 **)(iVar13 + 4));
  local_24 = *(undefined4 **)(iVar13 + 4);
  if (*(char *)(local_24 + 2) == '\0') {
    piVar3 = (int *)local_24[1];
    uVar14 = 0;
    FUN_0048fbc0(local_24);
    if ((*(char *)(local_24 + 2) != '\x02') && (*(char *)(local_24 + 2) != '\x01')) {
      if (((*(byte *)((int)piVar3 + 0x16) & 0x40) == 0) || (*(int *)piVar3[0x13] == 0)) {
        uVar14 = FUN_00487510((int)local_24,1,'\x01');
        if (uVar14 == 0) {
          *(ushort *)((int)piVar3 + 0x16) = *(ushort *)((int)piVar3 + 0x16) & 0xfff7;
          if (piVar3[0xb] == 0) {
            *(ushort *)((int)piVar3 + 0x16) = *(ushort *)((int)piVar3 + 0x16) | 8;
          }
LAB_0049e200:
          if (piVar3[3] == 0) goto code_r0x0049e206;
          if (uVar14 != 0) goto LAB_0049e21b;
          goto LAB_0049e257;
        }
      }
      else {
        uVar14 = 0x106;
      }
    }
    goto LAB_0049e2d5;
  }
LAB_0049e326:
  iVar8 = 0;
  puVar15 = &local_1c;
  do {
    iVar8 = iVar8 + 1;
    FUN_0048fe70(*(undefined4 **)(iVar13 + 4),iVar8,puVar15);
    param_1 = local_20;
    iVar7 = local_28;
    puVar15 = puVar15 + 1;
  } while (iVar8 < 5);
  **(undefined4 **)(iVar13 + 0xc) = local_1c;
  if (local_c == 0) {
    puVar1 = (ushort *)(*(int *)(*(int *)(local_20 + 0x10) + 0xc + local_38) + 0x4e);
    *puVar1 = *puVar1 | 4;
LAB_0049e3b0:
    *(undefined1 *)(*(int *)(iVar13 + 0xc) + 0x4d) =
         *(undefined1 *)(*(int *)(*(int *)(local_20 + 0x10) + 0xc) + 0x4d);
    if (*(int *)(*(int *)(iVar13 + 0xc) + 0x50) == 0) {
      puVar9 = local_14;
      if ((int)local_14 < 0) {
        if (local_14 != (undefined *)0x80000000) {
          puVar9 = (undefined *)-(int)local_14;
          goto LAB_0049e3df;
        }
        puVar9 = (undefined *)0x7fffffff;
      }
      else {
LAB_0049e3df:
        if (puVar9 == (undefined *)0x0) {
          puVar9 = (undefined *)0x7d0;
        }
      }
      *(undefined **)(*(int *)(iVar13 + 0xc) + 0x50) = puVar9;
      FUN_00491b30(*(undefined4 **)(iVar13 + 4),*(uint *)(*(int *)(iVar13 + 0xc) + 0x50));
    }
    *(char *)(*(int *)(iVar13 + 0xc) + 0x4c) = (char)local_18;
    if (*(char *)(*(int *)(iVar13 + 0xc) + 0x4c) == '\0') {
      *(undefined1 *)(*(int *)(iVar13 + 0xc) + 0x4c) = 1;
    }
    if (4 < *(byte *)(*(int *)(iVar13 + 0xc) + 0x4c)) {
      pcVar16 = "unsupported file format";
      goto LAB_0049e38b;
    }
    if ((iVar7 == 0) && (3 < (int)local_18)) {
      *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xffffefff;
    }
    pbVar10 = (byte *)FUN_004a02d0(param_1,(byte *)
                                           "SELECT name, rootpage, sql FROM \'%q\'.%s ORDER BY rowid"
                                  );
    uVar6 = *(undefined4 *)(local_20 + 0x10c);
    *(undefined4 *)(local_20 + 0x10c) = 0;
    uVar14 = FUN_00463120(local_20,pbVar10,FUN_0049de90,&local_4c,(int *)0x0);
    param_1 = local_20;
    if (uVar14 == 0) {
      uVar14 = local_40;
    }
    *(undefined4 *)(local_20 + 0x10c) = uVar6;
    FUN_00494b00(local_20,(undefined4 *)pbVar10);
    if (uVar14 == 0) {
      FUN_0048c830(param_1,local_28);
    }
    if (*(char *)(param_1 + 0x38) == '\0') {
      if (uVar14 != 0) goto LAB_0049e4bb;
LAB_0049e4c4:
      puVar1 = (ushort *)(*(int *)(*(int *)(param_1 + 0x10) + 0xc + local_38) + 0x4e);
      *puVar1 = *puVar1 | 1;
      uVar14 = 0;
    }
    else {
      uVar14 = 7;
      FUN_004a6940(param_1);
LAB_0049e4bb:
      if ((*(uint *)(param_1 + 0x18) & 0x8000) != 0) goto LAB_0049e4c4;
    }
  }
  else {
    if (local_28 == 0) {
      bVar12 = (byte)local_c & 3;
      if ((local_c & 3) == 0) {
        bVar12 = 1;
      }
      *(byte *)(*(int *)(*(int *)(local_20 + 0x10) + 0xc) + 0x4d) = bVar12;
      goto LAB_0049e3b0;
    }
    if (local_c == *(byte *)(*(int *)(*(int *)(local_20 + 0x10) + 0xc) + 0x4d)) goto LAB_0049e3b0;
    pcVar16 = "attached databases must use the same text encoding as main database";
LAB_0049e38b:
    FUN_004a9a30(local_30,param_1,(byte *)pcVar16);
    uVar14 = 1;
  }
  if (local_3c != 0) {
    piVar3 = *(int **)(local_2c + 4);
    FUN_0048fbc0(piVar3);
    uVar11 = FUN_0048f2f0(piVar3,(char *)0x0);
    if (uVar11 == 0) {
      FUN_0048f390(piVar3,0);
    }
    if (*(char *)((int)piVar3 + 9) != '\0') {
      piVar2 = piVar3 + 3;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        if (*(int *)(piVar3[1] + 0x38) != 0) {
          (*DAT_00582b20)(*(int *)(piVar3[1] + 0x38));
        }
        *(undefined1 *)((int)piVar3 + 10) = 0;
      }
    }
  }
  goto LAB_0049e523;
code_r0x0049e206:
  uVar14 = FUN_0047fc00(piVar3);
  if (uVar14 != 0) {
LAB_0049e21b:
    if ((*(char *)((int)piVar3 + 0x13) == '\0') && (piVar3[3] != 0)) {
      puVar15 = *(undefined4 **)(piVar3[3] + 0x44);
      if (puVar15 != (undefined4 *)0x0) {
        puVar4 = (uint *)puVar15[4];
        FUN_004a3a80(puVar15);
        if (*(int *)(puVar4[0x2d] + 0xc) == 0) {
          FUN_00484370(puVar4);
        }
      }
      piVar3[3] = 0;
    }
LAB_0049e257:
    if (((char)uVar14 != '\x05') || (*(char *)((int)piVar3 + 0x13) != '\0')) goto LAB_0049e296;
    iVar13 = piVar3[1];
    if (((undefined4 *)(iVar13 + 0x1ac) == (undefined4 *)0x0) ||
       ((pcVar5 = *(code **)(iVar13 + 0x1ac), pcVar5 == (code *)0x0 ||
        (*(int *)(iVar13 + 0x1b4) < 0)))) goto LAB_0049e296;
    iVar8 = (*pcVar5)(*(undefined4 *)(iVar13 + 0x1b0),*(int *)(iVar13 + 0x1b4));
    if (iVar8 == 0) goto LAB_0049e28f;
    *(int *)(iVar13 + 0x1b4) = *(int *)(iVar13 + 0x1b4) + 1;
  }
  goto LAB_0049e200;
LAB_0049e28f:
  *(undefined4 *)(iVar13 + 0x1b4) = 0xffffffff;
LAB_0049e296:
  param_1 = local_20;
  if (uVar14 == 0) {
    if ((*(char *)(local_24 + 2) == '\0') &&
       (piVar3[10] = piVar3[10] + 1, *(char *)((int)local_24 + 9) != '\0')) {
      *(undefined1 *)(local_24 + 9) = 1;
      local_24[10] = piVar3[0x12];
      piVar3[0x12] = (int)(local_24 + 7);
    }
    *(undefined1 *)(local_24 + 2) = 1;
    if (*(char *)((int)piVar3 + 0x13) == '\0') {
      *(undefined1 *)((int)piVar3 + 0x13) = 1;
    }
  }
LAB_0049e2d5:
  if (*(char *)((int)local_24 + 9) != '\0') {
    piVar3 = local_24 + 3;
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      if (*(int *)(local_24[1] + 0x38) != 0) {
        (*DAT_00582b20)(*(int *)(local_24[1] + 0x38));
      }
      *(undefined1 *)((int)local_24 + 10) = 0;
    }
  }
  if (uVar14 == 0) {
    local_3c = 1;
    iVar13 = local_2c;
    goto LAB_0049e326;
  }
  FUN_004961c0(uVar14);
  FUN_004a9a30(local_30,param_1,&DAT_0056de50);
LAB_0049e523:
  iVar13 = *(int *)(local_2c + 4);
  if (*(char *)(iVar13 + 9) != '\0') {
    piVar3 = (int *)(iVar13 + 0xc);
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      iVar8 = *(int *)(*(int *)(iVar13 + 4) + 0x38);
      if (iVar8 != 0) {
        (*DAT_00582b20)(iVar8);
      }
      *(undefined1 *)(iVar13 + 10) = 0;
    }
  }
LAB_0049e54c:
  if ((uVar14 == 7) || (uVar14 == 0xc0a)) {
    *(undefined1 *)(param_1 + 0x38) = 1;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0049fde0 @ 0049fde0  kind=lib  attributed-by=lib-string  size=540 */

undefined4 __cdecl FUN_0049fde0(int *param_1,char *param_2,char *param_3,int *param_4)

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
  undefined4 *_Dst;
  
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
      iVar7 = FUN_004666d0((byte *)"not authorized");
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
      iVar8 = FUN_004bc920();
      if (iVar8 == 0) {
        param_1 = (int *)FUN_004a0350(iVar6);
      }
      else {
        param_1 = (int *)0x0;
      }
      *piVar3 = (int)param_1;
      if (param_1 != (int *)0x0) {
        FUN_00466a80(iVar6,param_1,(byte *)"unable to open shared library [%s]");
        (**(code **)(iVar7 + 0x2c))(iVar7,uVar5 + 299,param_1);
      }
    }
    return 1;
  }
  pcVar9 = (code *)(**(code **)(iVar7 + 0x30))(iVar7,iVar8,param_4);
  if (pcVar9 == (code *)0x0) {
    if (piVar3 != (int *)0x0) {
      uVar5 = FUN_004aa9b0((char *)param_4);
      iVar6 = iVar6 + uVar5;
      iVar10 = FUN_004bc920();
      if (iVar10 == 0) {
        param_1 = (int *)FUN_004a0350(iVar6);
      }
      else {
        param_1 = (int *)0x0;
      }
      *piVar3 = (int)param_1;
      if (param_1 != (int *)0x0) {
        FUN_00466a80(iVar6,param_1,(byte *)"no entry point [%s] in shared library [%s]");
        (**(code **)(iVar7 + 0x2c))(iVar7,iVar6 + -1,param_1);
      }
      (**(code **)(iVar7 + 0x34))(iVar7,iVar8);
    }
    return 1;
  }
  iVar6 = (*pcVar9)(piVar2,&param_1,&PTR_FUN_0056a290);
  if (iVar6 == 0) {
    _Dst = FUN_00494c20((int)piVar2,piVar2[0x24] * 4 + 4);
    if (_Dst != (undefined4 *)0x0) {
      if (0 < piVar2[0x24]) {
        memcpy(_Dst,(void *)piVar2[0x25],piVar2[0x24] << 2);
      }
      FUN_00494b00((int)piVar2,(undefined4 *)piVar2[0x25]);
      piVar2[0x25] = (int)_Dst;
      _Dst[piVar2[0x24]] = iVar8;
      piVar2[0x24] = piVar2[0x24] + 1;
      return 0;
    }
    return 7;
  }
  if (piVar3 != (int *)0x0) {
    iVar6 = FUN_004666d0((byte *)"error during initialization: %s");
    *piVar3 = iVar6;
  }
  FUN_00466dd0((int)param_1);
  (**(code **)(iVar7 + 0x34))(iVar7,iVar8);
  return 1;
}


/* FUN_004a0080 @ 004a0080  kind=lib  attributed-by=lib-string  size=150 */

int __cdecl FUN_004a0080(int *param_1,int param_2,byte *param_3,byte *param_4)

{
  int iVar1;
  
  if ((*(char *)(*param_1 + 0x81) == '\0') &&
     (iVar1 = FUN_0049ddb0(*param_1,param_1 + 1), iVar1 != 0)) {
    param_1[0x11] = param_1[0x11] + 1;
    param_1[3] = iVar1;
    return 0;
  }
  iVar1 = FUN_00499c30(*param_1,param_3,param_4);
  if (iVar1 == 0) {
    if (param_4 != (byte *)0x0) {
      FUN_004962b0(param_1,(byte *)"%s: %s.%s");
      *(undefined1 *)((int)param_1 + 0x11) = 1;
      return 0;
    }
    FUN_004962b0(param_1,(byte *)"%s: %s");
    *(undefined1 *)((int)param_1 + 0x11) = 1;
  }
  return iVar1;
}


/* FUN_004a0e40 @ 004a0e40  kind=lib  attributed-by=lib-string  size=242 */

void __cdecl FUN_004a0e40(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  
  piVar3 = (int *)param_1[2];
  if (piVar3 == (int *)0x0) {
    piVar3 = FUN_004af150(*param_1);
    param_1[2] = (int)piVar3;
    if (piVar3 != (int *)0x0) {
      FUN_004ae760(piVar3,0x94);
    }
  }
  pcVar4 = "sqlite_temp_master";
  if (param_2 != 1) {
    pcVar4 = "sqlite_master";
  }
  FUN_004aab20(param_1,param_2,1,'\x01',(int)pcVar4);
  iVar2 = piVar3[7];
  if ((iVar2 < piVar3[8]) || (iVar5 = FUN_0047de10(piVar3), iVar5 == 0)) {
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
    FUN_0047bc80(iVar5,0xfffffff2,(int *)0x5);
  }
  else {
    iVar1 = iVar2 + (piVar3[7] + -1) * 0x14;
    FUN_0047bc80(iVar5,(int)*(char *)(iVar1 + 1),*(int **)(iVar2 + 0x10 + (piVar3[7] + -1) * 0x14));
    *(undefined4 *)(iVar1 + 0x10) = 5;
    *(undefined1 *)(iVar1 + 1) = 0xf2;
  }
  if (param_1[0x12] == 0) {
    param_1[0x12] = 1;
  }
  return;
}


/* FUN_004a6d60 @ 004a6d60  kind=lib  attributed-by=lib-string  size=91 */

void __cdecl FUN_004a6d60(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_0048d4b0(param_1,0x16,"ROLLBACK",0,0);
  if (iVar1 == 0) {
    piVar2 = (int *)param_1[2];
    if (piVar2 == (int *)0x0) {
      piVar2 = FUN_004af150(*param_1);
      param_1[2] = (int)piVar2;
      if (piVar2 == (int *)0x0) {
        return;
      }
      FUN_004ae760(piVar2,0x94);
    }
    FUN_004ae830(piVar2,0x22,1,1);
  }
  return;
}


/* FUN_004a74f0 @ 004a74f0  kind=lib  attributed-by=lib-string  size=858 */

uint __cdecl FUN_004a74f0(int *param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  char *pcVar11;
  uint local_14;
  int local_10;
  uint local_c;
  int *local_8;
  
  local_10 = 0;
  if (*(char *)(param_2 + 0x36) == '\0') {
    pcVar11 = "cannot VACUUM from within a transaction";
  }
  else {
    if (*(int *)(param_2 + 0x84) < 2) {
      uVar1 = *(uint *)(param_2 + 0x18);
      uVar2 = *(undefined4 *)(param_2 + 0x48);
      *(uint *)(param_2 + 0x18) = uVar1 & 0xfffaffff | 0x100500;
      uVar3 = *(undefined4 *)(param_2 + 0x4c);
      uVar4 = *(undefined4 *)(param_2 + 0x98);
      *(undefined4 *)(param_2 + 0x98) = 0;
      local_8 = *(int **)(*(int *)(param_2 + 0x10) + 4);
      iVar9 = *(int *)(param_2 + 0x14);
      local_14 = (uint)*(byte *)(*(int *)local_8[1] + 0xe);
      pcVar11 = "ATTACH \':memory:\' AS vacuum_db;";
      if (*(char *)(param_2 + 0x37) != '\x02') {
        pcVar11 = "ATTACH \'\' AS vacuum_db;";
      }
      uVar8 = FUN_00477530(param_2,param_1,(int *)pcVar11);
      iVar5 = *(int *)(param_2 + 0x14);
      if (iVar9 < iVar5) {
        local_10 = *(int *)(param_2 + 0x10) + -0x10 + iVar5 * 0x10;
      }
      piVar10 = local_8;
      if (uVar8 == 0) {
        piVar6 = *(int **)(*(int *)(param_2 + 0x10) + -0xc + iVar5 * 0x10);
        FUN_0048f290(piVar6);
        piVar10 = local_8;
        local_c = FUN_0048fee0(local_8);
        uVar8 = FUN_00477530(param_2,param_1,(int *)"PRAGMA vacuum_db.synchronous=OFF");
        if (((uVar8 == 0) && (uVar8 = FUN_00477530(param_2,param_1,(int *)"BEGIN;"), uVar8 == 0)) &&
           (uVar8 = FUN_0048ed50(piVar10,2), uVar8 == 0)) {
          if (*(char *)(*(int *)piVar10[1] + 5) == '\x05') {
            *(undefined4 *)(param_2 + 0x40) = 0;
          }
          iVar9 = FUN_00491c00(piVar6,*(uint *)(piVar10[1] + 0x20),local_c,0);
          if (((iVar9 == 0) &&
              ((local_14 != 0 ||
               (iVar9 = FUN_00491c00(piVar6,*(uint *)(param_2 + 0x40),local_c,0), iVar9 == 0)))) &&
             (*(char *)(param_2 + 0x38) == '\0')) {
            cVar7 = *(char *)(param_2 + 0x3a);
            if (cVar7 < '\0') {
              cVar7 = FUN_0048fe00(piVar10);
            }
            FUN_00491ab0(piVar6,cVar7);
            uVar8 = FUN_004773d0(param_2,param_1,
                                 "SELECT \'CREATE TABLE vacuum_db.\' || substr(sql,14)   FROM sqlite_master WHERE type=\'table\' AND name!=\'sqlite_sequence\'   AND rootpage>0"
                                );
            if (((uVar8 == 0) &&
                (uVar8 = FUN_004773d0(param_2,param_1,
                                      "SELECT \'CREATE INDEX vacuum_db.\' || substr(sql,14)  FROM sqlite_master WHERE sql LIKE \'CREATE INDEX %\' "
                                     ), uVar8 == 0)) &&
               ((uVar8 = FUN_004773d0(param_2,param_1,
                                      "SELECT \'CREATE UNIQUE INDEX vacuum_db.\' || substr(sql,21)   FROM sqlite_master WHERE sql LIKE \'CREATE UNIQUE INDEX %\'"
                                     ), uVar8 == 0 &&
                ((((uVar8 = FUN_004773d0(param_2,param_1,
                                         "SELECT \'INSERT INTO vacuum_db.\' || quote(name) || \' SELECT * FROM main.\' || quote(name) || \';\'FROM main.sqlite_master WHERE type = \'table\' AND name!=\'sqlite_sequence\'   AND rootpage>0"
                                        ), uVar8 == 0 &&
                   (uVar8 = FUN_004773d0(param_2,param_1,
                                         "SELECT \'DELETE FROM vacuum_db.\' || quote(name) || \';\' FROM vacuum_db.sqlite_master WHERE name=\'sqlite_sequence\' "
                                        ), uVar8 == 0)) &&
                  (uVar8 = FUN_004773d0(param_2,param_1,
                                        "SELECT \'INSERT INTO vacuum_db.\' || quote(name) || \' SELECT * FROM main.\' || quote(name) || \';\' FROM vacuum_db.sqlite_master WHERE name==\'sqlite_sequence\';"
                                       ), uVar8 == 0)) &&
                 (uVar8 = FUN_00477530(param_2,param_1,
                                       (int *)
                                       "INSERT INTO vacuum_db.sqlite_master   SELECT type, name, tbl_name, rootpage, sql    FROM main.sqlite_master   WHERE type=\'view\' OR type=\'trigger\'      OR (type=\'table\' AND rootpage=0)"
                                      ), uVar8 == 0)))))) {
              iVar9 = 0;
              do {
                FUN_0048fe70(local_8,(uint)(byte)(&DAT_00569b44)[iVar9],&local_14);
                uVar8 = FUN_00492040(piVar6,(uint)(byte)(&DAT_00569b44)[iVar9],
                                     (byte)(&DAT_00569b45)[iVar9] + local_14);
                piVar10 = local_8;
                if (uVar8 != 0) goto LAB_004a77ea;
                iVar9 = iVar9 + 2;
              } while (iVar9 < 8);
              uVar8 = FUN_0048f420(local_8,piVar6);
              if ((uVar8 == 0) && (uVar8 = FUN_0048f290(piVar6), uVar8 == 0)) {
                cVar7 = FUN_0048fe00(piVar6);
                FUN_00491ab0(piVar10,cVar7);
                uVar8 = FUN_00491c00(piVar10,*(uint *)(piVar6[1] + 0x20),local_c,1);
              }
            }
          }
          else {
            uVar8 = 7;
          }
        }
      }
LAB_004a77ea:
      *(uint *)(param_2 + 0x18) = uVar1;
      *(undefined4 *)(param_2 + 0x48) = uVar2;
      *(undefined4 *)(param_2 + 0x4c) = uVar3;
      *(undefined4 *)(param_2 + 0x98) = uVar4;
      FUN_00491c00(piVar10,0xffffffff,0xffffffff,1);
      iVar9 = local_10;
      *(undefined1 *)(param_2 + 0x36) = 1;
      if (local_10 != 0) {
        FUN_0048f070(*(int **)(local_10 + 4));
        *(undefined4 *)(iVar9 + 4) = 0;
        *(undefined4 *)(iVar9 + 0xc) = 0;
      }
      FUN_004a6940(param_2);
      return uVar8;
    }
    pcVar11 = "cannot VACUUM - SQL statements in progress";
  }
  FUN_004a9a30(param_1,param_2,(byte *)pcVar11);
  return 1;
}


/* FUN_004aa1c0 @ 004aa1c0  kind=lib  attributed-by=lib-string  size=947 */

void __cdecl
FUN_004aa1c0(int *param_1,undefined4 *param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  byte *pbVar4;
  int *piVar5;
  int *piVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  bool bVar12;
  undefined1 uVar13;
  char *pcVar14;
  int *piVar15;
  int *local_8;
  
  piVar5 = param_1;
  iVar2 = *param_1;
  piVar6 = (int *)FUN_004ab150(param_1,param_2,param_3,(int *)&local_8);
  if ((int)piVar6 < 0) {
    return;
  }
  if (param_4 != 0) {
    if ((*(int *)(param_3 + 4) != 0) && (piVar6 != (int *)0x1)) {
      FUN_004962b0(param_1,(byte *)"temporary table name must be unqualified");
      return;
    }
    param_1 = (int *)0x1;
    piVar6 = param_1;
  }
  param_1 = piVar6;
  piVar5[0x82] = *local_8;
  piVar5[0x83] = local_8[1];
  pbVar7 = (byte *)FUN_004a0d40(iVar2,local_8);
  if (pbVar7 == (byte *)0x0) {
    return;
  }
  iVar8 = FUN_00492220(piVar5,pbVar7);
  if (iVar8 == 0) {
    if (*(char *)(iVar2 + 0x80) == '\x01') {
      param_4 = 1;
    }
    iVar8 = (int)param_1 * 0x10;
    uVar3 = *(undefined4 *)(iVar8 + *(int *)(iVar2 + 0x10));
    pcVar14 = "sqlite_temp_master";
    if (param_4 != 1) {
      pcVar14 = "sqlite_master";
    }
    iVar9 = FUN_0048d4b0(piVar5,0x12,pcVar14,0,uVar3);
    if (iVar9 == 0) {
      if (param_5 == 0) {
        iVar9 = (uint)(param_4 != 0) * 2 + 2;
      }
      else {
        iVar9 = (uint)(param_4 == 0) * 2 + 6;
      }
      if ((param_6 != 0) || (iVar9 = FUN_0048d4b0(piVar5,iVar9,pbVar7,0,uVar3), iVar9 == 0)) {
        if (*(char *)((int)piVar5 + 0x1d5) != '\0') {
LAB_004aa377:
          puVar10 = FUN_00494c20(iVar2,0x48);
          if (puVar10 == (undefined4 *)0x0) {
            *(undefined1 *)(iVar2 + 0x38) = 1;
            piVar5[0x11] = piVar5[0x11] + 1;
            piVar5[3] = 7;
            FUN_00494b00(iVar2,(undefined4 *)pbVar7);
            return;
          }
          *(undefined2 *)(puVar10 + 9) = 0xffff;
          *puVar10 = pbVar7;
          puVar10[0x10] = *(undefined4 *)(iVar8 + 0xc + *(int *)(iVar2 + 0x10));
          *(undefined2 *)(puVar10 + 10) = 1;
          puVar10[7] = 1000000;
          piVar5[0x7f] = (int)puVar10;
          if (*(char *)((int)piVar5 + 0x12) == '\0') {
            pcVar14 = "sqlite_sequence";
            do {
              bVar1 = *pbVar7;
              bVar12 = bVar1 < (byte)*pcVar14;
              if (bVar1 != *pcVar14) {
LAB_004aa400:
                uVar11 = -(uint)bVar12 | 1;
                goto LAB_004aa405;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar7[1];
              bVar12 = bVar1 < (byte)pcVar14[1];
              if (bVar1 != pcVar14[1]) goto LAB_004aa400;
              pbVar7 = pbVar7 + 2;
              pcVar14 = pcVar14 + 2;
            } while (bVar1 != 0);
            uVar11 = 0;
LAB_004aa405:
            if (uVar11 == 0) {
              *(undefined4 **)(puVar10[0x10] + 0x48) = puVar10;
            }
          }
          if (*(char *)(iVar2 + 0x81) != '\0') {
            return;
          }
          piVar6 = FUN_0049d4d0(piVar5);
          if (piVar6 == (int *)0x0) {
            return;
          }
          FUN_0048e5e0(piVar5,0,(int)param_1);
          if (param_6 != 0) {
            FUN_004ae760(piVar6,0x84);
          }
          iVar8 = piVar5[0x13];
          iVar9 = iVar8 + 1;
          piVar5[100] = iVar9;
          local_8 = (int *)(iVar8 + 2);
          piVar5[0x65] = (int)local_8;
          piVar5[0x13] = iVar8 + 3;
          FUN_004ae890(piVar6,0x24,param_1,iVar8 + 3,2);
          FUN_004b9540(piVar6,(int)param_1);
          uVar11 = FUN_004ae7d0(piVar6,0x1b,(int)local_8 + 1);
          FUN_004ae830(piVar6,7,(-(uint)((*(uint *)(iVar2 + 0x18) & 0x1000) != 0) & 0xfffffffd) + 4,
                       (int)local_8 + 1);
          FUN_004ae890(piVar6,0x25,param_1,2,(int)local_8 + 1);
          FUN_004ae830(piVar6,7,(uint)*(byte *)(*(int *)(*(int *)(iVar2 + 0x10) + 0xc) + 0x4d),
                       (int)local_8 + 1);
          FUN_004ae890(piVar6,0x25,param_1,5,(int)local_8 + 1);
          FUN_004b6720((int)piVar6,uVar11);
          if ((param_5 == 0) && (param_6 == 0)) {
            uVar13 = 0x69;
            piVar15 = param_1;
          }
          else {
            piVar15 = (int *)0x0;
            uVar13 = 7;
          }
          FUN_004ae830(piVar6,uVar13,piVar15,local_8);
          FUN_004a0e40(piVar5,(int)param_1);
          FUN_004ae830(piVar6,0x38,0,iVar9);
          FUN_004ae830(piVar6,10,0,iVar8 + 3);
          FUN_004ae890(piVar6,0x39,0,iVar8 + 3,iVar9);
          FUN_004aee30((int)piVar6,8);
          FUN_004ae760(piVar6,0x2d);
          return;
        }
        pbVar4 = *(byte **)(iVar8 + *(int *)(iVar2 + 0x10));
        iVar9 = FUN_004a6100(piVar5);
        if (iVar9 == 0) {
          iVar9 = FUN_00499c30(iVar2,pbVar7,pbVar4);
          if (iVar9 == 0) {
            iVar9 = FUN_00499af0(iVar2,pbVar7,pbVar4);
            if (iVar9 == 0) goto LAB_004aa377;
            pcVar14 = "there is already an index named %s";
          }
          else {
            if (param_7 != 0) {
              FUN_00493400(piVar5,(int)param_1);
              FUN_00494b00(iVar2,(undefined4 *)pbVar7);
              return;
            }
            pcVar14 = "table %T already exists";
          }
          FUN_004962b0(piVar5,(byte *)pcVar14);
        }
      }
    }
  }
  FUN_00494b00(iVar2,(undefined4 *)pbVar7);
  return;
}


/* FUN_004ab480 @ 004ab480  kind=lib  attributed-by=lib-string  size=7341 */

/* WARNING: Removing unreachable block (ram,0x004acf79) */
/* WARNING: Removing unreachable block (ram,0x004acf84) */
/* WARNING: Removing unreachable block (ram,0x004acf9f) */
/* WARNING: Removing unreachable block (ram,0x004acfa6) */
/* WARNING: Removing unreachable block (ram,0x004acfbe) */
/* WARNING: Removing unreachable block (ram,0x004acfcf) */
/* WARNING: Removing unreachable block (ram,0x004acfd3) */
/* WARNING: Removing unreachable block (ram,0x004acfed) */
/* WARNING: Removing unreachable block (ram,0x004acff8) */
/* WARNING: Removing unreachable block (ram,0x004acfc2) */
/* WARNING: Removing unreachable block (ram,0x004acfad) */
/* WARNING: Removing unreachable block (ram,0x004acf8b) */
/* WARNING: Removing unreachable block (ram,0x004ad010) */

void FUN_004ab480(int *param_1,short *param_2,int *param_3,byte *param_4,int *param_5)

{
  byte *pbVar1;
  undefined2 *puVar2;
  int iVar3;
  byte bVar4;
  int *piVar5;
  uint uVar6;
  bool bVar7;
  ushort uVar8;
  int *piVar9;
  int iVar10;
  undefined2 extraout_var_00;
  undefined3 extraout_var;
  int *piVar11;
  undefined2 extraout_var_01;
  undefined4 *puVar12;
  uint uVar13;
  uint *puVar14;
  int iVar15;
  uint uVar16;
  byte *pbVar17;
  int iVar18;
  byte *pbVar19;
  uint *puVar20;
  uint uVar21;
  undefined8 local_94;
  undefined8 local_8c;
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 local_74;
  short *local_6c;
  uint local_68;
  int local_64;
  byte *local_60;
  int local_5c;
  byte *local_58;
  undefined4 *local_54;
  uint local_50;
  uint *local_4c;
  int *local_48;
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
  undefined4 *local_14;
  uint local_10;
  uint *local_c;
  int *local_8;
  
  local_1c = *param_1;
  local_40 = (int *)0x0;
  local_14 = (undefined4 *)0x0;
  local_60 = (byte *)0x0;
  local_44 = 0;
  local_64 = 0;
  local_58 = (byte *)0x0;
  local_74 = 0;
  if ((param_1[0x11] != 0) || (*(char *)(local_1c + 0x38) != '\0')) {
    local_6c = param_2;
    puVar12 = local_14;
    goto LAB_004ad0fd;
  }
  local_6c = param_2;
  piVar9 = (int *)FUN_004aa130(param_1,(int)param_2);
  puVar12 = local_14;
  local_8 = piVar9;
  if (piVar9 == (int *)0x0) goto LAB_004ad0fd;
  local_24 = FUN_004a7ba0(*param_1,piVar9[0x10]);
  local_48 = (int *)FUN_004ab0e0(param_1,piVar9,0x6b,param_3,&local_68);
  local_50 = (uint)(piVar9[3] != 0);
  iVar10 = FUN_004b9570(param_1,(int)piVar9);
  puVar12 = local_14;
  if (((iVar10 != 0) ||
      (iVar10 = FUN_0049f850(param_1,(int)piVar9,local_68), puVar12 = local_14, iVar10 != 0)) ||
     (local_14 = FUN_00494b90(local_1c,(int)*(short *)((int)piVar9 + 0x26) << 2), puVar12 = local_14
     , local_14 == (undefined4 *)0x0)) goto LAB_004ad0fd;
  iVar10 = 0;
  if (0 < *(short *)((int)piVar9 + 0x26)) {
    do {
      local_14[iVar10] = 0xffffffff;
      iVar10 = iVar10 + 1;
    } while (iVar10 < *(short *)((int)piVar9 + 0x26));
  }
  local_18 = param_1[0x12];
  *(int *)(param_2 + 0x1a) = local_18;
  param_1[0x12] = param_1[0x12] + 1;
  iVar15 = param_1[0x12];
  for (iVar10 = piVar9[2]; iVar10 != 0; iVar10 = *(int *)(iVar10 + 0x14)) {
    iVar15 = iVar15 + 1;
    param_1[0x12] = iVar15;
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
      uVar8 = FUN_004a69e0((int *)&local_94,*(int *)(param_3[2] + (int)local_30));
      puVar12 = local_14;
      if (CONCAT22(extraout_var_00,uVar8) != 0) goto LAB_004ad0fd;
      iVar10 = 0;
      if (0 < *(short *)((int)local_8 + 0x26)) {
        local_54 = (undefined4 *)(param_3[2] + (int)piVar9);
        puVar12 = (undefined4 *)local_8[1];
        do {
          pbVar17 = (byte *)*puVar12;
          pbVar19 = (byte *)local_54[1];
          bVar4 = *pbVar17;
          while ((bVar4 != 0 && ((&DAT_00569620)[bVar4] == (&DAT_00569620)[*pbVar19]))) {
            pbVar1 = pbVar17 + 1;
            pbVar17 = pbVar17 + 1;
            pbVar19 = pbVar19 + 1;
            bVar4 = *pbVar1;
          }
          piVar9 = local_30;
          if ((&DAT_00569620)[*pbVar17] == (&DAT_00569620)[*pbVar19]) {
            if (iVar10 == (short)local_8[9]) {
              local_3c = 1;
              local_60 = (byte *)*local_54;
            }
            local_14[iVar10] = local_10;
            break;
          }
          iVar10 = iVar10 + 1;
          puVar12 = puVar12 + 6;
        } while (iVar10 < *(short *)((int)local_8 + 0x26));
      }
      if (*(short *)((int)local_8 + 0x26) <= iVar10) {
        iVar15 = param_3[2];
        bVar7 = FUN_0049f8e0(*(byte **)(iVar15 + 4 + (int)piVar9));
        if (CONCAT31(extraout_var,bVar7) == 0) {
          FUN_004962b0(param_1,(byte *)"no such column: %s");
          *(undefined1 *)((int)param_1 + 0x11) = 1;
          puVar12 = local_14;
          goto LAB_004ad0fd;
        }
        local_60 = *(byte **)(iVar15 + (int)piVar9);
        local_3c = 1;
      }
      iVar15 = FUN_0048d4b0(param_1,0x17,*local_8,*(undefined4 *)(local_8[1] + iVar10 * 0x18),
                            *(undefined4 *)(*(int *)(local_1c + 0x10) + local_24 * 0x10));
      puVar12 = local_14;
      if (iVar15 == 1) goto LAB_004ad0fd;
      if (iVar15 == 2) {
        local_14[iVar10] = 0xffffffff;
      }
      local_10 = local_10 + 1;
      local_30 = piVar9 + 5;
      piVar9 = local_8;
    } while ((int)local_10 < *param_3);
  }
  local_38 = FUN_0049aed0(param_1,piVar9,(int)local_14,local_3c);
  iVar10 = piVar9[2];
  iVar15 = 0;
  if (iVar10 == 0) {
LAB_004ab7cc:
    piVar11 = (int *)0x0;
  }
  else {
    do {
      iVar10 = *(int *)(iVar10 + 0x14);
      iVar15 = iVar15 + 1;
    } while (iVar10 != 0);
    if (iVar15 < 1) goto LAB_004ab7cc;
    piVar11 = FUN_00494b90(local_1c,iVar15 * 4);
    puVar12 = local_14;
    local_40 = piVar11;
    if (piVar11 == (int *)0x0) goto LAB_004ad0fd;
  }
  for (iVar10 = piVar9[2]; iVar10 != 0; iVar10 = *(int *)(iVar10 + 0x14)) {
    if ((local_38 == 0) && (local_3c == 0)) {
      iVar15 = 0;
      if (0 < *(int *)(iVar10 + 0x24)) {
        piVar9 = *(int **)(iVar10 + 4);
        iVar18 = 0;
        do {
          if (-1 < (int)local_14[*piVar9]) {
            param_1[0x13] = param_1[0x13] + 1;
            iVar15 = param_1[0x13];
            break;
          }
          iVar18 = iVar18 + 1;
          piVar9 = piVar9 + 1;
        } while (iVar18 < *(int *)(iVar10 + 0x24));
      }
    }
    else {
      param_1[0x13] = param_1[0x13] + 1;
      iVar15 = param_1[0x13];
    }
    *piVar11 = iVar15;
    piVar11 = piVar11 + 1;
  }
  piVar9 = (int *)param_1[2];
  local_30 = piVar9;
  if (piVar9 == (int *)0x0) {
    iVar10 = *param_1;
    piVar9 = FUN_00494b90(iVar10,0xc0);
    if (piVar9 == (int *)0x0) {
      piVar9 = (int *)0x0;
      local_30 = (int *)0x0;
    }
    else {
      local_30 = piVar9;
      memset(piVar9,0,0xc0);
      *piVar9 = iVar10;
      if (*(int *)(iVar10 + 4) != 0) {
        *(int **)(*(int *)(iVar10 + 4) + 0x38) = piVar9;
      }
      piVar9[0xf] = *(int *)(iVar10 + 4);
      piVar9[0xe] = 0;
      *(int **)(iVar10 + 4) = piVar9;
      piVar9[0xc] = 0x26bceaa5;
    }
    param_1[2] = (int)piVar9;
    puVar12 = local_14;
    if (piVar9 == (int *)0x0) goto LAB_004ad0fd;
    iVar10 = piVar9[7];
    if ((iVar10 < piVar9[8]) || (iVar15 = FUN_0047de10(piVar9), iVar15 == 0)) {
      iVar15 = piVar9[1];
      piVar9[7] = piVar9[7] + 1;
      *(undefined2 *)(iVar15 + iVar10 * 0x14) = 0x94;
      *(undefined1 *)(iVar15 + 3 + iVar10 * 0x14) = 0;
      *(undefined4 *)(iVar15 + 4 + iVar10 * 0x14) = 0;
      *(undefined4 *)(iVar15 + 8 + iVar10 * 0x14) = 0;
      *(undefined4 *)(iVar15 + 0xc + iVar10 * 0x14) = 0;
      *(undefined4 *)(iVar15 + 0x10 + iVar10 * 0x14) = 0;
    }
  }
  if (*(char *)((int)param_1 + 0x12) == '\0') {
    piVar9[0x18] = piVar9[0x18] | 0x10;
  }
  piVar11 = param_1;
  if ((int *)param_1[0x6c] != (int *)0x0) {
    piVar11 = (int *)param_1[0x6c];
  }
  FUN_00493400(param_1,local_24);
  puVar12 = local_14;
  *(byte *)((int)piVar11 + 0x17) = *(byte *)((int)piVar11 + 0x17) | 1;
  piVar11[0x55] = piVar11[0x55] | 1 << ((byte)local_24 & 0x1f);
  if ((*(byte *)((int)local_8 + 0x2a) & 0x10) != 0) {
    FUN_004be390(param_1,(undefined4 *)param_2,(int)local_8,(int)param_3,(undefined4 *)local_60,
                 (int)local_14,param_4,(int)param_5);
    param_4 = (byte *)0x0;
    local_6c = (short *)0x0;
    goto LAB_004ad0fd;
  }
  param_1[0x13] = param_1[0x13] + 1;
  puVar20 = (uint *)param_1[0x13];
  local_28 = (uint *)((int)puVar20 + 1);
  param_1[0x13] = (int)local_28;
  if ((local_48 != (int *)0x0) || (local_38 != 0)) {
    local_58 = (byte *)((int)puVar20 + 2);
    param_1[0x13] = (int)((int)*(short *)((int)local_8 + 0x26) + (int)local_28);
  }
  if (((local_3c != 0) || (local_48 != (int *)0x0)) || (local_2c = local_28, local_38 != 0)) {
    param_1[0x13] = param_1[0x13] + 1;
    local_2c = (uint *)param_1[0x13];
  }
  local_20 = param_1[0x13] + 1;
  param_1[0x13] = (int)*(short *)((int)local_8 + 0x26) + param_1[0x13];
  local_34 = puVar20;
  if (local_50 != 0) {
    local_74 = CONCAT44(param_1,param_1[0x81]);
    param_1[0x81] = *local_8;
    FUN_004a05b0(param_1,local_8,(undefined4 *)param_4,local_18);
  }
  uVar8 = FUN_004a69e0((int *)&local_94,(int)param_4);
  puVar12 = local_14;
  if (CONCAT22(extraout_var_01,uVar8) != 0) goto LAB_004ad0fd;
  iVar10 = piVar9[7];
  if ((iVar10 < piVar9[8]) || (iVar15 = FUN_0047de10(piVar9), iVar15 == 0)) {
    iVar15 = piVar9[1];
    piVar9[7] = piVar9[7] + 1;
    *(undefined2 *)(iVar15 + iVar10 * 0x14) = 10;
    *(undefined1 *)(iVar15 + 3 + iVar10 * 0x14) = 0;
    *(undefined4 *)(iVar15 + 4 + iVar10 * 0x14) = 0;
    *(uint **)(iVar15 + 8 + iVar10 * 0x14) = puVar20;
    *(uint **)(iVar15 + 0xc + iVar10 * 0x14) = local_28;
    *(undefined4 *)(iVar15 + 0x10 + iVar10 * 0x14) = 0;
  }
  piVar11 = FUN_004bb240(param_1,param_2,param_4,(undefined2 *)0x0,(int *)0x0,4,0);
  puVar12 = local_14;
  if (piVar11 == (int *)0x0) goto LAB_004ad0fd;
  local_54 = (undefined4 *)(uint)*(byte *)(piVar11 + 3);
  iVar10 = piVar9[7];
  if ((iVar10 < piVar9[8]) || (iVar15 = FUN_0047de10(piVar9), iVar15 == 0)) {
    iVar15 = piVar9[1];
    piVar9[7] = piVar9[7] + 1;
    *(int *)(iVar15 + 4 + iVar10 * 0x14) = local_18;
    *(undefined2 *)(iVar15 + iVar10 * 0x14) = 0x41;
    *(undefined1 *)(iVar15 + 3 + iVar10 * 0x14) = 0;
    *(uint **)(iVar15 + 8 + iVar10 * 0x14) = local_28;
    *(undefined4 *)(iVar15 + 0xc + iVar10 * 0x14) = 0;
    *(undefined4 *)(iVar15 + 0x10 + iVar10 * 0x14) = 0;
  }
  if ((local_54 == (undefined4 *)0x0) &&
     ((iVar10 = piVar9[7], iVar10 < piVar9[8] || (iVar15 = FUN_0047de10(piVar9), iVar15 == 0)))) {
    iVar15 = piVar9[1];
    piVar9[7] = piVar9[7] + 1;
    *(uint **)(iVar15 + 4 + iVar10 * 0x14) = local_34;
    *(undefined2 *)(iVar15 + iVar10 * 0x14) = 0x70;
    *(undefined1 *)(iVar15 + 3 + iVar10 * 0x14) = 0;
    *(uint **)(iVar15 + 8 + iVar10 * 0x14) = local_28;
    *(undefined4 *)(iVar15 + 0xc + iVar10 * 0x14) = 0;
    *(undefined4 *)(iVar15 + 0x10 + iVar10 * 0x14) = 0;
  }
  FUN_004bbe40(piVar11);
  if (((*(byte *)(local_1c + 0x18) & 0x10) != 0) && (param_1[0x6d] == 0)) {
    param_1[0x13] = param_1[0x13] + 1;
    iVar10 = piVar9[7];
    iVar15 = param_1[0x13];
    local_64 = iVar15;
    if ((iVar10 < piVar9[8]) || (iVar18 = FUN_0047de10(piVar9), iVar18 == 0)) {
      iVar18 = piVar9[1];
      piVar9[7] = piVar9[7] + 1;
      *(undefined2 *)(iVar18 + iVar10 * 0x14) = 7;
      *(undefined1 *)(iVar18 + 3 + iVar10 * 0x14) = 0;
      *(undefined4 *)(iVar18 + 4 + iVar10 * 0x14) = 0;
      *(int *)(iVar18 + 8 + iVar10 * 0x14) = iVar15;
      *(undefined4 *)(iVar18 + 0xc + iVar10 * 0x14) = 0;
      *(undefined4 *)(iVar18 + 0x10 + iVar10 * 0x14) = 0;
    }
  }
  piVar11 = local_8;
  if (local_50 == 0) {
    if (local_54 == (undefined4 *)0x0) {
      FUN_004a0f40(param_1,local_18,local_24,local_8,0x28);
    }
    if (param_5 == (int *)0x5) {
LAB_004abbc2:
      iVar15 = 1;
      local_44 = 1;
    }
    else {
      iVar10 = piVar11[2];
      iVar15 = 0;
      local_44 = 0;
      for (; iVar10 != 0; iVar10 = *(int *)(iVar10 + 0x14)) {
        if (*(char *)(iVar10 + 0x2c) == '\x05') goto LAB_004abbc2;
      }
    }
    iVar10 = piVar11[2];
    local_10 = 0;
    uVar16 = local_10;
    while (local_5c = iVar10, local_10 = uVar16, iVar10 != 0) {
      if ((iVar15 != 0) || (iVar15 = 0, 0 < local_40[uVar16])) {
        local_4c = (uint *)FUN_0049dbf0(param_1,iVar10);
        iVar15 = piVar9[8];
        local_c = *(uint **)(iVar10 + 0x28);
        iVar10 = piVar9[7];
        if (iVar10 < iVar15) {
LAB_004abc78:
          piVar9[7] = piVar9[7] + 1;
          puVar2 = (undefined2 *)(piVar9[1] + iVar10 * 0x14);
          *(uint *)(puVar2 + 2) = local_18 + 1 + uVar16;
          *(uint **)(puVar2 + 4) = local_c;
          *puVar2 = 0x28;
          *(undefined1 *)((int)puVar2 + 3) = 0;
          *(int *)(puVar2 + 6) = local_24;
          *(undefined4 *)(puVar2 + 8) = 0;
        }
        else {
          if (iVar15 == 0) {
            iVar15 = 0x33;
          }
          else {
            iVar15 = iVar15 * 2;
          }
          puVar12 = FUN_00494cf0(*piVar9,(undefined4 *)piVar9[1],iVar15 * 0x14);
          if (puVar12 != (undefined4 *)0x0) {
            iVar15 = *piVar9;
            if (((iVar15 == 0) || (puVar12 < *(undefined4 **)(iVar15 + 0x104))) ||
               (*(undefined4 **)(iVar15 + 0x108) <= puVar12)) {
              uVar16 = (*DAT_00582af0._4_4_)(puVar12);
            }
            else {
              uVar16 = (uint)*(ushort *)(iVar15 + 0xe8);
            }
            piVar9[1] = (int)puVar12;
            piVar9[8] = uVar16 / 0x14;
            uVar16 = local_10;
            goto LAB_004abc78;
          }
          iVar10 = 1;
          uVar16 = local_10;
        }
        iVar15 = piVar9[1];
        iVar18 = *piVar9;
        if ((iVar15 == 0) || (*(char *)(iVar18 + 0x38) != '\0')) {
          FUN_0047bc80(iVar18,0xfffffff0,(int *)local_4c);
          iVar15 = local_44;
        }
        else {
          if (iVar10 < 0) {
            iVar10 = piVar9[7] + -1;
          }
          iVar3 = iVar15 + iVar10 * 0x14;
          FUN_0047bc80(iVar18,(int)*(char *)(iVar3 + 1),*(int **)(iVar15 + 0x10 + iVar10 * 0x14));
          *(undefined4 *)(iVar3 + 0x10) = 0;
          iVar15 = local_44;
          uVar16 = local_10;
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
      uVar16 = uVar16 + 1;
      iVar10 = *(int *)(local_5c + 0x14);
    }
  }
  uVar16 = piVar9[7];
  if (local_54 == (undefined4 *)0x0) {
    local_10 = uVar16;
    if (((int)uVar16 < piVar9[8]) || (iVar10 = FUN_0047de10(piVar9), iVar10 == 0)) {
      iVar10 = piVar9[1];
      piVar9[7] = piVar9[7] + 1;
      *(uint **)(iVar10 + 4 + uVar16 * 0x14) = local_34;
      *(undefined2 *)(iVar10 + uVar16 * 0x14) = 0x71;
      *(undefined1 *)(iVar10 + 3 + uVar16 * 0x14) = 0;
      *(undefined4 *)(iVar10 + 8 + uVar16 * 0x14) = 0;
      *(uint **)(iVar10 + 0xc + uVar16 * 0x14) = local_28;
      *(undefined4 *)(iVar10 + 0x10 + uVar16 * 0x14) = 0;
    }
    else {
      local_10 = 1;
    }
  }
  else {
    if (((int)uVar16 < piVar9[8]) || (iVar10 = FUN_0047de10(piVar9), iVar10 == 0)) {
      iVar10 = piVar9[1];
      piVar9[7] = piVar9[7] + 1;
      *(undefined2 *)(iVar10 + uVar16 * 0x14) = 0x4a;
      *(undefined1 *)(iVar10 + 3 + uVar16 * 0x14) = 0;
      *(uint **)(iVar10 + 4 + uVar16 * 0x14) = local_28;
      *(undefined4 *)(iVar10 + 8 + uVar16 * 0x14) = 0;
      *(undefined4 *)(iVar10 + 0xc + uVar16 * 0x14) = 0;
      *(undefined4 *)(iVar10 + 0x10 + uVar16 * 0x14) = 0;
    }
    else {
      uVar16 = 1;
    }
    uVar13 = piVar9[7];
    local_10 = uVar13;
    if (((int)uVar13 < piVar9[8]) || (iVar10 = FUN_0047de10(piVar9), iVar10 == 0)) {
      iVar10 = piVar9[1];
      piVar9[7] = piVar9[7] + 1;
      *(undefined2 *)(iVar10 + uVar13 * 0x14) = 1;
      *(undefined1 *)(iVar10 + 3 + uVar13 * 0x14) = 0;
      *(undefined4 *)(iVar10 + 4 + uVar13 * 0x14) = 0;
      *(undefined4 *)(iVar10 + 8 + uVar13 * 0x14) = 0;
      *(undefined4 *)(iVar10 + 0xc + uVar13 * 0x14) = 0;
      *(undefined4 *)(iVar10 + 0x10 + uVar13 * 0x14) = 0;
    }
    else {
      local_10 = 1;
    }
    if ((-1 < (int)uVar16) && (uVar16 < (uint)piVar9[7])) {
      *(int *)(piVar9[1] + 8 + uVar16 * 0x14) = piVar9[7];
    }
  }
  iVar10 = piVar9[7];
  iVar15 = piVar9[8];
  if (iVar10 < iVar15) {
LAB_004abeb4:
    iVar15 = piVar9[1];
    piVar9[7] = piVar9[7] + 1;
    *(int *)(iVar15 + 4 + iVar10 * 0x14) = local_18;
    *(uint *)(iVar15 + 8 + iVar10 * 0x14) = local_10;
    *(undefined2 *)(iVar15 + iVar10 * 0x14) = 0x36;
    *(undefined1 *)(iVar15 + 3 + iVar10 * 0x14) = 0;
    *(uint **)(iVar15 + 0xc + iVar10 * 0x14) = local_28;
    *(undefined4 *)(iVar15 + 0x10 + iVar10 * 0x14) = 0;
  }
  else {
    if (iVar15 == 0) {
      iVar15 = 0x33;
    }
    else {
      iVar15 = iVar15 * 2;
    }
    puVar12 = FUN_00494cf0(*piVar9,(undefined4 *)piVar9[1],iVar15 * 0x14);
    if (puVar12 != (undefined4 *)0x0) {
      iVar15 = *piVar9;
      if (((iVar15 == 0) || (puVar12 < *(undefined4 **)(iVar15 + 0x104))) ||
         (*(undefined4 **)(iVar15 + 0x108) <= puVar12)) {
        uVar16 = (*DAT_00582af0._4_4_)(puVar12);
      }
      else {
        uVar16 = (uint)*(ushort *)(iVar15 + 0xe8);
      }
      piVar9[8] = uVar16 / 0x14;
      piVar9[1] = (int)puVar12;
      goto LAB_004abeb4;
    }
  }
  puVar20 = local_2c;
  if (local_3c != 0) {
    if ((local_60 == (byte *)0x0) || (*local_60 != 0x84)) {
      local_c = (uint *)FUN_00497780(param_1,local_60,(int)local_2c);
      if (((local_c != puVar20) && (piVar11 = (int *)param_1[2], piVar11 != (int *)0x0)) &&
         ((iVar10 = piVar11[7], iVar10 < piVar11[8] || (iVar15 = FUN_0047de10(piVar11), iVar15 == 0)
          ))) {
        iVar15 = piVar11[1];
        piVar11[7] = piVar11[7] + 1;
        *(undefined2 *)(iVar15 + iVar10 * 0x14) = 0xf;
        goto LAB_004abf2b;
      }
    }
    else {
      local_c = *(uint **)(local_60 + 0x18);
      piVar11 = (int *)param_1[2];
      iVar10 = piVar11[7];
      if ((iVar10 < piVar11[8]) || (iVar15 = FUN_0047de10(piVar11), iVar15 == 0)) {
        iVar15 = piVar11[1];
        piVar11[7] = piVar11[7] + 1;
        *(undefined2 *)(iVar15 + iVar10 * 0x14) = 0xe;
LAB_004abf2b:
        *(undefined1 *)(iVar15 + 3 + iVar10 * 0x14) = 0;
        *(uint **)(iVar15 + 4 + iVar10 * 0x14) = local_c;
        *(uint **)(iVar15 + 8 + iVar10 * 0x14) = local_2c;
        *(undefined4 *)(iVar15 + 0xc + iVar10 * 0x14) = 0;
        *(undefined4 *)(iVar15 + 0x10 + iVar10 * 0x14) = 0;
      }
    }
    puVar20 = local_2c;
    iVar10 = piVar9[7];
    if ((iVar10 < piVar9[8]) || (iVar15 = FUN_0047de10(piVar9), iVar15 == 0)) {
      iVar15 = piVar9[1];
      piVar9[7] = piVar9[7] + 1;
      *(undefined2 *)(iVar15 + iVar10 * 0x14) = 0x15;
      *(undefined1 *)(iVar15 + 3 + iVar10 * 0x14) = 0;
      *(uint **)(iVar15 + 4 + iVar10 * 0x14) = puVar20;
      *(undefined4 *)(iVar15 + 8 + iVar10 * 0x14) = 0;
      *(undefined4 *)(iVar15 + 0xc + iVar10 * 0x14) = 0;
      *(undefined4 *)(iVar15 + 0x10 + iVar10 * 0x14) = 0;
    }
  }
  piVar11 = local_8;
  if (local_38 == 0) {
    if (local_48 != (int *)0x0) {
      uVar16 = 0;
      goto LAB_004ac005;
    }
  }
  else {
    uVar16 = FUN_0049ad30(param_1,local_8);
LAB_004ac005:
    uVar13 = FUN_004aad60(param_1,(int)local_48,param_3,0,3,piVar11,param_5);
    local_34 = (uint *)(uVar16 | uVar13);
    iVar10 = 0;
    piVar11 = local_8;
    if (0 < *(short *)((int)local_8 + 0x26)) {
      do {
        if ((((int)local_14[iVar10] < 0) || (local_34 == (uint *)0xffffffff)) ||
           ((iVar10 < 0x20 && (((uint)local_34 & 1 << ((byte)iVar10 & 0x1f)) != 0)))) {
          FUN_00497170(piVar9,piVar11,local_18,iVar10,(int)(local_58 + iVar10));
          piVar11 = local_8;
        }
        else {
          local_c = (uint *)piVar9[7];
          iVar15 = piVar9[8];
          if (iVar15 <= (int)local_c) {
            if (iVar15 == 0) {
              iVar15 = 0x33;
            }
            else {
              iVar15 = iVar15 * 2;
            }
            puVar12 = FUN_00494cf0(*piVar9,(undefined4 *)piVar9[1],iVar15 * 0x14);
            piVar11 = local_8;
            if (puVar12 == (undefined4 *)0x0) goto LAB_004ac130;
            iVar15 = *piVar9;
            if (((iVar15 == 0) || (puVar12 < *(undefined4 **)(iVar15 + 0x104))) ||
               (*(undefined4 **)(iVar15 + 0x108) <= puVar12)) {
              uVar16 = (*DAT_00582af0._4_4_)(puVar12);
            }
            else {
              uVar16 = (uint)*(ushort *)(iVar15 + 0xe8);
            }
            piVar9[8] = uVar16 / 0x14;
            piVar9[1] = (int)puVar12;
            piVar11 = local_8;
          }
          piVar9[7] = piVar9[7] + 1;
          puVar2 = (undefined2 *)(piVar9[1] + (int)local_c * 0x14);
          *puVar2 = 10;
          *(undefined1 *)((int)puVar2 + 3) = 0;
          *(undefined4 *)(puVar2 + 2) = 0;
          *(byte **)(puVar2 + 4) = local_58 + iVar10;
          *(undefined4 *)(puVar2 + 6) = 0;
          *(undefined4 *)(puVar2 + 8) = 0;
        }
LAB_004ac130:
        iVar10 = iVar10 + 1;
      } while (iVar10 < *(short *)((int)piVar11 + 0x26));
    }
    if (local_3c == 0) {
      iVar10 = piVar9[7];
      iVar15 = piVar9[8];
      if (iVar15 <= iVar10) {
        if (iVar15 == 0) {
          iVar15 = 0x33;
        }
        else {
          iVar15 = iVar15 * 2;
        }
        puVar12 = FUN_00494cf0(*piVar9,(undefined4 *)piVar9[1],iVar15 * 0x14);
        if (puVar12 == (undefined4 *)0x0) goto LAB_004ac1e8;
        iVar15 = *piVar9;
        if (((iVar15 == 0) || (puVar12 < *(undefined4 **)(iVar15 + 0x104))) ||
           (*(undefined4 **)(iVar15 + 0x108) <= puVar12)) {
          uVar16 = (*DAT_00582af0._4_4_)(puVar12);
        }
        else {
          uVar16 = (uint)*(ushort *)(iVar15 + 0xe8);
        }
        piVar9[8] = uVar16 / 0x14;
        piVar9[1] = (int)puVar12;
      }
      iVar15 = piVar9[1];
      piVar9[7] = piVar9[7] + 1;
      *(uint **)(iVar15 + 4 + iVar10 * 0x14) = local_28;
      *(undefined2 *)(iVar15 + iVar10 * 0x14) = 0xe;
      *(undefined1 *)(iVar15 + 3 + iVar10 * 0x14) = 0;
      *(uint **)(iVar15 + 8 + iVar10 * 0x14) = local_2c;
      *(undefined4 *)(iVar15 + 0xc + iVar10 * 0x14) = 0;
      *(undefined4 *)(iVar15 + 0x10 + iVar10 * 0x14) = 0;
    }
  }
LAB_004ac1e8:
  piVar11 = local_8;
  local_58 = (byte *)FUN_004aad60(param_1,(int)local_48,param_3,1,1,local_8,param_5);
  iVar10 = piVar9[7];
  local_c = (uint *)(local_20 + -1 + (int)*(short *)((int)piVar11 + 0x26));
  iVar15 = piVar9[8];
  if (iVar10 < iVar15) {
LAB_004ac280:
    iVar15 = piVar9[1];
    piVar9[7] = piVar9[7] + 1;
    *(undefined2 *)(iVar15 + iVar10 * 0x14) = 10;
    *(undefined1 *)(iVar15 + 3 + iVar10 * 0x14) = 0;
    *(undefined4 *)(iVar15 + 4 + iVar10 * 0x14) = 0;
    *(int *)(iVar15 + 8 + iVar10 * 0x14) = local_20;
    *(uint **)(iVar15 + 0xc + iVar10 * 0x14) = local_c;
    *(undefined4 *)(iVar15 + 0x10 + iVar10 * 0x14) = 0;
  }
  else {
    if (iVar15 == 0) {
      iVar15 = 0x33;
    }
    else {
      iVar15 = iVar15 * 2;
    }
    puVar12 = FUN_00494cf0(*piVar9,(undefined4 *)piVar9[1],iVar15 * 0x14);
    if (puVar12 != (undefined4 *)0x0) {
      iVar15 = *piVar9;
      if (((iVar15 == 0) || (puVar12 < *(undefined4 **)(iVar15 + 0x104))) ||
         (*(undefined4 **)(iVar15 + 0x108) <= puVar12)) {
        uVar16 = (*DAT_00582af0._4_4_)(puVar12);
      }
      else {
        uVar16 = (uint)*(ushort *)(iVar15 + 0xe8);
      }
      piVar9[8] = uVar16 / 0x14;
      piVar9[1] = (int)puVar12;
      goto LAB_004ac280;
    }
  }
  local_24 = 0;
  piVar11 = local_8;
  iVar10 = local_20;
  if (0 < *(short *)((int)local_8 + 0x26)) {
    do {
      iVar15 = local_24;
      if (local_24 != (short)piVar11[9]) {
        if ((int)local_14[local_24] < 0) {
          if ((((local_68 & 1) == 0) || (0x1f < local_24)) ||
             (((uint)local_58 & 1 << ((byte)local_24 & 0x1f)) != 0)) {
            iVar10 = piVar9[7];
            iVar15 = piVar9[8];
            if (iVar10 < iVar15) {
LAB_004ac567:
              piVar9[7] = piVar9[7] + 1;
              puVar2 = (undefined2 *)(piVar9[1] + iVar10 * 0x14);
              *(int *)(puVar2 + 2) = local_18;
              *puVar2 = 0x1d;
              *(undefined1 *)((int)puVar2 + 3) = 0;
              *(int *)(puVar2 + 4) = local_24;
              *(int *)(puVar2 + 6) = local_20 + local_24;
              *(undefined4 *)(puVar2 + 8) = 0;
            }
            else {
              if (iVar15 == 0) {
                iVar15 = 0x33;
              }
              else {
                iVar15 = iVar15 * 2;
              }
              puVar12 = FUN_00494cf0(*piVar9,(undefined4 *)piVar9[1],iVar15 * 0x14);
              if (puVar12 != (undefined4 *)0x0) {
                iVar15 = *piVar9;
                if (((iVar15 == 0) || (puVar12 < *(undefined4 **)(iVar15 + 0x104))) ||
                   (*(undefined4 **)(iVar15 + 0x108) <= puVar12)) {
                  uVar16 = (*DAT_00582af0._4_4_)(puVar12);
                }
                else {
                  uVar16 = (uint)*(ushort *)(iVar15 + 0xe8);
                }
                piVar9[1] = (int)puVar12;
                piVar9[8] = uVar16 / 0x14;
                goto LAB_004ac567;
              }
            }
            iVar10 = local_20;
            iVar15 = local_24;
            FUN_00493630(piVar9,local_8,local_24,local_20 + local_24);
            piVar11 = local_8;
          }
        }
        else {
          pbVar17 = *(byte **)(param_3[2] + local_14[local_24] * 0x14);
          if ((pbVar17 == (byte *)0x0) || (*pbVar17 != 0x84)) {
            puVar20 = (uint *)(iVar10 + local_24);
            local_c = puVar20;
            local_4c = (uint *)FUN_00497780(param_1,pbVar17,(int)puVar20);
            piVar11 = local_8;
            iVar10 = local_20;
            if ((local_4c != puVar20) &&
               (piVar5 = (int *)param_1[2], iVar15 = local_24, piVar5 != (int *)0x0)) {
              local_34 = (uint *)piVar5[7];
              iVar10 = piVar5[8];
              if (iVar10 <= (int)local_34) {
                if (iVar10 == 0) {
                  iVar10 = 0x33;
                }
                else {
                  iVar10 = iVar10 * 2;
                }
                puVar12 = FUN_00494cf0(*piVar5,(undefined4 *)piVar5[1],iVar10 * 0x14);
                piVar11 = local_8;
                iVar10 = local_20;
                iVar15 = local_24;
                if (puVar12 == (undefined4 *)0x0) goto LAB_004ac49e;
                iVar10 = *piVar5;
                if (((iVar10 == 0) || (puVar12 < *(undefined4 **)(iVar10 + 0x104))) ||
                   (*(undefined4 **)(iVar10 + 0x108) <= puVar12)) {
                  uVar16 = (*DAT_00582af0._4_4_)(puVar12);
                }
                else {
                  uVar16 = (uint)*(ushort *)(iVar10 + 0xe8);
                }
                piVar5[1] = (int)puVar12;
                piVar5[8] = uVar16 / 0x14;
                puVar20 = local_c;
              }
              iVar10 = piVar5[1];
              piVar5[7] = piVar5[7] + 1;
              *(undefined2 *)(iVar10 + (int)local_34 * 0x14) = 0xf;
              *(undefined1 *)(iVar10 + 3 + (int)local_34 * 0x14) = 0;
              *(uint **)(iVar10 + 4 + (int)local_34 * 0x14) = local_4c;
              *(uint **)(iVar10 + 8 + (int)local_34 * 0x14) = puVar20;
              *(undefined4 *)(iVar10 + 0xc + (int)local_34 * 0x14) = 0;
              *(undefined4 *)(iVar10 + 0x10 + (int)local_34 * 0x14) = 0;
              piVar11 = local_8;
              iVar10 = local_20;
              iVar15 = local_24;
            }
          }
          else {
            local_34 = *(uint **)(pbVar17 + 0x18);
            piVar5 = (int *)param_1[2];
            local_c = (uint *)piVar5[7];
            iVar15 = piVar5[8];
            if (iVar15 <= (int)local_c) {
              if (iVar15 == 0) {
                iVar15 = 0x33;
              }
              else {
                iVar15 = iVar15 * 2;
              }
              puVar12 = FUN_00494cf0(*piVar5,(undefined4 *)piVar5[1],iVar15 * 0x14);
              piVar11 = local_8;
              iVar10 = local_20;
              iVar15 = local_24;
              if (puVar12 == (undefined4 *)0x0) goto LAB_004ac49e;
              iVar10 = *piVar5;
              if (((iVar10 == 0) || (puVar12 < *(undefined4 **)(iVar10 + 0x104))) ||
                 (*(undefined4 **)(iVar10 + 0x108) <= puVar12)) {
                uVar16 = (*DAT_00582af0._4_4_)(puVar12);
              }
              else {
                uVar16 = (uint)*(ushort *)(iVar10 + 0xe8);
              }
              piVar5[8] = uVar16 / 0x14;
              piVar5[1] = (int)puVar12;
              piVar11 = local_8;
              iVar10 = local_20;
            }
            piVar5[7] = piVar5[7] + 1;
            puVar2 = (undefined2 *)(piVar5[1] + (int)local_c * 0x14);
            *(uint **)(puVar2 + 2) = local_34;
            *puVar2 = 0xe;
            *(undefined1 *)((int)puVar2 + 3) = 0;
            *(int *)(puVar2 + 4) = iVar10 + local_24;
            *(undefined4 *)(puVar2 + 6) = 0;
            *(undefined4 *)(puVar2 + 8) = 0;
            iVar15 = local_24;
          }
        }
      }
LAB_004ac49e:
      local_24 = iVar15 + 1;
    } while (local_24 < *(short *)((int)piVar11 + 0x26));
  }
  if ((local_68 & 1) != 0) {
    local_c = (uint *)(int)*(short *)((int)piVar11 + 0x26);
    iVar10 = piVar9[7];
    iVar15 = piVar9[8];
    if (iVar10 < iVar15) {
LAB_004ac60d:
      iVar15 = piVar9[1];
      piVar9[7] = piVar9[7] + 1;
      *(int *)(iVar15 + 4 + iVar10 * 0x14) = local_20;
      *(undefined2 *)(iVar15 + iVar10 * 0x14) = 0x1e;
      *(undefined1 *)(iVar15 + 3 + iVar10 * 0x14) = 0;
      *(uint **)(iVar15 + 8 + iVar10 * 0x14) = local_c;
      *(undefined4 *)(iVar15 + 0xc + iVar10 * 0x14) = 0;
      *(undefined4 *)(iVar15 + 0x10 + iVar10 * 0x14) = 0;
    }
    else {
      if (iVar15 == 0) {
        iVar15 = 0x33;
      }
      else {
        iVar15 = iVar15 * 2;
      }
      puVar12 = FUN_00494cf0(*piVar9,(undefined4 *)piVar9[1],iVar15 * 0x14);
      if (puVar12 != (undefined4 *)0x0) {
        iVar15 = *piVar9;
        if (((iVar15 == 0) || (puVar12 < *(undefined4 **)(iVar15 + 0x104))) ||
           (*(undefined4 **)(iVar15 + 0x108) <= puVar12)) {
          uVar16 = (*DAT_00582af0._4_4_)(puVar12);
        }
        else {
          uVar16 = (uint)*(ushort *)(iVar15 + 0xe8);
        }
        piVar9[8] = uVar16 / 0x14;
        piVar9[1] = (int)puVar12;
        goto LAB_004ac60d;
      }
    }
    piVar11 = local_8;
    FUN_004aaa40(piVar9,(int)local_8);
    FUN_00492d70(param_1,local_48,0x6b,param_3,1,piVar11,local_28,param_5,local_10);
    iVar10 = piVar9[7];
    iVar15 = piVar9[8];
    if (iVar10 < iVar15) {
LAB_004ac6d4:
      iVar15 = piVar9[1];
      piVar9[7] = piVar9[7] + 1;
      *(int *)(iVar15 + 4 + iVar10 * 0x14) = local_18;
      *(uint *)(iVar15 + 8 + iVar10 * 0x14) = local_10;
      *(undefined2 *)(iVar15 + iVar10 * 0x14) = 0x36;
      *(undefined1 *)(iVar15 + 3 + iVar10 * 0x14) = 0;
      *(uint **)(iVar15 + 0xc + iVar10 * 0x14) = local_28;
      *(undefined4 *)(iVar15 + 0x10 + iVar10 * 0x14) = 0;
    }
    else {
      if (iVar15 == 0) {
        iVar15 = 0x33;
      }
      else {
        iVar15 = iVar15 * 2;
      }
      puVar12 = FUN_00494cf0(*piVar9,(undefined4 *)piVar9[1],iVar15 * 0x14);
      if (puVar12 != (undefined4 *)0x0) {
        iVar15 = *piVar9;
        if (((iVar15 == 0) || (puVar12 < *(undefined4 **)(iVar15 + 0x104))) ||
           (*(undefined4 **)(iVar15 + 0x108) <= puVar12)) {
          uVar16 = (*DAT_00582af0._4_4_)(puVar12);
        }
        else {
          uVar16 = (uint)*(ushort *)(iVar15 + 0xe8);
        }
        piVar9[8] = uVar16 / 0x14;
        piVar9[1] = (int)puVar12;
        goto LAB_004ac6d4;
      }
    }
    iVar10 = 0;
    piVar11 = local_8;
    if (0 < *(short *)((int)local_8 + 0x26)) {
      do {
        if (((int)local_14[iVar10] < 0) && (iVar10 != (short)piVar11[9])) {
          local_c = (uint *)piVar9[7];
          iVar15 = piVar9[8];
          if ((int)local_c < iVar15) {
LAB_004ac7ab:
            piVar9[7] = piVar9[7] + 1;
            puVar2 = (undefined2 *)(piVar9[1] + (int)local_c * 0x14);
            *(int *)(puVar2 + 2) = local_18;
            *puVar2 = 0x1d;
            *(undefined1 *)((int)puVar2 + 3) = 0;
            *(int *)(puVar2 + 4) = iVar10;
            *(int *)(puVar2 + 6) = local_20 + iVar10;
            *(undefined4 *)(puVar2 + 8) = 0;
          }
          else {
            if (iVar15 == 0) {
              iVar15 = 0x33;
            }
            else {
              iVar15 = iVar15 * 2;
            }
            puVar12 = FUN_00494cf0(*piVar9,(undefined4 *)piVar9[1],iVar15 * 0x14);
            if (puVar12 != (undefined4 *)0x0) {
              iVar15 = *piVar9;
              if (((iVar15 == 0) || (puVar12 < *(undefined4 **)(iVar15 + 0x104))) ||
                 (*(undefined4 **)(iVar15 + 0x108) <= puVar12)) {
                uVar16 = (*DAT_00582af0._4_4_)(puVar12);
              }
              else {
                uVar16 = (uint)*(ushort *)(iVar15 + 0xe8);
              }
              piVar9[8] = uVar16 / 0x14;
              piVar9[1] = (int)puVar12;
              goto LAB_004ac7ab;
            }
          }
          FUN_00493630(piVar9,local_8,iVar10,local_20 + iVar10);
          piVar11 = local_8;
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < *(short *)((int)piVar11 + 0x26));
    }
  }
  puVar20 = local_28;
  if (local_50 == 0) {
    puVar14 = (uint *)0x0;
    if (local_3c != 0) {
      puVar14 = local_28;
    }
    FUN_0049b1e0(param_1,piVar11,local_18,(int)local_2c,(int)local_40,(int)puVar14,1,param_5,
                 local_10,(int *)0x0);
    if (local_38 != 0) {
      FUN_0049a610(param_1,local_8,(int)puVar20,0);
    }
    uVar16 = piVar9[7];
    iVar10 = piVar9[8];
    if ((int)uVar16 < iVar10) {
LAB_004ac8b9:
      iVar10 = piVar9[1];
      piVar9[7] = piVar9[7] + 1;
      *(undefined2 *)(iVar10 + uVar16 * 0x14) = 0x36;
      *(undefined1 *)(iVar10 + 3 + uVar16 * 0x14) = 0;
      *(int *)(iVar10 + 4 + uVar16 * 0x14) = local_18;
      *(undefined4 *)(iVar10 + 8 + uVar16 * 0x14) = 0;
      *(uint **)(iVar10 + 0xc + uVar16 * 0x14) = puVar20;
      *(undefined4 *)(iVar10 + 0x10 + uVar16 * 0x14) = 0;
    }
    else {
      if (iVar10 == 0) {
        iVar10 = 0x33;
      }
      else {
        iVar10 = iVar10 * 2;
      }
      puVar12 = FUN_00494cf0(*piVar9,(undefined4 *)piVar9[1],iVar10 * 0x14);
      if (puVar12 != (undefined4 *)0x0) {
        iVar10 = *piVar9;
        if (((iVar10 == 0) || (puVar12 < *(undefined4 **)(iVar10 + 0x104))) ||
           (*(undefined4 **)(iVar10 + 0x108) <= puVar12)) {
          uVar13 = (*DAT_00582af0._4_4_)(puVar12);
        }
        else {
          uVar13 = (uint)*(ushort *)(iVar10 + 0xe8);
        }
        piVar9[1] = (int)puVar12;
        piVar9[8] = uVar13 / 0x14;
        puVar20 = local_28;
        goto LAB_004ac8b9;
      }
      uVar16 = 1;
    }
    FUN_0049c860(param_1,(int)local_8,local_18,local_40);
    if ((local_38 != 0) || (local_3c != 0)) {
      local_c = (uint *)piVar9[7];
      iVar10 = piVar9[8];
      if (iVar10 <= (int)local_c) {
        if (iVar10 == 0) {
          iVar10 = 0x33;
        }
        else {
          iVar10 = iVar10 * 2;
        }
        puVar12 = FUN_00494cf0(*piVar9,(undefined4 *)piVar9[1],iVar10 * 0x14);
        if (puVar12 == (undefined4 *)0x0) goto LAB_004ac9b8;
        iVar10 = *piVar9;
        if (((iVar10 == 0) || (puVar12 < *(undefined4 **)(iVar10 + 0x104))) ||
           (*(undefined4 **)(iVar10 + 0x108) <= puVar12)) {
          uVar13 = (*DAT_00582af0._4_4_)(puVar12);
        }
        else {
          uVar13 = (uint)*(ushort *)(iVar10 + 0xe8);
        }
        piVar9[8] = uVar13 / 0x14;
        piVar9[1] = (int)puVar12;
      }
      iVar10 = piVar9[1];
      piVar9[7] = piVar9[7] + 1;
      *(undefined2 *)(iVar10 + (int)local_c * 0x14) = 0x3b;
      *(undefined1 *)(iVar10 + 3 + (int)local_c * 0x14) = 0;
      *(int *)(iVar10 + 4 + (int)local_c * 0x14) = local_18;
      *(undefined4 *)(iVar10 + 8 + (int)local_c * 0x14) = 0;
      *(undefined4 *)(iVar10 + 0xc + (int)local_c * 0x14) = 0;
      *(undefined4 *)(iVar10 + 0x10 + (int)local_c * 0x14) = 0;
    }
LAB_004ac9b8:
    iVar10 = local_38;
    if ((-1 < (int)uVar16) && (uVar16 < (uint)piVar9[7])) {
      *(int *)(piVar9[1] + 8 + uVar16 * 0x14) = piVar9[7];
    }
    if (local_38 != 0) {
      FUN_0049a610(param_1,local_8,0,(int)local_2c);
    }
    FUN_00493790(param_1,local_8,local_18,(int)local_2c,(int)local_40,1,0,0);
    if ((iVar10 != 0) && ((*(uint *)(*param_1 + 0x18) & 0x40000) != 0)) {
      local_c = (uint *)*local_8;
      uVar16 = 0;
      if (local_c != (uint *)0x0) {
        bVar4 = (byte)*local_c;
        puVar20 = local_c;
        while (bVar4 != 0) {
          puVar20 = (uint *)((int)puVar20 + 1);
          bVar4 = *(byte *)puVar20;
        }
        uVar16 = (int)puVar20 - (int)local_c & 0x3fffffff;
      }
      local_4c = (uint *)(local_8[0x10] + 0x38);
      if (*(int *)(local_8[0x10] + 0x44) == 0) {
        uVar13 = 0;
      }
      else {
        uVar13 = 0;
        local_34 = local_c;
        if (uVar16 != 0) {
          uVar13 = 0;
          uVar21 = uVar16;
          do {
            uVar6 = *local_34;
            local_34 = (uint *)((int)local_34 + 1);
            uVar21 = uVar21 - 1;
            uVar13 = uVar13 ^ (uint)(byte)(&DAT_00569620)[(byte)uVar6] ^ uVar13 * 8;
            piVar9 = local_30;
          } while (0 < (int)uVar21);
        }
        uVar13 = uVar13 % *local_4c;
      }
      puVar12 = FUN_00479af0((int)local_4c,(byte *)local_c,uVar16,uVar13);
      piVar11 = local_8;
      if (puVar12 != (undefined4 *)0x0) {
        for (piVar5 = (int *)puVar12[2]; piVar5 != (int *)0x0; piVar5 = (int *)piVar5[3]) {
          puVar20 = FUN_00479db0(param_1,(int)piVar11,piVar5,(int)param_3);
          if (puVar20 != (uint *)0x0) {
            FUN_00492dd0(param_1,(int *)puVar20,piVar11,local_28,2,0);
          }
          piVar9 = local_30;
        }
      }
    }
  }
  if (((*(byte *)(local_1c + 0x18) & 0x10) != 0) && (param_1[0x6d] == 0)) {
    iVar10 = piVar9[7];
    iVar15 = piVar9[8];
    if (iVar15 <= iVar10) {
      if (iVar15 == 0) {
        iVar15 = 0x33;
      }
      else {
        iVar15 = iVar15 * 2;
      }
      puVar12 = FUN_00494cf0(*piVar9,(undefined4 *)piVar9[1],iVar15 * 0x14);
      if (puVar12 == (undefined4 *)0x0) goto LAB_004acb9d;
      iVar15 = *piVar9;
      if (((iVar15 == 0) || (puVar12 < *(undefined4 **)(iVar15 + 0x104))) ||
         (*(undefined4 **)(iVar15 + 0x108) <= puVar12)) {
        uVar16 = (*DAT_00582af0._4_4_)(puVar12);
      }
      else {
        uVar16 = (uint)*(ushort *)(iVar15 + 0xe8);
      }
      piVar9[8] = uVar16 / 0x14;
      piVar9[1] = (int)puVar12;
    }
    iVar15 = piVar9[1];
    piVar9[7] = piVar9[7] + 1;
    *(undefined2 *)(iVar15 + iVar10 * 0x14) = 0x14;
    *(undefined1 *)(iVar15 + 3 + iVar10 * 0x14) = 0;
    *(int *)(iVar15 + 4 + iVar10 * 0x14) = local_64;
    *(undefined4 *)(iVar15 + 8 + iVar10 * 0x14) = 1;
    *(undefined4 *)(iVar15 + 0xc + iVar10 * 0x14) = 0;
    *(undefined4 *)(iVar15 + 0x10 + iVar10 * 0x14) = 0;
  }
LAB_004acb9d:
  FUN_00492d70(param_1,local_48,0x6b,param_3,2,local_8,local_28,param_5,local_10);
  iVar10 = piVar9[7];
  iVar15 = piVar9[8];
  if (iVar10 < iVar15) {
LAB_004acc2a:
    iVar15 = piVar9[1];
    piVar9[7] = piVar9[7] + 1;
    *(undefined2 *)(iVar15 + iVar10 * 0x14) = 1;
    *(undefined1 *)(iVar15 + 3 + iVar10 * 0x14) = 0;
    *(undefined4 *)(iVar15 + 4 + iVar10 * 0x14) = 0;
    *(uint *)(iVar15 + 8 + iVar10 * 0x14) = local_10;
    *(undefined4 *)(iVar15 + 0xc + iVar10 * 0x14) = 0;
    *(undefined4 *)(iVar15 + 0x10 + iVar10 * 0x14) = 0;
  }
  else {
    if (iVar15 == 0) {
      iVar15 = 0x33;
    }
    else {
      iVar15 = iVar15 * 2;
    }
    puVar12 = FUN_00494cf0(*piVar9,(undefined4 *)piVar9[1],iVar15 * 0x14);
    if (puVar12 != (undefined4 *)0x0) {
      iVar15 = *piVar9;
      if (((iVar15 == 0) || (puVar12 < *(undefined4 **)(iVar15 + 0x104))) ||
         (*(undefined4 **)(iVar15 + 0x108) <= puVar12)) {
        uVar16 = (*DAT_00582af0._4_4_)(puVar12);
      }
      else {
        uVar16 = (uint)*(ushort *)(iVar15 + 0xe8);
      }
      piVar9[8] = uVar16 / 0x14;
      piVar9[1] = (int)puVar12;
      goto LAB_004acc2a;
    }
  }
  if ((-1 < (int)local_10) && (local_10 < (uint)piVar9[7])) {
    *(int *)(piVar9[1] + 8 + local_10 * 0x14) = piVar9[7];
  }
  iVar10 = 0;
  for (local_50 = local_8[2]; local_50 != 0; local_50 = *(uint *)(local_50 + 0x14)) {
    if ((local_44 != 0) || (0 < local_40[iVar10])) {
      local_c = (uint *)piVar9[7];
      iVar15 = piVar9[8];
      if (iVar15 <= (int)local_c) {
        if (iVar15 == 0) {
          iVar15 = 0x33;
        }
        else {
          iVar15 = iVar15 * 2;
        }
        puVar12 = FUN_00494cf0(*piVar9,(undefined4 *)piVar9[1],iVar15 * 0x14);
        if (puVar12 == (undefined4 *)0x0) goto LAB_004acd48;
        iVar15 = *piVar9;
        if (((iVar15 == 0) || (puVar12 < *(undefined4 **)(iVar15 + 0x104))) ||
           (*(undefined4 **)(iVar15 + 0x108) <= puVar12)) {
          uVar16 = (*DAT_00582af0._4_4_)(puVar12);
        }
        else {
          uVar16 = (uint)*(ushort *)(iVar15 + 0xe8);
        }
        piVar9[8] = uVar16 / 0x14;
        piVar9[1] = (int)puVar12;
      }
      piVar9[7] = piVar9[7] + 1;
      puVar2 = (undefined2 *)(piVar9[1] + (int)local_c * 0x14);
      *puVar2 = 0x2d;
      *(undefined1 *)((int)puVar2 + 3) = 0;
      *(int *)(puVar2 + 2) = local_18 + 1 + iVar10;
      *(undefined4 *)(puVar2 + 4) = 0;
      *(undefined4 *)(puVar2 + 6) = 0;
      *(undefined4 *)(puVar2 + 8) = 0;
    }
LAB_004acd48:
    iVar10 = iVar10 + 1;
  }
  iVar10 = piVar9[7];
  iVar15 = piVar9[8];
  if (iVar10 < iVar15) {
LAB_004acdc3:
    iVar15 = piVar9[1];
    piVar9[7] = piVar9[7] + 1;
    *(undefined2 *)(iVar15 + iVar10 * 0x14) = 0x2d;
    *(undefined1 *)(iVar15 + 3 + iVar10 * 0x14) = 0;
    *(int *)(iVar15 + 4 + iVar10 * 0x14) = local_18;
    *(undefined4 *)(iVar15 + 8 + iVar10 * 0x14) = 0;
    *(undefined4 *)(iVar15 + 0xc + iVar10 * 0x14) = 0;
    *(undefined4 *)(iVar15 + 0x10 + iVar10 * 0x14) = 0;
  }
  else {
    if (iVar15 == 0) {
      iVar15 = 0x33;
    }
    else {
      iVar15 = iVar15 * 2;
    }
    puVar12 = FUN_00494cf0(*piVar9,(undefined4 *)piVar9[1],iVar15 * 0x14);
    if (puVar12 != (undefined4 *)0x0) {
      iVar15 = *piVar9;
      if (((iVar15 == 0) || (puVar12 < *(undefined4 **)(iVar15 + 0x104))) ||
         (*(undefined4 **)(iVar15 + 0x108) <= puVar12)) {
        uVar16 = (*DAT_00582af0._4_4_)(puVar12);
      }
      else {
        uVar16 = (uint)*(ushort *)(iVar15 + 0xe8);
      }
      piVar9[8] = uVar16 / 0x14;
      piVar9[1] = (int)puVar12;
      goto LAB_004acdc3;
    }
  }
  if ((*(char *)((int)param_1 + 0x12) == '\0') && (param_1[0x6d] == 0)) {
    FUN_0048dbc0(param_1);
  }
  puVar12 = local_14;
  if ((((*(byte *)(local_1c + 0x18) & 0x10) == 0) || (param_1[0x6d] != 0)) ||
     (*(char *)((int)param_1 + 0x12) != '\0')) goto LAB_004ad0fd;
  iVar10 = piVar9[7];
  iVar15 = piVar9[8];
  if (iVar10 < iVar15) {
LAB_004acea4:
    iVar15 = piVar9[1];
    piVar9[7] = piVar9[7] + 1;
    *(undefined2 *)(iVar15 + iVar10 * 0x14) = 0x10;
    *(undefined1 *)(iVar15 + 3 + iVar10 * 0x14) = 0;
    *(int *)(iVar15 + 4 + iVar10 * 0x14) = local_64;
    *(undefined4 *)(iVar15 + 8 + iVar10 * 0x14) = 1;
    *(undefined4 *)(iVar15 + 0xc + iVar10 * 0x14) = 0;
    *(undefined4 *)(iVar15 + 0x10 + iVar10 * 0x14) = 0;
  }
  else {
    if (iVar15 == 0) {
      iVar15 = 0x33;
    }
    else {
      iVar15 = iVar15 * 2;
    }
    puVar12 = FUN_00494cf0(*piVar9,(undefined4 *)piVar9[1],iVar15 * 0x14);
    if (puVar12 != (undefined4 *)0x0) {
      iVar15 = *piVar9;
      if (((iVar15 == 0) || (puVar12 < *(undefined4 **)(iVar15 + 0x104))) ||
         (*(undefined4 **)(iVar15 + 0x108) <= puVar12)) {
        uVar16 = (*DAT_00582af0._4_4_)(puVar12);
      }
      else {
        uVar16 = (uint)*(ushort *)(iVar15 + 0xe8);
      }
      piVar9[8] = uVar16 / 0x14;
      piVar9[1] = (int)puVar12;
      goto LAB_004acea4;
    }
  }
  iVar10 = *piVar9;
  FUN_00487fb0((int *)piVar9[4],(uint)*(ushort *)(piVar9 + 0xb) * 2);
  FUN_00494b00(iVar10,(undefined4 *)piVar9[4]);
  *(undefined2 *)(piVar9 + 0xb) = 1;
  piVar11 = FUN_00494b90(iVar10,0x50);
  if (piVar11 != (int *)0x0) {
    memset(piVar11,0,0x50);
  }
  piVar9[4] = (int)piVar11;
  if (piVar11 != (int *)0x0) {
    *(undefined2 *)(piVar11 + 7) = 1;
    *piVar11 = *piVar9;
    *(undefined2 *)(piVar11 + 0x11) = 1;
    piVar11[10] = *piVar9;
  }
  puVar12 = local_14;
  if (*(char *)(*piVar9 + 0x38) == '\0') {
    piVar9 = (int *)piVar9[4];
    if (*piVar9 == 0) {
      iVar10 = 1000000000;
    }
    else {
      iVar10 = *(int *)(*piVar9 + 0x50);
    }
    iVar15 = 0;
    if (-1 < iVar10) {
      do {
        if ("rows updated"[iVar15] == '\0') break;
        iVar15 = iVar15 + 1;
      } while (iVar15 <= iVar10);
    }
    uVar8 = *(ushort *)(piVar9 + 7);
    if ((uVar8 & 0x2460) != 0) {
      if ((uVar8 & 0x2000) == 0) {
        if (((uVar8 & 0x400) == 0) || ((code *)piVar9[8] == (code *)0x0)) {
          if ((uVar8 & 0x20) == 0) {
            if ((uVar8 & 0x40) != 0) {
              piVar11 = (int *)piVar9[4];
              piVar11[1] = *(int *)(*piVar11 + 0xa4);
              *(int **)(*piVar11 + 0xa4) = piVar11;
              if ((*(byte *)(piVar9 + 7) & 0x20) != 0) {
                FUN_004a6e20((undefined4 *)piVar9[4]);
              }
              *(ushort *)(piVar9 + 7) = *(ushort *)(piVar9 + 7) & 0xbe01 | 1;
              *(undefined1 *)((int)piVar9 + 0x1e) = 5;
            }
          }
          else {
            FUN_004a6e20((undefined4 *)piVar9[4]);
          }
        }
        else {
          (*(code *)piVar9[8])(piVar9[1]);
          piVar9[8] = 0;
        }
      }
      else {
        FUN_004b7010(piVar9,piVar9[4]);
        FUN_004b76e0(piVar9);
      }
    }
    FUN_00494b00(*piVar9,(undefined4 *)piVar9[9]);
    piVar9[9] = 0;
    piVar9[8] = 0;
    piVar9[1] = (int)"rows updated";
    piVar9[6] = iVar15;
    *(undefined2 *)(piVar9 + 7) = 0xa02;
    *(undefined2 *)((int)piVar9 + 0x1e) = 0x103;
    puVar12 = local_14;
  }
LAB_004ad0fd:
  if (local_74._4_4_ != 0) {
    *(undefined4 *)(local_74._4_4_ + 0x204) = (undefined4)local_74;
  }
  FUN_00494b00(local_1c,local_40);
  iVar10 = local_1c;
  FUN_00494b00(local_1c,puVar12);
  FUN_004a9cb0(iVar10,local_6c);
  FUN_00499060(iVar10,param_3);
  FUN_00498790(iVar10,(undefined4 *)param_4);
  return;
}


/* FUN_004aeea0 @ 004aeea0  kind=lib  attributed-by=lib-string  size=94 */

undefined4 __cdecl FUN_004aeea0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (param_2 == 0) {
    if (param_1[0x23] < 0) {
      return 0;
    }
    if (0 < param_1[0x23]) goto LAB_004aeeda;
    iVar2 = param_1[0x22];
  }
  else {
    if (0 < *(int *)(iVar1 + 0x1ec)) goto LAB_004aeeda;
    if (*(int *)(iVar1 + 0x1ec) < 0) {
      return 0;
    }
    iVar2 = *(int *)(iVar1 + 0x1e8);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_004aeeda:
  param_1[0x16] = 0x13;
  *(undefined1 *)(param_1 + 0x17) = 2;
  FUN_004a9a30(param_1 + 0xd,iVar1,(byte *)"foreign key constraint failed");
  return 1;
}


/* FUN_004af360 @ 004af360  kind=lib  attributed-by=lib-string  size=15286 */

/* WARNING: Removing unreachable block (ram,0x004b467d) */
/* WARNING: Removing unreachable block (ram,0x004b03a7) */

void FUN_004af360(uint *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  void *_Dst;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  uint6 uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  char cVar11;
  byte bVar12;
  undefined1 uVar13;
  bool bVar14;
  undefined2 uVar15;
  int iVar16;
  undefined3 extraout_var;
  undefined4 *puVar17;
  undefined3 extraout_var_00;
  int *piVar18;
  int *piVar19;
  undefined4 uVar20;
  byte *pbVar21;
  size_t sVar22;
  undefined3 extraout_var_01;
  char *pcVar23;
  undefined3 extraout_var_02;
  undefined4 *puVar24;
  undefined3 extraout_var_03;
  uint uVar25;
  int iVar26;
  int iVar27;
  undefined4 uVar28;
  uint *puVar29;
  int iVar30;
  ushort uVar31;
  uint extraout_ECX;
  int *piVar32;
  int *piVar33;
  void *extraout_EDX;
  uint extraout_EDX_00;
  uint *puVar34;
  uint uVar35;
  int *piVar36;
  undefined8 *puVar37;
  uint uVar38;
  uint uVar39;
  float10 fVar40;
  longlong lVar41;
  ulonglong uVar42;
  int local_130;
  int iStack_12c;
  int local_11c;
  undefined4 local_118;
  int local_114;
  uint local_110;
  int local_10c;
  undefined4 *local_108;
  uint local_104;
  uint local_100;
  byte local_f9;
  undefined8 local_f8;
  uint local_f0;
  uint local_ec;
  int *local_e8;
  uint local_e4;
  uint local_e0;
  int *local_dc;
  uint *local_d8;
  uint *local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  uint local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  byte *local_98;
  int *local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78 [8];
  undefined8 local_70;
  byte *local_68;
  byte *local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  int local_4c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  piVar18 = (int *)*param_1;
  local_e0 = param_1[1];
  local_e4 = param_1[2];
  local_f0 = CONCAT31(local_f0._1_3_,*(undefined1 *)(*(int *)(piVar18[4] + 0xc) + 0x4d));
  local_10c = 0;
  local_104 = piVar18[8];
  local_100 = piVar18[9];
  piVar36 = (int *)0x0;
  local_d8 = param_1;
  local_ec = 0;
  local_d4 = (uint *)0x0;
  local_f9 = 0;
  local_114 = 0;
  local_dc = (int *)0x0;
  local_110 = 0;
  local_e8 = piVar18;
  FUN_004af300((int *)param_1);
  if (local_d8[0x16] == 7) goto LAB_004b57a6;
  local_d8[0x16] = 0;
  local_d8[5] = 0;
  piVar18[0x6d] = 0;
  if (piVar18[0x38] == 0) {
    iVar30 = piVar18[0x45];
    local_ec = local_d8[0x15];
LAB_004af440:
    uVar39 = local_ec;
    if ((char)piVar18[0xe] != '\0') goto LAB_004b57a6;
    if (iVar30 != 0) {
      iVar27 = local_114;
      if (piVar18[0x47] == local_114) {
        iVar16 = (*(code *)piVar18[0x45])();
        iVar27 = 0;
        if (iVar16 != 0) {
          puVar29 = (uint *)0x9;
          local_d4 = puVar29;
          goto LAB_004b57cd;
        }
      }
      local_114 = iVar27 + 1;
    }
    if ((*(byte *)(local_e0 + 2 + uVar39 * 0x14) & 2) != 0) {
      piVar36 = (int *)(local_e4 + *(int *)(local_e0 + 8 + uVar39 * 0x14) * 0x28);
      local_dc = piVar36;
      if ((*(ushort *)(piVar36 + 7) & 0x2460) != 0) {
        FUN_004b7720(piVar36);
      }
      *(undefined2 *)(piVar36 + 7) = 4;
    }
    uVar7 = local_c8;
    puVar34 = local_d8;
    piVar19 = local_dc;
    uVar35 = local_e0;
    uVar25 = local_e4;
    piVar33 = local_e8;
    bVar12 = *(byte *)(local_e0 + uVar39 * 0x14);
    puVar29 = local_d4;
    piVar10 = local_dc;
    uVar42 = local_d0;
    if (0x93 < bVar12 - 1) goto LAB_004b0d11;
    uVar38 = (uint)(int *)local_d0;
    uVar8 = (uint)local_c8._4_4_;
    uVar28 = local_c0._4_4_;
    uVar9 = (uint)local_b8._4_4_;
    switch(bVar12) {
    case 1:
      if (piVar18[0x38] == 0) goto LAB_004b0d00;
      goto LAB_004af4ee;
    case 2:
      iVar27 = *(int *)(local_e0 + 4 + uVar39 * 0x14);
      *(undefined2 *)(local_e4 + 0x1c + iVar27 * 0x28) = 4;
      *(uint *)(local_e4 + 0x10 + iVar27 * 0x28) = local_ec;
      *(int *)(local_e4 + 0x14 + iVar27 * 0x28) = (int)local_ec >> 0x1f;
      goto LAB_004af55f;
    case 3:
      local_ec = *(uint *)(local_e4 + 0x10 + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 0x28);
      break;
    case 4:
      iVar27 = *(int *)(local_e0 + 4 + uVar39 * 0x14);
      *(undefined2 *)(local_e4 + 0x1c + iVar27 * 0x28) = 4;
      uVar39 = *(uint *)(local_e4 + 0x10 + iVar27 * 0x28);
      local_d0 = CONCAT44(local_d0._4_4_,uVar39);
      *(uint *)(local_e4 + 0x10 + iVar27 * 0x28) = local_ec;
      *(int *)(local_e4 + 0x14 + iVar27 * 0x28) = (int)local_ec >> 0x1f;
      local_ec = uVar39;
      uVar42 = local_d0;
      break;
    case 5:
      if ((*(byte *)(local_e4 + 0x1c + *(int *)(local_e0 + 0xc + uVar39 * 0x14) * 0x28) & 1) != 0)
      goto switchD_004af4da_caseD_6;
      break;
    case 6:
switchD_004af4da_caseD_6:
      if ((*(int *)(local_e0 + 4 + uVar39 * 0x14) != 0) ||
         (piVar33 = (int *)local_d8[0x28], piVar33 == (int *)0x0)) {
        local_d8[0x16] = *(uint *)(local_e0 + 4 + uVar39 * 0x14);
        *(undefined1 *)(local_d8 + 0x17) = *(undefined1 *)(local_e0 + 8 + uVar39 * 0x14);
        local_d8[0x15] = local_ec;
        if (*(int *)(local_e0 + 0x10 + uVar39 * 0x14) == 0) {
          if (local_d8[0x16] != 0) {
            FUN_004683f0(*(undefined4 *)(local_e0 + 4 + uVar39 * 0x14),
                         "constraint failed at %d in [%s]");
          }
        }
        else {
          FUN_004a9a30((int *)(local_d8 + 0xd),(int)piVar18,&DAT_0056de50);
          FUN_004683f0(*(undefined4 *)(local_e0 + 4 + uVar39 * 0x14),"abort at %d in [%s]: %s");
        }
        iVar30 = FUN_004b60e0((int *)local_d8);
        puVar29 = local_d8;
        if (iVar30 == 5) {
LAB_004b564b:
          puVar29[0x16] = 5;
        }
        goto LAB_004b5847;
      }
      uVar25 = piVar33[1];
      local_d8[0x2a] = local_d8[0x2a] - 1;
      local_d8[0x28] = uVar25;
      uVar25 = local_d8[0x19];
      piVar18[0x13] = piVar18[0x13] + uVar25;
      piVar18[0x12] = uVar25;
      local_ec = FUN_004b5f90(piVar33);
      local_104 = piVar18[8];
      local_100 = piVar18[9];
      if (*(int *)(local_e0 + 8 + uVar39 * 0x14) == 4) {
        local_ec = *(int *)(local_d8[1] + 8 + local_ec * 0x14) - 1;
      }
      local_e0 = local_d8[1];
      local_e4 = local_d8[2];
      puVar29 = local_d4;
      piVar10 = local_dc;
      uVar42 = local_d0;
      break;
    case 7:
      iVar27 = *(int *)(local_e0 + 4 + uVar39 * 0x14);
      piVar36[4] = iVar27;
      piVar36[5] = iVar27 >> 0x1f;
      break;
    case 8:
      piVar33 = *(int **)(local_e0 + 0x10 + uVar39 * 0x14);
      piVar36[4] = *piVar33;
      piVar36[5] = piVar33[1];
      break;
    case 9:
      goto switchD_004af4da_caseD_9;
    case 10:
      iVar27 = *(int *)(local_e0 + 0xc + uVar39 * 0x14) - *(int *)(local_e0 + 8 + uVar39 * 0x14);
      uVar15 = 1;
      if (*(int *)(local_e0 + 4 + uVar39 * 0x14) != 0) {
        uVar15 = 0x101;
      }
      local_d0._0_6_ = CONCAT24(uVar15,iVar27);
      *(undefined2 *)(local_dc + 7) = uVar15;
      piVar36 = local_dc;
      while (puVar29 = local_d4, piVar10 = piVar36, uVar42 = local_d0, 0 < iVar27) {
        if ((*(ushort *)(piVar36 + 0x11) & 0x2460) != 0) {
          FUN_004b7720(piVar36 + 10);
        }
        *(undefined2 *)(piVar36 + 0x11) = local_d0._4_2_;
        iVar27 = (int)(int *)local_d0 - 1;
        local_d0 = CONCAT44(local_d0._4_4_,iVar27);
        piVar18 = local_e8;
        piVar36 = piVar36 + 10;
      }
      break;
    case 0xb:
      FUN_004b79e0(piVar36,*(void **)(local_e0 + 0x10 + uVar39 * 0x14),
                   *(size_t *)(local_e0 + 4 + uVar39 * 0x14),'\0',(undefined *)0x0);
      *(char *)((int)piVar36 + 0x1f) = (char)local_f0;
      puVar29 = local_d4;
      piVar10 = local_dc;
      uVar42 = local_d0;
      break;
    case 0xc:
      piVar33 = (int *)(local_d8[0x11] + (*(int *)(local_e0 + 4 + uVar39 * 0x14) * 5 + -5) * 8);
      local_d0 = CONCAT44(local_d0._4_4_,piVar33);
      bVar14 = FUN_004b7d90(piVar33);
      piVar36 = local_dc;
      if (CONCAT31(extraout_var,bVar14) != 0) goto LAB_004b5780;
      FUN_004b7c40(local_dc,(undefined8 *)piVar33,0x800);
      puVar29 = local_d4;
      piVar10 = local_dc;
      uVar42 = local_d0;
      break;
    case 0xd:
      local_d0 = local_d0 & 0xffffffff;
      iVar27 = *(int *)(local_e0 + 4 + uVar39 * 0x14);
      iVar16 = *(int *)(local_e0 + 8 + uVar39 * 0x14);
      local_c8 = CONCAT44(iVar16,iVar27);
      puVar37 = (undefined8 *)(local_e4 + iVar27 * 0x28);
      piVar36 = (int *)(local_e4 + iVar16 * 0x28);
      iVar27 = *(int *)(local_e0 + 0xc + uVar39 * 0x14) + 1;
      local_dc = piVar36;
      while (iVar27 != 0) {
        local_d0 = CONCAT44(iVar27 + -1,piVar36[9]);
        piVar36[9] = 0;
        FUN_004b7500(piVar36,puVar37);
        *(int **)((int)puVar37 + 0x24) = (int *)local_d0;
        puVar37 = puVar37 + 5;
        piVar36 = piVar36 + 10;
        iVar27 = (int)local_d0._4_4_;
      }
      local_d0 = CONCAT44(0xffffffff,(int *)local_d0);
      puVar29 = local_d4;
      piVar10 = piVar36;
      uVar42 = local_d0;
      break;
    case 0xe:
      local_d0 = CONCAT44(local_d0._4_4_,*(undefined4 *)(local_e0 + 0xc + uVar39 * 0x14));
      puVar37 = (undefined8 *)(local_e4 + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 0x28);
      piVar33 = (int *)(local_e4 + *(int *)(local_e0 + 8 + uVar39 * 0x14) * 0x28);
      while( true ) {
        local_dc = piVar33;
        FUN_004b7c40(piVar33,puVar37,0x1000);
        if (((*(ushort *)(piVar33 + 7) & 0x1000) != 0) &&
           (iVar27 = FUN_004b7490(piVar33), iVar27 != 0)) goto LAB_004b57a6;
        uVar39 = (uint)(int *)local_d0;
        local_d0 = CONCAT44(local_d0._4_4_,(int)(int *)local_d0 - 1);
        puVar29 = local_d4;
        piVar36 = local_dc;
        piVar10 = local_dc;
        uVar42 = local_d0;
        if (uVar39 == 0) break;
        piVar33 = piVar33 + 10;
        puVar37 = puVar37 + 5;
      }
      break;
    case 0xf:
      piVar36 = (int *)(local_e4 + *(int *)(local_e0 + 8 + uVar39 * 0x14) * 0x28);
      local_dc = piVar36;
      FUN_004b7c40(piVar36,(undefined8 *)(local_e4 + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 0x28),
                   0x1000);
      puVar29 = local_d4;
      piVar10 = local_dc;
      uVar42 = local_d0;
      break;
    case 0x10:
      local_d4 = (uint *)FUN_004aeea0((int *)local_d8,0);
      puVar29 = local_d4;
      piVar10 = local_dc;
      uVar42 = local_d0;
      if ((local_d4 == (uint *)0x0) &&
         (local_d4 = (uint *)FUN_004af050((int *)local_d8,1), uVar25 = local_e0, puVar29 = local_d4,
         piVar10 = local_dc, uVar42 = local_d0, local_d4 == (uint *)0x0)) {
        local_d8[0x14] = local_d8[0x14] + 2 | 1;
        uVar35 = local_e4 + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 0x28;
        local_d8[5] = uVar35;
        iVar30 = 0;
        local_d0 = (ulonglong)uVar35;
        if (0 < *(int *)(local_e0 + 8 + uVar39 * 0x14)) goto LAB_004afa70;
        goto LAB_004b55f4;
      }
      break;
    case 0x11:
      iVar27 = *(int *)(local_e0 + 4 + uVar39 * 0x14);
      if (iVar27 != 0) {
        FUN_004b7860((int *)(local_e4 + iVar27 * 0x28),0,0);
        puVar29 = local_d4;
        piVar10 = local_dc;
        uVar42 = local_d0;
      }
      break;
    case 0x12:
      cVar11 = *(char *)(local_e0 + 3 + uVar39 * 0x14);
      local_88 = (ulonglong)CONCAT14(cVar11,local_d8[3]);
      local_dc = (int *)(local_e4 + *(int *)(local_e0 + 0xc + uVar39 * 0x14) * 0x28);
      uVar25 = local_e4 + *(int *)(local_e0 + 8 + uVar39 * 0x14) * 0x28;
      iVar27 = 0;
      local_d0 = (ulonglong)uVar25 << 0x20;
      uVar35 = local_d8[3];
      if (cVar11 != '\0') {
        while( true ) {
          *(uint *)(uVar35 + iVar27 * 4) = uVar25;
          if ((*(ushort *)(local_d0._4_4_ + 7) & 0x1000) != 0) {
            iVar27 = FUN_004b7490((int *)local_d0._4_4_);
            piVar18 = piVar33;
            if (iVar27 != 0) goto LAB_004b57a6;
          }
          FUN_004b7cb0((int)local_d0._4_4_);
          iVar27 = (int)(int *)local_d0 + 1;
          uVar25 = (int)local_d0._4_4_ + 0x28;
          local_d0 = CONCAT44(uVar25,iVar27);
          if (local_88._4_4_ <= iVar27) break;
          uVar35 = (uint)(uint *)local_88;
        }
      }
      piVar36 = local_dc;
      puVar24 = *(undefined4 **)(local_e0 + 0x10 + uVar39 * 0x14);
      if (*(char *)(local_e0 + 1 + uVar39 * 0x14) == -5) {
        puVar17 = puVar24;
        puVar24 = (undefined4 *)0x0;
      }
      else {
        puVar17 = (undefined4 *)*puVar24;
      }
      local_c8 = CONCAT44(puVar24,puVar17);
      local_a4._0_2_ = 1;
      local_c0 = CONCAT44(local_c0._4_4_,piVar33);
      local_a0 = 0;
      FUN_004b7500((int *)&local_c0,(undefined8 *)local_dc);
      local_a4 = (int *)(CONCAT22(local_a4._2_2_,(undefined2)local_a4) & 0xffffbe01 | 1);
      local_90 = local_90 & 0xffffffff00000000;
      if ((*(byte *)((int)(int *)local_c8 + 3) & 8) != 0) {
        local_94 = *(int **)((local_e0 - 4) + uVar39 * 0x14);
      }
      piVar33[8] = local_104;
      piVar33[9] = local_100;
      (**(code **)((int)(int *)local_c8 + 0xc))();
      local_104 = piVar33[8];
      local_100 = piVar33[9];
      if (local_c8._4_4_ != (int *)0x0) {
        FUN_004af2b0(local_c8._4_4_,*(uint *)(local_e0 + 4 + uVar39 * 0x14));
        *(int **)(local_e0 + 0x10 + uVar39 * 0x14) = local_c8._4_4_;
        *(undefined1 *)(local_e0 + 1 + uVar39 * 0x14) = 0xf9;
      }
      if ((char)piVar33[0xe] == '\0') {
        if ((uint *)local_90 != (uint *)0x0) {
          FUN_004ae680((int *)&local_c0,1);
          FUN_004a9a30((int *)(local_d8 + 0xd),(int)piVar33,&DAT_0056de50);
          local_d4 = (uint *)local_90;
        }
        FUN_004aec30((int *)&local_c0,local_f0 & 0xff);
        FUN_004b7500(piVar36,&local_c0);
        bVar14 = FUN_004b7d90(piVar36);
        iVar27 = CONCAT31(extraout_var_00,bVar14);
        piVar18 = piVar33;
        goto joined_r0x004b5145;
      }
      FUN_004b76e0((int *)&local_c0);
      piVar18 = piVar33;
      goto LAB_004b57a6;
    case 0x13:
      iVar27 = *(int *)(local_e0 + 4 + uVar39 * 0x14);
      piVar36 = (int *)(local_e4 + *(int *)(local_e0 + 8 + uVar39 * 0x14) * 0x28);
      local_dc = piVar36;
      if ((*(byte *)(local_e4 + 0x1c + iVar27 * 0x28) & 1) == 0) {
        uVar42 = FUN_004b65e0(local_e4 + iVar27 * 0x28);
        if (uVar42 == 0) {
          FUN_004b7860(piVar36,1,0);
          puVar29 = local_d4;
          piVar36 = local_dc;
          piVar10 = local_dc;
          uVar42 = local_d0;
        }
        else {
          FUN_004b7860(piVar36,0,0);
          puVar29 = local_d4;
          piVar36 = local_dc;
          piVar10 = local_dc;
          uVar42 = local_d0;
        }
      }
      else {
        FUN_004b78c0((int)piVar36);
        puVar29 = local_d4;
        piVar10 = local_dc;
        uVar42 = local_d0;
      }
      break;
    case 0x14:
      iVar27 = local_e4 + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 0x28;
      FUN_004b7410(iVar27);
      uVar25 = *(uint *)(local_e0 + 8 + uVar39 * 0x14);
      puVar29 = (uint *)(iVar27 + 0x10);
      uVar39 = *puVar29;
      *puVar29 = *puVar29 + uVar25;
      *(int *)(iVar27 + 0x14) =
           *(int *)(iVar27 + 0x14) + ((int)uVar25 >> 0x1f) + (uint)CARRY4(uVar39,uVar25);
      puVar29 = local_d4;
      piVar36 = local_dc;
      piVar10 = local_dc;
      uVar42 = local_d0;
      break;
    case 0x15:
      iVar27 = local_e4 + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 0x28;
      FUN_0046dfa0(iVar27);
      if ((*(byte *)(iVar27 + 0x1c) & 8) != 0) {
        FUN_004b6650(iVar27);
      }
      piVar36 = local_dc;
      if ((*(ushort *)(iVar27 + 0x1c) & 4) == 0) {
        iVar27 = *(int *)(local_e0 + 8 + uVar39 * 0x14);
        if (iVar27 == 0) {
          local_d4 = (uint *)0x14;
          goto LAB_004b572c;
        }
        goto LAB_004b0d04;
      }
      *(ushort *)(iVar27 + 0x1c) = *(ushort *)(iVar27 + 0x1c) & 0xbe04 | 4;
      puVar29 = local_d4;
      piVar10 = local_dc;
      uVar42 = local_d0;
      break;
    case 0x16:
      iVar27 = *(int *)(local_e0 + 4 + uVar39 * 0x14);
      if ((*(byte *)(local_e4 + 0x1c + iVar27 * 0x28) & 4) != 0) {
        FUN_004b7670(local_e4 + iVar27 * 0x28);
        puVar29 = local_d4;
        piVar10 = local_dc;
        uVar42 = local_d0;
      }
      break;
    case 0x17:
      local_10c = *(int *)(local_e0 + 0x10 + uVar39 * 0x14);
      break;
    case 0x18:
      if ((*(byte *)(local_e0 + 3 + uVar39 * 0x14) & 1) == 0) {
        local_10c = 0;
      }
      uVar25 = *(uint *)(local_e0 + 0xc + uVar39 * 0x14);
      uVar35 = *(uint *)(local_e0 + 0x10 + uVar39 * 0x14);
      local_c0 = CONCAT44(uVar28,uVar35);
      uVar28 = *(undefined4 *)(local_e0 + 4 + uVar39 * 0x14);
      iVar27 = *(int *)(local_e0 + 8 + uVar39 * 0x14);
      iVar16 = 0;
      local_f8 = (double)CONCAT44(uVar28,(undefined4)local_f8);
      local_c8 = CONCAT44(iVar27,uVar28);
      local_d0 = (ulonglong)uVar25;
      if (0 < (int)uVar25) {
        while( true ) {
          iVar26 = iVar16;
          if (local_10c != 0) {
            iVar26 = *(int *)(local_10c + iVar16 * 4);
          }
          local_c0 = CONCAT44(iVar26,(int *)local_c0);
          iVar4 = *(int *)(uVar35 + 0xc + iVar16 * 4);
          local_b8 = (double)(ulonglong)
                             CONCAT14(*(undefined1 *)(*(int *)(uVar35 + 8) + iVar16),iVar4);
          local_110 = FUN_004a0720((undefined8 *)(local_e4 + ((int)local_f8._4_4_ + iVar26) * 0x28),
                                   (undefined8 *)(local_e4 + (iVar26 + iVar27) * 0x28),iVar4);
          if (local_110 != 0) break;
          iVar16 = (int)local_d0._4_4_ + 1;
          local_d0 = CONCAT44(iVar16,(int *)local_d0);
          if ((int)(int *)local_d0 <= iVar16) goto LAB_004b0a43;
          local_f8 = (double)CONCAT44((int *)local_c8,(undefined4)local_f8);
          uVar35 = (uint)(int *)local_c0;
          iVar27 = (int)local_c8._4_4_;
        }
        if (local_b8._4_4_ != (byte *)0x0) {
          local_110 = -local_110;
        }
      }
LAB_004b0a43:
      local_10c = 0;
      puVar29 = local_d4;
      piVar18 = local_e8;
      piVar36 = local_dc;
      piVar10 = local_dc;
      uVar42 = local_d0;
      break;
    case 0x19:
      if ((int)local_110 < 0) {
        iVar27 = *(int *)(local_e0 + 4 + uVar39 * 0x14);
      }
      else {
        if (local_110 == 0) goto LAB_004b0d00;
        iVar27 = *(int *)(local_e0 + 0xc + uVar39 * 0x14);
      }
      goto LAB_004b0d04;
    case 0x1a:
      iVar27 = *(int *)(local_e0 + 4 + uVar39 * 0x14);
      if (*(char *)(local_d8[0x2e] + iVar27) != '\0') goto LAB_004b0d00;
      *(undefined1 *)(local_d8[0x2e] + iVar27) = 1;
      break;
    case 0x1b:
    case 0x1c:
      iVar27 = *(int *)(local_e0 + 4 + uVar39 * 0x14);
      if ((*(byte *)(local_e4 + 0x1c + iVar27 * 0x28) & 1) == 0) {
        fVar40 = FUN_004b8350(local_e4 + iVar27 * 0x28);
        local_f8 = (double)fVar40;
        uVar25 = (uint)(local_f8 != 0.0);
        local_d0 = CONCAT44(local_d0._4_4_,uVar25);
        if (*(char *)(local_e0 + uVar39 * 0x14) == '\x1c') {
          uVar25 = (uint)(uVar25 == 0);
          goto LAB_004b0cca;
        }
      }
      else {
        uVar25 = *(uint *)(local_e0 + 0xc + uVar39 * 0x14);
LAB_004b0cca:
        local_d0 = CONCAT44(local_d0._4_4_,uVar25);
      }
joined_r0x004b4649:
      puVar29 = local_d4;
      piVar10 = local_dc;
      uVar42 = local_d0;
      if (uVar25 != 0) goto LAB_004b0d00;
      break;
    case 0x1d:
      iVar27 = *(int *)(local_e0 + 4 + uVar39 * 0x14);
      iVar16 = *(int *)(local_e0 + 8 + uVar39 * 0x14);
      local_c0 = CONCAT44(iVar16,iVar27);
      local_90 = 0;
      local_88 = 0;
      local_80 = 0;
      local_78 = (undefined1  [8])0x0;
      local_70 = 0;
      local_94 = (int *)(local_e4 + *(int *)(local_e0 + 0xc + uVar39 * 0x14) * 0x28);
      piVar36 = *(int **)(local_d8[0x10] + iVar27 * 4);
      local_b8 = (double)ZEXT48(piVar36);
      local_b0 = (double)CONCAT44(local_b0._4_4_,*piVar36);
      if (*piVar36 == 0) {
        if (piVar36[4] < 1) {
LAB_004b0dd6:
          local_d0 = local_d0 & 0xffffffff00000000;
LAB_004b0de0:
          *(ushort *)(local_94 + 7) = *(ushort *)(local_94 + 7) & 0xbe01 | 1;
          puVar29 = local_d4;
          piVar18 = local_e8;
          piVar36 = local_dc;
          piVar10 = local_dc;
          uVar42 = local_d0;
        }
        else {
          local_4c = local_e4 + piVar36[4] * 0x28;
          if (*(char *)((int)piVar36 + 0x22) == '\0') {
            local_d0 = CONCAT44(local_d0._4_4_,*(undefined4 *)(local_4c + 0x18));
            local_b8 = (double)CONCAT44(*(undefined4 *)(local_4c + 4),piVar36);
            if ((*(byte *)(local_e0 + 3 + uVar39 * 0x14) & 0x20) == 0) {
              uVar25 = local_d8[0x14];
            }
            else {
              uVar25 = 0;
            }
            piVar36[0x14] = uVar25;
LAB_004b0f05:
            uVar25 = (uint)(int *)local_d0;
LAB_004b0f0b:
            iVar27 = (int)(uint *)local_b8;
            goto LAB_004b0f11;
          }
          FUN_004b7c40(local_94,(undefined8 *)(local_4c + iVar16 * 0x28),0x1000);
          puVar29 = local_d4;
          piVar18 = local_e8;
          piVar36 = local_dc;
          piVar10 = local_dc;
          uVar42 = local_d0;
          if (((*(ushort *)(local_94 + 7) & 0x1000) != 0) &&
             (iVar27 = FUN_004b7490(local_94), puVar29 = local_d4, piVar18 = local_e8,
             piVar36 = local_dc, piVar10 = local_dc, uVar42 = local_d0, iVar27 != 0))
          goto LAB_004b57a6;
        }
      }
      else {
        local_d4 = (uint *)FUN_004af1b0(piVar36);
        piVar18 = local_e8;
        if (local_d4 != (uint *)0x0) goto LAB_004b572c;
        if (*(char *)((int)(uint *)local_b8 + 0x1c) != '\0') goto LAB_004b0dd6;
        if (*(uint *)((int)(uint *)local_b8 + 0x50) != puVar34[0x14]) {
          if (*(char *)((int)(uint *)local_b8 + 0x1f) == '\0') {
            FUN_0048f8d0((int)(int *)local_b0,(undefined4 *)&local_d0);
            goto LAB_004b0f05;
          }
          FUN_004906b0((int)(int *)local_b0,(undefined4 *)&local_c8);
          local_d0 = CONCAT44(local_d0._4_4_,(int *)local_c8);
          uVar25 = (uint)(int *)local_c8;
          goto LAB_004b0f0b;
        }
        uVar25 = *(uint *)((int)(uint *)local_b8 + 0x54);
        local_d0 = CONCAT44(local_d0._4_4_,uVar25);
        local_b8 = (double)CONCAT44(*(undefined4 *)((int)(uint *)local_b8 + 0x60),(uint *)local_b8);
        iVar27 = (int)(uint *)local_b8;
LAB_004b0f11:
        piVar18 = local_e8;
        if (uVar25 == 0) goto LAB_004b0de0;
        if ((uint)local_e8[0x14] < uVar25) goto LAB_004b5780;
        local_a4 = *(int **)(iVar27 + 0x14);
        iVar16 = *(int *)(iVar27 + 0x58);
        local_b0 = (double)CONCAT44(iVar16,(int *)local_b0);
        if (*(uint *)(iVar27 + 0x50) == local_d8[0x14]) {
          local_a8 = *(uint *)(iVar27 + 0x5c);
LAB_004b11c6:
          piVar18 = local_e8;
          if (*(int *)(local_a8 + (int)local_c0._4_4_ * 4) == 0) {
            if (*(char *)(local_e0 + 1 + uVar39 * 0x14) == -8) {
              FUN_004b7c40(local_94,*(undefined8 **)(local_e0 + 0x10 + uVar39 * 0x14),0x800);
            }
            else {
              *(ushort *)(local_94 + 7) = *(ushort *)(local_94 + 7) & 0xbe01 | 1;
            }
          }
          else {
            if (local_b8._4_4_ == (byte *)0x0) {
              local_50 = *(uint *)(iVar16 + (int)local_c0._4_4_ * 4);
              bVar12 = *(byte *)(local_e0 + 3 + uVar39 * 0x14);
              if (((bVar12 & 0xc0) == 0) ||
                 (((local_50 < 0xc || ((local_50 & 1) != 0)) && (-1 < (char)bVar12)))) {
                uVar39 = FUN_004b8bf0(local_50);
                local_a0 = CONCAT44(local_a0._4_4_,uVar39);
                FUN_004b7500((int *)&local_90,(undefined8 *)local_94);
                local_d4 = (uint *)FUN_004b70b0((int *)local_b0,
                                                *(uint *)(local_a8 + (int)local_c0._4_4_ * 4),
                                                (size_t)(int *)local_a0,
                                                (uint)*(byte *)((int)(uint *)local_b8 + 0x1f),
                                                (int *)&local_90);
                puVar29 = local_d4;
                piVar36 = local_dc;
                piVar10 = local_dc;
                uVar42 = local_d0;
                if (local_d4 != (uint *)0x0) break;
                pbVar21 = local_90._4_4_;
                local_98 = local_90._4_4_;
                uVar39 = local_50;
              }
              else {
                local_98 = (byte *)(-(uint)(local_50 < 0xc) & (uint)&local_c8);
                pbVar21 = local_98;
                uVar39 = local_50;
              }
            }
            else {
              if ((*(ushort *)(local_94 + 7) & 0x2460) != 0) {
                FUN_004b7720(local_94);
                iVar16 = local_b0._4_4_;
              }
              pbVar21 = (byte *)(*(int *)(local_a8 + (int)local_c0._4_4_ * 4) + (int)local_b8._4_4_)
              ;
              uVar39 = *(uint *)(iVar16 + (int)local_c0._4_4_ * 4);
            }
            FUN_004b87d0((char *)pbVar21,uVar39,(int)local_94);
            *(char *)((int)local_94 + 0x1f) = (char)local_f0;
          }
          if (local_70._4_4_ != 0) {
            *(ushort *)(local_94 + 7) = *(ushort *)(local_94 + 7) & 0xe7ff;
            *(ushort *)(local_94 + 7) = *(ushort *)(local_94 + 7) | 0x200;
            local_94[1] = (int)local_90._4_4_;
            local_94[9] = local_70._4_4_;
          }
          local_d4 = (uint *)FUN_004b7490(local_94);
          puVar29 = local_d4;
          piVar36 = local_dc;
          piVar10 = local_dc;
          uVar42 = local_d0;
        }
        else {
          local_a8 = iVar16 + (int)local_a4 * 4;
          local_54 = 0;
          *(uint *)(iVar27 + 0x5c) = local_a8;
          *(int **)((int)(uint *)local_b8 + 0x54) = (int *)local_d0;
          *(uint *)((int)(uint *)local_b8 + 0x50) = local_d8[0x14];
          if (local_b8._4_4_ == (byte *)0x0) {
            if (*(char *)((int)(uint *)local_b8 + 0x1f) == '\0') {
              local_98 = (byte *)FUN_0048f8b0((int)(int *)local_b0,&local_54);
            }
            else {
              local_98 = (byte *)FUN_00490640((int)(int *)local_b0,&local_54);
            }
            if (local_54 < (int *)local_d0) {
              *(undefined4 *)((int)(uint *)local_b8 + 0x60) = 0;
            }
            else {
              local_b8 = (double)CONCAT44(local_98,(uint *)local_b8);
              *(byte **)((int)(uint *)local_b8 + 0x60) = local_98;
            }
          }
          else {
            local_98 = local_b8._4_4_;
          }
          if (*local_98 < 0x80) {
            local_60 = (uint)*local_98;
            local_58 = 1;
          }
          else {
            local_58 = FUN_0049d440(local_98,&local_60);
            local_58 = local_58 & 0xff;
          }
          if (local_60 < 0x18004) {
            sVar22 = (int)local_a4 * 5 + 3;
            if ((int)local_60 < (int)sVar22) {
              sVar22 = local_60;
            }
            local_a0 = CONCAT44(local_a0._4_4_,sVar22);
            if ((local_b8._4_4_ == (byte *)0x0) && ((int)local_54 < (int)sVar22)) {
              local_78._4_2_ = 0;
              local_90 = local_90 & 0xffffffff00000000;
              local_d4 = (uint *)FUN_004b70b0((int *)local_b0,0,sVar22,
                                              (uint)*(byte *)((int)(uint *)local_b8 + 0x1f),
                                              (int *)&local_90);
              puVar29 = local_d4;
              piVar18 = local_e8;
              piVar36 = local_dc;
              piVar10 = local_dc;
              uVar42 = local_d0;
              if (local_d4 != (uint *)0x0) break;
              local_98 = local_90._4_4_;
              sVar22 = (size_t)(int *)local_a0;
            }
            local_64 = local_98 + sVar22;
            local_68 = local_98 + local_58;
            iVar27 = 0;
            local_a0 = local_a0 & 0xffffffff;
            if (0 < (int)local_a4) {
              do {
                if (local_68 < local_64) {
                  *(uint *)(local_a8 + iVar27 * 4) = local_60;
                  if (*local_68 < 0x80) {
                    local_50 = (uint)*local_68;
                    local_68 = local_68 + 1;
                  }
                  else {
                    uVar25 = FUN_0049d440(local_68,&local_50);
                    local_68 = local_68 + (uVar25 & 0xff);
                  }
                  *(uint *)(local_b0._4_4_ + local_a0._4_4_ * 4) = local_50;
                  local_5c = FUN_004b8bf0(local_50);
                  local_60 = local_60 + local_5c;
                  if (local_60 < local_5c) {
                    local_68 = local_64 + 1;
                    break;
                  }
                }
                else {
                  *(undefined4 *)(local_a8 + iVar27 * 4) = 0;
                }
                iVar27 = local_a0._4_4_ + 1;
                local_a0 = CONCAT44(iVar27,(int *)local_a0);
              } while (iVar27 < (int)local_a4);
            }
            FUN_004b76e0((int *)&local_90);
            local_78._4_2_ = 1;
            if (((local_68 <= local_64) && (local_60 <= (int *)local_d0)) &&
               ((local_68 != local_64 || ((int *)local_60 == (int *)local_d0)))) {
              iVar16 = local_b0._4_4_;
              goto LAB_004b11c6;
            }
            local_d4 = (uint *)FUN_00493af0();
            puVar29 = local_d4;
            piVar18 = local_e8;
            piVar36 = local_dc;
            piVar10 = local_dc;
            uVar42 = local_d0;
          }
          else {
            local_d4 = (uint *)FUN_00493af0();
            puVar29 = local_d4;
            piVar36 = local_dc;
            piVar10 = local_dc;
            uVar42 = local_d0;
          }
        }
      }
      break;
    case 0x1e:
      pcVar23 = *(char **)(local_e0 + 0x10 + uVar39 * 0x14);
      piVar36 = (int *)(local_e4 + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 0x28);
      cVar11 = *pcVar23;
      uVar28 = CONCAT31(local_d0._5_3_,cVar11);
      local_d0._0_4_ = (int *)pcVar23;
      while (cVar11 != '\0') {
        local_d0 = CONCAT44(uVar28,(char *)((int)(int *)local_d0 + 1));
        if ((*(ushort *)(piVar36 + 7) & 0x4000) != 0) {
          FUN_004b6fa0(piVar36);
        }
        FUN_004ae250(piVar36,(char)(local_d0 >> 0x20),(byte)local_f0);
        cVar11 = *(char *)(int *)local_d0;
        piVar36 = piVar36 + 10;
        uVar28 = CONCAT31(local_d0._5_3_,cVar11);
        piVar18 = local_e8;
      }
      local_d0 = CONCAT44(uVar28,(char *)((int)(int *)local_d0 + 1));
      puVar29 = local_d4;
      piVar36 = local_dc;
      piVar10 = local_dc;
      uVar42 = local_d0;
      break;
    case 0x1f:
      local_c0._0_4_ = (int *)0x0;
      uVar25 = 0;
      local_b0 = (double)((ulonglong)local_b0._4_4_ << 0x20);
      local_c8 = 0;
      local_98 = *(byte **)(local_e0 + 0x10 + uVar39 * 0x14);
      local_f8 = (double)CONCAT44(local_98,(undefined4)local_f8);
      piVar36 = (int *)(local_e4 + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 0x28);
      iVar27 = *(int *)(local_e0 + 8 + uVar39 * 0x14);
      local_94 = (int *)(uint)*(byte *)((int)local_d8 + 0x5d);
      local_a0 = CONCAT44(iVar27,piVar36 + iVar27 * 10 + -10);
      local_dc = (int *)(local_e4 + *(int *)(local_e0 + 0xc + uVar39 * 0x14) * 0x28);
      local_d0 = CONCAT44(piVar36,(int *)local_d0);
      local_a4 = piVar36;
      local_c0._4_4_ = (undefined4 *)uVar28;
      if (piVar36 <= piVar36 + iVar27 * 10 + -10) {
        uVar25 = 0;
        do {
          if (local_f8._4_4_ != (byte *)0x0) {
            FUN_004ae250(piVar36,*(char *)(((int)piVar36 - (int)local_a4) / 0x28 +
                                          (int)local_f8._4_4_),(byte)local_f0);
            local_f8 = (double)CONCAT44(local_98,(undefined4)local_f8);
            uVar25 = (uint)(int *)local_b0;
            piVar36 = (int *)local_d0._4_4_;
          }
          if (((*(ushort *)(piVar36 + 7) & 0x4000) != 0) && (0 < piVar36[6])) {
            FUN_004b6fa0(piVar36);
            local_f8 = (double)CONCAT44(local_98,(undefined4)local_f8);
            uVar25 = (uint)(int *)local_b0;
            piVar36 = (int *)local_d0._4_4_;
          }
          local_a8 = FUN_004b8ae0((int)piVar36,(int)local_94);
          uVar39 = FUN_004b8bf0(local_a8);
          local_c8 = CONCAT44((int)local_c8._4_4_ + ((int)uVar39 >> 0x1f) +
                              (uint)CARRY4((uint)(int *)local_c8,uVar39),
                              (int)(int *)local_c8 + uVar39);
          local_90 = CONCAT44(uVar39,(uint *)local_90);
          iVar27 = FUN_004ae730(extraout_ECX,0);
          local_c0._0_4_ = (int *)((int)(int *)local_c0 + iVar27);
          if ((*(ushort *)(piVar36 + 7) & 0x4000) == 0) {
            if (uVar39 != 0) {
              uVar25 = 0;
            }
          }
          else {
            uVar25 = uVar25 + piVar36[4];
          }
          piVar36 = piVar36 + 10;
          local_b0 = (double)CONCAT44(local_b0._4_4_,uVar25);
          local_d0 = CONCAT44(piVar36,(int *)local_d0);
        } while (piVar36 <= (int *)local_a0);
      }
      iVar27 = FUN_004ae730((uint)(int *)local_c0,(int)(int *)local_c0 >> 0x1f);
      uVar39 = (int)(int *)local_c0 + iVar27;
      local_b0 = (double)CONCAT44(iVar27,(int *)local_b0);
      local_c0 = CONCAT44(local_c0._4_4_,uVar39);
      iVar16 = FUN_004ae730(uVar39,(int)uVar39 >> 0x1f);
      piVar36 = local_dc;
      if (iVar27 < iVar16) {
        uVar39 = uVar39 + 1;
        local_c0 = CONCAT44(local_c0._4_4_,uVar39);
      }
      uVar35 = (uVar39 - uVar25) + (int)(int *)local_c8;
      iVar16 = ((((int)uVar39 >> 0x1f) - ((int)uVar25 >> 0x1f)) - (uint)(uVar39 < uVar25)) +
               (int)local_c8._4_4_ + (uint)CARRY4(uVar39 - uVar25,(uint)(int *)local_c8);
      local_b8 = (double)CONCAT44(iVar16,uVar35);
      iVar27 = local_e8[0x14] >> 0x1f;
      piVar18 = local_e8;
      if ((iVar27 < iVar16) || ((iVar27 <= iVar16 && ((uint)local_e8[0x14] < uVar35))))
      goto LAB_004b5780;
      iVar27 = FUN_004b7260(local_dc,uVar35,0);
      piVar18 = local_e8;
      if (iVar27 != 0) goto LAB_004b57a6;
      pbVar21 = (byte *)piVar36[1];
      local_d0 = CONCAT44(local_d0._4_4_,pbVar21);
      if ((int *)local_c0 < 0x80) {
        *pbVar21 = (byte)local_c0;
        uVar39 = 1;
      }
      else {
        uVar39 = FUN_004a60c0(pbVar21,(uint)(int *)local_c0);
      }
      uVar25 = uVar39 & 0xff;
      local_90 = CONCAT44(local_90._4_4_,uVar39) & 0xffffffff000000ff;
      local_d0 = CONCAT44(local_a4,(int *)local_d0);
      piVar18 = local_a4;
      if (local_a4 <= (int *)local_a0) {
        do {
          local_a8 = FUN_004b8ae0((int)piVar18,(int)local_94);
          if (local_a8 < 0x80) {
            *(char *)(uVar25 + (int)(int *)local_d0) = (char)local_a8;
            uVar39 = 1;
          }
          else {
            uVar39 = FUN_004a60c0((byte *)((int)(int *)local_d0 + uVar25),local_a8);
          }
          uVar25 = (int)(uint *)local_90 + (uVar39 & 0xff);
          piVar18 = (int *)((int)local_d0._4_4_ + 0x28);
          local_90 = CONCAT44(local_90._4_4_,uVar25);
          local_d0 = CONCAT44(piVar18,(int *)local_d0);
        } while (piVar18 <= (int *)local_a0);
      }
      local_d0 = CONCAT44(local_a4,(int *)local_d0);
      piVar18 = local_a4;
      if (local_a4 <= (int *)local_a0) {
        do {
          uVar25 = FUN_004b8a30((void *)((int)(int *)local_d0 + uVar25),
                                (int)(uint *)local_b8 - uVar25,(int)piVar18,(int)local_94);
          uVar25 = (int)(uint *)local_90 + uVar25;
          piVar18 = (int *)((int)local_d0._4_4_ + 0x28);
          local_90 = CONCAT44(local_90._4_4_,uVar25);
          local_d0 = CONCAT44(piVar18,(int *)local_d0);
        } while (piVar18 <= (int *)local_a0);
      }
      piVar36[6] = (int)(uint *)local_b8;
      *(undefined2 *)(piVar36 + 7) = 0x410;
      piVar36[8] = 0;
      if ((int *)local_b0 != (int *)0x0) {
        piVar36[4] = (int)(int *)local_b0;
        *(undefined2 *)(piVar36 + 7) = 0x4410;
      }
      *(undefined1 *)((int)piVar36 + 0x1f) = 1;
      puVar29 = local_d4;
      piVar18 = local_e8;
      piVar36 = local_dc;
      piVar10 = local_dc;
      uVar42 = local_d0;
      break;
    case 0x20:
      piVar33 = (int *)**(undefined4 **)
                         (local_d8[0x10] + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 4);
      local_c8 = CONCAT44(uVar8,piVar33);
      if (piVar33 == (int *)0x0) {
        local_d0 = 0;
        piVar36[4] = 0;
        piVar36[5] = 0;
        uVar42 = local_d0;
      }
      else {
        local_d4 = (uint *)FUN_0048f530(piVar33,(uint *)&local_d0);
        piVar36[4] = (int)(int *)local_d0;
        piVar36[5] = (int)local_d0._4_4_;
        puVar29 = local_d4;
        piVar10 = local_dc;
        uVar42 = local_d0;
      }
      break;
    case 0x21:
      uVar25 = *(uint *)(local_e0 + 4 + uVar39 * 0x14);
      pbVar21 = *(byte **)(local_e0 + 0x10 + uVar39 * 0x14);
      local_f8 = (double)CONCAT44(pbVar21,(undefined4)local_f8);
      local_d0 = CONCAT44(pbVar21,uVar25);
      if (uVar25 == 0) {
        if (local_e8[0x22] < 1) {
          uVar39 = FUN_004aa9b0((char *)pbVar21);
          local_c8 = CONCAT44(local_c8._4_4_,uVar39);
          local_d4 = (uint *)FUN_004b9ef0((int)piVar33,0,piVar33[0x79] + piVar33[0x78]);
          piVar18 = piVar33;
          if (local_d4 != (uint *)0x0) goto LAB_004b572c;
          piVar19 = FUN_00494b90((int)piVar33,(int)(int *)local_c8 + 0x19);
          local_c8 = CONCAT44(piVar19,(int *)local_c8);
          puVar29 = local_d4;
          piVar10 = local_dc;
          uVar42 = local_d0;
          if (piVar19 != (int *)0x0) {
            *piVar19 = (int)(piVar19 + 6);
            memcpy((void *)*piVar19,local_d0._4_4_,(int)(int *)local_c8 + 1);
            if (*(char *)((int)piVar33 + 0x36) == '\0') {
              piVar33[0x78] = piVar33[0x78] + 1;
            }
            else {
              *(undefined1 *)((int)piVar33 + 0x36) = 0;
              *(undefined1 *)((int)piVar33 + 0x3d) = 1;
            }
            *(int *)((int)local_c8._4_4_ + 0x10) = piVar33[0x76];
            piVar33[0x76] = (int)local_c8._4_4_;
            *(int *)((int)local_c8._4_4_ + 8) = piVar33[0x7a];
            *(int *)((int)local_c8._4_4_ + 0xc) = piVar33[0x7b];
            puVar29 = local_d4;
            piVar10 = local_dc;
            uVar42 = local_d0;
          }
        }
        else {
          pcVar23 = "cannot open savepoint - SQL statements in progress";
          piVar18 = local_e8;
LAB_004b188b:
          FUN_004a9a30((int *)(local_d8 + 0xd),(int)piVar18,(byte *)pcVar23);
          local_d4 = (uint *)0x5;
          puVar29 = (uint *)0x5;
          piVar10 = local_dc;
          uVar42 = local_d0;
        }
      }
      else {
        iVar27 = 0;
        local_b8 = (double)((ulonglong)uVar9 << 0x20);
        puVar24 = (undefined4 *)local_e8[0x76];
        local_c0 = CONCAT44(uVar28,puVar24);
        if (puVar24 != (undefined4 *)0x0) {
LAB_004b1996:
          iVar16 = FUN_004bcc60((byte *)*puVar24,pbVar21);
          puVar29 = local_d8;
          piVar18 = local_e8;
          if (iVar16 != 0) goto code_r0x004b19a5;
          if ((0 < local_e8[0x22]) && (uVar25 == 1)) {
            FUN_004a9a30((int *)(local_d8 + 0xd),(int)local_e8,
                         (byte *)"cannot release savepoint - SQL statements in progress");
            local_d4 = (uint *)0x5;
            puVar29 = (uint *)0x5;
            piVar36 = local_dc;
            piVar10 = local_dc;
            uVar42 = local_d0;
            break;
          }
          if ((puVar24[4] == 0) && (*(char *)((int)local_e8 + 0x3d) != '\0')) {
            local_f8 = (double)CONCAT44(1,(undefined4)local_f8);
            if (uVar25 == 1) {
              iVar27 = FUN_004aeea0((int *)local_d8,1);
              piVar18 = local_e8;
              if (iVar27 != 0) goto LAB_004b5847;
              *(undefined1 *)((int)local_e8 + 0x36) = 1;
              iVar27 = FUN_004b60e0((int *)puVar29);
              if (iVar27 == 5) {
                puVar29[0x15] = local_ec;
                *(undefined1 *)((int)piVar18 + 0x36) = 0;
                goto LAB_004b564b;
              }
              *(undefined1 *)((int)piVar18 + 0x3d) = 0;
              local_d4 = (uint *)puVar29[0x16];
              goto LAB_004b1b7c;
            }
          }
          else {
            local_f8 = (double)((ulonglong)local_f8 & 0xffffffff);
          }
          local_b8._0_4_ = (uint *)((local_e8[0x78] - iVar27) - 1);
          if ((uVar25 == 2) && (local_b8._4_4_ = (byte *)0x0, 0 < local_e8[5])) {
            do {
              FUN_00491f60(*(undefined4 **)(piVar18[4] + 4 + (int)local_b8._4_4_ * 0x10),4);
              local_b8._4_4_ = (byte *)((int)local_b8._4_4_ + 1);
            } while ((int)local_b8._4_4_ < piVar18[5]);
            uVar25 = (uint)(int *)local_d0;
            puVar24 = (int *)local_c0;
          }
          iVar27 = 0;
          local_b8 = (double)ZEXT48((uint *)local_b8);
          puVar29 = local_d4;
          if (0 < piVar18[5]) {
            while (local_d4 = puVar29, piVar18 = local_e8,
                  local_d4 = (uint *)FUN_00491910(*(undefined4 **)(local_e8[4] + 4 + iVar27 * 0x10),
                                                  uVar25,SUB84(local_b8,0)), local_d4 == (uint *)0x0
                  ) {
              iVar27 = (int)local_b8._4_4_ + 1;
              local_b8 = (double)CONCAT44(iVar27,(uint *)local_b8);
              uVar25 = (uint)(int *)local_d0;
              puVar29 = (uint *)0x0;
              if (piVar18[5] <= iVar27) {
                puVar24 = (int *)local_c0;
                piVar18 = local_e8;
                goto LAB_004b1b60;
              }
            }
            goto LAB_004b572c;
          }
LAB_004b1b60:
          if ((uVar25 == 2) && ((*(byte *)(piVar18 + 6) & 2) != 0)) {
            FUN_00496370((int)piVar18);
            FUN_004a6940((int)piVar18);
            piVar18[6] = piVar18[6] | 2;
LAB_004b1b7c:
            uVar25 = (uint)(int *)local_d0;
            puVar24 = (int *)local_c0;
          }
          if ((undefined4 *)piVar18[0x76] != puVar24) {
            do {
              puVar24 = (undefined4 *)piVar18[0x76];
              local_c0 = CONCAT44(puVar24,(int *)local_c0);
              piVar18[0x76] = puVar24[4];
              FUN_00494b00((int)piVar18,puVar24);
              piVar18[0x78] = piVar18[0x78] + -1;
            } while ((undefined4 *)piVar18[0x76] != (int *)local_c0);
            uVar25 = (uint)(int *)local_d0;
            puVar24 = (int *)local_c0;
          }
          piVar18 = local_e8;
          if (uVar25 == 1) {
            local_e8[0x76] = puVar24[4];
            FUN_00494b00((int)local_e8,(undefined4 *)local_c0);
            puVar29 = local_d4;
            piVar36 = local_dc;
            piVar10 = local_dc;
            uVar42 = local_d0;
            if (local_f8._4_4_ == (byte *)0x0) {
              piVar18[0x78] = piVar18[0x78] + -1;
LAB_004b1c25:
              local_d4 = (uint *)FUN_004b9ef0((int)piVar18,(int)(int *)local_d0,SUB84(local_b8,0));
              puVar29 = local_d4;
              piVar36 = local_dc;
              piVar10 = local_dc;
              uVar42 = local_d0;
              if (local_d4 != (uint *)0x0) goto LAB_004b572c;
            }
          }
          else {
            local_e8[0x7a] = puVar24[2];
            local_e8[0x7b] = puVar24[3];
            puVar29 = local_d4;
            piVar36 = local_dc;
            piVar10 = local_dc;
            uVar42 = local_d0;
            if (local_f8._4_4_ == (byte *)0x0) goto LAB_004b1c25;
          }
          break;
        }
LAB_004b19bf:
        piVar18 = local_e8;
        FUN_004a9a30((int *)(local_d8 + 0xd),(int)local_e8,(byte *)"no such savepoint: %s");
        local_d4 = (uint *)0x1;
        puVar29 = (uint *)0x1;
        piVar36 = local_dc;
        piVar10 = local_dc;
        uVar42 = local_d0;
      }
      break;
    case 0x22:
      uVar25 = *(uint *)(local_e0 + 4 + uVar39 * 0x14);
      iVar27 = *(int *)(local_e0 + 8 + uVar39 * 0x14);
      local_d0 = CONCAT44(iVar27,uVar25);
      if ((uVar25 == 0) || (*(char *)((int)piVar18 + 0x36) != '\0')) {
        local_c8 = (ulonglong)uVar8 << 0x20;
      }
      else {
        local_c8 = CONCAT44(uVar8,1);
        if ((iVar27 == 0) && (0 < piVar18[0x22])) {
          pcVar23 = "cannot commit transaction - SQL statements in progress";
          goto LAB_004b188b;
        }
      }
      if (uVar25 != *(byte *)((int)piVar18 + 0x36)) {
        if (iVar27 == 0) {
          iVar30 = FUN_004aeea0((int *)local_d8,1);
          puVar29 = local_d8;
          if (iVar30 != 0) goto LAB_004b5847;
          *(char *)((int)piVar18 + 0x36) = (char)local_d0;
          iVar30 = FUN_004b60e0((int *)local_d8);
          if (iVar30 == 5) {
            puVar29[0x15] = local_ec;
            *(char *)((int)piVar18 + 0x36) = '\x01' - (char)local_d0;
            local_d8[0x16] = 5;
            goto LAB_004b5847;
          }
        }
        else {
          FUN_004a6c80((int)piVar18,0x204);
          *(undefined1 *)((int)piVar18 + 0x36) = 1;
        }
        FUN_00492710((int)piVar18);
        goto LAB_004b5847;
      }
      if (uVar25 == 0) {
        pcVar23 = "cannot start a transaction within a transaction";
      }
      else {
        pcVar23 = "cannot rollback - no transaction is active";
        if (iVar27 == 0) {
          pcVar23 = "cannot commit - no transaction is active";
        }
      }
      FUN_004a9a30((int *)(local_d8 + 0xd),(int)piVar18,(byte *)pcVar23);
      local_d4 = (uint *)0x1;
      puVar29 = (uint *)0x1;
      piVar10 = local_dc;
      uVar42 = local_d0;
      break;
    case 0x23:
      piVar33 = *(int **)(piVar18[4] + 4 + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 0x10);
      local_d0 = CONCAT44(local_d0._4_4_,piVar33);
      uVar42 = local_d0;
      if (piVar33 != (int *)0x0) {
        local_d4 = (uint *)FUN_0048ed50(piVar33,*(int *)(local_e0 + 8 + uVar39 * 0x14));
        if (local_d4 == (uint *)0x5) {
          local_d8[0x15] = local_ec;
          local_d8[0x16] = 5;
          goto LAB_004b5847;
        }
        if (local_d4 != (uint *)0x0) goto LAB_004b572c;
        puVar29 = local_d4;
        piVar10 = local_dc;
        uVar42 = local_d0;
        if (((*(int *)(local_e0 + 8 + uVar39 * 0x14) != 0) && ((local_d8[0x18] & 0x80) != 0)) &&
           ((*(char *)((int)piVar18 + 0x36) == '\0' || (1 < piVar18[0x21])))) {
          if (local_d8[0x1c] == 0) {
            piVar18[0x79] = piVar18[0x79] + 1;
            local_d8[0x1c] = piVar18[0x78] + piVar18[0x79];
          }
          local_d4 = (uint *)FUN_004b9ef0((int)piVar18,0,local_d8[0x1c] - 1);
          if (local_d4 == (uint *)0x0) {
            local_d4 = (uint *)FUN_0048ed00((int *)local_d0,local_d8[0x1c]);
          }
          local_d8[0x24] = piVar18[0x7a];
          local_d8[0x25] = piVar18[0x7b];
          puVar29 = local_d4;
          piVar10 = local_dc;
          uVar42 = local_d0;
        }
      }
      break;
    case 0x24:
      iVar27 = *(int *)(local_e0 + 4 + uVar39 * 0x14);
      local_d0 = CONCAT44(iVar27,(int *)local_d0);
      iVar16 = *(int *)(local_e0 + 0xc + uVar39 * 0x14);
      local_c8 = CONCAT44(uVar8,iVar16);
      FUN_0048fe70(*(undefined4 **)(piVar18[4] + 4 + iVar27 * 0x10),iVar16,(undefined4 *)&local_d0);
      piVar36[4] = (int)(int *)local_d0;
      piVar36[5] = (int)(int *)local_d0 >> 0x1f;
      puVar29 = local_d4;
      piVar10 = local_dc;
      uVar42 = local_d0;
      break;
    case 0x25:
      local_d0 = CONCAT44(local_d0._4_4_,*(int *)(local_e0 + 4 + uVar39 * 0x14) * 0x10 + piVar18[4])
      ;
      iVar27 = local_e4 + *(int *)(local_e0 + 0xc + uVar39 * 0x14) * 0x28;
      FUN_004b7410(iVar27);
      local_d4 = (uint *)FUN_00492040(*(undefined4 **)((int)(int *)local_d0 + 4),
                                      *(int *)(local_e0 + 8 + uVar39 * 0x14),
                                      *(undefined4 *)(iVar27 + 0x10));
      iVar16 = *(int *)(local_e0 + 8 + uVar39 * 0x14);
      if (iVar16 == 1) {
        **(undefined4 **)((int)(int *)local_d0 + 0xc) = *(undefined4 *)(iVar27 + 0x10);
        piVar18[6] = piVar18[6] | 2;
      }
      else if (iVar16 == 2) {
        *(undefined1 *)(*(int *)((int)(int *)local_d0 + 0xc) + 0x4c) =
             *(undefined1 *)(iVar27 + 0x10);
      }
      puVar29 = local_d4;
      piVar36 = local_dc;
      piVar10 = local_dc;
      uVar42 = local_d0;
      if (*(int *)(local_e0 + 4 + uVar39 * 0x14) == 1) {
        FUN_00496370((int)piVar18);
        local_d8[0x18] = local_d8[0x18] & 0xffffffdf;
        puVar29 = local_d4;
        piVar36 = local_dc;
        piVar10 = local_dc;
        uVar42 = local_d0;
      }
      break;
    case 0x26:
      puVar24 = *(undefined4 **)(piVar18[4] + 4 + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 0x10);
      local_c8 = CONCAT44(uVar8,puVar24);
      if (puVar24 == (undefined4 *)0x0) {
        uVar25 = 0;
        local_d0 = 0;
        iVar27 = 0;
      }
      else {
        FUN_0048fe70(puVar24,1,(undefined4 *)&local_d0);
        iVar27 = *(int *)(*(int *)(piVar18[4] + 0xc + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 0x10)
                         + 4);
        uVar25 = (uint)(int *)local_d0;
      }
      local_d0 = CONCAT44(iVar27,(int *)local_d0);
      if ((uVar25 != *(uint *)(local_e0 + 8 + uVar39 * 0x14)) ||
         (puVar29 = local_d4, piVar10 = local_dc, uVar42 = local_d0,
         iVar27 != *(int *)(local_e0 + 0xc + uVar39 * 0x14))) {
        FUN_00494b00((int)piVar18,(undefined4 *)local_d8[0xd]);
        puVar24 = FUN_00494db0((int)piVar18,"database schema has changed");
        local_d8[0xd] = (uint)puVar24;
        iVar27 = *(int *)(local_e0 + 4 + uVar39 * 0x14);
        if ((int *)**(uint **)(piVar18[4] + 0xc + iVar27 * 0x10) != (int *)local_d0) {
          FUN_004a69a0((int)piVar18,iVar27);
        }
        local_d8[0x18] = local_d8[0x18] | 0x20;
        local_d4 = (uint *)0x11;
        puVar29 = (uint *)0x11;
        piVar10 = local_dc;
        uVar42 = local_d0;
      }
      break;
    case 0x27:
    case 0x28:
      if ((local_d8[0x18] & 0x20) == 0) {
        local_d0 = 0;
        iVar27 = *(int *)(local_e0 + 8 + uVar39 * 0x14);
        iVar16 = *(int *)(local_e0 + 0xc + uVar39 * 0x14);
        local_c8 = CONCAT44(iVar16,iVar27);
        iVar26 = iVar16 * 0x10 + local_e8[4];
        local_b8 = (double)CONCAT44(iVar26,(uint *)local_b8);
        if (*(char *)(local_e0 + uVar39 * 0x14) == '(') {
          local_c0 = CONCAT44(*(uint *)(iVar26 + 4),1);
          bVar12 = *(byte *)(*(int *)(iVar26 + 0xc) + 0x4c);
          if (bVar12 < *(byte *)((int)local_d8 + 0x5d)) {
            *(byte *)((int)local_d8 + 0x5d) = bVar12;
          }
        }
        else {
          local_c0 = (ulonglong)*(uint *)(iVar26 + 4) << 0x20;
        }
        uVar25 = 0;
        if ((*(byte *)(local_e0 + 3 + uVar39 * 0x14) & 2) != 0) {
          iVar27 = local_e4 + iVar27 * 0x28;
          FUN_004b7410(iVar27);
          iVar27 = *(int *)(iVar27 + 0x10);
          local_c8 = CONCAT44(local_c8._4_4_,iVar27);
          if (iVar27 < 2) {
            local_d4 = (uint *)FUN_00493af0();
            piVar18 = local_e8;
            goto LAB_004b572c;
          }
          uVar25 = (uint)(int *)local_d0;
          iVar16 = (int)local_c8._4_4_;
        }
        uVar35 = local_e0;
        cVar11 = *(char *)(local_e0 + 1 + uVar39 * 0x14);
        if (cVar11 == -6) {
          uVar25 = *(uint *)(local_e0 + 0x10 + uVar39 * 0x14);
          local_d0 = (ulonglong)uVar25 << 0x20;
          *(undefined1 *)(uVar25 + 4) =
               *(undefined1 *)(*(int *)(*(int *)(*local_d8 + 0x10) + 0xc) + 0x4d);
          uVar25 = *(ushort *)(uVar25 + 6) + 1;
          iVar16 = (int)local_c8._4_4_;
LAB_004b20a8:
          local_d0 = CONCAT44(local_d0._4_4_,uVar25);
        }
        else if (cVar11 == -0xe) {
          uVar25 = *(uint *)(local_e0 + 0x10 + uVar39 * 0x14);
          goto LAB_004b20a8;
        }
        puVar24 = FUN_0046c260((int *)local_d8,*(int *)(local_e0 + 4 + uVar39 * 0x14),uVar25,iVar16,
                               1);
        local_b8 = (double)CONCAT44(local_b8._4_4_,puVar24);
        piVar18 = local_e8;
        if (puVar24 == (undefined4 *)0x0) goto LAB_004b57a6;
        *(undefined1 *)(puVar24 + 7) = 1;
        *(undefined1 *)(puVar24 + 8) = 1;
        local_d4 = (uint *)FUN_0048f790(local_c0._4_4_,(int)(int *)local_c8,(int)local_c0,
                                        (int)local_d0._4_4_,(int *)*puVar24);
        ((uint *)local_b8)[2] = (uint)local_d0._4_4_;
        *(byte *)(*(uint *)local_b8 + 0x5d) = *(byte *)(uVar35 + 3 + uVar39 * 0x14) & 1;
        *(bool *)((int)(uint *)local_b8 + 0x1e) = *(char *)(uVar35 + 1 + uVar39 * 0x14) != -6;
        *(bool *)((int)(uint *)local_b8 + 0x1f) = *(char *)((int)(uint *)local_b8 + 0x1e) == '\0';
        puVar29 = local_d4;
        piVar18 = local_e8;
        piVar36 = local_dc;
        piVar10 = local_dc;
        uVar42 = local_d0;
      }
      else {
        local_d4 = (uint *)0x4;
        puVar29 = (uint *)0x4;
      }
      break;
    case 0x29:
    case 0x2a:
      puVar24 = FUN_0046c260((int *)local_d8,*(int *)(local_e0 + 4 + uVar39 * 0x14),
                             *(int *)(local_e0 + 8 + uVar39 * 0x14),0xffffffff,1);
      local_d0 = CONCAT44(local_d0._4_4_,puVar24);
      if (puVar24 == (undefined4 *)0x0) goto LAB_004b57a6;
      *(undefined1 *)(puVar24 + 7) = 1;
      local_d4 = (uint *)FUN_00490e00((undefined *)*piVar18,(byte *)0x0,(int)piVar18,puVar24 + 1,
                                      *(byte *)(local_e0 + 3 + uVar39 * 0x14) | 5,0x41e);
      if (local_d4 == (uint *)0x0) {
        local_d4 = (uint *)FUN_0048ed50(*(int **)((int)(int *)local_d0 + 4),1);
        if (local_d4 == (uint *)0x0) {
          if (*(int *)(local_e0 + 0x10 + uVar39 * 0x14) == 0) {
            local_d4 = (uint *)FUN_0048f790((undefined4 *)((int *)local_d0)[1],1,1,0,
                                            (int *)*(int *)local_d0);
            *(undefined1 *)((int)(int *)local_d0 + 0x1e) = 1;
          }
          else {
            local_d4 = (uint *)FUN_0048f740((undefined4 *)((int *)local_d0)[1],&local_11c,
                                            *(byte *)(local_e0 + 3 + uVar39 * 0x14) | 2);
            if (local_d4 == (uint *)0x0) {
              local_d4 = (uint *)FUN_0048f790((undefined4 *)((int *)local_d0)[1],local_11c,1,
                                              *(int *)(local_e0 + 0x10 + uVar39 * 0x14),
                                              (int *)*(int *)local_d0);
              *(undefined4 *)((int)(int *)local_d0 + 8) =
                   *(undefined4 *)(local_e0 + 0x10 + uVar39 * 0x14);
              *(undefined1 *)(*(int *)((int)(int *)local_d0 + 8) + 4) =
                   *(undefined1 *)(*(int *)(*(int *)(*local_d8 + 0x10) + 0xc) + 0x4d);
            }
            *(undefined1 *)((int)(int *)local_d0 + 0x1e) = 0;
          }
        }
      }
      *(bool *)((int)(int *)local_d0 + 0x20) = *(char *)(local_e0 + 3 + uVar39 * 0x14) != '\b';
      *(bool *)((int)(int *)local_d0 + 0x1f) = *(char *)((int)(int *)local_d0 + 0x1e) == '\0';
      puVar29 = local_d4;
      piVar10 = local_dc;
      uVar42 = local_d0;
      break;
    case 0x2b:
      puVar24 = FUN_0046c260((int *)local_d8,*(int *)(local_e0 + 4 + uVar39 * 0x14),
                             *(int *)(local_e0 + 8 + uVar39 * 0x14),0xffffffff,1);
      local_d0 = CONCAT44(local_d0._4_4_,puVar24);
      if (puVar24 == (undefined4 *)0x0) goto LAB_004b57a6;
      puVar24[2] = *(undefined4 *)(local_e0 + 0x10 + uVar39 * 0x14);
      *(undefined1 *)(puVar24[2] + 4) =
           *(undefined1 *)(*(int *)(*(int *)(*local_d8 + 0x10) + 0xc) + 0x4d);
      *(undefined1 *)((int)puVar24 + 0x21) = 1;
      local_d4 = (uint *)FUN_004b8e80((int)piVar18,(int)puVar24);
      puVar29 = local_d4;
      piVar10 = local_dc;
      uVar42 = local_d0;
      break;
    case 0x2c:
      puVar24 = FUN_0046c260((int *)local_d8,*(int *)(local_e0 + 4 + uVar39 * 0x14),
                             *(int *)(local_e0 + 0xc + uVar39 * 0x14),0xffffffff,0);
      local_d0 = CONCAT44(local_d0._4_4_,puVar24);
      if (puVar24 == (undefined4 *)0x0) goto LAB_004b57a6;
      *(undefined1 *)(puVar24 + 7) = 1;
      puVar24[4] = *(undefined4 *)(local_e0 + 8 + uVar39 * 0x14);
      *(undefined1 *)((int)puVar24 + 0x1e) = 1;
      *(undefined1 *)((int)puVar24 + 0x1f) = 0;
      *(undefined1 *)((int)puVar24 + 0x22) = *(undefined1 *)(local_e0 + 3 + uVar39 * 0x14);
      puVar29 = local_d4;
      piVar10 = local_dc;
      uVar42 = local_d0;
      break;
    case 0x2d:
      FUN_004b5ff0((int *)local_d8,
                   *(undefined4 **)(local_d8[0x10] + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 4));
      *(undefined4 *)(local_d8[0x10] + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 4) = 0;
      puVar29 = local_d4;
      piVar10 = local_dc;
      uVar42 = local_d0;
      break;
    case 0x2e:
    case 0x2f:
    case 0x30:
    case 0x31:
      piVar33 = *(int **)(local_d8[0x10] + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 4);
      local_c8 = CONCAT44(uVar8,piVar33);
      if (*piVar33 == 0) goto LAB_004b0d00;
      uVar13 = *(undefined1 *)(local_e0 + uVar39 * 0x14);
      local_d0 = (ulonglong)CONCAT14(uVar13,(int *)local_d0);
      *(undefined1 *)(piVar33 + 7) = 0;
      if (*(char *)((int)piVar33 + 0x1e) == '\0') {
        local_a8 = *(uint *)(local_e0 + 0x10 + uVar39 * 0x14);
        local_c0._0_6_ = CONCAT24((undefined2)local_a8,piVar33[2]);
        local_c0 = CONCAT17(local_c0._7_1_,CONCAT16(uVar13,(uint6)local_c0)) & 0xff01ffffffffffff;
        piVar36 = (int *)(local_e4 + *(int *)(local_e0 + 0xc + uVar39 * 0x14) * 0x28);
        local_b0 = (double)CONCAT44(local_b0._4_4_,piVar36);
        if ((*(ushort *)(piVar36 + 7) & 0x4000) != 0) {
          FUN_004b6fa0(piVar36);
          piVar33 = (int *)local_c8;
        }
        local_d4 = (uint *)FUN_004908e0((int *)*piVar33,(int *)&local_c0,0,0,0,(uint *)&local_d0);
        if (local_d4 != (uint *)0x0) goto LAB_004b572c;
        *(undefined1 *)((int)(int *)local_c8 + 0x19) = 0;
      }
      else {
        iVar27 = local_e4 + *(int *)(local_e0 + 0xc + uVar39 * 0x14) * 0x28;
        FUN_0046dfa0(iVar27);
        uVar42 = FUN_004b65e0(iVar27);
        *(undefined1 *)((int)(int *)local_c8 + 0x19) = 0;
        local_a0._0_4_ = (int *)uVar42;
        local_a0._4_4_ = (int)(uVar42 >> 0x20);
        uVar25 = (uint)(int *)local_a0;
        iVar16 = local_a0._4_4_;
        if ((*(ushort *)(iVar27 + 0x1c) & 4) == 0) {
          local_a0 = uVar42;
          if ((*(ushort *)(iVar27 + 0x1c) & 8) == 0) {
            iVar27 = *(int *)(local_e0 + 8 + uVar39 * 0x14);
            piVar36 = local_dc;
            goto LAB_004b0d04;
          }
          if (((int *)local_a0 == (int *)0x0) && (local_a0._4_4_ == -0x80000000)) {
            local_f8 = -9.223372036854776e+18;
            if ((*(double *)(iVar27 + 8) < -9.223372036854776e+18) ||
               (0.0 < *(double *)(iVar27 + 8))) {
              local_d0 = CONCAT44(local_d0._4_4_,1);
              if (0.0 < *(double *)(iVar27 + 8) || *(double *)(iVar27 + 8) == 0.0) {
                if ((int)local_d0._4_4_ < 0x30) {
                  local_d4 = (uint *)FUN_004906f0((int *)*(int *)local_c8,(undefined4 *)&local_d0);
                  goto LAB_004b2547;
                }
              }
              else if (0x2f < (int)local_d0._4_4_) {
                local_d4 = (uint *)FUN_0048fdc0((int *)*(int *)local_c8,(undefined4 *)&local_d0);
LAB_004b2547:
                if (local_d4 != (uint *)0x0) goto LAB_004b572c;
                puVar29 = local_d4;
                piVar36 = local_dc;
                piVar10 = local_dc;
                uVar42 = local_d0;
                if ((int *)local_d0 != (int *)0x0) {
                  iVar27 = *(int *)(local_e0 + 8 + uVar39 * 0x14);
                  goto LAB_004b0d04;
                }
                break;
              }
LAB_004af55f:
              puVar29 = local_d4;
              piVar36 = local_dc;
              local_ec = *(int *)(local_e0 + 8 + uVar39 * 0x14) - 1;
              piVar10 = local_dc;
              uVar42 = local_d0;
              break;
            }
          }
          if ((local_d0._4_4_ == (uint *)0x2e) || (local_d0._4_4_ == (uint *)0x30)) {
            local_f8 = (double)(longlong)uVar42;
            if (local_f8 < *(double *)(iVar27 + 8)) {
              uVar25 = (int)(int *)local_a0 + 1;
              iVar16 = local_a0._4_4_ + (uint)(0xfffffffe < (int *)local_a0);
              local_a0 = CONCAT44(iVar16,uVar25);
              uVar42 = local_a0;
            }
          }
          else {
            local_f8 = (double)(longlong)uVar42;
            if (*(double *)(iVar27 + 8) <= local_f8 && local_f8 != *(double *)(iVar27 + 8)) {
              uVar25 = (int)(int *)local_a0 - 1;
              iVar16 = local_a0._4_4_ + -1 + (uint)((int *)local_a0 != (int *)0x0);
              local_a0 = CONCAT44(iVar16,uVar25);
              uVar42 = local_a0;
            }
          }
        }
        local_a0 = uVar42;
        local_d4 = (uint *)FUN_004908e0((int *)*(int *)local_c8,(int *)0x0,uVar25,iVar16,0,
                                        (uint *)&local_d0);
        if (local_d4 != (uint *)0x0) goto LAB_004b572c;
        if ((int *)local_d0 == (int *)0x0) {
          *(undefined1 *)((int)(int *)local_c8 + 0x19) = 1;
          *(int **)((int)(int *)local_c8 + 0x40) = (int *)local_a0;
          *(int *)((int)(int *)local_c8 + 0x44) = local_a0._4_4_;
        }
      }
      *(undefined1 *)((int)(int *)local_c8 + 0x1d) = 0;
      ((int *)local_c8)[0x14] = 0;
      piVar36 = local_dc;
      if ((int)local_d0._4_4_ < 0x30) {
        if (((int)(int *)local_d0 < 1) &&
           (((int *)local_d0 != (int *)0x0 || (local_d0._4_4_ != (uint *)0x2e)))) {
          uVar25 = (uint)(*(char *)(*(int *)local_c8 + 0x5b) != '\x01');
          local_d0 = CONCAT44(local_d0._4_4_,uVar25);
          bVar14 = uVar25 == 0;
          goto LAB_004b07bb;
        }
        local_d4 = (uint *)FUN_00491450((int *)*(int *)local_c8,(undefined4 *)&local_d0);
      }
      else {
        if ((-1 < (int)(int *)local_d0) &&
           (((int *)local_d0 != (int *)0x0 || (local_d0._4_4_ != (uint *)0x31)))) {
          local_d0 = ZEXT48(local_d0._4_4_) << 0x20;
          puVar29 = local_d4;
          piVar10 = local_dc;
          uVar42 = local_d0;
          break;
        }
        local_d4 = (uint *)FUN_00490c90((int *)*(int *)local_c8,(undefined4 *)&local_d0);
      }
      if (local_d4 != (uint *)0x0) goto LAB_004b572c;
      *(undefined1 *)((int)(int *)local_c8 + 0x19) = 0;
      bVar14 = (int *)local_d0 == (int *)0x0;
      piVar36 = local_dc;
      goto LAB_004b07bb;
    case 0x32:
      piVar33 = *(int **)(local_d8[0x10] + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 4);
      local_d0 = CONCAT44(local_d0._4_4_,piVar33);
      uVar42 = local_d0;
      if (*piVar33 != 0) {
        *(undefined1 *)(piVar33 + 7) = 0;
        uVar42 = FUN_004b65e0(local_e4 + *(int *)(local_e0 + 8 + uVar39 * 0x14) * 0x28);
        *(ulonglong *)((int)(int *)local_d0 + 0x38) = uVar42;
        *(undefined1 *)((int)(int *)local_d0 + 0x19) = 0;
        *(undefined1 *)((int)(int *)local_d0 + 0x1d) = 1;
        puVar29 = local_d4;
        piVar10 = local_dc;
        uVar42 = local_d0;
      }
      break;
    case 0x33:
    case 0x34:
      uVar35 = 0;
      piVar36 = *(int **)(local_d8[0x10] + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 4);
      local_d0 = ZEXT48(piVar36) << 0x20;
      uVar25 = local_e4 + *(int *)(local_e0 + 0xc + uVar39 * 0x14) * 0x28;
      if (*piVar36 != 0) {
        if (*(int *)(local_e0 + 0x10 + uVar39 * 0x14) < 1) {
          puVar24 = FUN_004aebc0((int *)piVar36[2],(int)&local_a0,0x97,
                                 (undefined4 *)((int)&local_c8 + 4));
          local_c0 = CONCAT44(local_c0._4_4_,puVar24);
          if (puVar24 == (undefined4 *)0x0) goto LAB_004b57a6;
          FUN_004b8560(*(undefined4 **)((int)local_d0._4_4_ + 8),*(int *)(uVar25 + 0x18),
                       *(byte **)(uVar25 + 4),(uint)puVar24);
          *(byte *)((int)(int *)local_c0 + 6) = *(byte *)((int)(int *)local_c0 + 6) | 2;
          piVar33 = (int *)local_c0;
          piVar36 = (int *)local_d0._4_4_;
        }
        else {
          local_b8._0_6_ = CONCAT24(*(undefined2 *)(local_e0 + 0x10 + uVar39 * 0x14),piVar36[2]);
          local_b8._0_7_ = CONCAT16(2,(undefined6)local_b8);
          local_c0 = CONCAT44(uVar28,&local_b8);
          piVar33 = (int *)&local_b8;
          local_a8 = uVar25;
        }
        local_d4 = (uint *)FUN_004908e0((int *)*piVar36,piVar33,0,0,0,(uint *)&local_c8);
        if (*(int *)(local_e0 + 0x10 + uVar39 * 0x14) == 0) {
          FUN_00494b00((int)piVar18,(undefined4 *)(local_c8 >> 0x20));
        }
        puVar29 = local_d4;
        piVar36 = local_dc;
        piVar10 = local_dc;
        uVar42 = local_d0;
        if (local_d4 != (uint *)0x0) break;
        uVar35 = (uint)((int *)local_c8 == (int *)0x0);
        local_d0 = CONCAT44(local_d0._4_4_,uVar35);
        *(undefined1 *)((int)local_d0._4_4_ + 0x1d) = 0;
        *(undefined4 *)((int)local_d0._4_4_ + 0x50) = 0;
      }
      piVar36 = local_dc;
      uVar42 = local_d0;
      puVar29 = local_d4;
      piVar10 = local_dc;
      if (*(char *)(local_e0 + uVar39 * 0x14) == '4') {
        if (uVar35 != 0) {
          iVar27 = *(int *)(local_e0 + 8 + uVar39 * 0x14);
          goto LAB_004b0d04;
        }
      }
      else if (uVar35 == 0) {
        iVar27 = *(int *)(local_e0 + 8 + uVar39 * 0x14);
        goto LAB_004b0d04;
      }
      break;
    case 0x35:
      iVar27 = local_e4 + *(int *)(local_e0 + 0xc + uVar39 * 0x14) * 0x28;
      uVar25 = local_e4 + *(int *)(local_e0 + 0x10 + uVar39 * 0x14) * 0x28;
      local_c0 = CONCAT44(uVar28,uVar25);
      piVar36 = *(int **)(local_d8[0x10] + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 4);
      local_d0 = CONCAT44(piVar36,(int *)local_d0);
      piVar36[0x13] = 0;
      piVar36[0x14] = 0;
      iVar16 = *piVar36;
      local_f8 = (double)CONCAT44(iVar16,(undefined4)local_f8);
      uVar3 = *(ushort *)(piVar36[2] + 6);
      uVar31 = 0;
      local_c8._0_6_ = CONCAT24(uVar3,iVar16);
      local_d0 = local_d0 & 0xffffffffffff0000;
      if (uVar3 != 0) {
        uVar35 = 0;
        do {
          if ((*(byte *)(uVar25 + 0x1c + uVar35 * 0x28) & 1) != 0) {
            iVar27 = *(int *)(local_e0 + 8 + uVar39 * 0x14);
            local_c8 = local_c8 & 0xffffffff00000000;
            piVar18 = local_e8;
            piVar36 = local_dc;
            goto LAB_004b0d04;
          }
          uVar31 = uVar31 + 1;
          uVar35 = (uint)uVar31;
          local_d0 = CONCAT62(local_d0._2_6_,uVar31);
        } while (uVar35 < uVar3);
      }
      piVar18 = piVar33;
      piVar36 = piVar19;
      uVar42 = local_d0;
      if (iVar16 != 0) {
        local_b8._0_6_ = CONCAT24(uVar3 + 1,*(undefined4 *)((int)local_d0._4_4_ + 8));
        local_b8._0_7_ = CONCAT16(4,(undefined6)local_b8);
        local_a8 = uVar25;
        FUN_004b7410(iVar27);
        local_a0 = *(ulonglong *)(iVar27 + 0x10);
        local_d4 = (uint *)FUN_004908e0((int *)local_c8,(int *)&local_b8,0,0,0,
                                        (uint *)((int)local_d0._4_4_ + 0x4c));
        if (((ulonglong)local_b8 & 0x4000000000000) == 0) {
          if (((int *)local_b0 != (int *)local_a0) || (local_b0._4_4_ != local_a0._4_4_)) {
            *(int **)(iVar27 + 0x10) = (int *)local_b0;
            *(uint *)(iVar27 + 0x14) = local_b0._4_4_;
            puVar29 = local_d4;
            piVar18 = local_e8;
            piVar36 = local_dc;
            piVar10 = local_dc;
            uVar42 = local_d0;
            break;
          }
        }
LAB_004b4170:
        iVar27 = *(int *)(local_e0 + 8 + uVar39 * 0x14);
        piVar18 = local_e8;
        piVar36 = local_dc;
        goto LAB_004b0d04;
      }
      break;
    case 0x36:
      iVar27 = *(int *)(local_e0 + 0xc + uVar39 * 0x14);
      puVar24 = *(undefined4 **)(local_d8[0x10] + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 4);
      piVar36 = (int *)*puVar24;
      local_d0 = CONCAT44(piVar36,puVar24);
      if (piVar36 == (int *)0x0) {
        iVar27 = *(int *)(local_e0 + 8 + uVar39 * 0x14);
        puVar24[0x13] = 0;
        piVar36 = piVar19;
        local_ec = iVar27 - 1;
        uVar42 = local_d0;
      }
      else {
        local_c8 = (ulonglong)uVar8 << 0x20;
        uVar25 = *(uint *)(local_e4 + 0x10 + iVar27 * 0x28);
        iVar16 = *(int *)(local_e4 + 0x14 + iVar27 * 0x28);
        local_c0 = CONCAT44(iVar16,uVar25);
        local_d4 = (uint *)FUN_004908e0(piVar36,(int *)0x0,uVar25,iVar16,0,(uint *)&local_c8);
        *(undefined4 *)((int)(int *)local_d0 + 0x40) =
             *(undefined4 *)(local_e4 + 0x10 + iVar27 * 0x28);
        *(undefined4 *)((int)(int *)local_d0 + 0x44) =
             *(undefined4 *)(local_e4 + 0x14 + iVar27 * 0x28);
        *(bool *)((int)(int *)local_d0 + 0x19) = (int *)local_c8 == (int *)0x0;
        *(undefined1 *)((int)(int *)local_d0 + 0x1c) = 0;
        *(undefined4 *)((int)(int *)local_d0 + 0x50) = 0;
        *(undefined1 *)((int)(int *)local_d0 + 0x1d) = 0;
        if ((int *)local_c8 != (int *)0x0) {
          local_ec = *(int *)(local_e0 + 8 + uVar39 * 0x14) - 1;
        }
        *(int **)((int)(int *)local_d0 + 0x4c) = (int *)local_c8;
        puVar29 = local_d4;
        piVar18 = local_e8;
        piVar36 = local_dc;
        piVar10 = local_dc;
        uVar42 = local_d0;
      }
      break;
    case 0x37:
      iVar27 = *(int *)(local_d8[0x10] + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 4);
      piVar36[4] = *(int *)(iVar27 + 0x30);
      piVar36[5] = *(int *)(iVar27 + 0x34);
      iVar27 = *(int *)(local_d8[0x10] + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 4);
      puVar34 = (uint *)(iVar27 + 0x30);
      uVar39 = *puVar34;
      *puVar34 = *puVar34 + 1;
      piVar33 = (int *)(iVar27 + 0x34);
      *piVar33 = *piVar33 + (uint)(0xfffffffe < uVar39);
      break;
    case 0x38:
      local_d0 = 0;
      piVar36 = *(int **)(local_d8[0x10] + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 4);
      local_c8 = ZEXT48(piVar36);
      iVar27 = *piVar36;
      if (iVar27 != 0) {
        if (*(char *)((int)piVar36 + 0x1b) == '\0') {
          uVar25 = *(uint *)(iVar27 + 0x20);
          iStack_12c = *(int *)(iVar27 + 0x24);
          local_d0 = *(ulonglong *)(iVar27 + 0x20);
          if (uVar25 == 0 && iStack_12c == 0) {
            local_d4 = (uint *)FUN_004906f0((int *)*piVar36,(undefined4 *)((int)&local_c8 + 4));
            if (local_d4 != (uint *)0x0) goto LAB_004b572c;
            if (local_c8._4_4_ == (int *)0x0) {
              local_d4 = (uint *)FUN_004906b0(*(int *)local_c8,(undefined4 *)&local_d0);
              if (((int)local_d0._4_4_ < 0x7fffffff) || ((int *)local_d0 != (int *)0xffffffff)) {
                iStack_12c = (int)local_d0._4_4_ + (uint)(0xfffffffe < (int *)local_d0);
                goto LAB_004b2d88;
              }
              *(undefined1 *)((int)(int *)local_c8 + 0x1b) = 1;
              uVar25 = 0xffffffff;
              iStack_12c = (int)local_d0._4_4_;
            }
            else {
              iStack_12c = 0;
              local_d0._0_4_ = (int *)0x0;
LAB_004b2d88:
              uVar25 = (int)(int *)local_d0 + 1;
              local_d0 = CONCAT44(iStack_12c,uVar25);
            }
            piVar36 = (int *)local_c8;
          }
          iVar27 = *(int *)(local_e0 + 0xc + uVar39 * 0x14);
          if (iVar27 != 0) {
            uVar25 = local_d8[0x28];
            if (uVar25 == 0) {
              iVar27 = local_e4 + iVar27 * 0x28;
            }
            else {
              local_b8 = (double)CONCAT44(local_b8._4_4_,uVar25);
              for (uVar35 = *(uint *)(uVar25 + 4); uVar35 != 0; uVar35 = *(uint *)(uVar35 + 4)) {
                local_b8._4_4_ = (byte *)((ulonglong)local_b8 >> 0x20);
                local_b8 = (double)CONCAT44(local_b8._4_4_,uVar35);
                uVar25 = uVar35;
              }
              iVar27 = *(int *)(uVar25 + 0xc) + *(int *)(local_e0 + 0xc + uVar39 * 0x14) * 0x28;
            }
            local_c0 = CONCAT44(iVar27,(int *)local_c0);
            FUN_004b7410(iVar27);
            uVar39 = *(uint *)((int)local_c0._4_4_ + 0x10);
            uVar42 = local_c8;
            if (((uVar39 == 0xffffffff) && (*(int *)((int)local_c0._4_4_ + 0x14) == 0x7fffffff)) ||
               (*(char *)((int)(int *)local_c8 + 0x1b) != '\0')) {
LAB_004b573f:
              local_c8 = uVar42;
              local_d4 = (uint *)0xd;
              goto LAB_004b572c;
            }
            uVar25 = uVar39 + 1;
            iVar27 = *(int *)((int)local_c0._4_4_ + 0x14) + (uint)(0xfffffffe < uVar39);
            uVar39 = (uint)(int *)local_d0;
            if (((int)local_d0._4_4_ <= iVar27) &&
               (((int)local_d0._4_4_ < iVar27 || ((int *)local_d0 < uVar25)))) {
              local_d0 = CONCAT44(iVar27,uVar25);
              uVar39 = uVar25;
            }
            *(uint *)((int)local_c0._4_4_ + 0x10) = uVar39;
            *(uint **)((int)local_c0._4_4_ + 0x14) = local_d0._4_4_;
            uVar25 = (uint)(int *)local_d0;
            iStack_12c = (int)local_d0._4_4_;
            piVar36 = (int *)local_c8;
          }
          if ((iStack_12c < 0x7fffffff) || (uVar25 != 0xffffffff)) {
            local_130 = uVar25 + 1;
            iStack_12c = iStack_12c + (uint)(0xfffffffe < uVar25);
          }
          else {
            iStack_12c = 0;
            local_130 = 0;
          }
          FUN_00491bc0(*piVar36,local_130,iStack_12c);
          piVar36 = (int *)local_c8;
          uVar42 = local_c8;
          if (*(char *)((int)(int *)local_c8 + 0x1b) != '\0') goto LAB_004b2ed4;
        }
        else {
LAB_004b2ed4:
          iVar27 = (local_100 & 0x3fffffff) + (uint)(0xfffffffe < local_104);
          local_d0 = CONCAT44(iVar27,local_104 + 1);
          local_c0 = local_c0 & 0xffffffff00000000;
          local_d4 = (uint *)FUN_004908e0((int *)*piVar36,(int *)0x0,local_104 + 1,iVar27,0,
                                          (uint *)((int)&local_c8 + 4));
          uVar42 = local_c8;
          while (local_d4 == (uint *)0x0) {
            local_c8._4_4_ = (int *)(uVar42 >> 0x20);
            if (local_c8._4_4_ != (int *)0x0) {
LAB_004b2fc6:
              if (local_c8._4_4_ == (int *)0x0) goto LAB_004b573f;
              break;
            }
            iVar27 = (int)(int *)local_c0 + 1;
            local_c0._4_4_ = (undefined4 *)(local_c0 >> 0x20);
            local_c0 = CONCAT44(local_c0._4_4_,iVar27);
            if (99 < iVar27) goto LAB_004b2fc6;
            local_c8 = uVar42;
            FUN_00466fa0(8,(undefined1 *)&local_d0);
            if ((int)(int *)local_c0 < 5) {
              local_d0._0_4_ = (int *)((uint)(int *)local_d0 & 0xffffff);
              uVar39 = 0;
            }
            else {
              uVar39 = (uint)local_d0._4_4_ & 0x3fffffff;
            }
            uVar25 = (int)(int *)local_d0 + 1;
            iVar27 = uVar39 + (0xfffffffe < (int *)local_d0);
            local_d0 = CONCAT44(iVar27,uVar25);
            local_d4 = (uint *)FUN_004908e0((int *)*(int *)local_c8,(int *)0x0,uVar25,iVar27,0,
                                            (uint *)((int)&local_c8 + 4));
            uVar42 = local_c8;
          }
          local_c8._0_4_ = (int *)uVar42;
        }
        local_c8 = uVar42;
        puVar1 = (undefined1 *)((int)(int *)local_c8 + 0x19);
        *puVar1 = 0;
        *(undefined1 *)((int)(int *)local_c8 + 0x1d) = 0;
        *(undefined4 *)((int)(int *)local_c8 + 0x50) = 0;
      }
      local_dc[4] = (int)(int *)local_d0;
      local_dc[5] = (int)local_d0._4_4_;
      puVar29 = local_d4;
      piVar36 = local_dc;
      piVar10 = local_dc;
      uVar42 = local_d0;
      break;
    case 0x39:
    case 0x3a:
      iVar27 = local_e4 + *(int *)(local_e0 + 8 + uVar39 * 0x14) * 0x28;
      piVar36 = *(int **)(local_d8[0x10] + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 4);
      uVar25 = *(uint *)(local_e0 + 0xc + uVar39 * 0x14);
      if (*(char *)(local_e0 + uVar39 * 0x14) == '9') {
        local_d0._4_4_ = (uint *)(local_e4 + uVar25 * 0x28);
        uVar25 = *(uint *)((int)local_d0._4_4_ + 0x10);
        uVar35 = *(uint *)((int)local_d0._4_4_ + 0x14);
      }
      else {
        uVar35 = (int)uVar25 >> 0x1f;
      }
      local_d0 = CONCAT44(local_d0._4_4_,iVar27);
      local_c8 = CONCAT44(uVar35,uVar25);
      if ((*(byte *)(local_e0 + 3 + uVar39 * 0x14) & 1) != 0) {
        local_d8[0x19] = local_d8[0x19] + 1;
      }
      if ((*(byte *)(local_e0 + 3 + uVar39 * 0x14) & 2) != 0) {
        local_e8[8] = uVar25;
        local_e8[9] = uVar35;
        local_104 = uVar25;
        local_100 = uVar35;
      }
      if ((*(byte *)(iVar27 + 0x1c) & 1) != 0) {
        *(undefined4 *)(iVar27 + 4) = 0;
        *(undefined4 *)(iVar27 + 0x18) = 0;
      }
      if ((*(byte *)(local_e0 + 3 + uVar39 * 0x14) & 0x10) == 0) {
        local_b8 = (double)((ulonglong)uVar9 << 0x20);
      }
      else {
        local_b8 = (double)CONCAT44(uVar9,piVar36[0x13]);
      }
      if ((*(ushort *)(iVar27 + 0x1c) & 0x4000) == 0) {
        local_c0 = ZEXT48(piVar36);
      }
      else {
        local_c0 = CONCAT44(*(undefined4 *)(iVar27 + 0x10),piVar36);
      }
      FUN_00491bc0(*piVar36,0,0);
      uVar25 = local_e0;
      local_d4 = FUN_0048ffe0((uint *)*(int *)local_c0,(byte *)0x0,(uint)(int *)local_c8,
                              (uint)local_c8._4_4_,*(void **)((int)(int *)local_d0 + 4),
                              *(size_t *)((int)(int *)local_d0 + 0x18),(size_t)local_c0._4_4_,
                              *(byte *)(local_e0 + 3 + uVar39 * 0x14) & 8,(uint *)local_b8);
      piVar18 = local_e8;
      *(undefined1 *)((int)(int *)local_c0 + 0x19) = 0;
      *(undefined1 *)((int)(int *)local_c0 + 0x1d) = 0;
      *(undefined4 *)((int)(int *)local_c0 + 0x50) = 0;
      puVar29 = local_d4;
      piVar36 = local_dc;
      piVar10 = local_dc;
      uVar42 = local_d0;
      if (((local_d4 == (uint *)0x0) && (local_e8[0x2f] != 0)) &&
         (*(int *)(uVar25 + 0x10 + uVar39 * 0x14) != 0)) {
        uVar28 = *(undefined4 *)(local_e8[4] + *(int *)((int)(int *)local_c0 + 0xc) * 0x10);
        local_b8 = (double)CONCAT44(uVar28,(uint *)local_b8);
        uVar5 = *(undefined4 *)(uVar25 + 0x10 + uVar39 * 0x14);
        uVar20 = 0x12;
        if ((*(byte *)(uVar25 + 3 + uVar39 * 0x14) & 4) != 0) {
          uVar20 = 0x17;
        }
        local_b0 = (double)CONCAT44(uVar20,uVar5);
        (*(code *)local_e8[0x2f])(local_e8[0x2e],uVar20,uVar28,uVar5,(int *)local_c8);
        puVar29 = local_d4;
        piVar36 = local_dc;
        piVar10 = local_dc;
        uVar42 = local_d0;
      }
      break;
    case 0x3b:
      local_d0 = 0;
      puVar24 = *(undefined4 **)(local_d8[0x10] + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 4);
      local_c8 = CONCAT44(uVar8,puVar24);
      if ((piVar18[0x2f] != 0) && (*(int *)(local_e0 + 0x10 + uVar39 * 0x14) != 0)) {
        local_d0 = *(ulonglong *)(puVar24 + 0x10);
      }
      local_d4 = (uint *)FUN_004af1b0(puVar24);
      if (local_d4 != (uint *)0x0) {
LAB_004b572c:
        if ((char)piVar18[0xe] == '\0') {
          puVar29 = local_d4;
          if (local_d4 == (uint *)0xc0a) goto LAB_004b57cd;
        }
        else {
          local_d4 = (uint *)0x7;
        }
        FUN_004961c0((uint)local_d4);
        FUN_004a9a30((int *)(local_d8 + 0xd),(int)piVar18,&DAT_0056de50);
        puVar29 = local_d4;
        goto LAB_004b57cd;
      }
      FUN_00491bc0(*(int *)local_c8,0,0);
      local_d4 = (uint *)FUN_0048f930((uint *)*(int *)local_c8);
      *(undefined4 *)((int)(int *)local_c8 + 0x50) = 0;
      if (((local_d4 == (uint *)0x0) && ((code *)piVar18[0x2f] != (code *)0x0)) &&
         (iVar27 = *(int *)(local_e0 + 0x10 + uVar39 * 0x14), iVar27 != 0)) {
        (*(code *)piVar18[0x2f])
                  (piVar18[0x2e],9,
                   *(undefined4 *)(piVar18[4] + *(int *)((int)(int *)local_c8 + 0xc) * 0x10),iVar27,
                   (int *)local_d0);
      }
      puVar29 = local_d4;
      piVar10 = local_dc;
      uVar42 = local_d0;
      if ((*(byte *)(local_e0 + 8 + uVar39 * 0x14) & 1) != 0) {
        local_d8[0x19] = local_d8[0x19] + 1;
      }
      break;
    case 0x3c:
      uVar39 = local_d8[0x19];
      piVar18[0x13] = piVar18[0x13] + uVar39;
      piVar18[0x12] = uVar39;
      local_d8[0x19] = 0;
      break;
    case 0x3d:
      iVar27 = *(int *)(local_d8[0x10] + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 4);
      local_d0 = CONCAT44(local_d0._4_4_,iVar27);
      local_d4 = (uint *)FUN_004b8dd0(iVar27,local_e4 +
                                             *(int *)(local_e0 + 0xc + uVar39 * 0x14) * 0x28,
                                      (uint *)((int)&local_d0 + 4));
      puVar29 = local_d4;
      piVar10 = local_dc;
      uVar42 = local_d0;
      if (local_d0._4_4_ != (uint *)0x0) {
        iVar27 = *(int *)(local_e0 + 8 + uVar39 * 0x14);
        goto LAB_004b0d04;
      }
      break;
    case 0x3e:
      piVar36 = (int *)(local_e4 + *(int *)(local_e0 + 8 + uVar39 * 0x14) * 0x28);
      iVar27 = *(int *)(local_d8[0x10] + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 4);
      local_d0 = CONCAT44(local_d0._4_4_,iVar27);
      local_dc = piVar36;
      local_d4 = (uint *)FUN_004b92e0(iVar27,piVar36);
      puVar29 = local_d4;
      piVar10 = local_dc;
      uVar42 = local_d0;
      break;
    case 0x3f:
    case 0x40:
      local_dc = (int *)(local_e4 + *(int *)(local_e0 + 8 + uVar39 * 0x14) * 0x28);
      puVar24 = *(undefined4 **)(local_d8[0x10] + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 4);
      local_d0 = CONCAT44(*puVar24,puVar24);
      local_d4 = (uint *)FUN_004af1b0(puVar24);
      if (local_d4 != (uint *)0x0) goto LAB_004b572c;
      if (*(char *)((int)(int *)local_d0 + 0x1f) != '\0') {
        FUN_004906b0((int)local_d0._4_4_,(undefined4 *)&local_c0);
        iVar27 = piVar18[0x14] >> 0x1f;
        if ((iVar27 < (int)local_c0._4_4_) ||
           ((iVar27 <= (int)local_c0._4_4_ && ((uint)piVar18[0x14] < (int *)local_c0))))
        goto LAB_004b5780;
        local_c8 = CONCAT44(local_c8._4_4_,(int *)local_c0);
        uVar39 = (uint)(int *)local_c0;
LAB_004b3497:
        piVar36 = local_dc;
        iVar27 = FUN_004b7260(local_dc,uVar39,0);
        if (iVar27 == 0) {
          piVar36[6] = (int)(int *)local_c8;
          *(ushort *)(piVar36 + 7) = *(ushort *)(piVar36 + 7) & 0xbe10 | 0x10;
          if (*(char *)((int)(int *)local_d0 + 0x1f) == '\0') {
            local_d4 = (uint *)FUN_0048f870((int *)local_d0._4_4_,0,(size_t)(int *)local_c8,
                                            (void *)piVar36[1]);
            *(undefined1 *)((int)piVar36 + 0x1f) = 1;
            puVar29 = local_d4;
            piVar36 = local_dc;
            piVar10 = local_dc;
            uVar42 = local_d0;
          }
          else {
            local_d4 = (uint *)FUN_0046b2f0((int)local_d0._4_4_,0,(size_t)(int *)local_c8,
                                            (void *)piVar36[1],0);
            *(undefined1 *)((int)piVar36 + 0x1f) = 1;
            puVar29 = local_d4;
            piVar10 = local_dc;
            uVar42 = local_d0;
          }
          break;
        }
        goto LAB_004b57a6;
      }
      FUN_0048f8d0((int)local_d0._4_4_,(undefined4 *)&local_c8);
      uVar39 = (uint)(int *)local_c8;
      if ((int *)local_c8 <= (uint)piVar18[0x14]) goto LAB_004b3497;
LAB_004b5780:
      FUN_004a9a30((int *)(local_d8 + 0xd),(int)piVar18,(byte *)"string or blob too big");
      puVar29 = (uint *)0x12;
      local_d4 = puVar29;
      goto LAB_004b57cd;
    case 0x41:
      puVar24 = *(undefined4 **)(local_d8[0x10] + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 4);
      local_d0 = CONCAT44(local_d0._4_4_,puVar24);
      uVar42 = local_d0;
      if (*(char *)(puVar24 + 7) == '\0') {
        if (*(char *)((int)puVar24 + 0x1d) == '\0') {
          if ((undefined4 *)puVar24[9] == (undefined4 *)0x0) {
            local_d4 = (uint *)FUN_004af1b0(puVar24);
            if (local_d4 != (uint *)0x0) goto LAB_004b572c;
            if (*(char *)((int)(int *)local_d0 + 0x19) == '\0') {
              local_d4 = (uint *)FUN_004906b0(*(int *)local_d0,(undefined4 *)&local_c8);
              piVar36[4] = (int)(int *)local_c8;
              piVar36[5] = (int)local_c8._4_4_;
              puVar29 = local_d4;
              piVar10 = local_dc;
              uVar42 = local_d0;
            }
            else {
              iVar27 = ((int *)local_d0)[0x11];
              local_c8 = *(ulonglong *)((int *)local_d0 + 0x10);
              piVar36[4] = (int)*(ulonglong *)((int *)local_d0 + 0x10);
              piVar36[5] = iVar27;
              puVar29 = local_d4;
              piVar10 = local_dc;
              uVar42 = local_d0;
            }
          }
          else {
            piVar33 = *(int **)puVar24[9];
            iVar27 = *piVar33;
            local_c0 = CONCAT44(iVar27,piVar33);
            local_d4 = (uint *)(**(code **)(iVar27 + 0x30))(puVar24[9]);
            FUN_0047e200((int *)local_d8,(int)local_c0);
            piVar36[4] = (int)(int *)local_c8;
            piVar36[5] = (int)local_c8._4_4_;
            puVar29 = local_d4;
            piVar10 = local_dc;
            uVar42 = local_d0;
          }
        }
        else {
          iVar27 = puVar24[0xf];
          local_c8 = *(ulonglong *)(puVar24 + 0xe);
          piVar36[4] = (int)*(ulonglong *)(puVar24 + 0xe);
          piVar36[5] = iVar27;
        }
      }
      else {
        *(undefined2 *)(piVar36 + 7) = 1;
      }
      break;
    case 0x42:
      piVar33 = *(int **)(local_d8[0x10] + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 4);
      local_d0 = CONCAT44(local_d0._4_4_,piVar33);
      *(undefined1 *)(piVar33 + 7) = 1;
      *(undefined1 *)((int)piVar33 + 0x19) = 0;
      uVar42 = local_d0;
      if (*piVar33 != 0) {
        FUN_0048efd0(*piVar33);
        puVar29 = local_d4;
        piVar10 = local_dc;
        uVar42 = local_d0;
      }
      break;
    case 0x43:
      puVar24 = *(undefined4 **)(local_d8[0x10] + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 4);
      piVar33 = (int *)*puVar24;
      local_d0 = CONCAT44(piVar33,puVar24);
      local_c8 = (ulonglong)uVar8 << 0x20;
      if (piVar33 != (int *)0x0) {
        local_d4 = (uint *)FUN_004906f0(piVar33,(undefined4 *)&local_c8);
        puVar24 = (int *)local_d0;
      }
      *(undefined1 *)(puVar24 + 7) = (undefined1)local_c8;
      *(undefined1 *)((int)(int *)local_d0 + 0x1d) = 0;
      *(undefined1 *)((int)(int *)local_d0 + 0x19) = 0;
      *(undefined4 *)((int)(int *)local_d0 + 0x50) = 0;
      iVar27 = *(int *)(local_e0 + 8 + uVar39 * 0x14);
      puVar29 = local_d4;
      piVar10 = local_dc;
      uVar42 = local_d0;
      if ((0 < iVar27) && ((int *)local_c8 != (int *)0x0)) goto LAB_004b0d04;
      break;
    case 0x44:
    case 0x45:
      iVar27 = *(int *)(local_e0 + 4 + uVar39 * 0x14);
      if ((*(byte *)(local_e4 + 0x1c + iVar27 * 0x28) & 1) == 0) {
        uVar42 = FUN_004b65e0(local_e4 + iVar27 * 0x28);
        if (uVar42 == 0) {
          uVar35 = 0;
        }
        else {
          uVar35 = 1;
        }
      }
      else {
        uVar35 = 2;
      }
      local_d0 = CONCAT44(local_d0._4_4_,uVar35);
      iVar27 = *(int *)(local_e0 + 8 + uVar39 * 0x14);
      if ((*(byte *)(uVar25 + 0x1c + iVar27 * 0x28) & 1) == 0) {
        uVar42 = FUN_004b65e0(uVar25 + iVar27 * 0x28);
        if (uVar42 == 0) {
          iVar27 = 0;
        }
        else {
          iVar27 = 1;
        }
      }
      else {
        iVar27 = 2;
        local_d0._0_4_ = (int *)uVar35;
      }
      iVar16 = iVar27 + (int)(int *)local_d0 * 2;
      if (*(char *)(local_e0 + uVar39 * 0x14) == 'E') {
        bVar12 = (&UNK_0056a1cc)[iVar16 + (int)(int *)local_d0];
      }
      else {
        bVar12 = (&UNK_0056a284)[iVar16 + (int)(int *)local_d0];
      }
      uVar35 = (uint)bVar12;
      local_d0 = CONCAT44(iVar27,uVar35);
      piVar36 = (int *)(uVar25 + *(int *)(local_e0 + 0xc + uVar39 * 0x14) * 0x28);
      uVar42 = local_d0;
      puVar29 = local_d4;
      piVar10 = piVar36;
      if (uVar35 == 2) {
        *(ushort *)(piVar36 + 7) = *(ushort *)(piVar36 + 7) & 0xbe01 | 1;
      }
      else {
        piVar36[4] = uVar35;
        piVar36[5] = 0;
        *(ushort *)(piVar36 + 7) = *(ushort *)(piVar36 + 7) & 0xbe04 | 4;
      }
      break;
    case 0x46:
    case 0x47:
      local_d8[0x1e] = local_d8[0x1e] + 1;
      goto LAB_004b3746;
    case 0x48:
LAB_004b3746:
      puVar24 = *(undefined4 **)(local_d8[0x10] + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 4);
      local_d0 = CONCAT44(local_d0._4_4_,puVar24);
      local_c8 = CONCAT44(uVar8,1);
      if (puVar24[0x12] == 0) {
        local_d0 = CONCAT44((int *)*puVar24,puVar24);
        local_d4 = (uint *)FUN_0048fdc0((int *)*puVar24,(undefined4 *)&local_c8);
        uVar25 = (uint)(int *)local_c8;
        *(bool *)((int)(int *)local_d0 + 0x1a) = (int *)local_c8 == (int *)0x0;
        *(undefined1 *)((int)(int *)local_d0 + 0x1d) = 0;
        *(undefined4 *)((int)(int *)local_d0 + 0x50) = 0;
        *(undefined1 *)((int)(int *)local_d0 + 0x19) = 0;
        *(undefined1 *)((int)(int *)local_d0 + 0x1c) = (undefined1)local_c8;
        bVar14 = uVar25 == 0;
      }
      else {
        local_d4 = (uint *)FUN_004b9000(piVar18,(int)puVar24,(uint *)&local_c8);
        *(undefined1 *)((int)(int *)local_d0 + 0x1c) = (undefined1)local_c8;
        bVar14 = (int *)local_c8 == (int *)0x0;
      }
LAB_004b07bb:
      puVar29 = local_d4;
      piVar10 = local_dc;
      uVar42 = local_d0;
      if (!bVar14) {
        iVar27 = *(int *)(local_e0 + 8 + uVar39 * 0x14);
LAB_004b0d04:
        puVar29 = local_d4;
        local_ec = iVar27 - 1;
        piVar10 = local_dc;
        uVar42 = local_d0;
      }
      break;
    case 0x49:
      if ((*(byte *)(local_e4 + 0x1c + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 0x28) & 1) != 0)
      goto LAB_004b0d00;
      break;
    case 0x4a:
      bVar14 = (*(byte *)(local_e4 + 0x1c + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 0x28) & 1) == 0
      ;
      goto LAB_004b0cfe;
    default:
      piVar36 = (int *)(local_e4 + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 0x28);
      piVar19 = (int *)(local_e4 + *(int *)(local_e0 + 0xc + uVar39 * 0x14) * 0x28);
      uVar3 = *(ushort *)(piVar36 + 7);
      local_d0 = CONCAT26(uVar3,(undefined6)local_d0);
      uVar42 = local_d0;
      uVar31 = *(ushort *)(piVar19 + 7);
      local_d0._6_1_ = (byte)uVar3;
      local_c8 = CONCAT62(local_c8._2_6_,uVar31);
      bVar12 = *(byte *)(local_e0 + 3 + uVar39 * 0x14);
      if ((((byte)uVar31 | local_d0._6_1_) & 1) == 0) {
        local_d0._5_3_ = SUB83(uVar42,5);
        local_d0 = CONCAT35(local_d0._5_3_,CONCAT14(bVar12,uVar38)) & 0xffffff67ffffffff;
        if ((bVar12 & 0x67) != 0) {
          FUN_004ae250(piVar36,(char)(local_d0 >> 0x20),(byte)local_f0);
          FUN_004ae250(piVar19,(char)(local_d0 >> 0x20),(byte)local_f0);
          piVar18 = local_e8;
          if ((char)local_e8[0xe] != '\0') goto LAB_004b57a6;
        }
        if ((*(ushort *)(piVar36 + 7) & 0x4000) != 0) {
          FUN_004b6fa0(piVar36);
        }
        if ((*(ushort *)(piVar19 + 7) & 0x4000) != 0) {
          FUN_004b6fa0(piVar19);
        }
        uVar25 = FUN_004a0720((undefined8 *)piVar19,(undefined8 *)piVar36,
                              *(int *)(local_e0 + 0x10 + uVar39 * 0x14));
      }
      else {
        local_d0 = uVar42;
        if (-1 < (char)bVar12) {
          if ((bVar12 & 0x10) != 0) {
            piVar36 = (int *)(local_e4 + *(int *)(local_e0 + 8 + uVar39 * 0x14) * 0x28);
            *(ushort *)(piVar36 + 7) = *(ushort *)(piVar36 + 7) & 0xbe01 | 1;
            piVar18 = piVar33;
            piVar10 = piVar36;
            break;
          }
          bVar14 = (bVar12 & 8) == 0;
          piVar18 = local_e8;
          piVar36 = local_dc;
          goto LAB_004b07bb;
        }
        if ((((uVar3 & 1) == 0) || ((uVar31 & 1) == 0)) || ((uVar31 & 0x100) != 0)) {
          uVar25 = 1;
        }
        else {
          uVar25 = 0;
        }
      }
      switch(*(undefined1 *)(local_e0 + uVar39 * 0x14)) {
      case 0x4b:
        uVar25 = (uint)(uVar25 != 0);
        break;
      case 0x4c:
        uVar25 = (uint)(uVar25 == 0);
        break;
      case 0x4d:
        uVar25 = (uint)(0 < (int)uVar25);
        break;
      case 0x4e:
        uVar25 = (uint)((int)uVar25 < 1);
        break;
      case 0x4f:
        uVar25 = (uint)((int)uVar25 < 0);
        break;
      default:
        uVar25 = (uint)(-1 < (int)uVar25);
      }
      if ((*(byte *)(local_e0 + 3 + uVar39 * 0x14) & 0x10) == 0) {
        if (uVar25 != 0) {
          local_ec = *(int *)(local_e0 + 8 + uVar39 * 0x14) - 1;
        }
      }
      else {
        local_dc = (int *)(local_e4 + *(int *)(local_e0 + 8 + uVar39 * 0x14) * 0x28);
        *(ushort *)(local_dc + 7) = *(ushort *)(local_dc + 7) & 0xbe04 | 4;
        local_dc[4] = uVar25;
        local_dc[5] = 0;
      }
      *(ushort *)(piVar36 + 7) =
           *(ushort *)(piVar36 + 7) ^
           (*(ushort *)(piVar36 + 7) ^ (ushort)(local_d0 >> 0x30)) & 0x1ff;
      *(ushort *)(piVar19 + 7) =
           *(ushort *)(piVar19 + 7) ^ (*(ushort *)(piVar19 + 7) ^ (ushort)local_c8) & 0x1ff;
      puVar29 = local_d4;
      piVar18 = local_e8;
      piVar36 = local_dc;
      piVar10 = local_dc;
      uVar42 = CONCAT44((int)(local_d0 >> 0x20),uVar25);
      break;
    case 0x51:
    case 0x5c:
    case 0x5f:
      if (piVar18[0x38] != 0) goto LAB_004af4ee;
      puVar24 = *(undefined4 **)(local_d8[0x10] + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 4);
      local_d0 = CONCAT44(local_d0._4_4_,puVar24);
      uVar42 = local_d0;
      if (puVar24 != (undefined4 *)0x0) {
        if (puVar24[0x12] == 0) {
          local_d0 = CONCAT44(1,puVar24);
          local_d4 = (uint *)(**(code **)(local_e0 + 0x10 + uVar39 * 0x14))(*puVar24);
        }
        else {
          local_d4 = (uint *)FUN_004b8f40((int)piVar18,(int)puVar24,(uint *)((int)&local_d0 + 4));
        }
        *(undefined1 *)((int)(int *)local_d0 + 0x1c) = local_d0._4_1_;
        *(undefined4 *)((int)(int *)local_d0 + 0x50) = 0;
        if (local_d0._4_4_ == (uint *)0x0) {
          bVar12 = *(byte *)(local_e0 + 3 + uVar39 * 0x14);
          local_ec = *(int *)(local_e0 + 8 + uVar39 * 0x14) - 1;
          if (bVar12 != 0) {
            local_d8[bVar12 + 0x1c] = local_d8[bVar12 + 0x1c] + 1;
          }
        }
        *(undefined1 *)((int)(int *)local_d0 + 0x19) = 0;
        puVar29 = local_d4;
        piVar10 = local_dc;
        uVar42 = local_d0;
      }
      break;
    case 0x52:
    case 0x53:
    case 0x54:
    case 0x55:
      iVar27 = local_e4 + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 0x28;
      iVar16 = local_e4 + *(int *)(local_e0 + 8 + uVar39 * 0x14) * 0x28;
      piVar36 = (int *)(local_e4 + *(int *)(local_e0 + 0xc + uVar39 * 0x14) * 0x28);
      local_dc = piVar36;
      if (((*(byte *)(iVar16 + 0x1c) | *(byte *)(iVar27 + 0x1c)) & 1) == 0) {
        local_d0 = FUN_004b65e0(iVar16);
        local_c0 = FUN_004b65e0(iVar27);
        uVar35 = (uint)(local_c0 >> 0x20);
        uVar25 = (uint)local_c0;
        cVar11 = *(char *)(local_e0 + uVar39 * 0x14);
        local_b8 = (double)CONCAT71(local_b8._1_7_,cVar11);
        if (cVar11 == 'R') {
          uVar39 = (uint)(int *)local_d0 & uVar25;
          local_d0 = CONCAT44((uint)local_d0._4_4_ & uVar35,uVar39);
        }
        else if (cVar11 == 'S') {
          uVar39 = (uint)(int *)local_d0 | uVar25;
          local_d0 = CONCAT44((uint)local_d0._4_4_ | uVar35,uVar39);
        }
        else {
          uVar39 = (uint)(int *)local_d0;
          if (local_c0 != 0) {
            if (uVar35 == 0 || (longlong)local_c0 < 0) {
              if ((longlong)local_c0 < 0) {
                cVar11 = -0x57 - cVar11;
                local_b8 = (double)CONCAT71(local_b8._1_7_,cVar11);
                if (((longlong)local_c0 < -0x100000000) ||
                   ((0x7fffffffffffffff < local_c0 && (uVar25 < 0xffffffc1)))) {
                  local_c0 = 0x40;
                  goto LAB_004b03ac;
                }
                local_c0 = CONCAT44(-(uVar35 + (uVar25 != 0)),-uVar25);
              }
              if ((longlong)local_c0 < 0x40) {
                if (cVar11 == 'T') {
                  local_d0 = local_d0 << (local_c0 & 0xffffffff);
                  local_c8._0_4_ = (int *)local_d0;
                  uVar39 = (uint)(int *)local_c8;
                  local_c8 = local_d0;
                }
                else {
                  local_c8 = local_d0 >> (local_c0 & 0xffffffff);
                  if (((int)local_d0._4_4_ < 1) && ((longlong)local_d0 < 0)) {
                    lVar41 = __allshl(0x40 - (char)local_c0,-1);
                    local_c8 = CONCAT44((uint)local_c8._4_4_ | (uint)((ulonglong)lVar41 >> 0x20),
                                        (uint)(int *)local_c8 | (uint)lVar41);
                  }
                  local_d0 = local_c8;
                  uVar39 = (uint)(int *)local_c8;
                }
                goto LAB_004b049d;
              }
            }
LAB_004b03ac:
            if ((((int)local_d0._4_4_ < 1) && ((longlong)local_d0 < 0)) && (cVar11 != 'T')) {
              local_d0 = 0xffffffffffffffff;
              uVar39 = 0xffffffff;
            }
            else {
              local_d0 = 0;
              uVar39 = 0;
            }
          }
        }
LAB_004b049d:
        local_dc[4] = uVar39;
        local_dc[5] = (int)local_d0._4_4_;
        *(ushort *)(local_dc + 7) = *(ushort *)(local_dc + 7) & 0xbe04 | 4;
        puVar29 = local_d4;
        piVar36 = local_dc;
        piVar10 = local_dc;
        uVar42 = local_d0;
      }
      else {
        FUN_004b78c0((int)piVar36);
        puVar29 = local_d4;
        piVar10 = local_dc;
        uVar42 = local_d0;
      }
      break;
    case 0x56:
    case 0x57:
    case 0x58:
    case 0x59:
    case 0x5a:
      iVar27 = local_e4 + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 0x28;
      FUN_0046dfa0(iVar27);
      iVar16 = uVar25 + *(int *)(local_e0 + 8 + uVar39 * 0x14) * 0x28;
      FUN_0046dfa0(iVar16);
      local_dc = (int *)(local_e4 + *(int *)(local_e0 + 0xc + uVar39 * 0x14) * 0x28);
      uVar3 = *(ushort *)(iVar27 + 0x1c) | *(ushort *)(iVar16 + 0x1c);
      uVar6 = CONCAT24(uVar3,(int *)local_d0);
      local_d0 = (ulonglong)uVar6;
      if ((uVar3 & 1) != 0) goto LAB_004b001a;
      local_d0._1_7_ = (uint7)(uint5)(uVar6 >> 8);
      if ((*(byte *)(iVar27 + 0x1c) & *(byte *)(iVar16 + 0x1c) & 4) == 0) {
        local_d0 = (ulonglong)local_d0._1_7_ << 8;
        goto LAB_004afe6d;
      }
      uVar25 = *(uint *)(iVar27 + 0x10);
      uVar35 = *(uint *)(iVar27 + 0x14);
      local_c8 = *(ulonglong *)(iVar27 + 0x10);
      uVar38 = *(uint *)(iVar16 + 0x10);
      local_f8 = (double)CONCAT44(uVar38,(undefined4)local_f8);
      local_108 = *(undefined4 **)(iVar16 + 0x14);
      local_c0 = *(ulonglong *)(iVar16 + 0x10);
      local_d0 = CONCAT71(local_d0._1_7_,1);
      switch(*(undefined1 *)(local_e0 + uVar39 * 0x14)) {
      case 0x56:
        iVar26 = FUN_0048bce0((uint *)&local_c0,uVar25,uVar35);
        if (iVar26 != 0) goto LAB_004afe6d;
        break;
      case 0x57:
        iVar26 = FUN_004aa9e0((uint *)&local_c0,uVar25,uVar35);
        goto joined_r0x004afda1;
      case 0x58:
        iVar26 = FUN_004a0bf0((uint *)&local_c0,uVar25,uVar35);
joined_r0x004afda1:
        if (iVar26 == 0) break;
LAB_004afe6d:
        fVar40 = FUN_004b8350(iVar27);
        local_b8 = (double)fVar40;
        fVar40 = FUN_004b8350(iVar16);
        local_b0 = (double)fVar40;
        switch(*(undefined1 *)(local_e0 + uVar39 * 0x14)) {
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
          if (local_b8 != 0.0) {
            local_b0 = local_b0 / local_b8;
            break;
          }
          goto LAB_004b001a;
        default:
          uVar42 = FUN_0054a946();
          local_c8 = uVar42;
          local_c0 = FUN_0054a946();
          if (uVar42 == 0) goto LAB_004b001a;
          if (uVar42 == 0xffffffffffffffff) {
            uVar42 = 1;
            local_c8 = 1;
          }
          lVar41 = __allrem((uint)local_c0,(uint)(local_c0 >> 0x20),(uint)uVar42,
                            (uint)(uVar42 >> 0x20));
          local_b0 = (double)lVar41;
        }
        iVar27 = FUN_0049f810();
        piVar36 = local_dc;
        if (iVar27 == 0) {
          *(double *)(local_dc + 2) = local_b0;
          *(ushort *)(local_dc + 7) = *(ushort *)(local_dc + 7) & 0xbe08 | 8;
          puVar29 = local_d4;
          piVar18 = local_e8;
          piVar10 = local_dc;
          uVar42 = local_d0;
          if (((local_d0 & 0x800000000) == 0) && ((char)local_d0 == '\0')) {
            FUN_004b6650((int)local_dc);
            puVar29 = local_d4;
            piVar18 = local_e8;
            piVar10 = local_dc;
            uVar42 = local_d0;
          }
        }
        else {
LAB_004b001a:
          piVar36 = local_dc;
          FUN_004b78c0((int)local_dc);
          puVar29 = local_d4;
          piVar18 = local_e8;
          piVar10 = local_dc;
          uVar42 = local_d0;
        }
        goto LAB_004b0d11;
      case 0x59:
        if (uVar25 != 0 || uVar35 != 0) {
          if ((((uVar25 & uVar35) == 0xffffffff) && (uVar38 == 0)) &&
             (local_108 == (undefined4 *)0x80000000)) goto LAB_004afe6d;
          local_c0 = __alldiv(uVar38,(uint)local_108,uVar25,uVar35);
          break;
        }
        goto LAB_004b001a;
      default:
        if (uVar25 == 0 && uVar35 == 0) goto LAB_004b001a;
        if ((uVar25 & uVar35) == 0xffffffff) {
          uVar25 = 1;
          uVar35 = 0;
          local_c8 = 1;
        }
        local_c0 = __allrem(uVar38,(uint)local_108,uVar25,uVar35);
      }
      local_dc[4] = (int)(int *)local_c0;
      local_dc[5] = (int)local_c0._4_4_;
      *(ushort *)(local_dc + 7) = *(ushort *)(local_dc + 7) & 0xbe04 | 4;
      puVar29 = local_d4;
      piVar18 = local_e8;
      piVar36 = local_dc;
      piVar10 = local_dc;
      uVar42 = local_d0;
      break;
    case 0x5b:
      piVar33 = (int *)(local_e4 + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 0x28);
      piVar19 = (int *)(local_e4 + *(int *)(local_e0 + 8 + uVar39 * 0x14) * 0x28);
      piVar36 = (int *)(local_e4 + *(int *)(local_e0 + 0xc + uVar39 * 0x14) * 0x28);
      local_dc = piVar36;
      if (((*(byte *)(piVar19 + 7) | (byte)*(ushort *)(piVar33 + 7)) & 1) == 0) {
        if ((((((*(ushort *)(piVar33 + 7) & 0x4000) != 0) &&
              (iVar27 = FUN_004b6fa0(piVar33), piVar18 = local_e8, iVar27 != 0)) ||
             (((*(ushort *)(piVar19 + 7) & 0x4000) != 0 &&
              (iVar27 = FUN_004b6fa0(piVar19), piVar18 = local_e8, iVar27 != 0)))) ||
            (((*(byte *)(piVar33 + 7) & 0x12) == 0 &&
             (iVar27 = FUN_004b7cf0(piVar33,local_f0 & 0xff), piVar18 = local_e8, iVar27 != 0)))) ||
           (((*(byte *)(piVar19 + 7) & 0x12) == 0 &&
            (iVar27 = FUN_004b7cf0(piVar19,local_f0 & 0xff), piVar18 = local_e8, iVar27 != 0))))
        goto LAB_004b57a6;
        piVar36 = local_dc;
        uVar39 = piVar33[6] + piVar19[6];
        local_d0 = (ulonglong)(int)uVar39;
        iVar27 = local_e8[0x14] >> 0x1f;
        piVar18 = local_e8;
        if ((iVar27 < (int)uVar39 >> 0x1f) ||
           ((iVar27 <= (int)uVar39 >> 0x1f && ((uint)local_e8[0x14] < uVar39)))) goto LAB_004b5780;
        *(ushort *)(local_dc + 7) = *(ushort *)(local_dc + 7) & 0xbe02 | 2;
        iVar27 = FUN_004b7260(local_dc,uVar39 + 2,(uint)(local_dc == piVar19));
        piVar18 = local_e8;
        if (iVar27 != 0) goto LAB_004b57a6;
        if (piVar36 != piVar19) {
          memcpy((void *)piVar36[1],(void *)piVar19[1],piVar19[6]);
        }
        memcpy((void *)(piVar36[1] + piVar19[6]),(void *)piVar33[1],piVar33[6]);
        *(undefined1 *)((int)(int *)local_d0 + piVar36[1]) = 0;
        *(undefined1 *)(piVar36[1] + 1 + (int)(int *)local_d0) = 0;
        *(ushort *)(piVar36 + 7) = *(ushort *)(piVar36 + 7) | 0x200;
        piVar36[6] = (int)(int *)local_d0;
        *(char *)((int)piVar36 + 0x1f) = (char)local_f0;
        puVar29 = local_d4;
        piVar18 = local_e8;
        piVar36 = local_dc;
        piVar10 = local_dc;
        uVar42 = local_d0;
      }
      else {
        FUN_004b78c0((int)piVar36);
        puVar29 = local_d4;
        piVar18 = local_e8;
        piVar10 = local_dc;
        uVar42 = local_d0;
      }
      break;
    case 0x5d:
      iVar27 = *(int *)(local_e0 + 4 + uVar39 * 0x14);
      piVar36 = (int *)(local_e4 + *(int *)(local_e0 + 8 + uVar39 * 0x14) * 0x28);
      local_dc = piVar36;
      if ((*(byte *)(local_e4 + 0x1c + iVar27 * 0x28) & 1) == 0) {
        uVar42 = FUN_004b65e0(local_e4 + iVar27 * 0x28);
        FUN_004b7860(piVar36,~(uint)uVar42,~(uint)(uVar42 >> 0x20));
        puVar29 = local_d4;
        piVar36 = local_dc;
        piVar10 = local_dc;
        uVar42 = local_d0;
      }
      else {
        FUN_004b78c0((int)piVar36);
        puVar29 = local_d4;
        piVar10 = local_dc;
        uVar42 = local_d0;
      }
      break;
    case 0x5e:
      *(undefined1 *)(local_e0 + uVar39 * 0x14) = 9;
      uVar25 = FUN_004aa9b0(*(char **)(local_e0 + 0x10 + uVar39 * 0x14));
      *(uint *)(local_e0 + 4 + uVar39 * 0x14) = uVar25;
      if ((char)local_f0 != '\x01') {
        local_d4 = (uint *)FUN_004b79e0(piVar36,extraout_EDX,0xffffffff,'\x01',(undefined *)0x0);
        if (local_d4 == (uint *)0x12) goto LAB_004b5780;
        iVar27 = FUN_004aec30(piVar36,local_f0 & 0xff);
        if (iVar27 != 0) goto LAB_004b57a6;
        piVar36[9] = 0;
        *(ushort *)(piVar36 + 7) = *(ushort *)(piVar36 + 7) & 0xfbff | 0x800;
        if (*(char *)(local_e0 + 1 + uVar39 * 0x14) == -1) {
          FUN_00494b00((int)piVar18,*(undefined4 **)(local_e0 + 0x10 + uVar39 * 0x14));
        }
        *(undefined1 *)(local_e0 + 1 + uVar39 * 0x14) = 0xff;
        *(int *)(local_e0 + 0x10 + uVar39 * 0x14) = piVar36[1];
        *(int *)(local_e0 + 4 + uVar39 * 0x14) = piVar36[6];
      }
      if (piVar18[0x14] < *(int *)(local_e0 + 4 + uVar39 * 0x14)) goto LAB_004b5780;
switchD_004af4da_caseD_9:
      *(undefined2 *)(piVar36 + 7) = 0xa02;
      piVar36[1] = *(int *)(local_e0 + 0x10 + uVar39 * 0x14);
      piVar36[6] = *(int *)(local_e0 + 4 + uVar39 * 0x14);
      *(char *)((int)piVar36 + 0x1f) = (char)local_f0;
      puVar29 = local_d4;
      piVar10 = local_dc;
      uVar42 = local_d0;
      break;
    case 0x60:
    case 0x61:
      piVar32 = *(int **)(local_d8[0x10] + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 4);
      puVar34 = (uint *)*piVar32;
      local_d0 = CONCAT44(puVar34,piVar32);
      piVar2 = (int *)(local_e4 + *(int *)(local_e0 + 8 + uVar39 * 0x14) * 0x28);
      piVar18 = piVar33;
      piVar36 = piVar19;
      uVar42 = local_d0;
      if (puVar34 != (uint *)0x0) {
        if ((*(ushort *)(piVar2 + 7) & 0x4000) != 0) {
          local_d4 = (uint *)FUN_004b6fa0(piVar2);
          puVar29 = local_d4;
          piVar18 = local_e8;
          piVar36 = local_dc;
          piVar10 = local_dc;
          uVar42 = local_d0;
          if (local_d4 != (uint *)0x0) break;
          piVar32 = (int *)local_d0;
          puVar34 = local_d0._4_4_;
        }
        piVar18 = local_e8;
        if (piVar32[0x12] == 0) {
          uVar25 = piVar2[6];
          local_c8 = CONCAT44((byte *)piVar2[1],uVar25);
          if ((*(byte *)(local_e0 + 3 + uVar39 * 0x14) & 0x10) == 0) {
            puVar29 = (uint *)0x0;
          }
          else {
            puVar29 = (uint *)piVar32[0x13];
          }
          local_d4 = FUN_0048ffe0(puVar34,(byte *)piVar2[1],uVar25,(int)uVar25 >> 0x1f,&DAT_0055b524
                                  ,0,0,*(int *)(local_e0 + 0xc + uVar39 * 0x14),puVar29);
          *(undefined4 *)((int)(int *)local_d0 + 0x50) = 0;
          puVar29 = local_d4;
          piVar18 = local_e8;
          piVar36 = local_dc;
          piVar10 = local_dc;
          uVar42 = local_d0;
        }
        else {
          local_d4 = (uint *)FUN_004b9360(local_e8,(int)piVar32,(int)piVar2);
          puVar29 = local_d4;
          piVar36 = local_dc;
          piVar10 = local_dc;
          uVar42 = local_d0;
        }
      }
      break;
    case 0x62:
      puVar24 = *(undefined4 **)(local_d8[0x10] + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 4);
      piVar33 = (int *)*puVar24;
      local_d0 = CONCAT44(piVar33,puVar24);
      uVar42 = local_d0;
      if (piVar33 != (int *)0x0) {
        local_c0._0_6_ = CONCAT24(*(undefined2 *)(local_e0 + 0xc + uVar39 * 0x14),puVar24[2]);
        local_c0._0_7_ = (uint7)(uint6)local_c0;
        local_b0 = (double)CONCAT44(local_b0._4_4_,
                                    local_e4 + *(int *)(local_e0 + 8 + uVar39 * 0x14) * 0x28);
        local_d4 = (uint *)FUN_004908e0(piVar33,(int *)&local_c0,0,0,0,(uint *)&local_c8);
        if ((local_d4 == (uint *)0x0) && ((int *)local_c8 == (int *)0x0)) {
          local_d4 = (uint *)FUN_0048f930((uint *)(local_d0 >> 0x20));
        }
        *(undefined4 *)((int)(int *)local_d0 + 0x50) = 0;
        puVar29 = local_d4;
        piVar10 = local_dc;
        uVar42 = local_d0;
      }
      break;
    case 99:
      piVar33 = *(int **)(local_d8[0x10] + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 4);
      iVar27 = *piVar33;
      local_d0 = CONCAT44(piVar33,iVar27);
      *(undefined2 *)(local_dc + 7) = 1;
      piVar36 = piVar19;
      uVar42 = local_d0;
      if (iVar27 != 0) {
        local_d4 = (uint *)FUN_004af1b0(piVar33);
        if (local_d4 != (uint *)0x0) goto LAB_004b572c;
        puVar29 = local_d4;
        piVar36 = local_dc;
        piVar10 = local_dc;
        uVar42 = local_d0;
        if (*(char *)((int)local_d0._4_4_ + 0x1c) == '\0') {
          local_d4 = (uint *)FUN_004b6480(piVar18,(int *)local_d0,(undefined4 *)&local_c8);
          if (local_d4 != (uint *)0x0) goto LAB_004b572c;
          piVar19[4] = (int)(int *)local_c8;
          piVar19[5] = (int)local_c8._4_4_;
          *(undefined2 *)(piVar19 + 7) = 4;
          puVar29 = local_d4;
          piVar36 = piVar19;
          piVar10 = local_dc;
          uVar42 = local_d0;
        }
      }
      break;
    case 100:
    case 0x65:
      piVar33 = *(int **)(local_d8[0x10] + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 4);
      local_d0 = CONCAT44(local_d0._4_4_,piVar33);
      uVar42 = local_d0;
      if (*piVar33 != 0) {
        local_c8._0_6_ = CONCAT24(*(undefined2 *)(local_e0 + 0x10 + uVar39 * 0x14),piVar33[2]);
        local_c8._7_1_ = SUB81(uVar7,7);
        local_c8._0_7_ =
             CONCAT16((*(char *)(local_e0 + 3 + uVar39 * 0x14) != '\0') + '\x02',
                      (undefined6)local_c8);
        local_b8 = (double)CONCAT44(uVar9,local_e4 + *(int *)(local_e0 + 0xc + uVar39 * 0x14) * 0x28
                                   );
        local_d4 = (uint *)FUN_004b63c0(piVar33,(int *)&local_c8,(uint *)((int)&local_d0 + 4));
        if (*(char *)(local_e0 + uVar39 * 0x14) == 'd') {
          iVar27 = -(int)local_d0._4_4_;
        }
        else {
          iVar27 = (int)local_d0._4_4_ + 1;
        }
        local_d0 = CONCAT44(iVar27,(int *)local_d0);
        puVar29 = local_d4;
        piVar10 = local_dc;
        uVar42 = local_d0;
        if (0 < iVar27) {
          iVar27 = *(int *)(local_e0 + 8 + uVar39 * 0x14);
          goto LAB_004b0d04;
        }
      }
      break;
    case 0x66:
      iVar16 = 0;
      local_d0 = local_d0 & 0xffffffff;
      iVar27 = piVar18[1];
      local_c8 = CONCAT44(uVar8,iVar27);
      uVar42 = local_d0;
      while (local_d0 = uVar42, iVar27 != 0) {
        if (((*(int *)(iVar27 + 0x30) == -0x420df25d) &&
            (((byte)*(undefined4 *)(iVar27 + 0x60) & 0xc) < 8)) && (-1 < *(int *)(iVar27 + 0x54))) {
          iVar16 = iVar16 + 1;
          local_d0._0_4_ = (int *)uVar42;
          local_d0 = CONCAT44(iVar16,(int *)local_d0);
        }
        iVar27 = *(int *)(iVar27 + 0x3c);
        local_c8._4_4_ = (int *)(local_c8 >> 0x20);
        local_c8 = CONCAT44(local_c8._4_4_,iVar27);
        uVar42 = local_d0;
      }
      *(undefined2 *)(piVar36 + 7) = 1;
      local_d0._4_4_ = (uint *)(uVar42 >> 0x20);
      if ((int)local_d0._4_4_ < 2) {
        iVar27 = *(int *)(local_e0 + 0xc + uVar39 * 0x14);
        local_c8 = CONCAT44(iVar27,(int *)local_c8);
        local_d4 = (uint *)FUN_0048fb70(*(undefined4 **)(piVar18[4] + 4 + iVar27 * 0x10),
                                        *(char **)(local_e0 + 4 + uVar39 * 0x14),(uint *)&local_d0);
        *(undefined2 *)(piVar36 + 7) = 4;
        piVar36[4] = (int)(int *)local_d0;
        piVar36[5] = (int)(int *)local_d0 >> 0x1f;
        puVar29 = local_d4;
        piVar10 = local_dc;
        uVar42 = local_d0;
        if ((local_d4 == (uint *)0x0) && ((int *)local_d0 != (int *)0x0)) {
          FUN_004a6dc0((int)piVar18,(int)(local_c8 >> 0x20),(int)(int *)local_d0,
                       *(undefined4 *)(local_e0 + 4 + uVar39 * 0x14));
          local_f9 = local_c8._4_1_ + 1;
          puVar29 = local_d4;
          piVar10 = local_dc;
          uVar42 = local_d0;
        }
      }
      else {
        local_d4 = (uint *)0x6;
        *(undefined1 *)(local_d8 + 0x17) = 2;
        puVar29 = (uint *)0x6;
      }
      break;
    case 0x67:
      local_d0 = ZEXT48(local_d0._4_4_) << 0x20;
      piVar33 = (int *)&local_d0;
      if (*(int *)(local_e0 + 0xc + uVar39 * 0x14) == 0) {
        piVar33 = (int *)0x0;
      }
      local_d4 = (uint *)FUN_0048eff0(*(undefined4 **)
                                       (piVar18[4] + 4 +
                                       *(int *)(local_e0 + 8 + uVar39 * 0x14) * 0x10),
                                      *(uint *)(local_e0 + 4 + uVar39 * 0x14),piVar33);
      puVar29 = local_d4;
      piVar10 = local_dc;
      uVar42 = local_d0;
      if (*(int *)(local_e0 + 0xc + uVar39 * 0x14) != 0) {
        local_d8[0x19] = local_d8[0x19] + (int)(int *)local_d0;
        iVar27 = *(int *)(local_e0 + 0xc + uVar39 * 0x14);
        if (0 < iVar27) {
          puVar34 = (uint *)(local_e4 + 0x10 + iVar27 * 0x28);
          uVar39 = *puVar34;
          *puVar34 = *puVar34 + (int)(int *)local_d0;
          piVar33 = (int *)(local_e4 + 0x14 + iVar27 * 0x28);
          *piVar33 = *piVar33 + ((int)(int *)local_d0 >> 0x1f) +
                     (uint)CARRY4(uVar39,(uint)(int *)local_d0);
        }
      }
      break;
    case 0x68:
    case 0x69:
      iVar27 = *(int *)(local_e0 + 4 + uVar39 * 0x14) * 0x10 + piVar18[4];
      local_c8 = CONCAT44(uVar8,iVar27);
      uVar39 = (*(char *)(local_e0 + uVar39 * 0x14) != 'i') + 1;
      local_d0 = (ulonglong)uVar39 << 0x20;
      local_d4 = (uint *)FUN_0048f740(*(undefined4 **)(iVar27 + 4),(undefined4 *)&local_d0,
                                      (byte)uVar39);
      piVar36[4] = (int)(int *)local_d0;
      piVar36[5] = (int)(int *)local_d0 >> 0x1f;
      puVar29 = local_d4;
      piVar10 = local_dc;
      uVar42 = local_d0;
      break;
    case 0x6a:
      iVar27 = *(int *)(local_e0 + 4 + uVar39 * 0x14);
      pcVar23 = "sqlite_temp_master";
      if (iVar27 != 1) {
        pcVar23 = "sqlite_master";
      }
      local_d0 = CONCAT44(pcVar23,iVar27);
      local_c0 = CONCAT44(*(undefined4 *)(local_e0 + 4 + uVar39 * 0x14),local_d8 + 0xd);
      local_c8._4_4_ = piVar18;
      pbVar21 = (byte *)FUN_004a02d0((int)piVar18,
                                     (byte *)
                                     "SELECT name, rootpage, sql FROM \'%q\'.%s WHERE %s ORDER BY rowid"
                                    );
      local_c8 = CONCAT44(local_c8._4_4_,pbVar21);
      if (pbVar21 == (byte *)0x0) {
        local_d4 = (uint *)0x7;
LAB_004b3e54:
        FUN_004a6940((int)piVar18);
      }
      else {
        *(undefined1 *)((int)piVar18 + 0x81) = 1;
        local_b8 = (double)((ulonglong)local_b8 & 0xffffffff00000000);
        local_d4 = (uint *)FUN_00463120((int)piVar18,pbVar21,FUN_0049de90,(int)&local_c8 + 4,
                                        (int *)0x0);
        if (local_d4 == (uint *)0x0) {
          local_d4 = (uint *)local_b8;
        }
        FUN_00494b00((int)piVar18,(int *)local_c8);
        *(undefined1 *)((int)piVar18 + 0x81) = 0;
        if (local_d4 != (uint *)0x0) goto LAB_004b3e54;
      }
      puVar29 = local_d4;
      piVar10 = local_dc;
      uVar42 = local_d0;
      if (local_d4 == (uint *)0x7) goto LAB_004b57a6;
      break;
    case 0x6b:
      local_d4 = (uint *)FUN_0048c830((int)piVar18,*(int *)(local_e0 + 4 + uVar39 * 0x14));
      puVar29 = local_d4;
      piVar10 = local_dc;
      uVar42 = local_d0;
      break;
    case 0x6c:
      FUN_004ab2d0((int)piVar18,*(uint *)(local_e0 + 4 + uVar39 * 0x14),
                   *(byte **)(local_e0 + 0x10 + uVar39 * 0x14));
      puVar29 = local_d4;
      piVar10 = local_dc;
      uVar42 = local_d0;
      break;
    case 0x6d:
      FUN_004ab1f0((int)piVar18,*(uint *)(local_e0 + 4 + uVar39 * 0x14),
                   *(byte **)(local_e0 + 0x10 + uVar39 * 0x14));
      puVar29 = local_d4;
      piVar10 = local_dc;
      uVar42 = local_d0;
      break;
    case 0x6e:
      FUN_004ab380((int)piVar18,*(uint *)(local_e0 + 4 + uVar39 * 0x14),
                   *(byte **)(local_e0 + 0x10 + uVar39 * 0x14));
      puVar29 = local_d4;
      piVar10 = local_dc;
      uVar42 = local_d0;
      break;
    case 0x6f:
      iVar27 = *(int *)(local_e0 + 8 + uVar39 * 0x14);
      local_d0 = CONCAT44(local_d0._4_4_,iVar27);
      puVar24 = FUN_00494b90((int)piVar18,iVar27 * 4 + 4);
      local_d0 = CONCAT44(puVar24,(int *)local_d0);
      if (puVar24 == (undefined4 *)0x0) goto LAB_004b57a6;
      iVar27 = local_e4 + *(int *)(local_e0 + 0xc + uVar39 * 0x14) * 0x28;
      piVar36 = (int *)(local_e4 + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 0x28);
      iVar16 = 0;
      local_c8 = local_c8 & 0xffffffff00000000;
      local_c0._4_4_ = (undefined4 *)iVar27;
      if (0 < (int)(int *)local_d0) {
        do {
          uVar42 = FUN_004b65e0((int)(piVar36 + iVar16 * 10));
          local_d0._4_4_[(int)(int *)local_c8] = (int)uVar42;
          iVar16 = (int)(int *)local_c8 + 1;
          local_c8 = CONCAT44(local_c8._4_4_,iVar16);
          puVar24 = local_d0._4_4_;
        } while (iVar16 < (int)(int *)local_d0);
      }
      puVar24[iVar16] = 0;
      uVar28 = FUN_004901e0(*(undefined4 **)
                             (piVar18[4] + 4 + (uint)*(byte *)(local_e0 + 3 + uVar39 * 0x14) * 0x10)
                            ,(int)local_d0._4_4_,(int)local_d0,*(int *)((int)local_c0._4_4_ + 0x10),
                            (int *)((int)&local_c8 + 4));
      local_c0 = CONCAT44(local_c0._4_4_,uVar28);
      FUN_00494b00((int)piVar18,local_d0._4_4_);
      puVar29 = (uint *)((int)local_c0._4_4_ + 0x10);
      uVar39 = *puVar29;
      *puVar29 = *puVar29 - (int)local_c8._4_4_;
      *(int *)((int)local_c0._4_4_ + 0x14) =
           (*(int *)((int)local_c0._4_4_ + 0x14) - ((int)local_c8._4_4_ >> 0x1f)) -
           (uint)(uVar39 < local_c8._4_4_);
      FUN_004b78c0((int)piVar36);
      if (local_c8._4_4_ != (int *)0x0) {
        if ((int *)local_c0 == (void *)0x0) goto LAB_004b57a6;
        FUN_004b79e0(piVar36,(int *)local_c0,0xffffffff,'\x01',FUN_00466dd0);
      }
      FUN_004aec30(piVar36,local_f0 & 0xff);
      puVar29 = local_d4;
      piVar36 = local_dc;
      piVar10 = local_dc;
      uVar42 = local_d0;
      break;
    case 0x70:
      iVar27 = *(int *)(local_e0 + 4 + uVar39 * 0x14);
      piVar36 = (int *)(local_e4 + iVar27 * 0x28);
      iVar16 = *(int *)(local_e0 + 8 + uVar39 * 0x14);
      if (((*(byte *)(local_e4 + 0x1c + iVar27 * 0x28) & 0x20) == 0) &&
         (FUN_004b7910(piVar36), (*(byte *)(piVar36 + 7) & 0x20) == 0)) goto LAB_004b57a6;
      FUN_004a6ed0((undefined4 *)piVar36[4],*(uint *)(local_e4 + 0x10 + iVar16 * 0x28),
                   *(uint *)(local_e4 + 0x14 + iVar16 * 0x28));
      puVar29 = local_d4;
      piVar36 = local_dc;
      piVar10 = local_dc;
      uVar42 = local_d0;
      break;
    case 0x71:
      if (piVar18[0x38] != 0) goto LAB_004af4ee;
      iVar16 = *(int *)(local_e0 + 4 + uVar39 * 0x14);
      iVar27 = local_e4 + iVar16 * 0x28;
      if (((*(byte *)(local_e4 + 0x1c + iVar16 * 0x28) & 0x20) == 0) ||
         (iVar16 = FUN_004a6f70(*(undefined4 **)(iVar27 + 0x10),(undefined4 *)&local_d0),
         iVar16 == 0)) {
        FUN_004b78c0(iVar27);
        iVar27 = *(int *)(local_e0 + 8 + uVar39 * 0x14);
        piVar36 = local_dc;
        goto LAB_004b0d04;
      }
      FUN_004b7860((int *)(local_e4 + *(int *)(local_e0 + 0xc + uVar39 * 0x14) * 0x28),
                   (int)(int *)local_d0,(int)(local_d0 >> 0x20));
      puVar29 = local_d4;
      piVar36 = local_dc;
      piVar10 = local_dc;
      uVar42 = local_d0;
      break;
    case 0x72:
      piVar33 = (int *)(local_e4 + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 0x28);
      iVar27 = *(int *)(local_e0 + 0xc + uVar39 * 0x14);
      uVar25 = *(uint *)(local_e0 + 0x10 + uVar39 * 0x14);
      local_d0 = CONCAT44(local_d0._4_4_,uVar25);
      if ((*(byte *)(piVar33 + 7) & 0x20) == 0) {
        FUN_004b7910(piVar33);
        piVar18 = local_e8;
        if ((*(byte *)(piVar33 + 7) & 0x20) == 0) goto LAB_004b57a6;
        uVar25 = (uint)(int *)local_d0;
      }
      bVar14 = (int)uVar25 < 0;
      if (uVar25 != 0) {
        if (bVar14) {
          bVar12 = 0xff;
        }
        else {
          bVar12 = (byte)uVar25 & 0xf;
        }
        iVar16 = FUN_004a6fd0((undefined4 *)piVar33[4],bVar12,
                              *(uint *)(local_e4 + 0x10 + iVar27 * 0x28),
                              *(int *)(local_e4 + 0x14 + iVar27 * 0x28));
        local_d0 = CONCAT44(iVar16,(int *)local_d0);
        if (iVar16 != 0) goto LAB_004b4170;
        bVar14 = (int)(int *)local_d0 < 0;
      }
      puVar29 = local_d4;
      piVar18 = local_e8;
      piVar36 = local_dc;
      piVar10 = local_dc;
      uVar42 = local_d0;
      if (!bVar14) {
        FUN_004a6ed0((undefined4 *)piVar33[4],*(uint *)(local_e4 + 0x10 + iVar27 * 0x28),
                     *(uint *)(local_e4 + 0x14 + iVar27 * 0x28));
        puVar29 = local_d4;
        piVar18 = local_e8;
        piVar36 = local_dc;
        piVar10 = local_dc;
        uVar42 = local_d0;
      }
      break;
    case 0x73:
      iVar16 = *(int *)(local_e0 + 0x10 + uVar39 * 0x14);
      local_b8 = (double)CONCAT44(uVar9,iVar16);
      iVar27 = local_e4 + *(int *)(local_e0 + 0xc + uVar39 * 0x14) * 0x28;
      local_c8 = CONCAT44(uVar8,iVar27);
      if (*(char *)(local_e0 + 3 + uVar39 * 0x14) != '\0') {
        uVar39 = local_d8[0x28];
        local_b8 = (double)CONCAT44(*(int *)(iVar16 + 0x14),iVar16);
        local_c0 = CONCAT44(uVar39,(int *)local_c0);
        while (uVar39 != 0) {
          piVar36 = piVar19;
          if (*(int *)(uVar39 + 0x18) == *(int *)(iVar16 + 0x14)) goto LAB_004b0d11;
          uVar39 = *(uint *)(uVar39 + 4);
          local_c0 = CONCAT44(uVar39,(int *)local_c0);
        }
      }
      if ((int)local_d8[0x2a] < piVar18[0x1e]) {
        if ((*(byte *)(iVar27 + 0x1c) & 0x40) == 0) {
          iVar27 = *(int *)(iVar16 + 8) + *(int *)(iVar16 + 0xc);
          sVar22 = *(int *)(iVar16 + 0x10) + (*(int *)(iVar16 + 0xc) + iVar27 * 10) * 4 + 0x48;
          local_d0 = CONCAT44(sVar22,iVar27);
          puVar24 = FUN_00494c20((int)piVar18,sVar22);
          local_c0 = CONCAT44(puVar24,(int *)local_c0);
          if (puVar24 == (undefined4 *)0x0) goto LAB_004b57a6;
          FUN_004b76e0((int *)local_c8);
          *(undefined2 *)((int)(int *)local_c8 + 0x1c) = 0x40;
          *(undefined4 **)((int)(int *)local_c8 + 0x10) = local_c0._4_4_;
          *local_c0._4_4_ = local_d8;
          local_c0._4_4_[0xf] = (int *)local_d0;
          local_c0._4_4_[0x10] = *(undefined4 *)((int)(uint *)local_b8 + 0xc);
          local_c0._4_4_[0xb] = local_ec;
          local_c0._4_4_[3] = local_d8[2];
          local_c0._4_4_[0xd] = local_d8[6];
          local_c0._4_4_[5] = local_d8[0x10];
          *(undefined2 *)(local_c0._4_4_ + 10) = *(undefined2 *)((int)local_d8 + 0x2e);
          local_c0._4_4_[2] = local_d8[1];
          local_c0._4_4_[0xc] = local_d8[7];
          local_c0._4_4_[6] = *(undefined4 *)((int)(uint *)local_b8 + 0x14);
          local_c0._4_4_[4] = local_d8[0x2e];
          local_c0._4_4_[0xe] = local_d8[0x2d];
          iVar27 = local_c0._4_4_[0xf];
          puVar17 = local_c0._4_4_ + 0x12;
          local_c8 = CONCAT44(puVar17,(int *)local_c8);
          local_c0 = CONCAT44(local_c0._4_4_,local_c0._4_4_ + (iVar27 * 5 + 9) * 2);
          uVar42 = local_c8;
          while (puVar24 = local_c0._4_4_, local_c8 = uVar42,
                puVar17 != local_c0._4_4_ + (iVar27 * 5 + 9) * 2) {
            *(undefined2 *)(puVar17 + 7) = 0x80;
            local_c8._4_4_ = (int *)(uVar42 >> 0x20);
            *local_c8._4_4_ = (int)piVar18;
            puVar17 = local_c8._4_4_ + 10;
            local_c8._0_4_ = (int *)uVar42;
            local_c8 = CONCAT44(puVar17,(int *)local_c8);
            uVar42 = local_c8;
          }
        }
        else {
          puVar24 = *(undefined4 **)(iVar27 + 0x10);
          local_c0 = CONCAT44(puVar24,(int *)local_c0);
        }
        local_d8[0x2a] = local_d8[0x2a] + 1;
        puVar24[1] = local_d8[0x28];
        *(uint *)((int)local_c0._4_4_ + 0x20) = local_104;
        *(uint *)((int)local_c0._4_4_ + 0x24) = local_100;
        *(uint *)((int)local_c0._4_4_ + 0x44) = local_d8[0x19];
        local_d8[0x28] = (uint)local_c0._4_4_;
        local_e4 = (int)local_c0._4_4_ + 0x20;
        local_d8[0x19] = 0;
        local_d8[2] = local_e4;
        local_d8[6] = *(uint *)((int)local_c0._4_4_ + 0x3c);
        *(undefined2 *)((int)local_d8 + 0x2e) = *(undefined2 *)((int)local_c0._4_4_ + 0x40);
        uVar39 = local_e4 + (local_d8[6] + 1) * 0x28;
        local_d8[0x10] = uVar39;
        local_e0 = *(uint *)local_b8;
        local_d8[1] = local_e0;
        local_d8[7] = ((uint *)local_b8)[1];
        _Dst = (void *)(uVar39 + (uint)*(ushort *)((int)local_d8 + 0x2e) * 4);
        local_d8[0x2e] = (uint)_Dst;
        sVar22 = ((uint *)local_b8)[4];
        local_d8[0x2d] = sVar22;
        local_ec = 0xffffffff;
        memset(_Dst,0,sVar22);
        puVar29 = local_d4;
        piVar36 = local_dc;
        piVar10 = local_dc;
        uVar42 = local_d0;
      }
      else {
        local_d4 = (uint *)0x1;
        FUN_004a9a30((int *)(local_d8 + 0xd),(int)piVar18,
                     (byte *)"too many levels of trigger recursion");
        puVar29 = (uint *)0x1;
        piVar36 = local_dc;
        piVar10 = local_dc;
        uVar42 = local_d0;
      }
      break;
    case 0x74:
      uVar25 = local_d8[0x28];
      puVar37 = (undefined8 *)
                (*(int *)(uVar25 + 0xc) +
                (*(int *)(*(int *)(uVar25 + 8) + 4 + *(int *)(uVar25 + 0x2c) * 0x14) +
                *(int *)(local_e0 + 4 + uVar39 * 0x14)) * 0x28);
      local_d0 = CONCAT44(puVar37,uVar25);
      FUN_004b7c40(piVar36,puVar37,0x1000);
      puVar29 = local_d4;
      piVar10 = local_dc;
      uVar42 = local_d0;
      break;
    case 0x75:
      uVar25 = *(uint *)(local_e0 + 8 + uVar39 * 0x14);
      if (*(int *)(local_e0 + 4 + uVar39 * 0x14) == 0) {
        puVar34 = local_d8 + 0x22;
        uVar39 = *puVar34;
        *puVar34 = *puVar34 + uVar25;
        local_d8[0x23] = local_d8[0x23] + ((int)uVar25 >> 0x1f) + (uint)CARRY4(uVar39,uVar25);
      }
      else {
        puVar34 = (uint *)(piVar18 + 0x7a);
        uVar39 = *puVar34;
        *puVar34 = *puVar34 + uVar25;
        piVar18[0x7b] = piVar18[0x7b] + ((int)uVar25 >> 0x1f) + (uint)CARRY4(uVar39,uVar25);
      }
      break;
    case 0x76:
      if (*(int *)(local_e0 + 4 + uVar39 * 0x14) == 0) {
        bVar14 = local_d8[0x22] == 0 && local_d8[0x23] == 0;
      }
      else {
        bVar14 = piVar18[0x7a] == 0 && piVar18[0x7b] == 0;
      }
LAB_004b0cfe:
      if (!bVar14) break;
LAB_004b0d00:
      iVar27 = *(int *)(local_e0 + 8 + uVar39 * 0x14);
      goto LAB_004b0d04;
    case 0x77:
      uVar25 = local_d8[0x28];
      if (uVar25 == 0) {
        iVar27 = local_e4 + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 0x28;
      }
      else {
        for (uVar35 = *(uint *)(uVar25 + 4); uVar35 != 0; uVar35 = *(uint *)(uVar35 + 4)) {
          uVar25 = uVar35;
        }
        local_d0 = (ulonglong)uVar25 << 0x20;
        iVar27 = *(int *)(uVar25 + 0xc) + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 0x28;
      }
      local_d0 = CONCAT44(local_d0._4_4_,iVar27);
      FUN_004b7410(iVar27);
      iVar27 = local_e4 + *(int *)(local_e0 + 8 + uVar39 * 0x14) * 0x28;
      FUN_004b7410(iVar27);
      iVar16 = *(int *)(iVar27 + 0x14);
      puVar29 = local_d4;
      piVar36 = local_dc;
      piVar10 = local_dc;
      uVar42 = local_d0;
      if ((*(int *)((int)(int *)local_d0 + 0x14) <= iVar16) &&
         ((*(int *)((int)(int *)local_d0 + 0x14) < iVar16 ||
          (*(uint *)((int)(int *)local_d0 + 0x10) < *(uint *)(iVar27 + 0x10))))) {
        *(uint *)((int)(int *)local_d0 + 0x10) = *(uint *)(iVar27 + 0x10);
        *(int *)((int)(int *)local_d0 + 0x14) = iVar16;
      }
      break;
    case 0x78:
      iVar27 = *(int *)(local_e0 + 4 + uVar39 * 0x14);
      iVar16 = *(int *)(local_e4 + 0x14 + iVar27 * 0x28);
      if (-1 < iVar16) {
        if (iVar16 < 1) {
          uVar25 = *(uint *)(local_e4 + 0x10 + iVar27 * 0x28);
          goto joined_r0x004b4649;
        }
        goto LAB_004b0d00;
      }
      break;
    case 0x79:
      iVar27 = *(int *)(local_e4 + 0x14 + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 0x28);
      if ((iVar27 < 1) && (iVar27 < 0)) goto LAB_004b0d00;
      break;
    case 0x7a:
      iVar27 = *(int *)(local_e0 + 4 + uVar39 * 0x14);
      uVar35 = *(uint *)(local_e0 + 0xc + uVar39 * 0x14);
      puVar34 = (uint *)(local_e4 + 0x10 + iVar27 * 0x28);
      uVar25 = *puVar34;
      *puVar34 = *puVar34 + uVar35;
      piVar18 = (int *)(local_e4 + 0x14 + iVar27 * 0x28);
      *piVar18 = *piVar18 + ((int)uVar35 >> 0x1f) + (uint)CARRY4(uVar25,uVar35);
      piVar18 = piVar33;
      if (*(int *)(local_e4 + 0x10 + iVar27 * 0x28) == 0 &&
          *(int *)(local_e4 + 0x14 + iVar27 * 0x28) == 0) {
        iVar27 = *(int *)(local_e0 + 8 + uVar39 * 0x14);
        piVar18 = local_e8;
        goto LAB_004b0d04;
      }
      break;
    case 0x7b:
      uVar35 = (uint)*(byte *)(local_e0 + 3 + uVar39 * 0x14);
      local_c8._4_4_ = (int *)(local_e4 + *(int *)(local_e0 + 8 + uVar39 * 0x14) * 0x28);
      uVar25 = local_d8[3];
      iVar27 = 0;
      local_80 = CONCAT44(local_80._4_4_,uVar25);
      local_d0 = (ulonglong)uVar35;
      if (uVar35 != 0) {
        while( true ) {
          *(int **)(uVar25 + iVar27 * 4) = local_c8._4_4_;
          FUN_004b7cb0((int)local_c8._4_4_);
          iVar27 = (int)local_d0._4_4_ + 1;
          local_c8._4_4_ = (int *)((int)local_c8._4_4_ + 0x28);
          local_d0 = CONCAT44(iVar27,(int *)local_d0);
          if ((int)(int *)local_d0 <= iVar27) break;
          uVar25 = (uint)local_80;
        }
      }
      uVar35 = local_e0;
      iVar27 = *(int *)(local_e0 + 0x10 + uVar39 * 0x14);
      local_c0 = CONCAT44(local_c0._4_4_,iVar27);
      uVar25 = local_e4 + *(int *)(local_e0 + 0xc + uVar39 * 0x14) * 0x28;
      local_c8 = CONCAT44(local_c8._4_4_,uVar25);
      *(int *)(uVar25 + 0x18) = *(int *)(uVar25 + 0x18) + 1;
      local_a0._0_6_ = CONCAT24(1,(int *)local_a0);
      local_94 = (int *)0x0;
      local_98 = (byte *)0x0;
      local_b8 = (double)ZEXT48(piVar18);
      local_90 = (ulonglong)uVar25;
      local_88 = 0;
      if ((*(byte *)(iVar27 + 3) & 8) != 0) {
        local_90 = CONCAT44(*(undefined4 *)((local_e0 - 4) + uVar39 * 0x14),uVar25);
      }
      (**(code **)(iVar27 + 0x10))();
      if ((uint *)local_88 != (uint *)0x0) {
        FUN_004ae680((int *)&local_b8,1);
        FUN_004a9a30((int *)(local_d8 + 0xd),(int)piVar18,&DAT_0056de50);
        local_d4 = (uint *)local_88;
      }
      if (local_88._4_4_ != 0) {
        iVar27 = *(int *)((uVar35 - 0x10) + uVar39 * 0x14);
        local_d0 = CONCAT44(iVar27,(int *)local_d0);
        if (iVar27 != 0) {
          FUN_004b7860((int *)(local_e4 + iVar27 * 0x28),1,0);
        }
      }
      FUN_004b76e0((int *)&local_b8);
      puVar29 = local_d4;
      piVar36 = local_dc;
      piVar10 = local_dc;
      uVar42 = local_d0;
      break;
    case 0x7c:
      piVar33 = (int *)(local_e4 + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 0x28);
      local_d0 = CONCAT44(local_d0._4_4_,piVar33);
      local_d4 = (uint *)FUN_004b7010(piVar33,*(int *)(local_e0 + 0x10 + uVar39 * 0x14));
      if (local_d4 != (uint *)0x0) {
        FUN_004ae680((int *)local_d0,1);
        FUN_004a9a30((int *)(local_d8 + 0xd),(int)piVar18,&DAT_0056de50);
      }
      FUN_004aec30((int *)local_d0,local_f0 & 0xff);
      bVar14 = FUN_004b7d90((int *)local_d0);
      iVar27 = CONCAT31(extraout_var_01,bVar14);
joined_r0x004b5145:
      puVar29 = local_d4;
      piVar10 = local_dc;
      uVar42 = local_d0;
      if (iVar27 != 0) goto LAB_004b5780;
      break;
    case 0x7d:
      local_d0 = local_d0 & 0xffffffff;
      local_c8 = 0xffffffffffffffff;
      local_d4 = (uint *)FUN_00492280((int)piVar18,*(int *)(local_e0 + 4 + uVar39 * 0x14),
                                      *(int *)(local_e0 + 8 + uVar39 * 0x14),(undefined4 *)&local_c8
                                      ,(undefined4 *)((int)&local_c8 + 4));
      if (local_d4 == (uint *)0x5) {
        local_d4 = (uint *)0x0;
        local_d0 = 0x100000000;
      }
      iVar27 = 0;
      local_d0 = local_d0 & 0xffffffff00000000;
      piVar33 = (int *)(local_e4 + *(int *)(local_e0 + 0xc + uVar39 * 0x14) * 0x28);
      local_c0 = CONCAT44(local_c0._4_4_,piVar33);
      do {
        iVar27 = *(int *)((int)&local_d0 + iVar27 * 4 + 4);
        FUN_004b7860(piVar33,iVar27,iVar27 >> 0x1f);
        iVar27 = (int)(int *)local_d0 + 1;
        piVar33 = (int *)((int)(int *)local_c0 + 0x28);
        local_d0 = CONCAT44(local_d0._4_4_,iVar27);
        local_c0 = CONCAT44(local_c0._4_4_,piVar33);
        puVar29 = local_d4;
        piVar10 = local_dc;
        uVar42 = local_d0;
      } while (iVar27 < 3);
      break;
    case 0x7e:
      uVar25 = *(uint *)(local_e0 + 0xc + uVar39 * 0x14);
      piVar36 = *(int **)(piVar18[4] + 4 + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 0x10);
      local_f8 = (double)CONCAT44(piVar36,(undefined4)local_f8);
      puVar29 = *(uint **)piVar36[1];
      local_d0 = CONCAT44(puVar29,piVar36);
      bVar12 = *(byte *)((int)puVar29 + 5);
      uVar35 = (uint)bVar12;
      if (uVar25 == 0xffffffff) {
        uVar25 = uVar35;
      }
      local_c8 = (ulonglong)CONCAT14(bVar12,uVar25);
      if ((2 < *(byte *)((int)puVar29 + 0xf)) ||
         (((*(int *)puVar29[0x10] != 0 && (-1 < (int)puVar29[0x13])) &&
          ((0 < (int)puVar29[0x13] || (puVar29[0x12] != 0)))))) {
        local_c8 = (ulonglong)CONCAT14(bVar12,uVar35);
        uVar25 = uVar35;
      }
      pcVar23 = "";
      if (*(char *)((int)puVar29 + 0xe) == '\0') {
        pcVar23 = (char *)puVar29[0x24];
      }
      local_c0 = CONCAT44(uVar28,pcVar23);
      if (uVar25 == 5) {
        uVar25 = FUN_004aa9b0(pcVar23);
        if ((uVar25 != 0) && (iVar27 = FUN_004a2c50((int)puVar29), iVar27 != 0)) {
          piVar36 = (int *)local_f8._4_4_;
          uVar25 = extraout_EDX_00;
          goto LAB_004b4abb;
        }
        local_c8 = CONCAT44(local_c8._4_4_,uVar35);
        uVar25 = uVar35;
LAB_004b4a59:
        if (local_d4 != (uint *)0x0) goto LAB_004b4a62;
      }
      else {
LAB_004b4abb:
        piVar18 = local_e8;
        if ((uVar25 == uVar35) || ((uVar35 != 5 && (uVar25 != 5)))) goto LAB_004b4a59;
        if ((*(char *)((int)local_e8 + 0x36) == '\0') || (1 < local_e8[0x21])) {
          local_d4 = (uint *)0x1;
          FUN_004a9a30((int *)(local_d8 + 0xd),(int)local_e8,
                       (byte *)"cannot change %s wal mode from within a transaction");
          puVar29 = (uint *)0x1;
          piVar36 = local_dc;
          piVar10 = local_dc;
          uVar42 = local_d0;
          break;
        }
        if (uVar35 == 5) {
          local_d4 = (uint *)FUN_004a18e0((int *)puVar29);
          if (local_d4 == (uint *)0x0) {
            FUN_004a26f0(local_d0._4_4_,(uint)local_c8);
            piVar36 = (int *)local_d0;
            uVar25 = (uint)(int *)local_c8;
LAB_004b4b68:
            local_d4 = (uint *)FUN_00491d30(piVar36,(uVar25 == 5) + 1);
            uVar25 = (uint)(int *)local_c8;
            uVar35 = (uint)local_c8._4_4_;
            puVar29 = local_d0._4_4_;
            goto LAB_004b4a59;
          }
          uVar35 = (uint)local_c8._4_4_;
          puVar29 = local_d0._4_4_;
        }
        else {
          if (uVar35 == 4) {
            FUN_004a26f0(puVar29,2);
            piVar36 = (int *)local_d0;
            uVar25 = (uint)(int *)local_c8;
            uVar35 = (uint)local_c8._4_4_;
            puVar29 = local_d0._4_4_;
          }
          if (local_d4 == (uint *)0x0) goto LAB_004b4b68;
        }
LAB_004b4a62:
        uVar25 = uVar35;
        local_c8 = CONCAT44(local_c8._4_4_,uVar25);
      }
      uVar13 = FUN_004a26f0(puVar29,uVar25);
      iVar27 = CONCAT31(extraout_var_02,uVar13);
      local_c8 = CONCAT44(local_c8._4_4_,iVar27);
      piVar36 = (int *)(local_e4 + *(int *)(local_e0 + 8 + uVar39 * 0x14) * 0x28);
      *(undefined2 *)(piVar36 + 7) = 0xa02;
      if (iVar27 == 6) {
        pcVar23 = (char *)0x0;
      }
      else {
        pcVar23 = (&PTR_s_delete_0056a9c4)[iVar27];
      }
      piVar36[1] = (int)pcVar23;
      local_dc = piVar36;
      uVar39 = FUN_004aa9b0(pcVar23);
      piVar36[6] = uVar39;
      *(undefined1 *)((int)piVar36 + 0x1f) = 1;
      FUN_004aec30(piVar36,local_f0 & 0xff);
      puVar29 = local_d4;
      piVar18 = local_e8;
      piVar36 = local_dc;
      piVar10 = local_dc;
      uVar42 = local_d0;
      break;
    case 0x7f:
      local_d4 = (uint *)FUN_004a74f0((int *)(local_d8 + 0xd),(int)piVar18);
      puVar29 = local_d4;
      piVar10 = local_dc;
      uVar42 = local_d0;
      break;
    case 0x80:
      puVar24 = *(undefined4 **)(piVar18[4] + 4 + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 0x10);
      local_d0 = CONCAT44(local_d0._4_4_,puVar24);
      local_d4 = (uint *)FUN_0048ff20(puVar24);
      puVar29 = local_d4;
      piVar10 = local_dc;
      uVar42 = local_d0;
      if (local_d4 == (uint *)0x65) {
        local_d4 = (uint *)0x0;
        puVar29 = (uint *)0x0;
        local_ec = *(int *)(local_e0 + 8 + uVar39 * 0x14) - 1;
      }
      break;
    case 0x81:
      if (*(int *)(local_e0 + 4 + uVar39 * 0x14) == 0) {
        FUN_00496370((int)piVar18);
        puVar29 = local_d4;
        piVar10 = local_dc;
        uVar42 = local_d0;
      }
      else {
        local_d8[0x18] = local_d8[0x18] | 0x20;
      }
      break;
    case 0x82:
      *(undefined2 *)(piVar36 + 7) = 8;
      *(undefined8 *)(piVar36 + 2) = **(undefined8 **)(local_e0 + 0x10 + uVar39 * 0x14);
      break;
    case 0x83:
      cVar11 = *(char *)(local_e0 + 0xc + uVar39 * 0x14);
      local_118 = CONCAT31(local_118._1_3_,cVar11);
      if (((cVar11 != '\0') || ((piVar18[6] & 0x800U) == 0)) &&
         (local_d4 = (uint *)FUN_00490810(*(undefined8 **)
                                           (piVar18[4] + 4 +
                                           *(int *)(local_e0 + 4 + uVar39 * 0x14) * 0x10),
                                          *(int *)(local_e0 + 8 + uVar39 * 0x14),cVar11),
         puVar29 = local_d4, piVar10 = local_dc, uVar42 = local_d0, (char)local_d4 == '\x06')) {
        FUN_004a9a30((int *)(local_d8 + 0xd),(int)piVar18,(byte *)"database table is locked: %s");
        puVar29 = local_d4;
        piVar10 = local_dc;
        uVar42 = local_d0;
      }
      break;
    case 0x84:
      iVar27 = *(int *)(local_e0 + 0x10 + uVar39 * 0x14);
      local_d0 = CONCAT44(local_d0._4_4_,iVar27);
      local_d4 = (uint *)FUN_004b96f0((int)piVar18,iVar27);
      puVar29 = local_d4;
      piVar10 = local_dc;
      uVar42 = local_d0;
      if ((int *)local_d0 != (int *)0x0) {
        FUN_0047e200((int *)local_d8,*(int *)((int)(int *)local_d0 + 8));
        puVar29 = local_d4;
        piVar10 = local_dc;
        uVar42 = local_d0;
      }
      break;
    case 0x85:
      local_d4 = (uint *)FUN_004b9980((int)piVar18,*(int *)(local_e0 + 4 + uVar39 * 0x14),
                                      *(byte **)(local_e0 + 0x10 + uVar39 * 0x14),local_d8 + 0xd);
      puVar29 = local_d4;
      piVar10 = local_dc;
      uVar42 = local_d0;
      break;
    case 0x86:
      local_d8[0x18] = local_d8[0x18] & 0xfffffffb | 8;
      local_d4 = (uint *)FUN_004b9aa0((int)piVar18,*(int *)(local_e0 + 4 + uVar39 * 0x14),
                                      *(byte **)(local_e0 + 0x10 + uVar39 * 0x14));
      local_d8[0x18] = local_d8[0x18] & 0xfffffff3;
      puVar29 = local_d4;
      piVar10 = local_dc;
      uVar42 = local_d0;
      break;
    case 0x87:
      local_d0 = 0;
      piVar33 = *(int **)(*(int *)(local_e0 + 0x10 + uVar39 * 0x14) + 8);
      local_c8 = CONCAT44(*piVar33,piVar33);
      local_d4 = (uint *)(**(code **)(*piVar33 + 0x18))(piVar33);
      FUN_0047e200((int *)local_d8,(int)local_c8);
      puVar29 = local_d4;
      piVar10 = local_dc;
      uVar42 = local_d0;
      if (local_d4 == (uint *)0x0) {
        *local_d0._4_4_ = (uint)(int *)local_c8;
        puVar24 = FUN_0046c260((int *)local_d8,*(int *)(local_e0 + 4 + uVar39 * 0x14),0,0xffffffff,0
                              );
        local_d0 = CONCAT44(local_d0._4_4_,puVar24);
        if (puVar24 == (undefined4 *)0x0) {
          *(undefined1 *)(piVar18 + 0xe) = 1;
          (**(code **)((int)local_c8._4_4_ + 0x1c))();
          puVar29 = local_d4;
          piVar10 = local_dc;
          uVar42 = local_d0;
        }
        else {
          puVar24[9] = local_d0._4_4_;
          puVar24[10] = *(undefined4 *)*local_d0._4_4_;
          puVar29 = local_d4;
          piVar10 = local_dc;
          uVar42 = local_d0;
        }
      }
      break;
    case 0x88:
      iVar27 = local_e4 + *(int *)(local_e0 + 0xc + uVar39 * 0x14) * 0x28;
      iVar16 = *(int *)(local_d8[0x10] + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 4);
      local_108 = *(undefined4 **)(iVar16 + 0x24);
      local_c0 = CONCAT44(local_108,iVar27 + 0x28U);
      local_b8 = (double)CONCAT44(iVar16,(uint *)*local_108);
      uVar25 = *(uint *)*local_108;
      local_c8 = CONCAT44(iVar27,uVar25);
      uVar35 = *(uint *)(iVar27 + 0x38);
      local_f8 = (double)CONCAT44(*(undefined4 *)(iVar27 + 0x10),(undefined4)local_f8);
      local_d0 = CONCAT44(*(undefined4 *)(iVar27 + 0x10),uVar35);
      iVar16 = 0;
      local_a8 = local_d8[3];
      local_b0 = 0.0;
      uVar38 = iVar27 + 0x28U;
      local_d4 = (uint *)uVar25;
      if (0 < (int)uVar35) {
        while( true ) {
          *(uint *)(local_a8 + iVar16 * 4) = uVar38 + (iVar16 + 1) * 0x28;
          FUN_004b7cb0(*(int *)(local_a8 + local_b0._4_4_ * 4));
          iVar16 = local_b0._4_4_ + 1;
          local_b0 = (double)CONCAT44(iVar16,(int *)local_b0);
          if ((int)(int *)local_d0 <= iVar16) break;
          uVar38 = (uint)(int *)local_c0;
        }
        local_f8 = (double)CONCAT44(local_d0._4_4_,(undefined4)local_f8);
        local_108 = local_c0._4_4_;
        uVar35 = (uint)(int *)local_d0;
        uVar25 = (uint)(int *)local_c8;
      }
      uVar38 = local_e0;
      local_d8[0x18] = local_d8[0x18] & 0xfffffff7 | 4;
      local_d4 = (uint *)(**(code **)(uVar25 + 0x20))
                                   (local_108,local_f8._4_4_,
                                    *(undefined4 *)(local_e0 + 0x10 + uVar39 * 0x14),uVar35);
      local_d8[0x18] = local_d8[0x18] & 0xfffffff3;
      FUN_0047e200((int *)local_d8,(int)(uint *)local_b8);
      if (local_d4 == (uint *)0x0) {
        iVar27 = (**(code **)((int)(int *)local_c8 + 0x28))();
        local_b0 = (double)CONCAT44(local_b0._4_4_,iVar27);
      }
      else {
        iVar27 = (int)(int *)local_b0;
      }
      if (iVar27 != 0) {
        local_ec = *(int *)(uVar38 + 8 + uVar39 * 0x14) - 1;
      }
      *(undefined1 *)((int)local_b8._4_4_ + 0x1c) = 0;
      puVar29 = local_d4;
      piVar18 = local_e8;
      piVar36 = local_dc;
      piVar10 = local_dc;
      uVar42 = local_d0;
      break;
    case 0x89:
      iVar16 = *(int *)(local_d8[0x10] + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 4);
      iVar27 = local_e4 + *(int *)(local_e0 + 0xc + uVar39 * 0x14) * 0x28;
      local_c8 = CONCAT44(uVar8,iVar27);
      if (*(char *)(iVar16 + 0x1c) == '\0') {
        local_d0 = CONCAT44(*(undefined4 *)**(undefined4 **)(iVar16 + 0x24),
                            (undefined4 *)**(undefined4 **)(iVar16 + 0x24));
        memset(&local_c0,0,0x40);
        FUN_004b7500((int *)&local_b8,(undefined8 *)(int *)local_c8);
        local_a0 = local_a0 & 0xffffbe01ffffffff | 0x100000000;
        local_d4 = (uint *)(**(code **)((int)local_d0._4_4_ + 0x2c))
                                     (*(undefined4 *)(iVar16 + 0x24),&local_c0,
                                      *(undefined4 *)(local_e0 + 8 + uVar39 * 0x14));
        FUN_0047e200((int *)local_d8,(int)(int *)local_d0);
        if ((uint *)local_88 != (uint *)0x0) {
          local_d4 = (uint *)local_88;
        }
        FUN_004aec30((int *)&local_b8,local_f0 & 0xff);
        FUN_004b7500((int *)local_c8,&local_b8);
        bVar14 = FUN_004b7d90((int *)local_c8);
        iVar27 = CONCAT31(extraout_var_03,bVar14);
        piVar36 = local_dc;
        goto joined_r0x004b5145;
      }
      FUN_004b78c0(iVar27);
      puVar29 = local_d4;
      piVar36 = local_dc;
      piVar10 = local_dc;
      uVar42 = local_d0;
      break;
    case 0x8a:
      uVar25 = *(uint *)(local_d8[0x10] + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 4);
      local_c8 = (ulonglong)uVar25 << 0x20;
      if (*(char *)(uVar25 + 0x1c) == '\0') {
        iVar27 = *(int *)**(undefined4 **)(uVar25 + 0x24);
        local_d0 = CONCAT44(iVar27,(int *)**(undefined4 **)(uVar25 + 0x24));
        local_d8[0x18] = local_d8[0x18] & 0xfffffff7 | 4;
        local_d4 = (uint *)(**(code **)(iVar27 + 0x24))();
        puVar34[0x18] = puVar34[0x18] & 0xfffffff3;
        FUN_0047e200((int *)puVar34,(int)(int *)local_d0);
        piVar18 = local_e8;
        if (local_d4 == (uint *)0x0) {
          uVar25 = (**(code **)((int)local_d0._4_4_ + 0x28))();
          local_c8 = CONCAT44(local_c8._4_4_,uVar25);
        }
        else {
          uVar25 = (uint)(int *)local_c8;
        }
        puVar29 = local_d4;
        piVar10 = local_dc;
        uVar42 = local_d0;
        if (uVar25 == 0) {
          iVar27 = *(int *)(local_e0 + 8 + uVar39 * 0x14);
          goto LAB_004b0d04;
        }
      }
      break;
    case 0x8b:
      piVar33 = (int *)(local_e4 + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 0x28);
      local_d0 = CONCAT44(piVar33,*(undefined4 *)(*(int *)(local_e0 + 0x10 + uVar39 * 0x14) + 8));
      local_d4 = (uint *)FUN_004aec30(piVar33,1);
      puVar29 = local_d4;
      piVar10 = local_dc;
      uVar42 = local_d0;
      if (local_d4 == (uint *)0x0) {
        local_d4 = (uint *)(**(code **)(*(int *)local_d0 + 0x4c))((int *)local_d0);
        FUN_0047e200((int *)local_d8,(int)local_d0);
        local_d8[0x18] = local_d8[0x18] & 0xffffffdf;
        puVar29 = local_d4;
        piVar10 = local_dc;
        uVar42 = local_d0;
      }
      break;
    case 0x8c:
      piVar33 = *(int **)(*(int *)(local_e0 + 0x10 + uVar39 * 0x14) + 8);
      iVar27 = *piVar33;
      local_d0 = CONCAT44(iVar27,piVar33);
      uVar25 = *(uint *)(local_e0 + 8 + uVar39 * 0x14);
      local_c8 = CONCAT44(uVar8,uVar25);
      uVar42 = local_d0;
      if (*(int *)(iVar27 + 0x34) != 0) {
        iVar16 = piVar18[0xf];
        local_c8 = (ulonglong)uVar25;
        iVar27 = local_e4 + *(int *)(local_e0 + 0xc + uVar39 * 0x14) * 0x28;
        local_b8 = (double)CONCAT44(iVar27,local_d8[3]);
        if (0 < (int)uVar25) {
          do {
            FUN_004b7cb0(iVar27);
            *(byte **)((int)(uint *)local_b8 + (int)local_c8._4_4_ * 4) = local_b8._4_4_;
            iVar26 = (int)local_c8._4_4_ + 1;
            iVar27 = (int)local_b8._4_4_ + 0x28;
            local_b8 = (double)CONCAT44(iVar27,(uint *)local_b8);
            local_c8 = CONCAT44(iVar26,(int *)local_c8);
          } while (iVar26 < (int)(int *)local_c8);
        }
        piVar36 = local_e8;
        *(undefined1 *)(local_e8 + 0xf) = *(undefined1 *)(uVar35 + 3 + uVar39 * 0x14);
        local_d4 = (uint *)(**(code **)((int)local_d0._4_4_ + 0x34))
                                     ((int *)local_d0,(int)local_c8,(uint *)local_b8);
        puVar34 = local_d8;
        *(char *)(piVar36 + 0xf) = (char)iVar16;
        FUN_0047e200((int *)local_d8,(int)(int *)local_d0);
        piVar18 = local_e8;
        piVar36 = local_dc;
        uVar42 = local_d0;
        puVar29 = local_d4;
        piVar10 = local_dc;
        if (local_d4 == (uint *)0x0) {
          if (*(int *)(local_e0 + 4 + uVar39 * 0x14) == 0) {
LAB_004b5458:
            puVar34[0x19] = puVar34[0x19] + 1;
          }
          else {
            local_100 = (uint)local_c0._4_4_;
            local_104 = (uint)(int *)local_c0;
            local_e8[8] = (int)(int *)local_c0;
            local_e8[9] = (int)local_c0._4_4_;
            puVar34[0x19] = puVar34[0x19] + 1;
          }
        }
        else {
          if ((local_d4 != (uint *)0x13) ||
             (*(char *)(*(int *)(local_e0 + 0x10 + uVar39 * 0x14) + 0x10) == '\0'))
          goto LAB_004b5458;
          cVar11 = *(char *)(local_e0 + 3 + uVar39 * 0x14);
          if (cVar11 == '\x04') {
            local_d4 = (uint *)0x0;
            puVar29 = (uint *)0x0;
          }
          else if (cVar11 == '\x05') {
            *(undefined1 *)(puVar34 + 0x17) = 2;
          }
          else {
            *(char *)(puVar34 + 0x17) = cVar11;
          }
        }
      }
      break;
    case 0x8d:
      piVar33 = (int *)(local_e4 + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 0x28);
      uVar3 = *(ushort *)(piVar33 + 7);
      piVar36 = piVar19;
      if ((uVar3 & 1) == 0) {
        *(ushort *)(piVar33 + 7) = uVar3 >> 3 & 2 | uVar3;
        if (((uVar3 >> 3 & 2) == 0 && (uVar3 & 2) == 0) && ((uVar3 & 0xc) != 0)) {
          FUN_004b7cf0(piVar33,local_f0 & 0xff);
        }
        *(ushort *)(piVar33 + 7) = *(ushort *)(piVar33 + 7) & 0xfff3;
        if ((*(ushort *)(piVar33 + 7) & 0x4000) == 0) {
          *(ushort *)(piVar33 + 7) = *(ushort *)(piVar33 + 7) & 0xbfe3;
          local_d4 = (uint *)0x0;
          puVar29 = local_d4;
          piVar36 = local_dc;
          piVar10 = local_dc;
          uVar42 = local_d0;
        }
        else {
          local_d4 = (uint *)FUN_004b6fa0(piVar33);
          *(ushort *)(piVar33 + 7) = *(ushort *)(piVar33 + 7) & 0xbfe3;
          puVar29 = local_d4;
          piVar36 = local_dc;
          piVar10 = local_dc;
          uVar42 = local_d0;
        }
      }
      break;
    case 0x8e:
      piVar33 = (int *)(local_e4 + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 0x28);
      uVar3 = *(ushort *)(piVar33 + 7);
      piVar36 = piVar19;
      if ((uVar3 & 1) == 0) {
        if ((uVar3 & 0x10) == 0) {
          if (((uVar3 & 2) == 0) && ((uVar3 & 0xc) != 0)) {
            FUN_004b7cf0(piVar33,local_f0 & 0xff);
          }
          *(ushort *)(piVar33 + 7) = *(ushort *)(piVar33 + 7) & 0xbe10 | 0x10;
          puVar29 = local_d4;
          piVar36 = local_dc;
          piVar10 = local_dc;
          uVar42 = local_d0;
        }
        else {
          *(ushort *)(piVar33 + 7) = uVar3 & 0xfe10;
        }
      }
      break;
    case 0x8f:
      FUN_004b75f0(local_e4 + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 0x28);
      puVar29 = local_d4;
      piVar10 = local_dc;
      uVar42 = local_d0;
      break;
    case 0x90:
      iVar27 = *(int *)(local_e0 + 4 + uVar39 * 0x14);
      if ((*(byte *)(local_e4 + 0x1c + iVar27 * 0x28) & 1) == 0) {
        FUN_004b7410(local_e4 + iVar27 * 0x28);
        puVar29 = local_d4;
        piVar10 = local_dc;
        uVar42 = local_d0;
      }
      break;
    case 0x91:
      iVar27 = *(int *)(local_e0 + 4 + uVar39 * 0x14);
      if ((*(byte *)(local_e4 + 0x1c + iVar27 * 0x28) & 1) == 0) {
        FUN_004b7670(local_e4 + iVar27 * 0x28);
        puVar29 = local_d4;
        piVar10 = local_dc;
        uVar42 = local_d0;
      }
      break;
    case 0x92:
      piVar36[4] = *(int *)(*(int *)(*(int *)(piVar18[4] + 4 +
                                             *(int *)(local_e0 + 4 + uVar39 * 0x14) * 0x10) + 4) +
                           0x2c);
      piVar36[5] = 0;
      break;
    case 0x93:
      puVar24 = *(undefined4 **)(piVar18[4] + 4 + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 0x10);
      uVar39 = *(uint *)(local_e0 + 0xc + uVar39 * 0x14);
      uVar25 = 0;
      if ((uVar39 != 0) && (uVar25 = *(uint *)(puVar24[1] + 0x2c), uVar25 < uVar39)) {
        uVar25 = uVar39;
      }
      iVar27 = FUN_00490880(puVar24,uVar25);
      piVar36[4] = iVar27;
      piVar36[5] = iVar27 >> 0x1f;
      puVar29 = local_d4;
      piVar10 = local_dc;
      uVar42 = local_d0;
      break;
    case 0x94:
      if ((piVar18[0x26] != 0) && ((local_d8[0x18] & 0x400) == 0)) {
        pbVar21 = *(byte **)(local_e0 + 0x10 + uVar39 * 0x14);
        if (pbVar21 == (byte *)0x0) {
          pbVar21 = (byte *)local_d8[0x26];
        }
        local_d0 = CONCAT44(local_d0._4_4_,pbVar21);
        uVar42 = local_d0;
        if (pbVar21 != (byte *)0x0) {
          uVar28 = FUN_004b5b10(local_d8,pbVar21);
          local_d0 = CONCAT44(uVar28,(int *)local_d0);
          (*(code *)piVar18[0x26])(piVar18[0x27]);
          FUN_00494b00((int)piVar18,local_d0._4_4_);
          puVar29 = local_d4;
          piVar10 = local_dc;
          uVar42 = local_d0;
        }
      }
    }
LAB_004b0d11:
    local_d0 = uVar42;
    local_dc = piVar10;
    local_ec = local_ec + 1;
    if (puVar29 != (uint *)0x0) goto LAB_004b57cd;
    goto LAB_004af440;
  }
LAB_004af4ee:
  local_d8[0x16] = 9;
  local_d4 = (uint *)0x9;
  FUN_004a9a30((int *)(local_d8 + 0xd),(int)piVar18,&DAT_0056de50);
  puVar29 = (uint *)0x9;
  goto LAB_004b57cd;
code_r0x004b19a5:
  iVar27 = iVar27 + 1;
  local_b8 = (double)CONCAT44(local_b8._4_4_,iVar27);
  puVar24 = (undefined4 *)puVar24[4];
  local_c0 = CONCAT44(local_c0._4_4_,puVar24);
  pbVar21 = local_f8._4_4_;
  if (puVar24 == (undefined4 *)0x0) goto LAB_004b19bf;
  goto LAB_004b1996;
LAB_004afa70:
  do {
    piVar18 = local_e8;
    if ((*(ushort *)(uVar35 + 0x1c + iVar30 * 0x28) & 0x1000) != 0) {
      iVar30 = FUN_004b7490((int *)(uVar35 + iVar30 * 0x28));
      if (iVar30 != 0) goto LAB_004b57a6;
      iVar30 = (int)local_d0._4_4_;
      uVar35 = (uint)(int *)local_d0;
    }
    FUN_004b7590((int *)(uVar35 + iVar30 * 0x28));
    FUN_004b7cb0((int)(int *)local_d0 + (int)local_d0._4_4_ * 0x28);
    iVar30 = (int)local_d0._4_4_ + 1;
    local_d0 = CONCAT44(iVar30,(int *)local_d0);
    uVar35 = (uint)(int *)local_d0;
  } while (iVar30 < *(int *)(uVar25 + 8 + uVar39 * 0x14));
LAB_004b55f4:
  if ((char)piVar18[0xe] == '\0') {
    local_d8[0x15] = local_ec + 1;
    goto LAB_004b5847;
  }
LAB_004b57a6:
  *(undefined1 *)(piVar18 + 0xe) = 1;
  FUN_004a9a30((int *)(local_d8 + 0xd),(int)piVar18,(byte *)"out of memory");
  puVar29 = (uint *)0x7;
  local_d4 = puVar29;
LAB_004b57cd:
  local_d8[0x16] = (uint)puVar29;
  FUN_004683f0(puVar29,"statement aborts at %d: [%s] %s");
  FUN_004b60e0((int *)local_d8);
  if (local_d4 == (uint *)0xc0a) {
    *(undefined1 *)(piVar18 + 0xe) = 1;
  }
  if ((local_f9 != 0) &&
     (uVar39 = (uint)local_f9, FUN_004a7960(*(int *)(piVar18[4] + 0xc + (uVar39 - 1) * 0x10)),
     uVar39 - 1 != 1)) {
    FUN_004a7960(*(int *)(piVar18[4] + 0x1c));
  }
LAB_004b5847:
  local_e8[8] = local_104;
  local_e8[9] = local_100;
  FUN_004b6750((int *)local_d8);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004b2f2a @ 004b2f2a  kind=lib  attributed-by=lib-string  size=6713 */

/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Removing unreachable block (ram,0x004b467d) */
/* WARNING: Removing unreachable block (ram,0x004b03a7) */

void __fastcall FUN_004b2f2a(undefined4 param_1,int param_2)

{
  ushort *puVar1;
  void *_Dst;
  double dVar2;
  byte bVar3;
  ushort uVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  char cVar9;
  byte bVar10;
  undefined1 uVar11;
  bool bVar12;
  undefined2 uVar13;
  int iVar14;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar15;
  byte *pbVar16;
  int iVar17;
  uint uVar18;
  undefined4 uVar19;
  uint *puVar20;
  uint *puVar21;
  size_t sVar22;
  undefined3 extraout_var_01;
  int iVar23;
  char *pcVar24;
  undefined3 extraout_var_02;
  uint uVar25;
  undefined4 *puVar26;
  undefined3 extraout_var_03;
  undefined4 uVar27;
  int *piVar28;
  ushort uVar29;
  uint extraout_ECX;
  uint uVar30;
  int iVar31;
  int *piVar32;
  int iVar33;
  void *extraout_EDX;
  uint extraout_EDX_00;
  int *unaff_EBX;
  uint unaff_EBP;
  undefined8 *puVar34;
  byte *pbVar35;
  float10 fVar36;
  undefined8 uVar37;
  ulonglong uVar38;
  longlong lVar39;
  ulonglong uVar40;
  undefined4 uStack00000008;
  
LAB_004b2f30:
  while ((iVar31 = *(int *)(unaff_EBP - 0xc0), iVar31 == 0 &&
         (iVar17 = *(int *)(unaff_EBP - 0xbc) + 1, *(int *)(unaff_EBP - 0xbc) = iVar17, iVar17 < 100
         ))) {
    FUN_00466fa0(8,(undefined1 *)(unaff_EBP - 0xcc));
    uVar18 = *(uint *)(unaff_EBP - 0xcc);
    if (*(int *)(unaff_EBP - 0xbc) < 5) {
      uVar18 = uVar18 & 0xffffff;
      uVar30 = 0;
    }
    else {
      uVar30 = *(uint *)(unaff_EBP - 200) & 0x3fffffff;
    }
    iVar31 = uVar30 + (0xfffffffe < uVar18);
    *(uint *)(unaff_EBP - 0xcc) = uVar18 + 1;
    puVar26 = *(undefined4 **)(unaff_EBP - 0xc4);
    *(int *)(unaff_EBP - 200) = iVar31;
    uVar18 = FUN_004908e0((int *)*puVar26,(int *)0x0,uVar18 + 1,iVar31,0,(uint *)(unaff_EBP - 0xc0))
    ;
    *(uint *)(unaff_EBP - 0xd0) = uVar18;
    param_2 = 0;
    if (uVar18 != 0) {
LAB_004b2fd2:
      piVar28 = *(int **)(unaff_EBP - 0xc4);
LAB_004b2fd8:
      *(undefined1 *)((int)piVar28 + 0x19) = 0;
      *(undefined1 *)(*(int *)(unaff_EBP - 0xc4) + 0x1d) = 0;
      *(undefined4 *)(*(int *)(unaff_EBP - 0xc4) + 0x50) = 0;
LAB_004b2ff3:
      piVar28 = *(int **)(unaff_EBP - 0xd8);
      piVar28[4] = *(int *)(unaff_EBP - 0xcc);
      piVar28[5] = *(int *)(unaff_EBP - 200);
LAB_004b0d0b:
      uVar18 = *(uint *)(unaff_EBP - 0xd0);
LAB_004b0d11:
      *(int *)(unaff_EBP - 0xe8) = *(int *)(unaff_EBP - 0xe8) + 1;
      if (uVar18 != 0) goto LAB_004b57cd;
      iVar31 = *(int *)(unaff_EBP - 0xe8);
      if ((char)unaff_EBX[0xe] != '\0') goto LAB_004b57a6;
      if (*(int *)(unaff_EBP - 0x11c) != 0) {
        iVar17 = *(int *)(unaff_EBP - 0x110);
        if (unaff_EBX[0x47] == iVar17) {
          iVar14 = (*(code *)unaff_EBX[0x45])();
          iVar17 = 0;
          if (iVar14 != 0) {
            uVar18 = 9;
            goto LAB_004b57c7;
          }
        }
        *(int *)(unaff_EBP - 0x110) = iVar17 + 1;
      }
      iVar17 = *(int *)(unaff_EBP - 0xdc);
      if ((*(byte *)(iVar17 + 2 + iVar31 * 0x14) & 2) != 0) {
        piVar28 = (int *)(*(int *)(unaff_EBP - 0xe0) + *(int *)(iVar17 + 8 + iVar31 * 0x14) * 0x28);
        *(int **)(unaff_EBP - 0xd8) = piVar28;
        if ((*(ushort *)(piVar28 + 7) & 0x2460) != 0) {
          FUN_004b7720(piVar28);
          iVar17 = *(int *)(unaff_EBP - 0xdc);
        }
        *(undefined2 *)(piVar28 + 7) = 4;
      }
      switch(*(undefined1 *)(iVar17 + iVar31 * 0x14)) {
      case 1:
        if (unaff_EBX[0x38] == 0) break;
        goto LAB_004af4ee;
      case 2:
        iVar17 = *(int *)(iVar17 + 4 + iVar31 * 0x14);
        iVar14 = *(int *)(unaff_EBP - 0xe0);
        *(undefined2 *)(*(int *)(unaff_EBP - 0xe0) + 0x1c + iVar17 * 0x28) = 4;
        iVar23 = *(int *)(unaff_EBP - 0xe8);
        *(int *)(iVar14 + 0x10 + iVar17 * 0x28) = iVar23;
        *(int *)(iVar14 + 0x14 + iVar17 * 0x28) = iVar23 >> 0x1f;
        goto LAB_004af55f;
      case 3:
        iVar31 = *(int *)(*(int *)(unaff_EBP - 0xe0) + 0x10 +
                         *(int *)(iVar17 + 4 + iVar31 * 0x14) * 0x28);
        goto LAB_004b0d05;
      case 4:
        iVar31 = *(int *)(iVar17 + 4 + iVar31 * 0x14);
        iVar17 = *(int *)(unaff_EBP - 0xe0);
        *(undefined2 *)(iVar17 + 0x1c + iVar31 * 0x28) = 4;
        *(undefined4 *)(unaff_EBP - 0xcc) = *(undefined4 *)(iVar17 + 0x10 + iVar31 * 0x28);
        iVar14 = *(int *)(unaff_EBP - 0xe8);
        *(int *)(iVar17 + 0x10 + iVar31 * 0x28) = iVar14;
        *(int *)(iVar17 + 0x14 + iVar31 * 0x28) = iVar14 >> 0x1f;
        iVar31 = *(int *)(unaff_EBP - 0xcc);
        goto LAB_004b0d05;
      case 5:
        if ((*(byte *)(*(int *)(unaff_EBP - 0xe0) + 0x1c +
                      *(int *)(iVar17 + 0xc + iVar31 * 0x14) * 0x28) & 1) != 0)
        goto switchD_004af4da_caseD_6;
        goto LAB_004b0d0b;
      case 6:
switchD_004af4da_caseD_6:
        if ((*(int *)(iVar17 + 4 + iVar31 * 0x14) == 0) &&
           (piVar32 = *(int **)(*(int *)(unaff_EBP - 0xd4) + 0xa0), piVar32 != (int *)0x0)) {
          iVar17 = piVar32[1];
          iVar14 = *(int *)(unaff_EBP - 0xd4);
          *(int *)(iVar14 + 0xa8) = *(int *)(iVar14 + 0xa8) + -1;
          *(int *)(iVar14 + 0xa0) = iVar17;
          iVar17 = *(int *)(iVar14 + 100);
          unaff_EBX[0x13] = unaff_EBX[0x13] + iVar17;
          unaff_EBX[0x12] = iVar17;
          iVar17 = FUN_004b5f90(piVar32);
          *(int *)(unaff_EBP - 0xe8) = iVar17;
          *(int *)(unaff_EBP - 0x100) = unaff_EBX[8];
          *(int *)(unaff_EBP - 0xfc) = unaff_EBX[9];
          if (*(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar31 * 0x14) == 4) {
            *(int *)(unaff_EBP - 0xe8) =
                 *(int *)(*(int *)(*(int *)(unaff_EBP - 0xd4) + 4) + 8 +
                         *(int *)(unaff_EBP - 0xe8) * 0x14) + -1;
          }
          *(undefined4 *)(unaff_EBP - 0xdc) = *(undefined4 *)(*(int *)(unaff_EBP - 0xd4) + 4);
          *(undefined4 *)(unaff_EBP - 0xe0) = *(undefined4 *)(*(int *)(unaff_EBP - 0xd4) + 8);
          goto LAB_004b0d0b;
        }
        piVar28 = *(int **)(unaff_EBP - 0xd4);
        iVar14 = *(int *)(unaff_EBP - 0xe8);
        piVar28[0x16] = *(int *)(iVar17 + 4 + iVar31 * 0x14);
        *(undefined1 *)(piVar28 + 0x17) = *(undefined1 *)(iVar17 + 8 + iVar31 * 0x14);
        piVar28[0x15] = iVar14;
        if (*(int *)(iVar17 + 0x10 + iVar31 * 0x14) == 0) {
          if (piVar28[0x16] != 0) {
            FUN_004683f0(*(undefined4 *)(iVar17 + 4 + iVar31 * 0x14),
                         "constraint failed at %d in [%s]");
            goto LAB_004b55c4;
          }
        }
        else {
          FUN_004a9a30(piVar28 + 0xd,(int)unaff_EBX,&DAT_0056de50);
          FUN_004683f0(*(undefined4 *)(*(int *)(unaff_EBP - 0xdc) + 4 + iVar31 * 0x14),
                       "abort at %d in [%s]: %s");
LAB_004b55c4:
          piVar28 = *(int **)(unaff_EBP - 0xd4);
        }
        iVar31 = FUN_004b60e0(piVar28);
        piVar28 = *(int **)(unaff_EBP - 0xd4);
        if (iVar31 == 5) {
LAB_004b564b:
          piVar28[0x16] = 5;
        }
        goto LAB_004b5847;
      case 7:
        iVar31 = *(int *)(iVar17 + 4 + iVar31 * 0x14);
        piVar28[4] = iVar31;
        piVar28[5] = iVar31 >> 0x1f;
        goto LAB_004b0d0b;
      case 8:
        piVar32 = *(int **)(iVar17 + 0x10 + iVar31 * 0x14);
        piVar28[4] = *piVar32;
        piVar28[5] = piVar32[1];
        goto LAB_004b0d0b;
      case 9:
        goto switchD_004af4da_caseD_9;
      case 10:
        *(int *)(unaff_EBP - 0xcc) =
             *(int *)(iVar17 + 0xc + iVar31 * 0x14) - *(int *)(iVar17 + 8 + iVar31 * 0x14);
        piVar28 = *(int **)(unaff_EBP - 0xd8);
        uVar13 = 1;
        if (*(int *)(iVar17 + 4 + iVar31 * 0x14) != 0) {
          uVar13 = 0x101;
        }
        *(undefined2 *)(unaff_EBP - 200) = uVar13;
        *(undefined2 *)(piVar28 + 7) = uVar13;
        if (0 < *(int *)(unaff_EBP - 0xcc)) goto LAB_004af800;
        goto LAB_004af570;
      case 0xb:
        FUN_004b79e0(piVar28,*(void **)(iVar17 + 0x10 + iVar31 * 0x14),
                     *(size_t *)(iVar17 + 4 + iVar31 * 0x14),'\0',(undefined *)0x0);
        *(undefined1 *)((int)piVar28 + 0x1f) = *(undefined1 *)(unaff_EBP - 0xec);
        goto LAB_004b0d0b;
      case 0xc:
        piVar32 = (int *)(*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x44) +
                         (*(int *)(iVar17 + 4 + iVar31 * 0x14) * 5 + -5) * 8);
        *(int **)(unaff_EBP - 0xcc) = piVar32;
        bVar12 = FUN_004b7d90(piVar32);
        if (CONCAT31(extraout_var,bVar12) != 0) goto LAB_004b5780;
        piVar28 = *(int **)(unaff_EBP - 0xd8);
        FUN_004b7c40(piVar28,(undefined8 *)piVar32,0x800);
        goto LAB_004b0d0b;
      case 0xd:
        iVar14 = *(int *)(unaff_EBP - 0xdc);
        iVar23 = *(int *)(iVar17 + 0xc + iVar31 * 0x14) + 1;
        *(int *)(unaff_EBP - 200) = iVar23;
        iVar17 = *(int *)(iVar14 + 4 + iVar31 * 0x14);
        *(int *)(unaff_EBP - 0xc4) = iVar17;
        iVar31 = *(int *)(iVar14 + 8 + iVar31 * 0x14);
        iVar14 = *(int *)(unaff_EBP - 0xe0);
        *(int *)(unaff_EBP - 0xc0) = iVar31;
        puVar34 = (undefined8 *)(iVar14 + iVar17 * 0x28);
        piVar28 = (int *)(iVar14 + iVar31 * 0x28);
        *(int **)(unaff_EBP - 0xd8) = piVar28;
        if (iVar23 != 0) {
          do {
            *(int *)(unaff_EBP - 200) = iVar23 + -1;
            *(int *)(unaff_EBP - 0xcc) = piVar28[9];
            piVar28[9] = 0;
            FUN_004b7500(piVar28,puVar34);
            *(undefined4 *)((int)puVar34 + 0x24) = *(undefined4 *)(unaff_EBP - 0xcc);
            iVar23 = *(int *)(unaff_EBP - 200);
            puVar34 = puVar34 + 5;
            piVar28 = piVar28 + 10;
          } while (iVar23 != 0);
          *(int **)(unaff_EBP - 0xd8) = piVar28;
        }
        piVar28 = *(int **)(unaff_EBP - 0xd8);
        *(undefined4 *)(unaff_EBP - 200) = 0xffffffff;
        goto LAB_004b0d0b;
      case 0xe:
        iVar14 = *(int *)(unaff_EBP - 0xe0);
        *(undefined4 *)(unaff_EBP - 0xcc) = *(undefined4 *)(iVar17 + 0xc + iVar31 * 0x14);
        puVar34 = (undefined8 *)(iVar14 + *(int *)(iVar17 + 4 + iVar31 * 0x14) * 0x28);
        piVar28 = (int *)(iVar14 + *(int *)(iVar17 + 8 + iVar31 * 0x14) * 0x28);
        goto LAB_004af966;
      case 0xf:
        iVar14 = *(int *)(unaff_EBP - 0xe0);
        piVar28 = (int *)(iVar14 + *(int *)(iVar17 + 8 + iVar31 * 0x14) * 0x28);
        iVar31 = *(int *)(iVar17 + 4 + iVar31 * 0x14);
        *(int **)(unaff_EBP - 0xd8) = piVar28;
        FUN_004b7c40(piVar28,(undefined8 *)(iVar14 + iVar31 * 0x28),0x1000);
        goto LAB_004b0d0b;
      case 0x10:
        uVar18 = FUN_004aeea0(*(int **)(unaff_EBP - 0xd4),0);
        *(uint *)(unaff_EBP - 0xd0) = uVar18;
        if (uVar18 == 0) {
          uVar18 = FUN_004af050(*(int **)(unaff_EBP - 0xd4),1);
          *(uint *)(unaff_EBP - 0xd0) = uVar18;
          if (uVar18 == 0) {
            iVar14 = *(int *)(unaff_EBP - 0xd4);
            iVar23 = *(int *)(unaff_EBP - 0xdc);
            iVar17 = *(int *)(unaff_EBP - 0xe0);
            *(uint *)(iVar14 + 0x50) = *(int *)(iVar14 + 0x50) + 2U | 1;
            iVar17 = iVar17 + *(int *)(iVar23 + 4 + iVar31 * 0x14) * 0x28;
            *(int *)(iVar14 + 0x14) = iVar17;
            iVar14 = 0;
            *(int *)(unaff_EBP - 0xcc) = iVar17;
            *(undefined4 *)(unaff_EBP - 200) = 0;
            if (*(int *)(iVar23 + 8 + iVar31 * 0x14) < 1) goto LAB_004b55f4;
            goto LAB_004afa70;
          }
        }
        goto LAB_004b0d11;
      case 0x11:
        iVar31 = *(int *)(iVar17 + 4 + iVar31 * 0x14);
        if (iVar31 != 0) {
          FUN_004b7860((int *)(*(int *)(unaff_EBP - 0xe0) + iVar31 * 0x28),0,0);
        }
        goto LAB_004b0d0b;
      case 0x12:
        uVar18 = (uint)*(byte *)(iVar17 + 3 + iVar31 * 0x14);
        iVar14 = *(int *)(unaff_EBP - 0xe0);
        iVar23 = *(int *)(*(int *)(unaff_EBP - 0xd4) + 0xc);
        *(uint *)(unaff_EBP - 0x80) = uVar18;
        *(int *)(unaff_EBP - 0x84) = iVar23;
        *(int *)(unaff_EBP - 0xd8) = iVar14 + *(int *)(iVar17 + 0xc + iVar31 * 0x14) * 0x28;
        unaff_EBX = *(int **)(unaff_EBP - 0xe4);
        iVar14 = iVar14 + *(int *)(iVar17 + 8 + iVar31 * 0x14) * 0x28;
        iVar17 = 0;
        *(int *)(unaff_EBP - 200) = iVar14;
        *(undefined4 *)(unaff_EBP - 0xcc) = 0;
        if (uVar18 != 0) goto LAB_004b00b0;
        goto LAB_004b010d;
      case 0x13:
        iVar14 = *(int *)(iVar17 + 4 + iVar31 * 0x14);
        iVar23 = *(int *)(unaff_EBP - 0xe0);
        bVar10 = *(byte *)(iVar23 + 0x1c + iVar14 * 0x28);
        piVar28 = (int *)(iVar23 + *(int *)(iVar17 + 8 + iVar31 * 0x14) * 0x28);
        *(int **)(unaff_EBP - 0xd8) = piVar28;
        if ((bVar10 & 1) == 0) {
          uVar40 = FUN_004b65e0(iVar23 + iVar14 * 0x28);
          if (uVar40 == 0) {
            FUN_004b7860(piVar28,1,0);
            piVar28 = *(int **)(unaff_EBP - 0xd8);
          }
          else {
            FUN_004b7860(piVar28,0,0);
            piVar28 = *(int **)(unaff_EBP - 0xd8);
          }
        }
        else {
          FUN_004b78c0((int)piVar28);
        }
        goto LAB_004b0d0b;
      case 0x14:
        iVar17 = *(int *)(unaff_EBP - 0xe0) + *(int *)(iVar17 + 4 + iVar31 * 0x14) * 0x28;
        FUN_004b7410(iVar17);
        uVar30 = *(uint *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar31 * 0x14);
        puVar21 = (uint *)(iVar17 + 0x10);
        uVar18 = *puVar21;
        *puVar21 = *puVar21 + uVar30;
        *(int *)(iVar17 + 0x14) =
             *(int *)(iVar17 + 0x14) + ((int)uVar30 >> 0x1f) + (uint)CARRY4(uVar18,uVar30);
        piVar28 = *(int **)(unaff_EBP - 0xd8);
        goto LAB_004b0d0b;
      case 0x15:
        iVar17 = *(int *)(unaff_EBP - 0xe0) + *(int *)(iVar17 + 4 + iVar31 * 0x14) * 0x28;
        FUN_0046dfa0(iVar17);
        if ((*(byte *)(iVar17 + 0x1c) & 8) != 0) {
          FUN_004b6650(iVar17);
        }
        if ((*(ushort *)(iVar17 + 0x1c) & 4) != 0) {
          *(ushort *)(iVar17 + 0x1c) = *(ushort *)(iVar17 + 0x1c) & 0xbe04 | 4;
          piVar28 = *(int **)(unaff_EBP - 0xd8);
          goto LAB_004b0d0b;
        }
        iVar31 = *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar31 * 0x14);
        if (iVar31 != 0) {
          piVar28 = *(int **)(unaff_EBP - 0xd8);
          goto LAB_004b0d04;
        }
        uVar18 = 0x14;
        *(undefined4 *)(unaff_EBP - 0xd0) = 0x14;
        goto LAB_004b572c;
      case 0x16:
        iVar31 = *(int *)(iVar17 + 4 + iVar31 * 0x14);
        if ((*(byte *)(*(int *)(unaff_EBP - 0xe0) + 0x1c + iVar31 * 0x28) & 4) != 0) {
          FUN_004b7670(*(int *)(unaff_EBP - 0xe0) + iVar31 * 0x28);
        }
        goto LAB_004b0d0b;
      case 0x17:
        *(undefined4 *)(unaff_EBP - 0x108) = *(undefined4 *)(iVar17 + 0x10 + iVar31 * 0x14);
        goto LAB_004b0d0b;
      case 0x18:
        iVar14 = *(int *)(unaff_EBP - 0x108);
        if ((*(byte *)(iVar17 + 3 + iVar31 * 0x14) & 1) == 0) {
          iVar14 = 0;
        }
        iVar23 = *(int *)(iVar17 + 0xc + iVar31 * 0x14);
        *(int *)(unaff_EBP - 0xcc) = iVar23;
        iVar15 = *(int *)(iVar17 + 0x10 + iVar31 * 0x14);
        *(int *)(unaff_EBP - 0xbc) = iVar15;
        uVar27 = *(undefined4 *)(iVar17 + 4 + iVar31 * 0x14);
        *(undefined4 *)(unaff_EBP - 0xc4) = uVar27;
        iVar31 = *(int *)(iVar17 + 8 + iVar31 * 0x14);
        iVar17 = 0;
        *(int *)(unaff_EBP - 0x108) = iVar14;
        *(undefined4 *)(unaff_EBP - 0xf0) = uVar27;
        *(int *)(unaff_EBP - 0xc0) = iVar31;
        *(undefined4 *)(unaff_EBP - 200) = 0;
        if (iVar23 < 1) goto LAB_004b0a43;
        goto LAB_004b09a0;
      case 0x19:
        if (*(int *)(unaff_EBP - 0x10c) < 0) {
          iVar31 = *(int *)(iVar17 + 4 + iVar31 * 0x14);
          goto LAB_004b0d04;
        }
        if (*(int *)(unaff_EBP - 0x10c) != 0) {
          iVar31 = *(int *)(iVar17 + 0xc + iVar31 * 0x14);
          goto LAB_004b0d04;
        }
        break;
      case 0x1a:
        iVar14 = *(int *)(iVar17 + 4 + iVar31 * 0x14);
        iVar23 = *(int *)(*(int *)(unaff_EBP - 0xd4) + 0xb8);
        if (*(char *)(iVar23 + iVar14) == '\0') {
          *(undefined1 *)(iVar23 + iVar14) = 1;
          goto LAB_004b0d0b;
        }
        break;
      case 0x1b:
      case 0x1c:
        iVar14 = *(int *)(iVar17 + 4 + iVar31 * 0x14);
        if ((*(byte *)(*(int *)(unaff_EBP - 0xe0) + 0x1c + iVar14 * 0x28) & 1) == 0) {
          fVar36 = FUN_004b8350(*(int *)(unaff_EBP - 0xe0) + iVar14 * 0x28);
          *(double *)(unaff_EBP - 0xf4) = (double)fVar36;
          uVar18 = (uint)(*(double *)(unaff_EBP - 0xf4) != 0.0);
          iVar17 = *(int *)(unaff_EBP - 0xdc);
          *(uint *)(unaff_EBP - 0xcc) = uVar18;
          if (*(char *)(iVar17 + iVar31 * 0x14) != '\x1c') goto joined_r0x004b4649;
          uVar18 = (uint)(uVar18 == 0);
        }
        else {
          uVar18 = *(uint *)(iVar17 + 0xc + iVar31 * 0x14);
        }
        *(uint *)(unaff_EBP - 0xcc) = uVar18;
joined_r0x004b4649:
        if (uVar18 == 0) goto LAB_004b0d0b;
        break;
      case 0x1d:
        iVar14 = *(int *)(iVar17 + 4 + iVar31 * 0x14);
        iVar23 = *(int *)(unaff_EBP - 0xd4);
        *(int *)(unaff_EBP - 0xbc) = iVar14;
        iVar15 = *(int *)(iVar17 + 8 + iVar31 * 0x14);
        *(undefined4 *)(unaff_EBP - 0xb4) = 0;
        *(int *)(unaff_EBP - 0xb8) = iVar15;
        *(undefined8 *)(unaff_EBP - 0x8c) = 0;
        *(undefined8 *)(unaff_EBP - 0x84) = 0;
        *(undefined8 *)(unaff_EBP - 0x7c) = 0;
        *(undefined8 *)(unaff_EBP - 0x74) = 0;
        *(undefined8 *)(unaff_EBP - 0x6c) = 0;
        iVar17 = *(int *)(iVar17 + 0xc + iVar31 * 0x14);
        iVar33 = *(int *)(unaff_EBP - 0xe0);
        *(undefined4 *)(unaff_EBP - 0xb0) = 0;
        piVar32 = (int *)(iVar33 + iVar17 * 0x28);
        iVar17 = *(int *)(iVar23 + 0x40);
        *(int **)(unaff_EBP - 0x90) = piVar32;
        piVar28 = *(int **)(iVar17 + iVar14 * 4);
        *(int **)(unaff_EBP - 0xb4) = piVar28;
        iVar17 = *piVar28;
        *(int *)(unaff_EBP - 0xac) = iVar17;
        if (iVar17 == 0) {
          if (piVar28[4] < 1) goto LAB_004b0dd6;
          iVar17 = *(int *)(unaff_EBP - 0xe0) + piVar28[4] * 0x28;
          *(int *)(unaff_EBP - 0x48) = iVar17;
          if (*(char *)((int)piVar28 + 0x22) != '\0') {
            FUN_004b7c40(piVar32,(undefined8 *)(iVar17 + iVar15 * 0x28),0x1000);
            if ((*(ushort *)(*(int **)(unaff_EBP - 0x90) + 7) & 0x1000) == 0) goto LAB_004af834;
            iVar31 = FUN_004b7490(*(int **)(unaff_EBP - 0x90));
            unaff_EBX = *(int **)(unaff_EBP - 0xe4);
            if (iVar31 != 0) goto LAB_004b57a6;
            piVar28 = *(int **)(unaff_EBP - 0xd8);
            goto LAB_004b0d0b;
          }
          *(undefined4 *)(unaff_EBP - 0xcc) = *(undefined4 *)(iVar17 + 0x18);
          *(undefined4 *)(unaff_EBP - 0xb0) = *(undefined4 *)(iVar17 + 4);
          if ((*(byte *)(*(int *)(unaff_EBP - 0xdc) + 3 + iVar31 * 0x14) & 0x20) == 0) {
            iVar17 = *(int *)(*(int *)(unaff_EBP - 0xd4) + 0x50);
          }
          else {
            iVar17 = 0;
          }
          piVar28[0x14] = iVar17;
LAB_004b0f05:
          uVar18 = *(uint *)(unaff_EBP - 0xcc);
LAB_004b0f0b:
          iVar17 = *(int *)(unaff_EBP - 0xb4);
LAB_004b0f11:
          if (uVar18 != 0) {
            unaff_EBX = *(int **)(unaff_EBP - 0xe4);
            if ((uint)unaff_EBX[0x14] < uVar18) goto LAB_004b5780;
            iVar23 = *(int *)(iVar17 + 0x14);
            iVar15 = *(int *)(unaff_EBP - 0xd4);
            *(int *)(unaff_EBP - 0xa0) = iVar23;
            iVar14 = *(int *)(iVar17 + 0x58);
            *(int *)(unaff_EBP - 0xa8) = iVar14;
            unaff_EBX = *(int **)(unaff_EBP - 0xe4);
            if (*(int *)(iVar17 + 0x50) == *(int *)(iVar15 + 0x50)) {
              iVar17 = *(int *)(iVar17 + 0x5c);
              *(int *)(unaff_EBP - 0xa4) = iVar17;
LAB_004b11c6:
              iVar23 = *(int *)(unaff_EBP - 0xb8);
              if (*(int *)(iVar17 + iVar23 * 4) == 0) {
                if (*(char *)(*(int *)(unaff_EBP - 0xdc) + 1 + iVar31 * 0x14) == -8) {
                  FUN_004b7c40(*(int **)(unaff_EBP - 0x90),
                               *(undefined8 **)(*(int *)(unaff_EBP - 0xdc) + 0x10 + iVar31 * 0x14),
                               0x800);
                }
                else {
                  *(ushort *)(*(int *)(unaff_EBP - 0x90) + 0x1c) =
                       *(ushort *)(*(int *)(unaff_EBP - 0x90) + 0x1c) & 0xbe01 | 1;
                }
              }
              else {
                if (*(int *)(unaff_EBP - 0xb0) == 0) {
                  uVar18 = *(uint *)(iVar14 + iVar23 * 4);
                  iVar17 = *(int *)(unaff_EBP - 0xdc);
                  *(uint *)(unaff_EBP - 0x4c) = uVar18;
                  bVar10 = *(byte *)(iVar17 + 3 + iVar31 * 0x14);
                  if (((bVar10 & 0xc0) == 0) ||
                     (((uVar18 < 0xc || ((uVar18 & 1) != 0)) && (-1 < (char)bVar10)))) {
                    uVar18 = FUN_004b8bf0(uVar18);
                    puVar34 = *(undefined8 **)(unaff_EBP - 0x90);
                    *(uint *)(unaff_EBP - 0x9c) = uVar18;
                    FUN_004b7500((int *)(unaff_EBP - 0x8c),puVar34);
                    uVar18 = FUN_004b70b0(*(int **)(unaff_EBP - 0xac),
                                          *(uint *)(*(int *)(unaff_EBP - 0xa4) +
                                                   *(int *)(unaff_EBP - 0xb8) * 4),
                                          *(size_t *)(unaff_EBP - 0x9c),
                                          (uint)*(byte *)(*(int *)(unaff_EBP - 0xb4) + 0x1f),
                                          (int *)(unaff_EBP - 0x8c));
                    *(uint *)(unaff_EBP - 0xd0) = uVar18;
                    if (uVar18 != 0) goto LAB_004b0616;
                    pcVar24 = *(char **)(unaff_EBP - 0x88);
                    uVar18 = *(uint *)(unaff_EBP - 0x4c);
                  }
                  else {
                    pcVar24 = (char *)(-(uint)(uVar18 < 0xc) & unaff_EBP - 0xc4);
                  }
                  piVar28 = *(int **)(unaff_EBP - 0x90);
                  *(char **)(unaff_EBP - 0x94) = pcVar24;
                }
                else {
                  piVar28 = *(int **)(unaff_EBP - 0x90);
                  if ((*(ushort *)(piVar28 + 7) & 0x2460) != 0) {
                    FUN_004b7720(piVar28);
                    piVar28 = *(int **)(unaff_EBP - 0x90);
                    iVar17 = *(int *)(unaff_EBP - 0xa4);
                    iVar14 = *(int *)(unaff_EBP - 0xa8);
                    iVar23 = *(int *)(unaff_EBP - 0xb8);
                  }
                  pcVar24 = (char *)(*(int *)(iVar17 + iVar23 * 4) + *(int *)(unaff_EBP - 0xb0));
                  uVar18 = *(uint *)(iVar14 + iVar23 * 4);
                }
                FUN_004b87d0(pcVar24,uVar18,(int)piVar28);
                *(undefined1 *)(*(int *)(unaff_EBP - 0x90) + 0x1f) =
                     *(undefined1 *)(unaff_EBP - 0xec);
              }
              if (*(int *)(unaff_EBP - 0x68) != 0) {
                puVar1 = (ushort *)(*(int *)(unaff_EBP - 0x90) + 0x1c);
                *puVar1 = *puVar1 & 0xe7ff;
                puVar1 = (ushort *)(*(int *)(unaff_EBP - 0x90) + 0x1c);
                *puVar1 = *puVar1 | 0x200;
                *(undefined4 *)(*(int *)(unaff_EBP - 0x90) + 4) = *(undefined4 *)(unaff_EBP - 0x88);
                *(undefined4 *)(*(int *)(unaff_EBP - 0x90) + 0x24) =
                     *(undefined4 *)(unaff_EBP - 0x68);
              }
              uVar18 = FUN_004b7490(*(int **)(unaff_EBP - 0x90));
              piVar28 = *(int **)(unaff_EBP - 0xd8);
              *(uint *)(unaff_EBP - 0xd0) = uVar18;
            }
            else {
              iVar14 = iVar14 + iVar23 * 4;
              *(int *)(unaff_EBP - 0xa4) = iVar14;
              *(undefined4 *)(unaff_EBP - 0x50) = 0;
              *(int *)(iVar17 + 0x5c) = iVar14;
              *(undefined4 *)(*(int *)(unaff_EBP - 0xb4) + 0x54) = *(undefined4 *)(unaff_EBP - 0xcc)
              ;
              *(undefined4 *)(*(int *)(unaff_EBP - 0xb4) + 0x50) =
                   *(undefined4 *)(*(int *)(unaff_EBP - 0xd4) + 0x50);
              pbVar35 = *(byte **)(unaff_EBP - 0xb0);
              if (pbVar35 == (byte *)0x0) {
                if (*(char *)(*(int *)(unaff_EBP - 0xb4) + 0x1f) == '\0') {
                  iVar17 = FUN_0048f8b0(*(int *)(unaff_EBP - 0xac),(uint *)(unaff_EBP - 0x50));
                }
                else {
                  iVar17 = FUN_00490640(*(int *)(unaff_EBP - 0xac),(uint *)(unaff_EBP - 0x50));
                }
                uVar30 = *(uint *)(unaff_EBP - 0xcc);
                uVar18 = *(uint *)(unaff_EBP - 0x50);
                iVar14 = *(int *)(unaff_EBP - 0xb4);
                *(int *)(unaff_EBP - 0x94) = iVar17;
                if (uVar18 < uVar30) {
                  *(undefined4 *)(iVar14 + 0x60) = 0;
                }
                else {
                  *(int *)(unaff_EBP - 0xb0) = iVar17;
                  *(int *)(iVar14 + 0x60) = iVar17;
                }
                pbVar35 = *(byte **)(unaff_EBP - 0x94);
              }
              else {
                *(byte **)(unaff_EBP - 0x94) = pbVar35;
              }
              if (*pbVar35 < 0x80) {
                uVar18 = (uint)*pbVar35;
                *(uint *)(unaff_EBP - 0x5c) = uVar18;
                uVar30 = 1;
              }
              else {
                uVar30 = FUN_0049d440(pbVar35,(uint *)(unaff_EBP - 0x5c));
                uVar18 = *(uint *)(unaff_EBP - 0x5c);
                pbVar35 = *(byte **)(unaff_EBP - 0x94);
                uVar30 = uVar30 & 0xff;
              }
              *(uint *)(unaff_EBP - 0x54) = uVar30;
              if (uVar18 < 0x18004) {
                iVar17 = *(int *)(unaff_EBP - 0xa0);
                sVar22 = iVar17 * 5 + 3;
                if ((int)uVar18 < (int)sVar22) {
                  sVar22 = uVar18;
                }
                iVar14 = *(int *)(unaff_EBP - 0xb0);
                *(size_t *)(unaff_EBP - 0x9c) = sVar22;
                if ((iVar14 == 0) && (*(int *)(unaff_EBP - 0x50) < (int)sVar22)) {
                  *(undefined2 *)(unaff_EBP - 0x70) = 0;
                  *(undefined4 *)(unaff_EBP - 0x8c) = 0;
                  uVar18 = FUN_004b70b0(*(int **)(unaff_EBP - 0xac),0,sVar22,
                                        (uint)*(byte *)(*(int *)(unaff_EBP - 0xb4) + 0x1f),
                                        (int *)(unaff_EBP - 0x8c));
                  *(uint *)(unaff_EBP - 0xd0) = uVar18;
                  if (uVar18 != 0) goto LAB_004af834;
                  pbVar35 = *(byte **)(unaff_EBP - 0x88);
                  uVar18 = *(uint *)(unaff_EBP - 0x5c);
                  sVar22 = *(size_t *)(unaff_EBP - 0x9c);
                  iVar17 = *(int *)(unaff_EBP - 0xa0);
                  *(byte **)(unaff_EBP - 0x94) = pbVar35;
                }
                pbVar16 = pbVar35 + sVar22;
                pbVar35 = pbVar35 + *(int *)(unaff_EBP - 0x54);
                iVar14 = 0;
                *(byte **)(unaff_EBP - 0x60) = pbVar16;
                *(byte **)(unaff_EBP - 100) = pbVar35;
                *(undefined4 *)(unaff_EBP - 0x98) = 0;
                if (0 < iVar17) {
                  do {
                    if (pbVar35 < pbVar16) {
                      *(uint *)(*(int *)(unaff_EBP - 0xa4) + iVar14 * 4) = uVar18;
                      pbVar35 = *(byte **)(unaff_EBP - 100);
                      if (*pbVar35 < 0x80) {
                        uVar18 = (uint)*pbVar35;
                        *(uint *)(unaff_EBP - 0x4c) = uVar18;
                        *(byte **)(unaff_EBP - 100) = pbVar35 + 1;
                      }
                      else {
                        uVar30 = FUN_0049d440(pbVar35,(uint *)(unaff_EBP - 0x4c));
                        uVar18 = *(uint *)(unaff_EBP - 0x4c);
                        *(int *)(unaff_EBP - 100) = *(int *)(unaff_EBP - 100) + (uVar30 & 0xff);
                      }
                      *(uint *)(*(int *)(unaff_EBP - 0xa8) + *(int *)(unaff_EBP - 0x98) * 4) =
                           uVar18;
                      uVar30 = FUN_004b8bf0(*(uint *)(unaff_EBP - 0x4c));
                      uVar18 = *(int *)(unaff_EBP - 0x5c) + uVar30;
                      *(uint *)(unaff_EBP - 0x58) = uVar30;
                      *(uint *)(unaff_EBP - 0x5c) = uVar18;
                      if (uVar18 < uVar30) {
                        *(int *)(unaff_EBP - 100) = *(int *)(unaff_EBP - 0x60) + 1;
                        break;
                      }
                    }
                    else {
                      *(undefined4 *)(*(int *)(unaff_EBP - 0xa4) + iVar14 * 4) = 0;
                      uVar18 = *(uint *)(unaff_EBP - 0x5c);
                    }
                    iVar14 = *(int *)(unaff_EBP - 0x98) + 1;
                    *(int *)(unaff_EBP - 0x98) = iVar14;
                    if (*(int *)(unaff_EBP - 0xa0) <= iVar14) break;
                    pbVar16 = *(byte **)(unaff_EBP - 0x60);
                    pbVar35 = *(byte **)(unaff_EBP - 100);
                  } while( true );
                }
                FUN_004b76e0((int *)(unaff_EBP - 0x8c));
                uVar18 = *(uint *)(unaff_EBP - 100);
                uVar30 = *(uint *)(unaff_EBP - 0x60);
                *(undefined2 *)(unaff_EBP - 0x70) = 1;
                if (uVar18 <= uVar30) {
                  if ((*(uint *)(unaff_EBP - 0x5c) <= *(uint *)(unaff_EBP - 0xcc)) &&
                     ((uVar18 != uVar30 ||
                      (*(uint *)(unaff_EBP - 0x5c) == *(uint *)(unaff_EBP - 0xcc))))) {
                    iVar17 = *(int *)(unaff_EBP - 0xa4);
                    iVar14 = *(int *)(unaff_EBP - 0xa8);
                    unaff_EBX = *(int **)(unaff_EBP - 0xe4);
                    goto LAB_004b11c6;
                  }
                }
                uVar27 = FUN_00493af0();
                unaff_EBX = *(int **)(unaff_EBP - 0xe4);
                piVar28 = *(int **)(unaff_EBP - 0xd8);
                *(undefined4 *)(unaff_EBP - 0xd0) = uVar27;
                goto LAB_004b0d0b;
              }
              uVar18 = FUN_00493af0();
              piVar28 = *(int **)(unaff_EBP - 0xd8);
              *(uint *)(unaff_EBP - 0xd0) = uVar18;
            }
            goto LAB_004b0d11;
          }
          piVar32 = *(int **)(unaff_EBP - 0x90);
        }
        else {
          uVar18 = FUN_004af1b0(piVar28);
          *(uint *)(unaff_EBP - 0xd0) = uVar18;
          if (uVar18 != 0) {
LAB_004b5720:
            uVar18 = *(uint *)(unaff_EBP - 0xd0);
            unaff_EBX = *(int **)(unaff_EBP - 0xe4);
            goto LAB_004b572c;
          }
          iVar17 = *(int *)(unaff_EBP - 0xb4);
          if (*(char *)(iVar17 + 0x1c) == '\0') {
            if (*(int *)(iVar17 + 0x50) != *(int *)(iVar23 + 0x50)) {
              if (*(char *)(iVar17 + 0x1f) == '\0') {
                FUN_0048f8d0(*(int *)(unaff_EBP - 0xac),(undefined4 *)(unaff_EBP - 0xcc));
                goto LAB_004b0f05;
              }
              FUN_004906b0(*(int *)(unaff_EBP - 0xac),(undefined4 *)(unaff_EBP - 0xc4));
              uVar18 = *(uint *)(unaff_EBP - 0xc4);
              *(uint *)(unaff_EBP - 0xcc) = uVar18;
              goto LAB_004b0f0b;
            }
            uVar18 = *(uint *)(iVar17 + 0x54);
            *(uint *)(unaff_EBP - 0xcc) = uVar18;
            *(undefined4 *)(unaff_EBP - 0xb0) = *(undefined4 *)(iVar17 + 0x60);
            goto LAB_004b0f11;
          }
          piVar32 = *(int **)(unaff_EBP - 0x90);
LAB_004b0dd6:
          *(undefined4 *)(unaff_EBP - 0xcc) = 0;
        }
        unaff_EBX = *(int **)(unaff_EBP - 0xe4);
        piVar28 = *(int **)(unaff_EBP - 0xd8);
        *(ushort *)(piVar32 + 7) = *(ushort *)(piVar32 + 7) & 0xbe01 | 1;
        goto LAB_004b0d0b;
      case 0x1e:
        pcVar24 = *(char **)(iVar17 + 0x10 + iVar31 * 0x14);
        *(char **)(unaff_EBP - 0xcc) = pcVar24;
        piVar28 = (int *)(*(int *)(unaff_EBP - 0xe0) + *(int *)(iVar17 + 4 + iVar31 * 0x14) * 0x28);
        cVar9 = *pcVar24;
        *(char *)(unaff_EBP - 200) = cVar9;
        if (cVar9 != '\0') {
          do {
            *(char **)(unaff_EBP - 0xcc) = pcVar24 + 1;
            if ((*(ushort *)(piVar28 + 7) & 0x4000) != 0) {
              FUN_004b6fa0(piVar28);
            }
            FUN_004ae250(piVar28,(char)*(undefined4 *)(unaff_EBP - 200),
                         (byte)*(undefined4 *)(unaff_EBP - 0xec));
            pcVar24 = *(char **)(unaff_EBP - 0xcc);
            cVar9 = *pcVar24;
            piVar28 = piVar28 + 10;
            *(char *)(unaff_EBP - 200) = cVar9;
          } while (cVar9 != '\0');
          unaff_EBX = *(int **)(unaff_EBP - 0xe4);
        }
        piVar28 = *(int **)(unaff_EBP - 0xd8);
        *(char **)(unaff_EBP - 0xcc) = pcVar24 + 1;
        goto LAB_004b0d0b;
      case 0x1f:
        iVar14 = *(int *)(unaff_EBP - 0xdc);
        uVar30 = 0;
        *(undefined4 *)(unaff_EBP - 0xbc) = 0;
        uVar18 = 0;
        *(undefined4 *)(unaff_EBP - 0xac) = 0;
        *(undefined8 *)(unaff_EBP - 0xc4) = 0;
        iVar17 = *(int *)(iVar14 + 4 + iVar31 * 0x14);
        *(int *)(unaff_EBP - 0x98) = iVar17;
        uVar27 = *(undefined4 *)(iVar14 + 0x10 + iVar31 * 0x14);
        *(undefined4 *)(unaff_EBP - 0x94) = uVar27;
        *(undefined4 *)(unaff_EBP - 0xf0) = uVar27;
        iVar17 = *(int *)(unaff_EBP - 0xe0) + iVar17 * 0x28;
        *(int *)(unaff_EBP - 0xa0) = iVar17;
        iVar23 = *(int *)(iVar14 + 8 + iVar31 * 0x14);
        *(int *)(unaff_EBP - 0x98) = iVar23;
        piVar32 = (int *)((iVar17 + iVar23 * 0x28) - 0x28);
        *(uint *)(unaff_EBP - 0x90) = (uint)*(byte *)(*(int *)(unaff_EBP - 0xd4) + 0x5d);
        *(int **)(unaff_EBP - 0x9c) = piVar32;
        *(int *)(unaff_EBP - 0xd8) =
             *(int *)(unaff_EBP - 0xe0) + *(int *)(iVar14 + 0xc + iVar31 * 0x14) * 0x28;
        piVar28 = *(int **)(unaff_EBP - 0xa0);
        *(int **)(unaff_EBP - 200) = piVar28;
        if (piVar28 <= piVar32) {
          uVar18 = 0;
          piVar32 = piVar28;
          do {
            if (*(int *)(unaff_EBP - 0xf0) != 0) {
              FUN_004ae250(piVar32,*(char *)(((int)piVar32 - (int)piVar28) / 0x28 +
                                            *(int *)(unaff_EBP - 0xf0)),
                           (byte)*(undefined4 *)(unaff_EBP - 0xec));
              uVar18 = *(uint *)(unaff_EBP - 0xac);
              piVar32 = *(int **)(unaff_EBP - 200);
              *(undefined4 *)(unaff_EBP - 0xf0) = *(undefined4 *)(unaff_EBP - 0x94);
            }
            if (((*(ushort *)(piVar32 + 7) & 0x4000) != 0) && (0 < piVar32[6])) {
              FUN_004b6fa0(piVar32);
              uVar18 = *(uint *)(unaff_EBP - 0xac);
              piVar32 = *(int **)(unaff_EBP - 200);
              *(undefined4 *)(unaff_EBP - 0xf0) = *(undefined4 *)(unaff_EBP - 0x94);
            }
            uVar30 = FUN_004b8ae0((int)piVar32,*(int *)(unaff_EBP - 0x90));
            *(uint *)(unaff_EBP - 0xa4) = uVar30;
            uVar25 = FUN_004b8bf0(uVar30);
            puVar21 = (uint *)(unaff_EBP - 0xc4);
            uVar30 = *puVar21;
            *puVar21 = *puVar21 + uVar25;
            *(int *)(unaff_EBP - 0xc0) =
                 *(int *)(unaff_EBP - 0xc0) + ((int)uVar25 >> 0x1f) + (uint)CARRY4(uVar30,uVar25);
            *(uint *)(unaff_EBP - 0x88) = uVar25;
            iVar31 = FUN_004ae730(extraout_ECX,0);
            uVar30 = *(int *)(unaff_EBP - 0xbc) + iVar31;
            *(uint *)(unaff_EBP - 0xbc) = uVar30;
            if ((*(ushort *)(piVar32 + 7) & 0x4000) == 0) {
              if (uVar25 != 0) {
                uVar18 = 0;
              }
            }
            else {
              uVar18 = uVar18 + piVar32[4];
            }
            piVar28 = *(int **)(unaff_EBP - 0xa0);
            piVar32 = piVar32 + 10;
            *(uint *)(unaff_EBP - 0xac) = uVar18;
            *(int **)(unaff_EBP - 200) = piVar32;
          } while (piVar32 <= *(int **)(unaff_EBP - 0x9c));
        }
        iVar31 = FUN_004ae730(uVar30,(int)uVar30 >> 0x1f);
        uVar30 = *(int *)(unaff_EBP - 0xbc) + iVar31;
        *(int *)(unaff_EBP - 0xa8) = iVar31;
        *(uint *)(unaff_EBP - 0xbc) = uVar30;
        iVar17 = FUN_004ae730(uVar30,(int)uVar30 >> 0x1f);
        if (iVar31 < iVar17) {
          uVar30 = uVar30 + 1;
          *(uint *)(unaff_EBP - 0xbc) = uVar30;
        }
        iVar31 = *(int *)(unaff_EBP - 0xe4);
        uVar25 = (uVar30 - uVar18) + *(uint *)(unaff_EBP - 0xc4);
        iVar17 = ((((int)uVar30 >> 0x1f) - ((int)uVar18 >> 0x1f)) - (uint)(uVar30 < uVar18)) +
                 *(int *)(unaff_EBP - 0xc0) +
                 (uint)CARRY4(uVar30 - uVar18,*(uint *)(unaff_EBP - 0xc4));
        *(uint *)(unaff_EBP - 0xb4) = uVar25;
        *(int *)(unaff_EBP - 0xb0) = iVar17;
        uVar18 = *(uint *)(iVar31 + 0x50);
        iVar31 = (int)uVar18 >> 0x1f;
        if ((iVar31 < iVar17) || ((iVar31 <= iVar17 && (uVar18 < uVar25)))) {
LAB_004b577a:
          unaff_EBX = *(int **)(unaff_EBP - 0xe4);
          goto LAB_004b5780;
        }
        piVar32 = *(int **)(unaff_EBP - 0xd8);
        iVar31 = FUN_004b7260(piVar32,uVar25,0);
        if (iVar31 != 0) {
LAB_004b57a0:
          unaff_EBX = *(int **)(unaff_EBP - 0xe4);
          goto LAB_004b57a6;
        }
        uVar18 = *(uint *)(unaff_EBP - 0xbc);
        pbVar35 = (byte *)piVar32[1];
        *(byte **)(unaff_EBP - 0xcc) = pbVar35;
        if (uVar18 < 0x80) {
          *pbVar35 = (byte)uVar18;
          uVar18 = 1;
        }
        else {
          uVar18 = FUN_004a60c0(pbVar35,uVar18);
        }
        uVar30 = *(uint *)(unaff_EBP - 0x9c);
        uVar18 = uVar18 & 0xff;
        uVar25 = *(uint *)(unaff_EBP - 0xa0);
        *(uint *)(unaff_EBP - 0x8c) = uVar18;
        *(uint *)(unaff_EBP - 200) = uVar25;
        if (uVar25 <= uVar30) {
          do {
            uVar30 = FUN_004b8ae0(uVar25,*(int *)(unaff_EBP - 0x90));
            *(uint *)(unaff_EBP - 0xa4) = uVar30;
            if (uVar30 < 0x80) {
              *(char *)(uVar18 + *(int *)(unaff_EBP - 0xcc)) = (char)uVar30;
              uVar18 = 1;
            }
            else {
              uVar18 = FUN_004a60c0((byte *)(*(int *)(unaff_EBP - 0xcc) + uVar18),uVar30);
            }
            uVar30 = *(uint *)(unaff_EBP - 0x9c);
            uVar18 = *(int *)(unaff_EBP - 0x8c) + (uVar18 & 0xff);
            uVar25 = *(int *)(unaff_EBP - 200) + 0x28;
            *(uint *)(unaff_EBP - 0x8c) = uVar18;
            *(uint *)(unaff_EBP - 200) = uVar25;
          } while (uVar25 <= uVar30);
          uVar25 = *(uint *)(unaff_EBP - 0xa0);
        }
        *(uint *)(unaff_EBP - 200) = uVar25;
        if (uVar25 <= uVar30) {
          do {
            uVar18 = FUN_004b8a30((void *)(*(int *)(unaff_EBP - 0xcc) + uVar18),
                                  *(int *)(unaff_EBP - 0xb4) - uVar18,uVar25,
                                  *(int *)(unaff_EBP - 0x90));
            uVar18 = *(int *)(unaff_EBP - 0x8c) + uVar18;
            uVar25 = *(int *)(unaff_EBP - 200) + 0x28;
            *(uint *)(unaff_EBP - 0x8c) = uVar18;
            *(uint *)(unaff_EBP - 200) = uVar25;
          } while (uVar25 <= *(uint *)(unaff_EBP - 0x9c));
        }
        piVar32[6] = *(int *)(unaff_EBP - 0xb4);
        *(undefined2 *)(piVar32 + 7) = 0x410;
        piVar32[8] = 0;
        if (*(int *)(unaff_EBP - 0xac) != 0) {
          piVar32[4] = *(int *)(unaff_EBP - 0xac);
          *(undefined2 *)(piVar32 + 7) = 0x4410;
        }
        unaff_EBX = *(int **)(unaff_EBP - 0xe4);
        piVar28 = *(int **)(unaff_EBP - 0xd8);
        *(undefined1 *)((int)piVar32 + 0x1f) = 1;
        goto LAB_004b0d0b;
      case 0x20:
        piVar32 = (int *)**(undefined4 **)
                           (*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
                           *(int *)(iVar17 + 4 + iVar31 * 0x14) * 4);
        *(int **)(unaff_EBP - 0xc4) = piVar32;
        if (piVar32 == (int *)0x0) {
          *(undefined8 *)(unaff_EBP - 0xcc) = 0;
          piVar28[4] = *(int *)(unaff_EBP - 0xcc);
          piVar28[5] = *(int *)(unaff_EBP - 200);
        }
        else {
          iVar31 = FUN_0048f530(piVar32,(uint *)(unaff_EBP - 0xcc));
          *(int *)(unaff_EBP - 0xd0) = iVar31;
          piVar28[4] = *(int *)(unaff_EBP - 0xcc);
          piVar28[5] = *(int *)(unaff_EBP - 200);
        }
        goto LAB_004b0d0b;
      case 0x21:
        iVar14 = *(int *)(iVar17 + 4 + iVar31 * 0x14);
        *(int *)(unaff_EBP - 0xcc) = iVar14;
        pbVar35 = *(byte **)(iVar17 + 0x10 + iVar31 * 0x14);
        *(byte **)(unaff_EBP - 0xf0) = pbVar35;
        *(byte **)(unaff_EBP - 200) = pbVar35;
        if (iVar14 == 0) {
          unaff_EBX = *(int **)(unaff_EBP - 0xe4);
          if (unaff_EBX[0x22] < 1) {
            uVar18 = FUN_004aa9b0((char *)pbVar35);
            *(uint *)(unaff_EBP - 0xc4) = uVar18;
            uVar18 = FUN_004b9ef0((int)unaff_EBX,0,unaff_EBX[0x79] + unaff_EBX[0x78]);
            *(uint *)(unaff_EBP - 0xd0) = uVar18;
            if (uVar18 != 0) goto LAB_004b572c;
            piVar32 = FUN_00494b90((int)unaff_EBX,*(int *)(unaff_EBP - 0xc4) + 0x19);
            *(int **)(unaff_EBP - 0xc0) = piVar32;
            if (piVar32 != (int *)0x0) {
              *piVar32 = (int)(piVar32 + 6);
              memcpy((void *)**(undefined4 **)(unaff_EBP - 0xc0),*(void **)(unaff_EBP - 200),
                     *(int *)(unaff_EBP - 0xc4) + 1);
              if (*(char *)((int)unaff_EBX + 0x36) == '\0') {
                unaff_EBX[0x78] = unaff_EBX[0x78] + 1;
              }
              else {
                *(undefined1 *)((int)unaff_EBX + 0x36) = 0;
                *(undefined1 *)((int)unaff_EBX + 0x3d) = 1;
              }
              *(int *)(*(int *)(unaff_EBP - 0xc0) + 0x10) = unaff_EBX[0x76];
              unaff_EBX[0x76] = *(int *)(unaff_EBP - 0xc0);
              *(int *)(*(int *)(unaff_EBP - 0xc0) + 8) = unaff_EBX[0x7a];
              *(int *)(*(int *)(unaff_EBP - 0xc0) + 0xc) = unaff_EBX[0x7b];
            }
            goto LAB_004b0d0b;
          }
          pcVar24 = "cannot open savepoint - SQL statements in progress";
LAB_004b188b:
          FUN_004a9a30((int *)(*(int *)(unaff_EBP - 0xd4) + 0x34),(int)unaff_EBX,(byte *)pcVar24);
          uVar18 = 5;
          *(undefined4 *)(unaff_EBP - 0xd0) = 5;
        }
        else {
          iVar31 = *(int *)(unaff_EBP - 0xe4);
          iVar17 = 0;
          *(undefined4 *)(unaff_EBP - 0xb4) = 0;
          puVar26 = *(undefined4 **)(iVar31 + 0x1d8);
          *(undefined4 **)(unaff_EBP - 0xbc) = puVar26;
joined_r0x004b1994:
          if (puVar26 == (undefined4 *)0x0) goto LAB_004b19bf;
          iVar31 = FUN_004bcc60((byte *)*puVar26,pbVar35);
          if (iVar31 != 0) goto code_r0x004b19a5;
          unaff_EBX = *(int **)(unaff_EBP - 0xe4);
          if ((0 < unaff_EBX[0x22]) && (iVar14 == 1)) {
            FUN_004a9a30((int *)(*(int *)(unaff_EBP - 0xd4) + 0x34),(int)unaff_EBX,
                         (byte *)"cannot release savepoint - SQL statements in progress");
            piVar28 = *(int **)(unaff_EBP - 0xd8);
            uVar18 = 5;
            *(undefined4 *)(unaff_EBP - 0xd0) = 5;
            goto LAB_004b0d11;
          }
          if ((puVar26[4] == 0) && (*(char *)((int)unaff_EBX + 0x3d) != '\0')) {
            *(undefined4 *)(unaff_EBP - 0xf0) = 1;
            if (iVar14 == 1) {
              piVar28 = *(int **)(unaff_EBP - 0xd4);
              iVar31 = FUN_004aeea0(piVar28,1);
              if (iVar31 != 0) goto LAB_004b5847;
              iVar31 = *(int *)(unaff_EBP - 0xe4);
              *(undefined1 *)(iVar31 + 0x36) = 1;
              iVar17 = FUN_004b60e0(piVar28);
              if (iVar17 != 5) {
                *(undefined1 *)(iVar31 + 0x3d) = 0;
                *(int *)(unaff_EBP - 0xd0) = piVar28[0x16];
                goto LAB_004b1b7c;
              }
              piVar28[0x15] = *(int *)(unaff_EBP - 0xe8);
              *(undefined1 *)(iVar31 + 0x36) = 0;
              goto LAB_004b564b;
            }
          }
          else {
            *(undefined4 *)(unaff_EBP - 0xf0) = 0;
          }
          iVar31 = *(int *)(unaff_EBP - 0xe4);
          *(int *)(unaff_EBP - 0xb4) = (unaff_EBX[0x78] - iVar17) + -1;
          if (iVar14 == 2) {
            iVar17 = 0;
            *(undefined4 *)(unaff_EBP - 0xb0) = 0;
            if (0 < *(int *)(iVar31 + 0x14)) {
              do {
                FUN_00491f60(*(undefined4 **)(*(int *)(iVar31 + 0x10) + 4 + iVar17 * 0x10),4);
                iVar17 = *(int *)(unaff_EBP - 0xb0) + 1;
                *(int *)(unaff_EBP - 0xb0) = iVar17;
              } while (iVar17 < *(int *)(iVar31 + 0x14));
              puVar26 = *(undefined4 **)(unaff_EBP - 0xbc);
              iVar14 = *(int *)(unaff_EBP - 0xcc);
            }
          }
          iVar17 = 0;
          *(undefined4 *)(unaff_EBP - 0xb0) = 0;
          if (0 < *(int *)(iVar31 + 0x14)) {
            while( true ) {
              unaff_EBX = *(int **)(unaff_EBP - 0xe4);
              uVar18 = FUN_00491910(*(undefined4 **)(unaff_EBX[4] + 4 + iVar17 * 0x10),iVar14,
                                    *(int *)(unaff_EBP - 0xb4));
              *(uint *)(unaff_EBP - 0xd0) = uVar18;
              if (uVar18 != 0) break;
              iVar17 = *(int *)(unaff_EBP - 0xb0) + 1;
              *(int *)(unaff_EBP - 0xb0) = iVar17;
              iVar14 = *(int *)(unaff_EBP - 0xcc);
              if (unaff_EBX[5] <= iVar17) {
                puVar26 = *(undefined4 **)(unaff_EBP - 0xbc);
                iVar31 = *(int *)(unaff_EBP - 0xe4);
                goto LAB_004b1b60;
              }
            }
            goto LAB_004b572c;
          }
LAB_004b1b60:
          if ((iVar14 == 2) && ((*(byte *)(iVar31 + 0x18) & 2) != 0)) {
            FUN_00496370(iVar31);
            FUN_004a6940(iVar31);
            *(uint *)(iVar31 + 0x18) = *(uint *)(iVar31 + 0x18) | 2;
LAB_004b1b7c:
            iVar14 = *(int *)(unaff_EBP - 0xcc);
            puVar26 = *(undefined4 **)(unaff_EBP - 0xbc);
          }
          if (*(undefined4 **)(iVar31 + 0x1d8) != puVar26) {
            do {
              iVar17 = *(int *)(iVar31 + 0x1d8);
              *(int *)(unaff_EBP - 0xb8) = iVar17;
              *(undefined4 *)(iVar31 + 0x1d8) = *(undefined4 *)(iVar17 + 0x10);
              FUN_00494b00(iVar31,*(undefined4 **)(unaff_EBP - 0xb8));
              *(int *)(iVar31 + 0x1e0) = *(int *)(iVar31 + 0x1e0) + -1;
              puVar26 = *(undefined4 **)(unaff_EBP - 0xbc);
            } while (*(undefined4 **)(iVar31 + 0x1d8) != puVar26);
            iVar14 = *(int *)(unaff_EBP - 0xcc);
          }
          unaff_EBX = *(int **)(unaff_EBP - 0xe4);
          if (iVar14 != 1) {
            iVar31 = *(int *)(unaff_EBP - 0xf0);
            unaff_EBX[0x7a] = puVar26[2];
            unaff_EBX[0x7b] = puVar26[3];
            if (iVar31 == 0) goto LAB_004b1c25;
            goto LAB_004af570;
          }
          unaff_EBX[0x76] = puVar26[4];
          FUN_00494b00((int)unaff_EBX,*(undefined4 **)(unaff_EBP - 0xbc));
          if (*(int *)(unaff_EBP - 0xf0) != 0) goto LAB_004af570;
          unaff_EBX[0x78] = unaff_EBX[0x78] + -1;
LAB_004b1c25:
          uVar18 = FUN_004b9ef0((int)unaff_EBX,*(int *)(unaff_EBP - 0xcc),*(int *)(unaff_EBP - 0xb4)
                               );
          *(uint *)(unaff_EBP - 0xd0) = uVar18;
          if (uVar18 != 0) goto LAB_004b572c;
          piVar28 = *(int **)(unaff_EBP - 0xd8);
        }
        goto LAB_004b0d11;
      case 0x22:
        uVar18 = *(uint *)(iVar17 + 4 + iVar31 * 0x14);
        iVar17 = *(int *)(unaff_EBP - 0xdc);
        *(uint *)(unaff_EBP - 0xcc) = uVar18;
        iVar31 = *(int *)(iVar17 + 8 + iVar31 * 0x14);
        *(int *)(unaff_EBP - 200) = iVar31;
        if ((uVar18 == 0) || (*(char *)((int)unaff_EBX + 0x36) != '\0')) {
          *(undefined4 *)(unaff_EBP - 0xc4) = 0;
        }
        else {
          *(undefined4 *)(unaff_EBP - 0xc4) = 1;
          if ((iVar31 == 0) && (0 < unaff_EBX[0x22])) {
            pcVar24 = "cannot commit transaction - SQL statements in progress";
            goto LAB_004b188b;
          }
        }
        if (uVar18 != *(byte *)((int)unaff_EBX + 0x36)) {
          if (iVar31 == 0) {
            iVar31 = FUN_004aeea0(*(int **)(unaff_EBP - 0xd4),1);
            if (iVar31 != 0) goto LAB_004b5847;
            piVar28 = *(int **)(unaff_EBP - 0xd4);
            *(undefined1 *)((int)unaff_EBX + 0x36) = *(undefined1 *)(unaff_EBP - 0xcc);
            iVar31 = FUN_004b60e0(piVar28);
            if (iVar31 == 5) {
              cVar9 = *(char *)(unaff_EBP - 0xcc);
              piVar28[0x15] = *(int *)(unaff_EBP - 0xe8);
              *(char *)((int)unaff_EBX + 0x36) = '\x01' - cVar9;
              *(undefined4 *)(*(int *)(unaff_EBP - 0xd4) + 0x58) = 5;
              goto LAB_004b5847;
            }
          }
          else {
            FUN_004a6c80((int)unaff_EBX,0x204);
            *(undefined1 *)((int)unaff_EBX + 0x36) = 1;
          }
          FUN_00492710((int)unaff_EBX);
          goto LAB_004b5847;
        }
        if (uVar18 == 0) {
          pcVar24 = "cannot start a transaction within a transaction";
        }
        else {
          pcVar24 = "cannot rollback - no transaction is active";
          if (iVar31 == 0) {
            pcVar24 = "cannot commit - no transaction is active";
          }
        }
        FUN_004a9a30((int *)(*(int *)(unaff_EBP - 0xd4) + 0x34),(int)unaff_EBX,(byte *)pcVar24);
        uVar18 = 1;
        *(undefined4 *)(unaff_EBP - 0xd0) = 1;
        goto LAB_004b0d11;
      case 0x23:
        piVar32 = *(int **)(unaff_EBX[4] + 4 + *(int *)(iVar17 + 4 + iVar31 * 0x14) * 0x10);
        *(int **)(unaff_EBP - 0xcc) = piVar32;
        if (piVar32 == (int *)0x0) goto LAB_004b0d0b;
        uVar18 = FUN_0048ed50(piVar32,*(int *)(iVar17 + 8 + iVar31 * 0x14));
        *(uint *)(unaff_EBP - 0xd0) = uVar18;
        if (uVar18 == 5) {
          iVar31 = *(int *)(unaff_EBP - 0xd4);
          *(undefined4 *)(iVar31 + 0x54) = *(undefined4 *)(unaff_EBP - 0xe8);
          *(undefined4 *)(iVar31 + 0x58) = 5;
          goto LAB_004b5847;
        }
        if (uVar18 != 0) goto LAB_004b572c;
        if (((*(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar31 * 0x14) != 0) &&
            (iVar31 = *(int *)(unaff_EBP - 0xd4), (*(byte *)(iVar31 + 0x60) & 0x80) != 0)) &&
           ((*(char *)((int)unaff_EBX + 0x36) == '\0' || (1 < unaff_EBX[0x21])))) {
          if (*(int *)(iVar31 + 0x70) == 0) {
            unaff_EBX[0x79] = unaff_EBX[0x79] + 1;
            iVar31 = *(int *)(unaff_EBP - 0xd4);
            *(int *)(iVar31 + 0x70) = unaff_EBX[0x78] + unaff_EBX[0x79];
          }
          iVar31 = FUN_004b9ef0((int)unaff_EBX,0,*(int *)(iVar31 + 0x70) + -1);
          *(int *)(unaff_EBP - 0xd0) = iVar31;
          if (iVar31 == 0) {
            uVar27 = FUN_0048ed00(*(undefined4 **)(unaff_EBP - 0xcc),
                                  *(int *)(*(int *)(unaff_EBP - 0xd4) + 0x70));
            *(undefined4 *)(unaff_EBP - 0xd0) = uVar27;
          }
          iVar31 = *(int *)(unaff_EBP - 0xd4);
          *(int *)(iVar31 + 0x90) = unaff_EBX[0x7a];
          *(int *)(iVar31 + 0x94) = unaff_EBX[0x7b];
        }
        goto LAB_004b0d0b;
      case 0x24:
        iVar14 = *(int *)(iVar17 + 4 + iVar31 * 0x14);
        *(int *)(unaff_EBP - 200) = iVar14;
        iVar31 = *(int *)(iVar17 + 0xc + iVar31 * 0x14);
        *(int *)(unaff_EBP - 0xc4) = iVar31;
        FUN_0048fe70(*(undefined4 **)(unaff_EBX[4] + 4 + iVar14 * 0x10),iVar31,
                     (undefined4 *)(unaff_EBP - 0xcc));
        iVar31 = *(int *)(unaff_EBP - 0xcc);
        piVar28[4] = iVar31;
        piVar28[5] = iVar31 >> 0x1f;
        goto LAB_004b0d0b;
      case 0x25:
        iVar14 = *(int *)(unaff_EBP - 0xe0);
        *(int *)(unaff_EBP - 0xcc) = *(int *)(iVar17 + 4 + iVar31 * 0x14) * 0x10 + unaff_EBX[4];
        iVar14 = iVar14 + *(int *)(iVar17 + 0xc + iVar31 * 0x14) * 0x28;
        FUN_004b7410(iVar14);
        uVar18 = FUN_00492040(*(undefined4 **)(*(int *)(unaff_EBP - 0xcc) + 4),
                              *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar31 * 0x14),
                              *(undefined4 *)(iVar14 + 0x10));
        iVar17 = *(int *)(unaff_EBP - 0xdc);
        *(uint *)(unaff_EBP - 0xd0) = uVar18;
        iVar23 = *(int *)(iVar17 + 8 + iVar31 * 0x14);
        if (iVar23 == 1) {
          **(undefined4 **)(*(int *)(unaff_EBP - 0xcc) + 0xc) = *(undefined4 *)(iVar14 + 0x10);
          unaff_EBX[6] = unaff_EBX[6] | 2;
        }
        else if (iVar23 == 2) {
          *(undefined1 *)(*(int *)(*(int *)(unaff_EBP - 0xcc) + 0xc) + 0x4c) =
               *(undefined1 *)(iVar14 + 0x10);
        }
        if (*(int *)(iVar17 + 4 + iVar31 * 0x14) != 1) goto LAB_004af570;
        FUN_00496370((int)unaff_EBX);
        piVar28 = *(int **)(unaff_EBP - 0xd8);
        puVar21 = (uint *)(*(int *)(unaff_EBP - 0xd4) + 0x60);
        *puVar21 = *puVar21 & 0xffffffdf;
        goto LAB_004b0d0b;
      case 0x26:
        puVar26 = *(undefined4 **)(unaff_EBX[4] + 4 + *(int *)(iVar17 + 4 + iVar31 * 0x14) * 0x10);
        *(undefined4 **)(unaff_EBP - 0xc4) = puVar26;
        if (puVar26 == (undefined4 *)0x0) {
          iVar14 = 0;
          *(undefined4 *)(unaff_EBP - 0xcc) = 0;
          iVar23 = 0;
        }
        else {
          FUN_0048fe70(puVar26,1,(undefined4 *)(unaff_EBP - 0xcc));
          iVar17 = *(int *)(unaff_EBP - 0xdc);
          iVar14 = *(int *)(unaff_EBP - 0xcc);
          iVar23 = *(int *)(*(int *)(unaff_EBX[4] + 0xc +
                                    *(int *)(iVar17 + 4 + iVar31 * 0x14) * 0x10) + 4);
        }
        *(int *)(unaff_EBP - 200) = iVar23;
        if ((iVar14 == *(int *)(iVar17 + 8 + iVar31 * 0x14)) &&
           (iVar23 == *(int *)(iVar17 + 0xc + iVar31 * 0x14))) goto LAB_004b0d0b;
        FUN_00494b00((int)unaff_EBX,*(undefined4 **)(*(int *)(unaff_EBP - 0xd4) + 0x34));
        puVar26 = FUN_00494db0((int)unaff_EBX,"database schema has changed");
        *(undefined4 **)(*(int *)(unaff_EBP - 0xd4) + 0x34) = puVar26;
        iVar31 = *(int *)(*(int *)(unaff_EBP - 0xdc) + 4 + iVar31 * 0x14);
        if (**(int **)(unaff_EBX[4] + 0xc + iVar31 * 0x10) != *(int *)(unaff_EBP - 0xcc)) {
          FUN_004a69a0((int)unaff_EBX,iVar31);
        }
        puVar21 = (uint *)(*(int *)(unaff_EBP - 0xd4) + 0x60);
        *puVar21 = *puVar21 | 0x20;
        uVar18 = 0x11;
        *(undefined4 *)(unaff_EBP - 0xd0) = 0x11;
        goto LAB_004b0d11;
      case 0x27:
      case 0x28:
        if ((*(byte *)(*(int *)(unaff_EBP - 0xd4) + 0x60) & 0x20) == 0) {
          iVar14 = *(int *)(unaff_EBP - 0xe4);
          iVar15 = 0;
          *(undefined4 *)(unaff_EBP - 0xcc) = 0;
          *(undefined4 *)(unaff_EBP - 200) = 0;
          iVar23 = *(int *)(iVar17 + 8 + iVar31 * 0x14);
          *(int *)(unaff_EBP - 0xc4) = iVar23;
          iVar17 = *(int *)(iVar17 + 0xc + iVar31 * 0x14);
          *(int *)(unaff_EBP - 0xc0) = iVar17;
          iVar14 = iVar17 * 0x10 + *(int *)(iVar14 + 0x10);
          *(int *)(unaff_EBP - 0xb0) = iVar14;
          *(undefined4 *)(unaff_EBP - 0xb8) = *(undefined4 *)(iVar14 + 4);
          if (*(char *)(*(int *)(unaff_EBP - 0xdc) + iVar31 * 0x14) == '(') {
            *(undefined4 *)(unaff_EBP - 0xbc) = 1;
            bVar10 = *(byte *)(*(int *)(iVar14 + 0xc) + 0x4c);
            if (bVar10 < *(byte *)(*(int *)(unaff_EBP - 0xd4) + 0x5d)) {
              *(byte *)(*(int *)(unaff_EBP - 0xd4) + 0x5d) = bVar10;
            }
          }
          else {
            *(undefined4 *)(unaff_EBP - 0xbc) = 0;
          }
          if ((*(byte *)(*(int *)(unaff_EBP - 0xdc) + 3 + iVar31 * 0x14) & 2) != 0) {
            iVar17 = *(int *)(unaff_EBP - 0xe0) + iVar23 * 0x28;
            FUN_004b7410(iVar17);
            iVar17 = *(int *)(iVar17 + 0x10);
            *(int *)(unaff_EBP - 0xc4) = iVar17;
            if (iVar17 < 2) {
              uVar27 = FUN_00493af0();
              *(undefined4 *)(unaff_EBP - 0xd0) = uVar27;
              goto LAB_004b5720;
            }
            iVar17 = *(int *)(unaff_EBP - 0xc0);
            iVar15 = *(int *)(unaff_EBP - 0xcc);
          }
          iVar14 = *(int *)(unaff_EBP - 0xdc);
          cVar9 = *(char *)(iVar14 + 1 + iVar31 * 0x14);
          if (cVar9 == -6) {
            iVar17 = *(int *)(iVar14 + 0x10 + iVar31 * 0x14);
            iVar23 = **(int **)(unaff_EBP - 0xd4);
            *(int *)(unaff_EBP - 200) = iVar17;
            *(undefined1 *)(iVar17 + 4) =
                 *(undefined1 *)(*(int *)(*(int *)(iVar23 + 0x10) + 0xc) + 0x4d);
            iVar17 = *(int *)(unaff_EBP - 0xc0);
            iVar15 = *(ushort *)(*(int *)(unaff_EBP - 200) + 6) + 1;
LAB_004b20a8:
            *(int *)(unaff_EBP - 0xcc) = iVar15;
          }
          else if (cVar9 == -0xe) {
            iVar15 = *(int *)(iVar14 + 0x10 + iVar31 * 0x14);
            goto LAB_004b20a8;
          }
          puVar26 = FUN_0046c260(*(int **)(unaff_EBP - 0xd4),*(int *)(iVar14 + 4 + iVar31 * 0x14),
                                 iVar15,iVar17,1);
          *(undefined4 **)(unaff_EBP - 0xb4) = puVar26;
          if (puVar26 == (undefined4 *)0x0) goto LAB_004b57a0;
          *(undefined1 *)(puVar26 + 7) = 1;
          *(undefined1 *)(*(int *)(unaff_EBP - 0xb4) + 0x20) = 1;
          uVar27 = FUN_0048f790(*(undefined4 **)(unaff_EBP - 0xb8),*(int *)(unaff_EBP - 0xc4),
                                *(int *)(unaff_EBP - 0xbc),*(int *)(unaff_EBP - 200),
                                (int *)**(undefined4 **)(unaff_EBP - 0xb4));
          iVar17 = *(int *)(unaff_EBP - 0xb4);
          piVar28 = *(int **)(unaff_EBP - 0xd8);
          *(undefined4 *)(unaff_EBP - 0xd0) = uVar27;
          *(undefined4 *)(iVar17 + 8) = *(undefined4 *)(unaff_EBP - 200);
          *(byte *)(**(int **)(unaff_EBP - 0xb4) + 0x5d) = *(byte *)(iVar14 + 3 + iVar31 * 0x14) & 1
          ;
          unaff_EBX = *(int **)(unaff_EBP - 0xe4);
          *(bool *)(*(int *)(unaff_EBP - 0xb4) + 0x1e) = *(char *)(iVar14 + 1 + iVar31 * 0x14) != -6
          ;
          *(bool *)(*(int *)(unaff_EBP - 0xb4) + 0x1f) =
               *(char *)(*(int *)(unaff_EBP - 0xb4) + 0x1e) == '\0';
          goto LAB_004b0d0b;
        }
        uVar18 = 4;
        *(undefined4 *)(unaff_EBP - 0xd0) = 4;
        goto LAB_004b0d11;
      case 0x29:
      case 0x2a:
        puVar26 = FUN_0046c260(*(int **)(unaff_EBP - 0xd4),*(int *)(iVar17 + 4 + iVar31 * 0x14),
                               *(int *)(iVar17 + 8 + iVar31 * 0x14),0xffffffff,1);
        *(undefined4 **)(unaff_EBP - 0xcc) = puVar26;
        if (puVar26 == (undefined4 *)0x0) goto LAB_004b57a6;
        *(undefined1 *)(puVar26 + 7) = 1;
        iVar17 = FUN_00490e00((undefined *)*unaff_EBX,(byte *)0x0,(int)unaff_EBX,
                              (undefined4 *)(*(int *)(unaff_EBP - 0xcc) + 4),
                              *(byte *)(*(int *)(unaff_EBP - 0xdc) + 3 + iVar31 * 0x14) | 5,0x41e);
        *(int *)(unaff_EBP - 0xd0) = iVar17;
        if (iVar17 == 0) {
          uVar18 = FUN_0048ed50(*(int **)(*(int *)(unaff_EBP - 0xcc) + 4),1);
          *(uint *)(unaff_EBP - 0xd0) = uVar18;
          if (uVar18 == 0) {
            if (*(int *)(*(int *)(unaff_EBP - 0xdc) + 0x10 + iVar31 * 0x14) == 0) {
              uVar27 = FUN_0048f790((undefined4 *)(*(undefined4 **)(unaff_EBP - 0xcc))[1],1,1,0,
                                    (int *)**(undefined4 **)(unaff_EBP - 0xcc));
              *(undefined4 *)(unaff_EBP - 0xd0) = uVar27;
              *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + 0x1e) = 1;
            }
            else {
              pcVar24 = FUN_0048f740(*(undefined4 **)(*(int *)(unaff_EBP - 0xcc) + 4),
                                     (undefined4 *)(unaff_EBP - 0x118),
                                     *(byte *)(*(int *)(unaff_EBP - 0xdc) + 3 + iVar31 * 0x14) | 2);
              *(char **)(unaff_EBP - 0xd0) = pcVar24;
              if (pcVar24 == (char *)0x0) {
                uVar27 = FUN_0048f790((undefined4 *)(*(undefined4 **)(unaff_EBP - 0xcc))[1],
                                      *(int *)(unaff_EBP - 0x118),1,
                                      *(int *)(*(int *)(unaff_EBP - 0xdc) + 0x10 + iVar31 * 0x14),
                                      (int *)**(undefined4 **)(unaff_EBP - 0xcc));
                *(undefined4 *)(unaff_EBP - 0xd0) = uVar27;
                *(undefined4 *)(*(int *)(unaff_EBP - 0xcc) + 8) =
                     *(undefined4 *)(*(int *)(unaff_EBP - 0xdc) + 0x10 + iVar31 * 0x14);
                *(undefined1 *)(*(int *)(*(int *)(unaff_EBP - 0xcc) + 8) + 4) =
                     *(undefined1 *)
                      (*(int *)(*(int *)(**(int **)(unaff_EBP - 0xd4) + 0x10) + 0xc) + 0x4d);
              }
              *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + 0x1e) = 0;
            }
          }
        }
        *(bool *)(*(int *)(unaff_EBP - 0xcc) + 0x20) =
             *(char *)(*(int *)(unaff_EBP - 0xdc) + 3 + iVar31 * 0x14) != '\b';
        *(bool *)(*(int *)(unaff_EBP - 0xcc) + 0x1f) =
             *(char *)(*(int *)(unaff_EBP - 0xcc) + 0x1e) == '\0';
        goto LAB_004b0d0b;
      case 0x2b:
        puVar26 = FUN_0046c260(*(int **)(unaff_EBP - 0xd4),*(int *)(iVar17 + 4 + iVar31 * 0x14),
                               *(int *)(iVar17 + 8 + iVar31 * 0x14),0xffffffff,1);
        *(undefined4 **)(unaff_EBP - 0xcc) = puVar26;
        if (puVar26 == (undefined4 *)0x0) goto LAB_004b57a6;
        puVar26[2] = *(undefined4 *)(*(int *)(unaff_EBP - 0xdc) + 0x10 + iVar31 * 0x14);
        *(undefined1 *)(*(int *)(*(int *)(unaff_EBP - 0xcc) + 8) + 4) =
             *(undefined1 *)(*(int *)(*(int *)(**(int **)(unaff_EBP - 0xd4) + 0x10) + 0xc) + 0x4d);
        *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + 0x21) = 1;
        uVar18 = FUN_004b8e80((int)unaff_EBX,*(int *)(unaff_EBP - 0xcc));
        *(uint *)(unaff_EBP - 0xd0) = uVar18;
        goto LAB_004b0d11;
      case 0x2c:
        puVar26 = FUN_0046c260(*(int **)(unaff_EBP - 0xd4),*(int *)(iVar17 + 4 + iVar31 * 0x14),
                               *(int *)(iVar17 + 0xc + iVar31 * 0x14),0xffffffff,0);
        *(undefined4 **)(unaff_EBP - 0xcc) = puVar26;
        if (puVar26 == (undefined4 *)0x0) goto LAB_004b57a6;
        iVar17 = *(int *)(unaff_EBP - 0xdc);
        *(undefined1 *)(puVar26 + 7) = 1;
        *(undefined4 *)(*(int *)(unaff_EBP - 0xcc) + 0x10) =
             *(undefined4 *)(iVar17 + 8 + iVar31 * 0x14);
        *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + 0x1e) = 1;
        *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + 0x1f) = 0;
        *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + 0x22) =
             *(undefined1 *)(iVar17 + 3 + iVar31 * 0x14);
        goto LAB_004b0d0b;
      case 0x2d:
        FUN_004b5ff0(*(int **)(unaff_EBP - 0xd4),
                     *(undefined4 **)
                      ((*(int **)(unaff_EBP - 0xd4))[0x10] +
                      *(int *)(iVar17 + 4 + iVar31 * 0x14) * 4));
        *(undefined4 *)
         (*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
         *(int *)(*(int *)(unaff_EBP - 0xdc) + 4 + iVar31 * 0x14) * 4) = 0;
        goto LAB_004b0d0b;
      case 0x2e:
      case 0x2f:
      case 0x30:
      case 0x31:
        piVar32 = *(int **)(*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
                           *(int *)(iVar17 + 4 + iVar31 * 0x14) * 4);
        *(int **)(unaff_EBP - 0xc4) = piVar32;
        if (*piVar32 == 0) break;
        *(uint *)(unaff_EBP - 200) = (uint)*(byte *)(iVar17 + iVar31 * 0x14);
        *(undefined1 *)(piVar32 + 7) = 0;
        puVar26 = *(undefined4 **)(unaff_EBP - 0xc4);
        if (*(char *)((int)puVar26 + 0x1e) == '\0') {
          *(undefined4 *)(unaff_EBP - 0xa4) = *(undefined4 *)(iVar17 + 0x10 + iVar31 * 0x14);
          *(undefined4 *)(unaff_EBP - 0xbc) = puVar26[2];
          *(undefined2 *)(unaff_EBP - 0xb8) = *(undefined2 *)(unaff_EBP - 0xa4);
          *(byte *)(unaff_EBP - 0xb6) = *(byte *)(unaff_EBP - 200) & 1;
          piVar28 = (int *)(*(int *)(unaff_EBP - 0xe0) +
                           *(int *)(iVar17 + 0xc + iVar31 * 0x14) * 0x28);
          *(int **)(unaff_EBP - 0xac) = piVar28;
          if ((*(ushort *)(piVar28 + 7) & 0x4000) != 0) {
            FUN_004b6fa0(piVar28);
            puVar26 = *(undefined4 **)(unaff_EBP - 0xc4);
          }
          uVar18 = FUN_004908e0((int *)*puVar26,(int *)(unaff_EBP - 0xbc),0,0,0,
                                (uint *)(unaff_EBP - 0xcc));
          *(uint *)(unaff_EBP - 0xd0) = uVar18;
          if (uVar18 != 0) goto LAB_004b572c;
          *(undefined1 *)(*(int *)(unaff_EBP - 0xc4) + 0x19) = 0;
        }
        else {
          iVar17 = *(int *)(unaff_EBP - 0xe0) + *(int *)(iVar17 + 0xc + iVar31 * 0x14) * 0x28;
          FUN_0046dfa0(iVar17);
          uVar40 = FUN_004b65e0(iVar17);
          iVar14 = *(int *)(unaff_EBP - 0xc4);
          *(ulonglong *)(unaff_EBP - 0x9c) = uVar40;
          *(undefined1 *)(iVar14 + 0x19) = 0;
          if ((*(ushort *)(iVar17 + 0x1c) & 4) == 0) {
            if ((*(ushort *)(iVar17 + 0x1c) & 8) == 0) {
              piVar28 = *(int **)(unaff_EBP - 0xd8);
              iVar31 = *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar31 * 0x14);
              goto LAB_004b0d04;
            }
            if ((*(int *)(unaff_EBP - 0x9c) == 0) && (*(int *)(unaff_EBP - 0x98) == -0x80000000)) {
              dVar2 = *(double *)(iVar17 + 8);
              *(undefined4 *)(unaff_EBP - 0x124) = 0;
              *(undefined4 *)(unaff_EBP - 0x120) = 0x80000000;
              *(double *)(unaff_EBP - 0xf4) = (double)*(longlong *)(unaff_EBP - 0x124);
              *(undefined8 *)(unaff_EBP - 0xf4) = *(undefined8 *)(unaff_EBP - 0xf4);
              if ((dVar2 < *(double *)(unaff_EBP - 0xf4)) || (0.0 < dVar2)) {
                *(undefined4 *)(unaff_EBP - 0xcc) = 1;
                if (0.0 < *(double *)(iVar17 + 8) || *(double *)(iVar17 + 8) == 0.0) {
                  if (*(int *)(unaff_EBP - 200) < 0x30) {
                    uVar18 = FUN_004906f0((int *)**(undefined4 **)(unaff_EBP - 0xc4),
                                          (undefined4 *)(unaff_EBP - 0xcc));
                    goto LAB_004b2547;
                  }
                }
                else if (0x2f < *(int *)(unaff_EBP - 200)) {
                  uVar18 = FUN_0048fdc0((int *)**(undefined4 **)(unaff_EBP - 0xc4),
                                        (undefined4 *)(unaff_EBP - 0xcc));
LAB_004b2547:
                  *(uint *)(unaff_EBP - 0xd0) = uVar18;
                  if (uVar18 != 0) goto LAB_004b572c;
                  if (*(int *)(unaff_EBP - 0xcc) == 0) goto LAB_004b0616;
                  piVar28 = *(int **)(unaff_EBP - 0xd8);
                  iVar31 = *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar31 * 0x14);
                  goto LAB_004b0d04;
                }
LAB_004af55f:
                *(int *)(unaff_EBP - 0xe8) =
                     *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar31 * 0x14) + -1;
                goto LAB_004af570;
              }
            }
            if ((*(int *)(unaff_EBP - 200) == 0x2e) || (*(int *)(unaff_EBP - 200) == 0x30)) {
              *(double *)(unaff_EBP - 0xf4) = (double)*(longlong *)(unaff_EBP - 0x9c);
              dVar2 = *(double *)(iVar17 + 8);
              *(undefined8 *)(unaff_EBP - 0xf4) = *(undefined8 *)(unaff_EBP - 0xf4);
              if (dVar2 < *(double *)(unaff_EBP - 0xf4) || dVar2 == *(double *)(unaff_EBP - 0xf4))
              goto LAB_004b2618;
              uVar18 = *(uint *)(unaff_EBP - 0x9c) + 1;
              iVar17 = *(int *)(unaff_EBP - 0x98) + (uint)(0xfffffffe < *(uint *)(unaff_EBP - 0x9c))
              ;
              *(uint *)(unaff_EBP - 0x9c) = uVar18;
              *(int *)(unaff_EBP - 0x98) = iVar17;
            }
            else {
              *(double *)(unaff_EBP - 0xf4) = (double)*(longlong *)(unaff_EBP - 0x9c);
              *(undefined8 *)(unaff_EBP - 0xf4) = *(undefined8 *)(unaff_EBP - 0xf4);
              if (*(double *)(unaff_EBP - 0xf4) < *(double *)(iVar17 + 8) ||
                  *(double *)(unaff_EBP - 0xf4) == *(double *)(iVar17 + 8)) goto LAB_004b2618;
              uVar18 = *(int *)(unaff_EBP - 0x9c) - 1;
              iVar17 = *(int *)(unaff_EBP - 0x98) + -1 + (uint)(*(int *)(unaff_EBP - 0x9c) != 0);
              *(uint *)(unaff_EBP - 0x9c) = uVar18;
              *(int *)(unaff_EBP - 0x98) = iVar17;
            }
          }
          else {
LAB_004b2618:
            iVar17 = *(int *)(unaff_EBP - 0x98);
            uVar18 = *(uint *)(unaff_EBP - 0x9c);
          }
          uVar18 = FUN_004908e0((int *)**(undefined4 **)(unaff_EBP - 0xc4),(int *)0x0,uVar18,iVar17,
                                0,(uint *)(unaff_EBP - 0xcc));
          *(uint *)(unaff_EBP - 0xd0) = uVar18;
          if (uVar18 != 0) goto LAB_004b572c;
          if (*(int *)(unaff_EBP - 0xcc) == 0) {
            *(undefined1 *)(*(int *)(unaff_EBP - 0xc4) + 0x19) = 1;
            *(undefined4 *)(*(int *)(unaff_EBP - 0xc4) + 0x40) = *(undefined4 *)(unaff_EBP - 0x9c);
            *(undefined4 *)(*(int *)(unaff_EBP - 0xc4) + 0x44) = *(undefined4 *)(unaff_EBP - 0x98);
          }
        }
        *(undefined1 *)(*(int *)(unaff_EBP - 0xc4) + 0x1d) = 0;
        *(undefined4 *)(*(int *)(unaff_EBP - 0xc4) + 0x50) = 0;
        iVar17 = *(int *)(unaff_EBP - 200);
        iVar14 = *(int *)(unaff_EBP - 0xcc);
        if (iVar17 < 0x30) {
          if ((iVar14 < 1) && ((iVar14 != 0 || (iVar17 != 0x2e)))) {
            uVar18 = (uint)(*(char *)(**(int **)(unaff_EBP - 0xc4) + 0x5b) != '\x01');
            *(uint *)(unaff_EBP - 0xcc) = uVar18;
            bVar12 = uVar18 == 0;
            goto LAB_004b07b5;
          }
          uVar18 = FUN_00491450((int *)**(undefined4 **)(unaff_EBP - 0xc4),
                                (undefined4 *)(unaff_EBP - 0xcc));
        }
        else {
          if ((-1 < iVar14) && ((iVar14 != 0 || (iVar17 != 0x31)))) {
            piVar28 = *(int **)(unaff_EBP - 0xd8);
            *(undefined4 *)(unaff_EBP - 0xcc) = 0;
            goto LAB_004b0d0b;
          }
          uVar18 = FUN_00490c90((int *)**(undefined4 **)(unaff_EBP - 0xc4),
                                (undefined4 *)(unaff_EBP - 0xcc));
        }
        *(uint *)(unaff_EBP - 0xd0) = uVar18;
        if (uVar18 == 0) {
          *(undefined1 *)(*(int *)(unaff_EBP - 0xc4) + 0x19) = 0;
          bVar12 = *(int *)(unaff_EBP - 0xcc) == 0;
LAB_004b07b5:
          piVar28 = *(int **)(unaff_EBP - 0xd8);
          goto LAB_004b07bb;
        }
        goto LAB_004b572c;
      case 0x32:
        piVar32 = *(int **)(*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
                           *(int *)(iVar17 + 4 + iVar31 * 0x14) * 4);
        *(int **)(unaff_EBP - 0xcc) = piVar32;
        if (*piVar32 != 0) {
          iVar14 = *(int *)(unaff_EBP - 0xe0);
          *(undefined1 *)(piVar32 + 7) = 0;
          uVar40 = FUN_004b65e0(iVar14 + *(int *)(iVar17 + 8 + iVar31 * 0x14) * 0x28);
          *(int *)(*(int *)(unaff_EBP - 0xcc) + 0x38) = (int)uVar40;
          *(int *)(*(int *)(unaff_EBP - 0xcc) + 0x3c) = (int)(uVar40 >> 0x20);
          *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + 0x19) = 0;
          *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + 0x1d) = 1;
        }
        goto LAB_004b0d0b;
      case 0x33:
      case 0x34:
        iVar17 = *(int *)(unaff_EBP - 0xdc);
        iVar23 = 0;
        iVar14 = *(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40);
        *(undefined4 *)(unaff_EBP - 0xcc) = 0;
        piVar28 = *(int **)(iVar14 + *(int *)(iVar17 + 4 + iVar31 * 0x14) * 4);
        *(int **)(unaff_EBP - 200) = piVar28;
        iVar17 = *(int *)(unaff_EBP - 0xe0) + *(int *)(iVar17 + 0xc + iVar31 * 0x14) * 0x28;
        if (*piVar28 != 0) {
          iVar14 = *(int *)(unaff_EBP - 0xdc);
          if (*(int *)(iVar14 + 0x10 + iVar31 * 0x14) < 1) {
            puVar26 = FUN_004aebc0((int *)piVar28[2],unaff_EBP - 0x9c,0x97,
                                   (undefined4 *)(unaff_EBP - 0xc0));
            *(undefined4 **)(unaff_EBP - 0xbc) = puVar26;
            if (puVar26 == (undefined4 *)0x0) goto LAB_004b57a6;
            FUN_004b8560(*(undefined4 **)(*(int *)(unaff_EBP - 200) + 8),*(int *)(iVar17 + 0x18),
                         *(byte **)(iVar17 + 4),(uint)puVar26);
            pbVar35 = (byte *)(*(int *)(unaff_EBP - 0xbc) + 6);
            *pbVar35 = *pbVar35 | 2;
            piVar32 = *(int **)(unaff_EBP - 0xbc);
            piVar28 = *(int **)(unaff_EBP - 200);
          }
          else {
            *(int *)(unaff_EBP - 0xb4) = piVar28[2];
            *(undefined2 *)(unaff_EBP - 0xb0) = *(undefined2 *)(iVar14 + 0x10 + iVar31 * 0x14);
            piVar32 = (int *)(unaff_EBP - 0xb4);
            *(int *)(unaff_EBP - 0xa4) = iVar17;
            *(undefined1 *)(unaff_EBP - 0xae) = 2;
            *(int **)(unaff_EBP - 0xbc) = piVar32;
          }
          uVar18 = FUN_004908e0((int *)*piVar28,piVar32,0,0,0,(uint *)(unaff_EBP - 0xc4));
          *(uint *)(unaff_EBP - 0xd0) = uVar18;
          if (*(int *)(*(int *)(unaff_EBP - 0xdc) + 0x10 + iVar31 * 0x14) == 0) {
            FUN_00494b00((int)unaff_EBX,*(undefined4 **)(unaff_EBP - 0xc0));
          }
          uVar18 = *(uint *)(unaff_EBP - 0xd0);
          if (uVar18 != 0) goto LAB_004b0616;
          *(uint *)(unaff_EBP - 0xcc) = (uint)(*(int *)(unaff_EBP - 0xc4) == 0);
          *(undefined1 *)(*(int *)(unaff_EBP - 200) + 0x1d) = 0;
          *(undefined4 *)(*(int *)(unaff_EBP - 200) + 0x50) = 0;
          iVar23 = *(int *)(unaff_EBP - 0xcc);
        }
        iVar17 = *(int *)(unaff_EBP - 0xdc);
        piVar28 = *(int **)(unaff_EBP - 0xd8);
        if (*(char *)(iVar17 + iVar31 * 0x14) == '4') {
          if (iVar23 == 0) goto LAB_004b0d0b;
          iVar31 = *(int *)(iVar17 + 8 + iVar31 * 0x14);
        }
        else {
          if (iVar23 != 0) goto LAB_004b0d0b;
          iVar31 = *(int *)(iVar17 + 8 + iVar31 * 0x14);
        }
        goto LAB_004b0d04;
      case 0x35:
        iVar14 = *(int *)(unaff_EBP - 0xe0) + *(int *)(iVar17 + 0xc + iVar31 * 0x14) * 0x28;
        *(int *)(unaff_EBP - 0xbc) =
             *(int *)(unaff_EBP - 0xe0) + *(int *)(iVar17 + 0x10 + iVar31 * 0x14) * 0x28;
        iVar17 = *(int *)(*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
                         *(int *)(iVar17 + 4 + iVar31 * 0x14) * 4);
        *(int *)(unaff_EBP - 200) = iVar17;
        *(undefined4 *)(iVar17 + 0x4c) = 0;
        *(undefined4 *)(*(int *)(unaff_EBP - 200) + 0x50) = 0;
        puVar26 = *(undefined4 **)(unaff_EBP - 200);
        iVar17 = *(int *)(unaff_EBP - 0xbc);
        uVar27 = *puVar26;
        *(undefined4 *)(unaff_EBP - 0xc4) = uVar27;
        iVar23 = puVar26[2];
        *(undefined4 *)(unaff_EBP - 0xf0) = uVar27;
        uVar4 = *(ushort *)(iVar23 + 6);
        uVar29 = 0;
        *(ushort *)(unaff_EBP - 0xc0) = uVar4;
        *(undefined2 *)(unaff_EBP - 0xcc) = 0;
        if (uVar4 == 0) goto LAB_004b2a6e;
        uVar18 = 0;
        goto LAB_004b2a50;
      case 0x36:
        iVar14 = *(int *)(iVar17 + 0xc + iVar31 * 0x14);
        puVar26 = *(undefined4 **)
                   (*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
                   *(int *)(iVar17 + 4 + iVar31 * 0x14) * 4);
        *(undefined4 **)(unaff_EBP - 0xcc) = puVar26;
        piVar28 = (int *)*puVar26;
        *(int **)(unaff_EBP - 200) = piVar28;
        if (piVar28 == (int *)0x0) {
          *(int *)(unaff_EBP - 0xe8) = *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar31 * 0x14) + -1
          ;
          piVar28 = *(int **)(unaff_EBP - 0xd8);
          puVar26[0x13] = 0;
        }
        else {
          iVar17 = *(int *)(unaff_EBP - 0xe0);
          *(undefined4 *)(unaff_EBP - 0xc4) = 0;
          uVar18 = *(uint *)(iVar17 + 0x10 + iVar14 * 0x28);
          *(uint *)(unaff_EBP - 0xbc) = uVar18;
          iVar17 = *(int *)(iVar17 + 0x14 + iVar14 * 0x28);
          *(int *)(unaff_EBP - 0xb8) = iVar17;
          uVar18 = FUN_004908e0(piVar28,(int *)0x0,uVar18,iVar17,0,(uint *)(unaff_EBP - 0xc4));
          iVar17 = *(int *)(unaff_EBP - 0xe0);
          *(uint *)(unaff_EBP - 0xd0) = uVar18;
          *(undefined4 *)(*(int *)(unaff_EBP - 0xcc) + 0x40) =
               *(undefined4 *)(iVar17 + 0x10 + iVar14 * 0x28);
          unaff_EBX = *(int **)(unaff_EBP - 0xe4);
          *(undefined4 *)(*(int *)(unaff_EBP - 0xcc) + 0x44) =
               *(undefined4 *)(iVar17 + 0x14 + iVar14 * 0x28);
          *(bool *)(*(int *)(unaff_EBP - 0xcc) + 0x19) = *(int *)(unaff_EBP - 0xc4) == 0;
          *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + 0x1c) = 0;
          *(undefined4 *)(*(int *)(unaff_EBP - 0xcc) + 0x50) = 0;
          *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + 0x1d) = 0;
          iVar17 = *(int *)(unaff_EBP - 0xc4);
          if (iVar17 != 0) {
            *(int *)(unaff_EBP - 0xe8) =
                 *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar31 * 0x14) + -1;
          }
          piVar28 = *(int **)(unaff_EBP - 0xd8);
          *(int *)(*(int *)(unaff_EBP - 0xcc) + 0x4c) = iVar17;
        }
        goto LAB_004b0d0b;
      case 0x37:
        iVar14 = *(int *)(*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
                         *(int *)(iVar17 + 4 + iVar31 * 0x14) * 4);
        piVar28[4] = *(int *)(iVar14 + 0x30);
        piVar28[5] = *(int *)(iVar14 + 0x34);
        iVar31 = *(int *)(*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
                         *(int *)(iVar17 + 4 + iVar31 * 0x14) * 4);
        puVar21 = (uint *)(iVar31 + 0x30);
        uVar18 = *puVar21;
        *puVar21 = *puVar21 + 1;
        piVar32 = (int *)(iVar31 + 0x34);
        *piVar32 = *piVar32 + (uint)(0xfffffffe < uVar18);
        goto LAB_004b0d0b;
      case 0x38:
        goto switchD_004af4da_caseD_38;
      case 0x39:
      case 0x3a:
        iVar14 = *(int *)(unaff_EBP - 0xe0) + *(int *)(iVar17 + 8 + iVar31 * 0x14) * 0x28;
        iVar23 = *(int *)(unaff_EBP - 0xd4);
        *(int *)(unaff_EBP - 0xcc) = iVar14;
        piVar28 = *(int **)(*(int *)(iVar23 + 0x40) + *(int *)(iVar17 + 4 + iVar31 * 0x14) * 4);
        *(int **)(unaff_EBP - 0xbc) = piVar28;
        iVar23 = *(int *)(iVar17 + 0xc + iVar31 * 0x14);
        if (*(char *)(iVar17 + iVar31 * 0x14) == '9') {
          iVar17 = *(int *)(unaff_EBP - 0xe0) + iVar23 * 0x28;
          *(int *)(unaff_EBP - 200) = iVar17;
          iVar23 = *(int *)(iVar17 + 0x10);
          *(int *)(unaff_EBP - 0xc4) = iVar23;
          iVar17 = *(int *)(iVar17 + 0x14);
        }
        else {
          iVar17 = iVar23 >> 0x1f;
          *(int *)(unaff_EBP - 0xc4) = iVar23;
        }
        iVar15 = *(int *)(unaff_EBP - 0xdc);
        *(int *)(unaff_EBP - 0xc0) = iVar17;
        if ((*(byte *)(iVar15 + 3 + iVar31 * 0x14) & 1) != 0) {
          piVar32 = (int *)(*(int *)(unaff_EBP - 0xd4) + 100);
          *piVar32 = *piVar32 + 1;
          iVar15 = *(int *)(unaff_EBP - 0xdc);
        }
        if ((*(byte *)(iVar15 + 3 + iVar31 * 0x14) & 2) != 0) {
          *(int *)(unaff_EBP - 0xfc) = iVar17;
          iVar17 = *(int *)(unaff_EBP - 0xe4);
          *(int *)(unaff_EBP - 0x100) = iVar23;
          *(int *)(iVar17 + 0x20) = iVar23;
          *(undefined4 *)(iVar17 + 0x24) = *(undefined4 *)(unaff_EBP - 0xc0);
          piVar28 = *(int **)(unaff_EBP - 0xbc);
          iVar14 = *(int *)(unaff_EBP - 0xcc);
        }
        if ((*(byte *)(iVar14 + 0x1c) & 1) != 0) {
          *(undefined4 *)(iVar14 + 4) = 0;
          *(undefined4 *)(*(int *)(unaff_EBP - 0xcc) + 0x18) = 0;
          piVar28 = *(int **)(unaff_EBP - 0xbc);
          iVar14 = *(int *)(unaff_EBP - 0xcc);
        }
        if ((*(byte *)(*(int *)(unaff_EBP - 0xdc) + 3 + iVar31 * 0x14) & 0x10) == 0) {
          *(undefined4 *)(unaff_EBP - 0xb4) = 0;
        }
        else {
          *(int *)(unaff_EBP - 0xb4) = piVar28[0x13];
        }
        if ((*(ushort *)(iVar14 + 0x1c) & 0x4000) == 0) {
          *(undefined4 *)(unaff_EBP - 0xb8) = 0;
        }
        else {
          *(undefined4 *)(unaff_EBP - 0xb8) = *(undefined4 *)(iVar14 + 0x10);
        }
        FUN_00491bc0(*piVar28,0,0);
        iVar17 = *(int *)(unaff_EBP - 0xdc);
        puVar21 = FUN_0048ffe0((uint *)**(undefined4 **)(unaff_EBP - 0xbc),(byte *)0x0,
                               *(uint *)(unaff_EBP - 0xc4),*(uint *)(unaff_EBP - 0xc0),
                               *(void **)(*(int *)(unaff_EBP - 0xcc) + 4),
                               *(size_t *)(*(int *)(unaff_EBP - 0xcc) + 0x18),
                               *(size_t *)(unaff_EBP - 0xb8),
                               *(byte *)(iVar17 + 3 + iVar31 * 0x14) & 8,
                               *(uint **)(unaff_EBP - 0xb4));
        *(undefined1 *)(*(int *)(unaff_EBP - 0xbc) + 0x19) = 0;
        iVar14 = *(int *)(unaff_EBP - 0xbc);
        *(uint **)(unaff_EBP - 0xd0) = puVar21;
        *(undefined1 *)(iVar14 + 0x1d) = 0;
        unaff_EBX = *(int **)(unaff_EBP - 0xe4);
        *(undefined4 *)(*(int *)(unaff_EBP - 0xbc) + 0x50) = 0;
        if (((puVar21 != (uint *)0x0) || (unaff_EBX[0x2f] == 0)) ||
           (*(int *)(iVar17 + 0x10 + iVar31 * 0x14) == 0)) goto LAB_004af570;
        uVar27 = *(undefined4 *)(unaff_EBP - 0xc4);
        uVar6 = *(undefined4 *)(unaff_EBX[4] + *(int *)(*(int *)(unaff_EBP - 0xbc) + 0xc) * 0x10);
        *(undefined4 *)(unaff_EBP - 0xb0) = uVar6;
        uVar7 = *(undefined4 *)(iVar17 + 0x10 + iVar31 * 0x14);
        *(undefined4 *)(unaff_EBP - 0xac) = uVar7;
        uVar19 = 0x12;
        if ((*(byte *)(iVar17 + 3 + iVar31 * 0x14) & 4) != 0) {
          uVar19 = 0x17;
        }
        *(undefined4 *)(unaff_EBP - 0xa8) = uVar19;
        (*(code *)unaff_EBX[0x2f])(unaff_EBX[0x2e],uVar19,uVar6,uVar7,uVar27);
        piVar28 = *(int **)(unaff_EBP - 0xd8);
        goto LAB_004b0d0b;
      case 0x3b:
        iVar14 = *(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40);
        *(undefined8 *)(unaff_EBP - 0xcc) = 0;
        puVar26 = *(undefined4 **)(iVar14 + *(int *)(iVar17 + 4 + iVar31 * 0x14) * 4);
        *(undefined4 **)(unaff_EBP - 0xc4) = puVar26;
        if ((unaff_EBX[0x2f] != 0) && (*(int *)(iVar17 + 0x10 + iVar31 * 0x14) != 0)) {
          *(undefined4 *)(unaff_EBP - 0xcc) = puVar26[0x10];
          *(undefined4 *)(unaff_EBP - 200) = puVar26[0x11];
        }
        uVar18 = FUN_004af1b0(puVar26);
        *(uint *)(unaff_EBP - 0xd0) = uVar18;
        if (uVar18 != 0) goto LAB_004b572c;
        FUN_00491bc0(**(int **)(unaff_EBP - 0xc4),0,0);
        uVar18 = FUN_0048f930((uint *)**(undefined4 **)(unaff_EBP - 0xc4));
        *(uint *)(unaff_EBP - 0xd0) = uVar18;
        iVar17 = *(int *)(unaff_EBP - 0xd0);
        *(undefined4 *)(*(int *)(unaff_EBP - 0xc4) + 0x50) = 0;
        if (((iVar17 == 0) && ((code *)unaff_EBX[0x2f] != (code *)0x0)) &&
           (iVar17 = *(int *)(*(int *)(unaff_EBP - 0xdc) + 0x10 + iVar31 * 0x14), iVar17 != 0)) {
          (*(code *)unaff_EBX[0x2f])
                    (unaff_EBX[0x2e],9,
                     *(undefined4 *)
                      (unaff_EBX[4] + *(int *)(*(int *)(unaff_EBP - 0xc4) + 0xc) * 0x10),iVar17,
                     *(undefined4 *)(unaff_EBP - 0xcc));
        }
        if ((*(byte *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar31 * 0x14) & 1) != 0) {
          piVar32 = (int *)(*(int *)(unaff_EBP - 0xd4) + 100);
          *piVar32 = *piVar32 + 1;
        }
        goto LAB_004b0d0b;
      case 0x3c:
        iVar31 = *(int *)(*(int *)(unaff_EBP - 0xd4) + 100);
        unaff_EBX[0x13] = unaff_EBX[0x13] + iVar31;
        unaff_EBX[0x12] = iVar31;
        *(undefined4 *)(*(int *)(unaff_EBP - 0xd4) + 100) = 0;
        goto LAB_004b0d0b;
      case 0x3d:
        iVar14 = *(int *)(*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
                         *(int *)(iVar17 + 4 + iVar31 * 0x14) * 4);
        *(int *)(unaff_EBP - 0xcc) = iVar14;
        uVar18 = FUN_004b8dd0(iVar14,*(int *)(unaff_EBP - 0xe0) +
                                     *(int *)(iVar17 + 0xc + iVar31 * 0x14) * 0x28,
                              (uint *)(unaff_EBP - 200));
        iVar17 = *(int *)(unaff_EBP - 200);
        *(uint *)(unaff_EBP - 0xd0) = uVar18;
        if (iVar17 != 0) {
          iVar31 = *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar31 * 0x14);
          goto LAB_004b0d04;
        }
        goto LAB_004b0d11;
      case 0x3e:
        piVar28 = (int *)(*(int *)(unaff_EBP - 0xe0) + *(int *)(iVar17 + 8 + iVar31 * 0x14) * 0x28);
        iVar31 = *(int *)(*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
                         *(int *)(iVar17 + 4 + iVar31 * 0x14) * 4);
        *(int **)(unaff_EBP - 0xd8) = piVar28;
        *(int *)(unaff_EBP - 0xcc) = iVar31;
        uVar18 = FUN_004b92e0(iVar31,piVar28);
        *(uint *)(unaff_EBP - 0xd0) = uVar18;
        goto LAB_004b0d11;
      case 0x3f:
      case 0x40:
        iVar14 = *(int *)(iVar17 + 4 + iVar31 * 0x14);
        *(int *)(unaff_EBP - 0xd8) =
             *(int *)(unaff_EBP - 0xe0) + *(int *)(iVar17 + 8 + iVar31 * 0x14) * 0x28;
        puVar26 = *(undefined4 **)(*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) + iVar14 * 4);
        *(undefined4 **)(unaff_EBP - 0xcc) = puVar26;
        *(undefined4 *)(unaff_EBP - 200) = *puVar26;
        uVar18 = FUN_004af1b0(puVar26);
        *(uint *)(unaff_EBP - 0xd0) = uVar18;
        if (uVar18 != 0) goto LAB_004b572c;
        if (*(char *)(*(int *)(unaff_EBP - 0xcc) + 0x1f) == '\0') {
          FUN_0048f8d0(*(int *)(unaff_EBP - 200),(undefined4 *)(unaff_EBP - 0xc4));
          uVar18 = *(uint *)(unaff_EBP - 0xc4);
          if ((uint)unaff_EBX[0x14] < uVar18) goto LAB_004b5780;
        }
        else {
          FUN_004906b0(*(int *)(unaff_EBP - 200),(undefined4 *)(unaff_EBP - 0xbc));
          iVar31 = unaff_EBX[0x14] >> 0x1f;
          if ((iVar31 < *(int *)(unaff_EBP - 0xb8)) ||
             ((uVar18 = *(uint *)(unaff_EBP - 0xbc), iVar31 <= *(int *)(unaff_EBP - 0xb8) &&
              ((uint)unaff_EBX[0x14] < uVar18)))) goto LAB_004b5780;
          *(uint *)(unaff_EBP - 0xc4) = uVar18;
        }
        piVar32 = *(int **)(unaff_EBP - 0xd8);
        iVar31 = FUN_004b7260(piVar32,uVar18,0);
        if (iVar31 != 0) goto LAB_004b57a6;
        piVar32[6] = *(int *)(unaff_EBP - 0xc4);
        *(ushort *)(piVar32 + 7) = *(ushort *)(piVar32 + 7) & 0xbe10 | 0x10;
        if (*(char *)(*(int *)(unaff_EBP - 0xcc) + 0x1f) == '\0') {
          uVar18 = FUN_0048f870(*(int **)(unaff_EBP - 200),0,*(size_t *)(unaff_EBP - 0xc4),
                                (void *)piVar32[1]);
          piVar28 = *(int **)(unaff_EBP - 0xd8);
          *(uint *)(unaff_EBP - 0xd0) = uVar18;
          *(undefined1 *)((int)piVar32 + 0x1f) = 1;
        }
        else {
          uVar18 = FUN_0046b2f0(*(int *)(unaff_EBP - 200),0,*(size_t *)(unaff_EBP - 0xc4),
                                (void *)piVar32[1],0);
          *(uint *)(unaff_EBP - 0xd0) = uVar18;
          *(undefined1 *)((int)piVar32 + 0x1f) = 1;
          piVar28 = piVar32;
        }
        goto LAB_004b0d11;
      case 0x41:
        puVar26 = *(undefined4 **)
                   (*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
                   *(int *)(iVar17 + 4 + iVar31 * 0x14) * 4);
        *(undefined4 **)(unaff_EBP - 0xcc) = puVar26;
        if (*(char *)(puVar26 + 7) != '\0') {
          *(undefined2 *)(piVar28 + 7) = 1;
          goto LAB_004b0d0b;
        }
        if (*(char *)((int)puVar26 + 0x1d) != '\0') {
          *(undefined4 *)(unaff_EBP - 0xc4) = puVar26[0xe];
          *(undefined4 *)(unaff_EBP - 0xc0) = puVar26[0xf];
          piVar28[4] = *(int *)(unaff_EBP - 0xc4);
          piVar28[5] = *(int *)(unaff_EBP - 0xc0);
          goto LAB_004b0d0b;
        }
        if ((undefined4 *)puVar26[9] == (undefined4 *)0x0) {
          uVar18 = FUN_004af1b0(puVar26);
          *(uint *)(unaff_EBP - 0xd0) = uVar18;
          if (uVar18 != 0) goto LAB_004b572c;
          piVar32 = *(int **)(unaff_EBP - 0xcc);
          if (*(char *)((int)piVar32 + 0x19) == '\0') {
            uVar27 = FUN_004906b0(*piVar32,(undefined4 *)(unaff_EBP - 0xc4));
            *(undefined4 *)(unaff_EBP - 0xd0) = uVar27;
            piVar28[4] = *(int *)(unaff_EBP - 0xc4);
            piVar28[5] = *(int *)(unaff_EBP - 0xc0);
          }
          else {
            *(int *)(unaff_EBP - 0xc4) = piVar32[0x10];
            *(int *)(unaff_EBP - 0xc0) = piVar32[0x11];
            piVar28[4] = *(int *)(unaff_EBP - 0xc4);
            piVar28[5] = *(int *)(unaff_EBP - 0xc0);
          }
        }
        else {
          piVar32 = *(int **)puVar26[9];
          *(int **)(unaff_EBP - 0xbc) = piVar32;
          iVar31 = *piVar32;
          *(int *)(unaff_EBP - 0xb8) = iVar31;
          uVar27 = (**(code **)(iVar31 + 0x30))(puVar26[9]);
          iVar31 = *(int *)(unaff_EBP - 0xbc);
          *(undefined4 *)(unaff_EBP - 0xd0) = uVar27;
          FUN_0047e200(*(int **)(unaff_EBP - 0xd4),iVar31);
          piVar28[4] = *(int *)(unaff_EBP - 0xc4);
          piVar28[5] = *(int *)(unaff_EBP - 0xc0);
        }
        goto LAB_004b0d0b;
      case 0x42:
        iVar31 = *(int *)(*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
                         *(int *)(iVar17 + 4 + iVar31 * 0x14) * 4);
        *(int *)(unaff_EBP - 0xcc) = iVar31;
        *(undefined1 *)(iVar31 + 0x1c) = 1;
        *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + 0x19) = 0;
        if (**(int **)(unaff_EBP - 0xcc) != 0) {
          FUN_0048efd0(**(int **)(unaff_EBP - 0xcc));
        }
        goto LAB_004b0d0b;
      case 0x43:
        puVar26 = *(undefined4 **)
                   (*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
                   *(int *)(iVar17 + 4 + iVar31 * 0x14) * 4);
        *(undefined4 **)(unaff_EBP - 0xcc) = puVar26;
        piVar32 = (int *)*puVar26;
        *(int **)(unaff_EBP - 200) = piVar32;
        *(undefined4 *)(unaff_EBP - 0xc4) = 0;
        if (piVar32 != (int *)0x0) {
          iVar14 = FUN_004906f0(piVar32,(undefined4 *)(unaff_EBP - 0xc4));
          puVar26 = *(undefined4 **)(unaff_EBP - 0xcc);
          iVar17 = *(int *)(unaff_EBP - 0xdc);
          *(int *)(unaff_EBP - 0xd0) = iVar14;
        }
        *(undefined1 *)(puVar26 + 7) = *(undefined1 *)(unaff_EBP - 0xc4);
        *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + 0x1d) = 0;
        *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + 0x19) = 0;
        *(undefined4 *)(*(int *)(unaff_EBP - 0xcc) + 0x50) = 0;
        iVar31 = *(int *)(iVar17 + 8 + iVar31 * 0x14);
        if ((iVar31 < 1) || (*(int *)(unaff_EBP - 0xc4) == 0)) goto LAB_004b0d0b;
        goto LAB_004b0d04;
      case 0x44:
      case 0x45:
        iVar14 = *(int *)(iVar17 + 4 + iVar31 * 0x14);
        iVar23 = *(int *)(unaff_EBP - 0xe0);
        if ((*(byte *)(iVar23 + 0x1c + iVar14 * 0x28) & 1) == 0) {
          uVar40 = FUN_004b65e0(iVar23 + iVar14 * 0x28);
          iVar17 = *(int *)(unaff_EBP - 0xdc);
          if (uVar40 == 0) {
            iVar14 = 0;
          }
          else {
            iVar14 = 1;
          }
        }
        else {
          iVar14 = 2;
        }
        *(int *)(unaff_EBP - 0xcc) = iVar14;
        iVar15 = *(int *)(iVar17 + 8 + iVar31 * 0x14);
        if ((*(byte *)(iVar23 + 0x1c + iVar15 * 0x28) & 1) == 0) {
          uVar40 = FUN_004b65e0(iVar23 + iVar15 * 0x28);
          iVar14 = *(int *)(unaff_EBP - 0xcc);
          iVar17 = *(int *)(unaff_EBP - 0xdc);
          if (uVar40 == 0) {
            iVar15 = 0;
          }
          else {
            iVar15 = 1;
          }
        }
        else {
          iVar15 = 2;
        }
        *(int *)(unaff_EBP - 200) = iVar15;
        iVar15 = iVar15 + iVar14 * 2;
        if (*(char *)(iVar17 + iVar31 * 0x14) == 'E') {
          bVar10 = (&UNK_0056a1cc)[iVar15 + iVar14];
        }
        else {
          bVar10 = (&UNK_0056a284)[iVar15 + iVar14];
        }
        uVar18 = (uint)bVar10;
        *(uint *)(unaff_EBP - 0xcc) = uVar18;
        piVar28 = (int *)(iVar23 + *(int *)(iVar17 + 0xc + iVar31 * 0x14) * 0x28);
        *(int **)(unaff_EBP - 0xd8) = piVar28;
        if (uVar18 == 2) {
          *(ushort *)(piVar28 + 7) = *(ushort *)(piVar28 + 7) & 0xbe01 | 1;
        }
        else {
          piVar28[4] = uVar18;
          piVar28[5] = 0;
          *(ushort *)(piVar28 + 7) = *(ushort *)(piVar28 + 7) & 0xbe04 | 4;
        }
        goto LAB_004b0d0b;
      case 0x46:
      case 0x47:
        iVar14 = *(int *)(unaff_EBP - 0xd4);
        *(int *)(iVar14 + 0x78) = *(int *)(iVar14 + 0x78) + 1;
        goto LAB_004b3746;
      case 0x48:
        iVar14 = *(int *)(unaff_EBP - 0xd4);
LAB_004b3746:
        puVar26 = *(undefined4 **)
                   (*(int *)(iVar14 + 0x40) + *(int *)(iVar17 + 4 + iVar31 * 0x14) * 4);
        *(undefined4 **)(unaff_EBP - 0xcc) = puVar26;
        *(undefined4 *)(unaff_EBP - 0xc4) = 1;
        if (puVar26[0x12] == 0) {
          piVar32 = (int *)*puVar26;
          *(int **)(unaff_EBP - 200) = piVar32;
          uVar27 = FUN_0048fdc0(piVar32,(uint *)(unaff_EBP - 0xc4));
          *(undefined4 *)(unaff_EBP - 0xd0) = uVar27;
          *(bool *)(*(int *)(unaff_EBP - 0xcc) + 0x1a) = *(int *)(unaff_EBP - 0xc4) == 0;
          *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + 0x1d) = 0;
          *(undefined4 *)(*(int *)(unaff_EBP - 0xcc) + 0x50) = 0;
          *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + 0x19) = 0;
          *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + 0x1c) = *(undefined1 *)(unaff_EBP - 0xc4);
          bVar12 = *(int *)(unaff_EBP - 0xc4) == 0;
        }
        else {
          uVar27 = FUN_004b9000(unaff_EBX,(int)puVar26,(uint *)(unaff_EBP - 0xc4));
          uVar11 = *(undefined1 *)(unaff_EBP - 0xc4);
          *(undefined4 *)(unaff_EBP - 0xd0) = uVar27;
          *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + 0x1c) = uVar11;
          bVar12 = *(int *)(unaff_EBP - 0xc4) == 0;
        }
LAB_004b07bb:
        if (bVar12) goto LAB_004b0d0b;
        iVar31 = *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar31 * 0x14);
        goto LAB_004b0d04;
      case 0x49:
        if ((*(byte *)(*(int *)(unaff_EBP - 0xe0) + 0x1c +
                      *(int *)(iVar17 + 4 + iVar31 * 0x14) * 0x28) & 1) == 0) goto LAB_004b0d0b;
        break;
      case 0x4a:
        bVar12 = (*(byte *)(*(int *)(unaff_EBP - 0xe0) + 0x1c +
                           *(int *)(iVar17 + 4 + iVar31 * 0x14) * 0x28) & 1) == 0;
        goto LAB_004b0cfe;
      case 0x4b:
      case 0x4c:
      case 0x4d:
      case 0x4e:
      case 0x4f:
      case 0x50:
        piVar28 = (int *)(*(int *)(unaff_EBP - 0xe0) + *(int *)(iVar17 + 4 + iVar31 * 0x14) * 0x28);
        piVar32 = (int *)(*(int *)(unaff_EBP - 0xe0) + *(int *)(iVar17 + 0xc + iVar31 * 0x14) * 0x28
                         );
        *(short *)(unaff_EBP - 0xc6) = (short)piVar28[7];
        uVar4 = *(ushort *)(piVar32 + 7);
        bVar10 = *(byte *)(unaff_EBP - 0xc6);
        *(ushort *)(unaff_EBP - 0xc4) = uVar4;
        bVar3 = *(byte *)(*(int *)(unaff_EBP - 0xdc) + 3 + iVar31 * 0x14);
        if ((((byte)uVar4 | bVar10) & 1) == 0) {
          *(byte *)(unaff_EBP - 200) = bVar3 & 0x67;
          if ((bVar3 & 0x67) != 0) {
            FUN_004ae250(piVar28,(char)*(undefined4 *)(unaff_EBP - 200),
                         (byte)*(undefined4 *)(unaff_EBP - 0xec));
            FUN_004ae250(piVar32,(char)*(undefined4 *)(unaff_EBP - 200),
                         (byte)*(undefined4 *)(unaff_EBP - 0xec));
            unaff_EBX = *(int **)(unaff_EBP - 0xe4);
            if ((char)unaff_EBX[0xe] != '\0') goto LAB_004b57a6;
          }
          if ((*(ushort *)(piVar28 + 7) & 0x4000) != 0) {
            FUN_004b6fa0(piVar28);
          }
          if ((*(ushort *)(piVar32 + 7) & 0x4000) != 0) {
            FUN_004b6fa0(piVar32);
          }
          uVar18 = FUN_004a0720((undefined8 *)piVar32,(undefined8 *)piVar28,
                                *(int *)(*(int *)(unaff_EBP - 0xdc) + 0x10 + iVar31 * 0x14));
        }
        else {
          if (-1 < (char)bVar3) {
            unaff_EBX = *(int **)(unaff_EBP - 0xe4);
            if ((bVar3 & 0x10) == 0) {
              bVar12 = (bVar3 & 8) == 0;
              goto LAB_004b07b5;
            }
            piVar28 = (int *)(*(int *)(unaff_EBP - 0xe0) +
                             *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar31 * 0x14) * 0x28);
            uVar4 = *(ushort *)(piVar28 + 7);
            *(int **)(unaff_EBP - 0xd8) = piVar28;
            *(ushort *)(piVar28 + 7) = uVar4 & 0xbe01 | 1;
            goto LAB_004b0d0b;
          }
          if ((((bVar10 & 1) == 0) || ((uVar4 & 1) == 0)) ||
             ((*(uint *)(unaff_EBP - 0xc4) & 0x100) != 0)) {
            uVar18 = 1;
          }
          else {
            uVar18 = 0;
          }
        }
        iVar17 = *(int *)(unaff_EBP - 0xdc);
        *(uint *)(unaff_EBP - 0xcc) = uVar18;
        switch(*(undefined1 *)(iVar17 + iVar31 * 0x14)) {
        case 0x4b:
          uVar18 = (uint)(uVar18 != 0);
          break;
        case 0x4c:
          uVar18 = (uint)(uVar18 == 0);
          break;
        case 0x4d:
          uVar18 = (uint)(0 < (int)uVar18);
          break;
        case 0x4e:
          uVar18 = (uint)((int)uVar18 < 1);
          break;
        case 0x4f:
          uVar18 = (uint)((int)uVar18 < 0);
          break;
        default:
          uVar18 = (uint)(-1 < (int)uVar18);
        }
        iVar17 = *(int *)(unaff_EBP - 0xdc);
        *(uint *)(unaff_EBP - 0xcc) = uVar18;
        if ((*(byte *)(iVar17 + 3 + iVar31 * 0x14) & 0x10) == 0) {
          if (uVar18 != 0) {
            *(int *)(unaff_EBP - 0xe8) = *(int *)(iVar17 + 8 + iVar31 * 0x14) + -1;
          }
        }
        else {
          iVar31 = *(int *)(unaff_EBP - 0xe0) + *(int *)(iVar17 + 8 + iVar31 * 0x14) * 0x28;
          *(int *)(unaff_EBP - 0xd8) = iVar31;
          *(ushort *)(iVar31 + 0x1c) = *(ushort *)(iVar31 + 0x1c) & 0xbe04 | 4;
          iVar17 = *(int *)(unaff_EBP - 0xcc);
          *(int *)(iVar31 + 0x10) = iVar17;
          *(int *)(iVar31 + 0x14) = iVar17 >> 0x1f;
        }
        *(ushort *)(piVar28 + 7) =
             *(ushort *)(piVar28 + 7) ^
             (*(ushort *)(piVar28 + 7) ^ *(ushort *)(unaff_EBP - 0xc6)) & 0x1ff;
        piVar28 = *(int **)(unaff_EBP - 0xd8);
        *(ushort *)(piVar32 + 7) =
             *(ushort *)(piVar32 + 7) ^
             (*(ushort *)(piVar32 + 7) ^ *(ushort *)(unaff_EBP - 0xc4)) & 0x1ff;
        unaff_EBX = *(int **)(unaff_EBP - 0xe4);
        goto LAB_004b0d0b;
      case 0x51:
      case 0x5c:
      case 0x5f:
        if (unaff_EBX[0x38] != 0) goto LAB_004af4ee;
        puVar26 = *(undefined4 **)
                   (*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
                   *(int *)(iVar17 + 4 + iVar31 * 0x14) * 4);
        *(undefined4 **)(unaff_EBP - 0xcc) = puVar26;
        if (puVar26 != (undefined4 *)0x0) {
          if (puVar26[0x12] == 0) {
            *(undefined4 *)(unaff_EBP - 200) = 1;
            iVar17 = (**(code **)(iVar17 + 0x10 + iVar31 * 0x14))(*puVar26);
          }
          else {
            iVar17 = FUN_004b8f40((int)unaff_EBX,(int)puVar26,(uint *)(unaff_EBP - 200));
          }
          iVar14 = *(int *)(unaff_EBP - 0xcc);
          *(int *)(unaff_EBP - 0xd0) = iVar17;
          *(undefined1 *)(iVar14 + 0x1c) = *(undefined1 *)(unaff_EBP - 200);
          *(undefined4 *)(*(int *)(unaff_EBP - 0xcc) + 0x50) = 0;
          if (*(int *)(unaff_EBP - 200) == 0) {
            bVar10 = *(byte *)(*(int *)(unaff_EBP - 0xdc) + 3 + iVar31 * 0x14);
            *(int *)(unaff_EBP - 0xe8) =
                 *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar31 * 0x14) + -1;
            if (bVar10 != 0) {
              piVar32 = (int *)(*(int *)(unaff_EBP - 0xd4) + 0x70 + (uint)bVar10 * 4);
              *piVar32 = *piVar32 + 1;
            }
          }
          *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + 0x19) = 0;
        }
        goto LAB_004b0d0b;
      case 0x52:
      case 0x53:
      case 0x54:
      case 0x55:
        iVar14 = *(int *)(unaff_EBP - 0xe0) + *(int *)(iVar17 + 4 + iVar31 * 0x14) * 0x28;
        iVar23 = *(int *)(unaff_EBP - 0xe0) + *(int *)(iVar17 + 8 + iVar31 * 0x14) * 0x28;
        *(int *)(unaff_EBP - 0xd8) =
             *(int *)(unaff_EBP - 0xe0) + *(int *)(iVar17 + 0xc + iVar31 * 0x14) * 0x28;
        if (((*(byte *)(iVar23 + 0x1c) | *(byte *)(iVar14 + 0x1c)) & 1) == 0) {
          uVar40 = FUN_004b65e0(iVar23);
          *(ulonglong *)(unaff_EBP - 0xcc) = uVar40;
          uVar40 = FUN_004b65e0(iVar14);
          uVar30 = (uint)(uVar40 >> 0x20);
          uVar18 = (uint)uVar40;
          iVar17 = *(int *)(unaff_EBP - 0xdc);
          *(ulonglong *)(unaff_EBP - 0xbc) = uVar40;
          cVar9 = *(char *)(iVar17 + iVar31 * 0x14);
          *(char *)(unaff_EBP - 0xb4) = cVar9;
          if (cVar9 == 'R') {
            uVar18 = *(uint *)(unaff_EBP - 0xcc) & uVar18;
            *(uint *)(unaff_EBP - 200) = *(uint *)(unaff_EBP - 200) & uVar30;
            *(uint *)(unaff_EBP - 0xcc) = uVar18;
          }
          else if (cVar9 == 'S') {
            uVar18 = *(uint *)(unaff_EBP - 0xcc) | uVar18;
            *(uint *)(unaff_EBP - 200) = *(uint *)(unaff_EBP - 200) | uVar30;
            *(uint *)(unaff_EBP - 0xcc) = uVar18;
          }
          else if (uVar40 == 0) {
            uVar18 = *(uint *)(unaff_EBP - 0xcc);
          }
          else {
            if (uVar30 == 0 || (longlong)uVar40 < 0) {
              if ((longlong)uVar40 < 0) {
                cVar9 = -0x57 - cVar9;
                *(char *)(unaff_EBP - 0xb4) = cVar9;
                if (((longlong)uVar40 < -0x100000000) ||
                   ((0x7fffffffffffffff < uVar40 && (uVar18 < 0xffffffc1)))) {
                  *(undefined4 *)(unaff_EBP - 0xbc) = 0x40;
                  *(undefined4 *)(unaff_EBP - 0xb8) = 0;
                  goto LAB_004b03ac;
                }
                iVar31 = -(uVar30 + (uVar18 != 0));
                uVar40 = CONCAT44(iVar31,-uVar18);
                *(uint *)(unaff_EBP - 0xbc) = -uVar18;
                *(int *)(unaff_EBP - 0xb8) = iVar31;
              }
              if ((longlong)uVar40 < 0x40) {
                if (cVar9 == 'T') {
                  *(ulonglong *)(unaff_EBP - 0xc4) =
                       *(ulonglong *)(unaff_EBP - 0xcc) << (uVar40 & 0xffffffff);
                  uVar18 = *(uint *)(unaff_EBP - 0xc4);
                  uVar27 = *(undefined4 *)(unaff_EBP - 0xc0);
                  *(uint *)(unaff_EBP - 0xcc) = uVar18;
                  *(undefined4 *)(unaff_EBP - 200) = uVar27;
                }
                else {
                  iVar31 = *(int *)(unaff_EBP - 200);
                  *(ulonglong *)(unaff_EBP - 0xc4) =
                       *(ulonglong *)(unaff_EBP - 0xcc) >> (uVar40 & 0xffffffff);
                  if ((iVar31 < 1) && (iVar31 < 0)) {
                    lVar39 = __allshl(0x40 - (char)uVar40,-1);
                    *(uint *)(unaff_EBP - 0xc4) = *(uint *)(unaff_EBP - 0xc4) | (uint)lVar39;
                    *(uint *)(unaff_EBP - 0xc0) =
                         *(uint *)(unaff_EBP - 0xc0) | (uint)((ulonglong)lVar39 >> 0x20);
                  }
                  uVar18 = *(uint *)(unaff_EBP - 0xc4);
                  uVar27 = *(undefined4 *)(unaff_EBP - 0xc0);
                  *(uint *)(unaff_EBP - 0xcc) = uVar18;
                  *(undefined4 *)(unaff_EBP - 200) = uVar27;
                }
                goto LAB_004b049d;
              }
            }
LAB_004b03ac:
            if (((*(int *)(unaff_EBP - 200) < 1) && (*(int *)(unaff_EBP - 200) < 0)) &&
               (cVar9 != 'T')) {
              uVar18 = 0xffffffff;
              *(undefined4 *)(unaff_EBP - 0xcc) = 0xffffffff;
              *(undefined4 *)(unaff_EBP - 200) = 0xffffffff;
            }
            else {
              uVar18 = 0;
              *(undefined4 *)(unaff_EBP - 0xcc) = 0;
              *(undefined4 *)(unaff_EBP - 200) = 0;
            }
          }
LAB_004b049d:
          piVar28 = *(int **)(unaff_EBP - 0xd8);
          piVar28[4] = uVar18;
          piVar28[5] = *(int *)(unaff_EBP - 200);
          *(ushort *)(piVar28 + 7) = *(ushort *)(piVar28 + 7) & 0xbe04 | 4;
        }
        else {
          piVar28 = *(int **)(unaff_EBP - 0xd8);
          FUN_004b78c0((int)piVar28);
        }
        goto LAB_004b0d0b;
      case 0x56:
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x5a:
        iVar14 = *(int *)(unaff_EBP - 0xe0);
        iVar17 = iVar14 + *(int *)(iVar17 + 4 + iVar31 * 0x14) * 0x28;
        FUN_0046dfa0(iVar17);
        iVar14 = iVar14 + *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar31 * 0x14) * 0x28;
        FUN_0046dfa0(iVar14);
        uVar4 = *(ushort *)(iVar17 + 0x1c);
        *(int *)(unaff_EBP - 0xd8) =
             *(int *)(unaff_EBP - 0xe0) +
             *(int *)(*(int *)(unaff_EBP - 0xdc) + 0xc + iVar31 * 0x14) * 0x28;
        uVar4 = uVar4 | *(ushort *)(iVar14 + 0x1c);
        *(uint *)(unaff_EBP - 200) = (uint)uVar4;
        if ((uVar4 & 1) != 0) goto LAB_004b001a;
        if ((*(byte *)(iVar17 + 0x1c) & *(byte *)(iVar14 + 0x1c) & 4) == 0) {
          *(undefined1 *)(unaff_EBP - 0xcc) = 0;
          goto LAB_004afe6d;
        }
        uVar18 = *(uint *)(iVar17 + 0x10);
        *(uint *)(unaff_EBP - 0xc4) = uVar18;
        uVar30 = *(uint *)(iVar17 + 0x14);
        *(uint *)(unaff_EBP - 0xc0) = uVar30;
        uVar27 = *(undefined4 *)(iVar14 + 0x10);
        *(undefined4 *)(unaff_EBP - 0xf0) = uVar27;
        *(undefined4 *)(unaff_EBP - 0xbc) = uVar27;
        uVar27 = *(undefined4 *)(iVar14 + 0x14);
        *(undefined4 *)(unaff_EBP - 0x104) = uVar27;
        *(undefined4 *)(unaff_EBP - 0xb8) = uVar27;
        iVar23 = *(int *)(unaff_EBP - 0xdc);
        *(undefined1 *)(unaff_EBP - 0xcc) = 1;
        switch(*(undefined1 *)(iVar23 + iVar31 * 0x14)) {
        case 0x56:
          iVar23 = FUN_0048bce0((uint *)(unaff_EBP - 0xbc),uVar18,uVar30);
          if (iVar23 != 0) goto LAB_004afe6d;
          break;
        case 0x57:
          iVar23 = FUN_004aa9e0((uint *)(unaff_EBP - 0xbc),uVar18,uVar30);
          goto joined_r0x004afda1;
        case 0x58:
          iVar23 = FUN_004a0bf0((uint *)(unaff_EBP - 0xbc),uVar18,uVar30);
joined_r0x004afda1:
          if (iVar23 == 0) break;
LAB_004afe6d:
          fVar36 = FUN_004b8350(iVar17);
          *(double *)(unaff_EBP - 0xb4) = (double)fVar36;
          fVar36 = FUN_004b8350(iVar14);
          *(double *)(unaff_EBP - 0xac) = (double)fVar36;
          switch(*(undefined1 *)(*(int *)(unaff_EBP - 0xdc) + iVar31 * 0x14)) {
          case 0x56:
            *(double *)(unaff_EBP - 0xac) =
                 *(double *)(unaff_EBP - 0xac) + *(double *)(unaff_EBP - 0xb4);
            break;
          case 0x57:
            *(double *)(unaff_EBP - 0xac) =
                 *(double *)(unaff_EBP - 0xac) - *(double *)(unaff_EBP - 0xb4);
            break;
          case 0x58:
            *(double *)(unaff_EBP - 0xac) =
                 *(double *)(unaff_EBP - 0xac) * *(double *)(unaff_EBP - 0xb4);
            break;
          case 0x59:
            if (*(double *)(unaff_EBP - 0xb4) != 0.0) {
              *(double *)(unaff_EBP - 0xac) =
                   *(double *)(unaff_EBP - 0xac) / *(double *)(unaff_EBP - 0xb4);
              break;
            }
            goto LAB_004b001a;
          default:
            uVar40 = FUN_0054a946();
            *(ulonglong *)(unaff_EBP - 0xc4) = uVar40;
            uVar38 = FUN_0054a946();
            *(ulonglong *)(unaff_EBP - 0xbc) = uVar38;
            if (uVar40 == 0) goto LAB_004b001a;
            if (uVar40 == 0xffffffffffffffff) {
              uVar40 = 1;
              *(undefined4 *)(unaff_EBP - 0xc4) = 1;
              *(undefined4 *)(unaff_EBP - 0xc0) = 0;
            }
            uVar37 = __allrem((uint)uVar38,(uint)(uVar38 >> 0x20),(uint)uVar40,
                              (uint)(uVar40 >> 0x20));
            *(undefined8 *)(unaff_EBP - 0x134) = uVar37;
            *(double *)(unaff_EBP - 0xac) = (double)*(longlong *)(unaff_EBP - 0x134);
          }
          iVar31 = FUN_0049f810();
          if (iVar31 == 0) {
            piVar28 = *(int **)(unaff_EBP - 0xd8);
            *(undefined8 *)(piVar28 + 2) = *(undefined8 *)(unaff_EBP - 0xac);
            *(ushort *)(piVar28 + 7) = *(ushort *)(piVar28 + 7) & 0xbe08 | 8;
            if (((*(byte *)(unaff_EBP - 200) & 8) != 0) || (*(char *)(unaff_EBP - 0xcc) != '\0'))
            goto LAB_004af834;
            FUN_004b6650((int)piVar28);
            unaff_EBX = *(int **)(unaff_EBP - 0xe4);
          }
          else {
LAB_004b001a:
            piVar28 = *(int **)(unaff_EBP - 0xd8);
            FUN_004b78c0((int)piVar28);
            unaff_EBX = *(int **)(unaff_EBP - 0xe4);
          }
          goto LAB_004b0d0b;
        case 0x59:
          if (uVar18 != 0 || uVar30 != 0) {
            if ((((uVar18 & uVar30) != 0xffffffff) || (*(uint *)(unaff_EBP - 0xf0) != 0)) ||
               (*(int *)(unaff_EBP - 0x104) != -0x80000000)) {
              uVar37 = __alldiv(*(uint *)(unaff_EBP - 0xf0),*(uint *)(unaff_EBP - 0x104),uVar18,
                                uVar30);
              goto LAB_004afe23;
            }
            goto LAB_004afe6d;
          }
          goto LAB_004b001a;
        default:
          if (uVar18 == 0 && uVar30 == 0) goto LAB_004b001a;
          if ((uVar18 & uVar30) == 0xffffffff) {
            uVar18 = 1;
            uVar30 = 0;
            *(undefined4 *)(unaff_EBP - 0xc4) = 1;
            *(undefined4 *)(unaff_EBP - 0xc0) = 0;
          }
          uVar37 = __allrem(*(uint *)(unaff_EBP - 0xf0),*(uint *)(unaff_EBP - 0x104),uVar18,uVar30);
LAB_004afe23:
          *(undefined8 *)(unaff_EBP - 0xbc) = uVar37;
        }
        piVar28 = *(int **)(unaff_EBP - 0xd8);
        unaff_EBX = *(int **)(unaff_EBP - 0xe4);
        piVar28[4] = *(int *)(unaff_EBP - 0xbc);
        piVar28[5] = *(int *)(unaff_EBP - 0xb8);
        *(ushort *)(piVar28 + 7) = *(ushort *)(piVar28 + 7) & 0xbe04 | 4;
        goto LAB_004b0d0b;
      case 0x5b:
        iVar14 = *(int *)(unaff_EBP - 0xe0);
        piVar32 = (int *)(iVar14 + *(int *)(iVar17 + 4 + iVar31 * 0x14) * 0x28);
        piVar8 = (int *)(iVar14 + *(int *)(iVar17 + 8 + iVar31 * 0x14) * 0x28);
        piVar28 = (int *)(iVar14 + *(int *)(iVar17 + 0xc + iVar31 * 0x14) * 0x28);
        uVar4 = *(ushort *)(piVar32 + 7);
        bVar10 = *(byte *)(piVar8 + 7);
        *(int **)(unaff_EBP - 0xd8) = piVar28;
        if (((bVar10 | (byte)uVar4) & 1) != 0) {
          FUN_004b78c0((int)piVar28);
          unaff_EBX = *(int **)(unaff_EBP - 0xe4);
          goto LAB_004b0d0b;
        }
        if ((((((uVar4 & 0x4000) != 0) && (iVar31 = FUN_004b6fa0(piVar32), iVar31 != 0)) ||
             (((*(ushort *)(piVar8 + 7) & 0x4000) != 0 &&
              (iVar31 = FUN_004b6fa0(piVar8), iVar31 != 0)))) ||
            (((*(byte *)(piVar32 + 7) & 0x12) == 0 &&
             (iVar31 = FUN_004b7cf0(piVar32,(uint)*(byte *)(unaff_EBP - 0xec)), iVar31 != 0)))) ||
           (((*(byte *)(piVar8 + 7) & 0x12) == 0 &&
            (iVar31 = FUN_004b7cf0(piVar8,(uint)*(byte *)(unaff_EBP - 0xec)), iVar31 != 0))))
        goto LAB_004b57a0;
        uVar30 = piVar32[6] + piVar8[6];
        iVar17 = (int)uVar30 >> 0x1f;
        iVar31 = *(int *)(unaff_EBP - 0xe4);
        *(uint *)(unaff_EBP - 0xcc) = uVar30;
        *(int *)(unaff_EBP - 200) = iVar17;
        uVar18 = *(uint *)(iVar31 + 0x50);
        iVar31 = (int)uVar18 >> 0x1f;
        if ((iVar31 < iVar17) || ((iVar31 <= iVar17 && (uVar18 < uVar30)))) goto LAB_004b577a;
        piVar5 = *(int **)(unaff_EBP - 0xd8);
        *(ushort *)(piVar5 + 7) = *(ushort *)(piVar5 + 7) & 0xbe02 | 2;
        iVar31 = FUN_004b7260(piVar5,*(int *)(unaff_EBP - 0xcc) + 2,(uint)(piVar5 == piVar8));
        if (iVar31 != 0) goto LAB_004b57a0;
        if (piVar5 != piVar8) {
          memcpy((void *)piVar5[1],(void *)piVar8[1],piVar8[6]);
        }
        memcpy((void *)(piVar5[1] + piVar8[6]),(void *)piVar32[1],piVar32[6]);
        unaff_EBX = *(int **)(unaff_EBP - 0xe4);
        piVar28 = *(int **)(unaff_EBP - 0xd8);
        *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + piVar5[1]) = 0;
        *(undefined1 *)(piVar5[1] + 1 + *(int *)(unaff_EBP - 0xcc)) = 0;
        *(ushort *)(piVar5 + 7) = *(ushort *)(piVar5 + 7) | 0x200;
        piVar5[6] = *(int *)(unaff_EBP - 0xcc);
        *(undefined1 *)((int)piVar5 + 0x1f) = *(undefined1 *)(unaff_EBP - 0xec);
        goto LAB_004b0d0b;
      case 0x5d:
        iVar14 = *(int *)(iVar17 + 4 + iVar31 * 0x14);
        iVar23 = *(int *)(unaff_EBP - 0xe0);
        bVar10 = *(byte *)(iVar23 + 0x1c + iVar14 * 0x28);
        piVar28 = (int *)(iVar23 + *(int *)(iVar17 + 8 + iVar31 * 0x14) * 0x28);
        *(int **)(unaff_EBP - 0xd8) = piVar28;
        if ((bVar10 & 1) == 0) {
          uVar40 = FUN_004b65e0(iVar23 + iVar14 * 0x28);
          FUN_004b7860(piVar28,~(uint)uVar40,~(uint)(uVar40 >> 0x20));
          piVar28 = *(int **)(unaff_EBP - 0xd8);
        }
        else {
          FUN_004b78c0((int)piVar28);
        }
        goto LAB_004b0d0b;
      case 0x5e:
        *(undefined1 *)(iVar17 + iVar31 * 0x14) = 9;
        uVar18 = FUN_004aa9b0(*(char **)(iVar17 + 0x10 + iVar31 * 0x14));
        cVar9 = *(char *)(unaff_EBP - 0xec);
        *(uint *)(*(int *)(unaff_EBP - 0xdc) + 4 + iVar31 * 0x14) = uVar18;
        if (cVar9 == '\x01') {
          iVar17 = *(int *)(unaff_EBP - 0xdc);
        }
        else {
          iVar17 = FUN_004b79e0(piVar28,extraout_EDX,0xffffffff,'\x01',(undefined *)0x0);
          *(int *)(unaff_EBP - 0xd0) = iVar17;
          if (iVar17 == 0x12) goto LAB_004b5780;
          iVar17 = FUN_004aec30(piVar28,(uint)*(byte *)(unaff_EBP - 0xec));
          if (iVar17 != 0) goto LAB_004b57a6;
          iVar17 = *(int *)(unaff_EBP - 0xdc);
          piVar28[9] = 0;
          *(ushort *)(piVar28 + 7) = *(ushort *)(piVar28 + 7) & 0xfbff | 0x800;
          if (*(char *)(iVar17 + 1 + iVar31 * 0x14) == -1) {
            FUN_00494b00((int)unaff_EBX,*(undefined4 **)(iVar17 + 0x10 + iVar31 * 0x14));
            iVar17 = *(int *)(unaff_EBP - 0xdc);
          }
          *(undefined1 *)(iVar17 + 1 + iVar31 * 0x14) = 0xff;
          *(int *)(iVar17 + 0x10 + iVar31 * 0x14) = piVar28[1];
          *(int *)(iVar17 + 4 + iVar31 * 0x14) = piVar28[6];
        }
        if (unaff_EBX[0x14] < *(int *)(iVar17 + 4 + iVar31 * 0x14)) goto LAB_004b5780;
switchD_004af4da_caseD_9:
        *(undefined2 *)(piVar28 + 7) = 0xa02;
        piVar28[1] = *(int *)(iVar17 + 0x10 + iVar31 * 0x14);
        piVar28[6] = *(int *)(iVar17 + 4 + iVar31 * 0x14);
        *(undefined1 *)((int)piVar28 + 0x1f) = *(undefined1 *)(unaff_EBP - 0xec);
        goto LAB_004b0d0b;
      case 0x60:
      case 0x61:
        piVar32 = *(int **)(*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
                           *(int *)(iVar17 + 4 + iVar31 * 0x14) * 4);
        *(int **)(unaff_EBP - 0xcc) = piVar32;
        iVar17 = *(int *)(iVar17 + 8 + iVar31 * 0x14);
        puVar21 = (uint *)*piVar32;
        iVar14 = *(int *)(unaff_EBP - 0xe0);
        *(uint **)(unaff_EBP - 200) = puVar21;
        piVar28 = (int *)(iVar14 + iVar17 * 0x28);
        if (puVar21 == (uint *)0x0) goto LAB_004af834;
        if ((*(ushort *)(piVar28 + 7) & 0x4000) != 0) {
          iVar17 = FUN_004b6fa0(piVar28);
          *(int *)(unaff_EBP - 0xd0) = iVar17;
          if (iVar17 != 0) goto LAB_004af834;
          puVar21 = *(uint **)(unaff_EBP - 200);
          piVar32 = *(int **)(unaff_EBP - 0xcc);
        }
        if (piVar32[0x12] == 0) {
          uVar18 = piVar28[6];
          iVar17 = *(int *)(unaff_EBP - 0xdc);
          *(uint *)(unaff_EBP - 0xc4) = uVar18;
          pbVar35 = (byte *)piVar28[1];
          *(byte **)(unaff_EBP - 0xc0) = pbVar35;
          if ((*(byte *)(iVar17 + 3 + iVar31 * 0x14) & 0x10) == 0) {
            puVar20 = (uint *)0x0;
          }
          else {
            puVar20 = (uint *)piVar32[0x13];
          }
          puVar21 = FUN_0048ffe0(puVar21,pbVar35,uVar18,(int)uVar18 >> 0x1f,&DAT_0055b524,0,0,
                                 *(int *)(*(int *)(unaff_EBP - 0xdc) + 0xc + iVar31 * 0x14),puVar20)
          ;
          unaff_EBX = *(int **)(unaff_EBP - 0xe4);
          piVar28 = *(int **)(unaff_EBP - 0xd8);
          *(uint **)(unaff_EBP - 0xd0) = puVar21;
          *(undefined4 *)(*(int *)(unaff_EBP - 0xcc) + 0x50) = 0;
          goto LAB_004b0d0b;
        }
        unaff_EBX = *(int **)(unaff_EBP - 0xe4);
        uVar18 = FUN_004b9360(unaff_EBX,(int)piVar32,(int)piVar28);
        piVar28 = *(int **)(unaff_EBP - 0xd8);
        *(uint *)(unaff_EBP - 0xd0) = uVar18;
        goto LAB_004b0d11;
      case 0x62:
        puVar26 = *(undefined4 **)
                   (*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
                   *(int *)(iVar17 + 4 + iVar31 * 0x14) * 4);
        *(undefined4 **)(unaff_EBP - 0xcc) = puVar26;
        piVar32 = (int *)*puVar26;
        *(int **)(unaff_EBP - 200) = piVar32;
        if (piVar32 != (int *)0x0) {
          *(undefined4 *)(unaff_EBP - 0xbc) = puVar26[2];
          *(undefined2 *)(unaff_EBP - 0xb8) = *(undefined2 *)(iVar17 + 0xc + iVar31 * 0x14);
          *(undefined1 *)(unaff_EBP - 0xb6) = 0;
          *(int *)(unaff_EBP - 0xac) =
               *(int *)(unaff_EBP - 0xe0) + *(int *)(iVar17 + 8 + iVar31 * 0x14) * 0x28;
          uVar18 = FUN_004908e0(piVar32,(int *)(unaff_EBP - 0xbc),0,0,0,(uint *)(unaff_EBP - 0xc4));
          *(uint *)(unaff_EBP - 0xd0) = uVar18;
          if ((uVar18 == 0) && (*(int *)(unaff_EBP - 0xc4) == 0)) {
            uVar18 = FUN_0048f930(*(uint **)(unaff_EBP - 200));
            *(uint *)(unaff_EBP - 0xd0) = uVar18;
          }
          *(undefined4 *)(*(int *)(unaff_EBP - 0xcc) + 0x50) = 0;
        }
        goto LAB_004b0d0b;
      case 99:
        piVar28 = *(int **)(unaff_EBP - 0xd8);
        puVar26 = *(undefined4 **)
                   (*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
                   *(int *)(iVar17 + 4 + iVar31 * 0x14) * 4);
        *(undefined4 **)(unaff_EBP - 200) = puVar26;
        *(undefined4 *)(unaff_EBP - 0xcc) = *puVar26;
        *(undefined2 *)(piVar28 + 7) = 1;
        if (*(int *)(unaff_EBP - 0xcc) == 0) goto LAB_004af570;
        uVar18 = FUN_004af1b0(*(undefined4 **)(unaff_EBP - 200));
        *(uint *)(unaff_EBP - 0xd0) = uVar18;
        if (uVar18 != 0) goto LAB_004b572c;
        if (*(char *)(*(int *)(unaff_EBP - 200) + 0x1c) != '\0') goto LAB_004af570;
        uVar18 = FUN_004b6480(unaff_EBX,*(int **)(unaff_EBP - 0xcc),(undefined4 *)(unaff_EBP - 0xc4)
                             );
        *(uint *)(unaff_EBP - 0xd0) = uVar18;
        if (uVar18 != 0) goto LAB_004b572c;
        piVar28[4] = *(int *)(unaff_EBP - 0xc4);
        piVar28[5] = *(int *)(unaff_EBP - 0xc0);
        *(undefined2 *)(piVar28 + 7) = 4;
        goto LAB_004b0d0b;
      case 100:
      case 0x65:
        piVar32 = *(int **)(*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
                           *(int *)(iVar17 + 4 + iVar31 * 0x14) * 4);
        *(int **)(unaff_EBP - 0xcc) = piVar32;
        if (*piVar32 == 0) goto LAB_004b0d0b;
        *(int *)(unaff_EBP - 0xc4) = piVar32[2];
        *(undefined2 *)(unaff_EBP - 0xc0) = *(undefined2 *)(iVar17 + 0x10 + iVar31 * 0x14);
        *(char *)(unaff_EBP - 0xbe) = (*(char *)(iVar17 + 3 + iVar31 * 0x14) != '\0') + '\x02';
        *(int *)(unaff_EBP - 0xb4) =
             *(int *)(unaff_EBP - 0xe0) + *(int *)(iVar17 + 0xc + iVar31 * 0x14) * 0x28;
        uVar18 = FUN_004b63c0(piVar32,(int *)(unaff_EBP - 0xc4),(uint *)(unaff_EBP - 200));
        iVar17 = *(int *)(unaff_EBP - 0xdc);
        cVar9 = *(char *)(iVar17 + iVar31 * 0x14);
        *(uint *)(unaff_EBP - 0xd0) = uVar18;
        if (cVar9 == 'd') {
          iVar14 = -*(int *)(unaff_EBP - 200);
        }
        else {
          iVar14 = *(int *)(unaff_EBP - 200) + 1;
        }
        *(int *)(unaff_EBP - 200) = iVar14;
        if (iVar14 < 1) goto LAB_004b0d0b;
        iVar31 = *(int *)(iVar17 + 8 + iVar31 * 0x14);
        goto LAB_004b0d04;
      case 0x66:
        iVar14 = 0;
        *(undefined4 *)(unaff_EBP - 200) = 0;
        iVar17 = unaff_EBX[1];
        *(int *)(unaff_EBP - 0xc4) = iVar17;
        while (iVar17 != 0) {
          if (((*(int *)(iVar17 + 0x30) == -0x420df25d) &&
              (((byte)*(undefined4 *)(iVar17 + 0x60) & 0xc) < 8)) && (-1 < *(int *)(iVar17 + 0x54)))
          {
            iVar14 = iVar14 + 1;
            *(int *)(unaff_EBP - 200) = iVar14;
          }
          iVar17 = *(int *)(iVar17 + 0x3c);
          *(int *)(unaff_EBP - 0xc4) = iVar17;
        }
        *(undefined2 *)(piVar28 + 7) = 1;
        if (*(int *)(unaff_EBP - 200) < 2) {
          iVar17 = *(int *)(unaff_EBP - 0xdc);
          iVar14 = *(int *)(iVar17 + 0xc + iVar31 * 0x14);
          *(int *)(unaff_EBP - 0xc0) = iVar14;
          uVar18 = FUN_0048fb70(*(undefined4 **)(unaff_EBX[4] + 4 + iVar14 * 0x10),
                                *(char **)(iVar17 + 4 + iVar31 * 0x14),(uint *)(unaff_EBP - 0xcc));
          *(uint *)(unaff_EBP - 0xd0) = uVar18;
          *(undefined2 *)(piVar28 + 7) = 4;
          iVar17 = *(int *)(unaff_EBP - 0xcc);
          piVar28[4] = iVar17;
          uVar18 = *(uint *)(unaff_EBP - 0xd0);
          piVar28[5] = iVar17 >> 0x1f;
          if (uVar18 == 0) {
            if (*(int *)(unaff_EBP - 0xcc) != 0) {
              FUN_004a6dc0((int)unaff_EBX,*(int *)(unaff_EBP - 0xc0),*(int *)(unaff_EBP - 0xcc),
                           *(undefined4 *)(*(int *)(unaff_EBP - 0xdc) + 4 + iVar31 * 0x14));
              *(char *)(unaff_EBP - 0xf5) = *(char *)(unaff_EBP - 0xc0) + '\x01';
            }
            goto LAB_004b0d0b;
          }
        }
        else {
          iVar31 = *(int *)(unaff_EBP - 0xd4);
          uVar18 = 6;
          *(undefined4 *)(unaff_EBP - 0xd0) = 6;
          *(undefined1 *)(iVar31 + 0x5c) = 2;
        }
        goto LAB_004b0d11;
      case 0x67:
        *(undefined4 *)(unaff_EBP - 0xcc) = 0;
        piVar32 = (int *)(unaff_EBP - 0xcc);
        if (*(int *)(iVar17 + 0xc + iVar31 * 0x14) == 0) {
          piVar32 = (int *)0x0;
        }
        uVar18 = FUN_0048eff0(*(undefined4 **)
                               (unaff_EBX[4] + 4 + *(int *)(iVar17 + 8 + iVar31 * 0x14) * 0x10),
                              *(uint *)(iVar17 + 4 + iVar31 * 0x14),piVar32);
        iVar17 = *(int *)(unaff_EBP - 0xdc);
        iVar14 = *(int *)(iVar17 + 0xc + iVar31 * 0x14);
        *(uint *)(unaff_EBP - 0xd0) = uVar18;
        if (iVar14 != 0) {
          uVar18 = *(uint *)(unaff_EBP - 0xcc);
          piVar32 = (int *)(*(int *)(unaff_EBP - 0xd4) + 100);
          *piVar32 = *piVar32 + uVar18;
          iVar31 = *(int *)(iVar17 + 0xc + iVar31 * 0x14);
          if (0 < iVar31) {
            iVar17 = *(int *)(unaff_EBP - 0xe0);
            puVar21 = (uint *)(iVar17 + 0x10 + iVar31 * 0x28);
            uVar30 = *puVar21;
            *puVar21 = *puVar21 + uVar18;
            piVar32 = (int *)(iVar17 + 0x14 + iVar31 * 0x28);
            *piVar32 = *piVar32 + ((int)uVar18 >> 0x1f) + (uint)CARRY4(uVar30,uVar18);
          }
        }
        goto LAB_004b0d0b;
      case 0x68:
      case 0x69:
        *(undefined4 *)(unaff_EBP - 0xcc) = 0;
        iVar14 = *(int *)(iVar17 + 4 + iVar31 * 0x14) * 0x10 + unaff_EBX[4];
        *(int *)(unaff_EBP - 0xc4) = iVar14;
        iVar31 = (*(char *)(iVar17 + iVar31 * 0x14) != 'i') + 1;
        *(int *)(unaff_EBP - 200) = iVar31;
        pcVar24 = FUN_0048f740(*(undefined4 **)(iVar14 + 4),(undefined4 *)(unaff_EBP - 0xcc),
                               (byte)iVar31);
        *(char **)(unaff_EBP - 0xd0) = pcVar24;
        iVar31 = *(int *)(unaff_EBP - 0xcc);
        piVar28[4] = iVar31;
        piVar28[5] = iVar31 >> 0x1f;
        goto LAB_004b0d0b;
      case 0x6a:
        iVar17 = *(int *)(iVar17 + 4 + iVar31 * 0x14);
        *(int *)(unaff_EBP - 0xcc) = iVar17;
        pcVar24 = "sqlite_temp_master";
        if (iVar17 != 1) {
          pcVar24 = "sqlite_master";
        }
        iVar17 = *(int *)(unaff_EBP - 0xdc);
        *(char **)(unaff_EBP - 200) = pcVar24;
        *(int **)(unaff_EBP - 0xc0) = unaff_EBX;
        *(undefined4 *)(unaff_EBP - 0xb8) = *(undefined4 *)(iVar17 + 4 + iVar31 * 0x14);
        *(int *)(unaff_EBP - 0xbc) = *(int *)(unaff_EBP - 0xd4) + 0x34;
        iVar31 = FUN_004a02d0((int)unaff_EBX,
                              (byte *)
                              "SELECT name, rootpage, sql FROM \'%q\'.%s WHERE %s ORDER BY rowid");
        *(int *)(unaff_EBP - 0xc4) = iVar31;
        if (iVar31 == 0) {
          *(undefined4 *)(unaff_EBP - 0xd0) = 7;
LAB_004b3e54:
          FUN_004a6940((int)unaff_EBX);
          uVar18 = *(uint *)(unaff_EBP - 0xd0);
        }
        else {
          *(undefined1 *)((int)unaff_EBX + 0x81) = 1;
          pbVar35 = *(byte **)(unaff_EBP - 0xc4);
          *(undefined4 *)(unaff_EBP - 0xb4) = 0;
          uVar18 = FUN_00463120((int)unaff_EBX,pbVar35,FUN_0049de90,unaff_EBP - 0xc0,(int *)0x0);
          puVar26 = *(undefined4 **)(unaff_EBP - 0xc4);
          if (uVar18 == 0) {
            uVar18 = *(uint *)(unaff_EBP - 0xb4);
          }
          *(uint *)(unaff_EBP - 0xd0) = uVar18;
          FUN_00494b00((int)unaff_EBX,puVar26);
          iVar31 = *(int *)(unaff_EBP - 0xd0);
          *(undefined1 *)((int)unaff_EBX + 0x81) = 0;
          uVar18 = 0;
          if (iVar31 != 0) goto LAB_004b3e54;
        }
        if (uVar18 == 7) goto LAB_004b57a6;
        goto LAB_004b0d11;
      case 0x6b:
        uVar18 = FUN_0048c830((int)unaff_EBX,*(int *)(iVar17 + 4 + iVar31 * 0x14));
        *(uint *)(unaff_EBP - 0xd0) = uVar18;
        goto LAB_004b0d11;
      case 0x6c:
        FUN_004ab2d0((int)unaff_EBX,*(uint *)(iVar17 + 4 + iVar31 * 0x14),
                     *(byte **)(iVar17 + 0x10 + iVar31 * 0x14));
        goto LAB_004b0d0b;
      case 0x6d:
        FUN_004ab1f0((int)unaff_EBX,*(uint *)(iVar17 + 4 + iVar31 * 0x14),
                     *(byte **)(iVar17 + 0x10 + iVar31 * 0x14));
        goto LAB_004b0d0b;
      case 0x6e:
        FUN_004ab380((int)unaff_EBX,*(uint *)(iVar17 + 4 + iVar31 * 0x14),
                     *(byte **)(iVar17 + 0x10 + iVar31 * 0x14));
        goto LAB_004b0d0b;
      case 0x6f:
        iVar17 = *(int *)(iVar17 + 8 + iVar31 * 0x14);
        *(int *)(unaff_EBP - 0xcc) = iVar17;
        puVar26 = FUN_00494b90((int)unaff_EBX,iVar17 * 4 + 4);
        *(undefined4 **)(unaff_EBP - 200) = puVar26;
        if (puVar26 == (undefined4 *)0x0) goto LAB_004b57a6;
        iVar17 = *(int *)(unaff_EBP - 0xdc);
        iVar14 = *(int *)(unaff_EBP - 0xe0);
        *(int *)(unaff_EBP - 0xb8) = iVar14 + *(int *)(iVar17 + 0xc + iVar31 * 0x14) * 0x28;
        piVar28 = (int *)(iVar14 + *(int *)(iVar17 + 4 + iVar31 * 0x14) * 0x28);
        iVar17 = 0;
        *(undefined4 *)(unaff_EBP - 0xc4) = 0;
        if (0 < *(int *)(unaff_EBP - 0xcc)) {
          do {
            uVar40 = FUN_004b65e0((int)(piVar28 + iVar17 * 10));
            *(int *)(*(int *)(unaff_EBP - 200) + *(int *)(unaff_EBP - 0xc4) * 4) = (int)uVar40;
            iVar17 = *(int *)(unaff_EBP - 0xc4) + 1;
            *(int *)(unaff_EBP - 0xc4) = iVar17;
          } while (iVar17 < *(int *)(unaff_EBP - 0xcc));
          puVar26 = *(undefined4 **)(unaff_EBP - 200);
        }
        puVar26[iVar17] = 0;
        uVar27 = FUN_004901e0(*(undefined4 **)
                               (unaff_EBX[4] + 4 +
                               (uint)*(byte *)(*(int *)(unaff_EBP - 0xdc) + 3 + iVar31 * 0x14) *
                               0x10),*(int *)(unaff_EBP - 200),*(int *)(unaff_EBP - 0xcc),
                              *(int *)(*(int *)(unaff_EBP - 0xb8) + 0x10),(int *)(unaff_EBP - 0xc0))
        ;
        puVar26 = *(undefined4 **)(unaff_EBP - 200);
        *(undefined4 *)(unaff_EBP - 0xbc) = uVar27;
        FUN_00494b00((int)unaff_EBX,puVar26);
        uVar30 = *(uint *)(unaff_EBP - 0xc0);
        iVar31 = *(int *)(unaff_EBP - 0xb8);
        puVar21 = (uint *)(iVar31 + 0x10);
        uVar18 = *puVar21;
        *puVar21 = *puVar21 - uVar30;
        piVar32 = (int *)(iVar31 + 0x14);
        *piVar32 = (*piVar32 - ((int)uVar30 >> 0x1f)) - (uint)(uVar18 < uVar30);
        FUN_004b78c0((int)piVar28);
        if (*(int *)(unaff_EBP - 0xc0) != 0) {
          if (*(void **)(unaff_EBP - 0xbc) == (void *)0x0) goto LAB_004b57a6;
          FUN_004b79e0(piVar28,*(void **)(unaff_EBP - 0xbc),0xffffffff,'\x01',FUN_00466dd0);
        }
        FUN_004aec30(piVar28,(uint)*(byte *)(unaff_EBP - 0xec));
        piVar28 = *(int **)(unaff_EBP - 0xd8);
        goto LAB_004b0d0b;
      case 0x70:
        iVar14 = *(int *)(iVar17 + 4 + iVar31 * 0x14);
        piVar28 = (int *)(*(int *)(unaff_EBP - 0xe0) + iVar14 * 0x28);
        iVar31 = *(int *)(iVar17 + 8 + iVar31 * 0x14);
        if (((*(byte *)(*(int *)(unaff_EBP - 0xe0) + 0x1c + iVar14 * 0x28) & 0x20) == 0) &&
           (FUN_004b7910(piVar28), (*(byte *)(piVar28 + 7) & 0x20) == 0)) goto LAB_004b57a6;
        FUN_004a6ed0((undefined4 *)piVar28[4],
                     *(uint *)(*(int *)(unaff_EBP - 0xe0) + 0x10 + iVar31 * 0x28),
                     *(uint *)(*(int *)(unaff_EBP - 0xe0) + 0x14 + iVar31 * 0x28));
        piVar28 = *(int **)(unaff_EBP - 0xd8);
        goto LAB_004b0d0b;
      case 0x71:
        if (unaff_EBX[0x38] != 0) {
LAB_004af4ee:
          iVar31 = *(int *)(unaff_EBP - 0xd4);
          *(undefined4 *)(iVar31 + 0x58) = 9;
          *(undefined4 *)(unaff_EBP - 0xd0) = 9;
          FUN_004a9a30((int *)(iVar31 + 0x34),(int)unaff_EBX,&DAT_0056de50);
          uVar18 = 9;
          goto LAB_004b57cd;
        }
        iVar14 = *(int *)(iVar17 + 4 + iVar31 * 0x14);
        iVar17 = *(int *)(unaff_EBP - 0xe0) + iVar14 * 0x28;
        if (((*(byte *)(*(int *)(unaff_EBP - 0xe0) + 0x1c + iVar14 * 0x28) & 0x20) == 0) ||
           (iVar14 = FUN_004a6f70(*(undefined4 **)(iVar17 + 0x10),(undefined4 *)(unaff_EBP - 0xcc)),
           iVar14 == 0)) {
          FUN_004b78c0(iVar17);
          piVar28 = *(int **)(unaff_EBP - 0xd8);
          iVar31 = *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar31 * 0x14);
          goto LAB_004b0d04;
        }
        FUN_004b7860((int *)(*(int *)(unaff_EBP - 0xe0) +
                            *(int *)(*(int *)(unaff_EBP - 0xdc) + 0xc + iVar31 * 0x14) * 0x28),
                     *(int *)(unaff_EBP - 0xcc),*(int *)(unaff_EBP - 200));
        piVar28 = *(int **)(unaff_EBP - 0xd8);
        goto LAB_004b0d0b;
      case 0x72:
        iVar14 = *(int *)(unaff_EBP - 0xe0);
        piVar28 = (int *)(iVar14 + *(int *)(iVar17 + 4 + iVar31 * 0x14) * 0x28);
        iVar23 = *(int *)(iVar17 + 0xc + iVar31 * 0x14);
        iVar17 = *(int *)(iVar17 + 0x10 + iVar31 * 0x14);
        *(int *)(unaff_EBP - 0xcc) = iVar17;
        if ((*(byte *)(piVar28 + 7) & 0x20) == 0) {
          FUN_004b7910(piVar28);
          if ((*(byte *)(piVar28 + 7) & 0x20) == 0) goto LAB_004b57a0;
          iVar17 = *(int *)(unaff_EBP - 0xcc);
          iVar14 = *(int *)(unaff_EBP - 0xe0);
        }
        bVar12 = iVar17 < 0;
        if (iVar17 != 0) {
          if (bVar12) {
            bVar10 = 0xff;
          }
          else {
            bVar10 = (byte)iVar17 & 0xf;
          }
          iVar17 = FUN_004a6fd0((undefined4 *)piVar28[4],bVar10,
                                *(uint *)(iVar14 + 0x10 + iVar23 * 0x28),
                                *(int *)(iVar14 + 0x14 + iVar23 * 0x28));
          *(int *)(unaff_EBP - 200) = iVar17;
          if (iVar17 != 0) goto LAB_004b4170;
          bVar12 = *(int *)(unaff_EBP - 0xcc) < 0;
        }
        if (bVar12) goto LAB_004af834;
        FUN_004a6ed0((undefined4 *)piVar28[4],
                     *(uint *)(*(int *)(unaff_EBP - 0xe0) + 0x10 + iVar23 * 0x28),
                     *(uint *)(*(int *)(unaff_EBP - 0xe0) + 0x14 + iVar23 * 0x28));
        unaff_EBX = *(int **)(unaff_EBP - 0xe4);
        piVar28 = *(int **)(unaff_EBP - 0xd8);
        goto LAB_004b0d0b;
      case 0x73:
        iVar14 = *(int *)(iVar17 + 0x10 + iVar31 * 0x14);
        iVar23 = *(int *)(unaff_EBP - 0xdc);
        iVar17 = *(int *)(unaff_EBP - 0xe0);
        *(int *)(unaff_EBP - 0xb4) = iVar14;
        iVar17 = iVar17 + *(int *)(iVar23 + 0xc + iVar31 * 0x14) * 0x28;
        *(int *)(unaff_EBP - 0xc4) = iVar17;
        if (*(char *)(iVar23 + 3 + iVar31 * 0x14) != '\0') {
          iVar31 = *(int *)(iVar14 + 0x14);
          iVar23 = *(int *)(*(int *)(unaff_EBP - 0xd4) + 0xa0);
          *(int *)(unaff_EBP - 0xb0) = iVar31;
          *(int *)(unaff_EBP - 0xb8) = iVar23;
          while (iVar23 != 0) {
            if (*(int *)(iVar23 + 0x18) == iVar31) goto LAB_004af570;
            iVar23 = *(int *)(iVar23 + 4);
            *(int *)(unaff_EBP - 0xb8) = iVar23;
          }
        }
        iVar31 = *(int *)(unaff_EBP - 0xd4);
        if (unaff_EBX[0x1e] <= *(int *)(iVar31 + 0xa8)) {
          *(undefined4 *)(unaff_EBP - 0xd0) = 1;
          FUN_004a9a30((int *)(iVar31 + 0x34),(int)unaff_EBX,
                       (byte *)"too many levels of trigger recursion");
          uVar18 = 1;
          piVar28 = *(int **)(unaff_EBP - 0xd8);
          goto LAB_004b0d11;
        }
        if ((*(byte *)(iVar17 + 0x1c) & 0x40) == 0) {
          iVar31 = *(int *)(iVar14 + 8) + *(int *)(iVar14 + 0xc);
          *(int *)(unaff_EBP - 0xcc) = iVar31;
          sVar22 = *(int *)(iVar14 + 0x10) + (*(int *)(iVar14 + 0xc) + iVar31 * 10) * 4 + 0x48;
          *(size_t *)(unaff_EBP - 200) = sVar22;
          puVar26 = FUN_00494c20((int)unaff_EBX,sVar22);
          *(undefined4 **)(unaff_EBP - 0xb8) = puVar26;
          if (puVar26 == (undefined4 *)0x0) goto LAB_004b57a6;
          FUN_004b76e0(*(int **)(unaff_EBP - 0xc4));
          iVar31 = *(int *)(unaff_EBP - 0xd4);
          uVar27 = *(undefined4 *)(unaff_EBP - 0xe8);
          *(undefined2 *)(*(int *)(unaff_EBP - 0xc4) + 0x1c) = 0x40;
          *(undefined4 *)(*(int *)(unaff_EBP - 0xc4) + 0x10) = *(undefined4 *)(unaff_EBP - 0xb8);
          **(int **)(unaff_EBP - 0xb8) = iVar31;
          *(undefined4 *)(*(int *)(unaff_EBP - 0xb8) + 0x3c) = *(undefined4 *)(unaff_EBP - 0xcc);
          *(undefined4 *)(*(int *)(unaff_EBP - 0xb8) + 0x40) =
               *(undefined4 *)(*(int *)(unaff_EBP - 0xb4) + 0xc);
          *(undefined4 *)(*(int *)(unaff_EBP - 0xb8) + 0x2c) = uVar27;
          *(undefined4 *)(*(int *)(unaff_EBP - 0xb8) + 0xc) = *(undefined4 *)(iVar31 + 8);
          *(undefined4 *)(*(int *)(unaff_EBP - 0xb8) + 0x34) = *(undefined4 *)(iVar31 + 0x18);
          *(undefined4 *)(*(int *)(unaff_EBP - 0xb8) + 0x14) = *(undefined4 *)(iVar31 + 0x40);
          *(undefined2 *)(*(int *)(unaff_EBP - 0xb8) + 0x28) = *(undefined2 *)(iVar31 + 0x2e);
          *(undefined4 *)(*(int *)(unaff_EBP - 0xb8) + 8) = *(undefined4 *)(iVar31 + 4);
          *(undefined4 *)(*(int *)(unaff_EBP - 0xb8) + 0x30) = *(undefined4 *)(iVar31 + 0x1c);
          *(undefined4 *)(*(int *)(unaff_EBP - 0xb8) + 0x18) =
               *(undefined4 *)(*(int *)(unaff_EBP - 0xb4) + 0x14);
          *(undefined4 *)(*(int *)(unaff_EBP - 0xb8) + 0x10) = *(undefined4 *)(iVar31 + 0xb8);
          *(undefined4 *)(*(int *)(unaff_EBP - 0xb8) + 0x38) = *(undefined4 *)(iVar31 + 0xb4);
          iVar17 = *(int *)(unaff_EBP - 0xb8);
          iVar23 = *(int *)(iVar17 + 0x3c);
          iVar14 = iVar17 + 0x48;
          *(int *)(unaff_EBP - 0xc0) = iVar14;
          iVar23 = iVar17 + (iVar23 * 5 + 9) * 8;
          *(int *)(unaff_EBP - 0xbc) = iVar23;
          if (iVar14 != iVar23) {
            do {
              *(undefined2 *)(iVar14 + 0x1c) = 0x80;
              **(undefined4 **)(unaff_EBP - 0xc0) = unaff_EBX;
              iVar14 = *(int *)(unaff_EBP - 0xc0) + 0x28;
              *(int *)(unaff_EBP - 0xc0) = iVar14;
            } while (iVar14 != *(int *)(unaff_EBP - 0xbc));
            iVar31 = *(int *)(unaff_EBP - 0xd4);
            iVar17 = *(int *)(unaff_EBP - 0xb8);
          }
        }
        else {
          iVar17 = *(int *)(iVar17 + 0x10);
          *(int *)(unaff_EBP - 0xb8) = iVar17;
        }
        *(int *)(iVar31 + 0xa8) = *(int *)(iVar31 + 0xa8) + 1;
        uVar27 = *(undefined4 *)(unaff_EBP - 0x100);
        *(undefined4 *)(iVar17 + 4) = *(undefined4 *)(iVar31 + 0xa0);
        *(undefined4 *)(*(int *)(unaff_EBP - 0xb8) + 0x20) = uVar27;
        *(undefined4 *)(*(int *)(unaff_EBP - 0xb8) + 0x24) = *(undefined4 *)(unaff_EBP - 0xfc);
        *(undefined4 *)(*(int *)(unaff_EBP - 0xb8) + 0x44) = *(undefined4 *)(iVar31 + 100);
        iVar14 = *(int *)(unaff_EBP - 0xb8);
        puVar26 = *(undefined4 **)(unaff_EBP - 0xb4);
        *(int *)(iVar31 + 0xa0) = iVar14;
        iVar17 = iVar14 + 0x20;
        *(undefined4 *)(iVar31 + 100) = 0;
        *(int *)(iVar31 + 8) = iVar17;
        *(undefined4 *)(iVar31 + 0x18) = *(undefined4 *)(iVar14 + 0x3c);
        *(undefined2 *)(iVar31 + 0x2e) = *(undefined2 *)(iVar14 + 0x40);
        iVar14 = *(int *)(iVar31 + 0x18);
        *(int *)(unaff_EBP - 0xe0) = iVar17;
        iVar17 = iVar17 + (iVar14 + 1) * 0x28;
        *(int *)(iVar31 + 0x40) = iVar17;
        uVar27 = *puVar26;
        *(undefined4 *)(unaff_EBP - 0xdc) = uVar27;
        *(undefined4 *)(iVar31 + 4) = uVar27;
        *(undefined4 *)(iVar31 + 0x1c) = puVar26[1];
        _Dst = (void *)(iVar17 + (uint)*(ushort *)(iVar31 + 0x2e) * 4);
        *(void **)(iVar31 + 0xb8) = _Dst;
        sVar22 = puVar26[4];
        *(size_t *)(iVar31 + 0xb4) = sVar22;
        *(undefined4 *)(unaff_EBP - 0xe8) = 0xffffffff;
        memset(_Dst,0,sVar22);
        piVar28 = *(int **)(unaff_EBP - 0xd8);
        goto LAB_004b0d0b;
      case 0x74:
        iVar17 = *(int *)(*(int *)(unaff_EBP - 0xd4) + 0xa0);
        *(int *)(unaff_EBP - 0xcc) = iVar17;
        puVar34 = (undefined8 *)
                  (*(int *)(iVar17 + 0xc) +
                  (*(int *)(*(int *)(iVar17 + 8) + 4 + *(int *)(iVar17 + 0x2c) * 0x14) +
                  *(int *)(*(int *)(unaff_EBP - 0xdc) + 4 + iVar31 * 0x14)) * 0x28);
        *(undefined8 **)(unaff_EBP - 200) = puVar34;
        FUN_004b7c40(piVar28,puVar34,0x1000);
        goto LAB_004b0d0b;
      case 0x75:
        uVar18 = *(uint *)(iVar17 + 8 + iVar31 * 0x14);
        if (*(int *)(iVar17 + 4 + iVar31 * 0x14) == 0) {
          iVar31 = *(int *)(unaff_EBP - 0xd4);
          puVar21 = (uint *)(iVar31 + 0x88);
          uVar30 = *puVar21;
          *puVar21 = *puVar21 + uVar18;
          piVar32 = (int *)(iVar31 + 0x8c);
          *piVar32 = *piVar32 + ((int)uVar18 >> 0x1f) + (uint)CARRY4(uVar30,uVar18);
        }
        else {
          puVar21 = (uint *)(unaff_EBX + 0x7a);
          uVar30 = *puVar21;
          *puVar21 = *puVar21 + uVar18;
          unaff_EBX[0x7b] = unaff_EBX[0x7b] + ((int)uVar18 >> 0x1f) + (uint)CARRY4(uVar30,uVar18);
        }
        goto LAB_004b0d0b;
      case 0x76:
        if (*(int *)(iVar17 + 4 + iVar31 * 0x14) == 0) {
          bVar12 = *(int *)(*(int *)(unaff_EBP - 0xd4) + 0x88) == 0 &&
                   *(int *)(*(int *)(unaff_EBP - 0xd4) + 0x8c) == 0;
        }
        else {
          bVar12 = unaff_EBX[0x7a] == 0 && unaff_EBX[0x7b] == 0;
        }
LAB_004b0cfe:
        if (!bVar12) goto LAB_004b0d0b;
        break;
      case 0x77:
        iVar17 = *(int *)(*(int *)(unaff_EBP - 0xd4) + 0xa0);
        if (iVar17 == 0) {
          iVar17 = *(int *)(unaff_EBP - 0xe0) +
                   *(int *)(*(int *)(unaff_EBP - 0xdc) + 4 + iVar31 * 0x14) * 0x28;
        }
        else {
          *(int *)(unaff_EBP - 200) = iVar17;
          for (iVar14 = *(int *)(iVar17 + 4); iVar14 != 0; iVar14 = *(int *)(iVar14 + 4)) {
            *(int *)(unaff_EBP - 200) = iVar14;
            iVar17 = iVar14;
          }
          iVar17 = *(int *)(iVar17 + 0xc) +
                   *(int *)(*(int *)(unaff_EBP - 0xdc) + 4 + iVar31 * 0x14) * 0x28;
        }
        *(int *)(unaff_EBP - 0xcc) = iVar17;
        FUN_004b7410(iVar17);
        iVar31 = *(int *)(unaff_EBP - 0xe0) +
                 *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar31 * 0x14) * 0x28;
        FUN_004b7410(iVar31);
        iVar17 = *(int *)(unaff_EBP - 0xcc);
        iVar14 = *(int *)(iVar31 + 0x14);
        if ((iVar14 < *(int *)(iVar17 + 0x14)) ||
           ((iVar14 <= *(int *)(iVar17 + 0x14) &&
            (*(uint *)(iVar31 + 0x10) <= *(uint *)(iVar17 + 0x10))))) goto LAB_004af570;
        piVar28 = *(int **)(unaff_EBP - 0xd8);
        *(uint *)(iVar17 + 0x10) = *(uint *)(iVar31 + 0x10);
        *(int *)(iVar17 + 0x14) = iVar14;
        goto LAB_004b0d0b;
      case 0x78:
        iVar14 = *(int *)(iVar17 + 4 + iVar31 * 0x14);
        iVar23 = *(int *)(*(int *)(unaff_EBP - 0xe0) + 0x14 + iVar14 * 0x28);
        if (iVar23 < 0) goto LAB_004b0d0b;
        if (iVar23 < 1) {
          uVar18 = *(uint *)(*(int *)(unaff_EBP - 0xe0) + 0x10 + iVar14 * 0x28);
          goto joined_r0x004b4649;
        }
        break;
      case 0x79:
        iVar14 = *(int *)(*(int *)(unaff_EBP - 0xe0) + 0x14 +
                         *(int *)(iVar17 + 4 + iVar31 * 0x14) * 0x28);
        if ((0 < iVar14) || (-1 < iVar14)) goto LAB_004b0d0b;
        break;
      case 0x7a:
        iVar14 = *(int *)(iVar17 + 4 + iVar31 * 0x14);
        iVar23 = *(int *)(unaff_EBP - 0xe0);
        uVar30 = *(uint *)(iVar17 + 0xc + iVar31 * 0x14);
        puVar21 = (uint *)(iVar23 + 0x10 + iVar14 * 0x28);
        uVar18 = *puVar21;
        *puVar21 = *puVar21 + uVar30;
        piVar32 = (int *)(iVar23 + 0x14 + iVar14 * 0x28);
        *piVar32 = *piVar32 + ((int)uVar30 >> 0x1f) + (uint)CARRY4(uVar18,uVar30);
        unaff_EBX = *(int **)(unaff_EBP - 0xe4);
        if (*(int *)(iVar23 + 0x10 + iVar14 * 0x28) != 0 ||
            *(int *)(iVar23 + 0x14 + iVar14 * 0x28) != 0) goto LAB_004b0d0b;
        iVar31 = *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar31 * 0x14);
        goto LAB_004b0d04;
      case 0x7b:
        uVar18 = (uint)*(byte *)(iVar17 + 3 + iVar31 * 0x14);
        *(uint *)(unaff_EBP - 0xcc) = uVar18;
        iVar17 = *(int *)(unaff_EBP - 0xe0) + *(int *)(iVar17 + 8 + iVar31 * 0x14) * 0x28;
        iVar14 = *(int *)(unaff_EBP - 0xd4);
        *(int *)(unaff_EBP - 0xc0) = iVar17;
        iVar14 = *(int *)(iVar14 + 0xc);
        iVar23 = 0;
        *(int *)(unaff_EBP - 0x7c) = iVar14;
        *(undefined4 *)(unaff_EBP - 200) = 0;
        if (uVar18 != 0) {
          while( true ) {
            *(int *)(iVar14 + iVar23 * 4) = iVar17;
            FUN_004b7cb0(*(int *)(unaff_EBP - 0xc0));
            iVar23 = *(int *)(unaff_EBP - 200) + 1;
            iVar17 = *(int *)(unaff_EBP - 0xc0) + 0x28;
            *(int *)(unaff_EBP - 200) = iVar23;
            *(int *)(unaff_EBP - 0xc0) = iVar17;
            if (*(int *)(unaff_EBP - 0xcc) <= iVar23) break;
            iVar14 = *(int *)(unaff_EBP - 0x7c);
          }
        }
        iVar14 = *(int *)(unaff_EBP - 0xdc);
        iVar17 = *(int *)(unaff_EBP - 0xe0);
        *(undefined4 *)(unaff_EBP - 0xbc) = *(undefined4 *)(iVar14 + 0x10 + iVar31 * 0x14);
        iVar17 = iVar17 + *(int *)(iVar14 + 0xc + iVar31 * 0x14) * 0x28;
        *(int *)(unaff_EBP - 0xc4) = iVar17;
        *(int *)(unaff_EBP - 0x8c) = iVar17;
        *(int *)(iVar17 + 0x18) = *(int *)(iVar17 + 0x18) + 1;
        iVar17 = *(int *)(unaff_EBP - 0xbc);
        *(undefined2 *)(unaff_EBP - 0x98) = 1;
        *(undefined4 *)(unaff_EBP - 0xb0) = 0;
        *(undefined4 *)(unaff_EBP - 0x90) = 0;
        *(undefined4 *)(unaff_EBP - 0x94) = 0;
        *(int **)(unaff_EBP - 0xb4) = unaff_EBX;
        *(undefined4 *)(unaff_EBP - 0x84) = 0;
        *(undefined4 *)(unaff_EBP - 0x88) = 0;
        *(undefined4 *)(unaff_EBP - 0x80) = 0;
        if ((*(byte *)(iVar17 + 3) & 8) != 0) {
          *(undefined4 *)(unaff_EBP - 0x88) = *(undefined4 *)(iVar14 + -4 + iVar31 * 0x14);
        }
        (**(code **)(iVar17 + 0x10))();
        if (*(int *)(unaff_EBP - 0x84) != 0) {
          FUN_004ae680((int *)(unaff_EBP - 0xb4),1);
          FUN_004a9a30((int *)(*(int *)(unaff_EBP - 0xd4) + 0x34),(int)unaff_EBX,&DAT_0056de50);
          *(undefined4 *)(unaff_EBP - 0xd0) = *(undefined4 *)(unaff_EBP - 0x84);
        }
        if (*(int *)(unaff_EBP - 0x80) != 0) {
          iVar31 = *(int *)(iVar14 + -0x10 + iVar31 * 0x14);
          *(int *)(unaff_EBP - 200) = iVar31;
          if (iVar31 != 0) {
            FUN_004b7860((int *)(*(int *)(unaff_EBP - 0xe0) + iVar31 * 0x28),1,0);
          }
        }
        FUN_004b76e0((int *)(unaff_EBP - 0xb4));
        piVar28 = *(int **)(unaff_EBP - 0xd8);
        goto LAB_004b0d0b;
      case 0x7c:
        piVar32 = (int *)(*(int *)(unaff_EBP - 0xe0) + *(int *)(iVar17 + 4 + iVar31 * 0x14) * 0x28);
        *(int **)(unaff_EBP - 0xcc) = piVar32;
        iVar31 = FUN_004b7010(piVar32,*(int *)(iVar17 + 0x10 + iVar31 * 0x14));
        *(int *)(unaff_EBP - 0xd0) = iVar31;
        if (iVar31 != 0) {
          FUN_004ae680(*(int **)(unaff_EBP - 0xcc),1);
          FUN_004a9a30((int *)(*(int *)(unaff_EBP - 0xd4) + 0x34),(int)unaff_EBX,&DAT_0056de50);
        }
        FUN_004aec30(*(int **)(unaff_EBP - 0xcc),(uint)*(byte *)(unaff_EBP - 0xec));
        bVar12 = FUN_004b7d90(*(int **)(unaff_EBP - 0xcc));
        iVar31 = CONCAT31(extraout_var_01,bVar12);
        goto joined_r0x004b48db;
      case 0x7d:
        *(undefined4 *)(unaff_EBP - 200) = 0;
        *(undefined4 *)(unaff_EBP - 0xc0) = 0xffffffff;
        *(undefined4 *)(unaff_EBP - 0xc4) = 0xffffffff;
        iVar17 = FUN_00492280((int)unaff_EBX,*(int *)(iVar17 + 4 + iVar31 * 0x14),
                              *(int *)(iVar17 + 8 + iVar31 * 0x14),(undefined4 *)(unaff_EBP - 0xc4),
                              (undefined4 *)(unaff_EBP - 0xc0));
        *(int *)(unaff_EBP - 0xd0) = iVar17;
        if (iVar17 == 5) {
          *(undefined4 *)(unaff_EBP - 0xd0) = 0;
          *(undefined4 *)(unaff_EBP - 200) = 1;
        }
        iVar17 = *(int *)(unaff_EBP - 0xdc);
        iVar14 = *(int *)(unaff_EBP - 0xe0);
        iVar23 = 0;
        *(undefined4 *)(unaff_EBP - 0xcc) = 0;
        piVar32 = (int *)(iVar14 + *(int *)(iVar17 + 0xc + iVar31 * 0x14) * 0x28);
        *(int **)(unaff_EBP - 0xbc) = piVar32;
        do {
          iVar31 = *(int *)((unaff_EBP - 200) + iVar23 * 4);
          FUN_004b7860(piVar32,iVar31,iVar31 >> 0x1f);
          iVar23 = *(int *)(unaff_EBP - 0xcc) + 1;
          piVar32 = (int *)(*(int *)(unaff_EBP - 0xbc) + 0x28);
          *(int *)(unaff_EBP - 0xcc) = iVar23;
          *(int **)(unaff_EBP - 0xbc) = piVar32;
        } while (iVar23 < 3);
        goto LAB_004b0d0b;
      case 0x7e:
        uVar18 = *(uint *)(iVar17 + 0xc + iVar31 * 0x14);
        iVar17 = *(int *)(unaff_EBP - 0xdc);
        *(uint *)(unaff_EBP - 0xc4) = uVar18;
        piVar28 = *(int **)(unaff_EBX[4] + 4 + *(int *)(iVar17 + 4 + iVar31 * 0x14) * 0x10);
        *(int **)(unaff_EBP - 0xcc) = piVar28;
        puVar26 = (undefined4 *)piVar28[1];
        *(int **)(unaff_EBP - 0xf0) = piVar28;
        puVar21 = (uint *)*puVar26;
        *(uint **)(unaff_EBP - 200) = puVar21;
        uVar30 = (uint)*(byte *)((int)puVar21 + 5);
        if (uVar18 == 0xffffffff) {
          uVar18 = uVar30;
        }
        *(uint *)(unaff_EBP - 0xc0) = uVar30;
        *(uint *)(unaff_EBP - 0xc4) = uVar18;
        if ((2 < *(byte *)((int)puVar21 + 0xf)) ||
           (((*(int *)puVar21[0x10] != 0 && (-1 < (int)puVar21[0x13])) &&
            ((0 < (int)puVar21[0x13] || (puVar21[0x12] != 0)))))) {
          *(uint *)(unaff_EBP - 0xc4) = uVar30;
          uVar18 = uVar30;
        }
        pcVar24 = "";
        if (*(char *)((int)puVar21 + 0xe) == '\0') {
          pcVar24 = (char *)puVar21[0x24];
        }
        *(char **)(unaff_EBP - 0xbc) = pcVar24;
        if (uVar18 == 5) {
          uVar18 = FUN_004aa9b0(pcVar24);
          if ((uVar18 != 0) && (iVar17 = FUN_004a2c50((int)puVar21), iVar17 != 0)) {
            piVar28 = *(int **)(unaff_EBP - 0xf0);
            uVar18 = extraout_EDX_00;
            goto LAB_004b4abb;
          }
          *(uint *)(unaff_EBP - 0xc4) = uVar30;
          uVar18 = uVar30;
LAB_004b4a59:
          if (*(int *)(unaff_EBP - 0xd0) != 0) goto LAB_004b4a62;
        }
        else {
LAB_004b4abb:
          if ((uVar18 == uVar30) || ((uVar30 != 5 && (uVar18 != 5)))) goto LAB_004b4a59;
          if ((*(char *)(*(int *)(unaff_EBP - 0xe4) + 0x36) == '\0') ||
             (1 < *(int *)(*(int *)(unaff_EBP - 0xe4) + 0x84))) {
            unaff_EBX = *(int **)(unaff_EBP - 0xe4);
            iVar31 = *(int *)(unaff_EBP - 0xd4);
            *(undefined4 *)(unaff_EBP - 0xd0) = 1;
            FUN_004a9a30((int *)(iVar31 + 0x34),(int)unaff_EBX,
                         (byte *)"cannot change %s wal mode from within a transaction");
            uVar18 = 1;
            piVar28 = *(int **)(unaff_EBP - 0xd8);
            goto LAB_004b0d11;
          }
          if (uVar30 == 5) {
            iVar17 = FUN_004a18e0((int *)puVar21);
            *(int *)(unaff_EBP - 0xd0) = iVar17;
            if (iVar17 == 0) {
              FUN_004a26f0(*(uint **)(unaff_EBP - 200),*(uint *)(unaff_EBP - 0xc4));
              uVar18 = *(uint *)(unaff_EBP - 0xc4);
              piVar28 = *(int **)(unaff_EBP - 0xcc);
LAB_004b4b68:
              uVar25 = FUN_00491d30(piVar28,(uVar18 == 5) + 1);
              uVar30 = *(uint *)(unaff_EBP - 0xc0);
              uVar18 = *(uint *)(unaff_EBP - 0xc4);
              puVar21 = *(uint **)(unaff_EBP - 200);
              *(uint *)(unaff_EBP - 0xd0) = uVar25;
              goto LAB_004b4a59;
            }
            puVar21 = *(uint **)(unaff_EBP - 200);
            uVar30 = *(uint *)(unaff_EBP - 0xc0);
          }
          else {
            if (uVar30 == 4) {
              FUN_004a26f0(puVar21,2);
              uVar30 = *(uint *)(unaff_EBP - 0xc0);
              uVar18 = *(uint *)(unaff_EBP - 0xc4);
              puVar21 = *(uint **)(unaff_EBP - 200);
              piVar28 = *(int **)(unaff_EBP - 0xcc);
            }
            if (*(int *)(unaff_EBP - 0xd0) == 0) goto LAB_004b4b68;
          }
LAB_004b4a62:
          uVar18 = uVar30;
          *(uint *)(unaff_EBP - 0xc4) = uVar18;
        }
        uVar11 = FUN_004a26f0(puVar21,uVar18);
        iVar17 = *(int *)(unaff_EBP - 0xe0);
        *(uint *)(unaff_EBP - 0xc4) = CONCAT31(extraout_var_02,uVar11);
        piVar28 = (int *)(iVar17 + *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar31 * 0x14) * 0x28);
        *(undefined2 *)(piVar28 + 7) = 0xa02;
        iVar31 = *(int *)(unaff_EBP - 0xc4);
        *(int **)(unaff_EBP - 0xd8) = piVar28;
        if (iVar31 == 6) {
          pcVar24 = (char *)0x0;
        }
        else {
          pcVar24 = (&PTR_s_delete_0056a9c4)[iVar31];
        }
        piVar28[1] = (int)pcVar24;
        uVar18 = FUN_004aa9b0(pcVar24);
        piVar28[6] = uVar18;
        bVar10 = *(byte *)(unaff_EBP - 0xec);
        *(undefined1 *)((int)piVar28 + 0x1f) = 1;
        FUN_004aec30(piVar28,(uint)bVar10);
        unaff_EBX = *(int **)(unaff_EBP - 0xe4);
        piVar28 = *(int **)(unaff_EBP - 0xd8);
        goto LAB_004b0d0b;
      case 0x7f:
        uVar18 = FUN_004a74f0((int *)(*(int *)(unaff_EBP - 0xd4) + 0x34),(int)unaff_EBX);
        *(uint *)(unaff_EBP - 0xd0) = uVar18;
        goto LAB_004b0d11;
      case 0x80:
        puVar26 = *(undefined4 **)(unaff_EBX[4] + 4 + *(int *)(iVar17 + 4 + iVar31 * 0x14) * 0x10);
        *(undefined4 **)(unaff_EBP - 0xcc) = puVar26;
        uVar18 = FUN_0048ff20(puVar26);
        *(uint *)(unaff_EBP - 0xd0) = uVar18;
        if (uVar18 == 0x65) {
          *(int *)(unaff_EBP - 0xe8) = *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar31 * 0x14) + -1
          ;
          uVar18 = 0;
          *(undefined4 *)(unaff_EBP - 0xd0) = 0;
        }
        goto LAB_004b0d11;
      case 0x81:
        if (*(int *)(iVar17 + 4 + iVar31 * 0x14) == 0) {
          FUN_00496370((int)unaff_EBX);
        }
        else {
          puVar21 = (uint *)(*(int *)(unaff_EBP - 0xd4) + 0x60);
          *puVar21 = *puVar21 | 0x20;
        }
        goto LAB_004b0d0b;
      case 0x82:
        *(undefined2 *)(piVar28 + 7) = 8;
        *(undefined8 *)(piVar28 + 2) = **(undefined8 **)(iVar17 + 0x10 + iVar31 * 0x14);
        goto LAB_004b0d0b;
      case 0x83:
        cVar9 = *(char *)(iVar17 + 0xc + iVar31 * 0x14);
        *(char *)(unaff_EBP - 0x114) = cVar9;
        if ((cVar9 == '\0') && ((unaff_EBX[6] & 0x800U) != 0)) goto LAB_004b0d0b;
        uVar18 = FUN_00490810(*(undefined8 **)
                               (unaff_EBX[4] + 4 + *(int *)(iVar17 + 4 + iVar31 * 0x14) * 0x10),
                              *(int *)(iVar17 + 8 + iVar31 * 0x14),
                              (char)*(undefined4 *)(unaff_EBP - 0x114));
        *(uint *)(unaff_EBP - 0xd0) = uVar18;
        if ((char)uVar18 == '\x06') {
          FUN_004a9a30((int *)(*(int *)(unaff_EBP - 0xd4) + 0x34),(int)unaff_EBX,
                       (byte *)"database table is locked: %s");
          goto LAB_004b0d0b;
        }
        goto LAB_004b0d11;
      case 0x84:
        iVar31 = *(int *)(iVar17 + 0x10 + iVar31 * 0x14);
        *(int *)(unaff_EBP - 0xcc) = iVar31;
        iVar31 = FUN_004b96f0((int)unaff_EBX,iVar31);
        *(int *)(unaff_EBP - 0xd0) = iVar31;
        if (*(int *)(unaff_EBP - 0xcc) != 0) {
          FUN_0047e200(*(int **)(unaff_EBP - 0xd4),*(int *)(*(int *)(unaff_EBP - 0xcc) + 8));
        }
        goto LAB_004b0d0b;
      case 0x85:
        uVar18 = FUN_004b9980((int)unaff_EBX,*(int *)(iVar17 + 4 + iVar31 * 0x14),
                              *(byte **)(iVar17 + 0x10 + iVar31 * 0x14),
                              (undefined4 *)(*(int *)(unaff_EBP - 0xd4) + 0x34));
        *(uint *)(unaff_EBP - 0xd0) = uVar18;
        goto LAB_004b0d11;
      case 0x86:
        *(uint *)(*(int *)(unaff_EBP - 0xd4) + 0x60) =
             *(uint *)(*(int *)(unaff_EBP - 0xd4) + 0x60) & 0xfffffffb | 8;
        uVar18 = FUN_004b9aa0((int)unaff_EBX,*(int *)(iVar17 + 4 + iVar31 * 0x14),
                              *(byte **)(iVar17 + 0x10 + iVar31 * 0x14));
        puVar21 = (uint *)(*(int *)(unaff_EBP - 0xd4) + 0x60);
        *puVar21 = *puVar21 & 0xfffffff3;
        *(uint *)(unaff_EBP - 0xd0) = uVar18;
        goto LAB_004b0d11;
      case 0x87:
        *(undefined4 *)(unaff_EBP - 0xcc) = 0;
        *(undefined4 *)(unaff_EBP - 200) = 0;
        piVar32 = *(int **)(*(int *)(iVar17 + 0x10 + iVar31 * 0x14) + 8);
        *(int **)(unaff_EBP - 0xc4) = piVar32;
        iVar17 = *piVar32;
        *(int *)(unaff_EBP - 0xc0) = iVar17;
        uVar27 = (**(code **)(iVar17 + 0x18))(piVar32);
        iVar17 = *(int *)(unaff_EBP - 0xc4);
        *(undefined4 *)(unaff_EBP - 0xd0) = uVar27;
        FUN_0047e200(*(int **)(unaff_EBP - 0xd4),iVar17);
        uVar18 = *(uint *)(unaff_EBP - 0xd0);
        if (uVar18 == 0) {
          **(undefined4 **)(unaff_EBP - 200) = *(undefined4 *)(unaff_EBP - 0xc4);
          puVar26 = FUN_0046c260(*(int **)(unaff_EBP - 0xd4),
                                 *(int *)(*(int *)(unaff_EBP - 0xdc) + 4 + iVar31 * 0x14),0,
                                 0xffffffff,0);
          *(undefined4 **)(unaff_EBP - 0xcc) = puVar26;
          if (puVar26 == (undefined4 *)0x0) {
            *(undefined1 *)(unaff_EBX + 0xe) = 1;
            (**(code **)(*(int *)(unaff_EBP - 0xc0) + 0x1c))();
          }
          else {
            puVar26[9] = *(undefined4 *)(unaff_EBP - 200);
            *(undefined4 *)(*(int *)(unaff_EBP - 0xcc) + 0x28) =
                 *(undefined4 *)**(undefined4 **)(unaff_EBP - 200);
          }
          goto LAB_004b0d0b;
        }
        goto LAB_004b0d11;
      case 0x88:
        iVar14 = *(int *)(unaff_EBP - 0xe0) + *(int *)(iVar17 + 0xc + iVar31 * 0x14) * 0x28;
        iVar23 = *(int *)(unaff_EBP - 0xdc);
        *(int *)(unaff_EBP - 0xc0) = iVar14;
        iVar17 = iVar14 + 0x28;
        *(int *)(unaff_EBP - 0xbc) = iVar17;
        iVar23 = *(int *)(*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
                         *(int *)(iVar23 + 4 + iVar31 * 0x14) * 4);
        *(int *)(unaff_EBP - 0xb0) = iVar23;
        puVar26 = *(undefined4 **)(iVar23 + 0x24);
        *(undefined4 **)(unaff_EBP - 0xb8) = puVar26;
        *(undefined4 **)(unaff_EBP - 0x104) = puVar26;
        puVar26 = (undefined4 *)*puVar26;
        *(undefined4 **)(unaff_EBP - 0xb4) = puVar26;
        uVar27 = *puVar26;
        *(undefined4 *)(unaff_EBP - 0xc4) = uVar27;
        iVar23 = *(int *)(iVar14 + 0x38);
        *(undefined4 *)(unaff_EBP - 0xd0) = uVar27;
        *(int *)(unaff_EBP - 0xcc) = iVar23;
        uVar27 = *(undefined4 *)(iVar14 + 0x10);
        *(undefined4 *)(unaff_EBP - 0xf0) = uVar27;
        *(undefined4 *)(unaff_EBP - 200) = uVar27;
        iVar15 = *(int *)(unaff_EBP - 0xd4);
        iVar33 = 0;
        iVar14 = *(int *)(iVar15 + 0xc);
        *(undefined4 *)(unaff_EBP - 0xac) = 0;
        *(int *)(unaff_EBP - 0xa4) = iVar14;
        *(undefined4 *)(unaff_EBP - 0xa8) = 0;
        if (iVar23 < 1) {
          iVar17 = *(int *)(unaff_EBP - 0xd0);
        }
        else {
          while( true ) {
            *(int *)(iVar14 + iVar33 * 4) = iVar17 + (iVar33 + 1) * 0x28;
            FUN_004b7cb0(*(int *)(*(int *)(unaff_EBP - 0xa4) + *(int *)(unaff_EBP - 0xa8) * 4));
            iVar23 = *(int *)(unaff_EBP - 0xcc);
            iVar14 = *(int *)(unaff_EBP - 0xa4);
            iVar33 = *(int *)(unaff_EBP - 0xa8) + 1;
            *(int *)(unaff_EBP - 0xa8) = iVar33;
            if (iVar23 <= iVar33) break;
            iVar17 = *(int *)(unaff_EBP - 0xbc);
          }
          uVar27 = *(undefined4 *)(unaff_EBP - 0xb8);
          iVar17 = *(int *)(unaff_EBP - 0xc4);
          *(undefined4 *)(unaff_EBP - 0xf0) = *(undefined4 *)(unaff_EBP - 200);
          iVar15 = *(int *)(unaff_EBP - 0xd4);
          *(undefined4 *)(unaff_EBP - 0x104) = uVar27;
        }
        iVar14 = *(int *)(unaff_EBP - 0xdc);
        *(uint *)(*(int *)(unaff_EBP - 0xd4) + 0x60) = *(uint *)(iVar15 + 0x60) & 0xfffffff7 | 4;
        uVar27 = (**(code **)(iVar17 + 0x20))
                           (*(undefined4 *)(unaff_EBP - 0x104),*(undefined4 *)(unaff_EBP - 0xf0),
                            *(undefined4 *)(iVar14 + 0x10 + iVar31 * 0x14),iVar23);
        iVar17 = *(int *)(unaff_EBP - 0xb4);
        *(undefined4 *)(unaff_EBP - 0xd0) = uVar27;
        piVar28 = *(int **)(unaff_EBP - 0xd4);
        puVar21 = (uint *)(piVar28 + 0x18);
        *puVar21 = *puVar21 & 0xfffffff3;
        FUN_0047e200(piVar28,iVar17);
        if (*(int *)(unaff_EBP - 0xd0) == 0) {
          iVar17 = (**(code **)(*(int *)(unaff_EBP - 0xc4) + 0x28))();
          *(int *)(unaff_EBP - 0xac) = iVar17;
        }
        else {
          iVar17 = *(int *)(unaff_EBP - 0xac);
        }
        if (iVar17 != 0) {
          *(int *)(unaff_EBP - 0xe8) = *(int *)(iVar14 + 8 + iVar31 * 0x14) + -1;
        }
        unaff_EBX = *(int **)(unaff_EBP - 0xe4);
        piVar28 = *(int **)(unaff_EBP - 0xd8);
        *(undefined1 *)(*(int *)(unaff_EBP - 0xb0) + 0x1c) = 0;
        goto LAB_004b0d0b;
      case 0x89:
        iVar14 = *(int *)(*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
                         *(int *)(iVar17 + 4 + iVar31 * 0x14) * 4);
        iVar17 = *(int *)(unaff_EBP - 0xe0) + *(int *)(iVar17 + 0xc + iVar31 * 0x14) * 0x28;
        *(int *)(unaff_EBP - 0xc4) = iVar17;
        if (*(char *)(iVar14 + 0x1c) != '\0') {
          FUN_004b78c0(iVar17);
          piVar28 = *(int **)(unaff_EBP - 0xd8);
          goto LAB_004b0d0b;
        }
        puVar26 = (undefined4 *)**(undefined4 **)(iVar14 + 0x24);
        *(undefined4 **)(unaff_EBP - 0xcc) = puVar26;
        *(undefined4 *)(unaff_EBP - 200) = *puVar26;
        memset((void *)(unaff_EBP - 0xbc),0,0x40);
        FUN_004b7500((int *)(unaff_EBP - 0xb4),*(undefined8 **)(unaff_EBP - 0xc4));
        *(ushort *)(unaff_EBP - 0x98) = (ushort)*(undefined4 *)(unaff_EBP - 0x98) & 0xbe01 | 1;
        uVar27 = (**(code **)(*(int *)(unaff_EBP - 200) + 0x2c))
                           (*(undefined4 *)(iVar14 + 0x24),unaff_EBP - 0xbc,
                            *(undefined4 *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar31 * 0x14));
        iVar31 = *(int *)(unaff_EBP - 0xcc);
        *(undefined4 *)(unaff_EBP - 0xd0) = uVar27;
        FUN_0047e200(*(int **)(unaff_EBP - 0xd4),iVar31);
        iVar31 = *(int *)(unaff_EBP - 0xd0);
        if (*(int *)(unaff_EBP - 0x84) != 0) {
          iVar31 = *(int *)(unaff_EBP - 0x84);
        }
        bVar10 = *(byte *)(unaff_EBP - 0xec);
        *(int *)(unaff_EBP - 0xd0) = iVar31;
        FUN_004aec30((int *)(unaff_EBP - 0xb4),(uint)bVar10);
        FUN_004b7500(*(int **)(unaff_EBP - 0xc4),(undefined8 *)(unaff_EBP - 0xb4));
        bVar12 = FUN_004b7d90(*(int **)(unaff_EBP - 0xc4));
        if (CONCAT31(extraout_var_03,bVar12) != 0) goto LAB_004b5780;
        piVar28 = *(int **)(unaff_EBP - 0xd8);
        goto LAB_004b0d0b;
      case 0x8a:
        iVar14 = *(int *)(unaff_EBP - 0xd4);
        *(undefined4 *)(unaff_EBP - 0xc4) = 0;
        iVar17 = *(int *)(*(int *)(iVar14 + 0x40) + *(int *)(iVar17 + 4 + iVar31 * 0x14) * 4);
        *(int *)(unaff_EBP - 0xc0) = iVar17;
        if (*(char *)(iVar17 + 0x1c) != '\0') goto LAB_004b0d0b;
        piVar32 = *(int **)(unaff_EBP - 0xd4);
        piVar8 = (int *)**(undefined4 **)(iVar17 + 0x24);
        *(int **)(unaff_EBP - 0xcc) = piVar8;
        iVar17 = *piVar8;
        iVar14 = *(int *)(unaff_EBP - 0xd4);
        *(int *)(unaff_EBP - 200) = iVar17;
        piVar32[0x18] = *(uint *)(iVar14 + 0x60) & 0xfffffff7 | 4;
        uVar27 = (**(code **)(iVar17 + 0x24))();
        iVar17 = *(int *)(unaff_EBP - 0xcc);
        *(undefined4 *)(unaff_EBP - 0xd0) = uVar27;
        piVar32[0x18] = piVar32[0x18] & 0xfffffff3;
        FUN_0047e200(piVar32,iVar17);
        unaff_EBX = *(int **)(unaff_EBP - 0xe4);
        if (*(int *)(unaff_EBP - 0xd0) == 0) {
          iVar17 = (**(code **)(*(int *)(unaff_EBP - 200) + 0x28))();
          *(int *)(unaff_EBP - 0xc4) = iVar17;
        }
        else {
          iVar17 = *(int *)(unaff_EBP - 0xc4);
        }
        if (iVar17 != 0) goto LAB_004b0d0b;
        iVar31 = *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar31 * 0x14);
        goto LAB_004b0d04;
      case 0x8b:
        goto switchD_004af4da_caseD_8b;
      case 0x8c:
        piVar32 = *(int **)(*(int *)(iVar17 + 0x10 + iVar31 * 0x14) + 8);
        *(int **)(unaff_EBP - 0xcc) = piVar32;
        iVar14 = *piVar32;
        *(int *)(unaff_EBP - 200) = iVar14;
        iVar17 = *(int *)(iVar17 + 8 + iVar31 * 0x14);
        *(int *)(unaff_EBP - 0xc4) = iVar17;
        if (*(int *)(iVar14 + 0x34) == 0) goto LAB_004b0d0b;
        iVar33 = unaff_EBX[0xf];
        iVar23 = *(int *)(unaff_EBP - 0xdc);
        iVar14 = *(int *)(unaff_EBP - 0xe0);
        *(undefined4 *)(unaff_EBP - 0xb4) = *(undefined4 *)(*(int *)(unaff_EBP - 0xd4) + 0xc);
        iVar15 = *(int *)(iVar23 + 0xc + iVar31 * 0x14);
        *(undefined4 *)(unaff_EBP - 0xc0) = 0;
        iVar14 = iVar14 + iVar15 * 0x28;
        *(int *)(unaff_EBP - 0xb0) = iVar14;
        if (0 < iVar17) {
          do {
            FUN_004b7cb0(iVar14);
            *(undefined4 *)(*(int *)(unaff_EBP - 0xb4) + *(int *)(unaff_EBP - 0xc0) * 4) =
                 *(undefined4 *)(unaff_EBP - 0xb0);
            iVar17 = *(int *)(unaff_EBP - 0xc0) + 1;
            iVar14 = *(int *)(unaff_EBP - 0xb0) + 0x28;
            *(int *)(unaff_EBP - 0xb0) = iVar14;
            *(int *)(unaff_EBP - 0xc0) = iVar17;
          } while (iVar17 < *(int *)(unaff_EBP - 0xc4));
        }
        iVar17 = *(int *)(unaff_EBP - 0xe4);
        *(undefined1 *)(iVar17 + 0x3c) = *(undefined1 *)(iVar23 + 3 + iVar31 * 0x14);
        uVar27 = (**(code **)(*(int *)(unaff_EBP - 200) + 0x34))
                           (*(undefined4 *)(unaff_EBP - 0xcc),*(undefined4 *)(unaff_EBP - 0xc4),
                            *(undefined4 *)(unaff_EBP - 0xb4));
        *(char *)(iVar17 + 0x3c) = (char)iVar33;
        iVar17 = *(int *)(unaff_EBP - 0xcc);
        piVar28 = *(int **)(unaff_EBP - 0xd4);
        *(undefined4 *)(unaff_EBP - 0xd0) = uVar27;
        FUN_0047e200(piVar28,iVar17);
        if (*(int *)(unaff_EBP - 0xd0) == 0) {
          unaff_EBX = *(int **)(unaff_EBP - 0xe4);
          if (*(int *)(*(int *)(unaff_EBP - 0xdc) + 4 + iVar31 * 0x14) != 0) {
            uVar27 = *(undefined4 *)(unaff_EBP - 0xb8);
            iVar31 = *(int *)(unaff_EBP - 0xbc);
            unaff_EBX[8] = iVar31;
            *(undefined4 *)(unaff_EBP - 0xfc) = uVar27;
            unaff_EBX[9] = *(int *)(unaff_EBP - 0xb8);
            piVar28[0x19] = piVar28[0x19] + 1;
            piVar28 = *(int **)(unaff_EBP - 0xd8);
            *(int *)(unaff_EBP - 0x100) = iVar31;
            goto LAB_004b0d0b;
          }
        }
        else {
          if ((*(int *)(unaff_EBP - 0xd0) == 0x13) &&
             (*(char *)(*(int *)(*(int *)(unaff_EBP - 0xdc) + 0x10 + iVar31 * 0x14) + 0x10) != '\0')
             ) {
            cVar9 = *(char *)(*(int *)(unaff_EBP - 0xdc) + 3 + iVar31 * 0x14);
            if (cVar9 != '\x04') {
              if (cVar9 == '\x05') {
                unaff_EBX = *(int **)(unaff_EBP - 0xe4);
                *(undefined1 *)(piVar28 + 0x17) = 2;
                piVar28 = *(int **)(unaff_EBP - 0xd8);
              }
              else {
                unaff_EBX = *(int **)(unaff_EBP - 0xe4);
                *(char *)(piVar28 + 0x17) = cVar9;
                piVar28 = *(int **)(unaff_EBP - 0xd8);
              }
              goto LAB_004b0d0b;
            }
            unaff_EBX = *(int **)(unaff_EBP - 0xe4);
            piVar28 = *(int **)(unaff_EBP - 0xd8);
            *(undefined4 *)(unaff_EBP - 0xd0) = 0;
            uVar18 = 0;
            goto LAB_004b0d11;
          }
          unaff_EBX = *(int **)(unaff_EBP - 0xe4);
        }
        piVar28[0x19] = piVar28[0x19] + 1;
        piVar28 = *(int **)(unaff_EBP - 0xd8);
        goto LAB_004b0d0b;
      case 0x8d:
        piVar28 = (int *)(*(int *)(unaff_EBP - 0xe0) + *(int *)(iVar17 + 4 + iVar31 * 0x14) * 0x28);
        uVar4 = *(ushort *)(piVar28 + 7);
        if ((uVar4 & 1) != 0) goto LAB_004af570;
        *(ushort *)(piVar28 + 7) = uVar4 >> 3 & 2 | uVar4;
        if (((uVar4 >> 3 & 2) == 0 && (uVar4 & 2) == 0) && ((uVar4 & 0xc) != 0)) {
          FUN_004b7cf0(piVar28,(uint)*(byte *)(unaff_EBP - 0xec));
        }
        *(ushort *)(piVar28 + 7) = *(ushort *)(piVar28 + 7) & 0xfff3;
        if ((*(ushort *)(piVar28 + 7) & 0x4000) == 0) {
          uVar18 = 0;
          *(ushort *)(piVar28 + 7) = *(ushort *)(piVar28 + 7) & 0xbfe3;
          *(undefined4 *)(unaff_EBP - 0xd0) = 0;
LAB_004b0616:
          piVar28 = *(int **)(unaff_EBP - 0xd8);
        }
        else {
          uVar18 = FUN_004b6fa0(piVar28);
          *(ushort *)(piVar28 + 7) = *(ushort *)(piVar28 + 7) & 0xbfe3;
          piVar28 = *(int **)(unaff_EBP - 0xd8);
          *(uint *)(unaff_EBP - 0xd0) = uVar18;
        }
        goto LAB_004b0d11;
      case 0x8e:
        piVar28 = (int *)(*(int *)(unaff_EBP - 0xe0) + *(int *)(iVar17 + 4 + iVar31 * 0x14) * 0x28);
        uVar4 = *(ushort *)(piVar28 + 7);
        if ((uVar4 & 1) != 0) goto LAB_004af570;
        if ((uVar4 & 0x10) == 0) {
          if (((uVar4 & 2) == 0) && ((uVar4 & 0xc) != 0)) {
            FUN_004b7cf0(piVar28,(uint)*(byte *)(unaff_EBP - 0xec));
          }
          *(ushort *)(piVar28 + 7) = *(ushort *)(piVar28 + 7) & 0xbe10 | 0x10;
          piVar28 = *(int **)(unaff_EBP - 0xd8);
        }
        else {
          *(ushort *)(piVar28 + 7) = uVar4 & 0xfe10;
          piVar28 = *(int **)(unaff_EBP - 0xd8);
        }
        goto LAB_004b0d0b;
      case 0x8f:
        FUN_004b75f0(*(int *)(unaff_EBP - 0xe0) + *(int *)(iVar17 + 4 + iVar31 * 0x14) * 0x28);
        goto LAB_004b0d0b;
      case 0x90:
        iVar31 = *(int *)(iVar17 + 4 + iVar31 * 0x14);
        if ((*(byte *)(*(int *)(unaff_EBP - 0xe0) + 0x1c + iVar31 * 0x28) & 1) == 0) {
          FUN_004b7410(*(int *)(unaff_EBP - 0xe0) + iVar31 * 0x28);
        }
        goto LAB_004b0d0b;
      case 0x91:
        iVar31 = *(int *)(iVar17 + 4 + iVar31 * 0x14);
        if ((*(byte *)(*(int *)(unaff_EBP - 0xe0) + 0x1c + iVar31 * 0x28) & 1) == 0) {
          FUN_004b7670(*(int *)(unaff_EBP - 0xe0) + iVar31 * 0x28);
        }
        goto LAB_004b0d0b;
      case 0x92:
        piVar28[4] = *(int *)(*(int *)(*(int *)(unaff_EBX[4] + 4 +
                                               *(int *)(iVar17 + 4 + iVar31 * 0x14) * 0x10) + 4) +
                             0x2c);
        piVar28[5] = 0;
        goto LAB_004b0d0b;
      case 0x93:
        puVar26 = *(undefined4 **)(unaff_EBX[4] + 4 + *(int *)(iVar17 + 4 + iVar31 * 0x14) * 0x10);
        uVar18 = *(uint *)(*(int *)(unaff_EBP - 0xdc) + 0xc + iVar31 * 0x14);
        uVar30 = 0;
        if ((uVar18 != 0) && (uVar30 = *(uint *)(puVar26[1] + 0x2c), uVar30 < uVar18)) {
          uVar30 = uVar18;
        }
        iVar31 = FUN_00490880(puVar26,uVar30);
        piVar28[4] = iVar31;
        piVar28[5] = iVar31 >> 0x1f;
        goto LAB_004b0d0b;
      case 0x94:
        if ((unaff_EBX[0x26] != 0) && ((*(uint *)(*(int *)(unaff_EBP - 0xd4) + 0x60) & 0x400) == 0))
        {
          pbVar35 = *(byte **)(iVar17 + 0x10 + iVar31 * 0x14);
          if (pbVar35 == (byte *)0x0) {
            pbVar35 = *(byte **)(*(int *)(unaff_EBP - 0xd4) + 0x98);
          }
          *(byte **)(unaff_EBP - 0xcc) = pbVar35;
          if (pbVar35 != (byte *)0x0) {
            uVar27 = FUN_004b5b10(*(uint **)(unaff_EBP - 0xd4),pbVar35);
            *(undefined4 *)(unaff_EBP - 200) = uVar27;
            (*(code *)unaff_EBX[0x26])(unaff_EBX[0x27]);
            FUN_00494b00((int)unaff_EBX,*(undefined4 **)(unaff_EBP - 200));
          }
        }
      default:
        goto LAB_004b0d0b;
      }
      iVar31 = *(int *)(iVar17 + 8 + iVar31 * 0x14);
      goto LAB_004b0d04;
    }
  }
  if ((param_2 != 0) || (iVar31 != 0)) goto LAB_004b2fd2;
LAB_004b573f:
  uVar18 = 0xd;
  *(undefined4 *)(unaff_EBP - 0xd0) = 0xd;
LAB_004b572c:
  if ((char)unaff_EBX[0xe] == '\0') {
    if (uVar18 == 0xc0a) goto LAB_004b57cd;
  }
  else {
    uVar18 = 7;
    *(undefined4 *)(unaff_EBP - 0xd0) = 7;
  }
  FUN_004961c0(uVar18);
  FUN_004a9a30((int *)(*(int *)(unaff_EBP - 0xd4) + 0x34),(int)unaff_EBX,&DAT_0056de50);
  uVar18 = *(uint *)(unaff_EBP - 0xd0);
  goto LAB_004b57cd;
switchD_004af4da_caseD_8b:
  iVar14 = *(int *)(unaff_EBP - 0xe0);
  *(undefined4 *)(unaff_EBP - 0xcc) = *(undefined4 *)(*(int *)(iVar17 + 0x10 + iVar31 * 0x14) + 8);
  piVar32 = (int *)(iVar14 + *(int *)(iVar17 + 4 + iVar31 * 0x14) * 0x28);
  *(int **)(unaff_EBP - 200) = piVar32;
  uVar18 = FUN_004aec30(piVar32,1);
  *(uint *)(unaff_EBP - 0xd0) = uVar18;
  if (uVar18 == 0) goto code_r0x004b5255;
  goto LAB_004b0d11;
code_r0x004b5255:
  uVar27 = (**(code **)(**(int **)(unaff_EBP - 0xcc) + 0x4c))(*(int **)(unaff_EBP - 0xcc));
  iVar31 = *(int *)(unaff_EBP - 0xcc);
  *(undefined4 *)(unaff_EBP - 0xd0) = uVar27;
  FUN_0047e200(*(int **)(unaff_EBP - 0xd4),iVar31);
  puVar21 = (uint *)(*(int *)(unaff_EBP - 0xd4) + 0x60);
  *puVar21 = *puVar21 & 0xffffffdf;
  goto LAB_004b0d0b;
switchD_004af4da_caseD_38:
  iVar14 = *(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40);
  *(undefined8 *)(unaff_EBP - 0xcc) = 0;
  *(undefined4 *)(unaff_EBP - 0xc0) = 0;
  piVar28 = *(int **)(iVar14 + *(int *)(iVar17 + 4 + iVar31 * 0x14) * 4);
  *(int **)(unaff_EBP - 0xc4) = piVar28;
  iVar17 = *piVar28;
  if (iVar17 == 0) goto LAB_004b2ff3;
  if (*(char *)((int)piVar28 + 0x1b) != '\0') goto LAB_004b2ed4;
  uVar18 = *(uint *)(iVar17 + 0x20);
  *(uint *)(unaff_EBP - 0xcc) = uVar18;
  iVar17 = *(int *)(iVar17 + 0x24);
  *(int *)(unaff_EBP - 200) = iVar17;
  if (uVar18 == 0 && iVar17 == 0) {
    uVar18 = FUN_004906f0((int *)*piVar28,(undefined4 *)(unaff_EBP - 0xc0));
    *(uint *)(unaff_EBP - 0xd0) = uVar18;
    if (uVar18 != 0) goto LAB_004b572c;
    if (*(int *)(unaff_EBP - 0xc0) == 0) {
      uVar27 = FUN_004906b0(**(int **)(unaff_EBP - 0xc4),(undefined4 *)(unaff_EBP - 0xcc));
      iVar17 = *(int *)(unaff_EBP - 200);
      uVar18 = *(uint *)(unaff_EBP - 0xcc);
      *(undefined4 *)(unaff_EBP - 0xd0) = uVar27;
      if ((iVar17 < 0x7fffffff) || (uVar18 != 0xffffffff)) {
        iVar17 = iVar17 + (uint)(0xfffffffe < uVar18);
        goto LAB_004b2d88;
      }
      *(undefined1 *)(*(int *)(unaff_EBP - 0xc4) + 0x1b) = 1;
      iVar17 = *(int *)(unaff_EBP - 200);
      uVar18 = *(uint *)(unaff_EBP - 0xcc);
    }
    else {
      iVar17 = 0;
      uVar18 = 0;
LAB_004b2d88:
      uVar18 = uVar18 + 1;
      *(int *)(unaff_EBP - 200) = iVar17;
      *(uint *)(unaff_EBP - 0xcc) = uVar18;
    }
    piVar28 = *(int **)(unaff_EBP - 0xc4);
  }
  iVar14 = *(int *)(*(int *)(unaff_EBP - 0xdc) + 0xc + iVar31 * 0x14);
  if (iVar14 != 0) {
    iVar17 = *(int *)(*(int *)(unaff_EBP - 0xd4) + 0xa0);
    if (iVar17 == 0) {
      iVar31 = *(int *)(unaff_EBP - 0xe0) + iVar14 * 0x28;
    }
    else {
      *(int *)(unaff_EBP - 0xb4) = iVar17;
      for (iVar14 = *(int *)(iVar17 + 4); iVar14 != 0; iVar14 = *(int *)(iVar14 + 4)) {
        *(int *)(unaff_EBP - 0xb4) = iVar14;
        iVar17 = iVar14;
      }
      iVar31 = *(int *)(iVar17 + 0xc) +
               *(int *)(*(int *)(unaff_EBP - 0xdc) + 0xc + iVar31 * 0x14) * 0x28;
    }
    *(int *)(unaff_EBP - 0xb8) = iVar31;
    FUN_004b7410(iVar31);
    iVar31 = *(int *)(unaff_EBP - 0xb8);
    uVar18 = *(uint *)(iVar31 + 0x10);
    if (((uVar18 == 0xffffffff) && (*(int *)(iVar31 + 0x14) == 0x7fffffff)) ||
       (*(char *)(*(int *)(unaff_EBP - 0xc4) + 0x1b) != '\0')) goto LAB_004b573f;
    uVar30 = uVar18 + 1;
    iVar17 = *(int *)(iVar31 + 0x14) + (uint)(0xfffffffe < uVar18);
    if (iVar17 < *(int *)(unaff_EBP - 200)) {
      uVar18 = *(uint *)(unaff_EBP - 0xcc);
    }
    else if ((*(int *)(unaff_EBP - 200) < iVar17) ||
            (uVar18 = *(uint *)(unaff_EBP - 0xcc), *(uint *)(unaff_EBP - 0xcc) < uVar30)) {
      *(uint *)(unaff_EBP - 0xcc) = uVar30;
      *(int *)(unaff_EBP - 200) = iVar17;
      uVar18 = uVar30;
    }
    *(uint *)(iVar31 + 0x10) = uVar18;
    *(undefined4 *)(iVar31 + 0x14) = *(undefined4 *)(unaff_EBP - 200);
    piVar28 = *(int **)(unaff_EBP - 0xc4);
    iVar17 = *(int *)(unaff_EBP - 200);
    uVar18 = *(uint *)(unaff_EBP - 0xcc);
  }
  if ((iVar17 < 0x7fffffff) || (uVar18 != 0xffffffff)) {
    iVar31 = uVar18 + 1;
    iVar17 = iVar17 + (uint)(0xfffffffe < uVar18);
  }
  else {
    *(undefined8 *)(unaff_EBP - 300) = 0;
    iVar17 = *(int *)(unaff_EBP - 0x128);
    iVar31 = *(int *)(unaff_EBP - 300);
  }
  FUN_00491bc0(*piVar28,iVar31,iVar17);
  piVar28 = *(int **)(unaff_EBP - 0xc4);
  if (*(char *)((int)piVar28 + 0x1b) == '\0') goto LAB_004b2fd8;
LAB_004b2ed4:
  uVar18 = *(uint *)(unaff_EBP - 0x100) + 1;
  iVar31 = (*(uint *)(unaff_EBP - 0xfc) & 0x3fffffff) +
           (uint)(0xfffffffe < *(uint *)(unaff_EBP - 0x100));
  *(uint *)(unaff_EBP - 0xcc) = uVar18;
  *(int *)(unaff_EBP - 200) = iVar31;
  *(undefined4 *)(unaff_EBP - 0xbc) = 0;
  uVar18 = FUN_004908e0((int *)*piVar28,(int *)0x0,uVar18,iVar31,0,(uint *)(unaff_EBP - 0xc0));
  *(uint *)(unaff_EBP - 0xd0) = uVar18;
  if (uVar18 != 0) goto LAB_004b2fd2;
  param_2 = 0;
  goto LAB_004b2f30;
  while( true ) {
    uVar29 = uVar29 + 1;
    uVar18 = (uint)uVar29;
    *(ushort *)(unaff_EBP - 0xcc) = uVar29;
    if (uVar4 <= uVar18) break;
LAB_004b2a50:
    if ((*(byte *)(iVar17 + 0x1c + uVar18 * 0x28) & 1) != 0) {
      unaff_EBX = *(int **)(unaff_EBP - 0xe4);
      iVar31 = *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar31 * 0x14);
      piVar28 = *(int **)(unaff_EBP - 0xd8);
      *(undefined4 *)(unaff_EBP - 0xc4) = 0;
      goto LAB_004b0d04;
    }
  }
LAB_004b2a6e:
  if (*(int *)(unaff_EBP - 0xf0) != 0) {
    *(undefined4 *)(unaff_EBP - 0xb4) = *(undefined4 *)(*(int *)(unaff_EBP - 200) + 8);
    *(short *)(unaff_EBP - 0xb0) = (short)*(undefined4 *)(unaff_EBP - 0xc0) + 1;
    *(undefined1 *)(unaff_EBP - 0xae) = 4;
    *(int *)(unaff_EBP - 0xa4) = iVar17;
    FUN_004b7410(iVar14);
    *(undefined4 *)(unaff_EBP - 0x9c) = *(undefined4 *)(iVar14 + 0x10);
    *(undefined4 *)(unaff_EBP - 0x98) = *(undefined4 *)(iVar14 + 0x14);
    uVar18 = FUN_004908e0(*(int **)(unaff_EBP - 0xc4),(int *)(unaff_EBP - 0xb4),0,0,0,
                          (uint *)(*(int *)(unaff_EBP - 200) + 0x4c));
    bVar10 = *(byte *)(unaff_EBP - 0xae);
    *(uint *)(unaff_EBP - 0xd0) = uVar18;
    if (((bVar10 & 4) == 0) &&
       ((*(int *)(unaff_EBP - 0xac) != *(int *)(unaff_EBP - 0x9c) ||
        (*(int *)(unaff_EBP - 0xa8) != *(int *)(unaff_EBP - 0x98))))) {
      piVar28 = *(int **)(unaff_EBP - 0xd8);
      *(int *)(iVar14 + 0x10) = *(int *)(unaff_EBP - 0xac);
      *(undefined4 *)(iVar14 + 0x14) = *(undefined4 *)(unaff_EBP - 0xa8);
      unaff_EBX = *(int **)(unaff_EBP - 0xe4);
    }
    else {
LAB_004b4170:
      unaff_EBX = *(int **)(unaff_EBP - 0xe4);
      iVar31 = *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar31 * 0x14);
      piVar28 = *(int **)(unaff_EBP - 0xd8);
LAB_004b0d04:
      iVar31 = iVar31 + -1;
LAB_004b0d05:
      *(int *)(unaff_EBP - 0xe8) = iVar31;
    }
    goto LAB_004b0d0b;
  }
LAB_004af834:
  unaff_EBX = *(int **)(unaff_EBP - 0xe4);
  piVar28 = *(int **)(unaff_EBP - 0xd8);
  goto LAB_004b0d0b;
LAB_004b19bf:
  unaff_EBX = *(int **)(unaff_EBP - 0xe4);
  FUN_004a9a30((int *)(*(int *)(unaff_EBP - 0xd4) + 0x34),(int)unaff_EBX,
               (byte *)"no such savepoint: %s");
  piVar28 = *(int **)(unaff_EBP - 0xd8);
  uVar18 = 1;
  *(undefined4 *)(unaff_EBP - 0xd0) = 1;
  goto LAB_004b0d11;
code_r0x004b19a5:
  pbVar35 = *(byte **)(unaff_EBP - 0xf0);
  iVar17 = iVar17 + 1;
  *(int *)(unaff_EBP - 0xb4) = iVar17;
  puVar26 = (undefined4 *)puVar26[4];
  *(undefined4 **)(unaff_EBP - 0xbc) = puVar26;
  goto joined_r0x004b1994;
LAB_004b09a0:
  iVar23 = iVar17;
  if (iVar14 != 0) {
    iVar23 = *(int *)(iVar14 + iVar17 * 4);
  }
  *(int *)(unaff_EBP - 0xb8) = iVar23;
  iVar14 = *(int *)(iVar15 + 0xc + iVar17 * 4);
  *(int *)(unaff_EBP - 0xb4) = iVar14;
  *(uint *)(unaff_EBP - 0xb0) = (uint)*(byte *)(*(int *)(iVar15 + 8) + iVar17);
  uVar18 = FUN_004a0720((undefined8 *)
                        (*(int *)(unaff_EBP - 0xe0) + (*(int *)(unaff_EBP - 0xf0) + iVar23) * 0x28),
                        (undefined8 *)(*(int *)(unaff_EBP - 0xe0) + (iVar23 + iVar31) * 0x28),iVar14
                       );
  *(uint *)(unaff_EBP - 0x10c) = uVar18;
  if (uVar18 == 0) {
    iVar17 = *(int *)(unaff_EBP - 200) + 1;
    *(int *)(unaff_EBP - 200) = iVar17;
    if (*(int *)(unaff_EBP - 0xcc) <= iVar17) goto LAB_004b0a43;
    iVar15 = *(int *)(unaff_EBP - 0xbc);
    iVar31 = *(int *)(unaff_EBP - 0xc0);
    iVar14 = *(int *)(unaff_EBP - 0x108);
    *(undefined4 *)(unaff_EBP - 0xf0) = *(undefined4 *)(unaff_EBP - 0xc4);
    goto LAB_004b09a0;
  }
  if (*(int *)(unaff_EBP - 0xb0) != 0) {
    *(uint *)(unaff_EBP - 0x10c) = -uVar18;
  }
LAB_004b0a43:
  unaff_EBX = *(int **)(unaff_EBP - 0xe4);
  piVar28 = *(int **)(unaff_EBP - 0xd8);
  *(undefined4 *)(unaff_EBP - 0x108) = 0;
  goto LAB_004b0d0b;
LAB_004b00b0:
  *(int *)(iVar23 + iVar17 * 4) = iVar14;
  piVar28 = *(int **)(unaff_EBP - 200);
  if ((*(ushort *)(piVar28 + 7) & 0x1000) != 0) {
    iVar17 = FUN_004b7490(piVar28);
    if (iVar17 != 0) goto LAB_004b57a6;
    piVar28 = *(int **)(unaff_EBP - 200);
  }
  FUN_004b7cb0((int)piVar28);
  iVar17 = *(int *)(unaff_EBP - 0xcc) + 1;
  iVar14 = *(int *)(unaff_EBP - 200) + 0x28;
  *(int *)(unaff_EBP - 0xcc) = iVar17;
  *(int *)(unaff_EBP - 200) = iVar14;
  if (*(int *)(unaff_EBP - 0x80) <= iVar17) goto LAB_004b010d;
  iVar23 = *(int *)(unaff_EBP - 0x84);
  goto LAB_004b00b0;
LAB_004b010d:
  puVar26 = *(undefined4 **)(*(int *)(unaff_EBP - 0xdc) + 0x10 + iVar31 * 0x14);
  if (*(char *)(*(int *)(unaff_EBP - 0xdc) + 1 + iVar31 * 0x14) == -5) {
    *(undefined4 *)(unaff_EBP - 0xc0) = 0;
  }
  else {
    *(undefined4 **)(unaff_EBP - 0xc0) = puVar26;
    puVar26 = (undefined4 *)*puVar26;
  }
  piVar28 = *(int **)(unaff_EBP - 0xd8);
  *(undefined4 **)(unaff_EBP - 0xc4) = puVar26;
  *(undefined2 *)(unaff_EBP - 0xa0) = 1;
  *(int **)(unaff_EBP - 0xbc) = unaff_EBX;
  *(undefined4 *)(unaff_EBP - 0x9c) = 0;
  *(undefined4 *)(unaff_EBP - 0x98) = 0;
  FUN_004b7500((int *)(unaff_EBP - 0xbc),(undefined8 *)piVar28);
  *(ushort *)(unaff_EBP - 0xa0) = (ushort)*(undefined4 *)(unaff_EBP - 0xa0) & 0xbe01 | 1;
  iVar17 = *(int *)(unaff_EBP - 0xc4);
  *(undefined4 *)(unaff_EBP - 0x8c) = 0;
  if ((*(byte *)(iVar17 + 3) & 8) != 0) {
    *(undefined4 *)(unaff_EBP - 0x90) =
         *(undefined4 *)(*(int *)(unaff_EBP - 0xdc) + -4 + iVar31 * 0x14);
  }
  unaff_EBX[8] = *(int *)(unaff_EBP - 0x100);
  unaff_EBX[9] = *(int *)(unaff_EBP - 0xfc);
  (**(code **)(*(int *)(unaff_EBP - 0xc4) + 0xc))();
  *(int *)(unaff_EBP - 0x100) = unaff_EBX[8];
  *(int *)(unaff_EBP - 0xfc) = unaff_EBX[9];
  if (*(int **)(unaff_EBP - 0xc0) != (int *)0x0) {
    FUN_004af2b0(*(int **)(unaff_EBP - 0xc0),
                 *(uint *)(*(int *)(unaff_EBP - 0xdc) + 4 + iVar31 * 0x14));
    iVar17 = *(int *)(unaff_EBP - 0xdc);
    *(undefined4 *)(iVar17 + 0x10 + iVar31 * 0x14) = *(undefined4 *)(unaff_EBP - 0xc0);
    *(undefined1 *)(iVar17 + 1 + iVar31 * 0x14) = 0xf9;
  }
  if ((char)unaff_EBX[0xe] != '\0') {
    FUN_004b76e0((int *)(unaff_EBP - 0xbc));
    goto LAB_004b57a6;
  }
  if (*(int *)(unaff_EBP - 0x8c) != 0) {
    FUN_004ae680((int *)(unaff_EBP - 0xbc),1);
    FUN_004a9a30((int *)(*(int *)(unaff_EBP - 0xd4) + 0x34),(int)unaff_EBX,&DAT_0056de50);
    *(undefined4 *)(unaff_EBP - 0xd0) = *(undefined4 *)(unaff_EBP - 0x8c);
  }
  FUN_004aec30((int *)(unaff_EBP - 0xbc),(uint)*(byte *)(unaff_EBP - 0xec));
  FUN_004b7500(piVar28,(undefined8 *)(unaff_EBP - 0xbc));
  bVar12 = FUN_004b7d90(piVar28);
  iVar31 = CONCAT31(extraout_var_00,bVar12);
joined_r0x004b48db:
  if (iVar31 != 0) {
LAB_004b5780:
    FUN_004a9a30((int *)(*(int *)(unaff_EBP - 0xd4) + 0x34),(int)unaff_EBX,
                 (byte *)"string or blob too big");
    uVar18 = 0x12;
    goto LAB_004b57c7;
  }
  goto LAB_004b0d0b;
LAB_004afa70:
  unaff_EBX = *(int **)(unaff_EBP - 0xe4);
  if ((*(ushort *)(iVar17 + 0x1c + iVar14 * 0x28) & 0x1000) != 0) {
    iVar17 = FUN_004b7490((int *)(iVar17 + iVar14 * 0x28));
    if (iVar17 != 0) goto LAB_004b57a6;
    iVar14 = *(int *)(unaff_EBP - 200);
    iVar17 = *(int *)(unaff_EBP - 0xcc);
  }
  FUN_004b7590((int *)(iVar17 + iVar14 * 0x28));
  FUN_004b7cb0(*(int *)(unaff_EBP - 0xcc) + *(int *)(unaff_EBP - 200) * 0x28);
  iVar14 = *(int *)(unaff_EBP - 200) + 1;
  *(int *)(unaff_EBP - 200) = iVar14;
  if (*(int *)(iVar23 + 8 + iVar31 * 0x14) <= iVar14) {
LAB_004b55f4:
    if ((char)unaff_EBX[0xe] == '\0') {
      *(int *)(*(int *)(unaff_EBP - 0xd4) + 0x54) = *(int *)(unaff_EBP - 0xe8) + 1;
    }
    else {
LAB_004b57a6:
      iVar31 = *(int *)(unaff_EBP - 0xd4);
      *(undefined1 *)(unaff_EBX + 0xe) = 1;
      FUN_004a9a30((int *)(iVar31 + 0x34),(int)unaff_EBX,(byte *)"out of memory");
      uVar18 = 7;
LAB_004b57c7:
      *(uint *)(unaff_EBP - 0xd0) = uVar18;
LAB_004b57cd:
      *(uint *)(*(int *)(unaff_EBP - 0xd4) + 0x58) = uVar18;
      FUN_004683f0(uVar18,"statement aborts at %d: [%s] %s");
      FUN_004b60e0(*(int **)(unaff_EBP - 0xd4));
      if (*(int *)(unaff_EBP - 0xd0) == 0xc0a) {
        *(undefined1 *)(unaff_EBX + 0xe) = 1;
      }
      if ((*(byte *)(unaff_EBP - 0xf5) != 0) &&
         (iVar31 = *(byte *)(unaff_EBP - 0xf5) - 1,
         FUN_004a7960(*(int *)(unaff_EBX[4] + 0xc + iVar31 * 0x10)), iVar31 != 1)) {
        FUN_004a7960(*(int *)(unaff_EBX[4] + 0x1c));
      }
    }
LAB_004b5847:
    iVar31 = *(int *)(unaff_EBP - 0xe4);
    piVar28 = *(int **)(unaff_EBP - 0xd4);
    *(undefined4 *)(iVar31 + 0x20) = *(undefined4 *)(unaff_EBP - 0x100);
    *(undefined4 *)(iVar31 + 0x24) = *(undefined4 *)(unaff_EBP - 0xfc);
    FUN_004b6750(piVar28);
    uStack00000008 = 0x4b587c;
    __security_check_cookie(*(uint *)(unaff_EBP - 4) ^ unaff_EBP);
    return;
  }
  iVar17 = *(int *)(unaff_EBP - 0xcc);
  goto LAB_004afa70;
LAB_004af966:
  *(int **)(unaff_EBP - 0xd8) = piVar28;
  FUN_004b7c40(piVar28,puVar34,0x1000);
  if (((*(ushort *)(piVar28 + 7) & 0x1000) != 0) && (iVar31 = FUN_004b7490(piVar28), iVar31 != 0))
  goto LAB_004b57a6;
  iVar31 = *(int *)(unaff_EBP - 0xcc);
  *(int *)(unaff_EBP - 0xcc) = iVar31 + -1;
  if (iVar31 == 0) goto LAB_004af570;
  piVar28 = piVar28 + 10;
  puVar34 = puVar34 + 5;
  goto LAB_004af966;
LAB_004af800:
  do {
    piVar32 = piVar28 + 10;
    if ((*(ushort *)(piVar28 + 0x11) & 0x2460) != 0) {
      FUN_004b7720(piVar32);
    }
    *(undefined2 *)(piVar28 + 0x11) = *(undefined2 *)(unaff_EBP - 200);
    iVar31 = *(int *)(unaff_EBP - 0xcc) + -1;
    *(int *)(unaff_EBP - 0xcc) = iVar31;
    piVar28 = piVar32;
  } while (0 < iVar31);
  *(int **)(unaff_EBP - 0xd8) = piVar32;
  goto LAB_004af834;
LAB_004af570:
  piVar28 = *(int **)(unaff_EBP - 0xd8);
  goto LAB_004b0d0b;
}


/* FUN_004b496a @ 004b496a  kind=lib  attributed-by=lib-string  size=3862 */

/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Removing unreachable block (ram,0x004b467d) */
/* WARNING: Removing unreachable block (ram,0x004b03a7) */

void __fastcall FUN_004b496a(int *param_1)

{
  ushort *puVar1;
  void *_Dst;
  double dVar2;
  byte bVar3;
  ushort uVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  byte bVar9;
  undefined1 uVar10;
  bool bVar11;
  undefined2 uVar12;
  int iVar13;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar14;
  byte *pbVar15;
  undefined4 uVar16;
  uint *puVar17;
  uint *puVar18;
  int *piVar19;
  size_t sVar20;
  int iVar21;
  undefined3 extraout_var_01;
  int in_EAX;
  char *pcVar22;
  undefined3 extraout_var_02;
  uint uVar23;
  undefined4 *puVar24;
  undefined3 extraout_var_03;
  int iVar25;
  undefined4 uVar26;
  uint uVar27;
  ushort uVar28;
  int *piVar29;
  uint extraout_ECX;
  int iVar30;
  void *extraout_EDX;
  uint extraout_EDX_00;
  int *unaff_EBX;
  uint uVar31;
  uint unaff_EBP;
  undefined8 *puVar32;
  byte *pbVar33;
  int *unaff_ESI;
  int iVar34;
  float10 fVar35;
  undefined8 uVar36;
  ulonglong uVar37;
  longlong lVar38;
  ulonglong uVar39;
  undefined4 uStack00000008;
  
LAB_004b4970:
  do {
    iVar34 = *(int *)((unaff_EBP - 200) + in_EAX * 4);
    FUN_004b7860(param_1,iVar34,iVar34 >> 0x1f);
    in_EAX = *(int *)(unaff_EBP - 0xcc) + 1;
    param_1 = (int *)(*(int *)(unaff_EBP - 0xbc) + 0x28);
    *(int *)(unaff_EBP - 0xcc) = in_EAX;
    *(int **)(unaff_EBP - 0xbc) = param_1;
  } while (in_EAX < 3);
LAB_004b0d0b:
  uVar27 = *(uint *)(unaff_EBP - 0xd0);
LAB_004b0d11:
  *(int *)(unaff_EBP - 0xe8) = *(int *)(unaff_EBP - 0xe8) + 1;
  if (uVar27 != 0) goto LAB_004b57cd;
  iVar34 = *(int *)(unaff_EBP - 0xe8);
  if ((char)unaff_EBX[0xe] != '\0') goto LAB_004b57a6;
  if (*(int *)(unaff_EBP - 0x11c) != 0) {
    iVar25 = *(int *)(unaff_EBP - 0x110);
    if (unaff_EBX[0x47] == iVar25) {
      iVar13 = (*(code *)unaff_EBX[0x45])();
      iVar25 = 0;
      if (iVar13 != 0) {
        uVar27 = 9;
        goto LAB_004b57c7;
      }
    }
    *(int *)(unaff_EBP - 0x110) = iVar25 + 1;
  }
  iVar25 = *(int *)(unaff_EBP - 0xdc);
  if ((*(byte *)(iVar25 + 2 + iVar34 * 0x14) & 2) != 0) {
    unaff_ESI = (int *)(*(int *)(unaff_EBP - 0xe0) + *(int *)(iVar25 + 8 + iVar34 * 0x14) * 0x28);
    *(int **)(unaff_EBP - 0xd8) = unaff_ESI;
    if ((*(ushort *)(unaff_ESI + 7) & 0x2460) != 0) {
      FUN_004b7720(unaff_ESI);
      iVar25 = *(int *)(unaff_EBP - 0xdc);
    }
    *(undefined2 *)(unaff_ESI + 7) = 4;
  }
  switch(*(undefined1 *)(iVar25 + iVar34 * 0x14)) {
  case 1:
    if (unaff_EBX[0x38] == 0) break;
    goto LAB_004af4ee;
  case 2:
    iVar25 = *(int *)(iVar25 + 4 + iVar34 * 0x14);
    iVar13 = *(int *)(unaff_EBP - 0xe0);
    *(undefined2 *)(*(int *)(unaff_EBP - 0xe0) + 0x1c + iVar25 * 0x28) = 4;
    iVar21 = *(int *)(unaff_EBP - 0xe8);
    *(int *)(iVar13 + 0x10 + iVar25 * 0x28) = iVar21;
    *(int *)(iVar13 + 0x14 + iVar25 * 0x28) = iVar21 >> 0x1f;
    goto LAB_004af55f;
  case 3:
    iVar34 = *(int *)(*(int *)(unaff_EBP - 0xe0) + 0x10 +
                     *(int *)(iVar25 + 4 + iVar34 * 0x14) * 0x28);
    goto LAB_004b0d05;
  case 4:
    iVar34 = *(int *)(iVar25 + 4 + iVar34 * 0x14);
    iVar25 = *(int *)(unaff_EBP - 0xe0);
    *(undefined2 *)(iVar25 + 0x1c + iVar34 * 0x28) = 4;
    *(undefined4 *)(unaff_EBP - 0xcc) = *(undefined4 *)(iVar25 + 0x10 + iVar34 * 0x28);
    iVar13 = *(int *)(unaff_EBP - 0xe8);
    *(int *)(iVar25 + 0x10 + iVar34 * 0x28) = iVar13;
    *(int *)(iVar25 + 0x14 + iVar34 * 0x28) = iVar13 >> 0x1f;
    iVar34 = *(int *)(unaff_EBP - 0xcc);
    goto LAB_004b0d05;
  case 5:
    if ((*(byte *)(*(int *)(unaff_EBP - 0xe0) + 0x1c + *(int *)(iVar25 + 0xc + iVar34 * 0x14) * 0x28
                  ) & 1) != 0) goto switchD_004af4da_caseD_6;
    goto LAB_004b0d0b;
  case 6:
switchD_004af4da_caseD_6:
    if ((*(int *)(iVar25 + 4 + iVar34 * 0x14) == 0) &&
       (piVar19 = *(int **)(*(int *)(unaff_EBP - 0xd4) + 0xa0), piVar19 != (int *)0x0)) {
      iVar25 = piVar19[1];
      iVar13 = *(int *)(unaff_EBP - 0xd4);
      *(int *)(iVar13 + 0xa8) = *(int *)(iVar13 + 0xa8) + -1;
      *(int *)(iVar13 + 0xa0) = iVar25;
      iVar25 = *(int *)(iVar13 + 100);
      unaff_EBX[0x13] = unaff_EBX[0x13] + iVar25;
      unaff_EBX[0x12] = iVar25;
      iVar25 = FUN_004b5f90(piVar19);
      *(int *)(unaff_EBP - 0xe8) = iVar25;
      *(int *)(unaff_EBP - 0x100) = unaff_EBX[8];
      *(int *)(unaff_EBP - 0xfc) = unaff_EBX[9];
      if (*(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar34 * 0x14) == 4) {
        *(int *)(unaff_EBP - 0xe8) =
             *(int *)(*(int *)(*(int *)(unaff_EBP - 0xd4) + 4) + 8 +
                     *(int *)(unaff_EBP - 0xe8) * 0x14) + -1;
      }
      *(undefined4 *)(unaff_EBP - 0xdc) = *(undefined4 *)(*(int *)(unaff_EBP - 0xd4) + 4);
      *(undefined4 *)(unaff_EBP - 0xe0) = *(undefined4 *)(*(int *)(unaff_EBP - 0xd4) + 8);
      goto LAB_004b0d0b;
    }
    piVar19 = *(int **)(unaff_EBP - 0xd4);
    iVar13 = *(int *)(unaff_EBP - 0xe8);
    piVar19[0x16] = *(int *)(iVar25 + 4 + iVar34 * 0x14);
    *(undefined1 *)(piVar19 + 0x17) = *(undefined1 *)(iVar25 + 8 + iVar34 * 0x14);
    piVar19[0x15] = iVar13;
    if (*(int *)(iVar25 + 0x10 + iVar34 * 0x14) == 0) {
      if (piVar19[0x16] != 0) {
        FUN_004683f0(*(undefined4 *)(iVar25 + 4 + iVar34 * 0x14),"constraint failed at %d in [%s]");
        goto LAB_004b55c4;
      }
    }
    else {
      FUN_004a9a30(piVar19 + 0xd,(int)unaff_EBX,&DAT_0056de50);
      FUN_004683f0(*(undefined4 *)(*(int *)(unaff_EBP - 0xdc) + 4 + iVar34 * 0x14),
                   "abort at %d in [%s]: %s");
LAB_004b55c4:
      piVar19 = *(int **)(unaff_EBP - 0xd4);
    }
    iVar34 = FUN_004b60e0(piVar19);
    piVar19 = *(int **)(unaff_EBP - 0xd4);
    if (iVar34 == 5) {
LAB_004b564b:
      piVar19[0x16] = 5;
    }
    goto LAB_004b5847;
  case 7:
    iVar34 = *(int *)(iVar25 + 4 + iVar34 * 0x14);
    unaff_ESI[4] = iVar34;
    unaff_ESI[5] = iVar34 >> 0x1f;
    goto LAB_004b0d0b;
  case 8:
    piVar19 = *(int **)(iVar25 + 0x10 + iVar34 * 0x14);
    unaff_ESI[4] = *piVar19;
    unaff_ESI[5] = piVar19[1];
    goto LAB_004b0d0b;
  case 9:
    goto switchD_004af4da_caseD_9;
  case 10:
    *(int *)(unaff_EBP - 0xcc) =
         *(int *)(iVar25 + 0xc + iVar34 * 0x14) - *(int *)(iVar25 + 8 + iVar34 * 0x14);
    piVar19 = *(int **)(unaff_EBP - 0xd8);
    uVar12 = 1;
    if (*(int *)(iVar25 + 4 + iVar34 * 0x14) != 0) {
      uVar12 = 0x101;
    }
    *(undefined2 *)(unaff_EBP - 200) = uVar12;
    *(undefined2 *)(piVar19 + 7) = uVar12;
    if (0 < *(int *)(unaff_EBP - 0xcc)) goto LAB_004af800;
    goto LAB_004af570;
  case 0xb:
    FUN_004b79e0(unaff_ESI,*(void **)(iVar25 + 0x10 + iVar34 * 0x14),
                 *(size_t *)(iVar25 + 4 + iVar34 * 0x14),'\0',(undefined *)0x0);
    *(undefined1 *)((int)unaff_ESI + 0x1f) = *(undefined1 *)(unaff_EBP - 0xec);
    goto LAB_004b0d0b;
  case 0xc:
    piVar19 = (int *)(*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x44) +
                     (*(int *)(iVar25 + 4 + iVar34 * 0x14) * 5 + -5) * 8);
    *(int **)(unaff_EBP - 0xcc) = piVar19;
    bVar11 = FUN_004b7d90(piVar19);
    if (CONCAT31(extraout_var,bVar11) != 0) goto LAB_004b5780;
    unaff_ESI = *(int **)(unaff_EBP - 0xd8);
    FUN_004b7c40(unaff_ESI,(undefined8 *)piVar19,0x800);
    goto LAB_004b0d0b;
  case 0xd:
    iVar13 = *(int *)(unaff_EBP - 0xdc);
    iVar21 = *(int *)(iVar25 + 0xc + iVar34 * 0x14) + 1;
    *(int *)(unaff_EBP - 200) = iVar21;
    iVar25 = *(int *)(iVar13 + 4 + iVar34 * 0x14);
    *(int *)(unaff_EBP - 0xc4) = iVar25;
    iVar34 = *(int *)(iVar13 + 8 + iVar34 * 0x14);
    iVar13 = *(int *)(unaff_EBP - 0xe0);
    *(int *)(unaff_EBP - 0xc0) = iVar34;
    puVar32 = (undefined8 *)(iVar13 + iVar25 * 0x28);
    piVar19 = (int *)(iVar13 + iVar34 * 0x28);
    *(int **)(unaff_EBP - 0xd8) = piVar19;
    if (iVar21 != 0) {
      do {
        *(int *)(unaff_EBP - 200) = iVar21 + -1;
        *(int *)(unaff_EBP - 0xcc) = piVar19[9];
        piVar19[9] = 0;
        FUN_004b7500(piVar19,puVar32);
        *(undefined4 *)((int)puVar32 + 0x24) = *(undefined4 *)(unaff_EBP - 0xcc);
        iVar21 = *(int *)(unaff_EBP - 200);
        puVar32 = puVar32 + 5;
        piVar19 = piVar19 + 10;
      } while (iVar21 != 0);
      *(int **)(unaff_EBP - 0xd8) = piVar19;
    }
    unaff_ESI = *(int **)(unaff_EBP - 0xd8);
    *(undefined4 *)(unaff_EBP - 200) = 0xffffffff;
    goto LAB_004b0d0b;
  case 0xe:
    iVar13 = *(int *)(unaff_EBP - 0xe0);
    *(undefined4 *)(unaff_EBP - 0xcc) = *(undefined4 *)(iVar25 + 0xc + iVar34 * 0x14);
    puVar32 = (undefined8 *)(iVar13 + *(int *)(iVar25 + 4 + iVar34 * 0x14) * 0x28);
    piVar19 = (int *)(iVar13 + *(int *)(iVar25 + 8 + iVar34 * 0x14) * 0x28);
    goto LAB_004af966;
  case 0xf:
    iVar13 = *(int *)(unaff_EBP - 0xe0);
    unaff_ESI = (int *)(iVar13 + *(int *)(iVar25 + 8 + iVar34 * 0x14) * 0x28);
    iVar34 = *(int *)(iVar25 + 4 + iVar34 * 0x14);
    *(int **)(unaff_EBP - 0xd8) = unaff_ESI;
    FUN_004b7c40(unaff_ESI,(undefined8 *)(iVar13 + iVar34 * 0x28),0x1000);
    goto LAB_004b0d0b;
  case 0x10:
    uVar27 = FUN_004aeea0(*(int **)(unaff_EBP - 0xd4),0);
    *(uint *)(unaff_EBP - 0xd0) = uVar27;
    if (uVar27 == 0) {
      uVar27 = FUN_004af050(*(int **)(unaff_EBP - 0xd4),1);
      *(uint *)(unaff_EBP - 0xd0) = uVar27;
      if (uVar27 == 0) {
        iVar13 = *(int *)(unaff_EBP - 0xd4);
        iVar21 = *(int *)(unaff_EBP - 0xdc);
        iVar25 = *(int *)(unaff_EBP - 0xe0);
        *(uint *)(iVar13 + 0x50) = *(int *)(iVar13 + 0x50) + 2U | 1;
        iVar25 = iVar25 + *(int *)(iVar21 + 4 + iVar34 * 0x14) * 0x28;
        *(int *)(iVar13 + 0x14) = iVar25;
        iVar13 = 0;
        *(int *)(unaff_EBP - 0xcc) = iVar25;
        *(undefined4 *)(unaff_EBP - 200) = 0;
        if (*(int *)(iVar21 + 8 + iVar34 * 0x14) < 1) goto LAB_004b55f4;
        goto LAB_004afa70;
      }
    }
    goto LAB_004b0d11;
  case 0x11:
    iVar34 = *(int *)(iVar25 + 4 + iVar34 * 0x14);
    if (iVar34 != 0) {
      FUN_004b7860((int *)(*(int *)(unaff_EBP - 0xe0) + iVar34 * 0x28),0,0);
    }
    goto LAB_004b0d0b;
  case 0x12:
    uVar27 = (uint)*(byte *)(iVar25 + 3 + iVar34 * 0x14);
    iVar13 = *(int *)(unaff_EBP - 0xe0);
    iVar21 = *(int *)(*(int *)(unaff_EBP - 0xd4) + 0xc);
    *(uint *)(unaff_EBP - 0x80) = uVar27;
    *(int *)(unaff_EBP - 0x84) = iVar21;
    *(int *)(unaff_EBP - 0xd8) = iVar13 + *(int *)(iVar25 + 0xc + iVar34 * 0x14) * 0x28;
    unaff_EBX = *(int **)(unaff_EBP - 0xe4);
    iVar13 = iVar13 + *(int *)(iVar25 + 8 + iVar34 * 0x14) * 0x28;
    iVar25 = 0;
    *(int *)(unaff_EBP - 200) = iVar13;
    *(undefined4 *)(unaff_EBP - 0xcc) = 0;
    if (uVar27 == 0) goto LAB_004b010d;
    goto LAB_004b00b0;
  case 0x13:
    iVar13 = *(int *)(iVar25 + 4 + iVar34 * 0x14);
    iVar21 = *(int *)(unaff_EBP - 0xe0);
    bVar9 = *(byte *)(iVar21 + 0x1c + iVar13 * 0x28);
    unaff_ESI = (int *)(iVar21 + *(int *)(iVar25 + 8 + iVar34 * 0x14) * 0x28);
    *(int **)(unaff_EBP - 0xd8) = unaff_ESI;
    if ((bVar9 & 1) == 0) {
      uVar39 = FUN_004b65e0(iVar21 + iVar13 * 0x28);
      if (uVar39 == 0) {
        FUN_004b7860(unaff_ESI,1,0);
        unaff_ESI = *(int **)(unaff_EBP - 0xd8);
      }
      else {
        FUN_004b7860(unaff_ESI,0,0);
        unaff_ESI = *(int **)(unaff_EBP - 0xd8);
      }
    }
    else {
      FUN_004b78c0((int)unaff_ESI);
    }
    goto LAB_004b0d0b;
  case 0x14:
    iVar25 = *(int *)(unaff_EBP - 0xe0) + *(int *)(iVar25 + 4 + iVar34 * 0x14) * 0x28;
    FUN_004b7410(iVar25);
    uVar31 = *(uint *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar34 * 0x14);
    puVar18 = (uint *)(iVar25 + 0x10);
    uVar27 = *puVar18;
    *puVar18 = *puVar18 + uVar31;
    *(int *)(iVar25 + 0x14) =
         *(int *)(iVar25 + 0x14) + ((int)uVar31 >> 0x1f) + (uint)CARRY4(uVar27,uVar31);
    unaff_ESI = *(int **)(unaff_EBP - 0xd8);
    goto LAB_004b0d0b;
  case 0x15:
    iVar25 = *(int *)(unaff_EBP - 0xe0) + *(int *)(iVar25 + 4 + iVar34 * 0x14) * 0x28;
    FUN_0046dfa0(iVar25);
    if ((*(byte *)(iVar25 + 0x1c) & 8) != 0) {
      FUN_004b6650(iVar25);
    }
    if ((*(ushort *)(iVar25 + 0x1c) & 4) != 0) {
      *(ushort *)(iVar25 + 0x1c) = *(ushort *)(iVar25 + 0x1c) & 0xbe04 | 4;
      unaff_ESI = *(int **)(unaff_EBP - 0xd8);
      goto LAB_004b0d0b;
    }
    iVar34 = *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar34 * 0x14);
    if (iVar34 == 0) {
      uVar27 = 0x14;
      *(undefined4 *)(unaff_EBP - 0xd0) = 0x14;
      goto LAB_004b572c;
    }
    unaff_ESI = *(int **)(unaff_EBP - 0xd8);
    goto LAB_004b0d04;
  case 0x16:
    iVar34 = *(int *)(iVar25 + 4 + iVar34 * 0x14);
    if ((*(byte *)(*(int *)(unaff_EBP - 0xe0) + 0x1c + iVar34 * 0x28) & 4) != 0) {
      FUN_004b7670(*(int *)(unaff_EBP - 0xe0) + iVar34 * 0x28);
    }
    goto LAB_004b0d0b;
  case 0x17:
    *(undefined4 *)(unaff_EBP - 0x108) = *(undefined4 *)(iVar25 + 0x10 + iVar34 * 0x14);
    goto LAB_004b0d0b;
  case 0x18:
    iVar13 = *(int *)(unaff_EBP - 0x108);
    if ((*(byte *)(iVar25 + 3 + iVar34 * 0x14) & 1) == 0) {
      iVar13 = 0;
    }
    iVar21 = *(int *)(iVar25 + 0xc + iVar34 * 0x14);
    *(int *)(unaff_EBP - 0xcc) = iVar21;
    iVar14 = *(int *)(iVar25 + 0x10 + iVar34 * 0x14);
    *(int *)(unaff_EBP - 0xbc) = iVar14;
    uVar26 = *(undefined4 *)(iVar25 + 4 + iVar34 * 0x14);
    *(undefined4 *)(unaff_EBP - 0xc4) = uVar26;
    iVar34 = *(int *)(iVar25 + 8 + iVar34 * 0x14);
    iVar25 = 0;
    *(int *)(unaff_EBP - 0x108) = iVar13;
    *(undefined4 *)(unaff_EBP - 0xf0) = uVar26;
    *(int *)(unaff_EBP - 0xc0) = iVar34;
    *(undefined4 *)(unaff_EBP - 200) = 0;
    if (iVar21 < 1) goto LAB_004b0a43;
    goto LAB_004b09a0;
  case 0x19:
    if (*(int *)(unaff_EBP - 0x10c) < 0) {
      iVar34 = *(int *)(iVar25 + 4 + iVar34 * 0x14);
      goto LAB_004b0d04;
    }
    if (*(int *)(unaff_EBP - 0x10c) != 0) {
      iVar34 = *(int *)(iVar25 + 0xc + iVar34 * 0x14);
      goto LAB_004b0d04;
    }
    break;
  case 0x1a:
    iVar13 = *(int *)(iVar25 + 4 + iVar34 * 0x14);
    iVar21 = *(int *)(*(int *)(unaff_EBP - 0xd4) + 0xb8);
    if (*(char *)(iVar21 + iVar13) == '\0') {
      *(undefined1 *)(iVar21 + iVar13) = 1;
      goto LAB_004b0d0b;
    }
    break;
  case 0x1b:
  case 0x1c:
    iVar13 = *(int *)(iVar25 + 4 + iVar34 * 0x14);
    if ((*(byte *)(*(int *)(unaff_EBP - 0xe0) + 0x1c + iVar13 * 0x28) & 1) == 0) {
      fVar35 = FUN_004b8350(*(int *)(unaff_EBP - 0xe0) + iVar13 * 0x28);
      *(double *)(unaff_EBP - 0xf4) = (double)fVar35;
      uVar27 = (uint)(*(double *)(unaff_EBP - 0xf4) != 0.0);
      iVar25 = *(int *)(unaff_EBP - 0xdc);
      *(uint *)(unaff_EBP - 0xcc) = uVar27;
      if (*(char *)(iVar25 + iVar34 * 0x14) != '\x1c') goto joined_r0x004b4649;
      uVar27 = (uint)(uVar27 == 0);
    }
    else {
      uVar27 = *(uint *)(iVar25 + 0xc + iVar34 * 0x14);
    }
    *(uint *)(unaff_EBP - 0xcc) = uVar27;
joined_r0x004b4649:
    if (uVar27 == 0) goto LAB_004b0d0b;
    break;
  case 0x1d:
    iVar13 = *(int *)(iVar25 + 4 + iVar34 * 0x14);
    iVar21 = *(int *)(unaff_EBP - 0xd4);
    *(int *)(unaff_EBP - 0xbc) = iVar13;
    iVar14 = *(int *)(iVar25 + 8 + iVar34 * 0x14);
    *(undefined4 *)(unaff_EBP - 0xb4) = 0;
    *(int *)(unaff_EBP - 0xb8) = iVar14;
    *(undefined8 *)(unaff_EBP - 0x8c) = 0;
    *(undefined8 *)(unaff_EBP - 0x84) = 0;
    *(undefined8 *)(unaff_EBP - 0x7c) = 0;
    *(undefined8 *)(unaff_EBP - 0x74) = 0;
    *(undefined8 *)(unaff_EBP - 0x6c) = 0;
    iVar25 = *(int *)(iVar25 + 0xc + iVar34 * 0x14);
    iVar30 = *(int *)(unaff_EBP - 0xe0);
    *(undefined4 *)(unaff_EBP - 0xb0) = 0;
    piVar19 = (int *)(iVar30 + iVar25 * 0x28);
    iVar25 = *(int *)(iVar21 + 0x40);
    *(int **)(unaff_EBP - 0x90) = piVar19;
    piVar29 = *(int **)(iVar25 + iVar13 * 4);
    *(int **)(unaff_EBP - 0xb4) = piVar29;
    iVar25 = *piVar29;
    *(int *)(unaff_EBP - 0xac) = iVar25;
    if (iVar25 == 0) {
      if (piVar29[4] < 1) goto LAB_004b0dd6;
      iVar25 = *(int *)(unaff_EBP - 0xe0) + piVar29[4] * 0x28;
      *(int *)(unaff_EBP - 0x48) = iVar25;
      if (*(char *)((int)piVar29 + 0x22) != '\0') {
        FUN_004b7c40(piVar19,(undefined8 *)(iVar25 + iVar14 * 0x28),0x1000);
        if ((*(ushort *)(*(int **)(unaff_EBP - 0x90) + 7) & 0x1000) == 0) goto LAB_004af834;
        iVar34 = FUN_004b7490(*(int **)(unaff_EBP - 0x90));
        unaff_EBX = *(int **)(unaff_EBP - 0xe4);
        if (iVar34 != 0) goto LAB_004b57a6;
        unaff_ESI = *(int **)(unaff_EBP - 0xd8);
        goto LAB_004b0d0b;
      }
      *(undefined4 *)(unaff_EBP - 0xcc) = *(undefined4 *)(iVar25 + 0x18);
      *(undefined4 *)(unaff_EBP - 0xb0) = *(undefined4 *)(iVar25 + 4);
      if ((*(byte *)(*(int *)(unaff_EBP - 0xdc) + 3 + iVar34 * 0x14) & 0x20) == 0) {
        iVar25 = *(int *)(*(int *)(unaff_EBP - 0xd4) + 0x50);
      }
      else {
        iVar25 = 0;
      }
      piVar29[0x14] = iVar25;
LAB_004b0f05:
      uVar27 = *(uint *)(unaff_EBP - 0xcc);
LAB_004b0f0b:
      iVar25 = *(int *)(unaff_EBP - 0xb4);
LAB_004b0f11:
      if (uVar27 != 0) {
        unaff_EBX = *(int **)(unaff_EBP - 0xe4);
        if ((uint)unaff_EBX[0x14] < uVar27) goto LAB_004b5780;
        iVar21 = *(int *)(iVar25 + 0x14);
        iVar14 = *(int *)(unaff_EBP - 0xd4);
        *(int *)(unaff_EBP - 0xa0) = iVar21;
        iVar13 = *(int *)(iVar25 + 0x58);
        *(int *)(unaff_EBP - 0xa8) = iVar13;
        unaff_EBX = *(int **)(unaff_EBP - 0xe4);
        if (*(int *)(iVar25 + 0x50) == *(int *)(iVar14 + 0x50)) {
          iVar25 = *(int *)(iVar25 + 0x5c);
          *(int *)(unaff_EBP - 0xa4) = iVar25;
LAB_004b11c6:
          iVar21 = *(int *)(unaff_EBP - 0xb8);
          if (*(int *)(iVar25 + iVar21 * 4) == 0) {
            if (*(char *)(*(int *)(unaff_EBP - 0xdc) + 1 + iVar34 * 0x14) == -8) {
              FUN_004b7c40(*(int **)(unaff_EBP - 0x90),
                           *(undefined8 **)(*(int *)(unaff_EBP - 0xdc) + 0x10 + iVar34 * 0x14),0x800
                          );
            }
            else {
              *(ushort *)(*(int *)(unaff_EBP - 0x90) + 0x1c) =
                   *(ushort *)(*(int *)(unaff_EBP - 0x90) + 0x1c) & 0xbe01 | 1;
            }
          }
          else {
            if (*(int *)(unaff_EBP - 0xb0) == 0) {
              uVar27 = *(uint *)(iVar13 + iVar21 * 4);
              iVar25 = *(int *)(unaff_EBP - 0xdc);
              *(uint *)(unaff_EBP - 0x4c) = uVar27;
              bVar9 = *(byte *)(iVar25 + 3 + iVar34 * 0x14);
              if (((bVar9 & 0xc0) == 0) ||
                 (((uVar27 < 0xc || ((uVar27 & 1) != 0)) && (-1 < (char)bVar9)))) {
                uVar27 = FUN_004b8bf0(uVar27);
                puVar32 = *(undefined8 **)(unaff_EBP - 0x90);
                *(uint *)(unaff_EBP - 0x9c) = uVar27;
                FUN_004b7500((int *)(unaff_EBP - 0x8c),puVar32);
                uVar27 = FUN_004b70b0(*(int **)(unaff_EBP - 0xac),
                                      *(uint *)(*(int *)(unaff_EBP - 0xa4) +
                                               *(int *)(unaff_EBP - 0xb8) * 4),
                                      *(size_t *)(unaff_EBP - 0x9c),
                                      (uint)*(byte *)(*(int *)(unaff_EBP - 0xb4) + 0x1f),
                                      (int *)(unaff_EBP - 0x8c));
                *(uint *)(unaff_EBP - 0xd0) = uVar27;
                if (uVar27 != 0) goto LAB_004b0616;
                pcVar22 = *(char **)(unaff_EBP - 0x88);
                uVar27 = *(uint *)(unaff_EBP - 0x4c);
              }
              else {
                pcVar22 = (char *)(-(uint)(uVar27 < 0xc) & unaff_EBP - 0xc4);
              }
              piVar19 = *(int **)(unaff_EBP - 0x90);
              *(char **)(unaff_EBP - 0x94) = pcVar22;
            }
            else {
              piVar19 = *(int **)(unaff_EBP - 0x90);
              if ((*(ushort *)(piVar19 + 7) & 0x2460) != 0) {
                FUN_004b7720(piVar19);
                piVar19 = *(int **)(unaff_EBP - 0x90);
                iVar25 = *(int *)(unaff_EBP - 0xa4);
                iVar13 = *(int *)(unaff_EBP - 0xa8);
                iVar21 = *(int *)(unaff_EBP - 0xb8);
              }
              pcVar22 = (char *)(*(int *)(iVar25 + iVar21 * 4) + *(int *)(unaff_EBP - 0xb0));
              uVar27 = *(uint *)(iVar13 + iVar21 * 4);
            }
            FUN_004b87d0(pcVar22,uVar27,(int)piVar19);
            *(undefined1 *)(*(int *)(unaff_EBP - 0x90) + 0x1f) = *(undefined1 *)(unaff_EBP - 0xec);
          }
          if (*(int *)(unaff_EBP - 0x68) != 0) {
            puVar1 = (ushort *)(*(int *)(unaff_EBP - 0x90) + 0x1c);
            *puVar1 = *puVar1 & 0xe7ff;
            puVar1 = (ushort *)(*(int *)(unaff_EBP - 0x90) + 0x1c);
            *puVar1 = *puVar1 | 0x200;
            *(undefined4 *)(*(int *)(unaff_EBP - 0x90) + 4) = *(undefined4 *)(unaff_EBP - 0x88);
            *(undefined4 *)(*(int *)(unaff_EBP - 0x90) + 0x24) = *(undefined4 *)(unaff_EBP - 0x68);
          }
          uVar27 = FUN_004b7490(*(int **)(unaff_EBP - 0x90));
          unaff_ESI = *(int **)(unaff_EBP - 0xd8);
          *(uint *)(unaff_EBP - 0xd0) = uVar27;
        }
        else {
          iVar13 = iVar13 + iVar21 * 4;
          *(int *)(unaff_EBP - 0xa4) = iVar13;
          *(undefined4 *)(unaff_EBP - 0x50) = 0;
          *(int *)(iVar25 + 0x5c) = iVar13;
          *(undefined4 *)(*(int *)(unaff_EBP - 0xb4) + 0x54) = *(undefined4 *)(unaff_EBP - 0xcc);
          *(undefined4 *)(*(int *)(unaff_EBP - 0xb4) + 0x50) =
               *(undefined4 *)(*(int *)(unaff_EBP - 0xd4) + 0x50);
          pbVar33 = *(byte **)(unaff_EBP - 0xb0);
          if (pbVar33 == (byte *)0x0) {
            if (*(char *)(*(int *)(unaff_EBP - 0xb4) + 0x1f) == '\0') {
              iVar25 = FUN_0048f8b0(*(int *)(unaff_EBP - 0xac),(uint *)(unaff_EBP - 0x50));
            }
            else {
              iVar25 = FUN_00490640(*(int *)(unaff_EBP - 0xac),(uint *)(unaff_EBP - 0x50));
            }
            uVar31 = *(uint *)(unaff_EBP - 0xcc);
            uVar27 = *(uint *)(unaff_EBP - 0x50);
            iVar13 = *(int *)(unaff_EBP - 0xb4);
            *(int *)(unaff_EBP - 0x94) = iVar25;
            if (uVar27 < uVar31) {
              *(undefined4 *)(iVar13 + 0x60) = 0;
            }
            else {
              *(int *)(unaff_EBP - 0xb0) = iVar25;
              *(int *)(iVar13 + 0x60) = iVar25;
            }
            pbVar33 = *(byte **)(unaff_EBP - 0x94);
          }
          else {
            *(byte **)(unaff_EBP - 0x94) = pbVar33;
          }
          if (*pbVar33 < 0x80) {
            uVar27 = (uint)*pbVar33;
            *(uint *)(unaff_EBP - 0x5c) = uVar27;
            uVar31 = 1;
          }
          else {
            uVar31 = FUN_0049d440(pbVar33,(uint *)(unaff_EBP - 0x5c));
            uVar27 = *(uint *)(unaff_EBP - 0x5c);
            pbVar33 = *(byte **)(unaff_EBP - 0x94);
            uVar31 = uVar31 & 0xff;
          }
          *(uint *)(unaff_EBP - 0x54) = uVar31;
          if (uVar27 < 0x18004) {
            iVar25 = *(int *)(unaff_EBP - 0xa0);
            sVar20 = iVar25 * 5 + 3;
            if ((int)uVar27 < (int)sVar20) {
              sVar20 = uVar27;
            }
            iVar13 = *(int *)(unaff_EBP - 0xb0);
            *(size_t *)(unaff_EBP - 0x9c) = sVar20;
            if ((iVar13 == 0) && (*(int *)(unaff_EBP - 0x50) < (int)sVar20)) {
              *(undefined2 *)(unaff_EBP - 0x70) = 0;
              *(undefined4 *)(unaff_EBP - 0x8c) = 0;
              uVar27 = FUN_004b70b0(*(int **)(unaff_EBP - 0xac),0,sVar20,
                                    (uint)*(byte *)(*(int *)(unaff_EBP - 0xb4) + 0x1f),
                                    (int *)(unaff_EBP - 0x8c));
              *(uint *)(unaff_EBP - 0xd0) = uVar27;
              if (uVar27 != 0) goto LAB_004af834;
              pbVar33 = *(byte **)(unaff_EBP - 0x88);
              uVar27 = *(uint *)(unaff_EBP - 0x5c);
              sVar20 = *(size_t *)(unaff_EBP - 0x9c);
              iVar25 = *(int *)(unaff_EBP - 0xa0);
              *(byte **)(unaff_EBP - 0x94) = pbVar33;
            }
            pbVar15 = pbVar33 + sVar20;
            pbVar33 = pbVar33 + *(int *)(unaff_EBP - 0x54);
            iVar13 = 0;
            *(byte **)(unaff_EBP - 0x60) = pbVar15;
            *(byte **)(unaff_EBP - 100) = pbVar33;
            *(undefined4 *)(unaff_EBP - 0x98) = 0;
            if (0 < iVar25) {
              do {
                if (pbVar33 < pbVar15) {
                  *(uint *)(*(int *)(unaff_EBP - 0xa4) + iVar13 * 4) = uVar27;
                  pbVar33 = *(byte **)(unaff_EBP - 100);
                  if (*pbVar33 < 0x80) {
                    uVar27 = (uint)*pbVar33;
                    *(uint *)(unaff_EBP - 0x4c) = uVar27;
                    *(byte **)(unaff_EBP - 100) = pbVar33 + 1;
                  }
                  else {
                    uVar31 = FUN_0049d440(pbVar33,(uint *)(unaff_EBP - 0x4c));
                    uVar27 = *(uint *)(unaff_EBP - 0x4c);
                    *(int *)(unaff_EBP - 100) = *(int *)(unaff_EBP - 100) + (uVar31 & 0xff);
                  }
                  *(uint *)(*(int *)(unaff_EBP - 0xa8) + *(int *)(unaff_EBP - 0x98) * 4) = uVar27;
                  uVar31 = FUN_004b8bf0(*(uint *)(unaff_EBP - 0x4c));
                  uVar27 = *(int *)(unaff_EBP - 0x5c) + uVar31;
                  *(uint *)(unaff_EBP - 0x58) = uVar31;
                  *(uint *)(unaff_EBP - 0x5c) = uVar27;
                  if (uVar27 < uVar31) {
                    *(int *)(unaff_EBP - 100) = *(int *)(unaff_EBP - 0x60) + 1;
                    break;
                  }
                }
                else {
                  *(undefined4 *)(*(int *)(unaff_EBP - 0xa4) + iVar13 * 4) = 0;
                  uVar27 = *(uint *)(unaff_EBP - 0x5c);
                }
                iVar13 = *(int *)(unaff_EBP - 0x98) + 1;
                *(int *)(unaff_EBP - 0x98) = iVar13;
                if (*(int *)(unaff_EBP - 0xa0) <= iVar13) break;
                pbVar15 = *(byte **)(unaff_EBP - 0x60);
                pbVar33 = *(byte **)(unaff_EBP - 100);
              } while( true );
            }
            FUN_004b76e0((int *)(unaff_EBP - 0x8c));
            uVar27 = *(uint *)(unaff_EBP - 100);
            uVar31 = *(uint *)(unaff_EBP - 0x60);
            *(undefined2 *)(unaff_EBP - 0x70) = 1;
            if (uVar27 <= uVar31) {
              if ((*(uint *)(unaff_EBP - 0x5c) <= *(uint *)(unaff_EBP - 0xcc)) &&
                 ((uVar27 != uVar31 || (*(uint *)(unaff_EBP - 0x5c) == *(uint *)(unaff_EBP - 0xcc)))
                 )) {
                iVar25 = *(int *)(unaff_EBP - 0xa4);
                iVar13 = *(int *)(unaff_EBP - 0xa8);
                unaff_EBX = *(int **)(unaff_EBP - 0xe4);
                goto LAB_004b11c6;
              }
            }
            uVar26 = FUN_00493af0();
            unaff_EBX = *(int **)(unaff_EBP - 0xe4);
            unaff_ESI = *(int **)(unaff_EBP - 0xd8);
            *(undefined4 *)(unaff_EBP - 0xd0) = uVar26;
            goto LAB_004b0d0b;
          }
          uVar27 = FUN_00493af0();
          unaff_ESI = *(int **)(unaff_EBP - 0xd8);
          *(uint *)(unaff_EBP - 0xd0) = uVar27;
        }
        goto LAB_004b0d11;
      }
      piVar19 = *(int **)(unaff_EBP - 0x90);
    }
    else {
      uVar27 = FUN_004af1b0(piVar29);
      *(uint *)(unaff_EBP - 0xd0) = uVar27;
      if (uVar27 != 0) {
LAB_004b5720:
        uVar27 = *(uint *)(unaff_EBP - 0xd0);
        unaff_EBX = *(int **)(unaff_EBP - 0xe4);
        goto LAB_004b572c;
      }
      iVar25 = *(int *)(unaff_EBP - 0xb4);
      if (*(char *)(iVar25 + 0x1c) == '\0') {
        if (*(int *)(iVar25 + 0x50) != *(int *)(iVar21 + 0x50)) {
          if (*(char *)(iVar25 + 0x1f) == '\0') {
            FUN_0048f8d0(*(int *)(unaff_EBP - 0xac),(undefined4 *)(unaff_EBP - 0xcc));
            goto LAB_004b0f05;
          }
          FUN_004906b0(*(int *)(unaff_EBP - 0xac),(undefined4 *)(unaff_EBP - 0xc4));
          uVar27 = *(uint *)(unaff_EBP - 0xc4);
          *(uint *)(unaff_EBP - 0xcc) = uVar27;
          goto LAB_004b0f0b;
        }
        uVar27 = *(uint *)(iVar25 + 0x54);
        *(uint *)(unaff_EBP - 0xcc) = uVar27;
        *(undefined4 *)(unaff_EBP - 0xb0) = *(undefined4 *)(iVar25 + 0x60);
        goto LAB_004b0f11;
      }
      piVar19 = *(int **)(unaff_EBP - 0x90);
LAB_004b0dd6:
      *(undefined4 *)(unaff_EBP - 0xcc) = 0;
    }
    unaff_EBX = *(int **)(unaff_EBP - 0xe4);
    unaff_ESI = *(int **)(unaff_EBP - 0xd8);
    *(ushort *)(piVar19 + 7) = *(ushort *)(piVar19 + 7) & 0xbe01 | 1;
    goto LAB_004b0d0b;
  case 0x1e:
    pcVar22 = *(char **)(iVar25 + 0x10 + iVar34 * 0x14);
    *(char **)(unaff_EBP - 0xcc) = pcVar22;
    piVar19 = (int *)(*(int *)(unaff_EBP - 0xe0) + *(int *)(iVar25 + 4 + iVar34 * 0x14) * 0x28);
    cVar8 = *pcVar22;
    *(char *)(unaff_EBP - 200) = cVar8;
    if (cVar8 != '\0') {
      do {
        *(char **)(unaff_EBP - 0xcc) = pcVar22 + 1;
        if ((*(ushort *)(piVar19 + 7) & 0x4000) != 0) {
          FUN_004b6fa0(piVar19);
        }
        FUN_004ae250(piVar19,(char)*(undefined4 *)(unaff_EBP - 200),
                     (byte)*(undefined4 *)(unaff_EBP - 0xec));
        pcVar22 = *(char **)(unaff_EBP - 0xcc);
        cVar8 = *pcVar22;
        piVar19 = piVar19 + 10;
        *(char *)(unaff_EBP - 200) = cVar8;
      } while (cVar8 != '\0');
      unaff_EBX = *(int **)(unaff_EBP - 0xe4);
    }
    unaff_ESI = *(int **)(unaff_EBP - 0xd8);
    *(char **)(unaff_EBP - 0xcc) = pcVar22 + 1;
    goto LAB_004b0d0b;
  case 0x1f:
    iVar13 = *(int *)(unaff_EBP - 0xdc);
    uVar31 = 0;
    *(undefined4 *)(unaff_EBP - 0xbc) = 0;
    uVar27 = 0;
    *(undefined4 *)(unaff_EBP - 0xac) = 0;
    *(undefined8 *)(unaff_EBP - 0xc4) = 0;
    iVar25 = *(int *)(iVar13 + 4 + iVar34 * 0x14);
    *(int *)(unaff_EBP - 0x98) = iVar25;
    uVar26 = *(undefined4 *)(iVar13 + 0x10 + iVar34 * 0x14);
    *(undefined4 *)(unaff_EBP - 0x94) = uVar26;
    *(undefined4 *)(unaff_EBP - 0xf0) = uVar26;
    iVar25 = *(int *)(unaff_EBP - 0xe0) + iVar25 * 0x28;
    *(int *)(unaff_EBP - 0xa0) = iVar25;
    iVar21 = *(int *)(iVar13 + 8 + iVar34 * 0x14);
    *(int *)(unaff_EBP - 0x98) = iVar21;
    piVar29 = (int *)((iVar25 + iVar21 * 0x28) - 0x28);
    *(uint *)(unaff_EBP - 0x90) = (uint)*(byte *)(*(int *)(unaff_EBP - 0xd4) + 0x5d);
    *(int **)(unaff_EBP - 0x9c) = piVar29;
    *(int *)(unaff_EBP - 0xd8) =
         *(int *)(unaff_EBP - 0xe0) + *(int *)(iVar13 + 0xc + iVar34 * 0x14) * 0x28;
    piVar19 = *(int **)(unaff_EBP - 0xa0);
    *(int **)(unaff_EBP - 200) = piVar19;
    if (piVar19 <= piVar29) {
      uVar27 = 0;
      piVar29 = piVar19;
      do {
        if (*(int *)(unaff_EBP - 0xf0) != 0) {
          FUN_004ae250(piVar29,*(char *)(((int)piVar29 - (int)piVar19) / 0x28 +
                                        *(int *)(unaff_EBP - 0xf0)),
                       (byte)*(undefined4 *)(unaff_EBP - 0xec));
          uVar27 = *(uint *)(unaff_EBP - 0xac);
          piVar29 = *(int **)(unaff_EBP - 200);
          *(undefined4 *)(unaff_EBP - 0xf0) = *(undefined4 *)(unaff_EBP - 0x94);
        }
        if (((*(ushort *)(piVar29 + 7) & 0x4000) != 0) && (0 < piVar29[6])) {
          FUN_004b6fa0(piVar29);
          uVar27 = *(uint *)(unaff_EBP - 0xac);
          piVar29 = *(int **)(unaff_EBP - 200);
          *(undefined4 *)(unaff_EBP - 0xf0) = *(undefined4 *)(unaff_EBP - 0x94);
        }
        uVar31 = FUN_004b8ae0((int)piVar29,*(int *)(unaff_EBP - 0x90));
        *(uint *)(unaff_EBP - 0xa4) = uVar31;
        uVar23 = FUN_004b8bf0(uVar31);
        puVar18 = (uint *)(unaff_EBP - 0xc4);
        uVar31 = *puVar18;
        *puVar18 = *puVar18 + uVar23;
        *(int *)(unaff_EBP - 0xc0) =
             *(int *)(unaff_EBP - 0xc0) + ((int)uVar23 >> 0x1f) + (uint)CARRY4(uVar31,uVar23);
        *(uint *)(unaff_EBP - 0x88) = uVar23;
        iVar34 = FUN_004ae730(extraout_ECX,0);
        uVar31 = *(int *)(unaff_EBP - 0xbc) + iVar34;
        *(uint *)(unaff_EBP - 0xbc) = uVar31;
        if ((*(ushort *)(piVar29 + 7) & 0x4000) == 0) {
          if (uVar23 != 0) {
            uVar27 = 0;
          }
        }
        else {
          uVar27 = uVar27 + piVar29[4];
        }
        piVar19 = *(int **)(unaff_EBP - 0xa0);
        piVar29 = piVar29 + 10;
        *(uint *)(unaff_EBP - 0xac) = uVar27;
        *(int **)(unaff_EBP - 200) = piVar29;
      } while (piVar29 <= *(int **)(unaff_EBP - 0x9c));
    }
    iVar34 = FUN_004ae730(uVar31,(int)uVar31 >> 0x1f);
    uVar31 = *(int *)(unaff_EBP - 0xbc) + iVar34;
    *(int *)(unaff_EBP - 0xa8) = iVar34;
    *(uint *)(unaff_EBP - 0xbc) = uVar31;
    iVar25 = FUN_004ae730(uVar31,(int)uVar31 >> 0x1f);
    if (iVar34 < iVar25) {
      uVar31 = uVar31 + 1;
      *(uint *)(unaff_EBP - 0xbc) = uVar31;
    }
    iVar34 = *(int *)(unaff_EBP - 0xe4);
    uVar23 = (uVar31 - uVar27) + *(uint *)(unaff_EBP - 0xc4);
    iVar25 = ((((int)uVar31 >> 0x1f) - ((int)uVar27 >> 0x1f)) - (uint)(uVar31 < uVar27)) +
             *(int *)(unaff_EBP - 0xc0) + (uint)CARRY4(uVar31 - uVar27,*(uint *)(unaff_EBP - 0xc4));
    *(uint *)(unaff_EBP - 0xb4) = uVar23;
    *(int *)(unaff_EBP - 0xb0) = iVar25;
    uVar27 = *(uint *)(iVar34 + 0x50);
    iVar34 = (int)uVar27 >> 0x1f;
    if ((iVar34 < iVar25) || ((iVar34 <= iVar25 && (uVar27 < uVar23)))) {
LAB_004b577a:
      unaff_EBX = *(int **)(unaff_EBP - 0xe4);
      goto LAB_004b5780;
    }
    piVar19 = *(int **)(unaff_EBP - 0xd8);
    iVar34 = FUN_004b7260(piVar19,uVar23,0);
    if (iVar34 != 0) {
LAB_004b57a0:
      unaff_EBX = *(int **)(unaff_EBP - 0xe4);
      goto LAB_004b57a6;
    }
    uVar27 = *(uint *)(unaff_EBP - 0xbc);
    pbVar33 = (byte *)piVar19[1];
    *(byte **)(unaff_EBP - 0xcc) = pbVar33;
    if (uVar27 < 0x80) {
      *pbVar33 = (byte)uVar27;
      uVar27 = 1;
    }
    else {
      uVar27 = FUN_004a60c0(pbVar33,uVar27);
    }
    uVar31 = *(uint *)(unaff_EBP - 0x9c);
    uVar27 = uVar27 & 0xff;
    uVar23 = *(uint *)(unaff_EBP - 0xa0);
    *(uint *)(unaff_EBP - 0x8c) = uVar27;
    *(uint *)(unaff_EBP - 200) = uVar23;
    if (uVar23 <= uVar31) {
      do {
        uVar31 = FUN_004b8ae0(uVar23,*(int *)(unaff_EBP - 0x90));
        *(uint *)(unaff_EBP - 0xa4) = uVar31;
        if (uVar31 < 0x80) {
          *(char *)(uVar27 + *(int *)(unaff_EBP - 0xcc)) = (char)uVar31;
          uVar27 = 1;
        }
        else {
          uVar27 = FUN_004a60c0((byte *)(*(int *)(unaff_EBP - 0xcc) + uVar27),uVar31);
        }
        uVar31 = *(uint *)(unaff_EBP - 0x9c);
        uVar27 = *(int *)(unaff_EBP - 0x8c) + (uVar27 & 0xff);
        uVar23 = *(int *)(unaff_EBP - 200) + 0x28;
        *(uint *)(unaff_EBP - 0x8c) = uVar27;
        *(uint *)(unaff_EBP - 200) = uVar23;
      } while (uVar23 <= uVar31);
      uVar23 = *(uint *)(unaff_EBP - 0xa0);
    }
    *(uint *)(unaff_EBP - 200) = uVar23;
    if (uVar23 <= uVar31) {
      do {
        uVar27 = FUN_004b8a30((void *)(*(int *)(unaff_EBP - 0xcc) + uVar27),
                              *(int *)(unaff_EBP - 0xb4) - uVar27,uVar23,*(int *)(unaff_EBP - 0x90))
        ;
        uVar27 = *(int *)(unaff_EBP - 0x8c) + uVar27;
        uVar23 = *(int *)(unaff_EBP - 200) + 0x28;
        *(uint *)(unaff_EBP - 0x8c) = uVar27;
        *(uint *)(unaff_EBP - 200) = uVar23;
      } while (uVar23 <= *(uint *)(unaff_EBP - 0x9c));
    }
    piVar19[6] = *(int *)(unaff_EBP - 0xb4);
    *(undefined2 *)(piVar19 + 7) = 0x410;
    piVar19[8] = 0;
    if (*(int *)(unaff_EBP - 0xac) != 0) {
      piVar19[4] = *(int *)(unaff_EBP - 0xac);
      *(undefined2 *)(piVar19 + 7) = 0x4410;
    }
    unaff_EBX = *(int **)(unaff_EBP - 0xe4);
    unaff_ESI = *(int **)(unaff_EBP - 0xd8);
    *(undefined1 *)((int)piVar19 + 0x1f) = 1;
    goto LAB_004b0d0b;
  case 0x20:
    piVar19 = (int *)**(undefined4 **)
                       (*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
                       *(int *)(iVar25 + 4 + iVar34 * 0x14) * 4);
    *(int **)(unaff_EBP - 0xc4) = piVar19;
    if (piVar19 == (int *)0x0) {
      *(undefined8 *)(unaff_EBP - 0xcc) = 0;
      unaff_ESI[4] = *(int *)(unaff_EBP - 0xcc);
      unaff_ESI[5] = *(int *)(unaff_EBP - 200);
    }
    else {
      iVar34 = FUN_0048f530(piVar19,(uint *)(unaff_EBP - 0xcc));
      *(int *)(unaff_EBP - 0xd0) = iVar34;
      unaff_ESI[4] = *(int *)(unaff_EBP - 0xcc);
      unaff_ESI[5] = *(int *)(unaff_EBP - 200);
    }
    goto LAB_004b0d0b;
  case 0x21:
    iVar13 = *(int *)(iVar25 + 4 + iVar34 * 0x14);
    *(int *)(unaff_EBP - 0xcc) = iVar13;
    pbVar33 = *(byte **)(iVar25 + 0x10 + iVar34 * 0x14);
    *(byte **)(unaff_EBP - 0xf0) = pbVar33;
    *(byte **)(unaff_EBP - 200) = pbVar33;
    if (iVar13 == 0) {
      unaff_EBX = *(int **)(unaff_EBP - 0xe4);
      if (unaff_EBX[0x22] < 1) {
        uVar27 = FUN_004aa9b0((char *)pbVar33);
        *(uint *)(unaff_EBP - 0xc4) = uVar27;
        uVar27 = FUN_004b9ef0((int)unaff_EBX,0,unaff_EBX[0x79] + unaff_EBX[0x78]);
        *(uint *)(unaff_EBP - 0xd0) = uVar27;
        if (uVar27 != 0) goto LAB_004b572c;
        piVar19 = FUN_00494b90((int)unaff_EBX,*(int *)(unaff_EBP - 0xc4) + 0x19);
        *(int **)(unaff_EBP - 0xc0) = piVar19;
        if (piVar19 != (int *)0x0) {
          *piVar19 = (int)(piVar19 + 6);
          memcpy((void *)**(undefined4 **)(unaff_EBP - 0xc0),*(void **)(unaff_EBP - 200),
                 *(int *)(unaff_EBP - 0xc4) + 1);
          if (*(char *)((int)unaff_EBX + 0x36) == '\0') {
            unaff_EBX[0x78] = unaff_EBX[0x78] + 1;
          }
          else {
            *(undefined1 *)((int)unaff_EBX + 0x36) = 0;
            *(undefined1 *)((int)unaff_EBX + 0x3d) = 1;
          }
          *(int *)(*(int *)(unaff_EBP - 0xc0) + 0x10) = unaff_EBX[0x76];
          unaff_EBX[0x76] = *(int *)(unaff_EBP - 0xc0);
          *(int *)(*(int *)(unaff_EBP - 0xc0) + 8) = unaff_EBX[0x7a];
          *(int *)(*(int *)(unaff_EBP - 0xc0) + 0xc) = unaff_EBX[0x7b];
        }
        goto LAB_004b0d0b;
      }
      pcVar22 = "cannot open savepoint - SQL statements in progress";
LAB_004b188b:
      FUN_004a9a30((int *)(*(int *)(unaff_EBP - 0xd4) + 0x34),(int)unaff_EBX,(byte *)pcVar22);
      uVar27 = 5;
      *(undefined4 *)(unaff_EBP - 0xd0) = 5;
    }
    else {
      iVar34 = *(int *)(unaff_EBP - 0xe4);
      iVar25 = 0;
      *(undefined4 *)(unaff_EBP - 0xb4) = 0;
      puVar24 = *(undefined4 **)(iVar34 + 0x1d8);
      *(undefined4 **)(unaff_EBP - 0xbc) = puVar24;
joined_r0x004b1994:
      if (puVar24 == (undefined4 *)0x0) goto LAB_004b19bf;
      iVar34 = FUN_004bcc60((byte *)*puVar24,pbVar33);
      if (iVar34 != 0) goto code_r0x004b19a5;
      unaff_EBX = *(int **)(unaff_EBP - 0xe4);
      if ((0 < unaff_EBX[0x22]) && (iVar13 == 1)) {
        FUN_004a9a30((int *)(*(int *)(unaff_EBP - 0xd4) + 0x34),(int)unaff_EBX,
                     (byte *)"cannot release savepoint - SQL statements in progress");
        unaff_ESI = *(int **)(unaff_EBP - 0xd8);
        uVar27 = 5;
        *(undefined4 *)(unaff_EBP - 0xd0) = 5;
        goto LAB_004b0d11;
      }
      if ((puVar24[4] == 0) && (*(char *)((int)unaff_EBX + 0x3d) != '\0')) {
        *(undefined4 *)(unaff_EBP - 0xf0) = 1;
        if (iVar13 == 1) {
          piVar19 = *(int **)(unaff_EBP - 0xd4);
          iVar34 = FUN_004aeea0(piVar19,1);
          if (iVar34 != 0) goto LAB_004b5847;
          iVar34 = *(int *)(unaff_EBP - 0xe4);
          *(undefined1 *)(iVar34 + 0x36) = 1;
          iVar25 = FUN_004b60e0(piVar19);
          if (iVar25 == 5) {
            piVar19[0x15] = *(int *)(unaff_EBP - 0xe8);
            *(undefined1 *)(iVar34 + 0x36) = 0;
            goto LAB_004b564b;
          }
          *(undefined1 *)(iVar34 + 0x3d) = 0;
          *(int *)(unaff_EBP - 0xd0) = piVar19[0x16];
          goto LAB_004b1b7c;
        }
      }
      else {
        *(undefined4 *)(unaff_EBP - 0xf0) = 0;
      }
      iVar34 = *(int *)(unaff_EBP - 0xe4);
      *(int *)(unaff_EBP - 0xb4) = (unaff_EBX[0x78] - iVar25) + -1;
      if (iVar13 == 2) {
        iVar25 = 0;
        *(undefined4 *)(unaff_EBP - 0xb0) = 0;
        if (0 < *(int *)(iVar34 + 0x14)) {
          do {
            FUN_00491f60(*(undefined4 **)(*(int *)(iVar34 + 0x10) + 4 + iVar25 * 0x10),4);
            iVar25 = *(int *)(unaff_EBP - 0xb0) + 1;
            *(int *)(unaff_EBP - 0xb0) = iVar25;
          } while (iVar25 < *(int *)(iVar34 + 0x14));
          puVar24 = *(undefined4 **)(unaff_EBP - 0xbc);
          iVar13 = *(int *)(unaff_EBP - 0xcc);
        }
      }
      iVar25 = 0;
      *(undefined4 *)(unaff_EBP - 0xb0) = 0;
      if (0 < *(int *)(iVar34 + 0x14)) {
        while( true ) {
          unaff_EBX = *(int **)(unaff_EBP - 0xe4);
          uVar27 = FUN_00491910(*(undefined4 **)(unaff_EBX[4] + 4 + iVar25 * 0x10),iVar13,
                                *(int *)(unaff_EBP - 0xb4));
          *(uint *)(unaff_EBP - 0xd0) = uVar27;
          if (uVar27 != 0) break;
          iVar25 = *(int *)(unaff_EBP - 0xb0) + 1;
          *(int *)(unaff_EBP - 0xb0) = iVar25;
          iVar13 = *(int *)(unaff_EBP - 0xcc);
          if (unaff_EBX[5] <= iVar25) {
            puVar24 = *(undefined4 **)(unaff_EBP - 0xbc);
            iVar34 = *(int *)(unaff_EBP - 0xe4);
            goto LAB_004b1b60;
          }
        }
        goto LAB_004b572c;
      }
LAB_004b1b60:
      if ((iVar13 == 2) && ((*(byte *)(iVar34 + 0x18) & 2) != 0)) {
        FUN_00496370(iVar34);
        FUN_004a6940(iVar34);
        *(uint *)(iVar34 + 0x18) = *(uint *)(iVar34 + 0x18) | 2;
LAB_004b1b7c:
        iVar13 = *(int *)(unaff_EBP - 0xcc);
        puVar24 = *(undefined4 **)(unaff_EBP - 0xbc);
      }
      if (*(undefined4 **)(iVar34 + 0x1d8) != puVar24) {
        do {
          iVar25 = *(int *)(iVar34 + 0x1d8);
          *(int *)(unaff_EBP - 0xb8) = iVar25;
          *(undefined4 *)(iVar34 + 0x1d8) = *(undefined4 *)(iVar25 + 0x10);
          FUN_00494b00(iVar34,*(undefined4 **)(unaff_EBP - 0xb8));
          *(int *)(iVar34 + 0x1e0) = *(int *)(iVar34 + 0x1e0) + -1;
          puVar24 = *(undefined4 **)(unaff_EBP - 0xbc);
        } while (*(undefined4 **)(iVar34 + 0x1d8) != puVar24);
        iVar13 = *(int *)(unaff_EBP - 0xcc);
      }
      unaff_EBX = *(int **)(unaff_EBP - 0xe4);
      if (iVar13 != 1) {
        iVar34 = *(int *)(unaff_EBP - 0xf0);
        unaff_EBX[0x7a] = puVar24[2];
        unaff_EBX[0x7b] = puVar24[3];
        if (iVar34 == 0) goto LAB_004b1c25;
        goto LAB_004af570;
      }
      unaff_EBX[0x76] = puVar24[4];
      FUN_00494b00((int)unaff_EBX,*(undefined4 **)(unaff_EBP - 0xbc));
      if (*(int *)(unaff_EBP - 0xf0) != 0) goto LAB_004af570;
      unaff_EBX[0x78] = unaff_EBX[0x78] + -1;
LAB_004b1c25:
      uVar27 = FUN_004b9ef0((int)unaff_EBX,*(int *)(unaff_EBP - 0xcc),*(int *)(unaff_EBP - 0xb4));
      *(uint *)(unaff_EBP - 0xd0) = uVar27;
      if (uVar27 != 0) goto LAB_004b572c;
      unaff_ESI = *(int **)(unaff_EBP - 0xd8);
    }
    goto LAB_004b0d11;
  case 0x22:
    uVar27 = *(uint *)(iVar25 + 4 + iVar34 * 0x14);
    iVar25 = *(int *)(unaff_EBP - 0xdc);
    *(uint *)(unaff_EBP - 0xcc) = uVar27;
    iVar34 = *(int *)(iVar25 + 8 + iVar34 * 0x14);
    *(int *)(unaff_EBP - 200) = iVar34;
    if ((uVar27 == 0) || (*(char *)((int)unaff_EBX + 0x36) != '\0')) {
      *(undefined4 *)(unaff_EBP - 0xc4) = 0;
    }
    else {
      *(undefined4 *)(unaff_EBP - 0xc4) = 1;
      if ((iVar34 == 0) && (0 < unaff_EBX[0x22])) {
        pcVar22 = "cannot commit transaction - SQL statements in progress";
        goto LAB_004b188b;
      }
    }
    if (uVar27 != *(byte *)((int)unaff_EBX + 0x36)) {
      if (iVar34 == 0) {
        iVar34 = FUN_004aeea0(*(int **)(unaff_EBP - 0xd4),1);
        if (iVar34 != 0) goto LAB_004b5847;
        piVar19 = *(int **)(unaff_EBP - 0xd4);
        *(undefined1 *)((int)unaff_EBX + 0x36) = *(undefined1 *)(unaff_EBP - 0xcc);
        iVar34 = FUN_004b60e0(piVar19);
        if (iVar34 == 5) {
          cVar8 = *(char *)(unaff_EBP - 0xcc);
          piVar19[0x15] = *(int *)(unaff_EBP - 0xe8);
          *(char *)((int)unaff_EBX + 0x36) = '\x01' - cVar8;
          *(undefined4 *)(*(int *)(unaff_EBP - 0xd4) + 0x58) = 5;
          goto LAB_004b5847;
        }
      }
      else {
        FUN_004a6c80((int)unaff_EBX,0x204);
        *(undefined1 *)((int)unaff_EBX + 0x36) = 1;
      }
      FUN_00492710((int)unaff_EBX);
      goto LAB_004b5847;
    }
    if (uVar27 == 0) {
      pcVar22 = "cannot start a transaction within a transaction";
    }
    else {
      pcVar22 = "cannot rollback - no transaction is active";
      if (iVar34 == 0) {
        pcVar22 = "cannot commit - no transaction is active";
      }
    }
    FUN_004a9a30((int *)(*(int *)(unaff_EBP - 0xd4) + 0x34),(int)unaff_EBX,(byte *)pcVar22);
    uVar27 = 1;
    *(undefined4 *)(unaff_EBP - 0xd0) = 1;
    goto LAB_004b0d11;
  case 0x23:
    piVar19 = *(int **)(unaff_EBX[4] + 4 + *(int *)(iVar25 + 4 + iVar34 * 0x14) * 0x10);
    *(int **)(unaff_EBP - 0xcc) = piVar19;
    if (piVar19 == (int *)0x0) goto LAB_004b0d0b;
    uVar27 = FUN_0048ed50(piVar19,*(int *)(iVar25 + 8 + iVar34 * 0x14));
    *(uint *)(unaff_EBP - 0xd0) = uVar27;
    if (uVar27 == 5) {
      iVar34 = *(int *)(unaff_EBP - 0xd4);
      *(undefined4 *)(iVar34 + 0x54) = *(undefined4 *)(unaff_EBP - 0xe8);
      *(undefined4 *)(iVar34 + 0x58) = 5;
      goto LAB_004b5847;
    }
    if (uVar27 != 0) goto LAB_004b572c;
    if (((*(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar34 * 0x14) != 0) &&
        (iVar34 = *(int *)(unaff_EBP - 0xd4), (*(byte *)(iVar34 + 0x60) & 0x80) != 0)) &&
       ((*(char *)((int)unaff_EBX + 0x36) == '\0' || (1 < unaff_EBX[0x21])))) {
      if (*(int *)(iVar34 + 0x70) == 0) {
        unaff_EBX[0x79] = unaff_EBX[0x79] + 1;
        iVar34 = *(int *)(unaff_EBP - 0xd4);
        *(int *)(iVar34 + 0x70) = unaff_EBX[0x78] + unaff_EBX[0x79];
      }
      iVar34 = FUN_004b9ef0((int)unaff_EBX,0,*(int *)(iVar34 + 0x70) + -1);
      *(int *)(unaff_EBP - 0xd0) = iVar34;
      if (iVar34 == 0) {
        uVar26 = FUN_0048ed00(*(undefined4 **)(unaff_EBP - 0xcc),
                              *(int *)(*(int *)(unaff_EBP - 0xd4) + 0x70));
        *(undefined4 *)(unaff_EBP - 0xd0) = uVar26;
      }
      iVar34 = *(int *)(unaff_EBP - 0xd4);
      *(int *)(iVar34 + 0x90) = unaff_EBX[0x7a];
      *(int *)(iVar34 + 0x94) = unaff_EBX[0x7b];
    }
    goto LAB_004b0d0b;
  case 0x24:
    iVar13 = *(int *)(iVar25 + 4 + iVar34 * 0x14);
    *(int *)(unaff_EBP - 200) = iVar13;
    iVar34 = *(int *)(iVar25 + 0xc + iVar34 * 0x14);
    *(int *)(unaff_EBP - 0xc4) = iVar34;
    FUN_0048fe70(*(undefined4 **)(unaff_EBX[4] + 4 + iVar13 * 0x10),iVar34,
                 (undefined4 *)(unaff_EBP - 0xcc));
    iVar34 = *(int *)(unaff_EBP - 0xcc);
    unaff_ESI[4] = iVar34;
    unaff_ESI[5] = iVar34 >> 0x1f;
    goto LAB_004b0d0b;
  case 0x25:
    iVar13 = *(int *)(unaff_EBP - 0xe0);
    *(int *)(unaff_EBP - 0xcc) = *(int *)(iVar25 + 4 + iVar34 * 0x14) * 0x10 + unaff_EBX[4];
    iVar13 = iVar13 + *(int *)(iVar25 + 0xc + iVar34 * 0x14) * 0x28;
    FUN_004b7410(iVar13);
    uVar27 = FUN_00492040(*(undefined4 **)(*(int *)(unaff_EBP - 0xcc) + 4),
                          *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar34 * 0x14),
                          *(undefined4 *)(iVar13 + 0x10));
    iVar25 = *(int *)(unaff_EBP - 0xdc);
    *(uint *)(unaff_EBP - 0xd0) = uVar27;
    iVar21 = *(int *)(iVar25 + 8 + iVar34 * 0x14);
    if (iVar21 == 1) {
      **(undefined4 **)(*(int *)(unaff_EBP - 0xcc) + 0xc) = *(undefined4 *)(iVar13 + 0x10);
      unaff_EBX[6] = unaff_EBX[6] | 2;
    }
    else if (iVar21 == 2) {
      *(undefined1 *)(*(int *)(*(int *)(unaff_EBP - 0xcc) + 0xc) + 0x4c) =
           *(undefined1 *)(iVar13 + 0x10);
    }
    if (*(int *)(iVar25 + 4 + iVar34 * 0x14) != 1) goto LAB_004af570;
    FUN_00496370((int)unaff_EBX);
    unaff_ESI = *(int **)(unaff_EBP - 0xd8);
    puVar18 = (uint *)(*(int *)(unaff_EBP - 0xd4) + 0x60);
    *puVar18 = *puVar18 & 0xffffffdf;
    goto LAB_004b0d0b;
  case 0x26:
    puVar24 = *(undefined4 **)(unaff_EBX[4] + 4 + *(int *)(iVar25 + 4 + iVar34 * 0x14) * 0x10);
    *(undefined4 **)(unaff_EBP - 0xc4) = puVar24;
    if (puVar24 == (undefined4 *)0x0) {
      iVar13 = 0;
      *(undefined4 *)(unaff_EBP - 0xcc) = 0;
      iVar21 = 0;
    }
    else {
      FUN_0048fe70(puVar24,1,(undefined4 *)(unaff_EBP - 0xcc));
      iVar25 = *(int *)(unaff_EBP - 0xdc);
      iVar13 = *(int *)(unaff_EBP - 0xcc);
      iVar21 = *(int *)(*(int *)(unaff_EBX[4] + 0xc + *(int *)(iVar25 + 4 + iVar34 * 0x14) * 0x10) +
                       4);
    }
    *(int *)(unaff_EBP - 200) = iVar21;
    if ((iVar13 == *(int *)(iVar25 + 8 + iVar34 * 0x14)) &&
       (iVar21 == *(int *)(iVar25 + 0xc + iVar34 * 0x14))) goto LAB_004b0d0b;
    FUN_00494b00((int)unaff_EBX,*(undefined4 **)(*(int *)(unaff_EBP - 0xd4) + 0x34));
    puVar24 = FUN_00494db0((int)unaff_EBX,"database schema has changed");
    *(undefined4 **)(*(int *)(unaff_EBP - 0xd4) + 0x34) = puVar24;
    iVar34 = *(int *)(*(int *)(unaff_EBP - 0xdc) + 4 + iVar34 * 0x14);
    if (**(int **)(unaff_EBX[4] + 0xc + iVar34 * 0x10) != *(int *)(unaff_EBP - 0xcc)) {
      FUN_004a69a0((int)unaff_EBX,iVar34);
    }
    puVar18 = (uint *)(*(int *)(unaff_EBP - 0xd4) + 0x60);
    *puVar18 = *puVar18 | 0x20;
    uVar27 = 0x11;
    *(undefined4 *)(unaff_EBP - 0xd0) = 0x11;
    goto LAB_004b0d11;
  case 0x27:
  case 0x28:
    if ((*(byte *)(*(int *)(unaff_EBP - 0xd4) + 0x60) & 0x20) == 0) {
      iVar13 = *(int *)(unaff_EBP - 0xe4);
      iVar14 = 0;
      *(undefined4 *)(unaff_EBP - 0xcc) = 0;
      *(undefined4 *)(unaff_EBP - 200) = 0;
      iVar21 = *(int *)(iVar25 + 8 + iVar34 * 0x14);
      *(int *)(unaff_EBP - 0xc4) = iVar21;
      iVar25 = *(int *)(iVar25 + 0xc + iVar34 * 0x14);
      *(int *)(unaff_EBP - 0xc0) = iVar25;
      iVar13 = iVar25 * 0x10 + *(int *)(iVar13 + 0x10);
      *(int *)(unaff_EBP - 0xb0) = iVar13;
      *(undefined4 *)(unaff_EBP - 0xb8) = *(undefined4 *)(iVar13 + 4);
      if (*(char *)(*(int *)(unaff_EBP - 0xdc) + iVar34 * 0x14) == '(') {
        *(undefined4 *)(unaff_EBP - 0xbc) = 1;
        bVar9 = *(byte *)(*(int *)(iVar13 + 0xc) + 0x4c);
        if (bVar9 < *(byte *)(*(int *)(unaff_EBP - 0xd4) + 0x5d)) {
          *(byte *)(*(int *)(unaff_EBP - 0xd4) + 0x5d) = bVar9;
        }
      }
      else {
        *(undefined4 *)(unaff_EBP - 0xbc) = 0;
      }
      if ((*(byte *)(*(int *)(unaff_EBP - 0xdc) + 3 + iVar34 * 0x14) & 2) != 0) {
        iVar25 = *(int *)(unaff_EBP - 0xe0) + iVar21 * 0x28;
        FUN_004b7410(iVar25);
        iVar25 = *(int *)(iVar25 + 0x10);
        *(int *)(unaff_EBP - 0xc4) = iVar25;
        if (iVar25 < 2) {
          uVar26 = FUN_00493af0();
          *(undefined4 *)(unaff_EBP - 0xd0) = uVar26;
          goto LAB_004b5720;
        }
        iVar25 = *(int *)(unaff_EBP - 0xc0);
        iVar14 = *(int *)(unaff_EBP - 0xcc);
      }
      iVar13 = *(int *)(unaff_EBP - 0xdc);
      cVar8 = *(char *)(iVar13 + 1 + iVar34 * 0x14);
      if (cVar8 == -6) {
        iVar25 = *(int *)(iVar13 + 0x10 + iVar34 * 0x14);
        iVar21 = **(int **)(unaff_EBP - 0xd4);
        *(int *)(unaff_EBP - 200) = iVar25;
        *(undefined1 *)(iVar25 + 4) =
             *(undefined1 *)(*(int *)(*(int *)(iVar21 + 0x10) + 0xc) + 0x4d);
        iVar25 = *(int *)(unaff_EBP - 0xc0);
        iVar14 = *(ushort *)(*(int *)(unaff_EBP - 200) + 6) + 1;
LAB_004b20a8:
        *(int *)(unaff_EBP - 0xcc) = iVar14;
      }
      else if (cVar8 == -0xe) {
        iVar14 = *(int *)(iVar13 + 0x10 + iVar34 * 0x14);
        goto LAB_004b20a8;
      }
      puVar24 = FUN_0046c260(*(int **)(unaff_EBP - 0xd4),*(int *)(iVar13 + 4 + iVar34 * 0x14),iVar14
                             ,iVar25,1);
      *(undefined4 **)(unaff_EBP - 0xb4) = puVar24;
      if (puVar24 == (undefined4 *)0x0) goto LAB_004b57a0;
      *(undefined1 *)(puVar24 + 7) = 1;
      *(undefined1 *)(*(int *)(unaff_EBP - 0xb4) + 0x20) = 1;
      uVar26 = FUN_0048f790(*(undefined4 **)(unaff_EBP - 0xb8),*(int *)(unaff_EBP - 0xc4),
                            *(int *)(unaff_EBP - 0xbc),*(int *)(unaff_EBP - 200),
                            (int *)**(undefined4 **)(unaff_EBP - 0xb4));
      iVar25 = *(int *)(unaff_EBP - 0xb4);
      unaff_ESI = *(int **)(unaff_EBP - 0xd8);
      *(undefined4 *)(unaff_EBP - 0xd0) = uVar26;
      *(undefined4 *)(iVar25 + 8) = *(undefined4 *)(unaff_EBP - 200);
      *(byte *)(**(int **)(unaff_EBP - 0xb4) + 0x5d) = *(byte *)(iVar13 + 3 + iVar34 * 0x14) & 1;
      unaff_EBX = *(int **)(unaff_EBP - 0xe4);
      *(bool *)(*(int *)(unaff_EBP - 0xb4) + 0x1e) = *(char *)(iVar13 + 1 + iVar34 * 0x14) != -6;
      *(bool *)(*(int *)(unaff_EBP - 0xb4) + 0x1f) =
           *(char *)(*(int *)(unaff_EBP - 0xb4) + 0x1e) == '\0';
      goto LAB_004b0d0b;
    }
    uVar27 = 4;
    *(undefined4 *)(unaff_EBP - 0xd0) = 4;
    goto LAB_004b0d11;
  case 0x29:
  case 0x2a:
    puVar24 = FUN_0046c260(*(int **)(unaff_EBP - 0xd4),*(int *)(iVar25 + 4 + iVar34 * 0x14),
                           *(int *)(iVar25 + 8 + iVar34 * 0x14),0xffffffff,1);
    *(undefined4 **)(unaff_EBP - 0xcc) = puVar24;
    if (puVar24 == (undefined4 *)0x0) goto LAB_004b57a6;
    *(undefined1 *)(puVar24 + 7) = 1;
    iVar25 = FUN_00490e00((undefined *)*unaff_EBX,(byte *)0x0,(int)unaff_EBX,
                          (undefined4 *)(*(int *)(unaff_EBP - 0xcc) + 4),
                          *(byte *)(*(int *)(unaff_EBP - 0xdc) + 3 + iVar34 * 0x14) | 5,0x41e);
    *(int *)(unaff_EBP - 0xd0) = iVar25;
    if (iVar25 == 0) {
      uVar27 = FUN_0048ed50(*(int **)(*(int *)(unaff_EBP - 0xcc) + 4),1);
      *(uint *)(unaff_EBP - 0xd0) = uVar27;
      if (uVar27 == 0) {
        if (*(int *)(*(int *)(unaff_EBP - 0xdc) + 0x10 + iVar34 * 0x14) == 0) {
          uVar26 = FUN_0048f790((undefined4 *)(*(undefined4 **)(unaff_EBP - 0xcc))[1],1,1,0,
                                (int *)**(undefined4 **)(unaff_EBP - 0xcc));
          *(undefined4 *)(unaff_EBP - 0xd0) = uVar26;
          *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + 0x1e) = 1;
        }
        else {
          pcVar22 = FUN_0048f740(*(undefined4 **)(*(int *)(unaff_EBP - 0xcc) + 4),
                                 (undefined4 *)(unaff_EBP - 0x118),
                                 *(byte *)(*(int *)(unaff_EBP - 0xdc) + 3 + iVar34 * 0x14) | 2);
          *(char **)(unaff_EBP - 0xd0) = pcVar22;
          if (pcVar22 == (char *)0x0) {
            uVar26 = FUN_0048f790((undefined4 *)(*(undefined4 **)(unaff_EBP - 0xcc))[1],
                                  *(int *)(unaff_EBP - 0x118),1,
                                  *(int *)(*(int *)(unaff_EBP - 0xdc) + 0x10 + iVar34 * 0x14),
                                  (int *)**(undefined4 **)(unaff_EBP - 0xcc));
            *(undefined4 *)(unaff_EBP - 0xd0) = uVar26;
            *(undefined4 *)(*(int *)(unaff_EBP - 0xcc) + 8) =
                 *(undefined4 *)(*(int *)(unaff_EBP - 0xdc) + 0x10 + iVar34 * 0x14);
            *(undefined1 *)(*(int *)(*(int *)(unaff_EBP - 0xcc) + 8) + 4) =
                 *(undefined1 *)
                  (*(int *)(*(int *)(**(int **)(unaff_EBP - 0xd4) + 0x10) + 0xc) + 0x4d);
          }
          *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + 0x1e) = 0;
        }
      }
    }
    *(bool *)(*(int *)(unaff_EBP - 0xcc) + 0x20) =
         *(char *)(*(int *)(unaff_EBP - 0xdc) + 3 + iVar34 * 0x14) != '\b';
    *(bool *)(*(int *)(unaff_EBP - 0xcc) + 0x1f) =
         *(char *)(*(int *)(unaff_EBP - 0xcc) + 0x1e) == '\0';
    goto LAB_004b0d0b;
  case 0x2b:
    puVar24 = FUN_0046c260(*(int **)(unaff_EBP - 0xd4),*(int *)(iVar25 + 4 + iVar34 * 0x14),
                           *(int *)(iVar25 + 8 + iVar34 * 0x14),0xffffffff,1);
    *(undefined4 **)(unaff_EBP - 0xcc) = puVar24;
    if (puVar24 == (undefined4 *)0x0) goto LAB_004b57a6;
    puVar24[2] = *(undefined4 *)(*(int *)(unaff_EBP - 0xdc) + 0x10 + iVar34 * 0x14);
    *(undefined1 *)(*(int *)(*(int *)(unaff_EBP - 0xcc) + 8) + 4) =
         *(undefined1 *)(*(int *)(*(int *)(**(int **)(unaff_EBP - 0xd4) + 0x10) + 0xc) + 0x4d);
    *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + 0x21) = 1;
    uVar27 = FUN_004b8e80((int)unaff_EBX,*(int *)(unaff_EBP - 0xcc));
    *(uint *)(unaff_EBP - 0xd0) = uVar27;
    goto LAB_004b0d11;
  case 0x2c:
    puVar24 = FUN_0046c260(*(int **)(unaff_EBP - 0xd4),*(int *)(iVar25 + 4 + iVar34 * 0x14),
                           *(int *)(iVar25 + 0xc + iVar34 * 0x14),0xffffffff,0);
    *(undefined4 **)(unaff_EBP - 0xcc) = puVar24;
    if (puVar24 == (undefined4 *)0x0) goto LAB_004b57a6;
    iVar25 = *(int *)(unaff_EBP - 0xdc);
    *(undefined1 *)(puVar24 + 7) = 1;
    *(undefined4 *)(*(int *)(unaff_EBP - 0xcc) + 0x10) = *(undefined4 *)(iVar25 + 8 + iVar34 * 0x14)
    ;
    *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + 0x1e) = 1;
    *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + 0x1f) = 0;
    *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + 0x22) = *(undefined1 *)(iVar25 + 3 + iVar34 * 0x14)
    ;
    goto LAB_004b0d0b;
  case 0x2d:
    FUN_004b5ff0(*(int **)(unaff_EBP - 0xd4),
                 *(undefined4 **)
                  ((*(int **)(unaff_EBP - 0xd4))[0x10] + *(int *)(iVar25 + 4 + iVar34 * 0x14) * 4));
    *(undefined4 *)
     (*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
     *(int *)(*(int *)(unaff_EBP - 0xdc) + 4 + iVar34 * 0x14) * 4) = 0;
    goto LAB_004b0d0b;
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
    piVar19 = *(int **)(*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
                       *(int *)(iVar25 + 4 + iVar34 * 0x14) * 4);
    *(int **)(unaff_EBP - 0xc4) = piVar19;
    if (*piVar19 == 0) break;
    *(uint *)(unaff_EBP - 200) = (uint)*(byte *)(iVar25 + iVar34 * 0x14);
    *(undefined1 *)(piVar19 + 7) = 0;
    puVar24 = *(undefined4 **)(unaff_EBP - 0xc4);
    if (*(char *)((int)puVar24 + 0x1e) == '\0') {
      *(undefined4 *)(unaff_EBP - 0xa4) = *(undefined4 *)(iVar25 + 0x10 + iVar34 * 0x14);
      *(undefined4 *)(unaff_EBP - 0xbc) = puVar24[2];
      *(undefined2 *)(unaff_EBP - 0xb8) = *(undefined2 *)(unaff_EBP - 0xa4);
      *(byte *)(unaff_EBP - 0xb6) = *(byte *)(unaff_EBP - 200) & 1;
      piVar19 = (int *)(*(int *)(unaff_EBP - 0xe0) + *(int *)(iVar25 + 0xc + iVar34 * 0x14) * 0x28);
      *(int **)(unaff_EBP - 0xac) = piVar19;
      if ((*(ushort *)(piVar19 + 7) & 0x4000) != 0) {
        FUN_004b6fa0(piVar19);
        puVar24 = *(undefined4 **)(unaff_EBP - 0xc4);
      }
      uVar27 = FUN_004908e0((int *)*puVar24,(int *)(unaff_EBP - 0xbc),0,0,0,
                            (uint *)(unaff_EBP - 0xcc));
      *(uint *)(unaff_EBP - 0xd0) = uVar27;
      if (uVar27 != 0) goto LAB_004b572c;
      *(undefined1 *)(*(int *)(unaff_EBP - 0xc4) + 0x19) = 0;
    }
    else {
      iVar25 = *(int *)(unaff_EBP - 0xe0) + *(int *)(iVar25 + 0xc + iVar34 * 0x14) * 0x28;
      FUN_0046dfa0(iVar25);
      uVar39 = FUN_004b65e0(iVar25);
      iVar13 = *(int *)(unaff_EBP - 0xc4);
      *(ulonglong *)(unaff_EBP - 0x9c) = uVar39;
      *(undefined1 *)(iVar13 + 0x19) = 0;
      if ((*(ushort *)(iVar25 + 0x1c) & 4) == 0) {
        if ((*(ushort *)(iVar25 + 0x1c) & 8) == 0) {
          unaff_ESI = *(int **)(unaff_EBP - 0xd8);
          iVar34 = *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar34 * 0x14);
          goto LAB_004b0d04;
        }
        if ((*(int *)(unaff_EBP - 0x9c) == 0) && (*(int *)(unaff_EBP - 0x98) == -0x80000000)) {
          dVar2 = *(double *)(iVar25 + 8);
          *(undefined4 *)(unaff_EBP - 0x124) = 0;
          *(undefined4 *)(unaff_EBP - 0x120) = 0x80000000;
          *(double *)(unaff_EBP - 0xf4) = (double)*(longlong *)(unaff_EBP - 0x124);
          *(undefined8 *)(unaff_EBP - 0xf4) = *(undefined8 *)(unaff_EBP - 0xf4);
          if ((dVar2 < *(double *)(unaff_EBP - 0xf4)) || (0.0 < dVar2)) {
            *(undefined4 *)(unaff_EBP - 0xcc) = 1;
            if (0.0 < *(double *)(iVar25 + 8) || *(double *)(iVar25 + 8) == 0.0) {
              if (*(int *)(unaff_EBP - 200) < 0x30) {
                uVar27 = FUN_004906f0((int *)**(undefined4 **)(unaff_EBP - 0xc4),
                                      (undefined4 *)(unaff_EBP - 0xcc));
                goto LAB_004b2547;
              }
            }
            else if (0x2f < *(int *)(unaff_EBP - 200)) {
              uVar27 = FUN_0048fdc0((int *)**(undefined4 **)(unaff_EBP - 0xc4),
                                    (undefined4 *)(unaff_EBP - 0xcc));
LAB_004b2547:
              *(uint *)(unaff_EBP - 0xd0) = uVar27;
              if (uVar27 != 0) goto LAB_004b572c;
              if (*(int *)(unaff_EBP - 0xcc) == 0) goto LAB_004b0616;
              unaff_ESI = *(int **)(unaff_EBP - 0xd8);
              iVar34 = *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar34 * 0x14);
              goto LAB_004b0d04;
            }
LAB_004af55f:
            *(int *)(unaff_EBP - 0xe8) =
                 *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar34 * 0x14) + -1;
            goto LAB_004af570;
          }
        }
        if ((*(int *)(unaff_EBP - 200) == 0x2e) || (*(int *)(unaff_EBP - 200) == 0x30)) {
          *(double *)(unaff_EBP - 0xf4) = (double)*(longlong *)(unaff_EBP - 0x9c);
          dVar2 = *(double *)(iVar25 + 8);
          *(undefined8 *)(unaff_EBP - 0xf4) = *(undefined8 *)(unaff_EBP - 0xf4);
          if (dVar2 < *(double *)(unaff_EBP - 0xf4) || dVar2 == *(double *)(unaff_EBP - 0xf4))
          goto LAB_004b2618;
          uVar27 = *(uint *)(unaff_EBP - 0x9c) + 1;
          iVar25 = *(int *)(unaff_EBP - 0x98) + (uint)(0xfffffffe < *(uint *)(unaff_EBP - 0x9c));
          *(uint *)(unaff_EBP - 0x9c) = uVar27;
          *(int *)(unaff_EBP - 0x98) = iVar25;
        }
        else {
          *(double *)(unaff_EBP - 0xf4) = (double)*(longlong *)(unaff_EBP - 0x9c);
          *(undefined8 *)(unaff_EBP - 0xf4) = *(undefined8 *)(unaff_EBP - 0xf4);
          if (*(double *)(unaff_EBP - 0xf4) < *(double *)(iVar25 + 8) ||
              *(double *)(unaff_EBP - 0xf4) == *(double *)(iVar25 + 8)) goto LAB_004b2618;
          uVar27 = *(int *)(unaff_EBP - 0x9c) - 1;
          iVar25 = *(int *)(unaff_EBP - 0x98) + -1 + (uint)(*(int *)(unaff_EBP - 0x9c) != 0);
          *(uint *)(unaff_EBP - 0x9c) = uVar27;
          *(int *)(unaff_EBP - 0x98) = iVar25;
        }
      }
      else {
LAB_004b2618:
        iVar25 = *(int *)(unaff_EBP - 0x98);
        uVar27 = *(uint *)(unaff_EBP - 0x9c);
      }
      uVar27 = FUN_004908e0((int *)**(undefined4 **)(unaff_EBP - 0xc4),(int *)0x0,uVar27,iVar25,0,
                            (uint *)(unaff_EBP - 0xcc));
      *(uint *)(unaff_EBP - 0xd0) = uVar27;
      if (uVar27 != 0) goto LAB_004b572c;
      if (*(int *)(unaff_EBP - 0xcc) == 0) {
        *(undefined1 *)(*(int *)(unaff_EBP - 0xc4) + 0x19) = 1;
        *(undefined4 *)(*(int *)(unaff_EBP - 0xc4) + 0x40) = *(undefined4 *)(unaff_EBP - 0x9c);
        *(undefined4 *)(*(int *)(unaff_EBP - 0xc4) + 0x44) = *(undefined4 *)(unaff_EBP - 0x98);
      }
    }
    *(undefined1 *)(*(int *)(unaff_EBP - 0xc4) + 0x1d) = 0;
    *(undefined4 *)(*(int *)(unaff_EBP - 0xc4) + 0x50) = 0;
    iVar25 = *(int *)(unaff_EBP - 200);
    iVar13 = *(int *)(unaff_EBP - 0xcc);
    if (iVar25 < 0x30) {
      if ((iVar13 < 1) && ((iVar13 != 0 || (iVar25 != 0x2e)))) {
        uVar27 = (uint)(*(char *)(**(int **)(unaff_EBP - 0xc4) + 0x5b) != '\x01');
        *(uint *)(unaff_EBP - 0xcc) = uVar27;
        bVar11 = uVar27 == 0;
        goto LAB_004b07b5;
      }
      uVar27 = FUN_00491450((int *)**(undefined4 **)(unaff_EBP - 0xc4),
                            (undefined4 *)(unaff_EBP - 0xcc));
    }
    else {
      if ((-1 < iVar13) && ((iVar13 != 0 || (iVar25 != 0x31)))) {
        unaff_ESI = *(int **)(unaff_EBP - 0xd8);
        *(undefined4 *)(unaff_EBP - 0xcc) = 0;
        goto LAB_004b0d0b;
      }
      uVar27 = FUN_00490c90((int *)**(undefined4 **)(unaff_EBP - 0xc4),
                            (undefined4 *)(unaff_EBP - 0xcc));
    }
    *(uint *)(unaff_EBP - 0xd0) = uVar27;
    if (uVar27 == 0) {
      *(undefined1 *)(*(int *)(unaff_EBP - 0xc4) + 0x19) = 0;
      bVar11 = *(int *)(unaff_EBP - 0xcc) == 0;
LAB_004b07b5:
      unaff_ESI = *(int **)(unaff_EBP - 0xd8);
      goto LAB_004b07bb;
    }
    goto LAB_004b572c;
  case 0x32:
    piVar19 = *(int **)(*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
                       *(int *)(iVar25 + 4 + iVar34 * 0x14) * 4);
    *(int **)(unaff_EBP - 0xcc) = piVar19;
    if (*piVar19 != 0) {
      iVar13 = *(int *)(unaff_EBP - 0xe0);
      *(undefined1 *)(piVar19 + 7) = 0;
      uVar39 = FUN_004b65e0(iVar13 + *(int *)(iVar25 + 8 + iVar34 * 0x14) * 0x28);
      *(int *)(*(int *)(unaff_EBP - 0xcc) + 0x38) = (int)uVar39;
      *(int *)(*(int *)(unaff_EBP - 0xcc) + 0x3c) = (int)(uVar39 >> 0x20);
      *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + 0x19) = 0;
      *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + 0x1d) = 1;
    }
    goto LAB_004b0d0b;
  case 0x33:
  case 0x34:
    iVar25 = *(int *)(unaff_EBP - 0xdc);
    iVar21 = 0;
    iVar13 = *(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40);
    *(undefined4 *)(unaff_EBP - 0xcc) = 0;
    piVar19 = *(int **)(iVar13 + *(int *)(iVar25 + 4 + iVar34 * 0x14) * 4);
    *(int **)(unaff_EBP - 200) = piVar19;
    iVar25 = *(int *)(unaff_EBP - 0xe0) + *(int *)(iVar25 + 0xc + iVar34 * 0x14) * 0x28;
    if (*piVar19 != 0) {
      iVar13 = *(int *)(unaff_EBP - 0xdc);
      if (*(int *)(iVar13 + 0x10 + iVar34 * 0x14) < 1) {
        puVar24 = FUN_004aebc0((int *)piVar19[2],unaff_EBP - 0x9c,0x97,
                               (undefined4 *)(unaff_EBP - 0xc0));
        *(undefined4 **)(unaff_EBP - 0xbc) = puVar24;
        if (puVar24 == (undefined4 *)0x0) goto LAB_004b57a6;
        FUN_004b8560(*(undefined4 **)(*(int *)(unaff_EBP - 200) + 8),*(int *)(iVar25 + 0x18),
                     *(byte **)(iVar25 + 4),(uint)puVar24);
        pbVar33 = (byte *)(*(int *)(unaff_EBP - 0xbc) + 6);
        *pbVar33 = *pbVar33 | 2;
        piVar29 = *(int **)(unaff_EBP - 0xbc);
        piVar19 = *(int **)(unaff_EBP - 200);
      }
      else {
        *(int *)(unaff_EBP - 0xb4) = piVar19[2];
        *(undefined2 *)(unaff_EBP - 0xb0) = *(undefined2 *)(iVar13 + 0x10 + iVar34 * 0x14);
        piVar29 = (int *)(unaff_EBP - 0xb4);
        *(int *)(unaff_EBP - 0xa4) = iVar25;
        *(undefined1 *)(unaff_EBP - 0xae) = 2;
        *(int **)(unaff_EBP - 0xbc) = piVar29;
      }
      uVar27 = FUN_004908e0((int *)*piVar19,piVar29,0,0,0,(uint *)(unaff_EBP - 0xc4));
      *(uint *)(unaff_EBP - 0xd0) = uVar27;
      if (*(int *)(*(int *)(unaff_EBP - 0xdc) + 0x10 + iVar34 * 0x14) == 0) {
        FUN_00494b00((int)unaff_EBX,*(undefined4 **)(unaff_EBP - 0xc0));
      }
      uVar27 = *(uint *)(unaff_EBP - 0xd0);
      if (uVar27 != 0) goto LAB_004b0616;
      *(uint *)(unaff_EBP - 0xcc) = (uint)(*(int *)(unaff_EBP - 0xc4) == 0);
      *(undefined1 *)(*(int *)(unaff_EBP - 200) + 0x1d) = 0;
      *(undefined4 *)(*(int *)(unaff_EBP - 200) + 0x50) = 0;
      iVar21 = *(int *)(unaff_EBP - 0xcc);
    }
    iVar25 = *(int *)(unaff_EBP - 0xdc);
    unaff_ESI = *(int **)(unaff_EBP - 0xd8);
    if (*(char *)(iVar25 + iVar34 * 0x14) == '4') {
      if (iVar21 == 0) goto LAB_004b0d0b;
      iVar34 = *(int *)(iVar25 + 8 + iVar34 * 0x14);
    }
    else {
      if (iVar21 != 0) goto LAB_004b0d0b;
      iVar34 = *(int *)(iVar25 + 8 + iVar34 * 0x14);
    }
    goto LAB_004b0d04;
  case 0x35:
    iVar13 = *(int *)(unaff_EBP - 0xe0) + *(int *)(iVar25 + 0xc + iVar34 * 0x14) * 0x28;
    *(int *)(unaff_EBP - 0xbc) =
         *(int *)(unaff_EBP - 0xe0) + *(int *)(iVar25 + 0x10 + iVar34 * 0x14) * 0x28;
    iVar25 = *(int *)(*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
                     *(int *)(iVar25 + 4 + iVar34 * 0x14) * 4);
    *(int *)(unaff_EBP - 200) = iVar25;
    *(undefined4 *)(iVar25 + 0x4c) = 0;
    *(undefined4 *)(*(int *)(unaff_EBP - 200) + 0x50) = 0;
    puVar24 = *(undefined4 **)(unaff_EBP - 200);
    iVar25 = *(int *)(unaff_EBP - 0xbc);
    uVar26 = *puVar24;
    *(undefined4 *)(unaff_EBP - 0xc4) = uVar26;
    iVar21 = puVar24[2];
    *(undefined4 *)(unaff_EBP - 0xf0) = uVar26;
    uVar4 = *(ushort *)(iVar21 + 6);
    uVar28 = 0;
    *(ushort *)(unaff_EBP - 0xc0) = uVar4;
    *(undefined2 *)(unaff_EBP - 0xcc) = 0;
    if (uVar4 == 0) goto LAB_004b2a6e;
    uVar27 = 0;
    goto LAB_004b2a50;
  case 0x36:
    iVar13 = *(int *)(iVar25 + 0xc + iVar34 * 0x14);
    puVar24 = *(undefined4 **)
               (*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
               *(int *)(iVar25 + 4 + iVar34 * 0x14) * 4);
    *(undefined4 **)(unaff_EBP - 0xcc) = puVar24;
    piVar19 = (int *)*puVar24;
    *(int **)(unaff_EBP - 200) = piVar19;
    if (piVar19 == (int *)0x0) {
      *(int *)(unaff_EBP - 0xe8) = *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar34 * 0x14) + -1;
      unaff_ESI = *(int **)(unaff_EBP - 0xd8);
      puVar24[0x13] = 0;
    }
    else {
      iVar25 = *(int *)(unaff_EBP - 0xe0);
      *(undefined4 *)(unaff_EBP - 0xc4) = 0;
      uVar27 = *(uint *)(iVar25 + 0x10 + iVar13 * 0x28);
      *(uint *)(unaff_EBP - 0xbc) = uVar27;
      iVar25 = *(int *)(iVar25 + 0x14 + iVar13 * 0x28);
      *(int *)(unaff_EBP - 0xb8) = iVar25;
      uVar27 = FUN_004908e0(piVar19,(int *)0x0,uVar27,iVar25,0,(uint *)(unaff_EBP - 0xc4));
      iVar25 = *(int *)(unaff_EBP - 0xe0);
      *(uint *)(unaff_EBP - 0xd0) = uVar27;
      *(undefined4 *)(*(int *)(unaff_EBP - 0xcc) + 0x40) =
           *(undefined4 *)(iVar25 + 0x10 + iVar13 * 0x28);
      unaff_EBX = *(int **)(unaff_EBP - 0xe4);
      *(undefined4 *)(*(int *)(unaff_EBP - 0xcc) + 0x44) =
           *(undefined4 *)(iVar25 + 0x14 + iVar13 * 0x28);
      *(bool *)(*(int *)(unaff_EBP - 0xcc) + 0x19) = *(int *)(unaff_EBP - 0xc4) == 0;
      *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + 0x1c) = 0;
      *(undefined4 *)(*(int *)(unaff_EBP - 0xcc) + 0x50) = 0;
      *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + 0x1d) = 0;
      iVar25 = *(int *)(unaff_EBP - 0xc4);
      if (iVar25 != 0) {
        *(int *)(unaff_EBP - 0xe8) = *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar34 * 0x14) + -1;
      }
      unaff_ESI = *(int **)(unaff_EBP - 0xd8);
      *(int *)(*(int *)(unaff_EBP - 0xcc) + 0x4c) = iVar25;
    }
    goto LAB_004b0d0b;
  case 0x37:
    iVar13 = *(int *)(*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
                     *(int *)(iVar25 + 4 + iVar34 * 0x14) * 4);
    unaff_ESI[4] = *(int *)(iVar13 + 0x30);
    unaff_ESI[5] = *(int *)(iVar13 + 0x34);
    iVar34 = *(int *)(*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
                     *(int *)(iVar25 + 4 + iVar34 * 0x14) * 4);
    puVar18 = (uint *)(iVar34 + 0x30);
    uVar27 = *puVar18;
    *puVar18 = *puVar18 + 1;
    piVar19 = (int *)(iVar34 + 0x34);
    *piVar19 = *piVar19 + (uint)(0xfffffffe < uVar27);
    goto LAB_004b0d0b;
  case 0x38:
    iVar13 = *(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40);
    *(undefined8 *)(unaff_EBP - 0xcc) = 0;
    *(undefined4 *)(unaff_EBP - 0xc0) = 0;
    piVar19 = *(int **)(iVar13 + *(int *)(iVar25 + 4 + iVar34 * 0x14) * 4);
    *(int **)(unaff_EBP - 0xc4) = piVar19;
    iVar25 = *piVar19;
    if (iVar25 == 0) goto LAB_004b2ff3;
    if (*(char *)((int)piVar19 + 0x1b) != '\0') goto LAB_004b2ed4;
    uVar27 = *(uint *)(iVar25 + 0x20);
    *(uint *)(unaff_EBP - 0xcc) = uVar27;
    iVar25 = *(int *)(iVar25 + 0x24);
    *(int *)(unaff_EBP - 200) = iVar25;
    if (uVar27 == 0 && iVar25 == 0) {
      uVar27 = FUN_004906f0((int *)*piVar19,(undefined4 *)(unaff_EBP - 0xc0));
      *(uint *)(unaff_EBP - 0xd0) = uVar27;
      if (uVar27 != 0) goto LAB_004b572c;
      if (*(int *)(unaff_EBP - 0xc0) == 0) {
        uVar26 = FUN_004906b0(**(int **)(unaff_EBP - 0xc4),(undefined4 *)(unaff_EBP - 0xcc));
        iVar25 = *(int *)(unaff_EBP - 200);
        uVar27 = *(uint *)(unaff_EBP - 0xcc);
        *(undefined4 *)(unaff_EBP - 0xd0) = uVar26;
        if ((iVar25 < 0x7fffffff) || (uVar27 != 0xffffffff)) {
          iVar25 = iVar25 + (uint)(0xfffffffe < uVar27);
          goto LAB_004b2d88;
        }
        *(undefined1 *)(*(int *)(unaff_EBP - 0xc4) + 0x1b) = 1;
        iVar25 = *(int *)(unaff_EBP - 200);
        uVar27 = *(uint *)(unaff_EBP - 0xcc);
      }
      else {
        iVar25 = 0;
        uVar27 = 0;
LAB_004b2d88:
        uVar27 = uVar27 + 1;
        *(int *)(unaff_EBP - 200) = iVar25;
        *(uint *)(unaff_EBP - 0xcc) = uVar27;
      }
      piVar19 = *(int **)(unaff_EBP - 0xc4);
    }
    iVar13 = *(int *)(*(int *)(unaff_EBP - 0xdc) + 0xc + iVar34 * 0x14);
    if (iVar13 == 0) goto LAB_004b2e8a;
    iVar25 = *(int *)(*(int *)(unaff_EBP - 0xd4) + 0xa0);
    if (iVar25 == 0) {
      iVar34 = *(int *)(unaff_EBP - 0xe0) + iVar13 * 0x28;
    }
    else {
      *(int *)(unaff_EBP - 0xb4) = iVar25;
      for (iVar13 = *(int *)(iVar25 + 4); iVar13 != 0; iVar13 = *(int *)(iVar13 + 4)) {
        *(int *)(unaff_EBP - 0xb4) = iVar13;
        iVar25 = iVar13;
      }
      iVar34 = *(int *)(iVar25 + 0xc) +
               *(int *)(*(int *)(unaff_EBP - 0xdc) + 0xc + iVar34 * 0x14) * 0x28;
    }
    *(int *)(unaff_EBP - 0xb8) = iVar34;
    FUN_004b7410(iVar34);
    iVar34 = *(int *)(unaff_EBP - 0xb8);
    uVar27 = *(uint *)(iVar34 + 0x10);
    if (((uVar27 == 0xffffffff) && (*(int *)(iVar34 + 0x14) == 0x7fffffff)) ||
       (*(char *)(*(int *)(unaff_EBP - 0xc4) + 0x1b) != '\0')) {
LAB_004b573f:
      uVar27 = 0xd;
      *(undefined4 *)(unaff_EBP - 0xd0) = 0xd;
LAB_004b572c:
      if ((char)unaff_EBX[0xe] == '\0') {
        if (uVar27 != 0xc0a) goto LAB_004b5753;
      }
      else {
        uVar27 = 7;
        *(undefined4 *)(unaff_EBP - 0xd0) = 7;
LAB_004b5753:
        FUN_004961c0(uVar27);
        FUN_004a9a30((int *)(*(int *)(unaff_EBP - 0xd4) + 0x34),(int)unaff_EBX,&DAT_0056de50);
        uVar27 = *(uint *)(unaff_EBP - 0xd0);
      }
      goto LAB_004b57cd;
    }
    uVar31 = uVar27 + 1;
    iVar25 = *(int *)(iVar34 + 0x14) + (uint)(0xfffffffe < uVar27);
    if (iVar25 < *(int *)(unaff_EBP - 200)) {
      uVar27 = *(uint *)(unaff_EBP - 0xcc);
    }
    else if ((*(int *)(unaff_EBP - 200) < iVar25) ||
            (uVar27 = *(uint *)(unaff_EBP - 0xcc), *(uint *)(unaff_EBP - 0xcc) < uVar31)) {
      *(uint *)(unaff_EBP - 0xcc) = uVar31;
      *(int *)(unaff_EBP - 200) = iVar25;
      uVar27 = uVar31;
    }
    *(uint *)(iVar34 + 0x10) = uVar27;
    *(undefined4 *)(iVar34 + 0x14) = *(undefined4 *)(unaff_EBP - 200);
    piVar19 = *(int **)(unaff_EBP - 0xc4);
    iVar25 = *(int *)(unaff_EBP - 200);
    uVar27 = *(uint *)(unaff_EBP - 0xcc);
LAB_004b2e8a:
    if ((iVar25 < 0x7fffffff) || (uVar27 != 0xffffffff)) {
      iVar34 = uVar27 + 1;
      iVar25 = iVar25 + (uint)(0xfffffffe < uVar27);
    }
    else {
      *(undefined8 *)(unaff_EBP - 300) = 0;
      iVar25 = *(int *)(unaff_EBP - 0x128);
      iVar34 = *(int *)(unaff_EBP - 300);
    }
    FUN_00491bc0(*piVar19,iVar34,iVar25);
    piVar19 = *(int **)(unaff_EBP - 0xc4);
    if (*(char *)((int)piVar19 + 0x1b) != '\0') {
LAB_004b2ed4:
      uVar27 = *(uint *)(unaff_EBP - 0x100) + 1;
      iVar34 = (*(uint *)(unaff_EBP - 0xfc) & 0x3fffffff) +
               (uint)(0xfffffffe < *(uint *)(unaff_EBP - 0x100));
      *(uint *)(unaff_EBP - 0xcc) = uVar27;
      *(int *)(unaff_EBP - 200) = iVar34;
      *(undefined4 *)(unaff_EBP - 0xbc) = 0;
      uVar27 = FUN_004908e0((int *)*piVar19,(int *)0x0,uVar27,iVar34,0,(uint *)(unaff_EBP - 0xc0));
      *(uint *)(unaff_EBP - 0xd0) = uVar27;
      while (uVar27 == 0) {
        iVar34 = *(int *)(unaff_EBP - 0xc0);
        if ((iVar34 != 0) ||
           (iVar25 = *(int *)(unaff_EBP - 0xbc) + 1, *(int *)(unaff_EBP - 0xbc) = iVar25,
           99 < iVar25)) {
          if (iVar34 == 0) goto LAB_004b573f;
          break;
        }
        FUN_00466fa0(8,(undefined1 *)(unaff_EBP - 0xcc));
        uVar27 = *(uint *)(unaff_EBP - 0xcc);
        if (*(int *)(unaff_EBP - 0xbc) < 5) {
          uVar27 = uVar27 & 0xffffff;
          uVar31 = 0;
        }
        else {
          uVar31 = *(uint *)(unaff_EBP - 200) & 0x3fffffff;
        }
        iVar34 = uVar31 + (0xfffffffe < uVar27);
        *(uint *)(unaff_EBP - 0xcc) = uVar27 + 1;
        puVar24 = *(undefined4 **)(unaff_EBP - 0xc4);
        *(int *)(unaff_EBP - 200) = iVar34;
        uVar27 = FUN_004908e0((int *)*puVar24,(int *)0x0,uVar27 + 1,iVar34,0,
                              (uint *)(unaff_EBP - 0xc0));
        *(uint *)(unaff_EBP - 0xd0) = uVar27;
      }
      piVar19 = *(int **)(unaff_EBP - 0xc4);
    }
    *(undefined1 *)((int)piVar19 + 0x19) = 0;
    *(undefined1 *)(*(int *)(unaff_EBP - 0xc4) + 0x1d) = 0;
    *(undefined4 *)(*(int *)(unaff_EBP - 0xc4) + 0x50) = 0;
LAB_004b2ff3:
    unaff_ESI = *(int **)(unaff_EBP - 0xd8);
    unaff_ESI[4] = *(int *)(unaff_EBP - 0xcc);
    unaff_ESI[5] = *(int *)(unaff_EBP - 200);
    goto LAB_004b0d0b;
  case 0x39:
  case 0x3a:
    iVar13 = *(int *)(unaff_EBP - 0xe0) + *(int *)(iVar25 + 8 + iVar34 * 0x14) * 0x28;
    iVar21 = *(int *)(unaff_EBP - 0xd4);
    *(int *)(unaff_EBP - 0xcc) = iVar13;
    piVar19 = *(int **)(*(int *)(iVar21 + 0x40) + *(int *)(iVar25 + 4 + iVar34 * 0x14) * 4);
    *(int **)(unaff_EBP - 0xbc) = piVar19;
    iVar21 = *(int *)(iVar25 + 0xc + iVar34 * 0x14);
    if (*(char *)(iVar25 + iVar34 * 0x14) == '9') {
      iVar25 = *(int *)(unaff_EBP - 0xe0) + iVar21 * 0x28;
      *(int *)(unaff_EBP - 200) = iVar25;
      iVar21 = *(int *)(iVar25 + 0x10);
      *(int *)(unaff_EBP - 0xc4) = iVar21;
      iVar25 = *(int *)(iVar25 + 0x14);
    }
    else {
      iVar25 = iVar21 >> 0x1f;
      *(int *)(unaff_EBP - 0xc4) = iVar21;
    }
    iVar14 = *(int *)(unaff_EBP - 0xdc);
    *(int *)(unaff_EBP - 0xc0) = iVar25;
    if ((*(byte *)(iVar14 + 3 + iVar34 * 0x14) & 1) != 0) {
      piVar29 = (int *)(*(int *)(unaff_EBP - 0xd4) + 100);
      *piVar29 = *piVar29 + 1;
      iVar14 = *(int *)(unaff_EBP - 0xdc);
    }
    if ((*(byte *)(iVar14 + 3 + iVar34 * 0x14) & 2) != 0) {
      *(int *)(unaff_EBP - 0xfc) = iVar25;
      iVar25 = *(int *)(unaff_EBP - 0xe4);
      *(int *)(unaff_EBP - 0x100) = iVar21;
      *(int *)(iVar25 + 0x20) = iVar21;
      *(undefined4 *)(iVar25 + 0x24) = *(undefined4 *)(unaff_EBP - 0xc0);
      piVar19 = *(int **)(unaff_EBP - 0xbc);
      iVar13 = *(int *)(unaff_EBP - 0xcc);
    }
    if ((*(byte *)(iVar13 + 0x1c) & 1) != 0) {
      *(undefined4 *)(iVar13 + 4) = 0;
      *(undefined4 *)(*(int *)(unaff_EBP - 0xcc) + 0x18) = 0;
      piVar19 = *(int **)(unaff_EBP - 0xbc);
      iVar13 = *(int *)(unaff_EBP - 0xcc);
    }
    if ((*(byte *)(*(int *)(unaff_EBP - 0xdc) + 3 + iVar34 * 0x14) & 0x10) == 0) {
      *(undefined4 *)(unaff_EBP - 0xb4) = 0;
    }
    else {
      *(int *)(unaff_EBP - 0xb4) = piVar19[0x13];
    }
    if ((*(ushort *)(iVar13 + 0x1c) & 0x4000) == 0) {
      *(undefined4 *)(unaff_EBP - 0xb8) = 0;
    }
    else {
      *(undefined4 *)(unaff_EBP - 0xb8) = *(undefined4 *)(iVar13 + 0x10);
    }
    FUN_00491bc0(*piVar19,0,0);
    iVar25 = *(int *)(unaff_EBP - 0xdc);
    puVar18 = FUN_0048ffe0((uint *)**(undefined4 **)(unaff_EBP - 0xbc),(byte *)0x0,
                           *(uint *)(unaff_EBP - 0xc4),*(uint *)(unaff_EBP - 0xc0),
                           *(void **)(*(int *)(unaff_EBP - 0xcc) + 4),
                           *(size_t *)(*(int *)(unaff_EBP - 0xcc) + 0x18),
                           *(size_t *)(unaff_EBP - 0xb8),*(byte *)(iVar25 + 3 + iVar34 * 0x14) & 8,
                           *(uint **)(unaff_EBP - 0xb4));
    *(undefined1 *)(*(int *)(unaff_EBP - 0xbc) + 0x19) = 0;
    iVar13 = *(int *)(unaff_EBP - 0xbc);
    *(uint **)(unaff_EBP - 0xd0) = puVar18;
    *(undefined1 *)(iVar13 + 0x1d) = 0;
    unaff_EBX = *(int **)(unaff_EBP - 0xe4);
    *(undefined4 *)(*(int *)(unaff_EBP - 0xbc) + 0x50) = 0;
    if (((puVar18 != (uint *)0x0) || (unaff_EBX[0x2f] == 0)) ||
       (*(int *)(iVar25 + 0x10 + iVar34 * 0x14) == 0)) goto LAB_004af570;
    uVar26 = *(undefined4 *)(unaff_EBP - 0xc4);
    uVar6 = *(undefined4 *)(unaff_EBX[4] + *(int *)(*(int *)(unaff_EBP - 0xbc) + 0xc) * 0x10);
    *(undefined4 *)(unaff_EBP - 0xb0) = uVar6;
    uVar7 = *(undefined4 *)(iVar25 + 0x10 + iVar34 * 0x14);
    *(undefined4 *)(unaff_EBP - 0xac) = uVar7;
    uVar16 = 0x12;
    if ((*(byte *)(iVar25 + 3 + iVar34 * 0x14) & 4) != 0) {
      uVar16 = 0x17;
    }
    *(undefined4 *)(unaff_EBP - 0xa8) = uVar16;
    (*(code *)unaff_EBX[0x2f])(unaff_EBX[0x2e],uVar16,uVar6,uVar7,uVar26);
    unaff_ESI = *(int **)(unaff_EBP - 0xd8);
    goto LAB_004b0d0b;
  case 0x3b:
    iVar13 = *(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40);
    *(undefined8 *)(unaff_EBP - 0xcc) = 0;
    puVar24 = *(undefined4 **)(iVar13 + *(int *)(iVar25 + 4 + iVar34 * 0x14) * 4);
    *(undefined4 **)(unaff_EBP - 0xc4) = puVar24;
    if ((unaff_EBX[0x2f] != 0) && (*(int *)(iVar25 + 0x10 + iVar34 * 0x14) != 0)) {
      *(undefined4 *)(unaff_EBP - 0xcc) = puVar24[0x10];
      *(undefined4 *)(unaff_EBP - 200) = puVar24[0x11];
    }
    uVar27 = FUN_004af1b0(puVar24);
    *(uint *)(unaff_EBP - 0xd0) = uVar27;
    if (uVar27 != 0) goto LAB_004b572c;
    FUN_00491bc0(**(int **)(unaff_EBP - 0xc4),0,0);
    uVar27 = FUN_0048f930((uint *)**(undefined4 **)(unaff_EBP - 0xc4));
    *(uint *)(unaff_EBP - 0xd0) = uVar27;
    iVar25 = *(int *)(unaff_EBP - 0xd0);
    *(undefined4 *)(*(int *)(unaff_EBP - 0xc4) + 0x50) = 0;
    if (((iVar25 == 0) && ((code *)unaff_EBX[0x2f] != (code *)0x0)) &&
       (iVar25 = *(int *)(*(int *)(unaff_EBP - 0xdc) + 0x10 + iVar34 * 0x14), iVar25 != 0)) {
      (*(code *)unaff_EBX[0x2f])
                (unaff_EBX[0x2e],9,
                 *(undefined4 *)(unaff_EBX[4] + *(int *)(*(int *)(unaff_EBP - 0xc4) + 0xc) * 0x10),
                 iVar25,*(undefined4 *)(unaff_EBP - 0xcc));
    }
    if ((*(byte *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar34 * 0x14) & 1) != 0) {
      piVar19 = (int *)(*(int *)(unaff_EBP - 0xd4) + 100);
      *piVar19 = *piVar19 + 1;
    }
    goto LAB_004b0d0b;
  case 0x3c:
    iVar34 = *(int *)(*(int *)(unaff_EBP - 0xd4) + 100);
    unaff_EBX[0x13] = unaff_EBX[0x13] + iVar34;
    unaff_EBX[0x12] = iVar34;
    *(undefined4 *)(*(int *)(unaff_EBP - 0xd4) + 100) = 0;
    goto LAB_004b0d0b;
  case 0x3d:
    iVar13 = *(int *)(*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
                     *(int *)(iVar25 + 4 + iVar34 * 0x14) * 4);
    *(int *)(unaff_EBP - 0xcc) = iVar13;
    uVar27 = FUN_004b8dd0(iVar13,*(int *)(unaff_EBP - 0xe0) +
                                 *(int *)(iVar25 + 0xc + iVar34 * 0x14) * 0x28,
                          (uint *)(unaff_EBP - 200));
    iVar25 = *(int *)(unaff_EBP - 200);
    *(uint *)(unaff_EBP - 0xd0) = uVar27;
    if (iVar25 != 0) {
      iVar34 = *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar34 * 0x14);
      goto LAB_004b0d04;
    }
    goto LAB_004b0d11;
  case 0x3e:
    unaff_ESI = (int *)(*(int *)(unaff_EBP - 0xe0) + *(int *)(iVar25 + 8 + iVar34 * 0x14) * 0x28);
    iVar34 = *(int *)(*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
                     *(int *)(iVar25 + 4 + iVar34 * 0x14) * 4);
    *(int **)(unaff_EBP - 0xd8) = unaff_ESI;
    *(int *)(unaff_EBP - 0xcc) = iVar34;
    uVar27 = FUN_004b92e0(iVar34,unaff_ESI);
    *(uint *)(unaff_EBP - 0xd0) = uVar27;
    goto LAB_004b0d11;
  case 0x3f:
  case 0x40:
    iVar13 = *(int *)(iVar25 + 4 + iVar34 * 0x14);
    *(int *)(unaff_EBP - 0xd8) =
         *(int *)(unaff_EBP - 0xe0) + *(int *)(iVar25 + 8 + iVar34 * 0x14) * 0x28;
    puVar24 = *(undefined4 **)(*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) + iVar13 * 4);
    *(undefined4 **)(unaff_EBP - 0xcc) = puVar24;
    *(undefined4 *)(unaff_EBP - 200) = *puVar24;
    uVar27 = FUN_004af1b0(puVar24);
    *(uint *)(unaff_EBP - 0xd0) = uVar27;
    if (uVar27 != 0) goto LAB_004b572c;
    if (*(char *)(*(int *)(unaff_EBP - 0xcc) + 0x1f) == '\0') {
      FUN_0048f8d0(*(int *)(unaff_EBP - 200),(undefined4 *)(unaff_EBP - 0xc4));
      uVar27 = *(uint *)(unaff_EBP - 0xc4);
      if ((uint)unaff_EBX[0x14] < uVar27) goto LAB_004b5780;
    }
    else {
      FUN_004906b0(*(int *)(unaff_EBP - 200),(undefined4 *)(unaff_EBP - 0xbc));
      iVar34 = unaff_EBX[0x14] >> 0x1f;
      if ((iVar34 < *(int *)(unaff_EBP - 0xb8)) ||
         ((uVar27 = *(uint *)(unaff_EBP - 0xbc), iVar34 <= *(int *)(unaff_EBP - 0xb8) &&
          ((uint)unaff_EBX[0x14] < uVar27)))) goto LAB_004b5780;
      *(uint *)(unaff_EBP - 0xc4) = uVar27;
    }
    piVar19 = *(int **)(unaff_EBP - 0xd8);
    iVar34 = FUN_004b7260(piVar19,uVar27,0);
    if (iVar34 != 0) goto LAB_004b57a6;
    piVar19[6] = *(int *)(unaff_EBP - 0xc4);
    *(ushort *)(piVar19 + 7) = *(ushort *)(piVar19 + 7) & 0xbe10 | 0x10;
    if (*(char *)(*(int *)(unaff_EBP - 0xcc) + 0x1f) == '\0') {
      uVar27 = FUN_0048f870(*(int **)(unaff_EBP - 200),0,*(size_t *)(unaff_EBP - 0xc4),
                            (void *)piVar19[1]);
      unaff_ESI = *(int **)(unaff_EBP - 0xd8);
      *(uint *)(unaff_EBP - 0xd0) = uVar27;
      *(undefined1 *)((int)piVar19 + 0x1f) = 1;
    }
    else {
      uVar27 = FUN_0046b2f0(*(int *)(unaff_EBP - 200),0,*(size_t *)(unaff_EBP - 0xc4),
                            (void *)piVar19[1],0);
      *(uint *)(unaff_EBP - 0xd0) = uVar27;
      *(undefined1 *)((int)piVar19 + 0x1f) = 1;
      unaff_ESI = piVar19;
    }
    goto LAB_004b0d11;
  case 0x41:
    puVar24 = *(undefined4 **)
               (*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
               *(int *)(iVar25 + 4 + iVar34 * 0x14) * 4);
    *(undefined4 **)(unaff_EBP - 0xcc) = puVar24;
    if (*(char *)(puVar24 + 7) != '\0') {
      *(undefined2 *)(unaff_ESI + 7) = 1;
      goto LAB_004b0d0b;
    }
    if (*(char *)((int)puVar24 + 0x1d) != '\0') {
      *(undefined4 *)(unaff_EBP - 0xc4) = puVar24[0xe];
      *(undefined4 *)(unaff_EBP - 0xc0) = puVar24[0xf];
      unaff_ESI[4] = *(int *)(unaff_EBP - 0xc4);
      unaff_ESI[5] = *(int *)(unaff_EBP - 0xc0);
      goto LAB_004b0d0b;
    }
    if ((undefined4 *)puVar24[9] == (undefined4 *)0x0) {
      uVar27 = FUN_004af1b0(puVar24);
      *(uint *)(unaff_EBP - 0xd0) = uVar27;
      if (uVar27 != 0) goto LAB_004b572c;
      piVar19 = *(int **)(unaff_EBP - 0xcc);
      if (*(char *)((int)piVar19 + 0x19) == '\0') {
        uVar26 = FUN_004906b0(*piVar19,(undefined4 *)(unaff_EBP - 0xc4));
        *(undefined4 *)(unaff_EBP - 0xd0) = uVar26;
        unaff_ESI[4] = *(int *)(unaff_EBP - 0xc4);
        unaff_ESI[5] = *(int *)(unaff_EBP - 0xc0);
      }
      else {
        *(int *)(unaff_EBP - 0xc4) = piVar19[0x10];
        *(int *)(unaff_EBP - 0xc0) = piVar19[0x11];
        unaff_ESI[4] = *(int *)(unaff_EBP - 0xc4);
        unaff_ESI[5] = *(int *)(unaff_EBP - 0xc0);
      }
    }
    else {
      piVar19 = *(int **)puVar24[9];
      *(int **)(unaff_EBP - 0xbc) = piVar19;
      iVar34 = *piVar19;
      *(int *)(unaff_EBP - 0xb8) = iVar34;
      uVar26 = (**(code **)(iVar34 + 0x30))(puVar24[9]);
      iVar34 = *(int *)(unaff_EBP - 0xbc);
      *(undefined4 *)(unaff_EBP - 0xd0) = uVar26;
      FUN_0047e200(*(int **)(unaff_EBP - 0xd4),iVar34);
      unaff_ESI[4] = *(int *)(unaff_EBP - 0xc4);
      unaff_ESI[5] = *(int *)(unaff_EBP - 0xc0);
    }
    goto LAB_004b0d0b;
  case 0x42:
    iVar34 = *(int *)(*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
                     *(int *)(iVar25 + 4 + iVar34 * 0x14) * 4);
    *(int *)(unaff_EBP - 0xcc) = iVar34;
    *(undefined1 *)(iVar34 + 0x1c) = 1;
    *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + 0x19) = 0;
    if (**(int **)(unaff_EBP - 0xcc) != 0) {
      FUN_0048efd0(**(int **)(unaff_EBP - 0xcc));
    }
    goto LAB_004b0d0b;
  case 0x43:
    puVar24 = *(undefined4 **)
               (*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
               *(int *)(iVar25 + 4 + iVar34 * 0x14) * 4);
    *(undefined4 **)(unaff_EBP - 0xcc) = puVar24;
    piVar19 = (int *)*puVar24;
    *(int **)(unaff_EBP - 200) = piVar19;
    *(undefined4 *)(unaff_EBP - 0xc4) = 0;
    if (piVar19 != (int *)0x0) {
      iVar13 = FUN_004906f0(piVar19,(undefined4 *)(unaff_EBP - 0xc4));
      puVar24 = *(undefined4 **)(unaff_EBP - 0xcc);
      iVar25 = *(int *)(unaff_EBP - 0xdc);
      *(int *)(unaff_EBP - 0xd0) = iVar13;
    }
    *(undefined1 *)(puVar24 + 7) = *(undefined1 *)(unaff_EBP - 0xc4);
    *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + 0x1d) = 0;
    *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + 0x19) = 0;
    *(undefined4 *)(*(int *)(unaff_EBP - 0xcc) + 0x50) = 0;
    iVar34 = *(int *)(iVar25 + 8 + iVar34 * 0x14);
    if ((iVar34 < 1) || (*(int *)(unaff_EBP - 0xc4) == 0)) goto LAB_004b0d0b;
    goto LAB_004b0d04;
  case 0x44:
  case 0x45:
    iVar13 = *(int *)(iVar25 + 4 + iVar34 * 0x14);
    iVar21 = *(int *)(unaff_EBP - 0xe0);
    if ((*(byte *)(iVar21 + 0x1c + iVar13 * 0x28) & 1) == 0) {
      uVar39 = FUN_004b65e0(iVar21 + iVar13 * 0x28);
      iVar25 = *(int *)(unaff_EBP - 0xdc);
      if (uVar39 == 0) {
        iVar13 = 0;
      }
      else {
        iVar13 = 1;
      }
    }
    else {
      iVar13 = 2;
    }
    *(int *)(unaff_EBP - 0xcc) = iVar13;
    iVar14 = *(int *)(iVar25 + 8 + iVar34 * 0x14);
    if ((*(byte *)(iVar21 + 0x1c + iVar14 * 0x28) & 1) == 0) {
      uVar39 = FUN_004b65e0(iVar21 + iVar14 * 0x28);
      iVar13 = *(int *)(unaff_EBP - 0xcc);
      iVar25 = *(int *)(unaff_EBP - 0xdc);
      if (uVar39 == 0) {
        iVar14 = 0;
      }
      else {
        iVar14 = 1;
      }
    }
    else {
      iVar14 = 2;
    }
    *(int *)(unaff_EBP - 200) = iVar14;
    iVar14 = iVar14 + iVar13 * 2;
    if (*(char *)(iVar25 + iVar34 * 0x14) == 'E') {
      bVar9 = (&UNK_0056a1cc)[iVar14 + iVar13];
    }
    else {
      bVar9 = (&UNK_0056a284)[iVar14 + iVar13];
    }
    uVar27 = (uint)bVar9;
    *(uint *)(unaff_EBP - 0xcc) = uVar27;
    unaff_ESI = (int *)(iVar21 + *(int *)(iVar25 + 0xc + iVar34 * 0x14) * 0x28);
    *(int **)(unaff_EBP - 0xd8) = unaff_ESI;
    if (uVar27 == 2) {
      *(ushort *)(unaff_ESI + 7) = *(ushort *)(unaff_ESI + 7) & 0xbe01 | 1;
    }
    else {
      unaff_ESI[4] = uVar27;
      unaff_ESI[5] = 0;
      *(ushort *)(unaff_ESI + 7) = *(ushort *)(unaff_ESI + 7) & 0xbe04 | 4;
    }
    goto LAB_004b0d0b;
  case 0x46:
  case 0x47:
    iVar13 = *(int *)(unaff_EBP - 0xd4);
    *(int *)(iVar13 + 0x78) = *(int *)(iVar13 + 0x78) + 1;
    goto LAB_004b3746;
  case 0x48:
    iVar13 = *(int *)(unaff_EBP - 0xd4);
LAB_004b3746:
    puVar24 = *(undefined4 **)(*(int *)(iVar13 + 0x40) + *(int *)(iVar25 + 4 + iVar34 * 0x14) * 4);
    *(undefined4 **)(unaff_EBP - 0xcc) = puVar24;
    *(undefined4 *)(unaff_EBP - 0xc4) = 1;
    if (puVar24[0x12] == 0) {
      piVar19 = (int *)*puVar24;
      *(int **)(unaff_EBP - 200) = piVar19;
      uVar26 = FUN_0048fdc0(piVar19,(uint *)(unaff_EBP - 0xc4));
      *(undefined4 *)(unaff_EBP - 0xd0) = uVar26;
      *(bool *)(*(int *)(unaff_EBP - 0xcc) + 0x1a) = *(int *)(unaff_EBP - 0xc4) == 0;
      *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + 0x1d) = 0;
      *(undefined4 *)(*(int *)(unaff_EBP - 0xcc) + 0x50) = 0;
      *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + 0x19) = 0;
      *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + 0x1c) = *(undefined1 *)(unaff_EBP - 0xc4);
      bVar11 = *(int *)(unaff_EBP - 0xc4) == 0;
    }
    else {
      uVar26 = FUN_004b9000(unaff_EBX,(int)puVar24,(uint *)(unaff_EBP - 0xc4));
      uVar10 = *(undefined1 *)(unaff_EBP - 0xc4);
      *(undefined4 *)(unaff_EBP - 0xd0) = uVar26;
      *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + 0x1c) = uVar10;
      bVar11 = *(int *)(unaff_EBP - 0xc4) == 0;
    }
LAB_004b07bb:
    if (bVar11) goto LAB_004b0d0b;
    iVar34 = *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar34 * 0x14);
    goto LAB_004b0d04;
  case 0x49:
    if ((*(byte *)(*(int *)(unaff_EBP - 0xe0) + 0x1c + *(int *)(iVar25 + 4 + iVar34 * 0x14) * 0x28)
        & 1) == 0) goto LAB_004b0d0b;
    break;
  case 0x4a:
    bVar11 = (*(byte *)(*(int *)(unaff_EBP - 0xe0) + 0x1c +
                       *(int *)(iVar25 + 4 + iVar34 * 0x14) * 0x28) & 1) == 0;
    goto LAB_004b0cfe;
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
    piVar19 = (int *)(*(int *)(unaff_EBP - 0xe0) + *(int *)(iVar25 + 4 + iVar34 * 0x14) * 0x28);
    piVar29 = (int *)(*(int *)(unaff_EBP - 0xe0) + *(int *)(iVar25 + 0xc + iVar34 * 0x14) * 0x28);
    *(short *)(unaff_EBP - 0xc6) = (short)piVar19[7];
    uVar4 = *(ushort *)(piVar29 + 7);
    bVar9 = *(byte *)(unaff_EBP - 0xc6);
    *(ushort *)(unaff_EBP - 0xc4) = uVar4;
    bVar3 = *(byte *)(*(int *)(unaff_EBP - 0xdc) + 3 + iVar34 * 0x14);
    if ((((byte)uVar4 | bVar9) & 1) == 0) {
      *(byte *)(unaff_EBP - 200) = bVar3 & 0x67;
      if ((bVar3 & 0x67) != 0) {
        FUN_004ae250(piVar19,(char)*(undefined4 *)(unaff_EBP - 200),
                     (byte)*(undefined4 *)(unaff_EBP - 0xec));
        FUN_004ae250(piVar29,(char)*(undefined4 *)(unaff_EBP - 200),
                     (byte)*(undefined4 *)(unaff_EBP - 0xec));
        unaff_EBX = *(int **)(unaff_EBP - 0xe4);
        if ((char)unaff_EBX[0xe] != '\0') goto LAB_004b57a6;
      }
      if ((*(ushort *)(piVar19 + 7) & 0x4000) != 0) {
        FUN_004b6fa0(piVar19);
      }
      if ((*(ushort *)(piVar29 + 7) & 0x4000) != 0) {
        FUN_004b6fa0(piVar29);
      }
      uVar27 = FUN_004a0720((undefined8 *)piVar29,(undefined8 *)piVar19,
                            *(int *)(*(int *)(unaff_EBP - 0xdc) + 0x10 + iVar34 * 0x14));
    }
    else {
      if (-1 < (char)bVar3) {
        unaff_EBX = *(int **)(unaff_EBP - 0xe4);
        if ((bVar3 & 0x10) == 0) {
          bVar11 = (bVar3 & 8) == 0;
          goto LAB_004b07b5;
        }
        unaff_ESI = (int *)(*(int *)(unaff_EBP - 0xe0) +
                           *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar34 * 0x14) * 0x28);
        uVar4 = *(ushort *)(unaff_ESI + 7);
        *(int **)(unaff_EBP - 0xd8) = unaff_ESI;
        *(ushort *)(unaff_ESI + 7) = uVar4 & 0xbe01 | 1;
        goto LAB_004b0d0b;
      }
      if ((((bVar9 & 1) == 0) || ((uVar4 & 1) == 0)) || ((*(uint *)(unaff_EBP - 0xc4) & 0x100) != 0)
         ) {
        uVar27 = 1;
      }
      else {
        uVar27 = 0;
      }
    }
    iVar25 = *(int *)(unaff_EBP - 0xdc);
    *(uint *)(unaff_EBP - 0xcc) = uVar27;
    switch(*(undefined1 *)(iVar25 + iVar34 * 0x14)) {
    case 0x4b:
      uVar27 = (uint)(uVar27 != 0);
      break;
    case 0x4c:
      uVar27 = (uint)(uVar27 == 0);
      break;
    case 0x4d:
      uVar27 = (uint)(0 < (int)uVar27);
      break;
    case 0x4e:
      uVar27 = (uint)((int)uVar27 < 1);
      break;
    case 0x4f:
      uVar27 = (uint)((int)uVar27 < 0);
      break;
    default:
      uVar27 = (uint)(-1 < (int)uVar27);
    }
    iVar25 = *(int *)(unaff_EBP - 0xdc);
    *(uint *)(unaff_EBP - 0xcc) = uVar27;
    if ((*(byte *)(iVar25 + 3 + iVar34 * 0x14) & 0x10) == 0) {
      if (uVar27 != 0) {
        *(int *)(unaff_EBP - 0xe8) = *(int *)(iVar25 + 8 + iVar34 * 0x14) + -1;
      }
    }
    else {
      iVar34 = *(int *)(unaff_EBP - 0xe0) + *(int *)(iVar25 + 8 + iVar34 * 0x14) * 0x28;
      *(int *)(unaff_EBP - 0xd8) = iVar34;
      *(ushort *)(iVar34 + 0x1c) = *(ushort *)(iVar34 + 0x1c) & 0xbe04 | 4;
      iVar25 = *(int *)(unaff_EBP - 0xcc);
      *(int *)(iVar34 + 0x10) = iVar25;
      *(int *)(iVar34 + 0x14) = iVar25 >> 0x1f;
    }
    *(ushort *)(piVar19 + 7) =
         *(ushort *)(piVar19 + 7) ^
         (*(ushort *)(piVar19 + 7) ^ *(ushort *)(unaff_EBP - 0xc6)) & 0x1ff;
    unaff_ESI = *(int **)(unaff_EBP - 0xd8);
    *(ushort *)(piVar29 + 7) =
         *(ushort *)(piVar29 + 7) ^
         (*(ushort *)(piVar29 + 7) ^ *(ushort *)(unaff_EBP - 0xc4)) & 0x1ff;
    unaff_EBX = *(int **)(unaff_EBP - 0xe4);
    goto LAB_004b0d0b;
  case 0x51:
  case 0x5c:
  case 0x5f:
    if (unaff_EBX[0x38] != 0) goto LAB_004af4ee;
    puVar24 = *(undefined4 **)
               (*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
               *(int *)(iVar25 + 4 + iVar34 * 0x14) * 4);
    *(undefined4 **)(unaff_EBP - 0xcc) = puVar24;
    if (puVar24 != (undefined4 *)0x0) {
      if (puVar24[0x12] == 0) {
        *(undefined4 *)(unaff_EBP - 200) = 1;
        iVar25 = (**(code **)(iVar25 + 0x10 + iVar34 * 0x14))(*puVar24);
      }
      else {
        iVar25 = FUN_004b8f40((int)unaff_EBX,(int)puVar24,(uint *)(unaff_EBP - 200));
      }
      iVar13 = *(int *)(unaff_EBP - 0xcc);
      *(int *)(unaff_EBP - 0xd0) = iVar25;
      *(undefined1 *)(iVar13 + 0x1c) = *(undefined1 *)(unaff_EBP - 200);
      *(undefined4 *)(*(int *)(unaff_EBP - 0xcc) + 0x50) = 0;
      if (*(int *)(unaff_EBP - 200) == 0) {
        bVar9 = *(byte *)(*(int *)(unaff_EBP - 0xdc) + 3 + iVar34 * 0x14);
        *(int *)(unaff_EBP - 0xe8) = *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar34 * 0x14) + -1;
        if (bVar9 != 0) {
          piVar19 = (int *)(*(int *)(unaff_EBP - 0xd4) + 0x70 + (uint)bVar9 * 4);
          *piVar19 = *piVar19 + 1;
        }
      }
      *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + 0x19) = 0;
    }
    goto LAB_004b0d0b;
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
    iVar13 = *(int *)(unaff_EBP - 0xe0) + *(int *)(iVar25 + 4 + iVar34 * 0x14) * 0x28;
    iVar21 = *(int *)(unaff_EBP - 0xe0) + *(int *)(iVar25 + 8 + iVar34 * 0x14) * 0x28;
    *(int *)(unaff_EBP - 0xd8) =
         *(int *)(unaff_EBP - 0xe0) + *(int *)(iVar25 + 0xc + iVar34 * 0x14) * 0x28;
    if (((*(byte *)(iVar21 + 0x1c) | *(byte *)(iVar13 + 0x1c)) & 1) == 0) {
      uVar39 = FUN_004b65e0(iVar21);
      *(ulonglong *)(unaff_EBP - 0xcc) = uVar39;
      uVar39 = FUN_004b65e0(iVar13);
      uVar31 = (uint)(uVar39 >> 0x20);
      uVar27 = (uint)uVar39;
      iVar25 = *(int *)(unaff_EBP - 0xdc);
      *(ulonglong *)(unaff_EBP - 0xbc) = uVar39;
      cVar8 = *(char *)(iVar25 + iVar34 * 0x14);
      *(char *)(unaff_EBP - 0xb4) = cVar8;
      if (cVar8 == 'R') {
        uVar27 = *(uint *)(unaff_EBP - 0xcc) & uVar27;
        *(uint *)(unaff_EBP - 200) = *(uint *)(unaff_EBP - 200) & uVar31;
        *(uint *)(unaff_EBP - 0xcc) = uVar27;
      }
      else if (cVar8 == 'S') {
        uVar27 = *(uint *)(unaff_EBP - 0xcc) | uVar27;
        *(uint *)(unaff_EBP - 200) = *(uint *)(unaff_EBP - 200) | uVar31;
        *(uint *)(unaff_EBP - 0xcc) = uVar27;
      }
      else if (uVar39 == 0) {
        uVar27 = *(uint *)(unaff_EBP - 0xcc);
      }
      else {
        if (uVar31 == 0 || (longlong)uVar39 < 0) {
          if ((longlong)uVar39 < 0) {
            cVar8 = -0x57 - cVar8;
            *(char *)(unaff_EBP - 0xb4) = cVar8;
            if (((longlong)uVar39 < -0x100000000) ||
               ((0x7fffffffffffffff < uVar39 && (uVar27 < 0xffffffc1)))) {
              *(undefined4 *)(unaff_EBP - 0xbc) = 0x40;
              *(undefined4 *)(unaff_EBP - 0xb8) = 0;
              goto LAB_004b03ac;
            }
            iVar34 = -(uVar31 + (uVar27 != 0));
            uVar39 = CONCAT44(iVar34,-uVar27);
            *(uint *)(unaff_EBP - 0xbc) = -uVar27;
            *(int *)(unaff_EBP - 0xb8) = iVar34;
          }
          if ((longlong)uVar39 < 0x40) {
            if (cVar8 == 'T') {
              *(ulonglong *)(unaff_EBP - 0xc4) =
                   *(ulonglong *)(unaff_EBP - 0xcc) << (uVar39 & 0xffffffff);
              uVar27 = *(uint *)(unaff_EBP - 0xc4);
              uVar26 = *(undefined4 *)(unaff_EBP - 0xc0);
              *(uint *)(unaff_EBP - 0xcc) = uVar27;
              *(undefined4 *)(unaff_EBP - 200) = uVar26;
            }
            else {
              iVar34 = *(int *)(unaff_EBP - 200);
              *(ulonglong *)(unaff_EBP - 0xc4) =
                   *(ulonglong *)(unaff_EBP - 0xcc) >> (uVar39 & 0xffffffff);
              if ((iVar34 < 1) && (iVar34 < 0)) {
                lVar38 = __allshl(0x40 - (char)uVar39,-1);
                *(uint *)(unaff_EBP - 0xc4) = *(uint *)(unaff_EBP - 0xc4) | (uint)lVar38;
                *(uint *)(unaff_EBP - 0xc0) =
                     *(uint *)(unaff_EBP - 0xc0) | (uint)((ulonglong)lVar38 >> 0x20);
              }
              uVar27 = *(uint *)(unaff_EBP - 0xc4);
              uVar26 = *(undefined4 *)(unaff_EBP - 0xc0);
              *(uint *)(unaff_EBP - 0xcc) = uVar27;
              *(undefined4 *)(unaff_EBP - 200) = uVar26;
            }
            goto LAB_004b049d;
          }
        }
LAB_004b03ac:
        if (((*(int *)(unaff_EBP - 200) < 1) && (*(int *)(unaff_EBP - 200) < 0)) && (cVar8 != 'T'))
        {
          uVar27 = 0xffffffff;
          *(undefined4 *)(unaff_EBP - 0xcc) = 0xffffffff;
          *(undefined4 *)(unaff_EBP - 200) = 0xffffffff;
        }
        else {
          uVar27 = 0;
          *(undefined4 *)(unaff_EBP - 0xcc) = 0;
          *(undefined4 *)(unaff_EBP - 200) = 0;
        }
      }
LAB_004b049d:
      unaff_ESI = *(int **)(unaff_EBP - 0xd8);
      unaff_ESI[4] = uVar27;
      unaff_ESI[5] = *(int *)(unaff_EBP - 200);
      *(ushort *)(unaff_ESI + 7) = *(ushort *)(unaff_ESI + 7) & 0xbe04 | 4;
    }
    else {
      unaff_ESI = *(int **)(unaff_EBP - 0xd8);
      FUN_004b78c0((int)unaff_ESI);
    }
    goto LAB_004b0d0b;
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
    iVar13 = *(int *)(unaff_EBP - 0xe0);
    iVar25 = iVar13 + *(int *)(iVar25 + 4 + iVar34 * 0x14) * 0x28;
    FUN_0046dfa0(iVar25);
    iVar13 = iVar13 + *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar34 * 0x14) * 0x28;
    FUN_0046dfa0(iVar13);
    uVar4 = *(ushort *)(iVar25 + 0x1c);
    *(int *)(unaff_EBP - 0xd8) =
         *(int *)(unaff_EBP - 0xe0) +
         *(int *)(*(int *)(unaff_EBP - 0xdc) + 0xc + iVar34 * 0x14) * 0x28;
    uVar4 = uVar4 | *(ushort *)(iVar13 + 0x1c);
    *(uint *)(unaff_EBP - 200) = (uint)uVar4;
    if ((uVar4 & 1) != 0) goto LAB_004b001a;
    if ((*(byte *)(iVar25 + 0x1c) & *(byte *)(iVar13 + 0x1c) & 4) == 0) {
      *(undefined1 *)(unaff_EBP - 0xcc) = 0;
      goto LAB_004afe6d;
    }
    uVar27 = *(uint *)(iVar25 + 0x10);
    *(uint *)(unaff_EBP - 0xc4) = uVar27;
    uVar31 = *(uint *)(iVar25 + 0x14);
    *(uint *)(unaff_EBP - 0xc0) = uVar31;
    uVar26 = *(undefined4 *)(iVar13 + 0x10);
    *(undefined4 *)(unaff_EBP - 0xf0) = uVar26;
    *(undefined4 *)(unaff_EBP - 0xbc) = uVar26;
    uVar26 = *(undefined4 *)(iVar13 + 0x14);
    *(undefined4 *)(unaff_EBP - 0x104) = uVar26;
    *(undefined4 *)(unaff_EBP - 0xb8) = uVar26;
    iVar21 = *(int *)(unaff_EBP - 0xdc);
    *(undefined1 *)(unaff_EBP - 0xcc) = 1;
    switch(*(undefined1 *)(iVar21 + iVar34 * 0x14)) {
    case 0x56:
      iVar21 = FUN_0048bce0((uint *)(unaff_EBP - 0xbc),uVar27,uVar31);
      if (iVar21 != 0) goto LAB_004afe6d;
      break;
    case 0x57:
      iVar21 = FUN_004aa9e0((uint *)(unaff_EBP - 0xbc),uVar27,uVar31);
      goto joined_r0x004afda1;
    case 0x58:
      iVar21 = FUN_004a0bf0((uint *)(unaff_EBP - 0xbc),uVar27,uVar31);
joined_r0x004afda1:
      if (iVar21 == 0) break;
LAB_004afe6d:
      fVar35 = FUN_004b8350(iVar25);
      *(double *)(unaff_EBP - 0xb4) = (double)fVar35;
      fVar35 = FUN_004b8350(iVar13);
      *(double *)(unaff_EBP - 0xac) = (double)fVar35;
      switch(*(undefined1 *)(*(int *)(unaff_EBP - 0xdc) + iVar34 * 0x14)) {
      case 0x56:
        *(double *)(unaff_EBP - 0xac) =
             *(double *)(unaff_EBP - 0xac) + *(double *)(unaff_EBP - 0xb4);
        break;
      case 0x57:
        *(double *)(unaff_EBP - 0xac) =
             *(double *)(unaff_EBP - 0xac) - *(double *)(unaff_EBP - 0xb4);
        break;
      case 0x58:
        *(double *)(unaff_EBP - 0xac) =
             *(double *)(unaff_EBP - 0xac) * *(double *)(unaff_EBP - 0xb4);
        break;
      case 0x59:
        if (*(double *)(unaff_EBP - 0xb4) != 0.0) {
          *(double *)(unaff_EBP - 0xac) =
               *(double *)(unaff_EBP - 0xac) / *(double *)(unaff_EBP - 0xb4);
          break;
        }
        goto LAB_004b001a;
      default:
        uVar39 = FUN_0054a946();
        *(ulonglong *)(unaff_EBP - 0xc4) = uVar39;
        uVar37 = FUN_0054a946();
        *(ulonglong *)(unaff_EBP - 0xbc) = uVar37;
        if (uVar39 == 0) goto LAB_004b001a;
        if (uVar39 == 0xffffffffffffffff) {
          uVar39 = 1;
          *(undefined4 *)(unaff_EBP - 0xc4) = 1;
          *(undefined4 *)(unaff_EBP - 0xc0) = 0;
        }
        uVar36 = __allrem((uint)uVar37,(uint)(uVar37 >> 0x20),(uint)uVar39,(uint)(uVar39 >> 0x20));
        *(undefined8 *)(unaff_EBP - 0x134) = uVar36;
        *(double *)(unaff_EBP - 0xac) = (double)*(longlong *)(unaff_EBP - 0x134);
      }
      iVar34 = FUN_0049f810();
      if (iVar34 == 0) {
        unaff_ESI = *(int **)(unaff_EBP - 0xd8);
        *(undefined8 *)(unaff_ESI + 2) = *(undefined8 *)(unaff_EBP - 0xac);
        *(ushort *)(unaff_ESI + 7) = *(ushort *)(unaff_ESI + 7) & 0xbe08 | 8;
        if (((*(byte *)(unaff_EBP - 200) & 8) != 0) || (*(char *)(unaff_EBP - 0xcc) != '\0'))
        goto LAB_004af834;
        FUN_004b6650((int)unaff_ESI);
        unaff_EBX = *(int **)(unaff_EBP - 0xe4);
      }
      else {
LAB_004b001a:
        unaff_ESI = *(int **)(unaff_EBP - 0xd8);
        FUN_004b78c0((int)unaff_ESI);
        unaff_EBX = *(int **)(unaff_EBP - 0xe4);
      }
      goto LAB_004b0d0b;
    case 0x59:
      if (uVar27 != 0 || uVar31 != 0) {
        if ((((uVar27 & uVar31) != 0xffffffff) || (*(uint *)(unaff_EBP - 0xf0) != 0)) ||
           (*(int *)(unaff_EBP - 0x104) != -0x80000000)) {
          uVar36 = __alldiv(*(uint *)(unaff_EBP - 0xf0),*(uint *)(unaff_EBP - 0x104),uVar27,uVar31);
          goto LAB_004afe23;
        }
        goto LAB_004afe6d;
      }
      goto LAB_004b001a;
    default:
      if (uVar27 == 0 && uVar31 == 0) goto LAB_004b001a;
      if ((uVar27 & uVar31) == 0xffffffff) {
        uVar27 = 1;
        uVar31 = 0;
        *(undefined4 *)(unaff_EBP - 0xc4) = 1;
        *(undefined4 *)(unaff_EBP - 0xc0) = 0;
      }
      uVar36 = __allrem(*(uint *)(unaff_EBP - 0xf0),*(uint *)(unaff_EBP - 0x104),uVar27,uVar31);
LAB_004afe23:
      *(undefined8 *)(unaff_EBP - 0xbc) = uVar36;
    }
    unaff_ESI = *(int **)(unaff_EBP - 0xd8);
    unaff_EBX = *(int **)(unaff_EBP - 0xe4);
    unaff_ESI[4] = *(int *)(unaff_EBP - 0xbc);
    unaff_ESI[5] = *(int *)(unaff_EBP - 0xb8);
    *(ushort *)(unaff_ESI + 7) = *(ushort *)(unaff_ESI + 7) & 0xbe04 | 4;
    goto LAB_004b0d0b;
  case 0x5b:
    iVar13 = *(int *)(unaff_EBP - 0xe0);
    piVar19 = (int *)(iVar13 + *(int *)(iVar25 + 4 + iVar34 * 0x14) * 0x28);
    piVar29 = (int *)(iVar13 + *(int *)(iVar25 + 8 + iVar34 * 0x14) * 0x28);
    unaff_ESI = (int *)(iVar13 + *(int *)(iVar25 + 0xc + iVar34 * 0x14) * 0x28);
    uVar4 = *(ushort *)(piVar19 + 7);
    bVar9 = *(byte *)(piVar29 + 7);
    *(int **)(unaff_EBP - 0xd8) = unaff_ESI;
    if (((bVar9 | (byte)uVar4) & 1) != 0) {
      FUN_004b78c0((int)unaff_ESI);
      unaff_EBX = *(int **)(unaff_EBP - 0xe4);
      goto LAB_004b0d0b;
    }
    if ((((((uVar4 & 0x4000) != 0) && (iVar34 = FUN_004b6fa0(piVar19), iVar34 != 0)) ||
         (((*(ushort *)(piVar29 + 7) & 0x4000) != 0 && (iVar34 = FUN_004b6fa0(piVar29), iVar34 != 0)
          ))) || (((*(byte *)(piVar19 + 7) & 0x12) == 0 &&
                  (iVar34 = FUN_004b7cf0(piVar19,(uint)*(byte *)(unaff_EBP - 0xec)), iVar34 != 0))))
       || (((*(byte *)(piVar29 + 7) & 0x12) == 0 &&
           (iVar34 = FUN_004b7cf0(piVar29,(uint)*(byte *)(unaff_EBP - 0xec)), iVar34 != 0))))
    goto LAB_004b57a0;
    uVar31 = piVar19[6] + piVar29[6];
    iVar25 = (int)uVar31 >> 0x1f;
    iVar34 = *(int *)(unaff_EBP - 0xe4);
    *(uint *)(unaff_EBP - 0xcc) = uVar31;
    *(int *)(unaff_EBP - 200) = iVar25;
    uVar27 = *(uint *)(iVar34 + 0x50);
    iVar34 = (int)uVar27 >> 0x1f;
    if ((iVar34 < iVar25) || ((iVar34 <= iVar25 && (uVar27 < uVar31)))) goto LAB_004b577a;
    piVar5 = *(int **)(unaff_EBP - 0xd8);
    *(ushort *)(piVar5 + 7) = *(ushort *)(piVar5 + 7) & 0xbe02 | 2;
    iVar34 = FUN_004b7260(piVar5,*(int *)(unaff_EBP - 0xcc) + 2,(uint)(piVar5 == piVar29));
    if (iVar34 != 0) goto LAB_004b57a0;
    if (piVar5 != piVar29) {
      memcpy((void *)piVar5[1],(void *)piVar29[1],piVar29[6]);
    }
    memcpy((void *)(piVar5[1] + piVar29[6]),(void *)piVar19[1],piVar19[6]);
    unaff_EBX = *(int **)(unaff_EBP - 0xe4);
    unaff_ESI = *(int **)(unaff_EBP - 0xd8);
    *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + piVar5[1]) = 0;
    *(undefined1 *)(piVar5[1] + 1 + *(int *)(unaff_EBP - 0xcc)) = 0;
    *(ushort *)(piVar5 + 7) = *(ushort *)(piVar5 + 7) | 0x200;
    piVar5[6] = *(int *)(unaff_EBP - 0xcc);
    *(undefined1 *)((int)piVar5 + 0x1f) = *(undefined1 *)(unaff_EBP - 0xec);
    goto LAB_004b0d0b;
  case 0x5d:
    iVar13 = *(int *)(iVar25 + 4 + iVar34 * 0x14);
    iVar21 = *(int *)(unaff_EBP - 0xe0);
    bVar9 = *(byte *)(iVar21 + 0x1c + iVar13 * 0x28);
    unaff_ESI = (int *)(iVar21 + *(int *)(iVar25 + 8 + iVar34 * 0x14) * 0x28);
    *(int **)(unaff_EBP - 0xd8) = unaff_ESI;
    if ((bVar9 & 1) == 0) {
      uVar39 = FUN_004b65e0(iVar21 + iVar13 * 0x28);
      FUN_004b7860(unaff_ESI,~(uint)uVar39,~(uint)(uVar39 >> 0x20));
      unaff_ESI = *(int **)(unaff_EBP - 0xd8);
    }
    else {
      FUN_004b78c0((int)unaff_ESI);
    }
    goto LAB_004b0d0b;
  case 0x5e:
    *(undefined1 *)(iVar25 + iVar34 * 0x14) = 9;
    uVar27 = FUN_004aa9b0(*(char **)(iVar25 + 0x10 + iVar34 * 0x14));
    cVar8 = *(char *)(unaff_EBP - 0xec);
    *(uint *)(*(int *)(unaff_EBP - 0xdc) + 4 + iVar34 * 0x14) = uVar27;
    if (cVar8 == '\x01') {
      iVar25 = *(int *)(unaff_EBP - 0xdc);
    }
    else {
      iVar25 = FUN_004b79e0(unaff_ESI,extraout_EDX,0xffffffff,'\x01',(undefined *)0x0);
      *(int *)(unaff_EBP - 0xd0) = iVar25;
      if (iVar25 == 0x12) goto LAB_004b5780;
      iVar25 = FUN_004aec30(unaff_ESI,(uint)*(byte *)(unaff_EBP - 0xec));
      if (iVar25 != 0) goto LAB_004b57a6;
      iVar25 = *(int *)(unaff_EBP - 0xdc);
      unaff_ESI[9] = 0;
      *(ushort *)(unaff_ESI + 7) = *(ushort *)(unaff_ESI + 7) & 0xfbff | 0x800;
      if (*(char *)(iVar25 + 1 + iVar34 * 0x14) == -1) {
        FUN_00494b00((int)unaff_EBX,*(undefined4 **)(iVar25 + 0x10 + iVar34 * 0x14));
        iVar25 = *(int *)(unaff_EBP - 0xdc);
      }
      *(undefined1 *)(iVar25 + 1 + iVar34 * 0x14) = 0xff;
      *(int *)(iVar25 + 0x10 + iVar34 * 0x14) = unaff_ESI[1];
      *(int *)(iVar25 + 4 + iVar34 * 0x14) = unaff_ESI[6];
    }
    if (unaff_EBX[0x14] < *(int *)(iVar25 + 4 + iVar34 * 0x14)) goto LAB_004b5780;
switchD_004af4da_caseD_9:
    *(undefined2 *)(unaff_ESI + 7) = 0xa02;
    unaff_ESI[1] = *(int *)(iVar25 + 0x10 + iVar34 * 0x14);
    unaff_ESI[6] = *(int *)(iVar25 + 4 + iVar34 * 0x14);
    *(undefined1 *)((int)unaff_ESI + 0x1f) = *(undefined1 *)(unaff_EBP - 0xec);
    goto LAB_004b0d0b;
  case 0x60:
  case 0x61:
    piVar29 = *(int **)(*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
                       *(int *)(iVar25 + 4 + iVar34 * 0x14) * 4);
    *(int **)(unaff_EBP - 0xcc) = piVar29;
    iVar25 = *(int *)(iVar25 + 8 + iVar34 * 0x14);
    puVar18 = (uint *)*piVar29;
    iVar13 = *(int *)(unaff_EBP - 0xe0);
    *(uint **)(unaff_EBP - 200) = puVar18;
    piVar19 = (int *)(iVar13 + iVar25 * 0x28);
    if (puVar18 == (uint *)0x0) goto LAB_004af834;
    if ((*(ushort *)(piVar19 + 7) & 0x4000) != 0) {
      iVar25 = FUN_004b6fa0(piVar19);
      *(int *)(unaff_EBP - 0xd0) = iVar25;
      if (iVar25 != 0) goto LAB_004af834;
      puVar18 = *(uint **)(unaff_EBP - 200);
      piVar29 = *(int **)(unaff_EBP - 0xcc);
    }
    if (piVar29[0x12] == 0) {
      uVar27 = piVar19[6];
      iVar25 = *(int *)(unaff_EBP - 0xdc);
      *(uint *)(unaff_EBP - 0xc4) = uVar27;
      pbVar33 = (byte *)piVar19[1];
      *(byte **)(unaff_EBP - 0xc0) = pbVar33;
      if ((*(byte *)(iVar25 + 3 + iVar34 * 0x14) & 0x10) == 0) {
        puVar17 = (uint *)0x0;
      }
      else {
        puVar17 = (uint *)piVar29[0x13];
      }
      puVar18 = FUN_0048ffe0(puVar18,pbVar33,uVar27,(int)uVar27 >> 0x1f,&DAT_0055b524,0,0,
                             *(int *)(*(int *)(unaff_EBP - 0xdc) + 0xc + iVar34 * 0x14),puVar17);
      unaff_EBX = *(int **)(unaff_EBP - 0xe4);
      unaff_ESI = *(int **)(unaff_EBP - 0xd8);
      *(uint **)(unaff_EBP - 0xd0) = puVar18;
      *(undefined4 *)(*(int *)(unaff_EBP - 0xcc) + 0x50) = 0;
      goto LAB_004b0d0b;
    }
    unaff_EBX = *(int **)(unaff_EBP - 0xe4);
    uVar27 = FUN_004b9360(unaff_EBX,(int)piVar29,(int)piVar19);
    unaff_ESI = *(int **)(unaff_EBP - 0xd8);
    *(uint *)(unaff_EBP - 0xd0) = uVar27;
    goto LAB_004b0d11;
  case 0x62:
    puVar24 = *(undefined4 **)
               (*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
               *(int *)(iVar25 + 4 + iVar34 * 0x14) * 4);
    *(undefined4 **)(unaff_EBP - 0xcc) = puVar24;
    piVar19 = (int *)*puVar24;
    *(int **)(unaff_EBP - 200) = piVar19;
    if (piVar19 != (int *)0x0) {
      *(undefined4 *)(unaff_EBP - 0xbc) = puVar24[2];
      *(undefined2 *)(unaff_EBP - 0xb8) = *(undefined2 *)(iVar25 + 0xc + iVar34 * 0x14);
      *(undefined1 *)(unaff_EBP - 0xb6) = 0;
      *(int *)(unaff_EBP - 0xac) =
           *(int *)(unaff_EBP - 0xe0) + *(int *)(iVar25 + 8 + iVar34 * 0x14) * 0x28;
      uVar27 = FUN_004908e0(piVar19,(int *)(unaff_EBP - 0xbc),0,0,0,(uint *)(unaff_EBP - 0xc4));
      *(uint *)(unaff_EBP - 0xd0) = uVar27;
      if ((uVar27 == 0) && (*(int *)(unaff_EBP - 0xc4) == 0)) {
        uVar27 = FUN_0048f930(*(uint **)(unaff_EBP - 200));
        *(uint *)(unaff_EBP - 0xd0) = uVar27;
      }
      *(undefined4 *)(*(int *)(unaff_EBP - 0xcc) + 0x50) = 0;
    }
    goto LAB_004b0d0b;
  case 99:
    unaff_ESI = *(int **)(unaff_EBP - 0xd8);
    puVar24 = *(undefined4 **)
               (*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
               *(int *)(iVar25 + 4 + iVar34 * 0x14) * 4);
    *(undefined4 **)(unaff_EBP - 200) = puVar24;
    *(undefined4 *)(unaff_EBP - 0xcc) = *puVar24;
    *(undefined2 *)(unaff_ESI + 7) = 1;
    if (*(int *)(unaff_EBP - 0xcc) == 0) goto LAB_004af570;
    uVar27 = FUN_004af1b0(*(undefined4 **)(unaff_EBP - 200));
    *(uint *)(unaff_EBP - 0xd0) = uVar27;
    if (uVar27 != 0) goto LAB_004b572c;
    if (*(char *)(*(int *)(unaff_EBP - 200) + 0x1c) != '\0') goto LAB_004af570;
    uVar27 = FUN_004b6480(unaff_EBX,*(int **)(unaff_EBP - 0xcc),(undefined4 *)(unaff_EBP - 0xc4));
    *(uint *)(unaff_EBP - 0xd0) = uVar27;
    if (uVar27 != 0) goto LAB_004b572c;
    unaff_ESI[4] = *(int *)(unaff_EBP - 0xc4);
    unaff_ESI[5] = *(int *)(unaff_EBP - 0xc0);
    *(undefined2 *)(unaff_ESI + 7) = 4;
    goto LAB_004b0d0b;
  case 100:
  case 0x65:
    piVar19 = *(int **)(*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
                       *(int *)(iVar25 + 4 + iVar34 * 0x14) * 4);
    *(int **)(unaff_EBP - 0xcc) = piVar19;
    if (*piVar19 == 0) goto LAB_004b0d0b;
    *(int *)(unaff_EBP - 0xc4) = piVar19[2];
    *(undefined2 *)(unaff_EBP - 0xc0) = *(undefined2 *)(iVar25 + 0x10 + iVar34 * 0x14);
    *(char *)(unaff_EBP - 0xbe) = (*(char *)(iVar25 + 3 + iVar34 * 0x14) != '\0') + '\x02';
    *(int *)(unaff_EBP - 0xb4) =
         *(int *)(unaff_EBP - 0xe0) + *(int *)(iVar25 + 0xc + iVar34 * 0x14) * 0x28;
    uVar27 = FUN_004b63c0(piVar19,(int *)(unaff_EBP - 0xc4),(uint *)(unaff_EBP - 200));
    iVar25 = *(int *)(unaff_EBP - 0xdc);
    cVar8 = *(char *)(iVar25 + iVar34 * 0x14);
    *(uint *)(unaff_EBP - 0xd0) = uVar27;
    if (cVar8 == 'd') {
      iVar13 = -*(int *)(unaff_EBP - 200);
    }
    else {
      iVar13 = *(int *)(unaff_EBP - 200) + 1;
    }
    *(int *)(unaff_EBP - 200) = iVar13;
    if (iVar13 < 1) goto LAB_004b0d0b;
    iVar34 = *(int *)(iVar25 + 8 + iVar34 * 0x14);
    goto LAB_004b0d04;
  case 0x66:
    iVar13 = 0;
    *(undefined4 *)(unaff_EBP - 200) = 0;
    iVar25 = unaff_EBX[1];
    *(int *)(unaff_EBP - 0xc4) = iVar25;
    while (iVar25 != 0) {
      if (((*(int *)(iVar25 + 0x30) == -0x420df25d) &&
          (((byte)*(undefined4 *)(iVar25 + 0x60) & 0xc) < 8)) && (-1 < *(int *)(iVar25 + 0x54))) {
        iVar13 = iVar13 + 1;
        *(int *)(unaff_EBP - 200) = iVar13;
      }
      iVar25 = *(int *)(iVar25 + 0x3c);
      *(int *)(unaff_EBP - 0xc4) = iVar25;
    }
    *(undefined2 *)(unaff_ESI + 7) = 1;
    if (*(int *)(unaff_EBP - 200) < 2) {
      iVar25 = *(int *)(unaff_EBP - 0xdc);
      iVar13 = *(int *)(iVar25 + 0xc + iVar34 * 0x14);
      *(int *)(unaff_EBP - 0xc0) = iVar13;
      uVar27 = FUN_0048fb70(*(undefined4 **)(unaff_EBX[4] + 4 + iVar13 * 0x10),
                            *(char **)(iVar25 + 4 + iVar34 * 0x14),(uint *)(unaff_EBP - 0xcc));
      *(uint *)(unaff_EBP - 0xd0) = uVar27;
      *(undefined2 *)(unaff_ESI + 7) = 4;
      iVar25 = *(int *)(unaff_EBP - 0xcc);
      unaff_ESI[4] = iVar25;
      uVar27 = *(uint *)(unaff_EBP - 0xd0);
      unaff_ESI[5] = iVar25 >> 0x1f;
      if (uVar27 == 0) {
        if (*(int *)(unaff_EBP - 0xcc) != 0) {
          FUN_004a6dc0((int)unaff_EBX,*(int *)(unaff_EBP - 0xc0),*(int *)(unaff_EBP - 0xcc),
                       *(undefined4 *)(*(int *)(unaff_EBP - 0xdc) + 4 + iVar34 * 0x14));
          *(char *)(unaff_EBP - 0xf5) = *(char *)(unaff_EBP - 0xc0) + '\x01';
        }
        goto LAB_004b0d0b;
      }
    }
    else {
      iVar34 = *(int *)(unaff_EBP - 0xd4);
      uVar27 = 6;
      *(undefined4 *)(unaff_EBP - 0xd0) = 6;
      *(undefined1 *)(iVar34 + 0x5c) = 2;
    }
    goto LAB_004b0d11;
  case 0x67:
    *(undefined4 *)(unaff_EBP - 0xcc) = 0;
    piVar19 = (int *)(unaff_EBP - 0xcc);
    if (*(int *)(iVar25 + 0xc + iVar34 * 0x14) == 0) {
      piVar19 = (int *)0x0;
    }
    uVar27 = FUN_0048eff0(*(undefined4 **)
                           (unaff_EBX[4] + 4 + *(int *)(iVar25 + 8 + iVar34 * 0x14) * 0x10),
                          *(uint *)(iVar25 + 4 + iVar34 * 0x14),piVar19);
    iVar25 = *(int *)(unaff_EBP - 0xdc);
    iVar13 = *(int *)(iVar25 + 0xc + iVar34 * 0x14);
    *(uint *)(unaff_EBP - 0xd0) = uVar27;
    if (iVar13 != 0) {
      uVar27 = *(uint *)(unaff_EBP - 0xcc);
      piVar19 = (int *)(*(int *)(unaff_EBP - 0xd4) + 100);
      *piVar19 = *piVar19 + uVar27;
      iVar34 = *(int *)(iVar25 + 0xc + iVar34 * 0x14);
      if (0 < iVar34) {
        iVar25 = *(int *)(unaff_EBP - 0xe0);
        puVar18 = (uint *)(iVar25 + 0x10 + iVar34 * 0x28);
        uVar31 = *puVar18;
        *puVar18 = *puVar18 + uVar27;
        piVar19 = (int *)(iVar25 + 0x14 + iVar34 * 0x28);
        *piVar19 = *piVar19 + ((int)uVar27 >> 0x1f) + (uint)CARRY4(uVar31,uVar27);
      }
    }
    goto LAB_004b0d0b;
  case 0x68:
  case 0x69:
    *(undefined4 *)(unaff_EBP - 0xcc) = 0;
    iVar13 = *(int *)(iVar25 + 4 + iVar34 * 0x14) * 0x10 + unaff_EBX[4];
    *(int *)(unaff_EBP - 0xc4) = iVar13;
    iVar34 = (*(char *)(iVar25 + iVar34 * 0x14) != 'i') + 1;
    *(int *)(unaff_EBP - 200) = iVar34;
    pcVar22 = FUN_0048f740(*(undefined4 **)(iVar13 + 4),(undefined4 *)(unaff_EBP - 0xcc),
                           (byte)iVar34);
    *(char **)(unaff_EBP - 0xd0) = pcVar22;
    iVar34 = *(int *)(unaff_EBP - 0xcc);
    unaff_ESI[4] = iVar34;
    unaff_ESI[5] = iVar34 >> 0x1f;
    goto LAB_004b0d0b;
  case 0x6a:
    iVar25 = *(int *)(iVar25 + 4 + iVar34 * 0x14);
    *(int *)(unaff_EBP - 0xcc) = iVar25;
    pcVar22 = "sqlite_temp_master";
    if (iVar25 != 1) {
      pcVar22 = "sqlite_master";
    }
    iVar25 = *(int *)(unaff_EBP - 0xdc);
    *(char **)(unaff_EBP - 200) = pcVar22;
    *(int **)(unaff_EBP - 0xc0) = unaff_EBX;
    *(undefined4 *)(unaff_EBP - 0xb8) = *(undefined4 *)(iVar25 + 4 + iVar34 * 0x14);
    *(int *)(unaff_EBP - 0xbc) = *(int *)(unaff_EBP - 0xd4) + 0x34;
    iVar34 = FUN_004a02d0((int)unaff_EBX,
                          (byte *)
                          "SELECT name, rootpage, sql FROM \'%q\'.%s WHERE %s ORDER BY rowid");
    *(int *)(unaff_EBP - 0xc4) = iVar34;
    if (iVar34 == 0) {
      *(undefined4 *)(unaff_EBP - 0xd0) = 7;
LAB_004b3e54:
      FUN_004a6940((int)unaff_EBX);
      uVar27 = *(uint *)(unaff_EBP - 0xd0);
    }
    else {
      *(undefined1 *)((int)unaff_EBX + 0x81) = 1;
      pbVar33 = *(byte **)(unaff_EBP - 0xc4);
      *(undefined4 *)(unaff_EBP - 0xb4) = 0;
      uVar27 = FUN_00463120((int)unaff_EBX,pbVar33,FUN_0049de90,unaff_EBP - 0xc0,(int *)0x0);
      puVar24 = *(undefined4 **)(unaff_EBP - 0xc4);
      if (uVar27 == 0) {
        uVar27 = *(uint *)(unaff_EBP - 0xb4);
      }
      *(uint *)(unaff_EBP - 0xd0) = uVar27;
      FUN_00494b00((int)unaff_EBX,puVar24);
      iVar34 = *(int *)(unaff_EBP - 0xd0);
      *(undefined1 *)((int)unaff_EBX + 0x81) = 0;
      uVar27 = 0;
      if (iVar34 != 0) goto LAB_004b3e54;
    }
    if (uVar27 == 7) goto LAB_004b57a6;
    goto LAB_004b0d11;
  case 0x6b:
    uVar27 = FUN_0048c830((int)unaff_EBX,*(int *)(iVar25 + 4 + iVar34 * 0x14));
    *(uint *)(unaff_EBP - 0xd0) = uVar27;
    goto LAB_004b0d11;
  case 0x6c:
    FUN_004ab2d0((int)unaff_EBX,*(uint *)(iVar25 + 4 + iVar34 * 0x14),
                 *(byte **)(iVar25 + 0x10 + iVar34 * 0x14));
    goto LAB_004b0d0b;
  case 0x6d:
    FUN_004ab1f0((int)unaff_EBX,*(uint *)(iVar25 + 4 + iVar34 * 0x14),
                 *(byte **)(iVar25 + 0x10 + iVar34 * 0x14));
    goto LAB_004b0d0b;
  case 0x6e:
    FUN_004ab380((int)unaff_EBX,*(uint *)(iVar25 + 4 + iVar34 * 0x14),
                 *(byte **)(iVar25 + 0x10 + iVar34 * 0x14));
    goto LAB_004b0d0b;
  case 0x6f:
    iVar25 = *(int *)(iVar25 + 8 + iVar34 * 0x14);
    *(int *)(unaff_EBP - 0xcc) = iVar25;
    puVar24 = FUN_00494b90((int)unaff_EBX,iVar25 * 4 + 4);
    *(undefined4 **)(unaff_EBP - 200) = puVar24;
    if (puVar24 == (undefined4 *)0x0) goto LAB_004b57a6;
    iVar25 = *(int *)(unaff_EBP - 0xdc);
    iVar13 = *(int *)(unaff_EBP - 0xe0);
    *(int *)(unaff_EBP - 0xb8) = iVar13 + *(int *)(iVar25 + 0xc + iVar34 * 0x14) * 0x28;
    piVar19 = (int *)(iVar13 + *(int *)(iVar25 + 4 + iVar34 * 0x14) * 0x28);
    iVar25 = 0;
    *(undefined4 *)(unaff_EBP - 0xc4) = 0;
    if (0 < *(int *)(unaff_EBP - 0xcc)) {
      do {
        uVar39 = FUN_004b65e0((int)(piVar19 + iVar25 * 10));
        *(int *)(*(int *)(unaff_EBP - 200) + *(int *)(unaff_EBP - 0xc4) * 4) = (int)uVar39;
        iVar25 = *(int *)(unaff_EBP - 0xc4) + 1;
        *(int *)(unaff_EBP - 0xc4) = iVar25;
      } while (iVar25 < *(int *)(unaff_EBP - 0xcc));
      puVar24 = *(undefined4 **)(unaff_EBP - 200);
    }
    puVar24[iVar25] = 0;
    uVar26 = FUN_004901e0(*(undefined4 **)
                           (unaff_EBX[4] + 4 +
                           (uint)*(byte *)(*(int *)(unaff_EBP - 0xdc) + 3 + iVar34 * 0x14) * 0x10),
                          *(int *)(unaff_EBP - 200),*(int *)(unaff_EBP - 0xcc),
                          *(int *)(*(int *)(unaff_EBP - 0xb8) + 0x10),(int *)(unaff_EBP - 0xc0));
    puVar24 = *(undefined4 **)(unaff_EBP - 200);
    *(undefined4 *)(unaff_EBP - 0xbc) = uVar26;
    FUN_00494b00((int)unaff_EBX,puVar24);
    uVar31 = *(uint *)(unaff_EBP - 0xc0);
    iVar34 = *(int *)(unaff_EBP - 0xb8);
    puVar18 = (uint *)(iVar34 + 0x10);
    uVar27 = *puVar18;
    *puVar18 = *puVar18 - uVar31;
    piVar29 = (int *)(iVar34 + 0x14);
    *piVar29 = (*piVar29 - ((int)uVar31 >> 0x1f)) - (uint)(uVar27 < uVar31);
    FUN_004b78c0((int)piVar19);
    if (*(int *)(unaff_EBP - 0xc0) != 0) {
      if (*(void **)(unaff_EBP - 0xbc) == (void *)0x0) goto LAB_004b57a6;
      FUN_004b79e0(piVar19,*(void **)(unaff_EBP - 0xbc),0xffffffff,'\x01',FUN_00466dd0);
    }
    FUN_004aec30(piVar19,(uint)*(byte *)(unaff_EBP - 0xec));
    unaff_ESI = *(int **)(unaff_EBP - 0xd8);
    goto LAB_004b0d0b;
  case 0x70:
    iVar13 = *(int *)(iVar25 + 4 + iVar34 * 0x14);
    piVar19 = (int *)(*(int *)(unaff_EBP - 0xe0) + iVar13 * 0x28);
    iVar34 = *(int *)(iVar25 + 8 + iVar34 * 0x14);
    if (((*(byte *)(*(int *)(unaff_EBP - 0xe0) + 0x1c + iVar13 * 0x28) & 0x20) == 0) &&
       (FUN_004b7910(piVar19), (*(byte *)(piVar19 + 7) & 0x20) == 0)) goto LAB_004b57a6;
    FUN_004a6ed0((undefined4 *)piVar19[4],
                 *(uint *)(*(int *)(unaff_EBP - 0xe0) + 0x10 + iVar34 * 0x28),
                 *(uint *)(*(int *)(unaff_EBP - 0xe0) + 0x14 + iVar34 * 0x28));
    unaff_ESI = *(int **)(unaff_EBP - 0xd8);
    goto LAB_004b0d0b;
  case 0x71:
    if (unaff_EBX[0x38] != 0) {
LAB_004af4ee:
      iVar34 = *(int *)(unaff_EBP - 0xd4);
      *(undefined4 *)(iVar34 + 0x58) = 9;
      *(undefined4 *)(unaff_EBP - 0xd0) = 9;
      FUN_004a9a30((int *)(iVar34 + 0x34),(int)unaff_EBX,&DAT_0056de50);
      uVar27 = 9;
      goto LAB_004b57cd;
    }
    iVar13 = *(int *)(iVar25 + 4 + iVar34 * 0x14);
    iVar25 = *(int *)(unaff_EBP - 0xe0) + iVar13 * 0x28;
    if (((*(byte *)(*(int *)(unaff_EBP - 0xe0) + 0x1c + iVar13 * 0x28) & 0x20) != 0) &&
       (iVar13 = FUN_004a6f70(*(undefined4 **)(iVar25 + 0x10),(undefined4 *)(unaff_EBP - 0xcc)),
       iVar13 != 0)) {
      FUN_004b7860((int *)(*(int *)(unaff_EBP - 0xe0) +
                          *(int *)(*(int *)(unaff_EBP - 0xdc) + 0xc + iVar34 * 0x14) * 0x28),
                   *(int *)(unaff_EBP - 0xcc),*(int *)(unaff_EBP - 200));
      unaff_ESI = *(int **)(unaff_EBP - 0xd8);
      goto LAB_004b0d0b;
    }
    FUN_004b78c0(iVar25);
    unaff_ESI = *(int **)(unaff_EBP - 0xd8);
    iVar34 = *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar34 * 0x14);
    goto LAB_004b0d04;
  case 0x72:
    iVar13 = *(int *)(unaff_EBP - 0xe0);
    piVar19 = (int *)(iVar13 + *(int *)(iVar25 + 4 + iVar34 * 0x14) * 0x28);
    iVar21 = *(int *)(iVar25 + 0xc + iVar34 * 0x14);
    iVar25 = *(int *)(iVar25 + 0x10 + iVar34 * 0x14);
    *(int *)(unaff_EBP - 0xcc) = iVar25;
    if ((*(byte *)(piVar19 + 7) & 0x20) == 0) {
      FUN_004b7910(piVar19);
      if ((*(byte *)(piVar19 + 7) & 0x20) == 0) goto LAB_004b57a0;
      iVar25 = *(int *)(unaff_EBP - 0xcc);
      iVar13 = *(int *)(unaff_EBP - 0xe0);
    }
    bVar11 = iVar25 < 0;
    if (iVar25 != 0) {
      if (bVar11) {
        bVar9 = 0xff;
      }
      else {
        bVar9 = (byte)iVar25 & 0xf;
      }
      iVar25 = FUN_004a6fd0((undefined4 *)piVar19[4],bVar9,*(uint *)(iVar13 + 0x10 + iVar21 * 0x28),
                            *(int *)(iVar13 + 0x14 + iVar21 * 0x28));
      *(int *)(unaff_EBP - 200) = iVar25;
      if (iVar25 != 0) goto LAB_004b4170;
      bVar11 = *(int *)(unaff_EBP - 0xcc) < 0;
    }
    if (bVar11) goto LAB_004af834;
    FUN_004a6ed0((undefined4 *)piVar19[4],
                 *(uint *)(*(int *)(unaff_EBP - 0xe0) + 0x10 + iVar21 * 0x28),
                 *(uint *)(*(int *)(unaff_EBP - 0xe0) + 0x14 + iVar21 * 0x28));
    unaff_EBX = *(int **)(unaff_EBP - 0xe4);
    unaff_ESI = *(int **)(unaff_EBP - 0xd8);
    goto LAB_004b0d0b;
  case 0x73:
    iVar13 = *(int *)(iVar25 + 0x10 + iVar34 * 0x14);
    iVar21 = *(int *)(unaff_EBP - 0xdc);
    iVar25 = *(int *)(unaff_EBP - 0xe0);
    *(int *)(unaff_EBP - 0xb4) = iVar13;
    iVar25 = iVar25 + *(int *)(iVar21 + 0xc + iVar34 * 0x14) * 0x28;
    *(int *)(unaff_EBP - 0xc4) = iVar25;
    if (*(char *)(iVar21 + 3 + iVar34 * 0x14) != '\0') {
      iVar34 = *(int *)(iVar13 + 0x14);
      iVar21 = *(int *)(*(int *)(unaff_EBP - 0xd4) + 0xa0);
      *(int *)(unaff_EBP - 0xb0) = iVar34;
      *(int *)(unaff_EBP - 0xb8) = iVar21;
      while (iVar21 != 0) {
        if (*(int *)(iVar21 + 0x18) == iVar34) goto LAB_004af570;
        iVar21 = *(int *)(iVar21 + 4);
        *(int *)(unaff_EBP - 0xb8) = iVar21;
      }
    }
    iVar34 = *(int *)(unaff_EBP - 0xd4);
    if (unaff_EBX[0x1e] <= *(int *)(iVar34 + 0xa8)) {
      *(undefined4 *)(unaff_EBP - 0xd0) = 1;
      FUN_004a9a30((int *)(iVar34 + 0x34),(int)unaff_EBX,
                   (byte *)"too many levels of trigger recursion");
      uVar27 = 1;
      unaff_ESI = *(int **)(unaff_EBP - 0xd8);
      goto LAB_004b0d11;
    }
    if ((*(byte *)(iVar25 + 0x1c) & 0x40) == 0) {
      iVar34 = *(int *)(iVar13 + 8) + *(int *)(iVar13 + 0xc);
      *(int *)(unaff_EBP - 0xcc) = iVar34;
      sVar20 = *(int *)(iVar13 + 0x10) + (*(int *)(iVar13 + 0xc) + iVar34 * 10) * 4 + 0x48;
      *(size_t *)(unaff_EBP - 200) = sVar20;
      puVar24 = FUN_00494c20((int)unaff_EBX,sVar20);
      *(undefined4 **)(unaff_EBP - 0xb8) = puVar24;
      if (puVar24 == (undefined4 *)0x0) goto LAB_004b57a6;
      FUN_004b76e0(*(int **)(unaff_EBP - 0xc4));
      iVar34 = *(int *)(unaff_EBP - 0xd4);
      uVar26 = *(undefined4 *)(unaff_EBP - 0xe8);
      *(undefined2 *)(*(int *)(unaff_EBP - 0xc4) + 0x1c) = 0x40;
      *(undefined4 *)(*(int *)(unaff_EBP - 0xc4) + 0x10) = *(undefined4 *)(unaff_EBP - 0xb8);
      **(int **)(unaff_EBP - 0xb8) = iVar34;
      *(undefined4 *)(*(int *)(unaff_EBP - 0xb8) + 0x3c) = *(undefined4 *)(unaff_EBP - 0xcc);
      *(undefined4 *)(*(int *)(unaff_EBP - 0xb8) + 0x40) =
           *(undefined4 *)(*(int *)(unaff_EBP - 0xb4) + 0xc);
      *(undefined4 *)(*(int *)(unaff_EBP - 0xb8) + 0x2c) = uVar26;
      *(undefined4 *)(*(int *)(unaff_EBP - 0xb8) + 0xc) = *(undefined4 *)(iVar34 + 8);
      *(undefined4 *)(*(int *)(unaff_EBP - 0xb8) + 0x34) = *(undefined4 *)(iVar34 + 0x18);
      *(undefined4 *)(*(int *)(unaff_EBP - 0xb8) + 0x14) = *(undefined4 *)(iVar34 + 0x40);
      *(undefined2 *)(*(int *)(unaff_EBP - 0xb8) + 0x28) = *(undefined2 *)(iVar34 + 0x2e);
      *(undefined4 *)(*(int *)(unaff_EBP - 0xb8) + 8) = *(undefined4 *)(iVar34 + 4);
      *(undefined4 *)(*(int *)(unaff_EBP - 0xb8) + 0x30) = *(undefined4 *)(iVar34 + 0x1c);
      *(undefined4 *)(*(int *)(unaff_EBP - 0xb8) + 0x18) =
           *(undefined4 *)(*(int *)(unaff_EBP - 0xb4) + 0x14);
      *(undefined4 *)(*(int *)(unaff_EBP - 0xb8) + 0x10) = *(undefined4 *)(iVar34 + 0xb8);
      *(undefined4 *)(*(int *)(unaff_EBP - 0xb8) + 0x38) = *(undefined4 *)(iVar34 + 0xb4);
      iVar25 = *(int *)(unaff_EBP - 0xb8);
      iVar21 = *(int *)(iVar25 + 0x3c);
      iVar13 = iVar25 + 0x48;
      *(int *)(unaff_EBP - 0xc0) = iVar13;
      iVar21 = iVar25 + (iVar21 * 5 + 9) * 8;
      *(int *)(unaff_EBP - 0xbc) = iVar21;
      if (iVar13 != iVar21) {
        do {
          *(undefined2 *)(iVar13 + 0x1c) = 0x80;
          **(undefined4 **)(unaff_EBP - 0xc0) = unaff_EBX;
          iVar13 = *(int *)(unaff_EBP - 0xc0) + 0x28;
          *(int *)(unaff_EBP - 0xc0) = iVar13;
        } while (iVar13 != *(int *)(unaff_EBP - 0xbc));
        iVar34 = *(int *)(unaff_EBP - 0xd4);
        iVar25 = *(int *)(unaff_EBP - 0xb8);
      }
    }
    else {
      iVar25 = *(int *)(iVar25 + 0x10);
      *(int *)(unaff_EBP - 0xb8) = iVar25;
    }
    *(int *)(iVar34 + 0xa8) = *(int *)(iVar34 + 0xa8) + 1;
    uVar26 = *(undefined4 *)(unaff_EBP - 0x100);
    *(undefined4 *)(iVar25 + 4) = *(undefined4 *)(iVar34 + 0xa0);
    *(undefined4 *)(*(int *)(unaff_EBP - 0xb8) + 0x20) = uVar26;
    *(undefined4 *)(*(int *)(unaff_EBP - 0xb8) + 0x24) = *(undefined4 *)(unaff_EBP - 0xfc);
    *(undefined4 *)(*(int *)(unaff_EBP - 0xb8) + 0x44) = *(undefined4 *)(iVar34 + 100);
    iVar13 = *(int *)(unaff_EBP - 0xb8);
    puVar24 = *(undefined4 **)(unaff_EBP - 0xb4);
    *(int *)(iVar34 + 0xa0) = iVar13;
    iVar25 = iVar13 + 0x20;
    *(undefined4 *)(iVar34 + 100) = 0;
    *(int *)(iVar34 + 8) = iVar25;
    *(undefined4 *)(iVar34 + 0x18) = *(undefined4 *)(iVar13 + 0x3c);
    *(undefined2 *)(iVar34 + 0x2e) = *(undefined2 *)(iVar13 + 0x40);
    iVar13 = *(int *)(iVar34 + 0x18);
    *(int *)(unaff_EBP - 0xe0) = iVar25;
    iVar25 = iVar25 + (iVar13 + 1) * 0x28;
    *(int *)(iVar34 + 0x40) = iVar25;
    uVar26 = *puVar24;
    *(undefined4 *)(unaff_EBP - 0xdc) = uVar26;
    *(undefined4 *)(iVar34 + 4) = uVar26;
    *(undefined4 *)(iVar34 + 0x1c) = puVar24[1];
    _Dst = (void *)(iVar25 + (uint)*(ushort *)(iVar34 + 0x2e) * 4);
    *(void **)(iVar34 + 0xb8) = _Dst;
    sVar20 = puVar24[4];
    *(size_t *)(iVar34 + 0xb4) = sVar20;
    *(undefined4 *)(unaff_EBP - 0xe8) = 0xffffffff;
    memset(_Dst,0,sVar20);
    unaff_ESI = *(int **)(unaff_EBP - 0xd8);
    goto LAB_004b0d0b;
  case 0x74:
    iVar25 = *(int *)(*(int *)(unaff_EBP - 0xd4) + 0xa0);
    *(int *)(unaff_EBP - 0xcc) = iVar25;
    puVar32 = (undefined8 *)
              (*(int *)(iVar25 + 0xc) +
              (*(int *)(*(int *)(iVar25 + 8) + 4 + *(int *)(iVar25 + 0x2c) * 0x14) +
              *(int *)(*(int *)(unaff_EBP - 0xdc) + 4 + iVar34 * 0x14)) * 0x28);
    *(undefined8 **)(unaff_EBP - 200) = puVar32;
    FUN_004b7c40(unaff_ESI,puVar32,0x1000);
    goto LAB_004b0d0b;
  case 0x75:
    uVar27 = *(uint *)(iVar25 + 8 + iVar34 * 0x14);
    if (*(int *)(iVar25 + 4 + iVar34 * 0x14) == 0) {
      iVar34 = *(int *)(unaff_EBP - 0xd4);
      puVar18 = (uint *)(iVar34 + 0x88);
      uVar31 = *puVar18;
      *puVar18 = *puVar18 + uVar27;
      piVar19 = (int *)(iVar34 + 0x8c);
      *piVar19 = *piVar19 + ((int)uVar27 >> 0x1f) + (uint)CARRY4(uVar31,uVar27);
    }
    else {
      puVar18 = (uint *)(unaff_EBX + 0x7a);
      uVar31 = *puVar18;
      *puVar18 = *puVar18 + uVar27;
      unaff_EBX[0x7b] = unaff_EBX[0x7b] + ((int)uVar27 >> 0x1f) + (uint)CARRY4(uVar31,uVar27);
    }
    goto LAB_004b0d0b;
  case 0x76:
    if (*(int *)(iVar25 + 4 + iVar34 * 0x14) == 0) {
      bVar11 = *(int *)(*(int *)(unaff_EBP - 0xd4) + 0x88) == 0 &&
               *(int *)(*(int *)(unaff_EBP - 0xd4) + 0x8c) == 0;
    }
    else {
      bVar11 = unaff_EBX[0x7a] == 0 && unaff_EBX[0x7b] == 0;
    }
LAB_004b0cfe:
    if (!bVar11) goto LAB_004b0d0b;
    break;
  case 0x77:
    iVar25 = *(int *)(*(int *)(unaff_EBP - 0xd4) + 0xa0);
    if (iVar25 == 0) {
      iVar25 = *(int *)(unaff_EBP - 0xe0) +
               *(int *)(*(int *)(unaff_EBP - 0xdc) + 4 + iVar34 * 0x14) * 0x28;
    }
    else {
      *(int *)(unaff_EBP - 200) = iVar25;
      for (iVar13 = *(int *)(iVar25 + 4); iVar13 != 0; iVar13 = *(int *)(iVar13 + 4)) {
        *(int *)(unaff_EBP - 200) = iVar13;
        iVar25 = iVar13;
      }
      iVar25 = *(int *)(iVar25 + 0xc) +
               *(int *)(*(int *)(unaff_EBP - 0xdc) + 4 + iVar34 * 0x14) * 0x28;
    }
    *(int *)(unaff_EBP - 0xcc) = iVar25;
    FUN_004b7410(iVar25);
    iVar34 = *(int *)(unaff_EBP - 0xe0) +
             *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar34 * 0x14) * 0x28;
    FUN_004b7410(iVar34);
    iVar25 = *(int *)(unaff_EBP - 0xcc);
    iVar13 = *(int *)(iVar34 + 0x14);
    if ((iVar13 < *(int *)(iVar25 + 0x14)) ||
       ((iVar13 <= *(int *)(iVar25 + 0x14) && (*(uint *)(iVar34 + 0x10) <= *(uint *)(iVar25 + 0x10))
        ))) goto LAB_004af570;
    unaff_ESI = *(int **)(unaff_EBP - 0xd8);
    *(uint *)(iVar25 + 0x10) = *(uint *)(iVar34 + 0x10);
    *(int *)(iVar25 + 0x14) = iVar13;
    goto LAB_004b0d0b;
  case 0x78:
    iVar13 = *(int *)(iVar25 + 4 + iVar34 * 0x14);
    iVar21 = *(int *)(*(int *)(unaff_EBP - 0xe0) + 0x14 + iVar13 * 0x28);
    if (iVar21 < 0) goto LAB_004b0d0b;
    if (iVar21 < 1) {
      uVar27 = *(uint *)(*(int *)(unaff_EBP - 0xe0) + 0x10 + iVar13 * 0x28);
      goto joined_r0x004b4649;
    }
    break;
  case 0x79:
    iVar13 = *(int *)(*(int *)(unaff_EBP - 0xe0) + 0x14 +
                     *(int *)(iVar25 + 4 + iVar34 * 0x14) * 0x28);
    if ((0 < iVar13) || (-1 < iVar13)) goto LAB_004b0d0b;
    break;
  case 0x7a:
    iVar13 = *(int *)(iVar25 + 4 + iVar34 * 0x14);
    iVar21 = *(int *)(unaff_EBP - 0xe0);
    uVar31 = *(uint *)(iVar25 + 0xc + iVar34 * 0x14);
    puVar18 = (uint *)(iVar21 + 0x10 + iVar13 * 0x28);
    uVar27 = *puVar18;
    *puVar18 = *puVar18 + uVar31;
    piVar19 = (int *)(iVar21 + 0x14 + iVar13 * 0x28);
    *piVar19 = *piVar19 + ((int)uVar31 >> 0x1f) + (uint)CARRY4(uVar27,uVar31);
    unaff_EBX = *(int **)(unaff_EBP - 0xe4);
    if (*(int *)(iVar21 + 0x10 + iVar13 * 0x28) != 0 || *(int *)(iVar21 + 0x14 + iVar13 * 0x28) != 0
       ) goto LAB_004b0d0b;
    iVar34 = *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar34 * 0x14);
    goto LAB_004b0d04;
  case 0x7b:
    uVar27 = (uint)*(byte *)(iVar25 + 3 + iVar34 * 0x14);
    *(uint *)(unaff_EBP - 0xcc) = uVar27;
    iVar25 = *(int *)(unaff_EBP - 0xe0) + *(int *)(iVar25 + 8 + iVar34 * 0x14) * 0x28;
    iVar13 = *(int *)(unaff_EBP - 0xd4);
    *(int *)(unaff_EBP - 0xc0) = iVar25;
    iVar13 = *(int *)(iVar13 + 0xc);
    iVar21 = 0;
    *(int *)(unaff_EBP - 0x7c) = iVar13;
    *(undefined4 *)(unaff_EBP - 200) = 0;
    if (uVar27 != 0) {
      while( true ) {
        *(int *)(iVar13 + iVar21 * 4) = iVar25;
        FUN_004b7cb0(*(int *)(unaff_EBP - 0xc0));
        iVar21 = *(int *)(unaff_EBP - 200) + 1;
        iVar25 = *(int *)(unaff_EBP - 0xc0) + 0x28;
        *(int *)(unaff_EBP - 200) = iVar21;
        *(int *)(unaff_EBP - 0xc0) = iVar25;
        if (*(int *)(unaff_EBP - 0xcc) <= iVar21) break;
        iVar13 = *(int *)(unaff_EBP - 0x7c);
      }
    }
    iVar13 = *(int *)(unaff_EBP - 0xdc);
    iVar25 = *(int *)(unaff_EBP - 0xe0);
    *(undefined4 *)(unaff_EBP - 0xbc) = *(undefined4 *)(iVar13 + 0x10 + iVar34 * 0x14);
    iVar25 = iVar25 + *(int *)(iVar13 + 0xc + iVar34 * 0x14) * 0x28;
    *(int *)(unaff_EBP - 0xc4) = iVar25;
    *(int *)(unaff_EBP - 0x8c) = iVar25;
    *(int *)(iVar25 + 0x18) = *(int *)(iVar25 + 0x18) + 1;
    iVar25 = *(int *)(unaff_EBP - 0xbc);
    *(undefined2 *)(unaff_EBP - 0x98) = 1;
    *(undefined4 *)(unaff_EBP - 0xb0) = 0;
    *(undefined4 *)(unaff_EBP - 0x90) = 0;
    *(undefined4 *)(unaff_EBP - 0x94) = 0;
    *(int **)(unaff_EBP - 0xb4) = unaff_EBX;
    *(undefined4 *)(unaff_EBP - 0x84) = 0;
    *(undefined4 *)(unaff_EBP - 0x88) = 0;
    *(undefined4 *)(unaff_EBP - 0x80) = 0;
    if ((*(byte *)(iVar25 + 3) & 8) != 0) {
      *(undefined4 *)(unaff_EBP - 0x88) = *(undefined4 *)(iVar13 + -4 + iVar34 * 0x14);
    }
    (**(code **)(iVar25 + 0x10))();
    if (*(int *)(unaff_EBP - 0x84) != 0) {
      FUN_004ae680((int *)(unaff_EBP - 0xb4),1);
      FUN_004a9a30((int *)(*(int *)(unaff_EBP - 0xd4) + 0x34),(int)unaff_EBX,&DAT_0056de50);
      *(undefined4 *)(unaff_EBP - 0xd0) = *(undefined4 *)(unaff_EBP - 0x84);
    }
    if (*(int *)(unaff_EBP - 0x80) != 0) {
      iVar34 = *(int *)(iVar13 + -0x10 + iVar34 * 0x14);
      *(int *)(unaff_EBP - 200) = iVar34;
      if (iVar34 != 0) {
        FUN_004b7860((int *)(*(int *)(unaff_EBP - 0xe0) + iVar34 * 0x28),1,0);
      }
    }
    FUN_004b76e0((int *)(unaff_EBP - 0xb4));
    unaff_ESI = *(int **)(unaff_EBP - 0xd8);
    goto LAB_004b0d0b;
  case 0x7c:
    piVar19 = (int *)(*(int *)(unaff_EBP - 0xe0) + *(int *)(iVar25 + 4 + iVar34 * 0x14) * 0x28);
    *(int **)(unaff_EBP - 0xcc) = piVar19;
    iVar34 = FUN_004b7010(piVar19,*(int *)(iVar25 + 0x10 + iVar34 * 0x14));
    *(int *)(unaff_EBP - 0xd0) = iVar34;
    if (iVar34 != 0) {
      FUN_004ae680(*(int **)(unaff_EBP - 0xcc),1);
      FUN_004a9a30((int *)(*(int *)(unaff_EBP - 0xd4) + 0x34),(int)unaff_EBX,&DAT_0056de50);
    }
    FUN_004aec30(*(int **)(unaff_EBP - 0xcc),(uint)*(byte *)(unaff_EBP - 0xec));
    bVar11 = FUN_004b7d90(*(int **)(unaff_EBP - 0xcc));
    iVar34 = CONCAT31(extraout_var_01,bVar11);
    goto joined_r0x004b48db;
  case 0x7d:
    *(undefined4 *)(unaff_EBP - 200) = 0;
    *(undefined4 *)(unaff_EBP - 0xc0) = 0xffffffff;
    *(undefined4 *)(unaff_EBP - 0xc4) = 0xffffffff;
    iVar25 = FUN_00492280((int)unaff_EBX,*(int *)(iVar25 + 4 + iVar34 * 0x14),
                          *(int *)(iVar25 + 8 + iVar34 * 0x14),(undefined4 *)(unaff_EBP - 0xc4),
                          (undefined4 *)(unaff_EBP - 0xc0));
    *(int *)(unaff_EBP - 0xd0) = iVar25;
    if (iVar25 == 5) {
      *(undefined4 *)(unaff_EBP - 0xd0) = 0;
      *(undefined4 *)(unaff_EBP - 200) = 1;
    }
    iVar25 = *(int *)(unaff_EBP - 0xdc);
    iVar13 = *(int *)(unaff_EBP - 0xe0);
    in_EAX = 0;
    *(undefined4 *)(unaff_EBP - 0xcc) = 0;
    param_1 = (int *)(iVar13 + *(int *)(iVar25 + 0xc + iVar34 * 0x14) * 0x28);
    *(int **)(unaff_EBP - 0xbc) = param_1;
    goto LAB_004b4970;
  case 0x7e:
    uVar27 = *(uint *)(iVar25 + 0xc + iVar34 * 0x14);
    iVar25 = *(int *)(unaff_EBP - 0xdc);
    *(uint *)(unaff_EBP - 0xc4) = uVar27;
    piVar19 = *(int **)(unaff_EBX[4] + 4 + *(int *)(iVar25 + 4 + iVar34 * 0x14) * 0x10);
    *(int **)(unaff_EBP - 0xcc) = piVar19;
    puVar24 = (undefined4 *)piVar19[1];
    *(int **)(unaff_EBP - 0xf0) = piVar19;
    puVar18 = (uint *)*puVar24;
    *(uint **)(unaff_EBP - 200) = puVar18;
    uVar31 = (uint)*(byte *)((int)puVar18 + 5);
    if (uVar27 == 0xffffffff) {
      uVar27 = uVar31;
    }
    *(uint *)(unaff_EBP - 0xc0) = uVar31;
    *(uint *)(unaff_EBP - 0xc4) = uVar27;
    if ((2 < *(byte *)((int)puVar18 + 0xf)) ||
       (((*(int *)puVar18[0x10] != 0 && (-1 < (int)puVar18[0x13])) &&
        ((0 < (int)puVar18[0x13] || (puVar18[0x12] != 0)))))) {
      *(uint *)(unaff_EBP - 0xc4) = uVar31;
      uVar27 = uVar31;
    }
    pcVar22 = "";
    if (*(char *)((int)puVar18 + 0xe) == '\0') {
      pcVar22 = (char *)puVar18[0x24];
    }
    *(char **)(unaff_EBP - 0xbc) = pcVar22;
    if (uVar27 == 5) {
      uVar27 = FUN_004aa9b0(pcVar22);
      if ((uVar27 != 0) && (iVar25 = FUN_004a2c50((int)puVar18), iVar25 != 0)) {
        piVar19 = *(int **)(unaff_EBP - 0xf0);
        uVar27 = extraout_EDX_00;
        goto LAB_004b4abb;
      }
      *(uint *)(unaff_EBP - 0xc4) = uVar31;
      uVar27 = uVar31;
LAB_004b4a59:
      if (*(int *)(unaff_EBP - 0xd0) != 0) goto LAB_004b4a62;
    }
    else {
LAB_004b4abb:
      if ((uVar27 == uVar31) || ((uVar31 != 5 && (uVar27 != 5)))) goto LAB_004b4a59;
      if ((*(char *)(*(int *)(unaff_EBP - 0xe4) + 0x36) == '\0') ||
         (1 < *(int *)(*(int *)(unaff_EBP - 0xe4) + 0x84))) {
        unaff_EBX = *(int **)(unaff_EBP - 0xe4);
        iVar34 = *(int *)(unaff_EBP - 0xd4);
        *(undefined4 *)(unaff_EBP - 0xd0) = 1;
        FUN_004a9a30((int *)(iVar34 + 0x34),(int)unaff_EBX,
                     (byte *)"cannot change %s wal mode from within a transaction");
        uVar27 = 1;
        unaff_ESI = *(int **)(unaff_EBP - 0xd8);
        goto LAB_004b0d11;
      }
      if (uVar31 == 5) {
        iVar25 = FUN_004a18e0((int *)puVar18);
        *(int *)(unaff_EBP - 0xd0) = iVar25;
        if (iVar25 == 0) {
          FUN_004a26f0(*(uint **)(unaff_EBP - 200),*(uint *)(unaff_EBP - 0xc4));
          uVar27 = *(uint *)(unaff_EBP - 0xc4);
          piVar19 = *(int **)(unaff_EBP - 0xcc);
LAB_004b4b68:
          uVar23 = FUN_00491d30(piVar19,(uVar27 == 5) + 1);
          uVar31 = *(uint *)(unaff_EBP - 0xc0);
          uVar27 = *(uint *)(unaff_EBP - 0xc4);
          puVar18 = *(uint **)(unaff_EBP - 200);
          *(uint *)(unaff_EBP - 0xd0) = uVar23;
          goto LAB_004b4a59;
        }
        puVar18 = *(uint **)(unaff_EBP - 200);
        uVar31 = *(uint *)(unaff_EBP - 0xc0);
      }
      else {
        if (uVar31 == 4) {
          FUN_004a26f0(puVar18,2);
          uVar31 = *(uint *)(unaff_EBP - 0xc0);
          uVar27 = *(uint *)(unaff_EBP - 0xc4);
          puVar18 = *(uint **)(unaff_EBP - 200);
          piVar19 = *(int **)(unaff_EBP - 0xcc);
        }
        if (*(int *)(unaff_EBP - 0xd0) == 0) goto LAB_004b4b68;
      }
LAB_004b4a62:
      uVar27 = uVar31;
      *(uint *)(unaff_EBP - 0xc4) = uVar27;
    }
    uVar10 = FUN_004a26f0(puVar18,uVar27);
    iVar25 = *(int *)(unaff_EBP - 0xe0);
    *(uint *)(unaff_EBP - 0xc4) = CONCAT31(extraout_var_02,uVar10);
    piVar19 = (int *)(iVar25 + *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar34 * 0x14) * 0x28);
    *(undefined2 *)(piVar19 + 7) = 0xa02;
    iVar34 = *(int *)(unaff_EBP - 0xc4);
    *(int **)(unaff_EBP - 0xd8) = piVar19;
    if (iVar34 == 6) {
      pcVar22 = (char *)0x0;
    }
    else {
      pcVar22 = (&PTR_s_delete_0056a9c4)[iVar34];
    }
    piVar19[1] = (int)pcVar22;
    uVar27 = FUN_004aa9b0(pcVar22);
    piVar19[6] = uVar27;
    bVar9 = *(byte *)(unaff_EBP - 0xec);
    *(undefined1 *)((int)piVar19 + 0x1f) = 1;
    FUN_004aec30(piVar19,(uint)bVar9);
    unaff_EBX = *(int **)(unaff_EBP - 0xe4);
    unaff_ESI = *(int **)(unaff_EBP - 0xd8);
    goto LAB_004b0d0b;
  case 0x7f:
    uVar27 = FUN_004a74f0((int *)(*(int *)(unaff_EBP - 0xd4) + 0x34),(int)unaff_EBX);
    *(uint *)(unaff_EBP - 0xd0) = uVar27;
    goto LAB_004b0d11;
  case 0x80:
    puVar24 = *(undefined4 **)(unaff_EBX[4] + 4 + *(int *)(iVar25 + 4 + iVar34 * 0x14) * 0x10);
    *(undefined4 **)(unaff_EBP - 0xcc) = puVar24;
    uVar27 = FUN_0048ff20(puVar24);
    *(uint *)(unaff_EBP - 0xd0) = uVar27;
    if (uVar27 == 0x65) {
      *(int *)(unaff_EBP - 0xe8) = *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar34 * 0x14) + -1;
      uVar27 = 0;
      *(undefined4 *)(unaff_EBP - 0xd0) = 0;
    }
    goto LAB_004b0d11;
  case 0x81:
    if (*(int *)(iVar25 + 4 + iVar34 * 0x14) == 0) {
      FUN_00496370((int)unaff_EBX);
    }
    else {
      puVar18 = (uint *)(*(int *)(unaff_EBP - 0xd4) + 0x60);
      *puVar18 = *puVar18 | 0x20;
    }
    goto LAB_004b0d0b;
  case 0x82:
    *(undefined2 *)(unaff_ESI + 7) = 8;
    *(undefined8 *)(unaff_ESI + 2) = **(undefined8 **)(iVar25 + 0x10 + iVar34 * 0x14);
    goto LAB_004b0d0b;
  case 0x83:
    cVar8 = *(char *)(iVar25 + 0xc + iVar34 * 0x14);
    *(char *)(unaff_EBP - 0x114) = cVar8;
    if ((cVar8 == '\0') && ((unaff_EBX[6] & 0x800U) != 0)) goto LAB_004b0d0b;
    uVar27 = FUN_00490810(*(undefined8 **)
                           (unaff_EBX[4] + 4 + *(int *)(iVar25 + 4 + iVar34 * 0x14) * 0x10),
                          *(int *)(iVar25 + 8 + iVar34 * 0x14),
                          (char)*(undefined4 *)(unaff_EBP - 0x114));
    *(uint *)(unaff_EBP - 0xd0) = uVar27;
    if ((char)uVar27 == '\x06') {
      FUN_004a9a30((int *)(*(int *)(unaff_EBP - 0xd4) + 0x34),(int)unaff_EBX,
                   (byte *)"database table is locked: %s");
      goto LAB_004b0d0b;
    }
    goto LAB_004b0d11;
  case 0x84:
    iVar34 = *(int *)(iVar25 + 0x10 + iVar34 * 0x14);
    *(int *)(unaff_EBP - 0xcc) = iVar34;
    iVar34 = FUN_004b96f0((int)unaff_EBX,iVar34);
    *(int *)(unaff_EBP - 0xd0) = iVar34;
    if (*(int *)(unaff_EBP - 0xcc) != 0) {
      FUN_0047e200(*(int **)(unaff_EBP - 0xd4),*(int *)(*(int *)(unaff_EBP - 0xcc) + 8));
    }
    goto LAB_004b0d0b;
  case 0x85:
    uVar27 = FUN_004b9980((int)unaff_EBX,*(int *)(iVar25 + 4 + iVar34 * 0x14),
                          *(byte **)(iVar25 + 0x10 + iVar34 * 0x14),
                          (undefined4 *)(*(int *)(unaff_EBP - 0xd4) + 0x34));
    *(uint *)(unaff_EBP - 0xd0) = uVar27;
    goto LAB_004b0d11;
  case 0x86:
    *(uint *)(*(int *)(unaff_EBP - 0xd4) + 0x60) =
         *(uint *)(*(int *)(unaff_EBP - 0xd4) + 0x60) & 0xfffffffb | 8;
    uVar27 = FUN_004b9aa0((int)unaff_EBX,*(int *)(iVar25 + 4 + iVar34 * 0x14),
                          *(byte **)(iVar25 + 0x10 + iVar34 * 0x14));
    puVar18 = (uint *)(*(int *)(unaff_EBP - 0xd4) + 0x60);
    *puVar18 = *puVar18 & 0xfffffff3;
    *(uint *)(unaff_EBP - 0xd0) = uVar27;
    goto LAB_004b0d11;
  case 0x87:
    *(undefined4 *)(unaff_EBP - 0xcc) = 0;
    *(undefined4 *)(unaff_EBP - 200) = 0;
    piVar19 = *(int **)(*(int *)(iVar25 + 0x10 + iVar34 * 0x14) + 8);
    *(int **)(unaff_EBP - 0xc4) = piVar19;
    iVar25 = *piVar19;
    *(int *)(unaff_EBP - 0xc0) = iVar25;
    uVar26 = (**(code **)(iVar25 + 0x18))(piVar19);
    iVar25 = *(int *)(unaff_EBP - 0xc4);
    *(undefined4 *)(unaff_EBP - 0xd0) = uVar26;
    FUN_0047e200(*(int **)(unaff_EBP - 0xd4),iVar25);
    uVar27 = *(uint *)(unaff_EBP - 0xd0);
    if (uVar27 == 0) {
      **(undefined4 **)(unaff_EBP - 200) = *(undefined4 *)(unaff_EBP - 0xc4);
      puVar24 = FUN_0046c260(*(int **)(unaff_EBP - 0xd4),
                             *(int *)(*(int *)(unaff_EBP - 0xdc) + 4 + iVar34 * 0x14),0,0xffffffff,0
                            );
      *(undefined4 **)(unaff_EBP - 0xcc) = puVar24;
      if (puVar24 == (undefined4 *)0x0) {
        *(undefined1 *)(unaff_EBX + 0xe) = 1;
        (**(code **)(*(int *)(unaff_EBP - 0xc0) + 0x1c))();
      }
      else {
        puVar24[9] = *(undefined4 *)(unaff_EBP - 200);
        *(undefined4 *)(*(int *)(unaff_EBP - 0xcc) + 0x28) =
             *(undefined4 *)**(undefined4 **)(unaff_EBP - 200);
      }
      goto LAB_004b0d0b;
    }
    goto LAB_004b0d11;
  case 0x88:
    iVar13 = *(int *)(unaff_EBP - 0xe0) + *(int *)(iVar25 + 0xc + iVar34 * 0x14) * 0x28;
    iVar21 = *(int *)(unaff_EBP - 0xdc);
    *(int *)(unaff_EBP - 0xc0) = iVar13;
    iVar25 = iVar13 + 0x28;
    *(int *)(unaff_EBP - 0xbc) = iVar25;
    iVar21 = *(int *)(*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
                     *(int *)(iVar21 + 4 + iVar34 * 0x14) * 4);
    *(int *)(unaff_EBP - 0xb0) = iVar21;
    puVar24 = *(undefined4 **)(iVar21 + 0x24);
    *(undefined4 **)(unaff_EBP - 0xb8) = puVar24;
    *(undefined4 **)(unaff_EBP - 0x104) = puVar24;
    puVar24 = (undefined4 *)*puVar24;
    *(undefined4 **)(unaff_EBP - 0xb4) = puVar24;
    uVar26 = *puVar24;
    *(undefined4 *)(unaff_EBP - 0xc4) = uVar26;
    iVar21 = *(int *)(iVar13 + 0x38);
    *(undefined4 *)(unaff_EBP - 0xd0) = uVar26;
    *(int *)(unaff_EBP - 0xcc) = iVar21;
    uVar26 = *(undefined4 *)(iVar13 + 0x10);
    *(undefined4 *)(unaff_EBP - 0xf0) = uVar26;
    *(undefined4 *)(unaff_EBP - 200) = uVar26;
    iVar14 = *(int *)(unaff_EBP - 0xd4);
    iVar30 = 0;
    iVar13 = *(int *)(iVar14 + 0xc);
    *(undefined4 *)(unaff_EBP - 0xac) = 0;
    *(int *)(unaff_EBP - 0xa4) = iVar13;
    *(undefined4 *)(unaff_EBP - 0xa8) = 0;
    if (iVar21 < 1) {
      iVar25 = *(int *)(unaff_EBP - 0xd0);
    }
    else {
      while( true ) {
        *(int *)(iVar13 + iVar30 * 4) = iVar25 + (iVar30 + 1) * 0x28;
        FUN_004b7cb0(*(int *)(*(int *)(unaff_EBP - 0xa4) + *(int *)(unaff_EBP - 0xa8) * 4));
        iVar21 = *(int *)(unaff_EBP - 0xcc);
        iVar13 = *(int *)(unaff_EBP - 0xa4);
        iVar30 = *(int *)(unaff_EBP - 0xa8) + 1;
        *(int *)(unaff_EBP - 0xa8) = iVar30;
        if (iVar21 <= iVar30) break;
        iVar25 = *(int *)(unaff_EBP - 0xbc);
      }
      uVar26 = *(undefined4 *)(unaff_EBP - 0xb8);
      iVar25 = *(int *)(unaff_EBP - 0xc4);
      *(undefined4 *)(unaff_EBP - 0xf0) = *(undefined4 *)(unaff_EBP - 200);
      iVar14 = *(int *)(unaff_EBP - 0xd4);
      *(undefined4 *)(unaff_EBP - 0x104) = uVar26;
    }
    iVar13 = *(int *)(unaff_EBP - 0xdc);
    *(uint *)(*(int *)(unaff_EBP - 0xd4) + 0x60) = *(uint *)(iVar14 + 0x60) & 0xfffffff7 | 4;
    uVar26 = (**(code **)(iVar25 + 0x20))
                       (*(undefined4 *)(unaff_EBP - 0x104),*(undefined4 *)(unaff_EBP - 0xf0),
                        *(undefined4 *)(iVar13 + 0x10 + iVar34 * 0x14),iVar21);
    iVar25 = *(int *)(unaff_EBP - 0xb4);
    *(undefined4 *)(unaff_EBP - 0xd0) = uVar26;
    piVar19 = *(int **)(unaff_EBP - 0xd4);
    puVar18 = (uint *)(piVar19 + 0x18);
    *puVar18 = *puVar18 & 0xfffffff3;
    FUN_0047e200(piVar19,iVar25);
    if (*(int *)(unaff_EBP - 0xd0) == 0) {
      iVar25 = (**(code **)(*(int *)(unaff_EBP - 0xc4) + 0x28))();
      *(int *)(unaff_EBP - 0xac) = iVar25;
    }
    else {
      iVar25 = *(int *)(unaff_EBP - 0xac);
    }
    if (iVar25 != 0) {
      *(int *)(unaff_EBP - 0xe8) = *(int *)(iVar13 + 8 + iVar34 * 0x14) + -1;
    }
    unaff_EBX = *(int **)(unaff_EBP - 0xe4);
    unaff_ESI = *(int **)(unaff_EBP - 0xd8);
    *(undefined1 *)(*(int *)(unaff_EBP - 0xb0) + 0x1c) = 0;
    goto LAB_004b0d0b;
  case 0x89:
    iVar13 = *(int *)(*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
                     *(int *)(iVar25 + 4 + iVar34 * 0x14) * 4);
    iVar25 = *(int *)(unaff_EBP - 0xe0) + *(int *)(iVar25 + 0xc + iVar34 * 0x14) * 0x28;
    *(int *)(unaff_EBP - 0xc4) = iVar25;
    if (*(char *)(iVar13 + 0x1c) != '\0') {
      FUN_004b78c0(iVar25);
      unaff_ESI = *(int **)(unaff_EBP - 0xd8);
      goto LAB_004b0d0b;
    }
    puVar24 = (undefined4 *)**(undefined4 **)(iVar13 + 0x24);
    *(undefined4 **)(unaff_EBP - 0xcc) = puVar24;
    *(undefined4 *)(unaff_EBP - 200) = *puVar24;
    memset((void *)(unaff_EBP - 0xbc),0,0x40);
    FUN_004b7500((int *)(unaff_EBP - 0xb4),*(undefined8 **)(unaff_EBP - 0xc4));
    *(ushort *)(unaff_EBP - 0x98) = (ushort)*(undefined4 *)(unaff_EBP - 0x98) & 0xbe01 | 1;
    uVar26 = (**(code **)(*(int *)(unaff_EBP - 200) + 0x2c))
                       (*(undefined4 *)(iVar13 + 0x24),unaff_EBP - 0xbc,
                        *(undefined4 *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar34 * 0x14));
    iVar34 = *(int *)(unaff_EBP - 0xcc);
    *(undefined4 *)(unaff_EBP - 0xd0) = uVar26;
    FUN_0047e200(*(int **)(unaff_EBP - 0xd4),iVar34);
    iVar34 = *(int *)(unaff_EBP - 0xd0);
    if (*(int *)(unaff_EBP - 0x84) != 0) {
      iVar34 = *(int *)(unaff_EBP - 0x84);
    }
    bVar9 = *(byte *)(unaff_EBP - 0xec);
    *(int *)(unaff_EBP - 0xd0) = iVar34;
    FUN_004aec30((int *)(unaff_EBP - 0xb4),(uint)bVar9);
    FUN_004b7500(*(int **)(unaff_EBP - 0xc4),(undefined8 *)(unaff_EBP - 0xb4));
    bVar11 = FUN_004b7d90(*(int **)(unaff_EBP - 0xc4));
    if (CONCAT31(extraout_var_03,bVar11) != 0) goto LAB_004b5780;
    unaff_ESI = *(int **)(unaff_EBP - 0xd8);
    goto LAB_004b0d0b;
  case 0x8a:
    iVar13 = *(int *)(unaff_EBP - 0xd4);
    *(undefined4 *)(unaff_EBP - 0xc4) = 0;
    iVar25 = *(int *)(*(int *)(iVar13 + 0x40) + *(int *)(iVar25 + 4 + iVar34 * 0x14) * 4);
    *(int *)(unaff_EBP - 0xc0) = iVar25;
    if (*(char *)(iVar25 + 0x1c) != '\0') goto LAB_004b0d0b;
    piVar19 = *(int **)(unaff_EBP - 0xd4);
    piVar29 = (int *)**(undefined4 **)(iVar25 + 0x24);
    *(int **)(unaff_EBP - 0xcc) = piVar29;
    iVar25 = *piVar29;
    iVar13 = *(int *)(unaff_EBP - 0xd4);
    *(int *)(unaff_EBP - 200) = iVar25;
    piVar19[0x18] = *(uint *)(iVar13 + 0x60) & 0xfffffff7 | 4;
    uVar26 = (**(code **)(iVar25 + 0x24))();
    iVar25 = *(int *)(unaff_EBP - 0xcc);
    *(undefined4 *)(unaff_EBP - 0xd0) = uVar26;
    piVar19[0x18] = piVar19[0x18] & 0xfffffff3;
    FUN_0047e200(piVar19,iVar25);
    unaff_EBX = *(int **)(unaff_EBP - 0xe4);
    if (*(int *)(unaff_EBP - 0xd0) == 0) {
      iVar25 = (**(code **)(*(int *)(unaff_EBP - 200) + 0x28))();
      *(int *)(unaff_EBP - 0xc4) = iVar25;
    }
    else {
      iVar25 = *(int *)(unaff_EBP - 0xc4);
    }
    if (iVar25 != 0) goto LAB_004b0d0b;
    iVar34 = *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar34 * 0x14);
    goto LAB_004b0d04;
  case 0x8b:
    goto switchD_004af4da_caseD_8b;
  case 0x8c:
    piVar19 = *(int **)(*(int *)(iVar25 + 0x10 + iVar34 * 0x14) + 8);
    *(int **)(unaff_EBP - 0xcc) = piVar19;
    iVar13 = *piVar19;
    *(int *)(unaff_EBP - 200) = iVar13;
    iVar25 = *(int *)(iVar25 + 8 + iVar34 * 0x14);
    *(int *)(unaff_EBP - 0xc4) = iVar25;
    if (*(int *)(iVar13 + 0x34) == 0) goto LAB_004b0d0b;
    iVar30 = unaff_EBX[0xf];
    iVar21 = *(int *)(unaff_EBP - 0xdc);
    iVar13 = *(int *)(unaff_EBP - 0xe0);
    *(undefined4 *)(unaff_EBP - 0xb4) = *(undefined4 *)(*(int *)(unaff_EBP - 0xd4) + 0xc);
    iVar14 = *(int *)(iVar21 + 0xc + iVar34 * 0x14);
    *(undefined4 *)(unaff_EBP - 0xc0) = 0;
    iVar13 = iVar13 + iVar14 * 0x28;
    *(int *)(unaff_EBP - 0xb0) = iVar13;
    if (0 < iVar25) {
      do {
        FUN_004b7cb0(iVar13);
        *(undefined4 *)(*(int *)(unaff_EBP - 0xb4) + *(int *)(unaff_EBP - 0xc0) * 4) =
             *(undefined4 *)(unaff_EBP - 0xb0);
        iVar25 = *(int *)(unaff_EBP - 0xc0) + 1;
        iVar13 = *(int *)(unaff_EBP - 0xb0) + 0x28;
        *(int *)(unaff_EBP - 0xb0) = iVar13;
        *(int *)(unaff_EBP - 0xc0) = iVar25;
      } while (iVar25 < *(int *)(unaff_EBP - 0xc4));
    }
    iVar25 = *(int *)(unaff_EBP - 0xe4);
    *(undefined1 *)(iVar25 + 0x3c) = *(undefined1 *)(iVar21 + 3 + iVar34 * 0x14);
    uVar26 = (**(code **)(*(int *)(unaff_EBP - 200) + 0x34))
                       (*(undefined4 *)(unaff_EBP - 0xcc),*(undefined4 *)(unaff_EBP - 0xc4),
                        *(undefined4 *)(unaff_EBP - 0xb4));
    *(char *)(iVar25 + 0x3c) = (char)iVar30;
    iVar25 = *(int *)(unaff_EBP - 0xcc);
    piVar19 = *(int **)(unaff_EBP - 0xd4);
    *(undefined4 *)(unaff_EBP - 0xd0) = uVar26;
    FUN_0047e200(piVar19,iVar25);
    if (*(int *)(unaff_EBP - 0xd0) == 0) {
      unaff_EBX = *(int **)(unaff_EBP - 0xe4);
      if (*(int *)(*(int *)(unaff_EBP - 0xdc) + 4 + iVar34 * 0x14) != 0) {
        uVar26 = *(undefined4 *)(unaff_EBP - 0xb8);
        iVar34 = *(int *)(unaff_EBP - 0xbc);
        unaff_EBX[8] = iVar34;
        *(undefined4 *)(unaff_EBP - 0xfc) = uVar26;
        unaff_EBX[9] = *(int *)(unaff_EBP - 0xb8);
        piVar19[0x19] = piVar19[0x19] + 1;
        unaff_ESI = *(int **)(unaff_EBP - 0xd8);
        *(int *)(unaff_EBP - 0x100) = iVar34;
        goto LAB_004b0d0b;
      }
    }
    else {
      if ((*(int *)(unaff_EBP - 0xd0) == 0x13) &&
         (*(char *)(*(int *)(*(int *)(unaff_EBP - 0xdc) + 0x10 + iVar34 * 0x14) + 0x10) != '\0')) {
        cVar8 = *(char *)(*(int *)(unaff_EBP - 0xdc) + 3 + iVar34 * 0x14);
        if (cVar8 != '\x04') {
          if (cVar8 == '\x05') {
            unaff_EBX = *(int **)(unaff_EBP - 0xe4);
            *(undefined1 *)(piVar19 + 0x17) = 2;
            unaff_ESI = *(int **)(unaff_EBP - 0xd8);
          }
          else {
            unaff_EBX = *(int **)(unaff_EBP - 0xe4);
            *(char *)(piVar19 + 0x17) = cVar8;
            unaff_ESI = *(int **)(unaff_EBP - 0xd8);
          }
          goto LAB_004b0d0b;
        }
        unaff_EBX = *(int **)(unaff_EBP - 0xe4);
        unaff_ESI = *(int **)(unaff_EBP - 0xd8);
        *(undefined4 *)(unaff_EBP - 0xd0) = 0;
        uVar27 = 0;
        goto LAB_004b0d11;
      }
      unaff_EBX = *(int **)(unaff_EBP - 0xe4);
    }
    piVar19[0x19] = piVar19[0x19] + 1;
    unaff_ESI = *(int **)(unaff_EBP - 0xd8);
    goto LAB_004b0d0b;
  case 0x8d:
    piVar19 = (int *)(*(int *)(unaff_EBP - 0xe0) + *(int *)(iVar25 + 4 + iVar34 * 0x14) * 0x28);
    uVar4 = *(ushort *)(piVar19 + 7);
    if ((uVar4 & 1) != 0) goto LAB_004af570;
    *(ushort *)(piVar19 + 7) = uVar4 >> 3 & 2 | uVar4;
    if (((uVar4 >> 3 & 2) == 0 && (uVar4 & 2) == 0) && ((uVar4 & 0xc) != 0)) {
      FUN_004b7cf0(piVar19,(uint)*(byte *)(unaff_EBP - 0xec));
    }
    *(ushort *)(piVar19 + 7) = *(ushort *)(piVar19 + 7) & 0xfff3;
    if ((*(ushort *)(piVar19 + 7) & 0x4000) == 0) {
      uVar27 = 0;
      *(ushort *)(piVar19 + 7) = *(ushort *)(piVar19 + 7) & 0xbfe3;
      *(undefined4 *)(unaff_EBP - 0xd0) = 0;
LAB_004b0616:
      unaff_ESI = *(int **)(unaff_EBP - 0xd8);
    }
    else {
      uVar27 = FUN_004b6fa0(piVar19);
      *(ushort *)(piVar19 + 7) = *(ushort *)(piVar19 + 7) & 0xbfe3;
      unaff_ESI = *(int **)(unaff_EBP - 0xd8);
      *(uint *)(unaff_EBP - 0xd0) = uVar27;
    }
    goto LAB_004b0d11;
  case 0x8e:
    piVar19 = (int *)(*(int *)(unaff_EBP - 0xe0) + *(int *)(iVar25 + 4 + iVar34 * 0x14) * 0x28);
    uVar4 = *(ushort *)(piVar19 + 7);
    if ((uVar4 & 1) != 0) goto LAB_004af570;
    if ((uVar4 & 0x10) == 0) {
      if (((uVar4 & 2) == 0) && ((uVar4 & 0xc) != 0)) {
        FUN_004b7cf0(piVar19,(uint)*(byte *)(unaff_EBP - 0xec));
      }
      *(ushort *)(piVar19 + 7) = *(ushort *)(piVar19 + 7) & 0xbe10 | 0x10;
      unaff_ESI = *(int **)(unaff_EBP - 0xd8);
    }
    else {
      *(ushort *)(piVar19 + 7) = uVar4 & 0xfe10;
      unaff_ESI = *(int **)(unaff_EBP - 0xd8);
    }
    goto LAB_004b0d0b;
  case 0x8f:
    FUN_004b75f0(*(int *)(unaff_EBP - 0xe0) + *(int *)(iVar25 + 4 + iVar34 * 0x14) * 0x28);
    goto LAB_004b0d0b;
  case 0x90:
    iVar34 = *(int *)(iVar25 + 4 + iVar34 * 0x14);
    if ((*(byte *)(*(int *)(unaff_EBP - 0xe0) + 0x1c + iVar34 * 0x28) & 1) == 0) {
      FUN_004b7410(*(int *)(unaff_EBP - 0xe0) + iVar34 * 0x28);
    }
    goto LAB_004b0d0b;
  case 0x91:
    iVar34 = *(int *)(iVar25 + 4 + iVar34 * 0x14);
    if ((*(byte *)(*(int *)(unaff_EBP - 0xe0) + 0x1c + iVar34 * 0x28) & 1) == 0) {
      FUN_004b7670(*(int *)(unaff_EBP - 0xe0) + iVar34 * 0x28);
    }
    goto LAB_004b0d0b;
  case 0x92:
    unaff_ESI[4] = *(int *)(*(int *)(*(int *)(unaff_EBX[4] + 4 +
                                             *(int *)(iVar25 + 4 + iVar34 * 0x14) * 0x10) + 4) +
                           0x2c);
    unaff_ESI[5] = 0;
    goto LAB_004b0d0b;
  case 0x93:
    puVar24 = *(undefined4 **)(unaff_EBX[4] + 4 + *(int *)(iVar25 + 4 + iVar34 * 0x14) * 0x10);
    uVar27 = *(uint *)(*(int *)(unaff_EBP - 0xdc) + 0xc + iVar34 * 0x14);
    uVar31 = 0;
    if ((uVar27 != 0) && (uVar31 = *(uint *)(puVar24[1] + 0x2c), uVar31 < uVar27)) {
      uVar31 = uVar27;
    }
    iVar34 = FUN_00490880(puVar24,uVar31);
    unaff_ESI[4] = iVar34;
    unaff_ESI[5] = iVar34 >> 0x1f;
    goto LAB_004b0d0b;
  case 0x94:
    if ((unaff_EBX[0x26] != 0) && ((*(uint *)(*(int *)(unaff_EBP - 0xd4) + 0x60) & 0x400) == 0)) {
      pbVar33 = *(byte **)(iVar25 + 0x10 + iVar34 * 0x14);
      if (pbVar33 == (byte *)0x0) {
        pbVar33 = *(byte **)(*(int *)(unaff_EBP - 0xd4) + 0x98);
      }
      *(byte **)(unaff_EBP - 0xcc) = pbVar33;
      if (pbVar33 != (byte *)0x0) {
        uVar26 = FUN_004b5b10(*(uint **)(unaff_EBP - 0xd4),pbVar33);
        *(undefined4 *)(unaff_EBP - 200) = uVar26;
        (*(code *)unaff_EBX[0x26])(unaff_EBX[0x27]);
        FUN_00494b00((int)unaff_EBX,*(undefined4 **)(unaff_EBP - 200));
      }
    }
  default:
    goto LAB_004b0d0b;
  }
  iVar34 = *(int *)(iVar25 + 8 + iVar34 * 0x14);
  goto LAB_004b0d04;
switchD_004af4da_caseD_8b:
  iVar13 = *(int *)(unaff_EBP - 0xe0);
  *(undefined4 *)(unaff_EBP - 0xcc) = *(undefined4 *)(*(int *)(iVar25 + 0x10 + iVar34 * 0x14) + 8);
  piVar19 = (int *)(iVar13 + *(int *)(iVar25 + 4 + iVar34 * 0x14) * 0x28);
  *(int **)(unaff_EBP - 200) = piVar19;
  uVar27 = FUN_004aec30(piVar19,1);
  *(uint *)(unaff_EBP - 0xd0) = uVar27;
  if (uVar27 == 0) goto code_r0x004b5255;
  goto LAB_004b0d11;
code_r0x004b5255:
  uVar26 = (**(code **)(**(int **)(unaff_EBP - 0xcc) + 0x4c))(*(int **)(unaff_EBP - 0xcc));
  iVar34 = *(int *)(unaff_EBP - 0xcc);
  *(undefined4 *)(unaff_EBP - 0xd0) = uVar26;
  FUN_0047e200(*(int **)(unaff_EBP - 0xd4),iVar34);
  puVar18 = (uint *)(*(int *)(unaff_EBP - 0xd4) + 0x60);
  *puVar18 = *puVar18 & 0xffffffdf;
  goto LAB_004b0d0b;
  while( true ) {
    uVar28 = uVar28 + 1;
    uVar27 = (uint)uVar28;
    *(ushort *)(unaff_EBP - 0xcc) = uVar28;
    if (uVar4 <= uVar27) break;
LAB_004b2a50:
    if ((*(byte *)(iVar25 + 0x1c + uVar27 * 0x28) & 1) != 0) {
      unaff_EBX = *(int **)(unaff_EBP - 0xe4);
      iVar34 = *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar34 * 0x14);
      unaff_ESI = *(int **)(unaff_EBP - 0xd8);
      *(undefined4 *)(unaff_EBP - 0xc4) = 0;
      goto LAB_004b0d04;
    }
  }
LAB_004b2a6e:
  if (*(int *)(unaff_EBP - 0xf0) != 0) {
    *(undefined4 *)(unaff_EBP - 0xb4) = *(undefined4 *)(*(int *)(unaff_EBP - 200) + 8);
    *(short *)(unaff_EBP - 0xb0) = (short)*(undefined4 *)(unaff_EBP - 0xc0) + 1;
    *(undefined1 *)(unaff_EBP - 0xae) = 4;
    *(int *)(unaff_EBP - 0xa4) = iVar25;
    FUN_004b7410(iVar13);
    *(undefined4 *)(unaff_EBP - 0x9c) = *(undefined4 *)(iVar13 + 0x10);
    *(undefined4 *)(unaff_EBP - 0x98) = *(undefined4 *)(iVar13 + 0x14);
    uVar27 = FUN_004908e0(*(int **)(unaff_EBP - 0xc4),(int *)(unaff_EBP - 0xb4),0,0,0,
                          (uint *)(*(int *)(unaff_EBP - 200) + 0x4c));
    bVar9 = *(byte *)(unaff_EBP - 0xae);
    *(uint *)(unaff_EBP - 0xd0) = uVar27;
    if (((bVar9 & 4) == 0) &&
       ((*(int *)(unaff_EBP - 0xac) != *(int *)(unaff_EBP - 0x9c) ||
        (*(int *)(unaff_EBP - 0xa8) != *(int *)(unaff_EBP - 0x98))))) {
      unaff_ESI = *(int **)(unaff_EBP - 0xd8);
      *(int *)(iVar13 + 0x10) = *(int *)(unaff_EBP - 0xac);
      *(undefined4 *)(iVar13 + 0x14) = *(undefined4 *)(unaff_EBP - 0xa8);
      unaff_EBX = *(int **)(unaff_EBP - 0xe4);
    }
    else {
LAB_004b4170:
      unaff_EBX = *(int **)(unaff_EBP - 0xe4);
      iVar34 = *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar34 * 0x14);
      unaff_ESI = *(int **)(unaff_EBP - 0xd8);
LAB_004b0d04:
      iVar34 = iVar34 + -1;
LAB_004b0d05:
      *(int *)(unaff_EBP - 0xe8) = iVar34;
    }
    goto LAB_004b0d0b;
  }
LAB_004af834:
  unaff_EBX = *(int **)(unaff_EBP - 0xe4);
  unaff_ESI = *(int **)(unaff_EBP - 0xd8);
  goto LAB_004b0d0b;
LAB_004b19bf:
  unaff_EBX = *(int **)(unaff_EBP - 0xe4);
  FUN_004a9a30((int *)(*(int *)(unaff_EBP - 0xd4) + 0x34),(int)unaff_EBX,
               (byte *)"no such savepoint: %s");
  unaff_ESI = *(int **)(unaff_EBP - 0xd8);
  uVar27 = 1;
  *(undefined4 *)(unaff_EBP - 0xd0) = 1;
  goto LAB_004b0d11;
code_r0x004b19a5:
  pbVar33 = *(byte **)(unaff_EBP - 0xf0);
  iVar25 = iVar25 + 1;
  *(int *)(unaff_EBP - 0xb4) = iVar25;
  puVar24 = (undefined4 *)puVar24[4];
  *(undefined4 **)(unaff_EBP - 0xbc) = puVar24;
  goto joined_r0x004b1994;
LAB_004b09a0:
  iVar21 = iVar25;
  if (iVar13 != 0) {
    iVar21 = *(int *)(iVar13 + iVar25 * 4);
  }
  *(int *)(unaff_EBP - 0xb8) = iVar21;
  iVar13 = *(int *)(iVar14 + 0xc + iVar25 * 4);
  *(int *)(unaff_EBP - 0xb4) = iVar13;
  *(uint *)(unaff_EBP - 0xb0) = (uint)*(byte *)(*(int *)(iVar14 + 8) + iVar25);
  uVar27 = FUN_004a0720((undefined8 *)
                        (*(int *)(unaff_EBP - 0xe0) + (*(int *)(unaff_EBP - 0xf0) + iVar21) * 0x28),
                        (undefined8 *)(*(int *)(unaff_EBP - 0xe0) + (iVar21 + iVar34) * 0x28),iVar13
                       );
  *(uint *)(unaff_EBP - 0x10c) = uVar27;
  if (uVar27 == 0) {
    iVar25 = *(int *)(unaff_EBP - 200) + 1;
    *(int *)(unaff_EBP - 200) = iVar25;
    if (*(int *)(unaff_EBP - 0xcc) <= iVar25) goto LAB_004b0a43;
    iVar14 = *(int *)(unaff_EBP - 0xbc);
    iVar34 = *(int *)(unaff_EBP - 0xc0);
    iVar13 = *(int *)(unaff_EBP - 0x108);
    *(undefined4 *)(unaff_EBP - 0xf0) = *(undefined4 *)(unaff_EBP - 0xc4);
    goto LAB_004b09a0;
  }
  if (*(int *)(unaff_EBP - 0xb0) != 0) {
    *(uint *)(unaff_EBP - 0x10c) = -uVar27;
  }
LAB_004b0a43:
  unaff_EBX = *(int **)(unaff_EBP - 0xe4);
  unaff_ESI = *(int **)(unaff_EBP - 0xd8);
  *(undefined4 *)(unaff_EBP - 0x108) = 0;
  goto LAB_004b0d0b;
LAB_004b00b0:
  *(int *)(iVar21 + iVar25 * 4) = iVar13;
  piVar19 = *(int **)(unaff_EBP - 200);
  if ((*(ushort *)(piVar19 + 7) & 0x1000) != 0) {
    iVar25 = FUN_004b7490(piVar19);
    if (iVar25 != 0) goto LAB_004b57a6;
    piVar19 = *(int **)(unaff_EBP - 200);
  }
  FUN_004b7cb0((int)piVar19);
  iVar25 = *(int *)(unaff_EBP - 0xcc) + 1;
  iVar13 = *(int *)(unaff_EBP - 200) + 0x28;
  *(int *)(unaff_EBP - 0xcc) = iVar25;
  *(int *)(unaff_EBP - 200) = iVar13;
  if (*(int *)(unaff_EBP - 0x80) <= iVar25) goto LAB_004b010d;
  iVar21 = *(int *)(unaff_EBP - 0x84);
  goto LAB_004b00b0;
LAB_004b010d:
  puVar24 = *(undefined4 **)(*(int *)(unaff_EBP - 0xdc) + 0x10 + iVar34 * 0x14);
  if (*(char *)(*(int *)(unaff_EBP - 0xdc) + 1 + iVar34 * 0x14) == -5) {
    *(undefined4 *)(unaff_EBP - 0xc0) = 0;
  }
  else {
    *(undefined4 **)(unaff_EBP - 0xc0) = puVar24;
    puVar24 = (undefined4 *)*puVar24;
  }
  unaff_ESI = *(int **)(unaff_EBP - 0xd8);
  *(undefined4 **)(unaff_EBP - 0xc4) = puVar24;
  *(undefined2 *)(unaff_EBP - 0xa0) = 1;
  *(int **)(unaff_EBP - 0xbc) = unaff_EBX;
  *(undefined4 *)(unaff_EBP - 0x9c) = 0;
  *(undefined4 *)(unaff_EBP - 0x98) = 0;
  FUN_004b7500((int *)(unaff_EBP - 0xbc),(undefined8 *)unaff_ESI);
  *(ushort *)(unaff_EBP - 0xa0) = (ushort)*(undefined4 *)(unaff_EBP - 0xa0) & 0xbe01 | 1;
  iVar25 = *(int *)(unaff_EBP - 0xc4);
  *(undefined4 *)(unaff_EBP - 0x8c) = 0;
  if ((*(byte *)(iVar25 + 3) & 8) != 0) {
    *(undefined4 *)(unaff_EBP - 0x90) =
         *(undefined4 *)(*(int *)(unaff_EBP - 0xdc) + -4 + iVar34 * 0x14);
  }
  unaff_EBX[8] = *(int *)(unaff_EBP - 0x100);
  unaff_EBX[9] = *(int *)(unaff_EBP - 0xfc);
  (**(code **)(*(int *)(unaff_EBP - 0xc4) + 0xc))();
  *(int *)(unaff_EBP - 0x100) = unaff_EBX[8];
  *(int *)(unaff_EBP - 0xfc) = unaff_EBX[9];
  if (*(int **)(unaff_EBP - 0xc0) != (int *)0x0) {
    FUN_004af2b0(*(int **)(unaff_EBP - 0xc0),
                 *(uint *)(*(int *)(unaff_EBP - 0xdc) + 4 + iVar34 * 0x14));
    iVar25 = *(int *)(unaff_EBP - 0xdc);
    *(undefined4 *)(iVar25 + 0x10 + iVar34 * 0x14) = *(undefined4 *)(unaff_EBP - 0xc0);
    *(undefined1 *)(iVar25 + 1 + iVar34 * 0x14) = 0xf9;
  }
  if ((char)unaff_EBX[0xe] != '\0') {
    FUN_004b76e0((int *)(unaff_EBP - 0xbc));
    goto LAB_004b57a6;
  }
  if (*(int *)(unaff_EBP - 0x8c) != 0) {
    FUN_004ae680((int *)(unaff_EBP - 0xbc),1);
    FUN_004a9a30((int *)(*(int *)(unaff_EBP - 0xd4) + 0x34),(int)unaff_EBX,&DAT_0056de50);
    *(undefined4 *)(unaff_EBP - 0xd0) = *(undefined4 *)(unaff_EBP - 0x8c);
  }
  FUN_004aec30((int *)(unaff_EBP - 0xbc),(uint)*(byte *)(unaff_EBP - 0xec));
  FUN_004b7500(unaff_ESI,(undefined8 *)(unaff_EBP - 0xbc));
  bVar11 = FUN_004b7d90(unaff_ESI);
  iVar34 = CONCAT31(extraout_var_00,bVar11);
joined_r0x004b48db:
  if (iVar34 != 0) {
LAB_004b5780:
    FUN_004a9a30((int *)(*(int *)(unaff_EBP - 0xd4) + 0x34),(int)unaff_EBX,
                 (byte *)"string or blob too big");
    uVar27 = 0x12;
    goto LAB_004b57c7;
  }
  goto LAB_004b0d0b;
LAB_004afa70:
  unaff_EBX = *(int **)(unaff_EBP - 0xe4);
  if ((*(ushort *)(iVar25 + 0x1c + iVar13 * 0x28) & 0x1000) != 0) {
    iVar25 = FUN_004b7490((int *)(iVar25 + iVar13 * 0x28));
    if (iVar25 != 0) goto LAB_004b57a6;
    iVar13 = *(int *)(unaff_EBP - 200);
    iVar25 = *(int *)(unaff_EBP - 0xcc);
  }
  FUN_004b7590((int *)(iVar25 + iVar13 * 0x28));
  FUN_004b7cb0(*(int *)(unaff_EBP - 0xcc) + *(int *)(unaff_EBP - 200) * 0x28);
  iVar13 = *(int *)(unaff_EBP - 200) + 1;
  *(int *)(unaff_EBP - 200) = iVar13;
  if (*(int *)(iVar21 + 8 + iVar34 * 0x14) <= iVar13) {
LAB_004b55f4:
    if ((char)unaff_EBX[0xe] == '\0') {
      *(int *)(*(int *)(unaff_EBP - 0xd4) + 0x54) = *(int *)(unaff_EBP - 0xe8) + 1;
    }
    else {
LAB_004b57a6:
      iVar34 = *(int *)(unaff_EBP - 0xd4);
      *(undefined1 *)(unaff_EBX + 0xe) = 1;
      FUN_004a9a30((int *)(iVar34 + 0x34),(int)unaff_EBX,(byte *)"out of memory");
      uVar27 = 7;
LAB_004b57c7:
      *(uint *)(unaff_EBP - 0xd0) = uVar27;
LAB_004b57cd:
      *(uint *)(*(int *)(unaff_EBP - 0xd4) + 0x58) = uVar27;
      FUN_004683f0(uVar27,"statement aborts at %d: [%s] %s");
      FUN_004b60e0(*(int **)(unaff_EBP - 0xd4));
      if (*(int *)(unaff_EBP - 0xd0) == 0xc0a) {
        *(undefined1 *)(unaff_EBX + 0xe) = 1;
      }
      if ((*(byte *)(unaff_EBP - 0xf5) != 0) &&
         (iVar34 = *(byte *)(unaff_EBP - 0xf5) - 1,
         FUN_004a7960(*(int *)(unaff_EBX[4] + 0xc + iVar34 * 0x10)), iVar34 != 1)) {
        FUN_004a7960(*(int *)(unaff_EBX[4] + 0x1c));
      }
    }
LAB_004b5847:
    iVar34 = *(int *)(unaff_EBP - 0xe4);
    piVar19 = *(int **)(unaff_EBP - 0xd4);
    *(undefined4 *)(iVar34 + 0x20) = *(undefined4 *)(unaff_EBP - 0x100);
    *(undefined4 *)(iVar34 + 0x24) = *(undefined4 *)(unaff_EBP - 0xfc);
    FUN_004b6750(piVar19);
    uStack00000008 = 0x4b587c;
    __security_check_cookie(*(uint *)(unaff_EBP - 4) ^ unaff_EBP);
    return;
  }
  iVar25 = *(int *)(unaff_EBP - 0xcc);
  goto LAB_004afa70;
LAB_004af966:
  *(int **)(unaff_EBP - 0xd8) = piVar19;
  FUN_004b7c40(piVar19,puVar32,0x1000);
  if (((*(ushort *)(piVar19 + 7) & 0x1000) != 0) && (iVar34 = FUN_004b7490(piVar19), iVar34 != 0))
  goto LAB_004b57a6;
  iVar34 = *(int *)(unaff_EBP - 0xcc);
  *(int *)(unaff_EBP - 0xcc) = iVar34 + -1;
  if (iVar34 == 0) goto LAB_004af570;
  piVar19 = piVar19 + 10;
  puVar32 = puVar32 + 5;
  goto LAB_004af966;
LAB_004af800:
  do {
    piVar29 = piVar19 + 10;
    if ((*(ushort *)(piVar19 + 0x11) & 0x2460) != 0) {
      FUN_004b7720(piVar29);
    }
    *(undefined2 *)(piVar19 + 0x11) = *(undefined2 *)(unaff_EBP - 200);
    iVar34 = *(int *)(unaff_EBP - 0xcc) + -1;
    *(int *)(unaff_EBP - 0xcc) = iVar34;
    piVar19 = piVar29;
  } while (0 < iVar34);
  *(int **)(unaff_EBP - 0xd8) = piVar29;
  goto LAB_004af834;
LAB_004af570:
  unaff_ESI = *(int **)(unaff_EBP - 0xd8);
  goto LAB_004b0d0b;
}


/* FUN_004b60e0 @ 004b60e0  kind=lib  attributed-by=lib-string  size=721 */

undefined4 __cdecl FUN_004b60e0(int *param_1)

{
  char cVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  
  piVar2 = (int *)*param_1;
  if ((char)piVar2[0xe] != '\0') {
    param_1[0x16] = 7;
  }
  if ((void *)param_1[0x2e] != (void *)0x0) {
    memset((void *)param_1[0x2e],0,param_1[0x2d]);
  }
  FUN_00472d90(param_1);
  if (param_1[0xc] != -0x420df25d) {
    return 0;
  }
  if (param_1[0x15] < 0) goto LAB_004b6389;
  iVar7 = 0;
  FUN_004af300(param_1);
  cVar1 = (char)param_1[0x16];
  if ((((cVar1 == '\a') || (cVar1 == '\n')) || (cVar1 == '\t')) || (cVar1 == '\r')) {
    bVar3 = true;
    if (((param_1[0x18] & 0x100U) == 0) || (cVar1 != '\t')) {
      if (((cVar1 == '\a') || (cVar1 == '\r')) && ((char)param_1[0x18] < '\0')) {
        iVar7 = 2;
      }
      else {
        FUN_004a6c80((int)piVar2,0x204);
        FUN_00492710((int)piVar2);
        *(undefined1 *)((int)piVar2 + 0x36) = 1;
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
    FUN_004a9a30(param_1 + 0xd,*param_1,(byte *)"foreign key constraint failed");
  }
  if ((((piVar2[0x48] < 1) || (piVar2[0x4e] != 0)) && (*(char *)((int)piVar2 + 0x36) != '\0')) &&
     (piVar2[0x22] == (~((uint)param_1[0x18] >> 8) & 1))) {
    if ((param_1[0x16] == 0) || (((char)param_1[0x17] == '\x03' && (!bVar3)))) {
      iVar4 = FUN_004aeea0(param_1,1);
      if (iVar4 == 0) {
        uVar5 = FUN_004bec40(piVar2,(int)param_1);
        if (uVar5 == 5) {
          if ((param_1[0x18] & 0x100U) != 0) {
            FUN_004b6750(param_1);
            return 5;
          }
        }
        else if (uVar5 == 0) {
          piVar2[6] = piVar2[6] & 0xfffffffd;
          piVar2[0x7a] = 0;
          piVar2[0x7b] = 0;
          goto LAB_004b62c9;
        }
        param_1[0x16] = uVar5;
        FUN_004a6c80((int)piVar2,0);
      }
      else {
        if ((param_1[0x18] & 0x100U) != 0) {
          FUN_004b6750(param_1);
          return 1;
        }
        param_1[0x16] = 0x13;
        FUN_004a6c80((int)piVar2,0);
      }
    }
    else {
      FUN_004a6c80((int)piVar2,0);
    }
LAB_004b62c9:
    piVar2[0x79] = 0;
    if (iVar7 != 0) goto LAB_004b62f9;
  }
  else {
    if (iVar7 == 0) {
      if ((param_1[0x16] == 0) || ((char)param_1[0x17] == '\x03')) {
        iVar7 = 1;
        goto LAB_004b62f9;
      }
      if ((char)param_1[0x17] == '\x02') {
        iVar7 = 2;
        goto LAB_004b62f9;
      }
    }
    else {
LAB_004b62f9:
      uVar5 = FUN_004af050(param_1,iVar7);
      if (uVar5 == 0) goto LAB_004b6341;
      if ((param_1[0x16] == 0) || (param_1[0x16] == 0x13)) {
        param_1[0x16] = uVar5;
        FUN_00494b00((int)piVar2,(undefined4 *)param_1[0xd]);
        param_1[0xd] = 0;
      }
    }
    FUN_004a6c80((int)piVar2,0x204);
    FUN_00492710((int)piVar2);
    *(undefined1 *)((int)piVar2 + 0x36) = 1;
  }
LAB_004b6341:
  if ((*(byte *)(param_1 + 0x18) & 0x10) != 0) {
    if (iVar7 == 2) {
      piVar2[0x12] = 0;
    }
    else {
      iVar7 = param_1[0x19];
      piVar2[0x13] = piVar2[0x13] + iVar7;
      piVar2[0x12] = iVar7;
    }
    param_1[0x19] = 0;
  }
  FUN_004b6750(param_1);
  if ((-1 < param_1[0x15]) && (piVar2[0x21] = piVar2[0x21] + -1, (param_1[0x18] & 0x100U) == 0)) {
    piVar2[0x22] = piVar2[0x22] + -1;
  }
LAB_004b6389:
  param_1[0xc] = 0x519c2973;
  if (*(char *)(*param_1 + 0x38) != '\0') {
    param_1[0x16] = 7;
  }
  uVar6 = 0;
  if (param_1[0x16] == 5) {
    uVar6 = 5;
  }
  return uVar6;
}


/* FUN_004b9b90 @ 004b9b90  kind=lib  attributed-by=lib-string  size=396 */

void __cdecl FUN_004b9b90(int *param_1,int *param_2)

{
  char cVar1;
  byte bVar2;
  undefined4 *puVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  byte *pbVar12;
  
  puVar3 = (undefined4 *)param_1[0x7f];
  iVar4 = *param_1;
  if (puVar3 != (undefined4 *)0x0) {
    FUN_0046b680(param_1);
    param_1[0x86] = 0;
    if (0 < (int)puVar3[0xc]) {
      if (*(char *)(iVar4 + 0x81) == '\0') {
        if (param_2 != (int *)0x0) {
          param_1[0x83] = (param_2[1] - param_1[0x82]) + *param_2;
        }
        puVar6 = (undefined4 *)FUN_004a02d0(iVar4,(byte *)"CREATE VIRTUAL TABLE %T");
        iVar7 = FUN_004a7ba0(iVar4,puVar3[0x10]);
        FUN_004a0da0(param_1,(byte *)
                             "UPDATE %Q.%s SET type=\'table\', name=%Q, tbl_name=%Q, rootpage=0, sql=%Q WHERE rowid=#%d"
                    );
        FUN_00494b00(iVar4,puVar6);
        piVar8 = FUN_0049d4d0(param_1);
        FUN_00492110(param_1,iVar7);
        FUN_004ae830(piVar8,0x81,0,0);
        piVar9 = (int *)FUN_004a02d0(iVar4,(byte *)"name=\'%q\' AND type=\'table\'");
        FUN_004aeac0(piVar8,iVar7,piVar9);
        piVar9 = (int *)*puVar3;
        uVar11 = 0;
        if (piVar9 != (int *)0x0) {
          cVar1 = (char)*piVar9;
          piVar10 = piVar9;
          while (cVar1 != '\0') {
            piVar10 = (int *)((int)piVar10 + 1);
            cVar1 = *(char *)piVar10;
          }
          uVar11 = (int)piVar10 - (int)piVar9 & 0x3fffffff;
        }
        FUN_004ae8f0(piVar8,0x85,iVar7,0,0,piVar9,uVar11 + 1);
        return;
      }
      pbVar5 = (byte *)*puVar3;
      uVar11 = 0;
      if (pbVar5 != (byte *)0x0) {
        bVar2 = *pbVar5;
        pbVar12 = pbVar5;
        while (bVar2 != 0) {
          pbVar12 = pbVar12 + 1;
          bVar2 = *pbVar12;
        }
        uVar11 = (int)pbVar12 - (int)pbVar5 & 0x3fffffff;
      }
      uVar11 = FUN_0049d6f0((uint *)(puVar3[0x10] + 8),pbVar5,uVar11,(uint)puVar3);
      if (uVar11 != 0) {
        *(undefined1 *)(iVar4 + 0x38) = 1;
        return;
      }
      param_1[0x7f] = 0;
    }
  }
  return;
}


/* FUN_004bc7b0 @ 004bc7b0  kind=lib  attributed-by=lib-string  size=357 */

undefined4 __cdecl FUN_004bc7b0(int *param_1,int param_2,int param_3)

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
    iVar3 = FUN_004bc920();
    if ((iVar3 != 0) || (iVar4 = FUN_004a6140(iVar5,iVar4 * 4), iVar4 == 0)) {
LAB_004bc8fa:
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
        iVar5 = FUN_004666d0(&DAT_0056de50);
        if (iVar5 == 0) goto LAB_004bc8fa;
        iVar4 = iVar4 + 1;
        *(int *)(*param_1 + param_1[5] * 4) = iVar5;
        param_1[5] = param_1[5] + 1;
      } while (iVar4 < param_2);
    }
  }
  else if (param_1[4] != param_2) {
    FUN_00466dd0(param_1[1]);
    iVar4 = FUN_004666d0((byte *)"sqlite3_get_table() called with two or more incompatible queries")
    ;
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
          iVar5 = FUN_004bc920();
          if ((iVar5 != 0) || (_Dst = (void *)FUN_004a0350(_Size), _Dst == (void *)0x0))
          goto LAB_004bc8fa;
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


/* FUN_004bfde0 @ 004bfde0  kind=lib  attributed-by=lib-string  size=227 */

int __cdecl FUN_004bfde0(int *param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = *(int **)(param_2 + 0x38);
  if (piVar1 != (int *)0x0) {
    do {
      if (*piVar1 == *param_1) break;
      piVar1 = (int *)piVar1[6];
    } while (piVar1 != (int *)0x0);
  }
  piVar1 = (int *)piVar1[2];
  iVar2 = (**(code **)(*piVar1 + 0xc))(piVar1,param_3);
  if (iVar2 != 0) {
    if (iVar2 == 7) {
      *(undefined1 *)(*param_1 + 0x38) = 1;
    }
    else {
      FUN_004962b0(param_1,&DAT_0056de50);
    }
  }
  FUN_00466dd0(piVar1[2]);
  piVar1[2] = 0;
  iVar2 = 0;
  if (*param_3 < 1) {
    return param_1[0x11];
  }
  iVar3 = 0;
  do {
    if ((*(char *)(param_3[1] + 5 + iVar3) == '\0') && (0 < *(int *)(param_3[4] + iVar2 * 8))) {
      FUN_004962b0(param_1,(byte *)"table %s: xBestIndex returned an invalid plan");
    }
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 0xc;
  } while (iVar2 < *param_3);
  return param_1[0x11];
}


