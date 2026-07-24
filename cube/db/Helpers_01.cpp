// Helpers_01 (db) -- cube. 171 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Helpers_01.h"

/* FUN_00561050 @ 00561050  kind=gamemisc  attributed-by=caller-vote  size=74 */

void FUN_00561050(int param_1)

{
  int *piVar1;
  int iVar2;
  
  *(ushort *)(param_1 + 0x18) = *(ushort *)(param_1 + 0x18) & 0xffdf;
  if ((*(ushort *)(param_1 + 0x18) & 2) == 0) {
    *(ushort *)(param_1 + 0x18) = *(ushort *)(param_1 + 0x18) | 2;
    piVar1 = *(int **)(param_1 + 0x1c);
    iVar2 = *piVar1;
    *(int *)(param_1 + 0x20) = iVar2;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x24) = param_1;
    }
    *piVar1 = param_1;
    if (piVar1[1] == 0) {
      piVar1[1] = param_1;
    }
    if ((piVar1[2] == 0) && ((*(byte *)(param_1 + 0x18) & 4) == 0)) {
      piVar1[2] = param_1;
    }
  }
  return;
}


/* FUN_005610a0 @ 005610a0  kind=gamemisc  attributed-by=caller-vote  size=101 */

void FUN_005610a0(undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  (*DAT_00766668)(*(undefined4 *)(param_1[7] + 0x28),*param_1,param_1[5],param_2);
  param_1[5] = param_2;
  if (((*(ushort *)(param_1 + 6) & 2) != 0) && ((*(ushort *)(param_1 + 6) & 4) != 0)) {
    FUN_00544570(param_1);
    piVar1 = (int *)param_1[7];
    iVar2 = *piVar1;
    param_1[8] = iVar2;
    if (iVar2 != 0) {
      *(undefined4 **)(iVar2 + 0x24) = param_1;
    }
    *piVar1 = (int)param_1;
    if (piVar1[1] == 0) {
      piVar1[1] = (int)param_1;
    }
    if ((piVar1[2] == 0) && ((*(byte *)(param_1 + 6) & 4) == 0)) {
      piVar1[2] = (int)param_1;
    }
  }
  return;
}


/* FUN_00561110 @ 00561110  kind=gamemisc  attributed-by=caller-vote  size=27 */

undefined4 FUN_00561110(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00561121. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*DAT_0076665c)();
    return uVar1;
  }
  return 0;
}


/* FUN_00561130 @ 00561130  kind=gamemisc  attributed-by=caller-vote  size=119 */

void FUN_00561130(undefined4 *param_1)

{
  short *psVar1;
  int iVar2;
  int *piVar3;
  
  psVar1 = (short *)((int)param_1 + 0x1a);
  *psVar1 = *psVar1 + -1;
  if (*psVar1 == 0) {
    *(int *)(param_1[7] + 0xc) = *(int *)(param_1[7] + 0xc) + -1;
    if ((*(byte *)(param_1 + 6) & 2) == 0) {
      iVar2 = param_1[7];
      if (*(int *)(iVar2 + 0x1c) != 0) {
        if (param_1[5] == 1) {
          *(undefined4 *)(iVar2 + 0x2c) = 0;
        }
        (*DAT_00766664)(*(undefined4 *)(iVar2 + 0x28),*param_1,0);
        return;
      }
    }
    else {
      FUN_00544570(param_1);
      piVar3 = (int *)param_1[7];
      iVar2 = *piVar3;
      param_1[8] = iVar2;
      if (iVar2 != 0) {
        *(undefined4 **)(iVar2 + 0x24) = param_1;
      }
      *piVar3 = (int)param_1;
      if (piVar3[1] == 0) {
        piVar3[1] = (int)param_1;
      }
      if ((piVar3[2] == 0) && ((*(byte *)(param_1 + 6) & 4) == 0)) {
        piVar3[2] = (int)param_1;
      }
    }
  }
  return;
}


/* FUN_005611b0 @ 005611b0  kind=gamemisc  attributed-by=caller-vote  size=170 */

void FUN_005611b0(undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_1[10] != 0) {
    puVar1 = (undefined4 *)*param_1;
    while (puVar3 = puVar1, puVar3 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)puVar3[8];
      if ((param_2 < (uint)puVar3[5]) && ((*(byte *)(puVar3 + 6) & 2) != 0)) {
        FUN_00544570(puVar3);
        *(ushort *)(puVar3 + 6) = *(ushort *)(puVar3 + 6) & 0xfff9;
        if ((*(short *)((int)puVar3 + 0x1a) == 0) &&
           (iVar2 = puVar3[7], *(int *)(iVar2 + 0x1c) != 0)) {
          if (puVar3[5] == 1) {
            *(undefined4 *)(iVar2 + 0x2c) = 0;
          }
          (*DAT_00766664)(*(undefined4 *)(iVar2 + 0x28),*puVar3,0);
        }
      }
    }
    if ((param_2 == 0) && (param_1[0xb] != 0)) {
      memset(*(void **)(param_1[0xb] + 4),0,param_1[5]);
      param_2 = 1;
    }
    (*DAT_0076666c)(param_1[10],param_2 + 1);
  }
  return;
}


/* FUN_00561270 @ 00561270  kind=gamemisc  attributed-by=caller-vote  size=7930 */

void FUN_00561270(int *param_1,undefined4 param_2,int *param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  ushort uVar2;
  byte *pbVar3;
  char cVar4;
  undefined1 uVar5;
  int *_Dst;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined *puVar14;
  int iVar15;
  int iVar16;
  int *piVar17;
  undefined1 *puVar18;
  uint uVar19;
  undefined4 *puVar20;
  undefined **ppuVar21;
  char *pcVar22;
  undefined8 uVar23;
  int local_58;
  byte *local_54;
  char *local_50;
  undefined4 local_4c;
  int local_48;
  uint local_44;
  int local_40;
  undefined4 local_3c;
  int *local_38;
  undefined4 *local_34;
  int *local_30;
  int *local_2c;
  int *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  byte *local_14;
  char *local_10;
  undefined4 *local_c;
  int *local_8;
  
  piVar11 = param_1;
  piVar9 = (int *)*param_1;
  local_8 = piVar9;
  _Dst = (int *)FUN_00552230(piVar9,0xc0);
  if (_Dst == (int *)0x0) {
    _Dst = (int *)0x0;
    local_30 = (int *)0x0;
  }
  else {
    local_30 = _Dst;
    memset(_Dst,0,0xc0);
    *_Dst = (int)piVar9;
    if (piVar9[1] != 0) {
      *(int **)(piVar9[1] + 0x38) = _Dst;
    }
    _Dst[0xf] = piVar9[1];
    _Dst[0xe] = 0;
    piVar9[1] = (int)_Dst;
    _Dst[0xc] = 0x26bceaa5;
  }
  piVar9 = param_3;
  piVar11[2] = (int)_Dst;
  if (_Dst == (int *)0x0) {
    return;
  }
  _Dst[0x18] = _Dst[0x18] | 0x40;
  piVar11[0x13] = 2;
  local_18 = FUN_00568810(piVar11,param_2,param_3,&local_38);
  if (local_18 < 0) {
    return;
  }
  local_c = (undefined4 *)(local_18 * 0x10 + local_8[4]);
  if ((local_18 == 1) && (iVar6 = FUN_0055e870(piVar11), iVar6 != 0)) {
    return;
  }
  piVar11 = local_8;
  local_14 = (byte *)FUN_0055e3f0(local_8,local_38);
  if (local_14 == (byte *)0x0) {
    return;
  }
  if (param_5 == 0) {
    local_10 = (char *)FUN_0055e3f0(piVar11,param_4);
  }
  else {
    local_10 = (char *)FUN_0055d980(piVar11,&DAT_00718ac8);
  }
  if (piVar9[1] == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *local_c;
  }
  iVar6 = FUN_0054ab50(param_1,0x13,local_14,local_10,uVar8);
  if (iVar6 != 0) goto LAB_0056314c;
  local_54 = local_14;
  local_50 = local_10;
  local_4c = 0;
  local_8[0x6d] = 0;
  local_58 = iVar6;
  local_38 = (int *)FUN_00522940(local_8,uVar8,0xe,&local_58);
  if (local_38 == (int *)0x0) {
    puVar20 = local_c;
    if (local_58 != 0) {
      param_1[0x13] = param_1[0x13] + 1;
      iVar6 = param_1[0x13];
      FUN_0056bf50(_Dst,0x5e,0,iVar6,0,local_58,0);
      FUN_005762b0(_Dst,1);
      FUN_00576270(_Dst,0,0,"result",0);
      FUN_0056be90(_Dst,0x10,iVar6,1);
      FUN_00524410(local_58);
      puVar20 = local_c;
    }
  }
  else if (local_38 == (int *)0xc) {
    iVar6 = FUN_0057a2c0(local_14,"default_cache_size");
    piVar11 = param_1;
    if (iVar6 == 0) {
      iVar6 = FUN_005637c0(param_1);
      if (iVar6 != 0) goto LAB_0056314c;
      FUN_00576ba0(_Dst,local_18);
      if (local_10 == (char *)0x0) {
        FUN_005762b0(_Dst,1);
        FUN_00576270(_Dst,0,0,"cache_size",0);
        piVar11 = piVar11 + 0x13;
        *piVar11 = *piVar11 + 2;
        iVar7 = FUN_0056c070(_Dst,8,&DAT_00714a5c);
        iVar6 = local_18;
        FUN_0056c2c0(_Dst,iVar7,local_18);
        FUN_0056c2c0(_Dst,iVar7 + 1,iVar6);
        FUN_0056c2c0(_Dst,iVar7 + 6,2000);
        puVar20 = local_c;
      }
      else {
        uVar8 = FUN_0054a970(local_10);
        uVar8 = FUN_00548fe0(uVar8);
        FUN_0054bc80(piVar11,0,local_18);
        FUN_0056be90(_Dst,7,uVar8,1);
        FUN_0056bef0(_Dst,0x25,local_18,3,1);
        puVar20 = local_c;
        *(undefined4 *)(local_c[3] + 0x50) = uVar8;
        FUN_0054f1d0(local_c[1],*(undefined4 *)(local_c[3] + 0x50));
      }
    }
    else {
      iVar6 = FUN_0057a2c0(local_14,"page_size");
      puVar20 = local_c;
      if (iVar6 == 0) {
        iVar6 = local_c[1];
        if (local_10 == (char *)0x0) {
          if (iVar6 == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = *(int *)(*(int *)(iVar6 + 4) + 0x20);
          }
          FUN_00546df0(param_1,"page_size",iVar6,iVar6 >> 0x1f);
        }
        else {
          iVar7 = FUN_0054a970(local_10);
          local_8[0x10] = iVar7;
          iVar6 = FUN_0054f2a0(iVar6,iVar7,0xffffffff,0);
          if (iVar6 == 7) {
            *(undefined1 *)(local_8 + 0xe) = 1;
          }
        }
      }
      else {
        iVar6 = FUN_0057a2c0(local_14,"secure_delete");
        if (iVar6 == 0) {
          uVar19 = 0xffffffff;
          local_38 = (int *)local_c[1];
          if (local_10 != (char *)0x0) {
            uVar19 = FUN_0055a000(local_10,0);
            uVar19 = uVar19 & 0xff;
          }
          if (((piVar9[1] == 0) && (-1 < (int)uVar19)) && (iVar6 = 0, 0 < local_8[5])) {
            iVar7 = 0;
            do {
              FUN_0054f0e0(*(undefined4 *)(iVar7 + 4 + local_8[4]),uVar19);
              iVar6 = iVar6 + 1;
              iVar7 = iVar7 + 0x10;
            } while (iVar6 < local_8[5]);
          }
          iVar6 = FUN_0054f0e0(local_38,uVar19);
          FUN_00546df0(param_1,"secure_delete",iVar6,iVar6 >> 0x1f);
          puVar20 = local_c;
        }
        else {
          iVar6 = FUN_0057a2c0(local_14,"page_count");
          if ((iVar6 == 0) || (iVar6 = FUN_0057a2c0(local_14,"max_page_count"), iVar6 == 0)) {
            piVar9 = param_1;
            iVar6 = FUN_005637c0(param_1);
            if (iVar6 != 0) goto LAB_0056314c;
            FUN_00550aa0(piVar9,local_18);
            piVar9[0x13] = piVar9[0x13] + 1;
            iVar6 = piVar9[0x13];
            if ((&DAT_007120d8)[*local_14] == 'p') {
              FUN_0056be90(_Dst,0x92,local_18,iVar6);
            }
            else {
              uVar8 = FUN_0054a970(local_10);
              uVar8 = FUN_00548fe0(uVar8);
              FUN_0056bef0(_Dst,0x93,local_18,iVar6,uVar8);
            }
            FUN_0056be90(_Dst,0x10,iVar6,1);
            FUN_005762b0(_Dst,1);
            FUN_00576270(_Dst,0,0,local_14,0xffffffff);
            puVar20 = local_c;
          }
          else {
            iVar6 = FUN_0057a2c0(local_14,"locking_mode");
            if (iVar6 == 0) {
              param_1 = (int *)FUN_0053aa70(local_10);
              piVar11 = local_8;
              if (piVar9[1] == 0) {
                if (param_1 != (int *)0xffffffff) {
                  iVar6 = 2;
                  if (2 < local_8[5]) {
                    iVar7 = 0x20;
                    do {
                      FUN_0055f310(**(undefined4 **)(*(int *)(iVar7 + 4 + piVar11[4]) + 4),param_1);
                      iVar6 = iVar6 + 1;
                      iVar7 = iVar7 + 0x10;
                      _Dst = local_30;
                    } while (iVar6 < piVar11[5]);
                  }
                  *(char *)((int)local_8 + 0x39) = (char)param_1;
                  goto LAB_0056170a;
                }
                uVar19 = (uint)*(byte *)((int)local_8 + 0x39);
                puVar20 = local_c;
              }
              else {
LAB_0056170a:
                puVar20 = local_c;
                uVar19 = FUN_0055f310(**(undefined4 **)(local_c[1] + 4),param_1);
              }
              pcVar22 = "exclusive";
              if (uVar19 != 1) {
                pcVar22 = "normal";
              }
              FUN_005762b0(_Dst,1);
              FUN_00576270(_Dst,0,0,"locking_mode",0);
              FUN_0056bf50(_Dst,0x5e,0,1,0,pcVar22,0);
              FUN_0056be90(_Dst,0x10,1,1);
            }
            else {
              iVar6 = FUN_0057a2c0(local_14,"journal_mode");
              if (iVar6 == 0) {
                iVar6 = FUN_005637c0(param_1);
                if (iVar6 != 0) goto LAB_0056314c;
                FUN_005762b0(_Dst,1);
                FUN_00576270(_Dst,0,0,"journal_mode",0);
                if (local_10 != (char *)0x0) {
                  uVar23 = FUN_00568070(local_10);
                  iVar6 = 0;
                  while( true ) {
                    param_1 = (int *)uVar23;
                    if ((iVar6 == 6) || ((&PTR_s_delete_0071347c)[iVar6] == (undefined *)0x0))
                    break;
                    iVar7 = FUN_005259c0((int)((ulonglong)uVar23 >> 0x20),
                                         (&PTR_s_delete_0071347c)[iVar6],param_1);
                    uVar23 = CONCAT44(local_10,param_1);
                    if (iVar7 == 0) {
                      if (iVar6 == -1) goto LAB_00561876;
                      goto LAB_00561808;
                    }
                    iVar6 = iVar6 + 1;
                  }
                }
                iVar6 = -1;
LAB_00561876:
                if (piVar9[1] == 0) {
                  local_18 = 0;
                  piVar9[1] = 1;
                }
LAB_00561808:
                iVar7 = local_8[5] + -1;
                if (-1 < iVar7) {
                  param_1 = (int *)(iVar7 * 0x10);
                  do {
                    if ((*(int *)((int)param_1 + local_8[4] + 4) != 0) &&
                       ((iVar7 == local_18 || (param_3[1] == 0)))) {
                      FUN_00576ba0(_Dst,iVar7);
                      FUN_0056bef0(_Dst,0x7e,iVar7,1,iVar6);
                    }
                    param_1 = param_1 + -4;
                    iVar7 = iVar7 + -1;
                  } while (-1 < iVar7);
                }
                FUN_0056be90(_Dst,0x10,1,1);
                puVar20 = local_c;
              }
              else {
                iVar6 = FUN_0057a2c0(local_14,"journal_size_limit");
                puVar20 = local_c;
                if (iVar6 == 0) {
                  local_44 = 0xffffffff;
                  uVar8 = **(undefined4 **)(local_c[1] + 4);
                  local_48 = -2;
                  iVar6 = -2;
                  uVar19 = 0xffffffff;
                  if (((local_10 != (char *)0x0) &&
                      (FUN_0054a9a0(local_10,&local_48,1000000,1), iVar6 = local_48,
                      uVar19 = local_44, 0x7fffffff < local_44)) &&
                     (((int)local_44 < -1 || (local_48 != -1)))) {
                    iVar6 = -1;
                    uVar19 = 0xffffffff;
                  }
                  uVar23 = FUN_0055f2b0(uVar8,iVar6,uVar19);
                  FUN_00546df0(param_1,"journal_size_limit",uVar23);
                }
                else {
                  iVar6 = FUN_0057a2c0(local_14,"auto_vacuum");
                  piVar11 = param_1;
                  if (iVar6 == 0) {
                    iVar6 = local_c[1];
                    iVar7 = FUN_005637c0(param_1);
                    if (iVar7 != 0) goto LAB_0056314c;
                    if (local_10 == (char *)0x0) {
                      if (iVar6 == 0) {
                        iVar6 = 0;
                      }
                      else {
                        iVar6 = FUN_0054d4a0(iVar6);
                      }
                      FUN_00546df0(piVar11,"auto_vacuum",iVar6,iVar6 >> 0x1f);
                      puVar20 = local_c;
                    }
                    else {
                      piVar9 = (int *)FUN_0053a730(local_10);
                      *(char *)((int)local_8 + 0x3a) = (char)piVar9;
                      puVar20 = local_c;
                      param_1 = piVar9;
                      if (((-1 < (int)piVar9) &&
                          (iVar6 = FUN_0054f150(iVar6,piVar9), puVar20 = local_c, iVar6 == 0)) &&
                         ((piVar9 == (int *)0x1 || (piVar9 == (int *)0x2)))) {
                        iVar7 = FUN_0056c070(_Dst,6,&DAT_007152b0);
                        iVar6 = local_18;
                        FUN_0056c2c0(_Dst,iVar7,local_18);
                        FUN_0056c2c0(_Dst,iVar7 + 1,iVar6);
                        FUN_0056c2e0(_Dst,iVar7 + 2,iVar7 + 4);
                        FUN_0056c2c0(_Dst,iVar7 + 4,(int)param_1 + -1);
                        iVar6 = local_18;
                        FUN_0056c2c0(_Dst,iVar7 + 5,local_18);
                        FUN_00576ba0(_Dst,iVar6);
                        puVar20 = local_c;
                      }
                    }
                  }
                  else {
                    iVar6 = FUN_0057a2c0(local_14,"incremental_vacuum");
                    piVar11 = param_1;
                    if (iVar6 == 0) {
                      iVar6 = FUN_005637c0(param_1);
                      if (iVar6 != 0) goto LAB_0056314c;
                      if (((local_10 == (char *)0x0) ||
                          (iVar6 = FUN_0055a0e0(local_10,&param_1), iVar6 == 0)) ||
                         (piVar9 = param_1, (int)param_1 < 1)) {
                        piVar9 = (int *)0x7fffffff;
                      }
                      FUN_0054bc80(piVar11,0,local_18);
                      FUN_0056be90(_Dst,7,piVar9,1);
                      uVar8 = FUN_0056be30(_Dst,0x80,local_18);
                      FUN_0056be30(_Dst,0x10,1);
                      FUN_0056be90(_Dst,0x14,1,0xffffffff);
                      FUN_0056be90(_Dst,0x78,1,uVar8);
                      FUN_00573d80(_Dst,uVar8);
                      puVar20 = local_c;
                    }
                    else {
                      iVar6 = FUN_0057a2c0(local_14,"cache_size");
                      piVar11 = param_1;
                      if (iVar6 == 0) {
                        iVar6 = FUN_005637c0(param_1);
                        if (iVar6 != 0) goto LAB_0056314c;
                        if (local_10 == (char *)0x0) {
                          FUN_00546df0(piVar11,"cache_size",*(int *)(local_c[3] + 0x50),
                                       *(int *)(local_c[3] + 0x50) >> 0x1f);
                          puVar20 = local_c;
                        }
                        else {
                          uVar8 = FUN_0054a970(local_10);
                          puVar20 = local_c;
                          *(undefined4 *)(local_c[3] + 0x50) = uVar8;
                          FUN_0054f1d0(local_c[1],*(undefined4 *)(local_c[3] + 0x50));
                        }
                      }
                      else {
                        iVar6 = FUN_0057a2c0(local_14,"temp_store");
                        if (iVar6 == 0) {
                          if (local_10 == (char *)0x0) {
                            FUN_00546df0(param_1,"temp_store",*(undefined1 *)((int)local_8 + 0x37),0
                                        );
                            puVar20 = local_c;
                          }
                          else {
                            FUN_0052f200(param_1,local_10);
                            puVar20 = local_c;
                          }
                        }
                        else {
                          iVar6 = FUN_0057a2c0(local_14,"temp_store_directory");
                          pcVar22 = local_10;
                          if (iVar6 == 0) {
                            if (local_10 == (char *)0x0) {
                              puVar20 = local_c;
                              if (DAT_0076b358 != 0) {
                                FUN_005762b0(_Dst,1);
                                FUN_00576270(_Dst,0,0,"temp_store_directory",0);
                                FUN_0056bf50(_Dst,0x5e,0,1,0,DAT_0076b358,0);
                                FUN_0056be90(_Dst,0x10,1,1);
                                puVar20 = local_c;
                              }
                            }
                            else {
                              if ((*local_10 != '\0') &&
                                 ((iVar6 = (**(code **)(*local_8 + 0x20))
                                                     (*local_8,local_10,1,&local_38), iVar6 != 0 ||
                                  (local_38 == (int *)0x0)))) {
LAB_00561c03:
                                FUN_00553950(param_1,"not a writable directory");
                                goto LAB_0056314c;
                              }
                              if (*(byte *)((int)local_8 + 0x37) < 2) {
                                FUN_0053bfb0(param_1);
                              }
                              FUN_00524410(DAT_0076b358);
                              if (*pcVar22 == '\0') {
                                DAT_0076b358 = 0;
                                puVar20 = local_c;
                              }
                              else {
                                DAT_0076b358 = FUN_00523d10(&DAT_00716900,pcVar22);
                                puVar20 = local_c;
                              }
                            }
                          }
                          else {
                            iVar6 = FUN_0057a2c0(local_14,"data_store_directory");
                            pcVar22 = local_10;
                            if (iVar6 == 0) {
                              if (local_10 == (char *)0x0) {
                                puVar20 = local_c;
                                if (DAT_0076b35c != 0) {
                                  FUN_005762b0(_Dst,1);
                                  FUN_00576270(_Dst,0,0,"data_store_directory",0);
                                  FUN_0056bf50(_Dst,0x5e,0,1,0,DAT_0076b35c,0);
                                  FUN_0056be90(_Dst,0x10,1,1);
                                  puVar20 = local_c;
                                }
                              }
                              else {
                                if ((*local_10 != '\0') &&
                                   ((iVar6 = (**(code **)(*local_8 + 0x20))
                                                       (*local_8,local_10,1,&local_38), iVar6 != 0
                                    || (local_38 == (int *)0x0)))) goto LAB_00561c03;
                                FUN_00524410(DAT_0076b35c);
                                if (*pcVar22 == '\0') {
                                  DAT_0076b35c = 0;
                                  puVar20 = local_c;
                                }
                                else {
                                  DAT_0076b35c = FUN_00523d10(&DAT_00716900,pcVar22);
                                  puVar20 = local_c;
                                }
                              }
                            }
                            else {
                              iVar6 = FUN_0057a2c0(local_14,"synchronous");
                              piVar11 = param_1;
                              if (iVar6 == 0) {
                                iVar6 = FUN_005637c0(param_1);
                                if (iVar6 != 0) goto LAB_0056314c;
                                if (local_10 == (char *)0x0) {
                                  iVar6 = *(byte *)((int)local_c + 9) - 1;
                                  FUN_00546df0(piVar11,"synchronous",iVar6,iVar6 >> 0x1f);
                                  puVar20 = local_c;
                                }
                                else if (*(char *)((int)local_8 + 0x36) == '\0') {
                                  FUN_00553950(piVar11,
                                               "Safety level may not be changed inside a transaction"
                                              );
                                  puVar20 = local_c;
                                }
                                else {
                                  cVar4 = FUN_0053b110(local_10,0,1);
                                  *(char *)((int)local_c + 9) = cVar4 + '\x01';
                                  puVar20 = local_c;
                                }
                              }
                              else {
                                iVar6 = FUN_00538c40(param_1,local_14,local_10);
                                puVar20 = local_c;
                                if (iVar6 == 0) {
                                  iVar6 = FUN_0057a2c0(local_14,"table_info");
                                  if ((iVar6 == 0) && (local_10 != (char *)0x0)) {
                                    iVar6 = FUN_005637c0(param_1);
                                    if (iVar6 != 0) goto LAB_0056314c;
                                    iVar6 = FUN_005572d0(local_8,local_10,uVar8);
                                    puVar20 = local_c;
                                    local_24 = iVar6;
                                    if (iVar6 != 0) {
                                      local_28 = (int *)0x0;
                                      FUN_005762b0(_Dst,6);
                                      piVar9 = param_1;
                                      param_1[0x13] = 6;
                                      FUN_00576270(_Dst,0,0,&DAT_00718c28,0);
                                      FUN_00576270(_Dst,1,0,&DAT_00718c2c,0);
                                      FUN_00576270(_Dst,2,0,&DAT_00718c34,0);
                                      FUN_00576270(_Dst,3,0,"notnull",0);
                                      FUN_00576270(_Dst,4,0,"dflt_value",0);
                                      FUN_00576270(_Dst,5,0,&DAT_00718c50,0);
                                      FUN_00576bd0(piVar9,iVar6);
                                      puVar10 = *(undefined4 **)(iVar6 + 4);
                                      iVar6 = 0;
                                      puVar20 = local_c;
                                      if (0 < *(short *)(local_24 + 0x26)) {
                                        do {
                                          if ((*(byte *)((int)puVar10 + 0x16) & 2) == 0) {
                                            FUN_0056be90(_Dst,7,iVar6 - (int)local_28,1);
                                            FUN_0056bf50(_Dst,0x5e,0,2,0,*puVar10,0);
                                            puVar18 = &DAT_006fc918;
                                            if ((undefined1 *)puVar10[3] != (undefined1 *)0x0) {
                                              puVar18 = (undefined1 *)puVar10[3];
                                            }
                                            FUN_0056bf50(_Dst,0x5e,0,3,0,puVar18,0);
                                            FUN_0056be90(_Dst,7,*(char *)(puVar10 + 5) != '\0',4);
                                            if (puVar10[2] == 0) {
                                              FUN_0056be90(_Dst,10,0,5);
                                            }
                                            else {
                                              FUN_0056bf50(_Dst,0x5e,0,5,0,puVar10[2],0);
                                            }
                                            FUN_0056be90(_Dst,7,*(ushort *)((int)puVar10 + 0x16) & 1
                                                         ,6);
                                            FUN_0056be90(_Dst,0x10,1,6);
                                          }
                                          else {
                                            local_28 = (int *)((int)local_28 + 1);
                                          }
                                          iVar6 = iVar6 + 1;
                                          puVar10 = puVar10 + 6;
                                          puVar20 = local_c;
                                        } while (iVar6 < *(short *)(local_24 + 0x26));
                                      }
                                    }
                                  }
                                  else {
                                    iVar6 = FUN_0057a2c0(local_14,"index_info");
                                    if ((iVar6 == 0) && (local_10 != (char *)0x0)) {
                                      iVar6 = FUN_005637c0(param_1);
                                      if (iVar6 != 0) goto LAB_0056314c;
                                      puVar10 = (undefined4 *)FUN_00557190(local_8,local_10,uVar8);
                                      puVar20 = local_c;
                                      local_34 = puVar10;
                                      if (puVar10 != (undefined4 *)0x0) {
                                        local_38 = (int *)puVar10[3];
                                        FUN_005762b0(_Dst,3);
                                        param_1[0x13] = 3;
                                        FUN_00576270(_Dst,0,0,"seqno",0);
                                        FUN_00576270(_Dst,1,0,&DAT_00718c28,0);
                                        FUN_00576270(_Dst,2,0,&DAT_00718c2c,0);
                                        puVar20 = local_c;
                                        if (0 < (int)puVar10[9]) {
                                          iVar6 = 0;
                                          do {
                                            iVar7 = *(int *)(puVar10[1] + iVar6 * 4);
                                            FUN_0056be90(_Dst,7,iVar6,1);
                                            FUN_0056be90(_Dst,7,iVar7,2);
                                            FUN_0056bf50(_Dst,0x5e,0,3,0,
                                                         *(undefined4 *)(local_38[1] + iVar7 * 0x18)
                                                         ,0);
                                            FUN_0056be90(_Dst,0x10,1,3);
                                            iVar6 = iVar6 + 1;
                                            puVar20 = local_c;
                                            puVar10 = local_34;
                                          } while (iVar6 < (int)local_34[9]);
                                        }
                                      }
                                    }
                                    else {
                                      iVar6 = FUN_0057a2c0(local_14,"index_list");
                                      piVar11 = param_1;
                                      if ((iVar6 == 0) && (local_10 != (char *)0x0)) {
                                        iVar6 = FUN_005637c0(param_1);
                                        if (iVar6 != 0) goto LAB_0056314c;
                                        iVar6 = FUN_005572d0(local_8,local_10,uVar8);
                                        puVar20 = local_c;
                                        if (iVar6 != 0) {
                                          uVar8 = FUN_0055ab80(piVar11);
                                          puVar10 = *(undefined4 **)(iVar6 + 8);
                                          puVar20 = local_c;
                                          if (puVar10 != (undefined4 *)0x0) {
                                            iVar6 = 0;
                                            FUN_005762b0(uVar8,3);
                                            param_1[0x13] = 3;
                                            FUN_00576270(uVar8,0,0,&DAT_00718c74,0);
                                            FUN_00576270(uVar8,1,0,&DAT_00718c2c,0);
                                            FUN_00576270(uVar8,2,0,"unique",0);
                                            do {
                                              FUN_0056be90(uVar8,7,iVar6,1);
                                              FUN_0056bf50(uVar8,0x5e,0,2,0,*puVar10,0);
                                              FUN_0056be90(uVar8,7,*(char *)(puVar10 + 0xb) != '\0',
                                                           3);
                                              FUN_0056be90(uVar8,0x10,1,3);
                                              puVar10 = (undefined4 *)puVar10[5];
                                              iVar6 = iVar6 + 1;
                                              puVar20 = local_c;
                                            } while (puVar10 != (undefined4 *)0x0);
                                          }
                                        }
                                      }
                                      else {
                                        iVar6 = FUN_0057a2c0(local_14,"database_list");
                                        piVar11 = param_1;
                                        if (iVar6 == 0) {
                                          iVar6 = FUN_005637c0(param_1);
                                          if (iVar6 != 0) goto LAB_0056314c;
                                          FUN_005762b0(_Dst,3);
                                          piVar11[0x13] = 3;
                                          FUN_00576270(_Dst,0,0,&DAT_00718c74,0);
                                          FUN_00576270(_Dst,1,0,&DAT_00718c2c,0);
                                          FUN_00576270(_Dst,2,0,&DAT_00718a48,0);
                                          iVar6 = 0;
                                          puVar20 = local_c;
                                          if (0 < local_8[5]) {
                                            iVar7 = 0;
                                            do {
                                              if (*(int *)(iVar7 + 4 + local_8[4]) != 0) {
                                                FUN_0056be90(_Dst,7,iVar6,1);
                                                FUN_0056bf50(_Dst,0x5e,0,2,0,
                                                             *(undefined4 *)(iVar7 + local_8[4]),0);
                                                uVar8 = FUN_0054d4f0(*(undefined4 *)
                                                                      (iVar7 + 4 + local_8[4]),0);
                                                FUN_0056bf50(_Dst,0x5e,0,3,0,uVar8);
                                                FUN_0056be90(_Dst,0x10,1,3);
                                              }
                                              iVar6 = iVar6 + 1;
                                              iVar7 = iVar7 + 0x10;
                                              puVar20 = local_c;
                                            } while (iVar6 < local_8[5]);
                                          }
                                        }
                                        else {
                                          piVar11 = (int *)FUN_0057a2c0(local_14,"collation_list");
                                          if (piVar11 == (int *)0x0) {
                                            local_28 = piVar11;
                                            FUN_005762b0(_Dst,2);
                                            param_1[0x13] = 2;
                                            FUN_00576270(_Dst,0,0,&DAT_00718c74,0);
                                            FUN_00576270(_Dst,1,0,&DAT_00718c2c,0);
                                            for (puVar10 = (undefined4 *)local_8[0x69];
                                                puVar20 = local_c, puVar10 != (undefined4 *)0x0;
                                                puVar10 = (undefined4 *)*puVar10) {
                                              puVar20 = (undefined4 *)puVar10[2];
                                              FUN_0056be90(_Dst,7,local_28,1);
                                              local_28 = (int *)((int)local_28 + 1);
                                              FUN_0056bf50(_Dst,0x5e,0,2,0,*puVar20,0);
                                              FUN_0056be90(_Dst,0x10,1,2);
                                            }
                                          }
                                          else {
                                            iVar6 = FUN_0057a2c0(local_14,"foreign_key_list");
                                            pbVar3 = local_14;
                                            piVar11 = param_1;
                                            if ((iVar6 == 0) && (local_10 != (char *)0x0)) {
                                              iVar6 = FUN_005637c0(param_1);
                                              if (iVar6 != 0) goto LAB_0056314c;
                                              piVar9 = (int *)FUN_005572d0(local_8,local_10,uVar8);
                                              puVar20 = local_c;
                                              local_38 = piVar9;
                                              if (piVar9 != (int *)0x0) {
                                                iVar7 = FUN_0055ab80(piVar11);
                                                iVar6 = piVar9[4];
                                                puVar20 = local_c;
                                                local_20 = iVar6;
                                                local_18 = iVar7;
                                                if (iVar6 != 0) {
                                                  local_24 = 0;
                                                  FUN_005762b0(iVar7,8);
                                                  param_1[0x13] = 8;
                                                  FUN_00576270(iVar7,0,0,&DAT_00718cb4,0);
                                                  FUN_00576270(iVar7,1,0,&DAT_00718c74,0);
                                                  FUN_00576270(iVar7,2,0,"table",0);
                                                  FUN_00576270(iVar7,3,0,&DAT_0071580c,0);
                                                  FUN_00576270(iVar7,4,0,&DAT_00718cb8,0);
                                                  FUN_00576270(iVar7,5,0,"on_update",0);
                                                  FUN_00576270(iVar7,6,0,"on_delete",0);
                                                  FUN_00576270(iVar7,7,0,"match",0);
                                                  iVar7 = 0;
                                                  do {
                                                    param_1 = (int *)0x0;
                                                    if (0 < *(int *)(iVar6 + 0x14)) {
                                                      local_28 = (int *)(iVar6 + 0x24);
                                                      do {
                                                        iVar7 = local_28[1];
                                                        uVar8 = FUN_00528c60(*(undefined1 *)
                                                                              (iVar6 + 0x19));
                                                        uVar12 = FUN_00528c60(*(undefined1 *)
                                                                               (iVar6 + 0x1a));
                                                        FUN_0056be90(local_18,7,local_24,1);
                                                        FUN_0056be90(local_18,7,param_1,2);
                                                        FUN_0056bf50(local_18,0x5e,0,3,0,
                                                                     *(undefined4 *)(local_20 + 8),0
                                                                    );
                                                        FUN_0056bf50(local_18,0x5e,0,4,0,
                                                                     *(undefined4 *)
                                                                      (local_38[1] +
                                                                      *local_28 * 0x18),0);
                                                        iVar6 = local_18;
                                                        uVar13 = 10;
                                                        if (iVar7 != 0) {
                                                          uVar13 = 0x5e;
                                                        }
                                                        FUN_0056bf50(local_18,uVar13,0,5,0,iVar7,0);
                                                        FUN_0056bf50(iVar6,0x5e,0,6,0,uVar12,0);
                                                        FUN_0056bf50(iVar6,0x5e,0,7,0,uVar8,0);
                                                        FUN_0056bf50(iVar6,0x5e,0,8,0,&DAT_00718cdc,
                                                                     0);
                                                        FUN_0056be90(iVar6,0x10,1,8);
                                                        param_1 = (int *)((int)param_1 + 1);
                                                        local_28 = local_28 + 2;
                                                        iVar7 = local_24;
                                                        iVar6 = local_20;
                                                      } while ((int)param_1 <
                                                               *(int *)(local_20 + 0x14));
                                                    }
                                                    iVar6 = *(int *)(iVar6 + 4);
                                                    iVar7 = iVar7 + 1;
                                                    local_24 = iVar7;
                                                    local_20 = iVar6;
                                                  } while (iVar6 != 0);
                                                  local_20 = 0;
                                                  puVar20 = local_c;
                                                }
                                              }
                                            }
                                            else {
                                              iVar6 = FUN_0057a2c0(local_14,"case_sensitive_like");
                                              if (iVar6 == 0) {
                                                puVar20 = local_c;
                                                if (local_10 != (char *)0x0) {
                                                  uVar5 = FUN_0055a000(local_10,0);
                                                  FUN_00563d20(local_8,uVar5);
                                                  puVar20 = local_c;
                                                }
                                              }
                                              else {
                                                iVar6 = FUN_0057a2c0(pbVar3,"integrity_check");
                                                if ((iVar6 == 0) ||
                                                   (iVar6 = FUN_0057a2c0(pbVar3,"quick_check"),
                                                   iVar6 == 0)) {
                                                  piVar11 = param_1;
                                                  local_30 = (int *)(uint)((&DAT_007120d8)
                                                                           [*local_14] == 'q');
                                                  if (*piVar9 == 0) {
                                                    local_18 = -1;
                                                  }
                                                  iVar6 = FUN_005637c0(param_1);
                                                  if (iVar6 != 0) goto LAB_0056314c;
                                                  piVar11[0x13] = 6;
                                                  FUN_005762b0(_Dst,1);
                                                  FUN_00576270(_Dst,0,0,"integrity_check",0);
                                                  local_38 = (int *)0x64;
                                                  local_2c = (int *)0x64;
                                                  if ((local_10 != (char *)0x0) &&
                                                     (FUN_0055a0e0(local_10,&local_2c),
                                                     local_38 = local_2c, (int)local_2c < 1)) {
                                                    local_38 = (int *)0x64;
                                                  }
                                                  piVar9 = local_38;
                                                  FUN_0056be90(_Dst,7,local_38,1);
                                                  local_24 = 0;
                                                  if (0 < local_8[5]) {
                                                    local_28 = (int *)0x0;
                                                    piVar17 = local_8;
                                                    iVar6 = local_18;
                                                    do {
                                                      iVar7 = 0;
                                                      if ((iVar6 < 0) || (local_24 == iVar6)) {
                                                        FUN_00550aa0(piVar11,local_24);
                                                        uVar8 = FUN_0056be30(_Dst,0x78,1);
                                                        FUN_0056be90(_Dst,6,0,0);
                                                        FUN_00573d80(_Dst,uVar8);
                                                        iVar6 = *(int *)((int)local_28 +
                                                                        local_8[4] + 0xc);
                                                        local_34 = (undefined4 *)(iVar6 + 8);
                                                        for (local_2c = *(int **)(iVar6 + 0x10);
                                                            local_2c != (int *)0x0;
                                                            local_2c = (int *)*local_2c) {
                                                          iVar6 = local_2c[2];
                                                          FUN_0056be90(_Dst,7,*(undefined4 *)
                                                                               (iVar6 + 0x20),
                                                                       iVar7 + 2);
                                                          iVar15 = iVar7;
                                                          for (iVar6 = *(int *)(iVar6 + 8);
                                                              iVar7 = iVar15 + 1, iVar6 != 0;
                                                              iVar6 = *(int *)(iVar6 + 0x14)) {
                                                            FUN_0056be90(_Dst,7,*(undefined4 *)
                                                                                 (iVar6 + 0x28),
                                                                         iVar15 + 3);
                                                            iVar15 = iVar7;
                                                          }
                                                        }
                                                        if (param_1[0x13] < iVar7 + 4) {
                                                          param_1[0x13] = iVar7 + 4;
                                                        }
                                                        FUN_0056bef0(_Dst,0x6f,2,iVar7,1);
                                                        FUN_0056c490(_Dst,local_24);
                                                        uVar8 = FUN_0056be30(_Dst,0x49,2);
                                                        uVar12 = FUN_0055d980(local_8,
                                                  "*** in database %s ***\n",
                                                  *(undefined4 *)((int)local_28 + local_8[4]),
                                                  0xffffffff);
                                                  FUN_0056bf50(_Dst,0x5e,0,3,0,uVar12);
                                                  FUN_0056be90(_Dst,0xd,2,4);
                                                  FUN_0056bef0(_Dst,0x5b,4,3,2);
                                                  FUN_0056be90(_Dst,0x10,2,1);
                                                  FUN_00573d80(_Dst,uVar8);
                                                  local_34 = *(undefined4 **)((int)local_34 + 8);
                                                  piVar11 = param_1;
                                                  piVar9 = local_30;
                                                  iVar6 = local_18;
                                                  piVar17 = local_8;
                                                  while ((param_1 = piVar11, local_18 = iVar6,
                                                         local_8 = piVar17,
                                                         local_34 != (undefined4 *)0x0 &&
                                                         (piVar9 == (int *)0x0))) {
                                                    uVar19 = local_34[2];
                                                    piVar9 = (int *)0x0;
                                                    local_44 = uVar19;
                                                    if (*(int *)(uVar19 + 8) != 0) {
                                                      uVar8 = FUN_0056be30(_Dst,0x78,1);
                                                      FUN_0056be90(_Dst,6,0,0);
                                                      FUN_00573d80(_Dst,uVar8);
                                                      FUN_0055e6e0(param_1,uVar19,1,0x27);
                                                      FUN_0056be90(_Dst,7,0,2);
                                                      iVar6 = FUN_0056be90(_Dst,0x48,1,0);
                                                      local_40 = iVar6;
                                                      FUN_0056be90(_Dst,0x14,2,1);
                                                      piVar9 = *(int **)(uVar19 + 8);
                                                      local_2c = piVar9;
                                                      if (piVar9 != (int *)0x0) {
                                                        local_1c = 2;
                                                        do {
                                                          iVar6 = local_1c;
                                                          local_2c = piVar9;
                                                          uVar8 = FUN_00559920(param_1,piVar9,1,3,0)
                                                          ;
                                                          local_3c = FUN_0056bfc0(_Dst,0x34,iVar6,0,
                                                                                  uVar8,piVar9[9] +
                                                                                        1);
                                                          local_20 = FUN_0056c070(_Dst,0xb,&
                                                  DAT_007123a4);
                                                  iVar7 = _Dst[1];
                                                  iVar15 = *_Dst;
                                                  iVar6 = local_20 + 1;
                                                  if ((iVar7 == 0) ||
                                                     (*(char *)(iVar15 + 0x38) != '\0')) {
                                                    FUN_00539320(iVar15,0xfffffffe,"rowid ");
                                                  }
                                                  else {
                                                    if (iVar6 < 0) {
                                                      iVar6 = _Dst[7] + -1;
                                                    }
                                                    iVar16 = iVar7 + iVar6 * 0x14;
                                                    FUN_00539320(iVar15,(int)*(char *)(iVar16 + 1),
                                                                 *(undefined4 *)
                                                                  (iVar7 + 0x10 + iVar6 * 0x14));
                                                    *(char **)(iVar16 + 0x10) = "rowid ";
                                                    *(undefined1 *)(iVar16 + 1) = 0xfe;
                                                  }
                                                  iVar6 = _Dst[1];
                                                  iVar7 = *_Dst;
                                                  iVar15 = local_20 + 3;
                                                  if ((iVar6 == 0) ||
                                                     (*(char *)(iVar7 + 0x38) != '\0')) {
                                                    FUN_00539320(iVar7,0xfffffffe,
                                                                 " missing from index ");
                                                  }
                                                  else {
                                                    if (iVar15 < 0) {
                                                      iVar15 = _Dst[7] + -1;
                                                    }
                                                    iVar16 = iVar6 + iVar15 * 0x14;
                                                    FUN_00539320(iVar7,(int)*(char *)(iVar16 + 1),
                                                                 *(undefined4 *)
                                                                  (iVar6 + 0x10 + iVar15 * 0x14));
                                                    *(char **)(iVar16 + 0x10) =
                                                         " missing from index ";
                                                    *(undefined1 *)(iVar16 + 1) = 0xfe;
                                                  }
                                                  iVar6 = _Dst[1];
                                                  iVar7 = *piVar9;
                                                  iVar15 = *_Dst;
                                                  iVar16 = local_20 + 4;
                                                  if ((iVar6 == 0) ||
                                                     (*(char *)(iVar15 + 0x38) != '\0')) {
                                                    FUN_00539320(iVar15,0,iVar7);
                                                  }
                                                  else {
                                                    if (iVar16 < 0) {
                                                      iVar16 = _Dst[7] + -1;
                                                    }
                                                    iVar1 = iVar6 + iVar16 * 0x14;
                                                    FUN_00539320(iVar15,(int)*(char *)(iVar1 + 1),
                                                                 *(undefined4 *)
                                                                  (iVar6 + 0x10 + iVar16 * 0x14));
                                                    *(undefined4 *)(iVar1 + 0x10) = 0;
                                                    if (iVar7 == 0) {
                                                      *(undefined4 *)(iVar1 + 0x10) = 0;
                                                      *(undefined1 *)(iVar1 + 1) = 0;
                                                    }
                                                    else {
                                                      uVar8 = FUN_00568070(iVar7);
                                                      uVar8 = FUN_005524a0(*_Dst,iVar7,uVar8);
                                                      *(undefined4 *)(iVar1 + 0x10) = uVar8;
                                                      *(undefined1 *)(iVar1 + 1) = 0xff;
                                                    }
                                                  }
                                                  FUN_00573d80(_Dst,local_20 + 9);
                                                  FUN_00573d80(_Dst,local_3c);
                                                  piVar9 = (int *)local_2c[5];
                                                  local_1c = local_1c + 1;
                                                  } while (piVar9 != (int *)0x0);
                                                  local_2c = (int *)0x0;
                                                  iVar6 = local_40;
                                                  }
                                                  FUN_0056be90(_Dst,0x5f,1,iVar6 + 1);
                                                  FUN_00573d80(_Dst,iVar6);
                                                  local_2c = *(int **)(local_44 + 8);
                                                  piVar9 = local_30;
                                                  if (local_2c != (int *)0x0) {
                                                    local_20 = 2;
                                                    do {
                                                      uVar8 = FUN_0056be30(_Dst,0x78,1);
                                                      FUN_0056be90(_Dst,6,0,0);
                                                      FUN_00573d80(_Dst,uVar8);
                                                      iVar6 = FUN_0056c070(_Dst,10,&DAT_0071243c);
                                                      local_1c = iVar6;
                                                      FUN_0056c2c0(_Dst,iVar6 + 1,local_20);
                                                      FUN_0056c2e0(_Dst,iVar6 + 1,iVar6 + 4);
                                                      iVar7 = local_1c + 3;
                                                      FUN_0056c2c0(_Dst,iVar7,local_20);
                                                      FUN_0056c2e0(_Dst,iVar7,local_1c + 2);
                                                      FUN_00573d80(_Dst,iVar6 + 4);
                                                      iVar6 = _Dst[1];
                                                      iVar7 = *_Dst;
                                                      iVar15 = local_1c + 6;
                                                      if ((iVar6 == 0) ||
                                                         (*(char *)(iVar7 + 0x38) != '\0')) {
                                                        FUN_00539320(iVar7,0xfffffffe,
                                                                     "wrong # of entries in index ")
                                                        ;
                                                      }
                                                      else {
                                                        if (iVar15 < 0) {
                                                          iVar15 = _Dst[7] + -1;
                                                        }
                                                        iVar16 = iVar6 + iVar15 * 0x14;
                                                        FUN_00539320(iVar7,(int)*(char *)(iVar16 + 1
                                                                                         ),
                                                                     *(undefined4 *)
                                                                      (iVar6 + 0x10 + iVar15 * 0x14)
                                                                    );
                                                        *(char **)(iVar16 + 0x10) =
                                                             "wrong # of entries in index ";
                                                        *(undefined1 *)(iVar16 + 1) = 0xfe;
                                                      }
                                                      iVar6 = _Dst[1];
                                                      iVar7 = *local_2c;
                                                      iVar15 = *_Dst;
                                                      iVar16 = local_1c + 7;
                                                      if ((iVar6 == 0) ||
                                                         (*(char *)(iVar15 + 0x38) != '\0')) {
                                                        FUN_00539320(iVar15,0,iVar7);
                                                      }
                                                      else {
                                                        if (iVar16 < 0) {
                                                          iVar16 = _Dst[7] + -1;
                                                        }
                                                        iVar1 = iVar6 + iVar16 * 0x14;
                                                        FUN_00539320(iVar15,(int)*(char *)(iVar1 + 1
                                                                                          ),
                                                                     *(undefined4 *)
                                                                      (iVar6 + 0x10 + iVar16 * 0x14)
                                                                    );
                                                        *(undefined4 *)(iVar1 + 0x10) = 0;
                                                        if (iVar7 == 0) {
                                                          *(undefined4 *)(iVar1 + 0x10) = 0;
                                                          *(undefined1 *)(iVar1 + 1) = 0;
                                                        }
                                                        else {
                                                          uVar8 = FUN_00568070(iVar7);
                                                          uVar8 = FUN_005524a0(*_Dst,iVar7,uVar8);
                                                          *(undefined4 *)(iVar1 + 0x10) = uVar8;
                                                          *(undefined1 *)(iVar1 + 1) = 0xff;
                                                        }
                                                      }
                                                      local_20 = local_20 + 1;
                                                      local_2c = (int *)local_2c[5];
                                                      piVar9 = local_30;
                                                    } while (local_2c != (int *)0x0);
                                                  }
                                                  }
                                                  local_34 = (undefined4 *)*local_34;
                                                  piVar11 = param_1;
                                                  iVar6 = local_18;
                                                  piVar17 = local_8;
                                                  }
                                                  }
                                                  local_28 = local_28 + 4;
                                                  local_24 = local_24 + 1;
                                                  piVar9 = local_38;
                                                  } while (local_24 < piVar17[5]);
                                                  }
                                                  iVar15 = FUN_0056c070(_Dst,4,&DAT_00712394);
                                                  FUN_0056c2e0(_Dst,iVar15,-(int)piVar9);
                                                  FUN_00573d80(_Dst,iVar15 + 1);
                                                  iVar6 = _Dst[1];
                                                  iVar7 = *_Dst;
                                                  iVar15 = iVar15 + 2;
                                                  if ((iVar6 == 0) ||
                                                     (*(char *)(iVar7 + 0x38) != '\0')) {
                                                    FUN_00539320(iVar7,0xfffffffe,&DAT_00718d6c);
                                                    puVar20 = local_c;
                                                  }
                                                  else {
                                                    if (iVar15 < 0) {
                                                      iVar15 = _Dst[7] + -1;
                                                    }
                                                    iVar16 = iVar6 + iVar15 * 0x14;
                                                    FUN_00539320(iVar7,(int)*(char *)(iVar16 + 1),
                                                                 *(undefined4 *)
                                                                  (iVar6 + 0x10 + iVar15 * 0x14));
                                                    *(undefined **)(iVar16 + 0x10) = &DAT_00718d6c;
                                                    *(undefined1 *)(iVar16 + 1) = 0xfe;
                                                    puVar20 = local_c;
                                                  }
                                                }
                                                else {
                                                  iVar6 = FUN_0057a2c0(pbVar3,"encoding");
                                                  pcVar22 = local_10;
                                                  piVar11 = param_1;
                                                  if (iVar6 == 0) {
                                                    if (local_10 == (char *)0x0) {
                                                      iVar6 = FUN_005637c0(param_1);
                                                      if (iVar6 != 0) goto LAB_0056314c;
                                                      FUN_005762b0(_Dst,1);
                                                      FUN_00576270(_Dst,0,0,"encoding",0);
                                                      FUN_0056be90(_Dst,0x5e,0,1);
                                                      iVar6 = _Dst[1];
                                                      iVar7 = *_Dst;
                                                      puVar14 = (&PTR_DAT_00712468)
                                                                [(uint)*(byte *)(*(int *)(*(int *)(*
                                                  piVar11 + 0x10) + 0xc) + 0x4d) * 2];
                                                  if ((iVar6 == 0) ||
                                                     (*(char *)(iVar7 + 0x38) != '\0')) {
                                                    FUN_00539320(iVar7,0xfffffffe,puVar14);
                                                    FUN_0056be90(_Dst,0x10,1,1);
                                                    puVar20 = local_c;
                                                  }
                                                  else {
                                                    iVar15 = iVar6 + (_Dst[7] + -1) * 0x14;
                                                    FUN_00539320(iVar7,(int)*(char *)(iVar15 + 1),
                                                                 *(undefined4 *)
                                                                  (iVar6 + 0x10 +
                                                                  (_Dst[7] + -1) * 0x14));
                                                    *(undefined4 *)(iVar15 + 0x10) = 0;
                                                    if (puVar14 == (undefined *)0x0) {
                                                      *(undefined4 *)(iVar15 + 0x10) = 0;
                                                      *(undefined1 *)(iVar15 + 1) = 0;
                                                      FUN_0056be90(_Dst,0x10,1,1);
                                                      puVar20 = local_c;
                                                    }
                                                    else {
                                                      *(undefined **)(iVar15 + 0x10) = puVar14;
                                                      *(undefined1 *)(iVar15 + 1) = 0xfe;
                                                      FUN_0056be90(_Dst,0x10,1,1);
                                                      puVar20 = local_c;
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = *(ushort *)
                                                             (*(int *)(local_8[4] + 0xc) + 0x4e);
                                                    if (((uVar2 & 1) == 0) ||
                                                       (puVar20 = local_c, (uVar2 & 4) != 0)) {
                                                      puVar14 = &DAT_00715a20;
                                                      ppuVar21 = &PTR_DAT_00712468;
                                                      do {
                                                        iVar6 = FUN_0057a2c0(pcVar22,puVar14);
                                                        if (iVar6 == 0) {
                                                          cVar4 = *(char *)(ppuVar21 + 1);
                                                          if (cVar4 == '\0') {
                                                            cVar4 = '\x02';
                                                          }
                                                          *(char *)(*(int *)(*(int *)(*param_1 +
                                                                                     0x10) + 0xc) +
                                                                   0x4d) = cVar4;
                                                          puVar20 = local_c;
                                                          if (*ppuVar21 != (undefined *)0x0)
                                                          goto LAB_00563120;
                                                          break;
                                                        }
                                                        puVar14 = ppuVar21[2];
                                                        ppuVar21 = ppuVar21 + 2;
                                                      } while (puVar14 != (undefined *)0x0);
                                                      FUN_00553950(param_1,
                                                  "unsupported encoding: %s",pcVar22);
                                                  puVar20 = local_c;
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = FUN_0057a2c0(pbVar3,"schema_version");
                                                    if (((iVar6 == 0) ||
                                                        (iVar6 = FUN_0057a2c0(pbVar3,"user_version")
                                                        , iVar6 == 0)) ||
                                                       (iVar6 = FUN_0057a2c0(pbVar3,"freelist_count"
                                                                            ), iVar6 == 0)) {
                                                      FUN_00576ba0(_Dst,local_18);
                                                      switch(*pbVar3) {
                                                      case 0x46:
                                                      case 0x66:
                                                        iVar6 = 0;
                                                        break;
                                                      default:
                                                        iVar6 = 6;
                                                        break;
                                                      case 0x53:
                                                      case 0x73:
                                                        iVar6 = 1;
                                                      }
                                                      if ((local_10 == (char *)0x0) || (iVar6 == 0))
                                                      {
                                                        iVar7 = FUN_0056c070(_Dst,3,&DAT_007124d8);
                                                        FUN_0056c2c0(_Dst,iVar7,local_18);
                                                        FUN_0056c2c0(_Dst,iVar7 + 1,local_18);
                                                        FUN_0056c300(_Dst,iVar7 + 1,iVar6);
                                                        FUN_005762b0(_Dst,1);
                                                        FUN_00576270(_Dst,0,0,local_14,0xffffffff);
                                                        puVar20 = local_c;
                                                      }
                                                      else {
                                                        iVar7 = FUN_0056c070(_Dst,3,&DAT_007124c8);
                                                        FUN_0056c2c0(_Dst,iVar7,local_18);
                                                        uVar8 = FUN_0054a970(local_10);
                                                        FUN_0056c2c0(_Dst,iVar7 + 1,uVar8);
                                                        FUN_0056c2c0(_Dst,iVar7 + 2,local_18);
                                                        FUN_0056c2e0(_Dst,iVar7 + 2,iVar6);
                                                        puVar20 = local_c;
                                                      }
                                                    }
                                                    else {
                                                      iVar6 = FUN_0057a2c0(pbVar3,"compile_options")
                                                      ;
                                                      if (iVar6 == 0) {
                                                        iVar6 = 0;
                                                        FUN_005762b0(_Dst,1);
                                                        param_1[0x13] = 1;
                                                        FUN_00576270(_Dst,0,0,"compile_option",0);
                                                        iVar7 = FUN_005204d0(0);
                                                        while (puVar20 = local_c, iVar7 != 0) {
                                                          iVar6 = iVar6 + 1;
                                                          FUN_0056bf50(_Dst,0x5e,0,1,0,iVar7,0);
                                                          FUN_0056be90(_Dst,0x10,1,1);
                                                          iVar7 = FUN_005204d0(iVar6);
                                                        }
                                                      }
                                                      else {
                                                        iVar6 = FUN_0057a2c0(pbVar3,"wal_checkpoint"
                                                                            );
                                                        pbVar3 = local_14;
                                                        if (iVar6 == 0) {
                                                          iVar6 = 10;
                                                          if (*piVar9 != 0) {
                                                            iVar6 = local_18;
                                                          }
                                                          uVar8 = 0;
                                                          if (local_10 != (char *)0x0) {
                                                            iVar7 = FUN_0057a2c0(local_10,&
                                                  DAT_00718a34);
                                                  if (iVar7 == 0) {
                                                    uVar8 = 1;
                                                  }
                                                  else {
                                                    iVar7 = FUN_0057a2c0(local_10,"restart");
                                                    if (iVar7 == 0) {
                                                      uVar8 = 2;
                                                    }
                                                  }
                                                  }
                                                  iVar7 = FUN_005637c0(param_1);
                                                  if (iVar7 != 0) goto LAB_0056314c;
                                                  FUN_005762b0(_Dst,3);
                                                  param_1[0x13] = 3;
                                                  FUN_00576270(_Dst,0,0,&DAT_00718e00,0);
                                                  FUN_00576270(_Dst,1,0,&DAT_00718e08,0);
                                                  FUN_00576270(_Dst,2,0,"checkpointed",0);
                                                  FUN_0056bef0(_Dst,0x7d,iVar6,uVar8,1);
                                                  FUN_0056be90(_Dst,0x10,1,3);
                                                  puVar20 = local_c;
                                                  }
                                                  else {
                                                    iVar6 = FUN_0057a2c0(local_14,
                                                  "wal_autocheckpoint");
                                                  if (iVar6 == 0) {
                                                    if (local_10 != (char *)0x0) {
                                                      uVar8 = FUN_0054a970(local_10);
                                                      FUN_00525c40(local_8,uVar8);
                                                    }
                                                    if ((code *)local_8[0x30] == FUN_00577d90) {
                                                      iVar6 = local_8[0x31];
                                                    }
                                                    else {
                                                      iVar6 = 0;
                                                    }
                                                    FUN_00546df0(param_1,"wal_autocheckpoint",iVar6,
                                                                 iVar6 >> 0x1f);
                                                    puVar20 = local_c;
                                                  }
                                                  else {
                                                    iVar6 = FUN_0057a2c0(pbVar3,"shrink_memory");
                                                    if (iVar6 == 0) {
                                                      FUN_00579d80(local_8);
                                                      puVar20 = local_c;
                                                    }
                                                    else {
                                                      iVar6 = FUN_0057a2c0(pbVar3,"busy_timeout");
                                                      puVar20 = local_c;
                                                      if (iVar6 == 0) {
                                                        if (local_10 != (char *)0x0) {
                                                          uVar8 = FUN_0054a970(local_10);
                                                          FUN_00523850(local_8,uVar8);
                                                        }
                                                        FUN_00546df0(param_1,"timeout",local_8[0x77]
                                                                     ,local_8[0x77] >> 0x1f);
                                                        puVar20 = local_c;
                                                      }
                                                    }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    if (local_58 != 0) {
      FUN_00553950(param_1,&DAT_00716900,local_58);
      FUN_00524410(local_58);
    }
    param_1[0x11] = param_1[0x11] + 1;
    param_1[3] = (int)local_38;
    puVar20 = local_c;
  }
LAB_00563120:
  if (*(char *)((int)local_8 + 0x36) != '\0') {
    FUN_0054f380(puVar20[1],*(undefined1 *)((int)puVar20 + 9),(uint)local_8[6] >> 0xd & 1,
                 (uint)local_8[6] >> 0xe & 1);
  }
LAB_0056314c:
  FUN_005521a0(local_8,local_14);
  FUN_005521a0(local_8,local_10);
  return;
}


/* FUN_005631b0 @ 005631b0  kind=gamemisc  attributed-by=caller-vote  size=917 */

uint FUN_005631b0(int param_1,void *param_2,size_t param_3,byte param_4,int param_5,int *param_6,
                 int *param_7)

{
  undefined4 *puVar1;
  int *_Dst;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  size_t _Size;
  int iVar5;
  uint uVar6;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  _Dst = (int *)FUN_00552230(param_1,0x230);
  if (_Dst == (int *)0x0) {
    uVar2 = 7;
  }
  else {
    memset(_Dst,0,0x230);
    _Dst[0x7c] = param_5;
    local_c = 0;
    if (0 < *(int *)(param_1 + 0x14)) {
      local_10 = 0;
      do {
        iVar5 = *(int *)(local_10 + 4 + *(int *)(param_1 + 0x10));
        if ((iVar5 != 0) && (uVar2 = FUN_0054f060(iVar5), uVar2 != 0)) {
          FUN_00553890(param_1,uVar2,"database schema is locked: %s",
                       *(undefined4 *)(*(int *)(param_1 + 0x10) + local_c * 0x10));
          goto LAB_005634f9;
        }
        local_c = local_c + 1;
        local_10 = local_10 + 0x10;
      } while (local_c < *(int *)(param_1 + 0x14));
    }
    FUN_005776d0(param_1);
    *_Dst = param_1;
    _Dst[0x6e] = 0;
    _Dst[0x6f] = 0x3ff00000;
    if (((int)param_3 < 0) || ((param_3 != 0 && (*(char *)((int)param_2 + (param_3 - 1)) == '\0'))))
    {
      FUN_00564800(_Dst,param_2,&local_8);
    }
    else {
      if (*(int *)(param_1 + 0x54) < (int)param_3) {
        FUN_00553890(param_1,0x12,"statement too long");
        uVar2 = 0x12;
        if (*(char *)(param_1 + 0x38) != '\0') {
          FUN_00553890(param_1,7,0);
          *(undefined1 *)(param_1 + 0x38) = 0;
          uVar2 = 7;
        }
        uVar2 = *(uint *)(param_1 + 0x30) & uVar2;
        goto LAB_005634f9;
      }
      if ((param_2 == (void *)0x0) ||
         (pvVar3 = (void *)FUN_00552230(param_1,param_3 + 1), pvVar3 == (void *)0x0)) {
        _Dst[0x7e] = (int)param_2 + param_3;
      }
      else {
        memcpy(pvVar3,param_2,param_3);
        *(undefined1 *)((int)pvVar3 + param_3) = 0;
        FUN_00564800(_Dst,pvVar3,&local_8);
        FUN_005521a0(param_1,pvVar3);
        _Dst[0x7e] = (int)param_2 + (_Dst[0x7e] - (int)pvVar3);
      }
    }
    if (*(char *)(param_1 + 0x38) != '\0') {
      _Dst[3] = 7;
    }
    if (_Dst[3] == 0x65) {
      _Dst[3] = 0;
    }
    if (*(char *)((int)_Dst + 0x11) != '\0') {
      FUN_005473d0(_Dst);
    }
    if (*(char *)(param_1 + 0x38) != '\0') {
      _Dst[3] = 7;
    }
    if (param_7 != (int *)0x0) {
      *param_7 = _Dst[0x7e];
    }
    uVar2 = _Dst[3];
    if (((uVar2 == 0) && (iVar5 = _Dst[2], iVar5 != 0)) && ((char)_Dst[0x75] != '\0')) {
      if ((char)_Dst[0x75] == '\x02') {
        FUN_005762b0(iVar5,4);
        uVar6 = 8;
        uVar4 = 0xc;
      }
      else {
        FUN_005762b0(iVar5,8);
        uVar6 = 0;
        uVar4 = 8;
      }
      if (uVar6 < uVar4) {
        iVar5 = 0;
        do {
          if (*(char *)(*(int *)_Dst[2] + 0x38) == '\0') {
            FUN_00575040(((int *)_Dst[2])[4] + iVar5,(&PTR_DAT_00712d0c)[uVar6],0xffffffff,1,0);
          }
          uVar6 = uVar6 + 1;
          iVar5 = iVar5 + 0x28;
        } while ((int)uVar6 < (int)uVar4);
      }
    }
    if (*(char *)(param_1 + 0x81) == '\0') {
      puVar1 = (undefined4 *)_Dst[2];
      _Size = _Dst[0x7e] - (int)param_2;
      if (puVar1 != (undefined4 *)0x0) {
        pvVar3 = (void *)0x0;
        if ((param_2 != (void *)0x0) &&
           (pvVar3 = (void *)FUN_00552230(*puVar1,_Size + 1), pvVar3 != (void *)0x0)) {
          memcpy(pvVar3,param_2,_Size);
          *(undefined1 *)((int)pvVar3 + _Size) = 0;
        }
        puVar1[0x26] = pvVar3;
        puVar1[0x18] = puVar1[0x18] ^ ((uint)param_4 << 9 ^ puVar1[0x18]) & 0x200;
      }
    }
    iVar5 = _Dst[2];
    if ((iVar5 == 0) || ((uVar2 == 0 && (*(char *)(param_1 + 0x38) == '\0')))) {
      *param_6 = iVar5;
    }
    else {
      FUN_005734d0(iVar5);
    }
    if (local_8 == 0) {
      FUN_00553890(param_1,uVar2,0);
    }
    else {
      FUN_00553890(param_1,uVar2,&DAT_00716900,local_8);
      FUN_005521a0(param_1,local_8);
    }
    iVar5 = _Dst[0x8a];
    while (iVar5 != 0) {
      iVar5 = _Dst[0x8a];
      _Dst[0x8a] = *(int *)(iVar5 + 4);
      FUN_005521a0(param_1,iVar5);
      iVar5 = _Dst[0x8a];
    }
  }
LAB_005634f9:
  FUN_005521a0(param_1,_Dst);
  if (param_1 != 0) {
    if ((*(char *)(param_1 + 0x38) != '\0') || (uVar2 == 0xc0a)) {
      FUN_00553890(param_1,7,0);
      *(undefined1 *)(param_1 + 0x38) = 0;
      uVar2 = 7;
    }
    return *(uint *)(param_1 + 0x30) & uVar2;
  }
  return uVar2 & 0xff;
}


/* FUN_00563650 @ 00563650  kind=gamemisc  attributed-by=caller-vote  size=37 */

void FUN_00563650(undefined1 *param_1,undefined4 param_2)

{
  *param_1 = (char)((uint)param_2 >> 0x18);
  param_1[1] = (char)((uint)param_2 >> 0x10);
  param_1[2] = (char)((uint)param_2 >> 8);
  param_1[3] = (char)param_2;
  return;
}


/* FUN_005637c0 @ 005637c0  kind=gamemisc  attributed-by=caller-vote  size=49 */

int FUN_005637c0(int *param_1)

{
  int iVar1;
  
  if ((*(char *)(*param_1 + 0x81) == '\0') &&
     (iVar1 = FUN_0055b460(*param_1,param_1 + 1), iVar1 != 0)) {
    param_1[0x11] = param_1[0x11] + 1;
    param_1[3] = iVar1;
    return iVar1;
  }
  return 0;
}


/* FUN_00563800 @ 00563800  kind=gamemisc  attributed-by=caller-vote  size=325 */

int FUN_00563800(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (param_1 == 0) {
    iVar1 = FUN_0055da00(param_2);
    return iVar1;
  }
  if (param_2 < 1) {
    FUN_00524410(param_1);
    return 0;
  }
  if (0x7ffffeff < param_2) {
    return 0;
  }
  iVar1 = (*DAT_00766608._4_4_)(param_1);
  iVar2 = (*DAT_00766610)(param_2);
  if (iVar1 == iVar2) {
    return param_1;
  }
  if (DAT_007665e0 == 0) {
    iVar1 = (*(code *)DAT_00766608)(param_1,iVar2);
    return iVar1;
  }
  if (DAT_0076b488 != 0) {
    (*DAT_00766630)(DAT_0076b488);
  }
  FUN_00567c70(5,param_2);
  uVar3 = iVar2 - iVar1;
  iVar4 = (DAT_0076b494 - ((int)uVar3 >> 0x1f)) - (uint)(DAT_0076b490 < uVar3);
  if ((iVar4 <= (int)DAT_0076b360 >> 0x1f) &&
     ((iVar4 < (int)DAT_0076b360 >> 0x1f || (DAT_0076b490 - uVar3 <= DAT_0076b360)))) {
    FUN_0055da70(uVar3);
  }
  iVar4 = (*(code *)DAT_00766608)(param_1,iVar2);
  if (iVar4 == 0) {
    if (DAT_0076b498 == 0) goto LAB_00563913;
    FUN_0055da70(param_2);
    iVar4 = (*(code *)DAT_00766608)(param_1,iVar2);
    if (iVar4 == 0) goto LAB_00563913;
  }
  iVar2 = (*DAT_00766608._4_4_)(iVar4);
  FUN_00567c40(0,iVar2 - iVar1);
LAB_00563913:
  if (DAT_0076b488 == 0) {
    return iVar4;
  }
  (*DAT_00766638)(DAT_0076b488);
  return iVar4;
}


/* FUN_00563bf0 @ 00563bf0  kind=gamemisc  attributed-by=caller-vote  size=140 */

void FUN_00563bf0(void)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 uVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  
  puVar8 = &DAT_007666e0;
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
  } while ((int)puVar8 < 0x766800);
  return;
}


/* FUN_00563c80 @ 00563c80  kind=gamemisc  attributed-by=caller-vote  size=149 */

void FUN_00563c80(void)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 uVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  
  puVar8 = &DAT_00766800;
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
  } while ((int)puVar8 < 0x766f74);
  FUN_00563bf0();
  FUN_00549b00();
  return;
}


/* FUN_00563d20 @ 00563d20  kind=gamemisc  attributed-by=caller-vote  size=240 */

void FUN_00563d20(undefined4 param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  undefined *puVar4;
  
  puVar4 = &DAT_0071526c;
  if (param_2 == 0) {
    puVar4 = &DAT_00715268;
  }
  FUN_005515c0(param_1,&DAT_00715b94,2,1,puVar4,FUN_0051ca20,0,0,0);
  FUN_005515c0(param_1,&DAT_00715b94,3,1,puVar4,FUN_0051ca20,0,0,0);
  FUN_005515c0(param_1,&DAT_00715b9c,2,1,&DAT_00715264,FUN_0051ca20,0,0,0);
  pcVar1 = "glob";
  do {
    pcVar3 = pcVar1;
    pcVar1 = pcVar3 + 1;
  } while (*pcVar1 != '\0');
  iVar2 = FUN_00556c60(param_1,&DAT_00715b9c,(uint)(pcVar3 + -0x715b9b) & 0x3fffffff,2,1,0);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 3) = 3;
  }
  pcVar1 = "like";
  do {
    pcVar3 = pcVar1;
    pcVar1 = pcVar3 + 1;
  } while (*pcVar1 != '\0');
  iVar2 = FUN_00556c60(param_1,&DAT_00715b94,(uint)(pcVar3 + -0x715b93) & 0x3fffffff,2,1,0);
  if (iVar2 != 0) {
    *(char *)(iVar2 + 3) = (param_2 != 0) * '\x02' + '\x01';
  }
  return;
}


/* FUN_00563e10 @ 00563e10  kind=gamemisc  attributed-by=caller-vote  size=356 */

void FUN_00563e10(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_8;
  
  iVar1 = *param_1;
  if ((*(char *)(iVar1 + 0x81) == '\0') && (iVar2 = FUN_0055b460(iVar1,param_1 + 1), iVar2 != 0)) {
    param_1[0x11] = param_1[0x11] + 1;
    param_1[3] = iVar2;
    return;
  }
  if (param_2 == 0) {
    FUN_00545420(param_1,0);
    return;
  }
  if ((param_3 == (int *)0x0) || (*param_3 == 0)) {
    iVar2 = FUN_0055e3f0(*param_1,param_2);
    if (iVar2 == 0) {
      return;
    }
    iVar3 = FUN_00556ba0(iVar1,*(undefined1 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0xc) + 0x4d),iVar2,
                         0);
    if (iVar3 != 0) {
      FUN_00545420(param_1);
      FUN_005521a0(iVar1,iVar2);
      return;
    }
    FUN_005521a0(iVar1,iVar2);
  }
  iVar2 = FUN_00568810(param_1,param_2,param_3,&local_8);
  if ((-1 < iVar2) && (iVar3 = FUN_0055e3f0(iVar1,local_8), iVar3 != 0)) {
    local_8 = *(int *)(*(int *)(iVar1 + 0x10) + iVar2 * 0x10);
    iVar4 = FUN_005572d0(iVar1,iVar3,local_8);
    if (iVar4 != 0) {
      FUN_00545520(param_1,iVar4,0);
      FUN_005521a0(iVar1,iVar3);
      return;
    }
    local_8 = FUN_00557190(iVar1,iVar3,local_8);
    FUN_005521a0(iVar1,iVar3);
    iVar1 = local_8;
    if (local_8 != 0) {
      FUN_0054bc80(param_1,0,iVar2);
      FUN_00563950(param_1,iVar1,0xffffffff);
      return;
    }
    FUN_00553950(param_1,"unable to identify the object to be reindexed");
  }
  return;
}


/* FUN_00563fb0 @ 00563fb0  kind=gamemisc  attributed-by=caller-vote  size=68 */

void FUN_00563fb0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((param_2 != 0) && (*(byte *)(param_1 + 0x13) < 8)) {
    iVar2 = 0;
    iVar1 = param_1 + 100;
    while (*(int *)(iVar1 + 0x10) != param_2) {
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x18;
      if (9 < iVar2) {
        *(int *)(param_1 + 0x1c + (uint)*(byte *)(param_1 + 0x13) * 4) = param_2;
        *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
        return;
      }
    }
    *(undefined1 *)(iVar1 + 8) = 1;
  }
  return;
}


/* FUN_005640a0 @ 005640a0  kind=gamemisc  attributed-by=caller-vote  size=215 */

ushort FUN_005640a0(int *param_1,int param_2)

{
  byte bVar1;
  int *piVar2;
  code *local_18;
  code *local_14;
  int local_10;
  int *local_8;
  
  if (param_2 == 0) {
    return 0;
  }
  piVar2 = (int *)*param_1;
  if (*(int *)(*piVar2 + 0x5c) < piVar2[0x78] + *(int *)(param_2 + 0x14)) {
    FUN_00553950(piVar2,"Expression tree is too large (maximum depth %d)",*(int *)(*piVar2 + 0x5c));
    return 1;
  }
  piVar2[0x78] = piVar2[0x78] + *(int *)(param_2 + 0x14);
  bVar1 = *(byte *)(param_1 + 7);
  *(byte *)(param_1 + 7) = bVar1 & 0xfd;
  local_10 = *param_1;
  local_18 = FUN_00546470;
  local_14 = FUN_00546ad0;
  local_8 = param_1;
  FUN_00578680(&local_18,param_2);
  *(int *)(*param_1 + 0x1e0) = *(int *)(*param_1 + 0x1e0) - *(int *)(param_2 + 0x14);
  if ((0 < param_1[6]) || (0 < *(int *)(local_10 + 0x44))) {
    *(ushort *)(param_2 + 2) = *(ushort *)(param_2 + 2) | 8;
  }
  if ((*(byte *)(param_1 + 7) & 2) != 0) {
    *(ushort *)(param_2 + 2) = *(ushort *)(param_2 + 2) | 2;
    return *(ushort *)(param_2 + 2) >> 3 & 1;
  }
  if ((bVar1 & 2) != 0) {
    *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) | 2;
  }
  return *(ushort *)(param_2 + 2) >> 3 & 1;
}


/* FUN_005644e0 @ 005644e0  kind=gamemisc  attributed-by=caller-vote  size=173 */

void FUN_005644e0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  puVar3 = (undefined4 *)*param_1;
joined_r0x005644eb:
  do {
    if (puVar3 == (undefined4 *)0x0) {
      *param_1 = 0;
      *(undefined2 *)(param_1 + 6) = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[5] = 0;
      *(undefined1 *)((int)param_1 + 0x1a) = 1;
      return;
    }
    iVar1 = param_1[1];
    puVar2 = (undefined4 *)*puVar3;
    if (iVar1 != 0) {
      if (*(int *)(iVar1 + 0x1f0) != 0) {
        if ((puVar3 < *(undefined4 **)(iVar1 + 0x104)) ||
           (*(undefined4 **)(iVar1 + 0x108) <= puVar3)) {
          iVar4 = (*DAT_00766608._4_4_)(puVar3);
          **(int **)(iVar1 + 0x1f0) = **(int **)(iVar1 + 0x1f0) + iVar4;
          puVar3 = puVar2;
        }
        else {
          **(int **)(iVar1 + 0x1f0) = **(int **)(iVar1 + 0x1f0) + (uint)*(ushort *)(iVar1 + 0xe8);
          puVar3 = puVar2;
        }
        goto joined_r0x005644eb;
      }
      if ((*(undefined4 **)(iVar1 + 0x104) <= puVar3) && (puVar3 < *(undefined4 **)(iVar1 + 0x108)))
      {
        *puVar3 = *(undefined4 *)(iVar1 + 0x100);
        *(int *)(iVar1 + 0xec) = *(int *)(iVar1 + 0xec) + -1;
        *(undefined4 **)(iVar1 + 0x100) = puVar3;
        puVar3 = puVar2;
        goto joined_r0x005644eb;
      }
    }
    FUN_00524410(puVar3);
    puVar3 = puVar2;
  } while( true );
}


/* FUN_00564800 @ 00564800  kind=gamemisc  attributed-by=caller-vote  size=938 */

int FUN_00564800(int *param_1,int param_2,int *param_3)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  bool bVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 extraout_ECX;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 *local_8;
  
  iVar3 = *param_1;
  local_10 = 0;
  local_18 = *(int *)(iVar3 + 0x54);
  local_14 = -1;
  if (*(int *)(iVar3 + 0x84) == 0) {
    *(undefined4 *)(iVar3 + 0xe0) = 0;
  }
  param_1[3] = 0;
  param_1[0x7e] = param_2;
  local_8 = (undefined4 *)FUN_0055da00(0x64c);
  if (local_8 == (undefined4 *)0x0) {
    *(undefined1 *)(iVar3 + 0x38) = 1;
    return 7;
  }
  *local_8 = 0xffffffff;
  uVar1 = *(undefined1 *)(iVar3 + 0xea);
  if (*(int *)(iVar3 + 0x104) != 0) {
    *(undefined1 *)(iVar3 + 0xea) = 1;
  }
  cVar2 = *(char *)(iVar3 + 0x38);
  iVar10 = 0;
  while( true ) {
    if ((cVar2 != '\0') || (pcVar8 = (char *)(param_2 + iVar10), *pcVar8 == '\0'))
    goto LAB_00564967;
    param_1[0x84] = (int)pcVar8;
    iVar9 = FUN_0055a220(pcVar8,&local_1c);
    iVar4 = local_1c;
    local_c = iVar10 + iVar9;
    param_1[0x85] = iVar9;
    if (local_18 < local_c) break;
    if (local_1c == 1) {
      param_1[0x7e] = local_c + param_2;
LAB_005648fb:
      FUN_00560af0(local_8,local_1c,param_1[0x84],param_1[0x85],param_1);
      local_14 = iVar4;
      iVar10 = local_c;
      if (param_1[3] != 0) goto LAB_00564967;
    }
    else {
      if (local_1c == 0x94) {
        FUN_005521a0(iVar3,*param_3);
        iVar10 = FUN_0055d980(iVar3,"unrecognized token: \"%T\"",param_1 + 0x84);
        bVar7 = true;
        *param_3 = iVar10;
        local_10 = 1;
        iVar10 = local_c;
        goto LAB_00564969;
      }
      if (local_1c != 0x95) goto LAB_005648fb;
      if (*(int *)(iVar3 + 0xe0) != 0) {
        FUN_00553950(param_1,"interrupt");
        param_1[3] = 9;
        iVar10 = local_c;
        goto LAB_00564967;
      }
    }
    cVar2 = *(char *)(iVar3 + 0x38);
    iVar10 = local_c;
  }
  param_1[3] = 0x12;
  iVar10 = local_c;
LAB_00564967:
  bVar7 = false;
LAB_00564969:
  if (((*(char *)(iVar10 + param_2) == '\0') && (!bVar7)) && (param_1[3] == 0)) {
    if (local_14 != 1) {
      FUN_00560af0(local_8,1,param_1[0x84],param_1[0x85],param_1);
      param_1[0x7e] = iVar10 + param_2;
    }
    FUN_00560af0(local_8,0,param_1[0x84],param_1[0x85],param_1);
  }
  FUN_00560c30(local_8,FUN_00524410);
  *(undefined1 *)(iVar3 + 0xea) = uVar1;
  if (*(char *)(iVar3 + 0x38) != '\0') {
    param_1[3] = 7;
  }
  iVar10 = param_1[3];
  if (((iVar10 != 0) && (iVar10 != 0x65)) && (param_1[1] == 0)) {
    uVar11 = FUN_00553860(iVar10);
    FUN_005670f0(extraout_ECX,iVar3,&DAT_00716900,uVar11);
  }
  iVar10 = param_1[1];
  if (iVar10 != 0) {
    *param_3 = iVar10;
    FUN_00525a30(param_1[3],&DAT_00716900,iVar10);
    local_10 = local_10 + 1;
    param_1[1] = 0;
  }
  if ((param_1[2] != 0) && (0 < param_1[0x11])) {
    if (*(char *)((int)param_1 + 0x12) != '\0') goto LAB_00564a7c;
    FUN_0056c8b0(param_1[2]);
    param_1[2] = 0;
  }
  if (*(char *)((int)param_1 + 0x12) == '\0') {
    FUN_005521a0(iVar3,param_1[0x6a]);
    param_1[0x6a] = 0;
    param_1[0x69] = 0;
  }
LAB_00564a7c:
  FUN_00524410(param_1[0x88]);
  if (*(char *)((int)param_1 + 0x1d5) == '\0') {
    FUN_005529a0(iVar3,param_1[0x7f]);
  }
  puVar5 = (undefined4 *)param_1[0x80];
  if (puVar5 != (undefined4 *)0x0) {
    FUN_00552b20(iVar3,puVar5[7]);
    FUN_005521a0(iVar3,*puVar5);
    FUN_005521a0(iVar3,puVar5[1]);
    FUN_00555e30(iVar3,puVar5[3]);
    FUN_0055afc0(iVar3,puVar5[4]);
    FUN_005521a0(iVar3,puVar5);
  }
  iVar10 = param_1[0x74];
  while (iVar10 = iVar10 + -1, -1 < iVar10) {
    FUN_005521a0(iVar3,*(undefined4 *)(param_1[0x7b] + iVar10 * 4));
  }
  FUN_005521a0(iVar3,param_1[0x7b]);
  FUN_005521a0(iVar3,param_1[0x7d]);
  iVar10 = param_1[0x6b];
  while (iVar10 != 0) {
    piVar6 = (int *)param_1[0x6b];
    param_1[0x6b] = *piVar6;
    FUN_005521a0(iVar3,piVar6);
    iVar10 = param_1[0x6b];
  }
  iVar10 = param_1[0x89];
  while (iVar10 != 0) {
    iVar10 = param_1[0x89];
    param_1[0x89] = *(int *)(iVar10 + 0x44);
    FUN_005529a0(iVar3,iVar10);
    iVar10 = param_1[0x89];
  }
  if ((0 < local_10) && (param_1[3] == 0)) {
    param_1[3] = 1;
    return local_10;
  }
  return local_10;
}


/* FUN_00564f10 @ 00564f10  kind=gamemisc  attributed-by=caller-vote  size=113 */

undefined4 FUN_00564f10(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    FUN_00525a30(0x15,"API call with %s database connection pointer",&DAT_00716880);
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x44);
  if (iVar1 != -0x5fd65969) {
    if ((iVar1 != 0x4b771290) && (iVar1 != -0xfc486fa)) {
      FUN_00525a30(0x15,"API call with %s database connection pointer","invalid");
      return 0;
    }
    FUN_00525a30(0x15,"API call with %s database connection pointer","unopened");
    return 0;
  }
  return 1;
}


/* FUN_00564f90 @ 00564f90  kind=gamemisc  attributed-by=caller-vote  size=136 */

void FUN_00564f90(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_0055e3f0(*param_1,param_3);
  if (iVar1 == 0) {
    return;
  }
  iVar2 = param_1[2];
  if (iVar2 == 0) {
    iVar2 = FUN_0056c7b0(*param_1);
    param_1[2] = iVar2;
    if (iVar2 == 0) goto LAB_00565008;
    FUN_0056bdc0(iVar2,0x94);
  }
  iVar3 = FUN_0054ab50(param_1,0x20,(&PTR_s_BEGIN_00712068)[param_2],iVar1,0);
  if (iVar3 == 0) {
    FUN_0056bf50(iVar2,0x21,param_2,0,0,iVar1,0xffffffff);
    return;
  }
LAB_00565008:
  FUN_005521a0(*param_1,iVar1);
  return;
}


/* FUN_00565020 @ 00565020  kind=gamemisc  attributed-by=caller-vote  size=287 */

void FUN_00565020(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 local_24;
  undefined8 local_1c;
  undefined8 local_14;
  undefined8 local_c;
  
  local_24 = *(undefined8 *)(param_1 + 8);
  local_1c = *(undefined8 *)(param_1 + 0x10);
  local_14 = *(undefined8 *)(param_1 + 0x28);
  local_c = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  FUN_0055ac70(param_1 + 0x18);
  for (puVar2 = (undefined4 *)local_c; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2)
  {
    puVar1 = (undefined4 *)puVar2[2];
    if (puVar1 != (undefined4 *)0x0) {
      FUN_00552b20(0,puVar1[7]);
      FUN_00524410(*puVar1);
      FUN_00524410(puVar1[1]);
      FUN_00555e30(0,puVar1[3]);
      FUN_0055afc0(0,puVar1[4]);
      FUN_00524410(puVar1);
    }
  }
  FUN_0055ac70(&local_14);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  for (puVar2 = (undefined4 *)local_1c; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2)
  {
    FUN_005529a0(0,puVar2[2]);
  }
  FUN_0055ac70(&local_24);
  FUN_0055ac70(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if ((*(ushort *)(param_1 + 0x4e) & 1) != 0) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
    *(ushort *)(param_1 + 0x4e) = *(ushort *)(param_1 + 0x4e) & 0xfffe;
  }
  return;
}


/* FUN_00565260 @ 00565260  kind=gamemisc  attributed-by=caller-vote  size=54 */

int FUN_00565260(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 == 0) {
    return -1000000;
  }
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    piVar2 = (int *)(*(int *)(param_1 + 0x10) + 0xc);
    do {
      if (*piVar2 == param_2) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 4;
    } while (iVar1 < *(int *)(param_1 + 0x14));
  }
  return iVar1;
}


/* FUN_005654f0 @ 005654f0  kind=gamemisc  attributed-by=caller-vote  size=6161 */

void FUN_005654f0(int *param_1,int *param_2,byte *param_3)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  undefined2 *puVar9;
  uint uVar10;
  char *pcVar11;
  int *piVar12;
  short *psVar13;
  int *piVar14;
  ushort in_FPUControlWord;
  undefined8 local_ec;
  longlong local_e4;
  undefined8 local_dc;
  undefined8 local_d4;
  byte local_cc;
  undefined1 local_cb;
  int local_c8;
  undefined4 local_c4;
  int local_c0;
  undefined8 local_bc;
  undefined8 local_b4;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined8 local_94;
  uint local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  uint local_78;
  uint local_74;
  int local_70;
  int *local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  byte *local_58;
  uint local_54;
  int *local_50;
  uint local_4c;
  undefined1 *local_48;
  int *local_44;
  undefined4 *local_40;
  int *local_3c;
  uint *local_38;
  int local_34;
  undefined4 local_30;
  undefined1 *local_2c;
  uint *local_28;
  int local_24;
  undefined1 *local_20;
  short *local_1c;
  undefined2 local_18 [2];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_58 = param_3;
  local_c0 = param_1[0x79];
  iVar6 = *param_1;
  param_1[0x79] = param_1[0x7a];
  local_50 = param_1;
  local_6c = param_2;
  local_20 = (undefined1 *)0x1;
  param_1[0x7a] = param_1[0x7a] + 1;
  local_34 = iVar6;
  if ((((param_2 == (int *)0x0) || (*(char *)(iVar6 + 0x38) != '\0')) || (param_1[0x11] != 0)) ||
     (iVar3 = FUN_0054ab50(param_1,0x15,0,0,0), iVar3 != 0)) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  local_b4 = 0;
  local_ac = 0;
  local_a4 = 0;
  local_9c = 0;
  local_94 = 0;
  if (*local_58 < 5) {
    FUN_00556700(iVar6,param_2[0xe]);
    *(ushort *)((int)param_2 + 6) = *(ushort *)((int)param_2 + 6) & 0xfffe;
    param_2[0xe] = 0;
  }
  FUN_00567060(param_1,param_2,0);
  local_38 = (uint *)param_2[0xe];
  local_3c = (int *)*param_2;
  local_1c = (short *)param_2[10];
  if ((param_1[0x11] != 0) || (*(char *)(iVar6 + 0x38) != '\0')) goto LAB_00566ca5;
  local_40 = (undefined4 *)(*(ushort *)((int)param_2 + 6) >> 2 & 1);
  piVar4 = (int *)FUN_0055ab80(param_1);
  iVar6 = local_34;
  local_44 = piVar4;
  if (piVar4 == (int *)0x0) goto LAB_00566ca5;
  if ((1 < *local_3c) && ((*local_58 == 6 || (*local_58 == 7)))) {
    FUN_00553950(param_1,"only a single result allowed for a SELECT that is part of an expression");
    iVar6 = local_34;
    goto LAB_00566ca5;
  }
  local_28 = (uint *)0x0;
  iVar3 = param_2[0xf];
  psVar13 = local_1c;
  piVar14 = param_1;
  for (; (param_1 = local_50, local_50 = param_1, local_34 = iVar6, iVar3 == 0 &&
         ((int)local_28 < (int)*psVar13)); local_28 = (uint *)((int)local_28 + 1)) {
    local_24 = (int)local_28 * 9;
    local_4c = *(uint *)(psVar13 + (int)local_28 * 0x24 + 0xe);
    if (local_4c != 0) {
      if (*(int *)(psVar13 + (int)local_28 * 0x24 + 0x10) == 0) {
        iVar6 = FUN_00566e60(param_2);
        param_1[0x78] = param_1[0x78] + iVar6;
        local_54 = *(ushort *)(local_4c + 6) >> 2 & 1;
        iVar3 = FUN_00538dd0(param_1,param_2,local_28,local_40,local_54);
        iVar6 = local_24;
        if (iVar3 == 0) {
          if (((*local_1c == 1) && ((*(ushort *)((int)param_2 + 6) & 0x100) == 0)) &&
             ((*(ushort *)(local_34 + 0x34) & 0x100) == 0)) {
            param_1[0x13] = param_1[0x13] + 1;
            *(int *)(local_1c + local_24 * 4 + 0x12) = param_1[0x13];
            param_1[0x13] = param_1[0x13] + 1;
            iVar3 = param_1[0x13];
            FUN_00550aa0(local_50,0xffffffff);
            FUN_0056bdc0(piVar4,1);
            iVar6 = FUN_0056be30(piVar4,0x2c,*(undefined4 *)(local_1c + iVar6 * 4 + 0x1a));
            FUN_0056c490(piVar4,1);
            *(int *)(local_1c + local_24 * 4 + 0x10) = iVar6;
            FUN_0056be90(piVar4,7,0,iVar3);
            FUN_0056c490(piVar4,1);
            local_14 = *(undefined4 *)(local_1c + local_24 * 4 + 0x12);
            local_18[0] = 10;
            local_10 = 0;
            local_c = 0;
            *(char *)(local_1c + local_24 * 4 + 0x18) = (char)local_50[0x7a];
            FUN_005654f0(local_50,local_4c,local_18);
            local_30 = CONCAT22(in_FPUControlWord,(undefined2)local_30);
            local_54 = in_FPUControlWord | 0xc00;
            local_bc = (longlong)ROUND(*(double *)(local_4c + 0x20));
            *(undefined4 *)(*(int *)(local_1c + local_24 * 4 + 0xc) + 0x1c) = (undefined4)local_bc;
            *(uint *)(local_1c + local_24 * 4 + 0x16) =
                 *(uint *)(local_1c + local_24 * 4 + 0x16) | 4;
            FUN_0056c2e0(piVar4,iVar6,local_10);
            FUN_0056c300(piVar4,iVar6,local_c);
            FUN_0056be90(piVar4,7,1,iVar3);
            FUN_0056be30(piVar4,4,*(undefined4 *)(local_1c + local_24 * 4 + 0x12));
            FUN_00573d80(piVar4,iVar6 + -1);
            param_2 = local_6c;
            param_1 = local_50;
          }
          else {
            local_60 = 0;
            iVar6 = param_1[0x13] + 1;
            param_1[0x13] = iVar6;
            *(int *)(local_1c + local_24 * 4 + 0x12) = iVar6;
            local_5c = FUN_0056be90(piVar4,7,0,iVar6);
            *(int *)(local_1c + local_24 * 4 + 0x10) = local_5c + 1;
            if ((*(byte *)(local_1c + local_24 * 4 + 0x16) & 2) == 0) {
              local_60 = FUN_00550380(param_1);
            }
            local_14 = *(undefined4 *)(local_1c + local_24 * 4 + 0x1a);
            local_18[0] = 9;
            local_10 = 0;
            local_c = 0;
            *(char *)(local_1c + local_24 * 4 + 0x18) = (char)param_1[0x7a];
            FUN_005654f0(param_1,local_4c,local_18);
            local_30 = CONCAT22(in_FPUControlWord,(undefined2)local_30);
            local_54 = in_FPUControlWord | 0xc00;
            local_bc = (longlong)ROUND(*(double *)(local_4c + 0x20));
            *(undefined4 *)(*(int *)(local_1c + local_24 * 4 + 0xc) + 0x1c) = (undefined4)local_bc;
            if (local_60 != 0) {
              FUN_00573d80(piVar4,local_60);
            }
            uVar7 = FUN_0056be30(piVar4,3,*(undefined4 *)(local_1c + local_24 * 4 + 0x12));
            FUN_0056c2c0(piVar4,local_5c,uVar7);
          }
          param_1[0xf] = 0;
          *(undefined1 *)((int)param_1 + 0x13) = 0;
        }
        else {
          if (local_54 != 0) {
            *(ushort *)((int)param_2 + 6) = *(ushort *)((int)param_2 + 6) | 4;
            local_40 = (undefined4 *)0x1;
          }
          local_28 = (uint *)0xffffffff;
        }
        iVar6 = local_34;
        if (*(char *)(local_34 + 0x38) != '\0') goto LAB_00566ca5;
        iVar6 = FUN_00566e60(param_2);
        param_1[0x78] = param_1[0x78] - iVar6;
        psVar13 = (short *)param_2[10];
        local_1c = psVar13;
        if (4 < *local_58) {
          local_38 = (uint *)param_2[0xe];
        }
      }
      else if ((*(byte *)(psVar13 + (int)local_28 * 0x24 + 0x16) & 4) == 0) {
        FUN_0056be90(piVar4,2,*(undefined4 *)(psVar13 + (int)local_28 * 0x24 + 0x12),
                     *(undefined4 *)(psVar13 + (int)local_28 * 0x24 + 0x10));
        psVar13 = local_1c;
      }
    }
    iVar3 = param_2[0xf];
    iVar6 = local_34;
    piVar14 = param_1;
  }
  local_3c = (int *)*param_2;
  local_28 = (uint *)param_2[0xc];
  local_48 = (undefined1 *)param_2[0xb];
  local_60 = param_2[0xd];
  local_cc = *(byte *)((int)param_2 + 6) & 1;
  local_30 = CONCAT13(*(byte *)((int)param_2 + 6),(undefined3)local_30) & 0x1ffffff;
  if (param_2[0xf] != 0) {
    if (param_2[0x11] == 0) {
      iVar3 = 0;
      piVar4 = param_2;
      piVar12 = (int *)0x0;
      do {
        piVar5 = piVar4;
        piVar5[0x10] = (int)piVar12;
        piVar5[0x11] = (int)param_2;
        iVar3 = iVar3 + 1;
        piVar4 = (int *)piVar5[0xf];
        piVar12 = piVar5;
      } while ((int *)piVar5[0xf] != (int *)0x0);
      if ((*(int *)(iVar6 + 0x60) != 0) && (*(int *)(iVar6 + 0x60) < iVar3)) {
        FUN_00553950(piVar14,"too many terms in compound SELECT");
        param_1 = piVar14;
        goto LAB_00566ca5;
      }
    }
    FUN_0053e4b0(piVar14,param_2,local_58);
    piVar14[0x79] = local_c0;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar6 = FUN_00556680(local_28,local_38);
  if ((iVar6 == 0) && ((*(byte *)(local_34 + 0x34) & 4) == 0)) {
    local_38 = (uint *)0x0;
  }
  if (((*(byte *)((int)param_2 + 6) & 5) == 1) &&
     (iVar6 = FUN_00556680(local_38,*param_2), iVar6 == 0)) {
    *(ushort *)((int)param_2 + 6) = *(ushort *)((int)param_2 + 6) & 0xfffe;
    local_28 = (uint *)FUN_005567e0(local_34,*param_2,0);
    param_2[0xc] = (int)local_28;
    local_38 = (uint *)0x0;
LAB_00565a73:
    local_2c = (undefined1 *)0xffffffff;
  }
  else {
    if (local_38 == (uint *)0x0) goto LAB_00565a73;
    uVar7 = FUN_0053cc90(piVar14,local_38);
    local_38[1] = piVar14[0x12];
    piVar14[0x12] = piVar14[0x12] + 1;
    local_2c = (undefined1 *)FUN_0056bf50(piVar4,0x2a,local_38[1],*local_38 + 2,0,uVar7,0xfffffff0);
    param_2[6] = (int)local_2c;
  }
  if (*local_58 == 9) {
    FUN_0056be90(piVar4,0x2a,*(undefined4 *)(local_58 + 4),*local_3c);
  }
  uVar7 = FUN_005741e0(piVar4);
  local_bc = CONCAT44(uVar7,(undefined4)local_bc);
  param_2[8] = 0;
  param_2[9] = 0x43e00000;
  puVar8 = (undefined1 *)FUN_00532b80(piVar14,param_2,uVar7);
  if ((param_2[2] == 0) && (puVar8 = local_2c, -1 < (int)local_2c)) {
    puVar8 = (undefined1 *)FUN_005736b0(piVar4,local_2c);
    *puVar8 = 0x2b;
    *(ushort *)((int)param_2 + 6) = *(ushort *)((int)param_2 + 6) | 0x40;
  }
  if ((*(byte *)((int)param_2 + 6) & 1) == 0) {
    local_4c = (uint)puVar8 & 0xffffff00;
  }
  else {
    iVar6 = piVar14[0x12];
    piVar14[0x12] = iVar6 + 1;
    local_c8 = iVar6;
    uVar7 = FUN_0053cc90(piVar14,*local_6c,0xfffffff0);
    local_c4 = FUN_0056bf50(piVar4,0x2a,iVar6,0,0,uVar7);
    FUN_0056c490(piVar4,8);
    local_4c = 3;
    param_2 = local_6c;
  }
  local_cb = (undefined1)local_4c;
  if ((local_40 == (undefined4 *)0x0) && (local_28 == (uint *)0x0)) {
    if (local_30._3_1_ == '\0') {
      iVar6 = 0;
    }
    else {
      iVar6 = *param_2;
    }
    local_60 = FUN_005788a0(piVar14,local_1c,local_48,local_38,iVar6,0,0);
    iVar6 = local_34;
    param_1 = piVar14;
    if (local_60 == 0) goto LAB_00566ca5;
    if (*(double *)(local_60 + 0x30) < *(double *)(param_2 + 8)) {
      *(double *)(param_2 + 8) = *(double *)(local_60 + 0x30);
    }
    local_4c = local_4c & 0xff;
    if (*(byte *)(local_60 + 0xe) != 0) {
      local_4c = (uint)*(byte *)(local_60 + 0xe);
    }
    local_cb = (undefined1)local_4c;
    if (local_38 != (uint *)0x0) {
      local_44 = (int *)0x0;
      if ((uint)*(ushort *)(local_60 + 8) == *local_38) {
        local_38 = (uint *)0x0;
      }
    }
    if ((-1 < (int)local_2c) && (local_38 == (uint *)0x0)) {
      FUN_0056c4b0(piVar4,local_2c);
      param_2[6] = -1;
    }
    FUN_00548280(piVar14,param_2,local_3c,0,0,local_38,&local_cc,local_58,
                 *(undefined4 *)(local_60 + 0x14),*(undefined4 *)(local_60 + 0x18));
    FUN_005794a0(local_60);
  }
  else {
    local_78 = 0;
    local_2c = (undefined1 *)0x0;
    if (local_28 == (uint *)0x0) {
      param_2[8] = 0;
      param_2[9] = 0x3ff00000;
    }
    else {
      iVar6 = *(int *)*param_2;
      if (0 < iVar6) {
        puVar9 = (undefined2 *)(((int *)*param_2)[2] + 0x10);
        do {
          iVar6 = iVar6 + -1;
          *puVar9 = 0;
          puVar9 = puVar9 + 10;
          piVar4 = local_44;
        } while (0 < iVar6);
      }
      uVar10 = *local_28;
      if (0 < (int)uVar10) {
        puVar9 = (undefined2 *)(local_28[2] + 0x10);
        do {
          uVar10 = uVar10 - 1;
          *puVar9 = 0;
          puVar9 = puVar9 + 10;
        } while (0 < (int)uVar10);
      }
      if (100.0 < *(double *)(param_2 + 8)) {
        param_2[8] = 0;
        param_2[9] = 0x40590000;
      }
    }
    local_84 = FUN_005741e0(piVar4);
    local_dc = 0;
    local_d4 = 0;
    local_ec = CONCAT44(local_1c,piVar14);
    local_e4 = ZEXT48(&local_b4) << 0x20;
    if (local_28 == (uint *)0x0) {
      local_ac = local_ac & 0xffffffff;
    }
    else {
      local_ac = CONCAT44(*local_28 + 1,(undefined4)local_ac);
    }
    local_a4 = CONCAT44(local_a4._4_4_,local_28);
    FUN_00553cb0(&local_ec,local_3c);
    FUN_00553cb0(&local_ec,local_38);
    if (local_60 != 0) {
      FUN_00553d20(&local_ec,local_60);
    }
    local_9c = CONCAT44((int)local_9c,(int)local_9c);
    if (0 < local_94._4_4_) {
      iVar6 = 0;
      iVar3 = 0;
      bVar1 = local_d4._4_1_;
      do {
        local_d4 = CONCAT35(local_d4._5_3_,CONCAT14(bVar1,(undefined4)local_d4)) | 0x800000000;
        FUN_00553cb0(&local_ec,*(undefined4 *)(*(int *)(iVar6 + (int)local_94) + 0x10));
        bVar1 = local_d4._4_1_ & 0xf7;
        iVar3 = iVar3 + 1;
        local_d4 = local_d4 & 0xfffffff7ffffffff;
        iVar6 = iVar6 + 0x10;
        param_2 = local_6c;
        piVar14 = local_50;
      } while (iVar3 < local_94._4_4_);
    }
    iVar6 = local_34;
    param_1 = piVar14;
    if (*(char *)(local_34 + 0x38) != '\0') goto LAB_00566ca5;
    if (local_28 == (uint *)0x0) {
      local_70 = 0;
      local_40 = (undefined4 *)FUN_0053c7e0(param_2,&local_b4);
      if (local_40 == (undefined4 *)0x0) {
        local_44 = (int *)0x0;
        cVar2 = FUN_0053de70(param_2);
        local_30 = CONCAT13(cVar2,(undefined3)local_30);
        if (((cVar2 != '\0') &&
            (local_70 = FUN_005567e0(local_34,*(undefined4 *)(**(int **)(*param_2 + 8) + 0x10),0),
            local_44 = (int *)local_70, local_70 != 0)) && (*(char *)(local_34 + 0x38) == '\0')) {
          *(bool *)(*(int *)(local_70 + 8) + 0xc) = local_30._3_1_ != '\x01';
          *(undefined1 *)**(undefined4 **)(local_70 + 8) = 0x98;
        }
        FUN_00545ce0(piVar14,&local_b4);
        local_44 = (int *)FUN_005788a0(piVar14,local_1c,local_48,local_44,0,local_30 >> 0x18,0);
        iVar6 = local_34;
        if (local_44 == (int *)0x0) {
          FUN_00556700(local_34,local_70);
          goto LAB_00566ca5;
        }
        FUN_0057b3b0(piVar14,&local_b4);
        if ((short)local_44[2] != 0) {
          FUN_0056be90(piVar4,1,0,local_44[6]);
        }
        FUN_005794a0(local_44);
        FUN_00536ea0(piVar14,&local_b4);
      }
      else {
        local_44 = (int *)FUN_00565260(*piVar14,local_40[0x10]);
        local_80 = piVar14[0x12];
        piVar14[0x12] = local_80 + 1;
        local_54 = local_40[8];
        local_5c = 0;
        local_7c = 0;
        FUN_00550aa0(piVar14,local_44);
        FUN_005681e0(piVar14,local_44,local_40[8],0,*local_40);
        iVar6 = local_40[2];
        if (iVar6 != 0) {
          local_7c = 0;
          do {
            if ((*(char *)(iVar6 + 0x2e) == '\0') &&
               ((local_7c == 0 || (*(int *)(iVar6 + 0x24) < *(int *)(local_7c + 0x24))))) {
              local_7c = iVar6;
            }
            iVar6 = *(int *)(iVar6 + 0x14);
          } while (iVar6 != 0);
          param_2 = local_6c;
          if ((local_7c != 0) && (*(int *)(local_7c + 0x24) < (int)*(short *)((int)local_40 + 0x26))
             ) {
            local_54 = *(uint *)(local_7c + 0x28);
            local_5c = FUN_0055b2a0(piVar14,local_7c);
          }
        }
        FUN_0056bef0(piVar4,0x27,local_80,local_54,local_44);
        if (local_5c != 0) {
          local_64 = piVar4[1];
          iVar6 = *piVar4;
          if ((local_64 == 0) || (*(char *)(iVar6 + 0x38) != '\0')) {
            FUN_00539320(iVar6,0xfffffff0,local_5c);
          }
          else {
            iVar3 = piVar4[7] + -1;
            FUN_00539320(iVar6,(int)*(char *)(local_64 + 1 + iVar3 * 0x14),
                         *(undefined4 *)(local_64 + 0x10 + iVar3 * 0x14));
            *(int *)(local_64 + 0x10 + iVar3 * 0x14) = local_5c;
            *(undefined1 *)(local_64 + 1 + iVar3 * 0x14) = 0xfa;
            param_2 = local_6c;
          }
        }
        FUN_0056be90(piVar4,0x20,local_80,*(undefined4 *)((int)local_94 + 8));
        FUN_0056be30(piVar4,0x2d,local_80);
        FUN_005351c0(piVar14,local_40,local_7c);
      }
      local_38 = (uint *)0x0;
      FUN_00555f40(piVar14,local_60,local_84,8);
      FUN_00548280(piVar14,param_2,*param_2,0,0,0,0,local_58,local_84,local_84);
      FUN_00556700(local_34,local_70);
    }
    else {
      local_b4 = CONCAT44(piVar14[0x12],(undefined4)local_b4);
      piVar14[0x12] = piVar14[0x12] + 1;
      local_68 = FUN_0053cc90(piVar14,local_28);
      local_64 = FUN_0056bf50(piVar4,0x2b,local_b4._4_4_,local_ac._4_4_,0,local_68,0xfffffff0);
      piVar14[0x13] = piVar14[0x13] + 1;
      local_24 = piVar14[0x13];
      piVar14[0x13] = local_24 + 2;
      local_7c = FUN_005741e0(piVar4);
      piVar14[0x13] = piVar14[0x13] + 1;
      local_5c = piVar14[0x13];
      local_80 = FUN_005741e0(piVar4);
      local_70 = piVar14[0x13] + 1;
      iVar6 = piVar14[0x13] + *local_28;
      piVar14[0x13] = iVar6;
      local_40 = (undefined4 *)(iVar6 + 1);
      piVar14[0x13] = *local_28 + iVar6;
      FUN_0056be90(piVar4,7,0,local_24 + 1);
      FUN_0056be90(piVar4,7,0,local_24);
      FUN_0056bef0(piVar4,10,0,local_70,(*local_28 - 1) + local_70);
      FUN_0056be90(piVar4,2,local_5c,local_80);
      local_54 = FUN_005788a0(piVar14,local_1c,local_48,local_28,0,0,0);
      iVar6 = local_34;
      if (local_54 == 0) goto LAB_00566ca5;
      if ((uint)*(ushort *)(local_54 + 8) == *local_28) {
        local_30 = 0;
      }
      else {
        if ((local_30._3_1_ == '\0') ||
           (pcVar11 = "DISTINCT", (*(byte *)((int)param_2 + 6) & 1) != 0)) {
          pcVar11 = "GROUP BY";
        }
        FUN_005352d0(piVar14,pcVar11);
        local_20 = (undefined1 *)*local_28;
        local_8c = (int)local_20 + 1;
        local_30 = 1;
        local_78 = local_8c;
        if (0 < (int)local_9c) {
          piVar12 = (int *)(local_a4._4_4_ + 0xc);
          uVar10 = local_8c;
          iVar6 = (int)local_9c;
          do {
            if ((int)uVar10 <= *piVar12) {
              local_78 = local_78 + 1;
              uVar10 = uVar10 + 1;
            }
            piVar12 = piVar12 + 6;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        local_2c = (undefined1 *)piVar14[0x10];
        if (piVar14[0xf] < (int)local_78) {
          local_2c = (undefined1 *)(piVar14[0x13] + 1);
          piVar14[0x13] = piVar14[0x13] + local_78;
        }
        else {
          piVar14[0x10] = (int)local_2c + local_78;
          piVar14[0xf] = piVar14[0xf] - local_78;
        }
        FUN_00554130(piVar14);
        puVar8 = local_2c;
        FUN_005546b0(piVar14,local_28,local_2c,0);
        FUN_0056be90(piVar4,0x37,local_b4._4_4_,(int)local_20 + (int)puVar8);
        local_20 = (undefined1 *)0x0;
        if (0 < (int)local_9c) {
          puVar8 = (undefined1 *)((int)puVar8 + local_8c);
          iVar6 = 0;
          uVar10 = local_8c;
          local_48 = puVar8;
          do {
            if ((int)uVar10 <= *(int *)(iVar6 + 0xc + local_a4._4_4_)) {
              puVar8 = (undefined1 *)
                       FUN_00554760(piVar14,*(undefined4 *)(iVar6 + local_a4._4_4_),
                                    *(undefined4 *)(iVar6 + 8 + local_a4._4_4_),
                                    *(undefined4 *)(iVar6 + 4 + local_a4._4_4_),puVar8,0);
              if (local_48 != puVar8) {
                FUN_0056be90(piVar4,0xf,puVar8,local_48);
              }
              uVar10 = local_8c + 1;
              puVar8 = local_48 + 1;
              local_8c = uVar10;
              local_48 = puVar8;
            }
            local_20 = (undefined1 *)((int)local_20 + 1);
            iVar6 = iVar6 + 0x18;
          } while ((int)local_20 < (int)local_9c);
        }
        if (*(char *)((int)piVar14 + 0x13) == '\0') {
          piVar14[0x13] = piVar14[0x13] + 1;
          iVar6 = piVar14[0x13];
        }
        else {
          bVar1 = *(char *)((int)piVar14 + 0x13) - 1;
          *(byte *)((int)piVar14 + 0x13) = bVar1;
          iVar6 = piVar14[bVar1 + 7];
        }
        local_20 = (undefined1 *)piVar4[7];
        if (((int)local_20 < piVar4[8]) || (iVar3 = FUN_0053b4b0(piVar4), iVar3 == 0)) {
          piVar4[7] = piVar4[7] + 1;
          iVar3 = piVar4[1];
          *(undefined1 **)(iVar3 + 4 + (int)local_20 * 0x14) = local_2c;
          *(undefined2 *)(iVar3 + (int)local_20 * 0x14) = 0x1f;
          *(undefined1 *)(iVar3 + 3 + (int)local_20 * 0x14) = 0;
          *(uint *)(iVar3 + 8 + (int)local_20 * 0x14) = local_78;
          *(int *)(iVar3 + 0xc + (int)local_20 * 0x14) = iVar6;
          *(undefined4 *)(iVar3 + 0x10 + (int)local_20 * 0x14) = 0;
        }
        local_48 = local_b4._4_4_;
        local_20 = (undefined1 *)piVar4[7];
        if (((int)local_20 < piVar4[8]) || (iVar3 = FUN_0053b4b0(piVar4), iVar3 == 0)) {
          piVar4[7] = piVar4[7] + 1;
          iVar3 = piVar4[1];
          *(undefined2 *)(iVar3 + (int)local_20 * 0x14) = 0x60;
          *(undefined1 *)(iVar3 + 3 + (int)local_20 * 0x14) = 0;
          *(undefined1 **)(iVar3 + 4 + (int)local_20 * 0x14) = local_48;
          *(int *)(iVar3 + 8 + (int)local_20 * 0x14) = iVar6;
          *(undefined4 *)(iVar3 + 0xc + (int)local_20 * 0x14) = 0;
          *(undefined4 *)(iVar3 + 0x10 + (int)local_20 * 0x14) = 0;
        }
        uVar10 = local_78;
        if ((iVar6 != 0) && (*(byte *)((int)piVar14 + 0x13) < 8)) {
          iVar3 = 0;
          piVar12 = piVar14 + 0x19;
          do {
            if (piVar12[4] == iVar6) {
              *(undefined1 *)(piVar12 + 2) = 1;
              goto LAB_0056610e;
            }
            iVar3 = iVar3 + 1;
            piVar12 = piVar12 + 6;
          } while (iVar3 < 10);
          piVar14[*(byte *)((int)piVar14 + 0x13) + 7] = iVar6;
          *(char *)((int)piVar14 + 0x13) = *(char *)((int)piVar14 + 0x13) + '\x01';
        }
LAB_0056610e:
        FUN_00554430(piVar14,local_2c,local_78);
        if (piVar14[0xf] < (int)uVar10) {
          piVar14[0xf] = uVar10;
          piVar14[0x10] = (int)local_2c;
        }
        FUN_005794a0(local_54);
        local_78 = piVar14[0x12];
        local_ac = CONCAT44(local_ac._4_4_,local_78);
        piVar14[0x12] = local_78 + 1;
        if (*(char *)((int)piVar14 + 0x13) == '\0') {
          piVar14[0x13] = piVar14[0x13] + 1;
          local_2c = (undefined1 *)piVar14[0x13];
        }
        else {
          bVar1 = *(char *)((int)piVar14 + 0x13) - 1;
          *(byte *)((int)piVar14 + 0x13) = bVar1;
          local_2c = (undefined1 *)piVar14[bVar1 + 7];
        }
        local_20 = (undefined1 *)piVar4[7];
        if (((int)local_20 < piVar4[8]) || (iVar6 = FUN_0053b4b0(piVar4), iVar6 == 0)) {
          piVar4[7] = piVar4[7] + 1;
          iVar6 = piVar4[1];
          *(uint *)(iVar6 + 4 + (int)local_20 * 0x14) = local_78;
          *(undefined2 *)(iVar6 + (int)local_20 * 0x14) = 0x2c;
          *(undefined1 *)(iVar6 + 3 + (int)local_20 * 0x14) = 0;
          *(undefined1 **)(iVar6 + 8 + (int)local_20 * 0x14) = local_2c;
          *(uint *)(iVar6 + 0xc + (int)local_20 * 0x14) = uVar10;
          *(undefined4 *)(iVar6 + 0x10 + (int)local_20 * 0x14) = 0;
        }
        iVar6 = piVar4[7];
        local_20 = local_b4._4_4_;
        if ((iVar6 < piVar4[8]) || (iVar3 = FUN_0053b4b0(piVar4), iVar3 == 0)) {
          iVar3 = piVar4[1];
          piVar4[7] = piVar4[7] + 1;
          *(undefined1 **)(iVar3 + 4 + iVar6 * 0x14) = local_20;
          *(undefined2 *)(iVar3 + iVar6 * 0x14) = 0x46;
          *(undefined1 *)(iVar3 + 3 + iVar6 * 0x14) = 0;
          *(int *)(iVar3 + 8 + iVar6 * 0x14) = local_84;
          *(undefined4 *)(iVar3 + 0xc + iVar6 * 0x14) = 0;
          *(undefined4 *)(iVar3 + 0x10 + iVar6 * 0x14) = 0;
        }
        local_b4._0_2_ = CONCAT11(1,(undefined1)local_b4);
        FUN_00554130(piVar14);
      }
      local_88 = piVar4[7];
      FUN_00554130(piVar14);
      if (local_30 != 0) {
        iVar6 = piVar4[7];
        local_20 = local_b4._4_4_;
        if ((iVar6 < piVar4[8]) || (iVar3 = FUN_0053b4b0(piVar4), iVar3 == 0)) {
          iVar3 = piVar4[1];
          piVar4[7] = piVar4[7] + 1;
          *(undefined1 **)(iVar3 + 4 + iVar6 * 0x14) = local_20;
          *(undefined2 *)(iVar3 + iVar6 * 0x14) = 0x3e;
          *(undefined1 *)(iVar3 + 3 + iVar6 * 0x14) = 0;
          *(undefined1 **)(iVar3 + 8 + iVar6 * 0x14) = local_2c;
          *(undefined4 *)(iVar3 + 0xc + iVar6 * 0x14) = 0;
          *(undefined4 *)(iVar3 + 0x10 + iVar6 * 0x14) = 0;
        }
      }
      local_2c = (undefined1 *)0x0;
      if (0 < (int)*local_28) {
        do {
          puVar8 = local_2c;
          if (local_30 == 0) {
            local_b4 = CONCAT71(local_b4._1_7_,1);
            local_48 = (undefined1 *)((int)local_40 + (int)local_2c);
            pcVar11 = *(char **)(local_28[2] + (int)local_2c * 0x14);
            if ((pcVar11 == (char *)0x0) || (*pcVar11 != -0x7c)) {
              local_20 = (undefined1 *)FUN_00554e20(piVar14,pcVar11,local_48);
              if (((local_20 != local_48) && (iVar6 = piVar14[2], puVar8 = local_2c, iVar6 != 0)) &&
                 ((local_74 = *(uint *)(iVar6 + 0x1c), (int)local_74 < *(int *)(iVar6 + 0x20) ||
                  (iVar3 = FUN_0053b4b0(iVar6), puVar8 = local_2c, iVar3 == 0)))) {
                *(int *)(iVar6 + 0x1c) = *(int *)(iVar6 + 0x1c) + 1;
                iVar6 = *(int *)(iVar6 + 4);
                *(undefined1 **)(iVar6 + 4 + local_74 * 0x14) = local_20;
                *(undefined2 *)(iVar6 + local_74 * 0x14) = 0xf;
                uVar10 = local_74;
                goto LAB_005663c0;
              }
            }
            else {
              local_74 = *(uint *)(pcVar11 + 0x18);
              local_20 = (undefined1 *)piVar14[2];
              local_8c = *(uint *)(local_20 + 0x1c);
              if (((int)local_8c < *(int *)(local_20 + 0x20)) ||
                 (iVar6 = FUN_0053b4b0(local_20), iVar6 == 0)) {
                *(int *)(local_20 + 0x1c) = *(int *)(local_20 + 0x1c) + 1;
                iVar6 = *(int *)(local_20 + 4);
                *(undefined2 *)(iVar6 + local_8c * 0x14) = 0xe;
                *(uint *)(iVar6 + 4 + local_8c * 0x14) = local_74;
                uVar10 = local_8c;
LAB_005663c0:
                *(undefined4 *)(iVar6 + 0x10 + uVar10 * 0x14) = 0;
                *(undefined4 *)(iVar6 + 0xc + uVar10 * 0x14) = 0;
                *(undefined1 **)(iVar6 + 8 + uVar10 * 0x14) = local_48;
                *(undefined1 *)(iVar6 + 3 + uVar10 * 0x14) = 0;
                puVar8 = local_2c;
              }
            }
          }
          else {
            local_20 = (undefined1 *)piVar4[7];
            if (((int)local_20 < piVar4[8]) || (iVar6 = FUN_0053b4b0(piVar4), iVar6 == 0)) {
              iVar6 = piVar4[1];
              piVar4[7] = piVar4[7] + 1;
              *(uint *)(iVar6 + 4 + (int)local_20 * 0x14) = local_78;
              *(undefined2 *)(iVar6 + (int)local_20 * 0x14) = 0x1d;
              *(undefined1 *)(iVar6 + 3 + (int)local_20 * 0x14) = 0;
              *(undefined1 **)(iVar6 + 8 + (int)local_20 * 0x14) = puVar8;
              *(undefined1 **)(iVar6 + 0xc + (int)local_20 * 0x14) =
                   (undefined1 *)((int)local_40 + (int)puVar8);
              *(undefined4 *)(iVar6 + 0x10 + (int)local_20 * 0x14) = 0;
            }
            if ((puVar8 == (undefined1 *)0x0) && (piVar4[1] != 0)) {
              *(undefined1 *)(piVar4[1] + -0x11 + piVar4[7] * 0x14) = 0x20;
            }
          }
          local_2c = puVar8 + 1;
        } while ((int)local_2c < (int)*local_28);
      }
      iVar6 = piVar4[7];
      local_74 = *local_28;
      if ((iVar6 < piVar4[8]) || (iVar3 = FUN_0053b4b0(piVar4), iVar3 == 0)) {
        iVar3 = piVar4[1];
        piVar4[7] = piVar4[7] + 1;
        *(int *)(iVar3 + 4 + iVar6 * 0x14) = local_70;
        *(undefined4 **)(iVar3 + 8 + iVar6 * 0x14) = local_40;
        *(undefined2 *)(iVar3 + iVar6 * 0x14) = 0x18;
        *(undefined1 *)(iVar3 + 3 + iVar6 * 0x14) = 0;
        *(uint *)(iVar3 + 0xc + iVar6 * 0x14) = local_74;
        *(undefined4 *)(iVar3 + 0x10 + iVar6 * 0x14) = 0;
      }
      else {
        iVar6 = 1;
      }
      FUN_0056c320(piVar4,iVar6,local_68,0xfffffffa);
      uVar10 = piVar4[7];
      local_74 = uVar10;
      if (((int)uVar10 < piVar4[8]) || (iVar6 = FUN_0053b4b0(piVar4), iVar6 == 0)) {
        iVar6 = piVar4[1];
        piVar4[7] = piVar4[7] + 1;
        *(undefined2 *)(iVar6 + uVar10 * 0x14) = 0x19;
        *(undefined1 *)(iVar6 + 3 + uVar10 * 0x14) = 0;
        *(uint *)(iVar6 + 4 + uVar10 * 0x14) = uVar10 + 1;
        *(undefined4 *)(iVar6 + 8 + uVar10 * 0x14) = 0;
        *(uint *)(iVar6 + 0xc + uVar10 * 0x14) = uVar10 + 1;
        *(undefined4 *)(iVar6 + 0x10 + uVar10 * 0x14) = 0;
      }
      FUN_00554ca0(piVar14,local_40,local_70,*local_28);
      local_68 = piVar4[7];
      if ((local_68 < piVar4[8]) || (iVar6 = FUN_0053b4b0(piVar4), iVar6 == 0)) {
        piVar4[7] = piVar4[7] + 1;
        iVar6 = piVar4[1];
        *(int *)(iVar6 + 4 + local_68 * 0x14) = local_24 + 2;
        *(undefined2 *)(iVar6 + local_68 * 0x14) = 2;
        *(undefined1 *)(iVar6 + 3 + local_68 * 0x14) = 0;
        *(int *)(iVar6 + 8 + local_68 * 0x14) = local_7c;
        *(undefined4 *)(iVar6 + 0xc + local_68 * 0x14) = 0;
        *(undefined4 *)(iVar6 + 0x10 + local_68 * 0x14) = 0;
        uVar10 = local_74;
        piVar14 = local_50;
      }
      local_68 = piVar4[7];
      if ((local_68 < piVar4[8]) || (iVar6 = FUN_0053b4b0(piVar4), iVar6 == 0)) {
        piVar4[7] = piVar4[7] + 1;
        iVar6 = piVar4[1];
        *(int *)(iVar6 + 4 + local_68 * 0x14) = local_24 + 1;
        *(undefined2 *)(iVar6 + local_68 * 0x14) = 0x78;
        *(undefined1 *)(iVar6 + 3 + local_68 * 0x14) = 0;
        *(int *)(iVar6 + 8 + local_68 * 0x14) = local_84;
        *(undefined4 *)(iVar6 + 0xc + local_68 * 0x14) = 0;
        *(undefined4 *)(iVar6 + 0x10 + local_68 * 0x14) = 0;
        piVar14 = local_50;
      }
      local_68 = piVar4[7];
      if ((local_68 < piVar4[8]) || (iVar6 = FUN_0053b4b0(piVar4), iVar6 == 0)) {
        piVar4[7] = piVar4[7] + 1;
        iVar6 = piVar4[1];
        *(int *)(iVar6 + 4 + local_68 * 0x14) = local_5c;
        *(undefined2 *)(iVar6 + local_68 * 0x14) = 2;
        *(undefined1 *)(iVar6 + 3 + local_68 * 0x14) = 0;
        *(int *)(iVar6 + 8 + local_68 * 0x14) = local_80;
        *(undefined4 *)(iVar6 + 0xc + local_68 * 0x14) = 0;
        *(undefined4 *)(iVar6 + 0x10 + local_68 * 0x14) = 0;
      }
      if ((-1 < (int)uVar10) && (uVar10 < (uint)piVar4[7])) {
        *(int *)(piVar4[1] + 8 + uVar10 * 0x14) = piVar4[7];
      }
      FUN_0057b3b0(piVar14,&local_b4);
      iVar6 = piVar4[7];
      if ((iVar6 < piVar4[8]) || (iVar3 = FUN_0053b4b0(piVar4), iVar3 == 0)) {
        iVar3 = piVar4[1];
        piVar4[7] = piVar4[7] + 1;
        *(undefined2 *)(iVar3 + iVar6 * 0x14) = 7;
        *(undefined1 *)(iVar3 + 3 + iVar6 * 0x14) = 0;
        *(undefined4 *)(iVar3 + 4 + iVar6 * 0x14) = 1;
        *(int *)(iVar3 + 8 + iVar6 * 0x14) = local_24;
        *(undefined4 *)(iVar3 + 0xc + iVar6 * 0x14) = 0;
        *(undefined4 *)(iVar3 + 0x10 + iVar6 * 0x14) = 0;
      }
      if (local_30 == 0) {
        FUN_005794a0(local_54);
        iVar6 = local_64;
        local_88 = piVar4[1];
        if (local_88 != 0) {
          FUN_00539320(*piVar4,(int)*(char *)(local_88 + 1 + local_64 * 0x14),
                       *(undefined4 *)(local_88 + 0x10 + local_64 * 0x14));
          *(undefined8 *)(local_88 + iVar6 * 0x14) = 0;
          *(undefined8 *)(local_88 + 8 + iVar6 * 0x14) = 0;
          *(undefined4 *)(local_88 + 0x10 + iVar6 * 0x14) = 0;
          *(undefined1 *)(local_88 + iVar6 * 0x14) = 0x95;
        }
      }
      else {
        iVar6 = piVar4[7];
        local_68 = (int)local_b4._4_4_;
        if ((iVar6 < piVar4[8]) || (iVar3 = FUN_0053b4b0(piVar4), iVar3 == 0)) {
          iVar3 = piVar4[1];
          piVar4[7] = piVar4[7] + 1;
          *(int *)(iVar3 + 4 + iVar6 * 0x14) = local_68;
          *(undefined2 *)(iVar3 + iVar6 * 0x14) = 0x51;
          *(undefined1 *)(iVar3 + 3 + iVar6 * 0x14) = 0;
          *(int *)(iVar3 + 8 + iVar6 * 0x14) = local_88;
          *(undefined4 *)(iVar3 + 0xc + iVar6 * 0x14) = 0;
          *(undefined4 *)(iVar3 + 0x10 + iVar6 * 0x14) = 0;
        }
      }
      iVar6 = piVar4[7];
      if ((iVar6 < piVar4[8]) || (iVar3 = FUN_0053b4b0(piVar4), iVar3 == 0)) {
        piVar4[7] = piVar4[7] + 1;
        iVar3 = piVar4[1];
        *(int *)(iVar3 + 4 + iVar6 * 0x14) = local_24 + 2;
        *(undefined2 *)(iVar3 + iVar6 * 0x14) = 2;
        *(undefined1 *)(iVar3 + 3 + iVar6 * 0x14) = 0;
        *(int *)(iVar3 + 8 + iVar6 * 0x14) = local_7c;
        *(undefined4 *)(iVar3 + 0xc + iVar6 * 0x14) = 0;
        *(undefined4 *)(iVar3 + 0x10 + iVar6 * 0x14) = 0;
        piVar14 = local_50;
      }
      iVar6 = piVar4[7];
      if ((iVar6 < piVar4[8]) || (iVar3 = FUN_0053b4b0(piVar4), iVar3 == 0)) {
        iVar3 = piVar4[1];
        piVar4[7] = piVar4[7] + 1;
        *(undefined2 *)(iVar3 + iVar6 * 0x14) = 1;
        *(undefined1 *)(iVar3 + 3 + iVar6 * 0x14) = 0;
        *(undefined4 *)(iVar3 + 4 + iVar6 * 0x14) = 0;
        *(int *)(iVar3 + 8 + iVar6 * 0x14) = local_84;
        *(undefined4 *)(iVar3 + 0xc + iVar6 * 0x14) = 0;
        *(undefined4 *)(iVar3 + 0x10 + iVar6 * 0x14) = 0;
      }
      iVar6 = piVar4[7];
      local_88 = iVar6;
      if ((iVar6 < piVar4[8]) || (iVar3 = FUN_0053b4b0(piVar4), iVar3 == 0)) {
        piVar4[7] = piVar4[7] + 1;
        iVar3 = piVar4[1];
        *(undefined2 *)(iVar3 + iVar6 * 0x14) = 7;
        *(undefined1 *)(iVar3 + 3 + iVar6 * 0x14) = 0;
        *(undefined4 *)(iVar3 + 4 + iVar6 * 0x14) = 1;
        *(int *)(iVar3 + 8 + iVar6 * 0x14) = local_24 + 1;
        *(undefined4 *)(iVar3 + 0xc + iVar6 * 0x14) = 0;
        *(undefined4 *)(iVar3 + 0x10 + iVar6 * 0x14) = 0;
      }
      iVar6 = piVar4[7];
      if ((iVar6 < piVar4[8]) || (iVar3 = FUN_0053b4b0(piVar4), iVar3 == 0)) {
        piVar4[7] = piVar4[7] + 1;
        iVar3 = piVar4[1];
        *(undefined2 *)(iVar3 + iVar6 * 0x14) = 3;
        *(undefined1 *)(iVar3 + 3 + iVar6 * 0x14) = 0;
        *(int *)(iVar3 + 4 + iVar6 * 0x14) = local_24 + 2;
        *(undefined4 *)(iVar3 + 8 + iVar6 * 0x14) = 0;
        *(undefined4 *)(iVar3 + 0xc + iVar6 * 0x14) = 0;
        *(undefined4 *)(iVar3 + 0x10 + iVar6 * 0x14) = 0;
        piVar14 = local_50;
      }
      if (piVar4[10] != 0) {
        *(int *)(piVar4[10] - (local_7c * 4 + 4)) = piVar4[7];
      }
      iVar6 = piVar4[7];
      if ((iVar6 < piVar4[8]) || (iVar3 = FUN_0053b4b0(piVar4), iVar3 == 0)) {
        iVar3 = piVar4[1];
        piVar4[7] = piVar4[7] + 1;
        *(int *)(iVar3 + 4 + iVar6 * 0x14) = local_24;
        *(undefined2 *)(iVar3 + iVar6 * 0x14) = 0x78;
        *(undefined1 *)(iVar3 + 3 + iVar6 * 0x14) = 0;
        *(int *)(iVar3 + 8 + iVar6 * 0x14) = iVar6 + 2;
        *(undefined4 *)(iVar3 + 0xc + iVar6 * 0x14) = 0;
        *(undefined4 *)(iVar3 + 0x10 + iVar6 * 0x14) = 0;
      }
      local_64 = piVar4[7];
      if ((local_64 < piVar4[8]) || (iVar3 = FUN_0053b4b0(piVar4), iVar3 == 0)) {
        piVar4[7] = piVar4[7] + 1;
        iVar3 = piVar4[1];
        *(undefined2 *)(iVar3 + local_64 * 0x14) = 3;
        *(undefined1 *)(iVar3 + 3 + local_64 * 0x14) = 0;
        *(int *)(iVar3 + 4 + local_64 * 0x14) = local_24 + 2;
        *(undefined4 *)(iVar3 + 8 + local_64 * 0x14) = 0;
        *(undefined4 *)(iVar3 + 0xc + local_64 * 0x14) = 0;
        *(undefined4 *)(iVar3 + 0x10 + local_64 * 0x14) = 0;
        piVar4 = local_44;
        piVar14 = local_50;
      }
      FUN_00536ea0(piVar14,&local_b4);
      FUN_00555f40(piVar14,local_60,iVar6 + 1,8);
      param_2 = local_6c;
      FUN_00548280(piVar14,local_6c,*local_6c,0,0,local_38,&local_cc,local_58,iVar6 + 1,local_88);
      local_64 = piVar4[7];
      if ((local_64 < piVar4[8]) || (iVar6 = FUN_0053b4b0(piVar4), iVar6 == 0)) {
        piVar4[7] = piVar4[7] + 1;
        iVar6 = piVar4[1];
        *(undefined2 *)(iVar6 + local_64 * 0x14) = 3;
        *(undefined1 *)(iVar6 + 3 + local_64 * 0x14) = 0;
        *(int *)(iVar6 + 4 + local_64 * 0x14) = local_24 + 2;
        *(undefined4 *)(iVar6 + 8 + local_64 * 0x14) = 0;
        *(undefined4 *)(iVar6 + 0xc + local_64 * 0x14) = 0;
        *(undefined4 *)(iVar6 + 0x10 + local_64 * 0x14) = 0;
        piVar14 = local_50;
      }
      if (piVar4[10] != 0) {
        *(int *)(piVar4[10] - (local_80 * 4 + 4)) = piVar4[7];
      }
      FUN_00545ce0(piVar14,&local_b4);
      local_64 = piVar4[7];
      if ((local_64 < piVar4[8]) || (iVar6 = FUN_0053b4b0(piVar4), iVar6 == 0)) {
        piVar4[7] = piVar4[7] + 1;
        iVar6 = piVar4[1];
        *(undefined2 *)(iVar6 + local_64 * 0x14) = 3;
        *(undefined1 *)(iVar6 + 3 + local_64 * 0x14) = 0;
        *(int *)(iVar6 + 4 + local_64 * 0x14) = local_5c;
        *(undefined4 *)(iVar6 + 8 + local_64 * 0x14) = 0;
        *(undefined4 *)(iVar6 + 0xc + local_64 * 0x14) = 0;
        *(undefined4 *)(iVar6 + 0x10 + local_64 * 0x14) = 0;
      }
    }
    if (piVar4[10] != 0) {
      *(int *)(piVar4[10] - (local_84 * 4 + 4)) = piVar4[7];
    }
  }
  if ((char)local_4c == '\x03') {
    FUN_005352d0(piVar14,"DISTINCT");
  }
  if (local_38 != (uint *)0x0) {
    FUN_005352d0(piVar14,"ORDER BY");
    FUN_0053a0f0(piVar14,param_2,piVar4,*local_3c,local_58);
  }
  if (piVar4[10] != 0) {
    *(int *)(piVar4[10] - (local_bc._4_4_ * 4 + 4)) = piVar4[7];
  }
  local_20 = (undefined1 *)0x0;
  iVar6 = local_34;
  param_1 = piVar14;
LAB_00566ca5:
  param_1[0x79] = local_c0;
  if ((local_20 == (undefined1 *)0x0) && (*local_58 == 5)) {
    FUN_00539ac0(param_1,local_1c,local_3c);
  }
  FUN_005521a0(iVar6,local_a4._4_4_);
  FUN_005521a0(iVar6,(int)local_94);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00566d10 @ 00566d10  kind=gamemisc  attributed-by=caller-vote  size=35 */

void FUN_00566d10(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_005303a0(param_1,param_2);
    FUN_005521a0(param_1,param_2);
  }
  return;
}


/* FUN_00566d40 @ 00566d40  kind=gamemisc  attributed-by=caller-vote  size=278 */

undefined4 * FUN_00566d40(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_2 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar1 = (undefined4 *)FUN_00552230(param_1,0x50);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  uVar2 = FUN_005567e0(param_1,*param_2,param_3);
  *puVar1 = uVar2;
  uVar2 = FUN_00567420(param_1,param_2[10],param_3);
  puVar1[10] = uVar2;
  uVar2 = FUN_00536250(param_1,param_2[0xb],param_3,0);
  puVar1[0xb] = uVar2;
  uVar2 = FUN_005567e0(param_1,param_2[0xc],param_3);
  puVar1[0xc] = uVar2;
  uVar2 = FUN_00536250(param_1,param_2[0xd],param_3,0);
  puVar1[0xd] = uVar2;
  uVar2 = FUN_005567e0(param_1,param_2[0xe],param_3);
  puVar1[0xe] = uVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_2 + 1);
  iVar3 = FUN_00566d40(param_1,param_2[0xf],param_3);
  puVar1[0xf] = iVar3;
  if (iVar3 != 0) {
    *(undefined4 **)(iVar3 + 0x40) = puVar1;
  }
  puVar1[0x10] = 0;
  uVar2 = FUN_00536250(param_1,param_2[0x12],param_3,0);
  puVar1[0x12] = uVar2;
  uVar2 = FUN_00536250(param_1,param_2[0x13],param_3,0);
  puVar1[0x13] = uVar2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(ushort *)((int)puVar1 + 6) = *(ushort *)((int)param_2 + 6) & 0xfff7;
  puVar1[0x11] = 0;
  puVar1[4] = 0xffffffff;
  puVar1[5] = 0xffffffff;
  puVar1[6] = 0xffffffff;
  return puVar1;
}


/* FUN_00566e60 @ 00566e60  kind=gamemisc  attributed-by=caller-vote  size=33 */

undefined4 FUN_00566e60(undefined4 param_1)

{
  undefined4 local_8;
  
  local_8 = 0;
  FUN_0053b770(param_1,&local_8);
  return local_8;
}


/* FUN_00566e90 @ 00566e90  kind=gamemisc  attributed-by=caller-vote  size=455 */

void FUN_00566e90(int *param_1,int *param_2,void *param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,int param_8,undefined4 param_9,
                 undefined4 param_10)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *_Dst;
  undefined1 *_Dst_00;
  int iVar4;
  undefined4 local_58 [20];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar2 = *param_1;
  _Dst = (undefined4 *)FUN_00552230(iVar2,0x50);
  if ((_Dst == (undefined4 *)0x0) || (memset(_Dst,0,0x50), _Dst == (undefined4 *)0x0)) {
    _Dst = local_58;
    memset(_Dst,0,0x50);
  }
  if (param_2 == (int *)0x0) {
    _Dst_00 = (undefined1 *)FUN_00552230(iVar2,0x2d);
    if (_Dst_00 != (undefined1 *)0x0) {
      memset(_Dst_00,0,0x2d);
      *(undefined2 *)(_Dst_00 + 0x1e) = 0xffff;
      *_Dst_00 = 0x71;
      *(undefined1 **)(_Dst_00 + 4) = _Dst_00 + 0x2c;
      _Dst_00[0x2c] = 0;
      *(undefined4 *)(_Dst_00 + 0x14) = 1;
    }
    iVar3 = *param_1;
    param_2 = (int *)FUN_00552230(iVar3,0xc);
    if (param_2 != (int *)0x0) {
      param_2[0] = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      iVar4 = FUN_00552230(iVar3,0x14);
      param_2[2] = iVar4;
      if (iVar4 != 0) {
        puVar1 = (undefined8 *)(iVar4 + *param_2 * 0x14);
        *param_2 = *param_2 + 1;
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined4 *)(puVar1 + 2) = 0;
        *(undefined1 **)puVar1 = _Dst_00;
        goto LAB_00566f9e;
      }
    }
    FUN_00555e30(iVar3,_Dst_00);
    FUN_00556700(iVar3,param_2);
    param_2 = (int *)0x0;
  }
LAB_00566f9e:
  *_Dst = param_2;
  if ((param_3 == (void *)0x0) &&
     (param_3 = (void *)FUN_00552230(iVar2,0x50), param_3 != (void *)0x0)) {
    memset(param_3,0,0x50);
  }
  _Dst[0xb] = param_4;
  _Dst[0xc] = param_5;
  _Dst[0xd] = param_6;
  _Dst[0xe] = param_7;
  _Dst[10] = param_3;
  *(undefined1 *)(_Dst + 1) = 0x74;
  *(ushort *)((int)_Dst + 6) = (ushort)(param_8 != 0);
  _Dst[0x12] = param_9;
  _Dst[0x13] = param_10;
  _Dst[4] = 0xffffffff;
  _Dst[5] = 0xffffffff;
  _Dst[6] = 0xffffffff;
  if (*(char *)(iVar2 + 0x38) == '\0') {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  FUN_005303a0(iVar2,_Dst);
  if (_Dst != local_58) {
    FUN_005521a0(iVar2,_Dst);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00567060 @ 00567060  kind=gamemisc  attributed-by=caller-vote  size=131 */

void FUN_00567060(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  code *local_18;
  code *local_14;
  int *local_10;
  
  if ((param_2 != 0) && (iVar1 = *param_1, (*(byte *)(param_2 + 6) & 0x20) == 0)) {
    local_14 = FUN_00547b70;
    local_18 = plasma::Shape::vfunction14;
    local_10 = param_1;
    FUN_00578760(&local_18,param_2);
    if ((param_1[0x11] == 0) &&
       (((*(char *)(iVar1 + 0x38) == '\0' &&
         (FUN_00564230(param_1,param_2,param_3), param_1[0x11] == 0)) &&
        (*(char *)(iVar1 + 0x38) == '\0')))) {
      local_14 = FUN_00547860;
      local_18 = plasma::Shape::vfunction14;
      local_10 = param_1;
      FUN_00578760(&local_18,param_2);
    }
  }
  return;
}


/* FUN_005670f0 @ 005670f0  kind=gamemisc  attributed-by=caller-vote  size=139 */

void FUN_005670f0(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
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
  local_58 = *(undefined4 *)(param_2 + 0x50);
  local_60 = 0;
  local_5c = 0x46;
  local_53 = 1;
  local_54 = '\0';
  local_6c = param_2;
  local_64 = local_68;
  FUN_0056aa30(&local_6c,1,param_3,&stack0x00000010);
  uVar1 = FUN_00567fb0(&local_6c);
  if (local_54 != '\0') {
    *(undefined1 *)(param_2 + 0x38) = 1;
  }
  FUN_005521a0(param_2,*param_1);
  *param_1 = uVar1;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00567180 @ 00567180  kind=gamemisc  attributed-by=caller-vote  size=181 */

short * FUN_00567180(int param_1,short *param_2,int *param_3,int *param_4)

{
  int iVar1;
  short *psVar2;
  undefined4 uVar3;
  
  if (param_2 == (short *)0x0) {
    param_2 = (short *)FUN_00552230(param_1,0x50);
    if ((param_2 == (short *)0x0) || (memset(param_2,0,0x50), param_2 == (short *)0x0)) {
      return (short *)0x0;
    }
    param_2[1] = 1;
  }
  psVar2 = (short *)FUN_00567680(param_1,param_2,1,(int)*param_2);
  if (*(char *)(param_1 + 0x38) == '\0') {
    iVar1 = *psVar2 * 9 + -8;
    if ((param_4 == (int *)0x0) || (*param_4 == 0)) {
      param_4 = param_3;
      param_3 = (int *)0x0;
    }
    uVar3 = FUN_0055e3f0(param_1,param_4);
    *(undefined4 *)(psVar2 + iVar1 * 4 + 4) = uVar3;
    uVar3 = FUN_0055e3f0(param_1,param_3);
    *(undefined4 *)(psVar2 + iVar1 * 4 + 2) = uVar3;
    return psVar2;
  }
  FUN_00567370(param_1,psVar2);
  return (short *)0x0;
}


/* FUN_00567240 @ 00567240  kind=gamemisc  attributed-by=caller-vote  size=199 */

short * FUN_00567240(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                    int param_5,int param_6,int param_7,int param_8)

{
  short sVar1;
  char *pcVar2;
  short *psVar3;
  undefined4 uVar4;
  
  uVar4 = *param_1;
  if ((param_2 == 0) && ((param_7 != 0 || (param_8 != 0)))) {
    pcVar2 = "ON";
    if (param_7 == 0) {
      pcVar2 = "USING";
    }
    FUN_00553950(param_1,"a JOIN clause is required before %s",pcVar2);
  }
  else {
    psVar3 = (short *)FUN_00567180(uVar4,param_2,param_3,param_4);
    if ((psVar3 != (short *)0x0) && (sVar1 = *psVar3, sVar1 != 0)) {
      if (*(int *)(param_5 + 4) != 0) {
        uVar4 = FUN_0055e3f0(uVar4,param_5);
        *(undefined4 *)(psVar3 + sVar1 * 0x24 + -0x1a) = uVar4;
      }
      *(int *)(psVar3 + sVar1 * 0x24 + -0x16) = param_6;
      *(int *)(psVar3 + sVar1 * 0x24 + -8) = param_7;
      *(int *)(psVar3 + sVar1 * 0x24 + -6) = param_8;
      return psVar3;
    }
  }
  FUN_00555e30(uVar4,param_7);
  FUN_0055afc0(uVar4,param_8);
  if (param_6 != 0) {
    FUN_005303a0(uVar4,param_6);
    FUN_005521a0(uVar4,param_6);
  }
  return (short *)0x0;
}


/* FUN_00567370 @ 00567370  kind=gamemisc  attributed-by=caller-vote  size=170 */

void FUN_00567370(undefined4 param_1,short *param_2)

{
  int iVar1;
  short *psVar2;
  int local_8;
  
  if (param_2 != (short *)0x0) {
    local_8 = 0;
    if (0 < *param_2) {
      psVar2 = param_2 + 8;
      do {
        FUN_005521a0(param_1,*(undefined4 *)(psVar2 + -2));
        FUN_005521a0(param_1,*(undefined4 *)psVar2);
        FUN_005521a0(param_1,*(undefined4 *)(psVar2 + 2));
        FUN_005521a0(param_1,*(undefined4 *)(psVar2 + 0x1c));
        FUN_005529a0(param_1,*(undefined4 *)(psVar2 + 4));
        iVar1 = *(int *)(psVar2 + 6);
        if (iVar1 != 0) {
          FUN_005303a0(param_1,iVar1);
          FUN_005521a0(param_1,iVar1);
        }
        FUN_00555e30(param_1,*(undefined4 *)(psVar2 + 0x14));
        FUN_0055afc0(param_1,*(undefined4 *)(psVar2 + 0x16));
        local_8 = local_8 + 1;
        psVar2 = psVar2 + 0x24;
      } while (local_8 < *param_2);
    }
    FUN_005521a0(param_1,param_2);
  }
  return;
}


/* FUN_00567420 @ 00567420  kind=gamemisc  attributed-by=caller-vote  size=599 */

short * FUN_00567420(undefined4 param_1,short *param_2,undefined4 param_3)

{
  char cVar1;
  short sVar2;
  char *pcVar3;
  int iVar4;
  short *psVar5;
  void *pvVar6;
  char *pcVar7;
  size_t sVar8;
  undefined4 uVar9;
  short *psVar10;
  short *psVar11;
  int local_8;
  
  if (param_2 != (short *)0x0) {
    if (*param_2 < 1) {
      iVar4 = 0;
    }
    else {
      iVar4 = (*param_2 + -1) * 0x48;
    }
    psVar5 = (short *)FUN_00552230(param_1,iVar4 + 0x50);
    if (psVar5 != (short *)0x0) {
      sVar2 = *param_2;
      psVar5[1] = sVar2;
      *psVar5 = sVar2;
      local_8 = 0;
      if (0 < *param_2) {
        psVar11 = param_2 + 0x14;
        psVar10 = psVar5 + 8;
        do {
          *(undefined4 *)(psVar10 + -4) = *(undefined4 *)(psVar11 + -0x10);
          pcVar3 = *(char **)(psVar11 + -0xe);
          if (pcVar3 == (char *)0x0) {
            pvVar6 = (void *)0x0;
          }
          else {
            cVar1 = *pcVar3;
            pcVar7 = pcVar3;
            while (cVar1 != '\0') {
              pcVar7 = pcVar7 + 1;
              cVar1 = *pcVar7;
            }
            sVar8 = ((int)pcVar7 - (int)pcVar3 & 0x3fffffffU) + 1;
            pvVar6 = (void *)FUN_00552230(param_1,sVar8);
            if (pvVar6 != (void *)0x0) {
              memcpy(pvVar6,pcVar3,sVar8);
            }
          }
          *(void **)(psVar10 + -2) = pvVar6;
          pcVar3 = *(char **)((int)psVar10 + ((int)param_2 - (int)psVar5));
          if (pcVar3 == (char *)0x0) {
            pvVar6 = (void *)0x0;
          }
          else {
            cVar1 = *pcVar3;
            pcVar7 = pcVar3;
            while (cVar1 != '\0') {
              pcVar7 = pcVar7 + 1;
              cVar1 = *pcVar7;
            }
            sVar8 = ((int)pcVar7 - (int)pcVar3 & 0x3fffffffU) + 1;
            pvVar6 = (void *)FUN_00552230(param_1,sVar8);
            if (pvVar6 != (void *)0x0) {
              memcpy(pvVar6,pcVar3,sVar8);
            }
          }
          *(void **)psVar10 = pvVar6;
          pcVar3 = *(char **)(psVar11 + -10);
          if (pcVar3 == (char *)0x0) {
            pvVar6 = (void *)0x0;
          }
          else {
            cVar1 = *pcVar3;
            pcVar7 = pcVar3;
            while (cVar1 != '\0') {
              pcVar7 = pcVar7 + 1;
              cVar1 = *pcVar7;
            }
            sVar8 = ((int)pcVar7 - (int)pcVar3 & 0x3fffffffU) + 1;
            pvVar6 = (void *)FUN_00552230(param_1,sVar8);
            if (pvVar6 != (void *)0x0) {
              memcpy(pvVar6,pcVar3,sVar8);
            }
          }
          *(void **)(psVar10 + 2) = pvVar6;
          *(char *)(psVar10 + 0xc) = (char)*psVar11;
          *(undefined4 *)(psVar10 + 0x12) = *(undefined4 *)(psVar11 + 6);
          *(undefined4 *)(psVar10 + 8) = *(undefined4 *)(psVar11 + -4);
          *(undefined4 *)(psVar10 + 10) = *(undefined4 *)(psVar11 + -2);
          *(uint *)(psVar10 + 0xe) =
               *(uint *)(psVar10 + 0xe) ^ (*(uint *)(psVar10 + 0xe) ^ *(uint *)(psVar11 + 2)) & 2;
          *(uint *)(psVar10 + 0xe) =
               *(uint *)(psVar10 + 0xe) ^ (*(uint *)(psVar11 + 2) ^ *(uint *)(psVar10 + 0xe)) & 4;
          pcVar3 = *(char **)(psVar11 + 0x10);
          if (pcVar3 == (char *)0x0) {
            pvVar6 = (void *)0x0;
          }
          else {
            cVar1 = *pcVar3;
            pcVar7 = pcVar3;
            while (cVar1 != '\0') {
              pcVar7 = pcVar7 + 1;
              cVar1 = *pcVar7;
            }
            sVar8 = ((int)pcVar7 - (int)pcVar3 & 0x3fffffffU) + 1;
            pvVar6 = (void *)FUN_00552230(param_1,sVar8);
            if (pvVar6 != (void *)0x0) {
              memcpy(pvVar6,pcVar3,sVar8);
            }
          }
          *(void **)(psVar10 + 0x1c) = pvVar6;
          *(uint *)(psVar10 + 0xe) =
               *(uint *)(psVar10 + 0xe) ^ (*(uint *)(psVar10 + 0xe) ^ *(uint *)(psVar11 + 2)) & 1;
          *(undefined4 *)(psVar10 + 0x1e) = *(undefined4 *)(psVar11 + 0x12);
          iVar4 = *(int *)(psVar11 + -8);
          *(int *)(psVar10 + 4) = iVar4;
          if (iVar4 != 0) {
            *(short *)(iVar4 + 0x28) = *(short *)(iVar4 + 0x28) + 1;
          }
          uVar9 = FUN_00566d40(param_1,*(undefined4 *)(psVar11 + -6),param_3);
          *(undefined4 *)(psVar10 + 6) = uVar9;
          uVar9 = FUN_00536250(param_1,*(undefined4 *)(psVar11 + 8),param_3,0);
          *(undefined4 *)(psVar10 + 0x14) = uVar9;
          uVar9 = FUN_0055b080(param_1,*(undefined4 *)(psVar11 + 10));
          *(undefined4 *)(psVar10 + 0x16) = uVar9;
          *(undefined4 *)(psVar10 + 0x18) = *(undefined4 *)(psVar11 + 0xc);
          *(undefined4 *)(psVar10 + 0x1a) = *(undefined4 *)(psVar11 + 0xe);
          local_8 = local_8 + 1;
          psVar10 = psVar10 + 0x24;
          psVar11 = psVar11 + 0x24;
        } while (local_8 < *param_2);
      }
      return psVar5;
    }
  }
  return (short *)0x0;
}


/* FUN_00567680 @ 00567680  kind=gamemisc  attributed-by=caller-vote  size=277 */

short * FUN_00567680(int param_1,short *param_2,int param_3,int param_4)

{
  short *psVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  short *psVar6;
  short *psVar7;
  
  if ((int)param_2[1] < *param_2 + param_3) {
    psVar1 = (short *)FUN_00552390(param_1,param_2,(*param_2 + param_3) * 0x48 + 8);
    if (psVar1 == (short *)0x0) {
      return param_2;
    }
    if (((param_1 == 0) || (psVar1 < *(short **)(param_1 + 0x104))) ||
       (*(short **)(param_1 + 0x108) <= psVar1)) {
      uVar2 = (*DAT_00766608._4_4_)(psVar1);
    }
    else {
      uVar2 = (uint)*(ushort *)(param_1 + 0xe8);
    }
    psVar1[1] = (short)((uVar2 - 0x50) / 0x48) + 1;
    param_2 = psVar1;
  }
  iVar3 = *param_2 + -1;
  if (param_4 <= iVar3) {
    iVar4 = (iVar3 - param_4) + 1;
    psVar1 = param_2 + ((iVar3 + param_3) * 9 + 1) * 4;
    psVar5 = param_2 + (iVar3 * 9 + 1) * 4;
    do {
      psVar6 = psVar5;
      psVar7 = psVar1;
      for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined4 *)psVar7 = *(undefined4 *)psVar6;
        psVar6 = psVar6 + 2;
        psVar7 = psVar7 + 2;
      }
      iVar4 = iVar4 + -1;
      psVar1 = psVar1 + -0x24;
      psVar5 = psVar5 + -0x24;
    } while (iVar4 != 0);
  }
  *param_2 = *param_2 + (short)param_3;
  memset(param_2 + param_4 * 0x24 + 4,0,param_3 * 0x48);
  if (param_4 < param_3 + param_4) {
    psVar1 = param_2 + param_4 * 0x24 + 0x1a;
    param_4 = (param_3 + param_4) - param_4;
    do {
      psVar1[0] = -1;
      psVar1[1] = -1;
      psVar1 = psVar1 + 0x24;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return param_2;
}


/* FUN_005677a0 @ 005677a0  kind=gamemisc  attributed-by=caller-vote  size=66 */

void FUN_005677a0(undefined4 *param_1,short *param_2,int *param_3)

{
  undefined4 uVar1;
  
  if ((param_2 != (short *)0x0) && (0 < *param_2)) {
    param_2 = param_2 + *param_2 * 0x24;
    if ((param_3[1] == 1) && (*param_3 == 0)) {
      *(uint *)(param_2 + -0xe) = *(uint *)(param_2 + -0xe) | 1;
      return;
    }
    uVar1 = FUN_0055e3f0(*param_1,param_3);
    *(undefined4 *)param_2 = uVar1;
  }
  return;
}


/* FUN_005677f0 @ 005677f0  kind=gamemisc  attributed-by=caller-vote  size=74 */

int FUN_005677f0(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0055d7d0(param_1,0,param_2 + 8);
  FUN_005529a0(*param_1,*(undefined4 *)(param_2 + 0x18));
  *(int *)(param_2 + 0x18) = iVar1;
  if (iVar1 != 0) {
    *(short *)(iVar1 + 0x28) = *(short *)(iVar1 + 0x28) + 1;
  }
  iVar2 = FUN_0055b3c0(param_1,param_2 + 8);
  if (iVar2 != 0) {
    iVar1 = 0;
  }
  return iVar1;
}


/* FUN_00567840 @ 00567840  kind=gamemisc  attributed-by=caller-vote  size=52 */

void FUN_00567840(short *param_1)

{
  int iVar1;
  short *psVar2;
  
  if (param_1 != (short *)0x0) {
    iVar1 = *param_1 + -1;
    if (0 < iVar1) {
      psVar2 = param_1 + (iVar1 * 9 + 5) * 4;
      do {
        iVar1 = iVar1 + -1;
        *(char *)psVar2 = (char)psVar2[-0x24];
        psVar2 = psVar2 + -0x24;
      } while (0 < iVar1);
    }
    *(undefined1 *)(param_1 + 0x14) = 0;
  }
  return;
}


/* FUN_00567c40 @ 00567c40  kind=gamemisc  attributed-by=caller-vote  size=41 */

void FUN_00567c40(int param_1,int param_2)

{
  (&DAT_0076b360)[param_1] = (&DAT_0076b360)[param_1] + param_2;
  if ((int)(&DAT_0076b388)[param_1] < (int)(&DAT_0076b360)[param_1]) {
    (&DAT_0076b388)[param_1] = (&DAT_0076b360)[param_1];
  }
  return;
}


/* FUN_00567c70 @ 00567c70  kind=gamemisc  attributed-by=caller-vote  size=34 */

void FUN_00567c70(int param_1,int param_2)

{
  (&DAT_0076b360)[param_1] = param_2;
  if ((int)(&DAT_0076b388)[param_1] < param_2) {
    (&DAT_0076b388)[param_1] = param_2;
  }
  return;
}


/* FUN_00567ca0 @ 00567ca0  kind=gamemisc  attributed-by=caller-vote  size=457 */

uint FUN_00567ca0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  uint local_c;
  int local_8;
  
  if (param_1[0xc] != -0x420df25d) {
    FUN_005280f0(param_1);
  }
  puVar1 = (undefined4 *)*param_1;
  if (*(char *)(puVar1 + 0xe) == '\0') {
    if ((param_1[0x15] < 1) && ((*(byte *)(param_1 + 0x18) & 0x20) != 0)) {
      param_1[0x16] = 0x11;
      uVar5 = 1;
    }
    else {
      if (param_1[0x15] < 0) {
        if (puVar1[0x21] == 0) {
          puVar1[0x38] = 0;
        }
        if ((puVar1[0x28] != 0) && (*(char *)((int)puVar1 + 0x81) == '\0')) {
          FUN_0055e930(*puVar1,param_1 + 0x20);
        }
        puVar1[0x21] = puVar1[0x21] + 1;
        if ((param_1[0x18] & 0x100U) == 0) {
          puVar1[0x22] = puVar1[0x22] + 1;
        }
        param_1[0x15] = 0;
      }
      if ((*(byte *)(param_1 + 0x18) & 3) == 0) {
        puVar1[0x23] = puVar1[0x23] + 1;
        uVar5 = FUN_0056c9c0(param_1);
        puVar1[0x23] = puVar1[0x23] + -1;
      }
      else {
        uVar5 = FUN_00573e30();
      }
      if ((((uVar5 != 100) && (puVar1[0x28] != 0)) && (*(char *)((int)puVar1 + 0x81) == '\0')) &&
         (param_1[0x26] != 0)) {
        FUN_0055e930(*puVar1,&local_c);
        uVar6 = __allmul(local_c - param_1[0x20],
                         (local_8 - param_1[0x21]) - (uint)(local_c < (uint)param_1[0x20]),1000000,0
                        );
        (*(code *)puVar1[0x28])(puVar1[0x29],param_1[0x26],uVar6);
      }
      if (uVar5 == 0x65) {
        iVar2 = FUN_00534680(puVar1);
        param_1[0x16] = iVar2;
        if (iVar2 != 0) {
          uVar5 = 1;
        }
      }
      puVar1[0xb] = uVar5;
      iVar2 = *param_1;
      uVar4 = param_1[0x16];
      if (iVar2 == 0) {
        uVar3 = 0xff;
      }
      else {
        if ((*(char *)(iVar2 + 0x38) != '\0') || (uVar4 == 0xc0a)) {
          FUN_00553890(iVar2,7,0);
          *(undefined1 *)(iVar2 + 0x38) = 0;
          uVar4 = 7;
        }
        uVar3 = *(uint *)(iVar2 + 0x30);
      }
      if ((uVar3 & uVar4) == 7) {
        param_1[0x16] = 7;
      }
    }
    if ((((param_1[0x18] & 0x200U) != 0) && (uVar5 != 100)) && (uVar5 != 0x65)) {
      uVar5 = FUN_00576a80(param_1);
    }
    return puVar1[0xc] & uVar5;
  }
  param_1[0x16] = 7;
  return 7;
}


/* FUN_00567e70 @ 00567e70  kind=gamemisc  attributed-by=caller-vote  size=313 */

void FUN_00567e70(undefined4 *param_1,char *param_2,size_t param_3)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  void *_Dst;
  int iVar6;
  int iVar7;
  char *pcVar8;
  
  if (*(char *)(param_1 + 6) == '\0' && *(char *)((int)param_1 + 0x1a) == '\0') {
    if ((int)param_3 < 0) {
      if (param_2 == (char *)0x0) {
        return;
      }
      cVar3 = *param_2;
      pcVar8 = param_2;
      while (cVar3 != '\0') {
        pcVar8 = pcVar8 + 1;
        cVar3 = *pcVar8;
      }
      param_3 = (int)pcVar8 - (int)param_2 & 0x3fffffff;
    }
    if (param_3 == 0) {
      return;
    }
    if (param_2 == (char *)0x0) {
      return;
    }
    if ((int)param_1[4] <= (int)(param_1[3] + param_3)) {
      if (*(char *)((int)param_1 + 0x19) == '\0') {
        param_3 = (param_1[4] - param_1[3]) - 1;
        *(undefined1 *)((int)param_1 + 0x1a) = 1;
        if ((int)param_3 < 1) {
          return;
        }
      }
      else {
        iVar5 = param_1[2];
        if (iVar5 == param_1[1]) {
          iVar5 = 0;
        }
        uVar1 = param_3 + 1;
        uVar4 = param_1[3];
        uVar2 = uVar1 + uVar4;
        iVar6 = ((int)uVar1 >> 0x1f) + ((int)uVar4 >> 0x1f) + (uint)CARRY4(uVar1,uVar4);
        iVar7 = (int)param_1[5] >> 0x1f;
        if ((iVar7 <= iVar6) && ((iVar7 < iVar6 || ((uint)param_1[5] < uVar2)))) {
          FUN_00568030(param_1);
          *(undefined1 *)((int)param_1 + 0x1a) = 1;
          return;
        }
        param_1[4] = uVar2;
        if (*(char *)((int)param_1 + 0x19) == '\x01') {
          _Dst = (void *)FUN_00552390(*param_1,iVar5,uVar2);
        }
        else {
          iVar6 = FUN_00579f80();
          if (iVar6 != 0) goto LAB_00567f95;
          _Dst = (void *)FUN_00563800(iVar5,uVar2);
        }
        if (_Dst == (void *)0x0) {
LAB_00567f95:
          *(undefined1 *)(param_1 + 6) = 1;
          FUN_00568030(param_1);
          return;
        }
        if ((iVar5 == 0) && (0 < (int)param_1[3])) {
          memcpy(_Dst,(void *)param_1[2],param_1[3]);
        }
        param_1[2] = _Dst;
      }
    }
    memcpy((void *)(param_1[2] + param_1[3]),param_2,param_3);
    param_1[3] = param_1[3] + param_3;
  }
  return;
}


/* FUN_00567fb0 @ 00567fb0  kind=gamemisc  attributed-by=caller-vote  size=127 */

int FUN_00567fb0(undefined4 *param_1)

{
  int iVar1;
  void *_Dst;
  int iVar2;
  
  if (param_1[2] != 0) {
    *(undefined1 *)(param_1[2] + param_1[3]) = 0;
    iVar1 = param_1[2];
    if (*(char *)((int)param_1 + 0x19) == '\0') {
      return iVar1;
    }
    if (iVar1 != param_1[1]) {
      return iVar1;
    }
    if (*(char *)((int)param_1 + 0x19) == '\x01') {
      _Dst = (void *)FUN_00552230(*param_1,param_1[3] + 1);
    }
    else {
      iVar1 = param_1[3];
      iVar2 = FUN_00579f80();
      if (iVar2 == 0) {
        _Dst = (void *)FUN_0055da00(iVar1 + 1);
      }
      else {
        _Dst = (void *)0x0;
      }
    }
    param_1[2] = _Dst;
    if (_Dst != (void *)0x0) {
      memcpy(_Dst,(void *)param_1[1],param_1[3] + 1);
      return param_1[2];
    }
    *(undefined1 *)(param_1 + 6) = 1;
  }
  return 0;
}


/* FUN_00568030 @ 00568030  kind=gamemisc  attributed-by=caller-vote  size=60 */

void FUN_00568030(undefined4 *param_1)

{
  if (param_1[2] != param_1[1]) {
    if (*(char *)((int)param_1 + 0x19) == '\x01') {
      FUN_005521a0(*param_1);
      param_1[2] = 0;
      return;
    }
    FUN_00524410(param_1[2]);
  }
  param_1[2] = 0;
  return;
}


/* FUN_00568070 @ 00568070  kind=gamemisc  attributed-by=caller-vote  size=34 */

uint FUN_00568070(char *param_1)

{
  char cVar1;
  char *pcVar2;
  
  if (param_1 != (char *)0x0) {
    cVar1 = *param_1;
    pcVar2 = param_1;
    while (cVar1 != '\0') {
      pcVar2 = pcVar2 + 1;
      cVar1 = *pcVar2;
    }
    return (int)pcVar2 - (int)param_1 & 0x3fffffff;
  }
  return 0;
}


/* FUN_00568100 @ 00568100  kind=gamemisc  attributed-by=caller-vote  size=217 */

void FUN_00568100(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(param_2 + 0x14) == 0) {
    iVar5 = *param_1;
    iVar1 = FUN_0055da00(*(short *)(param_2 + 0x26) + 1);
    if (iVar1 == 0) {
      *(undefined1 *)(iVar5 + 0x38) = 1;
      return;
    }
    if (0 < *(short *)(param_2 + 0x26)) {
      iVar5 = 0;
      iVar3 = 0;
      do {
        iVar4 = iVar3 + 1;
        *(undefined1 *)(iVar3 + iVar1) = *(undefined1 *)(iVar5 + 0x15 + *(int *)(param_2 + 4));
        iVar5 = iVar5 + 0x18;
        iVar3 = iVar4;
      } while (iVar4 < *(short *)(param_2 + 0x26));
    }
    *(undefined1 *)(*(short *)(param_2 + 0x26) + iVar1) = 0;
    *(int *)(param_2 + 0x14) = iVar1;
  }
  iVar5 = param_1[1];
  iVar1 = *(int *)(param_2 + 0x14);
  iVar3 = *param_1;
  if ((iVar5 != 0) && (*(char *)(iVar3 + 0x38) == '\0')) {
    iVar4 = iVar5 + (param_1[7] + -1) * 0x14;
    FUN_00539320(iVar3,(int)*(char *)(iVar4 + 1),
                 *(undefined4 *)(iVar5 + 0x10 + (param_1[7] + -1) * 0x14));
    *(undefined4 *)(iVar4 + 0x10) = 0;
    if (iVar1 == 0) {
      *(undefined4 *)(iVar4 + 0x10) = 0;
      *(undefined1 *)(iVar4 + 1) = 0;
      return;
    }
    uVar2 = FUN_00568070(iVar1);
    uVar2 = FUN_005524a0(*param_1,iVar1,uVar2);
    *(undefined4 *)(iVar4 + 0x10) = uVar2;
    *(undefined1 *)(iVar4 + 1) = 0xff;
    return;
  }
  FUN_00539320(iVar3,0,iVar1);
  return;
}


/* FUN_005681e0 @ 005681e0  kind=gamemisc  attributed-by=caller-vote  size=238 */

void FUN_005681e0(int *param_1,int param_2,int param_3,char param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if ((int *)param_1[0x6c] != (int *)0x0) {
    param_1 = (int *)param_1[0x6c];
  }
  iVar3 = 0;
  iVar2 = param_1[0x69];
  if (0 < iVar2) {
    piVar4 = (int *)param_1[0x6a];
    do {
      if ((*piVar4 == param_2) && (piVar4[1] == param_3)) {
        if (((char)piVar4[2] == '\0') && (param_4 == '\0')) {
          *(undefined1 *)(piVar4 + 2) = 0;
          return;
        }
        *(undefined1 *)(piVar4 + 2) = 1;
        return;
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 4;
    } while (iVar3 < iVar2);
  }
  iVar3 = param_1[0x6a];
  iVar1 = *param_1;
  iVar2 = FUN_00552390(iVar1,iVar3,(iVar2 + 1) * 0x10);
  if (iVar2 == 0) {
    FUN_005521a0(iVar1,iVar3);
  }
  param_1[0x6a] = iVar2;
  if (iVar2 != 0) {
    piVar4 = (int *)(param_1[0x69] * 0x10 + iVar2);
    param_1[0x69] = param_1[0x69] + 1;
    piVar4[1] = param_3;
    *(char *)(piVar4 + 2) = param_4;
    *piVar4 = param_2;
    piVar4[3] = param_5;
    return;
  }
  param_1[0x69] = 0;
  *(undefined1 *)(*param_1 + 0x38) = 1;
  return;
}


/* FUN_005682d0 @ 005682d0  kind=gamemisc  attributed-by=caller-vote  size=329 */

undefined4 FUN_005682d0(int param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int local_8;
  
  if (*(int *)(*param_2 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(*param_2 + 0xc));
  }
  local_8 = 0;
  if (0 < *(short *)(param_1 + 0x4c)) {
    iVar2 = 0;
    do {
      uVar1 = *(ushort *)(param_2[0x11] + 0x1c + iVar2);
      puVar3 = (undefined8 *)(param_2[0x11] + iVar2);
      puVar4 = (undefined8 *)(*(int *)(param_1 + 0x44) + iVar2);
      if ((uVar1 & 0x2460) != 0) {
        if ((uVar1 & 0x2000) == 0) {
          if (((uVar1 & 0x400) == 0) || (*(code **)(puVar3 + 4) == (code *)0x0)) {
            if ((uVar1 & 0x20) == 0) {
              if ((uVar1 & 0x40) != 0) {
                FUN_00574f20(puVar3);
              }
            }
            else {
              FUN_005644e0(*(undefined4 *)(puVar3 + 2));
            }
          }
          else {
            (**(code **)(puVar3 + 4))(*(undefined4 *)((int)puVar3 + 4));
            *(undefined4 *)(puVar3 + 4) = 0;
          }
        }
        else {
          FUN_00574670(puVar3,*(undefined4 *)(puVar3 + 2));
          FUN_00574d40(puVar3);
        }
      }
      FUN_005521a0(*(undefined4 *)puVar3,*(undefined4 *)((int)puVar3 + 0x24));
      *(undefined4 *)((int)puVar3 + 4) = 0;
      *(undefined4 *)((int)puVar3 + 0x24) = 0;
      *(undefined4 *)(puVar3 + 4) = 0;
      *puVar3 = *puVar4;
      puVar3[1] = puVar4[1];
      puVar3[2] = puVar4[2];
      puVar3[3] = puVar4[3];
      puVar3[4] = puVar4[4];
      *(undefined2 *)((int)puVar4 + 0x1c) = 1;
      *(undefined4 *)(puVar4 + 4) = 0;
      *(undefined4 *)((int)puVar4 + 0x24) = 0;
      local_8 = local_8 + 1;
      iVar2 = iVar2 + 0x28;
    } while (local_8 < *(short *)(param_1 + 0x4c));
  }
  if (*(int *)(*param_2 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(*param_2 + 0xc));
  }
  return 0;
}


/* FUN_005684e0 @ 005684e0  kind=gamemisc  attributed-by=caller-vote  size=117 */

undefined1 * FUN_005684e0(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 *_Dst;
  undefined4 uVar2;
  
  iVar1 = param_2[1];
  _Dst = (undefined1 *)FUN_00552230(param_1,iVar1 + 0x28U);
  if (_Dst != (undefined1 *)0x0) {
    memset(_Dst,0,iVar1 + 0x28U);
    memcpy(_Dst + 0x28,(void *)*param_2,param_2[1]);
    *(undefined1 **)(_Dst + 0xc) = _Dst + 0x28;
    *(undefined4 *)(_Dst + 0x10) = param_2[1];
    *_Dst = 0x6a;
    uVar2 = FUN_00536250(param_1,param_3,1,0);
    *(undefined4 *)(_Dst + 0x14) = uVar2;
    _Dst[1] = 99;
  }
  FUN_00555e30(param_1,param_3);
  return _Dst;
}


/* FUN_00568560 @ 00568560  kind=gamemisc  attributed-by=caller-vote  size=184 */

undefined1 *
FUN_00568560(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            int param_5,undefined1 param_6)

{
  int iVar1;
  undefined1 *_Dst;
  undefined4 uVar2;
  
  iVar1 = param_2[1];
  _Dst = (undefined1 *)FUN_00552230(param_1,iVar1 + 0x28U);
  if (_Dst == (undefined1 *)0x0) {
    FUN_0055afc0(param_1,param_3);
  }
  else {
    memset(_Dst,0,iVar1 + 0x28U);
    memcpy(_Dst + 0x28,(void *)*param_2,param_2[1]);
    *(undefined1 **)(_Dst + 0xc) = _Dst + 0x28;
    *(undefined4 *)(_Dst + 0x10) = param_2[1];
    *_Dst = 0x69;
    uVar2 = FUN_00566d40(param_1,param_5,1);
    *(undefined4 *)(_Dst + 8) = uVar2;
    *(undefined4 *)(_Dst + 0x1c) = param_3;
    uVar2 = FUN_005567e0(param_1,param_4,1);
    *(undefined4 *)(_Dst + 0x18) = uVar2;
    _Dst[1] = param_6;
  }
  FUN_00556700(param_1,param_4);
  if (param_5 != 0) {
    FUN_005303a0(param_1,param_5);
    FUN_005521a0(param_1,param_5);
  }
  return _Dst;
}


/* FUN_00568690 @ 00568690  kind=gamemisc  attributed-by=caller-vote  size=98 */

undefined8 * FUN_00568690(undefined4 param_1,int param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00552230(param_1,0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *(int *)(puVar1 + 1) = param_2;
    *(undefined2 *)puVar1 = 0x6374;
    return puVar1;
  }
  if (param_2 != 0) {
    FUN_005303a0(param_1,param_2);
    FUN_005521a0(param_1,param_2);
  }
  return (undefined8 *)0x0;
}


/* FUN_00568700 @ 00568700  kind=gamemisc  attributed-by=caller-vote  size=146 */

undefined1 *
FUN_00568700(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined1 param_5)

{
  int iVar1;
  undefined1 *_Dst;
  undefined4 uVar2;
  
  iVar1 = param_2[1];
  _Dst = (undefined1 *)FUN_00552230(param_1,iVar1 + 0x28U);
  if (_Dst != (undefined1 *)0x0) {
    memset(_Dst,0,iVar1 + 0x28U);
    memcpy(_Dst + 0x28,(void *)*param_2,param_2[1]);
    *(undefined1 **)(_Dst + 0xc) = _Dst + 0x28;
    *(undefined4 *)(_Dst + 0x10) = param_2[1];
    *_Dst = 0x6b;
    uVar2 = FUN_005567e0(param_1,param_3,1);
    *(undefined4 *)(_Dst + 0x18) = uVar2;
    uVar2 = FUN_00536250(param_1,param_4,1,0);
    *(undefined4 *)(_Dst + 0x14) = uVar2;
    _Dst[1] = param_5;
  }
  FUN_00556700(param_1,param_3);
  FUN_00555e30(param_1,param_4);
  return _Dst;
}


/* FUN_005687a0 @ 005687a0  kind=gamemisc  attributed-by=caller-vote  size=109 */

int FUN_005687a0(int *param_1,undefined4 param_2,uint param_3,undefined4 param_4,uint *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  iVar2 = 0;
  iVar3 = iVar2;
  if ((*(uint *)(*param_1 + 0x18) & 0x400000) != 0) {
    iVar2 = FUN_00568620(param_1,param_2);
    iVar3 = iVar2;
  }
  for (; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x20)) {
    if ((*(byte *)(iVar2 + 8) == param_3) &&
       (iVar1 = FUN_0052f320(*(undefined4 *)(iVar2 + 0x10),param_4), iVar1 != 0)) {
      uVar4 = uVar4 | *(byte *)(iVar2 + 9);
    }
  }
  if (param_5 != (uint *)0x0) {
    *param_5 = uVar4;
  }
  iVar2 = 0;
  if (uVar4 != 0) {
    iVar2 = iVar3;
  }
  return iVar2;
}


/* FUN_00568810 @ 00568810  kind=gamemisc  attributed-by=caller-vote  size=147 */

uint FUN_00568810(int *param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = *param_1;
  if ((param_3 == 0) || (*(int *)(param_3 + 4) == 0)) {
    uVar3 = (uint)*(byte *)(iVar1 + 0x80);
    *param_4 = param_2;
  }
  else {
    if (*(char *)(iVar1 + 0x81) != '\0') {
      FUN_00553950(param_1,"corrupt database");
      param_1[0x11] = param_1[0x11] + 1;
      return 0xffffffff;
    }
    *param_4 = param_3;
    uVar2 = FUN_0055e3f0(iVar1,param_2);
    uVar3 = FUN_00556be0(iVar1,uVar2);
    FUN_005521a0(iVar1,uVar2);
    if ((int)uVar3 < 0) {
      FUN_00553950(param_1,"unknown database %T",param_2);
      param_1[0x11] = param_1[0x11] + 1;
      return 0xffffffff;
    }
  }
  return uVar3;
}


/* FUN_0056a9b0 @ 0056a9b0  kind=gamemisc  attributed-by=caller-vote  size=118 */

void FUN_0056a9b0(int param_1,undefined4 param_2,undefined4 param_3)

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
  FUN_0056aa30(&local_6c,1,param_2,param_3);
  FUN_00567fb0(&local_6c);
  if (local_54 != '\0') {
    *(undefined1 *)(param_1 + 0x38) = 1;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0056aa30 @ 0056aa30  kind=gamemisc  attributed-by=caller-vote  size=3513 */

/* WARNING: Removing unreachable block (ram,0x0056b033) */

void FUN_0056aa30(int param_1,int param_2,byte *param_3,double *param_4)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  byte bVar4;
  byte *pbVar5;
  char cVar6;
  int iVar7;
  int extraout_ECX;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  byte *unaff_EBX;
  byte *pbVar11;
  char *pcVar12;
  double *pdVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  int *piVar17;
  bool bVar18;
  double dVar19;
  double dVar20;
  undefined8 uVar21;
  longlong lVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  byte *local_a4;
  uint local_a0;
  byte *local_9c;
  undefined8 local_98;
  byte *local_90;
  byte *local_8c;
  undefined1 *local_88;
  byte *local_80;
  int local_7c;
  byte *local_78;
  byte *local_74;
  byte *local_70;
  char local_6a;
  char local_69;
  byte local_68;
  bool local_67;
  bool local_66;
  char local_65;
  byte *local_64;
  byte local_5d;
  byte *local_5c;
  double *local_58;
  char local_52;
  byte local_51;
  byte local_50;
  int local_4f [17];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  bVar4 = *param_3;
  pbVar15 = (byte *)0x0;
  local_5c = (byte *)0x0;
  local_7c = param_1;
  local_58 = param_4;
  do {
    if (bVar4 == 0) {
switchD_0056acc6_default:
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    pbVar11 = param_3;
    if (bVar4 != 0x25) {
      local_78 = param_3 + 1;
      iVar7 = 1;
      bVar4 = *local_78;
      while ((bVar4 != 0x25 && (bVar18 = bVar4 != 0, bVar4 = 0, bVar18))) {
        pbVar15 = local_78 + 1;
        local_78 = local_78 + 1;
        iVar7 = iVar7 + 1;
        bVar4 = *pbVar15;
      }
      local_5c = param_3;
      FUN_00567e70(local_7c,param_3,iVar7);
      pbVar11 = local_78;
      pbVar15 = param_3;
      if (bVar4 == 0) goto switchD_0056acc6_default;
    }
    iVar7 = (int)(char)pbVar11[1];
    pbVar11 = pbVar11 + 1;
    if (iVar7 == 0) {
      FUN_00567e70(local_7c,&DAT_007020e0,1);
      goto switchD_0056acc6_default;
    }
    local_69 = '\0';
    local_67 = false;
    local_68 = 0;
    local_51 = 0;
    local_5d = 0;
    local_65 = '\0';
    do {
      switch(iVar7) {
      case 0x20:
        local_51 = 1;
        break;
      case 0x21:
        local_67 = true;
        break;
      default:
        goto switchD_0056ab24_caseD_22;
      case 0x23:
        local_68 = 1;
        break;
      case 0x2b:
        local_5d = 1;
        break;
      case 0x2d:
        local_65 = '\x01';
        break;
      case 0x30:
        local_69 = '\x01';
      }
      iVar7 = (int)(char)pbVar11[1];
      pbVar11 = pbVar11 + 1;
    } while (iVar7 != 0);
switchD_0056ab24_caseD_22:
    local_64 = (byte *)0x0;
    if (iVar7 == 0x2a) {
      local_64 = *(byte **)local_58;
      local_58 = (double *)((int)local_58 + 4);
      if ((int)local_64 < 0) {
        local_64 = (byte *)-(int)local_64;
        local_65 = '\x01';
      }
      iVar7 = (int)(char)pbVar11[1];
      pbVar11 = pbVar11 + 1;
    }
    else if (0x2f < iVar7) {
      local_64 = (byte *)0x0;
      do {
        pbVar15 = local_5c;
        if (0x39 < iVar7) break;
        pbVar11 = pbVar11 + 1;
        local_64 = (byte *)(iVar7 + ((int)local_64 * 5 + -0x18) * 2);
        iVar7 = (int)(char)*pbVar11;
      } while (0x2f < iVar7);
    }
    if (iVar7 == 0x2e) {
      iVar7 = (int)(char)pbVar11[1];
      local_78 = pbVar11 + 1;
      local_74 = (byte *)0x0;
      if (iVar7 == 0x2a) {
        local_74 = *(byte **)local_58;
        if ((int)local_74 < 0) {
          local_74 = (byte *)-(int)local_74;
        }
        iVar7 = (int)(char)pbVar11[2];
        local_78 = pbVar11 + 2;
        local_58 = (double *)((int)local_58 + 4);
      }
      else {
        while ((0x2f < iVar7 && (iVar7 < 0x3a))) {
          local_78 = local_78 + 1;
          local_74 = (byte *)(iVar7 + ((int)local_74 * 5 + -0x18) * 2);
          iVar7 = (int)(char)*local_78;
        }
      }
    }
    else {
      local_74 = (byte *)0xffffffff;
      local_78 = pbVar11;
    }
    if (iVar7 == 0x6c) {
      iVar7 = (int)(char)local_78[1];
      local_66 = true;
      pbVar11 = local_78 + 1;
      if (iVar7 != 0x6c) goto LAB_0056ac3d;
      iVar7 = (int)(char)local_78[2];
      local_78 = local_78 + 2;
      local_6a = '\x01';
    }
    else {
      local_66 = false;
      pbVar11 = local_78;
LAB_0056ac3d:
      local_78 = pbVar11;
      local_6a = '\0';
    }
    local_88 = &DAT_00712570;
    local_52 = '\0';
    local_8c = (byte *)0x0;
    pcVar12 = "d\n\x01\x01";
    do {
      if (iVar7 == *pcVar12) {
        iVar7 = (int)local_8c * 6;
        local_88 = &DAT_00712570 + iVar7;
        if ((param_2 == 0) && (((&DAT_00712572)[iVar7] & 2) != 0)) goto switchD_0056acc6_default;
        local_52 = (&DAT_00712573)[iVar7];
        break;
      }
      local_8c = local_8c + 1;
      pcVar12 = pcVar12 + 6;
    } while ((int)pcVar12 < 0x7125fa);
    local_8c = (byte *)0x0;
    switch(local_52) {
    case '\x01':
    case '\x10':
      cVar6 = local_6a;
      goto LAB_0056acd9;
    case '\x02':
    case '\x03':
    case '\x04':
      pdVar13 = local_58 + 1;
      local_98 = *local_58;
      if ((int)local_74 < 0) {
        local_74 = (byte *)0x6;
      }
      if (0.0 <= local_98) {
        if (local_5d == 0) {
          local_51 = -(local_51 != 0) & 0x20;
        }
        else {
          local_51 = 0x2b;
        }
      }
      else {
        local_98 = -local_98;
        local_51 = 0x2d;
      }
      if ((local_52 == '\x04') && (0 < (int)local_74)) {
        local_74 = local_74 + -1;
      }
      dVar19 = 0.5;
      pbVar15 = local_74;
      if (7 < (int)local_74) {
        iVar7 = ((uint)(local_74 + -8) >> 3) + 1;
        pbVar15 = local_74 + iVar7 * -8;
        do {
          dVar19 = dVar19 * 0.1 * 0.1 * 0.1 * 0.1 * 0.1 * 0.1 * 0.1 * 0.1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      for (; 0 < (int)pbVar15; pbVar15 = pbVar15 + -1) {
        dVar19 = dVar19 * 0.1;
      }
      if (local_52 == '\x02') {
        local_98 = local_98 + dVar19;
      }
      pbVar15 = (byte *)0x0;
      local_80 = (byte *)0x0;
      local_58 = pdVar13;
      if (0.0 < local_98) {
        dVar20 = 1.0;
        if (1e+100 <= local_98) {
          do {
            local_80 = pbVar15;
            if (0x15e < (int)pbVar15) break;
            dVar20 = dVar20 * 1e+100;
            pbVar15 = pbVar15 + 100;
            local_80 = pbVar15;
          } while (dVar20 * 1e+100 <= local_98);
        }
        for (; (dVar20 * 1e+64 <= local_98 && ((int)local_80 < 0x15f)); local_80 = local_80 + 0x40)
        {
          dVar20 = dVar20 * 1e+64;
        }
        for (; (dVar20 * 100000000.0 <= local_98 && ((int)local_80 < 0x15f));
            local_80 = local_80 + 8) {
          dVar20 = dVar20 * 100000000.0;
        }
        for (; (dVar20 * 10.0 <= local_98 && ((int)local_80 < 0x15f)); local_80 = local_80 + 1) {
          dVar20 = dVar20 * 10.0;
        }
        for (local_98 = local_98 / dVar20; local_98 < 1e-08; local_98 = local_98 * 100000000.0) {
          local_80 = local_80 + -8;
        }
        for (; local_98 < 1.0; local_98 = local_98 * 10.0) {
          local_80 = local_80 + -1;
        }
        if (0x15e < (int)local_80) {
          if (local_51 == 0x2d) {
            local_5c = &DAT_0071686c;
          }
          else {
            local_5c = &DAT_00716874;
            if (local_51 != 0x2b) {
              local_5c = &DAT_0071687c;
            }
          }
          if (local_5c == (byte *)0x0) goto LAB_0056b764;
          bVar4 = *local_5c;
          pbVar15 = local_5c;
          while (bVar4 != 0) {
            pbVar15 = pbVar15 + 1;
            bVar4 = *pbVar15;
          }
LAB_0056b1a6:
          pbVar11 = (byte *)((int)pbVar15 - (int)local_5c & 0x3fffffff);
          pbVar15 = local_5c;
          break;
        }
      }
      pbVar15 = &local_50;
      if ((local_52 != '\x02') && (local_98 = local_98 + dVar19, 10.0 <= local_98)) {
        local_98 = local_98 * 0.1;
        local_80 = local_80 + 1;
      }
      local_70 = local_80;
      if (local_52 == '\x04') {
        local_66 = local_68 == 0;
        if (((int)local_80 < -4) || ((int)local_74 < (int)local_80)) {
          local_52 = '\x03';
LAB_0056b20c:
          local_70 = (byte *)0x0;
        }
        else {
          local_74 = local_74 + -(int)local_80;
          local_52 = '\x02';
        }
      }
      else {
        local_66 = local_67;
        if (local_52 == '\x03') goto LAB_0056b20c;
      }
      if ((0x37 < (int)(local_70 + (int)local_74 + (int)local_64)) &&
         (pbVar15 = (byte *)FUN_0055da00(local_70 + (int)local_74 + (int)local_64 + 0xf),
         local_8c = pbVar15, pbVar15 == (byte *)0x0)) goto LAB_0056b687;
      local_90 = (byte *)((uint)local_67 * 10 + 0x10);
      local_5d = 0 < (int)local_74 | local_67 | local_68;
      pbVar11 = pbVar15;
      if (local_51 != 0) {
        *pbVar15 = local_51;
        pbVar11 = pbVar15 + 1;
      }
      dVar19 = local_98;
      if ((int)local_70 < 0) {
        *pbVar11 = 0x30;
        pbVar11 = pbVar11 + 1;
      }
      else {
        do {
          if ((int)local_90 < 1) {
            bVar4 = 0x30;
          }
          else {
            local_90 = local_90 + -1;
            bVar4 = (char)(int)dVar19 + 0x30;
            dVar19 = (dVar19 - (double)(int)dVar19) * 10.0;
          }
          *pbVar11 = bVar4;
          pbVar11 = pbVar11 + 1;
          local_70 = local_70 + -1;
        } while (-1 < (int)local_70);
      }
      if (local_5d != 0) {
        *pbVar11 = 0x2e;
        pbVar11 = pbVar11 + 1;
      }
      pbVar5 = local_70 + 1;
      pbVar14 = local_90;
      pbVar10 = local_74;
      if ((int)pbVar5 < 0) {
        local_70 = (byte *)-(int)pbVar5;
        pbVar16 = pbVar11;
        for (uVar9 = (uint)local_70 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          pbVar16[0] = 0x30;
          pbVar16[1] = 0x30;
          pbVar16[2] = 0x30;
          pbVar16[3] = 0x30;
          pbVar16 = pbVar16 + 4;
        }
        pbVar11 = pbVar11 + (int)local_70;
        pbVar10 = local_74 + (int)pbVar5;
        for (uVar9 = (uint)local_70 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pbVar16 = 0x30;
          pbVar16 = pbVar16 + 1;
        }
      }
      while (0 < (int)pbVar10) {
        if ((int)pbVar14 < 1) {
          bVar4 = 0x30;
        }
        else {
          pbVar14 = pbVar14 + -1;
          bVar4 = (char)(int)dVar19 + 0x30;
          dVar19 = (dVar19 - (double)(int)dVar19) * 10.0;
        }
        *pbVar11 = bVar4;
        pbVar11 = pbVar11 + 1;
        pbVar10 = pbVar10 + -1;
      }
      if ((local_66 != false) && (local_5d != 0)) {
        bVar4 = pbVar11[-1];
        pbVar14 = pbVar11 + -1;
        while (pbVar10 = pbVar14, bVar4 == 0x30) {
          *pbVar10 = 0;
          pbVar14 = pbVar10 + -1;
          pbVar11 = pbVar10;
          bVar4 = pbVar10[-1];
        }
        if (pbVar11[-1] == 0x2e) {
          if (local_67 == false) {
            pbVar11 = pbVar11 + -1;
            *pbVar11 = 0;
          }
          else {
            *pbVar11 = 0x30;
            pbVar11 = pbVar11 + 1;
          }
        }
      }
      if (local_52 == '\x03') {
        *pbVar11 = "0123456789ABCDEF0123456789abcdef"[(byte)local_88[4]];
        if ((int)local_80 < 0) {
          pbVar11[1] = 0x2d;
          local_80 = (byte *)-(int)local_80;
        }
        else {
          pbVar11[1] = 0x2b;
        }
        pbVar14 = pbVar11 + 2;
        if (99 < (int)local_80) {
          *pbVar14 = (char)((int)local_80 / 100) + 0x30;
          pbVar14 = pbVar11 + 3;
          local_80 = (byte *)((int)local_80 % 100);
        }
        cVar6 = (char)((int)local_80 / 10);
        *pbVar14 = cVar6 + 0x30;
        pbVar14[1] = (char)local_80 + cVar6 * -10 + 0x30;
        pbVar11 = pbVar14 + 2;
      }
      *pbVar11 = 0;
      pbVar11 = pbVar11 + -(int)pbVar15;
      local_5c = pbVar15;
      if (local_69 == '\0') break;
      if (local_65 == '\0') {
        if ((int)pbVar11 < (int)local_64) {
          uVar9 = (int)local_64 - (int)pbVar11;
          if ((int)uVar9 <= (int)local_64) {
            pbVar11 = local_64;
            do {
              pbVar15[(int)pbVar11] = pbVar15[(int)pbVar11 - uVar9];
              pbVar11 = pbVar11 + -1;
            } while ((int)uVar9 <= (int)pbVar11);
          }
          pbVar11 = local_64;
          if (uVar9 != 0) {
            pbVar14 = pbVar15 + (local_51 != 0);
            for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              pbVar14[0] = 0x30;
              pbVar14[1] = 0x30;
              pbVar14[2] = 0x30;
              pbVar14[3] = 0x30;
              pbVar14 = pbVar14 + 4;
            }
            for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
              *pbVar14 = 0x30;
              pbVar14 = pbVar14 + 1;
            }
          }
        }
        goto LAB_0056b76f;
      }
      goto LAB_0056b781;
    case '\x05':
      **(undefined4 **)local_58 = *(undefined4 *)(local_7c + 0xc);
      local_64 = (byte *)0x0;
      pbVar11 = (byte *)0x0;
      local_58 = (double *)((int)local_58 + 4);
      break;
    case '\x06':
    case '\a':
      pdVar13 = (double *)((int)local_58 + 4);
      local_5c = *(byte **)local_58;
      if (local_5c == (byte *)0x0) {
        local_5c = &DAT_006fc918;
      }
      else {
        local_8c = (byte *)0x0;
        if (local_52 == '\a') {
          local_8c = local_5c;
        }
      }
      pbVar15 = local_5c;
      local_58 = pdVar13;
      if ((int)local_74 < 0) {
        if (local_5c == (byte *)0x0) {
LAB_0056b764:
          pbVar11 = (byte *)0x0;
          pbVar15 = local_5c;
        }
        else {
          pbVar11 = local_5c;
          if (*local_5c == 0) goto LAB_0056b1a6;
          do {
            pbVar11 = pbVar11 + 1;
          } while (*pbVar11 != 0);
          pbVar11 = (byte *)((int)pbVar11 - (int)local_5c & 0x3fffffff);
        }
      }
      else {
        pbVar11 = (byte *)0x0;
        if (0 < (int)local_74) {
          do {
            if (local_5c[(int)pbVar11] == 0) break;
            pbVar11 = pbVar11 + 1;
          } while ((int)pbVar11 < (int)local_74);
        }
      }
      break;
    case '\b':
      local_50 = 0x25;
      pbVar11 = (byte *)0x1;
      pbVar15 = &local_50;
      local_5c = &local_50;
      break;
    case '\t':
      local_50 = (byte)*(uint *)local_58;
      if ((int)local_74 < 0) {
        pbVar11 = (byte *)0x1;
        pbVar15 = &local_50;
        local_5c = &local_50;
        local_58 = (double *)((int)local_58 + 4);
      }
      else {
        if (1 < (int)local_74) {
          iVar7 = (*(uint *)local_58 & 0xff) * 0x1010101;
          piVar17 = local_4f;
          for (uVar9 = (uint)(local_74 + -1) >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *piVar17 = iVar7;
            piVar17 = piVar17 + 1;
          }
          for (uVar9 = (uint)(local_74 + -1) & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(char *)piVar17 = (char)iVar7;
            piVar17 = (int *)((int)piVar17 + 1);
          }
        }
        pbVar11 = local_74;
        pbVar15 = &local_50;
        local_5c = &local_50;
        local_58 = (double *)((int)local_58 + 4);
      }
      break;
    case '\n':
    case '\v':
    case '\x0f':
      local_70 = (byte *)0x27;
      if (local_52 == '\x0f') {
        local_70 = (byte *)0x22;
      }
      local_80 = *(byte **)local_58;
      local_58 = (double *)((int)local_58 + 4);
      bVar18 = local_80 == (byte *)0x0;
      local_98 = (double)(ulonglong)CONCAT14(bVar18,(undefined4)local_98);
      if ((bVar18) && (local_80 = &DAT_00716880, local_52 != '\v')) {
        local_80 = &DAT_00716888;
      }
      iVar7 = 0;
      pbVar15 = local_74;
      for (local_90 = (byte *)0x0; (pbVar15 != (byte *)0x0 && (local_90[(int)local_80] != 0));
          local_90 = local_90 + 1) {
        if (local_90[(int)local_80] == (byte)local_70) {
          iVar7 = iVar7 + 1;
        }
        pbVar15 = pbVar15 + -1;
      }
      if ((bVar18) || (local_52 != '\v')) {
        local_88 = (undefined1 *)0x0;
      }
      else {
        local_88 = (undefined1 *)0x1;
      }
      pbVar15 = local_90 + iVar7 + 1 + (int)local_88 * 2;
      if ((int)pbVar15 < 0x47) {
        local_5c = &local_50;
      }
      else {
        if (pbVar15 + -1 < (byte *)0x7ffffeff) {
          if (DAT_007665e0 == 0) {
            local_a4 = (byte *)(*DAT_00766600)(pbVar15);
          }
          else {
            if (DAT_0076b488 != 0) {
              (*DAT_00766630)(DAT_0076b488);
            }
            FUN_0053dcf0(pbVar15,&local_a4);
            if (DAT_0076b488 != 0) {
              (*DAT_00766638)(DAT_0076b488);
            }
          }
        }
        else {
          local_a4 = (byte *)0x0;
        }
        local_8c = local_a4;
        local_5c = local_a4;
        if (local_a4 == (byte *)0x0) goto LAB_0056b687;
      }
      bVar4 = (byte)local_70;
      if (local_88 != (undefined1 *)0x0) {
        *local_5c = bVar4;
      }
      pbVar11 = (byte *)(uint)(local_88 != (undefined1 *)0x0);
      iVar7 = 0;
      pbVar15 = pbVar11;
      if (0 < (int)local_90) {
        do {
          pbVar11 = pbVar15 + 1;
          bVar1 = local_80[iVar7];
          local_5c[(int)pbVar15] = bVar1;
          if (bVar1 == bVar4) {
            local_5c[(int)pbVar11] = bVar1;
            pbVar11 = pbVar15 + 2;
          }
          iVar7 = iVar7 + 1;
          pbVar15 = pbVar11;
        } while (iVar7 < (int)local_90);
      }
      if (local_88 != (undefined1 *)0x0) {
        local_5c[(int)pbVar11] = bVar4;
        pbVar11 = pbVar11 + 1;
      }
      local_5c[(int)pbVar11] = 0;
      pbVar15 = local_5c;
      break;
    case '\f':
      pdVar13 = (double *)((int)local_58 + 4);
      puVar2 = *(undefined4 **)local_58;
      local_58 = pdVar13;
      if (puVar2 != (undefined4 *)0x0) {
        uVar24 = puVar2[1];
        uVar23 = *puVar2;
        goto LAB_0056b705;
      }
      goto LAB_0056b710;
    case '\r':
      pdVar13 = local_58 + 1;
      iVar7 = *(int *)local_58;
      local_98 = (double)CONCAT44(*(int *)((int)local_58 + 4) * 9,(undefined4)local_98);
      iVar3 = *(int *)(iVar7 + 0xc + *(int *)((int)local_58 + 4) * 0x48);
      local_58 = pdVar13;
      if (iVar3 != 0) {
        FUN_00567e70(local_7c,iVar3,0xffffffff);
        FUN_00567e70(local_7c,&DAT_00716890,1);
      }
      uVar24 = 0xffffffff;
      uVar23 = *(undefined4 *)(iVar7 + 0x10 + local_98._4_4_ * 8);
LAB_0056b705:
      FUN_00567e70(local_7c,uVar23,uVar24);
LAB_0056b710:
      local_64 = (byte *)0x0;
      pbVar11 = (byte *)0x0;
      break;
    case '\x0e':
      cVar6 = '\0';
LAB_0056acd9:
      if ((local_88[2] & 1) == 0) {
        if (cVar6 == '\0') {
          local_80 = *(byte **)local_58;
          pdVar13 = (double *)((int)local_58 + 4);
          local_5c = (byte *)0x0;
        }
        else {
          local_80 = *(byte **)local_58;
          pdVar13 = local_58 + 1;
          local_5c = *(byte **)((int)local_58 + 4);
        }
        local_51 = 0;
        local_58 = pdVar13;
      }
      else {
        if (cVar6 == '\0') {
          local_80 = *(byte **)local_58;
          local_58 = (double *)((int)local_58 + 4);
          local_5c = (byte *)((int)local_80 >> 0x1f);
        }
        else {
          local_80 = *(byte **)local_58;
          local_5c = *(byte **)((int)local_58 + 4);
          local_58 = local_58 + 1;
        }
        if (((int)local_5c < 1) && ((int)local_5c < 0)) {
          if ((local_80 == (byte *)0x0) && (local_5c == (byte *)0x80000000)) {
            local_51 = 0x2d;
          }
          else {
            bVar18 = local_80 != (byte *)0x0;
            local_80 = (byte *)-(int)local_80;
            local_5c = (byte *)-(int)(local_5c + bVar18);
            local_51 = 0x2d;
          }
        }
        else if (local_5d == 0) {
          local_51 = -(local_51 != 0) & 0x20;
        }
        else {
          local_51 = 0x2b;
        }
      }
      if (local_80 == (byte *)0x0 && local_5c == (byte *)0x0) {
        local_68 = 0;
      }
      if ((local_69 != '\0') && ((int)local_74 < (int)(local_64 + -(uint)(local_51 != 0)))) {
        local_74 = local_64 + -(uint)(local_51 != 0);
      }
      if ((int)local_74 < 0x3c) {
        pbVar15 = (byte *)0x46;
        local_90 = &local_50;
        local_70 = (byte *)0x46;
      }
      else {
        pbVar15 = local_74 + 10;
        local_70 = pbVar15;
        local_90 = (byte *)FUN_0055da00(pbVar15);
        local_8c = local_90;
        if (local_90 == (byte *)0x0) {
LAB_0056b687:
          *(undefined1 *)(local_7c + 0x18) = 1;
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
      }
      pbVar15 = local_90 + (int)(pbVar15 + -1);
      if (local_52 == '\x10') {
        uVar21 = __aulldiv(local_80,local_5c,10,0);
        local_a0 = (uint)uVar21;
        local_9c = local_80 + local_a0 * -10;
        if ((3 < (int)local_9c) || (lVar22 = __aullrem(uVar21,10,0), lVar22 == 1)) {
          local_9c = (byte *)0x0;
        }
        pbVar15[-1] = "thstndrd"[(int)local_9c * 2 + 1];
        pbVar15 = pbVar15 + -2;
        *pbVar15 = "thstndrd"[(int)local_9c * 2];
      }
      lVar22 = CONCAT44(local_5c,local_80);
      local_98 = (double)CONCAT44("0123456789ABCDEF0123456789abcdef" + (byte)local_88[4],
                                  (undefined4)local_98);
      local_a0 = (uint)(byte)local_88[1];
      local_9c = (byte *)0x0;
      do {
        pbVar11 = unaff_EBX;
        pbVar15 = pbVar15 + -1;
        unaff_EBX = pbVar11;
        lVar22 = __aulldvrm(lVar22,local_a0,local_9c);
        *pbVar15 = *(byte *)(extraout_ECX + local_98._4_4_);
        local_80 = pbVar11;
      } while (lVar22 != 0);
      local_5c = pbVar15;
      for (pbVar11 = pbVar15 + (int)(local_74 + (-(int)local_70 - (int)local_90) + 1);
          0 < (int)pbVar11; pbVar11 = pbVar11 + -1) {
        local_5c = local_5c + -1;
        *local_5c = 0x30;
      }
      if (local_51 != 0) {
        local_5c = local_5c + -1;
        *local_5c = local_51;
      }
      if ((local_68 != 0) && (local_88[5] != 0)) {
        pbVar15 = &DAT_00712568 + (byte)local_88[5];
        bVar4 = *pbVar15;
        while (bVar4 != 0) {
          local_5c = local_5c + -1;
          pbVar15 = pbVar15 + 1;
          *local_5c = bVar4;
          bVar4 = *pbVar15;
        }
      }
      pbVar11 = local_90 + (int)(local_70 + (-1 - (int)local_5c));
      pbVar15 = local_5c;
      break;
    default:
      goto switchD_0056acc6_default;
    }
    if (local_65 == '\0') {
LAB_0056b76f:
      if (0 < (int)local_64 - (int)pbVar11) {
        FUN_0054a160(local_7c,(int)local_64 - (int)pbVar11);
      }
    }
LAB_0056b781:
    if (0 < (int)pbVar11) {
      FUN_00567e70(local_7c,pbVar15,pbVar11);
    }
    if ((local_65 != '\0') && (0 < (int)local_64 - (int)pbVar11)) {
      FUN_0054a160(local_7c,(int)local_64 - (int)pbVar11);
    }
    FUN_00524410(local_8c);
    param_3 = local_78 + 1;
    bVar4 = *param_3;
  } while( true );
}


/* FUN_0056b870 @ 0056b870  kind=gamemisc  attributed-by=caller-vote  size=147 */

void FUN_0056b870(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)param_1[2];
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)FUN_0056c7b0(*param_1);
    param_1[2] = piVar2;
    if (piVar2 == (int *)0x0) {
      return;
    }
    FUN_0056bdc0(piVar2,0x94);
  }
  iVar1 = piVar2[7];
  if ((iVar1 < piVar2[8]) || (iVar3 = FUN_0053b4b0(piVar2), iVar3 == 0)) {
    iVar3 = piVar2[1];
    piVar2[7] = piVar2[7] + 1;
    *(undefined2 *)(iVar3 + iVar1 * 0x14) = 0x7f;
    *(undefined1 *)(iVar3 + 3 + iVar1 * 0x14) = 0;
    *(undefined4 *)(iVar3 + 4 + iVar1 * 0x14) = 0;
    *(undefined4 *)(iVar3 + 8 + iVar1 * 0x14) = 0;
    *(undefined4 *)(iVar3 + 0xc + iVar1 * 0x14) = 0;
    *(undefined4 *)(iVar3 + 0x10 + iVar1 * 0x14) = 0;
  }
  piVar2[0x1a] = piVar2[0x1a] | 1;
  if (*(char *)(*(int *)(*(int *)(*piVar2 + 0x10) + 4) + 9) != '\0') {
    piVar2[0x1b] = piVar2[0x1b] | 1;
  }
  return;
}


/* FUN_0056b910 @ 0056b910  kind=gamemisc  attributed-by=caller-vote  size=76 */

void FUN_0056b910(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if ((*(ushort *)(param_1 + 7) & 0x2460) != 0) {
      FUN_00574d80(param_1);
    }
    FUN_005521a0(*param_1,param_1[9]);
    param_1[1] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    FUN_005521a0(*param_1,param_1);
  }
  return;
}


/* FUN_0056bc90 @ 0056bc90  kind=gamemisc  attributed-by=caller-vote  size=67 */

void FUN_0056bc90(undefined4 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00552230(param_1,0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *(undefined2 *)((int)puVar1 + 0x1c) = 1;
    *(undefined1 *)((int)puVar1 + 0x1e) = 5;
    *(undefined4 *)puVar1 = param_1;
  }
  return;
}


/* FUN_0056bce0 @ 0056bce0  kind=gamemisc  attributed-by=caller-vote  size=169 */

undefined4 FUN_0056bce0(int param_1,byte param_2)

{
  ushort uVar1;
  int iVar2;
  
  if ((param_1 == 0) || (uVar1 = *(ushort *)(param_1 + 0x1c), (uVar1 & 1) != 0)) {
    return 0;
  }
  *(ushort *)(param_1 + 0x1c) = uVar1 >> 3 & 2 | uVar1;
  if ((uVar1 & 0x4000) != 0) {
    FUN_00574600(param_1);
  }
  if ((*(byte *)(param_1 + 0x1c) & 2) == 0) {
    FUN_00575350(param_1,param_2);
  }
  else {
    if (*(byte *)(param_1 + 0x1f) != (param_2 & 0xf7)) {
      FUN_00575420(param_1,param_2 & 0xf7);
    }
    if ((((param_2 & 8) != 0) && ((*(uint *)(param_1 + 4) & 1) != 0)) &&
       (iVar2 = FUN_00574af0(param_1), iVar2 != 0)) {
      return 0;
    }
    FUN_00574bf0(param_1);
  }
  if (*(byte *)(param_1 + 0x1f) != (param_2 & 0xf7)) {
    return 0;
  }
  return *(undefined4 *)(param_1 + 4);
}


/* FUN_0056bdc0 @ 0056bdc0  kind=gamemisc  attributed-by=caller-vote  size=97 */

int FUN_0056bdc0(int param_1,undefined1 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x1c);
  if (*(int *)(param_1 + 0x20) <= iVar2) {
    iVar3 = FUN_0053b4b0(param_1);
    if (iVar3 != 0) {
      return 1;
    }
  }
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  puVar1 = (undefined1 *)(*(int *)(param_1 + 4) + iVar2 * 0x14);
  *puVar1 = param_2;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  *(undefined4 *)(puVar1 + 8) = 0;
  *(undefined4 *)(puVar1 + 0xc) = 0;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  puVar1[1] = 0;
  return iVar2;
}


/* FUN_0056be30 @ 0056be30  kind=gamemisc  attributed-by=caller-vote  size=96 */

int FUN_0056be30(int param_1,undefined1 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x1c);
  if (*(int *)(param_1 + 0x20) <= iVar2) {
    iVar3 = FUN_0053b4b0(param_1);
    if (iVar3 != 0) {
      return 1;
    }
  }
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  puVar1 = (undefined1 *)(*(int *)(param_1 + 4) + iVar2 * 0x14);
  *puVar1 = param_2;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = param_3;
  *(undefined4 *)(puVar1 + 8) = 0;
  *(undefined4 *)(puVar1 + 0xc) = 0;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  puVar1[1] = 0;
  return iVar2;
}


/* FUN_0056be90 @ 0056be90  kind=gamemisc  attributed-by=caller-vote  size=95 */

int FUN_0056be90(int param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x1c);
  if (*(int *)(param_1 + 0x20) <= iVar2) {
    iVar3 = FUN_0053b4b0(param_1);
    if (iVar3 != 0) {
      return 1;
    }
  }
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  puVar1 = (undefined1 *)(*(int *)(param_1 + 4) + iVar2 * 0x14);
  *puVar1 = param_2;
  *(undefined4 *)(puVar1 + 4) = param_3;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 8) = param_4;
  *(undefined4 *)(puVar1 + 0xc) = 0;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  puVar1[1] = 0;
  return iVar2;
}


/* FUN_0056bef0 @ 0056bef0  kind=gamemisc  attributed-by=caller-vote  size=94 */

int FUN_0056bef0(int param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x1c);
  if (*(int *)(param_1 + 0x20) <= iVar2) {
    iVar3 = FUN_0053b4b0(param_1);
    if (iVar3 != 0) {
      return 1;
    }
  }
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  puVar1 = (undefined1 *)(*(int *)(param_1 + 4) + iVar2 * 0x14);
  *(undefined4 *)(puVar1 + 4) = param_3;
  *puVar1 = param_2;
  *(undefined4 *)(puVar1 + 8) = param_4;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 0xc) = param_5;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  puVar1[1] = 0;
  return iVar2;
}


/* FUN_0056bf50 @ 0056bf50  kind=gamemisc  attributed-by=caller-vote  size=108 */

int FUN_0056bf50(int param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x1c);
  if (*(int *)(param_1 + 0x20) <= iVar3) {
    iVar2 = FUN_0053b4b0(param_1);
    if (iVar2 != 0) {
      iVar3 = 1;
      goto LAB_0056bfa6;
    }
  }
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  puVar1 = (undefined1 *)(*(int *)(param_1 + 4) + iVar3 * 0x14);
  *puVar1 = param_2;
  *(undefined4 *)(puVar1 + 4) = param_3;
  *(undefined4 *)(puVar1 + 8) = param_4;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 0xc) = param_5;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  puVar1[1] = 0;
LAB_0056bfa6:
  FUN_0056c320(param_1,iVar3,param_6,param_7);
  return iVar3;
}


/* FUN_0056bfc0 @ 0056bfc0  kind=gamemisc  attributed-by=caller-vote  size=171 */

int FUN_0056bfc0(int *param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = param_1[7];
  if (param_1[8] <= iVar6) {
    iVar4 = FUN_0053b4b0(param_1);
    if (iVar4 != 0) {
      iVar6 = 1;
      goto LAB_0056c016;
    }
  }
  param_1[7] = param_1[7] + 1;
  puVar1 = (undefined1 *)(param_1[1] + iVar6 * 0x14);
  *puVar1 = param_2;
  *(undefined4 *)(puVar1 + 4) = param_3;
  *(undefined4 *)(puVar1 + 8) = param_4;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 0xc) = param_5;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  puVar1[1] = 0;
LAB_0056c016:
  iVar4 = param_1[1];
  iVar3 = *param_1;
  if ((iVar4 != 0) && (*(char *)(iVar3 + 0x38) == '\0')) {
    iVar5 = iVar6;
    if (iVar6 < 0) {
      iVar5 = param_1[7] + -1;
    }
    iVar2 = iVar4 + iVar5 * 0x14;
    FUN_00539320(iVar3,(int)*(char *)(iVar2 + 1),*(undefined4 *)(iVar4 + 0x10 + iVar5 * 0x14));
    *(undefined4 *)(iVar2 + 0x10) = param_6;
    *(undefined1 *)(iVar2 + 1) = 0xf2;
    return iVar6;
  }
  FUN_00539320(iVar3,0xfffffff2,param_6);
  return iVar6;
}


/* FUN_0056c070 @ 0056c070  kind=gamemisc  attributed-by=caller-vote  size=168 */

int FUN_0056c070(int param_1,int param_2,int param_3)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  
  iVar3 = param_1;
  if (*(int *)(param_1 + 0x20) < *(int *)(param_1 + 0x1c) + param_2) {
    iVar4 = FUN_0053b4b0(param_1);
    if (iVar4 != 0) {
      return 0;
    }
  }
  iVar4 = *(int *)(param_1 + 0x1c);
  if (0 < param_2) {
    pcVar6 = (char *)(param_3 + 1);
    iVar7 = iVar4 * 0x14;
    param_1 = param_2;
    do {
      iVar8 = (int)pcVar6[1];
      pbVar5 = (byte *)(*(int *)(iVar3 + 4) + iVar7);
      *pbVar5 = pcVar6[-1];
      *(int *)(pbVar5 + 4) = (int)*pcVar6;
      if ((iVar8 < 0) && (((&DAT_007122e8)[*pbVar5] & 1) != 0)) {
        *(int *)(pbVar5 + 8) = (iVar4 - iVar8) + -1;
      }
      else {
        *(int *)(pbVar5 + 8) = iVar8;
      }
      pcVar1 = pcVar6 + 2;
      iVar7 = iVar7 + 0x14;
      pcVar6 = pcVar6 + 4;
      param_1 = param_1 + -1;
      *(int *)(pbVar5 + 0xc) = (int)*pcVar1;
      pbVar5[1] = 0;
      pbVar5[0x10] = 0;
      pbVar5[0x11] = 0;
      pbVar5[0x12] = 0;
      pbVar5[0x13] = 0;
      pbVar5[3] = 0;
    } while (param_1 != 0);
    piVar2 = (int *)(iVar3 + 0x1c);
    *piVar2 = *piVar2 + param_2;
  }
  return iVar4;
}


/* FUN_0056c290 @ 0056c290  kind=gamemisc  attributed-by=caller-vote  size=39 */

undefined4 FUN_0056c290(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (((*(byte *)(param_1 + 0x1c) & 2) != 0) && (*(byte *)(param_1 + 0x1f) != param_2)) {
    uVar1 = FUN_00575420();
    return uVar1;
  }
  return 0;
}


/* FUN_0056c2c0 @ 0056c2c0  kind=gamemisc  attributed-by=caller-vote  size=29 */

void FUN_0056c2c0(int param_1,uint param_2,undefined4 param_3)

{
  if (param_2 < *(uint *)(param_1 + 0x1c)) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 4 + param_2 * 0x14) = param_3;
  }
  return;
}


/* FUN_0056c2e0 @ 0056c2e0  kind=gamemisc  attributed-by=caller-vote  size=29 */

void FUN_0056c2e0(int param_1,uint param_2,undefined4 param_3)

{
  if (param_2 < *(uint *)(param_1 + 0x1c)) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 8 + param_2 * 0x14) = param_3;
  }
  return;
}


/* FUN_0056c300 @ 0056c300  kind=gamemisc  attributed-by=caller-vote  size=29 */

void FUN_0056c300(int param_1,uint param_2,undefined4 param_3)

{
  if (param_2 < *(uint *)(param_1 + 0x1c)) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 0xc + param_2 * 0x14) = param_3;
  }
  return;
}


/* FUN_0056c320 @ 0056c320  kind=gamemisc  attributed-by=caller-vote  size=359 */

void FUN_0056c320(int *param_1,int param_2,void *param_3,int param_4)

{
  int iVar1;
  void *_Dst;
  int iVar2;
  int iVar3;
  void *_Src;
  uint _Size;
  void *_Dst_00;
  undefined4 uVar4;
  
  iVar2 = param_1[1];
  iVar3 = *param_1;
  if ((iVar2 == 0) || (*(char *)(iVar3 + 0x38) != '\0')) {
    if ((param_4 != -6) && (param_4 != -10)) {
      FUN_00539320(iVar3,param_4,param_3);
      return;
    }
  }
  else {
    if (param_2 < 0) {
      param_2 = param_1[7] + -1;
    }
    iVar1 = iVar2 + param_2 * 0x14;
    FUN_00539320(iVar3,(int)*(char *)(iVar1 + 1),*(undefined4 *)(iVar2 + 0x10 + param_2 * 0x14));
    *(undefined4 *)(iVar1 + 0x10) = 0;
    if (param_4 == -0xe) {
      *(void **)(iVar1 + 0x10) = param_3;
      *(undefined1 *)(iVar1 + 1) = 0xf2;
      return;
    }
    if (param_3 == (void *)0x0) {
      *(undefined4 *)(iVar1 + 0x10) = 0;
      *(undefined1 *)(iVar1 + 1) = 0;
      return;
    }
    if (param_4 != -6) {
      if (param_4 == -0x10) {
        *(void **)(iVar1 + 0x10) = param_3;
        *(undefined1 *)(iVar1 + 1) = 0xfa;
        return;
      }
      if (param_4 == -10) {
        *(void **)(iVar1 + 0x10) = param_3;
        *(undefined1 *)(iVar1 + 1) = 0xf6;
        *(int *)((int)param_3 + 0xc) = *(int *)((int)param_3 + 0xc) + 1;
        return;
      }
      if (param_4 < 0) {
        *(void **)(iVar1 + 0x10) = param_3;
        *(char *)(iVar1 + 1) = (char)param_4;
        return;
      }
      if (param_4 == 0) {
        param_4 = FUN_00568070(param_3);
      }
      uVar4 = FUN_005524a0(*param_1,param_3,param_4);
      *(undefined4 *)(iVar1 + 0x10) = uVar4;
      *(undefined1 *)(iVar1 + 1) = 0xff;
      return;
    }
    _Size = (uint)*(ushort *)((int)param_3 + 6);
    _Dst_00 = (void *)FUN_0055da00(_Size * 5 + 0xc);
    *(void **)(iVar1 + 0x10) = _Dst_00;
    if (_Dst_00 == (void *)0x0) {
      *(undefined1 *)(*param_1 + 0x38) = 1;
      *(undefined1 *)(iVar1 + 1) = 0;
      return;
    }
    memcpy(_Dst_00,param_3,_Size * 4 + 0xc);
    _Src = *(void **)((int)_Dst_00 + 8);
    _Dst = (void *)((int)_Dst_00 + (_Size + 3) * 4);
    *(void **)((int)_Dst_00 + 8) = _Dst;
    memcpy(_Dst,_Src,_Size);
    *(undefined1 *)(iVar1 + 1) = 0xfa;
  }
  return;
}


/* FUN_0056c490 @ 0056c490  kind=gamemisc  attributed-by=caller-vote  size=28 */

void FUN_0056c490(int param_1,undefined1 param_2)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 4) + -0x11 + *(int *)(param_1 + 0x1c) * 0x14) = param_2;
  }
  return;
}


/* FUN_0056c4b0 @ 0056c4b0  kind=gamemisc  attributed-by=caller-vote  size=67 */

void FUN_0056c4b0(undefined4 *param_1,int param_2)

{
  undefined8 *puVar1;
  int iVar2;
  
  iVar2 = param_1[1];
  if (iVar2 != 0) {
    puVar1 = (undefined8 *)(iVar2 + param_2 * 0x14);
    FUN_00539320(*param_1,(int)*(char *)((int)puVar1 + 1),
                 *(undefined4 *)(iVar2 + 0x10 + param_2 * 0x14));
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    *(undefined1 *)puVar1 = 0x95;
  }
  return;
}


/* FUN_0056c560 @ 0056c560  kind=gamemisc  attributed-by=caller-vote  size=327 */

void FUN_0056c560(undefined4 param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  char *pcVar6;
  
  FUN_00545650(*(undefined4 *)(param_2 + 0x44),(int)*(short *)(param_2 + 0x4c));
  FUN_00545650(*(undefined4 *)(param_2 + 0x10),(uint)*(ushort *)(param_2 + 0x2c) * 2);
  puVar4 = *(uint **)(param_2 + 0xb0);
  while (puVar4 != (uint *)0x0) {
    uVar2 = *puVar4;
    puVar3 = (uint *)puVar4[6];
    if ((uVar2 != 0) && (uVar1 = uVar2 + puVar4[1] * 0x14, uVar2 < uVar1)) {
      pcVar6 = (char *)(uVar2 + 1);
      iVar5 = ((uVar1 - uVar2) - 1) / 0x14 + 1;
      do {
        FUN_00539320(param_1,(int)*pcVar6,*(undefined4 *)(pcVar6 + 0xf));
        pcVar6 = pcVar6 + 0x14;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    FUN_005521a0(param_1,uVar2);
    FUN_005521a0(param_1,puVar4);
    puVar4 = puVar3;
  }
  iVar5 = (int)*(short *)(param_2 + 0x4e);
  while (iVar5 = iVar5 + -1, -1 < iVar5) {
    FUN_005521a0(param_1,*(undefined4 *)(*(int *)(param_2 + 0x48) + iVar5 * 4));
  }
  uVar2 = *(uint *)(param_2 + 4);
  if ((uVar2 != 0) && (uVar1 = uVar2 + *(int *)(param_2 + 0x1c) * 0x14, uVar2 < uVar1)) {
    pcVar6 = (char *)(uVar2 + 1);
    iVar5 = ((uVar1 - uVar2) - 1) / 0x14 + 1;
    do {
      FUN_00539320(param_1,(int)*pcVar6,*(undefined4 *)(pcVar6 + 0xf));
      pcVar6 = pcVar6 + 0x14;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_005521a0(param_1,uVar2);
  FUN_005521a0(param_1,*(undefined4 *)(param_2 + 0x28));
  FUN_005521a0(param_1,*(undefined4 *)(param_2 + 0x10));
  FUN_005521a0(param_1,*(undefined4 *)(param_2 + 0x98));
  FUN_005521a0(param_1,*(undefined4 *)(param_2 + 0x9c));
  return;
}


/* FUN_0056c7b0 @ 0056c7b0  kind=gamemisc  attributed-by=caller-vote  size=91 */

int * FUN_0056c7b0(int param_1)

{
  int *_Dst;
  
  _Dst = (int *)FUN_00552230(param_1,0xc0);
  if (_Dst != (int *)0x0) {
    memset(_Dst,0,0xc0);
    *_Dst = param_1;
    if (*(int *)(param_1 + 4) != 0) {
      *(int **)(*(int *)(param_1 + 4) + 0x38) = _Dst;
    }
    _Dst[0xf] = *(int *)(param_1 + 4);
    _Dst[0xe] = 0;
    *(int **)(param_1 + 4) = _Dst;
    _Dst[0xc] = 0x26bceaa5;
    return _Dst;
  }
  return (int *)0x0;
}


/* FUN_0056c8b0 @ 0056c8b0  kind=gamemisc  attributed-by=caller-vote  size=82 */

void FUN_0056c8b0(int *param_1)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    FUN_0056c560(iVar1,param_1);
    if (param_1[0xe] == 0) {
      *(int *)(iVar1 + 4) = param_1[0xf];
    }
    else {
      *(int *)(param_1[0xe] + 0x3c) = param_1[0xf];
    }
    if (param_1[0xf] != 0) {
      *(int *)(param_1[0xf] + 0x38) = param_1[0xe];
    }
    param_1[0xc] = -0x49f93c38;
    *param_1 = 0;
    FUN_005521a0(iVar1,param_1);
  }
  return;
}


/* FUN_0056c910 @ 0056c910  kind=gamemisc  attributed-by=caller-vote  size=77 */

void FUN_0056c910(int *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  piVar1 = param_1;
  if (0 < param_1[1]) {
    do {
      piVar3 = piVar1 + 2;
      if (((0x1f < iVar2) || ((param_2 & 1 << ((byte)iVar2 & 0x1f)) == 0)) && (*piVar3 != 0)) {
        if ((code *)piVar1[3] != (code *)0x0) {
          (*(code *)piVar1[3])(*piVar3);
        }
        *piVar3 = 0;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar3;
    } while (iVar2 < param_1[1]);
  }
  return;
}


/* FUN_005734d0 @ 005734d0  kind=gamemisc  attributed-by=caller-vote  size=112 */

undefined4 FUN_005734d0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if ((param_1[0xc] == -0x420df25d) || (param_1[0xc] == 0x519c2973)) {
    uVar2 = FUN_00575ca0(param_1);
  }
  iVar1 = *param_1;
  FUN_0056c560(iVar1,param_1);
  if (param_1[0xe] == 0) {
    *(int *)(iVar1 + 4) = param_1[0xf];
  }
  else {
    *(int *)(param_1[0xe] + 0x3c) = param_1[0xf];
  }
  if (param_1[0xf] != 0) {
    *(int *)(param_1[0xf] + 0x38) = param_1[0xe];
  }
  param_1[0xc] = -0x49f93c38;
  *param_1 = 0;
  FUN_005521a0(iVar1,param_1);
  return uVar2;
}


/* FUN_005736b0 @ 005736b0  kind=gamemisc  attributed-by=caller-vote  size=43 */

undefined1 * FUN_005736b0(int *param_1,int param_2)

{
  if (param_2 < 0) {
    param_2 = param_1[7] + -1;
  }
  if (*(char *)(*param_1 + 0x38) != '\0') {
    return &DAT_0076b50c;
  }
  return (undefined1 *)(param_1[1] + param_2 * 0x14);
}


/* FUN_00573d80 @ 00573d80  kind=gamemisc  attributed-by=caller-vote  size=34 */

void FUN_00573d80(int param_1,uint param_2)

{
  if ((-1 < (int)param_2) && (param_2 < *(uint *)(param_1 + 0x1c))) {
    *(uint *)(*(int *)(param_1 + 4) + 8 + param_2 * 0x14) = *(uint *)(param_1 + 0x1c);
  }
  return;
}


/* FUN_00573e30 @ 00573e30  kind=gamemisc  attributed-by=caller-vote  size=933 */

undefined4 FUN_00573e30(int *param_1)

{
  byte *pbVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  iVar7 = param_1[2];
  iVar6 = *param_1;
  iVar11 = iVar7 + 0x28;
  piVar10 = (int *)0x0;
  local_c = 0;
  local_10 = 0;
  FUN_00545650(iVar11,8);
  param_1[5] = 0;
  if (param_1[0x16] == 7) {
    *(undefined1 *)(iVar6 + 0x38) = 1;
  }
  else {
    local_18 = param_1[7];
    if ((param_1[0x18] & 3U) == 1) {
      iVar8 = param_1[2];
      local_10 = iVar8 + 0x168;
      if ((*(byte *)(iVar8 + 0x184) & 0x10) != 0) {
        piVar10 = *(int **)(iVar8 + 0x16c);
        local_c = *(uint *)(iVar8 + 0x180) >> 2;
      }
      iVar8 = 0;
      local_14 = 0;
      local_18 = 0;
      if (1 < local_c) {
        local_14 = 0;
        local_18 = 0;
        iVar9 = iVar8;
        do {
          iVar8 = iVar9 + 2;
          local_14 = local_14 + *(int *)(piVar10[iVar9] + 4);
          local_18 = local_18 + *(int *)(piVar10[iVar9 + 1] + 4);
          iVar9 = iVar8;
        } while (iVar8 < (int)(local_c - 1));
      }
      iVar9 = param_1[7];
      if (iVar8 < (int)local_c) {
        iVar9 = iVar9 + *(int *)(piVar10[iVar8] + 4);
      }
      local_18 = iVar9 + local_14 + local_18;
    }
    do {
      iVar8 = param_1[0x15];
      param_1[0x15] = iVar8 + 1;
      if (local_18 <= iVar8) {
        param_1[0x16] = 0;
        return 0x65;
      }
    } while (((param_1[0x18] & 3U) == 2) && (*(char *)(param_1[1] + iVar8 * 0x14) != -0x6a));
    if (*(int *)(iVar6 + 0xe0) != 0) {
      param_1[0x16] = 9;
      FUN_005670f0(param_1 + 0xd,iVar6,&DAT_00716900,"interrupted");
      return 1;
    }
    if (iVar8 < param_1[7]) {
      iVar6 = param_1[1];
    }
    else {
      iVar8 = iVar8 - param_1[7];
      iVar9 = 0;
      iVar6 = *(int *)(*piVar10 + 4);
      if (iVar6 <= iVar8) {
        do {
          iVar9 = iVar9 + 1;
          iVar8 = iVar8 - iVar6;
          iVar6 = *(int *)(piVar10[iVar9] + 4);
        } while (iVar6 <= iVar8);
      }
      iVar6 = *(int *)piVar10[iVar9];
    }
    pbVar1 = (byte *)(iVar6 + iVar8 * 0x14);
    if (((byte)param_1[0x18] & 3) == 1) {
      *(undefined2 *)(iVar7 + 0x44) = 4;
      *(int *)(iVar7 + 0x38) = iVar8;
      *(int *)(iVar7 + 0x3c) = iVar8 >> 0x1f;
      *(undefined1 *)(iVar7 + 0x46) = 1;
      *(undefined2 *)(iVar7 + 0x6c) = 0xa02;
      pcVar3 = (&PTR_DAT_00713208)[*pbVar1];
      *(char **)(iVar7 + 0x54) = pcVar3;
      uVar5 = 0;
      if (pcVar3 != (char *)0x0) {
        cVar2 = *pcVar3;
        pcVar4 = pcVar3;
        while (cVar2 != '\0') {
          pcVar4 = pcVar4 + 1;
          cVar2 = *pcVar4;
        }
        uVar5 = (int)pcVar4 - (int)pcVar3 & 0x3fffffff;
      }
      *(uint *)(iVar7 + 0x68) = uVar5;
      *(undefined2 *)(iVar7 + 0x6e) = 0x103;
      iVar11 = iVar7 + 0x78;
      if (pbVar1[1] == 0xee) {
        iVar7 = local_c * 4;
        uVar5 = 0;
        if (local_c != 0) {
          do {
            if (piVar10[uVar5] == *(int *)(pbVar1 + 0x10)) break;
            uVar5 = uVar5 + 1;
          } while ((int)uVar5 < (int)local_c);
        }
        if ((uVar5 == local_c) &&
           (iVar6 = FUN_005748c0(local_10,iVar7 + 4,local_c != 0), iVar6 == 0)) {
          *(undefined4 *)(iVar7 + *(int *)(local_10 + 4)) = *(undefined4 *)(pbVar1 + 0x10);
          *(ushort *)(local_10 + 0x1c) = *(ushort *)(local_10 + 0x1c) | 0x10;
          *(int *)(local_10 + 0x18) = iVar7 + 4;
        }
      }
    }
    *(undefined2 *)(iVar11 + 0x1c) = 4;
    iVar7 = *(int *)(pbVar1 + 4);
    *(undefined1 *)(iVar11 + 0x1e) = 1;
    *(int *)(iVar11 + 0x10) = iVar7;
    *(int *)(iVar11 + 0x14) = iVar7 >> 0x1f;
    *(undefined2 *)(iVar11 + 0x44) = 4;
    iVar7 = *(int *)(pbVar1 + 8);
    *(int *)(iVar11 + 0x38) = iVar7;
    *(int *)(iVar11 + 0x3c) = iVar7 >> 0x1f;
    *(undefined1 *)(iVar11 + 0x46) = 1;
    *(undefined2 *)(iVar11 + 0x6c) = 4;
    iVar7 = *(int *)(pbVar1 + 0xc);
    *(int *)(iVar11 + 0x60) = iVar7;
    *(int *)(iVar11 + 100) = iVar7 >> 0x1f;
    *(undefined1 *)(iVar11 + 0x6e) = 1;
    iVar7 = FUN_005748c0(iVar11 + 0x78,0x20,0);
    if (iVar7 == 0) {
      *(undefined2 *)(iVar11 + 0x94) = 0x602;
      pcVar4 = (char *)FUN_005343b0(pbVar1,*(undefined4 *)(iVar11 + 0x7c),0x20);
      pcVar3 = *(char **)(iVar11 + 0x7c);
      if (pcVar4 == pcVar3) {
        uVar5 = 0;
        if (pcVar3 != (char *)0x0) {
          cVar2 = *pcVar3;
          pcVar4 = pcVar3;
          while (cVar2 != '\0') {
            pcVar4 = pcVar4 + 1;
            cVar2 = *pcVar4;
          }
          uVar5 = (int)pcVar4 - (int)pcVar3 & 0x3fffffff;
        }
        *(uint *)(iVar11 + 0x90) = uVar5;
        *(undefined1 *)(iVar11 + 0x97) = 1;
      }
      else {
        FUN_00575040(iVar11 + 0x78,pcVar4,0xffffffff,1,0);
      }
      *(undefined1 *)(iVar11 + 0x96) = 3;
      if (((byte)param_1[0x18] & 3) == 1) {
        iVar7 = FUN_005748c0(iVar11 + 0xa0,4,0);
        if (iVar7 != 0) {
          return 1;
        }
        *(undefined2 *)(iVar11 + 0xbc) = 0x602;
        *(undefined4 *)(iVar11 + 0xb8) = 2;
        FUN_005240c0(3,*(undefined4 *)(iVar11 + 0xa4),&DAT_00716fa4,pbVar1[3]);
        *(undefined2 *)(iVar11 + 0xbe) = 0x103;
        *(undefined2 *)(iVar11 + 0xe4) = 1;
        *(undefined1 *)(iVar11 + 0xe6) = 5;
      }
      *(ushort *)(param_1 + 0xb) = (2 - ((*(ushort *)(param_1 + 0x18) & 3) - 1)) * 4;
      param_1[5] = param_1[2] + 0x28;
      param_1[0x16] = 0;
      return 100;
    }
  }
  return 1;
}


/* FUN_005741e0 @ 005741e0  kind=gamemisc  attributed-by=caller-vote  size=104 */

int FUN_005741e0(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar1 = param_1[9];
  param_1[9] = uVar1 + 1;
  if ((uVar1 & uVar1 - 1) == 0) {
    uVar2 = param_1[10];
    uVar3 = *param_1;
    iVar4 = FUN_00552390(uVar3,uVar2,uVar1 * 8 + 4);
    if (iVar4 == 0) {
      FUN_005521a0(uVar3,uVar2);
    }
    param_1[10] = iVar4;
  }
  if (param_1[10] != 0) {
    *(undefined4 *)(param_1[10] + uVar1 * 4) = 0xffffffff;
  }
  return -1 - uVar1;
}


/* FUN_00574250 @ 00574250  kind=gamemisc  attributed-by=caller-vote  size=780 */

void FUN_00574250(int *param_1,int param_2)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  size_t _Size;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  piVar2 = param_1;
  iVar9 = *(int *)(param_2 + 0x48);
  local_8 = *param_1;
  local_c = *(int *)(param_2 + 0x1cc);
  local_14 = *(int *)(param_2 + 0x198);
  iVar3 = *(int *)(param_2 + 0x54);
  if (iVar3 == 0) {
    iVar3 = 1;
  }
  iVar12 = *(int *)(param_2 + 0x4c) + iVar9;
  pvVar6 = (void *)(param_1[1] + param_1[7] * 0x14);
  uVar7 = param_1[1] + param_1[8] * 0x14;
  local_10 = iVar12;
  FUN_005469d0(param_1,&local_14);
  if ((*(char *)(param_2 + 0x17) == '\0') || (*(char *)(param_2 + 0x18) == '\0')) {
    iVar4 = 0;
  }
  else {
    iVar4 = 1;
  }
  param_1[0x18] = param_1[0x18] ^ (iVar4 << 7 ^ param_1[0x18]) & 0x80U;
  if ((*(char *)(param_2 + 0x1d4) != '\0') && (local_10 = iVar12, iVar12 < 10)) {
    local_10 = 10;
  }
  memset(pvVar6,0,uVar7 - (int)pvVar6);
  uVar11 = (int)pvVar6 + ((uint)pvVar6 & 7);
  param_1[0x18] = param_1[0x18] & 0xffffffdf;
  param_1 = (int *)uVar7;
  do {
    uVar7 = piVar2[2];
    _Size = 0;
    if (uVar7 == 0) {
      _Size = local_10 * 0x28;
      if (_Size + uVar11 <= param_1) {
        uVar7 = uVar11;
        uVar11 = _Size + uVar11;
        _Size = 0;
      }
    }
    piVar2[2] = uVar7;
    uVar10 = piVar2[0x11];
    uVar8 = uVar10;
    uVar7 = uVar11;
    if (uVar10 == 0) {
      uVar7 = local_c * 0x28 + uVar11;
      uVar8 = uVar11;
      if (param_1 < uVar7) {
        _Size = _Size + local_c * 0x28;
        uVar8 = uVar10;
        uVar7 = uVar11;
      }
    }
    piVar2[0x11] = uVar8;
    uVar10 = piVar2[3];
    uVar8 = uVar10;
    uVar11 = uVar7;
    if (uVar10 == 0) {
      uVar5 = local_14 * 4 + 7U & 0xfffffff8;
      uVar11 = uVar5 + uVar7;
      uVar8 = uVar7;
      if (param_1 < uVar11) {
        _Size = _Size + uVar5;
        uVar8 = uVar10;
        uVar11 = uVar7;
      }
    }
    piVar2[3] = uVar8;
    uVar10 = piVar2[0x12];
    uVar8 = uVar10;
    uVar7 = uVar11;
    if (uVar10 == 0) {
      uVar5 = local_c * 4 + 7U & 0xfffffff8;
      uVar7 = uVar5 + uVar11;
      uVar8 = uVar11;
      if (param_1 < uVar7) {
        _Size = _Size + uVar5;
        uVar8 = uVar10;
        uVar7 = uVar11;
      }
    }
    piVar2[0x12] = uVar8;
    uVar10 = piVar2[0x10];
    uVar8 = uVar10;
    uVar11 = uVar7;
    if (uVar10 == 0) {
      uVar5 = iVar9 * 4 + 7U & 0xfffffff8;
      uVar11 = uVar5 + uVar7;
      uVar8 = uVar7;
      if (param_1 < uVar11) {
        _Size = _Size + uVar5;
        uVar8 = uVar10;
        uVar11 = uVar7;
      }
    }
    uVar7 = piVar2[0x2e];
    piVar2[0x10] = uVar8;
    uVar10 = uVar7;
    if ((uVar7 == 0) && (uVar8 = iVar3 + 7U & 0xfffffff8, uVar10 = uVar11, param_1 < uVar8 + uVar11)
       ) {
      _Size = _Size + uVar8;
      uVar10 = uVar7;
    }
    piVar2[0x2e] = uVar10;
    if (_Size != 0) {
      pvVar6 = (void *)FUN_00552230(local_8,_Size);
      if (pvVar6 != (void *)0x0) {
        memset(pvVar6,0,_Size);
      }
      piVar2[0x27] = (int)pvVar6;
    }
    iVar12 = local_8;
    uVar11 = piVar2[0x27];
    param_1 = (int *)(_Size + uVar11);
  } while ((_Size != 0) && (*(char *)(local_8 + 0x38) == '\0'));
  *(short *)((int)piVar2 + 0x2e) = (short)iVar9;
  piVar2[0x2d] = iVar3;
  if ((piVar2[0x11] != 0) && (*(short *)(piVar2 + 0x13) = (short)local_c, 0 < local_c)) {
    iVar9 = 0;
    iVar3 = local_c;
    do {
      *(undefined2 *)(iVar9 + 0x1c + piVar2[0x11]) = 1;
      *(int *)(iVar9 + piVar2[0x11]) = local_8;
      iVar3 = iVar3 + -1;
      iVar9 = iVar9 + 0x28;
    } while (iVar3 != 0);
  }
  if ((void *)piVar2[0x12] != (void *)0x0) {
    sVar1 = *(short *)(param_2 + 0x1d0);
    *(short *)((int)piVar2 + 0x4e) = sVar1;
    memcpy((void *)piVar2[0x12],*(void **)(param_2 + 0x1ec),(int)sVar1 << 2);
    memset(*(void **)(param_2 + 0x1ec),0,*(int *)(param_2 + 0x1d0) << 2);
  }
  if (piVar2[2] != 0) {
    piVar2[2] = piVar2[2] + -0x28;
    piVar2[6] = local_10;
    if (0 < local_10) {
      iVar9 = 0x28;
      do {
        *(undefined2 *)(iVar9 + 0x1c + piVar2[2]) = 0x80;
        *(int *)(iVar9 + piVar2[2]) = iVar12;
        local_10 = local_10 + -1;
        iVar9 = iVar9 + 0x28;
      } while (local_10 != 0);
    }
  }
  piVar2[0x18] = piVar2[0x18] ^ ((uint)*(byte *)(param_2 + 0x1d4) ^ piVar2[0x18]) & 3;
  piVar2[0x15] = -1;
  piVar2[0x16] = 0;
  *(undefined2 *)(piVar2 + 0x17) = 0xff02;
  piVar2[0xc] = -0x420df25d;
  piVar2[0x19] = 0;
  piVar2[0x14] = 1;
  piVar2[0x1c] = 0;
  piVar2[0x22] = 0;
  piVar2[0x23] = 0;
  return;
}


/* FUN_00574600 @ 00574600  kind=gamemisc  attributed-by=caller-vote  size=97 */

undefined4 FUN_00574600(int param_1)

{
  int iVar1;
  
  if ((*(ushort *)(param_1 + 0x1c) & 0x4000) != 0) {
    iVar1 = *(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x18);
    if (iVar1 < 1) {
      iVar1 = 1;
    }
    iVar1 = FUN_005748c0(param_1,iVar1,1);
    if (iVar1 != 0) {
      return 7;
    }
    memset((void *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0x18)),0,*(size_t *)(param_1 + 0x10))
    ;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x10);
    *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) & 0xbdff;
  }
  return 0;
}


/* FUN_00574670 @ 00574670  kind=gamemisc  attributed-by=caller-vote  size=156 */

undefined4 FUN_00574670(undefined8 *param_1,int param_2)

{
  code *pcVar1;
  int local_44 [2];
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined8 local_34;
  undefined8 local_2c;
  undefined4 local_24;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined8 local_1c;
  undefined8 *local_14;
  undefined4 local_c;
  
  if (param_2 == 0) {
    return 0;
  }
  pcVar1 = *(code **)(param_2 + 0x14);
  if (pcVar1 != (code *)0x0) {
    memset(local_44,0,0x40);
    uStack_20 = 1;
    local_3c = *(undefined4 *)param_1;
    local_14 = param_1;
    local_44[0] = param_2;
    (*pcVar1)(local_44);
    FUN_005521a0(*(undefined4 *)param_1,*(undefined4 *)((int)param_1 + 0x24));
    *param_1 = CONCAT44(uStack_38,local_3c);
    param_1[1] = local_34;
    param_1[2] = local_2c;
    param_1[3] = CONCAT26(uStack_1e,CONCAT24(uStack_20,local_24));
    param_1[4] = local_1c;
    return local_c;
  }
  return 0;
}


/* FUN_005748c0 @ 005748c0  kind=gamemisc  attributed-by=caller-vote  size=277 */

undefined4 FUN_005748c0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar4 = *param_1;
  if (param_2 < 0x20) {
    param_2 = 0x20;
  }
  uVar2 = param_1[9];
  if ((((iVar4 == 0) || (uVar2 == 0)) || (uVar2 < *(uint *)(iVar4 + 0x104))) ||
     (*(uint *)(iVar4 + 0x108) <= uVar2)) {
    uVar2 = (*DAT_00766608._4_4_)(uVar2);
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar4 + 0xe8);
  }
  if ((int)uVar2 < param_2) {
    if (param_3 != 0) {
      iVar4 = param_1[1];
      if (iVar4 == param_1[9]) {
        iVar1 = *param_1;
        iVar3 = FUN_00552390(iVar1,iVar4,param_2);
        if (iVar3 == 0) {
          FUN_005521a0(iVar1,iVar4);
        }
        param_1[9] = iVar3;
        param_1[1] = iVar3;
        param_3 = 0;
        goto LAB_00574962;
      }
    }
    FUN_005521a0(*param_1,param_1[9]);
    iVar4 = FUN_00552230(*param_1,param_2);
    param_1[9] = iVar4;
  }
LAB_00574962:
  _Src = (void *)param_1[1];
  if (((_Src != (void *)0x0) && (param_3 != 0)) &&
     ((_Dst = (void *)param_1[9], _Dst != (void *)0x0 && (_Src != _Dst)))) {
    memcpy(_Dst,_Src,param_1[6]);
  }
  if (((*(ushort *)(param_1 + 7) & 0x400) != 0) && ((code *)param_1[8] != (code *)0x0)) {
    (*(code *)param_1[8])(param_1[1]);
  }
  iVar4 = param_1[9];
  param_1[1] = iVar4;
  if (iVar4 == 0) {
    *(undefined2 *)(param_1 + 7) = 1;
  }
  else {
    *(ushort *)(param_1 + 7) = *(ushort *)(param_1 + 7) & 0xe7ff;
  }
  param_1[8] = 0;
  uVar5 = 7;
  if (iVar4 != 0) {
    uVar5 = 0;
  }
  return uVar5;
}


/* FUN_005749e0 @ 005749e0  kind=gamemisc  attributed-by=caller-vote  size=137 */

int FUN_005749e0(int param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined1 uVar4;
  
  if (*(int *)(param_1 + 0x18) < 2) {
    return 0;
  }
  cVar1 = **(char **)(param_1 + 4);
  cVar2 = (*(char **)(param_1 + 4))[1];
  if (cVar1 == -2) {
    if (cVar2 != -1) {
      return 0;
    }
    uVar4 = 3;
  }
  else {
    if (cVar1 != -1) {
      return 0;
    }
    if (cVar2 != -2) {
      return 0;
    }
    uVar4 = 2;
  }
  iVar3 = FUN_00574af0(param_1);
  if (iVar3 == 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -2;
    memmove(*(void **)(param_1 + 4),(void *)((int)*(void **)(param_1 + 4) + 2),
            *(size_t *)(param_1 + 0x18));
    *(undefined1 *)(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 4)) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0x18) + 1 + *(int *)(param_1 + 4)) = 0;
    *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) | 0x200;
    *(undefined1 *)(param_1 + 0x1f) = uVar4;
  }
  return iVar3;
}


/* FUN_00574af0 @ 00574af0  kind=gamemisc  attributed-by=caller-vote  size=106 */

undefined4 FUN_00574af0(int param_1)

{
  int iVar1;
  
  if ((*(ushort *)(param_1 + 0x1c) & 0x4000) != 0) {
    FUN_00574600(param_1);
  }
  if (((*(byte *)(param_1 + 0x1c) & 0x12) != 0) &&
     (*(int *)(param_1 + 4) != *(int *)(param_1 + 0x24))) {
    iVar1 = FUN_005748c0(param_1,*(int *)(param_1 + 0x18) + 2,1);
    if (iVar1 != 0) {
      return 7;
    }
    *(undefined1 *)(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 4)) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0x18) + 1 + *(int *)(param_1 + 4)) = 0;
    *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) | 0x200;
  }
  return 0;
}


/* FUN_00574bf0 @ 00574bf0  kind=gamemisc  attributed-by=caller-vote  size=87 */

undefined4 FUN_00574bf0(int param_1)

{
  int iVar1;
  
  if (((*(ushort *)(param_1 + 0x1c) & 0x200) == 0) && ((*(ushort *)(param_1 + 0x1c) & 2) != 0)) {
    iVar1 = FUN_005748c0(param_1,*(int *)(param_1 + 0x18) + 2,1);
    if (iVar1 != 0) {
      return 7;
    }
    *(undefined1 *)(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 4)) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0x18) + 1 + *(int *)(param_1 + 4)) = 0;
    *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) | 0x200;
  }
  return 0;
}


/* FUN_00574d40 @ 00574d40  kind=gamemisc  attributed-by=caller-vote  size=64 */

void FUN_00574d40(undefined4 *param_1)

{
  if ((*(ushort *)(param_1 + 7) & 0x2460) != 0) {
    FUN_00574d80(param_1);
  }
  FUN_005521a0(*param_1,param_1[9]);
  param_1[1] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  return;
}


/* FUN_00574d80 @ 00574d80  kind=gamemisc  attributed-by=caller-vote  size=105 */

void FUN_00574d80(int param_1)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_1 + 0x1c);
  if ((uVar1 & 0x2000) != 0) {
    FUN_00574670(param_1,*(undefined4 *)(param_1 + 0x10));
    FUN_00574d40(param_1);
    return;
  }
  if (((uVar1 & 0x400) != 0) && (*(code **)(param_1 + 0x20) != (code *)0x0)) {
    (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(param_1 + 0x20) = 0;
    return;
  }
  if ((uVar1 & 0x20) != 0) {
    FUN_005644e0(*(undefined4 *)(param_1 + 0x10));
    return;
  }
  if ((uVar1 & 0x40) != 0) {
    FUN_00574f20(param_1);
  }
  return;
}


/* FUN_00574f20 @ 00574f20  kind=gamemisc  attributed-by=caller-vote  size=77 */

void FUN_00574f20(int param_1)

{
  int *piVar1;
  
  if ((*(byte *)(param_1 + 0x1c) & 0x40) != 0) {
    piVar1 = *(int **)(param_1 + 0x10);
    piVar1[1] = *(int *)(*piVar1 + 0xa4);
    *(int **)(*piVar1 + 0xa4) = piVar1;
  }
  if ((*(byte *)(param_1 + 0x1c) & 0x20) != 0) {
    FUN_005644e0(*(undefined4 *)(param_1 + 0x10));
  }
  *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) & 0xbe01 | 1;
  *(undefined1 *)(param_1 + 0x1e) = 5;
  return;
}


/* FUN_00575040 @ 00575040  kind=gamemisc  attributed-by=caller-vote  size=504 */

undefined4 FUN_00575040(int *param_1,void *param_2,size_t param_3,char param_4,code *param_5)

{
  int *piVar1;
  ushort uVar2;
  size_t _Size;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  ushort uVar6;
  int iVar7;
  
  if (param_2 == (void *)0x0) {
    if ((*(byte *)(param_1 + 7) & 0x40) != 0) {
      piVar1 = (int *)param_1[4];
      piVar1[1] = *(int *)(*piVar1 + 0xa4);
      *(int **)(*piVar1 + 0xa4) = piVar1;
    }
    if ((*(byte *)(param_1 + 7) & 0x20) != 0) {
      FUN_005644e0(param_1[4]);
    }
    *(ushort *)(param_1 + 7) = *(ushort *)(param_1 + 7) & 0xbe01 | 1;
    *(undefined1 *)((int)param_1 + 0x1e) = 5;
    return 0;
  }
  if (*param_1 == 0) {
    iVar7 = 1000000000;
  }
  else {
    iVar7 = *(int *)(*param_1 + 0x50);
  }
  uVar6 = 2;
  if (param_4 == '\0') {
    uVar6 = 0x10;
  }
  if ((int)param_3 < 0) {
    param_3 = 0;
    if (param_4 == '\x01') {
      if (-1 < iVar7) {
        do {
          if (*(char *)(param_3 + (int)param_2) == '\0') break;
          param_3 = param_3 + 1;
        } while ((int)param_3 <= iVar7);
      }
    }
    else if (-1 < iVar7) {
      do {
        if (*(char *)(param_3 + 1 + (int)param_2) == '\0' &&
            *(char *)(param_3 + (int)param_2) == '\0') break;
        param_3 = param_3 + 2;
      } while ((int)param_3 <= iVar7);
    }
    uVar6 = uVar6 | 0x200;
  }
  if (param_5 == (code *)0xffffffff) {
    _Size = param_3;
    if ((uVar6 & 0x200) != 0) {
      _Size = (param_4 != '\x01') + 1 + param_3;
    }
    if (iVar7 < (int)param_3) {
      return 0x12;
    }
    iVar3 = FUN_005748c0(param_1,_Size,0);
    if (iVar3 != 0) {
      return 7;
    }
    memcpy((void *)param_1[1],param_2,_Size);
  }
  else {
    if (param_5 == FUN_0055dc20) {
      if ((*(ushort *)(param_1 + 7) & 0x2460) != 0) {
        FUN_00574d80(param_1);
      }
      FUN_005521a0(*param_1,param_1[9]);
      param_1[9] = (int)param_2;
      param_1[8] = 0;
    }
    else {
      if ((*(ushort *)(param_1 + 7) & 0x2460) != 0) {
        FUN_00574d80(param_1);
      }
      FUN_005521a0(*param_1,param_1[9]);
      param_1[8] = (int)param_5;
      uVar2 = 0x400;
      if (param_5 == (code *)0x0) {
        uVar2 = 0x800;
      }
      param_1[9] = 0;
      uVar6 = uVar6 | uVar2;
    }
    param_1[1] = (int)param_2;
  }
  *(ushort *)(param_1 + 7) = uVar6;
  param_1[6] = param_3;
  cVar5 = '\x01';
  if (param_4 != '\0') {
    cVar5 = param_4;
  }
  *(char *)((int)param_1 + 0x1f) = cVar5;
  *(char *)((int)param_1 + 0x1e) = (param_4 == '\0') + '\x03';
  if ((cVar5 != '\x01') && (iVar3 = FUN_005749e0(param_1), iVar3 != 0)) {
    return 7;
  }
  uVar4 = 0;
  if (iVar7 < (int)param_3) {
    uVar4 = 0x12;
  }
  return uVar4;
}


/* FUN_00575350 @ 00575350  kind=gamemisc  attributed-by=caller-vote  size=160 */

undefined4 FUN_00575350(int param_1,int param_2)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  undefined8 uVar7;
  
  uVar2 = *(ushort *)(param_1 + 0x1c);
  iVar3 = FUN_005748c0(param_1,0x20,0);
  if (iVar3 == 0) {
    if ((uVar2 & 4) == 0) {
      uVar7 = *(undefined8 *)(param_1 + 8);
      pcVar6 = "%!.15g";
    }
    else {
      uVar7 = *(undefined8 *)(param_1 + 0x10);
      pcVar6 = "%lld";
    }
    FUN_005240c0(0x20,*(undefined4 *)(param_1 + 4),pcVar6,uVar7);
    pcVar6 = *(char **)(param_1 + 4);
    uVar5 = 0;
    if (pcVar6 != (char *)0x0) {
      cVar1 = *pcVar6;
      pcVar4 = pcVar6;
      while (cVar1 != '\0') {
        pcVar4 = pcVar4 + 1;
        cVar1 = *pcVar4;
      }
      uVar5 = (int)pcVar4 - (int)pcVar6 & 0x3fffffff;
    }
    *(uint *)(param_1 + 0x18) = uVar5;
    *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) | 0x202;
    *(undefined1 *)(param_1 + 0x1f) = 1;
    if (((*(byte *)(param_1 + 0x1c) & 2) != 0) && (param_2 != 1)) {
      FUN_00575420(param_1,param_2);
    }
    return 0;
  }
  return 7;
}


/* FUN_00575420 @ 00575420  kind=gamemisc  attributed-by=caller-vote  size=1215 */

undefined4 FUN_00575420(undefined4 *param_1,char param_2)

{
  undefined1 uVar1;
  ushort uVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  undefined1 *puVar9;
  ushort *puVar10;
  ushort *puVar11;
  undefined1 *puVar12;
  ushort *puVar13;
  uint local_8;
  
  if (*(char *)((int)param_1 + 0x1f) == '\x01') {
    if (param_2 != '\x01') {
      iVar3 = param_1[6] * 2 + 2;
      goto LAB_005754a0;
    }
  }
  else if (param_2 != '\x01') {
    iVar3 = FUN_00574af0(param_1);
    if (iVar3 != 0) {
      return 7;
    }
    puVar9 = (undefined1 *)param_1[1];
    puVar12 = puVar9 + (param_1[6] & 0xfffffffe);
    for (; puVar9 < puVar12; puVar9 = puVar9 + 2) {
      uVar1 = *puVar9;
      *puVar9 = puVar9[1];
      puVar9[1] = uVar1;
    }
    *(char *)((int)param_1 + 0x1f) = param_2;
    return 0;
  }
  param_1[6] = param_1[6] & 0xfffffffe;
  iVar3 = param_1[6] * 2 + 1;
LAB_005754a0:
  puVar10 = (ushort *)param_1[1];
  puVar13 = (ushort *)(param_1[6] + (int)puVar10);
  pbVar4 = (byte *)FUN_00552230(*param_1,iVar3);
  if (pbVar4 == (byte *)0x0) {
    return 7;
  }
  if (*(char *)((int)param_1 + 0x1f) == '\x01') {
    pbVar5 = pbVar4;
    if (param_2 == '\x02') {
      while (puVar10 < puVar13) {
        local_8 = (uint)(byte)*puVar10;
        puVar10 = (ushort *)((int)puVar10 + 1);
        if (local_8 < 0xc0) {
LAB_0057554b:
          bVar7 = (byte)(local_8 >> 8);
          if (local_8 < 0x10000) {
            *pbVar5 = (byte)local_8;
            pbVar5[1] = bVar7;
            pbVar5 = pbVar5 + 2;
          }
          else {
            bVar6 = (byte)(local_8 - 0x10000 >> 10);
            *pbVar5 = ((byte)(local_8 >> 10) ^ bVar6) & 0x3f ^ bVar6;
            pbVar5[1] = ((byte)(local_8 - 0x10000 >> 0x12) & 3) - 0x28;
            pbVar5[2] = (byte)local_8;
            pbVar5[3] = (bVar7 & 3) - 0x24;
            pbVar5 = pbVar5 + 4;
          }
        }
        else {
          local_8 = (uint)(byte)(&DAT_007151b0)[local_8];
          for (; (puVar10 != puVar13 && (((byte)*puVar10 & 0xc0) == 0x80));
              puVar10 = (ushort *)((int)puVar10 + 1)) {
            local_8 = local_8 * 0x40 + ((byte)*puVar10 & 0x3f);
          }
          if (((0x7f < local_8) && ((local_8 & 0xfffff800) != 0xd800)) &&
             ((local_8 & 0xfffffffe) != 0xfffe)) goto LAB_0057554b;
          *pbVar5 = 0xfd;
          pbVar5[1] = 0xff;
          pbVar5 = pbVar5 + 2;
        }
      }
    }
    else {
      while (puVar10 < puVar13) {
        uVar8 = (uint)(byte)*puVar10;
        puVar10 = (ushort *)((int)puVar10 + 1);
        if (uVar8 < 0xc0) {
LAB_0057561c:
          bVar7 = (byte)(uVar8 >> 8);
          if (uVar8 < 0x10000) {
            *pbVar5 = bVar7;
            pbVar5[1] = (byte)uVar8;
            pbVar5 = pbVar5 + 2;
          }
          else {
            *pbVar5 = ((byte)(uVar8 - 0x10000 >> 0x12) & 3) - 0x28;
            bVar6 = (byte)(uVar8 - 0x10000 >> 10);
            pbVar5[1] = ((byte)(uVar8 >> 10) ^ bVar6) & 0x3f ^ bVar6;
            pbVar5[2] = (bVar7 & 3) - 0x24;
            pbVar5[3] = (byte)uVar8;
            pbVar5 = pbVar5 + 4;
          }
        }
        else {
          uVar8 = (uint)(byte)(&DAT_007151b0)[uVar8];
          for (; (puVar10 != puVar13 && (((byte)*puVar10 & 0xc0) == 0x80));
              puVar10 = (ushort *)((int)puVar10 + 1)) {
            uVar8 = uVar8 * 0x40 + ((byte)*puVar10 & 0x3f);
          }
          if (((0x7f < uVar8) && ((uVar8 & 0xfffff800) != 0xd800)) &&
             ((uVar8 & 0xfffffffe) != 0xfffe)) goto LAB_0057561c;
          *pbVar5 = 0xff;
          pbVar5[1] = 0xfd;
          pbVar5 = pbVar5 + 2;
        }
      }
    }
    param_1[6] = (int)pbVar5 - (int)pbVar4;
    *pbVar5 = 0;
    pbVar5 = pbVar5 + 1;
  }
  else {
    pbVar5 = pbVar4;
    if (*(char *)((int)param_1 + 0x1f) == '\x02') {
      while (puVar10 < puVar13) {
        uVar8 = (uint)*puVar10;
        puVar11 = puVar10 + 1;
        if ((uVar8 - 0xd800 < 0x800) && (puVar11 < puVar13)) {
          uVar2 = *puVar11;
          puVar11 = puVar10 + 2;
          uVar8 = ((uVar8 & 0x3f) + 0x40 + (uVar8 & 0x3c0)) * 0x400 + (uVar2 & 0x3ff);
        }
        bVar7 = (byte)uVar8;
        puVar10 = puVar11;
        if (uVar8 < 0x80) {
          *pbVar5 = bVar7;
          pbVar5 = pbVar5 + 1;
        }
        else if (uVar8 < 0x800) {
          *pbVar5 = ((byte)(uVar8 >> 6) & 0x1f) - 0x40;
          pbVar5[1] = (bVar7 & 0x3f) + 0x80;
          pbVar5 = pbVar5 + 2;
        }
        else if (uVar8 < 0x10000) {
          *pbVar5 = ((byte)(uVar8 >> 0xc) & 0xf) - 0x20;
          pbVar5[1] = ((byte)(uVar8 >> 6) & 0x3f) + 0x80;
          pbVar5[2] = (bVar7 & 0x3f) + 0x80;
          pbVar5 = pbVar5 + 3;
        }
        else {
          *pbVar5 = (char)(uVar8 >> 0x12) - 0x10;
          pbVar5[1] = ((byte)(uVar8 >> 0xc) & 0x3f) + 0x80;
          pbVar5[2] = ((byte)(uVar8 >> 6) & 0x3f) + 0x80;
          pbVar5[3] = (bVar7 & 0x3f) + 0x80;
          pbVar5 = pbVar5 + 4;
        }
      }
    }
    else {
      while (puVar10 < puVar13) {
        uVar8 = (uint)CONCAT11((byte)*puVar10,*(byte *)((int)puVar10 + 1));
        puVar11 = puVar10 + 1;
        if ((uVar8 - 0xd800 < 0x800) && (puVar11 < puVar13)) {
          uVar2 = *puVar11;
          puVar11 = puVar10 + 2;
          uVar8 = ((uVar8 & 0x3f) + 0x40 + (uVar8 & 0x3c0)) * 0x400 +
                  (CONCAT11((byte)uVar2,*(byte *)((int)puVar10 + 3)) & 0x3ff);
        }
        bVar7 = (byte)uVar8;
        puVar10 = puVar11;
        if (uVar8 < 0x80) {
          *pbVar5 = bVar7;
          pbVar5 = pbVar5 + 1;
        }
        else if (uVar8 < 0x800) {
          *pbVar5 = ((byte)(uVar8 >> 6) & 0x1f) - 0x40;
          pbVar5[1] = (bVar7 & 0x3f) + 0x80;
          pbVar5 = pbVar5 + 2;
        }
        else if (uVar8 < 0x10000) {
          *pbVar5 = ((byte)(uVar8 >> 0xc) & 0xf) - 0x20;
          pbVar5[1] = ((byte)(uVar8 >> 6) & 0x3f) + 0x80;
          pbVar5[2] = (bVar7 & 0x3f) + 0x80;
          pbVar5 = pbVar5 + 3;
        }
        else {
          *pbVar5 = (char)(uVar8 >> 0x12) - 0x10;
          pbVar5[1] = ((byte)(uVar8 >> 0xc) & 0x3f) + 0x80;
          pbVar5[2] = ((byte)(uVar8 >> 6) & 0x3f) + 0x80;
          pbVar5[3] = (bVar7 & 0x3f) + 0x80;
          pbVar5 = pbVar5 + 4;
        }
      }
    }
    param_1[6] = (int)pbVar5 - (int)pbVar4;
  }
  *pbVar5 = 0;
  if ((*(ushort *)(param_1 + 7) & 0x2460) != 0) {
    FUN_00574d80(param_1);
  }
  FUN_005521a0(*param_1,param_1[9]);
  *(char *)((int)param_1 + 0x1f) = param_2;
  param_1[1] = pbVar4;
  param_1[9] = pbVar4;
  *(ushort *)(param_1 + 7) = *(ushort *)(param_1 + 7) & 0xe7ff | 0x600;
  param_1[8] = 0;
  return 0;
}


/* FUN_00575ca0 @ 00575ca0  kind=gamemisc  attributed-by=caller-vote  size=356 */

uint FUN_00575ca0(int *param_1)

{
  int iVar1;
  int *piVar2;
  void *_Src;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *param_1;
  FUN_00573740(param_1);
  if (param_1[0x15] < 0) {
    if ((param_1[0x16] != 0) && ((*(byte *)(param_1 + 0x18) & 0x20) != 0)) {
      FUN_00553890(iVar1,param_1[0x16],0);
      piVar2 = *(int **)(iVar1 + 0xd4);
      _Src = (void *)param_1[0xd];
      if (piVar2 != (int *)0x0) {
        if (_Src == (void *)0x0) {
          if ((*(byte *)(piVar2 + 7) & 0x40) != 0) {
            piVar3 = (int *)piVar2[4];
            piVar3[1] = *(int *)(*piVar3 + 0xa4);
            *(int **)(*piVar3 + 0xa4) = piVar3;
          }
          if ((*(byte *)(piVar2 + 7) & 0x20) != 0) {
            FUN_005644e0(piVar2[4]);
          }
          *(ushort *)(piVar2 + 7) = *(ushort *)(piVar2 + 7) & 0xbe01 | 1;
          *(undefined1 *)((int)piVar2 + 0x1e) = 5;
        }
        else {
          if (*piVar2 == 0) {
            iVar4 = 1000000000;
          }
          else {
            iVar4 = *(int *)(*piVar2 + 0x50);
          }
          iVar5 = 0;
          if (-1 < iVar4) {
            do {
              if (*(char *)(iVar5 + (int)_Src) == '\0') break;
              iVar5 = iVar5 + 1;
            } while (iVar5 <= iVar4);
          }
          if ((iVar5 <= iVar4) && (iVar4 = FUN_005748c0(piVar2,iVar5 + 1,0), iVar4 == 0)) {
            memcpy((void *)piVar2[1],_Src,iVar5 + 1);
            piVar2[6] = iVar5;
            piVar2[7] = 0x1030202;
          }
        }
      }
      FUN_005521a0(iVar1,param_1[0xd]);
      param_1[0xd] = 0;
    }
  }
  else {
    FUN_00576a80(param_1);
    FUN_005521a0(iVar1,param_1[0xd]);
    param_1[0xd] = 0;
    if ((param_1[0x18] & 0x40U) != 0) {
      param_1[0x18] = param_1[0x18] | 0x20;
    }
  }
  FUN_005521a0(*param_1,param_1[0xd]);
  param_1[0xd] = 0;
  param_1[5] = 0;
  param_1[0xc] = 0x26bceaa5;
  return param_1[0x16] & *(uint *)(iVar1 + 0x30);
}


/* FUN_00575e10 @ 00575e10  kind=gamemisc  attributed-by=caller-vote  size=32 */

void FUN_00575e10(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x28) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x28) - (param_2 * 4 + 4)) = *(undefined4 *)(param_1 + 0x1c);
  }
  return;
}


/* FUN_00576270 @ 00576270  kind=gamemisc  attributed-by=caller-vote  size=62 */

undefined4 FUN_00576270(int *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  
  if (*(char *)(*param_1 + 0x38) != '\0') {
    return 7;
  }
  uVar1 = FUN_00575040(param_1[4] + ((uint)*(ushort *)(param_1 + 0xb) * param_3 + param_2) * 0x28,
                       param_4,0xffffffff,1,param_5);
  return uVar1;
}


/* FUN_005762b0 @ 005762b0  kind=gamemisc  attributed-by=caller-vote  size=121 */

void FUN_005762b0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *_Dst;
  int iVar2;
  
  uVar1 = *param_1;
  FUN_00545650(param_1[4],(uint)*(ushort *)(param_1 + 0xb) * 2);
  FUN_005521a0(uVar1,param_1[4]);
  *(short *)(param_1 + 0xb) = (short)param_2;
  iVar2 = param_2 * 2;
  _Dst = (undefined4 *)FUN_00552230(uVar1,param_2 * 0x50);
  if (_Dst != (undefined4 *)0x0) {
    memset(_Dst,0,param_2 * 0x50);
  }
  param_1[4] = _Dst;
  if (_Dst != (undefined4 *)0x0) {
    for (; 0 < iVar2; iVar2 = iVar2 + -1) {
      *(undefined2 *)(_Dst + 7) = 1;
      *_Dst = *param_1;
      _Dst = _Dst + 10;
    }
  }
  return;
}


/* FUN_00576a80 @ 00576a80  kind=gamemisc  attributed-by=caller-vote  size=277 */

int FUN_00576a80(int *param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  void *_Src;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  iVar2 = *param_1;
  iVar3 = param_1[0x16];
  if (param_1[0xd] == 0) {
    FUN_00553890(iVar2,iVar3,0);
    return iVar3;
  }
  uVar1 = *(undefined1 *)(iVar2 + 0x38);
  if (DAT_0076b3bc != (code *)0x0) {
    (*DAT_0076b3bc)();
  }
  piVar4 = *(int **)(iVar2 + 0xd4);
  _Src = (void *)param_1[0xd];
  if (piVar4 != (int *)0x0) {
    if (_Src == (void *)0x0) {
      if ((*(byte *)(piVar4 + 7) & 0x40) != 0) {
        piVar5 = (int *)piVar4[4];
        piVar5[1] = *(int *)(*piVar5 + 0xa4);
        *(int **)(*piVar5 + 0xa4) = piVar5;
      }
      if ((*(byte *)(piVar4 + 7) & 0x20) != 0) {
        FUN_005644e0(piVar4[4]);
      }
      *(ushort *)(piVar4 + 7) = *(ushort *)(piVar4 + 7) & 0xbe01 | 1;
      *(undefined1 *)((int)piVar4 + 0x1e) = 5;
    }
    else {
      if (*piVar4 == 0) {
        iVar6 = 1000000000;
      }
      else {
        iVar6 = *(int *)(*piVar4 + 0x50);
      }
      iVar7 = 0;
      if (-1 < iVar6) {
        do {
          if (*(char *)(iVar7 + (int)_Src) == '\0') break;
          iVar7 = iVar7 + 1;
        } while (iVar7 <= iVar6);
      }
      if (iVar7 <= iVar6) {
        iVar6 = FUN_005748c0(piVar4,iVar7 + 1,0);
        if (iVar6 == 0) {
          memcpy((void *)piVar4[1],_Src,iVar7 + 1);
          piVar4[6] = iVar7;
          piVar4[7] = 0x1030202;
        }
      }
    }
  }
  if (DAT_0076b3c0 != (code *)0x0) {
    (*DAT_0076b3c0)();
  }
  *(undefined1 *)(iVar2 + 0x38) = uVar1;
  *(int *)(iVar2 + 0x2c) = iVar3;
  return iVar3;
}


/* FUN_00576ba0 @ 00576ba0  kind=gamemisc  attributed-by=caller-vote  size=48 */

void FUN_00576ba0(int *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 1 << ((byte)param_2 & 0x1f);
  param_1[0x1a] = param_1[0x1a] | uVar1;
  if ((param_2 != 1) &&
     (*(char *)(*(int *)(*(int *)(*param_1 + 0x10) + 4 + param_2 * 0x10) + 9) != '\0')) {
    param_1[0x1b] = param_1[0x1b] | uVar1;
  }
  return;
}


/* FUN_00576bd0 @ 00576bd0  kind=gamemisc  attributed-by=caller-vote  size=320 */

undefined4 FUN_00576bd0(int *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 extraout_EDX;
  
  iVar2 = *param_1;
  iVar5 = FUN_00576ed0(param_1,param_2);
  if (iVar5 == 0) {
    if (((*(byte *)((int)param_2 + 0x2a) & 0x10) != 0) || (0 < *(short *)((int)param_2 + 0x26))) {
      return 0;
    }
    if (-1 < *(short *)((int)param_2 + 0x26)) {
      iVar5 = FUN_00566d40(iVar2,param_2[3],0);
      if (iVar5 == 0) {
        return 1;
      }
      uVar1 = *(undefined1 *)(iVar2 + 0xea);
      iVar3 = param_1[0x12];
      FUN_00567310(param_1,*(undefined4 *)(iVar5 + 0x28));
      *(undefined2 *)((int)param_2 + 0x26) = 0xffff;
      uVar4 = *(undefined4 *)(iVar2 + 0x10c);
      *(undefined1 *)(iVar2 + 0xea) = 0;
      *(undefined4 *)(iVar2 + 0x10c) = 0;
      iVar6 = FUN_00564270(extraout_EDX,iVar5);
      *(undefined4 *)(iVar2 + 0x10c) = uVar4;
      *(undefined1 *)(iVar2 + 0xea) = uVar1;
      param_1[0x12] = iVar3;
      if (iVar6 != 0) {
        *(undefined2 *)((int)param_2 + 0x26) = *(undefined2 *)(iVar6 + 0x26);
        param_2[1] = *(undefined4 *)(iVar6 + 4);
        *(undefined2 *)(iVar6 + 0x26) = 0;
        *(undefined4 *)(iVar6 + 4) = 0;
        FUN_005529a0(iVar2,iVar6);
        *(ushort *)(param_2[0x10] + 0x4e) = *(ushort *)(param_2[0x10] + 0x4e) | 2;
        FUN_00566d10(iVar2,iVar5);
        return 0;
      }
      *(undefined2 *)((int)param_2 + 0x26) = 0;
      FUN_00566d10(iVar2,iVar5);
      return 1;
    }
    FUN_00553950(param_1,"view %s is circularly defined",*param_2);
  }
  return 1;
}


/* FUN_00576d10 @ 00576d10  kind=gamemisc  attributed-by=caller-vote  size=59 */

void FUN_00576d10(int param_1,int *param_2)

{
  if (*(int *)(param_1 + 0x218) == 0) {
    *(int *)(param_1 + 0x218) = *param_2;
    *(int *)(param_1 + 0x21c) = param_2[1];
    return;
  }
  *(int *)(param_1 + 0x21c) = (param_2[1] - *(int *)(param_1 + 0x218)) + *param_2;
  return;
}


/* FUN_00576df0 @ 00576df0  kind=gamemisc  attributed-by=caller-vote  size=218 */

void FUN_00576df0(int *param_1,int *param_2,undefined4 param_3,int *param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  
  FUN_00567880(param_1,param_2,param_3,0,0,1,param_5);
  puVar1 = (undefined4 *)param_1[0x7f];
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = *param_1;
    iVar5 = -1000000;
    if (puVar1[0x10] != 0) {
      iVar5 = 0;
      if (0 < *(int *)(iVar2 + 0x14)) {
        piVar3 = (int *)(*(int *)(iVar2 + 0x10) + 0xc);
        do {
          if (*piVar3 == puVar1[0x10]) break;
          iVar5 = iVar5 + 1;
          piVar3 = piVar3 + 4;
        } while (iVar5 < *(int *)(iVar2 + 0x14));
      }
    }
    *(byte *)((int)puVar1 + 0x2a) = *(byte *)((int)puVar1 + 0x2a) | 0x10;
    puVar1[0xc] = 0;
    uVar4 = FUN_0055e3f0(iVar2,param_4);
    FUN_00528d20(iVar2,puVar1,uVar4);
    FUN_00528d20(iVar2,puVar1,0);
    uVar4 = FUN_00552450(iVar2,*puVar1);
    FUN_00528d20(iVar2,puVar1,uVar4);
    param_1[0x83] = (param_4[1] - *param_2) + *param_4;
    if ((undefined4 *)puVar1[0xd] != (undefined4 *)0x0) {
      FUN_0054ab50(param_1,0x1d,*puVar1,*(undefined4 *)puVar1[0xd],
                   *(undefined4 *)(*(int *)(*param_1 + 0x10) + iVar5 * 0x10));
    }
  }
  return;
}


/* FUN_00576ed0 @ 00576ed0  kind=gamemisc  attributed-by=caller-vote  size=257 */

int FUN_00576ed0(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  undefined4 local_8;
  
  iVar2 = *param_1;
  if ((*(byte *)(param_2 + 0x2a) & 0x10) != 0) {
    piVar3 = *(int **)(param_2 + 0x38);
    while( true ) {
      if (piVar3 == (int *)0x0) {
        pcVar4 = (char *)**(undefined4 **)(param_2 + 0x34);
        uVar9 = 0;
        if (pcVar4 != (char *)0x0) {
          cVar1 = *pcVar4;
          pcVar8 = pcVar4;
          while (cVar1 != '\0') {
            pcVar8 = pcVar8 + 1;
            cVar1 = *pcVar8;
          }
          uVar9 = (int)pcVar8 - (int)pcVar4 & 0x3fffffff;
        }
        if (*(int *)(iVar2 + 0x130) == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = FUN_0057a870(pcVar4,uVar9);
          uVar6 = uVar6 % *(uint *)(iVar2 + 0x124);
        }
        iVar7 = FUN_00537190(iVar2 + 0x124,pcVar4,uVar9,uVar6);
        if ((iVar7 != 0) && (piVar3 = *(int **)(iVar7 + 8), piVar3 != (int *)0x0)) {
          local_8 = 0;
          iVar7 = FUN_0057d530(iVar2,param_2,piVar3,*(undefined4 *)(*piVar3 + 8),&local_8);
          uVar5 = local_8;
          if (iVar7 != 0) {
            FUN_00553950(param_1,&DAT_00716900,local_8);
          }
          FUN_005521a0(iVar2,uVar5);
          return iVar7;
        }
        FUN_00553950(param_1,"no such module: %s",pcVar4);
        return 1;
      }
      if (*piVar3 == iVar2) break;
      piVar3 = (int *)piVar3[6];
    }
  }
  return 0;
}


/* FUN_00577190 @ 00577190  kind=gamemisc  attributed-by=caller-vote  size=92 */

void FUN_00577190(int param_1,int param_2)

{
  int iVar1;
  
  if ((param_1 == 0) || (*(int *)(param_1 + 0x1f0) == 0)) {
    FUN_0057d830(0,param_2);
  }
  if (*(int *)(param_2 + 0x34) != 0) {
    iVar1 = 0;
    if (0 < *(int *)(param_2 + 0x30)) {
      do {
        if (iVar1 != 1) {
          FUN_005521a0(param_1,*(undefined4 *)(*(int *)(param_2 + 0x34) + iVar1 * 4));
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_2 + 0x30));
    }
    FUN_005521a0(param_1,*(undefined4 *)(param_2 + 0x34));
  }
  return;
}


/* FUN_00577380 @ 00577380  kind=gamemisc  attributed-by=caller-vote  size=131 */

void FUN_00577380(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((int *)param_1[0x6c] != (int *)0x0) {
    param_1 = (int *)param_1[0x6c];
  }
  iVar4 = 0;
  iVar3 = param_1[0x76];
  if (0 < iVar3) {
    piVar1 = (int *)param_1[0x88];
    do {
      if (param_2 == *piVar1) {
        return;
      }
      iVar4 = iVar4 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar4 < iVar3);
  }
  iVar4 = param_1[0x88];
  iVar2 = FUN_00579f80();
  if ((iVar2 == 0) && (iVar3 = FUN_00563800(iVar4,iVar3 * 4 + 4), iVar3 != 0)) {
    param_1[0x88] = iVar3;
    *(int *)(iVar3 + param_1[0x76] * 4) = param_2;
    param_1[0x76] = param_1[0x76] + 1;
    return;
  }
  *(undefined1 *)(*param_1 + 0x38) = 1;
  return;
}


/* FUN_005776a0 @ 005776a0  kind=gamemisc  attributed-by=caller-vote  size=47 */

void FUN_005776a0(undefined4 *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  piVar2 = param_1 + 3;
  *piVar2 = *piVar2 + -1;
  uVar1 = *param_1;
  if (*piVar2 == 0) {
    piVar2 = (int *)param_1[2];
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x10))(piVar2);
    }
    FUN_005521a0(uVar1,param_1);
  }
  return;
}


/* FUN_005776d0 @ 005776d0  kind=gamemisc  attributed-by=caller-vote  size=97 */

void FUN_005776d0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  puVar5 = *(undefined4 **)(param_1 + 0x13c);
  *(undefined4 *)(param_1 + 0x13c) = 0;
  if (puVar5 != (undefined4 *)0x0) {
    for (iVar1 = *(int *)(param_1 + 4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x3c)) {
      *(uint *)(iVar1 + 0x60) = *(uint *)(iVar1 + 0x60) | 0x20;
    }
    do {
      piVar4 = puVar5 + 3;
      *piVar4 = *piVar4 + -1;
      puVar2 = (undefined4 *)puVar5[6];
      uVar3 = *puVar5;
      if (*piVar4 == 0) {
        piVar4 = (int *)puVar5[2];
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 0x10))(piVar4);
        }
        FUN_005521a0(uVar3,puVar5);
      }
      puVar5 = puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  return;
}


/* FUN_00577b00 @ 00577b00  kind=gamemisc  attributed-by=caller-vote  size=372 */

int FUN_00577b00(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                int param_6,undefined4 param_7,undefined4 *param_8,undefined4 *param_9)

{
  int iVar1;
  int iVar2;
  int local_8;
  
  iVar1 = param_2;
  local_8 = 0;
  if (*(char *)(param_1 + 0x2e) != '\0') {
    return 8;
  }
  if ((*(char *)(param_1 + 0x2b) == '\0') &&
     (iVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x38))(*(int **)(param_1 + 4),1,1,10),
     iVar2 != 0)) {
    return iVar2;
  }
  *(undefined1 *)(param_1 + 0x2d) = 1;
  if (param_2 != 0) {
    iVar2 = FUN_0057d880(param_1,param_3,param_4,0,1);
    if (iVar2 == 0) {
      *(undefined1 *)(param_1 + 0x2c) = 1;
    }
    else {
      if (iVar2 != 5) goto LAB_00577c17;
      param_2 = 0;
    }
  }
  iVar2 = FUN_0057e260(param_1,&local_8);
  if (iVar2 == 0) {
    if ((*(int *)(param_1 + 0x44) == 0) ||
       ((*(ushort *)(param_1 + 0x42) & 1) * 0x10000 + (*(ushort *)(param_1 + 0x42) & 0xfe00) ==
        param_6)) {
      iVar2 = FUN_0057d8d0(param_1,param_2,param_3,param_4,param_5,param_7);
    }
    else {
      iVar2 = FUN_00551190(0xb87d);
    }
    if ((iVar2 == 0) || (iVar2 == 5)) {
      if (param_8 != (undefined4 *)0x0) {
        *param_8 = *(undefined4 *)(param_1 + 0x44);
      }
      if (param_9 != (undefined4 *)0x0) {
        *param_9 = *(undefined4 *)(**(int **)(param_1 + 0x20) + 0x60);
      }
    }
  }
  if (local_8 != 0) {
    memset((void *)(param_1 + 0x34),0,0x30);
  }
LAB_00577c17:
  if (*(char *)(param_1 + 0x2c) != '\0') {
    if (*(char *)(param_1 + 0x2b) == '\0') {
      (**(code **)(**(int **)(param_1 + 4) + 0x38))(*(int **)(param_1 + 4),0,1,9);
    }
    *(undefined1 *)(param_1 + 0x2c) = 0;
    *(undefined1 *)(param_1 + 0x2f) = 0;
  }
  if (*(char *)(param_1 + 0x2b) == '\0') {
    (**(code **)(**(int **)(param_1 + 4) + 0x38))(*(int **)(param_1 + 4),1,1,9);
  }
  *(undefined1 *)(param_1 + 0x2d) = 0;
  if ((iVar2 == 0) && (iVar1 != param_2)) {
    iVar2 = 5;
  }
  return iVar2;
}


/* FUN_00577c80 @ 00577c80  kind=gamemisc  attributed-by=caller-vote  size=262 */

int FUN_00577c80(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int local_8;
  
  piVar2 = param_1;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar3 = 0;
  local_8 = (**(code **)(*(int *)param_1[1] + 0x1c))((int *)param_1[1],4);
  if (local_8 == 0) {
    if (*(char *)((int)piVar2 + 0x2b) == '\0') {
      *(undefined1 *)((int)piVar2 + 0x2b) = 1;
    }
    local_8 = FUN_00577b00(piVar2,0,0,0,param_2,param_3,param_4,0,0);
    if (local_8 == 0) {
      param_1 = (int *)0xffffffff;
      (**(code **)(*(int *)piVar2[1] + 0x28))((int *)piVar2[1],10,&param_1);
      if (param_1 == (int *)0x1) {
        if (-1 < piVar2[5]) {
          FUN_0057ec20(piVar2,0,0);
        }
      }
      else {
        iVar3 = 1;
      }
    }
  }
  FUN_0057e060(piVar2,iVar3);
  piVar1 = (int *)piVar2[2];
  if (*piVar1 != 0) {
    (**(code **)(*piVar1 + 4))(piVar1);
    *piVar1 = 0;
  }
  if (iVar3 != 0) {
    if (DAT_0076b3bc != (code *)0x0) {
      (*DAT_0076b3bc)();
    }
    (**(code **)(*piVar2 + 0x1c))(*piVar2,piVar2[0x19],0);
    if (DAT_0076b3c0 != (code *)0x0) {
      (*DAT_0076b3c0)();
    }
  }
  FUN_00524410(piVar2[8]);
  FUN_00524410(piVar2);
  return local_8;
}


/* FUN_00577dd0 @ 00577dd0  kind=gamemisc  attributed-by=caller-vote  size=95 */

void FUN_00577dd0(int param_1)

{
  if (*(char *)(param_1 + 0x2c) != '\0') {
    if (*(char *)(param_1 + 0x2b) == '\0') {
      (**(code **)(**(int **)(param_1 + 4) + 0x38))(*(int **)(param_1 + 4),0,1,9);
    }
    *(undefined1 *)(param_1 + 0x2c) = 0;
    *(undefined1 *)(param_1 + 0x2f) = 0;
  }
  if (-1 < *(short *)(param_1 + 0x28)) {
    if (*(char *)(param_1 + 0x2b) == '\0') {
      (**(code **)(**(int **)(param_1 + 4) + 0x38))
                (*(int **)(param_1 + 4),*(short *)(param_1 + 0x28) + 3,1,5);
    }
    *(undefined2 *)(param_1 + 0x28) = 0xffff;
  }
  return;
}


/* FUN_00577e30 @ 00577e30  kind=gamemisc  attributed-by=caller-vote  size=1208 */

/* WARNING: Removing unreachable block (ram,0x00578130) */
/* WARNING: Removing unreachable block (ram,0x0057821b) */

void FUN_00577e30(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,uint param_6)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  int local_64;
  int *local_60;
  undefined8 local_5c;
  uint local_54;
  int local_50;
  int local_4c;
  int local_48;
  uint local_44;
  int local_40;
  int local_3c;
  uint local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28 [2];
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_4c = param_1;
  local_48 = param_3;
  local_34 = 0;
  local_40 = 0;
  iVar2 = FUN_0057efa0(param_1);
  lVar10 = CONCAT44(local_2c,local_44);
  if (iVar2 != 0) goto LAB_005782db;
  local_3c = *(int *)(param_1 + 0x44);
  if (local_3c == 0) {
    local_20 = (char)((uint)param_2 >> 0x18);
    local_1f = (char)((uint)param_2 >> 0x10);
    local_1e = (char)((uint)param_2 >> 8);
    local_1d = (char)param_2;
    iVar2 = *(int *)(param_1 + 0x68);
    local_1c = (char)((uint)iVar2 >> 0x18);
    local_1b = (char)((uint)iVar2 >> 0x10);
    local_28[0] = -0x7df980c9;
    local_28[1] = 0x18e22d00;
    local_1a = (char)((uint)iVar2 >> 8);
    local_19 = (char)iVar2;
    if (iVar2 == 0) {
      FUN_005245e0(8,param_1 + 0x54);
    }
    local_18 = *(undefined4 *)(param_1 + 0x54);
    iVar2 = 0;
    local_14 = *(undefined4 *)(param_1 + 0x58);
    piVar5 = local_28;
    local_38 = 0;
    do {
      local_38 = local_38 + *piVar5 + iVar2;
      iVar2 = iVar2 + piVar5[1] + local_38;
      piVar5 = piVar5 + 2;
    } while (piVar5 < &local_10);
    local_10 = (undefined1)(local_38 >> 0x18);
    local_f = (undefined1)(local_38 >> 0x10);
    local_e = (undefined1)(local_38 >> 8);
    local_c = (undefined1)((uint)iVar2 >> 0x18);
    local_b = (undefined1)((uint)iVar2 >> 0x10);
    local_a = (undefined1)((uint)iVar2 >> 8);
    *(int *)(param_1 + 0x24) = param_2;
    *(undefined1 *)(param_1 + 0x41) = 0;
    *(int *)(param_1 + 0x50) = iVar2;
    *(uint *)(param_1 + 0x4c) = local_38;
    local_9 = (undefined1)iVar2;
    local_d = (undefined1)local_38;
    *(undefined1 *)(param_1 + 0x2f) = 1;
    iVar2 = (**(code **)(**(int **)(param_1 + 8) + 0xc))(*(int **)(param_1 + 8),local_28,0x20,0,0);
    lVar10 = CONCAT44(local_2c,local_44);
    if (iVar2 != 0) goto LAB_005782db;
    if (((*(char *)(param_1 + 0x30) != '\0') && (param_6 != 0)) &&
       (iVar2 = (**(code **)(**(int **)(param_1 + 8) + 0x14))(*(int **)(param_1 + 8),param_6 & 0x13)
       , iVar2 != 0)) {
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  piVar5 = *(int **)(param_1 + 8);
  local_50 = param_2;
  uVar3 = param_2 + 0x18;
  local_64 = param_1;
  local_5c = 0;
  local_54 = param_6;
  local_60 = piVar5;
  local_38 = uVar3;
  lVar10 = __allmul(local_3c,0,uVar3,(int)uVar3 >> 0x1f);
  lVar10 = lVar10 + 0x20;
  iVar2 = local_48;
  while( true ) {
    local_30 = iVar2;
    local_2c = (int)((ulonglong)lVar10 >> 0x20);
    uVar8 = (uint)lVar10;
    local_44 = uVar8;
    if (local_30 == 0) break;
    local_3c = local_3c + 1;
    if ((param_5 == 0) || (uVar4 = param_4, *(int *)(local_30 + 0xc) != 0)) {
      uVar4 = 0;
    }
    local_34 = *(int *)(local_30 + 4);
    FUN_0057deb0(param_1,*(undefined4 *)(local_30 + 0x14),uVar4,local_34,&local_20);
    iVar2 = FUN_0057f430(&local_64,&local_20,0x18,uVar8,local_2c);
    lVar10 = CONCAT44(local_2c,local_44);
    if (iVar2 != 0) goto LAB_005782db;
    iVar2 = FUN_0057f430(&local_64,local_34,param_2,uVar8 + 0x18,
                         local_2c + (uint)(0xffffffe7 < uVar8));
    lVar10 = CONCAT44(local_2c,local_44);
    if (iVar2 != 0) goto LAB_005782db;
    lVar10 = CONCAT44(local_2c + ((int)local_38 >> 0x1f) + (uint)CARRY4(uVar8,local_38),
                      uVar8 + local_38);
    iVar2 = *(int *)(local_30 + 0xc);
    local_34 = local_30;
  }
  iVar2 = 0;
  if (param_5 != 0) {
    if ((param_6 & 0x20) == 0) {
LAB_005781e2:
      iVar6 = 0;
    }
    else {
      if (*(char *)(param_1 + 0x31) == '\0') {
        iVar2 = (**(code **)(*piVar5 + 0x14))(piVar5,param_6 & 0x13);
        lVar10 = CONCAT44(local_2c,local_44);
        goto LAB_005781e2;
      }
      pcVar1 = *(code **)(**(int **)(param_1 + 8) + 0x2c);
      if (pcVar1 == (code *)0x0) {
        local_30 = 0x1000;
      }
      else {
        local_30 = (*pcVar1)(*(int **)(param_1 + 8));
        if (local_30 < 0x20) {
          local_30 = 0x200;
          lVar10 = CONCAT44(local_2c,local_44);
        }
        else {
          lVar10 = CONCAT44(local_2c,local_44);
          if (0x10000 < local_30) {
            local_30 = 0x10000;
            lVar10 = CONCAT44(local_2c,local_44);
          }
        }
      }
      local_2c = (int)((ulonglong)lVar10 >> 0x20);
      local_44 = (uint)lVar10;
      iVar6 = local_30 >> 0x1f;
      iVar7 = (int)(lVar10 + local_30);
      uVar11 = __alldiv(iVar7 + -1,
                        (int)((ulonglong)(lVar10 + local_30) >> 0x20) - (uint)(iVar7 == 0),local_30,
                        iVar6);
      local_5c = __allmul(uVar11,local_30,iVar6);
      param_1 = local_4c;
      lVar10 = CONCAT44(local_2c,local_44);
      uVar8 = local_44;
      if (local_5c <= lVar10) goto LAB_005781e2;
      do {
        local_30 = *(int *)(local_34 + 4);
        FUN_0057deb0(param_1,*(undefined4 *)(local_34 + 0x14),param_4,local_30,&local_20);
        iVar2 = FUN_0057f430(&local_64,&local_20,0x18,uVar8,local_2c);
        lVar10 = CONCAT44(local_2c,local_44);
        if (iVar2 != 0) goto LAB_005782db;
        iVar2 = FUN_0057f430(&local_64,local_30,param_2,uVar8 + 0x18,
                             local_2c + (uint)(0xffffffe7 < uVar8));
        lVar10 = CONCAT44(local_2c,local_44);
        if (iVar2 != 0) goto LAB_005782db;
        uVar9 = uVar8 + local_38;
        local_2c = local_2c + ((int)local_38 >> 0x1f) + (uint)CARRY4(uVar8,local_38);
        iVar6 = local_40 + 1;
        uVar8 = uVar9;
        local_40 = iVar6;
      } while ((local_2c < local_5c._4_4_) ||
              ((iVar2 = 0, lVar10 = CONCAT44(local_2c,local_44), local_2c <= local_5c._4_4_ &&
               (lVar10 = CONCAT44(local_2c,local_44), uVar9 < (uint)local_5c))));
    }
    local_2c = (int)((ulonglong)lVar10 >> 0x20);
    local_44 = (uint)lVar10;
    if ((*(char *)(param_1 + 0x2f) != '\0') &&
       (uVar4 = *(undefined4 *)(param_1 + 0x10), -1 < *(int *)(param_1 + 0x14))) {
      lVar12 = __allmul(local_3c + iVar6,0,uVar3,(int)uVar3 >> 0x1f);
      lVar10 = CONCAT44(*(undefined4 *)(param_1 + 0x14),uVar4);
      if (CONCAT44(*(undefined4 *)(param_1 + 0x14),uVar4) < lVar12 + 0x20) {
        lVar10 = lVar12 + 0x20;
      }
      FUN_0057ec20(param_1,lVar10);
      lVar10 = CONCAT44(local_2c,local_44);
      *(undefined1 *)(param_1 + 0x2f) = 0;
    }
  }
  iVar6 = *(int *)(param_1 + 0x44);
  for (; local_48 != 0; local_48 = *(int *)(local_48 + 0xc)) {
    local_2c = (int)((ulonglong)lVar10 >> 0x20);
    local_44 = (uint)lVar10;
    if (iVar2 != 0) goto LAB_005782db;
    iVar6 = iVar6 + 1;
    iVar2 = FUN_0057df70(param_1,iVar6,*(undefined4 *)(local_48 + 0x14));
    lVar10 = CONCAT44(local_2c,local_44);
  }
  if (iVar2 == 0) {
    while( true ) {
      local_2c = (int)((ulonglong)lVar10 >> 0x20);
      local_44 = (uint)lVar10;
      if (local_40 < 1) break;
      local_40 = local_40 + -1;
      iVar6 = iVar6 + 1;
      iVar2 = FUN_0057df70(param_1,iVar6,*(undefined4 *)(local_34 + 0x14));
      lVar10 = CONCAT44(local_2c,local_44);
      if (iVar2 != 0) {
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
    *(ushort *)(param_1 + 0x42) = (ushort)((uint)param_2 >> 0x10) | (ushort)param_2 & 0xff00;
    *(int *)(param_1 + 0x44) = iVar6;
    if (param_5 != 0) {
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
      *(undefined4 *)(param_1 + 0x48) = param_4;
      FUN_0057e910(param_1);
      lVar10 = CONCAT44(local_2c,local_44);
      *(int *)(param_1 + 0xc) = iVar6;
    }
  }
LAB_005782db:
  local_2c = (int)((ulonglong)lVar10 >> 0x20);
  local_44 = (uint)lVar10;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00578400 @ 00578400  kind=gamemisc  attributed-by=caller-vote  size=411 */

int FUN_00578400(int param_1,int param_2,undefined4 *param_3,int param_4,undefined4 param_5)

{
  short sVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ushort *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  int local_c;
  uint local_8;
  
  uVar2 = *(uint *)(param_1 + 0x44);
  local_8 = 0;
  if ((uVar2 == 0) || (*(short *)(param_1 + 0x28) == 0)) {
    *param_3 = 0;
    return 0;
  }
  uVar10 = uVar2 + 0x21 >> 0xc;
  uVar9 = 0;
  do {
    if (uVar9 != 0) goto LAB_00578526;
    iVar5 = FUN_0057e140(param_1,uVar10,&local_c);
    if (iVar5 != 0) {
      return iVar5;
    }
    iVar5 = local_c + 0x4000;
    if (uVar10 == 0) {
      local_c = local_c + 0x88;
      iVar11 = 0;
    }
    else {
      iVar11 = (uVar10 - 1) * 0x1000 + 0xfde;
    }
    uVar6 = param_2 * 0x17f & 0x1fff;
    sVar1 = *(short *)(iVar5 + uVar6 * 2);
    iVar4 = 0x2000;
    while (sVar1 != 0) {
      puVar7 = (ushort *)(iVar5 + uVar6 * 2);
      uVar8 = (uint)*puVar7 + iVar11;
      if ((uVar8 <= uVar2) &&
         (uVar9 = local_8, *(int *)(local_c + -4 + (uint)*puVar7 * 4) == param_2)) {
        uVar9 = uVar8;
        local_8 = uVar8;
      }
      if (iVar4 == 0) {
        FUN_00525a30(0xb,"database corruption at line %d of [%.10s]",0xb62c,
                     "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
        return 0xb;
      }
      uVar6 = uVar6 + 1 & 0x1fff;
      iVar4 = iVar4 + -1;
      sVar1 = *(short *)(iVar5 + uVar6 * 2);
    }
    uVar10 = uVar10 - 1;
  } while (-1 < (int)uVar10);
  if (uVar9 == 0) {
    *param_3 = 0;
    return 0;
  }
LAB_00578526:
  iVar11 = (*(ushort *)(param_1 + 0x42) & 1) * 0x10000 + (*(ushort *)(param_1 + 0x42) & 0xfe00);
  *param_3 = 1;
  piVar3 = *(int **)(param_1 + 8);
  iVar5 = *piVar3;
  lVar12 = __allmul(iVar11 + 0x18,0,local_8 - 1,0);
  if (iVar11 < param_4) {
    param_4 = iVar11;
  }
  iVar5 = (**(code **)(iVar5 + 8))(piVar3,param_5,param_4,lVar12 + 0x38);
  return iVar5;
}


/* FUN_005785a0 @ 005785a0  kind=gamemisc  attributed-by=caller-vote  size=212 */

int FUN_005785a0(int param_1,code *param_2,undefined4 param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  iVar6 = 0;
  if (*(char *)(param_1 + 0x2c) != '\0') {
    uVar1 = *(uint *)(param_1 + 0x44);
    puVar2 = (undefined8 *)**(undefined4 **)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x34) = *puVar2;
    *(undefined8 *)(param_1 + 0x3c) = puVar2[1];
    *(undefined8 *)(param_1 + 0x44) = puVar2[2];
    *(undefined8 *)(param_1 + 0x4c) = puVar2[3];
    *(undefined8 *)(param_1 + 0x54) = puVar2[4];
    *(undefined8 *)(param_1 + 0x5c) = puVar2[5];
    uVar3 = *(uint *)(param_1 + 0x44);
    uVar7 = uVar3 + 0x22;
    iVar5 = uVar7 * 4;
    do {
      uVar3 = uVar3 + 1;
      if (uVar1 < uVar3) break;
      if (uVar7 >> 0xc == 0) {
        uVar4 = *(undefined4 *)(iVar5 + **(int **)(param_1 + 0x20));
      }
      else {
        uVar4 = *(undefined4 *)
                 (*(int *)(*(int *)(param_1 + 0x20) + (uVar7 >> 0xc) * 4) + (uVar7 & 0xfff) * 4);
      }
      iVar6 = (*param_2)(param_3,uVar4);
      iVar5 = iVar5 + 4;
      uVar7 = uVar7 + 1;
    } while (iVar6 == 0);
    if (uVar1 != *(uint *)(param_1 + 0x44)) {
      FUN_0057dcf0(param_1);
    }
  }
  return iVar6;
}


/* FUN_00578680 @ 00578680  kind=gamemisc  attributed-by=caller-vote  size=133 */

uint FUN_00578680(undefined4 *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar1 = (*(code *)*param_1)(param_1,param_2);
  if ((uVar1 == 0) && ((*(ushort *)(param_2 + 2) & 0x4000) == 0)) {
    iVar2 = FUN_00578680(param_1,*(undefined4 *)(param_2 + 8));
    if (iVar2 == 0) {
      iVar2 = FUN_00578680(param_1,*(undefined4 *)(param_2 + 0xc));
      if (iVar2 == 0) {
        if ((*(ushort *)(param_2 + 2) & 0x800) == 0) {
          iVar2 = FUN_00578710(param_1,*(undefined4 *)(param_2 + 0x10));
        }
        else {
          iVar2 = FUN_00578760();
        }
        if (iVar2 == 0) goto LAB_005786fb;
      }
    }
    return 2;
  }
LAB_005786fb:
  return uVar1 & 2;
}


/* FUN_00578710 @ 00578710  kind=gamemisc  attributed-by=caller-vote  size=72 */

undefined4 FUN_00578710(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_2 != (int *)0x0) {
    puVar3 = (undefined4 *)param_2[2];
    for (iVar2 = *param_2; 0 < iVar2; iVar2 = iVar2 + -1) {
      iVar1 = FUN_00578680(param_1,*puVar3);
      if (iVar1 != 0) {
        return 2;
      }
      puVar3 = puVar3 + 5;
    }
  }
  return 0;
}


/* FUN_00578760 @ 00578760  kind=gamemisc  attributed-by=caller-vote  size=161 */

uint FUN_00578760(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  
  if ((param_2 == 0) || (*(int *)(param_1 + 4) == 0)) {
    return 0;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  do {
    uVar1 = (**(code **)(param_1 + 4))(param_1,param_2);
    if (uVar1 != 0) break;
    iVar2 = FUN_00578810(param_1,param_2);
    if (iVar2 != 0) {
LAB_005787ea:
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
      return 2;
    }
    psVar4 = *(short **)(param_2 + 0x28);
    if ((psVar4 != (short *)0x0) && (iVar2 = (int)*psVar4, 0 < iVar2)) {
      psVar4 = psVar4 + 0xe;
      do {
        iVar3 = FUN_00578760(param_1,*(undefined4 *)psVar4);
        if (iVar3 != 0) goto LAB_005787ea;
        iVar2 = iVar2 + -1;
        psVar4 = psVar4 + 0x24;
      } while (0 < iVar2);
    }
    param_2 = *(int *)(param_2 + 0x3c);
  } while (param_2 != 0);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  return uVar1 & 2;
}


/* FUN_00578810 @ 00578810  kind=gamemisc  attributed-by=caller-vote  size=138 */

byte FUN_00578810(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_00578710(param_1,*param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_00578680(param_1,param_2[0xb]);
    if (iVar1 == 0) {
      iVar1 = FUN_00578710(param_1,param_2[0xc]);
      if (iVar1 == 0) {
        iVar1 = FUN_00578680(param_1,param_2[0xd]);
        if (iVar1 == 0) {
          iVar1 = FUN_00578710(param_1,param_2[0xe]);
          if (iVar1 == 0) {
            iVar1 = FUN_00578680(param_1,param_2[0x12]);
            if (iVar1 == 0) {
              iVar1 = FUN_00578680(param_1,param_2[0x13]);
              return -(iVar1 != 0) & 2;
            }
          }
        }
      }
    }
  }
  return 2;
}


/* FUN_005788a0 @ 005788a0  kind=gamemisc  attributed-by=caller-vote  size=3054 */

undefined4 *
FUN_005788a0(int *param_1,short *param_2,int param_3,undefined2 *param_4,int param_5,uint param_6,
            uint param_7)

{
  size_t _Size;
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  short *psVar8;
  uint uVar9;
  uint uVar10;
  short *psVar11;
  double *pdVar12;
  int *piVar13;
  int iVar14;
  undefined4 *puVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined8 uVar19;
  undefined8 local_fc;
  code *local_e8;
  longlong local_e4;
  undefined8 local_dc;
  undefined8 local_d4;
  double local_cc;
  int *local_c4;
  undefined4 *local_c0;
  short *local_bc;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  undefined2 *local_a4;
  int local_a0;
  double *local_9c;
  int local_98;
  int local_94;
  double *local_90;
  uint local_8c;
  undefined2 uStack_88;
  ushort uStack_86;
  double local_84;
  double local_7c;
  double local_74;
  uint local_6c;
  uint uStack_68;
  undefined8 local_64;
  double local_5c;
  double local_54;
  double local_4c;
  uint local_44;
  short *local_40;
  int *local_3c;
  double *local_38;
  double *local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  double *local_20;
  int local_1c;
  int local_18;
  int *local_14;
  int local_10;
  short *local_c;
  undefined4 *local_8;
  
  piVar5 = (int *)param_1[2];
  local_14 = piVar5;
  memset(&local_c4,0,0x60);
  local_c4 = param_1;
  if (0x40 < *param_2) {
    FUN_00553950(param_1,"at most %d tables in a join",0x40);
    return (undefined4 *)0x0;
  }
  local_24 = param_6 & 0x40;
  if (local_24 == 0) {
    iVar3 = (int)*param_2;
  }
  else {
    iVar3 = 1;
  }
  local_1c = *param_1;
  _Size = iVar3 * 0x58 + 0x2a4;
  local_10 = iVar3;
  local_8 = (undefined4 *)FUN_00552230(local_1c,_Size);
  if (local_8 != (undefined4 *)0x0) {
    memset(local_8,0,_Size);
  }
  iVar14 = local_10;
  if (*(char *)(local_1c + 0x38) != '\0') {
    FUN_005521a0(local_1c,local_8);
    return (undefined4 *)0x0;
  }
  *local_8 = param_1;
  local_8[7] = local_10;
  local_8[1] = param_2;
  uVar4 = FUN_005741e0(piVar5);
  local_8[6] = uVar4;
  local_c0 = local_8 + iVar3 * 0x16 + 0xe;
  local_8[8] = local_c0;
  *(short *)((int)local_8 + 10) = (short)param_6;
  iVar3 = param_1[0x6f];
  local_90 = (double *)(local_8 + 0xe);
  local_8[10] = param_1[0x6e];
  local_8[0xb] = iVar3;
  piVar5 = local_c0 + 0x5a;
  if ((*(byte *)(local_1c + 0x34) & 0x20) != 0) {
    param_5 = 0;
  }
  local_3c = piVar5;
  local_34 = local_90;
  memset(piVar5,0,0x104);
  local_c0[8] = local_c0 + 10;
  local_c0[1] = piVar5;
  *local_c0 = param_1;
  local_c0[4] = 0;
  local_c0[6] = 0;
  local_c0[7] = 8;
  local_c0[2] = 0;
  local_c0[3] = 0;
  *(short *)((int)local_c0 + 0x16) = (short)param_6;
  if ((param_1[0x57] == 0) && ((*(byte *)(*param_1 + 0x34) & 8) == 0)) {
    local_e8 = FUN_00534970;
    local_e4 = ZEXT48(param_1) << 0x20;
    FUN_00578680(&local_e8,param_3);
  }
  FUN_0057f770(local_c0,param_3,0x45);
  if ((param_3 != 0) && ((iVar14 == 0 || (iVar3 = FUN_005564f0(param_3), iVar3 != 0)))) {
    FUN_00555f40(param_1,param_3,local_8[6],8);
  }
  puVar15 = local_c0;
  uVar10 = 0;
  if (0 < *param_2) {
    piVar5 = (int *)(param_2 + 0xc);
    do {
      local_3c[*local_3c + 1] = piVar5[7];
      *local_3c = *local_3c + 1;
      if ((*piVar5 != 0) && ((*(byte *)(*piVar5 + 0x2a) & 0x10) != 0)) {
        uVar7 = 1 << (uVar10 & 0x1f);
        uVar9 = 0;
        if (0x1f < uVar10) {
          uVar9 = uVar7;
        }
        uVar7 = uVar7 ^ uVar9;
        if (0x3f < uVar10) {
          uVar9 = uVar7;
        }
        local_c0[2] = local_c0[2] | uVar7;
        local_c0[3] = local_c0[3] | uVar9;
      }
      uVar10 = uVar10 + 1;
      piVar5 = piVar5 + 0x12;
    } while ((int)uVar10 < (int)*param_2);
  }
  iVar3 = local_c0[6];
  while (iVar3 = iVar3 + -1, -1 < iVar3) {
    FUN_00535400(param_2,puVar15,iVar3);
  }
  if (*(char *)(local_1c + 0x38) != '\0') goto LAB_00578fa9;
  if ((param_5 != 0) && (iVar3 = FUN_0053c3f0(param_1,param_2,local_c0,param_5), iVar3 != 0)) {
    param_5 = 0;
    *(undefined1 *)((int)local_8 + 0xe) = 1;
  }
  local_ac = 0xffffffff;
  local_a8 = 0xffffffff;
  local_a4 = param_4;
  local_94 = local_10;
  local_28 = 0xffffffff;
  local_c = (short *)0x0;
  local_98 = 0;
  local_20 = local_34;
  local_a0 = param_5;
  if (0 < local_10) {
    local_18 = local_10 + -1;
    do {
      local_30 = (uint)((int)local_c < local_18);
      dVar16 = 0.0;
      local_40 = (short *)0xffffffff;
      local_5c = 0.0;
      local_fc = 0.0;
      local_4c = 0.0;
      local_54 = 0.0;
      local_e4 = 0;
      local_dc = 0;
      local_cc = 1e+99;
      local_2c = 0;
      psVar8 = local_c;
      iVar3 = local_10;
      dVar18 = dVar16;
      dVar17 = dVar16;
      do {
        if (-1 < (int)local_40) break;
        local_bc = param_2 + (int)psVar8 * 0x24 + 4;
        if ((int)psVar8 < iVar3) {
          local_38 = (double *)(local_8 + (int)psVar8 * 0x16 + 0x20);
          psVar11 = psVar8;
          do {
            pdVar12 = local_38;
            local_44 = (uint)((*(byte *)(local_bc + 0x10) & 10) != 0);
            if ((psVar11 != psVar8) && (local_44 != 0)) break;
            uVar10 = 0;
            if (0 < *local_3c) {
              piVar5 = local_3c;
              do {
                piVar5 = piVar5 + 1;
                if (*piVar5 == *(int *)(local_bc + 0x16)) {
                  uVar7 = 1 << (uVar10 & 0x1f);
                  uVar9 = 0;
                  if (0x1f < uVar10) {
                    uVar9 = uVar7;
                  }
                  uVar7 = uVar7 ^ uVar9;
                  if (0x3f < uVar10) {
                    uVar9 = uVar7;
                  }
                  goto LAB_00578c93;
                }
                uVar10 = uVar10 + 1;
              } while ((int)uVar10 < *local_3c);
            }
            local_d4 = 0;
            local_d4._4_4_ = 0;
            local_d4._0_4_ = 0;
            uVar7 = (uint)local_d4;
            uVar9 = local_d4._4_4_;
LAB_00578c93:
            if ((uVar7 & local_ac) == 0 && (uVar9 & local_a8) == 0) {
              if (psVar11 == local_c) {
                local_c = (short *)((int)local_c + 1);
              }
            }
            else {
              local_b4 = uVar7;
              local_b0 = uVar9;
              if (local_30 == 0) {
                local_b4 = local_ac;
                local_b0 = local_a8;
              }
              if (*(int *)(local_bc + 0x22) == 0) {
                local_2c = local_2c + 1;
              }
              if ((*(byte *)(*(int *)(local_bc + 8) + 0x2a) & 0x10) == 0) {
                FUN_0052d020(&local_c4);
                pdVar12 = local_38;
              }
              else {
                local_9c = local_38 + 1;
                FUN_0052dd50(&local_c4);
              }
              if (local_30 == 0) {
                if ((int)local_c < local_18) {
                  local_74 = local_74 / *pdVar12;
                }
              }
              else {
                *pdVar12 = local_74;
              }
              if ((((local_6c & local_ac) == 0 && (uStack_68 & local_a8) == 0) &&
                  (((local_2c == 0 || (*(int *)(local_bc + 0x22) == 0)) ||
                   ((local_8c & 0x100f3000) != 0)))) &&
                 ((((int)local_40 < 0 || (local_74 < local_cc)) ||
                  ((local_74 <= local_cc && ((local_fc._6_2_ < uStack_86 || (local_84 < local_4c))))
                  )))) {
                local_fc = (double)CONCAT26(uStack_86,CONCAT24(uStack_88,local_8c));
                local_dc = CONCAT44(uStack_68,local_6c);
                local_4c = local_84;
                local_54 = local_7c;
                local_cc = local_74;
                local_5c = local_fc;
                local_40 = psVar11;
              }
              psVar8 = local_c;
              iVar3 = local_10;
              dVar16 = local_4c;
              dVar18 = local_54;
              dVar17 = local_5c;
              if (local_44 != 0) break;
            }
            local_38 = local_38 + 0xb;
            psVar11 = (short *)((int)psVar11 + 1);
            local_bc = local_bc + 0x24;
            psVar8 = local_c;
            iVar3 = local_10;
          } while ((int)psVar11 < local_10);
        }
        local_30 = local_30 - 1;
      } while (-1 < (int)local_30);
      if (((ulonglong)local_fc & 0x40000000) != 0) {
        *(undefined1 *)((int)local_8 + 0xe) = 2;
      }
      local_28 = local_28 & (uint)local_fc;
      *local_20 = dVar17;
      local_20[1] = dVar16;
      local_20[2] = dVar18;
      *(uint *)((int)local_20 + 0x1c) = *(uint *)(param_2 + (int)local_40 * 0x24 + 0x1a);
      if (((ulonglong)local_fc & 0x200f0000) == 0) {
        *(uint *)(local_20 + 4) = 0xffffffff;
      }
      else if (((short)local_24 == 0) || (((ulonglong)local_fc & 0x20000000) != 0)) {
        *(int *)(local_20 + 4) = param_1[0x12];
        param_1[0x12] = param_1[0x12] + 1;
      }
      else {
        *(uint *)(local_20 + 4) = param_7;
      }
      uVar10 = 0;
      if (0 < *local_3c) {
        piVar5 = local_3c;
        do {
          piVar5 = piVar5 + 1;
          if (*piVar5 == *(int *)(param_2 + (int)local_40 * 0x24 + 0x1a)) {
            uVar7 = 1 << (uVar10 & 0x1f);
            uVar9 = 0;
            if (0x1f < uVar10) {
              uVar9 = uVar7;
            }
            uVar7 = uVar7 ^ uVar9;
            if (0x3f < uVar10) {
              uVar9 = uVar7;
            }
            goto LAB_00578f0e;
          }
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < *local_3c);
      }
      local_64 = 0;
      local_64._4_4_ = 0;
      local_64._0_4_ = 0;
      uVar7 = (uint)local_64;
      uVar9 = local_64._4_4_;
LAB_00578f0e:
      local_a8 = local_a8 & ~uVar9;
      local_ac = local_ac & ~uVar7;
      *(char *)((int)local_20 + 0x34) = (char)local_40;
      if (1.0 <= dVar16) {
        *(double *)(param_1 + 0x6e) = dVar16 * *(double *)(param_1 + 0x6e);
      }
      if ((*(undefined4 **)(param_2 + (int)local_40 * 0x24 + 0x26) != (undefined4 *)0x0) &&
         (((ulonglong)local_fc & 0xf0000) == 0)) {
        FUN_00553950(param_1,"cannot use index: %s",
                     **(undefined4 **)(param_2 + (int)local_40 * 0x24 + 0x26));
        goto LAB_00578fa9;
      }
      local_98 = local_98 + 1;
      local_20 = local_20 + 0xb;
    } while (local_98 < local_10);
  }
  if ((param_1[0x11] != 0) || (*(char *)(local_1c + 0x38) != '\0')) goto LAB_00578fa9;
  if (local_10 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined2 *)((int)local_20 - 0x52);
  }
  *(undefined2 *)(local_8 + 2) = uVar2;
  if (((local_28 & 0x2000000) != 0) && (param_4 != (undefined2 *)0x0)) {
    *(undefined2 *)(local_8 + 2) = *param_4;
  }
  if (((param_6 & 4) != 0) && ((local_28 & 0x2000000) != 0)) {
    *(undefined1 *)(local_8 + 3) = 1;
    local_8[0xe] = local_8[0xe] & 0xffbfffff;
  }
  piVar5 = (int *)param_1[0x6c];
  piVar13 = param_1;
  if ((piVar5 != (int *)0x0) && (piVar13 = piVar5, piVar5 != param_1)) {
    param_1[0x57] = -1;
  }
  if (piVar13[0x57] == 0) {
    iVar3 = piVar13[2];
    if (iVar3 == 0) {
      iVar3 = FUN_0056c7b0(*piVar13);
      piVar13[2] = iVar3;
      if (iVar3 == 0) goto LAB_00579084;
      FUN_0056bdc0(iVar3,0x94);
    }
    iVar3 = FUN_0056be90(iVar3,1,0,0);
    piVar13[0x57] = iVar3 + 1;
  }
LAB_00579084:
  local_28 = 0xffffffff;
  local_20 = (double *)0xffffffff;
  *(undefined8 *)(local_8 + 0xc) = 0x3ff0000000000000;
  if (0 < local_10) {
    local_2c = local_10;
    pdVar12 = (double *)(local_8 + 0xe);
    do {
      iVar3 = (uint)*(byte *)((int)pdVar12 + 0x34) * 9 + 1;
      iVar14 = -1000000;
      puVar15 = *(undefined4 **)(param_2 + iVar3 * 4 + 8);
      psVar8 = param_2 + iVar3 * 4;
      *(double *)(local_8 + 0xc) = pdVar12[1] * *(double *)(local_8 + 0xc);
      if (puVar15[0x10] != 0) {
        iVar14 = 0;
        if (0 < *(int *)(local_1c + 0x14)) {
          piVar5 = (int *)(*(int *)(local_1c + 0x10) + 0xc);
          do {
            if (*piVar5 == puVar15[0x10]) break;
            iVar14 = iVar14 + 1;
            piVar5 = piVar5 + 4;
          } while (iVar14 < *(int *)(local_1c + 0x14));
        }
      }
      local_c = psVar8;
      if (((*(byte *)((int)puVar15 + 0x2a) & 2) == 0) && (puVar15[3] == 0)) {
        if (((ulonglong)*local_34 & 0x8000000) == 0) {
          if ((*(byte *)((int)puVar15 + 0x2a) & 0x10) == 0) {
            if ((((ulonglong)*local_34 & 0x400000) == 0) && ((param_6 & 0x10) == 0)) {
              FUN_0055e5f0(param_1,*(undefined4 *)(psVar8 + 0x16),iVar14,puVar15,
                           (*(char *)(local_8 + 3) != '\0') + '\'');
              if ((*(char *)(local_8 + 3) == '\0') && (*(short *)((int)puVar15 + 0x26) < 0x40)) {
                uVar10 = *(uint *)(psVar8 + 0x1c);
                uVar7 = *(uint *)(psVar8 + 0x1e);
                iVar3 = 0;
                if (uVar10 != 0 || uVar7 != 0) {
                  do {
                    uVar10 = uVar10 >> 1 | uVar7 << 0x1f;
                    uVar7 = uVar7 >> 1;
                    iVar3 = iVar3 + 1;
                  } while (uVar10 != 0 || uVar7 != 0);
                }
                FUN_0056c320(local_14,local_14[7] + -1,iVar3,0xfffffff2);
              }
            }
            else {
              FUN_005681e0(param_1,iVar14,puVar15[8],0,*puVar15);
            }
          }
        }
        else {
          for (piVar5 = (int *)puVar15[0xe]; (piVar5 != (int *)0x0 && (*piVar5 != local_1c));
              piVar5 = (int *)piVar5[6]) {
          }
          local_24 = *(uint *)(psVar8 + 0x16);
          iVar3 = local_14[7];
          if ((iVar3 < local_14[8]) || (iVar6 = FUN_0053b4b0(local_14), iVar6 == 0)) {
            local_14[7] = local_14[7] + 1;
            iVar6 = local_14[1];
            *(undefined2 *)(iVar6 + iVar3 * 0x14) = 0x87;
            *(undefined1 *)(iVar6 + 3 + iVar3 * 0x14) = 0;
            *(uint *)(iVar6 + 4 + iVar3 * 0x14) = local_24;
            *(undefined4 *)(iVar6 + 8 + iVar3 * 0x14) = 0;
            *(undefined4 *)(iVar6 + 0xc + iVar3 * 0x14) = 0;
            *(undefined4 *)(iVar6 + 0x10 + iVar3 * 0x14) = 0;
          }
          else {
            iVar3 = 1;
          }
          psVar8 = local_c;
          if ((local_14[1] != 0) && (*(char *)(*local_14 + 0x38) == '\0')) {
            if (iVar3 < 0) {
              iVar3 = local_14[7] + -1;
            }
            local_44 = iVar3 * 5;
            iVar6 = local_14[1];
            FUN_00539320(*local_14,(int)*(char *)(iVar6 + 1 + iVar3 * 0x14),
                         *(undefined4 *)(iVar6 + 0x10 + iVar3 * 0x14));
            *(undefined4 *)(iVar6 + 0x10 + local_44 * 4) = 0;
            psVar8 = local_c;
            if (piVar5 == (int *)0x0) {
              *(undefined4 *)(iVar6 + 0x10 + local_44 * 4) = 0;
              *(undefined1 *)(iVar6 + 1 + local_44 * 4) = 0;
            }
            else {
              *(int **)(iVar6 + 0x10 + local_44 * 4) = piVar5;
              *(undefined1 *)(iVar6 + 1 + local_44 * 4) = 0xf6;
              piVar5[3] = piVar5[3] + 1;
            }
          }
        }
      }
      if (((ulonglong)*local_34 & 0x20000000) == 0) {
        if (((ulonglong)*local_34 & 0xf0000) != 0) {
          uVar10 = *(uint *)(local_34 + 2);
          local_18 = FUN_0055b2a0(param_1,uVar10);
          uVar7 = *(uint *)(local_34 + 4);
          local_24 = *(uint *)(uVar10 + 0x28);
          iVar3 = local_14[7];
          if ((iVar3 < local_14[8]) || (iVar6 = FUN_0053b4b0(local_14), iVar6 == 0)) {
            local_14[7] = local_14[7] + 1;
            iVar6 = local_14[1];
            *(undefined2 *)(iVar6 + iVar3 * 0x14) = 0x27;
            *(undefined1 *)(iVar6 + 3 + iVar3 * 0x14) = 0;
            *(uint *)(iVar6 + 4 + iVar3 * 0x14) = uVar7;
            *(uint *)(iVar6 + 8 + iVar3 * 0x14) = local_24;
            *(int *)(iVar6 + 0xc + iVar3 * 0x14) = iVar14;
            *(undefined4 *)(iVar6 + 0x10 + iVar3 * 0x14) = 0;
          }
          else {
            iVar3 = 1;
          }
          iVar6 = local_14[1];
          iVar1 = *local_14;
          if ((iVar6 == 0) || (*(char *)(iVar1 + 0x38) != '\0')) {
            FUN_00539320(iVar1,0xfffffff0,local_18);
          }
          else {
            if (iVar3 < 0) {
              iVar3 = local_14[7] + -1;
            }
            FUN_00539320(iVar1,(int)*(char *)(iVar6 + 1 + iVar3 * 0x14),
                         *(undefined4 *)(iVar6 + 0x10 + iVar3 * 0x14));
            *(undefined4 *)(iVar6 + 0x10 + iVar3 * 0x14) = 0;
            if (local_18 == 0) {
              *(undefined4 *)(iVar6 + 0x10 + iVar3 * 0x14) = 0;
              *(undefined1 *)(iVar6 + 1 + iVar3 * 0x14) = 0;
            }
            else {
              *(int *)(iVar6 + 0x10 + iVar3 * 0x14) = local_18;
              *(undefined1 *)(iVar6 + 1 + iVar3 * 0x14) = 0xfa;
            }
          }
        }
      }
      else {
        FUN_00532e80(param_1,local_c0,psVar8,local_28,local_20,local_34);
      }
      FUN_00550aa0(param_1,iVar14);
      piVar5 = (int *)local_c0[1];
      uVar10 = 0;
      iVar3 = *piVar5;
      if (0 < iVar3) {
        do {
          piVar5 = piVar5 + 1;
          if (*piVar5 == *(int *)(local_c + 0x16)) {
            uVar7 = 1 << (uVar10 & 0x1f);
            uVar9 = 0;
            if (0x1f < uVar10) {
              uVar9 = uVar7;
            }
            uVar7 = uVar7 ^ uVar9;
            if (0x3f < uVar10) {
              uVar9 = uVar7;
            }
            goto LAB_005793e1;
          }
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < iVar3);
      }
      local_64 = 0;
      local_64._4_4_ = 0;
      local_64._0_4_ = 0;
      uVar7 = (uint)local_64;
      uVar9 = local_64._4_4_;
LAB_005793e1:
      local_20 = (double *)((uint)local_20 & ~uVar9);
      local_28 = local_28 & ~uVar7;
      pdVar12 = local_34 + 0xb;
      local_2c = local_2c + -1;
      local_34 = pdVar12;
    } while (local_2c != 0);
    local_2c = 0;
  }
  local_8[4] = local_14[7];
  if (*(char *)(local_1c + 0x38) == '\0') {
    iVar3 = 0;
    uVar19 = 0xffffffffffffffff;
    if (0 < local_10) {
      puVar15 = local_8 + 0x19;
      do {
        local_18 = (int)((ulonglong)uVar19 >> 0x20);
        FUN_00534f70(param_1,param_2,puVar15 + -0xb,iVar3,*(undefined1 *)(puVar15 + 2),param_6);
        uVar19 = FUN_00530f60(local_8,iVar3,param_6,(int)uVar19,local_18);
        iVar3 = iVar3 + 1;
        local_8[5] = *puVar15;
        puVar15 = puVar15 + 0x16;
      } while (iVar3 < local_10);
    }
    return local_8;
  }
LAB_00578fa9:
  *(undefined8 *)(param_1 + 0x6e) = *(undefined8 *)(local_8 + 10);
  FUN_0057f6d0(local_1c,local_8);
  return (undefined4 *)0x0;
}


/* FUN_005794a0 @ 005794a0  kind=gamemisc  attributed-by=caller-vote  size=1502 */

void FUN_005794a0(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  undefined1 *puVar15;
  uint *puVar16;
  int *piVar17;
  uint *puVar18;
  undefined4 *puVar19;
  int local_20;
  int local_14;
  int local_10;
  undefined4 *local_8;
  
  piVar2 = (int *)*param_1;
  iVar3 = param_1[1];
  piVar4 = (int *)piVar2[2];
  iVar5 = *piVar2;
  FUN_00554130(piVar2);
  local_14 = param_1[7] + -1;
  if (-1 < local_14) {
    local_8 = (undefined4 *)(local_14 * 0x48 + 0x34 + iVar3);
    piVar17 = param_1 + local_14 * 0x16 + 0x14;
    do {
      if (piVar4[10] != 0) {
        *(int *)(piVar4[10] - (piVar17[5] * 4 + 4)) = piVar4[7];
      }
      cVar1 = *(char *)((int)piVar17 + 0x1d);
      if (cVar1 != -0x6b) {
        iVar13 = piVar17[9];
        iVar11 = piVar4[7];
        iVar10 = piVar17[8];
        if ((iVar11 < piVar4[8]) || (iVar8 = FUN_0053b4b0(piVar4), iVar8 == 0)) {
          iVar8 = piVar4[1];
          piVar4[7] = piVar4[7] + 1;
          *(char *)(iVar8 + iVar11 * 0x14) = cVar1;
          *(int *)(iVar8 + 4 + iVar11 * 0x14) = iVar10;
          *(undefined1 *)(iVar8 + 3 + iVar11 * 0x14) = 0;
          *(int *)(iVar8 + 8 + iVar11 * 0x14) = iVar13;
          *(undefined4 *)(iVar8 + 0xc + iVar11 * 0x14) = 0;
          *(undefined4 *)(iVar8 + 0x10 + iVar11 * 0x14) = 0;
          *(undefined1 *)(iVar8 + 1 + iVar11 * 0x14) = 0;
        }
        if (piVar4[1] != 0) {
          *(undefined1 *)(piVar4[1] + -0x11 + piVar4[7] * 0x14) =
               *(undefined1 *)((int)piVar17 + 0x1e);
        }
      }
      if (((piVar17[-6] & 0xf1000U) != 0) && (0 < piVar17[10])) {
        if (piVar4[10] != 0) {
          *(int *)(piVar4[10] - (piVar17[4] * 4 + 4)) = piVar4[7];
        }
        iVar13 = piVar17[10];
        puVar19 = (undefined4 *)(piVar17[0xb] + (iVar13 + -1) * 8);
        for (; 0 < iVar13; iVar13 = iVar13 + -1) {
          uVar9 = puVar19[1] + 1;
          if ((-1 < (int)uVar9) && (uVar9 < (uint)piVar4[7])) {
            *(int *)(piVar4[1] + 8 + uVar9 * 0x14) = piVar4[7];
          }
          uVar6 = puVar19[1];
          uVar7 = *puVar19;
          iVar11 = piVar4[7];
          if ((iVar11 < piVar4[8]) || (iVar10 = FUN_0053b4b0(piVar4), iVar10 == 0)) {
            piVar4[7] = piVar4[7] + 1;
            iVar10 = piVar4[1];
            *(undefined4 *)(iVar10 + 4 + iVar11 * 0x14) = uVar7;
            *(undefined2 *)(iVar10 + iVar11 * 0x14) = 0x5f;
            *(undefined1 *)(iVar10 + 3 + iVar11 * 0x14) = 0;
            *(undefined4 *)(iVar10 + 8 + iVar11 * 0x14) = uVar6;
            *(undefined4 *)(iVar10 + 0xc + iVar11 * 0x14) = 0;
            *(undefined4 *)(iVar10 + 0x10 + iVar11 * 0x14) = 0;
          }
          uVar9 = puVar19[1] - 1;
          if ((-1 < (int)uVar9) && (uVar9 < (uint)piVar4[7])) {
            *(int *)(piVar4[1] + 8 + uVar9 * 0x14) = piVar4[7];
          }
          puVar19 = puVar19 + -2;
        }
        FUN_005521a0(iVar5,piVar17[0xb]);
      }
      if (piVar4[10] != 0) {
        *(int *)(piVar4[10] - (piVar17[3] * 4 + 4)) = piVar4[7];
      }
      iVar13 = *piVar17;
      if (iVar13 != 0) {
        uVar9 = piVar4[7];
        if (((int)uVar9 < piVar4[8]) || (iVar11 = FUN_0053b4b0(piVar4), iVar11 == 0)) {
          iVar11 = piVar4[1];
          piVar4[7] = piVar4[7] + 1;
          *(undefined2 *)(iVar11 + uVar9 * 0x14) = 0x78;
          *(undefined1 *)(iVar11 + 3 + uVar9 * 0x14) = 0;
          *(int *)(iVar11 + 4 + uVar9 * 0x14) = iVar13;
          *(undefined4 *)(iVar11 + 8 + uVar9 * 0x14) = 0;
          *(undefined4 *)(iVar11 + 0xc + uVar9 * 0x14) = 0;
          *(undefined4 *)(iVar11 + 0x10 + uVar9 * 0x14) = 0;
        }
        else {
          uVar9 = 1;
        }
        if ((piVar17[-6] & 0x400000U) == 0) {
          uVar6 = *local_8;
          iVar13 = piVar4[7];
          if ((iVar13 < piVar4[8]) || (iVar11 = FUN_0053b4b0(piVar4), iVar11 == 0)) {
            piVar4[7] = piVar4[7] + 1;
            iVar11 = piVar4[1];
            *(undefined2 *)(iVar11 + iVar13 * 0x14) = 0x42;
            *(undefined1 *)(iVar11 + 3 + iVar13 * 0x14) = 0;
            *(undefined4 *)(iVar11 + 4 + iVar13 * 0x14) = uVar6;
            *(undefined4 *)(iVar11 + 8 + iVar13 * 0x14) = 0;
            *(undefined4 *)(iVar11 + 0xc + iVar13 * 0x14) = 0;
            *(undefined4 *)(iVar11 + 0x10 + iVar13 * 0x14) = 0;
          }
        }
        iVar13 = piVar17[2];
        if ((-1 < iVar13) &&
           ((iVar11 = piVar4[7], iVar11 < piVar4[8] || (iVar10 = FUN_0053b4b0(piVar4), iVar10 == 0))
           )) {
          piVar4[7] = piVar4[7] + 1;
          iVar10 = piVar4[1];
          *(undefined2 *)(iVar10 + iVar11 * 0x14) = 0x42;
          *(undefined1 *)(iVar10 + 3 + iVar11 * 0x14) = 0;
          *(int *)(iVar10 + 4 + iVar11 * 0x14) = iVar13;
          *(undefined4 *)(iVar10 + 8 + iVar11 * 0x14) = 0;
          *(undefined4 *)(iVar10 + 0xc + iVar11 * 0x14) = 0;
          *(undefined4 *)(iVar10 + 0x10 + iVar11 * 0x14) = 0;
        }
        iVar13 = piVar17[6];
        if (*(char *)((int)piVar17 + 0x1d) == '\x03') {
          iVar10 = piVar17[8];
          local_20 = piVar4[7];
          if ((local_20 < piVar4[8]) || (iVar11 = FUN_0053b4b0(piVar4), iVar11 == 0)) {
            piVar4[7] = piVar4[7] + 1;
            iVar11 = piVar4[1];
            *(int *)(iVar11 + 4 + local_20 * 0x14) = iVar10;
            *(undefined2 *)(iVar11 + local_20 * 0x14) = 2;
LAB_00579819:
            *(undefined4 *)(iVar11 + 0x10 + local_20 * 0x14) = 0;
            *(undefined4 *)(iVar11 + 0xc + local_20 * 0x14) = 0;
            *(int *)(iVar11 + 8 + local_20 * 0x14) = iVar13;
            *(undefined1 *)(iVar11 + 3 + local_20 * 0x14) = 0;
          }
        }
        else {
          local_20 = piVar4[7];
          if ((local_20 < piVar4[8]) || (iVar11 = FUN_0053b4b0(piVar4), iVar11 == 0)) {
            piVar4[7] = piVar4[7] + 1;
            iVar11 = piVar4[1];
            *(undefined2 *)(iVar11 + local_20 * 0x14) = 1;
            *(undefined4 *)(iVar11 + 4 + local_20 * 0x14) = 0;
            goto LAB_00579819;
          }
        }
        if ((-1 < (int)uVar9) && (uVar9 < (uint)piVar4[7])) {
          *(int *)(piVar4[1] + 8 + uVar9 * 0x14) = piVar4[7];
        }
      }
      local_8 = local_8 + -0x12;
      local_14 = local_14 + -1;
      piVar17 = piVar17 + -0x16;
    } while (-1 < local_14);
  }
  if (piVar4[10] != 0) {
    *(int *)(piVar4[10] - (param_1[6] * 4 + 4)) = piVar4[7];
  }
  puVar18 = (uint *)(param_1 + 0xe);
  local_10 = 0;
  if (0 < param_1[7]) {
    do {
      iVar13 = *(int *)(iVar3 + 0x18 + (uint)(byte)puVar18[0xd] * 0x48);
      if ((((*(byte *)(iVar13 + 0x2a) & 2) == 0) && (*(int *)(iVar13 + 0xc) == 0)) &&
         ((*(byte *)((int)param_1 + 10) & 0x10) == 0)) {
        uVar9 = *puVar18;
        if (((char)param_1[3] == '\0') && ((uVar9 & 0x400000) == 0)) {
          uVar6 = *(undefined4 *)(iVar3 + 0x34 + (uint)(byte)puVar18[0xd] * 0x48);
          iVar13 = piVar4[7];
          if ((iVar13 < piVar4[8]) || (iVar11 = FUN_0053b4b0(piVar4), iVar11 == 0)) {
            piVar4[7] = piVar4[7] + 1;
            iVar11 = piVar4[1];
            *(undefined2 *)(iVar11 + iVar13 * 0x14) = 0x2d;
            *(undefined1 *)(iVar11 + 3 + iVar13 * 0x14) = 0;
            *(undefined4 *)(iVar11 + 4 + iVar13 * 0x14) = uVar6;
            *(undefined4 *)(iVar11 + 8 + iVar13 * 0x14) = 0;
            *(undefined4 *)(iVar11 + 0xc + iVar13 * 0x14) = 0;
            *(undefined4 *)(iVar11 + 0x10 + iVar13 * 0x14) = 0;
          }
        }
        if (((uVar9 & 0xf0000) != 0) && ((uVar9 & 0x20000000) == 0)) {
          iVar13 = piVar4[7];
          uVar9 = puVar18[8];
          if ((iVar13 < piVar4[8]) || (iVar11 = FUN_0053b4b0(piVar4), iVar11 == 0)) {
            iVar11 = piVar4[1];
            piVar4[7] = piVar4[7] + 1;
            *(undefined2 *)(iVar11 + iVar13 * 0x14) = 0x2d;
            *(undefined1 *)(iVar11 + 3 + iVar13 * 0x14) = 0;
            *(uint *)(iVar11 + 4 + iVar13 * 0x14) = uVar9;
            *(undefined4 *)(iVar11 + 8 + iVar13 * 0x14) = 0;
            *(undefined4 *)(iVar11 + 0xc + iVar13 * 0x14) = 0;
            *(undefined4 *)(iVar11 + 0x10 + iVar13 * 0x14) = 0;
          }
        }
      }
      if ((*puVar18 & 0xf0000) == 0) {
        if ((*puVar18 & 0x10000000) != 0) {
          uVar9 = puVar18[0x10];
          goto LAB_005799a1;
        }
      }
      else {
        uVar9 = puVar18[4];
LAB_005799a1:
        if ((uVar9 != 0) && (*(char *)(iVar5 + 0x38) == '\0')) {
          iVar13 = param_1[4];
          iVar11 = iVar13;
          if (iVar13 < 0) {
            iVar11 = piVar4[7] + -1;
          }
          if (*(char *)(*piVar4 + 0x38) == '\0') {
            puVar15 = (undefined1 *)(piVar4[1] + iVar11 * 0x14);
          }
          else {
            puVar15 = &DAT_0076b50c;
          }
          if (iVar13 < piVar4[7]) {
            puVar16 = (uint *)(puVar15 + 4);
            iVar13 = piVar4[7] - iVar13;
            do {
              if (*puVar16 == puVar18[7]) {
                if ((char)puVar16[-1] == '\x1d') {
                  uVar12 = 0;
                  if (0 < *(int *)(uVar9 + 0x24)) {
                    puVar14 = *(uint **)(uVar9 + 4);
                    do {
                      if (puVar16[1] == *puVar14) {
                        puVar16[1] = uVar12;
                        uVar12 = puVar18[8];
                        goto LAB_00579a37;
                      }
                      uVar12 = uVar12 + 1;
                      puVar14 = puVar14 + 1;
                    } while ((int)uVar12 < *(int *)(uVar9 + 0x24));
                  }
                }
                else if ((char)puVar16[-1] == 'A') {
                  uVar12 = puVar18[8];
                  *(undefined1 *)(puVar16 + -1) = 99;
LAB_00579a37:
                  *puVar16 = uVar12;
                }
              }
              puVar16 = puVar16 + 5;
              iVar13 = iVar13 + -1;
            } while (iVar13 != 0);
          }
        }
      }
      local_10 = local_10 + 1;
      puVar18 = puVar18 + 0x16;
    } while (local_10 < param_1[7]);
  }
  *(undefined8 *)(piVar2 + 0x6e) = *(undefined8 *)(param_1 + 10);
  FUN_0057f6d0(iVar5,param_1);
  return;
}


/* FUN_00579aa0 @ 00579aa0  kind=gamemisc  attributed-by=caller-vote  size=651 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_00579aa0(undefined4 param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  uVar2 = 0;
  if (DAT_007666a8 == 0) {
    switch(param_1) {
    case 1:
      DAT_007665e4 = 0;
      DAT_007665e8 = 0;
      return 0;
    case 2:
      DAT_007665e8 = 0;
      DAT_007665e4 = 1;
      return 0;
    case 3:
      DAT_007665e4 = 1;
      DAT_007665e8 = 1;
      return 0;
    case 4:
      _DAT_00766600 = *param_2;
      DAT_00766608 = param_2[1];
      _DAT_00766610 = param_2[2];
      DAT_00766618 = param_2[3];
      return 0;
    case 5:
      if (DAT_00766600 == 0) {
        FUN_00579aa0(4,&PTR_FUN_00713494);
      }
      *param_2 = _DAT_00766600;
      param_2[1] = DAT_00766608;
      param_2[2] = _DAT_00766610;
      param_2[3] = DAT_00766618;
      return 0;
    case 6:
      DAT_00766688 = param_2;
      DAT_0076668c = param_3;
      DAT_00766690 = param_4;
      return 0;
    case 7:
      DAT_00766694 = param_2;
      DAT_00766698 = param_3;
      DAT_0076669c = param_4;
      return 0;
    default:
      uVar2 = 1;
switchD_00579adc_caseD_e:
      return uVar2;
    case 9:
      DAT_007665e0 = param_2;
      return 0;
    case 10:
      _DAT_00766620 = *param_2;
      _DAT_00766628 = param_2[1];
      _DAT_00766630 = param_2[2];
      _DAT_00766638 = param_2[3];
      DAT_00766640 = *(undefined4 *)(param_2 + 4);
      return 0;
    case 0xb:
      *param_2 = _DAT_00766620;
      param_2[1] = _DAT_00766628;
      param_2[2] = _DAT_00766630;
      param_2[3] = _DAT_00766638;
      *(undefined4 *)(param_2 + 4) = DAT_00766640;
      return 0;
    case 0xd:
      DAT_007665f8 = param_2;
      DAT_007665fc = param_3;
      return 0;
    case 0xe:
      goto switchD_00579adc_caseD_e;
    case 0x10:
      DAT_007666c4 = param_2;
      DAT_007666c8 = param_3;
      return 0;
    case 0x11:
      DAT_007665ec = param_2;
      return 0;
    case 0x12:
      puVar3 = &DAT_00766644;
      for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *(undefined4 *)param_2;
        param_2 = (undefined8 *)((int)param_2 + 4);
        puVar3 = puVar3 + 1;
      }
      return 0;
    case 0x13:
      if (DAT_0076664c == 0) {
        FUN_00579aa0(0x12,&DAT_007128c4);
      }
      puVar3 = &DAT_00766644;
      for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
        *(undefined4 *)param_2 = *puVar3;
        puVar3 = puVar3 + 1;
        param_2 = (undefined8 *)((int)param_2 + 4);
      }
      return 0;
    case 0x14:
      DAT_007665f0 = param_2;
      return 0;
    }
  }
  FUN_00525a30(0x15,"misuse at line %d of [%.10s]",0x1b939,
               "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
  return 0x15;
}


/* FUN_00579d80 @ 00579d80  kind=gamemisc  attributed-by=caller-vote  size=129 */

undefined4 FUN_00579d80(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(param_1 + 0xc));
  }
  FUN_0054d340(param_1);
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    iVar2 = 0;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 4 + iVar2);
      if ((iVar1 != 0) &&
         (iVar1 = *(int *)(*(int *)(**(int **)(iVar1 + 4) + 0xb4) + 0x28), iVar1 != 0)) {
        (*DAT_00766674)(iVar1);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x10;
    } while (iVar3 < *(int *)(param_1 + 0x14));
  }
  FUN_0054de20(param_1);
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(param_1 + 0xc));
  }
  return 0;
}


/* FUN_00579f80 @ 00579f80  kind=gamemisc  attributed-by=caller-vote  size=548 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00579f80(void)

{
  int iVar1;
  int iVar2;
  
  if (DAT_007666a8 != 0) {
    return 0;
  }
  iVar1 = FUN_0055e380();
  if (iVar1 != 0) {
    return iVar1;
  }
  if (DAT_007665e4 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*DAT_00766628)(2);
    if (iVar1 != 0) {
      (*DAT_00766630)(iVar1);
    }
  }
  _DAT_007666b0 = 1;
  iVar2 = 0;
  if ((DAT_007666b4 != 0) || (iVar2 = FUN_0055daf0(), iVar2 == 0)) {
    DAT_007666b4 = 1;
    if (DAT_007666bc == 0) {
      if (DAT_007665e4 != 0) {
        DAT_007666bc = (*DAT_00766628)(1);
      }
      if ((DAT_007665e4 != 0) && (DAT_007666bc == 0)) {
        iVar2 = 7;
        goto LAB_0057a031;
      }
    }
    DAT_007666c0 = DAT_007666c0 + 1;
  }
LAB_0057a031:
  if (iVar1 != 0) {
    (*DAT_00766638)(iVar1);
  }
  if (iVar2 != 0) {
    return iVar2;
  }
  if (DAT_007666bc != 0) {
    (*DAT_00766630)(DAT_007666bc);
  }
  iVar2 = 0;
  if ((DAT_007666a8 != 0) || (DAT_007666ac != 0)) goto LAB_0057a142;
  DAT_007666ac = 1;
  memset(&DAT_0076b4b0,0,0x5c);
  FUN_00563c80();
  if (DAT_007666b8 == 0) {
    if (DAT_0076664c == (code *)0x0) {
      FUN_00579aa0(0x12,&DAT_007128c4);
    }
    iVar2 = (*DAT_0076664c)(DAT_00766648);
    if (iVar2 == 0) goto LAB_0057a0d2;
  }
  else {
LAB_0057a0d2:
    DAT_007666b8 = 1;
    iVar2 = FUN_00579f80();
    if ((iVar2 == 0) && (iVar2 = FUN_0055da00(10), iVar2 != 0)) {
      FUN_00524410(iVar2);
      iVar2 = FUN_0057a220();
      if (iVar2 == 0) {
        FUN_0055ea60(DAT_00766694,DAT_00766698,DAT_0076669c);
        DAT_007666a8 = 1;
      }
    }
    else {
      iVar2 = 7;
    }
  }
  DAT_007666ac = 0;
LAB_0057a142:
  if (DAT_007666bc != 0) {
    (*DAT_00766638)(DAT_007666bc);
  }
  if (iVar1 != 0) {
    (*DAT_00766630)(iVar1);
  }
  DAT_007666c0 = DAT_007666c0 + -1;
  if (DAT_007666c0 < 1) {
    if (DAT_007666bc != 0) {
      (*DAT_0076662c)(DAT_007666bc);
    }
    DAT_007666bc = 0;
  }
  if (iVar1 != 0) {
    (*DAT_00766638)(iVar1);
  }
  return iVar2;
}


/* FUN_0057a220 @ 0057a220  kind=gamemisc  attributed-by=caller-vote  size=159 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0057a220(void)

{
  int iVar1;
  
  _DAT_0076e2c0 = 0;
  _DAT_0076e2c8 = 0;
  _DAT_0076e2d0 = 0;
  _DAT_0076e2d8 = 0;
  _DAT_0076e2e0 = 0;
  (*(code *)PTR_GetSystemInfo_007671d4)(&DAT_0076e2c0);
  iVar1 = FUN_00579f80();
  if (iVar1 == 0) {
    if (DAT_007665e4 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*DAT_00766628)(2);
      if (iVar1 != 0) {
        (*DAT_00766630)(iVar1);
      }
    }
    FUN_0057d3f0(&DAT_00766f78);
    _DAT_00766f84 = DAT_0076b3b8;
    DAT_0076b3b8 = &DAT_00766f78;
    if (iVar1 != 0) {
      (*DAT_00766638)(iVar1);
    }
    return 0;
  }
  return 0;
}


/* FUN_0057a2c0 @ 0057a2c0  kind=gamemisc  attributed-by=caller-vote  size=70 */

int FUN_0057a2c0(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  
  bVar2 = *param_1;
  while ((bVar2 != 0 && ((&DAT_007120d8)[bVar2] == (&DAT_007120d8)[*param_2]))) {
    pbVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    bVar2 = *pbVar1;
  }
  return (uint)(byte)(&DAT_007120d8)[*param_1] - (uint)(byte)(&DAT_007120d8)[*param_2];
}


/* FUN_0057a3f0 @ 0057a3f0  kind=gamemisc  attributed-by=caller-vote  size=31 */

void FUN_0057a3f0(int param_1)

{
  FUN_00553950(param_1,"authorizer malfunction");
  *(undefined4 *)(param_1 + 0xc) = 1;
  return;
}


/* FUN_0057a480 @ 0057a480  kind=gamemisc  attributed-by=caller-vote  size=249 */

void FUN_0057a480(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  
  iVar2 = param_2;
  puVar4 = *(uint **)(param_2 + 4);
  if (puVar4 != (uint *)0x0) {
    param_2 = 0;
    if (0 < *(short *)(iVar2 + 0x26)) {
      do {
        puVar1 = (undefined4 *)*puVar4;
        if (param_1 == 0) {
LAB_0057a522:
          FUN_00524410(puVar1);
        }
        else if (*(int *)(param_1 + 0x1f0) == 0) {
          if (((puVar1 == (undefined4 *)0x0) || (puVar1 < *(undefined4 **)(param_1 + 0x104))) ||
             (*(undefined4 **)(param_1 + 0x108) <= puVar1)) goto LAB_0057a522;
          *puVar1 = *(undefined4 *)(param_1 + 0x100);
          *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + -1;
          *(undefined4 **)(param_1 + 0x100) = puVar1;
        }
        else if (((puVar1 == (undefined4 *)0x0) || (puVar1 < *(undefined4 **)(param_1 + 0x104))) ||
                (*(undefined4 **)(param_1 + 0x108) <= puVar1)) {
          iVar3 = (*DAT_00766608._4_4_)(puVar1);
          **(int **)(param_1 + 0x1f0) = **(int **)(param_1 + 0x1f0) + iVar3;
        }
        else {
          **(int **)(param_1 + 0x1f0) =
               **(int **)(param_1 + 0x1f0) + (uint)*(ushort *)(param_1 + 0xe8);
        }
        FUN_00555e30(param_1,puVar4[1]);
        FUN_005521a0(param_1,puVar4[2]);
        FUN_005521a0(param_1,puVar4[3]);
        FUN_005521a0(param_1,puVar4[4]);
        param_2 = param_2 + 1;
        puVar4 = puVar4 + 6;
      } while (param_2 < *(short *)(iVar2 + 0x26));
    }
    FUN_005521a0(param_1,*(undefined4 *)(iVar2 + 4));
  }
  return;
}


/* FUN_0057a870 @ 0057a870  kind=gamemisc  attributed-by=caller-vote  size=54 */

uint FUN_0057a870(byte *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  for (; 0 < param_2; param_2 = param_2 + -1) {
    uVar1 = uVar1 ^ (uint)(byte)(&DAT_007120d8)[*param_1] ^ uVar1 * 8;
    param_1 = param_1 + 1;
  }
  return uVar1;
}


/* FUN_0057a8b0 @ 0057a8b0  kind=gamemisc  attributed-by=caller-vote  size=253 */

undefined4 FUN_0057a8b0(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  
  piVar1 = (int *)(param_1 + 0x10);
  uVar2 = *(uint *)(param_1 + 0x14);
  iVar3 = *(int *)(*piVar1 + 0x60);
  param_1 = 0;
  if (0 < iVar3) {
    puVar8 = (undefined4 *)(*(int *)(*piVar1 + 0x5c) + 0x10);
    do {
      if (uVar2 <= (uint)puVar8[1]) {
        puVar4 = (uint *)*puVar8;
        if (((puVar4 == (uint *)0x0) || (*puVar4 < uVar2)) || (uVar2 == 0)) {
          return 1;
        }
        uVar7 = uVar2 - 1;
        uVar6 = puVar4[2];
        while (uVar6 != 0) {
          uVar5 = uVar7 / uVar6;
          uVar7 = uVar7 % uVar6;
          puVar4 = (uint *)puVar4[uVar5 + 3];
          if (puVar4 == (uint *)0x0) {
            return 1;
          }
          uVar6 = puVar4[2];
        }
        if (*puVar4 < 0xfa1) {
          if ((*(byte *)((uVar7 >> 3) + 0xc + (int)puVar4) & (byte)(1 << ((byte)uVar7 & 7))) == 0) {
            return 1;
          }
        }
        else {
          uVar5 = uVar7 % 0x7d;
          uVar6 = puVar4[uVar5 + 3];
          if (uVar6 == 0) {
            return 1;
          }
          while (uVar6 != uVar7 + 1) {
            uVar5 = (uVar5 + 1) % 0x7d;
            uVar6 = puVar4[uVar5 + 3];
            if (uVar6 == 0) {
              return 1;
            }
          }
        }
      }
      param_1 = param_1 + 1;
      puVar8 = puVar8 + 0xc;
    } while (param_1 < iVar3);
  }
  return 0;
}


/* FUN_0057a9b0 @ 0057a9b0  kind=gamemisc  attributed-by=caller-vote  size=199 */

void FUN_0057a9b0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  iVar4 = param_1;
  iVar1 = *(int *)(param_1 + 0x10);
  if (*(char *)(iVar1 + 5) != '\x02') {
    iVar5 = FUN_005411b0(iVar1);
    if (iVar5 != 0) {
      return;
    }
    iVar5 = *(int *)(iVar1 + 0x80) + 4;
    lVar6 = __allmul(*(undefined4 *)(iVar1 + 0x34),0,iVar5,iVar5 >> 0x1f);
    uVar2 = *(undefined4 *)(iVar4 + 0x14);
    uVar3 = *(undefined4 *)(iVar4 + 4);
    param_1 = CONCAT13((char)uVar2,
                       CONCAT12((char)((uint)uVar2 >> 8),
                                CONCAT11((char)((uint)uVar2 >> 0x10),(char)((uint)uVar2 >> 0x18))));
    iVar5 = (**(code **)(**(int **)(iVar1 + 0x44) + 0xc))(*(int **)(iVar1 + 0x44),&param_1,4,lVar6);
    if (iVar5 != 0) {
      return;
    }
    iVar5 = (**(code **)(**(int **)(iVar1 + 0x44) + 0xc))
                      (*(int **)(iVar1 + 0x44),uVar3,*(undefined4 *)(iVar1 + 0x80),lVar6 + 4);
    if (iVar5 != 0) {
      return;
    }
  }
  *(int *)(iVar1 + 0x34) = *(int *)(iVar1 + 0x34) + 1;
  FUN_00528db0(iVar1,*(undefined4 *)(iVar4 + 0x14));
  return;
}


/* FUN_0057ac30 @ 0057ac30  kind=gamemisc  attributed-by=caller-vote  size=494 */

void FUN_0057ac30(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  undefined8 uVar5;
  int local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c [4];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  if ((*(int *)(param_1 + 0xb8) != 0) || (iVar2 = FUN_00542b40(param_1,4), iVar2 == 0)) {
    if (*(char *)(param_1 + 7) == '\0') {
      if ((**(int **)(param_1 + 0x40) == 0) || (*(char *)(param_1 + 5) == '\x04')) {
        *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x48);
        *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x4c);
      }
      else {
        uVar3 = (**(code **)(**(int **)(param_1 + 0x3c) + 0x30))(*(int **)(param_1 + 0x3c));
        if ((uVar3 & 0x200) == 0) {
          local_14 = 0xf905d5d9;
          local_10 = 0xd763a120;
          FUN_00563650(local_c,*(undefined4 *)(param_1 + 0x2c));
          uVar5 = FUN_0053cc30(param_1);
          iVar2 = (**(code **)(**(int **)(param_1 + 0x40) + 8))
                            (*(int **)(param_1 + 0x40),&local_1c,8,uVar5);
          if ((((iVar2 != 0) ||
               (((local_1c == -0x6fa2a27 && (local_18 == -0x289c5ee0)) &&
                (iVar2 = (**(code **)(**(int **)(param_1 + 0x40) + 0xc))
                                   (*(int **)(param_1 + 0x40),&DAT_00712467,1,uVar5), iVar2 != 0))))
              && (iVar2 != 0x20a)) ||
             ((((*(char *)(param_1 + 8) != '\0' && ((uVar3 & 0x400) == 0)) &&
               (iVar2 = (**(code **)(**(int **)(param_1 + 0x40) + 0x14))
                                  (*(int **)(param_1 + 0x40),*(undefined1 *)(param_1 + 0xb)),
               iVar2 != 0)) ||
              (iVar2 = (**(code **)(**(int **)(param_1 + 0x40) + 0xc))
                                 (*(int **)(param_1 + 0x40),&local_14,0xc,
                                  *(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54)),
              iVar2 != 0)))) goto LAB_0057ae0f;
        }
        if ((uVar3 & 0x400) == 0) {
          bVar4 = 0;
          if (*(char *)(param_1 + 0xb) == '\x03') {
            bVar4 = 0x10;
          }
          iVar2 = (**(code **)(**(int **)(param_1 + 0x40) + 0x14))
                            (*(int **)(param_1 + 0x40),bVar4 | *(byte *)(param_1 + 0xb));
          if (iVar2 != 0) goto LAB_0057ae0f;
        }
        *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x48);
        *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x4c);
        if ((param_2 != 0) && ((uVar3 & 0x200) == 0)) {
          *(undefined4 *)(param_1 + 0x2c) = 0;
          iVar2 = FUN_00580050(param_1);
          if (iVar2 != 0) {
            __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
            return;
          }
        }
      }
    }
    piVar1 = *(int **)(param_1 + 0xb4);
    for (iVar2 = *piVar1; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x20)) {
      *(ushort *)(iVar2 + 0x18) = *(ushort *)(iVar2 + 0x18) & 0xfffb;
    }
    piVar1[2] = piVar1[1];
    *(undefined1 *)(param_1 + 0xf) = 4;
  }
LAB_0057ae0f:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0057b3b0 @ 0057b3b0  kind=gamemisc  attributed-by=caller-vote  size=1586 */

void FUN_0057b3b0(int *param_1,undefined1 *param_2)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_c;
  
  piVar4 = param_1;
  piVar2 = (int *)param_1[2];
  local_18 = 0;
  local_1c = 0;
  *param_2 = 1;
  FUN_00554130(param_1);
  piVar5 = *(int **)(param_2 + 0x20);
  local_28 = 0;
  if (0 < *(int *)(param_2 + 0x24)) {
    do {
      local_24 = 0;
      piVar11 = *(int **)(*piVar5 + 0x10);
      if (piVar11 == (int *)0x0) {
        local_14 = 0;
        local_c = 0;
      }
      else {
        local_14 = *piVar11;
        local_c = param_1[0x10];
        if (param_1[0xf] < local_14) {
          local_c = param_1[0x13] + 1;
          param_1[0x13] = param_1[0x13] + local_14;
          FUN_005546b0(param_1,piVar11,local_c,1);
        }
        else {
          param_1[0x10] = local_c + local_14;
          param_1[0xf] = param_1[0xf] - local_14;
          FUN_005546b0(param_1,piVar11,local_c,1);
        }
      }
      if (-1 < piVar5[3]) {
        uVar7 = piVar2[9];
        piVar2[9] = uVar7 + 1;
        if ((uVar7 & uVar7 - 1) == 0) {
          iVar12 = piVar2[10];
          iVar13 = *piVar2;
          iVar6 = FUN_00552390(iVar13,iVar12,uVar7 * 8 + 4);
          if (iVar6 == 0) {
            FUN_005521a0(iVar13,iVar12);
          }
          piVar2[10] = iVar6;
        }
        if (piVar2[10] != 0) {
          *(undefined4 *)(piVar2[10] + uVar7 * 4) = 0xffffffff;
        }
        local_24 = -1 - uVar7;
        FUN_00530be0(param_1,piVar5[3],local_24,1,local_c);
      }
      if ((*(byte *)(piVar5[1] + 3) & 8) != 0) {
        puVar9 = (undefined4 *)piVar11[2];
        local_20 = 0;
        iVar12 = 0;
        do {
          if (local_14 <= iVar12) {
            if (local_20 == 0) {
              local_20 = *(int *)(*param_1 + 8);
            }
            break;
          }
          local_20 = FUN_00555b70(param_1,*puVar9);
          iVar12 = iVar12 + 1;
          puVar9 = puVar9 + 5;
        } while (local_20 == 0);
        if ((local_18 == 0) && (*(int *)(param_2 + 0x1c) != 0)) {
          param_1[0x13] = param_1[0x13] + 1;
          local_18 = param_1[0x13];
        }
        iVar12 = piVar2[7];
        iVar13 = piVar2[8];
        if (iVar12 < iVar13) {
LAB_0057b5b8:
          iVar13 = piVar2[1];
          piVar2[7] = piVar2[7] + 1;
          *(int *)(iVar13 + 4 + iVar12 * 0x14) = local_18;
          *(undefined2 *)(iVar13 + iVar12 * 0x14) = 0x11;
          *(undefined1 *)(iVar13 + 3 + iVar12 * 0x14) = 0;
          *(undefined4 *)(iVar13 + 8 + iVar12 * 0x14) = 0;
          *(undefined4 *)(iVar13 + 0xc + iVar12 * 0x14) = 0;
          *(undefined4 *)(iVar13 + 0x10 + iVar12 * 0x14) = 0;
        }
        else {
          if (iVar13 == 0) {
            iVar13 = 0x33;
          }
          else {
            iVar13 = iVar13 * 2;
          }
          uVar7 = FUN_00552390(*piVar2,piVar2[1],iVar13 * 0x14);
          if (uVar7 != 0) {
            iVar13 = *piVar2;
            if (((iVar13 == 0) || (uVar7 < *(uint *)(iVar13 + 0x104))) ||
               (*(uint *)(iVar13 + 0x108) <= uVar7)) {
              uVar10 = (*DAT_00766608._4_4_)(uVar7);
            }
            else {
              uVar10 = (uint)*(ushort *)(iVar13 + 0xe8);
            }
            piVar2[8] = uVar10 / 0x14;
            piVar2[1] = uVar7;
            goto LAB_0057b5b8;
          }
          iVar12 = 1;
        }
        iVar13 = *piVar2;
        if ((piVar2[1] == 0) || (*(char *)(iVar13 + 0x38) != '\0')) {
          FUN_00539320(iVar13,0xfffffffc,local_20);
        }
        else {
          if (iVar12 < 0) {
            iVar12 = piVar2[7] + -1;
          }
          iVar6 = piVar2[1] + iVar12 * 0x14;
          FUN_00539320(iVar13,(int)*(char *)(iVar6 + 1),
                       *(undefined4 *)(piVar2[1] + 0x10 + iVar12 * 0x14));
          *(undefined4 *)(iVar6 + 0x10) = 0;
          if (local_20 == 0) {
            *(undefined4 *)(iVar6 + 0x10) = 0;
            *(undefined1 *)(iVar6 + 1) = 0;
          }
          else {
            *(int *)(iVar6 + 0x10) = local_20;
            *(undefined1 *)(iVar6 + 1) = 0xfc;
          }
        }
      }
      iVar12 = piVar5[1];
      iVar13 = piVar5[2];
      iVar6 = piVar2[7];
      iVar8 = piVar2[8];
      if (iVar6 < iVar8) {
LAB_0057b6dd:
        iVar8 = piVar2[1];
        piVar2[7] = piVar2[7] + 1;
        *(int *)(iVar8 + 8 + iVar6 * 0x14) = local_c;
        *(undefined2 *)(iVar8 + iVar6 * 0x14) = 0x7b;
        *(undefined1 *)(iVar8 + 3 + iVar6 * 0x14) = 0;
        *(undefined4 *)(iVar8 + 4 + iVar6 * 0x14) = 0;
        *(int *)(iVar8 + 0xc + iVar6 * 0x14) = iVar13;
        *(undefined4 *)(iVar8 + 0x10 + iVar6 * 0x14) = 0;
      }
      else {
        if (iVar8 == 0) {
          iVar8 = 0x33;
        }
        else {
          iVar8 = iVar8 * 2;
        }
        uVar7 = FUN_00552390(*piVar2,piVar2[1],iVar8 * 0x14);
        if (uVar7 != 0) {
          iVar8 = *piVar2;
          if (((iVar8 == 0) || (uVar7 < *(uint *)(iVar8 + 0x104))) ||
             (*(uint *)(iVar8 + 0x108) <= uVar7)) {
            uVar10 = (*DAT_00766608._4_4_)(uVar7);
          }
          else {
            uVar10 = (uint)*(ushort *)(iVar8 + 0xe8);
          }
          piVar2[1] = uVar7;
          piVar2[8] = uVar10 / 0x14;
          goto LAB_0057b6dd;
        }
        iVar6 = 1;
      }
      iVar13 = piVar2[1];
      iVar8 = *piVar2;
      if ((iVar13 == 0) || (*(char *)(iVar8 + 0x38) != '\0')) {
        FUN_00539320(iVar8,0xfffffffb,iVar12);
      }
      else {
        if (iVar6 < 0) {
          iVar6 = piVar2[7] + -1;
        }
        iVar1 = iVar13 + iVar6 * 0x14;
        FUN_00539320(iVar8,(int)*(char *)(iVar1 + 1),*(undefined4 *)(iVar13 + 0x10 + iVar6 * 0x14));
        *(undefined4 *)(iVar1 + 0x10) = 0;
        if (iVar12 == 0) {
          *(undefined4 *)(iVar1 + 0x10) = 0;
          *(undefined1 *)(iVar1 + 1) = 0;
        }
        else {
          *(int *)(iVar1 + 0x10) = iVar12;
          *(undefined1 *)(iVar1 + 1) = 0xfb;
        }
      }
      if (piVar2[1] != 0) {
        *(char *)(piVar2[1] + -0x11 + piVar2[7] * 0x14) = (char)local_14;
      }
      iVar12 = local_c + local_14 + -1;
      piVar11 = param_1 + 0x1d;
      iVar13 = 10;
      do {
        iVar6 = *piVar11;
        if ((local_c <= iVar6) && (iVar6 <= iVar12)) {
          if ((char)piVar11[-2] != '\0') {
            if (*(byte *)((int)param_1 + 0x13) < 8) {
              param_1[*(byte *)((int)param_1 + 0x13) + 7] = iVar6;
              *(char *)((int)param_1 + 0x13) = *(char *)((int)param_1 + 0x13) + '\x01';
            }
            *(undefined1 *)(piVar11 + -2) = 0;
          }
          *piVar11 = 0;
        }
        piVar11 = piVar11 + 6;
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
      piVar11 = param_1 + 0x1d;
      iVar13 = 10;
      do {
        iVar6 = *piVar11;
        if ((local_c <= iVar6) && (iVar6 <= iVar12)) {
          if ((char)piVar11[-2] != '\0') {
            if (*(byte *)((int)param_1 + 0x13) < 8) {
              param_1[*(byte *)((int)param_1 + 0x13) + 7] = iVar6;
              *(char *)((int)param_1 + 0x13) = *(char *)((int)param_1 + 0x13) + '\x01';
            }
            *(undefined1 *)(piVar11 + -2) = 0;
          }
          *piVar11 = 0;
        }
        piVar11 = piVar11 + 6;
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
      if (param_1[0xf] < local_14) {
        param_1[0xf] = local_14;
        param_1[0x10] = local_c;
      }
      if (local_24 != 0) {
        if (piVar2[10] != 0) {
          *(int *)(piVar2[10] - (local_24 * 4 + 4)) = piVar2[7];
        }
        FUN_00554130(param_1);
      }
      local_28 = local_28 + 1;
      piVar5 = piVar5 + 4;
    } while (local_28 < *(int *)(param_2 + 0x24));
    if (local_18 != 0) {
      local_1c = piVar2[7];
      if (((int)local_1c < piVar2[8]) || (iVar12 = FUN_0053b4b0(piVar2), iVar12 == 0)) {
        piVar2[7] = piVar2[7] + 1;
        iVar12 = piVar2[1];
        *(undefined2 *)(iVar12 + local_1c * 0x14) = 0x1b;
        *(undefined1 *)(iVar12 + 3 + local_1c * 0x14) = 0;
        *(int *)(iVar12 + 4 + local_1c * 0x14) = local_18;
        *(undefined4 *)(iVar12 + 8 + local_1c * 0x14) = 0;
        *(undefined4 *)(iVar12 + 0xc + local_1c * 0x14) = 0;
        *(undefined4 *)(iVar12 + 0x10 + local_1c * 0x14) = 0;
      }
      else {
        local_1c = 1;
      }
    }
  }
  FUN_00554130(param_1);
  param_1 = (int *)0x0;
  if (0 < *(int *)(param_2 + 0x1c)) {
    puVar9 = (undefined4 *)(*(int *)(param_2 + 0x14) + 0x14);
    do {
      iVar12 = puVar9[-1];
      pcVar3 = (char *)*puVar9;
      if ((pcVar3 == (char *)0x0) || (*pcVar3 != -0x7c)) {
        local_24 = FUN_00554e20(piVar4,pcVar3,iVar12);
        if (((local_24 != iVar12) && (iVar13 = piVar4[2], iVar13 != 0)) &&
           ((local_2c = *(int *)(iVar13 + 0x1c), local_2c < *(int *)(iVar13 + 0x20) ||
            (iVar6 = FUN_0053b4b0(iVar13), iVar6 == 0)))) {
          *(int *)(iVar13 + 0x1c) = *(int *)(iVar13 + 0x1c) + 1;
          iVar13 = *(int *)(iVar13 + 4);
          *(undefined2 *)(iVar13 + local_2c * 0x14) = 0xf;
          goto LAB_0057b976;
        }
      }
      else {
        local_24 = *(int *)(pcVar3 + 0x18);
        iVar13 = piVar4[2];
        local_2c = *(int *)(iVar13 + 0x1c);
        if ((local_2c < *(int *)(iVar13 + 0x20)) || (iVar6 = FUN_0053b4b0(iVar13), iVar6 == 0)) {
          *(int *)(iVar13 + 0x1c) = *(int *)(iVar13 + 0x1c) + 1;
          iVar13 = *(int *)(iVar13 + 4);
          *(undefined2 *)(iVar13 + local_2c * 0x14) = 0xe;
LAB_0057b976:
          *(undefined4 *)(iVar13 + 0x10 + local_2c * 0x14) = 0;
          *(undefined4 *)(iVar13 + 0xc + local_2c * 0x14) = 0;
          *(int *)(iVar13 + 8 + local_2c * 0x14) = iVar12;
          *(int *)(iVar13 + 4 + local_2c * 0x14) = local_24;
          *(undefined1 *)(iVar13 + 3 + local_2c * 0x14) = 0;
        }
      }
      param_1 = (int *)((int)param_1 + 1);
      puVar9 = puVar9 + 6;
    } while ((int)param_1 < *(int *)(param_2 + 0x1c));
  }
  *param_2 = 0;
  FUN_00554130(piVar4);
  if (((local_1c != 0) && (-1 < (int)local_1c)) && (local_1c < (uint)piVar2[7])) {
    *(int *)(piVar2[1] + 8 + local_1c * 0x14) = piVar2[7];
  }
  return;
}


/* FUN_0057d290 @ 0057d290  kind=gamemisc  attributed-by=caller-vote  size=349 */

undefined4 FUN_0057d290(int *param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  
  if (param_1 == (int *)0x0) {
    pcVar2 = "API called with NULL prepared statement";
  }
  else {
    if (*param_1 != 0) {
      iVar1 = *(int *)(*param_1 + 0xc);
      if (iVar1 != 0) {
        (*DAT_00766630)(iVar1);
      }
      if ((param_1[0xc] == -0x420df25d) && (param_1[0x15] < 0)) {
        if ((0 < param_2) && (param_2 <= (short)param_1[0x13])) {
          param_2 = param_2 + -1;
          iVar1 = param_1[0x11] + param_2 * 0x28;
          FUN_00574d40(iVar1);
          *(undefined2 *)(iVar1 + 0x1c) = 1;
          FUN_00553890(*param_1,0,0);
          if (((param_1[0x18] & 0x200U) != 0) &&
             (((param_2 < 0x20 && ((param_1[0x2b] & 1 << ((byte)param_2 & 0x1f)) != 0)) ||
              (param_1[0x2b] == -1)))) {
            param_1[0x18] = param_1[0x18] | 0x20;
          }
          return 0;
        }
        FUN_00553890(*param_1,0x19,0);
        if (*(int *)(*param_1 + 0xc) != 0) {
          (*DAT_00766638)(*(int *)(*param_1 + 0xc));
        }
        return 0x19;
      }
      FUN_00553890(*param_1,0x15,0);
      if (*(int *)(*param_1 + 0xc) != 0) {
        (*DAT_00766638)(*(int *)(*param_1 + 0xc));
      }
      FUN_00525a30(0x15,"bind on a busy prepared statement: [%s]",param_1[0x26]);
      FUN_00525a30(0x15,"misuse at line %d of [%.10s]",0xf556,
                   "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
      return 0x15;
    }
    pcVar2 = "API called with finalized prepared statement";
  }
  FUN_00525a30(0x15,pcVar2);
  FUN_00525a30(0x15,"misuse at line %d of [%.10s]",0xf54e,"c0e09560d26f0a6456be9dd3447f5311eb4f238f"
              );
  return 0x15;
}


/* FUN_0057d3f0 @ 0057d3f0  kind=gamemisc  attributed-by=caller-vote  size=68 */

void FUN_0057d3f0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != 0) {
    if (DAT_0076b3b8 == param_1) {
      DAT_0076b3b8 = *(undefined4 *)(param_1 + 0xc);
      return;
    }
    if (DAT_0076b3b8 != 0) {
      iVar1 = *(int *)(DAT_0076b3b8 + 0xc);
      iVar3 = DAT_0076b3b8;
      while ((iVar1 != 0 && (iVar2 = *(int *)(iVar3 + 0xc), iVar2 != param_1))) {
        iVar1 = *(int *)(iVar2 + 0xc);
        iVar3 = iVar2;
      }
      if (*(int *)(iVar3 + 0xc) == param_1) {
        *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(param_1 + 0xc);
      }
    }
  }
  return;
}


/* FUN_0057d530 @ 0057d530  kind=gamemisc  attributed-by=caller-vote  size=759 */

int FUN_0057d530(int param_1,undefined4 *param_2,undefined4 *param_3,code *param_4,
                undefined4 *param_5)

{
  ushort *puVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  int *local_28;
  undefined4 *local_24;
  char *local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_14 = 0;
  local_18 = param_2[0xd];
  local_10 = param_2[0xc];
  local_c = FUN_0055d980(param_1,&DAT_00716900,*param_2);
  if (local_c == 0) {
    return 7;
  }
  piVar3 = (int *)FUN_00552230(param_1,0x1c);
  if (piVar3 == (int *)0x0) {
    FUN_005521a0(param_1,local_c);
    return 7;
  }
  piVar3[0] = 0;
  piVar3[1] = 0;
  piVar3[2] = 0;
  piVar3[3] = 0;
  piVar3[4] = 0;
  piVar3[5] = 0;
  piVar3[6] = 0;
  *piVar3 = param_1;
  piVar3[1] = (int)param_3;
  iVar4 = FUN_00565260(param_1,param_2[0x10]);
  *(undefined4 *)(param_2[0xd] + 4) = *(undefined4 *)(*(int *)(param_1 + 0x10) + iVar4 * 0x10);
  uVar5 = *(undefined4 *)(param_1 + 0x134);
  *(int ***)(param_1 + 0x134) = &local_28;
  local_24 = param_2;
  local_28 = piVar3;
  local_10 = (*param_4)(param_1,param_3[2],local_10,local_18,piVar3 + 2,&local_14);
  iVar4 = local_c;
  *(undefined4 *)(param_1 + 0x134) = uVar5;
  if (local_10 == 7) {
    *(undefined1 *)(param_1 + 0x38) = 1;
  }
  else if (local_10 == 0) {
    if ((undefined4 *)piVar3[2] == (undefined4 *)0x0) {
      FUN_005521a0(param_1,local_c);
      return 0;
    }
    *(undefined4 *)piVar3[2] = *param_3;
    piVar3[3] = 1;
    if (local_24 != (undefined4 *)0x0) {
      uVar5 = FUN_0055d980(param_1,"vtable constructor did not declare schema: %s",*param_2);
      *param_5 = uVar5;
      FUN_005776a0(piVar3);
      FUN_005521a0(param_1,local_c);
      return 1;
    }
    piVar3[6] = param_2[0xe];
    param_2[0xe] = piVar3;
    local_18 = 0;
    local_10 = 0;
    if (0 < *(short *)((int)param_2 + 0x26)) {
      local_8 = 0;
      do {
        iVar9 = 0;
        iVar4 = *(int *)(param_2[1] + 0xc + local_8);
        if (iVar4 != 0) {
          iVar6 = FUN_00568070(iVar4);
          iVar7 = FUN_005259c0("hidden",iVar4,6);
          if ((iVar7 == 0) && ((*(char *)(iVar4 + 6) == '\0' || (*(char *)(iVar4 + 6) == ' ')))) {
LAB_0057d799:
            if (iVar9 < iVar6) {
              local_20 = (char *)(iVar9 + iVar4);
              iVar7 = (*(char *)(iVar9 + 6 + iVar4) != '\0') + 6;
              if (iVar7 + iVar9 <= iVar6) {
                local_1c = iVar7 - iVar4;
                pcVar8 = local_20;
                do {
                  *pcVar8 = pcVar8[iVar7];
                  pcVar8 = pcVar8 + 1;
                } while ((int)(pcVar8 + local_1c) <= iVar6);
              }
              if ((*local_20 == '\0') && (0 < iVar9)) {
                local_20[-1] = '\0';
              }
              puVar1 = (ushort *)(param_2[1] + 0x16 + local_8);
              *puVar1 = *puVar1 | 2;
            }
          }
          else {
            iVar9 = 0;
            if (0 < iVar6) {
              do {
                iVar7 = FUN_005259c0(" hidden",iVar9 + iVar4,7);
                if ((iVar7 == 0) &&
                   ((cVar2 = *(char *)(iVar9 + 7 + iVar4), cVar2 == '\0' || (cVar2 == ' ')))) {
                  iVar9 = iVar9 + 1;
                  goto LAB_0057d799;
                }
                iVar9 = iVar9 + 1;
              } while (iVar9 < iVar6);
            }
          }
        }
        local_18 = local_18 + 1;
        local_8 = local_8 + 0x18;
      } while (local_18 < *(short *)((int)param_2 + 0x26));
    }
    iVar4 = local_10;
    FUN_005521a0(param_1,local_c);
    return iVar4;
  }
  if (local_14 == 0) {
    uVar5 = FUN_0055d980(param_1,"vtable constructor failed: %s",local_c);
    *param_5 = uVar5;
  }
  else {
    uVar5 = FUN_0055d980(param_1,&DAT_00716900,local_14);
    *param_5 = uVar5;
    FUN_00524410(local_14);
    iVar4 = local_c;
  }
  FUN_005521a0(param_1,piVar3);
  iVar9 = local_10;
  FUN_005521a0(param_1,iVar4);
  return iVar9;
}


/* FUN_0057d830 @ 0057d830  kind=gamemisc  attributed-by=caller-vote  size=73 */

int * FUN_0057d830(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar1 = *(int **)(param_2 + 0x38);
  *(undefined4 *)(param_2 + 0x38) = 0;
  piVar4 = (int *)0x0;
  while (piVar3 = piVar1, piVar3 != (int *)0x0) {
    iVar2 = *piVar3;
    piVar1 = (int *)piVar3[6];
    if (iVar2 == param_1) {
      *(int **)(param_2 + 0x38) = piVar3;
      piVar3[6] = 0;
      piVar4 = piVar3;
    }
    else {
      piVar3[6] = *(int *)(iVar2 + 0x13c);
      *(int **)(iVar2 + 0x13c) = piVar3;
    }
  }
  return piVar4;
}


/* FUN_0057d880 @ 0057d880  kind=gamemisc  attributed-by=caller-vote  size=78 */

int FUN_0057d880(int param_1,code *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  
  do {
    if (*(char *)(param_1 + 0x2b) == '\0') {
      iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x38))
                        (*(int **)(param_1 + 4),param_4,param_5,10);
    }
    else {
      iVar1 = 0;
    }
    if (param_2 == (code *)0x0) {
      return iVar1;
    }
    if (iVar1 != 5) {
      return iVar1;
    }
    iVar1 = (*param_2)(param_3);
  } while (iVar1 != 0);
  return 5;
}


/* FUN_0057d8d0 @ 0057d8d0  kind=gamemisc  attributed-by=caller-vote  size=851 */

/* WARNING: Removing unreachable block (ram,0x0057da59) */

int FUN_0057d8d0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
                undefined4 param_6)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint local_3c;
  undefined4 local_38;
  undefined8 local_34;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  uint *local_10;
  undefined4 local_c;
  uint local_8;
  
  local_14 = (*(ushort *)(param_1 + 0x42) & 1) * 0x10000 + (*(ushort *)(param_1 + 0x42) & 0xfe00);
  iVar5 = **(int **)(param_1 + 0x20);
  puVar2 = (uint *)(iVar5 + 0x60);
  local_1c = 0;
  local_18 = 0;
  local_20 = 0;
  if (*(uint *)(param_1 + 0x44) <= *puVar2) {
    return 0;
  }
  iVar3 = FUN_0057e9f0(param_1,&local_1c);
  if (iVar3 != 0) {
    return iVar3;
  }
  local_24 = *(uint *)(param_1 + 0x48);
  local_c = 0;
  if (param_2 != 0) {
    local_c = param_3;
  }
  uVar4 = *(uint *)(param_1 + 0x44);
  local_10 = (uint *)(iVar5 + 0x68);
  iVar5 = 1;
  iVar3 = 0;
  local_8 = uVar4;
  do {
    local_28 = *local_10;
    if (local_28 < uVar4) {
      iVar3 = FUN_0057d880(param_1,local_c,param_4,iVar5 + 3,1);
      if (iVar3 == 0) {
        uVar4 = 0xffffffff;
        if (iVar5 == 1) {
          uVar4 = local_8;
        }
        *local_10 = uVar4;
        uVar4 = local_8;
        if (*(char *)(param_1 + 0x2b) == '\0') {
          (**(code **)(**(int **)(param_1 + 4) + 0x38))(*(int **)(param_1 + 4),iVar5 + 3,1,9);
          uVar4 = local_8;
        }
      }
      else {
        if (iVar3 != 5) goto LAB_0057dc0f;
        local_8 = local_28;
        local_c = 0;
        uVar4 = local_28;
      }
    }
    iVar5 = iVar5 + 1;
    local_10 = local_10 + 1;
  } while (iVar5 < 5);
  if (*puVar2 < uVar4) {
    iVar3 = FUN_0057d880(param_1,local_c,param_4,3,1);
    if (iVar3 == 0) {
      local_2c = *puVar2;
      if (param_5 == 0) {
LAB_0057da13:
        local_10 = (uint *)((int)local_14 >> 0x1f);
        local_28 = local_14;
        local_34 = __allmul(local_24,0,local_14,local_10);
        iVar3 = (**(code **)(**(int **)(param_1 + 4) + 0x18))(*(int **)(param_1 + 4),&local_3c);
        if (iVar3 == 0) {
          uVar4 = local_8;
          if (CONCAT44(local_38,local_3c) < local_34) {
            (**(code **)(**(int **)(param_1 + 4) + 0x28))(*(int **)(param_1 + 4),5,&local_34);
            uVar4 = local_8;
          }
          do {
            do {
              iVar5 = FUN_0057eb80(local_1c,&local_18,&local_20);
              if (iVar5 != 0) {
                if (uVar4 == *(uint *)(**(int **)(param_1 + 0x20) + 0x10)) {
                  uVar7 = __allmul(*(undefined4 *)(param_1 + 0x48),0,local_28,local_10);
                  iVar3 = (**(code **)(**(int **)(param_1 + 4) + 0x10))
                                    (*(int **)(param_1 + 4),uVar7);
                  if (iVar3 != 0) goto LAB_0057db10;
                  if (param_5 != 0) {
                    iVar3 = (**(code **)(**(int **)(param_1 + 4) + 0x14))
                                      (*(int **)(param_1 + 4),param_5);
                    if (iVar3 != 0) goto LAB_0057db10;
                  }
                }
                *puVar2 = uVar4;
                goto LAB_0057db10;
              }
            } while (((local_20 <= local_2c) || (uVar4 < local_20)) || (local_24 < local_18));
            piVar1 = *(int **)(param_1 + 8);
            iVar5 = *piVar1;
            lVar6 = __allmul(local_14 + 0x18,(int)(local_14 + 0x18) >> 0x1f,local_20 - 1,0);
            iVar3 = (**(code **)(iVar5 + 8))(piVar1,param_6,local_14,lVar6 + 0x38);
            if (iVar3 != 0) break;
            piVar1 = *(int **)(param_1 + 4);
            iVar5 = *piVar1;
            uVar7 = __allmul(local_18 - 1,0,local_28,local_10);
            iVar3 = (**(code **)(iVar5 + 0xc))(piVar1,param_6,local_14,uVar7);
            uVar4 = local_8;
          } while (iVar3 == 0);
        }
      }
      else {
        iVar3 = (**(code **)(**(int **)(param_1 + 8) + 0x14))(*(int **)(param_1 + 8),param_5);
        if (iVar3 == 0) goto LAB_0057da13;
      }
LAB_0057db10:
      if (*(char *)(param_1 + 0x2b) == '\0') {
        (**(code **)(**(int **)(param_1 + 4) + 0x38))(*(int **)(param_1 + 4),3,1,9);
      }
    }
  }
  if (iVar3 == 5) {
    iVar3 = 0;
  }
  else if (iVar3 != 0) goto LAB_0057dc0f;
  if (param_2 != 0) {
    if (*puVar2 < *(uint *)(param_1 + 0x44)) {
      FUN_005652a0(local_1c);
      return 5;
    }
    if (param_2 == 2) {
      iVar3 = FUN_0057d880(param_1,local_c,param_4,4,4);
      if ((iVar3 == 0) && (*(char *)(param_1 + 0x2b) == '\0')) {
        (**(code **)(**(int **)(param_1 + 4) + 0x38))(*(int **)(param_1 + 4),4,4,9);
      }
    }
  }
LAB_0057dc0f:
  FUN_005652a0(local_1c);
  return iVar3;
}


/* FUN_0057dcf0 @ 0057dcf0  kind=gamemisc  attributed-by=caller-vote  size=165 */

void FUN_0057dcf0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int local_8;
  
  iVar4 = 0;
  iVar5 = 0;
  if (*(int *)(param_1 + 0x44) != 0) {
    uVar3 = *(int *)(param_1 + 0x44) + 0x21U >> 0xc;
    iVar1 = FUN_0057e140(param_1,uVar3,&local_8);
    if (iVar1 == 0) {
      iVar4 = local_8 + 0x4000;
      if (uVar3 == 0) {
        iVar1 = local_8 + 0x84;
        local_8 = local_8 + 0x88;
      }
      else {
        iVar5 = (uVar3 - 1) * 0x1000 + 0xfde;
        iVar1 = local_8 + -4;
      }
    }
    else {
      iVar1 = 0;
    }
    iVar5 = *(int *)(param_1 + 0x44) - iVar5;
    iVar2 = 0;
    do {
      if (iVar5 < (int)(uint)*(ushort *)(iVar4 + iVar2 * 2)) {
        *(undefined2 *)(iVar4 + iVar2 * 2) = 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x2000);
    memset((void *)(iVar5 * 4 + 4 + iVar1),0,((iVar4 + iVar5 * -4) - iVar1) - 4);
  }
  return;
}


/* FUN_0057deb0 @ 0057deb0  kind=gamemisc  attributed-by=caller-vote  size=189 */

void FUN_0057deb0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 *param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  bool bVar3;
  
  *param_5 = (char)((uint)param_2 >> 0x18);
  param_5[3] = (char)param_2;
  param_5[1] = (char)((uint)param_2 >> 0x10);
  param_5[2] = (char)((uint)param_2 >> 8);
  param_5[4] = (char)((uint)param_3 >> 0x18);
  param_5[5] = (char)((uint)param_3 >> 0x10);
  param_5[6] = (char)((uint)param_3 >> 8);
  param_5[7] = (char)param_3;
  *(undefined4 *)(param_5 + 8) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_5 + 0xc) = *(undefined4 *)(param_1 + 0x58);
  bVar3 = *(char *)(param_1 + 0x41) == '\0';
  puVar1 = (undefined4 *)(param_1 + 0x4c);
  FUN_0057dc30(bVar3,param_5,8,puVar1,puVar1);
  FUN_0057dc30(bVar3,param_4,*(undefined4 *)(param_1 + 0x24),puVar1,puVar1);
  uVar2 = *puVar1;
  param_5[0x10] = (char)((uint)uVar2 >> 0x18);
  param_5[0x11] = (char)((uint)uVar2 >> 0x10);
  param_5[0x12] = (char)((uint)uVar2 >> 8);
  param_5[0x13] = (char)uVar2;
  uVar2 = *(undefined4 *)(param_1 + 0x50);
  param_5[0x14] = (char)((uint)uVar2 >> 0x18);
  param_5[0x15] = (char)((uint)uVar2 >> 0x10);
  param_5[0x16] = (char)((uint)uVar2 >> 8);
  param_5[0x17] = (char)uVar2;
  return;
}


/* FUN_0057df70 @ 0057df70  kind=gamemisc  attributed-by=caller-vote  size=235 */

int FUN_0057df70(undefined4 param_1,void *param_2,int param_3)

{
  int iVar1;
  short sVar2;
  int iVar3;
  void *pvVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  pvVar4 = param_2;
  uVar8 = (int)param_2 + 0x21U >> 0xc;
  iVar6 = FUN_0057e140(param_1,uVar8,&param_2);
  pvVar5 = param_2;
  if (iVar6 == 0) {
    if (uVar8 == 0) {
      param_2 = (void *)((int)param_2 + 0x88);
      iVar7 = 0;
    }
    else {
      iVar7 = (uVar8 - 1) * 0x1000 + 0xfde;
    }
    iVar7 = (int)pvVar4 - iVar7;
    iVar1 = (int)param_2 + -4;
    if (iVar7 == 1) {
      memset(param_2,0,(int)pvVar5 + (0x7ffc - iVar1));
    }
    if (*(int *)(iVar1 + iVar7 * 4) != 0) {
      FUN_0057dcf0(param_1);
    }
    uVar8 = param_3 * 0x17f & 0x1fff;
    sVar2 = *(short *)((int)pvVar5 + uVar8 * 2 + 0x4000);
    iVar3 = iVar7;
    while (sVar2 != 0) {
      if (iVar3 == 0) {
        FUN_00525a30(0xb,"database corruption at line %d of [%.10s]",0xb0e1,
                     "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
        return 0xb;
      }
      uVar8 = uVar8 + 1 & 0x1fff;
      iVar3 = iVar3 + -1;
      sVar2 = *(short *)((int)pvVar5 + uVar8 * 2 + 0x4000);
    }
    *(int *)(iVar1 + iVar7 * 4) = param_3;
    *(short *)((int)pvVar5 + uVar8 * 2 + 0x4000) = (short)iVar7;
  }
  return iVar6;
}


/* FUN_0057e060 @ 0057e060  kind=gamemisc  attributed-by=caller-vote  size=219 */

void FUN_0057e060(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x2b) == '\x02') {
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x18)) {
      do {
        iVar1 = *(int *)(*(int *)(param_1 + 0x20) + iVar3 * 4);
        if (iVar1 != 0) {
          if (DAT_007665e0 == 0) {
            (*DAT_00766604)(iVar1);
          }
          else {
            if (DAT_0076b488 != 0) {
              (*DAT_00766630)(DAT_0076b488);
            }
            iVar2 = (*DAT_00766608._4_4_)(iVar1);
            DAT_0076b360 = DAT_0076b360 - iVar2;
            if (DAT_0076b388 < DAT_0076b360) {
              DAT_0076b388 = DAT_0076b360;
            }
            DAT_0076b384 = DAT_0076b384 + -1;
            if (DAT_0076b3ac < DAT_0076b384) {
              DAT_0076b3ac = DAT_0076b384;
            }
            (*DAT_00766604)(iVar1);
            if (DAT_0076b488 != 0) {
              (*DAT_00766638)(DAT_0076b488);
            }
          }
        }
        iVar3 = iVar3 + 1;
        *(undefined4 *)(*(int *)(param_1 + 0x20) + -4 + iVar3 * 4) = 0;
      } while (iVar3 < *(int *)(param_1 + 0x18));
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0057e139. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 4) + 0x40))();
  return;
}


/* FUN_0057e140 @ 0057e140  kind=gamemisc  attributed-by=caller-vote  size=275 */

int FUN_0057e140(int param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  void *_Dst;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 < *(int *)(param_1 + 0x18)) {
LAB_0057e1ae:
    iVar3 = param_2 * 4;
    piVar1 = (int *)(*(int *)(param_1 + 0x20) + param_2 * 4);
    if (*piVar1 == 0) {
      if (*(char *)(param_1 + 0x2b) == '\x02') {
        _Dst = (void *)FUN_0055da00(0x8000);
        if (_Dst != (void *)0x0) {
          memset(_Dst,0,0x8000);
        }
        *(void **)(iVar3 + *(int *)(param_1 + 0x20)) = _Dst;
        if (*(int *)(iVar3 + *(int *)(param_1 + 0x20)) == 0) {
          iVar4 = 7;
        }
      }
      else {
        iVar4 = (**(code **)(**(int **)(param_1 + 4) + 0x34))
                          (*(int **)(param_1 + 4),param_2,0x8000,*(undefined1 *)(param_1 + 0x2c),
                           piVar1);
        if (iVar4 == 8) {
          *(byte *)(param_1 + 0x2e) = *(byte *)(param_1 + 0x2e) | 2;
          iVar4 = 0;
        }
      }
    }
    *param_3 = *(undefined4 *)(iVar3 + *(int *)(param_1 + 0x20));
    return iVar4;
  }
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  iVar3 = FUN_00579f80();
  if (iVar3 == 0) {
    iVar3 = FUN_00563800(uVar2,param_2 * 4 + 4);
    if (iVar3 != 0) {
      memset((void *)(iVar3 + *(int *)(param_1 + 0x18) * 4),0,
             (param_2 - *(int *)(param_1 + 0x18)) * 4 + 4);
      *(int *)(param_1 + 0x20) = iVar3;
      *(int *)(param_1 + 0x18) = param_2 + 1;
      goto LAB_0057e1ae;
    }
  }
  *param_3 = 0;
  return 7;
}


/* FUN_0057e260 @ 0057e260  kind=gamemisc  attributed-by=caller-vote  size=319 */

int FUN_0057e260(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int local_8;
  
  iVar1 = FUN_0057e140(param_1,0,&local_8);
  if (iVar1 != 0) {
    return iVar1;
  }
  if (local_8 == 0) {
    iVar1 = 1;
  }
  else {
    iVar1 = FUN_0057e710(param_1,param_2);
    iVar2 = 0;
    if (iVar1 == 0) goto LAB_0057e36f;
  }
  if ((*(byte *)(param_1 + 0x2e) & 2) == 0) {
    if ((*(char *)(param_1 + 0x2b) != '\0') ||
       (iVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x38))(*(int **)(param_1 + 4),0,1,10),
       iVar2 == 0)) {
      *(undefined1 *)(param_1 + 0x2c) = 1;
      iVar2 = FUN_0057e140(param_1,0,&local_8);
      if ((iVar2 == 0) && (iVar1 = FUN_0057e710(param_1,param_2), iVar1 != 0)) {
        iVar2 = FUN_0057e3a0(param_1);
        *param_2 = 1;
      }
      *(undefined1 *)(param_1 + 0x2c) = 0;
      if (*(char *)(param_1 + 0x2b) == '\0') {
        (**(code **)(**(int **)(param_1 + 4) + 0x38))(*(int **)(param_1 + 4),0,1,9);
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x2b) == '\0') {
      iVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x38))(*(int **)(param_1 + 4),0,1,6);
      if (iVar2 != 0) goto LAB_0057e36b;
      if (*(char *)(param_1 + 0x2b) == '\0') {
        (**(code **)(**(int **)(param_1 + 4) + 0x38))(*(int **)(param_1 + 4),0,1,5);
      }
    }
    iVar2 = 0x108;
  }
LAB_0057e36b:
  if (iVar1 != 0) {
    return iVar2;
  }
LAB_0057e36f:
  if (*(int *)(param_1 + 0x34) != 0x2de218) {
    FUN_00525a30(0xe,"cannot open file at line %d of [%.10s]",0xb4c9,
                 "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
    iVar2 = 0xe;
  }
  return iVar2;
}


/* FUN_0057e3a0 @ 0057e3a0  kind=gamemisc  attributed-by=caller-vote  size=872 */

void FUN_0057e3a0(int param_1)

{
  uint uVar1;
  undefined3 uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  int local_5c;
  int local_58;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  uint local_40;
  int local_3c;
  uint local_38;
  int local_34;
  uint local_30;
  int local_2c;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  undefined1 local_24 [4];
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10 [4];
  undefined1 local_c [4];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar7 = *(byte *)(param_1 + 0x2d) + 1;
  local_58 = 8 - iVar7;
  local_4c = 0;
  local_48 = 0;
  if ((*(char *)(param_1 + 0x2b) == '\0') &&
     (iVar3 = (**(code **)(**(int **)(param_1 + 4) + 0x38))
                        (*(int **)(param_1 + 4),iVar7,local_58,10), iVar3 != 0)) goto LAB_0057e6f1;
  memset((void *)(param_1 + 0x34),0,0x30);
  iVar3 = (**(code **)(**(int **)(param_1 + 8) + 0x18))(*(int **)(param_1 + 8),&local_40);
  if (iVar3 == 0) {
    if ((-1 < local_3c) && ((0 < local_3c || (0x20 < local_40)))) {
      iVar3 = (**(code **)(**(int **)(param_1 + 8) + 8))(*(int **)(param_1 + 8),&local_28,0x20,0,0);
      if (iVar3 != 0) goto LAB_0057e6d3;
      uVar2 = CONCAT21(CONCAT11(local_28,local_27),local_26);
      uVar8 = CONCAT31(CONCAT21(CONCAT11(local_20,local_1f),local_1e),local_1d);
      if ((((CONCAT31(uVar2,local_25) & 0xfffffffe) == 0x377f0682) && ((uVar8 & uVar8 - 1) == 0)) &&
         (uVar8 - 0x200 < 0xfe01)) {
        local_30 = CONCAT31(uVar2,local_25) & 0xffffff01;
        *(char *)(param_1 + 0x41) = (char)local_30;
        *(uint *)(param_1 + 0x24) = uVar8;
        uVar4 = FUN_00559fd0(local_1c);
        *(undefined4 *)(param_1 + 0x68) = uVar4;
        *(undefined4 *)(param_1 + 0x54) = local_18;
        *(undefined4 *)(param_1 + 0x58) = local_14;
        FUN_0057dc30((char)local_30 == '\0',&local_28,0x18,0,param_1 + 0x4c);
        iVar3 = FUN_00559fd0(local_10);
        if ((*(int *)(param_1 + 0x4c) == iVar3) &&
           (iVar3 = FUN_00559fd0(local_c), *(int *)(param_1 + 0x50) == iVar3)) {
          iVar3 = FUN_00559fd0(local_24);
          if (iVar3 == 0x2de218) {
            iVar3 = FUN_00579f80();
            if ((iVar3 != 0) || (local_34 = FUN_0055da00(uVar8 + 0x18), local_34 == 0))
            goto LAB_0057e6d3;
            local_54 = local_34 + 0x18;
            uVar1 = uVar8 + 0x18;
            local_30 = (int)uVar1 >> 0x1f;
            iVar6 = local_30 + (0xffffffdf < uVar1);
            local_2c = 0;
            local_38 = 0x20;
            local_44 = 0;
            iVar3 = 0;
            if ((iVar6 <= local_3c) && ((iVar6 < local_3c || (uVar8 + 0x38 <= local_40)))) {
              while( true ) {
                local_2c = local_2c + 1;
                iVar3 = FUN_0055ea00(*(undefined4 *)(param_1 + 8),local_34,uVar8 + 0x18,local_38,
                                     local_44);
                if ((iVar3 != 0) ||
                   ((iVar6 = FUN_0057dda0(param_1,&local_50,&local_5c,local_54,local_34), iVar6 == 0
                    || (iVar3 = FUN_0057df70(param_1,local_2c,local_50), iVar3 != 0)))) break;
                if (local_5c != 0) {
                  *(int *)(param_1 + 0x44) = local_2c;
                  *(int *)(param_1 + 0x48) = local_5c;
                  *(ushort *)(param_1 + 0x42) = CONCAT11(local_20,local_1f) | (ushort)uVar8 & 0xff00
                  ;
                  local_4c = *(undefined4 *)(param_1 + 0x4c);
                  local_48 = *(undefined4 *)(param_1 + 0x50);
                }
                bVar9 = CARRY4(local_38,uVar1);
                local_38 = local_38 + uVar1;
                local_44 = local_44 + local_30 + (uint)bVar9;
                iVar6 = local_30 + local_44 + (uint)CARRY4(uVar1,local_38);
                if ((local_3c <= iVar6) && ((local_3c < iVar6 || (local_40 < uVar1 + local_38))))
                break;
              }
            }
            FUN_00524410(local_34);
          }
          else {
            iVar3 = FUN_0054f780(0xb164);
          }
          if (iVar3 != 0) goto LAB_0057e6d3;
        }
      }
    }
    *(undefined4 *)(param_1 + 0x4c) = local_4c;
    *(undefined4 *)(param_1 + 0x50) = local_48;
    FUN_0057e910(param_1);
    iVar3 = **(int **)(param_1 + 0x20);
    iVar6 = 4;
    *(undefined4 *)(iVar3 + 0x60) = 0;
    *(undefined4 *)(iVar3 + 100) = 0;
    piVar5 = (int *)(iVar3 + 0x68);
    do {
      *piVar5 = -1;
      piVar5 = piVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    if (*(int *)(param_1 + 0x44) != 0) {
      *(int *)(iVar3 + 0x68) = *(int *)(param_1 + 0x44);
    }
    if (*(int *)(param_1 + 0x48) != 0) {
      FUN_00525a30(0,"Recovered %d frames from WAL file %s",*(int *)(param_1 + 0x48),
                   *(undefined4 *)(param_1 + 100));
    }
  }
LAB_0057e6d3:
  if (*(char *)(param_1 + 0x2b) == '\0') {
    (**(code **)(**(int **)(param_1 + 4) + 0x38))(*(int **)(param_1 + 4),iVar7,local_58,9);
  }
LAB_0057e6f1:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0057e710 @ 0057e710  kind=gamemisc  attributed-by=caller-vote  size=496 */

void FUN_0057e710(int param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  puVar7 = (undefined8 *)**(undefined4 **)(param_1 + 0x20);
  uVar1 = *puVar7;
  uVar2 = puVar7[1];
  uVar3 = puVar7[2];
  uVar4 = puVar7[3];
  uVar5 = puVar7[4];
  uVar6 = puVar7[5];
  local_38 = uVar1;
  local_30 = uVar2;
  local_28 = uVar3;
  local_20 = uVar4;
  local_18 = uVar5;
  local_10 = uVar6;
  if (*(char *)(param_1 + 0x2b) != '\x02') {
    (**(code **)(**(int **)(param_1 + 4) + 0x3c))(*(int **)(param_1 + 4));
  }
  local_68 = puVar7[6];
  local_60 = puVar7[7];
  local_58 = puVar7[8];
  local_50 = puVar7[9];
  local_48 = puVar7[10];
  local_40 = puVar7[0xb];
  piVar8 = (int *)&local_38;
  piVar10 = (int *)&local_68;
  uVar11 = 0x2c;
  do {
    if (*piVar8 != *piVar10) goto LAB_0057e8f5;
    piVar8 = piVar8 + 1;
    piVar10 = piVar10 + 1;
    bVar13 = 3 < uVar11;
    uVar11 = uVar11 - 4;
  } while (bVar13);
  if (local_30._4_1_ != '\0') {
    iVar12 = 0;
    piVar8 = (int *)&local_38;
    iVar9 = 0;
    do {
      iVar9 = iVar9 + *piVar8 + iVar12;
      iVar12 = iVar12 + piVar8[1] + iVar9;
      piVar8 = piVar8 + 2;
    } while (piVar8 < &local_10);
    if ((iVar9 == (int)local_10) && (iVar12 == local_10._4_4_)) {
      piVar8 = (int *)(param_1 + 0x34);
      piVar10 = (int *)&local_38;
      uVar11 = 0x2c;
      do {
        if (*piVar8 != *piVar10) {
          *param_2 = 1;
          *(undefined8 *)(param_1 + 0x34) = uVar1;
          *(undefined8 *)(param_1 + 0x3c) = uVar2;
          *(undefined8 *)(param_1 + 0x44) = uVar3;
          *(undefined8 *)(param_1 + 0x4c) = uVar4;
          *(undefined8 *)(param_1 + 0x54) = uVar5;
          *(undefined8 *)(param_1 + 0x5c) = uVar6;
          *(uint *)(param_1 + 0x24) =
               (*(ushort *)(param_1 + 0x42) & 1) * 0x10000 + (*(ushort *)(param_1 + 0x42) & 0xfe00);
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
        piVar8 = piVar8 + 1;
        piVar10 = piVar10 + 1;
        bVar13 = 3 < uVar11;
        uVar11 = uVar11 - 4;
      } while (bVar13);
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
LAB_0057e8f5:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0057e910 @ 0057e910  kind=gamemisc  attributed-by=caller-vote  size=215 */

void FUN_0057e910(int param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  puVar2 = (undefined8 *)**(undefined4 **)(param_1 + 0x20);
  *(undefined1 *)(param_1 + 0x40) = 1;
  *(undefined4 *)(param_1 + 0x34) = 0x2de218;
  piVar3 = (int *)(param_1 + 0x34);
  iVar4 = 0;
  iVar5 = 0;
  do {
    iVar5 = iVar5 + *piVar3 + iVar4;
    piVar1 = piVar3 + 1;
    piVar3 = piVar3 + 2;
    iVar4 = iVar4 + *piVar1 + iVar5;
  } while (piVar3 < (int *)(param_1 + 0x5cU));
  *(int *)(param_1 + 0x5c) = iVar5;
  *(int *)(param_1 + 0x60) = iVar4;
  puVar2[6] = *(undefined8 *)(param_1 + 0x34);
  puVar2[7] = *(undefined8 *)(param_1 + 0x3c);
  puVar2[8] = *(undefined8 *)(param_1 + 0x44);
  puVar2[9] = *(undefined8 *)(param_1 + 0x4c);
  puVar2[10] = *(undefined8 *)(param_1 + 0x54);
  puVar2[0xb] = *(undefined8 *)(param_1 + 0x5c);
  if (*(char *)(param_1 + 0x2b) != '\x02') {
    (**(code **)(**(int **)(param_1 + 4) + 0x3c))(*(int **)(param_1 + 4));
  }
  *puVar2 = *(undefined8 *)(param_1 + 0x34);
  puVar2[1] = *(undefined8 *)(param_1 + 0x3c);
  puVar2[2] = *(undefined8 *)(param_1 + 0x44);
  puVar2[3] = *(undefined8 *)(param_1 + 0x4c);
  puVar2[4] = *(undefined8 *)(param_1 + 0x54);
  puVar2[5] = *(undefined8 *)(param_1 + 0x5c);
  return;
}


/* FUN_0057e9f0 @ 0057e9f0  kind=gamemisc  attributed-by=caller-vote  size=397 */

int FUN_0057e9f0(int param_1,undefined4 *param_2)

{
  size_t _Size;
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_24;
  int local_14;
  int local_10;
  int local_c;
  void *local_8;
  
  uVar1 = *(uint *)(param_1 + 0x44);
  iVar7 = (uVar1 + 0x21 >> 0xc) + 1;
  iVar5 = 0;
  _Size = (uVar1 + iVar7 * 10) * 2 + 8;
  local_8 = (void *)FUN_005653d0(_Size);
  if (local_8 != (void *)0x0) {
    memset(local_8,0,_Size);
    uVar2 = uVar1;
    if (0x1000 < uVar1) {
      uVar2 = 0x1000;
    }
    *(int *)((int)local_8 + 4) = iVar7;
    iVar3 = FUN_005653d0(uVar2 * 2);
    if (iVar3 == 0) {
      iVar5 = 7;
    }
    iVar8 = param_1;
    for (iVar9 = 0; (iVar5 == 0 && (iVar9 < iVar7)); iVar9 = iVar9 + 1) {
      iVar5 = FUN_0057e140(param_1,iVar9,&local_14);
      if (iVar5 == 0) {
        local_24 = local_14 + 0x4000;
        if (iVar9 == 0) {
          local_10 = local_14 + 0x84;
          iVar8 = 0;
          local_14 = local_14 + 0x88;
        }
        else {
          local_10 = local_14 + -4;
          iVar8 = (iVar9 + -1) * 0x1000 + 0xfde;
        }
      }
      if (iVar5 == 0) {
        local_10 = local_10 + 4;
        if (iVar9 + 1 == iVar7) {
          local_c = uVar1 - iVar8;
        }
        else {
          local_c = local_24 - local_10 >> 2;
        }
        iVar4 = iVar8 + *(int *)((int)local_8 + 4) * 10;
        iVar8 = iVar8 + 1;
        iVar6 = (int)local_8 + iVar4 * 2 + 8;
        iVar4 = 0;
        if (0 < local_c) {
          do {
            *(short *)(iVar6 + iVar4 * 2) = (short)iVar4;
            iVar4 = iVar4 + 1;
          } while (iVar4 < local_c);
        }
        FUN_0057ed80(local_10,iVar3,iVar6,&local_c);
        *(int *)((int)local_8 + iVar9 * 0x14 + 0x14) = local_c;
        *(int *)((int)local_8 + iVar9 * 0x14 + 0xc) = iVar6;
        *(int *)((int)local_8 + iVar9 * 0x14 + 0x18) = iVar8;
        *(int *)((int)local_8 + iVar9 * 0x14 + 0x10) = local_10;
      }
    }
    FUN_005652a0(iVar3);
    if (iVar5 != 0) {
      FUN_005652a0(local_8);
    }
    *param_2 = local_8;
    return iVar5;
  }
  return 7;
}


/* FUN_0057eb80 @ 0057eb80  kind=gamemisc  attributed-by=caller-vote  size=155 */

bool FUN_0057eb80(uint *param_1,uint *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint local_8;
  
  uVar1 = *param_1;
  uVar4 = 0xffffffff;
  iVar5 = param_1[1] - 1;
  local_8 = 0xffffffff;
  if (-1 < iVar5) {
    puVar3 = param_1 + iVar5 * 5 + 2;
    do {
      if ((int)*puVar3 < (int)puVar3[3]) {
        do {
          uVar2 = *(uint *)(puVar3[2] + (uint)*(ushort *)(puVar3[1] + *puVar3 * 2) * 4);
          uVar4 = local_8;
          if (uVar1 < uVar2) {
            if (uVar2 < local_8) {
              *param_3 = (uint)*(ushort *)(puVar3[1] + *puVar3 * 2) + puVar3[4];
              uVar4 = uVar2;
              local_8 = uVar2;
            }
            break;
          }
          uVar2 = *puVar3 + 1;
          *puVar3 = uVar2;
        } while ((int)uVar2 < (int)puVar3[3]);
      }
      puVar3 = puVar3 + -5;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  *param_1 = uVar4;
  *param_2 = uVar4;
  return uVar4 == 0xffffffff;
}


/* FUN_0057ec20 @ 0057ec20  kind=gamemisc  attributed-by=caller-vote  size=122 */

void FUN_0057ec20(int param_1,uint param_2,int param_3)

{
  int iVar1;
  uint local_c;
  int local_8;
  
  if (DAT_0076b3bc != (code *)0x0) {
    (*DAT_0076b3bc)();
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x18))(*(int **)(param_1 + 8),&local_c);
  if (((iVar1 == 0) && (param_3 <= local_8)) && ((param_3 < local_8 || (param_2 < local_c)))) {
    iVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x10))(*(int **)(param_1 + 8),param_2,param_3);
  }
  if (DAT_0076b3c0 != (code *)0x0) {
    (*DAT_0076b3c0)();
  }
  if (iVar1 != 0) {
    FUN_00525a30(iVar1,"cannot limit WAL size: %s",*(undefined4 *)(param_1 + 100));
  }
  return;
}


/* FUN_0057ed80 @ 0057ed80  kind=gamemisc  attributed-by=caller-vote  size=534 */

void FUN_0057ed80(int param_1,void *param_2,void *param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  void *pvVar8;
  void *_Dst;
  uint uVar9;
  int local_90;
  uint local_88;
  uint local_80;
  void *local_78;
  uint local_74;
  uint local_70 [26];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  uVar1 = *param_4;
  local_74 = 0;
  local_78 = (void *)0x0;
  iVar6 = 0;
  memset(local_70,0,0x68);
  local_80 = 0;
  if ((int)uVar1 < 1) {
    uVar5 = 0;
  }
  else {
    do {
      iVar6 = 0;
      local_74 = 1;
      local_90 = 0;
      pvVar8 = param_3;
      _Dst = param_3;
      local_78 = param_3;
      if ((local_80 & 1) != 0) {
LAB_0057ee00:
        uVar5 = local_70[local_90 * 2];
        _Dst = (void *)local_70[local_90 * 2 + 1];
        iVar6 = 0;
        iVar7 = 0;
        local_88 = 0;
LAB_0057ee23:
        if (iVar7 < (int)local_74) {
          if (iVar6 < (int)uVar5) goto LAB_0057ee9c;
LAB_0057eec7:
          iVar7 = iVar7 + 1;
          uVar4 = *(ushort *)((int)local_78 + iVar7 * 2 + -2);
        }
        else {
          if ((int)uVar5 <= iVar6) goto code_r0x0057ee2b;
LAB_0057ee9c:
          if (iVar7 < (int)local_74) {
            if (*(uint *)(param_1 + (uint)*(ushort *)((int)pvVar8 + iVar7 * 2) * 4) <=
                *(uint *)(param_1 + (uint)*(ushort *)((int)_Dst + iVar6 * 2) * 4))
            goto LAB_0057eec7;
            uVar4 = *(ushort *)((int)_Dst + iVar6 * 2);
            iVar6 = iVar6 + 1;
          }
          else {
            uVar4 = *(ushort *)((int)_Dst + iVar6 * 2);
            iVar6 = iVar6 + 1;
          }
        }
        iVar2 = *(int *)(param_1 + (uint)uVar4 * 4);
        local_88 = local_88 + 1;
        *(ushort *)((int)param_2 + local_88 * 2 + -2) = uVar4;
        pvVar8 = local_78;
        if ((iVar6 < (int)uVar5) &&
           (*(int *)(param_1 + (uint)*(ushort *)((int)_Dst + iVar6 * 2) * 4) == iVar2)) {
          iVar6 = iVar6 + 1;
        }
        goto LAB_0057ee23;
      }
LAB_0057ee73:
      local_80 = local_80 + 1;
      param_3 = (void *)((int)param_3 + 2);
      local_70[iVar6 * 2 + 1] = (uint)_Dst;
      local_70[iVar6 * 2] = local_74;
      uVar5 = local_74;
    } while ((int)local_80 < (int)uVar1);
  }
  iVar6 = iVar6 + 1;
  bVar3 = (byte)iVar6 & 0x1f;
  uVar9 = 1 << bVar3 | 1U >> 0x20 - bVar3;
  if (0xc < iVar6) {
    *param_4 = uVar5;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  do {
    if ((uVar1 & uVar9) != 0) {
      FUN_0057eca0(param_1,local_70[iVar6 * 2 + 1],local_70[iVar6 * 2],&local_78,&local_74,param_2);
    }
    uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0xd);
  *param_4 = local_74;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
code_r0x0057ee2b:
  local_74 = local_88;
  local_78 = _Dst;
  memcpy(_Dst,param_2,local_88 * 2);
  iVar6 = local_90 + 1;
  pvVar8 = _Dst;
  local_90 = iVar6;
  if ((local_80 & 1 << ((byte)iVar6 & 0x1f)) == 0) goto LAB_0057ee73;
  goto LAB_0057ee00;
}


/* FUN_0057efa0 @ 0057efa0  kind=gamemisc  attributed-by=caller-vote  size=388 */

void FUN_0057efa0(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined1 local_10 [4];
  int *local_c;
  undefined4 local_8;
  
  iVar1 = param_1;
  if (*(short *)(param_1 + 0x28) != 0) {
    return;
  }
  local_c = (int *)(**(int **)(param_1 + 0x20) + 0x60);
  if (*local_c != 0) {
    iVar6 = 4;
    puVar5 = &local_8;
    if (DAT_007665e4 == 0) {
      param_1 = 0;
    }
    else {
      param_1 = (*DAT_00766628)(5);
      if (param_1 != 0) {
        (*DAT_00766630)(param_1);
      }
    }
    do {
      uVar2 = FUN_00544c20();
      *(undefined1 *)puVar5 = uVar2;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    if (param_1 != 0) {
      (*DAT_00766638)(param_1);
    }
    if ((*(char *)(iVar1 + 0x2b) == '\0') &&
       (iVar6 = (**(code **)(**(int **)(iVar1 + 4) + 0x38))(*(int **)(iVar1 + 4),4,4,10), iVar6 != 0
       )) {
      if (iVar6 != 5) {
        return;
      }
    }
    else {
      *(int *)(iVar1 + 0x68) = *(int *)(iVar1 + 0x68) + 1;
      *(undefined4 *)(iVar1 + 0x44) = 0;
      iVar6 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar1 + 0x54),*(undefined1 *)(iVar1 + 0x55)
                                        ),*(undefined1 *)(iVar1 + 0x56)),
                       *(undefined1 *)(iVar1 + 0x57)) + 1;
      *(char *)(iVar1 + 0x54) = (char)((uint)iVar6 >> 0x18);
      *(char *)(iVar1 + 0x55) = (char)((uint)iVar6 >> 0x10);
      *(char *)(iVar1 + 0x56) = (char)((uint)iVar6 >> 8);
      *(char *)(iVar1 + 0x57) = (char)iVar6;
      *(undefined4 *)(iVar1 + 0x58) = local_8;
      FUN_0057e910(iVar1);
      *local_c = 0;
      local_c[2] = 0;
      piVar3 = local_c + 3;
      iVar6 = 3;
      do {
        *piVar3 = -1;
        piVar3 = piVar3 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      if (*(char *)(iVar1 + 0x2b) != '\0') goto LAB_0057f0ff;
      (**(code **)(**(int **)(iVar1 + 4) + 0x38))(*(int **)(iVar1 + 4),4,4,9);
    }
  }
  if (*(char *)(iVar1 + 0x2b) == '\0') {
    (**(code **)(**(int **)(iVar1 + 4) + 0x38))(*(int **)(iVar1 + 4),3,1,5);
  }
LAB_0057f0ff:
  *(undefined2 *)(iVar1 + 0x28) = 0xffff;
  iVar6 = 0;
  do {
    iVar6 = iVar6 + 1;
    iVar4 = FUN_0057f130(iVar1,local_10,1,iVar6);
  } while (iVar4 == -1);
  return;
}


/* FUN_0057f130 @ 0057f130  kind=gamemisc  attributed-by=caller-vote  size=711 */

int FUN_0057f130(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  uint local_8;
  
  if (5 < param_4) {
    iVar2 = 1;
    if (100 < param_4) {
      return 0xf;
    }
    if (9 < param_4) {
      iVar2 = (param_4 + -9) * 0xee;
    }
    (**(code **)(*param_1 + 0x3c))(*param_1,iVar2);
  }
  if (param_3 == 0) {
    iVar2 = FUN_0057e260(param_1,param_2);
    if (iVar2 == 5) {
      if (*(int *)param_1[8] == 0) {
        return -1;
      }
      if ((*(char *)((int)param_1 + 0x2b) != '\0') ||
         (iVar2 = (**(code **)(*(int *)param_1[1] + 0x38))((int *)param_1[1],2,1,6), iVar2 == 0)) {
        FUN_0057f400(param_1,2);
        return -1;
      }
      if (iVar2 == 5) {
        return 0x105;
      }
    }
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  iVar6 = 0;
  iVar2 = *(int *)param_1[8];
  if ((param_3 == 0) && (*(int *)(iVar2 + 0x60) == param_1[0x11])) {
    if (*(char *)((int)param_1 + 0x2b) == '\0') {
      iVar6 = (**(code **)(*(int *)param_1[1] + 0x38))((int *)param_1[1],3,1,6);
    }
    else {
      iVar6 = 0;
    }
    if (*(char *)((int)param_1 + 0x2b) != '\x02') {
      (**(code **)(*(int *)param_1[1] + 0x3c))((int *)param_1[1]);
    }
    if (iVar6 == 0) {
      piVar5 = param_1 + 0xd;
      piVar3 = *(int **)param_1[8];
      uVar7 = 0x2c;
      do {
        if (*piVar3 != *piVar5) {
          FUN_0057f400(param_1,3);
          return -1;
        }
        piVar3 = piVar3 + 1;
        piVar5 = piVar5 + 1;
        bVar8 = 3 < uVar7;
        uVar7 = uVar7 - 4;
      } while (bVar8);
      *(undefined2 *)(param_1 + 10) = 0;
      return 0;
    }
    if (iVar6 != 5) {
      return iVar6;
    }
  }
  local_8 = 0;
  param_4 = 0;
  iVar1 = 1;
  puVar4 = (uint *)(iVar2 + 0x68);
  do {
    uVar7 = *puVar4;
    if ((local_8 <= uVar7) && (uVar7 <= (uint)param_1[0x11])) {
      local_8 = uVar7;
      param_4 = iVar1;
    }
    iVar1 = iVar1 + 1;
    puVar4 = puVar4 + 1;
  } while (iVar1 < 5);
  if ((*(byte *)((int)param_1 + 0x2e) & 2) == 0) {
    if (((uint)param_1[0x11] <= local_8) && (param_4 != 0)) goto LAB_0057f351;
    iVar1 = 1;
    do {
      if (*(char *)((int)param_1 + 0x2b) != '\0') {
        iVar6 = 0;
LAB_0057f304:
        local_8 = param_1[0x11];
        *(uint *)(iVar2 + 100 + iVar1 * 4) = local_8;
        param_4 = iVar1;
        if (*(char *)((int)param_1 + 0x2b) == '\0') {
          (**(code **)(*(int *)param_1[1] + 0x38))((int *)param_1[1],iVar1 + 3,1,9);
        }
        break;
      }
      iVar6 = (**(code **)(*(int *)param_1[1] + 0x38))((int *)param_1[1],iVar1 + 3,1,10);
      if (iVar6 == 0) goto LAB_0057f304;
      if (iVar6 != 5) {
        return iVar6;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 5);
  }
  if (param_4 == 0) {
    iVar2 = 0x208;
    if (iVar6 == 5) {
      iVar2 = -1;
    }
    return iVar2;
  }
LAB_0057f351:
  if ((*(char *)((int)param_1 + 0x2b) == '\0') &&
     (iVar6 = (**(code **)(*(int *)param_1[1] + 0x38))((int *)param_1[1],param_4 + 3,1,6),
     iVar6 != 0)) {
    if (iVar6 == 5) {
      iVar6 = -1;
    }
    return iVar6;
  }
  if (*(char *)((int)param_1 + 0x2b) != '\x02') {
    (**(code **)(*(int *)param_1[1] + 0x3c))((int *)param_1[1]);
  }
  if (*(uint *)(iVar2 + 100 + param_4 * 4) == local_8) {
    piVar5 = param_1 + 0xd;
    piVar3 = *(int **)param_1[8];
    uVar7 = 0x2c;
    while (*piVar3 == *piVar5) {
      piVar3 = piVar3 + 1;
      piVar5 = piVar5 + 1;
      bVar8 = uVar7 < 4;
      uVar7 = uVar7 - 4;
      if (bVar8) {
        *(short *)(param_1 + 10) = (short)param_4;
        return 0;
      }
    }
  }
  if (*(char *)((int)param_1 + 0x2b) == '\0') {
    (**(code **)(*(int *)param_1[1] + 0x38))((int *)param_1[1],param_4 + 3,1,5);
  }
  return -1;
}


/* FUN_0057f400 @ 0057f400  kind=gamemisc  attributed-by=caller-vote  size=35 */

void FUN_0057f400(int param_1,undefined4 param_2)

{
  if (*(char *)(param_1 + 0x2b) == '\0') {
    (**(code **)(**(int **)(param_1 + 4) + 0x38))(*(int **)(param_1 + 4),param_2,1,5);
  }
  return;
}


/* FUN_0057f430 @ 0057f430  kind=gamemisc  attributed-by=caller-vote  size=171 */

void FUN_0057f430(int param_1,int param_2,uint param_3,uint param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  iVar1 = param_1;
  param_1 = param_5;
  if ((param_5 <= *(int *)(iVar1 + 0xc)) &&
     ((param_5 < *(int *)(iVar1 + 0xc) || (param_4 < *(uint *)(iVar1 + 8))))) {
    iVar3 = ((int)param_3 >> 0x1f) + param_5 + (uint)CARRY4(param_3,param_4);
    if ((*(int *)(iVar1 + 0xc) <= iVar3) &&
       ((*(int *)(iVar1 + 0xc) < iVar3 || (*(uint *)(iVar1 + 8) <= param_3 + param_4)))) {
      uVar2 = *(int *)(iVar1 + 8) - param_4;
      iVar3 = (**(code **)(**(int **)(iVar1 + 4) + 0xc))
                        (*(int **)(iVar1 + 4),param_2,uVar2,param_4,param_5);
      if (iVar3 != 0) {
        return;
      }
      bVar4 = CARRY4(param_4,uVar2);
      param_4 = param_4 + uVar2;
      param_1 = param_5 + ((int)uVar2 >> 0x1f) + (uint)bVar4;
      param_2 = param_2 + uVar2;
      param_3 = param_3 - uVar2;
      iVar3 = (**(code **)(**(int **)(iVar1 + 4) + 0x14))
                        (*(int **)(iVar1 + 4),*(undefined4 *)(iVar1 + 0x10));
      if (param_3 == 0) {
        return;
      }
      if (iVar3 != 0) {
        return;
      }
    }
  }
  (**(code **)(**(int **)(iVar1 + 4) + 0xc))(*(int **)(iVar1 + 4),param_2,param_3,param_4,param_1);
  return;
}


/* FUN_0057f6d0 @ 0057f6d0  kind=gamemisc  attributed-by=caller-vote  size=158 */

void FUN_0057f6d0(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  
  if (param_2 != 0) {
    iVar2 = 0;
    if (0 < *(int *)(param_2 + 0x1c)) {
      puVar3 = (uint *)(param_2 + 0x38);
      do {
        uVar1 = puVar3[0x14];
        if (uVar1 != 0) {
          if (*(int *)(uVar1 + 0x1c) != 0) {
            FUN_00524410(*(undefined4 *)(uVar1 + 0x18));
          }
          FUN_005521a0(param_1,uVar1);
        }
        if (((*puVar3 & 0x20000000) != 0) && (uVar1 = puVar3[4], uVar1 != 0)) {
          FUN_005521a0(param_1,*(undefined4 *)(uVar1 + 0x10));
          FUN_005521a0(param_1,uVar1);
        }
        iVar2 = iVar2 + 1;
        puVar3 = puVar3 + 0x16;
      } while (iVar2 < *(int *)(param_2 + 0x1c));
    }
    FUN_0057f4e0(*(undefined4 *)(param_2 + 0x20));
    FUN_005521a0(param_1,param_2);
  }
  return;
}


/* FUN_0057f770 @ 0057f770  kind=gamemisc  attributed-by=caller-vote  size=74 */

void FUN_0057f770(int param_1,byte *param_2,uint param_3)

{
  *(char *)(param_1 + 0x14) = (char)param_3;
  if (param_2 != (byte *)0x0) {
    while (*param_2 == param_3) {
      FUN_0057f770(param_1,*(undefined4 *)(param_2 + 8),param_3);
      param_2 = *(byte **)(param_2 + 0xc);
      *(char *)(param_1 + 0x14) = (char)param_3;
      if (param_2 == (byte *)0x0) {
        return;
      }
    }
    FUN_0057f560(param_1,param_2,0);
  }
  return;
}


/* FUN_00580010 @ 00580010  kind=gamemisc  attributed-by=caller-vote  size=61 */

void FUN_00580010(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = param_4;
  uVar1 = (uint)param_4 >> 0x18;
  uVar2 = (uint)param_4 >> 0x10;
  param_4 = CONCAT13((char)uVar3,
                     CONCAT12((char)((uint)uVar3 >> 8),CONCAT11((char)uVar2,(char)uVar1)));
  (**(code **)(*param_1 + 0xc))(param_1,&param_4,4,param_2,param_3);
  return;
}


/* FUN_00580050 @ 00580050  kind=gamemisc  attributed-by=caller-vote  size=526 */

int FUN_00580050(uint param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  int iVar11;
  longlong lVar12;
  undefined8 uVar13;
  int local_8;
  
  iVar4 = param_1;
  puVar2 = *(undefined8 **)(param_1 + 0xb0);
  uVar7 = *(uint *)(param_1 + 0x80);
  if (*(uint *)(param_1 + 0x7c) < *(uint *)(param_1 + 0x80)) {
    uVar7 = *(uint *)(param_1 + 0x7c);
  }
  iVar9 = 0;
  if (0 < *(int *)(param_1 + 0x60)) {
    iVar11 = 0;
    do {
      iVar8 = *(int *)(param_1 + 0x5c) + iVar11;
      if (*(int *)(iVar8 + 8) == 0 && *(int *)(iVar8 + 0xc) == 0) {
        *(undefined4 *)(iVar8 + 8) = *(undefined4 *)(param_1 + 0x48);
        *(undefined4 *)(iVar8 + 0xc) = *(undefined4 *)(param_1 + 0x4c);
      }
      iVar9 = iVar9 + 1;
      iVar11 = iVar11 + 0x30;
    } while (iVar9 < *(int *)(param_1 + 0x60));
  }
  iVar9 = *(int *)(param_1 + 0x48);
  if (iVar9 == 0 && *(int *)(param_1 + 0x4c) == 0) {
    uVar13 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0x7c);
    lVar12 = __alldiv(iVar9 + -1,*(int *)(param_1 + 0x4c) - (uint)(iVar9 == 0),uVar3,0);
    uVar13 = __allmul(lVar12 + 1,uVar3,0);
  }
  *(undefined8 *)(param_1 + 0x48) = uVar13;
  *(undefined8 *)(param_1 + 0x50) = uVar13;
  if (((*(char *)(param_1 + 7) == '\0') && (*(char *)(param_1 + 5) != '\x04')) &&
     (uVar6 = (**(code **)(**(int **)(param_1 + 0x3c) + 0x30))(*(int **)(param_1 + 0x3c)),
     (uVar6 & 0x200) == 0)) {
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 1) = 0;
  }
  else {
    *(undefined4 *)puVar2 = 0xf905d5d9;
    *(undefined4 *)((int)puVar2 + 4) = 0xd763a120;
    *(undefined4 *)(puVar2 + 1) = 0xffffffff;
  }
  puVar10 = (undefined1 *)(param_1 + 0x30);
  iVar9 = 4;
  if (DAT_007665e4 == 0) {
    local_8 = 0;
  }
  else {
    local_8 = (*DAT_00766628)(5);
    if (local_8 != 0) {
      (*DAT_00766630)(local_8);
    }
  }
  do {
    uVar5 = FUN_00544c20();
    *puVar10 = uVar5;
    puVar10 = puVar10 + 1;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  if (local_8 != 0) {
    (*DAT_00766638)(local_8);
  }
  uVar3 = *(undefined4 *)(param_1 + 0x30);
  *(char *)((int)puVar2 + 0xc) = (char)((uint)uVar3 >> 0x18);
  *(char *)((int)puVar2 + 0xf) = (char)uVar3;
  *(char *)((int)puVar2 + 0xd) = (char)((uint)uVar3 >> 0x10);
  *(char *)((int)puVar2 + 0xe) = (char)((uint)uVar3 >> 8);
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  *(char *)(puVar2 + 2) = (char)((uint)uVar3 >> 0x18);
  *(char *)((int)puVar2 + 0x11) = (char)((uint)uVar3 >> 0x10);
  *(char *)((int)puVar2 + 0x13) = (char)uVar3;
  *(char *)((int)puVar2 + 0x12) = (char)((uint)uVar3 >> 8);
  uVar3 = *(undefined4 *)(param_1 + 0x7c);
  *(char *)((int)puVar2 + 0x14) = (char)((uint)uVar3 >> 0x18);
  *(char *)((int)puVar2 + 0x15) = (char)((uint)uVar3 >> 0x10);
  *(char *)((int)puVar2 + 0x16) = (char)((uint)uVar3 >> 8);
  *(char *)((int)puVar2 + 0x17) = (char)uVar3;
  uVar3 = *(undefined4 *)(param_1 + 0x80);
  *(char *)(puVar2 + 3) = (char)((uint)uVar3 >> 0x18);
  *(char *)((int)puVar2 + 0x19) = (char)((uint)uVar3 >> 0x10);
  *(char *)((int)puVar2 + 0x1a) = (char)((uint)uVar3 >> 8);
  *(char *)((int)puVar2 + 0x1b) = (char)uVar3;
  memset((void *)((int)puVar2 + 0x1c),0,uVar7 - 0x1c);
  param_1 = 0;
  do {
    if (*(uint *)(iVar4 + 0x7c) <= param_1) {
      return 0;
    }
    iVar9 = (**(code **)(**(int **)(iVar4 + 0x40) + 0xc))
                      (*(int **)(iVar4 + 0x40),puVar2,uVar7,*(undefined4 *)(iVar4 + 0x48),
                       *(undefined4 *)(iVar4 + 0x4c));
    puVar1 = (uint *)(iVar4 + 0x48);
    uVar6 = *puVar1;
    *puVar1 = *puVar1 + uVar7;
    *(int *)(iVar4 + 0x4c) = *(int *)(iVar4 + 0x4c) + (uint)CARRY4(uVar6,uVar7);
    param_1 = param_1 + uVar7;
  } while (iVar9 == 0);
  return iVar9;
}


/* FUN_00580270 @ 00580270  kind=gamemisc  attributed-by=caller-vote  size=422 */

int FUN_00580270(int param_1,char *param_2)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  undefined8 uVar8;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  
  iVar4 = 0;
  local_14 = 0;
  if (((param_2 != (char *)0x0) && (*(char *)(param_1 + 5) != '\x04')) &&
     (*(char *)(param_1 + 5) != '\x02')) {
    *(undefined1 *)(param_1 + 0x12) = 1;
    cVar3 = *param_2;
    uVar6 = 0;
    if (cVar3 != '\0') {
      uVar6 = 0;
      do {
        uVar6 = uVar6 + 1;
        iVar4 = iVar4 + cVar3;
        cVar3 = param_2[uVar6];
        local_14 = iVar4;
      } while (cVar3 != '\0');
    }
    if (*(char *)(param_1 + 8) != '\0') {
      uVar8 = FUN_0053cc30(param_1);
      *(undefined8 *)(param_1 + 0x48) = uVar8;
    }
    local_c = *(uint *)(param_1 + 0x48);
    local_10 = *(int *)(param_1 + 0x4c);
    iVar4 = DAT_007666d0 / *(int *)(param_1 + 0x80) + 1;
    local_8 = (undefined1)((uint)iVar4 >> 0x18);
    local_7 = (undefined1)((uint)iVar4 >> 0x10);
    local_6 = (undefined1)((uint)iVar4 >> 8);
    local_5 = (undefined1)iVar4;
    iVar4 = (**(code **)(**(int **)(param_1 + 0x40) + 0xc))
                      (*(int **)(param_1 + 0x40),&local_8,4,local_c,local_10);
    if ((iVar4 == 0) &&
       (iVar4 = (**(code **)(**(int **)(param_1 + 0x40) + 0xc))
                          (*(int **)(param_1 + 0x40),param_2,uVar6,local_c + 4,
                           local_10 + (uint)(0xfffffffb < local_c)), iVar4 == 0)) {
      bVar7 = CARRY4(uVar6,local_c);
      local_c = uVar6 + local_c;
      iVar5 = ((int)uVar6 >> 0x1f) + local_10 + (uint)bVar7;
      iVar4 = FUN_00580010(*(undefined4 *)(param_1 + 0x40),local_c + 4,
                           iVar5 + (uint)(0xfffffffb < local_c),uVar6);
      uVar2 = local_c;
      if ((iVar4 == 0) &&
         ((iVar4 = FUN_00580010(*(undefined4 *)(param_1 + 0x40),local_c + 8,
                                iVar5 + (uint)(0xfffffff7 < local_c),local_14), iVar4 == 0 &&
          (iVar4 = (**(code **)(**(int **)(param_1 + 0x40) + 0xc))
                             (*(int **)(param_1 + 0x40),&DAT_007131b8,8,uVar2 + 0xc,
                              iVar5 + (uint)(0xfffffff3 < uVar2)), iVar4 == 0)))) {
        uVar6 = uVar6 + 0x14;
        puVar1 = (uint *)(param_1 + 0x48);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 + uVar6;
        *(int *)(param_1 + 0x4c) =
             *(int *)(param_1 + 0x4c) + ((int)uVar6 >> 0x1f) + (uint)CARRY4(uVar2,uVar6);
        iVar4 = (**(code **)(**(int **)(param_1 + 0x40) + 0x18))
                          (*(int **)(param_1 + 0x40),&local_1c);
        if (iVar4 == 0) {
          iVar5 = *(int *)(param_1 + 0x4c);
          if ((iVar5 <= local_18) && ((iVar5 < local_18 || (*(uint *)(param_1 + 0x48) < local_1c))))
          {
            iVar4 = FUN_0055ea20(*(undefined4 *)(param_1 + 0x40),*(uint *)(param_1 + 0x48),iVar5);
          }
        }
      }
    }
    return iVar4;
  }
  return 0;
}


/* FUN_005804f0 @ 005804f0  kind=gamemisc  attributed-by=caller-vote  size=1393 */

undefined4 FUN_005804f0(int *param_1,int *param_2,int *param_3,uint param_4,undefined4 param_5)

{
  int iVar1;
  short sVar2;
  short *psVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iVar17;
  undefined4 *puVar18;
  int iVar19;
  undefined4 *puVar20;
  undefined8 uVar21;
  int local_24;
  undefined4 local_14;
  
  bVar5 = false;
  if (param_3 == (int *)0x0) {
    return 0;
  }
  iVar6 = FUN_00568620(param_1,param_2);
  if ((iVar6 == 0) && ((*(byte *)((int)param_2 + 0x2a) & 0x10) == 0)) {
    if ((param_4 == 99) &&
       (((short)param_2[9] < 0 || (param_4 = (uint)*(byte *)((int)param_2 + 0x2b), param_4 == 99))))
    {
      param_4 = 2;
    }
    psVar3 = (short *)param_3[10];
    if (((((((*psVar3 == 1) && (*(int *)(psVar3 + 0xe) == 0)) && (param_3[0xb] == 0)) &&
          ((param_3[0xe] == 0 && (param_3[0xc] == 0)))) && (param_3[0x12] == 0)) &&
        (((param_3[0xf] == 0 && ((*(byte *)((int)param_3 + 6) & 1) == 0)) &&
         ((*(int *)*param_3 == 1 &&
          (((**(char **)((int *)*param_3)[2] == 'q' &&
            (piVar7 = (int *)FUN_0055d7d0(param_1,0,psVar3 + 4), piVar7 != (int *)0x0)) &&
           (piVar7 != param_2)))))))) &&
       ((((*(byte *)((int)piVar7 + 0x2a) & 0x10) == 0 && (piVar7[3] == 0)) &&
        ((sVar2 = *(short *)((int)param_2 + 0x26), sVar2 == *(short *)((int)piVar7 + 0x26) &&
         ((short)param_2[9] == (short)piVar7[9])))))) {
      iVar6 = 0;
      if (0 < sVar2) {
        puVar18 = (undefined4 *)(param_2[1] + 0x10);
        puVar20 = (undefined4 *)(piVar7[1] + 0x10);
        do {
          if (*(char *)((int)puVar18 + 5) != *(char *)((int)puVar20 + 5)) {
            return 0;
          }
          iVar8 = FUN_00580420(*puVar18,*puVar20);
          if (iVar8 == 0) {
            return 0;
          }
          if ((*(char *)(puVar18 + 1) != '\0') && (*(char *)(puVar20 + 1) == '\0')) {
            return 0;
          }
          iVar6 = iVar6 + 1;
          puVar18 = puVar18 + 6;
          puVar20 = puVar20 + 6;
        } while (iVar6 < sVar2);
      }
      iVar6 = param_2[2];
      if (iVar6 != 0) {
        iVar8 = piVar7[2];
        do {
          if (*(char *)(iVar6 + 0x2c) != '\0') {
            bVar5 = true;
          }
          iVar19 = iVar8;
          if (iVar8 == 0) {
            return 0;
          }
          while (iVar9 = FUN_00580450(iVar6,iVar19), iVar9 == 0) {
            iVar19 = *(int *)(iVar19 + 0x14);
            if (iVar19 == 0) {
              return 0;
            }
          }
          iVar6 = *(int *)(iVar6 + 0x14);
        } while (iVar6 != 0);
      }
      if ((param_2[6] == 0) || (iVar6 = FUN_00556680(piVar7[6],param_2[6]), iVar6 == 0)) {
        uVar4 = *(uint *)(*param_1 + 0x18);
        if ((((uVar4 & 0x40000) == 0) || (param_2[4] == 0)) && ((uVar4 & 0x10) == 0)) {
          uVar10 = FUN_00565260(*param_1,piVar7[0x10]);
          piVar11 = (int *)FUN_0055ab80(param_1);
          FUN_00550aa0(param_1,uVar10);
          iVar8 = param_1[0x12];
          iVar6 = iVar8 + 1;
          param_1[0x12] = iVar8 + 2;
          uVar12 = FUN_0052b750(param_1,param_5,param_2);
          FUN_0055e5f0(param_1,iVar8 + 1,param_5,param_2,0x28);
          if (((((short)param_2[9] < 0) && (param_2[2] != 0)) || (bVar5)) ||
             ((param_4 != 2 && (param_4 != 1)))) {
            uVar13 = FUN_0056be90(piVar11,0x48,iVar6,0);
            local_24 = FUN_0056be90(piVar11,1,0,0);
            FUN_00573d80(piVar11,uVar13);
          }
          else {
            local_24 = 0;
          }
          FUN_0055e5f0(param_1,iVar8,uVar10,piVar7,0x27);
          uVar13 = FUN_0056be90(piVar11,0x48,iVar8,0);
          uVar21 = FUN_0055a1f0(param_1);
          uVar14 = (undefined4)uVar21;
          uVar15 = FUN_0055a1f0((int)((ulonglong)uVar21 >> 0x20));
          if ((short)param_2[9] < 0) {
            if (param_2[2] == 0) {
              uVar12 = 0x38;
              iVar19 = iVar8 + 1;
            }
            else {
              uVar12 = 0x41;
              iVar19 = iVar8;
            }
            local_14 = FUN_0056be90(piVar11,uVar12,iVar19,uVar15);
          }
          else {
            local_14 = FUN_0056be90(piVar11,0x41,iVar8,uVar15);
            uVar16 = FUN_0056bef0(piVar11,0x36,iVar8 + 1,0,uVar15);
            FUN_0055abc0(param_1,param_4,"PRIMARY KEY must be unique",0xfffffffe);
            FUN_00573d80(piVar11,uVar16);
            FUN_0052b7d0(param_1,uVar12,uVar15);
          }
          FUN_0056be90(piVar11,0x40,iVar8,uVar14);
          FUN_0056bef0(piVar11,0x39,iVar8 + 1,uVar14,uVar15);
          FUN_0056c490(piVar11,0xb);
          iVar19 = piVar11[1];
          iVar9 = *param_2;
          iVar17 = *piVar11;
          if ((iVar19 == 0) || (*(char *)(iVar17 + 0x38) != '\0')) {
            FUN_00539320(iVar17,0,iVar9);
          }
          else {
            iVar1 = iVar19 + (piVar11[7] + -1) * 0x14;
            FUN_00539320(iVar17,(int)*(char *)(iVar1 + 1),
                         *(undefined4 *)(iVar19 + 0x10 + (piVar11[7] + -1) * 0x14));
            *(undefined4 *)(iVar1 + 0x10) = 0;
            if (iVar9 == 0) {
              *(undefined4 *)(iVar1 + 0x10) = 0;
              *(undefined1 *)(iVar1 + 1) = 0;
            }
            else {
              uVar21 = FUN_00568070(iVar9);
              uVar12 = FUN_005524a0(*piVar11,(int)((ulonglong)uVar21 >> 0x20),(int)uVar21);
              *(undefined4 *)(iVar1 + 0x10) = uVar12;
              *(undefined1 *)(iVar1 + 1) = 0xff;
            }
          }
          FUN_0056be90(piVar11,0x5f,iVar8,local_14);
          for (iVar19 = param_2[2]; iVar19 != 0; iVar19 = *(int *)(iVar19 + 0x14)) {
            iVar9 = piVar7[2];
            while ((iVar9 != 0 && (iVar17 = FUN_00580450(iVar19,iVar9), iVar17 == 0))) {
              iVar9 = *(int *)(iVar9 + 0x14);
            }
            FUN_0056be90(piVar11,0x2d,iVar8,0);
            FUN_0056be90(piVar11,0x2d,iVar6,0);
            uVar12 = FUN_0055b2a0(param_1,iVar9);
            FUN_0056bf50(piVar11,0x27,iVar8,*(undefined4 *)(iVar9 + 0x28),uVar10,uVar12,0xfffffff0);
            uVar12 = FUN_0055b2a0(param_1,iVar19);
            FUN_0056bf50(piVar11,0x28,iVar8 + 1,*(undefined4 *)(iVar19 + 0x28),param_5,uVar12,
                         0xfffffff0);
            iVar9 = FUN_0056be90(piVar11,0x48,iVar8,0);
            FUN_0056be90(piVar11,0x3f,iVar8,uVar14);
            FUN_0056bef0(piVar11,0x61,iVar6,uVar14,1);
            FUN_0056be90(piVar11,0x5f,iVar8,iVar9 + 1);
            FUN_00573d80(piVar11,iVar9);
          }
          FUN_00573d80(piVar11,uVar13);
          FUN_00563fb0(param_1,uVar15);
          FUN_00563fb0(param_1,uVar14);
          FUN_0056be90(piVar11,0x2d,iVar8,0);
          FUN_0056be90(piVar11,0x2d,iVar8 + 1,0);
          if (local_24 == 0) {
            return 1;
          }
          FUN_0056be90(piVar11,6,0,0);
          FUN_00573d80(piVar11,local_24);
          FUN_0056be90(piVar11,0x2d,iVar8 + 1,0);
        }
      }
    }
  }
  return 0;
}


/* FUN_00580a70 @ 00580a70  kind=gamemisc  attributed-by=caller-vote  size=74 */

void FUN_00580a70(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = *param_1 + -1;
  iVar1 = *param_1;
  iVar2 = param_1[2];
  iVar3 = *param_1;
  while ((-1 < iVar1 && (-1 < iVar3))) {
    FUN_00580b00(param_1,*(undefined1 *)((int)param_1 + iVar3 * 0x10 + 0xe),param_1 + iVar3 * 4 + 4)
    ;
    *param_1 = *param_1 + -1;
    iVar1 = *param_1;
    iVar3 = *param_1;
  }
  FUN_00553950(iVar2,"parser stack overflow");
  param_1[2] = iVar2;
  return;
}


/* FUN_00580ac0 @ 00580ac0  kind=gamemisc  attributed-by=caller-vote  size=60 */

void FUN_00580ac0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1[2];
  iVar2 = *param_1;
  iVar1 = iVar2;
  while ((-1 < iVar1 && (-1 < iVar2))) {
    FUN_00580b00(param_1,*(undefined1 *)((int)param_1 + iVar2 * 0x10 + 0xe),param_1 + iVar2 * 4 + 4)
    ;
    *param_1 = *param_1 + -1;
    iVar1 = *param_1;
    iVar2 = *param_1;
  }
  param_1[2] = iVar3;
  return;
}


/* FUN_00580b00 @ 00580b00  kind=gamemisc  attributed-by=caller-vote  size=199 */

void FUN_00580b00(int param_1,undefined1 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  switch(param_2) {
  case 0xa0:
  case 0xc2:
    FUN_00566d10(*puVar1,*param_3);
    return;
  case 0xad:
  case 0xae:
  case 199:
  case 0xc9:
  case 0xd2:
  case 0xe0:
  case 0xe2:
  case 0xec:
  case 0xf1:
    FUN_00555e30(*puVar1,*param_3);
    return;
  case 0xb2:
  case 0xbb:
  case 0xc5:
  case 200:
  case 0xca:
  case 0xcc:
  case 0xd6:
  case 0xd7:
  case 0xd8:
  case 0xdc:
  case 0xe1:
    FUN_00556700(*puVar1,*param_3);
    return;
  case 0xc1:
  case 0xc6:
  case 0xce:
  case 0xcf:
    FUN_00567370(*puVar1,*param_3);
    return;
  case 0xd3:
  case 0xd5:
  case 0xda:
    FUN_0055afc0(*puVar1,*param_3);
    return;
  case 0xdb:
    FUN_00556700(*puVar1,*param_3);
    FUN_00566d10(*puVar1,param_3[1]);
    return;
  case 0xe8:
  case 0xed:
    FUN_00552b20(*puVar1,*param_3);
    return;
  case 0xea:
    FUN_0055afc0(*puVar1,param_3[1]);
  }
  return;
}


/* FUN_00580c40 @ 00580c40  kind=gamemisc  attributed-by=caller-vote  size=141 */

undefined2 FUN_00580c40(int *param_1,byte param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (uint)*(ushort *)(param_1 + *param_1 * 4 + 3);
  if (uVar3 < 0x1a1) {
    while (*(short *)(&DAT_00714718 + uVar3 * 2) != -0x46) {
      uVar1 = (int)*(short *)(&DAT_00714718 + uVar3 * 2) + (uint)param_2;
      if ((uVar1 < 0x61c) && ((&DAT_007140f8)[uVar1] == param_2)) {
LAB_00580cc0:
        return *(undefined2 *)(&DAT_007134c0 + uVar1 * 2);
      }
      if (param_2 == 0) break;
      if ((0x42 < param_2) || ((&DAT_00715210)[param_2] == 0)) {
        iVar2 = uVar1 - param_2;
        uVar1 = iVar2 + 0x43;
        if ((-1 < (int)uVar1) && ((&DAT_0071413b)[iVar2] == 'C')) goto LAB_00580cc0;
        break;
      }
      param_2 = (&DAT_00715210)[param_2];
      if (0x1a0 < uVar3) break;
    }
  }
  return *(undefined2 *)(&DAT_00714d28 + uVar3 * 2);
}


/* FUN_00580cd0 @ 00580cd0  kind=gamemisc  attributed-by=caller-vote  size=8156 */

void FUN_00580cd0(int *param_1,int param_2)

{
  uint *puVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined1 *_Dst;
  int *piVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  int extraout_EDX;
  uint uVar12;
  ushort *puVar13;
  undefined1 uVar14;
  undefined1 *local_2c;
  undefined8 local_28;
  int local_20;
  undefined1 *local_1c;
  undefined2 local_18 [2];
  undefined1 *local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  puVar11 = (undefined1 *)0x0;
  iVar4 = *param_1;
  piVar7 = (int *)param_1[2];
  iVar6 = iVar4 * 0x10;
  local_28 = 0;
  local_1c = (undefined1 *)0x0;
  local_20 = 0;
  if (0x13e < param_2 - 5U) goto switchD_00580d2a_caseD_b3;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)&PTR_caseD_b2_00582f74 + param_2 + 3)) {
  case 0:
    *(undefined1 *)(piVar7 + 0x75) = 0;
    piVar7[0x73] = 0;
    break;
  case 1:
    *(undefined1 *)(piVar7 + 0x75) = 1;
    piVar7[0x73] = 0;
    break;
  case 2:
    *(undefined1 *)(piVar7 + 0x75) = 2;
    piVar7[0x73] = 0;
    break;
  case 3:
    FUN_00557410(piVar7);
    puVar11 = local_1c;
    break;
  case 4:
    FUN_0054b750(piVar7,param_1[iVar4 * 4]);
    puVar11 = local_1c;
    break;
  case 5:
    local_28 = 7;
    break;
  case 6:
    local_28 = (ulonglong)*(byte *)((int)param_1 + iVar6 + 0xe);
    break;
  case 7:
    FUN_00550d90(piVar7);
    puVar11 = local_1c;
    break;
  case 8:
    FUN_00564420(piVar7);
    puVar11 = local_1c;
    break;
  case 9:
    FUN_00564f90(piVar7,0,param_1 + iVar4 * 4 + 4);
    puVar11 = local_1c;
    break;
  case 10:
    FUN_00564f90(piVar7,1,param_1 + iVar4 * 4 + 4);
    puVar11 = local_1c;
    break;
  case 0xb:
    FUN_00564f90(piVar7,2,param_1 + iVar4 * 4 + 4);
    puVar11 = local_1c;
    break;
  case 0xc:
    FUN_00567880(piVar7,param_1 + iVar4 * 4,param_1 + iVar4 * 4 + 4,param_1[iVar4 * 4 + -0xc],0,0,
                 param_1[iVar4 * 4 + -4]);
    puVar11 = local_1c;
    break;
  case 0xd:
    *(undefined1 *)(*piVar7 + 0xea) = 0;
  case 0x14:
    local_28 = *(ulonglong *)(param_1 + iVar4 * 4 + 4);
    break;
  case 0xf:
    local_28 = 1;
    break;
  case 0x10:
    FUN_00553490(piVar7,param_1 + iVar4 * 4,param_1 + iVar4 * 4 + 4,0);
    puVar11 = local_1c;
    break;
  case 0x11:
    FUN_00553490(piVar7,0,0,param_1[iVar4 * 4 + 4]);
    FUN_00566d10(*piVar7,param_1[iVar4 * 4 + 4]);
    puVar11 = local_1c;
    break;
  case 0x12:
    local_28 = CONCAT44((piVar7[0x85] + piVar7[0x84]) - param_1[iVar4 * 4 + -4],
                        param_1[iVar4 * 4 + -4]);
    break;
  case 0x13:
    FUN_005490f0(piVar7,param_1 + iVar4 * 4 + 4);
    local_28 = *(ulonglong *)(param_1 + iVar4 * 4 + 4);
    piVar7[0x68] = 0;
    puVar11 = local_1c;
    break;
  case 0x15:
    FUN_00549230(piVar7,param_1 + iVar4 * 4 + 4);
    puVar11 = local_1c;
    break;
  case 0x16:
    local_28 = CONCAT44((param_1[iVar4 * 4 + 5] + param_1[iVar4 * 4 + 4]) - param_1[iVar4 * 4 + -8],
                        param_1[iVar4 * 4 + -8]);
    break;
  case 0x17:
    local_28 = CONCAT44((param_1[iVar4 * 4 + 5] + param_1[iVar4 * 4 + 4]) -
                        param_1[iVar4 * 4 + -0x10],param_1[iVar4 * 4 + -0x10]);
    break;
  case 0x18:
    local_28 = CONCAT44((param_1[iVar4 * 4 + 5] + param_1[iVar4 * 4 + 4]) - param_1[iVar4 * 4],
                        param_1[iVar4 * 4]);
    break;
  case 0x19:
    piVar7[0x67] = param_1[iVar4 * 4 + 4];
    piVar7[0x68] = param_1[iVar4 * 4 + 5];
    break;
  case 0x1a:
    FUN_00549280(piVar7,param_1 + iVar4 * 4 + 4);
    puVar11 = local_1c;
    break;
  case 0x1b:
    FUN_00549280(piVar7,param_1 + iVar4 * 4);
    puVar11 = local_1c;
    break;
  case 0x1c:
    local_2c = (undefined1 *)param_1[iVar4 * 4 + 4];
    puVar11 = (undefined1 *)FUN_00552230(*piVar7,0x2c);
    if (puVar11 != (undefined1 *)0x0) {
      memset(puVar11,0,0x2c);
      *puVar11 = 0x9c;
      *(undefined2 *)(puVar11 + 0x1e) = 0xffff;
      *(undefined4 *)(puVar11 + 0x14) = 1;
    }
    FUN_005540d0(*piVar7,puVar11,local_2c,0);
    if ((puVar11 != (undefined1 *)0x0) && (*(int *)(*piVar7 + 0x5c) < *(int *)(puVar11 + 0x14))) {
      FUN_00553950(piVar7,"Expression tree is too large (maximum depth %d)",*(int *)(*piVar7 + 0x5c)
                  );
    }
    local_10 = param_1[iVar4 * 4];
    local_c = param_1[iVar4 * 4 + 6];
    local_14 = puVar11;
    FUN_00549280(piVar7,&local_14);
    puVar11 = local_1c;
    break;
  case 0x1d:
    FUN_00548e60(&local_14,piVar7,0x5e,param_1 + iVar4 * 4 + 4);
    FUN_00549280(piVar7,&local_14);
    puVar11 = local_1c;
    break;
  case 0x1e:
    iVar6 = piVar7[0x7f];
    if ((iVar6 != 0) && (0 < *(short *)(iVar6 + 0x26))) {
      *(char *)(*(int *)(iVar6 + 4) + -4 + *(short *)(iVar6 + 0x26) * 0x18) =
           (char)param_1[iVar4 * 4 + 4];
      puVar11 = local_1c;
    }
    break;
  case 0x1f:
    FUN_00549420(piVar7,0,param_1[iVar4 * 4],param_1[iVar4 * 4 + 4],param_1[iVar4 * 4 + -4]);
    puVar11 = local_1c;
    break;
  case 0x20:
    FUN_00551790(piVar7,0,0,0,0,param_1[iVar4 * 4 + 4],0,0,0,0);
    puVar11 = local_1c;
    break;
  case 0x21:
    FUN_00549000(piVar7,param_1[iVar4 * 4]);
    puVar11 = local_1c;
    break;
  case 0x22:
    FUN_00551270(piVar7,0,param_1 + iVar4 * 4 + -4,param_1[iVar4 * 4],param_1[iVar4 * 4 + 4]);
    puVar11 = local_1c;
    break;
  case 0x23:
    FUN_00552540(piVar7,param_1[iVar4 * 4 + 4]);
    puVar11 = (undefined1 *)extraout_EDX;
    break;
  case 0x24:
    FUN_00549060(piVar7,param_1 + iVar4 * 4 + 4);
    puVar11 = local_1c;
    break;
  case 0x25:
    local_28 = (ulonglong)
               (uint)(~param_1[iVar4 * 4 + 5] & param_1[iVar4 * 4] | param_1[iVar4 * 4 + 4]);
    break;
  case 0x26:
  case 0x44:
    local_28 = 0;
    break;
  case 0x27:
    local_28 = CONCAT44(0xff,param_1[iVar4 * 4 + 4]);
    break;
  case 0x28:
    local_28 = CONCAT44(0xff00,param_1[iVar4 * 4 + 4] << 8);
    break;
  case 0x29:
    local_28 = 8;
    break;
  case 0x2a:
    local_28 = 9;
    break;
  case 0x2b:
    local_28 = 6;
    break;
  case 0x2d:
  case 0xe:
    local_28 = 0;
    break;
  case 0x2e:
    local_28 = *(ulonglong *)(param_1 + iVar4 * 4);
    break;
  case 0x2f:
    piVar7[0x68] = 0;
    break;
  case 0x30:
    FUN_00549420(piVar7,param_1[iVar4 * 4 + -8],param_1[iVar4 * 4 + 4],param_1[iVar4 * 4 + -4],0);
    puVar11 = local_1c;
    break;
  case 0x31:
    FUN_00551790(piVar7,0,0,0,param_1[iVar4 * 4 + -4],param_1[iVar4 * 4 + 4],0,0,0,0);
    puVar11 = local_1c;
    break;
  case 0x32:
    FUN_00549000(piVar7,param_1[iVar4 * 4 + -4]);
    puVar11 = local_1c;
    break;
  case 0x33:
    FUN_00551270(piVar7,param_1[iVar4 * 4 + -0x14],param_1 + iVar4 * 4 + -8,param_1[iVar4 * 4 + -4],
                 param_1[iVar4 * 4]);
    FUN_00552540(piVar7,param_1[iVar4 * 4 + 4]);
    puVar11 = local_1c;
    break;
  case 0x34:
    local_28 = 99;
    break;
  case 0x35:
    local_28 = 99;
    break;
  case 0x36:
    local_28 = (ulonglong)*(byte *)(param_1 + iVar4 * 4 + 4);
    break;
  case 0x37:
    local_28 = 4;
    break;
  case 0x38:
    local_28 = 5;
    break;
  case 0x39:
    FUN_00552e90(piVar7,param_1[iVar4 * 4 + 4],0,param_1[iVar4 * 4]);
    puVar11 = local_1c;
    break;
  case 0x3a:
    FUN_00552000(piVar7,param_1 + iVar4 * 4 + -0x18,param_1 + iVar4 * 4 + -8,
                 param_1 + iVar4 * 4 + -4,param_1[iVar4 * 4 + 4],param_1[iVar4 * 4 + -0x14],
                 param_1[iVar4 * 4 + -0xc]);
    puVar11 = local_1c;
    break;
  case 0x3b:
    FUN_00552e90(piVar7,param_1[iVar4 * 4 + 4],1,param_1[iVar4 * 4]);
    puVar11 = local_1c;
    break;
  case 0x3c:
    local_18[0] = 5;
    local_14 = (undefined1 *)0x0;
    local_10 = 0;
    local_c = 0;
    FUN_005654f0(piVar7,param_1[iVar4 * 4 + 4],local_18);
    FUN_00566d10(*piVar7,param_1[iVar4 * 4 + 4]);
    puVar11 = local_1c;
    break;
  case 0x3d:
    if (param_1[iVar4 * 4 + 4] != 0) {
      *(char *)(param_1[iVar4 * 4 + 4] + 4) = (char)param_1[iVar4 * 4];
      *(int *)(param_1[iVar4 * 4 + 4] + 0x3c) = param_1[iVar4 * 4 + -4];
      local_28 = (ulonglong)(uint)param_1[iVar4 * 4 + 4];
      break;
    }
    FUN_00566d10(*piVar7,param_1[iVar4 * 4 + -4]);
    puVar11 = local_1c;
  case 0x2c:
    local_28 = CONCAT44(local_28._4_4_,param_1[iVar4 * 4 + 4]);
    break;
  case 0x3e:
    local_28 = 0x71;
    break;
  case 0x3f:
    uVar10 = FUN_00566e90(piVar7,param_1[iVar4 * 4 + -0x14],param_1[iVar4 * 4 + -0x10],
                          param_1[iVar4 * 4 + -0xc],param_1[iVar4 * 4 + -8],param_1[iVar4 * 4 + -4],
                          param_1[iVar4 * 4],param_1[iVar4 * 4 + -0x18],param_1[iVar4 * 4 + 4],
                          param_1[iVar4 * 4 + 5]);
    local_28 = CONCAT44(local_28._4_4_,uVar10);
    puVar11 = local_1c;
    break;
  case 0x41:
    uVar10 = FUN_005565a0(piVar7,param_1[iVar4 * 4 + -4],param_1[iVar4 * 4]);
    local_28 = CONCAT44(local_28._4_4_,uVar10);
    if (param_1[iVar4 * 4 + 5] != 0) {
      FUN_00556980(piVar7,uVar10,param_1 + iVar4 * 4 + 4,1);
    }
    FUN_00556a00(piVar7,uVar10,param_1 + iVar4 * 4);
    puVar11 = local_1c;
    break;
  case 0x42:
    puVar11 = (undefined1 *)FUN_00552230(*piVar7,0x2d);
    if (puVar11 != (undefined1 *)0x0) {
      memset(puVar11,0,0x2d);
      *(undefined2 *)(puVar11 + 0x1e) = 0xffff;
      *puVar11 = 0x71;
      *(undefined1 **)(puVar11 + 4) = puVar11 + 0x2c;
      puVar11[0x2c] = 0;
      *(undefined4 *)(puVar11 + 0x14) = 1;
    }
    uVar10 = FUN_005565a0(piVar7,param_1[iVar4 * 4],puVar11);
    local_28 = CONCAT44(local_28._4_4_,uVar10);
    puVar11 = local_1c;
    break;
  case 0x43:
    puVar11 = (undefined1 *)FUN_00553bb0(*piVar7,0x71,param_1 + iVar4 * 4 + 4,1);
    local_2c = puVar11;
    FUN_005540d0(*piVar7,puVar11,0,0);
    if ((puVar11 != (undefined1 *)0x0) && (*(int *)(*piVar7 + 0x5c) < *(int *)(puVar11 + 0x14))) {
      FUN_00553950(piVar7,"Expression tree is too large (maximum depth %d)",*(int *)(*piVar7 + 0x5c)
                  );
    }
    iVar6 = FUN_00553bb0(*piVar7,0x1a,param_1 + iVar4 * 4 + -4,1);
    FUN_005540d0(*piVar7,iVar6,0,0);
    if ((iVar6 != 0) && (*(int *)(*piVar7 + 0x5c) < *(int *)(iVar6 + 0x14))) {
      FUN_00553950(piVar7,"Expression tree is too large (maximum depth %d)",*(int *)(*piVar7 + 0x5c)
                  );
    }
    puVar11 = (undefined1 *)FUN_00552230(*piVar7,0x2c);
    if (puVar11 != (undefined1 *)0x0) {
      memset(puVar11,0,0x2c);
      *puVar11 = 0x76;
      *(undefined2 *)(puVar11 + 0x1e) = 0xffff;
      *(undefined4 *)(puVar11 + 0x14) = 1;
    }
    FUN_005540d0(*piVar7,puVar11,iVar6,local_2c);
    if ((puVar11 != (undefined1 *)0x0) && (*(int *)(*piVar7 + 0x5c) < *(int *)(puVar11 + 0x14))) {
      FUN_00553950(piVar7,"Expression tree is too large (maximum depth %d)",*(int *)(*piVar7 + 0x5c)
                  );
    }
    uVar10 = FUN_005565a0(piVar7,param_1[iVar4 * 4 + -8],puVar11);
    local_28 = CONCAT44(local_28._4_4_,uVar10);
    puVar11 = local_1c;
    break;
  case 0x45:
    uVar10 = FUN_005522c0(*piVar7,0x50);
    local_28 = CONCAT44(local_28._4_4_,uVar10);
    puVar11 = local_1c;
    break;
  case 0x46:
    local_28 = (ulonglong)(uint)param_1[iVar4 * 4 + 4];
    FUN_00567840(param_1[iVar4 * 4 + 4]);
    puVar11 = local_1c;
    break;
  case 0x47:
    psVar5 = (short *)param_1[iVar4 * 4];
    local_28 = ZEXT48(psVar5);
    if ((psVar5 != (short *)0x0) && (0 < *psVar5)) {
      *(char *)(psVar5 + *psVar5 * 0x24 + -0x10) = (char)param_1[iVar4 * 4 + 4];
    }
    break;
  case 0x48:
    uVar10 = FUN_00567240(piVar7,param_1[iVar4 * 4 + -0x14],param_1 + iVar4 * 4 + -0x10,
                          param_1 + iVar4 * 4 + -0xc,param_1 + iVar4 * 4 + -8,0,param_1[iVar4 * 4],
                          param_1[iVar4 * 4 + 4]);
    local_28 = CONCAT44(local_28._4_4_,uVar10);
    FUN_005677a0(piVar7,uVar10,param_1 + iVar4 * 4 + -4);
    puVar11 = local_1c;
    break;
  case 0x49:
    uVar10 = FUN_00567240(piVar7,param_1[iVar4 * 4 + -0x14],0,0,param_1 + iVar4 * 4 + -4,
                          param_1[iVar4 * 4 + -0xc],param_1[iVar4 * 4],param_1[iVar4 * 4 + 4]);
    local_28 = CONCAT44(local_28._4_4_,uVar10);
    puVar11 = local_1c;
    break;
  case 0x4a:
    if ((((param_1[iVar4 * 4 + -0x14] == 0) && (param_1[iVar4 * 4 + -3] == 0)) &&
        (param_1[iVar4 * 4] == 0)) && (param_1[iVar4 * 4 + 4] == 0)) {
      local_28 = (ulonglong)(uint)param_1[iVar4 * 4 + -0xc];
    }
    else {
      FUN_00567840(param_1[iVar4 * 4 + -0xc]);
      uVar10 = FUN_00566e90(piVar7,0,param_1[iVar4 * 4 + -0xc],0,0,0,0,0,0,0);
      uVar10 = FUN_00567240(piVar7,param_1[iVar4 * 4 + -0x14],0,0,param_1 + iVar4 * 4 + -4,uVar10,
                            param_1[iVar4 * 4],param_1[iVar4 * 4 + 4]);
      local_28 = CONCAT44(local_28._4_4_,uVar10);
      puVar11 = local_1c;
    }
    break;
  case 0x4b:
    uVar10 = FUN_00567180(*piVar7,0,param_1 + iVar4 * 4,param_1 + iVar4 * 4 + 4);
    local_28 = CONCAT44(local_28._4_4_,uVar10);
    puVar11 = local_1c;
    break;
  case 0x4c:
    uVar10 = FUN_0055d020(piVar7,param_1 + iVar4 * 4,0,0);
    local_28 = CONCAT44(local_28._4_4_,uVar10);
    puVar11 = local_1c;
    break;
  case 0x4d:
    uVar10 = FUN_0055d020(piVar7,param_1 + iVar4 * 4 + -4,param_1 + iVar4 * 4,0);
    local_28 = CONCAT44(local_28._4_4_,uVar10);
    puVar11 = local_1c;
    break;
  case 0x4e:
    uVar10 = FUN_0055d020(piVar7,param_1 + iVar4 * 4 + -8,param_1 + iVar4 * 4 + -4,
                          param_1 + iVar4 * 4);
    local_28 = CONCAT44(local_28._4_4_,uVar10);
    puVar11 = local_1c;
    break;
  case 0x4f:
    local_28 = 0x100000000;
    break;
  case 0x50:
    piVar7 = (int *)FUN_005565a0(piVar7,param_1[iVar4 * 4 + -8],param_1[iVar4 * 4]);
    local_28 = CONCAT44(local_28._4_4_,piVar7);
    puVar11 = local_1c;
    if (piVar7 != (int *)0x0) {
      *(char *)(piVar7[2] + -8 + *piVar7 * 0x14) = (char)param_1[iVar4 * 4 + 4];
    }
    break;
  case 0x51:
    iVar6 = FUN_005565a0(piVar7,0,param_1[iVar4 * 4]);
    local_28 = CONCAT44(local_28._4_4_,iVar6);
    puVar11 = local_1c;
    if ((iVar6 != 0) && (*(int *)(iVar6 + 8) != 0)) {
      *(char *)(*(int *)(iVar6 + 8) + 0xc) = (char)param_1[iVar4 * 4 + 4];
    }
    break;
  case 0x52:
    local_28 = (ulonglong)(uint)param_1[iVar4 * 4 + 4];
    break;
  case 0x53:
    local_28 = CONCAT44(param_1[iVar4 * 4 + 4],param_1[iVar4 * 4 + -4]);
    break;
  case 0x54:
    local_28 = CONCAT44(param_1[iVar4 * 4 + -4],param_1[iVar4 * 4 + 4]);
    break;
  case 0x55:
    FUN_005677a0(piVar7,param_1[iVar4 * 4 + -4],param_1 + iVar4 * 4);
    FUN_00552560(piVar7,param_1[iVar4 * 4 + -4],param_1[iVar4 * 4 + 4]);
    puVar11 = local_1c;
    break;
  case 0x56:
    FUN_005677a0(piVar7,param_1[iVar4 * 4 + -0xc],param_1 + iVar4 * 4 + -8);
    FUN_00556650(piVar7,param_1[iVar4 * 4],"set list");
    FUN_00568b40(piVar7,param_1[iVar4 * 4 + -0xc],param_1[iVar4 * 4],param_1[iVar4 * 4 + 4],
                 (char)param_1[iVar4 * 4 + -0x10]);
    puVar11 = local_1c;
    break;
  case 0x57:
    iVar8 = param_1[iVar4 * 4 + 4];
    iVar6 = param_1[iVar4 * 4 + -0xc];
    goto LAB_005816da;
  case 0x58:
    iVar8 = param_1[iVar4 * 4 + 4];
    iVar6 = 0;
LAB_005816da:
    uVar10 = FUN_005565a0(piVar7,iVar6,iVar8);
    local_28 = CONCAT44(local_28._4_4_,uVar10);
    FUN_00556980(piVar7,uVar10,param_1 + iVar4 * 4 + -4,1);
    puVar11 = local_1c;
    break;
  case 0x59:
    FUN_0055bc20(piVar7,param_1[iVar4 * 4 + -4],param_1[iVar4 * 4 + 4],param_1[iVar4 * 4 + 5],
                 param_1[iVar4 * 4],(char)param_1[iVar4 * 4 + -0xc]);
    puVar11 = local_1c;
    break;
  case 0x5a:
    FUN_0055bc20(piVar7,param_1[iVar4 * 4 + -4],0,param_1[iVar4 * 4 + 4],param_1[iVar4 * 4],
                 (char)param_1[iVar4 * 4 + -0xc]);
    puVar11 = local_1c;
    break;
  case 0x5b:
    FUN_0055bc20(piVar7,param_1[iVar4 * 4 + -8],0,0,param_1[iVar4 * 4 + -4],
                 (char)param_1[iVar4 * 4 + -0x10]);
    puVar11 = local_1c;
    break;
  case 0x5c:
    local_28 = 5;
    break;
  case 0x5d:
    local_28 = (ulonglong)(uint)param_1[iVar4 * 4];
    break;
  case 0x5e:
    uVar12 = FUN_00566e90(piVar7,param_1[iVar4 * 4],0,0,0,0,0,0,0,0);
    if (param_1[iVar4 * 4 + -0xc] != 0) {
      iVar6 = FUN_00566e90(piVar7,param_1[iVar4 * 4 + -0xc],0,0,0,0,0,0,0,0);
      param_1[iVar4 * 4 + -0xb] = iVar6;
      param_1[iVar4 * 4 + -0xc] = 0;
    }
    local_28 = local_28 & 0xffffffff00000000;
    if ((param_1[iVar4 * 4 + -0xb] == 0) || (uVar12 == 0)) {
      FUN_00566d10(*piVar7,uVar12);
      FUN_00566d10(*piVar7,param_1[iVar4 * 4 + -0xb]);
      local_28 = local_28 & 0xffffffff;
      puVar11 = local_1c;
    }
    else {
      *(undefined1 *)(uVar12 + 4) = 0x71;
      iVar6 = param_1[iVar4 * 4 + -0xb];
      *(ushort *)(uVar12 + 6) = *(ushort *)(uVar12 + 6) | 0x80;
      *(int *)(uVar12 + 0x3c) = iVar6;
      puVar13 = (ushort *)(iVar6 + 6);
      *puVar13 = *puVar13 | 0x80;
      local_28 = (ulonglong)uVar12 << 0x20;
      puVar11 = local_1c;
    }
    break;
  case 0x5f:
    uVar10 = FUN_0055af40(*piVar7,param_1[iVar4 * 4 + -4],param_1 + iVar4 * 4 + 4);
    local_28 = CONCAT44(local_28._4_4_,uVar10);
    puVar11 = local_1c;
    break;
  case 0x60:
    iVar6 = *piVar7;
    piVar7 = (int *)FUN_00552230(iVar6,8);
    if (piVar7 != (int *)0x0) {
      piVar7[0] = 0;
      piVar7[1] = 0;
      iVar8 = FUN_0054a2b0(iVar6,*piVar7,8,piVar7 + 1,&local_2c);
      *piVar7 = iVar8;
      if (-1 < (int)local_2c) {
        uVar10 = FUN_0055e3f0(iVar6,param_1 + iVar4 * 4 + 4);
        *(undefined4 *)(*piVar7 + (int)local_2c * 8) = uVar10;
        local_28 = CONCAT44(local_28._4_4_,piVar7);
        puVar11 = local_1c;
        break;
      }
      FUN_0055afc0(iVar6,piVar7);
    }
    local_28 = local_28 & 0xffffffff00000000;
    puVar11 = local_1c;
    break;
  case 0x61:
    local_28 = *(ulonglong *)(param_1 + iVar4 * 4 + 4);
    puVar11 = (undefined1 *)param_1[iVar4 * 4 + 6];
    break;
  case 0x62:
    puVar11 = (undefined1 *)(param_1[iVar4 * 4 + 5] + param_1[iVar4 * 4 + 4]);
    local_28 = CONCAT44(param_1[iVar4 * 4 + -4],param_1[iVar4 * 4]);
    break;
  case 99:
    uVar14 = *(undefined1 *)((int)param_1 + iVar6 + 0xe);
    goto LAB_005818c1;
  case 100:
    uVar14 = 0x1a;
LAB_005818c1:
    FUN_00548e60(&local_28,piVar7,uVar14,param_1 + iVar4 * 4 + 4);
    puVar11 = (undefined1 *)local_20;
    break;
  case 0x65:
    puVar11 = (undefined1 *)FUN_00553bb0(*piVar7,0x1a,param_1 + iVar4 * 4 + -4,1);
    local_2c = puVar11;
    FUN_005540d0(*piVar7,puVar11,0,0);
    if ((puVar11 != (undefined1 *)0x0) && (*(int *)(*piVar7 + 0x5c) < *(int *)(puVar11 + 0x14))) {
      FUN_00553950(piVar7,"Expression tree is too large (maximum depth %d)",*(int *)(*piVar7 + 0x5c)
                  );
    }
    iVar6 = FUN_00553bb0(*piVar7,0x1a,param_1 + iVar4 * 4 + 4,1);
    FUN_005540d0(*piVar7,iVar6,0,0);
    if ((iVar6 != 0) && (*(int *)(*piVar7 + 0x5c) < *(int *)(iVar6 + 0x14))) {
      FUN_00553950(piVar7,"Expression tree is too large (maximum depth %d)",*(int *)(*piVar7 + 0x5c)
                  );
    }
    puVar11 = (undefined1 *)FUN_00552230(*piVar7,0x2c);
    if (puVar11 != (undefined1 *)0x0) {
      memset(puVar11,0,0x2c);
      *puVar11 = 0x76;
      *(undefined2 *)(puVar11 + 0x1e) = 0xffff;
      *(undefined4 *)(puVar11 + 0x14) = 1;
    }
    FUN_005540d0(*piVar7,puVar11,local_2c,iVar6);
    if ((puVar11 != (undefined1 *)0x0) && (*(int *)(*piVar7 + 0x5c) < *(int *)(puVar11 + 0x14))) {
      FUN_00553950(piVar7,"Expression tree is too large (maximum depth %d)",*(int *)(*piVar7 + 0x5c)
                  );
    }
    local_28 = CONCAT44(param_1[iVar4 * 4 + -4],puVar11);
    puVar11 = (undefined1 *)(param_1[iVar4 * 4 + 5] + param_1[iVar4 * 4 + 4]);
    break;
  case 0x66:
    iVar6 = FUN_00553bb0(*piVar7,0x1a,param_1 + iVar4 * 4 + -0xc,1);
    local_c = iVar6;
    FUN_005540d0(*piVar7,iVar6,0,0);
    if ((iVar6 != 0) && (*(int *)(*piVar7 + 0x5c) < *(int *)(iVar6 + 0x14))) {
      FUN_00553950(piVar7,"Expression tree is too large (maximum depth %d)",*(int *)(*piVar7 + 0x5c)
                  );
    }
    puVar11 = (undefined1 *)FUN_00553bb0(*piVar7,0x1a,param_1 + iVar4 * 4 + -4,1);
    local_2c = puVar11;
    FUN_005540d0(*piVar7,puVar11,0,0);
    if ((puVar11 != (undefined1 *)0x0) && (*(int *)(*piVar7 + 0x5c) < *(int *)(puVar11 + 0x14))) {
      FUN_00553950(piVar7,"Expression tree is too large (maximum depth %d)",*(int *)(*piVar7 + 0x5c)
                  );
    }
    iVar6 = FUN_00553bb0(*piVar7,0x1a,param_1 + iVar4 * 4 + 4,1);
    FUN_005540d0(*piVar7,iVar6,0,0);
    if ((iVar6 != 0) && (*(int *)(*piVar7 + 0x5c) < *(int *)(iVar6 + 0x14))) {
      FUN_00553950(piVar7,"Expression tree is too large (maximum depth %d)",*(int *)(*piVar7 + 0x5c)
                  );
    }
    local_1c = (undefined1 *)FUN_00552230(*piVar7,0x2c);
    if (local_1c != (undefined1 *)0x0) {
      memset(local_1c,0,0x2c);
      *local_1c = 0x76;
      *(undefined2 *)(local_1c + 0x1e) = 0xffff;
      *(undefined4 *)(local_1c + 0x14) = 1;
    }
    FUN_005540d0(*piVar7,local_1c,local_2c,iVar6);
    if ((local_1c != (undefined1 *)0x0) && (*(int *)(*piVar7 + 0x5c) < *(int *)(local_1c + 0x14))) {
      FUN_00553950(piVar7,"Expression tree is too large (maximum depth %d)",*(int *)(*piVar7 + 0x5c)
                  );
    }
    local_2c = (undefined1 *)FUN_00552230(*piVar7,0x2c);
    if (local_2c != (undefined1 *)0x0) {
      memset(local_2c,0,0x2c);
      *local_2c = 0x76;
      *(undefined2 *)(local_2c + 0x1e) = 0xffff;
      *(undefined4 *)(local_2c + 0x14) = 1;
    }
    FUN_005540d0(*piVar7,local_2c,local_c,local_1c);
    puVar11 = local_2c;
    if ((local_2c != (undefined1 *)0x0) && (*(int *)(*piVar7 + 0x5c) < *(int *)(local_2c + 0x14))) {
      FUN_00553950(piVar7,"Expression tree is too large (maximum depth %d)",*(int *)(*piVar7 + 0x5c)
                  );
    }
    local_28 = CONCAT44(param_1[iVar4 * 4 + -0xc],puVar11);
    puVar11 = (undefined1 *)(param_1[iVar4 * 4 + 5] + param_1[iVar4 * 4 + 4]);
    break;
  case 0x67:
    puVar1 = (uint *)(param_1 + iVar4 * 4 + 4);
    if (*(char *)((int)piVar7 + 0x12) == '\0') {
      FUN_00553950(piVar7,"near \"%T\": syntax error",puVar1);
      local_28 = (ulonglong)*puVar1 << 0x20;
      puVar11 = (undefined1 *)(param_1[iVar4 * 4 + 5] + *puVar1);
    }
    else {
      local_2c = (undefined1 *)FUN_00553bb0(*piVar7,0x84,puVar1,1);
      FUN_005540d0(*piVar7,local_2c,0,0);
      if ((local_2c != (undefined1 *)0x0) && (*(int *)(*piVar7 + 0x5c) < *(int *)(local_2c + 0x14)))
      {
        FUN_00553950(piVar7,"Expression tree is too large (maximum depth %d)",
                     *(int *)(*piVar7 + 0x5c));
      }
      local_28 = CONCAT44(local_28._4_4_,local_2c);
      if (local_2c != (undefined1 *)0x0) {
        FUN_0055a0e0(*puVar1 + 1,local_2c + 0x18);
      }
      local_28 = CONCAT44(*puVar1,(undefined4)local_28);
      puVar11 = (undefined1 *)(param_1[iVar4 * 4 + 5] + *puVar1);
    }
    break;
  case 0x68:
    FUN_00548e60(&local_28,piVar7,0x85,param_1 + iVar4 * 4 + 4);
    FUN_00553e40(piVar7,(undefined4)local_28);
    iVar6 = param_1[iVar4 * 4 + 4];
    local_28 = CONCAT44(iVar6,(undefined4)local_28);
    puVar11 = (undefined1 *)(param_1[iVar4 * 4 + 5] + iVar6);
    break;
  case 0x69:
    uVar10 = FUN_00553ae0(piVar7,param_1[iVar4 * 4 + -4],param_1 + iVar4 * 4 + 4);
    local_28 = CONCAT44(param_1[iVar4 * 4 + -3],uVar10);
    puVar11 = (undefined1 *)(param_1[iVar4 * 4 + 5] + param_1[iVar4 * 4 + 4]);
    break;
  case 0x6a:
    iVar6 = param_1[iVar4 * 4 + -8];
    iVar8 = FUN_00553bb0(*piVar7,0x25,param_1 + iVar4 * 4,1);
    FUN_005540d0(*piVar7,iVar8,iVar6,0);
    if ((iVar8 != 0) && (*(int *)(*piVar7 + 0x5c) < *(int *)(iVar8 + 0x14))) {
      FUN_00553950(piVar7,"Expression tree is too large (maximum depth %d)",*(int *)(*piVar7 + 0x5c)
                  );
    }
    local_28 = CONCAT44(param_1[iVar4 * 4 + -0x10],iVar8);
    puVar11 = (undefined1 *)(param_1[iVar4 * 4 + 5] + param_1[iVar4 * 4 + 4]);
    break;
  case 0x6b:
    if (((int *)param_1[iVar4 * 4] != (int *)0x0) &&
       (*(int *)(*piVar7 + 0x68) < *(int *)param_1[iVar4 * 4])) {
      FUN_00553950(piVar7,"too many arguments on function %T",param_1 + iVar4 * 4 + -0xc);
    }
    iVar6 = FUN_00555ed0(piVar7,param_1[iVar4 * 4],param_1 + iVar4 * 4 + -0xc);
    puVar11 = (undefined1 *)(param_1[iVar4 * 4 + 5] + param_1[iVar4 * 4 + 4]);
    local_28 = CONCAT44(param_1[iVar4 * 4 + -0xc],iVar6);
    if ((param_1[iVar4 * 4 + -4] != 0) && (iVar6 != 0)) {
      *(ushort *)(iVar6 + 2) = *(ushort *)(iVar6 + 2) | 0x10;
    }
    break;
  case 0x6c:
    uVar10 = FUN_00555ed0(piVar7,0,param_1 + iVar4 * 4 + -8);
    local_28 = CONCAT44(param_1[iVar4 * 4 + -8],uVar10);
    puVar11 = (undefined1 *)(param_1[iVar4 * 4 + 5] + param_1[iVar4 * 4 + 4]);
    break;
  case 0x6d:
    puVar11 = (undefined1 *)FUN_00555ed0(piVar7,0,param_1 + iVar4 * 4 + 4);
    if (puVar11 != (undefined1 *)0x0) {
      *puVar11 = 0x9b;
    }
    iVar6 = param_1[iVar4 * 4 + 4];
    local_28 = CONCAT44(iVar6,puVar11);
    puVar11 = (undefined1 *)(param_1[iVar4 * 4 + 5] + iVar6);
    break;
  case 0x6e:
    FUN_00548e20(&local_28,piVar7,*(undefined1 *)((int)param_1 + iVar6 + -2),
                 param_1 + iVar4 * 4 + -4,param_1 + iVar4 * 4 + 4);
    puVar11 = (undefined1 *)local_20;
    break;
  case 0x6f:
    local_28 = *(ulonglong *)(param_1 + iVar4 * 4 + 4);
    puVar11 = (undefined1 *)0;
    break;
  case 0x70:
    local_28 = *(ulonglong *)(param_1 + iVar4 * 4 + 4);
    puVar11 = (undefined1 *)1;
    break;
  case 0x71:
    uVar10 = FUN_005565a0(piVar7,0,param_1[iVar4 * 4 + 4]);
    uVar10 = FUN_005565a0(piVar7,uVar10,param_1[iVar4 * 4 + -4]);
    _Dst = (undefined1 *)FUN_00555ed0(piVar7,uVar10,param_1 + iVar4 * 4);
    local_28 = CONCAT44(local_28._4_4_,_Dst);
    if (param_1[iVar4 * 4 + 2] != 0) {
      _Dst = (undefined1 *)FUN_00552230(*piVar7,0x2c);
      if (_Dst != (undefined1 *)0x0) {
        memset(_Dst,0,0x2c);
        *_Dst = 0x13;
        *(undefined2 *)(_Dst + 0x1e) = 0xffff;
        *(undefined4 *)(_Dst + 0x14) = 1;
      }
      FUN_005540d0(*piVar7,_Dst,(undefined4)local_28,0);
      if ((_Dst != (undefined1 *)0x0) && (*(int *)(*piVar7 + 0x5c) < *(int *)(_Dst + 0x14))) {
        FUN_00553950(piVar7,"Expression tree is too large (maximum depth %d)",
                     *(int *)(*piVar7 + 0x5c));
      }
      local_28 = ZEXT48(_Dst);
    }
    iVar6 = param_1[iVar4 * 4 + -3];
    goto LAB_00581e2b;
  case 0x72:
    uVar10 = FUN_005565a0(piVar7,0,param_1[iVar4 * 4 + -4]);
    uVar10 = FUN_005565a0(piVar7,uVar10,param_1[iVar4 * 4 + -0xc]);
    uVar10 = FUN_005565a0(piVar7,uVar10,param_1[iVar4 * 4 + 4]);
    _Dst = (undefined1 *)FUN_00555ed0(piVar7,uVar10,param_1 + iVar4 * 4 + -8);
    local_28 = CONCAT44(local_28._4_4_,_Dst);
    if (param_1[iVar4 * 4 + -6] != 0) {
      _Dst = (undefined1 *)FUN_00552230(*piVar7,0x2c);
      if (_Dst != (undefined1 *)0x0) {
        memset(_Dst,0,0x2c);
        *_Dst = 0x13;
        *(undefined2 *)(_Dst + 0x1e) = 0xffff;
        *(undefined4 *)(_Dst + 0x14) = 1;
      }
      FUN_005540d0(*piVar7,_Dst,(undefined4)local_28,0);
      if ((_Dst != (undefined1 *)0x0) && (*(int *)(*piVar7 + 0x5c) < *(int *)(_Dst + 0x14))) {
        FUN_00553950(piVar7,"Expression tree is too large (maximum depth %d)",
                     *(int *)(*piVar7 + 0x5c));
      }
      local_28 = ZEXT48(_Dst);
    }
    iVar6 = param_1[iVar4 * 4 + -0xb];
LAB_00581e2b:
    puVar11 = (undefined1 *)param_1[iVar4 * 4 + 6];
    local_28 = CONCAT44(iVar6,(undefined4)local_28);
    if (_Dst != (undefined1 *)0x0) {
      *(ushort *)(_Dst + 2) = *(ushort *)(_Dst + 2) | 0x80;
    }
    break;
  case 0x73:
    FUN_00548ec0(&local_28,piVar7,*(undefined1 *)((int)param_1 + iVar6 + 0xe),param_1 + iVar4 * 4,
                 param_1 + iVar4 * 4 + 4);
    puVar11 = (undefined1 *)local_20;
    break;
  case 0x74:
    FUN_00548ec0(&local_28,piVar7,0x4a,param_1 + iVar4 * 4 + -4,param_1 + iVar4 * 4 + 4);
    puVar11 = (undefined1 *)local_20;
    break;
  case 0x75:
    FUN_00548e20(&local_28,piVar7,0x46,param_1 + iVar4 * 4 + -4,param_1 + iVar4 * 4 + 4);
    FUN_0052e030(piVar7,param_1[iVar4 * 4 + 4],(undefined4)local_28,0x49);
    puVar11 = (undefined1 *)local_20;
    break;
  case 0x76:
    FUN_00548e20(&local_28,piVar7,0x92,param_1 + iVar4 * 4 + -8,param_1 + iVar4 * 4 + 4);
    FUN_0052e030(piVar7,param_1[iVar4 * 4 + 4],(undefined4)local_28,0x4a);
    puVar11 = (undefined1 *)local_20;
    break;
  case 0x77:
    FUN_00548f50(&local_28,piVar7,*(undefined1 *)((int)param_1 + iVar6 + -2),param_1 + iVar4 * 4 + 4
                 ,param_1 + iVar4 * 4);
    puVar11 = (undefined1 *)local_20;
    break;
  case 0x78:
    FUN_00548f50(&local_28,piVar7,0x9c,param_1 + iVar4 * 4 + 4,param_1 + iVar4 * 4);
    puVar11 = (undefined1 *)local_20;
    break;
  case 0x79:
    FUN_00548f50(&local_28,piVar7,0x9d,param_1 + iVar4 * 4 + 4,param_1 + iVar4 * 4);
    puVar11 = (undefined1 *)local_20;
    break;
  case 0x7a:
    uVar10 = FUN_005565a0(piVar7,0,param_1[iVar4 * 4 + -4]);
    local_2c = (undefined1 *)FUN_005565a0(piVar7,uVar10,param_1[iVar4 * 4 + 4]);
    local_c = param_1[iVar4 * 4 + -0xc];
    puVar11 = (undefined1 *)FUN_00552230(*piVar7,0x2c);
    if (puVar11 != (undefined1 *)0x0) {
      memset(puVar11,0,0x2c);
      *puVar11 = 0x47;
      *(undefined2 *)(puVar11 + 0x1e) = 0xffff;
      *(undefined4 *)(puVar11 + 0x14) = 1;
    }
    FUN_005540d0(*piVar7,puVar11,local_c,0);
    if ((puVar11 != (undefined1 *)0x0) && (*(int *)(*piVar7 + 0x5c) < *(int *)(puVar11 + 0x14))) {
      FUN_00553950(piVar7,"Expression tree is too large (maximum depth %d)",*(int *)(*piVar7 + 0x5c)
                  );
    }
    local_28 = CONCAT44(local_28._4_4_,puVar11);
    if (puVar11 == (undefined1 *)0x0) {
      FUN_00556700(*piVar7,local_2c);
    }
    else {
      *(undefined1 **)(puVar11 + 0x10) = local_2c;
    }
    if (param_1[iVar4 * 4 + -8] != 0) {
      local_2c = (undefined1 *)FUN_00552230(*piVar7,0x2c);
      if (local_2c != (undefined1 *)0x0) {
        memset(local_2c,0,0x2c);
        *local_2c = 0x13;
        *(undefined2 *)(local_2c + 0x1e) = 0xffff;
        *(undefined4 *)(local_2c + 0x14) = 1;
      }
      FUN_005540d0(*piVar7,local_2c,puVar11,0);
      puVar11 = local_2c;
      if ((local_2c != (undefined1 *)0x0) && (*(int *)(*piVar7 + 0x5c) < *(int *)(local_2c + 0x14)))
      {
        FUN_00553950(piVar7,"Expression tree is too large (maximum depth %d)",
                     *(int *)(*piVar7 + 0x5c));
      }
      local_28 = ZEXT48(puVar11);
    }
    local_28 = CONCAT44(param_1[iVar4 * 4 + -0xb],(undefined4)local_28);
    puVar11 = (undefined1 *)param_1[iVar4 * 4 + 6];
    break;
  case 0x7b:
    if (param_1[iVar4 * 4] == 0) {
      iVar6 = FUN_00553bb0(*piVar7,0x81,&PTR_DAT_007122d8 + param_1[iVar4 * 4 + -8] * 2,1);
      FUN_005540d0(*piVar7,iVar6,0,0);
      if ((iVar6 != 0) && (*(int *)(*piVar7 + 0x5c) < *(int *)(iVar6 + 0x14))) {
        FUN_00553950(piVar7,"Expression tree is too large (maximum depth %d)",
                     *(int *)(*piVar7 + 0x5c));
      }
      local_28 = CONCAT44(local_28._4_4_,iVar6);
      FUN_00555e30(*piVar7,param_1[iVar4 * 4 + -0xc]);
      local_28 = CONCAT44(param_1[iVar4 * 4 + -0xb],(undefined4)local_28);
      puVar11 = (undefined1 *)(param_1[iVar4 * 4 + 5] + param_1[iVar4 * 4 + 4]);
      break;
    }
    local_c = param_1[iVar4 * 4 + -0xc];
    puVar11 = (undefined1 *)FUN_00552230(*piVar7,0x2c);
    if (puVar11 != (undefined1 *)0x0) {
      memset(puVar11,0,0x2c);
      *puVar11 = 0x48;
      *(undefined2 *)(puVar11 + 0x1e) = 0xffff;
      *(undefined4 *)(puVar11 + 0x14) = 1;
    }
    FUN_005540d0(*piVar7,puVar11,local_c,0);
    if ((puVar11 != (undefined1 *)0x0) && (*(int *)(*piVar7 + 0x5c) < *(int *)(puVar11 + 0x14))) {
      FUN_00553950(piVar7,"Expression tree is too large (maximum depth %d)",*(int *)(*piVar7 + 0x5c)
                  );
    }
    local_28 = CONCAT44(local_28._4_4_,puVar11);
    if (puVar11 == (undefined1 *)0x0) {
      FUN_00556700(*piVar7,param_1[iVar4 * 4]);
    }
    else {
      *(int *)(puVar11 + 0x10) = param_1[iVar4 * 4];
      FUN_00556b40(piVar7,puVar11);
    }
    goto LAB_005821ea;
  case 0x7c:
    puVar11 = (undefined1 *)FUN_00552230(*piVar7,0x2c);
    if (puVar11 != (undefined1 *)0x0) {
      memset(puVar11,0,0x2c);
      *puVar11 = 0x74;
      *(undefined2 *)(puVar11 + 0x1e) = 0xffff;
      *(undefined4 *)(puVar11 + 0x14) = 1;
    }
    FUN_005540d0(*piVar7,puVar11,0,0);
    if ((puVar11 != (undefined1 *)0x0) && (*(int *)(*piVar7 + 0x5c) < *(int *)(puVar11 + 0x14))) {
      FUN_00553950(piVar7,"Expression tree is too large (maximum depth %d)",*(int *)(*piVar7 + 0x5c)
                  );
    }
    local_28 = CONCAT44(local_28._4_4_,puVar11);
    if (puVar11 == (undefined1 *)0x0) {
      FUN_00566d10(*piVar7,param_1[iVar4 * 4]);
      local_28 = CONCAT44(param_1[iVar4 * 4 + -4],(undefined4)local_28);
      puVar11 = (undefined1 *)(param_1[iVar4 * 4 + 5] + param_1[iVar4 * 4 + 4]);
    }
    else {
      *(int *)(puVar11 + 0x10) = param_1[iVar4 * 4];
      *(ushort *)(puVar11 + 2) = *(ushort *)(puVar11 + 2) | 0x800;
      FUN_00556b40(piVar7,puVar11);
      local_28 = CONCAT44(param_1[iVar4 * 4 + -4],(undefined4)local_28);
      puVar11 = (undefined1 *)(param_1[iVar4 * 4 + 5] + param_1[iVar4 * 4 + 4]);
    }
    break;
  case 0x7d:
    local_c = param_1[iVar4 * 4 + -0xc];
    puVar11 = (undefined1 *)FUN_00552230(*piVar7,0x2c);
    if (puVar11 != (undefined1 *)0x0) {
      memset(puVar11,0,0x2c);
      *puVar11 = 0x48;
      *(undefined2 *)(puVar11 + 0x1e) = 0xffff;
      *(undefined4 *)(puVar11 + 0x14) = 1;
    }
    FUN_005540d0(*piVar7,puVar11,local_c,0);
    if ((puVar11 != (undefined1 *)0x0) && (*(int *)(*piVar7 + 0x5c) < *(int *)(puVar11 + 0x14))) {
      FUN_00553950(piVar7,"Expression tree is too large (maximum depth %d)",*(int *)(*piVar7 + 0x5c)
                  );
    }
    local_28 = CONCAT44(local_28._4_4_,puVar11);
    if (puVar11 == (undefined1 *)0x0) {
      FUN_00566d10(*piVar7,param_1[iVar4 * 4]);
    }
    else {
      *(int *)(puVar11 + 0x10) = param_1[iVar4 * 4];
      *(ushort *)(puVar11 + 2) = *(ushort *)(puVar11 + 2) | 0x800;
      FUN_00556b40(piVar7,puVar11);
    }
LAB_005821ea:
    if (param_1[iVar4 * 4 + -8] != 0) {
      local_2c = (undefined1 *)FUN_00552230(*piVar7,0x2c);
      if (local_2c != (undefined1 *)0x0) {
        memset(local_2c,0,0x2c);
        *local_2c = 0x13;
        *(undefined2 *)(local_2c + 0x1e) = 0xffff;
        *(undefined4 *)(local_2c + 0x14) = 1;
      }
      FUN_005540d0(*piVar7,local_2c,puVar11,0);
      puVar11 = local_2c;
      if ((local_2c != (undefined1 *)0x0) && (*(int *)(*piVar7 + 0x5c) < *(int *)(local_2c + 0x14)))
      {
        FUN_00553950(piVar7,"Expression tree is too large (maximum depth %d)",
                     *(int *)(*piVar7 + 0x5c));
      }
      local_28 = ZEXT48(puVar11);
    }
    local_28 = CONCAT44(param_1[iVar4 * 4 + -0xb],(undefined4)local_28);
    puVar11 = (undefined1 *)(param_1[iVar4 * 4 + 5] + param_1[iVar4 * 4 + 4]);
    break;
  case 0x7e:
    local_2c = (undefined1 *)FUN_00567180(*piVar7,0,param_1 + iVar4 * 4,param_1 + iVar4 * 4 + 4);
    local_c = param_1[iVar4 * 4 + -8];
    puVar11 = (undefined1 *)FUN_00552230(*piVar7,0x2c);
    if (puVar11 != (undefined1 *)0x0) {
      memset(puVar11,0,0x2c);
      *puVar11 = 0x48;
      *(undefined2 *)(puVar11 + 0x1e) = 0xffff;
      *(undefined4 *)(puVar11 + 0x14) = 1;
    }
    FUN_005540d0(*piVar7,puVar11,local_c,0);
    if ((puVar11 != (undefined1 *)0x0) && (*(int *)(*piVar7 + 0x5c) < *(int *)(puVar11 + 0x14))) {
      FUN_00553950(piVar7,"Expression tree is too large (maximum depth %d)",*(int *)(*piVar7 + 0x5c)
                  );
    }
    local_28 = CONCAT44(local_28._4_4_,puVar11);
    if (puVar11 == (undefined1 *)0x0) {
      FUN_00567370(*piVar7,local_2c);
    }
    else {
      uVar10 = FUN_00566e90(piVar7,0,local_2c,0,0,0,0,0,0,0);
      *(undefined4 *)(puVar11 + 0x10) = uVar10;
      *(ushort *)(puVar11 + 2) = *(ushort *)(puVar11 + 2) | 0x800;
      FUN_00556b40(piVar7,puVar11);
    }
    if (param_1[iVar4 * 4 + -4] != 0) {
      local_2c = (undefined1 *)FUN_00552230(*piVar7,0x2c);
      if (local_2c != (undefined1 *)0x0) {
        memset(local_2c,0,0x2c);
        *local_2c = 0x13;
        *(undefined2 *)(local_2c + 0x1e) = 0xffff;
        *(undefined4 *)(local_2c + 0x14) = 1;
      }
      FUN_005540d0(*piVar7,local_2c,puVar11,0);
      puVar11 = local_2c;
      if ((local_2c != (undefined1 *)0x0) && (*(int *)(*piVar7 + 0x5c) < *(int *)(local_2c + 0x14)))
      {
        FUN_00553950(piVar7,"Expression tree is too large (maximum depth %d)",
                     *(int *)(*piVar7 + 0x5c));
      }
      local_28 = ZEXT48(puVar11);
    }
    local_28 = CONCAT44(param_1[iVar4 * 4 + -7],(undefined4)local_28);
    if (param_1[iVar4 * 4 + 4] == 0) {
      puVar11 = (undefined1 *)(param_1[iVar4 * 4 + 1] + param_1[iVar4 * 4]);
    }
    else {
      puVar11 = (undefined1 *)(param_1[iVar4 * 4 + 5] + param_1[iVar4 * 4 + 4]);
    }
    break;
  case 0x7f:
    puVar11 = (undefined1 *)FUN_00552230(*piVar7,0x2c);
    if (puVar11 != (undefined1 *)0x0) {
      memset(puVar11,0,0x2c);
      *puVar11 = 0x14;
      *(undefined2 *)(puVar11 + 0x1e) = 0xffff;
      *(undefined4 *)(puVar11 + 0x14) = 1;
    }
    FUN_005540d0(*piVar7,puVar11,0,0);
    if ((puVar11 != (undefined1 *)0x0) && (*(int *)(*piVar7 + 0x5c) < *(int *)(puVar11 + 0x14))) {
      FUN_00553950(piVar7,"Expression tree is too large (maximum depth %d)",*(int *)(*piVar7 + 0x5c)
                  );
    }
    local_28 = CONCAT44(local_28._4_4_,puVar11);
    if (puVar11 == (undefined1 *)0x0) {
      FUN_00566d10(*piVar7,param_1[iVar4 * 4]);
      local_28 = CONCAT44(param_1[iVar4 * 4 + -8],(undefined4)local_28);
      puVar11 = (undefined1 *)(param_1[iVar4 * 4 + 5] + param_1[iVar4 * 4 + 4]);
    }
    else {
      *(int *)(puVar11 + 0x10) = param_1[iVar4 * 4];
      *(ushort *)(puVar11 + 2) = *(ushort *)(puVar11 + 2) | 0x800;
      FUN_00556b40(piVar7,puVar11);
      local_28 = CONCAT44(param_1[iVar4 * 4 + -8],(undefined4)local_28);
      puVar11 = (undefined1 *)(param_1[iVar4 * 4 + 5] + param_1[iVar4 * 4 + 4]);
    }
    break;
  case 0x80:
    local_c = param_1[iVar4 * 4];
    iVar6 = param_1[iVar4 * 4 + -8];
    puVar11 = (undefined1 *)FUN_00552230(*piVar7,0x2c);
    if (puVar11 != (undefined1 *)0x0) {
      memset(puVar11,0,0x2c);
      *puVar11 = 0x86;
      *(undefined2 *)(puVar11 + 0x1e) = 0xffff;
      *(undefined4 *)(puVar11 + 0x14) = 1;
    }
    FUN_005540d0(*piVar7,puVar11,iVar6,local_c);
    if ((puVar11 != (undefined1 *)0x0) && (*(int *)(*piVar7 + 0x5c) < *(int *)(puVar11 + 0x14))) {
      FUN_00553950(piVar7,"Expression tree is too large (maximum depth %d)",*(int *)(*piVar7 + 0x5c)
                  );
    }
    local_28 = CONCAT44(local_28._4_4_,puVar11);
    if (puVar11 == (undefined1 *)0x0) {
      FUN_00556700(*piVar7,param_1[iVar4 * 4 + -4]);
      local_28 = CONCAT44(param_1[iVar4 * 4 + -0xc],(undefined4)local_28);
      puVar11 = (undefined1 *)(param_1[iVar4 * 4 + 5] + param_1[iVar4 * 4 + 4]);
    }
    else {
      *(int *)(puVar11 + 0x10) = param_1[iVar4 * 4 + -4];
      FUN_00556b40(piVar7,puVar11);
      local_28 = CONCAT44(param_1[iVar4 * 4 + -0xc],(undefined4)local_28);
      puVar11 = (undefined1 *)(param_1[iVar4 * 4 + 5] + param_1[iVar4 * 4 + 4]);
    }
    break;
  case 0x81:
    iVar8 = param_1[iVar4 * 4 + -4];
    iVar6 = param_1[iVar4 * 4 + -0xc];
    goto LAB_00582654;
  case 0x82:
    iVar8 = param_1[iVar4 * 4 + -4];
    iVar6 = 0;
LAB_00582654:
    uVar10 = FUN_005565a0(piVar7,iVar6,iVar8);
    uVar10 = FUN_005565a0(piVar7,uVar10,param_1[iVar4 * 4 + 4]);
    local_28 = CONCAT44(local_28._4_4_,uVar10);
    puVar11 = local_1c;
    break;
  case 0x83:
    uVar10 = FUN_005565a0(piVar7,param_1[iVar4 * 4 + -4],param_1[iVar4 * 4 + 4]);
    local_28 = CONCAT44(local_28._4_4_,uVar10);
    puVar11 = local_1c;
    break;
  case 0x84:
    uVar10 = FUN_005565a0(piVar7,0,param_1[iVar4 * 4 + 4]);
    local_28 = CONCAT44(local_28._4_4_,uVar10);
    puVar11 = local_1c;
    break;
  case 0x85:
    uVar10 = FUN_00567180(*piVar7,0,param_1 + iVar4 * 4 + -8,0,param_1[iVar4 * 4],
                          param_1[iVar4 * 4 + -0x20],param_1 + iVar4 * 4 + -0x24,
                          param_1 + iVar4 * 4 + 4,0,param_1[iVar4 * 4 + -0x18]);
    FUN_00551790(piVar7,param_1 + iVar4 * 4 + -0x14,param_1 + iVar4 * 4 + -0x10,uVar10);
    puVar11 = local_1c;
    break;
  case 0x86:
    local_28 = 2;
    break;
  case 0x87:
    uVar10 = FUN_00553ae0(piVar7,0,param_1 + iVar4 * 4);
    iVar6 = param_1[iVar4 * 4 + -0xc];
    goto LAB_00582701;
  case 0x88:
    uVar10 = FUN_00553ae0(piVar7,0,param_1 + iVar4 * 4);
    iVar6 = 0;
LAB_00582701:
    piVar9 = (int *)FUN_005565a0(piVar7,iVar6,uVar10);
    local_28 = CONCAT44(local_28._4_4_,piVar9);
    FUN_00556980(piVar7,piVar9,param_1 + iVar4 * 4 + -4,1);
    FUN_00556650(piVar7,piVar9,"index");
    puVar11 = local_1c;
    if (piVar9 != (int *)0x0) {
      *(char *)(piVar9[2] + -8 + *piVar9 * 0x14) = (char)param_1[iVar4 * 4 + 4];
    }
    break;
  case 0x89:
    FUN_00552ca0(piVar7,param_1[iVar4 * 4 + 4],param_1[iVar4 * 4]);
    puVar11 = local_1c;
    break;
  case 0x8a:
    FUN_0056b870(piVar7);
    puVar11 = local_1c;
    break;
  case 0x8b:
    FUN_00561270(piVar7,param_1 + iVar4 * 4,param_1 + iVar4 * 4 + 4,0,0);
    puVar11 = local_1c;
    break;
  case 0x8c:
    uVar10 = 0;
    goto LAB_00582793;
  case 0x8d:
    FUN_00561270(piVar7,param_1 + iVar4 * 4 + -0xc,param_1 + iVar4 * 4 + -8,param_1 + iVar4 * 4,0);
    puVar11 = local_1c;
    break;
  case 0x8e:
    uVar10 = 1;
LAB_00582793:
    FUN_00561270(piVar7,param_1 + iVar4 * 4 + -8,param_1 + iVar4 * 4 + -4,param_1 + iVar4 * 4 + 4,
                 uVar10);
    puVar11 = local_1c;
    break;
  case 0x8f:
    FUN_00561270(piVar7,param_1 + iVar4 * 4 + -0xc,param_1 + iVar4 * 4 + -8,param_1 + iVar4 * 4,1);
    puVar11 = local_1c;
    break;
  case 0x90:
    local_10 = param_1[iVar4 * 4 + -8];
    local_c = (param_1[iVar4 * 4 + 5] + param_1[iVar4 * 4 + 4]) - local_10;
    FUN_005576f0(piVar7,param_1[iVar4 * 4],&local_10);
    puVar11 = local_1c;
    break;
  case 0x91:
    FUN_0054b890(piVar7,param_1 + iVar4 * 4 + -0x18,param_1 + iVar4 * 4 + -0x14,
                 param_1[iVar4 * 4 + -0x10],param_1[iVar4 * 4 + -0xc],param_1[iVar4 * 4 + -0xb],
                 param_1[iVar4 * 4 + -4],param_1[iVar4 * 4 + 4],param_1[iVar4 * 4 + -0x24],
                 param_1[iVar4 * 4 + -0x1c]);
    puVar11 = local_1c;
    if (param_1[iVar4 * 4 + -0x13] == 0) {
      local_28 = *(ulonglong *)(param_1 + iVar4 * 4 + -0x18);
    }
    else {
      local_28 = *(ulonglong *)(param_1 + iVar4 * 4 + -0x14);
    }
    break;
  case 0x92:
    local_28 = 0x22;
    break;
  case 0x93:
    local_28 = 0x1e;
    break;
  case 0x94:
    local_28 = 0x30;
    break;
  case 0x95:
    local_28 = (ulonglong)*(byte *)((int)param_1 + iVar6 + 0xe);
    break;
  case 0x96:
    local_28 = CONCAT44(param_1[iVar4 * 4 + 4],0x6b);
    break;
  case 0x97:
    *(int *)(*(int *)(param_1[iVar4 * 4 + -4] + 0x24) + 0x20) = param_1[iVar4 * 4];
    *(int *)(param_1[iVar4 * 4 + -4] + 0x24) = param_1[iVar4 * 4];
    local_28 = (ulonglong)(uint)param_1[iVar4 * 4 + -4];
    break;
  case 0x98:
    *(int *)(param_1[iVar4 * 4] + 0x24) = param_1[iVar4 * 4];
  case 0x40:
    local_28 = (ulonglong)(uint)param_1[iVar4 * 4];
    break;
  case 0x99:
    local_28 = *(ulonglong *)(param_1 + iVar4 * 4 + 4);
    FUN_00553950(piVar7,
                 "qualified table names are not allowed on INSERT, UPDATE, and DELETE statements within triggers"
                );
    puVar11 = local_1c;
    break;
  case 0x9a:
    FUN_00553950(piVar7,
                 "the INDEXED BY clause is not allowed on UPDATE or DELETE statements within triggers"
                );
    puVar11 = local_1c;
    break;
  case 0x9b:
    FUN_00553950(piVar7,
                 "the NOT INDEXED clause is not allowed on UPDATE or DELETE statements within triggers"
                );
    puVar11 = local_1c;
    break;
  case 0x9c:
    uVar10 = FUN_00568700(*piVar7,param_1 + iVar4 * 4 + -0xc,param_1[iVar4 * 4],
                          param_1[iVar4 * 4 + 4],(char)param_1[iVar4 * 4 + -0x10]);
    local_28 = CONCAT44(local_28._4_4_,uVar10);
    puVar11 = local_1c;
    break;
  case 0x9d:
    uVar10 = FUN_00568560(*piVar7,param_1 + iVar4 * 4 + -4,param_1[iVar4 * 4],param_1[iVar4 * 4 + 4]
                          ,param_1[iVar4 * 4 + 5],(char)param_1[iVar4 * 4 + -0xc]);
    local_28 = CONCAT44(local_28._4_4_,uVar10);
    puVar11 = local_1c;
    break;
  case 0x9e:
    uVar10 = FUN_00568560(*piVar7,param_1 + iVar4 * 4 + -4,param_1[iVar4 * 4],0,
                          param_1[iVar4 * 4 + 4],(char)param_1[iVar4 * 4 + -0xc]);
    local_28 = CONCAT44(local_28._4_4_,uVar10);
    puVar11 = local_1c;
    break;
  case 0x9f:
    uVar10 = FUN_005684e0(*piVar7,param_1 + iVar4 * 4 + -4,param_1[iVar4 * 4 + 4]);
    local_28 = CONCAT44(local_28._4_4_,uVar10);
    puVar11 = local_1c;
    break;
  case 0xa0:
    uVar10 = FUN_00568690(*piVar7,param_1[iVar4 * 4 + 4]);
    local_28 = CONCAT44(local_28._4_4_,uVar10);
    puVar11 = local_1c;
    break;
  case 0xa1:
    puVar11 = (undefined1 *)FUN_00552230(*piVar7,0x2c);
    if (puVar11 != (undefined1 *)0x0) {
      memset(puVar11,0,0x2c);
      *puVar11 = 0x38;
      *(undefined2 *)(puVar11 + 0x1e) = 0xffff;
      *(undefined4 *)(puVar11 + 0x14) = 1;
    }
    FUN_005540d0(*piVar7,puVar11,0,0);
    if ((puVar11 != (undefined1 *)0x0) && (*(int *)(*piVar7 + 0x5c) < *(int *)(puVar11 + 0x14))) {
      FUN_00553950(piVar7,"Expression tree is too large (maximum depth %d)",*(int *)(*piVar7 + 0x5c)
                  );
    }
    if (puVar11 != (undefined1 *)0x0) {
      puVar11[1] = 4;
    }
    local_28 = CONCAT44(param_1[iVar4 * 4 + -8],puVar11);
    puVar11 = (undefined1 *)(param_1[iVar4 * 4 + 5] + param_1[iVar4 * 4 + 4]);
    break;
  case 0xa2:
    iVar6 = FUN_00553bb0(*piVar7,0x38,param_1 + iVar4 * 4,1);
    FUN_005540d0(*piVar7,iVar6,0,0);
    if ((iVar6 != 0) && (*(int *)(*piVar7 + 0x5c) < *(int *)(iVar6 + 0x14))) {
      FUN_00553950(piVar7,"Expression tree is too large (maximum depth %d)",*(int *)(*piVar7 + 0x5c)
                  );
    }
    if (iVar6 != 0) {
      *(char *)(iVar6 + 1) = (char)param_1[iVar4 * 4 + -8];
    }
    local_28 = CONCAT44(param_1[iVar4 * 4 + -0x10],iVar6);
    puVar11 = (undefined1 *)(param_1[iVar4 * 4 + 5] + param_1[iVar4 * 4 + 4]);
    break;
  case 0xa3:
    local_28 = 3;
    break;
  case 0xa4:
    FUN_005530e0(piVar7,param_1[iVar4 * 4 + 4],param_1[iVar4 * 4]);
    puVar11 = local_1c;
    break;
  case 0xa5:
    FUN_005308c0(piVar7,0x18,&DAT_00712670,param_1[iVar4 * 4 + -8],param_1[iVar4 * 4 + -8],
                 param_1[iVar4 * 4],param_1[iVar4 * 4 + 4]);
    puVar11 = local_1c;
    break;
  case 0xa6:
    FUN_005308c0(piVar7,0x19,&DAT_00712604,param_1[iVar4 * 4 + 4],0,0,param_1[iVar4 * 4 + 4]);
    puVar11 = local_1c;
    break;
  case 0xa7:
    FUN_00563e10(piVar7,0,0);
    puVar11 = local_1c;
    break;
  case 0xa8:
    FUN_00563e10(piVar7,param_1 + iVar4 * 4,param_1 + iVar4 * 4 + 4);
    puVar11 = local_1c;
    break;
  case 0xa9:
    FUN_00549fd0(piVar7,0,0);
    puVar11 = local_1c;
    break;
  case 0xaa:
    FUN_00549fd0(piVar7,param_1 + iVar4 * 4,param_1 + iVar4 * 4 + 4);
    puVar11 = local_1c;
    break;
  case 0xab:
    FUN_00549b90(piVar7,param_1[iVar4 * 4 + -8],param_1 + iVar4 * 4 + 4);
    puVar11 = local_1c;
    break;
  case 0xac:
    FUN_005498e0(piVar7,param_1 + iVar4 * 4 + 4);
    puVar11 = local_1c;
    break;
  case 0xad:
    *(undefined1 *)(*piVar7 + 0xea) = 0;
    FUN_005496d0(piVar7,param_1[iVar4 * 4 + 4]);
    puVar11 = local_1c;
    break;
  case 0xae:
    FUN_005771f0(piVar7,0);
    puVar11 = local_1c;
    break;
  case 0xaf:
    FUN_005771f0(piVar7,param_1 + iVar4 * 4 + 4);
    puVar11 = local_1c;
    break;
  case 0xb0:
    FUN_00576df0(piVar7,param_1 + iVar4 * 4 + -8,param_1 + iVar4 * 4 + -4,param_1 + iVar4 * 4 + 4,
                 param_1[iVar4 * 4 + -0xc]);
    puVar11 = local_1c;
    break;
  case 0xb1:
    FUN_00528cb0(piVar7);
    piVar7[0x86] = 0;
    piVar7[0x87] = 0;
    puVar11 = local_1c;
    break;
  case 0xb2:
    FUN_00576d10(piVar7,param_1 + iVar4 * 4 + 4);
    puVar11 = local_1c;
  }
switchD_00580d2a_caseD_b3:
  bVar2 = (&DAT_007152c8)[param_2 * 2];
  local_1c = (undefined1 *)(uint)bVar2;
  uVar12 = (uint)(byte)(&DAT_007152c9)[param_2 * 2];
  *param_1 = *param_1 - uVar12;
  puVar13 = (ushort *)(param_1 + iVar4 * 4 + uVar12 * -4 + 3);
  uVar3 = *(ushort *)
           (&DAT_007134c0 +
           ((int)*(short *)(&DAT_00714a98 + (uint)*puVar13 * 2) + (int)local_1c) * 2);
  if (0x272 < uVar3) {
    FUN_00580ac0(param_1);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar4 = *param_1 + 1;
  if (uVar12 == 0) {
    *param_1 = iVar4;
    if (iVar4 < 100) {
      *(ushort *)(param_1 + iVar4 * 4 + 3) = uVar3;
      *(ulonglong *)(param_1 + iVar4 * 4 + 4) = local_28;
      *(byte *)((int)param_1 + iVar4 * 0x10 + 0xe) = bVar2;
      param_1[iVar4 * 4 + 6] = (int)puVar11;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    FUN_00580a70(param_1,&local_28);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  *param_1 = iVar4;
  *(ulonglong *)(puVar13 + 10) = local_28;
  puVar13[8] = uVar3;
  *(byte *)(puVar13 + 9) = bVar2;
  *(undefined1 **)(puVar13 + 0xe) = puVar11;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_005830c0 @ 005830c0  kind=gamemisc  attributed-by=caller-vote  size=206 */

int FUN_005830c0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_c;
  int local_8;
  
  iVar3 = 0;
  if (*(int *)(param_1 + 0x48) != 0 || *(int *)(param_1 + 0x4c) != 0) {
    iVar1 = *(int *)(param_1 + 0x8c);
    uVar2 = *(uint *)(param_1 + 0x88);
    if ((param_2 == 0) && (uVar2 != 0 || iVar1 != 0)) {
      iVar3 = (**(code **)(**(int **)(param_1 + 0x40) + 0xc))
                        (*(int **)(param_1 + 0x40),&DAT_00714a7c,0x1c,0,0);
    }
    else {
      iVar3 = (**(code **)(**(int **)(param_1 + 0x40) + 0x10))(*(int **)(param_1 + 0x40),0,0);
    }
    if ((((iVar3 == 0) &&
         ((((*(char *)(param_1 + 7) != '\0' ||
            (iVar3 = (**(code **)(**(int **)(param_1 + 0x40) + 0x14))
                               (*(int **)(param_1 + 0x40),*(byte *)(param_1 + 0xb) | 0x10),
            iVar3 == 0)) && (-1 < iVar1)) && ((0 < iVar1 || (uVar2 != 0)))))) &&
        (iVar3 = (**(code **)(**(int **)(param_1 + 0x40) + 0x18))
                           (*(int **)(param_1 + 0x40),&local_c), iVar3 == 0)) &&
       ((iVar1 <= local_8 && ((iVar1 < local_8 || (uVar2 < local_c)))))) {
      iVar3 = (**(code **)(**(int **)(param_1 + 0x40) + 0x10))
                        (*(int **)(param_1 + 0x40),uVar2,iVar1);
    }
  }
  return iVar3;
}


/* __aulldiv @ 0068df50  kind=gamemisc  attributed-by=caller-vote  size=104 */

/* Library Function - Single Match
    __aulldiv
   
   Library: Visual Studio */

undefined8 __aulldiv(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar3 = param_1;
  uVar8 = param_4;
  uVar6 = param_2;
  uVar9 = param_3;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar5 = uVar8 >> 1;
      uVar9 = uVar9 >> 1 | (uint)((uVar8 & 1) != 0) << 0x1f;
      uVar7 = uVar6 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar6 & 1) != 0) << 0x1f;
      uVar8 = uVar5;
      uVar6 = uVar7;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar7,uVar3) / (ulonglong)uVar9;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar8 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar8)) ||
       ((param_2 <= uVar8 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  return CONCAT44(uVar3,iVar4);
}


/* __aulldvrm @ 0068dfc0  kind=gamemisc  attributed-by=caller-vote  size=149 */

/* Library Function - Single Match
    __aulldvrm
   
   Library: Visual Studio */

undefined8 __aulldvrm(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar3 = param_1;
  uVar8 = param_4;
  uVar6 = param_2;
  uVar9 = param_3;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar5 = uVar8 >> 1;
      uVar9 = uVar9 >> 1 | (uint)((uVar8 & 1) != 0) << 0x1f;
      uVar7 = uVar6 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar6 & 1) != 0) << 0x1f;
      uVar8 = uVar5;
      uVar6 = uVar7;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar7,uVar3) / (ulonglong)uVar9;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar8 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar8)) ||
       ((param_2 <= uVar8 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  return CONCAT44(uVar3,iVar4);
}


/* __aullrem @ 0068e060  kind=gamemisc  attributed-by=caller-vote  size=117 */

/* Library Function - Single Match
    __aullrem
   
   Library: Visual Studio */

undefined8 __aullrem(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  uVar3 = param_1;
  uVar4 = param_4;
  uVar9 = param_2;
  uVar10 = param_3;
  if (param_4 == 0) {
    iVar6 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) %
                 (ulonglong)param_3);
    iVar7 = 0;
  }
  else {
    do {
      uVar5 = uVar4 >> 1;
      uVar10 = uVar10 >> 1 | (uint)((uVar4 & 1) != 0) << 0x1f;
      uVar8 = uVar9 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar9 & 1) != 0) << 0x1f;
      uVar4 = uVar5;
      uVar9 = uVar8;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar8,uVar3) / (ulonglong)uVar10;
    uVar3 = (int)uVar1 * param_4;
    lVar2 = (uVar1 & 0xffffffff) * (ulonglong)param_3;
    uVar9 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar4 = (uint)lVar2;
    uVar10 = uVar9 + uVar3;
    if (((CARRY4(uVar9,uVar3)) || (param_2 < uVar10)) || ((param_2 <= uVar10 && (param_1 < uVar4))))
    {
      bVar11 = uVar4 < param_3;
      uVar4 = uVar4 - param_3;
      uVar10 = (uVar10 - param_4) - (uint)bVar11;
    }
    iVar6 = -(uVar4 - param_1);
    iVar7 = -(uint)(uVar4 - param_1 != 0) - ((uVar10 - param_2) - (uint)(uVar4 < param_1));
  }
  return CONCAT44(iVar7,iVar6);
}


