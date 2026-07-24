// artifacts (game_misc) -- server. 22 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "artifacts.h"

/* FUN_0045fce0 @ 0045fce0  kind=gamemisc  attributed-by=role:artifact  size=48 */

void __cdecl FUN_0045fce0(undefined4 param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  
  FUN_004ae680((int *)param_3[1],1);
  puVar2 = &DAT_0056de50;
  uVar1 = FUN_0045f1d0(*param_3);
  FUN_004683f0(uVar1,puVar2);
  return;
}


/* FUN_0045fd90 @ 0045fd90  kind=gamemisc  attributed-by=role:artifact  size=42 */

void __cdecl FUN_0045fd90(int param_1,undefined4 param_2,undefined4 *param_3)

{
  byte *pbVar1;
  int iVar2;
  
  pbVar1 = (byte *)FUN_004ae680((int *)*param_3,1);
  if (pbVar1 != (byte *)0x0) {
    iVar2 = FUN_00462d70(pbVar1);
    FUN_0045fbd0(param_1,iVar2);
  }
  return;
}


/* FUN_0045fee0 @ 0045fee0  kind=gamemisc  attributed-by=role:artifact  size=88 */

void __cdecl FUN_0045fee0(int param_1,undefined4 param_2,int *param_3)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  
  uVar1 = FUN_0045f1d0(*param_3);
  if (uVar1 < 3) {
    puVar2 = (&PTR_s_CURDIR_00569614)[uVar1];
  }
  else {
    puVar2 = (undefined *)0x0;
  }
  iVar3 = FUN_004b79e0((int *)(param_1 + 8),puVar2,0xffffffff,'\x01',(undefined *)0x0);
  if (iVar3 == 0x12) {
    *(undefined4 *)(param_1 + 0x38) = 0x12;
    FUN_004b79e0((int *)(param_1 + 8),"string or blob too big",0xffffffff,'\x01',(undefined *)0x0);
  }
  return;
}


/* FUN_00460010 @ 00460010  kind=gamemisc  attributed-by=role:artifact  size=855 */

void __cdecl FUN_00460010(int param_1,undefined4 param_2,undefined4 *param_3)

