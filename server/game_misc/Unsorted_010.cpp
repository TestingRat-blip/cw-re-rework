// Unsorted_010 (game_misc) -- server. 150 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Unsorted_010.h"

/* FUN_004c2110 @ 004c2110  kind=gamemisc  attributed-by=none  size=74 */

void __cdecl FUN_004c2110(undefined4 *param_1,byte *param_2,uint param_3)

{
  *(char *)(param_1 + 5) = (char)param_3;
  if (param_2 != (byte *)0x0) {
    while (*param_2 == param_3) {
      FUN_004c2110(param_1,*(byte **)(param_2 + 8),param_3);
      param_2 = *(byte **)(param_2 + 0xc);
      *(char *)(param_1 + 5) = (char)param_3;
      if (param_2 == (byte *)0x0) {
        return;
      }
    }
    FUN_004c1f00(param_1,(char *)param_2,0);
  }
  return;
}


/* FUN_004c2160 @ 004c2160  kind=gamemisc  attributed-by=none  size=191 */

undefined4 __cdecl FUN_004c2160(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  iVar1 = *param_1;
  puVar6 = (undefined4 *)0x0;
  iVar2 = *(int *)(*(int *)(iVar1 + 0x10) + 0x1c);
  if (param_2[0x10] == iVar2) {
    return 0;
  }
  iVar3 = FUN_004aaf60(param_1,param_2);
  if (iVar3 != 0) {
    do {
      puVar4 = puVar6;
      if (*(int *)(iVar3 + 0x14) == iVar2) {
        if (puVar6 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)FUN_004a02d0(iVar1,(byte *)"name=%Q");
        }
        else {
          puVar4 = (undefined4 *)FUN_004a02d0(iVar1,(byte *)"%s OR name=%Q");
          FUN_00494b00(iVar1,puVar6);
        }
      }
      iVar3 = *(int *)(iVar3 + 0x20);
      puVar6 = puVar4;
    } while (iVar3 != 0);
    if (puVar4 != (undefined4 *)0x0) {
      uVar5 = FUN_004a02d0(*param_1,(byte *)"type=\'trigger\' AND (%s)");
      FUN_00494b00(*param_1,puVar4);
      return uVar5;
    }
  }
  return 0;
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


/* FUN_004c29b0 @ 004c29b0  kind=gamemisc  attributed-by=none  size=61 */

void __cdecl FUN_004c29b0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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


/* FUN_004c29f0 @ 004c29f0  kind=gamemisc  attributed-by=none  size=526 */

int __cdecl FUN_004c29f0(uint param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  int iVar11;
  longlong lVar12;
  int local_8;
  
  uVar4 = param_1;
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
    lVar12 = 0;
  }
  else {
    uVar6 = *(uint *)(param_1 + 0x7c);
    lVar12 = __alldiv(iVar9 - 1,*(int *)(param_1 + 0x4c) - (uint)(iVar9 == 0),uVar6,0);
    lVar12 = __allmul((uint)(lVar12 + 1),(int)((ulonglong)(lVar12 + 1) >> 0x20),uVar6,0);
  }
  *(longlong *)(param_1 + 0x48) = lVar12;
  *(longlong *)(param_1 + 0x50) = lVar12;
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
  if (DAT_00582acc == 0) {
    local_8 = 0;
  }
  else {
    local_8 = (*DAT_00582b10)(5);
    if (local_8 != 0) {
      (*DAT_00582b18)(local_8);
    }
  }
  do {
    uVar5 = FUN_00487580();
    *puVar10 = uVar5;
    puVar10 = puVar10 + 1;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  if (local_8 != 0) {
    (*DAT_00582b20)(local_8);
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
    if (*(uint *)(uVar4 + 0x7c) <= param_1) {
      return 0;
    }
    iVar9 = (**(code **)(**(int **)(uVar4 + 0x40) + 0xc))
                      (*(int **)(uVar4 + 0x40),puVar2,uVar7,*(undefined4 *)(uVar4 + 0x48),
                       *(undefined4 *)(uVar4 + 0x4c));
    puVar1 = (uint *)(uVar4 + 0x48);
    uVar6 = *puVar1;
    *puVar1 = *puVar1 + uVar7;
    *(int *)(uVar4 + 0x4c) = *(int *)(uVar4 + 0x4c) + (uint)CARRY4(uVar6,uVar7);
    param_1 = param_1 + uVar7;
  } while (iVar9 == 0);
  return iVar9;
}


/* FUN_004c2c10 @ 004c2c10  kind=gamemisc  attributed-by=none  size=422 */

int __cdecl FUN_004c2c10(int param_1,char *param_2)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  longlong lVar8;
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
      lVar8 = FUN_0047f590(param_1);
      *(longlong *)(param_1 + 0x48) = lVar8;
    }
    local_c = *(uint *)(param_1 + 0x48);
    local_10 = *(int *)(param_1 + 0x4c);
    iVar4 = DAT_00582bb8 / *(int *)(param_1 + 0x80) + 1;
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
      iVar4 = FUN_004c29b0(*(int **)(param_1 + 0x40),local_c + 4,
                           iVar5 + (uint)(0xfffffffb < local_c),uVar6);
      uVar2 = local_c;
      if ((iVar4 == 0) &&
         ((iVar4 = FUN_004c29b0(*(int **)(param_1 + 0x40),local_c + 8,
                                iVar5 + (uint)(0xfffffff7 < local_c),local_14), iVar4 == 0 &&
          (iVar4 = (**(code **)(**(int **)(param_1 + 0x40) + 0xc))
                             (*(int **)(param_1 + 0x40),&DAT_0056a700,8,uVar2 + 0xc,
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
            iVar4 = FUN_004a1370(*(int **)(param_1 + 0x40),*(uint *)(param_1 + 0x48),iVar5);
          }
        }
      }
    }
    return iVar4;
  }
  return 0;
}


/* FUN_004c2dc0 @ 004c2dc0  kind=gamemisc  attributed-by=none  size=46 */

bool __cdecl FUN_004c2dc0(byte *param_1,byte *param_2)

{
  int iVar1;
  
  if (param_1 == (byte *)0x0) {
    return param_2 == (byte *)0x0;
  }
  if (param_2 == (byte *)0x0) {
    return false;
  }
  iVar1 = FUN_004bcc60(param_1,param_2);
  return (bool)('\x01' - (iVar1 != 0));
}


/* FUN_004c2df0 @ 004c2df0  kind=gamemisc  attributed-by=none  size=158 */

undefined4 __cdecl FUN_004c2df0(int param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if ((*(int *)(param_1 + 0x24) != *(int *)(param_2 + 0x24)) ||
     (*(char *)(param_1 + 0x2c) != *(char *)(param_2 + 0x2c))) {
    return 0;
  }
  iVar6 = 0;
  if (*(int *)(param_2 + 0x24) < 1) {
    return 1;
  }
  iVar4 = *(int *)(param_2 + 4);
  iVar2 = *(int *)(param_1 + 4) - iVar4;
  while( true ) {
    iVar5 = *(int *)(param_2 + 0x24);
    if ((*(int *)(iVar4 + iVar6 * 4) != *(int *)(iVar2 + iVar4 + iVar6 * 4)) ||
       (*(char *)(iVar6 + *(int *)(param_2 + 0x1c)) != *(char *)(iVar6 + *(int *)(param_1 + 0x1c))))
    {
      return 0;
    }
    pbVar3 = *(byte **)(*(int *)(param_1 + 0x20) + iVar6 * 4);
    pbVar1 = *(byte **)(*(int *)(param_2 + 0x20) + iVar6 * 4);
    if (pbVar1 != (byte *)0x0) {
      if (pbVar3 == (byte *)0x0) {
        return 0;
      }
      pbVar3 = (byte *)FUN_004bcc60(pbVar1,pbVar3);
      iVar5 = *(int *)(param_2 + 0x24);
    }
    if (pbVar3 != (byte *)0x0) break;
    iVar6 = iVar6 + 1;
    if (iVar5 <= iVar6) {
      return 1;
    }
    iVar4 = *(int *)(param_2 + 4);
  }
  return 0;
}


/* FUN_004c2e90 @ 004c2e90  kind=gamemisc  attributed-by=none  size=1393 */

undefined4 __cdecl FUN_004c2e90(int *param_1,int *param_2,int *param_3,uint param_4,int param_5)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int *piVar8;
  undefined3 extraout_var;
  int iVar9;
  int iVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int *piVar17;
  int extraout_EDX;
  void *extraout_EDX_00;
  undefined4 *puVar18;
  undefined4 *puVar19;
  undefined1 uVar20;
  uint local_24;
  int local_14;
  
  bVar5 = false;
  if (param_3 == (int *)0x0) {
    return 0;
  }
  iVar7 = FUN_004aaf60(param_1,param_2);
  if ((iVar7 == 0) && ((*(byte *)((int)param_2 + 0x2a) & 0x10) == 0)) {
    if ((param_4 == 99) &&
       (((short)param_2[9] < 0 || (param_4 = (uint)*(byte *)((int)param_2 + 0x2b), param_4 == 99))))
    {
      param_4 = 2;
    }
    psVar2 = (short *)param_3[10];
    if (((((((*psVar2 == 1) && (*(int *)(psVar2 + 0xe) == 0)) && (param_3[0xb] == 0)) &&
          ((param_3[0xe] == 0 && (param_3[0xc] == 0)))) && (param_3[0x12] == 0)) &&
        (((param_3[0xf] == 0 && ((*(byte *)((int)param_3 + 6) & 1) == 0)) &&
         ((*(int *)*param_3 == 1 &&
          (((**(char **)((int *)*param_3)[2] == 'q' &&
            (piVar8 = (int *)FUN_004a0120(param_1,0,(int *)(psVar2 + 4)), piVar8 != (int *)0x0)) &&
           (piVar8 != param_2)))))))) &&
       ((((*(byte *)((int)piVar8 + 0x2a) & 0x10) == 0 && (piVar8[3] == 0)) &&
        ((sVar1 = *(short *)((int)param_2 + 0x26), sVar1 == *(short *)((int)piVar8 + 0x26) &&
         ((short)param_2[9] == (short)piVar8[9])))))) {
      iVar7 = 0;
      if (0 < sVar1) {
        puVar18 = (undefined4 *)(param_2[1] + 0x10);
        puVar19 = (undefined4 *)(piVar8[1] + 0x10);
        do {
          if (*(char *)((int)puVar18 + 5) != *(char *)((int)puVar19 + 5)) {
            return 0;
          }
          bVar6 = FUN_004c2dc0((byte *)*puVar18,(byte *)*puVar19);
          if (CONCAT31(extraout_var,bVar6) == 0) {
            return 0;
          }
          if ((*(char *)(puVar18 + 1) != '\0') && (*(char *)(puVar19 + 1) == '\0')) {
            return 0;
          }
          iVar7 = iVar7 + 1;
          puVar18 = puVar18 + 6;
          puVar19 = puVar19 + 6;
        } while (iVar7 < sVar1);
      }
      iVar7 = param_2[2];
      if (iVar7 != 0) {
        iVar3 = piVar8[2];
        do {
          if (*(char *)(iVar7 + 0x2c) != '\0') {
            bVar5 = true;
          }
          iVar10 = iVar3;
          if (iVar3 == 0) {
            return 0;
          }
          while (iVar9 = FUN_004c2df0(iVar7,iVar10), iVar9 == 0) {
            iVar10 = *(int *)(iVar10 + 0x14);
            if (iVar10 == 0) {
              return 0;
            }
          }
          iVar7 = *(int *)(iVar7 + 0x14);
        } while (iVar7 != 0);
      }
      if (((int *)param_2[6] == (int *)0x0) ||
         (iVar7 = FUN_00498fe0((int *)piVar8[6],(int *)param_2[6]), iVar7 == 0)) {
        uVar12 = *(uint *)(*param_1 + 0x18);
        if ((((uVar12 & 0x40000) == 0) || (param_2[4] == 0)) && ((uVar12 & 0x10) == 0)) {
          iVar10 = FUN_004a7ba0(*param_1,piVar8[0x10]);
          piVar11 = FUN_0049d4d0(param_1);
          FUN_00493400(param_1,iVar10);
          iVar3 = param_1[0x12];
          iVar7 = iVar3 + 1;
          param_1[0x12] = iVar3 + 2;
          iVar9 = FUN_0046e0c0(param_1,param_5,(int)param_2);
          FUN_004a0f40(param_1,iVar3 + 1,param_5,param_2,0x28);
          if (((((short)param_2[9] < 0) && (param_2[2] != 0)) || (bVar5)) ||
             ((param_4 != 2 && (param_4 != 1)))) {
            uVar12 = FUN_004ae830(piVar11,0x48,iVar7,0);
            local_24 = FUN_004ae830(piVar11,1,0,0);
            FUN_004b6720((int)piVar11,uVar12);
          }
          else {
            local_24 = 0;
          }
          FUN_004a0f40(param_1,iVar3,iVar10,piVar8,0x27);
          uVar12 = FUN_004ae830(piVar11,0x48,iVar3,0);
          iVar13 = FUN_0049cb40((int)param_1);
          iVar14 = FUN_0049cb40(extraout_EDX);
          if ((short)param_2[9] < 0) {
            if (param_2[2] == 0) {
              uVar20 = 0x38;
              iVar9 = iVar3 + 1;
            }
            else {
              uVar20 = 0x41;
              iVar9 = iVar3;
            }
            local_14 = FUN_004ae830(piVar11,uVar20,iVar9,iVar14);
          }
          else {
            local_14 = FUN_004ae830(piVar11,0x41,iVar3,iVar14);
            uVar15 = FUN_004ae890(piVar11,0x36,iVar3 + 1,0,iVar14);
            FUN_0049d510(param_1,param_4,(int *)"PRIMARY KEY must be unique",0xfffffffe);
            FUN_004b6720((int)piVar11,uVar15);
            FUN_0046e140((int)param_1,iVar9,iVar14);
          }
          FUN_004ae830(piVar11,0x40,iVar3,iVar13);
          FUN_004ae890(piVar11,0x39,iVar3 + 1,iVar13,iVar14);
          FUN_004aee30((int)piVar11,0xb);
          iVar9 = piVar11[1];
          piVar17 = (int *)*param_2;
          iVar4 = *piVar11;
          if ((iVar9 == 0) || (*(char *)(iVar4 + 0x38) != '\0')) {
            FUN_0047bc80(iVar4,0,piVar17);
          }
          else {
            iVar16 = iVar9 + (piVar11[7] + -1) * 0x14;
            FUN_0047bc80(iVar4,(int)*(char *)(iVar16 + 1),
                         *(int **)(iVar9 + 0x10 + (piVar11[7] + -1) * 0x14));
            *(undefined4 *)(iVar16 + 0x10) = 0;
            if (piVar17 == (int *)0x0) {
              *(undefined4 *)(iVar16 + 0x10) = 0;
              *(undefined1 *)(iVar16 + 1) = 0;
            }
            else {
              uVar15 = FUN_004aa9b0((char *)piVar17);
              puVar18 = FUN_00494e00(*piVar11,extraout_EDX_00,uVar15);
              *(undefined4 **)(iVar16 + 0x10) = puVar18;
              *(undefined1 *)(iVar16 + 1) = 0xff;
            }
          }
          FUN_004ae830(piVar11,0x5f,iVar3,local_14);
          for (iVar9 = param_2[2]; iVar9 != 0; iVar9 = *(int *)(iVar9 + 0x14)) {
            iVar4 = piVar8[2];
            while ((iVar4 != 0 && (iVar16 = FUN_004c2df0(iVar9,iVar4), iVar16 == 0))) {
              iVar4 = *(int *)(iVar4 + 0x14);
            }
            FUN_004ae830(piVar11,0x2d,iVar3,0);
            FUN_004ae830(piVar11,0x2d,iVar7,0);
            piVar17 = FUN_0049dbf0(param_1,iVar4);
            FUN_004ae8f0(piVar11,0x27,iVar3,*(undefined4 *)(iVar4 + 0x28),iVar10,piVar17,0xfffffff0)
            ;
            piVar17 = FUN_0049dbf0(param_1,iVar9);
            FUN_004ae8f0(piVar11,0x28,iVar3 + 1,*(undefined4 *)(iVar9 + 0x28),param_5,piVar17,
                         0xfffffff0);
            uVar15 = FUN_004ae830(piVar11,0x48,iVar3,0);
            FUN_004ae830(piVar11,0x3f,iVar3,iVar13);
            FUN_004ae890(piVar11,0x61,iVar7,iVar13,1);
            FUN_004ae830(piVar11,0x5f,iVar3,uVar15 + 1);
            FUN_004b6720((int)piVar11,uVar15);
          }
          FUN_004b6720((int)piVar11,uVar12);
          FUN_004a68f0((int)param_1,iVar14);
          FUN_004a68f0((int)param_1,iVar13);
          FUN_004ae830(piVar11,0x2d,iVar3,0);
          FUN_004ae830(piVar11,0x2d,iVar3 + 1,0);
          if (local_24 == 0) {
            return 1;
          }
          FUN_004ae830(piVar11,6,0,0);
          FUN_004b6720((int)piVar11,local_24);
          FUN_004ae830(piVar11,0x2d,iVar3 + 1,0);
        }
      }
    }
  }
  return 0;
}


/* FUN_004c3410 @ 004c3410  kind=gamemisc  attributed-by=none  size=74 */

void __cdecl FUN_004c3410(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  *param_1 = *param_1 + -1;
  iVar1 = *param_1;
  piVar2 = (int *)param_1[2];
  iVar3 = *param_1;
  while ((-1 < iVar1 && (-1 < iVar3))) {
    FUN_004c34a0((int)param_1,*(undefined1 *)((int)param_1 + iVar3 * 0x10 + 0xe),
                 param_1 + iVar3 * 4 + 4);
    *param_1 = *param_1 + -1;
    iVar1 = *param_1;
    iVar3 = *param_1;
  }
  FUN_004962b0(piVar2,(byte *)"parser stack overflow");
  param_1[2] = (int)piVar2;
  return;
}


/* FUN_004c3460 @ 004c3460  kind=gamemisc  attributed-by=none  size=60 */

void __cdecl FUN_004c3460(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1[2];
  iVar2 = *param_1;
  iVar1 = iVar2;
  while ((-1 < iVar1 && (-1 < iVar2))) {
    FUN_004c34a0((int)param_1,*(undefined1 *)((int)param_1 + iVar2 * 0x10 + 0xe),
                 param_1 + iVar2 * 4 + 4);
    *param_1 = *param_1 + -1;
    iVar1 = *param_1;
    iVar2 = *param_1;
  }
  param_1[2] = iVar3;
  return;
}


/* FUN_004c34a0 @ 004c34a0  kind=gamemisc  attributed-by=none  size=199 */

void __cdecl FUN_004c34a0(int param_1,undefined1 param_2,undefined4 *param_3)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 8);
  switch(param_2) {
  case 0xa0:
  case 0xc2:
    FUN_004a9650(*piVar1,(undefined4 *)*param_3);
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
    FUN_00498790(*piVar1,(undefined4 *)*param_3);
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
    FUN_00499060(*piVar1,(int *)*param_3);
    return;
  case 0xc1:
  case 0xc6:
  case 0xce:
  case 0xcf:
    FUN_004a9cb0(*piVar1,(short *)*param_3);
    return;
  case 0xd3:
  case 0xd5:
  case 0xda:
    FUN_0049d910(*piVar1,(int *)*param_3);
    return;
  case 0xdb:
    FUN_00499060(*piVar1,(int *)*param_3);
    FUN_004a9650(*piVar1,(undefined4 *)param_3[1]);
    return;
  case 0xe8:
  case 0xed:
    FUN_00495480(*piVar1,(undefined4 *)*param_3);
    return;
  case 0xea:
    FUN_0049d910(*piVar1,(int *)param_3[1]);
  }
  return;
}


/* FUN_004c35e0 @ 004c35e0  kind=gamemisc  attributed-by=none  size=141 */

undefined2 __cdecl FUN_004c35e0(int *param_1,byte param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (uint)*(ushort *)(param_1 + *param_1 * 4 + 3);
  if (uVar3 < 0x1a1) {
    while (*(short *)(&DAT_0056bc60 + uVar3 * 2) != -0x46) {
      uVar1 = (int)*(short *)(&DAT_0056bc60 + uVar3 * 2) + (uint)param_2;
      if ((uVar1 < 0x61c) && ((&DAT_0056b640)[uVar1] == param_2)) {
LAB_004c3660:
        return *(undefined2 *)(&DAT_0056aa08 + uVar1 * 2);
      }
      if (param_2 == 0) break;
      if ((0x42 < param_2) || ((&DAT_0056c758)[param_2] == 0)) {
        iVar2 = uVar1 - param_2;
        uVar1 = iVar2 + 0x43;
        if ((-1 < (int)uVar1) && ((&DAT_0056b683)[iVar2] == 'C')) goto LAB_004c3660;
        break;
      }
      param_2 = (&DAT_0056c758)[param_2];
      if (0x1a0 < uVar3) break;
    }
  }
  return *(undefined2 *)(&DAT_0056c270 + uVar3 * 2);
}


/* FUN_004c3670 @ 004c3670  kind=gamemisc  attributed-by=none  size=8156 */

void FUN_004c3670(int *param_1,int param_2)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  short *psVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  int extraout_EDX;
  uint uVar13;
  ushort *puVar14;
  int iVar15;
  uint *puVar16;
  int *piVar17;
  undefined1 uVar18;
  uint *local_2c;
  undefined8 local_28;
  int local_20;
  undefined4 *local_1c;
  byte local_18 [4];
  undefined4 *local_14;
  int local_10;
  undefined4 *local_c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  puVar12 = (undefined4 *)0x0;
  iVar3 = *param_1;
  pbVar4 = (byte *)param_1[2];
  iVar5 = iVar3 * 0x10;
  local_28 = 0;
  local_1c = (undefined4 *)0x0;
  local_20 = 0;
  if (0x13e < param_2 - 5U) goto switchD_004c36ca_caseD_b3;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)&PTR_caseD_b2_004c5914 + param_2 + 3)) {
  case 0:
    pbVar4[0x1d4] = 0;
    pbVar4[0x1cc] = 0;
    pbVar4[0x1cd] = 0;
    pbVar4[0x1ce] = 0;
    pbVar4[0x1cf] = 0;
    break;
  case 1:
    pbVar4[0x1d4] = 1;
    pbVar4[0x1cc] = 0;
    pbVar4[0x1cd] = 0;
    pbVar4[0x1ce] = 0;
    pbVar4[0x1cf] = 0;
    break;
  case 2:
    pbVar4[0x1d4] = 2;
    pbVar4[0x1cc] = 0;
    pbVar4[0x1cd] = 0;
    pbVar4[0x1ce] = 0;
    pbVar4[0x1cf] = 0;
    break;
  case 3:
    FUN_00499d70((int *)pbVar4);
    puVar12 = local_1c;
    break;
  case 4:
    FUN_0048e0b0((int *)pbVar4,param_1[iVar3 * 4]);
    puVar12 = local_1c;
    break;
  case 5:
    local_28 = 7;
    break;
  case 6:
    local_28 = (ulonglong)*(byte *)((int)param_1 + iVar5 + 0xe);
    break;
  case 7:
    FUN_004936f0((int *)pbVar4);
    puVar12 = local_1c;
    break;
  case 8:
    FUN_004a6d60((int *)pbVar4);
    puVar12 = local_1c;
    break;
  case 9:
    FUN_004a78d0((int *)pbVar4,0,param_1 + iVar3 * 4 + 4);
    puVar12 = local_1c;
    break;
  case 10:
    FUN_004a78d0((int *)pbVar4,1,param_1 + iVar3 * 4 + 4);
    puVar12 = local_1c;
    break;
  case 0xb:
    FUN_004a78d0((int *)pbVar4,2,param_1 + iVar3 * 4 + 4);
    puVar12 = local_1c;
    break;
  case 0xc:
    FUN_004aa1c0((int *)pbVar4,param_1 + iVar3 * 4,(int)(param_1 + iVar3 * 4 + 4),
                 param_1[iVar3 * 4 + -0xc],0,0,param_1[iVar3 * 4 + -4]);
    puVar12 = local_1c;
    break;
  case 0xd:
    *(undefined1 *)(*(int *)pbVar4 + 0xea) = 0;
  case 0x14:
    local_28 = *(ulonglong *)(param_1 + iVar3 * 4 + 4);
    break;
  case 0xf:
    local_28 = 1;
    break;
  case 0x10:
    FUN_00495df0((int *)pbVar4,param_1 + iVar3 * 4,param_1 + iVar3 * 4 + 4,(int *)0x0);
    puVar12 = local_1c;
    break;
  case 0x11:
    FUN_00495df0((int *)pbVar4,(int *)0x0,(int *)0x0,(int *)param_1[iVar3 * 4 + 4]);
    FUN_004a9650(*(int *)pbVar4,(undefined4 *)param_1[iVar3 * 4 + 4]);
    puVar12 = local_1c;
    break;
  case 0x12:
    local_28 = CONCAT44((*(int *)(pbVar4 + 0x214) + *(int *)(pbVar4 + 0x210)) -
                        param_1[iVar3 * 4 + -4],param_1[iVar3 * 4 + -4]);
    break;
  case 0x13:
    FUN_0048ba50((int *)pbVar4,param_1 + iVar3 * 4 + 4);
    local_28 = *(ulonglong *)(param_1 + iVar3 * 4 + 4);
    pbVar4[0x1a0] = 0;
    pbVar4[0x1a1] = 0;
    pbVar4[0x1a2] = 0;
    pbVar4[0x1a3] = 0;
    puVar12 = local_1c;
    break;
  case 0x15:
    FUN_0048bb90((int *)pbVar4,param_1 + iVar3 * 4 + 4);
    puVar12 = local_1c;
    break;
  case 0x16:
    local_28 = CONCAT44((param_1[iVar3 * 4 + 5] + param_1[iVar3 * 4 + 4]) - param_1[iVar3 * 4 + -8],
                        param_1[iVar3 * 4 + -8]);
    break;
  case 0x17:
    local_28 = CONCAT44((param_1[iVar3 * 4 + 5] + param_1[iVar3 * 4 + 4]) -
                        param_1[iVar3 * 4 + -0x10],param_1[iVar3 * 4 + -0x10]);
    break;
  case 0x18:
    local_28 = CONCAT44((param_1[iVar3 * 4 + 5] + param_1[iVar3 * 4 + 4]) - param_1[iVar3 * 4],
                        param_1[iVar3 * 4]);
    break;
  case 0x19:
    *(int *)(pbVar4 + 0x19c) = param_1[iVar3 * 4 + 4];
    *(int *)(pbVar4 + 0x1a0) = param_1[iVar3 * 4 + 5];
    break;
  case 0x1a:
    FUN_0048bbe0((int *)pbVar4,param_1 + iVar3 * 4 + 4);
    puVar12 = local_1c;
    break;
  case 0x1b:
    FUN_0048bbe0((int *)pbVar4,param_1 + iVar3 * 4);
    puVar12 = local_1c;
    break;
  case 0x1c:
    local_2c = (uint *)param_1[iVar3 * 4 + 4];
    puVar12 = FUN_00494b90(*(int *)pbVar4,0x2c);
    if (puVar12 != (undefined4 *)0x0) {
      memset(puVar12,0,0x2c);
      *(undefined1 *)puVar12 = 0x9c;
      *(undefined2 *)((int)puVar12 + 0x1e) = 0xffff;
      puVar12[5] = 1;
    }
    FUN_00496a30(*(int *)pbVar4,(int)puVar12,local_2c,(undefined4 *)0x0);
    if ((puVar12 != (undefined4 *)0x0) && (*(int *)(*(int *)pbVar4 + 0x5c) < (int)puVar12[5])) {
      FUN_004962b0((int *)pbVar4,(byte *)"Expression tree is too large (maximum depth %d)");
    }
    local_10 = param_1[iVar3 * 4];
    local_c = (undefined4 *)param_1[iVar3 * 4 + 6];
    local_14 = puVar12;
    FUN_0048bbe0((int *)pbVar4,(int *)&local_14);
    puVar12 = local_1c;
    break;
  case 0x1d:
    FUN_0048b7c0(&local_14,(int *)pbVar4,0x5e,param_1 + iVar3 * 4 + 4);
    FUN_0048bbe0((int *)pbVar4,(int *)&local_14);
    puVar12 = local_1c;
    break;
  case 0x1e:
    iVar5 = *(int *)(pbVar4 + 0x1fc);
    if ((iVar5 != 0) && (0 < *(short *)(iVar5 + 0x26))) {
      *(char *)(*(int *)(iVar5 + 4) + -4 + *(short *)(iVar5 + 0x26) * 0x18) =
           (char)param_1[iVar3 * 4 + 4];
      puVar12 = local_1c;
    }
    break;
  case 0x1f:
    FUN_0048bd80((int *)pbVar4,(uint *)0x0,param_1[iVar3 * 4],param_1[iVar3 * 4 + 4],
                 param_1[iVar3 * 4 + -4]);
    puVar12 = local_1c;
    break;
  case 0x20:
    FUN_004940f0((int *)pbVar4,(undefined4 *)0x0,0,(short *)0x0,(uint *)0x0,param_1[iVar3 * 4 + 4],0
                 ,0,0,0);
    puVar12 = local_1c;
    break;
  case 0x21:
    FUN_0048b960((int *)pbVar4,(undefined4 *)param_1[iVar3 * 4]);
    puVar12 = local_1c;
    break;
  case 0x22:
    FUN_00493bd0((int *)pbVar4,(int *)0x0,param_1 + iVar3 * 4 + -4,(int *)param_1[iVar3 * 4],
                 param_1[iVar3 * 4 + 4]);
    puVar12 = local_1c;
    break;
  case 0x23:
    FUN_00494ea0((int)pbVar4,(char)param_1[iVar3 * 4 + 4]);
    puVar12 = (undefined4 *)extraout_EDX;
    break;
  case 0x24:
    FUN_0048b9c0((int *)pbVar4,param_1 + iVar3 * 4 + 4);
    puVar12 = local_1c;
    break;
  case 0x25:
    local_28 = (ulonglong)
               (uint)(~param_1[iVar3 * 4 + 5] & param_1[iVar3 * 4] | param_1[iVar3 * 4 + 4]);
    break;
  case 0x26:
  case 0x44:
    local_28 = 0;
    break;
  case 0x27:
    local_28 = CONCAT44(0xff,param_1[iVar3 * 4 + 4]);
    break;
  case 0x28:
    local_28 = CONCAT44(0xff00,param_1[iVar3 * 4 + 4] << 8);
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
    local_28 = *(ulonglong *)(param_1 + iVar3 * 4);
    break;
  case 0x2f:
    pbVar4[0x1a0] = 0;
    pbVar4[0x1a1] = 0;
    pbVar4[0x1a2] = 0;
    pbVar4[0x1a3] = 0;
    break;
  case 0x30:
    FUN_0048bd80((int *)pbVar4,(uint *)param_1[iVar3 * 4 + -8],param_1[iVar3 * 4 + 4],
                 param_1[iVar3 * 4 + -4],0);
    puVar12 = local_1c;
    break;
  case 0x31:
    FUN_004940f0((int *)pbVar4,(undefined4 *)0x0,0,(short *)0x0,(uint *)param_1[iVar3 * 4 + -4],
                 param_1[iVar3 * 4 + 4],0,0,0,0);
    puVar12 = local_1c;
    break;
  case 0x32:
    FUN_0048b960((int *)pbVar4,(undefined4 *)param_1[iVar3 * 4 + -4]);
    puVar12 = local_1c;
    break;
  case 0x33:
    FUN_00493bd0((int *)pbVar4,(int *)param_1[iVar3 * 4 + -0x14],param_1 + iVar3 * 4 + -8,
                 (int *)param_1[iVar3 * 4 + -4],param_1[iVar3 * 4]);
    FUN_00494ea0((int)pbVar4,(char)param_1[iVar3 * 4 + 4]);
    puVar12 = local_1c;
    break;
  case 0x34:
    local_28 = 99;
    break;
  case 0x35:
    local_28 = 99;
    break;
  case 0x36:
    local_28 = (ulonglong)*(byte *)(param_1 + iVar3 * 4 + 4);
    break;
  case 0x37:
    local_28 = 4;
    break;
  case 0x38:
    local_28 = 5;
    break;
  case 0x39:
    FUN_004957f0((int *)pbVar4,(short *)param_1[iVar3 * 4 + 4],0,param_1[iVar3 * 4]);
    puVar12 = local_1c;
    break;
  case 0x3a:
    FUN_00494960((int *)pbVar4,param_1 + iVar3 * 4 + -0x18,param_1 + iVar3 * 4 + -8,
                 (int)(param_1 + iVar3 * 4 + -4),(undefined4 *)param_1[iVar3 * 4 + 4],
                 param_1[iVar3 * 4 + -0x14],param_1[iVar3 * 4 + -0xc]);
    puVar12 = local_1c;
    break;
  case 0x3b:
    FUN_004957f0((int *)pbVar4,(short *)param_1[iVar3 * 4 + 4],1,param_1[iVar3 * 4]);
    puVar12 = local_1c;
    break;
  case 0x3c:
    local_18[0] = 5;
    local_18[1] = 0;
    local_14 = (undefined4 *)0x0;
    local_10 = 0;
    local_c = (undefined4 *)0x0;
    FUN_004a7e30((int *)pbVar4,(int *)param_1[iVar3 * 4 + 4],local_18);
    FUN_004a9650(*(int *)pbVar4,(undefined4 *)param_1[iVar3 * 4 + 4]);
    puVar12 = local_1c;
    break;
  case 0x3d:
    if (param_1[iVar3 * 4 + 4] != 0) {
      *(char *)(param_1[iVar3 * 4 + 4] + 4) = (char)param_1[iVar3 * 4];
      *(int *)(param_1[iVar3 * 4 + 4] + 0x3c) = param_1[iVar3 * 4 + -4];
      local_28 = (ulonglong)(uint)param_1[iVar3 * 4 + 4];
      break;
    }
    FUN_004a9650(*(int *)pbVar4,(undefined4 *)param_1[iVar3 * 4 + -4]);
    puVar12 = local_1c;
  case 0x2c:
    local_28 = CONCAT44(local_28._4_4_,param_1[iVar3 * 4 + 4]);
    break;
  case 0x3e:
    local_28 = 0x71;
    break;
  case 0x3f:
    uVar8 = FUN_004a97d0((int *)pbVar4,(int *)param_1[iVar3 * 4 + -0x14],
                         (undefined4 *)param_1[iVar3 * 4 + -0x10],param_1[iVar3 * 4 + -0xc],
                         param_1[iVar3 * 4 + -8],param_1[iVar3 * 4 + -4],param_1[iVar3 * 4],
                         param_1[iVar3 * 4 + -0x18],param_1[iVar3 * 4 + 4],param_1[iVar3 * 4 + 5]);
    local_28 = CONCAT44(local_28._4_4_,uVar8);
    puVar12 = local_1c;
    break;
  case 0x41:
    puVar16 = FUN_00498f00((int *)pbVar4,(uint *)param_1[iVar3 * 4 + -4],
                           (undefined4 *)param_1[iVar3 * 4]);
    local_28 = CONCAT44(local_28._4_4_,puVar16);
    if (param_1[iVar3 * 4 + 5] != 0) {
      FUN_004992e0((int *)pbVar4,(int *)puVar16,param_1 + iVar3 * 4 + 4,1);
    }
    FUN_00499360((int *)pbVar4,(int *)puVar16,(int)(param_1 + iVar3 * 4));
    puVar12 = local_1c;
    break;
  case 0x42:
    puVar12 = FUN_00494b90(*(int *)pbVar4,0x2d);
    if (puVar12 != (undefined4 *)0x0) {
      memset(puVar12,0,0x2d);
      *(undefined2 *)((int)puVar12 + 0x1e) = 0xffff;
      *(undefined1 *)puVar12 = 0x71;
      puVar12[1] = puVar12 + 0xb;
      *(undefined1 *)(puVar12 + 0xb) = 0;
      puVar12[5] = 1;
    }
    puVar16 = FUN_00498f00((int *)pbVar4,(uint *)param_1[iVar3 * 4],puVar12);
    local_28 = CONCAT44(local_28._4_4_,puVar16);
    puVar12 = local_1c;
    break;
  case 0x43:
    puVar16 = FUN_00496510(*(int *)pbVar4,0x71,param_1 + iVar3 * 4 + 4,1);
    local_2c = puVar16;
    FUN_00496a30(*(int *)pbVar4,(int)puVar16,(undefined4 *)0x0,(undefined4 *)0x0);
    if ((puVar16 != (uint *)0x0) && (*(int *)(*(int *)pbVar4 + 0x5c) < (int)puVar16[5])) {
      FUN_004962b0((int *)pbVar4,(byte *)"Expression tree is too large (maximum depth %d)");
    }
    puVar12 = FUN_00496510(*(int *)pbVar4,0x1a,param_1 + iVar3 * 4 + -4,1);
    FUN_00496a30(*(int *)pbVar4,(int)puVar12,(undefined4 *)0x0,(undefined4 *)0x0);
    if ((puVar12 != (undefined4 *)0x0) && (*(int *)(*(int *)pbVar4 + 0x5c) < (int)puVar12[5])) {
      FUN_004962b0((int *)pbVar4,(byte *)"Expression tree is too large (maximum depth %d)");
    }
    puVar9 = FUN_00494b90(*(int *)pbVar4,0x2c);
    if (puVar9 != (undefined4 *)0x0) {
      memset(puVar9,0,0x2c);
      *(undefined1 *)puVar9 = 0x76;
      *(undefined2 *)((int)puVar9 + 0x1e) = 0xffff;
      puVar9[5] = 1;
    }
    FUN_00496a30(*(int *)pbVar4,(int)puVar9,puVar12,local_2c);
    if ((puVar9 != (undefined4 *)0x0) && (*(int *)(*(int *)pbVar4 + 0x5c) < (int)puVar9[5])) {
      FUN_004962b0((int *)pbVar4,(byte *)"Expression tree is too large (maximum depth %d)");
    }
    puVar16 = FUN_00498f00((int *)pbVar4,(uint *)param_1[iVar3 * 4 + -8],puVar9);
    local_28 = CONCAT44(local_28._4_4_,puVar16);
    puVar12 = local_1c;
    break;
  case 0x45:
    puVar12 = FUN_00494c20(*(int *)pbVar4,0x50);
    local_28 = CONCAT44(local_28._4_4_,puVar12);
    puVar12 = local_1c;
    break;
  case 0x46:
    local_28 = ZEXT48((short *)param_1[iVar3 * 4 + 4]);
    FUN_004aa180((short *)param_1[iVar3 * 4 + 4]);
    puVar12 = local_1c;
    break;
  case 0x47:
    psVar10 = (short *)param_1[iVar3 * 4];
    local_28 = ZEXT48(psVar10);
    if ((psVar10 != (short *)0x0) && (0 < *psVar10)) {
      *(char *)(psVar10 + *psVar10 * 0x24 + -0x10) = (char)param_1[iVar3 * 4 + 4];
    }
    break;
  case 0x48:
    psVar10 = FUN_004a9b80((int *)pbVar4,(short *)param_1[iVar3 * 4 + -0x14],
                           param_1 + iVar3 * 4 + -0x10,param_1 + iVar3 * 4 + -0xc,
                           param_1 + iVar3 * 4 + -8,(undefined4 *)0x0,
                           (undefined4 *)param_1[iVar3 * 4],(int *)param_1[iVar3 * 4 + 4]);
    local_28 = CONCAT44(local_28._4_4_,psVar10);
    FUN_004aa0e0((int *)pbVar4,psVar10,param_1 + iVar3 * 4 + -4);
    puVar12 = local_1c;
    break;
  case 0x49:
    psVar10 = FUN_004a9b80((int *)pbVar4,(short *)param_1[iVar3 * 4 + -0x14],(int *)0x0,(int *)0x0,
                           param_1 + iVar3 * 4 + -4,(undefined4 *)param_1[iVar3 * 4 + -0xc],
                           (undefined4 *)param_1[iVar3 * 4],(int *)param_1[iVar3 * 4 + 4]);
    local_28 = CONCAT44(local_28._4_4_,psVar10);
    puVar12 = local_1c;
    break;
  case 0x4a:
    if ((((param_1[iVar3 * 4 + -0x14] == 0) && (param_1[iVar3 * 4 + -3] == 0)) &&
        (param_1[iVar3 * 4] == 0)) && (param_1[iVar3 * 4 + 4] == 0)) {
      local_28 = (ulonglong)(uint)param_1[iVar3 * 4 + -0xc];
    }
    else {
      FUN_004aa180((short *)param_1[iVar3 * 4 + -0xc]);
      puVar12 = (undefined4 *)
                FUN_004a97d0((int *)pbVar4,(int *)0x0,(undefined4 *)param_1[iVar3 * 4 + -0xc],0,0,0,
                             0,0,0,0);
      psVar10 = FUN_004a9b80((int *)pbVar4,(short *)param_1[iVar3 * 4 + -0x14],(int *)0x0,(int *)0x0
                             ,param_1 + iVar3 * 4 + -4,puVar12,(undefined4 *)param_1[iVar3 * 4],
                             (int *)param_1[iVar3 * 4 + 4]);
      local_28 = CONCAT44(local_28._4_4_,psVar10);
      puVar12 = local_1c;
    }
    break;
  case 0x4b:
    psVar10 = FUN_004a9ac0(*(int *)pbVar4,(short *)0x0,param_1 + iVar3 * 4,param_1 + iVar3 * 4 + 4);
    local_28 = CONCAT44(local_28._4_4_,psVar10);
    puVar12 = local_1c;
    break;
  case 0x4c:
    uVar13 = FUN_0049f970((int *)pbVar4,(int)(param_1 + iVar3 * 4),0,0);
    local_28 = CONCAT44(local_28._4_4_,uVar13);
    puVar12 = local_1c;
    break;
  case 0x4d:
    uVar13 = FUN_0049f970((int *)pbVar4,(int)(param_1 + iVar3 * 4 + -4),param_1 + iVar3 * 4,0);
    local_28 = CONCAT44(local_28._4_4_,uVar13);
    puVar12 = local_1c;
    break;
  case 0x4e:
    uVar13 = FUN_0049f970((int *)pbVar4,(int)(param_1 + iVar3 * 4 + -8),param_1 + iVar3 * 4 + -4,
                          param_1 + iVar3 * 4);
    local_28 = CONCAT44(local_28._4_4_,uVar13);
    puVar12 = local_1c;
    break;
  case 0x4f:
    local_28 = 0x100000000;
    break;
  case 0x50:
    puVar16 = FUN_00498f00((int *)pbVar4,(uint *)param_1[iVar3 * 4 + -8],
                           (undefined4 *)param_1[iVar3 * 4]);
    local_28 = CONCAT44(local_28._4_4_,puVar16);
    puVar12 = local_1c;
    if (puVar16 != (uint *)0x0) {
      *(char *)((puVar16[2] - 8) + *puVar16 * 0x14) = (char)param_1[iVar3 * 4 + 4];
    }
    break;
  case 0x51:
    puVar16 = FUN_00498f00((int *)pbVar4,(uint *)0x0,(undefined4 *)param_1[iVar3 * 4]);
    local_28 = CONCAT44(local_28._4_4_,puVar16);
    puVar12 = local_1c;
    if ((puVar16 != (uint *)0x0) && (puVar16[2] != 0)) {
      *(char *)(puVar16[2] + 0xc) = (char)param_1[iVar3 * 4 + 4];
    }
    break;
  case 0x52:
    local_28 = (ulonglong)(uint)param_1[iVar3 * 4 + 4];
    break;
  case 0x53:
    local_28 = CONCAT44(param_1[iVar3 * 4 + 4],param_1[iVar3 * 4 + -4]);
    break;
  case 0x54:
    local_28 = CONCAT44(param_1[iVar3 * 4 + -4],param_1[iVar3 * 4 + 4]);
    break;
  case 0x55:
    FUN_004aa0e0((int *)pbVar4,(short *)param_1[iVar3 * 4 + -4],param_1 + iVar3 * 4);
    FUN_00494ec0((int *)pbVar4,(short *)param_1[iVar3 * 4 + -4],(byte *)param_1[iVar3 * 4 + 4]);
    puVar12 = local_1c;
    break;
  case 0x56:
    FUN_004aa0e0((int *)pbVar4,(short *)param_1[iVar3 * 4 + -0xc],param_1 + iVar3 * 4 + -8);
    FUN_00498fb0((int *)pbVar4,(int *)param_1[iVar3 * 4]);
    FUN_004ab480((int *)pbVar4,(short *)param_1[iVar3 * 4 + -0xc],(int *)param_1[iVar3 * 4],
                 (byte *)param_1[iVar3 * 4 + 4],(int *)(uint)*(byte *)(param_1 + iVar3 * 4 + -0x10))
    ;
    puVar12 = local_1c;
    break;
  case 0x57:
    puVar12 = (undefined4 *)param_1[iVar3 * 4 + 4];
    puVar16 = (uint *)param_1[iVar3 * 4 + -0xc];
    goto LAB_004c407a;
  case 0x58:
    puVar12 = (undefined4 *)param_1[iVar3 * 4 + 4];
    puVar16 = (uint *)0x0;
LAB_004c407a:
    puVar16 = FUN_00498f00((int *)pbVar4,puVar16,puVar12);
    local_28 = CONCAT44(local_28._4_4_,puVar16);
    FUN_004992e0((int *)pbVar4,(int *)puVar16,param_1 + iVar3 * 4 + -4,1);
    puVar12 = local_1c;
    break;
  case 0x59:
    FUN_0049e570((int *)pbVar4,(short *)param_1[iVar3 * 4 + -4],(int *)param_1[iVar3 * 4 + 4],
                 (int *)param_1[iVar3 * 4 + 5],(int *)param_1[iVar3 * 4],
                 (int *)(uint)*(byte *)(param_1 + iVar3 * 4 + -0xc));
    puVar12 = local_1c;
    break;
  case 0x5a:
    FUN_0049e570((int *)pbVar4,(short *)param_1[iVar3 * 4 + -4],(int *)0x0,
                 (int *)param_1[iVar3 * 4 + 4],(int *)param_1[iVar3 * 4],
                 (int *)(uint)*(byte *)(param_1 + iVar3 * 4 + -0xc));
    puVar12 = local_1c;
    break;
  case 0x5b:
    FUN_0049e570((int *)pbVar4,(short *)param_1[iVar3 * 4 + -8],(int *)0x0,(int *)0x0,
                 (int *)param_1[iVar3 * 4 + -4],(int *)(uint)*(byte *)(param_1 + iVar3 * 4 + -0x10))
    ;
    puVar12 = local_1c;
    break;
  case 0x5c:
    local_28 = 5;
    break;
  case 0x5d:
    local_28 = (ulonglong)(uint)param_1[iVar3 * 4];
    break;
  case 0x5e:
    puVar12 = (undefined4 *)
              FUN_004a97d0((int *)pbVar4,(int *)param_1[iVar3 * 4],(undefined4 *)0x0,0,0,0,0,0,0,0);
    if ((int *)param_1[iVar3 * 4 + -0xc] != (int *)0x0) {
      iVar5 = FUN_004a97d0((int *)pbVar4,(int *)param_1[iVar3 * 4 + -0xc],(undefined4 *)0x0,0,0,0,0,
                           0,0,0);
      param_1[iVar3 * 4 + -0xb] = iVar5;
      param_1[iVar3 * 4 + -0xc] = 0;
    }
    local_28 = local_28 & 0xffffffff00000000;
    if ((param_1[iVar3 * 4 + -0xb] == 0) || (puVar12 == (undefined4 *)0x0)) {
      FUN_004a9650(*(int *)pbVar4,puVar12);
      FUN_004a9650(*(int *)pbVar4,(undefined4 *)param_1[iVar3 * 4 + -0xb]);
      local_28 = local_28 & 0xffffffff;
      puVar12 = local_1c;
    }
    else {
      *(undefined1 *)(puVar12 + 1) = 0x71;
      iVar5 = param_1[iVar3 * 4 + -0xb];
      *(ushort *)((int)puVar12 + 6) = *(ushort *)((int)puVar12 + 6) | 0x80;
      puVar12[0xf] = iVar5;
      puVar14 = (ushort *)(iVar5 + 6);
      *puVar14 = *puVar14 | 0x80;
      local_28 = ZEXT48(puVar12) << 0x20;
      puVar12 = local_1c;
    }
    break;
  case 0x5f:
    piVar6 = FUN_0049d890(*(int *)pbVar4,(int *)param_1[iVar3 * 4 + -4],param_1 + iVar3 * 4 + 4);
    local_28 = CONCAT44(local_28._4_4_,piVar6);
    puVar12 = local_1c;
    break;
  case 0x60:
    iVar5 = *(int *)pbVar4;
    piVar6 = FUN_00494b90(iVar5,8);
    if (piVar6 != (int *)0x0) {
      piVar6[0] = 0;
      piVar6[1] = 0;
      puVar12 = FUN_0048cc10(iVar5,(undefined4 *)*piVar6,8,(uint *)(piVar6 + 1),(uint *)&local_2c);
      *piVar6 = (int)puVar12;
      if (-1 < (int)local_2c) {
        pcVar7 = FUN_004a0d40(iVar5,param_1 + iVar3 * 4 + 4);
        *(char **)(*piVar6 + (int)local_2c * 8) = pcVar7;
        local_28 = CONCAT44(local_28._4_4_,piVar6);
        puVar12 = local_1c;
        break;
      }
      FUN_0049d910(iVar5,piVar6);
    }
    local_28 = local_28 & 0xffffffff00000000;
    puVar12 = local_1c;
    break;
  case 0x61:
    local_28 = *(ulonglong *)(param_1 + iVar3 * 4 + 4);
    puVar12 = (undefined4 *)param_1[iVar3 * 4 + 6];
    break;
  case 0x62:
    puVar12 = (undefined4 *)(param_1[iVar3 * 4 + 5] + param_1[iVar3 * 4 + 4]);
    local_28 = CONCAT44(param_1[iVar3 * 4 + -4],param_1[iVar3 * 4]);
    break;
  case 99:
    uVar13 = (uint)*(byte *)((int)param_1 + iVar5 + 0xe);
    goto LAB_004c4261;
  case 100:
    uVar13 = 0x1a;
LAB_004c4261:
    FUN_0048b7c0((undefined4 *)&local_28,(int *)pbVar4,uVar13,param_1 + iVar3 * 4 + 4);
    puVar12 = (undefined4 *)local_20;
    break;
  case 0x65:
    puVar16 = FUN_00496510(*(int *)pbVar4,0x1a,param_1 + iVar3 * 4 + -4,1);
    local_2c = puVar16;
    FUN_00496a30(*(int *)pbVar4,(int)puVar16,(undefined4 *)0x0,(undefined4 *)0x0);
    if ((puVar16 != (uint *)0x0) && (*(int *)(*(int *)pbVar4 + 0x5c) < (int)puVar16[5])) {
      FUN_004962b0((int *)pbVar4,(byte *)"Expression tree is too large (maximum depth %d)");
    }
    puVar12 = FUN_00496510(*(int *)pbVar4,0x1a,param_1 + iVar3 * 4 + 4,1);
    FUN_00496a30(*(int *)pbVar4,(int)puVar12,(undefined4 *)0x0,(undefined4 *)0x0);
    if ((puVar12 != (undefined4 *)0x0) && (*(int *)(*(int *)pbVar4 + 0x5c) < (int)puVar12[5])) {
      FUN_004962b0((int *)pbVar4,(byte *)"Expression tree is too large (maximum depth %d)");
    }
    puVar9 = FUN_00494b90(*(int *)pbVar4,0x2c);
    if (puVar9 != (undefined4 *)0x0) {
      memset(puVar9,0,0x2c);
      *(undefined1 *)puVar9 = 0x76;
      *(undefined2 *)((int)puVar9 + 0x1e) = 0xffff;
      puVar9[5] = 1;
    }
    FUN_00496a30(*(int *)pbVar4,(int)puVar9,local_2c,puVar12);
    if ((puVar9 != (undefined4 *)0x0) && (*(int *)(*(int *)pbVar4 + 0x5c) < (int)puVar9[5])) {
      FUN_004962b0((int *)pbVar4,(byte *)"Expression tree is too large (maximum depth %d)");
    }
    local_28 = CONCAT44(param_1[iVar3 * 4 + -4],puVar9);
    puVar12 = (undefined4 *)(param_1[iVar3 * 4 + 5] + param_1[iVar3 * 4 + 4]);
    break;
  case 0x66:
    puVar12 = FUN_00496510(*(int *)pbVar4,0x1a,param_1 + iVar3 * 4 + -0xc,1);
    local_c = puVar12;
    FUN_00496a30(*(int *)pbVar4,(int)puVar12,(undefined4 *)0x0,(undefined4 *)0x0);
    if ((puVar12 != (undefined4 *)0x0) && (*(int *)(*(int *)pbVar4 + 0x5c) < (int)puVar12[5])) {
      FUN_004962b0((int *)pbVar4,(byte *)"Expression tree is too large (maximum depth %d)");
    }
    puVar16 = FUN_00496510(*(int *)pbVar4,0x1a,param_1 + iVar3 * 4 + -4,1);
    local_2c = puVar16;
    FUN_00496a30(*(int *)pbVar4,(int)puVar16,(undefined4 *)0x0,(undefined4 *)0x0);
    if ((puVar16 != (uint *)0x0) && (*(int *)(*(int *)pbVar4 + 0x5c) < (int)puVar16[5])) {
      FUN_004962b0((int *)pbVar4,(byte *)"Expression tree is too large (maximum depth %d)");
    }
    puVar12 = FUN_00496510(*(int *)pbVar4,0x1a,param_1 + iVar3 * 4 + 4,1);
    FUN_00496a30(*(int *)pbVar4,(int)puVar12,(undefined4 *)0x0,(undefined4 *)0x0);
    if ((puVar12 != (undefined4 *)0x0) && (*(int *)(*(int *)pbVar4 + 0x5c) < (int)puVar12[5])) {
      FUN_004962b0((int *)pbVar4,(byte *)"Expression tree is too large (maximum depth %d)");
    }
    local_1c = FUN_00494b90(*(int *)pbVar4,0x2c);
    if (local_1c != (undefined4 *)0x0) {
      memset(local_1c,0,0x2c);
      *(undefined1 *)local_1c = 0x76;
      *(undefined2 *)((int)local_1c + 0x1e) = 0xffff;
      local_1c[5] = 1;
    }
    FUN_00496a30(*(int *)pbVar4,(int)local_1c,local_2c,puVar12);
    if ((local_1c != (undefined4 *)0x0) && (*(int *)(*(int *)pbVar4 + 0x5c) < (int)local_1c[5])) {
      FUN_004962b0((int *)pbVar4,(byte *)"Expression tree is too large (maximum depth %d)");
    }
    local_2c = FUN_00494b90(*(int *)pbVar4,0x2c);
    if (local_2c != (uint *)0x0) {
      memset(local_2c,0,0x2c);
      *(undefined1 *)local_2c = 0x76;
      *(undefined2 *)((int)local_2c + 0x1e) = 0xffff;
      local_2c[5] = 1;
    }
    FUN_00496a30(*(int *)pbVar4,(int)local_2c,local_c,local_1c);
    puVar16 = local_2c;
    if ((local_2c != (uint *)0x0) && (*(int *)(*(int *)pbVar4 + 0x5c) < (int)local_2c[5])) {
      FUN_004962b0((int *)pbVar4,(byte *)"Expression tree is too large (maximum depth %d)");
    }
    local_28 = CONCAT44(param_1[iVar3 * 4 + -0xc],puVar16);
    puVar12 = (undefined4 *)(param_1[iVar3 * 4 + 5] + param_1[iVar3 * 4 + 4]);
    break;
  case 0x67:
    puVar16 = (uint *)(param_1 + iVar3 * 4 + 4);
    if (pbVar4[0x12] == 0) {
      FUN_004962b0((int *)pbVar4,(byte *)"near \"%T\": syntax error");
      local_28 = (ulonglong)*puVar16 << 0x20;
      puVar12 = (undefined4 *)(param_1[iVar3 * 4 + 5] + *puVar16);
    }
    else {
      local_2c = FUN_00496510(*(int *)pbVar4,0x84,puVar16,1);
      FUN_00496a30(*(int *)pbVar4,(int)local_2c,(undefined4 *)0x0,(undefined4 *)0x0);
      if ((local_2c != (uint *)0x0) && (*(int *)(*(int *)pbVar4 + 0x5c) < (int)local_2c[5])) {
        FUN_004962b0((int *)pbVar4,(byte *)"Expression tree is too large (maximum depth %d)");
      }
      local_28 = CONCAT44(local_28._4_4_,local_2c);
      if (local_2c != (uint *)0x0) {
        FUN_0049ca30((char *)(*puVar16 + 1),local_2c + 6);
      }
      local_28 = CONCAT44(*puVar16,(undefined4 *)local_28);
      puVar12 = (undefined4 *)(param_1[iVar3 * 4 + 5] + *puVar16);
    }
    break;
  case 0x68:
    FUN_0048b7c0((undefined4 *)&local_28,(int *)pbVar4,0x85,param_1 + iVar3 * 4 + 4);
    FUN_004967a0((int *)pbVar4,(int)(undefined4 *)local_28);
    iVar5 = param_1[iVar3 * 4 + 4];
    local_28 = CONCAT44(iVar5,(undefined4 *)local_28);
    puVar12 = (undefined4 *)(param_1[iVar3 * 4 + 5] + iVar5);
    break;
  case 0x69:
    puVar12 = FUN_00496440((int *)pbVar4,(undefined4 *)param_1[iVar3 * 4 + -4],
                           param_1 + iVar3 * 4 + 4);
    local_28 = CONCAT44(param_1[iVar3 * 4 + -3],puVar12);
    puVar12 = (undefined4 *)(param_1[iVar3 * 4 + 5] + param_1[iVar3 * 4 + 4]);
    break;
  case 0x6a:
    puVar12 = (undefined4 *)param_1[iVar3 * 4 + -8];
    puVar9 = FUN_00496510(*(int *)pbVar4,0x25,param_1 + iVar3 * 4,1);
    FUN_00496a30(*(int *)pbVar4,(int)puVar9,puVar12,(undefined4 *)0x0);
    if ((puVar9 != (undefined4 *)0x0) && (*(int *)(*(int *)pbVar4 + 0x5c) < (int)puVar9[5])) {
      FUN_004962b0((int *)pbVar4,(byte *)"Expression tree is too large (maximum depth %d)");
    }
    local_28 = CONCAT44(param_1[iVar3 * 4 + -0x10],puVar9);
    puVar12 = (undefined4 *)(param_1[iVar3 * 4 + 5] + param_1[iVar3 * 4 + 4]);
    break;
  case 0x6b:
    if (((int *)param_1[iVar3 * 4] != (int *)0x0) &&
       (*(int *)(*(int *)pbVar4 + 0x68) < *(int *)param_1[iVar3 * 4])) {
      FUN_004962b0((int *)pbVar4,(byte *)"too many arguments on function %T");
    }
    puVar9 = FUN_00498830((int *)pbVar4,(int *)param_1[iVar3 * 4],param_1 + iVar3 * 4 + -0xc);
    puVar12 = (undefined4 *)(param_1[iVar3 * 4 + 5] + param_1[iVar3 * 4 + 4]);
    local_28 = CONCAT44(param_1[iVar3 * 4 + -0xc],puVar9);
    if ((param_1[iVar3 * 4 + -4] != 0) && (puVar9 != (undefined4 *)0x0)) {
      *(ushort *)((int)puVar9 + 2) = *(ushort *)((int)puVar9 + 2) | 0x10;
    }
    break;
  case 0x6c:
    puVar12 = FUN_00498830((int *)pbVar4,(int *)0x0,param_1 + iVar3 * 4 + -8);
    local_28 = CONCAT44(param_1[iVar3 * 4 + -8],puVar12);
    puVar12 = (undefined4 *)(param_1[iVar3 * 4 + 5] + param_1[iVar3 * 4 + 4]);
    break;
  case 0x6d:
    puVar12 = FUN_00498830((int *)pbVar4,(int *)0x0,param_1 + iVar3 * 4 + 4);
    if (puVar12 != (undefined4 *)0x0) {
      *(undefined1 *)puVar12 = 0x9b;
    }
    iVar5 = param_1[iVar3 * 4 + 4];
    local_28 = CONCAT44(iVar5,puVar12);
    puVar12 = (undefined4 *)(param_1[iVar3 * 4 + 5] + iVar5);
    break;
  case 0x6e:
    FUN_0048b780((undefined4 *)&local_28,(int *)pbVar4,(uint)*(byte *)((int)param_1 + iVar5 + -2),
                 param_1 + iVar3 * 4 + -4,param_1 + iVar3 * 4 + 4);
    puVar12 = (undefined4 *)local_20;
    break;
  case 0x6f:
    local_28 = *(ulonglong *)(param_1 + iVar3 * 4 + 4);
    puVar12 = (undefined4 *)0;
    break;
  case 0x70:
    local_28 = *(ulonglong *)(param_1 + iVar3 * 4 + 4);
    puVar12 = (undefined4 *)1;
    break;
  case 0x71:
    puVar16 = FUN_00498f00((int *)pbVar4,(uint *)0x0,(undefined4 *)param_1[iVar3 * 4 + 4]);
    puVar16 = FUN_00498f00((int *)pbVar4,puVar16,(undefined4 *)param_1[iVar3 * 4 + -4]);
    puVar9 = FUN_00498830((int *)pbVar4,(int *)puVar16,param_1 + iVar3 * 4);
    local_28 = CONCAT44(local_28._4_4_,puVar9);
    if (param_1[iVar3 * 4 + 2] != 0) {
      puVar9 = FUN_00494b90(*(int *)pbVar4,0x2c);
      if (puVar9 != (undefined4 *)0x0) {
        memset(puVar9,0,0x2c);
        *(undefined1 *)puVar9 = 0x13;
        *(undefined2 *)((int)puVar9 + 0x1e) = 0xffff;
        puVar9[5] = 1;
      }
      FUN_00496a30(*(int *)pbVar4,(int)puVar9,(undefined4 *)local_28,(undefined4 *)0x0);
      if ((puVar9 != (undefined4 *)0x0) && (*(int *)(*(int *)pbVar4 + 0x5c) < (int)puVar9[5])) {
        FUN_004962b0((int *)pbVar4,(byte *)"Expression tree is too large (maximum depth %d)");
      }
      local_28 = ZEXT48(puVar9);
    }
    iVar5 = param_1[iVar3 * 4 + -3];
    goto LAB_004c47cb;
  case 0x72:
    puVar16 = FUN_00498f00((int *)pbVar4,(uint *)0x0,(undefined4 *)param_1[iVar3 * 4 + -4]);
    puVar16 = FUN_00498f00((int *)pbVar4,puVar16,(undefined4 *)param_1[iVar3 * 4 + -0xc]);
    puVar16 = FUN_00498f00((int *)pbVar4,puVar16,(undefined4 *)param_1[iVar3 * 4 + 4]);
    puVar9 = FUN_00498830((int *)pbVar4,(int *)puVar16,param_1 + iVar3 * 4 + -8);
    local_28 = CONCAT44(local_28._4_4_,puVar9);
    if (param_1[iVar3 * 4 + -6] != 0) {
      puVar9 = FUN_00494b90(*(int *)pbVar4,0x2c);
      if (puVar9 != (undefined4 *)0x0) {
        memset(puVar9,0,0x2c);
        *(undefined1 *)puVar9 = 0x13;
        *(undefined2 *)((int)puVar9 + 0x1e) = 0xffff;
        puVar9[5] = 1;
      }
      FUN_00496a30(*(int *)pbVar4,(int)puVar9,(undefined4 *)local_28,(undefined4 *)0x0);
      if ((puVar9 != (undefined4 *)0x0) && (*(int *)(*(int *)pbVar4 + 0x5c) < (int)puVar9[5])) {
        FUN_004962b0((int *)pbVar4,(byte *)"Expression tree is too large (maximum depth %d)");
      }
      local_28 = ZEXT48(puVar9);
    }
    iVar5 = param_1[iVar3 * 4 + -0xb];
LAB_004c47cb:
    puVar12 = (undefined4 *)param_1[iVar3 * 4 + 6];
    local_28 = CONCAT44(iVar5,(undefined4 *)local_28);
    if (puVar9 != (undefined4 *)0x0) {
      *(ushort *)((int)puVar9 + 2) = *(ushort *)((int)puVar9 + 2) | 0x80;
    }
    break;
  case 0x73:
    FUN_0048b820((undefined4 *)&local_28,(int *)pbVar4,*(undefined1 *)((int)param_1 + iVar5 + 0xe),
                 param_1 + iVar3 * 4,param_1 + iVar3 * 4 + 4);
    puVar12 = (undefined4 *)local_20;
    break;
  case 0x74:
    FUN_0048b820((undefined4 *)&local_28,(int *)pbVar4,0x4a,param_1 + iVar3 * 4 + -4,
                 param_1 + iVar3 * 4 + 4);
    puVar12 = (undefined4 *)local_20;
    break;
  case 0x75:
    FUN_0048b780((undefined4 *)&local_28,(int *)pbVar4,0x46,param_1 + iVar3 * 4 + -4,
                 param_1 + iVar3 * 4 + 4);
    FUN_004709a0((int *)pbVar4,(char *)param_1[iVar3 * 4 + 4],(undefined1 *)(undefined4 *)local_28,
                 0x49);
    puVar12 = (undefined4 *)local_20;
    break;
  case 0x76:
    FUN_0048b780((undefined4 *)&local_28,(int *)pbVar4,0x92,param_1 + iVar3 * 4 + -8,
                 param_1 + iVar3 * 4 + 4);
    FUN_004709a0((int *)pbVar4,(char *)param_1[iVar3 * 4 + 4],(undefined1 *)(undefined4 *)local_28,
                 0x4a);
    puVar12 = (undefined4 *)local_20;
    break;
  case 0x77:
    FUN_0048b8b0((undefined4 *)&local_28,(int *)pbVar4,*(undefined1 *)((int)param_1 + iVar5 + -2),
                 param_1 + iVar3 * 4 + 4,param_1 + iVar3 * 4);
    puVar12 = (undefined4 *)local_20;
    break;
  case 0x78:
    FUN_0048b8b0((undefined4 *)&local_28,(int *)pbVar4,0x9c,param_1 + iVar3 * 4 + 4,
                 param_1 + iVar3 * 4);
    puVar12 = (undefined4 *)local_20;
    break;
  case 0x79:
    FUN_0048b8b0((undefined4 *)&local_28,(int *)pbVar4,0x9d,param_1 + iVar3 * 4 + 4,
                 param_1 + iVar3 * 4);
    puVar12 = (undefined4 *)local_20;
    break;
  case 0x7a:
    puVar16 = FUN_00498f00((int *)pbVar4,(uint *)0x0,(undefined4 *)param_1[iVar3 * 4 + -4]);
    local_2c = FUN_00498f00((int *)pbVar4,puVar16,(undefined4 *)param_1[iVar3 * 4 + 4]);
    local_c = (undefined4 *)param_1[iVar3 * 4 + -0xc];
    puVar12 = FUN_00494b90(*(int *)pbVar4,0x2c);
    if (puVar12 != (undefined4 *)0x0) {
      memset(puVar12,0,0x2c);
      *(undefined1 *)puVar12 = 0x47;
      *(undefined2 *)((int)puVar12 + 0x1e) = 0xffff;
      puVar12[5] = 1;
    }
    FUN_00496a30(*(int *)pbVar4,(int)puVar12,local_c,(undefined4 *)0x0);
    if ((puVar12 != (undefined4 *)0x0) && (*(int *)(*(int *)pbVar4 + 0x5c) < (int)puVar12[5])) {
      FUN_004962b0((int *)pbVar4,(byte *)"Expression tree is too large (maximum depth %d)");
    }
    local_28 = CONCAT44(local_28._4_4_,puVar12);
    if (puVar12 == (undefined4 *)0x0) {
      FUN_00499060(*(int *)pbVar4,(int *)local_2c);
    }
    else {
      puVar12[4] = local_2c;
    }
    if (param_1[iVar3 * 4 + -8] != 0) {
      local_2c = FUN_00494b90(*(int *)pbVar4,0x2c);
      if (local_2c != (uint *)0x0) {
        memset(local_2c,0,0x2c);
        *(undefined1 *)local_2c = 0x13;
        *(undefined2 *)((int)local_2c + 0x1e) = 0xffff;
        local_2c[5] = 1;
      }
      FUN_00496a30(*(int *)pbVar4,(int)local_2c,puVar12,(undefined4 *)0x0);
      puVar16 = local_2c;
      if ((local_2c != (uint *)0x0) && (*(int *)(*(int *)pbVar4 + 0x5c) < (int)local_2c[5])) {
        FUN_004962b0((int *)pbVar4,(byte *)"Expression tree is too large (maximum depth %d)");
      }
      local_28 = ZEXT48(puVar16);
    }
    local_28 = CONCAT44(param_1[iVar3 * 4 + -0xb],(undefined4 *)local_28);
    puVar12 = (undefined4 *)param_1[iVar3 * 4 + 6];
    break;
  case 0x7b:
    if (param_1[iVar3 * 4] == 0) {
      puVar12 = FUN_00496510(*(int *)pbVar4,0x81,&PTR_DAT_00569820 + param_1[iVar3 * 4 + -8] * 2,1);
      FUN_00496a30(*(int *)pbVar4,(int)puVar12,(undefined4 *)0x0,(undefined4 *)0x0);
      if ((puVar12 != (undefined4 *)0x0) && (*(int *)(*(int *)pbVar4 + 0x5c) < (int)puVar12[5])) {
        FUN_004962b0((int *)pbVar4,(byte *)"Expression tree is too large (maximum depth %d)");
      }
      local_28 = CONCAT44(local_28._4_4_,puVar12);
      FUN_00498790(*(int *)pbVar4,(undefined4 *)param_1[iVar3 * 4 + -0xc]);
      local_28 = CONCAT44(param_1[iVar3 * 4 + -0xb],(undefined4 *)local_28);
      puVar12 = (undefined4 *)(param_1[iVar3 * 4 + 5] + param_1[iVar3 * 4 + 4]);
      break;
    }
    local_c = (undefined4 *)param_1[iVar3 * 4 + -0xc];
    puVar12 = FUN_00494b90(*(int *)pbVar4,0x2c);
    if (puVar12 != (undefined4 *)0x0) {
      memset(puVar12,0,0x2c);
      *(undefined1 *)puVar12 = 0x48;
      *(undefined2 *)((int)puVar12 + 0x1e) = 0xffff;
      puVar12[5] = 1;
    }
    FUN_00496a30(*(int *)pbVar4,(int)puVar12,local_c,(undefined4 *)0x0);
    if ((puVar12 != (undefined4 *)0x0) && (*(int *)(*(int *)pbVar4 + 0x5c) < (int)puVar12[5])) {
      FUN_004962b0((int *)pbVar4,(byte *)"Expression tree is too large (maximum depth %d)");
    }
    local_28 = CONCAT44(local_28._4_4_,puVar12);
    if (puVar12 == (undefined4 *)0x0) {
      FUN_00499060(*(int *)pbVar4,(int *)param_1[iVar3 * 4]);
    }
    else {
      puVar12[4] = param_1[iVar3 * 4];
      FUN_004994a0((int *)pbVar4,(int)puVar12);
    }
    goto LAB_004c4b8a;
  case 0x7c:
    puVar12 = FUN_00494b90(*(int *)pbVar4,0x2c);
    if (puVar12 != (undefined4 *)0x0) {
      memset(puVar12,0,0x2c);
      *(undefined1 *)puVar12 = 0x74;
      *(undefined2 *)((int)puVar12 + 0x1e) = 0xffff;
      puVar12[5] = 1;
    }
    FUN_00496a30(*(int *)pbVar4,(int)puVar12,(undefined4 *)0x0,(undefined4 *)0x0);
    if ((puVar12 != (undefined4 *)0x0) && (*(int *)(*(int *)pbVar4 + 0x5c) < (int)puVar12[5])) {
      FUN_004962b0((int *)pbVar4,(byte *)"Expression tree is too large (maximum depth %d)");
    }
    local_28 = CONCAT44(local_28._4_4_,puVar12);
    if (puVar12 == (undefined4 *)0x0) {
      FUN_004a9650(*(int *)pbVar4,(undefined4 *)param_1[iVar3 * 4]);
      local_28 = CONCAT44(param_1[iVar3 * 4 + -4],(undefined4 *)local_28);
      puVar12 = (undefined4 *)(param_1[iVar3 * 4 + 5] + param_1[iVar3 * 4 + 4]);
    }
    else {
      puVar12[4] = param_1[iVar3 * 4];
      *(ushort *)((int)puVar12 + 2) = *(ushort *)((int)puVar12 + 2) | 0x800;
      FUN_004994a0((int *)pbVar4,(int)puVar12);
      local_28 = CONCAT44(param_1[iVar3 * 4 + -4],(undefined4 *)local_28);
      puVar12 = (undefined4 *)(param_1[iVar3 * 4 + 5] + param_1[iVar3 * 4 + 4]);
    }
    break;
  case 0x7d:
    local_c = (undefined4 *)param_1[iVar3 * 4 + -0xc];
    puVar12 = FUN_00494b90(*(int *)pbVar4,0x2c);
    if (puVar12 != (undefined4 *)0x0) {
      memset(puVar12,0,0x2c);
      *(undefined1 *)puVar12 = 0x48;
      *(undefined2 *)((int)puVar12 + 0x1e) = 0xffff;
      puVar12[5] = 1;
    }
    FUN_00496a30(*(int *)pbVar4,(int)puVar12,local_c,(undefined4 *)0x0);
    if ((puVar12 != (undefined4 *)0x0) && (*(int *)(*(int *)pbVar4 + 0x5c) < (int)puVar12[5])) {
      FUN_004962b0((int *)pbVar4,(byte *)"Expression tree is too large (maximum depth %d)");
    }
    local_28 = CONCAT44(local_28._4_4_,puVar12);
    if (puVar12 == (undefined4 *)0x0) {
      FUN_004a9650(*(int *)pbVar4,(undefined4 *)param_1[iVar3 * 4]);
    }
    else {
      puVar12[4] = param_1[iVar3 * 4];
      *(ushort *)((int)puVar12 + 2) = *(ushort *)((int)puVar12 + 2) | 0x800;
      FUN_004994a0((int *)pbVar4,(int)puVar12);
    }
LAB_004c4b8a:
    if (param_1[iVar3 * 4 + -8] != 0) {
      local_2c = FUN_00494b90(*(int *)pbVar4,0x2c);
      if (local_2c != (uint *)0x0) {
        memset(local_2c,0,0x2c);
        *(undefined1 *)local_2c = 0x13;
        *(undefined2 *)((int)local_2c + 0x1e) = 0xffff;
        local_2c[5] = 1;
      }
      FUN_00496a30(*(int *)pbVar4,(int)local_2c,puVar12,(undefined4 *)0x0);
      puVar16 = local_2c;
      if ((local_2c != (uint *)0x0) && (*(int *)(*(int *)pbVar4 + 0x5c) < (int)local_2c[5])) {
        FUN_004962b0((int *)pbVar4,(byte *)"Expression tree is too large (maximum depth %d)");
      }
      local_28 = ZEXT48(puVar16);
    }
    local_28 = CONCAT44(param_1[iVar3 * 4 + -0xb],(undefined4 *)local_28);
    puVar12 = (undefined4 *)(param_1[iVar3 * 4 + 5] + param_1[iVar3 * 4 + 4]);
    break;
  case 0x7e:
    local_2c = (uint *)FUN_004a9ac0(*(int *)pbVar4,(short *)0x0,param_1 + iVar3 * 4,
                                    param_1 + iVar3 * 4 + 4);
    local_c = (undefined4 *)param_1[iVar3 * 4 + -8];
    puVar12 = FUN_00494b90(*(int *)pbVar4,0x2c);
    if (puVar12 != (undefined4 *)0x0) {
      memset(puVar12,0,0x2c);
      *(undefined1 *)puVar12 = 0x48;
      *(undefined2 *)((int)puVar12 + 0x1e) = 0xffff;
      puVar12[5] = 1;
    }
    FUN_00496a30(*(int *)pbVar4,(int)puVar12,local_c,(undefined4 *)0x0);
    if ((puVar12 != (undefined4 *)0x0) && (*(int *)(*(int *)pbVar4 + 0x5c) < (int)puVar12[5])) {
      FUN_004962b0((int *)pbVar4,(byte *)"Expression tree is too large (maximum depth %d)");
    }
    local_28 = CONCAT44(local_28._4_4_,puVar12);
    if (puVar12 == (undefined4 *)0x0) {
      FUN_004a9cb0(*(int *)pbVar4,(short *)local_2c);
    }
    else {
      uVar8 = FUN_004a97d0((int *)pbVar4,(int *)0x0,local_2c,0,0,0,0,0,0,0);
      puVar12[4] = uVar8;
      *(ushort *)((int)puVar12 + 2) = *(ushort *)((int)puVar12 + 2) | 0x800;
      FUN_004994a0((int *)pbVar4,(int)puVar12);
    }
    if (param_1[iVar3 * 4 + -4] != 0) {
      local_2c = FUN_00494b90(*(int *)pbVar4,0x2c);
      if (local_2c != (uint *)0x0) {
        memset(local_2c,0,0x2c);
        *(undefined1 *)local_2c = 0x13;
        *(undefined2 *)((int)local_2c + 0x1e) = 0xffff;
        local_2c[5] = 1;
      }
      FUN_00496a30(*(int *)pbVar4,(int)local_2c,puVar12,(undefined4 *)0x0);
      puVar16 = local_2c;
      if ((local_2c != (uint *)0x0) && (*(int *)(*(int *)pbVar4 + 0x5c) < (int)local_2c[5])) {
        FUN_004962b0((int *)pbVar4,(byte *)"Expression tree is too large (maximum depth %d)");
      }
      local_28 = ZEXT48(puVar16);
    }
    local_28 = CONCAT44(param_1[iVar3 * 4 + -7],(undefined4 *)local_28);
    if (param_1[iVar3 * 4 + 4] == 0) {
      puVar12 = (undefined4 *)(param_1[iVar3 * 4 + 1] + param_1[iVar3 * 4]);
    }
    else {
      puVar12 = (undefined4 *)(param_1[iVar3 * 4 + 5] + param_1[iVar3 * 4 + 4]);
    }
    break;
  case 0x7f:
    puVar12 = FUN_00494b90(*(int *)pbVar4,0x2c);
    if (puVar12 != (undefined4 *)0x0) {
      memset(puVar12,0,0x2c);
      *(undefined1 *)puVar12 = 0x14;
      *(undefined2 *)((int)puVar12 + 0x1e) = 0xffff;
      puVar12[5] = 1;
    }
    FUN_00496a30(*(int *)pbVar4,(int)puVar12,(undefined4 *)0x0,(undefined4 *)0x0);
    if ((puVar12 != (undefined4 *)0x0) && (*(int *)(*(int *)pbVar4 + 0x5c) < (int)puVar12[5])) {
      FUN_004962b0((int *)pbVar4,(byte *)"Expression tree is too large (maximum depth %d)");
    }
    local_28 = CONCAT44(local_28._4_4_,puVar12);
    if (puVar12 == (undefined4 *)0x0) {
      FUN_004a9650(*(int *)pbVar4,(undefined4 *)param_1[iVar3 * 4]);
      local_28 = CONCAT44(param_1[iVar3 * 4 + -8],(undefined4 *)local_28);
      puVar12 = (undefined4 *)(param_1[iVar3 * 4 + 5] + param_1[iVar3 * 4 + 4]);
    }
    else {
      puVar12[4] = param_1[iVar3 * 4];
      *(ushort *)((int)puVar12 + 2) = *(ushort *)((int)puVar12 + 2) | 0x800;
      FUN_004994a0((int *)pbVar4,(int)puVar12);
      local_28 = CONCAT44(param_1[iVar3 * 4 + -8],(undefined4 *)local_28);
      puVar12 = (undefined4 *)(param_1[iVar3 * 4 + 5] + param_1[iVar3 * 4 + 4]);
    }
    break;
  case 0x80:
    local_c = (undefined4 *)param_1[iVar3 * 4];
    puVar12 = (undefined4 *)param_1[iVar3 * 4 + -8];
    puVar9 = FUN_00494b90(*(int *)pbVar4,0x2c);
    if (puVar9 != (undefined4 *)0x0) {
      memset(puVar9,0,0x2c);
      *(undefined1 *)puVar9 = 0x86;
      *(undefined2 *)((int)puVar9 + 0x1e) = 0xffff;
      puVar9[5] = 1;
    }
    FUN_00496a30(*(int *)pbVar4,(int)puVar9,puVar12,local_c);
    if ((puVar9 != (undefined4 *)0x0) && (*(int *)(*(int *)pbVar4 + 0x5c) < (int)puVar9[5])) {
      FUN_004962b0((int *)pbVar4,(byte *)"Expression tree is too large (maximum depth %d)");
    }
    local_28 = CONCAT44(local_28._4_4_,puVar9);
    if (puVar9 == (undefined4 *)0x0) {
      FUN_00499060(*(int *)pbVar4,(int *)param_1[iVar3 * 4 + -4]);
      local_28 = CONCAT44(param_1[iVar3 * 4 + -0xc],(undefined4 *)local_28);
      puVar12 = (undefined4 *)(param_1[iVar3 * 4 + 5] + param_1[iVar3 * 4 + 4]);
    }
    else {
      puVar9[4] = param_1[iVar3 * 4 + -4];
      FUN_004994a0((int *)pbVar4,(int)puVar9);
      local_28 = CONCAT44(param_1[iVar3 * 4 + -0xc],(undefined4 *)local_28);
      puVar12 = (undefined4 *)(param_1[iVar3 * 4 + 5] + param_1[iVar3 * 4 + 4]);
    }
    break;
  case 0x81:
    puVar12 = (undefined4 *)param_1[iVar3 * 4 + -4];
    puVar16 = (uint *)param_1[iVar3 * 4 + -0xc];
    goto LAB_004c4ff4;
  case 0x82:
    puVar12 = (undefined4 *)param_1[iVar3 * 4 + -4];
    puVar16 = (uint *)0x0;
LAB_004c4ff4:
    puVar16 = FUN_00498f00((int *)pbVar4,puVar16,puVar12);
    puVar16 = FUN_00498f00((int *)pbVar4,puVar16,(undefined4 *)param_1[iVar3 * 4 + 4]);
    local_28 = CONCAT44(local_28._4_4_,puVar16);
    puVar12 = local_1c;
    break;
  case 0x83:
    puVar16 = FUN_00498f00((int *)pbVar4,(uint *)param_1[iVar3 * 4 + -4],
                           (undefined4 *)param_1[iVar3 * 4 + 4]);
    local_28 = CONCAT44(local_28._4_4_,puVar16);
    puVar12 = local_1c;
    break;
  case 0x84:
    puVar16 = FUN_00498f00((int *)pbVar4,(uint *)0x0,(undefined4 *)param_1[iVar3 * 4 + 4]);
    local_28 = CONCAT44(local_28._4_4_,puVar16);
    puVar12 = local_1c;
    break;
  case 0x85:
    iVar5 = param_1[iVar3 * 4 + -0x18];
    piVar6 = param_1 + iVar3 * 4 + 4;
    uVar18 = 0;
    piVar17 = param_1 + iVar3 * 4 + -0x24;
    iVar15 = param_1[iVar3 * 4 + -0x20];
    puVar16 = (uint *)param_1[iVar3 * 4];
    psVar10 = FUN_004a9ac0(*(int *)pbVar4,(short *)0x0,param_1 + iVar3 * 4 + -8,(int *)0x0);
    FUN_004940f0((int *)pbVar4,param_1 + iVar3 * 4 + -0x14,(int)(param_1 + iVar3 * 4 + -0x10),
                 psVar10,puVar16,iVar15,(int)piVar17,piVar6,uVar18,iVar5);
    puVar12 = local_1c;
    break;
  case 0x86:
    local_28 = 2;
    break;
  case 0x87:
    puVar12 = FUN_00496440((int *)pbVar4,(undefined4 *)0x0,param_1 + iVar3 * 4);
    puVar16 = (uint *)param_1[iVar3 * 4 + -0xc];
    goto LAB_004c50a1;
  case 0x88:
    puVar12 = FUN_00496440((int *)pbVar4,(undefined4 *)0x0,param_1 + iVar3 * 4);
    puVar16 = (uint *)0x0;
LAB_004c50a1:
    puVar16 = FUN_00498f00((int *)pbVar4,puVar16,puVar12);
    local_28 = CONCAT44(local_28._4_4_,puVar16);
    FUN_004992e0((int *)pbVar4,(int *)puVar16,param_1 + iVar3 * 4 + -4,1);
    FUN_00498fb0((int *)pbVar4,(int *)puVar16);
    puVar12 = local_1c;
    if (puVar16 != (uint *)0x0) {
      *(char *)((puVar16[2] - 8) + *puVar16 * 0x14) = (char)param_1[iVar3 * 4 + 4];
    }
    break;
  case 0x89:
    FUN_00495600((int *)pbVar4,(short *)param_1[iVar3 * 4 + 4],param_1[iVar3 * 4]);
    puVar12 = local_1c;
    break;
  case 0x8a:
    FUN_004ae1b0((int *)pbVar4);
    puVar12 = local_1c;
    break;
  case 0x8b:
    FUN_004a3bb0((int *)pbVar4,param_1 + iVar3 * 4,param_1 + iVar3 * 4 + 4,(undefined4 *)0x0,0);
    puVar12 = local_1c;
    break;
  case 0x8c:
    iVar5 = 0;
    goto LAB_004c5133;
  case 0x8d:
    FUN_004a3bb0((int *)pbVar4,param_1 + iVar3 * 4 + -0xc,param_1 + iVar3 * 4 + -8,
                 param_1 + iVar3 * 4,0);
    puVar12 = local_1c;
    break;
  case 0x8e:
    iVar5 = 1;
LAB_004c5133:
    FUN_004a3bb0((int *)pbVar4,param_1 + iVar3 * 4 + -8,param_1 + iVar3 * 4 + -4,
                 param_1 + iVar3 * 4 + 4,iVar5);
    puVar12 = local_1c;
    break;
  case 0x8f:
    FUN_004a3bb0((int *)pbVar4,param_1 + iVar3 * 4 + -0xc,param_1 + iVar3 * 4 + -8,
                 param_1 + iVar3 * 4,1);
    puVar12 = local_1c;
    break;
  case 0x90:
    local_10 = param_1[iVar3 * 4 + -8];
    local_c = (undefined4 *)((param_1[iVar3 * 4 + 5] + param_1[iVar3 * 4 + 4]) - local_10);
    FUN_0049a050((int *)pbVar4,(undefined4 *)param_1[iVar3 * 4],&local_10);
    puVar12 = local_1c;
    break;
  case 0x91:
    FUN_0048e1f0(pbVar4,(byte *)(param_1 + iVar3 * 4 + -0x18),(int)(param_1 + iVar3 * 4 + -0x14),
                 param_1[iVar3 * 4 + -0x10],(char)param_1[iVar3 * 4 + -0xc],
                 (int *)param_1[iVar3 * 4 + -0xb],(short *)param_1[iVar3 * 4 + -4],
                 (undefined4 *)param_1[iVar3 * 4 + 4],param_1[iVar3 * 4 + -0x24],
                 param_1[iVar3 * 4 + -0x1c]);
    puVar12 = local_1c;
    if (param_1[iVar3 * 4 + -0x13] == 0) {
      local_28 = *(ulonglong *)(param_1 + iVar3 * 4 + -0x18);
    }
    else {
      local_28 = *(ulonglong *)(param_1 + iVar3 * 4 + -0x14);
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
    local_28 = (ulonglong)*(byte *)((int)param_1 + iVar5 + 0xe);
    break;
  case 0x96:
    local_28 = CONCAT44(param_1[iVar3 * 4 + 4],0x6b);
    break;
  case 0x97:
    *(int *)(*(int *)(param_1[iVar3 * 4 + -4] + 0x24) + 0x20) = param_1[iVar3 * 4];
    *(int *)(param_1[iVar3 * 4 + -4] + 0x24) = param_1[iVar3 * 4];
    local_28 = (ulonglong)(uint)param_1[iVar3 * 4 + -4];
    break;
  case 0x98:
    *(int *)(param_1[iVar3 * 4] + 0x24) = param_1[iVar3 * 4];
  case 0x40:
    local_28 = (ulonglong)(uint)param_1[iVar3 * 4];
    break;
  case 0x99:
    local_28 = *(ulonglong *)(param_1 + iVar3 * 4 + 4);
    FUN_004962b0((int *)pbVar4,
                 (byte *)
                 "qualified table names are not allowed on INSERT, UPDATE, and DELETE statements within triggers"
                );
    puVar12 = local_1c;
    break;
  case 0x9a:
    FUN_004962b0((int *)pbVar4,
                 (byte *)
                 "the INDEXED BY clause is not allowed on UPDATE or DELETE statements within triggers"
                );
    puVar12 = local_1c;
    break;
  case 0x9b:
    FUN_004962b0((int *)pbVar4,
                 (byte *)
                 "the NOT INDEXED clause is not allowed on UPDATE or DELETE statements within triggers"
                );
    puVar12 = local_1c;
    break;
  case 0x9c:
    puVar12 = FUN_004ab040(*(int *)pbVar4,param_1 + iVar3 * 4 + -0xc,(int *)param_1[iVar3 * 4],
                           (undefined4 *)param_1[iVar3 * 4 + 4],(char)param_1[iVar3 * 4 + -0x10]);
    local_28 = CONCAT44(local_28._4_4_,puVar12);
    puVar12 = local_1c;
    break;
  case 0x9d:
    puVar12 = FUN_004aaea0(*(int *)pbVar4,param_1 + iVar3 * 4 + -4,(int *)param_1[iVar3 * 4],
                           (int *)param_1[iVar3 * 4 + 4],(undefined4 *)param_1[iVar3 * 4 + 5],
                           (char)param_1[iVar3 * 4 + -0xc]);
    local_28 = CONCAT44(local_28._4_4_,puVar12);
    puVar12 = local_1c;
    break;
  case 0x9e:
    puVar12 = FUN_004aaea0(*(int *)pbVar4,param_1 + iVar3 * 4 + -4,(int *)param_1[iVar3 * 4],
                           (int *)0x0,(undefined4 *)param_1[iVar3 * 4 + 4],
                           (char)param_1[iVar3 * 4 + -0xc]);
    local_28 = CONCAT44(local_28._4_4_,puVar12);
    puVar12 = local_1c;
    break;
  case 0x9f:
    puVar12 = FUN_004aae20(*(int *)pbVar4,param_1 + iVar3 * 4 + -4,
                           (undefined4 *)param_1[iVar3 * 4 + 4]);
    local_28 = CONCAT44(local_28._4_4_,puVar12);
    puVar12 = local_1c;
    break;
  case 0xa0:
    puVar11 = FUN_004aafd0(*(int *)pbVar4,(undefined4 *)param_1[iVar3 * 4 + 4]);
    local_28 = CONCAT44(local_28._4_4_,puVar11);
    puVar12 = local_1c;
    break;
  case 0xa1:
    puVar12 = FUN_00494b90(*(int *)pbVar4,0x2c);
    if (puVar12 != (undefined4 *)0x0) {
      memset(puVar12,0,0x2c);
      *(undefined1 *)puVar12 = 0x38;
      *(undefined2 *)((int)puVar12 + 0x1e) = 0xffff;
      puVar12[5] = 1;
    }
    FUN_00496a30(*(int *)pbVar4,(int)puVar12,(undefined4 *)0x0,(undefined4 *)0x0);
    if ((puVar12 != (undefined4 *)0x0) && (*(int *)(*(int *)pbVar4 + 0x5c) < (int)puVar12[5])) {
      FUN_004962b0((int *)pbVar4,(byte *)"Expression tree is too large (maximum depth %d)");
    }
    if (puVar12 != (undefined4 *)0x0) {
      *(undefined1 *)((int)puVar12 + 1) = 4;
    }
    local_28 = CONCAT44(param_1[iVar3 * 4 + -8],puVar12);
    puVar12 = (undefined4 *)(param_1[iVar3 * 4 + 5] + param_1[iVar3 * 4 + 4]);
    break;
  case 0xa2:
    puVar12 = FUN_00496510(*(int *)pbVar4,0x38,param_1 + iVar3 * 4,1);
    FUN_00496a30(*(int *)pbVar4,(int)puVar12,(undefined4 *)0x0,(undefined4 *)0x0);
    if ((puVar12 != (undefined4 *)0x0) && (*(int *)(*(int *)pbVar4 + 0x5c) < (int)puVar12[5])) {
      FUN_004962b0((int *)pbVar4,(byte *)"Expression tree is too large (maximum depth %d)");
    }
    if (puVar12 != (undefined4 *)0x0) {
      *(char *)((int)puVar12 + 1) = (char)param_1[iVar3 * 4 + -8];
    }
    local_28 = CONCAT44(param_1[iVar3 * 4 + -0x10],puVar12);
    puVar12 = (undefined4 *)(param_1[iVar3 * 4 + 5] + param_1[iVar3 * 4 + 4]);
    break;
  case 0xa3:
    local_28 = 3;
    break;
  case 0xa4:
    FUN_00495a40((int *)pbVar4,(short *)param_1[iVar3 * 4 + 4],param_1[iVar3 * 4]);
    puVar12 = local_1c;
    break;
  case 0xa5:
    FUN_00473230((int *)pbVar4,0x18,(int *)&DAT_00569bb8,(char *)param_1[iVar3 * 4 + -8],
                 (byte *)param_1[iVar3 * 4 + -8],(byte *)param_1[iVar3 * 4],
                 (byte *)param_1[iVar3 * 4 + 4]);
    puVar12 = local_1c;
    break;
  case 0xa6:
    FUN_00473230((int *)pbVar4,0x19,(int *)&DAT_00569b4c,(char *)param_1[iVar3 * 4 + 4],(byte *)0x0,
                 (byte *)0x0,(byte *)param_1[iVar3 * 4 + 4]);
    puVar12 = local_1c;
    break;
  case 0xa7:
    FUN_004a6750((int *)pbVar4,(undefined4 *)0x0,(int *)0x0);
    puVar12 = local_1c;
    break;
  case 0xa8:
    FUN_004a6750((int *)pbVar4,param_1 + iVar3 * 4,param_1 + iVar3 * 4 + 4);
    puVar12 = local_1c;
    break;
  case 0xa9:
    FUN_0048c930(param_1,(int *)pbVar4,(undefined4 *)0x0,0);
    puVar12 = local_1c;
    break;
  case 0xaa:
    FUN_0048c930(param_1,(int *)pbVar4,param_1 + iVar3 * 4,(int)(param_1 + iVar3 * 4 + 4));
    puVar12 = local_1c;
    break;
  case 0xab:
    FUN_0048c4f0((int *)pbVar4,(short *)param_1[iVar3 * 4 + -8],param_1 + iVar3 * 4 + 4);
    puVar12 = local_1c;
    break;
  case 0xac:
    FUN_0048c240((int *)pbVar4,param_1 + iVar3 * 4 + 4);
    puVar12 = local_1c;
    break;
  case 0xad:
    *(undefined1 *)(*(int *)pbVar4 + 0xea) = 0;
    FUN_0048c030((int *)pbVar4,(short *)param_1[iVar3 * 4 + 4]);
    puVar12 = local_1c;
    break;
  case 0xae:
    FUN_004b9b90((int *)pbVar4,(int *)0x0);
    puVar12 = local_1c;
    break;
  case 0xaf:
    FUN_004b9b90((int *)pbVar4,param_1 + iVar3 * 4 + 4);
    puVar12 = local_1c;
    break;
  case 0xb0:
    FUN_004b9790((int *)pbVar4,param_1 + iVar3 * 4 + -8,(int)(param_1 + iVar3 * 4 + -4),
                 param_1 + iVar3 * 4 + 4,param_1[iVar3 * 4 + -0xc]);
    puVar12 = local_1c;
    break;
  case 0xb1:
    FUN_0046b680((int *)pbVar4);
    pbVar4[0x218] = 0;
    pbVar4[0x219] = 0;
    pbVar4[0x21a] = 0;
    pbVar4[0x21b] = 0;
    pbVar4[0x21c] = 0;
    pbVar4[0x21d] = 0;
    pbVar4[0x21e] = 0;
    pbVar4[0x21f] = 0;
    puVar12 = local_1c;
    break;
  case 0xb2:
    FUN_004b96b0((int)pbVar4,param_1 + iVar3 * 4 + 4);
    puVar12 = local_1c;
  }
switchD_004c36ca_caseD_b3:
  bVar1 = (&DAT_0056c810)[param_2 * 2];
  local_1c = (undefined4 *)(uint)bVar1;
  uVar13 = (uint)(byte)(&DAT_0056c811)[param_2 * 2];
  *param_1 = *param_1 - uVar13;
  puVar14 = (ushort *)(param_1 + iVar3 * 4 + uVar13 * -4 + 3);
  uVar2 = *(ushort *)
           (&DAT_0056aa08 +
           ((int)*(short *)(&DAT_0056bfe0 + (uint)*puVar14 * 2) + (int)local_1c) * 2);
  if (0x272 < uVar2) {
    FUN_004c3460(param_1);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar3 = *param_1 + 1;
  if (uVar13 == 0) {
    *param_1 = iVar3;
    if (iVar3 < 100) {
      *(ushort *)(param_1 + iVar3 * 4 + 3) = uVar2;
      *(ulonglong *)(param_1 + iVar3 * 4 + 4) = local_28;
      *(byte *)((int)param_1 + iVar3 * 0x10 + 0xe) = bVar1;
      param_1[iVar3 * 4 + 6] = (int)puVar12;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    FUN_004c3410(param_1);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  *param_1 = iVar3;
  *(ulonglong *)(puVar14 + 10) = local_28;
  puVar14[8] = uVar2;
  *(byte *)(puVar14 + 9) = bVar1;
  *(undefined4 **)(puVar14 + 0xe) = puVar12;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004c5b30 @ 004c5b30  kind=gamemisc  attributed-by=none  size=210 */

void __cdecl FUN_004c5b30(undefined1 *param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  undefined1 *puVar5;
  
  iVar2 = *(int *)(param_1 + 0x34);
  iVar3 = *(int *)(param_1 + 0x38);
  bVar1 = param_1[5];
  if ((*(byte *)(iVar2 + 0x16) & 4) != 0) {
    memset((void *)((uint)bVar1 + iVar3),0,*(int *)(iVar2 + 0x24) - (uint)bVar1);
  }
  puVar5 = (undefined1 *)((uint)bVar1 + iVar3);
  *puVar5 = (char)param_2;
  uVar4 = (~(ushort)(param_2 >> 3) & 1) * 4 + 8 + (ushort)bVar1;
  *(undefined4 *)(puVar5 + 1) = 0;
  puVar5[7] = 0;
  puVar5[5] = (char)((uint)*(undefined4 *)(iVar2 + 0x24) >> 8);
  puVar5[6] = *(undefined1 *)(iVar2 + 0x24);
  *(ushort *)(param_1 + 0xe) = *(short *)(iVar2 + 0x24) - uVar4;
  FUN_00476810((int)param_1,param_2);
  param_1[5] = bVar1;
  *(ushort *)(param_1 + 0xc) = uVar4;
  *(int *)(param_1 + 0x3c) = *(int *)(iVar2 + 0x24) + iVar3;
  *(uint *)(param_1 + 0x40) = (uint)uVar4 + iVar3;
  param_1[1] = 0;
  *(short *)(param_1 + 0x12) = *(short *)(iVar2 + 0x20) + -1;
  *(undefined2 *)(param_1 + 0x10) = 0;
  *param_1 = 1;
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


/* FUN_004d7ae0 @ 004d7ae0  kind=gamemisc  attributed-by=none  size=364 */

void FUN_004d7ae0(void)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  void *this;
  int *piVar8;
  int *local_20;
  undefined4 local_1c;
  int *local_18;
  void *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00554a68;
  local_10 = ExceptionList;
  uVar6 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1c = 0;
  local_20 = (int *)FUN_004ce660((undefined4 *)0x0,(undefined4 *)0x0);
  local_8 = 0;
  piVar1 = (int *)((int)local_14 + 4);
  piVar8 = (int *)**(int **)((int)local_14 + 4);
  this = local_14;
  local_18 = piVar8;
  if (piVar8 != *(int **)((int)local_14 + 4)) {
    do {
      iVar3 = piVar8[6];
      if (((((iVar3 != 0) && (*(char *)(iVar3 + 0x60) != '\0')) &&
           (*(char *)(iVar3 + 0x60) != '\x05')) &&
          ((iVar7 = FUN_00406290(this,*(uint *)(iVar3 + 0x1b0),*(uint *)(iVar3 + 0x1b4)),
           this = local_14, iVar7 != 0 && (iVar3 = *(int *)(iVar3 + 0x1b8), -1 < iVar3)))) &&
         (iVar3 < *(int *)(iVar7 + 0x1c) - *(int *)(iVar7 + 0x18) >> 2)) {
        *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x18) + iVar3 * 4) + 0x38) = 0;
        FUN_004d6620(&local_20,&local_18);
        this = local_14;
        if ((undefined4 *)piVar8[6] != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)piVar8[6])(1,uVar6);
          this = local_14;
        }
      }
      if (*(char *)((int)piVar8 + 0xd) == '\0') {
        piVar4 = (int *)piVar8[2];
        if (*(char *)((int)piVar4 + 0xd) == '\0') {
          cVar2 = *(char *)(*piVar4 + 0xd);
          piVar8 = piVar4;
          piVar4 = (int *)*piVar4;
          while (local_18 = piVar8, cVar2 == '\0') {
            cVar2 = *(char *)(*piVar4 + 0xd);
            piVar8 = piVar4;
            piVar4 = (int *)*piVar4;
          }
        }
        else {
          cVar2 = *(char *)(piVar8[1] + 0xd);
          piVar5 = (int *)piVar8[1];
          piVar4 = piVar8;
          while ((piVar8 = piVar5, local_18 = piVar8, cVar2 == '\0' && (piVar4 == (int *)piVar8[2]))
                ) {
            cVar2 = *(char *)(piVar8[1] + 0xd);
            piVar5 = (int *)piVar8[1];
            piVar4 = piVar8;
          }
        }
      }
    } while (piVar8 != (int *)*piVar1);
  }
  piVar4 = local_20;
  for (piVar8 = (int *)*local_20; piVar8 != piVar4; piVar8 = (int *)*piVar8) {
    FUN_0040a1d0(piVar1,&local_18,(int *)piVar8[2]);
  }
  piVar1 = (int *)*piVar4;
  *piVar4 = (int)piVar4;
  piVar4[1] = (int)piVar4;
  while (piVar1 != piVar4) {
    piVar8 = (int *)*piVar1;
    operator_delete(piVar1);
    piVar1 = piVar8;
  }
  operator_delete(piVar4);
  ExceptionList = local_10;
  return;
}


/* FUN_004d81b0 @ 004d81b0  kind=gamemisc  attributed-by=none  size=494 */

void __thiscall FUN_004d81b0(void *this,int param_1)

{
  char *pcVar1;
  basic_ostream<char,std::char_traits<char>_> *pbVar2;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar3;
  undefined4 *puVar4;
  int iVar5;
  int in_stack_ffffff0c;
  undefined1 local_f0 [16];
  undefined **local_e0;
  basic_streambuf<char,std::char_traits<char>_> local_d8 [14];
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_88;
  undefined4 local_40;
  void *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  void *local_2c [3];
  undefined1 local_20 [8];
  uint local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00554bb0;
  local_10 = ExceptionList;
  pcVar1 = (char *)(DAT_00583cc8 ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_40 = 0;
  local_14 = pcVar1;
  if (((*(int *)((int)this + 0xa4) != 0) && (param_1 != 0)) &&
     ((*(char *)(param_1 + 0x75) != '\0' || (*(int *)(param_1 + 0x68) != *(int *)(param_1 + 0x6c))))
     ) {
    local_f0._0_4_ = &PTR_0055b2c0;
    local_e0 = &PTR_00571718;
    local_88 = _vftable__exref;
    local_8 = 0;
    local_40 = 1;
    std::basic_iostream<char,std::char_traits<char>_>::basic_iostream<char,std::char_traits<char>_>
              ((basic_iostream<char,std::char_traits<char>_> *)local_f0,
               (basic_streambuf<char,std::char_traits<char>_> *)local_d8);
    local_8 = 1;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> */
    *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
     (local_f0 + *(int *)(local_f0._0_4_ + 4)) =
         &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    *(int *)(&local_d8[-7].field_0x0 + *(int *)(local_f0._0_4_ + 4)) =
         *(int *)(local_f0._0_4_ + 4) + -0x68;
    std::basic_streambuf<char,std::char_traits<char>_>::
    basic_streambuf<char,std::char_traits<char>_>(local_d8);
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> */
    local_d8[0] = (basic_streambuf<char,std::char_traits<char>_>)
                  &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    local_a0 = 0;
    local_9c = 0;
    iVar5 = *(int *)(param_1 + 100);
    local_8 = 3;
    pbVar2 = FUN_00412710((basic_ostream<char,std::char_traits<char>_> *)&local_e0,"zone");
    pbVar3 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                       ((basic_ostream<char,std::char_traits<char>_> *)pbVar2,iVar5);
    pbVar2 = FUN_00412710((basic_ostream<char,std::char_traits<char>_> *)pbVar3,pcVar1);
    std::basic_ostream<char,std::char_traits<char>_>::operator<<
              ((basic_ostream<char,std::char_traits<char>_> *)pbVar2,in_stack_ffffff0c);
    local_3c = (void *)0x0;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_8._0_1_ = 4;
    puVar4 = FUN_0041d800(local_20,&local_3c);
    FUN_0041faa0(puVar4,param_1);
    puVar4 = FUN_004d8f70(local_f0,local_2c);
    local_8 = CONCAT31(local_8._1_3_,5);
    FUN_00413210((void *)((int)this + 0xac),puVar4,(int *)&local_3c);
    if (0xf < local_18) {
      operator_delete(local_2c[0]);
    }
    if (local_3c != (void *)0x0) {
      operator_delete(local_3c);
      local_3c = (void *)0x0;
      local_38 = 0;
      local_34 = 0;
    }
    FUN_004ce3e0(local_f0);
  }
  ExceptionList = local_10;
  __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004d863a @ 004d863a  kind=gamemisc  attributed-by=none  size=870 */

void __thiscall FUN_004d863a(void *this,char *param_1,undefined4 param_2,char *param_3)

{
  byte bVar1;
  void *pvVar2;
  code *pcVar3;
  basic_ostream<char,std::char_traits<char>_> *pbVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int *unaff_EBX;
  uint unaff_EBP;
  int unaff_ESI;
  int iVar9;
  int unaff_EDI;
  char *unaff_retaddr;
  
  do {
    do {
      FUN_004d81b0(this,*(int *)(*unaff_EBX + unaff_ESI));
      this = *(void **)(unaff_EBP - 0x2c);
      unaff_ESI = unaff_ESI + 4;
      unaff_EDI = unaff_EDI + -1;
    } while (unaff_EDI != 0);
    if (0x14017 < unaff_ESI) {
      iVar9 = *(int *)(unaff_EBP - 0x44);
      do {
        if ((undefined4 *)*unaff_EBX != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)*unaff_EBX)(1);
        }
        *unaff_EBX = 0;
        do {
          if ((void *)unaff_EBX[0x100000] != (void *)0x0) {
            operator_delete((void *)unaff_EBX[0x100000]);
            unaff_EBX[0x100000] = 0;
          }
          this = *(void **)(unaff_EBP - 0x2c);
          unaff_EBX = unaff_EBX + 1;
          iVar9 = iVar9 + -1;
          *(int *)(unaff_EBP - 0x44) = iVar9;
          if (iVar9 == 0) {
            piVar5 = (int *)(unaff_EBP - 0x30);
            *piVar5 = *piVar5 + -1;
            if (*piVar5 == 0) {
              FUN_00412c50((int)this + 0xac);
              piVar5 = *(int **)(unaff_EBP - 0x48);
              *(undefined4 *)((int)this + 0x8000f0) = 0x4b002080;
              *(undefined4 *)((int)this + 0x8000f4) = 0x4b002080;
              *(undefined4 *)((int)this + 0x8000f8) = 0;
              if ((int *)((int)this + 0x94) != piVar5) {
                FUN_00401920((int *)((int)this + 0x94),piVar5,0,0xffffffff);
              }
              pcVar3 = _vftable__exref;
              if ((*(char *)((int)this + 0xb4) == '\0') && (*(int *)((int)this + 0xa4) != 0)) {
                *(undefined ***)(unaff_EBP - 0xf8) = &PTR_0055b2c0;
                *(undefined ***)(unaff_EBP - 0xe8) = &PTR_00571718;
                *(code **)(unaff_EBP - 0x90) = pcVar3;
                *(undefined4 *)(unaff_EBP - 4) = 0;
                *(undefined4 *)(unaff_EBP - 0x30) = 1;
                std::basic_iostream<char,std::char_traits<char>_>::
                basic_iostream<char,std::char_traits<char>_>
                          ((basic_iostream<char,std::char_traits<char>_> *)(unaff_EBP - 0xf8),
                           (basic_streambuf<char,std::char_traits<char>_> *)(unaff_EBP - 0xe0));
                iVar9 = *(int *)(unaff_EBP - 0xf8);
                *(undefined4 *)(unaff_EBP - 4) = 1;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> */
                *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
                 ((unaff_EBP - 0xf8) + *(int *)(iVar9 + 4)) =
                     &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::
                      vftable;
                iVar9 = *(int *)(*(int *)(unaff_EBP - 0xf8) + 4);
                *(int *)((unaff_EBP - 0xfc) + iVar9) = iVar9 + -0x68;
                std::basic_streambuf<char,std::char_traits<char>_>::
                basic_streambuf<char,std::char_traits<char>_>
                          ((basic_streambuf<char,std::char_traits<char>_> *)(unaff_EBP - 0xe0));
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> */
                *(basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
                 (unaff_EBP - 0xe0) =
                     &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
                      vftable;
                *(undefined4 *)(unaff_EBP - 0xa8) = 0;
                *(undefined4 *)(unaff_EBP - 0xa4) = 0;
                *(undefined4 *)(unaff_EBP - 4) = 3;
                pbVar4 = FUN_00412710((basic_ostream<char,std::char_traits<char>_> *)
                                      (unaff_EBP - 0xe8),"Save/world_");
                pbVar4 = FUN_004c6580(pbVar4,unaff_retaddr);
                FUN_00412710(pbVar4,param_3);
                piVar5 = FUN_004d8f70((void *)(unaff_EBP - 0xf8),(void *)(unaff_EBP - 0x28));
                *(undefined1 *)(unaff_EBP - 4) = 4;
                FUN_00413010((void *)((int)this + 0xac),piVar5);
                if (0xf < *(uint *)(unaff_EBP - 0x14)) {
                  operator_delete(*(void **)(unaff_EBP - 0x28));
                }
                *(undefined4 *)(unaff_EBP - 0x40) = 0;
                *(undefined4 *)(unaff_EBP - 0x3c) = 0;
                *(undefined4 *)(unaff_EBP - 0x38) = 0;
                *(undefined4 *)(unaff_EBP - 0x34) = 0;
                *(undefined1 *)(unaff_EBP - 4) = 5;
                *(undefined4 *)(unaff_EBP - 0x14) = 0xf;
                *(undefined4 *)(unaff_EBP - 0x18) = 0;
                *(undefined1 *)(unaff_EBP - 0x28) = 0;
                FUN_00401a40((void *)(unaff_EBP - 0x28),(int *)&DAT_0056d08c,4);
                *(undefined1 *)(unaff_EBP - 4) = 6;
                uVar6 = FUN_00413130((void *)((int)this + 0xac),(undefined4 *)(unaff_EBP - 0x28),
                                     (undefined4 *)(unaff_EBP - 0x40));
                if (0xf < *(uint *)(unaff_EBP - 0x14)) {
                  operator_delete(*(void **)(unaff_EBP - 0x28));
                }
                pvVar2 = *(void **)(unaff_EBP - 0x40);
                if ((char)uVar6 != '\0') {
                  iVar7 = *(int *)(unaff_EBP - 0x3c) - (int)pvVar2;
                  iVar9 = *(int *)(unaff_EBP - 0x34) + 4;
                  iVar8 = iVar7;
                  if (iVar9 <= iVar7) {
                    *(undefined4 *)((int)this + 0x800160) =
                         *(undefined4 *)((int)pvVar2 + *(int *)(unaff_EBP - 0x34));
                    iVar8 = iVar9;
                  }
                  *(int *)(unaff_EBP - 0x34) = iVar8;
                  if (iVar7 < iVar8 + 4) {
                    *(int *)(unaff_EBP - 0x34) = iVar7;
                  }
                  else {
                    *(undefined4 *)((int)this + 0x80015c) = *(undefined4 *)((int)pvVar2 + iVar8);
                    *(int *)(unaff_EBP - 0x34) = iVar8 + 4;
                  }
                }
                if (pvVar2 != (void *)0x0) {
                  operator_delete(pvVar2);
                  *(undefined4 *)(unaff_EBP - 0x40) = 0;
                  *(undefined4 *)(unaff_EBP - 0x3c) = 0;
                  *(undefined4 *)(unaff_EBP - 0x38) = 0;
                }
                iVar9 = *(int *)(unaff_EBP - 0xf8);
                *(undefined4 *)(unaff_EBP - 4) = 0xffffffff;
                *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
                 ((unaff_EBP - 0xf8) + *(int *)(iVar9 + 4)) =
                     &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::
                      vftable;
                iVar9 = *(int *)(*(int *)(unaff_EBP - 0xf8) + 4);
                *(int *)((unaff_EBP - 0xfc) + iVar9) = iVar9 + -0x68;
                bVar1 = *(byte *)(unaff_EBP - 0xa4);
                *(basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
                 (unaff_EBP - 0xe0) =
                     &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
                      vftable;
                if ((bVar1 & 1) != 0) {
                  operator_delete((void *)**(undefined4 **)(unaff_EBP - 0xd4));
                }
                std::basic_streambuf<char,std::char_traits<char>_>::setg
                          ((basic_streambuf<char,std::char_traits<char>_> *)(unaff_EBP - 0xe0),
                           (char *)0x0,(char *)0x0,(char *)0x0);
                **(undefined4 **)(unaff_EBP - 0xd0) = 0;
                **(undefined4 **)(unaff_EBP - 0xc0) = 0;
                **(undefined4 **)(unaff_EBP - 0xb0) = 0;
                *(uint *)(unaff_EBP - 0xa4) = *(uint *)(unaff_EBP - 0xa4) & 0xfffffffe;
                *(undefined4 *)(unaff_EBP - 0xa8) = 0;
                std::basic_streambuf<char,std::char_traits<char>_>::
                ~basic_streambuf<char,std::char_traits<char>_>
                          ((basic_streambuf<char,std::char_traits<char>_> *)(unaff_EBP - 0xe0));
                std::basic_iostream<char,std::char_traits<char>_>::
                ~basic_iostream<char,std::char_traits<char>_>
                          ((basic_iostream<char,std::char_traits<char>_> *)(unaff_EBP - 0xd8));
                std::basic_ios<char,std::char_traits<char>_>::
                ~basic_ios<char,std::char_traits<char>_>
                          ((basic_ios<char,std::char_traits<char>_> *)(unaff_EBP - 0x90));
              }
              ExceptionList = *(void **)(unaff_EBP - 0xc);
              __security_check_cookie(*(uint *)(unaff_EBP - 0x10) ^ unaff_EBP);
              return;
            }
            iVar9 = 0x400;
            *(undefined4 *)(unaff_EBP - 0x44) = 0x400;
          }
        } while (*unaff_EBX == 0);
      } while (*(char *)((int)this + 0xb4) != '\0');
      unaff_ESI = 0x10018;
    }
    unaff_EDI = 0x40;
  } while( true );
}


/* FUN_004d8c90 @ 004d8c90  kind=gamemisc  attributed-by=none  size=294 */

void FUN_004d8c90(int *param_1,int param_2,char param_3)

{
  undefined4 *puVar1;
  int iVar2;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  if ((char)param_1[0xc] != param_3) {
    iVar2 = 1000 - param_1[0xd];
    param_1[0xd] = iVar2;
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    param_1[0xd] = iVar2;
    iVar2 = *param_1;
    *(char *)(param_1 + 0xc) = param_3;
    if (iVar2 == 5) {
      local_14 = 0x33;
    }
    else if (iVar2 == 6) {
      if (param_3 == '\0') goto LAB_004d8da5;
      local_14 = 0x35;
    }
    else if (iVar2 == 7) {
      if (param_3 == '\0') goto LAB_004d8da5;
      local_14 = 0x34;
    }
    else {
      local_14 = 0x36;
    }
    local_10 = 0x3f800000;
    local_c = 0x3f800000;
    local_20 = (float)*(longlong *)(param_1 + 2) * 1.5258789e-05;
    local_1c = (float)*(longlong *)(param_1 + 4) * 1.5258789e-05;
    puVar1 = *(undefined4 **)(param_2 + 8);
    local_18 = (float)*(longlong *)(param_1 + 6) * 1.5258789e-05;
    iVar2 = FUN_004f3ba0(puVar1,(undefined4 *)puVar1[1],&local_20);
    if (*(int *)(param_2 + 0xc) == 0x7fffffe) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("list<T> too long");
    }
    *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
    puVar1[1] = iVar2;
    **(int **)(iVar2 + 4) = iVar2;
  }
LAB_004d8da5:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004d8dc0 @ 004d8dc0  kind=gamemisc  attributed-by=none  size=25 */

undefined4 __fastcall FUN_004d8dc0(int param_1)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = *(uint *)(param_1 + 4) & 0x80000001;
  bVar2 = uVar1 == 0;
  if ((int)uVar1 < 0) {
    bVar2 = (uVar1 - 1 | 0xfffffffe) == 0xffffffff;
  }
  if (!bVar2) {
    return *(undefined4 *)(param_1 + 0x68);
  }
  return *(undefined4 *)(param_1 + 100);
}


/* FUN_004d8de0 @ 004d8de0  kind=gamemisc  attributed-by=none  size=25 */

undefined4 __fastcall FUN_004d8de0(int param_1)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = *(uint *)(param_1 + 4) & 0x80000001;
  bVar2 = uVar1 == 0;
  if ((int)uVar1 < 0) {
    bVar2 = (uVar1 - 1 | 0xfffffffe) == 0xffffffff;
  }
  if (!bVar2) {
    return *(undefined4 *)(param_1 + 100);
  }
  return *(undefined4 *)(param_1 + 0x68);
}


/* FUN_004d8e00 @ 004d8e00  kind=gamemisc  attributed-by=none  size=4 */

undefined4 __fastcall FUN_004d8e00(int param_1)

{
  return *(undefined4 *)(param_1 + 0x6c);
}


/* FUN_004d8e10 @ 004d8e10  kind=gamemisc  attributed-by=none  size=29 */

void FUN_004d8e10(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  return;
}


/* FUN_004d8e30 @ 004d8e30  kind=gamemisc  attributed-by=none  size=39 */

float10 __fastcall FUN_004d8e30(double *param_1)

{
  return (float10)(*param_1 * *param_1 + param_1[1] * param_1[1]);
}


/* FUN_004d9160 @ 004d9160  kind=gamemisc  attributed-by=none  size=676 */

void __thiscall FUN_004d9160(void *this,int param_1,int *param_2,uint param_3,uint param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void **ppvVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  int local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054bae8;
  if (param_1 < 0) {
    param_1 = 0;
  }
  piVar12 = param_2;
  if ((int)param_2 < 0) {
    piVar12 = (int *)0x0;
  }
  if ((int)param_3 < 0) {
    param_3 = 0;
  }
  if ((int)param_4 < 0) {
    param_4 = 0;
  }
  iVar5 = param_3 + ((int)param_3 >> 0x1f & 0xffU);
  uVar6 = (int)((int)piVar12 + ((int)piVar12 >> 0x1f & 0xffU)) >> 8;
  uVar10 = (int)((param_1 >> 0x1f & 0xffU) + param_1) >> 8;
  iVar1 = ((int)param_4 >> 0x1f & 0xffU) + param_4;
  ppvVar4 = &local_10;
  param_4 = uVar6;
  do {
    local_10 = ExceptionList;
    param_3 = uVar6;
    if (iVar5 >> 8 < (int)uVar10) {
      return;
    }
    for (; ExceptionList = ppvVar4, (int)param_3 <= iVar1 >> 8; param_3 = param_3 + 1) {
      if ((((-1 < (int)uVar10) && (-1 < (int)param_3)) && ((int)uVar10 < 0x10000)) &&
         ((int)param_3 < 0x10000)) {
        iVar7 = (int)(uVar10 + ((int)uVar10 >> 0x1f & 0x3fU)) >> 6;
        iVar11 = (int)(((int)param_3 >> 0x1f & 0x3fU) + param_3) >> 6;
        if (((-1 < iVar7) && (-1 < iVar11)) &&
           ((iVar7 < 0x400 &&
            ((iVar11 < 0x400 &&
             (iVar7 = *(int *)((int)this + (iVar7 * 0x400 + iVar11) * 4 + 0xbc), iVar7 != 0)))))) {
          uVar6 = uVar10 & 0x8000003f;
          if ((int)uVar6 < 0) {
            uVar6 = (uVar6 - 1 | 0xffffffc0) + 1;
          }
          uVar8 = param_3 & 0x8000003f;
          if ((int)uVar8 < 0) {
            uVar8 = (uVar8 - 1 | 0xffffffc0) + 1;
          }
          iVar7 = *(int *)(iVar7 + 0x10018 + (uVar6 * 0x40 + uVar8) * 4);
          if (iVar7 != 0) {
            local_20 = 0;
            puVar9 = (undefined4 *)FUN_004ce660((undefined4 *)0x0,(undefined4 *)0x0);
            local_8 = 0;
            piVar12 = (int *)**(int **)(iVar7 + 4);
            param_2 = piVar12;
            if (piVar12 != *(int **)(iVar7 + 4)) {
              do {
                if (((*(byte *)(piVar12 + 0x10) & 2) != 0) &&
                   (param_2 = piVar12,
                   iVar11 = FUN_00406050(this,piVar12[4],piVar12[5],piVar12[6],piVar12[7],
                                         piVar12[8] - 0x10000,
                                         piVar12[9] - (uint)((uint)piVar12[8] < 0x10000),0),
                   (*(byte *)(iVar11 + 3) & 0x1f) == 0)) {
                  iVar11 = FUN_0052dfb0(puVar9,(undefined4 *)puVar9[1],&param_2);
                  if (local_20 == 0x15555554) {
                    /* WARNING: Subroutine does not return */
                    std::_Xlength_error("list<T> too long");
                  }
                  puVar9[1] = iVar11;
                  local_20 = local_20 + 1;
                  **(int **)(iVar11 + 4) = iVar11;
                }
                piVar12 = (int *)*piVar12;
                param_2 = piVar12;
              } while (piVar12 != (int *)*(int *)(iVar7 + 4));
            }
            for (puVar2 = (undefined4 *)*puVar9; puVar2 != puVar9; puVar2 = (undefined4 *)*puVar2) {
              piVar12 = (int *)puVar2[2];
              if (piVar12 != *(int **)(iVar7 + 4)) {
                *(int *)piVar12[1] = *piVar12;
                *(int *)(*piVar12 + 4) = piVar12[1];
                operator_delete(piVar12);
                *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + -1;
              }
            }
            puVar2 = (undefined4 *)*puVar9;
            *puVar9 = puVar9;
            local_8 = 0xffffffff;
            puVar9[1] = puVar9;
            while (puVar2 != puVar9) {
              puVar3 = (undefined4 *)*puVar2;
              operator_delete(puVar2);
              puVar2 = puVar3;
            }
            operator_delete(puVar9);
          }
        }
      }
      uVar6 = param_4;
      ppvVar4 = ExceptionList;
    }
    uVar10 = uVar10 + 1;
    ppvVar4 = ExceptionList;
    ExceptionList = local_10;
  } while( true );
}


/* FUN_004d9410 @ 004d9410  kind=gamemisc  attributed-by=none  size=770 */

void __thiscall FUN_004d9410(void *this,int *param_1,uint *param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int *piVar16;
  uint uVar17;
  int iVar18;
  float fVar19;
  undefined8 uVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  float local_30;
  int local_2c;
  int iStack_28;
  int local_24;
  uint local_20;
  int iStack_1c;
  uint local_18;
  int iStack_14;
  uint local_10;
  int iStack_c;
  
  uVar8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  uVar3 = param_2[1];
  uVar4 = *param_2;
  uVar20 = __alldiv(uVar4,uVar3,0x10000,0);
  uVar5 = param_2[3];
  uVar6 = param_2[2];
  iVar15 = (int)(((int)uVar20 >> 0x1f & 7U) + (int)uVar20) >> 3;
  uVar20 = __alldiv(uVar6,uVar5,0x10000,0);
  fVar19 = -1.0;
  uVar17 = iVar15 - 1;
  iVar15 = iVar15 + 1;
  iVar9 = (int)((int)uVar20 + ((int)uVar20 >> 0x1f & 7U)) >> 3;
  local_30 = -1.0;
  local_2c = 0;
  iStack_28 = 0;
  local_24 = -1;
  if ((int)uVar17 <= iVar15) {
    uVar1 = iVar9 - 1;
    iVar18 = -1;
    uVar7 = uVar1;
    do {
      for (; (int)uVar7 <= iVar9 + 1; uVar7 = uVar7 + 1) {
        if ((((-1 < (int)uVar17) && (-1 < (int)uVar7)) && ((int)uVar17 < 0x200000)) &&
           (((int)uVar7 < 0x200000 &&
            (iVar10 = FUN_00406290(this,(int)(uVar17 + ((int)uVar17 >> 0x1f & 0x1fU)) >> 5,
                                   (int)(uVar7 + ((int)uVar7 >> 0x1f & 0x1fU)) >> 5),
            fVar19 = local_30, iVar10 != 0)))) {
          uVar13 = uVar7 & 0x8000001f;
          if ((int)uVar13 < 0) {
            uVar13 = (uVar13 - 1 | 0xffffffe0) + 1;
          }
          uVar12 = uVar17 & 0x8000001f;
          if ((int)uVar12 < 0) {
            uVar12 = (uVar12 - 1 | 0xffffffe0) + 1;
          }
          piVar2 = (int *)(*(int *)(iVar10 + 0xac) + (uVar13 * 0x20 + uVar12) * 8);
          if (piVar2 != (int *)0x0) {
            piVar2 = (int *)*piVar2;
            piVar16 = (int *)*piVar2;
            if (piVar16 != piVar2) {
              uVar13 = param_2[4];
              uVar12 = param_2[5];
              do {
                iVar10 = piVar16[2];
                local_20 = (uint)*(undefined8 *)(iVar10 + 8);
                iStack_1c = (int)((ulonglong)*(undefined8 *)(iVar10 + 8) >> 0x20);
                iVar11 = (iStack_1c - uVar3) - (uint)(local_20 < uVar4);
                local_18 = (uint)*(undefined8 *)(iVar10 + 0x10);
                iStack_14 = (int)((ulonglong)*(undefined8 *)(iVar10 + 0x10) >> 0x20);
                iVar18 = (iStack_14 - uVar5) - (uint)(local_18 < uVar6);
                local_10 = (uint)*(undefined8 *)(iVar10 + 0x18);
                iStack_c = (int)((ulonglong)*(undefined8 *)(iVar10 + 0x18) >> 0x20);
                uVar14 = local_10 - uVar13;
                iVar10 = (iStack_c - uVar12) - (uint)(local_10 < uVar13);
                lVar21 = __allmul(local_20 - uVar4,iVar11,local_20 - uVar4,iVar11);
                lVar21 = __alldiv((uint)lVar21,(uint)((ulonglong)lVar21 >> 0x20),0x10000,0);
                lVar22 = __allmul(uVar14,iVar10,uVar14,iVar10);
                lVar22 = __alldiv((uint)lVar22,(uint)((ulonglong)lVar22 >> 0x20),0x10000,0);
                lVar23 = __allmul(local_18 - uVar6,iVar18,local_18 - uVar6,iVar18);
                lVar23 = __alldiv((uint)lVar23,(uint)((ulonglong)lVar23 >> 0x20),0x10000,0);
                fVar19 = (float)(lVar21 + lVar23 + lVar22) * 1.5258789e-05;
                if ((local_24 < 0) || (fVar19 < local_30)) {
                  local_2c = piVar16[3];
                  iStack_28 = piVar16[4];
                  local_24 = piVar16[5];
                  local_30 = fVar19;
                }
                piVar16 = (int *)*piVar16;
                iVar18 = local_24;
                fVar19 = local_30;
              } while (piVar16 != piVar2);
            }
          }
        }
      }
      uVar17 = uVar17 + 1;
      uVar7 = uVar1;
    } while ((int)uVar17 <= iVar15);
    if ((0.0 <= fVar19) && (fVar19 <= 16.0)) {
      *param_1 = local_2c;
      param_1[2] = iVar18;
      param_1[1] = iStack_28;
      __security_check_cookie(uVar8 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = -1;
  __security_check_cookie(uVar8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004d9720 @ 004d9720  kind=gamemisc  attributed-by=none  size=571 */

float * FUN_004d9720(float *param_1)

{
  float10 fVar1;
  double dVar2;
  ulonglong uVar3;
  undefined8 local_1c;
  
  uVar3 = FUN_0054a946();
  dVar2 = (double)(longlong)uVar3 * 1.52587890625e-05;
  uVar3 = FUN_0054a946();
  fVar1 = FUN_004d5d30(SUB84((double)(longlong)uVar3 * 1.52587890625e-05,0),
                       (int)((ulonglong)((double)(longlong)uVar3 * 1.52587890625e-05) >> 0x20),dVar2
                      );
  *param_1 = (float)fVar1 * 2.0;
  uVar3 = FUN_0054a946();
  local_1c = CONCAT44(-(uint)(0x20f60000 < (uint)uVar3) - (int)(uVar3 >> 0x20),
                      0x20f60000 - (uint)uVar3);
  dVar2 = (double)local_1c * 1.52587890625e-05;
  uVar3 = FUN_0054a946();
  local_1c = CONCAT44(-(uint)(0xd7f0000 < (uint)uVar3) - (int)(uVar3 >> 0x20),
                      0xd7f0000 - (uint)uVar3);
  fVar1 = FUN_004d5d30(SUB84((double)local_1c * 1.52587890625e-05,0),
                       (int)((ulonglong)((double)local_1c * 1.52587890625e-05) >> 0x20),dVar2);
  param_1[1] = (float)fVar1 * 2.0;
  uVar3 = FUN_0054a946();
  local_1c = CONCAT44(-(uint)(0x14e10000 < (uint)uVar3) - (int)(uVar3 >> 0x20),
                      0x14e10000 - (uint)uVar3);
  dVar2 = (double)local_1c * 1.52587890625e-05;
  uVar3 = FUN_0054a946();
  local_1c = CONCAT44(-(uint)(0x108a0000 < (uint)uVar3) - (int)(uVar3 >> 0x20),
                      0x108a0000 - (uint)uVar3);
  fVar1 = FUN_004d5d30(SUB84((double)local_1c * 1.52587890625e-05,0),
                       (int)((ulonglong)((double)local_1c * 1.52587890625e-05) >> 0x20),dVar2);
  param_1[2] = (float)fVar1 + 0.5;
  return param_1;
}


/* FUN_004d9960 @ 004d9960  kind=gamemisc  attributed-by=none  size=104 */

undefined4 * __thiscall FUN_004d9960(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  *(undefined4 *)((int)this + 0x1c) = param_1[7];
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  return this;
}


/* FUN_004d99d0 @ 004d99d0  kind=gamemisc  attributed-by=none  size=63 */

int * __thiscall FUN_004d99d0(void *this,uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  *(uint *)this = uVar1 << 0x10;
  *(uint *)((int)this + 4) = ((int)uVar1 >> 0x1f) << 0x10 | uVar1 >> 0x10;
  uVar1 = param_1[1];
  *(uint *)((int)this + 8) = uVar1 << 0x10;
  *(uint *)((int)this + 0xc) = ((int)uVar1 >> 0x1f) << 0x10 | uVar1 >> 0x10;
  uVar1 = param_1[2];
  *(uint *)((int)this + 0x10) = uVar1 << 0x10;
  *(uint *)((int)this + 0x14) = ((int)uVar1 >> 0x1f) << 0x10 | uVar1 >> 0x10;
  return this;
}


/* FUN_004d9a10 @ 004d9a10  kind=gamemisc  attributed-by=none  size=152 */

undefined4 * __thiscall FUN_004d9a10(void *this,int *param_1)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00554c71;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = FUN_004daed0(this);
  *(undefined2 *)(puVar1 + 3) = 0;
  local_8 = 1;
  if (puVar1 + 4 != (undefined4 *)0x0) {
    FUN_004daa80(puVar1 + 4,param_1);
    puVar1[7] = param_1[3];
    puVar1[8] = param_1[4];
    puVar1[9] = param_1[5];
    puVar1[10] = param_1[6];
    puVar1[0xb] = param_1[7];
    puVar1[0xc] = param_1[8];
  }
  ExceptionList = local_10;
  return puVar1;
}


/* FUN_004d9ac0 @ 004d9ac0  kind=gamemisc  attributed-by=none  size=113 */

undefined4 * __thiscall FUN_004d9ac0(void *this,int *param_1)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00554ca1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = FUN_004f7ba0(this);
  *(undefined2 *)(puVar1 + 3) = 0;
  local_8 = 1;
  if (puVar1 + 4 != (undefined4 *)0x0) {
    FUN_004daa80(puVar1 + 4,param_1);
  }
  ExceptionList = local_10;
  return puVar1;
}


/* FUN_004d9bb0 @ 004d9bb0  kind=gamemisc  attributed-by=none  size=41 */

undefined4 * __thiscall FUN_004d9bb0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = FUN_004daed0(this);
  *(undefined2 *)(puVar1 + 3) = 0;
  if (puVar1 + 4 != (undefined4 *)0x0) {
    FUN_004d9960(puVar1 + 4,param_1);
  }
  return puVar1;
}


/* FUN_004d9be0 @ 004d9be0  kind=gamemisc  attributed-by=none  size=116 */

void __thiscall FUN_004d9be0(void *this,int *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  
  iVar2 = *(int *)this;
  puVar7 = FUN_004d9d20(this,*(undefined4 **)(*param_1 + 4),iVar2,param_2);
  *(undefined4 **)(iVar2 + 4) = puVar7;
  piVar3 = *(int **)this;
  *(int *)((int)this + 4) = param_1[1];
  piVar4 = (int *)piVar3[1];
  if (*(char *)((int)piVar4 + 0xd) != '\0') {
    *piVar3 = (int)piVar3;
    *(int *)(*(int *)this + 8) = *(int *)this;
    return;
  }
  cVar1 = *(char *)(*piVar4 + 0xd);
  piVar6 = (int *)*piVar4;
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*piVar6 + 0xd);
    piVar4 = piVar6;
    piVar6 = (int *)*piVar6;
  }
  *piVar3 = (int)piVar4;
  iVar2 = *(int *)(*(int *)this + 4);
  iVar5 = *(int *)(iVar2 + 8);
  cVar1 = *(char *)(iVar5 + 0xd);
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*(int *)(iVar5 + 8) + 0xd);
    iVar2 = iVar5;
    iVar5 = *(int *)(iVar5 + 8);
  }
  *(int *)(*(int *)this + 8) = iVar2;
  return;
}


/* FUN_004d9c60 @ 004d9c60  kind=gamemisc  attributed-by=none  size=159 */

undefined4 * __thiscall
FUN_004d9c60(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00554cc0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar3 = *(undefined4 **)this;
  if (*(char *)((int)param_1 + 0xd) == '\0') {
    puVar1 = FUN_004d9a10(this,param_1 + 4);
    puVar1[1] = param_2;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 3);
    if (*(char *)((int)puVar3 + 0xd) != '\0') {
      puVar3 = puVar1;
    }
    local_8 = 0;
    puVar2 = FUN_004d9c60(this,(undefined4 *)*param_1,puVar1,param_3);
    *puVar1 = puVar2;
    puVar2 = FUN_004d9c60(this,(undefined4 *)param_1[2],puVar1,param_3);
    puVar1[2] = puVar2;
  }
  ExceptionList = local_10;
  return puVar3;
}


/* FUN_004d9d20 @ 004d9d20  kind=gamemisc  attributed-by=none  size=159 */

undefined4 * __thiscall
FUN_004d9d20(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00554ce0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar3 = *(undefined4 **)this;
  if (*(char *)((int)param_1 + 0xd) == '\0') {
    puVar1 = FUN_004d9ac0(this,param_1 + 4);
    puVar1[1] = param_2;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 3);
    if (*(char *)((int)puVar3 + 0xd) != '\0') {
      puVar3 = puVar1;
    }
    local_8 = 0;
    puVar2 = FUN_004d9d20(this,(undefined4 *)*param_1,puVar1,param_3);
    *puVar1 = puVar2;
    puVar2 = FUN_004d9d20(this,(undefined4 *)param_1[2],puVar1,param_3);
    puVar1[2] = puVar2;
  }
  ExceptionList = local_10;
  return puVar3;
}


/* FUN_004d9de0 @ 004d9de0  kind=gamemisc  attributed-by=none  size=559 */

void __thiscall
FUN_004d9de0(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 param_4,
            int *param_5)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  if (0x4ec4ec2 < *(uint *)((int)this + 4)) {
    if ((void *)param_5[4] != (void *)0x0) {
      operator_delete((void *)param_5[4]);
      param_5[4] = 0;
      param_5[5] = 0;
      param_5[6] = 0;
    }
    operator_delete(param_5);
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("map/set<T> too long");
  }
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) + 1;
  param_5[1] = (int)param_3;
  if (param_3 == *(undefined4 **)this) {
    (*(undefined4 **)this)[1] = param_5;
    **(undefined4 **)this = param_5;
    *(int **)(*(int *)this + 8) = param_5;
  }
  else if (param_2 == '\0') {
    param_3[2] = param_5;
    if (param_3 == *(undefined4 **)(*(int *)this + 8)) {
      *(int **)(*(int *)this + 8) = param_5;
    }
  }
  else {
    *param_3 = param_5;
    if (param_3 == (undefined4 *)**(int **)this) {
      **(int **)this = (int)param_5;
    }
  }
  cVar1 = *(char *)(param_5[1] + 0xc);
  piVar4 = param_5;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)this + 4) + 0xc) = 1;
      *param_1 = param_5;
      return;
    }
    piVar6 = (int *)piVar4[1];
    piVar5 = *(int **)piVar6[1];
    if (piVar6 == piVar5) {
      piVar5 = (int *)((undefined4 *)piVar6[1])[2];
      if ((char)piVar5[3] != '\0') {
        if (piVar4 == (int *)piVar6[2]) {
          piVar4 = (int *)piVar6[2];
          piVar6[2] = *piVar4;
          if (*(char *)(*piVar4 + 0xd) == '\0') {
            *(int **)(*piVar4 + 4) = piVar6;
          }
          piVar4[1] = piVar6[1];
          if (piVar6 == *(int **)(*(int *)this + 4)) {
            *(int **)(*(int *)this + 4) = piVar4;
          }
          else {
            piVar5 = (int *)piVar6[1];
            if (piVar6 == (int *)*piVar5) {
              *piVar5 = (int)piVar4;
            }
            else {
              piVar5[2] = (int)piVar4;
            }
          }
          *piVar4 = (int)piVar6;
          piVar6[1] = (int)piVar4;
          piVar4 = piVar6;
        }
        *(undefined1 *)(piVar4[1] + 0xc) = 1;
        *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
        piVar6 = *(int **)(piVar4[1] + 4);
        piVar5 = (int *)*piVar6;
        *piVar6 = piVar5[2];
        if (*(char *)(piVar5[2] + 0xd) == '\0') {
          *(int **)(piVar5[2] + 4) = piVar6;
        }
        piVar5[1] = piVar6[1];
        if (piVar6 == *(int **)(*(int *)this + 4)) {
          *(int **)(*(int *)this + 4) = piVar5;
          piVar5[2] = (int)piVar6;
        }
        else {
          piVar2 = (int *)piVar6[1];
          if (piVar6 == (int *)piVar2[2]) {
            piVar2[2] = (int)piVar5;
            piVar5[2] = (int)piVar6;
          }
          else {
            *piVar2 = (int)piVar5;
            piVar5[2] = (int)piVar6;
          }
        }
        goto LAB_004d9fea;
      }
LAB_004d9f41:
      *(undefined1 *)(piVar6 + 3) = 1;
      *(undefined1 *)(piVar5 + 3) = 1;
      *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
      piVar4 = *(int **)(piVar4[1] + 4);
    }
    else {
      if ((char)piVar5[3] == '\0') goto LAB_004d9f41;
      if (piVar4 == (int *)*piVar6) {
        iVar3 = *piVar6;
        *piVar6 = *(int *)(iVar3 + 8);
        if (*(char *)(*(int *)(iVar3 + 8) + 0xd) == '\0') {
          *(int **)(*(int *)(iVar3 + 8) + 4) = piVar6;
        }
        *(int *)(iVar3 + 4) = piVar6[1];
        if (piVar6 == *(int **)(*(int *)this + 4)) {
          *(int *)(*(int *)this + 4) = iVar3;
        }
        else {
          piVar4 = (int *)piVar6[1];
          if (piVar6 == (int *)piVar4[2]) {
            piVar4[2] = iVar3;
          }
          else {
            *piVar4 = iVar3;
          }
        }
        *(int **)(iVar3 + 8) = piVar6;
        piVar6[1] = iVar3;
        piVar4 = piVar6;
      }
      *(undefined1 *)(piVar4[1] + 0xc) = 1;
      *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
      piVar6 = *(int **)(piVar4[1] + 4);
      piVar5 = (int *)piVar6[2];
      piVar6[2] = *piVar5;
      if (*(char *)(*piVar5 + 0xd) == '\0') {
        *(int **)(*piVar5 + 4) = piVar6;
      }
      piVar5[1] = piVar6[1];
      if (piVar6 == *(int **)(*(int *)this + 4)) {
        *(int **)(*(int *)this + 4) = piVar5;
      }
      else {
        piVar2 = (int *)piVar6[1];
        if (piVar6 == (int *)*piVar2) {
          *piVar2 = (int)piVar5;
        }
        else {
          piVar2[2] = (int)piVar5;
        }
      }
      *piVar5 = (int)piVar6;
LAB_004d9fea:
      piVar6[1] = (int)piVar5;
    }
    cVar1 = *(char *)(piVar4[1] + 0xc);
  } while( true );
}


/* FUN_004da010 @ 004da010  kind=gamemisc  attributed-by=none  size=511 */

void __thiscall
FUN_004da010(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,int *param_4)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  if (0x9249247 < *(uint *)((int)this + 4)) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("map/set<T> too long");
  }
  piVar3 = FUN_004d9ac0(this,param_4);
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  piVar3[1] = (int)param_3;
  if (param_3 == *(undefined4 **)this) {
    (*(undefined4 **)this)[1] = piVar3;
    **(undefined4 **)this = piVar3;
    iVar4 = *(int *)this;
  }
  else {
    if (param_2 != '\0') {
      *param_3 = piVar3;
      if (param_3 == (undefined4 *)**(int **)this) {
        **(int **)this = (int)piVar3;
      }
      goto LAB_004da06e;
    }
    param_3[2] = piVar3;
    iVar4 = *(int *)this;
    if (param_3 != *(undefined4 **)(iVar4 + 8)) goto LAB_004da06e;
  }
  *(int **)(iVar4 + 8) = piVar3;
LAB_004da06e:
  cVar1 = *(char *)(piVar3[1] + 0xc);
  piVar5 = piVar3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)this + 4) + 0xc) = 1;
      *param_1 = piVar3;
      return;
    }
    piVar7 = (int *)piVar5[1];
    piVar6 = *(int **)piVar7[1];
    if (piVar7 == piVar6) {
      piVar6 = (int *)((undefined4 *)piVar7[1])[2];
      if ((char)piVar6[3] != '\0') {
        if (piVar5 == (int *)piVar7[2]) {
          piVar5 = (int *)piVar7[2];
          piVar7[2] = *piVar5;
          if (*(char *)(*piVar5 + 0xd) == '\0') {
            *(int **)(*piVar5 + 4) = piVar7;
          }
          piVar5[1] = piVar7[1];
          if (piVar7 == *(int **)(*(int *)this + 4)) {
            *(int **)(*(int *)this + 4) = piVar5;
          }
          else {
            piVar6 = (int *)piVar7[1];
            if (piVar7 == (int *)*piVar6) {
              *piVar6 = (int)piVar5;
            }
            else {
              piVar6[2] = (int)piVar5;
            }
          }
          *piVar5 = (int)piVar7;
          piVar7[1] = (int)piVar5;
          piVar5 = piVar7;
        }
        *(undefined1 *)(piVar5[1] + 0xc) = 1;
        *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0xc) = 0;
        piVar7 = *(int **)(piVar5[1] + 4);
        piVar6 = (int *)*piVar7;
        *piVar7 = piVar6[2];
        if (*(char *)(piVar6[2] + 0xd) == '\0') {
          *(int **)(piVar6[2] + 4) = piVar7;
        }
        piVar6[1] = piVar7[1];
        if (piVar7 == *(int **)(*(int *)this + 4)) {
          *(int **)(*(int *)this + 4) = piVar6;
          piVar6[2] = (int)piVar7;
        }
        else {
          piVar2 = (int *)piVar7[1];
          if (piVar7 == (int *)piVar2[2]) {
            piVar2[2] = (int)piVar6;
            piVar6[2] = (int)piVar7;
          }
          else {
            *piVar2 = (int)piVar6;
            piVar6[2] = (int)piVar7;
          }
        }
        goto LAB_004da1ea;
      }
LAB_004da141:
      *(undefined1 *)(piVar7 + 3) = 1;
      *(undefined1 *)(piVar6 + 3) = 1;
      *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0xc) = 0;
      piVar5 = *(int **)(piVar5[1] + 4);
    }
    else {
      if ((char)piVar6[3] == '\0') goto LAB_004da141;
      if (piVar5 == (int *)*piVar7) {
        iVar4 = *piVar7;
        *piVar7 = *(int *)(iVar4 + 8);
        if (*(char *)(*(int *)(iVar4 + 8) + 0xd) == '\0') {
          *(int **)(*(int *)(iVar4 + 8) + 4) = piVar7;
        }
        *(int *)(iVar4 + 4) = piVar7[1];
        if (piVar7 == *(int **)(*(int *)this + 4)) {
          *(int *)(*(int *)this + 4) = iVar4;
        }
        else {
          piVar5 = (int *)piVar7[1];
          if (piVar7 == (int *)piVar5[2]) {
            piVar5[2] = iVar4;
          }
          else {
            *piVar5 = iVar4;
          }
        }
        *(int **)(iVar4 + 8) = piVar7;
        piVar7[1] = iVar4;
        piVar5 = piVar7;
      }
      *(undefined1 *)(piVar5[1] + 0xc) = 1;
      *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0xc) = 0;
      piVar7 = *(int **)(piVar5[1] + 4);
      piVar6 = (int *)piVar7[2];
      piVar7[2] = *piVar6;
      if (*(char *)(*piVar6 + 0xd) == '\0') {
        *(int **)(*piVar6 + 4) = piVar7;
      }
      piVar6[1] = piVar7[1];
      if (piVar7 == *(int **)(*(int *)this + 4)) {
        *(int **)(*(int *)this + 4) = piVar6;
      }
      else {
        piVar2 = (int *)piVar7[1];
        if (piVar7 == (int *)*piVar2) {
          *piVar2 = (int)piVar6;
        }
        else {
          piVar2[2] = (int)piVar6;
        }
      }
      *piVar6 = (int)piVar7;
LAB_004da1ea:
      piVar7[1] = (int)piVar6;
    }
    cVar1 = *(char *)(piVar5[1] + 0xc);
  } while( true );
}


/* FUN_004da210 @ 004da210  kind=gamemisc  attributed-by=none  size=627 */

undefined4 * __thiscall
FUN_004da210(void *this,undefined4 *param_1,int *param_2,undefined4 *param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uStack_30;
  undefined4 local_20;
  int *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00554d00;
  local_10 = ExceptionList;
  uStack_30 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = this;
  if (*(int *)((int)this + 4) == 0) {
    local_14 = (undefined1 *)&uStack_30;
    FUN_004d9de0(this,param_1,'\x01',*(undefined4 **)this,param_3,param_4);
    ExceptionList = local_10;
    return param_1;
  }
  piVar1 = *(int **)this;
  if (param_2 == (int *)*piVar1) {
    local_14 = (undefined1 *)&uStack_30;
    uVar3 = FUN_004da930((int *)*param_3,(int *)param_3[1],(int *)param_2[4],(int *)param_2[5]);
    if ((char)uVar3 != '\0') {
      FUN_004d9de0(this,param_1,'\x01',param_2,param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    puVar4 = (undefined4 *)piVar1[2];
    local_14 = (undefined1 *)&uStack_30;
    uVar3 = FUN_004da930((int *)puVar4[4],(int *)puVar4[5],(int *)*param_3,(int *)param_3[1]);
    if ((char)uVar3 != '\0') {
      FUN_004d9de0(this,param_1,'\0',puVar4,param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else {
    uVar3 = FUN_004da930((int *)*param_3,(int *)param_3[1],(int *)param_2[4],(int *)param_2[5]);
    if ((char)uVar3 != '\0') {
      local_1c = param_2;
      FUN_004dad80((int *)&local_1c);
      piVar2 = local_1c;
      uVar3 = FUN_004da930((int *)local_1c[4],(int *)local_1c[5],(int *)*param_3,(int *)param_3[1]);
      if ((char)uVar3 != '\0') {
        if (*(char *)(piVar2[2] + 0xd) == '\0') {
          FUN_004d9de0(local_18,param_1,'\x01',param_2,param_3,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        FUN_004d9de0(local_18,param_1,'\0',piVar2,param_3,param_4);
        ExceptionList = local_10;
        return param_1;
      }
    }
    uVar3 = FUN_004da930((int *)param_2[4],(int *)param_2[5],(int *)*param_3,(int *)param_3[1]);
    if ((char)uVar3 != '\0') {
      local_1c = param_2;
      FUN_00407a50((int *)&local_1c);
      piVar2 = local_1c;
      if ((local_1c == piVar1) ||
         (uVar3 = FUN_004da930((int *)*param_3,(int *)param_3[1],(int *)local_1c[4],
                               (int *)local_1c[5]), (char)uVar3 != '\0')) {
        if (*(char *)(param_2[2] + 0xd) == '\0') {
          FUN_004d9de0(local_18,param_1,'\x01',piVar2,param_3,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        FUN_004d9de0(local_18,param_1,'\0',param_2,param_3,param_4);
        ExceptionList = local_10;
        return param_1;
      }
    }
  }
  local_8 = 0xffffffff;
  puVar4 = (undefined4 *)FUN_004da4a0(local_18,&local_20,'\0',param_3,param_4);
  *param_1 = *puVar4;
  ExceptionList = local_10;
  return param_1;
}


/* FUN_004da4a0 @ 004da4a0  kind=gamemisc  attributed-by=none  size=447 */

void __thiscall
FUN_004da4a0(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  char local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00554d20;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = *(int **)this;
  local_8 = 0;
  local_1c = '\x01';
  piVar8 = piVar1;
  if (*(char *)(piVar1[1] + 0xd) == '\0') {
    piVar2 = (int *)param_3[1];
    piVar5 = (int *)piVar1[1];
    do {
      piVar8 = piVar5;
      piVar5 = (int *)piVar8[5];
      if (param_2 == '\0') {
        piVar7 = (int *)piVar8[4];
        for (piVar6 = (int *)*param_3; piVar6 != piVar2; piVar6 = piVar6 + 1) {
          if (piVar7 == piVar5) {
            if (piVar6 != piVar2) goto LAB_004da578;
            break;
          }
          if (*piVar6 < *piVar7) goto LAB_004da574;
          if (*piVar7 < *piVar6) goto LAB_004da578;
          piVar7 = piVar7 + 1;
        }
        if (piVar7 == piVar5) {
LAB_004da578:
          local_1c = '\0';
        }
        else {
LAB_004da574:
          local_1c = '\x01';
        }
      }
      else {
        piVar6 = (int *)*param_3;
        for (piVar7 = (int *)piVar8[4]; piVar7 != piVar5; piVar7 = piVar7 + 1) {
          if (piVar6 == piVar2) {
            if (piVar7 != piVar5) goto LAB_004da540;
            break;
          }
          if (*piVar7 < *piVar6) goto LAB_004da537;
          if (*piVar6 < *piVar7) goto LAB_004da540;
          piVar6 = piVar6 + 1;
        }
        if (piVar6 == piVar2) {
LAB_004da540:
          local_1c = '\x01';
        }
        else {
LAB_004da537:
          local_1c = '\0';
        }
      }
      if (local_1c == '\0') {
        piVar5 = (int *)piVar8[2];
      }
      else {
        piVar5 = (int *)*piVar8;
      }
    } while (*(char *)((int)piVar5 + 0xd) == '\0');
  }
  _param_2 = piVar8;
  if (local_1c != '\0') {
    if (piVar8 == (int *)*piVar1) {
      local_1c = '\x01';
      puVar3 = param_3;
      goto LAB_004da5b7;
    }
    FUN_004dad80((int *)&param_2);
  }
  puVar3 = param_3;
  piVar1 = _param_2;
  uVar4 = FUN_004da930((int *)_param_2[4],(int *)_param_2[5],(int *)*param_3,(int *)param_3[1]);
  piVar2 = param_4;
  if ((char)uVar4 == '\0') {
    if ((void *)param_4[4] != (void *)0x0) {
      operator_delete((void *)param_4[4]);
      piVar2[4] = 0;
      piVar2[5] = 0;
      piVar2[6] = 0;
    }
    operator_delete(piVar2);
    *param_1 = piVar1;
    *(undefined1 *)(param_1 + 1) = 0;
    ExceptionList = local_10;
    return;
  }
LAB_004da5b7:
  puVar3 = (undefined4 *)FUN_004d9de0(this,(undefined4 *)&param_2,local_1c,piVar8,puVar3,param_4);
  *param_1 = *puVar3;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return;
}


/* FUN_004da990 @ 004da990  kind=gamemisc  attributed-by=none  size=43 */

void * FUN_004da990(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


/* FUN_004da9f0 @ 004da9f0  kind=gamemisc  attributed-by=none  size=138 */

void __thiscall FUN_004da9f0(void *this,int *param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  void *local_8;
  
  local_8 = this;
  while (param_1 != param_2) {
    piVar2 = *(int **)this;
    piVar3 = FUN_004d9a10(this,param_1 + 4);
    FUN_004da210(this,&local_8,piVar2,piVar3 + 4,piVar3);
    if (*(char *)((int)param_1 + 0xd) == '\0') {
      piVar2 = (int *)param_1[2];
      if (*(char *)((int)piVar2 + 0xd) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0xd);
        param_1 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0xd);
          param_1 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(param_1[1] + 0xd);
        piVar3 = (int *)param_1[1];
        piVar2 = param_1;
        while ((param_1 = piVar3, cVar1 == '\0' && (piVar2 == (int *)param_1[2]))) {
          cVar1 = *(char *)(param_1[1] + 0xd);
          piVar3 = (int *)param_1[1];
          piVar2 = param_1;
        }
      }
    }
  }
  return;
}


/* FUN_004dab30 @ 004dab30  kind=gamemisc  attributed-by=none  size=44 */

ulonglong * __fastcall FUN_004dab30(ulonglong *param_1)

{
  ulonglong uVar1;
  
  uVar1 = FUN_0054a946();
  *param_1 = uVar1;
  return param_1;
}


/* FUN_004dab60 @ 004dab60  kind=gamemisc  attributed-by=none  size=46 */

undefined4 * __thiscall
FUN_004dab60(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4
            )

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = *param_4;
  *(undefined4 *)((int)this + 0x10) = param_4[1];
  *(undefined4 *)((int)this + 0x14) = param_4[2];
  return this;
}


/* FUN_004dab90 @ 004dab90  kind=gamemisc  attributed-by=none  size=262 */

int * __thiscall FUN_004dab90(void *this,int *param_1)

{
  size_t _Size;
  void *_Src;
  void *_Dst;
  void *pvVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  
  if (this != param_1) {
    pvVar1 = (void *)param_1[1];
    _Src = (void *)*param_1;
    if (_Src == pvVar1) {
      *(undefined4 *)((int)this + 4) = *(undefined4 *)this;
      return this;
    }
    _Dst = *(void **)this;
    uVar4 = *(int *)((int)this + 4) - (int)_Dst >> 2;
    uVar3 = (int)pvVar1 - (int)_Src >> 2;
    if (uVar3 <= uVar4) {
      memmove(_Dst,_Src,(int)pvVar1 - (int)_Src & 0xfffffffc);
      *(int *)((int)this + 4) = *(int *)this + (param_1[1] - *param_1 >> 2) * 4;
      return this;
    }
    if (uVar3 <= (uint)(*(int *)((int)this + 8) - (int)_Dst >> 2)) {
      pvVar1 = (void *)((int)_Src + uVar4 * 4);
      memmove(_Dst,_Src,(int)pvVar1 - (int)_Src & 0xfffffffc);
      _Size = (param_1[1] - (int)pvVar1 >> 2) * 4;
      pvVar1 = memmove(*(void **)((int)this + 4),pvVar1,_Size);
      *(void **)((int)this + 4) = (void *)((int)pvVar1 + _Size);
      return this;
    }
    if (_Dst != (void *)0x0) {
      operator_delete(_Dst);
    }
    uVar2 = FUN_004dae20(this,param_1[1] - *param_1 >> 2);
    if ((char)uVar2 != '\0') {
      pvVar1 = FUN_004da990((void *)*param_1,param_1[1],*(void **)this);
      *(void **)((int)this + 4) = pvVar1;
    }
  }
  return this;
}


/* FUN_004dad80 @ 004dad80  kind=gamemisc  attributed-by=none  size=94 */

int * __fastcall FUN_004dad80(int *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  puVar2 = (undefined4 *)*param_1;
  if (*(char *)((int)puVar2 + 0xd) != '\0') {
    *param_1 = puVar2[2];
    return param_1;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0xd) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0xd) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0xd) == '\0');
      *param_1 = iVar4;
      return param_1;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0xd);
    while ((cVar1 == '\0' && (*param_1 == *piVar5))) {
      *param_1 = (int)piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0xd);
    }
    if (*(char *)(*param_1 + 0xd) != '\0') {
      return param_1;
    }
  }
  *param_1 = (int)piVar5;
  return param_1;
}


/* FUN_004dade0 @ 004dade0  kind=gamemisc  attributed-by=none  size=57 */

undefined4 __fastcall FUN_004dade0(uint *param_1)

{
  uint3 uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar3 = FUN_0054a946();
  iVar2 = (int)(uVar3 >> 0x20);
  uVar1 = (uint3)(uVar3 >> 8);
  if (((int)param_1[1] <= iVar2) && (((int)param_1[1] < iVar2 || (*param_1 < (uint)uVar3)))) {
    return CONCAT31(uVar1,1);
  }
  return (uint)uVar1 << 8;
}


/* FUN_004daed0 @ 004daed0  kind=gamemisc  attributed-by=none  size=55 */

undefined4 * __fastcall FUN_004daed0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x34);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
  *puVar1 = *param_1;
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = *param_1;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = *param_1;
  }
  return puVar1;
}


/* FUN_004daf10 @ 004daf10  kind=gamemisc  attributed-by=none  size=58 */

void FUN_004daf10(void *param_1)

{
  if (*(void **)((int)param_1 + 0x10) != (void *)0x0) {
    operator_delete(*(void **)((int)param_1 + 0x10));
    *(undefined4 *)((int)param_1 + 0x10) = 0;
    *(undefined4 *)((int)param_1 + 0x14) = 0;
    *(undefined4 *)((int)param_1 + 0x18) = 0;
  }
  operator_delete(param_1);
  return;
}


/* FUN_004dafe0 @ 004dafe0  kind=gamemisc  attributed-by=none  size=454 */

void FUN_004dafe0(void *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int local_34;
  int local_2c [3];
  undefined4 *local_20;
  int iStack_1c;
  int local_18;
  undefined4 *local_14;
  int iStack_10;
  int local_c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  FUN_00405450(local_2c,(uint *)((int)param_1 + 0x1428));
  FUN_00405450((int *)&local_20,(uint *)((int)param_1 + 0x1440));
  piVar2 = *(int **)((int)param_1 + 0x1460);
  piVar1 = (int *)((int)param_1 + 0x1460);
  piVar6 = (int *)*piVar2;
  *piVar2 = (int)piVar2;
  *(int *)(*piVar1 + 4) = *piVar1;
  *(undefined4 *)((int)param_1 + 0x1464) = 0;
  if (piVar6 != (int *)*piVar1) {
    do {
      piVar2 = (int *)*piVar6;
      operator_delete(piVar6);
      piVar6 = piVar2;
    } while (piVar2 != (int *)*piVar1);
  }
  iStack_10 = iStack_1c;
  puVar5 = local_20;
  iVar8 = local_18;
  if (*(int *)((int)param_1 + 0x1408) != *(int *)((int)param_1 + 0x140c)) {
    puVar3 = *(undefined4 **)(*(int *)((int)param_1 + 0x1408) + 0x10);
    iStack_10 = puVar3[1];
    puVar5 = (undefined4 *)*puVar3;
    iVar8 = puVar3[2];
  }
  local_34 = iStack_10;
  puVar3 = *(undefined4 **)*piVar1;
  local_c = iVar8;
  local_14 = puVar5;
  iVar4 = FUN_004d9b70(puVar3,(undefined4 *)puVar3[1],&local_14);
  if (*(int *)((int)param_1 + 0x1464) != 0xccccccb) {
    *(int *)((int)param_1 + 0x1464) = *(int *)((int)param_1 + 0x1464) + 1;
    puVar3[1] = iVar4;
    **(int **)(iVar4 + 4) = iVar4;
    iVar4 = 0;
    do {
      iVar7 = 0;
      while (*(int *)((int)&local_14 + iVar7) == *(int *)((int)local_2c + iVar7)) {
        iVar7 = iVar7 + 4;
        if (0xb < iVar7) goto LAB_004db0e5;
      }
      if (*(int *)((int)param_1 + 0x1410) < iVar4) {
LAB_004db0e5:
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      iVar4 = iVar4 + 1;
      puVar5 = FUN_004dd0f0(param_1,puVar5,local_34,iVar8);
      if (puVar5 == (undefined4 *)0x0) goto LAB_004db0e5;
      iVar8 = puVar5[5];
      local_20 = (undefined4 *)puVar5[3];
      iStack_1c = puVar5[4];
      local_18 = iVar8;
      iVar7 = 0;
      while (*(int *)((int)&local_14 + iVar7) == *(int *)((int)&local_20 + iVar7)) {
        iVar7 = iVar7 + 4;
        if (0xb < iVar7) {
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
      }
      puVar3 = *(undefined4 **)*piVar1;
      local_c = iVar8;
      local_14 = (undefined4 *)puVar5[3];
      iStack_10 = puVar5[4];
      iVar7 = FUN_004d9b70(puVar3,(undefined4 *)puVar3[1],&local_20);
      if (*(int *)((int)param_1 + 0x1464) == 0xccccccb) break;
      *(int *)((int)param_1 + 0x1464) = *(int *)((int)param_1 + 0x1464) + 1;
      puVar3[1] = iVar7;
      **(int **)(iVar7 + 4) = iVar7;
      local_34 = iStack_10;
      puVar5 = local_14;
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("list<T> too long");
}


/* FUN_004db1b0 @ 004db1b0  kind=gamemisc  attributed-by=none  size=76 */

void __thiscall FUN_004db1b0(void *this,int *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  
  puVar1 = *(uint **)this;
  puVar5 = puVar1;
  if (*(char *)((int)puVar1[1] + 0xd) == '\0') {
    puVar3 = (uint *)puVar1[1];
    do {
      if (puVar3[4] < *param_2) {
        puVar4 = (uint *)puVar3[2];
      }
      else {
        puVar4 = (uint *)*puVar3;
        puVar5 = puVar3;
      }
      puVar3 = puVar4;
    } while (*(char *)((int)puVar4 + 0xd) == '\0');
  }
  if ((puVar5 == puVar1) || (uVar2 = *param_2, param_2 = puVar5, uVar2 < puVar5[4])) {
    param_2 = puVar1;
  }
  *param_1 = (int)param_2;
  return;
}


/* FUN_004db200 @ 004db200  kind=gamemisc  attributed-by=none  size=7104 */

void FUN_004db200(void *param_1,int param_2)

{
  int **ppiVar1;
  undefined8 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint *puVar8;
  ulonglong uVar9;
  void *this;
  int *piVar10;
  undefined4 *puVar11;
  char cVar12;
  char cVar13;
  byte bVar14;
  int *piVar15;
  int *piVar16;
  uint *puVar17;
  undefined4 *puVar18;
  float *pfVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  float *pfVar23;
  uint *puVar24;
  int iVar25;
  undefined4 *puVar26;
  void *pvVar27;
  bool bVar28;
  double dVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  undefined1 auStack_3ec [3];
  byte local_3e9;
  void *local_3e8;
  float *local_3e4;
  float *local_3e0;
  int **local_3dc;
  uint *local_3d8;
  char local_3d2;
  char local_3d1;
  float *local_3d0;
  float local_3cc;
  float *local_3c8;
  int *local_3c4;
  undefined8 local_3c0;
  uint *local_3b8;
  int local_3b4;
  uint *local_3b0;
  int local_3ac;
  undefined8 local_3a8;
  uint *local_3a0;
  undefined4 *local_39c;
  int local_398;
  uint *local_394;
  undefined4 local_390;
  int local_38c;
  int *local_388;
  undefined4 local_384;
  float *local_380;
  void *local_37c;
  int *local_378;
  undefined4 local_374;
  undefined8 local_370;
  float *local_364;
  undefined4 local_360;
  undefined4 local_35c;
  undefined8 local_358;
  undefined8 local_350;
  float local_344;
  int *local_340;
  float local_33c;
  float local_338;
  uint *local_334;
  undefined4 local_330;
  undefined4 local_32c;
  undefined8 local_328;
  undefined8 local_320;
  uint *local_318;
  int local_314;
  uint *local_310;
  int local_30c;
  uint *local_308;
  int local_304;
  uint *local_300;
  int local_2fc;
  ulonglong local_2f8;
  uint *local_2f0;
  int local_2ec;
  ulonglong local_2e8;
  undefined4 local_2dc [2];
  undefined8 local_2d4;
  float local_2cc;
  float *local_2c8;
  float local_2c4;
  int local_2bc;
  int iStack_2b8;
  int local_2b4;
  int local_2b0;
  int iStack_2ac;
  int local_2a8;
  int iStack_2a4;
  int local_2a0;
  int iStack_29c;
  float local_298 [6];
  uint local_280;
  uint local_27c;
  uint local_278;
  float local_274 [2];
  float *local_26c;
  uint local_268 [8];
  float *local_248;
  float local_244 [3];
  uint local_238 [7];
  float local_21c [3];
  uint local_210 [7];
  int local_1f4;
  int local_1f0;
  int local_1ec;
  int local_1e8;
  int local_1e4;
  undefined8 local_1e0;
  undefined8 local_1d8;
  int local_1d0;
  int local_1cc;
  uint *local_1c8;
  uint *local_1c4;
  uint *local_1c0;
  int local_1bc;
  undefined8 local_1b8;
  uint local_1b0;
  int local_1ac;
  int local_1a8;
  int local_1a4;
  int local_1a0;
  int local_19c;
  uint *local_198;
  int local_194;
  uint *local_190;
  int local_18c;
  undefined8 local_188;
  uint local_180;
  int local_17c;
  int local_178;
  int local_174;
  int local_170;
  int local_16c;
  uint local_168;
  int local_164;
  int local_160;
  int local_15c;
  int local_158;
  int local_154;
  int local_14c [4];
  int local_13c;
  int local_134;
  int local_130;
  int local_12c;
  uint *local_128;
  int local_124;
  uint *local_120;
  int local_11c;
  undefined8 local_118;
  int local_110;
  int local_10c;
  int local_108;
  int local_104 [4];
  uint local_f4;
  uint local_f0;
  uint local_ec;
  int local_e8;
  uint local_e4;
  int local_dc;
  int local_d8;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  int local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  int local_a0;
  uint local_9c;
  int local_98;
  uint local_94;
  int local_84 [3];
  int local_78 [3];
  int local_6c [3];
  uint local_60 [7];
  int local_44 [3];
  uint local_38 [7];
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00554e12;
  local_14 = ExceptionList;
  local_1c = DAT_00583cc8 ^ (uint)auStack_3ec;
  ExceptionList = &local_14;
  *(undefined4 *)((int)param_1 + 0x40) = 0;
  *(undefined4 *)((int)param_1 + 0x44) = 0;
  *(undefined4 *)((int)param_1 + 0x48) = 0;
  local_3e8 = param_1;
  local_274[0] = 0.0;
  local_3c8 = (float *)(0.5 - *(float *)((int)param_1 + 0x88) * 0.5);
  local_274[1] = 0.0;
  iVar25 = 0;
  local_26c = local_3c8;
  do {
    local_3d0 = (float *)(local_274[iVar25] * 65536.0);
    uVar33 = FUN_0054a946();
    local_238[iVar25 * 2] = (uint)uVar33;
    local_238[iVar25 * 2 + 1] = (uint)(uVar33 >> 0x20);
    iVar25 = iVar25 + 1;
  } while (iVar25 < 3);
  local_180 = *(uint *)((int)param_1 + 0x10) + local_238[0];
  local_3a0 = (uint *)((int)param_1 + 0x10);
  local_17c = *(int *)((int)param_1 + 0x14) + local_238[1] +
              (uint)CARRY4(*(uint *)((int)param_1 + 0x10),local_238[0]);
  local_178 = *(uint *)((int)param_1 + 0x18) + local_238[2];
  local_174 = *(int *)((int)param_1 + 0x1c) + local_238[3] +
              (uint)CARRY4(*(uint *)((int)param_1 + 0x18),local_238[2]);
  local_170 = *(uint *)((int)param_1 + 0x20) + local_238[4];
  local_16c = *(int *)((int)param_1 + 0x24) + local_238[5] +
              (uint)CARRY4(*(uint *)((int)param_1 + 0x20),local_238[4]);
  piVar15 = (int *)FUN_00405450(local_6c,&local_180);
  pvVar27 = local_3e8;
  local_3d8 = (uint *)((int)local_3e8 + 0x1440);
  piVar16 = (int *)FUN_00405450(local_78,local_3d8);
  uVar33 = CONCAT44(local_3cc,local_3e0);
  local_134 = *piVar16 - *piVar15;
  local_12c = piVar16[2] - piVar15[2];
  local_130 = piVar16[1] - piVar15[1];
  if ((float)(local_134 * local_134 + local_12c * local_12c + local_130 * local_130) <=
      *(float *)((int)pvVar27 + 0x1458) * *(float *)((int)pvVar27 + 0x1458)) {
    FUN_00405330((int)pvVar27);
    uVar33 = CONCAT44(local_3cc,local_3e0);
    goto LAB_004dcfc6;
  }
  if (*(int *)((int)pvVar27 + 0x1464) == 0) goto LAB_004dcfc6;
  if (3000 < *(int *)((int)pvVar27 + 0x145c)) {
    local_268[6] = 0;
    local_268[7] = 0;
    local_248 = local_3c8;
    FUN_00402510((int)local_60);
    puVar17 = FUN_00402cb0((void *)((int)pvVar27 + 0x10),local_38,local_60);
    *(uint *)((int)pvVar27 + 0x1428) = *puVar17;
    *(uint *)((int)pvVar27 + 0x142c) = puVar17[1];
    *(uint *)((int)pvVar27 + 0x1430) = puVar17[2];
    *(uint *)((int)pvVar27 + 0x1434) = puVar17[3];
    *(uint *)((int)pvVar27 + 0x1438) = puVar17[4];
    *(uint *)((int)pvVar27 + 0x143c) = puVar17[5];
    FUN_004dd2e0(local_37c,pvVar27);
  }
  uVar33 = CONCAT44(local_3cc,local_3e0);
  local_3c4 = *(int **)((int)pvVar27 + 0x1464);
  if (local_3c4 == (int *)0x0) goto LAB_004dcfc6;
  puVar17 = *(uint **)((int)pvVar27 + 0x1460);
  puVar24 = (uint *)*puVar17;
  local_38c = -1;
  piVar15 = local_3c4;
  local_3b0 = puVar24;
  if (puVar24 != puVar17) {
    local_3d0 = (float *)(*(float *)((int)local_3e8 + 0x88) * 0.5 * 65536.0);
    local_370 = FUN_0054a946();
    local_328 = 0;
    local_2e8 = FUN_0054a946();
    local_3d0 = *(float **)((int)local_3e8 + 0x18);
    local_3c8 = *(float **)((int)local_3e8 + 0x1c);
    local_3dc = *(int ***)((int)local_3e8 + 0x20);
    local_3c0._0_4_ = *(float **)((int)local_3e8 + 0x24);
    uVar33 = local_2e8;
    do {
      local_2f8 = uVar33;
      local_3e4 = (float *)(local_2f8 >> 0x20);
      local_3e0 = (float *)local_2f8;
      local_1b0 = (int)*local_3a0 - (int)local_3e0;
      local_1ac = (local_3a0[1] - (int)local_3e4) - (uint)((float *)*local_3a0 < local_3e0);
      local_1a8 = (int)local_3d0 - (int)local_3e0;
      local_3a8._0_4_ = local_3c8;
      local_1a4 = (int)local_3c8 + (-(uint)(local_3d0 < local_3e0) - (int)local_3e4);
      local_380 = (float *)local_3dc;
      local_1a0 = (int)local_3dc - (int)(float *)local_370;
      local_19c = (int)(float *)local_3c0 +
                  (-(uint)(local_3dc < (float *)local_370) - local_370._4_4_);
      local_3b8 = (uint *)(float *)local_3c0;
      piVar15 = (int *)FUN_00405450(local_84,&local_1b0);
      local_2b4 = piVar15[2] - puVar24[4];
      iStack_2b8 = piVar15[1] - puVar24[3];
      local_2bc = *piVar15 - puVar24[2];
      iVar25 = local_2b4 * local_2b4 + iStack_2b8 * iStack_2b8 + local_2bc * local_2bc;
      if ((local_38c < 0) || (iVar25 <= local_38c)) {
        local_3b0 = puVar24;
        local_38c = iVar25;
      }
      puVar24 = (uint *)*puVar24;
      uVar33 = CONCAT44(local_3e4,local_3e0);
    } while (puVar24 != puVar17);
    piVar15 = local_3c4;
    if (local_38c == 0) {
      *(undefined4 *)((int)local_3e8 + 0x145c) = 0;
      piVar15 = *(int **)((int)local_3e8 + 0x1464);
    }
  }
  puVar24 = local_3b0;
  if (((*(byte *)((int)local_3e8 + 0x5c) & 0x40) == 0) && (piVar15 < (int *)0x1e)) {
    uVar20 = puVar17[1];
    piVar15 = (int *)FUN_00405450(local_44,local_3d8);
    local_10c = *(int *)(uVar20 + 0xc) - piVar15[1];
    local_108 = *(int *)(uVar20 + 0x10) - piVar15[2];
    local_110 = *(int *)(uVar20 + 8) - *piVar15;
    if ((float)(local_108 * local_108 + local_10c * local_10c + local_110 * local_110) <=
        *(float *)((int)local_3e8 + 0x1458) * *(float *)((int)local_3e8 + 0x1458))
    goto LAB_004db6ef;
    local_3d2 = '\x01';
    pvVar27 = local_3e8;
  }
  else {
LAB_004db6ef:
    pvVar27 = local_3e8;
    local_3d2 = '\0';
    if (local_38c == 0) {
      puVar17 = (uint *)((int)local_3e8 + 0x141c);
      iVar25 = FUN_004156e0(puVar24 + 2,(int)puVar17);
      if ((char)iVar25 != '\0') {
        *puVar17 = puVar24[2];
        *(uint *)((int)pvVar27 + 0x1420) = puVar24[3];
        *(uint *)((int)pvVar27 + 0x1424) = puVar24[4];
        local_280 = puVar24[2];
        local_27c = puVar24[3];
        local_278 = puVar24[4];
        FUN_004d99d0((void *)((int)pvVar27 + 0x1428),&local_280);
        local_378 = (int *)0x0;
        local_374 = 0;
        local_378 = (int *)FUN_0042f040();
        this = local_3e8;
        iVar25 = *(int *)((int)pvVar27 + 0x1418);
        local_c = 0;
        local_3e0 = (float *)0x46;
        if ((0x45 < iVar25) || (local_3e0 = (float *)iVar25, 0 < iVar25)) {
          do {
            piVar16 = (int *)0x0;
            piVar15 = (int *)**(int **)((int)pvVar27 + 0x1414);
            local_3e4 = (float *)0xffffffff;
            if (piVar15 != *(int **)((int)pvVar27 + 0x1414)) {
              do {
                puVar18 = (undefined4 *)piVar15[4];
                puVar18 = FUN_004dd0f0(this,(undefined4 *)*puVar18,puVar18[1],puVar18[2]);
                if ((puVar18 != (undefined4 *)0x0) &&
                   (((int)local_3e4 < 0 || ((int)puVar18[1] < (int)local_3e4)))) {
                  local_3e4 = (float *)puVar18[1];
                  piVar16 = piVar15;
                }
                if (*(char *)((int)piVar15 + 0xd) == '\0') {
                  piVar3 = (int *)piVar15[2];
                  if (*(char *)((int)piVar3 + 0xd) == '\0') {
                    cVar12 = *(char *)(*piVar3 + 0xd);
                    piVar15 = piVar3;
                    piVar3 = (int *)*piVar3;
                    while (cVar12 == '\0') {
                      cVar12 = *(char *)(*piVar3 + 0xd);
                      piVar15 = piVar3;
                      piVar3 = (int *)*piVar3;
                    }
                  }
                  else {
                    cVar12 = *(char *)(piVar15[1] + 0xd);
                    piVar10 = (int *)piVar15[1];
                    piVar3 = piVar15;
                    while ((piVar15 = piVar10, cVar12 == '\0' && (piVar3 == (int *)piVar15[2]))) {
                      cVar12 = *(char *)(piVar15[1] + 0xd);
                      piVar10 = (int *)piVar15[1];
                      piVar3 = piVar15;
                    }
                  }
                }
              } while (piVar15 != *(int **)((int)this + 0x1414));
              if (-1 < (int)local_3e4) {
                FUN_004da790(&local_378,local_2dc,'\0',piVar16 + 4,(uint)DAT_0058426a);
                FUN_0040a4f0((void *)((int)this + 0x1414),(undefined4 *)&local_328,piVar16);
              }
            }
            local_3e0 = (float *)((int)local_3e0 + -1);
            pvVar27 = this;
          } while (local_3e0 != (float *)0x0);
          local_3e0 = (float *)0x0;
          puVar24 = local_3b0;
          pvVar27 = local_3e8;
        }
        ppiVar1 = (int **)((int)pvVar27 + 0x1414);
        local_3dc = ppiVar1;
        if (ppiVar1 != &local_378) {
          FUN_00402ed0((int *)(*ppiVar1)[1]);
          local_3d0 = (float *)((uint)local_3d0 & 0xffffff00);
          (*ppiVar1)[1] = (int)*ppiVar1;
          **ppiVar1 = (int)*ppiVar1;
          (*ppiVar1)[2] = (int)*ppiVar1;
          *(undefined4 *)((int)pvVar27 + 0x1418) = 0;
          FUN_004d9be0(ppiVar1,(int *)&local_378,local_3d0);
        }
        local_398 = 0;
        local_39c = (undefined4 *)FUN_004ce660((undefined4 *)0x0,(undefined4 *)0x0);
        local_c._0_1_ = 1;
        local_388 = (int *)0x0;
        local_384 = 0;
        local_388 = (int *)FUN_00407ad0();
        local_c = CONCAT31(local_c._1_3_,2);
        local_3e0 = (float *)FUN_004dd0f0(pvVar27,(undefined4 *)puVar24[2],puVar24[3],puVar24[4]);
        piVar15 = (int *)**ppiVar1;
        local_3c4 = piVar15;
        if (piVar15 != *ppiVar1) {
          do {
            puVar18 = (undefined4 *)piVar15[4];
            local_3e4 = (float *)FUN_004dd0f0(local_3e8,(undefined4 *)*puVar18,puVar18[1],puVar18[2]
                                             );
            local_394 = (uint *)0x0;
            local_390 = 0;
            local_394 = (uint *)FUN_00407ad0();
            local_c._0_1_ = 3;
            local_364 = (float *)0x0;
            local_360 = 0;
            local_35c = 0;
            FUN_0045f080(&local_364,3);
            local_c = CONCAT31(local_c._1_3_,4);
            FUN_004dab90(&local_364,piVar15 + 4);
            pvVar27 = local_3e8;
            if (local_3e4 == (float *)0x0) {
LAB_004dba99:
              if (local_3e4 == local_3e0) goto LAB_004dbade;
              iVar25 = FUN_0052dfb0(local_39c,(undefined4 *)local_39c[1],&local_3c4);
              if (local_398 == 0x15555554) {
                    /* WARNING: Subroutine does not return */
                std::_Xlength_error("list<T> too long");
              }
              local_398 = local_398 + 1;
              local_39c[1] = iVar25;
              **(int **)(iVar25 + 4) = iVar25;
            }
            else {
              while (local_3e4 != local_3e0) {
                local_3c8 = (float *)FUN_004dd0f0(pvVar27,(undefined4 *)local_3e4[3],
                                                  (int)local_3e4[4],(int)local_3e4[5]);
                if ((local_3c8 == local_3e4) || (local_3c8 == (float *)0x0)) goto LAB_004dba99;
                pfVar19 = (float *)FUN_004daca0(&local_394,(int *)&local_364);
                *pfVar19 = *local_3e4;
                pfVar19[1] = local_3e4[1];
                pfVar19[2] = local_3e4[2];
                pfVar19[3] = local_3e4[3];
                pfVar19[4] = local_3e4[4];
                pfVar19[5] = local_3e4[5];
                *local_364 = local_3e4[3];
                local_364[1] = local_3e4[4];
                local_364[2] = local_3e4[5];
                local_3e4 = local_3c8;
              }
LAB_004dbade:
              FUN_004da9f0(&local_388,(int *)*local_394,(int *)local_394);
            }
            if (local_364 != (float *)0x0) {
              operator_delete(local_364);
              local_364 = (float *)0x0;
              local_360 = 0;
              local_35c = 0;
            }
            local_c = CONCAT31(local_c._1_3_,2);
            FUN_0040a430(&local_394,&local_340,(int *)*local_394,(int *)local_394);
            operator_delete(local_394);
            if (*(char *)((int)piVar15 + 0xd) == '\0') {
              piVar16 = (int *)piVar15[2];
              if (*(char *)((int)piVar16 + 0xd) == '\0') {
                cVar12 = *(char *)(*piVar16 + 0xd);
                piVar15 = piVar16;
                piVar16 = (int *)*piVar16;
                while (local_3c4 = piVar15, cVar12 == '\0') {
                  cVar12 = *(char *)(*piVar16 + 0xd);
                  piVar15 = piVar16;
                  piVar16 = (int *)*piVar16;
                }
              }
              else {
                cVar12 = *(char *)(piVar15[1] + 0xd);
                piVar3 = (int *)piVar15[1];
                piVar16 = piVar15;
                while ((piVar15 = piVar3, local_3c4 = piVar15, cVar12 == '\0' &&
                       (piVar16 == (int *)piVar15[2]))) {
                  cVar12 = *(char *)(piVar15[1] + 0xd);
                  piVar3 = (int *)piVar15[1];
                  piVar16 = piVar15;
                }
              }
            }
          } while (piVar15 != *(int **)((int)pvVar27 + 0x1414));
        }
        local_334 = (uint *)0x0;
        local_330 = 0;
        local_32c = 0;
        FUN_0045f080(&local_334,3);
        *local_334 = puVar24[2];
        local_334[1] = puVar24[3];
        local_334[2] = puVar24[4];
        local_c = CONCAT31(local_c._1_3_,5);
        pfVar19 = (float *)FUN_004daca0(&local_388,(int *)&local_334);
        *pfVar19 = *local_3e0;
        pfVar19[1] = local_3e0[1];
        pfVar19[2] = local_3e0[2];
        pfVar19[3] = local_3e0[3];
        pfVar19[4] = local_3e0[4];
        pfVar19[5] = local_3e0[5];
        iVar25 = FUN_004daca0(&local_388,(int *)&local_334);
        puVar5 = local_39c;
        ppiVar1 = local_3dc;
        *(uint *)(iVar25 + 0xc) = puVar24[2];
        *(uint *)(iVar25 + 0x10) = puVar24[3];
        *(uint *)(iVar25 + 0x14) = puVar24[4];
        for (puVar18 = (undefined4 *)*local_39c; puVar18 != puVar5; puVar18 = (undefined4 *)*puVar18
            ) {
          FUN_0040a4f0(ppiVar1,&local_338,(int *)puVar18[2]);
          puVar24 = local_3b0;
          pvVar27 = local_3e8;
        }
        ppiVar1 = (int **)((int)pvVar27 + 0x140c);
        if (ppiVar1 != &local_388) {
          FUN_00402ed0((int *)(*ppiVar1)[1]);
          local_3c8 = (float *)((uint)local_3c8 & 0xffffff00);
          (*ppiVar1)[1] = (int)*ppiVar1;
          **ppiVar1 = (int)*ppiVar1;
          (*ppiVar1)[2] = (int)*ppiVar1;
          *(undefined4 *)((int)pvVar27 + 0x1410) = 0;
          piVar15 = *ppiVar1;
          puVar18 = FUN_004d9c60((void *)((int)pvVar27 + 0x140c),(undefined4 *)local_388[1],piVar15,
                                 local_3c8);
          piVar15[1] = (int)puVar18;
          piVar15 = *(int **)((int)pvVar27 + 0x140c);
          *(undefined4 *)((int)pvVar27 + 0x1410) = local_384;
          piVar16 = (int *)piVar15[1];
          if (*(char *)((int)piVar16 + 0xd) == '\0') {
            cVar12 = *(char *)(*piVar16 + 0xd);
            piVar3 = (int *)*piVar16;
            while (cVar12 == '\0') {
              cVar12 = *(char *)(*piVar3 + 0xd);
              piVar16 = piVar3;
              piVar3 = (int *)*piVar3;
            }
            *piVar15 = (int)piVar16;
            iVar25 = *(int *)((int)pvVar27 + 0x140c);
            iVar22 = *(int *)(iVar25 + 4);
            iVar4 = *(int *)(iVar22 + 8);
            cVar12 = *(char *)(iVar4 + 0xd);
            while (cVar12 == '\0') {
              cVar12 = *(char *)(*(int *)(iVar4 + 8) + 0xd);
              iVar22 = iVar4;
              iVar4 = *(int *)(iVar4 + 8);
            }
            *(int *)(iVar25 + 8) = iVar22;
          }
          else {
            *piVar15 = (int)piVar15;
            iVar25 = *(int *)((int)pvVar27 + 0x140c);
            *(int *)(iVar25 + 8) = iVar25;
          }
        }
        puVar18 = *(undefined4 **)((int)pvVar27 + 0x140c);
        *(undefined4 **)((int)pvVar27 + 0x1408) = puVar18;
        puVar5 = (undefined4 *)*puVar18;
        puVar26 = puVar18;
        while (puVar5 != puVar18) {
          if ((puVar26 == puVar18) || ((int)puVar5[8] < (int)puVar26[8])) {
            *(undefined4 **)((int)pvVar27 + 0x1408) = puVar5;
            puVar26 = puVar5;
          }
          if (*(char *)((int)puVar5 + 0xd) == '\0') {
            puVar6 = (undefined4 *)puVar5[2];
            if (*(char *)((int)puVar6 + 0xd) == '\0') {
              cVar12 = *(char *)((int)*puVar6 + 0xd);
              puVar5 = puVar6;
              puVar6 = (undefined4 *)*puVar6;
              while (cVar12 == '\0') {
                cVar12 = *(char *)((int)*puVar6 + 0xd);
                puVar5 = puVar6;
                puVar6 = (undefined4 *)*puVar6;
              }
            }
            else {
              cVar12 = *(char *)((int)puVar5[1] + 0xd);
              puVar11 = (undefined4 *)puVar5[1];
              puVar6 = puVar5;
              while ((puVar5 = puVar11, cVar12 == '\0' && (puVar6 == (undefined4 *)puVar5[2]))) {
                cVar12 = *(char *)((int)puVar5[1] + 0xd);
                puVar11 = (undefined4 *)puVar5[1];
                puVar6 = puVar5;
              }
            }
          }
        }
        if (local_334 != (uint *)0x0) {
          operator_delete(local_334);
        }
        local_c = CONCAT31(local_c._1_3_,1);
        FUN_0040a430(&local_388,&local_344,(int *)*local_388,local_388);
        operator_delete(local_388);
        puVar5 = local_39c;
        puVar18 = (undefined4 *)*local_39c;
        *local_39c = local_39c;
        local_39c[1] = local_39c;
        while (puVar18 != puVar5) {
          puVar26 = (undefined4 *)*puVar18;
          operator_delete(puVar18);
          puVar18 = puVar26;
          puVar24 = local_3b0;
        }
        operator_delete(local_39c);
        local_c = 0xffffffff;
        FUN_0040a430(&local_378,&local_33c,(int *)*local_378,local_378);
        operator_delete(local_378);
      }
    }
  }
  local_3c0._0_4_ = (float *)puVar24[4];
  local_3dc = (int **)(*(float *)((int)pvVar27 + 0x88) * 0.5 * 65536.0);
  pfVar19 = (float *)((int)pvVar27 + 0x80);
  local_3e9 = 0;
  local_380 = pfVar19;
  local_350 = FUN_0054a946();
  local_320 = FUN_0054a946();
  local_3cc = (float)(local_320 >> 0x20);
  puVar17 = (uint *)local_320;
  uVar20 = puVar24[2];
  local_3e4 = (float *)(puVar24 + 2);
  local_9c = ((int)uVar20 >> 0x1f) << 0x10 | uVar20 >> 0x10;
  uVar21 = puVar24[3];
  uVar7 = puVar24[4];
  local_94 = ((int)uVar21 >> 0x1f) << 0x10 | uVar21 >> 0x10;
  local_a0 = uVar20 * 0x10000;
  local_98 = uVar21 * 0x10000;
  local_1e0 = local_320 + CONCAT44(local_9c,local_a0);
  local_3e0 = (float *)((ulonglong)local_1e0 >> 0x20);
  local_1d8 = local_320 + CONCAT44(local_94,local_98);
  local_1d0 = uVar7 * 0x10000 + (uint)local_350;
  local_1cc = (((int)uVar7 >> 0x1f) << 0x10 | uVar7 >> 0x10) + local_350._4_4_ +
              (uint)CARRY4(uVar7 * 0x10000,(uint)local_350);
  local_3d8 = puVar17;
  local_310 = puVar17;
  local_30c = (int)local_3cc;
  cVar12 = FUN_004d5740(local_37c,(uint *)&local_1e0,pfVar19);
  local_3e0 = (float *)(uint)local_3e9;
  if (cVar12 != '\0') {
    local_3e0 = (float *)0x1;
  }
  local_3e9 = '\x01';
  local_3d1 = '\0';
  pfVar19 = (float *)local_3c0;
  puVar24 = puVar17;
  local_358 = CONCAT44(local_358._4_4_,(float)local_358);
  local_1b8 = CONCAT44(local_1b8._4_4_,(undefined4)local_1b8);
  if ((local_3d2 == '\0') &&
     (local_358 = CONCAT44(local_358._4_4_,(float)local_358),
     local_1b8 = CONCAT44(local_1b8._4_4_,(undefined4)local_1b8),
     local_3b0 != *(uint **)(*(int *)((int)local_3e8 + 0x1460) + 4))) {
    puVar8 = (uint *)*local_3b0;
    local_3dc = (int **)(*(float *)((int)local_3e8 + 0x88) * 0.5 * 65536.0);
    local_3e9 = '\0';
    local_3a8._0_4_ = (float *)puVar8[4];
    pfVar19 = (float *)((int)local_3e8 + 0x80);
    local_3b0 = puVar8;
    local_358 = FUN_0054a946();
    puVar24 = local_3d8;
    local_2ec = (int)local_3cc;
    local_2fc = (int)local_3cc;
    uVar20 = puVar8[2];
    local_3e4 = (float *)(puVar8 + 2);
    local_b4 = ((int)uVar20 >> 0x1f) << 0x10 | uVar20 >> 0x10;
    uVar21 = puVar8[3];
    uVar7 = puVar8[4];
    local_ac = ((int)uVar21 >> 0x1f) << 0x10 | uVar21 >> 0x10;
    local_b8 = uVar20 * 0x10000;
    local_b0 = uVar21 * 0x10000;
    local_1c8 = local_3d8 + uVar20 * 0x4000;
    local_3b8 = (uint *)(local_b4 + (int)local_3cc + (uint)CARRY4(local_b8,(uint)local_3d8));
    local_1c0 = local_3d8 + uVar21 * 0x4000;
    local_1bc = local_ac + (int)local_3cc + (uint)CARRY4(local_b0,(uint)local_3d8);
    local_1b8 = local_358 + CONCAT44(((int)uVar7 >> 0x1f) << 0x10 | uVar7 >> 0x10,uVar7 * 0x10000);
    local_300 = puVar17;
    local_2f0 = puVar17;
    local_1c4 = local_3b8;
    cVar13 = FUN_004d5740(local_37c,(uint *)&local_1c8,pfVar19);
    cVar12 = (char)local_3e0;
    pfVar19 = (float *)local_3a8;
    if (cVar13 == '\0') goto LAB_004dc101;
    bVar14 = '\x01';
  }
  else {
LAB_004dc101:
    cVar12 = (char)local_3e0;
    local_3d1 = '\x01';
    bVar14 = local_3e9;
  }
  local_3e9 = '\x01';
  puVar17 = puVar24;
  local_3c0 = CONCAT44(local_3c0._4_4_,(float *)local_3c0);
  local_188 = CONCAT44(local_188._4_4_,(undefined4)local_188);
  if ((local_3d2 == '\0') &&
     ((((cVar12 != '\0' ||
        (local_3c0 = CONCAT44(local_3c0._4_4_,(float *)local_3c0),
        local_188 = CONCAT44(local_188._4_4_,(undefined4)local_188), bVar14 != '\0')) &&
       (local_3c0 = CONCAT44(local_3c0._4_4_,(float *)local_3c0),
       local_188 = CONCAT44(local_188._4_4_,(undefined4)local_188), pfVar19 != (float *)local_3c0))
      && (local_3c0 = CONCAT44(local_3c0._4_4_,(float *)local_3c0),
         local_188 = CONCAT44(local_188._4_4_,(undefined4)local_188),
         local_3b0 != *(uint **)(*(int *)((int)local_3e8 + 0x1460) + 4))))) {
    uVar20 = *local_3b0;
    pfVar19 = (float *)((int)local_3e8 + 0x80);
    local_3dc = (int **)(*(float *)((int)local_3e8 + 0x88) * 0.5 * 65536.0);
    local_3e9 = '\0';
    local_3c0 = FUN_0054a946();
    puVar17 = local_3d8;
    local_3b4 = (int)local_3cc;
    local_3ac = (int)local_3cc;
    uVar21 = *(uint *)(uVar20 + 8);
    local_3e4 = (float *)(uVar20 + 8);
    uVar7 = *(uint *)(uVar20 + 0xc);
    local_f4 = ((int)uVar21 >> 0x1f) << 0x10 | uVar21 >> 0x10;
    uVar20 = *(uint *)(uVar20 + 0x10);
    local_ec = ((int)uVar7 >> 0x1f) << 0x10 | uVar7 >> 0x10;
    local_e4 = ((int)uVar20 >> 0x1f) << 0x10 | uVar20 >> 0x10;
    local_104[3] = uVar21 * 0x10000;
    local_f0 = uVar7 * 0x10000;
    local_e8 = uVar20 * 0x10000;
    local_198 = local_3d8 + uVar21 * 0x4000;
    local_194 = local_f4 + (int)local_3cc + (uint)CARRY4(local_104[3],(uint)local_3d8);
    local_190 = local_3d8 + uVar7 * 0x4000;
    local_18c = local_ec + (int)local_3cc + (uint)CARRY4(local_f0,(uint)local_3d8);
    local_188 = local_3c0 + CONCAT44(local_e4,local_e8);
    local_3b8 = puVar24;
    local_3b0 = puVar24;
    cVar12 = FUN_004d5740(local_37c,(uint *)&local_198,pfVar19);
    if (cVar12 != '\0') {
      local_3e9 = '\x01';
      local_3d1 = '\0';
    }
  }
  local_3dc = (int **)(*(float *)((int)local_3e8 + 0x88) * 0.5 * 65536.0);
  local_3a8 = FUN_0054a946();
  iVar25 = local_38c;
  puVar24 = local_3a0;
  pvVar27 = local_3e8;
  uVar33 = CONCAT44(local_3cc,local_3e0);
  local_314 = (int)local_3cc;
  local_304 = (int)local_3cc;
  uVar20 = (uint)*local_3e4;
  uVar21 = (uint)local_3e4[1];
  local_cc = ((int)uVar20 >> 0x1f) << 0x10 | uVar20 >> 0x10;
  uVar7 = (uint)local_3e4[2];
  local_c4 = ((int)uVar21 >> 0x1f) << 0x10 | uVar21 >> 0x10;
  local_bc = ((int)uVar7 >> 0x1f) << 0x10 | uVar7 >> 0x10;
  local_d0 = uVar20 * 0x10000;
  local_c8 = uVar21 * 0x10000;
  local_c0 = uVar7 * 0x10000;
  local_128 = local_3d8 + uVar20 * 0x4000;
  local_124 = local_cc + (int)local_3cc + (uint)CARRY4(local_d0,(uint)local_3d8);
  local_120 = local_3d8 + uVar21 * 0x4000;
  local_11c = local_c4 + (int)local_3cc + (uint)CARRY4(local_c8,(uint)local_3d8);
  local_118 = local_3a8 + CONCAT44(local_bc,local_c0);
  local_2b0 = (int)local_128 - *local_3a0;
  iStack_2ac = (local_124 - local_3a0[1]) - (uint)(local_128 < (uint *)*local_3a0);
  local_2a8 = (int)local_120 - local_3a0[2];
  iStack_2a4 = (local_11c - local_3a0[3]) - (uint)(local_120 < (uint *)local_3a0[2]);
  local_2a0 = (uint)local_118 - local_3a0[4];
  iStack_29c = ((int)((ulonglong)local_118 >> 0x20) - local_3a0[5]) -
               (uint)((uint)local_118 < local_3a0[4]);
  local_3e4 = (float *)((float)CONCAT44(iStack_2ac,local_2b0) * 1.5258789e-05);
  local_3b0 = (uint *)((float)CONCAT44(iStack_2a4,local_2a8) * 1.5258789e-05);
  local_3dc = (int **)(float)CONCAT44(iStack_29c,local_2a0);
  local_3d8 = (uint *)((float)local_3dc * 1.5258789e-05);
  if (((local_38c < 4) && ((*(byte *)((int)local_3e8 + 0x5c) & 4) != 0)) &&
     ((char)local_3e0 == '\0')) {
    bVar28 = true;
  }
  else {
    bVar28 = false;
  }
  if (bVar28) {
    *(ushort *)(local_3a0 + 0x45) = (ushort)local_3a0[0x45] | 1;
  }
  else {
    *(ushort *)(local_3a0 + 0x45) = (ushort)local_3a0[0x45] & 0xfffe;
  }
  if (((1.0 < (float)local_3d8) || ((*(byte *)((int)local_3e8 + 0x5c) & 0x40) != 0)) ||
     (((char)local_3e0 == '\0' || (bVar28 = local_3e9 == '\0', local_3e9 = '\x01', bVar28)))) {
    local_3e9 = '\0';
  }
  fVar30 = (float)local_3b0 * (float)local_3b0 + (float)local_3e4 * (float)local_3e4 +
           (float)local_3d8 * (float)local_3d8;
  local_3d0 = (float *)local_3dc;
  local_318 = puVar17;
  local_308 = puVar17;
  local_2c8 = local_3e4;
  local_2c4 = (float)local_3b0;
  if (fVar30 <= 0.001) goto LAB_004dcfc6;
  if (1.0 < fVar30) {
    dVar29 = (double)fVar30;
    libm_sse2_sqrt_precise();
    fVar30 = 1.0 / (float)dVar29;
    local_3e4 = (float *)(fVar30 * (float)local_2c8);
    local_3d8 = (uint *)(fVar30 * (float)local_3d8);
    local_3b0 = (uint *)(fVar30 * local_2c4);
  }
  uVar33 = CONCAT44(local_3cc,local_3e0);
  if ((float)local_3d8 <= 0.0) {
    if (((float)local_3d8 < 0.0) && ((*(byte *)((int)pvVar27 + 0x5c) & 2) != 0)) {
      local_3d8 = (uint *)0xc0000000;
    }
  }
  else {
    local_3d8 = (uint *)0x3f800000;
  }
  if ((*(byte *)((int)pvVar27 + 0x5c) & 0x40) != 0) {
    local_3d8 = (uint *)0x40400000;
    iVar25 = 0;
    local_244[0] = *local_380 * 0.5;
    local_244[1] = *(float *)((int)pvVar27 + 0x84) * 0.5;
    local_244[2] = *(float *)((int)pvVar27 + 0x88) * 0.5;
    do {
      local_3d0 = (float *)(local_244[iVar25] * 65536.0);
      uVar33 = FUN_0054a946();
      local_210[iVar25 * 2] = (uint)uVar33;
      local_210[iVar25 * 2 + 1] = (uint)(uVar33 >> 0x20);
      iVar25 = iVar25 + 1;
    } while (iVar25 < 3);
    uVar20 = *puVar24;
    local_168 = uVar20 - local_210[0];
    local_164 = (puVar24[1] - local_210[1]) - (uint)(uVar20 < local_210[0]);
    local_160 = *(uint *)((int)local_3e8 + 0x18) - local_210[2];
    local_15c = (*(int *)((int)local_3e8 + 0x1c) - local_210[3]) -
                (uint)(*(uint *)((int)local_3e8 + 0x18) < local_210[2]);
    local_158 = *(uint *)((int)local_3e8 + 0x20) - local_210[4];
    local_154 = (*(int *)((int)local_3e8 + 0x24) - local_210[5]) -
                (uint)(*(uint *)((int)local_3e8 + 0x20) < local_210[4]);
    FUN_00405450(&local_dc,&local_168);
    pvVar27 = local_3e8;
    iVar25 = 0;
    local_298[0] = *local_380 * 0.5;
    local_298[1] = *(float *)((int)local_3e8 + 0x84) * 0.5;
    local_298[2] = *(float *)((int)local_3e8 + 0x88) * 0.5;
    do {
      local_3d0 = (float *)(local_298[iVar25] * 65536.0);
      uVar33 = FUN_0054a946();
      local_268[iVar25 * 2] = (uint)uVar33;
      local_268[iVar25 * 2 + 1] = (uint)(uVar33 >> 0x20);
      iVar25 = iVar25 + 1;
    } while (iVar25 < 3);
    local_210[6] = *local_3a0 + local_268[0];
    local_1f4 = local_3a0[1] + local_268[1] + (uint)CARRY4(*local_3a0,local_268[0]);
    local_1f0 = *(uint *)((int)pvVar27 + 0x18) + local_268[2];
    local_1ec = *(int *)((int)pvVar27 + 0x1c) + local_268[3] +
                (uint)CARRY4(*(uint *)((int)pvVar27 + 0x18),local_268[2]);
    local_1e8 = *(uint *)((int)pvVar27 + 0x20) + local_268[4];
    local_1e4 = *(int *)((int)pvVar27 + 0x24) + local_268[5] +
                (uint)CARRY4(*(uint *)((int)pvVar27 + 0x20),local_268[4]);
    FUN_00405450(local_14c + 3,local_210 + 6);
    uVar33 = CONCAT44(local_3cc,local_3e0);
    local_21c[0] = 1.0;
    local_21c[1] = 1.0;
    local_21c[2] = 0.0;
    iVar25 = 0;
    do {
      iVar22 = iVar25 + 4;
      *(int *)((int)local_104 + iVar25) = (int)*(float *)((int)local_21c + iVar25);
      iVar25 = iVar22;
    } while (iVar22 < 0xc);
    local_298[3] = 1.0;
    local_298[4] = 1.0;
    local_298[5] = 0.0;
    iVar25 = 0;
    do {
      iVar22 = iVar25 + 4;
      *(int *)((int)local_14c + iVar25) = (int)*(float *)((int)local_298 + iVar25 + 0xc);
      iVar25 = iVar22;
    } while (iVar22 < 0xc);
    piVar15 = (int *)((int)((local_dc - local_104[0]) + (local_dc - local_104[0] >> 0x1f & 7U)) >> 3
                     );
    pfVar19 = (float *)((int)((local_d8 - local_104[1]) + (local_d8 - local_104[1] >> 0x1f & 7U)) >>
                       3);
    local_3d0 = (float *)((int)(local_14c[3] + local_14c[0] +
                               (local_14c[3] + local_14c[0] >> 0x1f & 7U)) >> 3);
    iVar22 = (int)(local_13c + local_14c[1] + (local_13c + local_14c[1] >> 0x1f & 7U)) >> 3;
    local_328 = CONCAT44(local_328._4_4_,iVar22);
    iVar25 = local_38c;
    local_3c8 = pfVar19;
    local_3c4 = piVar15;
    uVar9 = local_3c0;
    uVar34 = local_3a8;
    if ((int)piVar15 <= (int)local_3d0) {
      do {
        local_3a8._4_4_ = (undefined4)(uVar34 >> 0x20);
        local_3a8._0_4_ = (float *)uVar34;
        local_3c0._4_4_ = (undefined4)(uVar9 >> 0x20);
        local_3c0._0_4_ = (float *)uVar9;
        uVar34 = CONCAT44((float *)local_3a8,(float *)local_3c0);
        pfVar23 = pfVar19;
        local_3dc = (int **)pfVar19;
        local_3c4 = piVar15;
        if ((int)pfVar19 <= iVar22) {
          do {
            local_3a8._0_4_ = (float *)(uVar34 >> 0x20);
            local_3c0._0_4_ = (float *)uVar34;
            local_3cc = (float)(uVar33 >> 0x20);
            local_3e0 = (float *)uVar33;
            local_3dc = (int **)pfVar19;
            local_340 = (int *)FUN_0041c9e0(local_37c,(uint)piVar15,(uint)pfVar19,0);
            uVar34 = CONCAT44((float *)local_3a8,(float *)local_3c0);
            uVar33 = CONCAT44(local_3cc,local_3e0);
            if ((local_340 != (int *)0x0) &&
               (piVar16 = *(int **)*local_340, uVar9 = local_358, piVar16 != (int *)*local_340)) {
              do {
                local_358._4_4_ = (undefined4)(uVar9 >> 0x20);
                local_3a8._0_4_ = (float *)(uVar34 >> 0x20);
                local_3e0 = (float *)uVar33;
                piVar15 = (int *)piVar16[2];
                if (((*piVar15 == 1) || (*piVar15 == 2)) && ((char)piVar15[0xc] != '\0')) {
                  local_2cc = (float)piVar15[0xb];
                  uVar2 = *(undefined8 *)(piVar15 + 9);
                  uVar20 = piVar15[8] & 0x80000001;
                  bVar28 = uVar20 == 0;
                  if ((int)uVar20 < 0) {
                    bVar28 = (uVar20 - 1 | 0xfffffffe) == 0xffffffff;
                  }
                  local_2d4._0_4_ = (float)uVar2;
                  local_2d4._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
                  if (bVar28) {
                    local_3cc = local_2d4._4_4_;
                    local_2d4._4_4_ = (float)local_2d4;
                  }
                  else {
                    local_3cc = (float)local_2d4;
                  }
                  local_358._0_4_ = *local_380 * 0.5 * 65536.0;
                  local_3c0._0_4_ = (float *)local_2d4._4_4_;
                  local_2d4 = uVar2;
                  uVar33 = FUN_0054a946();
                  local_3e0 = (float *)(uVar33 >> 0x20);
                  local_3a8._0_4_ = (float *)uVar33;
                  local_350 = CONCAT44(local_350._4_4_,(float)(float *)local_3c0 * 0.5 * 65536.0);
                  uVar33 = FUN_0054a946();
                  local_394 = (uint *)(uVar33 >> 0x20);
                  uVar21 = (uint)uVar33;
                  local_3c0._0_4_ = (float *)(piVar15[2] - uVar21);
                  iVar22 = (piVar15[3] - (int)local_394) - (uint)((uint)piVar15[2] < uVar21);
                  local_370 = CONCAT44(local_370._4_4_,uVar21);
                  uVar20 = *local_3a0;
                  local_3b8 = (uint *)(uVar20 + (int)(float *)local_3a8 + 0x10000);
                  iVar25 = local_3a0[1] + (int)local_3e0 +
                           (uint)CARRY4(uVar20,(uint)(float *)local_3a8) +
                           (uint)(0xfffeffff < uVar20 + (int)(float *)local_3a8);
                  uVar33 = CONCAT44(local_3cc,local_3e0);
                  if ((iVar22 <= iVar25) &&
                     ((iVar22 < iVar25 ||
                      (uVar33 = CONCAT44(local_3cc,local_3e0), (float *)local_3c0 <= local_3b8)))) {
                    iVar25 = ((local_3a0[1] - (int)local_3e0) - (uint)(uVar20 < (float *)local_3a8))
                             - (uint)(uVar20 - (int)(float *)local_3a8 < 0x10000);
                    iVar22 = (int)local_394 + (uint)CARRY4(uVar21,piVar15[2]) + piVar15[3];
                    uVar33 = CONCAT44(local_3cc,local_3e0);
                    if ((iVar25 <= iVar22) &&
                       ((iVar25 < iVar22 ||
                        (uVar33 = CONCAT44(local_3cc,local_3e0),
                        (uVar20 - (int)(float *)local_3a8) - 0x10000 < uVar21 + piVar15[2])))) {
                      local_39c = (undefined4 *)(*(float *)((int)local_3e8 + 0x84) * 0.5 * 65536.0);
                      uVar33 = FUN_0054a946();
                      local_3a8._0_4_ = (float *)(uVar33 >> 0x20);
                      local_3c0._0_4_ = (float *)uVar33;
                      local_33c = local_3cc * 0.5 * 65536.0;
                      puVar17 = *(uint **)((int)local_3e8 + 0x18);
                      uVar33 = FUN_0054a946();
                      pvVar27 = local_3e8;
                      local_3cc = (float)(uVar33 >> 0x20);
                      local_3e0 = (float *)uVar33;
                      local_3b8 = (uint *)((int)puVar17 + (int)(float *)local_3c0 + 0x10000);
                      iVar22 = *(int *)((int)local_3e8 + 0x1c) + (int)(float *)local_3a8 +
                               (uint)CARRY4((uint)puVar17,(uint)(float *)local_3c0) +
                               (uint)(0xfffeffff < (uint)((int)puVar17 + (int)(float *)local_3c0));
                      local_394 = (uint *)(piVar15[4] - (int)local_3e0);
                      iVar25 = (piVar15[5] - (int)local_3cc) - (uint)((uint)piVar15[4] < local_3e0);
                      if ((iVar25 <= iVar22) && ((iVar25 < iVar22 || (local_394 <= local_3b8)))) {
                        iVar22 = ((*(int *)((int)local_3e8 + 0x1c) - (int)(float *)local_3a8) -
                                 (uint)(puVar17 < (float *)local_3c0)) -
                                 (uint)((uint)((int)puVar17 - (int)(float *)local_3c0) < 0x10000);
                        iVar25 = (int)local_3cc + piVar15[5] +
                                 (uint)CARRY4((uint)local_3e0,piVar15[4]);
                        if ((iVar22 <= iVar25) &&
                           ((iVar22 < iVar25 ||
                            (((int)puVar17 - (int)(float *)local_3c0) - 0x10000U <
                             (uint)((int)local_3e0 + piVar15[4]))))) {
                          local_344 = *(float *)((int)local_3e8 + 0x88) * 0.5 * 65536.0;
                          uVar34 = FUN_0054a946();
                          local_3a8._0_4_ = (float *)(uVar34 >> 0x20);
                          local_3c0._0_4_ = (float *)uVar34;
                          iVar25 = *(int *)((int)pvVar27 + 0x24) + (int)(float *)local_3a8 +
                                   (uint)CARRY4(*(uint *)((int)pvVar27 + 0x20),
                                                (uint)(float *)local_3c0);
                          uVar33 = CONCAT44(local_3cc,local_3e0);
                          uVar9 = CONCAT44(local_358._4_4_,(float)local_358);
                          if ((piVar15[7] <= iVar25) &&
                             ((piVar15[7] < iVar25 ||
                              (uVar33 = CONCAT44(local_3cc,local_3e0),
                              uVar9 = CONCAT44(local_358._4_4_,(float)local_358),
                              (uint)piVar15[6] <=
                              *(uint *)((int)pvVar27 + 0x20) + (int)(float *)local_3c0)))) {
                            local_338 = local_2cc * 65536.0;
                            uVar33 = FUN_0054a946();
                            local_3b8 = (uint *)((uint)uVar33 + piVar15[6]);
                            iVar22 = (int)(uVar33 >> 0x20) + piVar15[7] +
                                     (uint)CARRY4((uint)uVar33,piVar15[6]);
                            iVar25 = (*(int *)((int)pvVar27 + 0x24) - (int)(float *)local_3a8) -
                                     (uint)(*(uint *)((int)pvVar27 + 0x20) < (float *)local_3c0);
                            uVar34 = CONCAT44((float *)local_3a8,(float *)local_3c0);
                            uVar33 = CONCAT44(local_3cc,local_3e0);
                            uVar9 = CONCAT44(local_358._4_4_,(float)local_358);
                            if ((iVar25 <= iVar22) &&
                               ((iVar25 < iVar22 ||
                                (uVar34 = CONCAT44((float *)local_3a8,(float *)local_3c0),
                                uVar33 = CONCAT44(local_3cc,local_3e0),
                                uVar9 = CONCAT44(local_358._4_4_,(float)local_358),
                                (uint *)(*(uint *)((int)pvVar27 + 0x20) - (int)(float *)local_3c0) <
                                local_3b8)))) {
                              *(undefined1 *)(piVar15 + 0xc) = 0;
                              *(undefined4 *)(piVar16[2] + 0x34) = 0;
                              uVar34 = CONCAT44((float *)local_3a8,(float *)local_3c0);
                              uVar33 = CONCAT44(local_3cc,local_3e0);
                              uVar9 = CONCAT44(local_358._4_4_,(float)local_358);
                            }
                          }
                          goto LAB_004dcb95;
                        }
                      }
                    }
                  }
                  uVar34 = CONCAT44((float *)local_3a8,(float *)local_3c0);
                  pvVar27 = local_3e8;
                  uVar9 = CONCAT44(local_358._4_4_,(float)local_358);
                }
LAB_004dcb95:
                local_358 = uVar9;
                piVar16 = (int *)*piVar16;
                piVar15 = local_3c4;
                uVar9 = local_358;
              } while (piVar16 != (int *)*local_340);
            }
            local_3a8._0_4_ = (float *)(uVar34 >> 0x20);
            local_3c0._0_4_ = (float *)uVar34;
            pfVar19 = (float *)((int)local_3dc + 1);
            iVar22 = (int)local_328;
            pfVar23 = local_3c8;
            local_3dc = (int **)pfVar19;
            uVar9 = CONCAT44(local_3c0._4_4_,(float *)local_3c0);
          } while ((int)pfVar19 <= (int)local_328);
        }
        local_3c0 = uVar9;
        piVar15 = (int *)((int)piVar15 + 1);
        pfVar19 = pfVar23;
        iVar25 = local_38c;
        local_3c4 = piVar15;
        uVar9 = local_3c0;
        uVar34 = local_3a8;
      } while ((int)piVar15 <= (int)local_3d0);
    }
  }
  if ((local_3d2 != '\0') && ((*(byte *)((int)pvVar27 + 0x124) & 1) == 0)) goto LAB_004dcfc6;
  if (iVar25 < 4) {
    if (local_3d2 == '\0') {
      if ((0.0 <= (float)local_3d8) && (local_3e9 == '\0')) {
        fVar30 = (float)local_3d8 * 4.0;
        iVar25 = 0;
        if (3 < param_2) {
          iVar22 = (param_2 - 4U >> 2) + 1;
          iVar25 = iVar22 * 4;
          do {
            fVar31 = (fVar30 - *(float *)((int)pvVar27 + 0x3c)) * 0.05 +
                     *(float *)((int)pvVar27 + 0x3c);
            fVar31 = (fVar30 - fVar31) * 0.05 + fVar31;
            fVar31 = (fVar30 - fVar31) * 0.05 + fVar31;
            *(float *)((int)pvVar27 + 0x3c) = (fVar30 - fVar31) * 0.05 + fVar31;
            iVar22 = iVar22 + -1;
          } while (iVar22 != 0);
        }
        if (iVar25 < param_2) {
          iVar25 = param_2 - iVar25;
          do {
            *(float *)((int)pvVar27 + 0x3c) =
                 (fVar30 - *(float *)((int)pvVar27 + 0x3c)) * 0.05 + *(float *)((int)pvVar27 + 0x3c)
            ;
            iVar25 = iVar25 + -1;
          } while (iVar25 != 0);
        }
      }
LAB_004dccea:
      fVar30 = 6.0;
      if ((*(byte *)((int)pvVar27 + 0x124) & 0x40) != 0) {
        fVar30 = 12.0;
      }
      iVar25 = 0;
      if (local_3d1 == '\0') {
        fVar31 = fVar30 * (float)local_3e4;
        if (3 < param_2) {
          iVar22 = (param_2 - 4U >> 2) + 1;
          iVar25 = iVar22 * 4;
          do {
            fVar32 = (fVar31 - *(float *)((int)pvVar27 + 0x34)) * 0.001 +
                     *(float *)((int)pvVar27 + 0x34);
            fVar32 = (fVar31 - fVar32) * 0.001 + fVar32;
            fVar32 = (fVar31 - fVar32) * 0.001 + fVar32;
            *(float *)((int)pvVar27 + 0x34) = (fVar31 - fVar32) * 0.001 + fVar32;
            iVar22 = iVar22 + -1;
          } while (iVar22 != 0);
        }
        if (iVar25 < param_2) {
          iVar25 = param_2 - iVar25;
          do {
            *(float *)((int)pvVar27 + 0x34) =
                 (fVar31 - *(float *)((int)pvVar27 + 0x34)) * 0.001 +
                 *(float *)((int)pvVar27 + 0x34);
            iVar25 = iVar25 + -1;
          } while (iVar25 != 0);
        }
        fVar30 = fVar30 * (float)local_3b0;
        iVar25 = 0;
        if (3 < param_2) {
          iVar22 = (param_2 - 4U >> 2) + 1;
          iVar25 = iVar22 * 4;
          do {
            fVar31 = (fVar30 - *(float *)((int)pvVar27 + 0x38)) * 0.001 +
                     *(float *)((int)pvVar27 + 0x38);
            fVar31 = (fVar30 - fVar31) * 0.001 + fVar31;
            fVar31 = (fVar30 - fVar31) * 0.001 + fVar31;
            *(float *)((int)pvVar27 + 0x38) = (fVar30 - fVar31) * 0.001 + fVar31;
            iVar22 = iVar22 + -1;
          } while (iVar22 != 0);
        }
        if (iVar25 < param_2) {
          iVar25 = param_2 - iVar25;
          do {
            *(float *)((int)pvVar27 + 0x38) =
                 (fVar30 - *(float *)((int)pvVar27 + 0x38)) * 0.001 +
                 *(float *)((int)pvVar27 + 0x38);
            iVar25 = iVar25 + -1;
          } while (iVar25 != 0);
        }
      }
      else {
        fVar30 = (float)local_3e4 * 8.0;
        if (3 < param_2) {
          iVar22 = (param_2 - 4U >> 2) + 1;
          iVar25 = iVar22 * 4;
          do {
            fVar31 = (fVar30 - *(float *)((int)pvVar27 + 0x34)) * 0.01 +
                     *(float *)((int)pvVar27 + 0x34);
            fVar31 = (fVar30 - fVar31) * 0.01 + fVar31;
            fVar31 = (fVar30 - fVar31) * 0.01 + fVar31;
            *(float *)((int)pvVar27 + 0x34) = (fVar30 - fVar31) * 0.01 + fVar31;
            iVar22 = iVar22 + -1;
          } while (iVar22 != 0);
        }
        if (iVar25 < param_2) {
          iVar25 = param_2 - iVar25;
          do {
            *(float *)((int)pvVar27 + 0x34) =
                 (fVar30 - *(float *)((int)pvVar27 + 0x34)) * 0.01 + *(float *)((int)pvVar27 + 0x34)
            ;
            iVar25 = iVar25 + -1;
          } while (iVar25 != 0);
        }
        iVar25 = 0;
        fVar30 = (float)local_3b0 * 8.0;
        if (3 < param_2) {
          iVar22 = (param_2 - 4U >> 2) + 1;
          iVar25 = iVar22 * 4;
          do {
            fVar31 = (fVar30 - *(float *)((int)pvVar27 + 0x38)) * 0.01 +
                     *(float *)((int)pvVar27 + 0x38);
            fVar31 = (fVar30 - fVar31) * 0.01 + fVar31;
            fVar31 = (fVar30 - fVar31) * 0.01 + fVar31;
            *(float *)((int)pvVar27 + 0x38) = (fVar30 - fVar31) * 0.01 + fVar31;
            iVar22 = iVar22 + -1;
          } while (iVar22 != 0);
        }
        if (iVar25 < param_2) {
          iVar25 = param_2 - iVar25;
          do {
            *(float *)((int)pvVar27 + 0x38) =
                 (fVar30 - *(float *)((int)pvVar27 + 0x38)) * 0.01 + *(float *)((int)pvVar27 + 0x38)
            ;
            iVar25 = iVar25 + -1;
          } while (iVar25 != 0);
        }
      }
    }
    else {
      if ((float)local_3d8 < 0.0) goto LAB_004dccea;
      *(float *)((int)pvVar27 + 0x34) = (float)local_3e4 * 8.0;
      *(float *)((int)pvVar27 + 0x38) = (float)local_3b0 * 8.0;
      *(float *)((int)pvVar27 + 0x3c) = (float)local_3d8 * 8.0;
    }
    *(float *)((int)pvVar27 + 0x40) = (float)local_3e4 * 20.0;
    *(float *)((int)pvVar27 + 0x44) = (float)local_3b0 * 20.0;
    *(float *)((int)pvVar27 + 0x48) = (float)local_3d8 * 20.0;
  }
  else {
    *(float *)((int)pvVar27 + 0x40) = (float)local_3e4 * 40.0;
    *(float *)((int)pvVar27 + 0x44) = (float)local_3b0 * 40.0;
    *(float *)((int)pvVar27 + 0x48) = (float)local_3d8 * 40.0;
  }
  *(undefined4 *)((int)pvVar27 + 0x4c) = 0;
  *(undefined4 *)((int)pvVar27 + 0x50) = 0;
  *(undefined4 *)((int)pvVar27 + 0x54) = 0;
LAB_004dcfc6:
  local_3cc = (float)(uVar33 >> 0x20);
  local_3e0 = (float *)uVar33;
  ExceptionList = local_14;
  __security_check_cookie(local_1c ^ (uint)auStack_3ec);
  return;
}


/* FUN_004dcdca @ 004dcdca  kind=gamemisc  attributed-by=none  size=226 */

void __fastcall FUN_004dcdca(int param_1,int param_2)

{
  int in_EAX;
  int iVar1;
  int unaff_EDI;
  float fVar2;
  float in_XMM2_Da;
  float in_XMM3_Da;
  float in_XMM5_Da;
  undefined4 uStack0000000c;
  float in_stack_00000018;
  float in_stack_0000004c;
  uint in_stack_000003e0;
  void *in_stack_000003e8;
  
  do {
    fVar2 = (in_XMM3_Da - *(float *)(unaff_EDI + 0x38)) * in_XMM2_Da + *(float *)(unaff_EDI + 0x38);
    fVar2 = (in_XMM3_Da - fVar2) * in_XMM2_Da + fVar2;
    fVar2 = (in_XMM3_Da - fVar2) * in_XMM2_Da + fVar2;
    *(float *)(unaff_EDI + 0x38) = (in_XMM3_Da - fVar2) * in_XMM2_Da + fVar2;
    param_1 = param_1 + -1;
  } while (param_1 != 0);
  if (param_2 < in_EAX) {
    iVar1 = in_EAX - param_2;
    do {
      *(float *)(unaff_EDI + 0x38) =
           (in_XMM3_Da - *(float *)(unaff_EDI + 0x38)) * in_XMM2_Da + *(float *)(unaff_EDI + 0x38);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  *(float *)(unaff_EDI + 0x40) = in_stack_00000018 * 20.0;
  *(float *)(unaff_EDI + 0x44) = in_stack_0000004c * 20.0;
  *(float *)(unaff_EDI + 0x48) = in_XMM5_Da * 20.0;
  *(undefined4 *)(unaff_EDI + 0x4c) = 0;
  *(undefined4 *)(unaff_EDI + 0x50) = 0;
  *(undefined4 *)(unaff_EDI + 0x54) = 0;
  uStack0000000c = 0x4dcfe6;
  ExceptionList = in_stack_000003e8;
  __security_check_cookie(in_stack_000003e0 ^ (uint)&stack0x00000010);
  return;
}


/* FUN_004dcff0 @ 004dcff0  kind=gamemisc  attributed-by=none  size=147 */

bool __thiscall FUN_004dcff0(void *this,undefined4 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int *local_10;
  int *local_c;
  undefined4 local_8;
  
  local_10 = (int *)0x0;
  local_c = (int *)0x0;
  local_8 = 0;
  FUN_0045f080(&local_10,3);
  piVar2 = local_10;
  *local_10 = (int)param_1;
  local_10[1] = param_2;
  local_10[2] = param_3;
  puVar1 = *(undefined4 **)((int)this + 0x1414);
  param_1 = FUN_004daf50((void *)((int)this + 0x1414),&local_10);
  if (param_1 != puVar1) {
    uVar3 = FUN_004da930(piVar2,local_c,(int *)param_1[4],(int *)param_1[5]);
    if ((char)uVar3 == '\0') goto LAB_004dd065;
  }
  param_1 = puVar1;
LAB_004dd065:
  operator_delete(local_10);
  return param_1 != puVar1;
}


/* FUN_004dd090 @ 004dd090  kind=gamemisc  attributed-by=none  size=89 */

int __cdecl FUN_004dd090(uint *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = (int)*param_1 >> 0x1f;
  iVar3 = (*param_1 ^ uVar1) - uVar1;
  uVar1 = (int)param_1[1] >> 0x1f;
  iVar4 = (param_1[1] ^ uVar1) - uVar1;
  uVar1 = (int)param_1[2] >> 0x1f;
  iVar2 = (param_1[2] ^ uVar1) - uVar1;
  if (iVar4 < iVar3) {
    return (iVar3 * 10 + iVar4 * 4 + iVar2 * 10) * 2;
  }
  return (iVar3 * 4 + iVar4 * 10 + iVar2 * 10) * 2;
}


/* FUN_004dd0f0 @ 004dd0f0  kind=gamemisc  attributed-by=none  size=171 */

undefined4 * __thiscall FUN_004dd0f0(void *this,undefined4 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int *local_10;
  int *local_c;
  undefined4 local_8;
  
  local_10 = (int *)0x0;
  local_c = (int *)0x0;
  local_8 = 0;
  FUN_0045f080(&local_10,3);
  piVar2 = local_10;
  *local_10 = (int)param_1;
  local_10[1] = param_2;
  local_10[2] = param_3;
  param_1 = FUN_004daf50((void *)((int)this + 0x140c),&local_10);
  puVar1 = *(undefined4 **)((int)this + 0x140c);
  if (param_1 != puVar1) {
    uVar3 = FUN_004da930(piVar2,local_c,(int *)param_1[4],(int *)param_1[5]);
    if ((char)uVar3 == '\0') goto LAB_004dd165;
  }
  param_1 = puVar1;
LAB_004dd165:
  if (param_1 == puVar1) {
    operator_delete(piVar2);
    return (undefined4 *)0x0;
  }
  operator_delete(piVar2);
  return param_1 + 7;
}


/* FUN_004dd9da @ 004dd9da  kind=gamemisc  attributed-by=none  size=1061 */

void __fastcall FUN_004dd9da(int param_1,uint param_2)

{
  int *piVar1;
  float fVar2;
  undefined8 uVar3;
  longlong lVar4;
  int in_EAX;
  int iVar5;
  uint uVar6;
  uint unaff_EBP;
  uint uVar7;
  int *piVar8;
  int unaff_EDI;
  int iVar9;
  bool bVar10;
  ulonglong uVar11;
  undefined4 uStack00000008;
  
  do {
    *(uint *)(unaff_EBP - 0x84) = param_2;
    if ((int)param_2 <= unaff_EDI) {
      do {
        if ((((-1 < param_1) && (-1 < (int)param_2)) && (param_1 < 0x200000)) &&
           ((int)param_2 < 0x200000)) {
          iVar9 = ((int)param_2 >> 0x1f & 0x1fU) + param_2;
          uVar7 = iVar9 >> 5;
          iVar5 = (param_1 >> 0x1f & 0x1fU) + param_1;
          uVar6 = iVar5 >> 5;
          if (((-1 < (int)uVar6) && (-1 < (int)uVar7)) &&
             (((int)uVar6 < 0x10000 && ((int)uVar7 < 0x10000)))) {
            iVar5 = (int)(uVar6 + (iVar5 >> 0x1f & 0x3fU)) >> 6;
            iVar9 = (int)((iVar9 >> 0x1f & 0x3fU) + uVar7) >> 6;
            if (((-1 < iVar5) && (-1 < iVar9)) &&
               ((iVar5 < 0x400 &&
                ((iVar9 < 0x400 &&
                 (iVar9 = *(int *)(*(int *)(unaff_EBP - 0xa4) + 0xbc + (iVar5 * 0x400 + iVar9) * 4),
                 iVar9 != 0)))))) {
              uVar6 = uVar6 & 0x8000003f;
              if ((int)uVar6 < 0) {
                uVar6 = (uVar6 - 1 | 0xffffffc0) + 1;
              }
              uVar7 = uVar7 & 0x8000003f;
              if ((int)uVar7 < 0) {
                uVar7 = (uVar7 - 1 | 0xffffffc0) + 1;
              }
              iVar9 = *(int *)(iVar9 + 0x10018 + (uVar6 * 0x40 + uVar7) * 4);
              if (iVar9 != 0) {
                uVar6 = param_2 & 0x8000001f;
                if ((int)uVar6 < 0) {
                  uVar6 = (uVar6 - 1 | 0xffffffe0) + 1;
                }
                uVar7 = *(uint *)(unaff_EBP - 0x38) & 0x8000001f;
                if ((int)uVar7 < 0) {
                  uVar7 = (uVar7 - 1 | 0xffffffe0) + 1;
                }
                piVar1 = (int *)(*(int *)(iVar9 + 0xac) + (uVar6 * 0x20 + uVar7) * 8);
                *(int **)(unaff_EBP - 0x6c) = piVar1;
                if ((piVar1 != (int *)0x0) && (piVar8 = *(int **)*piVar1, piVar8 != (int *)*piVar1))
                {
                  do {
                    piVar1 = (int *)piVar8[2];
                    iVar9 = *piVar1;
                    if (((iVar9 != 7) && ((iVar9 != 6 && (iVar9 != 9)))) &&
                       (((iVar9 != 1 &&
                         ((((iVar9 != 8 && (iVar9 != 2)) && (iVar9 != 3)) && (iVar9 != 5)))) ||
                        ((char)piVar1[0xc] != '\0')))) {
                      uVar3 = *(undefined8 *)(piVar1 + 9);
                      *(int *)(unaff_EBP - 8) = piVar1[0xb];
                      uVar6 = piVar1[8];
                      *(undefined8 *)(unaff_EBP - 0x10) = uVar3;
                      uVar6 = uVar6 & 0x80000001;
                      bVar10 = uVar6 == 0;
                      if ((int)uVar6 < 0) {
                        bVar10 = (uVar6 - 1 | 0xfffffffe) == 0xffffffff;
                      }
                      if (bVar10) {
                        *(undefined4 *)(unaff_EBP - 0x80) = *(undefined4 *)(unaff_EBP - 0xc);
                        fVar2 = *(float *)(unaff_EBP - 0x10);
                      }
                      else {
                        *(undefined4 *)(unaff_EBP - 0x80) = *(undefined4 *)(unaff_EBP - 0x10);
                        fVar2 = *(float *)(unaff_EBP - 0xc);
                      }
                      *(float *)(unaff_EBP - 0x90) = fVar2 * 0.5 * 65536.0;
                      uVar11 = FUN_0054a946();
                      *(int *)(unaff_EBP - 0x58) = (int)uVar11;
                      iVar9 = *(int *)(unaff_EBP - 0x4c);
                      *(int *)(unaff_EBP - 0x40) = (int)(uVar11 >> 0x20);
                      *(float *)(unaff_EBP - 0x8c) = *(float *)(iVar9 + 0x80) * 0.5 * 65536.0;
                      uVar11 = FUN_0054a946();
                      lVar4 = uVar11 + CONCAT44(*(undefined4 *)(unaff_EBP - 0x5c),
                                                *(undefined4 *)(unaff_EBP - 0x50));
                      iVar5 = (int)((ulonglong)lVar4 >> 0x20);
                      *(int *)(unaff_EBP - 100) = (int)lVar4;
                      uVar6 = piVar1[2];
                      uVar7 = *(uint *)(unaff_EBP - 0x58);
                      *(ulonglong *)(unaff_EBP - 0x74) = uVar11;
                      iVar9 = (piVar1[3] - *(int *)(unaff_EBP - 0x40)) - (uint)(uVar6 < uVar7);
                      if ((iVar9 <= iVar5) &&
                         ((iVar9 < iVar5 || (uVar6 - uVar7 <= *(uint *)(unaff_EBP - 100))))) {
                        iVar9 = (*(int *)(unaff_EBP - 0x5c) - *(int *)(unaff_EBP - 0x70)) -
                                (uint)(*(uint *)(unaff_EBP - 0x50) < *(uint *)(unaff_EBP - 0x74));
                        iVar5 = *(int *)(unaff_EBP - 0x40) + piVar1[3] +
                                (uint)CARRY4(uVar7,piVar1[2]);
                        if ((iVar9 <= iVar5) &&
                           ((iVar9 < iVar5 ||
                            (*(uint *)(unaff_EBP - 0x50) - *(uint *)(unaff_EBP - 0x74) <
                             uVar7 + piVar1[2])))) {
                          *(float *)(unaff_EBP - 0x98) =
                               *(float *)(unaff_EBP - 0x80) * 0.5 * 65536.0;
                          uVar11 = FUN_0054a946();
                          *(int *)(unaff_EBP - 0x58) = (int)uVar11;
                          iVar9 = *(int *)(unaff_EBP - 0x4c);
                          *(int *)(unaff_EBP - 0x40) = (int)(uVar11 >> 0x20);
                          *(float *)(unaff_EBP - 0x44) = *(float *)(iVar9 + 0x84) * 0.5 * 65536.0;
                          uVar11 = FUN_0054a946();
                          lVar4 = uVar11 + CONCAT44(*(undefined4 *)(unaff_EBP - 0x68),
                                                    *(undefined4 *)(unaff_EBP - 0x94));
                          iVar5 = (int)((ulonglong)lVar4 >> 0x20);
                          *(int *)(unaff_EBP - 100) = (int)lVar4;
                          uVar6 = piVar1[4];
                          uVar7 = *(uint *)(unaff_EBP - 0x58);
                          *(ulonglong *)(unaff_EBP - 0x74) = uVar11;
                          iVar9 = (piVar1[5] - *(int *)(unaff_EBP - 0x40)) - (uint)(uVar6 < uVar7);
                          if ((iVar9 <= iVar5) &&
                             ((iVar9 < iVar5 || (uVar6 - uVar7 <= *(uint *)(unaff_EBP - 100))))) {
                            iVar9 = (*(int *)(unaff_EBP - 0x68) - *(int *)(unaff_EBP - 0x70)) -
                                    (uint)(*(uint *)(unaff_EBP - 0x94) < *(uint *)(unaff_EBP - 0x74)
                                          );
                            iVar5 = *(int *)(unaff_EBP - 0x40) + piVar1[5] +
                                    (uint)CARRY4(uVar7,piVar1[4]);
                            if ((iVar9 <= iVar5) &&
                               ((iVar9 < iVar5 ||
                                (*(uint *)(unaff_EBP - 0x94) - *(uint *)(unaff_EBP - 0x74) <
                                 uVar7 + piVar1[4])))) {
                              *(float *)(unaff_EBP - 0x54) =
                                   *(float *)(*(int *)(unaff_EBP - 0x4c) + 0x88) * 0.5 * 65536.0;
                              uVar11 = FUN_0054a946();
                              lVar4 = uVar11 + CONCAT44(*(undefined4 *)(unaff_EBP - 0x88),
                                                        *(undefined4 *)(unaff_EBP - 0x78));
                              iVar9 = (int)((ulonglong)lVar4 >> 0x20);
                              *(int *)(unaff_EBP - 0x58) = (int)uVar11;
                              *(int *)(unaff_EBP - 100) = (int)(uVar11 >> 0x20);
                              if ((piVar1[7] <= iVar9) &&
                                 ((piVar1[7] < iVar9 || ((uint)piVar1[6] <= (uint)lVar4)))) {
                                *(float *)(unaff_EBP - 0x60) = *(float *)(unaff_EBP - 8) * 65536.0;
                                uVar11 = FUN_0054a946();
                                iVar5 = (int)(uVar11 >> 0x20) + piVar1[7] +
                                        (uint)CARRY4((uint)uVar11,piVar1[6]);
                                iVar9 = (*(int *)(unaff_EBP - 0x88) - *(int *)(unaff_EBP - 100)) -
                                        (uint)(*(uint *)(unaff_EBP - 0x78) <
                                              *(uint *)(unaff_EBP - 0x58));
                                if ((iVar9 <= iVar5) &&
                                   ((iVar9 < iVar5 ||
                                    (*(uint *)(unaff_EBP - 0x78) - *(uint *)(unaff_EBP - 0x58) <
                                     (uint)uVar11 + piVar1[6])))) {
                                  FUN_004da680(*(void **)(unaff_EBP - 0xa0),
                                               (undefined4 *)(unaff_EBP - 0x24),'\0',
                                               (uint *)(piVar8 + 2),(uint)DAT_0058426a);
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    piVar8 = (int *)*piVar8;
                  } while (piVar8 != (int *)**(int **)(unaff_EBP - 0x6c));
                  param_2 = *(uint *)(unaff_EBP - 0x84);
                }
              }
            }
            unaff_EDI = *(int *)(unaff_EBP - 0x3c);
          }
          param_1 = *(int *)(unaff_EBP - 0x38);
        }
        param_2 = param_2 + 1;
        *(uint *)(unaff_EBP - 0x84) = param_2;
      } while ((int)param_2 <= unaff_EDI);
      param_2 = *(uint *)(unaff_EBP - 0x9c);
      in_EAX = *(int *)(unaff_EBP - 0x48);
    }
    param_1 = param_1 + 1;
    *(int *)(unaff_EBP - 0x38) = param_1;
  } while (param_1 <= in_EAX);
  uStack00000008 = 0x4dddf9;
  __security_check_cookie(*(uint *)(unaff_EBP - 4) ^ unaff_EBP);
  return;
}


/* FUN_004dde00 @ 004dde00  kind=gamemisc  attributed-by=none  size=144 */

void __thiscall FUN_004dde00(void *this,float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = *(float *)((int)this + 0x14);
  *param_1 = *(float *)((int)this + 0x10) * fVar2 + fVar1 * *(float *)this +
             *(float *)((int)this + 0x20) * fVar3;
  fVar5 = *(float *)((int)this + 0x18);
  param_1[1] = *(float *)((int)this + 4) * fVar1 + fVar4 * fVar2 +
               *(float *)((int)this + 0x24) * fVar3;
  param_1[2] = *(float *)((int)this + 8) * fVar1 + fVar5 * fVar2 +
               *(float *)((int)this + 0x28) * fVar3;
  return;
}


/* FUN_004dde90 @ 004dde90  kind=gamemisc  attributed-by=none  size=10330 */

/* WARNING: Removing unreachable block (ram,0x004df1bb) */
/* WARNING: Removing unreachable block (ram,0x004deb9a) */
/* WARNING: Removing unreachable block (ram,0x004dec8e) */
/* WARNING: Removing unreachable block (ram,0x004def61) */
/* WARNING: Removing unreachable block (ram,0x004df550) */
/* WARNING: Removing unreachable block (ram,0x004df64b) */
/* WARNING: Removing unreachable block (ram,0x004df0b8) */
/* WARNING: Removing unreachable block (ram,0x004df307) */

void __thiscall FUN_004dde90(void *this,void *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  bool bVar5;
  uint *puVar6;
  undefined *puVar7;
  float fVar8;
  undefined4 *puVar9;
  undefined4 **ppuVar10;
  int iVar11;
  int *piVar12;
  undefined4 *puVar13;
  char cVar14;
  int iVar15;
  uint uVar16;
  undefined4 *puVar17;
  int iVar18;
  int *piVar19;
  char cVar20;
  void *pvVar21;
  int *piVar22;
  uint uVar23;
  uint uVar24;
  int *piVar25;
  undefined4 *puVar26;
  void *this_00;
  uint uVar27;
  float fVar28;
  uint uVar29;
  bool bVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  uint *puVar35;
  undefined8 local_238;
  uint local_230;
  int local_22c;
  int local_228;
  int local_224;
  undefined8 local_220;
  uint local_218;
  int local_214;
  uint local_210;
  int local_20c;
  undefined8 local_208;
  int local_200;
  int local_1fc;
  int local_1f8;
  int local_1f4;
  uint local_1f0;
  int local_1ec;
  undefined8 local_1e8;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  undefined4 *local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  undefined4 *local_188;
  float local_184;
  int local_180;
  int local_17c;
  int *local_178;
  int *local_174;
  int *local_170;
  int *local_16c;
  int *local_168;
  int *local_164;
  uint local_160;
  uint local_15c;
  uint local_158;
  int *local_154;
  uint local_150;
  int *local_14c;
  void *local_148;
  int *local_144;
  int *local_140;
  uint local_13c;
  int *local_138;
  int *local_134;
  uint local_130;
  uint local_12c;
  uint local_128;
  float local_124;
  int *local_120;
  uint local_11c;
  int *local_118;
  int *local_114;
  int *local_110;
  int *local_10c;
  int *local_108;
  int *local_104;
  uint local_100;
  uint local_fc;
  uint *local_f8;
  int *local_f4;
  int local_f0;
  uint local_ec;
  int *local_e8;
  int *local_e4;
  uint local_e0;
  int local_dc;
  float local_d8;
  uint local_d4;
  char local_cd;
  uint local_cc;
  uint *local_c8;
  char local_c1;
  int *local_c0;
  uint local_bc;
  float local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  undefined4 *local_a8;
  char local_a1;
  uint local_a0;
  uint local_9c;
  int *local_98;
  void *local_94;
  char local_8e;
  byte local_8d;
  uint local_8c;
  int local_88;
  uint local_84;
  int local_80;
  uint local_7c;
  int local_78;
  undefined4 *local_74;
  uint local_70;
  uint local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  int local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  undefined8 local_2c;
  float local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  undefined4 *local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_94 = param_1;
  local_148 = this;
  if (*(uint *)((int)param_1 + 0x1410) != 0) {
    uVar23 = *(uint *)((int)param_1 + 0x1418);
    if ((uVar23 < 0x1f5) && (*(uint *)((int)param_1 + 0x1410) < 0x4e21)) {
      local_f8 = (uint *)((int)param_1 + 0x1440);
      FUN_00405450((int *)&local_2c,local_f8);
      if (uVar23 != 0) {
        uVar23 = 0xffffffff;
        piVar12 = (int *)**(int **)((int)param_1 + 0x1414);
        local_c8 = (uint *)0x0;
        local_104 = piVar12;
        if (piVar12 != *(int **)((int)param_1 + 0x1414)) {
          do {
            piVar25 = local_104;
            puVar26 = (undefined4 *)local_104[4];
            puVar6 = FUN_004dd0f0(local_94,(undefined4 *)*puVar26,puVar26[1],puVar26[2]);
            if ((puVar6 != (uint *)0x0) &&
               ((local_c8 == (uint *)0x0 || ((int)puVar6[2] < (int)uVar23)))) {
              uVar23 = puVar6[2];
              piVar12 = piVar25;
              local_c8 = puVar6;
            }
            FUN_00407a50((int *)&local_104);
          } while (local_104 != *(int **)((int)local_94 + 0x1414));
        }
        pvVar21 = local_94;
        puVar6 = (uint *)piVar12[4];
        local_a0 = puVar6[1];
        uVar23 = puVar6[2];
        local_a8 = (undefined4 *)*puVar6;
        local_9c = uVar23;
        local_74 = local_a8;
        local_70 = local_a0;
        local_6c = uVar23;
        FUN_0040a4f0((void *)((int)local_94 + 0x1414),&local_138,piVar12);
        iVar15 = 0;
        do {
          if (*(int *)((int)&local_74 + iVar15) != *(int *)((int)&local_2c + iVar15)) {
            local_34 = ((int)local_a8 >> 0x1f) << 0x10 | (uint)local_a8 >> 0x10;
            local_38 = (int)local_a8 << 0x10;
            local_30 = local_a0 << 0x10;
            local_58 = (double)*(float *)((int)pvVar21 + 0x88) * 0.5 * 65536.0;
            local_24 = (float)(((int)uVar23 >> 0x1f) << 0x10 | uVar23 >> 0x10);
            local_2c = CONCAT44(uVar23 << 0x10,((int)local_a0 >> 0x1f) << 0x10 | local_a0 >> 0x10);
            puVar6 = &local_38;
            puVar35 = &local_50;
            uVar31 = FUN_0054a946();
            local_68 = FUN_0054a946();
            local_60 = local_68;
            local_58 = (double)uVar31;
            FUN_00402cb0(&local_68,puVar35,puVar6);
            local_2c = 0;
            local_24 = 0.01;
            FUN_00402510((int)&local_8c);
            local_24 = *(float *)((int)pvVar21 + 0x88) * 0.5;
            local_2c = CONCAT44(*(float *)((int)pvVar21 + 0x84) * 0.5,
                                *(float *)((int)pvVar21 + 0x80) * 0.5);
            FUN_00402510((int)&local_68);
            local_12c = local_50 - (uint)local_68;
            local_130 = (local_4c - local_68._4_4_) - (uint)(local_50 < (uint)local_68);
            local_38 = local_8c + local_12c;
            local_34 = local_88 + local_130 + (uint)CARRY4(local_8c,local_12c);
            local_30 = local_84 + (local_48 - (uint)local_60);
            local_24 = (float)(local_78 +
                               ((local_3c - local_58._4_4_) - (uint)(local_40 < (uint)local_58)) +
                              (uint)CARRY4(local_7c,local_40 - (uint)local_58));
            local_2c = CONCAT44(local_7c + (local_40 - (uint)local_58),
                                local_80 +
                                ((local_44 - local_60._4_4_) - (uint)(local_48 < (uint)local_60)) +
                                (uint)CARRY4(local_84,local_48 - (uint)local_60));
            FUN_00405450((int *)((int)&local_60 + 4),&local_38);
            local_24 = *(float *)((int)local_94 + 0x88) * 0.5;
            local_2c = CONCAT44(*(float *)((int)local_94 + 0x84) * 0.5,
                                *(float *)((int)local_94 + 0x80) * 0.5);
            FUN_00402510((int)&local_8c);
            local_20 = local_50 + local_8c;
            local_1c = local_4c + local_88 + (uint)CARRY4(local_50,local_8c);
            local_18 = local_48 + local_84;
            local_14 = (undefined4 *)(local_44 + local_80 + (uint)CARRY4(local_48,local_84));
            local_10 = local_40 + local_7c;
            local_c = local_3c + local_78 + (uint)CARRY4(local_40,local_7c);
            FUN_00405450((int *)&local_2c,&local_20);
            local_d8 = (float)(local_58._4_4_ + -1);
            local_b8 = (float)((int)local_24 + 1);
            uVar24 = local_60._4_4_ - 1;
            uVar27 = (uint)local_58 - 1;
            uVar23 = (int)(float)local_2c + 1;
            local_d4 = (int)local_2c._4_4_ + 1;
            local_13c = (int)(uVar24 + ((int)uVar24 >> 0x1f & 7U)) >> 3;
            local_12c = (int)(uVar27 + ((int)uVar27 >> 0x1f & 7U)) >> 3;
            local_17c = (int)(uVar23 + ((int)uVar23 >> 0x1f & 7U)) >> 3;
            local_180 = (int)(local_d4 + ((int)local_d4 >> 0x1f & 7U)) >> 3;
            local_150 = local_150 & 0xffffff00;
            local_158 = local_158 & 0xffffff00;
            local_160 = local_160 & 0xffffff00;
            local_15c = local_15c & 0xffffff00;
            local_8e = '\0';
            local_e8 = (int *)((uint)local_e8 & 0xffffff00);
            local_f4 = (int *)((uint)local_f4 & 0xffffff00);
            local_108 = (int *)((uint)local_108 & 0xffffff00);
            local_e4 = (int *)((uint)local_e4 & 0xffffff00);
            local_98 = (int *)((uint)local_98 & 0xffffff00);
            local_168 = (int *)((uint)local_168 & 0xffffff00);
            local_178 = (int *)((uint)local_178 & 0xffffff00);
            local_154 = (int *)((uint)local_154 & 0xffffff00);
            local_164 = (int *)((uint)local_164 & 0xffffff00);
            local_140 = (int *)((uint)local_140 & 0xffffff00);
            local_144 = (int *)((uint)local_144 & 0xffffff00);
            local_14c = (int *)((uint)local_14c & 0xffffff00);
            local_170 = (int *)((uint)local_170 & 0xffffff00);
            local_10c = (int *)((uint)local_10c & 0xffffff00);
            local_16c = (int *)((uint)local_16c & 0xffffff00);
            local_174 = (int *)((uint)local_174 & 0xffffff00);
            local_104 = (int *)((uint)local_104 & 0xffffff00);
            local_118 = (int *)((uint)local_118 & 0xffffff00);
            local_120 = (int *)((uint)local_120 & 0xffffff00);
            local_110 = (int *)((uint)local_110 & 0xffffff00);
            local_114 = (int *)((uint)local_114 & 0xffffff00);
            local_134 = (int *)((uint)local_134 & 0xffffff00);
            local_bc = uVar24;
            local_b0 = uVar27;
            local_ac = uVar23;
            uVar31 = FUN_0054a946();
            iVar15 = FUN_00406050(local_148,local_50,local_4c,local_48,local_44,
                                  local_40 - (uint)uVar31,
                                  (local_3c - (int)(uVar31 >> 0x20)) -
                                  (uint)(local_40 < (uint)uVar31),0);
            local_8d = *(byte *)(iVar15 + 3) >> 1 & 1;
            local_c0 = (int *)0x1;
            uVar16 = local_d4;
            if ((int)uVar24 <= (int)uVar23) {
              do {
                fVar8 = local_d8;
                uVar29 = uVar27;
                if ((int)uVar27 <= (int)uVar16) {
                  do {
                    fVar28 = fVar8;
                    if ((int)fVar8 <= (int)local_b8) {
                      do {
                        if ((((((int)uVar24 <= (int)local_bc) || ((int)local_ac <= (int)uVar24)) ||
                             ((int)uVar29 <= (int)uVar27)) ||
                            (((int)uVar16 <= (int)uVar29 || ((int)fVar28 <= (int)fVar8)))) ||
                           ((int)local_b8 <= (int)fVar28)) {
                          if ((((int)uVar24 < 0) || ((int)uVar29 < 0)) ||
                             ((0xffffff < (int)uVar24 ||
                              ((0xffffff < (int)uVar29 ||
                               (iVar15 = FUN_00406290(local_148,
                                                      (int)(uVar24 + ((int)uVar24 >> 0x1f & 0xffU))
                                                      >> 8,(int)(uVar29 + ((int)uVar29 >> 0x1f &
                                                                          0xffU)) >> 8), iVar15 == 0
                               )))))) {
LAB_004de4aa:
                            puVar7 = &DAT_00584274;
                          }
                          else {
                            uVar23 = uVar29 & 0x800000ff;
                            if ((int)uVar23 < 0) {
                              uVar23 = (uVar23 - 1 | 0xffffff00) + 1;
                            }
                            uVar16 = uVar24 & 0x800000ff;
                            if ((int)uVar16 < 0) {
                              uVar16 = (uVar16 - 1 | 0xffffff00) + 1;
                            }
                            pvVar21 = (void *)((uVar23 * 0x100 + uVar16) * 0x20 +
                                              *(int *)(iVar15 + 0xa8));
                            if ((pvVar21 == (void *)0x0) ||
                               (iVar15 = *(int *)((int)pvVar21 + 0x10), (int)fVar28 < iVar15))
                            goto LAB_004de4aa;
                            if ((int)fVar28 < *(int *)((int)pvVar21 + 0x1c) + iVar15) {
                              puVar7 = FUN_00405f20(pvVar21,(int)fVar28 - iVar15);
                              if ((((puVar7[3] & 0x1f) == 0) && ((int)fVar28 < 1)) &&
                                 ((puVar7[3] & 0x40) == 0)) {
                                puVar7 = &DAT_0058426c;
                              }
                            }
                            else {
                              puVar7 = &DAT_0058426c;
                              if (0 < (int)fVar28) {
                                puVar7 = &DAT_00584270;
                              }
                            }
                          }
                          fVar8 = local_d8;
                          uVar16 = local_d4;
                          uVar27 = local_b0;
                          if (((puVar7[3] & 0x1f) != 0) && ((puVar7[3] & 0x1f) != 2)) {
                            if ((uVar24 == local_bc) &&
                               ((uVar29 == local_b0 &&
                                (local_10c = (int *)((uint)local_10c & 0xff), fVar28 == local_d8))))
                            {
                              local_10c = local_c0;
                            }
                            if (((uVar24 == local_ac) && (uVar29 == local_b0)) &&
                               (local_16c = (int *)((uint)local_16c & 0xff), fVar28 == local_d8)) {
                              local_16c = local_c0;
                            }
                            if (((uVar24 == local_bc) && (uVar29 == local_d4)) &&
                               (local_174 = (int *)((uint)local_174 & 0xff), fVar28 == local_d8)) {
                              local_174 = local_c0;
                            }
                            if (((uVar24 == local_ac) && (uVar29 == local_d4)) &&
                               (local_104 = (int *)((uint)local_104 & 0xff), fVar28 == local_d8)) {
                              local_104 = local_c0;
                            }
                            if ((((uVar24 == local_bc) && (uVar29 == local_b0)) &&
                                ((int)local_d8 < (int)fVar28)) &&
                               (local_118 = (int *)((uint)local_118 & 0xff),
                               (int)fVar28 < (int)local_b8)) {
                              local_118 = local_c0;
                            }
                            if (((uVar24 == local_ac) && (uVar29 == local_b0)) &&
                               (((int)local_d8 < (int)fVar28 &&
                                (local_120 = (int *)((uint)local_120 & 0xff),
                                (int)fVar28 < (int)local_b8)))) {
                              local_120 = local_c0;
                            }
                            if (((uVar24 == local_bc) && (uVar29 == local_d4)) &&
                               (((int)local_d8 < (int)fVar28 &&
                                (local_110 = (int *)((uint)local_110 & 0xff),
                                (int)fVar28 < (int)local_b8)))) {
                              local_110 = local_c0;
                            }
                            if ((((uVar24 == local_ac) && (uVar29 == local_d4)) &&
                                ((int)local_d8 < (int)fVar28)) &&
                               (local_114 = (int *)((uint)local_114 & 0xff),
                               (int)fVar28 < (int)local_b8)) {
                              local_114 = local_c0;
                            }
                            if ((((int)local_bc < (int)uVar24) && ((int)uVar24 < (int)local_ac)) &&
                               ((int)local_b0 < (int)uVar29)) {
                              if (((int)uVar29 < (int)local_d4) &&
                                 (local_98 = (int *)((uint)local_98 & 0xff), fVar28 == local_d8)) {
                                local_98 = local_c0;
                              }
                              if ((((int)local_b0 < (int)uVar29) && ((int)uVar29 < (int)local_d4))
                                 && (local_134 = (int *)((uint)local_134 & 0xff), fVar28 == local_b8
                                    )) {
                                local_134 = local_c0;
                              }
                            }
                            if (((uVar24 == local_bc) && ((int)local_b0 < (int)uVar29)) &&
                               (((int)uVar29 < (int)local_d4 &&
                                (local_168 = (int *)((uint)local_168 & 0xff), fVar28 == local_d8))))
                            {
                              local_168 = local_c0;
                            }
                            if (((uVar24 == local_ac) && ((int)local_b0 < (int)uVar29)) &&
                               (((int)uVar29 < (int)local_d4 &&
                                (local_178 = (int *)((uint)local_178 & 0xff), fVar28 == local_d8))))
                            {
                              local_178 = local_c0;
                            }
                            if ((((uVar29 == local_b0) && ((int)local_bc < (int)uVar24)) &&
                                ((int)uVar24 < (int)local_ac)) &&
                               (local_154 = (int *)((uint)local_154 & 0xff), fVar28 == local_d8)) {
                              local_154 = local_c0;
                            }
                            if (((uVar29 == local_d4) && ((int)local_bc < (int)uVar24)) &&
                               (((int)uVar24 < (int)local_ac &&
                                (local_164 = (int *)((uint)local_164 & 0xff), fVar28 == local_d8))))
                            {
                              local_164 = local_c0;
                            }
                            if (((uVar24 == local_bc) && ((int)local_b0 < (int)uVar29)) &&
                               (((int)uVar29 < (int)local_d4 &&
                                (local_140 = (int *)((uint)local_140 & 0xff), fVar28 == local_b8))))
                            {
                              local_140 = local_c0;
                            }
                            if ((((uVar24 == local_ac) && ((int)local_b0 < (int)uVar29)) &&
                                ((int)uVar29 < (int)local_d4)) &&
                               (local_144 = (int *)((uint)local_144 & 0xff), fVar28 == local_b8)) {
                              local_144 = local_c0;
                            }
                            if (((uVar29 == local_b0) && ((int)local_bc < (int)uVar24)) &&
                               (((int)uVar24 < (int)local_ac &&
                                (local_14c = (int *)((uint)local_14c & 0xff), fVar28 == local_b8))))
                            {
                              local_14c = local_c0;
                            }
                            if (((uVar29 == local_d4) && ((int)local_bc < (int)uVar24)) &&
                               (((int)uVar24 < (int)local_ac &&
                                (local_170 = (int *)((uint)local_170 & 0xff), fVar28 == local_d8))))
                            {
                              local_170 = local_c0;
                            }
                            if ((((uVar24 == local_bc) && ((int)local_b0 < (int)uVar29)) &&
                                ((int)uVar29 < (int)local_d4)) &&
                               (((int)local_d8 < (int)fVar28 &&
                                (local_e8 = (int *)((uint)local_e8 & 0xff),
                                (int)fVar28 < (int)local_b8)))) {
                              local_e8 = local_c0;
                            }
                            if (((uVar24 == local_ac) && ((int)local_b0 < (int)uVar29)) &&
                               (((int)uVar29 < (int)local_d4 &&
                                (((int)local_d8 < (int)fVar28 &&
                                 (local_f4 = (int *)((uint)local_f4 & 0xff),
                                 (int)fVar28 < (int)local_b8)))))) {
                              local_f4 = local_c0;
                            }
                            if ((((uVar29 == local_b0) && ((int)local_bc < (int)uVar24)) &&
                                ((int)uVar24 < (int)local_ac)) &&
                               (((int)local_d8 < (int)fVar28 &&
                                (local_108 = (int *)((uint)local_108 & 0xff),
                                (int)fVar28 < (int)local_b8)))) {
                              local_108 = local_c0;
                            }
                            if (((uVar29 == local_d4) && ((int)local_bc < (int)uVar24)) &&
                               (((int)uVar24 < (int)local_ac &&
                                (((int)local_d8 < (int)fVar28 &&
                                 (local_e4 = (int *)((uint)local_e4 & 0xff),
                                 (int)fVar28 < (int)local_b8)))))) {
                              local_e4 = local_c0;
                            }
                          }
                        }
                        fVar28 = (float)((int)fVar28 + 1);
                      } while ((int)fVar28 <= (int)local_b8);
                    }
                    uVar29 = uVar29 + 1;
                    uVar23 = local_ac;
                  } while ((int)uVar29 <= (int)uVar16);
                }
                uVar24 = uVar24 + 1;
              } while ((int)uVar24 <= (int)uVar23);
            }
            uVar33 = CONCAT44(local_cc,local_b4);
            uVar32 = CONCAT44(local_f0,local_c0);
            lVar2 = CONCAT44(local_fc,local_bc);
            uVar31 = CONCAT44(local_dc,local_ec);
            uVar23 = local_12c;
            iVar15 = local_17c;
            iVar18 = local_180;
            if ((int)local_13c <= local_17c) {
              do {
                uVar16 = uVar23;
                uVar27 = local_13c;
                local_130 = uVar23;
                if ((int)uVar23 <= iVar18) {
                  do {
                    local_cc = (uint)(uVar33 >> 0x20);
                    local_b4 = (uint)uVar33;
                    local_f0 = (int)(uVar32 >> 0x20);
                    local_c0 = (int *)uVar32;
                    local_fc = (uint)((ulonglong)lVar2 >> 0x20);
                    local_bc = (uint)lVar2;
                    local_dc = (int)(uVar31 >> 0x20);
                    local_ec = (uint)uVar31;
                    if ((((-1 < (int)uVar27) && (-1 < (int)uVar23)) && ((int)uVar27 < 0x200000)) &&
                       ((int)uVar23 < 0x200000)) {
                      local_130 = uVar23;
                      iVar15 = FUN_00406290(local_148,
                                            (int)(uVar27 + ((int)uVar27 >> 0x1f & 0x1fU)) >> 5,
                                            (int)(uVar23 + ((int)uVar23 >> 0x1f & 0x1fU)) >> 5);
                      uVar33 = CONCAT44(local_cc,local_b4);
                      uVar32 = CONCAT44(local_f0,local_c0);
                      lVar2 = CONCAT44(local_fc,local_bc);
                      uVar31 = CONCAT44(local_dc,local_ec);
                      if (iVar15 != 0) {
                        uVar16 = uVar23 & 0x8000001f;
                        if ((int)uVar16 < 0) {
                          uVar16 = (uVar16 - 1 | 0xffffffe0) + 1;
                        }
                        uVar24 = uVar27 & 0x8000001f;
                        if ((int)uVar24 < 0) {
                          uVar24 = (uVar24 - 1 | 0xffffffe0) + 1;
                        }
                        puVar26 = (undefined4 *)
                                  (*(int *)(iVar15 + 0xac) + (uVar16 * 0x20 + uVar24) * 8);
                        if (puVar26 != (undefined4 *)0x0) {
                          local_138 = (int *)*puVar26;
                          piVar12 = (int *)*local_138;
                          uVar27 = local_13c;
                          if (piVar12 != local_138) {
                            puVar26 = *(undefined4 **)((int)local_94 + 0x1468);
                            do {
                              local_cc = (uint)(uVar33 >> 0x20);
                              local_b4 = (uint)uVar33;
                              local_f0 = (int)(uVar32 >> 0x20);
                              local_c0 = (int *)uVar32;
                              local_fc = (uint)((ulonglong)lVar2 >> 0x20);
                              local_bc = (uint)lVar2;
                              local_dc = (int)(uVar31 >> 0x20);
                              local_ec = (uint)uVar31;
                              if (*(char *)((int)puVar26[1] + 0xd) == '\0') {
                                puVar13 = (undefined4 *)puVar26[1];
                                puVar17 = puVar26;
                                do {
                                  if ((uint)puVar13[4] < (uint)piVar12[2]) {
                                    puVar9 = (undefined4 *)puVar13[2];
                                  }
                                  else {
                                    puVar9 = (undefined4 *)*puVar13;
                                    puVar17 = puVar13;
                                  }
                                  puVar13 = puVar9;
                                } while (*(char *)((int)puVar9 + 0xd) == '\0');
                                if ((puVar17 == puVar26) || ((uint)piVar12[2] < (uint)puVar17[4]))
                                goto LAB_004dea80;
                                local_188 = puVar17;
                                ppuVar10 = &local_188;
                              }
                              else {
LAB_004dea80:
                                local_1c0 = puVar26;
                                ppuVar10 = &local_1c0;
                              }
                              if (*ppuVar10 == puVar26) {
                                piVar25 = (int *)piVar12[2];
                                local_24 = (float)piVar25[0xb];
                                uVar1 = *(undefined8 *)(piVar25 + 9);
                                uVar23 = piVar25[8] & 0x80000001;
                                bVar30 = uVar23 == 0;
                                if ((int)uVar23 < 0) {
                                  bVar30 = (uVar23 - 1 | 0xfffffffe) == 0xffffffff;
                                }
                                local_2c._0_4_ = (float)uVar1;
                                local_2c._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
                                if (bVar30) {
                                  local_d8 = local_2c._4_4_;
                                  local_2c._4_4_ = (float)local_2c;
                                }
                                else {
                                  local_d8 = (float)local_2c;
                                }
                                local_11c = piVar25[3];
                                local_1c8 = local_2c._4_4_ * 0.5 * 65536.0;
                                local_2c = uVar1;
                                uVar31 = FUN_0054a946();
                                local_d4 = (uint)(uVar31 >> 0x20);
                                local_128 = (uint)uVar31;
                                local_b8 = (float)(piVar25[2] - local_128);
                                local_b0 = (piVar25[3] - local_d4) -
                                           (uint)((uint)piVar25[2] < local_128);
                                local_1b0 = *(float *)((int)local_94 + 0x80) * 0.5 * 65536.0;
                                uVar32 = FUN_0054a946();
                                local_f0 = (int)(uVar32 >> 0x20);
                                local_c0 = (int *)uVar32;
                                lVar2 = uVar32 + CONCAT44(local_4c,local_50);
                                local_bc = (uint)lVar2;
                                local_fc = (uint)((ulonglong)lVar2 >> 0x20);
                                local_124 = local_24;
                                uVar23 = local_ec;
                                uVar33 = CONCAT44(local_cc,local_b4);
                                if (CONCAT44(local_b0,local_b8) <= lVar2) {
                                  local_cc = local_50 - (int)local_c0;
                                  iVar18 = (local_4c - local_f0) - (uint)(local_50 < local_c0);
                                  iVar15 = local_d4 + piVar25[3] +
                                           (uint)CARRY4(local_128,piVar25[2]);
                                  uVar33 = CONCAT44(local_cc,local_b4);
                                  if ((iVar18 <= iVar15) &&
                                     ((iVar18 < iVar15 ||
                                      (uVar33 = CONCAT44(local_cc,local_b4),
                                      local_cc < local_128 + piVar25[2])))) {
                                    local_1ac = local_d8 * 0.5 * 65536.0;
                                    uVar31 = FUN_0054a946();
                                    local_dc = (int)(uVar31 >> 0x20);
                                    local_ec = (uint)uVar31;
                                    local_18c = *(float *)((int)local_94 + 0x84) * 0.5 * 65536.0;
                                    uVar33 = FUN_0054a946();
                                    local_cc = (uint)(uVar33 >> 0x20);
                                    local_e0 = piVar25[4] - local_ec;
                                    lVar3 = uVar33 + CONCAT44(local_44,local_48);
                                    uVar23 = (uint)lVar3;
                                    lVar2 = CONCAT44(local_fc,local_bc);
                                    uVar32 = CONCAT44(local_f0,local_c0);
                                    if (CONCAT44((piVar25[5] - local_dc) -
                                                 (uint)((uint)piVar25[4] < local_ec),local_e0) <=
                                        lVar3) {
                                      iVar18 = local_dc + piVar25[5] +
                                               (uint)CARRY4(local_ec,piVar25[4]);
                                      local_b4 = local_48 - (uint)uVar33;
                                      iVar15 = (local_44 - local_cc) -
                                               (uint)(local_48 < (uint)uVar33);
                                      lVar2 = CONCAT44(local_fc,local_bc);
                                      uVar32 = CONCAT44(local_f0,local_c0);
                                      uVar33 = CONCAT44(local_cc,local_b4);
                                      if ((iVar15 <= iVar18) &&
                                         ((iVar15 < iVar18 ||
                                          (lVar2 = CONCAT44(local_fc,local_bc),
                                          uVar32 = CONCAT44(local_f0,local_c0),
                                          uVar33 = CONCAT44(local_cc,local_b4),
                                          local_b4 < local_ec + piVar25[4])))) {
                                        local_1d0 = *(float *)((int)local_94 + 0x88) * 0.5 * 65536.0
                                        ;
                                        local_ec = uVar23;
                                        uVar31 = FUN_0054a946();
                                        local_e0 = (uint)(uVar31 >> 0x20);
                                        local_b4 = (uint)uVar31;
                                        lVar2 = uVar31 + CONCAT44(local_3c,local_40);
                                        uVar16 = (uint)lVar2;
                                        iVar15 = (int)((ulonglong)lVar2 >> 0x20) -
                                                 (uint)(uVar16 < 0x10000);
                                        uVar23 = local_ec;
                                        lVar2 = CONCAT44(local_fc,local_bc);
                                        uVar32 = CONCAT44(local_f0,local_c0);
                                        uVar33 = CONCAT44(local_cc,local_b4);
                                        if ((piVar25[7] <= iVar15) &&
                                           ((piVar25[7] < iVar15 ||
                                            (lVar2 = CONCAT44(local_fc,local_bc),
                                            uVar32 = CONCAT44(local_f0,local_c0),
                                            uVar33 = CONCAT44(local_cc,local_b4),
                                            (uint)piVar25[6] <= uVar16 - 0x10000)))) {
                                          local_1d8 = local_124 * 65536.0;
                                          uVar31 = FUN_0054a946();
                                          uVar23 = (uint)uVar31 + piVar25[6];
                                          iVar18 = (int)(uVar31 >> 0x20) + piVar25[7] +
                                                   (uint)CARRY4((uint)uVar31,piVar25[6]);
                                          iVar15 = ((local_3c - local_e0) -
                                                   (uint)(local_40 < local_b4)) -
                                                   (uint)(local_40 - local_b4 < 0x10000);
                                          lVar2 = CONCAT44(local_fc,local_bc);
                                          uVar32 = CONCAT44(local_f0,local_c0);
                                          uVar33 = CONCAT44(local_cc,local_b4);
                                          if ((iVar15 <= iVar18) &&
                                             ((iVar15 < iVar18 ||
                                              (lVar2 = CONCAT44(local_fc,local_bc),
                                              uVar32 = CONCAT44(local_f0,local_c0),
                                              uVar33 = CONCAT44(local_cc,local_b4),
                                              (local_40 - local_b4) - 0x10000 < uVar23)))) {
                                            local_8e = '\x01';
                                            lVar2 = CONCAT44(local_fc,local_bc);
                                            uVar32 = CONCAT44(local_f0,local_c0);
                                            uVar33 = CONCAT44(local_cc,local_b4);
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                                local_ec = uVar23;
                                local_b4 = (uint)uVar33;
                                local_f0 = (int)(uVar32 >> 0x20);
                                local_c0 = (int *)uVar32;
                                uVar31 = CONCAT44(local_dc,local_ec);
                                local_fc = (uint)((ulonglong)lVar2 >> 0x20);
                                local_bc = (uint)lVar2;
                                if (((((3.0 < (float)piVar25[0xb] || (float)piVar25[0xb] == 3.0) ||
                                      ((char)local_134 != '\0')) || ((char)local_140 != '\0')) ||
                                    ((((char)local_144 != '\0' || ((char)local_14c != '\0')) ||
                                     ((char)local_170 != '\0')))) &&
                                   (((iVar15 = *piVar25, iVar15 != 1 && (iVar15 != 2)) &&
                                    ((iVar15 != 8 && ((iVar15 != 7 && (iVar15 != 6)))))))) {
                                  local_cc = 0;
                                  piVar19 = (int *)((int)local_94 + 0x1478);
                                  piVar22 = piVar12 + 3;
                                  do {
                                    if (*piVar22 != *piVar19) {
                                      iVar15 = local_fc - (local_bc < 0x10000);
                                      uVar23 = local_b4;
                                      uVar33 = uVar31;
                                      if (((int)local_b0 <= iVar15) &&
                                         (((int)local_b0 < iVar15 ||
                                          ((uint)local_b8 <= local_bc - 0x10000)))) {
                                        iVar18 = ((local_4c - local_f0) -
                                                 (uint)(local_50 < local_c0)) -
                                                 (uint)(local_50 - (int)local_c0 < 0x10000);
                                        local_b4 = local_128 + piVar25[2];
                                        iVar15 = local_d4 + piVar25[3] +
                                                 (uint)CARRY4(local_128,piVar25[2]);
                                        uVar23 = local_b4;
                                        uVar33 = CONCAT44(local_dc,local_ec);
                                        if ((iVar18 <= iVar15) &&
                                           ((iVar18 < iVar15 ||
                                            (uVar33 = uVar31,
                                            (local_50 - (int)local_c0) - 0x10000 < local_b4)))) {
                                          local_1e0 = local_d8 * 0.5 * 65536.0;
                                          uVar31 = FUN_0054a946();
                                          local_cc = (uint)(uVar31 >> 0x20);
                                          local_b4 = (uint)uVar31;
                                          local_1cc = *(float *)((int)local_94 + 0x84) * 0.5 *
                                                      65536.0;
                                          uVar33 = FUN_0054a946();
                                          local_dc = (int)(uVar33 >> 0x20);
                                          local_ec = (uint)uVar33;
                                          local_e0 = piVar25[4] - local_b4;
                                          lVar3 = uVar33 + CONCAT44(local_44,local_48);
                                          uVar23 = (uint)lVar3;
                                          lVar2 = CONCAT44(local_fc,local_bc);
                                          uVar32 = CONCAT44(local_f0,local_c0);
                                          if (CONCAT44((piVar25[5] - local_cc) -
                                                       (uint)((uint)piVar25[4] < local_b4),local_e0)
                                              <= lVar3) {
                                            uVar16 = local_b4 + piVar25[4];
                                            iVar18 = local_cc + piVar25[5] +
                                                     (uint)CARRY4(local_b4,piVar25[4]);
                                            local_b4 = local_48 - local_ec;
                                            iVar15 = (local_44 - local_dc) -
                                                     (uint)(local_48 < local_ec);
                                            uVar23 = local_b4;
                                            lVar2 = CONCAT44(local_fc,local_bc);
                                            uVar32 = CONCAT44(local_f0,local_c0);
                                            if ((iVar15 <= iVar18) &&
                                               ((iVar15 < iVar18 ||
                                                (lVar2 = CONCAT44(local_fc,local_bc),
                                                uVar32 = CONCAT44(local_f0,local_c0),
                                                local_b4 < uVar16)))) {
                                              local_184 = *(float *)((int)local_94 + 0x88) * 0.5 *
                                                          65536.0;
                                              uVar31 = FUN_0054a946();
                                              local_e0 = (uint)(uVar31 >> 0x20);
                                              local_b4 = (uint)uVar31;
                                              local_1e8 = uVar31 + CONCAT44(local_3c,local_40);
                                              uVar16 = FUN_004ce380(&local_1e8,(uint *)(piVar25 + 6)
                                                                   );
                                              uVar32 = CONCAT44(local_f0,local_c0);
                                              lVar2 = CONCAT44(local_fc,local_bc);
                                              uVar33 = CONCAT44(local_dc,local_ec);
                                              uVar23 = local_b4;
                                              if ((char)uVar16 != '\0') {
                                                local_1b8 = local_124 * 65536.0;
                                                uVar31 = FUN_0054a946();
                                                local_1f0 = (uint)uVar31 + piVar25[6];
                                                local_1ec = (int)(uVar31 >> 0x20) + piVar25[7] +
                                                            (uint)CARRY4((uint)uVar31,piVar25[6]);
                                                local_1f8 = local_40 - local_b4;
                                                local_1f4 = (local_3c - local_e0) -
                                                            (uint)(local_40 < local_b4);
                                                uVar16 = FUN_004ce350(&local_1f8,&local_1f0);
                                                uVar32 = CONCAT44(local_f0,local_c0);
                                                lVar2 = CONCAT44(local_fc,local_bc);
                                                uVar33 = CONCAT44(local_dc,local_ec);
                                                local_150 = local_150 & 0xff;
                                                uVar23 = local_b4;
                                                if ((char)uVar16 != '\0') {
                                                  local_150 = 1;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                      local_b4 = uVar23;
                                      local_f0 = (int)(uVar32 >> 0x20);
                                      local_c0 = (int *)uVar32;
                                      local_fc = (uint)((ulonglong)lVar2 >> 0x20);
                                      local_bc = (uint)lVar2;
                                      local_dc = (int)(uVar33 >> 0x20);
                                      local_ec = (uint)uVar33;
                                      uVar23 = local_b4;
                                      if (CONCAT44(local_b0,local_b8) <= lVar2 + 0x10000) {
                                        iVar18 = ((local_4c - local_f0) -
                                                 (uint)(local_50 < local_c0)) +
                                                 (uint)(0xfffeffff < local_50 - (int)local_c0);
                                        local_b4 = local_128 + piVar25[2];
                                        iVar15 = local_d4 + piVar25[3] +
                                                 (uint)CARRY4(local_128,piVar25[2]);
                                        uVar23 = local_b4;
                                        if ((iVar18 <= iVar15) &&
                                           ((iVar18 < iVar15 ||
                                            ((local_50 - (int)local_c0) + 0x10000 < local_b4)))) {
                                          local_194 = local_d8 * 0.5 * 65536.0;
                                          uVar31 = FUN_0054a946();
                                          local_cc = (uint)(uVar31 >> 0x20);
                                          local_b4 = (uint)uVar31;
                                          local_1bc = *(float *)((int)local_94 + 0x84) * 0.5 *
                                                      65536.0;
                                          uVar33 = FUN_0054a946();
                                          local_dc = (int)(uVar33 >> 0x20);
                                          local_ec = (uint)uVar33;
                                          local_e0 = piVar25[4] - local_b4;
                                          lVar3 = uVar33 + CONCAT44(local_44,local_48);
                                          uVar23 = (uint)lVar3;
                                          lVar2 = CONCAT44(local_fc,local_bc);
                                          uVar32 = CONCAT44(local_f0,local_c0);
                                          if (CONCAT44((piVar25[5] - local_cc) -
                                                       (uint)((uint)piVar25[4] < local_b4),local_e0)
                                              <= lVar3) {
                                            uVar16 = local_b4 + piVar25[4];
                                            iVar18 = local_cc + piVar25[5] +
                                                     (uint)CARRY4(local_b4,piVar25[4]);
                                            local_b4 = local_48 - local_ec;
                                            iVar15 = (local_44 - local_dc) -
                                                     (uint)(local_48 < local_ec);
                                            uVar23 = local_b4;
                                            lVar2 = CONCAT44(local_fc,local_bc);
                                            uVar32 = CONCAT44(local_f0,local_c0);
                                            if ((iVar15 <= iVar18) &&
                                               ((iVar15 < iVar18 ||
                                                (lVar2 = CONCAT44(local_fc,local_bc),
                                                uVar32 = CONCAT44(local_f0,local_c0),
                                                local_b4 < uVar16)))) {
                                              local_19c = *(float *)((int)local_94 + 0x88) * 0.5 *
                                                          65536.0;
                                              uVar31 = FUN_0054a946();
                                              local_e0 = (uint)(uVar31 >> 0x20);
                                              local_b4 = (uint)uVar31;
                                              local_208 = uVar31 + CONCAT44(local_3c,local_40);
                                              uVar16 = FUN_004ce380(&local_208,(uint *)(piVar25 + 6)
                                                                   );
                                              uVar32 = CONCAT44(local_f0,local_c0);
                                              lVar2 = CONCAT44(local_fc,local_bc);
                                              uVar33 = CONCAT44(local_dc,local_ec);
                                              uVar23 = local_b4;
                                              if ((char)uVar16 != '\0') {
                                                local_1dc = local_124 * 65536.0;
                                                uVar31 = FUN_0054a946();
                                                local_218 = (uint)uVar31 + piVar25[6];
                                                local_214 = (int)(uVar31 >> 0x20) + piVar25[7] +
                                                            (uint)CARRY4((uint)uVar31,piVar25[6]);
                                                local_228 = local_40 - local_b4;
                                                local_224 = (local_3c - local_e0) -
                                                            (uint)(local_40 < local_b4);
                                                uVar16 = FUN_004ce350(&local_228,&local_218);
                                                uVar32 = CONCAT44(local_f0,local_c0);
                                                lVar2 = CONCAT44(local_fc,local_bc);
                                                uVar33 = CONCAT44(local_dc,local_ec);
                                                local_158 = local_158 & 0xff;
                                                uVar23 = local_b4;
                                                if ((char)uVar16 != '\0') {
                                                  local_158 = 1;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                      local_b4 = uVar23;
                                      local_f0 = (int)(uVar32 >> 0x20);
                                      local_c0 = (int *)uVar32;
                                      local_fc = (uint)((ulonglong)lVar2 >> 0x20);
                                      local_bc = (uint)lVar2;
                                      local_dc = (int)(uVar33 >> 0x20);
                                      local_ec = (uint)uVar33;
                                      if (CONCAT44(local_b0,local_b8) <= lVar2) {
                                        local_b4 = local_50 - (int)local_c0;
                                        iVar18 = (local_4c - local_f0) - (uint)(local_50 < local_c0)
                                        ;
                                        iVar15 = local_d4 + piVar25[3] +
                                                 (uint)CARRY4(local_128,piVar25[2]);
                                        if ((iVar18 <= iVar15) &&
                                           ((iVar18 < iVar15 || (local_b4 < local_128 + piVar25[2]))
                                           )) {
                                          local_1a4 = local_d8 * 0.5 * 65536.0;
                                          uVar31 = FUN_0054a946();
                                          local_dc = (int)(uVar31 >> 0x20);
                                          local_cc = (uint)uVar31;
                                          local_1c4 = *(float *)((int)local_94 + 0x84) * 0.5 *
                                                      65536.0;
                                          uVar31 = FUN_0054a946();
                                          local_ec = (uint)(uVar31 >> 0x20);
                                          local_e0 = (uint)uVar31;
                                          lVar2 = uVar31 + CONCAT44(local_44,local_48);
                                          uVar23 = (uint)lVar2;
                                          iVar18 = (int)((ulonglong)lVar2 >> 0x20) -
                                                   (uint)(uVar23 < 0x10000);
                                          local_b4 = piVar25[4] - local_cc;
                                          iVar15 = (piVar25[5] - local_dc) -
                                                   (uint)((uint)piVar25[4] < local_cc);
                                          uVar33 = CONCAT44(local_dc,local_ec);
                                          lVar2 = CONCAT44(local_fc,local_bc);
                                          uVar32 = CONCAT44(local_f0,local_c0);
                                          if ((iVar15 <= iVar18) &&
                                             ((iVar15 < iVar18 ||
                                              (uVar33 = CONCAT44(local_dc,local_ec),
                                              lVar2 = CONCAT44(local_fc,local_bc),
                                              uVar32 = CONCAT44(local_f0,local_c0),
                                              local_b4 <= uVar23 - 0x10000)))) {
                                            iVar15 = ((local_44 - local_ec) -
                                                     (uint)(local_48 < local_e0)) -
                                                     (uint)(local_48 - local_e0 < 0x10000);
                                            puVar6 = (uint *)(piVar25 + 4);
                                            local_dc = local_dc + piVar25[5] +
                                                       (uint)CARRY4(local_cc,*puVar6);
                                            piVar25 = (int *)piVar12[2];
                                            uVar33 = CONCAT44(local_dc,local_ec);
                                            lVar2 = CONCAT44(local_fc,local_bc);
                                            uVar32 = CONCAT44(local_f0,local_c0);
                                            if ((iVar15 <= local_dc) &&
                                               ((iVar15 < local_dc ||
                                                (uVar33 = CONCAT44(local_dc,local_ec),
                                                lVar2 = CONCAT44(local_fc,local_bc),
                                                uVar32 = CONCAT44(local_f0,local_c0),
                                                (local_48 - local_e0) - 0x10000 < local_cc + *puVar6
                                                )))) {
                                              local_1d4 = *(float *)((int)local_94 + 0x88) * 0.5 *
                                                          65536.0;
                                              uVar31 = FUN_0054a946();
                                              local_b4 = (uint)(uVar31 >> 0x20);
                                              local_100 = (uint)uVar31;
                                              local_238 = uVar31 + CONCAT44(local_3c,local_40);
                                              uVar23 = FUN_004ce380(&local_238,(uint *)(piVar25 + 6)
                                                                   );
                                              uVar32 = CONCAT44(local_f0,local_c0);
                                              lVar2 = CONCAT44(local_fc,local_bc);
                                              uVar33 = CONCAT44(local_dc,local_ec);
                                              if ((char)uVar23 != '\0') {
                                                local_1b4 = local_124 * 65536.0;
                                                uVar31 = FUN_0054a946();
                                                local_230 = (uint)uVar31 + piVar25[6];
                                                local_22c = (int)(uVar31 >> 0x20) + piVar25[7] +
                                                            (uint)CARRY4((uint)uVar31,piVar25[6]);
                                                local_200 = local_40 - local_100;
                                                local_1fc = (local_3c - local_b4) -
                                                            (uint)(local_40 < local_100);
                                                uVar23 = FUN_004ce350(&local_200,&local_230);
                                                uVar32 = CONCAT44(local_f0,local_c0);
                                                lVar2 = CONCAT44(local_fc,local_bc);
                                                uVar33 = CONCAT44(local_dc,local_ec);
                                                local_160 = local_160 & 0xff;
                                                if ((char)uVar23 != '\0') {
                                                  local_160 = 1;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                      local_f0 = (int)(uVar32 >> 0x20);
                                      local_c0 = (int *)uVar32;
                                      local_fc = (uint)((ulonglong)lVar2 >> 0x20);
                                      local_bc = (uint)lVar2;
                                      local_dc = (int)(uVar33 >> 0x20);
                                      local_ec = (uint)uVar33;
                                      uVar31 = uVar33;
                                      uVar33 = CONCAT44(local_cc,local_b4);
                                      if (CONCAT44(local_b0,local_b8) <= lVar2) {
                                        iVar18 = (local_4c - local_f0) - (uint)(local_50 < local_c0)
                                        ;
                                        local_d4 = local_d4 + local_11c +
                                                   (uint)CARRY4(local_128,piVar25[2]);
                                        iVar15 = piVar12[2];
                                        uVar33 = CONCAT44(local_cc,local_b4);
                                        if ((iVar18 <= (int)local_d4) &&
                                           ((iVar18 < (int)local_d4 ||
                                            (uVar33 = CONCAT44(local_cc,local_b4),
                                            local_50 - (int)local_c0 < local_128 + piVar25[2])))) {
                                          local_190 = local_d8 * 0.5 * 65536.0;
                                          uVar31 = FUN_0054a946();
                                          local_f0 = (int)(uVar31 >> 0x20);
                                          local_fc = (uint)uVar31;
                                          local_198 = *(float *)((int)local_94 + 0x84) * 0.5 *
                                                      65536.0;
                                          uVar34 = FUN_0054a946();
                                          local_cc = (uint)(uVar34 >> 0x20);
                                          local_100 = (uint)uVar34;
                                          local_11c = *(uint *)(iVar15 + 0x10) - local_fc;
                                          uVar31 = CONCAT44(local_dc,local_ec);
                                          lVar2 = CONCAT44(local_fc,local_bc);
                                          uVar32 = CONCAT44(local_f0,local_c0);
                                          uVar33 = CONCAT44(local_cc,local_b4);
                                          if (CONCAT44((*(int *)(iVar15 + 0x14) - local_f0) -
                                                       (uint)(*(uint *)(iVar15 + 0x10) < local_fc),
                                                       local_11c) <=
                                              (longlong)
                                              (uVar34 + CONCAT44(local_44,local_48) + 0x10000)) {
                                            iVar11 = ((local_44 - local_cc) -
                                                     (uint)(local_48 < local_100)) +
                                                     (uint)(0xfffeffff < local_48 - local_100);
                                            local_f0 = local_f0 + *(int *)(iVar15 + 0x14) +
                                                       (uint)CARRY4(local_fc,*(uint *)(iVar15 + 0x10
                                                                                      ));
                                            iVar18 = piVar12[2];
                                            uVar31 = CONCAT44(local_dc,local_ec);
                                            lVar2 = CONCAT44(local_fc,local_bc);
                                            uVar32 = CONCAT44(local_f0,local_c0);
                                            uVar33 = CONCAT44(local_cc,local_b4);
                                            if ((iVar11 <= local_f0) &&
                                               ((iVar11 < local_f0 ||
                                                (uVar31 = CONCAT44(local_dc,local_ec),
                                                lVar2 = CONCAT44(local_fc,local_bc),
                                                uVar32 = CONCAT44(local_f0,local_c0),
                                                uVar33 = CONCAT44(local_cc,local_b4),
                                                (local_48 - local_100) + 0x10000 <
                                                local_fc + *(uint *)(iVar15 + 0x10))))) {
                                              local_1a0 = *(float *)((int)local_94 + 0x88) * 0.5 *
                                                          65536.0;
                                              uVar31 = FUN_0054a946();
                                              local_100 = (uint)(uVar31 >> 0x20);
                                              local_11c = (uint)uVar31;
                                              local_220 = uVar31 + CONCAT44(local_3c,local_40);
                                              puVar6 = (uint *)(iVar18 + 0x18);
                                              uVar23 = FUN_004ce380(&local_220,puVar6);
                                              uVar33 = CONCAT44(local_cc,local_b4);
                                              uVar32 = CONCAT44(local_f0,local_c0);
                                              uVar31 = CONCAT44(local_dc,local_ec);
                                              lVar2 = CONCAT44(local_fc,local_bc);
                                              if ((char)uVar23 != '\0') {
                                                local_1a8 = local_124 * 65536.0;
                                                uVar31 = FUN_0054a946();
                                                local_210 = (uint)uVar31 + *puVar6;
                                                local_20c = (int)(uVar31 >> 0x20) +
                                                            *(int *)(iVar18 + 0x1c) +
                                                            (uint)CARRY4((uint)uVar31,*puVar6);
                                                local_58 = (double)CONCAT44((local_3c - local_100) -
                                                                            (uint)(local_40 <
                                                                                  local_11c),
                                                                            local_40 - local_11c);
                                                uVar23 = FUN_004ce350(&local_58,&local_210);
                                                uVar33 = CONCAT44(local_cc,local_b4);
                                                uVar32 = CONCAT44(local_f0,local_c0);
                                                uVar31 = CONCAT44(local_dc,local_ec);
                                                lVar2 = CONCAT44(local_fc,local_bc);
                                                local_15c = local_15c & 0xff;
                                                if ((char)uVar23 != '\0') {
                                                  local_15c = 1;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                      break;
                                    }
                                    local_cc = local_cc + 1;
                                    uVar33 = CONCAT44(local_cc,local_b4);
                                    piVar22 = piVar22 + 1;
                                    piVar19 = piVar19 + 1;
                                  } while ((int)local_cc < 3);
                                }
                              }
                              piVar12 = (int *)*piVar12;
                              uVar23 = local_130;
                              uVar27 = local_13c;
                              iVar18 = local_180;
                            } while (piVar12 != local_138);
                          }
                        }
                      }
                    }
                    uVar23 = uVar23 + 1;
                    uVar16 = local_12c;
                    iVar15 = local_17c;
                    local_130 = uVar23;
                  } while ((int)uVar23 <= iVar18);
                }
                local_13c = uVar27 + 1;
                uVar23 = uVar16;
              } while ((int)local_13c <= iVar15);
            }
            pvVar21 = local_94;
            local_cc = (uint)(uVar33 >> 0x20);
            local_b4 = (uint)uVar33;
            local_f0 = (int)(uVar32 >> 0x20);
            local_c0 = (int *)uVar32;
            local_fc = (uint)((ulonglong)lVar2 >> 0x20);
            local_bc = (uint)lVar2;
            local_dc = (int)(uVar31 >> 0x20);
            local_ec = (uint)uVar31;
            cVar4 = (char)local_98;
            local_cd = '\0';
            uVar23 = local_9c;
            if (((char)local_e8 == '\0') && ((char)local_150 == '\0')) {
              if ((cVar4 != '\0') ||
                 ((((((char)local_168 != '\0' || ((char)local_108 != '\0')) ||
                    ((char)local_e4 != '\0')) ||
                   (((char)local_118 != '\0' || ((char)local_110 != '\0')))) || (local_8d != 0)))) {
                puVar26 = (undefined4 *)((int)local_a8 - 1);
                piVar12 = FUN_004dd0f0(local_94,puVar26,local_a0,local_9c);
                if (piVar12 == (int *)0x0) {
                  piVar12 = (int *)FUN_00405450((int *)&local_2c,local_f8);
                  pvVar21 = local_94;
                  uVar23 = local_9c;
                  uVar16 = (int)puVar26 - *piVar12 >> 0x1f;
                  iVar15 = ((int)puVar26 - *piVar12 ^ uVar16) - uVar16;
                  uVar16 = (int)(local_a0 - piVar12[1]) >> 0x1f;
                  iVar18 = (local_a0 - piVar12[1] ^ uVar16) - uVar16;
                  uVar16 = (int)(local_9c - piVar12[2]) >> 0x1f;
                  if (iVar18 < iVar15) {
                    iVar15 = iVar15 * 10 + iVar18 * 4;
                  }
                  else {
                    iVar15 = iVar15 * 4 + iVar18 * 10;
                  }
                  local_1c = (iVar15 + ((local_9c - piVar12[2] ^ uVar16) - uVar16) * 10) * 2;
                  local_20 = *local_c8 + 10;
                  if ((char)local_98 == '\0') {
                    local_20 = *local_c8 + 0x14;
                  }
                  local_18 = local_20 + local_1c;
                  local_10 = local_a0;
                  local_14 = local_a8;
                  local_c = local_9c;
                  FUN_004dd1a0(local_94,(undefined4 *)((int)local_a8 - 1),local_a0,local_9c,
                               &local_20);
                  local_cd = '\x01';
                }
                else {
                  bVar30 = FUN_004dcff0(pvVar21,puVar26,local_a0,local_9c);
                  uVar23 = local_9c;
                  if (bVar30) {
                    uVar16 = *local_c8 + 10;
                    if ((char)local_98 == '\0') {
                      uVar16 = *local_c8 + 0x14;
                    }
                    if ((int)uVar16 < *piVar12) {
                      local_18 = uVar16 + piVar12[1];
                      local_14 = local_a8;
                      local_10 = local_a0;
                      local_c = local_9c;
                      local_20 = uVar16;
                      local_1c = piVar12[1];
                      FUN_004dd1a0(pvVar21,puVar26,local_a0,local_9c,&local_20);
                      local_cd = '\x01';
                    }
                  }
                }
                uVar33 = CONCAT44(local_cc,local_b4);
                uVar32 = CONCAT44(local_f0,local_c0);
                lVar2 = CONCAT44(local_fc,local_bc);
                uVar31 = CONCAT44(local_dc,local_ec);
                cVar4 = (char)local_98;
                goto LAB_004df9b8;
              }
              cVar20 = '\0';
            }
            else {
LAB_004df9b8:
              cVar20 = (char)local_e4;
            }
            local_cc = (uint)(uVar33 >> 0x20);
            local_b4 = (uint)uVar33;
            local_f0 = (int)(uVar32 >> 0x20);
            local_c0 = (int *)uVar32;
            local_fc = (uint)((ulonglong)lVar2 >> 0x20);
            local_bc = (uint)lVar2;
            local_dc = (int)(uVar31 >> 0x20);
            local_ec = (uint)uVar31;
            local_c1 = '\0';
            cVar14 = (char)local_f4;
            uVar16 = local_a0;
            if (((cVar14 == '\0') && ((char)local_158 == '\0')) &&
               ((((cVar4 != '\0' ||
                  (((local_8e != '\0' || ((char)local_178 != '\0')) || ((char)local_108 != '\0'))))
                 || (((cVar20 != '\0' || ((char)local_120 != '\0')) || ((char)local_114 != '\0'))))
                || (local_8d != 0)))) {
              puVar26 = (undefined4 *)((int)local_a8 + 1);
              piVar12 = FUN_004dd0f0(pvVar21,puVar26,local_a0,uVar23);
              if (piVar12 == (int *)0x0) {
                piVar12 = (int *)FUN_00405450((int *)&local_2c,local_f8);
                pvVar21 = local_94;
                uVar16 = local_a0;
                uVar23 = (int)puVar26 - *piVar12 >> 0x1f;
                iVar15 = ((int)puVar26 - *piVar12 ^ uVar23) - uVar23;
                uVar23 = (int)(local_a0 - piVar12[1]) >> 0x1f;
                iVar18 = (local_a0 - piVar12[1] ^ uVar23) - uVar23;
                uVar23 = (int)(local_9c - piVar12[2]) >> 0x1f;
                if (iVar18 < iVar15) {
                  iVar15 = iVar15 * 10 + iVar18 * 4;
                }
                else {
                  iVar15 = iVar15 * 4 + iVar18 * 10;
                }
                local_1c = (iVar15 + ((local_9c - piVar12[2] ^ uVar23) - uVar23) * 10) * 2;
                local_20 = *local_c8 + 10;
                if ((char)local_98 == '\0') {
                  local_20 = *local_c8 + 0x14;
                }
                local_18 = local_20 + local_1c;
                local_10 = local_a0;
                local_c = local_9c;
                local_14 = local_a8;
                FUN_004dd1a0(local_94,(undefined4 *)((int)local_a8 + 1),local_a0,local_9c,&local_20)
                ;
                uVar33 = CONCAT44(local_cc,local_b4);
                uVar32 = CONCAT44(local_f0,local_c0);
                lVar2 = CONCAT44(local_fc,local_bc);
                uVar31 = CONCAT44(local_dc,local_ec);
                cVar14 = (char)local_f4;
                local_c1 = '\x01';
              }
              else {
                bVar30 = FUN_004dcff0(pvVar21,puVar26,local_a0,local_9c);
                uVar16 = local_a0;
                uVar33 = CONCAT44(local_cc,local_b4);
                uVar32 = CONCAT44(local_f0,local_c0);
                lVar2 = CONCAT44(local_fc,local_bc);
                uVar31 = CONCAT44(local_dc,local_ec);
                cVar14 = (char)local_f4;
                if (bVar30) {
                  uVar23 = *local_c8 + 10;
                  if ((char)local_98 == '\0') {
                    uVar23 = *local_c8 + 0x14;
                  }
                  if ((int)uVar23 < *piVar12) {
                    local_18 = uVar23 + piVar12[1];
                    local_14 = local_a8;
                    local_10 = local_a0;
                    local_c = local_9c;
                    local_20 = uVar23;
                    local_1c = piVar12[1];
                    FUN_004dd1a0(pvVar21,puVar26,local_a0,local_9c,&local_20);
                    uVar33 = CONCAT44(local_cc,local_b4);
                    uVar32 = CONCAT44(local_f0,local_c0);
                    lVar2 = CONCAT44(local_fc,local_bc);
                    uVar31 = CONCAT44(local_dc,local_ec);
                    cVar14 = (char)local_f4;
                    local_c1 = '\x01';
                  }
                }
              }
            }
            cVar20 = local_c1;
            local_cc = (uint)(uVar33 >> 0x20);
            local_b4 = (uint)uVar33;
            local_f0 = (int)(uVar32 >> 0x20);
            local_c0 = (int *)uVar32;
            local_fc = (uint)((ulonglong)lVar2 >> 0x20);
            local_bc = (uint)lVar2;
            local_dc = (int)(uVar31 >> 0x20);
            local_ec = (uint)uVar31;
            cVar4 = (char)local_98;
            bVar30 = false;
            if (((char)local_108 == '\0') && ((char)local_160 == '\0')) {
              if (((cVar4 != '\0') ||
                  (((local_8e != '\0' || ((char)local_154 != '\0')) || ((char)local_e8 != '\0'))))
                 || (((cVar14 != '\0' || ((char)local_118 != '\0')) ||
                     (((char)local_120 != '\0' || (cVar14 = '\0', local_8d != 0)))))) {
                iVar15 = uVar16 - 1;
                piVar12 = FUN_004dd0f0(pvVar21,local_a8,iVar15,local_9c);
                if (piVar12 == (int *)0x0) {
                  piVar12 = (int *)FUN_00405450((int *)((int)&local_60 + 4),local_f8);
                  uVar23 = local_9c;
                  local_2c = CONCAT44(iVar15 - piVar12[1],(int)local_a8 - *piVar12);
                  local_24 = (float)(local_9c - piVar12[2]);
                  local_1c = FUN_004dd090((uint *)&local_2c);
                  pvVar21 = local_94;
                  local_20 = *local_c8 + 10;
                  if ((char)local_98 == '\0') {
                    local_20 = *local_c8 + 0x1e;
                  }
                  local_18 = local_1c + local_20;
                  local_c = uVar23;
                  local_14 = local_a8;
                  local_10 = local_a0;
                  FUN_004dd1a0(local_94,local_a8,iVar15,uVar23,&local_20);
                  bVar30 = true;
                }
                else {
                  bVar5 = FUN_004dcff0(local_94,local_a8,iVar15,local_9c);
                  pvVar21 = local_94;
                  if (bVar5) {
                    uVar23 = *local_c8 + 10;
                    if ((char)local_98 == '\0') {
                      uVar23 = *local_c8 + 0x14;
                    }
                    if ((int)uVar23 < *piVar12) {
                      local_18 = uVar23 + piVar12[1];
                      local_10 = local_a0;
                      local_14 = local_a8;
                      local_c = local_9c;
                      local_20 = uVar23;
                      local_1c = piVar12[1];
                      FUN_004dd1a0(local_94,local_a8,iVar15,local_9c,&local_20);
                      bVar30 = true;
                    }
                  }
                }
                uVar33 = CONCAT44(local_cc,local_b4);
                uVar32 = CONCAT44(local_f0,local_c0);
                lVar2 = CONCAT44(local_fc,local_bc);
                uVar31 = CONCAT44(local_dc,local_ec);
                cVar4 = (char)local_98;
                goto LAB_004dfd43;
              }
            }
            else {
LAB_004dfd43:
              cVar14 = (char)local_e8;
            }
            local_cc = (uint)(uVar33 >> 0x20);
            local_b4 = (uint)uVar33;
            local_f0 = (int)(uVar32 >> 0x20);
            local_c0 = (int *)uVar32;
            local_fc = (uint)((ulonglong)lVar2 >> 0x20);
            local_bc = (uint)lVar2;
            local_dc = (int)(uVar31 >> 0x20);
            local_ec = (uint)uVar31;
            local_a1 = '\0';
            puVar26 = local_a8;
            if ((((char)local_e4 == '\0') && ((char)local_15c == '\0')) &&
               ((((cVar4 != '\0' ||
                  ((((local_8e != '\0' || ((char)local_164 != '\0')) || (cVar14 != '\0')) ||
                   (((char)local_f4 != '\0' || ((char)local_110 != '\0')))))) ||
                 ((char)local_114 != '\0')) || (local_8d != 0)))) {
              iVar15 = local_a0 + 1;
              piVar12 = FUN_004dd0f0(pvVar21,local_a8,iVar15,local_9c);
              if (piVar12 == (int *)0x0) {
                piVar12 = (int *)FUN_00405450((int *)((int)&local_60 + 4),local_f8);
                uVar23 = local_9c;
                local_2c = CONCAT44(iVar15 - piVar12[1],(int)local_a8 - *piVar12);
                local_24 = (float)(local_9c - piVar12[2]);
                local_1c = FUN_004dd090((uint *)&local_2c);
                local_20 = *local_c8 + 10;
                if ((char)local_98 == '\0') {
                  local_20 = *local_c8 + 0x14;
                }
                local_18 = local_1c + local_20;
                local_c = uVar23;
LAB_004dfe4d:
                puVar26 = local_a8;
                local_14 = local_a8;
                local_10 = local_a0;
                FUN_004dd1a0(local_94,local_a8,iVar15,local_c,&local_20);
                local_a1 = '\x01';
              }
              else {
                bVar5 = FUN_004dcff0(local_94,local_a8,iVar15,local_9c);
                uVar33 = CONCAT44(local_cc,local_b4);
                uVar32 = CONCAT44(local_f0,local_c0);
                lVar2 = CONCAT44(local_fc,local_bc);
                uVar31 = CONCAT44(local_dc,local_ec);
                puVar26 = local_a8;
                if (!bVar5) goto LAB_004dfee2;
                uVar23 = *local_c8 + 10;
                if ((char)local_98 == '\0') {
                  uVar23 = *local_c8 + 0x14;
                }
                if ((int)uVar23 < *piVar12) {
                  local_18 = uVar23 + piVar12[1];
                  local_c = local_9c;
                  local_20 = uVar23;
                  local_1c = piVar12[1];
                  goto LAB_004dfe4d;
                }
              }
              uVar33 = CONCAT44(local_cc,local_b4);
              uVar32 = CONCAT44(local_f0,local_c0);
              lVar2 = CONCAT44(local_fc,local_bc);
              uVar31 = CONCAT44(local_dc,local_ec);
            }
LAB_004dfee2:
            local_cc = (uint)(uVar33 >> 0x20);
            local_b4 = (uint)uVar33;
            local_f0 = (int)(uVar32 >> 0x20);
            local_c0 = (int *)uVar32;
            local_fc = (uint)((ulonglong)lVar2 >> 0x20);
            local_bc = (uint)lVar2;
            local_dc = (int)(uVar31 >> 0x20);
            local_ec = (uint)uVar31;
            cVar4 = (char)local_98;
            if (((((char)local_118 == '\0') && (local_cd != '\0')) && (bVar30)) &&
               ((((cVar4 != '\0' || (local_8e != '\0')) || ((char)local_10c != '\0')) ||
                (local_8d != 0)))) {
              puVar26 = (undefined4 *)((int)puVar26 - 1);
              iVar15 = local_a0 - 1;
              local_138 = FUN_004dd0f0(local_94,puVar26,iVar15,local_9c);
              if (local_138 == (int *)0x0) {
                piVar12 = (int *)FUN_00405450((int *)((int)&local_60 + 4),local_f8);
                local_2c = CONCAT44(iVar15 - piVar12[1],(int)puVar26 - *piVar12);
                local_24 = (float)(local_9c - piVar12[2]);
                local_1c = FUN_004dd090((uint *)&local_2c);
                local_20 = *local_c8 + 0xe;
                if ((char)local_98 == '\0') {
                  local_20 = *local_c8 + 0x18;
                }
                local_18 = local_1c + local_20;
                local_14 = local_a8;
                puVar6 = &local_20;
                local_10 = local_a0;
                local_c = local_9c;
LAB_004e0021:
                FUN_004dd1a0(local_94,puVar26,iVar15,local_9c,puVar6);
              }
              else {
                bVar5 = FUN_004dcff0(local_94,puVar26,iVar15,local_9c);
                if (bVar5) {
                  iVar18 = *local_c8 + 0xe;
                  if ((char)local_98 == '\0') {
                    iVar18 = *local_c8 + 0x18;
                  }
                  if (iVar18 < *local_138) {
                    puVar6 = FUN_004dab60(&local_20,iVar18,local_138[1],iVar18 + local_138[1],
                                          &local_74);
                    goto LAB_004e0021;
                  }
                }
              }
              uVar33 = CONCAT44(local_cc,local_b4);
              uVar32 = CONCAT44(local_f0,local_c0);
              lVar2 = CONCAT44(local_fc,local_bc);
              uVar31 = CONCAT44(local_dc,local_ec);
              cVar4 = (char)local_98;
            }
            local_cc = (uint)(uVar33 >> 0x20);
            local_b4 = (uint)uVar33;
            local_f0 = (int)(uVar32 >> 0x20);
            local_c0 = (int *)uVar32;
            local_fc = (uint)((ulonglong)lVar2 >> 0x20);
            local_bc = (uint)lVar2;
            local_dc = (int)(uVar31 >> 0x20);
            local_ec = (uint)uVar31;
            pvVar21 = local_94;
            if (((((char)local_120 == '\0') && (cVar20 != '\0')) && (bVar30)) &&
               (((cVar4 != '\0' || (local_8e != '\0')) ||
                (((char)local_16c != '\0' || (local_8d != 0)))))) {
              iVar15 = local_a0 - 1;
              puVar26 = (undefined4 *)((int)local_a8 + 1);
              piVar12 = FUN_004dd0f0(local_94,puVar26,iVar15,local_9c);
              if (piVar12 == (int *)0x0) {
                piVar12 = (int *)FUN_00405450((int *)((int)&local_60 + 4),local_f8);
                uVar23 = local_9c;
                local_2c = CONCAT44(iVar15 - piVar12[1],(int)puVar26 - *piVar12);
                local_24 = (float)(local_9c - piVar12[2]);
                local_1c = FUN_004dd090((uint *)&local_2c);
                pvVar21 = local_94;
                local_20 = *local_c8 + 0xe;
                if ((char)local_98 == '\0') {
                  local_20 = *local_c8 + 0x18;
                }
                local_18 = local_1c + local_20;
                local_14 = local_a8;
                local_10 = local_a0;
                local_c = uVar23;
                FUN_004dd1a0(local_94,puVar26,iVar15,uVar23,&local_20);
                uVar33 = CONCAT44(local_cc,local_b4);
                uVar32 = CONCAT44(local_f0,local_c0);
                lVar2 = CONCAT44(local_fc,local_bc);
                uVar31 = CONCAT44(local_dc,local_ec);
              }
              else {
                bVar30 = FUN_004dcff0(local_94,puVar26,iVar15,local_9c);
                uVar33 = CONCAT44(local_cc,local_b4);
                uVar32 = CONCAT44(local_f0,local_c0);
                lVar2 = CONCAT44(local_fc,local_bc);
                uVar31 = CONCAT44(local_dc,local_ec);
                pvVar21 = local_94;
                if (bVar30) {
                  iVar18 = *local_c8 + 0xe;
                  if ((char)local_98 == '\0') {
                    iVar18 = *local_c8 + 0x18;
                  }
                  if (iVar18 < *piVar12) {
                    puVar13 = FUN_004dab60(&local_20,iVar18,piVar12[1],iVar18 + piVar12[1],&local_74
                                          );
                    pvVar21 = local_94;
                    FUN_004dd1a0(local_94,puVar26,iVar15,local_9c,puVar13);
                    uVar33 = CONCAT44(local_cc,local_b4);
                    uVar32 = CONCAT44(local_f0,local_c0);
                    lVar2 = CONCAT44(local_fc,local_bc);
                    uVar31 = CONCAT44(local_dc,local_ec);
                  }
                }
              }
            }
            local_cc = (uint)(uVar33 >> 0x20);
            local_b4 = (uint)uVar33;
            local_f0 = (int)(uVar32 >> 0x20);
            local_c0 = (int *)uVar32;
            local_fc = (uint)((ulonglong)lVar2 >> 0x20);
            local_bc = (uint)lVar2;
            local_dc = (int)(uVar31 >> 0x20);
            local_ec = (uint)uVar31;
            this_00 = local_94;
            if (((((char)local_110 == '\0') && (local_cd != '\0')) && (local_a1 != '\0')) &&
               ((((char)local_98 != '\0' || (local_8e != '\0')) ||
                (((char)local_174 != '\0' || (local_8d != 0)))))) {
              iVar15 = local_a0 + 1;
              puVar26 = (undefined4 *)((int)local_a8 - 1);
              piVar12 = FUN_004dd0f0(pvVar21,puVar26,iVar15,local_9c);
              if (piVar12 == (int *)0x0) {
                piVar12 = (int *)FUN_00405450((int *)((int)&local_60 + 4),local_f8);
                uVar23 = local_9c;
                local_2c = CONCAT44(iVar15 - piVar12[1],(int)puVar26 - *piVar12);
                local_24 = (float)(local_9c - piVar12[2]);
                local_1c = FUN_004dd090((uint *)&local_2c);
                local_20 = *local_c8 + 0xe;
                if ((char)local_98 == '\0') {
                  local_20 = *local_c8 + 0x18;
                }
                local_18 = local_1c + local_20;
                local_14 = local_a8;
                local_10 = local_a0;
                puVar6 = &local_20;
                local_c = uVar23;
LAB_004e0288:
                this_00 = local_94;
                FUN_004dd1a0(local_94,puVar26,iVar15,uVar23,puVar6);
                uVar33 = CONCAT44(local_cc,local_b4);
                uVar32 = CONCAT44(local_f0,local_c0);
                lVar2 = CONCAT44(local_fc,local_bc);
                uVar31 = CONCAT44(local_dc,local_ec);
              }
              else {
                bVar30 = FUN_004dcff0(local_94,puVar26,iVar15,local_9c);
                uVar33 = CONCAT44(local_cc,local_b4);
                uVar32 = CONCAT44(local_f0,local_c0);
                lVar2 = CONCAT44(local_fc,local_bc);
                uVar31 = CONCAT44(local_dc,local_ec);
                this_00 = local_94;
                if (bVar30) {
                  iVar18 = *local_c8 + 0xe;
                  if ((char)local_98 == '\0') {
                    iVar18 = *local_c8 + 0x18;
                  }
                  if (iVar18 < *piVar12) {
                    puVar6 = FUN_004dab60(&local_20,iVar18,piVar12[1],iVar18 + piVar12[1],&local_74)
                    ;
                    uVar23 = local_9c;
                    goto LAB_004e0288;
                  }
                }
              }
            }
            local_cc = (uint)(uVar33 >> 0x20);
            local_b4 = (uint)uVar33;
            local_f0 = (int)(uVar32 >> 0x20);
            local_c0 = (int *)uVar32;
            local_fc = (uint)((ulonglong)lVar2 >> 0x20);
            local_bc = (uint)lVar2;
            local_dc = (int)(uVar31 >> 0x20);
            local_ec = (uint)uVar31;
            pvVar21 = local_94;
            if ((((char)local_114 == '\0') && (local_c1 != '\0')) && (local_a1 != '\0')) {
              if (((((char)local_98 != '\0') || (local_8e != '\0')) || ((char)local_104 != '\0')) ||
                 (local_8d != 0)) {
                iVar15 = local_a0 + 1;
                puVar26 = (undefined4 *)((int)local_a8 + 1);
                piVar12 = FUN_004dd0f0(this_00,puVar26,iVar15,local_9c);
                if (piVar12 == (int *)0x0) {
                  piVar12 = (int *)FUN_00405450((int *)&local_74,local_f8);
                  uVar23 = local_9c;
                  local_2c = CONCAT44(iVar15 - piVar12[1],(int)puVar26 - *piVar12);
                  local_24 = (float)(local_9c - piVar12[2]);
                  local_1c = FUN_004dd090((uint *)&local_2c);
                  pvVar21 = local_94;
                  local_20 = *local_c8 + 0xe;
                  if ((char)local_98 == '\0') {
                    local_20 = *local_c8 + 0x18;
                  }
                  local_18 = local_1c + local_20;
                  local_14 = local_a8;
                  local_10 = local_a0;
                  local_c = uVar23;
                  FUN_004dd1a0(local_94,puVar26,iVar15,uVar23,&local_20);
                  uVar31 = CONCAT44(local_dc,local_ec);
                  lVar2 = CONCAT44(local_fc,local_bc);
                  uVar32 = CONCAT44(local_f0,local_c0);
                  uVar33 = CONCAT44(local_cc,local_b4);
                }
                else {
                  bVar30 = FUN_004dcff0(local_94,puVar26,iVar15,local_9c);
                  pvVar21 = local_94;
                  uVar31 = CONCAT44(local_dc,local_ec);
                  lVar2 = CONCAT44(local_fc,local_bc);
                  uVar32 = CONCAT44(local_f0,local_c0);
                  uVar33 = CONCAT44(local_cc,local_b4);
                  if (bVar30) {
                    iVar18 = *local_c8 + 0xe;
                    if ((char)local_98 == '\0') {
                      iVar18 = *local_c8 + 0x18;
                    }
                    uVar31 = CONCAT44(local_dc,local_ec);
                    lVar2 = CONCAT44(local_fc,local_bc);
                    uVar32 = CONCAT44(local_f0,local_c0);
                    uVar33 = CONCAT44(local_cc,local_b4);
                    if (iVar18 < *piVar12) {
                      puVar13 = FUN_004dab60(&local_20,iVar18,piVar12[1],iVar18 + piVar12[1],
                                             &local_74);
                      pvVar21 = local_94;
                      FUN_004dd1a0(local_94,puVar26,iVar15,local_9c,puVar13);
                      uVar31 = CONCAT44(local_dc,local_ec);
                      lVar2 = CONCAT44(local_fc,local_bc);
                      uVar32 = CONCAT44(local_f0,local_c0);
                      uVar33 = CONCAT44(local_cc,local_b4);
                    }
                  }
                }
                goto LAB_004e046a;
              }
            }
            else {
LAB_004e046a:
              uVar23 = local_9c;
              if (((char)local_98 != '\0') || (local_8e != '\0')) goto LAB_004e0486;
            }
            local_cc = (uint)(uVar33 >> 0x20);
            local_b4 = (uint)uVar33;
            local_f0 = (int)(uVar32 >> 0x20);
            local_c0 = (int *)uVar32;
            local_fc = (uint)((ulonglong)lVar2 >> 0x20);
            local_bc = (uint)lVar2;
            local_dc = (int)(uVar31 >> 0x20);
            local_ec = (uint)uVar31;
            iVar15 = local_9c - 1;
            piVar12 = FUN_004dd0f0(pvVar21,local_a8,local_a0,iVar15);
            if (piVar12 == (int *)0x0) {
              piVar12 = (int *)FUN_00405450((int *)&local_74,(uint *)((int)pvVar21 + 0x1440));
              local_2c = CONCAT44(local_a0 - piVar12[1],(int)local_a8 - *piVar12);
              local_24 = (float)(iVar15 - piVar12[2]);
              uVar27 = FUN_004dd090((uint *)&local_2c);
              uVar16 = *local_c8;
              uVar24 = uVar16;
              uVar29 = uVar27;
            }
            else {
              bVar30 = FUN_004dcff0(pvVar21,local_a8,local_a0,iVar15);
              uVar33 = CONCAT44(local_cc,local_b4);
              uVar32 = CONCAT44(local_f0,local_c0);
              lVar2 = CONCAT44(local_fc,local_bc);
              uVar31 = CONCAT44(local_dc,local_ec);
              uVar23 = local_9c;
              if (!bVar30) goto LAB_004e0486;
              uVar16 = piVar12[1];
              uVar27 = *local_c8;
              uVar24 = uVar27;
              uVar29 = uVar16;
              if (*piVar12 <= (int)uVar27) goto LAB_004e0486;
            }
            local_1c = uVar29;
            local_20 = uVar24;
            uVar23 = local_9c;
            local_18 = uVar27 + uVar16;
            local_10 = local_a0;
            local_14 = local_a8;
            local_c = local_9c;
            FUN_004dd1a0(pvVar21,local_a8,local_a0,iVar15,&local_20);
            uVar33 = CONCAT44(local_cc,local_b4);
            uVar32 = CONCAT44(local_f0,local_c0);
            lVar2 = CONCAT44(local_fc,local_bc);
            uVar31 = CONCAT44(local_dc,local_ec);
LAB_004e0486:
            local_cc = (uint)(uVar33 >> 0x20);
            local_b4 = (uint)uVar33;
            local_f0 = (int)(uVar32 >> 0x20);
            local_c0 = (int *)uVar32;
            local_fc = (uint)((ulonglong)lVar2 >> 0x20);
            local_bc = (uint)lVar2;
            local_dc = (int)(uVar31 >> 0x20);
            local_ec = (uint)uVar31;
            if (((char)local_134 == '\0') &&
               ((((char)local_e8 != '\0' || ((char)local_f4 != '\0')) ||
                (((char)local_108 != '\0' || (((char)local_e4 != '\0' || (local_8d != 0)))))))) {
              iVar15 = uVar23 + 1;
              piVar12 = FUN_004dd0f0(pvVar21,local_a8,local_a0,iVar15);
              if (piVar12 == (int *)0x0) {
                piVar12 = (int *)FUN_00405450((int *)&local_74,(uint *)((int)pvVar21 + 0x1440));
                puVar26 = local_a8;
                local_2c = CONCAT44(local_a0 - piVar12[1],(int)local_a8 - *piVar12);
                local_24 = (float)(iVar15 - piVar12[2]);
                local_1c = FUN_004dd090((uint *)&local_2c);
                local_20 = *local_c8;
                if ((char)local_98 == '\0') {
                  local_20 = local_20 + 0x28;
                }
                local_18 = local_1c + local_20;
                local_c = local_9c;
                local_10 = local_a0;
                local_14 = puVar26;
                FUN_004dd1a0(pvVar21,puVar26,local_a0,iVar15,&local_20);
                __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
                return;
              }
              bVar30 = FUN_004dcff0(pvVar21,local_a8,local_a0,iVar15);
              uVar31 = CONCAT44(local_dc,local_ec);
              lVar2 = CONCAT44(local_fc,local_bc);
              uVar32 = CONCAT44(local_f0,local_c0);
              uVar33 = CONCAT44(local_cc,local_b4);
              if (bVar30) {
                uVar23 = *local_c8;
                if ((char)local_98 == '\0') {
                  uVar23 = uVar23 + 0x28;
                }
                uVar31 = CONCAT44(local_dc,local_ec);
                lVar2 = CONCAT44(local_fc,local_bc);
                uVar32 = CONCAT44(local_f0,local_c0);
                uVar33 = CONCAT44(local_cc,local_b4);
                if ((int)uVar23 < *piVar12) {
                  local_18 = uVar23 + piVar12[1];
                  local_c = local_9c;
                  local_14 = local_a8;
                  local_10 = local_a0;
                  local_20 = uVar23;
                  local_1c = piVar12[1];
                  FUN_004dd1a0(pvVar21,local_a8,local_a0,iVar15,&local_20);
                  uVar33 = CONCAT44(local_cc,local_b4);
                  uVar32 = CONCAT44(local_f0,local_c0);
                  lVar2 = CONCAT44(local_fc,local_bc);
                  uVar31 = CONCAT44(local_dc,local_ec);
                }
              }
            }
            local_cc = (uint)(uVar33 >> 0x20);
            local_b4 = (uint)uVar33;
            local_f0 = (int)(uVar32 >> 0x20);
            local_c0 = (int *)uVar32;
            local_fc = (uint)((ulonglong)lVar2 >> 0x20);
            local_bc = (uint)lVar2;
            local_dc = (int)(uVar31 >> 0x20);
            local_ec = (uint)uVar31;
            __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
            return;
          }
          iVar15 = iVar15 + 4;
        } while (iVar15 < 0xc);
      }
    }
    else {
      FUN_00405330((int)param_1);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004e0700 @ 004e0700  kind=gamemisc  attributed-by=none  size=56 */

void __thiscall FUN_004e0700(void *this,int *param_1)

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


/* FUN_004e1230 @ 004e1230  kind=gamemisc  attributed-by=none  size=78 */

undefined4 * __cdecl FUN_004e1230(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
      param_3[3] = param_1[3];
      param_3[4] = param_1[4];
      param_3[5] = param_1[5];
    }
    param_1 = param_1 + 6;
    param_3 = param_3 + 6;
  } while (param_1 != param_2);
  return param_3;
}


/* FUN_004e1280 @ 004e1280  kind=gamemisc  attributed-by=none  size=208 */

void __thiscall FUN_004e1280(void *this,uint param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00554ee0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar3 = (undefined4 *)0x0;
  if (param_1 != 0) {
    if (param_1 < 0xaaaaaab) {
      puVar3 = operator_new(param_1 * 0x18);
      if (puVar3 != (undefined4 *)0x0) goto LAB_004e12df;
    }
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
LAB_004e12df:
  local_8 = 0;
  FUN_004e1230(*(undefined4 **)this,*(undefined4 **)((int)this + 4),puVar3);
  iVar1 = *(int *)((int)this + 4);
  iVar2 = *(int *)this;
  if (*(void **)this != (void *)0x0) {
    operator_delete(*(void **)this);
  }
  *(undefined4 **)this = puVar3;
  *(undefined4 **)((int)this + 8) = puVar3 + param_1 * 6;
  *(undefined4 **)((int)this + 4) = puVar3 + ((iVar1 - iVar2) / 0x18) * 6;
  ExceptionList = local_10;
  return;
}


/* FUN_004e1370 @ 004e1370  kind=gamemisc  attributed-by=none  size=162 */

void __thiscall FUN_004e1370(void *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 <= (uint)((*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x18)) {
    return;
  }
  iVar1 = (*(int *)((int)this + 4) - *(int *)this) / 0x18;
  if (0xaaaaaaaU - iVar1 < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  uVar2 = (*(int *)((int)this + 8) - *(int *)this) / 0x18;
  uVar3 = iVar1 + param_1;
  if (0xaaaaaaa - (uVar2 >> 1) < uVar2) {
    uVar2 = 0;
    if (uVar3 != 0) {
      uVar2 = uVar3;
    }
    FUN_004e1280(this,uVar2);
    return;
  }
  uVar2 = uVar2 + (uVar2 >> 1);
  if (uVar2 < uVar3) {
    uVar2 = uVar3;
  }
  FUN_004e1280(this,uVar2);
  return;
}


/* FUN_004e1420 @ 004e1420  kind=gamemisc  attributed-by=none  size=180 */

void __thiscall FUN_004e1420(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined4 **)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined4 **)((int)this + 8)) {
      FUN_004e1370(this,1);
    }
    puVar1 = (undefined4 *)(*(int *)this + (((int)param_1 - (int)puVar2) / 0x18) * 0x18);
    puVar2 = *(undefined4 **)((int)this + 4);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
      puVar2[3] = puVar1[3];
      puVar2[4] = puVar1[4];
      puVar2[5] = puVar1[5];
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x18;
      return;
    }
  }
  else {
    if (puVar1 == *(undefined4 **)((int)this + 8)) {
      FUN_004e1370(this,1);
    }
    puVar1 = *(undefined4 **)((int)this + 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_1;
      puVar1[1] = param_1[1];
      puVar1[2] = param_1[2];
      puVar1[3] = param_1[3];
      puVar1[4] = param_1[4];
      puVar1[5] = param_1[5];
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x18;
  return;
}


/* FUN_004e14e0 @ 004e14e0  kind=gamemisc  attributed-by=none  size=58 */

undefined4 * __thiscall FUN_004e14e0(void *this,uint *param_1)

{
  undefined8 uVar1;
  
  uVar1 = __alldiv(*param_1,param_1[1],0x10000,0);
  *(int *)this = (int)uVar1;
  uVar1 = __alldiv(param_1[2],param_1[3],0x10000,0);
  *(int *)((int)this + 4) = (int)uVar1;
  return this;
}


/* FUN_004e1520 @ 004e1520  kind=gamemisc  attributed-by=none  size=56 */

void __cdecl FUN_004e1520(float *param_1,float param_2,float *param_3)

{
  *param_1 = *param_3 * param_2;
  param_1[1] = param_3[1] * param_2;
  param_1[2] = param_3[2] * param_2;
  return;
}


/* FUN_004e1560 @ 004e1560  kind=gamemisc  attributed-by=none  size=141 */

void __cdecl FUN_004e1560(int param_1,int param_2,int param_3,int *param_4,int *param_5)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_2;
  while( true ) {
    iVar3 = iVar4 * 2 + 2;
    if (param_3 <= iVar3) break;
    fVar2 = *(float *)(*param_5 + 0x18 + *(int *)(param_1 + -4 + iVar3 * 4) * 0x1c);
    pfVar1 = (float *)(*param_5 + 0x18 + *(int *)(param_1 + iVar3 * 4) * 0x1c);
    if (*pfVar1 <= fVar2 && fVar2 != *pfVar1) {
      iVar3 = iVar4 * 2 + 1;
    }
    *(undefined4 *)(param_1 + iVar4 * 4) = *(undefined4 *)(param_1 + iVar3 * 4);
    iVar4 = iVar3;
  }
  if (iVar3 == param_3) {
    *(undefined4 *)(param_1 + iVar4 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
    iVar4 = param_3 + -1;
  }
  FUN_004e1950(param_1,iVar4,param_2,param_4,param_5);
  return;
}


/* FUN_004e15f0 @ 004e15f0  kind=gamemisc  attributed-by=none  size=256 */

void __cdecl FUN_004e15f0(int *param_1,int *param_2,int *param_3)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *local_8;
  
  if ((param_1 != param_2) && (piVar5 = param_1 + 1, piVar5 != param_2)) {
    do {
      iVar3 = *piVar5;
      fVar2 = *(float *)(*param_3 + 0x18 + iVar3 * 0x1c);
      if (*(float *)(*param_3 + 0x18 + *param_1 * 0x1c) <= fVar2) {
        iVar4 = piVar5[-1];
        piVar6 = piVar5;
        local_8 = piVar5;
        if (fVar2 < *(float *)(*param_3 + 0x18 + iVar4 * 0x1c)) {
          do {
            local_8 = piVar6 + -1;
            *piVar6 = iVar4;
            iVar4 = piVar6[-2];
            fVar2 = *(float *)(*param_3 + 0x18 + iVar4 * 0x1c);
            pfVar1 = (float *)(*param_3 + 0x18 + iVar3 * 0x1c);
            piVar6 = local_8;
          } while (*pfVar1 <= fVar2 && fVar2 != *pfVar1);
        }
        *local_8 = iVar3;
      }
      else {
        iVar4 = (int)piVar5 - (int)param_1 >> 2;
        memmove(piVar5 + (1 - iVar4),param_1,iVar4 * 4);
        *param_1 = iVar3;
      }
      piVar5 = piVar5 + 1;
    } while (piVar5 != param_2);
  }
  return;
}


/* FUN_004e16f0 @ 004e16f0  kind=gamemisc  attributed-by=none  size=206 */

void __cdecl FUN_004e16f0(int param_1,int param_2,int *param_3)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_10;
  int local_c;
  int local_8;
  
  iVar6 = param_2 - param_1 >> 2;
  iVar4 = iVar6 - (param_2 - param_1 >> 0x1f) >> 1;
  if (0 < iVar4) {
    local_c = iVar4 * 2 + 2;
    do {
      iVar4 = iVar4 + -1;
      local_10 = *(int *)(param_1 + iVar4 * 4);
      local_c = local_c + -2;
      local_8 = iVar4;
      for (iVar5 = local_c; iVar5 < iVar6; iVar5 = iVar5 * 2 + 2) {
        fVar2 = *(float *)(*param_3 + 0x18 + *(int *)(param_1 + -4 + iVar5 * 4) * 0x1c);
        pfVar1 = (float *)(*param_3 + 0x18 + *(int *)(param_1 + iVar5 * 4) * 0x1c);
        if (*pfVar1 <= fVar2 && fVar2 != *pfVar1) {
          iVar5 = iVar5 + -1;
        }
        *(undefined4 *)(param_1 + local_8 * 4) = *(undefined4 *)(param_1 + iVar5 * 4);
        local_8 = iVar5;
      }
      iVar3 = local_8;
      if (iVar5 == iVar6) {
        *(undefined4 *)(param_1 + local_8 * 4) = *(undefined4 *)(param_1 + -4 + iVar6 * 4);
        iVar3 = iVar6 + -1;
      }
      FUN_004e1950(param_1,iVar3,iVar4,&local_10,param_3);
    } while (0 < iVar4);
  }
  return;
}


/* FUN_004e17c0 @ 004e17c0  kind=gamemisc  attributed-by=none  size=168 */

void __cdecl FUN_004e17c0(int *param_1,int *param_2,int *param_3,int *param_4)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  
  iVar3 = *param_2;
  fVar2 = *(float *)(*param_4 + 0x18 + *param_1 * 0x1c);
  pfVar1 = (float *)(*param_4 + 0x18 + iVar3 * 0x1c);
  if (*pfVar1 <= fVar2 && fVar2 != *pfVar1) {
    *param_2 = *param_1;
    *param_1 = iVar3;
  }
  iVar3 = *param_3;
  fVar2 = *(float *)(*param_4 + 0x18 + *param_2 * 0x1c);
  pfVar1 = (float *)(*param_4 + 0x18 + iVar3 * 0x1c);
  if (*pfVar1 <= fVar2 && fVar2 != *pfVar1) {
    *param_3 = *param_2;
    *param_2 = iVar3;
    fVar2 = *(float *)(*param_4 + 0x18 + *param_1 * 0x1c);
    pfVar1 = (float *)(*param_4 + 0x18 + iVar3 * 0x1c);
    if (*pfVar1 <= fVar2 && fVar2 != *pfVar1) {
      *param_2 = *param_1;
      *param_1 = iVar3;
    }
  }
  return;
}


/* FUN_004e1870 @ 004e1870  kind=gamemisc  attributed-by=none  size=159 */

void __cdecl FUN_004e1870(int *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  
  iVar1 = (int)param_3 - (int)param_1 >> 2;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_004e17c0(param_1,param_1 + iVar1,param_1 + iVar1 * 2,param_4);
    FUN_004e17c0(param_2 + -iVar1,param_2,param_2 + iVar1,param_4);
    FUN_004e17c0(param_3 + iVar1 * -2,param_3 + -iVar1,param_3,param_4);
    FUN_004e17c0(param_1 + iVar1,param_2,param_3 + -iVar1,param_4);
    return;
  }
  FUN_004e17c0(param_1,param_2,param_3,param_4);
  return;
}


/* FUN_004e1910 @ 004e1910  kind=gamemisc  attributed-by=none  size=64 */

void __cdecl FUN_004e1910(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  for (; param_1 != param_2; param_1 = (undefined8 *)((int)param_1 + 0x1c)) {
    *param_3 = *param_1;
    param_3[1] = param_1[1];
    param_3[2] = param_1[2];
    *(undefined4 *)(param_3 + 3) = *(undefined4 *)(param_1 + 3);
    param_3 = (undefined8 *)((int)param_3 + 0x1c);
  }
  return;
}


/* FUN_004e1950 @ 004e1950  kind=gamemisc  attributed-by=none  size=158 */

void __cdecl FUN_004e1950(int param_1,int param_2,int param_3,int *param_4,int *param_5)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 <= param_3) {
    *(int *)(param_1 + param_2 * 4) = *param_4;
    return;
  }
  do {
    iVar4 = (param_2 + -1) / 2;
    iVar3 = *(int *)(param_1 + iVar4 * 4);
    fVar2 = *(float *)(*param_5 + 0x18 + *param_4 * 0x1c);
    pfVar1 = (float *)(*param_5 + 0x18 + iVar3 * 0x1c);
    if (fVar2 < *pfVar1 || fVar2 == *pfVar1) {
      *(int *)(param_1 + param_2 * 4) = *param_4;
      return;
    }
    *(int *)(param_1 + param_2 * 4) = iVar3;
    param_2 = iVar4;
  } while (param_3 < iVar4);
  *(int *)(param_1 + iVar4 * 4) = *param_4;
  return;
}


/* FUN_004e1ae0 @ 004e1ae0  kind=gamemisc  attributed-by=none  size=82 */

void __cdecl FUN_004e1ae0(undefined4 *param_1,int param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = param_3;
  uVar2 = param_2 - (int)param_1;
  while (4 < (int)(uVar2 & 0xfffffffc)) {
    param_2 = *(int *)((int)param_1 + (uVar2 - 4));
    *(undefined4 *)((int)param_1 + (uVar2 - 4)) = *param_1;
    uVar2 = uVar2 - 4;
    FUN_004e1560((int)param_1,0,(int)uVar2 >> 2,&param_2,piVar1);
  }
  return;
}


