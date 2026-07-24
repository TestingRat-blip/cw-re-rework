// Unsorted_002 (game_misc) -- server. 150 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Unsorted_002.h"

/* FUN_0045fad0 @ 0045fad0  kind=gamemisc  attributed-by=none  size=91 */

void __cdecl FUN_0045fad0(int param_1)

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
  *(undefined4 *)(param_1 + 0x38) = 7;
  *(undefined1 *)(*(int *)(param_1 + 8) + 0x38) = 1;
  return;
}


/* FUN_0045fce0 @ 0045fce0  kind=gamemisc  attributed-by=none  size=48 */

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


/* FUN_0045fd90 @ 0045fd90  kind=gamemisc  attributed-by=none  size=42 */

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


/* FUN_0045fdc0 @ 0045fdc0  kind=gamemisc  attributed-by=none  size=198 */

undefined4 __cdecl FUN_0045fdc0(undefined4 param_1,byte *param_2,undefined *param_3)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  bool bVar7;
  
  if (param_2 == (byte *)0x0) {
    uVar2 = 0;
    do {
      if (*(int *)((int)&DAT_00583570 + uVar2) != 0) {
        *(int *)((int)&PTR_AreFileApisANSI_0058356c + uVar2) = *(int *)((int)&DAT_00583570 + uVar2);
      }
      if (*(int *)((int)&DAT_0058357c + uVar2) != 0) {
        *(int *)((int)&DAT_00583578 + uVar2) = *(int *)((int)&DAT_0058357c + uVar2);
      }
      uVar2 = uVar2 + 0x18;
    } while (uVar2 < 0x378);
    return 0;
  }
  iVar6 = 0;
  uVar2 = 0;
  do {
    pbVar3 = *(byte **)((int)&PTR_s_AreFileApisANSI_00583568 + uVar2);
    pbVar5 = param_2;
    do {
      bVar1 = *pbVar5;
      bVar7 = bVar1 < *pbVar3;
      if (bVar1 != *pbVar3) {
LAB_0045fe30:
        uVar4 = -(uint)bVar7 | 1;
        goto LAB_0045fe35;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar7 = bVar1 < pbVar3[1];
      if (bVar1 != pbVar3[1]) goto LAB_0045fe30;
      pbVar5 = pbVar5 + 2;
      pbVar3 = pbVar3 + 2;
    } while (bVar1 != 0);
    uVar4 = 0;
LAB_0045fe35:
    if (uVar4 == 0) {
      if ((&DAT_00583570)[iVar6 * 3] == 0) {
        (&DAT_00583570)[iVar6 * 3] = (&PTR_AreFileApisANSI_0058356c)[iVar6 * 3];
      }
      if (param_3 == (undefined *)0x0) {
        param_3 = (undefined *)(&DAT_00583570)[iVar6 * 3];
      }
      (&PTR_AreFileApisANSI_0058356c)[iVar6 * 3] = param_3;
      return 0;
    }
    uVar2 = uVar2 + 0xc;
    iVar6 = iVar6 + 1;
    if (0x377 < uVar2) {
      return 0xc;
    }
  } while( true );
}


/* FUN_0045fee0 @ 0045fee0  kind=gamemisc  attributed-by=none  size=88 */

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


/* FUN_0045ff40 @ 0045ff40  kind=gamemisc  attributed-by=none  size=96 */

void __cdecl FUN_0045ff40(int param_1,int param_2)

{
  if ((*(ushort *)(param_1 + 0x24) & 0x2460) != 0) {
    FUN_004b7720((int *)(param_1 + 8));
  }
  FUN_00494b00(*(int *)(param_1 + 8),*(undefined4 **)(param_1 + 0x2c));
  if (param_2 < 0) {
    param_2 = 0;
  }
  *(int *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x1044010;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}


/* FUN_0045ffa0 @ 0045ffa0  kind=gamemisc  attributed-by=none  size=99 */

undefined * __cdecl FUN_0045ffa0(undefined4 param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  
  iVar6 = 0;
  uVar5 = 0;
  do {
    pbVar2 = *(byte **)((int)&PTR_s_AreFileApisANSI_00583568 + uVar5);
    pbVar4 = param_2;
    do {
      bVar1 = *pbVar4;
      bVar7 = bVar1 < *pbVar2;
      if (bVar1 != *pbVar2) {
LAB_0045ffd8:
        uVar3 = -(uint)bVar7 | 1;
        goto LAB_0045ffdd;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar7 = bVar1 < pbVar2[1];
      if (bVar1 != pbVar2[1]) goto LAB_0045ffd8;
      pbVar4 = pbVar4 + 2;
      pbVar2 = pbVar2 + 2;
    } while (bVar1 != 0);
    uVar3 = 0;
LAB_0045ffdd:
    if (uVar3 == 0) {
      return (&PTR_AreFileApisANSI_0058356c)[iVar6 * 3];
    }
    uVar5 = uVar5 + 0xc;
    iVar6 = iVar6 + 1;
    if (0x377 < uVar5) {
      return (undefined *)0x0;
    }
  } while( true );
}


/* FUN_00460010 @ 00460010  kind=gamemisc  attributed-by=none  size=855 */

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


/* FUN_00460380 @ 00460380  kind=gamemisc  attributed-by=none  size=111 */

uint __cdecl FUN_00460380(int param_1,byte *param_2,byte param_3,int param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b18)(*(int *)(param_1 + 0xc));
  }
  uVar2 = FUN_004762d0(param_1,param_2,param_3,param_4,param_5,0);
  if ((*(char *)(param_1 + 0x38) != '\0') || (uVar2 == 0xc0a)) {
    FUN_004961f0(param_1,7,(byte *)0x0);
    *(undefined1 *)(param_1 + 0x38) = 0;
    uVar2 = 7;
  }
  uVar1 = *(uint *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b20)(*(int *)(param_1 + 0xc));
  }
  return uVar1 & uVar2;
}


/* FUN_004603f0 @ 004603f0  kind=gamemisc  attributed-by=none  size=135 */

undefined * __cdecl FUN_004603f0(undefined4 param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  undefined **ppuVar6;
  bool bVar7;
  
  iVar5 = -1;
  if (param_2 != (byte *)0x0) {
    iVar5 = 0;
    ppuVar6 = &PTR_s_AreFileApisANSI_00583568;
    do {
      pbVar2 = *ppuVar6;
      pbVar4 = param_2;
      do {
        bVar1 = *pbVar4;
        bVar7 = bVar1 < *pbVar2;
        if (bVar1 != *pbVar2) {
LAB_00460430:
          uVar3 = -(uint)bVar7 | 1;
          goto LAB_00460435;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar7 = bVar1 < pbVar2[1];
        if (bVar1 != pbVar2[1]) goto LAB_00460430;
        pbVar4 = pbVar4 + 2;
        pbVar2 = pbVar2 + 2;
      } while (bVar1 != 0);
      uVar3 = 0;
LAB_00460435:
      if (uVar3 == 0) break;
      ppuVar6 = ppuVar6 + 3;
      iVar5 = iVar5 + 1;
    } while ((int)ppuVar6 < 0x5838d4);
  }
  iVar5 = iVar5 + 1;
  if (iVar5 < 0x4a) {
    ppuVar6 = &PTR_AreFileApisANSI_0058356c + iVar5 * 3;
    do {
      if (*ppuVar6 != (undefined *)0x0) {
        return (&PTR_s_AreFileApisANSI_00583568)[iVar5 * 3];
      }
      ppuVar6 = ppuVar6 + 3;
      iVar5 = iVar5 + 1;
    } while ((int)ppuVar6 < 0x5838e4);
  }
  return (undefined *)0x0;
}


/* FUN_00460480 @ 00460480  kind=gamemisc  attributed-by=none  size=112 */

uint __cdecl
FUN_00460480(int param_1,byte *param_2,byte param_3,int param_4,int param_5,int param_6)

{
  uint uVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b18)(*(int *)(param_1 + 0xc));
  }
  uVar2 = FUN_004762d0(param_1,param_2,param_3,param_4,param_5,param_6);
  if ((*(char *)(param_1 + 0x38) != '\0') || (uVar2 == 0xc0a)) {
    FUN_004961f0(param_1,7,(byte *)0x0);
    *(undefined1 *)(param_1 + 0x38) = 0;
    uVar2 = 7;
  }
  uVar1 = *(uint *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b20)(*(int *)(param_1 + 0xc));
  }
  return uVar1 & uVar2;
}


/* FUN_004604f0 @ 004604f0  kind=gamemisc  attributed-by=none  size=145 */

uint __cdecl FUN_004604f0(uint param_1,void *param_2,byte param_3,int param_4,int param_5)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b18)(*(int *)(param_1 + 0xc));
  }
  pbVar2 = (byte *)FUN_004ad190(param_1,param_2,0xffffffff,'\x02');
  if (pbVar2 != (byte *)0x0) {
    uVar3 = FUN_004762d0(param_1,pbVar2,param_3,param_4,param_5,0);
    FUN_00494b00(param_1,(undefined4 *)pbVar2);
  }
  if ((*(char *)(param_1 + 0x38) != '\0') || (uVar3 == 0xc0a)) {
    FUN_004961f0(param_1,7,(byte *)0x0);
    *(undefined1 *)(param_1 + 0x38) = 0;
    uVar3 = 7;
  }
  uVar1 = *(uint *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b20)(*(int *)(param_1 + 0xc));
  }
  return uVar1 & uVar3;
}


/* FUN_00460590 @ 00460590  kind=gamemisc  attributed-by=none  size=74 */

undefined4 __cdecl FUN_00460590(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b18)(*(int *)(param_1 + 0xc));
  }
  *(undefined4 *)(param_1 + 200) = param_3;
  *(undefined4 *)(param_1 + 0xd0) = param_2;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b20)(*(int *)(param_1 + 0xc));
  }
  return 0;
}


/* FUN_004605e0 @ 004605e0  kind=gamemisc  attributed-by=none  size=74 */

undefined4 __cdecl FUN_004605e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b18)(*(int *)(param_1 + 0xc));
  }
  *(undefined4 *)(param_1 + 0xcc) = param_3;
  *(undefined4 *)(param_1 + 0xd0) = param_2;
  *(undefined4 *)(param_1 + 200) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b20)(*(int *)(param_1 + 0xc));
  }
  return 0;
}


/* FUN_00460630 @ 00460630  kind=gamemisc  attributed-by=none  size=354 */

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


/* FUN_00460810 @ 00460810  kind=gamemisc  attributed-by=none  size=182 */

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


/* FUN_004608d0 @ 004608d0  kind=gamemisc  attributed-by=none  size=63 */

undefined4 __cdecl FUN_004608d0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b18)(*(int *)(param_1 + 0xc));
  }
  if (param_2 == 0) {
    uVar1 = *(undefined4 *)(param_1 + 4);
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 0x3c);
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b20)(*(int *)(param_1 + 0xc));
  }
  return uVar1;
}


/* FUN_00460910 @ 00460910  kind=gamemisc  attributed-by=none  size=72 */

undefined4 __cdecl FUN_00460910(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b18)(*(int *)(param_1 + 0xc));
  }
  uVar1 = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0xac) = param_2;
  *(undefined4 *)(param_1 + 0xa8) = param_3;
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b20)(*(int *)(param_1 + 0xc));
  }
  return uVar1;
}


/* FUN_00460960 @ 00460960  kind=gamemisc  attributed-by=none  size=72 */

undefined4 __cdecl FUN_00460960(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b18)(*(int *)(param_1 + 0xc));
  }
  uVar1 = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(param_1 + 0xb4) = param_2;
  *(undefined4 *)(param_1 + 0xb0) = param_3;
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b20)(*(int *)(param_1 + 0xc));
  }
  return uVar1;
}


/* FUN_004609b0 @ 004609b0  kind=gamemisc  attributed-by=none  size=637 */

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


/* FUN_00460c30 @ 00460c30  kind=gamemisc  attributed-by=none  size=208 */

undefined4 __cdecl FUN_00460c30(int param_1,void *param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  size_t _Size;
  size_t sVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined4 local_10;
  undefined4 uStack_c;
  
  if (((*(uint *)(param_1 + 0x18) == param_4) && (*(uint *)(param_1 + 0x1c) == param_5)) &&
     (param_4 != 0 || param_5 != 0)) {
    piVar3 = *(int **)(param_1 + 0x20);
  }
  else {
    piVar3 = *(int **)(param_1 + 4);
    if (piVar3 != (int *)0x0) {
      uStack_c = 0;
      local_10 = 0;
      do {
        bVar5 = 0xfffffc03 < local_10;
        local_10 = local_10 + 0x3fc;
        uStack_c = uStack_c + (uint)bVar5;
        if (((int)param_5 < uStack_c) || (((int)param_5 <= uStack_c && (param_4 < local_10))))
        break;
        piVar3 = (int *)*piVar3;
      } while (piVar3 != (int *)0x0);
    }
  }
  uVar6 = __alldiv(param_4,param_5,0x3fc,0);
  iVar2 = param_4 + (int)uVar6 * -0x3fc;
  uVar1 = param_3;
  do {
    sVar4 = 0x3fc - iVar2;
    _Size = sVar4;
    if ((int)uVar1 < (int)sVar4) {
      _Size = uVar1;
    }
    memcpy(param_2,(void *)(iVar2 + 4 + (int)piVar3),_Size);
    param_2 = (void *)((int)param_2 + _Size);
    uVar1 = uVar1 - sVar4;
    iVar2 = 0;
  } while (((-1 < (int)uVar1) && (piVar3 = (int *)*piVar3, piVar3 != (int *)0x0)) &&
          (0 < (int)uVar1));
  *(uint *)(param_1 + 0x18) = param_3 + param_4;
  *(int **)(param_1 + 0x20) = piVar3;
  *(uint *)(param_1 + 0x1c) = ((int)param_3 >> 0x1f) + param_5 + (uint)CARRY4(param_3,param_4);
  return 0;
}


/* FUN_00460d00 @ 00460d00  kind=gamemisc  attributed-by=none  size=72 */

undefined4 __cdecl FUN_00460d00(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b18)(*(int *)(param_1 + 0xc));
  }
  uVar1 = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(param_1 + 0xbc) = param_2;
  *(undefined4 *)(param_1 + 0xb8) = param_3;
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b20)(*(int *)(param_1 + 0xc));
  }
  return uVar1;
}


/* FUN_00461320 @ 00461320  kind=gamemisc  attributed-by=none  size=212 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 __cdecl FUN_00461320(uint param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = FUN_004bc920();
  if (iVar2 != 0) {
    return 0xffffffffffffffff;
  }
  if (DAT_00583f40 != 0) {
    (*DAT_00582b18)(DAT_00583f40);
  }
  uVar1 = _DAT_00583f48;
  if (DAT_00583f40 != 0) {
    (*DAT_00582b20)(DAT_00583f40);
  }
  if (0 < param_2) {
LAB_00461387:
    FUN_004a0990(FUN_0046b250,0,param_1,param_2);
    return uVar1;
  }
  if (-1 < param_2) {
    if ((-1 < param_2) && ((0 < param_2 || (param_1 != 0)))) goto LAB_00461387;
    if (DAT_00583f40 != 0) {
      (*DAT_00582b18)(DAT_00583f40);
    }
    DAT_00583f50 = 0;
    DAT_00583f54 = 0;
    _DAT_00583f48 = 0;
    DAT_00583f64 = 0;
    if (DAT_00583f40 != 0) {
      (*DAT_00582b20)(DAT_00583f40);
    }
  }
  return uVar1;
}


/* FUN_00461420 @ 00461420  kind=gamemisc  attributed-by=none  size=262 */

undefined4 __cdecl FUN_00461420(int param_1,void *param_2,undefined4 *param_3)

{
  uint *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *_Size;
  undefined8 uVar7;
  
  puVar6 = param_3;
  do {
    if ((int)puVar6 < 1) {
      return 0;
    }
    puVar3 = *(undefined4 **)(param_1 + 0x10);
    uVar7 = __allrem(*(uint *)(param_1 + 8),*(uint *)(param_1 + 0xc),0x3fc,0);
    iVar4 = (int)uVar7;
    _Size = (undefined4 *)(0x3fcU - iVar4);
    if ((int)puVar6 < (int)(0x3fcU - iVar4)) {
      _Size = puVar6;
    }
    if (iVar4 == 0) {
      iVar5 = FUN_004bc920();
      if (iVar5 != 0) {
        return 0xc0a;
      }
      if (DAT_00582ac8 == 0) {
        param_3 = (undefined4 *)(*DAT_00582ae8)(0x400);
      }
      else {
        if (DAT_00583f40 != 0) {
          (*DAT_00582b18)(DAT_00583f40);
        }
        FUN_00480650(0x400,(int *)&param_3);
        if (DAT_00583f40 != 0) {
          (*DAT_00582b20)(DAT_00583f40);
        }
      }
      if (param_3 == (undefined4 *)0x0) {
        return 0xc0a;
      }
      *param_3 = 0;
      if (puVar3 == (undefined4 *)0x0) {
        *(undefined4 **)(param_1 + 4) = param_3;
      }
      else {
        *puVar3 = param_3;
      }
      *(undefined4 **)(param_1 + 0x10) = param_3;
    }
    memcpy((void *)(*(int *)(param_1 + 0x10) + 4 + iVar4),param_2,(size_t)_Size);
    param_2 = (void *)((int)param_2 + (int)_Size);
    puVar6 = (undefined4 *)((int)puVar6 - (int)_Size);
    puVar1 = (uint *)(param_1 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + (int)_Size;
    *(int *)(param_1 + 0xc) =
         *(int *)(param_1 + 0xc) + ((int)_Size >> 0x1f) + (uint)CARRY4(uVar2,(uint)_Size);
  } while( true );
}


/* FUN_00461530 @ 00461530  kind=gamemisc  attributed-by=none  size=111 */

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


/* FUN_00461610 @ 00461610  kind=gamemisc  attributed-by=none  size=378 */

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


/* FUN_0046178a @ 0046178a  kind=gamemisc  attributed-by=none  size=1018 */

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

void __fastcall FUN_0046178a(int *param_1,int param_2)

{
  uint uVar1;
  int in_EAX;
  int *piVar2;
  int iVar3;
  size_t sVar4;
  ushort uVar5;
  int unaff_EBX;
  uint uVar6;
  int unaff_EBP;
  int unaff_ESI;
  uint uVar7;
  int *piVar8;
  int iVar9;
  size_t _Size;
  int iVar10;
  bool bVar11;
  
LAB_00461790:
  iVar9 = 0;
  if (0 < unaff_EBX) {
    do {
      uVar6 = (uint)*(byte *)(iVar9 + param_2);
      if ((int)uVar6 <= in_EAX) {
        piVar8 = *(int **)(unaff_ESI + iVar9 * 4);
        uVar7 = uVar6 - 4;
        if (3 < uVar6) {
          do {
            if (*param_1 != *piVar8) goto LAB_004617cb;
            param_1 = param_1 + 1;
            piVar8 = piVar8 + 1;
            bVar11 = 3 < uVar7;
            uVar7 = uVar7 - 4;
          } while (bVar11);
          in_EAX = *(int *)(unaff_EBP + 0x10);
        }
        if (uVar7 == 0xfffffffc) goto LAB_00461811;
LAB_004617cb:
        if (((char)*param_1 == (char)*piVar8) &&
           ((uVar7 == 0xfffffffd ||
            ((*(char *)((int)param_1 + 1) == *(char *)((int)piVar8 + 1) &&
             ((uVar7 == 0xfffffffe ||
              ((*(char *)((int)param_1 + 2) == *(char *)((int)piVar8 + 2) &&
               ((uVar7 == 0xffffffff || (*(char *)((int)param_1 + 3) == *(char *)((int)piVar8 + 3)))
               )))))))))) goto LAB_0046180e;
        param_2 = *(int *)(unaff_EBP + -4);
        in_EAX = *(int *)(unaff_EBP + 0x10);
      }
      unaff_EBX = *(int *)(unaff_EBP + -8);
      iVar9 = iVar9 + 1;
      if (unaff_EBX <= iVar9) break;
      param_1 = *(int **)(unaff_EBP + -0xc);
      unaff_ESI = *(int *)(unaff_EBP + -0x10);
    } while( true );
  }
  goto LAB_0046182f;
LAB_0046180e:
  in_EAX = *(int *)(unaff_EBP + 0x10);
LAB_00461811:
  param_2 = *(int *)(unaff_EBP + -4);
  unaff_ESI = *(int *)(unaff_EBP + -0x10);
  in_EAX = in_EAX - uVar6;
  param_1 = (int *)(*(int *)(unaff_EBP + -0xc) + uVar6);
  unaff_EBX = *(int *)(unaff_EBP + -8);
  *(int **)(unaff_EBP + -0xc) = param_1;
  *(int *)(unaff_EBP + 0x10) = in_EAX;
  if (in_EAX < 1) goto LAB_0046182f;
  goto LAB_00461790;
LAB_004618c3:
  in_EAX = *(int *)(unaff_EBP + 0x10) - uVar6;
  unaff_EBX = *(int *)(unaff_EBP + -8);
  *(int *)(unaff_EBP + 0x10) = in_EAX;
  if (in_EAX < 1) goto LAB_004618d6;
  goto LAB_00461843;
LAB_0046182f:
  if (((*(uint *)(unaff_EBP + -0x18) & 2) != 0) && (0 < in_EAX)) {
LAB_00461843:
    iVar9 = 0;
    if (0 < unaff_EBX) {
      iVar10 = *(int *)(unaff_EBP + -8);
      iVar3 = *(int *)(unaff_EBP + -4);
      do {
        uVar6 = (uint)*(byte *)(iVar9 + iVar3);
        if ((int)uVar6 <= in_EAX) {
          piVar2 = (int *)((in_EAX - uVar6) + *(int *)(unaff_EBP + -0xc));
          piVar8 = *(int **)(*(int *)(unaff_EBP + -0x10) + iVar9 * 4);
          uVar7 = uVar6;
          while (uVar1 = uVar7 - 4, 3 < uVar7) {
            if (*piVar2 != *piVar8) goto LAB_00461886;
            piVar2 = piVar2 + 1;
            piVar8 = piVar8 + 1;
            uVar7 = uVar1;
          }
          if (uVar1 == 0xfffffffc) goto LAB_004618c3;
LAB_00461886:
          if (((char)*piVar2 == (char)*piVar8) &&
             ((uVar1 == 0xfffffffd ||
              ((*(char *)((int)piVar2 + 1) == *(char *)((int)piVar8 + 1) &&
               ((uVar1 == 0xfffffffe ||
                ((*(char *)((int)piVar2 + 2) == *(char *)((int)piVar8 + 2) &&
                 ((uVar1 == 0xffffffff || (*(char *)((int)piVar2 + 3) == *(char *)((int)piVar8 + 3))
                  ))))))))))) goto LAB_004618c3;
          iVar3 = *(int *)(unaff_EBP + -4);
          iVar10 = *(int *)(unaff_EBP + -8);
          in_EAX = *(int *)(unaff_EBP + 0x10);
        }
        iVar9 = iVar9 + 1;
        if (iVar10 <= iVar9) break;
      } while( true );
    }
  }
LAB_004618d6:
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_00466dd0(*(int *)(unaff_EBP + -0x10));
  }
  iVar9 = *(int *)(unaff_EBP + 8);
  piVar8 = (int *)(iVar9 + 8);
  if (*(int *)(unaff_EBP + -0xc) == 0) {
    if ((*(byte *)(iVar9 + 0x24) & 0x40) != 0) {
      piVar8 = *(int **)(iVar9 + 0x18);
      piVar8[1] = *(int *)(*piVar8 + 0xa4);
      *(int **)(*piVar8 + 0xa4) = piVar8;
    }
    if ((*(byte *)(iVar9 + 0x24) & 0x20) != 0) {
      FUN_004a6e20(*(undefined4 **)(iVar9 + 0x18));
    }
    *(ushort *)(iVar9 + 0x24) = *(ushort *)(iVar9 + 0x24) & 0xbe01 | 1;
    *(undefined1 *)(iVar9 + 0x26) = 5;
    return;
  }
  if (*piVar8 == 0) {
    iVar3 = 1000000000;
  }
  else {
    iVar3 = *(int *)(*piVar8 + 0x50);
  }
  sVar4 = *(size_t *)(unaff_EBP + 0x10);
  uVar5 = 2;
  if ((int)sVar4 < 0) {
    sVar4 = 0;
    *(undefined4 *)(unaff_EBP + 0x10) = 0;
    if (-1 < iVar3) {
      do {
        if (*(char *)(sVar4 + *(int *)(unaff_EBP + -0xc)) == '\0') break;
        sVar4 = sVar4 + 1;
      } while ((int)sVar4 <= iVar3);
      *(size_t *)(unaff_EBP + 0x10) = sVar4;
    }
    uVar5 = 0x202;
  }
  _Size = sVar4;
  if ((uVar5 & 0x200) != 0) {
    _Size = sVar4 + 1;
  }
  if (iVar3 < (int)sVar4) {
    *(undefined4 *)(*(int *)(unaff_EBP + 8) + 0x38) = 0x12;
    if (*piVar8 == 0) {
      iVar3 = 1000000000;
    }
    else {
      iVar3 = *(int *)(*piVar8 + 0x50);
    }
    iVar10 = 0;
    if (-1 < iVar3) {
      do {
        if ("string or blob too big"[iVar10] == '\0') break;
        iVar10 = iVar10 + 1;
      } while (iVar10 <= iVar3);
    }
    uVar5 = *(ushort *)(iVar9 + 0x24);
    if ((uVar5 & 0x2460) != 0) {
      if ((uVar5 & 0x2000) == 0) {
        if (((uVar5 & 0x400) == 0) || (*(code **)(iVar9 + 0x28) == (code *)0x0)) {
          if ((uVar5 & 0x20) == 0) {
            if ((uVar5 & 0x40) != 0) {
              piVar2 = *(int **)(iVar9 + 0x18);
              piVar2[1] = *(int *)(*piVar2 + 0xa4);
              *(int **)(*piVar2 + 0xa4) = piVar2;
              if ((*(byte *)(iVar9 + 0x24) & 0x20) != 0) {
                FUN_004a6e20(*(undefined4 **)(iVar9 + 0x18));
              }
              *(ushort *)(iVar9 + 0x24) = *(ushort *)(iVar9 + 0x24) & 0xbe01 | 1;
              *(undefined1 *)(iVar9 + 0x26) = 5;
            }
          }
          else {
            FUN_004a6e20(*(undefined4 **)(iVar9 + 0x18));
          }
        }
        else {
          (**(code **)(iVar9 + 0x28))(*(undefined4 *)(iVar9 + 0xc));
          *(undefined4 *)(iVar9 + 0x28) = 0;
        }
      }
      else {
        FUN_004b7010(piVar8,*(int *)(iVar9 + 0x18));
        FUN_004b76e0(piVar8);
      }
    }
    FUN_00494b00(*piVar8,*(undefined4 **)(iVar9 + 0x2c));
    *(undefined4 *)(iVar9 + 0x2c) = 0;
    *(undefined4 *)(iVar9 + 0x28) = 0;
    *(char **)(iVar9 + 0xc) = "string or blob too big";
    *(int *)(iVar9 + 0x20) = iVar10;
    *(undefined2 *)(iVar9 + 0x26) = 0x103;
    *(undefined2 *)(iVar9 + 0x24) = 0xa02;
  }
  else {
    iVar3 = FUN_004b7260(piVar8,_Size,0);
    if (iVar3 == 0) {
      memcpy(*(void **)(iVar9 + 0xc),*(void **)(unaff_EBP + -0xc),_Size);
      *(undefined4 *)(iVar9 + 0x20) = *(undefined4 *)(unaff_EBP + 0x10);
      *(undefined2 *)(iVar9 + 0x26) = 0x103;
      *(ushort *)(iVar9 + 0x24) = uVar5;
      return;
    }
  }
  return;
}


/* FUN_00461bb0 @ 00461bb0  kind=gamemisc  attributed-by=none  size=283 */

