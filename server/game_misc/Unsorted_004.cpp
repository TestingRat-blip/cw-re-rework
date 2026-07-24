// Unsorted_004 (game_misc) -- server. 150 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Unsorted_004.h"

/* FUN_00466b20 @ 00466b20  kind=gamemisc  attributed-by=none  size=22 */

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


/* FUN_00466b40 @ 00466b40  kind=gamemisc  attributed-by=none  size=22 */

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


/* FUN_00466e80 @ 00466e80  kind=gamemisc  attributed-by=none  size=30 */

void __cdecl FUN_00466e80(int param_1)

{
  if (param_1 != 0) {
    DAT_00583e40 = DAT_00583e18;
  }
  return;
}


/* FUN_00466ea0 @ 00466ea0  kind=gamemisc  attributed-by=none  size=114 */

void __cdecl FUN_00466ea0(int param_1,undefined4 param_2,int *param_3)

{
  char *pcVar1;
  int iVar2;
  
  switch(*(undefined1 *)(*param_3 + 0x1e)) {
  case 1:
    pcVar1 = "integer";
    break;
  case 2:
    pcVar1 = "real";
    break;
  case 3:
    pcVar1 = "text";
    break;
  case 4:
    pcVar1 = "blob";
    break;
  default:
    pcVar1 = "null";
  }
  iVar2 = FUN_004b79e0((int *)(param_1 + 8),pcVar1,0xffffffff,'\x01',(undefined *)0x0);
  if (iVar2 == 0x12) {
    *(undefined4 *)(param_1 + 0x38) = 0x12;
    FUN_004b79e0((int *)(param_1 + 8),"string or blob too big",0xffffffff,'\x01',(undefined *)0x0);
  }
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


/* FUN_00467ec0 @ 00467ec0  kind=gamemisc  attributed-by=none  size=11 */

undefined4 __cdecl FUN_00467ec0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
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


/* FUN_00467f40 @ 00467f40  kind=gamemisc  attributed-by=none  size=11 */

undefined4 __cdecl FUN_00467f40(int param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}


/* FUN_00467f50 @ 00467f50  kind=gamemisc  attributed-by=none  size=23 */

void __cdecl FUN_00467f50(int *param_1,undefined4 *param_2)

{
  FUN_004834d0(param_1,param_2,6,(byte *)0x0);
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


/* FUN_004683e0 @ 004683e0  kind=gamemisc  attributed-by=none  size=9 */

void FUN_004683e0(int *param_1,undefined4 *param_2,uint param_3,byte *param_4)

{
  FUN_004834d0(param_1,param_2,param_3,param_4);
  return;
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


/* FUN_00468a70 @ 00468a70  kind=gamemisc  attributed-by=none  size=19 */

undefined1 __cdecl FUN_00468a70(int param_1)

{
  return (&DAT_0056c79b)[*(byte *)(param_1 + 0x3c)];
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


/* FUN_00468e30 @ 00468e30  kind=gamemisc  attributed-by=none  size=32 */

void __cdecl FUN_00468e30(int param_1,void *param_2,size_t param_3,undefined4 *param_4,int *param_5)

{
  FUN_004a0180(param_1,param_2,param_3,0,0,param_4,param_5);
  return;
}


/* FUN_00468e50 @ 00468e50  kind=gamemisc  attributed-by=none  size=32 */

void __cdecl FUN_00468e50(int param_1,void *param_2,size_t param_3,undefined4 *param_4,int *param_5)

{
  FUN_004a0180(param_1,param_2,param_3,1,0,param_4,param_5);
  return;
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


/* FUN_00468f40 @ 00468f40  kind=gamemisc  attributed-by=none  size=30 */

void __cdecl
FUN_00468f40(uint param_1,byte *param_2,size_t param_3,undefined4 *param_4,int *param_5)

{
  FUN_004a5e90(param_1,param_2,param_3,0,param_4,param_5);
  return;
}


/* FUN_00468f60 @ 00468f60  kind=gamemisc  attributed-by=none  size=30 */

void __cdecl
FUN_00468f60(uint param_1,byte *param_2,size_t param_3,undefined4 *param_4,int *param_5)

{
  FUN_004a5e90(param_1,param_2,param_3,1,param_4,param_5);
  return;
}


/* FUN_00468f80 @ 00468f80  kind=gamemisc  attributed-by=none  size=31 */

undefined4 __cdecl FUN_00468f80(int param_1)

{
  if ((param_1 != 0) && ((*(uint *)(param_1 + 0x60) & 0x200) != 0)) {
    return *(undefined4 *)(param_1 + 0x98);
  }
  return 0;
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


/* FUN_00469170 @ 00469170  kind=gamemisc  attributed-by=none  size=70 */

uint * __cdecl FUN_00469170(int param_1)

{
  uint *puVar1;
  uint uVar2;
  
  uVar2 = param_1 + 7U & 0xfffffff8;
  puVar1 = malloc(uVar2 + 8);
  if (puVar1 != (uint *)0x0) {
    *puVar1 = uVar2;
    puVar1[1] = (int)(param_1 + 7U) >> 0x1f;
    return puVar1 + 2;
  }
  FUN_004683f0(7,"failed to allocate %u bytes of memory");
  return (uint *)0x0;
}


/* FUN_004691c0 @ 004691c0  kind=gamemisc  attributed-by=none  size=88 */

int __cdecl FUN_004691c0(int *param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_004bfc30(param_1,param_2);
  if ((iVar1 == 0) &&
     (FUN_004b7790((int *)(param_1[0x11] + (param_2 + -1) * 0x28),param_3),
     *(int *)(*param_1 + 0xc) != 0)) {
    (*DAT_00582b20)();
  }
  return iVar1;
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


/* FUN_00469280 @ 00469280  kind=gamemisc  attributed-by=none  size=14 */

void FUN_00469280(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00469288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free((void *)(param_1 + -8));
  return;
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


/* FUN_004694b0 @ 004694b0  kind=gamemisc  attributed-by=none  size=51 */

int __cdecl FUN_004694b0(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_004bfc30(param_1,param_2);
  if ((iVar1 == 0) && (*(int *)(*param_1 + 0xc) != 0)) {
    (*DAT_00582b20)(*(int *)(*param_1 + 0xc));
  }
  return iVar1;
}


/* FUN_004694f0 @ 004694f0  kind=gamemisc  attributed-by=none  size=17 */

undefined4 __cdecl FUN_004694f0(int param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  return *(undefined4 *)(param_1 + -8);
}


/* FUN_00469510 @ 00469510  kind=gamemisc  attributed-by=none  size=30 */

void __cdecl FUN_00469510(int *param_1,int param_2,void *param_3,size_t param_4,undefined *param_5)

{
  FUN_004709e0(param_1,param_2,param_3,param_4,param_5,'\x01');
  return;
}


/* FUN_00469530 @ 00469530  kind=gamemisc  attributed-by=none  size=86 */

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


/* FUN_00469590 @ 00469590  kind=gamemisc  attributed-by=none  size=30 */

void __cdecl FUN_00469590(int *param_1,int param_2,void *param_3,size_t param_4,undefined *param_5)

{
  FUN_004709e0(param_1,param_2,param_3,param_4,param_5,'\x02');
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


/* FUN_00469760 @ 00469760  kind=gamemisc  attributed-by=none  size=14 */

uint __cdecl FUN_00469760(int param_1)

{
  return param_1 + 7U & 0xfffffff8;
}


/* FUN_00469770 @ 00469770  kind=gamemisc  attributed-by=none  size=20 */

int __cdecl FUN_00469770(int param_1)

{
  if (param_1 != 0) {
    return (int)*(short *)(param_1 + 0x4c);
  }
  return 0;
}


/* FUN_004697a0 @ 004697a0  kind=gamemisc  attributed-by=none  size=39 */

undefined4 __cdecl FUN_004697a0(int param_1,int param_2)

{
  if (((param_1 != 0) && (0 < param_2)) && (param_2 <= *(short *)(param_1 + 0x4e))) {
    return *(undefined4 *)(*(int *)(param_1 + 0x48) + -4 + param_2 * 4);
  }
  return 0;
}


/* FUN_004697d0 @ 004697d0  kind=gamemisc  attributed-by=none  size=21 */

int __cdecl FUN_004697d0(int param_1)

{
  return (*(byte *)(param_1 + 0x10) & 0x10 | 8) << 8;
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


/* FUN_00469940 @ 00469940  kind=gamemisc  attributed-by=none  size=20 */

undefined2 __cdecl FUN_00469940(int param_1)

{
  if (param_1 != 0) {
    return *(undefined2 *)(param_1 + 0x2c);
  }
  return 0;
}


/* FUN_00469960 @ 00469960  kind=gamemisc  attributed-by=none  size=198 */

void __cdecl FUN_00469960(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int *piVar1;
  byte *pbVar2;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  
  pbVar2 = (byte *)FUN_004ae680((int *)*param_3,1);
  piVar1 = (int *)*param_3;
  if (((*(byte *)(piVar1 + 7) & 0x10) == 0) && (iVar3 = FUN_004ae680(piVar1,1), iVar3 == 0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = piVar1[6];
    if ((*(ushort *)(piVar1 + 7) & 0x4000) != 0) {
      uVar6 = uVar6 + piVar1[4];
    }
  }
  if ((pbVar2 != (byte *)0x0) &&
     (pvVar4 = (void *)FUN_00476020(param_1,uVar6 + 1,
                                    ((int)uVar6 >> 0x1f) + (uint)(0xfffffffe < uVar6)),
     pvVar4 != (void *)0x0)) {
    if (0 < (int)uVar6) {
      uVar5 = uVar6;
      pbVar7 = pbVar2;
      do {
        (pbVar7 + 1)[(int)pvVar4 + (-1 - (int)pbVar2)] =
             ~((&DAT_00569720)[*pbVar7] & 0x20) & *pbVar7;
        uVar5 = uVar5 - 1;
        pbVar7 = pbVar7 + 1;
      } while (uVar5 != 0);
    }
    iVar3 = FUN_004b79e0((int *)(param_1 + 8),pvVar4,uVar6,'\x01',FUN_00466dd0);
    if (iVar3 == 0x12) {
      *(undefined4 *)(param_1 + 0x38) = 0x12;
      FUN_004b79e0((int *)(param_1 + 8),"string or blob too big",0xffffffff,'\x01',(undefined *)0x0)
      ;
    }
  }
  return;
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


/* FUN_00469f20 @ 00469f20  kind=gamemisc  attributed-by=none  size=26 */

undefined2 __cdecl FUN_00469f20(int param_1)

{
  if ((param_1 != 0) && (*(int *)(param_1 + 0x14) != 0)) {
    return *(undefined2 *)(param_1 + 0x2c);
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


/* FUN_0046a950 @ 0046a950  kind=gamemisc  attributed-by=none  size=35 */

undefined1 __cdecl FUN_0046a950(int *param_1,int param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  
  puVar2 = FUN_00475040(param_1,param_2);
  uVar1 = puVar2[0x1e];
  FUN_00474fe0(param_1);
  return uVar1;
}


/* FUN_0046a980 @ 0046a980  kind=gamemisc  attributed-by=none  size=98 */

void __cdecl FUN_0046a980(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 8);
  uVar1 = *(undefined4 *)(*piVar3 + 0x20);
  uVar2 = *(undefined4 *)(*piVar3 + 0x24);
  if ((*(ushort *)(param_1 + 0x24) & 0x2460) != 0) {
    FUN_004b7720(piVar3);
  }
  FUN_00494b00(*piVar3,*(undefined4 **)(param_1 + 0x2c));
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined2 *)(param_1 + 0x24) = 4;
  *(undefined1 *)(param_1 + 0x26) = 1;
  return;
}


/* FUN_0046a9f0 @ 0046a9f0  kind=gamemisc  attributed-by=none  size=64 */

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


/* FUN_0046ab70 @ 0046ab70  kind=gamemisc  attributed-by=none  size=96 */

void __cdecl FUN_0046ab70(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 8);
  iVar1 = *(int *)(*piVar2 + 0x48);
  if ((*(ushort *)(param_1 + 0x24) & 0x2460) != 0) {
    FUN_004b7720(piVar2);
  }
  FUN_00494b00(*piVar2,*(undefined4 **)(param_1 + 0x2c));
  *(int *)(param_1 + 0x18) = iVar1;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(int *)(param_1 + 0x1c) = iVar1 >> 0x1f;
  *(undefined2 *)(param_1 + 0x24) = 4;
  *(undefined1 *)(param_1 + 0x26) = 1;
  return;
}


/* FUN_0046ac30 @ 0046ac30  kind=gamemisc  attributed-by=none  size=96 */

void __cdecl FUN_0046ac30(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 8);
  iVar1 = *(int *)(*piVar2 + 0x4c);
  if ((*(ushort *)(param_1 + 0x24) & 0x2460) != 0) {
    FUN_004b7720(piVar2);
  }
  FUN_00494b00(*piVar2,*(undefined4 **)(param_1 + 0x2c));
  *(int *)(param_1 + 0x18) = iVar1;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(int *)(param_1 + 0x1c) = iVar1 >> 0x1f;
  *(undefined2 *)(param_1 + 0x24) = 4;
  *(undefined1 *)(param_1 + 0x26) = 1;
  return;
}


/* FUN_0046ace0 @ 0046ace0  kind=gamemisc  attributed-by=none  size=39 */

void __cdecl
FUN_0046ace0(int param_1,byte *param_2,int param_3,uint param_4,int param_5,int param_6,int param_7,
            int param_8)

{
  FUN_0046b0e0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(undefined *)0x0);
  return;
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


/* FUN_0046ae30 @ 0046ae30  kind=gamemisc  attributed-by=none  size=18 */

void __cdecl FUN_0046ae30(LPCRITICAL_SECTION param_1)

{
  DeleteCriticalSection(param_1);
  FUN_00466dd0((int)param_1);
  return;
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


/* FUN_0046aef0 @ 0046aef0  kind=gamemisc  attributed-by=none  size=14 */

void __cdecl FUN_0046aef0(LPCRITICAL_SECTION param_1)

{
  EnterCriticalSection(param_1);
  return;
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


/* FUN_0046b0d0 @ 0046b0d0  kind=gamemisc  attributed-by=none  size=14 */

void __cdecl FUN_0046b0d0(LPCRITICAL_SECTION param_1)

{
  LeaveCriticalSection(param_1);
  return;
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


/* FUN_0046b1c0 @ 0046b1c0  kind=gamemisc  attributed-by=none  size=14 */

undefined4 __cdecl FUN_0046b1c0(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x18);
}


/* FUN_0046b1d0 @ 0046b1d0  kind=gamemisc  attributed-by=none  size=27 */

undefined4 __cdecl FUN_0046b1d0(int param_1)

{
  if ((param_1 != 0) && ((*(byte *)(param_1 + 0x60) & 0x20) == 0)) {
    return 0;
  }
  return 1;
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


/* FUN_004738d0 @ 004738d0  kind=gamemisc  attributed-by=none  size=4528 */

undefined8 __cdecl
FUN_004738d0(undefined4 *param_1,int param_2,ushort param_3,uint param_4,uint param_5)

{
  char cVar1;
  uint uVar2;
  ushort uVar3;
  byte bVar4;
  undefined1 uVar5;
  bool bVar6;
  short sVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  byte *pbVar12;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  uint uVar13;
  uint *puVar14;
  char *pcVar15;
  int iVar16;
  undefined4 *puVar17;
  int *piVar18;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 *puVar19;
  int *piVar20;
  int iVar21;
  byte *pbVar22;
  uint *puVar23;
  int *piVar24;
  int iVar25;
  uint local_64;
  uint uStack_60;
  byte *local_58;
  uint *local_54;
  int *local_50;
  byte *local_4c;
  uint local_48;
  byte *local_44;
  uint local_40;
  int *local_3c;
  int *local_38;
  int *local_34;
  byte *local_30;
  int *local_2c;
  byte *local_28;
  int *local_24;
  int local_20;
  byte *local_1c;
  uint local_18;
  int *local_14;
  undefined4 *local_10;
  uint *local_c;
  uint local_8;
  
  local_10 = (undefined4 *)param_1[8];
  piVar20 = (int *)*param_1;
  puVar23 = param_1 + param_2 * 0x16 + 0xe;
  piVar10 = (int *)piVar20[2];
  local_20 = 0;
  iVar25 = param_1[1] + (uint)(byte)puVar23[0xd] * 0x48;
  local_2c = (int *)(iVar25 + 8);
  local_8 = *(uint *)(iVar25 + 0x34);
  local_18 = *puVar23 >> 0x18 & 1;
  if (((*puVar23 & 0x400000) == 0) || (local_54 = (uint *)0x1, (param_3 & 0x20) != 0)) {
    local_54 = (uint *)0x0;
  }
  local_3c = piVar20;
  local_14 = piVar10;
  local_c = puVar23;
  local_28 = (byte *)FUN_004b6b80(piVar10);
  puVar23[10] = (uint)local_28;
  puVar23[9] = (uint)local_28;
  local_48 = FUN_004b6b80(piVar10);
  puVar23[0xb] = local_48;
  if (((char)puVar23[0xd] != '\0') && ((*(byte *)(local_2c + 8) & 8) != 0)) {
    uVar8 = piVar20[0x13] + 1;
    piVar20[0x13] = uVar8;
    puVar23[6] = uVar8;
    FUN_004ae830(piVar10,7,0,uVar8);
  }
  piVar18 = local_14;
  if ((*(byte *)(local_2c + 9) & 4) == 0) {
    uVar8 = *puVar23;
    if ((uVar8 & 0x8000000) == 0) {
      if ((uVar8 & 0x1000) == 0) {
        if ((uVar8 & 0x2000) == 0) {
          if ((uVar8 & 0x30000) == 0) {
            if ((uVar8 & 0x10000000) != 0) {
              local_18 = piVar20[0x12];
              piVar20[0x13] = piVar20[0x13] + 1;
              piVar20[0x12] = local_18 + 1;
              local_40 = piVar20[0x13];
              local_34 = (int *)0x0;
              local_1c = (byte *)0x0;
              local_4c = (byte *)0x0;
              local_58 = (byte *)FUN_004b6b80(piVar10);
              piVar18 = (int *)puVar23[4];
              local_38 = (int *)piVar18[3];
              local_28 = (byte *)0x0;
              *(undefined1 *)((int)puVar23 + 0x35) = 3;
              puVar23[0xe] = local_40;
              local_30 = (byte *)0x0;
              if ((int)param_1[7] < 2) {
                local_24 = (int *)param_1[1];
                puVar14 = local_54;
              }
              else {
                local_54 = (uint *)((param_1[7] - param_2) + -1);
                local_24 = FUN_00494b90(*piVar20,(int)local_54 * 0x48 + 0x50);
                if (local_24 == (int *)0x0) {
                  return CONCAT44(param_5,param_4);
                }
                sVar7 = (short)local_54 + 1;
                *(short *)((int)local_24 + 2) = sVar7;
                *(short *)local_24 = sVar7;
                piVar10 = local_2c;
                piVar11 = local_24 + 2;
                for (iVar25 = 0x12; iVar25 != 0; iVar25 = iVar25 + -1) {
                  *piVar11 = *piVar10;
                  piVar10 = piVar10 + 1;
                  piVar11 = piVar11 + 1;
                }
                local_50 = (int *)(param_1[1] + 8);
                puVar23 = local_c;
                piVar10 = local_14;
                puVar14 = local_54;
                if (0 < (int)local_54) {
                  puVar14 = local_c + 0x23;
                  piVar11 = local_24 + 0x14;
                  do {
                    uVar8 = *puVar14;
                    puVar14 = puVar14 + 0x16;
                    piVar20 = local_50 + (uint)(byte)uVar8 * 0x12;
                    piVar24 = piVar11;
                    for (iVar25 = 0x12; iVar25 != 0; iVar25 = iVar25 + -1) {
                      *piVar24 = *piVar20;
                      piVar20 = piVar20 + 1;
                      piVar24 = piVar24 + 1;
                    }
                    local_54 = (uint *)((int)local_54 + -1);
                    piVar11 = piVar11 + 0x12;
                    piVar20 = local_3c;
                  } while (local_54 != (uint *)0x0);
                }
              }
              local_54 = puVar14;
              uVar3 = param_3 & 8;
              param_3 = param_3 & 8;
              if (uVar3 == 0) {
                local_1c = (byte *)(piVar20[0x13] + 1);
                local_4c = (byte *)(piVar20[0x13] + 2);
                piVar20[0x13] = (int)local_4c;
                FUN_004ae830(piVar10,10,0,local_1c);
              }
              uVar8 = FUN_004ae830(piVar10,7,0,local_40);
              pbVar22 = (byte *)0x0;
              pbVar12 = local_28;
              if (1 < (int)local_10[6]) {
                local_54 = (uint *)0x0;
                if ((int)local_10[6] < 1) {
                  pbVar22 = (byte *)0x0;
                }
                else {
                  local_50 = (int *)0x0;
                  pbVar22 = (byte *)0x0;
                  do {
                    iVar25 = local_10[8];
                    local_44 = *(byte **)((int)local_50 + iVar25);
                    if ((((local_44[2] & 1) == 0) &&
                        ((*(byte *)((int)local_50 + iVar25 + 0x12) & 0x12) == 0)) &&
                       ((*(ushort *)((int)local_50 + iVar25 + 0x10) & 0xfff) != 0)) {
                      pcVar15 = (char *)FUN_00478bb0(*piVar20,(undefined4 *)local_44,0,(int *)0x0);
                      pbVar22 = (byte *)FUN_004966d0(*piVar20,(char *)pbVar22,pcVar15);
                    }
                    puVar23 = local_c;
                    piVar10 = local_14;
                    local_54 = (uint *)((int)local_54 + 1);
                    local_50 = local_50 + 10;
                  } while ((int)local_54 < (int)local_10[6]);
                  pbVar12 = pbVar22;
                  if (pbVar22 != (byte *)0x0) {
                    local_28 = pbVar22;
                    local_44 = (byte *)FUN_00494b90(*piVar20,0x2c);
                    if (local_44 != (byte *)0x0) {
                      memset(local_44,0,0x2c);
                      *local_44 = 0x45;
                      local_44[0x1e] = 0xff;
                      local_44[0x1f] = 0xff;
                      local_44[0x14] = 1;
                      local_44[0x15] = 0;
                      local_44[0x16] = 0;
                      local_44[0x17] = 0;
                    }
                    FUN_00496a30(*piVar20,(int)local_44,(undefined4 *)0x0,(undefined4 *)local_28);
                    pbVar22 = local_44;
                    pbVar12 = local_44;
                    if ((local_44 != (byte *)0x0) &&
                       (pbVar12 = local_44, *(int *)(*piVar20 + 0x5c) < *(int *)(local_44 + 0x14)))
                    {
                      FUN_004962b0(piVar20,(byte *)"Expression tree is too large (maximum depth %d)"
                                  );
                      pbVar22 = local_44;
                      pbVar12 = local_44;
                    }
                  }
                }
              }
              local_28 = pbVar12;
              local_3c = (int *)0x0;
              if (0 < local_38[6]) {
                do {
                  piVar10 = local_14;
                  iVar25 = local_38[8];
                  if ((*(uint *)(iVar25 + 8 + (int)local_3c * 0x28) == local_8) ||
                     (puVar23 = local_c, *(short *)(iVar25 + 0x10 + (int)local_3c * 0x28) == 0x200))
                  {
                    pbVar12 = *(byte **)(iVar25 + (int)local_3c * 0x28);
                    if (pbVar22 != (byte *)0x0) {
                      *(byte **)(pbVar22 + 8) = pbVar12;
                      pbVar12 = pbVar22;
                    }
                    local_54 = FUN_004bb240(piVar20,(short *)local_24,pbVar12,(undefined2 *)0x0,
                                            (int *)0x0,0xf0,local_18);
                    if (local_54 != (uint *)0x0) {
                      FUN_004778d0(piVar20,(int)local_24,local_54 + 0xe,param_2,
                                   (uint)(byte)puVar23[0xd],0);
                      if (param_3 == 0) {
                        piVar11 = local_3c;
                        if (local_3c == (int *)(local_38[6] + -1)) {
                          piVar11 = (int *)0xffffffff;
                        }
                        iVar25 = FUN_004970c0(piVar20,(int *)local_2c[4],-1,local_8,(int)local_4c,
                                              '\0');
                        FUN_004ae960(piVar10,0x72,local_1c,piVar10[7] + 2,iVar25,piVar11);
                        puVar23 = local_c;
                      }
                      FUN_004ae830(piVar10,2,local_40,local_58);
                      if (*(byte *)((int)local_54 + 0xd) != 0) {
                        local_30 = (byte *)0x1;
                      }
                      if ((((local_54[0xe] & 0xf0000) == 0) || ((local_54[0xe] & 0x20000000) != 0))
                         || ((local_3c != (int *)0x0 && ((int *)local_54[0x12] != local_34)))) {
                        local_34 = (int *)0x0;
                      }
                      else {
                        local_34 = (int *)local_54[0x12];
                      }
                      FUN_004bbe40((int *)local_54);
                    }
                  }
                  local_3c = (int *)((int)local_3c + 1);
                  pbVar22 = local_28;
                } while ((int)local_3c < local_38[6]);
              }
              puVar23[0x10] = (uint)local_34;
              if (local_34 != (int *)0x0) {
                puVar23[8] = local_18;
              }
              if (local_28 != (byte *)0x0) {
                local_28[8] = 0;
                local_28[9] = 0;
                local_28[10] = 0;
                local_28[0xb] = 0;
                FUN_00498790(*piVar20,(undefined4 *)local_28);
              }
              if (uVar8 < (uint)piVar10[7]) {
                *(int *)(piVar10[1] + 4 + uVar8 * 0x14) = piVar10[7];
              }
              FUN_004ae830(piVar10,1,0,puVar23[9]);
              if (piVar10[10] != 0) {
                *(int *)(piVar10[10] - ((int)local_58 * 4 + 4)) = piVar10[7];
              }
              if (1 < (int)param_1[7]) {
                FUN_00494b00(*piVar20,local_24);
              }
              uVar8 = local_8;
              if (local_30 == (byte *)0x0) {
                FUN_00476c10((int)puVar23,piVar18);
                uVar8 = local_8;
              }
              goto LAB_004743ea;
            }
            *(undefined *)((int)puVar23 + 0x35) = (&DAT_00569fa4)[local_18];
            puVar23[0xe] = local_8;
            iVar25 = FUN_004ae830(piVar10,(&DAT_0056a01c)[local_18],local_8,local_28);
            puVar23[0xf] = iVar25 + 1;
          }
          else {
            pbVar22 = (byte *)(uint)(ushort)puVar23[1];
            local_30 = (byte *)puVar23[4];
            local_2c = (int *)puVar23[8];
            local_4c = (byte *)0x0;
            local_28 = (byte *)0x0;
            local_1c = (byte *)0x0;
            local_44 = (byte *)0x0;
            if (pbVar22 == *(byte **)((int)local_30 + 0x24)) {
              local_3c = (int *)0xffffffff;
            }
            else {
              local_3c = *(int **)(*(int *)((int)local_30 + 4) + (int)pbVar22 * 4);
            }
            if ((((param_3 & 1) != 0) && ((uVar8 & 0x800000) != 0)) &&
               ((int)pbVar22 < *(int *)((int)local_30 + 0x24))) {
              local_4c = (byte *)0x1;
              local_44 = (byte *)0x1;
            }
            pbVar12 = local_44;
            if ((uVar8 & 0x100000) != 0) {
              local_1c = (byte *)FUN_00479c50(local_10,local_8,(int)local_3c,param_4,param_5,0x18,
                                              (int)local_30);
              pbVar12 = (byte *)1;
            }
            if ((*puVar23 & 0x200000) != 0) {
              local_28 = (byte *)FUN_00479c50(local_10,local_8,(int)local_3c,param_4,param_5,0x24,
                                              (int)local_30);
              pbVar12 = (byte *)0x1;
            }
            local_24 = (int *)FUN_00472ef0(piVar20,puVar23,local_10,param_4,param_5,(int)pbVar12,
                                           &local_34);
            local_38 = FUN_00494db0(*piVar20,(char *)local_34);
            pbVar12 = local_1c;
            local_3c = (int *)puVar23[10];
            local_58 = *(byte **)((int)local_30 + 0x24);
            if ((((int)pbVar22 < (int)local_58) &&
                (local_18 == (pbVar22[*(int *)((int)local_30 + 0x1c)] == 0))) ||
               ((local_18 != 0 && (local_58 == pbVar22)))) {
              local_1c = local_28;
              local_28 = pbVar12;
            }
            if ((local_28 == (byte *)0x0) || (local_44 = (byte *)0x0, (local_28[0x10] & 0x28) != 0))
            {
              local_44 = (byte *)0x1;
            }
            if ((local_1c == (byte *)0x0) || (local_50 = (int *)0x0, (local_1c[0x10] & 0x28) != 0))
            {
              local_50 = (int *)0x1;
            }
            if ((local_28 != (byte *)0x0) || (local_40 = 0, pbVar22 != (byte *)0x0)) {
              local_40 = 1;
            }
            if (local_28 == (byte *)0x0) {
              local_30 = pbVar22;
              if (local_4c != (byte *)0x0) {
                FUN_004ae830(piVar18,10,0,pbVar22 + (int)local_24);
                local_44 = (byte *)0x0;
                local_40 = 1;
                goto LAB_004741e9;
              }
            }
            else {
              pbVar12 = (byte *)((int)local_24 + (int)pbVar22);
              local_30 = *(byte **)(*(int *)local_28 + 0xc);
              FUN_00496f30(piVar20,local_30,(int)pbVar12);
              FUN_004975c0(piVar18,local_30,pbVar12,local_3c);
              puVar23 = local_c;
              if (local_34 != (int *)0x0) {
                pbVar12 = pbVar22 + (int)local_34;
                iVar25 = FUN_00493750((char *)local_30,*pbVar12);
                if ((char)iVar25 == 'b') {
                  *pbVar12 = 0x62;
                }
                bVar6 = FUN_004993e0((char *)local_30,*pbVar12);
                puVar23 = local_c;
                if (CONCAT31(extraout_var,bVar6) != 0) {
                  *pbVar12 = 0x62;
                }
              }
LAB_004741e9:
              local_30 = pbVar22 + 1;
            }
            FUN_004731c0((int)piVar20,(int)local_24,(size_t)local_30,local_34);
            FUN_004ae960(piVar18,(&UNK_00569bdc)[((int)local_44 + local_40 * 2) * 2 + local_18],
                         local_2c,local_3c,local_24,(int *)local_30);
            local_4c = pbVar22;
            if (local_1c != (byte *)0x0) {
              pbVar12 = (byte *)((int)local_24 + (int)pbVar22);
              local_30 = *(byte **)(*(int *)local_1c + 0xc);
              FUN_00496d90((int)piVar20,(int)pbVar12,1);
              FUN_00496f30(piVar20,local_30,(int)pbVar12);
              FUN_004975c0(piVar18,local_30,pbVar12,local_3c);
              if (local_38 != (int *)0x0) {
                pbVar12 = (byte *)((int)local_38 + (int)pbVar22);
                iVar25 = FUN_00493750((char *)local_30,*pbVar12);
                if ((char)iVar25 == 'b') {
                  *pbVar12 = 0x62;
                }
                bVar6 = FUN_004993e0((char *)local_30,*pbVar12);
                if (CONCAT31(extraout_var_00,bVar6) != 0) {
                  *pbVar12 = 0x62;
                }
              }
              local_4c = pbVar22 + 1;
              FUN_004731c0((int)piVar20,(int)local_24,(size_t)local_4c,local_38);
              puVar23 = local_c;
            }
            FUN_00494b00(*piVar20,local_34);
            FUN_00494b00(*piVar20,local_38);
            puVar23[0xf] = piVar18[7];
            if ((local_1c == (byte *)0x0) && (pbVar22 == (byte *)0x0)) {
              iVar25 = 0;
            }
            else {
              iVar25 = 1;
            }
            if ((&DAT_00569be4)[(local_18 + 1) * iVar25] != -0x6b) {
              FUN_004ae960(piVar18,(&DAT_00569be4)[(local_18 + 1) * iVar25],local_2c,local_3c,
                           local_24,(int *)local_4c);
              FUN_004aee30((int)piVar18,local_50 != (int *)local_18);
            }
            local_50 = (int *)FUN_0049cb40((int)piVar20);
            if ((*puVar23 & 0x300000) != 0) {
              FUN_004ae890(piVar18,0x1d,local_2c,pbVar22,local_50);
              FUN_004ae830(piVar18,0x49,local_50,local_48);
            }
            FUN_004a68f0((int)piVar20,(int)local_50);
            FUN_00476c10((int)puVar23,(int *)local_28);
            FUN_00476c10((int)puVar23,(int *)local_1c);
            if (local_54 == (uint *)0x0) {
              local_20 = FUN_0049cb40((int)piVar20);
              FUN_004ae830(piVar18,99,local_2c,local_20);
              FUN_00496df0(piVar20,local_8,-1,local_20);
              FUN_004ae830(piVar18,0x32,extraout_EDX_00,local_20);
            }
            if ((*puVar23 & 0x2000000) == 0) {
              uVar5 = 0x5f;
              if (local_18 != 0) {
                uVar5 = 0x5c;
              }
              *(undefined1 *)((int)puVar23 + 0x35) = uVar5;
            }
            else {
              *(undefined1 *)((int)puVar23 + 0x35) = 0x95;
            }
            puVar23[0xe] = (uint)local_2c;
            uVar8 = local_8;
            piVar10 = piVar18;
            if (-1 < (int)*puVar23) goto LAB_004743ea;
          }
          *(undefined1 *)((int)puVar23 + 0x36) = 1;
          uVar8 = local_8;
        }
        else {
          local_3c = (int *)0x95;
          local_44 = (byte *)0x0;
          piVar11 = FUN_00479c50(local_10,local_8,-1,param_4,param_5,0x24,0);
          local_24 = FUN_00479c50(local_10,local_8,-1,param_4,param_5,0x18,0);
          piVar18 = piVar11;
          if (local_18 != 0) {
            piVar18 = local_24;
            local_24 = piVar11;
          }
          if (piVar18 == (int *)0x0) {
            uVar5 = 0x48;
            if (local_18 != 0) {
              uVar5 = 0x43;
            }
            FUN_004ae830(piVar10,uVar5,local_8,local_28);
          }
          else {
            pbVar22 = (byte *)*piVar18;
            local_2c = (int *)0x302e2f31;
            iVar25 = FUN_00498470((int)piVar20,*(undefined4 *)(pbVar22 + 0xc),(int *)&local_58);
            piVar10 = local_14;
            FUN_004ae890(local_14,(&stack0xffffff87)[*pbVar22],local_8,local_28,iVar25);
            FUN_00496d90((int)piVar20,iVar25,1);
            FUN_004a68f0((int)piVar20,(int)local_58);
            puVar23 = local_c;
            FUN_00476c10((int)local_c,piVar18);
          }
          if (local_24 != (int *)0x0) {
            pcVar15 = (char *)*local_24;
            piVar20[0x13] = piVar20[0x13] + 1;
            local_44 = (byte *)piVar20[0x13];
            FUN_00496f30(piVar20,*(byte **)(pcVar15 + 0xc),(int)local_44);
            puVar23 = local_c;
            cVar1 = *pcVar15;
            if ((cVar1 == 'O') || (cVar1 == 'M')) {
              local_3c = (int *)((uint)(local_18 == 0) * 2 + 0x4e);
            }
            else {
              local_3c = (int *)((uint)(local_18 != 0) * 2 + 0x4d);
            }
            FUN_00476c10((int)local_c,local_24);
          }
          piVar11 = local_3c;
          uVar8 = piVar10[7];
          local_58 = (byte *)0x5c;
          uVar5 = 0x5f;
          if (local_18 != 0) {
            uVar5 = 0x5c;
          }
          *(undefined1 *)((int)puVar23 + 0x35) = uVar5;
          puVar23[0xe] = local_8;
          puVar23[0xf] = uVar8;
          if ((piVar18 == (int *)0x0) && (local_24 == (int *)0x0)) {
            *(undefined1 *)((int)puVar23 + 0x36) = 1;
          }
          uVar8 = local_8;
          if (local_3c != (int *)0x95) {
            local_20 = FUN_0049cb40((int)piVar20);
            FUN_004ae830(piVar10,0x41,local_8,local_20);
            FUN_00496df0(piVar20,local_8,-1,local_20);
            FUN_004ae890(piVar10,(char)piVar11,local_44,local_28,extraout_EDX);
            uVar8 = local_8;
            if (piVar10[1] != 0) {
              *(undefined1 *)(piVar10[1] + -0x11 + piVar10[7] * 0x14) = 0x6b;
            }
          }
        }
      }
      else {
        if (*(char *)((int)piVar20 + 0x13) == '\0') {
          piVar20[0x13] = piVar20[0x13] + 1;
          iVar25 = piVar20[0x13];
        }
        else {
          bVar4 = *(char *)((int)piVar20 + 0x13) - 1;
          *(byte *)((int)piVar20 + 0x13) = bVar4;
          iVar25 = piVar20[bVar4 + 7];
        }
        local_20 = iVar25;
        piVar10 = FUN_00479c50(local_10,local_8,-1,param_4,param_5,3,0);
        iVar25 = FUN_00473660(piVar20,piVar10,(int)puVar23,iVar25);
        uVar2 = puVar23[10];
        FUN_004ae830(local_14,0x15,iVar25,uVar2);
        uVar8 = local_8;
        FUN_004ae890(local_14,0x36,local_8,uVar2,iVar25);
        FUN_00496df0(piVar20,uVar8,-1,iVar25);
        *(undefined1 *)((int)local_c + 0x35) = 0x95;
        piVar10 = local_14;
      }
    }
    else {
      local_34 = (int *)puVar23[4];
      iVar16 = *local_34;
      pbVar22 = (byte *)local_34[4];
      local_44 = (byte *)local_34[1];
      piVar20[0x17] = piVar20[0x17] + 1;
      local_40 = iVar16 + 2;
      iVar25 = piVar20[0x10];
      if (piVar20[0xf] < (int)local_40) {
        iVar25 = piVar20[0x13] + 1;
        piVar20[0x13] = piVar20[0x13] + local_40;
      }
      else {
        piVar20[0xf] = piVar20[0xf] - local_40;
        piVar20[0x10] = iVar25 + local_40;
      }
      local_18 = 1;
      local_1c = pbVar22;
      if (0 < iVar16) {
        do {
          iVar21 = 0;
          if (0 < iVar16) {
            do {
              if (*(uint *)(pbVar22 + iVar21 * 8) == local_18) {
                local_38 = (int *)(iVar25 + local_18 + 1);
                pbVar22 = *(byte **)(*(int *)(local_10[8] +
                                             *(int *)((int)local_44 + 8 + iVar21 * 0xc) * 0x28) +
                                    0xc);
                if ((pbVar22 == (byte *)0x0) || (*pbVar22 != 0x84)) {
                  local_50 = (int *)FUN_00497780(piVar20,pbVar22,(int)local_38);
                  pbVar22 = local_1c;
                  if (((local_50 == local_38) ||
                      (local_58 = (byte *)piVar20[2], local_58 == (byte *)0x0)) ||
                     ((local_54 = *(uint **)(local_58 + 0x1c),
                      *(int *)(local_58 + 0x20) <= (int)local_54 &&
                      (iVar9 = FUN_0047de10((int *)local_58), pbVar22 = local_1c, iVar9 != 0))))
                  break;
                  *(int *)(local_58 + 0x1c) = *(int *)(local_58 + 0x1c) + 1;
                  iVar9 = *(int *)(local_58 + 4);
                  *(int **)(iVar9 + 4 + (int)local_54 * 0x14) = local_50;
                  *(undefined2 *)(iVar9 + (int)local_54 * 0x14) = 0xf;
                }
                else {
                  local_50 = *(int **)(pbVar22 + 0x18);
                  local_58 = (byte *)piVar20[2];
                  local_54 = *(uint **)(local_58 + 0x1c);
                  if ((*(int *)(local_58 + 0x20) <= (int)local_54) &&
                     (iVar9 = FUN_0047de10((int *)local_58), pbVar22 = local_1c, iVar9 != 0)) break;
                  *(int *)(local_58 + 0x1c) = *(int *)(local_58 + 0x1c) + 1;
                  iVar9 = *(int *)(local_58 + 4);
                  *(int **)(iVar9 + 4 + (int)local_54 * 0x14) = local_50;
                  *(undefined2 *)(iVar9 + (int)local_54 * 0x14) = 0xe;
                  piVar20 = local_3c;
                }
                *(undefined4 *)(iVar9 + 0x10 + (int)local_54 * 0x14) = 0;
                *(undefined4 *)(iVar9 + 0xc + (int)local_54 * 0x14) = 0;
                *(int **)(iVar9 + 8 + (int)local_54 * 0x14) = local_38;
                *(undefined1 *)(iVar9 + 3 + (int)local_54 * 0x14) = 0;
                pbVar22 = local_1c;
                break;
              }
              iVar21 = iVar21 + 1;
            } while (iVar21 < iVar16);
          }
        } while ((iVar21 != iVar16) && (local_18 = local_18 + 1, (int)local_18 <= iVar16));
      }
      piVar10 = local_14;
      local_54 = (uint *)local_34[5];
      local_58 = (byte *)local_14[7];
      if (((int)local_58 < local_14[8]) || (iVar21 = FUN_0047de10(local_14), iVar21 == 0)) {
        piVar10[7] = piVar10[7] + 1;
        iVar21 = piVar10[1];
        *(uint **)(iVar21 + 4 + (int)local_58 * 0x14) = local_54;
        *(undefined2 *)(iVar21 + (int)local_58 * 0x14) = 7;
        *(undefined1 *)(iVar21 + 3 + (int)local_58 * 0x14) = 0;
        *(int *)(iVar21 + 8 + (int)local_58 * 0x14) = iVar25;
        *(undefined4 *)(iVar21 + 0xc + (int)local_58 * 0x14) = 0;
        *(undefined4 *)(iVar21 + 0x10 + (int)local_58 * 0x14) = 0;
      }
      local_58 = (byte *)piVar10[7];
      if (((int)local_58 < piVar10[8]) || (iVar21 = FUN_0047de10(piVar10), iVar21 == 0)) {
        piVar10[7] = piVar10[7] + 1;
        iVar21 = piVar10[1];
        *(undefined2 *)(iVar21 + (int)local_58 * 0x14) = 7;
        iVar21 = iVar21 + (int)local_58 * 0x14;
        *(uint *)(iVar21 + 4) = local_18 - 1;
        *(undefined1 *)(iVar21 + 3) = 0;
        *(int *)(iVar21 + 8) = iVar25 + 1;
        *(undefined4 *)(iVar21 + 0xc) = 0;
        *(undefined4 *)(iVar21 + 0x10) = 0;
      }
      local_54 = (uint *)0xfffffffe;
      if (local_34[7] != 0) {
        local_54 = (uint *)0xfffffff5;
      }
      local_58 = (byte *)piVar10[7];
      local_50 = (int *)local_34[6];
      if (((int)local_58 < piVar10[8]) || (iVar21 = FUN_0047de10(piVar10), iVar21 == 0)) {
        iVar21 = piVar10[1];
        piVar10[7] = piVar10[7] + 1;
        *(uint *)(iVar21 + 4 + (int)local_58 * 0x14) = local_8;
        *(byte **)(iVar21 + 8 + (int)local_58 * 0x14) = local_28;
        *(int *)(iVar21 + 0xc + (int)local_58 * 0x14) = iVar25;
        *(undefined2 *)(iVar21 + (int)local_58 * 0x14) = 0x88;
        *(undefined1 *)(iVar21 + 3 + (int)local_58 * 0x14) = 0;
        *(undefined4 *)(iVar21 + 0x10 + (int)local_58 * 0x14) = 0;
        pbVar22 = local_58;
        piVar20 = local_3c;
      }
      else {
        pbVar22 = (byte *)0x1;
      }
      FUN_004aecc0(piVar10,(int)pbVar22,local_50,(size_t)local_54);
      puVar23 = local_c;
      local_34[7] = 0;
      if (0 < iVar16) {
        local_44 = (byte *)((int)local_44 + 8);
        pbVar22 = local_1c + 4;
        do {
          if (*pbVar22 != 0) {
            FUN_00476c10((int)puVar23,(int *)(local_10[8] + *(int *)local_44 * 0x28));
          }
          local_44 = (byte *)((int)local_44 + 0xc);
          pbVar22 = pbVar22 + 8;
          iVar16 = iVar16 + -1;
          piVar20 = local_3c;
        } while (iVar16 != 0);
      }
      local_c[0xe] = local_8;
      *(undefined1 *)((int)local_c + 0x35) = 0x8a;
      local_c[0xf] = local_14[7];
      piVar10 = piVar20 + 0x1d;
      iVar16 = 10;
      do {
        iVar21 = *piVar10;
        if ((iVar25 <= iVar21) && (iVar21 <= (int)(iVar25 + (local_40 - 1)))) {
          if ((char)piVar10[-2] != '\0') {
            if (*(byte *)((int)piVar20 + 0x13) < 8) {
              piVar20[*(byte *)((int)piVar20 + 0x13) + 7] = iVar21;
              *(char *)((int)piVar20 + 0x13) = *(char *)((int)piVar20 + 0x13) + '\x01';
            }
            *(undefined1 *)(piVar10 + -2) = 0;
          }
          *piVar10 = 0;
        }
        piVar10 = piVar10 + 6;
        iVar16 = iVar16 + -1;
      } while (iVar16 != 0);
      if (piVar20[0xf] < (int)local_40) {
        piVar20[0xf] = local_40;
        piVar20[0x10] = iVar25;
      }
      piVar20[0x17] = piVar20[0x17] + -1;
      piVar18 = piVar20 + 0x1d;
      iVar25 = 10;
      do {
        if ((*piVar18 != 0) && (piVar20[0x17] < piVar18[-1])) {
          if ((char)piVar18[-2] != '\0') {
            if (*(byte *)((int)piVar20 + 0x13) < 8) {
              piVar20[*(byte *)((int)piVar20 + 0x13) + 7] = *piVar18;
              *(char *)((int)piVar20 + 0x13) = *(char *)((int)piVar20 + 0x13) + '\x01';
            }
            *(undefined1 *)(piVar18 + -2) = 0;
          }
          *piVar18 = 0;
        }
        piVar18 = piVar18 + 6;
        iVar25 = iVar25 + -1;
        uVar8 = local_8;
        piVar10 = local_14;
      } while (iVar25 != 0);
    }
  }
  else {
    iVar25 = local_2c[7];
    FUN_004ae830(piVar10,7,local_2c[6] + -1,iVar25);
    uVar8 = FUN_004ae7d0(piVar10,4,iVar25);
    local_c[0xf] = uVar8;
    FUN_004ae830(piVar10,0x1b,iVar25 + 1,local_28);
    *(undefined1 *)((int)local_c + 0x35) = 1;
    uVar8 = local_8;
  }
LAB_004743ea:
  puVar14 = local_c;
  puVar23 = (uint *)local_10[1];
  uVar13 = 0;
  uVar2 = *puVar23;
  if (0 < (int)uVar2) {
    do {
      puVar23 = puVar23 + 1;
      if (*puVar23 == uVar8) {
        local_64 = 1 << (uVar13 & 0x1f);
        uStack_60 = 0;
        if (0x1f < uVar13) {
          uStack_60 = local_64;
        }
        local_64 = local_64 ^ uStack_60;
        if (0x3f < uVar13) {
          uStack_60 = local_64;
        }
        goto LAB_0047441e;
      }
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < (int)uVar2);
  }
  uStack_60 = 0;
  local_64 = 0;
LAB_0047441e:
  uVar8 = param_4 & ~local_64;
  local_44 = (byte *)(param_5 & ~uStack_60);
  puVar17 = (undefined4 *)local_10[8];
  for (local_58 = (byte *)local_10[6]; 0 < (int)local_58; local_58 = local_58 + -1) {
    if ((*(byte *)((int)puVar17 + 0x12) & 6) == 0) {
      if ((puVar17[8] & uVar8) == 0 && (puVar17[9] & (uint)local_44) == 0) {
        if ((puVar14[6] == 0) || ((((char *)*puVar17)[2] & 1U) != 0)) {
          FUN_004988a0(piVar20,(char *)*puVar17,local_48,8);
          *(byte *)((int)puVar17 + 0x12) = *(byte *)((int)puVar17 + 0x12) | 4;
        }
      }
      else {
        *(undefined1 *)((int)param_1 + 0xd) = 1;
      }
    }
    puVar17 = puVar17 + 10;
    piVar10 = local_14;
  }
  uVar2 = local_c[6];
  if (uVar2 == 0) goto LAB_00474a36;
  local_c[0xc] = piVar10[7];
  iVar25 = piVar10[7];
  iVar16 = piVar10[8];
  if (iVar25 < iVar16) {
LAB_004749b7:
    iVar16 = piVar10[1];
    piVar10[7] = piVar10[7] + 1;
    *(undefined2 *)(iVar16 + iVar25 * 0x14) = 7;
    *(undefined1 *)(iVar16 + 3 + iVar25 * 0x14) = 0;
    *(undefined4 *)(iVar16 + 4 + iVar25 * 0x14) = 1;
    *(uint *)(iVar16 + 8 + iVar25 * 0x14) = uVar2;
    *(undefined4 *)(iVar16 + 0xc + iVar25 * 0x14) = 0;
    *(undefined4 *)(iVar16 + 0x10 + iVar25 * 0x14) = 0;
  }
  else {
    if (iVar16 == 0) {
      iVar16 = 0x33;
    }
    else {
      iVar16 = iVar16 * 2;
    }
    puVar17 = FUN_00494cf0(*piVar10,(undefined4 *)piVar10[1],iVar16 * 0x14);
    if (puVar17 != (undefined4 *)0x0) {
      iVar16 = *piVar10;
      if (((iVar16 == 0) || (puVar17 < *(undefined4 **)(iVar16 + 0x104))) ||
         (*(undefined4 **)(iVar16 + 0x108) <= puVar17)) {
        uVar13 = (*DAT_00582af0._4_4_)();
      }
      else {
        uVar13 = (uint)*(ushort *)(iVar16 + 0xe8);
      }
      piVar10[8] = uVar13 / 0x14;
      piVar10[1] = (int)puVar17;
      goto LAB_004749b7;
    }
  }
  FUN_00496a90((int)piVar20);
  iVar25 = 0;
  puVar17 = (undefined4 *)local_10[8];
  puVar19 = local_10;
  if (0 < (int)local_10[6]) {
    do {
      if (((*(byte *)((int)puVar17 + 0x12) & 6) == 0) &&
         ((puVar17[8] & uVar8) == 0 && (puVar17[9] & (uint)local_44) == 0)) {
        FUN_004988a0(piVar20,(char *)*puVar17,local_48,8);
        *(byte *)((int)puVar17 + 0x12) = *(byte *)((int)puVar17 + 0x12) | 4;
        puVar19 = local_10;
      }
      iVar25 = iVar25 + 1;
      puVar17 = puVar17 + 10;
    } while (iVar25 < (int)puVar19[6]);
  }
LAB_00474a36:
  if ((local_20 != 0) && (*(byte *)((int)piVar20 + 0x13) < 8)) {
    iVar25 = 0;
    piVar10 = piVar20 + 0x19;
    while (piVar10[4] != local_20) {
      iVar25 = iVar25 + 1;
      piVar10 = piVar10 + 6;
      if (9 < iVar25) {
        piVar20[*(byte *)((int)piVar20 + 0x13) + 7] = local_20;
        *(char *)((int)piVar20 + 0x13) = *(char *)((int)piVar20 + 0x13) + '\x01';
        return CONCAT44(local_44,uVar8);
      }
    }
    *(undefined1 *)(piVar10 + 2) = 1;
  }
  return CONCAT44(local_44,uVar8);
}


/* FUN_004752f0 @ 004752f0  kind=gamemisc  attributed-by=none  size=181 */

void __cdecl FUN_004752f0(ulonglong *param_1)

{
  int iVar1;
  double dVar2;
  undefined8 uVar3;
  
  if (*(char *)((int)param_1 + 0x29) == '\0') {
    FUN_004753b0(param_1);
    uVar3 = __allrem((uint)*param_1 + 43200000,
                     *(int *)((int)param_1 + 4) + (uint)(0xfd6cd1ff < (uint)*param_1),86400000,0);
    dVar2 = (double)(int)uVar3 / 1000.0;
    *(undefined1 *)((int)param_1 + 0x29) = 1;
    iVar1 = (int)dVar2;
    *(int *)((int)param_1 + 0x14) = iVar1 / 0xe10;
    dVar2 = dVar2 - (double)iVar1;
    param_1[4] = (ulonglong)dVar2;
    *(int *)(param_1 + 3) = (iVar1 % 0xe10) / 0x3c;
    param_1[4] = (ulonglong)((double)((iVar1 % 0xe10) % 0x3c) + dVar2);
  }
  return;
}


/* FUN_004753b0 @ 004753b0  kind=gamemisc  attributed-by=none  size=319 */

void __cdecl FUN_004753b0(ulonglong *param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (*(char *)((int)param_1 + 0x2a) == '\0') {
    uVar3 = FUN_0054a946();
    *param_1 = uVar3;
    *(undefined1 *)((int)param_1 + 0x2a) = 1;
    if (*(char *)((int)param_1 + 0x29) != '\0') {
      uVar1 = ((int)param_1[3] +
              (*(int *)((int)param_1 + 0x14) * 0x10 - *(int *)((int)param_1 + 0x14)) * 4) * 60000;
      uVar4 = FUN_0054a946();
      uVar2 = uVar1 - (uint)uVar4;
      uVar3 = *param_1;
      *(uint *)param_1 = (int)*param_1 + uVar2;
      *(int *)((int)param_1 + 4) =
           *(int *)((int)param_1 + 4) +
           ((((int)uVar1 >> 0x1f) - (int)(uVar4 >> 0x20)) - (uint)(uVar1 < (uint)uVar4)) +
           (uint)CARRY4((uint)uVar3,uVar2);
      if (*(char *)((int)param_1 + 0x2b) != '\0') {
        uVar1 = *(int *)((int)param_1 + 0x1c) * 60000;
        uVar3 = *param_1;
        *(int *)param_1 = (int)*param_1 + *(int *)((int)param_1 + 0x1c) * -60000;
        *(undefined2 *)(param_1 + 5) = 0;
        *(undefined1 *)((int)param_1 + 0x2b) = 0;
        *(int *)((int)param_1 + 4) =
             (*(int *)((int)param_1 + 4) - ((int)uVar1 >> 0x1f)) - (uint)((uint)uVar3 < uVar1);
      }
    }
  }
  return;
}


/* FUN_00475680 @ 00475680  kind=gamemisc  attributed-by=none  size=279 */

void __cdecl FUN_00475680(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  
  if ((char)param_1[10] == '\0') {
    if (*(char *)((int)param_1 + 0x2a) == '\0') {
      param_1[2] = 2000;
      param_1[3] = 1;
      param_1[4] = 1;
      *(undefined1 *)(param_1 + 10) = 1;
      return;
    }
    uVar7 = __alldiv(*param_1 + 43200000,param_1[1] + (uint)(0xfd6cd1ff < *param_1),86400000,0);
    iVar3 = (int)(((double)(int)uVar7 - 1867216.25) / 36524.25);
    iVar6 = (int)uVar7 + (iVar3 - ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2)) + 0x5f5;
    iVar5 = (int)(((double)iVar6 - 122.1) / 365.25);
    iVar3 = (iVar5 * 0x8ead) / 100;
    iVar4 = (int)((double)(iVar6 - iVar3) / 30.6001);
    param_1[4] = (iVar6 - (int)((double)iVar4 * 30.6001)) - iVar3;
    uVar1 = iVar4 - 1;
    if (0xd < iVar4) {
      uVar1 = iVar4 - 0xd;
    }
    param_1[3] = uVar1;
    uVar2 = iVar5 - 0x126c;
    if ((int)uVar1 < 3) {
      uVar2 = iVar5 - 0x126b;
    }
    param_1[2] = uVar2;
    *(undefined1 *)(param_1 + 10) = 1;
  }
  return;
}


/* FUN_004757f0 @ 004757f0  kind=gamemisc  attributed-by=none  size=2074 */

void __cdecl
FUN_004757f0(int *param_1,int param_2,uint param_3,uint param_4,uint param_5,uint *param_6)

{
  size_t _Size;
  undefined2 *puVar1;
  int iVar2;
  char cVar3;
  short sVar4;
  int *piVar5;
  char *pcVar6;
  char cVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  undefined4 *puVar13;
  int *piVar14;
  int iVar15;
  char *pcVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  int *piVar23;
  bool bVar24;
  char *pcVar25;
  uint uStack_38;
  uint local_2c;
  uint local_28;
  uint local_18;
  int local_10;
  uint local_c;
  
  piVar5 = (int *)param_1[2];
  uVar9 = FUN_00492ce0(param_1);
  iVar22 = *(int *)(param_3 + 0x10);
  piVar12 = *(int **)(param_2 + 0x20);
  piVar14 = piVar12 + *(int *)(param_2 + 0x18) * 10;
  uStack_38 = 0;
  local_10 = 0;
  if (piVar12 < piVar14) {
    iVar11 = *(int *)(param_3 + 0x2c);
    local_18 = 0;
    local_c = 0;
    do {
      if (((piVar12[2] == iVar11) && ((short)piVar12[4] == 2)) &&
         (uStack_38 = local_c, (piVar12[6] & param_4) == 0 && (piVar12[7] & param_5) == 0)) {
        uVar10 = piVar12[3];
        cVar3 = *(char *)(*(int *)(iVar22 + 4) + 0x15 + uVar10 * 0x18);
        cVar7 = FUN_00475250(*piVar12);
        if (cVar7 == 'a') {
          bVar24 = cVar3 == 'a';
LAB_004758b7:
          if (!bVar24) goto LAB_00475905;
        }
        else if (cVar7 != 'b') {
          bVar24 = 'b' < cVar3;
          goto LAB_004758b7;
        }
        uVar17 = 0;
        if ((int)uVar10 < 0x40) {
          uVar17 = 1 << (uVar10 & 0x1f);
          uVar20 = 0;
          if (0x1f < uVar10) {
            uVar20 = uVar17;
          }
          uVar17 = uVar17 ^ uVar20;
          if (0x3f < uVar10) {
            uVar20 = uVar17;
          }
        }
        else {
          uVar20 = 0x80000000;
        }
        if ((uVar17 & local_18) == 0 && (uVar20 & local_c) == 0) {
          local_10 = local_10 + 1;
          local_18 = local_18 | uVar17;
          uStack_38 = local_c | uVar20;
          local_c = uStack_38;
        }
      }
LAB_00475905:
      piVar12 = piVar12 + 10;
    } while (piVar12 < piVar14);
  }
  else {
    local_18 = 0;
  }
  *(short *)(param_6 + 1) = (short)local_10;
  uVar10 = ~local_18 & *(uint *)(param_3 + 0x38);
  uVar17 = (~uStack_38 | 0x80000000) & *(uint *)(param_3 + 0x3c);
  sVar4 = *(short *)(iVar22 + 0x26);
  iVar11 = 0x3f;
  if (sVar4 < 0x3f) {
    iVar11 = (int)sVar4;
  }
  uVar20 = 0;
  if (0 < iVar11) {
    do {
      uVar18 = 1 << (uVar20 & 0x1f);
      uVar19 = 0;
      if (0x1f < uVar20) {
        uVar19 = uVar18;
      }
      uVar18 = uVar18 ^ uVar19;
      if (0x3f < uVar20) {
        uVar19 = uVar18;
      }
      if ((uVar18 & uVar10) != 0 || (uVar19 & uVar17) != 0) {
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
  piVar12 = FUN_00494b90(*param_1,_Size);
  if (piVar12 == (int *)0x0) {
    return;
  }
  memset(piVar12,0,_Size);
  param_6[4] = (uint)piVar12;
  piVar23 = piVar12 + 0xc;
  piVar12[8] = (int)piVar23;
  piVar12[1] = (int)(piVar23 + local_10);
  piVar12[7] = (int)(piVar23 + local_10 + local_10);
  *piVar12 = (int)"auto-index";
  piVar12[9] = local_10;
  piVar12[3] = iVar22;
  piVar23 = *(int **)(param_2 + 0x20);
  local_28 = 0;
  uVar20 = local_28;
  if (piVar23 < piVar14) {
    local_2c = 0;
    local_28 = 0;
    uVar20 = 0;
    do {
      if (((piVar23[2] == *(int *)(param_3 + 0x2c)) && ((short)piVar23[4] == 2)) &&
         ((piVar23[6] & param_4) == 0 && (piVar23[7] & param_5) == 0)) {
        uVar18 = piVar23[3];
        cVar3 = *(char *)(*(int *)(*(int *)(param_3 + 0x10) + 4) + 0x15 + uVar18 * 0x18);
        iVar15 = *piVar23;
        cVar7 = FUN_00475250(iVar15);
        if (cVar7 == 'a') {
          bVar24 = cVar3 == 'a';
LAB_00475ace:
          if (!bVar24) goto LAB_00475b74;
        }
        else if (cVar7 != 'b') {
          bVar24 = 'b' < cVar3;
          goto LAB_00475ace;
        }
        uVar19 = 0;
        if ((int)uVar18 < 0x40) {
          uVar19 = 1 << (uVar18 & 0x1f);
          uVar21 = 0;
          if (0x1f < uVar18) {
            uVar21 = uVar19;
          }
          uVar19 = uVar19 ^ uVar21;
          if (0x3f < uVar18) {
            uVar21 = uVar19;
          }
        }
        else {
          uVar21 = 0x80000000;
        }
        if ((uVar19 & local_28) == 0 && (uVar21 & local_2c) == 0) {
          local_2c = local_2c | uVar21;
          local_28 = local_28 | uVar19;
          *(uint *)(piVar12[1] + uVar20 * 4) = uVar18;
          pcVar16 = *(char **)(iVar15 + 0xc);
          pcVar6 = *(char **)(iVar15 + 8);
          pcVar25 = pcVar6;
          if ((((*(ushort *)(pcVar6 + 2) & 0x100) == 0) &&
              ((pcVar25 = pcVar16, pcVar16 == (char *)0x0 ||
               ((*(ushort *)(pcVar16 + 2) & 0x100) == 0)))) &&
             (puVar13 = (undefined4 *)FUN_004984d0(param_1,pcVar6), puVar13 != (undefined4 *)0x0)) {
LAB_00475b67:
            pcVar16 = (char *)*puVar13;
          }
          else {
            puVar13 = (undefined4 *)FUN_004984d0(param_1,pcVar25);
            pcVar16 = "BINARY";
            if (puVar13 != (undefined4 *)0x0) goto LAB_00475b67;
          }
          uVar20 = uVar20 + 1;
          *(char **)(piVar12[8] + -4 + uVar20 * 4) = pcVar16;
        }
      }
LAB_00475b74:
      piVar23 = piVar23 + 10;
    } while (piVar23 < piVar14);
  }
  local_28 = uVar20;
  uVar20 = 0;
  if (0 < iVar11) {
    do {
      uVar18 = 1 << (uVar20 & 0x1f);
      uVar19 = 0;
      if (0x1f < uVar20) {
        uVar19 = uVar18;
      }
      uVar18 = uVar18 ^ uVar19;
      if (0x3f < uVar20) {
        uVar19 = uVar18;
      }
      if ((uVar18 & uVar10) != 0 || (uVar19 & uVar17) != 0) {
        local_28 = local_28 + 1;
        *(uint *)(piVar12[1] + -4 + local_28 * 4) = uVar20;
        *(char **)(piVar12[8] + -4 + local_28 * 4) = "BINARY";
      }
      uVar20 = uVar20 + 1;
    } while ((int)uVar20 < iVar11);
  }
  if (((*(uint *)(param_3 + 0x3c) & 0x80000000) != 0) &&
     (iVar11 = 0x3f, 0x3f < *(short *)(iVar22 + 0x26))) {
    iVar15 = local_28 << 2;
    do {
      *(int *)(iVar15 + piVar12[1]) = iVar11;
      iVar11 = iVar11 + 1;
      *(char **)(iVar15 + piVar12[8]) = "BINARY";
      iVar15 = iVar15 + 4;
    } while (iVar11 < *(short *)(iVar22 + 0x26));
  }
  piVar14 = FUN_0049dbf0(param_1,(int)piVar12);
  iVar22 = piVar5[7];
  iVar11 = piVar5[8];
  uVar10 = param_6[8];
  if (iVar22 < iVar11) {
LAB_00475caa:
    piVar5[7] = piVar5[7] + 1;
    puVar1 = (undefined2 *)(piVar5[1] + iVar22 * 0x14);
    *(uint *)(puVar1 + 2) = uVar10;
    *puVar1 = 0x29;
    *(undefined1 *)((int)puVar1 + 3) = 0;
    *(int *)(puVar1 + 4) = local_10 + 1;
    *(undefined4 *)(puVar1 + 6) = 0;
    *(undefined4 *)(puVar1 + 8) = 0;
  }
  else {
    if (iVar11 == 0) {
      iVar11 = 0x33;
    }
    else {
      iVar11 = iVar11 * 2;
    }
    puVar13 = FUN_00494cf0(*piVar5,(undefined4 *)piVar5[1],iVar11 * 0x14);
    if (puVar13 != (undefined4 *)0x0) {
      iVar11 = *piVar5;
      if (((iVar11 == 0) || (puVar13 < *(undefined4 **)(iVar11 + 0x104))) ||
         (*(undefined4 **)(iVar11 + 0x108) <= puVar13)) {
        uVar17 = (*DAT_00582af0._4_4_)(puVar13);
      }
      else {
        uVar17 = (uint)*(ushort *)(iVar11 + 0xe8);
      }
      piVar5[8] = uVar17 / 0x14;
      piVar5[1] = (int)puVar13;
      goto LAB_00475caa;
    }
    iVar22 = 1;
  }
  iVar11 = piVar5[1];
  iVar15 = *piVar5;
  if ((iVar11 == 0) || (*(char *)(iVar15 + 0x38) != '\0')) {
    FUN_0047bc80(iVar15,0xfffffff0,piVar14);
  }
  else {
    if (iVar22 < 0) {
      iVar22 = piVar5[7] + -1;
    }
    iVar2 = iVar11 + iVar22 * 0x14;
    FUN_0047bc80(iVar15,(int)*(char *)(iVar2 + 1),*(int **)(iVar11 + 0x10 + iVar22 * 0x14));
    *(undefined4 *)(iVar2 + 0x10) = 0;
    if (piVar14 == (int *)0x0) {
      *(undefined4 *)(iVar2 + 0x10) = 0;
      *(undefined1 *)(iVar2 + 1) = 0;
    }
    else {
      *(int **)(iVar2 + 0x10) = piVar14;
      *(undefined1 *)(iVar2 + 1) = 0xfa;
    }
  }
  param_3 = piVar5[7];
  uVar10 = param_6[7];
  iVar22 = piVar5[8];
  if ((int)param_3 < iVar22) {
LAB_00475dbe:
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
    puVar13 = FUN_00494cf0(*piVar5,(undefined4 *)piVar5[1],iVar22 * 0x14);
    if (puVar13 != (undefined4 *)0x0) {
      iVar22 = *piVar5;
      if (((iVar22 == 0) || (puVar13 < *(undefined4 **)(iVar22 + 0x104))) ||
         (*(undefined4 **)(iVar22 + 0x108) <= puVar13)) {
        uVar17 = (*DAT_00582af0._4_4_)(puVar13);
      }
      else {
        uVar17 = (uint)*(ushort *)(iVar22 + 0xe8);
      }
      piVar5[8] = uVar17 / 0x14;
      piVar5[1] = (int)puVar13;
      goto LAB_00475dbe;
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
  FUN_0049c270(param_1,piVar12,param_6[7],iVar22,1);
  iVar11 = piVar5[7];
  uVar10 = param_6[8];
  iVar15 = piVar5[8];
  if (iVar11 < iVar15) {
LAB_00475ea6:
    iVar15 = piVar5[1];
    piVar5[7] = piVar5[7] + 1;
    *(undefined2 *)(iVar15 + iVar11 * 0x14) = 0x61;
    *(undefined1 *)(iVar15 + 3 + iVar11 * 0x14) = 0;
    *(uint *)(iVar15 + 4 + iVar11 * 0x14) = uVar10;
    *(int *)(iVar15 + 8 + iVar11 * 0x14) = iVar22;
    *(undefined4 *)(iVar15 + 0xc + iVar11 * 0x14) = 0;
    *(undefined4 *)(iVar15 + 0x10 + iVar11 * 0x14) = 0;
  }
  else {
    if (iVar15 == 0) {
      iVar15 = 0x33;
    }
    else {
      iVar15 = iVar15 * 2;
    }
    puVar13 = FUN_00494cf0(*piVar5,(undefined4 *)piVar5[1],iVar15 * 0x14);
    if (puVar13 != (undefined4 *)0x0) {
      iVar15 = *piVar5;
      if (((iVar15 == 0) || (puVar13 < *(undefined4 **)(iVar15 + 0x104))) ||
         (*(undefined4 **)(iVar15 + 0x108) <= puVar13)) {
        uVar17 = (*DAT_00582af0._4_4_)(puVar13);
      }
      else {
        uVar17 = (uint)*(ushort *)(iVar15 + 0xe8);
      }
      piVar5[8] = uVar17 / 0x14;
      piVar5[1] = (int)puVar13;
      goto LAB_00475ea6;
    }
  }
  if (piVar5[1] != 0) {
    *(undefined1 *)(piVar5[1] + -0x11 + piVar5[7] * 0x14) = 0x10;
  }
  iVar11 = piVar5[7];
  uVar10 = param_6[7];
  iVar15 = piVar5[8];
  if (iVar15 <= iVar11) {
    if (iVar15 == 0) {
      iVar15 = 0x33;
    }
    else {
      iVar15 = iVar15 * 2;
    }
    puVar13 = FUN_00494cf0(*piVar5,(undefined4 *)piVar5[1],iVar15 * 0x14);
    if (puVar13 == (undefined4 *)0x0) goto LAB_00475f99;
    iVar15 = *piVar5;
    if (((iVar15 == 0) || (puVar13 < *(undefined4 **)(iVar15 + 0x104))) ||
       (*(undefined4 **)(iVar15 + 0x108) <= puVar13)) {
      uVar17 = (*DAT_00582af0._4_4_)(puVar13);
    }
    else {
      uVar17 = (uint)*(ushort *)(iVar15 + 0xe8);
    }
    piVar5[8] = uVar17 / 0x14;
    piVar5[1] = (int)puVar13;
  }
  piVar5[7] = piVar5[7] + 1;
  puVar1 = (undefined2 *)(piVar5[1] + iVar11 * 0x14);
  *(uint *)(puVar1 + 2) = uVar10;
  *puVar1 = 0x5f;
  *(undefined1 *)((int)puVar1 + 3) = 0;
  *(uint *)(puVar1 + 4) = param_3 + 1;
  *(undefined4 *)(puVar1 + 6) = 0;
  *(undefined4 *)(puVar1 + 8) = 0;
LAB_00475f99:
  if (piVar5[1] != 0) {
    *(undefined1 *)(piVar5[1] + -0x11 + piVar5[7] * 0x14) = 3;
  }
  if ((-1 < (int)param_3) && (param_3 < (uint)piVar5[7])) {
    *(int *)(piVar5[1] + 8 + param_3 * 0x14) = piVar5[7];
  }
  if ((iVar22 != 0) && (*(byte *)((int)param_1 + 0x13) < 8)) {
    iVar11 = 0;
    piVar14 = param_1 + 0x19;
    do {
      if (piVar14[4] == iVar22) {
        *(undefined1 *)(piVar14 + 2) = 1;
        goto LAB_00475ff2;
      }
      iVar11 = iVar11 + 1;
      piVar14 = piVar14 + 6;
    } while (iVar11 < 10);
    param_1[*(byte *)((int)param_1 + 0x13) + 7] = iVar22;
    *(char *)((int)param_1 + 0x13) = *(char *)((int)param_1 + 0x13) + '\x01';
  }
LAB_00475ff2:
  if ((-1 < (int)uVar9) && (uVar9 < (uint)piVar5[7])) {
    *(int *)(piVar5[1] + 8 + uVar9 * 0x14) = piVar5[7];
  }
  return;
}


/* FUN_00476020 @ 00476020  kind=gamemisc  attributed-by=none  size=95 */

int __cdecl FUN_00476020(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 8) + 0x50);
  iVar2 = (int)uVar1 >> 0x1f;
  if ((iVar2 <= param_3) && ((iVar2 < param_3 || (uVar1 < param_2)))) {
    *(undefined4 *)(param_1 + 0x38) = 0x12;
    FUN_004b79e0((int *)(param_1 + 8),"string or blob too big",0xffffffff,'\x01',(undefined *)0x0);
    return 0;
  }
  iVar2 = FUN_004a0350(param_2);
  if (iVar2 == 0) {
    FUN_0045fad0(param_1);
  }
  return iVar2;
}


/* FUN_00476080 @ 00476080  kind=gamemisc  attributed-by=none  size=169 */

void __cdecl FUN_00476080(undefined4 param_1)

{
  void *pvVar1;
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
    FUN_004bebc0(param_1);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  pvVar1 = FUN_004bebc0(param_1);
  if (pvVar1 == (void *)0x0) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  FUN_004bdb80(pvVar1);
  FUN_00466dd0((int)pvVar1);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004762d0 @ 004762d0  kind=gamemisc  attributed-by=none  size=413 */

undefined4 __cdecl
FUN_004762d0(int param_1,byte *param_2,byte param_3,int param_4,int param_5,int param_6)

{
  byte bVar1;
  byte *pbVar2;
  int *piVar3;
  int iVar4;
  uint extraout_ECX;
  int extraout_EDX;
  byte *pbVar5;
  uint uVar6;
  undefined4 *puVar7;
  int local_c;
  
  pbVar2 = param_2;
  uVar6 = 0;
  if (param_2 != (byte *)0x0) {
    bVar1 = *param_2;
    pbVar5 = param_2;
    while (bVar1 != 0) {
      pbVar5 = pbVar5 + 1;
      bVar1 = *pbVar5;
    }
    uVar6 = (int)pbVar5 - (int)param_2 & 0x3fffffff;
  }
  param_2 = (byte *)(uint)param_3;
  if ((param_2 == (byte *)0x4) || (param_2 == (byte *)0x8)) {
    param_2 = (byte *)0x2;
  }
  else if ((param_2 == (byte *)0x0) || ((byte *)0x3 < param_2)) {
    FUN_004683f0(0x15,"misuse at line %d of [%.10s]");
    return 0x15;
  }
  if (pbVar2 == (byte *)0x0) {
    piVar3 = *(int **)(param_1 + 8);
  }
  else {
    piVar3 = FUN_004799f0(param_1,pbVar2,0);
  }
  if (((piVar3 != (int *)0x0) && (piVar3 = piVar3 + (int)param_2 * 5, piVar3 != (int *)0x14)) &&
     (piVar3[-2] != 0)) {
    if (*(int *)(param_1 + 0x84) != 0) {
      FUN_004961f0(param_1,5,
                   (byte *)"unable to delete/modify collation sequence due to active statements");
      return 5;
    }
    FUN_00496370(param_1);
    if ((*(byte *)(extraout_EDX + 4) & 0xfffffff7) == extraout_ECX) {
      iVar4 = FUN_0049d6a0((uint *)(param_1 + 0x19c),pbVar2,uVar6);
      puVar7 = (undefined4 *)(iVar4 + 0x10);
      local_c = 3;
      do {
        if (*(char *)(puVar7 + -3) == (char)piVar3[-4]) {
          if ((code *)*puVar7 != (code *)0x0) {
            (*(code *)*puVar7)(puVar7[-2]);
          }
          puVar7[-1] = 0;
        }
        puVar7 = puVar7 + 5;
        local_c = local_c + -1;
      } while (local_c != 0);
    }
  }
  if (pbVar2 == (byte *)0x0) {
    piVar3 = *(int **)(param_1 + 8);
  }
  else {
    piVar3 = FUN_004799f0(param_1,pbVar2,1);
  }
  if ((piVar3 != (int *)0x0) && (piVar3 = piVar3 + (int)param_2 * 5, piVar3 != (int *)0x14)) {
    piVar3[-2] = param_5;
    piVar3[-3] = param_4;
    piVar3[-1] = param_6;
    *(byte *)(piVar3 + -4) = param_3 & 8 | (byte)param_2;
    FUN_004961f0(param_1,0,(byte *)0x0);
    return 0;
  }
  return 7;
}


/* FUN_00476470 @ 00476470  kind=gamemisc  attributed-by=none  size=331 */

uint __cdecl
FUN_00476470(int param_1,byte *param_2,undefined4 param_3,undefined4 param_4,undefined *param_5)

{
  byte bVar1;
  uint uVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  uint uVar5;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b18)(*(int *)(param_1 + 0xc));
  }
  uVar5 = 0;
  if (param_2 != (byte *)0x0) {
    bVar1 = *param_2;
    pbVar4 = param_2;
    while (bVar1 != 0) {
      pbVar4 = pbVar4 + 1;
      bVar1 = *pbVar4;
    }
    uVar5 = (int)pbVar4 - (int)param_2 & 0x3fffffff;
  }
  if (*(int *)(param_1 + 0x130) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004bd210(param_2,uVar5);
    uVar2 = uVar2 % *(uint *)(param_1 + 0x124);
  }
  puVar3 = FUN_00479af0(param_1 + 0x124,param_2,uVar5,uVar2);
  if ((puVar3 == (undefined4 *)0x0) || (puVar3[2] == 0)) {
    puVar3 = FUN_00494b90(param_1,uVar5 + 0x11);
    if (puVar3 != (undefined4 *)0x0) {
      pbVar4 = (byte *)(puVar3 + 4);
      memcpy(pbVar4,param_2,uVar5 + 1);
      *puVar3 = param_3;
      puVar3[2] = param_4;
      puVar3[1] = pbVar4;
      puVar3[3] = param_5;
      puVar3 = (undefined4 *)FUN_0049d6f0((uint *)(param_1 + 0x124),pbVar4,uVar5,(uint)puVar3);
      if (puVar3 != (undefined4 *)0x0) {
        *(undefined1 *)(param_1 + 0x38) = 1;
        FUN_00494b00(param_1,puVar3);
      }
    }
    uVar5 = 0;
  }
  else {
    FUN_004683f0(0x15,"misuse at line %d of [%.10s]");
    uVar5 = 0x15;
  }
  if ((*(char *)(param_1 + 0x38) != '\0') || (uVar5 == 0xc0a)) {
    FUN_004961f0(param_1,7,(byte *)0x0);
    *(undefined1 *)(param_1 + 0x38) = 0;
    uVar5 = 7;
  }
  uVar5 = *(uint *)(param_1 + 0x30) & uVar5;
  if ((uVar5 != 0) && (param_5 != (undefined *)0x0)) {
    (*(code *)param_5)(param_4);
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b20)(*(int *)(param_1 + 0xc));
  }
  return uVar5;
}


/* FUN_0047693a @ 0047693a  kind=gamemisc  attributed-by=none  size=304 */

undefined4 __fastcall FUN_0047693a(int param_1,int param_2)

{
  int iVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  int unaff_EBX;
  int unaff_EBP;
  uint uVar5;
  undefined1 *unaff_EDI;
  
  while( true ) {
    uVar5 = (uint)CONCAT11(*unaff_EDI,unaff_EDI[1]);
    if (((int)uVar5 < param_1) || (param_2 < (int)uVar5)) {
      FUN_004683f0(0xb,"database corruption at line %d of [%.10s]");
      return 0xb;
    }
    uVar3 = FUN_00471aa0(*(uint *)(unaff_EBP + 8),*(int *)(unaff_EBP + -4) + uVar5);
    uVar3 = uVar3 & 0xffff;
    unaff_EBX = unaff_EBX - uVar3;
    if ((unaff_EBX < *(int *)(unaff_EBP + -0xc)) ||
       (*(int *)(unaff_EBP + -0x14) < (int)(uVar3 + uVar5))) break;
    memcpy((void *)(*(int *)(unaff_EBP + -0x1c) + unaff_EBX),
           (void *)(*(int *)(unaff_EBP + -4) + uVar5),uVar3);
    param_2 = *(int *)(unaff_EBP + -0x20);
    iVar4 = *(int *)(unaff_EBP + -0x18) + 1;
    uVar2 = (undefined1)((uint)unaff_EBX >> 8);
    *unaff_EDI = uVar2;
    unaff_EDI[1] = (char)unaff_EBX;
    unaff_EDI = unaff_EDI + 2;
    *(int *)(unaff_EBP + -0x18) = iVar4;
    param_1 = *(int *)(unaff_EBP + -0xc);
    if (*(int *)(unaff_EBP + -8) <= iVar4) {
      iVar4 = *(int *)(unaff_EBP + -0x24);
      iVar1 = *(int *)(unaff_EBP + -0x1c);
      *(char *)(iVar4 + 6) = (char)unaff_EBX;
      *(undefined1 *)(iVar4 + 5) = uVar2;
      *(undefined2 *)(iVar4 + 1) = 0;
      *(undefined1 *)(iVar4 + 7) = 0;
      memset((void *)(param_1 + iVar1),0,unaff_EBX - param_1);
      if (unaff_EBX - param_1 != (uint)*(ushort *)(*(int *)(unaff_EBP + 8) + 0xe)) {
        FUN_004683f0(0xb,"database corruption at line %d of [%.10s]");
        return 0xb;
      }
      return 0;
    }
  }
  FUN_004683f0(0xb,"database corruption at line %d of [%.10s]");
  return 0xb;
}


/* FUN_00476c10 @ 00476c10  kind=gamemisc  attributed-by=none  size=72 */

void __cdecl FUN_00476c10(int param_1,int *param_2)

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


/* FUN_00476c8a @ 00476c8a  kind=gamemisc  attributed-by=none  size=149 */

void __fastcall FUN_00476c8a(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int unaff_EBX;
  int unaff_EBP;
  int *piVar5;
  
  do {
    iVar1 = *(int *)(param_2 + 0xc + *(int *)(unaff_EBX + 0x10));
    if ((iVar1 != 0) && (piVar5 = *(int **)(iVar1 + 0x10), piVar5 != (int *)0x0)) {
      do {
        if ((*(byte *)(piVar5[2] + 0x2a) & 0x10) != 0) {
          piVar3 = (int *)(piVar5[2] + 0x38);
          iVar1 = *piVar3;
          while (iVar1 != 0) {
            piVar2 = (int *)*piVar3;
            if (*piVar2 == unaff_EBX) {
              *piVar3 = piVar2[6];
              piVar3 = piVar2 + 3;
              *piVar3 = *piVar3 + -1;
              iVar1 = *piVar3;
              iVar4 = *piVar2;
              *(int *)(unaff_EBP + -8) = iVar4;
              if (iVar1 == 0) {
                piVar3 = (int *)piVar2[2];
                if (piVar3 != (int *)0x0) {
                  (**(code **)(*piVar3 + 0x10))(piVar3);
                  iVar4 = *(int *)(unaff_EBP + -8);
                }
                FUN_00494b00(iVar4,piVar2);
              }
              break;
            }
            piVar3 = piVar2 + 6;
            iVar1 = piVar2[6];
          }
        }
        piVar5 = (int *)*piVar5;
      } while (piVar5 != (int *)0x0);
      param_1 = *(int *)(unaff_EBP + 8);
      param_2 = *(int *)(unaff_EBP + -4);
    }
    param_1 = param_1 + 1;
    param_2 = param_2 + 0x10;
    *(int *)(unaff_EBP + 8) = param_1;
    *(int *)(unaff_EBP + -4) = param_2;
    if (*(int *)(unaff_EBX + 0x14) <= param_1) {
      FUN_00490780(unaff_EBX);
      return;
    }
  } while( true );
}


/* FUN_0047700a @ 0047700a  kind=gamemisc  attributed-by=none  size=111 */

undefined4 __fastcall FUN_0047700a(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  
  do {
    iVar1 = *(int *)(*(int *)(unaff_ESI + 0x10) + 4 + unaff_EDI);
    if (iVar1 != 0) {
      iVar2 = 0;
      iVar1 = *(int *)(**(int **)(iVar1 + 4) + 0xb8);
      if (iVar1 != 0) {
        iVar2 = *(int *)(iVar1 + 0xc);
        *(undefined4 *)(iVar1 + 0xc) = 0;
      }
      if (((*(code **)(unaff_ESI + 0xc0) == (code *)0x0) || (iVar2 < 1)) ||
         (*(int *)(unaff_EBP + -4) != 0)) {
        param_1 = *(undefined4 *)(unaff_EBP + -4);
      }
      else {
        param_1 = (**(code **)(unaff_ESI + 0xc0))(*(undefined4 *)(unaff_ESI + 0xc4));
        *(undefined4 *)(unaff_EBP + -4) = param_1;
      }
    }
    unaff_EBX = unaff_EBX + 1;
    unaff_EDI = unaff_EDI + 0x10;
  } while (unaff_EBX < *(int *)(unaff_ESI + 0x14));
  return param_1;
}


/* FUN_00477290 @ 00477290  kind=gamemisc  attributed-by=none  size=74 */

float10 __cdecl FUN_00477290(double param_1)

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


/* FUN_004772e0 @ 004772e0  kind=gamemisc  attributed-by=none  size=138 */

undefined4 __cdecl FUN_004772e0(int param_1,byte *param_2)

{
  ushort *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  piVar2 = *(int **)(param_1 + 8);
  switch(*param_2) {
  case 0x48:
  case 0x84:
    return 1;
  case 0x97:
  case 0x99:
  case 0x9b:
    piVar3 = *(int **)(param_2 + 0x10);
    if (piVar3 != (int *)0x0) {
      piVar5 = (int *)piVar3[2];
      for (iVar4 = *piVar3; 0 < iVar4; iVar4 = iVar4 + -1) {
        if (*piVar5 != 0) {
          puVar1 = (ushort *)(*piVar5 + 2);
          *puVar1 = *puVar1 | 0x200;
        }
        piVar5 = piVar5 + 5;
      }
    }
  default:
    iVar4 = FUN_0047e970((char *)param_2);
    if (iVar4 != 0) {
      piVar2[0x13] = piVar2[0x13] + 1;
      iVar4 = FUN_00497780(piVar2,param_2,piVar2[0x13]);
      param_2[0x23] = *param_2;
      *param_2 = 0x84;
      *(int *)(param_2 + 0x18) = iVar4;
      return 1;
    }
  case 0x5c:
    return 0;
  }
}


/* FUN_004776e0 @ 004776e0  kind=gamemisc  attributed-by=none  size=487 */

int __cdecl FUN_004776e0(int param_1,char *param_2,int param_3)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int local_28 [6];
  undefined1 local_10;
  undefined2 local_f;
  int local_c;
  int local_8;
  
  pcVar6 = param_2;
  local_8 = *(int *)(param_3 + 4);
  local_c = *(int *)(param_2 + 0x10);
  uVar3 = (uint)*(ushort *)(param_2 + 4);
  iVar2 = *(int *)(local_c + 4);
  if ((uVar3 == 0) && ((*(uint *)param_2 & 0x300000) == 0)) {
    return 0;
  }
  local_28[0] = param_1;
  local_28[1] = 0;
  local_28[2] = 0;
  local_28[3] = 0;
  local_28[4] = 0;
  local_28[5] = 1000000000;
  local_f = 1;
  local_10 = 0;
  FUN_004aa7b0(local_28," (",2);
  iVar4 = 0;
  if (uVar3 != 0) {
    do {
      pcVar1 = *(char **)(local_8 + *(int *)(iVar2 + iVar4 * 4) * 0x18);
      if (iVar4 != 0) {
        FUN_004aa7b0(local_28," AND ",5);
      }
      FUN_004aa7b0(local_28,pcVar1,0xffffffff);
      FUN_004aa7b0(local_28,"=",1);
      FUN_004aa7b0(local_28,"?",1);
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)uVar3);
  }
  iVar5 = iVar4;
  if ((*(uint *)param_2 & 0x200000) != 0) {
    if (iVar4 == *(int *)(local_c + 0x24)) {
      param_2 = "rowid";
    }
    else {
      param_2 = *(char **)(local_8 + *(int *)(iVar2 + iVar4 * 4) * 0x18);
    }
    if (iVar4 != 0) {
      FUN_004aa7b0(local_28," AND ",5);
    }
    FUN_004aa7b0(local_28,param_2,0xffffffff);
    FUN_004aa7b0(local_28,">",1);
    FUN_004aa7b0(local_28,"?",1);
    iVar5 = iVar4 + 1;
  }
  if ((*(uint *)pcVar6 & 0x100000) != 0) {
    if (iVar4 == *(int *)(local_c + 0x24)) {
      pcVar6 = "rowid";
    }
    else {
      pcVar6 = *(char **)(local_8 + *(int *)(iVar2 + iVar4 * 4) * 0x18);
    }
    if (iVar5 != 0) {
      FUN_004aa7b0(local_28," AND ",5);
    }
    FUN_004aa7b0(local_28,pcVar6,0xffffffff);
    FUN_004aa7b0(local_28,"<",1);
    FUN_004aa7b0(local_28,"?",1);
  }
  FUN_004aa7b0(local_28,")",1);
  iVar2 = FUN_004aa8f0(local_28);
  return iVar2;
}


/* FUN_004778d0 @ 004778d0  kind=gamemisc  attributed-by=none  size=581 */

void __cdecl
FUN_004778d0(int *param_1,int param_2,uint *param_3,undefined4 param_4,undefined4 param_5,
            ushort param_6)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  char *pcVar9;
  
  if ((char)param_1[0x75] != '\x02') {
    return;
  }
  uVar5 = (uint)(byte)param_3[0xd];
  uVar1 = *param_3;
  piVar2 = (int *)param_1[2];
  iVar3 = param_1[0x79];
  iVar4 = *param_1;
  if ((uVar1 & 0x10000000) != 0) {
    return;
  }
  if ((param_6 & 0x40) != 0) {
    return;
  }
  puVar6 = (undefined4 *)FUN_004a02d0(iVar4,&DAT_0056de50);
  if (*(int *)(param_2 + 0x1c + uVar5 * 0x48) == 0) {
    pcVar9 = "%s TABLE %s";
  }
  else {
    pcVar9 = "%s SUBQUERY %d";
  }
  puVar6 = (undefined4 *)FUN_004a0240(iVar4,puVar6,(byte *)pcVar9);
  if (*(int *)(param_2 + 0x14 + uVar5 * 0x48) != 0) {
    puVar6 = (undefined4 *)FUN_004a0240(iVar4,puVar6,(byte *)"%s AS %s");
  }
  if ((uVar1 & 0xf0000) == 0) {
    if ((uVar1 & 0x3000) == 0) {
      if ((uVar1 & 0x8000000) != 0) {
        puVar6 = (undefined4 *)FUN_004a0240(iVar4,puVar6,(byte *)"%s VIRTUAL TABLE INDEX %d:%s");
      }
    }
    else {
      puVar6 = (undefined4 *)FUN_004a0240(iVar4,puVar6,(byte *)"%s USING INTEGER PRIMARY KEY");
      if ((uVar1 & 0x1000) == 0) {
        if ((uVar1 & 0x300000) == 0x300000) {
          pcVar9 = "%s (rowid>? AND rowid<?)";
        }
        else if ((uVar1 & 0x200000) == 0) {
          if ((uVar1 & 0x100000) == 0) goto LAB_00477a6e;
          pcVar9 = "%s (rowid<?)";
        }
        else {
          pcVar9 = "%s (rowid>?)";
        }
      }
      else {
        pcVar9 = "%s (rowid=?)";
      }
      puVar6 = (undefined4 *)FUN_004a0240(iVar4,puVar6,(byte *)pcVar9);
    }
  }
  else {
    puVar7 = (undefined4 *)
             FUN_004776e0(iVar4,(char *)param_3,*(int *)(param_2 + 0x18 + uVar5 * 0x48));
    puVar6 = (undefined4 *)FUN_004a0240(iVar4,puVar6,(byte *)"%s USING %s%sINDEX%s%s%s");
    FUN_00494b00(iVar4,puVar7);
  }
LAB_00477a6e:
  if ((param_6 & 3) == 0) {
    FUN_0054a946();
  }
  piVar8 = (int *)FUN_004a0240(iVar4,puVar6,(byte *)"%s (~%lld rows)");
  FUN_004ae8f0(piVar2,0x96,iVar3,param_4,param_5,piVar8,0xffffffff);
  return;
}


/* FUN_00478e60 @ 00478e60  kind=gamemisc  attributed-by=none  size=73 */

undefined4 __cdecl FUN_00478e60(int param_1,undefined1 *param_2)

{
  if ((*(int *)(param_1 + 0x10) != 3) || ((param_2[2] & 1) == 0)) {
    switch(*param_2) {
    case 0x1a:
    case 0x98:
    case 0x99:
    case 0x9a:
      break;
    default:
      return 0;
    case 0x97:
      if (*(int *)(param_1 + 0x10) == 2) {
        return 0;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  return 2;
}


/* FUN_00479150 @ 00479150  kind=gamemisc  attributed-by=none  size=82 */

undefined4 __cdecl FUN_00479150(int param_1,char *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if ((*param_2 == -0x68) || (*param_2 == -0x66)) {
    puVar1 = *(undefined4 **)(param_1 + 0x10);
    iVar2 = 0;
    iVar4 = (int)*(short *)*puVar1;
    if (0 < iVar4) {
      piVar3 = (int *)((short *)*puVar1 + 0x1a);
      do {
        if (*(int *)(param_2 + 0x18) == *piVar3) break;
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 0x12;
      } while (iVar2 < iVar4);
    }
    if (iVar2 < iVar4) {
      puVar1[1] = puVar1[1] + 1;
      return 0;
    }
    puVar1[2] = puVar1[2] + 1;
  }
  return 0;
}


/* FUN_0047afc0 @ 0047afc0  kind=gamemisc  attributed-by=none  size=1397 */

void __cdecl
FUN_0047afc0(int *param_1,short *param_2,int param_3,int param_4,int *param_5,int param_6,
            int param_7,int param_8)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  size_t _Size;
  int *local_48;
  short *psStack_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  char *local_28;
  uint local_24;
  char *local_20;
  size_t local_1c;
  int *local_18;
  uint local_14;
  int local_10;
  int local_c;
  byte *local_8;
  
  iVar4 = *param_1;
  piVar3 = (int *)param_1[2];
  local_8 = (byte *)0x0;
  local_14 = 0;
  local_18 = piVar3;
  local_c = iVar4;
  if (piVar3 == (int *)0x0) {
    piVar3 = FUN_004af150(iVar4);
    param_1[2] = (int)piVar3;
    local_18 = piVar3;
    if (piVar3 != (int *)0x0) {
      FUN_004ae760(piVar3,0x94);
    }
  }
  if (param_8 < 0) {
    local_14 = piVar3[7];
    bVar1 = *(byte *)(param_5 + 6);
    if (((int)local_14 < piVar3[8]) || (iVar4 = FUN_0047de10(piVar3), iVar4 == 0)) {
      piVar3[7] = piVar3[7] + 1;
      iVar4 = piVar3[1];
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
    pbVar8 = (byte *)0x0;
  }
  else {
    do {
      puVar5 = FUN_00494b90(iVar4,0x2d);
      if (puVar5 != (undefined4 *)0x0) {
        memset(puVar5,0,0x2d);
        *(undefined2 *)((int)puVar5 + 0x1e) = 0xffff;
        *(undefined1 *)puVar5 = 0x84;
        puVar5[1] = puVar5 + 0xb;
        *(undefined1 *)(puVar5 + 0xb) = 0;
        puVar5[5] = 1;
        if (puVar5 != (undefined4 *)0x0) {
          if (param_4 == 0) {
            puVar5[6] = param_7;
            *(undefined1 *)((int)puVar5 + 1) = 100;
          }
          else {
            iVar10 = *(int *)(*(int *)(param_4 + 4) + local_10 * 4);
            iVar9 = *(int *)(param_3 + 4) + iVar10 * 0x18;
            if (*(short *)(param_3 + 0x24) == iVar10) {
              iVar10 = -1;
            }
            puVar5[6] = param_7 + 1 + iVar10;
            *(undefined1 *)((int)puVar5 + 1) = *(undefined1 *)(iVar9 + 0x15);
            local_28 = *(char **)(iVar9 + 0x10);
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
               (puVar7 = FUN_00496510(*param_1,0x5c,&local_28,1), puVar7 != (undefined4 *)0x0)) {
              *(ushort *)((int)puVar7 + 2) = *(ushort *)((int)puVar7 + 2) | 0x100;
              puVar7[2] = puVar5;
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
      puVar7 = FUN_00494b90(local_c,local_1c);
      if (puVar7 != (undefined4 *)0x0) {
        memset(puVar7,0,local_1c);
        *(undefined2 *)((int)puVar7 + 0x1e) = 0xffff;
        *(undefined1 *)puVar7 = 0x1a;
        if (_Size == 0xffffffff) {
          *(ushort *)((int)puVar7 + 2) = *(ushort *)((int)puVar7 + 2) | 0x400;
          puVar7[1] = 0;
        }
        else {
          puVar7[1] = puVar7 + 0xb;
          if (_Size != 0) {
            memcpy(puVar7 + 0xb,local_20,_Size);
          }
          *(undefined1 *)(_Size + puVar7[1]) = 0;
        }
        puVar7[5] = 1;
      }
      pcVar6 = (char *)FUN_00494b90(*param_1,0x2c);
      if (pcVar6 != (char *)0x0) {
        memset(pcVar6,0,0x2c);
        *pcVar6 = 'L';
        pcVar6[0x1e] = -1;
        pcVar6[0x1f] = -1;
        pcVar6[0x14] = '\x01';
        pcVar6[0x15] = '\0';
        pcVar6[0x16] = '\0';
        pcVar6[0x17] = '\0';
      }
      local_20 = (char *)*param_1;
      if (pcVar6 == (char *)0x0) {
        FUN_00498790((int)local_20,puVar5);
        FUN_00498790((int)local_20,puVar7);
      }
      else {
        if (puVar7 != (undefined4 *)0x0) {
          *(undefined4 **)(pcVar6 + 0xc) = puVar7;
          *(ushort *)(pcVar6 + 2) = *(ushort *)(pcVar6 + 2) | *(ushort *)((int)puVar7 + 2) & 0x100;
        }
        if (puVar5 != (undefined4 *)0x0) {
          *(undefined4 **)(pcVar6 + 8) = puVar5;
          *(ushort *)(pcVar6 + 2) = *(ushort *)(pcVar6 + 2) | *(ushort *)((int)puVar5 + 2) & 0x100;
        }
        FUN_004790b0((int)pcVar6);
        if (*(int *)(*param_1 + 0x5c) < *(int *)(pcVar6 + 0x14)) {
          FUN_004962b0(param_1,(byte *)"Expression tree is too large (maximum depth %d)");
        }
      }
      iVar4 = local_c;
      pbVar8 = (byte *)FUN_004966d0(local_c,(char *)local_8,pcVar6);
      local_10 = local_10 + 1;
      local_8 = pbVar8;
    } while (local_10 < param_5[5]);
  }
  if ((param_3 == *param_5) && (0 < param_8)) {
    puVar5 = FUN_00494b90(iVar4,0x2d);
    if (puVar5 != (undefined4 *)0x0) {
      memset(puVar5,0,0x2d);
      *(undefined2 *)((int)puVar5 + 0x1e) = 0xffff;
      *(undefined1 *)puVar5 = 0x84;
      puVar5[1] = puVar5 + 0xb;
      *(undefined1 *)(puVar5 + 0xb) = 0;
      puVar5[5] = 1;
    }
    puVar7 = FUN_00494b90(iVar4,0x2d);
    if (puVar7 != (undefined4 *)0x0) {
      memset(puVar7,0,0x2d);
      *(undefined1 *)puVar7 = 0x98;
      *(undefined2 *)((int)puVar7 + 0x1e) = 0xffff;
      puVar7[1] = puVar7 + 0xb;
      *(undefined1 *)(puVar7 + 0xb) = 0;
      puVar7[5] = 1;
    }
    if ((puVar5 != (undefined4 *)0x0) && (puVar7 != (undefined4 *)0x0)) {
      puVar5[6] = param_7;
      *(undefined1 *)((int)puVar5 + 1) = 100;
      puVar7[6] = *(undefined4 *)(param_2 + 0x1a);
      *(undefined2 *)(puVar7 + 7) = 0xffff;
    }
    pcVar6 = (char *)FUN_00494b90(*param_1,0x2c);
    if (pcVar6 != (char *)0x0) {
      memset(pcVar6,0,0x2c);
      *pcVar6 = 'K';
      pcVar6[0x1e] = -1;
      pcVar6[0x1f] = -1;
      pcVar6[0x14] = '\x01';
      pcVar6[0x15] = '\0';
      pcVar6[0x16] = '\0';
      pcVar6[0x17] = '\0';
    }
    iVar4 = *param_1;
    if (pcVar6 == (char *)0x0) {
      FUN_00498790(iVar4,puVar5);
      FUN_00498790(iVar4,puVar7);
    }
    else {
      if (puVar7 != (undefined4 *)0x0) {
        *(undefined4 **)(pcVar6 + 0xc) = puVar7;
        *(ushort *)(pcVar6 + 2) = *(ushort *)(pcVar6 + 2) | *(ushort *)((int)puVar7 + 2) & 0x100;
      }
      if (puVar5 != (undefined4 *)0x0) {
        *(undefined4 **)(pcVar6 + 8) = puVar5;
        *(ushort *)(pcVar6 + 2) = *(ushort *)(pcVar6 + 2) | *(ushort *)((int)puVar5 + 2) & 0x100;
      }
      FUN_004790b0((int)pcVar6);
      if (*(int *)(*param_1 + 0x5c) < *(int *)(pcVar6 + 0x14)) {
        FUN_004962b0(param_1,(byte *)"Expression tree is too large (maximum depth %d)");
      }
    }
    pbVar8 = (byte *)FUN_004966d0(local_c,(char *)local_8,pcVar6);
    local_8 = pbVar8;
  }
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  _local_48 = CONCAT44(param_2,param_1);
  FUN_004a69e0((int *)&local_48,(int)pbVar8);
  piVar3 = FUN_004bb240(param_1,param_2,pbVar8,(undefined2 *)0x0,(int *)0x0,0,0);
  if ((0 < param_8) && ((char)param_5[6] == '\0')) {
    if ((int *)param_1[0x6c] != (int *)0x0) {
      param_1 = (int *)param_1[0x6c];
    }
    *(undefined1 *)(param_1 + 6) = 1;
  }
  bVar1 = *(byte *)(param_5 + 6);
  iVar4 = local_18[7];
  if ((iVar4 < local_18[8]) || (iVar9 = FUN_0047de10(local_18), iVar9 == 0)) {
    local_18[7] = local_18[7] + 1;
    iVar9 = local_18[1];
    *(undefined2 *)(iVar9 + iVar4 * 0x14) = 0x75;
    *(undefined1 *)(iVar9 + 3 + iVar4 * 0x14) = 0;
    *(uint *)(iVar9 + 4 + iVar4 * 0x14) = (uint)bVar1;
    *(int *)(iVar9 + 8 + iVar4 * 0x14) = param_8;
    *(undefined4 *)(iVar9 + 0xc + iVar4 * 0x14) = 0;
    *(undefined4 *)(iVar9 + 0x10 + iVar4 * 0x14) = 0;
  }
  if (piVar3 != (int *)0x0) {
    FUN_004bbe40(piVar3);
  }
  FUN_00498790(local_c,(undefined4 *)local_8);
  if (((local_14 != 0) && (-1 < (int)local_14)) && (local_14 < (uint)local_18[7])) {
    *(int *)(local_18[1] + 8 + local_14 * 0x14) = local_18[7];
  }
  return;
}


/* FUN_0047c700 @ 0047c700  kind=gamemisc  attributed-by=none  size=823 */

int __cdecl
FUN_0047c700(int *param_1,int *param_2,int param_3,undefined1 *param_4,undefined4 param_5,
            int param_6,int *param_7,size_t param_8,undefined4 param_9)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int extraout_EDX;
  
  piVar1 = (int *)param_1[2];
  iVar2 = piVar1[7];
  iVar4 = FUN_004b6b80(piVar1);
  if (param_6 != 0) {
    uVar5 = FUN_004ae7d0(piVar1,0x1c,param_6);
    iVar6 = FUN_004ae8f0(piVar1,0x18,*(undefined4 *)(param_3 + 8),param_6 + 1,
                         *(undefined4 *)(param_3 + 0xc),param_7,param_8);
    iVar8 = piVar1[7];
    if ((iVar8 < piVar1[8]) || (iVar7 = FUN_0047de10(piVar1), iVar7 == 0)) {
      piVar1[7] = piVar1[7] + 1;
      iVar7 = piVar1[1];
      *(undefined2 *)(iVar7 + iVar8 * 0x14) = 0x19;
      iVar7 = iVar7 + iVar8 * 0x14;
      *(undefined1 *)(iVar7 + 3) = 0;
      *(int *)(iVar7 + 4) = iVar6 + 2;
      *(int *)(iVar7 + 8) = iVar4;
      *(int *)(iVar7 + 0xc) = iVar6 + 2;
      *(undefined4 *)(iVar7 + 0x10) = 0;
    }
    if ((-1 < (int)uVar5) && (uVar5 < (uint)piVar1[7])) {
      *(int *)(piVar1[1] + 8 + uVar5 * 0x14) = piVar1[7];
    }
    iVar8 = *(int *)(param_3 + 0xc);
    uVar3 = *(undefined4 *)(param_3 + 8);
    iVar6 = piVar1[7];
    if ((iVar6 < piVar1[8]) || (iVar7 = FUN_0047de10(piVar1), iVar7 == 0)) {
      piVar1[7] = piVar1[7] + 1;
      iVar7 = piVar1[1];
      *(undefined4 *)(iVar7 + 4 + iVar6 * 0x14) = uVar3;
      *(int *)(iVar7 + 8 + iVar6 * 0x14) = param_6 + 1;
      *(undefined2 *)(iVar7 + iVar6 * 0x14) = 0xe;
      *(undefined1 *)(iVar7 + 3 + iVar6 * 0x14) = 0;
      *(int *)(iVar7 + 0xc + iVar6 * 0x14) = iVar8 + -1;
      *(undefined4 *)(iVar7 + 0x10 + iVar6 * 0x14) = 0;
    }
    iVar8 = piVar1[7];
    if ((iVar8 < piVar1[8]) || (iVar6 = FUN_0047de10(piVar1), iVar6 == 0)) {
      piVar1[7] = piVar1[7] + 1;
      iVar6 = piVar1[1];
      *(undefined2 *)(iVar6 + iVar8 * 0x14) = 7;
      *(undefined1 *)(iVar6 + 3 + iVar8 * 0x14) = 0;
      *(undefined4 *)(iVar6 + 4 + iVar8 * 0x14) = 1;
      *(int *)(iVar6 + 8 + iVar8 * 0x14) = param_6;
      *(undefined4 *)(iVar6 + 0xc + iVar8 * 0x14) = 0;
      *(undefined4 *)(iVar6 + 0x10 + iVar8 * 0x14) = 0;
    }
  }
  if (*(char *)(*param_1 + 0x38) == '\0') {
    FUN_00473870(piVar1,(int)param_2,iVar4);
    switch(*param_4) {
    case 6:
      FUN_00497600((int)param_1,*(int *)(param_3 + 8),*(int *)(param_4 + 4),1);
      break;
    case 7:
      iVar8 = FUN_00493750((char *)**(undefined4 **)(*param_2 + 8),param_4[1]);
      param_4[1] = (char)iVar8;
      iVar8 = FUN_0049cb40((int)param_1);
      FUN_004ae8f0(piVar1,0x1f,*(undefined4 *)(param_3 + 8),1,iVar8,(int *)(param_4 + 1),1);
      FUN_00496d90((int)param_1,*(int *)(param_3 + 8),1);
      FUN_004ae830(piVar1,0x61,*(undefined4 *)(param_4 + 4),iVar8);
      FUN_004a68f0((int)param_1,iVar8);
      break;
    case 8:
    case 9:
      iVar8 = FUN_0049cb40((int)param_1);
      iVar6 = FUN_0049cb40(extraout_EDX);
      FUN_004ae890(piVar1,0x1f,*(undefined4 *)(param_3 + 8),*(undefined4 *)(param_3 + 0xc),iVar8);
      FUN_004ae830(piVar1,0x38,*(undefined4 *)(param_4 + 4),iVar6);
      FUN_004ae890(piVar1,0x39,*(undefined4 *)(param_4 + 4),iVar8,iVar6);
      if (piVar1[1] != 0) {
        *(undefined1 *)(piVar1[1] + -0x11 + piVar1[7] * 0x14) = 8;
      }
      FUN_004a68f0((int)param_1,iVar6);
      FUN_004a68f0((int)param_1,iVar8);
      break;
    case 10:
      if (*(int *)(param_4 + 8) == 0) {
        iVar8 = FUN_0049cb00((int)param_1,*(int *)(param_3 + 0xc));
        *(int *)(param_4 + 8) = iVar8;
        *(undefined4 *)(param_4 + 0xc) = *(undefined4 *)(param_3 + 0xc);
      }
      FUN_00497600((int)param_1,*(int *)(param_3 + 8),*(int *)(param_4 + 8),*(int *)(param_4 + 0xc))
      ;
      FUN_004ae7d0(piVar1,4,*(undefined4 *)(param_4 + 4));
      break;
    default:
      FUN_004ae830(piVar1,0x10,*(undefined4 *)(param_3 + 8),*(undefined4 *)(param_3 + 0xc));
      FUN_00496d90((int)param_1,*(int *)(param_3 + 8),*(int *)(param_3 + 0xc));
    }
    if (param_2[2] != 0) {
      FUN_004ae890(piVar1,0x7a,param_2[2],param_9,0xffffffff);
    }
    if (piVar1[10] != 0) {
      *(int *)(piVar1[10] - (iVar4 * 4 + 4)) = piVar1[7];
    }
    FUN_004ae7d0(piVar1,3,param_5);
    return iVar2;
  }
  return 0;
}


/* FUN_0047d1b0 @ 0047d1b0  kind=gamemisc  attributed-by=none  size=148 */

int __cdecl FUN_0047d1b0(byte *param_1)

{
  byte **ppbVar1;
  byte **ppbVar2;
  byte bVar3;
  byte *pbVar4;
  byte **ppbVar5;
  int iVar6;
  byte *pbVar7;
  int local_c;
  
  local_c = 0;
  ppbVar5 = &param_1;
  while( true ) {
    ppbVar1 = ppbVar5 + 2;
    pbVar7 = ppbVar5[1];
    ppbVar2 = ppbVar5 + 3;
    pbVar4 = ppbVar5[4];
    iVar6 = 0;
    ppbVar5 = ppbVar5 + 5;
    while (pbVar7 != (byte *)0x0) {
      bVar3 = *param_1;
      pbVar7 = pbVar7 + -1;
      if (((&DAT_00569720)[bVar3] & 4) == 0) {
        return local_c;
      }
      param_1 = param_1 + 1;
      iVar6 = (int)(char)bVar3 + (iVar6 * 5 + -0x18) * 2;
    }
    if (iVar6 < (int)*ppbVar1) {
      return local_c;
    }
    if ((int)*ppbVar2 < iVar6) {
      return local_c;
    }
    if ((pbVar4 != (byte *)0x0) && (pbVar4 != (byte *)(int)(char)*param_1)) break;
    param_1 = param_1 + 1;
    local_c = local_c + 1;
    *(int *)*ppbVar5 = iVar6;
    if (pbVar4 == (byte *)0x0) {
      return local_c;
    }
  }
  return local_c;
}


/* FUN_0047d250 @ 0047d250  kind=gamemisc  attributed-by=none  size=374 */

void __cdecl FUN_0047d250(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  void *pvVar2;
  bool bVar3;
  void *pvVar4;
  void *local_a4;
  void *local_a0;
  undefined4 local_9c [4];
  int local_8c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  pvVar2 = (void *)0x0;
  if (DAT_00583f38 == 0) {
    local_9c[0] = 0x94;
    (*(code *)PTR_GetVersionExA_00583704)(local_9c);
    DAT_00583f38 = (local_8c == 2) + 1;
  }
  if (DAT_00583f38 == 2) {
    local_a0 = (void *)0x0;
    iVar1 = (*(code *)PTR_FormatMessageW_00583620)(0x1300,0,param_1,0,&local_a0);
    bVar3 = true;
    if (iVar1 == 0) goto LAB_0047d37d;
    if (DAT_00583e74 != (code *)0x0) {
      (*DAT_00583e74)();
    }
    pvVar2 = FUN_004bdc10(local_a0);
    pvVar4 = local_a0;
    if (DAT_00583e78 != (code *)0x0) {
      (*DAT_00583e78)();
      pvVar4 = local_a0;
    }
  }
  else {
    local_a4 = (void *)0x0;
    iVar1 = (*(code *)PTR_FormatMessageA_00583614)(0x1300,0,param_1,0,&local_a4,0,0);
    bVar3 = true;
    if (iVar1 == 0) goto LAB_0047d37d;
    if (DAT_00583e74 != (code *)0x0) {
      (*DAT_00583e74)();
    }
    local_a0 = FUN_00480740(local_a4);
    if (local_a0 == (void *)0x0) {
      pvVar2 = (void *)0x0;
    }
    else {
      pvVar2 = FUN_004bdc10(local_a0);
      FUN_00466dd0((int)local_a0);
    }
    pvVar4 = local_a4;
    if (DAT_00583e78 != (code *)0x0) {
      (*DAT_00583e78)();
      pvVar4 = local_a4;
    }
  }
  (*(code *)PTR_LocalFree_0058377c)(pvVar4);
  bVar3 = iVar1 == 0;
LAB_0047d37d:
  if (bVar3) {
    FUN_00466a80(param_2,param_3,(byte *)"OsError 0x%x (%u)");
  }
  else {
    FUN_00466a80(param_2,param_3,&DAT_0056de50);
    FUN_00466dd0((int)pvVar2);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0047d5d0 @ 0047d5d0  kind=gamemisc  attributed-by=none  size=286 */

void __cdecl FUN_0047d5d0(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  uint *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint local_a4;
  int local_a0;
  undefined4 local_9c [4];
  int local_8c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_a0 = param_1;
  if (DAT_00583f38 == 0) {
    local_9c[0] = 0x94;
    (*(code *)PTR_GetVersionExA_00583704)(local_9c);
    DAT_00583f38 = (local_8c == 2) + 1;
  }
  if (DAT_00583f38 == 2) {
    uVar7 = 0x1fe;
    iVar2 = DAT_00582bb8 + 2;
    uVar6 = 1;
  }
  else {
    iVar2 = 4;
    puVar5 = &local_a4;
    if (DAT_00582acc == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (*DAT_00582b10)(5);
      if (iVar4 != 0) {
        (*DAT_00582b18)(iVar4);
      }
    }
    do {
      uVar1 = FUN_00487580();
      *(undefined1 *)puVar5 = uVar1;
      puVar5 = (uint *)((int)puVar5 + 1);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    if (iVar4 != 0) {
      (*DAT_00582b20)(iVar4);
    }
    uVar7 = 1;
    sVar3 = (short)((ulonglong)(local_a4 & 0x7fffffff) % 0x1fd);
    iVar2 = DAT_00582bb8 + 2 + (int)sVar3;
    *(short *)(local_a0 + 0xe) = sVar3;
    uVar6 = 3;
    param_1 = local_a0;
  }
  iVar2 = FUN_004c2320((undefined4 *)(param_1 + 8),uVar6,iVar2,0,uVar7,0);
  if (iVar2 == 0) {
    uVar6 = (*(code *)PTR_GetLastError_005836a4)();
    *(undefined4 *)(param_1 + 0x14) = uVar6;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0047db10 @ 0047db10  kind=gamemisc  attributed-by=none  size=754 */

void __cdecl FUN_0047db10(int param_1,char *param_2)

{
  uint uVar1;
  code *pcVar2;
  char cVar3;
  void *pvVar4;
  void *pvVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  int local_31c;
  undefined1 local_318 [260];
  undefined1 local_214 [112];
  undefined4 local_1a4 [4];
  int local_194;
  char acStack_111 [265];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  memset(acStack_111 + 1,0,0x106);
  if (DAT_00583e10 == 0) {
    if (DAT_00583f38 == 0) {
      local_1a4[0] = 0x94;
      (*(code *)PTR_GetVersionExA_00583704)(local_1a4);
      DAT_00583f38 = (local_194 == 2) + 1;
    }
    if (DAT_00583f38 == 2) {
      (*(code *)PTR_GetTempPathW_005836ec)(0xe6,local_318);
      pvVar4 = FUN_004bdc10(local_318);
    }
    else {
      (*(code *)PTR_GetTempPathA_005836e0)(0xe6,local_214);
      pvVar5 = FUN_00480740(local_214);
      if (pvVar5 == (void *)0x0) goto LAB_0047dbcb;
      pvVar4 = FUN_004bdc10(pvVar5);
      FUN_00466dd0((int)pvVar5);
    }
    if (pvVar4 == (void *)0x0) {
LAB_0047dbcb:
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    FUN_00466a80(0xe6,acStack_111 + 1,&DAT_0056de50);
    FUN_00466dd0((int)pvVar4);
  }
  else {
    FUN_00466a80(0xe6,acStack_111 + 1,&DAT_0056de50);
  }
  pcVar7 = acStack_111 + 1;
  while (acStack_111[1] != '\0') {
    pcVar7 = pcVar7 + 1;
    acStack_111[1] = *pcVar7;
  }
  uVar8 = (int)pcVar7 - (int)(acStack_111 + 1) & 0x3fffffff;
  pcVar7 = "etilqs_";
  do {
    pcVar6 = pcVar7;
    pcVar7 = pcVar6 + 1;
  } while (*pcVar7 != '\0');
  uVar1 = uVar8;
  if (param_1 <= (int)(((uint)(pcVar6 + -0x56df4f) & 0x3fffffff) + 0x12 + uVar8)) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  for (; (uVar1 != 0 && (acStack_111[uVar1] == '\\')); uVar1 = uVar1 - 1) {
  }
  if (uVar1 < 0x106) {
    acStack_111[uVar1 + 1] = '\0';
    pcVar7 = "%s\\etilqs_";
    if (uVar8 == 0) {
      pcVar7 = &DAT_0056df50;
    }
    FUN_00466a80(param_1 + -0x12,param_2,(byte *)pcVar7);
    uVar8 = 0;
    if (param_2 != (char *)0x0) {
      cVar3 = *param_2;
      pcVar7 = param_2;
      while (cVar3 != '\0') {
        pcVar7 = pcVar7 + 1;
        cVar3 = *pcVar7;
      }
      uVar8 = (int)pcVar7 - (int)param_2 & 0x3fffffff;
    }
    pcVar7 = param_2 + uVar8;
    iVar9 = 0xf;
    if (DAT_00582acc == 0) {
      local_31c = 0;
    }
    else {
      local_31c = (*DAT_00582b10)(5);
      if (local_31c != 0) {
        (*DAT_00582b18)(local_31c);
      }
    }
    do {
      cVar3 = FUN_00487580();
      *pcVar7 = cVar3;
      pcVar7 = pcVar7 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    if (local_31c != 0) {
      (*DAT_00582b20)(local_31c);
    }
    iVar9 = 3;
    do {
      uVar1 = uVar8 + 5;
      param_2[uVar8] =
           s_abcdefghijklmnopqrstuvwxyzABCDEF_00582a88[(uint)(byte)param_2[uVar8] % 0x3e];
      param_2[uVar8 + 1] =
           s_abcdefghijklmnopqrstuvwxyzABCDEF_00582a88[(uint)(byte)param_2[uVar8 + 1] % 0x3e];
      param_2[uVar8 + 2] =
           s_abcdefghijklmnopqrstuvwxyzABCDEF_00582a88[(uint)(byte)param_2[uVar8 + 2] % 0x3e];
      param_2[uVar8 + 3] =
           s_abcdefghijklmnopqrstuvwxyzABCDEF_00582a88[(uint)(byte)param_2[uVar8 + 3] % 0x3e];
      param_2[uVar8 + 4] =
           s_abcdefghijklmnopqrstuvwxyzABCDEF_00582a88[(uint)(byte)param_2[uVar8 + 4] % 0x3e];
      iVar9 = iVar9 + -1;
      uVar8 = uVar1;
    } while (iVar9 != 0);
    (param_2 + uVar1)[0] = '\0';
    (param_2 + uVar1)[1] = '\0';
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  ___report_rangecheckfailure();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* FUN_0047e280 @ 0047e280  kind=gamemisc  attributed-by=none  size=24 */

undefined4 __cdecl FUN_0047e280(int param_1,char *param_2)

{
  if (*param_2 == -0x67) {
    param_2[0x23] = param_2[0x23] + *(char *)(param_1 + 0x10);
  }
  return 0;
}


/* FUN_0047e970 @ 0047e970  kind=gamemisc  attributed-by=none  size=129 */

undefined4 __cdecl FUN_0047e970(char *param_1)

{
  char cVar1;
  code *local_18;
  code *local_14;
  int local_8;
  
  local_8 = 3;
  local_18 = FUN_00478e60;
  local_14 = FUN_0048b2c0;
  FUN_004bb020(&local_18,(int)param_1);
  if (local_8 == 0) {
    return 0;
  }
  if ((*(ushort *)(param_1 + 2) & 0x200) != 0) {
    cVar1 = *param_1;
    while (cVar1 == -99) {
      param_1 = *(char **)(param_1 + 8);
      cVar1 = *param_1;
    }
    switch(*param_1) {
    case '^':
    case 'b':
    case -0x7f:
    case -0x7e:
    case -0x7d:
    case -0x7b:
      return 0;
    case -100:
      if (**(char **)(param_1 + 8) == -0x7e) {
        return 0;
      }
      if (**(char **)(param_1 + 8) == -0x7f) {
        return 0;
      }
    }
  }
  return 1;
}


/* FUN_0047eaa0 @ 0047eaa0  kind=gamemisc  attributed-by=none  size=289 */

undefined4 __cdecl FUN_0047eaa0(int param_1,int param_2,undefined4 *param_3,ulonglong *param_4)

{
  ushort uVar1;
  int *piVar2;
  undefined4 uVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  double local_c;
  
  memset(param_4,0,0x30);
  if (param_2 == 0) {
    uVar3 = FUN_0048b480(param_1,param_4);
    return uVar3;
  }
  piVar2 = (int *)*param_3;
  if ((*(char *)((int)piVar2 + 0x1e) == '\x02') || (*(char *)((int)piVar2 + 0x1e) == '\x01')) {
    uVar1 = *(ushort *)(piVar2 + 7);
    if ((uVar1 & 8) == 0) {
      if ((uVar1 & 4) == 0) {
        local_c = 0.0;
        if ((uVar1 & 0x12) != 0) {
          local_c = 0.0;
          FUN_0048cc90((byte *)piVar2[1],&local_c,piVar2[6],*(char *)((int)piVar2 + 0x1f));
        }
      }
      else {
        local_c = (double)*(longlong *)(piVar2 + 4);
      }
    }
    else {
      local_c = *(double *)(piVar2 + 2);
    }
    local_c = local_c * 86400000.0 + 0.5;
    uVar7 = FUN_0054a946();
    *param_4 = uVar7;
    *(undefined1 *)((int)param_4 + 0x2a) = 1;
  }
  else {
    pbVar4 = (byte *)FUN_004ae680(piVar2,1);
    if ((pbVar4 == (byte *)0x0) || (iVar5 = FUN_00485890(param_1,pbVar4,param_4), iVar5 != 0)) {
      return 1;
    }
  }
  iVar5 = 1;
  if (1 < param_2) {
    do {
      pbVar4 = (byte *)FUN_004ae680((int *)param_3[iVar5],1);
      if ((pbVar4 == (byte *)0x0) || (iVar6 = FUN_00485a80(param_1,pbVar4,param_4), iVar6 != 0)) {
        return 1;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_2);
  }
  return 0;
}


/* FUN_0047ebd0 @ 0047ebd0  kind=gamemisc  attributed-by=none  size=369 */

undefined4 __cdecl
FUN_0047ebd0(int *param_1,undefined4 *param_2,int *param_3,int param_4,int *param_5,int param_6)

{
  char *pcVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
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
      piVar2 = FUN_00479c50(param_2,*(int *)(pcVar1 + 0x18),(int)*(short *)(pcVar1 + 0x1c),
                            0xffffffff,0xffffffff,2,0);
      if (piVar2 == (int *)0x0) {
LAB_0047ec80:
        if (*(int *)(pcVar1 + 0x18) != param_4) {
          return 0;
        }
        uVar3 = 1 << (local_c & 0x1f);
        uVar4 = 0;
        if (0x1f < local_c) {
          uVar4 = uVar3;
        }
        uVar3 = uVar3 ^ uVar4;
        if (0x3f < local_c) {
          uVar4 = uVar3;
        }
        local_18 = local_18 | uVar3;
        local_8 = local_8 | uVar4;
      }
      else {
        uVar3 = FUN_0048e620(param_1,*(char **)(*piVar2 + 8),*(char **)(*piVar2 + 0xc));
        uVar4 = FUN_004984d0(param_1,pcVar1);
        if (uVar3 != uVar4) goto LAB_0047ec80;
      }
      local_c = local_c + 1;
      local_10 = local_10 + 0x14;
      uStack_14 = local_8;
    } while ((int)local_c < *param_5);
  }
  if (local_18 != 0 || uStack_14 != 0) {
    while ((param_6 < param_3[9] &&
           (uVar3 = FUN_00479b90(param_1,param_5,param_4,(int)param_3,param_6), -1 < (int)uVar3))) {
      uVar4 = 1 << (uVar3 & 0x1f);
      uVar5 = 0;
      if (0x1f < uVar3) {
        uVar5 = uVar4;
      }
      uVar4 = uVar4 ^ uVar5;
      if (0x3f < uVar3) {
        uVar5 = uVar4;
      }
      local_18 = local_18 & ~uVar4;
      uStack_14 = uStack_14 & ~uVar5;
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


/* FUN_0047f030 @ 0047f030  kind=gamemisc  attributed-by=none  size=93 */

void FUN_0047f030(void)

{
  undefined4 local_9c [4];
  int local_8c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  if (DAT_00583f38 == 0) {
    local_9c[0] = 0x94;
    (*(code *)PTR_GetVersionExA_00583704)(local_9c);
    DAT_00583f38 = (local_8c == 2) + 1;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0047f090 @ 0047f090  kind=gamemisc  attributed-by=none  size=167 */

int __cdecl FUN_0047f090(int param_1,uint param_2,int param_3)

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
    goto LAB_0047f11e;
  }
  bVar3 = 0;
LAB_0047f11e:
  if ((*puVar4 & 0x1000000) != 0) {
    bVar3 = 1 - bVar3;
  }
  return bVar3 + 2;
}


/* FUN_0047f1a0 @ 0047f1a0  kind=gamemisc  attributed-by=none  size=848 */

uint __cdecl FUN_0047f1a0(undefined4 *param_1,int *param_2,int param_3,uint *param_4)

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
  byte *pbVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  bool bVar18;
  bool bVar19;
  ulonglong uVar20;
  uint local_40;
  uint uStack_3c;
  uint local_28;
  uint local_20;
  uint local_14;
  undefined4 *local_c;
  
  iVar15 = param_2[3];
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
  bVar19 = (char)param_2[0xb] != '\0';
  iVar16 = 0;
  local_c = (undefined4 *)(piVar4[2] + uVar11 * 0x14);
  uVar12 = uVar11;
  local_14 = uVar11;
  uVar7 = local_20;
joined_r0x0047f249:
  local_20 = uVar7;
  if ((iVar13 <= (int)uVar12) || (param_2[9] < iVar16)) goto LAB_0047f426;
  for (pcVar5 = (char *)*local_c;
      (pcVar5 != (char *)0x0 && ((*pcVar5 == '\\' || (*pcVar5 == '\x18'))));
      pcVar5 = *(char **)(pcVar5 + 8)) {
  }
  if ((*pcVar5 != -0x68) || (*(int *)(pcVar5 + 0x18) != param_3)) goto LAB_0047f426;
  if ((*param_2 == 0) || (param_2[9] <= iVar16)) {
    iVar17 = -1;
    local_28 = 0;
    pbVar14 = (byte *)0x0;
  }
  else {
    iVar17 = *(int *)(param_2[1] + iVar16 * 4);
    if (iVar17 == *(short *)(param_2[3] + 0x24)) {
      iVar17 = -1;
    }
    local_28 = (uint)*(byte *)(param_2[7] + iVar16);
    pbVar14 = *(byte **)(param_2[8] + iVar16 * 4);
  }
  if (*(short *)(pcVar5 + 0x1c) == iVar17) {
    if (pbVar14 == (byte *)0x0) {
      bVar18 = true;
    }
    else {
      puVar8 = (undefined4 *)FUN_004984d0(piVar2,(char *)*local_c);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = *(undefined4 **)(iVar3 + 8);
      }
      iVar9 = FUN_004bcc60((byte *)*puVar8,pbVar14);
      bVar18 = iVar9 == 0;
    }
  }
  else {
    bVar18 = false;
  }
  bVar1 = *(byte *)(local_c + 3);
  piVar10 = FUN_00479c50((undefined4 *)param_1[1],param_3,iVar17,param_1[4],param_1[5],0x83,
                         (int)param_2);
  if (piVar10 == (int *)0x0) {
LAB_0047f3ac:
    iVar9 = 0;
LAB_0047f3b1:
    if (!bVar18) goto LAB_0047f3b5;
    if (((iVar9 != 1) && (local_20 = local_28 ^ bVar1, uVar7 != 2)) &&
       (local_20 = uVar7, (local_28 ^ bVar1) != uVar7)) goto LAB_0047f426;
    uVar12 = uVar12 + 1;
    local_c = local_c + 5;
    local_14 = uVar12;
    if (iVar17 < 0) {
      bVar6 = true;
LAB_0047f426:
      if (local_c == (undefined4 *)(piVar4[2] + uVar11 * 0x14)) {
        return uVar11;
      }
      *param_4 = local_20 & 1;
      if ((bVar6) || ((bVar19 && (param_2[9] <= iVar16)))) {
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
              goto LAB_0047f490;
            }
            uVar11 = uVar11 + 1;
            piVar10 = piVar10 + 1;
          } while ((int)uVar11 < *piVar2);
        }
        local_40 = 0;
        uStack_3c = 0;
LAB_0047f490:
        uVar12 = local_14;
        if ((int)local_14 < iVar13) {
          iVar15 = local_14 * 0x14;
          do {
            uVar20 = FUN_004791b0(piVar2,*(char **)(iVar15 + piVar4[2]));
            if (((uint)uVar20 & ~local_40) != 0 || ((uint)(uVar20 >> 0x20) & ~uStack_3c) != 0) {
              return local_14;
            }
            uVar12 = local_14 + 1;
            iVar15 = iVar15 + 0x14;
            local_14 = uVar12;
          } while ((int)uVar12 < iVar13);
        }
      }
      return uVar12;
    }
    if ((*(char *)(*(int *)(iVar15 + 4) + 0x14 + iVar17 * 0x18) == '\0') && (iVar9 != 1)) {
      bVar19 = false;
    }
  }
  else {
    if ((short)piVar10[4] == 1) goto LAB_0047f426;
    if ((short)piVar10[4] == 0x80) {
      bVar19 = false;
      iVar9 = 1;
      goto LAB_0047f3b1;
    }
    if (piVar10[6] == 0 && piVar10[7] == 0) {
      iVar9 = 1;
      goto LAB_0047f3b1;
    }
    pcVar5 = *(char **)(*piVar10 + 0xc);
    if (*pcVar5 != -0x68) goto LAB_0047f3ac;
    iVar9 = FUN_0047f090((int)param_1,*(uint *)(pcVar5 + 0x18),(int)*(short *)(pcVar5 + 0x1c));
    if (bVar18) {
      if ((iVar9 < 2) || (iVar9 == *(byte *)(local_c + 3) + 2)) goto LAB_0047f3b1;
      goto LAB_0047f426;
    }
LAB_0047f3b5:
    if (iVar9 == 0) goto LAB_0047f426;
  }
  iVar16 = iVar16 + 1;
  uVar7 = local_20;
  goto joined_r0x0047f249;
}


/* FUN_0047f780 @ 0047f780  kind=gamemisc  attributed-by=none  size=543 */

void __cdecl FUN_0047f780(ulonglong *param_1,int param_2,undefined4 *param_3)

{
  errno_t eVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int local_68;
  int local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  double local_40;
  ulonglong local_38;
  undefined4 *local_30;
  tm local_2c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_2c.tm_sec = 0;
  local_2c.tm_min = 0;
  local_2c.tm_hour = 0;
  local_2c.tm_mday = 0;
  local_2c.tm_mon = 0;
  local_2c.tm_year = 0;
  local_2c.tm_wday = 0;
  local_2c.tm_yday = 0;
  local_60 = *param_1;
  local_58 = param_1[1];
  local_50 = param_1[2];
  local_48 = param_1[3];
  local_40 = (double)param_1[4];
  local_38 = param_1[5];
  local_30 = param_3;
  local_2c.tm_isdst = 0;
  FUN_00475680((uint *)&local_60);
  FUN_004752f0(&local_60);
  if ((int)local_58 - 0x7b3U < 0x43) {
    local_40 = (double)(int)(local_40 + 0.5);
  }
  else {
    local_58 = 0x1000007d0;
    local_50 = 1;
    local_48 = 0;
    local_40 = 0.0;
  }
  local_48 = local_48 & 0xffffffff;
  local_38._0_3_ = (uint3)(ushort)local_38;
  FUN_004753b0(&local_60);
  uVar4 = __alldiv((uint)local_60,local_60._4_4_,1000,0);
  local_68 = (uint)uVar4 + 0xe75c96c0;
  local_64 = ((int)((ulonglong)uVar4 >> 0x20) + -0x31) - (uint)((uint)uVar4 < 0x18a36940);
  if (DAT_00582bb4 == 0) {
    eVar1 = _localtime64_s(&local_2c,(__time64_t *)&local_68);
    if (eVar1 == 0) {
      local_58 = CONCAT44(local_2c.tm_mon + 1,local_2c.tm_year + 0x76c);
      local_50 = CONCAT44(local_2c.tm_hour,local_2c.tm_mday);
      local_40 = (double)local_2c.tm_sec;
      local_48 = CONCAT44(local_48._4_4_,local_2c.tm_min);
      local_38 = CONCAT44(local_38._4_4_,0x101);
      FUN_004753b0(&local_60);
      *local_30 = 0;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  *(undefined4 *)(param_2 + 0x38) = 1;
  if (*(int *)(param_2 + 8) == 0) {
    iVar2 = 1000000000;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_2 + 8) + 0x50);
  }
  iVar3 = 0;
  if (-1 < iVar2) {
    do {
      if ("local time unavailable"[iVar3] == '\0') break;
      iVar3 = iVar3 + 1;
    } while (iVar3 <= iVar2);
  }
  if (iVar3 <= iVar2) {
    iVar2 = FUN_004b7260((int *)(param_2 + 8),iVar3 + 1U,0);
    if (iVar2 == 0) {
      memcpy(*(void **)(param_2 + 0xc),"local time unavailable",iVar3 + 1U);
      *(int *)(param_2 + 0x20) = iVar3;
      *(undefined4 *)(param_2 + 0x24) = 0x1030202;
    }
  }
  *local_30 = 1;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00480740 @ 00480740  kind=gamemisc  attributed-by=none  size=129 */

void * __cdecl FUN_00480740(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  iVar1 = (*(code *)PTR_AreFileApisANSI_0058356c)();
  iVar2 = (*(code *)PTR_MultiByteToWideChar_005837ac)(iVar1 == 0,0,param_1,0xffffffff,0,0);
  if (iVar2 * 2 == 0) {
    return (void *)0x0;
  }
  _Dst = (void *)FUN_004a0350(iVar2 << 2);
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,iVar2 << 2);
    if (_Dst != (void *)0x0) {
      iVar1 = (*(code *)PTR_MultiByteToWideChar_005837ac)
                        (iVar1 == 0,0,param_1,0xffffffff,_Dst,iVar2 * 2);
      if (iVar1 == 0) {
        FUN_00466dd0((int)_Dst);
        _Dst = (void *)0x0;
      }
      return _Dst;
    }
  }
  return (void *)0x0;
}


/* FUN_004816ca @ 004816ca  kind=gamemisc  attributed-by=none  size=7194 */

void __fastcall FUN_004816ca(undefined4 *param_1)

{
  size_t _Size;
  double dVar1;
  double dVar2;
  char cVar3;
  uint *puVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  char *pcVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  uint uVar14;
  ushort *puVar15;
  int iVar16;
  int *unaff_EBX;
  int iVar17;
  uint unaff_EBP;
  uint *unaff_ESI;
  int *piVar18;
  uint unaff_EDI;
  undefined4 uVar19;
  undefined4 uStack00000008;
  
  while ((int)unaff_EDI <= *(int *)*param_1) {
    iVar16 = *(int *)(unaff_EBP - 0x44);
    iVar12 = 0;
    if (0 < iVar16) {
      puVar15 = (ushort *)(unaff_ESI[2] + 0xe);
      do {
        if (*puVar15 == unaff_EDI) break;
        iVar12 = iVar12 + 1;
        puVar15 = puVar15 + 10;
      } while (iVar12 < iVar16);
      unaff_EBX = *(int **)(unaff_EBP - 0x4c);
      iVar16 = *(int *)(unaff_EBP - 0x44);
    }
    if (iVar12 == iVar16) {
      puVar7 = FUN_00494b90(*(int *)(unaff_EBP - 0x38),0x2d);
      if (puVar7 == (undefined4 *)0x0) {
        uStack00000008 = 0x481798;
        __security_check_cookie(*(uint *)(unaff_EBP - 4) ^ unaff_EBP);
        return;
      }
      memset(puVar7,0,0x2d);
      *(undefined2 *)((int)puVar7 + 0x1e) = 0xffff;
      *(undefined1 *)puVar7 = 0x81;
      *(undefined1 *)(puVar7 + 0xb) = 0;
      *(ushort *)((int)puVar7 + 2) = *(ushort *)((int)puVar7 + 2) | 0x400;
      puVar4 = *(uint **)(unaff_EBP - 0x30);
      piVar18 = *(int **)(unaff_EBP - 0x2c);
      puVar7[5] = 1;
      puVar7[1] = unaff_EDI;
      unaff_ESI = FUN_00498f00(piVar18,puVar4,puVar7);
      *(uint **)(unaff_EBP - 0x30) = unaff_ESI;
      if (unaff_ESI != (uint *)0x0) {
        iVar16 = *(int *)(unaff_EBP - 0x68);
        uVar14 = unaff_ESI[2];
        *(int *)(unaff_EBP - 0x44) = *(int *)(unaff_EBP - 0x44) + 1;
        *(short *)(uVar14 + 0xe + iVar16) = (short)unaff_EDI;
        *(int *)(unaff_EBP - 0x68) = iVar16 + 0x14;
      }
    }
    unaff_EDI = unaff_EDI + 1;
    if (*(char *)(*(int *)(unaff_EBP - 0x38) + 0x38) != '\0') break;
    param_1 = *(undefined4 **)(unaff_EBP - 0x28);
  }
  iVar16 = *(int *)(unaff_EBP - 0x44);
  puVar7 = FUN_00494b90(*(int *)(unaff_EBP - 0x38),iVar16 * 4);
  *(undefined4 **)(unaff_EBP - 0x80) = puVar7;
  if (puVar7 == (undefined4 *)0x0) {
    *(undefined4 *)(unaff_EBP - 0x68) = 0;
  }
  else {
    iVar12 = 0;
    if (0 < iVar16) {
      puVar15 = (ushort *)(unaff_ESI[2] + 0xe);
      do {
        puVar7[iVar12] = *puVar15 - 1;
        iVar12 = iVar12 + 1;
        puVar15 = puVar15 + 10;
      } while (iVar12 < iVar16);
      unaff_EBX = *(int **)(unaff_EBP - 0x4c);
    }
    puVar7 = FUN_00494b90(*(int *)(unaff_EBP - 0x38),iVar16 * 5 + 0x10);
    *(undefined4 **)(unaff_EBP - 0x68) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      *(short *)((int)puVar7 + 6) = (short)iVar16;
      puVar7[2] = puVar7 + iVar16 + 3;
      *(undefined1 *)(puVar7 + 1) =
           *(undefined1 *)(*(int *)(*(int *)(*(int *)(unaff_EBP - 0x38) + 0x10) + 0xc) + 0x4d);
      if (0 < iVar16) {
        iVar16 = 0;
        puVar7 = puVar7 + 3;
        *(undefined4 *)(unaff_EBP - 0x48) = 0;
        *(undefined4 **)(unaff_EBP - 0x34) = puVar7;
        iVar12 = 0;
        do {
          pcVar5 = *(char **)(iVar16 + unaff_ESI[2]);
          *(char **)(unaff_EBP - 0x3c) = pcVar5;
          if ((*(ushort *)(pcVar5 + 2) & 0x100) == 0) {
            iVar16 = *(int *)(*(int *)(unaff_EBP - 0x80) + iVar12 * 4);
            puVar7 = *(undefined4 **)(*(int *)(unaff_EBP - 0x28) + 0x3c);
            if (puVar7 == (undefined4 *)0x0) {
              puVar8 = (undefined4 *)0x0;
LAB_0048189e:
              if (*(int *)**(undefined4 **)(unaff_EBP - 0x28) <= iVar16) goto LAB_0048187f;
              piVar18 = *(int **)(unaff_EBP - 0x2c);
              puVar8 = (undefined4 *)
                       FUN_004984d0(piVar18,*(char **)(((int *)**(undefined4 **)(unaff_EBP - 0x28))
                                                       [2] + iVar16 * 0x14));
            }
            else {
              puVar8 = (undefined4 *)FUN_004815e0(*(int **)(unaff_EBP - 0x2c),puVar7,iVar16);
              if (puVar8 == (undefined4 *)0x0) goto LAB_0048189e;
LAB_0048187f:
              piVar18 = *(int **)(unaff_EBP - 0x2c);
            }
            if (puVar8 == (undefined4 *)0x0) {
              puVar8 = *(undefined4 **)(*(int *)(unaff_EBP - 0x38) + 8);
            }
            pcVar5 = (char *)*puVar8;
            *(char **)(unaff_EBP - 0x88) = pcVar5;
            if (pcVar5 == (char *)0x0) {
              uVar14 = 0;
            }
            else {
              cVar3 = *pcVar5;
              pcVar9 = pcVar5;
              while (cVar3 != '\0') {
                pcVar9 = pcVar9 + 1;
                cVar3 = *pcVar9;
              }
              uVar14 = (int)pcVar9 - (int)pcVar5 & 0x3fffffff;
            }
            *(uint *)(unaff_EBP - 0x84) = uVar14;
            if (uVar14 == 0) {
              puVar13 = *(undefined4 **)(unaff_EBP - 0x3c);
            }
            else {
              puVar7 = FUN_00496510(*piVar18,0x5c,(undefined4 *)(unaff_EBP - 0x88),1);
              puVar13 = *(undefined4 **)(unaff_EBP - 0x3c);
              if (puVar7 != (undefined4 *)0x0) {
                puVar7[2] = *(undefined4 **)(unaff_EBP - 0x3c);
                *(ushort *)((int)puVar7 + 2) = *(ushort *)((int)puVar7 + 2) | 0x100;
                puVar13 = puVar7;
              }
            }
            iVar16 = *(int *)(unaff_EBP - 0x48);
            puVar7 = *(undefined4 **)(unaff_EBP - 0x34);
            *(undefined4 **)(iVar16 + *(int *)(*(int *)(unaff_EBP - 0x30) + 8)) = puVar13;
          }
          else {
            puVar8 = (undefined4 *)FUN_004984d0(*(int **)(unaff_EBP - 0x2c),pcVar5);
            iVar16 = *(int *)(unaff_EBP - 0x48);
          }
          iVar11 = *(int *)(unaff_EBP - 0x68);
          *puVar7 = puVar8;
          unaff_ESI = *(uint **)(unaff_EBP - 0x30);
          iVar17 = iVar12 + 1;
          *(undefined1 *)(iVar12 + *(int *)(iVar11 + 8)) =
               *(undefined1 *)(unaff_ESI[2] + 0xc + iVar16);
          puVar7 = puVar7 + 1;
          iVar16 = iVar16 + 0x14;
          *(undefined4 **)(unaff_EBP - 0x34) = puVar7;
          *(int *)(unaff_EBP - 0x48) = iVar16;
          iVar12 = iVar17;
        } while (iVar17 < *(int *)(unaff_EBP - 0x44));
        unaff_EBX = *(int **)(unaff_EBP - 0x4c);
      }
    }
  }
  puVar7 = *(undefined4 **)(unaff_EBP - 0x28);
  puVar7[0xe] = unaff_ESI;
  piVar18 = *(int **)(unaff_EBP - 0x2c);
  piVar10 = FUN_00499140(*piVar18,(int *)unaff_ESI,0);
  iVar16 = *(int *)(unaff_EBP - 0x58);
  *(int **)(*(int *)(unaff_EBP - 100) + 0x38) = piVar10;
  if (iVar16 == 0x71) {
    *(undefined4 *)(unaff_EBP - 0x60) = 0;
  }
  else {
    iVar12 = piVar18[0xf];
    iVar11 = *(int *)*puVar7;
    iVar17 = piVar18[0x10];
    iVar16 = iVar11 + 1;
    *(int *)(unaff_EBP - 0x70) = iVar11;
    *(int *)(unaff_EBP - 0x60) = iVar17;
    if (iVar12 < iVar16) {
      iVar12 = piVar18[0x13];
      *(int *)(unaff_EBP - 0x60) = iVar12 + 1;
      piVar18[0x13] = iVar12 + iVar16;
    }
    else {
      piVar18[0x10] = iVar17 + iVar16;
      piVar18[0xf] = iVar12 - iVar16;
    }
    iVar16 = unaff_EBX[7];
    iVar12 = unaff_EBX[8];
    *(int *)(unaff_EBP - 0x34) = iVar16;
    if (iVar16 < iVar12) {
LAB_00481a28:
      iVar12 = unaff_EBX[1];
      unaff_EBX[7] = unaff_EBX[7] + 1;
      uVar19 = *(undefined4 *)(unaff_EBP - 0x60);
      *(undefined2 *)(iVar12 + iVar16 * 0x14) = 7;
      *(undefined1 *)(iVar12 + 3 + iVar16 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 4 + iVar16 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 8 + iVar16 * 0x14) = uVar19;
      *(undefined4 *)(iVar12 + 0xc + iVar16 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 0x10 + iVar16 * 0x14) = 0;
    }
    else {
      if (iVar12 == 0) {
        iVar12 = 0x33;
      }
      else {
        iVar12 = iVar12 * 2;
      }
      puVar7 = FUN_00494cf0(*unaff_EBX,(undefined4 *)unaff_EBX[1],iVar12 * 0x14);
      if (puVar7 != (undefined4 *)0x0) {
        iVar16 = *unaff_EBX;
        if (((iVar16 == 0) || (puVar7 < *(undefined4 **)(iVar16 + 0x104))) ||
           (*(undefined4 **)(iVar16 + 0x108) <= puVar7)) {
          uVar14 = (*DAT_00582af0._4_4_)(puVar7);
        }
        else {
          uVar14 = (uint)*(ushort *)(iVar16 + 0xe8);
        }
        iVar16 = *(int *)(unaff_EBP - 0x34);
        unaff_EBX[8] = uVar14 / 0x14;
        unaff_EBX[1] = (int)puVar7;
        goto LAB_00481a28;
      }
    }
    _Size = iVar11 * 5 + 0x10;
    puVar7 = FUN_00494b90(*(int *)(unaff_EBP - 0x38),_Size);
    *(undefined4 **)(unaff_EBP - 0x40) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      memset(puVar7,0,_Size);
      iVar16 = *(int *)(unaff_EBP - 0x40);
      if (iVar16 != 0) {
        *(short *)(iVar16 + 6) = (short)iVar11;
        *(int *)(iVar16 + 8) = iVar16 + (iVar11 + 3) * 4;
        *(undefined1 *)(iVar16 + 4) =
             *(undefined1 *)(*(int *)(*(int *)(*(int *)(unaff_EBP - 0x38) + 0x10) + 0xc) + 0x4d);
        if (0 < iVar11) {
          iVar12 = *(int *)(unaff_EBP - 0x70);
          *(int *)(unaff_EBP - 0x34) = iVar16 + 0xc;
          iVar11 = 0;
          iVar16 = 0;
          do {
            puVar7 = *(undefined4 **)(*(int *)(unaff_EBP - 0x28) + 0x3c);
            if (puVar7 == (undefined4 *)0x0) {
              uVar14 = 0;
LAB_00481adf:
              if (iVar16 < *(int *)**(undefined4 **)(unaff_EBP - 0x28)) {
                uVar14 = FUN_004984d0(*(int **)(unaff_EBP - 0x2c),
                                      *(char **)(((int *)**(undefined4 **)(unaff_EBP - 0x28))[2] +
                                                iVar11));
              }
            }
            else {
              uVar14 = FUN_004815e0(*(int **)(unaff_EBP - 0x2c),puVar7,iVar16);
              if (uVar14 == 0) goto LAB_00481adf;
            }
            puVar4 = *(uint **)(unaff_EBP - 0x34);
            iVar17 = iVar16 + 1;
            *puVar4 = uVar14;
            iVar11 = iVar11 + 0x14;
            *(undefined1 *)(iVar16 + *(int *)(*(int *)(unaff_EBP - 0x40) + 8)) = 0;
            *(uint **)(unaff_EBP - 0x34) = puVar4 + 1;
            iVar16 = iVar17;
          } while (iVar17 < iVar12);
          unaff_EBX = *(int **)(unaff_EBP - 0x4c);
        }
      }
    }
    piVar18 = *(int **)(unaff_EBP - 0x2c);
    puVar7 = *(undefined4 **)(unaff_EBP - 0x28);
  }
  puVar7[0xf] = 0;
  FUN_004a6ac0(piVar18,puVar7,(int *)puVar7[0xe],"ORDER");
  puVar8 = *(undefined4 **)(unaff_EBP - 100);
  if (puVar8[0xf] == 0) {
    FUN_004a6ac0(piVar18,puVar8,(int *)puVar8[0xe],"ORDER");
  }
  FUN_004754f0(piVar18,(int)puVar7,*(undefined4 *)(unaff_EBP - 0x5c));
  if ((puVar7[2] == 0) || (*(int *)(unaff_EBP - 0x58) != 0x71)) {
    *(undefined4 *)(unaff_EBP - 0x30) = 0;
    iVar16 = 0;
  }
  else {
    iVar16 = piVar18[0x13];
    *(int *)(unaff_EBP - 0x3c) = iVar16 + 1;
    iVar16 = iVar16 + 2;
    *(int *)(unaff_EBP - 0x30) = iVar16;
    piVar18[0x13] = iVar16;
    if (puVar7[3] == 0) {
      *(undefined4 *)(unaff_EBP - 0x34) = puVar7[2];
    }
    else {
      *(int *)(unaff_EBP - 0x34) = puVar7[3] + 1;
    }
    iVar16 = unaff_EBX[7];
    iVar12 = unaff_EBX[8];
    if (iVar16 < iVar12) {
LAB_00481c04:
      iVar12 = unaff_EBX[1];
      unaff_EBX[7] = unaff_EBX[7] + 1;
      *(undefined4 *)(iVar12 + 4 + iVar16 * 0x14) = *(undefined4 *)(unaff_EBP - 0x34);
      uVar19 = *(undefined4 *)(unaff_EBP - 0x3c);
      *(undefined2 *)(iVar12 + iVar16 * 0x14) = 0xe;
      *(undefined1 *)(iVar12 + 3 + iVar16 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 8 + iVar16 * 0x14) = uVar19;
      *(undefined4 *)(iVar12 + 0xc + iVar16 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 0x10 + iVar16 * 0x14) = 0;
    }
    else {
      if (iVar12 == 0) {
        iVar12 = 0x33;
      }
      else {
        iVar12 = iVar12 * 2;
      }
      puVar7 = FUN_00494cf0(*unaff_EBX,(undefined4 *)unaff_EBX[1],iVar12 * 0x14);
      if (puVar7 != (undefined4 *)0x0) {
        iVar12 = *unaff_EBX;
        if (((iVar12 == 0) || (puVar7 < *(undefined4 **)(iVar12 + 0x104))) ||
           (*(undefined4 **)(iVar12 + 0x108) <= puVar7)) {
          uVar14 = (*DAT_00582af0._4_4_)(puVar7);
        }
        else {
          uVar14 = (uint)*(ushort *)(iVar12 + 0xe8);
        }
        unaff_EBX[8] = uVar14 / 0x14;
        unaff_EBX[1] = (int)puVar7;
        goto LAB_00481c04;
      }
    }
    iVar12 = unaff_EBX[7];
    iVar16 = unaff_EBX[8];
    if (iVar12 < iVar16) {
LAB_00481ca6:
      iVar11 = unaff_EBX[1];
      unaff_EBX[7] = unaff_EBX[7] + 1;
      uVar19 = *(undefined4 *)(unaff_EBP - 0x30);
      iVar16 = *(int *)(unaff_EBP - 0x3c);
      *(undefined2 *)(iVar11 + iVar12 * 0x14) = 0xe;
      *(undefined1 *)(iVar11 + 3 + iVar12 * 0x14) = 0;
      *(int *)(iVar11 + 4 + iVar12 * 0x14) = iVar16;
      *(undefined4 *)(iVar11 + 8 + iVar12 * 0x14) = uVar19;
      *(undefined4 *)(iVar11 + 0xc + iVar12 * 0x14) = 0;
      *(undefined4 *)(iVar11 + 0x10 + iVar12 * 0x14) = 0;
    }
    else {
      if (iVar16 == 0) {
        iVar16 = 0x33;
      }
      else {
        iVar16 = iVar16 * 2;
      }
      puVar7 = FUN_00494cf0(*unaff_EBX,(undefined4 *)unaff_EBX[1],iVar16 * 0x14);
      if (puVar7 != (undefined4 *)0x0) {
        iVar16 = *unaff_EBX;
        if (((iVar16 == 0) || (puVar7 < *(undefined4 **)(iVar16 + 0x104))) ||
           (*(undefined4 **)(iVar16 + 0x108) <= puVar7)) {
          uVar14 = (*DAT_00582af0._4_4_)(puVar7);
        }
        else {
          uVar14 = (uint)*(ushort *)(iVar16 + 0xe8);
        }
        unaff_EBX[8] = uVar14 / 0x14;
        unaff_EBX[1] = (int)puVar7;
        goto LAB_00481ca6;
      }
      iVar16 = *(int *)(unaff_EBP - 0x3c);
    }
    piVar18 = *(int **)(unaff_EBP - 0x2c);
  }
  FUN_00498790(*(int *)(unaff_EBP - 0x38),*(undefined4 **)(*(int *)(unaff_EBP - 0x28) + 0x48));
  iVar12 = *(int *)(unaff_EBP - 0x28);
  *(undefined4 *)(iVar12 + 0x48) = 0;
  FUN_00498790(*(int *)(unaff_EBP - 0x38),*(undefined4 **)(iVar12 + 0x4c));
  iVar12 = *(int *)(unaff_EBP - 0x28);
  *(undefined2 *)(unaff_EBP - 0x14) = 10;
  *(undefined4 *)(iVar12 + 0x4c) = 0;
  piVar18[0x13] = piVar18[0x13] + 1;
  iVar12 = piVar18[0x13];
  *(int *)(unaff_EBP - 0x10) = iVar12;
  *(int *)(unaff_EBP - 0x6c) = iVar12 + 1;
  *(undefined4 *)(unaff_EBP - 0xc) = 0;
  *(int *)(unaff_EBP - 0x54) = iVar12 + 3;
  piVar18[0x13] = iVar12 + 5;
  *(undefined4 *)(unaff_EBP - 8) = 0;
  *(undefined2 *)(unaff_EBP - 0x24) = 10;
  *(int *)(unaff_EBP - 0x20) = iVar12 + 2;
  *(undefined4 *)(unaff_EBP - 0x1c) = 0;
  *(undefined4 *)(unaff_EBP - 0x18) = 0;
  iVar11 = unaff_EBX[7];
  *(int *)(unaff_EBP - 0x70) = iVar12 + 5;
  iVar17 = unaff_EBX[8];
  *(int *)(unaff_EBP - 0x4c) = iVar12;
  *(int *)(unaff_EBP - 0x3c) = iVar12 + 2;
  *(int *)(unaff_EBP - 0x34) = iVar11;
  if (iVar11 < iVar17) {
LAB_00481de3:
    iVar12 = unaff_EBX[1];
    unaff_EBX[7] = unaff_EBX[7] + 1;
    *(undefined2 *)(iVar12 + iVar11 * 0x14) = 1;
    *(undefined1 *)(iVar12 + 3 + iVar11 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 4 + iVar11 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 8 + iVar11 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 0xc + iVar11 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 0x10 + iVar11 * 0x14) = 0;
  }
  else {
    if (iVar17 == 0) {
      iVar17 = 0x33;
    }
    else {
      iVar17 = iVar17 * 2;
    }
    puVar7 = FUN_00494cf0(*unaff_EBX,(undefined4 *)unaff_EBX[1],iVar17 * 0x14);
    if (puVar7 != (undefined4 *)0x0) {
      iVar12 = *unaff_EBX;
      if (((iVar12 == 0) || (puVar7 < *(undefined4 **)(iVar12 + 0x104))) ||
         (*(undefined4 **)(iVar12 + 0x108) <= puVar7)) {
        uVar14 = (*DAT_00582af0._4_4_)(puVar7);
      }
      else {
        uVar14 = (uint)*(ushort *)(iVar12 + 0xe8);
      }
      unaff_EBX[1] = (int)puVar7;
      iVar11 = *(int *)(unaff_EBP - 0x34);
      unaff_EBX[8] = uVar14 / 0x14;
      goto LAB_00481de3;
    }
    *(undefined4 *)(unaff_EBP - 0x34) = 1;
  }
  piVar18 = *(int **)(unaff_EBP - 100);
  *(int *)(unaff_EBP - 0x90) = unaff_EBX[7];
  piVar10 = *(int **)(unaff_EBP - 0x2c);
  piVar18[2] = iVar16;
  *(int *)(unaff_EBP - 0x84) = piVar10[0x7a];
  FUN_004a7e30(piVar10,piVar18,(byte *)(unaff_EBP - 0x14));
  iVar16 = unaff_EBX[7];
  iVar12 = unaff_EBX[8];
  if (iVar16 < iVar12) {
LAB_00481eb8:
    iVar12 = unaff_EBX[1];
    unaff_EBX[7] = unaff_EBX[7] + 1;
    uVar19 = *(undefined4 *)(unaff_EBP - 0x6c);
    *(undefined2 *)(iVar12 + iVar16 * 0x14) = 7;
    *(undefined1 *)(iVar12 + 3 + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 4 + iVar16 * 0x14) = 1;
    *(undefined4 *)(iVar12 + 8 + iVar16 * 0x14) = uVar19;
    *(undefined4 *)(iVar12 + 0xc + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 0x10 + iVar16 * 0x14) = 0;
  }
  else {
    if (iVar12 == 0) {
      iVar12 = 0x33;
    }
    else {
      iVar12 = iVar12 * 2;
    }
    puVar7 = FUN_00494cf0(*unaff_EBX,(undefined4 *)unaff_EBX[1],iVar12 * 0x14);
    if (puVar7 != (undefined4 *)0x0) {
      iVar12 = *unaff_EBX;
      if (((iVar12 == 0) || (puVar7 < *(undefined4 **)(iVar12 + 0x104))) ||
         (*(undefined4 **)(iVar12 + 0x108) <= puVar7)) {
        uVar14 = (*DAT_00582af0._4_4_)(puVar7);
      }
      else {
        uVar14 = (uint)*(ushort *)(iVar12 + 0xe8);
      }
      unaff_EBX[8] = uVar14 / 0x14;
      unaff_EBX[1] = (int)puVar7;
      goto LAB_00481eb8;
    }
  }
  iVar16 = unaff_EBX[7];
  iVar12 = unaff_EBX[8];
  if (iVar16 < iVar12) {
LAB_00481f57:
    iVar12 = unaff_EBX[1];
    unaff_EBX[7] = unaff_EBX[7] + 1;
    uVar19 = *(undefined4 *)(unaff_EBP - 0x4c);
    *(undefined2 *)(iVar12 + iVar16 * 0x14) = 4;
    *(undefined1 *)(iVar12 + 3 + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 4 + iVar16 * 0x14) = uVar19;
    *(undefined4 *)(iVar12 + 8 + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 0xc + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 0x10 + iVar16 * 0x14) = 0;
  }
  else {
    if (iVar12 == 0) {
      iVar12 = 0x33;
    }
    else {
      iVar12 = iVar12 * 2;
    }
    puVar7 = FUN_00494cf0(*unaff_EBX,(undefined4 *)unaff_EBX[1],iVar12 * 0x14);
    if (puVar7 != (undefined4 *)0x0) {
      iVar12 = *unaff_EBX;
      if (((iVar12 == 0) || (puVar7 < *(undefined4 **)(iVar12 + 0x104))) ||
         (*(undefined4 **)(iVar12 + 0x108) <= puVar7)) {
        uVar14 = (*DAT_00582af0._4_4_)(puVar7);
      }
      else {
        uVar14 = (uint)*(ushort *)(iVar12 + 0xe8);
      }
      unaff_EBX[8] = uVar14 / 0x14;
      unaff_EBX[1] = (int)puVar7;
      goto LAB_00481f57;
    }
  }
  piVar18 = *(int **)(unaff_EBP - 0x28);
  *(int *)(unaff_EBP - 0x94) = unaff_EBX[7];
  iVar16 = piVar18[2];
  iVar12 = piVar18[3];
  piVar18[2] = *(int *)(unaff_EBP - 0x30);
  piVar10 = *(int **)(unaff_EBP - 0x2c);
  piVar18[3] = 0;
  *(int *)(unaff_EBP - 0x98) = piVar10[0x7a];
  FUN_004a7e30(piVar10,piVar18,(byte *)(unaff_EBP - 0x24));
  iVar11 = *(int *)(unaff_EBP - 0x28);
  *(int *)(iVar11 + 8) = iVar16;
  *(int *)(iVar11 + 0xc) = iVar12;
  iVar16 = unaff_EBX[7];
  iVar12 = unaff_EBX[8];
  if (iVar16 < iVar12) {
LAB_0048203b:
    iVar12 = unaff_EBX[1];
    unaff_EBX[7] = unaff_EBX[7] + 1;
    uVar19 = *(undefined4 *)(unaff_EBP - 0x54);
    *(undefined2 *)(iVar12 + iVar16 * 0x14) = 7;
    *(undefined1 *)(iVar12 + 3 + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 4 + iVar16 * 0x14) = 1;
    *(undefined4 *)(iVar12 + 8 + iVar16 * 0x14) = uVar19;
    *(undefined4 *)(iVar12 + 0xc + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 0x10 + iVar16 * 0x14) = 0;
  }
  else {
    if (iVar12 == 0) {
      iVar12 = 0x33;
    }
    else {
      iVar12 = iVar12 * 2;
    }
    puVar7 = FUN_00494cf0(*unaff_EBX,(undefined4 *)unaff_EBX[1],iVar12 * 0x14);
    if (puVar7 != (undefined4 *)0x0) {
      iVar12 = *unaff_EBX;
      if (((iVar12 == 0) || (puVar7 < *(undefined4 **)(iVar12 + 0x104))) ||
         (*(undefined4 **)(iVar12 + 0x108) <= puVar7)) {
        uVar14 = (*DAT_00582af0._4_4_)(puVar7);
      }
      else {
        uVar14 = (uint)*(ushort *)(iVar12 + 0xe8);
      }
      unaff_EBX[8] = uVar14 / 0x14;
      unaff_EBX[1] = (int)puVar7;
      goto LAB_0048203b;
    }
  }
  iVar16 = unaff_EBX[7];
  iVar12 = unaff_EBX[8];
  if (iVar16 < iVar12) {
LAB_004820da:
    iVar12 = unaff_EBX[1];
    unaff_EBX[7] = unaff_EBX[7] + 1;
    uVar19 = *(undefined4 *)(unaff_EBP - 0x3c);
    *(undefined2 *)(iVar12 + iVar16 * 0x14) = 4;
    *(undefined1 *)(iVar12 + 3 + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 4 + iVar16 * 0x14) = uVar19;
    *(undefined4 *)(iVar12 + 8 + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 0xc + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 0x10 + iVar16 * 0x14) = 0;
  }
  else {
    if (iVar12 == 0) {
      iVar12 = 0x33;
    }
    else {
      iVar12 = iVar12 * 2;
    }
    puVar7 = FUN_00494cf0(*unaff_EBX,(undefined4 *)unaff_EBX[1],iVar12 * 0x14);
    if (puVar7 != (undefined4 *)0x0) {
      iVar12 = *unaff_EBX;
      if (((iVar12 == 0) || (puVar7 < *(undefined4 **)(iVar12 + 0x104))) ||
         (*(undefined4 **)(iVar12 + 0x108) <= puVar7)) {
        uVar14 = (*DAT_00582af0._4_4_)(puVar7);
      }
      else {
        uVar14 = (uint)*(ushort *)(iVar12 + 0xe8);
      }
      unaff_EBX[8] = uVar14 / 0x14;
      unaff_EBX[1] = (int)puVar7;
      goto LAB_004820da;
    }
  }
  piVar18 = *(int **)(unaff_EBP - 0x40);
  piVar10 = *(int **)(unaff_EBP - 0x2c);
  iVar16 = FUN_0047c700(piVar10,*(int **)(unaff_EBP - 0x28),unaff_EBP - 0x14,
                        *(undefined1 **)(unaff_EBP - 0x7c),*(int *)(unaff_EBP - 0x54) + 1,
                        *(int *)(unaff_EBP - 0x60),piVar18,0xfffffff0,
                        *(undefined4 *)(unaff_EBP - 0x5c));
  *(int *)(unaff_EBP - 0x30) = iVar16;
  iVar16 = *(int *)(unaff_EBP - 0x58);
  if ((iVar16 == 0x71) || (iVar16 == 0x70)) {
    iVar16 = FUN_0047c700(piVar10,*(int **)(unaff_EBP - 0x28),unaff_EBP - 0x24,
                          *(undefined1 **)(unaff_EBP - 0x7c),*(undefined4 *)(unaff_EBP - 0x70),
                          *(int *)(unaff_EBP - 0x60),piVar18,0xffffffef,
                          *(undefined4 *)(unaff_EBP - 0x5c));
    *(int *)(unaff_EBP - 0x78) = iVar16;
    iVar16 = *(int *)(unaff_EBP - 0x58);
  }
  if ((iVar16 == 0x72) || (iVar16 == 0x73)) {
    iVar16 = unaff_EBX[7];
    iVar12 = unaff_EBX[8];
    *(int *)(unaff_EBP - 0x50) = iVar16;
    if (iVar16 < iVar12) {
LAB_00482495:
      iVar12 = unaff_EBX[1];
      unaff_EBX[7] = unaff_EBX[7] + 1;
      uVar19 = *(undefined4 *)(unaff_EBP - 0x5c);
      *(undefined2 *)(iVar12 + iVar16 * 0x14) = 1;
      *(undefined1 *)(iVar12 + 3 + iVar16 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 4 + iVar16 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 8 + iVar16 * 0x14) = uVar19;
      *(undefined4 *)(iVar12 + 0xc + iVar16 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 0x10 + iVar16 * 0x14) = 0;
    }
    else {
      if (iVar12 == 0) {
        iVar12 = 0x33;
      }
      else {
        iVar12 = iVar12 * 2;
      }
      puVar7 = FUN_00494cf0(*unaff_EBX,(undefined4 *)unaff_EBX[1],iVar12 * 0x14);
      if (puVar7 != (undefined4 *)0x0) {
        iVar12 = *unaff_EBX;
        if (((iVar12 == 0) || (puVar7 < *(undefined4 **)(iVar12 + 0x104))) ||
           (*(undefined4 **)(iVar12 + 0x108) <= puVar7)) {
          uVar14 = (*DAT_00582af0._4_4_)(puVar7);
        }
        else {
          uVar14 = (uint)*(ushort *)(iVar12 + 0xe8);
        }
        unaff_EBX[8] = uVar14 / 0x14;
        unaff_EBX[1] = (int)puVar7;
        goto LAB_00482495;
      }
      *(undefined4 *)(unaff_EBP - 0x50) = 1;
    }
    iVar12 = *(int *)(unaff_EBP - 0x28);
    iVar16 = *(int *)(unaff_EBP - 100);
  }
  else {
    iVar16 = unaff_EBX[7];
    iVar12 = unaff_EBX[8];
    *(int *)(unaff_EBP - 0x50) = iVar16;
    if (iVar16 < iVar12) {
LAB_004821f1:
      iVar12 = unaff_EBX[1];
      unaff_EBX[7] = unaff_EBX[7] + 1;
      *(undefined4 *)(iVar12 + 4 + iVar16 * 0x14) = *(undefined4 *)(unaff_EBP - 0x54);
      uVar19 = *(undefined4 *)(unaff_EBP - 0x5c);
      *(undefined2 *)(iVar12 + iVar16 * 0x14) = 0x1b;
      *(undefined1 *)(iVar12 + 3 + iVar16 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 8 + iVar16 * 0x14) = uVar19;
      *(undefined4 *)(iVar12 + 0xc + iVar16 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 0x10 + iVar16 * 0x14) = 0;
    }
    else {
      if (iVar12 == 0) {
        iVar12 = 0x33;
      }
      else {
        iVar12 = iVar12 * 2;
      }
      puVar7 = FUN_00494cf0(*unaff_EBX,(undefined4 *)unaff_EBX[1],iVar12 * 0x14);
      if (puVar7 != (undefined4 *)0x0) {
        iVar16 = *unaff_EBX;
        if (((iVar16 == 0) || (puVar7 < *(undefined4 **)(iVar16 + 0x104))) ||
           (*(undefined4 **)(iVar16 + 0x108) <= puVar7)) {
          uVar14 = (*DAT_00582af0._4_4_)(puVar7);
        }
        else {
          uVar14 = (uint)*(ushort *)(iVar16 + 0xe8);
        }
        unaff_EBX[8] = uVar14 / 0x14;
        iVar16 = *(int *)(unaff_EBP - 0x50);
        unaff_EBX[1] = (int)puVar7;
        goto LAB_004821f1;
      }
      *(undefined4 *)(unaff_EBP - 0x50) = 1;
    }
    iVar16 = unaff_EBX[7];
    iVar12 = unaff_EBX[8];
    if (iVar16 < iVar12) {
LAB_00482298:
      iVar12 = unaff_EBX[1];
      unaff_EBX[7] = unaff_EBX[7] + 1;
      *(undefined4 *)(iVar12 + 4 + iVar16 * 0x14) = *(undefined4 *)(unaff_EBP - 0x70);
      uVar19 = *(undefined4 *)(unaff_EBP - 0x78);
      *(undefined2 *)(iVar12 + iVar16 * 0x14) = 2;
      *(undefined1 *)(iVar12 + 3 + iVar16 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 8 + iVar16 * 0x14) = uVar19;
      *(undefined4 *)(iVar12 + 0xc + iVar16 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 0x10 + iVar16 * 0x14) = 0;
    }
    else {
      if (iVar12 == 0) {
        iVar12 = 0x33;
      }
      else {
        iVar12 = iVar12 * 2;
      }
      puVar7 = FUN_00494cf0(*unaff_EBX,(undefined4 *)unaff_EBX[1],iVar12 * 0x14);
      if (puVar7 != (undefined4 *)0x0) {
        iVar12 = *unaff_EBX;
        if (((iVar12 == 0) || (puVar7 < *(undefined4 **)(iVar12 + 0x104))) ||
           (*(undefined4 **)(iVar12 + 0x108) <= puVar7)) {
          uVar14 = (*DAT_00582af0._4_4_)(puVar7);
        }
        else {
          uVar14 = (uint)*(ushort *)(iVar12 + 0xe8);
        }
        unaff_EBX[8] = uVar14 / 0x14;
        unaff_EBX[1] = (int)puVar7;
        goto LAB_00482298;
      }
    }
    iVar16 = unaff_EBX[7];
    iVar12 = unaff_EBX[8];
    if (iVar16 < iVar12) {
LAB_00482336:
      iVar12 = unaff_EBX[1];
      unaff_EBX[7] = unaff_EBX[7] + 1;
      uVar19 = *(undefined4 *)(unaff_EBP - 0x3c);
      *(undefined2 *)(iVar12 + iVar16 * 0x14) = 4;
      *(undefined1 *)(iVar12 + 3 + iVar16 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 4 + iVar16 * 0x14) = uVar19;
      *(undefined4 *)(iVar12 + 8 + iVar16 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 0xc + iVar16 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 0x10 + iVar16 * 0x14) = 0;
    }
    else {
      if (iVar12 == 0) {
        iVar12 = 0x33;
      }
      else {
        iVar12 = iVar12 * 2;
      }
      puVar7 = FUN_00494cf0(*unaff_EBX,(undefined4 *)unaff_EBX[1],iVar12 * 0x14);
      if (puVar7 != (undefined4 *)0x0) {
        iVar12 = *unaff_EBX;
        if (((iVar12 == 0) || (puVar7 < *(undefined4 **)(iVar12 + 0x104))) ||
           (*(undefined4 **)(iVar12 + 0x108) <= puVar7)) {
          uVar14 = (*DAT_00582af0._4_4_)(puVar7);
        }
        else {
          uVar14 = (uint)*(ushort *)(iVar12 + 0xe8);
        }
        unaff_EBX[8] = uVar14 / 0x14;
        unaff_EBX[1] = (int)puVar7;
        goto LAB_00482336;
      }
    }
    iVar16 = unaff_EBX[7];
    iVar12 = unaff_EBX[8];
    if (iVar16 < iVar12) {
LAB_004823d5:
      iVar12 = unaff_EBX[1];
      unaff_EBX[7] = unaff_EBX[7] + 1;
      uVar19 = *(undefined4 *)(unaff_EBP - 0x50);
      *(undefined2 *)(iVar12 + iVar16 * 0x14) = 1;
      *(undefined1 *)(iVar12 + 3 + iVar16 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 4 + iVar16 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 8 + iVar16 * 0x14) = uVar19;
      *(undefined4 *)(iVar12 + 0xc + iVar16 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 0x10 + iVar16 * 0x14) = 0;
    }
    else {
      if (iVar12 == 0) {
        iVar12 = 0x33;
      }
      else {
        iVar12 = iVar12 * 2;
      }
      puVar7 = FUN_00494cf0(*unaff_EBX,(undefined4 *)unaff_EBX[1],iVar12 * 0x14);
      if (puVar7 != (undefined4 *)0x0) {
        iVar12 = *unaff_EBX;
        if (((iVar12 == 0) || (puVar7 < *(undefined4 **)(iVar12 + 0x104))) ||
           (*(undefined4 **)(iVar12 + 0x108) <= puVar7)) {
          uVar14 = (*DAT_00582af0._4_4_)(puVar7);
        }
        else {
          uVar14 = (uint)*(ushort *)(iVar12 + 0xe8);
        }
        unaff_EBX[8] = uVar14 / 0x14;
        unaff_EBX[1] = (int)puVar7;
        goto LAB_004823d5;
      }
    }
    iVar16 = *(int *)(unaff_EBP - 100);
    iVar12 = *(int *)(unaff_EBP - 0x28);
    *(double *)(iVar12 + 0x20) = *(double *)(iVar16 + 0x20) + *(double *)(iVar12 + 0x20);
  }
  if (*(int *)(unaff_EBP - 0x58) == 0x73) {
    dVar1 = *(double *)(iVar16 + 0x20);
    dVar2 = *(double *)(iVar12 + 0x20);
    *(undefined4 *)(unaff_EBP - 0x48) = *(undefined4 *)(unaff_EBP - 0x50);
    if (dVar1 < dVar2) {
      *(double *)(iVar12 + 0x20) = dVar1;
    }
  }
  else {
    iVar16 = unaff_EBX[7];
    iVar12 = unaff_EBX[8];
    *(int *)(unaff_EBP - 0x48) = iVar16;
    if (iVar16 < iVar12) {
LAB_00482577:
      iVar12 = unaff_EBX[1];
      unaff_EBX[7] = unaff_EBX[7] + 1;
      *(undefined4 *)(iVar12 + 4 + iVar16 * 0x14) = *(undefined4 *)(unaff_EBP - 0x6c);
      uVar19 = *(undefined4 *)(unaff_EBP - 0x5c);
      *(undefined2 *)(iVar12 + iVar16 * 0x14) = 0x1b;
      *(undefined1 *)(iVar12 + 3 + iVar16 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 8 + iVar16 * 0x14) = uVar19;
      *(undefined4 *)(iVar12 + 0xc + iVar16 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 0x10 + iVar16 * 0x14) = 0;
    }
    else {
      if (iVar12 == 0) {
        iVar12 = 0x33;
      }
      else {
        iVar12 = iVar12 * 2;
      }
      puVar7 = FUN_00494cf0(*unaff_EBX,(undefined4 *)unaff_EBX[1],iVar12 * 0x14);
      if (puVar7 != (undefined4 *)0x0) {
        iVar16 = *unaff_EBX;
        if (((iVar16 == 0) || (puVar7 < *(undefined4 **)(iVar16 + 0x104))) ||
           (*(undefined4 **)(iVar16 + 0x108) <= puVar7)) {
          uVar14 = (*DAT_00582af0._4_4_)(puVar7);
        }
        else {
          uVar14 = (uint)*(ushort *)(iVar16 + 0xe8);
        }
        unaff_EBX[8] = uVar14 / 0x14;
        iVar16 = *(int *)(unaff_EBP - 0x48);
        unaff_EBX[1] = (int)puVar7;
        goto LAB_00482577;
      }
      *(undefined4 *)(unaff_EBP - 0x48) = 1;
    }
    iVar16 = unaff_EBX[7];
    iVar12 = unaff_EBX[8];
    if (iVar16 < iVar12) {
LAB_0048261e:
      unaff_EBX[7] = unaff_EBX[7] + 1;
      iVar12 = unaff_EBX[1];
      *(int *)(iVar12 + 4 + iVar16 * 0x14) = *(int *)(unaff_EBP - 0x54) + 1;
      uVar19 = *(undefined4 *)(unaff_EBP - 0x30);
      *(undefined2 *)(iVar12 + iVar16 * 0x14) = 2;
      *(undefined1 *)(iVar12 + 3 + iVar16 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 8 + iVar16 * 0x14) = uVar19;
      *(undefined4 *)(iVar12 + 0xc + iVar16 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 0x10 + iVar16 * 0x14) = 0;
    }
    else {
      if (iVar12 == 0) {
        iVar12 = 0x33;
      }
      else {
        iVar12 = iVar12 * 2;
      }
      puVar7 = FUN_00494cf0(*unaff_EBX,(undefined4 *)unaff_EBX[1],iVar12 * 0x14);
      if (puVar7 != (undefined4 *)0x0) {
        iVar12 = *unaff_EBX;
        if (((iVar12 == 0) || (puVar7 < *(undefined4 **)(iVar12 + 0x104))) ||
           (*(undefined4 **)(iVar12 + 0x108) <= puVar7)) {
          uVar14 = (*DAT_00582af0._4_4_)(puVar7);
        }
        else {
          uVar14 = (uint)*(ushort *)(iVar12 + 0xe8);
        }
        unaff_EBX[8] = uVar14 / 0x14;
        unaff_EBX[1] = (int)puVar7;
        goto LAB_0048261e;
      }
    }
    iVar16 = unaff_EBX[7];
    iVar12 = unaff_EBX[8];
    if (iVar16 < iVar12) {
LAB_004826bd:
      iVar12 = unaff_EBX[1];
      unaff_EBX[7] = unaff_EBX[7] + 1;
      uVar19 = *(undefined4 *)(unaff_EBP - 0x4c);
      *(undefined2 *)(iVar12 + iVar16 * 0x14) = 4;
      *(undefined1 *)(iVar12 + 3 + iVar16 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 4 + iVar16 * 0x14) = uVar19;
      *(undefined4 *)(iVar12 + 8 + iVar16 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 0xc + iVar16 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 0x10 + iVar16 * 0x14) = 0;
    }
    else {
      if (iVar12 == 0) {
        iVar12 = 0x33;
      }
      else {
        iVar12 = iVar12 * 2;
      }
      puVar7 = FUN_00494cf0(*unaff_EBX,(undefined4 *)unaff_EBX[1],iVar12 * 0x14);
      if (puVar7 != (undefined4 *)0x0) {
        iVar12 = *unaff_EBX;
        if (((iVar12 == 0) || (puVar7 < *(undefined4 **)(iVar12 + 0x104))) ||
           (*(undefined4 **)(iVar12 + 0x108) <= puVar7)) {
          uVar14 = (*DAT_00582af0._4_4_)(puVar7);
        }
        else {
          uVar14 = (uint)*(ushort *)(iVar12 + 0xe8);
        }
        unaff_EBX[8] = uVar14 / 0x14;
        unaff_EBX[1] = (int)puVar7;
        goto LAB_004826bd;
      }
    }
    iVar16 = unaff_EBX[7];
    iVar12 = unaff_EBX[8];
    if (iVar12 <= iVar16) {
      if (iVar12 == 0) {
        iVar12 = 0x33;
      }
      else {
        iVar12 = iVar12 * 2;
      }
      puVar7 = FUN_00494cf0(*unaff_EBX,(undefined4 *)unaff_EBX[1],iVar12 * 0x14);
      if (puVar7 == (undefined4 *)0x0) goto LAB_0048278f;
      iVar12 = *unaff_EBX;
      if (((iVar12 == 0) || (puVar7 < *(undefined4 **)(iVar12 + 0x104))) ||
         (*(undefined4 **)(iVar12 + 0x108) <= puVar7)) {
        uVar14 = (*DAT_00582af0._4_4_)(puVar7);
      }
      else {
        uVar14 = (uint)*(ushort *)(iVar12 + 0xe8);
      }
      unaff_EBX[8] = uVar14 / 0x14;
      unaff_EBX[1] = (int)puVar7;
    }
    iVar12 = unaff_EBX[1];
    unaff_EBX[7] = unaff_EBX[7] + 1;
    uVar19 = *(undefined4 *)(unaff_EBP - 0x48);
    *(undefined2 *)(iVar12 + iVar16 * 0x14) = 1;
    *(undefined1 *)(iVar12 + 3 + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 4 + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 8 + iVar16 * 0x14) = uVar19;
    *(undefined4 *)(iVar12 + 0xc + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 0x10 + iVar16 * 0x14) = 0;
  }
LAB_0048278f:
  iVar16 = unaff_EBX[7];
  iVar12 = unaff_EBX[8];
  *(int *)(unaff_EBP - 0x40) = iVar16;
  if (iVar16 < iVar12) {
LAB_00482805:
    unaff_EBX[7] = unaff_EBX[7] + 1;
    iVar12 = unaff_EBX[1];
    *(int *)(iVar12 + 4 + iVar16 * 0x14) = *(int *)(unaff_EBP - 0x54) + 1;
    uVar19 = *(undefined4 *)(unaff_EBP - 0x30);
    *(undefined2 *)(iVar12 + iVar16 * 0x14) = 2;
    *(undefined1 *)(iVar12 + 3 + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 8 + iVar16 * 0x14) = uVar19;
    *(undefined4 *)(iVar12 + 0xc + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 0x10 + iVar16 * 0x14) = 0;
  }
  else {
    if (iVar12 == 0) {
      iVar12 = 0x33;
    }
    else {
      iVar12 = iVar12 * 2;
    }
    puVar7 = FUN_00494cf0(*unaff_EBX,(undefined4 *)unaff_EBX[1],iVar12 * 0x14);
    if (puVar7 != (undefined4 *)0x0) {
      iVar16 = *unaff_EBX;
      if (((iVar16 == 0) || (puVar7 < *(undefined4 **)(iVar16 + 0x104))) ||
         (*(undefined4 **)(iVar16 + 0x108) <= puVar7)) {
        uVar14 = (*DAT_00582af0._4_4_)(puVar7);
      }
      else {
        uVar14 = (uint)*(ushort *)(iVar16 + 0xe8);
      }
      unaff_EBX[1] = (int)puVar7;
      iVar16 = *(int *)(unaff_EBP - 0x40);
      unaff_EBX[8] = uVar14 / 0x14;
      goto LAB_00482805;
    }
    *(undefined4 *)(unaff_EBP - 0x40) = 1;
  }
  iVar16 = unaff_EBX[7];
  iVar12 = unaff_EBX[8];
  if (iVar16 < iVar12) {
LAB_004828ad:
    iVar12 = unaff_EBX[1];
    unaff_EBX[7] = unaff_EBX[7] + 1;
    uVar19 = *(undefined4 *)(unaff_EBP - 0x4c);
    *(undefined2 *)(iVar12 + iVar16 * 0x14) = 4;
    *(undefined1 *)(iVar12 + 3 + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 4 + iVar16 * 0x14) = uVar19;
    *(undefined4 *)(iVar12 + 8 + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 0xc + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 0x10 + iVar16 * 0x14) = 0;
  }
  else {
    if (iVar12 == 0) {
      iVar12 = 0x33;
    }
    else {
      iVar12 = iVar12 * 2;
    }
    puVar7 = FUN_00494cf0(*unaff_EBX,(undefined4 *)unaff_EBX[1],iVar12 * 0x14);
    if (puVar7 != (undefined4 *)0x0) {
      iVar12 = *unaff_EBX;
      if (((iVar12 == 0) || (puVar7 < *(undefined4 **)(iVar12 + 0x104))) ||
         (*(undefined4 **)(iVar12 + 0x108) <= puVar7)) {
        uVar14 = (*DAT_00582af0._4_4_)(puVar7);
      }
      else {
        uVar14 = (uint)*(ushort *)(iVar12 + 0xe8);
      }
      unaff_EBX[8] = uVar14 / 0x14;
      unaff_EBX[1] = (int)puVar7;
      goto LAB_004828ad;
    }
  }
  iVar16 = unaff_EBX[7];
  iVar12 = unaff_EBX[8];
  if (iVar16 < iVar12) {
LAB_0048294c:
    iVar12 = unaff_EBX[1];
    unaff_EBX[7] = unaff_EBX[7] + 1;
    *(undefined4 *)(iVar12 + 4 + iVar16 * 0x14) = *(undefined4 *)(unaff_EBP - 0x6c);
    uVar19 = *(undefined4 *)(unaff_EBP - 0x50);
    *(undefined2 *)(iVar12 + iVar16 * 0x14) = 0x1b;
    *(undefined1 *)(iVar12 + 3 + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 8 + iVar16 * 0x14) = uVar19;
    *(undefined4 *)(iVar12 + 0xc + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 0x10 + iVar16 * 0x14) = 0;
  }
  else {
    if (iVar12 == 0) {
      iVar12 = 0x33;
    }
    else {
      iVar12 = iVar12 * 2;
    }
    puVar7 = FUN_00494cf0(*unaff_EBX,(undefined4 *)unaff_EBX[1],iVar12 * 0x14);
    if (puVar7 != (undefined4 *)0x0) {
      iVar12 = *unaff_EBX;
      if (((iVar12 == 0) || (puVar7 < *(undefined4 **)(iVar12 + 0x104))) ||
         (*(undefined4 **)(iVar12 + 0x108) <= puVar7)) {
        uVar14 = (*DAT_00582af0._4_4_)(puVar7);
      }
      else {
        uVar14 = (uint)*(ushort *)(iVar12 + 0xe8);
      }
      unaff_EBX[8] = uVar14 / 0x14;
      unaff_EBX[1] = (int)puVar7;
      goto LAB_0048294c;
    }
  }
  iVar16 = unaff_EBX[7];
  iVar12 = unaff_EBX[8];
  if (iVar16 < iVar12) {
LAB_004829ea:
    iVar12 = unaff_EBX[1];
    unaff_EBX[7] = unaff_EBX[7] + 1;
    uVar19 = *(undefined4 *)(unaff_EBP - 0x74);
    *(undefined2 *)(iVar12 + iVar16 * 0x14) = 1;
    *(undefined1 *)(iVar12 + 3 + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 4 + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 8 + iVar16 * 0x14) = uVar19;
    *(undefined4 *)(iVar12 + 0xc + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 0x10 + iVar16 * 0x14) = 0;
  }
  else {
    if (iVar12 == 0) {
      iVar12 = 0x33;
    }
    else {
      iVar12 = iVar12 * 2;
    }
    puVar7 = FUN_00494cf0(*unaff_EBX,(undefined4 *)unaff_EBX[1],iVar12 * 0x14);
    if (puVar7 != (undefined4 *)0x0) {
      iVar12 = *unaff_EBX;
      if (((iVar12 == 0) || (puVar7 < *(undefined4 **)(iVar12 + 0x104))) ||
         (*(undefined4 **)(iVar12 + 0x108) <= puVar7)) {
        uVar14 = (*DAT_00582af0._4_4_)(puVar7);
      }
      else {
        uVar14 = (uint)*(ushort *)(iVar12 + 0xe8);
      }
      unaff_EBX[8] = uVar14 / 0x14;
      unaff_EBX[1] = (int)puVar7;
      goto LAB_004829ea;
    }
  }
  if (*(int *)(unaff_EBP - 0x58) == 0x71) {
    *(undefined4 *)(unaff_EBP - 0x30) = *(undefined4 *)(unaff_EBP - 0x40);
  }
  else if (*(int *)(unaff_EBP - 0x58) == 0x73) {
    iVar16 = *(int *)(unaff_EBP - 0x40);
    *(int *)(unaff_EBP - 0x30) = iVar16;
    *(int *)(unaff_EBP - 0x40) = iVar16 + 1;
  }
  else {
    iVar16 = unaff_EBX[7];
    iVar12 = unaff_EBX[8];
    *(int *)(unaff_EBP - 0x30) = iVar16;
    if (iVar16 < iVar12) {
LAB_00482aba:
      iVar12 = unaff_EBX[1];
      unaff_EBX[7] = unaff_EBX[7] + 1;
      uVar19 = *(undefined4 *)(unaff_EBP - 0x4c);
      *(undefined2 *)(iVar12 + iVar16 * 0x14) = 4;
      *(undefined1 *)(iVar12 + 3 + iVar16 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 4 + iVar16 * 0x14) = uVar19;
      *(undefined4 *)(iVar12 + 8 + iVar16 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 0xc + iVar16 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 0x10 + iVar16 * 0x14) = 0;
    }
    else {
      if (iVar12 == 0) {
        iVar12 = 0x33;
      }
      else {
        iVar12 = iVar12 * 2;
      }
      puVar7 = FUN_00494cf0(*unaff_EBX,(undefined4 *)unaff_EBX[1],iVar12 * 0x14);
      if (puVar7 != (undefined4 *)0x0) {
        iVar16 = *unaff_EBX;
        if (((iVar16 == 0) || (puVar7 < *(undefined4 **)(iVar16 + 0x104))) ||
           (*(undefined4 **)(iVar16 + 0x108) <= puVar7)) {
          uVar14 = (*DAT_00582af0._4_4_)(puVar7);
        }
        else {
          uVar14 = (uint)*(ushort *)(iVar16 + 0xe8);
        }
        unaff_EBX[8] = uVar14 / 0x14;
        iVar16 = *(int *)(unaff_EBP - 0x30);
        unaff_EBX[1] = (int)puVar7;
        goto LAB_00482aba;
      }
      *(undefined4 *)(unaff_EBP - 0x30) = 1;
    }
    iVar16 = unaff_EBX[7];
    iVar12 = unaff_EBX[8];
    if (iVar16 < iVar12) {
LAB_00482b62:
      iVar12 = unaff_EBX[1];
      unaff_EBX[7] = unaff_EBX[7] + 1;
      *(undefined4 *)(iVar12 + 4 + iVar16 * 0x14) = *(undefined4 *)(unaff_EBP - 0x6c);
      uVar19 = *(undefined4 *)(unaff_EBP - 0x50);
      *(undefined2 *)(iVar12 + iVar16 * 0x14) = 0x1b;
      *(undefined1 *)(iVar12 + 3 + iVar16 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 8 + iVar16 * 0x14) = uVar19;
      *(undefined4 *)(iVar12 + 0xc + iVar16 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 0x10 + iVar16 * 0x14) = 0;
    }
    else {
      if (iVar12 == 0) {
        iVar12 = 0x33;
      }
      else {
        iVar12 = iVar12 * 2;
      }
      puVar7 = FUN_00494cf0(*unaff_EBX,(undefined4 *)unaff_EBX[1],iVar12 * 0x14);
      if (puVar7 != (undefined4 *)0x0) {
        iVar12 = *unaff_EBX;
        if (((iVar12 == 0) || (puVar7 < *(undefined4 **)(iVar12 + 0x104))) ||
           (*(undefined4 **)(iVar12 + 0x108) <= puVar7)) {
          uVar14 = (*DAT_00582af0._4_4_)(puVar7);
        }
        else {
          uVar14 = (uint)*(ushort *)(iVar12 + 0xe8);
        }
        unaff_EBX[8] = uVar14 / 0x14;
        unaff_EBX[1] = (int)puVar7;
        goto LAB_00482b62;
      }
    }
    iVar16 = unaff_EBX[7];
    iVar12 = unaff_EBX[8];
    if (iVar12 <= iVar16) {
      if (iVar12 == 0) {
        iVar12 = 0x33;
      }
      else {
        iVar12 = iVar12 * 2;
      }
      puVar7 = FUN_00494cf0(*unaff_EBX,(undefined4 *)unaff_EBX[1],iVar12 * 0x14);
      if (puVar7 == (undefined4 *)0x0) goto LAB_00482c33;
      iVar12 = *unaff_EBX;
      if (((iVar12 == 0) || (puVar7 < *(undefined4 **)(iVar12 + 0x104))) ||
         (*(undefined4 **)(iVar12 + 0x108) <= puVar7)) {
        uVar14 = (*DAT_00582af0._4_4_)(puVar7);
      }
      else {
        uVar14 = (uint)*(ushort *)(iVar12 + 0xe8);
      }
      unaff_EBX[8] = uVar14 / 0x14;
      unaff_EBX[1] = (int)puVar7;
    }
    iVar12 = unaff_EBX[1];
    unaff_EBX[7] = unaff_EBX[7] + 1;
    uVar19 = *(undefined4 *)(unaff_EBP - 0x74);
    *(undefined2 *)(iVar12 + iVar16 * 0x14) = 1;
    *(undefined1 *)(iVar12 + 3 + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 4 + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 8 + iVar16 * 0x14) = uVar19;
    *(undefined4 *)(iVar12 + 0xc + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 0x10 + iVar16 * 0x14) = 0;
  }
LAB_00482c33:
  iVar16 = *(int *)(unaff_EBP - 0x58);
  iVar12 = unaff_EBX[7];
  *(int *)(unaff_EBP - 0x8c) = iVar12;
  if ((iVar16 == 0x71) || (iVar16 == 0x70)) {
    iVar16 = unaff_EBX[8];
    if (iVar16 <= iVar12) {
      if (iVar16 == 0) {
        iVar16 = 0x33;
      }
      else {
        iVar16 = iVar16 * 2;
      }
      puVar7 = FUN_00494cf0(*unaff_EBX,(undefined4 *)unaff_EBX[1],iVar16 * 0x14);
      if (puVar7 == (undefined4 *)0x0) goto LAB_00482ce8;
      iVar16 = *unaff_EBX;
      if (((iVar16 == 0) || (puVar7 < *(undefined4 **)(iVar16 + 0x104))) ||
         (*(undefined4 **)(iVar16 + 0x108) <= puVar7)) {
        uVar14 = (*DAT_00582af0._4_4_)(puVar7);
      }
      else {
        uVar14 = (uint)*(ushort *)(iVar16 + 0xe8);
      }
      unaff_EBX[8] = uVar14 / 0x14;
      unaff_EBX[1] = (int)puVar7;
    }
    iVar16 = unaff_EBX[1];
    unaff_EBX[7] = unaff_EBX[7] + 1;
    *(undefined4 *)(iVar16 + 4 + iVar12 * 0x14) = *(undefined4 *)(unaff_EBP - 0x70);
    uVar19 = *(undefined4 *)(unaff_EBP - 0x78);
    *(undefined2 *)(iVar16 + iVar12 * 0x14) = 2;
    *(undefined1 *)(iVar16 + 3 + iVar12 * 0x14) = 0;
    *(undefined4 *)(iVar16 + 8 + iVar12 * 0x14) = uVar19;
    *(undefined4 *)(iVar16 + 0xc + iVar12 * 0x14) = 0;
    *(undefined4 *)(iVar16 + 0x10 + iVar12 * 0x14) = 0;
  }
LAB_00482ce8:
  iVar16 = unaff_EBX[7];
  iVar12 = unaff_EBX[8];
  if (iVar16 < iVar12) {
LAB_00482d54:
    iVar12 = unaff_EBX[1];
    unaff_EBX[7] = unaff_EBX[7] + 1;
    uVar19 = *(undefined4 *)(unaff_EBP - 0x3c);
    *(undefined2 *)(iVar12 + iVar16 * 0x14) = 4;
    *(undefined1 *)(iVar12 + 3 + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 4 + iVar16 * 0x14) = uVar19;
    *(undefined4 *)(iVar12 + 8 + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 0xc + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 0x10 + iVar16 * 0x14) = 0;
  }
  else {
    if (iVar12 == 0) {
      iVar12 = 0x33;
    }
    else {
      iVar12 = iVar12 * 2;
    }
    puVar7 = FUN_00494cf0(*unaff_EBX,(undefined4 *)unaff_EBX[1],iVar12 * 0x14);
    if (puVar7 != (undefined4 *)0x0) {
      iVar12 = *unaff_EBX;
      if (((iVar12 == 0) || (puVar7 < *(undefined4 **)(iVar12 + 0x104))) ||
         (*(undefined4 **)(iVar12 + 0x108) <= puVar7)) {
        uVar14 = (*DAT_00582af0._4_4_)(puVar7);
      }
      else {
        uVar14 = (uint)*(ushort *)(iVar12 + 0xe8);
      }
      unaff_EBX[8] = uVar14 / 0x14;
      unaff_EBX[1] = (int)puVar7;
      goto LAB_00482d54;
    }
  }
  iVar16 = unaff_EBX[7];
  iVar12 = unaff_EBX[8];
  if (iVar16 < iVar12) {
LAB_00482df3:
    iVar12 = unaff_EBX[1];
    unaff_EBX[7] = unaff_EBX[7] + 1;
    *(undefined4 *)(iVar12 + 4 + iVar16 * 0x14) = *(undefined4 *)(unaff_EBP - 0x54);
    uVar19 = *(undefined4 *)(unaff_EBP - 0x48);
    *(undefined2 *)(iVar12 + iVar16 * 0x14) = 0x1b;
    *(undefined1 *)(iVar12 + 3 + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 8 + iVar16 * 0x14) = uVar19;
    *(undefined4 *)(iVar12 + 0xc + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 0x10 + iVar16 * 0x14) = 0;
  }
  else {
    if (iVar12 == 0) {
      iVar12 = 0x33;
    }
    else {
      iVar12 = iVar12 * 2;
    }
    puVar7 = FUN_00494cf0(*unaff_EBX,(undefined4 *)unaff_EBX[1],iVar12 * 0x14);
    if (puVar7 != (undefined4 *)0x0) {
      iVar12 = *unaff_EBX;
      if (((iVar12 == 0) || (puVar7 < *(undefined4 **)(iVar12 + 0x104))) ||
         (*(undefined4 **)(iVar12 + 0x108) <= puVar7)) {
        uVar14 = (*DAT_00582af0._4_4_)(puVar7);
      }
      else {
        uVar14 = (uint)*(ushort *)(iVar12 + 0xe8);
      }
      unaff_EBX[8] = uVar14 / 0x14;
      unaff_EBX[1] = (int)puVar7;
      goto LAB_00482df3;
    }
  }
  iVar16 = unaff_EBX[7];
  iVar12 = unaff_EBX[8];
  if (iVar16 < iVar12) {
LAB_00482e91:
    iVar12 = unaff_EBX[1];
    unaff_EBX[7] = unaff_EBX[7] + 1;
    uVar19 = *(undefined4 *)(unaff_EBP - 0x74);
    *(undefined2 *)(iVar12 + iVar16 * 0x14) = 1;
    *(undefined1 *)(iVar12 + 3 + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 4 + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 8 + iVar16 * 0x14) = uVar19;
    *(undefined4 *)(iVar12 + 0xc + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 0x10 + iVar16 * 0x14) = 0;
  }
  else {
    if (iVar12 == 0) {
      iVar12 = 0x33;
    }
    else {
      iVar12 = iVar12 * 2;
    }
    puVar7 = FUN_00494cf0(*unaff_EBX,(undefined4 *)unaff_EBX[1],iVar12 * 0x14);
    if (puVar7 != (undefined4 *)0x0) {
      iVar12 = *unaff_EBX;
      if (((iVar12 == 0) || (puVar7 < *(undefined4 **)(iVar12 + 0x104))) ||
         (*(undefined4 **)(iVar12 + 0x108) <= puVar7)) {
        uVar14 = (*DAT_00582af0._4_4_)(puVar7);
      }
      else {
        uVar14 = (uint)*(ushort *)(iVar12 + 0xe8);
      }
      unaff_EBX[8] = uVar14 / 0x14;
      unaff_EBX[1] = (int)puVar7;
      goto LAB_00482e91;
    }
  }
  uVar14 = *(uint *)(unaff_EBP - 0x34);
  if ((-1 < (int)uVar14) && (uVar14 < (uint)unaff_EBX[7])) {
    *(int *)(unaff_EBX[1] + 8 + uVar14 * 0x14) = unaff_EBX[7];
  }
  iVar16 = unaff_EBX[7];
  iVar12 = unaff_EBX[8];
  if (iVar16 < iVar12) {
LAB_00482f48:
    iVar12 = unaff_EBX[1];
    unaff_EBX[7] = unaff_EBX[7] + 1;
    uVar19 = *(undefined4 *)(unaff_EBP - 0x6c);
    *(undefined2 *)(iVar12 + iVar16 * 0x14) = 7;
    *(undefined1 *)(iVar12 + 3 + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 4 + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 8 + iVar16 * 0x14) = uVar19;
    *(undefined4 *)(iVar12 + 0xc + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 0x10 + iVar16 * 0x14) = 0;
  }
  else {
    if (iVar12 == 0) {
      iVar12 = 0x33;
    }
    else {
      iVar12 = iVar12 * 2;
    }
    puVar7 = FUN_00494cf0(*unaff_EBX,(undefined4 *)unaff_EBX[1],iVar12 * 0x14);
    if (puVar7 != (undefined4 *)0x0) {
      iVar12 = *unaff_EBX;
      if (((iVar12 == 0) || (puVar7 < *(undefined4 **)(iVar12 + 0x104))) ||
         (*(undefined4 **)(iVar12 + 0x108) <= puVar7)) {
        uVar14 = (*DAT_00582af0._4_4_)(puVar7);
      }
      else {
        uVar14 = (uint)*(ushort *)(iVar12 + 0xe8);
      }
      unaff_EBX[8] = uVar14 / 0x14;
      unaff_EBX[1] = (int)puVar7;
      goto LAB_00482f48;
    }
  }
  iVar16 = unaff_EBX[7];
  iVar12 = unaff_EBX[8];
  if (iVar12 <= iVar16) {
    if (iVar12 == 0) {
      iVar12 = 0x33;
    }
    else {
      iVar12 = iVar12 * 2;
    }
    puVar7 = FUN_00494cf0(*unaff_EBX,(undefined4 *)unaff_EBX[1],iVar12 * 0x14);
    if (puVar7 == (undefined4 *)0x0) {
      uVar19 = *(undefined4 *)(unaff_EBP - 0x54);
      goto LAB_0048301f;
    }
    iVar12 = *unaff_EBX;
    if (((iVar12 == 0) || (puVar7 < *(undefined4 **)(iVar12 + 0x104))) ||
       (*(undefined4 **)(iVar12 + 0x108) <= puVar7)) {
      uVar14 = (*DAT_00582af0._4_4_)(puVar7);
    }
    else {
      uVar14 = (uint)*(ushort *)(iVar12 + 0xe8);
    }
    unaff_EBX[8] = uVar14 / 0x14;
    unaff_EBX[1] = (int)puVar7;
  }
  iVar12 = unaff_EBX[1];
  unaff_EBX[7] = unaff_EBX[7] + 1;
  uVar19 = *(undefined4 *)(unaff_EBP - 0x54);
  *(undefined2 *)(iVar12 + iVar16 * 0x14) = 7;
  *(undefined1 *)(iVar12 + 3 + iVar16 * 0x14) = 0;
  *(undefined4 *)(iVar12 + 4 + iVar16 * 0x14) = 0;
  *(undefined4 *)(iVar12 + 8 + iVar16 * 0x14) = uVar19;
  *(undefined4 *)(iVar12 + 0xc + iVar16 * 0x14) = 0;
  *(undefined4 *)(iVar12 + 0x10 + iVar16 * 0x14) = 0;
LAB_0048301f:
  iVar16 = unaff_EBX[7];
  if ((iVar16 < unaff_EBX[8]) || (iVar12 = FUN_0047de10(unaff_EBX), iVar12 == 0)) {
    iVar12 = unaff_EBX[1];
    unaff_EBX[7] = unaff_EBX[7] + 1;
    *(undefined4 *)(iVar12 + 4 + iVar16 * 0x14) = *(undefined4 *)(unaff_EBP - 0x4c);
    uVar6 = *(undefined4 *)(unaff_EBP - 0x90);
    *(undefined2 *)(iVar12 + iVar16 * 0x14) = 2;
    *(undefined1 *)(iVar12 + 3 + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 8 + iVar16 * 0x14) = uVar6;
    *(undefined4 *)(iVar12 + 0xc + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 0x10 + iVar16 * 0x14) = 0;
  }
  iVar16 = unaff_EBX[7];
  if ((iVar16 < unaff_EBX[8]) || (iVar12 = FUN_0047de10(unaff_EBX), iVar12 == 0)) {
    iVar12 = unaff_EBX[1];
    unaff_EBX[7] = unaff_EBX[7] + 1;
    *(undefined4 *)(iVar12 + 4 + iVar16 * 0x14) = *(undefined4 *)(unaff_EBP - 0x3c);
    uVar6 = *(undefined4 *)(unaff_EBP - 0x94);
    *(undefined2 *)(iVar12 + iVar16 * 0x14) = 2;
    *(undefined1 *)(iVar12 + 3 + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 8 + iVar16 * 0x14) = uVar6;
    *(undefined4 *)(iVar12 + 0xc + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 0x10 + iVar16 * 0x14) = 0;
  }
  iVar16 = unaff_EBX[7];
  if ((iVar16 < unaff_EBX[8]) || (iVar12 = FUN_0047de10(unaff_EBX), iVar12 == 0)) {
    iVar12 = unaff_EBX[1];
    unaff_EBX[7] = unaff_EBX[7] + 1;
    *(undefined4 *)(iVar12 + 4 + iVar16 * 0x14) = *(undefined4 *)(unaff_EBP - 0x6c);
    uVar6 = *(undefined4 *)(unaff_EBP - 0x50);
    *(undefined2 *)(iVar12 + iVar16 * 0x14) = 0x1b;
    *(undefined1 *)(iVar12 + 3 + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 8 + iVar16 * 0x14) = uVar6;
    *(undefined4 *)(iVar12 + 0xc + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 0x10 + iVar16 * 0x14) = 0;
  }
  iVar16 = unaff_EBX[7];
  if ((iVar16 < unaff_EBX[8]) || (iVar12 = FUN_0047de10(unaff_EBX), iVar12 == 0)) {
    iVar12 = unaff_EBX[1];
    unaff_EBX[7] = unaff_EBX[7] + 1;
    uVar6 = *(undefined4 *)(unaff_EBP - 0x48);
    *(undefined2 *)(iVar12 + iVar16 * 0x14) = 0x1b;
    *(undefined1 *)(iVar12 + 3 + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 4 + iVar16 * 0x14) = uVar19;
    *(undefined4 *)(iVar12 + 8 + iVar16 * 0x14) = uVar6;
    *(undefined4 *)(iVar12 + 0xc + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 0x10 + iVar16 * 0x14) = 0;
  }
  if (unaff_EBX[10] != 0) {
    *(int *)(unaff_EBX[10] - (*(int *)(unaff_EBP - 0x74) * 4 + 4)) = unaff_EBX[7];
  }
  iVar16 = unaff_EBX[7];
  if ((iVar16 < unaff_EBX[8]) || (iVar12 = FUN_0047de10(unaff_EBX), iVar12 == 0)) {
    iVar12 = unaff_EBX[1];
    unaff_EBX[7] = unaff_EBX[7] + 1;
    *(undefined2 *)(iVar12 + iVar16 * 0x14) = 0x17;
    *(undefined1 *)(iVar12 + 3 + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 4 + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 8 + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 0xc + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 0x10 + iVar16 * 0x14) = 0;
  }
  else {
    iVar16 = 1;
  }
  FUN_004aecc0(unaff_EBX,iVar16,*(int **)(unaff_EBP - 0x80),0xfffffff1);
  iVar16 = *(int *)(unaff_EBP - 0x44);
  FUN_004ae8f0(unaff_EBX,0x18,*(undefined4 *)(unaff_EBP - 0xc),*(undefined4 *)(unaff_EBP - 0x1c),
               iVar16,*(int **)(unaff_EBP - 0x68),0xfffffff0);
  if (unaff_EBX[1] != 0) {
    *(undefined1 *)(unaff_EBX[1] + -0x11 + unaff_EBX[7] * 0x14) = 1;
  }
  iVar12 = unaff_EBX[7];
  if ((iVar12 < unaff_EBX[8]) || (iVar11 = FUN_0047de10(unaff_EBX), iVar11 == 0)) {
    iVar11 = unaff_EBX[1];
    unaff_EBX[7] = unaff_EBX[7] + 1;
    *(undefined4 *)(iVar11 + 4 + iVar12 * 0x14) = *(undefined4 *)(unaff_EBP - 0x40);
    *(undefined4 *)(iVar11 + 8 + iVar12 * 0x14) = *(undefined4 *)(unaff_EBP - 0x30);
    uVar19 = *(undefined4 *)(unaff_EBP - 0x8c);
    *(undefined2 *)(iVar11 + iVar12 * 0x14) = 0x19;
    *(undefined1 *)(iVar11 + 3 + iVar12 * 0x14) = 0;
    *(undefined4 *)(iVar11 + 0xc + iVar12 * 0x14) = uVar19;
    *(undefined4 *)(iVar11 + 0x10 + iVar12 * 0x14) = 0;
  }
  if (*(int *)(unaff_EBP - 0x60) == 0) {
    piVar18 = *(int **)(unaff_EBP - 0x2c);
  }
  else {
    iVar16 = iVar16 + 1;
    piVar18 = *(int **)(unaff_EBP - 0x2c);
    FUN_00496d90((int)piVar18,*(int *)(unaff_EBP - 0x60),iVar16);
    if (piVar18[0xf] < iVar16) {
      iVar12 = *(int *)(unaff_EBP - 0x60);
      piVar18[0xf] = iVar16;
      piVar18[0x10] = iVar12;
    }
  }
  if (unaff_EBX[10] != 0) {
    *(int *)(unaff_EBX[10] - (*(int *)(unaff_EBP - 0x5c) * 4 + 4)) = unaff_EBX[7];
  }
  if (**(char **)(unaff_EBP - 0x7c) == '\x05') {
    puVar7 = *(undefined4 **)(unaff_EBP - 100);
    for (puVar8 = (undefined4 *)(*(undefined4 **)(unaff_EBP - 100))[0xf];
        puVar8 != (undefined4 *)0x0; puVar8 = (undefined4 *)puVar8[0xf]) {
      puVar7 = puVar8;
    }
    FUN_0047c420(piVar18,(short *)0x0,(int *)*puVar7);
  }
  iVar16 = *(int *)(unaff_EBP - 0x28);
  puVar7 = *(undefined4 **)(iVar16 + 0x3c);
  if (puVar7 != (undefined4 *)0x0) {
    FUN_00472d10(*(int *)(unaff_EBP - 0x38),puVar7);
    FUN_00494b00(*(int *)(unaff_EBP - 0x38),puVar7);
  }
  *(undefined4 *)(iVar16 + 0x3c) = *(undefined4 *)(unaff_EBP - 100);
  FUN_004775b0(piVar18);
  uStack00000008 = 0x4832e6;
  __security_check_cookie(*(uint *)(unaff_EBP - 4) ^ unaff_EBP);
  return;
}


/* FUN_00483460 @ 00483460  kind=gamemisc  attributed-by=none  size=45 */

int __cdecl FUN_00483460(undefined4 param_1,int param_2,byte *param_3,int param_4,byte *param_5)

{
  int iVar1;
  
  iVar1 = param_4;
  if (param_2 < param_4) {
    iVar1 = param_2;
  }
  iVar1 = FUN_00468380(param_3,param_5,iVar1);
  if (iVar1 == 0) {
    iVar1 = param_2 - param_4;
  }
  return iVar1;
}


/* FUN_004834d0 @ 004834d0  kind=gamemisc  attributed-by=none  size=1140 */

uint __cdecl FUN_004834d0(int *param_1,undefined4 *param_2,uint param_3,byte *param_4)

{
  uint uVar1;
  int *_Dst;
  int iVar2;
  int *piVar3;
  int iVar4;
  byte *pbVar5;
  void *pvVar6;
  uint uVar7;
  int local_c;
  byte *local_8;
  
  local_8 = (byte *)0x0;
  local_c = 0;
  *param_2 = 0;
  uVar1 = FUN_004bc920();
  if (uVar1 != 0) {
    return uVar1;
  }
  if ((1 << ((byte)param_3 & 7) & 0x46U) == 0) {
    FUN_004683f0(0x15,"misuse at line %d of [%.10s]");
    return 0x15;
  }
  if (DAT_00582acc == 0) {
    iVar2 = 0;
  }
  else if ((param_3 & 0x8000) == 0) {
    iVar2 = DAT_00582ad0;
    if ((param_3 & 0x10000) != 0) {
      iVar2 = 1;
    }
  }
  else {
    iVar2 = 0;
  }
  if ((param_3 & 0x40000) == 0) {
    if (DAT_00582b8c != 0) {
      param_3 = param_3 | 0x20000;
    }
  }
  else {
    param_3 = param_3 & 0xfffdffff;
  }
  uVar1 = param_3 & 0xfff600e7;
  param_3 = uVar1;
  _Dst = (int *)FUN_004a0350(0x1f8);
  pbVar5 = local_8;
  if ((_Dst != (int *)0x0) && (memset(_Dst,0,0x1f8), pbVar5 = local_8, _Dst != (int *)0x0)) {
    if (iVar2 != 0) {
      if (DAT_00582acc == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (*DAT_00582b10)(1);
      }
      _Dst[3] = iVar2;
      if (iVar2 == 0) {
        FUN_00466dd0((int)_Dst);
        _Dst = (int *)0x0;
        pbVar5 = local_8;
        goto LAB_004835dd;
      }
    }
    if (_Dst[3] != 0) {
      (*DAT_00582b18)(_Dst[3]);
    }
    _Dst[0xc] = 0xff;
    _Dst[5] = 2;
    _Dst[0x11] = -0xfc486fa;
    _Dst[4] = (int)(_Dst + 0x6e);
    _Dst[0x14] = 1000000000;
    _Dst[0x15] = 1000000000;
    _Dst[0x16] = 2000;
    _Dst[0x17] = 1000;
    _Dst[0x18] = 500;
    _Dst[0x19] = 25000;
    _Dst[0x1a] = 0x7f;
    _Dst[0x1b] = 10;
    _Dst[0x1c] = 50000;
    _Dst[0x1d] = 999;
    _Dst[6] = _Dst[6] | 0x480008;
    _Dst[0x1e] = 1000;
    *(undefined1 *)((int)_Dst + 0x36) = 1;
    *(undefined1 *)((int)_Dst + 0x3a) = 0xff;
    _Dst[0x10] = 0;
    _Dst[0x69] = 0;
    _Dst[0x68] = 0;
    _Dst[0x67] = 0;
    _Dst[0x6a] = 0;
    _Dst[0x4b] = 0;
    _Dst[0x4a] = 0;
    _Dst[0x49] = 0;
    _Dst[0x4c] = 0;
    FUN_004762d0((int)_Dst,(byte *)"BINARY",1,0,0x4708e0,0);
    FUN_004762d0((int)_Dst,(byte *)"BINARY",3,0,0x4708e0,0);
    FUN_004762d0((int)_Dst,(byte *)"BINARY",2,0,0x4708e0,0);
    FUN_004762d0((int)_Dst,(byte *)"RTRIM",1,1,0x4708e0,0);
    pbVar5 = local_8;
    if ((char)_Dst[0xe] == '\0') {
      piVar3 = FUN_00499500((int)_Dst,1,(byte *)"BINARY",0);
      _Dst[2] = (int)piVar3;
      FUN_004762d0((int)_Dst,(byte *)"NOCASE",1,0,0x483460,0);
      _Dst[10] = uVar1;
      iVar4 = FUN_004a2e90(param_4,param_1,&param_3,_Dst,&local_8,&local_c);
      pbVar5 = local_8;
      iVar2 = local_c;
      if (iVar4 == 0) {
        iVar2 = FUN_00490e00((undefined *)*_Dst,local_8,(int)_Dst,(undefined4 *)(_Dst[4] + 4),0,
                             param_3 | 0x100);
        if (iVar2 == 0) {
          pvVar6 = FUN_004a7a80((int)_Dst,*(undefined4 **)(_Dst[4] + 4));
          *(void **)(_Dst[4] + 0xc) = pvVar6;
          pvVar6 = FUN_004a7a80((int)_Dst,(undefined4 *)0x0);
          *(void **)(_Dst[4] + 0x1c) = pvVar6;
          *(undefined **)_Dst[4] = &DAT_0057151c;
          *(undefined1 *)(_Dst[4] + 9) = 3;
          *(undefined1 **)(_Dst[4] + 0x10) = &DAT_00571350;
          *(undefined1 *)(_Dst[4] + 0x19) = 1;
          _Dst[0x11] = -0x5fd65969;
          if ((char)_Dst[0xe] == '\0') {
            FUN_004961f0((int)_Dst,0,(byte *)0x0);
            uVar1 = FUN_00464130((int)_Dst,(byte *)"MATCH",2);
            if (uVar1 == 7) {
              *(undefined1 *)(_Dst + 0xe) = 1;
            }
            uVar1 = FUN_00468670((int)_Dst);
            if (uVar1 == 0) {
              FUN_0048d6f0((int)_Dst);
              uVar7 = FUN_00468670((int)_Dst);
              uVar1 = 0;
              if (uVar7 != 0) goto LAB_004835dd;
            }
            FUN_004961f0((int)_Dst,uVar1,(byte *)0x0);
            FUN_0048b660((int)_Dst,(undefined4 *)0x0,DAT_00582ae0,DAT_00582ae4);
            if (_Dst[3] != 0) {
              (*DAT_00582b18)(_Dst[3]);
            }
            _Dst[0x30] = (int)FUN_004ba730;
            _Dst[0x31] = 1000;
            if (_Dst[3] != 0) {
              (*DAT_00582b20)(_Dst[3]);
            }
          }
        }
        else {
          if (iVar2 == 0xc0a) {
            iVar2 = 7;
          }
          FUN_004961f0((int)_Dst,iVar2,(byte *)0x0);
        }
      }
      else {
        if (iVar4 == 7) {
          *(undefined1 *)(_Dst + 0xe) = 1;
        }
        pbVar5 = &DAT_0056de50;
        if (local_c == 0) {
          pbVar5 = (byte *)0x0;
        }
        FUN_004961f0((int)_Dst,iVar4,pbVar5);
        FUN_00466dd0(iVar2);
        pbVar5 = local_8;
      }
    }
  }
LAB_004835dd:
  FUN_00466dd0((int)pbVar5);
  if ((_Dst != (int *)0x0) && (_Dst[3] != 0)) {
    (*DAT_00582b20)(_Dst[3]);
  }
  uVar1 = FUN_00468670((int)_Dst);
  if (uVar1 != 7) {
    if (uVar1 != 0) {
      _Dst[0x11] = 0x4b771290;
    }
    *param_2 = _Dst;
    return uVar1 & 0xff;
  }
  FUN_00492580(_Dst,0);
  *param_2 = 0;
  return 7;
}


/* FUN_00483ba0 @ 00483ba0  kind=gamemisc  attributed-by=none  size=35 */

void __cdecl FUN_00483ba0(int param_1)

{
  char *pcVar1;
  
  pcVar1 = *(char **)(param_1 + 8);
  if ((*pcVar1 != '\0') && (*pcVar1 = '\0', 1 < *(short *)(param_1 + 0x1a))) {
    FUN_00471320(pcVar1);
    return;
  }
  return;
}


/* FUN_00484180 @ 00484180  kind=gamemisc  attributed-by=none  size=224 */

uint __cdecl FUN_00484180(int *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_1[10] != 0) || (*(char *)((int)param_1 + 0x13) != '\0')) {
    return 0;
  }
  if (((char)param_1[5] != '\0') && ((param_2[6] & 4) != 0)) {
    return 0;
  }
  param_2[3] = 0;
  if (param_1[0x2e] == 0) {
    if (((param_2[6] & 4) != 0) || (*(char *)((int)param_1 + 0xf) == '\x03')) {
      uVar2 = FUN_004bd5d0((uint)param_1,1);
      if (uVar2 != 0) goto LAB_00484245;
    }
    if ((uint)param_1[6] < param_2[5]) {
      iVar1 = FUN_004bd250((int)param_2);
      if (iVar1 != 0) {
        uVar2 = FUN_004bd350((int)param_2);
        if (uVar2 != 0) goto LAB_00484245;
      }
    }
    uVar2 = FUN_00485750(param_1,(int)param_2);
  }
  else {
    iVar1 = FUN_004bd250((int)param_2);
    if (iVar1 != 0) {
      uVar2 = FUN_004bd350((int)param_2);
      if (uVar2 != 0) goto LAB_00484245;
    }
    uVar2 = FUN_00484410((int)param_1,param_2,0,0);
  }
  if (uVar2 == 0) {
    FUN_004a3950(param_2);
  }
LAB_00484245:
  if (((uVar2 & 0xff) == 0xd) || ((uVar2 & 0xff) == 10)) {
    param_1[10] = uVar2;
    *(undefined1 *)((int)param_1 + 0xf) = 6;
  }
  return uVar2;
}


/* FUN_00485890 @ 00485890  kind=gamemisc  attributed-by=none  size=192 */

undefined4 __cdecl FUN_00485890(int param_1,byte *param_2,ulonglong *param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  byte *pbVar4;
  uint uVar5;
  ulonglong uVar6;
  double local_c;
  
  iVar2 = FUN_00486460(param_2,param_3);
  if ((iVar2 != 0) && (iVar2 = FUN_00485950(param_2,(int)param_3), iVar2 != 0)) {
    iVar2 = FUN_004bcc60(param_2,&DAT_0056dc7c);
    if (iVar2 == 0) {
      uVar3 = FUN_0048b480(param_1,param_3);
      return uVar3;
    }
    uVar5 = 0;
    if (param_2 != (byte *)0x0) {
      bVar1 = *param_2;
      pbVar4 = param_2;
      while (bVar1 != 0) {
        pbVar4 = pbVar4 + 1;
        bVar1 = *pbVar4;
      }
      uVar5 = (int)pbVar4 - (int)param_2 & 0x3fffffff;
    }
    iVar2 = FUN_0048cc90(param_2,&local_c,uVar5,'\x01');
    if (iVar2 == 0) {
      return 1;
    }
    local_c = local_c * 86400000.0 + 0.5;
    uVar6 = FUN_0054a946();
    *param_3 = uVar6;
    *(undefined1 *)((int)param_3 + 0x2a) = 1;
  }
  return 0;
}


/* FUN_00485950 @ 00485950  kind=gamemisc  attributed-by=none  size=303 */

undefined4 __cdecl FUN_00485950(byte *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  undefined3 extraout_var;
  byte *pbVar5;
  double dVar6;
  double dVar7;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  dVar6 = 0.0;
  iVar4 = FUN_0047d1b0(param_1);
  if (iVar4 != 2) {
    return 1;
  }
  pbVar5 = param_1 + 5;
  if (*pbVar5 == 0x3a) {
    iVar4 = FUN_0047d1b0(param_1 + 6);
    if (iVar4 != 1) {
      return 1;
    }
    pbVar5 = param_1 + 8;
    if ((*pbVar5 == 0x2e) && (((&DAT_00569720)[param_1[9]] & 4) != 0)) {
      dVar7 = 1.0;
      bVar1 = param_1[9];
      bVar2 = (&DAT_00569720)[bVar1];
      pbVar5 = param_1 + 9;
      while ((bVar2 & 4) != 0) {
        iVar4 = (int)(char)bVar1;
        bVar1 = pbVar5[1];
        pbVar5 = pbVar5 + 1;
        dVar7 = dVar7 * 10.0;
        dVar6 = (dVar6 * 10.0 + (double)iVar4) - 48.0;
        bVar2 = (&DAT_00569720)[bVar1];
      }
      dVar6 = dVar6 / dVar7;
    }
  }
  else {
    local_8 = 0;
  }
  *(undefined4 *)(param_2 + 0x14) = local_c;
  *(undefined2 *)(param_2 + 0x29) = 1;
  *(undefined4 *)(param_2 + 0x18) = local_10;
  *(double *)(param_2 + 0x20) = (double)local_8 + dVar6;
  bVar3 = FUN_00486380(pbVar5,param_2);
  if (CONCAT31(extraout_var,bVar3) == 0) {
    *(bool *)(param_2 + 0x2b) = *(int *)(param_2 + 0x1c) != 0;
    return 0;
  }
  return 1;
}


