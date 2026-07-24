// sqlite_01 (_library) -- cube. 200 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "sqlite_01.h"

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


/* FUN_0053cc30 @ 0053cc30  kind=lib  attributed-by=lib-island  size=81 */

undefined4 FUN_0053cc30(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 != 0 || *(int *)(param_1 + 0x4c) != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x7c);
    lVar3 = __alldiv(iVar1 + -1,*(int *)(param_1 + 0x4c) - (uint)(iVar1 == 0),uVar2,0);
    uVar2 = __allmul(lVar3 + 1,uVar2,0);
    return uVar2;
  }
  return 0;
}


/* FUN_0053cc90 @ 0053cc90  kind=lib  attributed-by=lib-island  size=174 */

int * FUN_0053cc90(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *_Dst;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  iVar1 = *param_2;
  iVar2 = *param_1;
  _Dst = (int *)FUN_00552230(iVar2,iVar1 * 5 + 0x10);
  if (_Dst != (int *)0x0) {
    memset(_Dst,0,iVar1 * 5 + 0x10);
    *(short *)((int)_Dst + 6) = (short)iVar1;
    _Dst[2] = (int)(_Dst + iVar1 + 3);
    *(undefined1 *)(_Dst + 1) = *(undefined1 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0xc) + 0x4d);
    *_Dst = iVar2;
    puVar6 = (undefined4 *)param_2[2];
    if (0 < iVar1) {
      param_2 = _Dst + 3;
      iVar4 = 0;
      do {
        iVar3 = FUN_00555b70(param_1,*puVar6);
        if (iVar3 == 0) {
          iVar3 = *(int *)(iVar2 + 8);
        }
        iVar5 = iVar4 + 1;
        *param_2 = iVar3;
        *(undefined1 *)(iVar4 + _Dst[2]) = *(undefined1 *)(puVar6 + 3);
        param_2 = param_2 + 1;
        puVar6 = puVar6 + 5;
        iVar4 = iVar5;
      } while (iVar5 < iVar1);
    }
  }
  return _Dst;
}


/* FUN_0053cd40 @ 0053cd40  kind=lib  attributed-by=lib-island  size=216 */

undefined1 FUN_0053cd40(byte *param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  if ((int)param_2 < 2) {
    return 0x1a;
  }
  bVar1 = (&DAT_007128f8)
          [(int)((uint)(byte)(&DAT_007120d8)[param_1[param_2 - 1]] * 3 ^
                 (uint)(byte)(&DAT_007120d8)[*param_1] << 2 ^ param_2) % 0x7f];
  do {
    uVar3 = (uint)bVar1;
    if ((int)(uVar3 - 1) < 0) {
      return 0x1a;
    }
    if ((byte)(&DAT_00712ad7)[uVar3] == param_2) {
      pbVar4 = &DAT_007126a8 + *(ushort *)(&DAT_00712b60 + (uVar3 - 1) * 2);
      uVar2 = param_2;
      pbVar5 = param_1;
      while (0 < (int)uVar2) {
        if ((*pbVar4 == 0) || ((&DAT_007120d8)[*pbVar4] != (&DAT_007120d8)[*pbVar5])) break;
        pbVar4 = pbVar4 + 1;
        pbVar5 = pbVar5 + 1;
        uVar2 = uVar2 - 1;
      }
      if (((int)(uVar2 - 1) < 0) || ((&DAT_007120d8)[*pbVar4] == (&DAT_007120d8)[*pbVar5])) {
        return (&DAT_00712c8f)[uVar3];
      }
    }
    bVar1 = "CREATE TABLE sqlite_master(\n  type text,\n  name text,\n  tbl_name text,\n  rootpage integer,\n  sql text\n)"
            [uVar3 + 0x67];
  } while( true );
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


/* FUN_0053d2a0 @ 0053d2a0  kind=lib  attributed-by=lib-island  size=891 */

int FUN_0053d2a0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  ushort uVar5;
  int *piVar6;
  short sVar7;
  char *pcVar8;
  undefined4 *puVar9;
  uint uVar10;
  bool bVar11;
  undefined4 *local_10;
  int local_c;
  int local_8;
  
  piVar3 = param_1;
  iVar4 = FUN_00560030(*param_1);
  if (iVar4 != 0) {
    return iVar4;
  }
  iVar4 = *param_1;
  param_1 = *(int **)(iVar4 + 0x28);
  if (param_1 == (int *)0x0) {
    param_1 = (int *)FUN_00560e90(*(undefined4 *)(iVar4 + 0xb4),1,1,&local_10);
  }
  puVar9 = local_10;
  iVar1 = DAT_007666d0;
  if (param_1 == (int *)0x0) {
    if (local_10[4] != 0) {
      *(int *)(iVar4 + 0xa0) = *(int *)(iVar4 + 0xa0) + 1;
      goto LAB_0053d3cb;
    }
    local_10[4] = iVar4;
    if (iVar1 / (int)*(size_t *)(iVar4 + 0x80) == 0) {
      FUN_00525a30(0xb,"database corruption at line %d of [%.10s]",0xa5a2,
                   "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
      param_1 = (int *)0xb;
LAB_0053d377:
      if ((*(byte *)(puVar9 + 6) & 2) != 0) {
        FUN_00544570(puVar9);
      }
      iVar1 = puVar9[7];
      *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + -1;
      if (puVar9[5] == 1) {
        *(undefined4 *)(iVar1 + 0x2c) = 0;
      }
      (*DAT_00766664)(*(undefined4 *)(iVar1 + 0x28),*puVar9,1);
      goto LAB_0053d3a9;
    }
    if (((*(char *)(iVar4 + 0xe) == '\0') && (*(int *)(iVar4 + 0x18) != 0)) &&
       (**(int **)(iVar4 + 0x3c) != 0)) {
      *(int *)(iVar4 + 0xa4) = *(int *)(iVar4 + 0xa4) + 1;
      param_1 = (int *)FUN_00544d80(local_10);
      if (param_1 != (int *)0x0) goto LAB_0053d377;
    }
    else {
      if (*(int *)(iVar4 + 0x84) == 0) {
        param_1 = (int *)0xd;
        goto LAB_0053d377;
      }
      memset((void *)local_10[1],0,*(size_t *)(iVar4 + 0x80));
    }
  }
  else {
LAB_0053d3a9:
    if (*(int *)(*(int *)(iVar4 + 0xb4) + 0xc) == 0) {
      FUN_00541a10(iVar4);
    }
    puVar9 = (undefined4 *)0x0;
    if (param_1 != (int *)0x0) {
      return (int)param_1;
    }
  }
LAB_0053d3cb:
  local_8 = puVar9[2];
  piVar2 = (int *)puVar9[1];
  *(undefined4 **)(local_8 + 0x44) = puVar9;
  *(int **)(local_8 + 0x38) = piVar2;
  *(int **)(local_8 + 0x34) = piVar3;
  *(undefined4 *)(local_8 + 0x48) = 1;
  *(undefined1 *)(local_8 + 5) = 100;
  local_c = CONCAT31(CONCAT21(CONCAT11((char)piVar2[7],*(undefined1 *)((int)piVar2 + 0x1d)),
                              *(undefined1 *)((int)piVar2 + 0x1e)),
                     *(undefined1 *)((int)piVar2 + 0x1f));
  iVar4 = *(int *)(*piVar3 + 0x18);
  if ((local_c == 0) || (piVar2[6] != piVar2[0x17])) {
    local_c = iVar4;
  }
  if (local_c < 1) {
LAB_0053d5b5:
    iVar4 = (uint)((piVar3[9] + -0xc) * 0x40) / 0xff - 0x17;
    sVar7 = (short)((uint)((piVar3[9] + -0xc) * 0x20) / 0xff) + -0x17;
    uVar5 = (ushort)iVar4;
    *(ushort *)(piVar3 + 6) = uVar5;
    *(short *)((int)piVar3 + 0x1a) = sVar7;
    *(short *)(piVar3 + 7) = (short)piVar3[9] + -0x23;
    *(short *)((int)piVar3 + 0x1e) = sVar7;
    if (uVar5 < 0x80) {
      *(char *)(piVar3 + 5) = (char)iVar4;
    }
    else {
      *(undefined1 *)(piVar3 + 5) = 0x7f;
    }
    piVar3[3] = local_8;
    piVar3[0xb] = local_c;
    return 0;
  }
  param_1 = (int *)0x1a;
  pcVar8 = "SQLite format 3";
  uVar10 = 0xc;
  piVar6 = piVar2;
  do {
    if (*piVar6 != *(int *)pcVar8) goto LAB_0053d565;
    piVar6 = piVar6 + 1;
    pcVar8 = (char *)((int)pcVar8 + 4);
    bVar11 = 3 < uVar10;
    uVar10 = uVar10 - 4;
  } while (bVar11);
  if (2 < *(byte *)((int)piVar2 + 0x12)) {
    *(ushort *)((int)piVar3 + 0x16) = *(ushort *)((int)piVar3 + 0x16) | 1;
  }
  if (*(byte *)((int)piVar2 + 0x13) < 3) {
    if ((*(byte *)((int)piVar2 + 0x13) == 2) && ((*(byte *)((int)piVar3 + 0x16) & 0x10) == 0)) {
      local_10 = (undefined4 *)0x0;
      param_1 = (int *)FUN_0055faf0(*piVar3,&local_10);
      if (param_1 != (int *)0x0) goto LAB_0053d565;
      if (local_10 == (undefined4 *)0x0) {
        FUN_00545740(local_8);
        return 0;
      }
    }
    param_1 = (int *)0x1a;
    if ((((*(short *)((int)piVar2 + 0x15) == 0x2040) && (*(char *)((int)piVar2 + 0x17) == ' ')) &&
        (uVar10 = (uint)*(ushort *)(piVar2 + 4) * 0x100, (uVar10 & uVar10 - 1) == 0)) &&
       (uVar10 - 0x101 < 0xff00)) {
      local_10 = (undefined4 *)(uVar10 - *(byte *)(piVar2 + 5));
      if (uVar10 != piVar3[8]) {
        FUN_00545740(local_8);
        puVar9 = local_10;
        piVar3[9] = (int)local_10;
        piVar3[8] = uVar10;
        FUN_005399e0(piVar3);
        iVar4 = FUN_0055fe80(*piVar3,piVar3 + 8,uVar10 - (int)puVar9);
        return iVar4;
      }
      if (((*(uint *)(piVar3[1] + 0x18) & 0x8000) == 0) && (iVar4 < local_c)) {
        param_1 = (int *)FUN_00551190(0xc62d);
      }
      else if ((undefined4 *)0x1df < local_10) {
        piVar3[8] = uVar10;
        piVar3[9] = (int)local_10;
        iVar4 = FUN_00559fd0(piVar2 + 0xd);
        *(bool *)((int)piVar3 + 0x11) = iVar4 != 0;
        iVar4 = FUN_00559fd0(piVar2 + 0x10);
        *(bool *)((int)piVar3 + 0x12) = iVar4 != 0;
        goto LAB_0053d5b5;
      }
    }
  }
LAB_0053d565:
  FUN_00545740(local_8);
  piVar3[3] = 0;
  return (int)param_1;
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


/* FUN_0053dcf0 @ 0053dcf0  kind=lib  attributed-by=lib-island  size=228 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0053dcf0(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (*DAT_00766610)(param_1);
  if (DAT_0076b39c < param_1) {
    DAT_0076b39c = param_1;
  }
  _DAT_0076b374 = param_1;
  if (DAT_0076b498 != 0) {
    iVar2 = (DAT_0076b494 - ((int)uVar1 >> 0x1f)) - (uint)(DAT_0076b490 < uVar1);
    if (((int)DAT_0076b360 >> 0x1f < iVar2) ||
       (((int)DAT_0076b360 >> 0x1f <= iVar2 && (DAT_0076b360 < DAT_0076b490 - uVar1)))) {
      DAT_0076b4ac = 0;
    }
    else {
      DAT_0076b4ac = 1;
      FUN_0055da70(uVar1);
    }
  }
  iVar2 = (*DAT_00766600)(uVar1);
  if (iVar2 != 0) {
    uVar1 = (*DAT_00766608._4_4_)(iVar2);
    DAT_0076b360 = DAT_0076b360 + uVar1;
    if (DAT_0076b388 < (int)DAT_0076b360) {
      DAT_0076b388 = DAT_0076b360;
    }
    DAT_0076b384 = DAT_0076b384 + 1;
    if (DAT_0076b3ac < DAT_0076b384) {
      DAT_0076b3ac = DAT_0076b384;
    }
    *param_2 = iVar2;
    return uVar1;
  }
  *param_2 = 0;
  return uVar1;
}


/* FUN_0053de70 @ 0053de70  kind=lib  attributed-by=lib-island  size=112 */

uint FUN_0053de70(undefined4 *param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  
  piVar3 = (int *)*param_1;
  if (*piVar3 == 1) {
    piVar3 = (int *)piVar3[2];
    pcVar1 = (char *)*piVar3;
    if ((((*pcVar1 == -0x67) && (piVar3 = (int *)0x800, (*(ushort *)(pcVar1 + 2) & 0x800) == 0)) &&
        (piVar3 = *(int **)(pcVar1 + 0x10), piVar3 != (int *)0x0)) &&
       ((*piVar3 == 1 && (piVar3 = *(int **)piVar3[2], (char)*piVar3 == -0x66)))) {
      uVar2 = *(undefined4 *)(pcVar1 + 4);
      iVar4 = FUN_0057a2c0(uVar2,&DAT_00715bbc);
      if (iVar4 == 0) {
        return 1;
      }
      iVar4 = FUN_0057a2c0(uVar2,&DAT_00715bc0);
      uVar5 = CONCAT31((int3)((uint)-iVar4 >> 8),-(iVar4 != 0)) & 0xfffffffe;
      return CONCAT31((int3)(uVar5 >> 8),(char)uVar5 + '\x02');
    }
  }
  return (uint)piVar3 & 0xffffff00;
}


/* FUN_0053dee0 @ 0053dee0  kind=lib  attributed-by=lib-island  size=552 */

undefined4 FUN_0053dee0(undefined1 *param_1,int param_2,undefined4 param_3,char param_4)

{
  undefined1 uVar1;
  undefined1 uVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined1 local_2c [24];
  ushort local_14;
  uint local_c;
  undefined1 local_5;
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
    FUN_00525a30(0xb,"database corruption at line %d of [%.10s]",0xc795,
                 "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
    return 0xb;
  }
  local_5 = *param_1;
  FUN_0052e9b0(param_1);
  local_c = (uint)*(ushort *)(param_1 + 0x10);
  uVar7 = 0;
  if (local_c != 0) {
    do {
      puVar8 = (undefined1 *)
               ((uint)(CONCAT11(*(undefined1 *)(*(int *)(param_1 + 0x40) + uVar7 * 2),
                                *(undefined1 *)(*(int *)(param_1 + 0x40) + 1 + uVar7 * 2)) &
                      *(ushort *)(param_1 + 0x12)) + *(int *)(param_1 + 0x38));
      if (param_4 == '\x03') {
        FUN_0052eda0(param_1,puVar8,local_2c);
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
      FUN_00525a30(0xb,"database corruption at line %d of [%.10s]",0xc7b7,
                   "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
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


/* FUN_0053e110 @ 0053e110  kind=lib  attributed-by=lib-island  size=145 */

int FUN_0053e110(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = param_1;
  iVar3 = (int)*(short *)(param_1 + 0x5e);
  if (*(short *)(param_1 + 0x5e) < 0x13) {
    iVar2 = FUN_0053a6a0(*(undefined4 *)(param_1 + 4),param_2,&param_1);
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
    uVar4 = 0xcd30;
  }
  else {
    uVar4 = 0xcd25;
  }
  FUN_00525a30(0xb,"database corruption at line %d of [%.10s]",uVar4,
               "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
  return 0xb;
}


/* FUN_0053e1b0 @ 0053e1b0  kind=lib  attributed-by=lib-island  size=116 */

int FUN_0053e1b0(int param_1)

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
    iVar1 = FUN_0053e110(param_1,CONCAT31(CONCAT21(CONCAT11(*puVar3,puVar3[1]),puVar3[2]),puVar3[3])
                        );
  } while (iVar1 == 0);
  return iVar1;
}


/* FUN_0053e230 @ 0053e230  kind=lib  attributed-by=lib-island  size=80 */

void FUN_0053e230(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x88 + *(short *)(param_1 + 0x5e) * 4);
  if ((iVar1 != 0) && (iVar1 = *(int *)(iVar1 + 0x44), iVar1 != 0)) {
    iVar2 = *(int *)(iVar1 + 0x10);
    FUN_00561130(iVar1);
    if (*(int *)(*(int *)(iVar2 + 0xb4) + 0xc) == 0) {
      FUN_00541a10(iVar2);
    }
  }
  *(short *)(param_1 + 0x5e) = *(short *)(param_1 + 0x5e) + -1;
  *(undefined2 *)(param_1 + 0x42) = 0;
  *(undefined1 *)(param_1 + 0x5a) = 0;
  return;
}


/* FUN_0053e280 @ 0053e280  kind=lib  attributed-by=lib-island  size=133 */

int FUN_0053e280(int param_1)

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
    iVar5 = FUN_0053e110(param_1,CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),uVar4));
  } while (iVar5 == 0);
  return iVar5;
}


/* FUN_0053e310 @ 0053e310  kind=lib  attributed-by=lib-island  size=408 */

int FUN_0053e310(int *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  
  uVar5 = *(undefined4 *)(*param_1 + 4);
  if (1 < *(byte *)((int)param_1 + 0x5b)) {
    if (*(byte *)((int)param_1 + 0x5b) == 3) {
      return param_1[0x15];
    }
    FUN_00524410(param_1[0x14]);
    param_1[0x14] = 0;
    *(undefined1 *)((int)param_1 + 0x5b) = 0;
  }
  if (*(short *)((int)param_1 + 0x5e) < 0) {
    if (param_1[6] == 0) {
      *(undefined1 *)((int)param_1 + 0x5b) = 0;
      return 0;
    }
    iVar8 = FUN_0053a6a0(uVar5,param_1[6],param_1 + 0x22);
    if (iVar8 != 0) {
      *(undefined1 *)((int)param_1 + 0x5b) = 0;
      return iVar8;
    }
    *(undefined2 *)((int)param_1 + 0x5e) = 0;
    if ((param_1[4] == 0) != (bool)*(char *)(param_1[0x22] + 2)) {
      iVar8 = FUN_00551190();
      return iVar8;
    }
  }
  else {
    iVar8 = 1;
    if (0 < *(short *)((int)param_1 + 0x5e)) {
      piVar9 = param_1 + 0x23;
      do {
        if ((*piVar9 != 0) && (iVar6 = *(int *)(*piVar9 + 0x44), iVar6 != 0)) {
          iVar7 = *(int *)(iVar6 + 0x10);
          FUN_00561130(iVar6);
          if (*(int *)(*(int *)(iVar7 + 0xb4) + 0xc) == 0) {
            FUN_00541a10(iVar7);
          }
        }
        iVar8 = iVar8 + 1;
        piVar9 = piVar9 + 1;
      } while (iVar8 <= *(short *)((int)param_1 + 0x5e));
    }
    *(undefined2 *)((int)param_1 + 0x5e) = 0;
  }
  iVar8 = param_1[0x22];
  *(undefined2 *)(param_1 + 0x18) = 0;
  *(undefined2 *)((int)param_1 + 0x42) = 0;
  *(undefined2 *)((int)param_1 + 0x59) = 0;
  if ((*(short *)(iVar8 + 0x10) == 0) && (*(char *)(iVar8 + 3) == '\0')) {
    if (*(int *)(iVar8 + 0x48) == 1) {
      iVar8 = (uint)*(byte *)(iVar8 + 5) + *(int *)(iVar8 + 0x38);
      uVar1 = *(undefined1 *)(iVar8 + 8);
      uVar2 = *(undefined1 *)(iVar8 + 9);
      uVar3 = *(undefined1 *)(iVar8 + 10);
      uVar4 = *(undefined1 *)(iVar8 + 0xb);
      *(undefined1 *)((int)param_1 + 0x5b) = 1;
      iVar8 = FUN_0053e110(param_1,CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),uVar4));
      return iVar8;
    }
    FUN_00525a30(0xb,"database corruption at line %d of [%.10s]",0xcdbe,
                 "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
    return 0xb;
  }
  *(bool *)((int)param_1 + 0x5b) = *(short *)(iVar8 + 0x10) != 0;
  return 0;
}


/* FUN_0053e4b0 @ 0053e4b0  kind=lib  attributed-by=lib-island  size=1990 */

void FUN_0053e4b0(int *param_1,undefined4 *param_2,undefined8 *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  uint *puVar14;
  double dVar15;
  int local_68;
  undefined4 *local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int *local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined2 local_38 [2];
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined2 local_28 [2];
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  undefined8 local_10;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_18 = *param_3;
  iVar11 = *param_1;
  local_10 = param_3[1];
  local_68 = 0;
  puVar2 = (undefined4 *)param_2[0xf];
  local_5c = param_2;
  local_40 = iVar11;
  if (puVar2[0xe] != 0) {
    cVar1 = *(char *)(param_2 + 1);
    if (cVar1 == 'q') {
      pcVar6 = "UNION ALL";
    }
    else if (cVar1 == 'r') {
      pcVar6 = "EXCEPT";
    }
    else if (cVar1 == 's') {
      pcVar6 = "INTERSECT";
    }
    else {
      pcVar6 = "UNION";
    }
    FUN_00553950(param_1,"ORDER BY clause should come after %s not before",pcVar6);
    goto LAB_0053ec3c;
  }
  if (puVar2[0x12] != 0) {
    cVar1 = *(char *)(param_2 + 1);
    if (cVar1 == 'q') {
      pcVar6 = "UNION ALL";
    }
    else if (cVar1 == 'r') {
      pcVar6 = "EXCEPT";
    }
    else if (cVar1 == 's') {
      pcVar6 = "INTERSECT";
    }
    else {
      pcVar6 = "UNION";
    }
    FUN_00553950(param_1,"LIMIT clause should come after %s not before",pcVar6);
    goto LAB_0053ec3c;
  }
  iVar7 = param_1[2];
  local_44 = iVar7;
  if (iVar7 == 0) {
    iVar7 = FUN_0056c7b0(iVar11);
    param_1[2] = iVar7;
    local_44 = iVar7;
    if (iVar7 != 0) {
      FUN_0056bdc0(iVar7,0x94);
    }
  }
  if ((char)local_18 == '\t') {
    FUN_0056be90(iVar7,0x2a,local_18._4_4_,*(undefined4 *)*param_2);
    if (*(int *)(iVar7 + 4) != 0) {
      *(undefined1 *)(*(int *)(iVar7 + 4) + -0x11 + *(int *)(iVar7 + 0x1c) * 0x14) = 8;
    }
    local_18 = CONCAT71(local_18._1_7_,8);
  }
  if (*(int *)*param_2 != *(int *)*puVar2) {
    if ((*(byte *)((int)param_2 + 6) & 0x80) == 0) {
      uVar8 = FUN_00548980(*(undefined1 *)(param_2 + 1));
      FUN_00553950(param_1,
                   "SELECTs to the left and right of %s do not have the same number of result columns"
                   ,uVar8);
      iVar11 = local_40;
    }
    else {
      FUN_00553950(param_1,"all VALUES must have the same number of terms");
      iVar11 = local_40;
    }
    goto LAB_0053ec3c;
  }
  if (param_2[0xe] != 0) {
    FUN_0053ecd0(param_1,param_2,param_3);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  cVar1 = *(char *)(param_2 + 1);
  if (cVar1 == 'p') {
LAB_0053e98d:
    if ((((char)local_18 == '\x01') && (param_2[0x12] == 0)) && (param_2[0x13] == 0)) {
      local_3c = local_18._4_4_;
    }
    else {
      local_3c = param_1[0x12];
      param_1[0x12] = local_3c + 1;
      uVar8 = FUN_0056be90(iVar7,0x2a,local_3c,0);
      param_2[4] = uVar8;
      *(ushort *)(param_2[0x11] + 6) = *(ushort *)(param_2[0x11] + 6) | 8;
    }
    local_48 = (int *)param_1[0x7a];
    local_28[0] = 1;
    local_20 = 0;
    local_1c = 0;
    local_24 = local_3c;
    local_4c = FUN_005654f0(param_1,puVar2,local_28);
    iVar11 = local_40;
    if (local_4c != 0) goto LAB_0053ec3c;
    param_2[0xf] = 0;
    local_58 = param_2[0x12];
    uVar8 = param_2[0x13];
    local_28[0] = CONCAT11(local_28[0]._1_1_,(*(char *)(param_2 + 1) == 'r') + '\x01');
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    local_54 = param_1[0x7a];
    local_4c = FUN_005654f0(param_1,param_2,local_28);
    FUN_00556700(local_40,param_2[0xe]);
    local_68 = param_2[0xf];
    param_2[0xf] = puVar2;
    param_2[0xe] = 0;
    if (*(char *)(param_2 + 1) == 'p') {
      *(double *)(param_2 + 8) = *(double *)(puVar2 + 8) + *(double *)(param_2 + 8);
    }
    FUN_00555e30(local_40,param_2[0x12]);
    param_2[0x12] = local_58;
    param_2[0x13] = uVar8;
    param_2[2] = 0;
    param_2[3] = 0;
    iVar13 = local_44;
    if ((char)local_18 != '\x01') {
      if ((char)local_18 == '\x05') {
        puVar5 = (undefined4 *)param_2[0xf];
        puVar2 = param_2;
        while (puVar4 = puVar5, puVar4 != (undefined4 *)0x0) {
          puVar2 = puVar4;
          puVar5 = (undefined4 *)puVar4[0xf];
        }
        FUN_00539ac0(param_1,0,*puVar2);
      }
      uVar9 = FUN_005741e0(iVar7);
      uVar10 = FUN_005741e0(iVar7);
      FUN_00532b80(param_1,param_2,uVar9);
      FUN_0056be90(iVar7,0x48,local_3c,uVar9);
      uVar8 = *(undefined4 *)(iVar7 + 0x1c);
      FUN_00548280(param_1,param_2,(undefined4 *)*param_2,local_3c,*(undefined4 *)*param_2,0,0,
                   &local_18,uVar10,uVar9);
      iVar13 = local_44;
      FUN_00575e10(local_44,uVar10);
      iVar11 = local_3c;
      FUN_0056be90(iVar13,0x5f,local_3c,uVar8);
      FUN_00575e10(iVar13,uVar9);
      FUN_0056be90(iVar13,0x2d,iVar11,0);
    }
  }
  else if (cVar1 == 'q') {
    local_50 = 0;
    puVar2[0x12] = param_2[0x12];
    puVar2[0x13] = param_2[0x13];
    local_48 = (int *)param_1[0x7a];
    local_4c = FUN_005654f0(param_1,puVar2,&local_18);
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    iVar11 = local_40;
    if (local_4c != 0) goto LAB_0053ec3c;
    param_2[0xf] = 0;
    param_2[2] = puVar2[2];
    param_2[3] = puVar2[3];
    if (param_2[2] != 0) {
      local_50 = FUN_0056be30(iVar7,0x7a,param_2[2]);
    }
    local_54 = param_1[0x7a];
    local_4c = FUN_005654f0(param_1,param_2,&local_18);
    local_68 = param_2[0xf];
    param_2[0xf] = puVar2;
    dVar15 = *(double *)(puVar2 + 8) + *(double *)(param_2 + 8);
    *(double *)(param_2 + 8) = dVar15;
    if (((puVar2[0x12] != 0) && (iVar11 = FUN_00556530(puVar2[0x12],&local_58), iVar11 != 0)) &&
       ((double)local_58 < dVar15)) {
      *(double *)(param_2 + 8) = (double)local_58;
    }
    iVar13 = local_44;
    if (local_50 != 0) {
      FUN_00573d80(iVar7,local_50);
      iVar13 = local_44;
    }
  }
  else {
    if (cVar1 == 'r') goto LAB_0053e98d;
    local_3c = param_1[0x12];
    local_50 = local_3c + 1;
    param_1[0x12] = local_3c + 2;
    uVar8 = FUN_0056be90(iVar7,0x2a,local_3c,0);
    param_2[4] = uVar8;
    *(ushort *)(param_2[0x11] + 6) = *(ushort *)(param_2[0x11] + 6) | 8;
    local_48 = (int *)param_1[0x7a];
    local_38[0] = 1;
    local_34 = local_3c;
    local_30 = 0;
    local_2c = 0;
    local_4c = FUN_005654f0(param_1,puVar2,local_38);
    iVar11 = local_40;
    if (local_4c != 0) goto LAB_0053ec3c;
    uVar8 = FUN_0056be90(iVar7,0x2a,local_50,0);
    param_2[5] = uVar8;
    uVar8 = param_2[0x12];
    local_58 = param_2[0x13];
    local_34 = local_50;
    param_2[0xf] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    local_54 = param_1[0x7a];
    local_4c = FUN_005654f0(param_1,param_2,local_38);
    local_68 = param_2[0xf];
    param_2[0xf] = puVar2;
    if (*(double *)(puVar2 + 8) < *(double *)(param_2 + 8)) {
      *(double *)(param_2 + 8) = *(double *)(puVar2 + 8);
    }
    FUN_00555e30(local_40,param_2[0x12]);
    param_2[0x12] = uVar8;
    param_2[0x13] = local_58;
    if ((char)local_18 == '\x05') {
      puVar5 = (undefined4 *)param_2[0xf];
      puVar2 = param_2;
      while (puVar4 = puVar5, puVar4 != (undefined4 *)0x0) {
        puVar2 = puVar4;
        puVar5 = (undefined4 *)puVar4[0xf];
      }
      FUN_00539ac0(param_1,0,*puVar2);
    }
    iVar7 = FUN_005741e0(iVar7);
    local_58 = iVar7;
    uVar8 = FUN_005741e0(local_44);
    FUN_00532b80(param_1,param_2,iVar7);
    iVar11 = local_44;
    FUN_0056be90(local_44,0x48,local_3c,iVar7);
    uVar9 = FUN_0055a1f0(param_1);
    uVar10 = FUN_0056be90(iVar11,0x3f,local_3c,uVar9);
    FUN_0056bfc0(local_44,0x33,local_50,uVar8,uVar9,0);
    FUN_00563fb0(param_1,uVar9);
    iVar11 = local_58;
    FUN_00548280(param_1,param_2,(undefined4 *)*param_2,local_3c,*(undefined4 *)*param_2,0,0,
                 &local_18,uVar8,local_58);
    iVar13 = local_44;
    FUN_00575e10(local_44,uVar8);
    iVar7 = local_3c;
    FUN_0056be90(iVar13,0x5f,local_3c,uVar10);
    FUN_00575e10(iVar13,iVar11);
    FUN_0056be90(iVar13,0x2d,iVar7 + 1,0);
    FUN_0056be90(iVar13,0x2d,iVar7,0);
  }
  FUN_00534c40(param_1,*(undefined1 *)(param_2 + 1),local_48,local_54,*(char *)(param_2 + 1) != 'q')
  ;
  iVar11 = local_40;
  if ((*(byte *)((int)param_2 + 6) & 8) != 0) {
    local_54 = *(int *)*param_2;
    local_3c = FUN_005522c0(local_40,local_54 * 5 + 0x10);
    iVar11 = local_40;
    if (local_3c != 0) {
      local_50 = 0;
      *(undefined1 *)(local_3c + 4) =
           *(undefined1 *)(*(int *)(*(int *)(local_40 + 0x10) + 0xc) + 0x4d);
      piVar12 = (int *)(local_3c + 0xc);
      *(short *)(local_3c + 6) = (short)local_54;
      local_48 = piVar12;
      if (0 < local_54) {
        do {
          iVar11 = FUN_0053ec80(param_1,param_2,local_50);
          *piVar12 = iVar11;
          if (iVar11 == 0) {
            *piVar12 = *(int *)(local_40 + 8);
          }
          local_50 = local_50 + 1;
          piVar12 = piVar12 + 1;
          iVar13 = local_44;
        } while (local_50 < local_54);
      }
      *(int **)(local_3c + 8) = piVar12;
      do {
        puVar14 = local_5c + 4;
        local_48 = (int *)0x0;
        iVar11 = local_3c;
        do {
          uVar3 = *puVar14;
          if ((int)uVar3 < 0) break;
          if (uVar3 < *(uint *)(iVar13 + 0x1c)) {
            *(int *)(*(int *)(iVar13 + 4) + 8 + uVar3 * 0x14) = local_54;
            iVar11 = local_3c;
          }
          FUN_0056c320(iVar13,uVar3,iVar11,0xfffffffa);
          local_48 = (int *)((int)local_48 + 1);
          *puVar14 = 0xffffffff;
          puVar14 = puVar14 + 1;
        } while ((int)local_48 < 2);
        iVar11 = local_40;
        local_5c = (undefined4 *)local_5c[0xf];
      } while (local_5c != (undefined4 *)0x0);
      FUN_005521a0(local_40,local_3c);
    }
  }
LAB_0053ec3c:
  *(undefined4 *)(param_3 + 1) = (undefined4)local_10;
  *(undefined4 *)((int)param_3 + 0xc) = local_10._4_4_;
  if (local_68 != 0) {
    FUN_005303a0(iVar11,local_68);
    FUN_005521a0(iVar11,local_68);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0053ec80 @ 0053ec80  kind=lib  attributed-by=lib-island  size=71 */

int FUN_0053ec80(undefined4 param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  
  if ((param_2[0xf] != 0) && (iVar1 = FUN_0053ec80(param_1,param_2[0xf],param_3), iVar1 != 0)) {
    return iVar1;
  }
  iVar1 = 0;
  if (param_3 < *(int *)*param_2) {
    iVar1 = FUN_00555b70(param_1,*(undefined4 *)(((int *)*param_2)[2] + param_3 * 0x14));
  }
  return iVar1;
}


/* FUN_0053ecd0 @ 0053ecd0  kind=lib  attributed-by=lib-island  size=7342 */

void FUN_0053ecd0(int *param_1,undefined4 *param_2,char *param_3)

{
  size_t _Size;
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  void *pvVar4;
  undefined4 *puVar5;
  undefined1 *_Dst;
  int *piVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  ushort *puVar18;
  int *piVar19;
  int *piVar20;
  uint uVar21;
  char *local_8c;
  uint local_88;
  int local_84;
  char *local_80;
  undefined4 local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  undefined4 *local_68;
  int local_64;
  int local_60;
  uint local_5c;
  int local_58;
  int local_54;
  int *local_50;
  int local_4c;
  int local_48;
  void *local_44;
  int local_40;
  int local_3c;
  int *local_38;
  int *local_34;
  int *local_30;
  undefined4 *local_2c;
  undefined2 local_28 [2];
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined2 local_18 [2];
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  piVar19 = (int *)param_1[2];
  local_2c = param_2;
  local_80 = param_3;
  local_3c = *param_1;
  local_30 = param_1;
  local_7c = 0;
  local_44 = (void *)0x0;
  local_50 = piVar19;
  local_60 = FUN_005741e0(piVar19);
  local_78 = FUN_005741e0(piVar19);
  local_5c = (uint)*(byte *)(local_2c + 1);
  piVar6 = (int *)local_2c[0xe];
  local_68 = (undefined4 *)local_2c[0xf];
  local_48 = *piVar6;
  local_34 = piVar6;
  if ((local_5c != 0x71) && (uVar21 = 1, *(char *)(local_3c + 0x38) == '\0')) {
    local_6c = local_48 * 0x14;
    do {
      if (*(int *)*local_2c < (int)uVar21) break;
      iVar15 = 0;
      if (0 < local_48) {
        puVar18 = (ushort *)(piVar6[2] + 0xe);
        do {
          piVar19 = local_50;
          if (*puVar18 == uVar21) break;
          iVar15 = iVar15 + 1;
          puVar18 = puVar18 + 10;
        } while (iVar15 < local_48);
      }
      if (iVar15 == local_48) {
        _Dst = (undefined1 *)FUN_00552230(local_3c,0x2d);
        if (_Dst == (undefined1 *)0x0) {
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
        memset(_Dst,0,0x2d);
        *(undefined2 *)(_Dst + 0x1e) = 0xffff;
        *_Dst = 0x81;
        _Dst[0x2c] = 0;
        *(ushort *)(_Dst + 2) = *(ushort *)(_Dst + 2) | 0x400;
        *(undefined4 *)(_Dst + 0x14) = 1;
        *(uint *)(_Dst + 4) = uVar21;
        piVar6 = (int *)FUN_005565a0(local_30,local_34,_Dst);
        local_34 = piVar6;
        if (piVar6 != (int *)0x0) {
          local_48 = local_48 + 1;
          *(short *)(piVar6[2] + 0xe + local_6c) = (short)uVar21;
          local_6c = local_6c + 0x14;
        }
      }
      uVar21 = uVar21 + 1;
    } while (*(char *)(local_3c + 0x38) == '\0');
  }
  iVar15 = local_48;
  local_84 = FUN_00552230(local_3c,local_48 * 4);
  if (local_84 == 0) {
    local_6c = 0;
  }
  else {
    iVar16 = 0;
    if (0 < iVar15) {
      puVar18 = (ushort *)(piVar6[2] + 0xe);
      do {
        *(uint *)(local_84 + iVar16 * 4) = *puVar18 - 1;
        iVar16 = iVar16 + 1;
        puVar18 = puVar18 + 10;
        piVar19 = local_50;
      } while (iVar16 < iVar15);
    }
    local_6c = FUN_00552230(local_3c,iVar15 * 5 + 0x10);
    if (local_6c != 0) {
      *(short *)(local_6c + 6) = (short)iVar15;
      *(int *)(local_6c + 8) = local_6c + (iVar15 + 3) * 4;
      *(undefined1 *)(local_6c + 4) =
           *(undefined1 *)(*(int *)(*(int *)(local_3c + 0x10) + 0xc) + 0x4d);
      if (0 < iVar15) {
        piVar20 = (int *)(local_6c + 0xc);
        local_4c = 0;
        iVar15 = 0;
        do {
          local_40 = *(int *)(local_4c + piVar6[2]);
          local_38 = piVar20;
          if ((*(ushort *)(local_40 + 2) & 0x100) == 0) {
            iVar16 = *(int *)(local_84 + iVar15 * 4);
            if (local_2c[0xf] == 0) {
              puVar7 = (undefined4 *)0x0;
LAB_0053ef3e:
              piVar19 = local_30;
              if (iVar16 < *(int *)*local_2c) {
                puVar7 = (undefined4 *)
                         FUN_00555b70(local_30,*(undefined4 *)
                                                (((int *)*local_2c)[2] + iVar16 * 0x14));
              }
            }
            else {
              puVar7 = (undefined4 *)FUN_0053ec80(local_30,local_2c[0xf],iVar16);
              piVar19 = local_30;
              if (puVar7 == (undefined4 *)0x0) goto LAB_0053ef3e;
            }
            if (puVar7 == (undefined4 *)0x0) {
              puVar7 = *(undefined4 **)(local_3c + 8);
            }
            local_8c = (char *)*puVar7;
            if (local_8c == (char *)0x0) {
              local_88 = 0;
            }
            else {
              cVar1 = *local_8c;
              pcVar8 = local_8c;
              while (cVar1 != '\0') {
                pcVar8 = pcVar8 + 1;
                cVar1 = *pcVar8;
              }
              local_88 = (int)pcVar8 - (int)local_8c & 0x3fffffff;
            }
            iVar16 = local_40;
            if ((local_88 != 0) &&
               (iVar10 = FUN_00553bb0(*piVar19,0x5c,&local_8c,1), iVar16 = local_40, iVar10 != 0)) {
              *(int *)(iVar10 + 8) = local_40;
              *(ushort *)(iVar10 + 2) = *(ushort *)(iVar10 + 2) | 0x100;
              iVar16 = iVar10;
            }
            *(int *)(local_4c + local_34[2]) = iVar16;
          }
          else {
            puVar7 = (undefined4 *)FUN_00555b70(local_30,local_40);
            local_38 = piVar20;
          }
          *local_38 = (int)puVar7;
          iVar16 = iVar15 + 1;
          *(undefined1 *)(iVar15 + *(int *)(local_6c + 8)) =
               *(undefined1 *)(local_34[2] + 0xc + local_4c);
          piVar20 = local_38 + 1;
          local_4c = local_4c + 0x14;
          piVar19 = local_50;
          iVar15 = iVar16;
          piVar6 = local_34;
          local_38 = piVar20;
        } while (iVar16 < local_48);
      }
    }
  }
  puVar7 = local_2c;
  piVar20 = local_30;
  local_2c[0xe] = piVar6;
  uVar9 = FUN_005567e0(*local_30,piVar6,0);
  local_68[0xe] = uVar9;
  if (local_5c == 0x71) {
    local_64 = 0;
  }
  else {
    iVar16 = *(int *)*puVar7;
    local_64 = piVar20[0x10];
    iVar15 = iVar16 + 1;
    if (piVar20[0xf] < iVar15) {
      local_64 = piVar20[0x13] + 1;
      piVar20[0x13] = piVar20[0x13] + iVar15;
    }
    else {
      piVar20[0x10] = local_64 + iVar15;
      piVar20[0xf] = piVar20[0xf] - iVar15;
    }
    local_38 = (int *)piVar19[7];
    iVar15 = piVar19[8];
    local_74 = iVar16;
    if ((int)local_38 < iVar15) {
LAB_0053f0c8:
      iVar15 = piVar19[1];
      piVar19[7] = piVar19[7] + 1;
      *(undefined2 *)(iVar15 + (int)local_38 * 0x14) = 7;
      *(undefined1 *)(iVar15 + 3 + (int)local_38 * 0x14) = 0;
      *(undefined4 *)(iVar15 + 4 + (int)local_38 * 0x14) = 0;
      *(int *)(iVar15 + 8 + (int)local_38 * 0x14) = local_64;
      *(undefined4 *)(iVar15 + 0xc + (int)local_38 * 0x14) = 0;
      *(undefined4 *)(iVar15 + 0x10 + (int)local_38 * 0x14) = 0;
    }
    else {
      if (iVar15 == 0) {
        iVar15 = 0x33;
      }
      else {
        iVar15 = iVar15 * 2;
      }
      uVar21 = FUN_00552390(*piVar19,piVar19[1],iVar15 * 0x14);
      if (uVar21 != 0) {
        iVar15 = *piVar19;
        if (((iVar15 == 0) || (uVar21 < *(uint *)(iVar15 + 0x104))) ||
           (*(uint *)(iVar15 + 0x108) <= uVar21)) {
          uVar17 = (*DAT_00766608._4_4_)(uVar21);
        }
        else {
          uVar17 = (uint)*(ushort *)(iVar15 + 0xe8);
        }
        piVar19[8] = uVar17 / 0x14;
        piVar19[1] = uVar21;
        goto LAB_0053f0c8;
      }
    }
    _Size = iVar16 * 5 + 0x10;
    local_44 = (void *)FUN_00552230(local_3c,_Size);
    piVar20 = local_30;
    puVar7 = local_2c;
    if ((local_44 != (void *)0x0) &&
       (memset(local_44,0,_Size), iVar15 = local_74, piVar20 = local_30, puVar7 = local_2c,
       local_44 != (void *)0x0)) {
      *(short *)((int)local_44 + 6) = (short)iVar16;
      *(void **)((int)local_44 + 8) = (void *)((int)local_44 + (iVar16 + 3) * 4);
      *(undefined1 *)((int)local_44 + 4) =
           *(undefined1 *)(*(int *)(*(int *)(local_3c + 0x10) + 0xc) + 0x4d);
      if (0 < iVar16) {
        local_38 = (int *)((int)local_44 + 0xc);
        iVar10 = 0;
        iVar16 = 0;
        do {
          if (local_2c[0xf] == 0) {
            iVar11 = 0;
LAB_0053f17f:
            if (iVar16 < *(int *)*local_2c) {
              iVar11 = FUN_00555b70(local_30,*(undefined4 *)(((int *)*local_2c)[2] + iVar10));
            }
          }
          else {
            iVar11 = FUN_0053ec80(local_30,local_2c[0xf],iVar16);
            if (iVar11 == 0) goto LAB_0053f17f;
          }
          iVar14 = iVar16 + 1;
          *local_38 = iVar11;
          local_38 = local_38 + 1;
          iVar10 = iVar10 + 0x14;
          *(undefined1 *)(iVar16 + *(int *)((int)local_44 + 8)) = 0;
          piVar19 = local_50;
          iVar16 = iVar14;
          piVar20 = local_30;
          puVar7 = local_2c;
        } while (iVar14 < iVar15);
      }
    }
  }
  puVar7[0xf] = 0;
  FUN_00564180(piVar20,puVar7,puVar7[0xe],"ORDER");
  if (local_68[0xf] == 0) {
    FUN_00564180(piVar20,local_68,local_68[0xe],"ORDER");
  }
  FUN_00532b80(piVar20,puVar7,local_60);
  if ((puVar7[2] == 0) || (local_5c != 0x71)) {
    local_34 = (int *)0x0;
    iVar15 = 0;
  }
  else {
    local_40 = piVar20[0x13] + 1;
    local_34 = (int *)(piVar20[0x13] + 2);
    piVar20[0x13] = (int)local_34;
    if (puVar7[3] == 0) {
      local_38 = (int *)puVar7[2];
    }
    else {
      local_38 = (int *)(puVar7[3] + 1);
    }
    iVar15 = piVar19[7];
    iVar16 = piVar19[8];
    if (iVar15 < iVar16) {
LAB_0053f2a4:
      iVar16 = piVar19[1];
      piVar19[7] = piVar19[7] + 1;
      *(int **)(iVar16 + 4 + iVar15 * 0x14) = local_38;
      *(undefined2 *)(iVar16 + iVar15 * 0x14) = 0xe;
      *(undefined1 *)(iVar16 + 3 + iVar15 * 0x14) = 0;
      *(int *)(iVar16 + 8 + iVar15 * 0x14) = local_40;
      *(undefined4 *)(iVar16 + 0xc + iVar15 * 0x14) = 0;
      *(undefined4 *)(iVar16 + 0x10 + iVar15 * 0x14) = 0;
    }
    else {
      if (iVar16 == 0) {
        iVar16 = 0x33;
      }
      else {
        iVar16 = iVar16 * 2;
      }
      uVar21 = FUN_00552390(*piVar19,piVar19[1],iVar16 * 0x14);
      if (uVar21 != 0) {
        iVar16 = *piVar19;
        if (((iVar16 == 0) || (uVar21 < *(uint *)(iVar16 + 0x104))) ||
           (*(uint *)(iVar16 + 0x108) <= uVar21)) {
          uVar17 = (*DAT_00766608._4_4_)(uVar21);
        }
        else {
          uVar17 = (uint)*(ushort *)(iVar16 + 0xe8);
        }
        piVar19[8] = uVar17 / 0x14;
        piVar19[1] = uVar21;
        goto LAB_0053f2a4;
      }
    }
    iVar16 = piVar19[7];
    iVar15 = piVar19[8];
    if (iVar15 <= iVar16) {
      if (iVar15 == 0) {
        iVar15 = 0x33;
      }
      else {
        iVar15 = iVar15 * 2;
      }
      uVar21 = FUN_00552390(*piVar19,piVar19[1],iVar15 * 0x14);
      piVar20 = local_30;
      iVar15 = local_40;
      if (uVar21 == 0) goto LAB_0053f38b;
      iVar15 = *piVar19;
      if (((iVar15 == 0) || (uVar21 < *(uint *)(iVar15 + 0x104))) ||
         (*(uint *)(iVar15 + 0x108) <= uVar21)) {
        uVar17 = (*DAT_00766608._4_4_)(uVar21);
      }
      else {
        uVar17 = (uint)*(ushort *)(iVar15 + 0xe8);
      }
      piVar19[8] = uVar17 / 0x14;
      piVar19[1] = uVar21;
    }
    iVar15 = piVar19[1];
    piVar19[7] = piVar19[7] + 1;
    *(undefined2 *)(iVar15 + iVar16 * 0x14) = 0xe;
    *(undefined1 *)(iVar15 + 3 + iVar16 * 0x14) = 0;
    *(int *)(iVar15 + 4 + iVar16 * 0x14) = local_40;
    *(int **)(iVar15 + 8 + iVar16 * 0x14) = local_34;
    *(undefined4 *)(iVar15 + 0xc + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar15 + 0x10 + iVar16 * 0x14) = 0;
    piVar20 = local_30;
    iVar15 = local_40;
  }
LAB_0053f38b:
  FUN_00555e30(local_3c,local_2c[0x12]);
  local_2c[0x12] = 0;
  FUN_00555e30(local_3c,local_2c[0x13]);
  local_18[0] = 10;
  local_2c[0x13] = 0;
  piVar20[0x13] = piVar20[0x13] + 1;
  local_50 = (int *)piVar20[0x13];
  local_70 = (int)local_50 + 1;
  local_40 = (int)local_50 + 2;
  local_10 = 0;
  local_58 = (int)local_50 + 3;
  local_74 = (int)local_50 + 5;
  piVar20[0x13] = local_74;
  local_c = 0;
  local_28[0] = 10;
  local_20 = 0;
  local_1c = 0;
  local_38 = (int *)piVar19[7];
  iVar16 = piVar19[8];
  local_24 = local_40;
  local_14 = (int)local_50;
  if ((int)local_38 < iVar16) {
LAB_0053f483:
    iVar16 = piVar19[1];
    piVar19[7] = piVar19[7] + 1;
    *(undefined2 *)(iVar16 + (int)local_38 * 0x14) = 1;
    *(undefined1 *)(iVar16 + 3 + (int)local_38 * 0x14) = 0;
    *(undefined4 *)(iVar16 + 4 + (int)local_38 * 0x14) = 0;
    *(undefined4 *)(iVar16 + 8 + (int)local_38 * 0x14) = 0;
    *(undefined4 *)(iVar16 + 0xc + (int)local_38 * 0x14) = 0;
    *(undefined4 *)(iVar16 + 0x10 + (int)local_38 * 0x14) = 0;
  }
  else {
    if (iVar16 == 0) {
      iVar16 = 0x33;
    }
    else {
      iVar16 = iVar16 * 2;
    }
    uVar21 = FUN_00552390(*piVar19,piVar19[1],iVar16 * 0x14);
    if (uVar21 != 0) {
      iVar16 = *piVar19;
      if (((iVar16 == 0) || (uVar21 < *(uint *)(iVar16 + 0x104))) ||
         (*(uint *)(iVar16 + 0x108) <= uVar21)) {
        uVar17 = (*DAT_00766608._4_4_)(uVar21);
      }
      else {
        uVar17 = (uint)*(ushort *)(iVar16 + 0xe8);
      }
      piVar19[1] = uVar21;
      piVar19[8] = uVar17 / 0x14;
      goto LAB_0053f483;
    }
    local_38 = (int *)0x1;
  }
  iVar16 = piVar19[7];
  local_68[2] = iVar15;
  local_88 = local_30[0x7a];
  FUN_005654f0(local_30,local_68,local_18);
  iVar15 = piVar19[7];
  iVar10 = piVar19[8];
  if (iVar15 < iVar10) {
LAB_0053f558:
    iVar10 = piVar19[1];
    piVar19[7] = piVar19[7] + 1;
    *(undefined2 *)(iVar10 + iVar15 * 0x14) = 7;
    *(undefined1 *)(iVar10 + 3 + iVar15 * 0x14) = 0;
    *(undefined4 *)(iVar10 + 4 + iVar15 * 0x14) = 1;
    *(int *)(iVar10 + 8 + iVar15 * 0x14) = local_70;
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
    uVar21 = FUN_00552390(*piVar19,piVar19[1],iVar10 * 0x14);
    if (uVar21 != 0) {
      iVar10 = *piVar19;
      if (((iVar10 == 0) || (uVar21 < *(uint *)(iVar10 + 0x104))) ||
         (*(uint *)(iVar10 + 0x108) <= uVar21)) {
        uVar17 = (*DAT_00766608._4_4_)(uVar21);
      }
      else {
        uVar17 = (uint)*(ushort *)(iVar10 + 0xe8);
      }
      piVar19[8] = uVar17 / 0x14;
      piVar19[1] = uVar21;
      goto LAB_0053f558;
    }
  }
  iVar15 = piVar19[7];
  iVar10 = piVar19[8];
  if (iVar15 < iVar10) {
LAB_0053f5f7:
    iVar10 = piVar19[1];
    piVar19[7] = piVar19[7] + 1;
    *(undefined2 *)(iVar10 + iVar15 * 0x14) = 4;
    *(undefined1 *)(iVar10 + 3 + iVar15 * 0x14) = 0;
    *(int **)(iVar10 + 4 + iVar15 * 0x14) = local_50;
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
    uVar21 = FUN_00552390(*piVar19,piVar19[1],iVar10 * 0x14);
    if (uVar21 != 0) {
      iVar10 = *piVar19;
      if (((iVar10 == 0) || (uVar21 < *(uint *)(iVar10 + 0x104))) ||
         (*(uint *)(iVar10 + 0x108) <= uVar21)) {
        uVar17 = (*DAT_00766608._4_4_)(uVar21);
      }
      else {
        uVar17 = (uint)*(ushort *)(iVar10 + 0xe8);
      }
      piVar19[8] = uVar17 / 0x14;
      piVar19[1] = uVar21;
      goto LAB_0053f5f7;
    }
  }
  iVar15 = piVar19[7];
  uVar9 = local_2c[2];
  uVar2 = local_2c[3];
  local_2c[2] = local_34;
  local_2c[3] = 0;
  iVar10 = local_30[0x7a];
  FUN_005654f0(local_30,local_2c,local_28);
  local_2c[2] = uVar9;
  local_2c[3] = uVar2;
  iVar11 = piVar19[7];
  iVar14 = piVar19[8];
  if (iVar11 < iVar14) {
LAB_0053f6db:
    iVar14 = piVar19[1];
    piVar19[7] = piVar19[7] + 1;
    *(undefined2 *)(iVar14 + iVar11 * 0x14) = 7;
    *(undefined1 *)(iVar14 + 3 + iVar11 * 0x14) = 0;
    *(undefined4 *)(iVar14 + 4 + iVar11 * 0x14) = 1;
    *(int *)(iVar14 + 8 + iVar11 * 0x14) = local_58;
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
    uVar21 = FUN_00552390(*piVar19,piVar19[1],iVar14 * 0x14);
    if (uVar21 != 0) {
      iVar14 = *piVar19;
      if (((iVar14 == 0) || (uVar21 < *(uint *)(iVar14 + 0x104))) ||
         (*(uint *)(iVar14 + 0x108) <= uVar21)) {
        uVar17 = (*DAT_00766608._4_4_)(uVar21);
      }
      else {
        uVar17 = (uint)*(ushort *)(iVar14 + 0xe8);
      }
      piVar19[8] = uVar17 / 0x14;
      piVar19[1] = uVar21;
      goto LAB_0053f6db;
    }
  }
  iVar11 = piVar19[7];
  iVar14 = piVar19[8];
  if (iVar11 < iVar14) {
LAB_0053f77a:
    iVar14 = piVar19[1];
    piVar19[7] = piVar19[7] + 1;
    *(undefined2 *)(iVar14 + iVar11 * 0x14) = 4;
    *(undefined1 *)(iVar14 + 3 + iVar11 * 0x14) = 0;
    *(int *)(iVar14 + 4 + iVar11 * 0x14) = local_40;
    *(undefined4 *)(iVar14 + 8 + iVar11 * 0x14) = 0;
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
    uVar21 = FUN_00552390(*piVar19,piVar19[1],iVar14 * 0x14);
    if (uVar21 != 0) {
      iVar14 = *piVar19;
      if (((iVar14 == 0) || (uVar21 < *(uint *)(iVar14 + 0x104))) ||
         (*(uint *)(iVar14 + 0x108) <= uVar21)) {
        uVar17 = (*DAT_00766608._4_4_)(uVar21);
      }
      else {
        uVar17 = (uint)*(ushort *)(iVar14 + 0xe8);
      }
      piVar19[8] = uVar17 / 0x14;
      piVar19[1] = uVar21;
      goto LAB_0053f77a;
    }
  }
  piVar6 = local_30;
  pvVar4 = local_44;
  local_34 = (int *)FUN_00539da0(local_30,local_2c,local_18,local_80,local_58 + 1,local_64,local_44,
                                 0xfffffff0,local_60);
  if ((local_5c == 0x71) || (local_5c == 0x70)) {
    local_7c = FUN_00539da0(piVar6,local_2c,local_28,local_80,local_74,local_64,pvVar4,0xffffffef,
                            local_60);
  }
  if ((local_5c == 0x72) || (local_5c == 0x73)) {
    iVar11 = piVar19[7];
    iVar14 = piVar19[8];
    local_54 = iVar11;
    if (iVar11 < iVar14) {
LAB_0053fb35:
      iVar14 = piVar19[1];
      piVar19[7] = piVar19[7] + 1;
      *(undefined2 *)(iVar14 + iVar11 * 0x14) = 1;
      *(undefined1 *)(iVar14 + 3 + iVar11 * 0x14) = 0;
      *(undefined4 *)(iVar14 + 4 + iVar11 * 0x14) = 0;
      *(int *)(iVar14 + 8 + iVar11 * 0x14) = local_60;
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
      uVar21 = FUN_00552390(*piVar19,piVar19[1],iVar14 * 0x14);
      if (uVar21 != 0) {
        iVar14 = *piVar19;
        if (((iVar14 == 0) || (uVar21 < *(uint *)(iVar14 + 0x104))) ||
           (*(uint *)(iVar14 + 0x108) <= uVar21)) {
          uVar17 = (*DAT_00766608._4_4_)(uVar21);
        }
        else {
          uVar17 = (uint)*(ushort *)(iVar14 + 0xe8);
        }
        piVar19[8] = uVar17 / 0x14;
        piVar19[1] = uVar21;
        goto LAB_0053fb35;
      }
      local_54 = 1;
    }
  }
  else {
    local_54 = piVar19[7];
    iVar11 = piVar19[8];
    if (local_54 < iVar11) {
LAB_0053f891:
      iVar11 = piVar19[1];
      piVar19[7] = piVar19[7] + 1;
      *(int *)(iVar11 + 4 + local_54 * 0x14) = local_58;
      *(undefined2 *)(iVar11 + local_54 * 0x14) = 0x1b;
      *(undefined1 *)(iVar11 + 3 + local_54 * 0x14) = 0;
      *(int *)(iVar11 + 8 + local_54 * 0x14) = local_60;
      *(undefined4 *)(iVar11 + 0xc + local_54 * 0x14) = 0;
      *(undefined4 *)(iVar11 + 0x10 + local_54 * 0x14) = 0;
    }
    else {
      if (iVar11 == 0) {
        iVar11 = 0x33;
      }
      else {
        iVar11 = iVar11 * 2;
      }
      uVar21 = FUN_00552390(*piVar19,piVar19[1],iVar11 * 0x14);
      if (uVar21 != 0) {
        iVar11 = *piVar19;
        if (((iVar11 == 0) || (uVar21 < *(uint *)(iVar11 + 0x104))) ||
           (*(uint *)(iVar11 + 0x108) <= uVar21)) {
          uVar17 = (*DAT_00766608._4_4_)(uVar21);
        }
        else {
          uVar17 = (uint)*(ushort *)(iVar11 + 0xe8);
        }
        piVar19[8] = uVar17 / 0x14;
        piVar19[1] = uVar21;
        goto LAB_0053f891;
      }
      local_54 = 1;
    }
    iVar11 = piVar19[7];
    iVar14 = piVar19[8];
    if (iVar11 < iVar14) {
LAB_0053f938:
      iVar14 = piVar19[1];
      piVar19[7] = piVar19[7] + 1;
      *(int *)(iVar14 + 4 + iVar11 * 0x14) = local_74;
      *(undefined2 *)(iVar14 + iVar11 * 0x14) = 2;
      *(undefined1 *)(iVar14 + 3 + iVar11 * 0x14) = 0;
      *(undefined4 *)(iVar14 + 8 + iVar11 * 0x14) = local_7c;
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
      uVar21 = FUN_00552390(*piVar19,piVar19[1],iVar14 * 0x14);
      if (uVar21 != 0) {
        iVar14 = *piVar19;
        if (((iVar14 == 0) || (uVar21 < *(uint *)(iVar14 + 0x104))) ||
           (*(uint *)(iVar14 + 0x108) <= uVar21)) {
          uVar17 = (*DAT_00766608._4_4_)(uVar21);
        }
        else {
          uVar17 = (uint)*(ushort *)(iVar14 + 0xe8);
        }
        piVar19[8] = uVar17 / 0x14;
        piVar19[1] = uVar21;
        goto LAB_0053f938;
      }
    }
    iVar11 = piVar19[7];
    iVar14 = piVar19[8];
    if (iVar11 < iVar14) {
LAB_0053f9d6:
      iVar14 = piVar19[1];
      piVar19[7] = piVar19[7] + 1;
      *(undefined2 *)(iVar14 + iVar11 * 0x14) = 4;
      *(undefined1 *)(iVar14 + 3 + iVar11 * 0x14) = 0;
      *(int *)(iVar14 + 4 + iVar11 * 0x14) = local_40;
      *(undefined4 *)(iVar14 + 8 + iVar11 * 0x14) = 0;
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
      uVar21 = FUN_00552390(*piVar19,piVar19[1],iVar14 * 0x14);
      if (uVar21 != 0) {
        iVar14 = *piVar19;
        if (((iVar14 == 0) || (uVar21 < *(uint *)(iVar14 + 0x104))) ||
           (*(uint *)(iVar14 + 0x108) <= uVar21)) {
          uVar17 = (*DAT_00766608._4_4_)(uVar21);
        }
        else {
          uVar17 = (uint)*(ushort *)(iVar14 + 0xe8);
        }
        piVar19[8] = uVar17 / 0x14;
        piVar19[1] = uVar21;
        goto LAB_0053f9d6;
      }
    }
    iVar11 = piVar19[7];
    iVar14 = piVar19[8];
    if (iVar11 < iVar14) {
LAB_0053fa75:
      iVar14 = piVar19[1];
      piVar19[7] = piVar19[7] + 1;
      *(undefined2 *)(iVar14 + iVar11 * 0x14) = 1;
      *(undefined1 *)(iVar14 + 3 + iVar11 * 0x14) = 0;
      *(undefined4 *)(iVar14 + 4 + iVar11 * 0x14) = 0;
      *(int *)(iVar14 + 8 + iVar11 * 0x14) = local_54;
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
      uVar21 = FUN_00552390(*piVar19,piVar19[1],iVar14 * 0x14);
      if (uVar21 != 0) {
        iVar14 = *piVar19;
        if (((iVar14 == 0) || (uVar21 < *(uint *)(iVar14 + 0x104))) ||
           (*(uint *)(iVar14 + 0x108) <= uVar21)) {
          uVar17 = (*DAT_00766608._4_4_)(uVar21);
        }
        else {
          uVar17 = (uint)*(ushort *)(iVar14 + 0xe8);
        }
        piVar19[8] = uVar17 / 0x14;
        piVar19[1] = uVar21;
        goto LAB_0053fa75;
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
    local_4c = piVar19[7];
    iVar11 = piVar19[8];
    if (local_4c < iVar11) {
LAB_0053fc17:
      iVar11 = piVar19[1];
      piVar19[7] = piVar19[7] + 1;
      *(int *)(iVar11 + 4 + local_4c * 0x14) = local_70;
      *(undefined2 *)(iVar11 + local_4c * 0x14) = 0x1b;
      *(undefined1 *)(iVar11 + 3 + local_4c * 0x14) = 0;
      *(int *)(iVar11 + 8 + local_4c * 0x14) = local_60;
      *(undefined4 *)(iVar11 + 0xc + local_4c * 0x14) = 0;
      *(undefined4 *)(iVar11 + 0x10 + local_4c * 0x14) = 0;
    }
    else {
      if (iVar11 == 0) {
        iVar11 = 0x33;
      }
      else {
        iVar11 = iVar11 * 2;
      }
      uVar21 = FUN_00552390(*piVar19,piVar19[1],iVar11 * 0x14);
      if (uVar21 != 0) {
        iVar11 = *piVar19;
        if (((iVar11 == 0) || (uVar21 < *(uint *)(iVar11 + 0x104))) ||
           (*(uint *)(iVar11 + 0x108) <= uVar21)) {
          uVar17 = (*DAT_00766608._4_4_)(uVar21);
        }
        else {
          uVar17 = (uint)*(ushort *)(iVar11 + 0xe8);
        }
        piVar19[8] = uVar17 / 0x14;
        piVar19[1] = uVar21;
        goto LAB_0053fc17;
      }
      local_4c = 1;
    }
    iVar11 = piVar19[7];
    iVar14 = piVar19[8];
    if (iVar11 < iVar14) {
LAB_0053fcbe:
      piVar19[7] = piVar19[7] + 1;
      iVar14 = piVar19[1];
      *(int *)(iVar14 + 4 + iVar11 * 0x14) = local_58 + 1;
      *(undefined2 *)(iVar14 + iVar11 * 0x14) = 2;
      *(undefined1 *)(iVar14 + 3 + iVar11 * 0x14) = 0;
      *(int **)(iVar14 + 8 + iVar11 * 0x14) = local_34;
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
      uVar21 = FUN_00552390(*piVar19,piVar19[1],iVar14 * 0x14);
      if (uVar21 != 0) {
        iVar14 = *piVar19;
        if (((iVar14 == 0) || (uVar21 < *(uint *)(iVar14 + 0x104))) ||
           (*(uint *)(iVar14 + 0x108) <= uVar21)) {
          uVar17 = (*DAT_00766608._4_4_)(uVar21);
        }
        else {
          uVar17 = (uint)*(ushort *)(iVar14 + 0xe8);
        }
        piVar19[8] = uVar17 / 0x14;
        piVar19[1] = uVar21;
        goto LAB_0053fcbe;
      }
    }
    iVar11 = piVar19[7];
    iVar14 = piVar19[8];
    if (iVar11 < iVar14) {
LAB_0053fd5d:
      iVar14 = piVar19[1];
      piVar19[7] = piVar19[7] + 1;
      *(undefined2 *)(iVar14 + iVar11 * 0x14) = 4;
      *(undefined1 *)(iVar14 + 3 + iVar11 * 0x14) = 0;
      *(int **)(iVar14 + 4 + iVar11 * 0x14) = local_50;
      *(undefined4 *)(iVar14 + 8 + iVar11 * 0x14) = 0;
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
      uVar21 = FUN_00552390(*piVar19,piVar19[1],iVar14 * 0x14);
      if (uVar21 != 0) {
        iVar14 = *piVar19;
        if (((iVar14 == 0) || (uVar21 < *(uint *)(iVar14 + 0x104))) ||
           (*(uint *)(iVar14 + 0x108) <= uVar21)) {
          uVar17 = (*DAT_00766608._4_4_)(uVar21);
        }
        else {
          uVar17 = (uint)*(ushort *)(iVar14 + 0xe8);
        }
        piVar19[8] = uVar17 / 0x14;
        piVar19[1] = uVar21;
        goto LAB_0053fd5d;
      }
    }
    iVar11 = piVar19[7];
    iVar14 = piVar19[8];
    if (iVar14 <= iVar11) {
      if (iVar14 == 0) {
        iVar14 = 0x33;
      }
      else {
        iVar14 = iVar14 * 2;
      }
      uVar21 = FUN_00552390(*piVar19,piVar19[1],iVar14 * 0x14);
      if (uVar21 == 0) goto LAB_0053fe2f;
      iVar14 = *piVar19;
      if (((iVar14 == 0) || (uVar21 < *(uint *)(iVar14 + 0x104))) ||
         (*(uint *)(iVar14 + 0x108) <= uVar21)) {
        uVar17 = (*DAT_00766608._4_4_)(uVar21);
      }
      else {
        uVar17 = (uint)*(ushort *)(iVar14 + 0xe8);
      }
      piVar19[8] = uVar17 / 0x14;
      piVar19[1] = uVar21;
    }
    iVar14 = piVar19[1];
    piVar19[7] = piVar19[7] + 1;
    *(undefined2 *)(iVar14 + iVar11 * 0x14) = 1;
    *(undefined1 *)(iVar14 + 3 + iVar11 * 0x14) = 0;
    *(undefined4 *)(iVar14 + 4 + iVar11 * 0x14) = 0;
    *(int *)(iVar14 + 8 + iVar11 * 0x14) = local_4c;
    *(undefined4 *)(iVar14 + 0xc + iVar11 * 0x14) = 0;
    *(undefined4 *)(iVar14 + 0x10 + iVar11 * 0x14) = 0;
  }
LAB_0053fe2f:
  local_44 = (void *)piVar19[7];
  iVar11 = piVar19[8];
  if ((int)local_44 < iVar11) {
LAB_0053fea5:
    piVar19[7] = piVar19[7] + 1;
    iVar11 = piVar19[1];
    *(int *)(iVar11 + 4 + (int)local_44 * 0x14) = local_58 + 1;
    *(undefined2 *)(iVar11 + (int)local_44 * 0x14) = 2;
    *(undefined1 *)(iVar11 + 3 + (int)local_44 * 0x14) = 0;
    *(int **)(iVar11 + 8 + (int)local_44 * 0x14) = local_34;
    *(undefined4 *)(iVar11 + 0xc + (int)local_44 * 0x14) = 0;
    *(undefined4 *)(iVar11 + 0x10 + (int)local_44 * 0x14) = 0;
  }
  else {
    if (iVar11 == 0) {
      iVar11 = 0x33;
    }
    else {
      iVar11 = iVar11 * 2;
    }
    uVar21 = FUN_00552390(*piVar19,piVar19[1],iVar11 * 0x14);
    if (uVar21 != 0) {
      iVar11 = *piVar19;
      if (((iVar11 == 0) || (uVar21 < *(uint *)(iVar11 + 0x104))) ||
         (*(uint *)(iVar11 + 0x108) <= uVar21)) {
        uVar17 = (*DAT_00766608._4_4_)(uVar21);
      }
      else {
        uVar17 = (uint)*(ushort *)(iVar11 + 0xe8);
      }
      piVar19[1] = uVar21;
      piVar19[8] = uVar17 / 0x14;
      goto LAB_0053fea5;
    }
    local_44 = (void *)0x1;
  }
  iVar11 = piVar19[7];
  iVar14 = piVar19[8];
  if (iVar11 < iVar14) {
LAB_0053ff4d:
    iVar14 = piVar19[1];
    piVar19[7] = piVar19[7] + 1;
    *(undefined2 *)(iVar14 + iVar11 * 0x14) = 4;
    *(undefined1 *)(iVar14 + 3 + iVar11 * 0x14) = 0;
    *(int **)(iVar14 + 4 + iVar11 * 0x14) = local_50;
    *(undefined4 *)(iVar14 + 8 + iVar11 * 0x14) = 0;
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
    uVar21 = FUN_00552390(*piVar19,piVar19[1],iVar14 * 0x14);
    if (uVar21 != 0) {
      iVar14 = *piVar19;
      if (((iVar14 == 0) || (uVar21 < *(uint *)(iVar14 + 0x104))) ||
         (*(uint *)(iVar14 + 0x108) <= uVar21)) {
        uVar17 = (*DAT_00766608._4_4_)(uVar21);
      }
      else {
        uVar17 = (uint)*(ushort *)(iVar14 + 0xe8);
      }
      piVar19[8] = uVar17 / 0x14;
      piVar19[1] = uVar21;
      goto LAB_0053ff4d;
    }
  }
  iVar11 = piVar19[7];
  iVar14 = piVar19[8];
  if (iVar11 < iVar14) {
LAB_0053ffec:
    iVar14 = piVar19[1];
    piVar19[7] = piVar19[7] + 1;
    *(int *)(iVar14 + 4 + iVar11 * 0x14) = local_70;
    *(undefined2 *)(iVar14 + iVar11 * 0x14) = 0x1b;
    *(undefined1 *)(iVar14 + 3 + iVar11 * 0x14) = 0;
    *(int *)(iVar14 + 8 + iVar11 * 0x14) = local_54;
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
    uVar21 = FUN_00552390(*piVar19,piVar19[1],iVar14 * 0x14);
    if (uVar21 != 0) {
      iVar14 = *piVar19;
      if (((iVar14 == 0) || (uVar21 < *(uint *)(iVar14 + 0x104))) ||
         (*(uint *)(iVar14 + 0x108) <= uVar21)) {
        uVar17 = (*DAT_00766608._4_4_)(uVar21);
      }
      else {
        uVar17 = (uint)*(ushort *)(iVar14 + 0xe8);
      }
      piVar19[8] = uVar17 / 0x14;
      piVar19[1] = uVar21;
      goto LAB_0053ffec;
    }
  }
  iVar11 = piVar19[7];
  iVar14 = piVar19[8];
  if (iVar11 < iVar14) {
LAB_0054008a:
    iVar14 = piVar19[1];
    piVar19[7] = piVar19[7] + 1;
    *(undefined2 *)(iVar14 + iVar11 * 0x14) = 1;
    *(undefined1 *)(iVar14 + 3 + iVar11 * 0x14) = 0;
    *(undefined4 *)(iVar14 + 4 + iVar11 * 0x14) = 0;
    *(int *)(iVar14 + 8 + iVar11 * 0x14) = local_78;
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
    uVar21 = FUN_00552390(*piVar19,piVar19[1],iVar14 * 0x14);
    if (uVar21 != 0) {
      iVar14 = *piVar19;
      if (((iVar14 == 0) || (uVar21 < *(uint *)(iVar14 + 0x104))) ||
         (*(uint *)(iVar14 + 0x108) <= uVar21)) {
        uVar17 = (*DAT_00766608._4_4_)(uVar21);
      }
      else {
        uVar17 = (uint)*(ushort *)(iVar14 + 0xe8);
      }
      piVar19[8] = uVar17 / 0x14;
      piVar19[1] = uVar21;
      goto LAB_0054008a;
    }
  }
  if (local_5c == 0x71) {
    local_34 = local_44;
  }
  else if (local_5c == 0x73) {
    local_34 = local_44;
    local_44 = (void *)((int)local_44 + 1);
  }
  else {
    local_34 = (int *)piVar19[7];
    iVar11 = piVar19[8];
    if ((int)local_34 < iVar11) {
LAB_0054015a:
      iVar11 = piVar19[1];
      piVar19[7] = piVar19[7] + 1;
      *(undefined2 *)(iVar11 + (int)local_34 * 0x14) = 4;
      *(undefined1 *)(iVar11 + 3 + (int)local_34 * 0x14) = 0;
      *(int **)(iVar11 + 4 + (int)local_34 * 0x14) = local_50;
      *(undefined4 *)(iVar11 + 8 + (int)local_34 * 0x14) = 0;
      *(undefined4 *)(iVar11 + 0xc + (int)local_34 * 0x14) = 0;
      *(undefined4 *)(iVar11 + 0x10 + (int)local_34 * 0x14) = 0;
    }
    else {
      if (iVar11 == 0) {
        iVar11 = 0x33;
      }
      else {
        iVar11 = iVar11 * 2;
      }
      uVar21 = FUN_00552390(*piVar19,piVar19[1],iVar11 * 0x14);
      if (uVar21 != 0) {
        iVar11 = *piVar19;
        if (((iVar11 == 0) || (uVar21 < *(uint *)(iVar11 + 0x104))) ||
           (*(uint *)(iVar11 + 0x108) <= uVar21)) {
          uVar17 = (*DAT_00766608._4_4_)(uVar21);
        }
        else {
          uVar17 = (uint)*(ushort *)(iVar11 + 0xe8);
        }
        piVar19[8] = uVar17 / 0x14;
        piVar19[1] = uVar21;
        goto LAB_0054015a;
      }
      local_34 = (int *)0x1;
    }
    iVar11 = piVar19[7];
    iVar14 = piVar19[8];
    if (iVar11 < iVar14) {
LAB_00540202:
      iVar14 = piVar19[1];
      piVar19[7] = piVar19[7] + 1;
      *(int *)(iVar14 + 4 + iVar11 * 0x14) = local_70;
      *(undefined2 *)(iVar14 + iVar11 * 0x14) = 0x1b;
      *(undefined1 *)(iVar14 + 3 + iVar11 * 0x14) = 0;
      *(int *)(iVar14 + 8 + iVar11 * 0x14) = local_54;
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
      uVar21 = FUN_00552390(*piVar19,piVar19[1],iVar14 * 0x14);
      if (uVar21 != 0) {
        iVar14 = *piVar19;
        if (((iVar14 == 0) || (uVar21 < *(uint *)(iVar14 + 0x104))) ||
           (*(uint *)(iVar14 + 0x108) <= uVar21)) {
          uVar17 = (*DAT_00766608._4_4_)(uVar21);
        }
        else {
          uVar17 = (uint)*(ushort *)(iVar14 + 0xe8);
        }
        piVar19[8] = uVar17 / 0x14;
        piVar19[1] = uVar21;
        goto LAB_00540202;
      }
    }
    iVar11 = piVar19[7];
    iVar14 = piVar19[8];
    if (iVar14 <= iVar11) {
      if (iVar14 == 0) {
        iVar14 = 0x33;
      }
      else {
        iVar14 = iVar14 * 2;
      }
      uVar21 = FUN_00552390(*piVar19,piVar19[1],iVar14 * 0x14);
      if (uVar21 == 0) goto LAB_005402d3;
      iVar14 = *piVar19;
      if (((iVar14 == 0) || (uVar21 < *(uint *)(iVar14 + 0x104))) ||
         (*(uint *)(iVar14 + 0x108) <= uVar21)) {
        uVar17 = (*DAT_00766608._4_4_)(uVar21);
      }
      else {
        uVar17 = (uint)*(ushort *)(iVar14 + 0xe8);
      }
      piVar19[8] = uVar17 / 0x14;
      piVar19[1] = uVar21;
    }
    iVar14 = piVar19[1];
    piVar19[7] = piVar19[7] + 1;
    *(undefined2 *)(iVar14 + iVar11 * 0x14) = 1;
    *(undefined1 *)(iVar14 + 3 + iVar11 * 0x14) = 0;
    *(undefined4 *)(iVar14 + 4 + iVar11 * 0x14) = 0;
    *(int *)(iVar14 + 8 + iVar11 * 0x14) = local_78;
    *(undefined4 *)(iVar14 + 0xc + iVar11 * 0x14) = 0;
    *(undefined4 *)(iVar14 + 0x10 + iVar11 * 0x14) = 0;
  }
LAB_005402d3:
  iVar11 = piVar19[7];
  if ((local_5c == 0x71) || (local_5c == 0x70)) {
    iVar14 = piVar19[8];
    if (iVar14 <= iVar11) {
      if (iVar14 == 0) {
        iVar14 = 0x33;
      }
      else {
        iVar14 = iVar14 * 2;
      }
      uVar21 = FUN_00552390(*piVar19,piVar19[1],iVar14 * 0x14);
      if (uVar21 == 0) goto LAB_00540388;
      iVar14 = *piVar19;
      if (((iVar14 == 0) || (uVar21 < *(uint *)(iVar14 + 0x104))) ||
         (*(uint *)(iVar14 + 0x108) <= uVar21)) {
        uVar17 = (*DAT_00766608._4_4_)(uVar21);
      }
      else {
        uVar17 = (uint)*(ushort *)(iVar14 + 0xe8);
      }
      piVar19[8] = uVar17 / 0x14;
      piVar19[1] = uVar21;
    }
    iVar14 = piVar19[1];
    piVar19[7] = piVar19[7] + 1;
    *(int *)(iVar14 + 4 + iVar11 * 0x14) = local_74;
    *(undefined2 *)(iVar14 + iVar11 * 0x14) = 2;
    *(undefined1 *)(iVar14 + 3 + iVar11 * 0x14) = 0;
    *(undefined4 *)(iVar14 + 8 + iVar11 * 0x14) = local_7c;
    *(undefined4 *)(iVar14 + 0xc + iVar11 * 0x14) = 0;
    *(undefined4 *)(iVar14 + 0x10 + iVar11 * 0x14) = 0;
  }
LAB_00540388:
  iVar14 = piVar19[7];
  iVar12 = piVar19[8];
  if (iVar14 < iVar12) {
LAB_005403f4:
    iVar12 = piVar19[1];
    piVar19[7] = piVar19[7] + 1;
    *(undefined2 *)(iVar12 + iVar14 * 0x14) = 4;
    *(undefined1 *)(iVar12 + 3 + iVar14 * 0x14) = 0;
    *(int *)(iVar12 + 4 + iVar14 * 0x14) = local_40;
    *(undefined4 *)(iVar12 + 8 + iVar14 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 0xc + iVar14 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 0x10 + iVar14 * 0x14) = 0;
  }
  else {
    if (iVar12 == 0) {
      iVar12 = 0x33;
    }
    else {
      iVar12 = iVar12 * 2;
    }
    uVar21 = FUN_00552390(*piVar19,piVar19[1],iVar12 * 0x14);
    if (uVar21 != 0) {
      iVar12 = *piVar19;
      if (((iVar12 == 0) || (uVar21 < *(uint *)(iVar12 + 0x104))) ||
         (*(uint *)(iVar12 + 0x108) <= uVar21)) {
        uVar17 = (*DAT_00766608._4_4_)(uVar21);
      }
      else {
        uVar17 = (uint)*(ushort *)(iVar12 + 0xe8);
      }
      piVar19[8] = uVar17 / 0x14;
      piVar19[1] = uVar21;
      goto LAB_005403f4;
    }
  }
  iVar14 = piVar19[7];
  iVar12 = piVar19[8];
  if (iVar14 < iVar12) {
LAB_00540493:
    iVar12 = piVar19[1];
    piVar19[7] = piVar19[7] + 1;
    *(int *)(iVar12 + 4 + iVar14 * 0x14) = local_58;
    *(undefined2 *)(iVar12 + iVar14 * 0x14) = 0x1b;
    *(undefined1 *)(iVar12 + 3 + iVar14 * 0x14) = 0;
    *(int *)(iVar12 + 8 + iVar14 * 0x14) = local_4c;
    *(undefined4 *)(iVar12 + 0xc + iVar14 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 0x10 + iVar14 * 0x14) = 0;
  }
  else {
    if (iVar12 == 0) {
      iVar12 = 0x33;
    }
    else {
      iVar12 = iVar12 * 2;
    }
    uVar21 = FUN_00552390(*piVar19,piVar19[1],iVar12 * 0x14);
    if (uVar21 != 0) {
      iVar12 = *piVar19;
      if (((iVar12 == 0) || (uVar21 < *(uint *)(iVar12 + 0x104))) ||
         (*(uint *)(iVar12 + 0x108) <= uVar21)) {
        uVar17 = (*DAT_00766608._4_4_)(uVar21);
      }
      else {
        uVar17 = (uint)*(ushort *)(iVar12 + 0xe8);
      }
      piVar19[8] = uVar17 / 0x14;
      piVar19[1] = uVar21;
      goto LAB_00540493;
    }
  }
  iVar14 = piVar19[7];
  iVar12 = piVar19[8];
  if (iVar14 < iVar12) {
LAB_00540531:
    iVar12 = piVar19[1];
    piVar19[7] = piVar19[7] + 1;
    *(undefined2 *)(iVar12 + iVar14 * 0x14) = 1;
    *(undefined1 *)(iVar12 + 3 + iVar14 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 4 + iVar14 * 0x14) = 0;
    *(int *)(iVar12 + 8 + iVar14 * 0x14) = local_78;
    *(undefined4 *)(iVar12 + 0xc + iVar14 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 0x10 + iVar14 * 0x14) = 0;
  }
  else {
    if (iVar12 == 0) {
      iVar12 = 0x33;
    }
    else {
      iVar12 = iVar12 * 2;
    }
    uVar21 = FUN_00552390(*piVar19,piVar19[1],iVar12 * 0x14);
    if (uVar21 != 0) {
      iVar12 = *piVar19;
      if (((iVar12 == 0) || (uVar21 < *(uint *)(iVar12 + 0x104))) ||
         (*(uint *)(iVar12 + 0x108) <= uVar21)) {
        uVar17 = (*DAT_00766608._4_4_)(uVar21);
      }
      else {
        uVar17 = (uint)*(ushort *)(iVar12 + 0xe8);
      }
      piVar19[8] = uVar17 / 0x14;
      piVar19[1] = uVar21;
      goto LAB_00540531;
    }
  }
  if ((-1 < (int)local_38) && (local_38 < (uint)piVar19[7])) {
    *(int *)(piVar19[1] + 8 + (int)local_38 * 0x14) = piVar19[7];
  }
  iVar14 = piVar19[7];
  iVar12 = piVar19[8];
  if (iVar14 < iVar12) {
LAB_005405e8:
    iVar12 = piVar19[1];
    piVar19[7] = piVar19[7] + 1;
    *(undefined2 *)(iVar12 + iVar14 * 0x14) = 7;
    *(undefined1 *)(iVar12 + 3 + iVar14 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 4 + iVar14 * 0x14) = 0;
    *(int *)(iVar12 + 8 + iVar14 * 0x14) = local_70;
    *(undefined4 *)(iVar12 + 0xc + iVar14 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 0x10 + iVar14 * 0x14) = 0;
  }
  else {
    if (iVar12 == 0) {
      iVar12 = 0x33;
    }
    else {
      iVar12 = iVar12 * 2;
    }
    uVar21 = FUN_00552390(*piVar19,piVar19[1],iVar12 * 0x14);
    if (uVar21 != 0) {
      iVar12 = *piVar19;
      if (((iVar12 == 0) || (uVar21 < *(uint *)(iVar12 + 0x104))) ||
         (*(uint *)(iVar12 + 0x108) <= uVar21)) {
        uVar17 = (*DAT_00766608._4_4_)(uVar21);
      }
      else {
        uVar17 = (uint)*(ushort *)(iVar12 + 0xe8);
      }
      piVar19[8] = uVar17 / 0x14;
      piVar19[1] = uVar21;
      goto LAB_005405e8;
    }
  }
  iVar14 = piVar19[7];
  iVar12 = piVar19[8];
  if (iVar12 <= iVar14) {
    if (iVar12 == 0) {
      iVar12 = 0x33;
    }
    else {
      iVar12 = iVar12 * 2;
    }
    uVar21 = FUN_00552390(*piVar19,piVar19[1],iVar12 * 0x14);
    if (uVar21 == 0) goto LAB_005406bf;
    iVar12 = *piVar19;
    if (((iVar12 == 0) || (uVar21 < *(uint *)(iVar12 + 0x104))) ||
       (*(uint *)(iVar12 + 0x108) <= uVar21)) {
      uVar17 = (*DAT_00766608._4_4_)(uVar21);
    }
    else {
      uVar17 = (uint)*(ushort *)(iVar12 + 0xe8);
    }
    piVar19[8] = uVar17 / 0x14;
    piVar19[1] = uVar21;
  }
  iVar12 = piVar19[1];
  piVar19[7] = piVar19[7] + 1;
  *(undefined2 *)(iVar12 + iVar14 * 0x14) = 7;
  *(undefined1 *)(iVar12 + 3 + iVar14 * 0x14) = 0;
  *(undefined4 *)(iVar12 + 4 + iVar14 * 0x14) = 0;
  *(int *)(iVar12 + 8 + iVar14 * 0x14) = local_58;
  *(undefined4 *)(iVar12 + 0xc + iVar14 * 0x14) = 0;
  *(undefined4 *)(iVar12 + 0x10 + iVar14 * 0x14) = 0;
LAB_005406bf:
  iVar12 = local_58;
  iVar14 = piVar19[7];
  if ((iVar14 < piVar19[8]) || (iVar13 = FUN_0053b4b0(piVar19), iVar13 == 0)) {
    iVar13 = piVar19[1];
    piVar19[7] = piVar19[7] + 1;
    *(int **)(iVar13 + 4 + iVar14 * 0x14) = local_50;
    *(undefined2 *)(iVar13 + iVar14 * 0x14) = 2;
    *(undefined1 *)(iVar13 + 3 + iVar14 * 0x14) = 0;
    *(int *)(iVar13 + 8 + iVar14 * 0x14) = iVar16;
    *(undefined4 *)(iVar13 + 0xc + iVar14 * 0x14) = 0;
    *(undefined4 *)(iVar13 + 0x10 + iVar14 * 0x14) = 0;
  }
  iVar16 = piVar19[7];
  if ((iVar16 < piVar19[8]) || (iVar14 = FUN_0053b4b0(piVar19), iVar14 == 0)) {
    iVar14 = piVar19[1];
    piVar19[7] = piVar19[7] + 1;
    *(int *)(iVar14 + 4 + iVar16 * 0x14) = local_40;
    *(undefined2 *)(iVar14 + iVar16 * 0x14) = 2;
    *(undefined1 *)(iVar14 + 3 + iVar16 * 0x14) = 0;
    *(int *)(iVar14 + 8 + iVar16 * 0x14) = iVar15;
    *(undefined4 *)(iVar14 + 0xc + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar14 + 0x10 + iVar16 * 0x14) = 0;
  }
  iVar15 = piVar19[7];
  if ((iVar15 < piVar19[8]) || (iVar16 = FUN_0053b4b0(piVar19), iVar16 == 0)) {
    iVar16 = piVar19[1];
    piVar19[7] = piVar19[7] + 1;
    *(int *)(iVar16 + 4 + iVar15 * 0x14) = local_70;
    *(undefined2 *)(iVar16 + iVar15 * 0x14) = 0x1b;
    *(undefined1 *)(iVar16 + 3 + iVar15 * 0x14) = 0;
    *(int *)(iVar16 + 8 + iVar15 * 0x14) = local_54;
    *(undefined4 *)(iVar16 + 0xc + iVar15 * 0x14) = 0;
    *(undefined4 *)(iVar16 + 0x10 + iVar15 * 0x14) = 0;
  }
  iVar15 = piVar19[7];
  if ((iVar15 < piVar19[8]) || (iVar16 = FUN_0053b4b0(piVar19), iVar16 == 0)) {
    iVar16 = piVar19[1];
    piVar19[7] = piVar19[7] + 1;
    *(undefined2 *)(iVar16 + iVar15 * 0x14) = 0x1b;
    *(undefined1 *)(iVar16 + 3 + iVar15 * 0x14) = 0;
    *(int *)(iVar16 + 4 + iVar15 * 0x14) = iVar12;
    *(int *)(iVar16 + 8 + iVar15 * 0x14) = local_4c;
    *(undefined4 *)(iVar16 + 0xc + iVar15 * 0x14) = 0;
    *(undefined4 *)(iVar16 + 0x10 + iVar15 * 0x14) = 0;
  }
  if (piVar19[10] != 0) {
    *(int *)(piVar19[10] - (local_78 * 4 + 4)) = piVar19[7];
  }
  iVar15 = piVar19[7];
  if ((iVar15 < piVar19[8]) || (iVar16 = FUN_0053b4b0(piVar19), iVar16 == 0)) {
    iVar16 = piVar19[1];
    piVar19[7] = piVar19[7] + 1;
    *(undefined2 *)(iVar16 + iVar15 * 0x14) = 0x17;
    *(undefined1 *)(iVar16 + 3 + iVar15 * 0x14) = 0;
    *(undefined4 *)(iVar16 + 4 + iVar15 * 0x14) = 0;
    *(undefined4 *)(iVar16 + 8 + iVar15 * 0x14) = 0;
    *(undefined4 *)(iVar16 + 0xc + iVar15 * 0x14) = 0;
    *(undefined4 *)(iVar16 + 0x10 + iVar15 * 0x14) = 0;
  }
  else {
    iVar15 = 1;
  }
  FUN_0056c320(piVar19,iVar15,local_84,0xfffffff1);
  iVar15 = local_48;
  FUN_0056bf50(piVar19,0x18,local_10,local_20,local_48,local_6c,0xfffffff0);
  if (piVar19[1] != 0) {
    *(undefined1 *)(piVar19[1] + -0x11 + piVar19[7] * 0x14) = 1;
  }
  iVar16 = piVar19[7];
  if ((iVar16 < piVar19[8]) || (iVar14 = FUN_0053b4b0(piVar19), iVar14 == 0)) {
    iVar14 = piVar19[1];
    piVar19[7] = piVar19[7] + 1;
    *(void **)(iVar14 + 4 + iVar16 * 0x14) = local_44;
    *(int **)(iVar14 + 8 + iVar16 * 0x14) = local_34;
    *(undefined2 *)(iVar14 + iVar16 * 0x14) = 0x19;
    *(undefined1 *)(iVar14 + 3 + iVar16 * 0x14) = 0;
    *(int *)(iVar14 + 0xc + iVar16 * 0x14) = iVar11;
    *(undefined4 *)(iVar14 + 0x10 + iVar16 * 0x14) = 0;
  }
  piVar6 = local_30;
  if (local_64 != 0) {
    iVar15 = iVar15 + 1;
    FUN_00554430(local_30,local_64,iVar15);
    if (piVar6[0xf] < iVar15) {
      piVar6[0xf] = iVar15;
      piVar6[0x10] = local_64;
    }
  }
  if (piVar19[10] != 0) {
    *(int *)(piVar19[10] - (local_60 * 4 + 4)) = piVar19[7];
  }
  if (*local_80 == '\x05') {
    puVar5 = (undefined4 *)local_68[0xf];
    puVar7 = local_68;
    while (puVar3 = puVar5, puVar3 != (undefined4 *)0x0) {
      puVar7 = puVar3;
      puVar5 = (undefined4 *)puVar3[0xf];
    }
    FUN_00539ac0(piVar6,0,*puVar7);
  }
  puVar7 = local_2c;
  iVar15 = local_2c[0xf];
  if (iVar15 != 0) {
    FUN_005303a0(local_3c,iVar15);
    FUN_005521a0(local_3c,iVar15);
  }
  puVar7[0xf] = local_68;
  FUN_00534c40(piVar6,*(undefined1 *)(puVar7 + 1),local_88,iVar10,0);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00540990 @ 00540990  kind=lib  attributed-by=lib-island  size=123 */

undefined4 FUN_00540990(undefined4 *param_1,byte *param_2)

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
        puVar4 = puVar4 + 2;
      } while (iVar6 < (int)param_1[1]);
    }
  }
  return 0;
}


/* FUN_00540a20 @ 00540a20  kind=lib  attributed-by=lib-island  size=219 */

int FUN_00540a20(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    return 0;
  }
  iVar2 = *(int *)(param_1 + 0xc);
  puVar3 = *(undefined8 **)(iVar2 + 0x38);
  iVar4 = FUN_00560330(*(undefined4 *)(iVar2 + 0x44));
  if (iVar4 == 0) {
    *puVar3 = 0x66206574694c5153;
    puVar3[1] = 0x332074616d726f;
    *(undefined1 *)(puVar3 + 2) = *(undefined1 *)(param_1 + 0x21);
    *(undefined1 *)((int)puVar3 + 0x11) = *(undefined1 *)(param_1 + 0x22);
    *(undefined2 *)((int)puVar3 + 0x12) = 0x101;
    *(char *)((int)puVar3 + 0x14) = *(char *)(param_1 + 0x20) - *(char *)(param_1 + 0x24);
    *(undefined2 *)((int)puVar3 + 0x15) = 0x2040;
    *(undefined1 *)((int)puVar3 + 0x17) = 0x20;
    memset(puVar3 + 3,0,0x4c);
    FUN_00583190(iVar2,0xd);
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
    iVar4 = 0;
  }
  return iVar4;
}


/* FUN_00540b30 @ 00540b30  kind=lib  attributed-by=lib-island  size=60 */

int FUN_00540b30(int param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = *(int *)(param_1 + 0x10);
  if (-1 < iVar2) {
    return iVar2;
  }
  iVar1 = *(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x14);
  uVar3 = __allmul(iVar2,iVar2 >> 0x1f,0xfffffc00,0xffffffff);
  iVar2 = __alldiv(uVar3,iVar1,iVar1 >> 0x1f);
  return iVar2;
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


/* FUN_005411b0 @ 005411b0  kind=lib  attributed-by=lib-island  size=86 */

undefined4 FUN_005411b0(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)param_1[0x11];
  if (*piVar1 == 0) {
    if ((*(char *)((int)param_1 + 5) != '\x04') && (*(char *)((int)param_1 + 0x15) == '\0')) {
      uVar2 = (**(code **)(*param_1 + 0x18))(*param_1,0,piVar1,0x201e,0);
      return uVar2;
    }
    piVar1[0] = 0;
    piVar1[1] = 0;
    piVar1[2] = 0;
    piVar1[3] = 0;
    piVar1[4] = 0;
    piVar1[5] = 0;
    piVar1[6] = 0;
    piVar1[7] = 0;
    piVar1[8] = 0;
    piVar1[9] = 0;
    *piVar1 = (int)&DAT_00712500;
  }
  return 0;
}


/* FUN_00541210 @ 00541210  kind=lib  attributed-by=lib-island  size=42 */

short FUN_00541210(int param_1)

{
  if (param_1 == 0x48) {
    return 1;
  }
  if (param_1 == 0x49) {
    return 0x80;
  }
  return 2 << ((char)param_1 + 0xb4U & 0x1f);
}


/* FUN_00541270 @ 00541270  kind=lib  attributed-by=lib-island  size=102 */

int FUN_00541270(int param_1)

{
  int iVar1;
  int iVar2;
  int local_8;
  
  local_8 = 0;
  FUN_00577dd0(*(undefined4 *)(param_1 + 0xb8));
  iVar2 = FUN_00577740(*(undefined4 *)(param_1 + 0xb8),&local_8);
  if ((iVar2 != 0) || (local_8 != 0)) {
    for (iVar1 = *(int *)(param_1 + 0x58); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x2c)) {
      *(undefined4 *)(iVar1 + 0x10) = 1;
    }
    FUN_005611b0(*(undefined4 *)(param_1 + 0xb4),0);
  }
  return iVar2;
}


/* FUN_005412e0 @ 005412e0  kind=lib  attributed-by=lib-island  size=93 */

int FUN_005412e0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((3 < *(byte *)(param_1 + 0x10)) && (*(byte *)(param_1 + 0x10) != 5)) {
    return 0;
  }
  iVar2 = (**(code **)(**(int **)(param_1 + 0x3c) + 0x1c))(*(int **)(param_1 + 0x3c),4);
  if (iVar2 == 0) {
    *(undefined1 *)(param_1 + 0x10) = 4;
    return 0;
  }
  piVar1 = *(int **)(param_1 + 0x3c);
  if (*piVar1 != 0) {
    (**(code **)(*piVar1 + 0x20))(piVar1,1);
    if (*(char *)(param_1 + 0x10) != '\x05') {
      *(undefined1 *)(param_1 + 0x10) = 1;
    }
  }
  return iVar2;
}


/* FUN_00541340 @ 00541340  kind=lib  attributed-by=lib-island  size=69 */

int FUN_00541340(int param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 <= (int)(uint)*(byte *)(param_1 + 0x10)) && (*(byte *)(param_1 + 0x10) != 5)) {
    return 0;
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 0x3c) + 0x1c))(*(int **)(param_1 + 0x3c),param_2);
  if ((iVar1 == 0) && ((*(char *)(param_1 + 0x10) != '\x05' || (param_2 == 4)))) {
    *(char *)(param_1 + 0x10) = (char)param_2;
  }
  return iVar1;
}


/* FUN_00541390 @ 00541390  kind=lib  attributed-by=lib-island  size=72 */

void FUN_00541390(undefined4 *param_1)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 1) != '\0') && (iVar1 = FUN_005412e0(param_1), iVar1 != 0)) {
    return;
  }
  FUN_005782f0(*param_1,param_1[0xf],param_1[0x2f],*(undefined1 *)(param_1 + 1),param_1[0x22],
               param_1[0x23],param_1 + 0x2e);
  return;
}


/* FUN_005413e0 @ 005413e0  kind=lib  attributed-by=lib-island  size=134 */

void FUN_005413e0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int local_8;
  
  piVar1 = param_1;
  if ((char)param_1[3] == '\0') {
    iVar2 = FUN_00541470(param_1,&local_8);
    if (iVar2 == 0) {
      iVar2 = *piVar1;
      if (local_8 == 0) {
        iVar2 = (**(code **)(iVar2 + 0x1c))(iVar2,piVar1[0x2f],0);
        if (iVar2 == 0x170a) {
          iVar2 = 0;
        }
        param_1 = (int *)0x0;
      }
      else {
        iVar2 = (**(code **)(iVar2 + 0x20))(iVar2,piVar1[0x2f],0,&param_1);
      }
      if (iVar2 == 0) {
        if (param_1 != (int *)0x0) {
          FUN_0055faf0(piVar1,0);
          return;
        }
        if (*(char *)((int)piVar1 + 5) == '\x05') {
          *(undefined1 *)((int)piVar1 + 5) = 0;
        }
      }
    }
  }
  return;
}


/* FUN_00541470 @ 00541470  kind=lib  attributed-by=lib-island  size=133 */

int FUN_00541470(int param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined8 local_c;
  
  iVar2 = *(int *)(param_1 + 0xb8);
  if (((iVar2 == 0) || (*(short *)(iVar2 + 0x28) < 0)) ||
     (uVar3 = *(uint *)(iVar2 + 0x48), uVar3 == 0)) {
    piVar1 = *(int **)(param_1 + 0x3c);
    local_c = 0;
    if ((*piVar1 != 0) && (iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1,&local_c), iVar2 != 0)) {
      return iVar2;
    }
    uVar3 = *(uint *)(param_1 + 0x80);
    uVar3 = __alldiv(uVar3 + (uint)local_c + -1,
                     (((int)uVar3 >> 0x1f) + local_c._4_4_ + (uint)CARRY4(uVar3,(uint)local_c)) -
                     (uint)(uVar3 + (uint)local_c == 0),uVar3,(int)uVar3 >> 0x1f);
  }
  if (*(uint *)(param_1 + 0x84) < uVar3) {
    *(uint *)(param_1 + 0x84) = uVar3;
  }
  *param_2 = uVar3;
  return 0;
}


/* FUN_00541500 @ 00541500  kind=lib  attributed-by=lib-island  size=698 */

int FUN_00541500(int param_1,uint *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  undefined8 local_24;
  uint *local_1c;
  uint local_18;
  uint local_14;
  uint *local_10;
  uint local_c;
  uint local_8;
  
  iVar4 = 0;
  local_10 = (uint *)0x0;
  if (param_2 == (uint *)0x0) {
    uVar3 = *(uint *)(param_1 + 0x1c);
LAB_00541565:
    puVar1 = local_10;
    *(uint *)(param_1 + 0x18) = uVar3;
    *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_1 + 0xc);
    if ((param_2 == (uint *)0x0) && (*(int *)(param_1 + 0xb8) != 0)) {
      iVar4 = FUN_005417c0(param_1);
      return iVar4;
    }
    local_8 = *(uint *)(param_1 + 0x48);
    local_c = *(uint *)(param_1 + 0x4c);
    puVar5 = (uint *)(param_1 + 0x48);
    local_1c = puVar5;
    if ((param_2 != (uint *)0x0) && (*(int *)(param_1 + 0xb8) == 0)) {
      local_14 = local_8;
      local_18 = local_c;
      if (param_2[2] != 0 || param_2[3] != 0) {
        local_14 = param_2[2];
        local_18 = param_2[3];
      }
      *puVar5 = *param_2;
      *(uint *)(param_1 + 0x4c) = param_2[1];
      do {
        if (((int)local_18 < *(int *)(param_1 + 0x4c)) ||
           (((int)local_18 <= *(int *)(param_1 + 0x4c) && (local_14 <= *puVar5)))) {
          if (iVar4 == 0) goto LAB_005416f0;
          break;
        }
        iVar4 = FUN_00542600(param_1,puVar5,puVar1,1,1);
      } while (iVar4 == 0);
LAB_00541613:
      if (param_2 != (uint *)0x0) {
        iVar2 = *(int *)(param_1 + 0x80) + 4;
        local_24 = __allmul(iVar2,iVar2 >> 0x1f,param_2[6],0);
        iVar2 = *(int *)(param_1 + 0xb8);
        if (iVar2 != 0) {
          if (param_2[10] != *(uint *)(iVar2 + 0x68)) {
            param_2[7] = 0;
            param_2[10] = *(uint *)(iVar2 + 0x68);
          }
          if (param_2[7] < *(uint *)(iVar2 + 0x44)) {
            *(uint *)(iVar2 + 0x44) = param_2[7];
            *(uint *)(iVar2 + 0x4c) = param_2[8];
            *(uint *)(iVar2 + 0x50) = param_2[9];
            FUN_0057dcf0(iVar2);
          }
          iVar4 = 0;
        }
        puVar1 = local_10;
        for (uVar3 = param_2[6];
            (iVar4 == 0 && (puVar5 = local_1c, uVar3 < *(uint *)(param_1 + 0x34)));
            uVar3 = uVar3 + 1) {
          iVar4 = FUN_00542600(param_1,&local_24,puVar1,0,1);
          puVar5 = local_1c;
        }
      }
      FUN_0054c040(local_10);
      if (iVar4 == 0) {
        *puVar5 = local_8;
        puVar5[1] = local_c;
      }
      return iVar4;
    }
    *puVar5 = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
LAB_005416f0:
    do {
      if (((int)local_c < *(int *)(param_1 + 0x4c)) ||
         (((int)local_c <= *(int *)(param_1 + 0x4c) && (local_8 <= *puVar5)))) goto LAB_00541613;
      local_18 = 0;
      iVar4 = FUN_00544e80(param_1,0,local_8,local_c,&local_18,(int)&local_24 + 4);
      local_14 = local_18;
      if ((local_18 == 0) &&
         ((*(uint *)(param_1 + 0x7c) + *(uint *)(param_1 + 0x50) == *puVar5 &&
          (*(int *)(param_1 + 0x54) +
           (uint)CARRY4(*(uint *)(param_1 + 0x7c),*(uint *)(param_1 + 0x50)) ==
           *(int *)(param_1 + 0x4c))))) {
        iVar2 = *(int *)(param_1 + 0x80) + 8;
        local_14 = __alldiv(local_8 - *puVar5,
                            (local_c - *(int *)(param_1 + 0x4c)) - (uint)(local_8 < *puVar5),iVar2,
                            iVar2 >> 0x1f);
      }
      uVar3 = 0;
      while( true ) {
        if (iVar4 != 0) goto LAB_00541613;
        if (local_14 <= uVar3) break;
        if ((int)local_c < *(int *)(param_1 + 0x4c)) goto LAB_00541613;
        if (((int)local_c <= *(int *)(param_1 + 0x4c)) && (local_8 <= *puVar5)) break;
        iVar4 = FUN_00542600(param_1,puVar5,local_10,1,1);
        uVar3 = uVar3 + 1;
      }
    } while( true );
  }
  local_18 = param_2[5];
  puVar1 = (uint *)FUN_0055da00(0x200);
  if (puVar1 != (uint *)0x0) {
    local_10 = puVar1;
    memset(puVar1,0,0x200);
    *puVar1 = local_18;
    if (puVar1 != (uint *)0x0) {
      uVar3 = param_2[5];
      goto LAB_00541565;
    }
  }
  return 7;
}


/* FUN_005417c0 @ 005417c0  kind=lib  attributed-by=lib-island  size=92 */

int FUN_005417c0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x1c);
  iVar2 = FUN_005785a0(*(undefined4 *)(param_1 + 0xb8),FUN_00541940,param_1);
  iVar3 = FUN_00560cd0(*(undefined4 *)(param_1 + 0xb4));
  if (iVar3 == 0) {
    return iVar2;
  }
  do {
    if (iVar2 != 0) {
      return iVar2;
    }
    puVar1 = (undefined4 *)(iVar3 + 0x14);
    iVar3 = *(int *)(iVar3 + 0xc);
    iVar2 = FUN_00541940(param_1,*puVar1);
  } while (iVar3 != 0);
  return iVar2;
}


/* FUN_00541900 @ 00541900  kind=lib  attributed-by=lib-island  size=54 */

void FUN_00541900(int param_1)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 7) == '\0') &&
     (iVar1 = (**(code **)(**(int **)(param_1 + 0x40) + 0x14))(*(int **)(param_1 + 0x40),2),
     iVar1 != 0)) {
    return;
  }
  (**(code **)(**(int **)(param_1 + 0x40) + 0x18))(*(int **)(param_1 + 0x40),param_1 + 0x50);
  return;
}


/* FUN_00541940 @ 00541940  kind=lib  attributed-by=lib-island  size=199 */

int FUN_00541940(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *local_8;
  
  iVar3 = 0;
  local_8 = (undefined4 *)0x0;
  FUN_00560e90(*(undefined4 *)(param_1 + 0xb4),param_2,0,&local_8);
  puVar2 = local_8;
  if (local_8 != (undefined4 *)0x0) {
    if (*(short *)((int)local_8 + 0x1a) == 1) {
      if ((*(byte *)(local_8 + 6) & 2) != 0) {
        FUN_00544570(local_8);
      }
      iVar1 = puVar2[7];
      *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + -1;
      if (puVar2[5] == 1) {
        *(undefined4 *)(iVar1 + 0x2c) = 0;
      }
      (*DAT_00766664)(*(undefined4 *)(iVar1 + 0x28),*puVar2,1);
    }
    else {
      iVar3 = FUN_00544d80(local_8);
      if (iVar3 == 0) {
        (**(code **)(param_1 + 0xac))(puVar2);
      }
      iVar1 = puVar2[4];
      FUN_00561130(puVar2);
      if (*(int *)(*(int *)(iVar1 + 0xb4) + 0xc) == 0) {
        FUN_00541a10(iVar1);
      }
    }
  }
  for (iVar1 = *(int *)(param_1 + 0x58); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x2c)) {
    *(undefined4 *)(iVar1 + 0x10) = 1;
  }
  return iVar3;
}


/* FUN_00541a10 @ 00541a10  kind=lib  attributed-by=lib-island  size=94 */

void FUN_00541a10(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0xf);
  if ((bVar1 != 6) && (bVar1 != 0)) {
    if (bVar1 < 2) {
      if (*(char *)(param_1 + 4) == '\0') {
        FUN_00541e00(param_1,0);
      }
    }
    else {
      if (DAT_0076b3bc != (code *)0x0) {
        (*DAT_0076b3bc)();
      }
      FUN_0055fbc0(param_1);
      if (DAT_0076b3c0 != (code *)0x0) {
        (*DAT_0076b3c0)();
        FUN_00542a20(param_1);
        return;
      }
    }
  }
  FUN_00542a20(param_1);
  return;
}


/* FUN_00541a70 @ 00541a70  kind=lib  attributed-by=lib-island  size=49 */

undefined4 FUN_00541a70(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(param_1 + 0x3c);
  if (*piVar1 != 0) {
    uVar2 = (**(code **)(*piVar1 + 0x20))(piVar1,param_2);
    if (*(char *)(param_1 + 0x10) != '\x05') {
      *(char *)(param_1 + 0x10) = (char)param_2;
    }
    return uVar2;
  }
  return 0;
}


/* FUN_00541ab0 @ 00541ab0  kind=lib  attributed-by=lib-island  size=156 */

int FUN_00541ab0(int param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  
  uVar3 = param_3;
  if (param_4 == 0) {
    iVar4 = 1;
  }
  else {
    iVar4 = 0;
    piVar5 = &param_2;
    iVar1 = param_2;
    while (iVar1 != 0) {
      if (*(uint *)(iVar1 + 0x14) <= uVar3) {
        piVar5 = (int *)(iVar1 + 0xc);
        iVar4 = iVar4 + 1;
      }
      iVar1 = *(int *)(iVar1 + 0xc);
      *piVar5 = iVar1;
    }
  }
  iVar1 = param_2;
  *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + iVar4;
  if (*(int *)(param_2 + 0x14) == 1) {
    FUN_00542d70(param_2);
  }
  iVar4 = FUN_00577e30(*(undefined4 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0x80),iVar1,uVar3,
                       param_4,*(undefined1 *)(param_1 + 10));
  if (iVar4 == 0) {
    iVar2 = *(int *)(param_1 + 0x58);
    while (iVar2 != 0) {
      FUN_0054b6e0(*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(iVar1 + 0x14),
                   *(undefined4 *)(iVar1 + 4));
      iVar1 = *(int *)(iVar1 + 0xc);
      iVar2 = iVar1;
    }
  }
  return iVar4;
}


/* FUN_00541b50 @ 00541b50  kind=lib  attributed-by=lib-island  size=121 */

int FUN_00541b50(int param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = *(int *)(param_1 + 0x30);
  iVar2 = *(int *)(param_1 + 0x80) + -200;
  iVar4 = 0;
  iVar5 = 0;
  if (0 < iVar2) {
    if (1 < (*(int *)(param_1 + 0x80) + -1) / 200) {
      do {
        iVar4 = iVar4 + (uint)*(byte *)(param_2 + iVar2);
        pbVar1 = (byte *)(param_2 + -200 + iVar2);
        iVar2 = iVar2 + -400;
        iVar5 = iVar5 + (uint)*pbVar1;
      } while (200 < iVar2);
    }
    if (0 < iVar2) {
      iVar3 = iVar3 + (uint)*(byte *)(iVar2 + param_2);
    }
    return iVar5 + iVar4 + iVar3;
  }
  return iVar3;
}


/* FUN_00541bd0 @ 00541bd0  kind=lib  attributed-by=lib-island  size=547 */

int FUN_00541bd0(int *param_1,byte *param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  size_t _Size;
  int *_Dst;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  char *pcVar7;
  byte *pbVar8;
  char *pcVar9;
  bool bVar10;
  uint local_20;
  int local_1c;
  int local_18;
  int local_14;
  byte *local_10;
  char *local_c;
  int *local_8;
  
  iVar3 = *param_1;
  _Size = *(int *)(iVar3 + 4) * 2;
  local_c = (char *)0x0;
  _Dst = (int *)FUN_0055da00(_Size);
  if (_Dst != (int *)0x0) {
    memset(_Dst,0,_Size);
  }
  local_8 = (int *)(*(int *)(iVar3 + 4) + (int)_Dst);
  if (_Dst == (int *)0x0) {
    iVar4 = 7;
  }
  else {
    iVar4 = (**(code **)(iVar3 + 0x18))(iVar3,param_2,_Dst,0x4001,0);
    if ((iVar4 == 0) && (iVar4 = (**(code **)(*_Dst + 0x18))(_Dst,&local_20), iVar4 == 0)) {
      local_18 = *(int *)(iVar3 + 8) + 1;
      local_c = (char *)FUN_0055da00(local_20 + 1 + local_18);
      if (local_c == (char *)0x0) {
        iVar4 = 7;
      }
      else {
        local_10 = (byte *)(local_c + local_20 + 1);
        iVar4 = (**(code **)(*_Dst + 8))(_Dst,local_c,local_20,0,0);
        if (iVar4 == 0) {
          local_c[local_20] = '\0';
          if ((-1 < local_1c) && ((pcVar9 = local_c, 0 < local_1c || (local_20 != 0)))) {
            do {
              iVar4 = (**(code **)(iVar3 + 0x20))(iVar3,pcVar9,0,&local_14);
              if (iVar4 != 0) goto LAB_00541dbd;
              if (local_14 != 0) {
                iVar4 = (**(code **)(iVar3 + 0x18))(iVar3,pcVar9,local_8,0x801,0);
                if (iVar4 != 0) goto LAB_00541dbd;
                iVar4 = FUN_005450a0(local_8,local_10,local_18);
                if (*local_8 != 0) {
                  (**(code **)(*local_8 + 4))(local_8);
                  *local_8 = 0;
                }
                if (iVar4 != 0) goto LAB_00541dbd;
                pbVar5 = local_10;
                pbVar8 = param_2;
                if (*local_10 != 0) {
                  do {
                    bVar1 = *pbVar5;
                    bVar10 = bVar1 < *pbVar8;
                    if (bVar1 != *pbVar8) {
LAB_00541d61:
                      uVar6 = -(uint)bVar10 | 1;
                      goto LAB_00541d66;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pbVar5[1];
                    bVar10 = bVar1 < pbVar8[1];
                    if (bVar1 != pbVar8[1]) goto LAB_00541d61;
                    pbVar5 = pbVar5 + 2;
                    pbVar8 = pbVar8 + 2;
                  } while (bVar1 != 0);
                  uVar6 = 0;
LAB_00541d66:
                  if (uVar6 == 0) goto LAB_00541dbd;
                }
              }
              uVar6 = 0;
              if (pcVar9 != (char *)0x0) {
                cVar2 = *pcVar9;
                pcVar7 = pcVar9;
                while (cVar2 != '\0') {
                  pcVar7 = pcVar7 + 1;
                  cVar2 = *pcVar7;
                }
                uVar6 = (int)pcVar7 - (int)pcVar9 & 0x3fffffff;
              }
              pcVar9 = pcVar9 + uVar6 + 1;
              iVar4 = (int)pcVar9 - (int)local_c >> 0x1f;
            } while ((iVar4 < local_1c) ||
                    ((iVar4 <= local_1c && ((uint)((int)pcVar9 - (int)local_c) < local_20))));
          }
          FUN_0055e900(_Dst);
          iVar4 = (**(code **)(iVar3 + 0x1c))(iVar3,param_2,0);
        }
      }
    }
  }
LAB_00541dbd:
  FUN_00524410(local_c);
  if (_Dst != (int *)0x0) {
    if (*_Dst != 0) {
      (**(code **)(*_Dst + 4))(_Dst);
      *_Dst = 0;
    }
    FUN_00524410(_Dst);
  }
  return iVar4;
}


/* FUN_00541e00 @ 00541e00  kind=lib  attributed-by=lib-island  size=460 */

int FUN_00541e00(int *param_1,undefined4 param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_8;
  
  iVar5 = 0;
  if ((*(byte *)((int)param_1 + 0xf) < 2) && (*(byte *)(param_1 + 4) < 2)) {
    return 0;
  }
  FUN_005455d0(param_1);
  piVar2 = (int *)param_1[0x10];
  if ((undefined *)*piVar2 != (undefined *)0x0) {
    if ((undefined *)*piVar2 == &DAT_00712500) {
      FUN_0051f900(piVar2);
      *piVar2 = 0;
    }
    else {
      cVar1 = *(char *)((int)param_1 + 5);
      if (cVar1 == '\x03') {
        if (param_1[0x12] == 0 && param_1[0x13] == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = (**(code **)(*piVar2 + 0x10))(piVar2,0,0);
        }
      }
      else {
        if ((cVar1 != '\x01') && (((char)param_1[1] == '\0' || (cVar1 == '\x05')))) {
          iVar3 = param_1[3];
          FUN_0055e900(piVar2);
          if ((char)iVar3 == '\0') {
            iVar5 = (**(code **)(*param_1 + 0x1c))(*param_1,param_1[0x25],0);
          }
          goto LAB_00541ed5;
        }
        iVar5 = FUN_005830c0(param_1,param_2);
      }
      param_1[0x13] = 0;
      param_1[0x12] = 0;
    }
  }
LAB_00541ed5:
  FUN_0054c040(param_1[0xe]);
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  FUN_00560c70(param_1[0x2d]);
  FUN_005611b0(param_1[0x2d],param_1[6]);
  iVar3 = param_1[0x2e];
  if ((iVar3 != 0) && (*(char *)(iVar3 + 0x2c) != '\0')) {
    if (*(char *)(iVar3 + 0x2b) == '\0') {
      (**(code **)(**(int **)(iVar3 + 4) + 0x38))(*(int **)(iVar3 + 4),0,1,9);
    }
    *(undefined1 *)(iVar3 + 0x2c) = 0;
    *(undefined1 *)(iVar3 + 0x2f) = 0;
  }
  local_8 = 0;
  if ((char)param_1[1] != '\0') goto LAB_00541fb5;
  iVar3 = param_1[0x2e];
  if (iVar3 != 0) {
    if (*(char *)(iVar3 + 0x2b) == '\0') goto LAB_00541fb5;
    *(undefined1 *)(iVar3 + 0x2b) = 0;
    iVar4 = (**(code **)(**(int **)(iVar3 + 4) + 0x38))
                      (*(int **)(iVar3 + 4),*(short *)(iVar3 + 0x28) + 3,1,6);
    if (iVar4 != 0) {
      *(undefined1 *)(iVar3 + 0x2b) = 1;
    }
    if (*(char *)(iVar3 + 0x2b) != '\0') goto LAB_00541fb5;
  }
  piVar2 = (int *)param_1[0xf];
  local_8 = 0;
  if ((*piVar2 != 0) &&
     (local_8 = (**(code **)(*piVar2 + 0x20))(piVar2,1), (char)param_1[4] != '\x05')) {
    *(undefined1 *)(param_1 + 4) = 1;
  }
  *(undefined1 *)((int)param_1 + 0x11) = 0;
LAB_00541fb5:
  if (iVar5 == 0) {
    iVar5 = local_8;
  }
  *(undefined1 *)((int)param_1 + 0xf) = 1;
  *(undefined1 *)((int)param_1 + 0x12) = 0;
  return iVar5;
}


/* FUN_00541fd0 @ 00541fd0  kind=lib  attributed-by=lib-island  size=33 */

uint FUN_00541fd0(int param_1,uint param_2)

{
  if (((param_2 & 0xff) == 0xd) || ((param_2 & 0xff) == 10)) {
    *(uint *)(param_1 + 0x28) = param_2;
    *(undefined1 *)(param_1 + 0xf) = 6;
  }
  return param_2;
}


/* FUN_00542000 @ 00542000  kind=lib  attributed-by=lib-island  size=373 */

int FUN_00542000(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar2 = param_1;
  if ((*(char *)((int)param_1 + 0x11) != '\0') || (param_1[6] == 0)) {
    return 0;
  }
  iVar3 = param_1[10];
  if (iVar3 == 0) {
    iVar3 = FUN_00560e90(param_1[0x2d],1,1,&param_1);
  }
  puVar4 = param_1;
  iVar1 = DAT_007666d0;
  if (iVar3 == 0) {
    if (param_1[4] != 0) {
      puVar2[0x28] = puVar2[0x28] + 1;
      goto LAB_00542118;
    }
    param_1[4] = puVar2;
    if (iVar1 / (int)puVar2[0x20] == 0) {
      FUN_00525a30(0xb,"database corruption at line %d of [%.10s]",0xa5a2,
                   "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
      iVar3 = 0xb;
    }
    else if (((*(char *)((int)puVar2 + 0xe) == '\0') && (puVar2[6] != 0)) &&
            (*(int *)puVar2[0xf] != 0)) {
      puVar2[0x29] = puVar2[0x29] + 1;
      iVar3 = FUN_00544d80(param_1);
      if (iVar3 == 0) goto LAB_00542118;
    }
    else {
      if (puVar2[0x21] != 0) {
        memset((void *)param_1[1],0,puVar2[0x20]);
        goto LAB_00542118;
      }
      iVar3 = 0xd;
    }
    if ((*(byte *)(puVar4 + 6) & 2) != 0) {
      FUN_00544570(puVar4);
    }
    iVar1 = puVar4[7];
    *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + -1;
    if (puVar4[5] == 1) {
      *(undefined4 *)(iVar1 + 0x2c) = 0;
    }
    (*DAT_00766664)(*(undefined4 *)(iVar1 + 0x28),*puVar4,1);
  }
  if (*(int *)(puVar2[0x2d] + 0xc) == 0) {
    FUN_00541a10(puVar2);
  }
  puVar4 = (undefined4 *)0x0;
  if (iVar3 != 0) {
    return iVar3;
  }
LAB_00542118:
  iVar3 = FUN_00560330(puVar4);
  if (iVar3 == 0) {
    FUN_00542d70(puVar4);
    *(undefined1 *)((int)puVar2 + 0x11) = 1;
  }
  if (puVar4 != (undefined4 *)0x0) {
    iVar1 = puVar4[4];
    FUN_00561130(puVar4);
    if (*(int *)(*(int *)(iVar1 + 0xb4) + 0xc) == 0) {
      FUN_00541a10(iVar1);
    }
  }
  return iVar3;
}


/* FUN_00542180 @ 00542180  kind=lib  attributed-by=lib-island  size=37 */

undefined4 FUN_00542180(int param_1,undefined4 param_2)

{
  undefined4 local_8;
  
  FUN_00560e90(*(undefined4 *)(param_1 + 0xb4),param_2,0,&local_8);
  return local_8;
}


/* FUN_005421b0 @ 005421b0  kind=lib  attributed-by=lib-island  size=272 */

int FUN_005421b0(int *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *param_1;
  iVar4 = param_1[10];
  if (iVar4 == 0) {
    if ((param_1[0x2e] == 0) && (*(char *)((int)param_1 + 5) != '\x02')) {
      iVar4 = param_1[6];
      piVar1 = (int *)FUN_0055da00(0x200);
      if (piVar1 != (int *)0x0) {
        memset(piVar1,0,0x200);
        *piVar1 = iVar4;
      }
      param_1[0xe] = (int)piVar1;
      if (piVar1 == (int *)0x0) {
        return 7;
      }
      piVar1 = (int *)param_1[0x10];
      if (*piVar1 == 0) {
        if (*(char *)((int)param_1 + 5) == '\x04') {
          FUN_0055e010(piVar1);
        }
        else {
          uVar2 = 0x800;
          if ((char)param_1[3] != '\0') {
            uVar2 = 0x1008;
          }
          iVar3 = (**(code **)(iVar3 + 0x18))(iVar3,param_1[0x25],piVar1,uVar2 | 6,0);
          if (iVar3 != 0) goto LAB_0054229e;
        }
      }
      param_1[0xb] = 0;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      *(undefined1 *)((int)param_1 + 0x12) = 0;
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      iVar3 = FUN_00580050(param_1);
      if (iVar3 != 0) {
LAB_0054229e:
        FUN_0054c040(param_1[0xe]);
        param_1[0xe] = 0;
        return iVar3;
      }
    }
    iVar4 = 0;
    *(undefined1 *)((int)param_1 + 0xf) = 3;
  }
  return iVar4;
}


/* FUN_005422c0 @ 005422c0  kind=lib  attributed-by=lib-island  size=828 */

int FUN_005422c0(uint *param_1,int param_2)

{
  uint *puVar1;
  char *pcVar2;
  uint uVar3;
  int *piVar4;
  code *pcVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  uint local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  puVar6 = param_1;
  local_c = 1;
  puVar1 = param_1 + 0x10;
  local_8 = 0;
  param_1 = (uint *)*param_1;
  iVar7 = (**(code **)(*(int *)*puVar1 + 0x18))((int *)*puVar1,&local_20);
  if (iVar7 == 0) {
    pcVar2 = (char *)puVar6[0x2c];
    iVar7 = FUN_005450a0(puVar6[0x10],pcVar2,*(int *)(*puVar6 + 8) + 1);
    if ((iVar7 == 0) &&
       (((*pcVar2 == '\0' ||
         (iVar7 = (**(code **)((int)param_1 + 0x20))(param_1,pcVar2,0,&local_c), iVar7 == 0)) &&
        (local_c != 0)))) {
      puVar6[0x12] = 0;
      puVar6[0x13] = 0;
      local_14 = param_2;
      iVar7 = FUN_00544e80(puVar6,param_2,local_20,local_1c,&param_1,&local_8);
      uVar8 = local_1c;
      while (iVar7 == 0) {
        local_1c = uVar8;
        if (param_1 == (uint *)0xffffffff) {
          param_1 = (uint *)__alldiv(local_20 - puVar6[0x1f],uVar8 - (local_20 < puVar6[0x1f]),
                                     puVar6[0x20] + 8,(int)(puVar6[0x20] + 8) >> 0x1f);
        }
        if ((param_1 == (uint *)0x0) && (param_2 == 0)) {
          local_10 = puVar6[0x12];
          local_18 = puVar6[0x13];
          if ((puVar6[0x1f] + puVar6[0x14] == local_10) &&
             (puVar6[0x15] + (uint)CARRY4(puVar6[0x1f],puVar6[0x14]) == local_18)) {
            param_1 = (uint *)__alldiv(local_20 - local_10,
                                       (uVar8 - local_18) - (uint)(local_20 < local_10),
                                       puVar6[0x20] + 8,(int)(puVar6[0x20] + 8) >> 0x1f);
          }
        }
        uVar8 = local_8;
        if ((puVar6[0x12] == puVar6[0x1f]) && (puVar6[0x13] == 0)) {
          iVar7 = FUN_00542920(puVar6,local_8);
          if (iVar7 != 0) goto LAB_005424b4;
          puVar6[6] = uVar8;
        }
        uVar8 = 0;
        if (param_1 != (uint *)0x0) {
          do {
            if (local_14 != 0) {
              for (uVar3 = puVar6[0x16]; uVar3 != 0; uVar3 = *(uint *)(uVar3 + 0x2c)) {
                *(undefined4 *)(uVar3 + 0x10) = 1;
              }
              FUN_005611b0(puVar6[0x2d],0);
              local_14 = 0;
            }
            iVar7 = FUN_00542600(puVar6,puVar6 + 0x12,0,1,0);
            if (iVar7 != 0) {
              if (iVar7 != 0x65) {
                if (iVar7 == 0x20a) {
                  iVar7 = 0;
                }
                goto LAB_005424b4;
              }
              puVar6[0x12] = local_20;
              puVar6[0x13] = local_1c;
              break;
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < param_1);
        }
        iVar7 = FUN_00544e80(puVar6,param_2,local_20,local_1c,&param_1,&local_8);
        uVar8 = local_1c;
      }
      if (iVar7 == 0x65) {
        iVar7 = 0;
      }
    }
  }
LAB_005424b4:
  *(char *)((int)puVar6 + 0x11) = (char)puVar6[3];
  if (iVar7 == 0) {
    pcVar2 = (char *)puVar6[0x2c];
    iVar7 = FUN_005450a0(puVar6[0x10],pcVar2,*(int *)(*puVar6 + 8) + 1);
    if (iVar7 == 0) {
      if ((3 < *(byte *)((int)puVar6 + 0xf)) || (*(byte *)((int)puVar6 + 0xf) == 0)) {
        iVar7 = 0;
        if (*(char *)((int)puVar6 + 7) == '\0') {
          iVar7 = (**(code **)(*(int *)puVar6[0xf] + 0x14))
                            ((int *)puVar6[0xf],*(undefined1 *)((int)puVar6 + 0xb));
        }
        else {
          piVar4 = (int *)puVar6[0xf];
          if ((*piVar4 != 0) && (iVar7 = (**(code **)(*piVar4 + 0x28))(piVar4,8,0), iVar7 == 0xc)) {
            iVar7 = 0;
          }
        }
        if (iVar7 != 0) goto LAB_00542582;
      }
      iVar7 = FUN_00541e00(puVar6,*pcVar2 != '\0');
      if (((iVar7 == 0) && (*pcVar2 != '\0')) && (local_c != 0)) {
        iVar7 = FUN_00541bd0(puVar6,pcVar2);
      }
    }
  }
LAB_00542582:
  if (((char)puVar6[3] != '\0') ||
     (uVar8 = (**(code **)(*(int *)puVar6[0xf] + 0x30))((int *)puVar6[0xf]), (uVar8 & 0x1000) != 0))
  {
    puVar6[0x1f] = 0x200;
    return iVar7;
  }
  pcVar5 = *(code **)(*(int *)puVar6[0xf] + 0x2c);
  if (pcVar5 == (code *)0x0) {
    puVar6[0x1f] = 0x1000;
    return iVar7;
  }
  uVar8 = (*pcVar5)((int *)puVar6[0xf]);
  if ((int)uVar8 < 0x20) {
    puVar6[0x1f] = 0x200;
    return iVar7;
  }
  if (0x10000 < (int)uVar8) {
    uVar8 = 0x10000;
  }
  puVar6[0x1f] = uVar8;
  return iVar7;
}


/* FUN_00542600 @ 00542600  kind=lib  attributed-by=lib-island  size=749 */

int FUN_00542600(int param_1,uint *param_2,int param_3,int param_4,int param_5)

{
  void *_Dst;
  bool bVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  undefined8 uVar9;
  uint local_c;
  void *local_8;
  
  puVar3 = param_2;
  iVar2 = param_1;
  local_8 = *(void **)(param_1 + 0xb0);
  if (param_4 == 0) {
    piVar7 = *(int **)(param_1 + 0x44);
  }
  else {
    piVar7 = *(int **)(param_1 + 0x40);
  }
  iVar4 = (**(code **)(*piVar7 + 8))(piVar7,&local_c,4,*param_2,param_2[1]);
  if (iVar4 != 0) {
    return iVar4;
  }
  uVar6 = *puVar3;
  uVar8 = (((local_c & 0xff) << 8 | local_c >> 8 & 0xff) << 8 | local_c >> 0x10 & 0xff) << 8 |
          local_c >> 0x18;
  iVar4 = (**(code **)(*piVar7 + 8))
                    (piVar7,local_8,*(undefined4 *)(iVar2 + 0x80),uVar6 + 4,
                     puVar3[1] + (uint)(0xfffffffb < uVar6));
  if (iVar4 != 0) {
    return iVar4;
  }
  uVar5 = *(int *)(iVar2 + 0x80) + param_4 * 4 + 4;
  uVar6 = *param_2;
  *param_2 = *param_2 + uVar5;
  param_2[1] = param_2[1] + ((int)uVar5 >> 0x1f) + (uint)CARRY4(uVar6,uVar5);
  if ((uVar8 == 0) || (uVar8 == DAT_007666d0 / *(int *)(iVar2 + 0x80) + 1U)) {
    return 0x65;
  }
  if ((*(uint *)(iVar2 + 0x18) < uVar8) || (iVar4 = FUN_0054c2e0(param_3,uVar8), iVar4 != 0)) {
    return 0;
  }
  if (param_4 != 0) {
    iVar4 = FUN_00544d30(piVar7,*param_2 - 4,param_2[1] - (uint)(*param_2 < 4),&local_c);
    if (iVar4 != 0) {
      return iVar4;
    }
    if ((param_5 == 0) && (uVar6 = FUN_00541b50(iVar2,local_8), uVar6 != local_c)) {
      return 0x65;
    }
  }
  if ((param_3 != 0) && (iVar4 = FUN_0054c100(param_3,uVar8), iVar4 != 0)) {
    return iVar4;
  }
  iVar4 = 0;
  if ((uVar8 == 1) && (*(ushort *)(iVar2 + 0x76) != (ushort)*(byte *)((int)local_8 + 0x14))) {
    *(ushort *)(iVar2 + 0x76) = (ushort)*(byte *)((int)local_8 + 0x14);
  }
  if (*(int *)(iVar2 + 0xb8) == 0) {
    param_1 = FUN_00542180(iVar2,uVar8);
  }
  else {
    param_1 = 0;
  }
  if (param_4 == 0) {
    if ((param_1 == 0) || ((*(byte *)(param_1 + 0x18) & 4) == 0)) goto LAB_005427a0;
LAB_0054280e:
    bVar1 = false;
  }
  else {
    if (*(char *)(iVar2 + 7) == '\0') {
      if ((*(int *)(iVar2 + 0x54) <= (int)param_2[1]) &&
         ((*(int *)(iVar2 + 0x54) < (int)param_2[1] || (*(uint *)(iVar2 + 0x50) < *param_2))))
      goto LAB_0054280e;
    }
LAB_005427a0:
    bVar1 = true;
  }
  if ((**(int **)(iVar2 + 0x3c) == 0) ||
     (((*(byte *)(iVar2 + 0xf) < 4 && (*(byte *)(iVar2 + 0xf) != 0)) || (!bVar1)))) {
    if (param_4 != 0) goto LAB_00542856;
    if (param_1 == 0) {
      *(char *)(iVar2 + 0x13) = *(char *)(iVar2 + 0x13) + '\x01';
      iVar4 = FUN_0055eb70(iVar2,uVar8,&param_1,1);
      *(char *)(iVar2 + 0x13) = *(char *)(iVar2 + 0x13) + -1;
      if (iVar4 != 0) {
        return iVar4;
      }
      *(ushort *)(param_1 + 0x18) = *(ushort *)(param_1 + 0x18) & 0xfff7;
      FUN_00561050(param_1);
      iVar4 = 0;
      goto LAB_00542856;
    }
  }
  else {
    iVar4 = *(int *)(iVar2 + 0x80);
    uVar9 = __allmul(uVar8 - 1,0,iVar4,iVar4 >> 0x1f);
    iVar4 = FUN_0055ea40(*(undefined4 *)(iVar2 + 0x3c),local_8,iVar4,uVar9);
    if (*(uint *)(iVar2 + 0x20) < uVar8) {
      *(uint *)(iVar2 + 0x20) = uVar8;
    }
    if (*(int *)(iVar2 + 0x58) != 0) {
      FUN_0054b6e0(*(int *)(iVar2 + 0x58),uVar8,local_8);
    }
LAB_00542856:
    if (param_1 == 0) {
      return iVar4;
    }
  }
  _Dst = *(void **)(param_1 + 4);
  memcpy(_Dst,local_8,*(size_t *)(iVar2 + 0x80));
  (**(code **)(iVar2 + 0xac))(param_1);
  if (param_4 != 0) {
    if (param_5 != 0) {
      if ((*(int *)(iVar2 + 0x54) < (int)param_2[1]) ||
         ((*(int *)(iVar2 + 0x54) <= (int)param_2[1] && (*(uint *)(iVar2 + 0x50) < *param_2))))
      goto LAB_005428a8;
    }
    FUN_00561000(param_1);
  }
LAB_005428a8:
  if (uVar8 == 1) {
    *(undefined8 *)(iVar2 + 100) = *(undefined8 *)((int)_Dst + 0x18);
    *(undefined8 *)(iVar2 + 0x6c) = *(undefined8 *)((int)_Dst + 0x20);
  }
  FUN_00561130(param_1);
  return iVar4;
}


/* FUN_005428f0 @ 005428f0  kind=lib  attributed-by=lib-island  size=48 */

void FUN_005428f0(int param_1)

{
  int iVar1;
  
  for (iVar1 = *(int *)(param_1 + 0x58); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x2c)) {
    *(undefined4 *)(iVar1 + 0x10) = 1;
  }
  FUN_005611b0(*(undefined4 *)(param_1 + 0xb4),0);
  return;
}


/* FUN_00542920 @ 00542920  kind=lib  attributed-by=lib-island  size=246 */

/* WARNING: Removing unreachable block (ram,0x005429a4) */
/* WARNING: Removing unreachable block (ram,0x005429d1) */

int FUN_00542920(int param_1,undefined4 param_2)

{
  int *piVar1;
  size_t sVar2;
  void *_Dst;
  int iVar3;
  longlong lVar4;
  uint local_20;
  int local_1c;
  int local_18;
  size_t local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  piVar1 = *(int **)(param_1 + 0x3c);
  if ((*piVar1 == 0) || ((*(byte *)(param_1 + 0xf) < 4 && (*(byte *)(param_1 + 0xf) != 0)))) {
    return 0;
  }
  sVar2 = *(size_t *)(param_1 + 0x80);
  local_14 = sVar2;
  iVar3 = (**(code **)(*piVar1 + 0x18))(piVar1,&local_20);
  local_10 = (int)sVar2 >> 0x1f;
  local_c = sVar2;
  lVar4 = __allmul(param_2,0,sVar2,local_10);
  local_18 = (int)((ulonglong)lVar4 >> 0x20);
  if (iVar3 != 0) {
    return iVar3;
  }
  if (lVar4 == CONCAT44(local_1c,local_20)) {
    return 0;
  }
  if (lVar4 < CONCAT44(local_1c,local_20)) {
    iVar3 = (**(code **)(**(int **)(param_1 + 0x3c) + 0x10))(*(int **)(param_1 + 0x3c),lVar4);
  }
  else {
    local_8 = local_c + local_20;
    if (lVar4 < CONCAT44(local_10 + local_1c + (uint)CARRY4(local_c,local_20),local_8))
    goto LAB_00542a07;
    _Dst = *(void **)(param_1 + 0xb0);
    memset(_Dst,0,local_14);
    iVar3 = FUN_0055ea40(*(undefined4 *)(param_1 + 0x3c),_Dst,local_14,(uint)lVar4 - local_c,
                         (local_18 - local_10) - (uint)((uint)lVar4 < local_c));
  }
  if (iVar3 != 0) {
    return iVar3;
  }
LAB_00542a07:
  *(undefined4 *)(param_1 + 0x20) = param_2;
  return 0;
}


/* FUN_00542a20 @ 00542a20  kind=lib  attributed-by=lib-island  size=274 */

void FUN_00542a20(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  FUN_0054c040(*(undefined4 *)(param_1 + 0x38));
  *(undefined4 *)(param_1 + 0x38) = 0;
  FUN_005455d0(param_1);
  if (*(int *)(param_1 + 0xb8) == 0) {
    if (*(char *)(param_1 + 4) != '\0') goto LAB_00542ad0;
    piVar1 = *(int **)(param_1 + 0x3c);
    if (*piVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (**(code **)(*piVar1 + 0x30))(piVar1);
    }
    if (((uVar2 & 0x800) == 0) || ((*(byte *)(param_1 + 5) & 5) != 1)) {
      piVar1 = *(int **)(param_1 + 0x40);
      if (*piVar1 != 0) {
        (**(code **)(*piVar1 + 4))(piVar1);
        *piVar1 = 0;
      }
    }
    piVar1 = *(int **)(param_1 + 0x3c);
    if (*piVar1 != 0) {
      iVar3 = (**(code **)(*piVar1 + 0x20))(piVar1,0);
      if (*(char *)(param_1 + 0x10) != '\x05') {
        *(undefined1 *)(param_1 + 0x10) = 0;
      }
      if ((iVar3 != 0) && (*(char *)(param_1 + 0xf) == '\x06')) {
        *(undefined1 *)(param_1 + 0x10) = 5;
      }
    }
    *(undefined1 *)(param_1 + 0x11) = 0;
  }
  else {
    FUN_00577dd0(*(int *)(param_1 + 0xb8));
  }
  *(undefined1 *)(param_1 + 0xf) = 0;
LAB_00542ad0:
  if (*(int *)(param_1 + 0x28) != 0) {
    for (iVar3 = *(int *)(param_1 + 0x58); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x2c)) {
      *(undefined4 *)(iVar3 + 0x10) = 1;
    }
    FUN_005611b0(*(undefined4 *)(param_1 + 0xb4),0);
    *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_1 + 0xc);
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  return;
}


/* FUN_00542b40 @ 00542b40  kind=lib  attributed-by=lib-island  size=113 */

int FUN_00542b40(int param_1,int param_2)

{
  int iVar1;
  
  while( true ) {
    if ((param_2 <= (int)(uint)*(byte *)(param_1 + 0x10)) && (*(byte *)(param_1 + 0x10) != 5)) {
      return 0;
    }
    iVar1 = (**(code **)(**(int **)(param_1 + 0x3c) + 0x1c))(*(int **)(param_1 + 0x3c),param_2);
    if (iVar1 == 0) {
      if ((*(char *)(param_1 + 0x10) != '\x05') || (param_2 == 4)) {
        *(char *)(param_1 + 0x10) = (char)param_2;
      }
      return 0;
    }
    if (iVar1 != 5) break;
    iVar1 = (**(code **)(param_1 + 0x98))(*(undefined4 *)(param_1 + 0x9c));
    if (iVar1 == 0) {
      return 5;
    }
  }
  return iVar1;
}


/* FUN_00542bc0 @ 00542bc0  kind=lib  attributed-by=lib-island  size=425 */

uint FUN_00542bc0(int param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar2 = *(undefined4 *)(param_1 + 4);
  iVar3 = *(int *)(param_1 + 0x10);
  uVar4 = *(uint *)(iVar3 + 0x28);
  if (uVar4 == 0) {
    if (*(char *)(iVar3 + 0xd) != '\0') {
      return 3;
    }
    uVar4 = 0;
    if ((*(char *)(iVar3 + 0xf) != '\x02') || (uVar4 = FUN_005421b0(iVar3), uVar4 == 0)) {
      FUN_00561050(param_1);
      uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x38);
      iVar5 = FUN_0054c2e0(uVar6,*(undefined4 *)(param_1 + 0x14));
      if ((iVar5 == 0) || (iVar5 = FUN_0057a8b0(param_1), iVar5 != 0)) {
        iVar5 = FUN_0054c2e0(uVar6,*(undefined4 *)(param_1 + 0x14));
        if ((iVar5 == 0) && (*(int *)(iVar3 + 0xb8) == 0)) {
          if ((*(uint *)(iVar3 + 0x1c) < *(uint *)(param_1 + 0x14)) ||
             (**(int **)(iVar3 + 0x40) == 0)) {
            if (*(char *)(iVar3 + 0xf) != '\x04') {
              *(ushort *)(param_1 + 0x18) = *(ushort *)(param_1 + 0x18) | 4;
            }
          }
          else {
            iVar5 = *(int *)(iVar3 + 0x4c);
            uVar4 = *(uint *)(iVar3 + 0x48);
            uVar6 = FUN_00541b50(iVar3,uVar2);
            *(ushort *)(param_1 + 0x18) = *(ushort *)(param_1 + 0x18) | 4;
            uVar7 = FUN_00580010(*(undefined4 *)(iVar3 + 0x40),uVar4,iVar5,
                                 *(undefined4 *)(param_1 + 0x14));
            if (uVar7 != 0) {
              return uVar7;
            }
            uVar7 = FUN_0055ea40(*(undefined4 *)(iVar3 + 0x40),uVar2,*(undefined4 *)(iVar3 + 0x80),
                                 uVar4 + 4,iVar5 + (uint)(0xfffffffb < uVar4));
            if (uVar7 != 0) {
              return uVar7;
            }
            uVar7 = *(uint *)(iVar3 + 0x80);
            uVar4 = FUN_00580010(*(undefined4 *)(iVar3 + 0x40),uVar7 + uVar4 + 4,
                                 ((int)uVar7 >> 0x1f) + iVar5 + (uint)CARRY4(uVar7,uVar4) +
                                 (uint)(0xfffffffb < uVar7 + uVar4),uVar6);
            if (uVar4 != 0) {
              return uVar4;
            }
            uVar7 = *(int *)(iVar3 + 0x80) + 8;
            puVar1 = (uint *)(iVar3 + 0x48);
            uVar4 = *puVar1;
            *puVar1 = *puVar1 + uVar7;
            *(int *)(iVar3 + 0x4c) =
                 *(int *)(iVar3 + 0x4c) + ((int)uVar7 >> 0x1f) + (uint)CARRY4(uVar4,uVar7);
            *(int *)(iVar3 + 0x2c) = *(int *)(iVar3 + 0x2c) + 1;
            uVar7 = FUN_0054c100(*(undefined4 *)(iVar3 + 0x38),*(undefined4 *)(param_1 + 0x14));
            uVar8 = FUN_00528db0(iVar3,*(undefined4 *)(param_1 + 0x14));
            uVar4 = 0;
            if ((uVar7 | uVar8) != 0) {
              return uVar7 | uVar8;
            }
          }
        }
        iVar5 = FUN_0057a8b0(param_1);
        if (iVar5 != 0) {
          uVar4 = FUN_0057a9b0(param_1);
        }
      }
      if (*(uint *)(iVar3 + 0x18) < *(uint *)(param_1 + 0x14)) {
        *(uint *)(iVar3 + 0x18) = *(uint *)(param_1 + 0x14);
      }
    }
  }
  return uVar4;
}


/* FUN_00542d70 @ 00542d70  kind=lib  attributed-by=lib-island  size=119 */

void FUN_00542d70(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  undefined1 uVar6;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 4);
  iVar5 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar1 + 100),*(undefined1 *)(iVar1 + 0x65)),
                            *(undefined1 *)(iVar1 + 0x66)),*(undefined1 *)(iVar1 + 0x67)) + 1;
  uVar6 = (undefined1)((uint)iVar5 >> 0x18);
  *(undefined1 *)(iVar2 + 0x18) = uVar6;
  *(char *)(iVar2 + 0x1b) = (char)iVar5;
  uVar4 = (undefined1)((uint)iVar5 >> 0x10);
  *(undefined1 *)(iVar2 + 0x19) = uVar4;
  uVar3 = (undefined1)((uint)iVar5 >> 8);
  *(undefined1 *)(iVar2 + 0x1a) = uVar3;
  iVar1 = *(int *)(param_1 + 4);
  *(undefined1 *)(iVar1 + 0x5e) = uVar3;
  *(undefined1 *)(iVar1 + 0x5c) = uVar6;
  *(undefined1 *)(iVar1 + 0x5d) = uVar4;
  *(char *)(iVar1 + 0x5f) = (char)iVar5;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x60) = 0x27e22d00;
  return;
}


/* FUN_00542df0 @ 00542df0  kind=lib  attributed-by=lib-island  size=311 */

int FUN_00542df0(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_10;
  int local_8;
  
  local_8 = 0;
  if ((*(int *)param_1[0xf] != 0) ||
     (local_8 = (**(code **)(*param_1 + 0x18))
                          (*param_1,0,(int *)param_1[0xf],param_1[0x1e] & 0x87f7fU | 0x1e,0),
     local_8 == 0)) {
    iVar2 = local_8;
    if ((uint)param_1[9] < (uint)param_1[6]) {
      local_10 = __allmul(param_1[0x20],param_1[0x20] >> 0x1f,param_1[6],0);
      (**(code **)(*(int *)param_1[0xf] + 0x28))((int *)param_1[0xf],5,&local_10);
      param_1[9] = param_1[6];
    }
    do {
      if (param_2 == 0) {
        return iVar2;
      }
      uVar1 = *(uint *)(param_2 + 0x14);
      if ((uVar1 <= (uint)param_1[6]) && ((*(byte *)(param_2 + 0x18) & 0x20) == 0)) {
        uVar3 = __allmul(uVar1 - 1,0,param_1[0x20],param_1[0x20] >> 0x1f);
        local_8 = (int)uVar3;
        if (uVar1 == 1) {
          FUN_00542d70(param_2);
        }
        local_10._4_4_ = *(int *)(param_2 + 4);
        local_8 = (**(code **)(*(int *)param_1[0xf] + 0xc))
                            ((int *)param_1[0xf],local_10._4_4_,param_1[0x20],local_8,
                             (int)((ulonglong)uVar3 >> 0x20));
        if (uVar1 == 1) {
          *(undefined8 *)(param_1 + 0x19) = *(undefined8 *)(local_10._4_4_ + 0x18);
          *(undefined8 *)(param_1 + 0x1b) = *(undefined8 *)(local_10._4_4_ + 0x20);
        }
        if ((uint)param_1[8] < uVar1) {
          param_1[8] = uVar1;
        }
        param_1[0x2a] = param_1[0x2a] + 1;
        FUN_0054b6e0(param_1[0x16],uVar1,*(undefined4 *)(param_2 + 4));
      }
      param_2 = *(int *)(param_2 + 0xc);
      iVar2 = 0;
    } while (local_8 == 0);
  }
  return local_8;
}


/* FUN_00543f40 @ 00543f40  kind=lib  attributed-by=lib-island  size=263 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_00543f40(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (DAT_0076b3a4 < param_1) {
    DAT_0076b3a4 = param_1;
  }
  _DAT_0076b37c = param_1;
  if (param_1 <= DAT_0076b750) {
    if (DAT_0076b764 != 0) {
      (*DAT_00766630)(DAT_0076b764);
    }
    puVar1 = DAT_0076b768;
    if (DAT_0076b768 != (undefined4 *)0x0) {
      DAT_0076b768 = (undefined4 *)*DAT_0076b768;
      DAT_0076b76c = DAT_0076b76c + -1;
      DAT_0076b770 = (uint)(DAT_0076b76c < DAT_0076b758);
      DAT_0076b364 = DAT_0076b364 + 1;
      if (DAT_0076b38c < DAT_0076b364) {
        DAT_0076b38c = DAT_0076b364;
      }
    }
    if (DAT_0076b764 != 0) {
      (*DAT_00766638)(DAT_0076b764);
    }
    if (puVar1 != (undefined4 *)0x0) {
      return puVar1;
    }
  }
  puVar1 = (undefined4 *)FUN_0055da00(param_1);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (*DAT_00766608._4_4_)(puVar1);
    if (DAT_0076b764 != 0) {
      (*DAT_00766630)(DAT_0076b764);
    }
    DAT_0076b368 = DAT_0076b368 + iVar2;
    if (DAT_0076b390 < DAT_0076b368) {
      DAT_0076b390 = DAT_0076b368;
    }
    if (DAT_0076b764 != 0) {
      (*DAT_00766638)(DAT_0076b764);
    }
  }
  return puVar1;
}


/* FUN_00544190 @ 00544190  kind=lib  attributed-by=lib-island  size=246 */

int FUN_00544190(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  if ((param_1 < DAT_0076b75c) || (DAT_0076b760 <= param_1)) {
    iVar1 = (*DAT_00766608._4_4_)(param_1);
    if (DAT_0076b764 != 0) {
      (*DAT_00766630)(DAT_0076b764);
    }
    DAT_0076b368 = DAT_0076b368 - iVar1;
    if (DAT_0076b390 < DAT_0076b368) {
      DAT_0076b390 = DAT_0076b368;
    }
    if (DAT_0076b764 != 0) {
      (*DAT_00766638)(DAT_0076b764);
    }
    FUN_00524410(param_1);
  }
  else {
    if (DAT_0076b764 != 0) {
      (*DAT_00766630)(DAT_0076b764);
    }
    DAT_0076b364 = DAT_0076b364 + -1;
    if (DAT_0076b38c < DAT_0076b364) {
      DAT_0076b38c = DAT_0076b364;
    }
    *param_1 = DAT_0076b768;
    DAT_0076b76c = DAT_0076b76c + 1;
    DAT_0076b768 = param_1;
    DAT_0076b770 = (uint)(DAT_0076b76c < DAT_0076b758);
    if (DAT_0076b764 != 0) {
      (*DAT_00766638)(DAT_0076b764);
      return 0;
    }
  }
  return iVar1;
}


/* FUN_00544570 @ 00544570  kind=lib  attributed-by=lib-island  size=105 */

void FUN_00544570(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x1c);
  if (puVar1[2] == param_1) {
    for (iVar2 = *(int *)(param_1 + 0x24); (iVar2 != 0 && ((*(byte *)(iVar2 + 0x18) & 4) != 0));
        iVar2 = *(int *)(iVar2 + 0x24)) {
    }
    puVar1[2] = iVar2;
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    puVar1[1] = *(undefined4 *)(param_1 + 0x24);
  }
  else {
    *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x24) = *(undefined4 *)(param_1 + 0x24);
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    *puVar1 = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    return;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}


/* FUN_005445e0 @ 005445e0  kind=lib  attributed-by=lib-island  size=301 */

int FUN_005445e0(undefined4 *param_1,uint param_2,byte *param_3,undefined4 *param_4)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  
  uVar1 = param_2;
  if (param_2 < 2) {
    iVar5 = 0;
  }
  else {
    uVar4 = (uint)param_1[9] / 5 + 1;
    iVar3 = ((param_2 - 2) / uVar4) * uVar4;
    iVar5 = iVar3 + 2;
    if (iVar5 == DAT_007666d0 / (uint)param_1[8] + 1) {
      iVar5 = iVar3 + 3;
    }
  }
  iVar3 = FUN_0055eb70(*param_1,iVar5,&param_2,0);
  pbVar2 = param_3;
  uVar4 = param_2;
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_2 + 4);
    iVar5 = ((uVar1 - iVar5) + -1) * 5;
    if (iVar5 < 0) {
      iVar5 = *(int *)(param_2 + 0x10);
      param_2 = iVar3;
      FUN_00561130(uVar4);
      if (*(int *)(*(int *)(iVar5 + 0xb4) + 0xc) == 0) {
        FUN_00541a10(iVar5);
      }
      uVar6 = 0xbff8;
    }
    else {
      *param_3 = *(byte *)(iVar5 + iVar3);
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar5 + 1 + iVar3),
                                              *(undefined1 *)(iVar5 + 2 + iVar3)),
                                     *(undefined1 *)(iVar5 + 3 + iVar3)),
                            *(undefined1 *)(iVar5 + 4 + iVar3));
      }
      iVar5 = *(int *)(param_2 + 0x10);
      param_2 = iVar3;
      FUN_00561130(uVar4);
      if (*(int *)(*(int *)(iVar5 + 0xb4) + 0xc) == 0) {
        FUN_00541a10(iVar5);
      }
      if ((*pbVar2 != 0) && (*pbVar2 < 6)) {
        return 0;
      }
      uVar6 = 0xc000;
    }
    FUN_00525a30(0xb,"database corruption at line %d of [%.10s]",uVar6,
                 "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
    iVar3 = 0xb;
  }
  return iVar3;
}


/* FUN_00544710 @ 00544710  kind=lib  attributed-by=lib-island  size=72 */

int FUN_00544710(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x24) / 5 + 1;
  iVar2 = ((param_2 - 2) / uVar1) * uVar1;
  iVar3 = iVar2 + 2;
  if (iVar3 == DAT_007666d0 / *(uint *)(param_1 + 0x20) + 1) {
    iVar3 = iVar2 + 3;
  }
  return iVar3;
}


/* FUN_00544760 @ 00544760  kind=lib  attributed-by=lib-island  size=261 */

void FUN_00544760(undefined4 *param_1,int param_2,char param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int local_8;
  
  if (*param_5 == 0) {
    if (param_2 == 0) {
      FUN_00525a30(0xb,"database corruption at line %d of [%.10s]",0xbfc0,
                   "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
      *param_5 = 0xb;
      return;
    }
    iVar1 = FUN_00544710(param_1,param_2);
    iVar2 = FUN_0055eb70(*param_1,iVar1,&local_8,0);
    if (iVar2 != 0) {
      *param_5 = iVar2;
      return;
    }
    iVar1 = ((param_2 - iVar1) + -1) * 5;
    if (iVar1 < 0) {
      FUN_00525a30(0xb,"database corruption at line %d of [%.10s]",0xbfcb,
                   "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
      *param_5 = 0xb;
    }
    else {
      pcVar3 = (char *)(*(int *)(local_8 + 4) + iVar1);
      if ((param_3 != *pcVar3) || (iVar1 = FUN_00559fd0(pcVar3 + 1), iVar1 != param_4)) {
        iVar1 = FUN_00560330(local_8);
        *param_5 = iVar1;
        if (iVar1 == 0) {
          *pcVar3 = param_3;
          FUN_00563650(pcVar3 + 1,param_4);
        }
      }
    }
    if (local_8 != 0) {
      iVar1 = *(int *)(local_8 + 0x10);
      FUN_00561130(local_8);
      if (*(int *)(*(int *)(iVar1 + 0xb4) + 0xc) == 0) {
        FUN_00541a10(iVar1);
      }
    }
  }
  return;
}


/* FUN_00544870 @ 00544870  kind=lib  attributed-by=lib-island  size=104 */

void FUN_00544870(int param_1,int param_2,int *param_3)

{
  undefined1 *puVar1;
  undefined1 local_24 [24];
  ushort local_c;
  
  if ((*param_3 == 0) && (FUN_0052eda0(param_1,param_2,local_24), local_c != 0)) {
    puVar1 = (undefined1 *)((uint)local_c + param_2);
    FUN_00544760(*(undefined4 *)(param_1 + 0x34),
                 CONCAT31(CONCAT21(CONCAT11(*puVar1,puVar1[1]),puVar1[2]),puVar1[3]),3,
                 *(undefined4 *)(param_1 + 0x48),param_3);
  }
  return;
}


/* FUN_005448e0 @ 005448e0  kind=lib  attributed-by=lib-island  size=709 */

void FUN_005448e0(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int local_8;
  
  iVar6 = *param_2;
  iVar10 = iVar6 + 2;
  local_8 = *(int *)(param_1 + 0x40);
  iVar1 = *(int *)(param_1 + 8);
  if (*(int *)(param_1 + 0x3c) < iVar10) {
    local_8 = *(int *)(param_1 + 0x4c) + 1;
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar10;
  }
  else {
    *(int *)(param_1 + 0x40) = local_8 + iVar10;
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) - iVar10;
  }
  if (*(char *)(param_1 + 0x13) == '\0') {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
    iVar8 = *(int *)(param_1 + 0x4c);
  }
  else {
    bVar2 = *(char *)(param_1 + 0x13) - 1;
    *(byte *)(param_1 + 0x13) = bVar2;
    iVar8 = *(int *)(param_1 + 0x1c + (uint)bVar2 * 4);
  }
  FUN_00554130(param_1);
  FUN_005546b0(param_1,param_2,local_8,0);
  iVar4 = param_2[1];
  iVar5 = *(int *)(iVar1 + 0x1c);
  if ((iVar5 < *(int *)(iVar1 + 0x20)) || (iVar3 = FUN_0053b4b0(iVar1), iVar3 == 0)) {
    *(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x1c) + 1;
    iVar3 = *(int *)(iVar1 + 4);
    *(undefined2 *)(iVar3 + iVar5 * 0x14) = 0x37;
    iVar3 = iVar3 + iVar5 * 0x14;
    *(int *)(iVar3 + 4) = iVar4;
    *(undefined1 *)(iVar3 + 3) = 0;
    *(int *)(iVar3 + 8) = local_8 + iVar6;
    *(undefined4 *)(iVar3 + 0xc) = 0;
    *(undefined4 *)(iVar3 + 0x10) = 0;
  }
  FUN_00554ca0(param_1,param_4,local_8 + 1 + iVar6,1);
  iVar6 = *(int *)(iVar1 + 0x1c);
  if ((iVar6 < *(int *)(iVar1 + 0x20)) || (iVar4 = FUN_0053b4b0(iVar1), iVar4 == 0)) {
    *(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x1c) + 1;
    iVar4 = *(int *)(iVar1 + 4);
    *(int *)(iVar4 + 4 + iVar6 * 0x14) = local_8;
    *(undefined2 *)(iVar4 + iVar6 * 0x14) = 0x1f;
    *(undefined1 *)(iVar4 + 3 + iVar6 * 0x14) = 0;
    *(int *)(iVar4 + 8 + iVar6 * 0x14) = iVar10;
    *(int *)(iVar4 + 0xc + iVar6 * 0x14) = iVar8;
    *(undefined4 *)(iVar4 + 0x10 + iVar6 * 0x14) = 0;
  }
  bVar2 = *(byte *)(param_3 + 6);
  iVar6 = param_2[1];
  iVar4 = *(int *)(iVar1 + 0x1c);
  if ((iVar4 < *(int *)(iVar1 + 0x20)) || (iVar5 = FUN_0053b4b0(iVar1), iVar5 == 0)) {
    *(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x1c) + 1;
    iVar5 = *(int *)(iVar1 + 4);
    *(byte *)(iVar5 + iVar4 * 0x14) = (byte)~bVar2 >> 6 & 1 | 0x60;
    *(int *)(iVar5 + 4 + iVar4 * 0x14) = iVar6;
    *(undefined1 *)(iVar5 + 3 + iVar4 * 0x14) = 0;
    *(int *)(iVar5 + 8 + iVar4 * 0x14) = iVar8;
    *(undefined4 *)(iVar5 + 0xc + iVar4 * 0x14) = 0;
    *(undefined4 *)(iVar5 + 0x10 + iVar4 * 0x14) = 0;
    *(undefined1 *)(iVar5 + 1 + iVar4 * 0x14) = 0;
  }
  if ((iVar8 != 0) && (*(byte *)(param_1 + 0x13) < 8)) {
    iVar4 = 0;
    iVar6 = param_1 + 100;
    do {
      if (*(int *)(iVar6 + 0x10) == iVar8) {
        *(undefined1 *)(iVar6 + 8) = 1;
        goto LAB_00544abf;
      }
      iVar4 = iVar4 + 1;
      iVar6 = iVar6 + 0x18;
    } while (iVar4 < 10);
    *(int *)(param_1 + 0x1c + (uint)*(byte *)(param_1 + 0x13) * 4) = iVar8;
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
  }
LAB_00544abf:
  FUN_00554430(param_1,local_8,iVar10);
  if (*(int *)(param_1 + 0x3c) < iVar10) {
    *(int *)(param_1 + 0x3c) = iVar10;
    *(int *)(param_1 + 0x40) = local_8;
  }
  iVar10 = *(int *)(param_3 + 8);
  if (iVar10 != 0) {
    if (*(int *)(param_3 + 0xc) != 0) {
      iVar10 = *(int *)(param_3 + 0xc) + 1;
    }
    uVar7 = FUN_0056be30(iVar1,0x7a,iVar10);
    iVar6 = *(int *)(iVar1 + 0x1c);
    if ((iVar6 < *(int *)(iVar1 + 0x20)) || (iVar8 = FUN_0053b4b0(iVar1), iVar8 == 0)) {
      *(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x1c) + 1;
      iVar8 = *(int *)(iVar1 + 4);
      *(undefined2 *)(iVar8 + iVar6 * 0x14) = 0x14;
      *(undefined1 *)(iVar8 + 3 + iVar6 * 0x14) = 0;
      *(int *)(iVar8 + 4 + iVar6 * 0x14) = iVar10;
      *(undefined4 *)(iVar8 + 8 + iVar6 * 0x14) = 0xffffffff;
      *(undefined4 *)(iVar8 + 0xc + iVar6 * 0x14) = 0;
      *(undefined4 *)(iVar8 + 0x10 + iVar6 * 0x14) = 0;
    }
    uVar9 = FUN_0056bdc0(iVar1,1);
    if ((-1 < (int)uVar7) && (uVar7 < *(uint *)(iVar1 + 0x1c))) {
      *(uint *)(*(int *)(iVar1 + 4) + 8 + uVar7 * 0x14) = *(uint *)(iVar1 + 0x1c);
    }
    FUN_0056be30(iVar1,0x43,param_2[1]);
    FUN_0056be30(iVar1,0x3b,param_2[1]);
    if ((-1 < (int)uVar9) && (uVar9 < *(uint *)(iVar1 + 0x1c))) {
      *(uint *)(*(int *)(iVar1 + 4) + 8 + uVar9 * 0x14) = *(uint *)(iVar1 + 0x1c);
    }
  }
  return;
}


/* FUN_00544bb0 @ 00544bb0  kind=lib  attributed-by=lib-island  size=98 */

undefined4 FUN_00544bb0(int param_1,int param_2,char param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (*(char *)(param_1 + 9) == '\0') {
    return 0;
  }
  if ((*(int *)(iVar1 + 0x4c) != param_1) && ((*(byte *)(iVar1 + 0x16) & 0x20) != 0)) {
    return 0x106;
  }
  piVar2 = *(int **)(iVar1 + 0x48);
  while( true ) {
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    if (((*piVar2 != param_1) && (piVar2[1] == param_2)) && ((char)piVar2[2] != param_3)) break;
    piVar2 = (int *)piVar2[3];
  }
  if (param_3 == '\x02') {
    *(ushort *)(iVar1 + 0x16) = *(ushort *)(iVar1 + 0x16) | 0x40;
  }
  return 0x106;
}


/* FUN_00544c20 @ 00544c20  kind=lib  attributed-by=lib-island  size=264 */

void FUN_00544c20(void)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  char local_108 [256];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  if ((char)DAT_0076b520 == '\0') {
    DAT_0076b520._1_2_ = 0;
    iVar3 = FUN_005224a0(0);
    (**(code **)(iVar3 + 0x38))(iVar3,0x100,local_108);
    iVar3 = 0;
    do {
      *(char *)((int)&DAT_0076b520 + iVar3 + 3) = (char)iVar3;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x100);
    iVar3 = 0;
    do {
      bVar4 = DAT_0076b520._2_1_ + local_108[iVar3] + *(char *)((int)&DAT_0076b520 + iVar3 + 3);
      DAT_0076b520._1_2_ = CONCAT11(bVar4,DAT_0076b520._1_1_);
      iVar5 = iVar3 + 1;
      uVar1 = *(undefined1 *)((int)&DAT_0076b520 + bVar4 + 3);
      *(undefined1 *)((int)&DAT_0076b520 + bVar4 + 3) =
           *(undefined1 *)((int)&DAT_0076b520 + iVar3 + 3);
      *(undefined1 *)((int)&DAT_0076b520 + iVar3 + 3) = uVar1;
      iVar3 = iVar5;
    } while (iVar5 < 0x100);
    DAT_0076b520._0_1_ = '\x01';
  }
  bVar4 = DAT_0076b520._1_1_ + 1;
  cVar2 = *(char *)((int)&DAT_0076b520 + bVar4 + 3);
  DAT_0076b520._2_1_ = DAT_0076b520._2_1_ + cVar2;
  DAT_0076b520._1_1_ = bVar4;
  *(undefined1 *)((int)&DAT_0076b520 + bVar4 + 3) =
       *(undefined1 *)((int)&DAT_0076b520 + DAT_0076b520._2_1_ + 3);
  *(char *)((int)&DAT_0076b520 + DAT_0076b520._2_1_ + 3) = cVar2;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00544d30 @ 00544d30  kind=lib  attributed-by=lib-island  size=78 */

int FUN_00544d30(int *param_1,undefined4 param_2,undefined4 param_3,uint *param_4)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 8))(param_1,&param_1,4,param_2,param_3);
  if (iVar1 == 0) {
    *param_4 = ((((uint)param_1 & 0xff) << 8 | (uint)param_1 >> 8 & 0xff) << 8 |
               (uint)param_1 >> 0x10 & 0xff) << 8 | (uint)param_1 >> 0x18;
  }
  return iVar1;
}


/* FUN_00544d80 @ 00544d80  kind=lib  attributed-by=lib-island  size=245 */

int FUN_00544d80(int param_1)

{
  int iVar1;
  int iVar2;
  size_t _Size;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  iVar3 = param_1;
  iVar1 = *(int *)(param_1 + 0x14);
  iVar2 = *(int *)(param_1 + 0x10);
  _Size = *(size_t *)(iVar2 + 0x80);
  param_1 = 0;
  if (**(int **)(iVar2 + 0x3c) == 0) {
    memset(*(void **)(iVar3 + 4),0,_Size);
    return 0;
  }
  if (*(int *)(iVar2 + 0xb8) != 0) {
    iVar4 = FUN_00578400(*(int *)(iVar2 + 0xb8),iVar1,&param_1,_Size,*(undefined4 *)(iVar3 + 4));
    if ((iVar4 != 0) || (param_1 != 0)) goto LAB_00544e27;
  }
  uVar5 = __allmul(iVar1 + -1,0,*(int *)(iVar2 + 0x80),*(int *)(iVar2 + 0x80) >> 0x1f);
  iVar4 = (**(code **)(**(int **)(iVar2 + 0x3c) + 8))
                    (*(int **)(iVar2 + 0x3c),*(undefined4 *)(iVar3 + 4),_Size,uVar5);
  if (iVar4 == 0x20a) {
    iVar4 = 0;
  }
LAB_00544e27:
  if (iVar1 == 1) {
    if (iVar4 != 0) {
      *(undefined4 *)(iVar2 + 100) = 0xffffffff;
      *(undefined4 *)(iVar2 + 0x68) = 0xffffffff;
      *(undefined4 *)(iVar2 + 0x6c) = 0xffffffff;
      *(undefined4 *)(iVar2 + 0x70) = 0xffffffff;
      return iVar4;
    }
    iVar1 = *(int *)(iVar3 + 4);
    *(undefined8 *)(iVar2 + 100) = *(undefined8 *)(iVar1 + 0x18);
    *(undefined8 *)(iVar2 + 0x6c) = *(undefined8 *)(iVar1 + 0x20);
  }
  return iVar4;
}


/* FUN_00544e80 @ 00544e80  kind=lib  attributed-by=lib-island  size=530 */

/* WARNING: Removing unreachable block (ram,0x00544eff) */

void FUN_00544e80(int param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5,
                 uint param_6)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  uint local_18;
  uint local_14;
  undefined8 local_10;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_14 = param_5;
  iVar4 = *(int *)(param_1 + 0x48);
  local_18 = param_6;
  local_10 = 0;
  if (iVar4 == 0 && *(int *)(param_1 + 0x4c) == 0) {
    lVar5 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0x7c);
    lVar5 = __alldiv(iVar4 + -1,*(int *)(param_1 + 0x4c) - (uint)(iVar4 == 0),uVar3,0);
    lVar5 = __allmul(lVar5 + 1,uVar3,0);
  }
  *(longlong *)(param_1 + 0x48) = lVar5;
  if ((CONCAT44(param_4,param_3) < (longlong)(lVar5 + (ulonglong)*(uint *)(param_1 + 0x7c))) ||
     ((((param_2 != 0 || ((int)lVar5 != *(int *)(param_1 + 0x50))) ||
       ((int)((ulonglong)lVar5 >> 0x20) != *(int *)(param_1 + 0x54))) &&
      (((iVar4 = (**(code **)(**(int **)(param_1 + 0x40) + 8))
                           (*(int **)(param_1 + 0x40),&local_10,8,lVar5), iVar4 != 0 ||
        ((int)local_10 != -0x6fa2a27)) || (local_10._4_4_ != -0x289c5ee0)))))) goto LAB_00545081;
  iVar4 = FUN_00544d30(*(undefined4 *)(param_1 + 0x40),lVar5 + 8,local_14);
  if (((iVar4 == 0) &&
      (iVar4 = FUN_00544d30(*(undefined4 *)(param_1 + 0x40),lVar5 + 0xc,param_1 + 0x30), iVar4 == 0)
      ) && (iVar4 = FUN_00544d30(*(undefined4 *)(param_1 + 0x40),lVar5 + 0x10,local_18), iVar4 == 0)
     ) {
    if (*(int *)(param_1 + 0x48) == 0 && *(int *)(param_1 + 0x4c) == 0) {
      iVar4 = FUN_00544d30(*(undefined4 *)(param_1 + 0x40),lVar5 + 0x14,&local_18);
      if ((iVar4 != 0) ||
         (iVar4 = FUN_00544d30(*(undefined4 *)(param_1 + 0x40),lVar5 + 0x18,&local_14),
         uVar2 = local_18, iVar4 != 0)) {
LAB_00545081:
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      if (local_14 == 0) {
        local_14 = *(uint *)(param_1 + 0x80);
      }
      if (((((local_14 < 0x200) || (local_18 < 0x20)) || (0x10000 < local_14)) ||
          ((0x10000 < local_18 || ((local_14 & local_14 - 1) != 0)))) ||
         ((local_18 & local_18 - 1) != 0)) goto LAB_00545081;
      FUN_0055fe80(param_1,&local_14,0xffffffff);
      *(uint *)(param_1 + 0x7c) = uVar2;
    }
    puVar1 = (uint *)(param_1 + 0x48);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + *(uint *)(param_1 + 0x7c);
    *(int *)(param_1 + 0x4c) =
         *(int *)(param_1 + 0x4c) + (uint)CARRY4(uVar2,*(uint *)(param_1 + 0x7c));
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_005450a0 @ 005450a0  kind=lib  attributed-by=lib-island  size=318 */

void FUN_005450a0(int *param_1,undefined1 *param_2,uint param_3)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint local_1c;
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  *param_2 = 0;
  iVar2 = (**(code **)(*param_1 + 0x18))(param_1,&local_1c);
  if (((iVar2 == 0) && (-1 < local_18)) && ((0 < local_18 || (0xf < local_1c)))) {
    iVar2 = FUN_00544d30(param_1,local_1c - 0x10,local_18 - (uint)(local_1c < 0x10),&local_14);
    uVar4 = local_14;
    if ((iVar2 == 0) && (local_14 < param_3)) {
      iVar2 = FUN_00544d30(param_1,local_1c - 0xc,local_18 - (uint)(local_1c < 0xc),&local_14);
      if (iVar2 == 0) {
        iVar2 = (**(code **)(*param_1 + 8))
                          (param_1,&local_10,8,local_1c - 8,local_18 - (uint)(local_1c < 8));
        if (((iVar2 == 0) && (local_10 == -0x6fa2a27)) && (local_c == -0x289c5ee0)) {
          iVar2 = FUN_0055ea00(param_1,param_2,uVar4,(local_1c - uVar4) - 0x10,
                               (local_18 - (uint)(local_1c < uVar4)) -
                               (uint)(local_1c - uVar4 < 0x10));
          if (iVar2 == 0) {
            uVar3 = 0;
            if (uVar4 != 0) {
              do {
                pcVar1 = param_2 + uVar3;
                uVar3 = uVar3 + 1;
                local_14 = local_14 - (int)*pcVar1;
              } while (uVar3 < uVar4);
            }
            if (local_14 != 0) {
              uVar4 = 0;
            }
            param_2[uVar4] = 0;
            __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
            return;
          }
        }
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_005451e0 @ 005451e0  kind=lib  attributed-by=lib-island  size=232 */

undefined4 FUN_005451e0(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  int *local_8;
  
  local_8 = (int *)param_1[2];
  if (local_8 == (int *)0x0) {
    local_8 = (int *)FUN_0056c7b0(*param_1);
    param_1[2] = (int)local_8;
    if (local_8 != (int *)0x0) {
      FUN_0056bdc0(local_8,0x94);
    }
  }
  iVar1 = local_8[7];
  if ((*(byte *)(param_4 + 0x2a) & 0x10) == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = *(int **)(param_4 + 0x38);
    if (piVar3 != (int *)0x0) {
      do {
        if (*piVar3 == *param_1) break;
        piVar3 = (int *)piVar3[6];
      } while (piVar3 != (int *)0x0);
    }
  }
  if (param_2 < iVar1) {
    do {
      iVar2 = param_2;
      if (param_2 < 0) {
        iVar2 = iVar1 + -1;
      }
      if (*(char *)(*local_8 + 0x38) == '\0') {
        pcVar4 = (char *)(local_8[1] + iVar2 * 0x14);
      }
      else {
        pcVar4 = &DAT_0076b50c;
      }
      if ((*pcVar4 == '\'') && (*(int *)(pcVar4 + 0xc) == param_3)) {
        if (*(int *)(pcVar4 + 8) == *(int *)(param_4 + 0x20)) {
          return 1;
        }
        for (iVar2 = *(int *)(param_4 + 8); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x14)) {
          if (*(int *)(pcVar4 + 8) == *(int *)(iVar2 + 0x28)) {
            return 1;
          }
        }
      }
      if ((*pcVar4 == -0x79) && (*(int **)(pcVar4 + 0x10) == piVar3)) {
        return 1;
      }
      param_2 = param_2 + 1;
    } while (param_2 < iVar1);
  }
  return 0;
}


/* FUN_005452d0 @ 005452d0  kind=lib  attributed-by=lib-island  size=330 */

undefined4 FUN_005452d0(uint *param_1,uint param_2)

{
  int *piVar1;
  uint *puVar2;
  byte *pbVar3;
  uint *puVar4;
  void *_Dst;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  if (0x400 < param_2 * 8) {
    param_2 = 0x80;
  }
  if (param_2 != *param_1) {
    if (DAT_0076b3bc != (code *)0x0) {
      (*DAT_0076b3bc)();
    }
    _Dst = (void *)FUN_0055da00(param_2 * 8);
    if (DAT_0076b3c0 != (code *)0x0) {
      (*DAT_0076b3c0)();
    }
    if (_Dst != (void *)0x0) {
      FUN_00524410(param_1[3]);
      param_1[3] = (uint)_Dst;
      uVar5 = (*DAT_00766608._4_4_)(_Dst);
      uVar5 = uVar5 >> 3;
      *param_1 = uVar5;
      memset(_Dst,0,uVar5 * 8);
      puVar2 = (uint *)param_1[2];
      param_1[2] = 0;
joined_r0x00545365:
      do {
        if (puVar2 == (uint *)0x0) {
          return 1;
        }
        pbVar3 = (byte *)puVar2[3];
        uVar7 = 0;
        for (uVar6 = puVar2[4]; 0 < (int)uVar6; uVar6 = uVar6 - 1) {
          uVar7 = uVar7 ^ (uint)(byte)(&DAT_007120d8)[*pbVar3] ^ uVar7 * 8;
          pbVar3 = pbVar3 + 1;
        }
        puVar4 = (uint *)*puVar2;
        piVar1 = (int *)((int)_Dst + (uVar7 % uVar5) * 8);
        if (piVar1 != (int *)0x0) {
          if (*piVar1 == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = piVar1[1];
          }
          *piVar1 = *piVar1 + 1;
          piVar1[1] = (int)puVar2;
          if (uVar6 != 0) {
            *puVar2 = uVar6;
            puVar2[1] = *(uint *)(uVar6 + 4);
            if (*(undefined4 **)(uVar6 + 4) == (undefined4 *)0x0) {
              param_1[2] = (uint)puVar2;
              *(uint **)(uVar6 + 4) = puVar2;
              puVar2 = puVar4;
            }
            else {
              **(undefined4 **)(uVar6 + 4) = puVar2;
              *(uint **)(uVar6 + 4) = puVar2;
              puVar2 = puVar4;
            }
            goto joined_r0x00545365;
          }
        }
        *puVar2 = param_1[2];
        if (param_1[2] != 0) {
          *(uint **)(param_1[2] + 4) = puVar2;
        }
        puVar2[1] = 0;
        param_1[2] = (uint)puVar2;
        puVar2 = puVar4;
      } while( true );
    }
  }
  return 0;
}


/* FUN_00545420 @ 00545420  kind=lib  attributed-by=lib-island  size=254 */

void FUN_00545420(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int local_10;
  
  iVar1 = *param_1;
  local_10 = 0;
  if (0 < *(int *)(iVar1 + 0x14)) {
    piVar6 = (int *)(*(int *)(iVar1 + 0x10) + 0xc);
    do {
      for (puVar2 = *(undefined4 **)(*piVar6 + 0x10); puVar2 != (undefined4 *)0x0;
          puVar2 = (undefined4 *)*puVar2) {
        iVar3 = puVar2[2];
        for (iVar4 = *(int *)(iVar3 + 8); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x14)) {
          if ((param_2 == 0) || (iVar7 = FUN_00532570(param_2,iVar4), iVar7 != 0)) {
            iVar7 = *(int *)(iVar3 + 0x40);
            iVar9 = -1000000;
            if (iVar7 != 0) {
              iVar5 = *(int *)(*param_1 + 0x14);
              iVar9 = 0;
              if (0 < iVar5) {
                piVar8 = (int *)(*(int *)(*param_1 + 0x10) + 0xc);
                do {
                  if (*piVar8 == iVar7) break;
                  iVar9 = iVar9 + 1;
                  piVar8 = piVar8 + 4;
                } while (iVar9 < iVar5);
              }
            }
            piVar8 = param_1;
            if ((int *)param_1[0x6c] != (int *)0x0) {
              piVar8 = (int *)param_1[0x6c];
            }
            FUN_00550aa0(param_1,iVar9);
            piVar8[0x55] = piVar8[0x55] | 1 << ((byte)iVar9 & 0x1f);
            FUN_00563950(param_1,iVar4,0xffffffff);
          }
        }
      }
      local_10 = local_10 + 1;
      piVar6 = piVar6 + 4;
    } while (local_10 < *(int *)(iVar1 + 0x14));
  }
  return;
}


/* FUN_00545520 @ 00545520  kind=lib  attributed-by=lib-island  size=163 */

void FUN_00545520(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = *(int *)(param_2 + 8);
  do {
    if (iVar1 == 0) {
      return;
    }
    if ((param_3 == 0) || (iVar3 = FUN_00532570(param_3,iVar1), iVar3 != 0)) {
      iVar3 = -1000000;
      if (*(int *)(param_2 + 0x40) != 0) {
        iVar2 = *(int *)(*param_1 + 0x14);
        iVar3 = 0;
        if (0 < iVar2) {
          piVar4 = (int *)(*(int *)(*param_1 + 0x10) + 0xc);
          do {
            if (*piVar4 == *(int *)(param_2 + 0x40)) break;
            iVar3 = iVar3 + 1;
            piVar4 = piVar4 + 4;
          } while (iVar3 < iVar2);
        }
      }
      piVar4 = param_1;
      if ((int *)param_1[0x6c] != (int *)0x0) {
        piVar4 = (int *)param_1[0x6c];
      }
      FUN_00550aa0(param_1,iVar3);
      piVar4[0x55] = piVar4[0x55] | 1 << ((byte)iVar3 & 0x1f);
      FUN_00563950(param_1,iVar1,0xffffffff);
    }
    iVar1 = *(int *)(iVar1 + 0x14);
  } while( true );
}


/* FUN_005455d0 @ 005455d0  kind=lib  attributed-by=lib-island  size=120 */

void FUN_005455d0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x60)) {
    iVar2 = 0;
    do {
      FUN_0054c040(*(undefined4 *)(iVar2 + 0x10 + *(int *)(param_1 + 0x5c)));
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x30;
    } while (iVar3 < *(int *)(param_1 + 0x60));
  }
  if ((*(char *)(param_1 + 4) == '\0') ||
     ((undefined *)**(undefined4 **)(param_1 + 0x44) == &DAT_00712500)) {
    piVar1 = *(int **)(param_1 + 0x44);
    if (*piVar1 != 0) {
      (**(code **)(*piVar1 + 4))(piVar1);
      *piVar1 = 0;
    }
  }
  FUN_00524410(*(undefined4 *)(param_1 + 0x5c));
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  return;
}


/* FUN_00545650 @ 00545650  kind=lib  attributed-by=lib-island  size=229 */

void FUN_00545650(int *param_1,int param_2)

{
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  int local_8;
  
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    iVar3 = *param_1;
    uVar2 = *(undefined1 *)(iVar3 + 0x38);
    if (*(int *)(iVar3 + 0x1f0) == 0) {
      if (param_1 < param_1 + param_2 * 10) {
        local_8 = (uint)((int)(param_1 + param_2 * 10) + (-1 - (int)param_1)) / 0x28 + 1;
        param_1 = param_1 + 9;
        do {
          if ((*(ushort *)(param_1 + -2) & 0x2460) == 0) {
            if (*param_1 != 0) {
              FUN_005521a0(iVar3,*param_1);
              goto LAB_00545711;
            }
          }
          else {
            FUN_00574d80(param_1 + -9);
            FUN_005521a0(param_1[-9],*param_1);
            param_1[-8] = 0;
            param_1[-1] = 0;
LAB_00545711:
            *param_1 = 0;
          }
          *(undefined2 *)(param_1 + -2) = 0x80;
          param_1 = param_1 + 10;
          local_8 = local_8 + -1;
        } while (local_8 != 0);
      }
      *(undefined1 *)(iVar3 + 0x38) = uVar2;
    }
    else {
      piVar1 = param_1 + param_2 * 10;
      if (param_1 < piVar1) {
        do {
          FUN_005521a0(iVar3,param_1[9]);
          param_1 = param_1 + 10;
        } while (param_1 < piVar1);
        return;
      }
    }
  }
  return;
}


/* FUN_00545740 @ 00545740  kind=lib  attributed-by=lib-island  size=54 */

void FUN_00545740(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != 0) && (iVar1 = *(int *)(param_1 + 0x44), iVar1 != 0)) {
    iVar2 = *(int *)(iVar1 + 0x10);
    FUN_00561130(iVar1);
    if (*(int *)(*(int *)(iVar2 + 0xb4) + 0xc) == 0) {
      FUN_00541a10(iVar2);
    }
  }
  return;
}


/* FUN_00545780 @ 00545780  kind=lib  attributed-by=lib-island  size=667 */

void FUN_00545780(int *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  int local_8;
  
  piVar2 = (int *)param_1[2];
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)FUN_0056c7b0(*param_1);
    param_1[2] = (int)piVar2;
    if (piVar2 == (int *)0x0) {
      return;
    }
    FUN_0056bdc0(piVar2,0x94);
  }
  local_8 = -1000000;
  if (param_2[0x10] != 0) {
    iVar9 = *(int *)(*param_1 + 0x14);
    iVar8 = 0;
    local_8 = 0;
    if (0 < iVar9) {
      piVar3 = (int *)(*(int *)(*param_1 + 0x10) + 0xc);
      do {
        local_8 = iVar8;
        if (*piVar3 == param_2[0x10]) break;
        iVar8 = iVar8 + 1;
        piVar3 = piVar3 + 4;
        local_8 = iVar8;
      } while (iVar8 < iVar9);
    }
  }
  piVar3 = (int *)FUN_00568620(param_1,param_2);
  do {
    if (piVar3 == (int *)0x0) {
      iVar9 = piVar2[7];
      iVar8 = *param_2;
      if ((iVar9 < piVar2[8]) || (iVar7 = FUN_0053b4b0(piVar2), iVar7 == 0)) {
        iVar7 = piVar2[1];
        piVar2[7] = piVar2[7] + 1;
        *(undefined2 *)(iVar7 + iVar9 * 0x14) = 0x6c;
        *(undefined1 *)(iVar7 + 3 + iVar9 * 0x14) = 0;
        *(int *)(iVar7 + 4 + iVar9 * 0x14) = local_8;
        *(undefined4 *)(iVar7 + 8 + iVar9 * 0x14) = 0;
        *(undefined4 *)(iVar7 + 0xc + iVar9 * 0x14) = 0;
        *(undefined4 *)(iVar7 + 0x10 + iVar9 * 0x14) = 0;
      }
      else {
        iVar9 = 1;
      }
      iVar7 = piVar2[1];
      iVar5 = *piVar2;
      if ((iVar7 == 0) || (*(char *)(iVar5 + 0x38) != '\0')) {
        FUN_00539320(iVar5,0,iVar8);
      }
      else {
        if (iVar9 < 0) {
          iVar9 = piVar2[7] + -1;
        }
        iVar1 = iVar7 + iVar9 * 0x14;
        FUN_00539320(iVar5,(int)*(char *)(iVar1 + 1),*(undefined4 *)(iVar7 + 0x10 + iVar9 * 0x14));
        *(undefined4 *)(iVar1 + 0x10) = 0;
        if (iVar8 == 0) {
          *(undefined4 *)(iVar1 + 0x10) = 0;
          *(undefined1 *)(iVar1 + 1) = 0;
        }
        else {
          uVar10 = FUN_00568070(iVar8);
          uVar6 = FUN_005524a0(*piVar2,(int)((ulonglong)uVar10 >> 0x20),(int)uVar10);
          *(undefined4 *)(iVar1 + 0x10) = uVar6;
          *(undefined1 *)(iVar1 + 1) = 0xff;
        }
      }
      iVar9 = FUN_0055d980(*param_1,"tbl_name=%Q",param_3);
      if (iVar9 != 0) {
        FUN_0056c120(piVar2,local_8,iVar9);
        iVar9 = FUN_0057f7c0(param_1,param_2);
        if (iVar9 != 0) {
          FUN_0056c120(piVar2,1,iVar9);
        }
      }
      return;
    }
    iVar9 = -1000000;
    if (piVar3[5] != 0) {
      iVar8 = *(int *)(*param_1 + 0x14);
      iVar9 = 0;
      if (0 < iVar8) {
        piVar4 = (int *)(*(int *)(*param_1 + 0x10) + 0xc);
        do {
          if (*piVar4 == piVar3[5]) break;
          iVar9 = iVar9 + 1;
          piVar4 = piVar4 + 4;
        } while (iVar9 < iVar8);
      }
    }
    iVar8 = *piVar3;
    iVar7 = piVar2[7];
    if ((iVar7 < piVar2[8]) || (iVar5 = FUN_0053b4b0(piVar2), iVar5 == 0)) {
      iVar5 = piVar2[1];
      piVar2[7] = piVar2[7] + 1;
      *(undefined2 *)(iVar5 + iVar7 * 0x14) = 0x6e;
      *(undefined1 *)(iVar5 + 3 + iVar7 * 0x14) = 0;
      *(int *)(iVar5 + 4 + iVar7 * 0x14) = iVar9;
      *(undefined4 *)(iVar5 + 8 + iVar7 * 0x14) = 0;
      *(undefined4 *)(iVar5 + 0xc + iVar7 * 0x14) = 0;
      *(undefined4 *)(iVar5 + 0x10 + iVar7 * 0x14) = 0;
    }
    else {
      iVar7 = 1;
    }
    iVar9 = piVar2[1];
    iVar5 = *piVar2;
    if ((iVar9 == 0) || (*(char *)(iVar5 + 0x38) != '\0')) {
      FUN_00539320(iVar5,0,iVar8);
    }
    else {
      if (iVar7 < 0) {
        iVar7 = piVar2[7] + -1;
      }
      iVar1 = iVar9 + iVar7 * 0x14;
      FUN_00539320(iVar5,(int)*(char *)(iVar1 + 1),*(undefined4 *)(iVar9 + 0x10 + iVar7 * 0x14));
      *(undefined4 *)(iVar1 + 0x10) = 0;
      if (iVar8 == 0) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined1 *)(iVar1 + 1) = 0;
      }
      else {
        uVar10 = FUN_00568070(iVar8);
        uVar6 = FUN_005524a0(*piVar2,(int)((ulonglong)uVar10 >> 0x20),(int)uVar10);
        *(undefined4 *)(iVar1 + 0x10) = uVar6;
        *(undefined1 *)(iVar1 + 1) = 0xff;
      }
    }
    piVar3 = (int *)piVar3[8];
  } while( true );
}


/* FUN_00545a20 @ 00545a20  kind=lib  attributed-by=lib-island  size=293 */

int FUN_00545a20(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  int local_8;
  
  uVar4 = param_5;
  uVar1 = *(undefined4 *)(param_2 + 0x48);
  iVar5 = FUN_0055f390(*param_1,*(undefined4 *)(param_2 + 0x44),param_5,param_6);
  uVar3 = param_3;
  if (iVar5 == 0) {
    *(undefined4 *)(param_2 + 0x48) = uVar4;
    cVar7 = (char)param_3;
    local_8 = iVar5;
    if ((cVar7 == '\x05') || (cVar7 == '\x01')) {
      iVar6 = FUN_005489b0(param_2);
      iVar5 = 0;
      if (iVar6 != 0) {
        return iVar6;
      }
    }
    else {
      puVar2 = *(undefined1 **)(param_2 + 0x38);
      iVar6 = CONCAT31(CONCAT21(CONCAT11(*puVar2,puVar2[1]),puVar2[2]),puVar2[3]);
      if (iVar6 != 0) {
        FUN_00544760(param_1,iVar6,4,uVar4,&local_8);
        iVar5 = 0;
        if (local_8 != 0) {
          return local_8;
        }
      }
    }
    if ((cVar7 != '\x01') &&
       (iVar5 = FUN_0052e950(param_1,param_4,&param_2,0), iVar6 = param_2, iVar5 == 0)) {
      iVar5 = FUN_00560330(*(undefined4 *)(param_2 + 0x44));
      if (iVar5 != 0) {
        FUN_00545740(iVar6);
        return iVar5;
      }
      iVar5 = FUN_0053dee0(iVar6,uVar1,param_5,uVar3);
      local_8 = iVar5;
      FUN_00545740(iVar6);
      if (iVar5 == 0) {
        FUN_00544760(param_1,param_5,uVar3,param_4,&local_8);
        iVar5 = local_8;
      }
    }
  }
  return iVar5;
}


/* FUN_00545b50 @ 00545b50  kind=lib  attributed-by=lib-island  size=90 */

void FUN_00545b50(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  if ((int *)param_2[1] == (int *)0x0) {
    *(int *)(param_1 + 8) = *param_2;
  }
  else {
    *(int *)param_2[1] = *param_2;
  }
  if (*param_2 != 0) {
    *(int *)(*param_2 + 4) = param_2[1];
  }
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 != 0) {
    piVar1 = (int *)(iVar2 + param_3 * 8);
    if (*(int **)(iVar2 + 4 + param_3 * 8) == param_2) {
      piVar1[1] = *param_2;
    }
    *piVar1 = *piVar1 + -1;
  }
  FUN_00524410(param_2);
  piVar1 = (int *)(param_1 + 4);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_0055ac70(param_1);
  }
  return;
}


/* FUN_00545bb0 @ 00545bb0  kind=lib  attributed-by=lib-island  size=144 */

undefined4 FUN_00545bb0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  if (DAT_007665e4 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (*DAT_00766628)(2);
    if (iVar3 != 0) {
      (*DAT_00766630)(iVar3);
    }
  }
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
  if (*(int *)(param_1 + 0x40) < 1) {
    iVar2 = DAT_0076b3c8;
    if (DAT_0076b3c8 == param_1) {
      DAT_0076b3c8 = *(int *)(param_1 + 0x44);
    }
    else {
      do {
        iVar1 = iVar2;
        if (iVar1 == 0) goto LAB_00545c16;
        iVar2 = *(int *)(iVar1 + 0x44);
      } while (*(int *)(iVar1 + 0x44) != param_1);
      *(undefined4 *)(iVar1 + 0x44) = *(undefined4 *)(param_1 + 0x44);
    }
LAB_00545c16:
    if (*(int *)(param_1 + 0x38) != 0) {
      (*DAT_0076662c)(*(int *)(param_1 + 0x38));
    }
    uVar4 = 1;
  }
  if (iVar3 != 0) {
    (*DAT_00766638)(iVar3);
  }
  return uVar4;
}


/* FUN_00545c40 @ 00545c40  kind=lib  attributed-by=lib-island  size=160 */

void FUN_00545c40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 local_f8;
  undefined1 *local_f4;
  undefined1 *local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined1 local_e0;
  undefined2 local_df;
  undefined1 local_dc [212];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_f4 = local_dc;
  local_f8 = 0;
  local_ec = 0;
  local_e8 = 0xd2;
  local_e4 = 0;
  local_df = 0;
  local_e0 = 0;
  local_f0 = local_f4;
  FUN_0056aa30(&local_f8,0,param_2,param_3);
  uVar1 = FUN_00567fb0(&local_f8);
  (*DAT_007666c4)(DAT_007666c8,param_1,uVar1);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00545ce0 @ 00545ce0  kind=lib  attributed-by=lib-island  size=520 */

void FUN_00545ce0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int local_c;
  
  piVar2 = *(int **)(param_1 + 8);
  if (*(int *)(param_2 + 0x24) + *(int *)(param_2 + 0x18) != 0) {
    iVar9 = 0;
    if (0 < *(int *)(param_2 + 0x18)) {
      iVar7 = 0;
      do {
        uVar3 = *(undefined4 *)(iVar7 + 0x10 + *(int *)(param_2 + 0x14));
        iVar6 = piVar2[7];
        if ((iVar6 < piVar2[8]) || (iVar5 = FUN_0053b4b0(piVar2), iVar5 == 0)) {
          piVar2[7] = piVar2[7] + 1;
          iVar5 = piVar2[1];
          *(undefined2 *)(iVar5 + iVar6 * 0x14) = 10;
          *(undefined1 *)(iVar5 + 3 + iVar6 * 0x14) = 0;
          *(undefined4 *)(iVar5 + 4 + iVar6 * 0x14) = 0;
          *(undefined4 *)(iVar5 + 8 + iVar6 * 0x14) = uVar3;
          *(undefined4 *)(iVar5 + 0xc + iVar6 * 0x14) = 0;
          *(undefined4 *)(iVar5 + 0x10 + iVar6 * 0x14) = 0;
        }
        iVar9 = iVar9 + 1;
        iVar7 = iVar7 + 0x18;
      } while (iVar9 < *(int *)(param_2 + 0x18));
    }
    piVar8 = *(int **)(param_2 + 0x20);
    local_c = 0;
    if (0 < *(int *)(param_2 + 0x24)) {
      do {
        iVar9 = piVar2[7];
        iVar7 = piVar8[2];
        if ((iVar9 < piVar2[8]) || (iVar6 = FUN_0053b4b0(piVar2), iVar6 == 0)) {
          iVar6 = piVar2[1];
          piVar2[7] = piVar2[7] + 1;
          *(undefined2 *)(iVar6 + iVar9 * 0x14) = 10;
          *(undefined1 *)(iVar6 + 3 + iVar9 * 0x14) = 0;
          *(undefined4 *)(iVar6 + 4 + iVar9 * 0x14) = 0;
          *(int *)(iVar6 + 8 + iVar9 * 0x14) = iVar7;
          *(undefined4 *)(iVar6 + 0xc + iVar9 * 0x14) = 0;
          *(undefined4 *)(iVar6 + 0x10 + iVar9 * 0x14) = 0;
        }
        if (-1 < piVar8[3]) {
          piVar4 = *(int **)(*piVar8 + 0x10);
          if ((piVar4 == (int *)0x0) || (*piVar4 != 1)) {
            FUN_00553950(param_1,"DISTINCT aggregates must have exactly one argument");
            piVar8[3] = -1;
          }
          else {
            iVar6 = FUN_0053cc90(param_1,piVar4);
            iVar9 = piVar2[7];
            iVar7 = piVar8[3];
            if ((iVar9 < piVar2[8]) || (iVar5 = FUN_0053b4b0(piVar2), iVar5 == 0)) {
              iVar5 = piVar2[1];
              piVar2[7] = piVar2[7] + 1;
              *(undefined2 *)(iVar5 + iVar9 * 0x14) = 0x2a;
              *(undefined1 *)(iVar5 + 3 + iVar9 * 0x14) = 0;
              *(int *)(iVar5 + 4 + iVar9 * 0x14) = iVar7;
              *(undefined4 *)(iVar5 + 8 + iVar9 * 0x14) = 0;
              *(undefined4 *)(iVar5 + 0xc + iVar9 * 0x14) = 0;
              *(undefined4 *)(iVar5 + 0x10 + iVar9 * 0x14) = 0;
            }
            else {
              iVar9 = 1;
            }
            iVar7 = piVar2[1];
            iVar5 = *piVar2;
            if ((iVar7 == 0) || (*(char *)(iVar5 + 0x38) != '\0')) {
              FUN_00539320(iVar5,0xfffffff0,iVar6);
            }
            else {
              if (iVar9 < 0) {
                iVar9 = piVar2[7] + -1;
              }
              iVar1 = iVar7 + iVar9 * 0x14;
              FUN_00539320(iVar5,(int)*(char *)(iVar1 + 1),
                           *(undefined4 *)(iVar7 + 0x10 + iVar9 * 0x14));
              *(undefined4 *)(iVar1 + 0x10) = 0;
              if (iVar6 == 0) {
                *(undefined4 *)(iVar1 + 0x10) = 0;
                *(undefined1 *)(iVar1 + 1) = 0;
              }
              else {
                *(int *)(iVar1 + 0x10) = iVar6;
                *(undefined1 *)(iVar1 + 1) = 0xfa;
              }
            }
          }
        }
        local_c = local_c + 1;
        piVar8 = piVar8 + 4;
      } while (local_c < *(int *)(param_2 + 0x24));
    }
  }
  return;
}


/* FUN_00545f00 @ 00545f00  kind=lib  attributed-by=lib-island  size=393 */

void FUN_00545f00(int *param_1,int param_2,int param_3,char *param_4,char *param_5,
                 undefined4 param_6)

{
  char *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *_Dst;
  undefined4 uVar4;
  
  param_3 = param_3 * 0x14;
  pcVar1 = *(char **)(param_3 + *(int *)(param_2 + 8));
  iVar2 = *param_1;
  puVar3 = (undefined8 *)FUN_00536250(iVar2,pcVar1,0,0);
  if (puVar3 != (undefined8 *)0x0) {
    _Dst = puVar3;
    if ((*pcVar1 != -0x68) && (*param_5 != 'G')) {
      FUN_0053b940(puVar3,param_6);
      _Dst = (undefined8 *)FUN_00552230(*param_1,0x2c);
      if (_Dst != (undefined8 *)0x0) {
        memset(_Dst,0,0x2c);
        *(undefined1 *)_Dst = 0x18;
        *(undefined2 *)((int)_Dst + 0x1e) = 0xffff;
        *(undefined4 *)((int)_Dst + 0x14) = 1;
      }
      FUN_005540d0(*param_1,_Dst,puVar3,0);
      if ((_Dst != (undefined8 *)0x0) && (*(int *)(*param_1 + 0x5c) < *(int *)((int)_Dst + 0x14))) {
        FUN_00553950(param_1,"Expression tree is too large (maximum depth %d)",
                     *(int *)(*param_1 + 0x5c));
      }
      if (_Dst == (undefined8 *)0x0) {
        return;
      }
      if (*(short *)(param_3 + 0x10 + *(int *)(param_2 + 8)) == 0) {
        param_1[0x77] = param_1[0x77] + 1;
        *(short *)(param_3 + 0x10 + *(int *)(param_2 + 8)) = (short)param_1[0x77];
      }
      *(uint *)(_Dst + 3) = (uint)*(ushort *)(param_3 + 0x10 + *(int *)(param_2 + 8));
    }
    if (*param_4 == '\\') {
      _Dst = (undefined8 *)FUN_00553a80(param_1,_Dst,*(undefined4 *)(param_4 + 4));
    }
    *(ushort *)(param_4 + 2) = *(ushort *)(param_4 + 2) | 0x8000;
    FUN_00555e30(iVar2,param_4);
    *(undefined8 *)param_4 = *_Dst;
    *(undefined8 *)(param_4 + 8) = _Dst[1];
    *(undefined8 *)(param_4 + 0x10) = _Dst[2];
    *(undefined8 *)(param_4 + 0x18) = _Dst[3];
    *(undefined8 *)(param_4 + 0x20) = _Dst[4];
    *(undefined4 *)(param_4 + 0x28) = *(undefined4 *)(_Dst + 5);
    if (((*(ushort *)(param_4 + 2) & 0x400) == 0) && (*(int *)(param_4 + 4) != 0)) {
      uVar4 = FUN_00552450(iVar2,*(int *)(param_4 + 4));
      param_4[0x22] = param_4[0x22] | 1;
      *(undefined4 *)(param_4 + 4) = uVar4;
    }
    FUN_005521a0(iVar2,_Dst);
  }
  return;
}


/* FUN_00546090 @ 00546090  kind=lib  attributed-by=lib-island  size=150 */

int FUN_00546090(undefined4 param_1,int *param_2,char *param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  
  if (*param_3 == '\x1a') {
    iVar4 = 0;
    if (0 < *param_2) {
      puVar6 = (undefined4 *)(param_2[2] + 4);
      do {
        pbVar3 = (byte *)*puVar6;
        if (pbVar3 != (byte *)0x0) {
          bVar2 = *pbVar3;
          pbVar5 = *(byte **)(param_3 + 4);
          while ((bVar2 != 0 && ((&DAT_007120d8)[bVar2] == (&DAT_007120d8)[*pbVar5]))) {
            pbVar1 = pbVar3 + 1;
            pbVar3 = pbVar3 + 1;
            pbVar5 = pbVar5 + 1;
            bVar2 = *pbVar1;
          }
          if ((&DAT_007120d8)[*pbVar3] == (&DAT_007120d8)[*pbVar5]) {
            return iVar4 + 1;
          }
        }
        iVar4 = iVar4 + 1;
        puVar6 = puVar6 + 5;
      } while (iVar4 < *param_2);
    }
  }
  return 0;
}


/* FUN_00546130 @ 00546130  kind=lib  attributed-by=lib-island  size=121 */

int FUN_00546130(undefined4 *param_1,char *param_2)

{
  int iVar1;
  code *local_18;
  code *local_14;
  int local_8;
  
  iVar1 = 0;
  if (param_2 != (char *)0x0) {
    if (*param_2 == '\x1a') {
      *param_2 = '^';
    }
    else {
      iVar1 = FUN_005640a0(param_1,param_2);
      if (iVar1 == 0) {
        local_8 = 1;
        local_18 = FUN_00536500;
        local_14 = FUN_00548960;
        FUN_00578680(&local_18,param_2);
        if (local_8 == 0) {
          FUN_00553950(*param_1,"invalid name: \"%s\"",*(undefined4 *)(param_2 + 4));
          return 1;
        }
      }
    }
  }
  return iVar1;
}


/* FUN_005461b0 @ 005461b0  kind=lib  attributed-by=lib-island  size=691 */

undefined4 FUN_005461b0(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined1 *_Dst;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int *local_10;
  int *local_c;
  int local_8;
  
  local_c = (int *)param_2[0xe];
  if (local_c == (int *)0x0) {
    return 0;
  }
  iVar5 = *param_1;
  local_18 = iVar5;
  if (*(int *)(iVar5 + 0x58) < *local_c) {
    FUN_00553950(param_1,"too many terms in ORDER BY clause");
    return 1;
  }
  iVar3 = 0;
  if (0 < *local_c) {
    iVar6 = 0;
    do {
      iVar3 = iVar3 + 1;
      *(undefined1 *)(iVar6 + 0xd + local_c[2]) = 0;
      iVar6 = iVar6 + 0x14;
    } while (iVar3 < *local_c);
  }
  piVar4 = param_2 + 0xf;
  param_2[0x10] = 0;
  iVar3 = 1;
  if (*piVar4 == 0) goto LAB_00546240;
  do {
    *(undefined4 **)(*piVar4 + 0x40) = param_2;
    param_2 = (undefined4 *)*piVar4;
    piVar4 = param_2 + 0xf;
  } while (param_2[0xf] != 0);
  do {
    local_10 = (int *)*param_2;
    puVar7 = (undefined4 *)local_c[2];
    local_1c = 0;
    local_14 = 0;
    piVar4 = local_c;
    if (0 < *local_c) {
      do {
        local_8 = -1;
        iVar3 = local_14;
        if (*(char *)((int)puVar7 + 0xd) == '\0') {
          for (pcVar2 = (char *)*puVar7;
              (pcVar2 != (char *)0x0 && ((*pcVar2 == '\\' || (*pcVar2 == '\x18'))));
              pcVar2 = *(char **)(pcVar2 + 8)) {
          }
          if ((*(ushort *)(pcVar2 + 2) & 0x400) == 0) {
            if (*pcVar2 == -100) {
              uVar8 = FUN_00556530(*(undefined4 *)(pcVar2 + 8),&local_20);
              iVar3 = (int)((ulonglong)uVar8 >> 0x20);
              if ((int)uVar8 != 0) {
                local_8 = -local_20;
                goto LAB_005462ee;
              }
            }
            else if (*pcVar2 == -99) {
              uVar8 = FUN_00556530(*(undefined4 *)(pcVar2 + 8),&local_8);
              iVar3 = (int)((ulonglong)uVar8 >> 0x20);
              if ((int)uVar8 != 0) goto LAB_005462ee;
            }
            local_8 = FUN_00546090(param_1,local_10,pcVar2);
            iVar3 = local_14;
            if (local_8 == 0) {
              uVar1 = FUN_00536250(iVar5,pcVar2,0,0);
              if (*(char *)(local_18 + 0x38) == '\0') {
                local_8 = FUN_005467e0(param_1,param_2,uVar1);
              }
              iVar5 = local_18;
              FUN_00555e30(local_18,uVar1);
              iVar3 = local_14;
            }
          }
          else {
            local_8 = *(int *)(pcVar2 + 4);
LAB_005462ee:
            if ((local_8 < 1) || (*local_10 < local_8)) {
              FUN_00553950(param_1,"%r %s BY term out of range - should be between 1 and %d",
                           iVar3 + 1,"ORDER",*local_10);
              return 1;
            }
          }
          if (local_8 < 1) {
            local_1c = 1;
            piVar4 = local_c;
          }
          else {
            _Dst = (undefined1 *)FUN_00552230(iVar5,0x2d);
            if (_Dst == (undefined1 *)0x0) {
              return 1;
            }
            memset(_Dst,0,0x2d);
            iVar5 = local_18;
            *(undefined2 *)(_Dst + 0x1e) = 0xffff;
            *(undefined1 **)(_Dst + 4) = _Dst + 0x2c;
            *_Dst = 0x81;
            _Dst[0x2c] = 0;
            *(ushort *)(_Dst + 2) = *(ushort *)(_Dst + 2) | 0x400;
            *(undefined4 *)(_Dst + 0x14) = 1;
            *(int *)(_Dst + 4) = local_8;
            if ((char *)*puVar7 == pcVar2) {
              *puVar7 = _Dst;
            }
            else {
              *(undefined1 **)((char *)*puVar7 + 8) = _Dst;
            }
            FUN_00555e30(local_18,pcVar2);
            *(undefined2 *)((int)puVar7 + 0xe) = (undefined2)local_8;
            *(undefined1 *)((int)puVar7 + 0xd) = 1;
            iVar3 = local_14;
            piVar4 = local_c;
          }
        }
        local_14 = iVar3 + 1;
        puVar7 = puVar7 + 5;
      } while (local_14 < *piVar4);
    }
    param_2 = (undefined4 *)param_2[0x10];
    iVar3 = local_1c;
    if (param_2 == (undefined4 *)0x0) break;
LAB_00546240:
  } while (iVar3 != 0);
  iVar5 = 0;
  if (0 < *local_c) {
    pcVar2 = (char *)(local_c[2] + 0xd);
    do {
      if (*pcVar2 == '\0') {
        FUN_00553950(param_1,"%r ORDER BY term does not match any column in the result set",
                     iVar5 + 1);
        return 1;
      }
      iVar5 = iVar5 + 1;
      pcVar2 = pcVar2 + 0x14;
    } while (iVar5 < *local_c);
  }
  return 0;
}


/* FUN_005467e0 @ 005467e0  kind=lib  attributed-by=lib-island  size=165 */

int FUN_005467e0(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *local_24;
  undefined4 uStack_20;
  ulonglong local_1c;
  undefined8 local_14;
  undefined8 local_c;
  
  piVar2 = (int *)*param_2;
  iVar5 = *param_1;
  local_14 = 0;
  _local_24 = CONCAT44(param_2[10],param_1);
  local_1c = ZEXT48(piVar2);
  local_c = 0x100000000;
  uVar1 = *(undefined1 *)(iVar5 + 0x3b);
  *(undefined1 *)(iVar5 + 0x3b) = 1;
  iVar3 = FUN_005640a0(&local_24,param_3);
  *(undefined1 *)(iVar5 + 0x3b) = uVar1;
  if (iVar3 != 0) {
    return 0;
  }
  iVar5 = 0;
  if (0 < *piVar2) {
    iVar3 = 0;
    do {
      iVar4 = FUN_00555cb0(*(undefined4 *)(piVar2[2] + iVar3),param_3);
      if (iVar4 < 2) {
        return iVar5 + 1;
      }
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + 0x14;
    } while (iVar5 < *piVar2);
  }
  return 0;
}


/* FUN_005469d0 @ 005469d0  kind=lib  attributed-by=lib-island  size=245 */

void FUN_005469d0(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  
  uVar5 = *param_2;
  iVar2 = param_1[10];
  iVar3 = param_1[7];
  param_1[0x18] = param_1[0x18] | 0x100;
  pbVar4 = (byte *)param_1[1];
  do {
    iVar3 = iVar3 + -1;
    if (iVar3 < 0) {
      FUN_005521a0(*param_1,param_1[10]);
      param_1[10] = 0;
      *param_2 = uVar5;
      return;
    }
    bVar1 = *pbVar4;
    pbVar4[2] = (&DAT_007122e8)[bVar1];
    if ((bVar1 == 0x12) || (bVar1 == 0x7b)) {
      if ((int)uVar5 < (int)(uint)pbVar4[3]) {
        uVar5 = (uint)pbVar4[3];
      }
    }
    else if (bVar1 == 0x23) {
      if (*(int *)(pbVar4 + 8) != 0) {
LAB_00546a2a:
        param_1[0x18] = param_1[0x18] & 0xfffffeff;
      }
    }
    else {
      if (bVar1 == 0x7f) goto LAB_00546a2a;
      if (bVar1 == 0x8c) {
        if ((int)uVar5 < (int)*(uint *)(pbVar4 + 8)) {
          uVar5 = *(uint *)(pbVar4 + 8);
        }
      }
      else if (bVar1 == 0x88) {
        if ((int)uVar5 < (int)*(uint *)(pbVar4 + -0x10)) {
          uVar5 = *(uint *)(pbVar4 + -0x10);
        }
      }
      else if ((bVar1 == 0x5f) || (bVar1 == 0x51)) {
        *(code **)(pbVar4 + 0x10) = FUN_0054e330;
        pbVar4[1] = 0xed;
      }
      else if (bVar1 == 0x5c) {
        *(code **)(pbVar4 + 0x10) = FUN_0054eaf0;
        pbVar4[1] = 0xed;
      }
    }
    if (((pbVar4[2] & 1) != 0) && (*(int *)(pbVar4 + 8) < 0)) {
      *(undefined4 *)(pbVar4 + 8) = *(undefined4 *)(iVar2 - (*(int *)(pbVar4 + 8) * 4 + 4));
    }
    pbVar4 = pbVar4 + 0x14;
  } while( true );
}


/* FUN_00546df0 @ 00546df0  kind=lib  attributed-by=lib-island  size=369 */

void FUN_00546df0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  
  piVar4 = (int *)param_1[2];
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)FUN_0056c7b0(*param_1);
    param_1[2] = piVar4;
    if (piVar4 != (int *)0x0) {
      FUN_0056bdc0(piVar4,0x94);
    }
  }
  param_1[0x13] = param_1[0x13] + 1;
  uVar2 = param_1[0x13];
  puVar5 = (undefined4 *)FUN_00552230(*param_1,8);
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = param_3;
    puVar5[1] = param_4;
  }
  iVar7 = piVar4[7];
  if ((iVar7 < piVar4[8]) || (iVar6 = FUN_0053b4b0(piVar4), iVar6 == 0)) {
    iVar6 = piVar4[1];
    piVar4[7] = piVar4[7] + 1;
    *(undefined2 *)(iVar6 + iVar7 * 0x14) = 8;
    *(undefined1 *)(iVar6 + 3 + iVar7 * 0x14) = 0;
    *(undefined4 *)(iVar6 + 4 + iVar7 * 0x14) = 0;
    *(undefined4 *)(iVar6 + 8 + iVar7 * 0x14) = uVar2;
    *(undefined4 *)(iVar6 + 0xc + iVar7 * 0x14) = 0;
    *(undefined4 *)(iVar6 + 0x10 + iVar7 * 0x14) = 0;
  }
  else {
    iVar7 = 1;
  }
  iVar6 = piVar4[1];
  iVar3 = *piVar4;
  if ((iVar6 == 0) || (*(char *)(iVar3 + 0x38) != '\0')) {
    FUN_00539320(iVar3,0xfffffff3,puVar5);
  }
  else {
    if (iVar7 < 0) {
      iVar7 = piVar4[7] + -1;
    }
    iVar1 = iVar6 + iVar7 * 0x14;
    FUN_00539320(iVar3,(int)*(char *)(iVar1 + 1),*(undefined4 *)(iVar6 + 0x10 + iVar7 * 0x14));
    *(undefined4 *)(iVar1 + 0x10) = 0;
    if (puVar5 == (undefined4 *)0x0) {
      *(undefined4 *)(iVar1 + 0x10) = 0;
      *(undefined1 *)(iVar1 + 1) = 0;
    }
    else {
      *(undefined4 **)(iVar1 + 0x10) = puVar5;
      *(undefined1 *)(iVar1 + 1) = 0xf3;
    }
  }
  FUN_005762b0(piVar4,1);
  if (*(char *)(*piVar4 + 0x38) == '\0') {
    FUN_00575040(piVar4[4],param_2,0xffffffff,1,0);
  }
  iVar7 = piVar4[7];
  if ((piVar4[8] <= iVar7) && (iVar6 = FUN_0053b4b0(piVar4), iVar6 != 0)) {
    return;
  }
  iVar6 = piVar4[1];
  piVar4[7] = piVar4[7] + 1;
  *(undefined2 *)(iVar6 + iVar7 * 0x14) = 0x10;
  *(undefined1 *)(iVar6 + 3 + iVar7 * 0x14) = 0;
  *(undefined4 *)(iVar6 + 4 + iVar7 * 0x14) = uVar2;
  *(undefined4 *)(iVar6 + 8 + iVar7 * 0x14) = 1;
  *(undefined4 *)(iVar6 + 0xc + iVar7 * 0x14) = 0;
  *(undefined4 *)(iVar6 + 0x10 + iVar7 * 0x14) = 0;
  return;
}


/* FUN_00546f70 @ 00546f70  kind=lib  attributed-by=lib-island  size=108 */

undefined4 FUN_00546f70(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint local_14 [2];
  undefined4 local_c;
  
  puVar2 = local_14;
  do {
    if (param_1 == (uint *)0x0) {
LAB_00546fa8:
      puVar2[2] = (uint)param_2;
      return local_c;
    }
    if (param_2 == (uint *)0x0) {
      if (param_1 != (uint *)0x0) {
        puVar2[2] = (uint)param_1;
        return local_c;
      }
      goto LAB_00546fa8;
    }
    uVar1 = param_1[1];
    if (((int)param_2[1] < (int)uVar1) ||
       (((int)param_2[1] <= (int)uVar1 && (*param_2 <= *param_1)))) {
      if (((int)uVar1 < (int)param_2[1]) ||
         (((int)uVar1 <= (int)param_2[1] && (*param_1 <= *param_2)))) goto LAB_00546fa1;
      puVar2[2] = (uint)param_2;
      param_2 = (uint *)param_2[2];
      puVar2 = (uint *)puVar2[2];
    }
    else {
      puVar2[2] = (uint)param_1;
      puVar2 = param_1;
LAB_00546fa1:
      param_1 = (uint *)param_1[2];
    }
  } while( true );
}


/* FUN_00546fe0 @ 00546fe0  kind=lib  attributed-by=lib-island  size=269 */

void FUN_00546fe0(uint *param_1)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  uint local_bc [40];
  uint local_1c [2];
  uint *local_14;
  uint *local_c;
  uint *local_8;
  
  memset(local_bc,0,0xa0);
  puVar5 = param_1;
  do {
    if (puVar5 == (uint *)0x0) {
      uVar3 = 0;
      uVar7 = 0;
      do {
        uVar3 = FUN_00546f70(uVar3,local_bc[uVar7]);
        uVar7 = uVar7 + 1;
      } while (uVar7 < 0x28);
      return;
    }
    iVar6 = 0;
    local_c = (uint *)puVar5[2];
    puVar5[2] = 0;
    param_1 = (uint *)0x0;
    if (local_bc[0] != 0) {
      local_8 = local_bc;
      do {
        puVar1 = (uint *)*local_8;
        puVar4 = local_1c;
        puVar2 = local_8;
        while (puVar1 != (uint *)0x0) {
          if (puVar5 == (uint *)0x0) {
            if (puVar1 != (uint *)0x0) {
              puVar4[2] = (uint)puVar1;
              goto LAB_0054706f;
            }
            break;
          }
          uVar7 = puVar1[1];
          local_8 = puVar2;
          if (((int)puVar5[1] < (int)uVar7) ||
             (((int)puVar5[1] <= (int)uVar7 && (*puVar5 <= *puVar1)))) {
            if (((int)uVar7 < (int)puVar5[1]) ||
               (((int)uVar7 <= (int)puVar5[1] && (*puVar1 <= *puVar5)))) goto LAB_0054705f;
            puVar4[2] = (uint)puVar5;
            puVar5 = (uint *)puVar5[2];
            puVar4 = (uint *)puVar4[2];
            puVar2 = local_8;
          }
          else {
            puVar4[2] = (uint)puVar1;
            puVar4 = puVar1;
LAB_0054705f:
            puVar1 = (uint *)puVar1[2];
            puVar2 = local_8;
          }
        }
        puVar4[2] = (uint)puVar5;
LAB_0054706f:
        puVar5 = local_14;
        *puVar2 = 0;
        iVar6 = (int)param_1 + 1;
        local_8 = local_bc + iVar6;
        param_1 = (uint *)iVar6;
      } while (local_bc[iVar6] != 0);
    }
    puVar4 = local_c;
    local_bc[iVar6] = (uint)puVar5;
    puVar5 = puVar4;
  } while( true );
}


/* FUN_00547100 @ 00547100  kind=lib  attributed-by=lib-island  size=166 */

int FUN_00547100(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  iVar4 = 1;
  iVar1 = *(int *)(param_1 + 8);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  iVar3 = param_1;
  while (iVar2 = iVar1, iVar2 != 0) {
    param_1 = *(int *)(iVar2 + 8);
    uVar6 = CONCAT44(iVar2,param_1);
    *(int *)(iVar2 + 0xc) = iVar3;
    uVar5 = CONCAT44(iVar2,param_1);
    if (param_1 != 0) {
      if (iVar4 == 1) {
        iVar1 = *(int *)(param_1 + 8);
        *(undefined4 *)(param_1 + 8) = 0;
        *(undefined4 *)(param_1 + 0xc) = 0;
        param_1 = iVar1;
        uVar5 = uVar6;
      }
      else {
        uVar5 = FUN_005471b0(&param_1,iVar4 + -1);
        iVar1 = param_1;
        if (param_1 != 0) {
          *(int *)(param_1 + 0xc) = (int)uVar5;
          param_1 = *(int *)(param_1 + 8);
          uVar6 = FUN_005471b0(&param_1,iVar4 + -1);
          uVar5 = CONCAT44((int)((ulonglong)uVar6 >> 0x20),iVar1);
          *(int *)(iVar1 + 8) = (int)uVar6;
        }
      }
    }
    *(int *)((int)((ulonglong)uVar5 >> 0x20) + 8) = (int)uVar5;
    iVar4 = iVar4 + 1;
    iVar1 = param_1;
    iVar3 = iVar2;
  }
  return iVar3;
}


/* FUN_005471b0 @ 005471b0  kind=lib  attributed-by=lib-island  size=95 */

int FUN_005471b0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    return iVar1;
  }
  if (param_2 == 1) {
    *param_1 = *(int *)(iVar1 + 8);
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    return iVar1;
  }
  iVar2 = FUN_005471b0(param_1,param_2 + -1);
  iVar1 = *param_1;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0xc) = iVar2;
    *param_1 = *(int *)(iVar1 + 8);
    uVar3 = FUN_005471b0(param_1,param_2 + -1);
    *(undefined4 *)(iVar1 + 8) = uVar3;
    iVar2 = iVar1;
  }
  return iVar2;
}


/* FUN_00547210 @ 00547210  kind=lib  attributed-by=lib-island  size=69 */

void FUN_00547210(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = param_2;
  iVar1 = param_1;
  do {
    iVar3 = iVar1;
    if (*(int *)(iVar3 + 0xc) == 0) {
      *piVar2 = iVar3;
    }
    else {
      FUN_00547210(*(int *)(iVar3 + 0xc),piVar2,&param_1);
      *(int *)(param_1 + 8) = iVar3;
    }
    piVar2 = (int *)(iVar3 + 8);
    iVar1 = *(int *)(iVar3 + 8);
  } while (*(int *)(iVar3 + 8) != 0);
  *param_3 = iVar3;
  return;
}


/* FUN_00547260 @ 00547260  kind=lib  attributed-by=lib-island  size=68 */

int FUN_00547260(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (((iVar1 != param_3) &&
        (((param_2 == 0 || (*(int *)(iVar1 + 0x18) == param_2)) &&
         (*(char *)(iVar1 + 0x5b) == '\x01')))) && (iVar2 = FUN_005472b0(iVar1), iVar2 != 0)) break;
    iVar1 = *(int *)(iVar1 + 8);
  }
  return iVar2;
}


/* FUN_005472b0 @ 005472b0  kind=lib  attributed-by=lib-island  size=273 */

int FUN_005472b0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  iVar4 = param_1;
  if (*(char *)(param_1 + 0x5b) == '\x01') {
    FUN_0053a7f0(param_1);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x2c);
  }
  else {
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  piVar1 = (int *)(param_1 + 0x88);
  piVar6 = (int *)(param_1 + 0x88);
  param_1 = 0;
  if (*(char *)(*piVar1 + 2) == '\0') {
    iVar5 = FUN_0055da00(*(undefined4 *)(iVar4 + 0x48));
    if (iVar5 == 0) {
      param_1 = 7;
      goto LAB_00547391;
    }
    param_1 = FUN_00528920(iVar4,0,*(undefined4 *)(iVar4 + 0x48),iVar5,0);
    if (param_1 != 0) {
      FUN_00524410(iVar5);
      goto LAB_00547391;
    }
    *(int *)(iVar4 + 0x50) = iVar5;
  }
  iVar5 = 0;
  if (*(ushort *)(iVar4 + 0x5e) < 0x8000) {
    do {
      if ((*piVar6 != 0) && (iVar2 = *(int *)(*piVar6 + 0x44), iVar2 != 0)) {
        iVar3 = *(int *)(iVar2 + 0x10);
        FUN_00561130(iVar2);
        if (*(int *)(*(int *)(iVar3 + 0xb4) + 0xc) == 0) {
          FUN_00541a10(iVar3);
        }
      }
      *piVar6 = 0;
      iVar5 = iVar5 + 1;
      piVar6 = piVar6 + 1;
    } while (iVar5 <= *(short *)(iVar4 + 0x5e));
  }
  *(undefined2 *)(iVar4 + 0x5e) = 0xffff;
  *(undefined1 *)(iVar4 + 0x5b) = 2;
LAB_00547391:
  FUN_00524410(*(undefined4 *)(iVar4 + 0x14));
  *(undefined4 *)(iVar4 + 0x14) = 0;
  return param_1;
}


/* FUN_005473d0 @ 005473d0  kind=lib  attributed-by=lib-island  size=724 */

void FUN_005473d0(int *param_1)

{
  int *piVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  code *pcVar10;
  int iVar11;
  ushort uVar12;
  int iVar13;
  int local_10;
  int local_c;
  
  local_c = 0;
  iVar6 = *param_1;
  if (*(int *)(iVar6 + 0x14) < 1) {
    return;
  }
  local_10 = 0;
LAB_005473f7:
  iVar13 = 0;
  iVar7 = *(int *)(local_10 + 4 + *(int *)(iVar6 + 0x10));
  if (iVar7 != 0) {
    if (*(char *)(iVar7 + 8) == '\0') {
      iVar8 = *(int *)(iVar7 + 4);
      FUN_0054d260(iVar7);
      if ((*(char *)(iVar7 + 8) != '\x02') && (*(char *)(iVar7 + 8) != '\x01')) {
        if (((*(ushort *)(iVar8 + 0x16) & 0x40) == 0) || (**(int **)(iVar8 + 0x4c) == 0)) {
          iVar13 = *(int *)(iVar7 + 4);
          if (*(char *)(iVar7 + 9) == '\0') {
LAB_00547488:
            iVar13 = 0;
            uVar12 = *(ushort *)(iVar8 + 0x16) & 0xfff7;
            *(ushort *)(iVar8 + 0x16) = uVar12;
            if (*(int *)(iVar8 + 0x2c) == 0) {
              *(ushort *)(iVar8 + 0x16) = uVar12 | 8;
            }
LAB_005474a0:
            if (*(int *)(iVar8 + 0xc) == 0) goto code_r0x005474a6;
            if (iVar13 != 0) goto LAB_005474bb;
            goto LAB_005474f7;
          }
          if ((*(int *)(iVar13 + 0x4c) == iVar7) || ((*(byte *)(iVar13 + 0x16) & 0x20) == 0)) {
            for (piVar1 = *(int **)(iVar13 + 0x48); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[3])
            {
              if (((*piVar1 != iVar7) && (piVar1[1] == 1)) && ((char)piVar1[2] != '\x01'))
              goto LAB_00547443;
            }
            goto LAB_00547488;
          }
          iVar13 = 0x106;
        }
        else {
LAB_00547443:
          iVar13 = 0x106;
        }
      }
      goto LAB_00547568;
    }
    goto LAB_005475ac;
  }
  goto LAB_00547681;
code_r0x005474a6:
  iVar13 = FUN_0053d2a0(iVar8);
  if (iVar13 != 0) {
LAB_005474bb:
    if ((*(char *)(iVar8 + 0x13) == '\0') && (*(int *)(iVar8 + 0xc) != 0)) {
      iVar9 = *(int *)(*(int *)(iVar8 + 0xc) + 0x44);
      if (iVar9 != 0) {
        iVar11 = *(int *)(iVar9 + 0x10);
        FUN_00561130(iVar9);
        if (*(int *)(*(int *)(iVar11 + 0xb4) + 0xc) == 0) {
          FUN_00541a10(iVar11);
        }
      }
      *(undefined4 *)(iVar8 + 0xc) = 0;
    }
LAB_005474f7:
    if (((char)iVar13 != '\x05') || (*(char *)(iVar8 + 0x13) != '\0')) goto LAB_00547536;
    iVar9 = *(int *)(iVar8 + 4);
    if (((undefined4 *)(iVar9 + 0x1ac) == (undefined4 *)0x0) ||
       ((pcVar10 = *(code **)(iVar9 + 0x1ac), pcVar10 == (code *)0x0 ||
        (*(int *)(iVar9 + 0x1b4) < 0)))) goto LAB_00547536;
    iVar11 = (*pcVar10)(*(undefined4 *)(iVar9 + 0x1b0),*(int *)(iVar9 + 0x1b4));
    if (iVar11 == 0) goto LAB_0054752f;
    *(int *)(iVar9 + 0x1b4) = *(int *)(iVar9 + 0x1b4) + 1;
  }
  goto LAB_005474a0;
LAB_0054752f:
  *(undefined4 *)(iVar9 + 0x1b4) = 0xffffffff;
LAB_00547536:
  if (iVar13 == 0) {
    if ((*(char *)(iVar7 + 8) == '\0') &&
       (*(int *)(iVar8 + 0x28) = *(int *)(iVar8 + 0x28) + 1, *(char *)(iVar7 + 9) != '\0')) {
      *(undefined1 *)(iVar7 + 0x24) = 1;
      *(undefined4 *)(iVar7 + 0x28) = *(undefined4 *)(iVar8 + 0x48);
      *(int *)(iVar8 + 0x48) = iVar7 + 0x1c;
    }
    *(undefined1 *)(iVar7 + 8) = 1;
    if (*(char *)(iVar8 + 0x13) == '\0') {
      *(undefined1 *)(iVar8 + 0x13) = 1;
    }
  }
LAB_00547568:
  if (*(char *)(iVar7 + 9) != '\0') {
    piVar1 = (int *)(iVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      iVar8 = *(int *)(*(int *)(iVar7 + 4) + 0x38);
      if (iVar8 != 0) {
        (*DAT_00766638)(iVar8);
      }
      *(undefined1 *)(iVar7 + 10) = 0;
    }
  }
  if ((iVar13 == 7) || (iVar13 == 0xc0a)) {
    *(undefined1 *)(iVar6 + 0x38) = 1;
  }
  if (iVar13 != 0) {
    return;
  }
  iVar13 = 1;
LAB_005475ac:
  iVar8 = *(int *)(iVar7 + 4);
  FUN_0054d260(iVar7);
  iVar8 = *(int *)(*(int *)(iVar8 + 0xc) + 0x38);
  uVar2 = *(undefined1 *)(iVar8 + 0x28);
  uVar3 = *(undefined1 *)(iVar8 + 0x29);
  uVar4 = *(undefined1 *)(iVar8 + 0x2a);
  uVar5 = *(undefined1 *)(iVar8 + 0x2b);
  if (*(char *)(iVar7 + 9) != '\0') {
    piVar1 = (int *)(iVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      iVar8 = *(int *)(*(int *)(iVar7 + 4) + 0x38);
      if (iVar8 != 0) {
        (*DAT_00766638)(iVar8);
      }
      *(undefined1 *)(iVar7 + 10) = 0;
    }
  }
  piVar1 = *(int **)(local_10 + 0xc + *(int *)(iVar6 + 0x10));
  if (CONCAT31(CONCAT21(CONCAT11(uVar2,uVar3),uVar4),uVar5) != *piVar1) {
    FUN_00565020(piVar1);
    if (local_c != 1) {
      FUN_00565020(*(undefined4 *)(*(int *)(iVar6 + 0x10) + 0x1c));
    }
    param_1[3] = 0x11;
  }
  if (iVar13 != 0) {
    FUN_0054d260(iVar7);
    iVar13 = FUN_0054c990(iVar7,0);
    if (iVar13 == 0) {
      FUN_0054ca30(iVar7,0);
    }
    if (*(char *)(iVar7 + 9) != '\0') {
      piVar1 = (int *)(iVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        iVar13 = *(int *)(*(int *)(iVar7 + 4) + 0x38);
        if (iVar13 != 0) {
          (*DAT_00766638)(iVar13);
        }
        *(undefined1 *)(iVar7 + 10) = 0;
      }
    }
  }
LAB_00547681:
  local_c = local_c + 1;
  local_10 = local_10 + 0x10;
  if (*(int *)(iVar6 + 0x14) <= local_c) {
    return;
  }
  goto LAB_005473f7;
}


/* FUN_00547720 @ 00547720  kind=lib  attributed-by=lib-island  size=313 */

void FUN_00547720(int *param_1,int param_2,int param_3,int *param_4)

{
  size_t sVar1;
  int iVar2;
  char cVar3;
  char *pcVar4;
  undefined4 *puVar5;
  char *pcVar6;
  void *pvVar7;
  char *pcVar8;
  longlong local_34 [4];
  size_t local_14;
  size_t local_10;
  int local_c;
  undefined4 *local_8;
  
  local_c = *param_1;
  if (*(char *)(local_c + 0x38) == '\0') {
    local_34[0] = (ulonglong)(uint)param_4[10] << 0x20;
    local_34[1] = 0;
    local_34[2] = 0;
    local_34[3] = 0;
    local_8 = *(undefined4 **)(*param_4 + 8);
    if (0 < param_2) {
      pcVar8 = (char *)(param_3 + 0x15);
      do {
        iVar2 = local_c;
        local_14 = *local_8;
        pcVar4 = (char *)FUN_00532740(local_34,local_14,0,0,0);
        if (pcVar4 == (char *)0x0) {
          pvVar7 = (void *)0x0;
        }
        else {
          cVar3 = *pcVar4;
          pcVar6 = pcVar4;
          while (cVar3 != '\0') {
            pcVar6 = pcVar6 + 1;
            cVar3 = *pcVar6;
          }
          local_10 = ((int)pcVar6 - (int)pcVar4 & 0x3fffffffU) + 1;
          pvVar7 = (void *)FUN_00552230(iVar2,local_10);
          if (pvVar7 != (void *)0x0) {
            memcpy(pvVar7,pcVar4,local_10);
          }
        }
        sVar1 = local_14;
        *(void **)(pcVar8 + -9) = pvVar7;
        cVar3 = FUN_00553b20(local_14);
        *pcVar8 = cVar3;
        if (cVar3 == '\0') {
          *pcVar8 = 'b';
        }
        puVar5 = (undefined4 *)FUN_00555b70(param_1,sVar1);
        if (puVar5 != (undefined4 *)0x0) {
          pcVar4 = (char *)*puVar5;
          if (pcVar4 == (char *)0x0) {
            pvVar7 = (void *)0x0;
          }
          else {
            cVar3 = *pcVar4;
            pcVar6 = pcVar4;
            while (cVar3 != '\0') {
              pcVar6 = pcVar6 + 1;
              cVar3 = *pcVar6;
            }
            local_14 = ((int)pcVar6 - (int)pcVar4 & 0x3fffffffU) + 1;
            pvVar7 = (void *)FUN_00552230(local_c,local_14);
            if (pvVar7 != (void *)0x0) {
              memcpy(pvVar7,pcVar4,local_14);
            }
          }
          *(void **)(pcVar8 + -5) = pvVar7;
        }
        local_8 = local_8 + 5;
        pcVar8 = pcVar8 + 0x18;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
  }
  return;
}


/* FUN_005478e0 @ 005478e0  kind=lib  attributed-by=lib-island  size=635 */

undefined4 FUN_005478e0(int *param_1,int *param_2,undefined2 *param_3,undefined4 *param_4)

{
  size_t _Size;
  char cVar1;
  byte bVar2;
  int iVar3;
  char *_Src;
  char *pcVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  byte *pbVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 *local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 *local_8;
  
  iVar3 = *param_1;
  if (param_2 == (int *)0x0) {
    local_10 = 0;
    local_8 = (undefined4 *)0x0;
  }
  else {
    local_10 = *param_2;
    local_8 = (undefined4 *)FUN_00552230(iVar3,local_10 * 0x18);
    if (local_8 != (undefined4 *)0x0) {
      memset(local_8,0,local_10 * 0x18);
    }
  }
  *param_3 = (short)local_10;
  *param_4 = local_8;
  local_c = 0;
  iVar12 = 0;
  if (0 < local_10) {
    local_1c = 0;
    local_20 = local_8;
    do {
      puVar11 = (undefined4 *)(param_2[2] + local_1c);
      for (pcVar4 = (char *)*puVar11;
          (pcVar4 != (char *)0x0 && ((*pcVar4 == '\\' || (*pcVar4 == '\x18'))));
          pcVar4 = *(char **)(pcVar4 + 8)) {
      }
      _Src = (char *)puVar11[1];
      if (_Src == (char *)0x0) {
        cVar1 = *pcVar4;
        while (cVar1 == 'v') {
          pcVar4 = *(char **)(pcVar4 + 0xc);
          cVar1 = *pcVar4;
        }
        if ((*pcVar4 == -0x68) && (iVar12 = *(int *)(pcVar4 + 0x28), iVar12 != 0)) {
          iVar6 = (int)*(short *)(pcVar4 + 0x1c);
          if ((iVar6 < 0) && (iVar6 = (int)*(short *)(iVar12 + 0x24), iVar6 < 0)) {
            pcVar4 = "rowid";
          }
          else {
            pcVar4 = *(char **)(*(int *)(iVar12 + 4) + iVar6 * 0x18);
          }
        }
        else if (*pcVar4 == '\x1a') {
          pcVar4 = *(char **)(pcVar4 + 4);
        }
        else {
          pcVar4 = (char *)puVar11[2];
        }
        pbVar5 = (byte *)FUN_0055d980(iVar3,&DAT_00716900,pcVar4);
      }
      else {
        cVar1 = *_Src;
        pcVar4 = _Src;
        while (cVar1 != '\0') {
          pcVar4 = pcVar4 + 1;
          cVar1 = *pcVar4;
        }
        _Size = ((int)pcVar4 - (int)_Src & 0x3fffffffU) + 1;
        pbVar5 = (byte *)FUN_00552230(iVar3,_Size);
        if (pbVar5 != (byte *)0x0) {
          memcpy(pbVar5,_Src,_Size);
        }
      }
      if (*(char *)(iVar3 + 0x38) != '\0') {
        FUN_005521a0(iVar3,pbVar5);
        iVar12 = local_c;
        break;
      }
      uVar9 = 0;
      if (pbVar5 != (byte *)0x0) {
        bVar2 = *pbVar5;
        pbVar8 = pbVar5;
        while (bVar2 != 0) {
          pbVar8 = pbVar8 + 1;
          bVar2 = *pbVar8;
        }
        uVar9 = (int)pbVar8 - (int)pbVar5 & 0x3fffffff;
      }
      local_14 = 0;
      local_18 = 0;
      pbVar8 = pbVar5;
      if (0 < local_c) {
        do {
          pbVar7 = (byte *)local_8[local_18 * 6];
          bVar2 = *pbVar7;
          pbVar10 = pbVar8;
          while ((bVar2 != 0 && ((&DAT_007120d8)[bVar2] == (&DAT_007120d8)[*pbVar10]))) {
            pbVar5 = pbVar7 + 1;
            pbVar7 = pbVar7 + 1;
            pbVar10 = pbVar10 + 1;
            bVar2 = *pbVar5;
          }
          pbVar5 = pbVar8;
          if ((&DAT_007120d8)[*pbVar7] == (&DAT_007120d8)[*pbVar10]) {
            pbVar8[uVar9] = 0;
            local_14 = local_14 + 1;
            pbVar5 = (byte *)FUN_0055d980(iVar3,"%s:%d",pbVar8,local_14);
            FUN_005521a0(iVar3,pbVar8);
            local_18 = -1;
            if (pbVar5 == (byte *)0x0) break;
          }
          local_18 = local_18 + 1;
          pbVar8 = pbVar5;
        } while (local_18 < local_c);
      }
      *local_20 = pbVar5;
      local_20 = local_20 + 6;
      iVar12 = local_c + 1;
      local_1c = local_1c + 0x14;
      local_c = iVar12;
    } while (iVar12 < local_10);
  }
  if (*(char *)(iVar3 + 0x38) == '\0') {
    return 0;
  }
  puVar11 = local_8;
  if (0 < iVar12) {
    do {
      FUN_005521a0(iVar3,*puVar11);
      iVar12 = iVar12 + -1;
      puVar11 = puVar11 + 6;
    } while (iVar12 != 0);
  }
  FUN_005521a0(iVar3,local_8);
  *param_4 = 0;
  *param_3 = 0;
  return 7;
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


/* FUN_00548280 @ 00548280  kind=lib  attributed-by=lib-island  size=1718 */

void FUN_00548280(int param_1,int param_2,int *param_3,undefined4 param_4,int param_5,int param_6,
                 int param_7,char *param_8,int param_9,undefined4 param_10)

{
  undefined8 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  char cVar6;
  char cVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  undefined1 *puVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int iVar18;
  undefined2 *puVar19;
  int iVar20;
  int local_24;
  int local_14;
  
  iVar5 = param_1;
  cVar7 = *param_8;
  piVar3 = *(int **)(param_1 + 8);
  uVar4 = *(undefined4 *)(param_8 + 4);
  if (piVar3 == (int *)0x0) {
    return;
  }
  if (param_7 == 0) {
    cVar6 = '\0';
  }
  else {
    cVar6 = *(char *)(param_7 + 1);
  }
  if ((param_6 == 0) && (cVar6 == '\0')) {
    FUN_00530f00(piVar3,param_2,param_9);
  }
  iVar9 = param_5;
  if (param_5 < 1) {
    iVar9 = *param_3;
  }
  if (*(int *)(param_8 + 8) == 0) {
    *(int *)(param_8 + 8) = *(int *)(param_1 + 0x4c) + 1;
    *(int *)(param_8 + 0xc) = iVar9;
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar9;
  }
  iVar15 = *(int *)(param_8 + 8);
  if (param_5 < 1) {
    if (cVar7 != '\x03') {
      FUN_00554130(param_1);
      FUN_005546b0(param_1,param_3,iVar15,cVar7 == '\x05');
    }
  }
  else {
    iVar20 = 0;
    if (0 < param_5) {
      do {
        iVar18 = piVar3[7];
        if ((iVar18 < piVar3[8]) || (iVar10 = FUN_0053b4b0(piVar3), iVar10 == 0)) {
          piVar3[7] = piVar3[7] + 1;
          iVar10 = piVar3[1];
          *(undefined2 *)(iVar10 + iVar18 * 0x14) = 0x1d;
          iVar10 = iVar10 + iVar18 * 0x14;
          *(undefined4 *)(iVar10 + 4) = param_4;
          *(undefined1 *)(iVar10 + 3) = 0;
          *(int *)(iVar10 + 8) = iVar20;
          *(int *)(iVar10 + 0xc) = iVar20 + iVar15;
          *(undefined4 *)(iVar10 + 0x10) = 0;
        }
        iVar20 = iVar20 + 1;
      } while (iVar20 < param_5);
    }
  }
  if (cVar6 != '\0') {
    if (*(char *)(param_7 + 1) == '\x01') {
      iVar20 = piVar3[1];
      if (iVar20 != 0) {
        puVar1 = (undefined8 *)(iVar20 + *(int *)(param_7 + 8) * 0x14);
        FUN_00539320(*piVar3,(int)*(char *)((int)puVar1 + 1),
                     *(undefined4 *)(iVar20 + 0x10 + *(int *)(param_7 + 8) * 0x14));
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined4 *)(puVar1 + 2) = 0;
        *(undefined1 *)puVar1 = 0x95;
      }
    }
    else if (*(char *)(param_7 + 1) == '\x02') {
      iVar20 = *(int *)(param_1 + 0x4c) + 1;
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar9;
      iVar18 = piVar3[1];
      if (iVar18 != 0) {
        puVar1 = (undefined8 *)(iVar18 + *(int *)(param_7 + 8) * 0x14);
        FUN_00539320(*piVar3,(int)*(char *)((int)puVar1 + 1),
                     *(undefined4 *)(iVar18 + 0x10 + *(int *)(param_7 + 8) * 0x14));
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined4 *)(puVar1 + 2) = 0;
        *(undefined1 *)puVar1 = 0x95;
      }
      iVar18 = *(int *)(param_7 + 8);
      if (iVar18 < 0) {
        iVar18 = piVar3[7] + -1;
      }
      if (*(char *)(*piVar3 + 0x38) == '\0') {
        puVar11 = (undefined1 *)(piVar3[1] + iVar18 * 0x14);
      }
      else {
        puVar11 = &DAT_0076b50c;
      }
      *puVar11 = 10;
      *(undefined4 *)(puVar11 + 4) = 1;
      *(int *)(puVar11 + 8) = iVar20;
      iVar18 = piVar3[7];
      local_14 = 0;
      if (0 < iVar9) {
        local_24 = 0;
        param_1 = iVar20;
        do {
          iVar12 = FUN_00555b70(iVar5,*(undefined4 *)(local_24 + param_3[2]));
          iVar10 = piVar3[7];
          if (local_14 < iVar9 + -1) {
            if ((iVar10 < piVar3[8]) || (iVar13 = FUN_0053b4b0(piVar3), iVar13 == 0)) {
              piVar3[7] = piVar3[7] + 1;
              puVar19 = (undefined2 *)(piVar3[1] + iVar10 * 0x14);
              *(int *)(puVar19 + 2) = (iVar15 - iVar20) + param_1;
              *puVar19 = 0x4b;
              iVar10 = iVar18 + iVar9;
LAB_005484fa:
              *(undefined4 *)(puVar19 + 8) = 0;
              *(int *)(puVar19 + 6) = param_1;
              *(int *)(puVar19 + 4) = iVar10;
              *(undefined1 *)((int)puVar19 + 3) = 0;
            }
          }
          else if ((iVar10 < piVar3[8]) || (iVar13 = FUN_0053b4b0(piVar3), iVar13 == 0)) {
            piVar3[7] = piVar3[7] + 1;
            puVar19 = (undefined2 *)(piVar3[1] + iVar10 * 0x14);
            *(int *)(puVar19 + 2) = (iVar15 - iVar20) + param_1;
            *puVar19 = 0x4c;
            iVar10 = param_9;
            goto LAB_005484fa;
          }
          iVar10 = piVar3[1];
          iVar13 = *piVar3;
          if ((iVar10 == 0) || (*(char *)(iVar13 + 0x38) != '\0')) {
            FUN_00539320(iVar13,0xfffffffc,iVar12);
          }
          else {
            iVar2 = iVar10 + (piVar3[7] + -1) * 0x14;
            FUN_00539320(iVar13,(int)*(char *)(iVar2 + 1),
                         *(undefined4 *)(iVar10 + 0x10 + (piVar3[7] + -1) * 0x14));
            *(undefined4 *)(iVar2 + 0x10) = 0;
            if (iVar12 == 0) {
              *(undefined4 *)(iVar2 + 0x10) = 0;
              *(undefined1 *)(iVar2 + 1) = 0;
            }
            else {
              *(int *)(iVar2 + 0x10) = iVar12;
              *(undefined1 *)(iVar2 + 1) = 0xfc;
            }
          }
          if (piVar3[1] != 0) {
            *(undefined1 *)(piVar3[1] + -0x11 + piVar3[7] * 0x14) = 0x80;
          }
          param_1 = param_1 + 1;
          local_14 = local_14 + 1;
          local_24 = local_24 + 0x14;
        } while (local_14 < iVar9);
      }
      iVar18 = piVar3[7];
      if ((iVar18 < piVar3[8]) || (iVar10 = FUN_0053b4b0(piVar3), iVar10 == 0)) {
        piVar3[7] = piVar3[7] + 1;
        iVar10 = piVar3[1];
        *(undefined2 *)(iVar10 + iVar18 * 0x14) = 0xe;
        iVar10 = iVar10 + iVar18 * 0x14;
        *(int *)(iVar10 + 4) = iVar15;
        *(int *)(iVar10 + 8) = iVar20;
        *(undefined1 *)(iVar10 + 3) = 0;
        *(int *)(iVar10 + 0xc) = iVar9 + -1;
        *(undefined4 *)(iVar10 + 0x10) = 0;
      }
    }
    else {
      FUN_00530be0(param_1,*(undefined4 *)(param_7 + 4),param_9,iVar9,iVar15);
    }
    if (((param_6 == 0) && (*(int *)(param_2 + 0xc) != 0)) && (param_9 != 0)) {
      FUN_0056be90(piVar3,0x14,*(int *)(param_2 + 0xc),0xffffffff);
      uVar14 = FUN_0056be30(piVar3,0x79,*(undefined4 *)(param_2 + 0xc));
      FUN_0056be90(piVar3,1,0,param_9);
      if ((-1 < (int)uVar14) && (uVar14 < (uint)piVar3[7])) {
        *(int *)(piVar3[1] + 8 + uVar14 * 0x14) = piVar3[7];
      }
    }
  }
  switch(cVar7) {
  case '\x01':
    if (*(char *)(iVar5 + 0x13) == '\0') {
      *(int *)(iVar5 + 0x4c) = *(int *)(iVar5 + 0x4c) + 1;
      uVar17 = *(undefined4 *)(iVar5 + 0x4c);
    }
    else {
      bVar8 = *(char *)(iVar5 + 0x13) - 1;
      *(byte *)(iVar5 + 0x13) = bVar8;
      uVar17 = *(undefined4 *)(iVar5 + 0x1c + (uint)bVar8 * 4);
    }
    FUN_0056bef0(piVar3,0x1f,iVar15,iVar9,uVar17);
    FUN_0056be90(piVar3,0x61,uVar4,uVar17);
LAB_005486b9:
    FUN_00563fb0(iVar5,uVar17);
    break;
  case '\x02':
    FUN_0056bef0(piVar3,0x62,uVar4,iVar15,iVar9);
    break;
  case '\x03':
    FUN_0056be90(piVar3,7,1,uVar4);
    break;
  case '\x05':
  case '\n':
    if (param_6 != 0) {
      if (*(char *)(iVar5 + 0x13) == '\0') {
        *(int *)(iVar5 + 0x4c) = *(int *)(iVar5 + 0x4c) + 1;
        uVar17 = *(undefined4 *)(iVar5 + 0x4c);
      }
      else {
        bVar8 = *(char *)(iVar5 + 0x13) - 1;
        *(byte *)(iVar5 + 0x13) = bVar8;
        uVar17 = *(undefined4 *)(iVar5 + 0x1c + (uint)bVar8 * 4);
      }
      FUN_0056bef0(piVar3,0x1f,iVar15,iVar9,uVar17);
      FUN_005448e0(iVar5,param_6,param_2,uVar17);
      goto LAB_005486b9;
    }
    if (cVar7 == '\n') {
      FUN_0056be30(piVar3,4,*(undefined4 *)(param_8 + 4));
    }
    else {
      FUN_0056be90(piVar3,0x10,iVar15,iVar9);
      FUN_00554430(iVar5,iVar15,iVar9);
    }
    goto LAB_005486c9;
  case '\x06':
    if (param_6 == 0) {
      FUN_00554ca0(iVar5,iVar15,uVar4,1);
      goto LAB_005486c9;
    }
    FUN_005448e0(iVar5,param_6,param_2,iVar15);
    break;
  case '\a':
    param_8 = param_8 + 1;
    cVar7 = FUN_00550df0(*(undefined4 *)param_3[2],*param_8);
    *param_8 = cVar7;
    if (param_6 == 0) {
      if (*(char *)(iVar5 + 0x13) == '\0') {
        *(int *)(iVar5 + 0x4c) = *(int *)(iVar5 + 0x4c) + 1;
        uVar17 = *(undefined4 *)(iVar5 + 0x4c);
      }
      else {
        bVar8 = *(char *)(iVar5 + 0x13) - 1;
        *(byte *)(iVar5 + 0x13) = bVar8;
        uVar17 = *(undefined4 *)(iVar5 + 0x1c + (uint)bVar8 * 4);
      }
      FUN_0056bf50(piVar3,0x1f,iVar15,1,uVar17,param_8,1);
      FUN_00554430(iVar5,iVar15,1);
      FUN_0056be90(piVar3,0x61,uVar4,uVar17);
      FUN_00563fb0(iVar5,uVar17);
      goto LAB_005486c9;
    }
    FUN_005448e0(iVar5,param_6,param_2,iVar15);
    break;
  case '\b':
  case '\t':
    if (*(char *)(iVar5 + 0x13) == '\0') {
      *(int *)(iVar5 + 0x4c) = *(int *)(iVar5 + 0x4c) + 1;
      uVar17 = *(undefined4 *)(iVar5 + 0x4c);
    }
    else {
      bVar8 = *(char *)(iVar5 + 0x13) - 1;
      *(byte *)(iVar5 + 0x13) = bVar8;
      uVar17 = *(undefined4 *)(iVar5 + 0x1c + (uint)bVar8 * 4);
    }
    FUN_0056bef0(piVar3,0x1f,iVar15,iVar9,uVar17);
    if (param_6 == 0) {
      if (*(char *)(iVar5 + 0x13) == '\0') {
        *(int *)(iVar5 + 0x4c) = *(int *)(iVar5 + 0x4c) + 1;
        uVar16 = *(undefined4 *)(iVar5 + 0x4c);
      }
      else {
        bVar8 = *(char *)(iVar5 + 0x13) - 1;
        *(byte *)(iVar5 + 0x13) = bVar8;
        uVar16 = *(undefined4 *)(iVar5 + 0x1c + (uint)bVar8 * 4);
      }
      FUN_0056be90(piVar3,0x38,uVar4,uVar16);
      FUN_0056bef0(piVar3,0x39,uVar4,uVar17,uVar16);
      if (piVar3[1] != 0) {
        *(undefined1 *)(piVar3[1] + -0x11 + piVar3[7] * 0x14) = 8;
      }
      FUN_00563fb0(iVar5,uVar16);
      FUN_00563fb0(iVar5,uVar17);
    }
    else {
      FUN_005448e0(iVar5,param_6,param_2,uVar17);
      FUN_00563fb0(iVar5,uVar17);
    }
  }
  if (param_6 == 0) {
LAB_005486c9:
    iVar5 = *(int *)(param_2 + 8);
    if ((iVar5 != 0) &&
       ((iVar9 = piVar3[7], iVar9 < piVar3[8] || (iVar15 = FUN_0053b4b0(piVar3), iVar15 == 0)))) {
      piVar3[7] = piVar3[7] + 1;
      puVar19 = (undefined2 *)(piVar3[1] + iVar9 * 0x14);
      *puVar19 = 0x7a;
      *(undefined1 *)((int)puVar19 + 3) = 0;
      *(int *)(puVar19 + 2) = iVar5;
      *(undefined4 *)(puVar19 + 4) = param_10;
      *(undefined4 *)(puVar19 + 6) = 0xffffffff;
      *(undefined4 *)(puVar19 + 8) = 0;
    }
  }
  return;
}


/* FUN_00548980 @ 00548980  kind=lib  attributed-by=lib-island  size=45 */

char * FUN_00548980(int param_1)

{
  if (param_1 == 0x71) {
    return "UNION ALL";
  }
  if (param_1 != 0x72) {
    if (param_1 != 0x73) {
      return "UNION";
    }
    return "INTERSECT";
  }
  return "EXCEPT";
}


/* FUN_005489b0 @ 005489b0  kind=lib  attributed-by=lib-island  size=355 */

int FUN_005489b0(undefined1 *param_1)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined1 local_34 [24];
  ushort local_1c;
  uint local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  uVar1 = *param_1;
  local_10 = *(undefined4 *)(param_1 + 0x48);
  local_c = uVar5;
  iVar2 = FUN_0052e9b0(param_1);
  if (iVar2 != 0) {
    *param_1 = uVar1;
    return iVar2;
  }
  local_14 = (uint)*(ushort *)(param_1 + 0x10);
  iVar2 = 0;
  local_8 = 0;
  if (local_14 != 0) {
    do {
      puVar4 = (undefined1 *)
               ((uint)(CONCAT11(*(undefined1 *)(*(int *)(param_1 + 0x40) + iVar2 * 2),
                                *(undefined1 *)(*(int *)(param_1 + 0x40) + 1 + iVar2 * 2)) &
                      *(ushort *)(param_1 + 0x12)) + *(int *)(param_1 + 0x38));
      if ((local_8 == 0) && (FUN_0052eda0(param_1,puVar4,local_34), local_1c != 0)) {
        uVar3 = (uint)local_1c;
        FUN_00544760(*(undefined4 *)(param_1 + 0x34),
                     CONCAT31(CONCAT21(CONCAT11(puVar4[uVar3],puVar4[uVar3 + 1]),puVar4[uVar3 + 2]),
                              puVar4[uVar3 + 3]),3,*(undefined4 *)(param_1 + 0x48),&local_8);
      }
      uVar5 = local_c;
      if (param_1[3] == '\0') {
        FUN_00544760(local_c,CONCAT31(CONCAT21(CONCAT11(*puVar4,puVar4[1]),puVar4[2]),puVar4[3]),5,
                     local_10,&local_8);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)local_14);
  }
  if (param_1[3] != '\0') {
    *param_1 = uVar1;
    return local_8;
  }
  iVar2 = (uint)(byte)param_1[5] + *(int *)(param_1 + 0x38);
  FUN_00544760(uVar5,CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar2 + 8),
                                                *(undefined1 *)(iVar2 + 9)),
                                       *(undefined1 *)(iVar2 + 10)),*(undefined1 *)(iVar2 + 0xb)),5,
               local_10,&local_8);
  *param_1 = uVar1;
  return local_8;
}


/* FUN_00548ba0 @ 00548ba0  kind=lib  attributed-by=lib-island  size=48 */

void FUN_00548ba0(int param_1,undefined4 param_2)

{
  for (; param_1 != 0; param_1 = *(int *)(param_1 + 0xc)) {
    *(ushort *)(param_1 + 2) = *(ushort *)(param_1 + 2) | 1;
    *(short *)(param_1 + 0x20) = (short)param_2;
    FUN_00548ba0(*(undefined4 *)(param_1 + 8),param_2);
  }
  return;
}


/* FUN_00548bd0 @ 00548bd0  kind=lib  attributed-by=lib-island  size=105 */

void FUN_00548bd0(int param_1)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0xc) == '\0') {
    uVar2 = (**(code **)(**(int **)(param_1 + 0x3c) + 0x30))(*(int **)(param_1 + 0x3c));
    if ((uVar2 & 0x1000) == 0) {
      pcVar1 = *(code **)(**(int **)(param_1 + 0x3c) + 0x2c);
      if (pcVar1 == (code *)0x0) {
        *(undefined4 *)(param_1 + 0x7c) = 0x1000;
        return;
      }
      iVar3 = (*pcVar1)(*(int **)(param_1 + 0x3c));
      if (iVar3 < 0x20) {
        *(undefined4 *)(param_1 + 0x7c) = 0x200;
        return;
      }
      if (0x10000 < iVar3) {
        iVar3 = 0x10000;
      }
      *(int *)(param_1 + 0x7c) = iVar3;
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x7c) = 0x200;
  return;
}


/* FUN_00548c40 @ 00548c40  kind=lib  attributed-by=lib-island  size=177 */

undefined4 FUN_00548c40(undefined8 *param_1,int param_2,byte param_3)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  
  iVar3 = param_2;
  puVar2 = param_1;
  iVar1 = *(int *)((int)param_1 + 4);
  for (puVar4 = *(undefined8 **)(iVar1 + 0x48); puVar4 != (undefined8 *)0x0;
      puVar4 = *(undefined8 **)((int)puVar4 + 0xc)) {
    if ((*(int *)((int)puVar4 + 4) == param_2) && (*(undefined8 **)puVar4 == param_1))
    goto LAB_00548cd5;
  }
  if (DAT_007665e0 == 0) {
    param_1 = (undefined8 *)(*DAT_00766600)(0x10);
  }
  else {
    if (DAT_0076b488 != 0) {
      (*DAT_00766630)(DAT_0076b488);
    }
    FUN_0053dcf0(0x10,&param_1);
    if (DAT_0076b488 != 0) {
      (*DAT_00766638)(DAT_0076b488);
    }
  }
  if (param_1 == (undefined8 *)0x0) {
    return 7;
  }
  *param_1 = 0;
  param_1[1] = 0;
  *(int *)((int)param_1 + 4) = iVar3;
  *(undefined8 **)param_1 = puVar2;
  *(undefined4 *)((int)param_1 + 0xc) = *(undefined4 *)(iVar1 + 0x48);
  *(undefined8 **)(iVar1 + 0x48) = param_1;
  puVar4 = param_1;
LAB_00548cd5:
  if (*(byte *)(puVar4 + 1) < param_3) {
    *(byte *)(puVar4 + 1) = param_3;
  }
  return 0;
}


/* FUN_00548e20 @ 00548e20  kind=lib  attributed-by=lib-island  size=52 */

void FUN_00548e20(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0055eaf0(param_2,param_3,*param_4,*param_5,0);
  *param_1 = uVar1;
  param_1[1] = param_4[1];
  param_1[2] = param_5[2];
  return;
}


/* FUN_00548e60 @ 00548e60  kind=lib  attributed-by=lib-island  size=94 */

void FUN_00548e60(int *param_1,int *param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  
  iVar1 = FUN_00553bb0(*param_2,param_3,param_4,1);
  FUN_005540d0(*param_2,iVar1,0,0);
  if ((iVar1 != 0) && (*(int *)(*param_2 + 0x5c) < *(int *)(iVar1 + 0x14))) {
    FUN_00553950(param_2,"Expression tree is too large (maximum depth %d)",*(int *)(*param_2 + 0x5c)
                );
  }
  *param_1 = iVar1;
  param_1[1] = *param_4;
  param_1[2] = param_4[1] + *param_4;
  return;
}


/* FUN_00548ec0 @ 00548ec0  kind=lib  attributed-by=lib-island  size=139 */

void FUN_00548ec0(undefined4 *param_1,int *param_2,undefined1 param_3,undefined4 *param_4,
                 int *param_5)

{
  undefined4 uVar1;
  undefined1 *_Dst;
  
  uVar1 = *param_4;
  _Dst = (undefined1 *)FUN_00552230(*param_2,0x2c);
  if (_Dst != (undefined1 *)0x0) {
    memset(_Dst,0,0x2c);
    *_Dst = param_3;
    *(undefined2 *)(_Dst + 0x1e) = 0xffff;
    *(undefined4 *)(_Dst + 0x14) = 1;
  }
  FUN_005540d0(*param_2,_Dst,uVar1,0);
  if ((_Dst != (undefined1 *)0x0) && (*(int *)(*param_2 + 0x5c) < *(int *)(_Dst + 0x14))) {
    FUN_00553950(param_2,"Expression tree is too large (maximum depth %d)",*(int *)(*param_2 + 0x5c)
                );
  }
  *param_1 = _Dst;
  param_1[1] = param_4[1];
  param_1[2] = param_5[1] + *param_5;
  return;
}


/* FUN_00548f50 @ 00548f50  kind=lib  attributed-by=lib-island  size=136 */

void FUN_00548f50(undefined4 *param_1,int *param_2,undefined1 param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  undefined4 uVar1;
  undefined1 *_Dst;
  
  uVar1 = *param_4;
  _Dst = (undefined1 *)FUN_00552230(*param_2,0x2c);
  if (_Dst != (undefined1 *)0x0) {
    memset(_Dst,0,0x2c);
    *_Dst = param_3;
    *(undefined2 *)(_Dst + 0x1e) = 0xffff;
    *(undefined4 *)(_Dst + 0x14) = 1;
  }
  FUN_005540d0(*param_2,_Dst,uVar1,0);
  if ((_Dst != (undefined1 *)0x0) && (*(int *)(*param_2 + 0x5c) < *(int *)(_Dst + 0x14))) {
    FUN_00553950(param_2,"Expression tree is too large (maximum depth %d)",*(int *)(*param_2 + 0x5c)
                );
  }
  *param_1 = _Dst;
  param_1[1] = *param_5;
  param_1[2] = param_4[2];
  return;
}


/* FUN_00548fe0 @ 00548fe0  kind=lib  attributed-by=lib-island  size=28 */

int FUN_00548fe0(int param_1)

{
  if (param_1 < 0) {
    if (param_1 == -0x80000000) {
      return 0x7fffffff;
    }
    param_1 = -param_1;
  }
  return param_1;
}


/* FUN_00549000 @ 00549000  kind=lib  attributed-by=lib-island  size=94 */

void FUN_00549000(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_1[0x7f];
  if ((iVar1 == 0) || (*(char *)((int)param_1 + 0x1d5) != '\0')) {
    FUN_00555e30(*param_1,param_2);
  }
  else {
    uVar2 = FUN_005565a0(param_1,*(undefined4 *)(iVar1 + 0x18),param_2);
    *(undefined4 *)(iVar1 + 0x18) = uVar2;
    if (param_1[0x68] != 0) {
      FUN_00556980(param_1,uVar2,param_1 + 0x67,1);
      return;
    }
  }
  return;
}


/* FUN_00549060 @ 00549060  kind=lib  attributed-by=lib-island  size=135 */

void FUN_00549060(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = param_1[0x7f];
  if (iVar1 != 0) {
    uVar2 = *param_1;
    iVar5 = *(short *)(iVar1 + 0x26) + -1;
    iVar3 = FUN_0055e3f0(uVar2,param_2);
    if (iVar3 != 0) {
      iVar4 = FUN_0055d6b0(param_1,iVar3);
      if (iVar4 == 0) {
        FUN_005521a0(uVar2,iVar3);
      }
      else {
        *(int *)(*(int *)(iVar1 + 4) + 0x10 + iVar5 * 0x18) = iVar3;
        iVar3 = *(int *)(iVar1 + 8);
        if (iVar3 != 0) {
          do {
            if (**(int **)(iVar3 + 4) == iVar5) {
              **(undefined4 **)(iVar3 + 0x20) =
                   *(undefined4 *)(*(int *)(iVar1 + 4) + 0x10 + iVar5 * 0x18);
            }
            iVar3 = *(int *)(iVar3 + 0x14);
          } while (iVar3 != 0);
          return;
        }
      }
    }
  }
  return;
}


/* FUN_005490f0 @ 005490f0  kind=lib  attributed-by=lib-island  size=317 */

void FUN_005490f0(int *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  
  iVar2 = *param_1;
  puVar3 = (undefined4 *)param_1[0x7f];
  if (puVar3 != (undefined4 *)0x0) {
    if (*(int *)(iVar2 + 0x58) < *(short *)((int)puVar3 + 0x26) + 1) {
      FUN_00553950(param_1,"too many columns on %s",*puVar3);
      return;
    }
    pbVar4 = (byte *)FUN_0055e3f0(iVar2,param_2);
    if (pbVar4 != (byte *)0x0) {
      iVar5 = (int)*(short *)((int)puVar3 + 0x26);
      iVar7 = 0;
      if (0 < iVar5) {
        puVar6 = (undefined4 *)puVar3[1];
        cVar1 = (&DAT_007120d8)[*pbVar4];
        do {
          if ((cVar1 == (&DAT_007120d8)[*(byte *)*puVar6]) &&
             (iVar5 = FUN_0057a2c0(pbVar4 + 1,(byte *)*puVar6 + 1), iVar5 == 0)) {
            FUN_00553950(param_1,"duplicate column name: %s",pbVar4);
            FUN_005521a0(iVar2,pbVar4);
            return;
          }
          iVar5 = (int)*(short *)((int)puVar3 + 0x26);
          iVar7 = iVar7 + 1;
          puVar6 = puVar6 + 6;
        } while (iVar7 < iVar5);
      }
      if ((*(ushort *)((int)puVar3 + 0x26) & 7) == 0) {
        iVar5 = FUN_00552390(iVar2,puVar3[1],(iVar5 * 3 + 0x18) * 8);
        if (iVar5 == 0) {
          FUN_005521a0(iVar2,pbVar4);
          return;
        }
        puVar3[1] = iVar5;
      }
      iVar5 = (int)*(short *)((int)puVar3 + 0x26);
      iVar2 = puVar3[1];
      *(undefined8 *)(iVar2 + iVar5 * 0x18) = 0;
      *(undefined8 *)(iVar2 + 8 + iVar5 * 0x18) = 0;
      *(undefined8 *)(iVar2 + 0x10 + iVar5 * 0x18) = 0;
      *(byte **)(iVar2 + iVar5 * 0x18) = pbVar4;
      *(undefined1 *)(iVar2 + 0x15 + iVar5 * 0x18) = 0x62;
      *(short *)((int)puVar3 + 0x26) = *(short *)((int)puVar3 + 0x26) + 1;
    }
  }
  return;
}


/* FUN_00549230 @ 00549230  kind=lib  attributed-by=lib-island  size=67 */

void FUN_00549230(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  
  iVar1 = param_1[0x7f];
  if ((iVar1 != 0) && (0 < *(short *)(iVar1 + 0x26))) {
    iVar1 = *(int *)(iVar1 + 4) + *(short *)(iVar1 + 0x26) * 0x18;
    uVar3 = FUN_0055e3f0(*param_1,param_2);
    *(undefined4 *)(iVar1 + -0xc) = uVar3;
    uVar2 = FUN_00549610(uVar3);
    *(undefined1 *)(iVar1 + -3) = uVar2;
  }
  return;
}


/* FUN_00549280 @ 00549280  kind=lib  attributed-by=lib-island  size=249 */

void FUN_00549280(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  size_t _Size;
  void *_Dst;
  code *local_1c;
  code *local_18;
  int local_c;
  void *local_8;
  
  iVar1 = param_1[0x7f];
  uVar2 = *param_1;
  if (iVar1 != 0) {
    local_c = 2;
    iVar1 = *(int *)(iVar1 + 4) + *(short *)(iVar1 + 0x26) * 0x18;
    local_1c = FUN_00536500;
    local_18 = FUN_00548960;
    FUN_00578680(&local_1c,*param_2);
    if (local_c == 0) {
      FUN_00553950(param_1,"default value of column [%s] is not constant",
                   *(undefined4 *)(iVar1 + -0x18));
      FUN_00555e30(uVar2,*param_2);
      return;
    }
    FUN_00555e30(uVar2,*(undefined4 *)(iVar1 + -0x14));
    uVar3 = FUN_00536250(uVar2,*param_2,1,0);
    *(undefined4 *)(iVar1 + -0x14) = uVar3;
    FUN_005521a0(uVar2,*(undefined4 *)(iVar1 + -0x10));
    local_8 = (void *)param_2[1];
    _Size = param_2[2] - (int)local_8;
    if (local_8 == (void *)0x0) {
      _Dst = (void *)0x0;
    }
    else {
      _Dst = (void *)FUN_00552230(uVar2,_Size + 1);
      if (_Dst != (void *)0x0) {
        memcpy(_Dst,local_8,_Size);
        *(undefined1 *)((int)_Dst + _Size) = 0;
      }
    }
    *(void **)(iVar1 + -0x10) = _Dst;
  }
  FUN_00555e30(uVar2,*param_2);
  return;
}


/* FUN_00549380 @ 00549380  kind=lib  attributed-by=lib-island  size=155 */

undefined4 FUN_00549380(uint *param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  if (param_3 < 0) {
    if (((int)uVar2 < 1) && ((int)uVar2 < 0)) {
      iVar4 = (-0x80000000 - uVar2) - (uint)(1 < uVar1);
      iVar3 = param_3 + (uint)(0xfffffffe < param_2);
      if (iVar3 <= iVar4) {
        if (iVar3 < iVar4) {
          return 1;
        }
        if (param_2 + 1 < 1 - uVar1) {
          return 1;
        }
      }
    }
  }
  else if ((-1 < (int)uVar2) && ((0 < (int)uVar2 || (uVar1 != 0)))) {
    if (((int)(0x7fffffff - uVar2) <= param_3) &&
       (((int)(0x7fffffff - uVar2) < param_3 || (-uVar1 - 1 < param_2)))) {
      return 1;
    }
  }
  param_1[1] = uVar2 + param_3 + (uint)CARRY4(uVar1,param_2);
  *param_1 = uVar1 + param_2;
  return 0;
}


/* FUN_00549420 @ 00549420  kind=lib  attributed-by=lib-island  size=477 */

void FUN_00549420(undefined4 *param_1,int *param_2,undefined4 param_3,int param_4,int param_5)

{
  byte *pbVar1;
  ushort *puVar2;
  byte bVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  int iVar10;
  int local_c;
  int local_8;
  
  puVar4 = (undefined4 *)param_1[0x7f];
  iVar10 = -1;
  if ((puVar4 != (undefined4 *)0x0) && (*(char *)((int)param_1 + 0x1d5) == '\0')) {
    if ((*(byte *)((int)puVar4 + 0x2a) & 4) != 0) {
      FUN_00553950(param_1,"table \"%s\" has more than one primary key",*puVar4);
      goto LAB_0054945f;
    }
    *(byte *)((int)puVar4 + 0x2a) = *(byte *)((int)puVar4 + 0x2a) | 4;
    if (param_2 == (int *)0x0) {
      iVar10 = *(short *)((int)puVar4 + 0x26) + -1;
      puVar2 = (ushort *)(puVar4[1] + 0x16 + iVar10 * 0x18);
      *puVar2 = *puVar2 | 1;
    }
    else {
      local_8 = 0;
      if (0 < *param_2) {
        local_c = 0;
        do {
          iVar7 = (int)*(short *)((int)puVar4 + 0x26);
          iVar10 = 0;
          if (0 < iVar7) {
            puVar8 = (undefined4 *)puVar4[1];
            pbVar5 = *(byte **)(param_2[2] + 4 + local_c);
            do {
              pbVar9 = (byte *)*puVar8;
              bVar3 = *pbVar5;
              pbVar6 = pbVar5;
              while ((bVar3 != 0 && ((&DAT_007120d8)[bVar3] == (&DAT_007120d8)[*pbVar9]))) {
                pbVar1 = pbVar6 + 1;
                pbVar6 = pbVar6 + 1;
                pbVar9 = pbVar9 + 1;
                bVar3 = *pbVar1;
              }
              if ((&DAT_007120d8)[*pbVar6] == (&DAT_007120d8)[*pbVar9]) break;
              iVar10 = iVar10 + 1;
              puVar8 = puVar8 + 6;
            } while (iVar10 < iVar7);
          }
          if (iVar10 < iVar7) {
            puVar2 = (ushort *)(puVar4[1] + 0x16 + iVar10 * 0x18);
            *puVar2 = *puVar2 | 1;
          }
          local_8 = local_8 + 1;
          local_c = local_c + 0x14;
        } while (local_8 < *param_2);
      }
      if (1 < *param_2) goto LAB_005495aa;
    }
    if ((((iVar10 < 0) || (*(short *)((int)puVar4 + 0x26) <= iVar10)) ||
        (iVar7 = *(int *)(puVar4[1] + 0xc + iVar10 * 0x18), iVar7 == 0)) ||
       ((iVar7 = FUN_0057a2c0(iVar7,"INTEGER"), iVar7 != 0 || (param_5 != 0)))) {
LAB_005495aa:
      if (param_4 != 0) {
        FUN_00553950(param_1,"AUTOINCREMENT is only allowed on an INTEGER PRIMARY KEY");
        FUN_00556700(*param_1,param_2);
        return;
      }
      iVar10 = FUN_00551790(param_1,0,0,0,param_2,param_3,0,0,param_5,0);
      if (iVar10 != 0) {
        *(undefined1 *)(iVar10 + 0x2d) = 2;
      }
      FUN_00556700(*param_1,0);
      return;
    }
    *(undefined1 *)((int)puVar4 + 0x2b) = (undefined1)param_3;
    *(byte *)((int)puVar4 + 0x2a) = *(byte *)((int)puVar4 + 0x2a) | (char)param_4 << 3;
    *(short *)(puVar4 + 9) = (short)iVar10;
  }
LAB_0054945f:
  FUN_00556700(*param_1,param_2);
  return;
}


/* FUN_00549610 @ 00549610  kind=lib  attributed-by=lib-island  size=188 */

char FUN_00549610(byte *param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  
  uVar3 = 0;
  cVar1 = 'c';
  if ((param_1 == (byte *)0x0) || (bVar2 = *param_1, bVar2 == 0)) {
    return cVar1;
  }
  do {
    uVar3 = uVar3 * 0x100 + (uint)(byte)(&DAT_007120d8)[bVar2];
    param_1 = param_1 + 1;
    if (uVar3 == 0x63686172) {
      cVar1 = 'a';
    }
    else if (uVar3 == 0x636c6f62) {
      cVar1 = 'a';
    }
    else if (uVar3 == 0x74657874) {
      cVar1 = 'a';
    }
    else if (uVar3 == 0x626c6f62) {
      if ((cVar1 != 'c') && (cVar1 != 'e')) goto LAB_005496aa;
      cVar1 = 'b';
    }
    else if (uVar3 == 0x7265616c) {
      if (cVar1 != 'c') goto LAB_005496aa;
      cVar1 = 'e';
    }
    else if (uVar3 == 0x666c6f61) {
      if (cVar1 == 'c') {
        cVar1 = 'e';
      }
      else {
LAB_005496aa:
        if ((uVar3 & 0xffffff) == 0x696e74) {
          return 'd';
        }
      }
    }
    else {
      if ((uVar3 != 0x646f7562) || (cVar1 != 'c')) goto LAB_005496aa;
      cVar1 = 'e';
    }
    bVar2 = *param_1;
    if (bVar2 == 0) {
      return cVar1;
    }
  } while( true );
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


/* FUN_00549fd0 @ 00549fd0  kind=lib  attributed-by=lib-island  size=319 */

void FUN_00549fd0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 local_8;
  
  iVar1 = *param_1;
  if ((*(char *)(iVar1 + 0x81) == '\0') && (iVar2 = FUN_0055b460(iVar1,param_1 + 1), iVar2 != 0)) {
    param_1[0x11] = param_1[0x11] + 1;
    param_1[3] = iVar2;
    return;
  }
  if (param_2 == 0) {
    iVar2 = 0;
    if (*(int *)(iVar1 + 0x14) < 1) {
      return;
    }
    do {
      if (iVar2 != 1) {
        FUN_0052a0c0(param_1,iVar2);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(iVar1 + 0x14));
    return;
  }
  if (*(int *)(param_3 + 4) == 0) {
    uVar3 = FUN_0055e3f0(iVar1,param_2);
    iVar2 = FUN_00556be0(iVar1,uVar3);
    FUN_005521a0(iVar1,uVar3);
    if (-1 < iVar2) {
      FUN_0052a0c0(param_1,iVar2);
      return;
    }
    iVar2 = FUN_0055e3f0(iVar1,param_2);
    if (iVar2 == 0) {
      return;
    }
    iVar4 = FUN_00557190(iVar1,iVar2,0);
    if (iVar4 != 0) goto LAB_0054a094;
    uVar3 = 0;
LAB_0054a0e2:
    iVar5 = FUN_0055d730(param_1,0,iVar2,uVar3);
    if (iVar5 == 0) goto LAB_0054a0fe;
    iVar4 = 0;
  }
  else {
    iVar2 = FUN_00568810(param_1,param_2,param_3,&local_8);
    if (iVar2 < 0) {
      return;
    }
    uVar3 = *(undefined4 *)(*(int *)(iVar1 + 0x10) + iVar2 * 0x10);
    iVar2 = FUN_0055e3f0(iVar1,local_8);
    if (iVar2 == 0) {
      return;
    }
    iVar4 = FUN_00557190(iVar1,iVar2,uVar3);
    if (iVar4 == 0) goto LAB_0054a0e2;
LAB_0054a094:
    iVar5 = *(int *)(iVar4 + 0xc);
  }
  FUN_0052b4f0(param_1,iVar5,iVar4);
LAB_0054a0fe:
  FUN_005521a0(iVar1,iVar2);
  return;
}


/* FUN_0054a110 @ 0054a110  kind=lib  attributed-by=lib-island  size=70 */

uint FUN_0054a110(int param_1,uint param_2)

{
  if (param_1 != 0) {
    if ((*(char *)(param_1 + 0x38) != '\0') || (param_2 == 0xc0a)) {
      FUN_00553890(param_1,7,0);
      *(undefined1 *)(param_1 + 0x38) = 0;
      param_2 = 7;
    }
    return param_2 & *(uint *)(param_1 + 0x30);
  }
  return param_2 & 0xff;
}


/* FUN_0054a160 @ 0054a160  kind=lib  attributed-by=lib-island  size=325 */

void FUN_0054a160(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  void *_Dst;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  size_t _Size;
  
  if (0x1c < (int)param_2) {
    uVar5 = param_2 / 0x1d;
    param_2 = param_2 % 0x1d;
    do {
      _Size = 0x1d;
      if (*(char *)((int)param_1 + 0x1a) != '\0' || *(char *)(param_1 + 6) != '\0')
      goto LAB_0054a1d9;
      uVar1 = param_1[3];
      if ((int)(uVar1 + 0x1d) < (int)param_1[4]) {
LAB_0054a1c1:
        memcpy((void *)(param_1[2] + param_1[3]),"                             ",_Size);
        param_1[3] = param_1[3] + _Size;
      }
      else if (*(char *)((int)param_1 + 0x19) == '\0') {
        _Size = (param_1[4] - uVar1) - 1;
        *(undefined1 *)((int)param_1 + 0x1a) = 1;
        if (0 < (int)_Size) goto LAB_0054a1c1;
      }
      else {
        iVar2 = param_1[2];
        if (iVar2 == param_1[1]) {
          iVar2 = 0;
        }
        uVar6 = uVar1 + 0x1e;
        iVar4 = (int)param_1[5] >> 0x1f;
        iVar3 = ((int)uVar1 >> 0x1f) + (uint)(0xffffffe1 < uVar1);
        if ((iVar3 < iVar4) || ((iVar3 <= iVar4 && (uVar6 <= (uint)param_1[5])))) {
          param_1[4] = uVar6;
          if (*(char *)((int)param_1 + 0x19) == '\x01') {
            _Dst = (void *)FUN_00552390(*param_1,iVar2,uVar6);
LAB_0054a265:
            if (_Dst != (void *)0x0) {
              if ((iVar2 == 0) && (0 < (int)param_1[3])) {
                memcpy(_Dst,(void *)param_1[2],param_1[3]);
              }
              param_1[2] = _Dst;
              goto LAB_0054a1c1;
            }
          }
          else {
            iVar3 = FUN_00579f80();
            if (iVar3 == 0) {
              _Dst = (void *)FUN_00563800(iVar2,uVar6);
              goto LAB_0054a265;
            }
          }
          *(undefined1 *)(param_1 + 6) = 1;
          FUN_00568030(param_1);
        }
        else {
          FUN_00568030(param_1);
          *(undefined1 *)((int)param_1 + 0x1a) = 1;
        }
      }
LAB_0054a1d9:
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (0 < (int)param_2) {
    FUN_00567e70(param_1,"                             ",param_2);
  }
  return;
}


/* FUN_0054a2b0 @ 0054a2b0  kind=lib  attributed-by=lib-island  size=115 */

int FUN_0054a2b0(undefined4 param_1,int param_2,size_t param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *param_4;
  iVar2 = param_2;
  if ((uVar1 & uVar1 - 1) == 0) {
    iVar2 = 1;
    if (uVar1 != 0) {
      iVar2 = uVar1 * 2;
    }
    iVar2 = FUN_00552390(param_1,param_2,iVar2 * param_3);
    if (iVar2 == 0) {
      *param_5 = 0xffffffff;
      return param_2;
    }
  }
  memset((void *)(uVar1 * param_3 + iVar2),0,param_3);
  *param_5 = uVar1;
  *param_4 = *param_4 + 1;
  return iVar2;
}


/* FUN_0054a330 @ 0054a330  kind=lib  attributed-by=lib-island  size=1578 */

undefined4 FUN_0054a330(byte *param_1,double *param_2,uint param_3,char param_4)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  int iVar10;
  bool bVar11;
  double dVar12;
  longlong lVar13;
  undefined8 local_2c;
  int local_24;
  int local_20;
  int local_14;
  int local_10;
  uint local_8;
  
  pbVar9 = param_1 + param_3;
  iVar10 = 0;
  dVar12 = 0.0;
  iVar6 = (param_4 != '\x01') + 1;
  local_20 = 1;
  local_2c = 0;
  local_14 = 0;
  local_24 = 1;
  bVar2 = true;
  local_10 = 0;
  *param_2 = 0.0;
  if (param_4 == '\x03') {
    param_1 = param_1 + 1;
  }
  while( true ) {
    if (pbVar9 <= param_1) {
      return 0;
    }
    if (((&DAT_007121d8)[*param_1] & 1) == 0) break;
    param_1 = param_1 + iVar6;
  }
  if (pbVar9 <= param_1) {
    return 0;
  }
  if (*param_1 == 0x2d) {
    local_20 = -1;
LAB_0054a3c8:
    param_1 = param_1 + iVar6;
  }
  else if (*param_1 == 0x2b) goto LAB_0054a3c8;
  local_2c._0_4_ = 0;
  local_2c._4_4_ = 0;
  for (; param_1 < pbVar9; param_1 = param_1 + iVar6) {
    if (*param_1 != 0x30) {
      param_3 = local_2c._4_4_;
      local_8 = (uint)local_2c;
      if (param_1 < pbVar9) goto LAB_0054a420;
      break;
    }
    local_10 = local_10 + 1;
  }
  local_8 = 0;
  param_3 = 0;
  goto LAB_0054a3f2;
  while( true ) {
    uVar8 = local_8 >> 0x1e;
    uVar7 = (int)(char)*param_1 - 0x30;
    bVar11 = CARRY4(local_8,local_8 * 4);
    uVar3 = local_8 * 5;
    uVar1 = local_8 * 10;
    local_8 = uVar7 + uVar1;
    param_3 = ((int)uVar7 >> 0x1f) +
              ((param_3 + (param_3 << 2 | uVar8) + (uint)bVar11) * 2 | uVar3 >> 0x1f) +
              (uint)CARRY4(uVar7,uVar1);
    local_10 = local_10 + 1;
    param_1 = param_1 + iVar6;
    local_2c = CONCAT44(param_3,local_8);
    if (pbVar9 <= param_1) break;
LAB_0054a420:
    if (((((&DAT_007121d8)[*param_1] & 4) == 0) || (0xccccccc < (int)param_3)) ||
       ((0xccccccb < (int)param_3 && (0xccccccca < local_8)))) {
      if (param_1 < pbVar9) goto LAB_0054a4a0;
      break;
    }
  }
  goto LAB_0054a3f2;
  while( true ) {
    local_10 = local_10 + 1;
    local_14 = local_14 + 1;
    param_1 = param_1 + iVar6;
    if (pbVar9 <= param_1) break;
LAB_0054a4a0:
    if (((&DAT_007121d8)[*param_1] & 4) == 0) {
      if (param_1 < pbVar9) {
        if (*param_1 != 0x2e) goto LAB_0054a581;
        param_1 = param_1 + iVar6;
        if (param_1 < pbVar9) goto LAB_0054a4e2;
      }
      break;
    }
  }
  goto LAB_0054a3f2;
  while( true ) {
    uVar8 = local_8 >> 0x1e;
    uVar7 = (int)(char)*param_1 - 0x30;
    bVar11 = CARRY4(local_8,local_8 * 4);
    uVar3 = local_8 * 5;
    uVar1 = local_8 * 10;
    local_8 = uVar7 + uVar1;
    param_3 = ((int)uVar7 >> 0x1f) +
              ((param_3 + (param_3 << 2 | uVar8) + (uint)bVar11) * 2 | uVar3 >> 0x1f) +
              (uint)CARRY4(uVar7,uVar1);
    local_10 = local_10 + 1;
    local_14 = local_14 + -1;
    param_1 = param_1 + iVar6;
    local_2c = CONCAT44(param_3,local_8);
    if (pbVar9 <= param_1) break;
LAB_0054a4e2:
    if (((((&DAT_007121d8)[*param_1] & 4) == 0) || (0xccccccc < (int)param_3)) ||
       ((0xccccccb < (int)param_3 && (0xccccccca < local_8)))) {
      if (param_1 < pbVar9) goto LAB_0054a560;
      break;
    }
  }
  goto LAB_0054a3f2;
LAB_0054a581:
  iVar10 = 0;
  if (param_1 < pbVar9) {
    if ((*param_1 == 0x65) || (*param_1 == 0x45)) {
      param_1 = param_1 + iVar6;
      bVar2 = false;
      if (pbVar9 <= param_1) goto LAB_0054a3f2;
      if (*param_1 == 0x2d) {
        local_24 = -1;
LAB_0054a5c1:
        param_1 = param_1 + iVar6;
      }
      else if (*param_1 == 0x2b) goto LAB_0054a5c1;
      while ((param_1 < pbVar9 && (((&DAT_007121d8)[*param_1] & 4) != 0))) {
        if (iVar10 < 10000) {
          iVar10 = (int)(char)*param_1 + iVar10 * 10 + -0x30;
        }
        else {
          iVar10 = 10000;
        }
        param_1 = param_1 + iVar6;
        bVar2 = true;
      }
    }
    if ((local_10 != 0) && (bVar2)) {
      while ((param_1 < pbVar9 && (((&DAT_007121d8)[*param_1] & 1) != 0))) {
        param_1 = param_1 + iVar6;
      }
    }
  }
  goto LAB_0054a3f2;
  while( true ) {
    local_10 = local_10 + 1;
    param_1 = param_1 + iVar6;
    if (pbVar9 <= param_1) break;
LAB_0054a560:
    if (((&DAT_007121d8)[*param_1] & 4) == 0) goto LAB_0054a581;
  }
LAB_0054a3f2:
  lVar5 = CONCAT44(param_3,local_8);
  local_14 = iVar10 * local_24 + local_14;
  if (local_14 < 0) {
    iVar10 = -1;
    local_14 = -local_14;
  }
  else {
    iVar10 = 1;
  }
  if (local_8 == 0 && param_3 == 0) {
    if ((local_20 < 0) && (local_10 != 0)) {
      dVar12 = -0.0;
    }
  }
  else {
    if (iVar10 < 1) {
      lVar13 = __alldiv(local_8,param_3,10,0);
      iVar6 = (int)((ulonglong)lVar13 >> 0x20);
      uVar8 = (uint)lVar13;
      if (local_8 + uVar8 * -10 == 0 &&
          param_3 - ((iVar6 + (iVar6 << 2 | uVar8 >> 0x1e) + (uint)CARRY4(uVar8,uVar8 * 4)) * 2 |
                    uVar8 * 5 >> 0x1f) == (uint)(local_8 < uVar8 * 10)) {
        do {
          lVar4 = lVar13;
          local_24 = (int)((ulonglong)lVar4 >> 0x20);
          if (local_14 < 1) break;
          local_14 = local_14 + -1;
          lVar13 = __alldiv(lVar4,10,0);
          iVar6 = (int)((ulonglong)lVar13 >> 0x20);
          uVar8 = (uint)lVar13;
          local_2c = lVar4;
          lVar5 = lVar4;
        } while ((uint)lVar4 + uVar8 * -10 == 0 &&
                 local_24 -
                 ((iVar6 + (iVar6 << 2 | uVar8 >> 0x1e) + (uint)CARRY4(uVar8,uVar8 * 4)) * 2 |
                 uVar8 * 5 >> 0x1f) == (uint)((uint)lVar4 < uVar8 * 10));
      }
    }
    else if (((int)param_3 < 0xccccccd) && (((int)param_3 < 0xccccccc || (local_8 < 0xcccccccc)))) {
      while (lVar5 = CONCAT44(param_3,local_8), 0 < local_14) {
        local_14 = local_14 + -1;
        param_3 = (param_3 + (param_3 << 2 | local_8 >> 0x1e) + (uint)CARRY4(local_8,local_8 * 4)) *
                  2 | local_8 * 5 >> 0x1f;
        local_8 = local_8 * 10;
        local_2c = CONCAT44(param_3,local_8);
        if ((0xccccccb < (int)param_3) &&
           ((lVar5 = local_2c, 0xccccccc < (int)param_3 || (0xcccccccb < local_8)))) break;
      }
    }
    if (local_20 < 0) {
      local_2c = CONCAT44(-((int)((ulonglong)lVar5 >> 0x20) + (uint)((int)lVar5 != 0)),-(int)lVar5);
    }
    if (local_14 == 0) {
      dVar12 = (double)local_2c;
    }
    else {
      dVar12 = 1.0;
      if (local_14 < 0x134) {
        if (local_14 < 0x156) {
          if (local_14 != (local_14 / 0x16) * 0x16) {
            do {
              local_14 = local_14 + -1;
              dVar12 = dVar12 * 10.0;
            } while (local_14 != (local_14 / 0x16) * 0x16);
          }
          if (0 < local_14) {
            iVar6 = (local_14 - 1U) / 0x16 + 1;
            do {
              dVar12 = dVar12 * 1e+22;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
          if (iVar10 < 0) {
            dVar12 = (double)local_2c / dVar12;
          }
          else {
            dVar12 = (double)local_2c * dVar12;
          }
          goto LAB_0054a934;
        }
      }
      else if (local_14 < 0x156) {
        if (local_14 != (local_14 / 0x134) * 0x134) {
          do {
            local_14 = local_14 + -1;
            dVar12 = dVar12 * 10.0;
          } while (local_14 != (local_14 / 0x134) * 0x134);
        }
        if (iVar10 < 0) {
          dVar12 = ((double)local_2c / dVar12) / 1e+308;
        }
        else {
          dVar12 = (double)local_2c * dVar12 * 1e+308;
        }
        goto LAB_0054a934;
      }
      if (iVar10 < 0) {
        dVar12 = (double)local_2c * 0.0;
      }
      else {
        dVar12 = (double)local_2c * INFINITY;
      }
    }
  }
LAB_0054a934:
  *param_2 = dVar12;
  if (((pbVar9 <= param_1) && (0 < local_10)) && (bVar2)) {
    return 1;
  }
  return 0;
}


/* FUN_0054a970 @ 0054a970  kind=lib  attributed-by=lib-island  size=44 */

undefined4 FUN_0054a970(int param_1)

{
  undefined4 local_8;
  
  local_8 = 0;
  if (param_1 != 0) {
    FUN_0055a0e0(param_1,&local_8);
    return local_8;
  }
  return 0;
}


/* FUN_0054a9a0 @ 0054a9a0  kind=lib  attributed-by=lib-island  size=423 */

undefined4 FUN_0054a9a0(byte *param_1,uint *param_2,int param_3,char param_4)

{
  char *pcVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  byte *pbVar7;
  char cVar8;
  byte *pbVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  byte *pbVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  uint local_1c;
  uint uStack_18;
  
  cVar8 = param_4;
  pbVar13 = param_1 + param_3;
  iVar12 = (param_4 != '\x01') + 1;
  bVar6 = false;
  _param_4 = 0;
  if (cVar8 == '\x03') {
    param_1 = param_1 + 1;
  }
  for (; pbVar7 = param_1, param_1 < pbVar13; param_1 = param_1 + iVar12) {
    if (((&DAT_007121d8)[*param_1] & 1) == 0) {
      if (pbVar13 <= param_1) break;
      if (*param_1 == 0x2d) {
        bVar6 = true;
      }
      else if (*param_1 != 0x2b) break;
      param_1 = param_1 + iVar12;
      pbVar7 = param_1;
      break;
    }
  }
  for (; (pbVar7 < pbVar13 && (*pbVar7 == 0x30)); pbVar7 = pbVar7 + iVar12) {
  }
  local_1c = 0;
  uStack_18 = 0;
  param_3 = 0;
  pbVar9 = pbVar7;
  iVar10 = 0;
  if (pbVar7 < pbVar13) {
    do {
      _param_4 = (uint)(char)*pbVar9;
      if (9 < _param_4 - 0x30) break;
      uVar3 = local_1c >> 0x1e;
      bVar16 = CARRY4(local_1c,local_1c * 4);
      uVar5 = local_1c * 5;
      uVar4 = local_1c * 10;
      uVar15 = uVar4 + _param_4;
      local_1c = uVar15 - 0x30;
      uStack_18 = ((uStack_18 + (uStack_18 << 2 | uVar3) + (uint)bVar16) * 2 | uVar5 >> 0x1f) +
                  ((int)_param_4 >> 0x1f) + (uint)CARRY4(uVar4,_param_4) + -1 +
                  (uint)(0x2f < uVar15);
      pbVar9 = pbVar9 + iVar12;
      param_3 = param_3 + iVar12;
    } while (pbVar9 < pbVar13);
    iVar10 = param_3;
    if ((0x7ffffffe < uStack_18) && (0x7fffffff < uStack_18)) {
      *param_2 = 0;
      param_2[1] = 0x80000000;
      goto LAB_0054aac3;
    }
  }
  if (bVar6) {
    bVar16 = local_1c != 0;
    local_1c = -local_1c;
    uStack_18 = -(uStack_18 + bVar16);
  }
  param_2[1] = uStack_18;
  *param_2 = local_1c;
LAB_0054aac3:
  if ((((_param_4 != 0) && (pbVar7 + iVar10 < pbVar13)) || ((iVar10 == 0 && (param_1 == pbVar7))))
     || (iVar12 * 0x13 < iVar10)) {
    return 1;
  }
  if (iVar12 * 0x13 <= iVar10) {
    iVar10 = 0;
    iVar14 = 0;
    pbVar13 = pbVar7;
    do {
      if (0x11 < iVar14) {
        if (iVar10 == 0) {
          iVar10 = (char)pbVar7[iVar12 * 0x12] + -0x38;
        }
        break;
      }
      pcVar1 = &DAT_00716894 + iVar14;
      bVar2 = *pbVar13;
      iVar14 = iVar14 + 1;
      pbVar13 = pbVar13 + iVar12;
      iVar10 = ((int)(char)bVar2 - (int)*pcVar1) * 10;
    } while (iVar10 == 0);
    if (-1 < iVar10) {
      if (0 < iVar10) {
        return 1;
      }
      uVar11 = 2;
      if (bVar6) {
        uVar11 = 0;
      }
      return uVar11;
    }
  }
  return 0;
}


/* FUN_0054ab50 @ 0054ab50  kind=lib  attributed-by=lib-island  size=135 */

int FUN_0054ab50(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (((*(char *)(iVar1 + 0x81) == '\0') && (*(char *)((int)param_1 + 0x1d5) == '\0')) &&
     (*(code **)(iVar1 + 0x10c) != (code *)0x0)) {
    iVar1 = (**(code **)(iVar1 + 0x10c))
                      (*(undefined4 *)(iVar1 + 0x110),param_2,param_3,param_4,param_5,param_1[0x81])
    ;
    if (iVar1 == 1) {
      FUN_00553950(param_1,"not authorized");
      param_1[3] = 0x17;
      return 1;
    }
    if ((iVar1 != 0) && (iVar1 != 2)) {
      iVar1 = 1;
      FUN_0057a3f0(param_1);
    }
    return iVar1;
  }
  return 0;
}


/* FUN_0054abe0 @ 0054abe0  kind=lib  attributed-by=lib-island  size=222 */

void FUN_0054abe0(int *param_1,char *param_2,int param_3,short *param_4)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar3 = *param_1;
  puVar5 = (undefined4 *)0x0;
  if ((*(int *)(iVar3 + 0x10c) != 0) && (param_3 != 0)) {
    iVar4 = 0;
    if (0 < *(int *)(iVar3 + 0x14)) {
      piVar1 = (int *)(*(int *)(iVar3 + 0x10) + 0xc);
      do {
        if (*piVar1 == param_3) break;
        iVar4 = iVar4 + 1;
        piVar1 = piVar1 + 4;
      } while (iVar4 < *(int *)(iVar3 + 0x14));
      if (iVar4 < 0) {
        return;
      }
    }
    if (*param_2 == '<') {
      puVar5 = (undefined4 *)param_1[0x6d];
    }
    else {
      iVar3 = 0;
      if (0 < *param_4) {
        piVar1 = (int *)(param_4 + 0x1a);
        do {
          if (*(int *)(param_2 + 0x18) == *piVar1) {
            puVar5 = *(undefined4 **)(param_4 + iVar3 * 0x24 + 0xc);
            break;
          }
          iVar3 = iVar3 + 1;
          piVar1 = piVar1 + 0x12;
        } while (iVar3 < *param_4);
      }
    }
    if (puVar5 != (undefined4 *)0x0) {
      if (*(short *)(param_2 + 0x1c) < 0) {
        if (*(short *)(puVar5 + 9) < 0) {
          pcVar2 = "ROWID";
        }
        else {
          pcVar2 = *(char **)(puVar5[1] + *(short *)(puVar5 + 9) * 0x18);
        }
      }
      else {
        pcVar2 = *(char **)(puVar5[1] + *(short *)(param_2 + 0x1c) * 0x18);
      }
      iVar3 = FUN_0054acc0(param_1,*puVar5,pcVar2,iVar4);
      if (iVar3 == 2) {
        *param_2 = 'b';
      }
    }
  }
  return;
}


/* FUN_0054acc0 @ 0054acc0  kind=lib  attributed-by=lib-island  size=196 */

int FUN_0054acc0(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = *param_1;
  uVar2 = *(undefined4 *)(*(int *)(iVar1 + 0x10) + param_4 * 0x10);
  iVar3 = (**(code **)(iVar1 + 0x10c))
                    (*(undefined4 *)(iVar1 + 0x110),0x14,param_2,param_3,uVar2,param_1[0x81]);
  if (iVar3 != 1) {
    if ((iVar3 != 2) && (iVar3 != 0)) {
      FUN_00553950(param_1,"authorizer malfunction");
      param_1[3] = 1;
    }
    return iVar3;
  }
  if ((*(int *)(iVar1 + 0x14) < 3) && (param_4 == 0)) {
    FUN_00553950(param_1,"access to %s.%s is prohibited",param_2,param_3);
    param_1[3] = 0x17;
    return 1;
  }
  FUN_00553950(param_1,"access to %s.%s.%s is prohibited",uVar2,param_2,param_3);
  param_1[3] = 0x17;
  return 1;
}


/* FUN_0054ae60 @ 0054ae60  kind=lib  attributed-by=lib-island  size=1018 */

void FUN_0054ae60(int *param_1)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  undefined8 uVar13;
  
  iVar3 = *param_1;
  piVar4 = (int *)param_1[2];
  for (puVar5 = (undefined4 *)param_1[0x6b]; puVar5 != (undefined4 *)0x0;
      puVar5 = (undefined4 *)*puVar5) {
    iVar6 = puVar5[3];
    FUN_0055e5f0(param_1,0,puVar5[2],
                 *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0xc + puVar5[2] * 0x10) + 0x48),
                 0x27);
    iVar12 = piVar4[7];
    if ((iVar12 < piVar4[8]) || (iVar9 = FUN_0053b4b0(piVar4), iVar9 == 0)) {
      piVar4[7] = piVar4[7] + 1;
      puVar1 = (undefined2 *)(piVar4[1] + iVar12 * 0x14);
      *puVar1 = 10;
      *(undefined1 *)((int)puVar1 + 3) = 0;
      *(undefined4 *)(puVar1 + 2) = 0;
      *(int *)(puVar1 + 4) = iVar6;
      *(int *)(puVar1 + 6) = iVar6 + 1;
      *(undefined4 *)(puVar1 + 8) = 0;
    }
    iVar12 = piVar4[7];
    iVar9 = *(int *)puVar5[1];
    if ((iVar12 < piVar4[8]) || (iVar10 = FUN_0053b4b0(piVar4), iVar10 == 0)) {
      piVar4[7] = piVar4[7] + 1;
      puVar1 = (undefined2 *)(piVar4[1] + iVar12 * 0x14);
      *(int *)(puVar1 + 4) = iVar6 + -1;
      *puVar1 = 0x5e;
      *(undefined1 *)((int)puVar1 + 3) = 0;
      *(undefined4 *)(puVar1 + 2) = 0;
      *(undefined4 *)(puVar1 + 6) = 0;
      *(undefined4 *)(puVar1 + 8) = 0;
      iVar10 = iVar12;
    }
    else {
      iVar10 = 1;
    }
    iVar7 = piVar4[1];
    iVar8 = *piVar4;
    if ((iVar7 == 0) || (*(char *)(iVar8 + 0x38) != '\0')) {
      FUN_00539320(iVar8,0,iVar9);
    }
    else {
      if (iVar10 < 0) {
        iVar10 = piVar4[7] + -1;
      }
      iVar2 = iVar7 + iVar10 * 0x14;
      FUN_00539320(iVar8,(int)*(char *)(iVar2 + 1),*(undefined4 *)(iVar7 + 0x10 + iVar10 * 0x14));
      *(undefined4 *)(iVar2 + 0x10) = 0;
      if (iVar9 == 0) {
        *(undefined4 *)(iVar2 + 0x10) = 0;
        *(undefined1 *)(iVar2 + 1) = 0;
      }
      else {
        uVar13 = FUN_00568070(iVar9);
        uVar11 = FUN_005524a0(*piVar4,(int)((ulonglong)uVar13 >> 0x20),(int)uVar13);
        *(undefined4 *)(iVar2 + 0x10) = uVar11;
        *(undefined1 *)(iVar2 + 1) = 0xff;
      }
    }
    iVar9 = piVar4[7];
    if ((iVar9 < piVar4[8]) || (iVar10 = FUN_0053b4b0(piVar4), iVar10 == 0)) {
      piVar4[7] = piVar4[7] + 1;
      puVar1 = (undefined2 *)(piVar4[1] + iVar9 * 0x14);
      *puVar1 = 0x48;
      *(undefined1 *)((int)puVar1 + 3) = 0;
      *(undefined4 *)(puVar1 + 2) = 0;
      *(int *)(puVar1 + 4) = iVar12 + 9;
      *(undefined4 *)(puVar1 + 6) = 0;
      *(undefined4 *)(puVar1 + 8) = 0;
    }
    iVar9 = piVar4[7];
    if ((iVar9 < piVar4[8]) || (iVar10 = FUN_0053b4b0(piVar4), iVar10 == 0)) {
      iVar10 = piVar4[1];
      piVar4[7] = piVar4[7] + 1;
      *(undefined2 *)(iVar10 + iVar9 * 0x14) = 0x1d;
      *(undefined1 *)(iVar10 + 3 + iVar9 * 0x14) = 0;
      *(undefined4 *)(iVar10 + 4 + iVar9 * 0x14) = 0;
      *(undefined4 *)(iVar10 + 8 + iVar9 * 0x14) = 0;
      *(int *)(iVar10 + 0xc + iVar9 * 0x14) = iVar6;
      *(undefined4 *)(iVar10 + 0x10 + iVar9 * 0x14) = 0;
    }
    iVar9 = piVar4[7];
    if ((iVar9 < piVar4[8]) || (iVar10 = FUN_0053b4b0(piVar4), iVar10 == 0)) {
      piVar4[7] = piVar4[7] + 1;
      puVar1 = (undefined2 *)(piVar4[1] + iVar9 * 0x14);
      *(int *)(puVar1 + 2) = iVar6 + -1;
      *puVar1 = 0x4b;
      *(undefined1 *)((int)puVar1 + 3) = 0;
      *(int *)(puVar1 + 4) = iVar12 + 7;
      *(int *)(puVar1 + 6) = iVar6;
      *(undefined4 *)(puVar1 + 8) = 0;
    }
    if (piVar4[1] != 0) {
      *(undefined1 *)(piVar4[1] + -0x11 + piVar4[7] * 0x14) = 8;
    }
    iVar9 = piVar4[7];
    if ((iVar9 < piVar4[8]) || (iVar10 = FUN_0053b4b0(piVar4), iVar10 == 0)) {
      piVar4[7] = piVar4[7] + 1;
      puVar1 = (undefined2 *)(piVar4[1] + iVar9 * 0x14);
      *puVar1 = 0x41;
      *(undefined1 *)((int)puVar1 + 3) = 0;
      *(undefined4 *)(puVar1 + 2) = 0;
      *(int *)(puVar1 + 4) = iVar6 + 1;
      *(undefined4 *)(puVar1 + 6) = 0;
      *(undefined4 *)(puVar1 + 8) = 0;
    }
    iVar9 = piVar4[7];
    if ((iVar9 < piVar4[8]) || (iVar10 = FUN_0053b4b0(piVar4), iVar10 == 0)) {
      iVar10 = piVar4[1];
      piVar4[7] = piVar4[7] + 1;
      *(undefined2 *)(iVar10 + iVar9 * 0x14) = 0x1d;
      *(undefined1 *)(iVar10 + 3 + iVar9 * 0x14) = 0;
      *(undefined4 *)(iVar10 + 4 + iVar9 * 0x14) = 0;
      *(undefined4 *)(iVar10 + 8 + iVar9 * 0x14) = 1;
      *(int *)(iVar10 + 0xc + iVar9 * 0x14) = iVar6;
      *(undefined4 *)(iVar10 + 0x10 + iVar9 * 0x14) = 0;
    }
    iVar9 = piVar4[7];
    if ((iVar9 < piVar4[8]) || (iVar10 = FUN_0053b4b0(piVar4), iVar10 == 0)) {
      piVar4[7] = piVar4[7] + 1;
      puVar1 = (undefined2 *)(piVar4[1] + iVar9 * 0x14);
      *puVar1 = 1;
      *(undefined1 *)((int)puVar1 + 3) = 0;
      *(undefined4 *)(puVar1 + 2) = 0;
      *(int *)(puVar1 + 4) = iVar12 + 9;
      *(undefined4 *)(puVar1 + 6) = 0;
      *(undefined4 *)(puVar1 + 8) = 0;
    }
    iVar9 = piVar4[7];
    if ((iVar9 < piVar4[8]) || (iVar10 = FUN_0053b4b0(piVar4), iVar10 == 0)) {
      piVar4[7] = piVar4[7] + 1;
      puVar1 = (undefined2 *)(piVar4[1] + iVar9 * 0x14);
      *puVar1 = 0x5f;
      *(undefined1 *)((int)puVar1 + 3) = 0;
      *(undefined4 *)(puVar1 + 2) = 0;
      *(int *)(puVar1 + 4) = iVar12 + 2;
      *(undefined4 *)(puVar1 + 6) = 0;
      *(undefined4 *)(puVar1 + 8) = 0;
    }
    iVar12 = piVar4[7];
    if ((iVar12 < piVar4[8]) || (iVar9 = FUN_0053b4b0(piVar4), iVar9 == 0)) {
      iVar9 = piVar4[1];
      piVar4[7] = piVar4[7] + 1;
      *(undefined2 *)(iVar9 + iVar12 * 0x14) = 7;
      *(undefined1 *)(iVar9 + 3 + iVar12 * 0x14) = 0;
      *(undefined4 *)(iVar9 + 4 + iVar12 * 0x14) = 0;
      *(int *)(iVar9 + 8 + iVar12 * 0x14) = iVar6;
      *(undefined4 *)(iVar9 + 0xc + iVar12 * 0x14) = 0;
      *(undefined4 *)(iVar9 + 0x10 + iVar12 * 0x14) = 0;
    }
    iVar6 = piVar4[7];
    if ((iVar6 < piVar4[8]) || (iVar12 = FUN_0053b4b0(piVar4), iVar12 == 0)) {
      iVar12 = piVar4[1];
      piVar4[7] = piVar4[7] + 1;
      *(undefined2 *)(iVar12 + iVar6 * 0x14) = 0x2d;
      *(undefined1 *)(iVar12 + 3 + iVar6 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 4 + iVar6 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 8 + iVar6 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 0xc + iVar6 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 0x10 + iVar6 * 0x14) = 0;
    }
  }
  return;
}


/* FUN_0054b260 @ 0054b260  kind=lib  attributed-by=lib-island  size=1148 */

void FUN_0054b260(int *param_1)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  uint local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  puVar2 = (undefined4 *)param_1[0x6b];
  iVar3 = *param_1;
  iVar4 = param_1[2];
  do {
    if (puVar2 == (undefined4 *)0x0) {
      return;
    }
    iVar6 = puVar2[2];
    iVar8 = puVar2[3];
    iVar7 = *(int *)(iVar3 + 0x10);
    if (*(char *)((int)param_1 + 0x13) == '\0') {
      param_1[0x13] = param_1[0x13] + 1;
      local_8 = param_1[0x13];
    }
    else {
      bVar5 = *(char *)((int)param_1 + 0x13) - 1;
      *(byte *)((int)param_1 + 0x13) = bVar5;
      local_8 = param_1[bVar5 + 7];
    }
    FUN_0055e5f0(param_1,0,puVar2[2],*(undefined4 *)(*(int *)(iVar6 * 0x10 + iVar7 + 0xc) + 0x48),
                 0x28);
    local_14 = *(uint *)(iVar4 + 0x1c);
    if (((int)local_14 < *(int *)(iVar4 + 0x20)) || (iVar6 = FUN_0053b4b0(iVar4), iVar6 == 0)) {
      *(int *)(iVar4 + 0x1c) = *(int *)(iVar4 + 0x1c) + 1;
      puVar1 = (undefined2 *)(*(int *)(iVar4 + 4) + local_14 * 0x14);
      *puVar1 = 0x4a;
      *(undefined1 *)((int)puVar1 + 3) = 0;
      *(int *)(puVar1 + 2) = iVar8 + 1;
      *(undefined4 *)(puVar1 + 4) = 0;
      *(undefined4 *)(puVar1 + 6) = 0;
      *(undefined4 *)(puVar1 + 8) = 0;
    }
    else {
      local_14 = 1;
    }
    uVar10 = *(uint *)(iVar4 + 0x1c);
    if (((int)uVar10 < *(int *)(iVar4 + 0x20)) || (iVar6 = FUN_0053b4b0(iVar4), iVar6 == 0)) {
      iVar6 = *(int *)(iVar4 + 4);
      *(int *)(iVar4 + 0x1c) = *(int *)(iVar4 + 0x1c) + 1;
      *(undefined2 *)(iVar6 + uVar10 * 0x14) = 0x48;
      *(undefined1 *)(iVar6 + 3 + uVar10 * 0x14) = 0;
      *(undefined4 *)(iVar6 + 4 + uVar10 * 0x14) = 0;
      *(undefined4 *)(iVar6 + 8 + uVar10 * 0x14) = 0;
      *(undefined4 *)(iVar6 + 0xc + uVar10 * 0x14) = 0;
      *(undefined4 *)(iVar6 + 0x10 + uVar10 * 0x14) = 0;
    }
    else {
      uVar10 = 1;
    }
    local_c = *(int *)(iVar4 + 0x1c);
    if ((local_c < *(int *)(iVar4 + 0x20)) || (iVar6 = FUN_0053b4b0(iVar4), iVar6 == 0)) {
      *(int *)(iVar4 + 0x1c) = *(int *)(iVar4 + 0x1c) + 1;
      iVar6 = *(int *)(iVar4 + 4);
      *(undefined2 *)(iVar6 + local_c * 0x14) = 0x1d;
      *(undefined1 *)(iVar6 + 3 + local_c * 0x14) = 0;
      *(undefined4 *)(iVar6 + 4 + local_c * 0x14) = 0;
      *(undefined4 *)(iVar6 + 8 + local_c * 0x14) = 0;
      *(int *)(iVar6 + 0xc + local_c * 0x14) = local_8;
      *(undefined4 *)(iVar6 + 0x10 + local_c * 0x14) = 0;
    }
    else {
      local_c = 1;
    }
    local_10 = *(uint *)(iVar4 + 0x1c);
    if (((int)local_10 < *(int *)(iVar4 + 0x20)) || (iVar6 = FUN_0053b4b0(iVar4), iVar6 == 0)) {
      *(int *)(iVar4 + 0x1c) = *(int *)(iVar4 + 0x1c) + 1;
      puVar1 = (undefined2 *)(*(int *)(iVar4 + 4) + local_10 * 0x14);
      *(int *)(puVar1 + 2) = iVar8 + -1;
      *puVar1 = 0x4c;
      *(undefined1 *)((int)puVar1 + 3) = 0;
      *(undefined4 *)(puVar1 + 4) = 0;
      *(int *)(puVar1 + 6) = local_8;
      *(undefined4 *)(puVar1 + 8) = 0;
    }
    else {
      local_10 = 1;
    }
    iVar6 = *(int *)(iVar4 + 0x1c);
    if ((iVar6 < *(int *)(iVar4 + 0x20)) || (iVar7 = FUN_0053b4b0(iVar4), iVar7 == 0)) {
      *(int *)(iVar4 + 0x1c) = *(int *)(iVar4 + 0x1c) + 1;
      iVar7 = *(int *)(iVar4 + 4);
      *(undefined2 *)(iVar7 + iVar6 * 0x14) = 0x5f;
      *(undefined1 *)(iVar7 + 3 + iVar6 * 0x14) = 0;
      *(undefined4 *)(iVar7 + 4 + iVar6 * 0x14) = 0;
      *(int *)(iVar7 + 8 + iVar6 * 0x14) = local_c;
      *(undefined4 *)(iVar7 + 0xc + iVar6 * 0x14) = 0;
      *(undefined4 *)(iVar7 + 0x10 + iVar6 * 0x14) = 0;
    }
    if ((-1 < (int)uVar10) && (uVar10 < *(uint *)(iVar4 + 0x1c))) {
      *(uint *)(*(int *)(iVar4 + 4) + 8 + uVar10 * 0x14) = *(uint *)(iVar4 + 0x1c);
    }
    iVar6 = *(int *)(iVar4 + 0x1c);
    if ((iVar6 < *(int *)(iVar4 + 0x20)) || (iVar7 = FUN_0053b4b0(iVar4), iVar7 == 0)) {
      *(int *)(iVar4 + 0x1c) = *(int *)(iVar4 + 0x1c) + 1;
      puVar1 = (undefined2 *)(*(int *)(iVar4 + 4) + iVar6 * 0x14);
      *puVar1 = 0x38;
      *(undefined1 *)((int)puVar1 + 3) = 0;
      *(undefined4 *)(puVar1 + 2) = 0;
      *(int *)(puVar1 + 4) = iVar8 + 1;
      *(undefined4 *)(puVar1 + 6) = 0;
      *(undefined4 *)(puVar1 + 8) = 0;
    }
    uVar10 = *(uint *)(iVar4 + 0x1c);
    if (((int)uVar10 < *(int *)(iVar4 + 0x20)) || (iVar6 = FUN_0053b4b0(iVar4), iVar6 == 0)) {
      iVar6 = *(int *)(iVar4 + 4);
      *(int *)(iVar4 + 0x1c) = *(int *)(iVar4 + 0x1c) + 1;
      *(undefined2 *)(iVar6 + uVar10 * 0x14) = 1;
      *(undefined1 *)(iVar6 + 3 + uVar10 * 0x14) = 0;
      *(undefined4 *)(iVar6 + 4 + uVar10 * 0x14) = 0;
      *(undefined4 *)(iVar6 + 8 + uVar10 * 0x14) = 0;
      *(undefined4 *)(iVar6 + 0xc + uVar10 * 0x14) = 0;
      *(undefined4 *)(iVar6 + 0x10 + uVar10 * 0x14) = 0;
    }
    else {
      uVar10 = 1;
    }
    if ((-1 < (int)local_10) && (local_10 < *(uint *)(iVar4 + 0x1c))) {
      *(uint *)(*(int *)(iVar4 + 4) + 8 + local_10 * 0x14) = *(uint *)(iVar4 + 0x1c);
    }
    iVar6 = *(int *)(iVar4 + 0x1c);
    if ((iVar6 < *(int *)(iVar4 + 0x20)) || (iVar7 = FUN_0053b4b0(iVar4), iVar7 == 0)) {
      *(int *)(iVar4 + 0x1c) = *(int *)(iVar4 + 0x1c) + 1;
      iVar7 = *(int *)(iVar4 + 4);
      *(undefined2 *)(iVar7 + iVar6 * 0x14) = 0x41;
      iVar7 = iVar7 + iVar6 * 0x14;
      *(undefined1 *)(iVar7 + 3) = 0;
      *(undefined4 *)(iVar7 + 4) = 0;
      *(int *)(iVar7 + 8) = iVar8 + 1;
      *(undefined4 *)(iVar7 + 0xc) = 0;
      *(undefined4 *)(iVar7 + 0x10) = 0;
    }
    if ((-1 < (int)local_14) && (local_14 < *(uint *)(iVar4 + 0x1c))) {
      *(uint *)(*(int *)(iVar4 + 4) + 8 + local_14 * 0x14) = *(uint *)(iVar4 + 0x1c);
    }
    if ((-1 < (int)uVar10) && (uVar10 < *(uint *)(iVar4 + 0x1c))) {
      *(uint *)(*(int *)(iVar4 + 4) + 8 + uVar10 * 0x14) = *(uint *)(iVar4 + 0x1c);
    }
    iVar6 = *(int *)(iVar4 + 0x1c);
    if ((iVar6 < *(int *)(iVar4 + 0x20)) || (iVar7 = FUN_0053b4b0(iVar4), iVar7 == 0)) {
      *(int *)(iVar4 + 0x1c) = *(int *)(iVar4 + 0x1c) + 1;
      puVar1 = (undefined2 *)(*(int *)(iVar4 + 4) + iVar6 * 0x14);
      *(int *)(puVar1 + 2) = iVar8 + -1;
      *puVar1 = 0x1f;
      *(undefined1 *)((int)puVar1 + 3) = 0;
      *(undefined4 *)(puVar1 + 4) = 2;
      *(int *)(puVar1 + 6) = local_8;
      *(undefined4 *)(puVar1 + 8) = 0;
    }
    iVar6 = *(int *)(iVar4 + 0x1c);
    if ((iVar6 < *(int *)(iVar4 + 0x20)) || (iVar7 = FUN_0053b4b0(iVar4), iVar7 == 0)) {
      *(int *)(iVar4 + 0x1c) = *(int *)(iVar4 + 0x1c) + 1;
      puVar1 = (undefined2 *)(*(int *)(iVar4 + 4) + iVar6 * 0x14);
      *(int *)(puVar1 + 4) = local_8;
      *puVar1 = 0x39;
      *(undefined1 *)((int)puVar1 + 3) = 0;
      *(undefined4 *)(puVar1 + 2) = 0;
      *(int *)(puVar1 + 6) = iVar8 + 1;
      *(undefined4 *)(puVar1 + 8) = 0;
    }
    if (*(int *)(iVar4 + 4) != 0) {
      *(undefined1 *)(*(int *)(iVar4 + 4) + -0x11 + *(int *)(iVar4 + 0x1c) * 0x14) = 8;
    }
    iVar6 = *(int *)(iVar4 + 0x1c);
    if ((iVar6 < *(int *)(iVar4 + 0x20)) || (iVar8 = FUN_0053b4b0(iVar4), iVar8 == 0)) {
      iVar8 = *(int *)(iVar4 + 4);
      *(int *)(iVar4 + 0x1c) = *(int *)(iVar4 + 0x1c) + 1;
      *(undefined2 *)(iVar8 + iVar6 * 0x14) = 0x2d;
      *(undefined1 *)(iVar8 + 3 + iVar6 * 0x14) = 0;
      *(undefined4 *)(iVar8 + 4 + iVar6 * 0x14) = 0;
      *(undefined4 *)(iVar8 + 8 + iVar6 * 0x14) = 0;
      *(undefined4 *)(iVar8 + 0xc + iVar6 * 0x14) = 0;
      *(undefined4 *)(iVar8 + 0x10 + iVar6 * 0x14) = 0;
    }
    if ((local_8 != 0) && (*(byte *)((int)param_1 + 0x13) < 8)) {
      iVar6 = 0;
      piVar9 = param_1 + 0x19;
      do {
        if (piVar9[4] == local_8) {
          *(undefined1 *)(piVar9 + 2) = 1;
          goto LAB_0054b6c2;
        }
        iVar6 = iVar6 + 1;
        piVar9 = piVar9 + 6;
      } while (iVar6 < 10);
      param_1[*(byte *)((int)param_1 + 0x13) + 7] = local_8;
      *(char *)((int)param_1 + 0x13) = *(char *)((int)param_1 + 0x13) + '\x01';
    }
LAB_0054b6c2:
    puVar2 = (undefined4 *)*puVar2;
  } while( true );
}


/* FUN_0054b6e0 @ 0054b6e0  kind=lib  attributed-by=lib-island  size=110 */

void FUN_0054b6e0(int *param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  
  for (; param_1 != (int *)0x0; param_1 = (int *)param_1[0xb]) {
    iVar1 = param_1[7];
    if ((((iVar1 == 0) || (iVar1 == 5)) || (iVar1 == 6)) && (param_2 < (uint)param_1[4])) {
      if (*(int *)(*param_1 + 0xc) != 0) {
        (*DAT_00766630)(*(int *)(*param_1 + 0xc));
      }
      iVar1 = FUN_0052ba20(param_1,param_2,param_3);
      if (*(int *)(*param_1 + 0xc) != 0) {
        (*DAT_00766638)(*(int *)(*param_1 + 0xc));
      }
      if (iVar1 != 0) {
        param_1[7] = iVar1;
      }
    }
  }
  return;
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


/* FUN_0054bc80 @ 0054bc80  kind=lib  attributed-by=lib-island  size=57 */

void FUN_0054bc80(int param_1,byte param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = param_1;
  if (*(int *)(param_1 + 0x1b0) != 0) {
    iVar1 = *(int *)(param_1 + 0x1b0);
  }
  FUN_00550aa0(param_1,param_3);
  *(uint *)(iVar1 + 0x154) = *(uint *)(iVar1 + 0x154) | 1 << ((byte)param_3 & 0x1f);
  *(byte *)(iVar1 + 0x17) = *(byte *)(iVar1 + 0x17) | param_2;
  return;
}


/* FUN_0054bcc0 @ 0054bcc0  kind=lib  attributed-by=lib-island  size=76 */

void FUN_0054bcc0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  
  if ((*(ushort *)(param_2 + 2) & 0x100) != 0) {
    FUN_00555b70(param_1,param_2);
    return;
  }
  if (((param_3 == 0) || ((*(ushort *)(param_3 + 2) & 0x100) == 0)) &&
     (iVar1 = FUN_00555b70(param_1,param_2), iVar1 != 0)) {
    return;
  }
  FUN_00555b70(param_1,param_3);
  return;
}


/* FUN_0054bf60 @ 0054bf60  kind=lib  attributed-by=lib-island  size=209 */

void FUN_0054bf60(uint *param_1,int param_2,uint *param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  
  if (param_1 != (uint *)0x0) {
    uVar4 = param_2 - 1;
    uVar3 = param_1[2];
    while (uVar3 != 0) {
      uVar3 = uVar4 / param_1[2];
      uVar4 = uVar4 % param_1[2];
      param_1 = (uint *)param_1[uVar3 + 3];
      if (param_1 == (uint *)0x0) {
        return;
      }
      uVar3 = param_1[2];
    }
    if (*param_1 < 0xfa1) {
      pbVar1 = (byte *)((uVar4 >> 3) + 0xc + (int)param_1);
      *pbVar1 = *pbVar1 & ~('\x01' << ((byte)uVar4 & 7));
      return;
    }
    puVar7 = param_1 + 3;
    puVar8 = param_3;
    for (iVar5 = 0x7d; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    memset(param_1 + 3,0,500);
    param_1[1] = 0;
    uVar3 = 0;
    do {
      uVar2 = param_3[uVar3];
      if ((uVar2 != 0) && (uVar2 != uVar4 + 1)) {
        uVar6 = (uVar2 - 1) % 0x7d;
        param_1[1] = param_1[1] + 1;
        uVar2 = param_1[uVar6 + 3];
        while (uVar2 != 0) {
          uVar6 = uVar6 + 1 & -(uint)(uVar6 + 1 < 0x7d);
          uVar2 = param_1[uVar6 + 3];
        }
        param_1[uVar6 + 3] = param_3[uVar3];
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x7d);
  }
  return;
}


/* FUN_0054c040 @ 0054c040  kind=lib  attributed-by=lib-island  size=187 */

void FUN_0054c040(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 8) != 0) {
      puVar1 = (undefined4 *)(param_1 + 0xc);
      iVar2 = 0x7d;
      do {
        FUN_0054c040(*puVar1);
        puVar1 = puVar1 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    if (DAT_007665e0 == 0) {
      (*DAT_00766604)(param_1);
    }
    else {
      if (DAT_0076b488 != 0) {
        (*DAT_00766630)(DAT_0076b488);
      }
      iVar2 = (*DAT_00766608._4_4_)(param_1);
      DAT_0076b360 = DAT_0076b360 - iVar2;
      if (DAT_0076b388 < DAT_0076b360) {
        DAT_0076b388 = DAT_0076b360;
      }
      DAT_0076b384 = DAT_0076b384 + -1;
      if (DAT_0076b3ac < DAT_0076b384) {
        DAT_0076b3ac = DAT_0076b384;
      }
      (*DAT_00766604)(param_1);
      if (DAT_0076b488 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0054c0e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*DAT_00766638)();
        return;
      }
    }
  }
  return;
}


/* FUN_0054c100 @ 0054c100  kind=lib  attributed-by=lib-island  size=468 */

uint FUN_0054c100(uint *param_1,uint param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  
  if (param_1 == (uint *)0x0) {
    return 0;
  }
  param_2 = param_2 - 1;
  puVar7 = param_1;
  if (*param_1 < 0xfa1) {
LAB_0054c2bc:
    pbVar1 = (byte *)((param_2 >> 3) + 0xc + (int)puVar7);
    *pbVar1 = *pbVar1 | '\x01' << ((byte)param_2 & 7);
    return 0;
  }
  do {
    uVar3 = puVar7[2];
    if (uVar3 == 0) break;
    uVar2 = param_2 / uVar3;
    param_2 = param_2 % uVar3;
    if (puVar7[uVar2 + 3] == 0) {
      if (DAT_007665e0 == 0) {
        param_1 = (uint *)(*DAT_00766600)(0x200);
      }
      else {
        if (DAT_0076b488 != 0) {
          (*DAT_00766630)(DAT_0076b488);
        }
        FUN_0053dcf0(0x200,&param_1);
        if (DAT_0076b488 != 0) {
          (*DAT_00766638)(DAT_0076b488);
        }
      }
      puVar5 = param_1;
      if (param_1 != (uint *)0x0) {
        memset(param_1,0,0x200);
        *puVar5 = uVar3;
      }
      puVar7[uVar2 + 3] = (uint)puVar5;
      if (puVar5 == (uint *)0x0) {
        return 7;
      }
    }
    puVar7 = (uint *)puVar7[uVar2 + 3];
  } while (4000 < *puVar7);
  if (*puVar7 < 0xfa1) goto LAB_0054c2bc;
  uVar2 = param_2 % 0x7d;
  param_2 = param_2 + 1;
  uVar3 = puVar7[uVar2 + 3];
  if (uVar3 == 0) {
    uVar3 = puVar7[1];
    if (uVar3 < 0x7c) goto LAB_0054c200;
  }
  else {
    do {
      if (uVar3 == param_2) {
        return 0;
      }
      uVar2 = uVar2 + 1 & -(uint)(uVar2 + 1 < 0x7d);
      uVar3 = puVar7[uVar2 + 3];
    } while (uVar3 != 0);
  }
  uVar3 = puVar7[1];
  if (0x3d < uVar3) {
    param_1 = (uint *)FUN_0055da00(500);
    if (param_1 == (uint *)0x0) {
      return 7;
    }
    puVar5 = puVar7 + 3;
    puVar8 = param_1;
    for (iVar6 = 0x7d; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar8 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar8 = puVar8 + 1;
    }
    memset(puVar7 + 3,0,500);
    puVar7[2] = (*puVar7 + 0x7c) / 0x7d;
    uVar3 = FUN_0054c100(puVar7,param_2);
    uVar2 = 0;
    puVar5 = param_1;
    do {
      if (puVar5[uVar2] != 0) {
        uVar4 = FUN_0054c100(puVar7,puVar5[uVar2]);
        uVar3 = uVar3 | uVar4;
        puVar5 = param_1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x7d);
    FUN_00524410(puVar5);
    return uVar3;
  }
LAB_0054c200:
  puVar7[1] = uVar3 + 1;
  puVar7[uVar2 + 3] = param_2;
  return 0;
}


/* FUN_0054c2e0 @ 0054c2e0  kind=lib  attributed-by=lib-island  size=185 */

bool FUN_0054c2e0(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == (uint *)0x0) {
    return false;
  }
  if ((param_2 <= *param_1) && (param_2 != 0)) {
    param_2 = param_2 - 1;
    uVar1 = param_1[2];
    while( true ) {
      if (uVar1 == 0) {
        if (*param_1 < 0xfa1) {
          return (*(byte *)((param_2 >> 3) + 0xc + (int)param_1) & (byte)(1 << ((byte)param_2 & 7)))
                 != 0;
        }
        uVar2 = param_2 % 0x7d;
        uVar1 = param_1[uVar2 + 3];
        while( true ) {
          if (uVar1 == 0) {
            return false;
          }
          if (uVar1 == param_2 + 1) break;
          uVar2 = (uVar2 + 1) % 0x7d;
          uVar1 = param_1[uVar2 + 3];
        }
        return true;
      }
      uVar1 = param_2 / param_1[2];
      param_2 = param_2 % param_1[2];
      param_1 = (uint *)param_1[uVar1 + 3];
      if (param_1 == (uint *)0x0) break;
      uVar1 = param_1[2];
    }
  }
  return false;
}


/* FUN_0054c3a0 @ 0054c3a0  kind=lib  attributed-by=lib-island  size=73 */

undefined4 FUN_0054c3a0(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  puVar2 = *(undefined4 **)(param_1 + 4);
  FUN_0054d260(param_1);
  uVar4 = FUN_0055f9c0(*puVar2,param_2);
  if (*(char *)(param_1 + 9) != '\0') {
    piVar1 = (int *)(param_1 + 0xc);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x38);
      if (iVar3 != 0) {
        (*DAT_00766638)(iVar3);
      }
      *(undefined1 *)(param_1 + 10) = 0;
    }
  }
  return uVar4;
}


/* FUN_0054c3f0 @ 0054c3f0  kind=lib  attributed-by=lib-island  size=640 */

int FUN_0054c3f0(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  code *pcVar3;
  byte bVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  puVar1 = (undefined4 *)param_1[1];
  iVar7 = 0;
  FUN_0054d260(param_1);
  if ((char)param_1[2] != '\x02') {
    if (((char)param_1[2] == '\x01') && (param_2 == 0)) goto LAB_0054c644;
    if ((*(ushort *)((int)puVar1 + 0x16) & 1) == 0) {
      if ((param_2 == 0) || (*(char *)((int)puVar1 + 0x13) != '\x02')) goto LAB_0054c442;
LAB_0054c446:
      piVar5 = (int *)puVar1[0x13];
LAB_0054c4ab:
      if (*piVar5 != 0) {
        iVar7 = 0x106;
        goto LAB_0054c644;
      }
    }
    else {
      if (param_2 != 0) {
        iVar7 = 8;
        goto LAB_0054c644;
      }
LAB_0054c442:
      if ((*(ushort *)((int)puVar1 + 0x16) & 0x40) != 0) goto LAB_0054c446;
      if (1 < param_2) {
        for (piVar5 = (int *)puVar1[0x12]; piVar5 != (int *)0x0; piVar5 = (int *)piVar5[3]) {
          if ((int *)*piVar5 != param_1) {
            piVar5 = (int *)*piVar5;
            goto LAB_0054c4ab;
          }
        }
      }
    }
    iVar7 = FUN_00544bb0(param_1,1,1);
    if (iVar7 == 0) {
      *(ushort *)((int)puVar1 + 0x16) = *(ushort *)((int)puVar1 + 0x16) & 0xfff7;
      if (puVar1[0xb] == 0) {
        *(ushort *)((int)puVar1 + 0x16) = *(ushort *)((int)puVar1 + 0x16) | 8;
      }
LAB_0054c492:
      if (puVar1[3] == 0) goto code_r0x0054c498;
      if (iVar7 != 0) goto LAB_0054c50b;
      if (param_2 != 0) {
        if ((*(byte *)((int)puVar1 + 0x16) & 1) == 0) {
          iVar7 = FUN_0055ed20(*puVar1,1 < param_2,*(char *)(*param_1 + 0x37) == '\x02');
          if ((iVar7 == 0) && (iVar7 = FUN_00540a20(puVar1), iVar7 == 0)) goto LAB_0054c54d;
        }
        else {
          iVar7 = 8;
        }
        goto LAB_0054c50b;
      }
      goto LAB_0054c54d;
    }
    goto LAB_0054c644;
  }
  goto LAB_0054c62c;
code_r0x0054c498:
  iVar7 = FUN_0053d2a0(puVar1);
  if (iVar7 != 0) {
LAB_0054c50b:
    if ((*(char *)((int)puVar1 + 0x13) == '\0') && (puVar1[3] != 0)) {
      iVar2 = *(int *)(puVar1[3] + 0x44);
      if (iVar2 != 0) {
        iVar6 = *(int *)(iVar2 + 0x10);
        FUN_00561130(iVar2);
        if (*(int *)(*(int *)(iVar6 + 0xb4) + 0xc) == 0) {
          FUN_00541a10(iVar6);
        }
      }
      puVar1[3] = 0;
    }
LAB_0054c54d:
    if (((char)iVar7 != '\x05') || (*(char *)((int)puVar1 + 0x13) != '\0')) goto LAB_0054c592;
    iVar2 = puVar1[1];
    if (((undefined4 *)(iVar2 + 0x1ac) == (undefined4 *)0x0) ||
       ((pcVar3 = *(code **)(iVar2 + 0x1ac), pcVar3 == (code *)0x0 || (*(int *)(iVar2 + 0x1b4) < 0))
       )) goto LAB_0054c592;
    iVar6 = (*pcVar3)(*(undefined4 *)(iVar2 + 0x1b0),*(int *)(iVar2 + 0x1b4));
    if (iVar6 == 0) goto LAB_0054c588;
    *(int *)(iVar2 + 0x1b4) = *(int *)(iVar2 + 0x1b4) + 1;
  }
  goto LAB_0054c492;
LAB_0054c588:
  *(undefined4 *)(iVar2 + 0x1b4) = 0xffffffff;
LAB_0054c592:
  if (iVar7 != 0) goto LAB_0054c644;
  if (((char)param_1[2] == '\0') &&
     (puVar1[10] = puVar1[10] + 1, *(char *)((int)param_1 + 9) != '\0')) {
    *(undefined1 *)(param_1 + 9) = 1;
    param_1[10] = puVar1[0x12];
    puVar1[0x12] = param_1 + 7;
  }
  bVar4 = (param_2 != 0) + 1;
  *(byte *)(param_1 + 2) = bVar4;
  if (*(byte *)((int)puVar1 + 0x13) < bVar4) {
    *(byte *)((int)puVar1 + 0x13) = bVar4;
  }
  if (param_2 == 0) goto LAB_0054c644;
  iVar2 = puVar1[3];
  *(ushort *)((int)puVar1 + 0x16) = *(ushort *)((int)puVar1 + 0x16) & 0xffdf;
  puVar1[0x13] = param_1;
  if (1 < param_2) {
    *(ushort *)((int)puVar1 + 0x16) = *(ushort *)((int)puVar1 + 0x16) | 0x20;
  }
  iVar6 = FUN_00559fd0(*(int *)(iVar2 + 0x38) + 0x1c);
  if (puVar1[0xb] != iVar6) {
    iVar7 = FUN_00560330(*(undefined4 *)(iVar2 + 0x44));
    if (iVar7 != 0) goto LAB_0054c644;
    FUN_00563650(*(int *)(iVar2 + 0x38) + 0x1c,puVar1[0xb]);
  }
LAB_0054c62c:
  if (param_2 != 0) {
    iVar7 = FUN_0055f9c0(*puVar1,*(undefined4 *)(*param_1 + 0x1e0));
  }
LAB_0054c644:
  if (*(char *)((int)param_1 + 9) != '\0') {
    piVar5 = param_1 + 3;
    *piVar5 = *piVar5 + -1;
    if (*piVar5 == 0) {
      if (*(int *)(param_1[1] + 0x38) != 0) {
        (*DAT_00766638)(*(int *)(param_1[1] + 0x38));
      }
      *(undefined1 *)((int)param_1 + 10) = 0;
    }
  }
  return iVar7;
}


/* FUN_0054c670 @ 0054c670  kind=lib  attributed-by=lib-island  size=32 */

void FUN_0054c670(int param_1)

{
  FUN_00524410(*(undefined4 *)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x5b) = 0;
  return;
}


/* FUN_0054c690 @ 0054c690  kind=lib  attributed-by=lib-island  size=126 */

int FUN_0054c690(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = *(undefined4 *)(param_1 + 4);
  FUN_0054d260(param_1);
  iVar4 = FUN_00547260(uVar2,param_2,0);
  if (iVar4 == 0) {
    for (iVar4 = *(int *)(*(int *)(param_1 + 4) + 8); iVar4 != 0; iVar4 = *(int *)(iVar4 + 8)) {
      if (*(char *)(iVar4 + 0x5c) != '\0') {
        *(undefined1 *)(iVar4 + 0x5b) = 0;
      }
    }
    iVar4 = FUN_00530200(uVar2,param_2,0,param_3);
  }
  if (*(char *)(param_1 + 9) != '\0') {
    piVar1 = (int *)(param_1 + 0xc);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x38);
      if (iVar3 != 0) {
        (*DAT_00766638)(iVar3);
      }
      *(undefined1 *)(param_1 + 10) = 0;
    }
  }
  return iVar4;
}


/* FUN_0054c710 @ 0054c710  kind=lib  attributed-by=lib-island  size=223 */

undefined4 FUN_0054c710(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  FUN_0054d260(param_1);
  piVar2 = (int *)puVar1[2];
  while (piVar3 = piVar2, piVar3 != (int *)0x0) {
    piVar2 = (int *)piVar3[2];
    if (*piVar3 == param_1) {
      FUN_0054c7f0(piVar3);
    }
  }
  FUN_0054ed50(param_1,0);
  if (*(char *)(param_1 + 9) != '\0') {
    piVar2 = (int *)(param_1 + 0xc);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x38);
      if (iVar4 != 0) {
        (*DAT_00766638)(iVar4);
      }
      *(undefined1 *)(param_1 + 10) = 0;
    }
    if ((*(char *)(param_1 + 9) != '\0') && (iVar4 = FUN_00545bb0(puVar1), iVar4 == 0))
    goto LAB_0054c7c5;
  }
  FUN_0055ee50(*puVar1);
  if (((code *)puVar1[0xd] != (code *)0x0) && (puVar1[0xc] != 0)) {
    (*(code *)puVar1[0xd])(puVar1[0xc]);
  }
  FUN_00524410(puVar1[0xc]);
  FUN_00544190(puVar1[0x14]);
  puVar1[0x14] = 0;
  FUN_00524410(puVar1);
LAB_0054c7c5:
  if (*(int *)(param_1 + 0x18) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x14) = *(undefined4 *)(param_1 + 0x14);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x18) = *(undefined4 *)(param_1 + 0x18);
  }
  FUN_00524410(param_1);
  return 0;
}


/* FUN_0054c7f0 @ 0054c7f0  kind=lib  attributed-by=lib-island  size=307 */

undefined4 FUN_0054c7f0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    iVar2 = param_1[1];
    FUN_0054d260(iVar1);
    FUN_00524410(param_1[0x14]);
    param_1[0x14] = 0;
    *(undefined1 *)((int)param_1 + 0x5b) = 0;
    if (param_1[3] == 0) {
      *(int *)(iVar2 + 8) = param_1[2];
    }
    else {
      *(int *)(param_1[3] + 8) = param_1[2];
    }
    if (param_1[2] != 0) {
      *(int *)(param_1[2] + 0xc) = param_1[3];
    }
    if (*(ushort *)((int)param_1 + 0x5e) < 0x8000) {
      piVar6 = param_1 + 0x22;
      iVar5 = 0;
      do {
        if ((*piVar6 != 0) && (iVar3 = *(int *)(*piVar6 + 0x44), iVar3 != 0)) {
          iVar4 = *(int *)(iVar3 + 0x10);
          FUN_00561130(iVar3);
          if (*(int *)(*(int *)(iVar4 + 0xb4) + 0xc) == 0) {
            FUN_00541a10(iVar4);
          }
        }
        iVar5 = iVar5 + 1;
        piVar6 = piVar6 + 1;
      } while (iVar5 <= *(short *)((int)param_1 + 0x5e));
    }
    if ((*(char *)(iVar2 + 0x13) == '\0') && (*(int *)(iVar2 + 0xc) != 0)) {
      iVar5 = *(int *)(*(int *)(iVar2 + 0xc) + 0x44);
      if (iVar5 != 0) {
        iVar3 = *(int *)(iVar5 + 0x10);
        FUN_00561130(iVar5);
        if (*(int *)(*(int *)(iVar3 + 0xb4) + 0xc) == 0) {
          FUN_00541a10(iVar3);
        }
      }
      *(undefined4 *)(iVar2 + 0xc) = 0;
    }
    FUN_00524410(param_1[5]);
    param_1[5] = 0;
    if (*(char *)(iVar1 + 9) != '\0') {
      piVar6 = (int *)(iVar1 + 0xc);
      *piVar6 = *piVar6 + -1;
      if (*piVar6 == 0) {
        iVar2 = *(int *)(*(int *)(iVar1 + 4) + 0x38);
        if (iVar2 != 0) {
          (*DAT_00766638)(iVar2);
        }
        *(undefined1 *)(iVar1 + 10) = 0;
      }
    }
  }
  return 0;
}


/* FUN_0054c930 @ 0054c930  kind=lib  attributed-by=lib-island  size=84 */

int FUN_0054c930(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  FUN_0054d260(param_1);
  iVar3 = FUN_0054c990(param_1,0);
  if (iVar3 == 0) {
    iVar3 = FUN_0054ca30(param_1,0);
  }
  if (*(char *)(param_1 + 9) != '\0') {
    piVar1 = (int *)(param_1 + 0xc);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x38);
      if (iVar2 != 0) {
        (*DAT_00766638)(iVar2);
      }
      *(undefined1 *)(param_1 + 10) = 0;
    }
  }
  return iVar3;
}


/* FUN_0054c990 @ 0054c990  kind=lib  attributed-by=lib-island  size=151 */

int FUN_0054c990(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (*(char *)(param_1 + 8) == '\x02') {
    puVar2 = *(undefined4 **)(param_1 + 4);
    FUN_0054d260(param_1);
    if (*(char *)((int)puVar2 + 0x11) != '\0') {
      iVar4 = FUN_0052b7f0(puVar2);
      if (iVar4 != 0) {
        if (*(char *)(param_1 + 9) != '\0') {
          piVar1 = (int *)(param_1 + 0xc);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x38);
            if (iVar3 != 0) {
              (*DAT_00766638)(iVar3);
            }
            *(undefined1 *)(param_1 + 10) = 0;
          }
        }
        return iVar4;
      }
    }
    iVar4 = FUN_0055f050(*puVar2,param_2,0);
    if (*(char *)(param_1 + 9) != '\0') {
      piVar1 = (int *)(param_1 + 0xc);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x38);
        if (iVar3 != 0) {
          (*DAT_00766638)(iVar3);
        }
        *(undefined1 *)(param_1 + 10) = 0;
      }
    }
  }
  return iVar4;
}


/* FUN_0054ca30 @ 0054ca30  kind=lib  attributed-by=lib-island  size=131 */

int FUN_0054ca30(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 8) == '\0') {
    return 0;
  }
  FUN_0054d260(param_1);
  if (*(char *)(param_1 + 8) == '\x02') {
    puVar2 = *(undefined4 **)(param_1 + 4);
    iVar3 = FUN_0055f260(*puVar2);
    if ((iVar3 != 0) && (param_2 == 0)) {
      FUN_0054ddf0(param_1);
      return iVar3;
    }
    *(undefined1 *)((int)puVar2 + 0x13) = 1;
  }
  FUN_0052e890(param_1);
  if (*(char *)(param_1 + 9) != '\0') {
    piVar1 = (int *)(param_1 + 0xc);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x38);
      if (iVar3 != 0) {
        (*DAT_00766638)(iVar3);
      }
      *(undefined1 *)(param_1 + 10) = 0;
    }
  }
  return 0;
}


/* FUN_0054cac0 @ 0054cac0  kind=lib  attributed-by=lib-island  size=270 */

int FUN_0054cac0(int param_1,undefined4 *param_2)

{
  ushort *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined1 local_3c [4];
  int local_38;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 *local_24;
  undefined8 local_c;
  
  FUN_0054d260(param_1);
  FUN_0054d260(param_2);
  piVar2 = *(int **)(**(int **)(param_1 + 4) + 0x3c);
  if (*piVar2 != 0) {
    iVar4 = *(int *)(param_2[1] + 0x20);
    local_c = __allmul(*(undefined4 *)(param_2[1] + 0x2c),0,iVar4,iVar4 >> 0x1f);
    iVar4 = (**(code **)(*piVar2 + 0x28))(piVar2,0xb,&local_c);
    if ((iVar4 != 0xc) && (iVar4 != 0)) goto LAB_0054cb7f;
  }
  memset(local_3c,0,0x30);
  local_28 = *param_2;
  local_24 = param_2;
  local_38 = param_1;
  local_2c = 1;
  FUN_00524a00(local_3c,0x7fffffff);
  iVar4 = FUN_00525400(local_3c);
  if (iVar4 == 0) {
    puVar1 = (ushort *)(*(int *)(param_1 + 4) + 0x16);
    *puVar1 = *puVar1 & 0xfffd;
  }
  else {
    FUN_0055ee10(**(undefined4 **)(local_38 + 4));
  }
LAB_0054cb7f:
  if (*(char *)((int)param_2 + 9) != '\0') {
    piVar2 = param_2 + 3;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      if (*(int *)(param_2[1] + 0x38) != 0) {
        (*DAT_00766638)(*(int *)(param_2[1] + 0x38));
      }
      *(undefined1 *)((int)param_2 + 10) = 0;
    }
  }
  if (*(char *)(param_1 + 9) != '\0') {
    piVar2 = (int *)(param_1 + 0xc);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x38);
      if (iVar3 != 0) {
        (*DAT_00766638)(iVar3);
      }
      *(undefined1 *)(param_1 + 10) = 0;
    }
  }
  return iVar4;
}


/* FUN_0054cbd0 @ 0054cbd0  kind=lib  attributed-by=lib-island  size=519 */

int FUN_0054cbd0(uint param_1,uint *param_2)

{
  short *psVar1;
  short sVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  bool bVar11;
  uint local_8;
  
  iVar5 = param_1;
  if (*(int *)(param_1 + 0x18) == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    return 0;
  }
  iVar6 = FUN_0053e310(param_1);
  if (iVar6 == 0) {
    local_8 = 0;
    param_1 = 0;
    do {
      iVar7 = (int)*(short *)(iVar5 + 0x5e);
      iVar6 = *(int *)(iVar5 + 0x88 + iVar7 * 4);
      if ((*(char *)(iVar6 + 3) != '\0') || (*(char *)(iVar6 + 2) == '\0')) {
        bVar11 = CARRY4(param_1,(uint)*(ushort *)(iVar6 + 0x10));
        param_1 = param_1 + *(ushort *)(iVar6 + 0x10);
        local_8 = local_8 + bVar11;
      }
      if (*(char *)(iVar6 + 3) != '\0') {
        do {
          if (*(short *)(iVar5 + 0x5e) == 0) {
            *param_2 = param_1;
            param_2[1] = local_8;
            return 0;
          }
          iVar6 = *(int *)(iVar5 + 0x88 + *(short *)(iVar5 + 0x5e) * 4);
          if ((iVar6 != 0) && (puVar3 = *(undefined4 **)(iVar6 + 0x44), puVar3 != (undefined4 *)0x0)
             ) {
            psVar1 = (short *)((int)puVar3 + 0x1a);
            *psVar1 = *psVar1 + -1;
            iVar6 = puVar3[4];
            if (*psVar1 == 0) {
              *(int *)(puVar3[7] + 0xc) = *(int *)(puVar3[7] + 0xc) + -1;
              if ((*(byte *)(puVar3 + 6) & 2) == 0) {
                iVar7 = puVar3[7];
                if (*(int *)(iVar7 + 0x1c) != 0) {
                  if (puVar3[5] == 1) {
                    *(undefined4 *)(iVar7 + 0x2c) = 0;
                  }
                  (*DAT_00766664)(*(undefined4 *)(iVar7 + 0x28),*puVar3,0);
                }
              }
              else {
                FUN_00544570(puVar3);
                piVar4 = (int *)puVar3[7];
                iVar7 = *piVar4;
                puVar3[8] = iVar7;
                if (iVar7 != 0) {
                  *(undefined4 **)(iVar7 + 0x24) = puVar3;
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
            if (*(int *)(*(int *)(iVar6 + 0xb4) + 0xc) == 0) {
              FUN_00541a10(iVar6);
            }
          }
          *(short *)(iVar5 + 0x5e) = *(short *)(iVar5 + 0x5e) + -1;
          sVar2 = *(short *)(iVar5 + 0x5e);
          *(undefined2 *)(iVar5 + 0x42) = 0;
          *(undefined1 *)(iVar5 + 0x5a) = 0;
        } while (*(ushort *)(*(int *)(iVar5 + 0x88 + sVar2 * 4) + 0x10) <=
                 *(ushort *)(iVar5 + 0x60 + sVar2 * 2));
        psVar1 = (short *)(iVar5 + 0x60 + sVar2 * 2);
        *psVar1 = *psVar1 + 1;
        iVar7 = (int)*(short *)(iVar5 + 0x5e);
        iVar6 = *(int *)(iVar5 + 0x88 + iVar7 * 4);
      }
      uVar8 = (uint)*(ushort *)(iVar5 + 0x60 + iVar7 * 2);
      if (uVar8 == *(ushort *)(iVar6 + 0x10)) {
        iVar6 = (uint)*(byte *)(iVar6 + 5) + *(int *)(iVar6 + 0x38);
        uVar9 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar6 + 8),*(undefined1 *)(iVar6 + 9)),
                                  *(undefined1 *)(iVar6 + 10)),*(undefined1 *)(iVar6 + 0xb));
      }
      else {
        puVar10 = (undefined1 *)
                  ((uint)(CONCAT11(*(undefined1 *)(*(int *)(iVar6 + 0x40) + uVar8 * 2),
                                   *(undefined1 *)(*(int *)(iVar6 + 0x40) + 1 + uVar8 * 2)) &
                         *(ushort *)(iVar6 + 0x12)) + *(int *)(iVar6 + 0x38));
        uVar9 = CONCAT31(CONCAT21(CONCAT11(*puVar10,puVar10[1]),puVar10[2]),puVar10[3]);
      }
      iVar6 = FUN_0053e110(iVar5,uVar9);
    } while (iVar6 == 0);
    return iVar6;
  }
  return iVar6;
}


/* FUN_0054cde0 @ 0054cde0  kind=lib  attributed-by=lib-island  size=72 */

undefined4 FUN_0054cde0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_0054d260(param_1);
  uVar3 = FUN_0052e3b0(param_1,param_2,param_3);
  if (*(char *)(param_1 + 9) != '\0') {
    piVar1 = (int *)(param_1 + 0xc);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x38);
      if (iVar2 != 0) {
        (*DAT_00766638)(iVar2);
      }
      *(undefined1 *)(param_1 + 10) = 0;
    }
  }
  return uVar3;
}


/* FUN_0054ce30 @ 0054ce30  kind=lib  attributed-by=lib-island  size=78 */

undefined4
FUN_0054ce30(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_0054d260(param_1);
  uVar3 = FUN_0052e610(param_1,param_2,param_3,param_4,param_5);
  if (*(char *)(param_1 + 9) != '\0') {
    piVar1 = (int *)(param_1 + 0xc);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x38);
      if (iVar2 != 0) {
        (*DAT_00766638)(iVar2);
      }
      *(undefined1 *)(param_1 + 10) = 0;
    }
  }
  return uVar3;
}


/* FUN_0054ce80 @ 0054ce80  kind=lib  attributed-by=lib-island  size=137 */

int FUN_0054ce80(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (*(byte *)(param_1 + 0x5b) < 2) {
    iVar1 = 0;
  }
  else if (*(byte *)(param_1 + 0x5b) == 3) {
    iVar1 = *(int *)(param_1 + 0x54);
  }
  else {
    *(undefined1 *)(param_1 + 0x5b) = 0;
    iVar1 = FUN_0052ec30(param_1,*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x48),
                         *(undefined4 *)(param_1 + 0x4c),0,param_1 + 0x54);
    if (iVar1 != 0) goto LAB_0054ced0;
    FUN_00524410(*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  if (iVar1 == 0) {
    if ((*(char *)(param_1 + 0x5b) == '\x01') && (*(int *)(param_1 + 0x54) == 0)) {
      *param_2 = 0;
      return 0;
    }
    *param_2 = 1;
    return 0;
  }
LAB_0054ced0:
  *param_2 = 1;
  return iVar1;
}


/* FUN_0054cf10 @ 0054cf10  kind=lib  attributed-by=lib-island  size=62 */

int FUN_0054cf10(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (*(byte *)(param_1 + 0x5b) == 0) {
    return 4;
  }
  if ((1 < *(byte *)(param_1 + 0x5b)) && (iVar1 = FUN_0052eee0(param_1), iVar1 != 0)) {
    return iVar1;
  }
  iVar1 = FUN_00528920(param_1,param_2,param_3,param_4,0);
  return iVar1;
}


/* FUN_0054cf50 @ 0054cf50  kind=lib  attributed-by=lib-island  size=32 */

undefined4 FUN_0054cf50(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x5b) == '\x01') {
    uVar1 = FUN_005368e0(param_1,param_2,1);
    return uVar1;
  }
  return 0;
}


/* FUN_0054cf70 @ 0054cf70  kind=lib  attributed-by=lib-island  size=91 */

undefined4 FUN_0054cf70(int param_1,undefined4 *param_2)

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
  *param_2 = *(undefined4 *)(param_1 + 0x34);
  return 0;
}


/* FUN_0054cfd0 @ 0054cfd0  kind=lib  attributed-by=lib-island  size=556 */

int FUN_0054cfd0(int *param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined2 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int local_18;
  undefined4 local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  piVar5 = param_1;
  iVar10 = (int)*(short *)((int)param_1 + 0x5e);
  iVar7 = *param_1;
  iVar9 = param_1[iVar10 + 0x22];
  local_c = *(int *)(iVar7 + 4);
  uVar1 = *(ushort *)((int)param_1 + iVar10 * 2 + 0x60);
  if ((*(ushort *)(iVar9 + 0x10) <= uVar1) || (*(char *)((int)param_1 + 0x5b) != '\x01')) {
    return 1;
  }
  local_10 = (uint)uVar1;
  local_8 = (uint)(CONCAT11(*(undefined1 *)(*(int *)(iVar9 + 0x40) + local_10 * 2),
                            *(undefined1 *)(*(int *)(iVar9 + 0x40) + 1 + local_10 * 2)) &
                  *(ushort *)(iVar9 + 0x12)) + *(int *)(iVar9 + 0x38);
  param_1 = (int *)iVar7;
  if (((*(char *)(iVar9 + 3) != '\0') || (iVar7 = FUN_0054eaf0(piVar5,&local_18), iVar7 == 0)) &&
     (iVar7 = FUN_00547260(local_c,piVar5[6],piVar5), iVar7 == 0)) {
    if (piVar5[4] == 0) {
      iVar7 = piVar5[10];
      iVar2 = piVar5[0xb];
      for (iVar3 = *(int *)(*(int *)((int)param_1 + 4) + 8); iVar3 != 0; iVar3 = *(int *)(iVar3 + 8)
          ) {
        if (((*(char *)(iVar3 + 0x5c) != '\0') && (*(int *)(iVar3 + 0x28) == iVar7)) &&
           (*(int *)(iVar3 + 0x2c) == iVar2)) {
          *(undefined1 *)(iVar3 + 0x5b) = 0;
        }
      }
    }
    iVar7 = FUN_00560330(*(undefined4 *)(iVar9 + 0x44));
    if (iVar7 == 0) {
      param_1 = (int *)FUN_00530010(iVar9,local_8);
      uVar6 = FUN_0052f130(iVar9,local_8,&param_1);
      FUN_00534780(iVar9,local_10,uVar6);
      iVar7 = (int)param_1;
      if (param_1 == (int *)0x0) {
        if (*(char *)(iVar9 + 3) == '\0') {
          local_8 = piVar5[*(short *)((int)piVar5 + 0x5e) + 0x22];
          local_14 = *(undefined4 *)(piVar5[iVar10 + 0x23] + 0x48);
          local_18 = (uint)(CONCAT11(*(undefined1 *)
                                      (*(int *)(local_8 + 0x40) + -2 +
                                      (uint)*(ushort *)(local_8 + 0x10) * 2),
                                     *(undefined1 *)
                                      (*(int *)(local_8 + 0x40) + -1 +
                                      (uint)*(ushort *)(local_8 + 0x10) * 2)) &
                           *(ushort *)(local_8 + 0x12)) + *(int *)(local_8 + 0x38);
          uVar8 = FUN_0052f130(local_8,local_18);
          iVar7 = local_c;
          FUN_00529cd0(local_c);
          uVar4 = *(undefined4 *)(iVar7 + 0x50);
          param_1 = (int *)FUN_00560330(*(undefined4 *)(local_8 + 0x44));
          FUN_0053bd90(iVar9,local_10,local_18 + -4,(uVar8 & 0xffff) + 4,uVar4,local_14,&param_1);
          FUN_00534780(local_8,*(ushort *)(local_8 + 0x10) - 1,uVar8 & 0xffff,&param_1);
          if (param_1 != (int *)0x0) {
            return (int)param_1;
          }
        }
        iVar7 = FUN_0052bbb0(piVar5);
        if (iVar7 == 0) {
          if (iVar10 < *(short *)((int)piVar5 + 0x5e)) {
            do {
              iVar7 = piVar5[*(short *)((int)piVar5 + 0x5e) + 0x22];
              *(short *)((int)piVar5 + 0x5e) = *(short *)((int)piVar5 + 0x5e) + -1;
              FUN_00545740(iVar7);
            } while (iVar10 < *(short *)((int)piVar5 + 0x5e));
            iVar9 = FUN_0052bbb0(piVar5);
            iVar7 = 0;
            if (iVar9 != 0) {
              return iVar9;
            }
          }
          FUN_0053e310(piVar5);
        }
      }
    }
  }
  return iVar7;
}


/* FUN_0054d210 @ 0054d210  kind=lib  attributed-by=lib-island  size=72 */

undefined4 FUN_0054d210(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_0054d260(param_1);
  uVar3 = FUN_0052e690(param_1,param_2,param_3);
  if (*(char *)(param_1 + 9) != '\0') {
    piVar1 = (int *)(param_1 + 0xc);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x38);
      if (iVar2 != 0) {
        (*DAT_00766638)(iVar2);
      }
      *(undefined1 *)(param_1 + 10) = 0;
    }
  }
  return uVar3;
}


/* FUN_0054d260 @ 0054d260  kind=lib  attributed-by=lib-island  size=210 */

void FUN_0054d260(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if ((*(char *)((int)param_1 + 9) != '\0') &&
     (param_1[3] = param_1[3] + 1, *(char *)((int)param_1 + 10) == '\0')) {
    if ((*(int *)(param_1[1] + 0x38) == 0) ||
       (iVar3 = (*DAT_00766634)(*(int *)(param_1[1] + 0x38)), iVar3 == 0)) {
      *(undefined4 *)(param_1[1] + 4) = *param_1;
      *(undefined1 *)((int)param_1 + 10) = 1;
      return;
    }
    for (iVar3 = param_1[5]; iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x14)) {
      if (*(char *)(iVar3 + 10) != '\0') {
        iVar1 = *(int *)(*(int *)(iVar3 + 4) + 0x38);
        if (iVar1 != 0) {
          (*DAT_00766638)(iVar1);
        }
        *(undefined1 *)(iVar3 + 10) = 0;
      }
    }
    if (*(int *)(param_1[1] + 0x38) != 0) {
      (*DAT_00766630)(*(int *)(param_1[1] + 0x38));
    }
    *(undefined4 *)(param_1[1] + 4) = *param_1;
    puVar2 = (undefined4 *)param_1[5];
    *(undefined1 *)((int)param_1 + 10) = 1;
    for (; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)puVar2[5]) {
      if (puVar2[3] != 0) {
        if (*(int *)(puVar2[1] + 0x38) != 0) {
          (*DAT_00766630)(*(int *)(puVar2[1] + 0x38));
        }
        *(undefined4 *)(puVar2[1] + 4) = *puVar2;
        *(undefined1 *)((int)puVar2 + 10) = 1;
      }
    }
  }
  return;
}


/* FUN_0054d340 @ 0054d340  kind=lib  attributed-by=lib-island  size=283 */

void FUN_0054d340(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int local_8;
  
  if (0 < *(int *)(param_1 + 0x14)) {
    local_8 = 0;
    iVar5 = 0;
    do {
      puVar1 = *(undefined4 **)(local_8 + 4 + *(int *)(param_1 + 0x10));
      if (((puVar1 != (undefined4 *)0x0) && (*(char *)((int)puVar1 + 9) != '\0')) &&
         (puVar1[3] = puVar1[3] + 1, *(char *)((int)puVar1 + 10) == '\0')) {
        if ((*(int *)(puVar1[1] + 0x38) == 0) ||
           (iVar4 = (*DAT_00766634)(*(int *)(puVar1[1] + 0x38)), iVar4 == 0)) {
          *(undefined4 *)(puVar1[1] + 4) = *puVar1;
          *(undefined1 *)((int)puVar1 + 10) = 1;
        }
        else {
          for (iVar4 = puVar1[5]; iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x14)) {
            if (*(char *)(iVar4 + 10) != '\0') {
              iVar2 = *(int *)(*(int *)(iVar4 + 4) + 0x38);
              if (iVar2 != 0) {
                (*DAT_00766638)(iVar2);
              }
              *(undefined1 *)(iVar4 + 10) = 0;
            }
          }
          if (*(int *)(puVar1[1] + 0x38) != 0) {
            (*DAT_00766630)(*(int *)(puVar1[1] + 0x38));
          }
          *(undefined4 *)(puVar1[1] + 4) = *puVar1;
          puVar3 = (undefined4 *)puVar1[5];
          *(undefined1 *)((int)puVar1 + 10) = 1;
          for (; puVar3 != (undefined4 *)0x0; puVar3 = (undefined4 *)puVar3[5]) {
            if (puVar3[3] != 0) {
              if (*(int *)(puVar3[1] + 0x38) != 0) {
                (*DAT_00766630)(*(int *)(puVar3[1] + 0x38));
              }
              *(undefined4 *)(puVar3[1] + 4) = *puVar3;
              *(undefined1 *)((int)puVar3 + 10) = 1;
            }
          }
        }
      }
      iVar5 = iVar5 + 1;
      local_8 = local_8 + 0x10;
    } while (iVar5 < *(int *)(param_1 + 0x14));
  }
  return;
}


/* FUN_0054d460 @ 0054d460  kind=lib  attributed-by=lib-island  size=58 */

void FUN_0054d460(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_0053e310(param_1);
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x5b) == '\0') {
      *param_2 = 1;
      return;
    }
    *param_2 = 0;
    FUN_0053e1b0(param_1);
  }
  return;
}


/* FUN_0054d4a0 @ 0054d4a0  kind=lib  attributed-by=lib-island  size=72 */

char FUN_0054d4a0(int param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  
  FUN_0054d260(param_1);
  iVar2 = *(int *)(param_1 + 4);
  cVar3 = '\0';
  if (*(char *)(iVar2 + 0x11) != '\0') {
    cVar3 = (*(char *)(iVar2 + 0x12) != '\0') + '\x01';
  }
  if (*(char *)(param_1 + 9) != '\0') {
    piVar1 = (int *)(param_1 + 0xc);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      if (*(int *)(iVar2 + 0x38) != 0) {
        (*DAT_00766638)(*(int *)(iVar2 + 0x38));
      }
      *(undefined1 *)(param_1 + 10) = 0;
    }
  }
  return cVar3;
}


/* FUN_0054d4f0 @ 0054d4f0  kind=lib  attributed-by=lib-island  size=32 */

undefined1 * FUN_0054d4f0(int param_1)

{
  if (*(char *)(**(int **)(param_1 + 4) + 0xe) != '\0') {
    return &DAT_006fc918;
  }
  return *(undefined1 **)(**(int **)(param_1 + 4) + 0x90);
}


/* FUN_0054d510 @ 0054d510  kind=lib  attributed-by=lib-island  size=108 */

void FUN_0054d510(int param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 4);
  FUN_0054d260(param_1);
  iVar3 = *(int *)(*(int *)(iVar2 + 0xc) + 0x38);
  iVar2 = iVar3 + param_2 * 4;
  *param_3 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar3 + 0x24 + param_2 * 4),
                                        *(undefined1 *)(iVar2 + 0x25)),*(undefined1 *)(iVar2 + 0x26)
                              ),*(undefined1 *)(iVar2 + 0x27));
  if (*(char *)(param_1 + 9) != '\0') {
    piVar1 = (int *)(param_1 + 0xc);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x38);
      if (iVar2 != 0) {
        (*DAT_00766638)(iVar2);
      }
      *(undefined1 *)(param_1 + 10) = 0;
    }
  }
  return;
}


/* FUN_0054d580 @ 0054d580  kind=lib  attributed-by=lib-island  size=64 */

int FUN_0054d580(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  FUN_0054d260(param_1);
  iVar2 = *(int *)(param_1 + 4);
  iVar3 = *(int *)(iVar2 + 0x20);
  iVar4 = *(int *)(iVar2 + 0x24);
  if (*(char *)(param_1 + 9) != '\0') {
    piVar1 = (int *)(param_1 + 0xc);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      if (*(int *)(iVar2 + 0x38) != 0) {
        (*DAT_00766638)(*(int *)(iVar2 + 0x38));
      }
      *(undefined1 *)(param_1 + 10) = 0;
    }
  }
  return iVar3 - iVar4;
}


/* FUN_0054d5c0 @ 0054d5c0  kind=lib  attributed-by=lib-island  size=187 */

int FUN_0054d5c0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 4);
  FUN_0054d260(param_1);
  if (*(char *)(iVar2 + 0x11) == '\0') {
    iVar4 = 0x65;
  }
  else {
    for (iVar4 = *(int *)(iVar2 + 8); iVar4 != 0; iVar4 = *(int *)(iVar4 + 8)) {
      FUN_00524410(*(undefined4 *)(iVar4 + 0x14));
      *(undefined4 *)(iVar4 + 0x14) = 0;
    }
    iVar4 = FUN_0053b980(iVar2,0,*(undefined4 *)(iVar2 + 0x2c));
    if (iVar4 == 0) {
      iVar4 = FUN_00560330(*(undefined4 *)(*(int *)(iVar2 + 0xc) + 0x44));
      uVar3 = *(undefined4 *)(iVar2 + 0x2c);
      iVar2 = *(int *)(*(int *)(iVar2 + 0xc) + 0x38);
      *(char *)(iVar2 + 0x1c) = (char)((uint)uVar3 >> 0x18);
      *(char *)(iVar2 + 0x1d) = (char)((uint)uVar3 >> 0x10);
      *(char *)(iVar2 + 0x1e) = (char)((uint)uVar3 >> 8);
      *(char *)(iVar2 + 0x1f) = (char)uVar3;
    }
  }
  if (*(char *)(param_1 + 9) != '\0') {
    piVar1 = (int *)(param_1 + 0xc);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x38);
      if (iVar2 != 0) {
        (*DAT_00766638)(iVar2);
      }
      *(undefined1 *)(param_1 + 10) = 0;
    }
  }
  return iVar4;
}


/* FUN_0054d680 @ 0054d680  kind=lib  attributed-by=lib-island  size=509 */

int FUN_0054d680(int *param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 *param_9)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  undefined4 local_c;
  undefined4 *local_8;
  
  puVar3 = param_9;
  piVar2 = param_1;
  local_8 = param_9;
  iVar6 = *param_1;
  iVar8 = *(int *)(iVar6 + 4);
  local_c = 0;
  if (*(char *)((int)param_1 + 0x5b) == '\x03') {
    return param_1[0x15];
  }
  piVar1 = param_1 + 6;
  param_1 = (int *)iVar8;
  iVar5 = FUN_00547260(iVar8,*piVar1,piVar2);
  iVar8 = param_4;
  if (iVar5 == 0) {
    if (piVar2[4] == 0) {
      for (iVar6 = *(int *)(*(int *)(iVar6 + 4) + 8); iVar6 != 0; iVar6 = *(int *)(iVar6 + 8)) {
        if (((*(char *)(iVar6 + 0x5c) != '\0') && (*(int *)(iVar6 + 0x28) == param_3)) &&
           (*(int *)(iVar6 + 0x2c) == param_4)) {
          *(undefined1 *)(iVar6 + 0x5b) = 0;
        }
      }
    }
    if (puVar3 == (undefined4 *)0x0) {
      iVar6 = FUN_0052ec30(piVar2,param_2,param_3,param_4,param_8,&local_8);
      if (iVar6 != 0) {
        return iVar6;
      }
      param_9 = local_8;
    }
    iVar6 = piVar2[*(short *)((int)piVar2 + 0x5e) + 0x22];
    if (*(int *)((int)param_1 + 0x50) == 0) {
      uVar7 = FUN_00543f40(*(undefined4 *)((int)param_1 + 0x20));
      *(undefined4 *)((int)param_1 + 0x50) = uVar7;
    }
    local_8 = *(undefined4 **)((int)param_1 + 0x50);
    if (local_8 == (undefined4 *)0x0) {
      return 7;
    }
    param_1 = (int *)FUN_00536b50(iVar6,local_8,param_2,param_3,iVar8,param_5,param_6,param_7,
                                  &local_c);
    iVar5 = (int)param_1;
    if (param_1 == (int *)0x0) {
      uVar9 = (uint)*(ushort *)((int)piVar2 + *(short *)((int)piVar2 + 0x5e) * 2 + 0x60);
      if (param_9 == (undefined4 *)0x0) {
        iVar8 = FUN_00560330(*(undefined4 *)(iVar6 + 0x44));
        if (iVar8 != 0) {
          return iVar8;
        }
        param_9 = (undefined4 *)
                  ((uint)(CONCAT11(*(undefined1 *)(*(int *)(iVar6 + 0x40) + uVar9 * 2),
                                   *(undefined1 *)(*(int *)(iVar6 + 0x40) + 1 + uVar9 * 2)) &
                         *(ushort *)(iVar6 + 0x12)) + *(int *)(iVar6 + 0x38));
        if (*(char *)(iVar6 + 3) == '\0') {
          *local_8 = *param_9;
        }
        uVar4 = FUN_0052f130(iVar6,param_9);
        param_1 = (int *)FUN_00530010(iVar6,param_9);
        FUN_00534780(iVar6,uVar9,uVar4,&param_1);
        if (param_1 != (int *)0x0) {
          return (int)param_1;
        }
      }
      else if (((int)param_9 < 0) && (*(short *)(iVar6 + 0x10) != 0)) {
        *(short *)((int)piVar2 + *(short *)((int)piVar2 + 0x5e) * 2 + 0x60) = (short)(uVar9 + 1);
        uVar9 = uVar9 + 1 & 0xffff;
      }
      FUN_0053bd90(iVar6,uVar9,local_8,local_c,0,0,&param_1);
      *(undefined2 *)((int)piVar2 + 0x42) = 0;
      *(undefined1 *)((int)piVar2 + 0x5a) = 0;
      iVar5 = (int)param_1;
      if ((param_1 == (int *)0x0) && (*(char *)(iVar6 + 1) != '\0')) {
        iVar5 = FUN_0052bbb0(piVar2);
        *(undefined1 *)(piVar2[*(short *)((int)piVar2 + 0x5e) + 0x22] + 1) = 0;
        *(undefined1 *)((int)piVar2 + 0x5b) = 0;
      }
    }
  }
  return iVar5;
}


/* FUN_0054d880 @ 0054d880  kind=lib  attributed-by=lib-island  size=1117 */

void FUN_0054d880(int param_1,int param_2,int param_3,int param_4,int *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  size_t _Size;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *local_ac;
  int local_a8;
  void *local_a4;
  uint local_a0;
  int local_9c;
  int local_98;
  int local_94;
  undefined4 local_90;
  undefined1 *local_8c;
  undefined1 *local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_78;
  undefined2 local_77;
  int *local_74;
  void *local_70;
  undefined1 local_6c [100];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  piVar1 = *(int **)(param_1 + 4);
  local_74 = param_5;
  FUN_0054d260(param_1);
  iVar2 = *(int *)(*(int *)(*piVar1 + 0xb4) + 0xc);
  local_a8 = *piVar1;
  local_a0 = piVar1[0xb];
  local_9c = param_4;
  local_98 = 0;
  local_94 = 0;
  *local_74 = 0;
  local_ac = piVar1;
  if (local_a0 != 0) {
    _Size = (local_a0 >> 3) + 1;
    local_70 = (void *)FUN_0055da00(_Size);
    if (local_70 != (void *)0x0) {
      memset(local_70,0,_Size);
    }
    if (local_70 != (void *)0x0) {
      uVar6 = DAT_007666d0 / (uint)piVar1[8] + 1;
      if (uVar6 <= local_a0) {
        pbVar4 = (byte *)((uVar6 >> 3) + (int)local_70);
        *pbVar4 = *pbVar4 | '\x01' << ((byte)uVar6 & 7);
      }
      local_90 = 0;
      local_84 = 0;
      local_80 = 100;
      local_7c = 20000;
      local_77 = 2;
      local_78 = 0;
      local_8c = local_6c;
      iVar5 = *(int *)(piVar1[3] + 0x38);
      local_a4 = local_70;
      local_88 = local_8c;
      FUN_0052f410(&local_ac,1,
                   CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar5 + 0x20),
                                              *(undefined1 *)(iVar5 + 0x21)),
                                     *(undefined1 *)(iVar5 + 0x22)),*(undefined1 *)(iVar5 + 0x23)),
                   CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar5 + 0x24),
                                              *(undefined1 *)(iVar5 + 0x25)),
                                     *(undefined1 *)(iVar5 + 0x26)),*(undefined1 *)(iVar5 + 0x27)),
                   "Main freelist: ");
      iVar5 = 0;
      if (0 < param_3) {
        do {
          if (local_9c == 0) break;
          iVar3 = *(int *)(param_2 + iVar5 * 4);
          if (iVar3 != 0) {
            if ((*(char *)((int)piVar1 + 0x11) != '\0') && (1 < iVar3)) {
              FUN_0052f610(&local_ac,iVar3,1,0,0);
            }
            FUN_0052f720(&local_ac,*(undefined4 *)(param_2 + iVar5 * 4),"List of tree roots: ",0,0);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < param_3);
      }
      uVar6 = 1;
      if (local_a0 != 0) {
        do {
          if (local_9c == 0) break;
          local_70 = (void *)(1 << ((byte)uVar6 & 7));
          if ((*(byte *)((uVar6 >> 3) + (int)local_a4) & (byte)local_70) == 0) {
            if (uVar6 < 2) {
              uVar7 = 0;
            }
            else {
              uVar7 = (uint)piVar1[9] / 5 + 1;
              iVar5 = ((uVar6 - 2) / uVar7) * uVar7;
              uVar7 = iVar5 + 2;
              if (uVar7 == DAT_007666d0 / (uint)piVar1[8] + 1) {
                uVar7 = iVar5 + 3;
              }
            }
            if ((uVar7 != uVar6) || (*(char *)((int)piVar1 + 0x11) == '\0')) {
              FUN_0052f2b0(&local_ac,0,"Page %d is never used",uVar6);
            }
          }
          if ((*(byte *)((uVar6 >> 3) + (int)local_a4) & (byte)local_70) != 0) {
            if (uVar6 < 2) {
              uVar7 = 0;
            }
            else {
              uVar7 = (uint)piVar1[9] / 5 + 1;
              iVar5 = ((uVar6 - 2) / uVar7) * uVar7;
              uVar7 = iVar5 + 2;
              if (uVar7 == DAT_007666d0 / (uint)piVar1[8] + 1) {
                uVar7 = iVar5 + 3;
              }
            }
            if ((uVar7 == uVar6) && (*(char *)((int)piVar1 + 0x11) != '\0')) {
              FUN_0052f2b0(&local_ac,0,"Pointer map page %d is referenced",uVar6);
            }
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 <= local_a0);
      }
      iVar5 = *(int *)(*(int *)(*piVar1 + 0xb4) + 0xc);
      if (iVar2 != iVar5) {
        FUN_0052f2b0(&local_ac,0,"Outstanding page count goes from %d to %d during this analysis",
                     iVar2,iVar5);
      }
      if (*(char *)(param_1 + 9) != '\0') {
        piVar1 = (int *)(param_1 + 0xc);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x38);
          if (iVar2 != 0) {
            (*DAT_00766638)(iVar2);
          }
          *(undefined1 *)(param_1 + 10) = 0;
        }
      }
      FUN_00524410(local_a4);
      if (local_94 == 0) {
        *local_74 = local_98;
        if (local_98 == 0) {
          if (local_88 != local_8c) {
            if ((char)local_77 == '\x01') {
              FUN_005521a0(local_90);
            }
            else {
              FUN_00524410(local_88);
            }
          }
          local_88 = (undefined1 *)0x0;
        }
        FUN_00567fb0(&local_90);
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      if (local_88 != local_8c) {
        if ((char)local_77 == '\x01') {
          FUN_005521a0(local_90);
          *local_74 = local_98 + 1;
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
        FUN_00524410(local_88);
      }
      *local_74 = local_98 + 1;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    *local_74 = 1;
    local_a4 = (void *)0x0;
  }
  if (*(char *)(param_1 + 9) != '\0') {
    piVar1 = (int *)(param_1 + 0xc);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x38);
      if (iVar2 != 0) {
        (*DAT_00766638)(iVar2);
      }
      *(undefined1 *)(param_1 + 10) = 0;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0054dce0 @ 0054dce0  kind=lib  attributed-by=lib-island  size=106 */

int FUN_0054dce0(int param_1,uint *param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  
  if (*(char *)(param_1 + 0x5b) == '\x01') {
    if (*(short *)(param_1 + 0x42) == 0) {
      iVar2 = *(int *)(param_1 + 0x88 + *(short *)(param_1 + 0x5e) * 4);
      uVar3 = (uint)*(ushort *)(param_1 + 0x60 + *(short *)(param_1 + 0x5e) * 2);
      FUN_0052eda0(iVar2,(uint)(CONCAT11(*(undefined1 *)(*(int *)(iVar2 + 0x40) + uVar3 * 2),
                                         *(undefined1 *)(*(int *)(iVar2 + 0x40) + 1 + uVar3 * 2)) &
                               *(ushort *)(iVar2 + 0x12)) + *(int *)(iVar2 + 0x38),param_1 + 0x28);
    }
    uVar1 = *(ushort *)(param_1 + 0x3c);
    iVar2 = *(int *)(param_1 + 0x30);
    *param_2 = (uint)*(ushort *)(param_1 + 0x3e);
    return (uint)uVar1 + iVar2;
  }
  return 0;
}


/* FUN_0054dd50 @ 0054dd50  kind=lib  attributed-by=lib-island  size=62 */

undefined4 FUN_0054dd50(int param_1,undefined4 *param_2)

{
  if (*(char *)(param_1 + 0x5b) != '\x01') {
    *param_2 = 0;
    param_2[1] = 0;
    return 0;
  }
  FUN_0053a7f0(param_1);
  *param_2 = *(undefined4 *)(param_1 + 0x28);
  param_2[1] = *(undefined4 *)(param_1 + 0x2c);
  return 0;
}


/* FUN_0054dd90 @ 0054dd90  kind=lib  attributed-by=lib-island  size=89 */

int FUN_0054dd90(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 0x5b) == '\x01') && (*(char *)(param_1 + 0x59) != '\0')) {
    return 0;
  }
  iVar1 = FUN_0053e310(param_1);
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x5b) == '\0') {
      *param_2 = 1;
      return 0;
    }
    *param_2 = 0;
    iVar1 = FUN_0053e280(param_1);
    *(bool *)(param_1 + 0x59) = iVar1 == 0;
  }
  return iVar1;
}


/* FUN_0054ddf0 @ 0054ddf0  kind=lib  attributed-by=lib-island  size=45 */

void FUN_0054ddf0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 9) != '\0') {
    piVar1 = (int *)(param_1 + 0xc);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x38);
      if (iVar2 != 0) {
        (*DAT_00766638)(iVar2);
      }
      *(undefined1 *)(param_1 + 10) = 0;
    }
  }
  return;
}


/* FUN_0054de20 @ 0054de20  kind=lib  attributed-by=lib-island  size=81 */

void FUN_0054de20(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    iVar4 = 0;
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0x10) + 4 + iVar4);
      if ((iVar2 != 0) && (*(char *)(iVar2 + 9) != '\0')) {
        piVar1 = (int *)(iVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          iVar3 = *(int *)(*(int *)(iVar2 + 4) + 0x38);
          if (iVar3 != 0) {
            (*DAT_00766638)(iVar3);
          }
          *(undefined1 *)(iVar2 + 10) = 0;
        }
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0x10;
    } while (iVar5 < *(int *)(param_1 + 0x14));
  }
  return;
}


/* FUN_0054deb0 @ 0054deb0  kind=lib  attributed-by=lib-island  size=112 */

int FUN_0054deb0(int param_1,undefined4 param_2,char param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 9) != '\0') {
    FUN_0054d260(param_1);
    iVar3 = FUN_00544bb0(param_1,param_2,param_3 + '\x01');
    if (iVar3 == 0) {
      iVar3 = FUN_00548c40(param_1,param_2,param_3 + '\x01');
    }
    if (*(char *)(param_1 + 9) != '\0') {
      piVar1 = (int *)(param_1 + 0xc);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x38);
        if (iVar2 != 0) {
          (*DAT_00766638)(iVar2);
        }
        *(undefined1 *)(param_1 + 10) = 0;
      }
    }
    return iVar3;
  }
  return 0;
}


/* FUN_0054df20 @ 0054df20  kind=lib  attributed-by=lib-island  size=82 */

undefined4 FUN_0054df20(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_0054d260(param_1);
  iVar2 = **(int **)(param_1 + 4);
  if (0 < param_2) {
    *(int *)(iVar2 + 0x84) = param_2;
  }
  uVar3 = *(undefined4 *)(iVar2 + 0x84);
  if (*(char *)(param_1 + 9) != '\0') {
    piVar1 = (int *)(param_1 + 0xc);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x38);
      if (iVar2 != 0) {
        (*DAT_00766638)(iVar2);
      }
      *(undefined1 *)(param_1 + 10) = 0;
    }
  }
  return uVar3;
}


/* FUN_0054df80 @ 0054df80  kind=lib  attributed-by=lib-island  size=941 */

int FUN_0054df80(int param_1,undefined4 param_2,uint param_3,int param_4,int param_5,int *param_6)

{
  undefined1 uVar1;
  undefined3 uVar2;
  int iVar3;
  uint uVar4;
  ushort uVar5;
  int iVar6;
  undefined1 *puVar7;
  byte *pbVar8;
  int iVar9;
  uint local_24;
  int local_20;
  undefined1 local_1c [4];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (((*(char *)(param_1 + 0x5b) == '\x01') && (*(char *)(param_1 + 0x5a) != '\0')) &&
     (*(char *)(*(int *)(param_1 + 0x88) + 2) != '\0')) {
    iVar3 = *(int *)(param_1 + 0x2c);
    if ((*(uint *)(param_1 + 0x28) == param_3) && (iVar3 == param_4)) {
      *param_6 = 0;
      return 0;
    }
    if (((*(char *)(param_1 + 0x59) != '\0') && (iVar3 <= param_4)) &&
       ((iVar3 < param_4 || (*(uint *)(param_1 + 0x28) < param_3)))) goto LAB_0054dfd8;
  }
  iVar3 = FUN_0053e310(param_1);
  if (iVar3 == 0) {
    if (*(char *)(param_1 + 0x5b) == '\0') {
LAB_0054dfd8:
      *param_6 = -1;
      return 0;
    }
    do {
      iVar3 = (int)*(short *)(param_1 + 0x5e);
      local_18 = 0;
      local_c = *(int *)(param_1 + 0x88 + iVar3 * 4);
      local_14 = *(ushort *)(local_c + 0x10) - 1;
      if (param_5 == 0) {
        local_8 = local_14 / 2;
        *(short *)(param_1 + 0x60 + iVar3 * 2) = (short)local_8;
      }
      else {
        *(short *)(param_1 + 0x60 + iVar3 * 2) = (short)local_14;
        local_8 = local_14;
      }
      while( true ) {
        *(undefined2 *)(param_1 + 0x42) = 0;
        pbVar8 = (byte *)((uint)(CONCAT11(*(undefined1 *)(*(int *)(local_c + 0x40) + local_8 * 2),
                                          *(undefined1 *)
                                           (*(int *)(local_c + 0x40) + 1 + local_8 * 2)) &
                                *(ushort *)(local_c + 0x12)) + (uint)*(byte *)(local_c + 6) +
                         *(int *)(local_c + 0x38));
        if (*(char *)(local_c + 2) == '\0') {
          uVar5 = (ushort)*pbVar8;
          if (*(byte *)(local_c + 7) < uVar5) {
            if (((char)pbVar8[1] < '\0') ||
               (uVar5 = (uVar5 & 0x7f) * 0x80 + (ushort)pbVar8[1], *(ushort *)(local_c + 8) < uVar5)
               ) {
              FUN_0052eda0(local_c,(int)pbVar8 - (uint)*(byte *)(local_c + 6),
                           (int *)(param_1 + 0x28));
              iVar3 = *(int *)(param_1 + 0x28);
              if (0x7ffffefe < iVar3 - 1U) {
                return 7;
              }
              if (DAT_007665e0 == 0) {
                local_10 = (*DAT_00766600)(iVar3);
              }
              else {
                if (DAT_0076b488 != 0) {
                  (*DAT_00766630)(DAT_0076b488);
                }
                FUN_0053dcf0(iVar3,&local_10);
                if (DAT_0076b488 != 0) {
                  (*DAT_00766638)(DAT_0076b488);
                }
              }
              iVar9 = local_10;
              if (local_10 == 0) {
                return 7;
              }
              iVar6 = FUN_00528920(param_1,0,iVar3,local_10,0);
              if (iVar6 != 0) {
                FUN_00524410(iVar9);
                return iVar6;
              }
              iVar3 = FUN_00575a10(iVar3,iVar9,param_2);
              FUN_00524410(iVar9);
            }
            else {
              iVar3 = FUN_00575a10(uVar5,pbVar8 + 2,param_2);
            }
          }
          else {
            iVar3 = FUN_00575a10(uVar5,pbVar8 + 1,param_2);
          }
        }
        else {
          if (*(char *)(local_c + 4) != '\0') {
            if (*pbVar8 < 0x80) {
              uVar4 = 1;
            }
            else {
              uVar4 = FUN_0055aaf0(pbVar8,local_1c);
              uVar4 = uVar4 & 0xff;
            }
            pbVar8 = pbVar8 + uVar4;
          }
          FUN_0055a920(pbVar8,&local_24);
          if ((local_24 == param_3) && (local_20 == param_4)) {
            iVar3 = 0;
            *(undefined1 *)(param_1 + 0x5a) = 1;
            *(uint *)(param_1 + 0x28) = local_24;
            *(int *)(param_1 + 0x2c) = local_20;
          }
          else if ((param_4 < local_20) || ((param_4 <= local_20 && (param_3 <= local_24)))) {
            iVar3 = 1;
            *(undefined1 *)(param_1 + 0x5a) = 1;
            *(uint *)(param_1 + 0x28) = local_24;
            *(int *)(param_1 + 0x2c) = local_20;
          }
          else {
            iVar3 = -1;
            *(undefined1 *)(param_1 + 0x5a) = 1;
            *(uint *)(param_1 + 0x28) = local_24;
            *(int *)(param_1 + 0x2c) = local_20;
          }
        }
        if (iVar3 == 0) break;
        if (iVar3 < 0) {
          local_18 = local_8 + 1;
        }
        else {
          local_14 = local_8 + -1;
        }
        iVar9 = local_18;
        if (local_14 < local_18) goto LAB_0054e24e;
        local_8 = (local_14 + local_18) / 2;
        *(short *)(param_1 + 0x60 + *(short *)(param_1 + 0x5e) * 2) = (short)local_8;
      }
      if ((*(char *)(local_c + 2) == '\0') || (iVar9 = local_8, *(char *)(local_c + 3) != '\0')) {
        *param_6 = 0;
        return 0;
      }
LAB_0054e24e:
      if (*(char *)(local_c + 3) != '\0') {
LAB_0054e2e9:
        *param_6 = iVar3;
        return 0;
      }
      if (iVar9 < (int)(uint)*(ushort *)(local_c + 0x10)) {
        puVar7 = (undefined1 *)
                 ((uint)(CONCAT11(*(undefined1 *)(*(int *)(local_c + 0x40) + iVar9 * 2),
                                  *(undefined1 *)(*(int *)(local_c + 0x40) + 1 + iVar9 * 2)) &
                        *(ushort *)(local_c + 0x12)) + *(int *)(local_c + 0x38));
        uVar2 = CONCAT21(CONCAT11(*puVar7,puVar7[1]),puVar7[2]);
        uVar1 = puVar7[3];
      }
      else {
        iVar6 = (uint)*(byte *)(local_c + 5) + *(int *)(local_c + 0x38);
        uVar2 = CONCAT21(CONCAT11(*(undefined1 *)(iVar6 + 8),*(undefined1 *)(iVar6 + 9)),
                         *(undefined1 *)(iVar6 + 10));
        uVar1 = *(undefined1 *)(iVar6 + 0xb);
      }
      if (CONCAT31(uVar2,uVar1) == 0) goto LAB_0054e2e9;
      *(short *)(param_1 + 0x60 + *(short *)(param_1 + 0x5e) * 2) = (short)iVar9;
      *(undefined2 *)(param_1 + 0x42) = 0;
      *(undefined1 *)(param_1 + 0x5a) = 0;
      iVar3 = FUN_0053e110(param_1,CONCAT31(uVar2,uVar1));
    } while (iVar3 == 0);
  }
  return iVar3;
}


/* FUN_0054e330 @ 0054e330  kind=lib  attributed-by=lib-island  size=360 */

int FUN_0054e330(int param_1,undefined4 *param_2)

{
  short *psVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  short sVar6;
  
  if (*(byte *)(param_1 + 0x5b) < 2) {
    iVar5 = 0;
  }
  else if (*(byte *)(param_1 + 0x5b) == 3) {
    iVar5 = *(int *)(param_1 + 0x54);
  }
  else {
    *(undefined1 *)(param_1 + 0x5b) = 0;
    iVar5 = FUN_0052ec30(param_1,*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x48),
                         *(undefined4 *)(param_1 + 0x4c),0,param_1 + 0x54);
    if (iVar5 != 0) {
      return iVar5;
    }
    FUN_00524410(*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = 0;
    iVar5 = 0;
  }
  if (iVar5 != 0) {
    return iVar5;
  }
  if (*(char *)(param_1 + 0x5b) == '\0') {
    *param_2 = 1;
  }
  else {
    iVar5 = *(int *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x54) = 0;
    if (0 < iVar5) {
      *param_2 = 0;
      return 0;
    }
    iVar3 = (int)*(short *)(param_1 + 0x5e);
    iVar5 = *(int *)(param_1 + 0x88 + iVar3 * 4);
    psVar1 = (short *)(param_1 + 0x60 + iVar3 * 2);
    *psVar1 = *psVar1 + 1;
    uVar2 = *(ushort *)(param_1 + 0x60 + iVar3 * 2);
    *(undefined2 *)(param_1 + 0x42) = 0;
    *(undefined1 *)(param_1 + 0x5a) = 0;
    if (uVar2 < *(ushort *)(iVar5 + 0x10)) {
      *param_2 = 0;
      if (*(char *)(iVar5 + 3) == '\0') {
        iVar5 = FUN_0053e1b0(param_1);
        return iVar5;
      }
    }
    else {
      if (*(char *)(iVar5 + 3) == '\0') {
        uVar4 = FUN_00559fd0(*(int *)(iVar5 + 0x38) + 8 + (uint)*(byte *)(iVar5 + 5));
        iVar5 = FUN_0053e110(param_1,uVar4);
        if (iVar5 != 0) {
          return iVar5;
        }
        iVar5 = FUN_0053e1b0(param_1);
        *param_2 = 0;
        return iVar5;
      }
      sVar6 = *(short *)(param_1 + 0x5e);
      do {
        if (sVar6 == 0) {
          *param_2 = 1;
          *(undefined1 *)(param_1 + 0x5b) = 0;
          return 0;
        }
        FUN_0053e230(param_1);
        sVar6 = *(short *)(param_1 + 0x5e);
        iVar5 = *(int *)(param_1 + 0x88 + sVar6 * 4);
      } while (*(ushort *)(iVar5 + 0x10) <= *(ushort *)(param_1 + 0x60 + sVar6 * 2));
      *param_2 = 0;
      if (*(char *)(iVar5 + 2) != '\0') {
        iVar5 = FUN_0054e330(param_1,param_2);
        return iVar5;
      }
    }
  }
  return 0;
}


/* FUN_0054e4a0 @ 0054e4a0  kind=lib  attributed-by=lib-island  size=1602 */

void FUN_0054e4a0(int param_1,byte *param_2,int param_3,undefined4 *param_4,uint param_5,
                 uint param_6)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  int *_Dst;
  byte *pbVar7;
  int *piVar8;
  int *piVar9;
  char *pcVar10;
  byte *pbVar11;
  undefined4 uVar12;
  int iVar13;
  bool bVar14;
  bool bVar15;
  undefined8 uVar16;
  int local_94;
  int local_80;
  int local_70;
  undefined1 local_6c [16];
  ushort local_5c;
  byte local_58;
  undefined1 local_38 [12];
  undefined1 local_2c [36];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  bVar15 = false;
  local_80 = 0;
  local_70 = 0;
  if ((param_2 == (byte *)0x0) || (*param_2 == 0)) {
    bVar15 = true;
  }
  if (param_2 == (byte *)0x0) {
LAB_0054e51d:
    if (((bVar15) && (*(char *)(param_3 + 0x37) == '\x02')) || ((char)param_6 < '\0'))
    goto LAB_0054e538;
    bVar14 = false;
  }
  else {
    pcVar10 = ":memory:";
    pbVar5 = param_2;
    do {
      bVar2 = *pbVar5;
      bVar14 = bVar2 < (byte)*pcVar10;
      if (bVar2 != *pcVar10) {
LAB_0054e511:
        uVar6 = -(uint)bVar14 | 1;
        goto LAB_0054e516;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar5[1];
      bVar14 = bVar2 < (byte)pcVar10[1];
      if (bVar2 != pcVar10[1]) goto LAB_0054e511;
      pbVar5 = pbVar5 + 2;
      pcVar10 = pcVar10 + 2;
    } while (bVar2 != 0);
    uVar6 = 0;
LAB_0054e516:
    if (uVar6 != 0) goto LAB_0054e51d;
LAB_0054e538:
    bVar14 = true;
    param_5 = param_5 | 2;
  }
  if (((param_6 & 0x100) != 0) && ((bVar14 || (bVar15)))) {
    param_6 = param_6 & 0xfffffeff | 0x200;
  }
  _Dst = (int *)FUN_0055da00(0x2c);
  if (_Dst == (int *)0x0) {
LAB_0054e5ec:
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  memset(_Dst,0,0x2c);
  *(undefined1 *)(_Dst + 2) = 0;
  *_Dst = param_3;
  _Dst[7] = (int)_Dst;
  _Dst[8] = 1;
  if (((bVar15) || ((bVar14 && ((param_6 & 0x40) == 0)))) || ((param_6 & 0x20000) == 0)) {
LAB_0054e785:
    piVar8 = (int *)FUN_0055da00(0x54);
    if ((((piVar8 != (int *)0x0) && (memset(piVar8,0,0x54), piVar8 != (int *)0x0)) &&
        (iVar13 = FUN_0055f550(param_1,piVar8,param_2,0x4c,param_5,param_6,FUN_00541240),
        iVar13 == 0)) && (iVar13 = FUN_0055fb70(*piVar8,100,local_6c), iVar13 == 0)) {
      *(char *)(piVar8 + 4) = (char)param_5;
      piVar8[1] = param_3;
      FUN_0055fd60(*piVar8,FUN_0052ebe0,piVar8);
      _Dst[1] = (int)piVar8;
      piVar8[2] = 0;
      piVar8[3] = 0;
      if (*(char *)(*piVar8 + 0xd) != '\0') {
        *(ushort *)((int)piVar8 + 0x16) = *(ushort *)((int)piVar8 + 0x16) | 1;
      }
      uVar6 = (uint)local_5c * 0x100;
      puVar1 = (uint *)(piVar8 + 8);
      *puVar1 = uVar6;
      if (((uVar6 < 0x200) || (0x10000 < uVar6)) || ((uVar6 & uVar6 - 1) != 0)) {
        *puVar1 = 0;
        if ((param_2 != (byte *)0x0) && (!bVar14)) {
          *(undefined2 *)((int)piVar8 + 0x11) = 0;
        }
        local_58 = 0;
      }
      else {
        *(ushort *)((int)piVar8 + 0x16) = *(ushort *)((int)piVar8 + 0x16) | 2;
        iVar13 = FUN_00559fd0(local_38);
        *(bool *)((int)piVar8 + 0x11) = iVar13 != 0;
        iVar13 = FUN_00559fd0(local_2c);
        *(bool *)((int)piVar8 + 0x12) = iVar13 != 0;
      }
      iVar13 = FUN_0055fe80(*piVar8,puVar1,(uint)local_58);
      if (iVar13 == 0) {
        piVar8[9] = *puVar1 - (uint)local_58;
        local_70 = 0;
        if (*(char *)((int)_Dst + 9) != '\0') {
          piVar8[0x10] = 1;
          if (DAT_007665e4 == 0) {
            uVar12 = 0;
          }
          else {
            uVar12 = (*DAT_00766628)(2);
            if (DAT_007665e4 != 0) {
              iVar13 = (*DAT_00766628)(0);
              piVar8[0xe] = iVar13;
              if (iVar13 == 0) {
                *(undefined1 *)(param_3 + 0x38) = 0;
                goto LAB_0054ea98;
              }
            }
          }
          FUN_00522700(uVar12);
          piVar8[0x11] = (int)DAT_0076b3c8;
          DAT_0076b3c8 = piVar8;
          FUN_00522740(uVar12);
          goto LAB_0054e95c;
        }
        goto LAB_0054ea2b;
      }
    }
  }
  else {
    iVar13 = *(int *)(param_1 + 8) + 1;
    pbVar5 = (byte *)FUN_0055da00(iVar13);
    *(undefined1 *)((int)_Dst + 9) = 1;
    if (pbVar5 == (byte *)0x0) {
      FUN_00524410(_Dst);
      goto LAB_0054e5ec;
    }
    if (bVar14) {
      uVar16 = FUN_00568070(param_2);
      memcpy(pbVar5,(void *)((ulonglong)uVar16 >> 0x20),(int)uVar16 + 1);
    }
    else {
      *pbVar5 = 0;
      local_70 = (**(code **)(param_1 + 0x24))(param_1,param_2,iVar13,pbVar5);
      if (local_70 != 0) {
        FUN_00524410(pbVar5);
        FUN_00524410(_Dst);
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
    if (DAT_007665e4 == 0) {
      local_80 = 0;
      local_94 = 0;
    }
    else {
      local_80 = (*DAT_00766628)(4);
      if (local_80 != 0) {
        (*DAT_00766630)(local_80);
      }
      if (DAT_007665e4 == 0) {
        local_94 = 0;
      }
      else {
        local_94 = (*DAT_00766628)(2);
        if (local_94 != 0) {
          (*DAT_00766630)(local_94);
        }
      }
    }
    piVar8 = DAT_0076b3c8;
    if (DAT_0076b3c8 != (int *)0x0) {
LAB_0054e6e0:
      pbVar11 = (byte *)((int *)*piVar8)[0x24];
      pbVar7 = pbVar5;
      do {
        bVar2 = *pbVar7;
        bVar15 = bVar2 < *pbVar11;
        if (bVar2 != *pbVar11) {
LAB_0054e710:
          uVar6 = -(uint)bVar15 | 1;
          goto LAB_0054e715;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar7[1];
        bVar15 = bVar2 < pbVar11[1];
        if (bVar2 != pbVar11[1]) goto LAB_0054e710;
        pbVar7 = pbVar7 + 2;
        pbVar11 = pbVar11 + 2;
      } while (bVar2 != 0);
      uVar6 = 0;
LAB_0054e715:
      if ((uVar6 != 0) || (*(int *)*piVar8 != param_1)) goto LAB_0054e720;
      iVar13 = *(int *)(param_3 + 0x14) + -1;
      if (-1 < iVar13) {
        piVar9 = (int *)(iVar13 * 0x10 + *(int *)(param_3 + 0x10) + 4);
        do {
          if ((*piVar9 != 0) && (*(int **)(*piVar9 + 4) == piVar8)) {
            if (local_94 != 0) {
              (*DAT_00766638)(local_94);
            }
            if (local_80 != 0) {
              (*DAT_00766638)(local_80);
            }
            FUN_00524410(pbVar5);
            FUN_00524410(_Dst);
            __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
            return;
          }
          piVar9 = piVar9 + -4;
          iVar13 = iVar13 + -1;
        } while (-1 < iVar13);
      }
      _Dst[1] = (int)piVar8;
      piVar8[0x10] = piVar8[0x10] + 1;
    }
LAB_0054e75d:
    if (local_94 != 0) {
      (*DAT_00766638)(local_94);
    }
    FUN_00524410(pbVar5);
    if (piVar8 == (int *)0x0) goto LAB_0054e785;
LAB_0054e95c:
    if (*(char *)((int)_Dst + 9) != '\0') {
      iVar13 = 0;
      if (0 < *(int *)(param_3 + 0x14)) {
        piVar9 = (int *)(*(int *)(param_3 + 0x10) + 4);
LAB_0054e980:
        iVar3 = *piVar9;
        if ((iVar3 == 0) || (*(char *)(iVar3 + 9) == '\0')) goto LAB_0054e98c;
        iVar13 = *(int *)(iVar3 + 0x18);
        while (iVar13 != 0) {
          iVar3 = *(int *)(iVar3 + 0x18);
          iVar13 = *(int *)(iVar3 + 0x18);
        }
        if ((uint)_Dst[1] < *(uint *)(iVar3 + 4)) {
          _Dst[5] = iVar3;
          _Dst[6] = 0;
          *(int **)(iVar3 + 0x18) = _Dst;
        }
        else {
          iVar13 = *(int *)(iVar3 + 0x14);
          while ((iVar13 != 0 &&
                 (iVar4 = *(int *)(iVar3 + 0x14), *(uint *)(iVar4 + 4) < (uint)_Dst[1]))) {
            iVar13 = *(int *)(iVar4 + 0x14);
            iVar3 = iVar4;
          }
          iVar13 = *(int *)(iVar3 + 0x14);
          _Dst[5] = iVar13;
          _Dst[6] = iVar3;
          if (iVar13 != 0) {
            *(int **)(iVar13 + 0x18) = _Dst;
          }
          *(int **)(iVar3 + 0x14) = _Dst;
        }
      }
    }
LAB_0054ea2b:
    *param_4 = _Dst;
    if (local_70 == 0) {
      iVar13 = _Dst[1];
      FUN_0054d260(_Dst);
      if (*(char *)((int)_Dst + 9) != '\0') {
        piVar8 = _Dst + 3;
        *piVar8 = *piVar8 + -1;
        if (*piVar8 == 0) {
          if (*(int *)(_Dst[1] + 0x38) != 0) {
            (*DAT_00766638)(*(int *)(_Dst[1] + 0x38));
          }
          *(undefined1 *)((int)_Dst + 10) = 0;
        }
      }
      if (*(int *)(iVar13 + 0x30) == 0) {
        iVar13 = *(int *)(*(int *)_Dst[1] + 0xb4);
        *(undefined4 *)(iVar13 + 0x10) = 2000;
        iVar13 = *(int *)(iVar13 + 0x28);
        if (iVar13 != 0) {
          (*DAT_00766658)(iVar13,2000);
        }
      }
      goto LAB_0054eac6;
    }
  }
LAB_0054ea98:
  if ((piVar8 != (int *)0x0) && (*piVar8 != 0)) {
    FUN_0055ee50(*piVar8);
  }
  FUN_00524410(piVar8);
  FUN_00524410(_Dst);
  *param_4 = 0;
LAB_0054eac6:
  if (local_80 != 0) {
    (*DAT_00766638)(local_80);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
LAB_0054e720:
  piVar8 = (int *)piVar8[0x11];
  if (piVar8 == (int *)0x0) goto LAB_0054e75d;
  goto LAB_0054e6e0;
LAB_0054e98c:
  iVar13 = iVar13 + 1;
  piVar9 = piVar9 + 4;
  if (*(int *)(param_3 + 0x14) <= iVar13) goto LAB_0054ea2b;
  goto LAB_0054e980;
}


/* FUN_0054eaf0 @ 0054eaf0  kind=lib  attributed-by=lib-island  size=454 */

int FUN_0054eaf0(int param_1,undefined4 *param_2)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  
  if (*(byte *)(param_1 + 0x5b) < 2) {
    iVar4 = 0;
  }
  else if (*(byte *)(param_1 + 0x5b) == 3) {
    iVar4 = *(int *)(param_1 + 0x54);
  }
  else {
    *(undefined1 *)(param_1 + 0x5b) = 0;
    iVar4 = FUN_0052ec30(param_1,*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x48),
                         *(undefined4 *)(param_1 + 0x4c),0,param_1 + 0x54);
    if (iVar4 != 0) {
      return iVar4;
    }
    FUN_00524410(*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = 0;
    iVar4 = 0;
  }
  if (iVar4 != 0) {
    return iVar4;
  }
  *(undefined1 *)(param_1 + 0x59) = 0;
  if (*(char *)(param_1 + 0x5b) == '\0') {
    *param_2 = 1;
    return 0;
  }
  iVar4 = *(int *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x54) = 0;
  if (-1 < iVar4) {
    iVar3 = (int)*(short *)(param_1 + 0x5e);
    iVar4 = *(int *)(param_1 + 0x88 + iVar3 * 4);
    if (*(char *)(iVar4 + 3) == '\0') {
      uVar5 = (uint)*(ushort *)(param_1 + 0x60 + iVar3 * 2);
      puVar6 = (undefined1 *)
               ((uint)(CONCAT11(*(undefined1 *)(*(int *)(iVar4 + 0x40) + uVar5 * 2),
                                *(undefined1 *)(*(int *)(iVar4 + 0x40) + 1 + uVar5 * 2)) &
                      *(ushort *)(iVar4 + 0x12)) + *(int *)(iVar4 + 0x38));
      iVar4 = FUN_0053e110(param_1,CONCAT31(CONCAT21(CONCAT11(*puVar6,puVar6[1]),puVar6[2]),
                                            puVar6[3]));
      if (iVar4 == 0) {
        iVar4 = FUN_0053e280(param_1);
        *param_2 = 0;
        return iVar4;
      }
    }
    else {
      sVar2 = *(short *)(param_1 + 0x60 + iVar3 * 2);
      while (sVar2 == 0) {
        if (*(short *)(param_1 + 0x5e) == 0) {
          *(undefined1 *)(param_1 + 0x5b) = 0;
          *param_2 = 1;
          return 0;
        }
        iVar4 = *(int *)(param_1 + 0x88 + *(short *)(param_1 + 0x5e) * 4);
        if ((iVar4 != 0) && (iVar4 = *(int *)(iVar4 + 0x44), iVar4 != 0)) {
          iVar3 = *(int *)(iVar4 + 0x10);
          FUN_00561130(iVar4);
          if (*(int *)(*(int *)(iVar3 + 0xb4) + 0xc) == 0) {
            FUN_00541a10(iVar3);
          }
        }
        *(short *)(param_1 + 0x5e) = *(short *)(param_1 + 0x5e) + -1;
        *(undefined2 *)(param_1 + 0x42) = 0;
        *(undefined1 *)(param_1 + 0x5a) = 0;
        sVar2 = *(short *)(param_1 + 0x60 + *(short *)(param_1 + 0x5e) * 2);
      }
      *(undefined2 *)(param_1 + 0x42) = 0;
      *(undefined1 *)(param_1 + 0x5a) = 0;
      psVar1 = (short *)(param_1 + 0x60 + *(short *)(param_1 + 0x5e) * 2);
      *psVar1 = *psVar1 + -1;
      iVar4 = *(int *)(param_1 + 0x88 + *(short *)(param_1 + 0x5e) * 4);
      if ((*(char *)(iVar4 + 2) != '\0') && (*(char *)(iVar4 + 3) == '\0')) {
        iVar4 = FUN_0054eaf0(param_1,param_2);
        *param_2 = 0;
        return iVar4;
      }
      iVar4 = 0;
      *param_2 = 0;
    }
    return iVar4;
  }
  *param_2 = 0;
  return 0;
}


/* FUN_0054ed50 @ 0054ed50  kind=lib  attributed-by=lib-island  size=594 */

int FUN_0054ed50(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *local_c;
  int *local_8;
  
  iVar2 = param_2;
  iVar1 = param_1;
  piVar4 = *(int **)(param_1 + 4);
  local_8 = piVar4;
  FUN_0054d260(param_1);
  if (param_2 == 0) {
    for (iVar3 = piVar4[2]; iVar3 != 0; iVar3 = *(int *)(iVar3 + 8)) {
      if ((*(char *)(iVar3 + 0x5b) == '\x01') &&
         (iVar2 = FUN_005472b0(iVar3), param_2 = iVar2, iVar2 != 0)) goto LAB_0054eda1;
    }
    iVar2 = 0;
    param_2 = iVar2;
  }
  else {
    param_2 = 0;
  }
LAB_0054eda1:
  if (iVar2 != 0) {
    FUN_0054f600(param_1,iVar2);
  }
  if (*(char *)(param_1 + 8) != '\x02') goto LAB_0054ef6c;
  iVar2 = FUN_0055fbc0(*piVar4);
  if (iVar2 != 0) {
    param_2 = iVar2;
  }
  iVar2 = *piVar4;
  param_1 = *(int *)(iVar2 + 0x28);
  if ((param_1 == 0) &&
     (param_1 = FUN_00560e90(*(undefined4 *)(iVar2 + 0xb4),1,1,&local_c), iVar3 = DAT_007666d0,
     param_1 == 0)) {
    if (local_c[4] != 0) {
      *(int *)(iVar2 + 0xa0) = *(int *)(iVar2 + 0xa0) + 1;
      goto LAB_0054eeda;
    }
    local_c[4] = iVar2;
    if (iVar3 / (int)*(size_t *)(iVar2 + 0x80) == 0) {
      FUN_00525a30(0xb,"database corruption at line %d of [%.10s]",0xa5a2,
                   "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
      param_1 = 0xb;
LAB_0054ee88:
      if ((*(byte *)(local_c + 6) & 2) != 0) {
        FUN_00544570(local_c);
      }
      iVar3 = local_c[7];
      *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + -1;
      if (local_c[5] == 1) {
        *(undefined4 *)(iVar3 + 0x2c) = 0;
      }
      (*DAT_00766664)(*(undefined4 *)(iVar3 + 0x28),*local_c,1);
      goto LAB_0054eeba;
    }
    if (((*(char *)(iVar2 + 0xe) == '\0') && (*(int *)(iVar2 + 0x18) != 0)) &&
       (**(int **)(iVar2 + 0x3c) != 0)) {
      *(int *)(iVar2 + 0xa4) = *(int *)(iVar2 + 0xa4) + 1;
      param_1 = FUN_00544d80(local_c);
      if (param_1 != 0) goto LAB_0054ee88;
    }
    else {
      if (*(int *)(iVar2 + 0x84) == 0) {
        param_1 = 0xd;
        goto LAB_0054ee88;
      }
      memset((void *)local_c[1],0,*(size_t *)(iVar2 + 0x80));
    }
LAB_0054eeda:
    piVar4 = local_8;
    iVar2 = local_c[2];
    iVar3 = local_c[1];
    *(int *)(iVar2 + 0x38) = iVar3;
    *(undefined4 **)(iVar2 + 0x44) = local_c;
    *(int **)(iVar2 + 0x34) = local_8;
    *(undefined4 *)(iVar2 + 0x48) = 1;
    *(undefined1 *)(iVar2 + 5) = 100;
    iVar3 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar3 + 0x1c),*(undefined1 *)(iVar3 + 0x1d)),
                              *(undefined1 *)(iVar3 + 0x1e)),*(undefined1 *)(iVar3 + 0x1f));
    if (iVar3 == 0) {
      iVar3 = *(int *)(*local_8 + 0x18);
    }
    local_8[0xb] = iVar3;
    iVar2 = *(int *)(iVar2 + 0x44);
    if (iVar2 != 0) {
      iVar3 = *(int *)(iVar2 + 0x10);
      FUN_00561130(iVar2);
      if (*(int *)(*(int *)(iVar3 + 0xb4) + 0xc) == 0) {
        FUN_00541a10(iVar3);
      }
    }
  }
  else {
LAB_0054eeba:
    if (*(int *)(*(int *)(iVar2 + 0xb4) + 0xc) == 0) {
      FUN_00541a10(iVar2);
    }
    local_c = (undefined4 *)0x0;
    piVar4 = local_8;
    if (param_1 == 0) goto LAB_0054eeda;
  }
  *(undefined1 *)((int)piVar4 + 0x13) = 1;
LAB_0054ef6c:
  FUN_0052e890(iVar1);
  if (*(char *)(iVar1 + 9) != '\0') {
    piVar4 = (int *)(iVar1 + 0xc);
    *piVar4 = *piVar4 + -1;
    if (*piVar4 == 0) {
      iVar2 = *(int *)(*(int *)(iVar1 + 4) + 0x38);
      if (iVar2 != 0) {
        (*DAT_00766638)(iVar2);
      }
      *(undefined1 *)(iVar1 + 10) = 0;
    }
  }
  return param_2;
}


/* FUN_0054efb0 @ 0054efb0  kind=lib  attributed-by=lib-island  size=170 */

int FUN_0054efb0(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  if ((param_1 != 0) && (*(char *)(param_1 + 8) == '\x02')) {
    puVar2 = *(undefined4 **)(param_1 + 4);
    FUN_0054d260(param_1);
    iVar4 = FUN_0055fc70(*puVar2,param_2,param_3);
    if (iVar4 == 0) {
      if ((param_3 < 0) && ((*(byte *)((int)puVar2 + 0x16) & 8) != 0)) {
        puVar2[0xb] = 0;
      }
      iVar4 = FUN_00540a20(puVar2);
      iVar3 = *(int *)(puVar2[3] + 0x38);
      puVar2[0xb] = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar3 + 0x1c),
                                               *(undefined1 *)(iVar3 + 0x1d)),
                                      *(undefined1 *)(iVar3 + 0x1e)),*(undefined1 *)(iVar3 + 0x1f));
    }
    if (*(char *)(param_1 + 9) != '\0') {
      piVar1 = (int *)(param_1 + 0xc);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x38);
        if (iVar3 != 0) {
          (*DAT_00766638)(iVar3);
        }
        *(undefined1 *)(param_1 + 10) = 0;
      }
    }
    return iVar4;
  }
  return 0;
}


/* FUN_0054f060 @ 0054f060  kind=lib  attributed-by=lib-island  size=113 */

undefined4 FUN_0054f060(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_0054d260(param_1);
  iVar2 = *(int *)(param_1 + 4);
  if (*(char *)(param_1 + 9) != '\0') {
    if ((*(int *)(iVar2 + 0x4c) != param_1) && ((*(byte *)(iVar2 + 0x16) & 0x20) != 0)) {
LAB_0054f086:
      uVar3 = 0x106;
      goto LAB_0054f0ad;
    }
    for (piVar1 = *(int **)(iVar2 + 0x48); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[3]) {
      if (((*piVar1 != param_1) && (piVar1[1] == 1)) && ((char)piVar1[2] != '\x01'))
      goto LAB_0054f086;
    }
  }
  uVar3 = 0;
LAB_0054f0ad:
  if (*(char *)(param_1 + 9) != '\0') {
    piVar1 = (int *)(param_1 + 0xc);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      if (*(int *)(iVar2 + 0x38) != 0) {
        (*DAT_00766638)(*(int *)(iVar2 + 0x38));
      }
      *(undefined1 *)(param_1 + 10) = 0;
    }
  }
  return uVar3;
}


/* FUN_0054f0e0 @ 0054f0e0  kind=lib  attributed-by=lib-island  size=108 */

ushort FUN_0054f0e0(int param_1,int param_2)

{
  ushort *puVar1;
  int *piVar2;
  ushort uVar3;
  int iVar4;
  
  if (param_1 == 0) {
    return 0;
  }
  FUN_0054d260(param_1);
  if ((-1 < param_2) &&
     (puVar1 = (ushort *)(*(int *)(param_1 + 4) + 0x16), *puVar1 = *puVar1 & 0xfffb, param_2 != 0))
  {
    puVar1 = (ushort *)(*(int *)(param_1 + 4) + 0x16);
    *puVar1 = *puVar1 | 4;
  }
  uVar3 = *(ushort *)(*(int *)(param_1 + 4) + 0x16);
  if (*(char *)(param_1 + 9) != '\0') {
    piVar2 = (int *)(param_1 + 0xc);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x38);
      if (iVar4 != 0) {
        (*DAT_00766638)(iVar4);
      }
      *(undefined1 *)(param_1 + 10) = 0;
    }
  }
  return uVar3 >> 2 & 1;
}


/* FUN_0054f150 @ 0054f150  kind=lib  attributed-by=lib-island  size=113 */

undefined4 FUN_0054f150(int param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = *(int *)(param_1 + 4);
  uVar3 = 0;
  FUN_0054d260(param_1);
  if (((*(byte *)(iVar2 + 0x16) & 2) == 0) || ((param_2 != '\0') == (bool)*(char *)(iVar2 + 0x11)))
  {
    *(bool *)(iVar2 + 0x11) = param_2 != '\0';
    *(bool *)(iVar2 + 0x12) = param_2 == '\x02';
  }
  else {
    uVar3 = 8;
  }
  if (*(char *)(param_1 + 9) != '\0') {
    piVar1 = (int *)(param_1 + 0xc);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x38);
      if (iVar2 != 0) {
        (*DAT_00766638)(iVar2);
      }
      *(undefined1 *)(param_1 + 10) = 0;
    }
  }
  return uVar3;
}


/* FUN_0054f1d0 @ 0054f1d0  kind=lib  attributed-by=lib-island  size=144 */

undefined4 FUN_0054f1d0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  piVar1 = *(int **)(param_1 + 4);
  FUN_0054d260(param_1);
  iVar3 = *(int *)(*piVar1 + 0xb4);
  iVar2 = *(int *)(iVar3 + 0x28);
  *(int *)(iVar3 + 0x10) = param_2;
  if (iVar2 != 0) {
    if (param_2 < 0) {
      iVar3 = *(int *)(iVar3 + 0x18) + *(int *)(iVar3 + 0x14);
      uVar4 = __allmul(param_2,param_2 >> 0x1f,0xfffffc00,0xffffffff);
      param_2 = __alldiv(uVar4,iVar3,iVar3 >> 0x1f);
    }
    (*DAT_00766658)(iVar2,param_2);
  }
  if (*(char *)(param_1 + 9) != '\0') {
    piVar1 = (int *)(param_1 + 0xc);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x38);
      if (iVar3 != 0) {
        (*DAT_00766638)(iVar3);
      }
      *(undefined1 *)(param_1 + 10) = 0;
    }
  }
  return 0;
}


/* FUN_0054f260 @ 0054f260  kind=lib  attributed-by=lib-island  size=49 */

void FUN_0054f260(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  for (iVar1 = *(int *)(*(int *)(param_1 + 4) + 8); iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
    if (*(int *)(iVar1 + 0x18) == *(int *)(param_1 + 0x18)) {
      *(undefined4 *)(iVar1 + 0x20) = param_2;
      *(undefined4 *)(iVar1 + 0x24) = param_3;
    }
  }
  return;
}


/* FUN_0054f2a0 @ 0054f2a0  kind=lib  attributed-by=lib-island  size=217 */

undefined4 FUN_0054f2a0(int param_1,uint param_2,uint param_3,int param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  puVar2 = *(undefined4 **)(param_1 + 4);
  FUN_0054d260(param_1);
  if ((*(byte *)((int)puVar2 + 0x16) & 2) != 0) {
    if (*(char *)(param_1 + 9) != '\0') {
      piVar1 = (int *)(param_1 + 0xc);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x38);
        if (iVar3 != 0) {
          (*DAT_00766638)(iVar3);
        }
        *(undefined1 *)(param_1 + 10) = 0;
      }
    }
    return 8;
  }
  if ((int)param_3 < 0) {
    param_3 = puVar2[8] - puVar2[9];
  }
  if ((param_2 - 0x200 < 0xfe01) && ((param_2 & param_2 - 1) == 0)) {
    puVar2[8] = param_2;
    FUN_00544190(puVar2[0x14]);
    puVar2[0x14] = 0;
  }
  uVar4 = FUN_0055fe80(*puVar2,puVar2 + 8,param_3);
  puVar2[9] = puVar2[8] - (param_3 & 0xffff);
  if (param_4 != 0) {
    *(ushort *)((int)puVar2 + 0x16) = *(ushort *)((int)puVar2 + 0x16) | 2;
  }
  if (*(char *)(param_1 + 9) != '\0') {
    piVar1 = (int *)(param_1 + 0xc);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x38);
      if (iVar3 != 0) {
        (*DAT_00766638)(iVar3);
      }
      *(undefined1 *)(param_1 + 10) = 0;
    }
  }
  return uVar4;
}


/* FUN_0054f380 @ 0054f380  kind=lib  attributed-by=lib-island  size=77 */

undefined4 FUN_0054f380(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = *(undefined4 **)(param_1 + 4);
  FUN_0054d260(param_1);
  FUN_0055ffb0(*puVar2,param_2,param_3,param_4);
  if (*(char *)(param_1 + 9) != '\0') {
    piVar1 = (int *)(param_1 + 0xc);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x38);
      if (iVar3 != 0) {
        (*DAT_00766638)(iVar3);
      }
      *(undefined1 *)(param_1 + 10) = 0;
    }
  }
  return 0;
}


/* FUN_0054f3d0 @ 0054f3d0  kind=lib  attributed-by=lib-island  size=475 */

int FUN_0054f3d0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  
  iVar2 = *(int *)(param_1 + 4);
  *(ushort *)(iVar2 + 0x16) = *(ushort *)(iVar2 + 0x16) & 0xffef;
  if (param_2 == 1) {
    *(ushort *)(iVar2 + 0x16) = *(ushort *)(iVar2 + 0x16) | 0x10;
  }
  iVar3 = *(int *)(param_1 + 4);
  iVar8 = 0;
  FUN_0054d260(param_1);
  if ((*(char *)(param_1 + 8) != '\x02') && (*(char *)(param_1 + 8) != '\x01')) {
    if (((*(byte *)(iVar3 + 0x16) & 0x40) == 0) || (**(int **)(iVar3 + 0x4c) == 0)) {
      iVar8 = FUN_00544bb0(param_1,1,1);
      if (iVar8 == 0) {
        *(ushort *)(iVar3 + 0x16) = *(ushort *)(iVar3 + 0x16) & 0xfff7;
        if (*(int *)(iVar3 + 0x2c) == 0) {
          *(ushort *)(iVar3 + 0x16) = *(ushort *)(iVar3 + 0x16) | 8;
        }
LAB_0054f460:
        if (*(int *)(iVar3 + 0xc) == 0) goto code_r0x0054f466;
        if (iVar8 != 0) goto LAB_0054f47b;
        goto LAB_0054f4b7;
      }
    }
    else {
      iVar8 = 0x106;
    }
  }
LAB_0054f528:
  if (*(char *)(param_1 + 9) != '\0') {
    piVar1 = (int *)(param_1 + 0xc);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x38);
      if (iVar3 != 0) {
        (*DAT_00766638)(iVar3);
      }
      *(undefined1 *)(param_1 + 10) = 0;
    }
  }
  if (iVar8 == 0) {
    iVar3 = *(int *)(*(int *)(iVar2 + 0xc) + 0x38);
    cVar6 = (char)param_2;
    if ((((*(char *)(iVar3 + 0x12) != cVar6) || (*(char *)(iVar3 + 0x13) != cVar6)) &&
        (iVar8 = FUN_0054c3f0(param_1,2), iVar8 == 0)) &&
       (iVar8 = FUN_00560330(*(undefined4 *)(*(int *)(iVar2 + 0xc) + 0x44)), iVar8 == 0)) {
      *(char *)(iVar3 + 0x12) = cVar6;
      *(char *)(iVar3 + 0x13) = cVar6;
    }
  }
  *(ushort *)(iVar2 + 0x16) = *(ushort *)(iVar2 + 0x16) & 0xffef;
  return iVar8;
code_r0x0054f466:
  iVar8 = FUN_0053d2a0(iVar3);
  if (iVar8 != 0) {
LAB_0054f47b:
    if ((*(char *)(iVar3 + 0x13) == '\0') && (*(int *)(iVar3 + 0xc) != 0)) {
      iVar4 = *(int *)(*(int *)(iVar3 + 0xc) + 0x44);
      if (iVar4 != 0) {
        iVar7 = *(int *)(iVar4 + 0x10);
        FUN_00561130(iVar4);
        if (*(int *)(*(int *)(iVar7 + 0xb4) + 0xc) == 0) {
          FUN_00541a10(iVar7);
        }
      }
      *(undefined4 *)(iVar3 + 0xc) = 0;
    }
LAB_0054f4b7:
    if (((char)iVar8 != '\x05') || (*(char *)(iVar3 + 0x13) != '\0')) goto LAB_0054f4f6;
    iVar4 = *(int *)(iVar3 + 4);
    if (((undefined4 *)(iVar4 + 0x1ac) == (undefined4 *)0x0) ||
       ((pcVar5 = *(code **)(iVar4 + 0x1ac), pcVar5 == (code *)0x0 || (*(int *)(iVar4 + 0x1b4) < 0))
       )) goto LAB_0054f4f6;
    iVar7 = (*pcVar5)(*(undefined4 *)(iVar4 + 0x1b0),*(int *)(iVar4 + 0x1b4));
    if (iVar7 == 0) goto LAB_0054f4ef;
    *(int *)(iVar4 + 0x1b4) = *(int *)(iVar4 + 0x1b4) + 1;
  }
  goto LAB_0054f460;
LAB_0054f4ef:
  *(undefined4 *)(iVar4 + 0x1b4) = 0xffffffff;
LAB_0054f4f6:
  if (iVar8 == 0) {
    if ((*(char *)(param_1 + 8) == '\0') &&
       (*(int *)(iVar3 + 0x28) = *(int *)(iVar3 + 0x28) + 1, *(char *)(param_1 + 9) != '\0')) {
      *(undefined1 *)(param_1 + 0x24) = 1;
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(iVar3 + 0x48);
      *(int *)(iVar3 + 0x48) = param_1 + 0x1c;
    }
    *(undefined1 *)(param_1 + 8) = 1;
    if (*(char *)(iVar3 + 0x13) == '\0') {
      *(undefined1 *)(iVar3 + 0x13) = 1;
    }
  }
  goto LAB_0054f528;
}


/* FUN_0054f5b0 @ 0054f5b0  kind=lib  attributed-by=lib-island  size=67 */

undefined1 FUN_0054f5b0(int param_1)

{
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 4);
  FUN_0054d260(param_1);
  uVar1 = *(undefined1 *)(*piVar2 + 7);
  if (*(char *)(param_1 + 9) != '\0') {
    piVar2 = (int *)(param_1 + 0xc);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x38);
      if (iVar3 != 0) {
        (*DAT_00766638)(iVar3);
      }
      *(undefined1 *)(param_1 + 10) = 0;
    }
  }
  return uVar1;
}


/* FUN_0054f600 @ 0054f600  kind=lib  attributed-by=lib-island  size=218 */

void FUN_0054f600(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  if (param_1 != 0) {
    FUN_0054d260(param_1);
    for (iVar1 = *(int *)(*(int *)(param_1 + 4) + 8); iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
      FUN_00524410(*(undefined4 *)(iVar1 + 0x50));
      *(undefined4 *)(iVar1 + 0x54) = param_2;
      iVar4 = 0;
      *(undefined4 *)(iVar1 + 0x50) = 0;
      *(undefined1 *)(iVar1 + 0x5b) = 3;
      if (*(ushort *)(iVar1 + 0x5e) < 0x8000) {
        piVar5 = (int *)(iVar1 + 0x88);
        do {
          if ((*piVar5 != 0) && (iVar2 = *(int *)(*piVar5 + 0x44), iVar2 != 0)) {
            iVar3 = *(int *)(iVar2 + 0x10);
            FUN_00561130(iVar2);
            if (*(int *)(*(int *)(iVar3 + 0xb4) + 0xc) == 0) {
              FUN_00541a10(iVar3);
            }
          }
          *piVar5 = 0;
          iVar4 = iVar4 + 1;
          piVar5 = piVar5 + 1;
        } while (iVar4 <= *(short *)(iVar1 + 0x5e));
      }
    }
    if (*(char *)(param_1 + 9) != '\0') {
      piVar5 = (int *)(param_1 + 0xc);
      *piVar5 = *piVar5 + -1;
      if (*piVar5 == 0) {
        iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x38);
        if (iVar1 != 0) {
          (*DAT_00766638)(iVar1);
        }
        *(undefined1 *)(param_1 + 10) = 0;
      }
    }
  }
  return;
}


/* FUN_0054f6e0 @ 0054f6e0  kind=lib  attributed-by=lib-island  size=146 */

int FUN_0054f6e0(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 4);
  FUN_0054d260(param_1);
  iVar4 = *(int *)(iVar2 + 0xc);
  iVar3 = *(int *)(iVar4 + 0x38);
  iVar4 = FUN_00560330(*(undefined4 *)(iVar4 + 0x44));
  if (iVar4 == 0) {
    *(char *)(iVar3 + 0x24 + param_2 * 4) = (char)((uint)param_3 >> 0x18);
    *(char *)(iVar3 + 0x25 + param_2 * 4) = (char)((uint)param_3 >> 0x10);
    *(char *)(iVar3 + 0x26 + param_2 * 4) = (char)((uint)param_3 >> 8);
    *(char *)(iVar3 + 0x27 + param_2 * 4) = (char)param_3;
    if (param_2 == 7) {
      *(char *)(iVar2 + 0x12) = (char)param_3;
    }
  }
  if (*(char *)(param_1 + 9) != '\0') {
    piVar1 = (int *)(param_1 + 0xc);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x38);
      if (iVar2 != 0) {
        (*DAT_00766638)(iVar2);
      }
      *(undefined1 *)(param_1 + 10) = 0;
    }
  }
  return iVar4;
}


/* FUN_0054f780 @ 0054f780  kind=lib  attributed-by=lib-island  size=33 */

undefined4 FUN_0054f780(undefined4 param_1)

{
  FUN_00525a30(0xe,"cannot open file at line %d of [%.10s]",param_1,
               "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
  return 0xe;
}


/* FUN_0054f7b0 @ 0054f7b0  kind=lib  attributed-by=lib-island  size=266 */

void FUN_0054f7b0(int *param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  if (*(char *)((int)param_1 + 0x13) == '\0') {
    param_1[0x13] = param_1[0x13] + 1;
    iVar7 = param_1[0x13];
  }
  else {
    bVar2 = *(char *)((int)param_1 + 0x13) - 1;
    *(byte *)((int)param_1 + 0x13) = bVar2;
    iVar7 = param_1[bVar2 + 7];
  }
  iVar6 = param_1[2];
  iVar1 = **(int **)(*(int *)(*param_1 + 0x10) + 0xc + param_2 * 0x10);
  iVar4 = *(int *)(iVar6 + 0x1c);
  if ((iVar4 < *(int *)(iVar6 + 0x20)) || (iVar3 = FUN_0053b4b0(iVar6), iVar3 == 0)) {
    *(int *)(iVar6 + 0x1c) = *(int *)(iVar6 + 0x1c) + 1;
    iVar3 = *(int *)(iVar6 + 4);
    *(undefined2 *)(iVar3 + iVar4 * 0x14) = 7;
    *(undefined1 *)(iVar3 + 3 + iVar4 * 0x14) = 0;
    *(int *)(iVar3 + 4 + iVar4 * 0x14) = iVar1 + 1;
    *(int *)(iVar3 + 8 + iVar4 * 0x14) = iVar7;
    *(undefined4 *)(iVar3 + 0xc + iVar4 * 0x14) = 0;
    *(undefined4 *)(iVar3 + 0x10 + iVar4 * 0x14) = 0;
  }
  iVar1 = *(int *)(iVar6 + 0x1c);
  if ((iVar1 < *(int *)(iVar6 + 0x20)) || (iVar4 = FUN_0053b4b0(iVar6), iVar4 == 0)) {
    *(int *)(iVar6 + 0x1c) = *(int *)(iVar6 + 0x1c) + 1;
    iVar6 = *(int *)(iVar6 + 4);
    *(undefined2 *)(iVar6 + iVar1 * 0x14) = 0x25;
    *(undefined1 *)(iVar6 + 3 + iVar1 * 0x14) = 0;
    *(int *)(iVar6 + 4 + iVar1 * 0x14) = param_2;
    *(undefined4 *)(iVar6 + 8 + iVar1 * 0x14) = 1;
    *(int *)(iVar6 + 0xc + iVar1 * 0x14) = iVar7;
    *(undefined4 *)(iVar6 + 0x10 + iVar1 * 0x14) = 0;
  }
  if ((iVar7 != 0) && (*(byte *)((int)param_1 + 0x13) < 8)) {
    iVar6 = 0;
    piVar5 = param_1 + 0x19;
    while (piVar5[4] != iVar7) {
      iVar6 = iVar6 + 1;
      piVar5 = piVar5 + 6;
      if (9 < iVar6) {
        param_1[*(byte *)((int)param_1 + 0x13) + 7] = iVar7;
        *(char *)((int)param_1 + 0x13) = *(char *)((int)param_1 + 0x13) + '\x01';
        return;
      }
    }
    *(undefined1 *)(piVar5 + 2) = 1;
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


/* FUN_0054f920 @ 0054f920  kind=lib  attributed-by=lib-island  size=278 */

int FUN_0054f920(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int local_8;
  
  bVar4 = false;
  iVar6 = 0;
  iVar7 = 0;
  bVar5 = false;
  if (0 < *(int *)(param_1 + 0x14)) {
    local_8 = 0;
    do {
      if (iVar7 != 0) {
        return iVar7;
      }
      if ((iVar6 == param_2) || (param_2 == 10)) {
        iVar7 = 0;
        iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 4 + local_8);
        if (iVar1 != 0) {
          piVar2 = *(int **)(iVar1 + 4);
          FUN_0054d260(iVar1);
          if (*(char *)((int)piVar2 + 0x13) == '\0') {
            iVar3 = *piVar2;
            iVar7 = 0;
            if (*(int *)(iVar3 + 0xb8) != 0) {
              iVar7 = FUN_00577b00(*(int *)(iVar3 + 0xb8),param_3,*(undefined4 *)(iVar3 + 0x98),
                                   *(undefined4 *)(iVar3 + 0x9c),*(undefined1 *)(iVar3 + 9),
                                   *(undefined4 *)(iVar3 + 0x80),*(undefined4 *)(iVar3 + 0xb0),
                                   param_4,param_5);
            }
          }
          else {
            iVar7 = 6;
          }
          if (*(char *)(iVar1 + 9) != '\0') {
            piVar2 = (int *)(iVar1 + 0xc);
            *piVar2 = *piVar2 + -1;
            if (*piVar2 == 0) {
              iVar3 = *(int *)(*(int *)(iVar1 + 4) + 0x38);
              if (iVar3 != 0) {
                (*DAT_00766638)(iVar3);
              }
              *(undefined1 *)(iVar1 + 10) = 0;
            }
          }
        }
        param_4 = 0;
        param_5 = 0;
        bVar4 = bVar5;
        if (iVar7 == 5) {
          bVar5 = true;
          iVar7 = 0;
          bVar4 = true;
        }
      }
      iVar6 = iVar6 + 1;
      local_8 = local_8 + 0x10;
    } while (iVar6 < *(int *)(param_1 + 0x14));
    if ((iVar7 == 0) && (bVar4)) {
      return 5;
    }
  }
  return iVar7;
}