void __cdecl FUN_00461bb0(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  ulonglong local_9c [6];
  char local_6c [100];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  iVar1 = FUN_0047eaa0(param_1,param_2,param_3,local_9c);
  if (iVar1 == 0) {
    FUN_00475680((uint *)local_9c);
    FUN_004752f0(local_9c);
    FUN_00466a80(100,local_6c,(byte *)"%04d-%02d-%02d %02d:%02d:%02d");
    if (*(int *)(param_1 + 8) == 0) {
      iVar1 = 1000000000;
    }
    else {
      iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x50);
    }
    iVar2 = 0;
    if (-1 < iVar1) {
      do {
        if (local_6c[iVar2] == '\0') break;
        iVar2 = iVar2 + 1;
      } while (iVar2 <= iVar1);
    }
    if (iVar1 < iVar2) {
      *(undefined4 *)(param_1 + 0x38) = 0x12;
      FUN_004b79e0((int *)(param_1 + 8),"string or blob too big",0xffffffff,'\x01',(undefined *)0x0)
      ;
    }
    else {
      iVar1 = FUN_004b7260((int *)(param_1 + 8),iVar2 + 1,0);
      if (iVar1 == 0) {
        memcpy(*(void **)(param_1 + 0xc),local_6c,iVar2 + 1);
        *(int *)(param_1 + 0x20) = iVar2;
        *(undefined4 *)(param_1 + 0x24) = 0x1030202;
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00461cd0 @ 00461cd0  kind=gamemisc  attributed-by=none  size=176 */

undefined4 * __cdecl FUN_00461cd0(undefined4 param_1,undefined4 param_2,int param_3)

{
  size_t _Size;
  bool bVar1;
  undefined4 *_Dst;
  int *piVar2;
  
  bVar1 = 0 < DAT_00582acc;
  _Size = (uint)bVar1 * 0x1c + 0x30;
  _Dst = (undefined4 *)FUN_004a0350(_Size);
  if (_Dst != (undefined4 *)0x0) {
    memset(_Dst,0,_Size);
    if (bVar1 == 0) {
      piVar2 = &DAT_005841e8;
    }
    else {
      piVar2 = _Dst + 0xc;
      _Dst[0xf] = 10;
    }
    _Dst[1] = param_1;
    _Dst[2] = param_2;
    *_Dst = piVar2;
    _Dst[3] = (uint)(param_3 != 0);
    if (param_3 != 0) {
      _Dst[4] = 10;
      if (*piVar2 != 0) {
        (*DAT_00582b18)(*piVar2);
      }
      piVar2[2] = piVar2[2] + _Dst[4];
      piVar2[3] = (piVar2[1] - piVar2[2]) + 10;
      if (*piVar2 != 0) {
        (*DAT_00582b20)(*piVar2);
      }
    }
  }
  return _Dst;
}


/* FUN_00461d80 @ 00461d80  kind=gamemisc  attributed-by=none  size=251 */

void __cdecl FUN_00461d80(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  ulonglong local_9c [6];
  char local_6c [100];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  iVar1 = FUN_0047eaa0(param_1,param_2,param_3,local_9c);
  if (iVar1 == 0) {
    FUN_004752f0(local_9c);
    FUN_00466a80(100,local_6c,(byte *)"%02d:%02d:%02d");
    if (*(int *)(param_1 + 8) == 0) {
      iVar1 = 1000000000;
    }
    else {
      iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x50);
    }
    iVar2 = 0;
    if (-1 < iVar1) {
      do {
        if (local_6c[iVar2] == '\0') break;
        iVar2 = iVar2 + 1;
      } while (iVar2 <= iVar1);
    }
    if (iVar1 < iVar2) {
      *(undefined4 *)(param_1 + 0x38) = 0x12;
      FUN_004b79e0((int *)(param_1 + 8),"string or blob too big",0xffffffff,'\x01',(undefined *)0x0)
      ;
    }
    else {
      iVar1 = FUN_004b7260((int *)(param_1 + 8),iVar2 + 1,0);
      if (iVar1 == 0) {
        memcpy(*(void **)(param_1 + 0xc),local_6c,iVar2 + 1);
        *(int *)(param_1 + 0x20) = iVar2;
        *(undefined4 *)(param_1 + 0x24) = 0x1030202;
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00461e80 @ 00461e80  kind=gamemisc  attributed-by=none  size=478 */

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


/* FUN_00462070 @ 00462070  kind=gamemisc  attributed-by=none  size=216 */

undefined4 __cdecl FUN_00462070(undefined8 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = *(undefined4 **)((int)param_1 + 4);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    if (DAT_00582ac8 == 0) {
      (*DAT_00582aec)(puVar2);
      puVar2 = puVar1;
    }
    else {
      if (DAT_00583f40 != 0) {
        (*DAT_00582b18)(DAT_00583f40);
      }
      iVar3 = (*DAT_00582af0._4_4_)(puVar2);
      DAT_00583e18 = DAT_00583e18 - iVar3;
      if (DAT_00583e40 < DAT_00583e18) {
        DAT_00583e40 = DAT_00583e18;
      }
      DAT_00583e3c = DAT_00583e3c + -1;
      if (DAT_00583e64 < DAT_00583e3c) {
        DAT_00583e64 = DAT_00583e3c;
      }
      (*DAT_00582aec)(puVar2);
      puVar2 = puVar1;
      if (DAT_00583f40 != 0) {
        (*DAT_00582b20)(DAT_00583f40);
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined **)param_1 = &DAT_00569a48;
  return 0;
}


/* FUN_00462150 @ 00462150  kind=gamemisc  attributed-by=none  size=254 */

void __cdecl FUN_00462150(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  ulonglong local_9c [6];
  char local_6c [100];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  iVar1 = FUN_0047eaa0(param_1,param_2,param_3,local_9c);
  if (iVar1 == 0) {
    FUN_00475680((uint *)local_9c);
    FUN_00466a80(100,local_6c,(byte *)"%04d-%02d-%02d");
    if (*(int *)(param_1 + 8) == 0) {
      iVar1 = 1000000000;
    }
    else {
      iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x50);
    }
    iVar2 = 0;
    if (-1 < iVar1) {
      do {
        if (local_6c[iVar2] == '\0') break;
        iVar2 = iVar2 + 1;
      } while (iVar2 <= iVar1);
    }
    if (iVar1 < iVar2) {
      *(undefined4 *)(param_1 + 0x38) = 0x12;
      FUN_004b79e0((int *)(param_1 + 8),"string or blob too big",0xffffffff,'\x01',(undefined *)0x0)
      ;
    }
    else {
      iVar1 = FUN_004b7260((int *)(param_1 + 8),iVar2 + 1,0);
      if (iVar1 == 0) {
        memcpy(*(void **)(param_1 + 0xc),local_6c,iVar2 + 1);
        *(int *)(param_1 + 0x20) = iVar2;
        *(undefined4 *)(param_1 + 0x24) = 0x1030202;
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00462250 @ 00462250  kind=gamemisc  attributed-by=none  size=103 */

void __cdecl FUN_00462250(int *param_1,int param_2)

{
  int *piVar1;
  
  if (param_1[3] != 0) {
    piVar1 = (int *)*param_1;
    if (*piVar1 != 0) {
      (*DAT_00582b18)(*piVar1);
    }
    piVar1[1] = piVar1[1] + (param_2 - param_1[5]);
    piVar1[3] = (piVar1[1] - piVar1[2]) + 10;
    param_1[5] = param_2;
    param_1[6] = (uint)(param_2 * 9) / 10;
    FUN_00486a20((int)piVar1);
    if (*piVar1 != 0) {
      (*DAT_00582b20)(*piVar1);
    }
  }
  return;
}


/* FUN_004622e0 @ 004622e0  kind=gamemisc  attributed-by=none  size=75 */

void __cdecl FUN_004622e0(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1[3] != 0) {
    piVar1 = (int *)*param_1;
    if (*piVar1 != 0) {
      (*DAT_00582b18)(*piVar1);
    }
    iVar2 = piVar1[1];
    piVar1[1] = 0;
    FUN_00486a20((int)piVar1);
    piVar1[1] = iVar2;
    if (*piVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00462322. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_00582b20)();
      return;
    }
  }
  return;
}


/* FUN_00462330 @ 00462330  kind=gamemisc  attributed-by=none  size=1221 */

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


/* FUN_004628d0 @ 004628d0  kind=gamemisc  attributed-by=none  size=53 */

undefined4 __cdecl FUN_004628d0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (*(int *)*param_1 != 0) {
    (*DAT_00582b18)(*(int *)*param_1);
  }
  uVar1 = param_1[9];
  if (*(int *)*param_1 != 0) {
    (*DAT_00582b20)(*(int *)*param_1);
  }
  return uVar1;
}


/* FUN_00462930 @ 00462930  kind=gamemisc  attributed-by=none  size=528 */

undefined4 * __cdecl FUN_00462930(int *param_1,uint param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 *extraout_EDX;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)0x0;
  piVar1 = (int *)*param_1;
  if (*piVar1 != 0) {
    (*DAT_00582b18)(*piVar1);
  }
  if (param_1[10] != 0) {
    for (puVar5 = *(undefined4 **)(param_1[0xb] + (param_2 % (uint)param_1[10]) * 4);
        puVar5 != (undefined4 *)0x0; puVar5 = (undefined4 *)puVar5[3]) {
      if (puVar5[2] == param_2) goto LAB_00462ac8;
    }
  }
  if (param_3 == 0) {
    if (puVar5 == (undefined4 *)0x0) goto LAB_00462b26;
LAB_00462ac8:
    iVar3 = *(int *)puVar5[4];
    if ((puVar5[5] != 0) || (puVar5 == *(undefined4 **)(iVar3 + 0x18))) {
      if (puVar5[6] != 0) {
        *(undefined4 *)(puVar5[6] + 0x14) = puVar5[5];
      }
      if (puVar5[5] != 0) {
        *(undefined4 *)(puVar5[5] + 0x18) = puVar5[6];
      }
      if (*(undefined4 **)(iVar3 + 0x14) == puVar5) {
        *(undefined4 *)(iVar3 + 0x14) = puVar5[5];
      }
      if (*(undefined4 **)(iVar3 + 0x18) == puVar5) {
        *(undefined4 *)(iVar3 + 0x18) = puVar5[6];
      }
      puVar5[5] = 0;
      puVar5[6] = 0;
      *(int *)(puVar5[4] + 0x20) = *(int *)(puVar5[4] + 0x20) + -1;
    }
  }
  else if (param_3 == 1) {
    if (((uint)(param_1[9] - param_1[8]) < (uint)piVar1[3]) &&
       ((uint)(param_1[9] - param_1[8]) < (uint)param_1[6])) {
      if ((DAT_0058420c == 0) || (iVar3 = DAT_00584228, DAT_00584208 < param_1[2] + param_1[1])) {
        iVar3 = DAT_00583f64;
      }
      if (iVar3 == 0) goto LAB_004629d1;
    }
  }
  else {
LAB_004629d1:
    if (((uint)param_1[9] < (uint)param_1[10]) || (iVar3 = FUN_00486cc0(param_1), iVar3 == 0)) {
      if (((param_1[3] == 0) || (puVar4 = (undefined4 *)piVar1[6], puVar4 == (undefined4 *)0x0)) ||
         (((param_1[9] + 1U < (uint)param_1[5] && ((uint)piVar1[4] < (uint)piVar1[1])) &&
          (iVar3 = FUN_00486ea0((int)param_1), puVar4 = extraout_EDX, iVar3 == 0)))) {
LAB_00462a53:
        if (puVar5 == (undefined4 *)0x0) goto LAB_00462a57;
      }
      else {
        FUN_00486c80((int)puVar4);
        FUN_00486c20((int)puVar4);
        iVar3 = puVar4[4];
        if (*(int *)(iVar3 + 8) + *(int *)(iVar3 + 4) == param_1[2] + param_1[1]) {
          piVar1[4] = piVar1[4] + (param_1[3] - *(int *)(iVar3 + 0xc));
          puVar5 = puVar4;
          goto LAB_00462a53;
        }
        FUN_00486bf0(puVar4);
LAB_00462a57:
        if ((param_3 == 1) && (DAT_00583e74 != (code *)0x0)) {
          (*DAT_00583e74)();
        }
        puVar5 = FUN_004869b0(param_1);
        if ((param_3 == 1) && (DAT_00583e78 != (code *)0x0)) {
          (*DAT_00583e78)();
        }
        if (puVar5 == (undefined4 *)0x0) goto LAB_00462b26;
      }
      uVar2 = param_1[10];
      param_1[9] = param_1[9] + 1;
      puVar5[2] = param_2;
      puVar5[3] = *(undefined4 *)(param_1[0xb] + (param_2 % uVar2) * 4);
      puVar5[4] = param_1;
      puVar5[6] = 0;
      puVar5[5] = 0;
      *(undefined4 *)puVar5[1] = 0;
      *(undefined4 **)(param_1[0xb] + (param_2 % uVar2) * 4) = puVar5;
    }
  }
  if ((puVar5 != (undefined4 *)0x0) && ((uint)param_1[7] < param_2)) {
    param_1[7] = param_2;
  }
LAB_00462b26:
  if (*piVar1 != 0) {
    (*DAT_00582b20)(*piVar1);
  }
  return puVar5;
}


/* FUN_00462b60 @ 00462b60  kind=gamemisc  attributed-by=none  size=505 */

void __cdecl FUN_00462b60(undefined4 param_1,undefined4 param_2,int param_3,uint *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 local_c0 [4];
  int local_b0;
  undefined8 local_2c;
  undefined8 local_24;
  undefined8 local_1c;
  undefined8 local_14;
  int local_c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  uVar4 = 0;
  iVar1 = FUN_00476080(param_2);
  if (iVar1 == 0) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  if (DAT_00583f38 == 0) {
    local_c0[0] = 0x94;
    (*(code *)PTR_GetVersionExA_00583704)(local_c0);
    DAT_00583f38 = (local_b0 == 2) + 1;
  }
  if (DAT_00583f38 == 2) {
    iVar5 = 0;
    local_2c = 0;
    local_24 = 0;
    local_1c = 0;
    local_14 = 0;
    local_c = 0;
    while( true ) {
      uVar4 = (*(code *)PTR_GetFileAttributesExW_00583674)(iVar1,0,&local_2c);
      if (uVar4 != 0) break;
      iVar2 = (*(code *)PTR_GetLastError_005836a4)();
      if ((DAT_00582bbc <= iVar5) || (((iVar2 != 5 && (iVar2 != 0x21)) && (iVar2 != 0x20)))) {
        if (iVar5 != 0) {
          FUN_004683f0(10,"delayed %dms for lock/sharing conflict");
        }
        if ((iVar2 != 2) && (iVar2 != 3)) {
          FUN_004c23f0(0xd0a,iVar2);
          FUN_00466dd0(iVar1);
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
        goto LAB_00462ce1;
      }
      iVar5 = iVar5 + 1;
      (*(code *)PTR_Sleep_005837e8)(iVar5 * DAT_00582bc0);
    }
    if (((param_3 == 0) && (local_14._4_4_ == 0)) && (local_c == 0)) {
LAB_00462ce1:
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = (uint)local_2c;
    }
  }
  else {
    uVar3 = (*(code *)PTR_GetFileAttributesA_0058365c)(iVar1);
  }
  FUN_00466dd0(iVar1);
  if (param_3 != 0) {
    if (param_3 == 1) {
      if ((uVar3 == 0xffffffff) || ((uVar3 & 1) != 0)) {
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
      goto LAB_00462d2a;
    }
    if (param_3 != 2) goto LAB_00462d2a;
  }
  uVar4 = (uint)(uVar3 != 0xffffffff);
LAB_00462d2a:
  *param_4 = uVar4;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00462eb0 @ 00462eb0  kind=gamemisc  attributed-by=none  size=300 */

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


/* FUN_00463000 @ 00463000  kind=gamemisc  attributed-by=none  size=286 */

void __cdecl FUN_00463000(int *param_1,undefined4 param_2,int *param_3)

{
  double *pdVar1;
  uint uVar2;
  char cVar3;
  ushort uVar4;
  int *piVar5;
  undefined8 *puVar6;
  double *pdVar7;
  int iVar8;
  float10 fVar9;
  ulonglong uVar10;
  
  piVar5 = (int *)param_1[0xc];
  if ((*(ushort *)(piVar5 + 7) & 0x2000) == 0) {
    FUN_004b7260(piVar5,0x20,0);
    *(undefined2 *)(piVar5 + 7) = 0x2000;
    piVar5[4] = *param_1;
    puVar6 = (undefined8 *)piVar5[1];
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = 0;
    }
  }
  pdVar7 = (double *)piVar5[1];
  iVar8 = *param_3;
  if (*(char *)(iVar8 + 0x1e) == '\x03') {
    FUN_0046dfa0(iVar8);
    uVar4 = *(ushort *)(iVar8 + 0x1c);
    if ((uVar4 & 1) == 0) {
      if ((uVar4 & 4) == 0) {
        if ((uVar4 & 8) == 0) {
          *(char *)(iVar8 + 0x1e) = '\x04' - ((uVar4 & 2) != 0);
        }
        else {
          *(undefined1 *)(iVar8 + 0x1e) = 2;
        }
      }
      else {
        *(undefined1 *)(iVar8 + 0x1e) = 1;
      }
    }
    else {
      *(undefined1 *)(iVar8 + 0x1e) = 5;
    }
  }
  cVar3 = *(char *)(iVar8 + 0x1e);
  if ((pdVar7 != (double *)0x0) && (cVar3 != '\x05')) {
    pdVar1 = pdVar7 + 2;
    uVar2 = *(uint *)pdVar1;
    *(uint *)pdVar1 = *(uint *)pdVar1 + 1;
    *(int *)((int)pdVar7 + 0x14) = *(int *)((int)pdVar7 + 0x14) + (uint)(0xfffffffe < uVar2);
    if (cVar3 == '\x01') {
      uVar10 = FUN_0045f250(*param_3);
      *pdVar7 = (double)(longlong)uVar10 + *pdVar7;
      if (*(char *)((int)pdVar7 + 0x19) == '\0' && *(char *)(pdVar7 + 3) == '\0') {
        iVar8 = FUN_0048bce0((uint *)(pdVar7 + 1),(uint)uVar10,(int)(uVar10 >> 0x20));
        if (iVar8 != 0) {
          *(undefined1 *)(pdVar7 + 3) = 1;
          return;
        }
      }
    }
    else {
      fVar9 = FUN_0045f160(*param_3);
      *(undefined1 *)((int)pdVar7 + 0x19) = 1;
      *pdVar7 = (double)fVar9 + *pdVar7;
    }
  }
  return;
}


/* FUN_00463630 @ 00463630  kind=gamemisc  attributed-by=none  size=178 */

void __cdecl FUN_00463630(int *param_1,undefined4 *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  piVar1 = (int *)*param_1;
  if (*piVar1 != 0) {
    (*DAT_00582b18)(*piVar1);
  }
  if ((param_3 == 0) && ((uint)piVar1[4] <= (uint)piVar1[1])) {
    if (piVar1[5] == 0) {
      piVar1[6] = (int)param_2;
      piVar1[5] = (int)param_2;
      param_1[8] = param_1[8] + 1;
    }
    else {
      *(undefined4 **)(piVar1[5] + 0x18) = param_2;
      param_2[5] = piVar1[5];
      piVar1[5] = (int)param_2;
      param_1[8] = param_1[8] + 1;
    }
  }
  else {
    iVar2 = param_2[4];
    piVar1 = (int *)(*(int *)(iVar2 + 0x2c) + ((uint)param_2[2] % *(uint *)(iVar2 + 0x28)) * 4);
    puVar3 = (undefined4 *)*piVar1;
    while (puVar3 != param_2) {
      piVar1 = puVar3 + 3;
      puVar3 = (undefined4 *)*piVar1;
    }
    *piVar1 = *(int *)(*piVar1 + 0xc);
    *(int *)(iVar2 + 0x24) = *(int *)(iVar2 + 0x24) + -1;
    piVar1 = (int *)param_2[4];
    FUN_00486af0((undefined4 *)*param_2);
    if (piVar1[3] != 0) {
      piVar1 = (int *)(*piVar1 + 0x10);
      *piVar1 = *piVar1 + -1;
    }
  }
  if (*(int *)*param_1 != 0) {
    (*DAT_00582b20)(*(int *)*param_1);
  }
  return;
}


/* FUN_004637e0 @ 004637e0  kind=gamemisc  attributed-by=none  size=126 */

void __cdecl FUN_004637e0(int param_1)

{
  int *piVar1;
  double *pdVar2;
  
  piVar1 = *(int **)(param_1 + 0x30);
  if ((*(ushort *)(piVar1 + 7) & 0x2000) == 0) {
    FUN_004b7720(piVar1);
    *(undefined2 *)(piVar1 + 7) = 1;
    piVar1[1] = 0;
  }
  pdVar2 = (double *)piVar1[1];
  if (pdVar2 != (double *)0x0) {
    if ((-1 < *(int *)((int)pdVar2 + 0x14)) &&
       ((0 < *(int *)((int)pdVar2 + 0x14) || (*(int *)(pdVar2 + 2) != 0)))) {
      FUN_004b7790((int *)(param_1 + 8),*pdVar2 / (double)(longlong)pdVar2[2]);
    }
  }
  return;
}


/* FUN_00463860 @ 00463860  kind=gamemisc  attributed-by=none  size=764 */

void __cdecl FUN_00463860(int param_1,byte *param_2,int param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  void *_Dst;
  void *pvVar5;
  size_t _Size;
  undefined4 local_9c [4];
  int local_8c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  if (((*param_2 == 0x2f) && (((&DAT_00569720)[param_2[1]] & 2) != 0)) && (param_2[2] == 0x3a)) {
    param_2 = param_2 + 1;
  }
  if (((DAT_00583e14 != 0) && (bVar1 = *param_2, bVar1 != 0x2f)) &&
     ((bVar1 != 0x5c && ((((&DAT_00569720)[bVar1] & 2) == 0 || (param_2[1] != 0x3a)))))) {
    iVar2 = *(int *)(param_1 + 8);
    if (param_3 < *(int *)(param_1 + 8)) {
      iVar2 = param_3;
    }
    FUN_00466a80(iVar2,param_4,(byte *)"%s\\%s");
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar2 = FUN_00476080(param_2);
  if (iVar2 == 0) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  if (DAT_00583f38 == 0) {
    local_9c[0] = 0x94;
    (*(code *)PTR_GetVersionExA_00583704)(local_9c);
    DAT_00583f38 = (local_8c == 2) + 1;
  }
  if (DAT_00583f38 == 2) {
    iVar3 = (*(code *)PTR_GetFullPathNameW_00583698)();
    if (iVar3 == 0) {
      uVar4 = (*(code *)PTR_GetLastError_005836a4)("GetFullPathNameW1",iVar2,0x85ec);
      FUN_004c23f0(1,uVar4);
      FUN_00466dd0(iVar2);
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    iVar3 = iVar3 + 3;
    _Dst = (void *)FUN_004a0350(iVar3 * 2);
    if (_Dst == (void *)0x0) {
LAB_00463b3d:
      FUN_00466dd0(iVar2);
      goto LAB_00463b46;
    }
    memset(_Dst,0,iVar3 * 2);
    iVar3 = (*(code *)PTR_GetFullPathNameW_00583698)(iVar2,iVar3,_Dst,0);
    if (iVar3 == 0) {
      uVar4 = (*(code *)PTR_GetLastError_005836a4)("GetFullPathNameW2",iVar2,0x85f9);
      FUN_004c23f0(1,uVar4);
      FUN_00466dd0(iVar2);
      FUN_00466dd0((int)_Dst);
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    FUN_00466dd0(iVar2);
    pvVar5 = FUN_004bdc10(_Dst);
  }
  else {
    iVar3 = (*(code *)PTR_GetFullPathNameA_0058368c)(iVar2,0,0,0);
    if (iVar3 == 0) {
      uVar4 = (*(code *)PTR_GetLastError_005836a4)("GetFullPathNameA1",iVar2,0x8608);
      FUN_004c23f0(1,uVar4);
      FUN_00466dd0(iVar2);
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    _Size = iVar3 + 3;
    _Dst = (void *)FUN_004a0350(_Size);
    if (_Dst == (void *)0x0) goto LAB_00463b3d;
    memset(_Dst,0,_Size);
    iVar3 = (*(code *)PTR_GetFullPathNameA_0058368c)(iVar2,_Size,_Dst,0);
    if (iVar3 == 0) {
      uVar4 = (*(code *)PTR_GetLastError_005836a4)("GetFullPathNameA2",iVar2,0x8615);
      FUN_004c23f0(1,uVar4);
      FUN_00466dd0(iVar2);
      FUN_00466dd0((int)_Dst);
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    FUN_00466dd0(iVar2);
    pvVar5 = FUN_004bcd60(_Dst);
  }
  FUN_00466dd0((int)_Dst);
  if (pvVar5 != (void *)0x0) {
    iVar2 = *(int *)(param_1 + 8);
    if (param_3 < *(int *)(param_1 + 8)) {
      iVar2 = param_3;
    }
    FUN_00466a80(iVar2,param_4,&DAT_0056de50);
    FUN_00466dd0((int)pvVar5);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
LAB_00463b46:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00463b80 @ 00463b80  kind=gamemisc  attributed-by=none  size=87 */

void __cdecl FUN_00463b80(int param_1)

{
  int *piVar1;
  undefined8 uVar2;
  
  piVar1 = *(int **)(param_1 + 0x30);
  if ((*(ushort *)(piVar1 + 7) & 0x2000) == 0) {
    FUN_004b7720(piVar1);
    *(undefined2 *)(piVar1 + 7) = 1;
    piVar1[1] = 0;
  }
  if ((undefined8 *)piVar1[1] == (undefined8 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)piVar1[1];
  }
  FUN_004b7790((int *)(param_1 + 8),uVar2);
  return;
}


/* FUN_00463be0 @ 00463be0  kind=gamemisc  attributed-by=none  size=120 */

void __cdecl FUN_00463be0(undefined4 *param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  if (*(int *)*param_1 != 0) {
    (*DAT_00582b18)(*(int *)*param_1);
  }
  piVar3 = (int *)(param_1[0xb] + (param_3 % (uint)param_1[10]) * 4);
  iVar1 = *(int *)(param_1[0xb] + (param_3 % (uint)param_1[10]) * 4);
  while (iVar1 != param_2) {
    piVar3 = (int *)(*piVar3 + 0xc);
    iVar1 = *piVar3;
  }
  *piVar3 = *(int *)(param_2 + 0xc);
  uVar2 = param_1[10];
  *(uint *)(param_2 + 8) = param_4;
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1[0xb] + (param_4 % uVar2) * 4);
  *(int *)(param_1[0xb] + (param_4 % uVar2) * 4) = param_2;
  if ((uint)param_1[7] < param_4) {
    param_1[7] = param_4;
  }
  if (*(int *)*param_1 != 0) {
    (*DAT_00582b20)(*(int *)*param_1);
  }
  return;
}


/* FUN_00463c80 @ 00463c80  kind=gamemisc  attributed-by=none  size=95 */

void __cdecl FUN_00463c80(int *param_1,int param_2,int *param_3)

{
  uint uVar1;
  int *piVar2;
  uint *puVar3;
  
  piVar2 = (int *)param_1[0xc];
  if ((*(ushort *)(piVar2 + 7) & 0x2000) == 0) {
    FUN_004b7260(piVar2,8,0);
    *(undefined2 *)(piVar2 + 7) = 0x2000;
    piVar2[4] = *param_1;
    if ((undefined8 *)piVar2[1] != (undefined8 *)0x0) {
      *(undefined8 *)piVar2[1] = 0;
    }
  }
  puVar3 = (uint *)piVar2[1];
  if (((param_2 == 0) || (*(char *)(*param_3 + 0x1e) != '\x05')) && (puVar3 != (uint *)0x0)) {
    uVar1 = *puVar3;
    *puVar3 = *puVar3 + 1;
    puVar3[1] = puVar3[1] + (uint)(0xfffffffe < uVar1);
  }
  return;
}


/* FUN_00463d00 @ 00463d00  kind=gamemisc  attributed-by=none  size=72 */

void __cdecl FUN_00463d00(undefined4 *param_1,uint param_2)

{
  if (*(int *)*param_1 != 0) {
    (*DAT_00582b18)(*(int *)*param_1);
  }
  if (param_2 <= (uint)param_1[7]) {
    FUN_00486dd0((int)param_1,param_2);
    param_1[7] = param_2 - 1;
  }
  if (*(int *)*param_1 != 0) {
    (*DAT_00582b20)(*(int *)*param_1);
  }
  return;
}


/* FUN_00463d50 @ 00463d50  kind=gamemisc  attributed-by=none  size=168 */

void __cdecl FUN_00463d50(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 local_c;
  undefined4 uStack_8;
  
  piVar1 = *(int **)(param_1 + 0x30);
  if ((*(ushort *)(piVar1 + 7) & 0x2000) == 0) {
    FUN_004b7720(piVar1);
    *(undefined2 *)(piVar1 + 7) = 1;
    piVar1[1] = 0;
  }
  puVar2 = (undefined4 *)piVar1[1];
  if (puVar2 == (undefined4 *)0x0) {
    uStack_8 = 0;
    local_c = 0;
  }
  else {
    local_c = *puVar2;
    uStack_8 = puVar2[1];
  }
  if ((*(ushort *)(param_1 + 0x24) & 0x2460) != 0) {
    FUN_004b7720((int *)(param_1 + 8));
  }
  FUN_00494b00(*(int *)(param_1 + 8),*(undefined4 **)(param_1 + 0x2c));
  *(undefined4 *)(param_1 + 0x1c) = uStack_8;
  *(undefined4 *)(param_1 + 0x18) = local_c;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined2 *)(param_1 + 0x24) = 4;
  *(undefined1 *)(param_1 + 0x26) = 1;
  return;
}


/* FUN_00463e20 @ 00463e20  kind=gamemisc  attributed-by=none  size=104 */

void __cdecl FUN_00463e20(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (*piVar1 != 0) {
    (*DAT_00582b18)(*piVar1);
  }
  FUN_00486dd0((int)param_1,0);
  piVar1[1] = piVar1[1] - param_1[5];
  piVar1[2] = piVar1[2] - param_1[4];
  piVar1[3] = (piVar1[1] - piVar1[2]) + 10;
  FUN_00486a20((int)piVar1);
  if (*piVar1 != 0) {
    (*DAT_00582b20)(*piVar1);
  }
  FUN_00466dd0(param_1[0xb]);
  FUN_00466dd0((int)param_1);
  return;
}


/* FUN_00463e90 @ 00463e90  kind=gamemisc  attributed-by=none  size=215 */

void __cdecl FUN_00463e90(int *param_1,undefined4 param_2,int *param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  
  puVar1 = (undefined8 *)*param_3;
  piVar2 = (int *)param_1[0xc];
  if ((*(ushort *)(piVar2 + 7) & 0x2000) == 0) {
    FUN_004b7260(piVar2,0x28,0);
    *(undefined2 *)(piVar2 + 7) = 0x2000;
    piVar2[4] = *param_1;
    puVar3 = (undefined8 *)piVar2[1];
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
    }
  }
  piVar2 = (int *)piVar2[1];
  if (piVar2 != (int *)0x0) {
    if (*(char *)(*param_3 + 0x1e) == '\x05') {
      if ((short)piVar2[7] != 0) {
LAB_00463f05:
        param_1[0xf] = 1;
        return;
      }
    }
    else {
      if ((short)piVar2[7] != 0) {
        iVar4 = *(int *)(*param_1 + 4);
        uVar5 = FUN_004a0720((undefined8 *)piVar2,puVar1,param_1[0xd]);
        if (iVar4 == 0) {
          if ((int)uVar5 < 1) goto LAB_00463f05;
        }
        else if (-1 < (int)uVar5) {
          param_1[0xf] = 1;
          return;
        }
        FUN_004b6f10(piVar2,puVar1);
        return;
      }
      FUN_004b6f10(piVar2,puVar1);
    }
  }
  return;
}


/* FUN_00463f80 @ 00463f80  kind=gamemisc  attributed-by=none  size=425 */

uint __cdecl FUN_00463f80(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *_Dst;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  undefined4 *local_8;
  
  uVar5 = 0;
  local_8 = (undefined4 *)0x0;
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b18)(*(int *)(param_1 + 0xc));
  }
  if ((*(int *)(param_1 + 0x134) != 0) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0x134) + 4), iVar1 != 0)) {
    _Dst = FUN_00494b90(param_1,0x230);
    if (_Dst == (int *)0x0) {
      uVar5 = 7;
    }
    else {
      memset(_Dst,0,0x230);
      *(undefined1 *)((int)_Dst + 0x1d5) = 1;
      *_Dst = param_1;
      _Dst[0x6e] = 0;
      _Dst[0x6f] = 0x3ff00000;
      iVar3 = FUN_004a7140(_Dst,param_2,(int *)&local_8);
      puVar2 = local_8;
      if ((((iVar3 == 0) && (iVar3 = _Dst[0x7f], iVar3 != 0)) && (*(char *)(param_1 + 0x38) == '\0')
          ) && ((*(int *)(iVar3 + 0xc) == 0 && ((*(byte *)(iVar3 + 0x2a) & 0x10) == 0)))) {
        if (*(int *)(iVar1 + 4) == 0) {
          *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar3 + 4);
          *(undefined2 *)(iVar1 + 0x26) = *(undefined2 *)(_Dst[0x7f] + 0x26);
          *(undefined2 *)(_Dst[0x7f] + 0x26) = 0;
          *(undefined4 *)(_Dst[0x7f] + 4) = 0;
        }
        *(undefined4 *)(*(int *)(param_1 + 0x134) + 4) = 0;
      }
      else {
        pbVar4 = &DAT_0056de50;
        if (local_8 == (undefined4 *)0x0) {
          pbVar4 = (byte *)0x0;
        }
        FUN_004961f0(param_1,1,pbVar4);
        FUN_00494b00(param_1,puVar2);
        uVar5 = 1;
      }
      *(undefined1 *)((int)_Dst + 0x1d5) = 0;
      if ((int *)_Dst[2] != (int *)0x0) {
        FUN_004b5e70((int *)_Dst[2]);
      }
      FUN_00495300(param_1,(undefined4 *)_Dst[0x7f]);
      FUN_00494b00(param_1,_Dst);
    }
    uVar5 = FUN_0048ca70(param_1,uVar5);
    if (*(int *)(param_1 + 0xc) != 0) {
      (*DAT_00582b20)(*(int *)(param_1 + 0xc));
    }
    return uVar5;
  }
  FUN_004961f0(param_1,0x15,(byte *)0x0);
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b20)(*(int *)(param_1 + 0xc));
  }
  FUN_004683f0(0x15,"misuse at line %d of [%.10s]");
  return 0x15;
}


/* FUN_00464130 @ 00464130  kind=gamemisc  attributed-by=none  size=168 */

uint __cdecl FUN_00464130(int param_1,byte *param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  short *psVar3;
  uint uVar4;
  byte *pbVar5;
  size_t sVar6;
  
  sVar6 = 0;
  if (param_2 != (byte *)0x0) {
    bVar1 = *param_2;
    pbVar5 = param_2;
    while (bVar1 != 0) {
      pbVar5 = pbVar5 + 1;
      bVar1 = *pbVar5;
    }
    sVar6 = (int)pbVar5 - (int)param_2 & 0x3fffffff;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b18)(*(int *)(param_1 + 0xc));
  }
  psVar3 = FUN_004995c0(param_1,param_2,sVar6,param_3,1,'\0');
  if (psVar3 == (short *)0x0) {
    uVar4 = FUN_00493f20(param_1,param_2,param_3,1,0,0x49f6a0,0,0,(int *)0x0);
  }
  else {
    uVar4 = 0;
  }
  if ((*(char *)(param_1 + 0x38) != '\0') || (uVar4 == 0xc0a)) {
    FUN_004961f0(param_1,7,(byte *)0x0);
    *(undefined1 *)(param_1 + 0x38) = 0;
    uVar4 = 7;
  }
  uVar2 = *(uint *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b20)(*(int *)(param_1 + 0xc));
  }
  return uVar2 & uVar4;
}


/* FUN_004641e0 @ 004641e0  kind=gamemisc  attributed-by=none  size=132 */

void __cdecl FUN_004641e0(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x30);
  if ((*(ushort *)(piVar1 + 7) & 0x2000) == 0) {
    FUN_004b7720(piVar1);
    *(undefined2 *)(piVar1 + 7) = 1;
    piVar1[1] = 0;
  }
  piVar1 = (int *)piVar1[1];
  if (piVar1 != (int *)0x0) {
    if ((short)piVar1[7] != 0) {
      FUN_004b6f10((int *)(param_1 + 8),(undefined8 *)piVar1);
    }
    if ((*(ushort *)(piVar1 + 7) & 0x2460) != 0) {
      FUN_004b7720(piVar1);
    }
    FUN_00494b00(*piVar1,(undefined4 *)piVar1[9]);
    piVar1[1] = 0;
    piVar1[9] = 0;
    piVar1[8] = 0;
  }
  return;
}


/* FUN_00464270 @ 00464270  kind=gamemisc  attributed-by=none  size=153 */

void __cdecl FUN_00464270(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_9c [4];
  int local_8c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  iVar1 = FUN_00476080(param_2);
  if (iVar1 == 0) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  if (DAT_00583f38 == 0) {
    local_9c[0] = 0x94;
    (*(code *)PTR_GetVersionExA_00583704)(local_9c);
    DAT_00583f38 = (local_8c == 2) + 1;
  }
  if (DAT_00583f38 == 2) {
    (*(code *)PTR_LoadLibraryW_00583770)();
  }
  else {
    (*(code *)PTR_LoadLibraryA_00583764)(iVar1);
  }
  FUN_00466dd0(iVar1);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00464310 @ 00464310  kind=gamemisc  attributed-by=none  size=270 */

void __cdecl FUN_00464310(int *param_1,int param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  undefined8 *puVar3;
  int *piVar4;
  char *pcVar5;
  size_t sVar6;
  int iVar7;
  
  if (*(char *)(*param_3 + 0x1e) != '\x05') {
    piVar2 = (int *)param_1[0xc];
    if ((*(ushort *)(piVar2 + 7) & 0x2000) == 0) {
      FUN_004b7260(piVar2,0x1c,0);
      *(undefined2 *)(piVar2 + 7) = 0x2000;
      piVar2[4] = *param_1;
      puVar3 = (undefined8 *)piVar2[1];
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        *(undefined4 *)(puVar3 + 3) = 0;
      }
    }
    piVar2 = (int *)piVar2[1];
    if (piVar2 != (int *)0x0) {
      iVar7 = param_1[2];
      cVar1 = *(char *)((int)piVar2 + 0x19);
      *(undefined1 *)((int)piVar2 + 0x19) = 2;
      piVar2[5] = *(int *)(iVar7 + 0x50);
      if (cVar1 != '\0') {
        if (param_2 == 2) {
          pcVar5 = (char *)FUN_004ae680((int *)param_3[1],1);
          sVar6 = FUN_0046b2b0((int *)param_3[1]);
        }
        else {
          pcVar5 = ",";
          sVar6 = 1;
        }
        FUN_004aa7b0(piVar2,pcVar5,sVar6);
      }
      pcVar5 = (char *)FUN_004ae680((int *)*param_3,1);
      piVar4 = (int *)*param_3;
      if (((*(byte *)(piVar4 + 7) & 0x10) == 0) && (iVar7 = FUN_004ae680(piVar4,1), iVar7 == 0)) {
        FUN_004aa7b0(piVar2,pcVar5,0);
        return;
      }
      sVar6 = piVar4[6];
      if ((*(ushort *)(piVar4 + 7) & 0x4000) != 0) {
        sVar6 = sVar6 + piVar4[4];
      }
      FUN_004aa7b0(piVar2,pcVar5,sVar6);
    }
  }
  return;
}


/* FUN_00464c00 @ 00464c00  kind=gamemisc  attributed-by=none  size=201 */

uint __cdecl FUN_00464c00(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  uint uVar5;
  
  puVar3 = param_1;
  if (param_1 == (undefined4 *)0x0) {
    FUN_004683f0(0x15,"misuse at line %d of [%.10s]");
    return 0x15;
  }
  iVar1 = param_1[6];
  if (*(int *)(iVar1 + 0xc) != 0) {
    (*DAT_00582b18)(*(int *)(iVar1 + 0xc));
  }
  if (puVar3[5] == 0) {
    uVar5 = 4;
  }
  else {
    uVar5 = FUN_00470ba0((int)puVar3,param_2,param_3,&param_1);
    puVar3 = param_1;
    if (uVar5 != 0) {
      pbVar4 = &DAT_0056de50;
      if (param_1 == (undefined4 *)0x0) {
        pbVar4 = (byte *)0x0;
      }
      FUN_004961f0(iVar1,uVar5,pbVar4);
      FUN_00494b00(iVar1,puVar3);
    }
  }
  if ((*(char *)(iVar1 + 0x38) != '\0') || (uVar5 == 0xc0a)) {
    FUN_004961f0(iVar1,7,(byte *)0x0);
    *(undefined1 *)(iVar1 + 0x38) = 0;
    uVar5 = 7;
  }
  uVar2 = *(uint *)(iVar1 + 0x30);
  if (*(int *)(iVar1 + 0xc) != 0) {
    (*DAT_00582b20)(*(int *)(iVar1 + 0xc));
  }
  return uVar2 & uVar5;
}


/* FUN_00464cd0 @ 00464cd0  kind=gamemisc  attributed-by=none  size=82 */

uint __cdecl FUN_00464cd0(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    iVar1 = param_1[6];
    if (*(int *)(iVar1 + 0xc) != 0) {
      (*DAT_00582b18)(*(int *)(iVar1 + 0xc));
    }
    uVar2 = FUN_0046aa30((int *)param_1[5]);
    FUN_00494b00(iVar1,param_1);
    if (*(int *)(iVar1 + 0xc) != 0) {
      (*DAT_00582b20)(*(int *)(iVar1 + 0xc));
    }
    return uVar2;
  }
  return 0;
}


