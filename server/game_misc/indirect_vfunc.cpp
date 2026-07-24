// indirect_vfunc (game_misc) -- server. 133 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "indirect_vfunc.h"

/* FUN_0045f120 @ 0045f120  kind=gamemisc  attributed-by=role:vfunc-indirect  size=51 */

int __cdecl FUN_0045f120(int *param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 7) & 0x10) == 0) {
    iVar1 = FUN_004ae680(param_1,2);
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


/* FUN_0045f310 @ 0045f310  kind=gamemisc  attributed-by=role:vfunc-indirect  size=18 */

void __cdecl FUN_0045f310(int *param_1)

{
  FUN_004ae680(param_1,1);
  return;
}


/* FUN_0045f330 @ 0045f330  kind=gamemisc  attributed-by=role:vfunc-indirect  size=18 */

void __cdecl FUN_0045f330(int *param_1)

{
  FUN_004ae680(param_1,2);
  return;
}


/* FUN_0045f350 @ 0045f350  kind=gamemisc  attributed-by=role:vfunc-indirect  size=18 */

void __cdecl FUN_0045f350(int *param_1)

{
  FUN_004ae680(param_1,3);
  return;
}


/* FUN_0045f370 @ 0045f370  kind=gamemisc  attributed-by=role:vfunc-indirect  size=12 */

undefined1 __cdecl FUN_0045f370(int param_1)

{
  return *(undefined1 *)(param_1 + 0x1e);
}


/* FUN_0045f380 @ 0045f380  kind=gamemisc  attributed-by=role:vfunc-indirect  size=89 */

undefined1 __cdecl FUN_0045f380(int param_1)

{
  ushort uVar1;
  
  if (*(char *)(param_1 + 0x1e) == '\x03') {
    FUN_0046dfa0(param_1);
    uVar1 = *(ushort *)(param_1 + 0x1c);
    if ((uVar1 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x1e) = 5;
      return *(undefined1 *)(param_1 + 0x1e);
    }
    if ((uVar1 & 4) != 0) {
      *(undefined1 *)(param_1 + 0x1e) = 1;
      return *(undefined1 *)(param_1 + 0x1e);
    }
    if ((uVar1 & 8) != 0) {
      *(undefined1 *)(param_1 + 0x1e) = 2;
      return *(undefined1 *)(param_1 + 0x1e);
    }
    *(char *)(param_1 + 0x1e) = '\x04' - ((uVar1 & 2) != 0);
  }
  return *(undefined1 *)(param_1 + 0x1e);
}


/* FUN_0045f5b0 @ 0045f5b0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=532 */

int __cdecl FUN_0045f5b0(int param_1,int param_2,int param_3,int param_4,int *param_5)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBX;
  uint local_10;
  int local_c;
  uint local_8;
  
  piVar2 = *(int **)(param_1 + 0x18);
  if (piVar2 == (int *)0x0) {
    iVar1 = FUN_004c24f0(param_1);
    if (iVar1 != 0) {
      return unaff_EBX;
    }
    piVar2 = *(int **)(param_1 + 0x18);
  }
  piVar2 = (int *)*piVar2;
  if (*piVar2 != 0) {
    (*DAT_00582b18)(*piVar2);
  }
  if (piVar2[0xc] <= param_2) {
    local_8 = (param_2 + 1) * param_3;
    piVar2[0xb] = param_3;
    iVar1 = FUN_00466f30((int)(piVar2 + 2),(int *)&local_10);
    if (iVar1 == 0) {
      iVar1 = (int)local_8 >> 0x1f;
      if ((iVar1 < local_c) || ((iVar1 <= local_c && (local_8 <= local_10)))) {
LAB_0045f6a2:
        local_c = piVar2[0xd];
        iVar1 = FUN_004bc920();
        if ((iVar1 == 0) && (iVar1 = FUN_004a6140(local_c,param_2 * 8 + 8), iVar1 != 0)) {
          piVar2[0xd] = iVar1;
          if (param_2 < piVar2[0xc]) goto LAB_0045f77f;
          do {
            iVar1 = (*(code *)PTR_CreateFileMappingW_005835c0)(piVar2[4],0,4,0,local_8,0);
            if ((iVar1 == 0) ||
               (uVar5 = (uint)(piVar2[0xc] * param_3) % DAT_0058467c,
               iVar4 = (*(code *)PTR_MapViewOfFile_005837a0)
                                 (iVar1,6,0,piVar2[0xc] * param_3 - uVar5,param_3 + uVar5),
               iVar4 == 0)) {
              iVar4 = (*(code *)PTR_GetLastError_005836a4)();
              piVar2[0xe] = iVar4;
              FUN_004c23f0(0x150a,iVar4);
              if (iVar1 != 0) {
                (*(code *)PTR_CloseHandle_00583590)(iVar1);
              }
              break;
            }
            *(int *)(piVar2[0xd] + 4 + piVar2[0xc] * 8) = iVar4;
            *(int *)(piVar2[0xd] + piVar2[0xc] * 8) = iVar1;
            piVar2[0xc] = piVar2[0xc] + 1;
          } while (piVar2[0xc] <= param_2);
        }
      }
      else if (param_4 != 0) {
        iVar1 = FUN_00466390((int)(piVar2 + 2),local_8,iVar1);
        if (iVar1 == 0) goto LAB_0045f6a2;
        uVar3 = (*(code *)PTR_GetLastError_005836a4)
                          ("winShmMap2",*(undefined4 *)(param_1 + 0x1c),0x82ad);
        FUN_004c23f0(0x130a,uVar3);
      }
    }
    else {
      uVar3 = (*(code *)PTR_GetLastError_005836a4)
                        ("winShmMap1",*(undefined4 *)(param_1 + 0x1c),0x829e);
      FUN_004c23f0(0x130a,uVar3);
    }
    if (piVar2[0xc] <= param_2) {
      *param_5 = 0;
      goto LAB_0045f7ab;
    }
  }
LAB_0045f77f:
  *param_5 = (uint)(param_2 * param_3) % DAT_0058467c + *(int *)(piVar2[0xd] + 4 + param_2 * 8);
LAB_0045f7ab:
  if (*piVar2 != 0) {
    (*DAT_00582b20)(*piVar2);
  }
  return unaff_EBX;
}


