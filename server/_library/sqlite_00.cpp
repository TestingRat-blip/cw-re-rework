// sqlite_00 (_library) -- server. 200 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "sqlite_00.h"

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


/* FUN_0045f250 @ 0045f250  kind=lib  attributed-by=lib-island  size=101 */

ulonglong __cdecl FUN_0045f250(int param_1)

{
  ushort uVar1;
  ulonglong uVar2;
  ulonglong local_c;
  
  uVar1 = *(ushort *)(param_1 + 0x1c);
  if ((uVar1 & 4) != 0) {
    return *(ulonglong *)(param_1 + 0x10);
  }
  if ((uVar1 & 8) != 0) {
    uVar2 = FUN_00477080(*(double *)(param_1 + 8));
    return uVar2;
  }
  local_c = 0;
  if ((uVar1 & 0x12) != 0) {
    FUN_0048d300(*(byte **)(param_1 + 4),(uint *)&local_c,*(int *)(param_1 + 0x18),
                 *(char *)(param_1 + 0x1f));
  }
  return local_c;
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


/* FUN_0045fc30 @ 0045fc30  kind=lib  attributed-by=lib-island  size=92 */

void __cdecl FUN_0045fc30(int param_1,undefined4 param_2,undefined4 param_3)

{
  if ((*(ushort *)(param_1 + 0x24) & 0x2460) != 0) {
    FUN_004b7720((int *)(param_1 + 8));
  }
  FUN_00494b00(*(int *)(param_1 + 8),*(undefined4 **)(param_1 + 0x2c));
  *(undefined4 *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0x1c) = param_3;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined2 *)(param_1 + 0x24) = 4;
  *(undefined1 *)(param_1 + 0x26) = 1;
  return;
}


/* FUN_0045fc90 @ 0045fc90  kind=lib  attributed-by=lib-island  size=77 */

void __cdecl FUN_0045fc90(int param_1)

{
  int *piVar1;
  
  if ((*(byte *)(param_1 + 0x24) & 0x40) != 0) {
    piVar1 = *(int **)(param_1 + 0x18);
    piVar1[1] = *(int *)(*piVar1 + 0xa4);
    *(int **)(*piVar1 + 0xa4) = piVar1;
  }
  if ((*(byte *)(param_1 + 0x24) & 0x20) != 0) {
    FUN_004a6e20(*(undefined4 **)(param_1 + 0x18));
  }
  *(ushort *)(param_1 + 0x24) = *(ushort *)(param_1 + 0x24) & 0xbe01 | 1;
  *(undefined1 *)(param_1 + 0x26) = 5;
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


/* FUN_00462e80 @ 00462e80  kind=lib  attributed-by=lib-island  size=24 */

undefined * __cdecl FUN_00462e80(uint param_1)

{
  if (param_1 < 3) {
    return (&PTR_s_CURDIR_00569614)[param_1];
  }
  return (undefined *)0x0;
}


/* FUN_00463120 @ 00463120  kind=lib  attributed-by=lib-island  size=1284 */

uint __cdecl
FUN_00463120(int param_1,byte *param_2,undefined *param_3,undefined4 param_4,int *param_5)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  undefined4 *_Dst;
  int iVar6;
  int *piVar7;
  undefined *puVar8;
  char *pcVar9;
  uint uVar10;
  char *pcVar11;
  byte *pbVar12;
  uint uVar13;
  size_t sVar14;
  byte *local_30;
  int local_2c;
  uint local_28;
  int local_24;
  int local_20;
  undefined4 *local_1c;
  byte *local_18;
  int local_14;
  undefined4 *local_10;
  uint local_c;
  uint *local_8;
  
  uVar13 = 0;
  local_c = 0;
  local_8 = (uint *)0x0;
  local_10 = (undefined4 *)0x0;
  local_20 = 0;
  iVar5 = FUN_004a7850(param_1);
  if (iVar5 == 0) {
    FUN_004683f0(0x15,"misuse at line %d of [%.10s]");
    return 0x15;
  }
  pbVar12 = &DAT_0055b524;
  if (param_2 != (byte *)0x0) {
    pbVar12 = param_2;
  }
  local_18 = pbVar12;
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b18)(*(int *)(param_1 + 0xc));
  }
  FUN_004961f0(param_1,0,(byte *)0x0);
LAB_004631a0:
  while( true ) {
    _Dst = (undefined4 *)0x0;
    if (uVar13 == 0) goto LAB_004631bd;
    do {
      if ((uVar13 != 0x11) || (local_20 = local_20 + 1, 1 < local_20)) goto LAB_0046348d;
LAB_004631bd:
      if (*pbVar12 == 0) goto LAB_0046348d;
      local_1c = (undefined4 *)0x0;
      local_8 = (uint *)0x0;
      uVar13 = FUN_004a0180(param_1,pbVar12,0xffffffff,0,0,&local_8,(int *)&local_30);
      local_c = uVar13;
    } while (uVar13 != 0);
    if (local_8 != (uint *)0x0) break;
    local_18 = local_30;
    pbVar12 = local_30;
  }
  iVar5 = 0;
  uVar13 = (uint)(ushort)local_8[0xb];
  local_2c = 0;
  local_c = 0;
  local_28 = uVar13;
LAB_00463213:
  local_c = FUN_00469cb0(local_8);
  if (param_3 != (undefined *)0x0) {
    if (local_c == 100) {
      if (iVar5 == 0) goto LAB_00463257;
LAB_004632b5:
      local_1c = _Dst + uVar13;
      _Dst = local_10;
      if (0 < (int)uVar13) {
        local_14 = 0;
        iVar5 = 0;
        do {
          puVar4 = local_8;
          iVar6 = local_14;
          if (local_8 == (uint *)0x0) {
LAB_00463328:
            piVar7 = (int *)&DAT_00569b70;
          }
          else {
            if (((local_8[5] == 0) || ((int)(uint)(ushort)local_8[0xb] <= iVar5)) || (iVar5 < 0)) {
              if (*local_8 != 0) {
                iVar3 = *(int *)(*local_8 + 0xc);
                if (iVar3 != 0) {
                  (*DAT_00582b18)(iVar3);
                }
                FUN_004961f0(*puVar4,0x19,(byte *)0x0);
              }
              goto LAB_00463328;
            }
            if (*(int *)(*local_8 + 0xc) != 0) {
              (*DAT_00582b18)(*(int *)(*local_8 + 0xc));
            }
            piVar7 = (int *)(puVar4[5] + iVar6);
          }
          local_24 = FUN_004ae680(piVar7,1);
          if (puVar4 != (uint *)0x0) {
            uVar13 = *puVar4;
            uVar10 = puVar4[0x16];
            if (uVar13 == 0) {
              uVar13 = 0xff;
            }
            else {
              if ((*(char *)(uVar13 + 0x38) != '\0') || (uVar10 == 0xc0a)) {
                FUN_004961f0(uVar13,7,(byte *)0x0);
                *(undefined1 *)(uVar13 + 0x38) = 0;
                uVar10 = 7;
              }
              uVar13 = *(uint *)(uVar13 + 0x30);
            }
            puVar4[0x16] = uVar13 & uVar10;
            iVar6 = local_14;
            if (*(int *)(*puVar4 + 0xc) != 0) {
              (*DAT_00582b20)(*(int *)(*puVar4 + 0xc));
              iVar6 = local_14;
            }
          }
          puVar4 = local_8;
          local_1c[iVar5] = local_24;
          if (local_24 == 0) {
            puVar8 = FUN_00475040((int *)local_8,iVar5);
            cVar1 = puVar8[0x1e];
            FUN_00474fe0((int *)puVar4);
            iVar6 = local_14;
            if (cVar1 != '\x05') {
              *(undefined1 *)(param_1 + 0x38) = 1;
              _Dst = local_10;
              goto LAB_0046348d;
            }
          }
          iVar5 = iVar5 + 1;
          local_14 = iVar6 + 0x28;
          _Dst = local_10;
          uVar13 = local_28;
        } while (iVar5 < (int)local_28);
      }
    }
    else {
      if (local_c != 0x65) goto LAB_004633ef;
      if ((iVar5 != 0) || ((*(byte *)(param_1 + 0x18) & 0x20) == 0)) goto LAB_004633f8;
LAB_00463257:
      sVar14 = uVar13 * 8 + 1;
      _Dst = FUN_00494b90(param_1,sVar14);
      local_10 = _Dst;
      if ((_Dst == (undefined4 *)0x0) || (memset(_Dst,0,sVar14), _Dst == (undefined4 *)0x0))
      goto LAB_0046348d;
      iVar5 = 0;
      if (0 < (int)uVar13) {
        do {
          iVar6 = FUN_00469a30((int *)local_8,iVar5);
          _Dst[iVar5] = iVar6;
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)uVar13);
      }
      local_2c = 1;
      if (local_c == 100) goto LAB_004632b5;
    }
    iVar6 = (*(code *)param_3)(param_4,uVar13,local_1c,_Dst);
    iVar5 = local_2c;
    if (iVar6 != 0) goto LAB_00463468;
  }
LAB_004633ef:
  if (local_c != 100) goto LAB_004633f8;
  goto LAB_00463213;
LAB_004633f8:
  uVar13 = FUN_004b5e70((int *)local_8);
  local_8 = (uint *)0x0;
  if (uVar13 != 0x11) {
    local_20 = 0;
    bVar2 = (&DAT_00569720)[*local_30];
    local_18 = local_30;
    while ((bVar2 & 1) != 0) {
      pbVar12 = local_18 + 1;
      local_18 = local_18 + 1;
      bVar2 = (&DAT_00569720)[*pbVar12];
    }
  }
  pbVar12 = local_18;
  local_c = uVar13;
  FUN_00494b00(param_1,_Dst);
  local_10 = (undefined4 *)0x0;
  goto LAB_004631a0;
LAB_00463468:
  local_c = 4;
  FUN_004b5e70((int *)local_8);
  local_8 = (uint *)0x0;
  FUN_004961f0(param_1,4,(byte *)0x0);
LAB_0046348d:
  puVar4 = local_8;
  if (local_8 != (uint *)0x0) {
    if ((local_8[0xc] == 0xbdf20da3) || (local_8[0xc] == 0x519c2973)) {
      FUN_004b8640((int *)local_8);
    }
    uVar13 = *puVar4;
    FUN_004aef00(uVar13,(int)puVar4);
    if (puVar4[0xe] == 0) {
      *(uint *)(uVar13 + 4) = puVar4[0xf];
    }
    else {
      *(uint *)(puVar4[0xe] + 0x3c) = puVar4[0xf];
    }
    if (puVar4[0xf] != 0) {
      *(uint *)(puVar4[0xf] + 0x38) = puVar4[0xe];
    }
    puVar4[0xc] = 0xb606c3c8;
    *puVar4 = 0;
    FUN_00494b00(uVar13,puVar4);
  }
  FUN_00494b00(param_1,_Dst);
  if ((*(char *)(param_1 + 0x38) != '\0') || (uVar13 = local_c, local_c == 0xc0a)) {
    FUN_004961f0(param_1,7,(byte *)0x0);
    *(undefined1 *)(param_1 + 0x38) = 0;
    uVar13 = 7;
  }
  uVar13 = *(uint *)(param_1 + 0x30) & uVar13;
  if (uVar13 != 0) {
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
      FUN_004683f0(0x15,"API call with %s database connection pointer");
      FUN_004683f0(0x15,"misuse at line %d of [%.10s]");
      uVar10 = 0x15;
    }
    if (uVar13 == uVar10) {
      if (param_5 != (int *)0x0) {
        pcVar9 = FUN_004687f0(param_1);
        uVar10 = 0;
        if (pcVar9 != (char *)0x0) {
          cVar1 = *pcVar9;
          pcVar11 = pcVar9;
          while (cVar1 != '\0') {
            pcVar11 = pcVar11 + 1;
            cVar1 = *pcVar11;
          }
          uVar10 = (int)pcVar11 - (int)pcVar9 & 0x3fffffff;
        }
        sVar14 = uVar10 + 1;
        iVar5 = FUN_004a0350(sVar14);
        *param_5 = iVar5;
        if (iVar5 == 0) {
          uVar13 = 7;
          FUN_004961f0(param_1,7,(byte *)0x0);
        }
        else {
          pcVar9 = FUN_004687f0(param_1);
          memcpy((void *)*param_5,pcVar9,sVar14);
        }
      }
      goto LAB_0046360d;
    }
  }
  if (param_5 != (int *)0x0) {
    *param_5 = 0;
  }
LAB_0046360d:
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b20)(*(int *)(param_1 + 0xc));
  }
  return uVar13;
}


/* FUN_004636f0 @ 004636f0  kind=lib  attributed-by=lib-island  size=232 */

void __cdecl FUN_004636f0(int param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = *(int **)(param_1 + 0x30);
  if ((*(ushort *)(piVar1 + 7) & 0x2000) == 0) {
    FUN_004b7720(piVar1);
    *(undefined2 *)(piVar1 + 7) = 1;
    piVar1[1] = 0;
  }
  puVar2 = (undefined8 *)piVar1[1];
  if (((puVar2 != (undefined8 *)0x0) && (-1 < *(int *)((int)puVar2 + 0x14))) &&
     ((0 < *(int *)((int)puVar2 + 0x14) || (*(int *)(puVar2 + 2) != 0)))) {
    if (*(char *)(puVar2 + 3) == '\0') {
      if (*(char *)((int)puVar2 + 0x19) == '\0') {
        FUN_0045fc30(param_1,*(undefined4 *)(puVar2 + 1),*(undefined4 *)((int)puVar2 + 0xc));
        return;
      }
      FUN_004b7790((int *)(param_1 + 8),*puVar2);
      return;
    }
    *(undefined4 *)(param_1 + 0x38) = 1;
    if (*(int *)(param_1 + 8) == 0) {
      iVar3 = 1000000000;
    }
    else {
      iVar3 = *(int *)(*(int *)(param_1 + 8) + 0x50);
    }
    iVar4 = 0;
    if (-1 < iVar3) {
      do {
        if ("integer overflow"[iVar4] == '\0') break;
        iVar4 = iVar4 + 1;
      } while (iVar4 <= iVar3);
    }
    if ((iVar4 <= iVar3) && (iVar3 = FUN_004b7260((int *)(param_1 + 8),iVar4 + 1U,0), iVar3 == 0)) {
      memcpy(*(void **)(param_1 + 0xc),"integer overflow",iVar4 + 1U);
      *(int *)(param_1 + 0x20) = iVar4;
      *(undefined4 *)(param_1 + 0x24) = 0x1030202;
    }
  }
  return;
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


/* FUN_00464e80 @ 00464e80  kind=lib  attributed-by=lib-island  size=150 */

int __cdecl FUN_00464e80(byte *param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  bool bVar7;
  
  iVar2 = FUN_004bc920();
  if (iVar2 != 0) {
    return 0;
  }
  if (DAT_00582acc == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (*DAT_00582b10)(2);
    if (iVar2 != 0) {
      (*DAT_00582b18)(iVar2);
    }
  }
  iVar6 = DAT_00583e70;
  if (DAT_00583e70 != 0) {
    while (param_1 != (byte *)0x0) {
      pbVar3 = *(byte **)(iVar6 + 0x10);
      pbVar5 = param_1;
      do {
        bVar1 = *pbVar5;
        bVar7 = bVar1 < *pbVar3;
        if (bVar1 != *pbVar3) {
LAB_00464ef1:
          uVar4 = -(uint)bVar7 | 1;
          goto LAB_00464ef6;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar7 = bVar1 < pbVar3[1];
        if (bVar1 != pbVar3[1]) goto LAB_00464ef1;
        pbVar5 = pbVar5 + 2;
        pbVar3 = pbVar3 + 2;
      } while (bVar1 != 0);
      uVar4 = 0;
LAB_00464ef6:
      if ((uVar4 == 0) || (iVar6 = *(int *)(iVar6 + 0xc), iVar6 == 0)) break;
    }
  }
  if (iVar2 != 0) {
    (*DAT_00582b20)(iVar2);
  }
  return iVar6;
}


/* FUN_004650e0 @ 004650e0  kind=lib  attributed-by=lib-island  size=22 */

void __cdecl FUN_004650e0(int param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x004650ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_00582b18)();
    return;
  }
  return;
}


/* FUN_00465120 @ 00465120  kind=lib  attributed-by=lib-island  size=22 */

void __cdecl FUN_00465120(int param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0046512e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_00582b20)();
    return;
  }
  return;
}


/* FUN_00465320 @ 00465320  kind=lib  attributed-by=lib-island  size=170 */

undefined4 __cdecl FUN_00465320(int param_1,byte *param_2,int param_3,undefined4 *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  uVar3 = 1;
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b18)(*(int *)(param_1 + 0xc));
  }
  puVar2 = (undefined4 *)FUN_00494c50(param_1,param_2);
  if (puVar2 != (undefined4 *)0x0) {
    FUN_0048fbc0(puVar2);
    piVar1 = *(int **)(*(int *)puVar2[1] + 0x3c);
    if (param_3 == 7) {
      uVar3 = 0;
      *param_4 = piVar1;
    }
    else if (*piVar1 == 0) {
      uVar3 = 0xc;
    }
    else {
      uVar3 = (**(code **)(*piVar1 + 0x28))(piVar1,param_3,param_4);
    }
    if (*(char *)((int)puVar2 + 9) != '\0') {
      piVar1 = puVar2 + 3;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        if (*(int *)(puVar2[1] + 0x38) != 0) {
          (*DAT_00582b20)(*(int *)(puVar2[1] + 0x38));
        }
        *(undefined1 *)((int)puVar2 + 10) = 0;
      }
    }
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b20)(*(int *)(param_1 + 0xc));
  }
  return uVar3;
}


/* FUN_00466210 @ 00466210  kind=lib  attributed-by=lib-island  size=174 */

undefined4 __cdecl FUN_00466210(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (0 < param_2) {
    if (iVar1 != 0) {
      (*DAT_00582b18)(iVar1);
    }
    *(code **)(param_1 + 0x1ac) = FUN_004bcdb0;
    *(int *)(param_1 + 0x1b0) = param_1;
    *(undefined4 *)(param_1 + 0x1b4) = 0;
    *(undefined4 *)(param_1 + 0x1dc) = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      (*DAT_00582b20)(*(int *)(param_1 + 0xc));
    }
    *(int *)(param_1 + 0x1dc) = param_2;
    return 0;
  }
  if (iVar1 != 0) {
    (*DAT_00582b18)(iVar1);
  }
  *(undefined4 *)(param_1 + 0x1ac) = 0;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b20)(*(int *)(param_1 + 0xc));
  }
  return 0;
}


/* FUN_004666d0 @ 004666d0  kind=lib  attributed-by=lib-island  size=33 */

undefined4 __cdecl FUN_004666d0(byte *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_004bc920();
  if (iVar1 != 0) {
    return 0;
  }
  uVar2 = FUN_00466700(param_1,(double *)&stack0x00000008);
  return uVar2;
}


/* FUN_00466700 @ 00466700  kind=lib  attributed-by=lib-island  size=139 */

void __cdecl FUN_00466700(byte *param_1,double *param_2)

{
  int iVar1;
  int local_6c;
  undefined1 *local_68;
  undefined1 *local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_54;
  undefined2 local_53;
  undefined1 local_50 [72];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  iVar1 = FUN_004bc920();
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
  FUN_004ad370(&local_6c,0,param_1,param_2);
  FUN_004aa8f0(&local_6c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00466a80 @ 00466a80  kind=lib  attributed-by=lib-island  size=90 */

void __cdecl FUN_00466a80(int param_1,undefined4 param_2,byte *param_3)

{
  int local_20;
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
    FUN_004ad370(&local_20,0,param_3,(double *)&stack0x00000010);
    FUN_004aa8f0(&local_20);
  }
  return;
}


/* FUN_00466dd0 @ 00466dd0  kind=lib  attributed-by=lib-island  size=152 */

void __cdecl FUN_00466dd0(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    if (DAT_00582ac8 == 0) {
      (*DAT_00582aec)(param_1);
    }
    else {
      if (DAT_00583f40 != 0) {
        (*DAT_00582b18)(DAT_00583f40);
      }
      iVar1 = (*DAT_00582af0._4_4_)(param_1);
      DAT_00583e18 = DAT_00583e18 - iVar1;
      if (DAT_00583e40 < DAT_00583e18) {
        DAT_00583e40 = DAT_00583e18;
      }
      DAT_00583e3c = DAT_00583e3c + -1;
      if (DAT_00583e64 < DAT_00583e3c) {
        DAT_00583e64 = DAT_00583e3c;
      }
      (*DAT_00582aec)(param_1);
      if (DAT_00583f40 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00466e55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*DAT_00582b20)();
        return;
      }
    }
  }
  return;
}


/* FUN_00466fa0 @ 00466fa0  kind=lib  attributed-by=lib-island  size=88 */

void __cdecl FUN_00466fa0(int param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  
  if (DAT_00582acc == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (*DAT_00582b10)(5);
    if (iVar2 != 0) {
      (*DAT_00582b18)(iVar2);
    }
  }
  for (; param_1 != 0; param_1 = param_1 + -1) {
    uVar1 = FUN_00487580();
    *param_2 = uVar1;
    param_2 = param_2 + 1;
  }
  if (iVar2 != 0) {
    (*DAT_00582b20)(iVar2);
  }
  return;
}


/* FUN_004673c0 @ 004673c0  kind=lib  attributed-by=lib-island  size=2478 */

uint __cdecl FUN_004673c0(int *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  code *pcVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  undefined4 *puVar12;
  bool bVar13;
  longlong lVar14;
  undefined8 uVar15;
  undefined4 *local_3c;
  undefined4 *local_38;
  uint *local_34;
  undefined4 *local_30;
  uint local_2c;
  undefined4 *local_28;
  uint *local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  uint *local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  uint *local_c;
  undefined4 *local_8;
  
  if (*(int *)(param_1[5] + 0xc) != 0) {
    (*DAT_00582b18)(*(int *)(param_1[5] + 0xc));
  }
  FUN_0048fbc0((undefined4 *)param_1[6]);
  if ((*param_1 != 0) && (iVar2 = *(int *)(*param_1 + 0xc), iVar2 != 0)) {
    (*DAT_00582b18)(iVar2);
  }
  uVar10 = param_1[7];
  if (((uVar10 != 0) && (uVar10 != 5)) && (uVar10 != 6)) goto LAB_00467d14;
  puVar11 = (uint *)**(int **)(param_1[6] + 4);
  local_18 = *(uint **)((int *)param_1[1])[1];
  bVar7 = false;
  local_c = puVar11;
  if ((*param_1 == 0) || (*(char *)((int)*(int **)(param_1[6] + 4) + 0x13) != '\x02')) {
    uVar10 = 0;
    if (param_1[3] == 0) {
      uVar10 = FUN_0048ed50((int *)param_1[1],2);
      if (uVar10 != 0) goto LAB_004675f7;
      param_1[3] = 1;
      FUN_0048fe70((undefined4 *)param_1[1],1,param_1 + 2);
    }
    local_8 = (undefined4 *)param_1[6];
    if (*(char *)(local_8 + 2) == '\0') {
      piVar5 = (int *)local_8[1];
      uVar10 = 0;
      FUN_0048fbc0(local_8);
      if ((*(char *)(local_8 + 2) != '\x02') && (*(char *)(local_8 + 2) != '\x01')) {
        if (((*(byte *)((int)piVar5 + 0x16) & 0x40) == 0) || (*(int *)piVar5[0x13] == 0)) {
          uVar10 = FUN_00487510((int)local_8,1,'\x01');
          if (uVar10 == 0) {
            *(ushort *)((int)piVar5 + 0x16) = *(ushort *)((int)piVar5 + 0x16) & 0xfff7;
            if (piVar5[0xb] == 0) {
              *(ushort *)((int)piVar5 + 0x16) = *(ushort *)((int)piVar5 + 0x16) | 8;
            }
LAB_004674f2:
            if (piVar5[3] == 0) goto code_r0x004674f8;
            if (uVar10 != 0) goto LAB_0046750d;
            goto LAB_00467549;
          }
        }
        else {
          uVar10 = 0x106;
        }
      }
      goto LAB_004675c7;
    }
  }
  else {
    uVar10 = 5;
  }
  goto LAB_004675f7;
code_r0x004674f8:
  uVar10 = FUN_0047fc00(piVar5);
  if (uVar10 != 0) {
LAB_0046750d:
    if ((*(char *)((int)piVar5 + 0x13) == '\0') && (piVar5[3] != 0)) {
      puVar4 = *(undefined4 **)(piVar5[3] + 0x44);
      if (puVar4 != (undefined4 *)0x0) {
        puVar11 = (uint *)puVar4[4];
        FUN_004a3a80(puVar4);
        if (*(int *)(puVar11[0x2d] + 0xc) == 0) {
          FUN_00484370(puVar11);
        }
      }
      piVar5[3] = 0;
    }
LAB_00467549:
    if (((char)uVar10 != '\x05') || (*(char *)((int)piVar5 + 0x13) != '\0')) goto LAB_00467588;
    iVar2 = piVar5[1];
    if (((undefined4 *)(iVar2 + 0x1ac) == (undefined4 *)0x0) ||
       ((pcVar3 = *(code **)(iVar2 + 0x1ac), pcVar3 == (code *)0x0 || (*(int *)(iVar2 + 0x1b4) < 0))
       )) goto LAB_00467588;
    iVar8 = (*pcVar3)(*(undefined4 *)(iVar2 + 0x1b0),*(int *)(iVar2 + 0x1b4));
    if (iVar8 == 0) goto LAB_00467581;
    *(int *)(iVar2 + 0x1b4) = *(int *)(iVar2 + 0x1b4) + 1;
  }
  goto LAB_004674f2;
LAB_00467581:
  *(undefined4 *)(iVar2 + 0x1b4) = 0xffffffff;
LAB_00467588:
  if (uVar10 == 0) {
    if ((*(char *)(local_8 + 2) == '\0') &&
       (piVar5[10] = piVar5[10] + 1, *(char *)((int)local_8 + 9) != '\0')) {
      *(undefined1 *)(local_8 + 9) = 1;
      local_8[10] = piVar5[0x12];
      piVar5[0x12] = (int)(local_8 + 7);
    }
    *(undefined1 *)(local_8 + 2) = 1;
    if (*(char *)((int)piVar5 + 0x13) == '\0') {
      *(undefined1 *)((int)piVar5 + 0x13) = 1;
    }
  }
LAB_004675c7:
  if (*(char *)((int)local_8 + 9) != '\0') {
    piVar5 = local_8 + 3;
    *piVar5 = *piVar5 + -1;
    if (*piVar5 == 0) {
      if (*(int *)(local_8[1] + 0x38) != 0) {
        (*DAT_00582b20)(*(int *)(local_8[1] + 0x38));
      }
      *(undefined1 *)((int)local_8 + 10) = 0;
    }
  }
  bVar7 = true;
  puVar11 = local_c;
LAB_004675f7:
  puVar4 = *(undefined4 **)(*(int *)(param_1[6] + 4) + 0x20);
  local_10 = (undefined4 *)(*(int **)(param_1[1] + 4))[8];
  local_30 = (undefined4 *)(uint)*(byte *)(**(int **)(param_1[1] + 4) + 5);
  if (((uVar10 == 0) && (local_30 == (undefined4 *)0x5)) && (puVar4 != local_10)) {
    uVar10 = 8;
  }
  local_8 = *(undefined4 **)(*(int *)(param_1[6] + 4) + 0x2c);
  local_1c = (undefined4 *)0x0;
  while (((param_2 < 0 || ((int)local_1c < param_2)) &&
         (local_14 = (undefined4 *)param_1[4], local_14 <= local_8))) {
    if (uVar10 != 0) goto LAB_0046770a;
    if ((local_14 != (undefined4 *)(DAT_00582bb8 / *(uint *)(*(int *)(param_1[6] + 4) + 0x20) + 1))
       && (uVar10 = FUN_004a14c0((int)puVar11,(uint)local_14,(int *)&local_3c,0), puVar12 = local_3c
          , uVar10 == 0)) {
      uVar10 = FUN_0046e390((int)param_1,local_14,local_3c[1]);
      local_34 = (uint *)puVar12[4];
      FUN_004a3a80(puVar12);
      if (*(int *)(local_34[0x2d] + 0xc) == 0) {
        FUN_00484370(local_34);
      }
    }
    param_1[4] = param_1[4] + 1;
    local_1c = (undefined4 *)((int)local_1c + 1);
    puVar11 = local_c;
  }
  if (uVar10 == 0) {
    param_1[9] = (int)local_8;
    param_1[8] = (int)local_8 + (1 - param_1[4]);
    if (local_8 < (undefined4 *)param_1[4]) goto LAB_00467713;
    if (param_1[10] == 0) {
      iVar2 = **(int **)(param_1[6] + 4);
      param_1[0xb] = *(int *)(iVar2 + 0x58);
      *(int **)(iVar2 + 0x58) = param_1;
      param_1[10] = 1;
    }
    goto LAB_00467bdc;
  }
LAB_0046770a:
  if (uVar10 == 0x65) {
LAB_00467713:
    if (local_8 == (undefined4 *)0x0) {
      puVar12 = (undefined4 *)param_1[1];
      FUN_0048fbc0(puVar12);
      *(undefined4 *)(puVar12[1] + 0x2c) = 0;
      uVar10 = FUN_00483380(puVar12[1]);
      if (*(char *)((int)puVar12 + 9) != '\0') {
        piVar5 = puVar12 + 3;
        *piVar5 = *piVar5 + -1;
        if (*piVar5 == 0) {
          if (*(int *)(puVar12[1] + 0x38) != 0) {
            (*DAT_00582b20)(*(int *)(puVar12[1] + 0x38));
          }
          *(undefined1 *)((int)puVar12 + 10) = 0;
        }
      }
      local_8 = (undefined4 *)0x1;
      if ((uVar10 == 0) || (uVar10 == 0x65)) goto LAB_0046776b;
    }
    else {
LAB_0046776b:
      local_3c = (undefined4 *)(param_1[2] + 1);
      local_34 = (uint *)param_1[1];
      uVar10 = local_34[1];
      FUN_0048fbc0(local_34);
      iVar2 = *(int *)(*(int *)(uVar10 + 0xc) + 0x38);
      uVar10 = FUN_004a2c80(*(undefined4 **)(*(int *)(uVar10 + 0xc) + 0x44));
      puVar11 = local_34;
      if (uVar10 == 0) {
        *(char *)(iVar2 + 0x28) = (char)((uint)local_3c >> 0x18);
        *(char *)(iVar2 + 0x29) = (char)((uint)local_3c >> 0x10);
        *(char *)(iVar2 + 0x2a) = (char)((uint)local_3c >> 8);
        *(char *)(iVar2 + 0x2b) = (char)local_3c;
      }
      if (*(char *)((int)local_34 + 9) != '\0') {
        puVar1 = local_34 + 3;
        *puVar1 = *puVar1 - 1;
        if (*puVar1 == 0) {
          if (*(int *)(local_34[1] + 0x38) != 0) {
            (*DAT_00582b20)(*(int *)(local_34[1] + 0x38));
          }
          *(undefined1 *)((int)puVar11 + 10) = 0;
        }
      }
    }
    puVar12 = local_8;
    if (uVar10 == 0) {
      if (*param_1 != 0) {
        FUN_004a6940(*param_1);
      }
      if ((local_30 != (undefined4 *)0x5) ||
         (uVar10 = FUN_00491d30((int *)param_1[1],2), uVar10 == 0)) {
        if ((int)puVar4 < (int)local_10) {
          uVar10 = ((int)local_10 / (int)puVar4 + -1 + (int)puVar12) / ((int)local_10 / (int)puVar4)
          ;
          if (uVar10 == DAT_00582bb8 / *(uint *)(*(int *)(param_1[1] + 4) + 0x20) + 1) {
            uVar10 = uVar10 - 1;
          }
        }
        else {
          uVar10 = ((int)puVar4 / (int)local_10) * (int)puVar12;
        }
        local_18[6] = uVar10;
        if ((int)puVar4 < (int)local_10) {
          local_2c = (int)puVar4 >> 0x1f;
          local_28 = puVar4;
          lVar14 = __allmul((uint)puVar12,(int)puVar12 >> 0x1f,(uint)puVar4,local_2c);
          local_3c = (undefined4 *)((ulonglong)lVar14 >> 0x20);
          local_8 = (undefined4 *)lVar14;
          local_34 = (uint *)local_18[0xf];
          uVar10 = FUN_004a19a0(local_18,(char *)0x0,1);
          local_30 = (undefined4 *)(DAT_00582bb8 + (int)local_10);
          local_1c = (undefined4 *)((int)local_30 >> 0x1f);
          if (((int)local_3c < (int)local_1c) ||
             (((int)local_3c <= (int)local_1c && (local_8 <= local_30)))) {
            local_30 = local_8;
            local_1c = local_3c;
          }
          local_10 = (undefined4 *)(DAT_00582bb8 + (int)puVar4);
          local_14 = (undefined4 *)((int)local_10 >> 0x1f);
          puVar11 = local_34;
          while (local_34 = puVar11, uVar10 == 0) {
            if (((int)local_1c < (int)local_14) ||
               (((int)local_1c <= (int)local_14 && (local_30 <= local_10)))) {
              uVar10 = (**(code **)(*puVar11 + 0x18))(puVar11,&local_38);
              if (uVar10 == 0) {
                if (((int)local_3c <= (int)local_34) &&
                   (((int)local_3c < (int)local_34 || (local_8 < local_38)))) {
                  uVar10 = (**(code **)(*puVar11 + 0x10))(puVar11,local_8,local_3c);
                }
                if (uVar10 == 0) {
                  if (*(char *)((int)local_18 + 7) == '\0') {
                    uVar10 = (**(code **)(*(int *)local_18[0xf] + 0x14))
                                       ((int *)local_18[0xf],*(undefined1 *)((int)local_18 + 0xb));
                  }
                  else {
                    piVar5 = (int *)local_18[0xf];
                    if ((*piVar5 != 0) &&
                       (uVar10 = (**(code **)(*piVar5 + 0x28))(piVar5,8,0), uVar10 == 0xc)) {
                      uVar10 = 0;
                    }
                  }
                  goto LAB_00467b51;
                }
              }
              break;
            }
            local_20 = (undefined4 *)0x0;
            uVar15 = __alldiv((uint)local_10,(uint)local_14,(uint)local_28,local_2c);
            local_24 = (uint *)((int)uVar15 + 1);
            if (local_24 == (uint *)0x0) {
              FUN_004683f0(0xb,"database corruption at line %d of [%.10s]");
              uVar10 = 0xb;
            }
            else {
              uVar10 = local_c[10];
              if ((uVar10 == 0) &&
                 (uVar10 = FUN_004a37e0((int *)local_c[0x2d],(int)local_24,1,&local_20),
                 puVar12 = local_20, uVar10 == 0)) {
                if (local_20[4] != 0) {
                  local_c[0x28] = local_c[0x28] + 1;
                  goto LAB_00467a50;
                }
                local_20[4] = local_c;
                if (((uint *)0x7fffffff < local_24) ||
                   (local_24 == (uint *)((int)DAT_00582bb8 / (int)local_c[0x20] + 1U))) {
                  FUN_004683f0(0xb,"database corruption at line %d of [%.10s]");
                  uVar10 = 0xb;
LAB_00467a00:
                  if ((*(byte *)(puVar12 + 6) & 2) != 0) {
                    FUN_00486ed0((int)puVar12);
                  }
                  iVar2 = puVar12[7];
                  *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + -1;
                  if (puVar12[5] == 1) {
                    *(undefined4 *)(iVar2 + 0x2c) = 0;
                  }
                  (*DAT_00582b4c)(*(undefined4 *)(iVar2 + 0x28),*puVar12,1);
                  goto LAB_00467a32;
                }
                if (((*(char *)((int)local_c + 0xe) == '\0') && (local_24 <= (uint *)local_c[6])) &&
                   (*(int *)local_c[0xf] != 0)) {
                  local_c[0x29] = local_c[0x29] + 1;
                  uVar10 = FUN_004876e0((int)local_20);
                  if (uVar10 != 0) goto LAB_00467a00;
                }
                else {
                  if ((uint *)local_c[0x21] < local_24) {
                    uVar10 = 0xd;
                    goto LAB_00467a00;
                  }
                  memset((void *)local_20[1],0,local_c[0x20]);
                }
              }
              else {
LAB_00467a32:
                if (*(int *)(local_c[0x2d] + 0xc) == 0) {
                  FUN_00484370(local_c);
                }
                puVar12 = (undefined4 *)0x0;
                if (uVar10 != 0) goto LAB_00467a90;
              }
LAB_00467a50:
              uVar10 = (**(code **)(*local_34 + 0xc))(local_34,puVar12[1],puVar4,local_10,local_14);
              local_24 = (uint *)puVar12[4];
              FUN_004a3a80(puVar12);
              if (*(int *)(local_24[0x2d] + 0xc) == 0) {
                FUN_00484370(local_24);
              }
            }
LAB_00467a90:
            bVar13 = CARRY4((uint)local_10,(uint)local_28);
            local_10 = (undefined4 *)((int)local_10 + (int)local_28);
            local_14 = (undefined4 *)((int)local_14 + bVar13 + local_2c);
            puVar11 = local_34;
          }
        }
        else {
          uVar10 = FUN_004a19a0(local_18,(char *)0x0,0);
LAB_00467b51:
          if (uVar10 == 0) {
            piVar5 = (int *)param_1[1];
            if ((char)piVar5[2] != '\0') {
              FUN_0048fbc0(piVar5);
              if ((char)piVar5[2] == '\x02') {
                local_3c = (undefined4 *)piVar5[1];
                piVar6 = (int *)*local_3c;
                uVar10 = piVar6[10];
                if (uVar10 != 0) {
LAB_00467c75:
                  if (*(char *)((int)piVar5 + 9) != '\0') {
                    piVar6 = piVar5 + 3;
                    *piVar6 = *piVar6 + -1;
                    if (*piVar6 == 0) {
                      if (*(int *)(piVar5[1] + 0x38) != 0) {
                        (*DAT_00582b20)(*(int *)(piVar5[1] + 0x38));
                      }
                      *(undefined1 *)((int)piVar5 + 10) = 0;
                    }
                  }
                  goto LAB_00467bdc;
                }
                if (((*(char *)((int)piVar6 + 0xf) == '\x02') && ((char)piVar6[1] != '\0')) &&
                   (*(char *)((int)piVar6 + 5) == '\x01')) {
                  *(undefined1 *)((int)piVar6 + 0xf) = 1;
                }
                else {
                  uVar10 = FUN_00484760(piVar6,(uint)*(byte *)((int)piVar6 + 0x12));
                  if (((uVar10 & 0xff) == 0xd) || ((uVar10 & 0xff) == 10)) {
                    piVar6[10] = uVar10;
                    *(undefined1 *)((int)piVar6 + 0xf) = 6;
                  }
                  if (uVar10 != 0) goto LAB_00467c75;
                }
                *(undefined1 *)((int)local_3c + 0x13) = 1;
              }
              FUN_00471200(piVar5);
              if (*(char *)((int)piVar5 + 9) != '\0') {
                piVar6 = piVar5 + 3;
                *piVar6 = *piVar6 + -1;
                if (*piVar6 == 0) {
                  if (*(int *)(piVar5[1] + 0x38) != 0) {
                    (*DAT_00582b20)(*(int *)(piVar5[1] + 0x38));
                  }
                  *(undefined1 *)((int)piVar5 + 10) = 0;
                }
              }
            }
            uVar10 = 0x65;
          }
        }
      }
    }
  }
LAB_00467bdc:
  if (bVar7) {
    FUN_0048f2f0((undefined4 *)param_1[6],(char *)0x0);
    piVar5 = (int *)param_1[6];
    if ((char)piVar5[2] != '\0') {
      FUN_0048fbc0(piVar5);
      if ((char)piVar5[2] == '\x02') {
        puVar4 = (undefined4 *)piVar5[1];
        piVar6 = (int *)*puVar4;
        if (piVar6[10] == 0) {
          if (((*(char *)((int)piVar6 + 0xf) == '\x02') && ((char)piVar6[1] != '\0')) &&
             (*(char *)((int)piVar6 + 5) == '\x01')) {
            *(undefined1 *)((int)piVar6 + 0xf) = 1;
          }
          else {
            uVar9 = FUN_00484760(piVar6,(uint)*(byte *)((int)piVar6 + 0x12));
            if (((uVar9 & 0xff) == 0xd) || ((uVar9 & 0xff) == 10)) {
              piVar6[10] = uVar9;
              *(undefined1 *)((int)piVar6 + 0xf) = 6;
            }
            if (uVar9 != 0) goto LAB_00467ce0;
          }
          *(undefined1 *)((int)puVar4 + 0x13) = 1;
          goto LAB_00467cd7;
        }
      }
      else {
LAB_00467cd7:
        FUN_00471200(piVar5);
      }
LAB_00467ce0:
      if (*(char *)((int)piVar5 + 9) != '\0') {
        piVar6 = piVar5 + 3;
        *piVar6 = *piVar6 + -1;
        if (*piVar6 == 0) {
          if (*(int *)(piVar5[1] + 0x38) != 0) {
            (*DAT_00582b20)(*(int *)(piVar5[1] + 0x38));
          }
          *(undefined1 *)((int)piVar5 + 10) = 0;
        }
      }
    }
  }
  if (uVar10 == 0xc0a) {
    uVar10 = 7;
  }
  param_1[7] = uVar10;
LAB_00467d14:
  if ((*param_1 != 0) && (iVar2 = *(int *)(*param_1 + 0xc), iVar2 != 0)) {
    (*DAT_00582b20)(iVar2);
  }
  iVar2 = param_1[6];
  if (*(char *)(iVar2 + 9) != '\0') {
    piVar5 = (int *)(iVar2 + 0xc);
    *piVar5 = *piVar5 + -1;
    if (*piVar5 == 0) {
      iVar8 = *(int *)(*(int *)(iVar2 + 4) + 0x38);
      if (iVar8 != 0) {
        (*DAT_00582b20)(iVar8);
      }
      *(undefined1 *)(iVar2 + 10) = 0;
    }
  }
  if (*(int *)(param_1[5] + 0xc) != 0) {
    (*DAT_00582b20)(*(int *)(param_1[5] + 0xc));
  }
  return uVar10;
}


/* FUN_00467dc0 @ 00467dc0  kind=lib  attributed-by=lib-island  size=246 */

int __cdecl FUN_00467dc0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  piVar1 = (int *)param_1[5];
  iVar6 = piVar1[3];
  if (iVar6 != 0) {
    (*DAT_00582b18)(iVar6);
  }
  FUN_0048fbc0((undefined4 *)param_1[6]);
  if (*param_1 != 0) {
    iVar6 = *(int *)(*param_1 + 0xc);
    if (iVar6 != 0) {
      (*DAT_00582b18)(iVar6);
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
  FUN_004916b0((int *)param_1[1],0);
  iVar6 = param_1[7];
  if (iVar6 == 0x65) {
    iVar6 = 0;
  }
  FUN_004961f0(*param_1,iVar6,(byte *)0x0);
  if ((int *)*param_1 != (int *)0x0) {
    FUN_0049fad0((int *)*param_1);
  }
  iVar3 = param_1[6];
  if (*(char *)(iVar3 + 9) != '\0') {
    piVar2 = (int *)(iVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      iVar4 = *(int *)(*(int *)(iVar3 + 4) + 0x38);
      if (iVar4 != 0) {
        (*DAT_00582b20)(iVar4);
      }
      *(undefined1 *)(iVar3 + 10) = 0;
    }
  }
  if (*param_1 != 0) {
    FUN_00466dd0((int)param_1);
  }
  FUN_0049fad0(piVar1);
  return iVar6;
}


/* FUN_00468070 @ 00468070  kind=lib  attributed-by=lib-island  size=329 */

void __cdecl FUN_00468070(int param_1,undefined4 param_2,int *param_3)

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
            FUN_0048cc90(*(byte **)(iVar2 + 4),&local_c,*(uint *)(iVar2 + 0x18),
                         *(char *)(iVar2 + 0x1f));
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
      FUN_004b7790((int *)(param_1 + 8),dVar4);
      return;
    }
    FUN_0045fc90(param_1);
    return;
  }
  uVar5 = FUN_0045f250(iVar2);
  iVar3 = (int)(uVar5 >> 0x20);
  iVar2 = (int)uVar5;
  if ((iVar3 == 0 || (longlong)uVar5 < 0) && ((longlong)uVar5 < 0)) {
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
      if ((iVar3 <= iVar2) && (iVar2 = FUN_004b7260((int *)(param_1 + 8),iVar3 + 1,0), iVar2 == 0))
      {
        memcpy(*(void **)(param_1 + 0xc),"integer overflow",iVar3 + 1);
        *(int *)(param_1 + 0x20) = iVar3;
        *(undefined4 *)(param_1 + 0x24) = 0x1030202;
      }
      return;
    }
    uVar5 = CONCAT44(-(iVar3 + (uint)(iVar2 != 0)),-iVar2);
  }
  FUN_0045fc30(param_1,(int)uVar5,(int)(uVar5 >> 0x20));
  return;
}


/* FUN_00468380 @ 00468380  kind=lib  attributed-by=lib-island  size=88 */

int __cdecl FUN_00468380(byte *param_1,byte *param_2,int param_3)

{
  while (0 < param_3) {
    if ((*param_1 == 0) || ((&DAT_00569620)[*param_1] != (&DAT_00569620)[*param_2])) break;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    param_3 = param_3 + -1;
  }
  if (param_3 + -1 < 0) {
    return 0;
  }
  return (uint)(byte)(&DAT_00569620)[*param_1] - (uint)(byte)(&DAT_00569620)[*param_2];
}


/* FUN_004683f0 @ 004683f0  kind=lib  attributed-by=lib-island  size=32 */

void __cdecl FUN_004683f0(undefined4 param_1,undefined4 param_2)

{
  if (DAT_00582bac != 0) {
    FUN_004885a0(param_1,param_2,&stack0x0000000c);
  }
  return;
}


/* FUN_00468600 @ 00468600  kind=lib  attributed-by=lib-island  size=107 */

undefined4 __cdecl FUN_00468600(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (param_2 < 1) {
    if (iVar1 != 0) {
      (*DAT_00582b18)(iVar1);
    }
    *(undefined4 *)(param_1 + 0xc0) = 0;
    *(undefined4 *)(param_1 + 0xc4) = 0;
  }
  else {
    if (iVar1 != 0) {
      (*DAT_00582b18)(iVar1);
    }
    *(code **)(param_1 + 0xc0) = FUN_004ba730;
    *(int *)(param_1 + 0xc4) = param_2;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b20)(*(int *)(param_1 + 0xc));
  }
  return 0;
}


/* FUN_00468670 @ 00468670  kind=lib  attributed-by=lib-island  size=104 */

uint __cdecl FUN_00468670(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x44);
    if (((iVar1 != 0x4b771290) && (iVar1 != -0x5fd65969)) && (iVar1 != -0xfc486fa)) {
      FUN_004683f0(0x15,"API call with %s database connection pointer");
      FUN_004683f0(0x15,"misuse at line %d of [%.10s]");
      return 0x15;
    }
    if (*(char *)(param_1 + 0x38) == '\0') {
      return *(uint *)(param_1 + 0x30) & *(uint *)(param_1 + 0x2c);
    }
  }
  return 7;
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


/* FUN_00469a30 @ 00469a30  kind=lib  attributed-by=lib-island  size=108 */

int __cdecl FUN_00469a30(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if ((param_2 < (int)(uint)*(ushort *)(param_1 + 0xb)) && (-1 < param_2)) {
    if (*(int *)(iVar1 + 0xc) != 0) {
      (*DAT_00582b18)(*(int *)(iVar1 + 0xc));
    }
    iVar2 = FUN_004ae680((int *)(param_1[4] + param_2 * 0x28),1);
    if (*(char *)(iVar1 + 0x38) != '\0') {
      *(undefined1 *)(iVar1 + 0x38) = 0;
      iVar2 = 0;
    }
    if (*(int *)(iVar1 + 0xc) != 0) {
      (*DAT_00582b20)(*(int *)(iVar1 + 0xc));
    }
    return iVar2;
  }
  return 0;
}


/* FUN_00469cb0 @ 00469cb0  kind=lib  attributed-by=lib-island  size=618 */

uint __cdecl FUN_00469cb0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  void *pvVar5;
  undefined4 *puVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  char *pcVar10;
  uint local_cc [48];
  int local_c;
  uint local_8;
  
  puVar3 = param_1;
  if (param_1 == (uint *)0x0) {
    pcVar10 = "API called with NULL prepared statement";
  }
  else {
    local_8 = *param_1;
    if (local_8 != 0) {
      if (*(int *)(local_8 + 0xc) != 0) {
        (*DAT_00582b18)(*(int *)(local_8 + 0xc));
      }
      puVar3[0x18] = puVar3[0x18] & 0xfffffbff;
      uVar4 = FUN_004aa5e0(puVar3);
      iVar7 = 0;
      if (uVar4 == 0x11) {
        while (local_c = iVar7 + 1, iVar7 < 5) {
          if ((puVar3[0x18] & 0x200) == 0) {
            pvVar5 = (void *)0x0;
          }
          else {
            pvVar5 = (void *)puVar3[0x26];
          }
          uVar1 = *puVar3;
          uVar4 = FUN_004a0180(uVar1,pvVar5,0xffffffff,0,(int)puVar3,&param_1,(int *)0x0);
          uVar2 = local_8;
          if (uVar4 != 0) {
            if (uVar4 == 7) {
              *(undefined1 *)(uVar1 + 0x38) = 1;
            }
            if (((puVar3[0x18] & 0x200) != 0) && (*(int **)(local_8 + 0xd4) != (int *)0x0)) {
              param_1 = (uint *)FUN_004ae680(*(int **)(local_8 + 0xd4),1);
              FUN_00494b00(uVar2,(undefined4 *)puVar3[0xd]);
              if (*(char *)(uVar2 + 0x38) == '\0') {
                puVar6 = FUN_00494db0(uVar2,(char *)param_1);
                puVar3[0xd] = (uint)puVar6;
              }
              else {
                puVar3[0xd] = 0;
                uVar4 = 7;
              }
              puVar3[0x16] = uVar4;
            }
            break;
          }
          puVar8 = param_1;
          puVar9 = local_cc;
          for (iVar7 = 0x30; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar9 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar9 = puVar9 + 1;
          }
          puVar8 = puVar3;
          puVar9 = param_1;
          for (iVar7 = 0x30; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar9 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar9 = puVar9 + 1;
          }
          puVar8 = local_cc;
          puVar9 = puVar3;
          for (iVar7 = 0x30; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar9 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar9 = puVar9 + 1;
          }
          uVar4 = param_1[0xf];
          param_1[0xf] = puVar3[0xf];
          puVar3[0xf] = uVar4;
          uVar4 = param_1[0xe];
          param_1[0xe] = puVar3[0xe];
          puVar3[0xe] = uVar4;
          pvVar5 = (void *)param_1[0x26];
          param_1[0x26] = puVar3[0x26];
          puVar3[0x26] = (uint)pvVar5;
          puVar3[0x18] = puVar3[0x18] ^ (param_1[0x18] ^ puVar3[0x18]) & 0x200;
          FUN_004aac10(pvVar5,(int)param_1,(int *)puVar3);
          puVar8 = param_1;
          param_1[0x16] = 0;
          if ((param_1[0xc] == 0xbdf20da3) || (param_1[0xc] == 0x519c2973)) {
            FUN_004b8640((int *)param_1);
          }
          uVar4 = *puVar8;
          FUN_004aef00(uVar4,(int)puVar8);
          if (puVar8[0xe] == 0) {
            *(uint *)(uVar4 + 4) = puVar8[0xf];
          }
          else {
            *(uint *)(puVar8[0xe] + 0x3c) = puVar8[0xf];
          }
          if (puVar8[0xf] != 0) {
            *(uint *)(puVar8[0xf] + 0x38) = puVar8[0xe];
          }
          puVar8[0xc] = 0xb606c3c8;
          *puVar8 = 0;
          FUN_00494b00(uVar4,puVar8);
          FUN_0046aab0((int *)puVar3);
          puVar3[0x18] = puVar3[0x18] | 0x400;
          uVar4 = FUN_004aa5e0(puVar3);
          iVar7 = local_c;
          if (uVar4 != 0x11) break;
        }
      }
      uVar1 = local_8;
      if ((*(char *)(local_8 + 0x38) != '\0') || (uVar4 == 0xc0a)) {
        FUN_004961f0(local_8,7,(byte *)0x0);
        *(undefined1 *)(uVar1 + 0x38) = 0;
        uVar4 = 7;
      }
      uVar2 = *(uint *)(uVar1 + 0x30);
      if (*(int *)(uVar1 + 0xc) != 0) {
        (*DAT_00582b20)(*(int *)(uVar1 + 0xc));
      }
      return uVar2 & uVar4;
    }
    pcVar10 = "API called with finalized prepared statement";
    local_8 = 0;
  }
  FUN_004683f0(0x15,pcVar10);
  FUN_004683f0(0x15,"misuse at line %d of [%.10s]");
  return 0x15;
}


/* FUN_0046aa30 @ 0046aa30  kind=lib  attributed-by=lib-island  size=115 */

uint __cdecl FUN_0046aa30(int *param_1)

{
  int *piVar1;
  uint uVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  piVar1 = (int *)*param_1;
  if (piVar1 == (int *)0x0) {
    FUN_004683f0(0x15,"API called with finalized prepared statement");
    FUN_004683f0(0x15,"misuse at line %d of [%.10s]");
    return 0x15;
  }
  if (piVar1[3] != 0) {
    (*DAT_00582b18)(piVar1[3]);
  }
  uVar2 = FUN_004b5e70(param_1);
  uVar2 = FUN_0048ca70((int)piVar1,uVar2);
  FUN_0049fad0(piVar1);
  return uVar2;
}


/* FUN_0046aab0 @ 0046aab0  kind=lib  attributed-by=lib-island  size=191 */

uint __cdecl FUN_0046aab0(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (*(int *)(*param_1 + 0xc) != 0) {
    (*DAT_00582b18)(*(int *)(*param_1 + 0xc));
  }
  uVar2 = FUN_004b8640(param_1);
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
      FUN_004961f0(iVar1,7,(byte *)0x0);
      *(undefined1 *)(iVar1 + 0x38) = 0;
      uVar2 = 7;
    }
    uVar3 = *(uint *)(iVar1 + 0x30);
  }
  if (*(int *)(*param_1 + 0xc) != 0) {
    (*DAT_00582b20)(*(int *)(*param_1 + 0xc));
  }
  return uVar3 & uVar2;
}


/* FUN_0046b2f0 @ 0046b2f0  kind=lib  attributed-by=lib-island  size=829 */

uint __cdecl FUN_0046b2f0(int param_1,uint param_2,size_t param_3,void *param_4,int param_5)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  size_t sVar7;
  undefined4 *puVar8;
  FILL unaff_EDI;
  undefined4 *local_24;
  size_t local_20;
  size_t local_1c;
  void *local_18;
  int *local_14;
  uint local_10;
  undefined4 *local_c;
  uint local_8;
  
  local_14 = *(int **)(param_1 + 4);
  sVar7 = *(size_t *)(param_1 + 0x88 + *(short *)(param_1 + 0x5e) * 4);
  local_8 = 0;
  local_20 = sVar7;
  if (*(short *)(param_1 + 0x42) == 0) {
    uVar4 = (uint)*(ushort *)(param_1 + 0x60 + *(short *)(param_1 + 0x5e) * 2);
    FUN_00471710(sVar7,(uint)(CONCAT11(*(undefined1 *)(*(int *)(sVar7 + 0x40) + uVar4 * 2),
                                       *(undefined1 *)(*(int *)(sVar7 + 0x40) + 1 + uVar4 * 2)) &
                             *(ushort *)(sVar7 + 0x12)) + *(int *)(sVar7 + 0x38),
                 (uint *)(param_1 + 0x28));
    *(undefined1 *)(param_1 + 0x5a) = 1;
  }
  local_c = (undefined4 *)((uint)*(ushort *)(param_1 + 0x3c) + *(int *)(param_1 + 0x30));
  if (*(char *)(sVar7 + 2) == '\0') {
    iVar5 = *(int *)(param_1 + 0x28);
  }
  else {
    iVar5 = 0;
  }
  if (((uint)(*(int *)(param_1 + 0x34) + iVar5) < param_2 + param_3) ||
     (uVar4 = 0,
     (uint)(*(int *)(local_20 + 0x38) + local_14[9]) <
     (uint)*(ushort *)(param_1 + 0x3e) + (int)local_c)) goto LAB_0046b612;
  uVar6 = (uint)*(ushort *)(param_1 + 0x3e);
  if (param_2 < uVar6) {
    local_1c = param_3;
    if (uVar6 < param_2 + param_3) {
      local_1c = uVar6 - param_2;
    }
    uVar4 = FUN_004761f0((void *)((int)local_c + param_2),param_4,local_1c,param_5,
                         *(undefined4 **)(local_20 + 0x44));
    param_3 = param_3 - local_1c;
    local_18 = (void *)((int)param_4 + local_1c);
    param_2 = 0;
    local_8 = uVar4;
    if (uVar4 != 0) {
      return uVar4;
    }
  }
  else {
    param_2 = param_2 - uVar6;
    local_18 = param_4;
  }
  if (param_3 == 0) {
    return uVar4;
  }
  local_20 = (size_t)*(ushort *)(param_1 + 0x3e);
  puVar8 = (undefined4 *)
           CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(local_20 + (int)local_c),
                                      *(undefined1 *)(local_20 + 1 + (int)local_c)),
                             *(undefined1 *)(local_20 + 2 + (int)local_c)),
                    *(undefined1 *)(local_20 + 3 + (int)local_c));
  local_10 = local_14[9] - 4;
  local_c = puVar8;
  if ((*(char *)(param_1 + 0x5c) != '\0') && (*(int *)(param_1 + 0x14) == 0)) {
    uVar6 = ((*(int *)(param_1 + 0x38) - local_20) + -1 + local_10) / local_10;
    pvVar3 = operator_new__(uVar6 * 4,unaff_EDI);
    *(void **)(param_1 + 0x14) = pvVar3;
    uVar4 = local_8;
    if ((uVar6 != 0) && (pvVar3 == (void *)0x0)) {
      uVar4 = 7;
    }
  }
  local_20 = *(size_t *)(param_1 + 0x14);
  if (local_20 == 0) {
LAB_0046b4d8:
    uVar6 = 0;
  }
  else {
    uVar6 = param_2 / local_10;
    if (*(int *)(local_20 + uVar6 * 4) == 0) goto LAB_0046b4d8;
    puVar8 = *(undefined4 **)(local_20 + uVar6 * 4);
    param_2 = param_2 % local_10;
    local_c = puVar8;
  }
  if (uVar4 == 0) {
    local_1c = uVar6 << 2;
    sVar7 = param_3;
    uVar6 = param_2;
    while ((sVar7 != 0 && (puVar8 != (undefined4 *)0x0))) {
      if (*(int *)(param_1 + 0x14) != 0) {
        *(undefined4 **)(local_1c + *(int *)(param_1 + 0x14)) = puVar8;
        sVar7 = param_3;
      }
      if (uVar6 < local_10) {
        local_20 = sVar7;
        if (local_10 < uVar6 + sVar7) {
          local_20 = local_10 - uVar6;
        }
        local_8 = FUN_004a14c0(*local_14,(uint)puVar8,(int *)&local_24,0);
        puVar1 = local_24;
        if (local_8 == 0) {
          puVar2 = (undefined1 *)local_24[1];
          puVar8 = (undefined4 *)FUN_0049c920(puVar2);
          local_c = puVar8;
          local_8 = FUN_004761f0(puVar2 + param_2 + 4,local_18,local_20,param_5,puVar1);
          FUN_004a2c20(puVar1);
          uVar6 = 0;
          param_2 = 0;
        }
        sVar7 = param_3 - local_20;
        local_18 = (void *)((int)local_18 + local_20);
        uVar4 = local_8;
        param_3 = sVar7;
      }
      else {
        local_20 = *(size_t *)(param_1 + 0x14);
        if ((local_20 == 0) ||
           (puVar1 = *(undefined4 **)(local_1c + 4 + local_20), uVar6 = param_2,
           puVar1 == (undefined4 *)0x0)) {
          uVar4 = FUN_0047d460(local_14,puVar8,(int *)0x0,&local_c);
          uVar6 = uVar6 - local_10;
          sVar7 = param_3;
          puVar8 = local_c;
          param_2 = uVar6;
        }
        else {
          uVar6 = param_2 - local_10;
          puVar8 = puVar1;
          param_2 = uVar6;
          local_c = puVar1;
        }
      }
      local_1c = local_1c + 4;
      if (uVar4 != 0) {
        return uVar4;
      }
    }
    if ((uVar4 == 0) && (sVar7 != 0)) {
LAB_0046b612:
      FUN_004683f0(0xb,"database corruption at line %d of [%.10s]");
      return 0xb;
    }
  }
  return uVar4;
}


/* FUN_0046b630 @ 0046b630  kind=lib  attributed-by=lib-island  size=57 */

char * __cdecl FUN_0046b630(undefined1 param_1)

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


/* FUN_0046b680 @ 0046b680  kind=lib  attributed-by=lib-island  size=105 */

void __cdecl FUN_0046b680(int *param_1)

{
  void *_Src;
  size_t _Size;
  int iVar1;
  undefined4 *_Dst;
  
  _Src = (void *)param_1[0x86];
  if ((_Src != (void *)0x0) && (param_1[0x7f] != 0)) {
    _Size = param_1[0x87];
    iVar1 = *param_1;
    _Dst = FUN_00494b90(iVar1,_Size + 1);
    if (_Dst != (undefined4 *)0x0) {
      memcpy(_Dst,_Src,_Size);
      *(undefined1 *)((int)_Dst + _Size) = 0;
    }
    FUN_0046b6f0(iVar1,param_1[0x7f],_Dst);
  }
  return;
}


/* FUN_0046b6f0 @ 0046b6f0  kind=lib  attributed-by=lib-island  size=140 */

void __cdecl FUN_0046b6f0(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_2 + 0x30);
  *(int *)(param_2 + 0x30) = iVar1 + 1;
  puVar2 = FUN_00494cf0(param_1,*(undefined4 **)(param_2 + 0x34),(iVar1 + 1) * 4 + 4);
  if (puVar2 == (undefined4 *)0x0) {
    iVar3 = 0;
    if (0 < iVar1) {
      do {
        FUN_00494b00(param_1,*(undefined4 **)(*(int *)(param_2 + 0x34) + iVar3 * 4));
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
    }
    FUN_00494b00(param_1,param_3);
    FUN_00494b00(param_1,*(undefined4 **)(param_2 + 0x34));
    *(undefined4 *)(param_2 + 0x30) = 0;
    *(undefined4 *)(param_2 + 0x34) = 0;
    return;
  }
  puVar2[iVar1] = param_3;
  puVar2[iVar1 + 1] = 0;
  *(undefined4 **)(param_2 + 0x34) = puVar2;
  return;
}


/* FUN_0046b780 @ 0046b780  kind=lib  attributed-by=lib-island  size=594 */

uint __cdecl FUN_0046b780(int param_1,uint param_2)

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
              if (DAT_00582ac8 == 0) {
                local_10 = (uint *)(*DAT_00582ae8)(0x200);
              }
              else {
                if (DAT_00583f40 != 0) {
                  (*DAT_00582b18)(DAT_00583f40);
                }
                FUN_00480650(0x200,(int *)&local_10);
                if (DAT_00583f40 != 0) {
                  (*DAT_00582b20)(DAT_00583f40);
                }
              }
              puVar3 = local_10;
              if (local_10 != (uint *)0x0) {
                memset(local_10,0,0x200);
                *puVar3 = uVar8;
              }
              puVar5[uVar2 + 3] = (uint)puVar3;
              if (puVar3 == (uint *)0x0) goto LAB_0046b906;
            }
            puVar5 = (uint *)puVar5[uVar2 + 3];
          } while (4000 < *puVar5);
          if (4000 < *puVar5) {
            uVar2 = uVar6 % 0x7d;
            uVar6 = uVar6 + 1;
            uVar8 = puVar5[uVar2 + 3];
            if (uVar8 == 0) {
              uVar8 = puVar5[1];
              if (0x7b < uVar8) goto LAB_0046b8e8;
            }
            else {
              do {
                if (uVar8 == uVar6) goto LAB_0046b9cc;
                uVar2 = uVar2 + 1 & -(uint)(uVar2 + 1 < 0x7d);
                uVar8 = puVar5[uVar2 + 3];
              } while (uVar8 != 0);
LAB_0046b8e8:
              uVar8 = puVar5[1];
              if (0x3d < uVar8) {
                puVar3 = (uint *)FUN_004a0350(500);
                if (puVar3 == (uint *)0x0) {
LAB_0046b906:
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
                  uVar6 = FUN_0048ea60(puVar5,uVar6);
                  uVar8 = 0;
                  do {
                    if (puVar3[uVar8] != 0) {
                      uVar2 = FUN_0048ea60(puVar5,puVar3[uVar8]);
                      uVar6 = uVar6 | uVar2;
                    }
                    uVar8 = uVar8 + 1;
                  } while (uVar8 < 0x7d);
                  FUN_00466dd0((int)puVar3);
                  local_18 = local_18 | uVar6;
                }
                goto LAB_0046b9cc;
              }
            }
            puVar5[1] = uVar8 + 1;
            puVar5[uVar2 + 3] = uVar6;
            goto LAB_0046b9cc;
          }
        }
        pbVar1 = (byte *)((uVar6 >> 3) + 0xc + (int)puVar5);
        *pbVar1 = *pbVar1 | '\x01' << ((byte)uVar6 & 7);
      }
LAB_0046b9cc:
      local_8 = local_8 + 1;
      local_c = local_c + 0x30;
      uVar6 = local_18;
    } while (local_8 < *(int *)(param_1 + 0x60));
  }
  return uVar6;
}


/* FUN_0046b9f0 @ 0046b9f0  kind=lib  attributed-by=lib-island  size=186 */

void __cdecl
FUN_0046b9f0(int *param_1,int param_2,int param_3,uint param_4,int param_5,uint param_6,int param_7,
            undefined4 *param_8)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char *pcVar4;
  
  iVar1 = *param_1;
  puVar2 = FUN_00493b20(iVar1,param_2,param_3,param_4);
  puVar3 = FUN_00493b20(iVar1,param_2,param_5,param_6);
  pcVar4 = (char *)FUN_00494b90(*param_1,0x2c);
  if (pcVar4 != (char *)0x0) {
    memset(pcVar4,0,0x2c);
    *pcVar4 = 'L';
    pcVar4[0x1e] = -1;
    pcVar4[0x1f] = -1;
    pcVar4[0x14] = '\x01';
    pcVar4[0x15] = '\0';
    pcVar4[0x16] = '\0';
    pcVar4[0x17] = '\0';
  }
  FUN_00496a30(*param_1,(int)pcVar4,puVar2,puVar3);
  if (pcVar4 != (char *)0x0) {
    if (*(int *)(*param_1 + 0x5c) < *(int *)(pcVar4 + 0x14)) {
      FUN_004962b0(param_1,(byte *)"Expression tree is too large (maximum depth %d)");
    }
    if (param_7 != 0) {
      *(ushort *)(pcVar4 + 2) = *(ushort *)(pcVar4 + 2) | 1;
      *(undefined2 *)(pcVar4 + 0x20) = *(undefined2 *)(puVar3 + 6);
    }
  }
  pcVar4 = FUN_004966d0(iVar1,(char *)*param_8,pcVar4);
  *param_8 = pcVar4;
  return;
}


/* FUN_0046bae0 @ 0046bae0  kind=lib  attributed-by=lib-island  size=1907 */

uint __cdecl FUN_0046bae0(int *param_1,int *param_2,uint *param_3,undefined4 *param_4,char param_5)

{
  undefined1 uVar1;
  uint *puVar2;
  undefined3 uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined3 extraout_var;
  uint uVar8;
  undefined1 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *local_2c;
  undefined4 *local_28;
  int local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  byte local_5;
  
  iVar10 = 0;
  local_14 = param_1[3];
  local_1c = (undefined4 *)param_1[0xb];
  iVar6 = *(int *)(local_14 + 0x38);
  puVar11 = (undefined4 *)
            CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar6 + 0x24),*(undefined1 *)(iVar6 + 0x25)),
                              *(undefined1 *)(iVar6 + 0x26)),*(undefined1 *)(iVar6 + 0x27));
  if (local_1c <= puVar11) {
    FUN_004683f0(0xb,"database corruption at line %d of [%.10s]");
    return 0xb;
  }
  if (puVar11 == (undefined4 *)0x0) {
    uVar5 = FUN_004a2c80(*(undefined4 **)(local_14 + 0x44));
    if (uVar5 != 0) {
      return uVar5;
    }
    uVar5 = DAT_00582bb8 / (uint)param_1[8];
    param_1[0xb] = param_1[0xb] + 1;
    if (param_1[0xb] == uVar5 + 1) {
      param_1[0xb] = param_1[0xb] + 1;
    }
    if (*(char *)((int)param_1 + 0x11) != '\0') {
      uVar5 = param_1[0xb];
      uVar8 = FUN_00487070((int)param_1,uVar5);
      if (uVar8 == uVar5) {
        local_28 = (undefined4 *)0x0;
        uVar5 = FUN_004712c0(param_1,uVar5,(int *)&local_28,1);
        puVar11 = local_28;
        if (uVar5 != 0) {
          return uVar5;
        }
        uVar5 = FUN_004a2c80((undefined4 *)local_28[0x11]);
        FUN_004880a0((int)puVar11);
        if (uVar5 != 0) {
          return uVar5;
        }
        uVar5 = DAT_00582bb8 / (uint)param_1[8];
        param_1[0xb] = param_1[0xb] + 1;
        if (param_1[0xb] == uVar5 + 1) {
          param_1[0xb] = param_1[0xb] + 1;
        }
      }
    }
    iVar6 = param_1[0xb];
    iVar10 = *(int *)(param_1[3] + 0x38);
    *(char *)(iVar10 + 0x1c) = (char)((uint)iVar6 >> 0x18);
    *(char *)(iVar10 + 0x1d) = (char)((uint)iVar6 >> 0x10);
    *(char *)(iVar10 + 0x1e) = (char)((uint)iVar6 >> 8);
    *(char *)(iVar10 + 0x1f) = (char)iVar6;
    uVar5 = param_1[0xb];
    *param_3 = uVar5;
    uVar5 = FUN_004712c0(param_1,uVar5,param_2,1);
    if (uVar5 != 0) {
      return uVar5;
    }
    uVar5 = FUN_004a2c80(*(undefined4 **)(*param_2 + 0x44));
    if (uVar5 == 0) goto LAB_0046c1ed;
    FUN_004880a0(*param_2);
  }
  else {
    local_c = local_c & 0xffffff00;
    if ((param_5 != '\0') && (param_4 <= local_1c)) {
      uVar5 = FUN_00486f40(param_1,param_4,&local_5,(undefined4 *)0x0);
      if (uVar5 != 0) {
        return uVar5;
      }
      local_c = local_c & 0xff;
      if (local_5 == 2) {
        local_c = 1;
      }
      *param_3 = (uint)param_4;
    }
    uVar5 = FUN_004a2c80(*(undefined4 **)(local_14 + 0x44));
    if (uVar5 != 0) {
      return uVar5;
    }
    iVar6 = (int)puVar11 - 1;
    iVar7 = *(int *)(local_14 + 0x38);
    *(char *)(iVar7 + 0x24) = (char)((uint)iVar6 >> 0x18);
    *(char *)(iVar7 + 0x25) = (char)((uint)iVar6 >> 0x10);
    *(char *)(iVar7 + 0x26) = (char)((uint)iVar6 >> 8);
    *(char *)(iVar7 + 0x27) = (char)iVar6;
    do {
      if (iVar10 == 0) {
        iVar6 = *(int *)(local_14 + 0x38);
        uVar3 = CONCAT21(CONCAT11(*(undefined1 *)(iVar6 + 0x20),*(undefined1 *)(iVar6 + 0x21)),
                         *(undefined1 *)(iVar6 + 0x22));
        uVar1 = *(undefined1 *)(iVar6 + 0x23);
      }
      else {
        puVar9 = *(undefined1 **)(iVar10 + 0x38);
        uVar3 = CONCAT21(CONCAT11(*puVar9,puVar9[1]),puVar9[2]);
        uVar1 = puVar9[3];
      }
      puVar11 = (undefined4 *)CONCAT31(uVar3,uVar1);
      local_18 = iVar10;
      if (local_1c < puVar11) {
        FUN_004683f0(0xb,"database corruption at line %d of [%.10s]");
        uVar5 = 0xb;
        goto LAB_0046c0a1;
      }
      uVar5 = FUN_004a14c0(*param_1,(uint)puVar11,(int *)&local_2c,0);
      if (uVar5 != 0) goto LAB_0046c0a1;
      iVar10 = local_2c[2];
      *(undefined4 *)(iVar10 + 0x38) = local_2c[1];
      *(int **)(iVar10 + 0x34) = param_1;
      *(byte *)(iVar10 + 5) = (puVar11 != (undefined4 *)0x1) - 1U & 100;
      local_10 = *(int *)(iVar10 + 0x38);
      *(undefined4 **)(iVar10 + 0x44) = local_2c;
      *(undefined4 **)(iVar10 + 0x48) = puVar11;
      local_20 = (undefined4 *)
                 CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(local_10 + 4),
                                            *(undefined1 *)(local_10 + 5)),
                                   *(undefined1 *)(local_10 + 6)),*(undefined1 *)(local_10 + 7));
      if ((local_20 == (undefined4 *)0x0) && ((char)local_c == '\0')) {
        uVar5 = FUN_004a2c80(local_2c);
        if (uVar5 == 0) {
          *param_3 = (uint)puVar11;
          *(undefined4 *)(*(int *)(local_14 + 0x38) + 0x20) = **(undefined4 **)(iVar10 + 0x38);
          *param_2 = iVar10;
          iVar10 = 0;
          goto LAB_0046bfc6;
        }
        break;
      }
      if ((undefined4 *)(((uint)param_1[9] >> 2) - 2) < local_20) {
LAB_0046c041:
        FUN_004683f0(0xb,"database corruption at line %d of [%.10s]");
        uVar5 = 0xb;
        break;
      }
      if (((char)local_c == '\0') || (param_4 != puVar11)) {
        if (local_20 != (undefined4 *)0x0) {
          if (param_4 == (undefined4 *)0x0) {
LAB_0046bed0:
            puVar12 = (undefined4 *)0x0;
          }
          else {
            local_28 = (undefined4 *)0x0;
            iVar6 = FUN_0049c920((undefined1 *)(local_10 + 8));
            iVar6 = FUN_0048b940(iVar6 - (int)param_4);
            puVar11 = (undefined4 *)0x1;
            if (local_20 < (undefined4 *)0x2) goto LAB_0046bed0;
            puVar9 = (undefined1 *)(local_10 + 0xe);
            do {
              iVar7 = CONCAT31(CONCAT21(CONCAT11(puVar9[-2],puVar9[-1]),*puVar9),puVar9[1]) -
                      (int)param_4;
              if (iVar7 < 0) {
                if (iVar7 == -0x80000000) {
                  iVar7 = 0x7fffffff;
                }
                else {
                  iVar7 = -iVar7;
                }
              }
              if (iVar7 < iVar6) {
                iVar6 = iVar7;
                local_28 = puVar11;
              }
              puVar11 = (undefined4 *)((int)puVar11 + 1);
              puVar9 = puVar9 + 4;
              puVar12 = local_28;
            } while (puVar11 < local_20);
          }
          puVar11 = (undefined4 *)
                    CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(local_10 + 8 + (int)puVar12 * 4),
                                               *(undefined1 *)(local_10 + 9 + (int)puVar12 * 4)),
                                      *(undefined1 *)(local_10 + 10 + (int)puVar12 * 4)),
                             *(undefined1 *)(local_10 + 0xb + (int)puVar12 * 4));
          if (local_1c < puVar11) goto LAB_0046c041;
          if (((char)local_c == '\0') || (puVar11 == param_4)) {
            *param_3 = (uint)puVar11;
            uVar5 = FUN_004a2c80(*(undefined4 **)(iVar10 + 0x44));
            if (uVar5 != 0) break;
            puVar11 = (undefined4 *)((int)local_20 - 1);
            if (puVar12 < puVar11) {
              *(undefined4 *)(local_10 + 8 + (int)puVar12 * 4) =
                   *(undefined4 *)(local_10 + 4 + (int)local_20 * 4);
            }
            *(char *)(local_10 + 4) = (char)((uint)puVar11 >> 0x18);
            *(char *)(local_10 + 5) = (char)((uint)puVar11 >> 0x10);
            *(char *)(local_10 + 6) = (char)((uint)puVar11 >> 8);
            *(char *)(local_10 + 7) = (char)puVar11;
            uVar5 = *param_3;
            puVar2 = (uint *)param_1[0xf];
            if ((puVar2 == (uint *)0x0) ||
               ((uVar5 <= *puVar2 &&
                (bVar4 = FUN_0048ec40(puVar2,uVar5), CONCAT31(extraout_var,bVar4) == 0)))) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            uVar5 = FUN_004712c0(param_1,uVar5,param_2,(uint)!bVar4);
            if ((uVar5 == 0) &&
               (uVar5 = FUN_004a2c80(*(undefined4 **)(*param_2 + 0x44)), uVar5 != 0)) {
              FUN_004880a0(*param_2);
            }
            local_c = local_c & 0xffffff00;
          }
        }
      }
      else {
        local_c = local_c & 0xffffff00;
        *param_2 = iVar10;
        uVar5 = FUN_004a2c80(*(undefined4 **)(iVar10 + 0x44));
        iVar6 = local_18;
        puVar11 = local_20;
        if (uVar5 != 0) break;
        if (local_20 == (undefined4 *)0x0) {
          if (local_18 == 0) {
            puVar11 = (undefined4 *)(iVar10 + 0x38);
            iVar10 = 0;
            *(undefined4 *)(*(int *)(local_14 + 0x38) + 0x20) = *(undefined4 *)*puVar11;
          }
          else {
            uVar5 = FUN_004a2c80(*(undefined4 **)(local_18 + 0x44));
            if (uVar5 != 0) break;
            **(undefined4 **)(iVar6 + 0x38) = **(undefined4 **)(iVar10 + 0x38);
            iVar10 = 0;
          }
        }
        else {
          local_20 = (undefined4 *)FUN_0049c920((undefined1 *)(*(int *)(iVar10 + 0x38) + 8));
          if (local_1c < local_20) {
            uVar5 = FUN_00493af0();
            break;
          }
          uVar5 = FUN_004712c0(param_1,(uint)local_20,&local_24,0);
          if (uVar5 != 0) break;
          uVar5 = FUN_004a2c80(*(undefined4 **)(local_24 + 0x44));
          if (uVar5 != 0) {
            FUN_004880a0(local_24);
            break;
          }
          **(undefined4 **)(local_24 + 0x38) = **(undefined4 **)(iVar10 + 0x38);
          FUN_004a5f90((undefined1 *)(*(int *)(local_24 + 0x38) + 4),(int)puVar11 - 1U);
          iVar6 = local_24;
          memcpy((void *)(*(int *)(local_24 + 0x38) + 8),(void *)(*(int *)(iVar10 + 0x38) + 0xc),
                 ((int)puVar11 - 1U) * 4);
          FUN_004880a0(iVar6);
          iVar6 = local_18;
          if (local_18 == 0) {
            FUN_004a5f90((undefined1 *)(*(int *)(local_14 + 0x38) + 0x20),local_20);
            iVar10 = 0;
          }
          else {
            uVar5 = FUN_004a2c80(*(undefined4 **)(local_18 + 0x44));
            if (uVar5 != 0) break;
            FUN_004a5f90(*(undefined1 **)(iVar6 + 0x38),local_20);
            iVar10 = 0;
          }
        }
      }
LAB_0046bfc6:
      if ((local_18 != 0) &&
         (puVar11 = *(undefined4 **)(local_18 + 0x44), puVar11 != (undefined4 *)0x0)) {
        puVar2 = (uint *)puVar11[4];
        FUN_004a3a80(puVar11);
        if (*(int *)(puVar2[0x2d] + 0xc) == 0) {
          FUN_00484370(puVar2);
        }
      }
      local_18 = 0;
    } while ((char)local_c != '\0');
    if ((iVar10 != 0) && (puVar11 = *(undefined4 **)(iVar10 + 0x44), puVar11 != (undefined4 *)0x0))
    {
      puVar2 = (uint *)puVar11[4];
      FUN_004a3a80(puVar11);
      if (*(int *)(puVar2[0x2d] + 0xc) == 0) {
        FUN_00484370(puVar2);
      }
    }
LAB_0046c0a1:
    if ((local_18 != 0) &&
       (puVar11 = *(undefined4 **)(local_18 + 0x44), puVar11 != (undefined4 *)0x0)) {
      puVar2 = (uint *)puVar11[4];
      FUN_004a3a80(puVar11);
      if (*(int *)(puVar2[0x2d] + 0xc) == 0) {
        FUN_00484370(puVar2);
      }
    }
  }
  if (uVar5 != 0) {
    *param_2 = 0;
    return uVar5;
  }
LAB_0046c1ed:
  puVar9 = (undefined1 *)*param_2;
  puVar11 = *(undefined4 **)(puVar9 + 0x44);
  if (*(short *)((int)puVar11 + 0x1a) < 2) {
    *puVar9 = 0;
    return 0;
  }
  if ((puVar9 != (undefined1 *)0x0) && (puVar11 != (undefined4 *)0x0)) {
    puVar2 = (uint *)puVar11[4];
    FUN_004a3a80(puVar11);
    if (*(int *)(puVar2[0x2d] + 0xc) == 0) {
      FUN_00484370(puVar2);
    }
  }
  FUN_004683f0(0xb,"database corruption at line %d of [%.10s]");
  return 0xb;
}


/* FUN_0046c260 @ 0046c260  kind=lib  attributed-by=lib-island  size=210 */

undefined4 * __cdecl
FUN_0046c260(int *param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *_Dst;
  int iVar4;
  void *_Dst_00;
  
  iVar2 = param_2 * 4;
  piVar1 = (int *)(param_1[2] + (param_1[6] - param_2) * 0x28);
  iVar3 = param_3 * 8 + 0x68;
  if (*(undefined4 **)(iVar2 + param_1[0x10]) != (undefined4 *)0x0) {
    FUN_004b5ff0(param_1,*(undefined4 **)(iVar2 + param_1[0x10]));
    *(undefined4 *)(iVar2 + param_1[0x10]) = 0;
  }
  iVar4 = FUN_004b7260(piVar1,(-(uint)(param_5 != 0) & 0xd8) + iVar3,0);
  if (iVar4 == 0) {
    _Dst = (undefined4 *)piVar1[1];
    *(undefined4 **)(iVar2 + param_1[0x10]) = _Dst;
    memset(_Dst,0,0x68);
    _Dst[3] = param_4;
    _Dst[5] = param_3;
    if (param_3 != 0) {
      _Dst[0x16] = piVar1[1] + 0x68;
    }
    if (param_5 != 0) {
      _Dst_00 = (void *)(piVar1[1] + iVar3);
      *_Dst = _Dst_00;
      memset(_Dst_00,0,0x5e);
    }
    return _Dst;
  }
  return (undefined4 *)0x0;
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


/* FUN_0046c4b0 @ 0046c4b0  kind=lib  attributed-by=lib-island  size=482 */

int __cdecl FUN_0046c4b0(uint param_1,int param_2,int *param_3)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint local_8;
  
  uVar7 = (uint)*(byte *)(param_1 + 5);
  iVar5 = *(int *)(param_1 + 0x38);
  iVar3 = *(int *)(*(int *)(param_1 + 0x34) + 0x24);
  bVar2 = *(byte *)(iVar5 + 7 + uVar7);
  iVar6 = iVar5 + uVar7;
  uVar1 = (uint)*(ushort *)(param_1 + 0xc) + (uint)*(ushort *)(param_1 + 0x10) * 2;
  uVar4 = (CONCAT11(*(undefined1 *)(iVar6 + 5),*(undefined1 *)(iVar6 + 6)) - 1 & 0xffff) + 1;
  if (uVar4 < uVar1) {
    FUN_004683f0(0xb,"database corruption at line %d of [%.10s]");
    return 0xb;
  }
  if (bVar2 < 0x3c) {
    if (uVar1 + 2 <= uVar4) {
      uVar9 = (uint)CONCAT11(*(undefined1 *)(uVar7 + 1 + iVar5),*(undefined1 *)(uVar7 + 2 + iVar5));
      if (uVar9 != 0) {
        local_8 = uVar7 + 1;
        do {
          uVar7 = uVar9;
          if ((iVar3 + -4 < (int)uVar7) || (uVar7 < local_8 + 4)) {
            FUN_004683f0(0xb,"database corruption at line %d of [%.10s]");
            return 0xb;
          }
          uVar9 = (uint)CONCAT11(*(undefined1 *)(uVar7 + 2 + iVar5),
                                 *(undefined1 *)(uVar7 + 3 + iVar5));
          if (param_2 <= (int)uVar9) {
            iVar8 = uVar9 - param_2;
            if (iVar8 < 4) {
              *(undefined2 *)(local_8 + iVar5) = *(undefined2 *)(uVar7 + iVar5);
              *(byte *)(iVar6 + 7) = bVar2 + (char)iVar8;
              *param_3 = iVar8 + uVar7;
              return 0;
            }
            if (iVar3 < (int)(uVar9 + uVar7)) {
              iVar6 = FUN_00493af0();
              return iVar6;
            }
            *(char *)(uVar7 + 2 + iVar5) = (char)((uint)iVar8 >> 8);
            *(char *)(uVar7 + 3 + iVar5) = (char)iVar8;
            *param_3 = iVar8 + uVar7;
            return 0;
          }
          uVar9 = (uint)CONCAT11(*(undefined1 *)(uVar7 + iVar5),*(undefined1 *)(uVar7 + 1 + iVar5));
          local_8 = uVar7;
        } while (uVar9 != 0);
      }
    }
  }
  else {
    iVar5 = FUN_004768b0(param_1);
    if (iVar5 != 0) {
      return iVar5;
    }
    uVar4 = (CONCAT11(*(undefined1 *)(iVar6 + 5),*(undefined1 *)(iVar6 + 6)) - 1 & 0xffff) + 1;
  }
  if ((int)uVar4 < (int)(uVar1 + 2 + param_2)) {
    iVar5 = FUN_004768b0(param_1);
    if (iVar5 != 0) {
      return iVar5;
    }
    uVar4 = (CONCAT11(*(undefined1 *)(iVar6 + 5),*(undefined1 *)(iVar6 + 6)) - 1 & 0xffff) + 1;
  }
  iVar5 = uVar4 - param_2;
  *(char *)(iVar6 + 5) = (char)((uint)iVar5 >> 8);
  *(char *)(iVar6 + 6) = (char)iVar5;
  *param_3 = iVar5;
  return 0;
}


/* FUN_0046c6a0 @ 0046c6a0  kind=lib  attributed-by=lib-island  size=30 */

void __cdecl FUN_0046c6a0(int param_1)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_1 + 0x50) == 0) {
    puVar1 = FUN_004868a0(*(int *)(param_1 + 0x20));
    *(undefined4 **)(param_1 + 0x50) = puVar1;
  }
  return;
}


/* FUN_0046ca90 @ 0046ca90  kind=lib  attributed-by=lib-island  size=388 */

void __cdecl FUN_0046ca90(int *param_1,int param_2)

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
  FUN_00493400(param_1,param_2);
  piVar4[0x55] = piVar4[0x55] | 1 << ((byte)param_2 & 0x1f);
  iVar5 = param_1[0x12];
  param_1[0x12] = iVar5 + 3;
  FUN_00483950(param_1,param_2,iVar5,0);
  iVar2 = param_1[0x13];
  for (puVar3 = *(undefined4 **)(iVar1 + 0x10); puVar3 != (undefined4 *)0x0;
      puVar3 = (undefined4 *)*puVar3) {
    FUN_0046cc20(param_1,(int *)puVar3[2],(undefined4 *)0x0,iVar5,iVar2 + 1);
  }
  piVar4 = (int *)param_1[2];
  if (piVar4 == (int *)0x0) {
    iVar1 = *param_1;
    piVar4 = FUN_00494b90(iVar1,0xc0);
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
    if ((iVar1 < piVar4[8]) || (iVar5 = FUN_0047de10(piVar4), iVar5 == 0)) {
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
  if ((iVar1 < piVar4[8]) || (iVar5 = FUN_0047de10(piVar4), iVar5 == 0)) {
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


/* FUN_0046cc20 @ 0046cc20  kind=lib  attributed-by=lib-island  size=4762 */

void __cdecl
FUN_0046cc20(int *param_1,int *param_2,undefined4 *param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  undefined4 *puVar16;
  int *piVar17;
  int iVar18;
  undefined4 *puVar19;
  int iVar20;
  int *piVar21;
  int iVar22;
  undefined4 *puVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  char *pcVar27;
  int iVar29;
  uint local_30;
  int local_20;
  uint local_1c;
  int local_8;
  char *pcVar28;
  
  iVar1 = param_5 + 2;
  iVar9 = param_5 + 4;
  iVar10 = param_5 + 5;
  piVar13 = (int *)param_1[2];
  iVar6 = *param_1;
  iVar11 = param_5 + 6;
  iVar12 = param_5 + 7;
  local_1c = 0xffffffff;
  if (piVar13 == (int *)0x0) {
    piVar13 = FUN_004af150(iVar6);
    param_1[2] = (int)piVar13;
    if (piVar13 == (int *)0x0) {
      return;
    }
    FUN_004ae760(piVar13,0x94);
  }
  if (((param_2 != (int *)0x0) && (param_2[8] != 0)) &&
     ((piVar17 = (int *)*param_2, *piVar17 != 0x696c7173 ||
      (((short)piVar17[1] != 0x6574 || (*(char *)((int)piVar17 + 6) != '_')))))) {
    iVar14 = FUN_004a7ba0(iVar6,param_2[0x10]);
    iVar15 = FUN_0048d4b0(param_1,0x1c,piVar17,0,
                          *(undefined4 *)(*(int *)(iVar6 + 0x10) + iVar14 * 0x10));
    if (iVar15 == 0) {
      FUN_004aab20(param_1,iVar14,param_2[8],'\0',*param_2);
      iVar15 = param_1[0x12];
      param_1[0x12] = iVar15 + 1;
      FUN_004ae8f0(piVar13,0x5e,0,param_5,0,(int *)*param_2,0);
      for (puVar7 = (undefined4 *)param_2[2]; puVar7 != (undefined4 *)0x0;
          puVar7 = (undefined4 *)puVar7[5]) {
        local_30 = 0;
        if ((param_3 == (undefined4 *)0x0) || (param_3 == puVar7)) {
          iVar29 = puVar7[9];
          puVar16 = FUN_00494b90(iVar6,iVar29 * 4);
          if (puVar16 != (undefined4 *)0x0) {
            piVar17 = FUN_0049dbf0(param_1,(int)puVar7);
            iVar24 = iVar12 + iVar29 * 2 + 1;
            if (param_1[0x13] < iVar24) {
              param_1[0x13] = iVar24;
            }
            FUN_004ae8f0(piVar13,0x27,iVar15,puVar7[10],iVar14,piVar17,0xfffffff0);
            FUN_004ae8f0(piVar13,0x5e,0,param_5 + 1,0,(int *)*puVar7,0);
            iVar24 = 0;
            if (-1 < iVar29) {
              do {
                FUN_004ae830(piVar13,7,0,iVar12 + iVar24);
                iVar24 = iVar24 + 1;
              } while (iVar24 <= iVar29);
            }
            iVar24 = 0;
            if (0 < iVar29) {
              do {
                iVar26 = piVar13[7];
                if ((iVar26 < piVar13[8]) || (iVar18 = FUN_0047de10(piVar13), iVar18 == 0)) {
                  piVar13[7] = piVar13[7] + 1;
                  puVar2 = (undefined2 *)(piVar13[1] + iVar26 * 0x14);
                  *puVar2 = 10;
                  *(undefined1 *)((int)puVar2 + 3) = 0;
                  *(undefined4 *)(puVar2 + 2) = 0;
                  *(int *)(puVar2 + 4) = iVar24 + iVar29 + param_5 + 8;
                  *(undefined4 *)(puVar2 + 6) = 0;
                  *(undefined4 *)(puVar2 + 8) = 0;
                }
                iVar24 = iVar24 + 1;
              } while (iVar24 < iVar29);
            }
            uVar25 = piVar13[9];
            piVar13[9] = uVar25 + 1;
            if ((uVar25 & uVar25 - 1) == 0) {
              puVar23 = (undefined4 *)piVar13[10];
              iVar24 = *piVar13;
              puVar19 = FUN_00494cf0(iVar24,puVar23,uVar25 * 8 + 4);
              if (puVar19 == (undefined4 *)0x0) {
                FUN_00494b00(iVar24,puVar23);
              }
              piVar13[10] = (int)puVar19;
            }
            if (piVar13[10] != 0) {
              *(undefined4 *)(piVar13[10] + uVar25 * 4) = 0xffffffff;
            }
            iVar26 = -1 - uVar25;
            iVar24 = piVar13[7];
            if ((iVar24 < piVar13[8]) || (iVar18 = FUN_0047de10(piVar13), iVar18 == 0)) {
              iVar18 = piVar13[1];
              piVar13[7] = piVar13[7] + 1;
              *(undefined2 *)(iVar18 + iVar24 * 0x14) = 0x48;
              *(undefined1 *)(iVar18 + 3 + iVar24 * 0x14) = 0;
              *(int *)(iVar18 + 4 + iVar24 * 0x14) = iVar15;
              *(int *)(iVar18 + 8 + iVar24 * 0x14) = iVar26;
              *(undefined4 *)(iVar18 + 0xc + iVar24 * 0x14) = 0;
              *(undefined4 *)(iVar18 + 0x10 + iVar24 * 0x14) = 0;
            }
            iVar24 = piVar13[7];
            if ((iVar24 < piVar13[8]) || (iVar18 = FUN_0047de10(piVar13), iVar18 == 0)) {
              iVar18 = piVar13[1];
              piVar13[7] = piVar13[7] + 1;
              *(undefined2 *)(iVar18 + iVar24 * 0x14) = 0x14;
              *(undefined1 *)(iVar18 + 3 + iVar24 * 0x14) = 0;
              *(int *)(iVar18 + 4 + iVar24 * 0x14) = iVar12;
              *(undefined4 *)(iVar18 + 8 + iVar24 * 0x14) = 1;
              *(undefined4 *)(iVar18 + 0xc + iVar24 * 0x14) = 0;
              *(undefined4 *)(iVar18 + 0x10 + iVar24 * 0x14) = 0;
            }
            local_8 = 0;
            if (0 < iVar29) {
              do {
                iVar18 = piVar13[7];
                if ((iVar18 < piVar13[8]) || (iVar20 = FUN_0047de10(piVar13), iVar20 == 0)) {
                  iVar20 = piVar13[1];
                  piVar13[7] = piVar13[7] + 1;
                  *(int *)(iVar20 + 4 + iVar18 * 0x14) = iVar15;
                  *(undefined2 *)(iVar20 + iVar18 * 0x14) = 0x1d;
                  *(undefined1 *)(iVar20 + 3 + iVar18 * 0x14) = 0;
                  *(int *)(iVar20 + 8 + iVar18 * 0x14) = local_8;
                  *(int *)(iVar20 + 0xc + iVar18 * 0x14) = param_5 + 3;
                  *(undefined4 *)(iVar20 + 0x10 + iVar18 * 0x14) = 0;
                }
                if (local_8 == 0) {
                  local_30 = piVar13[7];
                  if (((int)local_30 < piVar13[8]) || (iVar18 = FUN_0047de10(piVar13), iVar18 == 0))
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
                bVar4 = *(byte *)(iVar18 + 0x81);
                pbVar8 = *(byte **)(local_8 * 4 + puVar7[8]);
                bVar5 = *(byte *)(*(int *)(*(int *)(iVar18 + 0x10) + 0xc) + 0x4d);
                if (pbVar8 == (byte *)0x0) {
                  piVar17 = *(int **)(iVar18 + 8);
                }
                else {
                  piVar17 = FUN_004799f0(iVar18,pbVar8,(uint)bVar4);
                }
                piVar21 = (int *)0x0;
                if (piVar17 != (int *)0x0) {
                  piVar21 = piVar17 + (uint)bVar5 * 5 + -5;
                }
                if ((bVar4 == 0) && ((piVar21 == (int *)0x0 || (piVar21[3] == 0)))) {
                  piVar21 = FUN_0049c970(param_1,bVar5,piVar21,pbVar8);
                }
                local_20 = piVar13[7];
                if ((local_20 < piVar13[8]) || (iVar18 = FUN_0047de10(piVar13), iVar18 == 0)) {
                  piVar13[7] = piVar13[7] + 1;
                  puVar2 = (undefined2 *)(piVar13[1] + local_20 * 0x14);
                  *(int *)(puVar2 + 2) = param_5 + 3;
                  *puVar2 = 0x4b;
                  *(undefined1 *)((int)puVar2 + 3) = 0;
                  *(undefined4 *)(puVar2 + 4) = 0;
                  *(int *)(puVar2 + 6) = local_8 + iVar29 + param_5 + 8;
                  *(undefined4 *)(puVar2 + 8) = 0;
                }
                else {
                  local_20 = 1;
                }
                iVar18 = piVar13[1];
                iVar20 = *piVar13;
                if ((iVar18 == 0) || (*(char *)(iVar20 + 0x38) != '\0')) {
                  FUN_0047bc80(iVar20,0xfffffffc,piVar21);
                }
                else {
                  iVar22 = local_20;
                  if (local_20 < 0) {
                    iVar22 = piVar13[7] + -1;
                  }
                  iVar3 = iVar18 + iVar22 * 0x14;
                  FUN_0047bc80(iVar20,(int)*(char *)(iVar3 + 1),
                               *(int **)(iVar18 + 0x10 + iVar22 * 0x14));
                  *(undefined4 *)(iVar3 + 0x10) = 0;
                  if (piVar21 == (int *)0x0) {
                    *(undefined4 *)(iVar3 + 0x10) = 0;
                    *(undefined1 *)(iVar3 + 1) = 0;
                  }
                  else {
                    *(int **)(iVar3 + 0x10) = piVar21;
                    *(undefined1 *)(iVar3 + 1) = 0xfc;
                  }
                }
                puVar16[local_8] = local_20;
                if (piVar13[1] != 0) {
                  *(undefined1 *)(piVar13[1] + -0x11 + piVar13[7] * 0x14) = 0x80;
                }
                local_8 = local_8 + 1;
              } while (local_8 < iVar29);
            }
            iVar18 = piVar13[7];
            if ((iVar18 < piVar13[8]) || (iVar20 = FUN_0047de10(piVar13), iVar20 == 0)) {
              iVar20 = piVar13[1];
              piVar13[7] = piVar13[7] + 1;
              *(undefined2 *)(iVar20 + iVar18 * 0x14) = 1;
              *(undefined1 *)(iVar20 + 3 + iVar18 * 0x14) = 0;
              *(undefined4 *)(iVar20 + 4 + iVar18 * 0x14) = 0;
              *(int *)(iVar20 + 8 + iVar18 * 0x14) = iVar26;
              *(undefined4 *)(iVar20 + 0xc + iVar18 * 0x14) = 0;
              *(undefined4 *)(iVar20 + 0x10 + iVar18 * 0x14) = 0;
            }
            local_8 = 0;
            if (0 < iVar29) {
              do {
                uVar25 = puVar16[local_8];
                if ((-1 < (int)uVar25) && (uVar25 < (uint)piVar13[7])) {
                  *(int *)(piVar13[1] + 8 + uVar25 * 0x14) = piVar13[7];
                }
                if (((local_8 == 0) && (-1 < (int)local_30)) && (local_30 < (uint)piVar13[7])) {
                  *(int *)(piVar13[1] + 8 + local_30 * 0x14) = piVar13[7];
                }
                iVar18 = piVar13[7];
                iVar20 = piVar13[8];
                if (iVar18 < iVar20) {
LAB_0046d223:
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
                  if (iVar20 == 0) {
                    iVar20 = 0x33;
                  }
                  else {
                    iVar20 = iVar20 * 2;
                  }
                  puVar23 = FUN_00494cf0(*piVar13,(undefined4 *)piVar13[1],iVar20 * 0x14);
                  if (puVar23 != (undefined4 *)0x0) {
                    iVar20 = *piVar13;
                    if (((iVar20 == 0) || (puVar23 < *(undefined4 **)(iVar20 + 0x104))) ||
                       (*(undefined4 **)(iVar20 + 0x108) <= puVar23)) {
                      uVar25 = (*DAT_00582af0._4_4_)(puVar23);
                    }
                    else {
                      uVar25 = (uint)*(ushort *)(iVar20 + 0xe8);
                    }
                    piVar13[8] = uVar25 / 0x14;
                    piVar13[1] = (int)puVar23;
                    goto LAB_0046d223;
                  }
                }
                iVar18 = piVar13[7];
                iVar20 = piVar13[8];
                if (iVar18 < iVar20) {
LAB_0046d2c3:
                  piVar13[7] = piVar13[7] + 1;
                  puVar2 = (undefined2 *)(piVar13[1] + iVar18 * 0x14);
                  *(int *)(puVar2 + 2) = iVar15;
                  *puVar2 = 0x1d;
                  *(undefined1 *)((int)puVar2 + 3) = 0;
                  *(int *)(puVar2 + 4) = local_8;
                  *(int *)(puVar2 + 6) = iVar29 + local_8 + param_5 + 8;
                  *(undefined4 *)(puVar2 + 8) = 0;
                }
                else {
                  if (iVar20 == 0) {
                    iVar20 = 0x33;
                  }
                  else {
                    iVar20 = iVar20 * 2;
                  }
                  puVar23 = FUN_00494cf0(*piVar13,(undefined4 *)piVar13[1],iVar20 * 0x14);
                  if (puVar23 != (undefined4 *)0x0) {
                    iVar20 = *piVar13;
                    if (((iVar20 == 0) || (puVar23 < *(undefined4 **)(iVar20 + 0x104))) ||
                       (*(undefined4 **)(iVar20 + 0x108) <= puVar23)) {
                      uVar25 = (*DAT_00582af0._4_4_)(puVar23);
                    }
                    else {
                      uVar25 = (uint)*(ushort *)(iVar20 + 0xe8);
                    }
                    piVar13[8] = uVar25 / 0x14;
                    piVar13[1] = (int)puVar23;
                    goto LAB_0046d2c3;
                  }
                }
                local_8 = local_8 + 1;
              } while (local_8 < iVar29);
            }
            FUN_00494b00(iVar6,puVar16);
            if (piVar13[10] != 0) {
              *(int *)(piVar13[10] - (iVar26 * 4 + 4)) = piVar13[7];
            }
            iVar26 = piVar13[7];
            iVar18 = piVar13[8];
            if (iVar26 < iVar18) {
LAB_0046d3a2:
              iVar18 = piVar13[1];
              piVar13[7] = piVar13[7] + 1;
              *(int *)(iVar18 + 4 + iVar26 * 0x14) = iVar15;
              *(undefined2 *)(iVar18 + iVar26 * 0x14) = 0x5f;
              *(undefined1 *)(iVar18 + 3 + iVar26 * 0x14) = 0;
              *(int *)(iVar18 + 8 + iVar26 * 0x14) = iVar24;
              *(undefined4 *)(iVar18 + 0xc + iVar26 * 0x14) = 0;
              *(undefined4 *)(iVar18 + 0x10 + iVar26 * 0x14) = 0;
            }
            else {
              if (iVar18 == 0) {
                iVar18 = 0x33;
              }
              else {
                iVar18 = iVar18 * 2;
              }
              puVar16 = FUN_00494cf0(*piVar13,(undefined4 *)piVar13[1],iVar18 * 0x14);
              if (puVar16 != (undefined4 *)0x0) {
                iVar18 = *piVar13;
                if (((iVar18 == 0) || (puVar16 < *(undefined4 **)(iVar18 + 0x104))) ||
                   (*(undefined4 **)(iVar18 + 0x108) <= puVar16)) {
                  uVar25 = (*DAT_00582af0._4_4_)(puVar16);
                }
                else {
                  uVar25 = (uint)*(ushort *)(iVar18 + 0xe8);
                }
                piVar13[8] = uVar25 / 0x14;
                piVar13[1] = (int)puVar16;
                goto LAB_0046d3a2;
              }
            }
            piVar17 = piVar13 + 1;
            iVar24 = piVar13[7];
            iVar26 = piVar13[8];
            if (iVar24 < iVar26) {
LAB_0046d44c:
              iVar26 = piVar13[1];
              piVar13[7] = piVar13[7] + 1;
              *(undefined2 *)(iVar26 + iVar24 * 0x14) = 0x2d;
              *(undefined1 *)(iVar26 + 3 + iVar24 * 0x14) = 0;
              *(int *)(iVar26 + 4 + iVar24 * 0x14) = iVar15;
              *(undefined4 *)(iVar26 + 8 + iVar24 * 0x14) = 0;
              *(undefined4 *)(iVar26 + 0xc + iVar24 * 0x14) = 0;
              *(undefined4 *)(iVar26 + 0x10 + iVar24 * 0x14) = 0;
            }
            else {
              if (iVar26 == 0) {
                iVar26 = 0x33;
              }
              else {
                iVar26 = iVar26 * 2;
              }
              puVar16 = FUN_00494cf0(*piVar13,(undefined4 *)*piVar17,iVar26 * 0x14);
              if (puVar16 != (undefined4 *)0x0) {
                iVar26 = *piVar13;
                if (((iVar26 == 0) || (puVar16 < *(undefined4 **)(iVar26 + 0x104))) ||
                   (*(undefined4 **)(iVar26 + 0x108) <= puVar16)) {
                  uVar25 = (*DAT_00582af0._4_4_)(puVar16);
                }
                else {
                  uVar25 = (uint)*(ushort *)(iVar26 + 0xe8);
                }
                piVar13[8] = uVar25 / 0x14;
                piVar13[1] = (int)puVar16;
                goto LAB_0046d44c;
              }
            }
            iVar24 = piVar13[7];
            iVar26 = piVar13[8];
            if (iVar24 < iVar26) {
LAB_0046d4f0:
              iVar26 = piVar13[1];
              piVar13[7] = piVar13[7] + 1;
              *(undefined2 *)(iVar26 + iVar24 * 0x14) = 0xf;
              *(undefined1 *)(iVar26 + 3 + iVar24 * 0x14) = 0;
              *(int *)(iVar26 + 4 + iVar24 * 0x14) = iVar12;
              *(int *)(iVar26 + 8 + iVar24 * 0x14) = iVar1;
              *(undefined4 *)(iVar26 + 0xc + iVar24 * 0x14) = 0;
              *(undefined4 *)(iVar26 + 0x10 + iVar24 * 0x14) = 0;
            }
            else {
              if (iVar26 == 0) {
                iVar26 = 0x33;
              }
              else {
                iVar26 = iVar26 * 2;
              }
              puVar16 = FUN_00494cf0(*piVar13,(undefined4 *)piVar13[1],iVar26 * 0x14);
              if (puVar16 != (undefined4 *)0x0) {
                iVar26 = *piVar13;
                if (((iVar26 == 0) || (puVar16 < *(undefined4 **)(iVar26 + 0x104))) ||
                   (*(undefined4 **)(iVar26 + 0x108) <= puVar16)) {
                  uVar25 = (*DAT_00582af0._4_4_)(puVar16);
                }
                else {
                  uVar25 = (uint)*(ushort *)(iVar26 + 0xe8);
                }
                piVar13[8] = uVar25 / 0x14;
                piVar13[1] = (int)puVar16;
                goto LAB_0046d4f0;
              }
            }
            if ((int)local_1c < 0) {
              local_1c = piVar13[7];
              iVar24 = piVar13[8];
              if (iVar24 <= (int)local_1c) {
                if (iVar24 == 0) {
                  iVar24 = 0x33;
                }
                else {
                  iVar24 = iVar24 * 2;
                }
                puVar16 = FUN_00494cf0(*piVar13,(undefined4 *)piVar13[1],iVar24 * 0x14);
                if (puVar16 == (undefined4 *)0x0) {
                  local_1c = 1;
                  goto LAB_0046d5d9;
                }
                iVar24 = *piVar13;
                if (((iVar24 == 0) || (puVar16 < *(undefined4 **)(iVar24 + 0x104))) ||
                   (*(undefined4 **)(iVar24 + 0x108) <= puVar16)) {
                  uVar25 = (*DAT_00582af0._4_4_)(puVar16);
                }
                else {
                  uVar25 = (uint)*(ushort *)(iVar24 + 0xe8);
                }
                piVar13[8] = uVar25 / 0x14;
                piVar13[1] = (int)puVar16;
              }
              iVar24 = piVar13[1];
              piVar13[7] = piVar13[7] + 1;
              *(undefined2 *)(iVar24 + local_1c * 0x14) = 0x1c;
              *(undefined1 *)(iVar24 + 3 + local_1c * 0x14) = 0;
              *(int *)(iVar24 + 4 + local_1c * 0x14) = iVar12;
              *(undefined4 *)(iVar24 + 8 + local_1c * 0x14) = 0;
              *(undefined4 *)(iVar24 + 0xc + local_1c * 0x14) = 0;
              *(undefined4 *)(iVar24 + 0x10 + local_1c * 0x14) = 0;
            }
LAB_0046d5d9:
            local_20 = 0;
            if (0 < iVar29) {
              do {
                iVar24 = piVar13[7];
                iVar26 = piVar13[8];
                if (iVar24 < iVar26) {
LAB_0046d66d:
                  iVar26 = piVar13[1];
                  piVar13[7] = piVar13[7] + 1;
                  *(undefined2 *)(iVar26 + iVar24 * 0x14) = 0x5e;
                  *(undefined1 *)(iVar26 + 3 + iVar24 * 0x14) = 0;
                  *(undefined4 *)(iVar26 + 4 + iVar24 * 0x14) = 0;
                  *(int *)(iVar26 + 8 + iVar24 * 0x14) = iVar10;
                  *(undefined4 *)(iVar26 + 0xc + iVar24 * 0x14) = 0;
                  *(undefined4 *)(iVar26 + 0x10 + iVar24 * 0x14) = 0;
                }
                else {
                  if (iVar26 == 0) {
                    iVar26 = 0x33;
                  }
                  else {
                    iVar26 = iVar26 * 2;
                  }
                  puVar16 = FUN_00494cf0(*piVar13,(undefined4 *)piVar13[1],iVar26 * 0x14);
                  if (puVar16 != (undefined4 *)0x0) {
                    iVar26 = *piVar13;
                    if (((iVar26 == 0) || (puVar16 < *(undefined4 **)(iVar26 + 0x104))) ||
                       (*(undefined4 **)(iVar26 + 0x108) <= puVar16)) {
                      uVar25 = (*DAT_00582af0._4_4_)(puVar16);
                    }
                    else {
                      uVar25 = (uint)*(ushort *)(iVar26 + 0xe8);
                    }
                    piVar13[8] = uVar25 / 0x14;
                    piVar13[1] = (int)puVar16;
                    goto LAB_0046d66d;
                  }
                  iVar24 = 1;
                }
                iVar26 = piVar13[1];
                iVar18 = *piVar13;
                if ((iVar26 == 0) || (*(char *)(iVar18 + 0x38) != '\0')) {
                  FUN_0047bc80(iVar18,0,&DAT_0056cb88);
                }
                else {
                  if (iVar24 < 0) {
                    iVar24 = piVar13[7] + -1;
                  }
                  iVar20 = iVar26 + iVar24 * 0x14;
                  FUN_0047bc80(iVar18,(int)*(char *)(iVar20 + 1),
                               *(int **)(iVar26 + 0x10 + iVar24 * 0x14));
                  *(undefined4 *)(iVar20 + 0x10) = 0;
                  pcVar27 = " ";
                  do {
                    pcVar28 = pcVar27;
                    pcVar27 = pcVar28 + 1;
                  } while (*pcVar27 != '\0');
                  uVar25 = (uint)(pcVar28 + -0x56cb87) & 0x3fffffff;
                  puVar16 = FUN_00494b90(*piVar13,uVar25 + 1);
                  if (puVar16 != (undefined4 *)0x0) {
                    memcpy(puVar16,&DAT_0056cb88,uVar25);
                    *(undefined1 *)((int)puVar16 + uVar25) = 0;
                  }
                  *(undefined4 **)(iVar20 + 0x10) = puVar16;
                  *(undefined1 *)(iVar20 + 1) = 0xff;
                }
                iVar24 = piVar13[7];
                iVar26 = piVar13[8];
                if (iVar24 < iVar26) {
LAB_0046d7bb:
                  iVar26 = *piVar17;
                  piVar13[7] = piVar13[7] + 1;
                  *(int *)(iVar26 + 4 + iVar24 * 0x14) = iVar10;
                  *(undefined2 *)(iVar26 + iVar24 * 0x14) = 0x5b;
                  *(undefined1 *)(iVar26 + 3 + iVar24 * 0x14) = 0;
                  *(int *)(iVar26 + 8 + iVar24 * 0x14) = iVar1;
                  *(int *)(iVar26 + 0xc + iVar24 * 0x14) = iVar1;
                  *(undefined4 *)(iVar26 + 0x10 + iVar24 * 0x14) = 0;
                }
                else {
                  if (iVar26 == 0) {
                    iVar26 = 0x33;
                  }
                  else {
                    iVar26 = iVar26 * 2;
                  }
                  puVar16 = FUN_00494cf0(*piVar13,(undefined4 *)*piVar17,iVar26 * 0x14);
                  if (puVar16 != (undefined4 *)0x0) {
                    iVar26 = *piVar13;
                    if (((iVar26 == 0) || (puVar16 < *(undefined4 **)(iVar26 + 0x104))) ||
                       (*(undefined4 **)(iVar26 + 0x108) <= puVar16)) {
                      uVar25 = (*DAT_00582af0._4_4_)(puVar16);
                    }
                    else {
                      uVar25 = (uint)*(ushort *)(iVar26 + 0xe8);
                    }
                    piVar13[8] = uVar25 / 0x14;
                    *piVar17 = (int)puVar16;
                    goto LAB_0046d7bb;
                  }
                }
                iVar24 = piVar13[7];
                iVar26 = piVar13[8];
                if (iVar24 < iVar26) {
LAB_0046d85a:
                  piVar13[7] = piVar13[7] + 1;
                  puVar2 = (undefined2 *)(*piVar17 + iVar24 * 0x14);
                  *(int *)(puVar2 + 4) = local_20 + 1 + iVar12;
                  *puVar2 = 0x56;
                  *(undefined1 *)((int)puVar2 + 3) = 0;
                  *(int *)(puVar2 + 2) = iVar12;
                  *(int *)(puVar2 + 6) = iVar10;
                  *(undefined4 *)(puVar2 + 8) = 0;
                }
                else {
                  if (iVar26 == 0) {
                    iVar26 = 0x33;
                  }
                  else {
                    iVar26 = iVar26 * 2;
                  }
                  puVar16 = FUN_00494cf0(*piVar13,(undefined4 *)*piVar17,iVar26 * 0x14);
                  if (puVar16 != (undefined4 *)0x0) {
                    iVar26 = *piVar13;
                    if (((iVar26 == 0) || (puVar16 < *(undefined4 **)(iVar26 + 0x104))) ||
                       (*(undefined4 **)(iVar26 + 0x108) <= puVar16)) {
                      uVar25 = (*DAT_00582af0._4_4_)(puVar16);
                    }
                    else {
                      uVar25 = (uint)*(ushort *)(iVar26 + 0xe8);
                    }
                    piVar13[8] = uVar25 / 0x14;
                    *piVar17 = (int)puVar16;
                    goto LAB_0046d85a;
                  }
                }
                iVar24 = piVar13[7];
                iVar26 = piVar13[8];
                if (iVar24 < iVar26) {
LAB_0046d8fc:
                  iVar26 = *piVar17;
                  piVar13[7] = piVar13[7] + 1;
                  *(undefined2 *)(iVar26 + iVar24 * 0x14) = 0x14;
                  *(undefined1 *)(iVar26 + 3 + iVar24 * 0x14) = 0;
                  *(int *)(iVar26 + 4 + iVar24 * 0x14) = iVar10;
                  *(undefined4 *)(iVar26 + 8 + iVar24 * 0x14) = 0xffffffff;
                  *(undefined4 *)(iVar26 + 0xc + iVar24 * 0x14) = 0;
                  *(undefined4 *)(iVar26 + 0x10 + iVar24 * 0x14) = 0;
                }
                else {
                  if (iVar26 == 0) {
                    iVar26 = 0x33;
                  }
                  else {
                    iVar26 = iVar26 * 2;
                  }
                  puVar16 = FUN_00494cf0(*piVar13,(undefined4 *)*piVar17,iVar26 * 0x14);
                  if (puVar16 != (undefined4 *)0x0) {
                    iVar26 = *piVar13;
                    if (((iVar26 == 0) || (puVar16 < *(undefined4 **)(iVar26 + 0x104))) ||
                       (*(undefined4 **)(iVar26 + 0x108) <= puVar16)) {
                      uVar25 = (*DAT_00582af0._4_4_)(puVar16);
                    }
                    else {
                      uVar25 = (uint)*(ushort *)(iVar26 + 0xe8);
                    }
                    piVar13[8] = uVar25 / 0x14;
                    *piVar17 = (int)puVar16;
                    goto LAB_0046d8fc;
                  }
                }
                iVar24 = piVar13[7];
                iVar26 = piVar13[8];
                if (iVar24 < iVar26) {
LAB_0046d9a0:
                  piVar13[7] = piVar13[7] + 1;
                  puVar2 = (undefined2 *)(*piVar17 + iVar24 * 0x14);
                  *puVar2 = 0x59;
                  *(int *)(puVar2 + 2) = local_20 + 1 + iVar12;
                  *(undefined1 *)((int)puVar2 + 3) = 0;
                  *(int *)(puVar2 + 4) = iVar10;
                  *(int *)(puVar2 + 6) = iVar10;
                  *(undefined4 *)(puVar2 + 8) = 0;
                }
                else {
                  if (iVar26 == 0) {
                    iVar26 = 0x33;
                  }
                  else {
                    iVar26 = iVar26 * 2;
                  }
                  puVar16 = FUN_00494cf0(*piVar13,(undefined4 *)*piVar17,iVar26 * 0x14);
                  if (puVar16 != (undefined4 *)0x0) {
                    iVar26 = *piVar13;
                    if (((iVar26 == 0) || (puVar16 < *(undefined4 **)(iVar26 + 0x104))) ||
                       (*(undefined4 **)(iVar26 + 0x108) <= puVar16)) {
                      uVar25 = (*DAT_00582af0._4_4_)(puVar16);
                    }
                    else {
                      uVar25 = (uint)*(ushort *)(iVar26 + 0xe8);
                    }
                    piVar13[8] = uVar25 / 0x14;
                    *piVar17 = (int)puVar16;
                    goto LAB_0046d9a0;
                  }
                }
                iVar24 = piVar13[7];
                iVar26 = piVar13[8];
                if (iVar24 < iVar26) {
LAB_0046da40:
                  iVar26 = *piVar17;
                  piVar13[7] = piVar13[7] + 1;
                  *(undefined2 *)(iVar26 + iVar24 * 0x14) = 0x90;
                  *(undefined1 *)(iVar26 + 3 + iVar24 * 0x14) = 0;
                  *(int *)(iVar26 + 4 + iVar24 * 0x14) = iVar10;
                  *(undefined4 *)(iVar26 + 8 + iVar24 * 0x14) = 0;
                  *(undefined4 *)(iVar26 + 0xc + iVar24 * 0x14) = 0;
                  *(undefined4 *)(iVar26 + 0x10 + iVar24 * 0x14) = 0;
                }
                else {
                  if (iVar26 == 0) {
                    iVar26 = 0x33;
                  }
                  else {
                    iVar26 = iVar26 * 2;
                  }
                  puVar16 = FUN_00494cf0(*piVar13,(undefined4 *)*piVar17,iVar26 * 0x14);
                  if (puVar16 != (undefined4 *)0x0) {
                    iVar26 = *piVar13;
                    if (((iVar26 == 0) || (puVar16 < *(undefined4 **)(iVar26 + 0x104))) ||
                       (*(undefined4 **)(iVar26 + 0x108) <= puVar16)) {
                      uVar25 = (*DAT_00582af0._4_4_)(puVar16);
                    }
                    else {
                      uVar25 = (uint)*(ushort *)(iVar26 + 0xe8);
                    }
                    piVar13[8] = uVar25 / 0x14;
                    *piVar17 = (int)puVar16;
                    goto LAB_0046da40;
                  }
                }
                iVar24 = piVar13[7];
                iVar26 = piVar13[8];
                if (iVar24 < iVar26) {
LAB_0046dae4:
                  iVar26 = *piVar17;
                  piVar13[7] = piVar13[7] + 1;
                  *(int *)(iVar26 + 4 + iVar24 * 0x14) = iVar10;
                  *(undefined2 *)(iVar26 + iVar24 * 0x14) = 0x5b;
                  *(undefined1 *)(iVar26 + 3 + iVar24 * 0x14) = 0;
                  *(int *)(iVar26 + 8 + iVar24 * 0x14) = iVar1;
                  *(int *)(iVar26 + 0xc + iVar24 * 0x14) = iVar1;
                  *(undefined4 *)(iVar26 + 0x10 + iVar24 * 0x14) = 0;
                }
                else {
                  if (iVar26 == 0) {
                    iVar26 = 0x33;
                  }
                  else {
                    iVar26 = iVar26 * 2;
                  }
                  puVar16 = FUN_00494cf0(*piVar13,(undefined4 *)*piVar17,iVar26 * 0x14);
                  if (puVar16 != (undefined4 *)0x0) {
                    iVar26 = *piVar13;
                    if (((iVar26 == 0) || (puVar16 < *(undefined4 **)(iVar26 + 0x104))) ||
                       (*(undefined4 **)(iVar26 + 0x108) <= puVar16)) {
                      uVar25 = (*DAT_00582af0._4_4_)(puVar16);
                    }
                    else {
                      uVar25 = (uint)*(ushort *)(iVar26 + 0xe8);
                    }
                    piVar13[8] = uVar25 / 0x14;
                    *piVar17 = (int)puVar16;
                    goto LAB_0046dae4;
                  }
                }
                local_20 = local_20 + 1;
              } while (local_20 < iVar29);
            }
            iVar29 = piVar13[7];
            iVar24 = piVar13[8];
            if (iVar29 < iVar24) {
LAB_0046dba0:
              iVar24 = *piVar17;
              piVar13[7] = piVar13[7] + 1;
              *(int *)(iVar24 + 4 + iVar29 * 0x14) = param_5;
              *(undefined2 *)(iVar24 + iVar29 * 0x14) = 0x1f;
              *(undefined1 *)(iVar24 + 3 + iVar29 * 0x14) = 0;
              *(undefined4 *)(iVar24 + 8 + iVar29 * 0x14) = 3;
              *(int *)(iVar24 + 0xc + iVar29 * 0x14) = iVar9;
              *(undefined4 *)(iVar24 + 0x10 + iVar29 * 0x14) = 0;
            }
            else {
              if (iVar24 == 0) {
                iVar24 = 0x33;
              }
              else {
                iVar24 = iVar24 * 2;
              }
              puVar16 = FUN_00494cf0(*piVar13,(undefined4 *)*piVar17,iVar24 * 0x14);
              if (puVar16 != (undefined4 *)0x0) {
                iVar24 = *piVar13;
                if (((iVar24 == 0) || (puVar16 < *(undefined4 **)(iVar24 + 0x104))) ||
                   (*(undefined4 **)(iVar24 + 0x108) <= puVar16)) {
                  uVar25 = (*DAT_00582af0._4_4_)(puVar16);
                }
                else {
                  uVar25 = (uint)*(ushort *)(iVar24 + 0xe8);
                }
                piVar13[8] = uVar25 / 0x14;
                *piVar17 = (int)puVar16;
                goto LAB_0046dba0;
              }
              iVar29 = 1;
            }
            iVar24 = *piVar13;
            iVar26 = *piVar17;
            if ((iVar26 == 0) || (*(char *)(iVar24 + 0x38) != '\0')) {
              FUN_0047bc80(iVar24,0,(int *)&DAT_0056f2a0);
            }
            else {
              if (iVar29 < 0) {
                iVar29 = piVar13[7] + -1;
              }
              iVar18 = iVar26 + iVar29 * 0x14;
              FUN_0047bc80(iVar24,(int)*(char *)(iVar18 + 1),
                           *(int **)(iVar26 + 0x10 + iVar29 * 0x14));
              *(undefined4 *)(iVar18 + 0x10) = 0;
              pcVar27 = "aaa";
              do {
                pcVar28 = pcVar27;
                pcVar27 = pcVar28 + 1;
              } while (*pcVar27 != '\0');
              uVar25 = (uint)(pcVar28 + -0x56f29f) & 0x3fffffff;
              puVar16 = FUN_00494b90(*piVar13,uVar25 + 1);
              if (puVar16 != (undefined4 *)0x0) {
                memcpy(puVar16,&DAT_0056f2a0,uVar25);
                *(undefined1 *)((int)puVar16 + uVar25) = 0;
              }
              *(undefined4 **)(iVar18 + 0x10) = puVar16;
              *(undefined1 *)(iVar18 + 1) = 0xff;
            }
            iVar29 = piVar13[7];
            iVar24 = piVar13[8];
            if (iVar29 < iVar24) {
LAB_0046dcdb:
              iVar24 = *piVar17;
              piVar13[7] = piVar13[7] + 1;
              *(undefined4 *)(iVar24 + 4 + iVar29 * 0x14) = param_4;
              *(undefined2 *)(iVar24 + iVar29 * 0x14) = 0x38;
              *(undefined1 *)(iVar24 + 3 + iVar29 * 0x14) = 0;
              *(int *)(iVar24 + 8 + iVar29 * 0x14) = iVar11;
              *(undefined4 *)(iVar24 + 0xc + iVar29 * 0x14) = 0;
              *(undefined4 *)(iVar24 + 0x10 + iVar29 * 0x14) = 0;
            }
            else {
              if (iVar24 == 0) {
                iVar24 = 0x33;
              }
              else {
                iVar24 = iVar24 * 2;
              }
              puVar16 = FUN_00494cf0(*piVar13,(undefined4 *)*piVar17,iVar24 * 0x14);
              if (puVar16 != (undefined4 *)0x0) {
                iVar24 = *piVar13;
                if (((iVar24 == 0) || (puVar16 < *(undefined4 **)(iVar24 + 0x104))) ||
                   (*(undefined4 **)(iVar24 + 0x108) <= puVar16)) {
                  uVar25 = (*DAT_00582af0._4_4_)(puVar16);
                }
                else {
                  uVar25 = (uint)*(ushort *)(iVar24 + 0xe8);
                }
                piVar13[8] = uVar25 / 0x14;
                *piVar17 = (int)puVar16;
                goto LAB_0046dcdb;
              }
            }
            iVar29 = piVar13[7];
            iVar24 = piVar13[8];
            if (iVar29 < iVar24) {
LAB_0046dd7e:
              iVar24 = *piVar17;
              piVar13[7] = piVar13[7] + 1;
              *(undefined4 *)(iVar24 + 4 + iVar29 * 0x14) = param_4;
              *(int *)(iVar24 + 8 + iVar29 * 0x14) = iVar9;
              *(undefined2 *)(iVar24 + iVar29 * 0x14) = 0x39;
              *(undefined1 *)(iVar24 + 3 + iVar29 * 0x14) = 0;
              *(int *)(iVar24 + 0xc + iVar29 * 0x14) = iVar11;
              *(undefined4 *)(iVar24 + 0x10 + iVar29 * 0x14) = 0;
            }
            else {
              if (iVar24 == 0) {
                iVar24 = 0x33;
              }
              else {
                iVar24 = iVar24 * 2;
              }
              puVar16 = FUN_00494cf0(*piVar13,(undefined4 *)*piVar17,iVar24 * 0x14);
              if (puVar16 != (undefined4 *)0x0) {
                iVar24 = *piVar13;
                if (((iVar24 == 0) || (puVar16 < *(undefined4 **)(iVar24 + 0x104))) ||
                   (*(undefined4 **)(iVar24 + 0x108) <= puVar16)) {
                  uVar25 = (*DAT_00582af0._4_4_)(puVar16);
                }
                else {
                  uVar25 = (uint)*(ushort *)(iVar24 + 0xe8);
                }
                piVar13[8] = uVar25 / 0x14;
                *piVar17 = (int)puVar16;
                goto LAB_0046dd7e;
              }
            }
            if (*piVar17 != 0) {
              *(undefined1 *)(*piVar17 + -0x11 + piVar13[7] * 0x14) = 8;
            }
          }
        }
      }
      if (param_2[2] == 0) {
        FUN_004ae890(piVar13,0x27,iVar15,param_2[8],iVar14);
        FUN_004ae830(piVar13,0x20,iVar15,iVar1);
        FUN_004ae7d0(piVar13,0x2d,iVar15);
        uVar25 = FUN_004ae7d0(piVar13,0x1c,iVar1);
      }
      else {
        if ((-1 < (int)local_1c) && (local_1c < (uint)piVar13[7])) {
          *(int *)(piVar13[1] + 8 + local_1c * 0x14) = piVar13[7];
        }
        uVar25 = FUN_004ae760(piVar13,1);
      }
      FUN_004ae830(piVar13,10,0,param_5 + 1);
      FUN_004ae8f0(piVar13,0x1f,param_5,3,iVar9,(int *)&DAT_0056f2a0,0);
      FUN_004ae830(piVar13,0x38,param_4,iVar11);
      FUN_004ae890(piVar13,0x39,param_4,iVar9,iVar11);
      if (piVar13[1] != 0) {
        *(undefined1 *)(piVar13[1] + -0x11 + piVar13[7] * 0x14) = 8;
      }
      if (param_1[0x13] < iVar9) {
        param_1[0x13] = iVar9;
      }
      if ((-1 < (int)uVar25) && (uVar25 < (uint)piVar13[7])) {
        *(int *)(piVar13[1] + 8 + uVar25 * 0x14) = piVar13[7];
      }
    }
  }
  return;
}


/* FUN_0046dec0 @ 0046dec0  kind=lib  attributed-by=lib-island  size=220 */

void __cdecl FUN_0046dec0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = -1000000;
  if (param_2[0x10] != 0) {
    iVar1 = *(int *)(*param_1 + 0x14);
    iVar3 = 0;
    if (0 < iVar1) {
      piVar2 = (int *)(*(int *)(*param_1 + 0x10) + 0xc);
      do {
        if (*piVar2 == param_2[0x10]) break;
        iVar3 = iVar3 + 1;
        piVar2 = piVar2 + 4;
      } while (iVar3 < iVar1);
    }
  }
  piVar2 = param_1;
  if ((int *)param_1[0x6c] != (int *)0x0) {
    piVar2 = (int *)param_1[0x6c];
  }
  FUN_00493400(param_1,iVar3);
  piVar2[0x55] = piVar2[0x55] | 1 << ((byte)iVar3 & 0x1f);
  iVar1 = param_1[0x12];
  param_1[0x12] = iVar1 + 3;
  piVar2 = param_2;
  if (param_3 != (int *)0x0) {
    piVar2 = param_3;
  }
  FUN_00483950(param_1,iVar3,iVar1,*piVar2);
  FUN_0046cc20(param_1,param_2,param_3,iVar1,param_1[0x13] + 1);
  piVar2 = (int *)param_1[2];
  if (piVar2 == (int *)0x0) {
    piVar2 = FUN_004af150(*param_1);
    param_1[2] = (int)piVar2;
    if (piVar2 == (int *)0x0) {
      return;
    }
    FUN_004ae760(piVar2,0x94);
  }
  FUN_004ae7d0(piVar2,0x6b,iVar3);
  return;
}


/* FUN_0046dfa0 @ 0046dfa0  kind=lib  attributed-by=lib-island  size=122 */

void __cdecl FUN_0046dfa0(int param_1)

{
  char cVar1;
  int iVar2;
  double local_14;
  uint local_c;
  undefined4 local_8;
  
  if (((*(ushort *)(param_1 + 0x1c) & 0xc) == 0) &&
     (cVar1 = *(char *)(param_1 + 0x1f), (*(ushort *)(param_1 + 0x1c) & 2) != 0)) {
    iVar2 = FUN_0048cc90(*(byte **)(param_1 + 4),&local_14,*(uint *)(param_1 + 0x18),cVar1);
    if (iVar2 != 0) {
      iVar2 = FUN_0048d300(*(byte **)(param_1 + 4),&local_c,*(int *)(param_1 + 0x18),cVar1);
      if (iVar2 == 0) {
        *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) | 4;
        *(uint *)(param_1 + 0x10) = local_c;
        *(undefined4 *)(param_1 + 0x14) = local_8;
        return;
      }
      *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) | 8;
      *(double *)(param_1 + 8) = local_14;
    }
  }
  return;
}


/* FUN_0046e020 @ 0046e020  kind=lib  attributed-by=lib-island  size=157 */

void __cdecl FUN_0046e020(int param_1,int param_2,int param_3,int param_4)

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


/* FUN_0046e0c0 @ 0046e0c0  kind=lib  attributed-by=lib-island  size=122 */

int __cdecl FUN_0046e0c0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = 0;
  if ((*(byte *)(param_3 + 0x2a) & 8) != 0) {
    piVar3 = param_1;
    if ((int *)param_1[0x6c] != (int *)0x0) {
      piVar3 = (int *)param_1[0x6c];
    }
    for (piVar2 = (int *)piVar3[0x6b]; piVar2 != (int *)0x0; piVar2 = (int *)*piVar2) {
      if (piVar2[1] == param_3) goto LAB_0046e133;
    }
    piVar2 = FUN_00494b90(*param_1,0x10);
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    *piVar2 = piVar3[0x6b];
    piVar3[0x6b] = (int)piVar2;
    piVar2[1] = param_3;
    piVar2[2] = param_2;
    piVar3[0x13] = piVar3[0x13] + 2;
    piVar2[3] = piVar3[0x13];
    piVar3[0x13] = piVar3[0x13] + 1;
LAB_0046e133:
    iVar1 = piVar2[3];
  }
  return iVar1;
}


/* FUN_0046e140 @ 0046e140  kind=lib  attributed-by=lib-island  size=32 */

void __cdecl FUN_0046e140(int param_1,int param_2,undefined4 param_3)

{
  if (0 < param_2) {
    FUN_004ae830(*(int **)(param_1 + 8),0x77,param_2,param_3);
  }
  return;
}


/* FUN_0046e160 @ 0046e160  kind=lib  attributed-by=lib-island  size=553 */

uint __cdecl FUN_0046e160(int *param_1)

{
  uint *puVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  uint local_c;
  
  local_c = 0;
  puVar1 = (uint *)*param_1;
  for (iVar2 = param_1[2]; iVar2 != 0; iVar2 = *(int *)(iVar2 + 8)) {
    FUN_00466dd0(*(int *)(iVar2 + 0x14));
    *(undefined4 *)(iVar2 + 0x14) = 0;
  }
  if (*(char *)((int)param_1 + 0x12) == '\0') {
    pcVar8 = (char *)param_1[0xb];
    if (pcVar8 < (char *)0x2) {
      pcVar5 = (char *)0x0;
    }
    else {
      uVar6 = (uint)param_1[9] / 5 + 1;
      iVar2 = ((uint)(pcVar8 + -2) / uVar6) * uVar6;
      pcVar5 = (char *)(iVar2 + 2);
      if (pcVar5 == (char *)(DAT_00582bb8 / (uint)param_1[8] + 1)) {
        pcVar5 = (char *)(iVar2 + 3);
      }
    }
    if ((pcVar5 == pcVar8) ||
       (pcVar5 = (char *)(DAT_00582bb8 / (uint)param_1[8] + 1), pcVar8 == pcVar5)) {
      FUN_004683f0(0xb,"database corruption at line %d of [%.10s]");
      return 0xb;
    }
    iVar2 = *(int *)(param_1[3] + 0x38);
    iVar4 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar2 + 0x24),*(undefined1 *)(iVar2 + 0x25)),
                              *(undefined1 *)(iVar2 + 0x26)),*(undefined1 *)(iVar2 + 0x27));
    uVar6 = (uint)param_1[9] / 5;
    iVar2 = FUN_00487070((int)param_1,(uint)pcVar8);
    pcVar7 = pcVar8 + (-iVar4 - (iVar2 + iVar4 + (uVar6 - (int)pcVar8)) / uVar6);
    if ((pcVar5 < pcVar8) && (pcVar7 < pcVar5)) {
      pcVar7 = pcVar7 + -1;
    }
    while( true ) {
      if (pcVar7 < (char *)0x2) {
        pcVar3 = (char *)0x0;
      }
      else {
        iVar2 = ((uint)(pcVar7 + -2) / (uVar6 + 1)) * (uVar6 + 1);
        pcVar3 = (char *)(iVar2 + 2);
        if (pcVar3 == pcVar5) {
          pcVar3 = (char *)(iVar2 + 3);
        }
      }
      if ((pcVar3 != pcVar7) && (pcVar7 != pcVar5)) break;
      pcVar7 = pcVar7 + -1;
    }
    if (pcVar8 < pcVar7) {
      FUN_004683f0(0xb,"database corruption at line %d of [%.10s]");
      return 0xb;
    }
    uVar6 = 0;
    if (pcVar7 < pcVar8) {
      do {
        if (uVar6 != 0) break;
        uVar6 = FUN_0047e2e0(param_1,(undefined4 *)pcVar7,pcVar8);
        pcVar8 = pcVar8 + -1;
      } while (pcVar7 < pcVar8);
      local_c = uVar6;
      if ((uVar6 != 0x65) && (uVar6 != 0)) goto LAB_0046e342;
    }
    if (iVar4 != 0) {
      local_c = FUN_004a2c80(*(undefined4 **)(param_1[3] + 0x44));
      *(undefined4 *)(*(int *)(param_1[3] + 0x38) + 0x20) = 0;
      *(undefined4 *)(*(int *)(param_1[3] + 0x38) + 0x24) = 0;
      iVar2 = *(int *)(param_1[3] + 0x38);
      *(char *)(iVar2 + 0x1c) = (char)((uint)pcVar7 >> 0x18);
      *(char *)(iVar2 + 0x1d) = (char)((uint)pcVar7 >> 0x10);
      *(char *)(iVar2 + 0x1e) = (char)((uint)pcVar7 >> 8);
      *(char *)(iVar2 + 0x1f) = (char)pcVar7;
      *(char **)(*param_1 + 0x18) = pcVar7;
      param_1[0xb] = (int)pcVar7;
    }
    if (local_c != 0) {
LAB_0046e342:
      FUN_004a2510(puVar1);
      return local_c;
    }
  }
  return 0;
}


/* FUN_0046e390 @ 0046e390  kind=lib  attributed-by=lib-island  size=386 */

/* WARNING: Removing unreachable block (ram,0x0046e41a) */

uint __cdecl FUN_0046e390(int param_1,undefined4 *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  longlong lVar6;
  uint uVar7;
  int extraout_ECX;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 uVar11;
  uint uVar12;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 4);
  iVar2 = *piVar1;
  uVar3 = piVar1[8];
  uVar4 = *(uint *)(*(int *)(*(int *)(param_1 + 0x18) + 4) + 0x20);
  uVar7 = uVar3;
  if ((int)uVar4 < (int)uVar3) {
    uVar7 = uVar4;
  }
  lVar10 = __allmul((uint)param_2,0,uVar4,(int)uVar4 >> 0x1f);
  uVar9 = 0;
  if ((uVar4 != uVar3) && (*(char *)(iVar2 + 0xe) != '\0')) {
    uVar9 = 8;
  }
  lVar6 = lVar10 - (int)uVar4;
  while( true ) {
    if (uVar9 != 0) {
      return uVar9;
    }
    uVar8 = (uint)((ulonglong)lVar6 >> 0x20);
    if (lVar10 <= lVar6) break;
    param_2 = (undefined4 *)0x0;
    uVar11 = __alldvrm((uint)lVar6,uVar8,uVar3,(int)uVar3 >> 0x1f);
    uVar12 = (int)uVar11 + 1;
    if (uVar12 != DAT_00582bb8 / *(uint *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x20) + 1) {
      uVar9 = FUN_004a14c0(iVar2,uVar12,(int *)&param_2,0);
      if ((uVar9 == 0) && (uVar9 = FUN_004a2c80(param_2), uVar9 == 0)) {
        uVar12 = uVar7;
        uVar11 = __allrem((uint)lVar6,uVar8,uVar4,(int)uVar4 >> 0x1f);
        memcpy((void *)(param_2[1] + extraout_ECX),(void *)((int)uVar11 + param_3),uVar12);
        *(undefined1 *)param_2[2] = 0;
      }
      if (param_2 != (undefined4 *)0x0) {
        puVar5 = (uint *)param_2[4];
        FUN_004a3a80(param_2);
        if (*(int *)(puVar5[0x2d] + 0xc) == 0) {
          FUN_00484370(puVar5);
        }
      }
    }
    lVar6 = lVar6 + (int)uVar3;
  }
  return 0;
}


/* FUN_0046e520 @ 0046e520  kind=lib  attributed-by=lib-island  size=388 */

void __cdecl FUN_0046e520(int param_1)

{
  int iVar1;
  char *pcVar2;
  uint *puVar3;
  int *piVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined4 *local_20;
  undefined1 local_18 [16];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x24);
  local_20 = (undefined4 *)0x0;
  do {
    while( true ) {
      iVar7 = (int)*(short *)(param_1 + 0x5e);
      piVar4 = *(int **)(param_1 + 0x88 + iVar7 * 4);
      if (iVar7 != 0) break;
      if ((*(char *)((int)piVar4 + 1) == (char)*(short *)(param_1 + 0x5e)) ||
         (piVar4 = FUN_0046e6b0(piVar4,(undefined4 *)(param_1 + 0x8c)), piVar4 != (int *)0x0))
      goto LAB_0046e681;
      *(undefined4 *)(param_1 + 0x5e) = 1;
      *(undefined2 *)(param_1 + 0x62) = 0;
    }
    if ((*(char *)((int)piVar4 + 1) == '\0') &&
       ((uint)*(ushort *)((int)piVar4 + 0xe) <= (uint)(iVar1 * 2) / 3)) break;
    pcVar2 = *(char **)(param_1 + 0x84 + iVar7 * 4);
    puVar8 = (undefined1 *)(uint)*(ushort *)(param_1 + 0x5e + iVar7 * 2);
    uVar5 = FUN_004a2c80(*(undefined4 **)(pcVar2 + 0x44));
    puVar6 = local_20;
    if (uVar5 == 0) {
      if (((((char)piVar4[1] == '\0') || (*(char *)((int)piVar4 + 1) != '\x01')) ||
          ((short)piVar4[5] != (short)piVar4[4])) ||
         ((*(int *)(pcVar2 + 0x48) == 1 ||
          ((undefined1 *)(uint)*(ushort *)(pcVar2 + 0x10) != puVar8)))) {
        puVar6 = FUN_004868a0(*(int *)(*(int *)(param_1 + 4) + 0x20));
        uVar5 = FUN_0046e7e0(pcVar2,puVar8,(int)puVar6,(uint)(iVar7 == 1),
                             (uint)*(byte *)(param_1 + 0x5d));
        if (local_20 != (undefined4 *)0x0) {
          FUN_00486af0(local_20);
        }
      }
      else {
        uVar5 = FUN_0046f6f0((uint)pcVar2,(uint)piVar4,local_18);
      }
    }
    local_20 = puVar6;
    puVar6 = (undefined4 *)piVar4[0x11];
    *(undefined1 *)((int)piVar4 + 1) = 0;
    if (puVar6 != (undefined4 *)0x0) {
      puVar3 = (uint *)puVar6[4];
      FUN_004a3a80(puVar6);
      if (*(int *)(puVar3[0x2d] + 0xc) == 0) {
        FUN_00484370(puVar3);
      }
    }
    *(short *)(param_1 + 0x5e) = *(short *)(param_1 + 0x5e) + -1;
  } while (uVar5 == 0);
LAB_0046e681:
  if (local_20 != (undefined4 *)0x0) {
    FUN_00486af0(local_20);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0046e6b0 @ 0046e6b0  kind=lib  attributed-by=lib-island  size=301 */

int * __cdecl FUN_0046e6b0(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  uint *puVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  char *local_c;
  uint local_8;
  
  piVar4 = param_1;
  piVar1 = param_1 + 0x11;
  pcVar7 = (char *)0x0;
  local_c = (char *)0x0;
  local_8 = 0;
  param_1 = (int *)param_1[0xd];
  piVar5 = (int *)FUN_004a2c80((undefined4 *)*piVar1);
  piVar1 = param_1;
  if (piVar5 == (int *)0x0) {
    param_1 = (int *)FUN_0046bae0(param_1,(int *)&local_c,&local_8,(undefined4 *)piVar4[0x12],'\0');
    pcVar7 = local_c;
    FUN_00476130((int)piVar4,local_c,(uint *)&param_1);
    if (*(char *)((int)piVar1 + 0x11) != '\0') {
      FUN_004870c0(piVar1,local_8,'\x05',piVar4[0x12],(uint *)&param_1);
    }
    piVar5 = param_1;
    if (param_1 == (int *)0x0) {
      memcpy(pcVar7 + 0x14,piVar4 + 5,(uint)*(byte *)((int)piVar4 + 1) * 2);
      memcpy(pcVar7 + 0x20,piVar4 + 8,(uint)*(byte *)((int)piVar4 + 1) << 2);
      pcVar7[1] = *(char *)((int)piVar4 + 1);
      FUN_004c5b30((undefined1 *)piVar4,**(byte **)(pcVar7 + 0x38) & 0xfffffff7);
      iVar6 = (uint)*(byte *)((int)piVar4 + 5) + piVar4[0xe];
      *(char *)(iVar6 + 8) = (char)(local_8 >> 0x18);
      *(char *)(iVar6 + 9) = (char)(local_8 >> 0x10);
      *(char *)(iVar6 + 10) = (char)(local_8 >> 8);
      *(char *)(iVar6 + 0xb) = (char)local_8;
      *param_2 = pcVar7;
      return (int *)0x0;
    }
  }
  *param_2 = 0;
  if ((pcVar7 != (char *)0x0) &&
     (puVar2 = *(undefined4 **)(pcVar7 + 0x44), puVar2 != (undefined4 *)0x0)) {
    puVar3 = (uint *)puVar2[4];
    FUN_004a3a80(puVar2);
    if (*(int *)(puVar3[0x2d] + 0xc) == 0) {
      FUN_00484370(puVar3);
    }
  }
  return piVar5;
}


/* FUN_0046e7e0 @ 0046e7e0  kind=lib  attributed-by=lib-island  size=755 */

/* WARNING: Type propagation algorithm not settling */

void __cdecl FUN_0046e7e0(char *param_1,undefined1 *param_2,int param_3,int param_4,int param_5)

{
  short *psVar1;
  byte bVar2;
  char cVar3;
  ushort uVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  char *pcVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined4 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  int iVar17;
  undefined4 *puVar18;
  ushort *puVar19;
  int iVar20;
  uint *puVar21;
  undefined4 *puVar22;
  int iVar23;
  uint local_d0;
  uint local_cc;
  ushort local_b8;
  uint auStack_b4 [7];
  uint local_98 [3];
  undefined4 *local_8c;
  undefined4 *local_88;
  uint local_84;
  undefined1 *local_80;
  undefined1 *local_7c;
  int local_78;
  undefined1 *local_74;
  uint local_70;
  undefined1 *local_6c;
  uint local_68;
  undefined1 *local_64;
  undefined4 *local_60;
  undefined4 *local_5c;
  int local_58;
  undefined1 *local_54;
  char *local_50;
  undefined4 *local_4c;
  int *local_48;
  uint local_44;
  undefined1 *local_40;
  undefined1 *local_3c;
  uint local_38;
  uint local_34 [5];
  int iStack_20;
  undefined1 *local_1c [5];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  puVar13 = (undefined1 *)0x0;
  local_48 = *(int **)(param_1 + 0x34);
  local_50 = param_1;
  local_78 = param_3;
  local_44 = 0;
  local_58 = 0;
  auStack_b4[4] = 0;
  local_7c = (undefined1 *)0x0;
  local_5c = (undefined4 *)0x0;
  if (param_3 == 0) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  puVar15 = (undefined1 *)(uint)*(ushort *)(param_1 + 0x10) + (byte)param_1[1];
  if (puVar15 < (undefined1 *)0x2) {
    local_3c = (undefined1 *)0x0;
  }
  else {
    if (param_2 == (undefined1 *)0x0) {
      local_3c = (undefined1 *)0x0;
    }
    else if (param_2 == puVar15) {
      local_3c = puVar15 + param_5 + -2;
    }
    else {
      local_3c = param_2 + -1;
    }
    puVar15 = (undefined1 *)(2 - param_5);
  }
  local_54 = puVar15 + 1;
  puVar16 = puVar15 + ((int)local_3c - (uint)(byte)param_1[1]);
  if (puVar16 == (undefined1 *)(uint)*(ushort *)(param_1 + 0x10)) {
    local_6c = (undefined1 *)(*(int *)(param_1 + 0x38) + 8 + (uint)(byte)param_1[5]);
  }
  else {
    local_6c = (undefined1 *)
               ((uint)(CONCAT11(*(undefined1 *)(*(int *)(param_1 + 0x40) + (int)puVar16 * 2),
                                *(undefined1 *)(*(int *)(param_1 + 0x40) + 1 + (int)puVar16 * 2)) &
                      *(ushort *)(param_1 + 0x12)) + *(int *)(param_1 + 0x38));
  }
  local_8c = (undefined4 *)
             CONCAT31(CONCAT21(CONCAT11(*local_6c,local_6c[1]),local_6c[2]),local_6c[3]);
  puVar21 = auStack_b4 + (int)(puVar15 + 7);
  local_88 = local_8c;
  local_38 = FUN_0047d000(local_48,(uint)local_8c,(int *)puVar21);
  local_34[0] = local_38;
  pcVar11 = local_50;
  do {
    local_50 = pcVar11;
    local_34[0] = local_38;
    if (local_38 != 0) {
      memset(auStack_b4 + 7,0,(int)puVar15 * 4 + 4);
LAB_0046eac0:
      FUN_004a7be0(local_5c);
      iVar17 = 0;
      puVar13 = local_54;
      if (0 < (int)local_54) {
        do {
          if ((auStack_b4[iVar17 + 7] != 0) &&
             (puVar10 = *(undefined4 **)(auStack_b4[iVar17 + 7] + 0x44),
             puVar10 != (undefined4 *)0x0)) {
            psVar1 = (short *)((int)puVar10 + 0x1a);
            *psVar1 = *psVar1 + -1;
            puVar21 = (uint *)puVar10[4];
            if (*psVar1 == 0) {
              *(int *)(puVar10[7] + 0xc) = *(int *)(puVar10[7] + 0xc) + -1;
              if ((*(byte *)(puVar10 + 6) & 2) == 0) {
                iVar20 = puVar10[7];
                if (*(int *)(iVar20 + 0x1c) != 0) {
                  if (puVar10[5] == 1) {
                    *(undefined4 *)(iVar20 + 0x2c) = 0;
                  }
                  (*DAT_00582b4c)(*(undefined4 *)(iVar20 + 0x28),*puVar10,0);
                }
              }
              else {
                puVar14 = (undefined4 *)puVar10[7];
                if ((undefined4 *)puVar14[2] == puVar10) {
                  for (iVar20 = puVar10[9]; (iVar20 != 0 && ((*(byte *)(iVar20 + 0x18) & 4) != 0));
                      iVar20 = *(int *)(iVar20 + 0x24)) {
                  }
                  puVar14[2] = iVar20;
                }
                if (puVar10[8] == 0) {
                  puVar14[1] = puVar10[9];
                }
                else {
                  *(undefined4 *)(puVar10[8] + 0x24) = puVar10[9];
                }
                if (puVar10[9] == 0) {
                  *puVar14 = puVar10[8];
                }
                else {
                  *(undefined4 *)(puVar10[9] + 0x20) = puVar10[8];
                }
                piVar6 = (int *)puVar10[7];
                puVar10[8] = 0;
                puVar10[9] = 0;
                iVar20 = *piVar6;
                puVar10[8] = iVar20;
                if (iVar20 != 0) {
                  *(undefined4 **)(iVar20 + 0x24) = puVar10;
                }
                *piVar6 = (int)puVar10;
                if (piVar6[1] == 0) {
                  piVar6[1] = (int)puVar10;
                }
                puVar13 = local_54;
                if ((piVar6[2] == 0) && ((*(byte *)(puVar10 + 6) & 4) == 0)) {
                  piVar6[2] = (int)puVar10;
                }
              }
            }
            if (*(int *)(puVar21[0x2d] + 0xc) == 0) {
              FUN_00484370(puVar21);
            }
          }
          iVar17 = iVar17 + 1;
        } while (iVar17 < (int)puVar13);
      }
      iVar20 = 0;
      iVar17 = local_58;
      if (0 < local_58) {
        do {
          if ((local_1c[iVar20] != (undefined1 *)0x0) &&
             (puVar10 = *(undefined4 **)(local_1c[iVar20] + 0x44), puVar10 != (undefined4 *)0x0)) {
            psVar1 = (short *)((int)puVar10 + 0x1a);
            *psVar1 = *psVar1 + -1;
            puVar21 = (uint *)puVar10[4];
            if (*psVar1 == 0) {
              *(int *)(puVar10[7] + 0xc) = *(int *)(puVar10[7] + 0xc) + -1;
              if ((*(byte *)(puVar10 + 6) & 2) == 0) {
                iVar23 = puVar10[7];
                if (*(int *)(iVar23 + 0x1c) != 0) {
                  if (puVar10[5] == 1) {
                    *(undefined4 *)(iVar23 + 0x2c) = 0;
                  }
                  (*DAT_00582b4c)(*(undefined4 *)(iVar23 + 0x28),*puVar10,0);
                }
              }
              else {
                puVar14 = (undefined4 *)puVar10[7];
                if ((undefined4 *)puVar14[2] == puVar10) {
                  for (iVar17 = puVar10[9]; (iVar17 != 0 && ((*(byte *)(iVar17 + 0x18) & 4) != 0));
                      iVar17 = *(int *)(iVar17 + 0x24)) {
                  }
                  puVar14[2] = iVar17;
                }
                if (puVar10[8] == 0) {
                  puVar14[1] = puVar10[9];
                }
                else {
                  *(undefined4 *)(puVar10[8] + 0x24) = puVar10[9];
                }
                if (puVar10[9] == 0) {
                  *puVar14 = puVar10[8];
                }
                else {
                  *(undefined4 *)(puVar10[9] + 0x20) = puVar10[8];
                }
                piVar6 = (int *)puVar10[7];
                puVar10[8] = 0;
                puVar10[9] = 0;
                iVar17 = *piVar6;
                puVar10[8] = iVar17;
                if (iVar17 != 0) {
                  *(undefined4 **)(iVar17 + 0x24) = puVar10;
                }
                *piVar6 = (int)puVar10;
                if (piVar6[1] == 0) {
                  piVar6[1] = (int)puVar10;
                }
                iVar17 = local_58;
                if ((piVar6[2] == 0) && ((*(byte *)(puVar10 + 6) & 4) == 0)) {
                  piVar6[2] = (int)puVar10;
                }
              }
            }
            if (*(int *)(puVar21[0x2d] + 0xc) == 0) {
              FUN_00484370(puVar21);
            }
          }
          iVar20 = iVar20 + 1;
        } while (iVar20 < iVar17);
      }
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    puVar13 = puVar13 + (uint)*(ushort *)(*puVar21 + 0x10) + *(byte *)(*puVar21 + 1) + 1;
    puVar16 = puVar15 + -1;
    local_64 = puVar13;
    if (puVar15 == (undefined1 *)0x0) {
      uVar7 = (uint)(puVar13 + 3) & 0xfffffffc;
      local_80 = (undefined1 *)(local_48[8] + 0x50);
      local_5c = FUN_004a7d10((int)local_80 * (int)local_54 + local_48[8] + uVar7 * 6);
      if (local_5c == (undefined4 *)0x0) {
        local_34[0] = 7;
      }
      else {
        local_4c = local_5c + uVar7;
        local_84 = (uint)*(byte *)(local_98[0] + 3) << 2;
        local_68 = (uint)*(byte *)(local_98[0] + 4);
        local_40 = (undefined1 *)((int)(local_5c + uVar7) + uVar7 * 2);
        local_70 = 0;
        if ((int)local_54 < 1) {
          uVar7 = 0;
        }
        else {
          local_64 = (undefined1 *)0x0;
          do {
            puVar10 = (undefined4 *)auStack_b4[local_70 + 7];
            puVar14 = (undefined4 *)(local_40 + local_48[8] + (int)local_64);
            auStack_b4[local_70 + 1] = (uint)puVar14;
            puVar18 = puVar10;
            puVar22 = puVar14;
            for (iVar17 = 0x13; iVar17 != 0; iVar17 = iVar17 + -1) {
              *puVar22 = *puVar18;
              puVar18 = puVar18 + 1;
              puVar22 = puVar22 + 1;
            }
            puVar14[0xe] = puVar14 + 0x13;
            local_60 = puVar14;
            memcpy(puVar14 + 0x13,(void *)puVar10[0xe],local_48[8]);
            local_74 = (undefined1 *)
                       ((uint)*(ushort *)(puVar14 + 4) + (uint)*(byte *)((int)puVar14 + 1));
            if (*(byte *)((int)puVar14 + 1) == 0) {
              iVar17 = puVar14[0xe];
              uVar4 = *(ushort *)((int)puVar14 + 0x12);
              if (local_74 != (undefined1 *)0x0) {
                puVar13 = (undefined1 *)(iVar17 + (uint)*(ushort *)(puVar14 + 3));
                do {
                  iVar20 = (uint)(CONCAT11(*puVar13,puVar13[1]) & uVar4) + iVar17;
                  local_5c[local_44] = iVar20;
                  uVar7 = FUN_00471aa0((uint)local_60,iVar20);
                  *(short *)((int)local_4c + (local_44 + 1) * 2 + -2) = (short)uVar7;
                  local_74 = local_74 + -1;
                  local_44 = local_44 + 1;
                  puVar13 = puVar13 + 2;
                  puVar14 = local_60;
                } while (local_74 != (undefined1 *)0x0);
              }
            }
            else {
              uVar7 = 0;
              if (local_74 != (undefined1 *)0x0) {
                do {
                  iVar17 = *(byte *)((int)puVar14 + 1) - 1;
                  uVar8 = uVar7;
                  if (-1 < iVar17) {
                    puVar19 = (ushort *)((int)puVar14 + (*(byte *)((int)puVar14 + 1) + 9) * 2);
                    do {
                      if ((int)(uint)*puVar19 <= (int)uVar8) {
                        if (*puVar19 == uVar8) {
                          iVar17 = puVar14[iVar17 + 8];
                          goto LAB_0046ec9a;
                        }
                        uVar8 = uVar8 - 1;
                      }
                      puVar19 = puVar19 + -1;
                      iVar17 = iVar17 + -1;
                    } while (-1 < iVar17);
                  }
                  iVar17 = (uint)(CONCAT11(*(undefined1 *)(puVar14[0x10] + uVar8 * 2),
                                           *(undefined1 *)(puVar14[0x10] + 1 + uVar8 * 2)) &
                                 *(ushort *)((int)puVar14 + 0x12)) + puVar14[0xe];
LAB_0046ec9a:
                  local_5c[local_44] = iVar17;
                  uVar8 = FUN_00471aa0((uint)puVar14,iVar17);
                  *(short *)((int)local_4c + (local_44 + 1) * 2 + -2) = (short)uVar8;
                  uVar7 = uVar7 + 1;
                  local_44 = local_44 + 1;
                } while ((int)uVar7 < (int)local_74);
              }
            }
            uVar8 = local_70;
            if (((int)local_70 < (int)(local_54 + -1)) && (local_68 == 0)) {
              uVar4 = *(ushort *)(local_1c + local_70);
              *(ushort *)((int)local_4c + local_44 * 2) = uVar4;
              puVar13 = local_40 + auStack_b4[4];
              auStack_b4[4] = auStack_b4[4] + uVar4;
              memcpy(puVar13,(void *)auStack_b4[local_70 + 5],(uint)uVar4);
              local_5c[local_44] = puVar13 + (local_84 & 0xffff);
              psVar1 = (short *)((int)local_4c + local_44 * 2);
              *psVar1 = *psVar1 - (short)local_84;
              if (*(char *)((int)puVar14 + 3) == '\0') {
                *(undefined4 *)local_5c[local_44] = *(undefined4 *)(puVar14[0xe] + 8);
              }
              else if (*(ushort *)((int)local_4c + local_44 * 2) < 4) {
                *(undefined2 *)((int)local_4c + local_44 * 2) = 4;
              }
              local_44 = local_44 + 1;
            }
            local_70 = uVar8 + 1;
            local_64 = local_64 + (int)local_80;
            uVar7 = local_44;
          } while ((int)(uVar8 + 1) < (int)local_54);
        }
        pcVar11 = local_50;
        iVar17 = local_48[9];
        uVar8 = 0;
        puVar15 = (undefined1 *)0x0;
        puVar13 = (undefined1 *)0x0;
        if ((int)uVar7 < 1) {
LAB_0046ee12:
          local_1c[(int)puVar15] = puVar13;
          local_60 = (undefined4 *)(puVar15 + 1);
          local_34[(int)local_60] = uVar7;
          local_64 = puVar15;
          local_74 = puVar15;
          puVar10 = local_60;
          while (0 < (int)local_74) {
            puVar13 = local_1c[(int)local_74];
            iVar17 = (&iStack_20)[(int)local_74];
            while( true ) {
              iVar23 = local_34[(int)local_74] - 1;
              iVar20 = (iVar23 - local_68) + 1;
              if ((puVar13 != (undefined1 *)0x0) &&
                 ((param_5 != 0 ||
                  ((int)((iVar17 - (uint)*(ushort *)((int)local_4c + iVar23 * 2)) + -2) <
                   (int)(puVar13 + *(ushort *)((int)local_4c + iVar20 * 2) + 2))))) break;
              puVar13 = puVar13 + *(ushort *)((int)local_4c + iVar20 * 2) + 2;
              iVar17 = iVar17 + (-2 - (uint)*(ushort *)((int)local_4c + iVar23 * 2));
              local_34[(int)local_74] = local_34[(int)local_74] - 1;
            }
            local_1c[(int)local_74] = puVar13;
            (&iStack_20)[(int)local_74] = iVar17;
            local_74 = local_74 + -1;
            puVar10 = local_60;
          }
          if (1 < *(uint *)(local_98[0] + 0x48)) {
            iVar17 = 0;
            local_70 = (uint)**(byte **)(local_98[0] + 0x38);
            if (0 < (int)puVar10) {
              do {
                if (iVar17 < (int)local_54) {
                  local_40 = (undefined1 *)auStack_b4[iVar17 + 7];
                  local_1c[iVar17] = local_40;
                  puVar14 = *(undefined4 **)(local_40 + 0x44);
                  auStack_b4[iVar17 + 7] = 0;
                  local_34[0] = FUN_004a2c80(puVar14);
                  local_58 = local_58 + 1;
                  local_38 = local_34[0];
                  if (local_34[0] != 0) goto LAB_0046eac0;
                }
                else {
                  puVar14 = local_88;
                  if (param_5 != 0) {
                    puVar14 = (undefined4 *)0x1;
                  }
                  local_34[0] = FUN_0046bae0(local_48,(int *)&local_40,(uint *)&local_8c,puVar14,
                                             '\0');
                  local_38 = local_34[0];
                  if (local_34[0] != 0) goto LAB_0046eac0;
                  local_58 = local_58 + 1;
                  cVar3 = *(char *)((int)local_48 + 0x11);
                  local_1c[iVar17] = local_40;
                  if (cVar3 != '\0') {
                    FUN_004870c0(local_48,*(uint *)(local_40 + 0x48),'\x05',*(int *)(pcVar11 + 0x48)
                                 ,&local_38);
                    local_34[0] = local_38;
                    if (local_38 != 0) goto LAB_0046eac0;
                  }
                  local_88 = local_8c;
                }
                iVar17 = iVar17 + 1;
                local_38 = local_34[0];
              } while (iVar17 < (int)puVar10);
            }
            uVar7 = local_34[0];
            if (iVar17 < (int)local_54) {
              do {
                puVar13 = (undefined1 *)auStack_b4[iVar17 + 7];
                if (uVar7 != 0) goto LAB_0046eac0;
                local_34[0] = FUN_0047bdc0(*(int **)(puVar13 + 0x34),puVar13,
                                           *(uint *)(puVar13 + 0x48));
                local_38 = local_34[0];
                if (local_34[0] != 0) goto LAB_0046eac0;
                if ((puVar13 != (undefined1 *)0x0) &&
                   (puVar10 = *(undefined4 **)(puVar13 + 0x44), puVar10 != (undefined4 *)0x0)) {
                  psVar1 = (short *)((int)puVar10 + 0x1a);
                  *psVar1 = *psVar1 + -1;
                  puVar21 = (uint *)puVar10[4];
                  if (*psVar1 == 0) {
                    *(int *)(puVar10[7] + 0xc) = *(int *)(puVar10[7] + 0xc) + -1;
                    if ((*(byte *)(puVar10 + 6) & 2) == 0) {
                      iVar20 = puVar10[7];
                      if (*(int *)(iVar20 + 0x1c) != 0) {
                        if (puVar10[5] == 1) {
                          *(undefined4 *)(iVar20 + 0x2c) = 0;
                        }
                        (*DAT_00582b4c)(*(undefined4 *)(iVar20 + 0x28),*puVar10,0);
                      }
                    }
                    else {
                      puVar14 = (undefined4 *)puVar10[7];
                      if ((undefined4 *)puVar14[2] == puVar10) {
                        for (iVar20 = puVar10[9];
                            (iVar20 != 0 && ((*(byte *)(iVar20 + 0x18) & 4) != 0));
                            iVar20 = *(int *)(iVar20 + 0x24)) {
                        }
                        puVar14[2] = iVar20;
                      }
                      if (puVar10[8] == 0) {
                        puVar14[1] = puVar10[9];
                      }
                      else {
                        *(undefined4 *)(puVar10[8] + 0x24) = puVar10[9];
                      }
                      if (puVar10[9] == 0) {
                        *puVar14 = puVar10[8];
                      }
                      else {
                        *(undefined4 *)(puVar10[9] + 0x20) = puVar10[8];
                      }
                      piVar6 = (int *)puVar10[7];
                      puVar10[8] = 0;
                      puVar10[9] = 0;
                      iVar20 = *piVar6;
                      puVar10[8] = iVar20;
                      if (iVar20 != 0) {
                        *(undefined4 **)(iVar20 + 0x24) = puVar10;
                      }
                      *piVar6 = (int)puVar10;
                      if (piVar6[1] == 0) {
                        piVar6[1] = (int)puVar10;
                      }
                      if ((piVar6[2] == 0) && ((*(byte *)(puVar10 + 6) & 4) == 0)) {
                        piVar6[2] = (int)puVar10;
                      }
                    }
                  }
                  if (*(int *)(puVar21[0x2d] + 0xc) == 0) {
                    FUN_00484370(puVar21);
                  }
                }
                uVar7 = local_34[0];
                auStack_b4[iVar17 + 7] = 0;
                iVar17 = iVar17 + 1;
              } while (iVar17 < (int)local_54);
            }
            puVar13 = (undefined1 *)0x0;
            if (0 < (int)local_64) {
              do {
                local_40 = local_1c[(int)puVar13];
                local_80 = puVar13 + 1;
                uVar7 = *(uint *)(local_40 + 0x48);
                puVar15 = local_80;
                puVar16 = puVar13;
                if ((int)local_80 < (int)local_60) {
                  do {
                    if (*(uint *)(local_1c[(int)puVar15] + 0x48) < uVar7) {
                      uVar7 = *(uint *)(local_1c[(int)puVar15] + 0x48);
                      puVar16 = puVar15;
                    }
                    puVar15 = puVar15 + 1;
                  } while ((int)puVar15 < (int)local_60);
                  if ((int)puVar13 < (int)puVar16) {
                    local_1c[(int)puVar13] = local_1c[(int)puVar16];
                    local_1c[(int)puVar16] = local_40;
                  }
                }
                puVar13 = local_80;
              } while ((int)local_80 < (int)local_64);
            }
            local_40 = (undefined1 *)(&iStack_20)[local_58];
            uVar7 = 0;
            uVar5 = *(undefined4 *)(local_40 + 0x48);
            *local_6c = (char)((uint)uVar5 >> 0x18);
            local_6c[1] = (char)((uint)uVar5 >> 0x10);
            local_6c[2] = (char)((uint)uVar5 >> 8);
            local_6c[3] = (char)uVar5;
            local_6c = (undefined1 *)0x0;
            if (0 < local_58) {
              do {
                puVar15 = local_6c;
                puVar13 = local_1c[(int)local_6c];
                local_80 = puVar13;
                FUN_004c5b30(puVar13,local_70);
                uVar8 = local_34[(int)(puVar15 + 1)];
                FUN_0046e020((int)puVar13,uVar8 - uVar7,(int)(local_5c + uVar7),
                             (int)local_4c + uVar7 * 2);
                puVar13 = local_80;
                if ((int)uVar8 < (int)local_44) {
                  puVar10 = (undefined4 *)local_5c[uVar8];
                  uVar9 = (uint)*(ushort *)((int)local_4c + uVar8 * 2);
                  local_60 = (undefined4 *)(local_7c + local_78);
                  uVar7 = (local_84 & 0xffff) + uVar9;
                  puVar14 = local_60;
                  if (local_80[3] == '\0') {
                    *(undefined4 *)(*(int *)(local_80 + 0x38) + 8) = *puVar10;
                  }
                  else if (local_68 == 0) {
                    puVar10 = puVar10 + -1;
                    if (uVar9 == 4) {
                      uVar7 = FUN_00471aa0((uint)local_50,(int)puVar10);
                      uVar7 = uVar7 & 0xffff;
                      puVar14 = local_60;
                    }
                  }
                  else {
                    uVar8 = uVar8 - 1;
                    FUN_00471710((int)local_80,local_5c[uVar8],&local_d0);
                    puVar10 = local_60;
                    iVar17 = FUN_004a5fc0((byte *)(local_60 + 1),local_d0,local_cc);
                    uVar7 = iVar17 + 4;
                    puVar14 = (undefined4 *)0x0;
                  }
                  puVar15 = local_3c;
                  local_7c = local_7c + uVar7;
                  FUN_0047e6f0((uint)local_50,(int)local_3c,(undefined1 *)puVar10,uVar7,
                               (undefined1 *)puVar14,*(int *)(puVar13 + 0x48),&local_38);
                  local_34[0] = local_38;
                  if (local_38 != 0) goto LAB_0046eac0;
                  uVar8 = uVar8 + 1;
                  local_3c = puVar15 + 1;
                }
                local_6c = local_6c + 1;
                uVar7 = uVar8;
              } while ((int)local_6c < local_58);
            }
            if ((local_70 & 8) == 0) {
              *(undefined4 *)(*(int *)(local_40 + 0x38) + 8) =
                   *(undefined4 *)(*(int *)(auStack_b4[(int)local_54] + 0x38) + 8);
            }
            local_3c = local_1c[0];
            if (((param_4 != 0) && (*(short *)(local_50 + 0x10) == 0)) &&
               ((ushort)(byte)local_50[5] <= *(ushort *)(local_1c[0] + 0xe))) {
              FUN_00476130((int)local_1c[0],local_50,&local_38);
              local_34[0] = local_38;
              if (local_38 == 0) {
                local_34[0] = FUN_0047bdc0(*(int **)(local_1c[0] + 0x34),local_1c[0],
                                           *(uint *)(local_1c[0] + 0x48));
              }
              goto LAB_0046eac0;
            }
            if (*(char *)((int)local_48 + 0x11) == '\0') goto LAB_0046eac0;
            local_70 = auStack_b4[1];
            local_7c = (undefined1 *)(uint)*(byte *)(auStack_b4[1] + 1);
            puVar13 = local_7c + *(ushort *)(auStack_b4[1] + 0x10);
            if (local_7c == (undefined1 *)0x0) {
              puVar15 = (undefined1 *)0xffffffff;
            }
            else {
              puVar15 = (undefined1 *)(uint)*(ushort *)(auStack_b4[1] + 0x14);
            }
            puVar16 = (undefined1 *)0x0;
            local_78 = 0;
            local_40 = (undefined1 *)0x0;
            if (0 < (int)local_44) {
              local_64 = (undefined1 *)0x0;
              do {
                uVar7 = 0;
                if (puVar16 == puVar13) {
                  uVar7 = (uint)(local_68 == 0);
                  do {
                    local_70 = auStack_b4[local_78 + 2];
                    local_78 = local_78 + 1;
                    local_6c = (undefined1 *)(uint)*(byte *)(local_70 + 1);
                    puVar13 = local_6c + *(ushort *)(local_70 + 0x10) + uVar7 + (int)puVar16;
                    if (*(byte *)(local_70 + 1) != 0) {
                      local_7c = local_6c;
                      puVar15 = puVar16 + *(ushort *)(local_70 + 0x14) + uVar7;
                    }
                  } while (puVar16 == puVar13);
                }
                if (puVar16 == puVar15) {
                  local_7c = local_7c + -1;
                  uVar7 = 1;
                  if (0 < (int)local_7c) {
                    puVar15 = puVar15 + 1;
                  }
                }
                if (puVar16 == *(undefined1 **)((int)local_34 + (int)(local_64 + 4))) {
                  local_40 = local_40 + 1;
                  local_64 = (undefined1 *)((int)local_40 * 4);
                  local_3c = local_1c[(int)local_40];
                  if (local_68 != 0) goto LAB_0046f3db;
                }
                else {
LAB_0046f3db:
                  if ((uVar7 != 0) || (*(int *)(local_70 + 0x48) != *(int *)(local_3c + 0x48))) {
                    if ((short)local_84 == 0) {
                      puVar12 = (undefined1 *)local_5c[(int)puVar16];
                      FUN_004870c0(local_48,CONCAT31(CONCAT21(CONCAT11(*puVar12,puVar12[1]),
                                                              puVar12[2]),puVar12[3]),'\x05',
                                   *(int *)(local_3c + 0x48),&local_38);
                      local_34[0] = local_38;
                    }
                    if (*(ushort *)(local_3c + 10) < *(ushort *)((int)local_4c + (int)puVar16 * 2))
                    {
                      local_80 = (undefined1 *)local_5c[(int)puVar16];
                      if ((local_34[0] == 0) &&
                         (FUN_00471710((int)local_3c,(uint)local_5c[(int)puVar16],&local_d0),
                         local_b8 != 0)) {
                        puVar12 = local_80 + local_b8;
                        FUN_004870c0(*(int **)(local_3c + 0x34),
                                     CONCAT31(CONCAT21(CONCAT11(*puVar12,puVar12[1]),puVar12[2]),
                                              puVar12[3]),'\x03',*(int *)(local_3c + 0x48),&local_38
                                    );
                        local_34[0] = local_38;
                      }
                    }
                  }
                }
                puVar16 = puVar16 + 1;
              } while ((int)puVar16 < (int)local_44);
            }
            iVar17 = local_58;
            if (((short)local_84 == 0) && (iVar20 = 0, 0 < local_58)) {
              do {
                iVar23 = *(int *)(local_1c[iVar20] + 0x38);
                FUN_004870c0(local_48,CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar23 + 8),
                                                                 *(undefined1 *)(iVar23 + 9)),
                                                        *(undefined1 *)(iVar23 + 10)),
                                               *(undefined1 *)(iVar23 + 0xb)),'\x05',
                             *(int *)(local_1c[iVar20] + 0x48),&local_38);
                iVar20 = iVar20 + 1;
              } while (iVar20 < iVar17);
              local_34[0] = local_38;
            }
            goto LAB_0046eac0;
          }
        }
        else {
          while( true ) {
            uVar7 = (uint)*(ushort *)((int)local_4c + uVar8 * 2);
            puVar13 = puVar13 + uVar7 + 2;
            if ((int)(((local_84 & 0xffff) - 0xc) + iVar17) < (int)puVar13) break;
LAB_0046ee0a:
            uVar8 = uVar8 + 1;
            uVar7 = local_44;
            if ((int)local_44 <= (int)uVar8) goto LAB_0046ee12;
          }
          local_1c[(int)puVar15] = puVar13 + -uVar7;
          local_34[(int)(puVar15 + 1)] = uVar8;
          if (local_68 != 0) {
            uVar8 = uVar8 - 1;
          }
          puVar15 = puVar15 + 1;
          puVar13 = (undefined1 *)0x0;
          if ((int)puVar15 < 5) goto LAB_0046ee0a;
        }
        FUN_004683f0(0xb,"database corruption at line %d of [%.10s]");
        local_34[0] = 0xb;
      }
      goto LAB_0046eac0;
    }
    if ((local_3c + (int)puVar16 == (undefined1 *)(uint)*(ushort *)(pcVar11 + 0x14)) &&
       (pcVar11[1] != '\0')) {
      puVar15 = *(undefined1 **)(pcVar11 + 0x20);
      puVar10 = (undefined4 *)
                CONCAT31(CONCAT21(CONCAT11(*puVar15,puVar15[1]),puVar15[2]),puVar15[3]);
      local_88 = puVar10;
      auStack_b4[(int)(puVar16 + 5)] = (uint)puVar15;
      local_8c = puVar10;
      uVar7 = FUN_00471aa0((uint)pcVar11,(int)puVar15);
      local_1c[(int)puVar16] = (undefined1 *)(uVar7 & 0xffff);
      local_50[1] = '\0';
    }
    else {
      puVar13 = (undefined1 *)
                ((uint)(CONCAT11(*(undefined1 *)
                                  (*(int *)(pcVar11 + 0x40) +
                                  (int)(puVar16 + ((int)local_3c - (uint)(byte)pcVar11[1])) * 2),
                                 *(undefined1 *)
                                  (*(int *)(pcVar11 + 0x40) + 1 +
                                  (int)(puVar16 + ((int)local_3c - (uint)(byte)pcVar11[1])) * 2)) &
                       *(ushort *)(pcVar11 + 0x12)) + *(int *)(pcVar11 + 0x38));
      puVar10 = (undefined4 *)
                CONCAT31(CONCAT21(CONCAT11(*puVar13,puVar13[1]),puVar13[2]),puVar13[3]);
      auStack_b4[(int)(puVar16 + 5)] = (uint)puVar13;
      local_8c = puVar10;
      local_88 = puVar10;
      uVar7 = FUN_00471aa0((uint)pcVar11,(int)puVar13);
      puVar13 = (undefined1 *)(uVar7 & 0xffff);
      bVar2 = *(byte *)((int)local_48 + 0x16);
      local_1c[(int)puVar16] = puVar13;
      pcVar11 = local_50;
      if ((bVar2 & 4) != 0) {
        local_40 = (undefined1 *)((int)auStack_b4[(int)(puVar16 + 5)] - *(int *)(local_50 + 0x38));
        if (local_48[9] < (int)(puVar13 + (int)local_40)) {
          FUN_004683f0(0xb,"database corruption at line %d of [%.10s]");
          local_34[0] = 0xb;
          memset(auStack_b4 + 7,0,(int)puVar16 * 4 + 4);
          goto LAB_0046eac0;
        }
        memcpy(local_40 + local_78,(void *)auStack_b4[(int)(puVar16 + 5)],(size_t)puVar13);
        pcVar11 = local_50;
        auStack_b4[(int)(puVar16 + 5)] =
             auStack_b4[(int)(puVar16 + 5)] + (local_78 - *(int *)(local_50 + 0x38));
      }
      FUN_004770f0((int)pcVar11,(int)(puVar16 + ((int)local_3c - (uint)(byte)pcVar11[1])),
                   (size_t)puVar13,(int *)&local_38);
      puVar13 = local_64;
    }
    puVar21 = auStack_b4 + (int)(puVar16 + 7);
    local_38 = FUN_0047d000(local_48,(uint)local_88,(int *)puVar21);
    local_34[0] = local_38;
    puVar15 = puVar16;
    pcVar11 = local_50;
  } while( true );
}


/* FUN_0046f6f0 @ 0046f6f0  kind=lib  attributed-by=lib-island  size=398 */

uint __cdecl FUN_0046f6f0(uint param_1,uint param_2,undefined1 *param_3)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint local_14;
  uint local_10;
  uint local_c;
  undefined1 *local_8;
  
  uVar6 = param_2;
  piVar2 = *(int **)(param_2 + 0x34);
  if (*(short *)(param_2 + 0x10) == 0) {
    FUN_004683f0(0xb,"database corruption at line %d of [%.10s]");
    return 0xb;
  }
  param_2 = FUN_0046bae0(piVar2,(int *)&local_8,&local_10,(undefined4 *)0x0,'\0');
  if (param_2 == 0) {
    uVar3 = *(uint *)(uVar6 + 0x20);
    pbVar11 = param_3 + 4;
    local_14 = uVar3;
    local_c = FUN_00471aa0(uVar6,uVar3);
    local_c = local_c & 0xffff;
    FUN_004c5b30(local_8,0xd);
    FUN_0046e020((int)local_8,1,(int)&local_14,(int)&local_c);
    if ((*(char *)((int)piVar2 + 0x11) != '\0') &&
       (FUN_004870c0(piVar2,local_10,'\x05',*(int *)(param_1 + 0x48),&param_2),
       *(ushort *)(local_8 + 10) < (ushort)local_c)) {
      FUN_004871d0((int)local_8,uVar3,&param_2);
    }
    pbVar8 = (byte *)((uint)(CONCAT11(*(undefined1 *)
                                       (*(int *)(uVar6 + 0x40) + -2 +
                                       (uint)*(ushort *)(uVar6 + 0x10) * 2),
                                      *(undefined1 *)
                                       (*(int *)(uVar6 + 0x40) + -1 +
                                       (uint)*(ushort *)(uVar6 + 0x10) * 2)) &
                            *(ushort *)(uVar6 + 0x12)) + *(int *)(uVar6 + 0x38));
    pbVar10 = pbVar8;
    do {
      pbVar9 = pbVar10;
      pbVar10 = pbVar9 + 1;
      if ((*pbVar9 & 0x80) == 0) break;
    } while (pbVar10 < pbVar8 + 9);
    do {
      bVar1 = *pbVar10;
      *pbVar11 = bVar1;
      pbVar11 = pbVar11 + 1;
      pbVar10 = pbVar10 + 1;
      if ((bVar1 & 0x80) == 0) break;
    } while (pbVar10 < pbVar9 + 10);
    FUN_0047e6f0(param_1,(uint)*(ushort *)(param_1 + 0x10),param_3,(int)pbVar11 - (int)param_3,
                 (undefined1 *)0x0,*(int *)(uVar6 + 0x48),&param_2);
    iVar7 = (uint)*(byte *)(param_1 + 5) + *(int *)(param_1 + 0x38);
    *(char *)(iVar7 + 8) = (char)(local_10 >> 0x18);
    *(char *)(iVar7 + 9) = (char)(local_10 >> 0x10);
    *(char *)(iVar7 + 10) = (char)(local_10 >> 8);
    *(char *)(iVar7 + 0xb) = (char)local_10;
    if ((local_8 != (undefined1 *)0x0) &&
       (puVar4 = *(undefined4 **)(local_8 + 0x44), puVar4 != (undefined4 *)0x0)) {
      puVar5 = (uint *)puVar4[4];
      FUN_004a3a80(puVar4);
      if (*(int *)(puVar5[0x2d] + 0xc) == 0) {
        FUN_00484370(puVar5);
      }
    }
  }
  return param_2;
}


/* FUN_004709a0 @ 004709a0  kind=lib  attributed-by=lib-island  size=53 */

void __cdecl FUN_004709a0(int *param_1,char *param_2,undefined1 *param_3,undefined1 param_4)

{
  int iVar1;
  
  iVar1 = *param_1;
  if ((*(char *)(iVar1 + 0x38) == '\0') && (*param_2 == 'b')) {
    *param_3 = param_4;
    FUN_00498790(iVar1,*(undefined4 **)(param_3 + 0xc));
    *(undefined4 *)(param_3 + 0xc) = 0;
  }
  return;
}


/* FUN_00470ba0 @ 00470ba0  kind=lib  attributed-by=lib-island  size=374 */

uint __cdecl FUN_00470ba0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  
  uVar6 = 0;
  iVar2 = *(int *)(param_1 + 0x14);
  iVar3 = *(int *)(iVar2 + 0x44);
  *(undefined4 *)(iVar3 + 0x10) = param_2;
  *(undefined4 *)(iVar3 + 0x14) = param_3;
  uVar5 = FUN_00469cb0(*(uint **)(param_1 + 0x14));
  if (uVar5 == 100) {
    uVar5 = *(uint *)(*(int *)(**(int **)(iVar2 + 0x40) + 0x58) + *(int *)(param_1 + 0xc) * 4);
    if (0xb < uVar5) {
      *(undefined4 *)(param_1 + 8) =
           *(undefined4 *)(*(int *)(**(int **)(iVar2 + 0x40) + 0x5c) + *(int *)(param_1 + 0xc) * 4);
      *(uint *)(param_1 + 4) = uVar5 - 0xc >> 1;
      puVar4 = *(undefined4 **)**(undefined4 **)(iVar2 + 0x40);
      *(undefined4 **)(param_1 + 0x10) = puVar4;
      FUN_0048fbc0((undefined4 *)*puVar4);
      iVar2 = *(int *)(param_1 + 0x10);
      FUN_00466dd0(*(int *)(iVar2 + 0x14));
      *(undefined4 *)(iVar2 + 0x14) = 0;
      *(undefined1 *)(iVar2 + 0x5c) = 1;
      iVar2 = **(int **)(param_1 + 0x10);
      if (*(char *)(iVar2 + 9) != '\0') {
        piVar1 = (int *)(iVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          iVar3 = *(int *)(*(int *)(iVar2 + 4) + 0x38);
          if (iVar3 != 0) {
            (*DAT_00582b20)(iVar3);
          }
          *(undefined1 *)(iVar2 + 10) = 0;
        }
      }
      *param_4 = 0;
      return 0;
    }
    uVar6 = FUN_004a02d0(*(int *)(param_1 + 0x18),(byte *)"cannot open value of type %s");
    uVar5 = 1;
    FUN_0046aa30(*(int **)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if (*(int **)(param_1 + 0x14) == (int *)0x0) {
    *param_4 = uVar6;
    return uVar5;
  }
  uVar5 = FUN_0046aa30(*(int **)(param_1 + 0x14));
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (uVar5 != 0) {
    FUN_004687f0(*(int *)(param_1 + 0x18));
    uVar6 = FUN_004a02d0(*(int *)(param_1 + 0x18),&DAT_0056de50);
    *param_4 = uVar6;
    return uVar5;
  }
  uVar6 = FUN_004a02d0(*(int *)(param_1 + 0x18),(byte *)"no such rowid: %lld");
  *param_4 = uVar6;
  return 1;
}


/* FUN_00470d20 @ 00470d20  kind=lib  attributed-by=lib-island  size=595 */

char * __cdecl FUN_00470d20(undefined4 *param_1,undefined4 *param_2,byte param_3)

{
  int *piVar1;
  uint *puVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  char *local_18;
  char *local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  char *local_8;
  
  piVar1 = (int *)param_1[1];
  if (*(char *)((int)piVar1 + 0x11) == '\0') {
    pcVar4 = (char *)FUN_0046bae0(piVar1,(int *)&local_8,(uint *)&local_c,(undefined4 *)0x1,'\0');
    pcVar3 = local_8;
    puVar8 = local_c;
    if (pcVar4 != (char *)0x0) {
      return pcVar4;
    }
  }
  else {
    for (iVar7 = piVar1[2]; iVar7 != 0; iVar7 = *(int *)(iVar7 + 8)) {
      FUN_00466dd0(*(int *)(iVar7 + 0x14));
      *(undefined4 *)(iVar7 + 0x14) = 0;
    }
    FUN_0048fe70(param_1,4,&local_c);
    local_8 = (char *)((int)local_c - 1);
    puVar8 = local_c;
    while( true ) {
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      if (puVar8 < (undefined4 *)0x2) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        uVar5 = (uint)piVar1[9] / 5 + 1;
        iVar7 = ((uint)local_8 / uVar5) * uVar5;
        puVar6 = (undefined4 *)(iVar7 + 2);
        if (puVar6 == (undefined4 *)(DAT_00582bb8 / (uint)piVar1[8] + 1)) {
          puVar6 = (undefined4 *)(iVar7 + 3);
        }
      }
      if ((puVar8 != puVar6) && (puVar8 != (undefined4 *)(DAT_00582bb8 / (uint)piVar1[8] + 1)))
      break;
      local_8 = local_8 + 1;
    }
    local_8 = (char *)FUN_0046bae0(piVar1,(int *)&local_18,(uint *)&local_10,puVar8,'\x01');
    if (local_8 != (char *)0x0) {
      return local_8;
    }
    if (local_10 == puVar8) {
      local_8 = (char *)0x0;
      pcVar3 = local_18;
    }
    else {
      local_c = (undefined4 *)((uint)local_c & 0xffffff00);
      local_14 = local_8;
      FUN_004880a0((int)local_18);
      pcVar3 = (char *)FUN_004712c0(piVar1,(uint)puVar8,(int *)&local_8,0);
      if (pcVar3 != (char *)0x0) {
        return pcVar3;
      }
      pcVar3 = (char *)FUN_00486f40(piVar1,puVar8,(byte *)&local_c,&local_14);
      if (((char)local_c == '\x01') || ((char)local_c == '\x02')) {
        pcVar3 = (char *)FUN_00493af0();
      }
      pcVar4 = local_8;
      if (pcVar3 != (char *)0x0) {
        FUN_004880a0((int)local_8);
        return pcVar3;
      }
      local_18 = (char *)FUN_00488380(piVar1,local_8,local_c,(uint)local_14,(uint)local_10,0);
      FUN_004880a0((int)pcVar4);
      if (local_18 != (char *)0x0) {
        return local_18;
      }
      pcVar4 = (char *)FUN_004712c0(piVar1,(uint)puVar8,(int *)&local_8,0);
      pcVar3 = local_8;
      if (pcVar4 != (char *)0x0) {
        return pcVar4;
      }
      local_8 = (char *)FUN_004a2c80(*(undefined4 **)(local_8 + 0x44));
      if (local_8 != (char *)0x0) {
        FUN_004880a0((int)pcVar3);
        return local_8;
      }
    }
    FUN_004870c0(piVar1,(uint)puVar8,'\x01',0,(uint *)&local_8);
    pcVar4 = local_8;
    if ((local_8 != (char *)0x0) ||
       (pcVar4 = (char *)FUN_00492040(param_1,4,puVar8), pcVar4 != (char *)0x0)) {
      FUN_004880a0((int)pcVar3);
      return pcVar4;
    }
  }
  uVar5 = 10;
  if ((param_3 & 1) != 0) {
    uVar5 = 0xd;
  }
  FUN_004c5b30(pcVar3,uVar5);
  puVar6 = *(undefined4 **)(pcVar3 + 0x44);
  if (puVar6 != (undefined4 *)0x0) {
    puVar2 = (uint *)puVar6[4];
    FUN_004a3a80(puVar6);
    if (*(int *)(puVar2[0x2d] + 0xc) == 0) {
      FUN_00484370(puVar2);
    }
  }
  *param_2 = puVar8;
  return (char *)0x0;
}


/* FUN_00470f80 @ 00470f80  kind=lib  attributed-by=lib-island  size=116 */

undefined4 __cdecl FUN_00470f80(int param_1,int param_2,int param_3,int param_4,int *param_5)

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


/* FUN_00471000 @ 00471000  kind=lib  attributed-by=lib-island  size=501 */

uint __cdecl FUN_00471000(undefined4 *param_1,char *param_2,uint *param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  char *local_c;
  uint local_8;
  
  piVar1 = (int *)param_1[1];
  if (piVar1[2] != 0) {
    return 0x106;
  }
  uVar3 = FUN_004a14c0(*piVar1,(uint)param_2,(int *)&local_c,0);
  if (uVar3 == 0) {
    puVar2 = *(undefined1 **)(local_c + 8);
    *(undefined4 *)(puVar2 + 0x38) = *(undefined4 *)(local_c + 4);
    *(char **)(puVar2 + 0x44) = local_c;
    *(int **)(puVar2 + 0x34) = piVar1;
    *(char **)(puVar2 + 0x48) = param_2;
    puVar2[5] = (param_2 != (char *)0x1) - 1U & 100;
    uVar3 = FUN_0048eff0(param_1,(uint)param_2,(int *)0x0);
    local_8 = uVar3;
    if (uVar3 != 0) {
      FUN_004880a0((int)puVar2);
      return uVar3;
    }
    *param_3 = 0;
    if (param_2 < (char *)0x2) {
      FUN_004c5b30(puVar2,9);
      FUN_004880a0((int)puVar2);
      uVar3 = 0;
    }
    else {
      if (*(char *)((int)piVar1 + 0x11) == '\0') {
        FUN_0047bd90(puVar2,&local_8);
        FUN_004880a0((int)puVar2);
        return local_8;
      }
      FUN_0048fe70(param_1,4,&local_c);
      pcVar5 = local_c;
      if (param_2 == local_c) {
        FUN_0047bd90(puVar2,&local_8);
        FUN_004880a0((int)puVar2);
        if (local_8 != 0) {
          return local_8;
        }
LAB_00471182:
        uVar3 = DAT_00582bb8 / (uint)piVar1[8];
        do {
          do {
            pcVar5 = pcVar5 + -1;
          } while (pcVar5 == (char *)(uVar3 + 1));
          pcVar4 = (char *)FUN_00487070((int)piVar1,(uint)pcVar5);
        } while (pcVar4 == pcVar5);
        uVar3 = FUN_00492040(param_1,4,pcVar5);
        return uVar3;
      }
      FUN_004880a0((int)puVar2);
      uVar3 = FUN_004712c0(piVar1,(uint)pcVar5,(int *)&local_c,0);
      if (uVar3 == 0) {
        uVar3 = FUN_004a1ce0((undefined4 *)*piVar1,*(undefined4 **)(local_c + 0x44),(int)param_2,0);
        local_8 = uVar3;
        if (uVar3 == 0) {
          *(char **)(local_c + 0x48) = param_2;
          uVar3 = FUN_0048b310(local_c);
        }
        FUN_004880a0((int)local_c);
        if (uVar3 != 0) {
          return uVar3;
        }
        local_c = (char *)0x0;
        local_8 = FUN_004712c0(piVar1,(uint)pcVar5,(int *)&local_c,0);
        pcVar4 = local_c;
        FUN_0047bd90(local_c,&local_8);
        FUN_004880a0((int)pcVar4);
        uVar3 = local_8;
        if (local_8 == 0) {
          *param_3 = (uint)pcVar5;
          goto LAB_00471182;
        }
      }
    }
  }
  return uVar3;
}


/* FUN_00471200 @ 00471200  kind=lib  attributed-by=lib-island  size=189 */

void __cdecl FUN_00471200(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint *puVar4;
  
  iVar2 = param_1[1];
  FUN_0048e9a0(*(int *)(iVar2 + 0x3c));
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
      FUN_00472880((int)param_1);
      piVar1 = (int *)(iVar2 + 0x28);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        *(undefined1 *)(iVar2 + 0x13) = 0;
      }
    }
  }
  *(undefined1 *)(param_1 + 2) = 0;
  if ((*(char *)(iVar2 + 0x13) == '\0') && (*(int *)(iVar2 + 0xc) != 0)) {
    puVar3 = *(undefined4 **)(*(int *)(iVar2 + 0xc) + 0x44);
    if (puVar3 != (undefined4 *)0x0) {
      puVar4 = (uint *)puVar3[4];
      FUN_004a3a80(puVar3);
      if (*(int *)(puVar4[0x2d] + 0xc) == 0) {
        FUN_00484370(puVar4);
      }
    }
    *(undefined4 *)(iVar2 + 0xc) = 0;
  }
  return;
}


/* FUN_004712c0 @ 004712c0  kind=lib  attributed-by=lib-island  size=81 */

int __cdecl FUN_004712c0(int *param_1,uint param_2,int *param_3,int param_4)

{
  int iVar1;
  int local_8;
  
  iVar1 = FUN_004a14c0(*param_1,param_2,&local_8,param_4);
  if (iVar1 == 0) {
    iVar1 = *(int *)(local_8 + 8);
    *(undefined4 *)(iVar1 + 0x38) = *(undefined4 *)(local_8 + 4);
    *(byte *)(iVar1 + 5) = (param_2 != 1) - 1U & 100;
    *(int *)(iVar1 + 0x44) = local_8;
    *(int **)(iVar1 + 0x34) = param_1;
    *(uint *)(iVar1 + 0x48) = param_2;
    *param_3 = iVar1;
    iVar1 = 0;
  }
  return iVar1;
}


/* FUN_00471320 @ 00471320  kind=lib  attributed-by=lib-island  size=547 */

undefined4 __cdecl FUN_00471320(char *param_1)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  ushort uVar8;
  ushort uVar9;
  uint uVar10;
  byte *pbVar11;
  int iVar12;
  
  if (*param_1 == '\0') {
    bVar2 = param_1[5];
    iVar4 = *(int *)(param_1 + 0x38);
    iVar12 = *(int *)(param_1 + 0x34);
    pbVar11 = (byte *)((uint)bVar2 + iVar4);
    iVar6 = FUN_00476810((int)param_1,(uint)*pbVar11);
    if (iVar6 != 0) {
      FUN_004683f0(0xb,"database corruption at line %d of [%.10s]");
      return 0xb;
    }
    *(short *)(param_1 + 0x12) = *(short *)(iVar12 + 0x20) + -1;
    uVar8 = (3 - (ushort)(byte)param_1[3]) * 4 + (ushort)bVar2;
    param_1[1] = '\0';
    iVar6 = *(int *)(iVar12 + 0x24);
    *(ushort *)(param_1 + 0xc) = uVar8;
    *(int *)(param_1 + 0x3c) = iVar6 + iVar4;
    *(uint *)(param_1 + 0x40) = (uint)uVar8 + iVar4;
    bVar2 = pbVar11[5];
    bVar3 = pbVar11[6];
    uVar9 = CONCAT11(pbVar11[3],pbVar11[4]);
    *(ushort *)(param_1 + 0x10) = uVar9;
    if ((*(int *)(iVar12 + 0x20) - 8U) / 6 < (uint)uVar9) {
      FUN_004683f0(0xb,"database corruption at line %d of [%.10s]");
      return 0xb;
    }
    uVar1 = (uint)uVar8 + (uint)uVar9 * 2;
    iVar12 = (uint)pbVar11[7] + (CONCAT11(bVar2,bVar3) - 1 & 0xffff) + 1;
    uVar8 = CONCAT11(pbVar11[1],pbVar11[2]);
    uVar5 = (uint)uVar8;
    while (uVar8 != 0) {
      if ((uVar5 < uVar1) || (iVar6 + -4 < (int)uVar5)) {
        FUN_004683f0(0xb,"database corruption at line %d of [%.10s]");
        return 0xb;
      }
      uVar8 = CONCAT11(*(undefined1 *)(uVar5 + iVar4),*(undefined1 *)(uVar5 + 1 + iVar4));
      uVar10 = (uint)CONCAT11(*(undefined1 *)(uVar5 + 2 + iVar4),*(undefined1 *)(uVar5 + 3 + iVar4))
      ;
      if (((uVar8 != 0) && ((uint)uVar8 <= uVar5 + 3 + uVar10)) || (iVar6 < (int)(uVar5 + uVar10)))
      {
        FUN_004683f0(0xb,"database corruption at line %d of [%.10s]");
        return 0xb;
      }
      iVar12 = iVar12 + uVar10;
      uVar5 = (uint)uVar8;
    }
    if (iVar6 < iVar12) {
      uVar7 = FUN_00493af0();
      return uVar7;
    }
    *(short *)(param_1 + 0xe) = (short)iVar12 - (short)uVar1;
    *param_1 = '\x01';
  }
  return 0;
}


/* FUN_004715a0 @ 004715a0  kind=lib  attributed-by=lib-island  size=262 */

void __cdecl
FUN_004715a0(int *param_1,byte *param_2,uint param_3,int param_4,int param_5,uint *param_6)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int local_a0 [38];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  piVar4 = (int *)0x0;
  if (param_2 == (byte *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar2 = (int *)param_1[4];
    uVar1 = (uint)*(ushort *)((int)piVar2 + 6) * 0x28 + 0x40;
    if (uVar1 < 0x97) {
      piVar3 = local_a0;
      piVar4 = (int *)0x0;
    }
    else {
      piVar3 = FUN_00494b90(*piVar2,uVar1);
      piVar4 = piVar3;
      if (piVar3 == (int *)0x0) {
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
    piVar3[4] = (int)(piVar3 + 6);
    *piVar3 = (int)piVar2;
    *(short *)(piVar3 + 1) = *(short *)((int)piVar2 + 6) + 1;
    FUN_004b8560((undefined4 *)param_1[4],param_3,param_2,(uint)piVar3);
  }
  FUN_004908e0(param_1,piVar3,param_3,param_4,param_5,param_6);
  if (piVar4 != (int *)0x0) {
    FUN_00494b00(*(int *)param_1[4],piVar4);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004716b0 @ 004716b0  kind=lib  attributed-by=lib-island  size=95 */

int __cdecl FUN_004716b0(int *param_1,int param_2)

{
  int iVar1;
  int local_8;
  
  local_8 = 0;
  FUN_004a37e0(*(int **)(*param_1 + 0xb4),param_2,0,&local_8);
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


/* FUN_00471710 @ 00471710  kind=lib  attributed-by=lib-island  size=310 */

void __cdecl FUN_00471710(int param_1,uint param_2,uint *param_3)

{
  byte bVar1;
  uint *puVar2;
  ushort uVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint *puVar8;
  ushort uVar9;
  short sVar10;
  
  puVar2 = param_3;
  param_3[2] = param_2;
  puVar4 = (uint *)(uint)*(byte *)(param_1 + 6);
  uVar9 = (ushort)*(byte *)(param_1 + 6);
  if (*(char *)(param_1 + 2) == '\0') {
    param_3[3] = 0;
    bVar1 = *(byte *)(uVar9 + param_2);
    if (bVar1 < 0x80) {
      uVar3 = 1;
      puVar8 = (uint *)(uint)bVar1;
    }
    else {
      param_3 = puVar4;
      uVar5 = FUN_0049d440((byte *)(uVar9 + param_2),(uint *)&param_3);
      uVar3 = (ushort)uVar5 & 0xff;
      puVar8 = param_3;
    }
    *puVar2 = (uint)puVar8;
    puVar2[1] = 0;
  }
  else {
    if (*(char *)(param_1 + 4) == '\0') {
      puVar8 = (uint *)0x0;
      param_3 = puVar4;
    }
    else {
      bVar1 = *(byte *)(uVar9 + param_2);
      if (bVar1 < 0x80) {
        uVar9 = uVar9 + 1;
        puVar8 = (uint *)(uint)bVar1;
        param_3 = puVar4;
      }
      else {
        param_3 = puVar4;
        uVar5 = FUN_0049d440((byte *)(uVar9 + param_2),(uint *)&param_3);
        uVar9 = uVar9 + ((ushort)uVar5 & 0xff);
        puVar8 = param_3;
      }
    }
    uVar6 = FUN_0049d270((byte *)(uVar9 + param_2),puVar2);
    uVar3 = (ushort)uVar6;
    puVar2[3] = (uint)puVar8;
  }
  sVar10 = uVar9 + (uVar3 & 0xff);
  puVar2[4] = (uint)puVar8;
  *(short *)(puVar2 + 5) = sVar10;
  if (puVar8 <= (uint *)(uint)*(ushort *)(param_1 + 8)) {
    uVar9 = sVar10 + (short)puVar8;
    *(ushort *)((int)puVar2 + 0x1a) = uVar9;
    if (uVar9 < 4) {
      *(undefined2 *)((int)puVar2 + 0x1a) = 4;
    }
    *(short *)((int)puVar2 + 0x16) = (short)puVar8;
    *(undefined2 *)(puVar2 + 6) = 0;
    return;
  }
  uVar9 = *(ushort *)(param_1 + 10);
  iVar7 = ((int)puVar8 - (uint)uVar9) % (*(int *)(*(int *)(param_1 + 0x34) + 0x24) - 4U) +
          (uint)uVar9;
  if ((int)(uint)*(ushort *)(param_1 + 8) < iVar7) {
    *(ushort *)((int)puVar2 + 0x16) = uVar9;
  }
  else {
    *(short *)((int)puVar2 + 0x16) = (short)iVar7;
  }
  sVar10 = *(short *)((int)puVar2 + 0x16) + sVar10;
  *(short *)(puVar2 + 6) = sVar10;
  *(short *)((int)puVar2 + 0x1a) = sVar10 + 4;
  return;
}


/* FUN_00471850 @ 00471850  kind=lib  attributed-by=lib-island  size=74 */

int __cdecl FUN_00471850(int *param_1)

{
  int iVar1;
  
  if (*(char *)((int)param_1 + 0x5b) == '\x03') {
    return param_1[0x15];
  }
  *(undefined1 *)((int)param_1 + 0x5b) = 0;
  iVar1 = FUN_004715a0(param_1,(byte *)param_1[0x14],param_1[0x12],param_1[0x13],0,
                       (uint *)(param_1 + 0x15));
  if (iVar1 == 0) {
    FUN_00466dd0(param_1[0x14]);
    param_1[0x14] = 0;
  }
  return iVar1;
}


/* FUN_004718a0 @ 004718a0  kind=lib  attributed-by=lib-island  size=100 */

uint __cdecl FUN_004718a0(int param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 *_Dst;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x3c) == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x2c);
    _Dst = (undefined4 *)FUN_004a0350(0x200);
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
    uVar2 = FUN_0048ea60(*(uint **)(param_1 + 0x3c),param_2);
    return uVar2;
  }
  return 0;
}


/* FUN_00471910 @ 00471910  kind=lib  attributed-by=lib-island  size=215 */

void __cdecl FUN_00471910(int param_1,undefined4 param_2,char *param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 200) != 0) {
    puVar1 = FUN_00494db0(param_1,param_3);
    if (puVar1 == (undefined4 *)0x0) {
      return;
    }
    (**(code **)(param_1 + 200))(*(undefined4 *)(param_1 + 0xd0),param_1,param_2,puVar1);
    FUN_00494b00(param_1,puVar1);
  }
  if (*(int *)(param_1 + 0xcc) != 0) {
    piVar2 = FUN_00494b90(param_1,0x28);
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
      FUN_004b79e0(piVar2,param_3,0xffffffff,'\x01',(undefined *)0x0);
    }
    iVar3 = FUN_004ae680(piVar2,2);
    if (iVar3 != 0) {
      (**(code **)(param_1 + 0xcc))
                (*(undefined4 *)(param_1 + 0xd0),param_1,
                 *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x10) + 0xc) + 0x4d),iVar3);
    }
    FUN_004ae2b0(piVar2);
  }
  return;
}


/* FUN_00471aa0 @ 00471aa0  kind=lib  attributed-by=lib-island  size=200 */

uint __cdecl FUN_00471aa0(uint param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  
  uVar3 = param_1;
  pbVar5 = (byte *)((uint)*(byte *)(param_1 + 6) + param_2);
  if (*(char *)(param_1 + 2) == '\0') {
    if (*pbVar5 < 0x80) {
      param_1 = (uint)*pbVar5;
      uVar4 = 1;
    }
    else {
      uVar4 = FUN_0049d440(pbVar5,&param_1);
      uVar4 = uVar4 & 0xff;
    }
    pbVar5 = pbVar5 + uVar4;
  }
  else {
    if (*(char *)(param_1 + 4) == '\0') {
      param_1 = 0;
    }
    else if (*pbVar5 < 0x80) {
      param_1 = (uint)*pbVar5;
      pbVar5 = pbVar5 + 1;
    }
    else {
      uVar4 = FUN_0049d440(pbVar5,&param_1);
      pbVar5 = pbVar5 + (uVar4 & 0xff);
    }
    pbVar1 = pbVar5 + 9;
    do {
      bVar2 = *pbVar5;
      pbVar5 = pbVar5 + 1;
      if ((bVar2 & 0x80) == 0) break;
    } while (pbVar5 < pbVar1);
  }
  if (*(ushort *)(uVar3 + 8) < param_1) {
    uVar6 = (uint)*(ushort *)(uVar3 + 10);
    uVar4 = (param_1 - uVar6) % (*(int *)(*(int *)(uVar3 + 0x34) + 0x24) - 4U) + uVar6;
    if (*(ushort *)(uVar3 + 8) < uVar4) {
      uVar4 = uVar6;
    }
    param_1 = uVar4 + 4;
  }
  pbVar5 = pbVar5 + (param_1 - param_2);
  if (pbVar5 < (byte *)0x4) {
    pbVar5 = (byte *)0x4;
  }
  return (uint)pbVar5 & 0xffff;
}


/* FUN_00471b70 @ 00471b70  kind=lib  attributed-by=lib-island  size=167 */

undefined4 __cdecl FUN_00471b70(int *param_1,byte *param_2)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  
  bVar1 = *param_2;
  if (((char)bVar1 < '0') || ('2' < (char)bVar1)) {
    iVar3 = FUN_004bcc60(param_2,&DAT_0056ffa0);
    if (iVar3 == 0) {
      uVar4 = 1;
    }
    else {
      iVar3 = FUN_004bcc60(param_2,(byte *)"memory");
      uVar4 = (-(uint)(iVar3 != 0) & 0xfffffffe) + 2;
    }
  }
  else {
    uVar4 = (int)(char)bVar1 - 0x30;
  }
  iVar3 = *param_1;
  if (*(byte *)(iVar3 + 0x37) != uVar4) {
    piVar2 = *(int **)(*(int *)(iVar3 + 0x10) + 0x14);
    if (piVar2 != (int *)0x0) {
      if ((*(char *)(iVar3 + 0x36) == '\0') || ((char)piVar2[2] != '\0')) {
        FUN_004962b0(param_1,(byte *)"temporary storage cannot be changed from within a transaction"
                    );
        return 1;
      }
      FUN_0048f070(piVar2);
      *(undefined4 *)(*(int *)(iVar3 + 0x10) + 0x14) = 0;
      FUN_004a6940(iVar3);
    }
    *(char *)(iVar3 + 0x37) = (char)uVar4;
  }
  return 0;
}


/* FUN_00471c20 @ 00471c20  kind=lib  attributed-by=lib-island  size=105 */

void __cdecl FUN_00471c20(int param_1,char *param_2,byte *param_3)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    if (*(int *)(param_1 + 0x28) != 0) {
      FUN_004aa7b0((int *)(param_1 + 0x1c),"\n",1);
    }
    if (param_2 != (char *)0x0) {
      FUN_004aa7b0((int *)(param_1 + 0x1c),param_2,0xffffffff);
    }
    FUN_004ad370((int *)(param_1 + 0x1c),1,param_3,(double *)&stack0x00000010);
    if (*(char *)(param_1 + 0x34) != '\0') {
      *(undefined4 *)(param_1 + 0x18) = 1;
    }
  }
  return;
}


/* FUN_00471c90 @ 00471c90  kind=lib  attributed-by=lib-island  size=230 */

undefined4 __cdecl FUN_00471c90(undefined4 *param_1,int *param_2)

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
          while ((bVar2 != 0 && ((&DAT_00569620)[bVar2] == (&DAT_00569620)[*pbVar5]))) {
            pbVar1 = pbVar3 + 1;
            pbVar3 = pbVar3 + 1;
            pbVar5 = pbVar5 + 1;
            bVar2 = *pbVar1;
          }
          if ((&DAT_00569620)[*pbVar3] == (&DAT_00569620)[*pbVar5]) {
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


/* FUN_00471d80 @ 00471d80  kind=lib  attributed-by=lib-island  size=511 */

void __cdecl FUN_00471d80(int *param_1,int param_2,undefined4 *param_3,int param_4,char *param_5)

{
  undefined1 *puVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  byte bVar7;
  char *pcVar8;
  undefined4 *local_10;
  int local_c;
  int local_8;
  
  if (0 < param_4) {
    while (iVar3 = param_4 + -1, param_1[4] != 0) {
      if ((int)param_3 < 1) {
        FUN_00471c20((int)param_1,param_5,
                     (byte *)"%d of %d pages missing from overflow list starting at %d");
        return;
      }
      iVar4 = FUN_00472010((int)param_1,(uint)param_3,param_5);
      if (iVar4 != 0) {
        return;
      }
      iVar4 = FUN_004a14c0(param_1[1],(uint)param_3,(int *)&local_10,0);
      if (iVar4 != 0) {
        FUN_00471c20((int)param_1,param_5,(byte *)"failed to get page %d");
        return;
      }
      puVar1 = (undefined1 *)local_10[1];
      if (param_2 == 0) {
        param_4 = iVar3;
        if ((*(char *)(*param_1 + 0x11) != '\0') && (0 < iVar3)) {
          bVar7 = 4;
          pcVar8 = param_5;
          puVar6 = (undefined4 *)FUN_0049c920(puVar1);
          FUN_00471f80(param_1,puVar6,bVar7,(int)param_3,pcVar8);
        }
      }
      else {
        local_c = CONCAT31(CONCAT21(CONCAT11(puVar1[4],puVar1[5]),puVar1[6]),puVar1[7]);
        if (*(char *)(*param_1 + 0x11) != '\0') {
          FUN_00471f80(param_1,param_3,2,0,param_5);
        }
        if (((int)(*(int *)(*param_1 + 0x24) + (*(int *)(*param_1 + 0x24) >> 0x1f & 3U)) >> 2) + -2
            < local_c) {
          FUN_00471c20((int)param_1,param_5,(byte *)"freelist leaf count too big on page %d");
          param_4 = param_4 + -2;
        }
        else {
          if (0 < local_c) {
            puVar5 = puVar1 + 10;
            local_8 = local_c;
            do {
              puVar6 = (undefined4 *)
                       CONCAT31(CONCAT21(CONCAT11(puVar5[-2],puVar5[-1]),*puVar5),puVar5[1]);
              if (*(char *)(*param_1 + 0x11) != '\0') {
                FUN_00471f80(param_1,puVar6,2,0,param_5);
              }
              FUN_00472010((int)param_1,(uint)puVar6,param_5);
              puVar5 = puVar5 + 4;
              local_8 = local_8 + -1;
            } while (local_8 != 0);
            local_8 = 0;
          }
          param_4 = iVar3 - local_c;
        }
      }
      param_3 = (undefined4 *)CONCAT31(CONCAT21(CONCAT11(*puVar1,puVar1[1]),puVar1[2]),puVar1[3]);
      puVar2 = (uint *)local_10[4];
      FUN_004a3a80(local_10);
      if (*(int *)(puVar2[0x2d] + 0xc) == 0) {
        FUN_00484370(puVar2);
      }
      if (param_4 < 1) {
        return;
      }
    }
  }
  return;
}


/* FUN_00471f80 @ 00471f80  kind=lib  attributed-by=lib-island  size=136 */

void __cdecl
FUN_00471f80(undefined4 *param_1,undefined4 *param_2,byte param_3,int param_4,char *param_5)

{
  int iVar1;
  int local_c;
  byte local_5;
  
  iVar1 = FUN_00486f40((int *)*param_1,param_2,&local_5,&local_c);
  if (iVar1 != 0) {
    if ((iVar1 == 7) || (iVar1 == 0xc0a)) {
      param_1[6] = 1;
    }
    FUN_00471c20((int)param_1,param_5,(byte *)"Failed to read ptrmap key=%d");
    return;
  }
  if ((local_5 != param_3) || (local_c != param_4)) {
    FUN_00471c20((int)param_1,param_5,
                 (byte *)"Bad ptr map entry key=%d expected=(%d,%d) got=(%d,%d)");
  }
  return;
}


/* FUN_00472010 @ 00472010  kind=lib  attributed-by=lib-island  size=121 */

undefined4 __cdecl FUN_00472010(int param_1,uint param_2,char *param_3)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  
  if (param_2 == 0) {
    return 1;
  }
  if (*(uint *)(param_1 + 0xc) < param_2) {
    FUN_00471c20(param_1,param_3,(byte *)"invalid page number %d");
    return 1;
  }
  pbVar3 = (byte *)((param_2 >> 3) + *(int *)(param_1 + 8));
  bVar2 = (byte)param_2 & 7;
  bVar1 = *pbVar3;
  if ((bVar1 & (byte)(1 << bVar2)) != 0) {
    FUN_00471c20(param_1,param_3,(byte *)"2nd reference to page %d");
    return 1;
  }
  *pbVar3 = '\x01' << bVar2 | bVar1;
  return 0;
}


/* FUN_00472090 @ 00472090  kind=lib  attributed-by=lib-island  size=320 */

void __cdecl FUN_00472090(int *param_1,uint param_2,char *param_3,uint *param_4,uint *param_5)

{
  short *psVar1;
  byte bVar2;
  int *piVar3;
  ushort uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  char *pcVar10;
  size_t _Size;
  uint uVar11;
  undefined1 *puVar12;
  char *pcVar13;
  uint local_c0;
  int local_bc;
  undefined4 *local_b4;
  ushort local_aa;
  ushort local_a8;
  uint *local_a0;
  int local_9c;
  uint local_98;
  uint local_94 [3];
  char *local_88;
  uint *local_84;
  uint local_80 [3];
  int *local_74;
  undefined4 *local_70;
  char local_6c [100];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_a0 = param_4;
  local_84 = param_5;
  local_94[0] = 0;
  local_94[1] = 0;
  local_80[0] = 0;
  local_80[1] = 0;
  FUN_00466a80(100,local_6c,(byte *)"Page %d: ");
  local_74 = (int *)*param_1;
  local_94[2] = local_74[9];
  if ((param_2 == 0) || (iVar5 = FUN_00472010((int)param_1,param_2,param_3), iVar5 != 0)) {
LAB_0047285e:
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar5 = FUN_004a14c0(*local_74,param_2,(int *)&local_70,0);
  if (iVar5 != 0) {
    FUN_00471c20((int)param_1,local_6c,(byte *)"unable to get the page. error code=%d");
    goto LAB_0047285e;
  }
  pcVar10 = (char *)local_70[2];
  *(undefined4 *)(pcVar10 + 0x38) = local_70[1];
  *(int **)(pcVar10 + 0x34) = local_74;
  *(undefined4 **)(pcVar10 + 0x44) = local_70;
  *(uint *)(pcVar10 + 0x48) = param_2;
  pcVar10[5] = (param_2 != 1) - 1U & 100;
  *pcVar10 = '\0';
  local_88 = pcVar10;
  iVar5 = FUN_00471320(pcVar10);
  if (iVar5 != 0) {
    FUN_00471c20((int)param_1,local_6c,(byte *)"btreeInitPage() returns error code %d");
    FUN_004880a0((int)pcVar10);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  local_9c = 0;
  local_80[2] = 0;
  if (*(short *)(pcVar10 + 0x10) != 0) {
    do {
      uVar7 = local_80[2];
      if (param_1[4] == 0) break;
      FUN_00466a80(100,local_6c,(byte *)"On tree page %d cell %d: ");
      puVar12 = (undefined1 *)
                ((uint)(CONCAT11(*(undefined1 *)(*(int *)(pcVar10 + 0x40) + local_80[2] * 2),
                                 *(undefined1 *)(*(int *)(pcVar10 + 0x40) + 1 + uVar7 * 2)) &
                       *(ushort *)(pcVar10 + 0x12)) + *(int *)(pcVar10 + 0x38));
      FUN_00471710((int)pcVar10,(uint)puVar12,&local_c0);
      local_70 = local_b4;
      if (pcVar10[2] == '\0') {
        puVar9 = (undefined4 *)((int)local_b4 + local_c0);
      }
      else if (local_80[2] == 0) {
        local_80[1] = local_bc;
        local_80[0] = local_c0;
        local_94[1] = local_bc;
        local_94[0] = local_c0;
        puVar9 = local_b4;
      }
      else {
        if ((local_bc <= (int)local_80[1]) &&
           ((local_bc < (int)local_80[1] || (local_c0 <= local_80[0])))) {
          FUN_00471c20((int)param_1,local_6c,(byte *)"Rowid %lld out of order (previous was %lld)");
        }
        local_80[1] = local_bc;
        local_80[0] = local_c0;
        puVar9 = local_70;
      }
      pcVar13 = pcVar10;
      if (((undefined4 *)(uint)local_aa < puVar9) &&
         (local_70 = (undefined4 *)(puVar12 + local_a8), pcVar13 = local_88,
         local_70 <= (undefined4 *)(*(int *)(pcVar10 + 0x38) + local_74[9]))) {
        local_98 = (uint)((int)puVar9 + ((local_94[2] + -5) - (int)(uint)local_aa)) /
                   (local_94[2] - 4);
        local_70 = (undefined4 *)FUN_0049c920((undefined1 *)local_70);
        if (*(char *)((int)local_74 + 0x11) != '\0') {
          FUN_00471f80(param_1,local_70,3,param_2,local_6c);
        }
        FUN_00471d80(param_1,0,local_70,local_98,local_6c);
      }
      pcVar10 = pcVar13;
      uVar7 = local_80[2];
      iVar5 = local_9c;
      if (pcVar13[3] == '\0') {
        puVar9 = (undefined4 *)
                 CONCAT31(CONCAT21(CONCAT11(*puVar12,puVar12[1]),puVar12[2]),puVar12[3]);
        if (*(char *)((int)local_74 + 0x11) != '\0') {
          FUN_00471f80(param_1,puVar9,5,param_2,local_6c);
        }
        uVar7 = local_80[2];
        puVar6 = local_80;
        if (local_80[2] == 0) {
          puVar6 = (uint *)0x0;
        }
        iVar5 = FUN_00472090(param_1,(uint)puVar9,local_6c,local_94,puVar6);
        pcVar10 = local_88;
        if ((0 < (int)uVar7) && (iVar5 != local_9c)) {
          FUN_00471c20((int)param_1,local_6c,(byte *)"Child page depth differs");
          pcVar10 = local_88;
        }
      }
      local_9c = iVar5;
      local_80[2] = uVar7 + 1;
    } while ((int)local_80[2] < (int)(uint)*(ushort *)(pcVar10 + 0x10));
  }
  if (pcVar10[3] == '\0') {
    iVar5 = (uint)(byte)pcVar10[5] + *(int *)(pcVar10 + 0x38);
    puVar9 = (undefined4 *)
             CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar5 + 8),*(undefined1 *)(iVar5 + 9)),
                               *(undefined1 *)(iVar5 + 10)),*(undefined1 *)(iVar5 + 0xb));
    FUN_00466a80(100,local_6c,(byte *)"On page %d at right child: ");
    if (*(char *)((int)local_74 + 0x11) != '\0') {
      FUN_00471f80(param_1,puVar9,5,param_2,local_6c);
    }
    puVar6 = local_80;
    if (*(short *)(pcVar10 + 0x10) == 0) {
      puVar6 = (uint *)0x0;
    }
    FUN_00472090(param_1,(uint)puVar9,local_6c,(uint *)0x0,puVar6);
    if (pcVar10[3] == '\0') goto LAB_00472530;
  }
  puVar6 = local_a0;
  if (pcVar10[2] == '\0') goto LAB_00472530;
  if (local_a0 == (uint *)0x0) {
    if (local_84 == (uint *)0x0) goto LAB_00472530;
    if (((int)local_84[1] < (int)local_94[1]) ||
       (((int)local_84[1] <= (int)local_94[1] && (*local_84 < local_94[0])))) goto LAB_00472530;
    pcVar13 = "Rowid %lld out of order (min less than parent max of %lld)";
  }
  else {
    uVar7 = local_a0[1];
    if (local_84 != (uint *)0x0) {
      if (((int)local_94[1] <= (int)uVar7) &&
         (((int)local_94[1] < (int)uVar7 || (local_94[0] <= *local_a0)))) {
        FUN_00471c20((int)param_1,local_6c,
                     (byte *)"Rowid %lld out of order (min less than parent min of %lld)");
      }
      if (((int)local_84[1] <= (int)local_80[1]) &&
         (((int)local_84[1] < (int)local_80[1] || (*local_84 < local_80[0])))) {
        FUN_00471c20((int)param_1,local_6c,
                     (byte *)"Rowid %lld out of order (max larger than parent max of %lld)");
      }
      *puVar6 = local_80[0];
      puVar6[1] = local_80[1];
      goto LAB_00472530;
    }
    if (((int)local_80[1] < (int)uVar7) ||
       (((int)local_80[1] <= (int)uVar7 && (local_80[0] <= *local_a0)))) goto LAB_00472530;
    pcVar13 = "Rowid %lld out of order (max larger than parent min of %lld)";
  }
  FUN_00471c20((int)param_1,local_6c,(byte *)pcVar13);
LAB_00472530:
  local_84 = *(uint **)(pcVar10 + 0x38);
  local_70 = (undefined4 *)(uint)(byte)pcVar10[5];
  puVar9 = FUN_004868a0(local_74[8]);
  if (puVar9 == (undefined4 *)0x0) {
    param_1[6] = 1;
  }
  else {
    local_74 = (int *)((int)local_84 + (int)local_70);
    _Size = (CONCAT11(*(undefined1 *)((int)local_74 + 5),*(undefined1 *)((int)local_74 + 6)) - 1 &
            0xffff) + 1;
    memset((void *)(_Size + (int)puVar9),0,local_94[2] - _Size);
    memset(puVar9,1,_Size);
    local_98 = (uint)CONCAT11(*(undefined1 *)((int)local_74 + 3),(char)local_74[1]);
    local_a0 = local_70 + (3 - (uint)(byte)local_88[3]);
    local_80[2] = 0;
    if (local_98 != 0) {
      local_70 = (undefined4 *)((int)local_84 + (int)local_a0);
      do {
        uVar11 = (uint)CONCAT11(*(undefined1 *)local_70,*(undefined1 *)((int)local_70 + 1));
        uVar7 = 0x10000;
        if ((int)uVar11 <= (int)(local_94[2] + -4)) {
          uVar7 = FUN_00471aa0((uint)local_88,(int)local_84 + uVar11);
          uVar7 = uVar7 & 0xffff;
        }
        if ((int)((uVar11 - 1) + uVar7) < (int)local_94[2]) {
          for (iVar5 = (uVar11 - 1) + uVar7; (int)uVar11 <= iVar5; iVar5 = iVar5 + -1) {
            *(char *)(iVar5 + (int)puVar9) = *(char *)(iVar5 + (int)puVar9) + '\x01';
          }
        }
        else {
          FUN_00471c20((int)param_1,(char *)0x0,(byte *)"Corruption detected in cell %d on page %d")
          ;
        }
        local_80[2] = local_80[2] + 1;
        local_70 = (undefined4 *)((int)local_70 + 2);
      } while ((int)local_80[2] < (int)local_98);
    }
    pcVar10 = local_88;
    uVar4 = CONCAT11(*(undefined1 *)((int)local_74 + 1),*(undefined1 *)((int)local_74 + 2));
    while (uVar7 = (uint)uVar4, uVar7 != 0) {
      for (iVar5 = (uVar7 - 1) +
                   (uint)CONCAT11(*(undefined1 *)((int)local_84 + 2 + uVar7),
                                  *(undefined1 *)((int)local_84 + 3 + uVar7)); (int)uVar7 <= iVar5;
          iVar5 = iVar5 + -1) {
        *(char *)(iVar5 + (int)puVar9) = *(char *)(iVar5 + (int)puVar9) + '\x01';
      }
      uVar4 = CONCAT11(*(undefined1 *)((int)local_84 + uVar7),
                       *(undefined1 *)((int)local_84 + 1 + uVar7));
    }
    puVar8 = (undefined4 *)0x0;
    iVar5 = 0;
    local_70 = (undefined4 *)0x0;
    if (0 < (int)local_94[2]) {
      do {
        if (*(char *)(iVar5 + (int)puVar9) == '\0') {
          puVar8 = (undefined4 *)((int)puVar8 + 1);
          local_70 = puVar8;
        }
        else if ('\x01' < *(char *)(iVar5 + (int)puVar9)) {
          FUN_00471c20((int)param_1,(char *)0x0,(byte *)"Multiple uses for byte %d of page %d");
          puVar8 = local_70;
          break;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)local_94[2]);
    }
    if (puVar8 != (undefined4 *)(uint)*(byte *)((int)local_74 + 7)) {
      FUN_00471c20((int)param_1,(char *)0x0,
                   (byte *)"Fragmentation of %d bytes reported as %d on page %d");
    }
  }
  FUN_00486af0(puVar9);
  puVar9 = *(undefined4 **)(pcVar10 + 0x44);
  if (puVar9 != (undefined4 *)0x0) {
    psVar1 = (short *)((int)puVar9 + 0x1a);
    *psVar1 = *psVar1 + -1;
    puVar6 = (uint *)puVar9[4];
    if (*psVar1 == 0) {
      *(int *)(puVar9[7] + 0xc) = *(int *)(puVar9[7] + 0xc) + -1;
      if ((*(byte *)(puVar9 + 6) & 2) == 0) {
        iVar5 = puVar9[7];
        if (*(int *)(iVar5 + 0x1c) != 0) {
          if (puVar9[5] == 1) {
            *(undefined4 *)(iVar5 + 0x2c) = 0;
          }
          (*DAT_00582b4c)(*(undefined4 *)(iVar5 + 0x28),*puVar9,0);
        }
      }
      else {
        FUN_00486ed0((int)puVar9);
        piVar3 = (int *)puVar9[7];
        iVar5 = *piVar3;
        puVar9[8] = iVar5;
        if (iVar5 != 0) {
          *(undefined4 **)(iVar5 + 0x24) = puVar9;
        }
        *piVar3 = (int)puVar9;
        if (piVar3[1] == 0) {
          piVar3[1] = (int)puVar9;
        }
        if ((piVar3[2] == 0) && ((*(byte *)(puVar9 + 6) & 4) == 0)) {
          piVar3[2] = (int)puVar9;
        }
      }
    }
    if (*(int *)(puVar6[0x2d] + 0xc) == 0) {
      bVar2 = *(byte *)((int)puVar6 + 0xf);
      if ((bVar2 != 6) && (bVar2 != 0)) {
        if (bVar2 < 2) {
          if ((char)puVar6[1] == '\0') {
            FUN_00484760((int *)puVar6,0);
          }
        }
        else {
          if (DAT_00583e74 != (code *)0x0) {
            (*DAT_00583e74)();
          }
          FUN_004a2510(puVar6);
          if (DAT_00583e78 != (code *)0x0) {
            (*DAT_00583e78)();
            FUN_00485380((int)puVar6);
            __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
            return;
          }
        }
      }
      FUN_00485380((int)puVar6);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00472880 @ 00472880  kind=lib  attributed-by=lib-island  size=251 */

void __cdecl FUN_00472880(int param_1)

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
        if (DAT_00582ac8 == 0) {
          (*DAT_00582aec)(piVar2);
        }
        else {
          if (DAT_00583f40 != 0) {
            (*DAT_00582b18)(DAT_00583f40);
          }
          iVar3 = (*DAT_00582af0._4_4_)(piVar2);
          DAT_00583e18 = DAT_00583e18 - iVar3;
          if (DAT_00583e40 < DAT_00583e18) {
            DAT_00583e40 = DAT_00583e18;
          }
          DAT_00583e3c = DAT_00583e3c + -1;
          if (DAT_00583e64 < DAT_00583e3c) {
            DAT_00583e64 = DAT_00583e3c;
          }
          (*DAT_00582aec)(piVar2);
          if (DAT_00583f40 != 0) {
            (*DAT_00582b20)(DAT_00583f40);
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


/* FUN_00472980 @ 00472980  kind=lib  attributed-by=lib-island  size=484 */

uint __cdecl FUN_00472980(undefined1 *param_1,uint param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  uint *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  uint local_2c [4];
  int local_1c;
  ushort local_16;
  ushort local_14;
  uint local_c;
  undefined4 *local_8;
  
  uVar4 = param_2;
  puVar6 = param_1;
  piVar1 = *(int **)(param_1 + 0x34);
  FUN_00471710((int)param_1,param_2,local_2c);
  if (local_14 != 0) {
    puVar5 = (undefined1 *)(local_14 + uVar4);
    if ((undefined1 *)((uint)*(ushort *)(puVar6 + 0x12) + *(int *)(puVar6 + 0x38)) < puVar5 + 3) {
      FUN_004683f0(0xb,"database corruption at line %d of [%.10s]");
      return 0xb;
    }
    local_c = ((local_1c - (uint)local_16) + -1 + (piVar1[9] - 4U)) / (piVar1[9] - 4U);
    puVar2 = (undefined4 *)CONCAT31(CONCAT21(CONCAT11(*puVar5,puVar5[1]),puVar5[2]),puVar5[3]);
    while (local_c != 0) {
      local_c = local_c - 1;
      local_8 = (undefined4 *)0x0;
      param_1 = (undefined1 *)0x0;
      if ((puVar2 < (undefined4 *)0x2) || ((undefined4 *)piVar1[0xb] < puVar2)) {
        FUN_004683f0(0xb,"database corruption at line %d of [%.10s]");
        return 0xb;
      }
      if (local_c == 0) {
LAB_00472a6c:
        param_1 = (undefined1 *)0x0;
        FUN_004a37e0(*(int **)(*piVar1 + 0xb4),(int)puVar2,0,&param_1);
        if (param_1 == (undefined1 *)0x0) {
          puVar6 = (undefined1 *)0x0;
        }
        else {
          puVar6 = *(undefined1 **)(param_1 + 8);
          *(undefined4 *)(puVar6 + 0x38) = *(undefined4 *)(param_1 + 4);
          *(undefined1 **)(puVar6 + 0x44) = param_1;
          *(int **)(puVar6 + 0x34) = piVar1;
          *(undefined4 **)(puVar6 + 0x48) = puVar2;
          puVar6[5] = (puVar2 != (undefined4 *)0x1) - 1U & 100;
        }
        if (puVar6 != (undefined1 *)0x0) goto LAB_00472ab8;
LAB_00472ae2:
        uVar4 = FUN_0047bdc0(piVar1,puVar6,(uint)puVar2);
      }
      else {
        uVar4 = FUN_0047d460(piVar1,puVar2,(int *)&param_1,&local_8);
        if (uVar4 != 0) {
          return uVar4;
        }
        puVar6 = param_1;
        if (param_1 == (undefined1 *)0x0) goto LAB_00472a6c;
LAB_00472ab8:
        if (*(short *)(*(int *)(puVar6 + 0x44) + 0x1a) == 1) goto LAB_00472ae2;
        FUN_004683f0(0xb,"database corruption at line %d of [%.10s]");
        uVar4 = 0xb;
      }
      if ((puVar6 != (undefined1 *)0x0) &&
         (puVar2 = *(undefined4 **)(puVar6 + 0x44), puVar2 != (undefined4 *)0x0)) {
        puVar3 = (uint *)puVar2[4];
        FUN_004a3a80(puVar2);
        if (*(int *)(puVar3[0x2d] + 0xc) == 0) {
          FUN_00484370(puVar3);
        }
      }
      puVar2 = local_8;
      if (uVar4 != 0) {
        return uVar4;
      }
    }
  }
  return 0;
}


/* FUN_00472b70 @ 00472b70  kind=lib  attributed-by=lib-island  size=407 */

uint __cdecl FUN_00472b70(int *param_1,uint param_2,int param_3,int *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  uint *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 *local_8;
  
  if ((uint)param_1[0xb] < param_2) {
    FUN_004683f0(0xb,"database corruption at line %d of [%.10s]");
    return 0xb;
  }
  uVar4 = FUN_0047d000(param_1,param_2,(int *)&local_8);
  if (uVar4 != 0) {
    return uVar4;
  }
  param_2 = 0;
  if (*(short *)(local_8 + 0x10) != 0) {
    do {
      puVar5 = (undefined1 *)
               ((uint)(CONCAT11(*(undefined1 *)(*(int *)(local_8 + 0x40) + param_2 * 2),
                                *(undefined1 *)(*(int *)(local_8 + 0x40) + 1 + param_2 * 2)) &
                      *(ushort *)(local_8 + 0x12)) + *(int *)(local_8 + 0x38));
      if (((local_8[3] == '\0') &&
          (uVar4 = FUN_00472b70(param_1,CONCAT31(CONCAT21(CONCAT11(*puVar5,puVar5[1]),puVar5[2]),
                                                 puVar5[3]),1,param_4), uVar4 != 0)) ||
         (uVar4 = FUN_00472980(local_8,(uint)puVar5), uVar4 != 0)) goto LAB_00472cd6;
      param_2 = param_2 + 1;
    } while ((int)param_2 < (int)(uint)*(ushort *)(local_8 + 0x10));
  }
  if (local_8[3] == '\0') {
    iVar1 = *(int *)(local_8 + 0x38);
    uVar4 = FUN_00472b70(param_1,CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar1 + 8),
                                                            *(undefined1 *)(iVar1 + 9)),
                                                   *(undefined1 *)(iVar1 + 10)),
                                          *(undefined1 *)(iVar1 + 0xb)),1,param_4);
    if (uVar4 != 0) goto LAB_00472cd6;
  }
  else if (param_4 != (int *)0x0) {
    *param_4 = *param_4 + (uint)*(ushort *)(local_8 + 0x10);
  }
  if (param_3 == 0) {
    uVar4 = FUN_004a2c80(*(undefined4 **)(local_8 + 0x44));
    if (uVar4 == 0) {
      FUN_004c5b30(local_8,**(byte **)(local_8 + 0x38) | 8);
    }
  }
  else {
    uVar4 = FUN_0047bdc0(*(int **)(local_8 + 0x34),local_8,*(uint *)(local_8 + 0x48));
  }
LAB_00472cd6:
  puVar2 = *(undefined4 **)(local_8 + 0x44);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (uint *)puVar2[4];
    FUN_004a3a80(puVar2);
    if (*(int *)(puVar3[0x2d] + 0xc) == 0) {
      FUN_00484370(puVar3);
    }
  }
  return uVar4;
}


/* FUN_00472d10 @ 00472d10  kind=lib  attributed-by=lib-island  size=118 */

void __cdecl FUN_00472d10(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  FUN_00499060(param_1,(int *)*param_2);
  FUN_004a9cb0(param_1,(short *)param_2[10]);
  FUN_00498790(param_1,(undefined4 *)param_2[0xb]);
  FUN_00499060(param_1,(int *)param_2[0xc]);
  FUN_00498790(param_1,(undefined4 *)param_2[0xd]);
  FUN_00499060(param_1,(int *)param_2[0xe]);
  puVar1 = (undefined4 *)param_2[0xf];
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00472d10(param_1,puVar1);
    FUN_00494b00(param_1,puVar1);
  }
  FUN_00498790(param_1,(undefined4 *)param_2[0x12]);
  FUN_00498790(param_1,(undefined4 *)param_2[0x13]);
  return;
}


/* FUN_00472d90 @ 00472d90  kind=lib  attributed-by=lib-island  size=341 */

void __cdecl FUN_00472d90(int *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  piVar1 = (int *)param_1[0x28];
  if (piVar1 != (int *)0x0) {
    for (piVar2 = (int *)piVar1[1]; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
      piVar1 = piVar2;
    }
    piVar2 = (int *)*piVar1;
    iVar6 = *piVar2;
    piVar2[0x2e] = piVar1[4];
    piVar2[0x2d] = piVar1[0xe];
    piVar2[1] = piVar1[2];
    piVar2[7] = piVar1[0xc];
    piVar2[2] = piVar1[3];
    piVar2[6] = piVar1[0xd];
    piVar2[0x10] = piVar1[5];
    *(short *)((int)piVar2 + 0x2e) = (short)piVar1[10];
    *(int *)(iVar6 + 0x20) = piVar1[8];
    *(int *)(iVar6 + 0x24) = piVar1[9];
    piVar2[0x19] = piVar1[0x11];
  }
  param_1[0x28] = 0;
  param_1[0x2a] = 0;
  if ((param_1[0x10] != 0) && (iVar6 = 0, *(short *)((int)param_1 + 0x2e) != 0)) {
    do {
      puVar3 = *(undefined4 **)(param_1[0x10] + iVar6 * 4);
      if (puVar3 != (undefined4 *)0x0) {
        FUN_004b8d00(*param_1,(int)puVar3);
        if ((int *)puVar3[1] == (int *)0x0) {
          if ((undefined4 *)*puVar3 != (undefined4 *)0x0) {
            FUN_0048f150((undefined4 *)*puVar3);
          }
        }
        else {
          FUN_0048f070((int *)puVar3[1]);
        }
        iVar4 = puVar3[9];
        if (iVar4 != 0) {
          iVar5 = puVar3[10];
          param_1[0x18] = param_1[0x18] & 0xfffffff7U | 4;
          (**(code **)(iVar5 + 0x1c))(iVar4);
          param_1[0x18] = param_1[0x18] & 0xfffffff3;
        }
        *(undefined4 *)(param_1[0x10] + iVar6 * 4) = 0;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)(uint)*(ushort *)((int)param_1 + 0x2e));
  }
  if (param_1[2] != 0) {
    FUN_00487fb0((int *)(param_1[2] + 0x28),param_1[6]);
  }
  iVar6 = param_1[0x29];
  while (iVar6 != 0) {
    piVar1 = (int *)param_1[0x29];
    param_1[0x29] = piVar1[1];
    FUN_004b5ee0(piVar1);
    iVar6 = param_1[0x29];
  }
  return;
}


/* FUN_00473230 @ 00473230  kind=lib  attributed-by=lib-island  size=432 */

void __cdecl
FUN_00473230(int *param_1,int param_2,int *param_3,char *param_4,byte *param_5,byte *param_6,
            byte *param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  ulonglong local_24 [4];
  
  iVar2 = *param_1;
  local_24[1] = 0;
  local_24[2] = 0;
  local_24[3] = 0;
  local_24[0] = ZEXT48(param_1);
  iVar4 = FUN_00488a90((int *)local_24,(char *)param_5);
  if (((iVar4 == 0) && (iVar4 = FUN_00488a90((int *)local_24,(char *)param_6), iVar4 == 0)) &&
     (iVar4 = FUN_00488a90((int *)local_24,(char *)param_7), iVar4 == 0)) {
    if (param_4 != (char *)0x0) {
      if (*param_4 == '^') {
        uVar5 = *(undefined4 *)(param_4 + 4);
      }
      else {
        uVar5 = 0;
      }
      iVar4 = FUN_0048d4b0(param_1,param_2,uVar5,0,0);
      if (iVar4 != 0) goto LAB_004733b7;
    }
    piVar6 = FUN_0049d4d0(param_1);
    iVar4 = param_1[0x10];
    if (param_1[0xf] < 4) {
      iVar4 = param_1[0x13] + 1;
      param_1[0x13] = param_1[0x13] + 4;
    }
    else {
      param_1[0x10] = iVar4 + 4;
      param_1[0xf] = param_1[0xf] + -4;
    }
    FUN_00496f30(param_1,param_5,iVar4);
    FUN_00496f30(param_1,param_6,iVar4 + 1);
    FUN_00496f30(param_1,param_7,iVar4 + 2);
    if (piVar6 != (int *)0x0) {
      FUN_004ae890(piVar6,0x12,0,(iVar4 - (short)*param_3) + 3,iVar4 + 3);
      if (piVar6[1] != 0) {
        *(char *)(piVar6[1] + -0x11 + piVar6[7] * 0x14) = (char)*param_3;
      }
      iVar4 = piVar6[1];
      iVar3 = *piVar6;
      if ((iVar4 == 0) || (*(char *)(iVar3 + 0x38) != '\0')) {
        FUN_0047bc80(iVar3,0xfffffffb,param_3);
      }
      else {
        iVar1 = iVar4 + (piVar6[7] + -1) * 0x14;
        FUN_0047bc80(iVar3,(int)*(char *)(iVar1 + 1),
                     *(int **)(iVar4 + 0x10 + (piVar6[7] + -1) * 0x14));
        *(int **)(iVar1 + 0x10) = param_3;
        *(undefined1 *)(iVar1 + 1) = 0xfb;
      }
      FUN_004ae7d0(piVar6,0x81,(uint)(param_2 == 0x18));
    }
  }
  else {
    param_1[0x11] = param_1[0x11] + 1;
  }
LAB_004733b7:
  FUN_00498790(iVar2,(undefined4 *)param_5);
  FUN_00498790(iVar2,(undefined4 *)param_6);
  FUN_00498790(iVar2,(undefined4 *)param_7);
  return;
}


/* FUN_004733e0 @ 004733e0  kind=lib  attributed-by=lib-island  size=361 */

int __cdecl
FUN_004733e0(int *param_1,char *param_2,char *param_3,undefined1 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,byte param_8)

{
  undefined1 *puVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  
  pcVar10 = param_2;
  if (((*(ushort *)(param_2 + 2) & 0x100) != 0) ||
     (((pcVar10 = param_3, param_3 != (char *)0x0 && ((*(ushort *)(param_3 + 2) & 0x100) != 0)) ||
      (piVar7 = (int *)FUN_004984d0(param_1,param_2), piVar7 == (int *)0x0)))) {
    piVar7 = (int *)FUN_004984d0(param_1,pcVar10);
  }
  cVar4 = FUN_00496480(param_3);
  cVar5 = FUN_00496480(param_2);
  if (cVar5 == '\0') {
    if (cVar4 == '\0') {
      bVar6 = 0x62;
      goto LAB_00473461;
    }
  }
  else if (cVar4 != '\0') {
    if ((cVar5 < 'c') && (cVar4 < 'c')) {
      bVar6 = 0x62;
    }
    else {
      bVar6 = 99;
    }
    goto LAB_00473461;
  }
  bVar6 = cVar5 + cVar4;
LAB_00473461:
  piVar3 = (int *)param_1[2];
  iVar9 = piVar3[7];
  if ((iVar9 < piVar3[8]) || (iVar8 = FUN_0047de10(piVar3), iVar8 == 0)) {
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
    FUN_0047bc80(*piVar3,0xfffffffc,piVar7);
  }
  else {
    iVar8 = iVar9;
    if (iVar9 < 0) {
      iVar8 = piVar3[7] + -1;
    }
    iVar2 = piVar3[1] + iVar8 * 0x14;
    FUN_0047bc80(*piVar3,(int)*(char *)(piVar3[1] + 1 + iVar8 * 0x14),
                 *(int **)(piVar3[1] + 0x10 + iVar8 * 0x14));
    *(undefined4 *)(iVar2 + 0x10) = 0;
    if (piVar7 == (int *)0x0) {
      *(undefined4 *)(iVar2 + 0x10) = 0;
      *(undefined1 *)(iVar2 + 1) = 0;
    }
    else {
      *(int **)(iVar2 + 0x10) = piVar7;
      *(undefined1 *)(iVar2 + 1) = 0xfc;
    }
  }
  iVar8 = *(int *)(param_1[2] + 4);
  if (iVar8 != 0) {
    *(byte *)(iVar8 + -0x11 + *(int *)(param_1[2] + 0x1c) * 0x14) = param_8 | bVar6;
  }
  return iVar9;
}


/* FUN_00473550 @ 00473550  kind=lib  attributed-by=lib-island  size=264 */

void __cdecl
FUN_00473550(int param_1,undefined4 param_2,undefined4 param_3,int *param_4,undefined4 param_5)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = *(int **)(param_1 + 8);
  if (*(char *)(param_1 + 0x13) == '\0') {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
    iVar5 = *(int *)(param_1 + 0x4c);
  }
  else {
    bVar2 = *(char *)(param_1 + 0x13) - 1;
    *(byte *)(param_1 + 0x13) = bVar2;
    iVar5 = *(int *)(param_1 + 0x1c + (uint)bVar2 * 4);
  }
  FUN_004ae960(piVar1,0x34,param_2,param_3,param_5,param_4);
  iVar4 = piVar1[7];
  if ((iVar4 < piVar1[8]) || (iVar3 = FUN_0047de10(piVar1), iVar3 == 0)) {
    piVar1[7] = piVar1[7] + 1;
    iVar3 = piVar1[1];
    *(undefined4 *)(iVar3 + 4 + iVar4 * 0x14) = param_5;
    *(undefined2 *)(iVar3 + iVar4 * 0x14) = 0x1f;
    *(undefined1 *)(iVar3 + 3 + iVar4 * 0x14) = 0;
    *(int **)(iVar3 + 8 + iVar4 * 0x14) = param_4;
    *(int *)(iVar3 + 0xc + iVar4 * 0x14) = iVar5;
    *(undefined4 *)(iVar3 + 0x10 + iVar4 * 0x14) = 0;
  }
  iVar4 = piVar1[7];
  if ((iVar4 < piVar1[8]) || (iVar3 = FUN_0047de10(piVar1), iVar3 == 0)) {
    piVar1[7] = piVar1[7] + 1;
    iVar3 = piVar1[1];
    *(undefined2 *)(iVar3 + iVar4 * 0x14) = 0x61;
    *(undefined1 *)(iVar3 + 3 + iVar4 * 0x14) = 0;
    *(undefined4 *)(iVar3 + 4 + iVar4 * 0x14) = param_2;
    *(int *)(iVar3 + 8 + iVar4 * 0x14) = iVar5;
    *(undefined4 *)(iVar3 + 0xc + iVar4 * 0x14) = 0;
    *(undefined4 *)(iVar3 + 0x10 + iVar4 * 0x14) = 0;
  }
  if ((iVar5 != 0) && (*(byte *)(param_1 + 0x13) < 8)) {
    iVar3 = 0;
    iVar4 = param_1 + 100;
    while (*(int *)(iVar4 + 0x10) != iVar5) {
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x18;
      if (9 < iVar3) {
        *(int *)(param_1 + 0x1c + (uint)*(byte *)(param_1 + 0x13) * 4) = iVar5;
        *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
        return;
      }
    }
    *(undefined1 *)(iVar4 + 8) = 1;
  }
  return;
}


/* FUN_00473790 @ 00473790  kind=lib  attributed-by=lib-island  size=224 */

void __cdecl FUN_00473790(int param_1,int param_2,int param_3,undefined4 param_4)

{
  byte bVar1;
  int *piVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint local_c;
  uint local_8;
  
  piVar2 = *(int **)(param_1 + 8);
  if ((*(ushort *)(param_2 + 2) & 0x400) != 0) {
    iVar4 = *(int *)(param_2 + 4);
    if (param_3 != 0) {
      iVar4 = -iVar4;
    }
    FUN_004ae830(piVar2,7,iVar4,param_4);
    return;
  }
  pbVar3 = *(byte **)(param_2 + 4);
  uVar6 = 0;
  if (pbVar3 != (byte *)0x0) {
    bVar1 = *pbVar3;
    pbVar5 = pbVar3;
    while (bVar1 != 0) {
      pbVar5 = pbVar5 + 1;
      bVar1 = *pbVar5;
    }
    uVar6 = (int)pbVar5 - (int)pbVar3 & 0x3fffffff;
  }
  iVar4 = FUN_0048d300(pbVar3,&local_c,uVar6,'\x01');
  if (iVar4 == 0) {
    uVar6 = local_8;
    uVar8 = local_c;
    if (param_3 != 0) {
      uVar8 = -local_c;
      uVar6 = -(local_8 + (local_c != 0));
    }
  }
  else {
    if ((iVar4 != 2) || (param_3 == 0)) {
      FUN_00474a90(piVar2,pbVar3,param_3,param_4);
      return;
    }
    uVar6 = 0x80000000;
    uVar8 = 0;
  }
  puVar7 = FUN_00494b90(*piVar2,8);
  if (puVar7 != (uint *)0x0) {
    *puVar7 = uVar8;
    puVar7[1] = uVar6;
  }
  FUN_004ae8f0(piVar2,8,0,param_4,0,(int *)puVar7,0xfffffff3);
  return;
}


/* FUN_00473870 @ 00473870  kind=lib  attributed-by=lib-island  size=89 */

void __cdecl FUN_00473870(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  
  if ((*(int *)(param_2 + 0xc) != 0) && (param_3 != 0)) {
    FUN_004ae830(param_1,0x14,*(int *)(param_2 + 0xc),0xffffffff);
    uVar1 = FUN_004ae7d0(param_1,0x79,*(undefined4 *)(param_2 + 0xc));
    FUN_004ae830(param_1,1,0,param_3);
    if ((-1 < (int)uVar1) && (uVar1 < (uint)param_1[7])) {
      *(int *)(param_1[1] + 8 + uVar1 * 0x14) = param_1[7];
    }
  }
  return;
}


/* FUN_00474a90 @ 00474a90  kind=lib  attributed-by=lib-island  size=303 */

void __cdecl FUN_00474a90(int *param_1,byte *param_2,int param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined8 local_c;
  
  if (param_2 != (byte *)0x0) {
    bVar1 = *param_2;
    pbVar3 = param_2;
    while (bVar1 != 0) {
      pbVar3 = pbVar3 + 1;
      bVar1 = *pbVar3;
    }
    FUN_0048cc90(param_2,(double *)&local_c,(int)pbVar3 - (int)param_2 & 0x3fffffff,'\x01');
    if (param_3 != 0) {
      local_c = -local_c;
    }
    piVar4 = FUN_00494b90(*param_1,8);
    if (piVar4 != (int *)0x0) {
      *piVar4 = (int)local_c;
      piVar4[1] = local_c._4_4_;
    }
    iVar6 = param_1[7];
    if ((iVar6 < param_1[8]) || (iVar5 = FUN_0047de10(param_1), iVar5 == 0)) {
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
      FUN_0047bc80(iVar2,(int)*(char *)(iVar5 + 1 + iVar6 * 0x14),
                   *(int **)(iVar5 + 0x10 + iVar6 * 0x14));
      *(undefined4 *)(iVar5 + 0x10 + iVar6 * 0x14) = 0;
      if (piVar4 != (int *)0x0) {
        *(int **)(iVar5 + 0x10 + iVar6 * 0x14) = piVar4;
        *(undefined1 *)(iVar5 + 1 + iVar6 * 0x14) = 0xf4;
        return;
      }
      *(undefined4 *)(iVar5 + 0x10 + iVar6 * 0x14) = 0;
      *(undefined1 *)(iVar5 + 1 + iVar6 * 0x14) = 0;
      return;
    }
    FUN_0047bc80(iVar2,0xfffffff4,piVar4);
  }
  return;
}


/* FUN_00474bc0 @ 00474bc0  kind=lib  attributed-by=lib-island  size=306 */

void __cdecl FUN_00474bc0(int *param_1)

{
  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  int *piVar4;
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
    piVar7 = FUN_004af150(*param_1);
    param_1[2] = (int)piVar7;
    if (piVar7 != (int *)0x0) {
      FUN_004ae760(piVar7,0x94);
    }
  }
  iVar10 = 0;
  if (0 < param_1[0x69]) {
    local_c = 0;
    do {
      iVar11 = piVar7[7];
      puVar8 = (undefined4 *)(param_1[0x6a] + local_c);
      uVar3 = *puVar8;
      piVar4 = (int *)puVar8[3];
      bVar2 = *(byte *)(puVar8 + 2);
      uVar5 = puVar8[1];
      if (iVar11 < piVar7[8]) {
LAB_00474c4c:
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
        iVar9 = FUN_0047de10(piVar7);
        if (iVar9 == 0) goto LAB_00474c4c;
        iVar11 = 1;
      }
      iVar9 = piVar7[1];
      iVar6 = *piVar7;
      if ((iVar9 == 0) || (*(char *)(iVar6 + 0x38) != '\0')) {
        FUN_0047bc80(iVar6,0xfffffffe,piVar4);
      }
      else {
        if (iVar11 < 0) {
          iVar11 = piVar7[7] + -1;
        }
        iVar1 = iVar9 + iVar11 * 0x14;
        FUN_0047bc80(iVar6,(int)*(char *)(iVar1 + 1),*(int **)(iVar9 + 0x10 + iVar11 * 0x14));
        *(undefined4 *)(iVar1 + 0x10) = 0;
        if (piVar4 == (int *)0x0) {
          *(undefined4 *)(iVar1 + 0x10) = 0;
          *(undefined1 *)(iVar1 + 1) = 0;
        }
        else {
          *(int **)(iVar1 + 0x10) = piVar4;
          *(undefined1 *)(iVar1 + 1) = 0xfe;
        }
      }
      iVar10 = iVar10 + 1;
      local_c = local_c + 0x10;
    } while (iVar10 < param_1[0x69]);
  }
  return;
}


/* FUN_00474d00 @ 00474d00  kind=lib  attributed-by=lib-island  size=477 */

void __cdecl FUN_00474d00(int *param_1,char *param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int *piVar6;
  byte *pbVar7;
  short *psVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int *piVar12;
  undefined2 local_18 [2];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  piVar2 = (int *)param_1[2];
  iVar3 = *param_1;
  for (; param_2 != (char *)0x0; param_2 = *(char **)(param_2 + 0x20)) {
    if (param_3 == 99) {
      bVar5 = param_2[1];
    }
    else {
      bVar5 = (byte)param_3;
    }
    *(byte *)((int)param_1 + 0x1c9) = bVar5;
    param_1[0x57] = 0;
    cVar1 = *param_2;
    if (cVar1 == 'i') {
      piVar6 = (int *)(uint)bVar5;
      piVar12 = FUN_0049d9d0(iVar3,*(int **)(param_2 + 0x1c));
      piVar9 = FUN_004a9680(iVar3,*(undefined4 **)(param_2 + 8),0);
      piVar10 = FUN_00499140(iVar3,*(int **)(param_2 + 0x18),0);
      psVar8 = FUN_004bda20(param_1,(int)param_2);
      FUN_0049e570(param_1,psVar8,piVar10,piVar9,piVar12,piVar6);
    }
    else if (cVar1 == 'j') {
      pbVar7 = (byte *)FUN_00478bb0(iVar3,*(undefined4 **)(param_2 + 0x14),0,(int *)0x0);
      psVar8 = FUN_004bda20(param_1,(int)param_2);
      FUN_00494ec0(param_1,psVar8,pbVar7);
    }
    else if (cVar1 == 'k') {
      pbVar7 = (byte *)FUN_00478bb0(iVar3,*(undefined4 **)(param_2 + 0x14),0,(int *)0x0);
      piVar12 = (int *)(uint)*(byte *)((int)param_1 + 0x1c9);
      piVar6 = FUN_00499140(iVar3,*(int **)(param_2 + 0x18),0);
      psVar8 = FUN_004bda20(param_1,(int)param_2);
      FUN_004ab480(param_1,psVar8,piVar6,pbVar7,piVar12);
    }
    else {
      piVar6 = FUN_004a9680(iVar3,*(undefined4 **)(param_2 + 8),0);
      local_18[0] = 4;
      local_14 = 0;
      local_10 = 0;
      local_c = 0;
      FUN_004a7e30(param_1,piVar6,(byte *)local_18);
      if (piVar6 != (int *)0x0) {
        FUN_00472d10(iVar3,piVar6);
        FUN_00494b00(iVar3,piVar6);
      }
    }
    if ((*param_2 != 't') &&
       ((iVar4 = piVar2[7], iVar4 < piVar2[8] || (iVar11 = FUN_0047de10(piVar2), iVar11 == 0)))) {
      piVar2[7] = piVar2[7] + 1;
      iVar11 = piVar2[1];
      *(undefined2 *)(iVar11 + iVar4 * 0x14) = 0x3c;
      *(undefined1 *)(iVar11 + 3 + iVar4 * 0x14) = 0;
      *(undefined4 *)(iVar11 + 4 + iVar4 * 0x14) = 0;
      *(undefined4 *)(iVar11 + 8 + iVar4 * 0x14) = 0;
      *(undefined4 *)(iVar11 + 0xc + iVar4 * 0x14) = 0;
      *(undefined4 *)(iVar11 + 0x10 + iVar4 * 0x14) = 0;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00474ee0 @ 00474ee0  kind=lib  attributed-by=lib-island  size=116 */

undefined4 __cdecl FUN_00474ee0(byte *param_1,int param_2)

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
      while ((bVar2 != 0 && ((&DAT_00569620)[bVar2] == (&DAT_00569620)[*pbVar5]))) {
        pbVar1 = pbVar3 + 1;
        pbVar3 = pbVar3 + 1;
        pbVar5 = pbVar5 + 1;
        bVar2 = *pbVar1;
      }
      if ((&DAT_00569620)[*pbVar3] == (&DAT_00569620)[*pbVar5]) {
        return 1;
      }
      iVar6 = iVar6 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar6 < *(int *)(param_2 + 0x24));
  }
  return 0;
}


/* FUN_00474f60 @ 00474f60  kind=lib  attributed-by=lib-island  size=124 */

int __cdecl FUN_00474f60(int param_1,byte *param_2)

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
      while ((bVar2 != 0 && ((&DAT_00569620)[bVar2] == (&DAT_00569620)[*pbVar5]))) {
        pbVar1 = pbVar3 + 1;
        pbVar3 = pbVar3 + 1;
        pbVar5 = pbVar5 + 1;
        bVar2 = *pbVar1;
      }
      if ((&DAT_00569620)[*pbVar3] == (&DAT_00569620)[*pbVar5]) {
        return iVar6;
      }
      iVar6 = iVar6 + 1;
      puVar4 = puVar4 + 6;
    } while (iVar6 < *(short *)(param_1 + 0x26));
  }
  return -1;
}


/* FUN_00474fe0 @ 00474fe0  kind=lib  attributed-by=lib-island  size=96 */

void __cdecl FUN_00474fe0(int *param_1)

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
        FUN_004961f0(iVar1,7,(byte *)0x0);
        *(undefined1 *)(iVar1 + 0x38) = 0;
        uVar3 = 7;
      }
      uVar2 = *(uint *)(iVar1 + 0x30);
    }
    param_1[0x16] = uVar2 & uVar3;
    if (*(int *)(*param_1 + 0xc) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00475037. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_00582b20)();
      return;
    }
  }
  return;
}


/* FUN_00475040 @ 00475040  kind=lib  attributed-by=lib-island  size=111 */

undefined * __cdecl FUN_00475040(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    if (((param_1[5] != 0) && (param_2 < (int)(uint)*(ushort *)(param_1 + 0xb))) && (-1 < param_2))
    {
      if (*(int *)(*param_1 + 0xc) != 0) {
        (*DAT_00582b18)(*(int *)(*param_1 + 0xc));
      }
      return (undefined *)(param_1[5] + param_2 * 0x28);
    }
    if (*param_1 != 0) {
      iVar1 = *(int *)(*param_1 + 0xc);
      if (iVar1 != 0) {
        (*DAT_00582b18)(iVar1);
      }
      FUN_004961f0(*param_1,0x19,(byte *)0x0);
    }
  }
  return &DAT_00569b70;
}


/* FUN_004750b0 @ 004750b0  kind=lib  attributed-by=lib-island  size=410 */

char * __cdecl
FUN_004750b0(int *param_1,char *param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5)

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
    pcVar5 = (char *)**(undefined4 **)(**(int **)(param_2 + 0x10) + 8);
    local_30 = (*(int **)(param_2 + 0x10))[10];
    local_34 = *param_1;
LAB_004751a0:
    local_24 = param_1;
    pcVar5 = FUN_004750b0(&local_34,pcVar5,&local_c,&local_10,&local_8);
    uVar8 = local_c;
    goto LAB_00475148;
  }
  if ((cVar1 != -0x68) && (uVar8 = 0, cVar1 != -0x66)) goto LAB_00475148;
  puVar7 = (undefined4 *)0x0;
  local_14 = (undefined4 *)0x0;
  do {
    if (puVar7 != (undefined4 *)0x0) goto LAB_0047516d;
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
LAB_00475144:
    pcVar5 = (char *)0x0;
  }
  else {
LAB_0047516d:
    if (local_14 != (undefined4 *)0x0) {
      iVar2 = (int)*(short *)(param_2 + 0x1c);
      if ((-1 < iVar2) && (iVar2 < *(int *)*local_14)) {
        pcVar5 = *(char **)(((int *)*local_14)[2] + iVar2 * 0x14);
        local_30 = local_14[10];
        local_34 = *param_1;
        goto LAB_004751a0;
      }
      goto LAB_00475144;
    }
    if (puVar7[0x10] == 0) goto LAB_00475144;
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
      iVar6 = FUN_004a7ba0(iVar2,puVar7[0x10]);
      uVar8 = *(undefined4 *)(*(int *)(iVar2 + 0x10) + iVar6 * 0x10);
      goto LAB_00475148;
    }
  }
  uVar8 = 0;
LAB_00475148:
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = uVar8;
    *param_4 = local_10;
    *param_5 = local_8;
  }
  return pcVar5;
}


/* FUN_00475250 @ 00475250  kind=lib  attributed-by=lib-island  size=155 */

char __cdecl FUN_00475250(int param_1)

{
  char cVar1;
  char cVar2;
  
  cVar1 = FUN_00496480(*(char **)(param_1 + 8));
  if (*(char **)(param_1 + 0xc) == (char *)0x0) {
    if ((*(ushort *)(param_1 + 2) & 0x800) == 0) {
      if (cVar1 == '\0') {
        cVar1 = 'b';
      }
      return cVar1;
    }
    cVar2 = FUN_00496480((char *)**(undefined4 **)(**(int **)(param_1 + 0x10) + 8));
    if (cVar2 != '\0') {
      if (cVar1 != '\0') {
        if ((cVar2 < 'c') && (cVar1 < 'c')) {
          return 'b';
        }
        return 'c';
      }
      goto LAB_004752d0;
    }
  }
  else {
    cVar2 = FUN_00496480(*(char **)(param_1 + 0xc));
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
      goto LAB_004752d0;
    }
  }
  if (cVar1 == '\0') {
    return 'b';
  }
LAB_004752d0:
  return cVar1 + cVar2;
}


/* FUN_004754f0 @ 004754f0  kind=lib  attributed-by=lib-island  size=387 */

void __cdecl FUN_004754f0(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int extraout_EDX;
  int local_8;
  
  if ((*(int *)(param_2 + 8) == 0) && (FUN_00496a90((int)param_1), *(int *)(param_2 + 0x48) != 0)) {
    param_1[0x13] = param_1[0x13] + 1;
    iVar1 = param_1[0x13];
    *(int *)(param_2 + 8) = iVar1;
    piVar2 = (int *)param_1[2];
    if (piVar2 == (int *)0x0) {
      piVar2 = FUN_004af150(*param_1);
      param_1[2] = (int)piVar2;
      if (piVar2 == (int *)0x0) {
        return;
      }
      FUN_004ae760(piVar2,0x94);
    }
    iVar3 = FUN_00498e90(*(char **)(param_2 + 0x48),&local_8);
    if (iVar3 == 0) {
      FUN_00496f30(param_1,*(byte **)(param_2 + 0x48),extraout_EDX);
      FUN_004ae7d0(piVar2,0x15,iVar1);
      FUN_004ae830(piVar2,0x7a,iVar1,param_3);
    }
    else {
      FUN_004ae830(piVar2,7,local_8,extraout_EDX);
      if (local_8 == 0) {
        FUN_004ae830(piVar2,1,0,param_3);
      }
      else if ((double)local_8 < *(double *)(param_2 + 0x20)) {
        *(double *)(param_2 + 0x20) = (double)local_8;
      }
    }
    if (*(int *)(param_2 + 0x4c) != 0) {
      param_1[0x13] = param_1[0x13] + 1;
      iVar3 = param_1[0x13];
      *(int *)(param_2 + 0xc) = iVar3;
      param_1[0x13] = param_1[0x13] + 1;
      FUN_00496f30(param_1,*(byte **)(param_2 + 0x4c),iVar3);
      FUN_004ae7d0(piVar2,0x15,iVar3);
      uVar4 = FUN_004ae7d0(piVar2,0x78,iVar3);
      FUN_004ae830(piVar2,7,0,iVar3);
      if ((-1 < (int)uVar4) && (uVar4 < (uint)piVar2[7])) {
        *(int *)(piVar2[1] + 8 + uVar4 * 0x14) = piVar2[7];
      }
      FUN_004ae890(piVar2,0x56,iVar1,iVar3,iVar3 + 1);
      uVar4 = FUN_004ae7d0(piVar2,0x78,iVar1);
      FUN_004ae830(piVar2,7,0xffffffff,iVar3 + 1);
      if ((-1 < (int)uVar4) && (uVar4 < (uint)piVar2[7])) {
        *(int *)(piVar2[1] + 8 + uVar4 * 0x14) = piVar2[7];
      }
    }
  }
  return;
}


/* FUN_004757a0 @ 004757a0  kind=lib  attributed-by=lib-island  size=68 */

undefined4 __cdecl FUN_004757a0(int param_1)

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


/* FUN_00476130 @ 00476130  kind=lib  attributed-by=lib-island  size=188 */

void __cdecl FUN_00476130(int param_1,char *param_2,uint *param_3)

{
  void *_Src;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  if (*param_3 == 0) {
    iVar1 = *(int *)(param_1 + 0x34);
    iVar2 = *(int *)(param_1 + 0x38);
    iVar3 = *(int *)(param_2 + 0x38);
    iVar5 = 0;
    if (*(int *)(param_2 + 0x48) == 1) {
      iVar5 = 100;
    }
    _Src = (void *)((uint)*(byte *)(param_1 + 5) + iVar2);
    uVar4 = (uint)CONCAT11(*(undefined1 *)(*(byte *)(param_1 + 5) + 5 + iVar2),
                           *(undefined1 *)((int)_Src + 6));
    memcpy((void *)(iVar3 + uVar4),(void *)(uVar4 + iVar2),*(int *)(iVar1 + 0x24) - uVar4);
    memcpy((void *)(iVar3 + iVar5),_Src,
           (uint)*(ushort *)(param_1 + 0xc) + (uint)*(ushort *)(param_1 + 0x10) * 2);
    *param_2 = '\0';
    uVar4 = FUN_00471320(param_2);
    if (uVar4 != 0) {
      *param_3 = uVar4;
      return;
    }
    if (*(char *)(iVar1 + 0x11) != '\0') {
      uVar4 = FUN_0048b310(param_2);
      *param_3 = uVar4;
    }
  }
  return;
}


/* FUN_004761f0 @ 004761f0  kind=lib  attributed-by=lib-island  size=66 */

uint __cdecl
FUN_004761f0(void *param_1,void *param_2,size_t param_3,int param_4,undefined4 *param_5)

{
  uint uVar1;
  
  if (param_4 == 0) {
    memcpy(param_2,param_1,param_3);
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_004a2c80(param_5);
    if (uVar1 == 0) {
      memcpy(param_1,param_2,param_3);
      return 0;
    }
  }
  return uVar1;
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


/* FUN_00476810 @ 00476810  kind=lib  attributed-by=lib-island  size=152 */

undefined4 __cdecl FUN_00476810(int param_1,uint param_2)

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
  FUN_004683f0(0xb,"database corruption at line %d of [%.10s]");
  return 0xb;
}


/* FUN_004768b0 @ 004768b0  kind=lib  attributed-by=lib-island  size=138 */

undefined4 __cdecl FUN_004768b0(uint param_1)

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
        FUN_004683f0(0xb,"database corruption at line %d of [%.10s]");
        return 0xb;
      }
      uVar5 = FUN_00471aa0(param_1,iVar2 + uVar10);
      uVar5 = uVar5 & 0xffff;
      iVar8 = iVar8 - uVar5;
      if ((iVar8 < (int)uVar6) || (iVar4 < (int)(uVar5 + uVar10))) {
        FUN_004683f0(0xb,"database corruption at line %d of [%.10s]");
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
  FUN_004683f0(0xb,"database corruption at line %d of [%.10s]");
  return 0xb;
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


/* FUN_00476b80 @ 00476b80  kind=lib  attributed-by=lib-island  size=134 */

void __cdecl FUN_00476b80(int *param_1,int param_2)

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
    FUN_00476a70(param_1,iVar6,iVar4);
    iVar4 = iVar6;
  } while( true );
}


/* FUN_00476d20 @ 00476d20  kind=lib  attributed-by=lib-island  size=649 */

char * __cdecl FUN_00476d20(int param_1,char *param_2,int param_3)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  
  switch(*(undefined1 *)(param_1 + 1)) {
  case 0xed:
    *param_2 = '\0';
    return param_2;
  case 0xee:
    FUN_00466a80(param_3,param_2,(byte *)"program");
    return param_2;
  case 0xef:
  case 0xfa:
    iVar3 = *(int *)(param_1 + 0x10);
    FUN_00466a80(param_3,param_2,(byte *)"keyinfo(%d");
    uVar4 = FUN_004aa9b0(param_2);
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
        if (param_3 + -6 < (int)(uVar9 + uVar4)) break;
        param_2[uVar4] = ',';
        iVar7 = uVar4 + 1;
        if (*(char *)(param_1 + *(int *)(iVar3 + 8)) != '\0') {
          param_2[iVar7] = '-';
          iVar7 = uVar4 + 2;
        }
        memcpy(param_2 + iVar7,pcVar6,uVar9 + 1);
        param_1 = param_1 + 1;
        puVar5 = puVar5 + 1;
        uVar4 = iVar7 + uVar9;
        if ((int)(uint)*(ushort *)(iVar3 + 6) <= param_1) {
          (param_2 + uVar4)[0] = ')';
          (param_2 + uVar4)[1] = '\0';
          return param_2;
        }
      }
      builtin_strncpy(param_2 + uVar4,",...",4);
    }
    (param_2 + uVar4)[0] = ')';
    (param_2 + uVar4)[1] = '\0';
    return param_2;
  default:
    pcVar6 = *(char **)(param_1 + 0x10);
    if (*(char **)(param_1 + 0x10) == (char *)0x0) {
      *param_2 = '\0';
      pcVar6 = param_2;
    }
    return pcVar6;
  case 0xf1:
    FUN_00466a80(param_3,param_2,(byte *)"intarray");
    return param_2;
  case 0xf2:
    FUN_00466a80(param_3,param_2,&DAT_0055ae88);
    return param_2;
  case 0xf3:
    break;
  case 0xf4:
LAB_00476eb8:
    FUN_00466a80(param_3,param_2,(byte *)"%.16g");
    return param_2;
  case 0xf6:
    FUN_00466a80(param_3,param_2,(byte *)"vtab:%p:%p");
    return param_2;
  case 0xf8:
    uVar2 = *(ushort *)(*(int *)(param_1 + 0x10) + 0x1c);
    if ((uVar2 & 2) != 0) {
      return *(char **)(*(int *)(param_1 + 0x10) + 4);
    }
    if ((uVar2 & 4) == 0) {
      if ((uVar2 & 8) == 0) {
        if ((uVar2 & 1) != 0) {
          FUN_00466a80(param_3,param_2,&DAT_0056ddd0);
          return param_2;
        }
        return "(blob)";
      }
      goto LAB_00476eb8;
    }
    break;
  case 0xfb:
    FUN_00466a80(param_3,param_2,(byte *)"%s(%d)");
    return param_2;
  case 0xfc:
    FUN_00466a80(param_3,param_2,(byte *)"collseq(%.20s)");
    return param_2;
  }
  FUN_00466a80(param_3,param_2,&DAT_0056dd58);
  return param_2;
}


/* FUN_00476ff0 @ 00476ff0  kind=lib  attributed-by=lib-island  size=26 */

int __cdecl FUN_00476ff0(int param_1)

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


/* FUN_00477080 @ 00477080  kind=lib  attributed-by=lib-island  size=104 */

ulonglong __cdecl FUN_00477080(double param_1)

{
  ulonglong uVar1;
  
  if (-9.223372036854776e+18 <= param_1) {
    if (param_1 <= 9.223372036854776e+18) {
      uVar1 = FUN_0054a946();
      return uVar1;
    }
  }
  return 0x8000000000000000;
}


/* FUN_004770f0 @ 004770f0  kind=lib  attributed-by=lib-island  size=222 */

void __cdecl FUN_004770f0(int param_1,int param_2,size_t param_3,int *param_4)

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
      iVar3 = FUN_0047c0e0(param_1,uVar4,param_3);
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
    FUN_004683f0(0xb,"database corruption at line %d of [%.10s]");
    *param_4 = 0xb;
  }
  return;
}


/* FUN_004771d0 @ 004771d0  kind=lib  attributed-by=lib-island  size=105 */

uint __cdecl FUN_004771d0(int param_1,uint param_2)

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


/* FUN_00477240 @ 00477240  kind=lib  attributed-by=lib-island  size=72 */

uint __cdecl FUN_00477240(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 != 0) {
    uVar1 = FUN_004771d0(param_1,param_2);
    if ((param_2 & 1) != 0) {
      uVar2 = FUN_00477240(*(int *)(param_1 + 0xc),param_2);
      uVar3 = FUN_00477240(*(int *)(param_1 + 8),param_2);
      uVar1 = uVar3 + uVar1 + uVar2;
    }
    return uVar1;
  }
  return 0;
}


/* FUN_004773d0 @ 004773d0  kind=lib  attributed-by=lib-island  size=346 */

uint __cdecl FUN_004773d0(int param_1,int *param_2,void *param_3)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  int *piVar4;
  byte *pbVar5;
  uint uVar6;
  uint *local_8;
  
  uVar3 = FUN_004a0180(param_1,param_3,0xffffffff,0,0,&local_8,(int *)0x0);
  if (uVar3 == 0) {
    uVar3 = FUN_00469cb0(local_8);
    puVar2 = local_8;
    while (uVar3 == 100) {
      local_8 = puVar2;
      if (puVar2 == (uint *)0x0) {
LAB_00477463:
        piVar4 = (int *)&DAT_00569b70;
      }
      else {
        if ((puVar2[5] == 0) || ((short)puVar2[0xb] == 0)) {
          if (*puVar2 != 0) {
            iVar1 = *(int *)(*puVar2 + 0xc);
            if (iVar1 != 0) {
              (*DAT_00582b18)(iVar1);
            }
            FUN_004961f0(*puVar2,0x19,(byte *)0x0);
          }
          goto LAB_00477463;
        }
        if (*(int *)(*puVar2 + 0xc) != 0) {
          (*DAT_00582b18)(*(int *)(*puVar2 + 0xc));
        }
        piVar4 = (int *)puVar2[5];
      }
      piVar4 = (int *)FUN_004ae680(piVar4,1);
      if (puVar2 != (uint *)0x0) {
        uVar3 = *puVar2;
        uVar6 = puVar2[0x16];
        if (uVar3 == 0) {
          uVar3 = 0xff;
        }
        else {
          if ((*(char *)(uVar3 + 0x38) != '\0') || (uVar6 == 0xc0a)) {
            FUN_004961f0(uVar3,7,(byte *)0x0);
            *(undefined1 *)(uVar3 + 0x38) = 0;
            uVar6 = 7;
          }
          uVar3 = *(uint *)(uVar3 + 0x30);
        }
        puVar2[0x16] = uVar3 & uVar6;
        if (*(int *)(*puVar2 + 0xc) != 0) {
          (*DAT_00582b20)(*(int *)(*puVar2 + 0xc));
        }
      }
      uVar3 = FUN_00477530(param_1,param_2,piVar4);
      if (uVar3 != 0) {
        uVar6 = FUN_004b5e70((int *)local_8);
        goto LAB_00477502;
      }
      uVar3 = FUN_00469cb0(local_8);
      puVar2 = local_8;
    }
    uVar3 = FUN_004b5e70((int *)puVar2);
    uVar6 = uVar3;
LAB_00477502:
    if (uVar6 != 0) {
      pbVar5 = (byte *)FUN_004687f0(param_1);
      FUN_004a9a30(param_2,param_1,pbVar5);
    }
  }
  return uVar3;
}


/* FUN_00477530 @ 00477530  kind=lib  attributed-by=lib-island  size=126 */

uint __cdecl FUN_00477530(int param_1,int *param_2,int *param_3)

{
  uint uVar1;
  byte *pbVar2;
  
  if (param_3 == (int *)0x0) {
    return 7;
  }
  uVar1 = FUN_004a0180(param_1,param_3,0xffffffff,0,0,&param_3,(int *)0x0);
  if (uVar1 != 0) {
    pbVar2 = (byte *)FUN_004687f0(param_1);
    FUN_004a9a30(param_2,param_1,pbVar2);
    uVar1 = FUN_00468670(param_1);
    return uVar1;
  }
  FUN_00469cb0((uint *)param_3);
  uVar1 = FUN_004b5e70(param_3);
  if (uVar1 != 0) {
    pbVar2 = (byte *)FUN_004687f0(param_1);
    FUN_004a9a30(param_2,param_1,pbVar2);
  }
  return uVar1;
}


/* FUN_004775b0 @ 004775b0  kind=lib  attributed-by=lib-island  size=293 */

void __cdecl FUN_004775b0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  if ((char)param_1[0x75] == '\x02') {
    piVar2 = (int *)param_1[2];
    piVar4 = (int *)FUN_004a02d0(*param_1,(byte *)"COMPOUND SUBQUERIES %d AND %d %s(%s)");
    iVar3 = param_1[0x79];
    iVar6 = piVar2[7];
    if ((iVar6 < piVar2[8]) || (iVar5 = FUN_0047de10(piVar2), iVar5 == 0)) {
      iVar5 = piVar2[1];
      piVar2[7] = piVar2[7] + 1;
      *(undefined2 *)(iVar5 + iVar6 * 0x14) = 0x96;
      *(undefined1 *)(iVar5 + 3 + iVar6 * 0x14) = 0;
      *(int *)(iVar5 + 4 + iVar6 * 0x14) = iVar3;
      *(undefined4 *)(iVar5 + 8 + iVar6 * 0x14) = 0;
      *(undefined4 *)(iVar5 + 0xc + iVar6 * 0x14) = 0;
      *(undefined4 *)(iVar5 + 0x10 + iVar6 * 0x14) = 0;
    }
    else {
      iVar6 = 1;
    }
    iVar3 = piVar2[1];
    iVar5 = *piVar2;
    if ((iVar3 != 0) && (*(char *)(iVar5 + 0x38) == '\0')) {
      if (iVar6 < 0) {
        iVar6 = piVar2[7] + -1;
      }
      iVar1 = iVar3 + iVar6 * 0x14;
      FUN_0047bc80(iVar5,(int)*(char *)(iVar1 + 1),*(int **)(iVar3 + 0x10 + iVar6 * 0x14));
      *(undefined4 *)(iVar1 + 0x10) = 0;
      if (piVar4 != (int *)0x0) {
        *(int **)(iVar1 + 0x10) = piVar4;
        *(undefined1 *)(iVar1 + 1) = 0xff;
        return;
      }
      *(undefined4 *)(iVar1 + 0x10) = 0;
      *(undefined1 *)(iVar1 + 1) = 0;
      return;
    }
    FUN_0047bc80(iVar5,0xffffffff,piVar4);
  }
  return;
}


/* FUN_00477b20 @ 00477b20  kind=lib  attributed-by=lib-island  size=269 */

void __cdecl FUN_00477b20(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  if ((char)param_1[0x75] == '\x02') {
    piVar4 = (int *)FUN_004a02d0(*param_1,(byte *)"SCAN TABLE %s %s%s(~%d rows)");
    iVar2 = param_1[0x79];
    piVar3 = (int *)param_1[2];
    iVar6 = piVar3[7];
    if ((iVar6 < piVar3[8]) || (iVar5 = FUN_0047de10(piVar3), iVar5 == 0)) {
      iVar5 = piVar3[1];
      piVar3[7] = piVar3[7] + 1;
      *(undefined2 *)(iVar5 + iVar6 * 0x14) = 0x96;
      *(undefined1 *)(iVar5 + 3 + iVar6 * 0x14) = 0;
      *(int *)(iVar5 + 4 + iVar6 * 0x14) = iVar2;
      *(undefined4 *)(iVar5 + 8 + iVar6 * 0x14) = 0;
      *(undefined4 *)(iVar5 + 0xc + iVar6 * 0x14) = 0;
      *(undefined4 *)(iVar5 + 0x10 + iVar6 * 0x14) = 0;
    }
    else {
      iVar6 = 1;
    }
    iVar2 = piVar3[1];
    iVar5 = *piVar3;
    if ((iVar2 != 0) && (*(char *)(iVar5 + 0x38) == '\0')) {
      if (iVar6 < 0) {
        iVar6 = piVar3[7] + -1;
      }
      iVar1 = iVar2 + iVar6 * 0x14;
      FUN_0047bc80(iVar5,(int)*(char *)(iVar1 + 1),*(int **)(iVar2 + 0x10 + iVar6 * 0x14));
      *(undefined4 *)(iVar1 + 0x10) = 0;
      if (piVar4 != (int *)0x0) {
        *(int **)(iVar1 + 0x10) = piVar4;
        *(undefined1 *)(iVar1 + 1) = 0xff;
        return;
      }
      *(undefined4 *)(iVar1 + 0x10) = 0;
      *(undefined1 *)(iVar1 + 1) = 0;
      return;
    }
    FUN_0047bc80(iVar5,0xffffffff,piVar4);
  }
  return;
}


/* FUN_00477c30 @ 00477c30  kind=lib  attributed-by=lib-island  size=231 */

void __cdecl FUN_00477c30(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  if ((char)param_1[0x75] != '\x02') {
    return;
  }
  piVar2 = (int *)param_1[2];
  piVar4 = (int *)FUN_004a02d0(*param_1,(byte *)"USE TEMP B-TREE FOR %s");
  iVar3 = param_1[0x79];
  iVar6 = piVar2[7];
  if ((iVar6 < piVar2[8]) || (iVar5 = FUN_0047de10(piVar2), iVar5 == 0)) {
    iVar5 = piVar2[1];
    piVar2[7] = piVar2[7] + 1;
    *(undefined2 *)(iVar5 + iVar6 * 0x14) = 0x96;
    *(undefined1 *)(iVar5 + 3 + iVar6 * 0x14) = 0;
    *(int *)(iVar5 + 4 + iVar6 * 0x14) = iVar3;
    *(undefined4 *)(iVar5 + 8 + iVar6 * 0x14) = 0;
    *(undefined4 *)(iVar5 + 0xc + iVar6 * 0x14) = 0;
    *(undefined4 *)(iVar5 + 0x10 + iVar6 * 0x14) = 0;
  }
  else {
    iVar6 = 1;
  }
  iVar3 = piVar2[1];
  iVar5 = *piVar2;
  if ((iVar3 != 0) && (*(char *)(iVar5 + 0x38) == '\0')) {
    if (iVar6 < 0) {
      iVar6 = piVar2[7] + -1;
    }
    iVar1 = iVar3 + iVar6 * 0x14;
    FUN_0047bc80(iVar5,(int)*(char *)(iVar1 + 1),*(int **)(iVar3 + 0x10 + iVar6 * 0x14));
    *(undefined4 *)(iVar1 + 0x10) = 0;
    if (piVar4 != (int *)0x0) {
      *(int **)(iVar1 + 0x10) = piVar4;
      *(undefined1 *)(iVar1 + 1) = 0xff;
      return;
    }
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(undefined1 *)(iVar1 + 1) = 0;
    return;
  }
  FUN_0047bc80(iVar5,0xffffffff,piVar4);
  return;
}


/* FUN_00477d20 @ 00477d20  kind=lib  attributed-by=lib-island  size=55 */

bool __cdecl FUN_00477d20(char *param_1)

{
  int iVar1;
  int local_8;
  
  local_8 = 0;
  if ((param_1[2] & 1U) == 0) {
    iVar1 = FUN_00498e90(param_1,&local_8);
    if (iVar1 != 0) {
      return local_8 == 0;
    }
  }
  return false;
}


/* FUN_00477d60 @ 00477d60  kind=lib  attributed-by=lib-island  size=1777 */

void __cdecl FUN_00477d60(undefined4 param_1,undefined4 *param_2,int param_3)

{
  char cVar1;
  byte *pbVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  bool bVar7;
  byte bVar8;
  short sVar9;
  int iVar10;
  int iVar11;
  undefined3 extraout_var;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  char *pcVar15;
  uint uVar16;
  char *pcVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined8 uVar21;
  int local_48;
  uint local_40;
  char *local_3c;
  char *local_38;
  uint local_34;
  char *local_30;
  uint local_2c;
  byte *local_28;
  int local_24;
  undefined4 local_20;
  char *pcStack_1c;
  uint local_18;
  int local_14;
  int *local_10;
  int local_c;
  int *local_8;
  
  puVar5 = param_2;
  local_10 = (int *)*param_2;
  local_c = *local_10;
  local_20 = 0;
  pcStack_1c = (char *)0x0;
  local_3c = (char *)0x0;
  local_24 = 0;
  local_38 = (char *)0x0;
  if (*(char *)(local_c + 0x38) != '\0') {
    return;
  }
  local_14 = param_3 * 0x28;
  pcVar17 = (char *)(param_2[8] + local_14);
  pbVar2 = *(byte **)pcVar17;
  local_8 = (int *)param_2[1];
  uVar18 = FUN_004791b0(local_8,*(char **)(pbVar2 + 8));
  uVar16 = (uint)(uVar18 >> 0x20);
  local_28 = (byte *)(uint)*pbVar2;
  if (local_28 == (byte *)0x48) {
    if ((*(ushort *)(pbVar2 + 2) & 0x800) == 0) {
      uVar19 = FUN_00478de0(local_8,*(int **)(pbVar2 + 0x10));
    }
    else {
      uVar19 = FUN_00478f40(local_8,*(int **)(pbVar2 + 0x10));
    }
  }
  else {
    if (local_28 == (byte *)0x49) {
      pcVar17[0x18] = '\0';
      pcVar17[0x19] = '\0';
      pcVar17[0x1a] = '\0';
      pcVar17[0x1b] = '\0';
      pcVar17[0x1c] = '\0';
      pcVar17[0x1d] = '\0';
      pcVar17[0x1e] = '\0';
      pcVar17[0x1f] = '\0';
      goto LAB_00477e1b;
    }
    uVar19 = FUN_004791b0(local_8,*(char **)(pbVar2 + 0xc));
  }
  *(ulonglong *)(pcVar17 + 0x18) = uVar19;
LAB_00477e1b:
  uVar19 = FUN_004791b0(local_8,(char *)pbVar2);
  local_34 = (uint)(uVar19 >> 0x20);
  local_2c = (uint)uVar19;
  if ((pbVar2[2] & 1) == 0) {
    lVar20 = CONCAT44(pcStack_1c,local_20);
  }
  else {
    lVar20 = FUN_0047d410(local_8,(int)*(short *)(pbVar2 + 0x20));
    uVar19 = CONCAT44(local_34 | (uint)((ulonglong)lVar20 >> 0x20),local_2c | (uint)lVar20);
    lVar20 = lVar20 + -1;
  }
  local_34 = (uint)(uVar19 >> 0x20);
  local_2c = (uint)uVar19;
  local_40 = (uint)((ulonglong)lVar20 >> 0x20);
  local_18 = (uint)lVar20;
  *(ulonglong *)(pcVar17 + 0x20) = uVar19;
  pcVar17[8] = -1;
  pcVar17[9] = -1;
  pcVar17[10] = -1;
  pcVar17[0xb] = -1;
  pcVar17[4] = -1;
  pcVar17[5] = -1;
  pcVar17[6] = -1;
  pcVar17[7] = -1;
  pcVar17[0x10] = '\0';
  pcVar17[0x11] = '\0';
  if (((local_28 == (byte *)0x48) ||
      (((0x4b < (int)local_28 && ((int)local_28 < 0x51)) || (local_28 == (byte *)0x49)))) &&
     ((*(uint *)(pcVar17 + 0x18) & (uint)uVar18) == 0 && (*(uint *)(pcVar17 + 0x1c) & uVar16) == 0))
  {
    local_28 = (byte *)FUN_004994d0(*(char **)(pbVar2 + 8));
    uVar21 = FUN_004994d0(*(char **)(pbVar2 + 0xc));
    pcStack_1c = (char *)uVar21;
    if (*local_28 == 0x98) {
      *(undefined4 *)(pcVar17 + 8) = *(undefined4 *)(local_28 + 0x18);
      *(int *)(pcVar17 + 0xc) = (int)*(short *)(local_28 + 0x1c);
      sVar9 = FUN_00483b70((int)((ulonglong)uVar21 >> 0x20));
      *(short *)(pcVar17 + 0x10) = sVar9;
    }
    iVar10 = local_c;
    uVar19 = CONCAT44(local_34,local_2c);
    if ((pcStack_1c != (char *)0x0) && (uVar19 = CONCAT44(local_34,local_2c), *pcStack_1c == -0x68))
    {
      pbVar6 = pbVar2;
      pcVar15 = pcVar17;
      if (-1 < *(int *)(pcVar17 + 8)) {
        local_28 = (byte *)FUN_00478bb0(local_c,(undefined4 *)pbVar2,0,(int *)0x0);
        if (*(char *)(iVar10 + 0x38) != '\0') {
          FUN_00498790(iVar10,(undefined4 *)local_28);
          return;
        }
        iVar10 = FUN_004c1f00(param_2,(char *)local_28,3);
        if (iVar10 == 0) {
          return;
        }
        pcVar15 = (char *)(param_2[8] + iVar10 * 0x28);
        *(int *)(pcVar15 + 4) = param_3;
        pcVar17 = (char *)(param_2[8] + local_14);
        pcVar17[0x12] = pcVar17[0x12] | 8;
        pcVar17[0x13] = '\x01';
        pbVar6 = local_28;
      }
      pcStack_1c = pcVar15;
      local_28 = pbVar6;
      FUN_00478b30(local_10,local_28);
      uVar21 = FUN_004994d0(*(char **)(local_28 + 8));
      *(undefined4 *)(pcStack_1c + 8) = *(undefined4 *)((int)uVar21 + 0x18);
      *(int *)(pcStack_1c + 0xc) = (int)*(short *)((int)uVar21 + 0x1c);
      *(uint *)(pcStack_1c + 0x1c) = uVar16 | local_40;
      *(uint *)(pcStack_1c + 0x18) = (uint)uVar18 | local_18;
      *(uint *)(pcStack_1c + 0x20) = local_2c;
      *(uint *)(pcStack_1c + 0x24) = local_34;
      sVar9 = FUN_00483b70((uint)*(byte *)((ulonglong)uVar21 >> 0x20));
      uVar19 = CONCAT44(local_34,local_2c);
      *(short *)(pcStack_1c + 0x10) = sVar9;
    }
  }
  else if ((*pbVar2 == 0x47) && (*(char *)(param_2 + 5) == 'E')) {
    iVar10 = *(int *)(pbVar2 + 0x10);
    local_34 = 0;
    local_48 = 0;
    do {
      iVar11 = local_c;
      pcVar17 = (char *)FUN_00478bb0(local_c,*(undefined4 **)(local_48 + *(int *)(iVar10 + 8)),0,
                                     (int *)0x0);
      pcVar15 = (char *)FUN_00478bb0(iVar11,*(undefined4 **)(pbVar2 + 8),0,(int *)0x0);
      pcVar17 = FUN_004a1440(local_10,(uint)(byte)(&DAT_00569bec)[local_34],pcVar15,pcVar17,
                             (undefined4 *)0x0);
      iVar11 = FUN_004c1f00(param_2,pcVar17,3);
      FUN_00477d60(param_1,param_2,iVar11);
      local_34 = local_34 + 1;
      uVar19 = CONCAT44(local_34,local_2c);
      pcVar17 = (char *)(local_14 + param_2[8]);
      *(int *)(param_2[8] + 4 + iVar11 * 0x28) = param_3;
      local_48 = local_48 + 0x14;
    } while (local_48 < 0x28);
    pcVar17[0x13] = '\x02';
  }
  else if (*pbVar2 == 0x44) {
    FUN_00478460(param_1,param_2,param_3);
    uVar19 = CONCAT44(local_34,local_2c);
    pcVar17 = (char *)(param_2[8] + local_14);
  }
  local_34 = (uint)(uVar19 >> 0x20);
  local_2c = (uint)uVar19;
  if (*(char *)(param_2 + 5) == 'E') {
    bVar7 = FUN_0047ee40(local_10,(char *)pbVar2,(int *)&local_3c,&local_24,(uint *)&local_38);
    iVar10 = local_c;
    uVar19 = CONCAT44(local_34,local_2c);
    if (CONCAT31(extraout_var,bVar7) != 0) {
      puVar14 = *(undefined4 **)(*(int *)(*(int *)(pbVar2 + 0x10) + 8) + 0x14);
      puVar12 = FUN_00478bb0(local_c,(undefined4 *)local_3c,0,(int *)0x0);
      if (*(char *)(iVar10 + 0x38) == '\0') {
        pcVar17 = (char *)puVar12[1];
        uVar16 = 0;
        if (pcVar17 != (char *)0x0) {
          cVar1 = *pcVar17;
          pcVar15 = pcVar17;
          while (cVar1 != '\0') {
            pcVar15 = pcVar15 + 1;
            cVar1 = *pcVar15;
          }
          uVar16 = (int)pcVar15 - (int)pcVar17 & 0x3fffffff;
        }
        bVar8 = pcVar17[uVar16 - 1];
        local_34 = local_24;
        if (local_38 != (char *)0x0) {
          if (bVar8 == 0x40) {
            local_34 = 0;
          }
          bVar8 = (&DAT_00569620)[bVar8];
        }
        pcVar17[uVar16 - 1] = bVar8 + 1;
      }
      else {
        local_34 = local_24;
      }
      local_30 = "NOCASE";
      if (local_38 == (char *)0x0) {
        local_30 = "BINARY";
      }
      local_2c = 6;
      param_2 = FUN_00478bb0(iVar10,puVar14,0,(int *)0x0);
      piVar3 = local_10;
      puVar13 = FUN_00496510(*local_10,0x5c,&local_30,1);
      if (puVar13 != (undefined4 *)0x0) {
        *(ushort *)((int)puVar13 + 2) = *(ushort *)((int)puVar13 + 2) | 0x100;
        puVar13[2] = param_2;
        param_2 = puVar13;
      }
      local_38 = (char *)FUN_00494b90(*piVar3,0x2c);
      if (local_38 != (char *)0x0) {
        memset(local_38,0,0x2c);
        *local_38 = 'P';
        local_38[0x1e] = -1;
        local_38[0x1f] = -1;
        local_38[0x14] = '\x01';
        local_38[0x15] = '\0';
        local_38[0x16] = '\0';
        local_38[0x17] = '\0';
      }
      FUN_00496a30(*piVar3,(int)local_38,param_2,(undefined4 *)local_3c);
      if ((local_38 != (char *)0x0) && (*(int *)(*piVar3 + 0x5c) < *(int *)(local_38 + 0x14))) {
        FUN_004962b0(piVar3,(byte *)"Expression tree is too large (maximum depth %d)");
      }
      local_38 = (char *)FUN_004c1f00(puVar5,local_38,3);
      FUN_00477d60(param_1,puVar5,(int)local_38);
      param_2 = FUN_00478bb0(local_c,puVar14,0,(int *)0x0);
      puVar14 = FUN_00496510(*piVar3,0x5c,&local_30,1);
      if (puVar14 != (undefined4 *)0x0) {
        puVar14[2] = param_2;
        *(ushort *)((int)puVar14 + 2) = *(ushort *)((int)puVar14 + 2) | 0x100;
        param_2 = puVar14;
      }
      local_3c = (char *)FUN_00494b90(*piVar3,0x2c);
      if (local_3c != (char *)0x0) {
        memset(local_3c,0,0x2c);
        *local_3c = 'O';
        local_3c[0x1e] = -1;
        local_3c[0x1f] = -1;
        local_3c[0x14] = '\x01';
        local_3c[0x15] = '\0';
        local_3c[0x16] = '\0';
        local_3c[0x17] = '\0';
      }
      FUN_00496a30(*piVar3,(int)local_3c,param_2,puVar12);
      if ((local_3c != (char *)0x0) && (*(int *)(*piVar3 + 0x5c) < *(int *)(local_3c + 0x14))) {
        FUN_004962b0(piVar3,(byte *)"Expression tree is too large (maximum depth %d)");
      }
      iVar10 = FUN_004c1f00(puVar5,local_3c,3);
      FUN_00477d60(param_1,puVar5,iVar10);
      pcVar17 = (char *)(local_14 + puVar5[8]);
      uVar19 = CONCAT44(local_34,local_2c);
      if (local_34 != 0) {
        *(int *)(puVar5[8] + 4 + (int)local_38 * 0x28) = param_3;
        *(int *)(puVar5[8] + 4 + iVar10 * 0x28) = param_3;
        pcVar17[0x13] = '\x02';
        uVar19 = CONCAT44(local_34,local_2c);
      }
    }
  }
  local_34 = (uint)(uVar19 >> 0x20);
  local_2c = (uint)uVar19;
  if ((((*pbVar2 == 0x97) &&
       (iVar10 = FUN_004bcc60(*(byte **)(pbVar2 + 4),(byte *)"match"), iVar10 == 0)) &&
      (piVar3 = *(int **)(pbVar2 + 0x10), *piVar3 == 2)) && (**(char **)(piVar3[2] + 0x14) == -0x68)
     ) {
    pcVar15 = *(char **)piVar3[2];
    pcVar4 = (char *)((undefined4 *)piVar3[2])[5];
    uVar18 = FUN_004791b0(local_8,pcVar15);
    uVar19 = FUN_004791b0(local_8,pcVar4);
    if ((uVar18 & uVar19) == 0) {
      local_3c = (char *)FUN_00478bb0(local_c,(undefined4 *)pcVar15,0,(int *)0x0);
      piVar3 = local_10;
      pcVar17 = (char *)FUN_00494b90(*local_10,0x2c);
      if (pcVar17 != (char *)0x0) {
        memset(pcVar17,0,0x2c);
        *pcVar17 = '2';
        pcVar17[0x1e] = -1;
        pcVar17[0x1f] = -1;
        pcVar17[0x14] = '\x01';
        pcVar17[0x15] = '\0';
        pcVar17[0x16] = '\0';
        pcVar17[0x17] = '\0';
      }
      FUN_00496a30(*piVar3,(int)pcVar17,(undefined4 *)0x0,(undefined4 *)local_3c);
      if ((pcVar17 != (char *)0x0) && (*(int *)(*piVar3 + 0x5c) < *(int *)(pcVar17 + 0x14))) {
        FUN_004962b0(piVar3,(byte *)"Expression tree is too large (maximum depth %d)");
      }
      iVar10 = FUN_004c1f00(puVar5,pcVar17,3);
      iVar10 = puVar5[8] + iVar10 * 0x28;
      *(ulonglong *)(iVar10 + 0x18) = uVar18;
      *(undefined4 *)(iVar10 + 8) = *(undefined4 *)(pcVar4 + 0x18);
      *(int *)(iVar10 + 0xc) = (int)*(short *)(pcVar4 + 0x1c);
      *(undefined2 *)(iVar10 + 0x10) = 0x40;
      *(int *)(iVar10 + 4) = param_3;
      pcVar17 = (char *)(puVar5[8] + local_14);
      pcVar17[0x12] = pcVar17[0x12] | 8;
      pcVar17[0x13] = '\x01';
      *(undefined4 *)(iVar10 + 0x20) = *(undefined4 *)(pcVar17 + 0x20);
      *(undefined4 *)(iVar10 + 0x24) = *(undefined4 *)(pcVar17 + 0x24);
    }
  }
  *(uint *)(pcVar17 + 0x18) = *(uint *)(pcVar17 + 0x18) | local_18;
  *(uint *)(pcVar17 + 0x1c) = *(uint *)(pcVar17 + 0x1c) | local_40;
  return;
}


/* FUN_00478460 @ 00478460  kind=lib  attributed-by=lib-island  size=1422 */

void __cdecl FUN_00478460(undefined4 param_1,undefined4 *param_2,int param_3)

{
  byte bVar1;
  int *piVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  char cVar10;
  undefined2 uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  char *_Dst;
  int iVar14;
  undefined4 *puVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
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
  puVar15 = (undefined4 *)(param_2[8] + param_3 * 0x28);
  iVar14 = *piVar2;
  pbVar3 = (byte *)*puVar15;
  puVar12 = FUN_00494b90(iVar14,0x170);
  if (puVar12 != (undefined4 *)0x0) {
    memset(puVar12,0,0x170);
  }
  puVar15[3] = puVar12;
  if (puVar12 != (undefined4 *)0x0) {
    *(byte *)((int)puVar15 + 0x12) = *(byte *)((int)puVar15 + 0x12) | 0x10;
    uVar11 = *(undefined2 *)((int)param_2 + 0x16);
    *puVar12 = *param_2;
    puVar12[1] = piVar22;
    puVar12[4] = 0;
    puVar12[6] = 0;
    puVar12[7] = 8;
    puVar12[8] = puVar12 + 10;
    puVar12[2] = 0;
    puVar12[3] = 0;
    *(undefined2 *)((int)puVar12 + 0x16) = uVar11;
    FUN_004c2110(puVar12,pbVar3,0x44);
    iVar24 = puVar12[6];
    while (iVar24 = iVar24 + -1, -1 < iVar24) {
      FUN_00477d60(param_1,puVar12,iVar24);
    }
    if (*(char *)(iVar14 + 0x38) == '\0') {
      iVar24 = puVar12[6];
      puVar20 = (undefined4 *)puVar12[8];
      uVar17 = 0xffffffff;
      uVar16 = 0xffffffff;
      local_c = ~param_2[2];
      uStack_3c = ~param_2[3];
      local_18 = 0xffffffff;
      local_1c = 0xffffffff;
      local_10 = uStack_3c;
      while ((iVar24 = iVar24 + -1, -1 < iVar24 && (uVar17 != 0 || uVar16 != 0))) {
        if ((char)*(undefined2 *)(puVar20 + 4) == '\0') {
          puVar13 = FUN_00494b90(iVar14,0x168);
          uStack_3c = 0;
          if (puVar13 == (undefined4 *)0x0) {
            local_10 = 0;
            local_c = 0;
            uVar16 = local_1c;
            uVar17 = local_18;
          }
          else {
            *(byte *)((int)puVar20 + 0x12) = *(byte *)((int)puVar20 + 0x12) | 0x20;
            *(undefined2 *)(puVar20 + 4) = 0x200;
            puVar20[3] = puVar13;
            uVar11 = *(undefined2 *)((int)param_2 + 0x16);
            *puVar13 = *param_2;
            puVar13[1] = piVar22;
            puVar13[4] = 0;
            puVar13[6] = 0;
            puVar13[7] = 8;
            puVar13[8] = puVar13 + 10;
            puVar13[2] = 0;
            puVar13[3] = 0;
            *(undefined2 *)((int)puVar13 + 0x16) = uVar11;
            FUN_004c2110(puVar13,(byte *)*puVar20,0x45);
            iVar23 = puVar13[6];
            while (iVar23 = iVar23 + -1, -1 < iVar23) {
              FUN_00477d60(param_1,puVar13,iVar23);
            }
            puVar13[4] = param_2;
            local_4c = 0;
            uStack_48 = 0;
            if (*(char *)(iVar14 + 0x38) == '\0') {
              puVar19 = (undefined4 *)puVar13[8];
              iVar23 = puVar13[6];
              if (0 < iVar23) {
                local_10 = 0;
                do {
                  bVar1 = *(byte *)*puVar19;
                  if ((bVar1 == 0x48) || (((0x4b < bVar1 && (bVar1 < 0x51)) || (bVar1 == 0x49)))) {
                    uVar25 = FUN_0047d410(piVar22,puVar19[2]);
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
            uVar16 = local_1c & uStack_48;
            uVar17 = local_18 & local_4c;
            local_1c = local_1c & uStack_48;
            local_18 = local_18 & local_4c;
          }
        }
        else {
          bVar1 = *(byte *)((int)puVar20 + 0x12);
          if ((bVar1 & 8) == 0) {
            uVar26 = FUN_0047d410(piVar22,puVar20[2]);
            if ((bVar1 & 2) != 0) {
              uVar27 = FUN_0047d410(piVar22,*(int *)(puVar12[8] + 8 + puVar20[1] * 0x28));
              uVar26 = uVar27 | uVar26;
            }
            uStack_3c = (uint)(uVar26 >> 0x20);
            uVar17 = local_18 & (uint)uVar26;
            uVar16 = local_1c & uStack_3c;
            local_1c = uVar16;
            local_18 = uVar17;
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
      puVar12[0x5a] = uVar17;
      puVar12[0x5b] = uVar16;
      if (uVar17 == 0 && uVar16 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = 0x100;
      }
      *(undefined2 *)(puVar15 + 4) = uVar11;
      if (local_c != 0 || uStack_3c != 0) {
        bVar7 = false;
        local_1c = -1;
        local_18 = 0;
LAB_00478790:
        if (!bVar7) {
          iVar23 = puVar12[6] + -1;
          iVar24 = puVar12[8];
          if (iVar23 < 0) {
            return;
          }
          do {
            iVar4 = *(int *)(iVar24 + 8);
            *(byte *)(iVar24 + 0x12) = *(byte *)(iVar24 + 0x12) & 0xbf;
            if (iVar4 != local_1c) {
              uVar17 = 0;
              piVar6 = piVar22;
              if (0 < *piVar22) {
                do {
                  if (piVar6[1] == iVar4) {
                    local_4c = 1 << (uVar17 & 0x1f);
                    uStack_48 = 0;
                    if (0x1f < uVar17) {
                      uStack_48 = local_4c;
                    }
                    local_4c = local_4c ^ uStack_48;
                    if (0x3f < uVar17) {
                      uStack_48 = local_4c;
                    }
                    goto LAB_004787da;
                  }
                  uVar17 = uVar17 + 1;
                  piVar6 = piVar6 + 1;
                } while ((int)uVar17 < *piVar22);
              }
              uStack_48 = 0;
              local_4c = 0;
LAB_004787da:
              if ((local_4c & local_c) != 0 || (uStack_48 & local_10) != 0) goto LAB_0047880b;
            }
            iVar24 = iVar24 + 0x28;
            iVar23 = iVar23 + -1;
            if (iVar23 < 0) {
              return;
            }
          } while( true );
        }
        goto LAB_0047889a;
      }
    }
  }
  return;
LAB_0047880b:
  iVar5 = *(int *)(iVar24 + 0xc);
  bVar7 = true;
  bVar8 = true;
  pbVar21 = (byte *)(iVar24 + 0x12);
  do {
    if (!bVar7) break;
    if (*(int *)(pbVar21 + -10) == iVar4) {
      if (*(int *)(pbVar21 + -6) == iVar5) {
        iVar24 = *(int *)(pbVar21 + -0x12);
        cVar9 = FUN_00496480(*(char **)(iVar24 + 0xc));
        if ((cVar9 == '\0') || (cVar10 = FUN_00496480(*(char **)(iVar24 + 8)), cVar9 == cVar10)) {
          *pbVar21 = *pbVar21 | 0x40;
          bVar7 = bVar8;
        }
        else {
          bVar8 = false;
          bVar7 = bVar8;
        }
      }
      else {
        bVar8 = false;
        bVar7 = false;
      }
    }
    else {
      *pbVar21 = *pbVar21 & 0xbf;
    }
    pbVar21 = pbVar21 + 0x28;
    iVar23 = iVar23 + -1;
  } while (-1 < iVar23);
  local_18 = local_18 + 1;
  local_1c = iVar4;
  if (1 < (int)local_18) {
    if (!bVar7) {
      return;
    }
LAB_0047889a:
    iVar24 = puVar12[6];
    piVar22 = (int *)puVar12[8];
    puVar18 = (uint *)0x0;
    puVar12 = (undefined4 *)0x0;
    while (iVar24 = iVar24 + -1, -1 < iVar24) {
      if ((*(byte *)((int)piVar22 + 0x12) & 0x40) != 0) {
        puVar12 = FUN_00478bb0(iVar14,*(undefined4 **)(*piVar22 + 0xc),0,(int *)0x0);
        puVar18 = FUN_00498f00((int *)*param_2,puVar18,puVar12);
        puVar12 = *(undefined4 **)(*piVar22 + 8);
      }
      piVar22 = piVar22 + 10;
    }
    puVar12 = FUN_00478bb0(iVar14,puVar12,0,(int *)0x0);
    _Dst = (char *)FUN_00494b90(*piVar2,0x2c);
    if (_Dst != (char *)0x0) {
      memset(_Dst,0,0x2c);
      *_Dst = 'H';
      _Dst[0x1e] = -1;
      _Dst[0x1f] = -1;
      _Dst[0x14] = '\x01';
      _Dst[0x15] = '\0';
      _Dst[0x16] = '\0';
      _Dst[0x17] = '\0';
    }
    iVar24 = *piVar2;
    if (_Dst != (char *)0x0) {
      if (puVar12 != (undefined4 *)0x0) {
        *(undefined4 **)(_Dst + 8) = puVar12;
        *(ushort *)(_Dst + 2) = *(ushort *)(_Dst + 2) | *(ushort *)((int)puVar12 + 2) & 0x100;
      }
      FUN_004790b0((int)_Dst);
      if (*(int *)(*piVar2 + 0x5c) < *(int *)(_Dst + 0x14)) {
        FUN_004962b0(piVar2,(byte *)"Expression tree is too large (maximum depth %d)");
      }
      *(ushort *)(_Dst + 2) = *(ushort *)(_Dst + 2) | *(ushort *)(pbVar3 + 2) & 1;
      uVar11 = *(undefined2 *)(pbVar3 + 0x20);
      *(uint **)(_Dst + 0x10) = puVar18;
      *(undefined2 *)(_Dst + 0x20) = uVar11;
      iVar14 = FUN_004c1f00(param_2,_Dst,3);
      FUN_00477d60(param_1,param_2,iVar14);
      iVar24 = param_3 * 0x28 + param_2[8];
      *(int *)(param_2[8] + 4 + iVar14 * 0x28) = param_3;
      *(undefined1 *)(iVar24 + 0x13) = 1;
      *(undefined2 *)(iVar24 + 0x10) = 0x800;
      return;
    }
    FUN_00498790(iVar24,puVar12);
    FUN_00498790(iVar24,(undefined4 *)0x0);
    FUN_00499060(iVar14,(int *)puVar18);
    *(undefined2 *)(puVar15 + 4) = 0x800;
    return;
  }
  goto LAB_00478790;
}


/* FUN_004789f0 @ 004789f0  kind=lib  attributed-by=lib-island  size=312 */

void __cdecl FUN_004789f0(int param_1,int param_2,int param_3,int param_4,uint param_5)

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
  byte local_5c [8];
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
  iVar3 = FUN_00497780((int *)param_1,(byte *)&local_30,iVar5);
  if (iVar3 != iVar5) {
    FUN_004a68f0(param_1,iVar5);
    iVar5 = 0;
  }
  local_18 = CONCAT44(local_18._4_4_,iVar3);
  local_30 = CONCAT71(local_30._1_7_,0x84);
  if (param_4 == 0) {
    FUN_004988a0((int *)param_1,(char *)local_5c,param_3,param_5);
  }
  else {
    FUN_00498b60((int *)param_1,local_5c,param_3,param_5);
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


/* FUN_00478b30 @ 00478b30  kind=lib  attributed-by=lib-island  size=121 */

void __cdecl FUN_00478b30(int *param_1,byte *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  ushort uVar4;
  
  uVar1 = *(ushort *)(*(int *)(param_2 + 0xc) + 2);
  uVar4 = uVar1 & 0x100;
  if (uVar4 == (*(ushort *)(*(char **)(param_2 + 8) + 2) & 0x100)) {
    if (uVar4 == 0) {
      uVar3 = FUN_004984d0(param_1,*(char **)(param_2 + 8));
      if (uVar3 != 0) {
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


/* FUN_00478bb0 @ 00478bb0  kind=lib  attributed-by=lib-island  size=554 */

undefined4 * __cdecl FUN_00478bb0(int param_1,undefined4 *param_2,uint param_3,int *param_4)

{
  ushort uVar1;
  undefined4 *_Dst;
  uint uVar2;
  uint uVar3;
  void *_Dst_00;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint extraout_EDX;
  size_t _Size;
  size_t local_14;
  ushort local_10;
  
  puVar6 = param_2;
  if (param_2 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  uVar7 = param_3 & 1;
  local_10 = 0;
  if (param_4 == (int *)0x0) {
    uVar2 = FUN_00477240((int)param_2,param_3);
    _Dst = FUN_00494b90(param_1,uVar2);
  }
  else {
    _Dst = (undefined4 *)*param_4;
    local_10 = 0x8000;
  }
  if (_Dst != (undefined4 *)0x0) {
    if (uVar7 == 0) {
      uVar2 = 0x2c;
    }
    else if (((puVar6[2] != 0) || (puVar6[3] != 0)) || (uVar2 = 0x4008, puVar6[4] != 0)) {
      uVar2 = 0x2018;
    }
    uVar1 = *(ushort *)((int)puVar6 + 2);
    param_2 = _Dst;
    if (((uVar1 & 0x400) == 0) && ((char *)puVar6[1] != (char *)0x0)) {
      uVar3 = FUN_004aa9b0((char *)puVar6[1]);
      local_14 = uVar3 + 1;
      uVar3 = extraout_EDX;
    }
    else {
      local_14 = 0;
      uVar3 = uVar7;
    }
    if (uVar3 == 0) {
      if ((uVar1 & 0x4000) == 0) {
        _Size = (-(uint)((uVar1 & 0x2000) != 0) & 0xffffffec) + 0x2c;
      }
      else {
        _Size = 8;
      }
      memcpy(_Dst,puVar6,_Size);
      memset((void *)((int)param_2 + _Size),0,0x2c - _Size);
    }
    else {
      memcpy(_Dst,puVar6,uVar2 & 0xfff);
    }
    *(ushort *)((int)_Dst + 2) =
         (ushort)uVar2 & 0x6000 | *(ushort *)((int)_Dst + 2) & 0x1fff | local_10;
    if (local_14 != 0) {
      _Dst_00 = (void *)((int)param_2 + (uVar2 & 0xfff));
      _Dst[1] = _Dst_00;
      memcpy(_Dst_00,(void *)puVar6[1],local_14);
    }
    if (((*(ushort *)((int)_Dst + 2) | *(ushort *)((int)puVar6 + 2)) & 0x4000) == 0) {
      if ((*(ushort *)((int)puVar6 + 2) & 0x800) == 0) {
        piVar4 = FUN_00499140(param_1,(int *)puVar6[4],uVar7);
      }
      else {
        piVar4 = FUN_004a9680(param_1,(int *)puVar6[4],uVar7);
      }
      _Dst[4] = piVar4;
    }
    if ((*(ushort *)((int)_Dst + 2) & 0x6000) == 0) {
      *(undefined1 *)((int)_Dst + 0x22) = 0;
      if ((*(ushort *)((int)puVar6 + 2) & 0x4000) == 0) {
        puVar5 = FUN_00478bb0(param_1,(undefined4 *)puVar6[2],0,(int *)0x0);
        _Dst[2] = puVar5;
        puVar6 = FUN_00478bb0(param_1,(undefined4 *)puVar6[3],0,(int *)0x0);
        _Dst[3] = puVar6;
        return _Dst;
      }
    }
    else {
      uVar7 = FUN_004771d0((int)puVar6,param_3);
      param_2 = (undefined4 *)((int)param_2 + uVar7);
      if ((*(ushort *)((int)_Dst + 2) & 0x2000) != 0) {
        puVar5 = FUN_00478bb0(param_1,(undefined4 *)puVar6[2],1,(int *)&param_2);
        _Dst[2] = puVar5;
        puVar6 = FUN_00478bb0(param_1,(undefined4 *)puVar6[3],1,(int *)&param_2);
        _Dst[3] = puVar6;
      }
      if (param_4 != (int *)0x0) {
        *param_4 = (int)param_2;
      }
    }
  }
  return _Dst;
}


/* FUN_00478de0 @ 00478de0  kind=lib  attributed-by=lib-island  size=119 */

undefined8 __cdecl FUN_00478de0(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
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
      uVar4 = FUN_004791b0(param_1,*(char **)(piVar1[2] + iVar2));
      param_2 = (int *)((uint)param_2 | (uint)uVar4);
      local_8 = local_8 | (uint)(uVar4 >> 0x20);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x14;
    } while (iVar3 < *piVar1);
    return CONCAT44(local_8,param_2);
  }
  return 0;
}


/* FUN_00478f40 @ 00478f40  kind=lib  attributed-by=lib-island  size=349 */

undefined8 __cdecl FUN_00478f40(int *param_1,undefined4 *param_2)

{
  short *psVar1;
  int *piVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
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
        uVar6 = FUN_004791b0(param_1,*(char **)(piVar2[2] + iVar4));
        local_8 = local_8 | (uint)uVar6;
        local_c = local_c | (uint)(uVar6 >> 0x20);
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 0x14;
      } while (iVar5 < *piVar2);
    }
    uVar7 = FUN_00478de0(param_1,(int *)param_2[0xc]);
    uVar8 = FUN_00478de0(param_1,(int *)param_2[0xe]);
    uVar6 = FUN_004791b0(param_1,(char *)param_2[0xb]);
    uVar9 = FUN_004791b0(param_1,(char *)param_2[0xd]);
    local_14 = local_14 | (uint)uVar7 | local_8 | (uint)uVar8 | (uint)uVar6 | (uint)uVar9;
    local_10 = local_10 | (uint)((ulonglong)uVar7 >> 0x20) | local_c |
               (uint)((ulonglong)uVar8 >> 0x20) | (uint)(uVar6 >> 0x20) | (uint)(uVar9 >> 0x20);
    if ((psVar1 != (short *)0x0) && (local_c = 0, 0 < *psVar1)) {
      psVar3 = psVar1 + 0x1c;
      do {
        uVar7 = FUN_00478f40(param_1,*(undefined4 **)(psVar3 + -0xe));
        uVar6 = FUN_004791b0(param_1,*(char **)psVar3);
        local_14 = local_14 | (uint)uVar7 | (uint)uVar6;
        local_c = local_c + 1;
        local_10 = local_10 | (uint)((ulonglong)uVar7 >> 0x20) | (uint)(uVar6 >> 0x20);
        psVar3 = psVar3 + 0x24;
      } while ((int)local_c < (int)*psVar1);
    }
    param_2 = (undefined4 *)param_2[0xf];
  } while (param_2 != (undefined4 *)0x0);
  return CONCAT44(local_10,local_14);
}


/* FUN_004790b0 @ 004790b0  kind=lib  attributed-by=lib-island  size=146 */

void __cdecl FUN_004790b0(int param_1)

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
  FUN_0047e0d0(*(undefined4 **)(param_1 + 0x10),&local_8);
  *(int *)(param_1 + 0x14) = local_8 + 1;
  return;
}


/* FUN_004791b0 @ 004791b0  kind=lib  attributed-by=lib-island  size=134 */

ulonglong __cdecl FUN_004791b0(int *param_1,char *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (param_2 == (char *)0x0) {
    return 0;
  }
  if (*param_2 == -0x68) {
    uVar1 = FUN_0047d410(param_1,*(int *)(param_2 + 0x18));
    return uVar1;
  }
  uVar1 = FUN_004791b0(param_1,*(char **)(param_2 + 0xc));
  uVar2 = FUN_004791b0(param_1,*(char **)(param_2 + 8));
  if ((*(ushort *)(param_2 + 2) & 0x800) != 0) {
    uVar3 = FUN_00478f40(param_1,*(int **)(param_2 + 0x10));
    return uVar3 | uVar1 | uVar2;
  }
  uVar3 = FUN_00478de0(param_1,*(int **)(param_2 + 0x10));
  return uVar1 | uVar2 | uVar3;
}


/* FUN_00479240 @ 00479240  kind=lib  attributed-by=lib-island  size=136 */

int __cdecl FUN_00479240(int param_1,uint *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x88 + *(short *)(param_1 + 0x5e) * 4);
  if (*(short *)(param_1 + 0x42) == 0) {
    uVar2 = (uint)*(ushort *)(param_1 + 0x60 + *(short *)(param_1 + 0x5e) * 2);
    FUN_00471710(iVar1,(uint)(CONCAT11(*(undefined1 *)(*(int *)(iVar1 + 0x40) + uVar2 * 2),
                                       *(undefined1 *)(*(int *)(iVar1 + 0x40) + 1 + uVar2 * 2)) &
                             *(ushort *)(iVar1 + 0x12)) + *(int *)(iVar1 + 0x38),
                 (uint *)(param_1 + 0x28));
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


/* FUN_004792d0 @ 004792d0  kind=lib  attributed-by=lib-island  size=140 */

int __cdecl FUN_004792d0(int param_1,int *param_2,int *param_3)

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
  FUN_00494b00(param_1,(undefined4 *)param_2[1]);
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


/* FUN_00479360 @ 00479360  kind=lib  attributed-by=lib-island  size=133 */

void __cdecl
FUN_00479360(int param_1,undefined4 param_2,undefined8 *param_3,uint param_4,uint param_5)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  
  uVar1 = *(uint *)(*(int *)(*(int *)(*(int *)(param_1 + 0x10) + 4) + 4) + 0x20);
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  puVar2 = FUN_00494b90(param_1,uVar1);
  *(undefined4 **)((int)param_3 + 4) = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    *(undefined4 *)param_3 = 7;
    return;
  }
  uVar4 = __allrem(param_4,param_5,uVar1,(int)uVar1 >> 0x1f);
  uVar3 = (uint)uVar4;
  *(uint *)((int)param_3 + 0xc) = uVar3;
  *(uint *)(param_3 + 2) = uVar3;
  *(uint *)((int)param_3 + 0x1c) = (param_5 - ((int)uVar3 >> 0x1f)) - (uint)(param_4 < uVar3);
  *(uint *)(param_3 + 1) = uVar1;
  *(uint *)(param_3 + 3) = param_4 - uVar3;
  *(undefined4 *)(param_3 + 4) = param_2;
  return;
}


/* FUN_004793f0 @ 004793f0  kind=lib  attributed-by=lib-island  size=191 */

void __cdecl FUN_004793f0(int *param_1,int param_2,size_t param_3)

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


/* FUN_004794b0 @ 004794b0  kind=lib  attributed-by=lib-island  size=838 */

uint * __cdecl
FUN_004794b0(size_t param_1,uint *param_2,void *param_3,uint param_4,uint param_5,void *param_6,
            size_t param_7,size_t param_8,uint *param_9)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar9;
  uint uVar10;
  size_t _Size;
  size_t sVar11;
  uint local_40 [5];
  ushort local_2a;
  ushort local_28;
  ushort local_26;
  undefined4 *local_20;
  int *local_1c;
  undefined4 *local_18;
  int local_14;
  undefined4 *local_10;
  int local_c;
  void *local_8;
  undefined4 *puVar8;
  
  sVar11 = param_1;
  local_c = 0;
  local_1c = *(int **)(param_1 + 0x34);
  puVar6 = (undefined4 *)0x0;
  iVar9 = 0;
  if (*(char *)(param_1 + 3) == '\0') {
    iVar9 = 4;
  }
  local_14 = 0;
  local_10 = (undefined4 *)0x0;
  if (*(char *)(param_1 + 4) == '\0') {
    param_8 = 0;
    param_7 = 0;
  }
  else {
    iVar3 = FUN_004a5fc0((byte *)((int)param_2 + iVar9),param_8 + param_7,
                         (int)(param_8 + param_7) >> 0x1f);
    iVar9 = iVar9 + iVar3;
  }
  param_1 = param_4;
  iVar3 = FUN_004a5fc0((byte *)((int)param_2 + iVar9),param_4,param_5);
  FUN_00471710(sVar11,(uint)param_2,local_40);
  param_8 = param_8 + param_7;
  if (*(char *)(sVar11 + 2) == '\0') {
    if ((0 < (int)param_5) ||
       (((-1 < (int)param_5 && (0x7fffffff < param_4)) ||
        (local_8 = param_3, param_3 == (void *)0x0)))) {
      FUN_004683f0(0xb,"database corruption at line %d of [%.10s]");
      return (uint *)0xb;
    }
    param_8 = param_8 + param_4;
  }
  else {
    local_8 = param_6;
    param_1 = param_7;
    param_7 = 0;
  }
  sVar11 = (size_t)local_2a;
  *param_9 = (uint)local_26;
  local_18 = (undefined4 *)((uint)local_28 + (int)param_2);
  param_2 = (uint *)(iVar9 + iVar3 + (int)param_2);
  if (0 < (int)param_8) {
    do {
      piVar2 = local_1c;
      if (sVar11 == 0) {
        puVar8 = puVar6;
        puVar7 = puVar6;
        if (*(char *)((int)local_1c + 0x11) != '\0') {
          do {
            puVar7 = (undefined4 *)((int)puVar8 + 1);
            if (puVar7 < (undefined4 *)0x2) {
              puVar5 = (undefined4 *)0x0;
            }
            else {
              uVar10 = (uint)local_1c[9] / 5 + 1;
              iVar9 = (((int)puVar8 - 1U) / uVar10) * uVar10;
              puVar5 = (undefined4 *)(iVar9 + 2);
              if (puVar5 == (undefined4 *)(DAT_00582bb8 / (uint)local_1c[8] + 1)) {
                puVar5 = (undefined4 *)(iVar9 + 3);
              }
            }
            puVar8 = puVar7;
          } while ((puVar5 == puVar7) ||
                  (local_10 = puVar7, puVar7 == (undefined4 *)(DAT_00582bb8 / (uint)local_1c[8] + 1)
                  ));
        }
        local_20 = puVar6;
        puVar4 = (uint *)FUN_0046bae0(local_1c,&local_14,(uint *)&local_10,puVar7,'\0');
        puVar6 = local_10;
        param_2 = puVar4;
        if (*(char *)((int)piVar2 + 0x11) == '\0') {
LAB_00479686:
          if (puVar4 != (uint *)0x0) {
LAB_00479799:
            if ((local_c != 0) &&
               (puVar6 = *(undefined4 **)(local_c + 0x44), puVar6 != (undefined4 *)0x0)) {
              puVar1 = (uint *)puVar6[4];
              FUN_004a3a80(puVar6);
              if (*(int *)(puVar1[0x2d] + 0xc) == 0) {
                FUN_00484370(puVar1);
              }
            }
            return puVar4;
          }
        }
        else {
          if (puVar4 != (uint *)0x0) goto LAB_00479799;
          FUN_004870c0(piVar2,(uint)local_10,(local_20 != (undefined4 *)0x0) + '\x03',(int)local_20,
                       (uint *)&param_2);
          puVar4 = param_2;
          if (param_2 != (uint *)0x0) {
            if ((local_14 != 0) &&
               (puVar8 = *(undefined4 **)(local_14 + 0x44), puVar8 != (undefined4 *)0x0)) {
              param_2 = (uint *)puVar8[4];
              FUN_004a3a80(puVar8);
              if (*(int *)(param_2[0x2d] + 0xc) == 0) {
                FUN_00484370(param_2);
              }
            }
            goto LAB_00479686;
          }
        }
        *(char *)local_18 = (char)((uint)puVar6 >> 0x18);
        *(char *)((int)local_18 + 1) = (char)((uint)puVar6 >> 0x10);
        *(char *)((int)local_18 + 2) = (char)((uint)puVar6 >> 8);
        *(char *)((int)local_18 + 3) = (char)puVar6;
        if ((local_c != 0) &&
           (puVar8 = *(undefined4 **)(local_c + 0x44), puVar8 != (undefined4 *)0x0)) {
          puVar4 = (uint *)puVar8[4];
          FUN_004a3a80(puVar8);
          if (*(int *)(puVar4[0x2d] + 0xc) == 0) {
            FUN_00484370(puVar4);
          }
        }
        local_c = local_14;
        local_18 = *(undefined4 **)(local_14 + 0x38);
        *local_18 = 0;
        param_2 = (uint *)(*(int *)(local_14 + 0x38) + 4);
        sVar11 = piVar2[9] - 4;
      }
      _Size = param_8;
      if ((int)sVar11 < (int)param_8) {
        _Size = sVar11;
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
      param_2 = (uint *)((int)param_2 + _Size);
      sVar11 = sVar11 - _Size;
      if (param_1 == 0) {
        param_1 = param_7;
        local_8 = param_6;
      }
    } while (0 < (int)param_8);
    if ((local_c != 0) && (puVar6 = *(undefined4 **)(local_c + 0x44), puVar6 != (undefined4 *)0x0))
    {
      puVar4 = (uint *)puVar6[4];
      FUN_004a3a80(puVar6);
      if (*(int *)(puVar4[0x2d] + 0xc) == 0) {
        FUN_00484370(puVar4);
      }
    }
  }
  return (uint *)0x0;
}


/* FUN_00479800 @ 00479800  kind=lib  attributed-by=lib-island  size=272 */

void __cdecl FUN_00479800(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
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
      if (*(int **)(*piVar6 + 0x10) == (int *)0x0) {
        param_1 = 0;
      }
      else {
        param_1 = **(int **)(*piVar6 + 0x10);
      }
      piVar3 = (int *)piVar6[1];
      iVar7 = piVar2[7];
      iVar4 = piVar6[2];
      if ((iVar7 < piVar2[8]) || (iVar5 = FUN_0047de10(piVar2), iVar5 == 0)) {
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
        FUN_0047bc80(iVar5,0xfffffffb,piVar3);
      }
      else {
        if (iVar7 < 0) {
          iVar7 = piVar2[7] + -1;
        }
        iVar1 = iVar4 + iVar7 * 0x14;
        FUN_0047bc80(iVar5,(int)*(char *)(iVar1 + 1),*(int **)(iVar4 + 0x10 + iVar7 * 0x14));
        *(undefined4 *)(iVar1 + 0x10) = 0;
        if (piVar3 == (int *)0x0) {
          *(undefined4 *)(iVar1 + 0x10) = 0;
          *(undefined1 *)(iVar1 + 1) = 0;
        }
        else {
          *(int **)(iVar1 + 0x10) = piVar3;
          *(undefined1 *)(iVar1 + 1) = 0xfb;
        }
      }
      local_c = local_c + 1;
      piVar6 = piVar6 + 4;
    } while (local_c < *(int *)(param_2 + 0x24));
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


/* FUN_004799f0 @ 004799f0  kind=lib  attributed-by=lib-island  size=249 */

int * __cdecl FUN_004799f0(int param_1,byte *param_2,int param_3)

{
  int *_Dst;
  byte bVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *_Dst_00;
  byte *pbVar4;
  size_t _Size;
  
  _Size = 0;
  if (param_2 != (byte *)0x0) {
    bVar1 = *param_2;
    pbVar4 = param_2;
    while (bVar1 != 0) {
      pbVar4 = pbVar4 + 1;
      bVar1 = *pbVar4;
    }
    _Size = (int)pbVar4 - (int)param_2 & 0x3fffffff;
  }
  if (*(int *)(param_1 + 0x1a8) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004bd210(param_2,_Size);
    uVar2 = uVar2 % *(uint *)(param_1 + 0x19c);
  }
  puVar3 = FUN_00479af0(param_1 + 0x19c,param_2,_Size,uVar2);
  if ((puVar3 != (undefined4 *)0x0) && ((int *)puVar3[2] != (int *)0x0)) {
    return (int *)puVar3[2];
  }
  _Dst_00 = (int *)0x0;
  if (((param_3 != 0) && (_Dst_00 = FUN_00494b90(param_1,_Size + 0x3d), _Dst_00 != (int *)0x0)) &&
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
    puVar3 = (undefined4 *)
             FUN_0049d6f0((uint *)(param_1 + 0x19c),(byte *)*_Dst_00,_Size,(uint)_Dst_00);
    if (puVar3 != (undefined4 *)0x0) {
      *(undefined1 *)(param_1 + 0x38) = 1;
      FUN_00494b00(param_1,puVar3);
      return (int *)0x0;
    }
  }
  return _Dst_00;
}


/* FUN_00479af0 @ 00479af0  kind=lib  attributed-by=lib-island  size=156 */

undefined4 * __cdecl FUN_00479af0(int param_1,byte *param_2,int param_3,int param_4)

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
      pbVar5 = param_2;
      iVar2 = param_3;
      while (0 < iVar2) {
        if ((*pbVar4 == 0) || ((&DAT_00569620)[*pbVar4] != (&DAT_00569620)[*pbVar5])) break;
        pbVar4 = pbVar4 + 1;
        pbVar5 = pbVar5 + 1;
        iVar2 = iVar2 + -1;
      }
      if ((iVar2 + -1 < 0) || ((&DAT_00569620)[*pbVar4] == (&DAT_00569620)[*pbVar5])) {
        return puVar1;
      }
    }
    puVar1 = (undefined4 *)*puVar1;
  } while( true );
}


/* FUN_00479b90 @ 00479b90  kind=lib  attributed-by=lib-island  size=180 */

int __cdecl FUN_00479b90(int *param_1,int *param_2,int param_3,int param_4,int param_5)

{
  byte *pbVar1;
  char *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  pbVar1 = *(byte **)(param_5 * 4 + *(int *)(param_4 + 0x20));
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
         ((puVar3 = (undefined4 *)FUN_004984d0(param_1,*(char **)(iVar6 + param_2[2])),
          puVar3 != (undefined4 *)0x0 && (iVar4 = FUN_004bcc60((byte *)*puVar3,pbVar1), iVar4 == 0))
         )) {
        return iVar5;
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 0x14;
    } while (iVar5 < *param_2);
  }
  return -1;
}


/* FUN_00479c50 @ 00479c50  kind=lib  attributed-by=lib-island  size=351 */

int * __cdecl
FUN_00479c50(undefined4 *param_1,int param_2,int param_3,uint param_4,uint param_5,ushort param_6,
            int param_7)

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
        cVar2 = FUN_00475250(*piVar7);
        if (cVar2 == 'a') {
          bVar8 = cVar1 == 'a';
LAB_00479d17:
          if (!bVar8) goto LAB_00479d7d;
        }
        else if (cVar2 != 'b') {
          bVar8 = 'b' < cVar1;
          goto LAB_00479d17;
        }
        puVar3 = (undefined4 *)
                 FUN_0048e620(piVar5,*(char **)(*piVar7 + 8),*(char **)(*piVar7 + 0xc));
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
        iVar4 = FUN_004bcc60((byte *)*puVar3,*(byte **)(*(int *)(param_7 + 0x20) + iVar4 * 4));
        if (iVar4 == 0) {
          return piVar7;
        }
      }
LAB_00479d7d:
      piVar7 = piVar7 + 10;
    }
    param_1 = (undefined4 *)param_1[4];
  } while( true );
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


/* FUN_0047b540 @ 0047b540  kind=lib  attributed-by=lib-island  size=88 */

void __cdecl FUN_0047b540(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_2 != (undefined4 *)0x0) {
    iVar1 = param_2[7];
    FUN_00498790(param_1,*(undefined4 **)(iVar1 + 0x14));
    FUN_00499060(param_1,*(int **)(iVar1 + 0x18));
    puVar2 = *(undefined4 **)(iVar1 + 8);
    if (puVar2 != (undefined4 *)0x0) {
      FUN_00472d10(param_1,puVar2);
      FUN_00494b00(param_1,puVar2);
    }
    FUN_00498790(param_1,(undefined4 *)param_2[3]);
    FUN_00494b00(param_1,param_2);
  }
  return;
}


/* FUN_0047b5a0 @ 0047b5a0  kind=lib  attributed-by=lib-island  size=399 */

undefined4 __cdecl FUN_0047b5a0(int *param_1,byte *param_2,byte *param_3)

{
  byte *pbVar1;
  byte bVar2;
  int *_Dst;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  byte *pbVar8;
  int iVar9;
  
  iVar9 = 0;
  ppuVar6 = &PTR_s_full_column_names_0056a690;
  while( true ) {
    pbVar8 = *ppuVar6;
    bVar2 = *param_2;
    pbVar5 = param_2;
    while ((bVar2 != 0 && ((&DAT_00569620)[bVar2] == (&DAT_00569620)[*pbVar8]))) {
      pbVar1 = pbVar5 + 1;
      pbVar5 = pbVar5 + 1;
      pbVar8 = pbVar8 + 1;
      bVar2 = *pbVar1;
    }
    if ((&DAT_00569620)[*pbVar5] == (&DAT_00569620)[*pbVar8]) break;
    iVar9 = iVar9 + 1;
    ppuVar6 = ppuVar6 + 2;
    if (0xd < iVar9) {
      return 0;
    }
  }
  _Dst = (int *)param_1[2];
  iVar9 = *param_1;
  if (_Dst == (int *)0x0) {
    _Dst = FUN_00494b90(iVar9,0xc0);
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
    FUN_004ae760(_Dst,0x94);
  }
  if (param_3 != (byte *)0x0) {
    puVar7 = ppuVar6[1];
    if (*(char *)(iVar9 + 0x36) == '\0') {
      puVar7 = (undefined *)((uint)puVar7 & 0xfffbffff);
    }
    uVar3 = FUN_0047da70(param_3,1,0);
    if ((char)uVar3 == '\0') {
      *(uint *)(iVar9 + 0x18) = *(uint *)(iVar9 + 0x18) & ~(uint)puVar7;
    }
    else {
      *(uint *)(iVar9 + 0x18) = *(uint *)(iVar9 + 0x18) | (uint)puVar7;
    }
    iVar9 = _Dst[7];
    if ((iVar9 < _Dst[8]) || (iVar4 = FUN_0047de10(_Dst), iVar4 == 0)) {
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
  FUN_00489750(param_1,*ppuVar6,(uint)((*(uint *)(iVar9 + 0x18) & (uint)ppuVar6[1]) != 0),0);
  return 1;
}


/* FUN_0047b730 @ 0047b730  kind=lib  attributed-by=lib-island  size=1350 */

undefined4 __cdecl
FUN_0047b730(int *param_1,undefined4 *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  short *psVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  char *pcVar11;
  int *piVar12;
  ushort uVar13;
  int iVar14;
  int iVar15;
  short *psVar16;
  short *psVar17;
  short *psVar18;
  int *local_20;
  short *local_18;
  int local_14;
  
  iVar1 = *param_1;
  iVar15 = param_1[0x81];
  if ((*(byte *)(iVar1 + 0x34) & 1) != 0) {
    return 0;
  }
  psVar2 = (short *)param_2[10];
  iVar3 = *(int *)(psVar2 + param_3 * 0x24 + 0x1a);
  puVar10 = *(undefined4 **)(psVar2 + param_3 * 0x24 + 0xe);
  if (param_4 == 0) {
    if ((param_5 != 0) && (1 < *psVar2)) {
      return 0;
    }
  }
  else if (param_5 != 0) {
    return 0;
  }
  iVar14 = puVar10[0x12];
  if (((((((iVar14 != 0) && (param_2[0x12] != 0)) || (puVar10[0x13] != 0)) ||
        ((param_2[0x11] != 0 && (iVar14 != 0)))) ||
       ((*(short *)puVar10[10] == 0 || ((*(byte *)((int)puVar10 + 6) & 1) != 0)))) ||
      ((iVar14 != 0 && ((1 < *psVar2 || (param_4 != 0)))))) ||
     ((((uVar13 = *(ushort *)((int)param_2 + 6) & 1, uVar13 != 0 && (param_5 != 0)) ||
       ((param_2[0xe] != 0 && (puVar10[0xe] != 0)))) ||
      (((param_4 != 0 && (puVar10[0xe] != 0)) ||
       (((iVar14 != 0 && ((param_2[0xb] != 0 || ((iVar14 != 0 && (uVar13 != 0)))))) ||
        ((*(byte *)(psVar2 + param_3 * 0x24 + 0x14) & 0x20) != 0)))))))) {
    return 0;
  }
  if (puVar10[0xf] != 0) {
    if (puVar10[0xe] != 0) {
      return 0;
    }
    if (param_4 != 0) {
      return 0;
    }
    if (uVar13 != 0) {
      return 0;
    }
    puVar9 = puVar10;
    if (*psVar2 != 1) {
      return 0;
    }
    do {
      if ((*(byte *)((int)puVar9 + 6) & 5) != 0) {
        return 0;
      }
      puVar4 = (undefined4 *)puVar9[0xf];
      if ((puVar4 != (undefined4 *)0x0) && (*(char *)(puVar9 + 1) != 'q')) {
        return 0;
      }
      if (*(short *)puVar9[10] < 1) {
        return 0;
      }
      if (*(int *)*puVar10 != *(int *)*puVar9) {
        return 0;
      }
      puVar9 = puVar4;
    } while (puVar4 != (undefined4 *)0x0);
    piVar5 = (int *)param_2[0xe];
    if ((piVar5 != (int *)0x0) && (0 < *piVar5)) {
      psVar8 = (short *)(piVar5[2] + 0xe);
      iVar14 = 0;
      do {
        if (*psVar8 == 0) {
          return 0;
        }
        iVar14 = iVar14 + 1;
        psVar8 = psVar8 + 10;
      } while (iVar14 < *piVar5);
    }
  }
  param_1[0x81] = *(int *)(psVar2 + param_3 * 0x24 + 8);
  FUN_0048d4b0(param_1,0x15,0,0,0);
  param_1[0x81] = iVar15;
  for (iVar15 = puVar10[0xf]; iVar15 != 0; iVar15 = *(int *)(iVar15 + 0x3c)) {
    puVar10 = (undefined4 *)param_2[0xf];
    uVar6 = param_2[0xe];
    uVar7 = param_2[0x12];
    param_2[0xe] = 0;
    param_2[10] = 0;
    param_2[0xf] = 0;
    param_2[0x12] = 0;
    puVar9 = FUN_004a9680(iVar1,param_2,0);
    param_2[0x12] = uVar7;
    param_2[0xe] = uVar6;
    param_2[10] = psVar2;
    *(undefined1 *)(param_2 + 1) = 0x71;
    param_2[0x11] = 0;
    if (puVar9 != (undefined4 *)0x0) {
      puVar9[0xf] = puVar10;
      puVar9[0x11] = 0;
      puVar10 = puVar9;
    }
    param_2[0xf] = puVar10;
    if (*(char *)(iVar1 + 0x38) != '\0') {
      return 1;
    }
  }
  piVar5 = *(int **)(psVar2 + param_3 * 0x24 + 0xe);
  FUN_00494b00(iVar1,*(undefined4 **)(psVar2 + param_3 * 0x24 + 6));
  FUN_00494b00(iVar1,*(undefined4 **)(psVar2 + param_3 * 0x24 + 8));
  FUN_00494b00(iVar1,*(undefined4 **)(psVar2 + param_3 * 0x24 + 10));
  iVar15 = *(int *)(psVar2 + param_3 * 0x24 + 0xc);
  (psVar2 + param_3 * 0x24 + 6)[0] = 0;
  (psVar2 + param_3 * 0x24 + 6)[1] = 0;
  (psVar2 + param_3 * 0x24 + 8)[0] = 0;
  (psVar2 + param_3 * 0x24 + 8)[1] = 0;
  (psVar2 + param_3 * 0x24 + 10)[0] = 0;
  (psVar2 + param_3 * 0x24 + 10)[1] = 0;
  (psVar2 + param_3 * 0x24 + 0xe)[0] = 0;
  (psVar2 + param_3 * 0x24 + 0xe)[1] = 0;
  local_20 = piVar5;
  if (iVar15 != 0) {
    if (*(short *)(iVar15 + 0x28) == 1) {
      if ((int *)param_1[0x6c] != (int *)0x0) {
        param_1 = (int *)param_1[0x6c];
      }
      *(int *)(iVar15 + 0x44) = param_1[0x89];
      param_1[0x89] = iVar15;
    }
    else {
      *(short *)(iVar15 + 0x28) = *(short *)(iVar15 + 0x28) + -1;
    }
    (psVar2 + param_3 * 0x24 + 0xc)[0] = 0;
    (psVar2 + param_3 * 0x24 + 0xc)[1] = 0;
  }
  do {
    psVar8 = (short *)local_20[10];
    local_18 = (short *)param_2[10];
    local_14 = (int)*psVar8;
    param_1._3_1_ = 0;
    if (local_18 == (short *)0x0) {
      local_18 = FUN_004a9ac0(iVar1,(short *)0x0,(int *)0x0,(int *)0x0);
      param_2[10] = local_18;
      if (local_18 == (short *)0x0) break;
    }
    else {
      param_1._3_1_ = (undefined1)psVar2[param_3 * 0x24 + 0x14];
    }
    if (1 < local_14) {
      local_18 = FUN_004a9fc0(iVar1,local_18,local_14 + -1,param_3 + 1);
      param_2[10] = local_18;
      if (*(char *)(iVar1 + 0x38) != '\0') break;
    }
    if (0 < local_14) {
      psVar8 = psVar8 + 4;
      psVar17 = local_18 + param_3 * 0x24 + 4;
      do {
        FUN_0049d910(iVar1,*(int **)(psVar17 + 0x1a));
        psVar16 = psVar8;
        psVar18 = psVar17;
        for (iVar15 = 0x12; iVar15 != 0; iVar15 = iVar15 + -1) {
          *(undefined4 *)psVar18 = *(undefined4 *)psVar16;
          psVar16 = psVar16 + 2;
          psVar18 = psVar18 + 2;
        }
        memset(psVar8,0,0x48);
        psVar17 = psVar17 + 0x24;
        psVar8 = psVar8 + 0x24;
        local_14 = local_14 + -1;
      } while (local_14 != 0);
    }
    *(undefined1 *)(local_18 + param_3 * 0x24 + 0x14) = param_1._3_1_;
    piVar12 = (int *)*param_2;
    param_1 = (int *)0x0;
    if (0 < *piVar12) {
      iVar15 = 0;
      do {
        if (*(int *)(iVar15 + 4 + piVar12[2]) == 0) {
          pcVar11 = (char *)FUN_00494db0(iVar1,*(char **)(iVar15 + 8 + piVar12[2]));
          FUN_00495540(pcVar11);
          *(char **)(iVar15 + 4 + piVar12[2]) = pcVar11;
        }
        param_1 = (int *)((int)param_1 + 1);
        iVar15 = iVar15 + 0x14;
      } while ((int)param_1 < *piVar12);
    }
    FUN_004bd4e0(iVar1,(int *)*param_2,iVar3,*local_20);
    if (param_4 != 0) {
      FUN_004bd4e0(iVar1,(int *)param_2[0xc],iVar3,*local_20);
      pcVar11 = FUN_004bd420(iVar1,(char *)param_2[0xd],iVar3,*local_20);
      param_2[0xd] = pcVar11;
    }
    if (local_20[0xe] == 0) {
      if ((int *)param_2[0xe] != (int *)0x0) {
        FUN_004bd4e0(iVar1,(int *)param_2[0xe],iVar3,*local_20);
      }
    }
    else {
      param_2[0xe] = local_20[0xe];
      local_20[0xe] = 0;
    }
    if ((undefined4 *)local_20[0xb] == (undefined4 *)0x0) {
      param_1 = (int *)0x0;
    }
    else {
      param_1 = FUN_00478bb0(iVar1,(undefined4 *)local_20[0xb],0,(int *)0x0);
    }
    if (param_5 == 0) {
      pcVar11 = FUN_004bd420(iVar1,(char *)param_2[0xb],iVar3,*local_20);
      param_2[0xb] = pcVar11;
      pcVar11 = FUN_004966d0(iVar1,pcVar11,(char *)param_1);
      param_2[0xb] = pcVar11;
    }
    else {
      pcVar11 = (char *)param_2[0xb];
      param_2[0xd] = pcVar11;
      param_2[0xb] = param_1;
      pcVar11 = FUN_004bd420(iVar1,pcVar11,iVar3,*local_20);
      param_2[0xd] = pcVar11;
      pcVar11 = (char *)FUN_00478bb0(iVar1,(undefined4 *)local_20[0xd],0,(int *)0x0);
      pcVar11 = FUN_004966d0(iVar1,(char *)param_2[0xd],pcVar11);
      param_2[0xd] = pcVar11;
      piVar12 = FUN_00499140(iVar1,(int *)local_20[0xc],0);
      param_2[0xc] = piVar12;
    }
    *(ushort *)((int)param_2 + 6) =
         *(ushort *)((int)param_2 + 6) | *(ushort *)((int)local_20 + 6) & 1;
    if (local_20[0x12] != 0) {
      param_2[0x12] = local_20[0x12];
      local_20[0x12] = 0;
    }
    param_2 = (undefined4 *)param_2[0xf];
    local_20 = (int *)local_20[0xf];
  } while (param_2 != (undefined4 *)0x0);
  FUN_004a9650(iVar1,piVar5);
  return 1;
}


/* FUN_0047bc80 @ 0047bc80  kind=lib  attributed-by=lib-island  size=228 */

void __cdecl FUN_0047bc80(int param_1,undefined4 param_2,int *param_3)

{
  undefined4 *puVar1;
  
  if (param_3 != (int *)0x0) {
    switch(param_2) {
    case 0xfffffff0:
    case 0xfffffff1:
    case 0xfffffff3:
    case 0xfffffff4:
    case 0xfffffffa:
    case 0xffffffff:
switchD_0047bca6_caseD_fffffff0:
      FUN_00494b00(param_1,param_3);
      return;
    case 0xfffffff2:
    case 0xfffffff7:
    case 0xfffffffc:
    case 0xfffffffd:
    case 0xfffffffe:
      break;
    case 0xfffffff5:
      if (*(int *)(param_1 + 0x1f0) == 0) {
        FUN_00466dd0((int)param_3);
        return;
      }
      break;
    case 0xfffffff6:
      if (*(int *)(param_1 + 0x1f0) == 0) {
        FUN_004ba040(param_3);
      }
      break;
    case 0xfffffff8:
      if (*(int *)(param_1 + 0x1f0) != 0) {
        FUN_00494b00(param_1,(undefined4 *)param_3[9]);
        FUN_00494b00(param_1,param_3);
        return;
      }
      FUN_004ae2b0(param_3);
      return;
    case 0xfffffff9:
      puVar1 = (undefined4 *)*param_3;
      if ((puVar1 != (undefined4 *)0x0) && ((*(byte *)((int)puVar1 + 3) & 4) != 0)) {
        FUN_00494b00(param_1,puVar1);
      }
      if (*(int *)(param_1 + 0x1f0) == 0) {
        FUN_004af2b0(param_3,0);
      }
      FUN_00494b00(param_1,param_3);
      return;
    case 0xfffffffb:
      if ((*param_3 & 0x4000000) != 0) goto switchD_0047bca6_caseD_fffffff0;
      break;
    default:
      goto switchD_0047bca6_default;
    }
  }
switchD_0047bca6_default:
  return;
}


/* FUN_0047bd90 @ 0047bd90  kind=lib  attributed-by=lib-island  size=35 */

void __cdecl FUN_0047bd90(undefined1 *param_1,uint *param_2)

{
  uint uVar1;
  
  if (*param_2 == 0) {
    uVar1 = FUN_0047bdc0(*(int **)(param_1 + 0x34),param_1,*(uint *)(param_1 + 0x48));
    *param_2 = uVar1;
  }
  return;
}


/* FUN_0047bdc0 @ 0047bdc0  kind=lib  attributed-by=lib-island  size=786 */

uint __cdecl FUN_0047bdc0(int *param_1,undefined1 *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  uint *puVar5;
  int *piVar6;
  int *piVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  uint local_10;
  int local_8;
  
  piVar6 = param_1;
  iVar1 = param_1[3];
  local_8 = 0;
  local_10 = 0;
  if (param_2 == (undefined1 *)0x0) {
    piVar7 = (int *)FUN_004716b0(param_1,param_3);
  }
  else {
    *(short *)(*(int *)(param_2 + 0x44) + 0x1a) = *(short *)(*(int *)(param_2 + 0x44) + 0x1a) + 1;
    piVar7 = (int *)param_2;
  }
  param_1 = piVar7;
  param_2 = (undefined1 *)FUN_004a2c80(*(undefined4 **)(iVar1 + 0x44));
  puVar8 = param_2;
  if (param_2 == (undefined1 *)0x0) {
    iVar2 = *(int *)(iVar1 + 0x38);
    iVar9 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar2 + 0x24),*(undefined1 *)(iVar2 + 0x25)),
                              *(undefined1 *)(iVar2 + 0x26)),*(undefined1 *)(iVar2 + 0x27));
    iVar10 = iVar9 + 1;
    *(char *)(iVar2 + 0x24) = (char)((uint)iVar10 >> 0x18);
    *(char *)(iVar2 + 0x25) = (char)((uint)iVar10 >> 0x10);
    *(char *)(iVar2 + 0x26) = (char)((uint)iVar10 >> 8);
    *(char *)(iVar2 + 0x27) = (char)iVar10;
    if ((*(byte *)((int)piVar6 + 0x16) & 4) != 0) {
      if (((piVar7 == (int *)0x0) &&
          (puVar8 = (undefined1 *)FUN_004712c0(piVar6,param_3,(int *)&param_1,0), piVar7 = param_1,
          puVar8 != (undefined1 *)0x0)) ||
         (param_2 = (undefined1 *)FUN_004a2c80((undefined4 *)piVar7[0x11]), puVar8 = param_2,
         param_2 != (undefined1 *)0x0)) goto LAB_0047c066;
      memset((void *)piVar7[0xe],0,*(size_t *)(piVar7[0xd] + 0x20));
    }
    if ((*(char *)((int)piVar6 + 0x11) == '\0') ||
       (FUN_004870c0(piVar6,param_3,'\x02',0,(uint *)&param_2), puVar8 = param_2,
       param_2 == (undefined1 *)0x0)) {
      if (iVar9 != 0) {
        iVar2 = *(int *)(iVar1 + 0x38);
        local_10 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar2 + 0x20),
                                              *(undefined1 *)(iVar2 + 0x21)),
                                     *(undefined1 *)(iVar2 + 0x22)),*(undefined1 *)(iVar2 + 0x23));
        puVar8 = (undefined1 *)FUN_004712c0(piVar6,local_10,&local_8,0);
        if (puVar8 != (undefined1 *)0x0) goto LAB_0047c066;
        iVar2 = *(int *)(local_8 + 0x38);
        param_2 = (undefined1 *)
                  CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar2 + 4),*(undefined1 *)(iVar2 + 5)),
                                    *(undefined1 *)(iVar2 + 6)),*(undefined1 *)(iVar2 + 7));
        if ((undefined1 *)(((uint)piVar6[9] >> 2) - 2) < param_2) {
          puVar8 = (undefined1 *)FUN_00493af0();
          goto LAB_0047c066;
        }
        if (param_2 < (undefined1 *)(((uint)piVar6[9] >> 2) - 8)) {
          puVar8 = (undefined1 *)FUN_004a2c80(*(undefined4 **)(local_8 + 0x44));
          puVar3 = param_2;
          if (puVar8 == (undefined1 *)0x0) {
            FUN_004a5f90((undefined1 *)(*(int *)(local_8 + 0x38) + 4),param_2 + 1);
            FUN_004a5f90((undefined1 *)(*(int *)(local_8 + 0x38) + (int)puVar3 * 4 + 8),param_3);
            if ((piVar7 != (int *)0x0) && ((*(byte *)((int)piVar6 + 0x16) & 4) == 0)) {
              iVar1 = piVar7[0x11];
              if (((*(ushort *)(iVar1 + 0x18) & 2) != 0) &&
                 (*(int *)(*(int *)(iVar1 + 0x10) + 0x60) == 0)) {
                *(ushort *)(iVar1 + 0x18) = *(ushort *)(iVar1 + 0x18) | 0x20;
              }
            }
            puVar8 = (undefined1 *)FUN_004718a0((int)piVar6,param_3);
          }
          goto LAB_0047c066;
        }
      }
      if (((piVar7 != (int *)0x0) ||
          (puVar8 = (undefined1 *)FUN_004712c0(piVar6,param_3,(int *)&param_1,0), piVar7 = param_1,
          puVar8 == (undefined1 *)0x0)) &&
         (puVar8 = (undefined1 *)FUN_004a2c80((undefined4 *)piVar7[0x11]),
         puVar8 == (undefined1 *)0x0)) {
        puVar3 = (undefined1 *)piVar7[0xe];
        *puVar3 = (char)(local_10 >> 0x18);
        puVar3[1] = (char)(local_10 >> 0x10);
        puVar3[3] = (char)local_10;
        puVar3[2] = (char)(local_10 >> 8);
        *(undefined4 *)(piVar7[0xe] + 4) = 0;
        iVar1 = *(int *)(iVar1 + 0x38);
        *(char *)(iVar1 + 0x20) = (char)(param_3 >> 0x18);
        *(char *)(iVar1 + 0x21) = (char)(param_3 >> 0x10);
        *(char *)(iVar1 + 0x22) = (char)(param_3 >> 8);
        *(char *)(iVar1 + 0x23) = (char)param_3;
      }
    }
  }
LAB_0047c066:
  if (piVar7 != (int *)0x0) {
    *(undefined1 *)piVar7 = 0;
    puVar4 = (undefined4 *)piVar7[0x11];
    if (puVar4 != (undefined4 *)0x0) {
      puVar5 = (uint *)puVar4[4];
      FUN_004a3a80(puVar4);
      if (*(int *)(puVar5[0x2d] + 0xc) == 0) {
        FUN_00484370(puVar5);
      }
    }
  }
  if ((local_8 != 0) && (puVar4 = *(undefined4 **)(local_8 + 0x44), puVar4 != (undefined4 *)0x0)) {
    puVar5 = (uint *)puVar4[4];
    FUN_004a3a80(puVar4);
    if (*(int *)(puVar5[0x2d] + 0xc) == 0) {
      FUN_00484370(puVar5);
    }
  }
  return (uint)puVar8;
}


/* FUN_0047c0e0 @ 0047c0e0  kind=lib  attributed-by=lib-island  size=593 */

undefined4 __cdecl FUN_0047c0e0(int param_1,int param_2,size_t param_3)

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
      FUN_004683f0(0xb,"database corruption at line %d of [%.10s]");
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
          FUN_004683f0(0xb,"database corruption at line %d of [%.10s]");
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
  FUN_004683f0(0xb,"database corruption at line %d of [%.10s]");
  return 0xb;
}


/* FUN_0047c340 @ 0047c340  kind=lib  attributed-by=lib-island  size=28 */

void __cdecl FUN_0047c340(int param_1)

{
  FUN_00486af0(*(undefined4 **)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0x50) = 0;
  return;
}


/* FUN_0047c360 @ 0047c360  kind=lib  attributed-by=lib-island  size=41 */

void __cdecl FUN_0047c360(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 0x20);
  if ((piVar1 != (int *)0x0) && (*piVar1 = *piVar1 + -1, *piVar1 == 0)) {
    (*(code *)piVar1[1])(piVar1[2]);
    FUN_00494b00(param_1,piVar1);
  }
  return;
}


/* FUN_0047c390 @ 0047c390  kind=lib  attributed-by=lib-island  size=132 */

int __cdecl FUN_0047c390(int param_1,int param_2,byte *param_3,int param_4)

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
    pbVar4 = param_3;
    iVar2 = param_4;
    while (0 < iVar2) {
      if ((*pbVar3 == 0) || ((&DAT_00569620)[*pbVar3] != (&DAT_00569620)[*pbVar4])) break;
      pbVar3 = pbVar3 + 1;
      pbVar4 = pbVar4 + 1;
      iVar2 = iVar2 + -1;
    }
    if (((iVar2 + -1 < 0) || ((&DAT_00569620)[*pbVar3] == (&DAT_00569620)[*pbVar4])) &&
       (*(char *)(*(int *)(iVar1 + 0x18) + param_4) == '\0')) {
      return iVar1;
    }
    iVar1 = *(int *)(iVar1 + 0x1c);
  } while( true );
}


/* FUN_0047c420 @ 0047c420  kind=lib  attributed-by=lib-island  size=420 */

void __cdecl FUN_0047c420(int *param_1,short *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  void *pvVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  code *pcVar13;
  int local_10;
  
  iVar1 = *param_1;
  piVar2 = (int *)param_1[2];
  if (((((char)param_1[0x75] == '\0') && ((char)param_1[4] == '\0')) && (piVar2 != (int *)0x0)) &&
     (*(char *)(iVar1 + 0x38) == '\0')) {
    *(undefined1 *)(param_1 + 4) = 1;
    uVar3 = *(uint *)(iVar1 + 0x18);
    uVar4 = uVar3 >> 2 & 1;
    FUN_004b8c50(piVar2,*param_3);
    iVar12 = 0;
    if (0 < *param_3) {
      local_10 = 0;
      do {
        puVar10 = (undefined4 *)(param_3[2] + local_10);
        pcVar6 = (char *)*puVar10;
        if (pcVar6 != (char *)0x0) {
          puVar8 = (undefined4 *)puVar10[1];
          if (puVar8 == (undefined4 *)0x0) {
            if (((*pcVar6 == -0x68) || (*pcVar6 == -0x66)) && (param_2 != (short *)0x0)) {
              iVar11 = (int)*(short *)(pcVar6 + 0x1c);
              iVar5 = 0;
              if (0 < *param_2) {
                piVar9 = (int *)(param_2 + 0x1a);
                do {
                  if (*piVar9 == *(int *)(pcVar6 + 0x18)) break;
                  iVar5 = iVar5 + 1;
                  piVar9 = piVar9 + 0x12;
                } while (iVar5 < *param_2);
              }
              if ((iVar11 < 0) &&
                 (iVar11 = (int)*(short *)(*(int *)(param_2 + iVar5 * 0x24 + 0xc) + 0x24),
                 iVar11 < 0)) {
                pcVar6 = "rowid";
              }
              else {
                pcVar6 = *(char **)(*(int *)(*(int *)(param_2 + iVar5 * 0x24 + 0xc) + 4) +
                                   iVar11 * 0x18);
              }
              if ((uVar3 >> 3 & 1) == 0) {
                if (uVar4 == 0) {
                  pcVar6 = (char *)puVar10[2];
                  goto LAB_0047c586;
                }
              }
              else if (uVar4 == 0) {
                FUN_004b8c10(piVar2,iVar12,0,pcVar6,(undefined *)0xffffffff);
                goto LAB_0047c59c;
              }
              pvVar7 = (void *)FUN_004a02d0(iVar1,(byte *)"%s.%s");
              FUN_004b8c10(piVar2,iVar12,0,pvVar7,FUN_004a0570);
              goto LAB_0047c59c;
            }
            pcVar6 = (char *)puVar10[2];
LAB_0047c586:
            pcVar13 = FUN_004a0570;
            puVar8 = FUN_00494db0(iVar1,pcVar6);
          }
          else {
            pcVar13 = (code *)0xffffffff;
          }
          FUN_004b8c10(piVar2,iVar12,0,puVar8,pcVar13);
        }
LAB_0047c59c:
        iVar12 = iVar12 + 1;
        local_10 = local_10 + 0x14;
      } while (iVar12 < *param_3);
    }
    FUN_0047c5d0((int)param_1,(int)param_2,param_3);
  }
  return;
}


/* FUN_0047c5d0 @ 0047c5d0  kind=lib  attributed-by=lib-island  size=297 */

void __cdecl FUN_0047c5d0(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  char *_Src;
  int iVar4;
  int iVar5;
  int local_28;
  int local_24;
  int local_8;
  
  local_24 = param_2;
  piVar2 = *(int **)(param_1 + 8);
  local_28 = param_1;
  param_2 = 0;
  if (0 < *param_3) {
    local_8 = 0;
    do {
      _Src = FUN_004750b0(&local_28,*(char **)(local_8 + param_3[2]),(undefined4 *)0x0,
                          (undefined4 *)0x0,(undefined4 *)0x0);
      if (*(char *)(*piVar2 + 0x38) == '\0') {
        piVar1 = (int *)(piVar2[4] + ((uint)*(ushort *)(piVar2 + 0xb) + param_2) * 0x28);
        if (_Src == (char *)0x0) {
          if ((*(byte *)(piVar1 + 7) & 0x40) != 0) {
            piVar3 = (int *)piVar1[4];
            piVar3[1] = *(int *)(*piVar3 + 0xa4);
            *(int **)(*piVar3 + 0xa4) = piVar3;
          }
          if ((*(byte *)(piVar1 + 7) & 0x20) != 0) {
            FUN_004a6e20((undefined4 *)piVar1[4]);
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
              if (_Src[iVar5] == '\0') break;
              iVar5 = iVar5 + 1;
            } while (iVar5 <= iVar4);
          }
          if ((iVar5 <= iVar4) && (iVar4 = FUN_004b7260(piVar1,iVar5 + 1,0), iVar4 == 0)) {
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


/* FUN_0047ca50 @ 0047ca50  kind=lib  attributed-by=lib-island  size=1439 */

void __cdecl FUN_0047ca50(int param_1,int param_2,int *param_3,int param_4,char *param_5)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int local_20;
  int local_14;
  
  piVar4 = param_3;
  iVar6 = FUN_004b6b80(param_3);
  iVar7 = FUN_004b6b80(param_3);
  piVar2 = *(int **)(param_2 + 0x38);
  cVar1 = *param_5;
  iVar14 = *(int *)(param_5 + 4);
  iVar12 = piVar2[1];
  local_14 = 0;
  if (*(char *)(param_1 + 0x13) == '\0') {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
    iVar13 = *(int *)(param_1 + 0x4c);
  }
  else {
    bVar5 = *(char *)(param_1 + 0x13) - 1;
    *(byte *)(param_1 + 0x13) = bVar5;
    iVar13 = *(int *)(param_1 + 0x1c + (uint)bVar5 * 4);
  }
  if ((cVar1 == '\x05') || (cVar1 == '\n')) {
    local_14 = *(int *)(param_1 + 0x48);
    *(int *)(param_1 + 0x48) = local_14 + 1;
    iVar11 = param_3[7];
    if ((iVar11 < param_3[8]) || (iVar8 = FUN_0047de10(param_3), iVar8 == 0)) {
      param_3[7] = param_3[7] + 1;
      iVar8 = param_3[1];
      *(int *)(iVar8 + 4 + iVar11 * 0x14) = local_14;
      *(undefined2 *)(iVar8 + iVar11 * 0x14) = 0x2c;
      *(undefined1 *)(iVar8 + 3 + iVar11 * 0x14) = 0;
      *(int *)(iVar8 + 8 + iVar11 * 0x14) = iVar13;
      *(int *)(iVar8 + 0xc + iVar11 * 0x14) = param_4;
      *(undefined4 *)(iVar8 + 0x10 + iVar11 * 0x14) = 0;
    }
    param_3 = (int *)0x0;
  }
  else if (*(char *)(param_1 + 0x13) == '\0') {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
    param_3 = *(int **)(param_1 + 0x4c);
  }
  else {
    bVar5 = *(char *)(param_1 + 0x13) - 1;
    *(byte *)(param_1 + 0x13) = bVar5;
    param_3 = *(int **)(param_1 + 0x1c + (uint)bVar5 * 4);
  }
  if ((*(byte *)(param_2 + 6) & 0x40) == 0) {
    local_20 = FUN_004ae830(piVar4,0x47,iVar12,iVar6);
    local_20 = local_20 + 1;
    FUN_00473870(piVar4,param_2,iVar7);
    iVar11 = *piVar2;
    iVar8 = piVar4[7];
    if ((iVar8 < piVar4[8]) || (iVar10 = FUN_0047de10(piVar4), iVar10 == 0)) {
      piVar4[7] = piVar4[7] + 1;
      iVar10 = piVar4[1];
      *(int *)(iVar10 + 4 + iVar8 * 0x14) = iVar12;
      *(undefined2 *)(iVar10 + iVar8 * 0x14) = 0x1d;
      *(undefined1 *)(iVar10 + 3 + iVar8 * 0x14) = 0;
      *(int *)(iVar10 + 8 + iVar8 * 0x14) = iVar11 + 1;
      *(int *)(iVar10 + 0xc + iVar8 * 0x14) = iVar13;
      *(undefined4 *)(iVar10 + 0x10 + iVar8 * 0x14) = 0;
    }
  }
  else {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
    uVar3 = *(undefined4 *)(param_1 + 0x4c);
    iVar11 = *(int *)(param_1 + 0x48);
    *(int *)(param_1 + 0x48) = iVar11 + 1;
    iVar8 = *piVar2;
    iVar10 = piVar4[7];
    if ((iVar10 < piVar4[8]) || (iVar9 = FUN_0047de10(piVar4), iVar9 == 0)) {
      piVar4[7] = piVar4[7] + 1;
      iVar9 = piVar4[1];
      *(int *)(iVar9 + 4 + iVar10 * 0x14) = iVar11;
      *(undefined4 *)(iVar9 + 8 + iVar10 * 0x14) = uVar3;
      *(undefined2 *)(iVar9 + iVar10 * 0x14) = 0x2c;
      *(undefined1 *)(iVar9 + 3 + iVar10 * 0x14) = 0;
      *(int *)(iVar9 + 0xc + iVar10 * 0x14) = iVar8 + 2;
      *(undefined4 *)(iVar9 + 0x10 + iVar10 * 0x14) = 0;
    }
    local_20 = FUN_004ae830(piVar4,0x46,iVar12,iVar6);
    local_20 = local_20 + 1;
    FUN_00473870(piVar4,param_2,iVar7);
    FUN_004ae830(piVar4,0x3e,iVar12,uVar3);
    iVar8 = *piVar2;
    iVar10 = piVar4[7];
    if ((iVar10 < piVar4[8]) || (iVar9 = FUN_0047de10(piVar4), iVar9 == 0)) {
      piVar4[7] = piVar4[7] + 1;
      iVar9 = piVar4[1];
      *(int *)(iVar9 + 4 + iVar10 * 0x14) = iVar11;
      *(undefined2 *)(iVar9 + iVar10 * 0x14) = 0x1d;
      *(undefined1 *)(iVar9 + 3 + iVar10 * 0x14) = 0;
      *(int *)(iVar9 + 8 + iVar10 * 0x14) = iVar8 + 1;
      *(int *)(iVar9 + 0xc + iVar10 * 0x14) = iVar13;
      *(undefined4 *)(iVar9 + 0x10 + iVar10 * 0x14) = 0;
    }
    if (piVar4[1] != 0) {
      *(undefined1 *)(piVar4[1] + -0x11 + piVar4[7] * 0x14) = 0x20;
    }
  }
  switch(cVar1) {
  case '\x06':
    FUN_00497600(param_1,iVar13,iVar14,1);
    break;
  case '\a':
    FUN_004ae8f0(piVar4,0x1f,iVar13,1,param_3,(int *)(param_5 + 1),1);
    FUN_00496d90(param_1,iVar13,1);
    FUN_004ae830(piVar4,0x61,iVar14,param_3);
    break;
  case '\b':
  case '\t':
    FUN_004ae830(piVar4,0x38,iVar14,param_3);
    FUN_004ae890(piVar4,0x39,iVar14,iVar13,param_3);
    if (piVar4[1] != 0) {
      *(undefined1 *)(piVar4[1] + -0x11 + piVar4[7] * 0x14) = 8;
    }
    break;
  default:
    iVar14 = 0;
    if (0 < param_4) {
      do {
        iVar11 = *(int *)(param_5 + 8);
        iVar8 = piVar4[7];
        if ((iVar8 < piVar4[8]) || (iVar10 = FUN_0047de10(piVar4), iVar10 == 0)) {
          piVar4[7] = piVar4[7] + 1;
          iVar10 = piVar4[1];
          *(int *)(iVar10 + 4 + iVar8 * 0x14) = local_14;
          *(undefined2 *)(iVar10 + iVar8 * 0x14) = 0x1d;
          *(undefined1 *)(iVar10 + 3 + iVar8 * 0x14) = 0;
          *(int *)(iVar10 + 8 + iVar8 * 0x14) = iVar14;
          *(int *)(iVar10 + 0xc + iVar8 * 0x14) = iVar11 + iVar14;
          *(undefined4 *)(iVar10 + 0x10 + iVar8 * 0x14) = 0;
        }
        if ((iVar14 == 0) && (piVar4[1] != 0)) {
          *(undefined1 *)(piVar4[1] + -0x11 + piVar4[7] * 0x14) = 0x20;
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 < param_4);
    }
    iVar14 = piVar4[7];
    if (cVar1 == '\x05') {
      uVar3 = *(undefined4 *)(param_5 + 8);
      if ((iVar14 < piVar4[8]) || (iVar11 = FUN_0047de10(piVar4), iVar11 == 0)) {
        iVar11 = piVar4[1];
        piVar4[7] = piVar4[7] + 1;
        *(undefined4 *)(iVar11 + 4 + iVar14 * 0x14) = uVar3;
        *(undefined2 *)(iVar11 + iVar14 * 0x14) = 0x10;
        *(undefined1 *)(iVar11 + 3 + iVar14 * 0x14) = 0;
        *(int *)(iVar11 + 8 + iVar14 * 0x14) = param_4;
        *(undefined4 *)(iVar11 + 0xc + iVar14 * 0x14) = 0;
        *(undefined4 *)(iVar11 + 0x10 + iVar14 * 0x14) = 0;
      }
      FUN_00496d90(param_1,*(int *)(param_5 + 8),param_4);
    }
    else {
      uVar3 = *(undefined4 *)(param_5 + 4);
      if ((iVar14 < piVar4[8]) || (iVar11 = FUN_0047de10(piVar4), iVar11 == 0)) {
        iVar11 = piVar4[1];
        piVar4[7] = piVar4[7] + 1;
        *(undefined2 *)(iVar11 + iVar14 * 0x14) = 4;
        *(undefined1 *)(iVar11 + 3 + iVar14 * 0x14) = 0;
        *(undefined4 *)(iVar11 + 4 + iVar14 * 0x14) = uVar3;
        *(undefined4 *)(iVar11 + 8 + iVar14 * 0x14) = 0;
        *(undefined4 *)(iVar11 + 0xc + iVar14 * 0x14) = 0;
        *(undefined4 *)(iVar11 + 0x10 + iVar14 * 0x14) = 0;
      }
    }
  }
  if ((iVar13 != 0) && (*(byte *)(param_1 + 0x13) < 8)) {
    iVar14 = param_1 + 100;
    iVar11 = 0;
    do {
      if (*(int *)(iVar14 + 0x10) == iVar13) {
        *(undefined1 *)(iVar14 + 8) = 1;
        goto LAB_0047cebe;
      }
      iVar11 = iVar11 + 1;
      iVar14 = iVar14 + 0x18;
    } while (iVar11 < 10);
    *(int *)(param_1 + 0x1c + (uint)*(byte *)(param_1 + 0x13) * 4) = iVar13;
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
  }
LAB_0047cebe:
  if ((param_3 != (int *)0x0) && (*(byte *)(param_1 + 0x13) < 8)) {
    iVar13 = 0;
    iVar14 = param_1 + 100;
    do {
      if (*(int **)(iVar14 + 0x10) == param_3) {
        *(undefined1 *)(iVar14 + 8) = 1;
        goto LAB_0047cef0;
      }
      iVar13 = iVar13 + 1;
      iVar14 = iVar14 + 0x18;
    } while (iVar13 < 10);
    *(int **)(param_1 + 0x1c + (uint)*(byte *)(param_1 + 0x13) * 4) = param_3;
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
  }
LAB_0047cef0:
  if (piVar4[10] != 0) {
    *(int *)(piVar4[10] - (iVar7 * 4 + 4)) = piVar4[7];
  }
  iVar14 = piVar4[7];
  if ((*(byte *)(param_2 + 6) & 0x40) == 0) {
    if ((piVar4[8] <= iVar14) && (iVar7 = FUN_0047de10(piVar4), iVar7 != 0)) goto LAB_0047cf7b;
    iVar7 = piVar4[1];
    piVar4[7] = piVar4[7] + 1;
    *(undefined2 *)(iVar7 + iVar14 * 0x14) = 0x5f;
  }
  else {
    if ((piVar4[8] <= iVar14) && (iVar7 = FUN_0047de10(piVar4), iVar7 != 0)) goto LAB_0047cf7b;
    iVar7 = piVar4[1];
    piVar4[7] = piVar4[7] + 1;
    *(undefined2 *)(iVar7 + iVar14 * 0x14) = 0x51;
  }
  *(int *)(iVar7 + 4 + iVar14 * 0x14) = iVar12;
  *(undefined4 *)(iVar7 + 0x10 + iVar14 * 0x14) = 0;
  *(undefined4 *)(iVar7 + 0xc + iVar14 * 0x14) = 0;
  *(int *)(iVar7 + 8 + iVar14 * 0x14) = local_20;
  *(undefined1 *)(iVar7 + 3 + iVar14 * 0x14) = 0;
LAB_0047cf7b:
  if (piVar4[10] != 0) {
    *(int *)(piVar4[10] - (iVar6 * 4 + 4)) = piVar4[7];
  }
  if (((cVar1 == '\x05') || (cVar1 == '\n')) &&
     ((iVar14 = piVar4[7], iVar14 < piVar4[8] || (iVar12 = FUN_0047de10(piVar4), iVar12 == 0)))) {
    iVar12 = piVar4[1];
    piVar4[7] = piVar4[7] + 1;
    *(undefined2 *)(iVar12 + iVar14 * 0x14) = 0x2d;
    *(undefined1 *)(iVar12 + 3 + iVar14 * 0x14) = 0;
    *(int *)(iVar12 + 4 + iVar14 * 0x14) = local_14;
    *(undefined4 *)(iVar12 + 8 + iVar14 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 0xc + iVar14 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 0x10 + iVar14 * 0x14) = 0;
  }
  return;
}


/* FUN_0047d000 @ 0047d000  kind=lib  attributed-by=lib-island  size=141 */

int __cdecl FUN_0047d000(int *param_1,uint param_2,int *param_3)

{
  char *pcVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  
  uVar2 = param_2;
  if ((uint)param_1[0xb] < param_2) {
    FUN_004683f0(0xb,"database corruption at line %d of [%.10s]");
    return 0xb;
  }
  iVar4 = FUN_004a14c0(*param_1,param_2,(int *)&param_2,0);
  piVar3 = param_3;
  if (iVar4 == 0) {
    pcVar1 = *(char **)(param_2 + 8);
    *(undefined4 *)(pcVar1 + 0x38) = *(undefined4 *)(param_2 + 4);
    *(int **)(pcVar1 + 0x34) = param_1;
    *(uint *)(pcVar1 + 0x44) = param_2;
    *(uint *)(pcVar1 + 0x48) = uVar2;
    pcVar1[5] = (uVar2 != 1) - 1U & 100;
    *param_3 = (int)pcVar1;
    iVar4 = FUN_00471320(pcVar1);
    if (iVar4 != 0) {
      FUN_004880a0(*piVar3);
    }
  }
  return iVar4;
}


/* FUN_0047d090 @ 0047d090  kind=lib  attributed-by=lib-island  size=171 */

uint __cdecl FUN_0047d090(byte *param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  pbVar3 = param_1;
  pbVar6 = &DAT_0056ff84;
  bVar2 = *param_1;
  pbVar5 = param_1;
  while ((bVar2 != 0 && ((&DAT_00569620)[bVar2] == (&DAT_00569620)[*pbVar6]))) {
    pbVar1 = pbVar5 + 1;
    pbVar5 = pbVar5 + 1;
    pbVar6 = pbVar6 + 1;
    bVar2 = *pbVar1;
  }
  if ((&DAT_00569620)[*pbVar5] == (&DAT_00569620)[*pbVar6]) {
    return 0;
  }
  iVar4 = FUN_004bcc60(param_1,&DAT_0056ff8c);
  if (iVar4 == 0) {
    return 1;
  }
  iVar4 = FUN_004bcc60(pbVar3,(byte *)"incremental");
  if (iVar4 == 0) {
    return 2;
  }
  param_1 = (byte *)0x0;
  FUN_0049ca30((char *)pbVar3,(uint *)&param_1);
  pbVar6 = (byte *)0x0;
  if (param_1 < (byte *)0x3) {
    pbVar6 = param_1;
  }
  return (uint)pbVar6 & 0xff;
}


/* FUN_0047d150 @ 0047d150  kind=lib  attributed-by=lib-island  size=81 */

void __cdecl FUN_0047d150(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(short *)(param_1 + 0x42) == 0) {
    iVar1 = *(int *)(param_1 + 0x88 + *(short *)(param_1 + 0x5e) * 4);
    uVar2 = (uint)*(ushort *)(param_1 + 0x60 + *(short *)(param_1 + 0x5e) * 2);
    FUN_00471710(iVar1,(uint)(CONCAT11(*(undefined1 *)(*(int *)(iVar1 + 0x40) + uVar2 * 2),
                                       *(undefined1 *)(*(int *)(iVar1 + 0x40) + 1 + uVar2 * 2)) &
                             *(ushort *)(iVar1 + 0x12)) + *(int *)(iVar1 + 0x38),
                 (uint *)(param_1 + 0x28));
    *(undefined1 *)(param_1 + 0x5a) = 1;
  }
  return;
}


/* FUN_0047d3d0 @ 0047d3d0  kind=lib  attributed-by=lib-island  size=64 */

undefined4 __cdecl FUN_0047d3d0(byte *param_1)

{
  int iVar1;
  
  if (param_1 != (byte *)0x0) {
    iVar1 = FUN_004bcc60(param_1,(byte *)"exclusive");
    if (iVar1 == 0) {
      return 1;
    }
    iVar1 = FUN_004bcc60(param_1,(byte *)"normal");
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 0xffffffff;
}


/* FUN_0047d410 @ 0047d410  kind=lib  attributed-by=lib-island  size=66 */

undefined8 __cdecl FUN_0047d410(int *param_1,int param_2)

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


/* FUN_0047d460 @ 0047d460  kind=lib  attributed-by=lib-island  size=356 */

int __cdecl FUN_0047d460(int *param_1,undefined4 *param_2,int *param_3,undefined4 *param_4)

{
  undefined1 *puVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  bool bVar10;
  undefined4 *local_8;
  
  piVar3 = param_1;
  if (*(char *)((int)param_1 + 0x11) == '\0') {
LAB_0047d505:
    iVar4 = FUN_004a14c0(*piVar3,(uint)param_2,(int *)&param_1,0);
    if (iVar4 == 0) {
      iVar8 = param_1[2];
      *(int *)(iVar8 + 0x38) = param_1[1];
      *(undefined4 **)(iVar8 + 0x48) = param_2;
      *(int **)(iVar8 + 0x44) = param_1;
      puVar1 = *(undefined1 **)(iVar8 + 0x38);
      *(byte *)(iVar8 + 5) = (param_2 != (undefined4 *)0x1) - 1U & 100;
      *(int **)(iVar8 + 0x34) = piVar3;
      puVar7 = (undefined4 *)CONCAT31(CONCAT21(CONCAT11(*puVar1,puVar1[1]),puVar1[2]),puVar1[3]);
      goto LAB_0047d568;
    }
LAB_0047d564:
    puVar7 = (undefined4 *)0x0;
  }
  else {
    piVar6 = (int *)((int)param_2 - 1);
    puVar7 = param_2;
    while( true ) {
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      if (puVar7 < (undefined4 *)0x2) {
        puVar9 = (undefined4 *)0x0;
      }
      else {
        uVar5 = (uint)param_1[9] / 5 + 1;
        iVar4 = ((uint)piVar6 / uVar5) * uVar5;
        puVar9 = (undefined4 *)(iVar4 + 2);
        if (puVar9 == (undefined4 *)(DAT_00582bb8 / (uint)param_1[8] + 1)) {
          puVar9 = (undefined4 *)(iVar4 + 3);
        }
      }
      if ((puVar9 != puVar7) && (puVar7 != (undefined4 *)(DAT_00582bb8 / (uint)param_1[8] + 1)))
      break;
      piVar6 = (int *)((int)piVar6 + 1);
    }
    puVar2 = (uint *)(param_1 + 0xb);
    param_1 = piVar6;
    if ((undefined4 *)*puVar2 < puVar7) goto LAB_0047d505;
    iVar4 = FUN_00486f40(piVar3,puVar7,(byte *)((int)&param_1 + 3),&local_8);
    if (iVar4 != 0) goto LAB_0047d564;
    bVar10 = param_1._3_1_ != '\x04';
    if ((bVar10) || (local_8 != param_2)) goto LAB_0047d505;
    iVar4 = 0x65;
  }
  iVar8 = 0;
LAB_0047d568:
  *param_4 = puVar7;
  if (param_3 == (int *)0x0) {
    if ((iVar8 != 0) && (puVar7 = *(undefined4 **)(iVar8 + 0x44), puVar7 != (undefined4 *)0x0)) {
      puVar2 = (uint *)puVar7[4];
      FUN_004a3a80(puVar7);
      if (*(int *)(puVar2[0x2d] + 0xc) == 0) {
        FUN_00484370(puVar2);
      }
    }
    if (iVar4 == 0x65) {
      iVar4 = 0;
    }
    return iVar4;
  }
  *param_3 = iVar8;
  if (iVar4 == 0x65) {
    iVar4 = 0;
  }
  return iVar4;
}


/* FUN_0047d6f0 @ 0047d6f0  kind=lib  attributed-by=lib-island  size=887 */

int * __cdecl FUN_0047d6f0(int *param_1,int *param_2,int param_3,int param_4)

{
  char *pcVar1;
  int iVar2;
  int *piVar3;
  ushort uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  undefined2 extraout_var;
  ulonglong local_44 [4];
  int *local_24;
  int local_20;
  int *local_1c;
  int local_18;
  char *local_14;
  int *local_10;
  int *local_c;
  int local_8;
  
  piVar5 = (int *)param_1[0x6c];
  piVar6 = param_1;
  if (piVar5 != (int *)0x0) {
    piVar6 = piVar5;
  }
  piVar6 = (int *)piVar6[0x8a];
  while( true ) {
    if (piVar6 == (int *)0x0) {
      iVar2 = *param_1;
      local_c = param_1;
      if (piVar5 != (int *)0x0) {
        local_c = piVar5;
      }
      local_18 = 0;
      local_8 = iVar2;
      piVar5 = FUN_00494b90(iVar2,0x18);
      if (piVar5 != (int *)0x0) {
        piVar5[0] = 0;
        piVar5[1] = 0;
        piVar5[2] = 0;
        piVar5[3] = 0;
        piVar5[4] = 0;
        piVar5[5] = 0;
        piVar5[1] = local_c[0x8a];
        local_c[0x8a] = (int)piVar5;
        local_1c = piVar5;
        piVar6 = FUN_00494b90(iVar2,0x1c);
        if (piVar6 != (int *)0x0) {
          piVar6[0] = 0;
          piVar6[1] = 0;
          piVar6[2] = 0;
          piVar6[3] = 0;
          piVar6[4] = 0;
          piVar6[5] = 0;
          piVar6[6] = 0;
        }
        piVar5[2] = (int)piVar6;
        if (piVar6 != (int *)0x0) {
          iVar2 = local_c[2];
          piVar6[6] = *(int *)(iVar2 + 0xb0);
          *(int **)(iVar2 + 0xb0) = piVar6;
          *piVar5 = (int)param_2;
          piVar5[3] = param_4;
          piVar5[4] = -1;
          piVar5[5] = -1;
          piVar5 = FUN_00494b90(local_8,0x230);
          if (piVar5 != (int *)0x0) {
            memset(piVar5,0,0x230);
            local_44[1] = 0;
            local_44[2] = 0;
            local_44[3] = 0;
            local_44[0] = ZEXT48(piVar5);
            piVar7 = (int *)piVar5[2];
            piVar5[0x6d] = param_3;
            piVar5[0x6c] = (int)local_c;
            *piVar5 = local_8;
            piVar5[0x81] = *param_2;
            *(char *)(piVar5 + 0x72) = (char)param_2[2];
            *(undefined8 *)(piVar5 + 0x6e) = *(undefined8 *)(param_1 + 0x6e);
            local_10 = piVar7;
            if (piVar7 == (int *)0x0) {
              piVar7 = FUN_004af150(local_8);
              piVar3 = local_1c;
              piVar5[2] = (int)piVar7;
              local_10 = piVar7;
              if (piVar7 == (int *)0x0) {
                FUN_00494b00(local_8,piVar5);
                return piVar3;
              }
              FUN_004ae760(piVar7,0x94);
            }
            local_24 = (int *)FUN_004a02d0(local_8,(byte *)"-- TRIGGER %s");
            local_14 = (char *)piVar7[1];
            iVar2 = *piVar7;
            if ((local_14 == (char *)0x0) || (*(char *)(iVar2 + 0x38) != '\0')) {
              FUN_0047bc80(iVar2,0xffffffff,local_24);
            }
            else {
              iVar8 = piVar7[7] + -1;
              local_20 = iVar8 * 5;
              FUN_0047bc80(iVar2,(int)local_14[iVar8 * 0x14 + 1],
                           *(int **)(local_14 + iVar8 * 0x14 + 0x10));
              pcVar1 = local_14 + local_20 * 4 + 0x10;
              pcVar1[0] = '\0';
              pcVar1[1] = '\0';
              pcVar1[2] = '\0';
              pcVar1[3] = '\0';
              if (local_24 == (int *)0x0) {
                pcVar1 = local_14 + local_20 * 4 + 0x10;
                pcVar1[0] = '\0';
                pcVar1[1] = '\0';
                pcVar1[2] = '\0';
                pcVar1[3] = '\0';
                local_14[local_20 * 4 + 1] = '\0';
              }
              else {
                *(int **)(local_14 + local_20 * 4 + 0x10) = local_24;
                local_14[local_20 * 4 + 1] = -1;
              }
            }
            if ((undefined4 *)param_2[3] != (undefined4 *)0x0) {
              local_14 = (char *)FUN_00478bb0(local_8,(undefined4 *)param_2[3],0,(int *)0x0);
              uVar4 = FUN_004a69e0((int *)local_44,(int)local_14);
              if ((CONCAT22(extraout_var,uVar4) == 0) && (*(char *)(local_8 + 0x38) == '\0')) {
                local_18 = FUN_004b6b80(piVar7);
                FUN_004988a0(piVar5,local_14,local_18,8);
              }
              FUN_00498790(local_8,(undefined4 *)local_14);
            }
            FUN_00474d00(piVar5,(char *)param_2[7],param_4);
            if ((local_18 != 0) && (piVar7[10] != 0)) {
              *(int *)(piVar7[10] - (local_18 * 4 + 4)) = piVar7[7];
            }
            FUN_004ae760(piVar7,6);
            if (param_1[0x11] == 0) {
              param_1[1] = piVar5[1];
              param_1[0x11] = piVar5[0x11];
            }
            else {
              FUN_00494b00(*piVar5,(undefined4 *)piVar5[1]);
            }
            if (*(char *)(local_8 + 0x38) == '\0') {
              iVar2 = piVar7[1];
              FUN_00489330(local_10,(uint *)(local_c + 0x66));
              piVar6[1] = local_10[7];
              local_10[1] = 0;
              *piVar6 = iVar2;
              piVar7 = local_10;
            }
            piVar3 = local_1c;
            piVar6[2] = piVar5[0x13];
            piVar6[3] = piVar5[0x12];
            piVar6[4] = piVar5[0x15];
            piVar6[5] = (int)param_2;
            local_1c[4] = piVar5[0x70];
            local_1c[5] = piVar5[0x71];
            FUN_004af250(piVar7);
            FUN_00494b00(local_8,piVar5);
            return piVar3;
          }
        }
      }
      return (int *)0x0;
    }
    if (((int *)*piVar6 == param_2) && (piVar6[3] == param_4)) break;
    piVar6 = (int *)piVar6[1];
  }
  return piVar6;
}


/* FUN_0047da70 @ 0047da70  kind=lib  attributed-by=lib-island  size=151 */

uint __cdecl FUN_0047da70(byte *param_1,int param_2,byte param_3)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 uVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  
  pbVar2 = param_1;
  bVar1 = *param_1;
  pbVar5 = param_1;
  if (((&DAT_00569720)[bVar1] & 4) != 0) {
    param_1 = (byte *)0x0;
    uVar3 = FUN_0049ca30((char *)pbVar2,(uint *)&param_1);
    return CONCAT31((int3)((uint)uVar3 >> 8),param_1._0_1_);
  }
  while (bVar1 != 0) {
    bVar1 = pbVar5[1];
    pbVar5 = pbVar5 + 1;
  }
  pbVar4 = (byte *)(7 - param_2);
  pbVar5 = (byte *)((int)pbVar5 - (int)param_1 & 0x3fffffff);
  iVar6 = 0;
  param_1 = pbVar4;
  if (0 < (int)pbVar4) {
    do {
      pbVar4 = (byte *)(uint)(byte)(&DAT_0056a638)[iVar6];
      if ((pbVar4 == pbVar5) &&
         (pbVar4 = (byte *)FUN_00468380((byte *)("onoffalseyestruefull" +
                                                (byte)(&DAT_0056a630)[iVar6]),pbVar2,(int)pbVar5),
         pbVar4 == (byte *)0x0)) {
        return (uint)(byte)(&DAT_0056a640)[iVar6];
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)param_1);
  }
  return CONCAT31((int3)((uint)pbVar4 >> 8),param_3);
}


/* FUN_0047de10 @ 0047de10  kind=lib  attributed-by=lib-island  size=125 */

undefined4 __cdecl FUN_0047de10(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  
  if (param_1[8] == 0) {
    iVar1 = 0x33;
  }
  else {
    iVar1 = param_1[8] * 2;
  }
  puVar2 = FUN_00494cf0(*param_1,(undefined4 *)param_1[1],iVar1 * 0x14);
  if (puVar2 != (undefined4 *)0x0) {
    iVar1 = *param_1;
    if (((iVar1 == 0) || (puVar2 < *(undefined4 **)(iVar1 + 0x104))) ||
       (*(undefined4 **)(iVar1 + 0x108) <= puVar2)) {
      uVar4 = (*DAT_00582af0._4_4_)(puVar2);
    }
    else {
      uVar4 = (uint)*(ushort *)(iVar1 + 0xe8);
    }
    param_1[8] = uVar4 / 0x14;
    param_1[1] = (int)puVar2;
  }
  uVar3 = 7;
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = 0;
  }
  return uVar3;
}


/* FUN_0047de90 @ 0047de90  kind=lib  attributed-by=lib-island  size=104 */

undefined4 __cdecl FUN_0047de90(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 0x120) % 5 == 0) {
    puVar2 = FUN_00494cf0(param_1,*(undefined4 **)(param_1 + 0x138),
                          *(int *)(param_1 + 0x120) * 4 + 0x14);
    if (puVar2 == (undefined4 *)0x0) {
      return 7;
    }
    iVar1 = *(int *)(param_1 + 0x120);
    *(undefined8 *)(puVar2 + iVar1) = 0;
    *(undefined8 *)(puVar2 + iVar1 + 2) = 0;
    puVar2[iVar1 + 4] = 0;
    *(undefined4 **)(param_1 + 0x138) = puVar2;
  }
  return 0;
}


/* FUN_0047df00 @ 0047df00  kind=lib  attributed-by=lib-island  size=391 */

int __cdecl FUN_0047df00(int *param_1,uint *param_2)

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
  if (((iVar2 == 0) && (local_c == 0)) &&
     (iVar2 = FUN_00483dd0((int)piVar1,(uint *)&param_1), iVar2 == 0)) {
    if (param_1 == (int *)0x0) {
      if (DAT_00583e74 != (code *)0x0) {
        (*DAT_00583e74)();
      }
      iVar3 = FUN_00483ca0((int)piVar1,2);
      if ((iVar3 == 0) &&
         ((**(code **)(iVar4 + 0x1c))(iVar4,piVar1[0x25],0), (char)piVar1[1] == '\0')) {
        FUN_004843d0((int)piVar1,1);
      }
      if (DAT_00583e78 != (code *)0x0) {
        (*DAT_00583e78)();
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
        FUN_004a1250((int *)piVar1[0x10]);
      }
      *param_2 = (uint)(param_1._3_1_ != '\0');
    }
  }
  return iVar2;
}


/* FUN_0047e090 @ 0047e090  kind=lib  attributed-by=lib-island  size=54 */

void __cdecl FUN_0047e090(int *param_1,int *param_2)

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


/* FUN_0047e0d0 @ 0047e0d0  kind=lib  attributed-by=lib-island  size=120 */

void __cdecl FUN_0047e0d0(undefined4 *param_1,int *param_2)

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
    FUN_0047e090((int *)*param_1,param_2);
    FUN_0047e090((int *)param_1[0xc],param_2);
    FUN_0047e090((int *)param_1[0xe],param_2);
  }
  return;
}


/* FUN_0047e150 @ 0047e150  kind=lib  attributed-by=lib-island  size=166 */

void __cdecl FUN_0047e150(int param_1,int *param_2,byte *param_3)

{
  byte bVar1;
  undefined1 uVar2;
  undefined3 extraout_var;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = *param_2;
  uVar4 = 0;
  bVar3 = *param_3;
  while ((bVar3 != 0 && ((((&DAT_00569720)[bVar3] & 6) != 0 || (bVar3 == 0x5f))))) {
    iVar6 = uVar4 + 1;
    uVar4 = uVar4 + 1;
    bVar3 = param_3[iVar6];
  }
  if ((((&DAT_00569720)[*param_3] & 4) == 0) &&
     (uVar2 = FUN_0047f6a0(param_3,uVar4), CONCAT31(extraout_var,uVar2) == 0x1a)) {
    bVar3 = param_3[uVar4];
    if (bVar3 == 0) goto LAB_0047e1c2;
  }
  else {
    bVar3 = 1;
  }
  *(undefined1 *)(iVar5 + param_1) = 0x22;
  iVar5 = iVar5 + 1;
LAB_0047e1c2:
  bVar1 = *param_3;
  while (bVar1 != 0) {
    *(byte *)(iVar5 + param_1) = *param_3;
    iVar6 = iVar5 + 1;
    if (*param_3 == 0x22) {
      *(undefined1 *)(iVar6 + param_1) = 0x22;
      iVar6 = iVar5 + 2;
    }
    param_3 = param_3 + 1;
    iVar5 = iVar6;
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


/* FUN_0047e200 @ 0047e200  kind=lib  attributed-by=lib-island  size=123 */

void __cdecl FUN_0047e200(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  char *_Src;
  char *pcVar3;
  size_t _Size;
  undefined4 *_Dst;
  
  iVar2 = *param_1;
  FUN_00494b00(iVar2,(undefined4 *)param_1[0xd]);
  _Src = *(char **)(param_2 + 8);
  if (_Src == (char *)0x0) {
    _Dst = (undefined4 *)0x0;
  }
  else {
    cVar1 = *_Src;
    pcVar3 = _Src;
    while (cVar1 != '\0') {
      pcVar3 = pcVar3 + 1;
      cVar1 = *pcVar3;
    }
    _Size = ((int)pcVar3 - (int)_Src & 0x3fffffffU) + 1;
    _Dst = FUN_00494b90(iVar2,_Size);
    if (_Dst != (undefined4 *)0x0) {
      memcpy(_Dst,_Src,_Size);
    }
  }
  param_1[0xd] = (int)_Dst;
  FUN_00466dd0(*(int *)(param_2 + 8));
  *(undefined4 *)(param_2 + 8) = 0;
  return;
}


/* FUN_0047e2a0 @ 0047e2a0  kind=lib  attributed-by=lib-island  size=62 */

void __cdecl FUN_0047e2a0(int param_1,int param_2)

{
  undefined8 local_18;
  undefined8 local_10;
  int local_8;
  
  if (0 < param_2) {
    local_8 = param_2;
    local_10 = 0;
    local_18 = 0x47e280;
    FUN_004bb020((undefined4 *)&local_18,param_1);
  }
  return;
}


/* FUN_0047e2e0 @ 0047e2e0  kind=lib  attributed-by=lib-island  size=1030 */

uint __cdecl FUN_0047e2e0(int *param_1,undefined4 *param_2,char *param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  char *pcVar6;
  uint local_18;
  uint local_14;
  char *local_10;
  undefined4 *local_c;
  char *local_8;
  
  pcVar6 = param_3;
  if (param_3 < (char *)0x2) {
    pcVar4 = (char *)0x0;
  }
  else {
    uVar2 = (uint)param_1[9] / 5 + 1;
    iVar3 = ((uint)(param_3 + -2) / uVar2) * uVar2;
    pcVar4 = (char *)(iVar3 + 2);
    if (pcVar4 == (char *)(DAT_00582bb8 / (uint)param_1[8] + 1)) {
      pcVar4 = (char *)(iVar3 + 3);
    }
  }
  if ((pcVar4 != param_3) && (param_3 != (char *)(DAT_00582bb8 / (uint)param_1[8] + 1))) {
    iVar3 = *(int *)(param_1[3] + 0x38);
    if (CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar3 + 0x24),*(undefined1 *)(iVar3 + 0x25)),
                          *(undefined1 *)(iVar3 + 0x26)),*(undefined1 *)(iVar3 + 0x27)) == 0) {
      return 0x65;
    }
    uVar2 = FUN_00486f40(param_1,(undefined4 *)param_3,(byte *)&local_8,&local_14);
    if (uVar2 != 0) {
      return uVar2;
    }
    if ((char)local_8 == '\x01') {
      uVar2 = FUN_00493af0();
      return uVar2;
    }
    if ((char)local_8 == '\x02') {
      if (param_2 != (undefined4 *)0x0) {
        return 0;
      }
      uVar2 = FUN_0046bae0(param_1,(int *)&param_3,&local_18,(undefined4 *)pcVar6,'\x01');
      if (uVar2 != 0) {
        return uVar2;
      }
      FUN_004880a0((int)param_3);
      goto LAB_0047e485;
    }
    uVar2 = FUN_004712c0(param_1,(uint)pcVar6,(int *)&param_3,0);
    if (uVar2 != 0) {
      return uVar2;
    }
    do {
      local_18 = FUN_0046bae0(param_1,(int *)&local_10,(uint *)&local_c,(undefined4 *)0x0,'\0');
      if (local_18 != 0) {
        FUN_004880a0((int)param_3);
        return local_18;
      }
      FUN_004880a0((int)local_10);
    } while ((param_2 != (undefined4 *)0x0) && (param_2 < local_c));
    local_10 = (char *)FUN_004a2c80(*(undefined4 **)(param_3 + 0x44));
    if (local_10 == (char *)0x0) {
      local_10 = (char *)FUN_00488380(param_1,param_3,local_8,local_14,(uint)local_c,
                                      (uint)(param_2 != (undefined4 *)0x0));
    }
    FUN_004880a0((int)param_3);
    if (local_10 != (char *)0x0) {
      return (uint)local_10;
    }
  }
  if (param_2 != (undefined4 *)0x0) {
    return 0;
  }
LAB_0047e485:
  local_8 = pcVar6 + -3;
  do {
    pcVar6 = pcVar6 + -1;
    param_3 = (char *)(DAT_00582bb8 / (uint)param_1[8] + 1);
    if (pcVar6 != param_3) {
      if (pcVar6 < (char *)0x2) {
        pcVar4 = (char *)0x0;
      }
      else {
        uVar2 = (uint)param_1[9] / 5 + 1;
        iVar3 = ((uint)local_8 / uVar2) * uVar2;
        pcVar4 = (char *)(iVar3 + 2);
        if (pcVar4 == param_3) {
          pcVar4 = (char *)(iVar3 + 3);
        }
      }
      if (pcVar4 != pcVar6) {
        *(char **)(*param_1 + 0x18) = pcVar6;
        param_1[0xb] = (int)pcVar6;
        return 0;
      }
    }
    if (pcVar6 < (char *)0x2) {
      pcVar4 = (char *)0x0;
    }
    else {
      uVar2 = (uint)param_1[9] / 5 + 1;
      iVar3 = ((uint)local_8 / uVar2) * uVar2;
      pcVar4 = (char *)(iVar3 + 2);
      if (pcVar4 == param_3) {
        pcVar4 = (char *)(iVar3 + 3);
      }
    }
    if (pcVar4 == pcVar6) {
      puVar1 = (uint *)*param_1;
      if (pcVar6 == (char *)0x0) {
        FUN_004683f0(0xb,"database corruption at line %d of [%.10s]");
        return 0xb;
      }
      param_3 = (char *)puVar1[10];
      if ((param_3 == (char *)0x0) &&
         (param_3 = (char *)FUN_004a37e0((int *)puVar1[0x2d],(int)pcVar6,1,&local_c),
         puVar5 = local_c, param_3 == (char *)0x0)) {
        if (local_c[4] != 0) {
          puVar1[0x28] = puVar1[0x28] + 1;
          goto LAB_0047e647;
        }
        local_c[4] = puVar1;
        if (((char *)0x7fffffff < pcVar6) ||
           (pcVar6 == (char *)((int)DAT_00582bb8 / (int)puVar1[0x20] + 1U))) {
          FUN_004683f0(0xb,"database corruption at line %d of [%.10s]");
          param_3 = (char *)0xb;
LAB_0047e5f4:
          if ((*(byte *)(puVar5 + 6) & 2) != 0) {
            FUN_00486ed0((int)puVar5);
          }
          iVar3 = puVar5[7];
          *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + -1;
          if (puVar5[5] == 1) {
            *(undefined4 *)(iVar3 + 0x2c) = 0;
          }
          (*DAT_00582b4c)(*(undefined4 *)(iVar3 + 0x28),*puVar5,1);
          goto LAB_0047e626;
        }
        if (((*(char *)((int)puVar1 + 0xe) == '\0') && (pcVar6 <= (char *)puVar1[6])) &&
           (*(int *)puVar1[0xf] != 0)) {
          puVar1[0x29] = puVar1[0x29] + 1;
          param_3 = (char *)FUN_004876e0((int)local_c);
          if (param_3 != (char *)0x0) goto LAB_0047e5f4;
        }
        else {
          if ((char *)puVar1[0x21] < pcVar6) {
            param_3 = (char *)0xd;
            goto LAB_0047e5f4;
          }
          memset((void *)local_c[1],0,puVar1[0x20]);
        }
      }
      else {
LAB_0047e626:
        if (*(int *)(puVar1[0x2d] + 0xc) == 0) {
          FUN_00484370(puVar1);
        }
        puVar5 = (undefined4 *)0x0;
        local_c = (undefined4 *)0x0;
        if (param_3 != (char *)0x0) {
          return (uint)param_3;
        }
      }
LAB_0047e647:
      iVar3 = puVar5[2];
      *(undefined4 *)(iVar3 + 0x38) = puVar5[1];
      *(int **)(iVar3 + 0x34) = param_1;
      *(undefined4 **)(iVar3 + 0x44) = puVar5;
      *(char **)(iVar3 + 0x48) = pcVar6;
      *(byte *)(iVar3 + 5) = (pcVar6 != (char *)0x1) - 1U & 100;
      param_3 = (char *)FUN_004a2c80(puVar5);
      puVar5 = *(undefined4 **)(iVar3 + 0x44);
      if (puVar5 != (undefined4 *)0x0) {
        puVar1 = (uint *)puVar5[4];
        FUN_004a3a80(puVar5);
        if (*(int *)(puVar1[0x2d] + 0xc) == 0) {
          FUN_00484370(puVar1);
        }
      }
      if (param_3 != (char *)0x0) {
        return (uint)param_3;
      }
    }
    local_8 = local_8 + -1;
  } while( true );
}


/* FUN_0047e6f0 @ 0047e6f0  kind=lib  attributed-by=lib-island  size=419 */

void __cdecl
FUN_0047e6f0(uint param_1,int param_2,undefined1 *param_3,int param_4,undefined1 *param_5,
            int param_6,uint *param_7)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined2 *puVar7;
  uint uVar8;
  undefined2 *puVar9;
  int local_8;
  
  uVar8 = -(uint)(param_6 != 0) & 4;
  local_8 = 0;
  if (*param_7 == 0) {
    if ((*(char *)(param_1 + 1) == '\0') && (param_4 + 2 <= (int)(uint)*(ushort *)(param_1 + 0xe)))
    {
      uVar6 = FUN_004a2c80(*(undefined4 **)(param_1 + 0x44));
      if (uVar6 == 0) {
        iVar4 = *(int *)(param_1 + 0x38);
        uVar2 = *(ushort *)(param_1 + 0xc);
        uVar3 = *(ushort *)(param_1 + 0x10);
        uVar6 = FUN_0046c4b0(param_1,param_4,&local_8);
        iVar5 = local_8;
        if (uVar6 == 0) {
          *(short *)(param_1 + 0x10) = *(short *)(param_1 + 0x10) + 1;
          *(short *)(param_1 + 0xe) = *(short *)(param_1 + 0xe) + (-2 - (short)param_4);
          memcpy((void *)(iVar4 + uVar8 + local_8),param_3 + uVar8,param_4 - uVar8);
          if (param_6 != 0) {
            FUN_004a5f90((undefined1 *)(iVar4 + iVar5),param_6);
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
          FUN_004871d0(param_1,(uint)param_3,param_7);
          return;
        }
      }
      *param_7 = uVar6;
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


/* FUN_0047e8a0 @ 0047e8a0  kind=lib  attributed-by=lib-island  size=103 */

void __cdecl FUN_0047e8a0(int param_1,int *param_2,int *param_3)

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


/* FUN_0047e910 @ 0047e910  kind=lib  attributed-by=lib-island  size=83 */

undefined4 __cdecl FUN_0047e910(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  piVar2 = *(int **)(*(int *)(iVar1 + 0x10) + 0x14);
  if (piVar2 != (int *)0x0) {
    if ((*(char *)(iVar1 + 0x36) == '\0') || ((char)piVar2[2] != '\0')) {
      FUN_004962b0(param_1,(byte *)"temporary storage cannot be changed from within a transaction");
      return 1;
    }
    FUN_0048f070(piVar2);
    *(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x14) = 0;
    FUN_004a6940(iVar1);
  }
  return 0;
}


/* FUN_0047ea40 @ 0047ea40  kind=lib  attributed-by=lib-island  size=88 */

bool __cdecl FUN_0047ea40(int *param_1)

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


/* FUN_0047ed50 @ 0047ed50  kind=lib  attributed-by=lib-island  size=235 */

undefined4 __cdecl FUN_0047ed50(int *param_1,short *param_2,undefined4 *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  if (*param_2 != 1) {
    return 0;
  }
  iVar1 = *(int *)(param_2 + 0x1a);
  iVar2 = *(int *)(param_2 + 0xc);
  iVar7 = 0;
  if (0 < *param_4) {
    puVar6 = (undefined4 *)param_4[2];
    do {
      for (pcVar3 = (char *)*puVar6;
          (pcVar3 != (char *)0x0 && ((*pcVar3 == '\\' || (*pcVar3 == '\x18'))));
          pcVar3 = *(char **)(pcVar3 + 8)) {
      }
      if (((*pcVar3 == -0x68) && (*(int *)(pcVar3 + 0x18) == iVar1)) &&
         (*(short *)(pcVar3 + 0x1c) < 0)) {
        return 1;
      }
      iVar7 = iVar7 + 1;
      puVar6 = puVar6 + 5;
    } while (iVar7 < *param_4);
  }
  iVar7 = *(int *)(iVar2 + 8);
  do {
    if (iVar7 == 0) {
      return 0;
    }
    if (*(char *)(iVar7 + 0x2c) != '\0') {
      iVar8 = 0;
      bVar9 = *(int *)(iVar7 + 0x24) == 0;
      if (0 < *(int *)(iVar7 + 0x24)) {
        do {
          piVar4 = FUN_00479c50(param_3,iVar1,*(int *)(*(int *)(iVar7 + 4) + iVar8 * 4),0xffffffff,
                                0xffffffff,2,iVar7);
          if ((piVar4 == (int *)0x0) &&
             ((iVar5 = FUN_00479b90(param_1,param_4,iVar1,iVar7,iVar8), iVar5 < 0 ||
              (*(char *)(*(int *)(iVar2 + 4) + 0x14 +
                        *(int *)(*(int *)(iVar7 + 4) + iVar8 * 4) * 0x18) == '\0')))) break;
          iVar8 = iVar8 + 1;
        } while (iVar8 < *(int *)(iVar7 + 0x24));
        bVar9 = iVar8 == *(int *)(iVar7 + 0x24);
      }
      if (bVar9) {
        return 1;
      }
    }
    iVar7 = *(int *)(iVar7 + 0x14);
  } while( true );
}


/* FUN_0047ee40 @ 0047ee40  kind=lib  attributed-by=lib-island  size=492 */

bool __cdecl FUN_0047ee40(int *param_1,char *param_2,int *param_3,int *param_4,uint *param_5)

{
  uint uVar1;
  short sVar2;
  undefined4 *puVar3;
  char *pcVar4;
  byte *pbVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *extraout_EDX;
  char *pcVar11;
  int *local_10;
  char local_8;
  char local_7;
  char local_6;
  
  iVar10 = *param_1;
  pcVar11 = (char *)0x0;
  local_10 = (int *)0x0;
  iVar8 = FUN_0049f780(iVar10,param_2,param_5,(undefined2 *)&local_8);
  if (iVar8 == 0) {
    return false;
  }
  puVar3 = *(undefined4 **)(*(int *)(param_2 + 0x10) + 8);
  pcVar4 = (char *)puVar3[5];
  if (((*pcVar4 != -0x68) || (cVar6 = FUN_00496480(pcVar4), cVar6 != 'a')) ||
     ((*(byte *)(*(int *)(pcVar4 + 0x28) + 0x2a) & 0x10) != 0)) {
    return false;
  }
  pbVar5 = (byte *)*puVar3;
  bVar7 = *pbVar5;
  if (bVar7 == 0x84) {
    bVar7 = pbVar5[0x23];
  }
  if (bVar7 == 0x85) {
    sVar2 = *(short *)(pbVar5 + 0x1c);
    local_10 = FUN_004b6080((int *)param_1[0x7c],(int)sVar2,'b');
    if ((local_10 != (int *)0x0) && (*(char *)((int)local_10 + 0x1e) == '\x03')) {
      pcVar11 = (char *)FUN_004ae680(local_10,1);
    }
    FUN_004b8cd0(param_1[2],(int)sVar2);
  }
  else {
    if (bVar7 != 0x5e) goto LAB_0047f00a;
    pcVar11 = *(char **)(pbVar5 + 4);
  }
  if (pcVar11 != (char *)0x0) {
    cVar6 = *pcVar11;
    iVar8 = 0;
    if (cVar6 != '\0') {
      do {
        if (((cVar6 == local_8) || (cVar6 == local_7)) || (cVar6 == local_6)) break;
        cVar6 = pcVar11[iVar8 + 1];
        iVar8 = iVar8 + 1;
      } while (cVar6 != '\0');
      if ((iVar8 != 0) && (pcVar11[iVar8 + -1] != -1)) {
        if ((cVar6 == local_8) && (pcVar11[iVar8 + 1] == '\0')) {
          iVar9 = 1;
        }
        else {
          iVar9 = 0;
        }
        *param_4 = iVar9;
        iVar10 = FUN_00496390(iVar10,0x5e,pcVar11);
        if (iVar10 != 0) {
          *(undefined1 *)(iVar8 + *(int *)(iVar10 + 4)) = 0;
        }
        *param_3 = iVar10;
        if (bVar7 == 0x85) {
          iVar10 = param_1[2];
          FUN_004b8cd0(iVar10,(int)*(short *)(pbVar5 + 0x1c));
          if ((*param_4 != 0) && (*(char *)(*(int *)(pbVar5 + 4) + 1) != '\0')) {
            iVar8 = FUN_0049cb40((int)param_1);
            FUN_00497780(extraout_EDX,pbVar5,iVar8);
            uVar1 = *(uint *)(iVar10 + 0x1c) - 1;
            if (uVar1 < *(uint *)(iVar10 + 0x1c)) {
              *(undefined4 *)(*(int *)(iVar10 + 4) + 0xc + uVar1 * 0x14) = 0;
            }
            FUN_004a68f0((int)param_1,iVar8);
          }
        }
        goto LAB_0047f00a;
      }
    }
    pcVar11 = (char *)0x0;
  }
LAB_0047f00a:
  FUN_004ae2b0(local_10);
  return pcVar11 != (char *)0x0;
}


/* FUN_0047f140 @ 0047f140  kind=lib  attributed-by=lib-island  size=94 */

int __cdecl FUN_0047f140(int *param_1,int param_2)

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


/* FUN_0047f590 @ 0047f590  kind=lib  attributed-by=lib-island  size=81 */

longlong __cdecl FUN_0047f590(int param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 != 0 || *(int *)(param_1 + 0x4c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x7c);
    lVar3 = __alldiv(iVar1 - 1,*(int *)(param_1 + 0x4c) - (uint)(iVar1 == 0),uVar2,0);
    lVar3 = __allmul((uint)(lVar3 + 1),(int)((ulonglong)(lVar3 + 1) >> 0x20),uVar2,0);
    return lVar3;
  }
  return 0;
}


/* FUN_0047f5f0 @ 0047f5f0  kind=lib  attributed-by=lib-island  size=174 */

int * __cdecl FUN_0047f5f0(int *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  int *_Dst;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  uVar1 = *param_2;
  iVar2 = *param_1;
  _Dst = FUN_00494b90(iVar2,uVar1 * 5 + 0x10);
  if (_Dst != (int *)0x0) {
    memset(_Dst,0,uVar1 * 5 + 0x10);
    *(short *)((int)_Dst + 6) = (short)uVar1;
    _Dst[2] = (int)(_Dst + uVar1 + 3);
    *(undefined1 *)(_Dst + 1) = *(undefined1 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0xc) + 0x4d);
    *_Dst = iVar2;
    puVar6 = (undefined4 *)param_2[2];
    if (0 < (int)uVar1) {
      param_2 = (uint *)(_Dst + 3);
      iVar4 = 0;
      do {
        uVar3 = FUN_004984d0(param_1,(char *)*puVar6);
        if (uVar3 == 0) {
          uVar3 = *(uint *)(iVar2 + 8);
        }
        iVar5 = iVar4 + 1;
        *param_2 = uVar3;
        *(undefined1 *)(iVar4 + _Dst[2]) = *(undefined1 *)(puVar6 + 3);
        param_2 = param_2 + 1;
        puVar6 = puVar6 + 5;
        iVar4 = iVar5;
      } while (iVar5 < (int)uVar1);
    }
  }
  return _Dst;
}


/* FUN_0047f6a0 @ 0047f6a0  kind=lib  attributed-by=lib-island  size=216 */

undefined1 __cdecl FUN_0047f6a0(byte *param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  if ((int)param_2 < 2) {
    return 0x1a;
  }
  bVar1 = (&DAT_00569e40)
          [(int)((uint)(byte)(&DAT_00569620)[param_1[param_2 - 1]] * 3 ^
                 (uint)(byte)(&DAT_00569620)[*param_1] << 2 ^ param_2) % 0x7f];
  do {
    uVar3 = (uint)bVar1;
    if ((int)(uVar3 - 1) < 0) {
      return 0x1a;
    }
    if ((byte)(&DAT_0056a01f)[uVar3] == param_2) {
      pbVar4 = &DAT_00569bf0 + *(ushort *)(&DAT_0056a0a8 + (uVar3 - 1) * 2);
      pbVar5 = param_1;
      uVar2 = param_2;
      while (0 < (int)uVar2) {
        if ((*pbVar4 == 0) || ((&DAT_00569620)[*pbVar4] != (&DAT_00569620)[*pbVar5])) break;
        pbVar4 = pbVar4 + 1;
        pbVar5 = pbVar5 + 1;
        uVar2 = uVar2 - 1;
      }
      if (((int)(uVar2 - 1) < 0) || ((&DAT_00569620)[*pbVar4] == (&DAT_00569620)[*pbVar5])) {
        return (&DAT_0056a1d7)[uVar3];
      }
    }
    bVar1 = "CREATE TABLE sqlite_master(\n  type text,\n  name text,\n  tbl_name text,\n  rootpage integer,\n  sql text\n)"
            [uVar3 + 0x67];
  } while( true );
}


/* FUN_0047f9a0 @ 0047f9a0  kind=lib  attributed-by=lib-island  size=250 */

undefined4 __cdecl
FUN_0047f9a0(int *param_1,int param_2,int param_3,int *param_4,undefined4 *param_5)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  undefined4 *local_c;
  int local_8;
  
  iVar3 = *(int *)(param_3 + 0x14);
  pbVar4 = *(byte **)(param_3 + 0x28);
  local_c = (undefined4 *)0x0;
  if (iVar3 == 1) {
    if ((-1 < *(short *)(param_2 + 0x24)) &&
       ((pbVar4 == (byte *)0x0 ||
        (iVar5 = FUN_004bcc60(*(byte **)(*(int *)(param_2 + 4) + *(short *)(param_2 + 0x24) * 0x18),
                              pbVar4), iVar5 == 0)))) {
      return 0;
    }
  }
  else if (param_5 != (undefined4 *)0x0) {
    local_c = FUN_00494b90(*param_1,iVar3 * 4);
    if (local_c == (undefined4 *)0x0) {
      return 1;
    }
    *param_5 = local_c;
  }
  iVar5 = *(int *)(param_2 + 8);
  do {
    if (iVar5 == 0) {
      if (*(char *)((int)param_1 + 0x1ca) == '\0') {
        FUN_004962b0(param_1,(byte *)"foreign key mismatch");
      }
      FUN_00494b00(*param_1,local_c);
      return 1;
    }
    if ((*(int *)(iVar5 + 0x24) == iVar3) && (*(char *)(iVar5 + 0x2c) != '\0')) {
      if (pbVar4 == (byte *)0x0) {
        if (*(char *)(iVar5 + 0x2d) == '\x02') {
          if ((local_c != (undefined4 *)0x0) && (0 < iVar3)) {
            puVar7 = (undefined4 *)(param_3 + 0x24);
            iVar6 = 0;
            do {
              local_c[iVar6] = *puVar7;
              iVar6 = iVar6 + 1;
              puVar7 = puVar7 + 2;
            } while (iVar6 < iVar3);
          }
LAB_0047fa7d:
          *param_4 = iVar5;
          return 0;
        }
      }
      else {
        local_8 = 0;
        if (0 < iVar3) {
          while( true ) {
            puVar7 = (undefined4 *)
                     (*(int *)(param_2 + 4) + *(int *)(local_8 * 4 + *(int *)(iVar5 + 4)) * 0x18);
            pbVar10 = (byte *)puVar7[4];
            pbVar8 = (byte *)"BINARY";
            if (pbVar10 != (byte *)0x0) {
              pbVar8 = pbVar10;
            }
            pbVar10 = *(byte **)(local_8 * 4 + *(int *)(iVar5 + 0x20));
            bVar2 = *pbVar10;
            while ((bVar2 != 0 && ((&DAT_00569620)[bVar2] == (&DAT_00569620)[*pbVar8]))) {
              pbVar1 = pbVar10 + 1;
              pbVar10 = pbVar10 + 1;
              pbVar8 = pbVar8 + 1;
              bVar2 = *pbVar1;
            }
            if ((&DAT_00569620)[*pbVar10] != (&DAT_00569620)[*pbVar8]) break;
            iVar6 = 0;
            puVar9 = (undefined4 *)(param_3 + 0x28);
            do {
              pbVar10 = (byte *)*puVar9;
              bVar2 = *pbVar10;
              pbVar8 = (byte *)*puVar7;
              while ((bVar2 != 0 && ((&DAT_00569620)[bVar2] == (&DAT_00569620)[*pbVar8]))) {
                pbVar1 = pbVar10 + 1;
                pbVar10 = pbVar10 + 1;
                pbVar8 = pbVar8 + 1;
                bVar2 = *pbVar1;
              }
              if ((&DAT_00569620)[*pbVar10] == (&DAT_00569620)[*pbVar8]) {
                if (local_c != (undefined4 *)0x0) {
                  local_c[local_8] = *(undefined4 *)(param_3 + 0x24 + iVar6 * 8);
                }
                break;
              }
              iVar6 = iVar6 + 1;
              puVar9 = puVar9 + 2;
            } while (iVar6 < iVar3);
            if ((iVar6 == iVar3) || (local_8 = local_8 + 1, iVar3 <= local_8)) break;
          }
        }
        if (local_8 == iVar3) goto LAB_0047fa7d;
      }
    }
    iVar5 = *(int *)(iVar5 + 0x14);
  } while( true );
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


/* FUN_0047fc00 @ 0047fc00  kind=lib  attributed-by=lib-island  size=891 */

uint __cdecl FUN_0047fc00(int *param_1)

{
  uint *puVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  ushort uVar6;
  int *piVar7;
  short sVar8;
  char *pcVar9;
  undefined4 *puVar10;
  bool bVar11;
  undefined4 *local_10;
  int local_c;
  int local_8;
  
  piVar3 = param_1;
  uVar4 = FUN_004a2980((uint *)*param_1);
  if (uVar4 != 0) {
    return uVar4;
  }
  puVar1 = (uint *)*param_1;
  param_1 = (int *)puVar1[10];
  if (param_1 == (int *)0x0) {
    param_1 = (int *)FUN_004a37e0((int *)puVar1[0x2d],1,1,&local_10);
  }
  puVar10 = local_10;
  iVar5 = DAT_00582bb8;
  if (param_1 == (int *)0x0) {
    if (local_10[4] != 0) {
      puVar1[0x28] = puVar1[0x28] + 1;
      goto LAB_0047fd2b;
    }
    local_10[4] = puVar1;
    if (iVar5 / (int)puVar1[0x20] == 0) {
      FUN_004683f0(0xb,"database corruption at line %d of [%.10s]");
      param_1 = (int *)0xb;
LAB_0047fcd7:
      if ((*(byte *)(puVar10 + 6) & 2) != 0) {
        FUN_00486ed0((int)puVar10);
      }
      iVar5 = puVar10[7];
      *(int *)(iVar5 + 0xc) = *(int *)(iVar5 + 0xc) + -1;
      if (puVar10[5] == 1) {
        *(undefined4 *)(iVar5 + 0x2c) = 0;
      }
      (*DAT_00582b4c)(*(undefined4 *)(iVar5 + 0x28),*puVar10,1);
      goto LAB_0047fd09;
    }
    if (((*(char *)((int)puVar1 + 0xe) == '\0') && (puVar1[6] != 0)) && (*(int *)puVar1[0xf] != 0))
    {
      puVar1[0x29] = puVar1[0x29] + 1;
      param_1 = (int *)FUN_004876e0((int)local_10);
      if (param_1 != (int *)0x0) goto LAB_0047fcd7;
    }
    else {
      if (puVar1[0x21] == 0) {
        param_1 = (int *)0xd;
        goto LAB_0047fcd7;
      }
      memset((void *)local_10[1],0,puVar1[0x20]);
    }
  }
  else {
LAB_0047fd09:
    if (*(int *)(puVar1[0x2d] + 0xc) == 0) {
      FUN_00484370(puVar1);
    }
    puVar10 = (undefined4 *)0x0;
    if (param_1 != (int *)0x0) {
      return (uint)param_1;
    }
  }
LAB_0047fd2b:
  local_8 = puVar10[2];
  piVar2 = (int *)puVar10[1];
  *(undefined4 **)(local_8 + 0x44) = puVar10;
  *(int **)(local_8 + 0x38) = piVar2;
  *(int **)(local_8 + 0x34) = piVar3;
  *(undefined4 *)(local_8 + 0x48) = 1;
  *(undefined1 *)(local_8 + 5) = 100;
  local_c = CONCAT31(CONCAT21(CONCAT11((char)piVar2[7],*(undefined1 *)((int)piVar2 + 0x1d)),
                              *(undefined1 *)((int)piVar2 + 0x1e)),
                     *(undefined1 *)((int)piVar2 + 0x1f));
  iVar5 = *(int *)(*piVar3 + 0x18);
  if ((local_c == 0) || (piVar2[6] != piVar2[0x17])) {
    local_c = iVar5;
  }
  if (local_c < 1) {
LAB_0047ff15:
    iVar5 = (uint)((piVar3[9] + -0xc) * 0x40) / 0xff - 0x17;
    sVar8 = (short)((uint)((piVar3[9] + -0xc) * 0x20) / 0xff) + -0x17;
    uVar6 = (ushort)iVar5;
    *(ushort *)(piVar3 + 6) = uVar6;
    *(short *)((int)piVar3 + 0x1a) = sVar8;
    *(short *)(piVar3 + 7) = (short)piVar3[9] + -0x23;
    *(short *)((int)piVar3 + 0x1e) = sVar8;
    if (uVar6 < 0x80) {
      *(char *)(piVar3 + 5) = (char)iVar5;
    }
    else {
      *(undefined1 *)(piVar3 + 5) = 0x7f;
    }
    piVar3[3] = local_8;
    piVar3[0xb] = local_c;
    return 0;
  }
  param_1 = (int *)0x1a;
  pcVar9 = "SQLite format 3";
  uVar4 = 0xc;
  piVar7 = piVar2;
  do {
    if (*piVar7 != *(int *)pcVar9) goto LAB_0047fec5;
    piVar7 = piVar7 + 1;
    pcVar9 = (char *)((int)pcVar9 + 4);
    bVar11 = 3 < uVar4;
    uVar4 = uVar4 - 4;
  } while (bVar11);
  if (2 < *(byte *)((int)piVar2 + 0x12)) {
    *(ushort *)((int)piVar3 + 0x16) = *(ushort *)((int)piVar3 + 0x16) | 1;
  }
  if (*(byte *)((int)piVar2 + 0x13) < 3) {
    if ((*(byte *)((int)piVar2 + 0x13) == 2) && ((*(byte *)((int)piVar3 + 0x16) & 0x10) == 0)) {
      local_10 = (undefined4 *)0x0;
      param_1 = (int *)FUN_004a2440((int *)*piVar3,&local_10);
      if (param_1 != (int *)0x0) goto LAB_0047fec5;
      if (local_10 == (undefined4 *)0x0) {
        FUN_004880a0(local_8);
        return 0;
      }
    }
    param_1 = (int *)0x1a;
    if ((((*(short *)((int)piVar2 + 0x15) == 0x2040) && (*(char *)((int)piVar2 + 0x17) == ' ')) &&
        (uVar4 = (uint)*(ushort *)(piVar2 + 4) * 0x100, (uVar4 & uVar4 - 1) == 0)) &&
       (uVar4 - 0x101 < 0xff00)) {
      local_10 = (undefined4 *)(uVar4 - *(byte *)(piVar2 + 5));
      if (uVar4 != piVar3[8]) {
        FUN_004880a0(local_8);
        puVar10 = local_10;
        piVar3[9] = (int)local_10;
        piVar3[8] = uVar4;
        FUN_0047c340((int)piVar3);
        uVar4 = FUN_004a27d0(*piVar3,(uint *)(piVar3 + 8),uVar4 - (int)puVar10);
        return uVar4;
      }
      if (((*(uint *)(piVar3[1] + 0x18) & 0x8000) == 0) && (iVar5 < local_c)) {
        param_1 = (int *)FUN_00493af0();
      }
      else if ((undefined4 *)0x1df < local_10) {
        piVar3[8] = uVar4;
        piVar3[9] = (int)local_10;
        iVar5 = FUN_0049c920((undefined1 *)(piVar2 + 0xd));
        *(bool *)((int)piVar3 + 0x11) = iVar5 != 0;
        iVar5 = FUN_0049c920((undefined1 *)(piVar2 + 0x10));
        *(bool *)((int)piVar3 + 0x12) = iVar5 != 0;
        goto LAB_0047ff15;
      }
    }
  }
LAB_0047fec5:
  FUN_004880a0(local_8);
  piVar3[3] = 0;
  return (uint)param_1;
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


/* FUN_00480650 @ 00480650  kind=lib  attributed-by=lib-island  size=228 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl FUN_00480650(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (*DAT_00582af8)(param_1);
  if (DAT_00583e54 < param_1) {
    DAT_00583e54 = param_1;
  }
  _DAT_00583e2c = param_1;
  if (DAT_00583f50 != 0) {
    iVar2 = (DAT_00583f4c - ((int)uVar1 >> 0x1f)) - (uint)(DAT_00583f48 < uVar1);
    if (((int)DAT_00583e18 >> 0x1f < iVar2) ||
       (((int)DAT_00583e18 >> 0x1f <= iVar2 && (DAT_00583e18 < DAT_00583f48 - uVar1)))) {
      DAT_00583f64 = 0;
    }
    else {
      DAT_00583f64 = 1;
      FUN_004a03c0(uVar1);
    }
  }
  iVar2 = (*DAT_00582ae8)(uVar1);
  if (iVar2 != 0) {
    uVar1 = (*DAT_00582af0._4_4_)(iVar2);
    DAT_00583e18 = DAT_00583e18 + uVar1;
    if (DAT_00583e40 < (int)DAT_00583e18) {
      DAT_00583e40 = DAT_00583e18;
    }
    DAT_00583e3c = DAT_00583e3c + 1;
    if (DAT_00583e64 < DAT_00583e3c) {
      DAT_00583e64 = DAT_00583e3c;
    }
    *param_2 = iVar2;
    return uVar1;
  }
  *param_2 = 0;
  return uVar1;
}


/* FUN_004807d0 @ 004807d0  kind=lib  attributed-by=lib-island  size=112 */

char __cdecl FUN_004807d0(int *param_1)

{
  char *pcVar1;
  int *piVar2;
  byte *pbVar3;
  int iVar4;
  
  if ((((*(int *)*param_1 == 1) && (pcVar1 = *(char **)((int *)*param_1)[2], *pcVar1 == -0x67)) &&
      ((*(ushort *)(pcVar1 + 2) & 0x800) == 0)) &&
     (((piVar2 = *(int **)(pcVar1 + 0x10), piVar2 != (int *)0x0 && (*piVar2 == 1)) &&
      (**(char **)piVar2[2] == -0x66)))) {
    pbVar3 = *(byte **)(pcVar1 + 4);
    iVar4 = FUN_004bcc60(pbVar3,&DAT_0056d108);
    if (iVar4 == 0) {
      return '\x01';
    }
    iVar4 = FUN_004bcc60(pbVar3,&DAT_0056d10c);
    return (-(iVar4 != 0) & 0xfeU) + 2;
  }
  return '\0';
}


/* FUN_00480840 @ 00480840  kind=lib  attributed-by=lib-island  size=552 */

undefined4 __cdecl FUN_00480840(char *param_1,int param_2,undefined4 param_3,char param_4)

{
  undefined1 uVar1;
  undefined1 uVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  undefined1 *puVar8;
  uint local_2c [6];
  ushort local_14;
  uint local_c;
  char local_5;
  undefined1 uVar2;
  undefined1 uVar3;
  
  uVar4 = (undefined1)param_3;
  uVar1 = (undefined1)((uint)param_3 >> 8);
  uVar2 = (undefined1)((uint)param_3 >> 0x10);
  uVar3 = (undefined1)((uint)param_3 >> 0x18);
  if (param_4 == '\x04') {
    puVar8 = *(undefined1 **)(param_1 + 0x38);
    if (CONCAT31(CONCAT21(CONCAT11(*puVar8,puVar8[1]),puVar8[2]),puVar8[3]) == param_2) {
      *puVar8 = uVar3;
      puVar8[1] = uVar2;
      puVar8[2] = uVar1;
      puVar8[3] = uVar4;
      return 0;
    }
    FUN_004683f0(0xb,"database corruption at line %d of [%.10s]");
    return 0xb;
  }
  local_5 = *param_1;
  FUN_00471320(param_1);
  local_c = (uint)*(ushort *)(param_1 + 0x10);
  uVar7 = 0;
  if (local_c != 0) {
    do {
      puVar8 = (undefined1 *)
               ((uint)(CONCAT11(*(undefined1 *)(*(int *)(param_1 + 0x40) + uVar7 * 2),
                                *(undefined1 *)(*(int *)(param_1 + 0x40) + 1 + uVar7 * 2)) &
                      *(ushort *)(param_1 + 0x12)) + *(int *)(param_1 + 0x38));
      if (param_4 == '\x03') {
        FUN_00471710((int)param_1,(uint)puVar8,local_2c);
        if (((local_14 != 0) &&
            (puVar5 = puVar8 + local_14,
            puVar5 + 3 <=
            (undefined1 *)((uint)*(ushort *)(param_1 + 0x12) + *(int *)(param_1 + 0x38)))) &&
           (param_2 == CONCAT31(CONCAT21(CONCAT11(*puVar5,puVar5[1]),puVar5[2]),puVar5[3]))) {
          puVar8 = puVar8 + local_14;
          *puVar8 = uVar3;
          puVar8[1] = uVar2;
          puVar8[2] = uVar1;
          puVar8[3] = uVar4;
          break;
        }
      }
      else if (CONCAT31(CONCAT21(CONCAT11(*puVar8,puVar8[1]),puVar8[2]),puVar8[3]) == param_2) {
        *puVar8 = uVar3;
        puVar8[1] = uVar2;
        puVar8[2] = uVar1;
        puVar8[3] = uVar4;
        break;
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)local_c);
  }
  if (uVar7 == local_c) {
    if ((param_4 != '\x05') ||
       (iVar6 = (uint)(byte)param_1[5] + *(int *)(param_1 + 0x38),
       CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar6 + 8),*(undefined1 *)(iVar6 + 9)),
                         *(undefined1 *)(iVar6 + 10)),*(undefined1 *)(iVar6 + 0xb)) != param_2)) {
      FUN_004683f0(0xb,"database corruption at line %d of [%.10s]");
      return 0xb;
    }
    *(undefined1 *)(iVar6 + 8) = uVar3;
    *(undefined1 *)(iVar6 + 9) = uVar2;
    *(undefined1 *)(iVar6 + 10) = uVar1;
    *(undefined1 *)(iVar6 + 0xb) = uVar4;
  }
  *param_1 = local_5;
  return 0;
}


/* FUN_00480a70 @ 00480a70  kind=lib  attributed-by=lib-island  size=145 */

int __cdecl FUN_00480a70(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_1;
  iVar3 = (int)*(short *)(param_1 + 0x5e);
  if (*(short *)(param_1 + 0x5e) < 0x13) {
    iVar2 = FUN_0047d000(*(int **)(param_1 + 4),param_2,&param_1);
    if (iVar2 != 0) {
      return iVar2;
    }
    *(int *)(iVar1 + 0x8c + iVar3 * 4) = param_1;
    *(undefined2 *)(iVar1 + 0x62 + iVar3 * 2) = 0;
    *(short *)(iVar1 + 0x5e) = *(short *)(iVar1 + 0x5e) + 1;
    *(undefined2 *)(iVar1 + 0x42) = 0;
    *(undefined1 *)(iVar1 + 0x5a) = 0;
    if ((*(short *)(param_1 + 0x10) != 0) &&
       (*(char *)(param_1 + 2) == *(char *)(*(int *)(iVar1 + 0x88 + iVar3 * 4) + 2))) {
      return 0;
    }
  }
  FUN_004683f0(0xb,"database corruption at line %d of [%.10s]");
  return 0xb;
}


/* FUN_00480b10 @ 00480b10  kind=lib  attributed-by=lib-island  size=116 */

int __cdecl FUN_00480b10(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  
  do {
    iVar1 = *(int *)(param_1 + 0x88 + *(short *)(param_1 + 0x5e) * 4);
    if (*(char *)(iVar1 + 3) != '\0') {
      return 0;
    }
    uVar2 = (uint)*(ushort *)(param_1 + 0x60 + *(short *)(param_1 + 0x5e) * 2);
    puVar3 = (undefined1 *)
             ((uint)(CONCAT11(*(undefined1 *)(*(int *)(iVar1 + 0x40) + uVar2 * 2),
                              *(undefined1 *)(*(int *)(iVar1 + 0x40) + 1 + uVar2 * 2)) &
                    *(ushort *)(iVar1 + 0x12)) + *(int *)(iVar1 + 0x38));
    iVar1 = FUN_00480a70(param_1,CONCAT31(CONCAT21(CONCAT11(*puVar3,puVar3[1]),puVar3[2]),puVar3[3])
                        );
  } while (iVar1 == 0);
  return iVar1;
}


/* FUN_00480b90 @ 00480b90  kind=lib  attributed-by=lib-island  size=80 */

void __cdecl FUN_00480b90(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint *puVar3;
  
  iVar1 = *(int *)(param_1 + 0x88 + *(short *)(param_1 + 0x5e) * 4);
  if ((iVar1 != 0) && (puVar2 = *(undefined4 **)(iVar1 + 0x44), puVar2 != (undefined4 *)0x0)) {
    puVar3 = (uint *)puVar2[4];
    FUN_004a3a80(puVar2);
    if (*(int *)(puVar3[0x2d] + 0xc) == 0) {
      FUN_00484370(puVar3);
    }
  }
  *(short *)(param_1 + 0x5e) = *(short *)(param_1 + 0x5e) + -1;
  *(undefined2 *)(param_1 + 0x42) = 0;
  *(undefined1 *)(param_1 + 0x5a) = 0;
  return;
}


/* FUN_00480be0 @ 00480be0  kind=lib  attributed-by=lib-island  size=133 */

int __cdecl FUN_00480be0(int param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  
  do {
    iVar5 = *(int *)(param_1 + 0x88 + *(short *)(param_1 + 0x5e) * 4);
    if (*(char *)(iVar5 + 3) != '\0') {
      *(short *)(param_1 + 0x60 + *(short *)(param_1 + 0x5e) * 2) = *(short *)(iVar5 + 0x10) + -1;
      *(undefined2 *)(param_1 + 0x42) = 0;
      *(undefined1 *)(param_1 + 0x5a) = 0;
      return 0;
    }
    iVar6 = (uint)*(byte *)(iVar5 + 5) + *(int *)(iVar5 + 0x38);
    uVar1 = *(undefined1 *)(iVar6 + 8);
    uVar2 = *(undefined1 *)(iVar6 + 9);
    uVar3 = *(undefined1 *)(iVar6 + 10);
    uVar4 = *(undefined1 *)(iVar6 + 0xb);
    *(undefined2 *)(param_1 + 0x60 + *(short *)(param_1 + 0x5e) * 2) = *(undefined2 *)(iVar5 + 0x10)
    ;
    iVar5 = FUN_00480a70(param_1,CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),uVar4));
  } while (iVar5 == 0);
  return iVar5;
}


/* FUN_00480c70 @ 00480c70  kind=lib  attributed-by=lib-island  size=408 */

int __cdecl FUN_00480c70(int *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined4 *puVar5;
  uint *puVar6;
  int iVar7;
  int *piVar8;
  
  piVar8 = *(int **)(*param_1 + 4);
  if (1 < *(byte *)((int)param_1 + 0x5b)) {
    if (*(byte *)((int)param_1 + 0x5b) == 3) {
      return param_1[0x15];
    }
    FUN_00466dd0(param_1[0x14]);
    param_1[0x14] = 0;
    *(undefined1 *)((int)param_1 + 0x5b) = 0;
  }
  if (*(short *)((int)param_1 + 0x5e) < 0) {
    if (param_1[6] == 0) {
      *(undefined1 *)((int)param_1 + 0x5b) = 0;
      return 0;
    }
    iVar7 = FUN_0047d000(piVar8,param_1[6],param_1 + 0x22);
    if (iVar7 != 0) {
      *(undefined1 *)((int)param_1 + 0x5b) = 0;
      return iVar7;
    }
    *(undefined2 *)((int)param_1 + 0x5e) = 0;
    if ((param_1[4] == 0) != (bool)*(char *)(param_1[0x22] + 2)) {
      iVar7 = FUN_00493af0();
      return iVar7;
    }
  }
  else {
    iVar7 = 1;
    if (0 < *(short *)((int)param_1 + 0x5e)) {
      piVar8 = param_1 + 0x23;
      do {
        if ((*piVar8 != 0) &&
           (puVar5 = *(undefined4 **)(*piVar8 + 0x44), puVar5 != (undefined4 *)0x0)) {
          puVar6 = (uint *)puVar5[4];
          FUN_004a3a80(puVar5);
          if (*(int *)(puVar6[0x2d] + 0xc) == 0) {
            FUN_00484370(puVar6);
          }
        }
        iVar7 = iVar7 + 1;
        piVar8 = piVar8 + 1;
      } while (iVar7 <= *(short *)((int)param_1 + 0x5e));
    }
    *(undefined2 *)((int)param_1 + 0x5e) = 0;
  }
  iVar7 = param_1[0x22];
  *(undefined2 *)(param_1 + 0x18) = 0;
  *(undefined2 *)((int)param_1 + 0x42) = 0;
  *(undefined2 *)((int)param_1 + 0x59) = 0;
  if ((*(short *)(iVar7 + 0x10) == 0) && (*(char *)(iVar7 + 3) == '\0')) {
    if (*(int *)(iVar7 + 0x48) == 1) {
      iVar7 = (uint)*(byte *)(iVar7 + 5) + *(int *)(iVar7 + 0x38);
      uVar1 = *(undefined1 *)(iVar7 + 8);
      uVar2 = *(undefined1 *)(iVar7 + 9);
      uVar3 = *(undefined1 *)(iVar7 + 10);
      uVar4 = *(undefined1 *)(iVar7 + 0xb);
      *(undefined1 *)((int)param_1 + 0x5b) = 1;
      iVar7 = FUN_00480a70((int)param_1,CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),uVar4));
      return iVar7;
    }
    FUN_004683f0(0xb,"database corruption at line %d of [%.10s]");
    return 0xb;
  }
  *(bool *)((int)param_1 + 0x5b) = *(short *)(iVar7 + 0x10) != 0;
  return 0;
}


/* FUN_00480e10 @ 00480e10  kind=lib  attributed-by=lib-island  size=1990 */

void __cdecl FUN_00480e10(int *param_1,int *param_2,char *param_3)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  int *piVar10;
  double dVar11;
  undefined4 *local_68;
  int *local_5c;
  int local_58;
  int local_54;
  int *local_50;
  int local_4c;
  uint *local_48;
  int *local_44;
  int local_40;
  int *local_3c;
  byte local_38 [4];
  int *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  byte local_28 [4];
  int *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  undefined8 local_10;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_18 = *(undefined8 *)param_3;
  iVar5 = *param_1;
  local_10 = *(undefined8 *)(param_3 + 8);
  local_68 = (undefined4 *)0x0;
  piVar10 = (int *)param_2[0xf];
  local_5c = param_2;
  local_40 = iVar5;
  if (piVar10[0xe] != 0) {
    FUN_004962b0(param_1,(byte *)"ORDER BY clause should come after %s not before");
    goto LAB_0048159c;
  }
  if (piVar10[0x12] != 0) {
    FUN_004962b0(param_1,(byte *)"LIMIT clause should come after %s not before");
    goto LAB_0048159c;
  }
  piVar4 = (int *)param_1[2];
  local_44 = piVar4;
  if (piVar4 == (int *)0x0) {
    piVar4 = FUN_004af150(iVar5);
    param_1[2] = (int)piVar4;
    local_44 = piVar4;
    if (piVar4 != (int *)0x0) {
      FUN_004ae760(piVar4,0x94);
    }
  }
  if ((byte)local_18 == 9) {
    FUN_004ae830(piVar4,0x2a,local_18._4_4_,*(undefined4 *)*param_2);
    if (piVar4[1] != 0) {
      *(undefined1 *)(piVar4[1] + -0x11 + piVar4[7] * 0x14) = 8;
    }
    local_18 = CONCAT71(local_18._1_7_,8);
  }
  if (*(int *)*param_2 != *(int *)*piVar10) {
    if ((*(byte *)((int)param_2 + 6) & 0x80) == 0) {
      FUN_0048b2e0((uint)*(byte *)(param_2 + 1));
      FUN_004962b0(param_1,(byte *)
                           "SELECTs to the left and right of %s do not have the same number of result columns"
                  );
      iVar5 = local_40;
    }
    else {
      FUN_004962b0(param_1,(byte *)"all VALUES must have the same number of terms");
      iVar5 = local_40;
    }
    goto LAB_0048159c;
  }
  if (param_2[0xe] != 0) {
    FUN_00481630(param_1,param_2,param_3);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  cVar1 = (char)param_2[1];
  if (cVar1 == 'p') {
LAB_004812ed:
    if ((((byte)local_18 == 1) && (param_2[0x12] == 0)) && (param_2[0x13] == 0)) {
      local_3c = local_18._4_4_;
    }
    else {
      local_3c = (int *)param_1[0x12];
      param_1[0x12] = (int)local_3c + 1;
      iVar5 = FUN_004ae830(piVar4,0x2a,local_3c,0);
      param_2[4] = iVar5;
      *(ushort *)(param_2[0x11] + 6) = *(ushort *)(param_2[0x11] + 6) | 8;
    }
    local_48 = (uint *)param_1[0x7a];
    local_28[0] = 1;
    local_28[1] = 0;
    local_20 = 0;
    local_1c = 0;
    local_24 = local_3c;
    local_4c = FUN_004a7e30(param_1,piVar10,local_28);
    iVar5 = local_40;
    if (local_4c != 0) goto LAB_0048159c;
    param_2[0xf] = 0;
    local_58 = param_2[0x12];
    iVar5 = param_2[0x13];
    local_28[0] = ((char)param_2[1] == 'r') + '\x01';
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    local_54 = param_1[0x7a];
    local_4c = FUN_004a7e30(param_1,param_2,local_28);
    FUN_00499060(local_40,(int *)param_2[0xe]);
    local_68 = (undefined4 *)param_2[0xf];
    param_2[0xf] = (int)piVar10;
    param_2[0xe] = 0;
    if ((char)param_2[1] == 'p') {
      *(double *)(param_2 + 8) = *(double *)(piVar10 + 8) + *(double *)(param_2 + 8);
    }
    FUN_00498790(local_40,(undefined4 *)param_2[0x12]);
    param_2[0x12] = local_58;
    param_2[0x13] = iVar5;
    param_2[2] = 0;
    param_2[3] = 0;
    piVar10 = local_44;
    if ((byte)local_18 != 1) {
      if ((byte)local_18 == 5) {
        piVar3 = (int *)param_2[0xf];
        piVar10 = param_2;
        while (piVar2 = piVar3, piVar2 != (int *)0x0) {
          piVar10 = piVar2;
          piVar3 = (int *)piVar2[0xf];
        }
        FUN_0047c420(param_1,(short *)0x0,(int *)*piVar10);
      }
      iVar6 = FUN_004b6b80(piVar4);
      iVar7 = FUN_004b6b80(piVar4);
      FUN_004754f0(param_1,(int)param_2,iVar6);
      FUN_004ae830(piVar4,0x48,local_3c,iVar6);
      iVar5 = piVar4[7];
      FUN_0048abe0(param_1,(int)param_2,(int *)*param_2,local_3c,*(int **)*param_2,(int *)0x0,0,
                   (char *)&local_18,iVar7,iVar6);
      piVar10 = local_44;
      FUN_004b87b0((int)local_44,iVar7);
      piVar4 = local_3c;
      FUN_004ae830(piVar10,0x5f,local_3c,iVar5);
      FUN_004b87b0((int)piVar10,iVar6);
      FUN_004ae830(piVar10,0x2d,piVar4,0);
    }
  }
  else if (cVar1 == 'q') {
    local_50 = (int *)0x0;
    piVar10[0x12] = param_2[0x12];
    piVar10[0x13] = param_2[0x13];
    local_48 = (uint *)param_1[0x7a];
    local_4c = FUN_004a7e30(param_1,piVar10,(byte *)&local_18);
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    iVar5 = local_40;
    if (local_4c != 0) goto LAB_0048159c;
    param_2[0xf] = 0;
    param_2[2] = piVar10[2];
    param_2[3] = piVar10[3];
    if (param_2[2] != 0) {
      local_50 = (int *)FUN_004ae7d0(piVar4,0x7a,param_2[2]);
    }
    local_54 = param_1[0x7a];
    local_4c = FUN_004a7e30(param_1,param_2,(byte *)&local_18);
    local_68 = (undefined4 *)param_2[0xf];
    param_2[0xf] = (int)piVar10;
    dVar11 = *(double *)(piVar10 + 8) + *(double *)(param_2 + 8);
    *(double *)(param_2 + 8) = dVar11;
    if ((((char *)piVar10[0x12] != (char *)0x0) &&
        (iVar5 = FUN_00498e90((char *)piVar10[0x12],&local_58), iVar5 != 0)) &&
       ((double)local_58 < dVar11)) {
      *(double *)(param_2 + 8) = (double)local_58;
    }
    piVar10 = local_44;
    if (local_50 != (int *)0x0) {
      FUN_004b6720((int)piVar4,(uint)local_50);
      piVar10 = local_44;
    }
  }
  else {
    if (cVar1 == 'r') goto LAB_004812ed;
    local_3c = (int *)param_1[0x12];
    local_50 = (int *)((int)local_3c + 1);
    param_1[0x12] = (int)local_3c + 2;
    iVar5 = FUN_004ae830(piVar4,0x2a,local_3c,0);
    param_2[4] = iVar5;
    *(ushort *)(param_2[0x11] + 6) = *(ushort *)(param_2[0x11] + 6) | 8;
    local_48 = (uint *)param_1[0x7a];
    local_38[0] = 1;
    local_38[1] = 0;
    local_34 = local_3c;
    local_30 = 0;
    local_2c = 0;
    local_4c = FUN_004a7e30(param_1,piVar10,local_38);
    iVar5 = local_40;
    if (local_4c != 0) goto LAB_0048159c;
    iVar5 = FUN_004ae830(piVar4,0x2a,local_50,0);
    param_2[5] = iVar5;
    iVar5 = param_2[0x12];
    local_58 = param_2[0x13];
    local_34 = local_50;
    param_2[0xf] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    local_54 = param_1[0x7a];
    local_4c = FUN_004a7e30(param_1,param_2,local_38);
    local_68 = (undefined4 *)param_2[0xf];
    param_2[0xf] = (int)piVar10;
    if (*(double *)(piVar10 + 8) < *(double *)(param_2 + 8)) {
      *(double *)(param_2 + 8) = *(double *)(piVar10 + 8);
    }
    FUN_00498790(local_40,(undefined4 *)param_2[0x12]);
    param_2[0x12] = iVar5;
    param_2[0x13] = local_58;
    if ((byte)local_18 == 5) {
      piVar3 = (int *)param_2[0xf];
      piVar10 = param_2;
      while (piVar2 = piVar3, piVar2 != (int *)0x0) {
        piVar10 = piVar2;
        piVar3 = (int *)piVar2[0xf];
      }
      FUN_0047c420(param_1,(short *)0x0,(int *)*piVar10);
    }
    iVar5 = FUN_004b6b80(piVar4);
    local_58 = iVar5;
    iVar6 = FUN_004b6b80(local_44);
    FUN_004754f0(param_1,(int)param_2,iVar5);
    piVar10 = local_44;
    FUN_004ae830(local_44,0x48,local_3c,iVar5);
    iVar5 = FUN_0049cb40((int)param_1);
    iVar7 = FUN_004ae830(piVar10,0x3f,local_3c,iVar5);
    FUN_004ae960(local_44,0x33,local_50,iVar6,iVar5,(int *)0x0);
    FUN_004a68f0((int)param_1,iVar5);
    iVar5 = local_58;
    FUN_0048abe0(param_1,(int)param_2,(int *)*param_2,local_3c,*(int **)*param_2,(int *)0x0,0,
                 (char *)&local_18,iVar6,local_58);
    piVar10 = local_44;
    FUN_004b87b0((int)local_44,iVar6);
    piVar4 = local_3c;
    FUN_004ae830(piVar10,0x5f,local_3c,iVar7);
    FUN_004b87b0((int)piVar10,iVar5);
    FUN_004ae830(piVar10,0x2d,(int)piVar4 + 1,0);
    FUN_004ae830(piVar10,0x2d,piVar4,0);
  }
  FUN_004775b0(param_1);
  iVar5 = local_40;
  if ((*(byte *)((int)param_2 + 6) & 8) != 0) {
    local_54 = *(int *)*param_2;
    local_3c = FUN_00494c20(local_40,local_54 * 5 + 0x10);
    iVar5 = local_40;
    if (local_3c != (int *)0x0) {
      local_50 = (int *)0x0;
      *(undefined1 *)(local_3c + 1) =
           *(undefined1 *)(*(int *)(*(int *)(local_40 + 0x10) + 0xc) + 0x4d);
      puVar9 = (uint *)(local_3c + 3);
      *(short *)((int)local_3c + 6) = (short)local_54;
      local_48 = puVar9;
      if (0 < local_54) {
        do {
          uVar8 = FUN_004815e0(param_1,param_2,(int)local_50);
          *puVar9 = uVar8;
          if (uVar8 == 0) {
            *puVar9 = *(uint *)(local_40 + 8);
          }
          local_50 = (int *)((int)local_50 + 1);
          puVar9 = puVar9 + 1;
          piVar10 = local_44;
        } while ((int)local_50 < local_54);
      }
      local_3c[2] = (int)puVar9;
      do {
        puVar9 = (uint *)(local_5c + 4);
        local_48 = (uint *)0x0;
        piVar4 = local_3c;
        do {
          uVar8 = *puVar9;
          if ((int)uVar8 < 0) break;
          if (uVar8 < (uint)piVar10[7]) {
            *(int *)(piVar10[1] + 8 + uVar8 * 0x14) = local_54;
            piVar4 = local_3c;
          }
          FUN_004aecc0(piVar10,uVar8,piVar4,0xfffffffa);
          local_48 = (uint *)((int)local_48 + 1);
          *puVar9 = 0xffffffff;
          puVar9 = puVar9 + 1;
        } while ((int)local_48 < 2);
        iVar5 = local_40;
        local_5c = (int *)local_5c[0xf];
      } while (local_5c != (int *)0x0);
      FUN_00494b00(local_40,local_3c);
    }
  }
LAB_0048159c:
  *(undefined4 *)(param_3 + 8) = (undefined4)local_10;
  *(undefined4 *)(param_3 + 0xc) = local_10._4_4_;
  if (local_68 != (undefined4 *)0x0) {
    FUN_00472d10(iVar5,local_68);
    FUN_00494b00(iVar5,local_68);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004815e0 @ 004815e0  kind=lib  attributed-by=lib-island  size=71 */

uint __cdecl FUN_004815e0(int *param_1,undefined4 *param_2,int param_3)

{
  uint uVar1;
  
  if (((undefined4 *)param_2[0xf] != (undefined4 *)0x0) &&
     (uVar1 = FUN_004815e0(param_1,(undefined4 *)param_2[0xf],param_3), uVar1 != 0)) {
    return uVar1;
  }
  uVar1 = 0;
  if (param_3 < *(int *)*param_2) {
    uVar1 = FUN_004984d0(param_1,*(char **)(((int *)*param_2)[2] + param_3 * 0x14));
  }
  return uVar1;
}


/* FUN_00481630 @ 00481630  kind=lib  attributed-by=lib-island  size=154 */

void __cdecl FUN_00481630(int *param_1,int *param_2,char *param_3)

{
  size_t _Size;
  char cVar1;
  undefined4 *puVar2;
  uint *puVar3;
  char *pcVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  ushort *puVar13;
  int iVar14;
  int *piVar15;
  int *piVar16;
  uint uVar17;
  uint *puVar18;
  int *piVar19;
  char *local_8c;
  uint local_88;
  int *local_84;
  char *local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int *local_6c;
  int *local_68;
  int local_64;
  int local_60;
  uint local_5c;
  int local_58;
  int local_54;
  int *local_50;
  int local_4c;
  uint local_48;
  int *local_44;
  char *local_40;
  int local_3c;
  uint *local_38;
  uint *local_34;
  int *local_30;
  int *local_2c;
  byte local_28 [4];
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  byte local_18 [4];
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  piVar15 = (int *)param_1[2];
  local_2c = param_2;
  local_80 = param_3;
  local_3c = *param_1;
  local_30 = param_1;
  local_7c = 0;
  local_44 = (int *)0x0;
  local_50 = piVar15;
  local_60 = FUN_004b6b80(piVar15);
  local_78 = FUN_004b6b80(piVar15);
  local_5c = (uint)*(byte *)(local_2c + 1);
  puVar3 = (uint *)local_2c[0xe];
  local_68 = (int *)local_2c[0xf];
  local_48 = *puVar3;
  local_34 = puVar3;
  if ((local_5c != 0x71) && (uVar17 = 1, *(char *)(local_3c + 0x38) == '\0')) {
    local_6c = (int *)(local_48 * 0x14);
    do {
      if (*(int *)*local_2c < (int)uVar17) break;
      uVar11 = 0;
      if (0 < (int)local_48) {
        puVar13 = (ushort *)(puVar3[2] + 0xe);
        do {
          piVar15 = local_50;
          if (*puVar13 == uVar17) break;
          uVar11 = uVar11 + 1;
          puVar13 = puVar13 + 10;
        } while ((int)uVar11 < (int)local_48);
      }
      if (uVar11 == local_48) {
        puVar2 = FUN_00494b90(local_3c,0x2d);
        if (puVar2 == (undefined4 *)0x0) {
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
        memset(puVar2,0,0x2d);
        *(undefined2 *)((int)puVar2 + 0x1e) = 0xffff;
        *(undefined1 *)puVar2 = 0x81;
        *(undefined1 *)(puVar2 + 0xb) = 0;
        *(ushort *)((int)puVar2 + 2) = *(ushort *)((int)puVar2 + 2) | 0x400;
        puVar2[5] = 1;
        puVar2[1] = uVar17;
        puVar3 = FUN_00498f00(local_30,local_34,puVar2);
        local_34 = puVar3;
        if (puVar3 != (uint *)0x0) {
          local_48 = local_48 + 1;
          *(short *)(puVar3[2] + 0xe + (int)local_6c) = (short)uVar17;
          local_6c = (int *)((int)local_6c + 0x14);
        }
      }
      uVar17 = uVar17 + 1;
    } while (*(char *)(local_3c + 0x38) == '\0');
  }
  uVar17 = local_48;
  local_84 = FUN_00494b90(local_3c,local_48 * 4);
  if (local_84 == (int *)0x0) {
    local_6c = (int *)0x0;
  }
  else {
    iVar12 = 0;
    if (0 < (int)uVar17) {
      puVar13 = (ushort *)(puVar3[2] + 0xe);
      do {
        local_84[iVar12] = *puVar13 - 1;
        iVar12 = iVar12 + 1;
        puVar13 = puVar13 + 10;
        piVar15 = local_50;
      } while (iVar12 < (int)uVar17);
    }
    local_6c = FUN_00494b90(local_3c,uVar17 * 5 + 0x10);
    if (local_6c != (int *)0x0) {
      *(short *)((int)local_6c + 6) = (short)uVar17;
      local_6c[2] = (int)(local_6c + uVar17 + 3);
      *(undefined1 *)(local_6c + 1) =
           *(undefined1 *)(*(int *)(*(int *)(local_3c + 0x10) + 0xc) + 0x4d);
      if (0 < (int)uVar17) {
        puVar18 = (uint *)(local_6c + 3);
        local_4c = 0;
        iVar12 = 0;
        do {
          local_40 = *(char **)(local_4c + puVar3[2]);
          local_38 = puVar18;
          if ((*(ushort *)(local_40 + 2) & 0x100) == 0) {
            iVar14 = local_84[iVar12];
            if ((undefined4 *)local_2c[0xf] == (undefined4 *)0x0) {
              puVar2 = (undefined4 *)0x0;
LAB_0048189e:
              piVar15 = local_30;
              if (iVar14 < *(int *)*local_2c) {
                puVar2 = (undefined4 *)
                         FUN_004984d0(local_30,*(char **)(((int *)*local_2c)[2] + iVar14 * 0x14));
              }
            }
            else {
              puVar2 = (undefined4 *)FUN_004815e0(local_30,(undefined4 *)local_2c[0xf],iVar14);
              piVar15 = local_30;
              if (puVar2 == (undefined4 *)0x0) goto LAB_0048189e;
            }
            if (puVar2 == (undefined4 *)0x0) {
              puVar2 = *(undefined4 **)(local_3c + 8);
            }
            local_8c = (char *)*puVar2;
            if (local_8c == (char *)0x0) {
              local_88 = 0;
            }
            else {
              cVar1 = *local_8c;
              pcVar4 = local_8c;
              while (cVar1 != '\0') {
                pcVar4 = pcVar4 + 1;
                cVar1 = *pcVar4;
              }
              local_88 = (int)pcVar4 - (int)local_8c & 0x3fffffff;
            }
            pcVar4 = local_40;
            if ((local_88 != 0) &&
               (pcVar5 = (char *)FUN_00496510(*piVar15,0x5c,&local_8c,1), pcVar4 = local_40,
               pcVar5 != (char *)0x0)) {
              *(char **)(pcVar5 + 8) = local_40;
              *(ushort *)(pcVar5 + 2) = *(ushort *)(pcVar5 + 2) | 0x100;
              pcVar4 = pcVar5;
            }
            *(char **)(local_4c + local_34[2]) = pcVar4;
          }
          else {
            puVar2 = (undefined4 *)FUN_004984d0(local_30,local_40);
            local_38 = puVar18;
          }
          *local_38 = (uint)puVar2;
          iVar14 = iVar12 + 1;
          *(undefined1 *)(iVar12 + local_6c[2]) = *(undefined1 *)(local_34[2] + 0xc + local_4c);
          puVar18 = local_38 + 1;
          local_4c = local_4c + 0x14;
          piVar15 = local_50;
          iVar12 = iVar14;
          puVar3 = local_34;
          local_38 = puVar18;
        } while (iVar14 < (int)local_48);
      }
    }
  }
  piVar19 = local_2c;
  piVar16 = local_30;
  local_2c[0xe] = (int)puVar3;
  piVar6 = FUN_00499140(*local_30,(int *)puVar3,0);
  local_68[0xe] = (int)piVar6;
  if (local_5c == 0x71) {
    local_64 = 0;
  }
  else {
    iVar14 = *(int *)*piVar19;
    local_64 = piVar16[0x10];
    iVar12 = iVar14 + 1;
    if (piVar16[0xf] < iVar12) {
      local_64 = piVar16[0x13] + 1;
      piVar16[0x13] = piVar16[0x13] + iVar12;
    }
    else {
      piVar16[0x10] = local_64 + iVar12;
      piVar16[0xf] = piVar16[0xf] - iVar12;
    }
    local_38 = (uint *)piVar15[7];
    iVar12 = piVar15[8];
    local_74 = iVar14;
    if ((int)local_38 < iVar12) {
LAB_00481a28:
      iVar12 = piVar15[1];
      piVar15[7] = piVar15[7] + 1;
      *(undefined2 *)(iVar12 + (int)local_38 * 0x14) = 7;
      *(undefined1 *)(iVar12 + 3 + (int)local_38 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 4 + (int)local_38 * 0x14) = 0;
      *(int *)(iVar12 + 8 + (int)local_38 * 0x14) = local_64;
      *(undefined4 *)(iVar12 + 0xc + (int)local_38 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 0x10 + (int)local_38 * 0x14) = 0;
    }
    else {
      if (iVar12 == 0) {
        iVar12 = 0x33;
      }
      else {
        iVar12 = iVar12 * 2;
      }
      puVar2 = FUN_00494cf0(*piVar15,(undefined4 *)piVar15[1],iVar12 * 0x14);
      if (puVar2 != (undefined4 *)0x0) {
        iVar12 = *piVar15;
        if (((iVar12 == 0) || (puVar2 < *(undefined4 **)(iVar12 + 0x104))) ||
           (*(undefined4 **)(iVar12 + 0x108) <= puVar2)) {
          uVar17 = (*DAT_00582af0._4_4_)(puVar2);
        }
        else {
          uVar17 = (uint)*(ushort *)(iVar12 + 0xe8);
        }
        piVar15[8] = uVar17 / 0x14;
        piVar15[1] = (int)puVar2;
        goto LAB_00481a28;
      }
    }
    _Size = iVar14 * 5 + 0x10;
    local_44 = FUN_00494b90(local_3c,_Size);
    piVar16 = local_30;
    piVar19 = local_2c;
    if ((local_44 != (int *)0x0) &&
       (memset(local_44,0,_Size), iVar12 = local_74, piVar16 = local_30, piVar19 = local_2c,
       local_44 != (int *)0x0)) {
      *(short *)((int)local_44 + 6) = (short)iVar14;
      local_44[2] = (int)(local_44 + iVar14 + 3);
      *(undefined1 *)(local_44 + 1) =
           *(undefined1 *)(*(int *)(*(int *)(local_3c + 0x10) + 0xc) + 0x4d);
      if (0 < iVar14) {
        local_38 = (uint *)(local_44 + 3);
        iVar7 = 0;
        iVar14 = 0;
        do {
          if ((undefined4 *)local_2c[0xf] == (undefined4 *)0x0) {
            uVar17 = 0;
LAB_00481adf:
            if (iVar14 < *(int *)*local_2c) {
              uVar17 = FUN_004984d0(local_30,*(char **)(((int *)*local_2c)[2] + iVar7));
            }
          }
          else {
            uVar17 = FUN_004815e0(local_30,(undefined4 *)local_2c[0xf],iVar14);
            if (uVar17 == 0) goto LAB_00481adf;
          }
          iVar10 = iVar14 + 1;
          *local_38 = uVar17;
          local_38 = local_38 + 1;
          iVar7 = iVar7 + 0x14;
          *(undefined1 *)(iVar14 + local_44[2]) = 0;
          piVar15 = local_50;
          iVar14 = iVar10;
          piVar16 = local_30;
          piVar19 = local_2c;
        } while (iVar10 < iVar12);
      }
    }
  }
  piVar19[0xf] = 0;
  FUN_004a6ac0(piVar16,piVar19,(int *)piVar19[0xe],"ORDER");
  if (local_68[0xf] == 0) {
    FUN_004a6ac0(piVar16,local_68,(int *)local_68[0xe],"ORDER");
  }
  FUN_004754f0(piVar16,(int)piVar19,local_60);
  if ((piVar19[2] == 0) || (local_5c != 0x71)) {
    local_34 = (uint *)0x0;
    pcVar4 = (char *)0x0;
  }
  else {
    local_40 = (char *)(piVar16[0x13] + 1);
    local_34 = (uint *)(piVar16[0x13] + 2);
    piVar16[0x13] = (int)local_34;
    if (piVar19[3] == 0) {
      local_38 = (uint *)piVar19[2];
    }
    else {
      local_38 = (uint *)(piVar19[3] + 1);
    }
    iVar12 = piVar15[7];
    iVar14 = piVar15[8];
    if (iVar12 < iVar14) {
LAB_00481c04:
      iVar14 = piVar15[1];
      piVar15[7] = piVar15[7] + 1;
      *(uint **)(iVar14 + 4 + iVar12 * 0x14) = local_38;
      *(undefined2 *)(iVar14 + iVar12 * 0x14) = 0xe;
      *(undefined1 *)(iVar14 + 3 + iVar12 * 0x14) = 0;
      *(char **)(iVar14 + 8 + iVar12 * 0x14) = local_40;
      *(undefined4 *)(iVar14 + 0xc + iVar12 * 0x14) = 0;
      *(undefined4 *)(iVar14 + 0x10 + iVar12 * 0x14) = 0;
    }
    else {
      if (iVar14 == 0) {
        iVar14 = 0x33;
      }
      else {
        iVar14 = iVar14 * 2;
      }
      puVar2 = FUN_00494cf0(*piVar15,(undefined4 *)piVar15[1],iVar14 * 0x14);
      if (puVar2 != (undefined4 *)0x0) {
        iVar14 = *piVar15;
        if (((iVar14 == 0) || (puVar2 < *(undefined4 **)(iVar14 + 0x104))) ||
           (*(undefined4 **)(iVar14 + 0x108) <= puVar2)) {
          uVar17 = (*DAT_00582af0._4_4_)(puVar2);
        }
        else {
          uVar17 = (uint)*(ushort *)(iVar14 + 0xe8);
        }
        piVar15[8] = uVar17 / 0x14;
        piVar15[1] = (int)puVar2;
        goto LAB_00481c04;
      }
    }
    iVar12 = piVar15[7];
    iVar14 = piVar15[8];
    if (iVar14 <= iVar12) {
      if (iVar14 == 0) {
        iVar14 = 0x33;
      }
      else {
        iVar14 = iVar14 * 2;
      }
      puVar2 = FUN_00494cf0(*piVar15,(undefined4 *)piVar15[1],iVar14 * 0x14);
      piVar16 = local_30;
      pcVar4 = local_40;
      if (puVar2 == (undefined4 *)0x0) goto LAB_00481ceb;
      iVar14 = *piVar15;
      if (((iVar14 == 0) || (puVar2 < *(undefined4 **)(iVar14 + 0x104))) ||
         (*(undefined4 **)(iVar14 + 0x108) <= puVar2)) {
        uVar17 = (*DAT_00582af0._4_4_)(puVar2);
      }
      else {
        uVar17 = (uint)*(ushort *)(iVar14 + 0xe8);
      }
      piVar15[8] = uVar17 / 0x14;
      piVar15[1] = (int)puVar2;
    }
    iVar14 = piVar15[1];
    piVar15[7] = piVar15[7] + 1;
    *(undefined2 *)(iVar14 + iVar12 * 0x14) = 0xe;
    *(undefined1 *)(iVar14 + 3 + iVar12 * 0x14) = 0;
    *(char **)(iVar14 + 4 + iVar12 * 0x14) = local_40;
    *(uint **)(iVar14 + 8 + iVar12 * 0x14) = local_34;
    *(undefined4 *)(iVar14 + 0xc + iVar12 * 0x14) = 0;
    *(undefined4 *)(iVar14 + 0x10 + iVar12 * 0x14) = 0;
    piVar16 = local_30;
    pcVar4 = local_40;
  }
LAB_00481ceb:
  FUN_00498790(local_3c,(undefined4 *)local_2c[0x12]);
  local_2c[0x12] = 0;
  FUN_00498790(local_3c,(undefined4 *)local_2c[0x13]);
  local_18[0] = 10;
  local_18[1] = 0;
  local_2c[0x13] = 0;
  piVar16[0x13] = piVar16[0x13] + 1;
  local_50 = (int *)piVar16[0x13];
  local_70 = (int)local_50 + 1;
  local_40 = (char *)((int)local_50 + 2);
  local_10 = 0;
  local_58 = (int)local_50 + 3;
  local_74 = (int)local_50 + 5;
  piVar16[0x13] = local_74;
  local_c = 0;
  local_28[0] = 10;
  local_28[1] = 0;
  local_20 = 0;
  local_1c = 0;
  local_38 = (uint *)piVar15[7];
  iVar12 = piVar15[8];
  local_24 = (int)local_40;
  local_14 = (int)local_50;
  if ((int)local_38 < iVar12) {
LAB_00481de3:
    iVar12 = piVar15[1];
    piVar15[7] = piVar15[7] + 1;
    *(undefined2 *)(iVar12 + (int)local_38 * 0x14) = 1;
    *(undefined1 *)(iVar12 + 3 + (int)local_38 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 4 + (int)local_38 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 8 + (int)local_38 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 0xc + (int)local_38 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 0x10 + (int)local_38 * 0x14) = 0;
  }
  else {
    if (iVar12 == 0) {
      iVar12 = 0x33;
    }
    else {
      iVar12 = iVar12 * 2;
    }
    puVar2 = FUN_00494cf0(*piVar15,(undefined4 *)piVar15[1],iVar12 * 0x14);
    if (puVar2 != (undefined4 *)0x0) {
      iVar12 = *piVar15;
      if (((iVar12 == 0) || (puVar2 < *(undefined4 **)(iVar12 + 0x104))) ||
         (*(undefined4 **)(iVar12 + 0x108) <= puVar2)) {
        uVar17 = (*DAT_00582af0._4_4_)(puVar2);
      }
      else {
        uVar17 = (uint)*(ushort *)(iVar12 + 0xe8);
      }
      piVar15[1] = (int)puVar2;
      piVar15[8] = uVar17 / 0x14;
      goto LAB_00481de3;
    }
    local_38 = (uint *)0x1;
  }
  iVar12 = piVar15[7];
  local_68[2] = (int)pcVar4;
  local_88 = local_30[0x7a];
  FUN_004a7e30(local_30,local_68,local_18);
  iVar14 = piVar15[7];
  iVar7 = piVar15[8];
  if (iVar14 < iVar7) {
LAB_00481eb8:
    iVar7 = piVar15[1];
    piVar15[7] = piVar15[7] + 1;
    *(undefined2 *)(iVar7 + iVar14 * 0x14) = 7;
    *(undefined1 *)(iVar7 + 3 + iVar14 * 0x14) = 0;
    *(undefined4 *)(iVar7 + 4 + iVar14 * 0x14) = 1;
    *(int *)(iVar7 + 8 + iVar14 * 0x14) = local_70;
    *(undefined4 *)(iVar7 + 0xc + iVar14 * 0x14) = 0;
    *(undefined4 *)(iVar7 + 0x10 + iVar14 * 0x14) = 0;
  }
  else {
    if (iVar7 == 0) {
      iVar7 = 0x33;
    }
    else {
      iVar7 = iVar7 * 2;
    }
    puVar2 = FUN_00494cf0(*piVar15,(undefined4 *)piVar15[1],iVar7 * 0x14);
    if (puVar2 != (undefined4 *)0x0) {
      iVar7 = *piVar15;
      if (((iVar7 == 0) || (puVar2 < *(undefined4 **)(iVar7 + 0x104))) ||
         (*(undefined4 **)(iVar7 + 0x108) <= puVar2)) {
        uVar17 = (*DAT_00582af0._4_4_)(puVar2);
      }
      else {
        uVar17 = (uint)*(ushort *)(iVar7 + 0xe8);
      }
      piVar15[8] = uVar17 / 0x14;
      piVar15[1] = (int)puVar2;
      goto LAB_00481eb8;
    }
  }
  iVar14 = piVar15[7];
  iVar7 = piVar15[8];
  if (iVar14 < iVar7) {
LAB_00481f57:
    iVar7 = piVar15[1];
    piVar15[7] = piVar15[7] + 1;
    *(undefined2 *)(iVar7 + iVar14 * 0x14) = 4;
    *(undefined1 *)(iVar7 + 3 + iVar14 * 0x14) = 0;
    *(int **)(iVar7 + 4 + iVar14 * 0x14) = local_50;
    *(undefined4 *)(iVar7 + 8 + iVar14 * 0x14) = 0;
    *(undefined4 *)(iVar7 + 0xc + iVar14 * 0x14) = 0;
    *(undefined4 *)(iVar7 + 0x10 + iVar14 * 0x14) = 0;
  }
  else {
    if (iVar7 == 0) {
      iVar7 = 0x33;
    }
    else {
      iVar7 = iVar7 * 2;
    }
    puVar2 = FUN_00494cf0(*piVar15,(undefined4 *)piVar15[1],iVar7 * 0x14);
    if (puVar2 != (undefined4 *)0x0) {
      iVar7 = *piVar15;
      if (((iVar7 == 0) || (puVar2 < *(undefined4 **)(iVar7 + 0x104))) ||
         (*(undefined4 **)(iVar7 + 0x108) <= puVar2)) {
        uVar17 = (*DAT_00582af0._4_4_)(puVar2);
      }
      else {
        uVar17 = (uint)*(ushort *)(iVar7 + 0xe8);
      }
      piVar15[8] = uVar17 / 0x14;
      piVar15[1] = (int)puVar2;
      goto LAB_00481f57;
    }
  }
  iVar14 = piVar15[7];
  iVar7 = local_2c[2];
  iVar10 = local_2c[3];
  local_2c[2] = (int)local_34;
  local_2c[3] = 0;
  FUN_004a7e30(local_30,local_2c,local_28);
  local_2c[2] = iVar7;
  local_2c[3] = iVar10;
  iVar7 = piVar15[7];
  iVar10 = piVar15[8];
  if (iVar7 < iVar10) {
LAB_0048203b:
    iVar10 = piVar15[1];
    piVar15[7] = piVar15[7] + 1;
    *(undefined2 *)(iVar10 + iVar7 * 0x14) = 7;
    *(undefined1 *)(iVar10 + 3 + iVar7 * 0x14) = 0;
    *(undefined4 *)(iVar10 + 4 + iVar7 * 0x14) = 1;
    *(int *)(iVar10 + 8 + iVar7 * 0x14) = local_58;
    *(undefined4 *)(iVar10 + 0xc + iVar7 * 0x14) = 0;
    *(undefined4 *)(iVar10 + 0x10 + iVar7 * 0x14) = 0;
  }
  else {
    if (iVar10 == 0) {
      iVar10 = 0x33;
    }
    else {
      iVar10 = iVar10 * 2;
    }
    puVar2 = FUN_00494cf0(*piVar15,(undefined4 *)piVar15[1],iVar10 * 0x14);
    if (puVar2 != (undefined4 *)0x0) {
      iVar10 = *piVar15;
      if (((iVar10 == 0) || (puVar2 < *(undefined4 **)(iVar10 + 0x104))) ||
         (*(undefined4 **)(iVar10 + 0x108) <= puVar2)) {
        uVar17 = (*DAT_00582af0._4_4_)(puVar2);
      }
      else {
        uVar17 = (uint)*(ushort *)(iVar10 + 0xe8);
      }
      piVar15[8] = uVar17 / 0x14;
      piVar15[1] = (int)puVar2;
      goto LAB_0048203b;
    }
  }
  iVar7 = piVar15[7];
  iVar10 = piVar15[8];
  if (iVar7 < iVar10) {
LAB_004820da:
    iVar10 = piVar15[1];
    piVar15[7] = piVar15[7] + 1;
    *(undefined2 *)(iVar10 + iVar7 * 0x14) = 4;
    *(undefined1 *)(iVar10 + 3 + iVar7 * 0x14) = 0;
    *(char **)(iVar10 + 4 + iVar7 * 0x14) = local_40;
    *(undefined4 *)(iVar10 + 8 + iVar7 * 0x14) = 0;
    *(undefined4 *)(iVar10 + 0xc + iVar7 * 0x14) = 0;
    *(undefined4 *)(iVar10 + 0x10 + iVar7 * 0x14) = 0;
  }
  else {
    if (iVar10 == 0) {
      iVar10 = 0x33;
    }
    else {
      iVar10 = iVar10 * 2;
    }
    puVar2 = FUN_00494cf0(*piVar15,(undefined4 *)piVar15[1],iVar10 * 0x14);
    if (puVar2 != (undefined4 *)0x0) {
      iVar10 = *piVar15;
      if (((iVar10 == 0) || (puVar2 < *(undefined4 **)(iVar10 + 0x104))) ||
         (*(undefined4 **)(iVar10 + 0x108) <= puVar2)) {
        uVar17 = (*DAT_00582af0._4_4_)(puVar2);
      }
      else {
        uVar17 = (uint)*(ushort *)(iVar10 + 0xe8);
      }
      piVar15[8] = uVar17 / 0x14;
      piVar15[1] = (int)puVar2;
      goto LAB_004820da;
    }
  }
  piVar19 = local_30;
  piVar16 = local_44;
  local_34 = (uint *)FUN_0047c700(local_30,local_2c,(int)local_18,local_80,local_58 + 1,local_64,
                                  local_44,0xfffffff0,local_60);
  if ((local_5c == 0x71) || (local_5c == 0x70)) {
    local_7c = FUN_0047c700(piVar19,local_2c,(int)local_28,local_80,local_74,local_64,piVar16,
                            0xffffffef,local_60);
  }
  if ((local_5c == 0x72) || (local_5c == 0x73)) {
    iVar7 = piVar15[7];
    iVar10 = piVar15[8];
    local_54 = iVar7;
    if (iVar7 < iVar10) {
LAB_00482495:
      iVar10 = piVar15[1];
      piVar15[7] = piVar15[7] + 1;
      *(undefined2 *)(iVar10 + iVar7 * 0x14) = 1;
      *(undefined1 *)(iVar10 + 3 + iVar7 * 0x14) = 0;
      *(undefined4 *)(iVar10 + 4 + iVar7 * 0x14) = 0;
      *(int *)(iVar10 + 8 + iVar7 * 0x14) = local_60;
      *(undefined4 *)(iVar10 + 0xc + iVar7 * 0x14) = 0;
      *(undefined4 *)(iVar10 + 0x10 + iVar7 * 0x14) = 0;
    }
    else {
      if (iVar10 == 0) {
        iVar10 = 0x33;
      }
      else {
        iVar10 = iVar10 * 2;
      }
      puVar2 = FUN_00494cf0(*piVar15,(undefined4 *)piVar15[1],iVar10 * 0x14);
      if (puVar2 != (undefined4 *)0x0) {
        iVar10 = *piVar15;
        if (((iVar10 == 0) || (puVar2 < *(undefined4 **)(iVar10 + 0x104))) ||
           (*(undefined4 **)(iVar10 + 0x108) <= puVar2)) {
          uVar17 = (*DAT_00582af0._4_4_)(puVar2);
        }
        else {
          uVar17 = (uint)*(ushort *)(iVar10 + 0xe8);
        }
        piVar15[8] = uVar17 / 0x14;
        piVar15[1] = (int)puVar2;
        goto LAB_00482495;
      }
      local_54 = 1;
    }
  }
  else {
    local_54 = piVar15[7];
    iVar7 = piVar15[8];
    if (local_54 < iVar7) {
LAB_004821f1:
      iVar7 = piVar15[1];
      piVar15[7] = piVar15[7] + 1;
      *(int *)(iVar7 + 4 + local_54 * 0x14) = local_58;
      *(undefined2 *)(iVar7 + local_54 * 0x14) = 0x1b;
      *(undefined1 *)(iVar7 + 3 + local_54 * 0x14) = 0;
      *(int *)(iVar7 + 8 + local_54 * 0x14) = local_60;
      *(undefined4 *)(iVar7 + 0xc + local_54 * 0x14) = 0;
      *(undefined4 *)(iVar7 + 0x10 + local_54 * 0x14) = 0;
    }
    else {
      if (iVar7 == 0) {
        iVar7 = 0x33;
      }
      else {
        iVar7 = iVar7 * 2;
      }
      puVar2 = FUN_00494cf0(*piVar15,(undefined4 *)piVar15[1],iVar7 * 0x14);
      if (puVar2 != (undefined4 *)0x0) {
        iVar7 = *piVar15;
        if (((iVar7 == 0) || (puVar2 < *(undefined4 **)(iVar7 + 0x104))) ||
           (*(undefined4 **)(iVar7 + 0x108) <= puVar2)) {
          uVar17 = (*DAT_00582af0._4_4_)(puVar2);
        }
        else {
          uVar17 = (uint)*(ushort *)(iVar7 + 0xe8);
        }
        piVar15[8] = uVar17 / 0x14;
        piVar15[1] = (int)puVar2;
        goto LAB_004821f1;
      }
      local_54 = 1;
    }
    iVar7 = piVar15[7];
    iVar10 = piVar15[8];
    if (iVar7 < iVar10) {
LAB_00482298:
      iVar10 = piVar15[1];
      piVar15[7] = piVar15[7] + 1;
      *(int *)(iVar10 + 4 + iVar7 * 0x14) = local_74;
      *(undefined2 *)(iVar10 + iVar7 * 0x14) = 2;
      *(undefined1 *)(iVar10 + 3 + iVar7 * 0x14) = 0;
      *(int *)(iVar10 + 8 + iVar7 * 0x14) = local_7c;
      *(undefined4 *)(iVar10 + 0xc + iVar7 * 0x14) = 0;
      *(undefined4 *)(iVar10 + 0x10 + iVar7 * 0x14) = 0;
    }
    else {
      if (iVar10 == 0) {
        iVar10 = 0x33;
      }
      else {
        iVar10 = iVar10 * 2;
      }
      puVar2 = FUN_00494cf0(*piVar15,(undefined4 *)piVar15[1],iVar10 * 0x14);
      if (puVar2 != (undefined4 *)0x0) {
        iVar10 = *piVar15;
        if (((iVar10 == 0) || (puVar2 < *(undefined4 **)(iVar10 + 0x104))) ||
           (*(undefined4 **)(iVar10 + 0x108) <= puVar2)) {
          uVar17 = (*DAT_00582af0._4_4_)(puVar2);
        }
        else {
          uVar17 = (uint)*(ushort *)(iVar10 + 0xe8);
        }
        piVar15[8] = uVar17 / 0x14;
        piVar15[1] = (int)puVar2;
        goto LAB_00482298;
      }
    }
    iVar7 = piVar15[7];
    iVar10 = piVar15[8];
    if (iVar7 < iVar10) {
LAB_00482336:
      iVar10 = piVar15[1];
      piVar15[7] = piVar15[7] + 1;
      *(undefined2 *)(iVar10 + iVar7 * 0x14) = 4;
      *(undefined1 *)(iVar10 + 3 + iVar7 * 0x14) = 0;
      *(char **)(iVar10 + 4 + iVar7 * 0x14) = local_40;
      *(undefined4 *)(iVar10 + 8 + iVar7 * 0x14) = 0;
      *(undefined4 *)(iVar10 + 0xc + iVar7 * 0x14) = 0;
      *(undefined4 *)(iVar10 + 0x10 + iVar7 * 0x14) = 0;
    }
    else {
      if (iVar10 == 0) {
        iVar10 = 0x33;
      }
      else {
        iVar10 = iVar10 * 2;
      }
      puVar2 = FUN_00494cf0(*piVar15,(undefined4 *)piVar15[1],iVar10 * 0x14);
      if (puVar2 != (undefined4 *)0x0) {
        iVar10 = *piVar15;
        if (((iVar10 == 0) || (puVar2 < *(undefined4 **)(iVar10 + 0x104))) ||
           (*(undefined4 **)(iVar10 + 0x108) <= puVar2)) {
          uVar17 = (*DAT_00582af0._4_4_)(puVar2);
        }
        else {
          uVar17 = (uint)*(ushort *)(iVar10 + 0xe8);
        }
        piVar15[8] = uVar17 / 0x14;
        piVar15[1] = (int)puVar2;
        goto LAB_00482336;
      }
    }
    iVar7 = piVar15[7];
    iVar10 = piVar15[8];
    if (iVar7 < iVar10) {
LAB_004823d5:
      iVar10 = piVar15[1];
      piVar15[7] = piVar15[7] + 1;
      *(undefined2 *)(iVar10 + iVar7 * 0x14) = 1;
      *(undefined1 *)(iVar10 + 3 + iVar7 * 0x14) = 0;
      *(undefined4 *)(iVar10 + 4 + iVar7 * 0x14) = 0;
      *(int *)(iVar10 + 8 + iVar7 * 0x14) = local_54;
      *(undefined4 *)(iVar10 + 0xc + iVar7 * 0x14) = 0;
      *(undefined4 *)(iVar10 + 0x10 + iVar7 * 0x14) = 0;
    }
    else {
      if (iVar10 == 0) {
        iVar10 = 0x33;
      }
      else {
        iVar10 = iVar10 * 2;
      }
      puVar2 = FUN_00494cf0(*piVar15,(undefined4 *)piVar15[1],iVar10 * 0x14);
      if (puVar2 != (undefined4 *)0x0) {
        iVar10 = *piVar15;
        if (((iVar10 == 0) || (puVar2 < *(undefined4 **)(iVar10 + 0x104))) ||
           (*(undefined4 **)(iVar10 + 0x108) <= puVar2)) {
          uVar17 = (*DAT_00582af0._4_4_)(puVar2);
        }
        else {
          uVar17 = (uint)*(ushort *)(iVar10 + 0xe8);
        }
        piVar15[8] = uVar17 / 0x14;
        piVar15[1] = (int)puVar2;
        goto LAB_004823d5;
      }
    }
    *(double *)(local_2c + 8) = *(double *)(local_68 + 8) + *(double *)(local_2c + 8);
  }
  if (local_5c == 0x73) {
    local_4c = local_54;
    if (*(double *)(local_68 + 8) < *(double *)(local_2c + 8)) {
      *(double *)(local_2c + 8) = *(double *)(local_68 + 8);
    }
  }
  else {
    local_4c = piVar15[7];
    iVar7 = piVar15[8];
    if (local_4c < iVar7) {
LAB_00482577:
      iVar7 = piVar15[1];
      piVar15[7] = piVar15[7] + 1;
      *(int *)(iVar7 + 4 + local_4c * 0x14) = local_70;
      *(undefined2 *)(iVar7 + local_4c * 0x14) = 0x1b;
      *(undefined1 *)(iVar7 + 3 + local_4c * 0x14) = 0;
      *(int *)(iVar7 + 8 + local_4c * 0x14) = local_60;
      *(undefined4 *)(iVar7 + 0xc + local_4c * 0x14) = 0;
      *(undefined4 *)(iVar7 + 0x10 + local_4c * 0x14) = 0;
    }
    else {
      if (iVar7 == 0) {
        iVar7 = 0x33;
      }
      else {
        iVar7 = iVar7 * 2;
      }
      puVar2 = FUN_00494cf0(*piVar15,(undefined4 *)piVar15[1],iVar7 * 0x14);
      if (puVar2 != (undefined4 *)0x0) {
        iVar7 = *piVar15;
        if (((iVar7 == 0) || (puVar2 < *(undefined4 **)(iVar7 + 0x104))) ||
           (*(undefined4 **)(iVar7 + 0x108) <= puVar2)) {
          uVar17 = (*DAT_00582af0._4_4_)(puVar2);
        }
        else {
          uVar17 = (uint)*(ushort *)(iVar7 + 0xe8);
        }
        piVar15[8] = uVar17 / 0x14;
        piVar15[1] = (int)puVar2;
        goto LAB_00482577;
      }
      local_4c = 1;
    }
    iVar7 = piVar15[7];
    iVar10 = piVar15[8];
    if (iVar7 < iVar10) {
LAB_0048261e:
      piVar15[7] = piVar15[7] + 1;
      iVar10 = piVar15[1];
      *(int *)(iVar10 + 4 + iVar7 * 0x14) = local_58 + 1;
      *(undefined2 *)(iVar10 + iVar7 * 0x14) = 2;
      *(undefined1 *)(iVar10 + 3 + iVar7 * 0x14) = 0;
      *(uint **)(iVar10 + 8 + iVar7 * 0x14) = local_34;
      *(undefined4 *)(iVar10 + 0xc + iVar7 * 0x14) = 0;
      *(undefined4 *)(iVar10 + 0x10 + iVar7 * 0x14) = 0;
    }
    else {
      if (iVar10 == 0) {
        iVar10 = 0x33;
      }
      else {
        iVar10 = iVar10 * 2;
      }
      puVar2 = FUN_00494cf0(*piVar15,(undefined4 *)piVar15[1],iVar10 * 0x14);
      if (puVar2 != (undefined4 *)0x0) {
        iVar10 = *piVar15;
        if (((iVar10 == 0) || (puVar2 < *(undefined4 **)(iVar10 + 0x104))) ||
           (*(undefined4 **)(iVar10 + 0x108) <= puVar2)) {
          uVar17 = (*DAT_00582af0._4_4_)(puVar2);
        }
        else {
          uVar17 = (uint)*(ushort *)(iVar10 + 0xe8);
        }
        piVar15[8] = uVar17 / 0x14;
        piVar15[1] = (int)puVar2;
        goto LAB_0048261e;
      }
    }
    iVar7 = piVar15[7];
    iVar10 = piVar15[8];
    if (iVar7 < iVar10) {
LAB_004826bd:
      iVar10 = piVar15[1];
      piVar15[7] = piVar15[7] + 1;
      *(undefined2 *)(iVar10 + iVar7 * 0x14) = 4;
      *(undefined1 *)(iVar10 + 3 + iVar7 * 0x14) = 0;
      *(int **)(iVar10 + 4 + iVar7 * 0x14) = local_50;
      *(undefined4 *)(iVar10 + 8 + iVar7 * 0x14) = 0;
      *(undefined4 *)(iVar10 + 0xc + iVar7 * 0x14) = 0;
      *(undefined4 *)(iVar10 + 0x10 + iVar7 * 0x14) = 0;
    }
    else {
      if (iVar10 == 0) {
        iVar10 = 0x33;
      }
      else {
        iVar10 = iVar10 * 2;
      }
      puVar2 = FUN_00494cf0(*piVar15,(undefined4 *)piVar15[1],iVar10 * 0x14);
      if (puVar2 != (undefined4 *)0x0) {
        iVar10 = *piVar15;
        if (((iVar10 == 0) || (puVar2 < *(undefined4 **)(iVar10 + 0x104))) ||
           (*(undefined4 **)(iVar10 + 0x108) <= puVar2)) {
          uVar17 = (*DAT_00582af0._4_4_)(puVar2);
        }
        else {
          uVar17 = (uint)*(ushort *)(iVar10 + 0xe8);
        }
        piVar15[8] = uVar17 / 0x14;
        piVar15[1] = (int)puVar2;
        goto LAB_004826bd;
      }
    }
    iVar7 = piVar15[7];
    iVar10 = piVar15[8];
    if (iVar10 <= iVar7) {
      if (iVar10 == 0) {
        iVar10 = 0x33;
      }
      else {
        iVar10 = iVar10 * 2;
      }
      puVar2 = FUN_00494cf0(*piVar15,(undefined4 *)piVar15[1],iVar10 * 0x14);
      if (puVar2 == (undefined4 *)0x0) goto LAB_0048278f;
      iVar10 = *piVar15;
      if (((iVar10 == 0) || (puVar2 < *(undefined4 **)(iVar10 + 0x104))) ||
         (*(undefined4 **)(iVar10 + 0x108) <= puVar2)) {
        uVar17 = (*DAT_00582af0._4_4_)(puVar2);
      }
      else {
        uVar17 = (uint)*(ushort *)(iVar10 + 0xe8);
      }
      piVar15[8] = uVar17 / 0x14;
      piVar15[1] = (int)puVar2;
    }
    iVar10 = piVar15[1];
    piVar15[7] = piVar15[7] + 1;
    *(undefined2 *)(iVar10 + iVar7 * 0x14) = 1;
    *(undefined1 *)(iVar10 + 3 + iVar7 * 0x14) = 0;
    *(undefined4 *)(iVar10 + 4 + iVar7 * 0x14) = 0;
    *(int *)(iVar10 + 8 + iVar7 * 0x14) = local_4c;
    *(undefined4 *)(iVar10 + 0xc + iVar7 * 0x14) = 0;
    *(undefined4 *)(iVar10 + 0x10 + iVar7 * 0x14) = 0;
  }
LAB_0048278f:
  local_44 = (int *)piVar15[7];
  iVar7 = piVar15[8];
  if ((int)local_44 < iVar7) {
LAB_00482805:
    piVar15[7] = piVar15[7] + 1;
    iVar7 = piVar15[1];
    *(int *)(iVar7 + 4 + (int)local_44 * 0x14) = local_58 + 1;
    *(undefined2 *)(iVar7 + (int)local_44 * 0x14) = 2;
    *(undefined1 *)(iVar7 + 3 + (int)local_44 * 0x14) = 0;
    *(uint **)(iVar7 + 8 + (int)local_44 * 0x14) = local_34;
    *(undefined4 *)(iVar7 + 0xc + (int)local_44 * 0x14) = 0;
    *(undefined4 *)(iVar7 + 0x10 + (int)local_44 * 0x14) = 0;
  }
  else {
    if (iVar7 == 0) {
      iVar7 = 0x33;
    }
    else {
      iVar7 = iVar7 * 2;
    }
    puVar2 = FUN_00494cf0(*piVar15,(undefined4 *)piVar15[1],iVar7 * 0x14);
    if (puVar2 != (undefined4 *)0x0) {
      iVar7 = *piVar15;
      if (((iVar7 == 0) || (puVar2 < *(undefined4 **)(iVar7 + 0x104))) ||
         (*(undefined4 **)(iVar7 + 0x108) <= puVar2)) {
        uVar17 = (*DAT_00582af0._4_4_)(puVar2);
      }
      else {
        uVar17 = (uint)*(ushort *)(iVar7 + 0xe8);
      }
      piVar15[1] = (int)puVar2;
      piVar15[8] = uVar17 / 0x14;
      goto LAB_00482805;
    }
    local_44 = (int *)0x1;
  }
  iVar7 = piVar15[7];
  iVar10 = piVar15[8];
  if (iVar7 < iVar10) {
LAB_004828ad:
    iVar10 = piVar15[1];
    piVar15[7] = piVar15[7] + 1;
    *(undefined2 *)(iVar10 + iVar7 * 0x14) = 4;
    *(undefined1 *)(iVar10 + 3 + iVar7 * 0x14) = 0;
    *(int **)(iVar10 + 4 + iVar7 * 0x14) = local_50;
    *(undefined4 *)(iVar10 + 8 + iVar7 * 0x14) = 0;
    *(undefined4 *)(iVar10 + 0xc + iVar7 * 0x14) = 0;
    *(undefined4 *)(iVar10 + 0x10 + iVar7 * 0x14) = 0;
  }
  else {
    if (iVar10 == 0) {
      iVar10 = 0x33;
    }
    else {
      iVar10 = iVar10 * 2;
    }
    puVar2 = FUN_00494cf0(*piVar15,(undefined4 *)piVar15[1],iVar10 * 0x14);
    if (puVar2 != (undefined4 *)0x0) {
      iVar10 = *piVar15;
      if (((iVar10 == 0) || (puVar2 < *(undefined4 **)(iVar10 + 0x104))) ||
         (*(undefined4 **)(iVar10 + 0x108) <= puVar2)) {
        uVar17 = (*DAT_00582af0._4_4_)(puVar2);
      }
      else {
        uVar17 = (uint)*(ushort *)(iVar10 + 0xe8);
      }
      piVar15[8] = uVar17 / 0x14;
      piVar15[1] = (int)puVar2;
      goto LAB_004828ad;
    }
  }
  iVar7 = piVar15[7];
  iVar10 = piVar15[8];
  if (iVar7 < iVar10) {
LAB_0048294c:
    iVar10 = piVar15[1];
    piVar15[7] = piVar15[7] + 1;
    *(int *)(iVar10 + 4 + iVar7 * 0x14) = local_70;
    *(undefined2 *)(iVar10 + iVar7 * 0x14) = 0x1b;
    *(undefined1 *)(iVar10 + 3 + iVar7 * 0x14) = 0;
    *(int *)(iVar10 + 8 + iVar7 * 0x14) = local_54;
    *(undefined4 *)(iVar10 + 0xc + iVar7 * 0x14) = 0;
    *(undefined4 *)(iVar10 + 0x10 + iVar7 * 0x14) = 0;
  }
  else {
    if (iVar10 == 0) {
      iVar10 = 0x33;
    }
    else {
      iVar10 = iVar10 * 2;
    }
    puVar2 = FUN_00494cf0(*piVar15,(undefined4 *)piVar15[1],iVar10 * 0x14);
    if (puVar2 != (undefined4 *)0x0) {
      iVar10 = *piVar15;
      if (((iVar10 == 0) || (puVar2 < *(undefined4 **)(iVar10 + 0x104))) ||
         (*(undefined4 **)(iVar10 + 0x108) <= puVar2)) {
        uVar17 = (*DAT_00582af0._4_4_)(puVar2);
      }
      else {
        uVar17 = (uint)*(ushort *)(iVar10 + 0xe8);
      }
      piVar15[8] = uVar17 / 0x14;
      piVar15[1] = (int)puVar2;
      goto LAB_0048294c;
    }
  }
  iVar7 = piVar15[7];
  iVar10 = piVar15[8];
  if (iVar7 < iVar10) {
LAB_004829ea:
    iVar10 = piVar15[1];
    piVar15[7] = piVar15[7] + 1;
    *(undefined2 *)(iVar10 + iVar7 * 0x14) = 1;
    *(undefined1 *)(iVar10 + 3 + iVar7 * 0x14) = 0;
    *(undefined4 *)(iVar10 + 4 + iVar7 * 0x14) = 0;
    *(int *)(iVar10 + 8 + iVar7 * 0x14) = local_78;
    *(undefined4 *)(iVar10 + 0xc + iVar7 * 0x14) = 0;
    *(undefined4 *)(iVar10 + 0x10 + iVar7 * 0x14) = 0;
  }
  else {
    if (iVar10 == 0) {
      iVar10 = 0x33;
    }
    else {
      iVar10 = iVar10 * 2;
    }
    puVar2 = FUN_00494cf0(*piVar15,(undefined4 *)piVar15[1],iVar10 * 0x14);
    if (puVar2 != (undefined4 *)0x0) {
      iVar10 = *piVar15;
      if (((iVar10 == 0) || (puVar2 < *(undefined4 **)(iVar10 + 0x104))) ||
         (*(undefined4 **)(iVar10 + 0x108) <= puVar2)) {
        uVar17 = (*DAT_00582af0._4_4_)(puVar2);
      }
      else {
        uVar17 = (uint)*(ushort *)(iVar10 + 0xe8);
      }
      piVar15[8] = uVar17 / 0x14;
      piVar15[1] = (int)puVar2;
      goto LAB_004829ea;
    }
  }
  if (local_5c == 0x71) {
    local_34 = (uint *)local_44;
  }
  else if (local_5c == 0x73) {
    local_34 = (uint *)local_44;
    local_44 = (int *)((int)local_44 + 1);
  }
  else {
    local_34 = (uint *)piVar15[7];
    iVar7 = piVar15[8];
    if ((int)local_34 < iVar7) {
LAB_00482aba:
      iVar7 = piVar15[1];
      piVar15[7] = piVar15[7] + 1;
      *(undefined2 *)(iVar7 + (int)local_34 * 0x14) = 4;
      *(undefined1 *)(iVar7 + 3 + (int)local_34 * 0x14) = 0;
      *(int **)(iVar7 + 4 + (int)local_34 * 0x14) = local_50;
      *(undefined4 *)(iVar7 + 8 + (int)local_34 * 0x14) = 0;
      *(undefined4 *)(iVar7 + 0xc + (int)local_34 * 0x14) = 0;
      *(undefined4 *)(iVar7 + 0x10 + (int)local_34 * 0x14) = 0;
    }
    else {
      if (iVar7 == 0) {
        iVar7 = 0x33;
      }
      else {
        iVar7 = iVar7 * 2;
      }
      puVar2 = FUN_00494cf0(*piVar15,(undefined4 *)piVar15[1],iVar7 * 0x14);
      if (puVar2 != (undefined4 *)0x0) {
        iVar7 = *piVar15;
        if (((iVar7 == 0) || (puVar2 < *(undefined4 **)(iVar7 + 0x104))) ||
           (*(undefined4 **)(iVar7 + 0x108) <= puVar2)) {
          uVar17 = (*DAT_00582af0._4_4_)(puVar2);
        }
        else {
          uVar17 = (uint)*(ushort *)(iVar7 + 0xe8);
        }
        piVar15[8] = uVar17 / 0x14;
        piVar15[1] = (int)puVar2;
        goto LAB_00482aba;
      }
      local_34 = (uint *)0x1;
    }
    iVar7 = piVar15[7];
    iVar10 = piVar15[8];
    if (iVar7 < iVar10) {
LAB_00482b62:
      iVar10 = piVar15[1];
      piVar15[7] = piVar15[7] + 1;
      *(int *)(iVar10 + 4 + iVar7 * 0x14) = local_70;
      *(undefined2 *)(iVar10 + iVar7 * 0x14) = 0x1b;
      *(undefined1 *)(iVar10 + 3 + iVar7 * 0x14) = 0;
      *(int *)(iVar10 + 8 + iVar7 * 0x14) = local_54;
      *(undefined4 *)(iVar10 + 0xc + iVar7 * 0x14) = 0;
      *(undefined4 *)(iVar10 + 0x10 + iVar7 * 0x14) = 0;
    }
    else {
      if (iVar10 == 0) {
        iVar10 = 0x33;
      }
      else {
        iVar10 = iVar10 * 2;
      }
      puVar2 = FUN_00494cf0(*piVar15,(undefined4 *)piVar15[1],iVar10 * 0x14);
      if (puVar2 != (undefined4 *)0x0) {
        iVar10 = *piVar15;
        if (((iVar10 == 0) || (puVar2 < *(undefined4 **)(iVar10 + 0x104))) ||
           (*(undefined4 **)(iVar10 + 0x108) <= puVar2)) {
          uVar17 = (*DAT_00582af0._4_4_)(puVar2);
        }
        else {
          uVar17 = (uint)*(ushort *)(iVar10 + 0xe8);
        }
        piVar15[8] = uVar17 / 0x14;
        piVar15[1] = (int)puVar2;
        goto LAB_00482b62;
      }
    }
    iVar7 = piVar15[7];
    iVar10 = piVar15[8];
    if (iVar10 <= iVar7) {
      if (iVar10 == 0) {
        iVar10 = 0x33;
      }
      else {
        iVar10 = iVar10 * 2;
      }
      puVar2 = FUN_00494cf0(*piVar15,(undefined4 *)piVar15[1],iVar10 * 0x14);
      if (puVar2 == (undefined4 *)0x0) goto LAB_00482c33;
      iVar10 = *piVar15;
      if (((iVar10 == 0) || (puVar2 < *(undefined4 **)(iVar10 + 0x104))) ||
         (*(undefined4 **)(iVar10 + 0x108) <= puVar2)) {
        uVar17 = (*DAT_00582af0._4_4_)(puVar2);
      }
      else {
        uVar17 = (uint)*(ushort *)(iVar10 + 0xe8);
      }
      piVar15[8] = uVar17 / 0x14;
      piVar15[1] = (int)puVar2;
    }
    iVar10 = piVar15[1];
    piVar15[7] = piVar15[7] + 1;
    *(undefined2 *)(iVar10 + iVar7 * 0x14) = 1;
    *(undefined1 *)(iVar10 + 3 + iVar7 * 0x14) = 0;
    *(undefined4 *)(iVar10 + 4 + iVar7 * 0x14) = 0;
    *(int *)(iVar10 + 8 + iVar7 * 0x14) = local_78;
    *(undefined4 *)(iVar10 + 0xc + iVar7 * 0x14) = 0;
    *(undefined4 *)(iVar10 + 0x10 + iVar7 * 0x14) = 0;
  }
LAB_00482c33:
  iVar7 = piVar15[7];
  if ((local_5c == 0x71) || (local_5c == 0x70)) {
    iVar10 = piVar15[8];
    if (iVar10 <= iVar7) {
      if (iVar10 == 0) {
        iVar10 = 0x33;
      }
      else {
        iVar10 = iVar10 * 2;
      }
      puVar2 = FUN_00494cf0(*piVar15,(undefined4 *)piVar15[1],iVar10 * 0x14);
      if (puVar2 == (undefined4 *)0x0) goto LAB_00482ce8;
      iVar10 = *piVar15;
      if (((iVar10 == 0) || (puVar2 < *(undefined4 **)(iVar10 + 0x104))) ||
         (*(undefined4 **)(iVar10 + 0x108) <= puVar2)) {
        uVar17 = (*DAT_00582af0._4_4_)(puVar2);
      }
      else {
        uVar17 = (uint)*(ushort *)(iVar10 + 0xe8);
      }
      piVar15[8] = uVar17 / 0x14;
      piVar15[1] = (int)puVar2;
    }
    iVar10 = piVar15[1];
    piVar15[7] = piVar15[7] + 1;
    *(int *)(iVar10 + 4 + iVar7 * 0x14) = local_74;
    *(undefined2 *)(iVar10 + iVar7 * 0x14) = 2;
    *(undefined1 *)(iVar10 + 3 + iVar7 * 0x14) = 0;
    *(int *)(iVar10 + 8 + iVar7 * 0x14) = local_7c;
    *(undefined4 *)(iVar10 + 0xc + iVar7 * 0x14) = 0;
    *(undefined4 *)(iVar10 + 0x10 + iVar7 * 0x14) = 0;
  }
LAB_00482ce8:
  iVar10 = piVar15[7];
  iVar8 = piVar15[8];
  if (iVar10 < iVar8) {
LAB_00482d54:
    iVar8 = piVar15[1];
    piVar15[7] = piVar15[7] + 1;
    *(undefined2 *)(iVar8 + iVar10 * 0x14) = 4;
    *(undefined1 *)(iVar8 + 3 + iVar10 * 0x14) = 0;
    *(char **)(iVar8 + 4 + iVar10 * 0x14) = local_40;
    *(undefined4 *)(iVar8 + 8 + iVar10 * 0x14) = 0;
    *(undefined4 *)(iVar8 + 0xc + iVar10 * 0x14) = 0;
    *(undefined4 *)(iVar8 + 0x10 + iVar10 * 0x14) = 0;
  }
  else {
    if (iVar8 == 0) {
      iVar8 = 0x33;
    }
    else {
      iVar8 = iVar8 * 2;
    }
    puVar2 = FUN_00494cf0(*piVar15,(undefined4 *)piVar15[1],iVar8 * 0x14);
    if (puVar2 != (undefined4 *)0x0) {
      iVar8 = *piVar15;
      if (((iVar8 == 0) || (puVar2 < *(undefined4 **)(iVar8 + 0x104))) ||
         (*(undefined4 **)(iVar8 + 0x108) <= puVar2)) {
        uVar17 = (*DAT_00582af0._4_4_)(puVar2);
      }
      else {
        uVar17 = (uint)*(ushort *)(iVar8 + 0xe8);
      }
      piVar15[8] = uVar17 / 0x14;
      piVar15[1] = (int)puVar2;
      goto LAB_00482d54;
    }
  }
  iVar10 = piVar15[7];
  iVar8 = piVar15[8];
  if (iVar10 < iVar8) {
LAB_00482df3:
    iVar8 = piVar15[1];
    piVar15[7] = piVar15[7] + 1;
    *(int *)(iVar8 + 4 + iVar10 * 0x14) = local_58;
    *(undefined2 *)(iVar8 + iVar10 * 0x14) = 0x1b;
    *(undefined1 *)(iVar8 + 3 + iVar10 * 0x14) = 0;
    *(int *)(iVar8 + 8 + iVar10 * 0x14) = local_4c;
    *(undefined4 *)(iVar8 + 0xc + iVar10 * 0x14) = 0;
    *(undefined4 *)(iVar8 + 0x10 + iVar10 * 0x14) = 0;
  }
  else {
    if (iVar8 == 0) {
      iVar8 = 0x33;
    }
    else {
      iVar8 = iVar8 * 2;
    }
    puVar2 = FUN_00494cf0(*piVar15,(undefined4 *)piVar15[1],iVar8 * 0x14);
    if (puVar2 != (undefined4 *)0x0) {
      iVar8 = *piVar15;
      if (((iVar8 == 0) || (puVar2 < *(undefined4 **)(iVar8 + 0x104))) ||
         (*(undefined4 **)(iVar8 + 0x108) <= puVar2)) {
        uVar17 = (*DAT_00582af0._4_4_)(puVar2);
      }
      else {
        uVar17 = (uint)*(ushort *)(iVar8 + 0xe8);
      }
      piVar15[8] = uVar17 / 0x14;
      piVar15[1] = (int)puVar2;
      goto LAB_00482df3;
    }
  }
  iVar10 = piVar15[7];
  iVar8 = piVar15[8];
  if (iVar10 < iVar8) {
LAB_00482e91:
    iVar8 = piVar15[1];
    piVar15[7] = piVar15[7] + 1;
    *(undefined2 *)(iVar8 + iVar10 * 0x14) = 1;
    *(undefined1 *)(iVar8 + 3 + iVar10 * 0x14) = 0;
    *(undefined4 *)(iVar8 + 4 + iVar10 * 0x14) = 0;
    *(int *)(iVar8 + 8 + iVar10 * 0x14) = local_78;
    *(undefined4 *)(iVar8 + 0xc + iVar10 * 0x14) = 0;
    *(undefined4 *)(iVar8 + 0x10 + iVar10 * 0x14) = 0;
  }
  else {
    if (iVar8 == 0) {
      iVar8 = 0x33;
    }
    else {
      iVar8 = iVar8 * 2;
    }
    puVar2 = FUN_00494cf0(*piVar15,(undefined4 *)piVar15[1],iVar8 * 0x14);
    if (puVar2 != (undefined4 *)0x0) {
      iVar8 = *piVar15;
      if (((iVar8 == 0) || (puVar2 < *(undefined4 **)(iVar8 + 0x104))) ||
         (*(undefined4 **)(iVar8 + 0x108) <= puVar2)) {
        uVar17 = (*DAT_00582af0._4_4_)(puVar2);
      }
      else {
        uVar17 = (uint)*(ushort *)(iVar8 + 0xe8);
      }
      piVar15[8] = uVar17 / 0x14;
      piVar15[1] = (int)puVar2;
      goto LAB_00482e91;
    }
  }
  if ((-1 < (int)local_38) && (local_38 < (uint)piVar15[7])) {
    *(int *)(piVar15[1] + 8 + (int)local_38 * 0x14) = piVar15[7];
  }
  iVar10 = piVar15[7];
  iVar8 = piVar15[8];
  if (iVar10 < iVar8) {
LAB_00482f48:
    iVar8 = piVar15[1];
    piVar15[7] = piVar15[7] + 1;
    *(undefined2 *)(iVar8 + iVar10 * 0x14) = 7;
    *(undefined1 *)(iVar8 + 3 + iVar10 * 0x14) = 0;
    *(undefined4 *)(iVar8 + 4 + iVar10 * 0x14) = 0;
    *(int *)(iVar8 + 8 + iVar10 * 0x14) = local_70;
    *(undefined4 *)(iVar8 + 0xc + iVar10 * 0x14) = 0;
    *(undefined4 *)(iVar8 + 0x10 + iVar10 * 0x14) = 0;
  }
  else {
    if (iVar8 == 0) {
      iVar8 = 0x33;
    }
    else {
      iVar8 = iVar8 * 2;
    }
    puVar2 = FUN_00494cf0(*piVar15,(undefined4 *)piVar15[1],iVar8 * 0x14);
    if (puVar2 != (undefined4 *)0x0) {
      iVar8 = *piVar15;
      if (((iVar8 == 0) || (puVar2 < *(undefined4 **)(iVar8 + 0x104))) ||
         (*(undefined4 **)(iVar8 + 0x108) <= puVar2)) {
        uVar17 = (*DAT_00582af0._4_4_)(puVar2);
      }
      else {
        uVar17 = (uint)*(ushort *)(iVar8 + 0xe8);
      }
      piVar15[8] = uVar17 / 0x14;
      piVar15[1] = (int)puVar2;
      goto LAB_00482f48;
    }
  }
  iVar10 = piVar15[7];
  iVar8 = piVar15[8];
  if (iVar8 <= iVar10) {
    if (iVar8 == 0) {
      iVar8 = 0x33;
    }
    else {
      iVar8 = iVar8 * 2;
    }
    puVar2 = FUN_00494cf0(*piVar15,(undefined4 *)piVar15[1],iVar8 * 0x14);
    if (puVar2 == (undefined4 *)0x0) goto LAB_0048301f;
    iVar8 = *piVar15;
    if (((iVar8 == 0) || (puVar2 < *(undefined4 **)(iVar8 + 0x104))) ||
       (*(undefined4 **)(iVar8 + 0x108) <= puVar2)) {
      uVar17 = (*DAT_00582af0._4_4_)(puVar2);
    }
    else {
      uVar17 = (uint)*(ushort *)(iVar8 + 0xe8);
    }
    piVar15[8] = uVar17 / 0x14;
    piVar15[1] = (int)puVar2;
  }
  iVar8 = piVar15[1];
  piVar15[7] = piVar15[7] + 1;
  *(undefined2 *)(iVar8 + iVar10 * 0x14) = 7;
  *(undefined1 *)(iVar8 + 3 + iVar10 * 0x14) = 0;
  *(undefined4 *)(iVar8 + 4 + iVar10 * 0x14) = 0;
  *(int *)(iVar8 + 8 + iVar10 * 0x14) = local_58;
  *(undefined4 *)(iVar8 + 0xc + iVar10 * 0x14) = 0;
  *(undefined4 *)(iVar8 + 0x10 + iVar10 * 0x14) = 0;
LAB_0048301f:
  iVar8 = local_58;
  iVar10 = piVar15[7];
  if ((iVar10 < piVar15[8]) || (iVar9 = FUN_0047de10(piVar15), iVar9 == 0)) {
    iVar9 = piVar15[1];
    piVar15[7] = piVar15[7] + 1;
    *(int **)(iVar9 + 4 + iVar10 * 0x14) = local_50;
    *(undefined2 *)(iVar9 + iVar10 * 0x14) = 2;
    *(undefined1 *)(iVar9 + 3 + iVar10 * 0x14) = 0;
    *(int *)(iVar9 + 8 + iVar10 * 0x14) = iVar12;
    *(undefined4 *)(iVar9 + 0xc + iVar10 * 0x14) = 0;
    *(undefined4 *)(iVar9 + 0x10 + iVar10 * 0x14) = 0;
  }
  iVar12 = piVar15[7];
  if ((iVar12 < piVar15[8]) || (iVar10 = FUN_0047de10(piVar15), iVar10 == 0)) {
    iVar10 = piVar15[1];
    piVar15[7] = piVar15[7] + 1;
    *(char **)(iVar10 + 4 + iVar12 * 0x14) = local_40;
    *(undefined2 *)(iVar10 + iVar12 * 0x14) = 2;
    *(undefined1 *)(iVar10 + 3 + iVar12 * 0x14) = 0;
    *(int *)(iVar10 + 8 + iVar12 * 0x14) = iVar14;
    *(undefined4 *)(iVar10 + 0xc + iVar12 * 0x14) = 0;
    *(undefined4 *)(iVar10 + 0x10 + iVar12 * 0x14) = 0;
  }
  iVar12 = piVar15[7];
  if ((iVar12 < piVar15[8]) || (iVar14 = FUN_0047de10(piVar15), iVar14 == 0)) {
    iVar14 = piVar15[1];
    piVar15[7] = piVar15[7] + 1;
    *(int *)(iVar14 + 4 + iVar12 * 0x14) = local_70;
    *(undefined2 *)(iVar14 + iVar12 * 0x14) = 0x1b;
    *(undefined1 *)(iVar14 + 3 + iVar12 * 0x14) = 0;
    *(int *)(iVar14 + 8 + iVar12 * 0x14) = local_54;
    *(undefined4 *)(iVar14 + 0xc + iVar12 * 0x14) = 0;
    *(undefined4 *)(iVar14 + 0x10 + iVar12 * 0x14) = 0;
  }
  iVar12 = piVar15[7];
  if ((iVar12 < piVar15[8]) || (iVar14 = FUN_0047de10(piVar15), iVar14 == 0)) {
    iVar14 = piVar15[1];
    piVar15[7] = piVar15[7] + 1;
    *(undefined2 *)(iVar14 + iVar12 * 0x14) = 0x1b;
    *(undefined1 *)(iVar14 + 3 + iVar12 * 0x14) = 0;
    *(int *)(iVar14 + 4 + iVar12 * 0x14) = iVar8;
    *(int *)(iVar14 + 8 + iVar12 * 0x14) = local_4c;
    *(undefined4 *)(iVar14 + 0xc + iVar12 * 0x14) = 0;
    *(undefined4 *)(iVar14 + 0x10 + iVar12 * 0x14) = 0;
  }
  if (piVar15[10] != 0) {
    *(int *)(piVar15[10] - (local_78 * 4 + 4)) = piVar15[7];
  }
  iVar12 = piVar15[7];
  if ((iVar12 < piVar15[8]) || (iVar14 = FUN_0047de10(piVar15), iVar14 == 0)) {
    iVar14 = piVar15[1];
    piVar15[7] = piVar15[7] + 1;
    *(undefined2 *)(iVar14 + iVar12 * 0x14) = 0x17;
    *(undefined1 *)(iVar14 + 3 + iVar12 * 0x14) = 0;
    *(undefined4 *)(iVar14 + 4 + iVar12 * 0x14) = 0;
    *(undefined4 *)(iVar14 + 8 + iVar12 * 0x14) = 0;
    *(undefined4 *)(iVar14 + 0xc + iVar12 * 0x14) = 0;
    *(undefined4 *)(iVar14 + 0x10 + iVar12 * 0x14) = 0;
  }
  else {
    iVar12 = 1;
  }
  FUN_004aecc0(piVar15,iVar12,local_84,0xfffffff1);
  uVar17 = local_48;
  FUN_004ae8f0(piVar15,0x18,local_10,local_20,local_48,local_6c,0xfffffff0);
  if (piVar15[1] != 0) {
    *(undefined1 *)(piVar15[1] + -0x11 + piVar15[7] * 0x14) = 1;
  }
  iVar12 = piVar15[7];
  if ((iVar12 < piVar15[8]) || (iVar14 = FUN_0047de10(piVar15), iVar14 == 0)) {
    iVar14 = piVar15[1];
    piVar15[7] = piVar15[7] + 1;
    *(int **)(iVar14 + 4 + iVar12 * 0x14) = local_44;
    *(uint **)(iVar14 + 8 + iVar12 * 0x14) = local_34;
    *(undefined2 *)(iVar14 + iVar12 * 0x14) = 0x19;
    *(undefined1 *)(iVar14 + 3 + iVar12 * 0x14) = 0;
    *(int *)(iVar14 + 0xc + iVar12 * 0x14) = iVar7;
    *(undefined4 *)(iVar14 + 0x10 + iVar12 * 0x14) = 0;
  }
  piVar16 = local_30;
  if (local_64 != 0) {
    iVar12 = uVar17 + 1;
    FUN_00496d90((int)local_30,local_64,iVar12);
    if (piVar16[0xf] < iVar12) {
      piVar16[0xf] = iVar12;
      piVar16[0x10] = local_64;
    }
  }
  if (piVar15[10] != 0) {
    *(int *)(piVar15[10] - (local_60 * 4 + 4)) = piVar15[7];
  }
  if (*local_80 == '\x05') {
    piVar19 = (int *)local_68[0xf];
    piVar15 = local_68;
    while (piVar6 = piVar19, piVar6 != (int *)0x0) {
      piVar15 = piVar6;
      piVar19 = (int *)piVar6[0xf];
    }
    FUN_0047c420(piVar16,(short *)0x0,(int *)*piVar15);
  }
  piVar15 = local_2c;
  puVar2 = (undefined4 *)local_2c[0xf];
  if (puVar2 != (undefined4 *)0x0) {
    FUN_00472d10(local_3c,puVar2);
    FUN_00494b00(local_3c,puVar2);
  }
  piVar15[0xf] = (int)local_68;
  FUN_004775b0(piVar16);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004832f0 @ 004832f0  kind=lib  attributed-by=lib-island  size=123 */

undefined4 __cdecl FUN_004832f0(undefined4 *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  int iVar6;
  
  if (param_1 != (undefined4 *)0x0) {
    iVar6 = 0;
    if (0 < (int)param_1[1]) {
      puVar4 = (undefined4 *)*param_1;
      do {
        pbVar3 = (byte *)*puVar4;
        bVar2 = *pbVar3;
        pbVar5 = param_2;
        while ((bVar2 != 0 && ((&DAT_00569620)[bVar2] == (&DAT_00569620)[*pbVar5]))) {
          pbVar1 = pbVar3 + 1;
          pbVar3 = pbVar3 + 1;
          pbVar5 = pbVar5 + 1;
          bVar2 = *pbVar1;
        }
        if ((&DAT_00569620)[*pbVar3] == (&DAT_00569620)[*pbVar5]) {
          return 1;
        }
        iVar6 = iVar6 + 1;
        puVar4 = puVar4 + 2;
      } while (iVar6 < (int)param_1[1]);
    }
  }
  return 0;
}


/* FUN_00483380 @ 00483380  kind=lib  attributed-by=lib-island  size=219 */

uint __cdecl FUN_00483380(int param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    return 0;
  }
  puVar2 = *(undefined1 **)(param_1 + 0xc);
  puVar3 = *(undefined8 **)(puVar2 + 0x38);
  uVar4 = FUN_004a2c80(*(undefined4 **)(puVar2 + 0x44));
  if (uVar4 == 0) {
    *puVar3 = 0x66206574694c5153;
    puVar3[1] = 0x332074616d726f;
    *(undefined1 *)(puVar3 + 2) = *(undefined1 *)(param_1 + 0x21);
    *(undefined1 *)((int)puVar3 + 0x11) = *(undefined1 *)(param_1 + 0x22);
    *(undefined2 *)((int)puVar3 + 0x12) = 0x101;
    *(char *)((int)puVar3 + 0x14) = *(char *)(param_1 + 0x20) - *(char *)(param_1 + 0x24);
    *(undefined2 *)((int)puVar3 + 0x15) = 0x2040;
    *(undefined1 *)((int)puVar3 + 0x17) = 0x20;
    memset(puVar3 + 3,0,0x4c);
    FUN_004c5b30(puVar2,0xd);
    uVar1 = *(undefined1 *)(param_1 + 0x11);
    *(ushort *)(param_1 + 0x16) = *(ushort *)(param_1 + 0x16) | 2;
    *(undefined1 *)((int)puVar3 + 0x34) = 0;
    *(undefined1 *)((int)puVar3 + 0x35) = 0;
    *(undefined1 *)((int)puVar3 + 0x37) = uVar1;
    *(undefined1 *)((int)puVar3 + 0x36) = 0;
    uVar1 = *(undefined1 *)(param_1 + 0x12);
    *(undefined1 *)(puVar3 + 8) = 0;
    *(undefined1 *)((int)puVar3 + 0x41) = 0;
    *(undefined1 *)((int)puVar3 + 0x42) = 0;
    *(undefined1 *)((int)puVar3 + 0x43) = uVar1;
    *(undefined4 *)(param_1 + 0x2c) = 1;
    *(undefined1 *)((int)puVar3 + 0x1f) = 1;
    uVar4 = 0;
  }
  return uVar4;
}