/* FUN_00464d90 @ 00464d90  kind=gamemisc  attributed-by=none  size=173 */

void __cdecl FUN_00464d90(int param_1)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  
  piVar1 = *(int **)(param_1 + 0x30);
  if ((*(ushort *)(piVar1 + 7) & 0x2000) == 0) {
    FUN_004b7720(piVar1);
    *(undefined2 *)(piVar1 + 7) = 1;
    piVar1[1] = 0;
  }
  piVar1 = (int *)piVar1[1];
  if (piVar1 != (int *)0x0) {
    if (*(char *)((int)piVar1 + 0x1a) != '\0') {
      *(undefined4 *)(param_1 + 0x38) = 0x12;
      FUN_004b79e0((int *)(param_1 + 8),"string or blob too big",0xffffffff,'\x01',(undefined *)0x0)
      ;
      return;
    }
    if ((char)piVar1[6] != '\0') {
      FUN_0045fad0(param_1);
      return;
    }
    pvVar2 = (void *)FUN_004aa8f0(piVar1);
    iVar3 = FUN_004b79e0((int *)(param_1 + 8),pvVar2,0xffffffff,'\x01',FUN_00466dd0);
    if (iVar3 == 0x12) {
      *(undefined4 *)(param_1 + 0x38) = 0x12;
      FUN_004b79e0((int *)(param_1 + 8),"string or blob too big",0xffffffff,'\x01',(undefined *)0x0)
      ;
    }
  }
  return;
}


/* FUN_00464f20 @ 00464f20  kind=gamemisc  attributed-by=none  size=121 */

int __cdecl FUN_00464f20(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_004bc920();
  if (iVar2 == 0) {
    if (DAT_00582acc == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*DAT_00582b10)(2);
      if (iVar2 != 0) {
        (*DAT_00582b18)(iVar2);
      }
    }
    FUN_004bfd90(param_1);
    iVar1 = DAT_00583e70;
    if ((param_2 == 0) && (DAT_00583e70 != 0)) {
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(DAT_00583e70 + 0xc);
      *(int *)(iVar1 + 0xc) = param_1;
    }
    else {
      *(int *)(param_1 + 0xc) = DAT_00583e70;
      DAT_00583e70 = param_1;
    }
    if (iVar2 != 0) {
      (*DAT_00582b20)(iVar2);
    }
    iVar2 = 0;
  }
  return iVar2;
}


/* FUN_00464fa0 @ 00464fa0  kind=gamemisc  attributed-by=none  size=126 */

undefined4 __cdecl FUN_00464fa0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (DAT_00582acc == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = (*DAT_00582b10)(2);
    if (iVar4 != 0) {
      (*DAT_00582b18)(iVar4);
    }
  }
  if (param_1 != 0) {
    if (DAT_00583e70 == param_1) {
      DAT_00583e70 = *(int *)(param_1 + 0xc);
    }
    else if (DAT_00583e70 != 0) {
      iVar1 = *(int *)(DAT_00583e70 + 0xc);
      iVar3 = DAT_00583e70;
      while ((iVar1 != 0 && (iVar2 = *(int *)(iVar3 + 0xc), iVar2 != param_1))) {
        iVar1 = *(int *)(iVar2 + 0xc);
        iVar3 = iVar2;
      }
      if (*(int *)(iVar3 + 0xc) == param_1) {
        *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(param_1 + 0xc);
      }
    }
  }
  if (iVar4 != 0) {
    (*DAT_00582b20)(iVar4);
  }
  return 0;
}


/* FUN_00465070 @ 00465070  kind=gamemisc  attributed-by=none  size=110 */

undefined4 __cdecl FUN_00465070(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = (*(code *)PTR_CloseHandle_00583590)(*(undefined4 *)(param_1 + 8));
  while (iVar1 == 0) {
    iVar3 = iVar3 + 1;
    if (2 < iVar3) goto LAB_004650b9;
    (*(code *)PTR_Sleep_005837e8)(100);
    iVar1 = (*(code *)PTR_CloseHandle_00583590)(*(undefined4 *)(param_1 + 8));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (iVar1 != 0) {
    return 0;
  }
LAB_004650b9:
  uVar2 = (*(code *)PTR_GetLastError_005836a4)("winClose",*(undefined4 *)(param_1 + 0x1c),0x7dc3);
  uVar2 = FUN_004c23f0(0x100a,uVar2);
  return uVar2;
}


/* FUN_00465100 @ 00465100  kind=gamemisc  attributed-by=none  size=24 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_00465100(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0046510e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*_DAT_00582b1c)();
    return uVar1;
  }
  return 0;
}


/* FUN_00465140 @ 00465140  kind=gamemisc  attributed-by=none  size=177 */

void __cdecl FUN_00465140(undefined4 param_1,uint param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 local_18;
  undefined4 local_10;
  undefined4 uStack_c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  iVar2 = 0;
  if (0xf < param_2) {
    (*(code *)PTR_GetSystemTime_005836c8)(&local_18);
    *param_3 = local_18;
    param_3[1] = CONCAT44(uStack_c,local_10);
    iVar2 = 0x10;
  }
  if (3 < param_2 - iVar2) {
    uVar1 = (*(code *)PTR_GetCurrentProcessId_00583638)();
    *(undefined4 *)((int)param_3 + iVar2) = uVar1;
    iVar2 = iVar2 + 4;
  }
  if (3 < param_2 - iVar2) {
    uVar1 = (*(code *)PTR_GetTickCount_005836f8)();
    *(undefined4 *)((int)param_3 + iVar2) = uVar1;
    iVar2 = iVar2 + 4;
  }
  if (7 < param_2 - iVar2) {
    (*(code *)PTR_QueryPerformanceCounter_005837b8)(&local_10);
    *(undefined4 *)((int)param_3 + iVar2) = local_10;
    *(undefined4 *)((int)param_3 + iVar2 + 4) = uStack_c;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00465210 @ 00465210  kind=gamemisc  attributed-by=none  size=260 */

undefined4 __cdecl
FUN_00465210(uint param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 local_18;
  ulonglong local_10;
  undefined4 local_8;
  
  uVar2 = param_3;
  uVar1 = param_1;
  iVar5 = 0;
  local_18 = 0;
  local_8 = 0;
  local_10 = CONCAT44(param_5,param_4) & 0x7fffffffffffffff;
  while( true ) {
    iVar3 = (*(code *)PTR_ReadFile_005837c4)
                      (*(undefined4 *)(uVar1 + 8),param_2,uVar2,&param_1,&local_18);
    if (iVar3 != 0) break;
    iVar3 = (*(code *)PTR_GetLastError_005836a4)();
    if (iVar3 == 0x26) break;
    iVar3 = (*(code *)PTR_GetLastError_005836a4)();
    if ((DAT_00582bbc <= iVar5) || (((iVar3 != 5 && (iVar3 != 0x21)) && (iVar3 != 0x20)))) {
      *(int *)(uVar1 + 0x14) = iVar3;
      uVar4 = FUN_004c23f0(0x10a,iVar3);
      return uVar4;
    }
    iVar5 = iVar5 + 1;
    (*(code *)PTR_Sleep_005837e8)(iVar5 * DAT_00582bc0);
  }
  if (iVar5 != 0) {
    FUN_004683f0(10,"delayed %dms for lock/sharing conflict");
  }
  if (param_1 < uVar2) {
    memset((void *)(param_1 + param_2),0,uVar2 - param_1);
    return 0x20a;
  }
  return 0;
}


/* FUN_004653d0 @ 004653d0  kind=gamemisc  attributed-by=none  size=393 */

char * __cdecl FUN_004653d0(undefined4 param_1,char *param_2,uint *param_3,undefined4 *param_4)

{
  undefined1 uVar1;
  char *pcVar2;
  uint uVar3;
  undefined3 extraout_var;
  undefined4 *puVar4;
  int iVar5;
  byte *extraout_EDX;
  char *pcVar6;
  undefined4 *puVar7;
  
  pcVar2 = DAT_00582bb8;
  pcVar6 = (char *)0x0;
  switch(param_1) {
  case 5:
    puVar4 = (undefined4 *)&DAT_00583fd8;
    puVar7 = &DAT_005840e0;
    for (iVar5 = 0x40; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar7 = puVar7 + 1;
    }
    *(undefined2 *)puVar7 = *(undefined2 *)puVar4;
    *(undefined1 *)((int)puVar7 + 2) = *(undefined1 *)((int)puVar4 + 2);
    return (char *)0x0;
  case 6:
    puVar4 = &DAT_005840e0;
    puVar7 = (undefined4 *)&DAT_00583fd8;
    for (iVar5 = 0x40; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar7 = puVar7 + 1;
    }
    *(undefined2 *)puVar7 = *(undefined2 *)puVar4;
    *(undefined1 *)((int)puVar7 + 2) = *(undefined1 *)((int)puVar4 + 2);
    return (char *)0x0;
  case 7:
    DAT_00583fd8 = 0;
    return (char *)0x0;
  case 8:
    pcVar2 = (char *)FUN_0048e670((uint)param_2,param_3);
    return pcVar2;
  case 9:
    break;
  case 10:
    DAT_00583e74 = param_2;
    DAT_00583e78 = param_3;
    return (char *)0x0;
  case 0xb:
    pcVar6 = DAT_00582bb8;
    if (param_2 != (char *)0x0) {
      DAT_00582bb8 = param_2;
      return pcVar2;
    }
    break;
  case 0xc:
    return (char *)0x0;
  case 0xd:
    return param_2;
  case 0xe:
    if (*(int *)(param_2 + 0xc) != 0) {
      (*DAT_00582b18)(*(int *)(param_2 + 0xc));
    }
    FUN_00491c00(*(undefined4 **)(*(int *)(param_2 + 0x10) + 4),0,(uint)param_3,0);
    if (*(int *)(param_2 + 0xc) != 0) {
      (*DAT_00582b20)(*(int *)(param_2 + 0xc));
      return (char *)0x0;
    }
    break;
  case 0xf:
    *(undefined2 *)(param_2 + 0x34) = param_3._0_2_;
    return (char *)0x0;
  case 0x10:
    uVar3 = FUN_004aa9b0(param_2);
    uVar1 = FUN_0047f6a0(extraout_EDX,uVar3);
    return (char *)(-(uint)(CONCAT31(extraout_var,uVar1) != 0x1a) & 0x79);
  case 0x11:
    if (param_2 != (char *)0x0) {
      puVar4 = FUN_004a7d10((int)param_2);
      *param_3 = (uint)puVar4;
    }
    FUN_004a7be0(param_4);
    return (char *)0x0;
  case 0x12:
    DAT_00582bb4 = param_2;
    break;
  default:
    goto switchD_004653e8_default;
  }
switchD_004653e8_default:
  return pcVar6;
}


/* FUN_004655d0 @ 004655d0  kind=gamemisc  attributed-by=none  size=86 */

undefined4 __cdecl FUN_004655d0(uint param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_1 < 10) {
    uVar1 = (&DAT_00583e40)[param_1];
    uVar2 = (&DAT_00583e18)[param_1];
    *param_2 = uVar2;
    *param_3 = uVar1;
    if (param_4 != 0) {
      (&DAT_00583e40)[param_1] = uVar2;
    }
    return 0;
  }
  FUN_004683f0(0x15,"misuse at line %d of [%.10s]");
  return 0x15;
}


/* FUN_00465720 @ 00465720  kind=gamemisc  attributed-by=none  size=737 */

undefined4 __cdecl
FUN_00465720(int param_1,int param_2,int *param_3,undefined4 *param_4,int param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int local_8;
  
  iVar4 = param_1;
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b18)(*(int *)(param_1 + 0xc));
  }
  switch(param_2) {
  case 0:
    uVar7 = 0;
    *param_3 = *(int *)(iVar4 + 0xec);
    *param_4 = *(undefined4 *)(iVar4 + 0xf0);
    if (param_5 != 0) {
      *(undefined4 *)(iVar4 + 0xf0) = *(undefined4 *)(iVar4 + 0xec);
    }
    goto LAB_004657a3;
  case 1:
    iVar8 = 0;
    param_1 = 0;
    FUN_0048fca0(iVar4);
    iVar6 = 0;
    iVar5 = iVar8;
    if (0 < *(int *)(iVar4 + 0x14)) {
      do {
        iVar5 = *(int *)(iVar8 + 4 + *(int *)(iVar4 + 0x10));
        if (iVar5 != 0) {
          iVar5 = FUN_004a1c90(**(int **)(iVar5 + 4));
          param_1 = param_1 + iVar5;
        }
        iVar6 = iVar6 + 1;
        iVar8 = iVar8 + 0x10;
        iVar5 = param_1;
      } while (iVar6 < *(int *)(iVar4 + 0x14));
    }
    FUN_00490780(iVar4);
    *param_3 = iVar5;
    *param_4 = 0;
    break;
  case 2:
    param_1 = 0;
    FUN_0048fca0(iVar4);
    *(int **)(iVar4 + 0x1f0) = &param_1;
    param_2 = 0;
    if (0 < *(int *)(iVar4 + 0x14)) {
      local_8 = 0;
      do {
        iVar5 = *(int *)(local_8 + 0xc + *(int *)(iVar4 + 0x10));
        if (iVar5 != 0) {
          iVar8 = (*DAT_00582af8)(0x14);
          param_1 = param_1 + iVar8 * (*(int *)(iVar5 + 0x3c) + *(int *)(iVar5 + 0x2c) +
                                       *(int *)(iVar5 + 0x1c) + *(int *)(iVar5 + 0xc));
          iVar8 = (*DAT_00582af0._4_4_)(*(undefined4 *)(iVar5 + 0x14));
          param_1 = param_1 + iVar8;
          iVar8 = (*DAT_00582af0._4_4_)(*(undefined4 *)(iVar5 + 0x34));
          param_1 = param_1 + iVar8;
          iVar8 = (*DAT_00582af0._4_4_)(*(undefined4 *)(iVar5 + 0x24));
          param_1 = param_1 + iVar8;
          iVar8 = (*DAT_00582af0._4_4_)(*(undefined4 *)(iVar5 + 0x44));
          param_1 = param_1 + iVar8;
          for (puVar2 = *(undefined4 **)(iVar5 + 0x30); puVar2 != (undefined4 *)0x0;
              puVar2 = (undefined4 *)*puVar2) {
            puVar1 = (undefined4 *)puVar2[2];
            if (puVar1 != (undefined4 *)0x0) {
              FUN_00495480(iVar4,(undefined4 *)puVar1[7]);
              FUN_00494b00(iVar4,(undefined4 *)*puVar1);
              FUN_00494b00(iVar4,(undefined4 *)puVar1[1]);
              FUN_00498790(iVar4,(undefined4 *)puVar1[3]);
              FUN_0049d910(iVar4,(int *)puVar1[4]);
              FUN_00494b00(iVar4,puVar1);
            }
          }
          for (puVar2 = *(undefined4 **)(iVar5 + 0x10); puVar2 != (undefined4 *)0x0;
              puVar2 = (undefined4 *)*puVar2) {
            FUN_00495300(iVar4,(undefined4 *)puVar2[2]);
          }
        }
        param_2 = param_2 + 1;
        local_8 = local_8 + 0x10;
      } while (param_2 < *(int *)(iVar4 + 0x14));
    }
    *(undefined4 *)(iVar4 + 0x1f0) = 0;
    FUN_00490780(iVar4);
    *param_4 = 0;
    *param_3 = param_1;
    break;
  case 3:
    puVar2 = *(undefined4 **)(iVar4 + 4);
    param_1 = 0;
    *(int **)(iVar4 + 0x1f0) = &param_1;
    for (; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)puVar2[0xf]) {
      FUN_004aef00(iVar4,(int)puVar2);
      FUN_00494b00(iVar4,puVar2);
    }
    *(undefined4 *)(iVar4 + 0x1f0) = 0;
    *param_4 = 0;
    *param_3 = param_1;
    break;
  case 4:
  case 5:
  case 6:
    *param_3 = 0;
    *param_4 = *(undefined4 *)(iVar4 + 0xe4 + param_2 * 4);
    if (param_5 != 0) {
      *(undefined4 *)(iVar4 + 0xe4 + param_2 * 4) = 0;
    }
    break;
  case 7:
  case 8:
  case 9:
    iVar5 = 0;
    iVar8 = 0;
    if (0 < *(int *)(iVar4 + 0x14)) {
      iVar6 = 0;
      do {
        iVar3 = *(int *)(iVar6 + 4 + *(int *)(iVar4 + 0x10));
        if (iVar3 != 0) {
          iVar3 = **(int **)(iVar3 + 4);
          iVar8 = iVar8 + *(int *)(iVar3 + 0x84 + param_2 * 4);
          if (param_5 != 0) {
            *(undefined4 *)(iVar3 + 0x84 + param_2 * 4) = 0;
          }
        }
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 0x10;
      } while (iVar5 < *(int *)(iVar4 + 0x14));
    }
    *param_4 = 0;
    *param_3 = iVar8;
    break;
  default:
    uVar7 = 1;
    goto LAB_004657a3;
  }
  uVar7 = 0;
LAB_004657a3:
  if (*(int *)(iVar4 + 0xc) != 0) {
    (*DAT_00582b20)(*(int *)(iVar4 + 0xc));
  }
  return uVar7;
}


/* FUN_00465a30 @ 00465a30  kind=gamemisc  attributed-by=none  size=30 */

undefined4 __cdecl FUN_00465a30(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_1 + param_2 * 4;
  uVar2 = *(undefined4 *)(iVar1 + 0x70);
  if (param_3 != 0) {
    *(undefined4 *)(iVar1 + 0x70) = 0;
  }
  return uVar2;
}


/* FUN_00465a50 @ 00465a50  kind=gamemisc  attributed-by=none  size=332 */

undefined4 __cdecl FUN_00465a50(int param_1,int param_2,uint param_3,uint param_4,uint param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  undefined8 local_18;
  ulonglong local_10;
  undefined4 local_8;
  
  uVar4 = param_3;
  param_3 = param_4;
  iVar5 = 0;
  local_18 = 0;
  local_8 = 0;
  local_10 = CONCAT44(param_5,param_4) & 0x7fffffffffffffff;
  uVar3 = param_5;
  if (0 < (int)uVar4) {
    do {
      iVar1 = (*(code *)PTR_WriteFile_00583830)
                        (*(undefined4 *)(param_1 + 8),param_2,uVar4,&param_5,&local_18);
      if (iVar1 == 0) {
        iVar1 = (*(code *)PTR_GetLastError_005836a4)();
        if ((DAT_00582bbc <= iVar5) || (((iVar1 != 5 && (iVar1 != 0x21)) && (iVar1 != 0x20)))) {
LAB_00465b5a:
          if (0 < (int)uVar4) {
            *(int *)(param_1 + 0x14) = iVar1;
            if ((iVar1 != 0x27) && (iVar1 != 0x70)) {
              uVar2 = FUN_004c23f0(0x30a,iVar1);
              return uVar2;
            }
            return 0xd;
          }
          break;
        }
        iVar5 = iVar5 + 1;
        (*(code *)PTR_Sleep_005837e8)(iVar5 * DAT_00582bc0);
      }
      else {
        if ((param_5 == 0) || (uVar4 < param_5)) {
          iVar1 = (*(code *)PTR_GetLastError_005836a4)();
          goto LAB_00465b5a;
        }
        bVar6 = CARRY4(param_3,param_5);
        param_3 = param_3 + param_5;
        uVar3 = uVar3 + bVar6;
        param_2 = param_2 + param_5;
        local_10 = CONCAT44(uVar3,param_3) & 0x7fffffffffffffff;
        uVar4 = uVar4 - param_5;
      }
    } while (0 < (int)uVar4);
    if (iVar5 != 0) {
      FUN_004683f0(10,"delayed %dms for lock/sharing conflict");
    }
  }
  return 0;
}


/* FUN_00465c00 @ 00465c00  kind=gamemisc  attributed-by=none  size=64 */

undefined4 __cdecl FUN_00465c00(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b18)(*(int *)(param_1 + 0xc));
  }
  uVar1 = 0xff;
  if (param_2 != 0) {
    uVar1 = 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b20)(*(int *)(param_1 + 0xc));
  }
  return 0;
}


/* FUN_00465c90 @ 00465c90  kind=gamemisc  attributed-by=none  size=904 */

bool __cdecl FUN_00465c90(byte *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  char *pcVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte local_5;
  
  bVar1 = *param_1;
  local_5 = 0;
  bVar5 = 0;
  if (bVar1 == 0) {
LAB_00465d1d:
    return bVar5 == 1;
  }
LAB_00465ca7:
  iVar3 = (int)(char)bVar1;
  switch(iVar3) {
  case 9:
  case 10:
  case 0xc:
  case 0xd:
  case 0x20:
    goto switchD_00465cbd_caseD_9;
  default:
    if (((&DAT_00569720)[bVar1] & 0x46) != 0) {
      iVar2 = 1;
      bVar1 = (&DAT_00569720)[param_1[1]];
      while ((bVar1 & 0x46) != 0) {
        iVar4 = iVar2 + 1;
        iVar2 = iVar2 + 1;
        bVar1 = (&DAT_00569720)[param_1[iVar4]];
      }
      switch(iVar3) {
      case 0x43:
      case 99:
        if (iVar2 == 6) {
          pcVar6 = "create";
          iVar3 = 6;
          pbVar8 = param_1;
          do {
            iVar4 = iVar3;
            iVar3 = iVar4 + -1;
            if ((*pbVar8 == 0) || ((&DAT_00569620)[*pbVar8] != (&DAT_00569620)[(byte)*pcVar6]))
            goto LAB_00465e32;
            pbVar8 = pbVar8 + 1;
            pcVar6 = pcVar6 + 1;
          } while (0 < iVar3);
          iVar3 = iVar4 + -2;
LAB_00465e32:
          if ((iVar3 < 0) || ((&DAT_00569620)[*pbVar8] == (&DAT_00569620)[(byte)*pcVar6])) {
            iVar3 = 4;
            param_1 = param_1 + 5;
            goto LAB_00465d5c;
          }
        }
        break;
      case 0x45:
      case 0x65:
        if (iVar2 == 3) {
          pbVar7 = &DAT_00571364;
          iVar3 = 3;
          pbVar8 = param_1;
          do {
            iVar4 = iVar3;
            iVar3 = iVar4 + -1;
            if ((*pbVar8 == 0) || ((&DAT_00569620)[*pbVar8] != (&DAT_00569620)[*pbVar7]))
            goto LAB_00465f82;
            pbVar8 = pbVar8 + 1;
            pbVar7 = pbVar7 + 1;
          } while (0 < iVar3);
          iVar3 = iVar4 + -2;
LAB_00465f82:
          if ((iVar3 < 0) || ((&DAT_00569620)[*pbVar8] == (&DAT_00569620)[*pbVar7])) {
            iVar3 = 7;
            param_1 = param_1 + 2;
            goto LAB_00465d5c;
          }
        }
        else if (iVar2 == 7) {
          pcVar6 = "explain";
          iVar3 = 7;
          pbVar8 = param_1;
          do {
            iVar4 = iVar3;
            iVar3 = iVar4 + -1;
            if ((*pbVar8 == 0) || ((&DAT_00569620)[*pbVar8] != (&DAT_00569620)[(byte)*pcVar6]))
            goto LAB_00465fe2;
            pbVar8 = pbVar8 + 1;
            pcVar6 = pcVar6 + 1;
          } while (0 < iVar3);
          iVar3 = iVar4 + -2;
LAB_00465fe2:
          if ((iVar3 < 0) || ((&DAT_00569620)[*pbVar8] == (&DAT_00569620)[(byte)*pcVar6])) {
            iVar3 = 3;
            param_1 = param_1 + 6;
            goto LAB_00465d5c;
          }
        }
        break;
      case 0x54:
      case 0x74:
        if (iVar2 != 7) {
          if (iVar2 == 4) {
            pbVar7 = &DAT_00571350;
            iVar3 = 4;
            pbVar8 = param_1;
            do {
              iVar4 = iVar3;
              iVar3 = iVar4 + -1;
              if ((*pbVar8 == 0) || ((&DAT_00569620)[*pbVar8] != (&DAT_00569620)[*pbVar7]))
              goto LAB_00465ef2;
              pbVar8 = pbVar8 + 1;
              pbVar7 = pbVar7 + 1;
            } while (0 < iVar3);
            iVar3 = iVar4 + -2;
LAB_00465ef2:
            if ((-1 < iVar3) && ((&DAT_00569620)[*pbVar8] != (&DAT_00569620)[*pbVar7])) break;
            iVar3 = 5;
            param_1 = param_1 + 3;
          }
          else {
            if ((iVar2 != 9) || (iVar3 = FUN_00468380(param_1,(byte *)"temporary",9), iVar3 != 0))
            break;
            iVar3 = 5;
            param_1 = param_1 + 8;
          }
          goto LAB_00465d5c;
        }
        pcVar6 = "trigger";
        iVar3 = 7;
        pbVar8 = param_1;
        do {
          iVar4 = iVar3;
          iVar3 = iVar4 + -1;
          if ((*pbVar8 == 0) || ((&DAT_00569620)[*pbVar8] != (&DAT_00569620)[(byte)*pcVar6]))
          goto LAB_00465e92;
          pbVar8 = pbVar8 + 1;
          pcVar6 = pcVar6 + 1;
        } while (0 < iVar3);
        iVar3 = iVar4 + -2;
LAB_00465e92:
        if ((iVar3 < 0) || ((&DAT_00569620)[*pbVar8] == (&DAT_00569620)[(byte)*pcVar6])) {
          iVar3 = 6;
          param_1 = param_1 + 6;
          goto LAB_00465d5c;
        }
      }
      iVar3 = 2;
      param_1 = param_1 + iVar2 + -1;
      break;
    }
    goto LAB_00465d5a;
  case 0x22:
  case 0x27:
  case 0x60:
    bVar1 = param_1[1];
    pbVar8 = param_1;
    if (bVar1 == 0) {
      return false;
    }
    while (param_1 = pbVar8 + 1, (char)bVar1 != iVar3) {
      bVar1 = pbVar8[2];
      pbVar8 = param_1;
      if (bVar1 == 0) {
        return false;
      }
    }
    goto LAB_00465d55;
  case 0x2d:
    if (param_1[1] != 0x2d) goto LAB_00465d5a;
    while (bVar5 = local_5, bVar1 != 10) {
      bVar1 = param_1[1];
      param_1 = param_1 + 1;
      if (bVar1 == 0) goto LAB_00465d1d;
    }
    if (*param_1 == 0) goto LAB_00465d1d;
    iVar3 = 1;
    break;
  case 0x2f:
    if (param_1[1] != 0x2a) goto LAB_00465d5a;
    bVar1 = param_1[2];
    pbVar8 = param_1 + 2;
    while( true ) {
      if (bVar1 == 0) {
        return false;
      }
      if ((bVar1 == 0x2a) && (pbVar8[1] == 0x2f)) break;
      bVar1 = pbVar8[1];
      pbVar8 = pbVar8 + 1;
    }
    if (*pbVar8 == 0) {
      return false;
    }
    param_1 = pbVar8 + 1;
    goto switchD_00465cbd_caseD_9;
  case 0x3b:
    iVar3 = 0;
    break;
  case 0x5b:
    bVar1 = param_1[1];
    pbVar8 = param_1;
    if (bVar1 == 0) {
      return false;
    }
    while (param_1 = pbVar8 + 1, bVar1 != 0x5d) {
      bVar1 = pbVar8[2];
      pbVar8 = param_1;
      if (bVar1 == 0) {
        return false;
      }
    }
LAB_00465d55:
    if (*param_1 == 0) {
      return false;
    }
LAB_00465d5a:
    iVar3 = 2;
  }
LAB_00465d5c:
  param_1 = param_1 + 1;
  local_5 = (&UNK_0056a5d8)[(uint)local_5 * 8 + iVar3];
  bVar1 = *param_1;
  if (bVar1 == 0) {
    return local_5 == 1;
  }
  goto LAB_00465ca7;
switchD_00465cbd_caseD_9:
  iVar3 = 1;
  goto LAB_00465d5c;
}