/* FUN_0045f850 @ 0045f850  kind=gamemisc  attributed-by=role:vfunc-indirect  size=13 */

undefined4 __cdecl FUN_0045f850(int *param_1)

{
  return *(undefined4 *)(*param_1 + 4);
}


/* FUN_0045f860 @ 0045f860  kind=gamemisc  attributed-by=role:vfunc-indirect  size=11 */

undefined4 __cdecl FUN_0045f860(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}


/* FUN_0045f870 @ 0045f870  kind=gamemisc  attributed-by=role:vfunc-indirect  size=35 */

undefined4 __cdecl FUN_0045f870(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (((iVar1 != 0) && (param_2 < *(int *)(iVar1 + 4))) && (-1 < param_2)) {
    return *(undefined4 *)(iVar1 + 8 + param_2 * 8);
  }
  return 0;
}


/* FUN_0045f8a0 @ 0045f8a0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=173 */

void __cdecl FUN_0045f8a0(undefined4 *param_1,int param_2,undefined4 param_3,undefined *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (-1 < param_2) {
    puVar1 = (undefined4 *)param_1[1];
    if (puVar1 == (undefined4 *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = puVar1[1];
      if (param_2 < iVar2) goto LAB_0045f910;
    }
    puVar1 = FUN_00494cf0(param_1[2],puVar1,param_2 * 8 + 0x10);
    if (puVar1 != (undefined4 *)0x0) {
      param_1[1] = puVar1;
      memset(puVar1 + iVar2 * 2 + 2,0,(param_2 - iVar2) * 8 + 8);
      puVar1[1] = param_2 + 1;
      *puVar1 = *param_1;
LAB_0045f910:
      if ((puVar1[param_2 * 2 + 2] != 0) && ((code *)puVar1[param_2 * 2 + 3] != (code *)0x0)) {
        (*(code *)puVar1[param_2 * 2 + 3])(puVar1[param_2 * 2 + 2]);
      }
      puVar1[param_2 * 2 + 2] = param_3;
      puVar1[param_2 * 2 + 3] = param_4;
      return;
    }
  }
  if (param_4 != (undefined *)0x0) {
    (*(code *)param_4)(param_3);
  }
  return;
}


/* FUN_0045f990 @ 0045f990  kind=gamemisc  attributed-by=role:vfunc-indirect  size=63 */

void __cdecl FUN_0045f990(int param_1,void *param_2,size_t param_3,undefined *param_4)

{
  int iVar1;
  
  iVar1 = FUN_004b79e0((int *)(param_1 + 8),param_2,param_3,'\0',param_4);
  if (iVar1 == 0x12) {
    *(undefined4 *)(param_1 + 0x38) = 0x12;
    FUN_004b79e0((int *)(param_1 + 8),"string or blob too big",0xffffffff,'\x01',(undefined *)0x0);
  }
  return;
}


/* FUN_0045f9d0 @ 0045f9d0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=33 */

void __cdecl FUN_0045f9d0(int param_1,undefined8 param_2)

{
  FUN_004b7790((int *)(param_1 + 8),param_2);
  return;
}


/* FUN_0045fa00 @ 0045fa00  kind=gamemisc  attributed-by=role:vfunc-indirect  size=37 */

void __cdecl FUN_0045fa00(int param_1,void *param_2,size_t param_3)

{
  *(undefined4 *)(param_1 + 0x38) = 1;
  FUN_004b79e0((int *)(param_1 + 8),param_2,param_3,'\x01',(undefined *)0xffffffff);
  return;
}


/* FUN_0045fa70 @ 0045fa70  kind=gamemisc  attributed-by=role:vfunc-indirect  size=37 */

void __cdecl FUN_0045fa70(int param_1,void *param_2,size_t param_3)

{
  *(undefined4 *)(param_1 + 0x38) = 1;
  FUN_004b79e0((int *)(param_1 + 8),param_2,param_3,'\x02',(undefined *)0xffffffff);
  return;
}


/* FUN_0045fd10 @ 0045fd10  kind=gamemisc  attributed-by=role:vfunc-indirect  size=63 */

void __cdecl FUN_0045fd10(int param_1,void *param_2,size_t param_3,undefined *param_4)

{
  int iVar1;
  
  iVar1 = FUN_004b79e0((int *)(param_1 + 8),param_2,param_3,'\x01',param_4);
  if (iVar1 == 0x12) {
    *(undefined4 *)(param_1 + 0x38) = 0x12;
    FUN_004b79e0((int *)(param_1 + 8),"string or blob too big",0xffffffff,'\x01',(undefined *)0x0);
  }
  return;
}


/* FUN_0045fd50 @ 0045fd50  kind=gamemisc  attributed-by=role:vfunc-indirect  size=63 */

void __cdecl FUN_0045fd50(int param_1,void *param_2,size_t param_3,undefined *param_4)

{
  int iVar1;
  
  iVar1 = FUN_004b79e0((int *)(param_1 + 8),param_2,param_3,'\x02',param_4);
  if (iVar1 == 0x12) {
    *(undefined4 *)(param_1 + 0x38) = 0x12;
    FUN_004b79e0((int *)(param_1 + 8),"string or blob too big",0xffffffff,'\x01',(undefined *)0x0);
  }
  return;
}


/* FUN_0045fe90 @ 0045fe90  kind=gamemisc  attributed-by=role:vfunc-indirect  size=63 */

void __cdecl FUN_0045fe90(int param_1,void *param_2,size_t param_3,undefined *param_4)

{
  int iVar1;
  
  iVar1 = FUN_004b79e0((int *)(param_1 + 8),param_2,param_3,'\x03',param_4);
  if (iVar1 == 0x12) {
    *(undefined4 *)(param_1 + 0x38) = 0x12;
    FUN_004b79e0((int *)(param_1 + 8),"string or blob too big",0xffffffff,'\x01',(undefined *)0x0);
  }
  return;
}


/* FUN_0045fed0 @ 0045fed0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=13 */

void FUN_0045fed0(int param_1,undefined8 *param_2)

{
  FUN_004b6f10((int *)(param_1 + 8),param_2);
  return;
}


/* FUN_00460380 @ 00460380  kind=gamemisc  attributed-by=role:vfunc-indirect  size=111 */

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


/* FUN_00460480 @ 00460480  kind=gamemisc  attributed-by=role:vfunc-indirect  size=112 */

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


/* FUN_004604f0 @ 004604f0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=145 */

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


/* FUN_00460590 @ 00460590  kind=gamemisc  attributed-by=role:vfunc-indirect  size=74 */

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


/* FUN_004605e0 @ 004605e0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=74 */

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


/* FUN_004607a0 @ 004607a0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=61 */

int __cdecl FUN_004607a0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00464e80((byte *)0x0);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = (**(code **)(iVar1 + 0x3c))(iVar1,param_1 * 1000);
  return iVar1 / 1000;
}


