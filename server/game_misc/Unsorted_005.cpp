// Unsorted_005 (game_misc) -- server. 150 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Unsorted_005.h"

/* FUN_00485a80 @ 00485a80  kind=gamemisc  attributed-by=none  size=1322 */

/* WARNING: Removing unreachable block (ram,0x00485d42) */

void __cdecl FUN_00485a80(int param_1,byte *param_2,ulonglong *param_3)

{
  byte bVar1;
  ulonglong uVar2;
  int iVar3;
  byte *pbVar4;
  char *pcVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  double dVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint local_6c;
  int local_68;
  undefined4 local_3c;
  int iStack_38;
  double local_34;
  int local_2c;
  byte local_28 [32];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  iVar8 = 0;
  iStack_38 = param_1;
  local_2c = 1;
  iVar3 = -(int)param_2;
  do {
    if (*param_2 == 0) break;
    iVar8 = iVar8 + 1;
    param_2[(int)(local_28 + iVar3)] = (&DAT_00569620)[*param_2];
    param_2 = param_2 + 1;
  } while (iVar8 < 0x1d);
  local_28[iVar8] = 0;
  switch(local_28[0]) {
  case 0x2b:
  case 0x2d:
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
    uVar9 = 1;
    while (((local_28[1] != 0 && (local_28[1] != 0x3a)) && (((&DAT_00569720)[local_28[1]] & 1) == 0)
           )) {
      local_28[1] = local_28[uVar9 + 1];
      uVar9 = uVar9 + 1;
    }
    iVar3 = FUN_0048cc90(local_28,(double *)&local_3c,uVar9,'\x01');
    if (iVar3 != 0) {
      pbVar4 = local_28 + uVar9;
      if (local_28[uVar9] == 0x3a) {
        pbVar4 = local_28 + 1;
        if (((&DAT_00569720)[local_28[0]] & 4) != 0) {
          pbVar4 = local_28;
        }
        memset(&local_6c,0,0x30);
        iVar3 = FUN_00485950(pbVar4,(int)&local_6c);
        if (iVar3 == 0) {
          FUN_004753b0((ulonglong *)&local_6c);
          uVar9 = local_68 + -1 + (uint)(43199999 < local_6c);
          uVar13 = __alldiv(local_6c + 0xfd6cd200,uVar9,0xfad9a400,0xffffffff);
          lVar14 = __allmul((uint)uVar13,(int)((ulonglong)uVar13 >> 0x20),86400000,0);
          lVar14 = lVar14 + CONCAT44(uVar9,local_6c + 0xfd6cd200);
          if (local_28[0] == 0x2d) {
            lVar14 = CONCAT44(-((int)((ulonglong)lVar14 >> 0x20) + (uint)((int)lVar14 != 0)),
                              -(int)lVar14);
          }
          FUN_004753b0(param_3);
          uVar2 = *param_3;
          *(uint *)param_3 = (int)*param_3 + (uint)lVar14;
          *(undefined2 *)(param_3 + 5) = 0;
          *(undefined1 *)((int)param_3 + 0x2b) = 0;
          *(int *)((int)param_3 + 4) =
               *(int *)((int)param_3 + 4) + (int)((ulonglong)lVar14 >> 0x20) +
               (uint)CARRY4((uint)uVar2,(uint)lVar14);
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
      }
      else {
        bVar1 = (&DAT_00569720)[*pbVar4];
        while ((bVar1 & 1) != 0) {
          pbVar6 = pbVar4 + 1;
          pbVar4 = pbVar4 + 1;
          bVar1 = (&DAT_00569720)[*pbVar6];
        }
        bVar1 = *pbVar4;
        pbVar6 = pbVar4;
        while (bVar1 != 0) {
          pbVar6 = pbVar6 + 1;
          bVar1 = *pbVar6;
        }
        uVar9 = (int)pbVar6 - (int)pbVar4 & 0x3fffffff;
        if (uVar9 - 3 < 8) {
          if (pbVar4[uVar9 - 1] == 0x73) {
            pbVar4[uVar9 - 1] = 0;
            uVar9 = uVar9 - 1;
          }
          FUN_004753b0(param_3);
          dVar11 = (double)CONCAT44(iStack_38,local_3c);
          local_2c = 0;
          if (0.0 <= dVar11) {
            local_34 = 0.5;
          }
          else {
            local_34 = -0.5;
          }
          if (uVar9 == 3) {
            pbVar6 = &DAT_0056dcdc;
            do {
              bVar1 = *pbVar4;
              bVar10 = bVar1 < *pbVar6;
              if (bVar1 != *pbVar6) {
LAB_00486050:
                uVar9 = -(uint)bVar10 | 1;
                goto LAB_00486055;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar4[1];
              bVar10 = bVar1 < pbVar6[1];
              if (bVar1 != pbVar6[1]) goto LAB_00486050;
              pbVar4 = pbVar4 + 2;
              pbVar6 = pbVar6 + 2;
            } while (bVar1 != 0);
            uVar9 = 0;
LAB_00486055:
            if (uVar9 != 0) goto LAB_0048607e;
            local_34 = dVar11 * 86400000.0 + local_34;
          }
          else if (uVar9 == 4) {
            pbVar7 = &DAT_0056dce0;
            pbVar6 = pbVar4;
            do {
              bVar1 = *pbVar6;
              bVar10 = bVar1 < *pbVar7;
              if (bVar1 != *pbVar7) {
LAB_004860d0:
                uVar9 = -(uint)bVar10 | 1;
                goto LAB_004860d5;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar6[1];
              bVar10 = bVar1 < pbVar7[1];
              if (bVar1 != pbVar7[1]) goto LAB_004860d0;
              pbVar6 = pbVar6 + 2;
              pbVar7 = pbVar7 + 2;
            } while (bVar1 != 0);
            uVar9 = 0;
LAB_004860d5:
            if (uVar9 == 0) {
              local_34 = dVar11 * 3600000.0 + local_34;
            }
            else {
              pbVar6 = &DAT_0056dcd4;
              do {
                bVar1 = *pbVar4;
                bVar10 = bVar1 < *pbVar6;
                if (bVar1 != *pbVar6) {
LAB_00486114:
                  uVar9 = -(uint)bVar10 | 1;
                  goto LAB_00486119;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar4[1];
                bVar10 = bVar1 < pbVar6[1];
                if (bVar1 != pbVar6[1]) goto LAB_00486114;
                pbVar4 = pbVar4 + 2;
                pbVar6 = pbVar6 + 2;
              } while (bVar1 != 0);
              uVar9 = 0;
LAB_00486119:
              if (uVar9 != 0) goto LAB_0048607e;
              FUN_00475680((uint *)param_3);
              FUN_004752f0(param_3);
              *(int *)(param_3 + 1) = (int)param_3[1] + (int)dVar11;
              *(undefined1 *)((int)param_3 + 0x2a) = 0;
              FUN_004753b0(param_3);
              dVar11 = (double)(int)dVar11;
              if (dVar11 == (double)CONCAT44(iStack_38,local_3c)) goto LAB_0048607e;
              local_34 = ((double)CONCAT44(iStack_38,local_3c) - dVar11) * 365.0 * 86400000.0 +
                         local_34;
            }
          }
          else if (uVar9 == 6) {
            pcVar5 = "minute";
            pbVar6 = pbVar4;
            do {
              bVar1 = *pbVar6;
              bVar10 = bVar1 < (byte)*pcVar5;
              if (bVar1 != *pcVar5) {
LAB_004861b2:
                uVar9 = -(uint)bVar10 | 1;
                goto LAB_004861b7;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar6[1];
              bVar10 = bVar1 < (byte)pcVar5[1];
              if (bVar1 != pcVar5[1]) goto LAB_004861b2;
              pbVar6 = pbVar6 + 2;
              pcVar5 = pcVar5 + 2;
            } while (bVar1 != 0);
            uVar9 = 0;
LAB_004861b7:
            if (uVar9 == 0) {
              local_34 = dVar11 * 60000.0 + local_34;
            }
            else {
              pcVar5 = "second";
              do {
                bVar1 = *pbVar4;
                bVar10 = bVar1 < (byte)*pcVar5;
                if (bVar1 != *pcVar5) {
LAB_00486200:
                  uVar9 = -(uint)bVar10 | 1;
                  goto LAB_00486205;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar4[1];
                bVar10 = bVar1 < (byte)pcVar5[1];
                if (bVar1 != pcVar5[1]) goto LAB_00486200;
                pbVar4 = pbVar4 + 2;
                pcVar5 = pcVar5 + 2;
              } while (bVar1 != 0);
              uVar9 = 0;
LAB_00486205:
              if (uVar9 != 0) goto LAB_0048607e;
              local_34 = dVar11 * 1000.0 + local_34;
            }
          }
          else {
            if (uVar9 != 5) goto LAB_0048607e;
            pcVar5 = "month";
            do {
              bVar1 = *pbVar4;
              bVar10 = bVar1 < (byte)*pcVar5;
              if (bVar1 != *pcVar5) {
LAB_00486254:
                uVar9 = -(uint)bVar10 | 1;
                goto LAB_00486259;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar4[1];
              bVar10 = bVar1 < (byte)pcVar5[1];
              if (bVar1 != pcVar5[1]) goto LAB_00486254;
              pbVar4 = pbVar4 + 2;
              pcVar5 = pcVar5 + 2;
            } while (bVar1 != 0);
            uVar9 = 0;
LAB_00486259:
            if (uVar9 != 0) goto LAB_0048607e;
            FUN_00475680((uint *)param_3);
            FUN_004752f0(param_3);
            dVar11 = (double)CONCAT44(iStack_38,local_3c);
            *(int *)((int)param_3 + 0xc) = *(int *)((int)param_3 + 0xc) + (int)dVar11;
            iVar8 = *(int *)((int)param_3 + 0xc);
            iVar3 = iVar8 + -1;
            if (iVar8 < 1) {
              iVar3 = iVar8 + -0xc;
            }
            *(int *)(param_3 + 1) = (int)param_3[1] + iVar3 / 0xc;
            *(int *)((int)param_3 + 0xc) = iVar8 + (iVar3 / 0xc) * -0xc;
            *(undefined1 *)((int)param_3 + 0x2a) = 0;
            FUN_004753b0(param_3);
            dVar11 = (double)(int)dVar11;
            if (dVar11 == (double)CONCAT44(iStack_38,local_3c)) goto LAB_0048607e;
            local_34 = ((double)CONCAT44(iStack_38,local_3c) - dVar11) * 30.0 * 86400000.0 +
                       local_34;
          }
          uVar15 = FUN_0054a946();
          uVar2 = *param_3;
          *(uint *)param_3 = (int)*param_3 + (uint)uVar15;
          *(int *)((int)param_3 + 4) =
               *(int *)((int)param_3 + 4) + (int)(uVar15 >> 0x20) +
               (uint)CARRY4((uint)uVar2,(uint)uVar15);
LAB_0048607e:
          *(undefined2 *)(param_3 + 5) = 0;
          *(undefined1 *)((int)param_3 + 0x2b) = 0;
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
      }
    }
    break;
  case 0x6c:
    pcVar5 = "localtime";
    pbVar4 = local_28;
    do {
      bVar1 = *pbVar4;
      bVar10 = bVar1 < (byte)*pcVar5;
      if (bVar1 != *pcVar5) {
LAB_00485b14:
        uVar9 = -(uint)bVar10 | 1;
        goto LAB_00485b19;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar10 = bVar1 < (byte)pcVar5[1];
      if (bVar1 != pcVar5[1]) goto LAB_00485b14;
      pbVar4 = pbVar4 + 2;
      pcVar5 = pcVar5 + 2;
    } while (bVar1 != 0);
    uVar9 = 0;
LAB_00485b19:
    if (uVar9 == 0) {
      FUN_004753b0(param_3);
      uVar13 = FUN_0047f780(param_3,param_1,&local_2c);
      uVar2 = *param_3;
      *(uint *)param_3 = (int)*param_3 + (uint)uVar13;
      *(undefined2 *)(param_3 + 5) = 0;
      *(int *)((int)param_3 + 4) =
           *(int *)((int)param_3 + 4) + (int)((ulonglong)uVar13 >> 0x20) +
           (uint)CARRY4((uint)uVar2,(uint)uVar13);
      *(undefined1 *)((int)param_3 + 0x2b) = 0;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    break;
  case 0x73:
    iVar3 = strncmp((char *)local_28,"start of ",9);
    if (iVar3 == 0) {
      FUN_00475680((uint *)param_3);
      *(undefined2 *)((int)param_3 + 0x29) = 1;
      *(undefined4 *)(param_3 + 3) = 0;
      *(undefined4 *)((int)param_3 + 0x14) = 0;
      param_3[4] = 0;
      *(undefined1 *)((int)param_3 + 0x2b) = 0;
      pcVar5 = "month";
      pbVar4 = local_28 + 9;
      do {
        bVar1 = *pbVar4;
        bVar10 = bVar1 < (byte)*pcVar5;
        if (bVar1 != *pcVar5) {
LAB_00485df0:
          uVar9 = -(uint)bVar10 | 1;
          goto LAB_00485df5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar10 = bVar1 < (byte)pcVar5[1];
        if (bVar1 != pcVar5[1]) goto LAB_00485df0;
        pbVar4 = pbVar4 + 2;
        pcVar5 = pcVar5 + 2;
      } while (bVar1 != 0);
      uVar9 = 0;
LAB_00485df5:
      if (uVar9 == 0) {
LAB_00485e3a:
        *(undefined4 *)(param_3 + 2) = 1;
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      pbVar6 = &DAT_0056dcd4;
      pbVar4 = local_28 + 9;
      do {
        bVar1 = *pbVar4;
        bVar10 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_00485e21:
          uVar9 = -(uint)bVar10 | 1;
          goto LAB_00485e26;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar10 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_00485e21;
        pbVar4 = pbVar4 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      uVar9 = 0;
LAB_00485e26:
      if (uVar9 == 0) {
        FUN_00475680((uint *)param_3);
        *(undefined4 *)((int)param_3 + 0xc) = 1;
        goto LAB_00485e3a;
      }
      pbVar6 = &DAT_0056dcdc;
      pbVar4 = local_28 + 9;
      do {
        bVar1 = *pbVar4;
        bVar10 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_00485e80:
          uVar9 = -(uint)bVar10 | 1;
          goto LAB_00485e85;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar10 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_00485e80;
        pbVar4 = pbVar4 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      uVar9 = 0;
LAB_00485e85:
      if (uVar9 == 0) {
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
    break;
  case 0x75:
    pcVar5 = "unixepoch";
    pbVar4 = local_28;
    do {
      bVar1 = *pbVar4;
      bVar10 = bVar1 < (byte)*pcVar5;
      if (bVar1 != *pcVar5) {
LAB_00485b80:
        uVar9 = -(uint)bVar10 | 1;
        goto LAB_00485b85;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar10 = bVar1 < (byte)pcVar5[1];
      if (bVar1 != pcVar5[1]) goto LAB_00485b80;
      pbVar4 = pbVar4 + 2;
      pcVar5 = pcVar5 + 2;
    } while (bVar1 != 0);
    uVar9 = 0;
LAB_00485b85:
    if ((uVar9 == 0) && (*(char *)((int)param_3 + 0x2a) != '\0')) {
      lVar14 = __alldiv((uint)*param_3 + 0xa8c0,
                        *(int *)((int)param_3 + 4) + (uint)(0xffff573f < (uint)*param_3),0x15180,0);
      *param_3 = lVar14 + 0xbfc83e532200;
      *(undefined2 *)(param_3 + 5) = 0;
      *(undefined1 *)((int)param_3 + 0x2b) = 0;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    pbVar6 = &DAT_0056dcb0;
    pbVar4 = local_28;
    do {
      bVar1 = *pbVar4;
      bVar10 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_00485c00:
        uVar9 = -(uint)bVar10 | 1;
        goto LAB_00485c05;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar10 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_00485c00;
      pbVar4 = pbVar4 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    uVar9 = 0;
LAB_00485c05:
    if (uVar9 == 0) {
      FUN_004753b0(param_3);
      lVar14 = FUN_0047f780(param_3,param_1,&local_2c);
      if (local_2c == 0) {
        uVar2 = *param_3;
        *(uint *)param_3 = (int)*param_3 - (uint)lVar14;
        *(undefined2 *)(param_3 + 5) = 0;
        *(undefined1 *)((int)param_3 + 0x2b) = 0;
        *(int *)((int)param_3 + 4) =
             (*(int *)((int)param_3 + 4) - (int)((ulonglong)lVar14 >> 0x20)) -
             (uint)((uint)uVar2 < (uint)lVar14);
        lVar12 = FUN_0047f780(param_3,iStack_38,&local_2c);
        uVar9 = (uint)(lVar14 - lVar12);
        uVar2 = *param_3;
        *(uint *)param_3 = (int)*param_3 + uVar9;
        *(int *)((int)param_3 + 4) =
             *(int *)((int)param_3 + 4) + (int)((ulonglong)(lVar14 - lVar12) >> 0x20) +
             (uint)CARRY4((uint)uVar2,uVar9);
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      goto LAB_00486300;
    }
    break;
  case 0x77:
    iVar3 = strncmp((char *)local_28,"weekday ",8);
    if (iVar3 == 0) {
      pbVar4 = local_28 + 8;
      while (local_28[8] != 0) {
        pbVar4 = pbVar4 + 1;
        local_28[8] = *pbVar4;
      }
      iVar3 = FUN_0048cc90(local_28 + 8,(double *)&local_3c,
                           (int)pbVar4 - (int)(local_28 + 8) & 0x3fffffff,'\x01');
      if (iVar3 != 0) {
        dVar11 = (double)CONCAT44(iStack_38,local_3c);
        uVar9 = (uint)dVar11;
        if ((((double)(int)uVar9 == dVar11) && (-1 < (int)uVar9)) && (dVar11 < 7.0)) {
          FUN_00475680((uint *)param_3);
          FUN_004752f0(param_3);
          *(undefined2 *)((int)param_3 + 0x2a) = 0;
          FUN_004753b0(param_3);
          uVar13 = __alldiv((uint)*param_3 + 0x7b98a00,
                            *(int *)((int)param_3 + 4) + (uint)(0xf84675ff < (uint)*param_3),
                            86400000,0);
          lVar14 = __allrem((uint)uVar13,(uint)((ulonglong)uVar13 >> 0x20),7,0);
          if ((int)uVar9 < lVar14) {
            lVar14 = lVar14 + -7;
          }
          lVar14 = __allmul(uVar9 - (uint)lVar14,
                            (((int)uVar9 >> 0x1f) - (int)((ulonglong)lVar14 >> 0x20)) -
                            (uint)(uVar9 < (uint)lVar14),86400000,0);
          uVar2 = *param_3;
          *(uint *)param_3 = (int)*param_3 + (uint)lVar14;
          *(undefined2 *)(param_3 + 5) = 0;
          *(undefined1 *)((int)param_3 + 0x2b) = 0;
          *(uint *)((int)param_3 + 4) =
               (int)((ulonglong)lVar14 >> 0x20) + *(int *)((int)param_3 + 4) +
               (uint)CARRY4((uint)uVar2,(uint)lVar14);
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
      }
    }
  }
LAB_00486300:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00485faa @ 00485faa  kind=gamemisc  attributed-by=none  size=868 */

void FUN_00485faa(void)

{
  byte bVar1;
  int iVar2;
  ulonglong uVar3;
  byte *pbVar4;
  char *pcVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  uint unaff_EBP;
  byte *unaff_ESI;
  ulonglong *unaff_EDI;
  bool bVar9;
  double dVar10;
  double dVar11;
  ulonglong uVar12;
  undefined4 uStack00000008;
  
  do {
    pbVar7 = unaff_ESI + 1;
    unaff_ESI = unaff_ESI + 1;
  } while (((&DAT_00569720)[*pbVar7] & 1) != 0);
  bVar1 = *unaff_ESI;
  pbVar7 = unaff_ESI;
  while (bVar1 != 0) {
    pbVar7 = pbVar7 + 1;
    bVar1 = *pbVar7;
  }
  uVar8 = (int)pbVar7 - (int)unaff_ESI & 0x3fffffff;
  if (7 < uVar8 - 3) {
    uStack00000008 = 0x48630d;
    __security_check_cookie(*(uint *)(unaff_EBP - 4) ^ unaff_EBP);
    return;
  }
  if (unaff_ESI[uVar8 - 1] == 0x73) {
    unaff_ESI[uVar8 - 1] = 0;
    uVar8 = uVar8 - 1;
  }
  FUN_004753b0(unaff_EDI);
  dVar11 = *(double *)(unaff_EBP - 0x38);
  *(undefined4 *)(unaff_EBP - 0x28) = 0;
  if (0.0 <= dVar11) {
    dVar10 = 0.5;
  }
  else {
    dVar10 = -0.5;
  }
  *(double *)(unaff_EBP - 0x30) = dVar10;
  if (uVar8 == 3) {
    pbVar7 = &DAT_0056dcdc;
    do {
      bVar1 = *unaff_ESI;
      bVar9 = bVar1 < *pbVar7;
      if (bVar1 != *pbVar7) {
LAB_00486050:
        uVar8 = -(uint)bVar9 | 1;
        goto LAB_00486055;
      }
      if (bVar1 == 0) break;
      bVar1 = unaff_ESI[1];
      bVar9 = bVar1 < pbVar7[1];
      if (bVar1 != pbVar7[1]) goto LAB_00486050;
      unaff_ESI = unaff_ESI + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar1 != 0);
    uVar8 = 0;
LAB_00486055:
    if (uVar8 != 0) goto LAB_0048607e;
    *(double *)(unaff_EBP - 0x30) = dVar11 * 86400000.0 + dVar10;
  }
  else if (uVar8 == 4) {
    pbVar4 = &DAT_0056dce0;
    pbVar7 = unaff_ESI;
    do {
      bVar1 = *pbVar7;
      bVar9 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_004860d0:
        uVar8 = -(uint)bVar9 | 1;
        goto LAB_004860d5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar7[1];
      bVar9 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_004860d0;
      pbVar7 = pbVar7 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    uVar8 = 0;
LAB_004860d5:
    if (uVar8 == 0) {
      *(double *)(unaff_EBP - 0x30) = dVar11 * 3600000.0 + dVar10;
    }
    else {
      pbVar7 = &DAT_0056dcd4;
      do {
        bVar1 = *unaff_ESI;
        bVar9 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_00486114:
          uVar8 = -(uint)bVar9 | 1;
          goto LAB_00486119;
        }
        if (bVar1 == 0) break;
        bVar1 = unaff_ESI[1];
        bVar9 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_00486114;
        unaff_ESI = unaff_ESI + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      uVar8 = 0;
LAB_00486119:
      if (uVar8 != 0) goto LAB_0048607e;
      FUN_00475680((uint *)unaff_EDI);
      FUN_004752f0(unaff_EDI);
      *(int *)(unaff_EDI + 1) = (int)unaff_EDI[1] + (int)dVar11;
      *(undefined1 *)((int)unaff_EDI + 0x2a) = 0;
      FUN_004753b0(unaff_EDI);
      dVar11 = (double)(int)dVar11;
      if (dVar11 == *(double *)(unaff_EBP - 0x38)) goto LAB_0048607e;
      *(double *)(unaff_EBP - 0x30) =
           (*(double *)(unaff_EBP - 0x38) - dVar11) * 365.0 * 86400000.0 +
           *(double *)(unaff_EBP - 0x30);
    }
  }
  else if (uVar8 == 6) {
    pcVar5 = "minute";
    pbVar7 = unaff_ESI;
    do {
      bVar1 = *pbVar7;
      bVar9 = bVar1 < (byte)*pcVar5;
      if (bVar1 != *pcVar5) {
LAB_004861b2:
        uVar8 = -(uint)bVar9 | 1;
        goto LAB_004861b7;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar7[1];
      bVar9 = bVar1 < (byte)pcVar5[1];
      if (bVar1 != pcVar5[1]) goto LAB_004861b2;
      pbVar7 = pbVar7 + 2;
      pcVar5 = pcVar5 + 2;
    } while (bVar1 != 0);
    uVar8 = 0;
LAB_004861b7:
    if (uVar8 == 0) {
      *(double *)(unaff_EBP - 0x30) = dVar11 * 60000.0 + dVar10;
    }
    else {
      pcVar5 = "second";
      do {
        bVar1 = *unaff_ESI;
        bVar9 = bVar1 < (byte)*pcVar5;
        if (bVar1 != *pcVar5) {
LAB_00486200:
          uVar8 = -(uint)bVar9 | 1;
          goto LAB_00486205;
        }
        if (bVar1 == 0) break;
        bVar1 = unaff_ESI[1];
        bVar9 = bVar1 < (byte)pcVar5[1];
        if (bVar1 != pcVar5[1]) goto LAB_00486200;
        unaff_ESI = unaff_ESI + 2;
        pcVar5 = pcVar5 + 2;
      } while (bVar1 != 0);
      uVar8 = 0;
LAB_00486205:
      if (uVar8 != 0) goto LAB_0048607e;
      *(double *)(unaff_EBP - 0x30) = dVar11 * 1000.0 + dVar10;
    }
  }
  else {
    if (uVar8 != 5) goto LAB_0048607e;
    pcVar5 = "month";
    do {
      bVar1 = *unaff_ESI;
      bVar9 = bVar1 < (byte)*pcVar5;
      if (bVar1 != *pcVar5) {
LAB_00486254:
        uVar8 = -(uint)bVar9 | 1;
        goto LAB_00486259;
      }
      if (bVar1 == 0) break;
      bVar1 = unaff_ESI[1];
      bVar9 = bVar1 < (byte)pcVar5[1];
      if (bVar1 != pcVar5[1]) goto LAB_00486254;
      unaff_ESI = unaff_ESI + 2;
      pcVar5 = pcVar5 + 2;
    } while (bVar1 != 0);
    uVar8 = 0;
LAB_00486259:
    if (uVar8 != 0) goto LAB_0048607e;
    FUN_00475680((uint *)unaff_EDI);
    FUN_004752f0(unaff_EDI);
    dVar11 = *(double *)(unaff_EBP - 0x38);
    *(int *)((int)unaff_EDI + 0xc) = *(int *)((int)unaff_EDI + 0xc) + (int)dVar11;
    iVar2 = *(int *)((int)unaff_EDI + 0xc);
    iVar6 = iVar2 + -1;
    if (iVar2 < 1) {
      iVar6 = iVar2 + -0xc;
    }
    *(int *)(unaff_EDI + 1) = (int)unaff_EDI[1] + iVar6 / 0xc;
    *(int *)((int)unaff_EDI + 0xc) = iVar2 + (iVar6 / 0xc) * -0xc;
    *(undefined1 *)((int)unaff_EDI + 0x2a) = 0;
    FUN_004753b0(unaff_EDI);
    dVar11 = (double)(int)dVar11;
    if (dVar11 == *(double *)(unaff_EBP - 0x38)) goto LAB_0048607e;
    *(double *)(unaff_EBP - 0x30) =
         (*(double *)(unaff_EBP - 0x38) - dVar11) * 30.0 * 86400000.0 +
         *(double *)(unaff_EBP - 0x30);
  }
  uVar12 = FUN_0054a946();
  uVar3 = *unaff_EDI;
  *(uint *)unaff_EDI = (int)*unaff_EDI + (uint)uVar12;
  *(int *)((int)unaff_EDI + 4) =
       *(int *)((int)unaff_EDI + 4) + (int)(uVar12 >> 0x20) + (uint)CARRY4((uint)uVar3,(uint)uVar12)
  ;
LAB_0048607e:
  *(undefined2 *)(unaff_EDI + 5) = 0;
  *(undefined1 *)((int)unaff_EDI + 0x2b) = 0;
  uStack00000008 = 0x486095;
  __security_check_cookie(*(uint *)(unaff_EBP - 4) ^ unaff_EBP);
  return;
}


/* FUN_00486380 @ 00486380  kind=gamemisc  attributed-by=none  size=206 */

bool __cdecl FUN_00486380(byte *param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  
  bVar2 = (&DAT_00569720)[*param_1];
  pbVar4 = param_1;
  while ((bVar2 & 1) != 0) {
    pbVar1 = pbVar4 + 1;
    pbVar4 = pbVar4 + 1;
    bVar2 = (&DAT_00569720)[*pbVar1];
  }
  *(undefined4 *)(param_2 + 0x1c) = 0;
  bVar2 = *pbVar4;
  if (bVar2 == 0x2d) {
    iVar5 = -1;
  }
  else {
    if (bVar2 != 0x2b) {
      if ((bVar2 != 0x5a) && (bVar2 != 0x7a)) {
        return bVar2 != 0;
      }
      pbVar4 = pbVar4 + 1;
      goto LAB_0048642f;
    }
    iVar5 = 1;
  }
  iVar3 = FUN_0047d1b0(pbVar4 + 1);
  if (iVar3 != 2) {
    return true;
  }
  pbVar4 = pbVar4 + 6;
  *(int *)(param_2 + 0x1c) = (param_2 + (int)param_1 * 0x3c) * iVar5;
LAB_0048642f:
  bVar2 = (&DAT_00569720)[*pbVar4];
  while ((bVar2 & 1) != 0) {
    pbVar1 = pbVar4 + 1;
    pbVar4 = pbVar4 + 1;
    bVar2 = (&DAT_00569720)[*pbVar1];
  }
  return *pbVar4 != 0;
}


/* FUN_00486460 @ 00486460  kind=gamemisc  attributed-by=none  size=213 */

undefined4 __cdecl FUN_00486460(byte *param_1,ulonglong *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 local_c;
  undefined4 local_8;
  
  bVar1 = *param_1;
  pbVar3 = param_1;
  if (bVar1 == 0x2d) {
    pbVar3 = param_1 + 1;
  }
  iVar2 = FUN_0047d1b0(pbVar3);
  if (iVar2 == 3) {
    for (pbVar3 = pbVar3 + 10; (((&DAT_00569720)[*pbVar3] & 1) != 0 || (*pbVar3 == 0x54));
        pbVar3 = pbVar3 + 1) {
    }
    iVar2 = FUN_00485950(pbVar3,(int)param_2);
    if (iVar2 != 0) {
      if (*pbVar3 != 0) {
        return 1;
      }
      *(undefined1 *)((int)param_2 + 0x29) = 0;
    }
    *(undefined1 *)((int)param_2 + 0x2a) = 0;
    *(undefined1 *)(param_2 + 5) = 1;
    if (bVar1 == 0x2d) {
      param_1 = (byte *)-(int)param_1;
    }
    *(byte **)(param_2 + 1) = param_1;
    *(undefined4 *)((int)param_2 + 0xc) = local_8;
    *(undefined4 *)(param_2 + 2) = local_c;
    if (*(char *)((int)param_2 + 0x2b) != '\0') {
      FUN_004753b0(param_2);
    }
    return 0;
  }
  return 1;
}


/* FUN_00486540 @ 00486540  kind=gamemisc  attributed-by=none  size=856 */

bool __cdecl FUN_00486540(char *param_1,byte *param_2,ushort *param_3,uint param_4)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  byte *pbVar10;
  char *pcVar11;
  bool bVar12;
  bool bVar13;
  
  uVar5 = param_3[1];
  bVar2 = *(byte *)((int)param_3 + 1);
  uVar6 = *param_3;
  uVar8 = (uint)*param_3;
  cVar3 = *(char *)((int)param_3 + 3);
  bVar12 = false;
  bVar4 = false;
  uVar7 = FUN_004ad280((int *)&param_1);
  if (uVar7 != 0) {
    do {
      if ((uVar7 == (byte)uVar6) && (!bVar12)) goto LAB_00486710;
      if ((uVar7 != uVar8 >> 8) || (bVar12)) {
        if (uVar7 == (byte)uVar5) {
          uVar7 = 0;
          uVar8 = FUN_004ad280((int *)&param_2);
          if (uVar8 == 0) {
            return false;
          }
          uVar9 = FUN_004ad280((int *)&param_1);
          bVar12 = uVar9 == 0x5e;
          if (bVar12) {
            uVar9 = FUN_004ad280((int *)&param_1);
          }
          bVar13 = uVar9 == 0x5d;
          if (bVar13) {
            uVar9 = FUN_004ad280((int *)&param_1);
          }
          bVar13 = bVar13 && uVar8 == 0x5d;
          if (uVar9 == 0) {
            return false;
          }
          while (uVar9 != 0x5d) {
            if ((((uVar9 == 0x2d) && (*param_1 != ']')) && (*param_1 != '\0')) && (uVar7 != 0)) {
              uVar9 = FUN_004ad280((int *)&param_1);
              if ((uVar7 <= uVar8) && (uVar8 <= uVar9)) {
                bVar13 = true;
              }
              uVar7 = 0;
            }
            else {
              uVar7 = uVar9;
              if (uVar8 == uVar9) {
                bVar13 = true;
              }
            }
            uVar9 = FUN_004ad280((int *)&param_1);
            if (uVar9 == 0) {
              return false;
            }
          }
          if (bVar12 == bVar13) {
            return false;
          }
          uVar8 = (uint)bVar2 << 8;
          bVar12 = bVar4;
        }
        else if ((param_4 != uVar7) || (bVar12)) {
          uVar9 = FUN_004ad280((int *)&param_2);
          if (cVar3 != '\0') {
            if ((uVar7 & 0xffffff80) == 0) {
              uVar7 = (uint)(byte)(&DAT_00569620)[uVar7];
            }
            if ((uVar9 & 0xffffff80) == 0) {
              uVar9 = (uint)(byte)(&DAT_00569620)[uVar9];
            }
          }
          if (uVar7 != uVar9) {
            return false;
          }
          bVar12 = false;
          bVar4 = bVar12;
        }
        else {
          bVar12 = true;
          bVar4 = bVar12;
        }
      }
      else {
        uVar7 = FUN_004ad280((int *)&param_2);
        if (uVar7 == 0) {
          return false;
        }
      }
      uVar7 = FUN_004ad280((int *)&param_1);
    } while (uVar7 != 0);
  }
  return *param_2 == 0;
LAB_00486710:
  while ((uVar9 = FUN_004ad280((int *)&param_1), uVar7 = param_4, uVar9 == (byte)uVar6 ||
         (uVar9 == uVar8 >> 8))) {
    if ((uVar9 == uVar8 >> 8) && (uVar7 = FUN_004ad280((int *)&param_2), uVar7 == 0)) {
      return false;
    }
  }
  if (uVar9 == 0) {
    return true;
  }
  if (uVar9 == param_4) {
    uVar9 = FUN_004ad280((int *)&param_1);
    if (uVar9 == 0) {
      return false;
    }
  }
  else if (uVar9 == (byte)uVar5) {
    pbVar10 = param_2;
    if (*param_2 != 0) {
      pcVar11 = param_1 + -1;
      do {
        bVar12 = FUN_00486540(pcVar11,pbVar10,param_3,uVar7);
        if (CONCAT31(extraout_var,bVar12) != 0) break;
        bVar2 = *pbVar10;
        pbVar10 = pbVar10 + 1;
        if (0xbf < bVar2) {
          bVar2 = *pbVar10;
          while ((bVar2 & 0xc0) == 0x80) {
            pbVar1 = pbVar10 + 1;
            pbVar10 = pbVar10 + 1;
            bVar2 = *pbVar1;
          }
        }
      } while (*pbVar10 != 0);
    }
    return *pbVar10 != 0;
  }
  uVar8 = FUN_004ad280((int *)&param_2);
  pcVar11 = param_1;
  if (uVar8 == 0) {
    return false;
  }
  do {
    if (cVar3 == '\0') {
      while (uVar8 != uVar9) {
        uVar8 = FUN_004ad280((int *)&param_2);
        if (uVar8 == 0) {
          return false;
        }
      }
    }
    else {
      if ((uVar8 & 0xffffff80) == 0) {
        uVar8 = (uint)(byte)(&DAT_00569620)[uVar8];
      }
      if ((uVar9 & 0xffffff80) == 0) {
        uVar9 = (uint)(byte)(&DAT_00569620)[uVar9];
      }
      if (uVar8 == 0) {
        return false;
      }
      while (uVar8 != uVar9) {
        uVar8 = FUN_004ad280((int *)&param_2);
        if ((uVar8 & 0xffffff80) == 0) {
          uVar8 = (uint)(byte)(&DAT_00569620)[uVar8];
        }
        if (uVar8 == 0) {
          return false;
        }
      }
    }
    bVar12 = FUN_00486540(pcVar11,param_2,param_3,uVar7);
    if (CONCAT31(extraout_var_00,bVar12) != 0) {
      return true;
    }
    uVar8 = FUN_004ad280((int *)&param_2);
  } while (uVar8 != 0);
  return false;
}


/* FUN_004869b0 @ 004869b0  kind=gamemisc  attributed-by=none  size=109 */

undefined4 * __cdecl FUN_004869b0(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (*(int *)*param_1 != 0) {
    (*DAT_00582b20)(*(int *)*param_1);
  }
  puVar1 = FUN_004868a0(param_1[1] + param_1[2] + 0x1c);
  puVar2 = (undefined4 *)(param_1[1] + (int)puVar1);
  if (*(int *)*param_1 != 0) {
    (*DAT_00582b18)(*(int *)*param_1);
  }
  if (puVar1 != (undefined4 *)0x0) {
    *puVar2 = puVar1;
    puVar2[1] = puVar2 + 7;
    if (param_1[3] != 0) {
      *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + 1;
    }
    return puVar2;
  }
  return (undefined4 *)0x0;
}


/* FUN_00486a20 @ 00486a20  kind=gamemisc  attributed-by=none  size=195 */

void __cdecl FUN_00486a20(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (*(uint *)(param_1 + 4) < *(uint *)(param_1 + 0x10)) {
    do {
      puVar2 = *(undefined4 **)(param_1 + 0x18);
      if (puVar2 == (undefined4 *)0x0) {
        return;
      }
      iVar3 = *(int *)puVar2[4];
      if ((puVar2[5] != 0) || (puVar2 == *(undefined4 **)(iVar3 + 0x18))) {
        if (puVar2[6] != 0) {
          *(undefined4 *)(puVar2[6] + 0x14) = puVar2[5];
        }
        if (puVar2[5] != 0) {
          *(undefined4 *)(puVar2[5] + 0x18) = puVar2[6];
        }
        if (*(undefined4 **)(iVar3 + 0x14) == puVar2) {
          *(undefined4 *)(iVar3 + 0x14) = puVar2[5];
        }
        if (*(undefined4 **)(iVar3 + 0x18) == puVar2) {
          *(undefined4 *)(iVar3 + 0x18) = puVar2[6];
        }
        puVar2[5] = 0;
        puVar2[6] = 0;
        *(int *)(puVar2[4] + 0x20) = *(int *)(puVar2[4] + 0x20) + -1;
      }
      iVar3 = puVar2[4];
      piVar1 = (int *)(*(int *)(iVar3 + 0x2c) + ((uint)puVar2[2] % *(uint *)(iVar3 + 0x28)) * 4);
      puVar4 = (undefined4 *)*piVar1;
      while (puVar4 != puVar2) {
        piVar1 = puVar4 + 3;
        puVar4 = (undefined4 *)*piVar1;
      }
      *piVar1 = *(int *)(*piVar1 + 0xc);
      *(int *)(iVar3 + 0x24) = *(int *)(iVar3 + 0x24) + -1;
      piVar1 = (int *)puVar2[4];
      FUN_00486af0((undefined4 *)*puVar2);
      if (piVar1[3] != 0) {
        piVar1 = (int *)(*piVar1 + 0x10);
        *piVar1 = *piVar1 + -1;
      }
    } while (*(uint *)(param_1 + 4) < *(uint *)(param_1 + 0x10));
  }
  return;
}


/* FUN_00486bf0 @ 00486bf0  kind=gamemisc  attributed-by=none  size=38 */

void __cdecl FUN_00486bf0(undefined4 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    piVar1 = (int *)param_1[4];
    FUN_00486af0((undefined4 *)*param_1);
    if (piVar1[3] != 0) {
      piVar1 = (int *)(*piVar1 + 0x10);
      *piVar1 = *piVar1 + -1;
    }
  }
  return;
}


/* FUN_00486c20 @ 00486c20  kind=gamemisc  attributed-by=none  size=96 */

void __cdecl FUN_00486c20(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar2 = **(int **)(param_1 + 0x10);
    if ((*(int *)(param_1 + 0x14) != 0) || (param_1 == *(int *)(iVar2 + 0x18))) {
      if (*(int *)(param_1 + 0x18) != 0) {
        *(int *)(*(int *)(param_1 + 0x18) + 0x14) = *(int *)(param_1 + 0x14);
      }
      if (*(int *)(param_1 + 0x14) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x18) = *(undefined4 *)(param_1 + 0x18);
      }
      if (*(int *)(iVar2 + 0x14) == param_1) {
        *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(param_1 + 0x14);
      }
      if (*(int *)(iVar2 + 0x18) == param_1) {
        *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(param_1 + 0x18);
      }
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      piVar1 = (int *)(*(int *)(param_1 + 0x10) + 0x20);
      *piVar1 = *piVar1 + -1;
    }
  }
  return;
}


/* FUN_00486c80 @ 00486c80  kind=gamemisc  attributed-by=none  size=55 */

void __cdecl FUN_00486c80(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x10);
  piVar1 = (int *)(*(int *)(iVar2 + 0x2c) + (*(uint *)(param_1 + 8) % *(uint *)(iVar2 + 0x28)) * 4);
  iVar3 = *piVar1;
  while (iVar3 != param_1) {
    piVar1 = (int *)(iVar3 + 0xc);
    iVar3 = *piVar1;
  }
  *piVar1 = *(int *)(*piVar1 + 0xc);
  *(int *)(iVar2 + 0x24) = *(int *)(iVar2 + 0x24) + -1;
  return;
}


/* FUN_00486cc0 @ 00486cc0  kind=gamemisc  attributed-by=none  size=259 */

undefined4 __cdecl FUN_00486cc0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint local_8;
  
  uVar5 = param_1[10] * 2;
  if (uVar5 < 0x100) {
    uVar5 = 0x100;
  }
  if (*(int *)*param_1 != 0) {
    (*DAT_00582b20)(*(int *)*param_1);
  }
  if ((param_1[10] != 0) && (DAT_00583e74 != (code *)0x0)) {
    (*DAT_00583e74)();
  }
  _Dst = (void *)FUN_004a0350(uVar5 * 4);
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,uVar5 * 4);
  }
  if ((param_1[10] != 0) && (DAT_00583e78 != (code *)0x0)) {
    (*DAT_00583e78)();
  }
  if (*(int *)*param_1 != 0) {
    (*DAT_00582b18)(*(int *)*param_1);
  }
  if (_Dst != (void *)0x0) {
    local_8 = 0;
    if (param_1[10] != 0) {
      do {
        iVar2 = *(int *)(param_1[0xb] + local_8 * 4);
        while (iVar2 != 0) {
          uVar4 = *(uint *)(iVar2 + 8) % uVar5;
          iVar1 = *(int *)(iVar2 + 0xc);
          *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)((int)_Dst + uVar4 * 4);
          *(int *)((int)_Dst + uVar4 * 4) = iVar2;
          iVar2 = iVar1;
        }
        local_8 = local_8 + 1;
      } while (local_8 < (uint)param_1[10]);
    }
    FUN_00466dd0(param_1[0xb]);
    param_1[0xb] = _Dst;
    param_1[10] = uVar5;
  }
  uVar3 = 7;
  if (param_1[0xb] != 0) {
    uVar3 = 0;
  }
  return uVar3;
}


/* FUN_00486dd0 @ 00486dd0  kind=gamemisc  attributed-by=none  size=205 */

void __cdecl FUN_00486dd0(int param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint local_8;
  
  local_8 = 0;
  if (*(int *)(param_1 + 0x28) != 0) {
    do {
      puVar4 = (undefined4 *)(*(int *)(param_1 + 0x2c) + local_8 * 4);
      puVar1 = (undefined4 *)*puVar4;
      while (puVar1 != (undefined4 *)0x0) {
        if ((uint)puVar1[2] < param_2) {
          puVar4 = puVar1 + 3;
        }
        else {
          *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
          *puVar4 = puVar1[3];
          iVar2 = *(int *)puVar1[4];
          if ((puVar1[5] != 0) || (puVar1 == *(undefined4 **)(iVar2 + 0x18))) {
            if (puVar1[6] != 0) {
              *(undefined4 *)(puVar1[6] + 0x14) = puVar1[5];
            }
            if (puVar1[5] != 0) {
              *(undefined4 *)(puVar1[5] + 0x18) = puVar1[6];
            }
            if (*(undefined4 **)(iVar2 + 0x14) == puVar1) {
              *(undefined4 *)(iVar2 + 0x14) = puVar1[5];
            }
            if (*(undefined4 **)(iVar2 + 0x18) == puVar1) {
              *(undefined4 *)(iVar2 + 0x18) = puVar1[6];
            }
            puVar1[5] = 0;
            puVar1[6] = 0;
            *(int *)(puVar1[4] + 0x20) = *(int *)(puVar1[4] + 0x20) + -1;
          }
          piVar3 = (int *)puVar1[4];
          FUN_00486af0((undefined4 *)*puVar1);
          if (piVar3[3] != 0) {
            piVar3 = (int *)(*piVar3 + 0x10);
            *piVar3 = *piVar3 + -1;
          }
        }
        puVar1 = (undefined4 *)*puVar4;
      }
      local_8 = local_8 + 1;
    } while (local_8 < *(uint *)(param_1 + 0x28));
  }
  return;
}


/* FUN_00486ea0 @ 00486ea0  kind=gamemisc  attributed-by=none  size=41 */

undefined4 __cdecl FUN_00486ea0(int param_1)

{
  undefined4 uVar1;
  
  if ((DAT_0058420c == 0) ||
     (uVar1 = DAT_00584228, DAT_00584208 < *(int *)(param_1 + 8) + *(int *)(param_1 + 4))) {
    uVar1 = DAT_00583f64;
  }
  return uVar1;
}


/* FUN_0048866a @ 0048866a  kind=gamemisc  attributed-by=none  size=128 */

void __fastcall FUN_0048866a(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int unaff_EBX;
  int *piVar8;
  int unaff_EBP;
  int *unaff_ESI;
  int unaff_EDI;
  
  do {
    *(undefined4 *)(unaff_EBP + -4) = *(undefined4 *)(unaff_EBX + 0x10 + *(int *)(param_1 + 0x14));
    iVar5 = unaff_ESI[7];
    *(int *)(unaff_EBP + -8) = iVar5;
    if (iVar5 < unaff_ESI[8]) {
LAB_00488695:
      unaff_ESI[7] = unaff_ESI[7] + 1;
      uVar2 = *(undefined4 *)(unaff_EBP + -4);
      iVar6 = unaff_ESI[1];
      *(undefined2 *)(iVar6 + iVar5 * 0x14) = 10;
      *(undefined1 *)(iVar6 + 3 + iVar5 * 0x14) = 0;
      *(undefined4 *)(iVar6 + 4 + iVar5 * 0x14) = 0;
      *(undefined4 *)(iVar6 + 8 + iVar5 * 0x14) = uVar2;
      *(undefined4 *)(iVar6 + 0xc + iVar5 * 0x14) = 0;
      *(undefined4 *)(iVar6 + 0x10 + iVar5 * 0x14) = 0;
    }
    else {
      iVar5 = FUN_0047de10(unaff_ESI);
      if (iVar5 == 0) {
        iVar5 = *(int *)(unaff_EBP + -8);
        goto LAB_00488695;
      }
    }
    param_1 = *(int *)(unaff_EBP + 0xc);
    unaff_EDI = unaff_EDI + 1;
    unaff_EBX = unaff_EBX + 0x18;
    if (*(int *)(param_1 + 0x18) <= unaff_EDI) {
      iVar5 = *(int *)(param_1 + 0x24);
      piVar8 = *(int **)(param_1 + 0x20);
      *(undefined4 *)(unaff_EBP + -8) = 0;
      if (0 < iVar5) {
        do {
          iVar5 = unaff_ESI[7];
          *(int *)(unaff_EBP + -4) = piVar8[2];
          if ((iVar5 < unaff_ESI[8]) || (iVar6 = FUN_0047de10(unaff_ESI), iVar6 == 0)) {
            iVar6 = unaff_ESI[1];
            unaff_ESI[7] = unaff_ESI[7] + 1;
            uVar2 = *(undefined4 *)(unaff_EBP + -4);
            *(undefined2 *)(iVar6 + iVar5 * 0x14) = 10;
            *(undefined1 *)(iVar6 + 3 + iVar5 * 0x14) = 0;
            *(undefined4 *)(iVar6 + 4 + iVar5 * 0x14) = 0;
            *(undefined4 *)(iVar6 + 8 + iVar5 * 0x14) = uVar2;
            *(undefined4 *)(iVar6 + 0xc + iVar5 * 0x14) = 0;
            *(undefined4 *)(iVar6 + 0x10 + iVar5 * 0x14) = 0;
          }
          if (-1 < piVar8[3]) {
            puVar3 = *(uint **)(*piVar8 + 0x10);
            if ((puVar3 == (uint *)0x0) || (*puVar3 != 1)) {
              FUN_004962b0(*(int **)(unaff_EBP + 8),
                           (byte *)"DISTINCT aggregates must have exactly one argument");
              piVar8[3] = -1;
            }
            else {
              piVar7 = FUN_0047f5f0(*(int **)(unaff_EBP + 8),puVar3);
              iVar5 = unaff_ESI[7];
              *(int **)(unaff_EBP + -4) = piVar7;
              *(int *)(unaff_EBP + -0xc) = piVar8[3];
              if ((iVar5 < unaff_ESI[8]) || (iVar6 = FUN_0047de10(unaff_ESI), iVar6 == 0)) {
                iVar6 = unaff_ESI[1];
                unaff_ESI[7] = unaff_ESI[7] + 1;
                uVar2 = *(undefined4 *)(unaff_EBP + -0xc);
                *(undefined2 *)(iVar6 + iVar5 * 0x14) = 0x2a;
                *(undefined1 *)(iVar6 + 3 + iVar5 * 0x14) = 0;
                *(undefined4 *)(iVar6 + 4 + iVar5 * 0x14) = uVar2;
                *(undefined4 *)(iVar6 + 8 + iVar5 * 0x14) = 0;
                *(undefined4 *)(iVar6 + 0xc + iVar5 * 0x14) = 0;
                *(undefined4 *)(iVar6 + 0x10 + iVar5 * 0x14) = 0;
              }
              else {
                iVar5 = 1;
              }
              iVar6 = unaff_ESI[1];
              iVar4 = *unaff_ESI;
              if ((iVar6 == 0) || (*(char *)(iVar4 + 0x38) != '\0')) {
                FUN_0047bc80(iVar4,0xfffffff0,*(int **)(unaff_EBP + -4));
              }
              else {
                if (iVar5 < 0) {
                  iVar5 = unaff_ESI[7] + -1;
                }
                iVar1 = iVar6 + iVar5 * 0x14;
                FUN_0047bc80(iVar4,(int)*(char *)(iVar1 + 1),*(int **)(iVar6 + 0x10 + iVar5 * 0x14))
                ;
                iVar5 = *(int *)(unaff_EBP + -4);
                *(undefined4 *)(iVar1 + 0x10) = 0;
                if (iVar5 == 0) {
                  *(undefined4 *)(iVar1 + 0x10) = 0;
                  *(undefined1 *)(iVar1 + 1) = 0;
                }
                else {
                  *(int *)(iVar1 + 0x10) = iVar5;
                  *(undefined1 *)(iVar1 + 1) = 0xfa;
                }
              }
            }
          }
          iVar5 = *(int *)(unaff_EBP + -8) + 1;
          piVar8 = piVar8 + 4;
          *(int *)(unaff_EBP + -8) = iVar5;
        } while (iVar5 < *(int *)(*(int *)(unaff_EBP + 0xc) + 0x24));
      }
      return;
    }
  } while( true );
}


/* FUN_004886ea @ 004886ea  kind=gamemisc  attributed-by=none  size=362 */

void FUN_004886ea(void)

{
  int iVar1;
  undefined4 uVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *unaff_EBX;
  int unaff_EBP;
  int *unaff_ESI;
  int iVar7;
  
  do {
    iVar7 = unaff_ESI[7];
    *(int *)(unaff_EBP + -4) = unaff_EBX[2];
    if (iVar7 < unaff_ESI[8]) {
LAB_0048870b:
      iVar5 = unaff_ESI[1];
      unaff_ESI[7] = unaff_ESI[7] + 1;
      uVar2 = *(undefined4 *)(unaff_EBP + -4);
      *(undefined2 *)(iVar5 + iVar7 * 0x14) = 10;
      *(undefined1 *)(iVar5 + 3 + iVar7 * 0x14) = 0;
      *(undefined4 *)(iVar5 + 4 + iVar7 * 0x14) = 0;
      *(undefined4 *)(iVar5 + 8 + iVar7 * 0x14) = uVar2;
      *(undefined4 *)(iVar5 + 0xc + iVar7 * 0x14) = 0;
      *(undefined4 *)(iVar5 + 0x10 + iVar7 * 0x14) = 0;
    }
    else {
      iVar5 = FUN_0047de10(unaff_ESI);
      if (iVar5 == 0) goto LAB_0048870b;
    }
    if (-1 < unaff_EBX[3]) {
      puVar3 = *(uint **)(*unaff_EBX + 0x10);
      if ((puVar3 == (uint *)0x0) || (*puVar3 != 1)) {
        FUN_004962b0(*(int **)(unaff_EBP + 8),
                     (byte *)"DISTINCT aggregates must have exactly one argument");
        unaff_EBX[3] = -1;
      }
      else {
        piVar6 = FUN_0047f5f0(*(int **)(unaff_EBP + 8),puVar3);
        iVar7 = unaff_ESI[7];
        *(int **)(unaff_EBP + -4) = piVar6;
        *(int *)(unaff_EBP + -0xc) = unaff_EBX[3];
        if (iVar7 < unaff_ESI[8]) {
LAB_0048878f:
          iVar5 = unaff_ESI[1];
          unaff_ESI[7] = unaff_ESI[7] + 1;
          uVar2 = *(undefined4 *)(unaff_EBP + -0xc);
          *(undefined2 *)(iVar5 + iVar7 * 0x14) = 0x2a;
          *(undefined1 *)(iVar5 + 3 + iVar7 * 0x14) = 0;
          *(undefined4 *)(iVar5 + 4 + iVar7 * 0x14) = uVar2;
          *(undefined4 *)(iVar5 + 8 + iVar7 * 0x14) = 0;
          *(undefined4 *)(iVar5 + 0xc + iVar7 * 0x14) = 0;
          *(undefined4 *)(iVar5 + 0x10 + iVar7 * 0x14) = 0;
        }
        else {
          iVar5 = FUN_0047de10(unaff_ESI);
          if (iVar5 == 0) goto LAB_0048878f;
          iVar7 = 1;
        }
        iVar5 = unaff_ESI[1];
        iVar4 = *unaff_ESI;
        if ((iVar5 == 0) || (*(char *)(iVar4 + 0x38) != '\0')) {
          FUN_0047bc80(iVar4,0xfffffff0,*(int **)(unaff_EBP + -4));
        }
        else {
          if (iVar7 < 0) {
            iVar7 = unaff_ESI[7] + -1;
          }
          iVar1 = iVar5 + iVar7 * 0x14;
          FUN_0047bc80(iVar4,(int)*(char *)(iVar1 + 1),*(int **)(iVar5 + 0x10 + iVar7 * 0x14));
          iVar7 = *(int *)(unaff_EBP + -4);
          *(undefined4 *)(iVar1 + 0x10) = 0;
          if (iVar7 == 0) {
            *(undefined4 *)(iVar1 + 0x10) = 0;
            *(undefined1 *)(iVar1 + 1) = 0;
          }
          else {
            *(int *)(iVar1 + 0x10) = iVar7;
            *(undefined1 *)(iVar1 + 1) = 0xfa;
          }
        }
      }
    }
    iVar7 = *(int *)(unaff_EBP + -8) + 1;
    unaff_EBX = unaff_EBX + 4;
    *(int *)(unaff_EBP + -8) = iVar7;
    if (*(int *)(*(int *)(unaff_EBP + 0xc) + 0x24) <= iVar7) {
      return;
    }
  } while( true );
}


/* FUN_004891f0 @ 004891f0  kind=gamemisc  attributed-by=none  size=311 */

undefined4 __cdecl FUN_004891f0(int *param_1,undefined4 *param_2,int *param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  undefined2 extraout_var_00;
  int *piVar6;
  undefined3 extraout_var;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  int local_10;
  int *local_c;
  int local_8;
  
  if (param_3 == (int *)0x0) {
    return 0;
  }
  local_c = (int *)*param_1;
  puVar8 = (undefined4 *)param_3[2];
  local_8 = 0;
  if (0 < *param_3) {
    do {
      pcVar1 = (char *)*puVar8;
      local_10 = FUN_004889f0(local_c,(int *)*param_2,pcVar1);
      pcVar2 = pcVar1;
      if (local_10 < 1) {
        for (; (pcVar2 != (char *)0x0 && ((*pcVar2 == '\\' || (*pcVar2 == '\x18'))));
            pcVar2 = *(char **)(pcVar2 + 8)) {
        }
        iVar5 = FUN_00498e90(pcVar2,&local_10);
        if (iVar5 == 0) {
          *(undefined2 *)((int)puVar8 + 0xe) = 0;
          uVar4 = FUN_004a69e0(param_1,(int)pcVar1);
          if (CONCAT22(extraout_var_00,uVar4) != 0) {
            return 1;
          }
          piVar6 = (int *)*param_2;
          iVar5 = 0;
          if (0 < *piVar6) {
            iVar9 = 0;
            do {
              cVar3 = FUN_00498610(pcVar1,*(char **)(piVar6[2] + iVar9));
              if (CONCAT31(extraout_var,cVar3) == 0) {
                *(short *)((int)puVar8 + 0xe) = (short)iVar5 + 1;
              }
              iVar5 = iVar5 + 1;
              piVar6 = (int *)*param_2;
              iVar9 = iVar9 + 0x14;
            } while (iVar5 < *piVar6);
          }
        }
        else {
          if (0xfffe < local_10 - 1U) {
            FUN_004962b0(local_c,(byte *)"%r %s BY term out of range - should be between 1 and %d");
            return 1;
          }
          *(short *)((int)puVar8 + 0xe) = (short)local_10;
        }
      }
      else {
        *(short *)((int)puVar8 + 0xe) = (short)local_10;
      }
      local_8 = local_8 + 1;
      puVar8 = puVar8 + 5;
    } while (local_8 < *param_3);
  }
  uVar7 = FUN_004a6ac0(local_c,param_2,param_3,param_4);
  return uVar7;
}


/* FUN_0048935a @ 0048935a  kind=gamemisc  attributed-by=none  size=209 */

void FUN_0048935a(void)

{
  byte bVar1;
  uint *puVar2;
  byte *in_EAX;
  int unaff_EBX;
  int unaff_EBP;
  uint unaff_ESI;
  int *unaff_EDI;
  
  do {
    bVar1 = *in_EAX;
    in_EAX[2] = (&DAT_00569830)[bVar1];
    if ((bVar1 == 0x12) || (bVar1 == 0x7b)) {
      if ((int)unaff_ESI < (int)(uint)in_EAX[3]) {
        unaff_ESI = (uint)in_EAX[3];
      }
    }
    else if (bVar1 == 0x23) {
      if (*(int *)(in_EAX + 8) != 0) {
LAB_0048938a:
        unaff_EDI[0x18] = unaff_EDI[0x18] & 0xfffffeff;
      }
    }
    else {
      if (bVar1 == 0x7f) goto LAB_0048938a;
      if (bVar1 == 0x8c) {
        if ((int)unaff_ESI < (int)*(uint *)(in_EAX + 8)) {
          unaff_ESI = *(uint *)(in_EAX + 8);
        }
      }
      else if (bVar1 == 0x88) {
        if ((int)unaff_ESI < (int)*(uint *)(in_EAX + -0x10)) {
          unaff_ESI = *(uint *)(in_EAX + -0x10);
        }
      }
      else if ((bVar1 == 0x5f) || (bVar1 == 0x51)) {
        *(code **)(in_EAX + 0x10) = FUN_00490c90;
        in_EAX[1] = 0xed;
      }
      else if (bVar1 == 0x5c) {
        *(code **)(in_EAX + 0x10) = FUN_00491450;
        in_EAX[1] = 0xed;
      }
    }
    if (((in_EAX[2] & 1) != 0) && (*(int *)(in_EAX + 8) < 0)) {
      *(undefined4 *)(in_EAX + 8) =
           *(undefined4 *)(*(int *)(unaff_EBP + 8) - (*(int *)(in_EAX + 8) * 4 + 4));
    }
    in_EAX = in_EAX + 0x14;
    unaff_EBX = unaff_EBX + -1;
    if (unaff_EBX < 0) {
      FUN_00494b00(*unaff_EDI,(undefined4 *)unaff_EDI[10]);
      puVar2 = *(uint **)(unaff_EBP + 0xc);
      unaff_EDI[10] = 0;
      *puVar2 = unaff_ESI;
      return;
    }
  } while( true );
}


/* FUN_00489430 @ 00489430  kind=gamemisc  attributed-by=none  size=234 */

undefined4 __cdecl FUN_00489430(int param_1,undefined4 *param_2)

{
  uint *puVar1;
  int *piVar2;
  int *piVar3;
  ushort uVar4;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  byte bVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  undefined8 local_54;
  undefined8 local_4c;
  ulonglong local_44;
  undefined8 local_3c;
  code *local_34;
  code *local_30;
  int *local_2c;
  int local_24;
  undefined4 *local_20;
  int local_1c;
  uint local_18;
  int *local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if ((*(ushort *)((int)param_2 + 6) & 2) != 0) {
    return 1;
  }
  local_c = *(int *)(param_1 + 0x10);
  piVar2 = *(int **)(param_1 + 8);
  local_8 = *piVar2;
  if ((*(ushort *)((int)param_2 + 6) & 0x10) == 0) {
    FUN_004a99a0(piVar2,param_2,local_c);
    if (piVar2[0x11] == 0) {
      if (*(char *)(local_8 + 0x38) != '\0') {
        return 2;
      }
      return 1;
    }
  }
  else {
    local_20 = param_2;
    local_18 = (uint)(param_2[0xf] != 0);
    do {
      iVar8 = local_c;
      *(ushort *)((int)param_2 + 6) = *(ushort *)((int)param_2 + 6) | 2;
      local_4c = 0;
      local_44 = 0;
      local_3c = 0;
      local_54 = ZEXT48(piVar2);
      uVar4 = FUN_004a69e0((int *)&local_54,param_2[0x12]);
      if (CONCAT22(extraout_var,uVar4) != 0) {
        return 2;
      }
      uVar4 = FUN_004a69e0((int *)&local_54,param_2[0x13]);
      if (CONCAT22(extraout_var_00,uVar4) != 0) {
        return 2;
      }
      local_3c._0_5_ = CONCAT14(1,(undefined4)local_3c);
      local_54 = CONCAT44(param_2[10],(int)local_54);
      local_44 = CONCAT44(local_44._4_4_,iVar8);
      local_14 = (int *)*param_2;
      iVar8 = 0;
      bVar5 = 0;
      if (0 < *local_14) {
        iVar7 = 0;
        do {
          uVar4 = FUN_004a69e0((int *)&local_54,*(int *)(iVar7 + local_14[2]));
          if (CONCAT22(extraout_var_01,uVar4) != 0) {
            return 2;
          }
          iVar8 = iVar8 + 1;
          iVar7 = iVar7 + 0x14;
        } while (iVar8 < *local_14);
        bVar5 = local_3c._4_1_;
      }
      local_10 = 0;
      if (0 < *(short *)param_2[10]) {
        local_14 = (int *)0x0;
        do {
          piVar3 = local_14;
          iVar8 = param_2[10];
          if (*(int *)((int)local_14 + iVar8 + 0x1c) != 0) {
            local_1c = piVar2[0x81];
            iVar9 = 0;
            for (iVar7 = local_c; iVar7 != 0; iVar7 = *(int *)(iVar7 + 0x10)) {
              iVar9 = iVar9 + *(int *)(iVar7 + 0x14);
            }
            iVar7 = *(int *)((int)local_14 + iVar8 + 0x10);
            if (iVar7 != 0) {
              piVar2[0x81] = iVar7;
            }
            local_34 = FUN_00488dd0;
            local_30 = FUN_00489430;
            local_24 = local_c;
            local_2c = piVar2;
            FUN_004bb100((int)&local_34,*(undefined4 **)((int)local_14 + iVar8 + 0x1c));
            piVar2[0x81] = local_1c;
            if (piVar2[0x11] != 0) {
              return 2;
            }
            iVar7 = local_c;
            if (*(char *)(local_8 + 0x38) != '\0') {
              return 2;
            }
            for (; iVar7 != 0; iVar7 = *(int *)(iVar7 + 0x10)) {
              iVar9 = iVar9 - *(int *)(iVar7 + 0x14);
            }
            puVar1 = (uint *)((int)piVar3 + iVar8 + 0x2c);
            *puVar1 = *puVar1 ^ ((uint)(iVar9 != 0) * 2 ^ *(uint *)((int)piVar3 + iVar8 + 0x2c)) & 2
            ;
          }
          local_10 = local_10 + 1;
          local_14 = local_14 + 0x12;
        } while (local_10 < *(short *)param_2[10]);
        bVar5 = local_3c._4_1_;
      }
      piVar3 = (int *)param_2[0xc];
      if ((piVar3 == (int *)0x0) && ((bVar5 & 2) == 0)) {
        local_3c = CONCAT35(local_3c._5_3_,CONCAT14(bVar5,(undefined4)local_3c)) &
                   0xfffffffeffffffff;
      }
      else {
        *(ushort *)((int)param_2 + 6) = *(ushort *)((int)param_2 + 6) | 4;
      }
      if ((param_2[0xd] != 0) && (piVar3 == (int *)0x0)) {
        pcVar10 = "a GROUP BY clause is required before HAVING";
LAB_00489707:
        FUN_004962b0(piVar2,(byte *)pcVar10);
        return 2;
      }
      local_4c = CONCAT44(local_4c._4_4_,*param_2);
      uVar4 = FUN_004a69e0((int *)&local_54,param_2[0xb]);
      if (CONCAT22(extraout_var_02,uVar4) != 0) {
        return 2;
      }
      uVar4 = FUN_004a69e0((int *)&local_54,param_2[0xd]);
      if (CONCAT22(extraout_var_03,uVar4) != 0) {
        return 2;
      }
      local_3c = local_3c | 0x100000000;
      local_44 = local_44 & 0xffffffff00000000;
      if ((local_18 == 0) &&
         (iVar8 = FUN_004891f0((int *)&local_54,param_2,(int *)param_2[0xe],"ORDER"), iVar8 != 0)) {
        return 2;
      }
      iVar8 = local_8;
      if (*(char *)(local_8 + 0x38) != '\0') {
        return 2;
      }
      if (piVar3 != (int *)0x0) {
        iVar7 = FUN_004891f0((int *)&local_54,param_2,piVar3,"GROUP");
        if (iVar7 != 0) {
          return 2;
        }
        if (*(char *)(iVar8 + 0x38) != '\0') {
          return 2;
        }
        piVar6 = (int *)piVar3[2];
        iVar8 = 0;
        if (0 < *piVar3) {
          do {
            if ((*(byte *)(*piVar6 + 2) & 2) != 0) {
              pcVar10 = "aggregate functions are not allowed in the GROUP BY clause";
              goto LAB_00489707;
            }
            iVar8 = iVar8 + 1;
            piVar6 = piVar6 + 5;
          } while (iVar8 < *piVar3);
        }
      }
      param_2 = (undefined4 *)param_2[0xf];
    } while (param_2 != (undefined4 *)0x0);
    if ((local_18 == 0) || (iVar8 = FUN_00488b10(piVar2,local_20), iVar8 == 0)) {
      return 1;
    }
  }
  return 2;
}


/* FUN_0048951a @ 0048951a  kind=gamemisc  attributed-by=none  size=559 */

undefined4 FUN_0048951a(void)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ushort uVar8;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  int *in_EAX;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  byte bVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int unaff_EBX;
  int iVar13;
  int unaff_EBP;
  int unaff_ESI;
  int iVar14;
  undefined4 *unaff_EDI;
  char *pcVar15;
  
  do {
    do {
      uVar8 = FUN_004a69e0((int *)(unaff_EBP + -0x50),*(int *)(unaff_EBX + in_EAX[2]));
      if (CONCAT22(extraout_var_01,uVar8) != 0) {
        return 2;
      }
      in_EAX = *(int **)(unaff_EBP + -0x10);
      unaff_ESI = unaff_ESI + 1;
      unaff_EBX = unaff_EBX + 0x14;
    } while (unaff_ESI < *in_EAX);
    bVar9 = *(byte *)(unaff_EBP + -0x34);
    do {
      psVar2 = (short *)unaff_EDI[10];
      iVar12 = 0;
      *(undefined4 *)(unaff_EBP + -0xc) = 0;
      if (0 < *psVar2) {
        iVar10 = 0;
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
        do {
          iVar13 = unaff_EDI[10] + iVar10;
          if (*(int *)(iVar13 + 0x1c) != 0) {
            iVar12 = *(int *)(unaff_EBP + 0xc);
            iVar10 = *(int *)(unaff_EBP + -8);
            iVar14 = 0;
            *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(iVar12 + 0x204);
            for (iVar3 = iVar10; iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x10)) {
              iVar14 = iVar14 + *(int *)(iVar3 + 0x14);
            }
            if (*(int *)(iVar13 + 0x10) != 0) {
              *(int *)(iVar12 + 0x204) = *(int *)(iVar13 + 0x10);
            }
            puVar4 = *(undefined4 **)(iVar13 + 0x1c);
            *(code **)(unaff_EBP + -0x30) = FUN_00488dd0;
            *(code **)(unaff_EBP + -0x2c) = FUN_00489430;
            *(int *)(unaff_EBP + -0x28) = iVar12;
            *(int *)(unaff_EBP + -0x20) = iVar10;
            FUN_004bb100(unaff_EBP + -0x30,puVar4);
            iVar12 = *(int *)(unaff_EBP + 0xc);
            *(undefined4 *)(iVar12 + 0x204) = *(undefined4 *)(unaff_EBP + -0x18);
            if (*(int *)(iVar12 + 0x44) != 0) {
              return 2;
            }
            if (*(char *)(*(int *)(unaff_EBP + -4) + 0x38) != '\0') {
              return 2;
            }
            for (iVar12 = *(int *)(unaff_EBP + -8); iVar12 != 0; iVar12 = *(int *)(iVar12 + 0x10)) {
              iVar14 = iVar14 - *(int *)(iVar12 + 0x14);
            }
            iVar10 = *(int *)(unaff_EBP + -0x10);
            iVar12 = *(int *)(unaff_EBP + -0xc);
            *(uint *)(iVar13 + 0x2c) =
                 *(uint *)(iVar13 + 0x2c) ^ ((uint)(iVar14 != 0) * 2 ^ *(uint *)(iVar13 + 0x2c)) & 2
            ;
          }
          iVar12 = iVar12 + 1;
          sVar1 = *(short *)unaff_EDI[10];
          iVar10 = iVar10 + 0x48;
          *(int *)(unaff_EBP + -0xc) = iVar12;
          *(int *)(unaff_EBP + -0x10) = iVar10;
        } while (iVar12 < sVar1);
        bVar9 = *(byte *)(unaff_EBP + -0x34);
      }
      piVar5 = (int *)unaff_EDI[0xc];
      if ((piVar5 == (int *)0x0) && ((bVar9 & 2) == 0)) {
        *(byte *)(unaff_EBP + -0x34) = bVar9 & 0xfe;
      }
      else {
        *(ushort *)((int)unaff_EDI + 6) = *(ushort *)((int)unaff_EDI + 6) | 4;
      }
      if ((unaff_EDI[0xd] != 0) && (piVar5 == (int *)0x0)) {
        pcVar15 = "a GROUP BY clause is required before HAVING";
LAB_00489707:
        FUN_004962b0(*(int **)(unaff_EBP + 0xc),(byte *)pcVar15);
        return 2;
      }
      *(undefined4 *)(unaff_EBP + -0x48) = *unaff_EDI;
      uVar8 = FUN_004a69e0((int *)(unaff_EBP + -0x50),unaff_EDI[0xb]);
      if (CONCAT22(extraout_var_02,uVar8) != 0) {
        return 2;
      }
      uVar8 = FUN_004a69e0((int *)(unaff_EBP + -0x50),unaff_EDI[0xd]);
      if (CONCAT22(extraout_var_03,uVar8) != 0) {
        return 2;
      }
      *(byte *)(unaff_EBP + -0x34) = *(byte *)(unaff_EBP + -0x34) | 1;
      *(undefined4 *)(unaff_EBP + -0x40) = 0;
      if ((*(int *)(unaff_EBP + -0x14) == 0) &&
         (iVar12 = FUN_004891f0((int *)(unaff_EBP + -0x50),unaff_EDI,(int *)unaff_EDI[0xe],"ORDER"),
         iVar12 != 0)) {
        return 2;
      }
      iVar12 = *(int *)(unaff_EBP + -4);
      if (*(char *)(iVar12 + 0x38) != '\0') {
        return 2;
      }
      if (piVar5 != (int *)0x0) {
        iVar10 = FUN_004891f0((int *)(unaff_EBP + -0x50),unaff_EDI,piVar5,"GROUP");
        if (iVar10 != 0) {
          return 2;
        }
        if (*(char *)(iVar12 + 0x38) != '\0') {
          return 2;
        }
        piVar11 = (int *)piVar5[2];
        iVar12 = 0;
        if (0 < *piVar5) {
          do {
            if ((*(byte *)(*piVar11 + 2) & 2) != 0) {
              pcVar15 = "aggregate functions are not allowed in the GROUP BY clause";
              goto LAB_00489707;
            }
            iVar12 = iVar12 + 1;
            piVar11 = piVar11 + 5;
          } while (iVar12 < *piVar5);
        }
      }
      unaff_EDI = (undefined4 *)unaff_EDI[0xf];
      if (unaff_EDI == (undefined4 *)0x0) {
        if ((*(int *)(unaff_EBP + -0x14) != 0) &&
           (iVar12 = FUN_00488b10(*(int **)(unaff_EBP + 0xc),*(undefined4 **)(unaff_EBP + -0x1c)),
           iVar12 != 0)) {
          return 2;
        }
        return 1;
      }
      uVar6 = *(undefined4 *)(unaff_EBP + -8);
      uVar7 = *(undefined4 *)(unaff_EBP + 0xc);
      *(ushort *)((int)unaff_EDI + 6) = *(ushort *)((int)unaff_EDI + 6) | 2;
      *(undefined8 *)(unaff_EBP + -0x50) = 0;
      *(undefined8 *)(unaff_EBP + -0x48) = 0;
      *(undefined8 *)(unaff_EBP + -0x40) = 0;
      *(undefined8 *)(unaff_EBP + -0x38) = 0;
      *(undefined4 *)(unaff_EBP + -0x50) = uVar7;
      uVar8 = FUN_004a69e0((int *)(unaff_EBP + -0x50),unaff_EDI[0x12]);
      if (CONCAT22(extraout_var,uVar8) != 0) {
        return 2;
      }
      uVar8 = FUN_004a69e0((int *)(unaff_EBP + -0x50),unaff_EDI[0x13]);
      if (CONCAT22(extraout_var_00,uVar8) != 0) {
        return 2;
      }
      bVar9 = 0;
      *(undefined1 *)(unaff_EBP + -0x34) = 1;
      *(undefined4 *)(unaff_EBP + -0x4c) = unaff_EDI[10];
      *(undefined4 *)(unaff_EBP + -0x40) = uVar6;
      in_EAX = (int *)*unaff_EDI;
      unaff_ESI = 0;
      *(int **)(unaff_EBP + -0x10) = in_EAX;
    } while (*in_EAX < 1);
    unaff_EBX = 0;
  } while( true );
}


/* FUN_00489a0a @ 00489a0a  kind=gamemisc  attributed-by=none  size=33 */

void FUN_00489a0a(void)

{
  uint *in_EAX;
  int unaff_EBP;
  uint unaff_ESI;
  
  do {
    in_EAX = (uint *)FUN_004898d0(in_EAX,*(uint **)(unaff_EBP + -0xb8 + unaff_ESI * 4));
    unaff_ESI = unaff_ESI + 1;
  } while (unaff_ESI < 0x28);
  return;
}


/* FUN_0048a010 @ 0048a010  kind=gamemisc  attributed-by=none  size=105 */

undefined4 __cdecl FUN_0048a010(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint local_8;
  
  local_8 = param_3 & 0x7fffffff;
  iVar1 = (*(code *)PTR_SetFilePointer_005837dc)(*(undefined4 *)(param_1 + 8),param_2,&local_8,0);
  if (iVar1 == -1) {
    iVar1 = (*(code *)PTR_GetLastError_005836a4)();
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x14) = iVar1;
      FUN_004c23f0(0x160a,iVar1);
      return 1;
    }
  }
  return 0;
}


/* FUN_0048a1c0 @ 0048a1c0  kind=gamemisc  attributed-by=none  size=127 */

undefined4 __cdecl FUN_0048a1c0(int param_1,int param_2)

{
  int *piVar1;
  short *psVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  
  if ((*(ushort *)(param_2 + 6) & 0x20) != 0) {
    return 0;
  }
  *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x20;
  piVar1 = *(int **)(param_1 + 8);
  psVar2 = *(short **)(param_2 + 0x28);
  iVar7 = 0;
  if (*psVar2 < 1) {
    return 0;
  }
  piVar6 = (int *)(psVar2 + 0xe);
  do {
    iVar3 = piVar6[-1];
    if ((iVar3 != 0) && ((*(byte *)(iVar3 + 0x2a) & 2) != 0)) {
      piVar4 = (int *)*piVar6;
      for (piVar5 = (int *)((int *)*piVar6)[0xf]; piVar5 != (int *)0x0; piVar5 = (int *)piVar5[0xf])
      {
        piVar4 = piVar5;
      }
      FUN_0048a080(piVar1,(int)*(short *)(iVar3 + 0x26),*(int *)(iVar3 + 4),piVar4);
    }
    iVar7 = iVar7 + 1;
    piVar6 = piVar6 + 0x12;
  } while (iVar7 < *psVar2);
  return 0;
}


/* FUN_0048a3ba @ 0048a3ba  kind=gamemisc  attributed-by=none  size=263 */

undefined4 __fastcall FUN_0048a3ba(undefined4 param_1,byte *param_2)

{
  size_t _Size;
  char cVar1;
  byte bVar2;
  char *_Src;
  byte in_AL;
  char *pcVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  uint unaff_EBX;
  int unaff_EBP;
  byte *unaff_ESI;
  undefined4 *puVar7;
  byte *unaff_EDI;
  int iVar8;
  
  do {
    if ((&DAT_00569620)[in_AL] == (&DAT_00569620)[*unaff_ESI]) {
      in_AL = param_2[1];
      param_2 = param_2 + 1;
      unaff_ESI = unaff_ESI + 1;
      goto joined_r0x0048a3db;
    }
    do {
      if ((&DAT_00569620)[*param_2] == (&DAT_00569620)[*unaff_ESI]) {
        unaff_EDI[unaff_EBX] = 0;
        *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
        unaff_ESI = (byte *)FUN_004a02d0(*(int *)(unaff_EBP + 8),(byte *)"%s:%d");
        FUN_00494b00(*(int *)(unaff_EBP + 8),(undefined4 *)unaff_EDI);
        iVar4 = -1;
        if (unaff_ESI != (byte *)0x0) goto LAB_0048a42a;
LAB_0048a437:
        do {
          puVar7 = *(undefined4 **)(unaff_EBP + -0x1c);
          iVar5 = *(int *)(unaff_EBP + -0x18);
          iVar4 = *(int *)(unaff_EBP + 8);
          *puVar7 = unaff_ESI;
          iVar8 = *(int *)(unaff_EBP + -8) + 1;
          iVar5 = iVar5 + 0x14;
          *(undefined4 **)(unaff_EBP + -0x1c) = puVar7 + 6;
          *(int *)(unaff_EBP + -8) = iVar8;
          *(int *)(unaff_EBP + -0x18) = iVar5;
          if (*(int *)(unaff_EBP + -0xc) <= iVar8) {
LAB_0048a470:
            puVar7 = *(undefined4 **)(unaff_EBP + -4);
            if (*(char *)(iVar4 + 0x38) == '\0') {
              return 0;
            }
            if (0 < iVar8) {
              do {
                FUN_00494b00(iVar4,(undefined4 *)*puVar7);
                puVar7 = puVar7 + 6;
                iVar8 = iVar8 + -1;
              } while (iVar8 != 0);
            }
            FUN_00494b00(iVar4,*(undefined4 **)(unaff_EBP + -4));
            **(undefined4 **)(unaff_EBP + 0x14) = 0;
            **(undefined2 **)(unaff_EBP + 0x10) = 0;
            return 7;
          }
          puVar7 = (undefined4 *)(*(int *)(*(int *)(unaff_EBP + 0xc) + 8) + iVar5);
          for (pcVar3 = (char *)*puVar7;
              (pcVar3 != (char *)0x0 && ((*pcVar3 == '\\' || (*pcVar3 == '\x18'))));
              pcVar3 = *(char **)(pcVar3 + 8)) {
          }
          _Src = (char *)puVar7[1];
          if (_Src == (char *)0x0) {
            cVar1 = *pcVar3;
            while (cVar1 == 'v') {
              pcVar3 = *(char **)(pcVar3 + 0xc);
              cVar1 = *pcVar3;
            }
            unaff_ESI = (byte *)FUN_004a02d0(iVar4,&DAT_0056de50);
          }
          else {
            cVar1 = *_Src;
            pcVar3 = _Src;
            while (cVar1 != '\0') {
              pcVar3 = pcVar3 + 1;
              cVar1 = *pcVar3;
            }
            _Size = ((int)pcVar3 - (int)_Src & 0x3fffffffU) + 1;
            unaff_ESI = (byte *)FUN_00494b90(*(int *)(unaff_EBP + 8),_Size);
            if (unaff_ESI != (byte *)0x0) {
              memcpy(unaff_ESI,_Src,_Size);
            }
            iVar4 = *(int *)(unaff_EBP + 8);
          }
          if (*(char *)(iVar4 + 0x38) != '\0') {
            FUN_00494b00(iVar4,(undefined4 *)unaff_ESI);
            iVar8 = *(int *)(unaff_EBP + -8);
            goto LAB_0048a470;
          }
          unaff_EBX = 0;
          if (unaff_ESI != (byte *)0x0) {
            bVar2 = *unaff_ESI;
            pbVar6 = unaff_ESI;
            while (bVar2 != 0) {
              pbVar6 = pbVar6 + 1;
              bVar2 = *pbVar6;
            }
            unaff_EBX = (int)pbVar6 - (int)unaff_ESI & 0x3fffffff;
          }
          iVar4 = 0;
          *(undefined4 *)(unaff_EBP + -0x10) = 0;
          *(undefined4 *)(unaff_EBP + -0x14) = 0;
        } while (*(int *)(unaff_EBP + -8) < 1);
      }
      else {
        iVar4 = *(int *)(unaff_EBP + -0x14);
        unaff_ESI = unaff_EDI;
LAB_0048a42a:
        iVar4 = iVar4 + 1;
        *(int *)(unaff_EBP + -0x14) = iVar4;
        if (*(int *)(unaff_EBP + -8) <= iVar4) goto LAB_0048a437;
      }
      param_2 = *(byte **)(*(int *)(unaff_EBP + -4) + iVar4 * 0x18);
      in_AL = *param_2;
      unaff_EDI = unaff_ESI;
joined_r0x0048a3db:
    } while (in_AL == 0);
  } while( true );
}


/* FUN_0048b2c0 @ 0048b2c0  kind=gamemisc  attributed-by=none  size=20 */

undefined4 __cdecl FUN_0048b2c0(int param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  return 2;
}


/* FUN_0048b480 @ 0048b480  kind=gamemisc  attributed-by=none  size=118 */

undefined4 __cdecl FUN_0048b480(int param_1,ulonglong *param_2)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  double local_c;
  
  piVar1 = (int *)**(int **)(param_1 + 8);
  if ((*piVar1 < 2) || ((code *)piVar1[0x12] == (code *)0x0)) {
    iVar2 = (*(code *)piVar1[0x10])(piVar1,&local_c);
    local_c = local_c * 86400000.0;
    uVar3 = FUN_0054a946();
    *param_2 = uVar3;
  }
  else {
    iVar2 = (*(code *)piVar1[0x12])(piVar1,param_2);
  }
  if (iVar2 == 0) {
    *(undefined1 *)((int)param_2 + 0x2a) = 1;
    return 0;
  }
  return 1;
}


/* FUN_0048b660 @ 0048b660  kind=gamemisc  attributed-by=none  size=277 */

undefined4 __cdecl FUN_0048b660(int param_1,undefined4 *param_2,uint param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0xec) != 0) {
    return 5;
  }
  if (*(char *)(param_1 + 0xeb) != '\0') {
    FUN_00466dd0(*(int *)(param_1 + 0x104));
  }
  uVar3 = param_3 & 0xfffffff8;
  if ((int)uVar3 < 5) {
    uVar3 = 0;
  }
  if (param_4 < 0) {
    param_4 = 0;
  }
  if ((uVar3 == 0) || (param_4 == 0)) {
    uVar3 = 0;
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = param_2;
    if (param_2 == (undefined4 *)0x0) {
      if (DAT_00583e74 != (code *)0x0) {
        (*DAT_00583e74)();
      }
      puVar1 = (undefined4 *)FUN_004a0350(uVar3 * param_4);
      if (DAT_00583e78 != (code *)0x0) {
        (*DAT_00583e78)();
      }
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = (*DAT_00582af0._4_4_)(puVar1);
        param_4 = iVar2 / (int)uVar3;
      }
    }
  }
  *(undefined4 **)(param_1 + 0x104) = puVar1;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(short *)(param_1 + 0xe8) = (short)uVar3;
  if (puVar1 == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x108) = 0;
    *(undefined2 *)(param_1 + 0xea) = 0;
    return 0;
  }
  while (param_4 = param_4 + -1, -1 < param_4) {
    *puVar1 = *(undefined4 *)(param_1 + 0x100);
    *(undefined4 **)(param_1 + 0x100) = puVar1;
    puVar1 = (undefined4 *)((int)puVar1 + uVar3);
  }
  *(undefined4 **)(param_1 + 0x108) = puVar1;
  *(bool *)(param_1 + 0xeb) = param_2 == (undefined4 *)0x0;
  *(undefined1 *)(param_1 + 0xea) = 1;
  return 0;
}


/* FUN_0048be0a @ 0048be0a  kind=gamemisc  attributed-by=none  size=48 */

void __fastcall FUN_0048be0a(int param_1)

{
  ushort *puVar1;
  int *piVar2;
  int in_EAX;
  byte *pbVar3;
  int iVar4;
  int *piVar5;
  byte bVar6;
  int iVar7;
  int unaff_EBX;
  undefined4 *puVar8;
  int unaff_EBP;
  uint *unaff_ESI;
  byte *pbVar9;
  int iVar10;
  
  do {
    iVar7 = (int)*(short *)(unaff_EBX + 0x26);
    iVar10 = 0;
    *(int *)(unaff_EBP + -0xc) = iVar7;
    if (0 < iVar7) {
      puVar8 = *(undefined4 **)(unaff_EBX + 4);
      pbVar3 = *(byte **)(unaff_ESI[2] + 4 + param_1);
      *(byte **)(unaff_EBP + -0x10) = pbVar3;
      do {
        bVar6 = *pbVar3;
        pbVar9 = (byte *)*puVar8;
        if (bVar6 != 0) {
          do {
            if ((&DAT_00569620)[bVar6] != (&DAT_00569620)[*pbVar9]) break;
            bVar6 = pbVar3[1];
            pbVar3 = pbVar3 + 1;
            pbVar9 = pbVar9 + 1;
          } while (bVar6 != 0);
          iVar7 = *(int *)(unaff_EBP + -0xc);
        }
        if ((&DAT_00569620)[*pbVar3] == (&DAT_00569620)[*pbVar9]) break;
        pbVar3 = *(byte **)(unaff_EBP + -0x10);
        iVar10 = iVar10 + 1;
        puVar8 = puVar8 + 6;
      } while (iVar10 < iVar7);
      unaff_EBX = *(int *)(unaff_EBP + -0x14);
      unaff_ESI = *(uint **)(unaff_EBP + 0xc);
      in_EAX = *(int *)(unaff_EBP + -4);
      param_1 = *(int *)(unaff_EBP + -8);
    }
    if (iVar10 < iVar7) {
      puVar1 = (ushort *)(*(int *)(unaff_EBX + 4) + 0x16 + iVar10 * 0x18);
      *puVar1 = *puVar1 | 1;
      in_EAX = *(int *)(unaff_EBP + -4);
      param_1 = *(int *)(unaff_EBP + -8);
    }
    in_EAX = in_EAX + 1;
    param_1 = param_1 + 0x14;
    *(int *)(unaff_EBP + -4) = in_EAX;
    *(int *)(unaff_EBP + -8) = param_1;
    if ((int)*unaff_ESI <= in_EAX) {
      if (((((int)*unaff_ESI < 2) && (-1 < iVar10)) && (iVar10 < *(short *)(unaff_EBX + 0x26))) &&
         (pbVar3 = *(byte **)(*(int *)(unaff_EBX + 4) + 0xc + iVar10 * 0x18), pbVar3 != (byte *)0x0)
         ) {
        iVar4 = FUN_004bcc60(pbVar3,(byte *)"INTEGER");
        iVar7 = *(int *)(unaff_EBP + 0x18);
        if ((iVar4 == 0) && (iVar7 == 0)) {
          *(undefined1 *)(unaff_EBX + 0x2b) = *(undefined1 *)(unaff_EBP + 0x10);
          *(byte *)(unaff_EBX + 0x2a) =
               *(byte *)(unaff_EBX + 0x2a) | *(char *)(unaff_EBP + 0x14) << 3;
          *(short *)(unaff_EBX + 0x24) = (short)iVar10;
          FUN_00499060(**(int **)(unaff_EBP + 8),(int *)unaff_ESI);
          return;
        }
      }
      else {
        iVar7 = *(int *)(unaff_EBP + 0x18);
      }
      piVar2 = *(int **)(unaff_EBP + 8);
      if (*(int *)(unaff_EBP + 0x14) == 0) {
        piVar5 = FUN_004940f0(piVar2,(undefined4 *)0x0,0,(short *)0x0,unaff_ESI,
                              *(int *)(unaff_EBP + 0x10),0,0,(char)iVar7,0);
        if (piVar5 != (int *)0x0) {
          *(undefined1 *)((int)piVar5 + 0x2d) = 2;
        }
        FUN_00499060(*piVar2,(int *)0x0);
        return;
      }
      FUN_004962b0(piVar2,(byte *)"AUTOINCREMENT is only allowed on an INTEGER PRIMARY KEY");
      FUN_00499060(*piVar2,(int *)unaff_ESI);
      return;
    }
  } while( true );
}


/* FUN_0048be3a @ 0048be3a  kind=gamemisc  attributed-by=none  size=303 */

void __fastcall FUN_0048be3a(byte param_1)

{
  ushort *puVar1;
  int iVar2;
  uint *puVar3;
  byte *pbVar4;
  int *piVar5;
  byte *in_EAX;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined4 *unaff_EBX;
  int unaff_EBP;
  byte *unaff_ESI;
  int unaff_EDI;
  
LAB_0048be40:
  if ((&DAT_00569620)[param_1] == (&DAT_00569620)[*unaff_ESI]) goto code_r0x0048be54;
  goto LAB_0048be5d;
code_r0x0048be54:
  param_1 = in_EAX[1];
  in_EAX = in_EAX + 1;
  unaff_ESI = unaff_ESI + 1;
  if (param_1 == 0) {
LAB_0048be5d:
    iVar9 = *(int *)(unaff_EBP + -0xc);
    do {
      if ((&DAT_00569620)[*in_EAX] == (&DAT_00569620)[*unaff_ESI]) {
LAB_0048be83:
        iVar2 = *(int *)(unaff_EBP + -0x14);
        puVar3 = *(uint **)(unaff_EBP + 0xc);
        iVar6 = *(int *)(unaff_EBP + -4);
        iVar8 = *(int *)(unaff_EBP + -8);
        do {
          if (unaff_EDI < iVar9) {
            puVar1 = (ushort *)(*(int *)(iVar2 + 4) + 0x16 + unaff_EDI * 0x18);
            *puVar1 = *puVar1 | 1;
            iVar6 = *(int *)(unaff_EBP + -4);
            iVar8 = *(int *)(unaff_EBP + -8);
          }
          iVar6 = iVar6 + 1;
          iVar8 = iVar8 + 0x14;
          *(int *)(unaff_EBP + -4) = iVar6;
          *(int *)(unaff_EBP + -8) = iVar8;
          if ((int)*puVar3 <= iVar6) {
            if (((((int)*puVar3 < 2) && (-1 < unaff_EDI)) && (unaff_EDI < *(short *)(iVar2 + 0x26)))
               && (pbVar4 = *(byte **)(*(int *)(iVar2 + 4) + 0xc + unaff_EDI * 0x18),
                  pbVar4 != (byte *)0x0)) {
              iVar6 = FUN_004bcc60(pbVar4,(byte *)"INTEGER");
              iVar9 = *(int *)(unaff_EBP + 0x18);
              if ((iVar6 == 0) && (iVar9 == 0)) {
                *(undefined1 *)(iVar2 + 0x2b) = *(undefined1 *)(unaff_EBP + 0x10);
                *(byte *)(iVar2 + 0x2a) = *(byte *)(iVar2 + 0x2a) | *(char *)(unaff_EBP + 0x14) << 3
                ;
                *(short *)(iVar2 + 0x24) = (short)unaff_EDI;
                FUN_00499060(**(int **)(unaff_EBP + 8),(int *)puVar3);
                return;
              }
            }
            else {
              iVar9 = *(int *)(unaff_EBP + 0x18);
            }
            piVar5 = *(int **)(unaff_EBP + 8);
            if (*(int *)(unaff_EBP + 0x14) == 0) {
              piVar7 = FUN_004940f0(piVar5,(undefined4 *)0x0,0,(short *)0x0,puVar3,
                                    *(int *)(unaff_EBP + 0x10),0,0,(char)iVar9,0);
              if (piVar7 != (int *)0x0) {
                *(undefined1 *)((int)piVar7 + 0x2d) = 2;
              }
              FUN_00499060(*piVar5,(int *)0x0);
              return;
            }
            FUN_004962b0(piVar5,(byte *)"AUTOINCREMENT is only allowed on an INTEGER PRIMARY KEY");
            FUN_00499060(*piVar5,(int *)puVar3);
            return;
          }
          iVar9 = (int)*(short *)(iVar2 + 0x26);
          unaff_EDI = 0;
          *(int *)(unaff_EBP + -0xc) = iVar9;
        } while (iVar9 < 1);
        unaff_EBX = *(undefined4 **)(iVar2 + 4);
        in_EAX = *(byte **)(puVar3[2] + 4 + iVar8);
        *(byte **)(unaff_EBP + -0x10) = in_EAX;
      }
      else {
        in_EAX = *(byte **)(unaff_EBP + -0x10);
        unaff_EDI = unaff_EDI + 1;
        unaff_EBX = unaff_EBX + 6;
        if (iVar9 <= unaff_EDI) goto LAB_0048be83;
      }
      param_1 = *in_EAX;
      unaff_ESI = (byte *)*unaff_EBX;
    } while (param_1 == 0);
  }
  goto LAB_0048be40;
}


/* FUN_0048d6f0 @ 0048d6f0  kind=gamemisc  attributed-by=none  size=196 */

void __cdecl FUN_0048d6f0(int param_1)

{
  bool bVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int local_8;
  
  bVar1 = true;
  if (DAT_00583e68 != 0) {
    iVar4 = 0;
    do {
      if (DAT_00582acc == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*DAT_00582b10)(2);
        if (iVar3 != 0) {
          (*DAT_00582b18)(iVar3);
        }
      }
      if (iVar4 < DAT_00583e68) {
        pcVar2 = *(code **)(DAT_00583e6c + iVar4 * 4);
      }
      else {
        pcVar2 = (code *)0x0;
        bVar1 = false;
      }
      if (iVar3 != 0) {
        (*DAT_00582b20)(iVar3);
      }
      local_8 = 0;
      if ((pcVar2 != (code *)0x0) &&
         (iVar3 = (*pcVar2)(param_1,&local_8,&PTR_FUN_0056a290), iVar3 != 0)) {
        FUN_004961f0(param_1,iVar3,(byte *)"automatic extension loading failed: %s");
        bVar1 = false;
      }
      FUN_00466dd0(local_8);
      iVar4 = iVar4 + 1;
    } while (bVar1);
  }
  return;
}


/* FUN_0048e670 @ 0048e670  kind=gamemisc  attributed-by=none  size=584 */

uint __cdecl FUN_0048e670(uint param_1,uint *param_2)

{
  void *pvVar1;
  undefined1 uVar2;
  byte bVar3;
  bool bVar4;
  uint *_Dst;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  byte *pbVar8;
  size_t _Size;
  uint *puVar9;
  uint uVar10;
  int local_24;
  int local_1c;
  uint local_18;
  uint local_10;
  int local_c;
  void *local_8;
  
  local_18 = 0xffffffff;
  _Dst = (uint *)FUN_004a0350(0x200);
  if (_Dst != (uint *)0x0) {
    memset(_Dst,0,0x200);
    *_Dst = param_1;
  }
  _Size = ((int)(((int)(param_1 + 7) >> 0x1f & 7U) + param_1 + 7) >> 3) + 1;
  local_8 = (void *)FUN_004a0350(_Size);
  if (local_8 != (void *)0x0) {
    memset(local_8,0,_Size);
  }
  iVar5 = FUN_004bc920();
  if (iVar5 == 0) {
    puVar6 = (uint *)FUN_004a0350(0x200);
  }
  else {
    puVar6 = (uint *)0x0;
  }
  if (((_Dst != (uint *)0x0) && (local_8 != (void *)0x0)) && (puVar6 != (uint *)0x0)) {
    uVar7 = *param_2;
    local_c = 0;
    while (uVar7 != 0) {
      if (((int)uVar7 < 1) || ((2 < (int)uVar7 && (uVar7 != 5)))) {
        local_24 = 2;
        iVar5 = 4;
        puVar9 = &local_10;
        if (DAT_00582acc == 0) {
          local_1c = 0;
        }
        else {
          local_1c = (*DAT_00582b10)(5);
          if (local_1c != 0) {
            (*DAT_00582b18)(local_1c);
          }
        }
        do {
          uVar2 = FUN_00487580();
          *(undefined1 *)puVar9 = uVar2;
          puVar9 = (uint *)((int)puVar9 + 1);
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        if (local_1c != 0) {
          (*DAT_00582b20)(local_1c);
        }
      }
      else {
        local_10 = param_2[local_c + 2] - 1;
        local_24 = 4;
        param_2[local_c + 2] = param_2[local_c + 3] + param_2[local_c + 2];
      }
      param_2[local_c + 1] = param_2[local_c + 1] - 1;
      if (0 < (int)param_2[local_c + 1]) {
        local_24 = 0;
      }
      local_c = local_c + local_24;
      local_10 = (uint)((longlong)(ulonglong)(local_10 & 0x7fffffff) % (longlong)(int)param_1);
      uVar10 = local_10 + 1;
      pbVar8 = (byte *)(((int)uVar10 >> 3) + (int)local_8);
      bVar3 = '\x01' << ((byte)uVar10 & 7);
      if ((uVar7 & 1) == 0) {
        *pbVar8 = *pbVar8 & ~bVar3;
        FUN_0048e8c0(_Dst,uVar10,puVar6);
      }
      else {
        *pbVar8 = *pbVar8 | bVar3;
        if ((uVar7 != 5) && (uVar7 = FUN_0048ea60(_Dst,uVar10), uVar7 != 0)) goto LAB_0048e896;
      }
      uVar7 = param_2[local_c];
    }
    bVar4 = FUN_0048ec40(_Dst,param_1 + 1);
    pvVar1 = local_8;
    uVar7 = CONCAT31(extraout_var,bVar4) + (*_Dst - param_1);
    uVar10 = 1;
    local_18 = uVar7;
    if (0 < (int)param_1) {
      do {
        bVar4 = FUN_0048ec40(_Dst,uVar10);
        local_18 = uVar10;
        if ((uint)((*(byte *)(((int)uVar10 >> 3) + (int)pvVar1) & (byte)(1 << ((byte)uVar10 & 7)))
                  != 0) != CONCAT31(extraout_var_00,bVar4)) break;
        uVar10 = uVar10 + 1;
        local_18 = uVar7;
      } while ((int)uVar10 <= (int)param_1);
    }
  }
LAB_0048e896:
  FUN_00466dd0((int)puVar6);
  FUN_00466dd0((int)local_8);
  FUN_0048e9a0((int)_Dst);
  return local_18;
}


/* FUN_0048fb0a @ 0048fb0a  kind=gamemisc  attributed-by=none  size=77 */

int FUN_0048fb0a(void)

{
  int iVar1;
  int *unaff_ESI;
  int unaff_EDI;
  
  do {
    iVar1 = unaff_ESI[*(short *)((int)unaff_ESI + 0x5e) + 0x22];
    *(short *)((int)unaff_ESI + 0x5e) = *(short *)((int)unaff_ESI + 0x5e) + -1;
    FUN_004880a0(iVar1);
  } while (unaff_EDI < *(short *)((int)unaff_ESI + 0x5e));
  iVar1 = FUN_0046e520((int)unaff_ESI);
  if (iVar1 == 0) {
    FUN_00480c70(unaff_ESI);
  }
  return iVar1;
}


/* FUN_004907e0 @ 004907e0  kind=gamemisc  attributed-by=none  size=47 */

void __cdecl FUN_004907e0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_1;
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
  return;
}


/* FUN_00491620 @ 00491620  kind=gamemisc  attributed-by=none  size=140 */

uint __cdecl FUN_00491620(int *param_1,uint param_2,size_t param_3,void *param_4)

{
  uint uVar1;
  
  if (*(byte *)((int)param_1 + 0x5b) < 2) {
    uVar1 = 0;
  }
  else if (*(byte *)((int)param_1 + 0x5b) == 3) {
    uVar1 = param_1[0x15];
  }
  else {
    *(undefined1 *)((int)param_1 + 0x5b) = 0;
    uVar1 = FUN_004715a0(param_1,(byte *)param_1[0x14],param_1[0x12],param_1[0x13],0,
                         (uint *)(param_1 + 0x15));
    if (uVar1 != 0) {
      return uVar1;
    }
    FUN_00466dd0(param_1[0x14]);
    param_1[0x14] = 0;
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    return uVar1;
  }
  if (*(char *)((int)param_1 + 0x5b) != '\x01') {
    return 4;
  }
  if ((char)param_1[0x16] != '\0') {
    uVar1 = FUN_0046b2f0((int)param_1,param_2,param_3,param_4,1);
    return uVar1;
  }
  return 8;
}


/* FUN_00491f10 @ 00491f10  kind=gamemisc  attributed-by=none  size=67 */

undefined1 __cdecl FUN_00491f10(undefined4 *param_1)

{
  undefined1 uVar1;
  int *piVar2;
  
  piVar2 = (int *)param_1[1];
  FUN_0048fbc0(param_1);
  uVar1 = *(undefined1 *)(*piVar2 + 7);
  if (*(char *)((int)param_1 + 9) != '\0') {
    piVar2 = param_1 + 3;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      if (*(int *)(param_1[1] + 0x38) != 0) {
        (*DAT_00582b20)(*(int *)(param_1[1] + 0x38));
      }
      *(undefined1 *)((int)param_1 + 10) = 0;
    }
  }
  return uVar1;
}


/* FUN_00492650 @ 00492650  kind=gamemisc  attributed-by=none  size=178 */

void __cdecl FUN_00492650(int *param_1)

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
    iVar2 = (*DAT_00582af0._4_4_)(piVar1);
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
  FUN_00466dd0((int)piVar1);
  return;
}


/* FUN_00496e0a @ 00496e0a  kind=gamemisc  attributed-by=none  size=286 */

void __fastcall FUN_00496e0a(undefined4 *param_1)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int unaff_EBP;
  int unaff_ESI;
  
  do {
    if (param_1[4] == 0) {
      param_1[3] = *(undefined4 *)(unaff_ESI + 0x5c);
      *param_1 = *(undefined4 *)(unaff_EBP + 0xc);
      param_1[1] = *(undefined4 *)(unaff_EBP + 0x10);
      param_1[4] = *(undefined4 *)(unaff_EBP + 0x14);
      *(undefined1 *)(param_1 + 2) = 0;
      param_1[5] = *(undefined4 *)(unaff_ESI + 0x60);
      *(int *)(unaff_ESI + 0x60) = *(int *)(unaff_ESI + 0x60) + 1;
      return;
    }
    in_EAX = in_EAX + 1;
    param_1 = param_1 + 6;
  } while (in_EAX < 10);
  iVar2 = -1;
  iVar1 = 0x7fffffff;
  if (*(int *)(unaff_ESI + 0x78) < 0x7fffffff) {
    iVar2 = 0;
    iVar1 = *(int *)(unaff_ESI + 0x78);
  }
  if (*(int *)(unaff_ESI + 0x90) < iVar1) {
    iVar2 = 1;
    iVar1 = *(int *)(unaff_ESI + 0x90);
  }
  if (*(int *)(unaff_ESI + 0xa8) < iVar1) {
    iVar2 = 2;
    iVar1 = *(int *)(unaff_ESI + 0xa8);
  }
  if (*(int *)(unaff_ESI + 0xc0) < iVar1) {
    iVar2 = 3;
    iVar1 = *(int *)(unaff_ESI + 0xc0);
  }
  if (*(int *)(unaff_ESI + 0xd8) < iVar1) {
    iVar2 = 4;
    iVar1 = *(int *)(unaff_ESI + 0xd8);
  }
  if (*(int *)(unaff_ESI + 0xf0) < iVar1) {
    iVar2 = 5;
    iVar1 = *(int *)(unaff_ESI + 0xf0);
  }
  if (*(int *)(unaff_ESI + 0x108) < iVar1) {
    iVar2 = 6;
    iVar1 = *(int *)(unaff_ESI + 0x108);
  }
  if (*(int *)(unaff_ESI + 0x120) < iVar1) {
    iVar2 = 7;
    iVar1 = *(int *)(unaff_ESI + 0x120);
  }
  if (*(int *)(unaff_ESI + 0x138) < iVar1) {
    iVar2 = 8;
    iVar1 = *(int *)(unaff_ESI + 0x138);
  }
  if (*(int *)(unaff_ESI + 0x150) < iVar1) {
    iVar2 = 9;
  }
  else if (iVar2 < 0) {
    return;
  }
  iVar1 = unaff_ESI + iVar2 * 0x18;
  *(undefined4 *)(iVar1 + 0x70) = *(undefined4 *)(unaff_ESI + 0x5c);
  *(undefined4 *)(iVar1 + 100) = *(undefined4 *)(unaff_EBP + 0xc);
  *(undefined4 *)(iVar1 + 0x68) = *(undefined4 *)(unaff_EBP + 0x10);
  *(undefined4 *)(iVar1 + 0x74) = *(undefined4 *)(unaff_EBP + 0x14);
  *(undefined1 *)(iVar1 + 0x6c) = 0;
  *(undefined4 *)(iVar1 + 0x78) = *(undefined4 *)(unaff_ESI + 0x60);
  *(int *)(unaff_ESI + 0x60) = *(int *)(unaff_ESI + 0x60) + 1;
  return;
}


/* FUN_004975c0 @ 004975c0  kind=gamemisc  attributed-by=none  size=63 */

void __cdecl FUN_004975c0(int *param_1,byte *param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  
  for (; (*param_2 == 0x9d || (*param_2 == 0x9c)); param_2 = *(byte **)(param_2 + 8)) {
  }
  bVar1 = *param_2;
  if (bVar1 == 0x84) {
    bVar1 = param_2[0x23];
  }
  if ((bVar1 != 0x5e) && ((bVar1 < 0x81 || (0x83 < bVar1)))) {
    FUN_004ae830(param_1,0x49,param_3,param_4);
    return;
  }
  return;
}


/* FUN_004993e0 @ 004993e0  kind=gamemisc  attributed-by=none  size=106 */

bool __cdecl FUN_004993e0(char *param_1,char param_2)

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
      goto switchD_0049941f_caseD_5f;
    case -0x7e:
      bVar2 = param_2 == 'e';
      break;
    case -0x7d:
      goto switchD_0049941f_caseD_83;
    case -0x68:
      if (-1 < *(short *)(param_1 + 0x1c)) {
        return false;
      }
    case -0x7f:
      bVar2 = param_2 == 'd';
    }
    if ((!bVar2) && (param_2 != 'c')) {
switchD_0049941f_caseD_5f:
      return false;
    }
  }
switchD_0049941f_caseD_83:
  return true;
}


/* FUN_00499b6a @ 00499b6a  kind=gamemisc  attributed-by=none  size=197 */

int __fastcall FUN_00499b6a(undefined4 param_1,byte *param_2)

{
  int iVar1;
  byte in_AL;
  undefined4 *puVar2;
  uint *puVar3;
  byte *pbVar4;
  uint uVar5;
  int unaff_EBX;
  int unaff_EBP;
  byte *unaff_ESI;
  int iVar6;
  uint unaff_EDI;
  
  do {
    if ((&DAT_00569620)[in_AL] == (&DAT_00569620)[*unaff_ESI]) {
      in_AL = param_2[1];
      param_2 = param_2 + 1;
      unaff_ESI = unaff_ESI + 1;
      goto joined_r0x00499b8b;
    }
    do {
      if ((&DAT_00569620)[*param_2] != (&DAT_00569620)[*unaff_ESI]) {
        iVar6 = *(int *)(unaff_EBP + -4);
        goto LAB_00499c1b;
      }
      iVar6 = *(int *)(unaff_EBP + 8);
      pbVar4 = *(byte **)(unaff_EBP + 0xc);
      do {
        puVar3 = (uint *)(iVar6 + 0x18);
        *(uint **)(unaff_EBP + 8) = puVar3;
        if (*(int *)(iVar6 + 0x24) == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = 0;
          iVar6 = unaff_EBX;
          if (0 < unaff_EBX) {
            do {
              iVar6 = iVar6 + -1;
              uVar5 = uVar5 ^ (uint)(byte)(&DAT_00569620)[*pbVar4] ^ uVar5 * 8;
              pbVar4 = pbVar4 + 1;
            } while (0 < iVar6);
            puVar3 = *(uint **)(unaff_EBP + 8);
          }
          unaff_EDI = *(uint *)(unaff_EBP + -8);
          uVar5 = uVar5 % *puVar3;
        }
        puVar2 = FUN_00479af0((int)puVar3,*(byte **)(unaff_EBP + 0xc),unaff_EBX,uVar5);
        if (puVar2 == (undefined4 *)0x0) {
          iVar6 = 0;
          *(undefined4 *)(unaff_EBP + -4) = 0;
        }
        else {
          iVar1 = puVar2[2];
          *(int *)(unaff_EBP + -4) = iVar1;
          iVar6 = 0;
          if (iVar1 != 0) {
            return iVar1;
          }
        }
LAB_00499c1b:
        unaff_EDI = unaff_EDI + 1;
        *(uint *)(unaff_EBP + -8) = unaff_EDI;
        if (*(int *)(unaff_EBP + -0xc) <= (int)unaff_EDI) {
          return iVar6;
        }
        pbVar4 = *(byte **)(unaff_EBP + 0xc);
        uVar5 = unaff_EDI;
        if ((int)unaff_EDI < 2) {
          uVar5 = unaff_EDI ^ 1;
        }
        iVar6 = *(int *)(uVar5 * 0x10 + 0xc + *(int *)(unaff_EBP + -0x10));
        *(int *)(unaff_EBP + 8) = iVar6;
      } while (*(int *)(unaff_EBP + 0x10) == 0);
      param_2 = *(byte **)(unaff_EBP + 0x10);
      unaff_ESI = *(byte **)(uVar5 * 0x10 + *(int *)(unaff_EBP + -0x10));
      in_AL = *param_2;
joined_r0x00499b8b:
    } while (in_AL == 0);
  } while( true );
}


/* FUN_00499c9a @ 00499c9a  kind=gamemisc  attributed-by=none  size=214 */

int __fastcall FUN_00499c9a(undefined4 param_1,byte *param_2)

{
  int iVar1;
  byte in_AL;
  undefined4 *puVar2;
  uint *puVar3;
  byte *pbVar4;
  uint uVar5;
  int unaff_EBX;
  int unaff_EBP;
  byte *unaff_ESI;
  int iVar6;
  uint unaff_EDI;
  
  do {
    if ((&DAT_00569620)[in_AL] == (&DAT_00569620)[*unaff_ESI]) {
      in_AL = param_2[1];
      param_2 = param_2 + 1;
      unaff_ESI = unaff_ESI + 1;
      goto joined_r0x00499cbb;
    }
    do {
      if ((&DAT_00569620)[*param_2] != (&DAT_00569620)[*unaff_ESI]) {
        iVar6 = *(int *)(unaff_EBP + -4);
        goto LAB_00499d59;
      }
      pbVar4 = *(byte **)(unaff_EBP + 0xc);
      iVar6 = *(int *)(unaff_EBP + 8);
      do {
        iVar6 = *(int *)(*(int *)(iVar6 + 0x10) + 0xc + unaff_EDI * 0x10);
        puVar3 = (uint *)(iVar6 + 8);
        *(uint **)(unaff_EBP + -4) = puVar3;
        if (*(int *)(iVar6 + 0x14) == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = 0;
          iVar6 = unaff_EBX;
          if (0 < unaff_EBX) {
            do {
              iVar6 = iVar6 + -1;
              uVar5 = uVar5 ^ (uint)(byte)(&DAT_00569620)[*pbVar4] ^ uVar5 * 8;
              pbVar4 = pbVar4 + 1;
            } while (0 < iVar6);
            puVar3 = *(uint **)(unaff_EBP + -4);
          }
          uVar5 = uVar5 % *puVar3;
        }
        puVar2 = FUN_00479af0((int)puVar3,*(byte **)(unaff_EBP + 0xc),unaff_EBX,uVar5);
        if (puVar2 == (undefined4 *)0x0) {
          iVar6 = 0;
          *(undefined4 *)(unaff_EBP + -4) = 0;
        }
        else {
          iVar1 = puVar2[2];
          *(int *)(unaff_EBP + -4) = iVar1;
          iVar6 = 0;
          if (iVar1 != 0) {
            return iVar1;
          }
        }
LAB_00499d59:
        unaff_EDI = *(int *)(unaff_EBP + -8) + 1;
        *(uint *)(unaff_EBP + -8) = unaff_EDI;
        if (*(int *)(unaff_EBP + -0xc) <= (int)unaff_EDI) {
          return iVar6;
        }
        pbVar4 = *(byte **)(unaff_EBP + 0xc);
        iVar6 = *(int *)(unaff_EBP + 8);
        if ((int)unaff_EDI < 2) {
          unaff_EDI = unaff_EDI ^ 1;
        }
        param_2 = *(byte **)(unaff_EBP + 0x10);
      } while (param_2 == (byte *)0x0);
      unaff_ESI = *(byte **)(*(int *)(iVar6 + 0x10) + unaff_EDI * 0x10);
      in_AL = *param_2;
joined_r0x00499cbb:
    } while (in_AL == 0);
  } while( true );
}


/* FUN_0049a9aa @ 0049a9aa  kind=gamemisc  attributed-by=none  size=337 */

void FUN_0049a9aa(void)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  int *unaff_EBX;
  int unaff_EBP;
  int *unaff_ESI;
  int unaff_EDI;
  
  do {
    iVar2 = unaff_ESI[6];
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + 8) = 0;
    if ((((char)iVar2 != '\0') || (unaff_EBX[0x6c] != 0)) ||
       (*(char *)((int)unaff_EBX + 0x17) != '\0')) {
      iVar2 = FUN_0047f9a0(unaff_EBX,unaff_EDI,(int)unaff_ESI,(int *)(unaff_EBP + -0x18),
                           (undefined4 *)(unaff_EBP + 8));
      if (iVar2 == 0) {
        psVar3 = (short *)FUN_00494b90(*(int *)(unaff_EBP + -4),0x50);
        if (psVar3 != (short *)0x0) {
          memset(psVar3,0,0x50);
          psVar3[1] = 1;
          psVar3 = FUN_004a9fc0(*(int *)(unaff_EBP + -4),psVar3,1,(int)*psVar3);
          iVar2 = *(int *)(unaff_EBP + -4);
          if (*(char *)(iVar2 + 0x38) == '\0') {
            sVar1 = *psVar3;
            iVar2 = *(int *)(unaff_EBP + 0x14);
            (psVar3 + sVar1 * 0x24 + -0x1c)[0] = 0;
            (psVar3 + sVar1 * 0x24 + -0x1c)[1] = 0;
            (psVar3 + sVar1 * 0x24 + -0x1e)[0] = 0;
            (psVar3 + sVar1 * 0x24 + -0x1e)[1] = 0;
            *(int *)(psVar3 + 0xc) = *unaff_ESI;
            *(undefined4 *)(psVar3 + 8) = *(undefined4 *)*unaff_ESI;
            *(short *)(*(int *)(psVar3 + 0xc) + 0x28) =
                 *(short *)(*(int *)(psVar3 + 0xc) + 0x28) + 1;
            *(int *)(psVar3 + 0x1a) = unaff_EBX[0x12];
            unaff_EBX[0x12] = unaff_EBX[0x12] + 1;
            iVar4 = *(int *)(unaff_EBP + -0x18);
            if (iVar2 != 0) {
              FUN_0047afc0(unaff_EBX,psVar3,*(int *)(unaff_EBP + 0xc),iVar4,unaff_ESI,
                           *(int *)(unaff_EBP + 8),iVar2,-1);
              iVar4 = *(int *)(unaff_EBP + -0x18);
            }
            if (*(int *)(unaff_EBP + 0x10) != 0) {
              FUN_0047afc0(unaff_EBX,psVar3,*(int *)(unaff_EBP + 0xc),iVar4,unaff_ESI,
                           *(int *)(unaff_EBP + 8),*(int *)(unaff_EBP + 0x10),1);
            }
            iVar2 = *(int *)(unaff_EBP + -4);
            psVar3[8] = 0;
            psVar3[9] = 0;
          }
          FUN_004a9cb0(iVar2,psVar3);
        }
        FUN_00494b00(*(int *)(unaff_EBP + -4),*(undefined4 **)(unaff_EBP + 8));
      }
      else {
        if (*(int *)(unaff_EBP + -0x20) == 0) {
          return;
        }
        if (*(char *)(*(int *)(unaff_EBP + -4) + 0x38) != '\0') {
          return;
        }
      }
    }
    unaff_ESI = (int *)unaff_ESI[3];
    unaff_EDI = *(int *)(unaff_EBP + 0xc);
    if (unaff_ESI == (int *)0x0) {
      return;
    }
  } while( true );
}


/* FUN_0049d5fa @ 0049d5fa  kind=gamemisc  attributed-by=none  size=162 */

void FUN_0049d5fa(void)

{
  int *piVar1;
  int in_EAX;
  int iVar2;
  int unaff_EBX;
  int *unaff_ESI;
  
  do {
    piVar1 = (int *)*unaff_ESI;
    if (DAT_00582ac8 == 0) {
      (*DAT_00582aec)(unaff_ESI);
    }
    else {
      if (in_EAX != 0) {
        (*DAT_00582b18)(in_EAX);
      }
      iVar2 = (*DAT_00582af0._4_4_)(unaff_ESI);
      DAT_00583e18 = DAT_00583e18 - iVar2;
      if (DAT_00583e40 < DAT_00583e18) {
        DAT_00583e40 = DAT_00583e18;
      }
      DAT_00583e3c = DAT_00583e3c + -1;
      if (DAT_00583e64 < DAT_00583e3c) {
        DAT_00583e64 = DAT_00583e3c;
      }
      (*DAT_00582aec)(unaff_ESI);
      if (DAT_00583f40 != 0) {
        (*DAT_00582b20)(DAT_00583f40);
      }
    }
    in_EAX = DAT_00583f40;
    unaff_ESI = piVar1;
  } while (piVar1 != (int *)0x0);
  *(undefined4 *)(unaff_EBX + 4) = 0;
  return;
}


/* FUN_0049f6a0 @ 0049f6a0  kind=gamemisc  attributed-by=none  size=220 */

void __cdecl FUN_0049f6a0(int param_1)

{
  int *piVar1;
  void *_Src;
  int iVar2;
  int iVar3;
  
  _Src = (void *)FUN_004666d0((byte *)"unable to use function %s in the requested context");
  *(undefined4 *)(param_1 + 0x38) = 1;
  if (_Src == (void *)0x0) {
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
    FUN_00466dd0(0);
    return;
  }
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
      if (*(char *)(iVar3 + (int)_Src) == '\0') break;
      iVar3 = iVar3 + 1;
    } while (iVar3 <= iVar2);
  }
  if (iVar3 <= iVar2) {
    iVar2 = FUN_004b7260((int *)(param_1 + 8),iVar3 + 1,0);
    if (iVar2 == 0) {
      memcpy(*(void **)(param_1 + 0xc),_Src,iVar3 + 1);
      *(int *)(param_1 + 0x20) = iVar3;
      *(undefined4 *)(param_1 + 0x24) = 0x1030202;
    }
  }
  FUN_00466dd0((int)_Src);
  return;
}


/* FUN_0049fbea @ 0049fbea  kind=gamemisc  attributed-by=none  size=469 */

void FUN_0049fbea(void)

{
  ushort uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int in_EAX;
  int *unaff_EBX;
  int unaff_EBP;
  undefined4 *puVar5;
  int iVar6;
  
  do {
    iVar6 = *(int *)(in_EAX + 8);
    *(int *)(unaff_EBP + -8) = iVar6;
    puVar5 = (undefined4 *)(iVar6 + 0x10);
    iVar6 = 3;
    do {
      if ((code *)*puVar5 != (code *)0x0) {
        (*(code *)*puVar5)(puVar5[-2]);
      }
      puVar5 = puVar5 + 5;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    FUN_00494b00((int)unaff_EBX,*(undefined4 **)(unaff_EBP + -8));
    in_EAX = **(int **)(unaff_EBP + 8);
    *(int *)(unaff_EBP + 8) = in_EAX;
  } while (in_EAX != 0);
  FUN_0049d5c0(unaff_EBX + 0x67);
  for (puVar5 = (undefined4 *)unaff_EBX[0x4b]; puVar5 != (undefined4 *)0x0;
      puVar5 = (undefined4 *)*puVar5) {
    puVar2 = (undefined4 *)puVar5[2];
    if ((code *)puVar2[3] != (code *)0x0) {
      (*(code *)puVar2[3])(puVar2[2]);
    }
    FUN_00494b00((int)unaff_EBX,puVar2);
  }
  FUN_0049d5c0(unaff_EBX + 0x49);
  FUN_004961f0((int)unaff_EBX,0,(byte *)0x0);
  piVar3 = (int *)unaff_EBX[0x35];
  if (piVar3 != (int *)0x0) {
    uVar1 = *(ushort *)(piVar3 + 7);
    if ((uVar1 & 0x2460) != 0) {
      if ((uVar1 & 0x2000) == 0) {
        if (((uVar1 & 0x400) == 0) || ((code *)piVar3[8] == (code *)0x0)) {
          if ((uVar1 & 0x20) == 0) {
            if ((uVar1 & 0x40) != 0) {
              piVar4 = (int *)piVar3[4];
              piVar4[1] = *(int *)(*piVar4 + 0xa4);
              *(int **)(*piVar4 + 0xa4) = piVar4;
              if ((*(byte *)(piVar3 + 7) & 0x20) != 0) {
                FUN_004a6e20((undefined4 *)piVar3[4]);
              }
              *(ushort *)(piVar3 + 7) = *(ushort *)(piVar3 + 7) & 0xbe01 | 1;
              *(undefined1 *)((int)piVar3 + 0x1e) = 5;
            }
          }
          else {
            FUN_004a6e20((undefined4 *)piVar3[4]);
          }
        }
        else {
          (*(code *)piVar3[8])(piVar3[1]);
          piVar3[8] = 0;
        }
      }
      else {
        FUN_004b7010(piVar3,piVar3[4]);
        FUN_004b76e0(piVar3);
      }
    }
    FUN_00494b00(*piVar3,(undefined4 *)piVar3[9]);
    piVar3[1] = 0;
    piVar3[9] = 0;
    piVar3[8] = 0;
    FUN_00494b00(*piVar3,piVar3);
  }
  FUN_00492650(unaff_EBX);
  unaff_EBX[0x11] = -0x4aca86d0;
  FUN_00494b00((int)unaff_EBX,*(undefined4 **)(unaff_EBX[4] + 0x1c));
  if (unaff_EBX[3] != 0) {
    (*DAT_00582b20)();
  }
  unaff_EBX[0x11] = -0x60c3d2cd;
  if (unaff_EBX[3] != 0) {
    (*DAT_00582b14)();
  }
  if (*(char *)((int)unaff_EBX + 0xeb) != '\0') {
    FUN_00466dd0(unaff_EBX[0x41]);
  }
  FUN_00466dd0((int)unaff_EBX);
  return;
}


/* FUN_004a0570 @ 004a0570  kind=gamemisc  attributed-by=none  size=10 */

void FUN_004a0570(void)

{
                    /* WARNING: Could not recover jumptable at 0x004a0574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00582af0._4_4_)();
  return;
}


/* FUN_004a0990 @ 004a0990  kind=gamemisc  attributed-by=none  size=133 */

undefined4 __cdecl FUN_004a0990(undefined4 param_1,undefined4 param_2,uint param_3,int param_4)

{
  if (DAT_00583f40 != 0) {
    (*DAT_00582b18)(DAT_00583f40);
  }
  DAT_00583f50 = param_1;
  DAT_00583f54 = param_2;
  DAT_00583f48 = param_3;
  DAT_00583f4c = param_4;
  if ((-1 < param_4) && ((0 < param_4 || (param_3 != 0)))) {
    if ((param_4 <= (int)DAT_00583e18 >> 0x1f) &&
       ((param_4 < (int)DAT_00583e18 >> 0x1f || (param_3 <= DAT_00583e18)))) {
      DAT_00583f64 = 1;
      goto LAB_004a0a01;
    }
  }
  DAT_00583f64 = 0;
LAB_004a0a01:
  if (DAT_00583f40 != 0) {
    (*DAT_00582b20)(DAT_00583f40);
  }
  return 0;
}


/* FUN_004a12e0 @ 004a12e0  kind=gamemisc  attributed-by=none  size=105 */

int __cdecl
FUN_004a12e0(int param_1,undefined4 param_2,undefined4 *param_3,uint param_4,undefined4 param_5)

{
  size_t _Size;
  void *_Dst;
  int iVar1;
  
  _Size = *(size_t *)(param_1 + 4);
  _Dst = (void *)FUN_004a0350(_Size);
  if (_Dst == (void *)0x0) {
    return 7;
  }
  memset(_Dst,0,_Size);
  iVar1 = (**(code **)(param_1 + 0x18))(param_1,param_2,_Dst,param_4 & 0x87f7f,param_5);
  if (iVar1 != 0) {
    FUN_00466dd0((int)_Dst);
    return iVar1;
  }
  *param_3 = _Dst;
  return 0;
}


/* FUN_004a1c90 @ 004a1c90  kind=gamemisc  attributed-by=none  size=77 */

int __cdecl FUN_004a1c90(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  uVar1 = *(ushort *)(param_1 + 0x74);
  iVar2 = *(int *)(param_1 + 0x80);
  iVar3 = *(int *)(*(int *)(param_1 + 0xb4) + 0x28);
  if (iVar3 != 0) {
    iVar4 = (*DAT_00582b44)(iVar3);
  }
  iVar3 = (*DAT_00582af0._4_4_)(param_1);
  return iVar3 + iVar4 * (iVar2 + 0x3c + (uint)uVar1) + *(int *)(param_1 + 0x80);
}


/* FUN_004a2cfa @ 004a2cfa  kind=gamemisc  attributed-by=none  size=381 */

undefined4 __fastcall FUN_004a2cfa(int param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  bool bVar3;
  undefined3 extraout_var;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  int iVar7;
  uint unaff_EDI;
  
  do {
    if (*(int *)(unaff_EBP + -0xc) != 0) goto LAB_004a2e6a;
    if (unaff_EDI == *(uint *)(*(int *)(unaff_EBP + 8) + 0x14)) {
LAB_004a2d84:
      if (unaff_EDI != DAT_00582bb8 / *(int *)(unaff_EBX + 0x80) + 1U) {
        iVar6 = FUN_004a14c0(unaff_EBX,unaff_EDI,(int *)(unaff_EBP + -0x10),0);
        *(int *)(unaff_EBP + -0xc) = iVar6;
        if (iVar6 == 0) {
          puVar2 = *(undefined4 **)(unaff_EBP + -0x10);
          uVar4 = FUN_00485520((int)puVar2);
          bVar1 = *(byte *)(puVar2 + 6);
          *(uint *)(unaff_EBP + -0xc) = uVar4;
          uVar5 = *(undefined4 *)(unaff_EBP + -8);
          if ((bVar1 & 4) != 0) {
            uVar5 = 1;
          }
          *(undefined4 *)(unaff_EBP + -8) = uVar5;
          *(undefined4 *)(unaff_EBP + -0x1c) = puVar2[4];
          FUN_004a3a80(puVar2);
          if (*(int *)((*(uint **)(unaff_EBP + -0x1c))[0x2d] + 0xc) == 0) {
            FUN_00484370(*(uint **)(unaff_EBP + -0x1c));
          }
          unaff_ESI = *(int *)(unaff_EBP + -8);
        }
        goto LAB_004a2df6;
      }
    }
    else {
      bVar3 = FUN_0048ec40(*(uint **)(unaff_EBX + 0x38),unaff_EDI);
      if (CONCAT31(extraout_var,bVar3) == 0) {
        param_1 = *(int *)(unaff_EBP + -4);
        goto LAB_004a2d84;
      }
      FUN_004a37e0(*(int **)(unaff_EBX + 0xb4),unaff_EDI,0,(undefined4 *)(unaff_EBP + -0x18));
      puVar2 = *(undefined4 **)(unaff_EBP + -0x18);
      *(undefined4 **)(unaff_EBP + -0x10) = puVar2;
      if (puVar2 != (undefined4 *)0x0) {
        if ((*(byte *)(puVar2 + 6) & 4) != 0) {
          unaff_ESI = 1;
        }
        uVar5 = puVar2[4];
        *(int *)(unaff_EBP + -8) = unaff_ESI;
        *(undefined4 *)(unaff_EBP + -0x1c) = uVar5;
        FUN_004a3a80(puVar2);
        if (*(int *)((*(uint **)(unaff_EBP + -0x1c))[0x2d] + 0xc) == 0) {
          FUN_00484370(*(uint **)(unaff_EBP + -0x1c));
        }
      }
LAB_004a2df6:
      param_1 = *(int *)(unaff_EBP + -4);
    }
    iVar6 = *(int *)(unaff_EBP + -0x14) + 1;
    unaff_EDI = unaff_EDI + 1;
    *(int *)(unaff_EBP + -0x14) = iVar6;
  } while (iVar6 < param_1);
  if ((*(int *)(unaff_EBP + -0xc) == 0) && (unaff_ESI != 0)) {
    iVar6 = *(int *)(unaff_EBP + -4);
    iVar7 = 0;
    do {
      FUN_004a37e0(*(int **)(unaff_EBX + 0xb4),*(int *)(unaff_EBP + -0x20) + iVar7,0,
                   (undefined4 *)(unaff_EBP + 8));
      puVar2 = *(undefined4 **)(unaff_EBP + 8);
      if (puVar2 != (undefined4 *)0x0) {
        *(ushort *)(puVar2 + 6) = *(ushort *)(puVar2 + 6) | 4;
        *(undefined4 *)(unaff_EBP + -0x1c) = puVar2[4];
        FUN_004a3a80(puVar2);
        if (*(int *)((*(uint **)(unaff_EBP + -0x1c))[0x2d] + 0xc) == 0) {
          FUN_00484370(*(uint **)(unaff_EBP + -0x1c));
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar6);
  }
LAB_004a2e6a:
  *(char *)(unaff_EBX + 0x14) = *(char *)(unaff_EBX + 0x14) + -1;
  return *(undefined4 *)(unaff_EBP + -0xc);
}


/* FUN_004a2f1a @ 004a2f1a  kind=gamemisc  attributed-by=none  size=1249 */

undefined4 __fastcall FUN_004a2f1a(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  undefined **ppuVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  char cVar12;
  int unaff_EBX;
  int iVar13;
  char *pcVar14;
  int unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  int iVar15;
  uint uVar16;
  bool bVar17;
  
  do {
    param_2 = param_2 + (uint)(*(char *)(unaff_ESI + param_1) == '&');
    pcVar14 = (char *)(unaff_ESI + 1 + param_1);
    param_1 = param_1 + 2;
    *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + (uint)(*pcVar14 == '&');
  } while (param_1 < unaff_EBX);
  *(int *)(unaff_EBP + -4) = param_2;
  iVar13 = 0;
  iVar15 = *(int *)(unaff_EBP + -0x14);
  if (param_1 < unaff_EDI) {
    iVar15 = iVar15 + (uint)(*(char *)(param_1 + unaff_ESI) == '&');
  }
  iVar3 = FUN_004bc920();
  if (iVar3 != 0) {
    return 7;
  }
  iVar15 = FUN_004a0350(*(int *)(unaff_EBP + -4) + *(int *)(unaff_EBP + 0xc) + iVar15);
  *(int *)(unaff_EBP + -4) = iVar15;
  if (iVar15 == 0) {
    return 7;
  }
  if ((*(char *)(unaff_ESI + 5) != '/') || (*(char *)(unaff_ESI + 6) != '/')) {
    iVar15 = 5;
LAB_004a2ff1:
    cVar12 = *(char *)(iVar15 + unaff_ESI);
    if (cVar12 == '\0') {
      iVar15 = *(int *)(unaff_EBP + -4);
    }
    else {
      iVar3 = 0;
      do {
        if (cVar12 == '#') break;
        iVar5 = iVar15 + 1;
        if (((cVar12 == '%') &&
            (bVar1 = *(byte *)(iVar5 + unaff_ESI), *(byte *)(unaff_EBP + 0xf) = bVar1,
            ((&DAT_00569720)[bVar1] & 8) != 0)) &&
           (((&DAT_00569720)[*(byte *)(iVar15 + 2 + unaff_ESI)] & 8) != 0)) {
          *(int *)(unaff_EBP + 0xc) = (int)*(char *)(iVar15 + 2 + unaff_ESI);
          iVar5 = iVar15 + 3;
          *(uint *)(unaff_EBP + -0x1c) =
               ((byte)(*(char *)(unaff_EBP + 0xf) + (*(char *)(unaff_EBP + 0xf) >> 6 & 1U) * -7) &
               0xf) << 4;
          iVar15 = *(int *)(unaff_EBP + -0x1c) +
                   ((byte)((char)*(int *)(unaff_EBP + 0xc) +
                          ((byte)(*(int *)(unaff_EBP + 0xc) >> 6) & 1) * -7) & 0xf);
          if (iVar15 == 0) {
            cVar12 = *(char *)(iVar5 + unaff_ESI);
            while ((cVar12 != '\0' && (cVar12 != '#'))) {
              if (iVar3 == 0) {
                bVar17 = cVar12 == '?';
LAB_004a30d4:
                if (bVar17) break;
              }
              else {
                if (iVar3 == 1) {
                  if (cVar12 != '=') {
LAB_004a30d1:
                    bVar17 = cVar12 == '&';
                    goto LAB_004a30d4;
                  }
                  break;
                }
                if (iVar3 == 2) goto LAB_004a30d1;
              }
              iVar15 = iVar5 + 1;
              iVar5 = iVar5 + 1;
              cVar12 = *(char *)(iVar15 + unaff_ESI);
            }
            iVar13 = *(int *)(unaff_EBP + -8);
          }
          else {
            iVar13 = *(int *)(unaff_EBP + -8) + 1;
            *(char *)(*(int *)(unaff_EBP + -4) + -1 + iVar13) = (char)iVar15;
            *(int *)(unaff_EBP + -8) = iVar13;
          }
        }
        else {
          if (iVar3 == 1) {
            if ((cVar12 == '&') || (cVar12 == '=')) {
              if (*(char *)(*(int *)(unaff_EBP + -4) + -1 + iVar13) == '\0') {
                cVar12 = *(char *)(iVar5 + unaff_ESI);
                for (; ((cVar12 != '\0' && (cVar12 != '#')) &&
                       (*(char *)(iVar5 + -1 + unaff_ESI) != '&')); iVar5 = iVar5 + 1) {
                  cVar12 = *(char *)(iVar5 + 1 + unaff_ESI);
                }
              }
              else if (cVar12 == '&') {
                iVar15 = *(int *)(unaff_EBP + -4);
                *(undefined1 *)(*(int *)(unaff_EBP + -4) + iVar13) = 0;
                *(undefined1 *)(iVar15 + iVar13 + 1) = 0;
                iVar13 = iVar13 + 2;
                *(int *)(unaff_EBP + -8) = iVar13;
              }
              else {
                *(undefined1 *)(*(int *)(unaff_EBP + -4) + iVar13) = 0;
                iVar13 = iVar13 + 1;
                iVar3 = 2;
                *(int *)(unaff_EBP + -8) = iVar13;
              }
              goto LAB_004a30ab;
            }
          }
          else {
            if (iVar3 == 0) {
              if (cVar12 != '?') {
                iVar13 = iVar13 + 1;
                *(char *)(*(int *)(unaff_EBP + -4) + -1 + iVar13) = cVar12;
                *(int *)(unaff_EBP + -8) = iVar13;
                goto LAB_004a30ab;
              }
            }
            else if ((iVar3 != 2) || (cVar12 != '&')) goto LAB_004a318d;
            iVar3 = 1;
            cVar12 = '\0';
          }
LAB_004a318d:
          iVar13 = iVar13 + 1;
          *(char *)(*(int *)(unaff_EBP + -4) + -1 + iVar13) = cVar12;
          *(int *)(unaff_EBP + -8) = iVar13;
        }
LAB_004a30ab:
        cVar12 = *(char *)(iVar5 + unaff_ESI);
        iVar15 = iVar5;
      } while (cVar12 != '\0');
      iVar15 = *(int *)(unaff_EBP + -4);
      if (iVar3 == 1) {
        *(undefined1 *)(iVar15 + iVar13) = 0;
        iVar13 = iVar13 + 1;
      }
    }
    *(undefined2 *)(iVar15 + iVar13) = 0;
    pcVar14 = *(char **)(unaff_EBP + -4);
    cVar12 = *pcVar14;
    pcVar6 = pcVar14;
    while (cVar12 != '\0') {
      pcVar6 = pcVar6 + 1;
      cVar12 = *pcVar6;
    }
    piVar10 = (int *)(pcVar14 + ((int)pcVar6 - (int)pcVar14 & 0x3fffffffU) + 1);
    piVar11 = piVar10;
    if ((char)*piVar10 != '\0') {
LAB_004a31d7:
      do {
        piVar10 = (int *)((int)piVar10 + 1);
      } while (*(char *)piVar10 != '\0');
      uVar7 = (int)piVar10 - (int)piVar11 & 0x3fffffff;
      piVar10 = (int *)((int)piVar11 + uVar7 + 1);
      *(int **)(unaff_EBP + 0xc) = piVar10;
      if (piVar10 == (int *)0x0) {
        uVar16 = 0;
      }
      else {
        cVar12 = (char)*piVar10;
        piVar9 = piVar10;
        while (cVar12 != '\0') {
          piVar9 = (int *)((int)piVar9 + 1);
          cVar12 = *(char *)piVar9;
        }
        uVar16 = (int)piVar9 - (int)piVar10 & 0x3fffffff;
      }
      if (uVar7 != 3) {
        if (uVar7 != 5) {
          if ((uVar7 == 4) && (*piVar11 == 0x65646f6d)) {
            *(undefined4 *)(unaff_EBP + -0x1c) = 0x87;
            ppuVar8 = &PTR_DAT_0058353c;
            *(uint *)(unaff_EBP + -0x18) = *(uint *)(unaff_EBP + -0xc) & 0x87;
            *(char **)(unaff_EBP + -0x14) = "access";
            goto LAB_004a329e;
          }
          goto LAB_004a3373;
        }
        if ((*piVar11 != 0x68636163) || ((char)piVar11[1] != 'e')) goto LAB_004a3373;
        *(undefined4 *)(unaff_EBP + -0x1c) = 0x60000;
        ppuVar8 = &PTR_s_shared_00583524;
        *(undefined4 *)(unaff_EBP + -0x18) = 0x60000;
        *(char **)(unaff_EBP + -0x14) = "cache";
LAB_004a329e:
        piVar11 = (int *)*ppuVar8;
        iVar15 = 0;
        *(undefined ***)(unaff_EBP + -8) = ppuVar8;
        if (piVar11 != (int *)0x0) {
          do {
            uVar7 = 0;
            if (piVar11 != (int *)0x0) {
              cVar12 = (char)*piVar11;
              piVar9 = piVar11;
              while (cVar12 != '\0') {
                piVar9 = (int *)((int)piVar9 + 1);
                cVar12 = *(char *)piVar9;
              }
              uVar7 = (int)piVar9 - (int)piVar11 & 0x3fffffff;
            }
            uVar2 = uVar16;
            if (uVar16 == uVar7) {
              while (uVar7 = uVar2 - 4, 3 < uVar2) {
                if (*piVar10 != *piVar11) goto LAB_004a32ee;
                piVar10 = piVar10 + 1;
                piVar11 = piVar11 + 1;
                uVar2 = uVar7;
              }
              if (uVar7 == 0xfffffffc) goto LAB_004a333e;
LAB_004a32ee:
              if (((char)*piVar10 == (char)*piVar11) &&
                 ((uVar7 == 0xfffffffd ||
                  ((*(char *)((int)piVar10 + 1) == *(char *)((int)piVar11 + 1) &&
                   ((uVar7 == 0xfffffffe ||
                    ((*(char *)((int)piVar10 + 2) == *(char *)((int)piVar11 + 2) &&
                     ((uVar7 == 0xffffffff ||
                      (*(char *)((int)piVar10 + 3) == *(char *)((int)piVar11 + 3)))))))))))))
              goto LAB_004a333e;
              piVar10 = *(int **)(unaff_EBP + 0xc);
            }
            iVar15 = iVar15 + 1;
            piVar11 = *(int **)(*(int *)(unaff_EBP + -8) + iVar15 * 8);
            if (piVar11 == (int *)0x0) break;
          } while( true );
        }
        goto LAB_004a3329;
      }
      if (((short)*piVar11 == 0x6676) && (*(char *)((int)piVar11 + 2) == 's')) {
        *(int **)(unaff_EBP + 8) = piVar10;
      }
      goto LAB_004a3373;
    }
    goto LAB_004a3384;
  }
  cVar12 = *(char *)(unaff_ESI + 7);
  iVar15 = 7;
  if (cVar12 == '\0') goto LAB_004a2ff1;
  do {
    if (cVar12 == '/') break;
    cVar12 = *(char *)(iVar15 + 1 + unaff_ESI);
    iVar15 = iVar15 + 1;
  } while (cVar12 != '\0');
  if ((iVar15 == 7) ||
     ((((iVar15 == 0x10 && (*(int *)(unaff_ESI + 7) == 0x61636f6c)) &&
       (*(int *)(unaff_ESI + 0xb) == 0x736f686c)) && (*(char *)(unaff_ESI + 0xf) == 't'))))
  goto LAB_004a2ff1;
  uVar4 = FUN_004666d0((byte *)"invalid uri authority: %.*s");
LAB_004a33a9:
  *(undefined4 *)(unaff_EBP + -0x10) = 1;
LAB_004a33b0:
  iVar15 = *(int *)(unaff_EBP + -4);
  **(undefined4 **)(unaff_EBP + 0x1c) = uVar4;
  FUN_00466dd0(iVar15);
  pcVar14 = (char *)0x0;
LAB_004a33c2:
  **(undefined4 **)(unaff_EBP + 0x10) = *(undefined4 *)(unaff_EBP + -0xc);
  uVar4 = *(undefined4 *)(unaff_EBP + -0x10);
  **(undefined4 **)(unaff_EBP + 0x18) = pcVar14;
  return uVar4;
LAB_004a333e:
  uVar7 = *(uint *)(*(int *)(unaff_EBP + -8) + 4 + iVar15 * 8);
  if (uVar7 == 0) {
LAB_004a3329:
    uVar4 = FUN_004666d0((byte *)"no such %s mode: %s");
    goto LAB_004a33a9;
  }
  if (*(int *)(unaff_EBP + -0x18) < (int)(uVar7 & 0xffffff7f)) {
    uVar4 = FUN_004666d0((byte *)"%s mode not allowed: %s");
    *(undefined4 *)(unaff_EBP + -0x10) = 3;
    goto LAB_004a33b0;
  }
  piVar10 = *(int **)(unaff_EBP + 0xc);
  *(uint *)(unaff_EBP + -0xc) = ~*(uint *)(unaff_EBP + -0x1c) & *(uint *)(unaff_EBP + -0xc) | uVar7;
LAB_004a3373:
  piVar10 = (int *)((int)piVar10 + uVar16 + 1);
  piVar11 = piVar10;
  if ((char)*piVar10 == '\0') goto code_r0x004a3381;
  goto LAB_004a31d7;
code_r0x004a3381:
  pcVar14 = *(char **)(unaff_EBP + -4);
LAB_004a3384:
  iVar15 = FUN_00464e80(*(byte **)(unaff_EBP + 8));
  **(int **)(unaff_EBP + 0x14) = iVar15;
  if (iVar15 != 0) goto LAB_004a33c2;
  uVar4 = FUN_004666d0((byte *)"no such vfs: %s");
  goto LAB_004a33a9;
}


/* FUN_004a5e90 @ 004a5e90  kind=gamemisc  attributed-by=none  size=256 */

uint __cdecl
FUN_004a5e90(uint param_1,byte *param_2,size_t param_3,byte param_4,undefined4 *param_5,int *param_6
            )

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  int local_8;
  
  uVar4 = 0;
  local_8 = 0;
  *param_5 = 0;
  iVar2 = FUN_004a7850(param_1);
  if (iVar2 == 0) {
    FUN_004683f0(0x15,"misuse at line %d of [%.10s]");
    return 0x15;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b18)(*(int *)(param_1 + 0xc));
  }
  pbVar3 = (byte *)FUN_004ad190(param_1,param_2,param_3,'\x02');
  if (pbVar3 != (byte *)0x0) {
    uVar4 = FUN_004a0180(param_1,pbVar3,0xffffffff,param_4,0,param_5,&local_8);
    if ((local_8 != 0) && (param_6 != (int *)0x0)) {
      iVar2 = FUN_004ad230(pbVar3,local_8 - (int)pbVar3);
      iVar2 = FUN_004ad150(param_2,iVar2);
      *param_6 = (int)(param_2 + iVar2);
    }
  }
  FUN_00494b00(param_1,(undefined4 *)pbVar3);
  if ((*(char *)(param_1 + 0x38) != '\0') || (uVar4 == 0xc0a)) {
    FUN_004961f0(param_1,7,(byte *)0x0);
    *(undefined1 *)(param_1 + 0x38) = 0;
    uVar4 = 7;
  }
  uVar1 = *(uint *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b20)(*(int *)(param_1 + 0xc));
  }
  return uVar1 & uVar4;
}


/* FUN_004a6caa @ 004a6caa  kind=gamemisc  attributed-by=none  size=181 */

void __fastcall FUN_004a6caa(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  
  do {
    piVar1 = *(int **)(*(int *)(unaff_ESI + 0x10) + 4 + unaff_EDI);
    if (piVar1 != (int *)0x0) {
      if ((char)piVar1[2] == '\x02') {
        param_1 = param_2;
      }
      *(undefined4 *)(unaff_EBP + -4) = param_1;
      FUN_004916b0(piVar1,*(uint *)(unaff_EBP + 0xc));
      *(undefined1 *)(*(int *)(unaff_ESI + 0x10) + 8 + unaff_EDI) = 0;
      param_2 = 1;
    }
    param_1 = *(undefined4 *)(unaff_EBP + -4);
    unaff_EBX = unaff_EBX + 1;
    unaff_EDI = unaff_EDI + 0x10;
  } while (unaff_EBX < *(int *)(unaff_ESI + 0x14));
  FUN_004719f0(unaff_ESI,0x44);
  if (DAT_00583e78 != (code *)0x0) {
    (*DAT_00583e78)();
  }
  if ((*(byte *)(unaff_ESI + 0x18) & 2) != 0) {
    for (iVar2 = *(int *)(unaff_ESI + 4); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x3c)) {
      *(uint *)(iVar2 + 0x60) = *(uint *)(iVar2 + 0x60) | 0x20;
    }
    FUN_004a6940(unaff_ESI);
  }
  *(undefined4 *)(unaff_ESI + 0x1e8) = 0;
  *(undefined4 *)(unaff_ESI + 0x1ec) = 0;
  if ((*(code **)(unaff_ESI + 0xb4) != (code *)0x0) &&
     ((*(int *)(unaff_EBP + -4) != 0 || (*(char *)(unaff_ESI + 0x36) == '\0')))) {
    (**(code **)(unaff_ESI + 0xb4))();
  }
  return;
}


/* FUN_004aac4a @ 004aac4a  kind=gamemisc  attributed-by=none  size=277 */

undefined4 __fastcall FUN_004aac4a(int param_1)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  int in_EAX;
  int iVar4;
  int unaff_EBX;
  int unaff_EBP;
  int *piVar5;
  undefined8 *puVar6;
  undefined4 uStack00000004;
  int iStack00000008;
  
  do {
    uVar1 = *(ushort *)(*(int *)(param_1 + 0x44) + 0x1c + unaff_EBX);
    piVar5 = (int *)(*(int *)(param_1 + 0x44) + unaff_EBX);
    puVar6 = (undefined8 *)(*(int *)(in_EAX + 0x44) + unaff_EBX);
    if ((uVar1 & 0x2460) != 0) {
      if ((uVar1 & 0x2000) == 0) {
        if (((uVar1 & 0x400) == 0) || ((code *)piVar5[8] == (code *)0x0)) {
          if ((uVar1 & 0x20) == 0) {
            if ((uVar1 & 0x40) != 0) {
              FUN_004b78c0((int)piVar5);
            }
          }
          else {
            FUN_004a6e20((undefined4 *)piVar5[4]);
          }
        }
        else {
          (*(code *)piVar5[8])(piVar5[1]);
          piVar5[8] = 0;
        }
      }
      else {
        FUN_004b7010(piVar5,piVar5[4]);
        FUN_004b76e0(piVar5);
      }
    }
    FUN_00494b00(*piVar5,(undefined4 *)piVar5[9]);
    piVar5[1] = 0;
    piVar5[9] = 0;
    piVar5[8] = 0;
    iVar4 = *(int *)(unaff_EBP + -4);
    *(undefined8 *)piVar5 = *puVar6;
    param_1 = *(int *)(unaff_EBP + 0xc);
    *(undefined8 *)(piVar5 + 2) = puVar6[1];
    *(undefined8 *)(piVar5 + 4) = puVar6[2];
    *(undefined8 *)(piVar5 + 6) = puVar6[3];
    *(undefined8 *)(piVar5 + 8) = puVar6[4];
    *(undefined2 *)((int)puVar6 + 0x1c) = 1;
    iVar3 = *(int *)(unaff_EBP + 8);
    *(undefined4 *)(puVar6 + 4) = 0;
    *(undefined4 *)((int)puVar6 + 0x24) = 0;
    sVar2 = *(short *)(iVar3 + 0x4c);
    iVar4 = iVar4 + 1;
    unaff_EBX = unaff_EBX + 0x28;
    in_EAX = *(int *)(unaff_EBP + 8);
    *(int *)(unaff_EBP + -4) = iVar4;
  } while (iVar4 < sVar2);
  iStack00000008 = *(int *)(**(int **)(unaff_EBP + 0xc) + 0xc);
  if (iStack00000008 != 0) {
    uStack00000004 = 0x4aad56;
    (*DAT_00582b20)();
  }
  return 0;
}


/* FUN_004ad150 @ 004ad150  kind=gamemisc  attributed-by=none  size=57 */

int __cdecl FUN_004ad150(byte *param_1,int param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  
  pbVar2 = param_1;
  pbVar1 = param_1;
  if (0 < param_2) {
    do {
      pbVar2 = pbVar1 + 2;
      if ((uint)pbVar1[1] * 0x100 + -0xd800 + (uint)*pbVar1 < 0x800) {
        pbVar2 = pbVar1 + 4;
      }
      param_2 = param_2 + -1;
      pbVar1 = pbVar2;
    } while (param_2 != 0);
  }
  return (int)pbVar2 - (int)param_1;
}


/* FUN_004ad190 @ 004ad190  kind=gamemisc  attributed-by=none  size=145 */

undefined4 __cdecl FUN_004ad190(uint param_1,void *param_2,size_t param_3,char param_4)

{
  undefined8 local_2c;
  undefined8 local_24;
  undefined8 local_1c;
  undefined8 local_14;
  undefined8 local_c;
  
  local_24 = 0;
  local_1c = 0;
  local_14 = 0;
  local_c = 0;
  local_2c = (ulonglong)param_1;
  FUN_004b79e0((int *)&local_2c,param_2,param_3,param_4,(undefined *)0x0);
  if (((local_14 & 0x200000000) != 0) && (local_14._7_1_ != '\x01')) {
    FUN_004b7dc0((int *)&local_2c,'\x01');
  }
  if (*(char *)(param_1 + 0x38) != '\0') {
    if ((local_14 & 0x246000000000) != 0) {
      FUN_004b7720((int *)&local_2c);
    }
    FUN_00494b00((int)local_2c,local_c._4_4_);
    return 0;
  }
  return local_2c._4_4_;
}


/* FUN_004ad280 @ 004ad280  kind=gamemisc  attributed-by=none  size=109 */

uint __cdecl FUN_004ad280(int *param_1)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  
  uVar2 = (uint)*(byte *)*param_1;
  pbVar3 = (byte *)*param_1 + 1;
  *param_1 = (int)pbVar3;
  if (0xbf < uVar2) {
    uVar2 = (uint)(byte)(&DAT_0056c6f8)[uVar2];
    bVar1 = *pbVar3;
    while ((bVar1 & 0xc0) == 0x80) {
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 1;
      uVar2 = uVar2 * 0x40 + (bVar1 & 0x3f);
      *param_1 = (int)pbVar3;
      bVar1 = *pbVar3;
    }
    if (((uVar2 < 0x80) || ((uVar2 & 0xfffff800) == 0xd800)) || ((uVar2 & 0xfffffffe) == 0xfffe)) {
      return 0xfffd;
    }
  }
  return uVar2;
}


/* FUN_004b7be0 @ 004b7be0  kind=gamemisc  attributed-by=none  size=91 */

void __cdecl FUN_004b7be0(int *param_1,int param_2)

{
  if ((*(ushort *)(param_1 + 7) & 0x2460) != 0) {
    FUN_004b7720(param_1);
  }
  FUN_00494b00(*param_1,(undefined4 *)param_1[9]);
  if (param_2 < 0) {
    param_2 = 0;
  }
  param_1[1] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0x1044010;
  param_1[6] = 0;
  param_1[4] = param_2;
  return;
}


/* FUN_004ba730 @ 004ba730  kind=gamemisc  attributed-by=none  size=51 */

undefined4 __cdecl FUN_004ba730(int param_1,int param_2,byte *param_3,int param_4)

{
  if (param_1 <= param_4) {
    if (DAT_00583e74 != (code *)0x0) {
      (*DAT_00583e74)();
    }
    FUN_00468750(param_2,param_3);
    if (DAT_00583e78 != (code *)0x0) {
      (*DAT_00583e78)();
    }
  }
  return 0;
}


/* FUN_004bb5da @ 004bb5da  kind=gamemisc  attributed-by=none  size=2138 */

undefined4 * __fastcall FUN_004bb5da(int param_1,uint param_2)

{
  int iVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *puVar14;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  double *pdVar15;
  int *piVar16;
  int unaff_EDI;
  int iVar17;
  undefined4 *puVar18;
  double dVar19;
  double in_XMM1_Qa;
  double in_XMM2_Qa;
  double in_XMM3_Qa;
  undefined8 uVar20;
  
  do {
    uVar6 = (uint)((*(byte *)(unaff_EDI + 0x20) & 10) != 0);
    *(uint *)(unaff_EBP + -0x40) = uVar6;
    if ((unaff_EBX != param_1) && (uVar6 != 0)) goto LAB_004bb801;
    piVar9 = *(int **)(unaff_EBP + -0x38);
    uVar6 = 0;
    iVar8 = *piVar9;
    if (0 < iVar8) {
      do {
        piVar9 = piVar9 + 1;
        if (*piVar9 == *(int *)(unaff_EDI + 0x2c)) {
          uVar7 = 1 << (uVar6 & 0x1f);
          uVar12 = 0;
          if (0x1f < uVar6) {
            uVar12 = uVar7;
          }
          uVar7 = uVar7 ^ uVar12;
          if (0x3f < uVar6) {
            uVar12 = uVar7;
          }
          goto LAB_004bb633;
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < iVar8);
    }
    *(undefined8 *)(unaff_EBP + -0xd0) = 0;
    uVar7 = *(uint *)(unaff_EBP + -0xd0);
    uVar12 = *(uint *)(unaff_EBP + -0xcc);
LAB_004bb633:
    if ((uVar7 & *(uint *)(unaff_EBP + -0xa8)) == 0 && (uVar12 & *(uint *)(unaff_EBP + -0xa4)) == 0)
    {
      param_1 = *(int *)(unaff_EBP + -8);
      param_2 = *(uint *)(unaff_EBP + -0x2c);
      if (unaff_EBX == param_1) {
        param_1 = param_1 + 1;
        *(int *)(unaff_EBP + -8) = param_1;
      }
    }
    else {
      if (*(int *)(unaff_EBP + -0x2c) == 0) {
        *(undefined4 *)(unaff_EBP + -0xb0) = *(undefined4 *)(unaff_EBP + -0xa8);
        *(undefined4 *)(unaff_EBP + -0xac) = *(undefined4 *)(unaff_EBP + -0xa4);
      }
      else {
        *(uint *)(unaff_EBP + -0xb0) = uVar7;
        *(uint *)(unaff_EBP + -0xac) = uVar12;
      }
      if (*(int *)(unaff_EDI + 0x44) == 0) {
        *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x28) + 1;
      }
      if ((*(byte *)(*(int *)(unaff_EDI + 0x10) + 0x2a) & 0x10) == 0) {
        FUN_0046f990((int *)(unaff_EBP + -0xc0));
        pdVar15 = *(double **)(unaff_EBP + -0x34);
      }
      else {
        pdVar15 = *(double **)(unaff_EBP + -0x34);
        *(double **)(unaff_EBP + -0x98) = pdVar15 + 1;
        FUN_004706c0((int *)(unaff_EBP + -0xc0));
      }
      param_2 = *(uint *)(unaff_EBP + -0x2c);
      if (param_2 == 0) {
        if (*(int *)(unaff_EBP + -0x14) <= *(int *)(unaff_EBP + -8)) goto LAB_004bb6f3;
        dVar19 = *(double *)(unaff_EBP + -0x70) / *pdVar15;
        *(double *)(unaff_EBP + -0x70) = dVar19;
      }
      else {
        *pdVar15 = *(double *)(unaff_EBP + -0x70);
LAB_004bb6f3:
        dVar19 = *(double *)(unaff_EBP + -0x70);
      }
      unaff_EDI = *(int *)(unaff_EBP + -0xb8);
      if ((((*(uint *)(unaff_EBP + -0x68) & *(uint *)(unaff_EBP + -0xa8)) != 0 ||
            (*(uint *)(unaff_EBP + -100) & *(uint *)(unaff_EBP + -0xa4)) != 0) ||
          (((*(int *)(unaff_EBP + -0x28) != 0 && (*(int *)(unaff_EDI + 0x44) != 0)) &&
           ((*(uint *)(unaff_EBP + -0x88) & 0x100f3000) == 0)))) ||
         (((in_XMM1_Qa = *(double *)(unaff_EBP + -0x80), -1 < *(int *)(unaff_EBP + -0x3c) &&
           (*(double *)(unaff_EBP + -200) <= dVar19)) &&
          ((*(double *)(unaff_EBP + -200) < dVar19 ||
           ((*(ushort *)(unaff_EBP + -0x82) <= *(ushort *)(unaff_EBP + -0xf2) &&
            (*(double *)(unaff_EBP + -0x48) <= in_XMM1_Qa)))))))) {
        in_XMM3_Qa = *(double *)(unaff_EBP + -0x50);
        in_XMM2_Qa = *(double *)(unaff_EBP + -0x58);
        in_XMM1_Qa = *(double *)(unaff_EBP + -0x48);
      }
      else {
        in_XMM2_Qa = *(double *)(unaff_EBP + -0x88);
        in_XMM3_Qa = *(double *)(unaff_EBP + -0x78);
        *(double *)(unaff_EBP + -200) = dVar19;
        *(double *)(unaff_EBP + -0x58) = in_XMM2_Qa;
        *(double *)(unaff_EBP + -0xf8) = in_XMM2_Qa;
        *(double *)(unaff_EBP + -0x48) = in_XMM1_Qa;
        *(double *)(unaff_EBP + -0x50) = in_XMM3_Qa;
        *(undefined8 *)(unaff_EBP + -0xd8) = *(undefined8 *)(unaff_EBP + -0x68);
        *(int *)(unaff_EBP + -0x3c) = unaff_EBX;
      }
      param_1 = *(int *)(unaff_EBP + -8);
      if (*(int *)(unaff_EBP + -0x40) != 0) {
        unaff_ESI = *(int *)(unaff_EBP + -0xc);
        goto LAB_004bb801;
      }
    }
    unaff_ESI = *(int *)(unaff_EBP + -0xc);
    *(int *)(unaff_EBP + -0x34) = *(int *)(unaff_EBP + -0x34) + 0x58;
    unaff_EBX = unaff_EBX + 1;
    unaff_EDI = unaff_EDI + 0x48;
    *(int *)(unaff_EBP + -0xb8) = unaff_EDI;
    if (unaff_ESI <= unaff_EBX) {
LAB_004bb801:
      do {
        iVar8 = *(int *)(unaff_EBP + -0x3c);
        param_2 = param_2 - 1;
        *(uint *)(unaff_EBP + -0x2c) = param_2;
        if (-1 < (int)param_2) goto LAB_004bb5a1;
        do {
          uVar6 = *(uint *)(unaff_EBP + -0xf8);
          if ((uVar6 & 0x40000000) != 0) {
            *(undefined1 *)(*(int *)(unaff_EBP + -4) + 0xe) = 2;
          }
          pdVar15 = *(double **)(unaff_EBP + -0x1c);
          iVar17 = *(int *)(unaff_EBP + 0xc);
          *(uint *)(unaff_EBP + -0x24) = *(uint *)(unaff_EBP + -0x24) & uVar6;
          *pdVar15 = in_XMM2_Qa;
          pdVar15[1] = in_XMM1_Qa;
          pdVar15[2] = in_XMM3_Qa;
          *(undefined4 *)((int)pdVar15 + 0x1c) = *(undefined4 *)(iVar17 + 0x34 + iVar8 * 0x48);
          if ((uVar6 & 0x200f0000) == 0) {
            *(undefined4 *)(pdVar15 + 4) = 0xffffffff;
          }
          else if ((*(short *)(unaff_EBP + -0x20) == 0) || ((uVar6 & 0x20000000) != 0)) {
            iVar11 = *(int *)(unaff_EBP + 8);
            *(undefined4 *)(pdVar15 + 4) = *(undefined4 *)(iVar11 + 0x48);
            piVar9 = (int *)(iVar11 + 0x48);
            *piVar9 = *piVar9 + 1;
          }
          else {
            *(undefined4 *)(pdVar15 + 4) = *(undefined4 *)(unaff_EBP + 0x20);
          }
          piVar9 = *(int **)(unaff_EBP + -0x38);
          uVar7 = 0;
          iVar11 = *piVar9;
          if (0 < iVar11) {
            do {
              piVar9 = piVar9 + 1;
              if (*piVar9 == *(int *)(iVar17 + 0x34 + iVar8 * 0x48)) {
                uVar12 = 1 << (uVar7 & 0x1f);
                uVar13 = 0;
                if (0x1f < uVar7) {
                  uVar13 = uVar12;
                }
                uVar12 = uVar12 ^ uVar13;
                if (0x3f < uVar7) {
                  uVar13 = uVar12;
                }
                goto LAB_004bb8ae;
              }
              uVar7 = uVar7 + 1;
            } while ((int)uVar7 < iVar11);
          }
          *(undefined8 *)(unaff_EBP + -0x60) = 0;
          uVar12 = *(uint *)(unaff_EBP + -0x60);
          uVar13 = *(uint *)(unaff_EBP + -0x5c);
LAB_004bb8ae:
          *(uint *)(unaff_EBP + -0xa4) = *(uint *)(unaff_EBP + -0xa4) & ~uVar13;
          iVar17 = *(int *)(unaff_EBP + -0x1c);
          *(uint *)(unaff_EBP + -0xa8) = *(uint *)(unaff_EBP + -0xa8) & ~uVar12;
          piVar9 = *(int **)(unaff_EBP + 8);
          *(char *)(iVar17 + 0x34) = (char)*(undefined4 *)(unaff_EBP + -0x3c);
          if (1.0 <= in_XMM1_Qa) {
            *(double *)(piVar9 + 0x6e) = in_XMM1_Qa * *(double *)(piVar9 + 0x6e);
          }
          if ((*(int *)(*(int *)(unaff_EBP + 0xc) + 0x4c + iVar8 * 0x48) != 0) &&
             ((uVar6 & 0xf0000) == 0)) {
            FUN_004962b0(piVar9,(byte *)"cannot use index: %s");
LAB_004bb946:
            puVar14 = *(undefined4 **)(unaff_EBP + -4);
            goto LAB_004bb949;
          }
          unaff_ESI = *(int *)(unaff_EBP + -0xc);
          iVar8 = *(int *)(unaff_EBP + -0x94) + 1;
          *(int *)(unaff_EBP + -0x94) = iVar8;
          *(int *)(unaff_EBP + -0x1c) = iVar17 + 0x58;
          if (unaff_ESI <= iVar8) {
            uVar6 = *(uint *)(unaff_EBP + -0x24);
            piVar9 = *(int **)(unaff_EBP + 8);
            if ((piVar9[0x11] != 0) || (*(char *)(*(int *)(unaff_EBP + -0x18) + 0x38) != '\0'))
            goto LAB_004bb946;
            iVar8 = *(int *)(unaff_EBP + -4);
            if (unaff_ESI == 0) {
              uVar5 = 0;
            }
            else {
              uVar5 = *(undefined2 *)(iVar17 + 6);
            }
            *(undefined2 *)(iVar8 + 8) = uVar5;
            uVar6 = uVar6 & 0x2000000;
            if ((uVar6 != 0) && (*(undefined2 **)(unaff_EBP + 0x14) != (undefined2 *)0x0)) {
              *(undefined2 *)(iVar8 + 8) = **(undefined2 **)(unaff_EBP + 0x14);
            }
            if (((*(byte *)(unaff_EBP + 0x1c) & 4) != 0) && (uVar6 != 0)) {
              *(undefined1 *)(iVar8 + 0xc) = 1;
              *(uint *)(iVar8 + 0x38) = *(uint *)(iVar8 + 0x38) & 0xffbfffff;
            }
            piVar10 = (int *)piVar9[0x6c];
            piVar16 = piVar9;
            if ((piVar10 != (int *)0x0) && (piVar16 = piVar10, piVar10 != piVar9)) {
              piVar9[0x57] = -1;
            }
            if (piVar16[0x57] == 0) {
              piVar9 = (int *)piVar16[2];
              if (piVar9 == (int *)0x0) {
                piVar9 = FUN_004af150(*piVar16);
                piVar16[2] = (int)piVar9;
                if (piVar9 == (int *)0x0) goto LAB_004bba24;
                FUN_004ae760(piVar9,0x94);
              }
              iVar8 = FUN_004ae830(piVar9,1,0,0);
              piVar16[0x57] = iVar8 + 1;
            }
LAB_004bba24:
            puVar14 = *(undefined4 **)(unaff_EBP + -4);
            iVar8 = *(int *)(unaff_EBP + -0xc);
            *(undefined4 *)(unaff_EBP + -0x24) = 0xffffffff;
            *(undefined4 *)(unaff_EBP + -0x1c) = 0xffffffff;
            *(undefined8 *)(puVar14 + 0xc) = 0x3ff0000000000000;
            if (iVar8 < 1) goto LAB_004bbda3;
            *(int *)(unaff_EBP + -0x28) = iVar8;
            puVar18 = puVar14 + 0xe;
            goto LAB_004bba53;
          }
          param_1 = *(int *)(unaff_EBP + -8);
          iVar8 = -1;
          param_2 = (uint)(param_1 < *(int *)(unaff_EBP + -0x14));
          in_XMM1_Qa = 0.0;
          *(undefined4 *)(unaff_EBP + -0x3c) = 0xffffffff;
          *(undefined8 *)(unaff_EBP + -0x58) = 0;
          *(undefined8 *)(unaff_EBP + -0xf8) = 0;
          *(undefined8 *)(unaff_EBP + -0x48) = 0;
          *(undefined8 *)(unaff_EBP + -0x50) = 0;
          *(undefined8 *)(unaff_EBP + -0xe0) = 0;
          *(undefined8 *)(unaff_EBP + -0xd8) = 0;
          *(undefined8 *)(unaff_EBP + -200) = 0x547d42aea2879f2e;
          *(undefined4 *)(unaff_EBP + -0x28) = 0;
          *(uint *)(unaff_EBP + -0x2c) = param_2;
          in_XMM3_Qa = in_XMM1_Qa;
          in_XMM2_Qa = in_XMM1_Qa;
LAB_004bb5a1:
        } while (-1 < iVar8);
        unaff_EDI = *(int *)(unaff_EBP + 0xc) + param_1 * 0x48 + 8;
        *(int *)(unaff_EBP + -0xb8) = unaff_EDI;
      } while (unaff_ESI <= param_1);
      param_2 = *(uint *)(unaff_EBP + -0x2c);
      *(int *)(unaff_EBP + -0x34) = param_1 * 0x58 + *(int *)(unaff_EBP + -4) + 0x80;
      unaff_EBX = param_1;
    }
  } while( true );
LAB_004bba53:
  iVar8 = (uint)*(byte *)(puVar18 + 0xd) * 9 + 1;
  iVar17 = -1000000;
  piVar9 = *(int **)(*(int *)(unaff_EBP + 0xc) + 0x10 + iVar8 * 8);
  uVar6 = *(int *)(unaff_EBP + 0xc) + iVar8 * 8;
  *(double *)(puVar14 + 0xc) = *(double *)(puVar18 + 2) * *(double *)(puVar14 + 0xc);
  iVar8 = piVar9[0x10];
  *(uint *)(unaff_EBP + -8) = uVar6;
  if (iVar8 != 0) {
    iVar17 = 0;
    iVar11 = *(int *)(*(int *)(unaff_EBP + -0x18) + 0x14);
    if (0 < iVar11) {
      piVar10 = (int *)(*(int *)(*(int *)(unaff_EBP + -0x18) + 0x10) + 0xc);
      do {
        if (*piVar10 == iVar8) break;
        iVar17 = iVar17 + 1;
        piVar10 = piVar10 + 4;
      } while (iVar17 < iVar11);
    }
  }
  if (((*(byte *)((int)piVar9 + 0x2a) & 2) != 0) || (piVar9[3] != 0)) goto LAB_004bbb97;
  if ((**(uint **)(unaff_EBP + -0x30) & 0x8000000) == 0) {
    if ((*(byte *)((int)piVar9 + 0x2a) & 0x10) != 0) goto LAB_004bbb97;
    if (((**(uint **)(unaff_EBP + -0x30) & 0x400000) == 0) &&
       ((*(byte *)(unaff_EBP + 0x1c) & 0x10) == 0)) {
      FUN_004a0f40(*(int **)(unaff_EBP + 8),*(undefined4 *)(uVar6 + 0x2c),iVar17,piVar9,
                   (*(char *)(*(int *)(unaff_EBP + -4) + 0xc) != '\0') + 0x27);
      if ((*(char *)(*(int *)(unaff_EBP + -4) + 0xc) == '\0') &&
         (*(short *)((int)piVar9 + 0x26) < 0x40)) {
        uVar7 = *(uint *)(uVar6 + 0x38);
        uVar12 = *(uint *)(uVar6 + 0x3c);
        piVar9 = (int *)0x0;
        if (uVar7 != 0 || uVar12 != 0) {
          do {
            uVar7 = uVar7 >> 1 | uVar12 << 0x1f;
            uVar12 = uVar12 >> 1;
            piVar9 = (int *)((int)piVar9 + 1);
          } while (uVar7 != 0 || uVar12 != 0);
        }
        FUN_004aecc0(*(int **)(unaff_EBP + -0x10),(*(int **)(unaff_EBP + -0x10))[7] + -1,piVar9,
                     0xfffffff2);
      }
      goto LAB_004bbb97;
    }
    piVar10 = *(int **)(unaff_EBP + 8);
    FUN_004aab20(piVar10,iVar17,piVar9[8],'\0',*piVar9);
  }
  else {
    piVar9 = (int *)piVar9[0xe];
    if (piVar9 != (int *)0x0) {
      do {
        if (*piVar9 == *(int *)(unaff_EBP + -0x18)) break;
        piVar9 = (int *)piVar9[6];
      } while (piVar9 != (int *)0x0);
    }
    *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(uVar6 + 0x2c);
    piVar10 = *(int **)(unaff_EBP + -0x10);
    iVar8 = piVar10[7];
    if (iVar8 < piVar10[8]) {
LAB_004bbb13:
      piVar10[7] = piVar10[7] + 1;
      iVar11 = piVar10[1];
      uVar4 = *(undefined4 *)(unaff_EBP + -0x20);
      *(undefined2 *)(iVar11 + iVar8 * 0x14) = 0x87;
      *(undefined1 *)(iVar11 + 3 + iVar8 * 0x14) = 0;
      *(undefined4 *)(iVar11 + 4 + iVar8 * 0x14) = uVar4;
      *(undefined4 *)(iVar11 + 8 + iVar8 * 0x14) = 0;
      *(undefined4 *)(iVar11 + 0xc + iVar8 * 0x14) = 0;
      *(undefined4 *)(iVar11 + 0x10 + iVar8 * 0x14) = 0;
    }
    else {
      iVar11 = FUN_0047de10(piVar10);
      if (iVar11 == 0) {
        piVar10 = *(int **)(unaff_EBP + -0x10);
        goto LAB_004bbb13;
      }
      iVar8 = 1;
    }
    piVar10 = *(int **)(unaff_EBP + -0x10);
    iVar11 = *piVar10;
    if ((piVar10[1] != 0) && (*(char *)(iVar11 + 0x38) == '\0')) {
      if (iVar8 < 0) {
        iVar8 = piVar10[7] + -1;
      }
      iVar1 = piVar10[1];
      *(int *)(unaff_EBP + -0x40) = iVar8 * 5;
      FUN_0047bc80(iVar11,(int)*(char *)(iVar1 + 1 + iVar8 * 0x14),
                   *(int **)(iVar1 + 0x10 + iVar8 * 0x14));
      iVar8 = *(int *)(unaff_EBP + -0x40);
      *(undefined4 *)(iVar1 + 0x10 + iVar8 * 4) = 0;
      if (piVar9 == (int *)0x0) {
        *(undefined4 *)(iVar1 + 0x10 + iVar8 * 4) = 0;
        *(undefined1 *)(iVar1 + 1 + iVar8 * 4) = 0;
      }
      else {
        *(int **)(iVar1 + 0x10 + iVar8 * 4) = piVar9;
        *(undefined1 *)(iVar1 + 1 + iVar8 * 4) = 0xf6;
        piVar9[3] = piVar9[3] + 1;
      }
    }
    uVar6 = *(uint *)(unaff_EBP + -8);
LAB_004bbb97:
    piVar10 = *(int **)(unaff_EBP + 8);
  }
  puVar2 = *(uint **)(unaff_EBP + -0x30);
  if ((*puVar2 & 0x20000000) == 0) {
    if ((*puVar2 & 0xf0000) != 0) {
      uVar6 = puVar2[4];
      piVar9 = FUN_0049dbf0(*(int **)(unaff_EBP + 8),uVar6);
      *(int **)(unaff_EBP + -0x14) = piVar9;
      uVar4 = *(undefined4 *)(*(int *)(unaff_EBP + -0x30) + 0x20);
      *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(uVar6 + 0x28);
      piVar9 = *(int **)(unaff_EBP + -0x10);
      iVar8 = piVar9[7];
      if (iVar8 < piVar9[8]) {
LAB_004bbcaf:
        piVar9[7] = piVar9[7] + 1;
        iVar11 = piVar9[1];
        uVar3 = *(undefined4 *)(unaff_EBP + -0x20);
        *(undefined2 *)(iVar11 + iVar8 * 0x14) = 0x27;
        *(undefined1 *)(iVar11 + 3 + iVar8 * 0x14) = 0;
        *(undefined4 *)(iVar11 + 4 + iVar8 * 0x14) = uVar4;
        *(undefined4 *)(iVar11 + 8 + iVar8 * 0x14) = uVar3;
        *(int *)(iVar11 + 0xc + iVar8 * 0x14) = iVar17;
        *(undefined4 *)(iVar11 + 0x10 + iVar8 * 0x14) = 0;
      }
      else {
        iVar11 = FUN_0047de10(piVar9);
        if (iVar11 == 0) {
          piVar9 = *(int **)(unaff_EBP + -0x10);
          goto LAB_004bbcaf;
        }
        iVar8 = 1;
      }
      piVar9 = *(int **)(unaff_EBP + -0x10);
      iVar11 = piVar9[1];
      iVar1 = *piVar9;
      if ((iVar11 == 0) || (*(char *)(iVar1 + 0x38) != '\0')) {
        FUN_0047bc80(iVar1,0xfffffff0,*(int **)(unaff_EBP + -0x14));
      }
      else {
        if (iVar8 < 0) {
          iVar8 = piVar9[7] + -1;
        }
        FUN_0047bc80(iVar1,(int)*(char *)(iVar11 + 1 + iVar8 * 0x14),
                     *(int **)(iVar11 + 0x10 + iVar8 * 0x14));
        iVar1 = *(int *)(unaff_EBP + -0x14);
        *(undefined4 *)(iVar11 + 0x10 + iVar8 * 0x14) = 0;
        if (iVar1 == 0) {
          *(undefined4 *)(iVar11 + 0x10 + iVar8 * 0x14) = 0;
          *(undefined1 *)(iVar11 + 1 + iVar8 * 0x14) = 0;
        }
        else {
          *(int *)(iVar11 + 0x10 + iVar8 * 0x14) = iVar1;
          *(undefined1 *)(iVar11 + 1 + iVar8 * 0x14) = 0xfa;
        }
      }
    }
  }
  else {
    FUN_004757f0(piVar10,*(int *)(unaff_EBP + -0xbc),uVar6,*(uint *)(unaff_EBP + -0x24),
                 *(uint *)(unaff_EBP + -0x1c),puVar2);
  }
  FUN_00493400(*(int **)(unaff_EBP + 8),iVar17);
  piVar9 = *(int **)(*(int *)(unaff_EBP + -0xbc) + 4);
  uVar6 = 0;
  iVar8 = *piVar9;
  if (0 < iVar8) {
    do {
      piVar9 = piVar9 + 1;
      if (*piVar9 == *(int *)(*(int *)(unaff_EBP + -8) + 0x2c)) {
        uVar7 = 1 << (uVar6 & 0x1f);
        uVar12 = 0;
        if (0x1f < uVar6) {
          uVar12 = uVar7;
        }
        uVar7 = uVar7 ^ uVar12;
        if (0x3f < uVar6) {
          uVar12 = uVar7;
        }
        goto LAB_004bbd81;
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < iVar8);
  }
  *(undefined8 *)(unaff_EBP + -0x60) = 0;
  uVar7 = *(uint *)(unaff_EBP + -0x60);
  uVar12 = *(uint *)(unaff_EBP + -0x5c);
LAB_004bbd81:
  *(uint *)(unaff_EBP + -0x1c) = *(uint *)(unaff_EBP + -0x1c) & ~uVar12;
  puVar14 = *(undefined4 **)(unaff_EBP + -4);
  *(uint *)(unaff_EBP + -0x24) = *(uint *)(unaff_EBP + -0x24) & ~uVar7;
  puVar18 = (undefined4 *)(*(int *)(unaff_EBP + -0x30) + 0x58);
  piVar9 = (int *)(unaff_EBP + -0x28);
  *piVar9 = *piVar9 + -1;
  *(undefined4 **)(unaff_EBP + -0x30) = puVar18;
  if (*piVar9 == 0) {
    iVar8 = *(int *)(unaff_EBP + -0xc);
LAB_004bbda3:
    puVar14[4] = *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x1c);
    if (*(char *)(*(int *)(unaff_EBP + -0x18) + 0x38) == '\0') {
      uVar6 = 0xffffffff;
      iVar17 = 0;
      *(undefined4 *)(unaff_EBP + -0x14) = 0xffffffff;
      if (0 < iVar8) {
        puVar18 = puVar14 + 0x19;
        do {
          FUN_004778d0(*(int **)(unaff_EBP + 8),*(int *)(unaff_EBP + 0xc),puVar18 + -0xb,iVar17,
                       (uint)*(byte *)(puVar18 + 2),(ushort)*(undefined4 *)(unaff_EBP + 0x1c));
          uVar20 = FUN_004738d0(*(undefined4 **)(unaff_EBP + -4),iVar17,
                                (ushort)*(undefined4 *)(unaff_EBP + 0x1c),uVar6,
                                *(uint *)(unaff_EBP + -0x14));
          uVar6 = (uint)uVar20;
          uVar4 = *puVar18;
          *(int *)(unaff_EBP + -0x14) = (int)((ulonglong)uVar20 >> 0x20);
          puVar14 = *(undefined4 **)(unaff_EBP + -4);
          iVar17 = iVar17 + 1;
          puVar14[5] = uVar4;
          puVar18 = puVar18 + 0x16;
        } while (iVar17 < *(int *)(unaff_EBP + -0xc));
      }
      return puVar14;
    }
LAB_004bb949:
    iVar8 = *(int *)(unaff_EBP + -0x18);
    *(undefined8 *)(*(int *)(unaff_EBP + 8) + 0x1b8) = *(undefined8 *)(puVar14 + 10);
    FUN_004c2070(iVar8,puVar14);
    return (undefined4 *)0x0;
  }
  goto LAB_004bba53;
}


/* FUN_004bcb50 @ 004bcb50  kind=gamemisc  attributed-by=none  size=106 */

uint __cdecl FUN_004bcb50(int *param_1,char *param_2,char *param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1[3] != 0) {
    (*DAT_00582b18)(param_1[3]);
  }
  uVar2 = FUN_0049fde0(param_1,param_2,param_3,param_4);
  if (((char)param_1[0xe] != '\0') || (uVar2 == 0xc0a)) {
    FUN_004961f0((int)param_1,7,(byte *)0x0);
    *(undefined1 *)(param_1 + 0xe) = 0;
    uVar2 = 7;
  }
  uVar1 = param_1[0xc];
  if (param_1[3] != 0) {
    (*DAT_00582b20)(param_1[3]);
  }
  return uVar1 & uVar2;
}


/* FUN_004bccb0 @ 004bccb0  kind=gamemisc  attributed-by=none  size=162 */

byte * __cdecl FUN_004bccb0(char *param_1,byte *param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  char *pcVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  byte *pbVar9;
  bool bVar10;
  
  if (param_1 == (char *)0x0) {
    return (byte *)0x0;
  }
  cVar1 = *param_1;
  pcVar5 = param_1;
  while (cVar1 != '\0') {
    pcVar5 = pcVar5 + 1;
    cVar1 = *pcVar5;
  }
  pbVar9 = (byte *)(param_1 + ((int)pcVar5 - (int)param_1 & 0x3fffffffU) + 1);
  bVar2 = *pbVar9;
  do {
    pbVar6 = pbVar9;
    pbVar7 = param_2;
    if (bVar2 == 0) {
      return (byte *)0x0;
    }
    do {
      bVar3 = *pbVar6;
      bVar10 = bVar3 < *pbVar7;
      pbVar4 = pbVar9;
      if (bVar3 != *pbVar7) {
LAB_004bcd07:
        uVar8 = -(uint)bVar10 | 1;
        goto joined_r0x004bcd10;
      }
      if (bVar3 == 0) break;
      bVar3 = pbVar6[1];
      bVar10 = bVar3 < pbVar7[1];
      if (bVar3 != pbVar7[1]) goto LAB_004bcd07;
      pbVar6 = pbVar6 + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar3 != 0);
    uVar8 = 0;
joined_r0x004bcd10:
    while (bVar2 != 0) {
      bVar2 = pbVar4[1];
      pbVar4 = pbVar4 + 1;
    }
    pbVar9 = pbVar9 + ((int)pbVar4 - (int)pbVar9 & 0x3fffffffU) + 1;
    if (uVar8 == 0) {
      return pbVar9;
    }
    uVar8 = 0;
    if (pbVar9 != (byte *)0x0) {
      bVar2 = *pbVar9;
      pbVar6 = pbVar9;
      while (bVar2 != 0) {
        pbVar6 = pbVar6 + 1;
        bVar2 = *pbVar6;
      }
      uVar8 = (int)pbVar6 - (int)pbVar9 & 0x3fffffff;
    }
    pbVar9 = pbVar9 + uVar8 + 1;
    bVar2 = *pbVar9;
  } while( true );
}


/* FUN_004bcd60 @ 004bcd60  kind=gamemisc  attributed-by=none  size=48 */

void * __cdecl FUN_004bcd60(undefined4 param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = FUN_00480740(param_1);
  if (pvVar1 == (void *)0x0) {
    return (void *)0x0;
  }
  pvVar2 = FUN_004bdc10(pvVar1);
  FUN_00466dd0((int)pvVar1);
  return pvVar2;
}


/* FUN_004bcdb0 @ 004bcdb0  kind=gamemisc  attributed-by=none  size=99 */

undefined4 __cdecl FUN_004bcdb0(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0xc) {
    uVar2 = (uint)(byte)(&DAT_005699f8)[param_2];
    uVar1 = (uint)(byte)(&DAT_00569a04)[param_2];
  }
  else {
    uVar2 = 100;
    uVar1 = param_2 * 100 - 0x368;
  }
  if ((param_1[0x77] < (int)(uVar1 + uVar2)) && (uVar2 = param_1[0x77] - uVar1, (int)uVar2 < 1)) {
    return 0;
  }
  (**(code **)(*param_1 + 0x3c))(*param_1,uVar2 * 1000);
  return 1;
}


/* FUN_004bdb20 @ 004bdb20  kind=gamemisc  attributed-by=none  size=83 */

bool __cdecl FUN_004bdb20(int *param_1,int param_2,uint param_3,uint param_4)

{
  bool bVar1;
  undefined3 extraout_var;
  
  if (((param_1[2] == *(int *)(param_2 + 0x2c)) && ((short)param_1[4] == 2)) &&
     ((param_1[6] & param_3) == 0 && (param_1[7] & param_4) == 0)) {
    bVar1 = FUN_0049db30(*param_1,*(char *)(*(int *)(*(int *)(param_2 + 0x10) + 4) + 0x15 +
                                           param_1[3] * 0x18));
    return CONCAT31(extraout_var,bVar1) != 0;
  }
  return false;
}


/* FUN_004bdb80 @ 004bdb80  kind=gamemisc  attributed-by=none  size=129 */

void * __cdecl FUN_004bdb80(undefined4 param_1)

{
  int iVar1;
  size_t _Size;
  void *_Dst;
  
  iVar1 = (*(code *)PTR_AreFileApisANSI_0058356c)();
  _Size = (*(code *)PTR_WideCharToMultiByte_00583824)(iVar1 == 0,0,param_1,0xffffffff,0,0,0,0);
  if (_Size == 0) {
    return (void *)0x0;
  }
  _Dst = (void *)FUN_004a0350(_Size);
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,_Size);
    if (_Dst != (void *)0x0) {
      iVar1 = (*(code *)PTR_WideCharToMultiByte_00583824)
                        (iVar1 == 0,0,param_1,0xffffffff,_Dst,_Size,0,0);
      if (iVar1 == 0) {
        FUN_00466dd0((int)_Dst);
        _Dst = (void *)0x0;
      }
      return _Dst;
    }
  }
  return (void *)0x0;
}


/* FUN_004bdc10 @ 004bdc10  kind=gamemisc  attributed-by=none  size=122 */

void * __cdecl FUN_004bdc10(undefined4 param_1)

{
  size_t _Size;
  void *_Dst;
  int iVar1;
  
  _Size = (*(code *)PTR_WideCharToMultiByte_00583824)(0xfde9,0,param_1,0xffffffff,0,0,0,0);
  if (_Size == 0) {
    return (void *)0x0;
  }
  _Dst = (void *)FUN_004a0350(_Size);
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,_Size);
    if (_Dst != (void *)0x0) {
      iVar1 = (*(code *)PTR_WideCharToMultiByte_00583824)
                        (0xfde9,0,param_1,0xffffffff,_Dst,_Size,0,0);
      if (iVar1 == 0) {
        FUN_00466dd0((int)_Dst);
        _Dst = (void *)0x0;
      }
      return _Dst;
    }
  }
  return (void *)0x0;
}


/* FUN_004bdc90 @ 004bdc90  kind=gamemisc  attributed-by=none  size=189 */

void __cdecl FUN_004bdc90(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_9c [4];
  int local_8c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  if (DAT_00583f38 == 0) {
    local_9c[0] = 0x94;
    (*(code *)PTR_GetVersionExA_00583704)(local_9c);
    DAT_00583f38 = (local_8c == 2) + 1;
  }
  if (DAT_00583f38 == 2) {
    uVar2 = 0x1fe;
    iVar1 = DAT_00582bb8 + 2;
  }
  else {
    uVar2 = 1;
    iVar1 = DAT_00582bb8 + 2 + (int)*(short *)(param_1 + 0xe);
  }
  iVar1 = FUN_004c28e0((undefined4 *)(param_1 + 8),iVar1,0,uVar2,0);
  if (iVar1 == 0) {
    iVar1 = (*(code *)PTR_GetLastError_005836a4)();
    if (iVar1 != 0x9e) {
      *(int *)(param_1 + 0x14) = iVar1;
      FUN_004c23f0(0x80a,iVar1);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004bebc0 @ 004bebc0  kind=gamemisc  attributed-by=none  size=120 */

void * __cdecl FUN_004bebc0(undefined4 param_1)

{
  int iVar1;
  void *_Dst;
  
  iVar1 = (*(code *)PTR_MultiByteToWideChar_005837ac)(0xfde9,0,param_1,0xffffffff,0,0);
  if (iVar1 == 0) {
    return (void *)0x0;
  }
  _Dst = (void *)FUN_004a0350(iVar1 * 2);
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,iVar1 * 2);
    if (_Dst != (void *)0x0) {
      iVar1 = (*(code *)PTR_MultiByteToWideChar_005837ac)(0xfde9,0,param_1,0xffffffff,_Dst,iVar1);
      if (iVar1 == 0) {
        FUN_00466dd0((int)_Dst);
        _Dst = (void *)0x0;
      }
      return _Dst;
    }
  }
  return (void *)0x0;
}


/* FUN_004bec7a @ 004bec7a  kind=gamemisc  attributed-by=none  size=384 */

uint FUN_004bec7a(void)

{
  uint *puVar1;
  char cVar2;
  int *piVar3;
  undefined1 uVar4;
  int in_EAX;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined3 extraout_var;
  uint uVar9;
  char *pcVar10;
  uint unaff_EBX;
  int iVar11;
  uint uVar12;
  int unaff_EBP;
  int unaff_ESI;
  int *piVar13;
  undefined4 *unaff_EDI;
  undefined1 *puVar14;
  bool bVar15;
  undefined4 uVar16;
  undefined4 *puVar17;
  
  while (in_EAX < (int)unaff_EDI[5]) {
    puVar7 = *(undefined4 **)(unaff_EDI[4] + 4 + unaff_ESI);
    if ((puVar7 != (undefined4 *)0x0) && (*(char *)(puVar7 + 2) == '\x02')) {
      *(undefined4 *)(unaff_EBP + -0x14) = 1;
      if (*(int *)(unaff_EBP + 0xc) != 1) {
        *(int *)(unaff_EBP + -8) = *(int *)(unaff_EBP + -8) + 1;
      }
      FUN_0048fbc0(puVar7);
      unaff_EBX = 0;
      if (*(int *)(*(int *)puVar7[1] + 0xb8) == 0) {
        unaff_EBX = FUN_004854a0(*(int *)puVar7[1],4);
      }
      if (*(char *)((int)puVar7 + 9) != '\0') {
        piVar13 = puVar7 + 3;
        *piVar13 = *piVar13 + -1;
        if (*piVar13 == 0) {
          if (*(int *)(puVar7[1] + 0x38) != 0) {
            (*DAT_00582b20)(*(int *)(puVar7[1] + 0x38));
          }
          *(undefined1 *)((int)puVar7 + 10) = 0;
        }
      }
    }
    in_EAX = *(int *)(unaff_EBP + 0xc) + 1;
    unaff_ESI = *(int *)(unaff_EBP + -0x18) + 0x10;
    *(int *)(unaff_EBP + 0xc) = in_EAX;
    *(int *)(unaff_EBP + -0x18) = unaff_ESI;
    if (unaff_EBX != 0) {
      return unaff_EBX;
    }
  }
  if (unaff_EBX != 0) {
    return unaff_EBX;
  }
  if (((*(int *)(unaff_EBP + -0x14) != 0) && ((code *)unaff_EDI[0x2b] != (code *)0x0)) &&
     (iVar5 = (*(code *)unaff_EDI[0x2b])(unaff_EDI[0x2a]), iVar5 != 0)) {
    return 0x13;
  }
  uVar8 = 0;
  pcVar10 = "";
  iVar5 = **(int **)(*(int *)(unaff_EDI[4] + 4) + 4);
  if (*(char *)(iVar5 + 0xe) == '\0') {
    pcVar10 = *(char **)(iVar5 + 0x90);
  }
  if (pcVar10 != (char *)0x0) {
    cVar2 = *pcVar10;
    pcVar6 = pcVar10;
    while (cVar2 != '\0') {
      pcVar6 = pcVar6 + 1;
      cVar2 = *pcVar6;
    }
    if ((((int)pcVar6 - (int)pcVar10 & 0x3fffffffU) != 0) && (1 < *(int *)(unaff_EBP + -8))) {
      *(undefined4 *)(unaff_EBP + -8) = *unaff_EDI;
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      pcVar10 = "";
      if (*(char *)(iVar5 + 0xe) == '\0') {
        pcVar10 = *(char **)(iVar5 + 0x90);
      }
      iVar5 = 0;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      *(undefined8 *)(unaff_EBP + -0x10) = 0;
      if (pcVar10 == (char *)0x0) {
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
      }
      else {
        cVar2 = *pcVar10;
        pcVar6 = pcVar10;
        while (cVar2 != '\0') {
          pcVar6 = pcVar6 + 1;
          cVar2 = *pcVar6;
        }
        *(uint *)(unaff_EBP + -0x14) = (int)pcVar6 - (int)pcVar10 & 0x3fffffff;
      }
      puVar7 = (undefined4 *)FUN_004a02d0((int)unaff_EDI,(byte *)"%s-mjXXXXXX9XXz");
      *(undefined4 **)(unaff_EBP + 0xc) = puVar7;
      if (puVar7 == (undefined4 *)0x0) {
        return 7;
      }
LAB_004bee00:
      if (iVar5 == 0) {
LAB_004bee22:
        bVar15 = DAT_00582acc == 0;
        *(int *)(unaff_EBP + -0x1c) = iVar5 + 1;
        iVar5 = 4;
        puVar14 = (undefined1 *)(unaff_EBP + -0x20);
        if (bVar15) {
          iVar11 = 0;
        }
        else {
          iVar11 = (*DAT_00582b10)(5);
          if (iVar11 != 0) {
            (*DAT_00582b18)(iVar11);
          }
        }
        do {
          uVar4 = FUN_00487580();
          *puVar14 = uVar4;
          puVar14 = puVar14 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        if (iVar11 != 0) {
          (*DAT_00582b20)(iVar11);
        }
        puVar7 = *(undefined4 **)(unaff_EBP + 0xc);
        FUN_00466a80(0xd,*(int *)(unaff_EBP + -0x14) + (int)puVar7,(byte *)"-mj%06X9%02X");
        iVar5 = *(int *)(unaff_EBP + -8);
        uVar8 = (**(code **)(iVar5 + 0x20))(iVar5,puVar7,0,unaff_EBP + -0x24);
        if (uVar8 != 0) goto LAB_004bf1e4;
        if (*(int *)(unaff_EBP + -0x24) == 0) goto LAB_004beedf;
        iVar5 = *(int *)(unaff_EBP + -0x1c);
        goto LAB_004bee00;
      }
      if (iVar5 < 0x65) {
        if (iVar5 == 1) {
          FUN_004683f0(0xd,"MJ collide: %s");
        }
        goto LAB_004bee22;
      }
      pcVar10 = "MJ delete: %s";
      uVar16 = 0xd;
      puVar17 = puVar7;
      FUN_004683f0(0xd,"MJ delete: %s");
      iVar5 = *(int *)(unaff_EBP + -8);
      (**(code **)(iVar5 + 0x1c))(iVar5,puVar7,0,uVar16,pcVar10,puVar17);
      if (uVar8 != 0) goto LAB_004bf1e4;
LAB_004beedf:
      uVar8 = FUN_004a12e0(iVar5,puVar7,(undefined4 *)(unaff_EBP + -4),0x4016,0);
      if (uVar8 != 0) {
LAB_004bf1e4:
        FUN_00494b00(*(int *)(unaff_EBP + 8),puVar7);
        return uVar8;
      }
      unaff_EDI = *(undefined4 **)(unaff_EBP + 8);
      iVar5 = 0;
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      if (0 < (int)unaff_EDI[5]) {
        *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0xc);
        iVar11 = 0;
        *(undefined4 *)(unaff_EBP + -0x20) = 0;
        *(undefined4 *)(unaff_EBP + -0xc) = *(undefined4 *)(unaff_EBP + -0x10);
        do {
          puVar7 = *(undefined4 **)(unaff_EDI[4] + 4 + iVar11);
          if (((puVar7 != (undefined4 *)0x0) && (*(char *)(puVar7 + 2) == '\x02')) &&
             (pcVar10 = *(char **)(*(int *)puVar7[1] + 0x94), pcVar10 != (char *)0x0)) {
            if (*(int *)(unaff_EBP + -0x18) == 0) {
              uVar4 = FUN_00491f10(puVar7);
              *(uint *)(unaff_EBP + -0x18) = (uint)(CONCAT31(extraout_var,uVar4) == 0);
            }
            cVar2 = *pcVar10;
            pcVar6 = pcVar10;
            while (cVar2 != '\0') {
              pcVar6 = pcVar6 + 1;
              cVar2 = *pcVar6;
            }
            uVar8 = (**(code **)(**(int **)(unaff_EBP + -4) + 0xc))
                              (*(int **)(unaff_EBP + -4),pcVar10,
                               ((int)pcVar6 - (int)pcVar10 & 0x3fffffffU) + 1,
                               *(undefined4 *)(unaff_EBP + -0xc),*(undefined4 *)(unaff_EBP + -0x14))
            ;
            cVar2 = *pcVar10;
            pcVar6 = pcVar10;
            while (cVar2 != '\0') {
              pcVar6 = pcVar6 + 1;
              cVar2 = *pcVar6;
            }
            uVar9 = ((int)pcVar6 - (int)pcVar10 & 0x3fffffffU) + 1;
            puVar1 = (uint *)(unaff_EBP + -0xc);
            uVar12 = *puVar1;
            *puVar1 = *puVar1 + uVar9;
            *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + (uint)CARRY4(uVar12,uVar9);
            if (uVar8 != 0) {
              piVar13 = *(int **)(unaff_EBP + -4);
              goto LAB_004bf079;
            }
            iVar5 = *(int *)(unaff_EBP + -0x1c);
          }
          iVar5 = iVar5 + 1;
          iVar11 = *(int *)(unaff_EBP + -0x20) + 0x10;
          *(int *)(unaff_EBP + -0x1c) = iVar5;
          *(int *)(unaff_EBP + -0x20) = iVar11;
        } while (iVar5 < (int)unaff_EDI[5]);
        if (*(int *)(unaff_EBP + -0x18) != 0) {
          piVar13 = *(int **)(unaff_EBP + -4);
          uVar8 = (**(code **)(*piVar13 + 0x30))(piVar13);
          if (((uVar8 & 0x400) == 0) &&
             (uVar8 = (**(code **)(*piVar13 + 0x14))(piVar13,2), uVar8 != 0)) {
LAB_004bf079:
            if (*piVar13 != 0) {
              (**(code **)(*piVar13 + 4))(piVar13);
              *piVar13 = 0;
            }
            FUN_00466dd0((int)piVar13);
            puVar7 = *(undefined4 **)(unaff_EBP + 0xc);
            (**(code **)(*(int *)(unaff_EBP + -8) + 0x1c))(*(int *)(unaff_EBP + -8),puVar7,0);
            FUN_00494b00((int)unaff_EDI,puVar7);
            return uVar8;
          }
        }
      }
      uVar8 = 0;
      iVar11 = 0;
      iVar5 = 0;
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
      do {
        if ((int)unaff_EDI[5] <= iVar11) break;
        puVar7 = *(undefined4 **)(unaff_EDI[4] + 4 + iVar5);
        if (puVar7 != (undefined4 *)0x0) {
          uVar8 = FUN_0048f2f0(puVar7,*(char **)(unaff_EBP + 0xc));
          iVar5 = *(int *)(unaff_EBP + -0x20);
        }
        iVar5 = iVar5 + 0x10;
        iVar11 = iVar11 + 1;
        *(int *)(unaff_EBP + -0x20) = iVar5;
      } while (uVar8 == 0);
      piVar13 = *(int **)(unaff_EBP + -4);
      if (*piVar13 != 0) {
        (**(code **)(*piVar13 + 4))(piVar13);
        *piVar13 = 0;
      }
      FUN_00466dd0((int)piVar13);
      if (uVar8 != 0) {
        FUN_00494b00((int)unaff_EDI,*(undefined4 **)(unaff_EBP + 0xc));
        return uVar8;
      }
      puVar7 = *(undefined4 **)(unaff_EBP + 0xc);
      uVar8 = (**(code **)(*(int *)(unaff_EBP + -8) + 0x1c))(*(int *)(unaff_EBP + -8),puVar7,1);
      *(uint *)(unaff_EBP + -0x18) = uVar8;
      FUN_00494b00((int)unaff_EDI,puVar7);
      if (uVar8 != 0) {
        return uVar8;
      }
      if (DAT_00583e74 != (code *)0x0) {
        (*DAT_00583e74)();
      }
      uVar8 = 0;
      if (0 < (int)unaff_EDI[5]) {
        iVar11 = 0;
        *(undefined4 *)(unaff_EBP + 0xc) = 0;
        iVar5 = 0;
        do {
          piVar13 = *(int **)(unaff_EDI[4] + 4 + iVar11);
          if ((piVar13 != (int *)0x0) && ((char)piVar13[2] != '\0')) {
            FUN_0048fbc0(piVar13);
            if ((char)piVar13[2] == '\x02') {
              puVar7 = (undefined4 *)piVar13[1];
              *(undefined4 **)(unaff_EBP + -0x1c) = puVar7;
              piVar3 = (int *)*puVar7;
              *(int **)(unaff_EBP + -0x20) = piVar3;
              if (piVar3[10] == 0) {
                if (((*(char *)((int)piVar3 + 0xf) == '\x02') && ((char)piVar3[1] != '\0')) &&
                   (*(char *)((int)piVar3 + 5) == '\x01')) {
                  *(undefined1 *)((int)piVar3 + 0xf) = 1;
                }
                else {
                  uVar8 = FUN_00484760(piVar3,(uint)*(byte *)((int)piVar3 + 0x12));
                  if (((uVar8 & 0xff) == 0xd) || ((uVar8 & 0xff) == 10)) {
                    iVar11 = *(int *)(unaff_EBP + -0x20);
                    *(uint *)(iVar11 + 0x28) = uVar8;
                    *(undefined1 *)(iVar11 + 0xf) = 6;
                  }
                }
              }
              *(undefined1 *)(*(int *)(unaff_EBP + -0x1c) + 0x13) = 1;
            }
            FUN_00471200(piVar13);
            if (*(char *)((int)piVar13 + 9) != '\0') {
              piVar3 = piVar13 + 3;
              *piVar3 = *piVar3 + -1;
              if (*piVar3 == 0) {
                if (*(int *)(piVar13[1] + 0x38) != 0) {
                  (*DAT_00582b20)(*(int *)(piVar13[1] + 0x38));
                }
                *(undefined1 *)((int)piVar13 + 10) = 0;
              }
            }
          }
          iVar5 = iVar5 + 1;
          iVar11 = *(int *)(unaff_EBP + 0xc) + 0x10;
          *(int *)(unaff_EBP + 0xc) = iVar11;
        } while (iVar5 < (int)unaff_EDI[5]);
        uVar8 = *(uint *)(unaff_EBP + -0x18);
      }
      if (DAT_00583e78 != (code *)0x0) {
        (*DAT_00583e78)();
        FUN_004719f0((int)unaff_EDI,0x40);
        return uVar8;
      }
      goto LAB_004bf343;
    }
  }
  iVar11 = 0;
  iVar5 = 0;
  *(undefined4 *)(unaff_EBP + 0xc) = 0;
  do {
    if ((int)unaff_EDI[5] <= iVar11) break;
    puVar7 = *(undefined4 **)(unaff_EDI[4] + 4 + iVar5);
    if (puVar7 != (undefined4 *)0x0) {
      uVar8 = FUN_0048f2f0(puVar7,(char *)0x0);
      iVar5 = *(int *)(unaff_EBP + 0xc);
    }
    iVar5 = iVar5 + 0x10;
    iVar11 = iVar11 + 1;
    *(int *)(unaff_EBP + 0xc) = iVar5;
  } while (uVar8 == 0);
  iVar5 = 0;
  *(undefined4 *)(unaff_EBP + 0xc) = 0;
  if (uVar8 != 0) {
    return uVar8;
  }
  iVar11 = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  uVar12 = 0;
  while (iVar5 < (int)unaff_EDI[5]) {
    piVar13 = *(int **)(unaff_EDI[4] + 4 + iVar11);
    if (piVar13 != (int *)0x0) {
      if ((char)piVar13[2] != '\0') {
        FUN_0048fbc0(piVar13);
        if ((char)piVar13[2] == '\x02') {
          puVar7 = (undefined4 *)piVar13[1];
          *(undefined4 **)(unaff_EBP + -0x1c) = puVar7;
          piVar3 = (int *)*puVar7;
          *(int **)(unaff_EBP + -0x24) = piVar3;
          uVar12 = piVar3[10];
          if (uVar12 != 0) {
LAB_004bf31a:
            if (*(char *)((int)piVar13 + 9) != '\0') {
              piVar3 = piVar13 + 3;
              *piVar3 = *piVar3 + -1;
              if (*piVar3 == 0) {
                if (*(int *)(piVar13[1] + 0x38) != 0) {
                  (*DAT_00582b20)(*(int *)(piVar13[1] + 0x38));
                }
                *(undefined1 *)((int)piVar13 + 10) = 0;
              }
            }
            goto LAB_004bf2c7;
          }
          if (((*(char *)((int)piVar3 + 0xf) == '\x02') && ((char)piVar3[1] != '\0')) &&
             (*(char *)((int)piVar3 + 5) == '\x01')) {
            *(undefined1 *)((int)piVar3 + 0xf) = 1;
          }
          else {
            uVar12 = FUN_00484760(piVar3,(uint)*(byte *)((int)piVar3 + 0x12));
            if (((uVar12 & 0xff) == 0xd) || ((uVar12 & 0xff) == 10)) {
              iVar5 = *(int *)(unaff_EBP + -0x24);
              *(uint *)(iVar5 + 0x28) = uVar12;
              *(undefined1 *)(iVar5 + 0xf) = 6;
            }
            puVar7 = *(undefined4 **)(unaff_EBP + -0x1c);
            if (uVar12 != 0) goto LAB_004bf31a;
          }
          *(undefined1 *)((int)puVar7 + 0x13) = 1;
        }
        FUN_00471200(piVar13);
        if (*(char *)((int)piVar13 + 9) != '\0') {
          piVar3 = piVar13 + 3;
          *piVar3 = *piVar3 + -1;
          if (*piVar3 == 0) {
            if (*(int *)(piVar13[1] + 0x38) != 0) {
              (*DAT_00582b20)(*(int *)(piVar13[1] + 0x38));
            }
            *(undefined1 *)((int)piVar13 + 10) = 0;
          }
        }
      }
      uVar12 = 0;
    }
LAB_004bf2c7:
    iVar5 = *(int *)(unaff_EBP + 0xc) + 1;
    iVar11 = *(int *)(unaff_EBP + -0x20) + 0x10;
    *(int *)(unaff_EBP + 0xc) = iVar5;
    *(int *)(unaff_EBP + -0x20) = iVar11;
    if (uVar12 != 0) {
      return uVar12;
    }
  }
  uVar8 = 0;
  if (uVar12 != 0) {
    return uVar12;
  }
LAB_004bf343:
  FUN_004719f0((int)unaff_EDI,0x40);
  return uVar8;
}


/* FUN_004bedfa @ 004bedfa  kind=gamemisc  attributed-by=none  size=768 */

uint FUN_004bedfa(void)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  int *piVar4;
  undefined1 uVar5;
  undefined3 extraout_var;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint unaff_EBX;
  int iVar10;
  int unaff_EBP;
  int unaff_ESI;
  int iVar11;
  int *piVar12;
  undefined4 *unaff_EDI;
  undefined1 *puVar13;
  bool bVar14;
  undefined4 uVar15;
  char *pcVar16;
  undefined4 *puVar17;
  
LAB_004bee00:
  if (unaff_ESI != 0) {
    if (100 < unaff_ESI) {
      pcVar16 = "MJ delete: %s";
      uVar15 = 0xd;
      puVar17 = unaff_EDI;
      FUN_004683f0(0xd,"MJ delete: %s");
      iVar11 = *(int *)(unaff_EBP + -8);
      (**(code **)(iVar11 + 0x1c))(iVar11,unaff_EDI,0,uVar15,pcVar16,puVar17);
      if (unaff_EBX != 0) goto LAB_004bf1e4;
LAB_004beedf:
      unaff_EBX = FUN_004a12e0(iVar11,unaff_EDI,(undefined4 *)(unaff_EBP + -4),0x4016,0);
      if (unaff_EBX != 0) {
LAB_004bf1e4:
        FUN_00494b00(*(int *)(unaff_EBP + 8),unaff_EDI);
        return unaff_EBX;
      }
      iVar11 = *(int *)(unaff_EBP + 8);
      iVar10 = 0;
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      if (0 < *(int *)(iVar11 + 0x14)) {
        *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0xc);
        iVar9 = 0;
        *(undefined4 *)(unaff_EBP + -0x20) = 0;
        *(undefined4 *)(unaff_EBP + -0xc) = *(undefined4 *)(unaff_EBP + -0x10);
        do {
          puVar17 = *(undefined4 **)(*(int *)(iVar11 + 0x10) + 4 + iVar9);
          if (((puVar17 != (undefined4 *)0x0) && (*(char *)(puVar17 + 2) == '\x02')) &&
             (pcVar16 = *(char **)(*(int *)puVar17[1] + 0x94), pcVar16 != (char *)0x0)) {
            if (*(int *)(unaff_EBP + -0x18) == 0) {
              uVar5 = FUN_00491f10(puVar17);
              *(uint *)(unaff_EBP + -0x18) = (uint)(CONCAT31(extraout_var,uVar5) == 0);
            }
            cVar3 = *pcVar16;
            pcVar6 = pcVar16;
            while (cVar3 != '\0') {
              pcVar6 = pcVar6 + 1;
              cVar3 = *pcVar6;
            }
            uVar7 = (**(code **)(**(int **)(unaff_EBP + -4) + 0xc))
                              (*(int **)(unaff_EBP + -4),pcVar16,
                               ((int)pcVar6 - (int)pcVar16 & 0x3fffffffU) + 1,
                               *(undefined4 *)(unaff_EBP + -0xc),*(undefined4 *)(unaff_EBP + -0x14))
            ;
            cVar3 = *pcVar16;
            pcVar6 = pcVar16;
            while (cVar3 != '\0') {
              pcVar6 = pcVar6 + 1;
              cVar3 = *pcVar6;
            }
            uVar8 = ((int)pcVar6 - (int)pcVar16 & 0x3fffffffU) + 1;
            puVar1 = (uint *)(unaff_EBP + -0xc);
            uVar2 = *puVar1;
            *puVar1 = *puVar1 + uVar8;
            *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + (uint)CARRY4(uVar2,uVar8);
            if (uVar7 != 0) {
              piVar12 = *(int **)(unaff_EBP + -4);
              goto LAB_004bf079;
            }
            iVar10 = *(int *)(unaff_EBP + -0x1c);
          }
          iVar10 = iVar10 + 1;
          iVar9 = *(int *)(unaff_EBP + -0x20) + 0x10;
          *(int *)(unaff_EBP + -0x1c) = iVar10;
          *(int *)(unaff_EBP + -0x20) = iVar9;
        } while (iVar10 < *(int *)(iVar11 + 0x14));
        if (*(int *)(unaff_EBP + -0x18) != 0) {
          piVar12 = *(int **)(unaff_EBP + -4);
          uVar7 = (**(code **)(*piVar12 + 0x30))(piVar12);
          if (((uVar7 & 0x400) == 0) &&
             (uVar7 = (**(code **)(*piVar12 + 0x14))(piVar12,2), uVar7 != 0)) {
LAB_004bf079:
            if (*piVar12 != 0) {
              (**(code **)(*piVar12 + 4))(piVar12);
              *piVar12 = 0;
            }
            FUN_00466dd0((int)piVar12);
            puVar17 = *(undefined4 **)(unaff_EBP + 0xc);
            (**(code **)(*(int *)(unaff_EBP + -8) + 0x1c))(*(int *)(unaff_EBP + -8),puVar17,0);
            FUN_00494b00(iVar11,puVar17);
            return uVar7;
          }
        }
      }
      uVar7 = 0;
      iVar9 = 0;
      iVar10 = 0;
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
      do {
        if (*(int *)(iVar11 + 0x14) <= iVar9) break;
        puVar17 = *(undefined4 **)(*(int *)(iVar11 + 0x10) + 4 + iVar10);
        if (puVar17 != (undefined4 *)0x0) {
          uVar7 = FUN_0048f2f0(puVar17,*(char **)(unaff_EBP + 0xc));
          iVar10 = *(int *)(unaff_EBP + -0x20);
        }
        iVar10 = iVar10 + 0x10;
        iVar9 = iVar9 + 1;
        *(int *)(unaff_EBP + -0x20) = iVar10;
      } while (uVar7 == 0);
      piVar12 = *(int **)(unaff_EBP + -4);
      if (*piVar12 != 0) {
        (**(code **)(*piVar12 + 4))(piVar12);
        *piVar12 = 0;
      }
      FUN_00466dd0((int)piVar12);
      if (uVar7 != 0) {
        FUN_00494b00(iVar11,*(undefined4 **)(unaff_EBP + 0xc));
        return uVar7;
      }
      puVar17 = *(undefined4 **)(unaff_EBP + 0xc);
      uVar7 = (**(code **)(*(int *)(unaff_EBP + -8) + 0x1c))(*(int *)(unaff_EBP + -8),puVar17,1);
      *(uint *)(unaff_EBP + -0x18) = uVar7;
      FUN_00494b00(iVar11,puVar17);
      if (uVar7 == 0) {
        if (DAT_00583e74 != (code *)0x0) {
          (*DAT_00583e74)();
        }
        if (0 < *(int *)(iVar11 + 0x14)) {
          iVar9 = 0;
          *(undefined4 *)(unaff_EBP + 0xc) = 0;
          iVar10 = 0;
          do {
            piVar12 = *(int **)(*(int *)(iVar11 + 0x10) + 4 + iVar9);
            if ((piVar12 != (int *)0x0) && ((char)piVar12[2] != '\0')) {
              FUN_0048fbc0(piVar12);
              if ((char)piVar12[2] == '\x02') {
                puVar17 = (undefined4 *)piVar12[1];
                *(undefined4 **)(unaff_EBP + -0x1c) = puVar17;
                piVar4 = (int *)*puVar17;
                *(int **)(unaff_EBP + -0x20) = piVar4;
                if (piVar4[10] == 0) {
                  if (((*(char *)((int)piVar4 + 0xf) == '\x02') && ((char)piVar4[1] != '\0')) &&
                     (*(char *)((int)piVar4 + 5) == '\x01')) {
                    *(undefined1 *)((int)piVar4 + 0xf) = 1;
                  }
                  else {
                    uVar7 = FUN_00484760(piVar4,(uint)*(byte *)((int)piVar4 + 0x12));
                    if (((uVar7 & 0xff) == 0xd) || ((uVar7 & 0xff) == 10)) {
                      iVar9 = *(int *)(unaff_EBP + -0x20);
                      *(uint *)(iVar9 + 0x28) = uVar7;
                      *(undefined1 *)(iVar9 + 0xf) = 6;
                    }
                  }
                }
                *(undefined1 *)(*(int *)(unaff_EBP + -0x1c) + 0x13) = 1;
              }
              FUN_00471200(piVar12);
              if (*(char *)((int)piVar12 + 9) != '\0') {
                piVar4 = piVar12 + 3;
                *piVar4 = *piVar4 + -1;
                if (*piVar4 == 0) {
                  if (*(int *)(piVar12[1] + 0x38) != 0) {
                    (*DAT_00582b20)(*(int *)(piVar12[1] + 0x38));
                  }
                  *(undefined1 *)((int)piVar12 + 10) = 0;
                }
              }
            }
            iVar10 = iVar10 + 1;
            iVar9 = *(int *)(unaff_EBP + 0xc) + 0x10;
            *(int *)(unaff_EBP + 0xc) = iVar9;
          } while (iVar10 < *(int *)(iVar11 + 0x14));
          uVar7 = *(uint *)(unaff_EBP + -0x18);
        }
        if (DAT_00583e78 != (code *)0x0) {
          (*DAT_00583e78)();
          FUN_004719f0(iVar11,0x40);
          return uVar7;
        }
        FUN_004719f0(iVar11,0x40);
      }
      return uVar7;
    }
    if (unaff_ESI == 1) {
      FUN_004683f0(0xd,"MJ collide: %s");
    }
  }
  bVar14 = DAT_00582acc == 0;
  *(int *)(unaff_EBP + -0x1c) = unaff_ESI + 1;
  iVar11 = 4;
  puVar13 = (undefined1 *)(unaff_EBP + -0x20);
  if (bVar14) {
    iVar10 = 0;
  }
  else {
    iVar10 = (*DAT_00582b10)(5);
    if (iVar10 != 0) {
      (*DAT_00582b18)(iVar10);
    }
  }
  do {
    uVar5 = FUN_00487580();
    *puVar13 = uVar5;
    puVar13 = puVar13 + 1;
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  if (iVar10 != 0) {
    (*DAT_00582b20)(iVar10);
  }
  unaff_EDI = *(undefined4 **)(unaff_EBP + 0xc);
  FUN_00466a80(0xd,*(int *)(unaff_EBP + -0x14) + (int)unaff_EDI,(byte *)"-mj%06X9%02X");
  iVar11 = *(int *)(unaff_EBP + -8);
  unaff_EBX = (**(code **)(iVar11 + 0x20))(iVar11,unaff_EDI,0,unaff_EBP + -0x24);
  if (unaff_EBX != 0) goto LAB_004bf1e4;
  if (*(int *)(unaff_EBP + -0x24) == 0) goto LAB_004beedf;
  unaff_ESI = *(int *)(unaff_EBP + -0x1c);
  goto LAB_004bee00;
}


/* FUN_004bf0fa @ 004bf0fa  kind=gamemisc  attributed-by=none  size=254 */

undefined4 FUN_004bf0fa(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  
  do {
    piVar1 = *(int **)(*(int *)(unaff_EDI + 0x10) + 4 + unaff_ESI);
    if ((piVar1 != (int *)0x0) && ((char)piVar1[2] != '\0')) {
      FUN_0048fbc0(piVar1);
      if ((char)piVar1[2] == '\x02') {
        puVar2 = (undefined4 *)piVar1[1];
        *(undefined4 **)(unaff_EBP + -0x1c) = puVar2;
        piVar3 = (int *)*puVar2;
        *(int **)(unaff_EBP + -0x20) = piVar3;
        if (piVar3[10] == 0) {
          if (((*(char *)((int)piVar3 + 0xf) == '\x02') && ((char)piVar3[1] != '\0')) &&
             (*(char *)((int)piVar3 + 5) == '\x01')) {
            *(undefined1 *)((int)piVar3 + 0xf) = 1;
          }
          else {
            uVar6 = FUN_00484760(piVar3,(uint)*(byte *)((int)piVar3 + 0x12));
            if (((uVar6 & 0xff) == 0xd) || ((uVar6 & 0xff) == 10)) {
              iVar4 = *(int *)(unaff_EBP + -0x20);
              *(uint *)(iVar4 + 0x28) = uVar6;
              *(undefined1 *)(iVar4 + 0xf) = 6;
            }
          }
        }
        *(undefined1 *)(*(int *)(unaff_EBP + -0x1c) + 0x13) = 1;
      }
      FUN_00471200(piVar1);
      if (*(char *)((int)piVar1 + 9) != '\0') {
        piVar3 = piVar1 + 3;
        *piVar3 = *piVar3 + -1;
        if (*piVar3 == 0) {
          if (*(int *)(piVar1[1] + 0x38) != 0) {
            (*DAT_00582b20)(*(int *)(piVar1[1] + 0x38));
          }
          *(undefined1 *)((int)piVar1 + 10) = 0;
        }
      }
    }
    unaff_EBX = unaff_EBX + 1;
    unaff_ESI = *(int *)(unaff_EBP + 0xc) + 0x10;
    *(int *)(unaff_EBP + 0xc) = unaff_ESI;
  } while (unaff_EBX < *(int *)(unaff_EDI + 0x14));
  uVar5 = *(undefined4 *)(unaff_EBP + -0x18);
  if (DAT_00583e78 != (code *)0x0) {
    (*DAT_00583e78)();
    FUN_004719f0(unaff_EDI,0x40);
    return uVar5;
  }
  FUN_004719f0(unaff_EDI,0x40);
  return uVar5;
}


/* FUN_004c166a @ 004c166a  kind=gamemisc  attributed-by=none  size=178 */

void __fastcall FUN_004c166a(int param_1,int param_2)

{
  int in_EAX;
  int iVar1;
  ushort uVar2;
  int iVar3;
  int unaff_EBP;
  int unaff_ESI;
  void *unaff_EDI;
  
  do {
    iVar1 = *(int *)(unaff_EBP + -4);
LAB_004c1673:
    if (unaff_ESI < param_2) {
      if (in_EAX < param_1) goto LAB_004c16a3;
      iVar3 = *(int *)(unaff_EBP + 8);
LAB_004c16ce:
      unaff_ESI = unaff_ESI + 1;
      uVar2 = *(ushort *)(*(int *)(unaff_EBP + -4) + -2 + unaff_ESI * 2);
    }
    else {
      if (param_1 <= in_EAX) {
        iVar1 = *(int *)(unaff_EBP + -0xc);
        **(undefined4 **)(unaff_EBP + 0x14) = unaff_EDI;
        **(int **)(unaff_EBP + 0x18) = iVar1;
        memcpy(unaff_EDI,*(void **)(unaff_EBP + 0x1c),iVar1 * 2);
        return;
      }
LAB_004c16a3:
      if (unaff_ESI < param_2) {
        iVar3 = *(int *)(unaff_EBP + 8);
        if (*(uint *)(iVar3 + (uint)*(ushort *)(iVar1 + unaff_ESI * 2) * 4) <=
            *(uint *)(iVar3 + (uint)*(ushort *)((int)unaff_EDI + in_EAX * 2) * 4))
        goto LAB_004c16ce;
        uVar2 = *(ushort *)((int)unaff_EDI + in_EAX * 2);
        in_EAX = in_EAX + 1;
      }
      else {
        uVar2 = *(ushort *)((int)unaff_EDI + in_EAX * 2);
        iVar3 = *(int *)(unaff_EBP + 8);
        in_EAX = in_EAX + 1;
      }
    }
    iVar3 = *(int *)(iVar3 + (uint)uVar2 * 4);
    iVar1 = *(int *)(unaff_EBP + -0xc) + 1;
    *(ushort *)(*(int *)(unaff_EBP + 0x1c) + -2 + iVar1 * 2) = uVar2;
    unaff_EDI = *(void **)(unaff_EBP + 0xc);
    param_2 = *(int *)(unaff_EBP + -8);
    *(int *)(unaff_EBP + -0xc) = iVar1;
    param_1 = *(int *)(unaff_EBP + 0x10);
  } while (param_1 <= in_EAX);
  param_1 = *(int *)(unaff_EBP + 0x10);
  param_2 = *(int *)(unaff_EBP + -8);
  iVar1 = *(int *)(unaff_EBP + -4);
  if (*(int *)(*(int *)(unaff_EBP + 8) + (uint)*(ushort *)((int)unaff_EDI + in_EAX * 2) * 4) ==
      iVar3) {
    in_EAX = in_EAX + 1;
  }
  goto LAB_004c1673;
}


/* FUN_004c2230 @ 004c2230  kind=gamemisc  attributed-by=none  size=234 */

void __cdecl FUN_004c2230(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 local_c0 [4];
  int local_b0;
  undefined8 local_2c;
  undefined8 local_24;
  undefined8 local_1c;
  undefined8 local_14;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  if (DAT_00583f38 == 0) {
    local_c0[0] = 0x94;
    (*(code *)PTR_GetVersionExA_00583704)(local_c0);
    DAT_00583f38 = (local_b0 == 2) + 1;
  }
  if (DAT_00583f38 == 2) {
    iVar3 = 0;
    local_2c = 0;
    local_24 = 0;
    local_1c = 0;
    local_14 = 0;
    local_c = 0;
    while( true ) {
      iVar1 = (*(code *)PTR_GetFileAttributesExW_00583674)(param_1,0,&local_2c);
      if (iVar1 != 0) break;
      iVar1 = (*(code *)PTR_GetLastError_005836a4)();
      if ((DAT_00582bbc <= iVar3) || (((iVar1 != 5 && (iVar1 != 0x21)) && (iVar1 != 0x20))))
      goto LAB_004c230b;
      iVar3 = iVar3 + 1;
      (*(code *)PTR_Sleep_005837e8)(iVar3 * DAT_00582bc0);
    }
    uVar2 = (uint)local_2c;
  }
  else {
    uVar2 = (*(code *)PTR_GetFileAttributesA_0058365c)(param_1);
  }
  if ((uVar2 != 0xffffffff) && ((uVar2 & 0x10) != 0)) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
LAB_004c230b:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004c2320 @ 004c2320  kind=gamemisc  attributed-by=none  size=201 */

void __cdecl
FUN_004c2320(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 local_9c [4];
  int local_8c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  if (DAT_00583f38 == 0) {
    local_9c[0] = 0x94;
    (*(code *)PTR_GetVersionExA_00583704)(local_9c);
    DAT_00583f38 = (local_8c == 2) + 1;
  }
  if (DAT_00583f38 == 2) {
    _local_a8 = CONCAT44(param_4,param_3);
    local_b0 = 0;
    local_a0 = 0;
    (*(code *)PTR_LockFileEx_00583794)(*param_1,param_2,0,param_5,param_6,&local_b0);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  (*(code *)PTR_LockFile_00583788)(*param_1,param_3,param_4,param_5,param_6);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004c23f0 @ 004c23f0  kind=gamemisc  attributed-by=none  size=179 */

void __cdecl FUN_004c23f0(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char local_1fc [500];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_1fc[0] = '\0';
  FUN_0047d250(param_2,500,local_1fc);
  uVar3 = 0;
  uVar4 = uVar3;
  if (local_1fc[0] != '\0') {
    do {
      uVar4 = uVar3;
      if ((local_1fc[uVar3] == '\r') || (local_1fc[uVar3] == '\n')) break;
      uVar4 = uVar3 + 1;
      iVar2 = uVar3 + 1;
      uVar3 = uVar4;
    } while (local_1fc[iVar2] != '\0');
    if (499 < uVar4) {
      ___report_rangecheckfailure();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_1fc[uVar4] = '\0';
  FUN_004683f0(param_1,"os_win.c:%d: (%d) %s(%s) - %s");
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004c24b0 @ 004c24b0  kind=gamemisc  attributed-by=none  size=53 */

void __cdecl FUN_004c24b0(int param_1,byte param_2,uint *param_3)

{
  if ((int)*param_3 < 0) {
    *param_3 = (uint)((*(byte *)(param_1 + 0x10) & param_2) != 0);
    return;
  }
  if (*param_3 == 0) {
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & ~param_2;
    return;
  }
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | param_2;
  return;
}


/* FUN_004c24f0 @ 004c24f0  kind=gamemisc  attributed-by=none  size=796 */

int __cdecl FUN_004c24f0(int param_1)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  char *pcVar4;
  undefined8 *puVar5;
  int *_Dst;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  byte *pbVar9;
  char *pcVar10;
  uint uVar11;
  byte *pbVar12;
  int *piVar13;
  
  puVar5 = (undefined8 *)FUN_004a0350(0x10);
  if (puVar5 == (undefined8 *)0x0) {
    return 0xc0a;
  }
  *puVar5 = 0;
  puVar5[1] = 0;
  pcVar4 = *(char **)(param_1 + 0x1c);
  uVar11 = 0;
  if (pcVar4 != (char *)0x0) {
    cVar2 = *pcVar4;
    pcVar10 = pcVar4;
    while (cVar2 != '\0') {
      pcVar10 = pcVar10 + 1;
      cVar2 = *pcVar10;
    }
    uVar11 = (int)pcVar10 - (int)pcVar4 & 0x3fffffff;
  }
  _Dst = (int *)FUN_004a0350(uVar11 + 0x59);
  if (_Dst == (int *)0x0) {
    FUN_00466dd0((int)puVar5);
    return 0xc0a;
  }
  memset(_Dst,0,uVar11 + 0x59);
  _Dst[1] = (int)(_Dst + 0x12);
  FUN_00466a80(uVar11 + 0xf,_Dst + 0x12,(byte *)"%s-shm");
  piVar13 = DAT_00583e84;
  if ((DAT_00582acc != 0) && (iVar6 = (*DAT_00582b10)(2), piVar13 = DAT_00583e84, iVar6 != 0)) {
    (*DAT_00582b18)(iVar6);
    piVar13 = DAT_00583e84;
  }
  for (; piVar13 != (int *)0x0; piVar13 = (int *)piVar13[0x11]) {
    pbVar9 = (byte *)piVar13[1];
    pbVar12 = (byte *)_Dst[1];
    bVar3 = *pbVar9;
    while ((bVar3 != 0 && ((&DAT_00569620)[bVar3] == (&DAT_00569620)[*pbVar12]))) {
      pbVar1 = pbVar9 + 1;
      pbVar9 = pbVar9 + 1;
      pbVar12 = pbVar12 + 1;
      bVar3 = *pbVar1;
    }
    if ((&DAT_00569620)[*pbVar9] == (&DAT_00569620)[*pbVar12]) {
      FUN_00466dd0((int)_Dst);
      goto LAB_004c2789;
    }
  }
  _Dst[4] = -1;
  _Dst[0x11] = (int)DAT_00583e84;
  DAT_00583e84 = _Dst;
  iVar6 = FUN_004bc920();
  if (iVar6 == 0) {
    iVar6 = (*DAT_00582b10)(0);
  }
  else {
    iVar6 = 0;
  }
  *_Dst = iVar6;
  if (iVar6 == 0) {
    iVar6 = 0xc0a;
  }
  else {
    iVar6 = FUN_0046a100(*(undefined4 *)(param_1 + 4),(char *)_Dst[1],(undefined8 *)(_Dst + 2),
                         0x80006,(int *)0x0);
    if (iVar6 == 0) {
      iVar6 = FUN_004c2320(_Dst + 4,3,0x80,0,1,0);
      if (iVar6 == 0) {
        iVar6 = (*(code *)PTR_GetLastError_005836a4)();
        _Dst[0xe] = iVar6;
      }
      else {
        iVar6 = FUN_00466390((int)(_Dst + 2),0,0);
        if (iVar6 != 0) {
          uVar8 = (*(code *)PTR_GetLastError_005836a4)
                            ("winOpenShm",*(undefined4 *)(param_1 + 0x1c),0x819a);
          iVar6 = FUN_004c23f0(0x120a,uVar8);
          if (iVar6 != 0) goto LAB_004c2634;
        }
      }
      iVar6 = FUN_004c28e0(_Dst + 4,0x80,0,1,0);
      if (iVar6 == 0) {
        iVar6 = (*(code *)PTR_GetLastError_005836a4)();
        _Dst[0xe] = iVar6;
      }
      iVar6 = FUN_004c2320(_Dst + 4,1,0x80,0,1,0);
      if (iVar6 == 0) {
        iVar6 = (*(code *)PTR_GetLastError_005836a4)();
        _Dst[0xe] = iVar6;
        iVar6 = 5;
      }
      else {
        iVar6 = 0;
      }
      piVar13 = _Dst;
      if (iVar6 == 0) {
LAB_004c2789:
        *(int **)puVar5 = piVar13;
        piVar13[0xf] = piVar13[0xf] + 1;
        *(undefined8 **)(param_1 + 0x18) = puVar5;
        if ((DAT_00582acc != 0) && (iVar6 = (*DAT_00582b10)(2), iVar6 != 0)) {
          (*DAT_00582b20)(iVar6);
        }
        if (*piVar13 != 0) {
          (*DAT_00582b18)(*piVar13);
        }
        *(int *)((int)puVar5 + 4) = piVar13[0x10];
        piVar13[0x10] = (int)puVar5;
        if (*piVar13 != 0) {
          (*DAT_00582b20)(*piVar13);
        }
        return 0;
      }
    }
  }
LAB_004c2634:
  iVar7 = FUN_004c28e0(_Dst + 4,0x80,0,1,0);
  if (iVar7 == 0) {
    iVar7 = (*(code *)PTR_GetLastError_005836a4)();
    _Dst[0xe] = iVar7;
  }
  FUN_004c2810(*(undefined4 *)(param_1 + 4),0);
  FUN_00466dd0((int)puVar5);
  FUN_00466dd0(0);
  if ((DAT_00582acc != 0) && (iVar7 = (*DAT_00582b10)(2), iVar7 != 0)) {
    (*DAT_00582b20)(iVar7);
  }
  return iVar6;
}


/* FUN_004c2810 @ 004c2810  kind=gamemisc  attributed-by=none  size=200 */

void __cdecl FUN_004c2810(undefined4 param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)&DAT_00583e84;
  piVar1 = DAT_00583e84;
  while (piVar1 != (int *)0x0) {
    if (piVar1[0xf] == 0) {
      if (*piVar1 != 0) {
        (*DAT_00582b14)(*piVar1);
      }
      iVar3 = 0;
      if (0 < piVar1[0xc]) {
        do {
          (*(code *)PTR_UnmapViewOfFile_00583818)(*(undefined4 *)(piVar1[0xd] + 4 + iVar3 * 8));
          (*(code *)PTR_CloseHandle_00583590)(*(undefined4 *)(piVar1[0xd] + iVar3 * 8));
          iVar3 = iVar3 + 1;
        } while (iVar3 < piVar1[0xc]);
      }
      if (piVar1[4] != -1) {
        FUN_00465070((int)(piVar1 + 2));
      }
      if (param_2 != 0) {
        if (DAT_00583e74 != (code *)0x0) {
          (*DAT_00583e74)();
        }
        FUN_0046a520(param_1,piVar1[1]);
        if (DAT_00583e78 != (code *)0x0) {
          (*DAT_00583e78)();
        }
      }
      *piVar2 = piVar1[0x11];
      FUN_00466dd0(piVar1[0xd]);
      FUN_00466dd0((int)piVar1);
    }
    else {
      piVar2 = piVar1 + 0x11;
    }
    piVar1 = (int *)*piVar2;
  }
  return;
}


/* FUN_004c28e0 @ 004c28e0  kind=gamemisc  attributed-by=none  size=198 */

void __cdecl
FUN_004c28e0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 local_9c [4];
  int local_8c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  if (DAT_00583f38 == 0) {
    local_9c[0] = 0x94;
    (*(code *)PTR_GetVersionExA_00583704)(local_9c);
    DAT_00583f38 = (local_8c == 2) + 1;
  }
  if (DAT_00583f38 == 2) {
    _local_a8 = CONCAT44(param_3,param_2);
    local_b0 = 0;
    local_a0 = 0;
    (*(code *)PTR_UnlockFileEx_0058380c)(*param_1,0,param_4,param_5,&local_b0);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  (*(code *)PTR_UnlockFile_00583800)(*param_1,param_2,param_3,param_4,param_5);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004c6470 @ 004c6470  kind=gamemisc  attributed-by=none  size=58 */

float * __thiscall FUN_004c6470(void *this,byte *param_1)

{
  *(float *)this = (float)*param_1;
  *(float *)((int)this + 4) = (float)param_1[1];
  *(float *)((int)this + 8) = (float)param_1[2];
  return this;
}


/* FUN_004c64b0 @ 004c64b0  kind=gamemisc  attributed-by=none  size=49 */

float * __thiscall FUN_004c64b0(void *this,int *param_1)

{
  *(float *)this = (float)*param_1;
  *(float *)((int)this + 4) = (float)param_1[1];
  *(float *)((int)this + 8) = (float)param_1[2];
  return this;
}


/* FUN_004c64f0 @ 004c64f0  kind=gamemisc  attributed-by=none  size=79 */

undefined4 * __thiscall FUN_004c64f0(void *this,uint *param_1)

{
  undefined8 uVar1;
  
  uVar1 = __alldiv(*param_1,param_1[1],0x10000,0);
  *(int *)this = (int)uVar1;
  uVar1 = __alldiv(param_1[2],param_1[3],0x10000,0);
  *(int *)((int)this + 4) = (int)uVar1;
  uVar1 = __alldiv(param_1[4],param_1[5],0x10000,0);
  *(int *)((int)this + 8) = (int)uVar1;
  return this;
}


/* FUN_004c6580 @ 004c6580  kind=gamemisc  attributed-by=none  size=363 */

basic_ostream<char,std::char_traits<char>_> *
FUN_004c6580(basic_ostream<char,std::char_traits<char>_> *param_1,char *param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  basic_ostream<char,std::char_traits<char>_> *pbVar6;
  int iVar7;
  __int64 _Var8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00554350;
  local_10 = ExceptionList;
  uVar4 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar1 = *(uint *)(param_2 + 0x10);
  bVar3 = false;
  iVar5 = *(int *)(*(int *)param_1 + 4);
  uVar2 = *(uint *)(param_1 + iVar5 + 0x20);
  if ((*(int *)(param_1 + iVar5 + 0x24) < 0) ||
     (((*(int *)(param_1 + iVar5 + 0x24) < 1 && (uVar2 == 0)) || (uVar2 <= uVar1)))) {
    iVar7 = 0;
  }
  else {
    iVar7 = uVar2 - uVar1;
  }
  if (*(int **)(param_1 + iVar5 + 0x38) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + iVar5 + 0x38) + 4))();
  }
  local_8 = 0;
  if ((*(int *)(param_1 + *(int *)(*(int *)param_1 + 4) + 0xc) == 0) &&
     (*(basic_ostream<char,std::char_traits<char>_> **)
       (param_1 + *(int *)(*(int *)param_1 + 4) + 0x3c) !=
      (basic_ostream<char,std::char_traits<char>_> *)0x0)) {
    std::basic_ostream<char,std::char_traits<char>_>::flush
              (*(basic_ostream<char,std::char_traits<char>_> **)
                (param_1 + *(int *)(*(int *)param_1 + 4) + 0x3c));
  }
  local_8 = 1;
  if (*(int *)(param_1 + *(int *)(*(int *)param_1 + 4) + 0xc) != 0) {
    std::basic_ios<char,std::char_traits<char>_>::setstate
              ((basic_ios<char,std::char_traits<char>_> *)(param_1 + *(int *)(*(int *)param_1 + 4)),
               4,false);
    local_8 = 0xffffffff;
    bVar3 = std::uncaught_exception();
    if (!bVar3) {
      std::basic_ostream<char,std::char_traits<char>_>::_Osfx
                ((basic_ostream<char,std::char_traits<char>_> *)param_1);
    }
    if (*(int **)(param_1 + *(int *)(*(int *)param_1 + 4) + 0x38) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + *(int *)(*(int *)param_1 + 4) + 0x38) + 8))();
    }
    ExceptionList = local_10;
    return param_1;
  }
  local_8 = 2;
  if ((*(uint *)(param_1 + *(int *)(*(int *)param_1 + 4) + 0x14) & 0x1c0) == 0x40) {
LAB_004c667c:
    if (0xf < *(uint *)(param_2 + 0x14)) {
      param_2 = *(char **)param_2;
    }
    _Var8 = std::basic_streambuf<char,std::char_traits<char>_>::sputn
                      (*(basic_streambuf<char,std::char_traits<char>_> **)
                        (param_1 + *(int *)(*(int *)param_1 + 4) + 0x38),param_2,
                       (ulonglong)uVar4 << 0x20);
    if (((uint)_Var8 != uVar1) || ((int)((ulonglong)_Var8 >> 0x20) != 0)) goto LAB_004c66d7;
  }
  else {
    for (; iVar7 != 0; iVar7 = iVar7 + -1) {
      iVar5 = std::basic_streambuf<char,std::char_traits<char>_>::sputc
                        (*(basic_streambuf<char,std::char_traits<char>_> **)
                          (param_1 + *(int *)(*(int *)param_1 + 4) + 0x38),
                         (char)param_1[*(int *)(*(int *)param_1 + 4) + 0x40]);
      if (iVar5 == -1) {
        bVar3 = true;
        break;
      }
    }
    if (!bVar3) goto LAB_004c667c;
  }
  while ((iVar7 != 0 &&
         (iVar5 = std::basic_streambuf<char,std::char_traits<char>_>::sputc
                            (*(basic_streambuf<char,std::char_traits<char>_> **)
                              (param_1 + *(int *)(*(int *)param_1 + 4) + 0x38),
                             (char)param_1[*(int *)(*(int *)param_1 + 4) + 0x40]), iVar5 != -1))) {
    iVar7 = iVar7 + -1;
  }
LAB_004c66d7:
  iVar5 = *(int *)(*(int *)param_1 + 4);
  *(undefined4 *)(param_1 + iVar5 + 0x20) = 0;
  *(undefined4 *)(param_1 + iVar5 + 0x24) = 0;
  pbVar6 = (basic_ostream<char,std::char_traits<char>_> *)FUN_004c670e();
  return pbVar6;
}


/* FUN_004c670e @ 004c670e  kind=gamemisc  attributed-by=none  size=89 */

void FUN_004c670e(void)

{
  basic_ostream<char,std::char_traits<char>_> *this;
  int *piVar1;
  bool bVar2;
  int *unaff_EBX;
  int unaff_EBP;
  int unaff_EDI;
  
  *(undefined4 *)(unaff_EBP + -4) = 1;
  std::basic_ios<char,std::char_traits<char>_>::setstate
            ((basic_ios<char,std::char_traits<char>_> *)(*(int *)(*unaff_EBX + 4) + (int)unaff_EBX),
             unaff_EDI,false);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  bVar2 = std::uncaught_exception();
  this = *(basic_ostream<char,std::char_traits<char>_> **)(unaff_EBP + -0x24);
  if (!bVar2) {
    std::basic_ostream<char,std::char_traits<char>_>::_Osfx(this);
  }
  piVar1 = *(int **)((int)&this[0xe].vbtablePtr +
                    this->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


/* FUN_004c7f70 @ 004c7f70  kind=gamemisc  attributed-by=none  size=126 */

void * __cdecl FUN_004c7f70(int *param_1,int *param_2,void *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00554461;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uStack_7 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    local_8 = 1;
    if (param_3 != (void *)0x0) {
      FUN_0041d720(param_3,param_1);
    }
    param_3 = (void *)((int)param_3 + 0xc);
  }
  ExceptionList = local_10;
  return param_3;
}


/* FUN_004c8020 @ 004c8020  kind=gamemisc  attributed-by=none  size=128 */

void * __cdecl FUN_004c8020(undefined4 *param_1,undefined4 *param_2,void *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00554491;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uStack_7 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x62) {
    local_8 = 1;
    if (param_3 != (void *)0x0) {
      FUN_004c8420(param_3,param_1);
    }
    param_3 = (void *)((int)param_3 + 0x188);
  }
  ExceptionList = local_10;
  return param_3;
}


/* FUN_004c80d0 @ 004c80d0  kind=gamemisc  attributed-by=none  size=67 */

void FUN_004c80d0(int param_1)

{
  if (*(undefined4 **)(param_1 + 0x48) != (undefined4 *)0x0) {
    FUN_00406310(*(undefined4 **)(param_1 + 0x48),*(undefined4 **)(param_1 + 0x4c));
    operator_delete(*(void **)(param_1 + 0x48));
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  return;
}


/* FUN_004c8150 @ 004c8150  kind=gamemisc  attributed-by=none  size=21 */

void __cdecl FUN_004c8150(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}


/* FUN_004c8170 @ 004c8170  kind=gamemisc  attributed-by=none  size=23 */

void __cdecl FUN_004c8170(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}


/* FUN_004c8190 @ 004c8190  kind=gamemisc  attributed-by=none  size=229 */

basic_iostream<char,std::char_traits<char>_> * __thiscall
FUN_004c8190(void *this,uint param_1,int param_2)

{
  basic_streambuf<char,std::char_traits<char>_> *this_00;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005544e2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_2 != 0) {
    *(undefined ***)this = &PTR_0055b2c0;
    *(undefined ***)((int)this + 0x10) = &PTR_00571718;
    *(code **)((int)this + 0x68) = _vftable__exref;
    *(code **)((int)this + 0x68) = _vftable__exref;
    local_8 = 0;
  }
  this_00 = (basic_streambuf<char,std::char_traits<char>_> *)((int)this + 0x18);
  std::basic_iostream<char,std::char_traits<char>_>::basic_iostream<char,std::char_traits<char>_>
            (this,(basic_streambuf<char,std::char_traits<char>_> *)this_00);
  local_8 = 1;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> */
  *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
   ((int)this + *(int *)(*(int *)this + 4)) =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)(*(int *)(*(int *)this + 4) + -4 + (int)this) = *(int *)(*(int *)this + 4) + -0x68;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            (this_00);
  uVar1 = 0;
  if ((param_1 & 1) == 0) {
    uVar1 = 4;
  }
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> */
  *this_00 = (basic_streambuf<char,std::char_traits<char>_>)
             &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  if ((param_1 & 2) == 0) {
    uVar1 = uVar1 | 2;
  }
  if ((param_1 & 8) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((param_1 & 4) != 0) {
    uVar1 = uVar1 | 0x10;
  }
  *(uint *)((int)this + 0x54) = uVar1;
  *(undefined4 *)((int)this + 0x50) = 0;
  ExceptionList = local_10;
  return this;
}


/* FUN_004c8280 @ 004c8280  kind=gamemisc  attributed-by=none  size=31 */

undefined4 * __fastcall FUN_004c8280(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = FUN_004ce660((undefined4 *)0x0,(undefined4 *)0x0);
  *param_1 = uVar1;
  return param_1;
}


/* FUN_004c82a0 @ 004c82a0  kind=gamemisc  attributed-by=none  size=156 */

undefined4 * __thiscall FUN_004c82a0(void *this,int *param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00554500;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = FUN_004ce580(this,(param_1[1] - *param_1) / 0xc);
  if ((char)uVar1 != '\0') {
    local_8 = 0;
    pvVar2 = FUN_004c7f70((int *)*param_1,(int *)param_1[1],*(void **)this);
    *(void **)((int)this + 4) = pvVar2;
  }
  ExceptionList = local_10;
  return this;
}


/* FUN_004c8350 @ 004c8350  kind=gamemisc  attributed-by=none  size=94 */

undefined4 * __thiscall FUN_004c8350(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  *(undefined4 *)((int)this + 0x1c) = param_1[7];
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  *(undefined4 *)((int)this + 0x24) = param_1[9];
  *(undefined4 *)((int)this + 0x28) = param_1[10];
  *(undefined4 *)((int)this + 0x2c) = param_1[0xb];
  *(undefined4 *)((int)this + 0x30) = param_1[0xc];
  *(undefined4 *)((int)this + 0x34) = param_1[0xd];
  *(undefined4 *)((int)this + 0x38) = param_1[0xe];
  return this;
}


/* FUN_004c83b0 @ 004c83b0  kind=gamemisc  attributed-by=none  size=31 */

int __fastcall FUN_004c83b0(int param_1)

{
  *(undefined4 *)(param_1 + 0x2c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x34) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x38) = 2;
  return param_1;
}


/* FUN_004c83d0 @ 004c83d0  kind=gamemisc  attributed-by=none  size=75 */

int __fastcall FUN_004c83d0(int param_1)

{
  *(undefined2 *)(param_1 + 0x18) = 1;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined2 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  memset((void *)(param_1 + 0x1c),0,0x100);
  return param_1;
}


/* FUN_004c8510 @ 004c8510  kind=gamemisc  attributed-by=none  size=17 */

int __fastcall FUN_004c8510(int param_1)

{
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0x40400000;
  return param_1;
}


/* FUN_004c8530 @ 004c8530  kind=gamemisc  attributed-by=none  size=17 */

int __fastcall FUN_004c8530(int param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  return param_1;
}


/* FUN_004cd860 @ 004cd860  kind=gamemisc  attributed-by=none  size=36 */

void __fastcall FUN_004cd860(undefined4 *param_1)

{
  undefined4 *local_8;
  
  local_8 = param_1;
  FUN_004d3e10(param_1,&local_8,*(int **)*param_1,(int *)*param_1);
  operator_delete((void *)*param_1);
  return;
}


/* FUN_004cd890 @ 004cd890  kind=gamemisc  attributed-by=none  size=42 */

void __fastcall FUN_004cd890(int param_1)

{
  if (7 < *(uint *)(param_1 + 0x1c)) {
    operator_delete(*(void **)(param_1 + 8));
  }
  *(undefined4 *)(param_1 + 0x1c) = 7;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  return;
}


/* FUN_004cd8c0 @ 004cd8c0  kind=gamemisc  attributed-by=none  size=40 */

void __fastcall FUN_004cd8c0(undefined4 *param_1)

{
  if (7 < (uint)param_1[5]) {
    operator_delete((void *)*param_1);
  }
  param_1[5] = 7;
  param_1[4] = 0;
  *(undefined2 *)param_1 = 0;
  return;
}


/* FUN_004cd8f0 @ 004cd8f0  kind=gamemisc  attributed-by=none  size=69 */

void __fastcall FUN_004cd8f0(int param_1)

{
  if (*(undefined4 **)(param_1 + 0x48) != (undefined4 *)0x0) {
    FUN_00406310(*(undefined4 **)(param_1 + 0x48),*(undefined4 **)(param_1 + 0x4c));
    operator_delete(*(void **)(param_1 + 0x48));
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  return;
}


/* FUN_004cd98a @ 004cd98a  kind=gamemisc  attributed-by=none  size=16 */

void FUN_004cd98a(void)

{
  _Container_base0 *this;
  char cVar1;
  int *piVar2;
  void *this_00;
  int *piVar3;
  int *unaff_EBX;
  int unaff_EBP;
  int iVar4;
  int *piVar5;
  int unaff_EDI;
  int iVar6;
  undefined4 *puVar7;
  
  do {
    this_00 = *(void **)(unaff_EBP + -0x10);
    iVar4 = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    while( true ) {
      if (*unaff_EBX != 0) {
        if (*(char *)((int)this_00 + 0xb4) == '\0') {
          iVar4 = 0x10018;
          do {
            iVar6 = 0x40;
            do {
              FUN_004d81b0(this_00,*(int *)(*unaff_EBX + iVar4));
              this_00 = *(void **)(unaff_EBP + -0x10);
              iVar4 = iVar4 + 4;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          } while (iVar4 < 0x14018);
          iVar4 = *(int *)(unaff_EBP + -0x14);
          unaff_EDI = *(int *)(unaff_EBP + -0x18);
          FUN_004d7c50(this_00,unaff_EDI,iVar4);
        }
        if ((undefined4 *)*unaff_EBX != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)*unaff_EBX)(1);
        }
      }
      if ((void *)unaff_EBX[0x100000] != (void *)0x0) {
        operator_delete((void *)unaff_EBX[0x100000]);
      }
      iVar4 = iVar4 + 1;
      unaff_EBX = unaff_EBX + 1;
      *(int *)(unaff_EBP + -0x14) = iVar4;
      if (0x3ff < iVar4) break;
      this_00 = *(void **)(unaff_EBP + -0x10);
    }
    unaff_EDI = unaff_EDI + 1;
    *(int *)(unaff_EBP + -0x18) = unaff_EDI;
  } while (unaff_EDI < 0x400);
  iVar4 = *(int *)(unaff_EBP + -0x10);
  piVar5 = (int *)**(int **)(iVar4 + 4);
  if (piVar5 != *(int **)(iVar4 + 4)) {
    do {
      if ((undefined4 *)piVar5[6] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)piVar5[6])(1);
      }
      if (*(char *)((int)piVar5 + 0xd) == '\0') {
        piVar3 = (int *)piVar5[2];
        if (*(char *)((int)piVar3 + 0xd) == '\0') {
          cVar1 = *(char *)(*piVar3 + 0xd);
          piVar5 = piVar3;
          piVar3 = (int *)*piVar3;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar3 + 0xd);
            piVar5 = piVar3;
            piVar3 = (int *)*piVar3;
          }
        }
        else {
          cVar1 = *(char *)(piVar5[1] + 0xd);
          piVar2 = (int *)piVar5[1];
          piVar3 = piVar5;
          while ((piVar5 = piVar2, cVar1 == '\0' && (piVar3 == (int *)piVar5[2]))) {
            cVar1 = *(char *)(piVar5[1] + 0xd);
            piVar2 = (int *)piVar5[1];
            piVar3 = piVar5;
          }
        }
      }
    } while (piVar5 != *(int **)(iVar4 + 4));
  }
  piVar5 = (int *)**(int **)(iVar4 + 0xc);
  if (piVar5 != *(int **)(iVar4 + 0xc)) {
    do {
      iVar6 = piVar5[6];
      *(int *)(unaff_EBP + -0x18) = iVar6;
      if (iVar6 != 0) {
        puVar7 = (undefined4 *)(iVar6 + 0x78);
        FUN_004fc060(puVar7,(undefined4 *)(unaff_EBP + -0x14),*(int **)*puVar7,(int *)*puVar7);
        operator_delete((void *)*puVar7);
        operator_delete(*(void **)(unaff_EBP + -0x18));
      }
      if (*(char *)((int)piVar5 + 0xd) == '\0') {
        piVar3 = (int *)piVar5[2];
        if (*(char *)((int)piVar3 + 0xd) == '\0') {
          cVar1 = *(char *)(*piVar3 + 0xd);
          piVar5 = piVar3;
          piVar3 = (int *)*piVar3;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar3 + 0xd);
            piVar5 = piVar3;
            piVar3 = (int *)*piVar3;
          }
        }
        else {
          cVar1 = *(char *)(piVar5[1] + 0xd);
          piVar2 = (int *)piVar5[1];
          piVar3 = piVar5;
          while ((piVar5 = piVar2, cVar1 == '\0' && (piVar3 == (int *)piVar5[2]))) {
            cVar1 = *(char *)(piVar5[1] + 0xd);
            piVar2 = (int *)piVar5[1];
            piVar3 = piVar5;
          }
        }
      }
    } while (piVar5 != *(int **)(iVar4 + 0xc));
  }
  puVar7 = (undefined4 *)(iVar4 + 0xc);
  DeleteCriticalSection((LPCRITICAL_SECTION)(iVar4 + 0x8000c0));
  DeleteCriticalSection((LPCRITICAL_SECTION)(iVar4 + 0x8000d8));
  piVar5 = *(int **)(iVar4 + 0x800154);
  piVar3 = (int *)*piVar5;
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  FUN_004fc060((void *)(iVar4 + 0x800154),(undefined4 *)(unaff_EBP + -0x18),piVar3,piVar5);
  operator_delete(*(void **)(iVar4 + 0x800154));
  piVar5 = *(int **)(iVar4 + 0x80014c);
  piVar3 = (int *)*piVar5;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  FUN_0041a510((void *)(iVar4 + 0x80014c),(undefined4 *)(unaff_EBP + -0x18),piVar3,piVar5);
  operator_delete(*(void **)(iVar4 + 0x80014c));
  piVar5 = *(int **)(iVar4 + 0x800144);
  piVar3 = (int *)*piVar5;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_0041a510((void *)(iVar4 + 0x800144),(undefined4 *)(unaff_EBP + -0x18),piVar3,piVar5);
  operator_delete(*(void **)(iVar4 + 0x800144));
  piVar5 = *(int **)(iVar4 + 0x80013c);
  piVar3 = (int *)*piVar5;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_0041a510((void *)(iVar4 + 0x80013c),(undefined4 *)(unaff_EBP + -0x18),piVar3,piVar5);
  operator_delete(*(void **)(iVar4 + 0x80013c));
  piVar5 = *(int **)(iVar4 + 0x800134);
  piVar3 = (int *)*piVar5;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_004d3e10((void *)(iVar4 + 0x800134),(undefined4 *)(unaff_EBP + -0x18),piVar3,piVar5);
  operator_delete(*(void **)(iVar4 + 0x800134));
  piVar5 = *(int **)(iVar4 + 0x80012c);
  piVar3 = (int *)*piVar5;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_004d3e10((void *)(iVar4 + 0x80012c),(undefined4 *)(unaff_EBP + -0x18),piVar3,piVar5);
  operator_delete(*(void **)(iVar4 + 0x80012c));
  piVar5 = *(int **)(iVar4 + 0x800124);
  piVar3 = (int *)*piVar5;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_004d3e10((void *)(iVar4 + 0x800124),(undefined4 *)(unaff_EBP + -0x18),piVar3,piVar5);
  operator_delete(*(void **)(iVar4 + 0x800124));
  piVar5 = *(int **)(iVar4 + 0x80011c);
  piVar3 = (int *)*piVar5;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_0042d580((void *)(iVar4 + 0x80011c),(undefined4 *)(unaff_EBP + -0x18),piVar3,piVar5);
  operator_delete(*(void **)(iVar4 + 0x80011c));
  piVar5 = *(int **)(iVar4 + 0x800114);
  piVar3 = (int *)*piVar5;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_0042d580((void *)(iVar4 + 0x800114),(undefined4 *)(unaff_EBP + -0x18),piVar3,piVar5);
  operator_delete(*(void **)(iVar4 + 0x800114));
  piVar5 = *(int **)(iVar4 + 0x80010c);
  piVar3 = (int *)*piVar5;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_0042d580((void *)(iVar4 + 0x80010c),(undefined4 *)(unaff_EBP + -0x18),piVar3,piVar5);
  operator_delete(*(void **)(iVar4 + 0x80010c));
  piVar5 = *(int **)(iVar4 + 0x800104);
  piVar3 = (int *)*piVar5;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_0042d580((void *)(iVar4 + 0x800104),(undefined4 *)(unaff_EBP + -0x18),piVar3,piVar5);
  operator_delete(*(void **)(iVar4 + 0x800104));
  *(undefined1 *)(unaff_EBP + -4) = 6;
  cube::Database::Database((Database *)(iVar4 + 0xac));
  if (0xf < *(uint *)(iVar4 + 0xa8)) {
    operator_delete(*(void **)(iVar4 + 0x94));
  }
  *(undefined4 *)(iVar4 + 0xa8) = 0xf;
  *(undefined4 *)(iVar4 + 0xa4) = 0;
  this = (_Container_base0 *)(iVar4 + 0x88);
  *(undefined1 *)(iVar4 + 0x94) = 0;
  iVar6 = *(int *)this;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (iVar6 != 0) {
    std::_Container_base0::_Orphan_all(this);
    operator_delete(*(void **)this);
    *(undefined4 *)this = 0;
    *(undefined4 *)(iVar4 + 0x8c) = 0;
    *(undefined4 *)(iVar4 + 0x90) = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  cube::Speech::~Speech((Speech *)(iVar4 + 0x30));
  *(undefined1 *)(unaff_EBP + -4) = 2;
  cube::SpriteManager::~SpriteManager((SpriteManager *)(iVar4 + 0x1c));
  piVar5 = *(int **)(iVar4 + 0x14);
  piVar3 = (int *)*piVar5;
  *piVar5 = (int)piVar5;
  *(int *)(*(int *)(iVar4 + 0x14) + 4) = *(int *)(iVar4 + 0x14);
  *(undefined4 *)(iVar4 + 0x18) = 0;
  if (piVar3 != *(int **)(iVar4 + 0x14)) {
    do {
      piVar5 = (int *)*piVar3;
      operator_delete(piVar3);
      piVar3 = piVar5;
    } while (piVar5 != (int *)*(int *)(iVar4 + 0x14));
  }
  operator_delete(*(void **)(iVar4 + 0x14));
  piVar5 = (int *)*puVar7;
  piVar3 = (int *)*piVar5;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_004fc060(puVar7,(undefined4 *)(unaff_EBP + -0x18),piVar3,piVar5);
  operator_delete((void *)*puVar7);
  piVar5 = *(int **)(iVar4 + 4);
  piVar3 = (int *)*piVar5;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004fc060((void *)(iVar4 + 4),(undefined4 *)(unaff_EBP + -0x18),piVar3,piVar5);
  operator_delete(*(void **)(iVar4 + 4));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


/* FUN_004cd99a @ 004cd99a  kind=gamemisc  attributed-by=none  size=1140 */

void FUN_004cd99a(void)

{
  _Container_base0 *this;
  char cVar1;
  int *piVar2;
  void *this_00;
  int *piVar3;
  int *unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  int iVar4;
  int *piVar5;
  int unaff_EDI;
  int iVar6;
  undefined4 *puVar7;
  
  do {
    this_00 = *(void **)(unaff_EBP + -0x10);
    while( true ) {
      if (*unaff_EBX != 0) {
        if (*(char *)((int)this_00 + 0xb4) == '\0') {
          iVar4 = 0x10018;
          do {
            iVar6 = 0x40;
            do {
              FUN_004d81b0(this_00,*(int *)(*unaff_EBX + iVar4));
              this_00 = *(void **)(unaff_EBP + -0x10);
              iVar4 = iVar4 + 4;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          } while (iVar4 < 0x14018);
          unaff_ESI = *(int *)(unaff_EBP + -0x14);
          unaff_EDI = *(int *)(unaff_EBP + -0x18);
          FUN_004d7c50(this_00,unaff_EDI,unaff_ESI);
        }
        if ((undefined4 *)*unaff_EBX != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)*unaff_EBX)(1);
        }
      }
      if ((void *)unaff_EBX[0x100000] != (void *)0x0) {
        operator_delete((void *)unaff_EBX[0x100000]);
      }
      unaff_ESI = unaff_ESI + 1;
      unaff_EBX = unaff_EBX + 1;
      *(int *)(unaff_EBP + -0x14) = unaff_ESI;
      if (unaff_ESI < 0x400) break;
      unaff_EDI = unaff_EDI + 1;
      *(int *)(unaff_EBP + -0x18) = unaff_EDI;
      if (0x3ff < unaff_EDI) {
        iVar4 = *(int *)(unaff_EBP + -0x10);
        piVar5 = (int *)**(int **)(iVar4 + 4);
        if (piVar5 != *(int **)(iVar4 + 4)) {
          do {
            if ((undefined4 *)piVar5[6] != (undefined4 *)0x0) {
              (*(code *)**(undefined4 **)piVar5[6])(1);
            }
            if (*(char *)((int)piVar5 + 0xd) == '\0') {
              piVar3 = (int *)piVar5[2];
              if (*(char *)((int)piVar3 + 0xd) == '\0') {
                cVar1 = *(char *)(*piVar3 + 0xd);
                piVar5 = piVar3;
                piVar3 = (int *)*piVar3;
                while (cVar1 == '\0') {
                  cVar1 = *(char *)(*piVar3 + 0xd);
                  piVar5 = piVar3;
                  piVar3 = (int *)*piVar3;
                }
              }
              else {
                cVar1 = *(char *)(piVar5[1] + 0xd);
                piVar2 = (int *)piVar5[1];
                piVar3 = piVar5;
                while ((piVar5 = piVar2, cVar1 == '\0' && (piVar3 == (int *)piVar5[2]))) {
                  cVar1 = *(char *)(piVar5[1] + 0xd);
                  piVar2 = (int *)piVar5[1];
                  piVar3 = piVar5;
                }
              }
            }
          } while (piVar5 != *(int **)(iVar4 + 4));
        }
        piVar5 = (int *)**(int **)(iVar4 + 0xc);
        if (piVar5 != *(int **)(iVar4 + 0xc)) {
          do {
            iVar6 = piVar5[6];
            *(int *)(unaff_EBP + -0x18) = iVar6;
            if (iVar6 != 0) {
              puVar7 = (undefined4 *)(iVar6 + 0x78);
              FUN_004fc060(puVar7,(undefined4 *)(unaff_EBP + -0x14),*(int **)*puVar7,(int *)*puVar7)
              ;
              operator_delete((void *)*puVar7);
              operator_delete(*(void **)(unaff_EBP + -0x18));
            }
            if (*(char *)((int)piVar5 + 0xd) == '\0') {
              piVar3 = (int *)piVar5[2];
              if (*(char *)((int)piVar3 + 0xd) == '\0') {
                cVar1 = *(char *)(*piVar3 + 0xd);
                piVar5 = piVar3;
                piVar3 = (int *)*piVar3;
                while (cVar1 == '\0') {
                  cVar1 = *(char *)(*piVar3 + 0xd);
                  piVar5 = piVar3;
                  piVar3 = (int *)*piVar3;
                }
              }
              else {
                cVar1 = *(char *)(piVar5[1] + 0xd);
                piVar2 = (int *)piVar5[1];
                piVar3 = piVar5;
                while ((piVar5 = piVar2, cVar1 == '\0' && (piVar3 == (int *)piVar5[2]))) {
                  cVar1 = *(char *)(piVar5[1] + 0xd);
                  piVar2 = (int *)piVar5[1];
                  piVar3 = piVar5;
                }
              }
            }
          } while (piVar5 != *(int **)(iVar4 + 0xc));
        }
        puVar7 = (undefined4 *)(iVar4 + 0xc);
        DeleteCriticalSection((LPCRITICAL_SECTION)(iVar4 + 0x8000c0));
        DeleteCriticalSection((LPCRITICAL_SECTION)(iVar4 + 0x8000d8));
        piVar5 = *(int **)(iVar4 + 0x800154);
        piVar3 = (int *)*piVar5;
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        FUN_004fc060((void *)(iVar4 + 0x800154),(undefined4 *)(unaff_EBP + -0x18),piVar3,piVar5);
        operator_delete(*(void **)(iVar4 + 0x800154));
        piVar5 = *(int **)(iVar4 + 0x80014c);
        piVar3 = (int *)*piVar5;
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        FUN_0041a510((void *)(iVar4 + 0x80014c),(undefined4 *)(unaff_EBP + -0x18),piVar3,piVar5);
        operator_delete(*(void **)(iVar4 + 0x80014c));
        piVar5 = *(int **)(iVar4 + 0x800144);
        piVar3 = (int *)*piVar5;
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        FUN_0041a510((void *)(iVar4 + 0x800144),(undefined4 *)(unaff_EBP + -0x18),piVar3,piVar5);
        operator_delete(*(void **)(iVar4 + 0x800144));
        piVar5 = *(int **)(iVar4 + 0x80013c);
        piVar3 = (int *)*piVar5;
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        FUN_0041a510((void *)(iVar4 + 0x80013c),(undefined4 *)(unaff_EBP + -0x18),piVar3,piVar5);
        operator_delete(*(void **)(iVar4 + 0x80013c));
        piVar5 = *(int **)(iVar4 + 0x800134);
        piVar3 = (int *)*piVar5;
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        FUN_004d3e10((void *)(iVar4 + 0x800134),(undefined4 *)(unaff_EBP + -0x18),piVar3,piVar5);
        operator_delete(*(void **)(iVar4 + 0x800134));
        piVar5 = *(int **)(iVar4 + 0x80012c);
        piVar3 = (int *)*piVar5;
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        FUN_004d3e10((void *)(iVar4 + 0x80012c),(undefined4 *)(unaff_EBP + -0x18),piVar3,piVar5);
        operator_delete(*(void **)(iVar4 + 0x80012c));
        piVar5 = *(int **)(iVar4 + 0x800124);
        piVar3 = (int *)*piVar5;
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        FUN_004d3e10((void *)(iVar4 + 0x800124),(undefined4 *)(unaff_EBP + -0x18),piVar3,piVar5);
        operator_delete(*(void **)(iVar4 + 0x800124));
        piVar5 = *(int **)(iVar4 + 0x80011c);
        piVar3 = (int *)*piVar5;
        *(undefined1 *)(unaff_EBP + -4) = 10;
        FUN_0042d580((void *)(iVar4 + 0x80011c),(undefined4 *)(unaff_EBP + -0x18),piVar3,piVar5);
        operator_delete(*(void **)(iVar4 + 0x80011c));
        piVar5 = *(int **)(iVar4 + 0x800114);
        piVar3 = (int *)*piVar5;
        *(undefined1 *)(unaff_EBP + -4) = 9;
        FUN_0042d580((void *)(iVar4 + 0x800114),(undefined4 *)(unaff_EBP + -0x18),piVar3,piVar5);
        operator_delete(*(void **)(iVar4 + 0x800114));
        piVar5 = *(int **)(iVar4 + 0x80010c);
        piVar3 = (int *)*piVar5;
        *(undefined1 *)(unaff_EBP + -4) = 8;
        FUN_0042d580((void *)(iVar4 + 0x80010c),(undefined4 *)(unaff_EBP + -0x18),piVar3,piVar5);
        operator_delete(*(void **)(iVar4 + 0x80010c));
        piVar5 = *(int **)(iVar4 + 0x800104);
        piVar3 = (int *)*piVar5;
        *(undefined1 *)(unaff_EBP + -4) = 7;
        FUN_0042d580((void *)(iVar4 + 0x800104),(undefined4 *)(unaff_EBP + -0x18),piVar3,piVar5);
        operator_delete(*(void **)(iVar4 + 0x800104));
        *(undefined1 *)(unaff_EBP + -4) = 6;
        cube::Database::Database((Database *)(iVar4 + 0xac));
        if (0xf < *(uint *)(iVar4 + 0xa8)) {
          operator_delete(*(void **)(iVar4 + 0x94));
        }
        *(undefined4 *)(iVar4 + 0xa8) = 0xf;
        *(undefined4 *)(iVar4 + 0xa4) = 0;
        this = (_Container_base0 *)(iVar4 + 0x88);
        *(undefined1 *)(iVar4 + 0x94) = 0;
        iVar6 = *(int *)this;
        *(undefined1 *)(unaff_EBP + -4) = 4;
        if (iVar6 != 0) {
          std::_Container_base0::_Orphan_all(this);
          operator_delete(*(void **)this);
          *(undefined4 *)this = 0;
          *(undefined4 *)(iVar4 + 0x8c) = 0;
          *(undefined4 *)(iVar4 + 0x90) = 0;
        }
        *(undefined1 *)(unaff_EBP + -4) = 3;
        cube::Speech::~Speech((Speech *)(iVar4 + 0x30));
        *(undefined1 *)(unaff_EBP + -4) = 2;
        cube::SpriteManager::~SpriteManager((SpriteManager *)(iVar4 + 0x1c));
        piVar5 = *(int **)(iVar4 + 0x14);
        piVar3 = (int *)*piVar5;
        *piVar5 = (int)piVar5;
        *(int *)(*(int *)(iVar4 + 0x14) + 4) = *(int *)(iVar4 + 0x14);
        *(undefined4 *)(iVar4 + 0x18) = 0;
        if (piVar3 != *(int **)(iVar4 + 0x14)) {
          do {
            piVar5 = (int *)*piVar3;
            operator_delete(piVar3);
            piVar3 = piVar5;
          } while (piVar5 != (int *)*(int *)(iVar4 + 0x14));
        }
        operator_delete(*(void **)(iVar4 + 0x14));
        piVar5 = (int *)*puVar7;
        piVar3 = (int *)*piVar5;
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_004fc060(puVar7,(undefined4 *)(unaff_EBP + -0x18),piVar3,piVar5);
        operator_delete((void *)*puVar7);
        piVar5 = *(int **)(iVar4 + 4);
        piVar3 = (int *)*piVar5;
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_004fc060((void *)(iVar4 + 4),(undefined4 *)(unaff_EBP + -0x18),piVar3,piVar5);
        operator_delete(*(void **)(iVar4 + 4));
        ExceptionList = *(void **)(unaff_EBP + -0xc);
        return;
      }
      this_00 = *(void **)(unaff_EBP + -0x10);
      unaff_ESI = 0;
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
    }
  } while( true );
}


/* FUN_004ce1d0 @ 004ce1d0  kind=gamemisc  attributed-by=none  size=18 */

int __thiscall FUN_004ce1d0(void *this,int param_1)

{
  return param_1 * 0x148 + *(int *)this;
}


/* FUN_004ce1f0 @ 004ce1f0  kind=gamemisc  attributed-by=none  size=3 */

undefined4 __fastcall FUN_004ce1f0(undefined4 *param_1)

{
  return *param_1;
}


/* FUN_004ce200 @ 004ce200  kind=gamemisc  attributed-by=none  size=22 */

void __thiscall FUN_004ce200(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)this;
  *param_1 = iVar1;
  *(int *)this = iVar1 + 0x188;
  return;
}


/* FUN_004ce220 @ 004ce220  kind=gamemisc  attributed-by=none  size=41 */

void __thiscall FUN_004ce220(void *this,int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  *param_1 = *param_2 + *(int *)this;
  iVar1 = param_2[2];
  iVar2 = *(int *)((int)this + 8);
  param_1[1] = param_2[1] + *(int *)((int)this + 4);
  param_1[2] = iVar1 + iVar2;
  return;
}


/* FUN_004ce250 @ 004ce250  kind=gamemisc  attributed-by=none  size=23 */

void __thiscall FUN_004ce250(void *this,int *param_1,int param_2)

{
  *param_1 = param_2 * 0x148 + *(int *)this;
  return;
}


/* FUN_004ce270 @ 004ce270  kind=gamemisc  attributed-by=none  size=23 */

void __thiscall FUN_004ce270(void *this,int *param_1,int param_2)

{
  *param_1 = *(int *)this + param_2 * 0xc;
  return;
}


/* FUN_004ce290 @ 004ce290  kind=gamemisc  attributed-by=none  size=56 */

void __thiscall FUN_004ce290(void *this,int *param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar3 = FUN_0054a946();
  uVar1 = *(uint *)this;
  iVar2 = *(int *)((int)this + 4);
  *param_1 = uVar1 - (uint)uVar3;
  param_1[1] = (iVar2 - (int)(uVar3 >> 0x20)) - (uint)(uVar1 < (uint)uVar3);
  return;
}


/* FUN_004ce2d0 @ 004ce2d0  kind=gamemisc  attributed-by=none  size=64 */

ulonglong * FUN_004ce2d0(ulonglong *param_1)

{
  ulonglong uVar1;
  
  uVar1 = FUN_0054a946();
  *param_1 = uVar1;
  return param_1;
}


/* FUN_004ce310 @ 004ce310  kind=gamemisc  attributed-by=none  size=54 */

ulonglong * FUN_004ce310(ulonglong *param_1)

{
  ulonglong uVar1;
  
  uVar1 = FUN_0054a946();
  *param_1 = uVar1;
  return param_1;
}


/* FUN_004ce350 @ 004ce350  kind=gamemisc  attributed-by=none  size=34 */

uint __thiscall FUN_004ce350(void *this,uint *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 4);
  if (((int)uVar1 <= (int)param_1[1]) &&
     (((int)uVar1 < (int)param_1[1] || (uVar1 = *(uint *)this, uVar1 < *param_1)))) {
    return CONCAT31((int3)(uVar1 >> 8),1);
  }
  return uVar1 & 0xffffff00;
}


/* FUN_004ce380 @ 004ce380  kind=gamemisc  attributed-by=none  size=34 */

uint __thiscall FUN_004ce380(void *this,uint *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 4);
  if (((int)param_1[1] <= (int)uVar1) &&
     (((int)param_1[1] < (int)uVar1 || (uVar1 = *(uint *)this, *param_1 <= uVar1)))) {
    return CONCAT31((int3)(uVar1 >> 8),1);
  }
  return uVar1 & 0xffffff00;
}


/* FUN_004ce3e0 @ 004ce3e0  kind=gamemisc  attributed-by=none  size=91 */

void __thiscall FUN_004ce3e0(void *this)

{
  ios_base *piVar1;
  
  piVar1 = (ios_base *)((int)this + 0x68);
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> */
  *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
   (piVar1 + *(int *)(*(int *)this + 4) + -0x68) =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)(piVar1 + *(int *)(*(int *)this + 4) + -0x6c) = *(int *)(*(int *)this + 4) + -0x68;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> */
  *(basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>_vftable **)((int)this + 0x18)
       = &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  FUN_004ce990((int)this + 0x18);
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)((int)this + 0x18));
  std::basic_iostream<char,std::char_traits<char>_>::~basic_iostream<char,std::char_traits<char>_>
            ((basic_iostream<char,std::char_traits<char>_> *)((int)this + 0x20));
  *(code **)piVar1 = _vftable__exref;
  *(code **)piVar1 = _vftable__exref;
  std::ios_base::_Ios_base_dtor(piVar1);
  return;
}


/* FUN_004ce480 @ 004ce480  kind=gamemisc  attributed-by=none  size=119 */

ios_base * __thiscall FUN_004ce480(void *this,byte param_1)

{
  ios_base *piVar1;
  int iVar2;
  
  piVar1 = (ios_base *)((int)this + -0x68);
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> */
  *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
   (*(int *)(*(int *)piVar1 + 4) + -0x68 + (int)this) =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  iVar2 = *(int *)(*(int *)((int)this + -0x68) + 4);
  *(int *)(iVar2 + -0x6c + (int)this) = iVar2 + -0x68;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> */
  *(basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
   ((int)this + -0x50) =
       &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  FUN_004ce990((int)this + -0x50);
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)((int)this + -0x50));
  std::basic_iostream<char,std::char_traits<char>_>::~basic_iostream<char,std::char_traits<char>_>
            ((basic_iostream<char,std::char_traits<char>_> *)((int)this + -0x48));
  *(code **)this = _vftable__exref;
  *(code **)this = _vftable__exref;
  std::ios_base::_Ios_base_dtor(this);
  if ((param_1 & 1) != 0) {
    operator_delete(piVar1);
  }
  return piVar1;
}


/* FUN_004ce500 @ 004ce500  kind=gamemisc  attributed-by=none  size=62 */

void * __thiscall FUN_004ce500(void *this,byte param_1)

{
  void *local_8;
  
  local_8 = this;
  FUN_004fc060((void *)((int)this + 0x78),&local_8,(int *)**(int **)((int)this + 0x78),
               *(int **)((int)this + 0x78));
  operator_delete(*(void **)((int)this + 0x78));
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


/* FUN_004ce580 @ 004ce580  kind=gamemisc  attributed-by=none  size=102 */

undefined4 __thiscall FUN_004ce580(void *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (param_1 == 0) {
    return 0;
  }
  if (0x15555555 < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  pvVar1 = operator_new(param_1 * 0xc);
  if (pvVar1 != (void *)0x0) {
    *(void **)this = pvVar1;
    *(void **)((int)this + 4) = pvVar1;
    pvVar1 = (void *)((int)pvVar1 + param_1 * 0xc);
    *(void **)((int)this + 8) = pvVar1;
    return CONCAT31((int3)((uint)pvVar1 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  std::_Xbad_alloc();
}


/* FUN_004ce660 @ 004ce660  kind=gamemisc  attributed-by=none  size=54 */

void FUN_004ce660(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0xc);
  if (puVar1 != (void *)0x0) {
    if (param_1 == (undefined4 *)0x0) {
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


/* FUN_004ce6e0 @ 004ce6e0  kind=gamemisc  attributed-by=none  size=58 */

void FUN_004ce6e0(void *param_1)

{
  if (7 < *(uint *)((int)param_1 + 0x2c)) {
    operator_delete(*(void **)((int)param_1 + 0x18));
  }
  *(undefined4 *)((int)param_1 + 0x2c) = 7;
  *(undefined4 *)((int)param_1 + 0x28) = 0;
  *(undefined2 *)((int)param_1 + 0x18) = 0;
  operator_delete(param_1);
  return;
}


/* FUN_004ce720 @ 004ce720  kind=gamemisc  attributed-by=none  size=92 */

void FUN_004ce720(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = *(char *)((int)param_1 + 0xd);
  while (cVar1 == '\0') {
    FUN_004ce720((int *)param_1[2]);
    piVar2 = (int *)*param_1;
    if (7 < (uint)param_1[0xb]) {
      operator_delete((void *)param_1[6]);
    }
    param_1[0xb] = 7;
    param_1[10] = 0;
    *(undefined2 *)(param_1 + 6) = 0;
    operator_delete(param_1);
    param_1 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xd);
  }
  return;
}


/* FUN_004ce7e0 @ 004ce7e0  kind=gamemisc  attributed-by=none  size=231 */

void __thiscall FUN_004ce7e0(void *this,uint param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00554930;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar3 = (void *)0x0;
  if (param_1 != 0) {
    if (param_1 < 0xa72f06) {
      pvVar3 = operator_new(param_1 * 0x188);
      if (pvVar3 != (void *)0x0) goto LAB_004ce841;
    }
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
LAB_004ce841:
  local_8 = 0;
  FUN_004c8020(*(undefined4 **)this,*(undefined4 **)((int)this + 4),pvVar3);
  iVar1 = *(int *)((int)this + 4);
  iVar2 = *(int *)this;
  if (*(undefined4 **)this != (undefined4 *)0x0) {
    FUN_004c6860(*(undefined4 **)this,*(undefined4 **)((int)this + 4));
    operator_delete(*(void **)this);
  }
  *(void **)((int)this + 8) = (void *)(param_1 * 0x188 + (int)pvVar3);
  *(void **)((int)this + 4) = (void *)(((iVar1 - iVar2) / 0x188) * 0x188 + (int)pvVar3);
  *(void **)this = pvVar3;
  ExceptionList = local_10;
  return;
}


/* FUN_004ce8e0 @ 004ce8e0  kind=gamemisc  attributed-by=none  size=162 */

void __thiscall FUN_004ce8e0(void *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 <= (uint)((*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x188)) {
    return;
  }
  iVar1 = (*(int *)((int)this + 4) - *(int *)this) / 0x188;
  if (0xa72f05U - iVar1 < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  uVar2 = (*(int *)((int)this + 8) - *(int *)this) / 0x188;
  uVar3 = iVar1 + param_1;
  if (0xa72f05 - (uVar2 >> 1) < uVar2) {
    uVar2 = 0;
    if (uVar3 != 0) {
      uVar2 = uVar3;
    }
    FUN_004ce7e0(this,uVar2);
    return;
  }
  uVar2 = uVar2 + (uVar2 >> 1);
  if (uVar2 < uVar3) {
    uVar2 = uVar3;
  }
  FUN_004ce7e0(this,uVar2);
  return;
}


/* FUN_004ce990 @ 004ce990  kind=gamemisc  attributed-by=none  size=89 */

void __fastcall FUN_004ce990(int param_1)

{
  if ((*(byte *)(param_1 + 0x3c) & 1) != 0) {
    operator_delete((void *)**(undefined4 **)(param_1 + 0xc));
  }
  **(undefined4 **)(param_1 + 0xc) = 0;
  **(undefined4 **)(param_1 + 0x1c) = 0;
  **(undefined4 **)(param_1 + 0x2c) = 0;
  **(undefined4 **)(param_1 + 0x10) = 0;
  **(undefined4 **)(param_1 + 0x20) = 0;
  **(undefined4 **)(param_1 + 0x30) = 0;
  *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0xfffffffe;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}


/* FUN_004cea80 @ 004cea80  kind=gamemisc  attributed-by=none  size=4604 */

void __thiscall FUN_004cea80(void *this,uint *param_1,void *param_2,undefined4 *param_3)

{
  ushort uVar1;
  float *pfVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void *pvVar5;
  float *pfVar6;
  char cVar7;
  uint uVar8;
  float *pfVar9;
  undefined4 uVar10;
  float *pfVar11;
  int iVar12;
  undefined4 *puVar13;
  int *piVar14;
  undefined1 *puVar15;
  void *pvVar16;
  uint uVar17;
  float fVar18;
  int iVar19;
  bool bVar20;
  float10 fVar21;
  float fVar22;
  double dVar23;
  float fVar24;
  float fVar25;
  undefined4 local_31c;
  int local_318;
  undefined4 *local_314;
  int local_310;
  float *local_30c;
  float *local_308;
  float *local_304;
  void *local_300;
  float local_2fc;
  void *local_2f8;
  void *local_2f4;
  char local_2ed;
  undefined4 *local_2ec;
  float *local_2e8;
  uint local_2e4;
  uint local_2e0;
  uint local_2dc;
  uint local_2d8;
  undefined8 local_2d4;
  undefined8 local_2cc;
  int local_2c4;
  int iStack_2c0;
  undefined1 local_2bc [280];
  float local_1a4;
  float local_1a0;
  char local_19c;
  undefined1 local_19b;
  undefined4 local_198;
  undefined4 local_194;
  undefined2 local_190;
  undefined1 local_18e;
  undefined2 local_18c;
  undefined1 local_188 [256];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  int local_7c;
  undefined1 local_74 [16];
  int local_64;
  int local_60;
  undefined1 local_54 [40];
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  undefined4 local_1c;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0055495b;
  local_10 = ExceptionList;
  uVar8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_300 = param_2;
  local_2ec = param_3;
  local_30c = (float *)(param_1 + 2);
  pfVar9 = (float *)((int)this + 4);
  local_304 = pfVar9;
  local_2f4 = this;
  local_14 = uVar8;
  FUN_00530600(pfVar9,(int *)&local_2e8,(uint *)local_30c);
  pfVar9 = (float *)*pfVar9;
  if (((local_2e8 != pfVar9) && (local_2f8 = (void *)local_2e8[6], local_2f8 != (void *)0x0)) &&
     (0.0 < *(float *)((int)local_2f8 + 0x16c))) {
    if ((*(int *)((int)this + 0xb8) == 0) && (*(char *)((int)local_2f8 + 0x60) == '\0')) {
      FUN_00428400(local_300,param_1);
    }
    else {
      FUN_00530600((void *)((int)this + 4),(int *)&local_2e8,param_1);
      pvVar16 = local_2f8;
      if (local_2e8 == pfVar9) {
        fVar18 = 0.0;
      }
      else {
        fVar18 = local_2e8[6];
      }
      local_2fc = fVar18;
      if (0.0 < (float)param_1[4]) {
        dVar23 = 2.0;
        libm_sse2_pow_precise(uVar8);
        fVar22 = *(float *)((int)pvVar16 + 0x1190) - ((float)param_1[4] * 0.25) / (float)dVar23;
        *(float *)((int)pvVar16 + 0x1190) = fVar22;
        if (fVar22 < 0.0) {
          *(undefined4 *)((int)pvVar16 + 0x1190) = 0;
        }
        if (*(char *)((int)pvVar16 + 0x68) == 'T') {
          *(undefined1 *)((int)pvVar16 + 0x68) = 0;
          *(undefined4 *)((int)pvVar16 + 300) = 3000;
        }
      }
      if ((0.0 <= (float)param_1[4]) && (fVar18 != 0.0)) {
        *(uint *)((int)fVar18 + 0x11d0) = param_1[2];
        *(uint *)((int)fVar18 + 0x11d4) = param_1[3];
        *(uint *)((int)pvVar16 + 0x11d0) = *param_1;
        *(uint *)((int)pvVar16 + 0x11d4) = param_1[1];
        pfVar9 = (float *)FUN_00402b10((void *)((int)fVar18 + 0x13ac),param_1 + 2);
        *pfVar9 = *pfVar9 + 1.0;
        uVar10 = FUN_0040f5a0((int)fVar18);
        if ((char)uVar10 == '\0') {
          if (*(int *)((int)fVar18 + 100) == 0x19) {
            pfVar9 = (float *)FUN_00402b10((void *)((int)pvVar16 + 0x13a4),param_1);
            fVar22 = (float)param_1[4] * 10.0;
          }
          else if (((*(char *)((int)fVar18 + 0xaa8) == '\x03') &&
                   (cVar7 = FUN_0040f8b0((char *)((int)fVar18 + 0xaa8)), cVar7 != '\0')) &&
                  (*(char *)((int)fVar18 + 0x141) == '\x01')) {
            pfVar9 = (float *)FUN_00402b10((void *)((int)pvVar16 + 0x13a4),param_1);
            fVar22 = (float)param_1[4] * 20.0;
          }
          else {
            pfVar9 = (float *)FUN_00402b10((void *)((int)pvVar16 + 0x13a4),param_1);
            fVar22 = (float)param_1[4] * 2.0;
          }
        }
        else {
          pfVar9 = (float *)FUN_00402b10((void *)((int)pvVar16 + 0x13a4),param_1);
          fVar22 = (float)param_1[4];
        }
        *pfVar9 = fVar22 + 0.01 + *pfVar9;
        FUN_004d5f40((int)fVar18,(int)pvVar16,(int)local_300);
      }
      if ((*(ushort *)((int)pvVar16 + 0x7e) & 0x2000) == 0) {
LAB_004ced90:
        pvVar5 = local_2f8;
        if (*(char *)((int)param_1 + 0x45) != '\x03') {
          if (0.0 <= (float)param_1[4]) {
            fVar22 = (float)param_1[0xe];
            fVar24 = (float)param_1[0xf];
            fVar25 = (float)param_1[0x10];
            if ((0 < *(int *)((int)pvVar16 + 300)) && ((int)param_1[6] < 1)) {
              fVar22 = fVar22 * 0.1;
              fVar24 = fVar24 * 0.1;
              fVar25 = fVar25 * 0.1;
            }
            if ((*(char *)((int)pvVar16 + 0x60) != '\x06') &&
               ((((*(char *)((int)local_2f4 + 0xb4) == '\0' &&
                  (*(char *)((int)pvVar16 + 0x60) != '\0')) ||
                 (pvVar16 == *(void **)((int)local_2f4 + 0xb8))) &&
                (*(float *)((int)pvVar16 + 0x4c) * *(float *)((int)pvVar16 + 0x4c) +
                 *(float *)((int)pvVar16 + 0x50) * *(float *)((int)pvVar16 + 0x50) +
                 *(float *)((int)pvVar16 + 0x54) * *(float *)((int)pvVar16 + 0x54) <=
                 fVar24 * fVar24 + fVar22 * fVar22 + fVar25 * fVar25)))) {
              *(float *)((int)pvVar16 + 0x4c) = fVar22;
              *(float *)((int)pvVar16 + 0x50) = fVar24;
              *(float *)((int)pvVar16 + 0x54) = fVar25;
            }
            if (0 < (int)param_1[6]) {
              *(undefined4 *)((int)pvVar16 + 0x34) = 0;
              *(undefined4 *)((int)pvVar16 + 0x38) = 0;
              *(undefined4 *)((int)pvVar16 + 0x3c) = 0;
            }
          }
          uVar8 = param_1[7];
          if (0 < (int)uVar8) {
            if ((int)uVar8 < (int)*(uint *)((int)pvVar16 + 0x130)) {
              uVar8 = *(uint *)((int)pvVar16 + 0x130);
            }
            *(uint *)((int)pvVar16 + 0x130) = uVar8;
          }
          if (*(char *)((int)param_1 + 0x45) == '\x01') {
            fVar18 = *(float *)((int)pvVar16 + 0x170) + 0.25;
            *(float *)((int)pvVar16 + 0x170) = fVar18;
            if (1.0 < fVar18) {
              *(undefined4 *)((int)pvVar16 + 0x170) = 0x3f800000;
            }
          }
          else if (*(char *)((int)param_1 + 0x45) == '\x04') {
            FUN_00408230(pvVar16,(int)local_300);
          }
          else {
            uVar8 = param_1[6];
            if (0 < (int)uVar8) {
              if ((int)uVar8 < (int)*(uint *)((int)pvVar16 + 300)) {
                uVar8 = *(uint *)((int)pvVar16 + 300);
              }
              *(uint *)((int)pvVar16 + 300) = uVar8;
            }
            if ((*(char *)((int)local_2f4 + 0xb4) == '\0') ||
               (pvVar16 == *(void **)((int)local_2f4 + 0xb8))) {
              fVar22 = (float)param_1[4];
              if (fVar22 <= 0.0) {
                if (fVar22 < 0.0) {
                  local_2e8 = (float *)(*(float *)((int)pvVar16 + 0x16c) - fVar22);
                  *(float **)((int)pvVar16 + 0x16c) = local_2e8;
                  fVar21 = FUN_0040fda0((int)pvVar16);
                  local_308 = (float *)(float)fVar21;
                  if ((float)local_308 < (float)local_2e8) {
                    fVar21 = FUN_0040fda0((int)pvVar16);
                    *(float *)((int)pvVar16 + 0x16c) = (float)fVar21;
                  }
                  if ((*(char *)((int)local_2f4 + 0xb4) == '\0') &&
                     (local_2e8 = (float *)**(float **)((int)local_2f4 + 4),
                     local_2e8 != *(float **)((int)local_2f4 + 4))) {
                    do {
                      pfVar9 = local_2e8;
                      if ((local_2e8[6] != 0.0) &&
                         ((uVar10 = FUN_004cfcc0((int)local_2fc,(int)local_2e8[6]),
                          (char)uVar10 != '\0' &&
                          (iVar12 = *(int *)((int)pfVar9[6] + 0x13a4),
                          piVar14 = (int *)FUN_00530600((void *)((int)pfVar9[6] + 0x13a4),
                                                        (int *)&local_308,
                                                        (uint *)((int)local_2f8 + 8)),
                          fVar18 = local_2fc, *piVar14 != iVar12)))) {
                        pfVar11 = (float *)FUN_00402b10((void *)((int)pfVar9[6] + 0x13a4),
                                                        (uint *)((int)local_2fc + 8));
                        *pfVar11 = *pfVar11 - (float)param_1[4] * 0.1;
                        FUN_004d5f40((int)fVar18,(int)pfVar9[6],(int)local_300);
                      }
                      FUN_00407a50((int *)&local_2e8);
                    } while (local_2e8 != (float *)*local_304);
                  }
                }
              }
              else if (*(char *)((int)param_1 + 0x45) == '\x05') {
                piVar14 = (int *)**(int **)((int)pvVar16 + 0x1178);
                if (piVar14 != *(int **)((int)pvVar16 + 0x1178)) {
                  do {
                    if ((char)piVar14[2] == '\x06') {
                      fVar18 = (float)piVar14[3];
                      fVar22 = (float)param_1[4];
                      piVar14[3] = (int)(fVar18 - fVar22);
                      if (fVar18 - fVar22 <= 0.0) {
                        piVar14[3] = 0;
                        piVar14[4] = 0;
                      }
                      FUN_004063d0((int)&local_2e4);
                      local_2e4 = *param_1;
                      local_2d4 = *(ulonglong *)(piVar14 + 2);
                      local_2e0 = param_1[1];
                      local_2dc = param_1[2];
                      local_2d8 = param_1[3];
                      local_2cc = *(undefined8 *)(piVar14 + 4);
                      local_2c4 = piVar14[6];
                      iStack_2c0 = piVar14[7];
                      FUN_00411040((void *)((int)local_300 + 0x58),(undefined8 *)&local_2e4);
                    }
                    piVar14 = (int *)*piVar14;
                  } while (piVar14 != (int *)*(int *)((int)pvVar5 + 0x1178));
                }
              }
              else {
                uVar8 = FUN_00409620((int)pvVar16);
                if (((char)uVar8 != '\0') &&
                   ((fVar18 == 0.0 || (uVar8 = FUN_00409620((int)fVar18), (char)uVar8 != '\0')))) {
                  *(float *)((int)pvVar16 + 0x16c) =
                       *(float *)((int)pvVar16 + 0x16c) - (float)param_1[4];
                }
              }
              pvVar16 = local_2f8;
              if (*(float *)((int)local_2f8 + 0x16c) <= 0.0) {
                *(undefined4 *)((int)local_2f8 + 0x16c) = 0;
                local_18 = 0x3f800000;
                FUN_00402550(&local_2c,(longlong *)((int)local_2f8 + 0x10));
                local_1c = 0x3f800000;
                local_20 = 3.78351e-44;
                FUN_00428590((void *)((int)local_300 + 8),&local_2c);
                *(undefined4 *)((int)pvVar16 + 0x6c) = 0;
                iVar12 = FUN_00406290(local_2f4,*(uint *)((int)pvVar16 + 0x1b0),
                                      *(uint *)((int)pvVar16 + 0x1b4));
                if (iVar12 != 0) {
                  iVar19 = 0;
                  for (piVar14 = *(int **)(iVar12 + 0xc); piVar14 != *(int **)(iVar12 + 0x10);
                      piVar14 = piVar14 + 0x62) {
                    if (((*piVar14 == 5) && (piVar14[0x5e] == *(int *)((int)pvVar16 + 0x1b8))) &&
                       ((char)piVar14[0xc] != '\0')) {
                      FUN_004d8c90(piVar14,(int)local_300,'\0');
                      local_80 = *(undefined4 *)((int)pvVar16 + 0x1b4);
                      local_84 = *(undefined4 *)((int)pvVar16 + 0x1b0);
                      local_7c = iVar19;
                      FUN_00422da0(local_74,piVar14);
                      FUN_004284f0((void *)((int)local_300 + 0x30),&local_84);
                      break;
                    }
                    iVar19 = iVar19 + 1;
                  }
                }
                FUN_004d2ae0(local_2f4,(int)pvVar16,local_2ec);
                pfVar9 = local_304;
                local_2e8 = *(float **)*local_304;
                if (local_2e8 != (float *)*local_304) {
                  do {
                    if ((local_2e8[6] != 0.0) && (*(char *)((int)local_2e8[6] + 0x60) == '\0')) {
                      FUN_00402c50((void *)((int)local_2e8[6] + 0x10),(uint *)&local_2c,
                                   (uint *)((int)pvVar16 + 0x10));
                    }
                    FUN_00407a50((int *)&local_2e8);
                  } while (local_2e8 != (float *)*pfVar9);
                }
                pfVar9 = (float *)((int)pvVar16 + 0x11c8);
                local_308 = pfVar9;
                if (*(int *)((int)pvVar16 + 0x11c8) != 0 || *(int *)((int)pvVar16 + 0x11cc) != 0) {
                  FUN_00530600(local_304,(int *)&local_2ec,(uint *)pfVar9);
                  puVar13 = (undefined4 *)*local_304;
                  if ((local_2ec != puVar13) && (local_2ec[6] != 0)) {
                    FUN_00530600(local_304,(int *)&local_2ec,(uint *)pfVar9);
                    if (local_2ec == puVar13) {
                      iVar12 = 0;
                    }
                    else {
                      iVar12 = local_2ec[6];
                    }
                    *(undefined4 *)(iVar12 + 0x16c) = 0;
                  }
                }
                fVar21 = FUN_00407d60((float)(int)((uint)*(byte *)((int)pvVar16 + 0x1a8) +
                                                  *(int *)((int)pvVar16 + 400)));
                local_2ec = (undefined4 *)(float)fVar21;
                local_2fc = (float)local_2ec * 20.0;
                if (local_2fc < 1.0) {
                  local_2fc = 1.0;
                }
                iVar12 = FUN_0040f650((int)pvVar16);
                if ((char)iVar12 != '\0') {
                  local_2fc = local_2fc * 20.0;
                }
                uVar1 = *(ushort *)((int)pvVar16 + 0x7e);
                if ((uVar1 & 0x200) != 0) {
                  local_2fc = local_2fc * 10.0;
                }
                if ((uVar1 & 0x800) != 0) {
                  local_2fc = 0.0;
                }
                local_2ed = '\0';
                local_2e4 = 0;
                local_2e0 = 0;
                local_2dc = 0;
                local_2d8 = 0;
                local_2d4 = local_2d4 & 0xffff000000000000;
                local_2cc = 0;
                local_2c4 = 0;
                iStack_2c0 = 0;
                if ((((*(char *)((int)local_2f4 + 0xb4) == '\0') &&
                     (iVar12 = FUN_004286f0(local_2f4,
                                            (int)(*(int *)((int)pvVar16 + 0x1b0) +
                                                 (*(int *)((int)pvVar16 + 0x1b0) >> 0x1f & 7U)) >> 3
                                            ,(int)(*(int *)((int)pvVar16 + 0x1b4) +
                                                  (*(int *)((int)pvVar16 + 0x1b4) >> 0x1f & 7U)) >>
                                             3), iVar12 != 0)) &&
                    (*(char *)(iVar12 + 0x41) != '\x02')) &&
                   (((uVar1 & 0x2000) != 0 ||
                    ((*(int *)(iVar12 + 0x34) == 5 && (*(char *)((int)pvVar16 + 0x1d38) != '\0')))))
                   ) {
                  pfVar9 = *(float **)((int)pvVar16 + 0x13a4);
                  local_2e8 = (float *)*pfVar9;
                  while (local_2e8 != pfVar9) {
                    if (0.0 < local_2e8[6]) {
                      pfVar11 = local_2e8 + 4;
                      FUN_00530600(local_304,(int *)&local_2ec,(uint *)pfVar11);
                      if (((local_2ec != (undefined4 *)*local_304) && (local_2ec[6] != 0)) &&
                         (uVar8 = FUN_00405420(local_2f4,(uint *)pfVar11),
                         *(char *)(uVar8 + 0x60) == '\0')) {
                        switch(*(undefined4 *)(iVar12 + 0x34)) {
                        case 1:
                        case 2:
                        case 3:
                        case 4:
                        case 5:
                        case 0xd:
switchD_004cf51a_caseD_1:
                          local_2ed = '\x01';
                          *(undefined1 *)(iVar12 + 0x41) = 2;
                          break;
                        default:
                          goto switchD_004cf51a_caseD_6;
                        case 7:
                        case 8:
                        case 9:
                        case 10:
                        case 0xb:
                        case 0xc:
                          *(int *)(iVar12 + 0x44) = *(int *)(iVar12 + 0x44) + 1;
                          *(undefined1 *)(iVar12 + 0x41) = 1;
                          if (*(int *)(iVar12 + 0x48) <= *(int *)(iVar12 + 0x44))
                          goto switchD_004cf51a_caseD_1;
                        }
                        FUN_00423c90(&local_2e4,(undefined4 *)(iVar12 + 0x2c));
                        FUN_00422d00(&local_64);
                        pvVar16 = local_2f8;
                        local_64 = (int)(*(int *)((int)local_2f8 + 0x1b0) +
                                        (*(int *)((int)local_2f8 + 0x1b0) >> 0x1f & 7U)) >> 3;
                        local_60 = (int)((*(int *)((int)local_2f8 + 0x1b4) >> 0x1f & 7U) +
                                        *(int *)((int)local_2f8 + 0x1b4)) >> 3;
                        FUN_00423c90(local_54,&local_2e4);
                        FUN_004284a0((void *)((int)local_300 + 0x60),&local_64);
                        if ((local_2ed != '\0') &&
                           (pfVar9 = (float *)((*(int *)((int)pvVar16 + 0x1b0) >> 0x1f & 7U) +
                                               *(int *)((int)pvVar16 + 0x1b0) & 0xfffffff8),
                           local_2e8 = pfVar9, (int)pfVar9 < (int)(pfVar9 + 2))) {
                          do {
                            uVar8 = (*(int *)((int)pvVar16 + 0x1b4) >> 0x1f & 7U) +
                                    *(int *)((int)pvVar16 + 0x1b4) & 0xfffffff8;
                            local_2e8 = pfVar9;
                            if ((int)uVar8 < (int)(uVar8 + 8)) {
                              do {
                                puVar13 = (undefined4 *)FUN_00406290(local_2f4,(uint)pfVar9,uVar8);
                                local_2ec = puVar13;
                                if (puVar13 != (undefined4 *)0x0) {
                                  iVar12 = puVar13[6];
                                  iVar19 = puVar13[0x28];
                                  if (iVar19 < puVar13[7] - iVar12 >> 2) {
                                    do {
                                      puVar3 = *(undefined4 **)(iVar12 + iVar19 * 4);
                                      if (puVar3 != (undefined4 *)0x0) {
                                        (**(code **)*puVar3)(1);
                                      }
                                      iVar12 = puVar13[6];
                                      iVar19 = iVar19 + 1;
                                    } while (iVar19 < puVar13[7] - iVar12 >> 2);
                                  }
                                  FUN_0045f080(puVar13 + 6,local_2ec[0x28]);
                                  pfVar9 = local_2e8;
                                }
                                uVar8 = uVar8 + 1;
                              } while ((int)uVar8 <
                                       ((int)(*(int *)((int)local_2f8 + 0x1b4) +
                                             (*(int *)((int)local_2f8 + 0x1b4) >> 0x1f & 7U)) >> 3)
                                       * 8 + 8);
                            }
                            pfVar9 = (float *)((int)pfVar9 + 1);
                            pvVar16 = local_2f8;
                            local_2e8 = pfVar9;
                          } while ((int)pfVar9 <
                                   ((int)(*(int *)((int)local_2f8 + 0x1b0) +
                                         (*(int *)((int)local_2f8 + 0x1b0) >> 0x1f & 7U)) >> 3) * 8
                                   + 8);
                        }
                        break;
                      }
                    }
                    FUN_00407a50((int *)&local_2e8);
                  }
                }
switchD_004cf51a_caseD_6:
                pfVar9 = *(float **)*local_304;
                pfVar11 = local_304;
                if (pfVar9 != (float *)*local_304) {
                  do {
                    fVar18 = pfVar9[6];
                    if (fVar18 != 0.0) {
                      if (((*(float *)((int)fVar18 + 0x11d0) == *local_30c) &&
                          (*(float *)((int)fVar18 + 0x11d4) == local_30c[1])) ||
                         ((*(float *)((int)fVar18 + 0x11d0) == *local_308 &&
                          (*(float *)((int)fVar18 + 0x11d4) == local_308[1])))) {
                        *(undefined4 *)((int)fVar18 + 0x11d0) = 0;
                        *(undefined4 *)((int)fVar18 + 0x11d4) = 0;
                      }
                      local_310 = 0;
                      puVar13 = (undefined4 *)FUN_004ce660((undefined4 *)0x0,(undefined4 *)0x0);
                      pfVar11 = (float *)**(float **)((int)pfVar9[6] + 0x13a4);
                      local_8 = 0;
                      local_314 = puVar13;
                      local_2e8 = pfVar11;
                      if (pfVar11 != *(float **)((int)pfVar9[6] + 0x13a4)) {
                        do {
                          fVar18 = pfVar11[4];
                          if (((fVar18 == *local_30c) &&
                              (fVar18 = pfVar11[4], pfVar11[5] == local_30c[1])) ||
                             ((fVar18 == *local_308 && (pfVar11[5] == local_308[1])))) {
                            iVar12 = FUN_0052dfb0(puVar13,(undefined4 *)puVar13[1],&local_2e8);
                            if (local_310 == 0x15555554) goto LAB_004cfc8a;
                            puVar13[1] = iVar12;
                            local_310 = local_310 + 1;
                            **(int **)(iVar12 + 4) = iVar12;
                          }
                          if (*(char *)((int)pfVar11 + 0xd) == '\0') {
                            pfVar2 = (float *)pfVar11[2];
                            if (*(char *)((int)pfVar2 + 0xd) == '\0') {
                              cVar7 = *(char *)((int)*pfVar2 + 0xd);
                              pfVar11 = pfVar2;
                              pfVar2 = (float *)*pfVar2;
                              while (local_2e8 = pfVar11, cVar7 == '\0') {
                                cVar7 = *(char *)((int)*pfVar2 + 0xd);
                                pfVar11 = pfVar2;
                                pfVar2 = (float *)*pfVar2;
                              }
                            }
                            else {
                              cVar7 = *(char *)((int)pfVar11[1] + 0xd);
                              pfVar6 = (float *)pfVar11[1];
                              pfVar2 = pfVar11;
                              while ((pfVar11 = pfVar6, local_2e8 = pfVar11, cVar7 == '\0' &&
                                     (pfVar2 == (float *)pfVar11[2]))) {
                                cVar7 = *(char *)((int)pfVar11[1] + 0xd);
                                pfVar6 = (float *)pfVar11[1];
                                pfVar2 = pfVar11;
                              }
                            }
                          }
                        } while (pfVar11 != *(float **)((int)pfVar9[6] + 0x13a4));
                      }
                      for (puVar3 = (undefined4 *)*puVar13; puVar3 != puVar13;
                          puVar3 = (undefined4 *)*puVar3) {
                        FUN_0040a1d0((void *)((int)pfVar9[6] + 0x13a4),&local_31c,(int *)puVar3[2]);
                      }
                      if ((*(char *)((int)local_2f8 + 0x60) == '\x01') &&
                         (*(char *)((int)pfVar9[6] + 0x60) == '\0')) {
                        iVar12 = *(int *)((int)local_2f8 + 0x13a4);
                        piVar14 = (int *)FUN_00530600((void *)((int)local_2f8 + 0x13a4),&local_318,
                                                      (uint *)(pfVar9 + 4));
                        pvVar16 = local_300;
                        if (*piVar14 != iVar12) {
                          local_24 = *local_30c;
                          local_20 = local_30c[1];
                          local_1c = *(undefined4 *)((int)local_2f8 + 100);
                          local_2c = pfVar9[4];
                          local_28 = pfVar9[5];
                          local_18 = (int)local_2fc;
                          local_2ec = *(undefined4 **)((int)local_300 + 0x48);
                          iVar19 = FUN_004203c0(local_2ec,(undefined4 *)local_2ec[1],
                                                (undefined8 *)&local_2c);
                          iVar12 = *(int *)((int)pvVar16 + 0x4c);
                          if (iVar12 == 0x7fffffe) goto LAB_004cfc8a;
                          *(int *)((int)pvVar16 + 0x4c) = iVar12 + 1;
                          local_2ec[1] = iVar19;
                          **(int **)(iVar19 + 4) = iVar19;
                          FUN_004d61c0(local_2f4,(uint *)&local_2c);
                        }
                        if (local_2ed != '\0') {
                          local_2e8 = (float *)(uint)local_2d4._4_1_;
                          fVar21 = FUN_00407d60((float)((int)local_2e8 + (int)local_2d4));
                          local_2ec = (undefined4 *)(float)fVar21;
                          fVar18 = (float)local_2ec * 50.0;
                          local_19b = 0;
                          local_198 = 0;
                          local_194 = 0;
                          local_190 = 0;
                          local_18e = 0;
                          local_88 = 0;
                          memset(local_188,0,0x100);
                          pvVar16 = local_300;
                          local_1a4 = pfVar9[4];
                          local_1a0 = pfVar9[5];
                          local_18c = (undefined2)(int)(fVar18 + 1.0);
                          local_2ec = *(undefined4 **)((int)local_300 + 0x40);
                          local_19c = '\r';
                          iVar12 = FUN_00420380(local_2ec,(undefined4 *)local_2ec[1],&local_1a4);
                          if (*(int *)((int)pvVar16 + 0x44) == 0xdd67c7) {
LAB_004cfc8a:
                    /* WARNING: Subroutine does not return */
                            std::_Xlength_error("list<T> too long");
                          }
                          *(int *)((int)pvVar16 + 0x44) = *(int *)((int)pvVar16 + 0x44) + 1;
                          local_2ec[1] = iVar12;
                          **(int **)(iVar12 + 4) = iVar12;
                          if (pfVar9[6] == *(float *)((int)local_2f4 + 0xb8)) {
                            FUN_00427000((void *)((int)pfVar9[6] + 0x11dc),&local_19c,-1);
                          }
                          uVar8 = rand();
                          uVar8 = uVar8 & 0x80000001;
                          bVar20 = uVar8 == 0;
                          if ((int)uVar8 < 0) {
                            bVar20 = (uVar8 - 1 | 0xfffffffe) == 0xffffffff;
                          }
                          if (bVar20) {
                            puVar15 = (undefined1 *)
                                      FUN_00528bf0(local_2bc,(short)local_2d4,(char)local_2e8,
                                                   (uint)*(byte *)((int)pfVar9[6] + 0x140));
                          }
                          else {
                            puVar15 = (undefined1 *)
                                      FUN_0052c4e0(local_2bc,(short)local_2d4,(char)local_2e8,
                                                   (uint)*(byte *)((int)pfVar9[6] + 0x140));
                          }
                          FUN_00402a70(&local_19c,puVar15);
                          local_2ec = *(undefined4 **)((int)pvVar16 + 0x40);
                          iVar12 = FUN_00420380(local_2ec,(undefined4 *)local_2ec[1],&local_1a4);
                          if (*(int *)((int)pvVar16 + 0x44) == 0xdd67c7) goto LAB_004cfc8a;
                          *(int *)((int)pvVar16 + 0x44) = *(int *)((int)pvVar16 + 0x44) + 1;
                          local_2ec[1] = iVar12;
                          **(int **)(iVar12 + 4) = iVar12;
                          if (pfVar9[6] == *(float *)((int)local_2f4 + 0xb8)) {
                            FUN_00427000((void *)((int)pfVar9[6] + 0x11dc),&local_19c,-1);
                          }
                        }
                      }
                      puVar3 = (undefined4 *)*puVar13;
                      *puVar13 = puVar13;
                      local_8 = 0xffffffff;
                      puVar13[1] = puVar13;
                      local_310 = 0;
                      while (puVar3 != puVar13) {
                        puVar4 = (undefined4 *)*puVar3;
                        operator_delete(puVar3);
                        puVar3 = puVar4;
                      }
                      operator_delete(puVar13);
                      pfVar11 = local_304;
                    }
                    if (*(char *)((int)pfVar9 + 0xd) == '\0') {
                      pfVar2 = (float *)pfVar9[2];
                      if (*(char *)((int)pfVar2 + 0xd) == '\0') {
                        cVar7 = *(char *)((int)*pfVar2 + 0xd);
                        pfVar9 = pfVar2;
                        pfVar2 = (float *)*pfVar2;
                        while (cVar7 == '\0') {
                          cVar7 = *(char *)((int)*pfVar2 + 0xd);
                          pfVar9 = pfVar2;
                          pfVar2 = (float *)*pfVar2;
                        }
                      }
                      else {
                        cVar7 = *(char *)((int)pfVar9[1] + 0xd);
                        pfVar6 = (float *)pfVar9[1];
                        pfVar2 = pfVar9;
                        while ((pfVar9 = pfVar6, cVar7 == '\0' && (pfVar2 == (float *)pfVar9[2]))) {
                          cVar7 = *(char *)((int)pfVar9[1] + 0xd);
                          pfVar6 = (float *)pfVar9[1];
                          pfVar2 = pfVar9;
                        }
                      }
                    }
                  } while (pfVar9 != (float *)*pfVar11);
                }
                uVar8 = *(uint *)((int)local_2f8 + 0x1b0);
                uVar17 = *(uint *)((int)local_2f8 + 0x1b4);
                if ((((-1 < (int)uVar8) && (-1 < (int)uVar17)) && ((int)uVar8 < 0x10000)) &&
                   ((int)uVar17 < 0x10000)) {
                  iVar12 = (int)(uVar8 + ((int)uVar8 >> 0x1f & 0x3fU)) >> 6;
                  iVar19 = (int)(((int)uVar17 >> 0x1f & 0x3fU) + uVar17) >> 6;
                  if (((-1 < iVar12) && (-1 < iVar19)) &&
                     ((iVar12 < 0x400 &&
                      ((iVar19 < 0x400 &&
                       (iVar12 = *(int *)((int)local_2f4 + (iVar12 * 0x400 + iVar19) * 4 + 0xbc),
                       iVar12 != 0)))))) {
                    uVar8 = uVar8 & 0x8000003f;
                    if ((int)uVar8 < 0) {
                      uVar8 = (uVar8 - 1 | 0xffffffc0) + 1;
                    }
                    uVar17 = uVar17 & 0x8000003f;
                    if ((int)uVar17 < 0) {
                      uVar17 = (uVar17 - 1 | 0xffffffc0) + 1;
                    }
                    iVar12 = *(int *)(iVar12 + 0x10018 + (uVar8 * 0x40 + uVar17) * 4);
                    if (((iVar12 != 0) && (iVar19 = *(int *)((int)local_2f8 + 0x1b8), -1 < iVar19))
                       && (iVar19 < *(int *)(iVar12 + 0x1c) - *(int *)(iVar12 + 0x18) >> 2)) {
                      *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x18) + iVar19 * 4) + 0x38) =
                           1200000;
                      *(undefined4 *)
                       (*(int *)(*(int *)(iVar12 + 0x18) + *(int *)((int)local_2f8 + 0x1b8) * 4) +
                       0x3c) = *(undefined4 *)((int)local_2f4 + 0x800160);
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
        pfVar9 = *(float **)((int)pvVar16 + 0x13a4);
        local_2e8 = (float *)*pfVar9;
        while (local_2e8 != pfVar9) {
          if (((0.0 < local_2e8[6]) &&
              (FUN_00530600(local_304,(int *)&local_308,(uint *)(local_2e8 + 4)),
              local_308 != (float *)*local_304)) &&
             ((local_308[6] != 0.0 &&
              (pvVar16 = local_2f8, *(char *)((int)local_308[6] + 0x60) == '\0'))))
          goto LAB_004ced90;
          FUN_00407a50((int *)&local_2e8);
        }
      }
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004cfd50 @ 004cfd50  kind=gamemisc  attributed-by=none  size=6604 */

void __thiscall
FUN_004cfd50(void *this,float param_1,void *param_2,float param_3,char param_4,char param_5,
            float param_6,undefined4 param_7,float *param_8,undefined4 *param_9,undefined4 *param_10
            ,char param_11,int param_12,undefined4 param_13,char param_14)

{
  undefined4 *puVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  void *pvVar9;
  float10 fVar10;
  float fVar11;
  double dVar12;
  undefined1 auVar13 [16];
  float fVar14;
  undefined1 auStack_348 [4];
  undefined4 *local_344;
  undefined8 *local_340;
  float local_33c;
  void *local_338;
  float local_334;
  float local_330;
  float local_32c;
  undefined4 *local_328;
  float local_324;
  void *local_320;
  undefined4 *local_31c;
  int *local_318;
  int local_314;
  int *local_310;
  undefined4 local_30c;
  int *local_308;
  int local_304;
  undefined4 local_300;
  float fStack_2fc;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 local_2f0;
  undefined4 uStack_2ec;
  undefined4 local_2e8;
  undefined4 local_2e4;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  float local_2c0;
  float local_2bc;
  float local_2b8;
  undefined4 local_2b4;
  float local_2b0;
  undefined4 local_2ac;
  float local_2a8;
  float local_2a4;
  float local_2a0;
  float local_29c;
  float local_298;
  undefined4 local_294;
  undefined8 local_290;
  undefined4 local_288;
  undefined4 local_284;
  float local_280;
  char local_27c;
  int local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined4 local_264;
  undefined4 local_260;
  undefined4 local_25c;
  float local_258;
  float local_254;
  float local_250;
  char local_24c;
  undefined2 local_24b;
  float local_244;
  float local_240;
  undefined4 local_23c;
  float local_238;
  float local_234;
  float local_230;
  undefined4 local_22c;
  float local_228;
  undefined4 local_224;
  float local_220;
  float local_21c;
  float local_218;
  undefined4 local_214;
  undefined4 local_210;
  undefined4 local_20c;
  float local_208;
  float local_204;
  float local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  uint local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  float local_1c8;
  undefined1 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  undefined1 local_193;
  float local_18c;
  float local_188;
  float local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  float local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  float local_134;
  float local_130;
  float local_12c;
  uint local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  float local_118;
  undefined1 local_114;
  undefined4 local_110;
  undefined1 local_108 [24];
  float local_f0;
  float local_ec;
  float local_e8;
  undefined1 local_e3;
  undefined4 local_e0 [3];
  undefined4 local_d4;
  float local_d0;
  undefined4 local_cc;
  uint local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  float local_b8;
  undefined1 local_b4;
  undefined4 local_b0;
  undefined1 local_a8 [24];
  float local_90;
  float local_8c;
  float local_88;
  undefined1 local_83;
  undefined4 local_80 [3];
  undefined4 local_74;
  float local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  float local_58;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005549b1;
  local_14 = ExceptionList;
  local_1c = DAT_00583cc8 ^ (uint)auStack_348;
  uVar4 = DAT_00583cc8 ^ (uint)&stack0xfffffcb0;
  ExceptionList = &local_14;
  local_33c = param_1;
  local_338 = param_2;
  local_328 = param_9;
  local_31c = param_10;
  local_320 = this;
  if ((*(float *)((int)param_1 + 0x16c) <= 0.0) ||
     ((*(char *)((int)this + 0xb4) != '\0' && (param_1 == *(float *)((int)this + 0xb8)))))
  goto LAB_004d16f7;
  if (param_2 == (void *)0x0) {
    rand();
    *(undefined4 *)((int)param_1 + 0x1184) = 0x3f000000;
    local_334 = param_3;
  }
  else {
    cVar2 = *(char *)((int)param_2 + 0x68);
    if (((cVar2 == '[') || (cVar2 == 'J')) && ((*(byte *)((int)param_1 + 0x5c) & 1) == 0))
    goto LAB_004d16f7;
    if (cVar2 == '\x1c') {
      local_180 = *(undefined4 *)((int)param_1 + 0x10);
      local_17c = *(undefined4 *)((int)param_1 + 0x14);
      local_178 = *(undefined4 *)((int)param_1 + 0x18);
      local_174 = *(undefined4 *)((int)param_1 + 0x1c);
      local_170 = *(undefined4 *)((int)param_1 + 0x20);
      local_16c = *(undefined4 *)((int)param_1 + 0x24);
      local_140 = 0x40400000;
      iVar5 = rand();
      local_144 = 1;
      local_14c = ((float)iVar5 * 0.1) / 32767.0 + 0.1;
      local_168 = 0;
      local_164 = 0;
      local_160 = 0x41200000;
      local_148 = 8;
      local_15c = 0x3f19999a;
      local_158 = 0x3f19999a;
      local_154 = 0x3f800000;
      local_150 = 0x3f800000;
      FUN_00428540(param_9 + 4,&local_180);
    }
    if ((*(char *)((int)param_1 + 0x60) == '\x01') &&
       (((*(byte *)((int)param_1 + 0x124) & 0x80) != 0 ||
        ((*(byte *)((int)param_1 + 0x5c) & 0x20) != 0)))) {
      local_6c = 0x3f800000;
      FUN_00402550(local_80,(longlong *)((int)param_1 + 0x10));
      iVar5 = rand();
      local_70 = ((float)iVar5 * 0.3) / 32767.0 + 1.0;
      local_74 = 0x18;
      FUN_00428590(local_328 + 2,local_80);
      FUN_00422a90((int)&local_128);
      FUN_00402a40(local_108,(undefined4 *)((int)param_1 + 0x10));
      puVar1 = local_328;
      local_128 = *(uint *)((int)local_338 + 8);
      local_124 = *(undefined4 *)((int)local_338 + 0xc);
      local_120 = *(undefined4 *)((int)param_1 + 8);
      local_11c = *(undefined4 *)((int)param_1 + 0xc);
      local_118 = param_3;
      local_f0 = *param_8;
      local_ec = param_8[1];
      local_e8 = param_8[2];
      local_e3 = 3;
      local_114 = 0;
      local_110 = 0;
      FUN_00428400(local_328,&local_128);
      if (*(char *)((int)local_320 + 0xb4) == '\0') {
        FUN_004cea80(local_320,&local_128,puVar1,local_31c);
      }
      goto LAB_004d16f7;
    }
    if (((param_14 != '\0') && (cVar2 = FUN_0040f610((int)param_1), cVar2 != '\0')) &&
       (0.0 < *(float *)((int)param_1 + 0x174))) {
      fVar10 = FUN_004094a0((int)param_1);
      local_340 = (undefined8 *)(param_3 / (float)fVar10);
      fVar11 = *(float *)((int)param_1 + 0x174) + *(float *)((int)param_1 + 0x170);
      fVar14 = *(float *)((int)param_1 + 0x174) + *(float *)((int)param_1 + 0x144);
      *(float *)((int)param_1 + 0x170) = fVar11;
      *(float *)((int)param_1 + 0x144) = fVar14;
      if (1.0 < fVar11) {
        *(undefined4 *)((int)param_1 + 0x170) = 0x3f800000;
      }
      if (*(float *)((int)param_1 + 0x170) < fVar14) {
        *(float *)((int)param_1 + 0x144) = *(float *)((int)param_1 + 0x170);
      }
      FUN_00422a90((int)&local_c8);
      FUN_00402a40(local_a8,(undefined4 *)((int)param_1 + 0x10));
      local_c8 = *(uint *)((int)local_338 + 8);
      local_c4 = *(undefined4 *)((int)local_338 + 0xc);
      local_c0 = *(undefined4 *)((int)param_1 + 8);
      local_bc = *(undefined4 *)((int)param_1 + 0xc);
      local_b8 = param_3;
      local_90 = *param_8 * 0.5;
      local_8c = param_8[1] * 0.5;
      fVar11 = *(float *)((int)param_1 + 0x174) - (float)local_340;
      local_88 = param_8[2] * 0.5;
      local_83 = 1;
      local_b4 = 0;
      local_b0 = 0;
      *(float *)((int)param_1 + 0x174) = fVar11;
      if (fVar11 < -1.0) {
        *(undefined4 *)((int)param_1 + 0x174) = 0xbf800000;
      }
      FUN_00428400(param_9,&local_c8);
      local_cc = 0x3f800000;
      FUN_00402550(local_e0,(longlong *)((int)param_1 + 0x10));
      iVar5 = rand();
      local_d4 = 0x18;
      local_d0 = ((float)iVar5 * 0.3) / 32767.0 + 1.0;
      FUN_00428590(param_9 + 2,local_e0);
      if (*(char *)((int)local_320 + 0xb4) == '\0') {
        FUN_004cea80(local_320,&local_c8,param_9,local_31c);
      }
      goto LAB_004d16f7;
    }
    local_340 = (undefined8 *)0x0;
    for (puVar1 = (undefined4 *)**(undefined4 **)((int)param_1 + 0x1178);
        puVar1 != *(undefined4 **)((int)param_1 + 0x1178); puVar1 = (undefined4 *)*puVar1) {
      if (*(char *)(puVar1 + 2) == '\x06') {
        local_340 = (undefined8 *)((float)local_340 + (float)puVar1[3]);
      }
    }
    local_330 = (float)*(int *)((int)local_338 + 0x70);
    iVar5 = FUN_0040fcf0((int)local_338);
    if (local_330 / (float)iVar5 <= 1.0) {
      local_330 = (float)*(int *)((int)local_338 + 0x70);
      iVar5 = FUN_0040fcf0((int)local_338);
      local_32c = local_330 / (float)iVar5;
    }
    else {
      local_32c = 1.0;
    }
    local_32c = 1.0 - local_32c;
    local_330 = local_32c * (float)local_340;
    if (local_330 <= 0.0) {
      local_334 = param_3;
    }
    else {
      FUN_00422a90((int)&local_1d8);
      local_1b8 = *(undefined4 *)((int)param_1 + 0x10);
      local_1b4 = *(undefined4 *)((int)param_1 + 0x14);
      local_1b0 = *(undefined4 *)((int)param_1 + 0x18);
      local_1ac = *(undefined4 *)((int)param_1 + 0x1c);
      local_1a8 = *(undefined4 *)((int)param_1 + 0x20);
      local_1a4 = *(undefined4 *)((int)param_1 + 0x24);
      local_1d8 = *(uint *)((int)local_338 + 8);
      local_1d4 = *(undefined4 *)((int)local_338 + 0xc);
      local_1d0 = *(undefined4 *)((int)param_1 + 8);
      local_1cc = *(undefined4 *)((int)param_1 + 0xc);
      local_1c8 = param_3;
      local_1a0 = *param_8 * 0.5;
      local_19c = param_8[1] * 0.5;
      local_198 = param_8[2] * 0.5;
      local_193 = 5;
      local_1c4 = 0;
      local_1c0 = 0;
      local_134 = local_1a0;
      local_130 = local_19c;
      local_12c = local_198;
      FUN_00428400(param_9,&local_1d8);
      local_224 = 0x3f800000;
      local_238 = (float)*(longlong *)((int)param_1 + 0x10) * 1.5258789e-05;
      local_340 = (undefined8 *)(float)*(longlong *)((int)param_1 + 0x20);
      local_234 = (float)*(longlong *)((int)param_1 + 0x18) * 1.5258789e-05;
      local_230 = (float)local_340 * 1.5258789e-05;
      iVar5 = rand();
      local_22c = 0x5b;
      local_228 = ((float)iVar5 * 0.3) / 32767.0 + 1.0;
      FUN_00428590(param_9 + 2,&local_238);
      if (*(char *)((int)local_320 + 0xb4) == '\0') {
        FUN_004cea80(local_320,&local_1d8,param_9,local_31c);
      }
      local_334 = param_3 - local_330;
      if (local_334 <= 0.0) goto LAB_004d16f7;
    }
    if (param_11 == '\0') {
      fVar10 = FUN_00408300((int)param_1);
    }
    else {
      fVar10 = FUN_00411540((int)param_1);
    }
    pvVar9 = local_338;
    local_340 = (undefined8 *)(float)fVar10;
    local_334 = local_334 - local_32c * (float)local_340;
    if (local_334 < 0.0) {
      local_334 = 0.0;
    }
    local_324 = (float)*(int *)((int)local_338 + 0x70);
    iVar5 = FUN_0040fcf0((int)local_338);
    local_324 = local_324 / (float)iVar5;
    if (0.25 < local_324) {
      local_244 = *param_8;
      local_240 = param_8[1];
      fVar11 = local_240 * local_240 + local_244 * local_244 + param_8[2] * param_8[2];
      if (0.0 < fVar11) {
        dVar12 = (double)fVar11;
        libm_sse2_sqrt_precise();
        local_240 = (1.0 / (float)dVar12) * param_8[1];
        local_244 = *param_8 * (1.0 / (float)dVar12);
      }
      local_244 = local_244 * 4.0;
      local_240 = local_240 * 4.0;
      local_23c = 0x40a00000;
      FUN_00409270(pvVar9,&local_310);
      puVar1 = local_328;
      local_c = 0;
      piVar6 = (int *)*local_310;
      if (piVar6 != local_310) {
        local_340 = (undefined8 *)((int)param_1 + 0x10);
        do {
          FUN_004d2190(local_340,(undefined8 *)&local_244,local_324,param_5,piVar6[2],(int)puVar1);
          piVar6 = (int *)*piVar6;
          param_1 = local_33c;
        } while (piVar6 != local_310);
      }
      piVar6 = (int *)*local_310;
      *local_310 = (int)local_310;
      local_c = 0xffffffff;
      local_310[1] = (int)local_310;
      local_30c = 0;
      if (piVar6 != local_310) {
        do {
          piVar8 = (int *)*piVar6;
          operator_delete(piVar6);
          piVar6 = piVar8;
        } while (piVar8 != local_310);
      }
      operator_delete(local_310);
      pvVar9 = local_338;
    }
    if ((param_5 != '\0') && (0.0 < local_324)) {
      FUN_00409270(pvVar9,&local_318);
      local_c = 1;
      piVar6 = local_318;
      if (local_314 != 0) {
        piVar8 = (int *)*local_318;
        local_33c = 0.0;
        local_330 = 0.1 / (float)((double)local_314 +
                                 *(double *)(&DAT_0055ac20 + (local_314 >> 0x1f) * -8));
        if (piVar8 != local_318) {
          do {
            iVar5 = piVar8[2];
            local_340 = (undefined8 *)0x0;
            if (0 < *(int *)(iVar5 + 0x114)) {
              local_32c = 3.36312e-44;
              do {
                switch(*(undefined1 *)(iVar5 + -1 + (int)local_32c)) {
                case 0x80:
                  fVar10 = FUN_00407d60((float)*(int *)((int)local_32c + piVar8[2]));
                  local_344 = (undefined4 *)(float)fVar10;
                  local_334 = (float)local_344 * local_330 * local_324 + local_334;
                  break;
                case 0x81:
                  fVar10 = FUN_00407d60((float)*(int *)((int)local_32c + piVar8[2]));
                  local_344 = (undefined4 *)(float)fVar10;
                  fVar11 = (float)local_344 * local_330 * local_324;
                  local_334 = fVar11 * 0.5 + local_334;
                  local_33c = fVar11 * 2.0 + local_33c;
                  break;
                case 0x82:
                  fVar10 = FUN_00407d60((float)*(int *)((int)local_32c + piVar8[2]));
                  local_344 = (undefined4 *)(float)fVar10;
                  local_334 = (float)local_344 * local_330 * 0.25 * local_324 + local_334;
                  *(int *)((int)param_1 + 0x134) =
                       (int)(local_324 * 500.0 + (float)*(int *)((int)param_1 + 0x134));
                  break;
                case 0x83:
                  fVar10 = FUN_00407d60((float)*(int *)((int)local_32c + piVar8[2]));
                  local_344 = (undefined4 *)(float)fVar10;
                  local_334 = (float)local_344 * local_330 * 0.25 * local_324 + local_334;
                  *(int *)((int)local_338 + 0x138) =
                       (int)(local_324 * 500.0 + (float)*(int *)((int)local_338 + 0x138));
                }
                local_340 = (undefined8 *)((int)local_340 + 1);
                iVar5 = piVar8[2];
                local_32c = (float)((int)local_32c + 8);
                piVar6 = local_318;
              } while ((int)local_340 < *(int *)(iVar5 + 0x114));
            }
            piVar8 = (int *)*piVar8;
          } while (piVar8 != piVar6);
        }
        pvVar9 = local_338;
        if (5000 < *(int *)((int)param_1 + 0x134)) {
          *(undefined4 *)((int)param_1 + 0x134) = 5000;
        }
        if (5000 < *(int *)((int)local_338 + 0x138)) {
          *(undefined4 *)((int)local_338 + 0x138) = 5000;
        }
        if (0.0 < local_33c) {
          FUN_00422a90((int)&local_68);
          puVar1 = local_328;
          local_48 = *(undefined4 *)((int)pvVar9 + 0x10);
          local_64 = *(undefined4 *)((int)pvVar9 + 0xc);
          local_58 = -local_33c;
          local_44 = *(undefined4 *)((int)pvVar9 + 0x14);
          local_40 = *(undefined4 *)((int)pvVar9 + 0x18);
          local_3c = *(undefined4 *)((int)pvVar9 + 0x1c);
          local_38 = *(undefined4 *)((int)pvVar9 + 0x20);
          local_34 = *(undefined4 *)((int)pvVar9 + 0x24);
          local_68 = *(undefined4 *)((int)pvVar9 + 8);
          local_344 = (undefined4 *)*local_328;
          local_60 = local_68;
          local_5c = local_64;
          iVar7 = FUN_004202b0(local_344,(undefined4 *)local_344[1],&local_68);
          iVar5 = puVar1[1];
          if (iVar5 == 0x3333332) {
                    /* WARNING: Subroutine does not return */
            std::_Xlength_error("list<T> too long");
          }
          puVar1[1] = iVar5 + 1;
          local_344[1] = iVar7;
          **(int **)(iVar7 + 4) = iVar7;
          *(float *)((int)local_338 + 0x16c) = *(float *)((int)local_338 + 0x16c) + local_33c;
          piVar6 = local_318;
        }
      }
      piVar8 = (int *)*piVar6;
      *piVar6 = (int)piVar6;
      local_c = 0xffffffff;
      local_318[1] = (int)local_318;
      local_314 = 0;
      if (piVar8 != local_318) {
        do {
          piVar6 = (int *)*piVar8;
          operator_delete(piVar8);
          piVar8 = piVar6;
        } while (piVar6 != local_318);
      }
      operator_delete(local_318);
    }
    param_9 = local_328;
    pvVar9 = local_338;
    if (*(char *)((int)local_338 + 0x68) == '\x1c') {
      if (*(float *)((int)param_1 + 0x1184) <= 0.3 && *(float *)((int)param_1 + 0x1184) != 0.3) {
        *(undefined4 *)((int)param_1 + 0x1184) = 0x3e99999a;
      }
    }
    else {
      if (param_14 == '\0') goto LAB_004d0e7e;
      *(undefined4 *)((int)param_1 + 0x1184) = 0x3f800000;
    }
    if (param_14 != '\0') {
      if (param_11 == '\0') {
        if (param_12 != 0x1c) {
          local_294 = 0x3f800000;
          local_2a8 = (float)*(longlong *)((int)param_1 + 0x10) * 1.5258789e-05;
          local_344 = (undefined4 *)(float)*(longlong *)((int)param_1 + 0x20);
          local_2a4 = (float)*(longlong *)((int)param_1 + 0x18) * 1.5258789e-05;
          local_2a0 = (float)local_344 * 1.5258789e-05;
          FUN_00409270(local_338,&local_308);
          local_340 = (undefined8 *)0xffffffff;
          local_c = 2;
          if (local_304 != 0) {
            local_340 = (undefined8 *)(uint)*(byte *)(*(int *)(*local_308 + 8) + 1);
          }
          if (*(char *)((int)pvVar9 + 0x68) == 'D') {
            local_340 = (undefined8 *)0x11;
          }
          iVar5 = rand();
          local_298 = ((float)iVar5 * 0.2) / 32767.0 + 0.9;
          if (param_4 == '\0') {
            switch(local_340) {
            case (undefined8 *)0x0:
            case (undefined8 *)0x1:
              local_298 = local_298 + 0.1;
            case (undefined8 *)0xf:
            case (undefined8 *)0x10:
              local_33c = 1.4013e-45;
              break;
            default:
              local_33c = 7.00649e-45;
              break;
            case (undefined8 *)0x3:
            case (undefined8 *)0x4:
              local_33c = 9.80909e-45;
              break;
            case (undefined8 *)0x5:
              local_33c = 4.2039e-45;
              break;
            case (undefined8 *)0x6:
            case (undefined8 *)0x7:
            case (undefined8 *)0x8:
              local_33c = 1.26117e-44;
            }
          }
          else {
            switch(local_340) {
            case (undefined8 *)0x0:
            case (undefined8 *)0x1:
              local_298 = local_298 + 0.1;
            case (undefined8 *)0xf:
            case (undefined8 *)0x10:
              local_33c = 2.8026e-45;
              break;
            default:
              local_33c = 8.40779e-45;
              break;
            case (undefined8 *)0x3:
            case (undefined8 *)0x4:
              local_33c = 1.12104e-44;
              break;
            case (undefined8 *)0x5:
              local_33c = 5.60519e-45;
              break;
            case (undefined8 *)0x6:
            case (undefined8 *)0x7:
            case (undefined8 *)0x8:
              local_33c = 1.4013e-44;
            }
          }
          FUN_0040f2b0((int)pvVar9);
          param_9 = local_328;
          if (*(char *)((int)pvVar9 + 0x68) == '6') {
            local_29c = 1.54143e-44;
          }
          else {
            local_29c = local_33c;
            if (*(char *)((int)pvVar9 + 0x68) == '\n') {
              local_29c = 7.00649e-45;
            }
          }
          FUN_00428590(local_328 + 2,&local_2a8);
          local_c = 0xffffffff;
          FUN_00423710((int *)&local_308);
        }
      }
      else if (*(char *)((int)local_338 + 0x141) == '\x01') {
        local_1f4 = 0x3f800000;
        local_208 = (float)*(longlong *)((int)param_1 + 0x10) * 1.5258789e-05;
        local_344 = (undefined4 *)(float)*(longlong *)((int)param_1 + 0x20);
        local_204 = (float)*(longlong *)((int)param_1 + 0x18) * 1.5258789e-05;
        local_1f8 = 0x3f800000;
        local_200 = (float)local_344 * 1.5258789e-05;
        local_1fc = 0x2a;
        FUN_00428590(local_328 + 2,&local_208);
      }
      else {
        local_1dc = 0x3f800000;
        local_1f0 = (float)*(longlong *)((int)param_1 + 0x10) * 1.5258789e-05;
        local_344 = (undefined4 *)(float)*(longlong *)((int)param_1 + 0x20);
        local_1ec = (float)*(longlong *)((int)param_1 + 0x18) * 1.5258789e-05;
        local_1e0 = 0x3fc00000;
        local_1e8 = (float)local_344 * 1.5258789e-05;
        local_1e4 = 0x27;
        FUN_00428590(local_328 + 2,&local_1f0);
      }
    }
  }
LAB_004d0e7e:
  local_340 = (undefined8 *)
              (*(float *)((int)param_1 + 0x34) * *(float *)((int)param_1 + 0x34) +
               *(float *)((int)param_1 + 0x38) * *(float *)((int)param_1 + 0x38) +
              *(float *)((int)param_1 + 0x3c) * *(float *)((int)param_1 + 0x3c));
  fVar11 = *param_8 * *param_8 + param_8[1] * param_8[1] + param_8[2] * param_8[2];
  if ((float)local_340 < fVar11) {
    local_340 = (undefined8 *)fVar11;
  }
  if ((float)local_340 <
      *(float *)((int)param_1 + 0x34) * *(float *)((int)param_1 + 0x34) +
      *(float *)((int)param_1 + 0x38) * *(float *)((int)param_1 + 0x38) +
      *(float *)((int)param_1 + 0x3c) * *(float *)((int)param_1 + 0x3c)) {
    dVar12 = (double)(*(float *)((int)param_1 + 0x38) * *(float *)((int)param_1 + 0x38) +
                      *(float *)((int)param_1 + 0x34) * *(float *)((int)param_1 + 0x34) +
                     *(float *)((int)param_1 + 0x3c) * *(float *)((int)param_1 + 0x3c));
    libm_sse2_sqrt_precise(uVar4);
    local_32c = 1.0 / (float)dVar12;
    local_344 = (undefined4 *)(local_32c * *(float *)((int)param_1 + 0x34));
    local_330 = local_32c * *(float *)((int)param_1 + 0x38);
    local_32c = local_32c * *(float *)((int)param_1 + 0x3c);
    dVar12 = (double)(float)local_340;
    libm_sse2_sqrt_precise();
    local_184 = (float)dVar12;
    local_18c = local_184 * (float)local_344;
    local_188 = local_184 * local_330;
    local_184 = local_184 * local_32c;
    *(float *)((int)param_1 + 0x34) = local_18c;
    *(float *)((int)param_1 + 0x38) = local_188;
    *(float *)((int)param_1 + 0x3c) = local_184;
  }
  local_270 = *(undefined4 *)((int)param_1 + 0x10);
  local_26c = *(undefined4 *)((int)param_1 + 0x14);
  local_268 = *(undefined4 *)((int)param_1 + 0x18);
  local_264 = *(undefined4 *)((int)param_1 + 0x1c);
  local_260 = *(undefined4 *)((int)param_1 + 0x20);
  local_25c = *(undefined4 *)((int)param_1 + 0x24);
  local_274 = 0;
  local_24b = 0;
  if (local_338 == (void *)0x0) {
    local_290 = 0;
  }
  else {
    local_290 = *(undefined8 *)((int)local_338 + 8);
  }
  for (puVar1 = (undefined4 *)**(undefined4 **)((int)param_1 + 0x1178);
      puVar1 != *(undefined4 **)((int)param_1 + 0x1178); puVar1 = (undefined4 *)*puVar1) {
    if (*(char *)(puVar1 + 2) == '\x01') {
      local_334 = (float)puVar1[3] * local_334;
    }
  }
  local_288 = *(undefined4 *)((int)param_1 + 8);
  local_284 = *(undefined4 *)((int)param_1 + 0xc);
  local_27c = param_4;
  local_258 = *param_8;
  local_254 = param_8[1];
  local_250 = param_8[2];
  local_278 = 0;
  local_24c = param_5;
  local_280 = local_334;
  if (param_12 == 0x11) {
    local_2f0 = *(undefined4 *)((int)local_338 + 8);
    fStack_2fc = local_334 * 0.1;
    uStack_2ec = *(undefined4 *)((int)local_338 + 0xc);
    local_344 = *(undefined4 **)((int)param_1 + 0x1178);
    local_2f8 = 3000;
    local_300 = CONCAT31(local_300._1_3_,4);
    iVar5 = FUN_004203c0(local_344,(undefined4 *)local_344[1],(undefined8 *)&local_300);
    if (*(int *)((int)param_1 + 0x117c) == 0x7fffffe) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("list<T> too long");
    }
    local_2d8 = CONCAT44(fStack_2fc,local_300);
    *(int *)((int)param_1 + 0x117c) = *(int *)((int)param_1 + 0x117c) + 1;
    local_2d0 = CONCAT44(uStack_2f4,local_2f8);
    local_344[1] = iVar5;
    local_2c8 = CONCAT44(uStack_2ec,local_2f0);
    **(int **)(iVar5 + 4) = iVar5;
    local_2e8 = *(undefined4 *)((int)local_338 + 8);
    local_2e4 = *(undefined4 *)((int)local_338 + 0xc);
    local_344 = (undefined4 *)param_9[0x16];
    local_2e0 = *(undefined4 *)((int)param_1 + 8);
    local_2dc = *(undefined4 *)((int)param_1 + 0xc);
    iVar5 = FUN_00420080(local_344,(undefined4 *)local_344[1],(undefined8 *)&local_2e8);
    if (param_9[0x17] == 0x5555554) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("list<T> too long");
    }
    param_9[0x17] = param_9[0x17] + 1;
    local_344[1] = iVar5;
    **(int **)(iVar5 + 4) = iVar5;
  }
  if ((param_4 != '\0') && (*(char *)((int)param_1 + 0x60) != '\x06')) {
    local_2ac = 0x3f800000;
    local_2c0 = (float)*(longlong *)((int)param_1 + 0x10) * 1.5258789e-05;
    local_344 = (undefined4 *)(float)*(longlong *)((int)param_1 + 0x20);
    local_2bc = (float)*(longlong *)((int)param_1 + 0x18) * 1.5258789e-05;
    local_2b8 = (float)local_344 * 1.5258789e-05;
    iVar5 = rand();
    local_2b0 = ((float)iVar5 * 0.1) / 32767.0 + 1.0;
    switch(*(undefined4 *)((int)param_1 + 100)) {
    case 0:
      local_2b4 = 0x3c;
      break;
    case 1:
      local_2b4 = 0x3d;
      break;
    case 2:
    case 0x2b:
      local_2b4 = 0x3e;
      break;
    case 3:
    case 0x2d:
      local_2b4 = 0x3f;
      break;
    case 4:
      local_2b4 = 0x40;
      break;
    case 5:
      local_2b4 = 0x41;
      break;
    default:
      goto switchD_004d12bd_caseD_6;
    case 7:
      local_2b4 = 0x42;
      break;
    case 8:
      local_2b4 = 0x43;
      break;
    case 9:
      local_2b4 = 0x44;
      break;
    case 10:
      local_2b4 = 0x45;
      break;
    case 0xb:
      local_2b4 = 0x46;
      break;
    case 0xc:
      local_2b4 = 0x47;
      break;
    case 0xd:
      local_2b4 = 0x4a;
      break;
    case 0xe:
      local_2b4 = 0x4b;
      break;
    case 0xf:
      local_2b4 = 0x48;
      break;
    case 0x10:
      local_2b4 = 0x49;
      break;
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
      local_2b4 = 0x4f;
      break;
    case 0x2e:
    case 0x6c:
    case 0x6d:
    case 0x72:
    case 0x73:
      local_2b4 = 0x4d;
      break;
    case 0x30:
    case 0x33:
    case 0x57:
      local_2b4 = 0x4e;
      break;
    case 0x60:
      local_2b4 = 0x50;
      break;
    case 0x77:
      local_2b4 = 0x4c;
    }
    FUN_00428590(param_9 + 2,&local_2c0);
  }
switchD_004d12bd_caseD_6:
  if (local_338 != (void *)0x0) {
    if ((*(int *)((int)param_1 + 300) < -3000) && (*(char *)((int)param_1 + 0x60) != '\x06')) {
      cVar2 = *(char *)((int)local_338 + 0x68);
      if ((cVar2 == ':') ||
         ((((cVar2 == '\f' || (cVar2 == 'D')) || (cVar2 == ']')) || (cVar2 == 'E')))) {
        param_6 = 1.0;
      }
      iVar5 = FUN_0040f650((int)param_1);
      if ((char)iVar5 != '\0') {
        param_6 = param_6 * 0.15;
      }
      iVar5 = FUN_0040f650((int)local_338);
      if (((char)iVar5 == '\0') && (*(char *)((int)local_338 + 0x60) != '\0')) {
        param_6 = param_6 * 0.1;
      }
      if ((*(char *)((int)local_338 + 0x68) == '[') || (*(char *)((int)local_338 + 0x68) == 'J')) {
        param_6 = 1.0;
      }
      if (*(char *)((int)param_1 + 0x68) == 'T') {
        param_6 = 1.0;
      }
      fVar10 = FUN_00407d60((float)*(int *)((int)local_338 + 400));
      local_344 = (undefined4 *)(float)fVar10;
      fVar10 = FUN_00407d60((float)*(int *)((int)param_1 + 400));
      local_340 = (undefined8 *)(float)fVar10;
      auVar13 = ZEXT816(0x4000000000000000);
      libm_sse2_pow_precise();
      fVar11 = (float)auVar13._0_8_ * param_6;
      if (1.0 < fVar11) {
        fVar11 = 1.0;
      }
      local_340 = (undefined8 *)(fVar11 * 0.9);
      for (puVar1 = (undefined4 *)**(undefined4 **)((int)param_1 + 0x1178);
          puVar1 != *(undefined4 **)((int)param_1 + 0x1178); puVar1 = (undefined4 *)*puVar1) {
        if (*(char *)(puVar1 + 2) == '\x01') {
          local_340 = (undefined8 *)0x0;
        }
      }
      iVar5 = rand();
      if ((float)iVar5 / 32767.0 < (float)local_340) {
        local_278 = FUN_0040ffe0((int)param_1);
        local_20c = 0x3f800000;
        local_250 = 10.0;
        local_220 = (float)*(longlong *)((int)param_1 + 0x10) * 1.5258789e-05;
        local_21c = (float)*(longlong *)((int)param_1 + 0x18) * 1.5258789e-05;
        local_344 = (undefined4 *)param_9[2];
        local_218 = (float)*(longlong *)((int)param_1 + 0x20) * 1.5258789e-05;
        local_210 = 0x3f800000;
        local_214 = 0x17;
        iVar5 = FUN_004f3ba0(local_344,(undefined4 *)local_344[1],&local_220);
        if (param_9[3] == 0x7fffffe) {
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("list<T> too long");
        }
        param_9[3] = param_9[3] + 1;
        local_344[1] = iVar5;
        **(int **)(iVar5 + 4) = iVar5;
      }
    }
    uVar3 = local_24b._1_1_;
    if (*(char *)((int)local_338 + 0x68) == '\x1c') {
      uVar3 = 1;
    }
    local_24b = CONCAT11(uVar3,(undefined1)local_24b);
  }
  puVar1 = (undefined4 *)*param_9;
  iVar5 = FUN_004202b0(puVar1,(undefined4 *)puVar1[1],(undefined4 *)&local_290);
  if (param_9[1] == 0x3333332) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  param_9[1] = param_9[1] + 1;
  puVar1[1] = iVar5;
  **(int **)(iVar5 + 4) = iVar5;
  if (*(char *)((int)local_320 + 0xb4) == '\0') {
    FUN_004cea80(local_320,(uint *)&local_290,param_9,local_31c);
  }
LAB_004d16f7:
  ExceptionList = local_14;
  __security_check_cookie(local_1c ^ (uint)auStack_348);
  return;
}


/* FUN_004d1860 @ 004d1860  kind=gamemisc  attributed-by=none  size=82 */

undefined4 __thiscall FUN_004d1860(void *this,undefined4 *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  bool bVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  puVar2 = *(undefined4 **)((int)this + 0x800154);
  cVar1 = *(char *)((int)puVar2[1] + 0xd);
  puVar4 = puVar2;
  puVar6 = (undefined4 *)puVar2[1];
  while (cVar1 == '\0') {
    if ((int)puVar6[4] < (int)param_1) {
      puVar5 = (undefined4 *)puVar6[2];
      puVar6 = puVar4;
    }
    else {
      puVar5 = (undefined4 *)*puVar6;
    }
    puVar4 = puVar6;
    puVar6 = puVar5;
    cVar1 = *(char *)((int)puVar5 + 0xd);
  }
  if ((puVar4 == puVar2) || (bVar3 = (int)param_1 < (int)puVar4[4], param_1 = puVar4, bVar3)) {
    param_1 = puVar2;
  }
  if (param_1 != puVar2) {
    return param_1[5];
  }
  return 0;
}


/* FUN_004d18c0 @ 004d18c0  kind=gamemisc  attributed-by=none  size=143 */

int FUN_004d18c0(int param_1,int param_2)

{
  char cVar1;
  undefined4 in_EAX;
  uint3 uVar4;
  uint uVar2;
  uint uVar3;
  
  uVar4 = (uint3)((uint)in_EAX >> 8);
  if (param_1 == param_2) {
    return (uint)uVar4 << 8;
  }
  cVar1 = *(char *)(param_1 + 0x60);
  uVar3 = CONCAT31(uVar4,cVar1);
  if ((cVar1 == '\x06') || (*(char *)(param_2 + 0x60) == '\x06')) {
    return CONCAT31(uVar4,1);
  }
  if (cVar1 == '\x01') {
    if (*(char *)(param_2 + 0x60) != '\x01') goto LAB_004d193e;
    uVar2 = FUN_0040f710(param_1);
    uVar3 = FUN_0040f710(param_2);
    if ((char)uVar3 != (char)uVar2) goto LAB_004d193e;
  }
  if (*(char *)(param_2 + 0x60) == '\x01') {
    if (*(char *)(param_1 + 0x60) != '\x01') goto LAB_004d193e;
    uVar2 = FUN_0040f710(param_1);
    uVar3 = FUN_0040f710(param_2);
    if ((char)uVar2 != (char)uVar3) goto LAB_004d193e;
  }
  if (((*(byte *)(param_1 + 0x124) & 0x20) == 0) && ((*(byte *)(param_2 + 0x124) & 0x20) == 0)) {
    return uVar3 & 0xffffff00;
  }
LAB_004d193e:
  return CONCAT31((int3)(uVar3 >> 8),1);
}


/* FUN_004d1a70 @ 004d1a70  kind=gamemisc  attributed-by=none  size=1805 */

/* WARNING: Removing unreachable block (ram,0x004d1fdd) */

void __thiscall
FUN_004d1a70(void *this,uint param_1,uint param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  void *pvVar4;
  ushort *puVar5;
  uint uVar6;
  undefined *puVar7;
  void *pvVar8;
  undefined *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  byte bVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int local_1c;
  int local_18;
  ushort local_c;
  undefined2 local_8;
  
  uVar16 = param_1 - param_5;
  iVar12 = param_3 + param_5;
  if ((int)uVar16 < iVar12) {
    uVar14 = uVar16;
    do {
      uVar6 = param_2 - param_5;
      if ((int)(param_2 - param_5) < param_4 + param_5) {
        do {
          pvVar4 = (void *)FUN_00406100(this,uVar14,uVar6,param_6);
          if (pvVar4 != (void *)0x0) {
            iVar17 = *(int *)((int)pvVar4 + 0x1c);
            bVar3 = true;
            while (iVar17 = iVar17 + -1, -1 < iVar17) {
              puVar5 = (ushort *)FUN_004d23f0(pvVar4,iVar17);
              if (((*(byte *)((int)puVar5 + 3) & 0x1f) == 0) ||
                 ((*(byte *)((int)puVar5 + 3) & 0x1f) == 2)) {
                if (bVar3) {
                  local_8 = CONCAT11(0xff,(byte)*puVar5);
                  bVar13 = 0xff;
                }
                else {
                  local_c = (ushort)(byte)*puVar5;
                  bVar13 = 0;
                  local_8 = local_c;
                }
                *puVar5 = local_8;
                *(byte *)(puVar5 + 1) = bVar13;
              }
              else {
                bVar3 = false;
              }
            }
          }
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < param_4 + param_5);
      }
      uVar14 = uVar14 + 1;
    } while ((int)uVar14 < iVar12);
  }
  local_1c = 0;
  do {
    if ((int)uVar16 < iVar12) {
      uVar14 = uVar16;
      do {
        uVar6 = param_2 - param_5;
        if ((int)(param_2 - param_5) < param_4 + param_5) {
          do {
            pvVar4 = (void *)FUN_00406100(this,uVar14,uVar6,param_6);
            if ((pvVar4 != (void *)0x0) && (local_18 = 0, 0 < *(int *)((int)pvVar4 + 0x1c))) {
              do {
                puVar7 = FUN_004d23f0(pvVar4,local_18);
                if ((((puVar7[3] & 0x1f) == 0) || ((puVar7[3] & 0x1f) == 2)) && (puVar7[2] != -1)) {
                  iVar17 = *(int *)((int)pvVar4 + 0x10) + local_18;
                  uVar15 = 0;
                  pvVar8 = (void *)FUN_00406100(this,uVar14 - 1,uVar6,param_6);
                  if (pvVar8 == (void *)0x0) {
                    puVar9 = &DAT_00584248;
                  }
                  else {
                    iVar1 = *(int *)((int)pvVar8 + 0x10);
                    if (iVar17 < iVar1) {
                      puVar9 = &DAT_00584248;
                    }
                    else if (iVar17 < *(int *)((int)pvVar8 + 0x1c) + iVar1) {
                      puVar9 = FUN_00405f20(pvVar8,iVar17 - iVar1);
                      if ((((puVar9[3] & 0x1f) == 0) && (iVar17 < 1)) && ((puVar9[3] & 0x40) == 0))
                      {
                        puVar9 = &DAT_00584240;
                      }
                    }
                    else {
                      puVar9 = &DAT_00584240;
                      if (0 < iVar17) {
                        puVar9 = &DAT_00584244;
                      }
                    }
                  }
                  bVar13 = puVar9[3] & 0x1f;
                  if (bVar13 == 0xd) {
                    uVar10 = 0xff;
LAB_004d1c86:
                    uVar15 = uVar10;
                    if (uVar10 < 0xff) goto LAB_004d1c93;
                  }
                  else {
                    if (((puVar9[3] & 0x1f) == 0) || (bVar13 == 2)) {
                      if ((byte)puVar9[2] < 5) {
                        uVar10 = 5;
                      }
                      else {
                        uVar10 = (uint)(byte)puVar9[2];
                        if (uVar10 == 0) goto LAB_004d1c93;
                      }
                      goto LAB_004d1c86;
                    }
LAB_004d1c93:
                    pvVar8 = (void *)FUN_00406100(this,uVar14 + 1,uVar6,param_6);
                    if (pvVar8 == (void *)0x0) {
                      puVar9 = &DAT_00584248;
                    }
                    else {
                      iVar1 = *(int *)((int)pvVar8 + 0x10);
                      if (iVar17 < iVar1) {
                        puVar9 = &DAT_00584248;
                      }
                      else if (iVar17 < *(int *)((int)pvVar8 + 0x1c) + iVar1) {
                        puVar9 = FUN_00405f20(pvVar8,iVar17 - iVar1);
                        if ((((puVar9[3] & 0x1f) == 0) && (iVar17 < 1)) && ((puVar9[3] & 0x40) == 0)
                           ) {
                          puVar9 = &DAT_00584240;
                        }
                      }
                      else {
                        puVar9 = &DAT_00584240;
                        if (0 < iVar17) {
                          puVar9 = &DAT_00584244;
                        }
                      }
                    }
                    bVar13 = puVar9[3] & 0x1f;
                    if (bVar13 == 0xd) {
                      uVar11 = 0xff;
                    }
                    else if (((puVar9[3] & 0x1f) == 0) || (bVar13 == 2)) {
                      if ((byte)puVar9[2] < 5) {
                        uVar11 = 5;
                      }
                      else {
                        uVar11 = (uint)(byte)puVar9[2];
                      }
                    }
                    else {
                      uVar11 = 0;
                    }
                    uVar10 = uVar15;
                    if (uVar15 < uVar11) {
                      uVar10 = uVar11;
                    }
                    if (uVar10 < 0xff) {
                      pvVar8 = (void *)FUN_00406100(this,uVar14,uVar6 - 1,param_6);
                      if (pvVar8 == (void *)0x0) {
                        puVar9 = &DAT_00584248;
                      }
                      else {
                        iVar1 = *(int *)((int)pvVar8 + 0x10);
                        if (iVar17 < iVar1) {
                          puVar9 = &DAT_00584248;
                        }
                        else if (iVar17 < *(int *)((int)pvVar8 + 0x1c) + iVar1) {
                          puVar9 = FUN_00405f20(pvVar8,iVar17 - iVar1);
                          if ((((puVar9[3] & 0x1f) == 0) && (iVar17 < 1)) &&
                             ((puVar9[3] & 0x40) == 0)) {
                            puVar9 = &DAT_00584240;
                          }
                        }
                        else {
                          puVar9 = &DAT_00584240;
                          if (0 < iVar17) {
                            puVar9 = &DAT_00584244;
                          }
                        }
                      }
                      bVar13 = puVar9[3] & 0x1f;
                      if (bVar13 == 0xd) {
                        uVar15 = 0xff;
                      }
                      else if (((puVar9[3] & 0x1f) == 0) || (bVar13 == 2)) {
                        if ((byte)puVar9[2] < 5) {
                          uVar15 = 5;
                        }
                        else {
                          uVar15 = (uint)(byte)puVar9[2];
                        }
                      }
                      else {
                        uVar15 = 0;
                      }
                      if (uVar10 < uVar15) {
                        uVar10 = uVar15;
                      }
                      if (uVar10 < 0xff) {
                        pvVar8 = (void *)FUN_00406100(this,uVar14,uVar6 + 1,param_6);
                        if (pvVar8 == (void *)0x0) {
                          puVar9 = &DAT_00584248;
                        }
                        else {
                          iVar1 = *(int *)((int)pvVar8 + 0x10);
                          if (iVar17 < iVar1) {
                            puVar9 = &DAT_00584248;
                          }
                          else if (iVar17 < *(int *)((int)pvVar8 + 0x1c) + iVar1) {
                            puVar9 = FUN_00405f20(pvVar8,iVar17 - iVar1);
                            if ((((puVar9[3] & 0x1f) == 0) && (iVar17 < 1)) &&
                               ((puVar9[3] & 0x40) == 0)) {
                              puVar9 = &DAT_00584240;
                            }
                          }
                          else {
                            puVar9 = &DAT_00584240;
                            if (0 < iVar17) {
                              puVar9 = &DAT_00584244;
                            }
                          }
                        }
                        bVar13 = puVar9[3] & 0x1f;
                        if (bVar13 == 0xd) {
                          uVar15 = 0xff;
                        }
                        else if (((puVar9[3] & 0x1f) == 0) || (bVar13 == 2)) {
                          if ((byte)puVar9[2] < 5) {
                            uVar15 = 5;
                          }
                          else {
                            uVar15 = (uint)(byte)puVar9[2];
                          }
                        }
                        else {
                          uVar15 = 0;
                        }
                        if (uVar10 < uVar15) {
                          uVar10 = uVar15;
                        }
                        if (uVar10 < 0xff) {
                          iVar1 = iVar17 + -1;
                          pvVar8 = (void *)FUN_00406100(this,uVar14,uVar6,param_6);
                          if (pvVar8 == (void *)0x0) {
                            puVar9 = &DAT_00584248;
                          }
                          else {
                            iVar2 = *(int *)((int)pvVar8 + 0x10);
                            if (iVar1 < iVar2) {
                              puVar9 = &DAT_00584248;
                            }
                            else if (iVar1 < *(int *)((int)pvVar8 + 0x1c) + iVar2) {
                              puVar9 = FUN_00405f20(pvVar8,iVar1 - iVar2);
                              if ((((puVar9[3] & 0x1f) == 0) && (iVar1 < 1)) &&
                                 ((puVar9[3] & 0x40) == 0)) {
                                puVar9 = &DAT_00584240;
                              }
                            }
                            else {
                              puVar9 = &DAT_00584240;
                              if (0 < iVar1) {
                                puVar9 = &DAT_00584244;
                              }
                            }
                          }
                          bVar13 = puVar9[3] & 0x1f;
                          if (bVar13 == 0xd) {
                            uVar15 = 0xff;
                          }
                          else if (((puVar9[3] & 0x1f) == 0) || (bVar13 == 2)) {
                            if ((byte)puVar9[2] < 5) {
                              uVar15 = 5;
                            }
                            else {
                              uVar15 = (uint)(byte)puVar9[2];
                            }
                          }
                          else {
                            uVar15 = 0;
                          }
                          if (uVar10 < uVar15) {
                            uVar10 = uVar15;
                          }
                          if (uVar10 < 0xff) {
                            iVar17 = iVar17 + 1;
                            pvVar8 = (void *)FUN_00406100(this,uVar14,uVar6,param_6);
                            if (pvVar8 == (void *)0x0) {
                              puVar9 = &DAT_00584248;
                            }
                            else {
                              iVar1 = *(int *)((int)pvVar8 + 0x10);
                              if (iVar17 < iVar1) {
                                puVar9 = &DAT_00584248;
                              }
                              else if (iVar17 < *(int *)((int)pvVar8 + 0x1c) + iVar1) {
                                puVar9 = FUN_00405f20(pvVar8,iVar17 - iVar1);
                                if ((((puVar9[3] & 0x1f) == 0) && (iVar17 < 1)) &&
                                   ((puVar9[3] & 0x40) == 0)) {
                                  puVar9 = &DAT_00584240;
                                }
                              }
                              else {
                                puVar9 = &DAT_00584240;
                                if (0 < iVar17) {
                                  puVar9 = &DAT_00584244;
                                }
                              }
                            }
                            bVar13 = puVar9[3] & 0x1f;
                            if (bVar13 == 0xd) {
                              if (uVar10 < 0xff) {
                                uVar10 = 0xff;
                              }
                            }
                            else if (((puVar9[3] & 0x1f) == 0) || (bVar13 == 2)) {
                              bVar13 = puVar9[2];
                              if (bVar13 < 5) {
                                if (uVar10 < 5) {
                                  uVar10 = 5;
                                }
                              }
                              else if (uVar10 < bVar13) {
                                uVar10 = (uint)bVar13;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  puVar7[1] = (char)((uVar10 * 0x55) / 100);
                }
                local_18 = local_18 + 1;
              } while (local_18 < *(int *)((int)pvVar4 + 0x1c));
            }
            uVar6 = uVar6 + 1;
          } while ((int)uVar6 < param_4 + param_5);
        }
        uVar14 = uVar14 + 1;
      } while ((int)uVar14 < iVar12);
    }
    if ((int)uVar16 < iVar12) {
      uVar14 = uVar16;
      do {
        uVar6 = param_2 - param_5;
        if ((int)(param_2 - param_5) < param_4 + param_5) {
          do {
            pvVar4 = (void *)FUN_00406100(this,uVar14,uVar6,param_6);
            if ((pvVar4 != (void *)0x0) && (iVar17 = 0, 0 < *(int *)((int)pvVar4 + 0x1c))) {
              do {
                puVar7 = FUN_004d23f0(pvVar4,iVar17);
                if (((puVar7[3] & 0x1f) == 0) || ((puVar7[3] & 0x1f) == 2)) {
                  puVar7[2] = puVar7[1];
                }
                iVar17 = iVar17 + 1;
              } while (iVar17 < *(int *)((int)pvVar4 + 0x1c));
            }
            uVar6 = uVar6 + 1;
          } while ((int)uVar6 < param_4 + param_5);
        }
        uVar14 = uVar14 + 1;
      } while ((int)uVar14 < iVar12);
    }
    local_1c = local_1c + 1;
    if (0xf < local_1c) {
      for (; uVar16 = param_2, (int)param_1 < param_3; param_1 = param_1 + 1) {
        for (; (int)uVar16 < param_4; uVar16 = uVar16 + 1) {
          pvVar4 = (void *)FUN_00406100(this,param_1,uVar16,param_6);
          if ((pvVar4 != (void *)0x0) && (iVar12 = 0, 0 < *(int *)((int)pvVar4 + 0x1c))) {
            do {
              puVar7 = FUN_004d23f0(pvVar4,iVar12);
              if (((puVar7[3] & 0x1f) == 0) || ((puVar7[3] & 0x1f) == 2)) {
                *puVar7 = puVar7[2];
              }
              iVar12 = iVar12 + 1;
            } while (iVar12 < *(int *)((int)pvVar4 + 0x1c));
          }
        }
      }
      return;
    }
  } while( true );
}


/* FUN_004d2190 @ 004d2190  kind=gamemisc  attributed-by=none  size=431 */

void FUN_004d2190(undefined8 *param_1,undefined8 *param_2,float param_3,char param_4,int param_5,
                 int param_6)

{
  undefined4 *puVar1;
  float *pfVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  float local_70 [4];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  float local_40;
  undefined8 local_3c;
  undefined8 local_34;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  float local_18 [4];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  iVar5 = 0;
  if (0 < *(int *)(param_5 + 0x114)) {
    pbVar3 = (byte *)(param_5 + 0x17);
    do {
      if (0x7f < *pbVar3) {
        local_60 = *param_1;
        local_58 = param_1[1];
        local_50 = param_1[2];
        local_48 = *param_2;
        local_40 = *(float *)(param_2 + 1);
        local_20 = 0x40400000;
        local_2c = 0x3dcccccd;
        local_24 = 2;
        local_18[0] = 1.0;
        iVar4 = (int)(param_3 * 3.0 + 1.0);
        local_18[1] = 1.0;
        local_18[2] = 1.0;
        local_18[3] = 1.0;
        local_28 = iVar4;
        pfVar2 = FUN_00413df0(local_70,(uint)*pbVar3,local_18,param_3 * 0.5);
        local_3c = *(undefined8 *)pfVar2;
        local_34 = *(undefined8 *)(pfVar2 + 2);
        if (param_4 != '\0') {
          local_28 = iVar4 + 10;
          local_48 = CONCAT44(local_48._4_4_ * 2.0,(float)local_48 * 2.0);
          local_40 = local_40 * 2.0;
        }
        puVar1 = *(undefined4 **)(param_6 + 0x10);
        iVar4 = FUN_00420470(puVar1,(undefined4 *)puVar1[1],(undefined4 *)&local_60);
        if (*(int *)(param_6 + 0x14) == 0x3333332) {
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("list<T> too long");
        }
        *(int *)(param_6 + 0x14) = *(int *)(param_6 + 0x14) + 1;
        puVar1[1] = iVar4;
        **(int **)(iVar4 + 4) = iVar4;
      }
      iVar5 = iVar5 + 1;
      pbVar3 = pbVar3 + 8;
    } while (iVar5 < *(int *)(param_5 + 0x114));
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004d2340 @ 004d2340  kind=gamemisc  attributed-by=none  size=166 */

uint __thiscall FUN_004d2340(void *this,uint param_1,uint param_2,undefined8 param_3)

{
  uint uVar1;
  uint *puVar2;
  float10 fVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  
  uVar4 = FUN_0054a946();
  uVar5 = __alldiv((uint)uVar4,(uint)(uVar4 >> 0x20),0x10000,0);
  uVar1 = (uint)uVar5;
  uVar5 = __alldiv(param_1,param_2,0x10000,0);
  puVar2 = (uint *)FUN_004286f0(this,(int)((int)uVar5 + ((int)uVar5 >> 0x1f & 0x7ffU)) >> 0xb,uVar1)
  ;
  if ((puVar2 != (uint *)0x0) && (puVar2[6] != 0)) {
    fVar3 = FUN_0052c820(puVar2,&param_1,(uint *)&param_3);
    if ((float)fVar3 <= 1.0) {
      return puVar2[9];
    }
  }
  return 1;
}


/* FUN_004d24a0 @ 004d24a0  kind=gamemisc  attributed-by=none  size=87 */

byte __thiscall
FUN_004d24a0(void *this,uint param_1,uint param_2,int param_3,int param_4,int param_5)

{
  undefined *puVar1;
  byte bVar2;
  
  puVar1 = FUN_00405fd0(this,param_1,param_2,param_3,param_4);
  bVar2 = puVar1[3] & 0x1f;
  if (bVar2 == 0xd) {
    return 0xff;
  }
  if (((puVar1[3] & 0x1f) != 0) && (bVar2 != 2)) {
    return 0;
  }
  if ((byte)puVar1[param_5] < 5) {
    return 5;
  }
  return puVar1[param_5];
}


/* FUN_004d2810 @ 004d2810  kind=gamemisc  attributed-by=none  size=715 */

void FUN_004d2810(undefined1 *param_1,uint *param_2,float param_3,float param_4,void *param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  void *this;
  undefined8 uVar8;
  undefined4 local_164;
  undefined1 *local_160;
  void *local_15c;
  void *local_158;
  uint local_154;
  undefined2 local_150 [140];
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  float local_20;
  float local_1c;
  int local_14;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_160 = param_1;
  local_15c = param_5;
  FUN_0041d8d0(local_150);
  local_154 = *param_2;
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  uVar7 = param_2[3];
  local_20 = param_3;
  local_1c = local_1c * param_4;
  local_28 = param_2[4];
  local_24 = param_2[5];
  local_38 = local_154;
  local_34 = uVar3;
  local_30 = uVar2;
  local_2c = uVar7;
  iVar1 = rand();
  local_c = *(undefined4 *)((int)local_158 + 0x800160);
  local_14 = iVar1 % 300 + 500;
  uVar8 = __alldiv(uVar2,uVar7,0x10000,0);
  uVar2 = (int)((int)uVar8 + ((int)uVar8 >> 0x1f & 0xffU)) >> 8;
  uVar8 = __alldiv(local_154,uVar3,0x10000,0);
  local_154 = FUN_00406290(local_158,(int)((int)uVar8 + ((int)uVar8 >> 0x1f & 0xffU)) >> 8,uVar2);
  if (local_154 != 0) {
    FUN_00402a70(local_150,local_160);
    iVar1 = rand();
    local_20 = ((float)iVar1 * 360.0) / 32767.0;
    if (((int)local_24 < 1) && ((int)local_24 < 0)) {
      uVar8 = __alldiv(local_28,local_24,0x10000,0);
      iVar1 = (int)uVar8 + -1;
    }
    else {
      uVar8 = __alldiv(local_28,local_24,0x10000,0);
      iVar1 = (int)uVar8;
    }
    uVar8 = __alldiv(local_30,local_2c,0x10000,0);
    uVar3 = (uint)uVar8;
    uVar8 = __alldiv(local_38,local_34,0x10000,0);
    uVar2 = (uint)uVar8;
    do {
      if (((((int)uVar2 < 0) || ((int)uVar3 < 0)) || (0xffffff < (int)uVar2)) ||
         ((0xffffff < (int)uVar3 ||
          (iVar4 = FUN_00406290(local_158,(int)(uVar2 + ((int)uVar2 >> 0x1f & 0xffU)) >> 8,
                                (int)(uVar3 + ((int)uVar3 >> 0x1f & 0xffU)) >> 8), iVar4 == 0)))) {
LAB_004d2a64:
        puVar5 = &DAT_00584248;
      }
      else {
        uVar7 = uVar3 & 0x800000ff;
        if ((int)uVar7 < 0) {
          uVar7 = (uVar7 - 1 | 0xffffff00) + 1;
        }
        uVar6 = uVar2 & 0x800000ff;
        if ((int)uVar6 < 0) {
          uVar6 = (uVar6 - 1 | 0xffffff00) + 1;
        }
        this = (void *)((uVar7 * 0x100 + uVar6) * 0x20 + *(int *)(iVar4 + 0xa8));
        if ((this == (void *)0x0) || (iVar4 = *(int *)((int)this + 0x10), iVar1 < iVar4))
        goto LAB_004d2a64;
        if (iVar1 < *(int *)((int)this + 0x1c) + iVar4) {
          puVar5 = FUN_00405f20(this,iVar1 - iVar4);
          if ((((puVar5[3] & 0x1f) == 0) && (iVar1 < 1)) && ((puVar5[3] & 0x40) == 0)) {
            puVar5 = &DAT_00584240;
          }
        }
        else {
          puVar5 = &DAT_00584240;
          if (0 < iVar1) {
            puVar5 = &DAT_00584244;
          }
        }
      }
      if (((puVar5[3] & 0x1f) != 0) && ((puVar5[3] & 0x1f) != 2)) goto LAB_004d2a7f;
      iVar1 = iVar1 + -1;
    } while( true );
  }
LAB_004d2ac8:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
LAB_004d2a7f:
  local_28 = iVar1 + 1;
  local_24 = ((int)local_28 >> 0x1f) << 0x10 | local_28 >> 0x10;
  local_28 = local_28 * 0x10000;
  FUN_0041f5b0((void *)(local_154 + 0x30),(undefined1 *)local_150);
  FUN_004da680(local_15c,&local_164,'\0',&local_154,(uint)DAT_0058423e);
  goto LAB_004d2ac8;
}


/* FUN_004d2ae0 @ 004d2ae0  kind=gamemisc  attributed-by=none  size=4682 */

void __thiscall FUN_004d2ae0(void *this,int param_1,void *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  int *piVar8;
  code *pcVar9;
  bool bVar10;
  float10 fVar11;
  float fVar12;
  ulonglong uVar13;
  float fVar14;
  void *pvVar15;
  int local_18c;
  void *local_188;
  void *local_184;
  undefined4 local_180;
  int local_17c;
  void *local_178;
  void *local_174;
  int *local_170;
  float local_16c;
  byte local_168 [4];
  undefined4 local_164;
  undefined4 local_160;
  undefined2 local_15c;
  undefined1 local_15a;
  undefined2 local_158;
  undefined1 local_154 [256];
  undefined4 local_54;
  uint local_50 [7];
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  float local_20 [3];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pcVar9 = rand_exref;
  local_8 = 0xffffffff;
  puStack_c = &LAB_005549eb;
  local_10 = ExceptionList;
  local_14 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_178 = param_2;
  local_174 = this;
  if (((*(char *)(param_1 + 0x60) == '\0') || (*(char *)(param_1 + 0x60) == '\x03')) ||
     ((*(ushort *)(param_1 + 0x7e) & 0x800) != 0)) goto LAB_004d3d18;
  rand();
  local_188 = (void *)0x0;
  local_184 = (void *)0x0;
  local_180 = 0;
  local_8 = 0;
  if (*(char *)(param_1 + 0x990) != '\0') {
    local_170 = (int *)(param_1 + 0x990);
    FUN_004f2be0(&local_188,&local_170);
  }
  if (*(char *)(param_1 + 0xaa8) != '\0') {
    local_170 = (int *)(param_1 + 0xaa8);
    FUN_004f2be0(&local_188,&local_170);
  }
  if (*(char *)(param_1 + 0x530) != '\0') {
    local_170 = (int *)(param_1 + 0x530);
    FUN_004f2be0(&local_188,&local_170);
  }
  if (*(char *)(param_1 + 0x878) != '\0') {
    local_170 = (int *)(param_1 + 0x878);
    FUN_004f2be0(&local_188,&local_170);
  }
  if (*(char *)(param_1 + 0x760) != '\0') {
    local_170 = (int *)(param_1 + 0x760);
    FUN_004f2be0(&local_188,&local_170);
  }
  if (*(char *)(param_1 + 0x648) != '\0') {
    local_170 = (int *)(param_1 + 0x648);
    FUN_004f2be0(&local_188,&local_170);
  }
  if (*(char *)(param_1 + 0x418) != '\0') {
    local_170 = (int *)(param_1 + 0x418);
    FUN_004f2be0(&local_188,&local_170);
  }
  if (local_188 != local_184) {
    uVar2 = rand();
    uVar2 = uVar2 & 0x80000003;
    bVar10 = uVar2 == 0;
    if ((int)uVar2 < 0) {
      bVar10 = (uVar2 - 1 | 0xfffffffc) == 0xffffffff;
    }
    if ((bVar10) || ((*(ushort *)(param_1 + 0x7e) & 0x200) != 0)) {
      iVar3 = rand();
      local_20[0] = 1.0 - ((float)iVar3 * 2.0) / 32767.0;
      iVar3 = rand();
      local_20[1] = 1.0 - ((float)iVar3 * 2.0) / 32767.0;
      local_20[2] = 0.0;
      FUN_00402510((int)(local_50 + 6));
      uVar2 = rand();
      iVar7 = (int)local_184 - (int)local_188;
      fVar14 = 1.0;
      pvVar15 = local_178;
      iVar3 = rand();
      fVar12 = ((float)iVar3 * 360.0) / 32767.0;
      puVar4 = FUN_00402cb0((void *)(param_1 + 0x10),local_50,local_50 + 6);
      FUN_004d2810(*(undefined1 **)((int)local_188 + (uVar2 % (uint)(iVar7 >> 2)) * 4),puVar4,fVar12
                   ,fVar14,pvVar15);
    }
  }
  if (((*(char *)(param_1 + 0x60) == '\x01') || (*(int *)(param_1 + 100) == 0x8f)) &&
     (iVar3 = rand(), iVar3 % 10 == 0)) {
    uVar2 = rand();
    uVar2 = uVar2 & 0x80000001;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
    }
    iVar3 = *(int *)(param_1 + 400) + -1 + uVar2;
    if (iVar3 < 1) {
      iVar3 = 1;
    }
    uVar2 = rand();
    uVar2 = uVar2 & 0x80000001;
    bVar10 = uVar2 == 0;
    if ((int)uVar2 < 0) {
      bVar10 = (uVar2 - 1 | 0xfffffffe) == 0xffffffff;
    }
    iVar7 = -1;
    if (bVar10) {
      iVar5 = FUN_0052bf40((uint)*(byte *)(param_1 + 0x1a8),'\0');
      FUN_00528bf0(local_168,(short)iVar3,(char)iVar5,iVar7);
    }
    else {
      iVar5 = FUN_0052bf40((uint)*(byte *)(param_1 + 0x1a8),'\0');
      FUN_0052c4e0(local_168,(short)iVar3,(char)iVar5,iVar7);
    }
    FUN_00414470(local_168,0.05,'\x01');
    iVar3 = rand();
    local_20[0] = 1.0 - ((float)iVar3 * 2.0) / 32767.0;
    iVar3 = rand();
    local_20[1] = 1.0 - ((float)iVar3 * 2.0) / 32767.0;
    local_20[2] = 0.0;
    FUN_00402510((int)(local_50 + 6));
    fVar14 = 1.0;
    pvVar15 = local_178;
    iVar3 = rand();
    fVar12 = ((float)iVar3 * 360.0) / 32767.0;
    puVar4 = FUN_00402cb0((void *)(param_1 + 0x10),local_50,local_50 + 6);
    FUN_004d2810(local_168,puVar4,fVar12,fVar14,pvVar15);
    iVar3 = rand();
    if (iVar3 % 5 == 0) {
      FUN_0052bf40((uint)*(byte *)(param_1 + 0x1a8),'\0');
      FUN_0052b3f0(local_174,local_168);
      FUN_00414470(local_168,0.05,'\x01');
      iVar3 = rand();
      local_20[0] = 1.0 - ((float)iVar3 * 2.0) / 32767.0;
      iVar3 = rand();
      local_20[1] = 1.0 - ((float)iVar3 * 2.0) / 32767.0;
      local_20[2] = 0.0;
      FUN_00402510((int)(local_50 + 6));
      fVar14 = 1.0;
      pvVar15 = local_178;
      iVar3 = rand();
      fVar12 = ((float)iVar3 * 360.0) / 32767.0;
      puVar4 = FUN_00402cb0((void *)(param_1 + 0x10),local_50,local_50 + 6);
      FUN_004d2810(local_168,puVar4,fVar12,fVar14,pvVar15);
    }
  }
  iVar3 = rand();
  local_17c = 0;
  iVar3 = iVar3 % 3 + 1;
  if (0 < iVar3) {
    do {
      local_168[0] = 0;
      local_168[1] = 0;
      local_164 = 0;
      local_160 = 0;
      local_15c = 0;
      local_15a = 0;
      local_54 = 0;
      memset(local_154,0,0x100);
      local_16c = 0.75;
      local_158 = 1;
      switch(*(undefined4 *)(param_1 + 100)) {
      case 0x3a:
        local_168[0] = 0xb;
        local_168[1] = 2;
        local_15c = CONCAT11(0x13,(undefined1)local_15c);
        local_16c = 0.8;
        break;
      default:
        if (local_168[0] == 0) goto LAB_004d3488;
        break;
      case 0x46:
        local_168[0] = 0xb;
        local_168[1] = 0x12;
        local_16c = 0.8;
        break;
      case 0x47:
        local_168[0] = 0xb;
        local_168[1] = 0x15;
        local_16c = 0.8;
        break;
      case 0x78:
      case 0x79:
      case 0x7c:
      case 0x7e:
        uVar2 = (*pcVar9)();
        uVar2 = uVar2 & 0x80000001;
        bVar10 = uVar2 == 0;
        if ((int)uVar2 < 0) {
          bVar10 = (uVar2 - 1 | 0xfffffffe) == 0xffffffff;
        }
        if (bVar10) {
          local_168[0] = 0xb;
          local_168[1] = 5;
          local_15c = CONCAT11(0x15,(undefined1)local_15c);
          local_16c = 0.8;
        }
        else {
          local_168[0] = 0xb;
          local_168[1] = 1;
          local_15c = CONCAT11(2,(undefined1)local_15c);
          local_16c = 0.8;
        }
        break;
      case 0x7a:
        local_168[0] = 0xb;
        local_168[1] = 0x1b;
        goto LAB_004d3284;
      case 0x7b:
        local_168[0] = 0xb;
        local_168[1] = 0xb;
        local_15c = CONCAT11(0x1b,(undefined1)local_15c);
        local_16c = 0.8;
        break;
      case 0x7d:
        local_168[0] = 0xb;
        local_168[1] = 6;
LAB_004d3284:
        local_15c = local_15c & 0xff;
        local_16c = 0.8;
        break;
      case 0x7f:
        local_168[0] = 0xb;
        local_168[1] = 0x14;
        local_16c = 0.8;
        break;
      case 0x80:
        local_168[0] = 0xb;
        local_168[1] = 0x17;
        local_16c = 0.8;
        break;
      case 0x83:
        local_168[0] = 0xb;
        local_168[1] = 0;
        local_15c = CONCAT11(0xb,(undefined1)local_15c);
        local_16c = 3.0;
        break;
      case 0x84:
        local_168[0] = 0xb;
        local_168[1] = 0;
        local_15c = CONCAT11(1,(undefined1)local_15c);
        local_16c = 3.0;
        break;
      case 0x85:
        local_168[0] = 0xb;
        local_168[1] = 0;
        local_15c = CONCAT11(0xc,(undefined1)local_15c);
        local_16c = 3.0;
        break;
      case 0x86:
        local_168[0] = 0xb;
        local_168[1] = 0;
        local_15c = CONCAT11(0x11,(undefined1)local_15c);
        local_16c = 0.8;
        break;
      case 0x87:
        local_168[0] = 0xb;
        local_168[1] = 0;
        local_15c = 0xd01;
        local_16c = 3.0;
        break;
      case 0x88:
        local_168[0] = 0xb;
        local_168[1] = 0;
        local_15c = 0xe02;
        local_16c = 3.0;
        break;
      case 0x89:
        local_168[0] = 0xb;
        local_168[1] = 0;
        local_15c = 0xf03;
        local_16c = 3.0;
        break;
      case 0x8a:
        local_168[0] = 0xb;
        local_168[1] = 0;
        local_15c = 0x1004;
        local_16c = 3.0;
        break;
      case 0x8b:
        local_168[0] = 0xb;
        local_168[1] = 8;
        local_15c = CONCAT11(0x16,(undefined1)local_15c);
        local_16c = 0.8;
      }
      iVar7 = (*pcVar9)();
      local_20[0] = 1.0 - ((float)iVar7 * 2.0) / 32767.0;
      iVar7 = (*pcVar9)();
      local_20[2] = 0.0;
      iVar5 = 0;
      local_20[1] = 1.0 - ((float)iVar7 * 2.0) / 32767.0;
      do {
        local_170 = (int *)(local_20[iVar5] * 65536.0);
        uVar13 = FUN_0054a946();
        pcVar9 = rand_exref;
        local_50[iVar5 * 2] = (uint)uVar13;
        local_50[iVar5 * 2 + 1] = (uint)(uVar13 >> 0x20);
        iVar5 = iVar5 + 1;
      } while (iVar5 < 3);
      local_50[6] = *(uint *)(param_1 + 0x10) + local_50[0];
      local_34 = *(int *)(param_1 + 0x14) + local_50[1] +
                 (uint)CARRY4(*(uint *)(param_1 + 0x10),local_50[0]);
      local_30 = *(uint *)(param_1 + 0x18) + local_50[2];
      local_2c = *(int *)(param_1 + 0x1c) + local_50[3] +
                 (uint)CARRY4(*(uint *)(param_1 + 0x18),local_50[2]);
      local_28 = *(uint *)(param_1 + 0x20) + local_50[4];
      local_24 = *(int *)(param_1 + 0x24) + local_50[5] +
                 (uint)CARRY4(*(uint *)(param_1 + 0x20),local_50[4]);
      fVar12 = local_16c;
      pvVar15 = local_178;
      iVar7 = rand();
      FUN_004d2810(local_168,local_50 + 6,((float)iVar7 * 360.0) / 32767.0,fVar12,pvVar15);
      local_17c = local_17c + 1;
    } while (local_17c < iVar3);
  }
LAB_004d3488:
  if ((*(char *)(param_1 + 0x60) == '\x01') || (*(int *)(param_1 + 100) == 0x8f)) {
    iVar3 = (*pcVar9)();
    if (iVar3 % 0x32 == 0) {
      iVar3 = (*pcVar9)();
      local_20[0] = 1.0 - ((float)iVar3 * 2.0) / 32767.0;
      iVar3 = (*pcVar9)();
      local_20[2] = 0.0;
      iVar7 = 0;
      local_20[1] = 1.0 - ((float)iVar3 * 2.0) / 32767.0;
      do {
        local_170 = (int *)(local_20[iVar7] * 65536.0);
        uVar13 = FUN_0054a946();
        pcVar9 = rand_exref;
        local_50[iVar7 * 2] = (uint)uVar13;
        local_50[iVar7 * 2 + 1] = (uint)(uVar13 >> 0x20);
        iVar7 = iVar7 + 1;
      } while (iVar7 < 3);
      local_50[6] = *(uint *)(param_1 + 0x10) + local_50[0];
      local_34 = *(int *)(param_1 + 0x14) + local_50[1] +
                 (uint)CARRY4(*(uint *)(param_1 + 0x10),local_50[0]);
      local_30 = *(uint *)(param_1 + 0x18) + local_50[2];
      local_2c = *(int *)(param_1 + 0x1c) + local_50[3] +
                 (uint)CARRY4(*(uint *)(param_1 + 0x18),local_50[2]);
      local_28 = *(uint *)(param_1 + 0x20) + local_50[4];
      local_24 = *(int *)(param_1 + 0x24) + local_50[5] +
                 (uint)CARRY4(*(uint *)(param_1 + 0x20),local_50[4]);
      fVar14 = 0.75;
      pvVar15 = local_178;
      iVar3 = rand();
      fVar12 = ((float)iVar3 * 360.0) / 32767.0;
      puVar4 = local_50 + 6;
      iVar3 = FUN_0052bf40(*(byte *)(param_1 + 0x1a8) + 1,'\0');
      puVar6 = (undefined1 *)
               FUN_0052a760(local_168,(short)*(undefined4 *)(param_1 + 400),(char)iVar3);
      FUN_004d2810(puVar6,puVar4,fVar12,fVar14,pvVar15);
    }
    if ((*(ushort *)(param_1 + 0x7e) & 0x18) == 0) {
      fVar11 = FUN_00410f00();
      local_170 = (int *)((float)fVar11 * 10.0);
      iVar3 = (*pcVar9)();
      fVar12 = (((float)iVar3 * 2.0) / 32767.0 + 1.0) * (float)local_170;
      if ((*(ushort *)(param_1 + 0x7e) & 0x200) != 0) {
        fVar12 = fVar12 * 10.0;
      }
      local_17c = (int)fVar12 / 100;
      iVar3 = (int)fVar12 % 100;
      local_170 = (int *)(local_17c / 100);
      local_17c = local_17c % 100;
      if (iVar3 != 0) {
        FUN_00406fd0((undefined2 *)local_168);
        local_168[0] = 0xc;
        local_168[1] = 0;
        local_15c = CONCAT11(10,(undefined1)local_15c);
        local_158 = (undefined2)iVar3;
        iVar3 = (*pcVar9)();
        local_20[0] = 1.0 - ((float)iVar3 * 2.0) / 32767.0;
        iVar3 = (*pcVar9)();
        local_20[1] = 1.0 - ((float)iVar3 * 2.0) / 32767.0;
        local_20[2] = 0.0;
        FUN_00402510((int)(local_50 + 6));
        fVar14 = 0.75;
        pvVar15 = local_178;
        iVar3 = (*pcVar9)();
        fVar12 = ((float)iVar3 * 360.0) / 32767.0;
        puVar4 = FUN_00402cb0((void *)(param_1 + 0x10),local_50,local_50 + 6);
        FUN_004d2810(local_168,puVar4,fVar12,fVar14,pvVar15);
      }
      if (local_17c != 0) {
        FUN_00406fd0((undefined2 *)local_168);
        local_168[0] = 0xc;
        local_168[1] = 0;
        local_15c = CONCAT11(0xc,(undefined1)local_15c);
        local_158 = (undefined2)local_17c;
        iVar3 = (*pcVar9)();
        local_20[0] = 1.0 - ((float)iVar3 * 2.0) / 32767.0;
        iVar3 = (*pcVar9)();
        local_20[1] = 1.0 - ((float)iVar3 * 2.0) / 32767.0;
        local_20[2] = 0.0;
        FUN_00402510((int)(local_50 + 6));
        fVar14 = 0.75;
        pvVar15 = local_178;
        iVar3 = (*pcVar9)();
        fVar12 = ((float)iVar3 * 360.0) / 32767.0;
        puVar4 = FUN_00402cb0((void *)(param_1 + 0x10),local_50,local_50 + 6);
        FUN_004d2810(local_168,puVar4,fVar12,fVar14,pvVar15);
      }
      piVar8 = local_170;
      if (local_170 != (int *)0x0) {
        FUN_00406fd0((undefined2 *)local_168);
        local_168[0] = 0xc;
        local_168[1] = 0;
        local_15c = CONCAT11(0xb,(undefined1)local_15c);
        local_158 = SUB42(piVar8,0);
        iVar3 = (*pcVar9)();
        local_20[0] = 1.0 - ((float)iVar3 * 2.0) / 32767.0;
        iVar3 = (*pcVar9)();
        local_20[1] = 1.0 - ((float)iVar3 * 2.0) / 32767.0;
        local_20[2] = 0.0;
        FUN_00402510((int)(local_50 + 6));
        fVar14 = 0.75;
        pvVar15 = local_178;
        iVar3 = (*pcVar9)();
        fVar12 = ((float)iVar3 * 360.0) / 32767.0;
        puVar4 = FUN_00402cb0((void *)(param_1 + 0x10),local_50,local_50 + 6);
LAB_004d3ab6:
        FUN_004d2810(local_168,puVar4,fVar12,fVar14,pvVar15);
      }
    }
    else {
      iVar3 = (*pcVar9)();
      iVar3 = iVar3 % 1000 + (uint)*(byte *)(param_1 + 0x1a8) * 0x14;
      if (iVar3 < 700) {
        local_16c = 0.0;
      }
      else if (iVar3 < 0x3b6) {
        local_16c = 1.4013e-45;
      }
      else {
        local_16c = (float)((0x3e6 < iVar3) + 2);
      }
      if (((*(ushort *)(param_1 + 0x7e) & 0x200) != 0) &&
         (local_16c = (float)((int)local_16c + 1), 3 < (uint)local_16c)) {
        local_16c = 4.2039e-45;
      }
      iVar3 = (*pcVar9)();
      if ((iVar3 % 0x14 == 0) && (local_16c != 0.0)) {
        FUN_00406fd0((undefined2 *)local_168);
        local_168[0] = 0xe;
        local_164 = (*pcVar9)();
        local_158 = *(undefined2 *)(param_1 + 400);
        local_15c = CONCAT11(local_15c._1_1_,SUB41(local_16c,0));
        iVar3 = (*pcVar9)();
        local_20[0] = 1.0 - ((float)iVar3 * 2.0) / 32767.0;
        iVar3 = (*pcVar9)();
        local_20[1] = 1.0 - ((float)iVar3 * 2.0) / 32767.0;
        local_20[2] = 0.0;
        FUN_00402510((int)(local_50 + 6));
        fVar14 = 0.75;
        pvVar15 = local_178;
        iVar3 = (*pcVar9)();
        fVar12 = ((float)iVar3 * 360.0) / 32767.0;
        puVar4 = FUN_00402cb0((void *)(param_1 + 0x10),local_50,local_50 + 6);
        goto LAB_004d3ab6;
      }
    }
  }
  if (*(char *)(param_1 + 0x60) == '\x01') {
    iVar3 = *(int *)(param_1 + 0x11dc);
    if ((iVar3 != *(int *)(param_1 + 0x11e0)) &&
       (local_16c = 0.0, 0 < (*(int *)(param_1 + 0x11e0) - iVar3) / 0xc)) {
      local_17c = 0;
      do {
        piVar8 = *(int **)(local_17c + iVar3);
        local_170 = piVar8;
        if (piVar8 != *(int **)(local_17c + 4 + *(int *)(param_1 + 0x11dc))) {
          do {
            piVar1 = piVar8 + 1;
            if ((((char)piVar8[1] != '\0') && (*piVar8 != 0)) &&
               (local_18c = 0, local_170 = piVar8, 0 < *piVar8)) {
              do {
                if (((char)*piVar1 != '\x01') || (*(char *)((int)piVar8 + 5) != '\x01')) {
                  iVar3 = (*pcVar9)();
                  local_20[0] = 1.0 - ((float)iVar3 * 2.0) / 32767.0;
                  iVar3 = (*pcVar9)();
                  local_20[2] = 0.0;
                  iVar7 = 0;
                  local_20[1] = 1.0 - ((float)iVar3 * 2.0) / 32767.0;
                  do {
                    uVar13 = FUN_0054a946();
                    pcVar9 = rand_exref;
                    local_50[iVar7 * 2] = (uint)uVar13;
                    local_50[iVar7 * 2 + 1] = (uint)(uVar13 >> 0x20);
                    iVar7 = iVar7 + 1;
                  } while (iVar7 < 3);
                  local_50[6] = *(uint *)(param_1 + 0x10) + local_50[0];
                  local_34 = *(int *)(param_1 + 0x14) + local_50[1] +
                             (uint)CARRY4(*(uint *)(param_1 + 0x10),local_50[0]);
                  local_30 = *(uint *)(param_1 + 0x18) + local_50[2];
                  local_2c = *(int *)(param_1 + 0x1c) + local_50[3] +
                             (uint)CARRY4(*(uint *)(param_1 + 0x18),local_50[2]);
                  local_28 = *(uint *)(param_1 + 0x20) + local_50[4];
                  local_24 = *(int *)(param_1 + 0x24) + local_50[5] +
                             (uint)CARRY4(*(uint *)(param_1 + 0x20),local_50[4]);
                  fVar12 = 0.75;
                  pvVar15 = local_178;
                  iVar3 = rand();
                  FUN_004d2810((undefined1 *)piVar1,local_50 + 6,((float)iVar3 * 360.0) / 32767.0,
                               fVar12,pvVar15);
                  piVar8 = local_170;
                }
                local_18c = local_18c + 1;
              } while (local_18c < *piVar8);
            }
            piVar8 = piVar8 + 0x47;
            local_170 = piVar8;
          } while (piVar8 != *(int **)(local_17c + 4 + *(int *)(param_1 + 0x11dc)));
        }
        iVar3 = *(int *)(param_1 + 0x11dc);
        local_16c = (float)((int)local_16c + 1);
        local_17c = local_17c + 0xc;
      } while ((int)local_16c < (*(int *)(param_1 + 0x11e0) - iVar3) / 0xc);
    }
  }
  if (local_188 != (void *)0x0) {
    operator_delete(local_188);
  }
LAB_004d3d18:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004d3de0 @ 004d3de0  kind=gamemisc  attributed-by=none  size=15 */

void __thiscall FUN_004d3de0(void *this,undefined4 *param_1)

{
  *param_1 = *(undefined4 *)((int)this + 4);
  return;
}


/* FUN_004d3e00 @ 004d3e00  kind=gamemisc  attributed-by=none  size=14 */

void __fastcall FUN_004d3e00(int param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x8000d8));
  return;
}


/* FUN_004d3e10 @ 004d3e10  kind=gamemisc  attributed-by=none  size=189 */

undefined4 * __thiscall FUN_004d3e10(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  void *local_8;
  
  piVar2 = *(int **)this;
  local_8 = this;
  piVar3 = param_2;
  if ((param_2 == (int *)*piVar2) && (param_3 == piVar2)) {
    FUN_004ce720((int *)piVar2[1]);
    *(int *)(*(int *)this + 4) = *(int *)this;
    *(undefined4 *)*(undefined4 *)this = *(undefined4 *)this;
    *(int *)(*(int *)this + 8) = *(int *)this;
    *(undefined4 *)((int)this + 4) = 0;
    *param_1 = **(undefined4 **)this;
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
    FUN_004d3ed0(this,&local_8,piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return param_1;
}


/* FUN_004d3ed0 @ 004d3ed0  kind=gamemisc  attributed-by=none  size=680 */

void __thiscall FUN_004d3ed0(void *this,undefined4 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  piVar2 = param_2;
  if (*(char *)((int)param_2 + 0xd) != '\0') {
                    /* WARNING: Subroutine does not return */
    std::_Xout_of_range("invalid map/set<T> iterator");
  }
  FUN_00407a50((int *)&param_2);
  piVar5 = (int *)*piVar2;
  if (*(char *)((int)piVar5 + 0xd) == '\0') {
    piVar7 = piVar5;
    if ((*(char *)(piVar2[2] + 0xd) == '\0') && (piVar7 = (int *)param_2[2], param_2 != piVar2)) {
      piVar5[1] = (int)param_2;
      *param_2 = *piVar2;
      piVar5 = param_2;
      if (param_2 != (int *)piVar2[2]) {
        piVar5 = (int *)param_2[1];
        if (*(char *)((int)piVar7 + 0xd) == '\0') {
          piVar7[1] = (int)piVar5;
        }
        *piVar5 = (int)piVar7;
        param_2[2] = piVar2[2];
        *(int **)(piVar2[2] + 4) = param_2;
      }
      if (*(int **)(*(int *)this + 4) == piVar2) {
        *(int **)(*(int *)this + 4) = param_2;
      }
      else {
        piVar6 = (int *)piVar2[1];
        if ((int *)*piVar6 == piVar2) {
          *piVar6 = (int)param_2;
        }
        else {
          piVar6[2] = (int)param_2;
        }
      }
      param_2[1] = piVar2[1];
      iVar1 = param_2[3];
      *(char *)(param_2 + 3) = (char)piVar2[3];
      *(char *)(piVar2 + 3) = (char)iVar1;
      goto LAB_004d3ffc;
    }
  }
  else {
    piVar7 = (int *)piVar2[2];
  }
  piVar5 = (int *)piVar2[1];
  if (*(char *)((int)piVar7 + 0xd) == '\0') {
    piVar7[1] = (int)piVar5;
  }
  if (*(int **)(*(int *)this + 4) == piVar2) {
    *(int **)(*(int *)this + 4) = piVar7;
  }
  else if ((int *)*piVar5 == piVar2) {
    *piVar5 = (int)piVar7;
  }
  else {
    piVar5[2] = (int)piVar7;
  }
  piVar6 = *(int **)this;
  if ((int *)*piVar6 == piVar2) {
    piVar3 = piVar5;
    if (*(char *)((int)piVar7 + 0xd) == '\0') {
      piVar3 = FUN_0042d440(piVar7);
    }
    *piVar6 = (int)piVar3;
  }
  iVar1 = *(int *)this;
  if (*(int **)(iVar1 + 8) == piVar2) {
    if (*(char *)((int)piVar7 + 0xd) == '\0') {
      iVar4 = FUN_0042d420((int)piVar7);
      *(int *)(iVar1 + 8) = iVar4;
    }
    else {
      *(int **)(iVar1 + 8) = piVar5;
    }
  }
LAB_004d3ffc:
  if ((char)piVar2[3] == '\x01') {
    if (piVar7 != *(int **)(*(int *)this + 4)) {
      do {
        piVar6 = piVar5;
        if ((char)piVar7[3] != '\x01') break;
        piVar5 = (int *)*piVar6;
        if (piVar7 == piVar5) {
          piVar5 = (int *)piVar6[2];
          if ((char)piVar5[3] == '\0') {
            *(undefined1 *)(piVar5 + 3) = 1;
            *(undefined1 *)(piVar6 + 3) = 0;
            FUN_004ce780(this,(int)piVar6);
            piVar5 = (int *)piVar6[2];
          }
          if (*(char *)((int)piVar5 + 0xd) == '\0') {
            if ((*(char *)(*piVar5 + 0xc) != '\x01') || (*(char *)(piVar5[2] + 0xc) != '\x01')) {
              if (*(char *)(piVar5[2] + 0xc) == '\x01') {
                *(undefined1 *)(*piVar5 + 0xc) = 1;
                *(undefined1 *)(piVar5 + 3) = 0;
                FUN_0042d460(this,piVar5);
                piVar5 = (int *)piVar6[2];
              }
              *(char *)(piVar5 + 3) = (char)piVar6[3];
              *(undefined1 *)(piVar6 + 3) = 1;
              *(undefined1 *)(piVar5[2] + 0xc) = 1;
              FUN_004ce780(this,(int)piVar6);
              *(undefined1 *)(piVar7 + 3) = 1;
              goto LAB_004d412e;
            }
LAB_004d40d0:
            *(undefined1 *)(piVar5 + 3) = 0;
          }
        }
        else {
          if ((char)piVar5[3] == '\0') {
            *(undefined1 *)(piVar5 + 3) = 1;
            *(undefined1 *)(piVar6 + 3) = 0;
            FUN_0042d460(this,piVar6);
            piVar5 = (int *)*piVar6;
          }
          if (*(char *)((int)piVar5 + 0xd) == '\0') {
            if ((*(char *)(piVar5[2] + 0xc) == '\x01') && (*(char *)(*piVar5 + 0xc) == '\x01'))
            goto LAB_004d40d0;
            if (*(char *)(*piVar5 + 0xc) == '\x01') {
              *(undefined1 *)(piVar5[2] + 0xc) = 1;
              *(undefined1 *)(piVar5 + 3) = 0;
              FUN_004ce780(this,(int)piVar5);
              piVar5 = (int *)*piVar6;
            }
            *(char *)(piVar5 + 3) = (char)piVar6[3];
            *(undefined1 *)(piVar6 + 3) = 1;
            *(undefined1 *)(*piVar5 + 0xc) = 1;
            FUN_0042d460(this,piVar6);
            *(undefined1 *)(piVar7 + 3) = 1;
            goto LAB_004d412e;
          }
        }
        piVar5 = (int *)piVar6[1];
        piVar7 = piVar6;
      } while (piVar6 != *(int **)(*(int *)this + 4));
    }
    *(undefined1 *)(piVar7 + 3) = 1;
  }
LAB_004d412e:
  if (7 < (uint)piVar2[0xb]) {
    operator_delete((void *)piVar2[6]);
  }
  piVar2[0xb] = 7;
  piVar2[10] = 0;
  *(undefined2 *)(piVar2 + 6) = 0;
  operator_delete(piVar2);
  if (*(int *)((int)this + 4) != 0) {
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  }
  *param_1 = param_2;
  return;
}


/* FUN_004d4180 @ 004d4180  kind=gamemisc  attributed-by=none  size=680 */

void __thiscall FUN_004d4180(void *this,undefined4 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  piVar2 = param_2;
  if (*(char *)((int)param_2 + 0xd) != '\0') {
                    /* WARNING: Subroutine does not return */
    std::_Xout_of_range("invalid map/set<T> iterator");
  }
  FUN_00407a50((int *)&param_2);
  piVar5 = (int *)*piVar2;
  if (*(char *)((int)piVar5 + 0xd) == '\0') {
    piVar7 = piVar5;
    if ((*(char *)(piVar2[2] + 0xd) == '\0') && (piVar7 = (int *)param_2[2], param_2 != piVar2)) {
      piVar5[1] = (int)param_2;
      *param_2 = *piVar2;
      piVar5 = param_2;
      if (param_2 != (int *)piVar2[2]) {
        piVar5 = (int *)param_2[1];
        if (*(char *)((int)piVar7 + 0xd) == '\0') {
          piVar7[1] = (int)piVar5;
        }
        *piVar5 = (int)piVar7;
        param_2[2] = piVar2[2];
        *(int **)(piVar2[2] + 4) = param_2;
      }
      if (*(int **)(*(int *)this + 4) == piVar2) {
        *(int **)(*(int *)this + 4) = param_2;
      }
      else {
        piVar6 = (int *)piVar2[1];
        if ((int *)*piVar6 == piVar2) {
          *piVar6 = (int)param_2;
        }
        else {
          piVar6[2] = (int)param_2;
        }
      }
      param_2[1] = piVar2[1];
      iVar1 = param_2[3];
      *(char *)(param_2 + 3) = (char)piVar2[3];
      *(char *)(piVar2 + 3) = (char)iVar1;
      goto LAB_004d42ac;
    }
  }
  else {
    piVar7 = (int *)piVar2[2];
  }
  piVar5 = (int *)piVar2[1];
  if (*(char *)((int)piVar7 + 0xd) == '\0') {
    piVar7[1] = (int)piVar5;
  }
  if (*(int **)(*(int *)this + 4) == piVar2) {
    *(int **)(*(int *)this + 4) = piVar7;
  }
  else if ((int *)*piVar5 == piVar2) {
    *piVar5 = (int)piVar7;
  }
  else {
    piVar5[2] = (int)piVar7;
  }
  piVar6 = *(int **)this;
  if ((int *)*piVar6 == piVar2) {
    piVar3 = piVar5;
    if (*(char *)((int)piVar7 + 0xd) == '\0') {
      piVar3 = FUN_0042d440(piVar7);
    }
    *piVar6 = (int)piVar3;
  }
  iVar1 = *(int *)this;
  if (*(int **)(iVar1 + 8) == piVar2) {
    if (*(char *)((int)piVar7 + 0xd) == '\0') {
      iVar4 = FUN_0042d420((int)piVar7);
      *(int *)(iVar1 + 8) = iVar4;
    }
    else {
      *(int **)(iVar1 + 8) = piVar5;
    }
  }
LAB_004d42ac:
  if ((char)piVar2[3] == '\x01') {
    if (piVar7 != *(int **)(*(int *)this + 4)) {
      do {
        piVar6 = piVar5;
        if ((char)piVar7[3] != '\x01') break;
        piVar5 = (int *)*piVar6;
        if (piVar7 == piVar5) {
          piVar5 = (int *)piVar6[2];
          if ((char)piVar5[3] == '\0') {
            *(undefined1 *)(piVar5 + 3) = 1;
            *(undefined1 *)(piVar6 + 3) = 0;
            FUN_004ce780(this,(int)piVar6);
            piVar5 = (int *)piVar6[2];
          }
          if (*(char *)((int)piVar5 + 0xd) == '\0') {
            if ((*(char *)(*piVar5 + 0xc) != '\x01') || (*(char *)(piVar5[2] + 0xc) != '\x01')) {
              if (*(char *)(piVar5[2] + 0xc) == '\x01') {
                *(undefined1 *)(*piVar5 + 0xc) = 1;
                *(undefined1 *)(piVar5 + 3) = 0;
                FUN_0042d460(this,piVar5);
                piVar5 = (int *)piVar6[2];
              }
              *(char *)(piVar5 + 3) = (char)piVar6[3];
              *(undefined1 *)(piVar6 + 3) = 1;
              *(undefined1 *)(piVar5[2] + 0xc) = 1;
              FUN_004ce780(this,(int)piVar6);
              *(undefined1 *)(piVar7 + 3) = 1;
              goto LAB_004d43de;
            }
LAB_004d4380:
            *(undefined1 *)(piVar5 + 3) = 0;
          }
        }
        else {
          if ((char)piVar5[3] == '\0') {
            *(undefined1 *)(piVar5 + 3) = 1;
            *(undefined1 *)(piVar6 + 3) = 0;
            FUN_0042d460(this,piVar6);
            piVar5 = (int *)*piVar6;
          }
          if (*(char *)((int)piVar5 + 0xd) == '\0') {
            if ((*(char *)(piVar5[2] + 0xc) == '\x01') && (*(char *)(*piVar5 + 0xc) == '\x01'))
            goto LAB_004d4380;
            if (*(char *)(*piVar5 + 0xc) == '\x01') {
              *(undefined1 *)(piVar5[2] + 0xc) = 1;
              *(undefined1 *)(piVar5 + 3) = 0;
              FUN_004ce780(this,(int)piVar5);
              piVar5 = (int *)*piVar6;
            }
            *(char *)(piVar5 + 3) = (char)piVar6[3];
            *(undefined1 *)(piVar6 + 3) = 1;
            *(undefined1 *)(*piVar5 + 0xc) = 1;
            FUN_0042d460(this,piVar6);
            *(undefined1 *)(piVar7 + 3) = 1;
            goto LAB_004d43de;
          }
        }
        piVar5 = (int *)piVar6[1];
        piVar7 = piVar6;
      } while (piVar6 != *(int **)(*(int *)this + 4));
    }
    *(undefined1 *)(piVar7 + 3) = 1;
  }
LAB_004d43de:
  if (7 < (uint)piVar2[9]) {
    operator_delete((void *)piVar2[4]);
  }
  piVar2[9] = 7;
  piVar2[8] = 0;
  *(undefined2 *)(piVar2 + 4) = 0;
  operator_delete(piVar2);
  if (*(int *)((int)this + 4) != 0) {
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  }
  *param_1 = param_2;
  return;
}


/* FUN_004d4430 @ 004d4430  kind=gamemisc  attributed-by=none  size=50 */

void __thiscall FUN_004d4430(void *this,undefined4 *param_1,void *param_2)

{
  FUN_0041d190((int)param_2 + 0x148,*(int *)((int)this + 4),param_2);
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -0x148;
  *param_1 = param_2;
  return;
}


/* FUN_004d4470 @ 004d4470  kind=gamemisc  attributed-by=none  size=69 */

int * __thiscall FUN_004d4470(void *this,int *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)(param_2 + 0xc);
  puVar2 = *(undefined4 **)((int)this + 4);
  if (puVar4 != puVar2) {
    puVar3 = (undefined4 *)(param_2 + 8);
    do {
      puVar3[-2] = *puVar4;
      puVar3[-1] = puVar4[1];
      puVar1 = puVar4 + 2;
      puVar4 = puVar4 + 3;
      *puVar3 = *puVar1;
      puVar3 = puVar3 + 3;
    } while (puVar4 != puVar2);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -0xc;
  *param_1 = param_2;
  return param_1;
}


/* FUN_004d4f60 @ 004d4f60  kind=gamemisc  attributed-by=none  size=47 */

void __thiscall FUN_004d4f60(void *this,undefined4 *param_1,uint *param_2)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 local_c [2];
  
  puVar2 = FUN_004da680(this,local_c,'\0',param_2,(uint)DAT_0058423e);
  uVar1 = *(undefined1 *)(puVar2 + 1);
  *param_1 = *puVar2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  return;
}


/* FUN_004d5740 @ 004d5740  kind=gamemisc  attributed-by=none  size=806 */

void __thiscall FUN_004d5740(void *this,uint *param_1,float *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  void *this_00;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  uint local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  uint local_50 [13];
  int local_1c;
  int local_18;
  float local_14;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_14 = 0.0;
  local_10 = 0.0;
  local_c = 0.2;
  iVar8 = 0;
  do {
    uVar10 = FUN_0054a946();
    local_50[iVar8 * 2 + 6] = (uint)uVar10;
    local_50[iVar8 * 2 + 7] = (uint)(uVar10 >> 0x20);
    iVar8 = iVar8 + 1;
  } while (iVar8 < 3);
  iVar8 = 0;
  local_14 = *param_2 * 0.5;
  local_10 = param_2[1] * 0.5;
  local_c = param_2[2] * 0.5;
  do {
    uVar10 = FUN_0054a946();
    local_50[iVar8 * 2] = (uint)uVar10;
    local_50[iVar8 * 2 + 1] = (uint)(uVar10 >> 0x20);
    iVar8 = iVar8 + 1;
  } while (iVar8 < 3);
  uVar9 = *param_1;
  uVar7 = param_1[1];
  uVar6 = param_1[2];
  uVar5 = param_1[3];
  uVar1 = param_1[4];
  uVar2 = param_1[5];
  local_50[0xc] = (uVar9 - local_50[0]) - local_50[6];
  local_1c = (((uVar7 - local_50[1]) - (uint)(uVar9 < local_50[0])) - local_50[7]) -
             (uint)(uVar9 - local_50[0] < local_50[6]);
  local_18 = (uVar6 - local_50[2]) - local_50[8];
  local_14 = (float)((((uVar5 - local_50[3]) - (uint)(uVar6 < local_50[2])) - local_50[9]) -
                    (uint)(uVar6 - local_50[2] < local_50[8]));
  local_10 = (float)((uVar1 - local_50[4]) - local_50[10]);
  local_c = (float)((((uVar2 - local_50[5]) - (uint)(uVar1 < local_50[4])) - local_50[0xb]) -
                   (uint)(uVar1 - local_50[4] < local_50[10]));
  FUN_00405450((int *)(local_50 + 3),local_50 + 0xc);
  local_14 = *param_2 * 0.5;
  local_10 = param_2[1] * 0.5;
  iVar8 = 0;
  local_c = param_2[2] * 0.5;
  do {
    uVar10 = FUN_0054a946();
    local_50[iVar8 * 2 + 6] = (uint)uVar10;
    local_50[iVar8 * 2 + 7] = (uint)(uVar10 >> 0x20);
    iVar8 = iVar8 + 1;
  } while (iVar8 < 3);
  local_68 = uVar9 + local_50[6];
  local_64 = uVar7 + local_50[7] + (uint)CARRY4(uVar9,local_50[6]);
  local_60 = uVar6 + local_50[8];
  local_5c = uVar5 + local_50[9] + (uint)CARRY4(uVar6,local_50[8]);
  local_58 = uVar1 + local_50[10];
  local_54 = uVar2 + local_50[0xb] + (uint)CARRY4(uVar1,local_50[10]);
  FUN_00405450((int *)&local_14,&local_68);
  fVar4 = local_10;
  uVar9 = local_50[4];
  uVar7 = local_50[3];
  if ((int)local_50[3] <= (int)local_14) {
    do {
      uVar6 = uVar9;
      if ((int)uVar9 <= (int)fVar4) {
        do {
          if (((((int)uVar7 < 0) || ((int)uVar9 < 0)) || (0xffffff < (int)uVar7)) ||
             ((0xffffff < (int)uVar9 ||
              (iVar8 = FUN_00406290(this,(int)(uVar7 + ((int)uVar7 >> 0x1f & 0xffU)) >> 8,
                                    (int)(uVar9 + ((int)uVar9 >> 0x1f & 0xffU)) >> 8), iVar8 == 0)))
             ) {
LAB_004d5a1f:
            puVar3 = &DAT_00584248;
          }
          else {
            uVar6 = uVar9 & 0x800000ff;
            if ((int)uVar6 < 0) {
              uVar6 = (uVar6 - 1 | 0xffffff00) + 1;
            }
            uVar5 = uVar7 & 0x800000ff;
            if ((int)uVar5 < 0) {
              uVar5 = (uVar5 - 1 | 0xffffff00) + 1;
            }
            this_00 = (void *)((uVar6 * 0x100 + uVar5) * 0x20 + *(int *)(iVar8 + 0xa8));
            if ((this_00 == (void *)0x0) ||
               (iVar8 = *(int *)((int)this_00 + 0x10), (int)local_50[5] < iVar8)) goto LAB_004d5a1f;
            if ((int)local_50[5] < *(int *)((int)this_00 + 0x1c) + iVar8) {
              puVar3 = FUN_00405f20(this_00,local_50[5] - iVar8);
              if ((((puVar3[3] & 0x1f) == 0) && ((int)local_50[5] < 1)) && ((puVar3[3] & 0x40) == 0)
                 ) {
                puVar3 = &DAT_00584240;
              }
            }
            else {
              puVar3 = &DAT_00584240;
              if (0 < (int)local_50[5]) {
                puVar3 = &DAT_00584244;
              }
            }
          }
          if (((puVar3[3] & 0x1f) != 0) && ((puVar3[3] & 0x1f) != 2)) {
            __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
            return;
          }
          uVar9 = uVar9 + 1;
          fVar4 = local_10;
          uVar6 = local_50[4];
        } while ((int)uVar9 <= (int)local_10);
      }
      uVar7 = uVar7 + 1;
      uVar9 = uVar6;
    } while ((int)uVar7 <= (int)local_14);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004d5c70 @ 004d5c70  kind=gamemisc  attributed-by=none  size=14 */

void __fastcall FUN_004d5c70(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x8000d8));
  return;
}


/* FUN_004d5c80 @ 004d5c80  kind=gamemisc  attributed-by=none  size=166 */

float10 __thiscall FUN_004d5c80(void *param_1,uint *param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = __alldiv(param_2[4],param_2[5],0x10000,0);
  uVar4 = __alldiv(param_2[2],param_2[3],0x10000,0);
  uVar5 = __alldiv(*param_2,param_2[1],0x10000,0);
  pbVar1 = FUN_00405fd0(param_1,(uint)uVar5,(uint)uVar4,(int)uVar3,0);
  bVar2 = pbVar1[3] & 0x1f;
  if (bVar2 == 0xd) {
    bVar2 = 0xff;
  }
  else if (((pbVar1[3] & 0x1f) == 0) || (bVar2 == 2)) {
    bVar2 = *pbVar1;
    if (bVar2 < 5) {
      bVar2 = 5;
    }
  }
  else {
    bVar2 = 0;
  }
  return (float10)((float)bVar2 / 255.0);
}


/* FUN_004d61c0 @ 004d61c0  kind=gamemisc  attributed-by=none  size=395 */

void __thiscall FUN_004d61c0(void *this,uint *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint *local_10;
  int local_c;
  int local_8;
  
  FUN_00530600((void *)((int)this + 4),&local_8,param_1);
  if (local_8 == *(int *)((int)this + 4)) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(local_8 + 0x18);
  }
  FUN_00530600((void *)((int)this + 4),&local_8,param_1 + 2);
  if (local_8 == *(int *)((int)this + 4)) {
    local_8 = 0;
  }
  else {
    local_8 = *(int *)(local_8 + 0x18);
  }
  if ((iVar3 != 0) && (local_8 != 0)) {
    if (local_8 == *(int *)((int)this + 0xb8)) {
      local_10 = (uint *)(*(int *)((int)this + 0xb8) + 0x11c8);
      FUN_00530600((void *)((int)this + 4),&local_c,local_10);
      if ((local_c != *(int *)((int)this + 4)) && (*(int *)(local_c + 0x18) != 0)) {
        uVar2 = FUN_00405420(this,local_10);
        *(undefined4 *)(uVar2 + 0x16c) = 0;
        uVar2 = FUN_00405420(this,(uint *)(*(int *)((int)this + 0xb8) + 0x11c8));
        FUN_004f8520((int *)(uVar2 + 0x13a4));
      }
      iVar1 = *(int *)((int)this + 0xb8);
      *(undefined4 *)(iVar1 + 0x11d0) = 0;
      *(undefined4 *)(iVar1 + 0x11d4) = 0;
    }
    iVar1 = *(int *)((int)this + 0xb8);
    if (((iVar1 != 0) && (iVar1 == iVar3)) && (*(char *)(local_8 + 0x60) == '\x01')) {
      *(int *)(iVar1 + 0x194) = *(int *)(iVar1 + 0x194) + param_1[5];
      FUN_00412550(*(int *)((int)this + 0xb8));
    }
    if (*(char *)((int)this + 0xb4) == '\0') {
      FUN_00530600((void *)((int)this + 4),(int *)&local_10,(uint *)(iVar3 + 0x11c8));
      if (((local_10 != *(uint **)((int)this + 4)) && (uVar2 = local_10[6], uVar2 != 0)) &&
         (0.0 < *(float *)(uVar2 + 0x16c))) {
        *(int *)(uVar2 + 0x194) = *(int *)(uVar2 + 0x194) + param_1[5];
        FUN_00412550(uVar2);
        *(undefined4 *)(iVar3 + 0x1024) = *(undefined4 *)(uVar2 + 0x194);
        *(undefined2 *)(iVar3 + 0x1030) = *(undefined2 *)(uVar2 + 400);
        FUN_00402a70((void *)(iVar3 + 0x1d48),(undefined1 *)(iVar3 + 0x1020));
      }
    }
  }
  return;
}


/* FUN_004d65d0 @ 004d65d0  kind=gamemisc  attributed-by=none  size=67 */

void __thiscall FUN_004d65d0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)this;
  iVar2 = FUN_00420380(puVar1,(undefined4 *)puVar1[1],param_1);
  if (*(int *)((int)this + 4) == 0xdd67c7) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  puVar1[1] = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}


/* FUN_004d6620 @ 004d6620  kind=gamemisc  attributed-by=none  size=67 */

void __thiscall FUN_004d6620(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)this;
  iVar2 = FUN_0052dfb0(puVar1,(undefined4 *)puVar1[1],param_1);
  if (*(int *)((int)this + 4) == 0x15555554) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  puVar1[1] = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}


/* FUN_004d7960 @ 004d7960  kind=gamemisc  attributed-by=none  size=131 */

void __thiscall FUN_004d7960(void *this,int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  if ((((-1 < param_1) && (-1 < param_2)) && (param_1 < 0x400)) && (param_2 < 0x400)) {
    piVar1 = (int *)((int)this + (param_1 * 0x400 + 0x2f + param_2) * 4);
    puVar2 = (undefined4 *)*piVar1;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_004d7c50(this,param_1,param_2);
      EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x8000c0));
      EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x8000d8));
      *piVar1 = 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x8000d8));
      LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x8000c0));
      (**(code **)*puVar2)(1);
    }
  }
  return;
}


/* FUN_004d79f0 @ 004d79f0  kind=gamemisc  attributed-by=none  size=230 */

void __thiscall FUN_004d79f0(void *this,uint param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  iVar2 = (int)(param_1 + ((int)param_1 >> 0x1f & 0x3fU)) >> 6;
  iVar4 = (int)(((int)param_2 >> 0x1f & 0x3fU) + param_2) >> 6;
  if ((((-1 < iVar2) && (-1 < iVar4)) && (iVar2 < 0x400)) &&
     ((iVar4 < 0x400 &&
      (iVar2 = *(int *)((int)this + (iVar2 * 0x400 + iVar4) * 4 + 0xbc), iVar2 != 0)))) {
    uVar6 = param_1 & 0x8000003f;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xffffffc0) + 1;
    }
    uVar5 = param_2 & 0x8000003f;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xffffffc0) + 1;
    }
    piVar3 = (int *)(iVar2 + (uVar6 * 0x40 + uVar5) * 4 + 0x10018);
    puVar1 = (undefined4 *)*piVar3;
    if (puVar1 != (undefined4 *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x8000d8));
      EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x8000c0));
      *piVar3 = 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x8000c0));
      LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x8000d8));
      if (*(char *)((int)this + 0xb4) == '\0') {
        FUN_004d81b0(this,(int)puVar1);
      }
      (**(code **)*puVar1)(1);
    }
  }
  return;
}