{
  char cVar1;
  uint uVar2;
  undefined2 *_Src;
  char *pcVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  float10 fVar10;
  int *piVar11;
  undefined4 local_4c;
  int iStack_48;
  undefined8 local_44;
  byte local_3c [52];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  piVar11 = (int *)*param_3;
  iStack_48 = param_1;
  switch(*(undefined1 *)((int)piVar11 + 0x1e)) {
  case 1:
    FUN_004b6f10((int *)(param_1 + 8),(undefined8 *)piVar11);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 2:
    fVar10 = FUN_0045f160((int)piVar11);
    local_44 = (double)fVar10;
    FUN_00466a80(0x32,local_3c,(byte *)"%!.15g");
    FUN_0048cc90(local_3c,(double *)&local_4c,0x14,'\x01');
    if (local_44 != (double)CONCAT44(iStack_48,local_4c)) {
      FUN_00466a80(0x32,local_3c,(byte *)"%!.20e");
    }
    if (*(int *)(param_1 + 8) == 0) {
      iVar5 = 1000000000;
    }
    else {
      iVar5 = *(int *)(*(int *)(param_1 + 8) + 0x50);
    }
    iVar6 = 0;
    if (-1 < iVar5) {
      do {
        if (local_3c[iVar6] == 0) break;
        iVar6 = iVar6 + 1;
      } while (iVar6 <= iVar5);
    }
    if (iVar6 <= iVar5) {
      iVar5 = FUN_004b7260((int *)(param_1 + 8),iVar6 + 1,0);
      if (iVar5 == 0) {
        memcpy(*(void **)(param_1 + 0xc),local_3c,iVar6 + 1);
        *(int *)(param_1 + 0x20) = iVar6;
        *(undefined4 *)(param_1 + 0x24) = 0x1030202;
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      goto LAB_00460356;
    }
    break;
  case 3:
    pcVar3 = (char *)FUN_004ae680(piVar11,1);
    iVar5 = iStack_48;
    if (pcVar3 == (char *)0x0) goto LAB_00460356;
    cVar1 = *pcVar3;
    local_44 = 0.0;
    local_44._4_4_ = 0;
    local_44._0_4_ = 0;
    uVar7 = 0;
    uVar2 = (uint)local_44;
    iVar6 = local_44._4_4_;
    if (cVar1 != '\0') {
      uVar7 = 0;
      do {
        if (cVar1 == '\'') {
          bVar9 = 0xfffffffe < uVar2;
          uVar2 = uVar2 + 1;
          iVar6 = iVar6 + (uint)bVar9;
        }
        cVar1 = pcVar3[uVar7 + 1];
        uVar7 = uVar7 + 1;
      } while (cVar1 != '\0');
    }
    puVar4 = (undefined1 *)
             FUN_00476020(iStack_48,uVar7 + uVar2 + 3,
                          ((int)uVar7 >> 0x1f) + iVar6 + (uint)CARRY4(uVar7,uVar2) +
                          (uint)(0xfffffffc < uVar7 + uVar2));
    if (puVar4 == (undefined1 *)0x0) goto LAB_00460356;
    *puVar4 = 0x27;
    cVar1 = *pcVar3;
    iVar6 = 1;
    while (cVar1 != '\0') {
      puVar4[iVar6] = *pcVar3;
      iVar8 = iVar6 + 1;
      if (*pcVar3 == '\'') {
        puVar4[iVar8] = 0x27;
        iVar8 = iVar6 + 2;
      }
      pcVar3 = pcVar3 + 1;
      iVar6 = iVar8;
      cVar1 = *pcVar3;
    }
    puVar4[iVar6] = 0x27;
    piVar11 = (int *)(iVar5 + 8);
    puVar4[iVar6 + 1U] = 0;
    iVar6 = FUN_004b79e0(piVar11,puVar4,iVar6 + 1U,'\x01',FUN_00466dd0);
    if (iVar6 != 0x12) goto LAB_00460356;
    *(undefined4 *)(iVar5 + 0x38) = 0x12;
    goto LAB_0046034e;
  case 4:
    iVar5 = FUN_0046b260(piVar11);
    local_44 = (double)CONCAT44(iVar5,(uint)local_44);
    uVar2 = FUN_0046b2b0((int *)*param_3);
    _Src = (undefined2 *)
           FUN_00476020(param_1,(uVar2 + 2) * 2,
                        (((int)uVar2 >> 0x1f) + (uint)(0xfffffffd < uVar2)) * 2 | uVar2 + 2 >> 0x1f)
    ;
    if (_Src != (undefined2 *)0x0) {
      if (0 < (int)uVar2) {
        iVar5 = 0;
        puVar4 = (undefined1 *)((int)_Src + 3);
        do {
          iVar6 = iVar5 + 1;
          puVar4[-1] = (&DAT_00569604)[*(byte *)(iVar5 + local_44._4_4_) >> 4];
          *puVar4 = (&DAT_00569604)[(int)*(char *)(iVar5 + local_44._4_4_) & 0xf];
          iVar5 = iVar6;
          puVar4 = puVar4 + 2;
          param_1 = iStack_48;
        } while (iVar6 < (int)uVar2);
      }
      piVar11 = (int *)(param_1 + 8);
      _Src[uVar2 + 1] = 0x27;
      *_Src = 0x2758;
      local_44 = (double)CONCAT44(piVar11,(uint)local_44);
      if (*piVar11 == 0) {
        iVar5 = 1000000000;
      }
      else {
        iVar5 = *(int *)(*piVar11 + 0x50);
      }
      iVar6 = 0;
      if (-1 < iVar5) {
        do {
          if (*(char *)(iVar6 + (int)_Src) == '\0') break;
          iVar6 = iVar6 + 1;
        } while (iVar6 <= iVar5);
      }
      if (iVar5 < iVar6) {
        *(undefined4 *)(param_1 + 0x38) = 0x12;
        FUN_004b79e0(piVar11,"string or blob too big",0xffffffff,'\x01',(undefined *)0x0);
      }
      else {
        iVar5 = FUN_004b7260(piVar11,iVar6 + 1,0);
        if (iVar5 == 0) {
          memcpy(*(void **)(param_1 + 0xc),_Src,iVar6 + 1);
          *(int *)(param_1 + 0x20) = iVar6;
          *(undefined4 *)(param_1 + 0x24) = 0x1030202;
          FUN_00466dd0((int)_Src);
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
      }
      FUN_00466dd0((int)_Src);
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    goto LAB_00460356;
  default:
    iVar5 = FUN_004b79e0((int *)(param_1 + 8),&DAT_0056ddd0,4,'\x01',(undefined *)0x0);
    if (iVar5 != 0x12) goto LAB_00460356;
  }
  piVar11 = (int *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x38) = 0x12;
LAB_0046034e:
  FUN_004b79e0(piVar11,"string or blob too big",0xffffffff,'\x01',(undefined *)0x0);
LAB_00460356:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00460630 @ 00460630  kind=gamemisc  attributed-by=role:artifact  size=354 */

void __cdecl FUN_00460630(int param_1,undefined4 param_2,undefined4 *param_3)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  
  piVar3 = (int *)*param_3;
  if ((*(byte *)(piVar3 + 7) & 0x12) == 0) {
    pbVar7 = (byte *)FUN_004ae680(piVar3,1);
  }
  else {
    FUN_004b6fa0(piVar3);
    *(ushort *)(piVar3 + 7) = *(ushort *)(piVar3 + 7) & 0xfffd | 0x10;
    if (piVar3[6] == 0) {
      pbVar7 = (byte *)0x0;
    }
    else {
      pbVar7 = (byte *)piVar3[1];
    }
  }
  piVar3 = (int *)*param_3;
  if (((*(byte *)(piVar3 + 7) & 0x10) == 0) && (iVar2 = FUN_004ae680(piVar3,1), iVar2 == 0)) {
    uVar8 = 0;
  }
  else {
    uVar8 = piVar3[6];
    if ((*(ushort *)(piVar3 + 7) & 0x4000) != 0) {
      uVar8 = uVar8 + piVar3[4];
    }
  }
  uVar6 = uVar8 * 2 + 1;
  iVar2 = (((int)uVar8 >> 0x1f) << 1 | uVar8 >> 0x1f) + (uint)(0xfffffffe < uVar8 * 2);
  piVar3 = (int *)(param_1 + 8);
  iVar4 = (int)*(uint *)(*piVar3 + 0x50) >> 0x1f;
  if ((iVar2 < iVar4) || ((iVar2 <= iVar4 && (uVar6 <= *(uint *)(*piVar3 + 0x50))))) {
    param_3 = (undefined4 *)FUN_004a0350(uVar6);
    if (param_3 == (undefined4 *)0x0) {
      FUN_0045fad0(param_1);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x38) = 0x12;
    FUN_004b79e0(piVar3,"string or blob too big",0xffffffff,'\x01',(undefined *)0x0);
    param_3 = (undefined4 *)0x0;
  }
  if (param_3 != (undefined4 *)0x0) {
    puVar5 = param_3;
    uVar6 = uVar8;
    if (0 < (int)uVar8) {
      do {
        bVar1 = *pbVar7;
        *(undefined *)puVar5 = (&DAT_00569604)[bVar1 >> 4];
        *(undefined *)((int)puVar5 + 1) = (&DAT_00569604)[bVar1 & 0xf];
        puVar5 = (undefined4 *)((int)puVar5 + 2);
        pbVar7 = pbVar7 + 1;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    *(undefined1 *)puVar5 = 0;
    iVar2 = FUN_004b79e0(piVar3,param_3,uVar8 * 2,'\x01',FUN_00466dd0);
    if (iVar2 == 0x12) {
      *(undefined4 *)(param_1 + 0x38) = 0x12;
      FUN_004b79e0(piVar3,"string or blob too big",0xffffffff,'\x01',(undefined *)0x0);
    }
  }
  return;
}


/* FUN_00460810 @ 00460810  kind=gamemisc  attributed-by=role:artifact  size=182 */

/* WARNING: Removing unreachable block (ram,0x0046088f) */

void __cdecl FUN_00460810(int param_1,undefined4 param_2,int *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong local_c;
  
  iVar2 = *(int *)(param_1 + 8);
  iVar3 = *param_3;
  uVar1 = *(ushort *)(iVar3 + 0x1c);
  if ((uVar1 & 4) == 0) {
    if ((uVar1 & 8) == 0) {
      local_c = 0;
      uVar4 = local_c;
      if ((uVar1 & 0x12) != 0) {
        FUN_0048d300(*(byte **)(iVar3 + 4),(uint *)&local_c,*(int *)(iVar3 + 0x18),
                     *(char *)(iVar3 + 0x1f));
        uVar4 = local_c;
      }
    }
    else {
      uVar4 = FUN_00477080(*(double *)(iVar3 + 8));
    }
  }
  else {
    uVar4 = *(ulonglong *)(iVar3 + 0x10);
  }
  if ((longlong)*(int *)(iVar2 + 0x50) < (longlong)uVar4) {
    *(undefined4 *)(param_1 + 0x38) = 0x12;
    FUN_004b79e0((int *)(param_1 + 8),"string or blob too big",0xffffffff,'\x01',(undefined *)0x0);
    return;
  }
  FUN_0045ff40(param_1,(int)uVar4);
  return;
}


/* FUN_004609b0 @ 004609b0  kind=gamemisc  attributed-by=role:artifact  size=637 */

void __cdecl FUN_004609b0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  void *_Src;
  size_t sVar7;
  int *piVar8;
  uint uVar9;
  void *pvVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  uint local_18;
  int local_14;
  void *local_8;
  
  iVar3 = FUN_004ae680((int *)*param_3,1);
  if (iVar3 != 0) {
    piVar5 = (int *)*param_3;
    if (((*(byte *)(piVar5 + 7) & 0x10) == 0) && (iVar4 = FUN_004ae680(piVar5,1), iVar4 == 0)) {
      iVar4 = 0;
    }
    else {
      iVar4 = piVar5[6];
      if ((*(ushort *)(piVar5 + 7) & 0x4000) != 0) {
        iVar4 = iVar4 + piVar5[4];
      }
    }
    piVar5 = (int *)FUN_004ae680((int *)param_3[1],1);
    if (piVar5 != (int *)0x0) {
      if ((char)*piVar5 == '\0') {
        FUN_004b6f10((int *)(param_1 + 8),(undefined8 *)*param_3);
        return;
      }
      uVar6 = FUN_0046b2b0((int *)param_3[1]);
      _Src = (void *)FUN_004ae680((int *)param_3[2],1);
      if (_Src != (void *)0x0) {
        sVar7 = FUN_0046b2b0((int *)param_3[2]);
        local_18 = iVar4 + 1;
        local_14 = (int)local_18 >> 0x1f;
        local_8 = (void *)FUN_00476020(param_1,local_18,local_14);
        if (local_8 != (void *)0x0) {
          iVar13 = 0;
          iVar12 = 0;
          if (-1 < (int)(iVar4 - uVar6)) {
            iVar14 = 0;
            do {
              piVar8 = (int *)(iVar3 + iVar12);
              iVar11 = *piVar8;
              piVar2 = piVar5;
              uVar9 = uVar6;
              if ((char)iVar11 == (char)*piVar5) {
                while (uVar1 = uVar9 - 4, 3 < uVar9) {
                  if (*piVar8 != *piVar2) goto LAB_00460ad6;
                  piVar8 = piVar8 + 1;
                  piVar2 = piVar2 + 1;
                  uVar9 = uVar1;
                }
                if (uVar1 != 0xfffffffc) {
LAB_00460ad6:
                  if (((char)*piVar8 != (char)*piVar2) ||
                     ((uVar1 != 0xfffffffd &&
                      ((*(char *)((int)piVar8 + 1) != *(char *)((int)piVar2 + 1) ||
                       ((uVar1 != 0xfffffffe &&
                        ((*(char *)((int)piVar8 + 2) != *(char *)((int)piVar2 + 2) ||
                         ((uVar1 != 0xffffffff &&
                          (*(char *)((int)piVar8 + 3) != *(char *)((int)piVar2 + 3)))))))))))))
                  goto LAB_00460b7e;
                }
                uVar9 = sVar7 - uVar6;
                bVar15 = CARRY4(local_18,uVar9);
                local_18 = local_18 + uVar9;
                local_14 = local_14 + ((int)uVar9 >> 0x1f) + (uint)bVar15;
                uVar9 = *(uint *)(*(int *)(param_1 + 8) + 0x50);
                iVar11 = (int)uVar9 >> 0x1f;
                iVar13 = local_14 - (uint)(local_18 == 0);
                if ((iVar11 < iVar13) || ((iVar11 <= iVar13 && (uVar9 < local_18 - 1)))) {
                  FUN_0045faa0(param_1);
                  FUN_00466dd0((int)local_8);
                  return;
                }
                iVar13 = FUN_004bc920();
                if ((iVar13 != 0) ||
                   (pvVar10 = (void *)FUN_004a6140((int)local_8,local_18), pvVar10 == (void *)0x0))
                {
                  FUN_0045fad0(param_1);
                  FUN_00466dd0((int)local_8);
                  return;
                }
                memcpy((void *)((int)pvVar10 + iVar14),_Src,sVar7);
                iVar13 = iVar14 + sVar7;
                iVar12 = iVar12 + (uVar6 - 1);
                local_8 = pvVar10;
              }
              else {
LAB_00460b7e:
                iVar13 = iVar14 + 1;
                *(char *)(iVar14 + (int)local_8) = (char)iVar11;
              }
              iVar12 = iVar12 + 1;
              iVar14 = iVar13;
            } while (iVar12 <= (int)(iVar4 - uVar6));
          }
          memcpy((void *)(iVar13 + (int)local_8),(void *)(iVar3 + iVar12),iVar4 - iVar12);
          sVar7 = iVar13 + (iVar4 - iVar12);
          *(undefined1 *)(sVar7 + (int)local_8) = 0;
          iVar3 = FUN_004b79e0((int *)(param_1 + 8),local_8,sVar7,'\x01',FUN_00466dd0);
          if (iVar3 == 0x12) {
            *(undefined4 *)(param_1 + 0x38) = 0x12;
            FUN_004b79e0((int *)(param_1 + 8),"string or blob too big",0xffffffff,'\x01',
                         (undefined *)0x0);
          }
        }
      }
    }
  }
  return;
}


/* FUN_00461530 @ 00461530  kind=gamemisc  attributed-by=role:artifact  size=111 */

void __cdecl FUN_00461530(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  ulonglong local_38 [6];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  iVar1 = FUN_0047eaa0(param_1,param_2,param_3,local_38);
  if (iVar1 == 0) {
    FUN_004753b0(local_38);
    FUN_004b7790((int *)(param_1 + 8),(double)(longlong)local_38[0] / 86400000.0);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00461610 @ 00461610  kind=gamemisc  attributed-by=role:artifact  size=378 */

/* WARNING: Removing unreachable block (ram,0x00461a05) */
/* WARNING: Removing unreachable block (ram,0x00461a10) */
/* WARNING: Removing unreachable block (ram,0x00461a2b) */
/* WARNING: Removing unreachable block (ram,0x00461a32) */
/* WARNING: Removing unreachable block (ram,0x00461a4a) */
/* WARNING: Removing unreachable block (ram,0x00461a5b) */
/* WARNING: Removing unreachable block (ram,0x00461a5f) */
/* WARNING: Removing unreachable block (ram,0x00461a79) */
/* WARNING: Removing unreachable block (ram,0x00461a84) */
/* WARNING: Removing unreachable block (ram,0x00461a4e) */
/* WARNING: Removing unreachable block (ram,0x00461a39) */
/* WARNING: Removing unreachable block (ram,0x00461a17) */
/* WARNING: Removing unreachable block (ram,0x00461a9c) */

void __cdecl FUN_00461610(int *param_1,int param_2,undefined4 *param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  byte *pbVar7;
  byte *pbVar8;
  int *piVar9;
  ushort uVar10;
  uint uVar11;
  int iVar12;
  byte *local_18;
  undefined **local_14;
  int *local_10;
  int local_c;
  undefined **local_8;
  
  if (*(char *)((int)*param_3 + 0x1e) == '\x05') {
    return;
  }
  local_10 = (int *)FUN_004ae680((int *)*param_3,1);
  if (local_10 == (int *)0x0) {
    return;
  }
  piVar9 = (int *)*param_3;
  if ((*(byte *)(piVar9 + 7) & 0x10) == 0) {
    iVar4 = FUN_004ae680(piVar9,1);
    puVar5 = (undefined4 *)0x0;
    if (iVar4 != 0) goto LAB_00461654;
  }
  else {
LAB_00461654:
    puVar5 = (undefined4 *)piVar9[6];
    if ((*(ushort *)(piVar9 + 7) & 0x4000) != 0) {
      puVar5 = (undefined4 *)((int)puVar5 + piVar9[4]);
    }
  }
  if (param_2 == 1) {
    local_c = 1;
    local_8 = (undefined **)&DAT_005698c7;
    local_14 = &PTR_DAT_00569a1c;
    local_18 = (byte *)0x0;
  }
  else {
    local_18 = (byte *)FUN_004ae680((int *)param_3[1],1);
    if (local_18 == (byte *)0x0) {
      return;
    }
    uVar11 = 0;
    pbVar8 = local_18;
    param_3 = puVar5;
    if (*local_18 == 0) goto LAB_004618e7;
    do {
      pbVar7 = pbVar8 + 1;
      if (0xbf < *pbVar8) {
        bVar1 = *pbVar7;
        while ((bVar1 & 0xc0) == 0x80) {
          pbVar8 = pbVar7 + 1;
          pbVar7 = pbVar7 + 1;
          bVar1 = *pbVar8;
        }
      }
      uVar11 = uVar11 + 1;
      pbVar8 = pbVar7;
    } while (*pbVar7 != 0);
    if ((int)uVar11 < 1) goto LAB_004618e7;
    local_14 = (undefined **)
               FUN_00476020((int)param_1,uVar11 * 5,
                            ((int)uVar11 >> 0x1f) + (((int)uVar11 >> 0x1f) << 2 | uVar11 >> 0x1e) +
                            (uint)CARRY4(uVar11,uVar11 * 4));
    if (local_14 == (undefined **)0x0) {
      return;
    }
    iVar4 = 0;
    local_8 = local_14 + uVar11;
    pbVar8 = local_18;
    if (*local_18 == 0) goto LAB_004618e7;
    do {
      local_14[iVar4] = pbVar8;
      pbVar7 = pbVar8 + 1;
      if (0xbf < *pbVar8) {
        bVar1 = *pbVar7;
        while ((bVar1 & 0xc0) == 0x80) {
          pbVar8 = pbVar7 + 1;
          pbVar7 = pbVar7 + 1;
          bVar1 = *pbVar8;
        }
      }
      local_c = iVar4 + 1;
      *(char *)(iVar4 + (int)local_8) = (char)pbVar7 - *(char *)(local_14 + iVar4);
      pbVar8 = pbVar7;
      iVar4 = local_c;
    } while (*pbVar7 != 0);
    if (local_c < 1) goto LAB_004618e7;
  }
  param_3 = puVar5;
  if (((*(uint *)(*param_1 + 4) & 1) != 0) && (0 < (int)puVar5)) {
LAB_00461790:
    iVar4 = 0;
    param_3 = puVar5;
    if (0 < local_c) {
      do {
        uVar11 = (uint)*(byte *)(iVar4 + (int)local_8);
        if ((int)uVar11 <= (int)puVar5) {
          piVar9 = (int *)local_14[iVar4];
          piVar6 = local_10;
          uVar3 = uVar11;
          while (uVar2 = uVar3 - 4, 3 < uVar3) {
            if (*piVar6 != *piVar9) goto LAB_004617cb;
            piVar6 = piVar6 + 1;
            piVar9 = piVar9 + 1;
            uVar3 = uVar2;
          }
          if (uVar2 == 0xfffffffc) goto LAB_00461811;
LAB_004617cb:
          if (((char)*piVar6 == (char)*piVar9) &&
             ((uVar2 == 0xfffffffd ||
              ((*(char *)((int)piVar6 + 1) == *(char *)((int)piVar9 + 1) &&
               ((uVar2 == 0xfffffffe ||
                ((*(char *)((int)piVar6 + 2) == *(char *)((int)piVar9 + 2) &&
                 ((uVar2 == 0xffffffff || (*(char *)((int)piVar6 + 3) == *(char *)((int)piVar9 + 3))
                  ))))))))))) goto LAB_00461811;
        }
        iVar4 = iVar4 + 1;
        if (local_c <= iVar4) break;
      } while( true );
    }
  }
LAB_00461832:
  if (((*(uint *)(*param_1 + 4) & 2) != 0) && (0 < (int)param_3)) {
LAB_00461843:
    iVar4 = 0;
    if (0 < local_c) {
      do {
        uVar11 = (uint)*(byte *)(iVar4 + (int)local_8);
        if ((int)uVar11 <= (int)param_3) {
          piVar6 = (int *)(((int)param_3 - uVar11) + (int)local_10);
          piVar9 = (int *)local_14[iVar4];
          uVar3 = uVar11;
          while (uVar2 = uVar3 - 4, 3 < uVar3) {
            if (*piVar6 != *piVar9) goto LAB_00461886;
            piVar6 = piVar6 + 1;
            piVar9 = piVar9 + 1;
            uVar3 = uVar2;
          }
          if (uVar2 == 0xfffffffc) goto LAB_004618c3;
LAB_00461886:
          if (((char)*piVar6 == (char)*piVar9) &&
             ((uVar2 == 0xfffffffd ||
              ((*(char *)((int)piVar6 + 1) == *(char *)((int)piVar9 + 1) &&
               ((uVar2 == 0xfffffffe ||
                ((*(char *)((int)piVar6 + 2) == *(char *)((int)piVar9 + 2) &&
                 ((uVar2 == 0xffffffff || (*(char *)((int)piVar6 + 3) == *(char *)((int)piVar9 + 3))
                  ))))))))))) goto LAB_004618c3;
        }
        iVar4 = iVar4 + 1;
        if (local_c <= iVar4) break;
      } while( true );
    }
  }
LAB_004618d6:
  if (local_18 != (byte *)0x0) {
    FUN_00466dd0((int)local_14);
  }
LAB_004618e7:
  piVar9 = param_1 + 2;
  if (local_10 == (int *)0x0) {
    if ((*(byte *)(param_1 + 9) & 0x40) != 0) {
      piVar9 = (int *)param_1[6];
      piVar9[1] = *(int *)(*piVar9 + 0xa4);
      *(int **)(*piVar9 + 0xa4) = piVar9;
    }
    if ((*(byte *)(param_1 + 9) & 0x20) != 0) {
      FUN_004a6e20((undefined4 *)param_1[6]);
    }
    *(ushort *)(param_1 + 9) = *(ushort *)(param_1 + 9) & 0xbe01 | 1;
    *(undefined1 *)((int)param_1 + 0x26) = 5;
    return;
  }
  if (*piVar9 == 0) {
    iVar4 = 1000000000;
  }
  else {
    iVar4 = *(int *)(*piVar9 + 0x50);
  }
  uVar10 = 2;
  if ((int)param_3 < 0) {
    puVar5 = (undefined4 *)0x0;
    param_3 = (undefined4 *)0x0;
    if (-1 < iVar4) {
      do {
        param_3 = puVar5;
        if (*(char *)((int)puVar5 + (int)local_10) == '\0') break;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        param_3 = puVar5;
      } while ((int)puVar5 <= iVar4);
    }
    uVar10 = 0x202;
  }
  puVar5 = param_3;
  if ((uVar10 & 0x200) != 0) {
    puVar5 = (undefined4 *)((int)param_3 + 1);
  }
  if (iVar4 < (int)param_3) {
    param_1[0xe] = 0x12;
    if (*piVar9 == 0) {
      iVar4 = 1000000000;
    }
    else {
      iVar4 = *(int *)(*piVar9 + 0x50);
    }
    iVar12 = 0;
    if (-1 < iVar4) {
      do {
        if ("string or blob too big"[iVar12] == '\0') break;
        iVar12 = iVar12 + 1;
      } while (iVar12 <= iVar4);
    }
    uVar10 = *(ushort *)(param_1 + 9);
    if ((uVar10 & 0x2460) != 0) {
      if ((uVar10 & 0x2000) == 0) {
        if (((uVar10 & 0x400) == 0) || ((code *)param_1[10] == (code *)0x0)) {
          if ((uVar10 & 0x20) == 0) {
            if ((uVar10 & 0x40) != 0) {
              piVar6 = (int *)param_1[6];
              piVar6[1] = *(int *)(*piVar6 + 0xa4);
              *(int **)(*piVar6 + 0xa4) = piVar6;
              if ((*(byte *)(param_1 + 9) & 0x20) != 0) {
                FUN_004a6e20((undefined4 *)param_1[6]);
              }
              *(ushort *)(param_1 + 9) = *(ushort *)(param_1 + 9) & 0xbe01 | 1;
              *(undefined1 *)((int)param_1 + 0x26) = 5;
            }
          }
          else {
            FUN_004a6e20((undefined4 *)param_1[6]);
          }
        }
        else {
          (*(code *)param_1[10])(param_1[3]);
          param_1[10] = 0;
        }
      }
      else {
        FUN_004b7010(piVar9,param_1[6]);
        FUN_004b76e0(piVar9);
      }
    }
    FUN_00494b00(*piVar9,(undefined4 *)param_1[0xb]);
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[3] = (int)"string or blob too big";
    param_1[8] = iVar12;
    *(undefined2 *)((int)param_1 + 0x26) = 0x103;
    *(undefined2 *)(param_1 + 9) = 0xa02;
  }
  else {
    iVar4 = FUN_004b7260(piVar9,(int)puVar5,0);
    if (iVar4 == 0) {
      memcpy((void *)param_1[3],local_10,(size_t)puVar5);
      param_1[8] = (int)param_3;
      *(undefined2 *)((int)param_1 + 0x26) = 0x103;
      *(ushort *)(param_1 + 9) = uVar10;
      return;
    }
  }
  return;
LAB_00461811:
  puVar5 = (undefined4 *)((int)puVar5 - uVar11);
  local_10 = (int *)((int)local_10 + uVar11);
  param_3 = puVar5;
  if ((int)puVar5 < 1) goto LAB_00461832;
  goto LAB_00461790;
LAB_004618c3:
  param_3 = (undefined4 *)((int)param_3 - uVar11);
  if ((int)param_3 < 1) goto LAB_004618d6;
  goto LAB_00461843;
}


/* FUN_00461e80 @ 00461e80  kind=gamemisc  attributed-by=role:artifact  size=478 */

void __cdecl FUN_00461e80(int param_1,undefined4 param_2,undefined4 *param_3)

{
  byte *pbVar1;
  byte bVar2;
  int *piVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  int iVar11;
  char *pcVar12;
  char local_88 [128];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  pbVar5 = (byte *)FUN_004ae680((int *)*param_3,1);
  iVar6 = *(int *)(param_1 + 8);
  puVar9 = (undefined4 *)0x0;
  pbVar7 = &DAT_0055b524;
  if (pbVar5 != (byte *)0x0) {
    pbVar7 = pbVar5;
  }
  iVar11 = *(int *)(iVar6 + 0x14);
  iVar8 = 0;
  if (0 < iVar11) {
    puVar4 = *(undefined4 **)(iVar6 + 0x10);
    do {
      puVar9 = puVar4;
      if (puVar9[1] != 0) {
        pbVar5 = (byte *)*puVar9;
        bVar2 = *pbVar5;
        pbVar10 = pbVar7;
        while ((bVar2 != 0 && ((&DAT_00569620)[bVar2] == (&DAT_00569620)[*pbVar10]))) {
          pbVar1 = pbVar5 + 1;
          pbVar5 = pbVar5 + 1;
          pbVar10 = pbVar10 + 1;
          bVar2 = *pbVar1;
        }
        if ((&DAT_00569620)[*pbVar5] == (&DAT_00569620)[*pbVar10]) break;
      }
      iVar8 = iVar8 + 1;
      puVar4 = puVar9 + 4;
    } while (iVar8 < iVar11);
  }
  if (iVar8 < iVar11) {
    if (iVar8 < 2) {
      pcVar12 = "cannot detach database %s";
    }
    else {
      if (*(char *)(iVar6 + 0x36) == '\0') {
        FUN_00466a80(0x80,local_88,(byte *)"cannot DETACH database within transaction");
        goto LAB_00461fec;
      }
      piVar3 = (int *)puVar9[1];
      if (((char)piVar3[2] == '\0') && (piVar3[4] == 0)) {
        FUN_0048f070(piVar3);
        puVar9[1] = 0;
        puVar9[3] = 0;
        FUN_004a6940(iVar6);
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      pcVar12 = "database %s is locked";
    }
  }
  else {
    pcVar12 = "no such database: %s";
  }
  FUN_00466a80(0x80,local_88,(byte *)pcVar12);
LAB_00461fec:
  *(undefined4 *)(param_1 + 0x38) = 1;
  iVar6 = *(int *)(param_1 + 8);
  if (iVar6 == 0) {
    iVar6 = 1000000000;
  }
  else {
    iVar6 = *(int *)(iVar6 + 0x50);
  }
  iVar11 = 0;
  if (-1 < iVar6) {
    do {
      if (local_88[iVar11] == '\0') break;
      iVar11 = iVar11 + 1;
    } while (iVar11 <= iVar6);
  }
  if ((iVar11 <= iVar6) && (iVar6 = FUN_004b7260((int *)(param_1 + 8),iVar11 + 1U,0), iVar6 == 0)) {
    memcpy(*(void **)(param_1 + 0xc),local_88,iVar11 + 1U);
    *(int *)(param_1 + 0x20) = iVar11;
    *(undefined4 *)(param_1 + 0x24) = 0x1030202;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00462330 @ 00462330  kind=gamemisc  attributed-by=role:artifact  size=1221 */

void __cdecl FUN_00462330(int param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  bool bVar10;
  undefined8 uVar11;
  int iVar12;
  char *pcVar13;
  uint local_ec;
  uint uStack_e8;
  undefined8 local_e4;
  undefined8 local_dc;
  undefined8 local_c4;
  uint local_bc;
  int *local_b8;
  uint local_b4;
  undefined8 local_b0;
  int local_a8;
  char local_a1;
  undefined4 *local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  undefined4 uStack_88;
  undefined8 local_74;
  undefined4 local_6c [25];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_a8 = param_1;
  pcVar2 = (char *)FUN_004ae680((int *)*param_3,1);
  if ((pcVar2 == (char *)0x0) ||
     (iVar3 = FUN_0047eaa0(param_1,param_2 + -1,param_3 + 1,&local_9c), iVar3 != 0))
  goto switchD_004623ce_caseD_26;
  local_a0 = *(undefined4 **)(param_1 + 8);
  local_b8 = (int *)(param_1 + 8);
  iVar3 = 0;
  uVar9 = 0;
  uVar7 = 1;
  if (*pcVar2 == '\0') {
LAB_0046245a:
    puVar4 = local_6c;
LAB_00462463:
    local_a0 = puVar4;
    FUN_004753b0(&local_9c);
    FUN_00475680((uint *)&local_9c);
    FUN_004752f0(&local_9c);
    iVar3 = 0;
    cVar1 = *pcVar2;
    piVar8 = local_b8;
    while (local_b8 = piVar8, cVar1 != '\0') {
      if (*pcVar2 != '%') {
        *(char *)(iVar3 + (int)puVar4) = *pcVar2;
        goto LAB_0046278a;
      }
      local_a1 = pcVar2[1];
      pcVar2 = pcVar2 + 1;
      switch(local_a1) {
      case 'H':
        break;
      default:
        *(undefined1 *)(iVar3 + (int)puVar4) = 0x25;
        goto LAB_0046278a;
      case 'J':
        local_b0 = (double)CONCAT44(local_9c._4_4_,(uint)local_9c);
        pcVar13 = "%.16g";
        iVar12 = 0x14;
        goto LAB_0046251f;
      case 'M':
        break;
      case 'S':
        break;
      case 'W':
      case 'j':
        local_c4._3_5_ = (undefined5)((ulonglong)local_74 >> 0x18);
        local_c4._0_3_ = (uint3)(ushort)local_74;
        local_e4 = CONCAT44(1,local_94);
        local_dc = CONCAT44(uStack_88,1);
        local_ec = (uint)local_9c;
        uStack_e8 = local_9c._4_4_;
        FUN_004753b0((ulonglong *)&local_ec);
        local_bc = (uint)local_9c;
        local_b4 = local_9c._4_4_;
        uVar11 = __alldiv(((uint)local_9c - local_ec) + 43200000,
                          ((local_9c._4_4_ - uStack_e8) - (uint)((uint)local_9c < local_ec)) +
                          (uint)(0xfd6cd1ff < (uint)local_9c - local_ec),86400000,0);
        local_b0 = (double)CONCAT44((int)uVar11,(undefined4)local_b0);
        if (local_a1 == 'W') {
          uVar11 = __alldiv(local_bc + 43200000,local_b4 + (0xfd6cd1ff < local_bc),86400000,0);
          __allrem((uint)uVar11,(uint)((ulonglong)uVar11 >> 0x20),7,0);
          break;
        }
        FUN_00466a80(4,iVar3 + (int)puVar4,&DAT_0056dd48);
        iVar3 = iVar3 + 3;
        goto LAB_0046278b;
      case 'Y':
        FUN_00466a80(5,(char *)((int)puVar4 + iVar3),&DAT_0056dd60);
        uVar7 = FUN_004aa9b0((char *)((int)puVar4 + iVar3));
        iVar3 = iVar3 + uVar7;
        puVar4 = local_a0;
        goto LAB_0046278b;
      case 'd':
        break;
      case 'f':
        pcVar13 = "%06.3f";
        iVar12 = 7;
        goto LAB_0046251f;
      case 'm':
        break;
      case 's':
        __alldiv((uint)local_9c,local_9c._4_4_,1000,0);
        pcVar13 = &DAT_0056dd58;
        iVar12 = 0x1e;
LAB_0046251f:
        FUN_00466a80(iVar12,(char *)((int)puVar4 + iVar3),(byte *)pcVar13);
        uVar7 = FUN_004aa9b0((char *)((int)puVar4 + iVar3));
        iVar3 = iVar3 + uVar7;
        puVar4 = local_a0;
        goto LAB_0046278b;
      case 'w':
        uVar11 = __alldiv((uint)local_9c + 0x7b98a00,local_9c._4_4_ + (0xf84675ff < (uint)local_9c),
                          86400000,0);
        uVar11 = __allrem((uint)uVar11,(uint)((ulonglong)uVar11 >> 0x20),7,0);
        *(char *)(iVar3 + (int)puVar4) = (char)uVar11 + '0';
LAB_0046278a:
        iVar3 = iVar3 + 1;
        goto LAB_0046278b;
      }
      FUN_00466a80(3,iVar3 + (int)puVar4,&DAT_0056dd38);
      iVar3 = iVar3 + 2;
LAB_0046278b:
      pcVar2 = pcVar2 + 1;
      piVar8 = local_b8;
      cVar1 = *pcVar2;
    }
    pcVar5 = FUN_004a0570;
    if (puVar4 == local_6c) {
      pcVar5 = (code *)0xffffffff;
    }
    *(undefined1 *)(iVar3 + (int)puVar4) = 0;
    iVar3 = FUN_004b79e0(piVar8,puVar4,0xffffffff,'\x01',pcVar5);
    if (iVar3 != 0x12) goto switchD_004623ce_caseD_26;
  }
  else {
    do {
      if (pcVar2[iVar3] == '%') {
        switch(pcVar2[iVar3 + 1]) {
        case '%':
        case 'w':
          goto switchD_004623ce_caseD_25;
        default:
          goto switchD_004623ce_caseD_26;
        case 'H':
        case 'M':
        case 'S':
        case 'W':
        case 'd':
        case 'm':
          bVar10 = 0xfffffffe < uVar7;
          uVar7 = uVar7 + 1;
          break;
        case 'J':
        case 's':
          bVar10 = 0xffffffcd < uVar7;
          uVar7 = uVar7 + 0x32;
          break;
        case 'Y':
        case 'f':
          bVar10 = 0xfffffff7 < uVar7;
          uVar7 = uVar7 + 8;
          break;
        case 'j':
          bVar10 = 0xfffffffc < uVar7;
          uVar7 = uVar7 + 3;
        }
        uVar9 = uVar9 + bVar10;
switchD_004623ce_caseD_25:
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 + 1;
      bVar10 = 0xfffffffe < uVar7;
      uVar7 = uVar7 + 1;
      uVar9 = uVar9 + bVar10;
    } while (pcVar2[iVar3] != '\0');
    if ((uVar9 == 0) && (uVar7 < 100)) goto LAB_0046245a;
    uVar6 = (int)local_a0[0x14] >> 0x1f;
    if ((uVar9 < uVar6) || ((uVar9 <= uVar6 && (uVar7 <= (uint)local_a0[0x14])))) {
      puVar4 = FUN_00494b90((int)local_a0,uVar7);
      if (puVar4 == (undefined4 *)0x0) {
        local_a0 = puVar4;
        FUN_0045fad0(local_a8);
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      goto LAB_00462463;
    }
    piVar8 = (int *)(local_a8 + 8);
  }
  *(undefined4 *)(local_a8 + 0x38) = 0x12;
  FUN_004b79e0(piVar8,"string or blob too big",0xffffffff,'\x01',(undefined *)0x0);
switchD_004623ce_caseD_26:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00462eb0 @ 00462eb0  kind=gamemisc  attributed-by=role:artifact  size=300 */

void __cdecl FUN_00462eb0(void *param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  int *piVar2;
  void *pvVar3;
  void *_Src;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  pcVar4 = (char *)FUN_004ae680((int *)*param_3,1);
  pvVar3 = param_1;
  piVar2 = *(int **)((int)param_1 + 8);
  piVar1 = (int *)((int)param_1 + 8);
  param_1 = (void *)0x0;
  if (param_2 == 2) {
    pcVar5 = (char *)FUN_004ae680((int *)param_3[1],1);
  }
  else {
    pcVar5 = (char *)0x0;
  }
  if ((pcVar4 != (char *)0x0) &&
     (uVar6 = FUN_004bcb50(piVar2,pcVar4,pcVar5,(int *)&param_1), _Src = param_1, uVar6 != 0)) {
    *(undefined4 *)((int)pvVar3 + 0x38) = 1;
    if (param_1 == (void *)0x0) {
      if ((*(byte *)((int)pvVar3 + 0x24) & 0x40) != 0) {
        piVar1 = *(int **)((int)pvVar3 + 0x18);
        piVar1[1] = *(int *)(*piVar1 + 0xa4);
        *(int **)(*piVar1 + 0xa4) = piVar1;
      }
      if ((*(byte *)((int)pvVar3 + 0x24) & 0x20) != 0) {
        FUN_004a6e20(*(undefined4 **)((int)pvVar3 + 0x18));
      }
      *(ushort *)((int)pvVar3 + 0x24) = *(ushort *)((int)pvVar3 + 0x24) & 0xbe01 | 1;
      *(undefined1 *)((int)pvVar3 + 0x26) = 5;
      FUN_00466dd0(0);
      return;
    }
    iVar7 = *piVar1;
    if (iVar7 == 0) {
      iVar7 = 1000000000;
    }
    else {
      iVar7 = *(int *)(iVar7 + 0x50);
    }
    iVar8 = 0;
    if (-1 < iVar7) {
      do {
        if (*(char *)(iVar8 + (int)param_1) == '\0') break;
        iVar8 = iVar8 + 1;
      } while (iVar8 <= iVar7);
    }
    if ((iVar8 <= iVar7) && (iVar7 = FUN_004b7260(piVar1,iVar8 + 1,0), iVar7 == 0)) {
      memcpy(*(void **)((int)pvVar3 + 0xc),_Src,iVar8 + 1);
      *(int *)((int)pvVar3 + 0x20) = iVar8;
      *(undefined4 *)((int)pvVar3 + 0x24) = 0x1030202;
    }
    FUN_00466dd0((int)_Src);
  }
  return;
}


/* FUN_004662c0 @ 004662c0  kind=gamemisc  attributed-by=role:artifact  size=203 */

void __cdecl FUN_004662c0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  byte *pbVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  
  puVar1 = param_3;
  pbVar2 = (byte *)FUN_004ae680((int *)*param_3,1);
  FUN_004ae680((int *)puVar1[1],1);
  iVar5 = *(int *)(param_1 + 8);
  uVar3 = 0;
  if (pbVar2 != (byte *)0x0) {
    do {
      if (*pbVar2 == 0) {
        return;
      }
      do {
        pbVar2 = pbVar2 + uVar3;
        uVar3 = FUN_0049cb70(pbVar2,&param_3);
      } while (param_3 == (undefined4 *)0x95);
    } while ((param_3 != (undefined4 *)0x16) && (param_3 != (undefined4 *)0x79));
    pvVar4 = (void *)FUN_004a02d0(iVar5,(byte *)"%.*s\"%w\"%s");
    iVar5 = FUN_004b79e0((int *)(param_1 + 8),pvVar4,0xffffffff,'\x01',FUN_004a0570);
    if (iVar5 == 0x12) {
      *(undefined4 *)(param_1 + 0x38) = 0x12;
      FUN_004b79e0((int *)(param_1 + 8),"string or blob too big",0xffffffff,'\x01',(undefined *)0x0)
      ;
    }
  }
  return;
}


/* FUN_00466b60 @ 00466b60  kind=gamemisc  attributed-by=role:artifact  size=620 */

/* WARNING: Removing unreachable block (ram,0x00466d51) */
/* WARNING: Removing unreachable block (ram,0x00466d57) */
/* WARNING: Removing unreachable block (ram,0x00466d60) */

void __cdecl FUN_00466b60(int param_1,undefined4 param_2,undefined4 *param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte *_Src;
  byte *pbVar3;
  uint _Size;
  byte *_Dst;
  undefined4 *puVar4;
  void *pvVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  int *piVar9;
  byte *pbVar10;
  int local_10;
  undefined4 *local_c;
  int local_8;
  
  piVar9 = (int *)(param_1 + 8);
  local_8 = *piVar9;
  local_c = (undefined4 *)0x0;
  _Src = (byte *)FUN_004ae680((int *)*param_3,1);
  pbVar3 = (byte *)FUN_004ae680((int *)param_3[1],1);
  FUN_004ae680((int *)param_3[2],1);
  bVar2 = *_Src;
  puVar4 = (undefined4 *)0x0;
  while (bVar2 != 0) {
    _Size = FUN_0049cb70(_Src,&local_10);
    if (local_10 == 0x66) {
      do {
        _Src = _Src + _Size;
        _Size = FUN_0049cb70(_Src,&local_10);
      } while (local_10 == 0x95);
      puVar4 = local_c;
      if ((_Src == (byte *)0x0) ||
         (_Dst = (byte *)FUN_00494b90(local_8,_Size + 1), puVar4 = local_c, _Dst == (byte *)0x0))
      break;
      memcpy(_Dst,_Src,_Size);
      _Dst[_Size] = 0;
      FUN_00495540((char *)_Dst);
      bVar2 = *pbVar3;
      pbVar7 = pbVar3;
      pbVar10 = _Dst;
      while ((bVar2 != 0 && ((&DAT_00569620)[bVar2] == (&DAT_00569620)[*pbVar10]))) {
        pbVar1 = pbVar7 + 1;
        pbVar7 = pbVar7 + 1;
        pbVar10 = pbVar10 + 1;
        bVar2 = *pbVar1;
      }
      if ((&DAT_00569620)[*pbVar7] == (&DAT_00569620)[*pbVar10]) {
        puVar4 = (undefined4 *)FUN_004a02d0(local_8,(byte *)"%s%.*s\"%w\"");
        FUN_00494b00(local_8,local_c);
        local_c = puVar4;
      }
      FUN_00494b00(local_8,(undefined4 *)_Dst);
    }
    _Src = _Src + _Size;
    puVar4 = local_c;
    bVar2 = *_Src;
  }
  pvVar5 = (void *)FUN_004a02d0(local_8,&DAT_0056e49c);
  iVar6 = FUN_004b79e0(piVar9,pvVar5,0xffffffff,'\x01',FUN_004a0570);
  if (iVar6 == 0x12) {
    *(undefined4 *)(param_1 + 0x38) = 0x12;
    if (*piVar9 == 0) {
      iVar6 = 1000000000;
    }
    else {
      iVar6 = *(int *)(*piVar9 + 0x50);
    }
    iVar8 = 0;
    if (-1 < iVar6) {
      do {
        if ("string or blob too big"[iVar8] == '\0') break;
        iVar8 = iVar8 + 1;
      } while (iVar8 <= iVar6);
    }
    if ((*(ushort *)(param_1 + 0x24) & 0x2460) != 0) {
      FUN_004b7720(piVar9);
    }
    FUN_00494b00(*piVar9,*(undefined4 **)(param_1 + 0x2c));
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined2 *)(param_1 + 0x24) = 0xa02;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(char **)(param_1 + 0xc) = "string or blob too big";
    *(int *)(param_1 + 0x20) = iVar8;
    *(undefined2 *)(param_1 + 0x26) = 0x103;
    puVar4 = local_c;
  }
  FUN_00494b00(local_8,puVar4);
  return;
}


/* FUN_00467060 @ 00467060  kind=gamemisc  attributed-by=role:artifact  size=251 */

void __cdecl FUN_00467060(int param_1,undefined4 param_2,undefined4 *param_3)

{
  byte *pbVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  byte *pbVar5;
  
  piVar3 = (int *)*param_3;
  switch(*(undefined1 *)((int)piVar3 + 0x1e)) {
  case 1:
  case 2:
  case 4:
    if (((*(byte *)(piVar3 + 7) & 0x10) == 0) && (iVar4 = FUN_004ae680(piVar3,1), iVar4 == 0)) {
      FUN_0045fbd0(param_1,0);
      return;
    }
    iVar4 = piVar3[6];
    if ((*(ushort *)(piVar3 + 7) & 0x4000) != 0) {
      iVar4 = iVar4 + piVar3[4];
    }
    FUN_0045fbd0(param_1,iVar4);
    return;
  case 3:
    pbVar5 = (byte *)FUN_004ae680(piVar3,1);
    if (pbVar5 != (byte *)0x0) {
      iVar4 = 0;
      bVar2 = *pbVar5;
      while (bVar2 != 0) {
        iVar4 = iVar4 + 1;
        pbVar5 = pbVar5 + 1;
        if (0xbf < bVar2) {
          bVar2 = *pbVar5;
          while ((bVar2 & 0xc0) == 0x80) {
            pbVar1 = pbVar5 + 1;
            pbVar5 = pbVar5 + 1;
            bVar2 = *pbVar1;
          }
        }
        bVar2 = *pbVar5;
      }
      FUN_0045fbd0(param_1,iVar4);
      return;
    }
    break;
  default:
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
  }
  return;
}


/* FUN_004672d0 @ 004672d0  kind=gamemisc  attributed-by=role:artifact  size=238 */

void __cdecl FUN_004672d0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  byte *pbVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  
  puVar1 = param_3;
  pbVar2 = (byte *)FUN_004ae680((int *)*param_3,1);
  FUN_004ae680((int *)puVar1[1],1);
  iVar5 = *(int *)(param_1 + 8);
  uVar3 = 0;
  iVar6 = 3;
  if (pbVar2 != (byte *)0x0) {
    do {
      while( true ) {
        if (*pbVar2 == 0) {
          return;
        }
        do {
          pbVar2 = pbVar2 + uVar3;
          uVar3 = FUN_0049cb70(pbVar2,&param_3);
        } while (param_3 == (undefined4 *)0x95);
        iVar6 = iVar6 + 1;
        if ((param_3 != (undefined4 *)0x76) && (param_3 != (undefined4 *)0x68)) break;
        iVar6 = 0;
      }
    } while ((iVar6 != 2) ||
            (((param_3 != (undefined4 *)0x87 && (param_3 != (undefined4 *)0x2d)) &&
             (param_3 != (undefined4 *)0x5))));
    pvVar4 = (void *)FUN_004a02d0(iVar5,(byte *)"%.*s\"%w\"%s");
    iVar5 = FUN_004b79e0((int *)(param_1 + 8),pvVar4,0xffffffff,'\x01',FUN_004a0570);
    if (iVar5 == 0x12) {
      *(undefined4 *)(param_1 + 0x38) = 0x12;
      FUN_004b79e0((int *)(param_1 + 8),"string or blob too big",0xffffffff,'\x01',(undefined *)0x0)
      ;
    }
  }
  return;
}


/* FUN_00468460 @ 00468460  kind=gamemisc  attributed-by=role:artifact  size=405 */

void __cdecl FUN_00468460(int param_1,undefined4 param_2,undefined4 *param_3)

{
  char cVar1;
  char cVar2;
  int *piVar3;
  bool bVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  int local_8;
  
  local_8 = 1;
  piVar3 = (int *)*param_3;
  cVar1 = *(char *)((int)piVar3 + 0x1e);
  cVar2 = *(char *)(param_3[1] + 0x1e);
  if (cVar1 == '\x05') {
    return;
  }
  if (cVar2 == '\x05') {
    return;
  }
  if (((*(byte *)(piVar3 + 7) & 0x10) == 0) && (iVar9 = FUN_004ae680(piVar3,1), iVar9 == 0)) {
    iVar9 = 0;
  }
  else {
    iVar9 = piVar3[6];
    if ((*(ushort *)(piVar3 + 7) & 0x4000) != 0) {
      iVar9 = iVar9 + piVar3[4];
    }
  }
  piVar3 = (int *)param_3[1];
  if ((*(byte *)(piVar3 + 7) & 0x10) == 0) {
    iVar10 = FUN_004ae680(piVar3,1);
    uVar11 = 0;
    if (iVar10 == 0) goto LAB_004684eb;
  }
  uVar11 = piVar3[6];
  if ((*(ushort *)(piVar3 + 7) & 0x4000) != 0) {
    uVar11 = uVar11 + piVar3[4];
  }
LAB_004684eb:
  if ((cVar1 == '\x04') && (cVar2 == '\x04')) {
    pbVar12 = (byte *)FUN_0046b260((int *)*param_3);
    pbVar13 = (byte *)FUN_0046b260((int *)param_3[1]);
    bVar4 = false;
  }
  else {
    pbVar12 = (byte *)FUN_004ae680((int *)*param_3,1);
    pbVar13 = (byte *)FUN_004ae680((int *)param_3[1],1);
    bVar4 = true;
  }
  pbVar6 = pbVar13;
  pbVar7 = pbVar12;
  uVar8 = uVar11;
  if ((int)uVar11 <= iVar9) {
    while (uVar5 = uVar8 - 4, 3 < uVar8) {
      if (*(int *)pbVar7 == *(int *)pbVar6) {
        pbVar6 = pbVar6 + 4;
        pbVar7 = pbVar7 + 4;
        uVar8 = uVar5;
      }
      else {
LAB_00468566:
        if ((*pbVar7 == *pbVar6) &&
           ((uVar5 == 0xfffffffd ||
            ((pbVar7[1] == pbVar6[1] &&
             ((uVar5 == 0xfffffffe ||
              ((pbVar7[2] == pbVar6[2] && ((uVar5 == 0xffffffff || (pbVar7[3] == pbVar6[3]))))))))))
           )) goto LAB_004685c5;
        local_8 = local_8 + 1;
        do {
          iVar9 = iVar9 + -1;
          pbVar12 = pbVar12 + 1;
          if (!bVar4) break;
        } while ((*pbVar12 & 0xc0) == 0x80);
        pbVar6 = pbVar13;
        pbVar7 = pbVar12;
        uVar8 = uVar11;
        if (iVar9 < (int)uVar11) {
          FUN_0045fbd0(param_1,0);
          return;
        }
      }
    }
    if (uVar5 != 0xfffffffc) goto LAB_00468566;
LAB_004685c5:
    if ((int)uVar11 <= iVar9) {
      FUN_0045fbd0(param_1,local_8);
      return;
    }
  }
  FUN_0045fbd0(param_1,0);
  return;
}


/* FUN_00468a90 @ 00468a90  kind=gamemisc  attributed-by=role:artifact  size=811 */

void __cdecl FUN_00468a90(int param_1,int param_2,int *param_3)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  int *piVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  uint local_28;
  uint local_18;
  uint local_10;
  int local_c;
  int local_8;
  
  bVar9 = false;
  if (*(char *)(param_3[1] + 0x1e) == '\x05') {
    return;
  }
  if ((param_2 == 3) && (*(char *)(param_3[2] + 0x1e) == '\x05')) {
    return;
  }
  cVar2 = *(char *)(*param_3 + 0x1e);
  local_18 = FUN_0045f1d0(param_3[1]);
  local_8 = (int)local_18 >> 0x1f;
  if (cVar2 == '\x04') {
    piVar4 = (int *)*param_3;
    if (((*(byte *)(piVar4 + 7) & 0x10) == 0) && (iVar5 = FUN_004ae680(piVar4,1), iVar5 == 0)) {
      local_10 = 0;
    }
    else if ((*(ushort *)(piVar4 + 7) & 0x4000) == 0) {
      local_10 = piVar4[6];
    }
    else {
      local_10 = piVar4[6] + piVar4[4];
    }
    pbVar6 = (byte *)FUN_0046b260((int *)*param_3);
    if (pbVar6 == (byte *)0x0) {
      return;
    }
  }
  else {
    pbVar6 = (byte *)FUN_004ae680((int *)*param_3,1);
    if (pbVar6 == (byte *)0x0) {
      return;
    }
    local_10 = 0;
    if ((-1 < (int)local_18 || local_8 < 0) && (local_8 < 0)) {
      bVar3 = *pbVar6;
      local_10 = 0;
      pbVar7 = pbVar6;
      while (bVar3 != 0) {
        bVar3 = *pbVar7;
        pbVar7 = pbVar7 + 1;
        if (0xbf < bVar3) {
          bVar3 = *pbVar7;
          while ((bVar3 & 0xc0) == 0x80) {
            pbVar1 = pbVar7 + 1;
            pbVar7 = pbVar7 + 1;
            bVar3 = *pbVar1;
          }
        }
        local_10 = local_10 + 1;
        bVar3 = *pbVar7;
      }
    }
  }
  if (param_2 == 3) {
    local_28 = FUN_0045f1d0(param_3[2]);
    local_c = (int)local_28 >> 0x1f;
    if ((-1 < (int)local_28 || local_c < 0) && (local_c < 0)) {
      bVar9 = local_28 != 0;
      local_28 = -local_28;
      local_c = -(local_c + (uint)bVar9);
      bVar9 = true;
    }
  }
  else {
    local_28 = *(uint *)(*(int *)(param_1 + 8) + 0x50);
    local_c = (int)local_28 >> 0x1f;
  }
  iVar5 = (int)local_10 >> 0x1f;
  if (local_8 < 1) {
    if (local_8 < 0) {
      bVar10 = CARRY4(local_18,local_10);
      local_18 = local_18 + local_10;
      local_8 = local_8 + iVar5 + (uint)bVar10;
      if ((local_8 < 1) && (local_8 < 0)) {
        bVar10 = CARRY4(local_28,local_18);
        local_28 = local_28 + local_18;
        local_c = local_c + local_8 + (uint)bVar10;
        if ((local_c < 1) && (local_c < 0)) {
          local_28 = 0;
          local_c = 0;
        }
        local_18 = 0;
        local_8 = 0;
      }
      goto LAB_00468c55;
    }
    if ((local_8 < 0) || ((local_8 < 1 && (local_18 == 0)))) {
      if ((-1 < local_c) && ((0 < local_c || (local_28 != 0)))) {
        bVar10 = local_28 != 0;
        local_28 = local_28 - 1;
        local_c = local_c + -1 + (uint)bVar10;
      }
      goto LAB_00468c55;
    }
  }
  bVar10 = local_18 != 0;
  local_18 = local_18 - 1;
  local_8 = local_8 + -1 + (uint)bVar10;
LAB_00468c55:
  if (bVar9) {
    bVar9 = local_18 < local_28;
    local_18 = local_18 - local_28;
    local_8 = (local_8 - local_c) - (uint)bVar9;
    if ((local_8 < 1) && (local_8 < 0)) {
      bVar9 = CARRY4(local_28,local_18);
      local_28 = local_28 + local_18;
      local_18 = 0;
      local_c = local_c + local_8 + (uint)bVar9;
      local_8 = 0;
    }
  }
  if (cVar2 == '\x04') {
    iVar8 = local_c + local_8 + (uint)CARRY4(local_28,local_18);
    if ((iVar5 <= iVar8) && ((iVar5 < iVar8 || (local_10 < local_28 + local_18)))) {
      local_28 = local_10 - local_18;
      bVar9 = (int)((iVar5 - local_8) - (uint)(local_10 < local_18)) < 0;
      if ((iVar5 - local_8 == (uint)(local_10 < local_18) || bVar9) && (bVar9)) {
        local_28 = 0;
      }
    }
    iVar5 = FUN_004b79e0((int *)(param_1 + 8),pbVar6 + local_18,local_28,'\0',
                         (undefined *)0xffffffff);
    if (iVar5 == 0x12) {
      *(undefined4 *)(param_1 + 0x38) = 0x12;
      FUN_004b79e0((int *)(param_1 + 8),"string or blob too big",0xffffffff,'\x01',(undefined *)0x0)
      ;
    }
  }
  else {
    bVar3 = *pbVar6;
    for (; (bVar3 != 0 && (local_18 != 0 || local_8 != 0)); local_18 = local_18 - 1) {
      pbVar6 = pbVar6 + 1;
      if (0xbf < bVar3) {
        bVar3 = *pbVar6;
        while ((bVar3 & 0xc0) == 0x80) {
          pbVar7 = pbVar6 + 1;
          pbVar6 = pbVar6 + 1;
          bVar3 = *pbVar7;
        }
      }
      bVar3 = *pbVar6;
      local_8 = local_8 + -1 + (uint)(local_18 != 0);
    }
    bVar3 = *pbVar6;
    pbVar7 = pbVar6;
    for (; (bVar3 != 0 && (local_28 != 0 || local_c != 0)); local_28 = local_28 - 1) {
      bVar3 = *pbVar7;
      pbVar7 = pbVar7 + 1;
      if (0xbf < bVar3) {
        bVar3 = *pbVar7;
        while ((bVar3 & 0xc0) == 0x80) {
          pbVar1 = pbVar7 + 1;
          pbVar7 = pbVar7 + 1;
          bVar3 = *pbVar1;
        }
      }
      local_c = local_c + -1 + (uint)(local_28 != 0);
      bVar3 = *pbVar7;
    }
    iVar5 = FUN_004b79e0((int *)(param_1 + 8),pbVar6,(int)pbVar7 - (int)pbVar6,'\x01',
                         (undefined *)0xffffffff);
    if (iVar5 == 0x12) {
      *(undefined4 *)(param_1 + 0x38) = 0x12;
      FUN_004b79e0((int *)(param_1 + 8),"string or blob too big",0xffffffff,'\x01',(undefined *)0x0)
      ;
      return;
    }
  }
  return;
}


/* FUN_004692f0 @ 004692f0  kind=gamemisc  attributed-by=role:artifact  size=437 */

void __cdecl FUN_004692f0(int param_1,int param_2,int *param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  double dVar7;
  ulonglong uVar8;
  double local_14;
  double local_c;
  
  iVar6 = 0;
  if (param_2 == 2) {
    if (*(char *)(param_3[1] + 0x1e) == '\x05') {
      return;
    }
    iVar6 = FUN_0045f1d0(param_3[1]);
    if (iVar6 < 0x1f) {
      if (iVar6 < 0) {
        iVar6 = 0;
      }
    }
    else {
      iVar6 = 0x1e;
    }
  }
  iVar3 = *param_3;
  if (*(char *)(iVar3 + 0x1e) == '\x05') {
    return;
  }
  uVar2 = *(ushort *)(iVar3 + 0x1c);
  if ((uVar2 & 8) == 0) {
    if ((uVar2 & 4) == 0) {
      if ((uVar2 & 0x12) == 0) {
        local_c = 0.0;
      }
      else {
        local_14 = 0.0;
        FUN_0048cc90(*(byte **)(iVar3 + 4),&local_14,*(uint *)(iVar3 + 0x18),*(char *)(iVar3 + 0x1f)
                    );
        local_c = local_14;
      }
    }
    else {
      local_c = (double)*(longlong *)(iVar3 + 0x10);
    }
  }
  else {
    local_c = *(double *)(iVar3 + 8);
  }
  if (iVar6 == 0) {
    if ((0.0 <= local_c) && (local_c < 9.223372036854776e+18)) {
      local_14 = (double)FUN_0054a946();
      local_c = (double)(longlong)local_14;
      dVar7 = local_c;
      goto LAB_00469488;
    }
    if ((local_c < 0.0) && (-local_c < 9.223372036854776e+18)) {
      uVar8 = FUN_0054a946();
      dVar7 = -(double)(longlong)uVar8;
      goto LAB_00469488;
    }
  }
  pbVar4 = (byte *)FUN_004666d0(&DAT_0056fd34);
  if (pbVar4 == (byte *)0x0) {
    FUN_0045fad0(param_1);
    return;
  }
  bVar1 = *pbVar4;
  pbVar5 = pbVar4;
  while (bVar1 != 0) {
    pbVar5 = pbVar5 + 1;
    bVar1 = *pbVar5;
  }
  uVar8 = CONCAT44(1,(int)pbVar5 - (int)pbVar4) & 0xffffffff3fffffff;
  FUN_0048cc90(pbVar4,&local_c,(uint)uVar8,(char)(uVar8 >> 0x20));
  FUN_00466dd0((int)pbVar4);
  dVar7 = local_c;
LAB_00469488:
  FUN_004b7790((int *)(param_1 + 8),dVar7);
  return;
}


/* FUN_00469b10 @ 00469b10  kind=gamemisc  attributed-by=role:artifact  size=191 */

void __cdecl FUN_00469b10(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  
  iVar2 = FUN_004ae680((int *)*param_3,1);
  piVar1 = (int *)*param_3;
  if (((*(byte *)(piVar1 + 7) & 0x10) == 0) && (iVar3 = FUN_004ae680(piVar1,1), iVar3 == 0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = piVar1[6];
    if ((*(ushort *)(piVar1 + 7) & 0x4000) != 0) {
      uVar7 = uVar7 + piVar1[4];
    }
  }
  if ((iVar2 != 0) &&
     (puVar4 = (undefined1 *)
               FUN_00476020(param_1,uVar7 + 1,((int)uVar7 >> 0x1f) + (uint)(0xfffffffe < uVar7)),
     puVar4 != (undefined1 *)0x0)) {
    if (0 < (int)uVar7) {
      puVar5 = puVar4;
      uVar6 = uVar7;
      do {
        *puVar5 = (&DAT_00569620)[(byte)puVar5[iVar2 - (int)puVar4]];
        uVar6 = uVar6 - 1;
        puVar5 = puVar5 + 1;
      } while (uVar6 != 0);
    }
    iVar2 = FUN_004b79e0((int *)(param_1 + 8),puVar4,uVar7,'\x01',FUN_00466dd0);
    if (iVar2 == 0x12) {
      *(undefined4 *)(param_1 + 0x38) = 0x12;
      FUN_004b79e0((int *)(param_1 + 8),"string or blob too big",0xffffffff,'\x01',(undefined *)0x0)
      ;
    }
  }
  return;
}


/* FUN_0046a030 @ 0046a030  kind=gamemisc  attributed-by=role:artifact  size=206 */

void __cdecl FUN_0046a030(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int local_c;
  uint local_8;
  
  iVar3 = 8;
  piVar5 = &local_c;
  if (DAT_00582acc == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (*DAT_00582b10)(5);
    if (iVar2 != 0) {
      (*DAT_00582b18)(iVar2);
    }
  }
  do {
    uVar1 = FUN_00487580();
    *(undefined1 *)piVar5 = uVar1;
    piVar5 = (int *)((int)piVar5 + 1);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if (iVar2 != 0) {
    (*DAT_00582b20)(iVar2);
  }
  uVar4 = local_8;
  iVar3 = local_c;
  if (((int)local_8 < 1) && ((int)local_8 < 0)) {
    uVar4 = -((local_8 & 0x7fffffff) + (uint)(local_c != 0));
    iVar3 = -local_c;
  }
  if ((*(ushort *)(param_1 + 0x24) & 0x2460) != 0) {
    FUN_004b7720((int *)(param_1 + 8));
  }
  FUN_00494b00(*(int *)(param_1 + 8),*(undefined4 **)(param_1 + 0x2c));
  *(int *)(param_1 + 0x18) = iVar3;
  *(uint *)(param_1 + 0x1c) = uVar4;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined2 *)(param_1 + 0x24) = 4;
  *(undefined1 *)(param_1 + 0x26) = 1;
  return;
}


/* FUN_0046a7c0 @ 0046a7c0  kind=gamemisc  attributed-by=role:artifact  size=155 */

void __cdecl FUN_0046a7c0(int param_1,undefined4 param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;
  
  uVar2 = FUN_0045f1d0(*param_3);
  if ((int)uVar2 < 1) {
    uVar2 = 1;
  }
  uVar1 = *(uint *)(*(int *)(param_1 + 8) + 0x50);
  iVar4 = (int)uVar1 >> 0x1f;
  if (((int)uVar2 >> 0x1f < iVar4) || (((int)uVar2 >> 0x1f <= iVar4 && (uVar2 <= uVar1)))) {
    puVar3 = (undefined1 *)FUN_004a0350(uVar2);
    if (puVar3 == (undefined1 *)0x0) {
      FUN_0045fad0(param_1);
      return;
    }
    FUN_00466fa0(uVar2,puVar3);
    iVar4 = FUN_004b79e0((int *)(param_1 + 8),puVar3,uVar2,'\0',FUN_00466dd0);
    if (iVar4 != 0x12) {
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x38) = 0x12;
  FUN_004b79e0((int *)(param_1 + 8),"string or blob too big",0xffffffff,'\x01',(undefined *)0x0);
  return;
}