/* FUN_004607e0 @ 004607e0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=12 */

undefined1 __cdecl FUN_004607e0(int param_1)

{
  return *(undefined1 *)(param_1 + 0x36);
}


/* FUN_004607f0 @ 004607f0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=18 */

undefined4 __cdecl FUN_004607f0(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    return *param_1;
  }
  return 0;
}


/* FUN_004608d0 @ 004608d0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=63 */

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


/* FUN_00460910 @ 00460910  kind=gamemisc  attributed-by=role:vfunc-indirect  size=72 */

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


/* FUN_00460960 @ 00460960  kind=gamemisc  attributed-by=role:vfunc-indirect  size=72 */

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


/* FUN_00460c30 @ 00460c30  kind=gamemisc  attributed-by=role:vfunc-indirect  size=208 */

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


/* FUN_00460d00 @ 00460d00  kind=gamemisc  attributed-by=role:vfunc-indirect  size=72 */

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


/* FUN_00461310 @ 00461310  kind=gamemisc  attributed-by=role:vfunc-indirect  size=15 */

undefined4 __cdecl FUN_00461310(undefined4 param_1)

{
  DAT_00582b8c = param_1;
  return 0;
}


/* FUN_00461400 @ 00461400  kind=gamemisc  attributed-by=role:vfunc-indirect  size=26 */