/* FUN_004660e0 @ 004660e0  kind=gamemisc  attributed-by=none  size=204 */

uint __cdecl FUN_004660e0(void *param_1)

{
  byte bVar1;
  uint uVar2;
  int *piVar3;
  byte *pbVar4;
  
  uVar2 = FUN_004bc920();
  if (uVar2 == 0) {
    piVar3 = (int *)FUN_004a0350(0x28);
    if (piVar3 != (int *)0x0) {
      piVar3[0] = 0;
      piVar3[1] = 0;
      piVar3[2] = 0;
      piVar3[3] = 0;
      piVar3[4] = 0;
      piVar3[5] = 0;
      piVar3[6] = 0;
      piVar3[7] = 0;
      piVar3[8] = 0;
      piVar3[9] = 0;
      *(undefined2 *)(piVar3 + 7) = 1;
      *(undefined1 *)((int)piVar3 + 0x1e) = 5;
      *piVar3 = 0;
      FUN_004b79e0(piVar3,param_1,0xffffffff,'\x02',(undefined *)0x0);
    }
    pbVar4 = (byte *)FUN_004ae680(piVar3,1);
    if (pbVar4 == (byte *)0x0) {
      bVar1 = 7;
    }
    else {
      bVar1 = FUN_00465c90(pbVar4);
    }
    if (piVar3 != (int *)0x0) {
      if ((*(ushort *)(piVar3 + 7) & 0x2460) != 0) {
        FUN_004b7720(piVar3);
      }
      FUN_00494b00(*piVar3,(undefined4 *)piVar3[9]);
      piVar3[1] = 0;
      piVar3[9] = 0;
      piVar3[8] = 0;
      FUN_00494b00(*piVar3,piVar3);
    }
    uVar2 = (uint)bVar1;
  }
  return uVar2;
}


/* FUN_004661b0 @ 004661b0  kind=gamemisc  attributed-by=none  size=84 */

undefined4 __cdecl FUN_004661b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b18)(*(int *)(param_1 + 0xc));
  }
  *(undefined4 *)(param_1 + 0x1ac) = param_2;
  *(undefined4 *)(param_1 + 0x1b0) = param_3;
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b20)(*(int *)(param_1 + 0xc));
  }
  return 0;
}


/* FUN_004662c0 @ 004662c0  kind=gamemisc  attributed-by=none  size=203 */

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


/* FUN_00466390 @ 00466390  kind=gamemisc  attributed-by=none  size=169 */

undefined4 __cdecl FUN_00466390(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  if ((int)uVar1 < 1) {
    lVar6 = CONCAT44(param_3,param_2);
  }
  else {
    uVar4 = (int)uVar1 >> 0x1f;
    uVar5 = __alldiv((uVar1 + param_2) - 1,
                     (uVar4 + param_3 + (uint)CARRY4(uVar1,param_2)) - (uint)(uVar1 + param_2 == 0),
                     uVar1,uVar4);
    lVar6 = __allmul((uint)uVar5,(int)((ulonglong)uVar5 >> 0x20),uVar1,uVar4);
  }
  iVar2 = FUN_0048a010(param_1,(int)lVar6,(uint)((ulonglong)lVar6 >> 0x20));
  if (iVar2 != 0) {
    uVar3 = FUN_004c23f0(0x60a,*(undefined4 *)(param_1 + 0x14));
    return uVar3;
  }
  iVar2 = (*(code *)PTR_SetEndOfFile_005837d0)();
  if (iVar2 == 0) {
    uVar3 = (*(code *)PTR_GetLastError_005836a4)();
    *(undefined4 *)(param_1 + 0x14) = uVar3;
    uVar3 = FUN_004c23f0(0x60a,uVar3);
    return uVar3;
  }
  return 0;
}


/* FUN_00466440 @ 00466440  kind=gamemisc  attributed-by=none  size=420 */

uint __cdecl
FUN_00466440(int param_1,byte *param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5,
            int *param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  uint local_8;
  
  *param_3 = 0;
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 0;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  if (param_6 != (int *)0x0) {
    *param_6 = 0;
  }
  local_1c = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 1;
  local_18 = 0x14;
  local_8 = 0;
  iVar1 = FUN_004bc920();
  if (iVar1 == 0) {
    local_20 = (int *)FUN_004a0350(0x50);
  }
  else {
    local_20 = (int *)0x0;
  }
  if (local_20 == (int *)0x0) {
LAB_004665a8:
    *(undefined4 *)(param_1 + 0x2c) = 7;
    return 7;
  }
  *local_20 = 0;
  uVar2 = FUN_00463120(param_1,param_2,FUN_004bc7b0,&local_20,param_6);
  *local_20 = local_c;
  if ((char)uVar2 == '\x04') {
    FUN_004665f0((int)(local_20 + 1));
    if (local_1c != 0) {
      if (param_6 != (int *)0x0) {
        FUN_00466dd0(*param_6);
        iVar1 = FUN_004666d0(&DAT_0056de50);
        *param_6 = iVar1;
      }
      FUN_00466dd0(local_1c);
    }
    *(uint *)(param_1 + 0x2c) = local_8;
    return local_8;
  }
  FUN_00466dd0(local_1c);
  piVar4 = local_20;
  if (uVar2 != 0) {
    FUN_004665f0((int)(local_20 + 1));
    return uVar2;
  }
  if (local_c < local_18) {
    iVar1 = local_c * 4;
    iVar3 = FUN_004bc920();
    if ((iVar3 != 0) || (piVar4 = (int *)FUN_004a6140((int)piVar4,iVar1), piVar4 == (int *)0x0)) {
      FUN_004665f0((int)(local_20 + 1));
      goto LAB_004665a8;
    }
  }
  *param_3 = piVar4 + 1;
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = local_10;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_14;
  }
  return 0;
}


/* FUN_004665f0 @ 004665f0  kind=gamemisc  attributed-by=none  size=217 */

void __cdecl FUN_004665f0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + -4);
    iVar4 = 1;
    iVar3 = DAT_00583f40;
    if (1 < iVar1) {
      do {
        iVar2 = *(int *)(param_1 + -4 + iVar4 * 4);
        if (iVar2 != 0) {
          if (DAT_00582ac8 == 0) {
            (*DAT_00582aec)(iVar2);
            iVar3 = DAT_00583f40;
          }
          else {
            if (iVar3 != 0) {
              (*DAT_00582b18)(iVar3);
            }
            iVar3 = (*DAT_00582af0._4_4_)(iVar2);
            DAT_00583e18 = DAT_00583e18 - iVar3;
            if (DAT_00583e40 < DAT_00583e18) {
              DAT_00583e40 = DAT_00583e18;
            }
            DAT_00583e3c = DAT_00583e3c + -1;
            if (DAT_00583e64 < DAT_00583e3c) {
              DAT_00583e64 = DAT_00583e3c;
            }
            (*DAT_00582aec)(iVar2);
            iVar3 = DAT_00583f40;
            if (DAT_00583f40 != 0) {
              (*DAT_00582b20)(DAT_00583f40);
              iVar3 = DAT_00583f40;
            }
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar1);
    }
    FUN_00466dd0(param_1 + -4);
  }
  return;
}


/* FUN_004667da @ 004667da  kind=gamemisc  attributed-by=none  size=676 */

void __fastcall FUN_004667da(int param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  int iVar12;
  int unaff_EBP;
  int unaff_ESI;
  uint uVar13;
  undefined4 uVar14;
  bool bVar15;
  double dVar16;
  double dVar17;
  
  do {
    puVar3 = *(undefined8 **)(unaff_ESI * 4 + param_1);
    if (*(char *)((int)puVar3 + 0x1e) == '\x05') {
      return;
    }
    puVar4 = *(undefined8 **)(param_2 + param_1);
    uVar1 = *(ushort *)((int)puVar3 + 0x1c);
    uVar2 = *(ushort *)((int)puVar4 + 0x1c);
    uVar5 = uVar1 | uVar2;
    if ((uVar5 & 1) == 0) {
      if ((uVar5 & 0xc) == 0) {
        if ((uVar5 & 2) == 0) {
LAB_004669c5:
          uVar11 = *(uint *)(puVar4 + 3);
          pbVar9 = *(byte **)((int)puVar4 + 4);
          pbVar10 = *(byte **)((int)puVar3 + 4);
          uVar13 = uVar11;
          if (*(int *)(puVar3 + 3) < (int)uVar11) {
            uVar13 = *(uint *)(puVar3 + 3);
          }
          *(uint *)(unaff_EBP + -0x14) = uVar11;
          while (uVar11 = uVar13 - 4, 3 < uVar13) {
            if (*(int *)pbVar9 != *(int *)pbVar10) goto LAB_004669f6;
            pbVar9 = pbVar9 + 4;
            pbVar10 = pbVar10 + 4;
            uVar13 = uVar11;
          }
          if (uVar11 == 0xfffffffc) {
LAB_00466a2a:
            uVar11 = 0;
          }
          else {
LAB_004669f6:
            bVar15 = *pbVar9 < *pbVar10;
            if ((*pbVar9 == *pbVar10) &&
               ((uVar11 == 0xfffffffd ||
                ((bVar15 = pbVar9[1] < pbVar10[1], pbVar9[1] == pbVar10[1] &&
                 ((uVar11 == 0xfffffffe ||
                  ((bVar15 = pbVar9[2] < pbVar10[2], pbVar9[2] == pbVar10[2] &&
                   ((uVar11 == 0xffffffff ||
                    (bVar15 = pbVar9[3] < pbVar10[3], pbVar9[3] == pbVar10[3]))))))))))))
            goto LAB_00466a2a;
            uVar11 = -(uint)bVar15 | 1;
          }
          if (uVar11 == 0) {
            uVar11 = *(int *)(unaff_EBP + -0x14) - *(int *)(puVar3 + 3);
          }
LAB_00466a36:
          unaff_ESI = *(int *)(unaff_EBP + -4);
        }
        else if ((uVar2 & 2) == 0) {
          uVar11 = 1;
        }
        else {
          if ((uVar1 & 2) != 0) {
            iVar12 = *(int *)(unaff_EBP + -0x10);
            if (iVar12 == 0) goto LAB_004669c5;
            if (*(char *)((int)puVar4 + 0x1f) == *(char *)(iVar12 + 4)) {
              uVar11 = (**(code **)(iVar12 + 0xc))
                                 (*(undefined4 *)(iVar12 + 8),*(undefined4 *)(puVar4 + 3),
                                  *(undefined4 *)((int)puVar4 + 4),*(undefined4 *)(puVar3 + 3),
                                  *(undefined4 *)((int)puVar3 + 4));
              goto LAB_00466a39;
            }
            *(undefined8 *)(unaff_EBP + -0x44) = 0;
            *(undefined8 *)(unaff_EBP + -0x3c) = 0;
            *(undefined8 *)(unaff_EBP + -0x34) = 0;
            *(undefined8 *)(unaff_EBP + -0x2c) = 0;
            *(undefined8 *)(unaff_EBP + -0x24) = 0;
            *(undefined8 *)(unaff_EBP + -0x6c) = 0;
            *(undefined8 *)(unaff_EBP + -100) = 0;
            *(undefined8 *)(unaff_EBP + -0x5c) = 0;
            *(undefined8 *)(unaff_EBP + -0x54) = 0;
            *(undefined8 *)(unaff_EBP + -0x4c) = 0;
            FUN_004b7c40((int *)(unaff_EBP + -0x44),puVar4,0x1000);
            FUN_004b7c40((int *)(unaff_EBP + -0x6c),puVar3,0x1000);
            iVar6 = FUN_004ae680((int *)(unaff_EBP + -0x44),*(byte *)(iVar12 + 4));
            uVar14 = *(undefined4 *)(unaff_EBP + -0x2c);
            if (iVar6 == 0) {
              uVar14 = 0;
            }
            iVar7 = FUN_004ae680((int *)(unaff_EBP + -0x6c),*(byte *)(iVar12 + 4));
            uVar8 = *(undefined4 *)(unaff_EBP + -0x54);
            if (iVar7 == 0) {
              uVar8 = 0;
            }
            uVar11 = (**(code **)(iVar12 + 0xc))
                               (*(undefined4 *)(iVar12 + 8),uVar14,iVar6,uVar8,iVar7);
            FUN_004b76e0((int *)(unaff_EBP + -0x44));
            FUN_004b76e0((int *)(unaff_EBP + -0x6c));
            goto LAB_00466a36;
          }
          uVar11 = 0xffffffff;
        }
      }
      else if ((uVar2 & 0xc) == 0) {
        uVar11 = 1;
      }
      else if ((uVar1 & 0xc) == 0) {
        uVar11 = 0xffffffff;
      }
      else if ((uVar1 & uVar2 & 4) == 0) {
        if ((uVar2 & 8) == 0) {
          *(double *)(unaff_EBP + -0x18) = (double)(longlong)puVar4[2];
          dVar17 = *(double *)(unaff_EBP + -0x18);
        }
        else {
          dVar17 = (double)puVar4[1];
        }
        if ((uVar1 & 8) == 0) {
          *(double *)(unaff_EBP + -0x18) = (double)(longlong)puVar3[2];
          dVar16 = *(double *)(unaff_EBP + -0x18);
        }
        else {
          dVar16 = (double)puVar3[1];
        }
        if (dVar16 <= dVar17) {
          uVar11 = (uint)(dVar16 < dVar17);
        }
        else {
          uVar11 = 0xffffffff;
        }
      }
      else {
        iVar12 = *(int *)((int)puVar4 + 0x14);
        iVar6 = *(int *)((int)puVar3 + 0x14);
        if (iVar6 < iVar12) {
LAB_004668b2:
          uVar11 = 1;
        }
        else if ((iVar12 < iVar6) || (*(uint *)(puVar4 + 2) < *(uint *)(puVar3 + 2))) {
          uVar11 = 0xffffffff;
        }
        else {
          if ((iVar6 <= iVar12) &&
             ((iVar6 < iVar12 || (*(uint *)(puVar3 + 2) < *(uint *)(puVar4 + 2)))))
          goto LAB_004668b2;
          uVar11 = 0;
        }
      }
    }
    else {
      uVar11 = (uVar1 & 1) - (uVar2 & 1);
    }
LAB_00466a39:
    if ((int)(uVar11 ^ *(uint *)(unaff_EBP + -0x1c)) < 0) {
      param_2 = *(int *)(unaff_EBP + -8);
      iVar12 = *(int *)(unaff_EBP + -0xc);
    }
    else {
      param_2 = unaff_ESI * 4;
      *(int *)(unaff_EBP + -0xc) = unaff_ESI;
      *(int *)(unaff_EBP + -8) = param_2;
      iVar12 = unaff_ESI;
    }
    param_1 = *(int *)(unaff_EBP + 0x10);
    unaff_ESI = unaff_ESI + 1;
    *(int *)(unaff_EBP + -4) = unaff_ESI;
    if (*(int *)(unaff_EBP + 0xc) <= unaff_ESI) {
      FUN_004b6f10((int *)(*(int *)(unaff_EBP + 8) + 8),*(undefined8 **)(param_1 + iVar12 * 4));
      return;
    }
  } while( true );
}


/* FUN_00466ae0 @ 00466ae0  kind=gamemisc  attributed-by=none  size=64 */

undefined4 __cdecl FUN_00466ae0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_FlushFileBuffers_00583608)(*(undefined4 *)(param_1 + 8));
  if (iVar1 != 0) {
    return 0;
  }
  uVar2 = (*(code *)PTR_GetLastError_005836a4)();
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  uVar2 = FUN_004c23f0(0x40a,uVar2);
  return uVar2;
}


/* FUN_00466b60 @ 00466b60  kind=gamemisc  attributed-by=none  size=620 */

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


/* FUN_00466f30 @ 00466f30  kind=gamemisc  attributed-by=none  size=101 */

undefined4 __cdecl FUN_00466f30(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_8;
  
  iVar1 = (*(code *)PTR_GetFileSize_00583680)(*(undefined4 *)(param_1 + 8),&local_8);
  *param_2 = iVar1;
  param_2[1] = local_8;
  if (iVar1 == -1) {
    iVar1 = (*(code *)PTR_GetLastError_005836a4)();
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x14) = iVar1;
      uVar2 = FUN_004c23f0(0x70a,iVar1);
      return uVar2;
    }
  }
  return 0;
}


/* FUN_00467000 @ 00467000  kind=gamemisc  attributed-by=none  size=82 */

undefined4 __cdecl FUN_00467000(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b18)(*(int *)(param_1 + 0xc));
  }
  *(undefined4 *)(param_1 + 0x10c) = param_2;
  *(undefined4 *)(param_1 + 0x110) = param_3;
  for (iVar1 = *(int *)(param_1 + 4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x3c)) {
    *(uint *)(iVar1 + 0x60) = *(uint *)(iVar1 + 0x60) | 0x20;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b20)(*(int *)(param_1 + 0xc));
  }
  return 0;
}


/* FUN_00467060 @ 00467060  kind=gamemisc  attributed-by=none  size=251 */

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


/* FUN_00467170 @ 00467170  kind=gamemisc  attributed-by=none  size=72 */

undefined4 __cdecl FUN_00467170(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b18)(*(int *)(param_1 + 0xc));
  }
  uVar1 = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)(param_1 + 0x98) = param_2;
  *(undefined4 *)(param_1 + 0x9c) = param_3;
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b20)(*(int *)(param_1 + 0xc));
  }
  return uVar1;
}


/* FUN_004671c0 @ 004671c0  kind=gamemisc  attributed-by=none  size=264 */

int * __cdecl FUN_004671c0(int param_1,byte *param_2,int param_3,byte *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int *_Dst;
  
  if (*(int *)(param_3 + 0xc) != 0) {
    (*DAT_00582b18)(*(int *)(param_3 + 0xc));
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b18)(*(int *)(param_1 + 0xc));
  }
  if (param_3 == param_1) {
    FUN_004961f0(param_1,1,(byte *)"source and destination must be distinct");
LAB_0046729d:
    _Dst = (int *)0x0;
  }
  else {
    _Dst = (int *)FUN_004a0350(0x30);
    if (_Dst != (int *)0x0) {
      memset(_Dst,0,0x30);
      if (_Dst != (int *)0x0) {
        iVar1 = FUN_00479910(param_1,param_3,param_4);
        _Dst[6] = iVar1;
        puVar2 = (undefined4 *)FUN_00479910(param_1,param_1,param_2);
        _Dst[1] = (int)puVar2;
        *_Dst = param_1;
        _Dst[5] = param_3;
        _Dst[4] = 1;
        _Dst[10] = 0;
        if ((_Dst[6] != 0) && (puVar2 != (undefined4 *)0x0)) {
          iVar1 = FUN_00491c00(puVar2,*(uint *)(*(int *)(_Dst[6] + 4) + 0x20),0xffffffff,0);
          if (iVar1 != 7) {
            *(int *)(_Dst[6] + 0x10) = *(int *)(_Dst[6] + 0x10) + 1;
            goto LAB_0046729f;
          }
        }
        FUN_00466dd0((int)_Dst);
        goto LAB_0046729d;
      }
    }
    FUN_004961f0(param_1,7,(byte *)0x0);
  }
LAB_0046729f:
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b20)(*(int *)(param_1 + 0xc));
  }
  if (*(int *)(param_3 + 0xc) != 0) {
    (*DAT_00582b20)(*(int *)(param_3 + 0xc));
  }
  return _Dst;
}


/* FUN_004672d0 @ 004672d0  kind=gamemisc  attributed-by=none  size=238 */

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


/* FUN_00467d70 @ 00467d70  kind=gamemisc  attributed-by=none  size=72 */

undefined4 __cdecl FUN_00467d70(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b18)(*(int *)(param_1 + 0xc));
  }
  uVar1 = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(param_1 + 0xa0) = param_2;
  *(undefined4 *)(param_1 + 0xa4) = param_3;
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b20)(*(int *)(param_1 + 0xc));
  }
  return uVar1;
}


/* FUN_00467ed0 @ 00467ed0  kind=gamemisc  attributed-by=none  size=107 */

void __cdecl FUN_00467ed0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b18)(*(int *)(param_1 + 0xc));
  }
  if (param_2 < 1) {
    *(undefined4 *)(param_1 + 0x114) = 0;
    *(undefined4 *)(param_1 + 0x11c) = 0;
    *(undefined4 *)(param_1 + 0x118) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x114) = param_3;
    *(int *)(param_1 + 0x11c) = param_2;
    *(undefined4 *)(param_1 + 0x118) = param_4;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b20)(*(int *)(param_1 + 0xc));
  }
  return;
}


/* FUN_00467f70 @ 00467f70  kind=gamemisc  attributed-by=none  size=242 */

uint __cdecl FUN_00467f70(void *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  
  *param_2 = 0;
  uVar2 = FUN_004bc920();
  if (uVar2 == 0) {
    piVar3 = (int *)FUN_004a0350(0x28);
    if (piVar3 != (int *)0x0) {
      piVar3[0] = 0;
      piVar3[1] = 0;
      piVar3[2] = 0;
      piVar3[3] = 0;
      piVar3[4] = 0;
      piVar3[5] = 0;
      piVar3[6] = 0;
      piVar3[7] = 0;
      piVar3[8] = 0;
      piVar3[9] = 0;
      *(undefined2 *)(piVar3 + 7) = 1;
      *(undefined1 *)((int)piVar3 + 0x1e) = 5;
      *piVar3 = 0;
      FUN_004b79e0(piVar3,param_1,0xffffffff,'\x02',(undefined *)0x0);
    }
    piVar4 = (int *)FUN_004ae680(piVar3,1);
    if (piVar4 == (int *)0x0) {
      uVar2 = 7;
    }
    else {
      uVar2 = FUN_004834d0(piVar4,param_2,6,(byte *)0x0);
      if ((uVar2 == 0) &&
         (iVar1 = *(int *)(*(int *)(*param_2 + 0x10) + 0xc), (*(byte *)(iVar1 + 0x4e) & 1) == 0)) {
        *(undefined1 *)(iVar1 + 0x4d) = 2;
      }
    }
    if (piVar3 != (int *)0x0) {
      if ((*(ushort *)(piVar3 + 7) & 0x2460) != 0) {
        FUN_004b7720(piVar3);
      }
      FUN_00494b00(*piVar3,(undefined4 *)piVar3[9]);
      piVar3[1] = 0;
      piVar3[9] = 0;
      piVar3[8] = 0;
      FUN_00494b00(*piVar3,piVar3);
    }
    uVar2 = uVar2 & 0xff;
  }
  return uVar2;
}


/* FUN_004681c0 @ 004681c0  kind=gamemisc  attributed-by=none  size=441 */

undefined4 __cdecl FUN_004681c0(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int local_c;
  byte local_8;
  
  local_8 = *(byte *)(param_1 + 0xc);
  iVar2 = 1;
  local_c = 0;
  if (param_2 <= (int)(uint)local_8) {
    return 0;
  }
  if (local_8 == 0) {
LAB_00468201:
    iVar3 = 3;
    do {
      iVar3 = iVar3 + -1;
      iVar2 = FUN_004c2320((undefined4 *)(param_1 + 8),3,DAT_00582bb8,0,1,0);
      if ((iVar2 != 0) || (iVar3 == 0)) break;
      (*(code *)PTR_Sleep_005837e8)(1);
    } while (0 < iVar3);
    local_c = iVar2;
    if (iVar2 == 0) {
      uVar1 = (*(code *)PTR_GetLastError_005836a4)();
    }
    else {
LAB_00468258:
      uVar1 = 0;
    }
    if (param_2 == 1) {
      if (iVar2 != 0) {
        iVar2 = FUN_0047d5d0(param_1);
        if (iVar2 == 0) {
          uVar1 = (*(code *)PTR_GetLastError_005836a4)();
        }
        else {
          local_8 = 1;
        }
      }
    }
    else if (param_2 == 2) {
      if (iVar2 != 0) {
        iVar2 = FUN_004c2320((undefined4 *)(param_1 + 8),3,DAT_00582bb8 + 1,0,1,0);
        if (iVar2 == 0) {
          uVar1 = (*(code *)PTR_GetLastError_005836a4)();
        }
        else {
          local_8 = 2;
        }
      }
    }
    else if ((param_2 == 4) && (iVar2 != 0)) goto LAB_00468317;
    if ((local_c != 0) && (param_2 == 1)) {
      FUN_004c28e0((undefined4 *)(param_1 + 8),DAT_00582bb8,0,1,0);
    }
  }
  else {
    if (param_2 != 4) goto LAB_00468258;
    if (local_8 == 2) goto LAB_00468201;
    uVar1 = 0;
LAB_00468317:
    local_8 = 3;
    FUN_004bdc90(param_1);
    iVar2 = FUN_004c2320((undefined4 *)(param_1 + 8),3,DAT_00582bb8 + 2,0,0x1fe,0);
    if (iVar2 == 0) {
      uVar1 = (*(code *)PTR_GetLastError_005836a4)();
      FUN_0047d5d0(param_1);
      goto LAB_00468367;
    }
    local_8 = 4;
  }
  if (iVar2 != 0) {
    *(byte *)(param_1 + 0xc) = local_8;
    return 0;
  }
LAB_00468367:
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(byte *)(param_1 + 0xc) = local_8;
  return 5;
}


/* FUN_00468410 @ 00468410  kind=gamemisc  attributed-by=none  size=72 */

undefined4 __cdecl FUN_00468410(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b18)(*(int *)(param_1 + 0xc));
  }
  uVar1 = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(param_1 + 0xc0) = param_2;
  *(undefined4 *)(param_1 + 0xc4) = param_3;
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b20)(*(int *)(param_1 + 0xc));
  }
  return uVar1;
}


/* FUN_00468460 @ 00468460  kind=gamemisc  attributed-by=none  size=405 */

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


/* FUN_004686e0 @ 004686e0  kind=gamemisc  attributed-by=none  size=104 */

undefined4 __cdecl FUN_004686e0(int param_1)

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
      return *(undefined4 *)(param_1 + 0x2c);
    }
  }
  return 7;
}


/* FUN_00468750 @ 00468750  kind=gamemisc  attributed-by=none  size=145 */

uint __cdecl FUN_00468750(int param_1,byte *param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 10;
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b18)(*(int *)(param_1 + 0xc));
  }
  if ((param_2 != (byte *)0x0) && (*param_2 != 0)) {
    iVar1 = FUN_00499540(param_1,param_2);
    if (iVar1 < 0) {
      uVar2 = 1;
      FUN_004961f0(param_1,1,(byte *)"unknown database: %s");
      goto LAB_004687bd;
    }
  }
  uVar2 = FUN_00492280(param_1,iVar1,0,(undefined4 *)0x0,(undefined4 *)0x0);
  FUN_004961f0(param_1,uVar2,(byte *)0x0);
LAB_004687bd:
  uVar2 = FUN_0048ca70(param_1,uVar2);
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b20)(*(int *)(param_1 + 0xc));
  }
  return uVar2;
}


/* FUN_004688d0 @ 004688d0  kind=gamemisc  attributed-by=none  size=205 */

wchar_t * __cdecl FUN_004688d0(int param_1)

{
  int iVar1;
  wchar_t *pwVar2;
  char *pcVar3;
  int *extraout_ECX;
  size_t sVar4;
  char cVar5;
  
  if (param_1 == 0) {
    return L"out of memory";
  }
  iVar1 = *(int *)(param_1 + 0x44);
  if (((iVar1 != 0x4b771290) && (iVar1 != -0x5fd65969)) && (iVar1 != -0xfc486fa)) {
    FUN_004683f0(0x15,"API call with %s database connection pointer");
    return L"library routine called out of sequence";
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b18)(*(int *)(param_1 + 0xc));
  }
  if (*(char *)(param_1 + 0x38) == '\0') {
    pwVar2 = (wchar_t *)FUN_004ae680(*(int **)(param_1 + 0xd4),2);
    if (pwVar2 == (wchar_t *)0x0) {
      if (*(int *)(param_1 + 0xd4) != 0) {
        cVar5 = '\x01';
        sVar4 = 0xffffffff;
        pcVar3 = FUN_004961c0(*(uint *)(param_1 + 0x2c));
        FUN_004b79e0(extraout_ECX,pcVar3,sVar4,cVar5,(undefined *)pwVar2);
      }
      pwVar2 = (wchar_t *)FUN_004ae680(*(int **)(param_1 + 0xd4),2);
    }
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  else {
    pwVar2 = L"out of memory";
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b20)(*(int *)(param_1 + 0xc));
  }
  return pwVar2;
}


/* FUN_004689a0 @ 004689a0  kind=gamemisc  attributed-by=none  size=51 */

undefined4 __cdecl FUN_004689a0(int param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_2 < 0xb) {
    iVar1 = param_1 + param_2 * 4;
    uVar2 = *(undefined4 *)(iVar1 + 0x50);
    if (-1 < param_3) {
      iVar3 = *(int *)((int)&DAT_0056a648 + param_2 * 4);
      if (iVar3 < param_3) {
        param_3 = iVar3;
      }
      *(int *)(iVar1 + 0x50) = param_3;
    }
    return uVar2;
  }
  return 0xffffffff;
}


/* FUN_004689e0 @ 004689e0  kind=gamemisc  attributed-by=none  size=130 */

undefined4 __cdecl FUN_004689e0(int param_1,int param_2,undefined1 param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b18)(*(int *)(param_1 + 0xc));
  }
  if ((param_2 == 1) && (*(int **)(param_1 + 0x134) != (int *)0x0)) {
    *(undefined1 *)(**(int **)(param_1 + 0x134) + 0x10) = param_3;
  }
  else {
    FUN_004683f0(0x15,"misuse at line %d of [%.10s]");
    uVar1 = 0x15;
    FUN_004961f0(param_1,0x15,(byte *)0x0);
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b20)(*(int *)(param_1 + 0xc));
  }
  return uVar1;
}


/* FUN_00468a90 @ 00468a90  kind=gamemisc  attributed-by=none  size=811 */

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


/* FUN_00468dc0 @ 00468dc0  kind=gamemisc  attributed-by=none  size=101 */

undefined4 __cdecl FUN_00468dc0(int param_1,uint *param_2)

{
  int iVar1;
  
  if (1 < *(byte *)(param_1 + 0xc)) {
    *param_2 = 1;
    return 0;
  }
  iVar1 = FUN_004c2320((undefined4 *)(param_1 + 8),3,DAT_00582bb8 + 1,0,1,0);
  if (iVar1 != 0) {
    FUN_004c28e0((undefined4 *)(param_1 + 8),DAT_00582bb8 + 1,0,1,0);
  }
  *param_2 = (uint)(iVar1 == 0);
  return 0;
}


/* FUN_00468e70 @ 00468e70  kind=gamemisc  attributed-by=none  size=204 */

undefined4 __cdecl FUN_00468e70(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_8;
  
  bVar1 = *(byte *)(param_1 + 0xc);
  local_8 = 0;
  if (3 < bVar1) {
    FUN_004c28e0((undefined4 *)(param_1 + 8),DAT_00582bb8 + 2,0,0x1fe,0);
    if (param_2 == 1) {
      iVar2 = FUN_0047d5d0(param_1);
      if (iVar2 == 0) {
        uVar3 = (*(code *)PTR_GetLastError_005836a4)
                          ("winUnlock",*(undefined4 *)(param_1 + 0x1c),0x7ffd);
        local_8 = FUN_004c23f0(0x80a,uVar3);
      }
    }
  }
  if (1 < bVar1) {
    FUN_004c28e0((undefined4 *)(param_1 + 8),DAT_00582bb8 + 1,0,1,0);
  }
  if ((param_2 == 0) && (bVar1 != 0)) {
    FUN_004bdc90(param_1);
  }
  if (2 < bVar1) {
    FUN_004c28e0((undefined4 *)(param_1 + 8),DAT_00582bb8,0,1,0);
  }
  *(char *)(param_1 + 0xc) = (char)param_2;
  return local_8;
}


/* FUN_00468fa0 @ 00468fa0  kind=gamemisc  attributed-by=none  size=356 */