undefined8 __cdecl FUN_00461400(uint param_1)

{
  undefined8 uVar1;
  
  if ((int)param_1 < 0) {
    param_1 = 0;
  }
  uVar1 = FUN_00461320(param_1,(int)param_1 >> 0x1f);
  return uVar1;
}


/* FUN_00461420 @ 00461420  kind=gamemisc  attributed-by=role:vfunc-indirect  size=262 */

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


/* FUN_00461cd0 @ 00461cd0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=176 */

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


/* FUN_00462250 @ 00462250  kind=gamemisc  attributed-by=role:vfunc-indirect  size=103 */

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


/* FUN_004622c0 @ 004622c0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=22 */

undefined4 __cdecl FUN_004622c0(undefined8 *param_1)

{
  FUN_00462070(param_1);
  return 0;
}


/* FUN_004622e0 @ 004622e0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=75 */

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


/* FUN_004628d0 @ 004628d0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=53 */

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


/* FUN_00462910 @ 00462910  kind=gamemisc  attributed-by=role:vfunc-indirect  size=24 */

undefined4 __cdecl FUN_00462910(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 0xc);
  return 0;
}


/* FUN_00462930 @ 00462930  kind=gamemisc  attributed-by=role:vfunc-indirect  size=528 */

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


/* FUN_00463630 @ 00463630  kind=gamemisc  attributed-by=role:vfunc-indirect  size=178 */

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


/* FUN_00463be0 @ 00463be0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=120 */

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


/* FUN_00463d00 @ 00463d00  kind=gamemisc  attributed-by=role:vfunc-indirect  size=72 */

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


/* FUN_00463e00 @ 00463e00  kind=gamemisc  attributed-by=role:vfunc-indirect  size=27 */

void __cdecl FUN_00463e00(int param_1,byte *param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00476470(param_1,param_2,param_3,param_4,(undefined *)0x0);
  return;
}


/* FUN_00463e20 @ 00463e20  kind=gamemisc  attributed-by=role:vfunc-indirect  size=104 */

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


/* FUN_00463f70 @ 00463f70  kind=gamemisc  attributed-by=role:vfunc-indirect  size=9 */

void FUN_00463f70(int param_1,byte *param_2,undefined4 param_3,undefined4 param_4,undefined *param_5
                 )

{
  FUN_00476470(param_1,param_2,param_3,param_4,param_5);
  return;
}


/* FUN_00463f80 @ 00463f80  kind=gamemisc  attributed-by=role:vfunc-indirect  size=425 */

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


/* FUN_00464c00 @ 00464c00  kind=gamemisc  attributed-by=role:vfunc-indirect  size=201 */

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


/* FUN_00464cd0 @ 00464cd0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=82 */

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


/* FUN_00464d30 @ 00464d30  kind=gamemisc  attributed-by=role:vfunc-indirect  size=25 */

undefined4 __cdecl FUN_00464d30(int param_1)

{
  if ((param_1 != 0) && (*(int *)(param_1 + 0x14) != 0)) {
    return *(undefined4 *)(param_1 + 4);
  }
  return 0;
}


/* FUN_00464d70 @ 00464d70  kind=gamemisc  attributed-by=role:vfunc-indirect  size=30 */

void __cdecl FUN_00464d70(int param_1,undefined4 param_2,int param_3,int param_4)

{
  FUN_00470aa0(param_1,param_2,param_3,param_4,FUN_0048f870);
  return;
}


/* FUN_00464e40 @ 00464e40  kind=gamemisc  attributed-by=role:vfunc-indirect  size=30 */

void __cdecl FUN_00464e40(int param_1,undefined4 param_2,int param_3,int param_4)

{
  FUN_00470aa0(param_1,param_2,param_3,param_4,FUN_00491620);
  return;
}


/* FUN_00464f20 @ 00464f20  kind=gamemisc  attributed-by=role:vfunc-indirect  size=121 */

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


/* FUN_00464fa0 @ 00464fa0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=126 */

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


/* FUN_00465020 @ 00465020  kind=gamemisc  attributed-by=role:vfunc-indirect  size=23 */

undefined4 FUN_00465020(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_004bc920();
  if (iVar1 != 0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00465031. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*DAT_00582b10)();
  return uVar2;
}


/* FUN_00465040 @ 00465040  kind=gamemisc  attributed-by=role:vfunc-indirect  size=22 */

void __cdecl FUN_00465040(int param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0046504e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_00582b14)();
    return;
  }
  return;
}


/* FUN_00465100 @ 00465100  kind=gamemisc  attributed-by=role:vfunc-indirect  size=24 */

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


/* FUN_00465200 @ 00465200  kind=gamemisc  attributed-by=role:vfunc-indirect  size=11 */

undefined4 __cdecl FUN_00465200(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}


/* FUN_00465210 @ 00465210  kind=gamemisc  attributed-by=role:vfunc-indirect  size=260 */

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


/* FUN_004653d0 @ 004653d0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=393 */

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


/* FUN_004655d0 @ 004655d0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=86 */

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


/* FUN_00465680 @ 00465680  kind=gamemisc  attributed-by=role:vfunc-indirect  size=156 */

undefined4 __cdecl
FUN_00465680(int param_1,int param_2,undefined4 *param_3,uint *param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  
  if (param_2 == 0x3e9) {
    uVar4 = FUN_0048b660(param_1,param_3,(uint)param_4,param_5);
    return uVar4;
  }
  uVar5 = 0;
  while ((&DAT_0056cac4)[uVar5 * 2] != param_2) {
    uVar5 = uVar5 + 1;
    if (1 < uVar5) {
      return 1;
    }
  }
  uVar1 = *(uint *)(param_1 + 0x18);
  if ((int)param_3 < 1) {
    if (param_3 != (undefined4 *)0x0) goto LAB_004656cf;
    uVar3 = ~*(uint *)(&UNK_0056cac8 + uVar5 * 8) & uVar1;
  }
  else {
    uVar3 = *(uint *)(&UNK_0056cac8 + uVar5 * 8) | uVar1;
  }
  *(uint *)(param_1 + 0x18) = uVar3;
LAB_004656cf:
  if (uVar1 != *(uint *)(param_1 + 0x18)) {
    for (iVar2 = *(int *)(param_1 + 4); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x3c)) {
      *(uint *)(iVar2 + 0x60) = *(uint *)(iVar2 + 0x60) | 0x20;
    }
  }
  if (param_4 != (uint *)0x0) {
    *param_4 = (uint)((*(uint *)(&UNK_0056cac8 + uVar5 * 8) & *(uint *)(param_1 + 0x18)) != 0);
  }
  return 0;
}


/* FUN_00465720 @ 00465720  kind=gamemisc  attributed-by=role:vfunc-indirect  size=737 */

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


/* FUN_00465a30 @ 00465a30  kind=gamemisc  attributed-by=role:vfunc-indirect  size=30 */

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


/* FUN_00465a50 @ 00465a50  kind=gamemisc  attributed-by=role:vfunc-indirect  size=332 */

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


/* FUN_00465c00 @ 00465c00  kind=gamemisc  attributed-by=role:vfunc-indirect  size=64 */

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