int __cdecl FUN_00468fa0(int param_1,undefined4 param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  uint local_c;
  int local_8;
  
  switch(param_2) {
  case 1:
    *param_3 = (uint)*(byte *)(param_1 + 0xc);
    break;
  default:
    return 0xc;
  case 4:
    *param_3 = *(uint *)(param_1 + 0x14);
    return 0;
  case 5:
    if (0 < *(int *)(param_1 + 0x20)) {
      iVar1 = FUN_00466f30(param_1,(int *)&local_c);
      if (iVar1 != 0) {
        return iVar1;
      }
      uVar2 = param_3[1];
      if ((int)uVar2 < local_8) {
        return 0;
      }
      if (((int)uVar2 <= local_8) && (*param_3 <= local_c)) {
        return 0;
      }
      iVar1 = FUN_00466390(param_1,*param_3,uVar2);
      return iVar1;
    }
    break;
  case 6:
    *(uint *)(param_1 + 0x20) = *param_3;
    return 0;
  case 9:
    uVar2 = *param_3;
    if ((int)*param_3 < 1) {
      *param_3 = DAT_00582bbc;
      uVar2 = DAT_00582bbc;
    }
    DAT_00582bbc = uVar2;
    if ((int)param_3[1] < 1) {
      param_3[1] = DAT_00582bc0;
      return 0;
    }
    DAT_00582bc0 = param_3[1];
    return 0;
  case 10:
    FUN_004c24b0(param_1,4,param_3);
    return 0;
  case 0xc:
    uVar2 = FUN_004666d0((byte *)"win32");
    *param_3 = uVar2;
    return 0;
  case 0xd:
    FUN_004c24b0(param_1,0x10,param_3);
    return 0;
  case 0x10:
    iVar1 = *(int *)(*(int *)(param_1 + 4) + 8);
    iVar3 = FUN_004bc920();
    if ((iVar3 == 0) && (pcVar4 = (char *)FUN_004a0350(iVar1), pcVar4 != (char *)0x0)) {
      FUN_0047db10(*(int *)(*(int *)(param_1 + 4) + 8),pcVar4);
      *param_3 = (uint)pcVar4;
    }
    return 0;
  }
  return 0;
}


/* FUN_00469220 @ 00469220  kind=gamemisc  attributed-by=none  size=81 */

int __cdecl FUN_00469220(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_004bfc30(param_1,param_2);
  if (iVar1 == 0) {
    FUN_004b7860((int *)(param_1[0x11] + param_2 * 0x28 + -0x28),param_3,param_3 >> 0x1f);
    if (*(int *)(*param_1 + 0xc) != 0) {
      (*DAT_00582b20)(*(int *)(*param_1 + 0xc));
    }
  }
  return iVar1;
}


/* FUN_00469290 @ 00469290  kind=gamemisc  attributed-by=none  size=81 */

int __cdecl FUN_00469290(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = FUN_004bfc30(param_1,param_2);
  if (iVar1 == 0) {
    FUN_004b7860((int *)(param_1[0x11] + param_2 * 0x28 + -0x28),param_3,param_4);
    if (*(int *)(*param_1 + 0xc) != 0) {
      (*DAT_00582b20)(*(int *)(*param_1 + 0xc));
    }
  }
  return iVar1;
}


/* FUN_004692f0 @ 004692f0  kind=gamemisc  attributed-by=none  size=437 */

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


/* FUN_004695b0 @ 004695b0  kind=gamemisc  attributed-by=none  size=324 */

uint __cdecl FUN_004695b0(int *param_1,int param_2,int param_3)

{
  size_t sVar1;
  void *pvVar2;
  uint uVar3;
  
  switch(*(undefined1 *)(param_3 + 0x1e)) {
  case 1:
    uVar3 = FUN_00469290(param_1,param_2,*(int *)(param_3 + 0x10),*(int *)(param_3 + 0x14));
    return uVar3;
  case 2:
    uVar3 = FUN_004691c0(param_1,param_2,*(undefined8 *)(param_3 + 8));
    return uVar3;
  case 3:
    uVar3 = FUN_004709e0(param_1,param_2,*(void **)(param_3 + 4),*(size_t *)(param_3 + 0x18),
                         (undefined *)0xffffffff,*(char *)(param_3 + 0x1f));
    return uVar3;
  case 4:
    break;
  default:
    uVar3 = FUN_004bfc30(param_1,param_2);
    if ((uVar3 == 0) && (*(int *)(*param_1 + 0xc) != 0)) {
      (*DAT_00582b20)();
    }
    return uVar3;
  }
  if ((*(ushort *)(param_3 + 0x1c) & 0x4000) == 0) {
    sVar1 = *(size_t *)(param_3 + 0x18);
    pvVar2 = *(void **)(param_3 + 4);
    uVar3 = FUN_004bfc30(param_1,param_2);
    if (uVar3 == 0) {
      if (pvVar2 != (void *)0x0) {
        uVar3 = FUN_004b79e0((int *)(param_1[0x11] + param_2 * 0x28 + -0x28),pvVar2,sVar1,'\0',
                             (undefined *)0xffffffff);
        FUN_004961f0(*param_1,uVar3,(byte *)0x0);
        uVar3 = FUN_0048ca70(*param_1,uVar3);
      }
      if (*(int *)(*param_1 + 0xc) != 0) {
        (*DAT_00582b20)(*(int *)(*param_1 + 0xc));
      }
    }
    return uVar3;
  }
  uVar3 = FUN_00469710(param_1,param_2,*(int *)(param_3 + 0x10));
  return uVar3;
}


/* FUN_00469710 @ 00469710  kind=gamemisc  attributed-by=none  size=78 */

int __cdecl FUN_00469710(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_004bfc30(param_1,param_2);
  if (iVar1 == 0) {
    FUN_004b7be0((int *)(param_1[0x11] + param_2 * 0x28 + -0x28),param_3);
    if (*(int *)(*param_1 + 0xc) != 0) {
      (*DAT_00582b20)(*(int *)(*param_1 + 0xc));
    }
  }
  return iVar1;
}


/* FUN_004697a0 @ 004697a0  kind=gamemisc  attributed-by=none  size=39 */

undefined4 __cdecl FUN_004697a0(int param_1,int param_2)

{
  if (((param_1 != 0) && (0 < param_2)) && (param_2 <= *(short *)(param_1 + 0x4e))) {
    return *(undefined4 *)(*(int *)(param_1 + 0x48) + -4 + param_2 * 4);
  }
  return 0;
}


/* FUN_004697f0 @ 004697f0  kind=gamemisc  attributed-by=none  size=60 */

void __cdecl FUN_004697f0(int param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  
  if (param_2 != (int *)0x0) {
    cVar1 = (char)*param_2;
    piVar2 = param_2;
    while (cVar1 != '\0') {
      piVar2 = (int *)((int)piVar2 + 1);
      cVar1 = *(char *)piVar2;
    }
    FUN_004b8290(param_1,param_2,(int)piVar2 - (int)param_2 & 0x3fffffff);
    return;
  }
  FUN_004b8290(param_1,(int *)0x0,0);
  return;
}


/* FUN_00469830 @ 00469830  kind=gamemisc  attributed-by=none  size=271 */

undefined4 __cdecl FUN_00469830(int *param_1)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  piVar3 = param_1;
  iVar2 = *(int *)(*param_1 + 0xc);
  if (iVar2 != 0) {
    (*DAT_00582b18)(iVar2);
  }
  param_1 = (int *)0x0;
  if (0 < (short)piVar3[0x13]) {
    iVar4 = 0;
    do {
      piVar5 = (int *)(piVar3[0x11] + iVar4);
      uVar1 = *(ushort *)(piVar5 + 7);
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
      *(undefined2 *)(iVar4 + 0x1c + piVar3[0x11]) = 1;
      param_1 = (int *)((int)param_1 + 1);
      iVar4 = iVar4 + 0x28;
    } while ((int)param_1 < (int)(short)piVar3[0x13]);
  }
  if (((piVar3[0x18] & 0x200U) != 0) && (piVar3[0x2b] != 0)) {
    piVar3[0x18] = piVar3[0x18] | 0x20;
  }
  if (iVar2 != 0) {
    (*DAT_00582b20)(iVar2);
  }
  return 0;
}


/* FUN_00469aa0 @ 00469aa0  kind=gamemisc  attributed-by=none  size=108 */

int __cdecl FUN_00469aa0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if ((param_2 < (int)(uint)*(ushort *)(param_1 + 0xb)) && (-1 < param_2)) {
    if (*(int *)(iVar1 + 0xc) != 0) {
      (*DAT_00582b18)(*(int *)(iVar1 + 0xc));
    }
    iVar2 = FUN_004ae680((int *)(param_1[4] + param_2 * 0x28),2);
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


/* FUN_00469b10 @ 00469b10  kind=gamemisc  attributed-by=none  size=191 */

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


/* FUN_00469bd0 @ 00469bd0  kind=gamemisc  attributed-by=none  size=110 */

int __cdecl FUN_00469bd0(int *param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(ushort *)(param_1 + 0xb);
  iVar2 = *param_1;
  if ((param_2 < (int)(uint)uVar1) && (-1 < param_2)) {
    if (*(int *)(iVar2 + 0xc) != 0) {
      (*DAT_00582b18)(*(int *)(iVar2 + 0xc));
    }
    iVar3 = FUN_004ae680((int *)(param_1[4] + ((uint)uVar1 + param_2) * 0x28),1);
    if (*(char *)(iVar2 + 0x38) != '\0') {
      *(undefined1 *)(iVar2 + 0x38) = 0;
      iVar3 = 0;
    }
    if (*(int *)(iVar2 + 0xc) != 0) {
      (*DAT_00582b20)(*(int *)(iVar2 + 0xc));
    }
    return iVar3;
  }
  return 0;
}


/* FUN_00469c40 @ 00469c40  kind=gamemisc  attributed-by=none  size=110 */

int __cdecl FUN_00469c40(int *param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(ushort *)(param_1 + 0xb);
  iVar2 = *param_1;
  if ((param_2 < (int)(uint)uVar1) && (-1 < param_2)) {
    if (*(int *)(iVar2 + 0xc) != 0) {
      (*DAT_00582b18)(*(int *)(iVar2 + 0xc));
    }
    iVar3 = FUN_004ae680((int *)(param_1[4] + ((uint)uVar1 + param_2) * 0x28),2);
    if (*(char *)(iVar2 + 0x38) != '\0') {
      *(undefined1 *)(iVar2 + 0x38) = 0;
      iVar3 = 0;
    }
    if (*(int *)(iVar2 + 0xc) != 0) {
      (*DAT_00582b20)(*(int *)(iVar2 + 0xc));
    }
    return iVar3;
  }
  return 0;
}


/* FUN_0046a030 @ 0046a030  kind=gamemisc  attributed-by=none  size=206 */

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


/* FUN_0046a100 @ 0046a100  kind=gamemisc  attributed-by=none  size=955 */

void __cdecl
FUN_0046a100(undefined4 param_1,char *param_2,undefined8 *param_3,uint param_4,int *param_5)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte *pbVar7;
  char *pcVar8;
  int iVar9;
  int local_140;
  int local_11c;
  char local_110 [264];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  uVar2 = param_4 & 2;
  iVar9 = 0;
  *(undefined4 *)(param_3 + 1) = 0xffffffff;
  pcVar8 = param_2;
  if (param_2 == (char *)0x0) {
    iVar3 = FUN_0047db10(0x106,local_110);
    if (iVar3 != 0) goto LAB_0046a4ac;
    pcVar8 = local_110;
  }
  iVar3 = FUN_00476080(pcVar8);
  if (iVar3 == 0) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar4 = FUN_004c2230(iVar3);
  if (iVar4 != 0) {
    FUN_00466dd0(iVar3);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  uVar5 = 0x80000000;
  if (uVar2 != 0) {
    uVar5 = 0xc0000000;
  }
  if ((param_4 & 0x10) == 0) {
    cVar1 = ((param_4 & 4) != 0) + '\x03';
  }
  else {
    cVar1 = '\x01';
  }
  uVar6 = 0x80;
  if ((param_4 & 8) != 0) {
    uVar6 = 0x4000102;
  }
  iVar4 = FUN_0047f030();
  if (iVar4 == 0) {
    while (((local_11c = (*(code *)PTR_CreateFileA_0058359c)(iVar3,uVar5,3,0,cVar1,uVar6,0),
            iVar4 = local_140, local_11c == -1 &&
            (iVar4 = (*(code *)PTR_GetLastError_005836a4)(), iVar9 < DAT_00582bbc)) &&
           ((iVar4 == 5 || ((iVar4 == 0x21 || (iVar4 == 0x20))))))) {
      iVar9 = iVar9 + 1;
      (*(code *)PTR_Sleep_005837e8)(iVar9 * DAT_00582bc0);
    }
  }
  else {
    while (((local_11c = (*(code *)PTR_CreateFileW_005835a8)(iVar3,uVar5,3,0,cVar1,uVar6,0),
            iVar4 = local_140, local_11c == -1 &&
            (iVar4 = (*(code *)PTR_GetLastError_005836a4)(), iVar9 < DAT_00582bbc)) &&
           ((iVar4 == 5 || ((iVar4 == 0x21 || (iVar4 == 0x20))))))) {
      iVar9 = iVar9 + 1;
      (*(code *)PTR_Sleep_005837e8)(iVar9 * DAT_00582bc0);
    }
  }
  if (iVar9 != 0) {
    FUN_004683f0(10,"delayed %dms for lock/sharing conflict");
  }
  if (local_11c == -1) {
    *(int *)((int)param_3 + 0x14) = iVar4;
    FUN_004c23f0(0xe,iVar4);
    FUN_00466dd0(iVar3);
    if ((uVar2 != 0) && ((param_4 & 0x10) == 0)) {
      FUN_0046a100(param_1,param_2,param_3,param_4 & 0xfffffff9 | 1,param_5);
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    FUN_004683f0(0xe,"cannot open file at line %d of [%.10s]");
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  if (param_5 != (int *)0x0) {
    *param_5 = (uVar2 != 0) + 1;
  }
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  *(undefined4 *)(param_3 + 4) = 0;
  *(undefined4 *)((int)param_3 + 4) = param_1;
  *(undefined **)param_3 = &DAT_005695c0;
  *(int *)(param_3 + 1) = local_11c;
  *(undefined4 *)((int)param_3 + 0x14) = 0;
  *(undefined4 *)(param_3 + 3) = 0;
  *(char **)((int)param_3 + 0x1c) = param_2;
  pbVar7 = FUN_004bccb0(param_2,&DAT_0056df6c);
  if ((pbVar7 == (byte *)0x0) || (uVar2 = FUN_0047da70(pbVar7,1,1), (char)uVar2 != '\0')) {
    *(byte *)(param_3 + 2) = *(byte *)(param_3 + 2) | 0x10;
  }
  FUN_00466dd0(iVar3);
LAB_0046a4ac:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0046a4c0 @ 0046a4c0  kind=gamemisc  attributed-by=none  size=95 */

int __cdecl FUN_0046a4c0(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_00475040(param_1,param_2);
  if ((*(byte *)(piVar1 + 7) & 0x10) == 0) {
    iVar2 = FUN_004ae680(piVar1,2);
    if (iVar2 == 0) {
      FUN_00474fe0(param_1);
      return 0;
    }
  }
  iVar2 = piVar1[6];
  if ((*(ushort *)(piVar1 + 7) & 0x4000) != 0) {
    iVar2 = iVar2 + piVar1[4];
  }
  FUN_00474fe0(param_1);
  return iVar2;
}


/* FUN_0046a520 @ 0046a520  kind=gamemisc  attributed-by=none  size=473 */

void __cdecl FUN_0046a520(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int local_a0;
  undefined4 local_9c [4];
  int local_8c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  iVar4 = 0;
  iVar1 = FUN_00476080(param_2);
  if (iVar1 == 0) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  if (DAT_00583f38 == 0) {
    local_9c[0] = 0x94;
    (*(code *)PTR_GetVersionExA_00583704)(local_9c);
    DAT_00583f38 = (local_8c == 2) + 1;
  }
  if (DAT_00583f38 == 2) {
    uVar2 = (*(code *)PTR_GetFileAttributesW_00583668)();
    while (uVar2 != 0xffffffff) {
      iVar3 = local_a0;
      if ((uVar2 & 0x10) != 0) goto LAB_0046a6d1;
      iVar3 = (*(code *)PTR_DeleteFileW_005835e4)(iVar1);
      if (iVar3 != 0) goto LAB_0046a619;
      iVar3 = (*(code *)PTR_GetLastError_005836a4)();
      if ((DAT_00582bbc <= iVar4) || (((iVar3 != 5 && (iVar3 != 0x21)) && (iVar3 != 0x20))))
      goto LAB_0046a6d1;
      iVar4 = iVar4 + 1;
      (*(code *)PTR_Sleep_005837e8)(iVar4 * DAT_00582bc0);
      uVar2 = (*(code *)PTR_GetFileAttributesW_00583668)(iVar1);
    }
    iVar3 = (*(code *)PTR_GetLastError_005836a4)();
  }
  else {
    uVar2 = (*(code *)PTR_GetFileAttributesA_0058365c)(iVar1);
    while (uVar2 != 0xffffffff) {
      iVar3 = local_a0;
      if ((uVar2 & 0x10) != 0) goto LAB_0046a6d1;
      iVar3 = (*(code *)PTR_DeleteFileA_005835d8)(iVar1);
      if (iVar3 != 0) goto LAB_0046a619;
      iVar3 = (*(code *)PTR_GetLastError_005836a4)();
      if ((DAT_00582bbc <= iVar4) || (((iVar3 != 5 && (iVar3 != 0x21)) && (iVar3 != 0x20))))
      goto LAB_0046a6d1;
      iVar4 = iVar4 + 1;
      (*(code *)PTR_Sleep_005837e8)(iVar4 * DAT_00582bc0);
      uVar2 = (*(code *)PTR_GetFileAttributesA_0058365c)(iVar1);
    }
    iVar3 = (*(code *)PTR_GetLastError_005836a4)();
  }
  if ((iVar3 == 2) || (iVar3 == 3)) {
LAB_0046a619:
    if (iVar4 != 0) {
      FUN_004683f0(10,"delayed %dms for lock/sharing conflict");
    }
  }
  else {
LAB_0046a6d1:
    FUN_004c23f0(0xa0a,iVar3);
  }
  FUN_00466dd0(iVar1);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0046a710 @ 0046a710  kind=gamemisc  attributed-by=none  size=128 */

float10 __cdecl FUN_0046a710(int *param_1,int param_2)

{
  ushort uVar1;
  undefined *puVar2;
  double local_c;
  
  puVar2 = FUN_00475040(param_1,param_2);
  uVar1 = *(ushort *)(puVar2 + 0x1c);
  if ((uVar1 & 8) == 0) {
    if ((uVar1 & 4) != 0) {
      local_c = (double)*(longlong *)(puVar2 + 0x10);
      FUN_00474fe0(param_1);
      return (float10)local_c;
    }
    local_c = 0.0;
    if ((uVar1 & 0x12) != 0) {
      local_c = 0.0;
      FUN_0048cc90(*(byte **)(puVar2 + 4),&local_c,*(uint *)(puVar2 + 0x18),puVar2[0x1f]);
    }
  }
  else {
    local_c = *(double *)(puVar2 + 8);
  }
  FUN_00474fe0(param_1);
  return (float10)local_c;
}


/* FUN_0046a790 @ 0046a790  kind=gamemisc  attributed-by=none  size=39 */

undefined4 __cdecl FUN_0046a790(int *param_1,int param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  puVar1 = FUN_00475040(param_1,param_2);
  uVar2 = FUN_0045f1d0((int)puVar1);
  FUN_00474fe0(param_1);
  return uVar2;
}


/* FUN_0046a7c0 @ 0046a7c0  kind=gamemisc  attributed-by=none  size=155 */

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


/* FUN_0046a860 @ 0046a860  kind=gamemisc  attributed-by=none  size=133 */

ulonglong __cdecl FUN_0046a860(int *param_1,int param_2)

{
  ushort uVar1;
  undefined *puVar2;
  ulonglong uVar3;
  ulonglong local_c;
  
  puVar2 = FUN_00475040(param_1,param_2);
  uVar1 = *(ushort *)(puVar2 + 0x1c);
  if ((uVar1 & 4) == 0) {
    if ((uVar1 & 8) == 0) {
      local_c = 0;
      uVar3 = local_c;
      if ((uVar1 & 0x12) != 0) {
        FUN_0048d300(*(byte **)(puVar2 + 4),(uint *)&local_c,*(int *)(puVar2 + 0x18),puVar2[0x1f]);
        uVar3 = local_c;
      }
    }
    else {
      uVar3 = FUN_00477080(*(double *)(puVar2 + 8));
    }
  }
  else {
    uVar3 = *(ulonglong *)(puVar2 + 0x10);
  }
  FUN_00474fe0(param_1);
  return uVar3;
}


/* FUN_0046a8f0 @ 0046a8f0  kind=gamemisc  attributed-by=none  size=41 */

int __cdecl FUN_0046a8f0(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_00475040(param_1,param_2);
  iVar2 = FUN_004ae680(piVar1,1);
  FUN_00474fe0(param_1);
  return iVar2;
}


/* FUN_0046a920 @ 0046a920  kind=gamemisc  attributed-by=none  size=41 */

int __cdecl FUN_0046a920(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_00475040(param_1,param_2);
  iVar2 = FUN_004ae680(piVar1,2);
  FUN_00474fe0(param_1);
  return iVar2;
}


/* FUN_0046ad10 @ 0046ad10  kind=gamemisc  attributed-by=none  size=85 */

LPCRITICAL_SECTION __cdecl FUN_0046ad10(uint param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (param_1 < 2) {
    lpCriticalSection = (LPCRITICAL_SECTION)FUN_004a0350(0x1c);
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
      lpCriticalSection->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
      lpCriticalSection->LockCount = 0;
      lpCriticalSection->RecursionCount = 0;
      lpCriticalSection->OwningThread = (HANDLE)0x0;
      lpCriticalSection->LockSemaphore = (HANDLE)0x0;
      lpCriticalSection->SpinCount = 0;
      lpCriticalSection[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
      InitializeCriticalSection(lpCriticalSection);
    }
    return lpCriticalSection;
  }
  return (LPCRITICAL_SECTION)(&DAT_00583e88 + (param_1 - 2) * 0x1c);
}


/* FUN_0046ad70 @ 0046ad70  kind=gamemisc  attributed-by=none  size=188 */

undefined4 __cdecl FUN_0046ad70(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  piVar1 = *(int **)(param_1 + 0x18);
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)*piVar1;
    if (*piVar2 != 0) {
      (*DAT_00582b18)(*piVar2);
    }
    piVar4 = piVar2 + 0x10;
    piVar3 = (int *)piVar2[0x10];
    while (piVar3 != piVar1) {
      piVar4 = piVar3 + 1;
      piVar3 = (int *)*piVar4;
    }
    *piVar4 = piVar1[1];
    FUN_00466dd0((int)piVar1);
    *(undefined4 *)(param_1 + 0x18) = 0;
    if (*piVar2 != 0) {
      (*DAT_00582b20)(*piVar2);
    }
    if ((DAT_00582acc != 0) && (iVar5 = (*DAT_00582b10)(2), iVar5 != 0)) {
      (*DAT_00582b18)(iVar5);
    }
    piVar2 = piVar2 + 0xf;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      FUN_004c2810(*(undefined4 *)(param_1 + 4),param_2);
    }
    if ((DAT_00582acc != 0) && (iVar5 = (*DAT_00582b10)(2), iVar5 != 0)) {
      (*DAT_00582b20)(iVar5);
    }
  }
  return 0;
}


/* FUN_0046ae50 @ 0046ae50  kind=gamemisc  attributed-by=none  size=145 */

uint __cdecl
FUN_0046ae50(uint param_1,void *param_2,int param_3,uint param_4,undefined4 param_5,int param_6,
            int param_7,int param_8)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b18)(*(int *)(param_1 + 0xc));
  }
  pbVar2 = (byte *)FUN_004ad190(param_1,param_2,0xffffffff,'\x02');
  uVar3 = FUN_00493f20(param_1,pbVar2,param_3,param_4,param_5,param_6,param_7,param_8,(int *)0x0);
  FUN_00494b00(param_1,(undefined4 *)pbVar2);
  if ((*(char *)(param_1 + 0x38) != '\0') || (uVar3 == 0xc0a)) {
    FUN_004961f0(param_1,7,(byte *)0x0);
    *(undefined1 *)(param_1 + 0x38) = 0;
    uVar3 = 7;
  }
  uVar1 = *(uint *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b20)(*(int *)(param_1 + 0xc));
  }
  return uVar1 & uVar3;
}


/* FUN_0046af10 @ 0046af10  kind=gamemisc  attributed-by=none  size=445 */

int __cdecl FUN_0046af10(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  int *piVar1;
  int *piVar2;
  ushort uVar3;
  int *piVar4;
  int iVar5;
  ushort uVar6;
  
  piVar1 = *(int **)(param_1 + 0x18);
  piVar2 = (int *)*piVar1;
  uVar3 = (1 << ((char)param_3 + (byte)param_2 & 0x1f)) - (1 << ((byte)param_2 & 0x1f));
  if (*piVar2 != 0) {
    (*DAT_00582b18)(*piVar2);
  }
  if ((param_4 & 1) == 0) {
    iVar5 = piVar2[0x10];
    if ((param_4 & 4) == 0) {
      for (; iVar5 != 0; iVar5 = *(int *)(iVar5 + 4)) {
        if (((*(ushort *)(iVar5 + 0xc) & uVar3) != 0) || ((*(ushort *)(iVar5 + 10) & uVar3) != 0))
        goto LAB_0046b094;
      }
      iVar5 = FUN_004c2320(piVar2 + 4,3,param_2 + 0x78,0,param_3,0);
      if (iVar5 == 0) {
        iVar5 = (*(code *)PTR_GetLastError_005836a4)();
        piVar2[0xe] = iVar5;
        iVar5 = 5;
      }
      else {
        iVar5 = 0;
      }
      if (iVar5 == 0) {
        *(ushort *)(piVar1 + 3) = *(ushort *)(piVar1 + 3) | uVar3;
      }
    }
    else {
      uVar6 = 0;
      for (; iVar5 != 0; iVar5 = *(int *)(iVar5 + 4)) {
        if ((*(ushort *)(iVar5 + 0xc) & uVar3) != 0) goto LAB_0046b094;
        uVar6 = uVar6 | *(ushort *)(iVar5 + 10);
      }
      if ((uVar6 & uVar3) == 0) {
        iVar5 = FUN_004c2320(piVar2 + 4,1,param_2 + 0x78,0,param_3,0);
        if (iVar5 == 0) {
          iVar5 = (*(code *)PTR_GetLastError_005836a4)();
          piVar2[0xe] = iVar5;
          iVar5 = 5;
        }
        else {
          iVar5 = 0;
        }
        if (iVar5 == 0) {
          *(ushort *)((int)piVar1 + 10) = *(ushort *)((int)piVar1 + 10) | uVar3;
        }
      }
      else {
        iVar5 = 0;
        *(ushort *)((int)piVar1 + 10) = *(ushort *)((int)piVar1 + 10) | uVar3;
      }
    }
  }
  else {
    piVar4 = (int *)piVar2[0x10];
    param_1._0_2_ = 0;
    if (piVar4 != (int *)0x0) {
      param_1._0_2_ = 0;
      do {
        if (piVar4 != piVar1) {
          param_1._0_2_ = (ushort)param_1 | *(ushort *)((int)piVar4 + 10);
        }
        piVar4 = (int *)piVar4[1];
      } while (piVar4 != (int *)0x0);
    }
    if (((ushort)param_1 & uVar3) == 0) {
      iVar5 = FUN_004c28e0(piVar2 + 4,param_2 + 0x78,0,param_3,0);
      if (iVar5 == 0) {
        iVar5 = (*(code *)PTR_GetLastError_005836a4)();
        piVar2[0xe] = iVar5;
        iVar5 = 5;
      }
      else {
        iVar5 = 0;
      }
      if (iVar5 == 0) {
        *(ushort *)(piVar1 + 3) = *(ushort *)(piVar1 + 3) & ~uVar3;
        *(ushort *)((int)piVar1 + 10) = *(ushort *)((int)piVar1 + 10) & ~uVar3;
      }
    }
    else {
      *(ushort *)(piVar1 + 3) = *(ushort *)(piVar1 + 3) & ~uVar3;
      iVar5 = 0;
      *(ushort *)((int)piVar1 + 10) = *(ushort *)((int)piVar1 + 10) & ~uVar3;
    }
  }
LAB_0046b0b1:
  if (*piVar2 != 0) {
    (*DAT_00582b20)(*piVar2);
  }
  return iVar5;
LAB_0046b094:
  iVar5 = 5;
  goto LAB_0046b0b1;
}


/* FUN_0046b0e0 @ 0046b0e0  kind=gamemisc  attributed-by=none  size=218 */

uint __cdecl
FUN_0046b0e0(int param_1,byte *param_2,int param_3,uint param_4,int param_5,int param_6,int param_7,
            int param_8,undefined *param_9)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  
  piVar3 = (int *)0x0;
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b18)(*(int *)(param_1 + 0xc));
  }
  if (param_9 != (undefined *)0x0) {
    piVar3 = FUN_00494b90(param_1,0xc);
    if (piVar3 == (int *)0x0) {
      (*(code *)param_9)(param_5);
      uVar2 = 1;
      goto LAB_0046b17a;
    }
    piVar3[0] = 0;
    piVar3[1] = 0;
    piVar3[2] = 0;
    piVar3[1] = (int)param_9;
    piVar3[2] = param_5;
  }
  uVar2 = FUN_00493f20(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar3);
  if ((piVar3 != (int *)0x0) && (*piVar3 == 0)) {
    (*(code *)param_9)(param_5);
    FUN_00494b00(param_1,piVar3);
  }
LAB_0046b17a:
  if ((*(char *)(param_1 + 0x38) != '\0') || (uVar2 == 0xc0a)) {
    FUN_004961f0(param_1,7,(byte *)0x0);
    *(undefined1 *)(param_1 + 0x38) = 0;
    uVar2 = 7;
  }
  uVar1 = *(uint *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b20)(*(int *)(param_1 + 0xc));
  }
  return uVar1 & uVar2;
}


/* FUN_0046b1f0 @ 0046b1f0  kind=gamemisc  attributed-by=none  size=88 */

undefined4 __cdecl FUN_0046b1f0(void *param_1,int *param_2)

{
  undefined4 uVar1;
  
  if (*(short *)((int)param_1 + 0x4c) != (short)param_2[0x13]) {
    return 1;
  }
  if (((param_2[0x18] & 0x200U) != 0) && (param_2[0x2b] != 0)) {
    param_2[0x18] = param_2[0x18] | 0x20;
  }
  if (((*(uint *)((int)param_1 + 0x60) & 0x200) != 0) && (*(int *)((int)param_1 + 0xac) != 0)) {
    *(uint *)((int)param_1 + 0x60) = *(uint *)((int)param_1 + 0x60) | 0x20;
  }
  uVar1 = FUN_004aac10(param_1,(int)param_1,param_2);
  return uVar1;
}


/* FUN_0046b260 @ 0046b260  kind=gamemisc  attributed-by=none  size=73 */

int __cdecl FUN_0046b260(int *param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 7) & 0x12) == 0) {
    iVar1 = FUN_004ae680(param_1,1);
    return iVar1;
  }
  FUN_004b6fa0(param_1);
  *(ushort *)(param_1 + 7) = *(ushort *)(param_1 + 7) & 0xfffd | 0x10;
  if (param_1[6] != 0) {
    return param_1[1];
  }
  return 0;
}


/* FUN_0046b2b0 @ 0046b2b0  kind=gamemisc  attributed-by=none  size=51 */