/* FUN_00465c40 @ 00465c40  kind=gamemisc  attributed-by=role:vfunc-indirect  size=14 */

undefined8 __cdecl FUN_00465c40(int param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}


/* FUN_00465c50 @ 00465c50  kind=gamemisc  attributed-by=role:vfunc-indirect  size=11 */

undefined4 __cdecl FUN_00465c50(int param_1)

{
  return *(undefined4 *)(param_1 + 0x48);
}


/* FUN_00465c60 @ 00465c60  kind=gamemisc  attributed-by=role:vfunc-indirect  size=11 */

undefined4 __cdecl FUN_00465c60(int param_1)

{
  return *(undefined4 *)(param_1 + 0x4c);
}


/* FUN_00465c70 @ 00465c70  kind=gamemisc  attributed-by=role:vfunc-indirect  size=18 */

void __cdecl FUN_00465c70(int param_1)

{
  *(undefined4 *)(param_1 + 0xe0) = 1;
  return;
}


/* FUN_004660e0 @ 004660e0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=204 */

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


/* FUN_004661b0 @ 004661b0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=84 */

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


/* FUN_00466440 @ 00466440  kind=gamemisc  attributed-by=role:vfunc-indirect  size=420 */

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


/* FUN_00466ae0 @ 00466ae0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=64 */

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


/* FUN_00466b20 @ 00466b20  kind=gamemisc  attributed-by=role:vfunc-indirect  size=22 */

int __cdecl FUN_00466b20(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004bc920();
  if (iVar1 != 0) {
    return 0;
  }
  iVar1 = FUN_004a0350(param_1);
  return iVar1;
}


/* FUN_00466b40 @ 00466b40  kind=gamemisc  attributed-by=role:vfunc-indirect  size=22 */

int __cdecl FUN_00466b40(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_004bc920();
  if (iVar1 != 0) {
    return 0;
  }
  iVar1 = FUN_004a6140(param_1,param_2);
  return iVar1;
}


/* FUN_00466e80 @ 00466e80  kind=gamemisc  attributed-by=role:vfunc-indirect  size=30 */

void __cdecl FUN_00466e80(int param_1)

{
  if (param_1 != 0) {
    DAT_00583e40 = DAT_00583e18;
  }
  return;
}


/* FUN_00467000 @ 00467000  kind=gamemisc  attributed-by=role:vfunc-indirect  size=82 */

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


/* FUN_00467170 @ 00467170  kind=gamemisc  attributed-by=role:vfunc-indirect  size=72 */

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


/* FUN_004671c0 @ 004671c0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=264 */

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


/* FUN_00467d70 @ 00467d70  kind=gamemisc  attributed-by=role:vfunc-indirect  size=72 */

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


/* FUN_00467ec0 @ 00467ec0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=11 */

undefined4 __cdecl FUN_00467ec0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}


/* FUN_00467ed0 @ 00467ed0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=107 */

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


/* FUN_00467f40 @ 00467f40  kind=gamemisc  attributed-by=role:vfunc-indirect  size=11 */

undefined4 __cdecl FUN_00467f40(int param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}


/* FUN_00467f70 @ 00467f70  kind=gamemisc  attributed-by=role:vfunc-indirect  size=242 */

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


/* FUN_004681c0 @ 004681c0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=441 */

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


/* FUN_004683e0 @ 004683e0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=9 */

void FUN_004683e0(int *param_1,undefined4 *param_2,uint param_3,byte *param_4)

{
  FUN_004834d0(param_1,param_2,param_3,param_4);
  return;
}


/* FUN_00468410 @ 00468410  kind=gamemisc  attributed-by=role:vfunc-indirect  size=72 */

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


/* FUN_004686e0 @ 004686e0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=104 */

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


/* FUN_004688d0 @ 004688d0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=205 */

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


/* FUN_004689a0 @ 004689a0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=51 */

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


/* FUN_004689e0 @ 004689e0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=130 */

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


/* FUN_00468dc0 @ 00468dc0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=101 */

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


/* FUN_00468e50 @ 00468e50  kind=gamemisc  attributed-by=role:vfunc-indirect  size=32 */

void __cdecl FUN_00468e50(int param_1,void *param_2,size_t param_3,undefined4 *param_4,int *param_5)

{
  FUN_004a0180(param_1,param_2,param_3,1,0,param_4,param_5);
  return;
}


/* FUN_00468e70 @ 00468e70  kind=gamemisc  attributed-by=role:vfunc-indirect  size=204 */

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


/* FUN_00468f40 @ 00468f40  kind=gamemisc  attributed-by=role:vfunc-indirect  size=30 */

void __cdecl
FUN_00468f40(uint param_1,byte *param_2,size_t param_3,undefined4 *param_4,int *param_5)

{
  FUN_004a5e90(param_1,param_2,param_3,0,param_4,param_5);
  return;
}


/* FUN_00468f60 @ 00468f60  kind=gamemisc  attributed-by=role:vfunc-indirect  size=30 */

void __cdecl
FUN_00468f60(uint param_1,byte *param_2,size_t param_3,undefined4 *param_4,int *param_5)

{
  FUN_004a5e90(param_1,param_2,param_3,1,param_4,param_5);
  return;
}


/* FUN_00468f80 @ 00468f80  kind=gamemisc  attributed-by=role:vfunc-indirect  size=31 */

undefined4 __cdecl FUN_00468f80(int param_1)

{
  if ((param_1 != 0) && ((*(uint *)(param_1 + 0x60) & 0x200) != 0)) {
    return *(undefined4 *)(param_1 + 0x98);
  }
  return 0;
}


/* FUN_00468fa0 @ 00468fa0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=356 */

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


/* FUN_00469220 @ 00469220  kind=gamemisc  attributed-by=role:vfunc-indirect  size=81 */

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


/* FUN_00469280 @ 00469280  kind=gamemisc  attributed-by=role:vfunc-indirect  size=14 */

void FUN_00469280(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00469288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free((void *)(param_1 + -8));
  return;
}


/* FUN_004694b0 @ 004694b0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=51 */

int __cdecl FUN_004694b0(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_004bfc30(param_1,param_2);
  if ((iVar1 == 0) && (*(int *)(*param_1 + 0xc) != 0)) {
    (*DAT_00582b20)(*(int *)(*param_1 + 0xc));
  }
  return iVar1;
}


/* FUN_004694f0 @ 004694f0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=17 */

undefined4 __cdecl FUN_004694f0(int param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  return *(undefined4 *)(param_1 + -8);
}


/* FUN_00469530 @ 00469530  kind=gamemisc  attributed-by=role:vfunc-indirect  size=86 */

int * __cdecl FUN_00469530(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = realloc((void *)(param_1 + -8),param_2 + 8);
  if (piVar1 != (int *)0x0) {
    *piVar1 = param_2;
    piVar1[1] = param_2 >> 0x1f;
    return piVar1 + 2;
  }
  FUN_004683f0(7,"failed memory resize %u to %u bytes");
  return (int *)0x0;
}


/* FUN_00469590 @ 00469590  kind=gamemisc  attributed-by=role:vfunc-indirect  size=30 */

void __cdecl FUN_00469590(int *param_1,int param_2,void *param_3,size_t param_4,undefined *param_5)

{
  FUN_004709e0(param_1,param_2,param_3,param_4,param_5,'\x02');
  return;
}


/* FUN_004695b0 @ 004695b0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=324 */

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


/* FUN_00469760 @ 00469760  kind=gamemisc  attributed-by=role:vfunc-indirect  size=14 */

uint __cdecl FUN_00469760(int param_1)

{
  return param_1 + 7U & 0xfffffff8;
}


/* FUN_00469770 @ 00469770  kind=gamemisc  attributed-by=role:vfunc-indirect  size=20 */

int __cdecl FUN_00469770(int param_1)

{
  if (param_1 != 0) {
    return (int)*(short *)(param_1 + 0x4c);
  }
  return 0;
}


/* FUN_004697a0 @ 004697a0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=39 */

undefined4 __cdecl FUN_004697a0(int param_1,int param_2)

{
  if (((param_1 != 0) && (0 < param_2)) && (param_2 <= *(short *)(param_1 + 0x4e))) {
    return *(undefined4 *)(*(int *)(param_1 + 0x48) + -4 + param_2 * 4);
  }
  return 0;
}


/* FUN_004697d0 @ 004697d0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=21 */

int __cdecl FUN_004697d0(int param_1)

{
  return (*(byte *)(param_1 + 0x10) & 0x10 | 8) << 8;
}


/* FUN_004697f0 @ 004697f0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=60 */

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


/* FUN_00469830 @ 00469830  kind=gamemisc  attributed-by=role:vfunc-indirect  size=271 */

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