int __cdecl FUN_0046b2b0(int *param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 7) & 0x10) == 0) {
    iVar1 = FUN_004ae680(param_1,1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  iVar1 = param_1[6];
  if ((*(ushort *)(param_1 + 7) & 0x4000) != 0) {
    iVar1 = iVar1 + param_1[4];
  }
  return iVar1;
}


/* FUN_0046bab0 @ 0046bab0  kind=gamemisc  attributed-by=none  size=37 */

bool __cdecl FUN_0046bab0(int param_1,int param_2)

{
  for (; (0 < param_2 && (*(char *)(param_1 + -1 + param_2) == ' ')); param_2 = param_2 + -1) {
  }
  return param_2 == 0;
}


/* FUN_0046c6c0 @ 0046c6c0  kind=gamemisc  attributed-by=none  size=235 */

undefined4 __cdecl FUN_0046c6c0(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  char cVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  
  if (((param_3 == (undefined4 *)0x0) || ((byte *)*param_3 == (byte *)0x0)) ||
     (piVar8 = (int *)param_3[2], piVar8 == (int *)0x0)) {
    return 0;
  }
  pbVar2 = (byte *)param_1[1];
  iVar5 = *param_1;
  iVar4 = FUN_00499c30(iVar5,(byte *)*param_3,pbVar2);
  if (iVar4 == 0) {
    return 0;
  }
  if ((byte *)param_3[1] == (byte *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_00499af0(iVar5,(byte *)param_3[1],pbVar2);
    if (iVar5 != 0) {
      iVar6 = *(int *)(iVar5 + 0x24);
      goto LAB_0046c72a;
    }
  }
  iVar6 = 0;
LAB_0046c72a:
  cVar1 = (char)*piVar8;
  iVar9 = 0;
  while( true ) {
    if (cVar1 == '\0') {
      return 0;
    }
    if (iVar6 < iVar9) break;
    iVar7 = 0;
    while ((iVar3 = (int)cVar1, 0x2f < iVar3 && (iVar3 < 0x3a))) {
      piVar8 = (int *)((int)piVar8 + 1);
      iVar7 = iVar3 + (iVar7 * 5 + -0x18) * 2;
      cVar1 = *(char *)piVar8;
    }
    if (iVar9 == 0) {
      *(int *)(iVar4 + 0x1c) = iVar7;
    }
    if (iVar5 == 0) {
      return 0;
    }
    *(int *)(*(int *)(iVar5 + 8) + iVar9 * 4) = iVar7;
    if ((char)*piVar8 == ' ') {
      piVar8 = (int *)((int)piVar8 + 1);
    }
    if (((*piVar8 == 0x726f6e75) && (piVar8[1] == 0x65726564)) && ((short)piVar8[2] == 100)) {
      *(undefined1 *)(iVar5 + 0x2e) = 1;
      return 0;
    }
    cVar1 = (char)*piVar8;
    iVar9 = iVar9 + 1;
  }
  return 0;
}


/* FUN_0046c7b0 @ 0046c7b0  kind=gamemisc  attributed-by=none  size=721 */

undefined4 __cdecl FUN_0046c7b0(int param_1,uint *param_2)

{
  byte bVar1;
  byte bVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  byte *pbVar6;
  char *pcVar7;
  uint *puVar8;
  char cVar9;
  undefined3 extraout_var;
  undefined4 *puVar10;
  byte *pbVar11;
  size_t sVar12;
  short *psVar13;
  uint *puVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  
  puVar8 = param_2;
  piVar3 = *(int **)(param_1 + 0x10);
  piVar4 = (int *)*piVar3;
  psVar13 = (short *)piVar3[1];
  uVar5 = piVar3[3];
  cVar9 = (char)*param_2;
  if (cVar9 != -0x68) {
    if (cVar9 == -0x67) {
      if ((*(byte *)(piVar3 + 7) & 8) != 0) {
        return 0;
      }
      if (*(uint *)(param_1 + 0xc) != (uint)*(byte *)((int)param_2 + 0x23)) {
        return 0;
      }
      puVar10 = *(undefined4 **)(uVar5 + 0x20);
      param_2 = (uint *)(uVar5 + 0x24);
      puVar14 = (uint *)0x0;
      if (0 < (int)*param_2) {
        do {
          cVar9 = FUN_00498610((char *)*puVar10,(char *)puVar8);
          if (CONCAT31(extraout_var,cVar9) == 0) break;
          puVar14 = (uint *)((int)puVar14 + 1);
          puVar10 = puVar10 + 4;
        } while ((int)puVar14 < (int)*param_2);
        if ((int)puVar14 < (int)*param_2) goto LAB_0046c8f7;
      }
      bVar1 = *(byte *)(*(int *)(*(int *)(*piVar4 + 0x10) + 0xc) + 0x4d);
      puVar10 = FUN_0048cc10(*piVar4,*(undefined4 **)(uVar5 + 0x20),0x10,param_2,(uint *)&param_2);
      puVar14 = param_2;
      *(undefined4 **)(uVar5 + 0x20) = puVar10;
      if (-1 < (int)param_2) {
        puVar10 = puVar10 + (int)param_2 * 4;
        *puVar10 = puVar8;
        piVar4[0x13] = piVar4[0x13] + 1;
        puVar10[2] = piVar4[0x13];
        if ((undefined4 *)puVar8[4] == (undefined4 *)0x0) {
          param_2 = (uint *)0x0;
        }
        else {
          param_2 = *(uint **)puVar8[4];
        }
        pbVar6 = (byte *)puVar8[1];
        sVar12 = 0;
        if (pbVar6 != (byte *)0x0) {
          bVar2 = *pbVar6;
          pbVar11 = pbVar6;
          while (bVar2 != 0) {
            pbVar11 = pbVar11 + 1;
            bVar2 = *pbVar11;
          }
          sVar12 = (int)pbVar11 - (int)pbVar6 & 0x3fffffff;
        }
        psVar13 = FUN_004995c0(*piVar4,pbVar6,sVar12,(int)param_2,bVar1,'\0');
        puVar10[1] = psVar13;
        if ((*puVar8 & 0x100000) != 0) {
          puVar10[3] = piVar4[0x12];
          piVar4[0x12] = piVar4[0x12] + 1;
          *(short *)((int)puVar8 + 0x1e) = (short)puVar14;
          puVar8[9] = uVar5;
          return 1;
        }
        puVar10[3] = 0xffffffff;
      }
LAB_0046c8f7:
      *(short *)((int)puVar8 + 0x1e) = (short)puVar14;
      puVar8[9] = uVar5;
      return 1;
    }
    if (cVar9 != -0x66) {
      return 0;
    }
  }
  if (psVar13 == (short *)0x0) {
    return 1;
  }
  iVar15 = 0;
  if (*psVar13 < 1) {
    return 1;
  }
  puVar14 = (uint *)(psVar13 + 0x1a);
  while (param_2[6] != *puVar14) {
    iVar15 = iVar15 + 1;
    puVar14 = puVar14 + 0x12;
    if (*psVar13 <= iVar15) {
      return 1;
    }
  }
  uVar18 = *(uint *)(uVar5 + 0x18);
  puVar14 = *(uint **)(uVar5 + 0x14);
  uVar17 = 0;
  if (0 < (int)uVar18) {
    puVar16 = puVar14 + 2;
    do {
      if ((puVar16[-1] == param_2[6]) &&
         (uVar18 = *(uint *)(uVar5 + 0x18), *puVar16 == (int)(short)param_2[7])) break;
      uVar17 = uVar17 + 1;
      puVar16 = puVar16 + 6;
    } while ((int)uVar17 < (int)uVar18);
  }
  if ((int)uVar17 < (int)uVar18) goto LAB_0046ca69;
  if ((uVar18 & uVar18 - 1) == 0) {
    iVar15 = 1;
    if (uVar18 != 0) {
      iVar15 = uVar18 * 2;
    }
    param_2 = puVar14;
    puVar14 = FUN_00494cf0(*piVar4,puVar14,iVar15 * 0x18);
    if (puVar14 != (uint *)0x0) goto LAB_0046c9bf;
    uVar18 = 0xffffffff;
    puVar14 = param_2;
  }
  else {
LAB_0046c9bf:
    (puVar14 + uVar18 * 6)[0] = 0;
    (puVar14 + uVar18 * 6)[1] = 0;
    (puVar14 + uVar18 * 6 + 2)[0] = 0;
    (puVar14 + uVar18 * 6 + 2)[1] = 0;
    (puVar14 + uVar18 * 6 + 4)[0] = 0;
    (puVar14 + uVar18 * 6 + 4)[1] = 0;
    *(int *)(uVar5 + 0x18) = *(int *)(uVar5 + 0x18) + 1;
  }
  *(uint **)(uVar5 + 0x14) = puVar14;
  uVar17 = uVar18;
  if (-1 < (int)uVar18) {
    puVar14 = puVar14 + uVar18 * 6;
    *puVar14 = puVar8[10];
    puVar14[1] = puVar8[6];
    puVar14[2] = (int)(short)puVar8[7];
    piVar4[0x13] = piVar4[0x13] + 1;
    puVar14[4] = piVar4[0x13];
    puVar14[3] = 0xffffffff;
    puVar14[5] = (uint)puVar8;
    piVar3 = *(int **)(uVar5 + 0x10);
    if (piVar3 != (int *)0x0) {
      puVar10 = (undefined4 *)piVar3[2];
      uVar18 = 0;
      if (0 < *piVar3) {
        do {
          pcVar7 = (char *)*puVar10;
          if (((*pcVar7 == -0x68) && (*(uint *)(pcVar7 + 0x18) == puVar8[6])) &&
             (*(short *)(pcVar7 + 0x1c) == (short)puVar8[7])) {
            puVar14[3] = uVar18;
            break;
          }
          uVar18 = uVar18 + 1;
          puVar10 = puVar10 + 5;
        } while ((int)uVar18 < *piVar3);
      }
    }
    if ((int)puVar14[3] < 0) {
      puVar14[3] = *(uint *)(uVar5 + 0xc);
      *(int *)(uVar5 + 0xc) = *(int *)(uVar5 + 0xc) + 1;
    }
  }
LAB_0046ca69:
  puVar8[9] = uVar5;
  *(undefined1 *)puVar8 = 0x9a;
  *(short *)((int)puVar8 + 0x1e) = (short)uVar17;
  return 1;
}


/* FUN_0046eada @ 0046eada  kind=gamemisc  attributed-by=none  size=278 */

void FUN_0046eada(void)

{
  short *psVar1;
  undefined4 *puVar2;
  uint *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  uint unaff_EBP;
  int unaff_ESI;
  int iVar7;
  int unaff_EDI;
  int iVar8;
  undefined4 uStack00000008;
  
  do {
    iVar8 = *(int *)((unaff_EBP - 0x94) + unaff_ESI * 4);
    if ((iVar8 != 0) && (puVar2 = *(undefined4 **)(iVar8 + 0x44), puVar2 != (undefined4 *)0x0)) {
      psVar1 = (short *)((int)puVar2 + 0x1a);
      *psVar1 = *psVar1 + -1;
      puVar3 = (uint *)puVar2[4];
      if (*psVar1 == 0) {
        *(int *)(puVar2[7] + 0xc) = *(int *)(puVar2[7] + 0xc) + -1;
        if ((*(byte *)(puVar2 + 6) & 2) == 0) {
          iVar8 = puVar2[7];
          if (*(int *)(iVar8 + 0x1c) != 0) {
            if (puVar2[5] == 1) {
              *(undefined4 *)(iVar8 + 0x2c) = 0;
            }
            (*DAT_00582b4c)(*(undefined4 *)(iVar8 + 0x28),*puVar2,0);
          }
        }
        else {
          puVar5 = (undefined4 *)puVar2[7];
          if ((undefined4 *)puVar5[2] == puVar2) {
            for (iVar8 = puVar2[9]; (iVar8 != 0 && ((*(byte *)(iVar8 + 0x18) & 4) != 0));
                iVar8 = *(int *)(iVar8 + 0x24)) {
            }
            puVar5[2] = iVar8;
          }
          if (puVar2[8] == 0) {
            puVar5[1] = puVar2[9];
          }
          else {
            *(undefined4 *)(puVar2[8] + 0x24) = puVar2[9];
          }
          if (puVar2[9] == 0) {
            *puVar5 = puVar2[8];
          }
          else {
            *(undefined4 *)(puVar2[9] + 0x20) = puVar2[8];
          }
          piVar6 = (int *)puVar2[7];
          puVar2[8] = 0;
          puVar2[9] = 0;
          iVar8 = *piVar6;
          puVar2[8] = iVar8;
          if (iVar8 != 0) {
            *(undefined4 **)(iVar8 + 0x24) = puVar2;
          }
          *piVar6 = (int)puVar2;
          if (piVar6[1] == 0) {
            piVar6[1] = (int)puVar2;
          }
          unaff_EDI = *(int *)(unaff_EBP - 0x50);
          if ((piVar6[2] == 0) && ((*(byte *)(puVar2 + 6) & 4) == 0)) {
            piVar6[2] = (int)puVar2;
          }
        }
      }
      if (*(int *)(puVar3[0x2d] + 0xc) == 0) {
        FUN_00484370(puVar3);
      }
    }
    unaff_ESI = unaff_ESI + 1;
  } while (unaff_ESI < unaff_EDI);
  iVar8 = *(int *)(unaff_EBP - 0x54);
  iVar7 = 0;
  if (0 < iVar8) {
    do {
      iVar4 = *(int *)((unaff_EBP - 0x18) + iVar7 * 4);
      if ((iVar4 != 0) && (puVar2 = *(undefined4 **)(iVar4 + 0x44), puVar2 != (undefined4 *)0x0)) {
        psVar1 = (short *)((int)puVar2 + 0x1a);
        *psVar1 = *psVar1 + -1;
        puVar3 = (uint *)puVar2[4];
        if (*psVar1 == 0) {
          *(int *)(puVar2[7] + 0xc) = *(int *)(puVar2[7] + 0xc) + -1;
          if ((*(byte *)(puVar2 + 6) & 2) == 0) {
            iVar4 = puVar2[7];
            if (*(int *)(iVar4 + 0x1c) != 0) {
              if (puVar2[5] == 1) {
                *(undefined4 *)(iVar4 + 0x2c) = 0;
              }
              (*DAT_00582b4c)(*(undefined4 *)(iVar4 + 0x28),*puVar2,0);
            }
          }
          else {
            puVar5 = (undefined4 *)puVar2[7];
            if ((undefined4 *)puVar5[2] == puVar2) {
              for (iVar8 = puVar2[9]; (iVar8 != 0 && ((*(byte *)(iVar8 + 0x18) & 4) != 0));
                  iVar8 = *(int *)(iVar8 + 0x24)) {
              }
              puVar5[2] = iVar8;
            }
            if (puVar2[8] == 0) {
              puVar5[1] = puVar2[9];
            }
            else {
              *(undefined4 *)(puVar2[8] + 0x24) = puVar2[9];
            }
            if (puVar2[9] == 0) {
              *puVar5 = puVar2[8];
            }
            else {
              *(undefined4 *)(puVar2[9] + 0x20) = puVar2[8];
            }
            piVar6 = (int *)puVar2[7];
            puVar2[8] = 0;
            puVar2[9] = 0;
            iVar8 = *piVar6;
            puVar2[8] = iVar8;
            if (iVar8 != 0) {
              *(undefined4 **)(iVar8 + 0x24) = puVar2;
            }
            *piVar6 = (int)puVar2;
            if (piVar6[1] == 0) {
              piVar6[1] = (int)puVar2;
            }
            iVar8 = *(int *)(unaff_EBP - 0x54);
            if ((piVar6[2] == 0) && ((*(byte *)(puVar2 + 6) & 4) == 0)) {
              piVar6[2] = (int)puVar2;
            }
          }
        }
        if (*(int *)(puVar3[0x2d] + 0xc) == 0) {
          FUN_00484370(puVar3);
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar8);
  }
  uStack00000008 = 0x46f6eb;
  __security_check_cookie(*(uint *)(unaff_EBP - 4) ^ unaff_EBP);
  return;
}


/* FUN_0046f5da @ 0046f5da  kind=gamemisc  attributed-by=none  size=277 */

void FUN_0046f5da(void)

{
  short *psVar1;
  int iVar2;
  undefined4 *puVar3;
  uint *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  uint unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  undefined4 uStack00000008;
  
  do {
    iVar2 = *(int *)((unaff_EBP - 0x18) + unaff_ESI * 4);
    if ((iVar2 != 0) && (puVar3 = *(undefined4 **)(iVar2 + 0x44), puVar3 != (undefined4 *)0x0)) {
      psVar1 = (short *)((int)puVar3 + 0x1a);
      *psVar1 = *psVar1 + -1;
      puVar4 = (uint *)puVar3[4];
      if (*psVar1 == 0) {
        *(int *)(puVar3[7] + 0xc) = *(int *)(puVar3[7] + 0xc) + -1;
        if ((*(byte *)(puVar3 + 6) & 2) == 0) {
          iVar2 = puVar3[7];
          if (*(int *)(iVar2 + 0x1c) != 0) {
            if (puVar3[5] == 1) {
              *(undefined4 *)(iVar2 + 0x2c) = 0;
            }
            (*DAT_00582b4c)(*(undefined4 *)(iVar2 + 0x28),*puVar3,0);
          }
        }
        else {
          puVar5 = (undefined4 *)puVar3[7];
          if ((undefined4 *)puVar5[2] == puVar3) {
            for (iVar2 = puVar3[9]; (iVar2 != 0 && ((*(byte *)(iVar2 + 0x18) & 4) != 0));
                iVar2 = *(int *)(iVar2 + 0x24)) {
            }
            puVar5[2] = iVar2;
          }
          if (puVar3[8] == 0) {
            puVar5[1] = puVar3[9];
          }
          else {
            *(undefined4 *)(puVar3[8] + 0x24) = puVar3[9];
          }
          if (puVar3[9] == 0) {
            *puVar5 = puVar3[8];
          }
          else {
            *(undefined4 *)(puVar3[9] + 0x20) = puVar3[8];
          }
          piVar6 = (int *)puVar3[7];
          puVar3[8] = 0;
          puVar3[9] = 0;
          iVar2 = *piVar6;
          puVar3[8] = iVar2;
          if (iVar2 != 0) {
            *(undefined4 **)(iVar2 + 0x24) = puVar3;
          }
          *piVar6 = (int)puVar3;
          if (piVar6[1] == 0) {
            piVar6[1] = (int)puVar3;
          }
          unaff_EDI = *(int *)(unaff_EBP - 0x54);
          if ((piVar6[2] == 0) && ((*(byte *)(puVar3 + 6) & 4) == 0)) {
            piVar6[2] = (int)puVar3;
          }
        }
      }
      if (*(int *)(puVar4[0x2d] + 0xc) == 0) {
        FUN_00484370(puVar4);
      }
    }
    unaff_ESI = unaff_ESI + 1;
  } while (unaff_ESI < unaff_EDI);
  uStack00000008 = 0x46f6eb;
  __security_check_cookie(*(uint *)(unaff_EBP - 4) ^ unaff_EBP);
  return;
}


/* FUN_0046f880 @ 0046f880  kind=gamemisc  attributed-by=none  size=267 */

void __cdecl FUN_0046f880(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined3 extraout_var;
  int extraout_ECX;
  int *piVar5;
  float10 fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  dVar10 = 1.0;
  dVar9 = *(double *)((int *)*param_1 + 0x6e);
  iVar2 = param_1[2];
  if ((((1.0 < dVar9) && ((*(uint *)(*(int *)*param_1 + 0x18) & 0x80000) != 0)) &&
      (((param_1[0xe] & 0x100f3000U) == 0 || (param_1[0xe] < 0)))) &&
     ((*(byte *)(iVar2 + 0x24) & 7) == 0)) {
    iVar3 = *(int *)(*(int *)(iVar2 + 0x10) + 0x1c);
    dVar8 = (double)iVar3 + *(double *)(&DAT_0055ac20 + (iVar3 >> 0x1f) * -8);
    fVar6 = FUN_00477290(dVar8);
    dVar7 = (double)fVar6;
    dVar9 = (dVar8 / dVar9 + dVar10) * dVar7 * 2.0;
    if (dVar9 < *(double *)(param_1 + 0x14)) {
      piVar5 = *(int **)(extraout_ECX + 0x20);
      piVar1 = piVar5 + *(int *)(extraout_ECX + 0x18) * 10;
      if (piVar5 < piVar1) {
        while (bVar4 = FUN_004bdb20(piVar5,iVar2,param_1[4],param_1[5]),
              CONCAT31(extraout_var,bVar4) == 0) {
          piVar5 = piVar5 + 10;
          if (piVar1 <= piVar5) {
            return;
          }
        }
        *(double *)(param_1 + 0x14) = dVar9;
        param_1[0xe] = 0x20000000;
        *(double *)(param_1 + 0x10) = dVar7 + dVar10;
        param_1[0x16] = piVar5[6];
        param_1[0x17] = piVar5[7];
      }
    }
  }
  return;
}


/* FUN_0046f990 @ 0046f990  kind=gamemisc  attributed-by=none  size=1866 */

void __cdecl FUN_0046f990(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  ushort *puVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ushort uVar12;
  uint uVar13;
  uint *puVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  int local_cc;
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
  undefined4 *local_1c;
  int *local_18;
  char local_13;
  char local_12;
  char local_11;
  int *local_10;
  char local_a;
  char local_9;
  uint local_8;
  
  local_68 = (int *)*param_1;
  local_1c = (undefined4 *)param_1[1];
  iVar7 = param_1[2];
  local_20 = *(int *)(iVar7 + 0x2c);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  local_88 = 0xffffffff;
  param_1[0x14] = -0x5d7860d2;
  param_1[0x15] = 0x547d42ae;
  local_18 = *(int **)(iVar7 + 0x44);
  local_38 = ((byte)~*(byte *)(iVar7 + 0x20) & 8) << 4 | 3;
  local_8c = local_38;
  local_7c = iVar7;
  local_10 = local_18;
  if (local_18 == (int *)0x0) {
    memset(&local_cc,0,0x30);
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
    local_10 = &local_cc;
    local_74 = 0xfff0ffff;
    local_38 = 3;
    local_18 = (int *)0x0;
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
  while (local_10 != (int *)0x0) {
    local_6c = (uint *)local_10[2];
    local_60._0_4_ = 0;
    uVar11 = (uint)local_60;
    uVar13 = 0;
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
    if (0 < local_10[9]) {
      do {
        uVar11 = local_8;
        piVar3 = FUN_00479c50(local_1c,local_20,*(int *)(local_10[1] + uVar13 * 4),param_1[4],
                              param_1[5],(ushort)local_38,(int)local_18);
        if (piVar3 == (int *)0x0) break;
        local_8 = uVar11 | 0x11000;
        uVar2 = local_60._4_4_;
        local_60 = CONCAT44(local_60._4_4_,uVar11) | 0x11000;
        if ((*(ushort *)(piVar3 + 4) & 1) == 0) {
          if ((char)*(ushort *)(piVar3 + 4) < '\0') {
            local_8 = uVar11 | 0x91000;
            local_60 = CONCAT44(uVar2,uVar11) | 0x91000;
          }
        }
        else {
          local_8 = uVar11 | 0x51000;
          local_60 = CONCAT44(uVar2,uVar11) | 0x51000;
          if ((*(ushort *)(*piVar3 + 2) & 0x800) == 0) {
            piVar4 = *(int **)(*piVar3 + 0x10);
            if ((piVar4 != (int *)0x0) && (iVar1 = *piVar4, iVar1 != 0)) {
              iVar7 = iVar7 * iVar1;
              local_70 = iVar7;
            }
          }
          else {
            iVar7 = iVar7 * 0x19;
            local_30 = 1;
            local_70 = iVar7;
          }
        }
        uVar12 = (short)uVar13 + 1;
        uVar13 = (uint)uVar12;
        local_40 = CONCAT44(local_40._4_4_ | piVar3[7],(uint)local_40 | piVar3[6]);
        local_60._0_6_ = CONCAT24(uVar12,(uint)local_60);
        uVar11 = local_8;
      } while ((int)uVar13 < local_10[9]);
    }
    piVar3 = local_18;
    uVar10 = uVar11;
    local_2c = uVar13;
    if ((uVar13 == local_10[9]) && ((char)local_10[0xb] != '\0')) {
      if ((uVar11 & 0xc0000) == 0) {
        uVar2 = local_60._4_4_;
        local_60 = CONCAT44(local_60._4_4_,uVar11) | 0x2000000;
        if ((param_1[0xb] == 0) ||
           (uVar10 = uVar11 | 0x2000000, local_8 = uVar11 | 0x2000000,
           (*(uint *)(param_1[0xb] * 0x58 + -0x58 + param_1[0xd]) & 0x4000000) != 0)) {
          local_60 = CONCAT44(uVar2,uVar11) | 0x6000000;
          uVar10 = uVar11 | 0x6000000;
          local_8 = uVar11 | 0x6000000;
        }
      }
    }
    else if (*(char *)((int)local_10 + 0x2e) == '\0') {
      if (uVar13 == local_10[9]) {
        iVar7 = -1;
      }
      else {
        iVar7 = *(int *)(local_10[1] + uVar13 * 4);
      }
      piVar4 = FUN_00479c50(local_1c,local_20,iVar7,param_1[4],param_1[5],0x3c,(int)local_18);
      if (piVar4 != (int *)0x0) {
        piVar3 = FUN_00479c50(local_1c,local_20,iVar7,param_1[4],param_1[5],0x18,(int)piVar3);
        piVar4 = FUN_00479c50(local_1c,local_20,iVar7,param_1[4],param_1[5],0x24,(int)local_18);
        dVar16 = 1.0;
        local_84 = 1.0;
        if (piVar4 != (int *)0x0) {
          dVar16 = 4.0;
          local_84 = 4.0;
        }
        uVar13 = local_40._4_4_;
        uVar10 = (uint)local_40;
        if (piVar3 != (int *)0x0) {
          uVar10 = (uint)local_40 | piVar3[6];
          local_84 = dVar16 * 4.0;
          uVar11 = uVar11 | 0x100000;
          uVar13 = local_40._4_4_ | piVar3[7];
          local_28 = 1;
          local_40 = CONCAT44(uVar13,uVar10);
        }
        if (piVar4 != (int *)0x0) {
          local_28 = local_28 + 1;
          uVar11 = uVar11 | 0x200000;
          local_40 = CONCAT44(uVar13 | piVar4[7],uVar10 | piVar4[6]);
        }
        uVar10 = uVar11 | 0x22000;
        local_60 = CONCAT44(local_60._4_4_,uVar11) | 0x22000;
        local_8 = uVar10;
      }
    }
    uVar11 = local_2c;
    if ((local_a != '\0') && ((*(byte *)(local_7c + 0x20) & 8) == 0)) {
      local_24 = 2;
      uVar13 = FUN_0047f1a0(param_1,local_10,local_20,&local_24);
      local_60 = CONCAT26((short)uVar13,(undefined6)local_60);
      if (((int)local_34 < (int)(uVar13 & 0xffff)) || (uVar8 = uVar10, (uVar10 & 0x4000000) != 0)) {
        uVar8 = uVar10 | 0x800000;
        local_60 = CONCAT44(local_60._4_4_,uVar10) | 0x800000;
        local_8 = uVar8;
      }
      uVar9 = uVar8;
      if (local_78 == (uVar13 & 0xffff)) {
        uVar9 = uVar8 | 0x22000;
        local_11 = '\0';
        local_60 = CONCAT44(local_60._4_4_,uVar8) | 0x22000;
        local_8 = uVar9;
      }
      uVar10 = uVar9;
      if ((local_24 & 1) != 0) {
        uVar10 = uVar9 | 0x1000000;
        local_60 = CONCAT44(local_60._4_4_,uVar9) | 0x1000000;
        local_8 = uVar10;
      }
    }
    uVar13 = uVar10;
    if (((local_9 != '\0') &&
        (iVar7 = FUN_0047ebd0(local_68,local_1c,local_10,local_20,(int *)param_1[9],uVar11),
        iVar7 != 0)) && ((uVar10 & 0x40000) == 0)) {
      uVar13 = uVar10 | 0x40022000;
      local_12 = '\0';
      local_60 = CONCAT44(local_60._4_4_,uVar10) | 0x40022000;
      local_8 = uVar13;
    }
    cVar6 = local_13;
    if (local_18 != (int *)0x0) {
      iVar7 = local_18[9];
      uVar11 = *(uint *)(local_7c + 0x38);
      local_64 = *(uint *)(local_7c + 0x3c);
      uVar10 = uVar13;
      if (0 < iVar7) {
        puVar14 = (uint *)local_18[1];
        do {
          uVar13 = *puVar14;
          if ((int)uVar13 < 0x3f) {
            uVar10 = 1 << (uVar13 & 0x1f);
            uVar8 = 0;
            if (0x1f < uVar13) {
              uVar8 = uVar10;
            }
            uVar10 = uVar10 ^ uVar8;
            if (0x3f < uVar13) {
              uVar8 = uVar10;
            }
            uVar11 = uVar11 & ~uVar10;
            local_64 = local_64 & ~uVar8;
          }
          puVar14 = puVar14 + 1;
          iVar7 = iVar7 + -1;
          uVar10 = local_8;
          local_24 = uVar11;
        } while (iVar7 != 0);
      }
      if (uVar11 == 0 && local_64 == 0) {
        uVar13 = uVar10 | 0x400000;
        local_60 = CONCAT44(local_60._4_4_,uVar10) | 0x400000;
        local_8 = uVar13;
      }
      else {
        uVar13 = uVar10;
        cVar6 = '\x01';
      }
    }
    uVar11 = local_6c[local_2c];
    dVar16 = (double)(int)(local_70 * uVar11) +
             *(double *)(&DAT_0055ac20 + ((int)(local_70 * uVar11) >> 0x1f) * -8);
    iVar7 = local_70;
    if ((local_30 != 0) &&
       (uVar10 = *local_6c,
       (double)(int)uVar10 + *(double *)(&DAT_0055ac20 + ((int)uVar10 >> 0x1f) * -8) < dVar16 * 2.0)
       ) {
      dVar16 = (double)(uVar10 >> 1) + 0.0;
      iVar7 = (int)(dVar16 / ((double)(int)uVar11 +
                             *(double *)(&DAT_0055ac20 + ((int)uVar11 >> 0x1f) * -8)));
    }
    dVar16 = dVar16 / local_84;
    if (dVar16 < 1.0) {
      dVar16 = 1.0;
    }
    if ((((uVar13 & 0xfe7fffff) == 0x400000) && ((*(byte *)((int)local_1c + 0x16) & 4) == 0)) &&
       ((DAT_00582ad8 != 0 && ((*(byte *)(*local_68 + 0x34) & 0x40) == 0)))) {
      iVar7 = *local_6c * 3 + local_10[9];
      uVar10 = uVar13 | 0x80020000;
      dVar19 = (double)iVar7 + *(double *)(&DAT_0055ac20 + (iVar7 >> 0x1f) * -8);
      local_60 = CONCAT44(local_60._4_4_,uVar13) | 0x80020000;
LAB_0046ff9e:
      uVar12 = local_60._6_2_;
      local_8 = uVar10;
    }
    else {
      uVar11 = *local_6c;
      if ((uVar13 & 0x100f3000) == 0) {
        uVar10 = uVar13 & 0xffbfffff;
        dVar19 = (double)(int)(uVar11 << 2) +
                 *(double *)(&DAT_0055ac20 + ((int)(uVar11 << 2) >> 0x1f) * -8);
        local_60 = CONCAT44(local_60._4_4_,uVar13) & 0xffffffffffbfffff;
        if (local_18 == (int *)0x0) goto LAB_0046ff9e;
        uVar10 = uVar13 & 0xff3fffff;
        local_60 = CONCAT26((ushort)local_34,(int6)CONCAT44(local_60._4_4_,uVar13)) &
                   0xffffffffff3fffff;
        uVar12 = (ushort)local_34;
        local_8 = uVar10;
      }
      else {
        dVar15 = 1.0;
        dVar19 = 10.0;
        if (10.0 < (double)(int)uVar11 + *(double *)(&DAT_0055ac20 + ((int)uVar11 >> 0x1f) * -8)) {
          do {
            dVar19 = dVar19 * 10.0;
            dVar15 = dVar15 + 1.0;
          } while (dVar19 < (double)(int)uVar11 +
                            *(double *)(&DAT_0055ac20 + ((int)uVar11 >> 0x1f) * -8));
        }
        dVar19 = (double)iVar7;
        if ((local_18 != (int *)0x0) && (cVar6 != '\0')) {
          dVar19 = dVar19 + dVar16;
        }
        dVar19 = dVar19 * dVar15 + dVar16;
        uVar10 = uVar13;
        uVar12 = local_60._6_2_;
      }
    }
    if (local_11 != '\0') {
      dVar17 = 1.0;
      dVar15 = 10.0;
      dVar18 = ((double)(int)(local_78 - uVar12) * dVar16) / (double)(int)local_78;
      if (10.0 < dVar18) {
        do {
          dVar15 = dVar15 * 10.0;
          dVar17 = dVar17 + 1.0;
        } while (dVar15 < dVar18);
      }
      dVar19 = (double)(byte)((local_60._6_2_ == 0) + 2) * dVar17 * dVar16 + dVar19;
      uVar12 = local_60._6_2_;
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
      uVar11 = 0;
      piVar3 = (int *)local_1c[1];
      iVar7 = *piVar3;
      if (0 < iVar7) {
        do {
          piVar3 = piVar3 + 1;
          if (*piVar3 == local_20) {
            uVar13 = 1 << (uVar11 & 0x1f);
            local_30 = 0;
            if (0x1f < uVar11) {
              local_30 = uVar13;
            }
            uVar13 = uVar13 ^ local_30;
            if (0x3f < uVar11) {
              local_30 = uVar13;
            }
            goto LAB_0047017b;
          }
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < iVar7);
      }
      local_94 = 0;
      local_94._0_4_ = 0;
      local_30 = 0;
      uVar13 = (uint)local_94;
LAB_0047017b:
      iVar7 = local_1c[6];
      puVar5 = (ushort *)(local_1c[8] + 0x10);
      do {
        if (iVar7 == 0) break;
        if ((((puVar5[1] & 2) == 0) && ((param_1[6] & *(uint *)(puVar5 + 8)) == uVar13)) &&
           ((param_1[7] & *(uint *)(puVar5 + 10)) == local_30)) {
          uVar12 = *puVar5;
          if ((uVar12 & 0x83) == 0) {
            if ((uVar12 & 0x3c) == 0) {
              if (uVar12 != 0x800) {
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
      uVar10 = local_8;
      uVar12 = local_60._6_2_;
      if (dVar16 < 2.0) {
        dVar16 = 2.0;
      }
    }
    if (((local_18 == (int *)0x0) || (uVar10 != 0)) &&
       ((dVar19 < *(double *)(param_1 + 0x14) ||
        ((dVar19 <= *(double *)(param_1 + 0x14) &&
         ((*(ushort *)((int)param_1 + 0x3e) < uVar12 || (dVar16 < *(double *)(param_1 + 0x10))))))))
       ) {
      *(ulonglong *)(param_1 + 0xe) = local_60;
      *(double *)(param_1 + 0x10) = dVar16;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      *(double *)(param_1 + 0x14) = dVar19;
      *(undefined8 *)(param_1 + 0x16) = local_40;
      param_1[0xe] = param_1[0xe] & local_74;
      param_1[0x12] = (int)local_18;
    }
    if (*(int *)(local_7c + 0x44) != 0) break;
    local_18 = (int *)local_10[5];
    local_74 = 0xffffcfff;
    local_38 = local_8c;
    local_10 = local_18;
  }
  uVar11 = local_38;
  if ((param_1[8] == 0) && ((*(uint *)(*local_68 + 0x18) & 0x10000) != 0)) {
    param_1[0xe] = param_1[0xe] | 0x1000000;
  }
  FUN_00470360(param_1);
  FUN_0046f880(param_1);
  param_1[0xe] = param_1[0xe] | uVar11;
  return;
}


/* FUN_004700da @ 004700da  kind=gamemisc  attributed-by=none  size=537 */

void FUN_004700da(void)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  ushort *puVar9;
  char unaff_BL;
  int iVar10;
  int unaff_EBP;
  uint uVar11;
  uint unaff_ESI;
  ushort uVar12;
  int unaff_EDI;
  int iVar13;
  double in_XMM0_Qa;
  double dVar14;
  double in_XMM1_Qa;
  double in_XMM2_Qa;
  double dVar15;
  double in_XMM3_Qa;
  double dVar16;
  double in_XMM6_Qa;
  double in_XMM7_Qa;
  
LAB_004700e0:
  do {
    in_XMM0_Qa = in_XMM0_Qa * in_XMM6_Qa;
    in_XMM1_Qa = in_XMM1_Qa + in_XMM7_Qa;
    uVar6 = unaff_ESI;
  } while (in_XMM0_Qa < in_XMM3_Qa);
LAB_004700ee:
  uVar12 = *(ushort *)(unaff_EBP + -0x56);
  dVar16 = (double)unaff_EDI;
  if ((*(int *)(unaff_EBP + -0x14) != 0) && (unaff_BL != '\0')) {
    dVar16 = dVar16 + in_XMM2_Qa;
  }
  dVar16 = dVar16 * in_XMM1_Qa + in_XMM2_Qa;
  do {
    if (*(char *)(unaff_EBP + -0xd) != '\0') {
      dVar15 = in_XMM7_Qa;
      for (dVar14 = in_XMM6_Qa;
          dVar14 < ((double)(int)(*(int *)(unaff_EBP + -0x74) - (uint)uVar12) * in_XMM2_Qa) /
                   (double)*(int *)(unaff_EBP + -0x74); dVar14 = dVar14 * in_XMM6_Qa) {
        dVar15 = dVar15 + in_XMM7_Qa;
      }
      uVar12 = *(ushort *)(unaff_EBP + -0x56);
      dVar16 = (double)(byte)((uVar12 == 0) + 2) * dVar15 * in_XMM2_Qa + dVar16;
    }
    dVar14 = in_XMM6_Qa;
    dVar15 = in_XMM7_Qa;
    if (*(char *)(unaff_EBP + -0xe) != '\0') {
      for (; dVar14 < in_XMM2_Qa; dVar14 = dVar14 * in_XMM6_Qa) {
        dVar15 = dVar15 + in_XMM7_Qa;
      }
      dVar16 = dVar16 + dVar15 * in_XMM2_Qa * 3.0;
    }
    piVar4 = *(int **)(unaff_EBP + 8);
    if ((2.0 < in_XMM2_Qa) && (dVar16 <= *(double *)(piVar4 + 0x14))) {
      iVar10 = *(int *)(unaff_EBP + -0x18);
      uVar6 = 0;
      piVar4 = *(int **)(iVar10 + 4);
      iVar13 = *piVar4;
      if (0 < iVar13) {
        do {
          piVar4 = piVar4 + 1;
          if (*piVar4 == *(int *)(unaff_EBP + -0x1c)) {
            uVar11 = 1 << (uVar6 & 0x1f);
            uVar5 = 0;
            if (0x1f < uVar6) {
              uVar5 = uVar11;
            }
            uVar11 = uVar11 ^ uVar5;
            if (0x3f < uVar6) {
              uVar5 = uVar11;
            }
            *(uint *)(unaff_EBP + -0x2c) = uVar5;
            goto LAB_0047017b;
          }
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < iVar13);
      }
      *(undefined8 *)(unaff_EBP + -0x90) = 0;
      uVar11 = *(uint *)(unaff_EBP + -0x90);
      *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x8c);
LAB_0047017b:
      iVar13 = *(int *)(iVar10 + 0x18);
      puVar9 = (ushort *)(*(int *)(iVar10 + 0x20) + 0x10);
      do {
        if (iVar13 == 0) break;
        if ((((puVar9[1] & 2) == 0) &&
            ((*(uint *)(*(int *)(unaff_EBP + 8) + 0x18) & *(uint *)(puVar9 + 8)) == uVar11)) &&
           ((*(uint *)(*(int *)(unaff_EBP + 8) + 0x1c) & *(uint *)(puVar9 + 10)) ==
            *(uint *)(unaff_EBP + -0x2c))) {
          uVar12 = *puVar9;
          if ((uVar12 & 0x83) == 0) {
            if ((uVar12 & 0x3c) == 0) {
              if (uVar12 != 0x800) {
                in_XMM2_Qa = in_XMM2_Qa * 0.5;
              }
            }
            else if (*(int *)(unaff_EBP + -0x24) == 0) {
              in_XMM2_Qa = in_XMM2_Qa / 3.0;
            }
            else {
              *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + -1;
            }
          }
          else if (*(int *)(unaff_EBP + -0x28) == 0) {
            in_XMM2_Qa = in_XMM2_Qa / in_XMM6_Qa;
          }
          else {
            *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x28) + -1;
          }
        }
        iVar13 = iVar13 + -1;
        puVar9 = puVar9 + 0x14;
      } while (2.0 < in_XMM2_Qa);
      uVar6 = *(uint *)(unaff_EBP + -4);
      piVar4 = *(int **)(unaff_EBP + 8);
      uVar12 = *(ushort *)(unaff_EBP + -0x56);
      if (in_XMM2_Qa < 2.0) {
        in_XMM2_Qa = 2.0;
      }
    }
    iVar10 = *(int *)(unaff_EBP + -0x14);
    if (((iVar10 == 0) || (uVar6 != 0)) &&
       ((dVar16 < *(double *)(piVar4 + 0x14) ||
        ((dVar16 <= *(double *)(piVar4 + 0x14) &&
         ((*(ushort *)((int)piVar4 + 0x3e) < uVar12 || (in_XMM2_Qa < *(double *)(piVar4 + 0x10))))))
        ))) {
      uVar6 = *(uint *)(unaff_EBP + -0x70);
      *(undefined8 *)(piVar4 + 0xe) = *(undefined8 *)(unaff_EBP + -0x5c);
      *(double *)(piVar4 + 0x10) = in_XMM2_Qa;
      piVar4[0x12] = 0;
      piVar4[0x13] = 0;
      uVar1 = *(undefined8 *)(unaff_EBP + -0x3c);
      *(double *)(piVar4 + 0x14) = dVar16;
      *(undefined8 *)(piVar4 + 0x16) = uVar1;
      piVar4[0xe] = piVar4[0xe] & uVar6;
      piVar4[0x12] = iVar10;
    }
    if (*(int *)(*(int *)(unaff_EBP + -0x78) + 0x44) != 0) {
      uVar6 = *(uint *)(unaff_EBP + -0x34);
LAB_004702bc:
      if ((piVar4[8] == 0) && ((*(uint *)(**(int **)(unaff_EBP + -100) + 0x18) & 0x10000) != 0)) {
        piVar4[0xe] = piVar4[0xe] | 0x1000000;
      }
      FUN_00470360(piVar4);
      piVar4 = *(int **)(unaff_EBP + 8);
      FUN_0046f880(piVar4);
      puVar8 = (uint *)(piVar4 + 0xe);
      *puVar8 = *puVar8 | uVar6;
      return;
    }
    uVar6 = *(uint *)(unaff_EBP + -0x88);
    piVar3 = *(int **)(*(int *)(unaff_EBP + -0xc) + 0x14);
    *(undefined4 *)(unaff_EBP + -0x70) = 0xffffcfff;
    *(uint *)(unaff_EBP + -0x34) = uVar6;
    *(int **)(unaff_EBP + -0xc) = piVar3;
    *(int **)(unaff_EBP + -0x14) = piVar3;
    if (piVar3 == (int *)0x0) goto LAB_004702bc;
    *(int *)(unaff_EBP + -0x68) = piVar3[2];
    *(undefined1 *)(unaff_EBP + -0xd) = *(undefined1 *)(unaff_EBP + -6);
    *(undefined1 *)(unaff_EBP + -0xe) = *(undefined1 *)(unaff_EBP + -5);
    *(undefined8 *)(unaff_EBP + -0x5c) = 0;
    unaff_ESI = *(uint *)(unaff_EBP + -0x5c);
    uVar6 = 0;
    iVar10 = 1;
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    *(undefined4 *)(unaff_EBP + -0x6c) = 1;
    *(double *)(unaff_EBP + -0x80) = in_XMM7_Qa;
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    *(undefined1 *)(unaff_EBP + -0xf) = 0;
    *(undefined8 *)(unaff_EBP + -0x54) = 0;
    *(undefined8 *)(unaff_EBP + -0x44) = 0;
    *(undefined8 *)(unaff_EBP + -0x3c) = 0;
    *(short *)(unaff_EBP + -0x56) = (short)*(undefined4 *)(unaff_EBP + -0x30);
    *(undefined2 *)(unaff_EBP + -0x58) = 0;
    *(uint *)(unaff_EBP + -4) = unaff_ESI;
    if (0 < piVar3[9]) {
      iVar13 = *(int *)(unaff_EBP + -0xc);
      uVar11 = unaff_ESI;
      do {
        piVar3 = FUN_00479c50(*(undefined4 **)(unaff_EBP + -0x18),*(int *)(unaff_EBP + -0x1c),
                              *(int *)(*(int *)(iVar13 + 4) + uVar6 * 4),piVar4[4],piVar4[5],
                              (ushort)*(undefined4 *)(unaff_EBP + -0x34),*(int *)(unaff_EBP + -0x14)
                             );
        if (piVar3 == (int *)0x0) {
          piVar4 = *(int **)(unaff_EBP + 8);
          unaff_ESI = uVar11;
          break;
        }
        uVar12 = *(ushort *)(piVar3 + 4);
        unaff_ESI = uVar11 | 0x11000;
        *(uint *)(unaff_EBP + -4) = unaff_ESI;
        *(uint *)(unaff_EBP + -0x5c) = unaff_ESI;
        if ((uVar12 & 1) == 0) {
          if ((char)uVar12 < '\0') {
            unaff_ESI = uVar11 | 0x91000;
            *(uint *)(unaff_EBP + -4) = unaff_ESI;
            *(uint *)(unaff_EBP + -0x5c) = unaff_ESI;
          }
        }
        else {
          iVar13 = *piVar3;
          unaff_ESI = uVar11 | 0x51000;
          *(uint *)(unaff_EBP + -4) = unaff_ESI;
          *(uint *)(unaff_EBP + -0x5c) = unaff_ESI;
          if ((*(ushort *)(iVar13 + 2) & 0x800) == 0) {
            piVar4 = *(int **)(iVar13 + 0x10);
            if ((piVar4 != (int *)0x0) && (iVar13 = *piVar4, iVar13 != 0)) {
              iVar10 = iVar10 * iVar13;
              *(int *)(unaff_EBP + -0x6c) = iVar10;
            }
          }
          else {
            iVar10 = iVar10 * 0x19;
            *(int *)(unaff_EBP + -0x6c) = iVar10;
            *(undefined4 *)(unaff_EBP + -0x2c) = 1;
          }
        }
        piVar4 = *(int **)(unaff_EBP + 8);
        *(uint *)(unaff_EBP + -0x3c) = *(uint *)(unaff_EBP + -0x3c) | piVar3[6];
        uVar12 = (short)uVar6 + 1;
        uVar6 = (uint)uVar12;
        *(uint *)(unaff_EBP + -0x38) = *(uint *)(unaff_EBP + -0x38) | piVar3[7];
        iVar13 = *(int *)(unaff_EBP + -0xc);
        *(ushort *)(unaff_EBP + -0x58) = uVar12;
        uVar11 = unaff_ESI;
      } while ((int)uVar6 < *(int *)(iVar13 + 0x24));
      piVar3 = *(int **)(unaff_EBP + -0xc);
    }
    uVar11 = piVar3[9];
    *(uint *)(unaff_EBP + -0x28) = uVar6;
    if ((uVar6 == uVar11) && ((char)piVar3[0xb] != '\0')) {
      if ((unaff_ESI & 0xc0000) == 0) {
        iVar10 = piVar4[0xb];
        uVar11 = unaff_ESI | 0x2000000;
        *(uint *)(unaff_EBP + -4) = uVar11;
        *(uint *)(unaff_EBP + -0x5c) = uVar11;
        if ((iVar10 == 0) || ((*(uint *)(iVar10 * 0x58 + -0x58 + piVar4[0xd]) & 0x4000000) != 0)) {
          uVar11 = unaff_ESI | 0x6000000;
          *(uint *)(unaff_EBP + -4) = uVar11;
          *(uint *)(unaff_EBP + -0x5c) = uVar11;
        }
LAB_0046fd73:
        piVar3 = *(int **)(unaff_EBP + -0xc);
        unaff_ESI = uVar11;
      }
    }
    else if (*(char *)((int)piVar3 + 0x2e) == '\0') {
      if (uVar6 == uVar11) {
        iVar10 = -1;
      }
      else {
        iVar10 = *(int *)(piVar3[1] + uVar6 * 4);
      }
      iVar13 = *(int *)(unaff_EBP + -0x14);
      piVar4 = FUN_00479c50(*(undefined4 **)(unaff_EBP + -0x18),*(int *)(unaff_EBP + -0x1c),iVar10,
                            piVar4[4],piVar4[5],0x3c,iVar13);
      if (piVar4 != (int *)0x0) {
        piVar4 = FUN_00479c50(*(undefined4 **)(unaff_EBP + -0x18),*(int *)(unaff_EBP + -0x1c),iVar10
                              ,*(uint *)(*(int *)(unaff_EBP + 8) + 0x10),
                              *(uint *)(*(int *)(unaff_EBP + 8) + 0x14),0x18,iVar13);
        piVar3 = FUN_00479c50(*(undefined4 **)(unaff_EBP + -0x18),*(int *)(unaff_EBP + -0x1c),iVar10
                              ,*(uint *)(*(int *)(unaff_EBP + 8) + 0x10),
                              *(uint *)(*(int *)(unaff_EBP + 8) + 0x14),0x24,
                              *(int *)(unaff_EBP + -0x14));
        dVar16 = 1.0;
        *(undefined8 *)(unaff_EBP + -0x80) = 0x3ff0000000000000;
        if (piVar3 != (int *)0x0) {
          dVar16 = 4.0;
          *(undefined8 *)(unaff_EBP + -0x80) = 0x4010000000000000;
        }
        uVar6 = *(uint *)(unaff_EBP + -0x3c);
        uVar11 = *(uint *)(unaff_EBP + -0x38);
        if (piVar4 == (int *)0x0) {
          iVar10 = *(int *)(unaff_EBP + -0x24);
        }
        else {
          uVar6 = uVar6 | piVar4[6];
          unaff_ESI = unaff_ESI | 0x100000;
          uVar11 = uVar11 | piVar4[7];
          iVar10 = 1;
          *(double *)(unaff_EBP + -0x80) = dVar16 * 4.0;
          *(undefined4 *)(unaff_EBP + -0x24) = 1;
          *(uint *)(unaff_EBP + -0x3c) = uVar6;
          *(uint *)(unaff_EBP + -0x38) = uVar11;
        }
        if (piVar3 != (int *)0x0) {
          uVar5 = piVar3[6];
          unaff_ESI = unaff_ESI | 0x200000;
          uVar7 = piVar3[7];
          *(int *)(unaff_EBP + -0x24) = iVar10 + 1;
          *(uint *)(unaff_EBP + -0x3c) = uVar6 | uVar5;
          *(uint *)(unaff_EBP + -0x38) = uVar11 | uVar7;
        }
        unaff_ESI = unaff_ESI | 0x22000;
        *(uint *)(unaff_EBP + -4) = unaff_ESI;
        *(uint *)(unaff_EBP + -0x5c) = unaff_ESI;
      }
      uVar6 = *(uint *)(unaff_EBP + -0x28);
      uVar11 = unaff_ESI;
      goto LAB_0046fd73;
    }
    puVar2 = *(undefined4 **)(unaff_EBP + 8);
    if ((*(char *)(unaff_EBP + -6) != '\0') &&
       ((*(byte *)(*(int *)(unaff_EBP + -0x78) + 0x20) & 8) == 0)) {
      *(undefined4 *)(unaff_EBP + -0x20) = 2;
      uVar11 = FUN_0047f1a0(puVar2,piVar3,*(int *)(unaff_EBP + -0x1c),(uint *)(unaff_EBP + -0x20));
      *(short *)(unaff_EBP + -0x56) = (short)uVar11;
      if ((*(int *)(unaff_EBP + -0x30) < (int)(uVar11 & 0xffff)) || ((unaff_ESI & 0x4000000) != 0))
      {
        unaff_ESI = unaff_ESI | 0x800000;
        *(uint *)(unaff_EBP + -4) = unaff_ESI;
        *(uint *)(unaff_EBP + -0x5c) = unaff_ESI;
      }
      if (*(uint *)(unaff_EBP + -0x74) == (uVar11 & 0xffff)) {
        unaff_ESI = unaff_ESI | 0x22000;
        *(undefined1 *)(unaff_EBP + -0xd) = 0;
        *(uint *)(unaff_EBP + -4) = unaff_ESI;
        *(uint *)(unaff_EBP + -0x5c) = unaff_ESI;
      }
      if ((*(byte *)(unaff_EBP + -0x20) & 1) != 0) {
        unaff_ESI = unaff_ESI | 0x1000000;
        *(uint *)(unaff_EBP + -4) = unaff_ESI;
        *(uint *)(unaff_EBP + -0x5c) = unaff_ESI;
      }
    }
    if (((*(char *)(unaff_EBP + -5) != '\0') &&
        (iVar10 = FUN_0047ebd0(*(int **)(unaff_EBP + -100),*(undefined4 **)(unaff_EBP + -0x18),
                               *(int **)(unaff_EBP + -0xc),*(int *)(unaff_EBP + -0x1c),
                               (int *)puVar2[9],uVar6), iVar10 != 0)) &&
       ((unaff_ESI & 0x40000) == 0)) {
      unaff_ESI = unaff_ESI | 0x40022000;
      *(undefined1 *)(unaff_EBP + -0xe) = 0;
      *(uint *)(unaff_EBP + -4) = unaff_ESI;
      *(uint *)(unaff_EBP + -0x5c) = unaff_ESI;
    }
    iVar10 = *(int *)(unaff_EBP + -0x14);
    if (iVar10 == 0) {
LAB_0046fe92:
      unaff_BL = *(char *)(unaff_EBP + -0xf);
    }
    else {
      iVar13 = *(int *)(iVar10 + 0x24);
      uVar6 = *(uint *)(*(int *)(unaff_EBP + -0x78) + 0x38);
      uVar11 = *(uint *)(*(int *)(unaff_EBP + -0x78) + 0x3c);
      *(uint *)(unaff_EBP + -0x60) = uVar11;
      if (0 < iVar13) {
        puVar8 = *(uint **)(iVar10 + 4);
        do {
          uVar11 = *puVar8;
          if ((int)uVar11 < 0x3f) {
            uVar5 = 1 << (uVar11 & 0x1f);
            uVar7 = 0;
            if (0x1f < uVar11) {
              uVar7 = uVar5;
            }
            uVar5 = uVar5 ^ uVar7;
            if (0x3f < uVar11) {
              uVar7 = uVar5;
            }
            uVar6 = uVar6 & ~uVar5;
            uVar11 = *(uint *)(unaff_EBP + -0x60) & ~uVar7;
            *(uint *)(unaff_EBP + -0x60) = uVar11;
          }
          else {
            uVar11 = *(uint *)(unaff_EBP + -0x60);
          }
          puVar8 = puVar8 + 1;
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
        *(uint *)(unaff_EBP + -0x20) = uVar6;
        unaff_ESI = *(uint *)(unaff_EBP + -4);
        uVar6 = *(uint *)(unaff_EBP + -0x20);
      }
      if (uVar6 == 0 && uVar11 == 0) {
        unaff_ESI = unaff_ESI | 0x400000;
        *(uint *)(unaff_EBP + -4) = unaff_ESI;
        *(uint *)(unaff_EBP + -0x5c) = unaff_ESI;
        goto LAB_0046fe92;
      }
      unaff_BL = '\x01';
    }
    puVar8 = *(uint **)(unaff_EBP + -0x68);
    unaff_EDI = *(int *)(unaff_EBP + -0x6c);
    uVar6 = puVar8[*(int *)(unaff_EBP + -0x28)];
    dVar16 = (double)(int)(unaff_EDI * uVar6) +
             *(double *)(&DAT_0055ac20 + ((int)(unaff_EDI * uVar6) >> 0x1f) * -8);
    if (*(int *)(unaff_EBP + -0x2c) != 0) {
      uVar11 = *puVar8;
      if ((double)(int)uVar11 + *(double *)(&DAT_0055ac20 + ((int)uVar11 >> 0x1f) * -8) <
          dVar16 * 2.0) {
        dVar16 = (double)(uVar11 >> 1) + 0.0;
        unaff_EDI = (int)(dVar16 / ((double)(int)uVar6 +
                                   *(double *)(&DAT_0055ac20 + ((int)uVar6 >> 0x1f) * -8)));
      }
      puVar8 = *(uint **)(unaff_EBP + -0x68);
    }
    in_XMM2_Qa = dVar16 / *(double *)(unaff_EBP + -0x80);
    in_XMM7_Qa = 1.0;
    if (in_XMM2_Qa < 1.0) {
      in_XMM2_Qa = 1.0;
    }
    if ((((unaff_ESI & 0xfe7fffff) == 0x400000) &&
        ((*(byte *)(*(int *)(unaff_EBP + -0x18) + 0x16) & 4) == 0)) &&
       ((DAT_00582ad8 != 0 && ((*(byte *)(**(int **)(unaff_EBP + -100) + 0x34) & 0x40) == 0)))) {
      iVar10 = *puVar8 * 3 + *(int *)(*(int *)(unaff_EBP + -0xc) + 0x24);
      uVar6 = unaff_ESI | 0x80020000;
      dVar16 = (double)iVar10 + *(double *)(&DAT_0055ac20 + (iVar10 >> 0x1f) * -8);
      *(uint *)(unaff_EBP + -4) = uVar6;
      *(uint *)(unaff_EBP + -0x5c) = uVar6;
LAB_0046ff9e:
      uVar12 = *(ushort *)(unaff_EBP + -0x56);
    }
    else {
      uVar11 = *puVar8;
      if ((unaff_ESI & 0x100f3000) != 0) break;
      uVar6 = unaff_ESI & 0xffbfffff;
      dVar16 = (double)(int)(uVar11 << 2) +
               *(double *)(&DAT_0055ac20 + ((int)(uVar11 << 2) >> 0x1f) * -8);
      *(uint *)(unaff_EBP + -4) = uVar6;
      *(uint *)(unaff_EBP + -0x5c) = uVar6;
      if (*(int *)(unaff_EBP + -0x14) == 0) goto LAB_0046ff9e;
      uVar12 = *(ushort *)(unaff_EBP + -0x30);
      uVar6 = unaff_ESI & 0xff3fffff;
      *(uint *)(unaff_EBP + -4) = uVar6;
      *(uint *)(unaff_EBP + -0x5c) = uVar6;
      *(ushort *)(unaff_EBP + -0x56) = uVar12;
    }
    in_XMM6_Qa = 10.0;
  } while( true );
  in_XMM6_Qa = 10.0;
  in_XMM1_Qa = 1.0;
  in_XMM3_Qa = (double)(int)uVar11 + *(double *)(&DAT_0055ac20 + ((int)uVar11 >> 0x1f) * -8);
  in_XMM0_Qa = 10.0;
  uVar6 = unaff_ESI;
  if (10.0 < in_XMM3_Qa) goto LAB_004700e0;
  goto LAB_004700ee;
}


/* FUN_00470300 @ 00470300  kind=gamemisc  attributed-by=none  size=91 */

void __cdecl FUN_00470300(int *param_1)

{
  int *piVar1;
  
  piVar1 = param_1;
  if ((*(byte *)(*(int *)(param_1[2] + 0x10) + 0x2a) & 0x10) != 0) {
    param_1 = (int *)0x0;
    piVar1[10] = (int)&param_1;
    FUN_004706c0(piVar1);
    if (param_1[7] != 0) {
      FUN_00466dd0(param_1[6]);
    }
    FUN_00494b00(*(int *)*piVar1,param_1);
    return;
  }
  FUN_0046f990(param_1);
  return;
}


/* FUN_00470360 @ 00470360  kind=gamemisc  attributed-by=none  size=858 */

void __cdecl FUN_00470360(int *param_1)

{
  int iVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  int local_208;
  undefined4 *local_204;
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
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_198 = (undefined4 *)param_1[1];
  local_194 = *(int *)(param_1[2] + 0x2c);
  piVar6 = (int *)local_198[1];
  uVar3 = 0;
  iVar1 = *piVar6;
  if (0 < iVar1) {
    do {
      piVar6 = piVar6 + 1;
      if (*piVar6 == local_194) {
        local_178 = 1 << (uVar3 & 0x1f);
        local_174 = 0;
        if (0x1f < uVar3) {
          local_174 = local_178;
        }
        local_178 = local_178 ^ local_174;
        if (0x3f < uVar3) {
          local_174 = local_178;
        }
        goto LAB_004703c7;
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < iVar1);
  }
  local_180 = 0;
  local_180._4_4_ = 0;
  local_180._0_4_ = 0;
  local_178 = (uint)local_180;
  local_174 = local_180._4_4_;
LAB_004703c7:
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
        piVar6 = param_1;
        piVar8 = &local_208;
        for (iVar5 = 0x18; iVar5 != 0; iVar5 = iVar5 + -1) {
          *piVar8 = *piVar6;
          piVar6 = piVar6 + 1;
          piVar8 = piVar8 + 1;
        }
        local_1e8 = 0;
        local_1e4 = 0;
        local_1e0 = 0;
        uVar7 = *(uint *)(iVar1 + 0x20);
        local_180 = 0;
        local_180._4_4_ = 0;
        dVar10 = 0.0;
        dVar11 = 0.0;
        local_180._0_4_ = 0;
        local_1a8 = 0.0;
        local_1a0 = 0.0;
        uVar4 = (uint)local_180;
        uVar9 = local_180._4_4_;
        local_18c = uVar3;
        if (uVar7 < uVar3) {
          local_188 = 0;
          do {
            if (*(short *)(uVar7 + 0x10) == 0x200) {
              local_204 = *(undefined4 **)(uVar7 + 0xc);
LAB_0047057c:
              FUN_00470300(&local_208);
              dVar10 = local_1b8 + local_1a8;
              uVar4 = local_188 | local_1b0;
              uVar9 = uVar9 | local_1ac;
              dVar11 = local_1c8 + local_1a0;
              uVar3 = local_18c;
              local_1a8 = dVar10;
              local_1a0 = dVar11;
              local_188 = uVar4;
              if (*(double *)(param_1 + 0x14) <= dVar10) break;
            }
            else if (*(int *)(uVar7 + 8) == local_194) {
              local_160 = local_198;
              local_170 = *local_198;
              local_16c = local_198[1];
              local_15a = 0;
              local_15c = 0x45;
              local_158 = 1;
              local_204 = &local_170;
              local_150 = uVar7;
              goto LAB_0047057c;
            }
            uVar7 = uVar7 + 0x28;
          } while (uVar7 < uVar3);
        }
        if (param_1[8] != 0) {
          dVar12 = 1.0;
          dVar13 = 10.0;
          if (10.0 < dVar11) {
            do {
              dVar13 = dVar13 * 10.0;
              dVar12 = dVar12 + 1.0;
            } while (dVar13 < dVar11);
          }
          dVar10 = dVar10 + dVar12 * dVar11;
        }
        if (dVar10 < *(double *)(param_1 + 0x14)) {
          *(double *)(param_1 + 0x14) = dVar10;
          param_1[0x16] = uVar4;
          param_1[0x17] = uVar9;
          *(double *)(param_1 + 0x10) = dVar11;
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


/* FUN_004706c0 @ 004706c0  kind=gamemisc  attributed-by=none  size=543 */

void __cdecl FUN_004706c0(int *param_1)

{
  int iVar1;
  void *_Dst;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  int local_c;
  
  piVar7 = (int *)*param_1;
  iVar1 = param_1[1];
  iVar6 = *(int *)(param_1[2] + 0x10);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0xe] = 0x8000000;
  piVar5 = *(int **)param_1[10];
  if (piVar5 == (int *)0x0) {
    piVar5 = FUN_0046c340(param_1);
    *(int **)param_1[10] = piVar5;
    if (piVar5 == (int *)0x0) {
      return;
    }
  }
  _Dst = (void *)piVar5[4];
  local_c = 0;
  if (0 < *piVar5) {
    iVar8 = piVar5[1] + 5;
    do {
      iVar2 = *(int *)(iVar1 + 0x20);
      *(bool *)iVar8 =
           (*(uint *)(iVar2 + 0x18 + *(int *)(iVar8 + 3) * 0x28) & param_1[4]) == 0 &&
           (*(uint *)(iVar2 + 0x1c + *(int *)(iVar8 + 3) * 0x28) & param_1[5]) == 0;
      local_c = local_c + 1;
      iVar8 = iVar8 + 0xc;
    } while (local_c < *piVar5);
  }
  memset(_Dst,0,*piVar5 << 3);
  if (piVar5[7] != 0) {
    FUN_00466dd0(piVar5[6]);
  }
  iVar8 = piVar5[2];
  piVar5[6] = 0;
  piVar5[5] = 0;
  piVar5[7] = 0;
  piVar5[8] = 0;
  piVar5[10] = -0x5d7860d2;
  piVar5[0xb] = 0x546d42ae;
  if (param_1[8] == 0) {
    piVar5[2] = 0;
  }
  iVar6 = FUN_004bfde0(piVar7,iVar6,piVar5);
  if (iVar6 == 0) {
    iVar6 = 0;
    if (0 < *piVar5) {
      piVar7 = (int *)(piVar5[1] + 8);
      do {
        if (0 < *(int *)((int)_Dst + iVar6 * 8)) {
          iVar2 = *piVar7;
          iVar3 = *(int *)(iVar1 + 0x20);
          param_1[0x16] = param_1[0x16] | *(uint *)(iVar3 + 0x18 + iVar2 * 0x28);
          param_1[0x17] = param_1[0x17] | *(uint *)(iVar3 + 0x1c + iVar2 * 0x28);
        }
        iVar6 = iVar6 + 1;
        piVar7 = piVar7 + 3;
      } while (iVar6 < *piVar5);
    }
    dVar11 = *(double *)(piVar5 + 10);
    if ((param_1[8] != 0) && (piVar5[8] == 0)) {
      dVar9 = 1.0;
      dVar10 = 10.0;
      if (10.0 < dVar11) {
        do {
          dVar10 = dVar10 * 10.0;
          dVar9 = dVar9 + 1.0;
        } while (dVar10 < dVar11);
      }
      dVar11 = dVar11 + dVar9 * dVar11;
    }
    if (dVar11 <= 5e+98) {
      *(double *)(param_1 + 0x14) = dVar11;
    }
    else {
      param_1[0x14] = -0x5d7860d2;
      param_1[0x15] = 0x546d42ae;
    }
    param_1[0x12] = (int)piVar5;
    if (piVar5[8] == 0) {
      if (param_1[0xb] == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined2 *)(param_1[0xb] * 0x58 + -0x52 + param_1[0xd]);
      }
      *(undefined2 *)((int)param_1 + 0x3e) = uVar4;
    }
    else {
      param_1[0xe] = param_1[0xe] | 0x800000;
      *(short *)((int)param_1 + 0x3e) = (short)iVar8;
    }
    *(undefined2 *)(param_1 + 0xf) = 0;
    piVar5[2] = iVar8;
    FUN_00470360(param_1);
  }
  return;
}


/* FUN_004708e0 @ 004708e0  kind=gamemisc  attributed-by=none  size=191 */

uint __cdecl FUN_004708e0(int param_1,uint param_2,byte *param_3,uint param_4,byte *param_5)

{
  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  undefined3 extraout_var;
  uint uVar5;
  uint extraout_EDX;
  uint uVar6;
  bool bVar7;
  
  pbVar2 = param_3;
  pbVar3 = param_5;
  uVar5 = param_4;
  uVar6 = param_4;
  if ((int)param_2 < (int)param_4) {
    uVar5 = param_2;
    uVar6 = param_2;
  }
  while (uVar1 = uVar5 - 4, 3 < uVar5) {
    if (*(int *)pbVar2 != *(int *)pbVar3) goto LAB_00470916;
    pbVar2 = pbVar2 + 4;
    pbVar3 = pbVar3 + 4;
    uVar5 = uVar1;
  }
  if (uVar1 != 0xfffffffc) {
LAB_00470916:
    bVar7 = *pbVar2 < *pbVar3;
    if ((*pbVar2 != *pbVar3) ||
       ((uVar1 != 0xfffffffd &&
        ((bVar7 = pbVar2[1] < pbVar3[1], pbVar2[1] != pbVar3[1] ||
         ((uVar1 != 0xfffffffe &&
          ((bVar7 = pbVar2[2] < pbVar3[2], pbVar2[2] != pbVar3[2] ||
           ((uVar1 != 0xffffffff && (bVar7 = pbVar2[3] < pbVar3[3], pbVar2[3] != pbVar3[3]))))))))))
       )) {
      uVar5 = -(uint)bVar7 | 1;
      goto LAB_0047094c;
    }
  }
  uVar5 = 0;
LAB_0047094c:
  if (uVar5 != 0) {
    return uVar5;
  }
  if (param_1 != 0) {
    for (iVar4 = param_2 - uVar6; (0 < iVar4 && (param_3[iVar4 + (uVar6 - 1)] == 0x20));
        iVar4 = iVar4 + -1) {
    }
    if ((iVar4 == 0) &&
       (bVar7 = FUN_0046bab0((int)(param_5 + uVar6),param_4 - uVar6),
       CONCAT31(extraout_var,bVar7) != 0)) {
      return extraout_EDX;
    }
  }
  return param_2 - param_4;
}


/* FUN_00470aa0 @ 00470aa0  kind=gamemisc  attributed-by=none  size=256 */

uint __cdecl FUN_00470aa0(int param_1,undefined4 param_2,int param_3,int param_4,undefined *param_5)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    FUN_004683f0(0x15,"misuse at line %d of [%.10s]");
    return 0x15;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (*(int *)(iVar1 + 0xc) != 0) {
    (*DAT_00582b18)(*(int *)(iVar1 + 0xc));
  }
  piVar2 = *(int **)(param_1 + 0x14);
  if (((param_3 < 0) || (param_4 < 0)) || (*(int *)(param_1 + 4) < param_4 + param_3)) {
    uVar4 = 1;
    FUN_004961f0(iVar1,1,(byte *)0x0);
  }
  else if (piVar2 == (int *)0x0) {
    uVar4 = 4;
  }
  else {
    FUN_0048fbc0((undefined4 *)**(undefined4 **)(param_1 + 0x10));
    uVar4 = (*(code *)param_5)(*(undefined4 *)(param_1 + 0x10),*(int *)(param_1 + 8) + param_4,
                               param_3,param_2);
    FUN_004907e0(*(int **)(param_1 + 0x10));
    if (uVar4 == 4) {
      FUN_004b5e70(piVar2);
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    else {
      *(uint *)(iVar1 + 0x2c) = uVar4;
      piVar2[0x16] = uVar4;
    }
  }
  if ((*(char *)(iVar1 + 0x38) != '\0') || (uVar4 == 0xc0a)) {
    FUN_004961f0(iVar1,7,(byte *)0x0);
    *(undefined1 *)(iVar1 + 0x38) = 0;
    uVar4 = 7;
  }
  uVar3 = *(uint *)(iVar1 + 0x30);
  if (*(int *)(iVar1 + 0xc) != 0) {
    (*DAT_00582b20)(*(int *)(iVar1 + 0xc));
  }
  return uVar3 & uVar4;
}


/* FUN_00471550 @ 00471550  kind=gamemisc  attributed-by=none  size=65 */

int __cdecl FUN_00471550(int param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((((undefined4 *)(iVar1 + 0x1ac) != (undefined4 *)0x0) &&
      (pcVar2 = *(code **)(iVar1 + 0x1ac), pcVar2 != (code *)0x0)) && (-1 < *(int *)(iVar1 + 0x1b4))
     ) {
    iVar3 = (*pcVar2)(*(undefined4 *)(iVar1 + 0x1b0),*(int *)(iVar1 + 0x1b4));
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + 0x1b4) = 0xffffffff;
      return 0;
    }
    *(int *)(iVar1 + 0x1b4) = *(int *)(iVar1 + 0x1b4) + 1;
    return iVar3;
  }
  return 0;
}


/* FUN_004721aa @ 004721aa  kind=gamemisc  attributed-by=none  size=1690 */

void FUN_004721aa(void)

{
  int *piVar1;
  short *psVar2;
  char cVar3;
  byte bVar4;
  ushort uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int *unaff_EBX;
  uint unaff_EBP;
  int unaff_ESI;
  size_t _Size;
  uint uVar14;
  int unaff_EDI;
  undefined1 *puVar15;
  undefined4 uStack00000008;
  char *pcVar16;
  
  do {
    if (unaff_EBX[4] == 0) break;
    FUN_00466a80(100,unaff_EBP - 0x68,(byte *)"On tree page %d cell %d: ");
    puVar15 = (undefined1 *)
              ((uint)(CONCAT11(*(undefined1 *)
                                (*(int *)(unaff_ESI + 0x40) + *(int *)(unaff_EBP - 0x74) * 2),
                               *(undefined1 *)(*(int *)(unaff_ESI + 0x40) + 1 + unaff_EDI * 2)) &
                     *(ushort *)(unaff_ESI + 0x12)) + *(int *)(unaff_ESI + 0x38));
    FUN_00471710(unaff_ESI,(uint)puVar15,(uint *)(unaff_EBP - 0xbc));
    uVar13 = *(uint *)(unaff_EBP - 0xb0);
    cVar3 = *(char *)(unaff_ESI + 2);
    *(uint *)(unaff_EBP - 0x6c) = uVar13;
    if (cVar3 == '\0') {
      uVar13 = uVar13 + *(int *)(unaff_EBP - 0xbc);
    }
    else if (*(int *)(unaff_EBP - 0x74) == 0) {
      uVar6 = *(undefined4 *)(unaff_EBP - 0xbc);
      uVar7 = *(undefined4 *)(unaff_EBP - 0xb8);
      *(undefined4 *)(unaff_EBP - 0x7c) = uVar6;
      *(undefined4 *)(unaff_EBP - 0x78) = uVar7;
      *(undefined4 *)(unaff_EBP - 0x90) = uVar6;
      *(undefined4 *)(unaff_EBP - 0x8c) = uVar7;
    }
    else {
      iVar12 = *(int *)(unaff_EBP - 0xb8);
      if (*(int *)(unaff_EBP - 0x78) < iVar12) {
LAB_0047227c:
        uVar14 = *(uint *)(unaff_EBP - 0xbc);
      }
      else if ((iVar12 < *(int *)(unaff_EBP - 0x78)) ||
              (uVar14 = *(uint *)(unaff_EBP - 0xbc), uVar14 <= *(uint *)(unaff_EBP - 0x7c))) {
        FUN_00471c20((int)unaff_EBX,(char *)(unaff_EBP - 0x68),
                     (byte *)"Rowid %lld out of order (previous was %lld)");
        uVar13 = *(uint *)(unaff_EBP - 0x6c);
        iVar12 = *(int *)(unaff_EBP - 0xb8);
        goto LAB_0047227c;
      }
      *(uint *)(unaff_EBP - 0x7c) = uVar14;
      *(int *)(unaff_EBP - 0x78) = iVar12;
    }
    uVar5 = *(ushort *)(unaff_EBP - 0xa6);
    if (uVar5 < uVar13) {
      *(undefined1 **)(unaff_EBP - 0x6c) = puVar15 + *(ushort *)(unaff_EBP - 0xa4);
      piVar1 = (int *)(unaff_ESI + 0x38);
      unaff_ESI = *(int *)(unaff_EBP - 0x84);
      if (*(uint *)(unaff_EBP - 0x6c) <=
          (uint)(*piVar1 + *(int *)(*(int *)(unaff_EBP - 0x70) + 0x24))) {
        puVar8 = *(undefined1 **)(unaff_EBP - 0x6c);
        *(uint *)(unaff_EBP - 0x94) =
             (*(int *)(unaff_EBP - 0x88) + -5 + (uVar13 - uVar5)) /
             (*(int *)(unaff_EBP - 0x88) - 4U);
        puVar9 = (undefined4 *)FUN_0049c920(puVar8);
        cVar3 = *(char *)(*(int *)(unaff_EBP - 0x70) + 0x11);
        *(undefined4 **)(unaff_EBP - 0x6c) = puVar9;
        if (cVar3 != '\0') {
          FUN_00471f80(unaff_EBX,puVar9,3,*(int *)(unaff_EBP + 0xc),(char *)(unaff_EBP - 0x68));
          puVar9 = *(undefined4 **)(unaff_EBP - 0x6c);
        }
        FUN_00471d80(unaff_EBX,0,puVar9,*(int *)(unaff_EBP - 0x94),(char *)(unaff_EBP - 0x68));
      }
    }
    if (*(char *)(unaff_ESI + 3) == '\0') {
      puVar9 = (undefined4 *)CONCAT31(CONCAT21(CONCAT11(*puVar15,puVar15[1]),puVar15[2]),puVar15[3])
      ;
      if (*(char *)(*(int *)(unaff_EBP - 0x70) + 0x11) != '\0') {
        FUN_00471f80(unaff_EBX,puVar9,5,*(int *)(unaff_EBP + 0xc),(char *)(unaff_EBP - 0x68));
      }
      iVar12 = *(int *)(unaff_EBP - 0x74);
      puVar10 = (uint *)(unaff_EBP - 0x7c);
      if (iVar12 == 0) {
        puVar10 = (uint *)0x0;
      }
      iVar11 = FUN_00472090(unaff_EBX,(uint)puVar9,(char *)(unaff_EBP - 0x68),
                            (uint *)(unaff_EBP - 0x90),puVar10);
      if ((0 < iVar12) && (iVar11 != *(int *)(unaff_EBP - 0x98))) {
        FUN_00471c20((int)unaff_EBX,(char *)(unaff_EBP - 0x68),(byte *)"Child page depth differs");
      }
      *(int *)(unaff_EBP - 0x98) = iVar11;
      unaff_ESI = *(int *)(unaff_EBP - 0x84);
    }
    else {
      iVar12 = *(int *)(unaff_EBP - 0x74);
    }
    uVar5 = *(ushort *)(unaff_ESI + 0x10);
    unaff_EDI = iVar12 + 1;
    *(int *)(unaff_EBP - 0x74) = unaff_EDI;
  } while (unaff_EDI < (int)(uint)uVar5);
  if (*(char *)(unaff_ESI + 3) == '\0') {
    iVar12 = (uint)*(byte *)(unaff_ESI + 5) + *(int *)(unaff_ESI + 0x38);
    puVar9 = (undefined4 *)
             CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar12 + 8),*(undefined1 *)(iVar12 + 9)),
                               *(undefined1 *)(iVar12 + 10)),*(undefined1 *)(iVar12 + 0xb));
    FUN_00466a80(100,unaff_EBP - 0x68,(byte *)"On page %d at right child: ");
    if (*(char *)(*(int *)(unaff_EBP - 0x70) + 0x11) != '\0') {
      FUN_00471f80(unaff_EBX,puVar9,5,*(int *)(unaff_EBP + 0xc),(char *)(unaff_EBP - 0x68));
    }
    puVar10 = (uint *)(unaff_EBP - 0x7c);
    if (*(short *)(unaff_ESI + 0x10) == 0) {
      puVar10 = (uint *)0x0;
    }
    FUN_00472090(unaff_EBX,(uint)puVar9,(char *)(unaff_EBP - 0x68),(uint *)0x0,puVar10);
    if (*(char *)(unaff_ESI + 3) == '\0') goto LAB_00472530;
  }
  if (*(char *)(unaff_ESI + 2) == '\0') goto LAB_00472530;
  puVar10 = *(uint **)(unaff_EBP - 0x9c);
  if (puVar10 == (uint *)0x0) {
    puVar10 = *(uint **)(unaff_EBP - 0x80);
    if (puVar10 == (uint *)0x0) goto LAB_00472530;
    if (((int)puVar10[1] < *(int *)(unaff_EBP - 0x8c)) ||
       (((int)puVar10[1] <= *(int *)(unaff_EBP - 0x8c) && (*puVar10 < *(uint *)(unaff_EBP - 0x90))))
       ) goto LAB_00472530;
    pcVar16 = "Rowid %lld out of order (min less than parent max of %lld)";
  }
  else {
    uVar13 = puVar10[1];
    if (*(int *)(unaff_EBP - 0x80) != 0) {
      if ((*(int *)(unaff_EBP - 0x8c) <= (int)uVar13) &&
         ((*(int *)(unaff_EBP - 0x8c) < (int)uVar13 || (*(uint *)(unaff_EBP - 0x90) <= *puVar10))))
      {
        FUN_00471c20((int)unaff_EBX,(char *)(unaff_EBP - 0x68),
                     (byte *)"Rowid %lld out of order (min less than parent min of %lld)");
      }
      uVar13 = (*(uint **)(unaff_EBP - 0x80))[1];
      if (((int)uVar13 <= *(int *)(unaff_EBP - 0x78)) &&
         (((int)uVar13 < *(int *)(unaff_EBP - 0x78) ||
          (**(uint **)(unaff_EBP - 0x80) < *(uint *)(unaff_EBP - 0x7c))))) {
        FUN_00471c20((int)unaff_EBX,(char *)(unaff_EBP - 0x68),
                     (byte *)"Rowid %lld out of order (max larger than parent max of %lld)");
      }
      *puVar10 = *(uint *)(unaff_EBP - 0x7c);
      puVar10[1] = *(uint *)(unaff_EBP - 0x78);
      goto LAB_00472530;
    }
    if ((*(int *)(unaff_EBP - 0x78) < (int)uVar13) ||
       ((*(int *)(unaff_EBP - 0x78) <= (int)uVar13 && (*(uint *)(unaff_EBP - 0x7c) <= *puVar10))))
    goto LAB_00472530;
    pcVar16 = "Rowid %lld out of order (max larger than parent min of %lld)";
  }
  FUN_00471c20((int)unaff_EBX,(char *)(unaff_EBP - 0x68),(byte *)pcVar16);
LAB_00472530:
  *(undefined4 *)(unaff_EBP - 0x80) = *(undefined4 *)(unaff_ESI + 0x38);
  *(uint *)(unaff_EBP - 0x6c) = (uint)*(byte *)(unaff_ESI + 5);
  puVar9 = FUN_004868a0(*(int *)(*(int *)(unaff_EBP - 0x70) + 0x20));
  if (puVar9 == (undefined4 *)0x0) {
    unaff_EBX[6] = 1;
  }
  else {
    iVar12 = *(int *)(unaff_EBP - 0x80) + *(int *)(unaff_EBP - 0x6c);
    *(int *)(unaff_EBP - 0x70) = iVar12;
    _Size = (CONCAT11(*(undefined1 *)(iVar12 + 5),*(undefined1 *)(iVar12 + 6)) - 1 & 0xffff) + 1;
    memset((void *)(_Size + (int)puVar9),0,*(int *)(unaff_EBP - 0x88) - _Size);
    memset(puVar9,1,_Size);
    unaff_ESI = *(int *)(unaff_EBP - 0x84);
    uVar13 = (uint)CONCAT11(*(undefined1 *)(*(int *)(unaff_EBP - 0x70) + 3),
                            *(undefined1 *)(*(int *)(unaff_EBP - 0x70) + 4));
    bVar4 = *(byte *)(unaff_ESI + 3);
    iVar12 = *(int *)(unaff_EBP - 0x6c);
    *(uint *)(unaff_EBP - 0x94) = uVar13;
    *(uint *)(unaff_EBP - 0x9c) = iVar12 + (3 - (uint)bVar4) * 4;
    *(undefined4 *)(unaff_EBP - 0x74) = 0;
    if (uVar13 != 0) {
      puVar15 = (undefined1 *)(*(int *)(unaff_EBP - 0x80) + *(int *)(unaff_EBP - 0x9c));
      *(undefined1 **)(unaff_EBP - 0x6c) = puVar15;
      do {
        iVar12 = *(int *)(unaff_EBP - 0x74);
        uVar14 = (uint)CONCAT11(*puVar15,puVar15[1]);
        uVar13 = 0x10000;
        if ((int)uVar14 <= *(int *)(unaff_EBP - 0x88) + -4) {
          uVar13 = FUN_00471aa0(*(uint *)(unaff_EBP - 0x84),*(int *)(unaff_EBP - 0x80) + uVar14);
          iVar12 = *(int *)(unaff_EBP - 0x74);
          uVar13 = uVar13 & 0xffff;
        }
        if ((int)((uVar14 - 1) + uVar13) < *(int *)(unaff_EBP - 0x88)) {
          for (iVar11 = (uVar14 - 1) + uVar13; (int)uVar14 <= iVar11; iVar11 = iVar11 + -1) {
            *(char *)(iVar11 + (int)puVar9) = *(char *)(iVar11 + (int)puVar9) + '\x01';
          }
        }
        else {
          FUN_00471c20((int)unaff_EBX,(char *)0x0,
                       (byte *)"Corruption detected in cell %d on page %d");
          iVar12 = *(int *)(unaff_EBP - 0x74);
        }
        puVar15 = (undefined1 *)(*(int *)(unaff_EBP - 0x6c) + 2);
        *(int *)(unaff_EBP - 0x74) = iVar12 + 1;
        *(undefined1 **)(unaff_EBP - 0x6c) = puVar15;
      } while (iVar12 + 1 < *(int *)(unaff_EBP - 0x94));
      unaff_ESI = *(int *)(unaff_EBP - 0x84);
    }
    uVar13 = (uint)CONCAT11(*(undefined1 *)(*(int *)(unaff_EBP - 0x70) + 1),
                            *(undefined1 *)(*(int *)(unaff_EBP - 0x70) + 2));
    if (uVar13 != 0) {
      iVar12 = *(int *)(unaff_EBP - 0x80);
      do {
        for (iVar11 = (uVar13 - 1) +
                      (uint)CONCAT11(*(undefined1 *)(iVar12 + 2 + uVar13),
                                     *(undefined1 *)(iVar12 + 3 + uVar13)); (int)uVar13 <= iVar11;
            iVar11 = iVar11 + -1) {
          *(char *)(iVar11 + (int)puVar9) = *(char *)(iVar11 + (int)puVar9) + '\x01';
        }
        uVar13 = (uint)CONCAT11(*(undefined1 *)(iVar12 + uVar13),
                                *(undefined1 *)(iVar12 + 1 + uVar13));
      } while (uVar13 != 0);
      unaff_ESI = *(int *)(unaff_EBP - 0x84);
    }
    uVar13 = 0;
    iVar12 = 0;
    *(undefined4 *)(unaff_EBP - 0x6c) = 0;
    if (0 < *(int *)(unaff_EBP - 0x88)) {
      do {
        if (*(char *)(iVar12 + (int)puVar9) == '\0') {
          uVar13 = uVar13 + 1;
          *(uint *)(unaff_EBP - 0x6c) = uVar13;
        }
        else if ('\x01' < *(char *)(iVar12 + (int)puVar9)) {
          FUN_00471c20((int)unaff_EBX,(char *)0x0,(byte *)"Multiple uses for byte %d of page %d");
          uVar13 = *(uint *)(unaff_EBP - 0x6c);
          break;
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < *(int *)(unaff_EBP - 0x88));
    }
    if (uVar13 != *(byte *)(*(int *)(unaff_EBP - 0x70) + 7)) {
      FUN_00471c20((int)unaff_EBX,(char *)0x0,
                   (byte *)"Fragmentation of %d bytes reported as %d on page %d");
    }
  }
  FUN_00486af0(puVar9);
  puVar9 = *(undefined4 **)(unaff_ESI + 0x44);
  if (puVar9 != (undefined4 *)0x0) {
    psVar2 = (short *)((int)puVar9 + 0x1a);
    *psVar2 = *psVar2 + -1;
    puVar10 = (uint *)puVar9[4];
    if (*psVar2 == 0) {
      *(int *)(puVar9[7] + 0xc) = *(int *)(puVar9[7] + 0xc) + -1;
      if ((*(byte *)(puVar9 + 6) & 2) == 0) {
        iVar12 = puVar9[7];
        if (*(int *)(iVar12 + 0x1c) != 0) {
          if (puVar9[5] == 1) {
            *(undefined4 *)(iVar12 + 0x2c) = 0;
          }
          (*DAT_00582b4c)(*(undefined4 *)(iVar12 + 0x28),*puVar9,0);
        }
      }
      else {
        FUN_00486ed0((int)puVar9);
        piVar1 = (int *)puVar9[7];
        iVar12 = *piVar1;
        puVar9[8] = iVar12;
        if (iVar12 != 0) {
          *(undefined4 **)(iVar12 + 0x24) = puVar9;
        }
        *piVar1 = (int)puVar9;
        if (piVar1[1] == 0) {
          piVar1[1] = (int)puVar9;
        }
        if ((piVar1[2] == 0) && ((*(byte *)(puVar9 + 6) & 4) == 0)) {
          piVar1[2] = (int)puVar9;
        }
      }
    }
    if (*(int *)(puVar10[0x2d] + 0xc) == 0) {
      bVar4 = *(byte *)((int)puVar10 + 0xf);
      if ((bVar4 != 6) && (bVar4 != 0)) {
        if (bVar4 < 2) {
          if ((char)puVar10[1] == '\0') {
            FUN_00484760((int *)puVar10,0);
          }
        }
        else {
          if (DAT_00583e74 != (code *)0x0) {
            (*DAT_00583e74)();
          }
          FUN_004a2510(puVar10);
          if (DAT_00583e78 != (code *)0x0) {
            (*DAT_00583e78)();
            FUN_00485380((int)puVar10);
            uStack00000008 = 0x472815;
            __security_check_cookie(*(uint *)(unaff_EBP - 4) ^ unaff_EBP);
            return;
          }
        }
      }
      FUN_00485380((int)puVar10);
    }
  }
  uStack00000008 = 0x472847;
  __security_check_cookie(*(uint *)(unaff_EBP - 4) ^ unaff_EBP);
  return;
}


/* FUN_00472ef0 @ 00472ef0  kind=gamemisc  attributed-by=none  size=718 */

int __cdecl
FUN_00472ef0(int *param_1,undefined4 *param_2,undefined4 *param_3,uint param_4,uint param_5,
            int param_6,undefined4 *param_7)

{
  size_t _Size;
  undefined2 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  byte *pbVar7;
  undefined4 uVar8;
  int iVar9;
  char cVar10;
  bool bVar11;
  int iVar12;
  char *_Src;
  char *pcVar13;
  int *piVar14;
  int iVar15;
  int *piVar16;
  int iVar17;
  byte *pbVar18;
  undefined3 extraout_var;
  byte bVar19;
  int iVar20;
  uint uVar21;
  int local_c;
  undefined4 *local_8;
  
  iVar3 = param_2[7];
  iVar4 = param_2[4];
  piVar5 = (int *)param_1[2];
  uVar21 = (uint)*(ushort *)(param_2 + 1);
  iVar12 = param_6 + uVar21;
  local_c = param_1[0x13] + 1;
  param_1[0x13] = iVar12 + param_1[0x13];
  _Src = (char *)FUN_0049db70(piVar5,iVar4);
  if (_Src == (char *)0x0) {
    local_8 = (undefined4 *)0x0;
  }
  else {
    cVar2 = *_Src;
    pcVar13 = _Src;
    while (cVar2 != '\0') {
      pcVar13 = pcVar13 + 1;
      cVar2 = *pcVar13;
    }
    _Size = ((int)pcVar13 - (int)_Src & 0x3fffffffU) + 1;
    local_8 = FUN_00494b90(*param_1,_Size);
    if ((local_8 != (undefined4 *)0x0) && (memcpy(local_8,_Src,_Size), local_8 != (undefined4 *)0x0)
       ) goto LAB_00472f92;
  }
  *(undefined1 *)(*param_1 + 0x38) = 1;
LAB_00472f92:
  param_6 = 0;
  if (uVar21 == 0) {
    *param_7 = local_8;
    return local_c;
  }
  do {
    piVar14 = FUN_00479c50(param_3,iVar3,*(int *)(*(int *)(iVar4 + 4) + param_6 * 4),param_4,param_5
                           ,(ushort)*param_2,iVar4);
    if (piVar14 == (int *)0x0) {
      *param_7 = local_8;
      return local_c;
    }
    iVar20 = param_6 + local_c;
    iVar15 = FUN_00473660(param_1,piVar14,(int)param_2,iVar20);
    iVar9 = local_c;
    if (iVar15 != iVar20) {
      if (iVar12 == 1) {
        iVar9 = iVar15;
        if ((local_c != 0) && (*(byte *)((int)param_1 + 0x13) < 8)) {
          iVar15 = 0;
          piVar16 = param_1 + 0x19;
          do {
            if (piVar16[4] == local_c) {
              *(undefined1 *)(piVar16 + 2) = 1;
              goto LAB_00473080;
            }
            iVar15 = iVar15 + 1;
            piVar16 = piVar16 + 6;
          } while (iVar15 < 10);
          param_1[*(byte *)((int)param_1 + 0x13) + 7] = local_c;
          *(char *)((int)param_1 + 0x13) = *(char *)((int)param_1 + 0x13) + '\x01';
        }
      }
      else {
        iVar6 = piVar5[7];
        if ((iVar6 < piVar5[8]) || (iVar17 = FUN_0047de10(piVar5), iVar17 == 0)) {
          piVar5[7] = piVar5[7] + 1;
          iVar17 = piVar5[1];
          *(undefined2 *)(iVar17 + iVar6 * 0x14) = 0xf;
          *(undefined1 *)(iVar17 + 3 + iVar6 * 0x14) = 0;
          *(int *)(iVar17 + 4 + iVar6 * 0x14) = iVar15;
          *(int *)(iVar17 + 8 + iVar6 * 0x14) = iVar20;
          *(undefined4 *)(iVar17 + 0xc + iVar6 * 0x14) = 0;
          *(undefined4 *)(iVar17 + 0x10 + iVar6 * 0x14) = 0;
        }
      }
    }
LAB_00473080:
    local_c = iVar9;
    if ((*(byte *)(piVar14 + 4) & 0x81) == 0) {
      uVar8 = param_2[9];
      pbVar7 = *(byte **)(*piVar14 + 0xc);
      for (pbVar18 = pbVar7; (*pbVar18 == 0x9d || (*pbVar18 == 0x9c));
          pbVar18 = *(byte **)(pbVar18 + 8)) {
      }
      bVar19 = *pbVar18;
      if (bVar19 == 0x84) {
        bVar19 = pbVar18[0x23];
      }
      if (((bVar19 != 0x5e) && ((bVar19 < 0x81 || (0x83 < bVar19)))) &&
         ((iVar9 = piVar5[7], iVar9 < piVar5[8] || (iVar15 = FUN_0047de10(piVar5), iVar15 == 0)))) {
        piVar5[7] = piVar5[7] + 1;
        puVar1 = (undefined2 *)(piVar5[1] + iVar9 * 0x14);
        *puVar1 = 0x49;
        *(undefined1 *)((int)puVar1 + 3) = 0;
        *(int *)(puVar1 + 2) = param_6 + local_c;
        *(undefined4 *)(puVar1 + 4) = uVar8;
        *(undefined4 *)(puVar1 + 6) = 0;
        *(undefined4 *)(puVar1 + 8) = 0;
      }
      if (local_8 != (undefined4 *)0x0) {
        cVar2 = *(char *)(param_6 + (int)local_8);
        cVar10 = FUN_00496480((char *)pbVar7);
        if (cVar10 == '\0') {
          if (cVar2 != '\0') goto LAB_0047316b;
LAB_00473171:
          *(undefined1 *)(param_6 + (int)local_8) = 0x62;
        }
        else if (cVar2 == '\0') {
LAB_0047316b:
          if ((char)(cVar10 + cVar2) == 'b') goto LAB_00473171;
        }
        else if ((cVar10 < 'c') && (cVar2 < 'c')) goto LAB_00473171;
        bVar11 = FUN_004993e0((char *)pbVar7,*(char *)(param_6 + (int)local_8));
        if (CONCAT31(extraout_var,bVar11) != 0) {
          *(undefined1 *)(param_6 + (int)local_8) = 0x62;
        }
      }
    }
    param_6 = param_6 + 1;
    if ((int)uVar21 <= param_6) {
      *param_7 = local_8;
      return local_c;
    }
  } while( true );
}


/* FUN_004731c0 @ 004731c0  kind=gamemisc  attributed-by=none  size=109 */

void __cdecl FUN_004731c0(int param_1,int param_2,size_t param_3,int *param_4)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 8);
  if (param_4 != (int *)0x0) {
    for (; (0 < (int)param_3 && ((char)*param_4 == 'b')); param_4 = (int *)((int)param_4 + 1)) {
      param_3 = param_3 - 1;
      param_2 = param_2 + 1;
    }
    for (; (1 < (int)param_3 && (*(char *)((int)param_4 + (param_3 - 1)) == 'b'));
        param_3 = param_3 - 1) {
    }
    if (0 < (int)param_3) {
      FUN_004ae830(piVar1,0x1e,param_2,param_3);
      FUN_004aecc0(piVar1,-1,param_4,param_3);
      FUN_00496d90(param_1,param_2,param_3);
    }
  }
  return;
}


/* FUN_00473660 @ 00473660  kind=gamemisc  attributed-by=none  size=302 */

int __cdecl FUN_00473660(int *param_1,int *param_2,int param_3,int param_4)

{
  char *pcVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  
  pcVar1 = (char *)*param_2;
  piVar2 = (int *)param_1[2];
  if (*pcVar1 == 'L') {
    param_4 = FUN_00497780(param_1,*(byte **)(pcVar1 + 0xc),param_4);
  }
  else if (*pcVar1 == 'I') {
    FUN_004ae830(piVar2,10,0,param_4);
  }
  else {
    iVar5 = FUN_004997b0(param_1,pcVar1,(int *)0x0);
    uVar3 = *(undefined4 *)(pcVar1 + 0x18);
    FUN_004ae830(piVar2,0x48,uVar3,0);
    if (*(int *)(param_3 + 0x40) == 0) {
      iVar6 = FUN_004b6b80(piVar2);
      *(int *)(param_3 + 0x28) = iVar6;
    }
    *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + 1;
    puVar4 = *(undefined4 **)(param_3 + 0x44);
    iVar6 = *param_1;
    puVar7 = FUN_00494cf0(iVar6,puVar4,*(int *)(param_3 + 0x40) << 3);
    if (puVar7 == (undefined4 *)0x0) {
      FUN_00494b00(iVar6,puVar4);
    }
    *(undefined4 **)(param_3 + 0x44) = puVar7;
    if (puVar7 == (undefined4 *)0x0) {
      *(undefined4 *)(param_3 + 0x40) = 0;
    }
    else {
      iVar6 = *(int *)(param_3 + 0x40);
      puVar7[iVar6 * 2 + -2] = uVar3;
      if (iVar5 == 1) {
        iVar5 = FUN_004ae830(piVar2,0x41,uVar3,param_4);
      }
      else {
        iVar5 = FUN_004ae890(piVar2,0x1d,uVar3,0,param_4);
      }
      puVar7[iVar6 * 2 + -1] = iVar5;
      FUN_004ae7d0(piVar2,0x49,param_4);
    }
  }
  FUN_00476c10(param_3,param_2);
  return param_4;
}