/* FUN_00469940 @ 00469940  kind=gamemisc  attributed-by=role:vfunc-indirect  size=20 */

undefined2 __cdecl FUN_00469940(int param_1)

{
  if (param_1 != 0) {
    return *(undefined2 *)(param_1 + 0x2c);
  }
  return 0;
}


/* FUN_00469aa0 @ 00469aa0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=108 */

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


/* FUN_00469bd0 @ 00469bd0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=110 */

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


/* FUN_00469c40 @ 00469c40  kind=gamemisc  attributed-by=role:vfunc-indirect  size=110 */

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


/* FUN_00469f20 @ 00469f20  kind=gamemisc  attributed-by=role:vfunc-indirect  size=26 */

undefined2 __cdecl FUN_00469f20(int param_1)

{
  if ((param_1 != 0) && (*(int *)(param_1 + 0x14) != 0)) {
    return *(undefined2 *)(param_1 + 0x2c);
  }
  return 0;
}


/* FUN_0046a4c0 @ 0046a4c0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=95 */

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


/* FUN_0046a710 @ 0046a710  kind=gamemisc  attributed-by=role:vfunc-indirect  size=128 */

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


/* FUN_0046a790 @ 0046a790  kind=gamemisc  attributed-by=role:vfunc-indirect  size=39 */

undefined4 __cdecl FUN_0046a790(int *param_1,int param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  puVar1 = FUN_00475040(param_1,param_2);
  uVar2 = FUN_0045f1d0((int)puVar1);
  FUN_00474fe0(param_1);
  return uVar2;
}


/* FUN_0046a860 @ 0046a860  kind=gamemisc  attributed-by=role:vfunc-indirect  size=133 */

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


/* FUN_0046a8f0 @ 0046a8f0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=41 */

int __cdecl FUN_0046a8f0(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_00475040(param_1,param_2);
  iVar2 = FUN_004ae680(piVar1,1);
  FUN_00474fe0(param_1);
  return iVar2;
}


/* FUN_0046a920 @ 0046a920  kind=gamemisc  attributed-by=role:vfunc-indirect  size=41 */

int __cdecl FUN_0046a920(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_00475040(param_1,param_2);
  iVar2 = FUN_004ae680(piVar1,2);
  FUN_00474fe0(param_1);
  return iVar2;
}


/* FUN_0046a950 @ 0046a950  kind=gamemisc  attributed-by=role:vfunc-indirect  size=35 */

undefined1 __cdecl FUN_0046a950(int *param_1,int param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  
  puVar2 = FUN_00475040(param_1,param_2);
  uVar1 = puVar2[0x1e];
  FUN_00474fe0(param_1);
  return uVar1;
}


/* FUN_0046a9f0 @ 0046a9f0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=64 */

undefined * __cdecl FUN_0046a9f0(int *param_1,int param_2)

{
  undefined *puVar1;
  
  puVar1 = FUN_00475040(param_1,param_2);
  if ((*(ushort *)(puVar1 + 0x1c) & 0x800) != 0) {
    *(ushort *)(puVar1 + 0x1c) = *(ushort *)(puVar1 + 0x1c) & 0xf7ff | 0x1000;
  }
  FUN_00474fe0(param_1);
  return puVar1;
}


/* FUN_0046ace0 @ 0046ace0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=39 */

void __cdecl
FUN_0046ace0(int param_1,byte *param_2,int param_3,uint param_4,int param_5,int param_6,int param_7,
            int param_8)

{
  FUN_0046b0e0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(undefined *)0x0);
  return;
}


/* FUN_0046ad70 @ 0046ad70  kind=gamemisc  attributed-by=role:vfunc-indirect  size=188 */

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


/* FUN_0046ae50 @ 0046ae50  kind=gamemisc  attributed-by=role:vfunc-indirect  size=145 */

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


/* FUN_0046af10 @ 0046af10  kind=gamemisc  attributed-by=role:vfunc-indirect  size=445 */

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


/* FUN_0046b1d0 @ 0046b1d0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=27 */

undefined4 __cdecl FUN_0046b1d0(int param_1)

{
  if ((param_1 != 0) && ((*(byte *)(param_1 + 0x60) & 0x20) == 0)) {
    return 0;
  }
  return 1;
}


/* FUN_0046b1f0 @ 0046b1f0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=88 */

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


