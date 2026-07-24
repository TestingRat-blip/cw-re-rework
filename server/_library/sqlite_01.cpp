// sqlite_01 (_library) -- server. 200 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "sqlite_01.h"

/* FUN_00483490 @ 00483490  kind=lib  attributed-by=lib-island  size=60 */

undefined8 __cdecl FUN_00483490(int param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (-1 < (int)uVar1) {
    return CONCAT44(param_1,uVar1);
  }
  uVar2 = *(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x14);
  lVar3 = __allmul(uVar1,(int)uVar1 >> 0x1f,0xfffffc00,-1);
  uVar4 = __alldiv((uint)lVar3,(uint)((ulonglong)lVar3 >> 0x20),uVar2,(int)uVar2 >> 0x1f);
  return uVar4;
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


/* FUN_00483b10 @ 00483b10  kind=lib  attributed-by=lib-island  size=86 */

undefined4 __cdecl FUN_00483b10(int *param_1)

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
    *piVar1 = (int)&DAT_00569a48;
  }
  return 0;
}


/* FUN_00483b70 @ 00483b70  kind=lib  attributed-by=lib-island  size=42 */

short __cdecl FUN_00483b70(int param_1)

{
  if (param_1 == 0x48) {
    return 1;
  }
  if (param_1 == 0x49) {
    return 0x80;
  }
  return 2 << ((char)param_1 + 0xb4U & 0x1f);
}


/* FUN_00483bd0 @ 00483bd0  kind=lib  attributed-by=lib-island  size=102 */

int __cdecl FUN_00483bd0(int param_1)

{
  int iVar1;
  int iVar2;
  int local_8;
  
  local_8 = 0;
  FUN_004ba770(*(int *)(param_1 + 0xb8));
  iVar2 = FUN_004ba0e0(*(int **)(param_1 + 0xb8),&local_8);
  if ((iVar2 != 0) || (local_8 != 0)) {
    for (iVar1 = *(int *)(param_1 + 0x58); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x2c)) {
      *(undefined4 *)(iVar1 + 0x10) = 1;
    }
    FUN_004a3b00(*(undefined4 **)(param_1 + 0xb4),0);
  }
  return iVar2;
}


/* FUN_00483c40 @ 00483c40  kind=lib  attributed-by=lib-island  size=93 */

int __cdecl FUN_00483c40(int param_1)

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


/* FUN_00483ca0 @ 00483ca0  kind=lib  attributed-by=lib-island  size=69 */

int __cdecl FUN_00483ca0(int param_1,int param_2)

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


/* FUN_00483cf0 @ 00483cf0  kind=lib  attributed-by=lib-island  size=72 */

void __cdecl FUN_00483cf0(int *param_1)

{
  int iVar1;
  
  if (((char)param_1[1] != '\0') && (iVar1 = FUN_00483c40((int)param_1), iVar1 != 0)) {
    return;
  }
  FUN_004bac90(*param_1,param_1[0xf],param_1[0x2f],(uint)*(byte *)(param_1 + 1),param_1[0x22],
               param_1[0x23],param_1 + 0x2e);
  return;
}


/* FUN_00483d40 @ 00483d40  kind=lib  attributed-by=lib-island  size=134 */

void __cdecl FUN_00483d40(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint local_8;
  
  piVar1 = param_1;
  if ((char)param_1[3] == '\0') {
    iVar2 = FUN_00483dd0((int)param_1,&local_8);
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
          FUN_004a2440(piVar1,(undefined4 *)0x0);
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


/* FUN_00483dd0 @ 00483dd0  kind=lib  attributed-by=lib-island  size=133 */

int __cdecl FUN_00483dd0(int param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
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
    uVar4 = __alldiv((uVar3 + (uint)local_c) - 1,
                     (((int)uVar3 >> 0x1f) + local_c._4_4_ + (uint)CARRY4(uVar3,(uint)local_c)) -
                     (uint)(uVar3 + (uint)local_c == 0),uVar3,(int)uVar3 >> 0x1f);
    uVar3 = (uint)uVar4;
  }
  if (*(uint *)(param_1 + 0x84) < uVar3) {
    *(uint *)(param_1 + 0x84) = uVar3;
  }
  *param_2 = uVar3;
  return 0;
}


/* FUN_00483e60 @ 00483e60  kind=lib  attributed-by=lib-island  size=698 */

uint __cdecl FUN_00483e60(undefined4 *param_1,uint *param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  undefined8 uVar6;
  undefined8 local_24;
  uint *local_1c;
  uint local_18;
  uint local_14;
  uint *local_10;
  uint local_c;
  uint local_8;
  
  uVar4 = 0;
  local_10 = (uint *)0x0;
  if (param_2 == (uint *)0x0) {
    uVar3 = param_1[7];
LAB_00483ec5:
    puVar2 = local_10;
    param_1[6] = uVar3;
    *(undefined1 *)((int)param_1 + 0x11) = *(undefined1 *)(param_1 + 3);
    if ((param_2 == (uint *)0x0) && (param_1[0x2e] != 0)) {
      uVar4 = FUN_00484120((int)param_1);
      return uVar4;
    }
    local_8 = param_1[0x12];
    local_c = param_1[0x13];
    puVar5 = param_1 + 0x12;
    local_1c = puVar5;
    if ((param_2 != (uint *)0x0) && (param_1[0x2e] == 0)) {
      local_14 = local_8;
      local_18 = local_c;
      if (param_2[2] != 0 || param_2[3] != 0) {
        local_14 = param_2[2];
        local_18 = param_2[3];
      }
      *puVar5 = *param_2;
      param_1[0x13] = param_2[1];
      do {
        if (((int)local_18 < (int)param_1[0x13]) ||
           (((int)local_18 <= (int)param_1[0x13] && (local_14 <= *puVar5)))) {
          if (uVar4 == 0) goto LAB_00484050;
          break;
        }
        uVar4 = FUN_00484f60(param_1,puVar5,puVar2,1,1);
      } while (uVar4 == 0);
LAB_00483f73:
      if (param_2 != (uint *)0x0) {
        local_24 = __allmul(param_1[0x20] + 4,(int)(param_1[0x20] + 4) >> 0x1f,param_2[6],0);
        iVar1 = param_1[0x2e];
        if (iVar1 != 0) {
          if (param_2[10] != *(uint *)(iVar1 + 0x68)) {
            param_2[7] = 0;
            param_2[10] = *(uint *)(iVar1 + 0x68);
          }
          if (param_2[7] < *(uint *)(iVar1 + 0x44)) {
            *(uint *)(iVar1 + 0x44) = param_2[7];
            *(uint *)(iVar1 + 0x4c) = param_2[8];
            *(uint *)(iVar1 + 0x50) = param_2[9];
            FUN_004c0690(iVar1);
          }
          uVar4 = 0;
        }
        puVar2 = local_10;
        for (uVar3 = param_2[6]; (uVar4 == 0 && (puVar5 = local_1c, uVar3 < (uint)param_1[0xd]));
            uVar3 = uVar3 + 1) {
          uVar4 = FUN_00484f60(param_1,(uint *)&local_24,puVar2,0,1);
          puVar5 = local_1c;
        }
      }
      FUN_0048e9a0((int)local_10);
      if (uVar4 == 0) {
        *puVar5 = local_8;
        puVar5[1] = local_c;
      }
      return uVar4;
    }
    *puVar5 = 0;
    param_1[0x13] = 0;
LAB_00484050:
    do {
      if (((int)local_c < (int)param_1[0x13]) ||
         (((int)local_c <= (int)param_1[0x13] && (local_8 <= *puVar5)))) goto LAB_00483f73;
      local_18 = 0;
      uVar4 = FUN_004877e0((int)param_1,0,local_8,local_c,&local_18,(uint *)((int)&local_24 + 4));
      local_14 = local_18;
      if ((local_18 == 0) &&
         ((param_1[0x1f] + param_1[0x14] == *puVar5 &&
          (param_1[0x15] + (uint)CARRY4(param_1[0x1f],param_1[0x14]) == param_1[0x13])))) {
        uVar6 = __alldiv(local_8 - *puVar5,(local_c - param_1[0x13]) - (uint)(local_8 < *puVar5),
                         param_1[0x20] + 8,(int)(param_1[0x20] + 8) >> 0x1f);
        local_14 = (uint)uVar6;
      }
      uVar3 = 0;
      while( true ) {
        if (uVar4 != 0) goto LAB_00483f73;
        if (local_14 <= uVar3) break;
        if ((int)local_c < (int)param_1[0x13]) goto LAB_00483f73;
        if (((int)local_c <= (int)param_1[0x13]) && (local_8 <= *puVar5)) break;
        uVar4 = FUN_00484f60(param_1,puVar5,local_10,1,1);
        uVar3 = uVar3 + 1;
      }
    } while( true );
  }
  local_18 = param_2[5];
  puVar2 = (uint *)FUN_004a0350(0x200);
  if (puVar2 != (uint *)0x0) {
    local_10 = puVar2;
    memset(puVar2,0,0x200);
    *puVar2 = local_18;
    if (puVar2 != (uint *)0x0) {
      uVar3 = param_2[5];
      goto LAB_00483ec5;
    }
  }
  return 7;
}


/* FUN_00484120 @ 00484120  kind=lib  attributed-by=lib-island  size=92 */

int __cdecl FUN_00484120(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x1c);
  iVar2 = FUN_004baf40(*(int *)(param_1 + 0xb8),FUN_004842a0,param_1);
  puVar3 = FUN_004a3620(*(int **)(param_1 + 0xb4));
  if (puVar3 == (undefined1 *)0x0) {
    return iVar2;
  }
  do {
    if (iVar2 != 0) {
      return iVar2;
    }
    piVar1 = (int *)(puVar3 + 0x14);
    puVar3 = *(undefined1 **)(puVar3 + 0xc);
    iVar2 = FUN_004842a0(param_1,*piVar1);
  } while (puVar3 != (undefined1 *)0x0);
  return iVar2;
}


/* FUN_00484260 @ 00484260  kind=lib  attributed-by=lib-island  size=54 */

void __cdecl FUN_00484260(int param_1)

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


/* FUN_004842a0 @ 004842a0  kind=lib  attributed-by=lib-island  size=199 */

int __cdecl FUN_004842a0(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *local_8;
  
  iVar4 = 0;
  local_8 = (undefined4 *)0x0;
  FUN_004a37e0(*(int **)(param_1 + 0xb4),param_2,0,&local_8);
  puVar3 = local_8;
  if (local_8 != (undefined4 *)0x0) {
    if (*(short *)((int)local_8 + 0x1a) == 1) {
      if ((*(byte *)(local_8 + 6) & 2) != 0) {
        FUN_00486ed0((int)local_8);
      }
      iVar1 = puVar3[7];
      *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + -1;
      if (puVar3[5] == 1) {
        *(undefined4 *)(iVar1 + 0x2c) = 0;
      }
      (*DAT_00582b4c)(*(undefined4 *)(iVar1 + 0x28),*puVar3,1);
    }
    else {
      iVar4 = FUN_004876e0((int)local_8);
      if (iVar4 == 0) {
        (**(code **)(param_1 + 0xac))(puVar3);
      }
      puVar2 = (uint *)puVar3[4];
      FUN_004a3a80(puVar3);
      if (*(int *)(puVar2[0x2d] + 0xc) == 0) {
        FUN_00484370(puVar2);
      }
    }
  }
  for (iVar1 = *(int *)(param_1 + 0x58); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x2c)) {
    *(undefined4 *)(iVar1 + 0x10) = 1;
  }
  return iVar4;
}


/* FUN_00484370 @ 00484370  kind=lib  attributed-by=lib-island  size=94 */

void __cdecl FUN_00484370(uint *param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)((int)param_1 + 0xf);
  if ((bVar1 != 6) && (bVar1 != 0)) {
    if (bVar1 < 2) {
      if ((char)param_1[1] == '\0') {
        FUN_00484760((int *)param_1,0);
      }
    }
    else {
      if (DAT_00583e74 != (code *)0x0) {
        (*DAT_00583e74)();
      }
      FUN_004a2510(param_1);
      if (DAT_00583e78 != (code *)0x0) {
        (*DAT_00583e78)();
        FUN_00485380((int)param_1);
        return;
      }
    }
  }
  FUN_00485380((int)param_1);
  return;
}


/* FUN_004843d0 @ 004843d0  kind=lib  attributed-by=lib-island  size=49 */

undefined4 __cdecl FUN_004843d0(int param_1,undefined4 param_2)

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


/* FUN_00484410 @ 00484410  kind=lib  attributed-by=lib-island  size=156 */

int __cdecl FUN_00484410(int param_1,uint *param_2,uint param_3,int param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint **ppuVar5;
  
  uVar3 = param_3;
  if (param_4 == 0) {
    iVar4 = 1;
  }
  else {
    iVar4 = 0;
    ppuVar5 = &param_2;
    puVar1 = param_2;
    while (puVar1 != (uint *)0x0) {
      if (puVar1[5] <= uVar3) {
        ppuVar5 = (uint **)(puVar1 + 3);
        iVar4 = iVar4 + 1;
      }
      puVar1 = (uint *)puVar1[3];
      *ppuVar5 = puVar1;
    }
  }
  puVar1 = param_2;
  *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + iVar4;
  if (param_2[5] == 1) {
    FUN_004856d0((int)param_2);
  }
  iVar4 = FUN_004ba7d0(*(int **)(param_1 + 0xb8),*(uint *)(param_1 + 0x80),puVar1,uVar3,param_4,
                       (uint)*(byte *)(param_1 + 10));
  if (iVar4 == 0) {
    puVar2 = *(uint **)(param_1 + 0x58);
    while (puVar2 != (uint *)0x0) {
      FUN_0048e040(*(int **)(param_1 + 0x58),(undefined4 *)puVar1[5],puVar1[1]);
      puVar1 = (uint *)puVar1[3];
      puVar2 = puVar1;
    }
  }
  return iVar4;
}


/* FUN_004844b0 @ 004844b0  kind=lib  attributed-by=lib-island  size=121 */

int __cdecl FUN_004844b0(int param_1,int param_2)

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


/* FUN_00484530 @ 00484530  kind=lib  attributed-by=lib-island  size=547 */

int __cdecl FUN_00484530(int *param_1,byte *param_2)

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
  uint local_18;
  int local_14;
  byte *local_10;
  char *local_c;
  int *local_8;
  
  iVar3 = *param_1;
  _Size = *(int *)(iVar3 + 4) * 2;
  local_c = (char *)0x0;
  _Dst = (int *)FUN_004a0350(_Size);
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
      local_c = (char *)FUN_004a0350(local_20 + 1 + local_18);
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
              if (iVar4 != 0) goto LAB_0048471d;
              if (local_14 != 0) {
                iVar4 = (**(code **)(iVar3 + 0x18))(iVar3,pcVar9,local_8,0x801,0);
                if (iVar4 != 0) goto LAB_0048471d;
                iVar4 = FUN_00487a00(local_8,local_10,local_18);
                if (*local_8 != 0) {
                  (**(code **)(*local_8 + 4))(local_8);
                  *local_8 = 0;
                }
                if (iVar4 != 0) goto LAB_0048471d;
                pbVar5 = local_10;
                pbVar8 = param_2;
                if (*local_10 != 0) {
                  do {
                    bVar1 = *pbVar5;
                    bVar10 = bVar1 < *pbVar8;
                    if (bVar1 != *pbVar8) {
LAB_004846c1:
                      uVar6 = -(uint)bVar10 | 1;
                      goto LAB_004846c6;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pbVar5[1];
                    bVar10 = bVar1 < pbVar8[1];
                    if (bVar1 != pbVar8[1]) goto LAB_004846c1;
                    pbVar5 = pbVar5 + 2;
                    pbVar8 = pbVar8 + 2;
                  } while (bVar1 != 0);
                  uVar6 = 0;
LAB_004846c6:
                  if (uVar6 == 0) goto LAB_0048471d;
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
          FUN_004a1250(_Dst);
          iVar4 = (**(code **)(iVar3 + 0x1c))(iVar3,param_2,0);
        }
      }
    }
  }
LAB_0048471d:
  FUN_00466dd0((int)local_c);
  if (_Dst != (int *)0x0) {
    if (*_Dst != 0) {
      (**(code **)(*_Dst + 4))(_Dst);
      *_Dst = 0;
    }
    FUN_00466dd0((int)_Dst);
  }
  return iVar4;
}


/* FUN_00484760 @ 00484760  kind=lib  attributed-by=lib-island  size=460 */

int __cdecl FUN_00484760(int *param_1,int param_2)

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
  FUN_00487f30((int)param_1);
  piVar2 = (int *)param_1[0x10];
  if ((undefined *)*piVar2 != (undefined *)0x0) {
    if ((undefined *)*piVar2 == &DAT_00569a48) {
      FUN_004622c0((undefined8 *)piVar2);
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
          FUN_004a1250(piVar2);
          if ((char)iVar3 == '\0') {
            iVar5 = (**(code **)(*param_1 + 0x1c))(*param_1,param_1[0x25],0);
          }
          goto LAB_00484835;
        }
        iVar5 = FUN_004c5a60((int)param_1,param_2);
      }
      param_1[0x13] = 0;
      param_1[0x12] = 0;
    }
  }
LAB_00484835:
  FUN_0048e9a0(param_1[0xe]);
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  FUN_004a35c0((undefined4 *)param_1[0x2d]);
  FUN_004a3b00((undefined4 *)param_1[0x2d],param_1[6]);
  iVar3 = param_1[0x2e];
  if ((iVar3 != 0) && (*(char *)(iVar3 + 0x2c) != '\0')) {
    if (*(char *)(iVar3 + 0x2b) == '\0') {
      (**(code **)(**(int **)(iVar3 + 4) + 0x38))(*(int **)(iVar3 + 4),0,1,9);
    }
    *(undefined1 *)(iVar3 + 0x2c) = 0;
    *(undefined1 *)(iVar3 + 0x2f) = 0;
  }
  local_8 = 0;
  if ((char)param_1[1] != '\0') goto LAB_00484915;
  iVar3 = param_1[0x2e];
  if (iVar3 != 0) {
    if (*(char *)(iVar3 + 0x2b) == '\0') goto LAB_00484915;
    *(undefined1 *)(iVar3 + 0x2b) = 0;
    iVar4 = (**(code **)(**(int **)(iVar3 + 4) + 0x38))
                      (*(int **)(iVar3 + 4),*(short *)(iVar3 + 0x28) + 3,1,6);
    if (iVar4 != 0) {
      *(undefined1 *)(iVar3 + 0x2b) = 1;
    }
    if (*(char *)(iVar3 + 0x2b) != '\0') goto LAB_00484915;
  }
  piVar2 = (int *)param_1[0xf];
  local_8 = 0;
  if ((*piVar2 != 0) &&
     (local_8 = (**(code **)(*piVar2 + 0x20))(piVar2,1), (char)param_1[4] != '\x05')) {
    *(undefined1 *)(param_1 + 4) = 1;
  }
  *(undefined1 *)((int)param_1 + 0x11) = 0;
LAB_00484915:
  if (iVar5 == 0) {
    iVar5 = local_8;
  }
  *(undefined1 *)((int)param_1 + 0xf) = 1;
  *(undefined1 *)((int)param_1 + 0x12) = 0;
  return iVar5;
}


/* FUN_00484930 @ 00484930  kind=lib  attributed-by=lib-island  size=33 */

uint __cdecl FUN_00484930(int param_1,uint param_2)

{
  if (((param_2 & 0xff) == 0xd) || ((param_2 & 0xff) == 10)) {
    *(uint *)(param_1 + 0x28) = param_2;
    *(undefined1 *)(param_1 + 0xf) = 6;
  }
  return param_2;
}


/* FUN_00484960 @ 00484960  kind=lib  attributed-by=lib-island  size=373 */

uint __cdecl FUN_00484960(uint *param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar2 = param_1;
  if ((*(char *)((int)param_1 + 0x11) != '\0') || (param_1[6] == 0)) {
    return 0;
  }
  uVar4 = param_1[10];
  if (uVar4 == 0) {
    uVar4 = FUN_004a37e0((int *)param_1[0x2d],1,1,&param_1);
  }
  puVar5 = param_1;
  iVar3 = DAT_00582bb8;
  if (uVar4 == 0) {
    if (param_1[4] != 0) {
      puVar2[0x28] = puVar2[0x28] + 1;
      goto LAB_00484a78;
    }
    param_1[4] = (uint)puVar2;
    if (iVar3 / (int)puVar2[0x20] == 0) {
      FUN_004683f0(0xb,"database corruption at line %d of [%.10s]");
      uVar4 = 0xb;
    }
    else if (((*(char *)((int)puVar2 + 0xe) == '\0') && (puVar2[6] != 0)) &&
            (*(int *)puVar2[0xf] != 0)) {
      puVar2[0x29] = puVar2[0x29] + 1;
      uVar4 = FUN_004876e0((int)param_1);
      if (uVar4 == 0) goto LAB_00484a78;
    }
    else {
      if (puVar2[0x21] != 0) {
        memset((void *)param_1[1],0,puVar2[0x20]);
        goto LAB_00484a78;
      }
      uVar4 = 0xd;
    }
    if ((puVar5[6] & 2) != 0) {
      FUN_00486ed0((int)puVar5);
    }
    uVar1 = puVar5[7];
    *(int *)(uVar1 + 0xc) = *(int *)(uVar1 + 0xc) + -1;
    if (puVar5[5] == 1) {
      *(undefined4 *)(uVar1 + 0x2c) = 0;
    }
    (*DAT_00582b4c)(*(undefined4 *)(uVar1 + 0x28),*puVar5,1);
  }
  if (*(int *)(puVar2[0x2d] + 0xc) == 0) {
    FUN_00484370(puVar2);
  }
  puVar5 = (uint *)0x0;
  if (uVar4 != 0) {
    return uVar4;
  }
LAB_00484a78:
  uVar4 = FUN_004a2c80(puVar5);
  if (uVar4 == 0) {
    FUN_004856d0((int)puVar5);
    *(undefined1 *)((int)puVar2 + 0x11) = 1;
  }
  if (puVar5 != (uint *)0x0) {
    puVar2 = (uint *)puVar5[4];
    FUN_004a3a80(puVar5);
    if (*(int *)(puVar2[0x2d] + 0xc) == 0) {
      FUN_00484370(puVar2);
    }
  }
  return uVar4;
}


/* FUN_00484ae0 @ 00484ae0  kind=lib  attributed-by=lib-island  size=37 */

undefined4 __cdecl FUN_00484ae0(int param_1,int param_2)

{
  undefined4 local_8;
  
  FUN_004a37e0(*(int **)(param_1 + 0xb4),param_2,0,&local_8);
  return local_8;
}


/* FUN_00484b10 @ 00484b10  kind=lib  attributed-by=lib-island  size=272 */

int __cdecl FUN_00484b10(int *param_1)

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
      piVar1 = (int *)FUN_004a0350(0x200);
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
          FUN_004a0960((undefined8 *)piVar1);
        }
        else {
          uVar2 = 0x800;
          if ((char)param_1[3] != '\0') {
            uVar2 = 0x1008;
          }
          iVar3 = (**(code **)(iVar3 + 0x18))(iVar3,param_1[0x25],piVar1,uVar2 | 6,0);
          if (iVar3 != 0) goto LAB_00484bfe;
        }
      }
      param_1[0xb] = 0;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      *(undefined1 *)((int)param_1 + 0x12) = 0;
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      iVar3 = FUN_004c29f0((uint)param_1);
      if (iVar3 != 0) {
LAB_00484bfe:
        FUN_0048e9a0(param_1[0xe]);
        param_1[0xe] = 0;
        return iVar3;
      }
    }
    iVar4 = 0;
    *(undefined1 *)((int)param_1 + 0xf) = 3;
  }
  return iVar4;
}


/* FUN_00484c20 @ 00484c20  kind=lib  attributed-by=lib-island  size=828 */

uint __cdecl FUN_00484c20(uint *param_1,int param_2)

{
  char *pcVar1;
  byte *pbVar2;
  int *piVar3;
  code *pcVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  undefined8 uVar9;
  uint local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  puVar5 = param_1;
  local_c = 1;
  puVar8 = param_1 + 0x10;
  local_8 = 0;
  param_1 = (uint *)*param_1;
  uVar6 = (**(code **)(*(int *)*puVar8 + 0x18))((int *)*puVar8,&local_20);
  if (uVar6 == 0) {
    pcVar1 = (char *)puVar5[0x2c];
    uVar6 = FUN_00487a00((int *)puVar5[0x10],pcVar1,*(int *)(*puVar5 + 8) + 1);
    if ((uVar6 == 0) &&
       (((*pcVar1 == '\0' || (uVar6 = (*(code *)param_1[8])(param_1,pcVar1,0,&local_c), uVar6 == 0))
        && (local_c != 0)))) {
      puVar5[0x12] = 0;
      puVar5[0x13] = 0;
      local_14 = param_2;
      uVar6 = FUN_004877e0((int)puVar5,param_2,local_20,local_1c,(uint *)&param_1,&local_8);
      uVar7 = local_1c;
      while (uVar6 == 0) {
        local_1c = uVar7;
        if (param_1 == (uint *)0xffffffff) {
          uVar9 = __alldiv(local_20 - puVar5[0x1f],uVar7 - (local_20 < puVar5[0x1f]),
                           puVar5[0x20] + 8,(int)(puVar5[0x20] + 8) >> 0x1f);
          param_1 = (uint *)uVar9;
        }
        if ((param_1 == (uint *)0x0) && (param_2 == 0)) {
          local_10 = puVar5[0x12];
          local_18 = puVar5[0x13];
          if ((puVar5[0x1f] + puVar5[0x14] == local_10) &&
             (puVar5[0x15] + (uint)CARRY4(puVar5[0x1f],puVar5[0x14]) == local_18)) {
            uVar9 = __alldiv(local_20 - local_10,(uVar7 - local_18) - (uint)(local_20 < local_10),
                             puVar5[0x20] + 8,(int)(puVar5[0x20] + 8) >> 0x1f);
            param_1 = (uint *)uVar9;
          }
        }
        uVar7 = local_8;
        if ((puVar5[0x12] == puVar5[0x1f]) && (puVar5[0x13] == 0)) {
          uVar6 = FUN_00485280((int)puVar5,local_8);
          if (uVar6 != 0) goto LAB_00484e14;
          puVar5[6] = uVar7;
        }
        puVar8 = (uint *)0x0;
        if (param_1 != (uint *)0x0) {
          do {
            if (local_14 != 0) {
              for (uVar6 = puVar5[0x16]; uVar6 != 0; uVar6 = *(uint *)(uVar6 + 0x2c)) {
                *(undefined4 *)(uVar6 + 0x10) = 1;
              }
              FUN_004a3b00((undefined4 *)puVar5[0x2d],0);
              local_14 = 0;
            }
            uVar6 = FUN_00484f60(puVar5,puVar5 + 0x12,(uint *)0x0,1,0);
            if (uVar6 != 0) {
              if (uVar6 != 0x65) {
                if (uVar6 == 0x20a) {
                  uVar6 = 0;
                }
                goto LAB_00484e14;
              }
              puVar5[0x12] = local_20;
              puVar5[0x13] = local_1c;
              break;
            }
            puVar8 = (uint *)((int)puVar8 + 1);
          } while (puVar8 < param_1);
        }
        uVar6 = FUN_004877e0((int)puVar5,param_2,local_20,local_1c,(uint *)&param_1,&local_8);
        uVar7 = local_1c;
      }
      if (uVar6 == 0x65) {
        uVar6 = 0;
      }
    }
  }
LAB_00484e14:
  *(char *)((int)puVar5 + 0x11) = (char)puVar5[3];
  if (uVar6 == 0) {
    pbVar2 = (byte *)puVar5[0x2c];
    uVar6 = FUN_00487a00((int *)puVar5[0x10],pbVar2,*(int *)(*puVar5 + 8) + 1);
    if (uVar6 == 0) {
      if ((3 < *(byte *)((int)puVar5 + 0xf)) || (*(byte *)((int)puVar5 + 0xf) == 0)) {
        uVar6 = 0;
        if (*(char *)((int)puVar5 + 7) == '\0') {
          uVar6 = (**(code **)(*(int *)puVar5[0xf] + 0x14))
                            ((int *)puVar5[0xf],*(undefined1 *)((int)puVar5 + 0xb));
        }
        else {
          piVar3 = (int *)puVar5[0xf];
          if ((*piVar3 != 0) && (uVar6 = (**(code **)(*piVar3 + 0x28))(piVar3,8,0), uVar6 == 0xc)) {
            uVar6 = 0;
          }
        }
        if (uVar6 != 0) goto LAB_00484ee2;
      }
      uVar6 = FUN_00484760((int *)puVar5,(uint)(*pbVar2 != 0));
      if (((uVar6 == 0) && (*pbVar2 != 0)) && (local_c != 0)) {
        uVar6 = FUN_00484530((int *)puVar5,pbVar2);
      }
    }
  }
LAB_00484ee2:
  if (((char)puVar5[3] != '\0') ||
     (uVar7 = (**(code **)(*(int *)puVar5[0xf] + 0x30))((int *)puVar5[0xf]), (uVar7 & 0x1000) != 0))
  {
    puVar5[0x1f] = 0x200;
    return uVar6;
  }
  pcVar4 = *(code **)(*(int *)puVar5[0xf] + 0x2c);
  if (pcVar4 == (code *)0x0) {
    puVar5[0x1f] = 0x1000;
    return uVar6;
  }
  uVar7 = (*pcVar4)((int *)puVar5[0xf]);
  if ((int)uVar7 < 0x20) {
    puVar5[0x1f] = 0x200;
    return uVar6;
  }
  if (0x10000 < (int)uVar7) {
    uVar7 = 0x10000;
  }
  puVar5[0x1f] = uVar7;
  return uVar6;
}


/* FUN_00484f60 @ 00484f60  kind=lib  attributed-by=lib-island  size=749 */

uint __cdecl FUN_00484f60(undefined4 *param_1,uint *param_2,uint *param_3,int param_4,int param_5)

{
  void *_Dst;
  undefined4 *puVar1;
  uint *puVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  undefined3 extraout_var;
  int *piVar6;
  undefined4 *puVar7;
  longlong lVar8;
  uint local_c;
  void *local_8;
  
  puVar2 = param_2;
  puVar1 = param_1;
  local_8 = (void *)param_1[0x2c];
  if (param_4 == 0) {
    piVar6 = (int *)param_1[0x11];
  }
  else {
    piVar6 = (int *)param_1[0x10];
  }
  uVar4 = (**(code **)(*piVar6 + 8))(piVar6,&local_c,4,*param_2,param_2[1]);
  if (uVar4 != 0) {
    return uVar4;
  }
  puVar7 = (undefined4 *)
           ((((local_c & 0xff) << 8 | local_c >> 8 & 0xff) << 8 | local_c >> 0x10 & 0xff) << 8 |
           local_c >> 0x18);
  uVar4 = (**(code **)(*piVar6 + 8))(piVar6,local_8,puVar1[0x20],*puVar2 + 4);
  if (uVar4 != 0) {
    return uVar4;
  }
  uVar5 = puVar1[0x20] + param_4 * 4 + 4;
  uVar4 = *param_2;
  *param_2 = *param_2 + uVar5;
  param_2[1] = param_2[1] + ((int)uVar5 >> 0x1f) + (uint)CARRY4(uVar4,uVar5);
  if ((puVar7 == (undefined4 *)0x0) ||
     (puVar7 == (undefined4 *)(DAT_00582bb8 / (int)puVar1[0x20] + 1))) {
    return 0x65;
  }
  if (((undefined4 *)puVar1[6] < puVar7) ||
     (bVar3 = FUN_0048ec40(param_3,(uint)puVar7), CONCAT31(extraout_var,bVar3) != 0)) {
    return 0;
  }
  if (param_4 != 0) {
    uVar4 = FUN_00487690(piVar6,*param_2 - 4,param_2[1] - (uint)(*param_2 < 4),&local_c);
    if (uVar4 != 0) {
      return uVar4;
    }
    if ((param_5 == 0) && (uVar4 = FUN_004844b0((int)puVar1,(int)local_8), uVar4 != local_c)) {
      return 0x65;
    }
  }
  if ((param_3 != (uint *)0x0) && (uVar4 = FUN_0048ea60(param_3,(uint)puVar7), uVar4 != 0)) {
    return uVar4;
  }
  uVar4 = 0;
  if ((puVar7 == (undefined4 *)0x1) &&
     (*(ushort *)((int)puVar1 + 0x76) != (ushort)*(byte *)((int)local_8 + 0x14))) {
    *(ushort *)((int)puVar1 + 0x76) = (ushort)*(byte *)((int)local_8 + 0x14);
  }
  if (puVar1[0x2e] == 0) {
    param_1 = (undefined4 *)FUN_00484ae0((int)puVar1,(int)puVar7);
  }
  else {
    param_1 = (undefined4 *)0x0;
  }
  if (param_4 == 0) {
    if ((param_1 == (undefined4 *)0x0) || ((*(byte *)(param_1 + 6) & 4) == 0)) goto LAB_00485100;
LAB_0048516e:
    bVar3 = false;
  }
  else {
    if (*(char *)((int)puVar1 + 7) == '\0') {
      if (((int)puVar1[0x15] <= (int)param_2[1]) &&
         (((int)puVar1[0x15] < (int)param_2[1] || ((uint)puVar1[0x14] < *param_2))))
      goto LAB_0048516e;
    }
LAB_00485100:
    bVar3 = true;
  }
  if ((*(int *)puVar1[0xf] == 0) ||
     (((*(byte *)((int)puVar1 + 0xf) < 4 && (*(byte *)((int)puVar1 + 0xf) != 0)) || (!bVar3)))) {
    if (param_4 != 0) goto LAB_004851b6;
    if (param_1 == (undefined4 *)0x0) {
      *(char *)((int)puVar1 + 0x13) = *(char *)((int)puVar1 + 0x13) + '\x01';
      uVar4 = FUN_004a14c0((int)puVar1,(uint)puVar7,(int *)&param_1,1);
      *(char *)((int)puVar1 + 0x13) = *(char *)((int)puVar1 + 0x13) + -1;
      if (uVar4 != 0) {
        return uVar4;
      }
      *(ushort *)(param_1 + 6) = *(ushort *)(param_1 + 6) & 0xfff7;
      FUN_004a39a0((int)param_1);
      uVar4 = 0;
      goto LAB_004851b6;
    }
  }
  else {
    uVar4 = puVar1[0x20];
    lVar8 = __allmul((int)puVar7 - 1,0,uVar4,(int)uVar4 >> 0x1f);
    uVar4 = FUN_004a1390((int *)puVar1[0xf],local_8,uVar4,(int)lVar8,(int)((ulonglong)lVar8 >> 0x20)
                        );
    if ((undefined4 *)puVar1[8] < puVar7) {
      puVar1[8] = puVar7;
    }
    if ((int *)puVar1[0x16] != (int *)0x0) {
      FUN_0048e040((int *)puVar1[0x16],puVar7,(int)local_8);
    }
LAB_004851b6:
    if (param_1 == (undefined4 *)0x0) {
      return uVar4;
    }
  }
  _Dst = (void *)param_1[1];
  memcpy(_Dst,local_8,puVar1[0x20]);
  (*(code *)puVar1[0x2b])(param_1);
  if (param_4 != 0) {
    if (param_5 != 0) {
      if (((int)puVar1[0x15] < (int)param_2[1]) ||
         (((int)puVar1[0x15] <= (int)param_2[1] && ((uint)puVar1[0x14] < *param_2))))
      goto LAB_00485208;
    }
    FUN_004a3950(param_1);
  }
LAB_00485208:
  if (puVar7 == (undefined4 *)0x1) {
    *(undefined8 *)(puVar1 + 0x19) = *(undefined8 *)((int)_Dst + 0x18);
    *(undefined8 *)(puVar1 + 0x1b) = *(undefined8 *)((int)_Dst + 0x20);
  }
  FUN_004a3a80(param_1);
  return uVar4;
}


/* FUN_00485250 @ 00485250  kind=lib  attributed-by=lib-island  size=48 */

void __cdecl FUN_00485250(int param_1)

{
  int iVar1;
  
  for (iVar1 = *(int *)(param_1 + 0x58); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x2c)) {
    *(undefined4 *)(iVar1 + 0x10) = 1;
  }
  FUN_004a3b00(*(undefined4 **)(param_1 + 0xb4),0);
  return;
}


/* FUN_00485280 @ 00485280  kind=lib  attributed-by=lib-island  size=246 */

/* WARNING: Removing unreachable block (ram,0x00485304) */
/* WARNING: Removing unreachable block (ram,0x00485331) */

int __cdecl FUN_00485280(int param_1,uint param_2)

{
  int *piVar1;
  uint _Size;
  void *_Dst;
  int iVar2;
  longlong lVar3;
  uint local_20;
  int local_1c;
  
  piVar1 = *(int **)(param_1 + 0x3c);
  if ((*piVar1 == 0) || ((*(byte *)(param_1 + 0xf) < 4 && (*(byte *)(param_1 + 0xf) != 0)))) {
    return 0;
  }
  _Size = *(uint *)(param_1 + 0x80);
  iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1);
  lVar3 = __allmul(param_2,0,_Size,(int)_Size >> 0x1f);
  if (iVar2 != 0) {
    return iVar2;
  }
  if (lVar3 == CONCAT44(local_1c,local_20)) {
    return 0;
  }
  if (lVar3 < CONCAT44(local_1c,local_20)) {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x3c) + 0x10))(*(int **)(param_1 + 0x3c),lVar3);
  }
  else {
    if (lVar3 < CONCAT44(((int)_Size >> 0x1f) + local_1c + (uint)CARRY4(_Size,local_20),
                         _Size + local_20)) goto LAB_00485367;
    _Dst = *(void **)(param_1 + 0xb0);
    memset(_Dst,0,_Size);
    iVar2 = FUN_004a1390(*(int **)(param_1 + 0x3c),_Dst,_Size,(int)(lVar3 - (int)_Size),
                         (int)((ulonglong)(lVar3 - (int)_Size) >> 0x20));
  }
  if (iVar2 != 0) {
    return iVar2;
  }
LAB_00485367:
  *(uint *)(param_1 + 0x20) = param_2;
  return 0;
}


/* FUN_00485380 @ 00485380  kind=lib  attributed-by=lib-island  size=274 */

void __cdecl FUN_00485380(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  FUN_0048e9a0(*(int *)(param_1 + 0x38));
  *(undefined4 *)(param_1 + 0x38) = 0;
  FUN_00487f30(param_1);
  if (*(int *)(param_1 + 0xb8) == 0) {
    if (*(char *)(param_1 + 4) != '\0') goto LAB_00485430;
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
    FUN_004ba770(*(int *)(param_1 + 0xb8));
  }
  *(undefined1 *)(param_1 + 0xf) = 0;
LAB_00485430:
  if (*(int *)(param_1 + 0x28) != 0) {
    for (iVar3 = *(int *)(param_1 + 0x58); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x2c)) {
      *(undefined4 *)(iVar3 + 0x10) = 1;
    }
    FUN_004a3b00(*(undefined4 **)(param_1 + 0xb4),0);
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


/* FUN_004854a0 @ 004854a0  kind=lib  attributed-by=lib-island  size=113 */

int __cdecl FUN_004854a0(int param_1,int param_2)

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


/* FUN_00485520 @ 00485520  kind=lib  attributed-by=lib-island  size=425 */

uint __cdecl FUN_00485520(int param_1)

{
  int *piVar1;
  uint *puVar2;
  bool bVar3;
  uint uVar4;
  undefined3 extraout_var;
  int iVar5;
  undefined3 extraout_var_00;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  iVar9 = *(int *)(param_1 + 4);
  piVar1 = *(int **)(param_1 + 0x10);
  uVar4 = piVar1[10];
  if (uVar4 == 0) {
    if (*(char *)((int)piVar1 + 0xd) != '\0') {
      return 3;
    }
    uVar4 = 0;
    if ((*(char *)((int)piVar1 + 0xf) != '\x02') || (uVar4 = FUN_00484b10(piVar1), uVar4 == 0)) {
      FUN_004a39a0(param_1);
      puVar2 = *(uint **)(*(int *)(param_1 + 0x10) + 0x38);
      bVar3 = FUN_0048ec40(puVar2,*(uint *)(param_1 + 0x14));
      if ((CONCAT31(extraout_var,bVar3) == 0) || (iVar5 = FUN_004bd250(param_1), iVar5 != 0)) {
        bVar3 = FUN_0048ec40(puVar2,*(uint *)(param_1 + 0x14));
        if ((CONCAT31(extraout_var_00,bVar3) == 0) && (piVar1[0x2e] == 0)) {
          if (((uint)piVar1[7] < *(uint *)(param_1 + 0x14)) || (*(int *)piVar1[0x10] == 0)) {
            if (*(char *)((int)piVar1 + 0xf) != '\x04') {
              *(ushort *)(param_1 + 0x18) = *(ushort *)(param_1 + 0x18) | 4;
            }
          }
          else {
            iVar5 = piVar1[0x13];
            uVar4 = piVar1[0x12];
            iVar6 = FUN_004844b0((int)piVar1,iVar9);
            *(ushort *)(param_1 + 0x18) = *(ushort *)(param_1 + 0x18) | 4;
            uVar7 = FUN_004c29b0((int *)piVar1[0x10],uVar4,iVar5,*(undefined4 *)(param_1 + 0x14));
            if (uVar7 != 0) {
              return uVar7;
            }
            uVar7 = FUN_004a1390((int *)piVar1[0x10],iVar9,piVar1[0x20],uVar4 + 4,
                                 iVar5 + (uint)(0xfffffffb < uVar4));
            if (uVar7 != 0) {
              return uVar7;
            }
            uVar7 = piVar1[0x20];
            uVar4 = FUN_004c29b0((int *)piVar1[0x10],uVar7 + uVar4 + 4,
                                 ((int)uVar7 >> 0x1f) + iVar5 + (uint)CARRY4(uVar7,uVar4) +
                                 (uint)(0xfffffffb < uVar7 + uVar4),iVar6);
            if (uVar4 != 0) {
              return uVar4;
            }
            uVar7 = piVar1[0x20] + 8;
            puVar2 = (uint *)(piVar1 + 0x12);
            uVar4 = *puVar2;
            *puVar2 = *puVar2 + uVar7;
            piVar1[0x13] = piVar1[0x13] + ((int)uVar7 >> 0x1f) + (uint)CARRY4(uVar4,uVar7);
            piVar1[0xb] = piVar1[0xb] + 1;
            uVar7 = FUN_0048ea60((uint *)piVar1[0xe],*(uint *)(param_1 + 0x14));
            uVar8 = FUN_0046b780((int)piVar1,*(uint *)(param_1 + 0x14));
            uVar4 = 0;
            if ((uVar7 | uVar8) != 0) {
              return uVar7 | uVar8;
            }
          }
        }
        iVar9 = FUN_004bd250(param_1);
        if (iVar9 != 0) {
          uVar4 = FUN_004bd350(param_1);
        }
      }
      if ((uint)piVar1[6] < *(uint *)(param_1 + 0x14)) {
        piVar1[6] = *(uint *)(param_1 + 0x14);
      }
    }
  }
  return uVar4;
}


/* FUN_004856d0 @ 004856d0  kind=lib  attributed-by=lib-island  size=119 */

void __cdecl FUN_004856d0(int param_1)

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


/* FUN_00485750 @ 00485750  kind=lib  attributed-by=lib-island  size=311 */

int __cdecl FUN_00485750(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
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
      puVar1 = *(undefined4 **)(param_2 + 0x14);
      if ((puVar1 <= (undefined4 *)param_1[6]) && ((*(byte *)(param_2 + 0x18) & 0x20) == 0)) {
        lVar3 = __allmul((int)puVar1 - 1,0,param_1[0x20],param_1[0x20] >> 0x1f);
        local_8 = (int)lVar3;
        if (puVar1 == (undefined4 *)0x1) {
          FUN_004856d0(param_2);
        }
        local_10 = CONCAT44(*(undefined4 *)(param_2 + 4),(undefined4)local_10);
        local_8 = (**(code **)(*(int *)param_1[0xf] + 0xc))
                            ((int *)param_1[0xf],*(undefined4 *)(param_2 + 4),param_1[0x20],local_8,
                             (int)((ulonglong)lVar3 >> 0x20));
        if (puVar1 == (undefined4 *)0x1) {
          *(undefined8 *)(param_1 + 0x19) = *(undefined8 *)(local_10._4_4_ + 0x18);
          *(undefined8 *)(param_1 + 0x1b) = *(undefined8 *)(local_10._4_4_ + 0x20);
        }
        if ((undefined4 *)param_1[8] < puVar1) {
          param_1[8] = (int)puVar1;
        }
        param_1[0x2a] = param_1[0x2a] + 1;
        FUN_0048e040((int *)param_1[0x16],puVar1,*(int *)(param_2 + 4));
      }
      param_2 = *(int *)(param_2 + 0xc);
      iVar2 = 0;
    } while (local_8 == 0);
  }
  return local_8;
}


/* FUN_004868a0 @ 004868a0  kind=lib  attributed-by=lib-island  size=263 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __cdecl FUN_004868a0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (DAT_00583e5c < param_1) {
    DAT_00583e5c = param_1;
  }
  _DAT_00583e34 = param_1;
  if (param_1 <= DAT_00584208) {
    if (DAT_0058421c != 0) {
      (*DAT_00582b18)(DAT_0058421c);
    }
    puVar1 = DAT_00584220;
    if (DAT_00584220 != (undefined4 *)0x0) {
      DAT_00584220 = (undefined4 *)*DAT_00584220;
      DAT_00584224 = DAT_00584224 + -1;
      DAT_00584228 = (uint)(DAT_00584224 < DAT_00584210);
      DAT_00583e1c = DAT_00583e1c + 1;
      if (DAT_00583e44 < DAT_00583e1c) {
        DAT_00583e44 = DAT_00583e1c;
      }
    }
    if (DAT_0058421c != 0) {
      (*DAT_00582b20)(DAT_0058421c);
    }
    if (puVar1 != (undefined4 *)0x0) {
      return puVar1;
    }
  }
  puVar1 = (undefined4 *)FUN_004a0350(param_1);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (*DAT_00582af0._4_4_)(puVar1);
    if (DAT_0058421c != 0) {
      (*DAT_00582b18)(DAT_0058421c);
    }
    DAT_00583e20 = DAT_00583e20 + iVar2;
    if (DAT_00583e48 < DAT_00583e20) {
      DAT_00583e48 = DAT_00583e20;
    }
    if (DAT_0058421c != 0) {
      (*DAT_00582b20)(DAT_0058421c);
    }
  }
  return puVar1;
}


/* FUN_00486af0 @ 00486af0  kind=lib  attributed-by=lib-island  size=246 */

int __cdecl FUN_00486af0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  if ((param_1 < DAT_00584214) || (DAT_00584218 <= param_1)) {
    iVar1 = (*DAT_00582af0._4_4_)(param_1);
    if (DAT_0058421c != 0) {
      (*DAT_00582b18)(DAT_0058421c);
    }
    DAT_00583e20 = DAT_00583e20 - iVar1;
    if (DAT_00583e48 < DAT_00583e20) {
      DAT_00583e48 = DAT_00583e20;
    }
    if (DAT_0058421c != 0) {
      (*DAT_00582b20)(DAT_0058421c);
    }
    FUN_00466dd0((int)param_1);
  }
  else {
    if (DAT_0058421c != 0) {
      (*DAT_00582b18)(DAT_0058421c);
    }
    DAT_00583e1c = DAT_00583e1c + -1;
    if (DAT_00583e44 < DAT_00583e1c) {
      DAT_00583e44 = DAT_00583e1c;
    }
    *param_1 = DAT_00584220;
    DAT_00584224 = DAT_00584224 + 1;
    DAT_00584220 = param_1;
    DAT_00584228 = (uint)(DAT_00584224 < DAT_00584210);
    if (DAT_0058421c != 0) {
      (*DAT_00582b20)(DAT_0058421c);
      return 0;
    }
  }
  return iVar1;
}


/* FUN_00486ed0 @ 00486ed0  kind=lib  attributed-by=lib-island  size=105 */

void __cdecl FUN_00486ed0(int param_1)

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


/* FUN_00486f40 @ 00486f40  kind=lib  attributed-by=lib-island  size=301 */

int __cdecl FUN_00486f40(int *param_1,undefined4 *param_2,byte *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  
  puVar3 = param_2;
  if (param_2 < (undefined4 *)0x2) {
    uVar7 = 0;
  }
  else {
    uVar7 = (uint)param_1[9] / 5 + 1;
    iVar6 = (((int)param_2 - 2U) / uVar7) * uVar7;
    uVar7 = iVar6 + 2;
    if (uVar7 == DAT_00582bb8 / (uint)param_1[8] + 1) {
      uVar7 = iVar6 + 3;
    }
  }
  iVar6 = FUN_004a14c0(*param_1,uVar7,(int *)&param_2,0);
  pbVar5 = param_3;
  puVar4 = param_2;
  if (iVar6 == 0) {
    puVar1 = (undefined4 *)param_2[1];
    iVar6 = ((int)puVar3 + (-1 - uVar7)) * 5;
    if (iVar6 < 0) {
      puVar2 = (uint *)param_2[4];
      param_2 = puVar1;
      FUN_004a3a80(puVar4);
      if (*(int *)(puVar2[0x2d] + 0xc) == 0) {
        FUN_00484370(puVar2);
      }
    }
    else {
      *param_3 = *(byte *)(iVar6 + (int)puVar1);
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar6 + 1 + (int)puVar1),
                                              *(undefined1 *)(iVar6 + 2 + (int)puVar1)),
                                     *(undefined1 *)(iVar6 + 3 + (int)puVar1)),
                            *(undefined1 *)(iVar6 + 4 + (int)puVar1));
      }
      puVar2 = (uint *)param_2[4];
      param_2 = puVar1;
      FUN_004a3a80(puVar4);
      if (*(int *)(puVar2[0x2d] + 0xc) == 0) {
        FUN_00484370(puVar2);
      }
      if ((*pbVar5 != 0) && (*pbVar5 < 6)) {
        return 0;
      }
    }
    FUN_004683f0(0xb,"database corruption at line %d of [%.10s]");
    iVar6 = 0xb;
  }
  return iVar6;
}


/* FUN_00487070 @ 00487070  kind=lib  attributed-by=lib-island  size=72 */

int __cdecl FUN_00487070(int param_1,uint param_2)

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
  if (iVar3 == DAT_00582bb8 / *(uint *)(param_1 + 0x20) + 1) {
    iVar3 = iVar2 + 3;
  }
  return iVar3;
}


/* FUN_004870c0 @ 004870c0  kind=lib  attributed-by=lib-island  size=261 */

void __cdecl FUN_004870c0(int *param_1,uint param_2,char param_3,int param_4,uint *param_5)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *local_8;
  
  if (*param_5 == 0) {
    if (param_2 == 0) {
      FUN_004683f0(0xb,"database corruption at line %d of [%.10s]");
      *param_5 = 0xb;
      return;
    }
    uVar2 = FUN_00487070((int)param_1,param_2);
    uVar3 = FUN_004a14c0(*param_1,uVar2,(int *)&local_8,0);
    if (uVar3 != 0) {
      *param_5 = uVar3;
      return;
    }
    iVar4 = ((param_2 - uVar2) + -1) * 5;
    if (iVar4 < 0) {
      FUN_004683f0(0xb,"database corruption at line %d of [%.10s]");
      *param_5 = 0xb;
    }
    else {
      pcVar5 = (char *)(local_8[1] + iVar4);
      if ((param_3 != *pcVar5) || (iVar4 = FUN_0049c920(pcVar5 + 1), iVar4 != param_4)) {
        uVar2 = FUN_004a2c80(local_8);
        *param_5 = uVar2;
        if (uVar2 == 0) {
          *pcVar5 = param_3;
          FUN_004a5f90(pcVar5 + 1,param_4);
        }
      }
    }
    if (local_8 != (undefined4 *)0x0) {
      puVar1 = (uint *)local_8[4];
      FUN_004a3a80(local_8);
      if (*(int *)(puVar1[0x2d] + 0xc) == 0) {
        FUN_00484370(puVar1);
      }
    }
  }
  return;
}


/* FUN_004871d0 @ 004871d0  kind=lib  attributed-by=lib-island  size=104 */

void __cdecl FUN_004871d0(int param_1,uint param_2,uint *param_3)

{
  undefined1 *puVar1;
  uint local_24 [6];
  ushort local_c;
  
  if ((*param_3 == 0) && (FUN_00471710(param_1,param_2,local_24), local_c != 0)) {
    puVar1 = (undefined1 *)(local_c + param_2);
    FUN_004870c0(*(int **)(param_1 + 0x34),
                 CONCAT31(CONCAT21(CONCAT11(*puVar1,puVar1[1]),puVar1[2]),puVar1[3]),'\x03',
                 *(int *)(param_1 + 0x48),param_3);
  }
  return;
}


/* FUN_00487240 @ 00487240  kind=lib  attributed-by=lib-island  size=709 */

void __cdecl FUN_00487240(int param_1,int *param_2,int param_3,int param_4)

{
  int *piVar1;
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
  piVar1 = *(int **)(param_1 + 8);
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
  FUN_00496a90(param_1);
  FUN_00497010(param_1,param_2,local_8,0);
  iVar4 = param_2[1];
  iVar5 = piVar1[7];
  if ((iVar5 < piVar1[8]) || (iVar3 = FUN_0047de10(piVar1), iVar3 == 0)) {
    piVar1[7] = piVar1[7] + 1;
    iVar3 = piVar1[1];
    *(undefined2 *)(iVar3 + iVar5 * 0x14) = 0x37;
    iVar3 = iVar3 + iVar5 * 0x14;
    *(int *)(iVar3 + 4) = iVar4;
    *(undefined1 *)(iVar3 + 3) = 0;
    *(int *)(iVar3 + 8) = local_8 + iVar6;
    *(undefined4 *)(iVar3 + 0xc) = 0;
    *(undefined4 *)(iVar3 + 0x10) = 0;
  }
  FUN_00497600(param_1,param_4,local_8 + 1 + iVar6,1);
  iVar6 = piVar1[7];
  if ((iVar6 < piVar1[8]) || (iVar4 = FUN_0047de10(piVar1), iVar4 == 0)) {
    piVar1[7] = piVar1[7] + 1;
    iVar4 = piVar1[1];
    *(int *)(iVar4 + 4 + iVar6 * 0x14) = local_8;
    *(undefined2 *)(iVar4 + iVar6 * 0x14) = 0x1f;
    *(undefined1 *)(iVar4 + 3 + iVar6 * 0x14) = 0;
    *(int *)(iVar4 + 8 + iVar6 * 0x14) = iVar10;
    *(int *)(iVar4 + 0xc + iVar6 * 0x14) = iVar8;
    *(undefined4 *)(iVar4 + 0x10 + iVar6 * 0x14) = 0;
  }
  bVar2 = *(byte *)(param_3 + 6);
  iVar6 = param_2[1];
  iVar4 = piVar1[7];
  if ((iVar4 < piVar1[8]) || (iVar5 = FUN_0047de10(piVar1), iVar5 == 0)) {
    piVar1[7] = piVar1[7] + 1;
    iVar5 = piVar1[1];
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
        goto LAB_0048741f;
      }
      iVar4 = iVar4 + 1;
      iVar6 = iVar6 + 0x18;
    } while (iVar4 < 10);
    *(int *)(param_1 + 0x1c + (uint)*(byte *)(param_1 + 0x13) * 4) = iVar8;
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
  }
LAB_0048741f:
  FUN_00496d90(param_1,local_8,iVar10);
  if (*(int *)(param_1 + 0x3c) < iVar10) {
    *(int *)(param_1 + 0x3c) = iVar10;
    *(int *)(param_1 + 0x40) = local_8;
  }
  iVar10 = *(int *)(param_3 + 8);
  if (iVar10 != 0) {
    if (*(int *)(param_3 + 0xc) != 0) {
      iVar10 = *(int *)(param_3 + 0xc) + 1;
    }
    uVar7 = FUN_004ae7d0(piVar1,0x7a,iVar10);
    iVar6 = piVar1[7];
    if ((iVar6 < piVar1[8]) || (iVar8 = FUN_0047de10(piVar1), iVar8 == 0)) {
      piVar1[7] = piVar1[7] + 1;
      iVar8 = piVar1[1];
      *(undefined2 *)(iVar8 + iVar6 * 0x14) = 0x14;
      *(undefined1 *)(iVar8 + 3 + iVar6 * 0x14) = 0;
      *(int *)(iVar8 + 4 + iVar6 * 0x14) = iVar10;
      *(undefined4 *)(iVar8 + 8 + iVar6 * 0x14) = 0xffffffff;
      *(undefined4 *)(iVar8 + 0xc + iVar6 * 0x14) = 0;
      *(undefined4 *)(iVar8 + 0x10 + iVar6 * 0x14) = 0;
    }
    uVar9 = FUN_004ae760(piVar1,1);
    if ((-1 < (int)uVar7) && (uVar7 < (uint)piVar1[7])) {
      *(int *)(piVar1[1] + 8 + uVar7 * 0x14) = piVar1[7];
    }
    FUN_004ae7d0(piVar1,0x43,param_2[1]);
    FUN_004ae7d0(piVar1,0x3b,param_2[1]);
    if ((-1 < (int)uVar9) && (uVar9 < (uint)piVar1[7])) {
      *(int *)(piVar1[1] + 8 + uVar9 * 0x14) = piVar1[7];
    }
  }
  return;
}


/* FUN_00487510 @ 00487510  kind=lib  attributed-by=lib-island  size=98 */

undefined4 __cdecl FUN_00487510(int param_1,int param_2,char param_3)

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


/* FUN_00487580 @ 00487580  kind=lib  attributed-by=lib-island  size=264 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00487580(void)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  char local_108 [256];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  if (DAT_00583fd8 == '\0') {
    _DAT_00583fd9 = 0;
    iVar3 = FUN_00464e80((byte *)0x0);
    (**(code **)(iVar3 + 0x38))(iVar3,0x100,local_108);
    iVar3 = 0;
    do {
      (&DAT_00583fdb)[iVar3] = (char)iVar3;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x100);
    iVar3 = 0;
    do {
      bVar4 = DAT_00583fda + local_108[iVar3] + (&DAT_00583fdb)[iVar3];
      _DAT_00583fd9 = CONCAT11(bVar4,DAT_00583fd9);
      iVar5 = iVar3 + 1;
      uVar1 = (&DAT_00583fdb)[bVar4];
      (&DAT_00583fdb)[bVar4] = (&DAT_00583fdb)[iVar3];
      (&DAT_00583fdb)[iVar3] = uVar1;
      iVar3 = iVar5;
    } while (iVar5 < 0x100);
    DAT_00583fd8 = '\x01';
  }
  bVar4 = DAT_00583fd9 + 1;
  cVar2 = (&DAT_00583fdb)[bVar4];
  DAT_00583fda = DAT_00583fda + cVar2;
  DAT_00583fd9 = bVar4;
  (&DAT_00583fdb)[bVar4] = (&DAT_00583fdb)[DAT_00583fda];
  (&DAT_00583fdb)[DAT_00583fda] = cVar2;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00487690 @ 00487690  kind=lib  attributed-by=lib-island  size=78 */

int __cdecl FUN_00487690(int *param_1,undefined4 param_2,undefined4 param_3,uint *param_4)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 8))(param_1,&param_1,4,param_2,param_3);
  if (iVar1 == 0) {
    *param_4 = ((((uint)param_1 & 0xff) << 8 | (uint)param_1 >> 8 & 0xff) << 8 |
               (uint)param_1 >> 0x10 & 0xff) << 8 | (uint)param_1 >> 0x18;
  }
  return iVar1;
}


/* FUN_004876e0 @ 004876e0  kind=lib  attributed-by=lib-island  size=245 */

int __cdecl FUN_004876e0(int param_1)

{
  int iVar1;
  int iVar2;
  size_t _Size;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
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
    iVar4 = FUN_004bada0(*(int *)(iVar2 + 0xb8),iVar1,&param_1,_Size,*(undefined4 *)(iVar3 + 4));
    if ((iVar4 != 0) || (param_1 != 0)) goto LAB_00487787;
  }
  lVar5 = __allmul(iVar1 - 1,0,*(uint *)(iVar2 + 0x80),(int)*(uint *)(iVar2 + 0x80) >> 0x1f);
  iVar4 = (**(code **)(**(int **)(iVar2 + 0x3c) + 8))
                    (*(int **)(iVar2 + 0x3c),*(undefined4 *)(iVar3 + 4),_Size,lVar5);
  if (iVar4 == 0x20a) {
    iVar4 = 0;
  }
LAB_00487787:
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


/* FUN_004877e0 @ 004877e0  kind=lib  attributed-by=lib-island  size=530 */

void __cdecl
FUN_004877e0(int param_1,int param_2,uint param_3,int param_4,uint *param_5,uint *param_6)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  uint *local_18;
  uint *local_14;
  undefined8 local_10;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_14 = param_5;
  iVar2 = *(int *)(param_1 + 0x48);
  local_18 = param_6;
  local_10 = 0;
  if (iVar2 == 0 && *(int *)(param_1 + 0x4c) == 0) {
    lVar5 = 0;
    local_10._0_4_ = 0;
    uVar4 = (uint)local_10;
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x7c);
    lVar5 = __alldiv(iVar2 - 1,*(int *)(param_1 + 0x4c) - (uint)(iVar2 == 0),uVar4,0);
    lVar5 = __allmul((uint)(lVar5 + 1),(int)((ulonglong)(lVar5 + 1) >> 0x20),uVar4,0);
    uVar4 = (uint)lVar5;
  }
  iVar3 = (int)((ulonglong)lVar5 >> 0x20);
  iVar2 = iVar3 + (uint)CARRY4(*(uint *)(param_1 + 0x7c),uVar4);
  *(uint *)(param_1 + 0x48) = uVar4;
  *(int *)(param_1 + 0x4c) = iVar3;
  if (((param_4 <= iVar2) && ((param_4 < iVar2 || (param_3 < *(uint *)(param_1 + 0x7c) + uVar4))))
     || (((param_2 != 0 ||
          ((uVar4 != *(uint *)(param_1 + 0x50) || (iVar3 != *(int *)(param_1 + 0x54))))) &&
         ((iVar2 = (**(code **)(**(int **)(param_1 + 0x40) + 8))
                             (*(int **)(param_1 + 0x40),&local_10,8,uVar4,iVar3), iVar2 != 0 ||
          (((uint)local_10 != -0x6fa2a27 || (local_10._4_4_ != -0x289c5ee0))))))))
  goto LAB_004879e1;
  iVar2 = FUN_00487690(*(int **)(param_1 + 0x40),uVar4 + 8,iVar3 + (uint)(0xfffffff7 < uVar4),
                       local_14);
  if ((iVar2 == 0) &&
     ((iVar2 = FUN_00487690(*(int **)(param_1 + 0x40),uVar4 + 0xc,iVar3 + (uint)(0xfffffff3 < uVar4)
                            ,(uint *)(param_1 + 0x30)), iVar2 == 0 &&
      (iVar2 = FUN_00487690(*(int **)(param_1 + 0x40),uVar4 + 0x10,
                            iVar3 + (uint)(0xffffffef < uVar4),local_18), iVar2 == 0)))) {
    if (*(int *)(param_1 + 0x48) == 0 && *(int *)(param_1 + 0x4c) == 0) {
      iVar2 = FUN_00487690(*(int **)(param_1 + 0x40),uVar4 + 0x14,iVar3 + (uint)(0xffffffeb < uVar4)
                           ,(uint *)&local_18);
      if ((iVar2 != 0) ||
         (iVar2 = FUN_00487690(*(int **)(param_1 + 0x40),uVar4 + 0x18,
                               iVar3 + (uint)(0xffffffe7 < uVar4),(uint *)&local_14),
         puVar1 = local_18, iVar2 != 0)) {
LAB_004879e1:
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      if (local_14 == (uint *)0x0) {
        local_14 = *(uint **)(param_1 + 0x80);
      }
      if ((((local_14 < (uint *)0x200) || (local_18 < (uint *)0x20)) || ((uint *)0x10000 < local_14)
          ) || ((((uint *)0x10000 < local_18 || (((uint)local_14 & (int)local_14 - 1U) != 0)) ||
                (((uint)local_18 & (int)local_18 - 1U) != 0)))) goto LAB_004879e1;
      FUN_004a27d0(param_1,(uint *)&local_14,-1);
      *(uint **)(param_1 + 0x7c) = puVar1;
    }
    puVar1 = (uint *)(param_1 + 0x48);
    uVar4 = *puVar1;
    *puVar1 = *puVar1 + *(uint *)(param_1 + 0x7c);
    *(int *)(param_1 + 0x4c) =
         *(int *)(param_1 + 0x4c) + (uint)CARRY4(uVar4,*(uint *)(param_1 + 0x7c));
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00487a00 @ 00487a00  kind=lib  attributed-by=lib-island  size=318 */

void __cdecl FUN_00487a00(int *param_1,undefined1 *param_2,uint param_3)

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
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  *param_2 = 0;
  iVar2 = (**(code **)(*param_1 + 0x18))(param_1,&local_1c);
  if (((iVar2 == 0) && (-1 < local_18)) && ((0 < local_18 || (0xf < local_1c)))) {
    iVar2 = FUN_00487690(param_1,local_1c - 0x10,local_18 - (uint)(local_1c < 0x10),&local_14);
    uVar4 = local_14;
    if ((iVar2 == 0) && (local_14 < param_3)) {
      iVar2 = FUN_00487690(param_1,local_1c - 0xc,local_18 - (uint)(local_1c < 0xc),&local_14);
      if (iVar2 == 0) {
        iVar2 = (**(code **)(*param_1 + 8))
                          (param_1,&local_10,8,local_1c - 8,local_18 - (uint)(local_1c < 8));
        if (((iVar2 == 0) && (local_10 == -0x6fa2a27)) && (local_c == -0x289c5ee0)) {
          iVar2 = FUN_004a1350(param_1,param_2,uVar4,(local_1c - uVar4) - 0x10,
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


/* FUN_00487b40 @ 00487b40  kind=lib  attributed-by=lib-island  size=232 */

undefined4 __cdecl FUN_00487b40(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  int *local_8;
  
  local_8 = (int *)param_1[2];
  if (local_8 == (int *)0x0) {
    local_8 = FUN_004af150(*param_1);
    param_1[2] = (int)local_8;
    if (local_8 != (int *)0x0) {
      FUN_004ae760(local_8,0x94);
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
        pcVar4 = &DAT_00583fc4;
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


/* FUN_00487c30 @ 00487c30  kind=lib  attributed-by=lib-island  size=330 */

undefined4 __cdecl FUN_00487c30(uint *param_1,uint param_2)

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
    if (DAT_00583e74 != (code *)0x0) {
      (*DAT_00583e74)();
    }
    _Dst = (void *)FUN_004a0350(param_2 * 8);
    if (DAT_00583e78 != (code *)0x0) {
      (*DAT_00583e78)();
    }
    if (_Dst != (void *)0x0) {
      FUN_00466dd0(param_1[3]);
      param_1[3] = (uint)_Dst;
      uVar5 = (*DAT_00582af0._4_4_)(_Dst);
      uVar5 = uVar5 >> 3;
      *param_1 = uVar5;
      memset(_Dst,0,uVar5 * 8);
      puVar2 = (uint *)param_1[2];
      param_1[2] = 0;
joined_r0x00487cc5:
      do {
        if (puVar2 == (uint *)0x0) {
          return 1;
        }
        pbVar3 = (byte *)puVar2[3];
        uVar7 = 0;
        for (uVar6 = puVar2[4]; 0 < (int)uVar6; uVar6 = uVar6 - 1) {
          uVar7 = uVar7 ^ (uint)(byte)(&DAT_00569620)[*pbVar3] ^ uVar7 * 8;
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
            goto joined_r0x00487cc5;
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


/* FUN_00487d80 @ 00487d80  kind=lib  attributed-by=lib-island  size=254 */

void __cdecl FUN_00487d80(int *param_1,byte *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
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
        for (piVar4 = *(int **)(iVar3 + 8); piVar4 != (int *)0x0; piVar4 = (int *)piVar4[5]) {
          if ((param_2 == (byte *)0x0) || (iVar7 = FUN_00474ee0(param_2,(int)piVar4), iVar7 != 0)) {
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
            FUN_00493400(param_1,iVar9);
            piVar8[0x55] = piVar8[0x55] | 1 << ((byte)iVar9 & 0x1f);
            FUN_004a6290(param_1,piVar4,-1);
          }
        }
      }
      local_10 = local_10 + 1;
      piVar6 = piVar6 + 4;
    } while (local_10 < *(int *)(iVar1 + 0x14));
  }
  return;
}


/* FUN_00487e80 @ 00487e80  kind=lib  attributed-by=lib-island  size=163 */

void __cdecl FUN_00487e80(int *param_1,int param_2,byte *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar1 = *(int **)(param_2 + 8);
  do {
    if (piVar1 == (int *)0x0) {
      return;
    }
    if ((param_3 == (byte *)0x0) || (iVar3 = FUN_00474ee0(param_3,(int)piVar1), iVar3 != 0)) {
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
      FUN_00493400(param_1,iVar3);
      piVar4[0x55] = piVar4[0x55] | 1 << ((byte)iVar3 & 0x1f);
      FUN_004a6290(param_1,piVar1,-1);
    }
    piVar1 = (int *)piVar1[5];
  } while( true );
}


/* FUN_00487f30 @ 00487f30  kind=lib  attributed-by=lib-island  size=120 */

void __cdecl FUN_00487f30(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x60)) {
    iVar2 = 0;
    do {
      FUN_0048e9a0(*(int *)(iVar2 + 0x10 + *(int *)(param_1 + 0x5c)));
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x30;
    } while (iVar3 < *(int *)(param_1 + 0x60));
  }
  if ((*(char *)(param_1 + 4) == '\0') ||
     ((undefined *)**(undefined4 **)(param_1 + 0x44) == &DAT_00569a48)) {
    piVar1 = *(int **)(param_1 + 0x44);
    if (*piVar1 != 0) {
      (**(code **)(*piVar1 + 4))(piVar1);
      *piVar1 = 0;
    }
  }
  FUN_00466dd0(*(int *)(param_1 + 0x5c));
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  return;
}


/* FUN_00487fb0 @ 00487fb0  kind=lib  attributed-by=lib-island  size=229 */

void __cdecl FUN_00487fb0(int *param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  int local_8;
  
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    iVar2 = *param_1;
    uVar1 = *(undefined1 *)(iVar2 + 0x38);
    if (*(int *)(iVar2 + 0x1f0) == 0) {
      if (param_1 < param_1 + param_2 * 10) {
        local_8 = (uint)((int)(param_1 + param_2 * 10) + (-1 - (int)param_1)) / 0x28 + 1;
        piVar3 = param_1 + 9;
        do {
          if ((*(ushort *)(piVar3 + -2) & 0x2460) == 0) {
            if ((undefined4 *)*piVar3 != (undefined4 *)0x0) {
              FUN_00494b00(iVar2,(undefined4 *)*piVar3);
              goto LAB_00488071;
            }
          }
          else {
            FUN_004b7720(piVar3 + -9);
            FUN_00494b00(piVar3[-9],(undefined4 *)*piVar3);
            piVar3[-8] = 0;
            piVar3[-1] = 0;
LAB_00488071:
            *piVar3 = 0;
          }
          *(undefined2 *)(piVar3 + -2) = 0x80;
          piVar3 = piVar3 + 10;
          local_8 = local_8 + -1;
        } while (local_8 != 0);
      }
      *(undefined1 *)(iVar2 + 0x38) = uVar1;
    }
    else {
      piVar3 = param_1 + param_2 * 10;
      if (param_1 < piVar3) {
        do {
          FUN_00494b00(iVar2,(undefined4 *)param_1[9]);
          param_1 = param_1 + 10;
        } while (param_1 < piVar3);
        return;
      }
    }
  }
  return;
}


/* FUN_004880a0 @ 004880a0  kind=lib  attributed-by=lib-island  size=54 */

void __cdecl FUN_004880a0(int param_1)

{
  undefined4 *puVar1;
  uint *puVar2;
  
  if ((param_1 != 0) && (puVar1 = *(undefined4 **)(param_1 + 0x44), puVar1 != (undefined4 *)0x0)) {
    puVar2 = (uint *)puVar1[4];
    FUN_004a3a80(puVar1);
    if (*(int *)(puVar2[0x2d] + 0xc) == 0) {
      FUN_00484370(puVar2);
    }
  }
  return;
}


/* FUN_004880e0 @ 004880e0  kind=lib  attributed-by=lib-island  size=667 */

void __cdecl FUN_004880e0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  void *extraout_EDX;
  void *extraout_EDX_00;
  int iVar8;
  int iVar9;
  int local_8;
  
  piVar2 = (int *)param_1[2];
  if (piVar2 == (int *)0x0) {
    piVar2 = FUN_004af150(*param_1);
    param_1[2] = (int)piVar2;
    if (piVar2 == (int *)0x0) {
      return;
    }
    FUN_004ae760(piVar2,0x94);
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
  puVar4 = (undefined4 *)FUN_004aaf60(param_1,param_2);
  do {
    if (puVar4 == (undefined4 *)0x0) {
      iVar9 = piVar2[7];
      piVar3 = (int *)*param_2;
      if ((iVar9 < piVar2[8]) || (iVar8 = FUN_0047de10(piVar2), iVar8 == 0)) {
        iVar8 = piVar2[1];
        piVar2[7] = piVar2[7] + 1;
        *(undefined2 *)(iVar8 + iVar9 * 0x14) = 0x6c;
        *(undefined1 *)(iVar8 + 3 + iVar9 * 0x14) = 0;
        *(int *)(iVar8 + 4 + iVar9 * 0x14) = local_8;
        *(undefined4 *)(iVar8 + 8 + iVar9 * 0x14) = 0;
        *(undefined4 *)(iVar8 + 0xc + iVar9 * 0x14) = 0;
        *(undefined4 *)(iVar8 + 0x10 + iVar9 * 0x14) = 0;
      }
      else {
        iVar9 = 1;
      }
      iVar8 = piVar2[1];
      iVar5 = *piVar2;
      if ((iVar8 == 0) || (*(char *)(iVar5 + 0x38) != '\0')) {
        FUN_0047bc80(iVar5,0,piVar3);
      }
      else {
        if (iVar9 < 0) {
          iVar9 = piVar2[7] + -1;
        }
        iVar1 = iVar8 + iVar9 * 0x14;
        FUN_0047bc80(iVar5,(int)*(char *)(iVar1 + 1),*(int **)(iVar8 + 0x10 + iVar9 * 0x14));
        *(undefined4 *)(iVar1 + 0x10) = 0;
        if (piVar3 == (int *)0x0) {
          *(undefined4 *)(iVar1 + 0x10) = 0;
          *(undefined1 *)(iVar1 + 1) = 0;
        }
        else {
          uVar7 = FUN_004aa9b0((char *)piVar3);
          puVar4 = FUN_00494e00(*piVar2,extraout_EDX_00,uVar7);
          *(undefined4 **)(iVar1 + 0x10) = puVar4;
          *(undefined1 *)(iVar1 + 1) = 0xff;
        }
      }
      piVar3 = (int *)FUN_004a02d0(*param_1,(byte *)"tbl_name=%Q");
      if (piVar3 != (int *)0x0) {
        FUN_004aeac0(piVar2,local_8,piVar3);
        piVar3 = (int *)FUN_004c2160(param_1,param_2);
        if (piVar3 != (int *)0x0) {
          FUN_004aeac0(piVar2,1,piVar3);
        }
      }
      return;
    }
    iVar9 = -1000000;
    if (puVar4[5] != 0) {
      iVar8 = *(int *)(*param_1 + 0x14);
      iVar9 = 0;
      if (0 < iVar8) {
        piVar3 = (int *)(*(int *)(*param_1 + 0x10) + 0xc);
        do {
          if (*piVar3 == puVar4[5]) break;
          iVar9 = iVar9 + 1;
          piVar3 = piVar3 + 4;
        } while (iVar9 < iVar8);
      }
    }
    piVar3 = (int *)*puVar4;
    iVar8 = piVar2[7];
    if ((iVar8 < piVar2[8]) || (iVar5 = FUN_0047de10(piVar2), iVar5 == 0)) {
      iVar5 = piVar2[1];
      piVar2[7] = piVar2[7] + 1;
      *(undefined2 *)(iVar5 + iVar8 * 0x14) = 0x6e;
      *(undefined1 *)(iVar5 + 3 + iVar8 * 0x14) = 0;
      *(int *)(iVar5 + 4 + iVar8 * 0x14) = iVar9;
      *(undefined4 *)(iVar5 + 8 + iVar8 * 0x14) = 0;
      *(undefined4 *)(iVar5 + 0xc + iVar8 * 0x14) = 0;
      *(undefined4 *)(iVar5 + 0x10 + iVar8 * 0x14) = 0;
    }
    else {
      iVar8 = 1;
    }
    iVar9 = piVar2[1];
    iVar5 = *piVar2;
    if ((iVar9 == 0) || (*(char *)(iVar5 + 0x38) != '\0')) {
      FUN_0047bc80(iVar5,0,piVar3);
    }
    else {
      if (iVar8 < 0) {
        iVar8 = piVar2[7] + -1;
      }
      iVar1 = iVar9 + iVar8 * 0x14;
      FUN_0047bc80(iVar5,(int)*(char *)(iVar1 + 1),*(int **)(iVar9 + 0x10 + iVar8 * 0x14));
      *(undefined4 *)(iVar1 + 0x10) = 0;
      if (piVar3 == (int *)0x0) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined1 *)(iVar1 + 1) = 0;
      }
      else {
        uVar7 = FUN_004aa9b0((char *)piVar3);
        puVar6 = FUN_00494e00(*piVar2,extraout_EDX,uVar7);
        *(undefined4 **)(iVar1 + 0x10) = puVar6;
        *(undefined1 *)(iVar1 + 1) = 0xff;
      }
    }
    puVar4 = (undefined4 *)puVar4[8];
  } while( true );
}


/* FUN_00488380 @ 00488380  kind=lib  attributed-by=lib-island  size=293 */

uint __cdecl
FUN_00488380(int *param_1,char *param_2,undefined4 param_3,uint param_4,uint param_5,int param_6)

{
  int iVar1;
  undefined1 *puVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  uint local_8;
  
  uVar5 = param_5;
  iVar1 = *(int *)(param_2 + 0x48);
  uVar4 = FUN_004a1ce0((undefined4 *)*param_1,*(undefined4 **)(param_2 + 0x44),param_5,param_6);
  if (uVar4 == 0) {
    *(uint *)(param_2 + 0x48) = uVar5;
    cVar7 = (char)param_3;
    local_8 = uVar4;
    if ((cVar7 == '\x05') || (cVar7 == '\x01')) {
      uVar5 = FUN_0048b310(param_2);
      uVar4 = 0;
      if (uVar5 != 0) {
        return uVar5;
      }
    }
    else {
      puVar2 = *(undefined1 **)(param_2 + 0x38);
      uVar6 = CONCAT31(CONCAT21(CONCAT11(*puVar2,puVar2[1]),puVar2[2]),puVar2[3]);
      if (uVar6 != 0) {
        FUN_004870c0(param_1,uVar6,'\x04',uVar5,&local_8);
        uVar4 = 0;
        if (local_8 != 0) {
          return local_8;
        }
      }
    }
    if ((cVar7 != '\x01') &&
       (uVar4 = FUN_004712c0(param_1,param_4,(int *)&param_2,0), pcVar3 = param_2, uVar4 == 0)) {
      uVar4 = FUN_004a2c80(*(undefined4 **)(param_2 + 0x44));
      if (uVar4 != 0) {
        FUN_004880a0((int)pcVar3);
        return uVar4;
      }
      uVar4 = FUN_00480840(pcVar3,iVar1,param_5,cVar7);
      local_8 = uVar4;
      FUN_004880a0((int)pcVar3);
      if (uVar4 == 0) {
        FUN_004870c0(param_1,param_5,cVar7,param_4,&local_8);
        uVar4 = local_8;
      }
    }
  }
  return uVar4;
}


/* FUN_004884b0 @ 004884b0  kind=lib  attributed-by=lib-island  size=90 */

void __cdecl FUN_004884b0(undefined4 *param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  if ((int *)param_2[1] == (int *)0x0) {
    param_1[2] = *param_2;
  }
  else {
    *(int *)param_2[1] = *param_2;
  }
  if (*param_2 != 0) {
    *(int *)(*param_2 + 4) = param_2[1];
  }
  iVar2 = param_1[3];
  if (iVar2 != 0) {
    piVar1 = (int *)(iVar2 + param_3 * 8);
    if (*(int **)(iVar2 + 4 + param_3 * 8) == param_2) {
      piVar1[1] = *param_2;
    }
    *piVar1 = *piVar1 + -1;
  }
  FUN_00466dd0((int)param_2);
  piVar1 = param_1 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_0049d5c0(param_1);
  }
  return;
}


/* FUN_00488510 @ 00488510  kind=lib  attributed-by=lib-island  size=144 */

undefined4 __cdecl FUN_00488510(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  if (DAT_00582acc == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (*DAT_00582b10)(2);
    if (iVar3 != 0) {
      (*DAT_00582b18)(iVar3);
    }
  }
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
  if (*(int *)(param_1 + 0x40) < 1) {
    iVar2 = DAT_00583e80;
    if (DAT_00583e80 == param_1) {
      DAT_00583e80 = *(int *)(param_1 + 0x44);
    }
    else {
      do {
        iVar1 = iVar2;
        if (iVar1 == 0) goto LAB_00488576;
        iVar2 = *(int *)(iVar1 + 0x44);
      } while (*(int *)(iVar1 + 0x44) != param_1);
      *(undefined4 *)(iVar1 + 0x44) = *(undefined4 *)(param_1 + 0x44);
    }
LAB_00488576:
    if (*(int *)(param_1 + 0x38) != 0) {
      (*DAT_00582b14)(*(int *)(param_1 + 0x38));
    }
    uVar4 = 1;
  }
  if (iVar3 != 0) {
    (*DAT_00582b20)(iVar3);
  }
  return uVar4;
}


/* FUN_004885a0 @ 004885a0  kind=lib  attributed-by=lib-island  size=160 */

void __cdecl FUN_004885a0(undefined4 param_1,byte *param_2,double *param_3)

{
  int iVar1;
  int local_f8;
  undefined1 *local_f4;
  undefined1 *local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined1 local_e0;
  undefined2 local_df;
  undefined1 local_dc [212];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_f4 = local_dc;
  local_f8 = 0;
  local_ec = 0;
  local_e8 = 0xd2;
  local_e4 = 0;
  local_df = 0;
  local_e0 = 0;
  local_f0 = local_f4;
  FUN_004ad370(&local_f8,0,param_2,param_3);
  iVar1 = FUN_004aa8f0(&local_f8);
  (*DAT_00582bac)(DAT_00582bb0,param_1,iVar1);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00488640 @ 00488640  kind=lib  attributed-by=lib-island  size=42 */

void __cdecl FUN_00488640(int *param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int local_c;
  
  piVar1 = (int *)param_1[2];
  if (*(int *)(param_2 + 0x24) + *(int *)(param_2 + 0x18) != 0) {
    iVar9 = 0;
    if (0 < *(int *)(param_2 + 0x18)) {
      iVar7 = 0;
      do {
        uVar2 = *(undefined4 *)(iVar7 + 0x10 + *(int *)(param_2 + 0x14));
        iVar5 = piVar1[7];
        if ((iVar5 < piVar1[8]) || (iVar4 = FUN_0047de10(piVar1), iVar4 == 0)) {
          piVar1[7] = piVar1[7] + 1;
          iVar4 = piVar1[1];
          *(undefined2 *)(iVar4 + iVar5 * 0x14) = 10;
          *(undefined1 *)(iVar4 + 3 + iVar5 * 0x14) = 0;
          *(undefined4 *)(iVar4 + 4 + iVar5 * 0x14) = 0;
          *(undefined4 *)(iVar4 + 8 + iVar5 * 0x14) = uVar2;
          *(undefined4 *)(iVar4 + 0xc + iVar5 * 0x14) = 0;
          *(undefined4 *)(iVar4 + 0x10 + iVar5 * 0x14) = 0;
        }
        iVar9 = iVar9 + 1;
        iVar7 = iVar7 + 0x18;
      } while (iVar9 < *(int *)(param_2 + 0x18));
    }
    piVar8 = *(int **)(param_2 + 0x20);
    local_c = 0;
    if (0 < *(int *)(param_2 + 0x24)) {
      do {
        iVar9 = piVar1[7];
        iVar7 = piVar8[2];
        if ((iVar9 < piVar1[8]) || (iVar5 = FUN_0047de10(piVar1), iVar5 == 0)) {
          iVar5 = piVar1[1];
          piVar1[7] = piVar1[7] + 1;
          *(undefined2 *)(iVar5 + iVar9 * 0x14) = 10;
          *(undefined1 *)(iVar5 + 3 + iVar9 * 0x14) = 0;
          *(undefined4 *)(iVar5 + 4 + iVar9 * 0x14) = 0;
          *(int *)(iVar5 + 8 + iVar9 * 0x14) = iVar7;
          *(undefined4 *)(iVar5 + 0xc + iVar9 * 0x14) = 0;
          *(undefined4 *)(iVar5 + 0x10 + iVar9 * 0x14) = 0;
        }
        if (-1 < piVar8[3]) {
          puVar3 = *(uint **)(*piVar8 + 0x10);
          if ((puVar3 == (uint *)0x0) || (*puVar3 != 1)) {
            FUN_004962b0(param_1,(byte *)"DISTINCT aggregates must have exactly one argument");
            piVar8[3] = -1;
          }
          else {
            piVar6 = FUN_0047f5f0(param_1,puVar3);
            iVar9 = piVar1[7];
            iVar7 = piVar8[3];
            if ((iVar9 < piVar1[8]) || (iVar5 = FUN_0047de10(piVar1), iVar5 == 0)) {
              iVar5 = piVar1[1];
              piVar1[7] = piVar1[7] + 1;
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
            iVar7 = piVar1[1];
            iVar5 = *piVar1;
            if ((iVar7 == 0) || (*(char *)(iVar5 + 0x38) != '\0')) {
              FUN_0047bc80(iVar5,0xfffffff0,piVar6);
            }
            else {
              if (iVar9 < 0) {
                iVar9 = piVar1[7] + -1;
              }
              iVar4 = iVar7 + iVar9 * 0x14;
              FUN_0047bc80(iVar5,(int)*(char *)(iVar4 + 1),*(int **)(iVar7 + 0x10 + iVar9 * 0x14));
              *(undefined4 *)(iVar4 + 0x10) = 0;
              if (piVar6 == (int *)0x0) {
                *(undefined4 *)(iVar4 + 0x10) = 0;
                *(undefined1 *)(iVar4 + 1) = 0;
              }
              else {
                *(int **)(iVar4 + 0x10) = piVar6;
                *(undefined1 *)(iVar4 + 1) = 0xfa;
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


/* FUN_00488860 @ 00488860  kind=lib  attributed-by=lib-island  size=393 */

void __cdecl
FUN_00488860(int *param_1,int param_2,int param_3,char *param_4,char *param_5,int param_6)

{
  char *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *_Dst;
  undefined4 *puVar4;
  int iVar5;
  
  iVar5 = param_3 * 0x14;
  pcVar1 = *(char **)(iVar5 + *(int *)(param_2 + 8));
  iVar2 = *param_1;
  puVar3 = (undefined8 *)FUN_00478bb0(iVar2,(undefined4 *)pcVar1,0,(int *)0x0);
  if (puVar3 != (undefined8 *)0x0) {
    _Dst = puVar3;
    if ((*pcVar1 != -0x68) && (*param_5 != 'G')) {
      FUN_0047e2a0((int)puVar3,param_6);
      _Dst = (undefined8 *)FUN_00494b90(*param_1,0x2c);
      if (_Dst != (undefined8 *)0x0) {
        memset(_Dst,0,0x2c);
        *(undefined1 *)_Dst = 0x18;
        *(undefined2 *)((int)_Dst + 0x1e) = 0xffff;
        *(undefined4 *)((int)_Dst + 0x14) = 1;
      }
      FUN_00496a30(*param_1,(int)_Dst,(undefined4 *)puVar3,(undefined4 *)0x0);
      if ((_Dst != (undefined8 *)0x0) && (*(int *)(*param_1 + 0x5c) < *(int *)((int)_Dst + 0x14))) {
        FUN_004962b0(param_1,(byte *)"Expression tree is too large (maximum depth %d)");
      }
      if (_Dst == (undefined8 *)0x0) {
        return;
      }
      if (*(short *)(iVar5 + 0x10 + *(int *)(param_2 + 8)) == 0) {
        param_1[0x77] = param_1[0x77] + 1;
        *(short *)(iVar5 + 0x10 + *(int *)(param_2 + 8)) = (short)param_1[0x77];
      }
      *(uint *)(_Dst + 3) = (uint)*(ushort *)(iVar5 + 0x10 + *(int *)(param_2 + 8));
    }
    if (*param_4 == '\\') {
      _Dst = (undefined8 *)FUN_004963e0(param_1,(undefined4 *)_Dst,*(char **)(param_4 + 4));
    }
    *(ushort *)(param_4 + 2) = *(ushort *)(param_4 + 2) | 0x8000;
    FUN_00498790(iVar2,(undefined4 *)param_4);
    *(undefined8 *)param_4 = *_Dst;
    *(undefined8 *)(param_4 + 8) = _Dst[1];
    *(undefined8 *)(param_4 + 0x10) = _Dst[2];
    *(undefined8 *)(param_4 + 0x18) = _Dst[3];
    *(undefined8 *)(param_4 + 0x20) = _Dst[4];
    *(undefined4 *)(param_4 + 0x28) = *(undefined4 *)(_Dst + 5);
    if (((*(ushort *)(param_4 + 2) & 0x400) == 0) && (*(char **)(param_4 + 4) != (char *)0x0)) {
      puVar4 = FUN_00494db0(iVar2,*(char **)(param_4 + 4));
      param_4[0x22] = param_4[0x22] | 1;
      *(undefined4 **)(param_4 + 4) = puVar4;
    }
    FUN_00494b00(iVar2,(undefined4 *)_Dst);
  }
  return;
}


/* FUN_004889f0 @ 004889f0  kind=lib  attributed-by=lib-island  size=150 */

int __cdecl FUN_004889f0(undefined4 param_1,int *param_2,char *param_3)

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
          while ((bVar2 != 0 && ((&DAT_00569620)[bVar2] == (&DAT_00569620)[*pbVar5]))) {
            pbVar1 = pbVar3 + 1;
            pbVar3 = pbVar3 + 1;
            pbVar5 = pbVar5 + 1;
            bVar2 = *pbVar1;
          }
          if ((&DAT_00569620)[*pbVar3] == (&DAT_00569620)[*pbVar5]) {
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


/* FUN_00488a90 @ 00488a90  kind=lib  attributed-by=lib-island  size=121 */

int __cdecl FUN_00488a90(int *param_1,char *param_2)

{
  ushort uVar1;
  undefined2 extraout_var;
  int iVar2;
  code *local_18;
  code *local_14;
  int local_8;
  
  iVar2 = 0;
  if (param_2 != (char *)0x0) {
    if (*param_2 == '\x1a') {
      *param_2 = '^';
    }
    else {
      uVar1 = FUN_004a69e0(param_1,(int)param_2);
      iVar2 = CONCAT22(extraout_var,uVar1);
      if (iVar2 == 0) {
        local_8 = 1;
        local_18 = FUN_00478e60;
        local_14 = FUN_0048b2c0;
        FUN_004bb020(&local_18,(int)param_2);
        if (local_8 == 0) {
          FUN_004962b0((int *)*param_1,(byte *)"invalid name: \"%s\"");
          return 1;
        }
      }
    }
  }
  return iVar2;
}


/* FUN_00488b10 @ 00488b10  kind=lib  attributed-by=lib-island  size=691 */

undefined4 __cdecl FUN_00488b10(int *param_1,undefined4 *param_2)

{
  char *pcVar1;
  undefined4 *_Dst;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int extraout_EDX;
  int extraout_EDX_00;
  int *piVar7;
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
    FUN_004962b0(param_1,(byte *)"too many terms in ORDER BY clause");
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
  if (*piVar4 == 0) goto LAB_00488ba0;
  do {
    *(undefined4 **)(*piVar4 + 0x40) = param_2;
    param_2 = (undefined4 *)*piVar4;
    piVar4 = param_2 + 0xf;
  } while (param_2[0xf] != 0);
  do {
    local_10 = (int *)*param_2;
    piVar4 = (int *)local_c[2];
    local_1c = 0;
    local_14 = 0;
    piVar7 = local_c;
    if (0 < *local_c) {
      do {
        local_8 = -1;
        iVar3 = local_14;
        if (*(char *)((int)piVar4 + 0xd) == '\0') {
          for (pcVar2 = (char *)*piVar4;
              (pcVar2 != (char *)0x0 && ((*pcVar2 == '\\' || (*pcVar2 == '\x18'))));
              pcVar2 = *(char **)(pcVar2 + 8)) {
          }
          if ((*(ushort *)(pcVar2 + 2) & 0x400) == 0) {
            if (*pcVar2 == -100) {
              iVar3 = FUN_00498e90(*(char **)(pcVar2 + 8),&local_20);
              if (iVar3 == 0) goto LAB_00488c7d;
              local_8 = -local_20;
              iVar3 = extraout_EDX_00;
              goto LAB_00488c4e;
            }
            if ((*pcVar2 == -99) &&
               (iVar6 = FUN_00498e90(*(char **)(pcVar2 + 8),&local_8), iVar3 = extraout_EDX,
               iVar6 != 0)) goto LAB_00488c4e;
LAB_00488c7d:
            local_8 = FUN_004889f0(param_1,local_10,pcVar2);
            iVar3 = local_14;
            if (local_8 == 0) {
              pcVar1 = (char *)FUN_00478bb0(iVar5,(undefined4 *)pcVar2,0,(int *)0x0);
              if (*(char *)(local_18 + 0x38) == '\0') {
                local_8 = FUN_00489140(param_1,param_2,pcVar1);
              }
              iVar5 = local_18;
              FUN_00498790(local_18,(undefined4 *)pcVar1);
              iVar3 = local_14;
            }
          }
          else {
            local_8 = *(int *)(pcVar2 + 4);
LAB_00488c4e:
            if ((local_8 < 1) || (*local_10 < local_8)) {
              FUN_004962b0(param_1,(byte *)"%r %s BY term out of range - should be between 1 and %d"
                          );
              return 1;
            }
          }
          if (local_8 < 1) {
            local_1c = 1;
            piVar7 = local_c;
          }
          else {
            _Dst = FUN_00494b90(iVar5,0x2d);
            if (_Dst == (undefined4 *)0x0) {
              return 1;
            }
            memset(_Dst,0,0x2d);
            iVar5 = local_18;
            *(undefined2 *)((int)_Dst + 0x1e) = 0xffff;
            _Dst[1] = _Dst + 0xb;
            *(undefined1 *)_Dst = 0x81;
            *(undefined1 *)(_Dst + 0xb) = 0;
            *(ushort *)((int)_Dst + 2) = *(ushort *)((int)_Dst + 2) | 0x400;
            _Dst[5] = 1;
            _Dst[1] = local_8;
            if ((char *)*piVar4 == pcVar2) {
              *piVar4 = (int)_Dst;
            }
            else {
              *(undefined4 **)((char *)*piVar4 + 8) = _Dst;
            }
            FUN_00498790(local_18,(undefined4 *)pcVar2);
            *(undefined2 *)((int)piVar4 + 0xe) = (undefined2)local_8;
            *(undefined1 *)((int)piVar4 + 0xd) = 1;
            iVar3 = local_14;
            piVar7 = local_c;
          }
        }
        local_14 = iVar3 + 1;
        piVar4 = piVar4 + 5;
      } while (local_14 < *piVar7);
    }
    param_2 = (undefined4 *)param_2[0x10];
    iVar3 = local_1c;
    if (param_2 == (undefined4 *)0x0) break;
LAB_00488ba0:
  } while (iVar3 != 0);
  iVar5 = 0;
  if (0 < *local_c) {
    pcVar2 = (char *)(local_c[2] + 0xd);
    do {
      if (*pcVar2 == '\0') {
        FUN_004962b0(param_1,(byte *)"%r ORDER BY term does not match any column in the result set")
        ;
        return 1;
      }
      iVar5 = iVar5 + 1;
      pcVar2 = pcVar2 + 0x14;
    } while (iVar5 < *local_c);
  }
  return 0;
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


/* FUN_00489140 @ 00489140  kind=lib  attributed-by=lib-island  size=165 */

int __cdecl FUN_00489140(int *param_1,undefined4 *param_2,char *param_3)

{
  undefined1 uVar1;
  int *piVar2;
  char cVar3;
  ushort uVar4;
  undefined2 extraout_var_00;
  undefined3 extraout_var;
  int iVar5;
  int iVar6;
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
  uVar4 = FUN_004a69e0((int *)&local_24,(int)param_3);
  *(undefined1 *)(iVar5 + 0x3b) = uVar1;
  if (CONCAT22(extraout_var_00,uVar4) != 0) {
    return 0;
  }
  iVar5 = 0;
  if (0 < *piVar2) {
    iVar6 = 0;
    do {
      cVar3 = FUN_00498610(*(char **)(piVar2[2] + iVar6),param_3);
      if (CONCAT31(extraout_var,cVar3) < 2) {
        return iVar5 + 1;
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 0x14;
    } while (iVar5 < *piVar2);
  }
  return 0;
}


/* FUN_00489330 @ 00489330  kind=lib  attributed-by=lib-island  size=42 */

void __cdecl FUN_00489330(int *param_1,uint *param_2)

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
      FUN_00494b00(*param_1,(undefined4 *)param_1[10]);
      param_1[10] = 0;
      *param_2 = uVar5;
      return;
    }
    bVar1 = *pbVar4;
    pbVar4[2] = (&DAT_00569830)[bVar1];
    if ((bVar1 == 0x12) || (bVar1 == 0x7b)) {
      if ((int)uVar5 < (int)(uint)pbVar4[3]) {
        uVar5 = (uint)pbVar4[3];
      }
    }
    else if (bVar1 == 0x23) {
      if (*(int *)(pbVar4 + 8) != 0) {
LAB_0048938a:
        param_1[0x18] = param_1[0x18] & 0xfffffeff;
      }
    }
    else {
      if (bVar1 == 0x7f) goto LAB_0048938a;
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
        *(code **)(pbVar4 + 0x10) = FUN_00490c90;
        pbVar4[1] = 0xed;
      }
      else if (bVar1 == 0x5c) {
        *(code **)(pbVar4 + 0x10) = FUN_00491450;
        pbVar4[1] = 0xed;
      }
    }
    if (((pbVar4[2] & 1) != 0) && (*(int *)(pbVar4 + 8) < 0)) {
      *(undefined4 *)(pbVar4 + 8) = *(undefined4 *)(iVar2 - (*(int *)(pbVar4 + 8) * 4 + 4));
    }
    pbVar4 = pbVar4 + 0x14;
  } while( true );
}


/* FUN_00489750 @ 00489750  kind=lib  attributed-by=lib-island  size=369 */

void __cdecl FUN_00489750(int *param_1,void *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  piVar4 = (int *)param_1[2];
  if (piVar4 == (int *)0x0) {
    piVar4 = FUN_004af150(*param_1);
    param_1[2] = (int)piVar4;
    if (piVar4 != (int *)0x0) {
      FUN_004ae760(piVar4,0x94);
    }
  }
  param_1[0x13] = param_1[0x13] + 1;
  iVar2 = param_1[0x13];
  piVar5 = FUN_00494b90(*param_1,8);
  if (piVar5 != (int *)0x0) {
    *piVar5 = param_3;
    piVar5[1] = param_4;
  }
  iVar7 = piVar4[7];
  if ((iVar7 < piVar4[8]) || (iVar6 = FUN_0047de10(piVar4), iVar6 == 0)) {
    iVar6 = piVar4[1];
    piVar4[7] = piVar4[7] + 1;
    *(undefined2 *)(iVar6 + iVar7 * 0x14) = 8;
    *(undefined1 *)(iVar6 + 3 + iVar7 * 0x14) = 0;
    *(undefined4 *)(iVar6 + 4 + iVar7 * 0x14) = 0;
    *(int *)(iVar6 + 8 + iVar7 * 0x14) = iVar2;
    *(undefined4 *)(iVar6 + 0xc + iVar7 * 0x14) = 0;
    *(undefined4 *)(iVar6 + 0x10 + iVar7 * 0x14) = 0;
  }
  else {
    iVar7 = 1;
  }
  iVar6 = piVar4[1];
  iVar3 = *piVar4;
  if ((iVar6 == 0) || (*(char *)(iVar3 + 0x38) != '\0')) {
    FUN_0047bc80(iVar3,0xfffffff3,piVar5);
  }
  else {
    if (iVar7 < 0) {
      iVar7 = piVar4[7] + -1;
    }
    iVar1 = iVar6 + iVar7 * 0x14;
    FUN_0047bc80(iVar3,(int)*(char *)(iVar1 + 1),*(int **)(iVar6 + 0x10 + iVar7 * 0x14));
    *(undefined4 *)(iVar1 + 0x10) = 0;
    if (piVar5 == (int *)0x0) {
      *(undefined4 *)(iVar1 + 0x10) = 0;
      *(undefined1 *)(iVar1 + 1) = 0;
    }
    else {
      *(int **)(iVar1 + 0x10) = piVar5;
      *(undefined1 *)(iVar1 + 1) = 0xf3;
    }
  }
  FUN_004b8c50(piVar4,1);
  if (*(char *)(*piVar4 + 0x38) == '\0') {
    FUN_004b79e0((int *)piVar4[4],param_2,0xffffffff,'\x01',(undefined *)0x0);
  }
  iVar7 = piVar4[7];
  if ((piVar4[8] <= iVar7) && (iVar6 = FUN_0047de10(piVar4), iVar6 != 0)) {
    return;
  }
  iVar6 = piVar4[1];
  piVar4[7] = piVar4[7] + 1;
  *(undefined2 *)(iVar6 + iVar7 * 0x14) = 0x10;
  *(undefined1 *)(iVar6 + 3 + iVar7 * 0x14) = 0;
  *(int *)(iVar6 + 4 + iVar7 * 0x14) = iVar2;
  *(undefined4 *)(iVar6 + 8 + iVar7 * 0x14) = 1;
  *(undefined4 *)(iVar6 + 0xc + iVar7 * 0x14) = 0;
  *(undefined4 *)(iVar6 + 0x10 + iVar7 * 0x14) = 0;
  return;
}


/* FUN_004898d0 @ 004898d0  kind=lib  attributed-by=lib-island  size=108 */

undefined4 __cdecl FUN_004898d0(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint local_14 [2];
  undefined4 local_c;
  
  puVar2 = local_14;
  do {
    if (param_1 == (uint *)0x0) {
LAB_00489908:
      puVar2[2] = (uint)param_2;
      return local_c;
    }
    if (param_2 == (uint *)0x0) {
      if (param_1 != (uint *)0x0) {
        puVar2[2] = (uint)param_1;
        return local_c;
      }
      goto LAB_00489908;
    }
    uVar1 = param_1[1];
    if (((int)param_2[1] < (int)uVar1) ||
       (((int)param_2[1] <= (int)uVar1 && (*param_2 <= *param_1)))) {
      if (((int)uVar1 < (int)param_2[1]) ||
         (((int)uVar1 <= (int)param_2[1] && (*param_1 <= *param_2)))) goto LAB_00489901;
      puVar2[2] = (uint)param_2;
      param_2 = (uint *)param_2[2];
      puVar2 = (uint *)puVar2[2];
    }
    else {
      puVar2[2] = (uint)param_1;
      puVar2 = param_1;
LAB_00489901:
      param_1 = (uint *)param_1[2];
    }
  } while( true );
}


/* FUN_00489940 @ 00489940  kind=lib  attributed-by=lib-island  size=242 */

void __cdecl FUN_00489940(uint *param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint local_bc [40];
  uint local_1c [2];
  uint *local_14;
  uint *local_c;
  uint *local_8;
  
  memset(local_bc,0,0xa0);
  puVar3 = param_1;
  do {
    if (puVar3 == (uint *)0x0) {
      puVar3 = (uint *)0x0;
      uVar5 = 0;
      do {
        puVar3 = (uint *)FUN_004898d0(puVar3,(uint *)local_bc[uVar5]);
        uVar5 = uVar5 + 1;
      } while (uVar5 < 0x28);
      return;
    }
    puVar4 = (uint *)0x0;
    local_c = (uint *)puVar3[2];
    puVar3[2] = 0;
    param_1 = (uint *)0x0;
    if (local_bc[0] != 0) {
      local_8 = local_bc;
      do {
        puVar1 = (uint *)*local_8;
        puVar4 = local_1c;
        puVar2 = local_8;
        while (puVar1 != (uint *)0x0) {
          if (puVar3 == (uint *)0x0) {
            if (puVar1 != (uint *)0x0) {
              puVar4[2] = (uint)puVar1;
              goto LAB_004899cf;
            }
            break;
          }
          uVar5 = puVar1[1];
          local_8 = puVar2;
          if (((int)puVar3[1] < (int)uVar5) ||
             (((int)puVar3[1] <= (int)uVar5 && (*puVar3 <= *puVar1)))) {
            if (((int)uVar5 < (int)puVar3[1]) ||
               (((int)uVar5 <= (int)puVar3[1] && (*puVar1 <= *puVar3)))) goto LAB_004899bf;
            puVar4[2] = (uint)puVar3;
            puVar3 = (uint *)puVar3[2];
            puVar4 = (uint *)puVar4[2];
            puVar2 = local_8;
          }
          else {
            puVar4[2] = (uint)puVar1;
            puVar4 = puVar1;
LAB_004899bf:
            puVar1 = (uint *)puVar1[2];
            puVar2 = local_8;
          }
        }
        puVar4[2] = (uint)puVar3;
LAB_004899cf:
        puVar3 = local_14;
        *puVar2 = 0;
        puVar4 = (uint *)((int)param_1 + 1);
        local_8 = local_bc + (int)puVar4;
        param_1 = puVar4;
      } while (local_bc[(int)puVar4] != 0);
    }
    puVar1 = local_c;
    local_bc[(int)puVar4] = (uint)puVar3;
    puVar3 = puVar1;
  } while( true );
}


/* FUN_00489a60 @ 00489a60  kind=lib  attributed-by=lib-island  size=166 */

int __cdecl FUN_00489a60(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar4;
  int iVar5;
  
  iVar5 = 1;
  iVar3 = *(int *)(param_1 + 8);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  iVar4 = param_1;
  while (iVar2 = iVar3, iVar2 != 0) {
    param_1 = *(int *)(iVar2 + 8);
    *(int *)(iVar2 + 0xc) = iVar4;
    iVar3 = param_1;
    iVar4 = iVar2;
    if (param_1 != 0) {
      if (iVar5 == 1) {
        iVar1 = *(int *)(param_1 + 8);
        *(undefined4 *)(param_1 + 8) = 0;
        *(undefined4 *)(param_1 + 0xc) = 0;
        param_1 = iVar1;
      }
      else {
        iVar3 = FUN_00489b10(&param_1,iVar5 + -1);
        iVar1 = param_1;
        iVar4 = extraout_EDX;
        if (param_1 != 0) {
          *(int *)(param_1 + 0xc) = iVar3;
          param_1 = *(int *)(param_1 + 8);
          iVar3 = FUN_00489b10(&param_1,iVar5 + -1);
          *(int *)(iVar1 + 8) = iVar3;
          iVar3 = iVar1;
          iVar4 = extraout_EDX_00;
        }
      }
    }
    *(int *)(iVar4 + 8) = iVar3;
    iVar5 = iVar5 + 1;
    iVar3 = param_1;
    iVar4 = iVar2;
  }
  return iVar4;
}


/* FUN_00489b10 @ 00489b10  kind=lib  attributed-by=lib-island  size=95 */

int __cdecl FUN_00489b10(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
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
  iVar2 = FUN_00489b10(param_1,param_2 + -1);
  iVar1 = *param_1;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0xc) = iVar2;
    *param_1 = *(int *)(iVar1 + 8);
    iVar2 = FUN_00489b10(param_1,param_2 + -1);
    *(int *)(iVar1 + 8) = iVar2;
    iVar2 = iVar1;
  }
  return iVar2;
}


/* FUN_00489b70 @ 00489b70  kind=lib  attributed-by=lib-island  size=69 */

void __cdecl FUN_00489b70(int param_1,int *param_2,int *param_3)

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
      FUN_00489b70(*(int *)(iVar3 + 0xc),piVar2,&param_1);
      *(int *)(param_1 + 8) = iVar3;
    }
    piVar2 = (int *)(iVar3 + 8);
    iVar1 = *(int *)(iVar3 + 8);
  } while (*(int *)(iVar3 + 8) != 0);
  *param_3 = iVar3;
  return;
}


/* FUN_00489bc0 @ 00489bc0  kind=lib  attributed-by=lib-island  size=68 */

uint __cdecl FUN_00489bc0(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 8);
  while( true ) {
    if (uVar1 == 0) {
      return 0;
    }
    if (((uVar1 != param_3) &&
        (((param_2 == 0 || (*(int *)(uVar1 + 0x18) == param_2)) &&
         (*(char *)(uVar1 + 0x5b) == '\x01')))) && (uVar2 = FUN_00489c10(uVar1), uVar2 != 0)) break;
    uVar1 = *(uint *)(uVar1 + 8);
  }
  return uVar2;
}


/* FUN_00489c10 @ 00489c10  kind=lib  attributed-by=lib-island  size=273 */

uint __cdecl FUN_00489c10(uint param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  uint *puVar3;
  uint uVar4;
  void *pvVar5;
  int iVar6;
  int *piVar7;
  
  uVar4 = param_1;
  if (*(char *)(param_1 + 0x5b) == '\x01') {
    FUN_0047d150(param_1);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x2c);
  }
  else {
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  piVar1 = (int *)(param_1 + 0x88);
  piVar7 = (int *)(param_1 + 0x88);
  param_1 = 0;
  if (*(char *)(*piVar1 + 2) == '\0') {
    pvVar5 = (void *)FUN_004a0350(*(int *)(uVar4 + 0x48));
    if (pvVar5 == (void *)0x0) {
      param_1 = 7;
      goto LAB_00489cf1;
    }
    param_1 = FUN_0046b2f0(uVar4,0,*(size_t *)(uVar4 + 0x48),pvVar5,0);
    if (param_1 != 0) {
      FUN_00466dd0((int)pvVar5);
      goto LAB_00489cf1;
    }
    *(void **)(uVar4 + 0x50) = pvVar5;
  }
  iVar6 = 0;
  if (*(ushort *)(uVar4 + 0x5e) < 0x8000) {
    do {
      if ((*piVar7 != 0) && (puVar2 = *(undefined4 **)(*piVar7 + 0x44), puVar2 != (undefined4 *)0x0)
         ) {
        puVar3 = (uint *)puVar2[4];
        FUN_004a3a80(puVar2);
        if (*(int *)(puVar3[0x2d] + 0xc) == 0) {
          FUN_00484370(puVar3);
        }
      }
      *piVar7 = 0;
      iVar6 = iVar6 + 1;
      piVar7 = piVar7 + 1;
    } while (iVar6 <= *(short *)(uVar4 + 0x5e));
  }
  *(undefined2 *)(uVar4 + 0x5e) = 0xffff;
  *(undefined1 *)(uVar4 + 0x5b) = 2;
LAB_00489cf1:
  FUN_00466dd0(*(int *)(uVar4 + 0x14));
  *(undefined4 *)(uVar4 + 0x14) = 0;
  return param_1;
}


/* FUN_00489d30 @ 00489d30  kind=lib  attributed-by=lib-island  size=724 */

void __cdecl FUN_00489d30(int *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *puVar8;
  uint *puVar9;
  code *pcVar10;
  int iVar11;
  int iVar12;
  ushort uVar13;
  uint uVar14;
  int local_10;
  int local_c;
  
  local_c = 0;
  iVar5 = *param_1;
  if (*(int *)(iVar5 + 0x14) < 1) {
    return;
  }
  local_10 = 0;
LAB_00489d57:
  uVar14 = 0;
  piVar6 = *(int **)(local_10 + 4 + *(int *)(iVar5 + 0x10));
  if (piVar6 != (int *)0x0) {
    if ((char)piVar6[2] == '\0') {
      piVar7 = (int *)piVar6[1];
      FUN_0048fbc0(piVar6);
      if (((char)piVar6[2] != '\x02') && ((char)piVar6[2] != '\x01')) {
        if (((*(ushort *)((int)piVar7 + 0x16) & 0x40) == 0) || (*(int *)piVar7[0x13] == 0)) {
          iVar11 = piVar6[1];
          if (*(char *)((int)piVar6 + 9) == '\0') {
LAB_00489de8:
            uVar14 = 0;
            uVar13 = *(ushort *)((int)piVar7 + 0x16) & 0xfff7;
            *(ushort *)((int)piVar7 + 0x16) = uVar13;
            if (piVar7[0xb] == 0) {
              *(ushort *)((int)piVar7 + 0x16) = uVar13 | 8;
            }
LAB_00489e00:
            if (piVar7[3] == 0) goto code_r0x00489e06;
            if (uVar14 != 0) goto LAB_00489e1b;
            goto LAB_00489e57;
          }
          if ((*(int **)(iVar11 + 0x4c) == piVar6) || ((*(byte *)(iVar11 + 0x16) & 0x20) == 0)) {
            for (puVar8 = *(undefined4 **)(iVar11 + 0x48); puVar8 != (undefined4 *)0x0;
                puVar8 = (undefined4 *)puVar8[3]) {
              if ((((int *)*puVar8 != piVar6) && (puVar8[1] == 1)) &&
                 (*(char *)(puVar8 + 2) != '\x01')) goto LAB_00489da3;
            }
            goto LAB_00489de8;
          }
          uVar14 = 0x106;
        }
        else {
LAB_00489da3:
          uVar14 = 0x106;
        }
      }
      goto LAB_00489ec8;
    }
    goto LAB_00489f0c;
  }
  goto LAB_00489fe1;
code_r0x00489e06:
  uVar14 = FUN_0047fc00(piVar7);
  if (uVar14 != 0) {
LAB_00489e1b:
    if ((*(char *)((int)piVar7 + 0x13) == '\0') && (piVar7[3] != 0)) {
      puVar8 = *(undefined4 **)(piVar7[3] + 0x44);
      if (puVar8 != (undefined4 *)0x0) {
        puVar9 = (uint *)puVar8[4];
        FUN_004a3a80(puVar8);
        if (*(int *)(puVar9[0x2d] + 0xc) == 0) {
          FUN_00484370(puVar9);
        }
      }
      piVar7[3] = 0;
    }
LAB_00489e57:
    if (((char)uVar14 != '\x05') || (*(char *)((int)piVar7 + 0x13) != '\0')) goto LAB_00489e96;
    iVar11 = piVar7[1];
    if (((undefined4 *)(iVar11 + 0x1ac) == (undefined4 *)0x0) ||
       ((pcVar10 = *(code **)(iVar11 + 0x1ac), pcVar10 == (code *)0x0 ||
        (*(int *)(iVar11 + 0x1b4) < 0)))) goto LAB_00489e96;
    iVar12 = (*pcVar10)(*(undefined4 *)(iVar11 + 0x1b0),*(int *)(iVar11 + 0x1b4));
    if (iVar12 == 0) goto LAB_00489e8f;
    *(int *)(iVar11 + 0x1b4) = *(int *)(iVar11 + 0x1b4) + 1;
  }
  goto LAB_00489e00;
LAB_00489e8f:
  *(undefined4 *)(iVar11 + 0x1b4) = 0xffffffff;
LAB_00489e96:
  if (uVar14 == 0) {
    if (((char)piVar6[2] == '\0') &&
       (piVar7[10] = piVar7[10] + 1, *(char *)((int)piVar6 + 9) != '\0')) {
      *(undefined1 *)(piVar6 + 9) = 1;
      piVar6[10] = piVar7[0x12];
      piVar7[0x12] = (int)(piVar6 + 7);
    }
    *(undefined1 *)(piVar6 + 2) = 1;
    if (*(char *)((int)piVar7 + 0x13) == '\0') {
      *(undefined1 *)((int)piVar7 + 0x13) = 1;
    }
  }
LAB_00489ec8:
  if (*(char *)((int)piVar6 + 9) != '\0') {
    piVar7 = piVar6 + 3;
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      if (*(int *)(piVar6[1] + 0x38) != 0) {
        (*DAT_00582b20)(*(int *)(piVar6[1] + 0x38));
      }
      *(undefined1 *)((int)piVar6 + 10) = 0;
    }
  }
  if ((uVar14 == 7) || (uVar14 == 0xc0a)) {
    *(undefined1 *)(iVar5 + 0x38) = 1;
  }
  if (uVar14 != 0) {
    return;
  }
  uVar14 = 1;
LAB_00489f0c:
  iVar11 = piVar6[1];
  FUN_0048fbc0(piVar6);
  iVar11 = *(int *)(*(int *)(iVar11 + 0xc) + 0x38);
  uVar1 = *(undefined1 *)(iVar11 + 0x28);
  uVar2 = *(undefined1 *)(iVar11 + 0x29);
  uVar3 = *(undefined1 *)(iVar11 + 0x2a);
  uVar4 = *(undefined1 *)(iVar11 + 0x2b);
  if (*(char *)((int)piVar6 + 9) != '\0') {
    piVar7 = piVar6 + 3;
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      if (*(int *)(piVar6[1] + 0x38) != 0) {
        (*DAT_00582b20)(*(int *)(piVar6[1] + 0x38));
      }
      *(undefined1 *)((int)piVar6 + 10) = 0;
    }
  }
  piVar7 = *(int **)(local_10 + 0xc + *(int *)(iVar5 + 0x10));
  if (CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),uVar4) != *piVar7) {
    FUN_004a7960((int)piVar7);
    if (local_c != 1) {
      FUN_004a7960(*(int *)(*(int *)(iVar5 + 0x10) + 0x1c));
    }
    param_1[3] = 0x11;
  }
  if (uVar14 != 0) {
    FUN_0048fbc0(piVar6);
    uVar14 = FUN_0048f2f0(piVar6,(char *)0x0);
    if (uVar14 == 0) {
      FUN_0048f390(piVar6,0);
    }
    if (*(char *)((int)piVar6 + 9) != '\0') {
      piVar7 = piVar6 + 3;
      *piVar7 = *piVar7 + -1;
      if (*piVar7 == 0) {
        if (*(int *)(piVar6[1] + 0x38) != 0) {
          (*DAT_00582b20)(*(int *)(piVar6[1] + 0x38));
        }
        *(undefined1 *)((int)piVar6 + 10) = 0;
      }
    }
  }
LAB_00489fe1:
  local_c = local_c + 1;
  local_10 = local_10 + 0x10;
  if (*(int *)(iVar5 + 0x14) <= local_c) {
    return;
  }
  goto LAB_00489d57;
}


/* FUN_0048a080 @ 0048a080  kind=lib  attributed-by=lib-island  size=313 */

void __cdecl FUN_0048a080(int *param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  undefined4 *puVar5;
  char *pcVar6;
  longlong local_34 [4];
  char *local_14;
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
      pcVar6 = (char *)(param_3 + 0x15);
      do {
        iVar1 = local_c;
        local_14 = (char *)*local_8;
        pcVar3 = FUN_004750b0((int *)local_34,local_14,(undefined4 *)0x0,(undefined4 *)0x0,
                              (undefined4 *)0x0);
        if (pcVar3 == (char *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          cVar2 = *pcVar3;
          pcVar4 = pcVar3;
          while (cVar2 != '\0') {
            pcVar4 = pcVar4 + 1;
            cVar2 = *pcVar4;
          }
          local_10 = ((int)pcVar4 - (int)pcVar3 & 0x3fffffffU) + 1;
          puVar5 = FUN_00494b90(iVar1,local_10);
          if (puVar5 != (undefined4 *)0x0) {
            memcpy(puVar5,pcVar3,local_10);
          }
        }
        pcVar3 = local_14;
        *(undefined4 **)(pcVar6 + -9) = puVar5;
        cVar2 = FUN_00496480(local_14);
        *pcVar6 = cVar2;
        if (cVar2 == '\0') {
          *pcVar6 = 'b';
        }
        puVar5 = (undefined4 *)FUN_004984d0(param_1,pcVar3);
        if (puVar5 != (undefined4 *)0x0) {
          pcVar3 = (char *)*puVar5;
          if (pcVar3 == (char *)0x0) {
            puVar5 = (undefined4 *)0x0;
          }
          else {
            cVar2 = *pcVar3;
            pcVar4 = pcVar3;
            while (cVar2 != '\0') {
              pcVar4 = pcVar4 + 1;
              cVar2 = *pcVar4;
            }
            local_14 = (char *)(((int)pcVar4 - (int)pcVar3 & 0x3fffffffU) + 1);
            puVar5 = FUN_00494b90(local_c,(int)local_14);
            if (puVar5 != (undefined4 *)0x0) {
              memcpy(puVar5,pcVar3,(size_t)local_14);
            }
          }
          *(undefined4 **)(pcVar6 + -5) = puVar5;
        }
        local_8 = local_8 + 5;
        pcVar6 = pcVar6 + 0x18;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
  }
  return;
}


/* FUN_0048a240 @ 0048a240  kind=lib  attributed-by=lib-island  size=378 */

undefined4 __cdecl FUN_0048a240(int *param_1,int *param_2,undefined2 *param_3,undefined4 *param_4)

{
  size_t _Size;
  char cVar1;
  byte bVar2;
  int iVar3;
  char *_Src;
  char *pcVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  byte *pbVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 *local_20;
  int local_1c;
  int local_18;
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
    local_8 = FUN_00494b90(iVar3,local_10 * 0x18);
    if (local_8 != (undefined4 *)0x0) {
      memset(local_8,0,local_10 * 0x18);
    }
  }
  *param_3 = (short)local_10;
  *param_4 = local_8;
  local_c = 0;
  iVar11 = 0;
  if (0 < local_10) {
    local_1c = 0;
    local_20 = local_8;
    do {
      for (pcVar4 = *(char **)(param_2[2] + local_1c);
          (pcVar4 != (char *)0x0 && ((*pcVar4 == '\\' || (*pcVar4 == '\x18'))));
          pcVar4 = *(char **)(pcVar4 + 8)) {
      }
      _Src = (char *)((undefined4 *)(param_2[2] + local_1c))[1];
      if (_Src == (char *)0x0) {
        cVar1 = *pcVar4;
        while (cVar1 == 'v') {
          pcVar4 = *(char **)(pcVar4 + 0xc);
          cVar1 = *pcVar4;
        }
        pbVar5 = (byte *)FUN_004a02d0(iVar3,&DAT_0056de50);
      }
      else {
        cVar1 = *_Src;
        pcVar4 = _Src;
        while (cVar1 != '\0') {
          pcVar4 = pcVar4 + 1;
          cVar1 = *pcVar4;
        }
        _Size = ((int)pcVar4 - (int)_Src & 0x3fffffffU) + 1;
        pbVar5 = (byte *)FUN_00494b90(iVar3,_Size);
        if (pbVar5 != (byte *)0x0) {
          memcpy(pbVar5,_Src,_Size);
        }
      }
      if (*(char *)(iVar3 + 0x38) != '\0') {
        FUN_00494b00(iVar3,(undefined4 *)pbVar5);
        iVar11 = local_c;
        break;
      }
      uVar8 = 0;
      if (pbVar5 != (byte *)0x0) {
        bVar2 = *pbVar5;
        pbVar7 = pbVar5;
        while (bVar2 != 0) {
          pbVar7 = pbVar7 + 1;
          bVar2 = *pbVar7;
        }
        uVar8 = (int)pbVar7 - (int)pbVar5 & 0x3fffffff;
      }
      local_18 = 0;
      pbVar7 = pbVar5;
      if (0 < local_c) {
        do {
          pbVar6 = (byte *)local_8[local_18 * 6];
          bVar2 = *pbVar6;
          pbVar9 = pbVar7;
          while ((bVar2 != 0 && ((&DAT_00569620)[bVar2] == (&DAT_00569620)[*pbVar9]))) {
            pbVar5 = pbVar6 + 1;
            pbVar6 = pbVar6 + 1;
            pbVar9 = pbVar9 + 1;
            bVar2 = *pbVar5;
          }
          pbVar5 = pbVar7;
          if ((&DAT_00569620)[*pbVar6] == (&DAT_00569620)[*pbVar9]) {
            pbVar7[uVar8] = 0;
            pbVar5 = (byte *)FUN_004a02d0(iVar3,(byte *)"%s:%d");
            FUN_00494b00(iVar3,(undefined4 *)pbVar7);
            local_18 = -1;
            if (pbVar5 == (byte *)0x0) break;
          }
          local_18 = local_18 + 1;
          pbVar7 = pbVar5;
        } while (local_18 < local_c);
      }
      *local_20 = pbVar5;
      local_20 = local_20 + 6;
      iVar11 = local_c + 1;
      local_1c = local_1c + 0x14;
      local_c = iVar11;
    } while (iVar11 < local_10);
  }
  if (*(char *)(iVar3 + 0x38) == '\0') {
    return 0;
  }
  puVar10 = local_8;
  if (0 < iVar11) {
    do {
      FUN_00494b00(iVar3,(undefined4 *)*puVar10);
      iVar11 = iVar11 + -1;
      puVar10 = puVar10 + 6;
    } while (iVar11 != 0);
  }
  FUN_00494b00(iVar3,local_8);
  *param_4 = 0;
  *param_3 = 0;
  return 7;
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


/* FUN_0048abe0 @ 0048abe0  kind=lib  attributed-by=lib-island  size=1718 */

void __cdecl
FUN_0048abe0(int *param_1,int param_2,int *param_3,undefined4 param_4,int *param_5,int *param_6,
            int param_7,char *param_8,int param_9,undefined4 param_10)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  char cVar8;
  byte bVar9;
  int iVar10;
  undefined1 *puVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  undefined2 *puVar16;
  int iVar17;
  int *piVar18;
  int local_24;
  int local_14;
  
  piVar7 = param_1;
  cVar4 = *param_8;
  piVar5 = (int *)param_1[2];
  iVar6 = *(int *)(param_8 + 4);
  if (piVar5 == (int *)0x0) {
    return;
  }
  if (param_7 == 0) {
    cVar8 = '\0';
  }
  else {
    cVar8 = *(char *)(param_7 + 1);
  }
  if ((param_6 == (int *)0x0) && (cVar8 == '\0')) {
    FUN_00473870(piVar5,param_2,param_9);
  }
  piVar18 = param_5;
  if ((int)param_5 < 1) {
    piVar18 = (int *)*param_3;
  }
  if (*(int *)(param_8 + 8) == 0) {
    *(int *)(param_8 + 8) = param_1[0x13] + 1;
    *(int **)(param_8 + 0xc) = piVar18;
    param_1[0x13] = param_1[0x13] + (int)piVar18;
  }
  iVar15 = *(int *)(param_8 + 8);
  if ((int)param_5 < 1) {
    if (cVar4 != '\x03') {
      FUN_00496a90((int)param_1);
      FUN_00497010((int)param_1,param_3,iVar15,(uint)(cVar4 == '\x05'));
    }
  }
  else {
    iVar17 = 0;
    if (0 < (int)param_5) {
      do {
        iVar13 = piVar5[7];
        if ((iVar13 < piVar5[8]) || (iVar10 = FUN_0047de10(piVar5), iVar10 == 0)) {
          piVar5[7] = piVar5[7] + 1;
          iVar10 = piVar5[1];
          *(undefined2 *)(iVar10 + iVar13 * 0x14) = 0x1d;
          iVar10 = iVar10 + iVar13 * 0x14;
          *(undefined4 *)(iVar10 + 4) = param_4;
          *(undefined1 *)(iVar10 + 3) = 0;
          *(int *)(iVar10 + 8) = iVar17;
          *(int *)(iVar10 + 0xc) = iVar17 + iVar15;
          *(undefined4 *)(iVar10 + 0x10) = 0;
        }
        iVar17 = iVar17 + 1;
      } while (iVar17 < (int)param_5);
    }
  }
  if (cVar8 != '\0') {
    if (*(char *)(param_7 + 1) == '\x01') {
      iVar17 = piVar5[1];
      if (iVar17 != 0) {
        puVar2 = (undefined8 *)(iVar17 + *(int *)(param_7 + 8) * 0x14);
        FUN_0047bc80(*piVar5,(int)*(char *)((int)puVar2 + 1),
                     *(int **)(iVar17 + 0x10 + *(int *)(param_7 + 8) * 0x14));
        *puVar2 = 0;
        puVar2[1] = 0;
        *(undefined4 *)(puVar2 + 2) = 0;
        *(undefined1 *)puVar2 = 0x95;
      }
    }
    else if (*(char *)(param_7 + 1) == '\x02') {
      piVar1 = (int *)(param_1[0x13] + 1);
      param_1[0x13] = param_1[0x13] + (int)piVar18;
      iVar17 = piVar5[1];
      if (iVar17 != 0) {
        puVar2 = (undefined8 *)(iVar17 + *(int *)(param_7 + 8) * 0x14);
        FUN_0047bc80(*piVar5,(int)*(char *)((int)puVar2 + 1),
                     *(int **)(iVar17 + 0x10 + *(int *)(param_7 + 8) * 0x14));
        *puVar2 = 0;
        puVar2[1] = 0;
        *(undefined4 *)(puVar2 + 2) = 0;
        *(undefined1 *)puVar2 = 0x95;
      }
      iVar17 = *(int *)(param_7 + 8);
      if (iVar17 < 0) {
        iVar17 = piVar5[7] + -1;
      }
      if (*(char *)(*piVar5 + 0x38) == '\0') {
        puVar11 = (undefined1 *)(piVar5[1] + iVar17 * 0x14);
      }
      else {
        puVar11 = &DAT_00583fc4;
      }
      *puVar11 = 10;
      *(undefined4 *)(puVar11 + 4) = 1;
      *(int **)(puVar11 + 8) = piVar1;
      iVar17 = piVar5[7];
      local_14 = 0;
      if (0 < (int)piVar18) {
        local_24 = 0;
        param_1 = piVar1;
        do {
          piVar12 = (int *)FUN_004984d0(piVar7,*(char **)(local_24 + param_3[2]));
          iVar13 = piVar5[7];
          if (local_14 < (int)piVar18 + -1) {
            if ((iVar13 < piVar5[8]) || (iVar10 = FUN_0047de10(piVar5), iVar10 == 0)) {
              piVar5[7] = piVar5[7] + 1;
              puVar16 = (undefined2 *)(piVar5[1] + iVar13 * 0x14);
              *(int *)(puVar16 + 2) = (iVar15 - (int)piVar1) + (int)param_1;
              *puVar16 = 0x4b;
              iVar13 = iVar17 + (int)piVar18;
LAB_0048ae5a:
              *(undefined4 *)(puVar16 + 8) = 0;
              *(int **)(puVar16 + 6) = param_1;
              *(int *)(puVar16 + 4) = iVar13;
              *(undefined1 *)((int)puVar16 + 3) = 0;
            }
          }
          else if ((iVar13 < piVar5[8]) || (iVar10 = FUN_0047de10(piVar5), iVar10 == 0)) {
            piVar5[7] = piVar5[7] + 1;
            puVar16 = (undefined2 *)(piVar5[1] + iVar13 * 0x14);
            *(int *)(puVar16 + 2) = (iVar15 - (int)piVar1) + (int)param_1;
            *puVar16 = 0x4c;
            iVar13 = param_9;
            goto LAB_0048ae5a;
          }
          iVar13 = piVar5[1];
          iVar10 = *piVar5;
          if ((iVar13 == 0) || (*(char *)(iVar10 + 0x38) != '\0')) {
            FUN_0047bc80(iVar10,0xfffffffc,piVar12);
          }
          else {
            iVar3 = iVar13 + (piVar5[7] + -1) * 0x14;
            FUN_0047bc80(iVar10,(int)*(char *)(iVar3 + 1),
                         *(int **)(iVar13 + 0x10 + (piVar5[7] + -1) * 0x14));
            *(undefined4 *)(iVar3 + 0x10) = 0;
            if (piVar12 == (int *)0x0) {
              *(undefined4 *)(iVar3 + 0x10) = 0;
              *(undefined1 *)(iVar3 + 1) = 0;
            }
            else {
              *(int **)(iVar3 + 0x10) = piVar12;
              *(undefined1 *)(iVar3 + 1) = 0xfc;
            }
          }
          if (piVar5[1] != 0) {
            *(undefined1 *)(piVar5[1] + -0x11 + piVar5[7] * 0x14) = 0x80;
          }
          param_1 = (int *)((int)param_1 + 1);
          local_14 = local_14 + 1;
          local_24 = local_24 + 0x14;
        } while (local_14 < (int)piVar18);
      }
      iVar17 = piVar5[7];
      if ((iVar17 < piVar5[8]) || (iVar13 = FUN_0047de10(piVar5), iVar13 == 0)) {
        piVar5[7] = piVar5[7] + 1;
        iVar13 = piVar5[1];
        *(undefined2 *)(iVar13 + iVar17 * 0x14) = 0xe;
        iVar13 = iVar13 + iVar17 * 0x14;
        *(int *)(iVar13 + 4) = iVar15;
        *(int **)(iVar13 + 8) = piVar1;
        *(undefined1 *)(iVar13 + 3) = 0;
        *(int *)(iVar13 + 0xc) = (int)piVar18 + -1;
        *(undefined4 *)(iVar13 + 0x10) = 0;
      }
    }
    else {
      FUN_00473550((int)param_1,*(undefined4 *)(param_7 + 4),param_9,piVar18,iVar15);
    }
    if (((param_6 == (int *)0x0) && (*(int *)(param_2 + 0xc) != 0)) && (param_9 != 0)) {
      FUN_004ae830(piVar5,0x14,*(int *)(param_2 + 0xc),0xffffffff);
      uVar14 = FUN_004ae7d0(piVar5,0x79,*(undefined4 *)(param_2 + 0xc));
      FUN_004ae830(piVar5,1,0,param_9);
      if ((-1 < (int)uVar14) && (uVar14 < (uint)piVar5[7])) {
        *(int *)(piVar5[1] + 8 + uVar14 * 0x14) = piVar5[7];
      }
    }
  }
  switch(cVar4) {
  case '\x01':
    if (*(char *)((int)piVar7 + 0x13) == '\0') {
      piVar7[0x13] = piVar7[0x13] + 1;
      iVar17 = piVar7[0x13];
    }
    else {
      bVar9 = *(char *)((int)piVar7 + 0x13) - 1;
      *(byte *)((int)piVar7 + 0x13) = bVar9;
      iVar17 = piVar7[bVar9 + 7];
    }
    FUN_004ae890(piVar5,0x1f,iVar15,piVar18,iVar17);
    FUN_004ae830(piVar5,0x61,iVar6,iVar17);
LAB_0048b019:
    FUN_004a68f0((int)piVar7,iVar17);
    break;
  case '\x02':
    FUN_004ae890(piVar5,0x62,iVar6,iVar15,piVar18);
    break;
  case '\x03':
    FUN_004ae830(piVar5,7,1,iVar6);
    break;
  case '\x05':
  case '\n':
    if (param_6 != (int *)0x0) {
      if (*(char *)((int)piVar7 + 0x13) == '\0') {
        piVar7[0x13] = piVar7[0x13] + 1;
        iVar17 = piVar7[0x13];
      }
      else {
        bVar9 = *(char *)((int)piVar7 + 0x13) - 1;
        *(byte *)((int)piVar7 + 0x13) = bVar9;
        iVar17 = piVar7[bVar9 + 7];
      }
      FUN_004ae890(piVar5,0x1f,iVar15,piVar18,iVar17);
      FUN_00487240((int)piVar7,param_6,param_2,iVar17);
      goto LAB_0048b019;
    }
    if (cVar4 == '\n') {
      FUN_004ae7d0(piVar5,4,*(undefined4 *)(param_8 + 4));
    }
    else {
      FUN_004ae830(piVar5,0x10,iVar15,piVar18);
      FUN_00496d90((int)piVar7,iVar15,(int)piVar18);
    }
    goto LAB_0048b029;
  case '\x06':
    if (param_6 == (int *)0x0) {
      FUN_00497600((int)piVar7,iVar15,iVar6,1);
      goto LAB_0048b029;
    }
    FUN_00487240((int)piVar7,param_6,param_2,iVar15);
    break;
  case '\a':
    piVar18 = (int *)(param_8 + 1);
    iVar17 = FUN_00493750(*(char **)param_3[2],(char)*piVar18);
    *(char *)piVar18 = (char)iVar17;
    if (param_6 == (int *)0x0) {
      if (*(char *)((int)piVar7 + 0x13) == '\0') {
        piVar7[0x13] = piVar7[0x13] + 1;
        iVar17 = piVar7[0x13];
      }
      else {
        bVar9 = *(char *)((int)piVar7 + 0x13) - 1;
        *(byte *)((int)piVar7 + 0x13) = bVar9;
        iVar17 = piVar7[bVar9 + 7];
      }
      FUN_004ae8f0(piVar5,0x1f,iVar15,1,iVar17,piVar18,1);
      FUN_00496d90((int)piVar7,iVar15,1);
      FUN_004ae830(piVar5,0x61,iVar6,iVar17);
      FUN_004a68f0((int)piVar7,iVar17);
      goto LAB_0048b029;
    }
    FUN_00487240((int)piVar7,param_6,param_2,iVar15);
    break;
  case '\b':
  case '\t':
    if (*(char *)((int)piVar7 + 0x13) == '\0') {
      piVar7[0x13] = piVar7[0x13] + 1;
      iVar17 = piVar7[0x13];
    }
    else {
      bVar9 = *(char *)((int)piVar7 + 0x13) - 1;
      *(byte *)((int)piVar7 + 0x13) = bVar9;
      iVar17 = piVar7[bVar9 + 7];
    }
    FUN_004ae890(piVar5,0x1f,iVar15,piVar18,iVar17);
    if (param_6 == (int *)0x0) {
      if (*(char *)((int)piVar7 + 0x13) == '\0') {
        piVar7[0x13] = piVar7[0x13] + 1;
        iVar15 = piVar7[0x13];
      }
      else {
        bVar9 = *(char *)((int)piVar7 + 0x13) - 1;
        *(byte *)((int)piVar7 + 0x13) = bVar9;
        iVar15 = piVar7[bVar9 + 7];
      }
      FUN_004ae830(piVar5,0x38,iVar6,iVar15);
      FUN_004ae890(piVar5,0x39,iVar6,iVar17,iVar15);
      if (piVar5[1] != 0) {
        *(undefined1 *)(piVar5[1] + -0x11 + piVar5[7] * 0x14) = 8;
      }
      FUN_004a68f0((int)piVar7,iVar15);
      FUN_004a68f0((int)piVar7,iVar17);
    }
    else {
      FUN_00487240((int)piVar7,param_6,param_2,iVar17);
      FUN_004a68f0((int)piVar7,iVar17);
    }
  }
  if (param_6 == (int *)0x0) {
LAB_0048b029:
    iVar6 = *(int *)(param_2 + 8);
    if ((iVar6 != 0) &&
       ((iVar15 = piVar5[7], iVar15 < piVar5[8] || (iVar17 = FUN_0047de10(piVar5), iVar17 == 0)))) {
      piVar5[7] = piVar5[7] + 1;
      puVar16 = (undefined2 *)(piVar5[1] + iVar15 * 0x14);
      *puVar16 = 0x7a;
      *(undefined1 *)((int)puVar16 + 3) = 0;
      *(int *)(puVar16 + 2) = iVar6;
      *(undefined4 *)(puVar16 + 4) = param_10;
      *(undefined4 *)(puVar16 + 6) = 0xffffffff;
      *(undefined4 *)(puVar16 + 8) = 0;
    }
  }
  return;
}


/* FUN_0048b2e0 @ 0048b2e0  kind=lib  attributed-by=lib-island  size=45 */

char * __cdecl FUN_0048b2e0(int param_1)

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


/* FUN_0048b310 @ 0048b310  kind=lib  attributed-by=lib-island  size=355 */

uint __cdecl FUN_0048b310(char *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  int *piVar5;
  uint local_34 [6];
  ushort local_1c;
  uint local_14;
  int local_10;
  int *local_c;
  uint local_8;
  
  piVar5 = *(int **)(param_1 + 0x34);
  cVar1 = *param_1;
  local_10 = *(int *)(param_1 + 0x48);
  local_c = piVar5;
  uVar2 = FUN_00471320(param_1);
  if (uVar2 != 0) {
    *param_1 = cVar1;
    return uVar2;
  }
  local_14 = (uint)*(ushort *)(param_1 + 0x10);
  iVar3 = 0;
  local_8 = 0;
  if (local_14 != 0) {
    do {
      puVar4 = (undefined1 *)
               ((uint)(CONCAT11(*(undefined1 *)(*(int *)(param_1 + 0x40) + iVar3 * 2),
                                *(undefined1 *)(*(int *)(param_1 + 0x40) + 1 + iVar3 * 2)) &
                      *(ushort *)(param_1 + 0x12)) + *(int *)(param_1 + 0x38));
      if ((local_8 == 0) && (FUN_00471710((int)param_1,(uint)puVar4,local_34), local_1c != 0)) {
        uVar2 = (uint)local_1c;
        FUN_004870c0(*(int **)(param_1 + 0x34),
                     CONCAT31(CONCAT21(CONCAT11(puVar4[uVar2],puVar4[uVar2 + 1]),puVar4[uVar2 + 2]),
                              puVar4[uVar2 + 3]),'\x03',*(int *)(param_1 + 0x48),&local_8);
      }
      piVar5 = local_c;
      if (param_1[3] == '\0') {
        FUN_004870c0(local_c,CONCAT31(CONCAT21(CONCAT11(*puVar4,puVar4[1]),puVar4[2]),puVar4[3]),
                     '\x05',local_10,&local_8);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)local_14);
  }
  if (param_1[3] != '\0') {
    *param_1 = cVar1;
    return local_8;
  }
  iVar3 = (uint)(byte)param_1[5] + *(int *)(param_1 + 0x38);
  FUN_004870c0(piVar5,CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar3 + 8),
                                                 *(undefined1 *)(iVar3 + 9)),
                                        *(undefined1 *)(iVar3 + 10)),*(undefined1 *)(iVar3 + 0xb)),
               '\x05',local_10,&local_8);
  *param_1 = cVar1;
  return local_8;
}


/* FUN_0048b500 @ 0048b500  kind=lib  attributed-by=lib-island  size=48 */

void __cdecl FUN_0048b500(int param_1,undefined4 param_2)

{
  for (; param_1 != 0; param_1 = *(int *)(param_1 + 0xc)) {
    *(ushort *)(param_1 + 2) = *(ushort *)(param_1 + 2) | 1;
    *(short *)(param_1 + 0x20) = (short)param_2;
    FUN_0048b500(*(int *)(param_1 + 8),param_2);
  }
  return;
}


/* FUN_0048b530 @ 0048b530  kind=lib  attributed-by=lib-island  size=105 */

void __cdecl FUN_0048b530(int param_1)

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


/* FUN_0048b5a0 @ 0048b5a0  kind=lib  attributed-by=lib-island  size=177 */

undefined4 __cdecl FUN_0048b5a0(undefined8 *param_1,int param_2,byte param_3)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = param_2;
  puVar2 = param_1;
  iVar1 = *(int *)((int)param_1 + 4);
  for (piVar4 = *(int **)(iVar1 + 0x48); piVar4 != (int *)0x0; piVar4 = (int *)piVar4[3]) {
    if ((piVar4[1] == param_2) && ((undefined8 *)*piVar4 == param_1)) goto LAB_0048b635;
  }
  if (DAT_00582ac8 == 0) {
    param_1 = (undefined8 *)(*DAT_00582ae8)(0x10);
  }
  else {
    if (DAT_00583f40 != 0) {
      (*DAT_00582b18)(DAT_00583f40);
    }
    FUN_00480650(0x10,(int *)&param_1);
    if (DAT_00583f40 != 0) {
      (*DAT_00582b20)(DAT_00583f40);
    }
  }
  if ((int *)param_1 == (int *)0x0) {
    return 7;
  }
  *(int *)((int)param_1 + 0) = 0;
  *(int *)((int)param_1 + 4) = 0;
  *(int *)((int)param_1 + 8) = 0;
  *(int *)((int)param_1 + 0xc) = 0;
  *(int *)((int)param_1 + 4) = iVar3;
  *(undefined8 **)param_1 = puVar2;
  *(int *)((int)param_1 + 0xc) = *(int *)(iVar1 + 0x48);
  *(undefined8 **)(iVar1 + 0x48) = param_1;
  piVar4 = (int *)param_1;
LAB_0048b635:
  if (*(byte *)(piVar4 + 2) < param_3) {
    *(byte *)(piVar4 + 2) = param_3;
  }
  return 0;
}


/* FUN_0048b780 @ 0048b780  kind=lib  attributed-by=lib-island  size=52 */

void __cdecl
FUN_0048b780(undefined4 *param_1,int *param_2,int param_3,undefined4 *param_4,undefined4 *param_5)

{
  char *pcVar1;
  
  pcVar1 = FUN_004a1440(param_2,param_3,(char *)*param_4,(char *)*param_5,(undefined4 *)0x0);
  *param_1 = pcVar1;
  param_1[1] = param_4[1];
  param_1[2] = param_5[2];
  return;
}


/* FUN_0048b7c0 @ 0048b7c0  kind=lib  attributed-by=lib-island  size=94 */

void __cdecl FUN_0048b7c0(undefined4 *param_1,int *param_2,int param_3,int *param_4)

{
  undefined4 *puVar1;
  
  puVar1 = FUN_00496510(*param_2,param_3,param_4,1);
  FUN_00496a30(*param_2,(int)puVar1,(undefined4 *)0x0,(undefined4 *)0x0);
  if ((puVar1 != (undefined4 *)0x0) && (*(int *)(*param_2 + 0x5c) < (int)puVar1[5])) {
    FUN_004962b0(param_2,(byte *)"Expression tree is too large (maximum depth %d)");
  }
  *param_1 = puVar1;
  param_1[1] = *param_4;
  param_1[2] = param_4[1] + *param_4;
  return;
}


/* FUN_0048b820 @ 0048b820  kind=lib  attributed-by=lib-island  size=139 */

void __cdecl
FUN_0048b820(undefined4 *param_1,int *param_2,undefined1 param_3,undefined4 *param_4,int *param_5)

{
  undefined4 *puVar1;
  undefined4 *_Dst;
  
  puVar1 = (undefined4 *)*param_4;
  _Dst = FUN_00494b90(*param_2,0x2c);
  if (_Dst != (undefined4 *)0x0) {
    memset(_Dst,0,0x2c);
    *(undefined1 *)_Dst = param_3;
    *(undefined2 *)((int)_Dst + 0x1e) = 0xffff;
    _Dst[5] = 1;
  }
  FUN_00496a30(*param_2,(int)_Dst,puVar1,(undefined4 *)0x0);
  if ((_Dst != (undefined4 *)0x0) && (*(int *)(*param_2 + 0x5c) < (int)_Dst[5])) {
    FUN_004962b0(param_2,(byte *)"Expression tree is too large (maximum depth %d)");
  }
  *param_1 = _Dst;
  param_1[1] = param_4[1];
  param_1[2] = param_5[1] + *param_5;
  return;
}


/* FUN_0048b8b0 @ 0048b8b0  kind=lib  attributed-by=lib-island  size=136 */

void __cdecl
FUN_0048b8b0(undefined4 *param_1,int *param_2,undefined1 param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  undefined4 *puVar1;
  undefined4 *_Dst;
  
  puVar1 = (undefined4 *)*param_4;
  _Dst = FUN_00494b90(*param_2,0x2c);
  if (_Dst != (undefined4 *)0x0) {
    memset(_Dst,0,0x2c);
    *(undefined1 *)_Dst = param_3;
    *(undefined2 *)((int)_Dst + 0x1e) = 0xffff;
    _Dst[5] = 1;
  }
  FUN_00496a30(*param_2,(int)_Dst,puVar1,(undefined4 *)0x0);
  if ((_Dst != (undefined4 *)0x0) && (*(int *)(*param_2 + 0x5c) < (int)_Dst[5])) {
    FUN_004962b0(param_2,(byte *)"Expression tree is too large (maximum depth %d)");
  }
  *param_1 = _Dst;
  param_1[1] = *param_5;
  param_1[2] = param_4[2];
  return;
}


/* FUN_0048b940 @ 0048b940  kind=lib  attributed-by=lib-island  size=28 */

int __cdecl FUN_0048b940(int param_1)

{
  if (param_1 < 0) {
    if (param_1 == -0x80000000) {
      return 0x7fffffff;
    }
    param_1 = -param_1;
  }
  return param_1;
}


/* FUN_0048b960 @ 0048b960  kind=lib  attributed-by=lib-island  size=94 */

void __cdecl FUN_0048b960(int *param_1,undefined4 *param_2)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = param_1[0x7f];
  if ((iVar1 == 0) || (*(char *)((int)param_1 + 0x1d5) != '\0')) {
    FUN_00498790(*param_1,param_2);
  }
  else {
    puVar2 = FUN_00498f00(param_1,*(uint **)(iVar1 + 0x18),param_2);
    *(uint **)(iVar1 + 0x18) = puVar2;
    if (param_1[0x68] != 0) {
      FUN_004992e0(param_1,(int *)puVar2,param_1 + 0x67,1);
      return;
    }
  }
  return;
}


/* FUN_0048b9c0 @ 0048b9c0  kind=lib  attributed-by=lib-island  size=135 */

void __cdecl FUN_0048b9c0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  byte *pbVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = param_1[0x7f];
  if (iVar1 != 0) {
    iVar4 = *param_1;
    iVar5 = *(short *)(iVar1 + 0x26) + -1;
    pbVar2 = (byte *)FUN_004a0d40(iVar4,param_2);
    if (pbVar2 != (byte *)0x0) {
      piVar3 = FUN_004a0000(param_1,pbVar2);
      if (piVar3 == (int *)0x0) {
        FUN_00494b00(iVar4,(undefined4 *)pbVar2);
      }
      else {
        *(byte **)(*(int *)(iVar1 + 4) + 0x10 + iVar5 * 0x18) = pbVar2;
        iVar4 = *(int *)(iVar1 + 8);
        if (iVar4 != 0) {
          do {
            if (**(int **)(iVar4 + 4) == iVar5) {
              **(undefined4 **)(iVar4 + 0x20) =
                   *(undefined4 *)(*(int *)(iVar1 + 4) + 0x10 + iVar5 * 0x18);
            }
            iVar4 = *(int *)(iVar4 + 0x14);
          } while (iVar4 != 0);
          return;
        }
      }
    }
  }
  return;
}


/* FUN_0048ba50 @ 0048ba50  kind=lib  attributed-by=lib-island  size=317 */

void __cdecl FUN_0048ba50(int *param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  
  iVar2 = *param_1;
  iVar3 = param_1[0x7f];
  if (iVar3 != 0) {
    if (*(int *)(iVar2 + 0x58) < *(short *)(iVar3 + 0x26) + 1) {
      FUN_004962b0(param_1,(byte *)"too many columns on %s");
      return;
    }
    pbVar4 = (byte *)FUN_004a0d40(iVar2,param_2);
    if (pbVar4 != (byte *)0x0) {
      iVar5 = (int)*(short *)(iVar3 + 0x26);
      iVar7 = 0;
      if (0 < iVar5) {
        puVar6 = *(undefined4 **)(iVar3 + 4);
        cVar1 = (&DAT_00569620)[*pbVar4];
        do {
          if ((cVar1 == (&DAT_00569620)[*(byte *)*puVar6]) &&
             (iVar5 = FUN_004bcc60(pbVar4 + 1,(byte *)*puVar6 + 1), iVar5 == 0)) {
            FUN_004962b0(param_1,(byte *)"duplicate column name: %s");
            FUN_00494b00(iVar2,(undefined4 *)pbVar4);
            return;
          }
          iVar5 = (int)*(short *)(iVar3 + 0x26);
          iVar7 = iVar7 + 1;
          puVar6 = puVar6 + 6;
        } while (iVar7 < iVar5);
      }
      if ((*(ushort *)(iVar3 + 0x26) & 7) == 0) {
        puVar6 = FUN_00494cf0(iVar2,*(undefined4 **)(iVar3 + 4),(iVar5 * 3 + 0x18) * 8);
        if (puVar6 == (undefined4 *)0x0) {
          FUN_00494b00(iVar2,(undefined4 *)pbVar4);
          return;
        }
        *(undefined4 **)(iVar3 + 4) = puVar6;
      }
      iVar5 = (int)*(short *)(iVar3 + 0x26);
      iVar2 = *(int *)(iVar3 + 4);
      *(undefined8 *)(iVar2 + iVar5 * 0x18) = 0;
      *(undefined8 *)(iVar2 + 8 + iVar5 * 0x18) = 0;
      *(undefined8 *)(iVar2 + 0x10 + iVar5 * 0x18) = 0;
      *(byte **)(iVar2 + iVar5 * 0x18) = pbVar4;
      *(undefined1 *)(iVar2 + 0x15 + iVar5 * 0x18) = 0x62;
      *(short *)(iVar3 + 0x26) = *(short *)(iVar3 + 0x26) + 1;
    }
  }
  return;
}


/* FUN_0048bb90 @ 0048bb90  kind=lib  attributed-by=lib-island  size=67 */

void __cdecl FUN_0048bb90(int *param_1,undefined4 *param_2)

{
  int iVar1;
  char cVar2;
  byte *pbVar3;
  
  iVar1 = param_1[0x7f];
  if ((iVar1 != 0) && (0 < *(short *)(iVar1 + 0x26))) {
    iVar1 = *(int *)(iVar1 + 4) + *(short *)(iVar1 + 0x26) * 0x18;
    pbVar3 = (byte *)FUN_004a0d40(*param_1,param_2);
    *(byte **)(iVar1 + -0xc) = pbVar3;
    cVar2 = FUN_0048bf70(pbVar3);
    *(char *)(iVar1 + -3) = cVar2;
  }
  return;
}


/* FUN_0048bbe0 @ 0048bbe0  kind=lib  attributed-by=lib-island  size=249 */

void __cdecl FUN_0048bbe0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  size_t _Size;
  code *local_1c;
  code *local_18;
  int local_c;
  void *local_8;
  
  iVar1 = param_1[0x7f];
  iVar2 = *param_1;
  if (iVar1 != 0) {
    local_c = 2;
    iVar1 = *(int *)(iVar1 + 4) + *(short *)(iVar1 + 0x26) * 0x18;
    local_1c = FUN_00478e60;
    local_18 = FUN_0048b2c0;
    FUN_004bb020(&local_1c,*param_2);
    if (local_c == 0) {
      FUN_004962b0(param_1,(byte *)"default value of column [%s] is not constant");
      FUN_00498790(iVar2,(undefined4 *)*param_2);
      return;
    }
    FUN_00498790(iVar2,*(undefined4 **)(iVar1 + -0x14));
    puVar3 = FUN_00478bb0(iVar2,(undefined4 *)*param_2,1,(int *)0x0);
    *(undefined4 **)(iVar1 + -0x14) = puVar3;
    FUN_00494b00(iVar2,*(undefined4 **)(iVar1 + -0x10));
    local_8 = (void *)param_2[1];
    _Size = param_2[2] - (int)local_8;
    if (local_8 == (void *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = FUN_00494b90(iVar2,_Size + 1);
      if (puVar3 != (undefined4 *)0x0) {
        memcpy(puVar3,local_8,_Size);
        *(undefined1 *)((int)puVar3 + _Size) = 0;
      }
    }
    *(undefined4 **)(iVar1 + -0x10) = puVar3;
  }
  FUN_00498790(iVar2,(undefined4 *)*param_2);
  return;
}


/* FUN_0048bce0 @ 0048bce0  kind=lib  attributed-by=lib-island  size=155 */

undefined4 __cdecl FUN_0048bce0(uint *param_1,uint param_2,int param_3)

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


/* FUN_0048bd80 @ 0048bd80  kind=lib  attributed-by=lib-island  size=138 */

void __cdecl FUN_0048bd80(int *param_1,uint *param_2,int param_3,int param_4,int param_5)

{
  byte *pbVar1;
  ushort *puVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  int iVar11;
  int local_c;
  int local_8;
  
  iVar4 = param_1[0x7f];
  iVar11 = -1;
  if ((iVar4 != 0) && (*(char *)((int)param_1 + 0x1d5) == '\0')) {
    if ((*(byte *)(iVar4 + 0x2a) & 4) != 0) {
      FUN_004962b0(param_1,(byte *)"table \"%s\" has more than one primary key");
      goto LAB_0048bdbf;
    }
    *(byte *)(iVar4 + 0x2a) = *(byte *)(iVar4 + 0x2a) | 4;
    if (param_2 == (uint *)0x0) {
      iVar11 = *(short *)(iVar4 + 0x26) + -1;
      puVar2 = (ushort *)(*(int *)(iVar4 + 4) + 0x16 + iVar11 * 0x18);
      *puVar2 = *puVar2 | 1;
    }
    else {
      local_8 = 0;
      if (0 < (int)*param_2) {
        local_c = 0;
        do {
          iVar7 = (int)*(short *)(iVar4 + 0x26);
          iVar11 = 0;
          if (0 < iVar7) {
            puVar9 = *(undefined4 **)(iVar4 + 4);
            pbVar5 = *(byte **)(param_2[2] + 4 + local_c);
            do {
              pbVar10 = (byte *)*puVar9;
              bVar3 = *pbVar5;
              pbVar6 = pbVar5;
              while ((bVar3 != 0 && ((&DAT_00569620)[bVar3] == (&DAT_00569620)[*pbVar10]))) {
                pbVar1 = pbVar6 + 1;
                pbVar6 = pbVar6 + 1;
                pbVar10 = pbVar10 + 1;
                bVar3 = *pbVar1;
              }
              if ((&DAT_00569620)[*pbVar6] == (&DAT_00569620)[*pbVar10]) break;
              iVar11 = iVar11 + 1;
              puVar9 = puVar9 + 6;
            } while (iVar11 < iVar7);
          }
          if (iVar11 < iVar7) {
            puVar2 = (ushort *)(*(int *)(iVar4 + 4) + 0x16 + iVar11 * 0x18);
            *puVar2 = *puVar2 | 1;
          }
          local_8 = local_8 + 1;
          local_c = local_c + 0x14;
        } while (local_8 < (int)*param_2);
      }
      if (1 < (int)*param_2) goto LAB_0048bf0a;
    }
    if ((((iVar11 < 0) || (*(short *)(iVar4 + 0x26) <= iVar11)) ||
        (pbVar5 = *(byte **)(*(int *)(iVar4 + 4) + 0xc + iVar11 * 0x18), pbVar5 == (byte *)0x0)) ||
       ((iVar7 = FUN_004bcc60(pbVar5,(byte *)"INTEGER"), iVar7 != 0 || (param_5 != 0)))) {
LAB_0048bf0a:
      if (param_4 != 0) {
        FUN_004962b0(param_1,(byte *)"AUTOINCREMENT is only allowed on an INTEGER PRIMARY KEY");
        FUN_00499060(*param_1,(int *)param_2);
        return;
      }
      piVar8 = FUN_004940f0(param_1,(undefined4 *)0x0,0,(short *)0x0,param_2,param_3,0,0,
                            (char)param_5,0);
      if (piVar8 != (int *)0x0) {
        *(undefined1 *)((int)piVar8 + 0x2d) = 2;
      }
      FUN_00499060(*param_1,(int *)0x0);
      return;
    }
    *(undefined1 *)(iVar4 + 0x2b) = (undefined1)param_3;
    *(byte *)(iVar4 + 0x2a) = *(byte *)(iVar4 + 0x2a) | (char)param_4 << 3;
    *(short *)(iVar4 + 0x24) = (short)iVar11;
  }
LAB_0048bdbf:
  FUN_00499060(*param_1,(int *)param_2);
  return;
}


/* FUN_0048bf70 @ 0048bf70  kind=lib  attributed-by=lib-island  size=188 */

char __cdecl FUN_0048bf70(byte *param_1)

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
    uVar3 = uVar3 * 0x100 + (uint)(byte)(&DAT_00569620)[bVar2];
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
      if ((cVar1 != 'c') && (cVar1 != 'e')) goto LAB_0048c00a;
      cVar1 = 'b';
    }
    else if (uVar3 == 0x7265616c) {
      if (cVar1 != 'c') goto LAB_0048c00a;
      cVar1 = 'e';
    }
    else if (uVar3 == 0x666c6f61) {
      if (cVar1 == 'c') {
        cVar1 = 'e';
      }
      else {
LAB_0048c00a:
        if ((uVar3 & 0xffffff) == 0x696e74) {
          return 'd';
        }
      }
    }
    else {
      if ((uVar3 != 0x646f7562) || (cVar1 != 'c')) goto LAB_0048c00a;
      cVar1 = 'e';
    }
    bVar2 = *param_1;
    if (bVar2 == 0) {
      return cVar1;
    }
  } while( true );
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


/* FUN_0048c830 @ 0048c830  kind=lib  attributed-by=lib-island  size=42 */

uint __cdecl FUN_0048c830(int param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  int local_c;
  byte *local_8;
  
  for (puVar1 = *(undefined4 **)(*(int *)(param_2 * 0x10 + 0xc + *(int *)(param_1 + 0x10)) + 0x20);
      puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
    iVar4 = puVar1[2];
    puVar2 = *(uint **)(iVar4 + 8);
    uVar6 = *(uint *)(*(int *)(iVar4 + 0xc) + 0x1c);
    if (uVar6 < 10) {
      uVar6 = 10;
    }
    *puVar2 = uVar6;
    iVar3 = 1;
    uVar6 = 10;
    if (0 < *(int *)(iVar4 + 0x24)) {
      do {
        puVar2[iVar3] = uVar6;
        if (5 < uVar6) {
          uVar6 = uVar6 - 1;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 <= *(int *)(iVar4 + 0x24));
    }
    if (*(char *)(iVar4 + 0x2c) != '\0') {
      puVar2[*(int *)(iVar4 + 0x24)] = 1;
    }
  }
  local_c = param_1;
  local_8 = *(byte **)(param_2 * 0x10 + *(int *)(param_1 + 0x10));
  iVar4 = FUN_00499c30(param_1,(byte *)"sqlite_stat1",local_8);
  if (iVar4 == 0) {
    return 1;
  }
  pbVar5 = (byte *)FUN_004a02d0(param_1,(byte *)"SELECT tbl,idx,stat FROM %Q.sqlite_stat1");
  if (pbVar5 == (byte *)0x0) {
    *(undefined1 *)(param_1 + 0x38) = 1;
    return 7;
  }
  uVar6 = FUN_00463120(param_1,pbVar5,FUN_0046c6c0,&local_c,(int *)0x0);
  FUN_00494b00(param_1,(undefined4 *)pbVar5);
  if (uVar6 == 7) {
    *(undefined1 *)(param_1 + 0x38) = 1;
  }
  return uVar6;
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


/* FUN_0048c930 @ 0048c930  kind=lib  attributed-by=lib-island  size=319 */

void __thiscall FUN_0048c930(void *this,int *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *local_8;
  
  iVar1 = *param_1;
  local_8 = this;
  if ((*(char *)(iVar1 + 0x81) == '\0') && (iVar2 = FUN_0049ddb0(iVar1,param_1 + 1), iVar2 != 0)) {
    param_1[0x11] = param_1[0x11] + 1;
    param_1[3] = iVar2;
    return;
  }
  if (param_2 == (undefined4 *)0x0) {
    iVar2 = 0;
    if (*(int *)(iVar1 + 0x14) < 1) {
      return;
    }
    do {
      if (iVar2 != 1) {
        FUN_0046ca90(param_1,iVar2);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(iVar1 + 0x14));
    return;
  }
  if (*(int *)(param_3 + 4) == 0) {
    pbVar3 = (byte *)FUN_004a0d40(iVar1,param_2);
    iVar2 = FUN_00499540(iVar1,pbVar3);
    FUN_00494b00(iVar1,(undefined4 *)pbVar3);
    if (-1 < iVar2) {
      FUN_0046ca90(param_1,iVar2);
      return;
    }
    pbVar4 = (byte *)FUN_004a0d40(iVar1,param_2);
    if (pbVar4 == (byte *)0x0) {
      return;
    }
    piVar5 = (int *)FUN_00499af0(iVar1,pbVar4,(byte *)0x0);
    if (piVar5 != (int *)0x0) goto LAB_0048c9f4;
    pbVar3 = (byte *)0x0;
LAB_0048ca42:
    piVar7 = (int *)FUN_004a0080(param_1,0,pbVar4,pbVar3);
    if (piVar7 == (int *)0x0) goto LAB_0048ca5e;
    piVar5 = (int *)0x0;
  }
  else {
    uVar6 = FUN_004ab150(param_1,param_2,param_3,(int *)&local_8);
    if ((int)uVar6 < 0) {
      return;
    }
    pbVar3 = *(byte **)(*(int *)(iVar1 + 0x10) + uVar6 * 0x10);
    pbVar4 = (byte *)FUN_004a0d40(iVar1,local_8);
    if (pbVar4 == (byte *)0x0) {
      return;
    }
    piVar5 = (int *)FUN_00499af0(iVar1,pbVar4,pbVar3);
    if (piVar5 == (int *)0x0) goto LAB_0048ca42;
LAB_0048c9f4:
    piVar7 = (int *)piVar5[3];
  }
  FUN_0046dec0(param_1,piVar7,piVar5);
LAB_0048ca5e:
  FUN_00494b00(iVar1,(undefined4 *)pbVar4);
  return;
}


/* FUN_0048ca70 @ 0048ca70  kind=lib  attributed-by=lib-island  size=70 */

uint __cdecl FUN_0048ca70(int param_1,uint param_2)

{
  if (param_1 != 0) {
    if ((*(char *)(param_1 + 0x38) != '\0') || (param_2 == 0xc0a)) {
      FUN_004961f0(param_1,7,(byte *)0x0);
      *(undefined1 *)(param_1 + 0x38) = 0;
      param_2 = 7;
    }
    return param_2 & *(uint *)(param_1 + 0x30);
  }
  return param_2 & 0xff;
}


/* FUN_0048cac0 @ 0048cac0  kind=lib  attributed-by=lib-island  size=325 */

void __cdecl FUN_0048cac0(int *param_1,uint param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *_Dst;
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
      if (*(char *)((int)param_1 + 0x1a) != '\0' || (char)param_1[6] != '\0') goto LAB_0048cb39;
      uVar1 = param_1[3];
      if ((int)(uVar1 + 0x1d) < param_1[4]) {
LAB_0048cb21:
        memcpy((void *)(param_1[2] + param_1[3]),"                             ",_Size);
        param_1[3] = param_1[3] + _Size;
      }
      else if (*(char *)((int)param_1 + 0x19) == '\0') {
        _Size = (param_1[4] - uVar1) - 1;
        *(undefined1 *)((int)param_1 + 0x1a) = 1;
        if (0 < (int)_Size) goto LAB_0048cb21;
      }
      else {
        puVar2 = (undefined4 *)param_1[2];
        if (puVar2 == (undefined4 *)param_1[1]) {
          puVar2 = (undefined4 *)0x0;
        }
        uVar6 = uVar1 + 0x1e;
        iVar4 = param_1[5] >> 0x1f;
        iVar3 = ((int)uVar1 >> 0x1f) + (uint)(0xffffffe1 < uVar1);
        if ((iVar3 < iVar4) || ((iVar3 <= iVar4 && (uVar6 <= (uint)param_1[5])))) {
          param_1[4] = uVar6;
          if (*(char *)((int)param_1 + 0x19) == '\x01') {
            _Dst = FUN_00494cf0(*param_1,puVar2,uVar6);
LAB_0048cbc5:
            if (_Dst != (undefined4 *)0x0) {
              if ((puVar2 == (undefined4 *)0x0) && (0 < param_1[3])) {
                memcpy(_Dst,(void *)param_1[2],param_1[3]);
              }
              param_1[2] = (int)_Dst;
              goto LAB_0048cb21;
            }
          }
          else {
            iVar3 = FUN_004bc920();
            if (iVar3 == 0) {
              _Dst = (undefined4 *)FUN_004a6140((int)puVar2,uVar6);
              goto LAB_0048cbc5;
            }
          }
          *(undefined1 *)(param_1 + 6) = 1;
          FUN_004aa970(param_1);
        }
        else {
          FUN_004aa970(param_1);
          *(undefined1 *)((int)param_1 + 0x1a) = 1;
        }
      }
LAB_0048cb39:
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (0 < (int)param_2) {
    FUN_004aa7b0(param_1,"                             ",param_2);
  }
  return;
}


/* FUN_0048cc10 @ 0048cc10  kind=lib  attributed-by=lib-island  size=115 */

undefined4 * __cdecl
FUN_0048cc10(int param_1,undefined4 *param_2,size_t param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  uVar1 = *param_4;
  puVar3 = param_2;
  if ((uVar1 & uVar1 - 1) == 0) {
    iVar2 = 1;
    if (uVar1 != 0) {
      iVar2 = uVar1 * 2;
    }
    puVar3 = FUN_00494cf0(param_1,param_2,iVar2 * param_3);
    if (puVar3 == (undefined4 *)0x0) {
      *param_5 = 0xffffffff;
      return param_2;
    }
  }
  memset((undefined4 *)(uVar1 * param_3 + (int)puVar3),0,param_3);
  *param_5 = uVar1;
  *param_4 = *param_4 + 1;
  return puVar3;
}


/* FUN_0048cc90 @ 0048cc90  kind=lib  attributed-by=lib-island  size=1578 */

undefined4 __cdecl FUN_0048cc90(byte *param_1,double *param_2,uint param_3,char param_4)

{
  bool bVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  double dVar12;
  longlong lVar13;
  undefined8 local_2c;
  uint local_24;
  int local_20;
  int local_14;
  int local_10;
  uint local_8;
  
  pbVar7 = param_1 + param_3;
  iVar9 = 0;
  dVar12 = 0.0;
  iVar5 = (param_4 != '\x01') + 1;
  local_20 = 1;
  local_2c = 0;
  local_14 = 0;
  local_24 = 1;
  bVar1 = true;
  local_10 = 0;
  *param_2 = 0.0;
  if (param_4 == '\x03') {
    param_1 = param_1 + 1;
  }
  while( true ) {
    if (pbVar7 <= param_1) {
      return 0;
    }
    if (((&DAT_00569720)[*param_1] & 1) == 0) break;
    param_1 = param_1 + iVar5;
  }
  if (pbVar7 <= param_1) {
    return 0;
  }
  if (*param_1 == 0x2d) {
    local_20 = -1;
LAB_0048cd28:
    param_1 = param_1 + iVar5;
  }
  else if (*param_1 == 0x2b) goto LAB_0048cd28;
  local_2c._0_4_ = 0;
  local_2c._4_4_ = 0;
  for (; param_1 < pbVar7; param_1 = param_1 + iVar5) {
    if (*param_1 != 0x30) {
      param_3 = local_2c._4_4_;
      local_8 = (uint)local_2c;
      if (param_1 < pbVar7) goto LAB_0048cd80;
      break;
    }
    local_10 = local_10 + 1;
  }
  local_8 = 0;
  param_3 = 0;
  goto LAB_0048cd52;
  while( true ) {
    uVar10 = local_8 >> 0x1e;
    uVar6 = (int)(char)*param_1 - 0x30;
    bVar11 = CARRY4(local_8,local_8 * 4);
    uVar2 = local_8 * 5;
    uVar8 = local_8 * 10;
    local_8 = uVar6 + uVar8;
    param_3 = ((int)uVar6 >> 0x1f) +
              ((param_3 + (param_3 << 2 | uVar10) + (uint)bVar11) * 2 | uVar2 >> 0x1f) +
              (uint)CARRY4(uVar6,uVar8);
    local_10 = local_10 + 1;
    param_1 = param_1 + iVar5;
    local_2c = CONCAT44(param_3,local_8);
    if (pbVar7 <= param_1) break;
LAB_0048cd80:
    if (((((&DAT_00569720)[*param_1] & 4) == 0) || (0xccccccc < (int)param_3)) ||
       ((0xccccccb < (int)param_3 && (0xccccccca < local_8)))) {
      if (param_1 < pbVar7) goto LAB_0048ce00;
      break;
    }
  }
  goto LAB_0048cd52;
  while( true ) {
    local_10 = local_10 + 1;
    local_14 = local_14 + 1;
    param_1 = param_1 + iVar5;
    if (pbVar7 <= param_1) break;
LAB_0048ce00:
    if (((&DAT_00569720)[*param_1] & 4) == 0) {
      if (param_1 < pbVar7) {
        if (*param_1 != 0x2e) goto LAB_0048cee1;
        param_1 = param_1 + iVar5;
        if (param_1 < pbVar7) goto LAB_0048ce42;
      }
      break;
    }
  }
  goto LAB_0048cd52;
  while( true ) {
    uVar10 = local_8 >> 0x1e;
    uVar6 = (int)(char)*param_1 - 0x30;
    bVar11 = CARRY4(local_8,local_8 * 4);
    uVar2 = local_8 * 5;
    uVar8 = local_8 * 10;
    local_8 = uVar6 + uVar8;
    param_3 = ((int)uVar6 >> 0x1f) +
              ((param_3 + (param_3 << 2 | uVar10) + (uint)bVar11) * 2 | uVar2 >> 0x1f) +
              (uint)CARRY4(uVar6,uVar8);
    local_10 = local_10 + 1;
    local_14 = local_14 + -1;
    param_1 = param_1 + iVar5;
    local_2c = CONCAT44(param_3,local_8);
    if (pbVar7 <= param_1) break;
LAB_0048ce42:
    if (((((&DAT_00569720)[*param_1] & 4) == 0) || (0xccccccc < (int)param_3)) ||
       ((0xccccccb < (int)param_3 && (0xccccccca < local_8)))) {
      if (param_1 < pbVar7) goto LAB_0048cec0;
      break;
    }
  }
  goto LAB_0048cd52;
LAB_0048cee1:
  iVar9 = 0;
  if (param_1 < pbVar7) {
    if ((*param_1 == 0x65) || (*param_1 == 0x45)) {
      param_1 = param_1 + iVar5;
      bVar1 = false;
      if (pbVar7 <= param_1) goto LAB_0048cd52;
      if (*param_1 == 0x2d) {
        local_24 = -1;
LAB_0048cf21:
        param_1 = param_1 + iVar5;
      }
      else if (*param_1 == 0x2b) goto LAB_0048cf21;
      while ((param_1 < pbVar7 && (((&DAT_00569720)[*param_1] & 4) != 0))) {
        if (iVar9 < 10000) {
          iVar9 = (int)(char)*param_1 + iVar9 * 10 + -0x30;
        }
        else {
          iVar9 = 10000;
        }
        param_1 = param_1 + iVar5;
        bVar1 = true;
      }
    }
    if ((local_10 != 0) && (bVar1)) {
      while ((param_1 < pbVar7 && (((&DAT_00569720)[*param_1] & 1) != 0))) {
        param_1 = param_1 + iVar5;
      }
    }
  }
  goto LAB_0048cd52;
  while( true ) {
    local_10 = local_10 + 1;
    param_1 = param_1 + iVar5;
    if (pbVar7 <= param_1) break;
LAB_0048cec0:
    if (((&DAT_00569720)[*param_1] & 4) == 0) goto LAB_0048cee1;
  }
LAB_0048cd52:
  lVar4 = CONCAT44(param_3,local_8);
  local_14 = iVar9 * local_24 + local_14;
  if (local_14 < 0) {
    iVar9 = -1;
    local_14 = -local_14;
  }
  else {
    iVar9 = 1;
  }
  if (local_8 == 0 && param_3 == 0) {
    if ((local_20 < 0) && (local_10 != 0)) {
      dVar12 = -0.0;
    }
  }
  else {
    if (iVar9 < 1) {
      lVar13 = __alldiv(local_8,param_3,10,0);
      uVar10 = (uint)(lVar13 * 5);
      if (local_8 + uVar10 * -2 == 0 &&
          param_3 - ((int)((ulonglong)(lVar13 * 5) >> 0x20) << 1 | uVar10 >> 0x1f) ==
          (uint)(local_8 < uVar10 * 2)) {
        do {
          lVar3 = lVar13;
          local_24 = (uint)((ulonglong)lVar3 >> 0x20);
          uVar10 = (uint)lVar3;
          if (local_14 < 1) break;
          local_14 = local_14 + -1;
          lVar13 = __alldiv(uVar10,local_24,10,0);
          uVar8 = (uint)(lVar13 * 5);
          local_2c = lVar3;
          lVar4 = lVar3;
        } while (uVar10 + uVar8 * -2 == 0 &&
                 local_24 - ((int)((ulonglong)(lVar13 * 5) >> 0x20) << 1 | uVar8 >> 0x1f) ==
                 (uint)(uVar10 < uVar8 * 2));
      }
    }
    else {
      lVar4 = CONCAT44(param_3,local_8);
      if (((int)param_3 < 0xccccccd) &&
         (((int)param_3 < 0xccccccc || (lVar4 = CONCAT44(param_3,local_8), local_8 < 0xcccccccc))))
      {
        while (lVar4 = CONCAT44(param_3,local_8), 0 < local_14) {
          local_14 = local_14 + -1;
          param_3 = (param_3 + (param_3 << 2 | local_8 >> 0x1e) + (uint)CARRY4(local_8,local_8 * 4))
                    * 2 | local_8 * 5 >> 0x1f;
          local_8 = local_8 * 10;
          local_2c = CONCAT44(param_3,local_8);
          if ((0xccccccb < (int)param_3) &&
             ((lVar4 = local_2c, 0xccccccc < (int)param_3 || (0xcccccccb < local_8)))) break;
        }
      }
    }
    if (local_20 < 0) {
      local_2c = CONCAT44(-((int)((ulonglong)lVar4 >> 0x20) + (uint)((int)lVar4 != 0)),-(int)lVar4);
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
            iVar5 = (local_14 - 1U) / 0x16 + 1;
            do {
              dVar12 = dVar12 * 1e+22;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
          if (iVar9 < 0) {
            dVar12 = (double)local_2c / dVar12;
          }
          else {
            dVar12 = (double)local_2c * dVar12;
          }
          goto LAB_0048d294;
        }
      }
      else if (local_14 < 0x156) {
        if (local_14 != (local_14 / 0x134) * 0x134) {
          do {
            local_14 = local_14 + -1;
            dVar12 = dVar12 * 10.0;
          } while (local_14 != (local_14 / 0x134) * 0x134);
        }
        if (iVar9 < 0) {
          dVar12 = ((double)local_2c / dVar12) / 1e+308;
        }
        else {
          dVar12 = (double)local_2c * dVar12 * 1e+308;
        }
        goto LAB_0048d294;
      }
      if (iVar9 < 0) {
        dVar12 = (double)local_2c * 0.0;
      }
      else {
        dVar12 = (double)local_2c * INFINITY;
      }
    }
  }
LAB_0048d294:
  *param_2 = dVar12;
  if (((pbVar7 <= param_1) && (0 < local_10)) && (bVar1)) {
    return 1;
  }
  return 0;
}


/* FUN_0048d2d0 @ 0048d2d0  kind=lib  attributed-by=lib-island  size=44 */

uint __cdecl FUN_0048d2d0(char *param_1)

{
  uint local_8;
  
  local_8 = 0;
  if (param_1 != (char *)0x0) {
    FUN_0049ca30(param_1,&local_8);
    return local_8;
  }
  return 0;
}


/* FUN_0048d300 @ 0048d300  kind=lib  attributed-by=lib-island  size=423 */

undefined4 __cdecl FUN_0048d300(byte *param_1,uint *param_2,int param_3,char param_4)

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
    if (((&DAT_00569720)[*param_1] & 1) == 0) {
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
      goto LAB_0048d423;
    }
  }
  if (bVar6) {
    bVar16 = local_1c != 0;
    local_1c = -local_1c;
    uStack_18 = -(uStack_18 + bVar16);
  }
  param_2[1] = uStack_18;
  *param_2 = local_1c;
LAB_0048d423:
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
      pcVar1 = &DAT_0056dde4 + iVar14;
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


/* FUN_0048d4b0 @ 0048d4b0  kind=lib  attributed-by=lib-island  size=135 */

int __cdecl
FUN_0048d4b0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
      FUN_004962b0(param_1,(byte *)"not authorized");
      param_1[3] = 0x17;
      return 1;
    }
    if ((iVar1 != 0) && (iVar1 != 2)) {
      iVar1 = 1;
      FUN_004bcd90(param_1);
    }
    return iVar1;
  }
  return 0;
}


/* FUN_0048d540 @ 0048d540  kind=lib  attributed-by=lib-island  size=222 */

void __cdecl FUN_0048d540(int *param_1,char *param_2,int param_3,short *param_4)

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
      iVar3 = FUN_0048d620(param_1,*puVar5,pcVar2,iVar4);
      if (iVar3 == 2) {
        *param_2 = 'b';
      }
    }
  }
  return;
}


/* FUN_0048d620 @ 0048d620  kind=lib  attributed-by=lib-island  size=196 */

int __cdecl FUN_0048d620(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = (**(code **)(iVar1 + 0x10c))
                    (*(undefined4 *)(iVar1 + 0x110),0x14,param_2,param_3,
                     *(undefined4 *)(*(int *)(iVar1 + 0x10) + param_4 * 0x10),param_1[0x81]);
  if (iVar2 != 1) {
    if ((iVar2 != 2) && (iVar2 != 0)) {
      FUN_004962b0(param_1,(byte *)"authorizer malfunction");
      param_1[3] = 1;
    }
    return iVar2;
  }
  if ((*(int *)(iVar1 + 0x14) < 3) && (param_4 == 0)) {
    FUN_004962b0(param_1,(byte *)"access to %s.%s is prohibited");
    param_1[3] = 0x17;
    return 1;
  }
  FUN_004962b0(param_1,(byte *)"access to %s.%s.%s is prohibited");
  param_1[3] = 0x17;
  return 1;
}


/* FUN_0048d7c0 @ 0048d7c0  kind=lib  attributed-by=lib-island  size=1018 */

void __cdecl FUN_0048d7c0(int *param_1)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  void *extraout_EDX;
  
  iVar3 = *param_1;
  piVar4 = (int *)param_1[2];
  for (puVar5 = (undefined4 *)param_1[0x6b]; puVar5 != (undefined4 *)0x0;
      puVar5 = (undefined4 *)*puVar5) {
    iVar6 = puVar5[3];
    FUN_004a0f40(param_1,0,puVar5[2],
                 *(int **)(*(int *)(*(int *)(iVar3 + 0x10) + 0xc + puVar5[2] * 0x10) + 0x48),0x27);
    iVar13 = piVar4[7];
    if ((iVar13 < piVar4[8]) || (iVar9 = FUN_0047de10(piVar4), iVar9 == 0)) {
      piVar4[7] = piVar4[7] + 1;
      puVar1 = (undefined2 *)(piVar4[1] + iVar13 * 0x14);
      *puVar1 = 10;
      *(undefined1 *)((int)puVar1 + 3) = 0;
      *(undefined4 *)(puVar1 + 2) = 0;
      *(int *)(puVar1 + 4) = iVar6;
      *(int *)(puVar1 + 6) = iVar6 + 1;
      *(undefined4 *)(puVar1 + 8) = 0;
    }
    iVar13 = piVar4[7];
    piVar7 = *(int **)puVar5[1];
    if ((iVar13 < piVar4[8]) || (iVar9 = FUN_0047de10(piVar4), iVar9 == 0)) {
      piVar4[7] = piVar4[7] + 1;
      puVar1 = (undefined2 *)(piVar4[1] + iVar13 * 0x14);
      *(int *)(puVar1 + 4) = iVar6 + -1;
      *puVar1 = 0x5e;
      *(undefined1 *)((int)puVar1 + 3) = 0;
      *(undefined4 *)(puVar1 + 2) = 0;
      *(undefined4 *)(puVar1 + 6) = 0;
      *(undefined4 *)(puVar1 + 8) = 0;
      iVar9 = iVar13;
    }
    else {
      iVar9 = 1;
    }
    iVar12 = piVar4[1];
    iVar8 = *piVar4;
    if ((iVar12 == 0) || (*(char *)(iVar8 + 0x38) != '\0')) {
      FUN_0047bc80(iVar8,0,piVar7);
    }
    else {
      if (iVar9 < 0) {
        iVar9 = piVar4[7] + -1;
      }
      iVar2 = iVar12 + iVar9 * 0x14;
      FUN_0047bc80(iVar8,(int)*(char *)(iVar2 + 1),*(int **)(iVar12 + 0x10 + iVar9 * 0x14));
      *(undefined4 *)(iVar2 + 0x10) = 0;
      if (piVar7 == (int *)0x0) {
        *(undefined4 *)(iVar2 + 0x10) = 0;
        *(undefined1 *)(iVar2 + 1) = 0;
      }
      else {
        uVar10 = FUN_004aa9b0((char *)piVar7);
        puVar11 = FUN_00494e00(*piVar4,extraout_EDX,uVar10);
        *(undefined4 **)(iVar2 + 0x10) = puVar11;
        *(undefined1 *)(iVar2 + 1) = 0xff;
      }
    }
    iVar9 = piVar4[7];
    if ((iVar9 < piVar4[8]) || (iVar12 = FUN_0047de10(piVar4), iVar12 == 0)) {
      piVar4[7] = piVar4[7] + 1;
      puVar1 = (undefined2 *)(piVar4[1] + iVar9 * 0x14);
      *puVar1 = 0x48;
      *(undefined1 *)((int)puVar1 + 3) = 0;
      *(undefined4 *)(puVar1 + 2) = 0;
      *(int *)(puVar1 + 4) = iVar13 + 9;
      *(undefined4 *)(puVar1 + 6) = 0;
      *(undefined4 *)(puVar1 + 8) = 0;
    }
    iVar9 = piVar4[7];
    if ((iVar9 < piVar4[8]) || (iVar12 = FUN_0047de10(piVar4), iVar12 == 0)) {
      iVar12 = piVar4[1];
      piVar4[7] = piVar4[7] + 1;
      *(undefined2 *)(iVar12 + iVar9 * 0x14) = 0x1d;
      *(undefined1 *)(iVar12 + 3 + iVar9 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 4 + iVar9 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 8 + iVar9 * 0x14) = 0;
      *(int *)(iVar12 + 0xc + iVar9 * 0x14) = iVar6;
      *(undefined4 *)(iVar12 + 0x10 + iVar9 * 0x14) = 0;
    }
    iVar9 = piVar4[7];
    if ((iVar9 < piVar4[8]) || (iVar12 = FUN_0047de10(piVar4), iVar12 == 0)) {
      piVar4[7] = piVar4[7] + 1;
      puVar1 = (undefined2 *)(piVar4[1] + iVar9 * 0x14);
      *(int *)(puVar1 + 2) = iVar6 + -1;
      *puVar1 = 0x4b;
      *(undefined1 *)((int)puVar1 + 3) = 0;
      *(int *)(puVar1 + 4) = iVar13 + 7;
      *(int *)(puVar1 + 6) = iVar6;
      *(undefined4 *)(puVar1 + 8) = 0;
    }
    if (piVar4[1] != 0) {
      *(undefined1 *)(piVar4[1] + -0x11 + piVar4[7] * 0x14) = 8;
    }
    iVar9 = piVar4[7];
    if ((iVar9 < piVar4[8]) || (iVar12 = FUN_0047de10(piVar4), iVar12 == 0)) {
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
    if ((iVar9 < piVar4[8]) || (iVar12 = FUN_0047de10(piVar4), iVar12 == 0)) {
      iVar12 = piVar4[1];
      piVar4[7] = piVar4[7] + 1;
      *(undefined2 *)(iVar12 + iVar9 * 0x14) = 0x1d;
      *(undefined1 *)(iVar12 + 3 + iVar9 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 4 + iVar9 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 8 + iVar9 * 0x14) = 1;
      *(int *)(iVar12 + 0xc + iVar9 * 0x14) = iVar6;
      *(undefined4 *)(iVar12 + 0x10 + iVar9 * 0x14) = 0;
    }
    iVar9 = piVar4[7];
    if ((iVar9 < piVar4[8]) || (iVar12 = FUN_0047de10(piVar4), iVar12 == 0)) {
      piVar4[7] = piVar4[7] + 1;
      puVar1 = (undefined2 *)(piVar4[1] + iVar9 * 0x14);
      *puVar1 = 1;
      *(undefined1 *)((int)puVar1 + 3) = 0;
      *(undefined4 *)(puVar1 + 2) = 0;
      *(int *)(puVar1 + 4) = iVar13 + 9;
      *(undefined4 *)(puVar1 + 6) = 0;
      *(undefined4 *)(puVar1 + 8) = 0;
    }
    iVar9 = piVar4[7];
    if ((iVar9 < piVar4[8]) || (iVar12 = FUN_0047de10(piVar4), iVar12 == 0)) {
      piVar4[7] = piVar4[7] + 1;
      puVar1 = (undefined2 *)(piVar4[1] + iVar9 * 0x14);
      *puVar1 = 0x5f;
      *(undefined1 *)((int)puVar1 + 3) = 0;
      *(undefined4 *)(puVar1 + 2) = 0;
      *(int *)(puVar1 + 4) = iVar13 + 2;
      *(undefined4 *)(puVar1 + 6) = 0;
      *(undefined4 *)(puVar1 + 8) = 0;
    }
    iVar13 = piVar4[7];
    if ((iVar13 < piVar4[8]) || (iVar9 = FUN_0047de10(piVar4), iVar9 == 0)) {
      iVar9 = piVar4[1];
      piVar4[7] = piVar4[7] + 1;
      *(undefined2 *)(iVar9 + iVar13 * 0x14) = 7;
      *(undefined1 *)(iVar9 + 3 + iVar13 * 0x14) = 0;
      *(undefined4 *)(iVar9 + 4 + iVar13 * 0x14) = 0;
      *(int *)(iVar9 + 8 + iVar13 * 0x14) = iVar6;
      *(undefined4 *)(iVar9 + 0xc + iVar13 * 0x14) = 0;
      *(undefined4 *)(iVar9 + 0x10 + iVar13 * 0x14) = 0;
    }
    iVar6 = piVar4[7];
    if ((iVar6 < piVar4[8]) || (iVar13 = FUN_0047de10(piVar4), iVar13 == 0)) {
      iVar13 = piVar4[1];
      piVar4[7] = piVar4[7] + 1;
      *(undefined2 *)(iVar13 + iVar6 * 0x14) = 0x2d;
      *(undefined1 *)(iVar13 + 3 + iVar6 * 0x14) = 0;
      *(undefined4 *)(iVar13 + 4 + iVar6 * 0x14) = 0;
      *(undefined4 *)(iVar13 + 8 + iVar6 * 0x14) = 0;
      *(undefined4 *)(iVar13 + 0xc + iVar6 * 0x14) = 0;
      *(undefined4 *)(iVar13 + 0x10 + iVar6 * 0x14) = 0;
    }
  }
  return;
}


/* FUN_0048dbc0 @ 0048dbc0  kind=lib  attributed-by=lib-island  size=1148 */

void __cdecl FUN_0048dbc0(int *param_1)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
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
  piVar4 = (int *)param_1[2];
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
    FUN_004a0f40(param_1,0,puVar2[2],*(int **)(*(int *)(iVar6 * 0x10 + iVar7 + 0xc) + 0x48),0x28);
    local_14 = piVar4[7];
    if (((int)local_14 < piVar4[8]) || (iVar6 = FUN_0047de10(piVar4), iVar6 == 0)) {
      piVar4[7] = piVar4[7] + 1;
      puVar1 = (undefined2 *)(piVar4[1] + local_14 * 0x14);
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
    uVar10 = piVar4[7];
    if (((int)uVar10 < piVar4[8]) || (iVar6 = FUN_0047de10(piVar4), iVar6 == 0)) {
      iVar6 = piVar4[1];
      piVar4[7] = piVar4[7] + 1;
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
    local_c = piVar4[7];
    if ((local_c < piVar4[8]) || (iVar6 = FUN_0047de10(piVar4), iVar6 == 0)) {
      piVar4[7] = piVar4[7] + 1;
      iVar6 = piVar4[1];
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
    local_10 = piVar4[7];
    if (((int)local_10 < piVar4[8]) || (iVar6 = FUN_0047de10(piVar4), iVar6 == 0)) {
      piVar4[7] = piVar4[7] + 1;
      puVar1 = (undefined2 *)(piVar4[1] + local_10 * 0x14);
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
    iVar6 = piVar4[7];
    if ((iVar6 < piVar4[8]) || (iVar7 = FUN_0047de10(piVar4), iVar7 == 0)) {
      piVar4[7] = piVar4[7] + 1;
      iVar7 = piVar4[1];
      *(undefined2 *)(iVar7 + iVar6 * 0x14) = 0x5f;
      *(undefined1 *)(iVar7 + 3 + iVar6 * 0x14) = 0;
      *(undefined4 *)(iVar7 + 4 + iVar6 * 0x14) = 0;
      *(int *)(iVar7 + 8 + iVar6 * 0x14) = local_c;
      *(undefined4 *)(iVar7 + 0xc + iVar6 * 0x14) = 0;
      *(undefined4 *)(iVar7 + 0x10 + iVar6 * 0x14) = 0;
    }
    if ((-1 < (int)uVar10) && (uVar10 < (uint)piVar4[7])) {
      *(int *)(piVar4[1] + 8 + uVar10 * 0x14) = piVar4[7];
    }
    iVar6 = piVar4[7];
    if ((iVar6 < piVar4[8]) || (iVar7 = FUN_0047de10(piVar4), iVar7 == 0)) {
      piVar4[7] = piVar4[7] + 1;
      puVar1 = (undefined2 *)(piVar4[1] + iVar6 * 0x14);
      *puVar1 = 0x38;
      *(undefined1 *)((int)puVar1 + 3) = 0;
      *(undefined4 *)(puVar1 + 2) = 0;
      *(int *)(puVar1 + 4) = iVar8 + 1;
      *(undefined4 *)(puVar1 + 6) = 0;
      *(undefined4 *)(puVar1 + 8) = 0;
    }
    uVar10 = piVar4[7];
    if (((int)uVar10 < piVar4[8]) || (iVar6 = FUN_0047de10(piVar4), iVar6 == 0)) {
      iVar6 = piVar4[1];
      piVar4[7] = piVar4[7] + 1;
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
    if ((-1 < (int)local_10) && (local_10 < (uint)piVar4[7])) {
      *(int *)(piVar4[1] + 8 + local_10 * 0x14) = piVar4[7];
    }
    iVar6 = piVar4[7];
    if ((iVar6 < piVar4[8]) || (iVar7 = FUN_0047de10(piVar4), iVar7 == 0)) {
      piVar4[7] = piVar4[7] + 1;
      iVar7 = piVar4[1];
      *(undefined2 *)(iVar7 + iVar6 * 0x14) = 0x41;
      iVar7 = iVar7 + iVar6 * 0x14;
      *(undefined1 *)(iVar7 + 3) = 0;
      *(undefined4 *)(iVar7 + 4) = 0;
      *(int *)(iVar7 + 8) = iVar8 + 1;
      *(undefined4 *)(iVar7 + 0xc) = 0;
      *(undefined4 *)(iVar7 + 0x10) = 0;
    }
    if ((-1 < (int)local_14) && (local_14 < (uint)piVar4[7])) {
      *(int *)(piVar4[1] + 8 + local_14 * 0x14) = piVar4[7];
    }
    if ((-1 < (int)uVar10) && (uVar10 < (uint)piVar4[7])) {
      *(int *)(piVar4[1] + 8 + uVar10 * 0x14) = piVar4[7];
    }
    iVar6 = piVar4[7];
    if ((iVar6 < piVar4[8]) || (iVar7 = FUN_0047de10(piVar4), iVar7 == 0)) {
      piVar4[7] = piVar4[7] + 1;
      puVar1 = (undefined2 *)(piVar4[1] + iVar6 * 0x14);
      *(int *)(puVar1 + 2) = iVar8 + -1;
      *puVar1 = 0x1f;
      *(undefined1 *)((int)puVar1 + 3) = 0;
      *(undefined4 *)(puVar1 + 4) = 2;
      *(int *)(puVar1 + 6) = local_8;
      *(undefined4 *)(puVar1 + 8) = 0;
    }
    iVar6 = piVar4[7];
    if ((iVar6 < piVar4[8]) || (iVar7 = FUN_0047de10(piVar4), iVar7 == 0)) {
      piVar4[7] = piVar4[7] + 1;
      puVar1 = (undefined2 *)(piVar4[1] + iVar6 * 0x14);
      *(int *)(puVar1 + 4) = local_8;
      *puVar1 = 0x39;
      *(undefined1 *)((int)puVar1 + 3) = 0;
      *(undefined4 *)(puVar1 + 2) = 0;
      *(int *)(puVar1 + 6) = iVar8 + 1;
      *(undefined4 *)(puVar1 + 8) = 0;
    }
    if (piVar4[1] != 0) {
      *(undefined1 *)(piVar4[1] + -0x11 + piVar4[7] * 0x14) = 8;
    }
    iVar6 = piVar4[7];
    if ((iVar6 < piVar4[8]) || (iVar8 = FUN_0047de10(piVar4), iVar8 == 0)) {
      iVar8 = piVar4[1];
      piVar4[7] = piVar4[7] + 1;
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
          goto LAB_0048e022;
        }
        iVar6 = iVar6 + 1;
        piVar9 = piVar9 + 6;
      } while (iVar6 < 10);
      param_1[*(byte *)((int)param_1 + 0x13) + 7] = local_8;
      *(char *)((int)param_1 + 0x13) = *(char *)((int)param_1 + 0x13) + '\x01';
    }
LAB_0048e022:
    puVar2 = (undefined4 *)*puVar2;
  } while( true );
}


/* FUN_0048e040 @ 0048e040  kind=lib  attributed-by=lib-island  size=110 */

void __cdecl FUN_0048e040(int *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  for (; param_1 != (int *)0x0; param_1 = (int *)param_1[0xb]) {
    iVar1 = param_1[7];
    if ((((iVar1 == 0) || (iVar1 == 5)) || (iVar1 == 6)) && (param_2 < (undefined4 *)param_1[4])) {
      if (*(int *)(*param_1 + 0xc) != 0) {
        (*DAT_00582b18)(*(int *)(*param_1 + 0xc));
      }
      uVar2 = FUN_0046e390((int)param_1,param_2,param_3);
      if (*(int *)(*param_1 + 0xc) != 0) {
        (*DAT_00582b20)(*(int *)(*param_1 + 0xc));
      }
      if (uVar2 != 0) {
        param_1[7] = uVar2;
      }
    }
  }
  return;
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


/* FUN_0048e5e0 @ 0048e5e0  kind=lib  attributed-by=lib-island  size=57 */

void __cdecl FUN_0048e5e0(int *param_1,byte param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = param_1;
  if ((int *)param_1[0x6c] != (int *)0x0) {
    piVar1 = (int *)param_1[0x6c];
  }
  FUN_00493400(param_1,param_3);
  piVar1[0x55] = piVar1[0x55] | 1 << ((byte)param_3 & 0x1f);
  *(byte *)((int)piVar1 + 0x17) = *(byte *)((int)piVar1 + 0x17) | param_2;
  return;
}


/* FUN_0048e620 @ 0048e620  kind=lib  attributed-by=lib-island  size=76 */

void __cdecl FUN_0048e620(int *param_1,char *param_2,char *param_3)

{
  uint uVar1;
  
  if ((*(ushort *)(param_2 + 2) & 0x100) != 0) {
    FUN_004984d0(param_1,param_2);
    return;
  }
  if (((param_3 == (char *)0x0) || ((*(ushort *)(param_3 + 2) & 0x100) == 0)) &&
     (uVar1 = FUN_004984d0(param_1,param_2), uVar1 != 0)) {
    return;
  }
  FUN_004984d0(param_1,param_3);
  return;
}


/* FUN_0048e8c0 @ 0048e8c0  kind=lib  attributed-by=lib-island  size=209 */

void __cdecl FUN_0048e8c0(uint *param_1,int param_2,uint *param_3)

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


/* FUN_0048e9a0 @ 0048e9a0  kind=lib  attributed-by=lib-island  size=187 */

void __cdecl FUN_0048e9a0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 8) != 0) {
      piVar1 = (int *)(param_1 + 0xc);
      iVar2 = 0x7d;
      do {
        FUN_0048e9a0(*piVar1);
        piVar1 = piVar1 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    if (DAT_00582ac8 == 0) {
      (*DAT_00582aec)(param_1);
    }
    else {
      if (DAT_00583f40 != 0) {
        (*DAT_00582b18)(DAT_00583f40);
      }
      iVar2 = (*DAT_00582af0._4_4_)(param_1);
      DAT_00583e18 = DAT_00583e18 - iVar2;
      if (DAT_00583e40 < DAT_00583e18) {
        DAT_00583e40 = DAT_00583e18;
      }
      DAT_00583e3c = DAT_00583e3c + -1;
      if (DAT_00583e64 < DAT_00583e3c) {
        DAT_00583e64 = DAT_00583e3c;
      }
      (*DAT_00582aec)(param_1);
      if (DAT_00583f40 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0048ea48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*DAT_00582b20)();
        return;
      }
    }
  }
  return;
}


/* FUN_0048ea60 @ 0048ea60  kind=lib  attributed-by=lib-island  size=468 */

uint __cdecl FUN_0048ea60(uint *param_1,uint param_2)

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
LAB_0048ec1c:
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
      if (DAT_00582ac8 == 0) {
        param_1 = (uint *)(*DAT_00582ae8)(0x200);
      }
      else {
        if (DAT_00583f40 != 0) {
          (*DAT_00582b18)(DAT_00583f40);
        }
        FUN_00480650(0x200,(int *)&param_1);
        if (DAT_00583f40 != 0) {
          (*DAT_00582b20)(DAT_00583f40);
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
  if (*puVar7 < 0xfa1) goto LAB_0048ec1c;
  uVar2 = param_2 % 0x7d;
  param_2 = param_2 + 1;
  uVar3 = puVar7[uVar2 + 3];
  if (uVar3 == 0) {
    uVar3 = puVar7[1];
    if (uVar3 < 0x7c) goto LAB_0048eb60;
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
    param_1 = (uint *)FUN_004a0350(500);
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
    uVar3 = FUN_0048ea60(puVar7,param_2);
    uVar2 = 0;
    puVar5 = param_1;
    do {
      if (puVar5[uVar2] != 0) {
        uVar4 = FUN_0048ea60(puVar7,puVar5[uVar2]);
        uVar3 = uVar3 | uVar4;
        puVar5 = param_1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x7d);
    FUN_00466dd0((int)puVar5);
    return uVar3;
  }
LAB_0048eb60:
  puVar7[1] = uVar3 + 1;
  puVar7[uVar2 + 3] = param_2;
  return 0;
}


/* FUN_0048ec40 @ 0048ec40  kind=lib  attributed-by=lib-island  size=185 */

bool __cdecl FUN_0048ec40(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 == (uint *)0x0) {
    return false;
  }
  if ((param_2 <= *param_1) && (param_2 != 0)) {
    uVar3 = param_2 - 1;
    uVar1 = param_1[2];
    while( true ) {
      if (uVar1 == 0) {
        if (*param_1 < 0xfa1) {
          return (*(byte *)((uVar3 >> 3) + 0xc + (int)param_1) & (byte)(1 << ((byte)uVar3 & 7))) !=
                 0;
        }
        uVar2 = uVar3 % 0x7d;
        uVar1 = param_1[uVar2 + 3];
        while( true ) {
          if (uVar1 == 0) {
            return false;
          }
          if (uVar1 == uVar3 + 1) break;
          uVar2 = (uVar2 + 1) % 0x7d;
          uVar1 = param_1[uVar2 + 3];
        }
        return true;
      }
      uVar1 = uVar3 / param_1[2];
      uVar3 = uVar3 % param_1[2];
      param_1 = (uint *)param_1[uVar1 + 3];
      if (param_1 == (uint *)0x0) break;
      uVar1 = param_1[2];
    }
  }
  return false;
}


/* FUN_0048ed00 @ 0048ed00  kind=lib  attributed-by=lib-island  size=73 */

undefined4 __cdecl FUN_0048ed00(undefined4 *param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)param_1[1];
  FUN_0048fbc0(param_1);
  uVar2 = FUN_004a2310(*piVar1,param_2);
  if (*(char *)((int)param_1 + 9) != '\0') {
    piVar1 = param_1 + 3;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      if (*(int *)(param_1[1] + 0x38) != 0) {
        (*DAT_00582b20)(*(int *)(param_1[1] + 0x38));
      }
      *(undefined1 *)((int)param_1 + 10) = 0;
    }
  }
  return uVar2;
}


/* FUN_0048ed50 @ 0048ed50  kind=lib  attributed-by=lib-island  size=640 */

uint __cdecl FUN_0048ed50(int *param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  uint *puVar3;
  int iVar4;
  code *pcVar5;
  byte bVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  
  piVar1 = (int *)param_1[1];
  uVar9 = 0;
  FUN_0048fbc0(param_1);
  if ((char)param_1[2] != '\x02') {
    if (((char)param_1[2] == '\x01') && (param_2 == 0)) goto LAB_0048efa4;
    if ((*(ushort *)((int)piVar1 + 0x16) & 1) == 0) {
      if ((param_2 == 0) || (*(char *)((int)piVar1 + 0x13) != '\x02')) goto LAB_0048eda2;
LAB_0048eda6:
      piVar7 = (int *)piVar1[0x13];
LAB_0048ee0b:
      if (*piVar7 != 0) {
        uVar9 = 0x106;
        goto LAB_0048efa4;
      }
    }
    else {
      if (param_2 != 0) {
        uVar9 = 8;
        goto LAB_0048efa4;
      }
LAB_0048eda2:
      if ((*(ushort *)((int)piVar1 + 0x16) & 0x40) != 0) goto LAB_0048eda6;
      if (1 < param_2) {
        for (piVar7 = (int *)piVar1[0x12]; piVar7 != (int *)0x0; piVar7 = (int *)piVar7[3]) {
          if ((int *)*piVar7 != param_1) {
            piVar7 = (int *)*piVar7;
            goto LAB_0048ee0b;
          }
        }
      }
    }
    uVar9 = FUN_00487510((int)param_1,1,'\x01');
    if (uVar9 == 0) {
      *(ushort *)((int)piVar1 + 0x16) = *(ushort *)((int)piVar1 + 0x16) & 0xfff7;
      if (piVar1[0xb] == 0) {
        *(ushort *)((int)piVar1 + 0x16) = *(ushort *)((int)piVar1 + 0x16) | 8;
      }
LAB_0048edf2:
      if (piVar1[3] == 0) goto code_r0x0048edf8;
      if (uVar9 != 0) goto LAB_0048ee6b;
      if (param_2 != 0) {
        if ((*(byte *)((int)piVar1 + 0x16) & 1) == 0) {
          uVar9 = FUN_004a1670(*piVar1,(uint)(1 < param_2),*(char *)(*param_1 + 0x37) == '\x02');
          if ((uVar9 == 0) && (uVar9 = FUN_00483380((int)piVar1), uVar9 == 0)) goto LAB_0048eead;
        }
        else {
          uVar9 = 8;
        }
        goto LAB_0048ee6b;
      }
      goto LAB_0048eead;
    }
    goto LAB_0048efa4;
  }
  goto LAB_0048ef8c;
code_r0x0048edf8:
  uVar9 = FUN_0047fc00(piVar1);
  if (uVar9 != 0) {
LAB_0048ee6b:
    if ((*(char *)((int)piVar1 + 0x13) == '\0') && (piVar1[3] != 0)) {
      puVar2 = *(undefined4 **)(piVar1[3] + 0x44);
      if (puVar2 != (undefined4 *)0x0) {
        puVar3 = (uint *)puVar2[4];
        FUN_004a3a80(puVar2);
        if (*(int *)(puVar3[0x2d] + 0xc) == 0) {
          FUN_00484370(puVar3);
        }
      }
      piVar1[3] = 0;
    }
LAB_0048eead:
    if (((char)uVar9 != '\x05') || (*(char *)((int)piVar1 + 0x13) != '\0')) goto LAB_0048eef2;
    iVar4 = piVar1[1];
    if (((undefined4 *)(iVar4 + 0x1ac) == (undefined4 *)0x0) ||
       ((pcVar5 = *(code **)(iVar4 + 0x1ac), pcVar5 == (code *)0x0 || (*(int *)(iVar4 + 0x1b4) < 0))
       )) goto LAB_0048eef2;
    iVar8 = (*pcVar5)(*(undefined4 *)(iVar4 + 0x1b0),*(int *)(iVar4 + 0x1b4));
    if (iVar8 == 0) goto LAB_0048eee8;
    *(int *)(iVar4 + 0x1b4) = *(int *)(iVar4 + 0x1b4) + 1;
  }
  goto LAB_0048edf2;
LAB_0048eee8:
  *(undefined4 *)(iVar4 + 0x1b4) = 0xffffffff;
LAB_0048eef2:
  if (uVar9 != 0) goto LAB_0048efa4;
  if (((char)param_1[2] == '\0') &&
     (piVar1[10] = piVar1[10] + 1, *(char *)((int)param_1 + 9) != '\0')) {
    *(undefined1 *)(param_1 + 9) = 1;
    param_1[10] = piVar1[0x12];
    piVar1[0x12] = (int)(param_1 + 7);
  }
  bVar6 = (param_2 != 0) + 1;
  *(byte *)(param_1 + 2) = bVar6;
  if (*(byte *)((int)piVar1 + 0x13) < bVar6) {
    *(byte *)((int)piVar1 + 0x13) = bVar6;
  }
  if (param_2 == 0) goto LAB_0048efa4;
  iVar4 = piVar1[3];
  *(ushort *)((int)piVar1 + 0x16) = *(ushort *)((int)piVar1 + 0x16) & 0xffdf;
  piVar1[0x13] = (int)param_1;
  if (1 < param_2) {
    *(ushort *)((int)piVar1 + 0x16) = *(ushort *)((int)piVar1 + 0x16) | 0x20;
  }
  iVar8 = FUN_0049c920((undefined1 *)(*(int *)(iVar4 + 0x38) + 0x1c));
  if (piVar1[0xb] != iVar8) {
    uVar9 = FUN_004a2c80(*(undefined4 **)(iVar4 + 0x44));
    if (uVar9 != 0) goto LAB_0048efa4;
    FUN_004a5f90((undefined1 *)(*(int *)(iVar4 + 0x38) + 0x1c),piVar1[0xb]);
  }
LAB_0048ef8c:
  if (param_2 != 0) {
    uVar9 = FUN_004a2310(*piVar1,*(int *)(*param_1 + 0x1e0));
  }
LAB_0048efa4:
  if (*(char *)((int)param_1 + 9) != '\0') {
    piVar1 = param_1 + 3;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      if (*(int *)(param_1[1] + 0x38) != 0) {
        (*DAT_00582b20)(*(int *)(param_1[1] + 0x38));
      }
      *(undefined1 *)((int)param_1 + 10) = 0;
    }
  }
  return uVar9;
}


/* FUN_0048efd0 @ 0048efd0  kind=lib  attributed-by=lib-island  size=32 */

void __cdecl FUN_0048efd0(int param_1)

{
  FUN_00466dd0(*(int *)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x5b) = 0;
  return;
}


/* FUN_0048eff0 @ 0048eff0  kind=lib  attributed-by=lib-island  size=126 */

uint __cdecl FUN_0048eff0(undefined4 *param_1,uint param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  piVar1 = (int *)param_1[1];
  FUN_0048fbc0(param_1);
  uVar3 = FUN_00489bc0((int)piVar1,param_2,0);
  if (uVar3 == 0) {
    for (iVar2 = *(int *)(param_1[1] + 8); iVar2 != 0; iVar2 = *(int *)(iVar2 + 8)) {
      if (*(char *)(iVar2 + 0x5c) != '\0') {
        *(undefined1 *)(iVar2 + 0x5b) = 0;
      }
    }
    uVar3 = FUN_00472b70(piVar1,param_2,0,param_3);
  }
  if (*(char *)((int)param_1 + 9) != '\0') {
    piVar1 = param_1 + 3;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      if (*(int *)(param_1[1] + 0x38) != 0) {
        (*DAT_00582b20)(*(int *)(param_1[1] + 0x38));
      }
      *(undefined1 *)((int)param_1 + 10) = 0;
    }
  }
  return uVar3;
}


/* FUN_0048f070 @ 0048f070  kind=lib  attributed-by=lib-island  size=223 */

undefined4 __cdecl FUN_0048f070(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  puVar1 = (undefined4 *)param_1[1];
  FUN_0048fbc0(param_1);
  piVar2 = (int *)puVar1[2];
  while (piVar3 = piVar2, piVar3 != (int *)0x0) {
    piVar2 = (int *)piVar3[2];
    if ((int *)*piVar3 == param_1) {
      FUN_0048f150(piVar3);
    }
  }
  FUN_004916b0(param_1,0);
  if (*(char *)((int)param_1 + 9) != '\0') {
    piVar2 = param_1 + 3;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      if (*(int *)(param_1[1] + 0x38) != 0) {
        (*DAT_00582b20)(*(int *)(param_1[1] + 0x38));
      }
      *(undefined1 *)((int)param_1 + 10) = 0;
    }
    if ((*(char *)((int)param_1 + 9) != '\0') && (iVar4 = FUN_00488510((int)puVar1), iVar4 == 0))
    goto LAB_0048f125;
  }
  FUN_004a17a0((uint *)*puVar1);
  if (((code *)puVar1[0xd] != (code *)0x0) && (puVar1[0xc] != 0)) {
    (*(code *)puVar1[0xd])(puVar1[0xc]);
  }
  FUN_00466dd0(puVar1[0xc]);
  FUN_00486af0((undefined4 *)puVar1[0x14]);
  puVar1[0x14] = 0;
  FUN_00466dd0((int)puVar1);
LAB_0048f125:
  if (param_1[6] != 0) {
    *(int *)(param_1[6] + 0x14) = param_1[5];
  }
  if (param_1[5] != 0) {
    *(int *)(param_1[5] + 0x18) = param_1[6];
  }
  FUN_00466dd0((int)param_1);
  return 0;
}


/* FUN_0048f150 @ 0048f150  kind=lib  attributed-by=lib-island  size=307 */

undefined4 __cdecl FUN_0048f150(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint *puVar4;
  int iVar5;
  int *piVar6;
  
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = param_1[1];
    FUN_0048fbc0(puVar1);
    FUN_00466dd0(param_1[0x14]);
    param_1[0x14] = 0;
    *(undefined1 *)((int)param_1 + 0x5b) = 0;
    if (param_1[3] == 0) {
      *(undefined4 *)(iVar2 + 8) = param_1[2];
    }
    else {
      *(undefined4 *)(param_1[3] + 8) = param_1[2];
    }
    if (param_1[2] != 0) {
      *(undefined4 *)(param_1[2] + 0xc) = param_1[3];
    }
    if (*(ushort *)((int)param_1 + 0x5e) < 0x8000) {
      piVar6 = param_1 + 0x22;
      iVar5 = 0;
      do {
        if ((*piVar6 != 0) &&
           (puVar3 = *(undefined4 **)(*piVar6 + 0x44), puVar3 != (undefined4 *)0x0)) {
          puVar4 = (uint *)puVar3[4];
          FUN_004a3a80(puVar3);
          if (*(int *)(puVar4[0x2d] + 0xc) == 0) {
            FUN_00484370(puVar4);
          }
        }
        iVar5 = iVar5 + 1;
        piVar6 = piVar6 + 1;
      } while (iVar5 <= *(short *)((int)param_1 + 0x5e));
    }
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
    FUN_00466dd0(param_1[5]);
    param_1[5] = 0;
    if (*(char *)((int)puVar1 + 9) != '\0') {
      piVar6 = puVar1 + 3;
      *piVar6 = *piVar6 + -1;
      if (*piVar6 == 0) {
        if (*(int *)(puVar1[1] + 0x38) != 0) {
          (*DAT_00582b20)(*(int *)(puVar1[1] + 0x38));
        }
        *(undefined1 *)((int)puVar1 + 10) = 0;
      }
    }
  }
  return 0;
}


/* FUN_0048f290 @ 0048f290  kind=lib  attributed-by=lib-island  size=84 */

uint __cdecl FUN_0048f290(int *param_1)

{
  int *piVar1;
  uint uVar2;
  
  FUN_0048fbc0(param_1);
  uVar2 = FUN_0048f2f0(param_1,(char *)0x0);
  if (uVar2 == 0) {
    uVar2 = FUN_0048f390(param_1,0);
  }
  if (*(char *)((int)param_1 + 9) != '\0') {
    piVar1 = param_1 + 3;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      if (*(int *)(param_1[1] + 0x38) != 0) {
        (*DAT_00582b20)(*(int *)(param_1[1] + 0x38));
      }
      *(undefined1 *)((int)param_1 + 10) = 0;
    }
  }
  return uVar2;
}


/* FUN_0048f2f0 @ 0048f2f0  kind=lib  attributed-by=lib-island  size=151 */

uint __cdecl FUN_0048f2f0(undefined4 *param_1,char *param_2)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(char *)(param_1 + 2) == '\x02') {
    piVar1 = (int *)param_1[1];
    FUN_0048fbc0(param_1);
    if (*(char *)((int)piVar1 + 0x11) != '\0') {
      uVar2 = FUN_0046e160(piVar1);
      if (uVar2 != 0) {
        if (*(char *)((int)param_1 + 9) != '\0') {
          piVar1 = param_1 + 3;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            if (*(int *)(param_1[1] + 0x38) != 0) {
              (*DAT_00582b20)(*(int *)(param_1[1] + 0x38));
            }
            *(undefined1 *)((int)param_1 + 10) = 0;
          }
        }
        return uVar2;
      }
    }
    uVar2 = FUN_004a19a0((uint *)*piVar1,param_2,0);
    if (*(char *)((int)param_1 + 9) != '\0') {
      piVar1 = param_1 + 3;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        if (*(int *)(param_1[1] + 0x38) != 0) {
          (*DAT_00582b20)(*(int *)(param_1[1] + 0x38));
        }
        *(undefined1 *)((int)param_1 + 10) = 0;
      }
    }
  }
  return uVar2;
}


/* FUN_0048f390 @ 0048f390  kind=lib  attributed-by=lib-island  size=131 */

int __cdecl FUN_0048f390(int *param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if ((char)param_1[2] == '\0') {
    return 0;
  }
  FUN_0048fbc0(param_1);
  if ((char)param_1[2] == '\x02') {
    puVar2 = (undefined4 *)param_1[1];
    iVar3 = FUN_004a1bb0((int *)*puVar2);
    if ((iVar3 != 0) && (param_2 == 0)) {
      FUN_00490750((int)param_1);
      return iVar3;
    }
    *(undefined1 *)((int)puVar2 + 0x13) = 1;
  }
  FUN_00471200(param_1);
  if (*(char *)((int)param_1 + 9) != '\0') {
    piVar1 = param_1 + 3;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      if (*(int *)(param_1[1] + 0x38) != 0) {
        (*DAT_00582b20)(*(int *)(param_1[1] + 0x38));
      }
      *(undefined1 *)((int)param_1 + 10) = 0;
    }
  }
  return 0;
}


/* FUN_0048f420 @ 0048f420  kind=lib  attributed-by=lib-island  size=270 */

int __cdecl FUN_0048f420(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int local_3c;
  undefined4 *local_38;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 *local_24;
  undefined8 local_c;
  
  FUN_0048fbc0(param_1);
  FUN_0048fbc0(param_2);
  piVar1 = *(int **)(*(int *)param_1[1] + 0x3c);
  if (*piVar1 != 0) {
    uVar2 = *(uint *)(param_2[1] + 0x20);
    local_c = __allmul(*(uint *)(param_2[1] + 0x2c),0,uVar2,(int)uVar2 >> 0x1f);
    iVar3 = (**(code **)(*piVar1 + 0x28))(piVar1,0xb,&local_c);
    if ((iVar3 != 0xc) && (iVar3 != 0)) goto LAB_0048f4df;
  }
  memset(&local_3c,0,0x30);
  local_28 = *param_2;
  local_24 = param_2;
  local_38 = param_1;
  local_2c = 1;
  FUN_004673c0(&local_3c,0x7fffffff);
  iVar3 = FUN_00467dc0(&local_3c);
  if (iVar3 == 0) {
    *(ushort *)(param_1[1] + 0x16) = *(ushort *)(param_1[1] + 0x16) & 0xfffd;
  }
  else {
    FUN_004a1760(*(int *)local_38[1]);
  }
LAB_0048f4df:
  if (*(char *)((int)param_2 + 9) != '\0') {
    piVar1 = param_2 + 3;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      if (*(int *)(param_2[1] + 0x38) != 0) {
        (*DAT_00582b20)(*(int *)(param_2[1] + 0x38));
      }
      *(undefined1 *)((int)param_2 + 10) = 0;
    }
  }
  if (*(char *)((int)param_1 + 9) != '\0') {
    piVar1 = param_1 + 3;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      if (*(int *)(param_1[1] + 0x38) != 0) {
        (*DAT_00582b20)(*(int *)(param_1[1] + 0x38));
      }
      *(undefined1 *)((int)param_1 + 10) = 0;
    }
  }
  return iVar3;
}


/* FUN_0048f530 @ 0048f530  kind=lib  attributed-by=lib-island  size=519 */

int __cdecl FUN_0048f530(int *param_1,uint *param_2)

{
  short *psVar1;
  short sVar2;
  undefined4 *puVar3;
  uint *puVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined1 *puVar10;
  bool bVar11;
  uint local_8;
  
  piVar6 = param_1;
  if (param_1[6] == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    return 0;
  }
  iVar7 = FUN_00480c70(param_1);
  if (iVar7 == 0) {
    local_8 = 0;
    param_1 = (int *)0x0;
    do {
      iVar8 = (int)*(short *)((int)piVar6 + 0x5e);
      iVar7 = piVar6[iVar8 + 0x22];
      if ((*(char *)(iVar7 + 3) != '\0') || (*(char *)(iVar7 + 2) == '\0')) {
        bVar11 = CARRY4((uint)param_1,(uint)*(ushort *)(iVar7 + 0x10));
        param_1 = (int *)((int)param_1 + (uint)*(ushort *)(iVar7 + 0x10));
        local_8 = local_8 + bVar11;
      }
      if (*(char *)(iVar7 + 3) != '\0') {
        do {
          if (*(short *)((int)piVar6 + 0x5e) == 0) {
            *param_2 = (uint)param_1;
            param_2[1] = local_8;
            return 0;
          }
          if ((piVar6[*(short *)((int)piVar6 + 0x5e) + 0x22] != 0) &&
             (puVar3 = *(undefined4 **)(piVar6[*(short *)((int)piVar6 + 0x5e) + 0x22] + 0x44),
             puVar3 != (undefined4 *)0x0)) {
            psVar1 = (short *)((int)puVar3 + 0x1a);
            *psVar1 = *psVar1 + -1;
            puVar4 = (uint *)puVar3[4];
            if (*psVar1 == 0) {
              *(int *)(puVar3[7] + 0xc) = *(int *)(puVar3[7] + 0xc) + -1;
              if ((*(byte *)(puVar3 + 6) & 2) == 0) {
                iVar7 = puVar3[7];
                if (*(int *)(iVar7 + 0x1c) != 0) {
                  if (puVar3[5] == 1) {
                    *(undefined4 *)(iVar7 + 0x2c) = 0;
                  }
                  (*DAT_00582b4c)(*(undefined4 *)(iVar7 + 0x28),*puVar3,0);
                }
              }
              else {
                FUN_00486ed0((int)puVar3);
                piVar5 = (int *)puVar3[7];
                iVar7 = *piVar5;
                puVar3[8] = iVar7;
                if (iVar7 != 0) {
                  *(undefined4 **)(iVar7 + 0x24) = puVar3;
                }
                *piVar5 = (int)puVar3;
                if (piVar5[1] == 0) {
                  piVar5[1] = (int)puVar3;
                }
                if ((piVar5[2] == 0) && ((*(byte *)(puVar3 + 6) & 4) == 0)) {
                  piVar5[2] = (int)puVar3;
                }
              }
            }
            if (*(int *)(puVar4[0x2d] + 0xc) == 0) {
              FUN_00484370(puVar4);
            }
          }
          *(short *)((int)piVar6 + 0x5e) = *(short *)((int)piVar6 + 0x5e) + -1;
          sVar2 = *(short *)((int)piVar6 + 0x5e);
          *(undefined2 *)((int)piVar6 + 0x42) = 0;
          *(undefined1 *)((int)piVar6 + 0x5a) = 0;
        } while (*(ushort *)(piVar6[sVar2 + 0x22] + 0x10) <=
                 *(ushort *)((int)piVar6 + sVar2 * 2 + 0x60));
        psVar1 = (short *)((int)piVar6 + sVar2 * 2 + 0x60);
        *psVar1 = *psVar1 + 1;
        iVar8 = (int)*(short *)((int)piVar6 + 0x5e);
        iVar7 = piVar6[iVar8 + 0x22];
      }
      uVar9 = (uint)*(ushort *)((int)piVar6 + iVar8 * 2 + 0x60);
      if (uVar9 == *(ushort *)(iVar7 + 0x10)) {
        iVar7 = (uint)*(byte *)(iVar7 + 5) + *(int *)(iVar7 + 0x38);
        uVar9 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar7 + 8),*(undefined1 *)(iVar7 + 9)),
                                  *(undefined1 *)(iVar7 + 10)),*(undefined1 *)(iVar7 + 0xb));
      }
      else {
        puVar10 = (undefined1 *)
                  ((uint)(CONCAT11(*(undefined1 *)(*(int *)(iVar7 + 0x40) + uVar9 * 2),
                                   *(undefined1 *)(*(int *)(iVar7 + 0x40) + 1 + uVar9 * 2)) &
                         *(ushort *)(iVar7 + 0x12)) + *(int *)(iVar7 + 0x38));
        uVar9 = CONCAT31(CONCAT21(CONCAT11(*puVar10,puVar10[1]),puVar10[2]),puVar10[3]);
      }
      iVar7 = FUN_00480a70((int)piVar6,uVar9);
    } while (iVar7 == 0);
    return iVar7;
  }
  return iVar7;
}


/* FUN_0048f740 @ 0048f740  kind=lib  attributed-by=lib-island  size=72 */

char * __cdecl FUN_0048f740(undefined4 *param_1,undefined4 *param_2,byte param_3)

{
  int *piVar1;
  char *pcVar2;
  
  FUN_0048fbc0(param_1);
  pcVar2 = FUN_00470d20(param_1,param_2,param_3);
  if (*(char *)((int)param_1 + 9) != '\0') {
    piVar1 = param_1 + 3;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      if (*(int *)(param_1[1] + 0x38) != 0) {
        (*DAT_00582b20)(*(int *)(param_1[1] + 0x38));
      }
      *(undefined1 *)((int)param_1 + 10) = 0;
    }
  }
  return pcVar2;
}


/* FUN_0048f790 @ 0048f790  kind=lib  attributed-by=lib-island  size=78 */

undefined4 __cdecl
FUN_0048f790(undefined4 *param_1,int param_2,int param_3,int param_4,int *param_5)

{
  int *piVar1;
  undefined4 uVar2;
  
  FUN_0048fbc0(param_1);
  uVar2 = FUN_00470f80((int)param_1,param_2,param_3,param_4,param_5);
  if (*(char *)((int)param_1 + 9) != '\0') {
    piVar1 = param_1 + 3;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      if (*(int *)(param_1[1] + 0x38) != 0) {
        (*DAT_00582b20)(*(int *)(param_1[1] + 0x38));
      }
      *(undefined1 *)((int)param_1 + 10) = 0;
    }
  }
  return uVar2;
}


/* FUN_0048f7e0 @ 0048f7e0  kind=lib  attributed-by=lib-island  size=137 */

int __cdecl FUN_0048f7e0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (*(byte *)((int)param_1 + 0x5b) < 2) {
    iVar1 = 0;
  }
  else if (*(byte *)((int)param_1 + 0x5b) == 3) {
    iVar1 = param_1[0x15];
  }
  else {
    *(undefined1 *)((int)param_1 + 0x5b) = 0;
    iVar1 = FUN_004715a0(param_1,(byte *)param_1[0x14],param_1[0x12],param_1[0x13],0,
                         (uint *)(param_1 + 0x15));
    if (iVar1 != 0) goto LAB_0048f830;
    FUN_00466dd0(param_1[0x14]);
    param_1[0x14] = 0;
  }
  if (iVar1 == 0) {
    if ((*(char *)((int)param_1 + 0x5b) == '\x01') && (param_1[0x15] == 0)) {
      *param_2 = 0;
      return 0;
    }
    *param_2 = 1;
    return 0;
  }
LAB_0048f830:
  *param_2 = 1;
  return iVar1;
}


/* FUN_0048f870 @ 0048f870  kind=lib  attributed-by=lib-island  size=62 */

uint __cdecl FUN_0048f870(int *param_1,uint param_2,size_t param_3,void *param_4)

{
  uint uVar1;
  
  if (*(byte *)((int)param_1 + 0x5b) == 0) {
    return 4;
  }
  if ((1 < *(byte *)((int)param_1 + 0x5b)) && (uVar1 = FUN_00471850(param_1), uVar1 != 0)) {
    return uVar1;
  }
  uVar1 = FUN_0046b2f0((int)param_1,param_2,param_3,param_4,0);
  return uVar1;
}


/* FUN_0048f8b0 @ 0048f8b0  kind=lib  attributed-by=lib-island  size=32 */

int __cdecl FUN_0048f8b0(int param_1,uint *param_2)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x5b) == '\x01') {
    iVar1 = FUN_00479240(param_1,param_2,1);
    return iVar1;
  }
  return 0;
}


/* FUN_0048f8d0 @ 0048f8d0  kind=lib  attributed-by=lib-island  size=91 */

undefined4 __cdecl FUN_0048f8d0(int param_1,undefined4 *param_2)

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
  *param_2 = *(undefined4 *)(param_1 + 0x34);
  return 0;
}


/* FUN_0048f930 @ 0048f930  kind=lib  attributed-by=lib-island  size=485 */

uint __cdecl FUN_0048f930(uint *param_1)

{
  ushort uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint **ppuVar10;
  int local_18;
  int local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  puVar5 = param_1;
  iVar9 = (int)*(short *)((int)param_1 + 0x5e);
  puVar6 = (uint *)*param_1;
  puVar2 = (undefined1 *)param_1[iVar9 + 0x22];
  local_c = puVar6[1];
  uVar1 = *(ushort *)((int)param_1 + iVar9 * 2 + 0x60);
  if ((*(ushort *)(puVar2 + 0x10) <= uVar1) || (*(char *)((int)param_1 + 0x5b) != '\x01')) {
    return 1;
  }
  local_10 = (uint)uVar1;
  local_8 = (uint)(CONCAT11(*(undefined1 *)(*(int *)(puVar2 + 0x40) + local_10 * 2),
                            *(undefined1 *)(*(int *)(puVar2 + 0x40) + 1 + local_10 * 2)) &
                  *(ushort *)(puVar2 + 0x12)) + *(int *)(puVar2 + 0x38);
  param_1 = puVar6;
  if (((puVar2[3] != '\0') ||
      (puVar6 = (uint *)FUN_00491450((int *)puVar5,&local_18), puVar6 == (uint *)0x0)) &&
     (puVar6 = (uint *)FUN_00489bc0(local_c,puVar5[6],(uint)puVar5), puVar6 == (uint *)0x0)) {
    if (puVar5[4] == 0) {
      uVar7 = puVar5[10];
      uVar8 = puVar5[0xb];
      for (iVar3 = *(int *)(param_1[1] + 8); iVar3 != 0; iVar3 = *(int *)(iVar3 + 8)) {
        if (((*(char *)(iVar3 + 0x5c) != '\0') && (*(uint *)(iVar3 + 0x28) == uVar7)) &&
           (*(uint *)(iVar3 + 0x2c) == uVar8)) {
          *(undefined1 *)(iVar3 + 0x5b) = 0;
        }
      }
    }
    puVar6 = (uint *)FUN_004a2c80(*(undefined4 **)(puVar2 + 0x44));
    if (puVar6 == (uint *)0x0) {
      param_1 = (uint *)FUN_00472980(puVar2,local_8);
      ppuVar10 = &param_1;
      uVar7 = FUN_00471aa0((uint)puVar2,local_8);
      FUN_004770f0((int)puVar2,local_10,uVar7 & 0xffff,(int *)ppuVar10);
      puVar6 = param_1;
      if (param_1 == (uint *)0x0) {
        if (puVar2[3] == '\0') {
          local_8 = puVar5[*(short *)((int)puVar5 + 0x5e) + 0x22];
          local_14 = *(int *)(puVar5[iVar9 + 0x23] + 0x48);
          local_18 = (uint)(CONCAT11(*(undefined1 *)
                                      (*(int *)(local_8 + 0x40) + -2 +
                                      (uint)*(ushort *)(local_8 + 0x10) * 2),
                                     *(undefined1 *)
                                      (*(int *)(local_8 + 0x40) + -1 +
                                      (uint)*(ushort *)(local_8 + 0x10) * 2)) &
                           *(ushort *)(local_8 + 0x12)) + *(int *)(local_8 + 0x38);
          uVar8 = FUN_00471aa0(local_8,local_18);
          uVar7 = local_c;
          FUN_0046c6a0(local_c);
          puVar4 = *(undefined1 **)(uVar7 + 0x50);
          param_1 = (uint *)FUN_004a2c80(*(undefined4 **)(local_8 + 0x44));
          FUN_0047e6f0((uint)puVar2,local_10,(undefined1 *)(local_18 + -4),(uVar8 & 0xffff) + 4,
                       puVar4,local_14,(uint *)&param_1);
          FUN_004770f0(local_8,*(ushort *)(local_8 + 0x10) - 1,uVar8 & 0xffff,(int *)&param_1);
          if (param_1 != (uint *)0x0) {
            return (uint)param_1;
          }
        }
        puVar6 = (uint *)FUN_0046e520((int)puVar5);
        if (puVar6 == (uint *)0x0) {
          if (iVar9 < *(short *)((int)puVar5 + 0x5e)) {
            do {
              uVar7 = puVar5[*(short *)((int)puVar5 + 0x5e) + 0x22];
              *(short *)((int)puVar5 + 0x5e) = *(short *)((int)puVar5 + 0x5e) + -1;
              FUN_004880a0(uVar7);
            } while (iVar9 < *(short *)((int)puVar5 + 0x5e));
            uVar7 = FUN_0046e520((int)puVar5);
            puVar6 = (uint *)0x0;
            if (uVar7 != 0) {
              return uVar7;
            }
          }
          FUN_00480c70((int *)puVar5);
        }
      }
    }
  }
  return (uint)puVar6;
}


/* FUN_0048fb70 @ 0048fb70  kind=lib  attributed-by=lib-island  size=72 */

uint __cdecl FUN_0048fb70(undefined4 *param_1,char *param_2,uint *param_3)

{
  int *piVar1;
  uint uVar2;
  
  FUN_0048fbc0(param_1);
  uVar2 = FUN_00471000(param_1,param_2,param_3);
  if (*(char *)((int)param_1 + 9) != '\0') {
    piVar1 = param_1 + 3;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      if (*(int *)(param_1[1] + 0x38) != 0) {
        (*DAT_00582b20)(*(int *)(param_1[1] + 0x38));
      }
      *(undefined1 *)((int)param_1 + 10) = 0;
    }
  }
  return uVar2;
}


/* FUN_0048fbc0 @ 0048fbc0  kind=lib  attributed-by=lib-island  size=210 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0048fbc0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if ((*(char *)((int)param_1 + 9) != '\0') &&
     (param_1[3] = param_1[3] + 1, *(char *)((int)param_1 + 10) == '\0')) {
    if ((*(int *)(param_1[1] + 0x38) == 0) ||
       (iVar3 = (*_DAT_00582b1c)(*(int *)(param_1[1] + 0x38)), iVar3 == 0)) {
      *(undefined4 *)(param_1[1] + 4) = *param_1;
      *(undefined1 *)((int)param_1 + 10) = 1;
      return;
    }
    for (iVar3 = param_1[5]; iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x14)) {
      if (*(char *)(iVar3 + 10) != '\0') {
        iVar1 = *(int *)(*(int *)(iVar3 + 4) + 0x38);
        if (iVar1 != 0) {
          (*DAT_00582b20)(iVar1);
        }
        *(undefined1 *)(iVar3 + 10) = 0;
      }
    }
    if (*(int *)(param_1[1] + 0x38) != 0) {
      (*DAT_00582b18)(*(int *)(param_1[1] + 0x38));
    }
    *(undefined4 *)(param_1[1] + 4) = *param_1;
    puVar2 = (undefined4 *)param_1[5];
    *(undefined1 *)((int)param_1 + 10) = 1;
    for (; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)puVar2[5]) {
      if (puVar2[3] != 0) {
        if (*(int *)(puVar2[1] + 0x38) != 0) {
          (*DAT_00582b18)(*(int *)(puVar2[1] + 0x38));
        }
        *(undefined4 *)(puVar2[1] + 4) = *puVar2;
        *(undefined1 *)((int)puVar2 + 10) = 1;
      }
    }
  }
  return;
}


/* FUN_0048fca0 @ 0048fca0  kind=lib  attributed-by=lib-island  size=283 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0048fca0(int param_1)

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
           (iVar4 = (*_DAT_00582b1c)(*(int *)(puVar1[1] + 0x38)), iVar4 == 0)) {
          *(undefined4 *)(puVar1[1] + 4) = *puVar1;
          *(undefined1 *)((int)puVar1 + 10) = 1;
        }
        else {
          for (iVar4 = puVar1[5]; iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x14)) {
            if (*(char *)(iVar4 + 10) != '\0') {
              iVar2 = *(int *)(*(int *)(iVar4 + 4) + 0x38);
              if (iVar2 != 0) {
                (*DAT_00582b20)(iVar2);
              }
              *(undefined1 *)(iVar4 + 10) = 0;
            }
          }
          if (*(int *)(puVar1[1] + 0x38) != 0) {
            (*DAT_00582b18)(*(int *)(puVar1[1] + 0x38));
          }
          *(undefined4 *)(puVar1[1] + 4) = *puVar1;
          puVar3 = (undefined4 *)puVar1[5];
          *(undefined1 *)((int)puVar1 + 10) = 1;
          for (; puVar3 != (undefined4 *)0x0; puVar3 = (undefined4 *)puVar3[5]) {
            if (puVar3[3] != 0) {
              if (*(int *)(puVar3[1] + 0x38) != 0) {
                (*DAT_00582b18)(*(int *)(puVar3[1] + 0x38));
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


/* FUN_0048fdc0 @ 0048fdc0  kind=lib  attributed-by=lib-island  size=58 */

void __cdecl FUN_0048fdc0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_00480c70(param_1);
  if (iVar1 == 0) {
    if (*(char *)((int)param_1 + 0x5b) == '\0') {
      *param_2 = 1;
      return;
    }
    *param_2 = 0;
    FUN_00480b10((int)param_1);
  }
  return;
}


/* FUN_0048fe00 @ 0048fe00  kind=lib  attributed-by=lib-island  size=72 */

char __cdecl FUN_0048fe00(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  
  FUN_0048fbc0(param_1);
  iVar2 = param_1[1];
  cVar3 = '\0';
  if (*(char *)(iVar2 + 0x11) != '\0') {
    cVar3 = (*(char *)(iVar2 + 0x12) != '\0') + '\x01';
  }
  if (*(char *)((int)param_1 + 9) != '\0') {
    piVar1 = param_1 + 3;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      if (*(int *)(iVar2 + 0x38) != 0) {
        (*DAT_00582b20)(*(int *)(iVar2 + 0x38));
      }
      *(undefined1 *)((int)param_1 + 10) = 0;
    }
  }
  return cVar3;
}


/* FUN_0048fe50 @ 0048fe50  kind=lib  attributed-by=lib-island  size=32 */

undefined1 * __cdecl FUN_0048fe50(int param_1)

{
  if (*(char *)(**(int **)(param_1 + 4) + 0xe) != '\0') {
    return &DAT_0055b524;
  }
  return *(undefined1 **)(**(int **)(param_1 + 4) + 0x90);
}


/* FUN_0048fe70 @ 0048fe70  kind=lib  attributed-by=lib-island  size=108 */

void __cdecl FUN_0048fe70(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[1];
  FUN_0048fbc0(param_1);
  iVar3 = *(int *)(*(int *)(iVar2 + 0xc) + 0x38);
  iVar2 = iVar3 + param_2 * 4;
  *param_3 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar3 + 0x24 + param_2 * 4),
                                        *(undefined1 *)(iVar2 + 0x25)),*(undefined1 *)(iVar2 + 0x26)
                              ),*(undefined1 *)(iVar2 + 0x27));
  if (*(char *)((int)param_1 + 9) != '\0') {
    piVar1 = param_1 + 3;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      if (*(int *)(param_1[1] + 0x38) != 0) {
        (*DAT_00582b20)(*(int *)(param_1[1] + 0x38));
      }
      *(undefined1 *)((int)param_1 + 10) = 0;
    }
  }
  return;
}


/* FUN_0048fee0 @ 0048fee0  kind=lib  attributed-by=lib-island  size=64 */

int __cdecl FUN_0048fee0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  FUN_0048fbc0(param_1);
  iVar2 = param_1[1];
  iVar3 = *(int *)(iVar2 + 0x20);
  iVar4 = *(int *)(iVar2 + 0x24);
  if (*(char *)((int)param_1 + 9) != '\0') {
    piVar1 = param_1 + 3;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      if (*(int *)(iVar2 + 0x38) != 0) {
        (*DAT_00582b20)(*(int *)(iVar2 + 0x38));
      }
      *(undefined1 *)((int)param_1 + 10) = 0;
    }
  }
  return iVar3 - iVar4;
}


/* FUN_0048ff20 @ 0048ff20  kind=lib  attributed-by=lib-island  size=187 */

uint __cdecl FUN_0048ff20(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  piVar1 = (int *)param_1[1];
  FUN_0048fbc0(param_1);
  if (*(char *)((int)piVar1 + 0x11) == '\0') {
    uVar4 = 0x65;
  }
  else {
    for (iVar2 = piVar1[2]; iVar2 != 0; iVar2 = *(int *)(iVar2 + 8)) {
      FUN_00466dd0(*(int *)(iVar2 + 0x14));
      *(undefined4 *)(iVar2 + 0x14) = 0;
    }
    uVar4 = FUN_0047e2e0(piVar1,(undefined4 *)0x0,(char *)piVar1[0xb]);
    if (uVar4 == 0) {
      uVar4 = FUN_004a2c80(*(undefined4 **)(piVar1[3] + 0x44));
      iVar2 = piVar1[0xb];
      iVar3 = *(int *)(piVar1[3] + 0x38);
      *(char *)(iVar3 + 0x1c) = (char)((uint)iVar2 >> 0x18);
      *(char *)(iVar3 + 0x1d) = (char)((uint)iVar2 >> 0x10);
      *(char *)(iVar3 + 0x1e) = (char)((uint)iVar2 >> 8);
      *(char *)(iVar3 + 0x1f) = (char)iVar2;
    }
  }
  if (*(char *)((int)param_1 + 9) != '\0') {
    piVar1 = param_1 + 3;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      if (*(int *)(param_1[1] + 0x38) != 0) {
        (*DAT_00582b20)(*(int *)(param_1[1] + 0x38));
      }
      *(undefined1 *)((int)param_1 + 10) = 0;
    }
  }
  return uVar4;
}


/* FUN_0048ffe0 @ 0048ffe0  kind=lib  attributed-by=lib-island  size=509 */

uint * __cdecl
FUN_0048ffe0(uint *param_1,byte *param_2,uint param_3,uint param_4,void *param_5,size_t param_6,
            size_t param_7,int param_8,uint *param_9)

{
  uint *puVar1;
  int iVar2;
  undefined1 *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  uint local_c;
  uint *local_8;
  
  puVar5 = param_9;
  puVar4 = param_1;
  local_8 = param_9;
  uVar9 = *param_1;
  puVar6 = *(uint **)(uVar9 + 4);
  local_c = 0;
  if (*(char *)((int)param_1 + 0x5b) == '\x03') {
    return (uint *)param_1[0x15];
  }
  puVar1 = param_1 + 6;
  param_1 = puVar6;
  puVar6 = (uint *)FUN_00489bc0((int)puVar6,*puVar1,(uint)puVar4);
  uVar8 = param_4;
  if (puVar6 == (uint *)0x0) {
    if (puVar4[4] == 0) {
      for (iVar2 = *(int *)(*(int *)(uVar9 + 4) + 8); iVar2 != 0; iVar2 = *(int *)(iVar2 + 8)) {
        if (((*(char *)(iVar2 + 0x5c) != '\0') && (*(uint *)(iVar2 + 0x28) == param_3)) &&
           (*(uint *)(iVar2 + 0x2c) == param_4)) {
          *(undefined1 *)(iVar2 + 0x5b) = 0;
        }
      }
    }
    if (puVar5 == (uint *)0x0) {
      puVar6 = (uint *)FUN_004715a0((int *)puVar4,param_2,param_3,param_4,param_8,(uint *)&local_8);
      if (puVar6 != (uint *)0x0) {
        return puVar6;
      }
      param_9 = local_8;
    }
    puVar3 = (undefined1 *)puVar4[*(short *)((int)puVar4 + 0x5e) + 0x22];
    if (param_1[0x14] == 0) {
      puVar7 = FUN_004868a0(param_1[8]);
      param_1[0x14] = (uint)puVar7;
    }
    local_8 = (uint *)param_1[0x14];
    if (local_8 == (uint *)0x0) {
      return (uint *)0x7;
    }
    param_1 = FUN_004794b0((size_t)puVar3,local_8,param_2,param_3,uVar8,param_5,param_6,param_7,
                           &local_c);
    puVar6 = param_1;
    if (param_1 == (uint *)0x0) {
      uVar9 = (uint)*(ushort *)((int)puVar4 + *(short *)((int)puVar4 + 0x5e) * 2 + 0x60);
      if (param_9 == (uint *)0x0) {
        puVar6 = (uint *)FUN_004a2c80(*(undefined4 **)(puVar3 + 0x44));
        if (puVar6 != (uint *)0x0) {
          return puVar6;
        }
        param_9 = (uint *)((uint)(CONCAT11(*(undefined1 *)(*(int *)(puVar3 + 0x40) + uVar9 * 2),
                                           *(undefined1 *)(*(int *)(puVar3 + 0x40) + 1 + uVar9 * 2))
                                 & *(ushort *)(puVar3 + 0x12)) + *(int *)(puVar3 + 0x38));
        if (puVar3[3] == '\0') {
          *local_8 = *param_9;
        }
        uVar8 = FUN_00471aa0((uint)puVar3,(int)param_9);
        param_1 = (uint *)FUN_00472980(puVar3,(uint)param_9);
        FUN_004770f0((int)puVar3,uVar9,uVar8 & 0xffff,(int *)&param_1);
        if (param_1 != (uint *)0x0) {
          return param_1;
        }
      }
      else if (((int)param_9 < 0) && (*(short *)(puVar3 + 0x10) != 0)) {
        *(short *)((int)puVar4 + *(short *)((int)puVar4 + 0x5e) * 2 + 0x60) = (short)(uVar9 + 1);
        uVar9 = uVar9 + 1 & 0xffff;
      }
      FUN_0047e6f0((uint)puVar3,uVar9,(undefined1 *)local_8,local_c,(undefined1 *)0x0,0,
                   (uint *)&param_1);
      *(undefined2 *)((int)puVar4 + 0x42) = 0;
      *(undefined1 *)((int)puVar4 + 0x5a) = 0;
      puVar6 = param_1;
      if ((param_1 == (uint *)0x0) && (puVar3[1] != '\0')) {
        puVar6 = (uint *)FUN_0046e520((int)puVar4);
        *(undefined1 *)(puVar4[*(short *)((int)puVar4 + 0x5e) + 0x22] + 1) = 0;
        *(undefined1 *)((int)puVar4 + 0x5b) = 0;
      }
    }
  }
  return puVar6;
}


/* FUN_004901e0 @ 004901e0  kind=lib  attributed-by=lib-island  size=1117 */

void __cdecl FUN_004901e0(undefined4 *param_1,int param_2,int param_3,int param_4,int *param_5)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
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
  int local_90;
  undefined4 *local_8c;
  undefined4 *local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_78;
  undefined2 local_77;
  int *local_74;
  void *local_70;
  undefined4 local_6c [25];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  piVar1 = (int *)param_1[1];
  local_74 = param_5;
  FUN_0048fbc0(param_1);
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
    local_70 = (void *)FUN_004a0350(_Size);
    if (local_70 != (void *)0x0) {
      memset(local_70,0,_Size);
    }
    if (local_70 != (void *)0x0) {
      uVar6 = DAT_00582bb8 / (uint)piVar1[8] + 1;
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
      FUN_00471d80((int *)&local_ac,1,
                   (undefined4 *)
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
          puVar3 = *(undefined4 **)(param_2 + iVar5 * 4);
          if (puVar3 != (undefined4 *)0x0) {
            if ((*(char *)((int)piVar1 + 0x11) != '\0') && (1 < (int)puVar3)) {
              FUN_00471f80(&local_ac,puVar3,1,0,(char *)0x0);
            }
            FUN_00472090((int *)&local_ac,*(uint *)(param_2 + iVar5 * 4),"List of tree roots: ",
                         (uint *)0x0,(uint *)0x0);
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
              if (uVar7 == DAT_00582bb8 / (uint)piVar1[8] + 1) {
                uVar7 = iVar5 + 3;
              }
            }
            if ((uVar7 != uVar6) || (*(char *)((int)piVar1 + 0x11) == '\0')) {
              FUN_00471c20((int)&local_ac,(char *)0x0,(byte *)"Page %d is never used");
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
              if (uVar7 == DAT_00582bb8 / (uint)piVar1[8] + 1) {
                uVar7 = iVar5 + 3;
              }
            }
            if ((uVar7 == uVar6) && (*(char *)((int)piVar1 + 0x11) != '\0')) {
              FUN_00471c20((int)&local_ac,(char *)0x0,(byte *)"Pointer map page %d is referenced");
            }
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 <= local_a0);
      }
      if (iVar2 != *(int *)(*(int *)(*piVar1 + 0xb4) + 0xc)) {
        FUN_00471c20((int)&local_ac,(char *)0x0,
                     (byte *)"Outstanding page count goes from %d to %d during this analysis");
      }
      if (*(char *)((int)param_1 + 9) != '\0') {
        piVar1 = param_1 + 3;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          if (*(int *)(param_1[1] + 0x38) != 0) {
            (*DAT_00582b20)(*(int *)(param_1[1] + 0x38));
          }
          *(undefined1 *)((int)param_1 + 10) = 0;
        }
      }
      FUN_00466dd0((int)local_a4);
      if (local_94 == 0) {
        *local_74 = local_98;
        if (local_98 == 0) {
          if (local_88 != local_8c) {
            if ((char)local_77 == '\x01') {
              FUN_00494b00(local_90,local_88);
            }
            else {
              FUN_00466dd0((int)local_88);
            }
          }
          local_88 = (undefined4 *)0x0;
        }
        FUN_004aa8f0(&local_90);
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      if (local_88 != local_8c) {
        if ((char)local_77 == '\x01') {
          FUN_00494b00(local_90,local_88);
          *local_74 = local_98 + 1;
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
        FUN_00466dd0((int)local_88);
      }
      *local_74 = local_98 + 1;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    *local_74 = 1;
    local_a4 = (void *)0x0;
  }
  if (*(char *)((int)param_1 + 9) != '\0') {
    piVar1 = param_1 + 3;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      if (*(int *)(param_1[1] + 0x38) != 0) {
        (*DAT_00582b20)(*(int *)(param_1[1] + 0x38));
      }
      *(undefined1 *)((int)param_1 + 10) = 0;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00490640 @ 00490640  kind=lib  attributed-by=lib-island  size=106 */

int __cdecl FUN_00490640(int param_1,uint *param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  
  if (*(char *)(param_1 + 0x5b) == '\x01') {
    if (*(short *)(param_1 + 0x42) == 0) {
      iVar2 = *(int *)(param_1 + 0x88 + *(short *)(param_1 + 0x5e) * 4);
      uVar3 = (uint)*(ushort *)(param_1 + 0x60 + *(short *)(param_1 + 0x5e) * 2);
      FUN_00471710(iVar2,(uint)(CONCAT11(*(undefined1 *)(*(int *)(iVar2 + 0x40) + uVar3 * 2),
                                         *(undefined1 *)(*(int *)(iVar2 + 0x40) + 1 + uVar3 * 2)) &
                               *(ushort *)(iVar2 + 0x12)) + *(int *)(iVar2 + 0x38),
                   (uint *)(param_1 + 0x28));
    }
    uVar1 = *(ushort *)(param_1 + 0x3c);
    iVar2 = *(int *)(param_1 + 0x30);
    *param_2 = (uint)*(ushort *)(param_1 + 0x3e);
    return (uint)uVar1 + iVar2;
  }
  return 0;
}


/* FUN_004906b0 @ 004906b0  kind=lib  attributed-by=lib-island  size=62 */

undefined4 __cdecl FUN_004906b0(int param_1,undefined4 *param_2)

{
  if (*(char *)(param_1 + 0x5b) != '\x01') {
    *param_2 = 0;
    param_2[1] = 0;
    return 0;
  }
  FUN_0047d150(param_1);
  *param_2 = *(undefined4 *)(param_1 + 0x28);
  param_2[1] = *(undefined4 *)(param_1 + 0x2c);
  return 0;
}


/* FUN_004906f0 @ 004906f0  kind=lib  attributed-by=lib-island  size=89 */

int __cdecl FUN_004906f0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  
  if ((*(char *)((int)param_1 + 0x5b) == '\x01') && (*(char *)((int)param_1 + 0x59) != '\0')) {
    return 0;
  }
  iVar1 = FUN_00480c70(param_1);
  if (iVar1 == 0) {
    if (*(char *)((int)param_1 + 0x5b) == '\0') {
      *param_2 = 1;
      return 0;
    }
    *param_2 = 0;
    iVar1 = FUN_00480be0((int)param_1);
    *(bool *)((int)param_1 + 0x59) = iVar1 == 0;
  }
  return iVar1;
}


/* FUN_00490750 @ 00490750  kind=lib  attributed-by=lib-island  size=45 */

void __cdecl FUN_00490750(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 9) != '\0') {
    piVar1 = (int *)(param_1 + 0xc);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x38);
      if (iVar2 != 0) {
        (*DAT_00582b20)(iVar2);
      }
      *(undefined1 *)(param_1 + 10) = 0;
    }
  }
  return;
}


/* FUN_00490780 @ 00490780  kind=lib  attributed-by=lib-island  size=81 */

void __cdecl FUN_00490780(int param_1)

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
            (*DAT_00582b20)(iVar3);
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


/* FUN_00490810 @ 00490810  kind=lib  attributed-by=lib-island  size=112 */

int __cdecl FUN_00490810(undefined8 *param_1,int param_2,char param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)((int)param_1 + 9) != '\0') {
    FUN_0048fbc0((undefined4 *)param_1);
    iVar3 = FUN_00487510((int)param_1,param_2,param_3 + 1U);
    if (iVar3 == 0) {
      iVar3 = FUN_0048b5a0(param_1,param_2,param_3 + 1U);
    }
    if (*(char *)((int)param_1 + 9) != '\0') {
      piVar1 = (int *)((int)param_1 + 0xc);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        iVar2 = *(int *)(*(int *)((int)param_1 + 4) + 0x38);
        if (iVar2 != 0) {
          (*DAT_00582b20)(iVar2);
        }
        *(undefined1 *)((int)param_1 + 10) = 0;
      }
    }
    return iVar3;
  }
  return 0;
}


/* FUN_00490880 @ 00490880  kind=lib  attributed-by=lib-island  size=82 */

undefined4 __cdecl FUN_00490880(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_0048fbc0(param_1);
  iVar2 = *(int *)param_1[1];
  if (0 < param_2) {
    *(int *)(iVar2 + 0x84) = param_2;
  }
  uVar3 = *(undefined4 *)(iVar2 + 0x84);
  if (*(char *)((int)param_1 + 9) != '\0') {
    piVar1 = param_1 + 3;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      if (*(int *)(param_1[1] + 0x38) != 0) {
        (*DAT_00582b20)(*(int *)(param_1[1] + 0x38));
      }
      *(undefined1 *)((int)param_1 + 10) = 0;
    }
  }
  return uVar3;
}


/* FUN_004908e0 @ 004908e0  kind=lib  attributed-by=lib-island  size=941 */

uint __cdecl
FUN_004908e0(int *param_1,int *param_2,uint param_3,int param_4,int param_5,uint *param_6)

{
  undefined1 uVar1;
  size_t sVar2;
  undefined3 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  byte *pbVar8;
  uint local_24;
  int local_20;
  uint local_1c;
  int local_18;
  int local_14;
  byte *local_10;
  int local_c;
  int local_8;
  
  if (((*(char *)((int)param_1 + 0x5b) == '\x01') && (*(char *)((int)param_1 + 0x5a) != '\0')) &&
     (*(char *)(param_1[0x22] + 2) != '\0')) {
    iVar5 = param_1[0xb];
    if ((param_1[10] == param_3) && (iVar5 == param_4)) {
      *param_6 = 0;
      return 0;
    }
    if (((*(char *)((int)param_1 + 0x59) != '\0') && (iVar5 <= param_4)) &&
       ((iVar5 < param_4 || ((uint)param_1[10] < param_3)))) goto LAB_00490938;
  }
  uVar4 = FUN_00480c70(param_1);
  if (uVar4 == 0) {
    if (*(char *)((int)param_1 + 0x5b) == '\0') {
LAB_00490938:
      *param_6 = 0xffffffff;
      return 0;
    }
    do {
      iVar5 = (int)*(short *)((int)param_1 + 0x5e);
      local_18 = 0;
      local_c = param_1[iVar5 + 0x22];
      local_14 = *(ushort *)(local_c + 0x10) - 1;
      if (param_5 == 0) {
        local_8 = local_14 / 2;
        *(short *)((int)param_1 + iVar5 * 2 + 0x60) = (short)local_8;
      }
      else {
        *(short *)((int)param_1 + iVar5 * 2 + 0x60) = (short)local_14;
        local_8 = local_14;
      }
      while( true ) {
        *(undefined2 *)((int)param_1 + 0x42) = 0;
        pbVar8 = (byte *)((uint)(CONCAT11(*(undefined1 *)(*(int *)(local_c + 0x40) + local_8 * 2),
                                          *(undefined1 *)
                                           (*(int *)(local_c + 0x40) + 1 + local_8 * 2)) &
                                *(ushort *)(local_c + 0x12)) + (uint)*(byte *)(local_c + 6) +
                         *(int *)(local_c + 0x38));
        if (*(char *)(local_c + 2) == '\0') {
          uVar4 = (uint)*pbVar8;
          if (*(byte *)(local_c + 7) < uVar4) {
            if (((char)pbVar8[1] < '\0') ||
               (uVar4 = (uVar4 & 0x7f) * 0x80 + (uint)pbVar8[1], *(ushort *)(local_c + 8) < uVar4))
            {
              FUN_00471710(local_c,(int)pbVar8 - (uint)*(byte *)(local_c + 6),(uint *)(param_1 + 10)
                          );
              sVar2 = param_1[10];
              if (0x7ffffefe < sVar2 - 1) {
                return 7;
              }
              if (DAT_00582ac8 == 0) {
                local_10 = (byte *)(*DAT_00582ae8)(sVar2);
              }
              else {
                if (DAT_00583f40 != 0) {
                  (*DAT_00582b18)(DAT_00583f40);
                }
                FUN_00480650(sVar2,(int *)&local_10);
                if (DAT_00583f40 != 0) {
                  (*DAT_00582b20)(DAT_00583f40);
                }
              }
              pbVar8 = local_10;
              if (local_10 == (byte *)0x0) {
                return 7;
              }
              uVar4 = FUN_0046b2f0((int)param_1,0,sVar2,local_10,0);
              if (uVar4 != 0) {
                FUN_00466dd0((int)pbVar8);
                return uVar4;
              }
              uVar4 = FUN_004b83b0(sVar2,pbVar8,param_2);
              FUN_00466dd0((int)pbVar8);
            }
            else {
              uVar4 = FUN_004b83b0(uVar4,pbVar8 + 2,param_2);
            }
          }
          else {
            uVar4 = FUN_004b83b0(uVar4,pbVar8 + 1,param_2);
          }
        }
        else {
          if (*(char *)(local_c + 4) != '\0') {
            if (*pbVar8 < 0x80) {
              uVar4 = 1;
            }
            else {
              uVar4 = FUN_0049d440(pbVar8,&local_1c);
              uVar4 = uVar4 & 0xff;
            }
            pbVar8 = pbVar8 + uVar4;
          }
          FUN_0049d270(pbVar8,&local_24);
          if ((local_24 == param_3) && (local_20 == param_4)) {
            uVar4 = 0;
            *(undefined1 *)((int)param_1 + 0x5a) = 1;
            param_1[10] = local_24;
            param_1[0xb] = local_20;
          }
          else if ((param_4 < local_20) || ((param_4 <= local_20 && (param_3 <= local_24)))) {
            uVar4 = 1;
            *(undefined1 *)((int)param_1 + 0x5a) = 1;
            param_1[10] = local_24;
            param_1[0xb] = local_20;
          }
          else {
            uVar4 = 0xffffffff;
            *(undefined1 *)((int)param_1 + 0x5a) = 1;
            param_1[10] = local_24;
            param_1[0xb] = local_20;
          }
        }
        if (uVar4 == 0) break;
        if ((int)uVar4 < 0) {
          local_18 = local_8 + 1;
        }
        else {
          local_14 = local_8 + -1;
        }
        iVar5 = local_18;
        if (local_14 < local_18) goto LAB_00490bae;
        local_8 = (local_14 + local_18) / 2;
        *(short *)((int)param_1 + *(short *)((int)param_1 + 0x5e) * 2 + 0x60) = (short)local_8;
      }
      if ((*(char *)(local_c + 2) == '\0') || (iVar5 = local_8, *(char *)(local_c + 3) != '\0')) {
        *param_6 = 0;
        return 0;
      }
LAB_00490bae:
      if (*(char *)(local_c + 3) != '\0') {
LAB_00490c49:
        *param_6 = uVar4;
        return 0;
      }
      if (iVar5 < (int)(uint)*(ushort *)(local_c + 0x10)) {
        puVar7 = (undefined1 *)
                 ((uint)(CONCAT11(*(undefined1 *)(*(int *)(local_c + 0x40) + iVar5 * 2),
                                  *(undefined1 *)(*(int *)(local_c + 0x40) + 1 + iVar5 * 2)) &
                        *(ushort *)(local_c + 0x12)) + *(int *)(local_c + 0x38));
        uVar3 = CONCAT21(CONCAT11(*puVar7,puVar7[1]),puVar7[2]);
        uVar1 = puVar7[3];
      }
      else {
        iVar6 = (uint)*(byte *)(local_c + 5) + *(int *)(local_c + 0x38);
        uVar3 = CONCAT21(CONCAT11(*(undefined1 *)(iVar6 + 8),*(undefined1 *)(iVar6 + 9)),
                         *(undefined1 *)(iVar6 + 10));
        uVar1 = *(undefined1 *)(iVar6 + 0xb);
      }
      if (CONCAT31(uVar3,uVar1) == 0) goto LAB_00490c49;
      *(short *)((int)param_1 + *(short *)((int)param_1 + 0x5e) * 2 + 0x60) = (short)iVar5;
      *(undefined2 *)((int)param_1 + 0x42) = 0;
      *(undefined1 *)((int)param_1 + 0x5a) = 0;
      uVar4 = FUN_00480a70((int)param_1,CONCAT31(uVar3,uVar1));
    } while (uVar4 == 0);
  }
  return uVar4;
}


/* FUN_00490c90 @ 00490c90  kind=lib  attributed-by=lib-island  size=360 */

int __cdecl FUN_00490c90(int *param_1,undefined4 *param_2)

{
  short *psVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  short sVar6;
  
  if (*(byte *)((int)param_1 + 0x5b) < 2) {
    iVar5 = 0;
  }
  else if (*(byte *)((int)param_1 + 0x5b) == 3) {
    iVar5 = param_1[0x15];
  }
  else {
    *(undefined1 *)((int)param_1 + 0x5b) = 0;
    iVar5 = FUN_004715a0(param_1,(byte *)param_1[0x14],param_1[0x12],param_1[0x13],0,
                         (uint *)(param_1 + 0x15));
    if (iVar5 != 0) {
      return iVar5;
    }
    FUN_00466dd0(param_1[0x14]);
    param_1[0x14] = 0;
    iVar5 = 0;
  }
  if (iVar5 != 0) {
    return iVar5;
  }
  if (*(char *)((int)param_1 + 0x5b) == '\0') {
    *param_2 = 1;
  }
  else {
    iVar5 = param_1[0x15];
    param_1[0x15] = 0;
    if (0 < iVar5) {
      *param_2 = 0;
      return 0;
    }
    iVar3 = (int)*(short *)((int)param_1 + 0x5e);
    iVar5 = param_1[iVar3 + 0x22];
    psVar1 = (short *)((int)param_1 + iVar3 * 2 + 0x60);
    *psVar1 = *psVar1 + 1;
    uVar2 = *(ushort *)((int)param_1 + iVar3 * 2 + 0x60);
    *(undefined2 *)((int)param_1 + 0x42) = 0;
    *(undefined1 *)((int)param_1 + 0x5a) = 0;
    if (uVar2 < *(ushort *)(iVar5 + 0x10)) {
      *param_2 = 0;
      if (*(char *)(iVar5 + 3) == '\0') {
        iVar5 = FUN_00480b10((int)param_1);
        return iVar5;
      }
    }
    else {
      if (*(char *)(iVar5 + 3) == '\0') {
        uVar4 = FUN_0049c920((undefined1 *)(*(int *)(iVar5 + 0x38) + 8 + (uint)*(byte *)(iVar5 + 5))
                            );
        iVar5 = FUN_00480a70((int)param_1,uVar4);
        if (iVar5 != 0) {
          return iVar5;
        }
        iVar5 = FUN_00480b10((int)param_1);
        *param_2 = 0;
        return iVar5;
      }
      sVar6 = *(short *)((int)param_1 + 0x5e);
      do {
        if (sVar6 == 0) {
          *param_2 = 1;
          *(undefined1 *)((int)param_1 + 0x5b) = 0;
          return 0;
        }
        FUN_00480b90((int)param_1);
        sVar6 = *(short *)((int)param_1 + 0x5e);
        iVar5 = param_1[sVar6 + 0x22];
      } while (*(ushort *)(iVar5 + 0x10) <= *(ushort *)((int)param_1 + sVar6 * 2 + 0x60));
      *param_2 = 0;
      if (*(char *)(iVar5 + 2) != '\0') {
        iVar5 = FUN_00490c90(param_1,param_2);
        return iVar5;
      }
    }
  }
  return 0;
}


/* FUN_00490e00 @ 00490e00  kind=lib  attributed-by=lib-island  size=1602 */

void __cdecl
FUN_00490e00(undefined *param_1,byte *param_2,int param_3,undefined4 *param_4,byte param_5,
            uint param_6)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  int *_Dst;
  byte *pbVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  char *pcVar11;
  byte *pbVar12;
  void *_Src;
  bool bVar13;
  bool bVar14;
  int local_94;
  int local_80;
  int local_70;
  undefined1 local_6c [16];
  ushort local_5c;
  byte local_58;
  undefined1 local_38 [12];
  undefined1 local_2c [36];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  bVar14 = false;
  local_80 = 0;
  local_70 = 0;
  if ((param_2 == (byte *)0x0) || (*param_2 == 0)) {
    bVar14 = true;
  }
  if (param_2 == (byte *)0x0) {
LAB_00490e7d:
    if (((bVar14) && (*(char *)(param_3 + 0x37) == '\x02')) || ((char)param_6 < '\0'))
    goto LAB_00490e98;
    bVar13 = false;
  }
  else {
    pcVar11 = ":memory:";
    pbVar4 = param_2;
    do {
      bVar2 = *pbVar4;
      bVar13 = bVar2 < (byte)*pcVar11;
      if (bVar2 != *pcVar11) {
LAB_00490e71:
        uVar5 = -(uint)bVar13 | 1;
        goto LAB_00490e76;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar4[1];
      bVar13 = bVar2 < (byte)pcVar11[1];
      if (bVar2 != pcVar11[1]) goto LAB_00490e71;
      pbVar4 = pbVar4 + 2;
      pcVar11 = pcVar11 + 2;
    } while (bVar2 != 0);
    uVar5 = 0;
LAB_00490e76:
    if (uVar5 != 0) goto LAB_00490e7d;
LAB_00490e98:
    bVar13 = true;
    param_5 = param_5 | 2;
  }
  if (((param_6 & 0x100) != 0) && ((bVar13 || (bVar14)))) {
    param_6 = param_6 & 0xfffffeff | 0x200;
  }
  _Dst = (int *)FUN_004a0350(0x2c);
  if (_Dst == (int *)0x0) {
LAB_00490f4c:
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  memset(_Dst,0,0x2c);
  *(undefined1 *)(_Dst + 2) = 0;
  *_Dst = param_3;
  _Dst[7] = (int)_Dst;
  _Dst[8] = 1;
  if (((bVar14) || ((bVar13 && ((param_6 & 0x40) == 0)))) || ((param_6 & 0x20000) == 0)) {
LAB_004910e5:
    piVar7 = (int *)FUN_004a0350(0x54);
    if ((((piVar7 != (int *)0x0) && (memset(piVar7,0,0x54), piVar7 != (int *)0x0)) &&
        (iVar8 = FUN_004a1ea0(param_1,piVar7,(char *)param_2,0x4c,param_5,param_6,0x483ba0),
        iVar8 == 0)) && (iVar8 = FUN_004a24c0(*piVar7,100,local_6c), iVar8 == 0)) {
      *(byte *)(piVar7 + 4) = param_5;
      piVar7[1] = param_3;
      FUN_004a26b0(*piVar7,FUN_00471550,piVar7);
      _Dst[1] = (int)piVar7;
      piVar7[2] = 0;
      piVar7[3] = 0;
      if (*(char *)(*piVar7 + 0xd) != '\0') {
        *(ushort *)((int)piVar7 + 0x16) = *(ushort *)((int)piVar7 + 0x16) | 1;
      }
      uVar5 = (uint)local_5c * 0x100;
      puVar1 = (uint *)(piVar7 + 8);
      *puVar1 = uVar5;
      if (((uVar5 < 0x200) || (0x10000 < uVar5)) || ((uVar5 & uVar5 - 1) != 0)) {
        *puVar1 = 0;
        if ((param_2 != (byte *)0x0) && (!bVar13)) {
          *(undefined2 *)((int)piVar7 + 0x11) = 0;
        }
        local_58 = 0;
      }
      else {
        *(ushort *)((int)piVar7 + 0x16) = *(ushort *)((int)piVar7 + 0x16) | 2;
        iVar8 = FUN_0049c920(local_38);
        *(bool *)((int)piVar7 + 0x11) = iVar8 != 0;
        iVar8 = FUN_0049c920(local_2c);
        *(bool *)((int)piVar7 + 0x12) = iVar8 != 0;
      }
      iVar8 = FUN_004a27d0(*piVar7,puVar1,(uint)local_58);
      if (iVar8 == 0) {
        piVar7[9] = *puVar1 - (uint)local_58;
        local_70 = 0;
        if (*(char *)((int)_Dst + 9) != '\0') {
          piVar7[0x10] = 1;
          if (DAT_00582acc == 0) {
            iVar8 = 0;
          }
          else {
            iVar8 = (*DAT_00582b10)(2);
            if (DAT_00582acc != 0) {
              iVar10 = (*DAT_00582b10)(0);
              piVar7[0xe] = iVar10;
              if (iVar10 == 0) {
                *(undefined1 *)(param_3 + 0x38) = 0;
                goto LAB_004913f8;
              }
            }
          }
          FUN_004650e0(iVar8);
          piVar7[0x11] = (int)DAT_00583e80;
          DAT_00583e80 = piVar7;
          FUN_00465120(iVar8);
          goto LAB_004912bc;
        }
        goto LAB_0049138b;
      }
    }
  }
  else {
    iVar8 = *(int *)(param_1 + 8);
    pbVar4 = (byte *)FUN_004a0350(iVar8 + 1);
    *(undefined1 *)((int)_Dst + 9) = 1;
    if (pbVar4 == (byte *)0x0) {
      FUN_00466dd0((int)_Dst);
      goto LAB_00490f4c;
    }
    if (bVar13) {
      uVar5 = FUN_004aa9b0((char *)param_2);
      memcpy(pbVar4,_Src,uVar5 + 1);
    }
    else {
      *pbVar4 = 0;
      local_70 = (**(code **)(param_1 + 0x24))(param_1,param_2,iVar8 + 1,pbVar4);
      if (local_70 != 0) {
        FUN_00466dd0((int)pbVar4);
        FUN_00466dd0((int)_Dst);
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
    if (DAT_00582acc == 0) {
      local_80 = 0;
      local_94 = 0;
    }
    else {
      local_80 = (*DAT_00582b10)(4);
      if (local_80 != 0) {
        (*DAT_00582b18)(local_80);
      }
      if (DAT_00582acc == 0) {
        local_94 = 0;
      }
      else {
        local_94 = (*DAT_00582b10)(2);
        if (local_94 != 0) {
          (*DAT_00582b18)(local_94);
        }
      }
    }
    piVar7 = DAT_00583e80;
    if (DAT_00583e80 != (int *)0x0) {
LAB_00491040:
      pbVar12 = (byte *)((int *)*piVar7)[0x24];
      pbVar6 = pbVar4;
      do {
        bVar2 = *pbVar6;
        bVar14 = bVar2 < *pbVar12;
        if (bVar2 != *pbVar12) {
LAB_00491070:
          uVar5 = -(uint)bVar14 | 1;
          goto LAB_00491075;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar6[1];
        bVar14 = bVar2 < pbVar12[1];
        if (bVar2 != pbVar12[1]) goto LAB_00491070;
        pbVar6 = pbVar6 + 2;
        pbVar12 = pbVar12 + 2;
      } while (bVar2 != 0);
      uVar5 = 0;
LAB_00491075:
      if ((uVar5 != 0) || (*(undefined **)*piVar7 != param_1)) goto LAB_00491080;
      iVar8 = *(int *)(param_3 + 0x14) + -1;
      if (-1 < iVar8) {
        piVar9 = (int *)(iVar8 * 0x10 + *(int *)(param_3 + 0x10) + 4);
        do {
          if ((*piVar9 != 0) && (*(int **)(*piVar9 + 4) == piVar7)) {
            if (local_94 != 0) {
              (*DAT_00582b20)(local_94);
            }
            if (local_80 != 0) {
              (*DAT_00582b20)(local_80);
            }
            FUN_00466dd0((int)pbVar4);
            FUN_00466dd0((int)_Dst);
            __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
            return;
          }
          piVar9 = piVar9 + -4;
          iVar8 = iVar8 + -1;
        } while (-1 < iVar8);
      }
      _Dst[1] = (int)piVar7;
      piVar7[0x10] = piVar7[0x10] + 1;
    }
LAB_004910bd:
    if (local_94 != 0) {
      (*DAT_00582b20)(local_94);
    }
    FUN_00466dd0((int)pbVar4);
    if (piVar7 == (int *)0x0) goto LAB_004910e5;
LAB_004912bc:
    if (*(char *)((int)_Dst + 9) != '\0') {
      iVar8 = 0;
      if (0 < *(int *)(param_3 + 0x14)) {
        piVar9 = (int *)(*(int *)(param_3 + 0x10) + 4);
LAB_004912e0:
        iVar10 = *piVar9;
        if ((iVar10 == 0) || (*(char *)(iVar10 + 9) == '\0')) goto LAB_004912ec;
        iVar8 = *(int *)(iVar10 + 0x18);
        while (iVar8 != 0) {
          iVar10 = *(int *)(iVar10 + 0x18);
          iVar8 = *(int *)(iVar10 + 0x18);
        }
        if ((uint)_Dst[1] < *(uint *)(iVar10 + 4)) {
          _Dst[5] = iVar10;
          _Dst[6] = 0;
          *(int **)(iVar10 + 0x18) = _Dst;
        }
        else {
          iVar8 = *(int *)(iVar10 + 0x14);
          while ((iVar8 != 0 &&
                 (iVar3 = *(int *)(iVar10 + 0x14), *(uint *)(iVar3 + 4) < (uint)_Dst[1]))) {
            iVar8 = *(int *)(iVar3 + 0x14);
            iVar10 = iVar3;
          }
          iVar8 = *(int *)(iVar10 + 0x14);
          _Dst[5] = iVar8;
          _Dst[6] = iVar10;
          if (iVar8 != 0) {
            *(int **)(iVar8 + 0x18) = _Dst;
          }
          *(int **)(iVar10 + 0x14) = _Dst;
        }
      }
    }
LAB_0049138b:
    *param_4 = _Dst;
    if (local_70 == 0) {
      iVar8 = _Dst[1];
      FUN_0048fbc0(_Dst);
      if (*(char *)((int)_Dst + 9) != '\0') {
        piVar7 = _Dst + 3;
        *piVar7 = *piVar7 + -1;
        if (*piVar7 == 0) {
          if (*(int *)(_Dst[1] + 0x38) != 0) {
            (*DAT_00582b20)(*(int *)(_Dst[1] + 0x38));
          }
          *(undefined1 *)((int)_Dst + 10) = 0;
        }
      }
      if (*(int *)(iVar8 + 0x30) == 0) {
        iVar8 = *(int *)(*(int *)_Dst[1] + 0xb4);
        *(undefined4 *)(iVar8 + 0x10) = 2000;
        iVar8 = *(int *)(iVar8 + 0x28);
        if (iVar8 != 0) {
          (*DAT_00582b40)(iVar8,2000);
        }
      }
      goto LAB_00491426;
    }
  }
LAB_004913f8:
  if ((piVar7 != (int *)0x0) && ((uint *)*piVar7 != (uint *)0x0)) {
    FUN_004a17a0((uint *)*piVar7);
  }
  FUN_00466dd0((int)piVar7);
  FUN_00466dd0((int)_Dst);
  *param_4 = 0;
LAB_00491426:
  if (local_80 != 0) {
    (*DAT_00582b20)(local_80);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
LAB_00491080:
  piVar7 = (int *)piVar7[0x11];
  if (piVar7 == (int *)0x0) goto LAB_004910bd;
  goto LAB_00491040;
LAB_004912ec:
  iVar8 = iVar8 + 1;
  piVar9 = piVar9 + 4;
  if (*(int *)(param_3 + 0x14) <= iVar8) goto LAB_0049138b;
  goto LAB_004912e0;
}


/* FUN_00491450 @ 00491450  kind=lib  attributed-by=lib-island  size=454 */

int __cdecl FUN_00491450(int *param_1,undefined4 *param_2)

{
  short *psVar1;
  short sVar2;
  undefined4 *puVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined1 *puVar8;
  
  if (*(byte *)((int)param_1 + 0x5b) < 2) {
    iVar6 = 0;
  }
  else if (*(byte *)((int)param_1 + 0x5b) == 3) {
    iVar6 = param_1[0x15];
  }
  else {
    *(undefined1 *)((int)param_1 + 0x5b) = 0;
    iVar6 = FUN_004715a0(param_1,(byte *)param_1[0x14],param_1[0x12],param_1[0x13],0,
                         (uint *)(param_1 + 0x15));
    if (iVar6 != 0) {
      return iVar6;
    }
    FUN_00466dd0(param_1[0x14]);
    param_1[0x14] = 0;
    iVar6 = 0;
  }
  if (iVar6 != 0) {
    return iVar6;
  }
  *(undefined1 *)((int)param_1 + 0x59) = 0;
  if (*(char *)((int)param_1 + 0x5b) == '\0') {
    *param_2 = 1;
    return 0;
  }
  iVar6 = param_1[0x15];
  param_1[0x15] = 0;
  if (-1 < iVar6) {
    iVar5 = (int)*(short *)((int)param_1 + 0x5e);
    iVar6 = param_1[iVar5 + 0x22];
    if (*(char *)(iVar6 + 3) == '\0') {
      uVar7 = (uint)*(ushort *)((int)param_1 + iVar5 * 2 + 0x60);
      puVar8 = (undefined1 *)
               ((uint)(CONCAT11(*(undefined1 *)(*(int *)(iVar6 + 0x40) + uVar7 * 2),
                                *(undefined1 *)(*(int *)(iVar6 + 0x40) + 1 + uVar7 * 2)) &
                      *(ushort *)(iVar6 + 0x12)) + *(int *)(iVar6 + 0x38));
      iVar6 = FUN_00480a70((int)param_1,
                           CONCAT31(CONCAT21(CONCAT11(*puVar8,puVar8[1]),puVar8[2]),puVar8[3]));
      if (iVar6 == 0) {
        iVar6 = FUN_00480be0((int)param_1);
        *param_2 = 0;
        return iVar6;
      }
    }
    else {
      sVar2 = *(short *)((int)param_1 + iVar5 * 2 + 0x60);
      while (sVar2 == 0) {
        if (*(short *)((int)param_1 + 0x5e) == 0) {
          *(undefined1 *)((int)param_1 + 0x5b) = 0;
          *param_2 = 1;
          return 0;
        }
        if ((param_1[*(short *)((int)param_1 + 0x5e) + 0x22] != 0) &&
           (puVar3 = *(undefined4 **)(param_1[*(short *)((int)param_1 + 0x5e) + 0x22] + 0x44),
           puVar3 != (undefined4 *)0x0)) {
          puVar4 = (uint *)puVar3[4];
          FUN_004a3a80(puVar3);
          if (*(int *)(puVar4[0x2d] + 0xc) == 0) {
            FUN_00484370(puVar4);
          }
        }
        *(short *)((int)param_1 + 0x5e) = *(short *)((int)param_1 + 0x5e) + -1;
        *(undefined2 *)((int)param_1 + 0x42) = 0;
        *(undefined1 *)((int)param_1 + 0x5a) = 0;
        sVar2 = *(short *)((int)param_1 + *(short *)((int)param_1 + 0x5e) * 2 + 0x60);
      }
      *(undefined2 *)((int)param_1 + 0x42) = 0;
      *(undefined1 *)((int)param_1 + 0x5a) = 0;
      psVar1 = (short *)((int)param_1 + *(short *)((int)param_1 + 0x5e) * 2 + 0x60);
      *psVar1 = *psVar1 + -1;
      if ((*(char *)(param_1[*(short *)((int)param_1 + 0x5e) + 0x22] + 2) != '\0') &&
         (*(char *)(param_1[*(short *)((int)param_1 + 0x5e) + 0x22] + 3) == '\0')) {
        iVar6 = FUN_00491450(param_1,param_2);
        *param_2 = 0;
        return iVar6;
      }
      iVar6 = 0;
      *param_2 = 0;
    }
    return iVar6;
  }
  *param_2 = 0;
  return 0;
}


/* FUN_004916b0 @ 004916b0  kind=lib  attributed-by=lib-island  size=594 */

uint __cdecl FUN_004916b0(int *param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  undefined4 *local_c;
  int *local_8;
  
  uVar6 = param_2;
  piVar5 = param_1;
  piVar8 = (int *)param_1[1];
  local_8 = piVar8;
  FUN_0048fbc0(param_1);
  if (param_2 == 0) {
    for (uVar1 = piVar8[2]; uVar1 != 0; uVar1 = *(uint *)(uVar1 + 8)) {
      if ((*(char *)(uVar1 + 0x5b) == '\x01') &&
         (uVar6 = FUN_00489c10(uVar1), param_2 = uVar6, uVar6 != 0)) goto LAB_00491701;
    }
    uVar6 = 0;
    param_2 = uVar6;
  }
  else {
    param_2 = 0;
  }
LAB_00491701:
  if (uVar6 != 0) {
    FUN_00491f60(param_1,uVar6);
  }
  if ((char)param_1[2] != '\x02') goto LAB_004918cc;
  uVar6 = FUN_004a2510((uint *)*piVar8);
  if (uVar6 != 0) {
    param_2 = uVar6;
  }
  puVar2 = (uint *)*piVar8;
  param_1 = (int *)puVar2[10];
  if ((param_1 == (int *)0x0) &&
     (param_1 = (int *)FUN_004a37e0((int *)puVar2[0x2d],1,1,&local_c), iVar3 = DAT_00582bb8,
     param_1 == (int *)0x0)) {
    if (local_c[4] != 0) {
      puVar2[0x28] = puVar2[0x28] + 1;
      goto LAB_0049183a;
    }
    local_c[4] = puVar2;
    if (iVar3 / (int)puVar2[0x20] == 0) {
      FUN_004683f0(0xb,"database corruption at line %d of [%.10s]");
      param_1 = (int *)0xb;
LAB_004917e8:
      if ((*(byte *)(local_c + 6) & 2) != 0) {
        FUN_00486ed0((int)local_c);
      }
      iVar3 = local_c[7];
      *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + -1;
      if (local_c[5] == 1) {
        *(undefined4 *)(iVar3 + 0x2c) = 0;
      }
      (*DAT_00582b4c)(*(undefined4 *)(iVar3 + 0x28),*local_c,1);
      goto LAB_0049181a;
    }
    if (((*(char *)((int)puVar2 + 0xe) == '\0') && (puVar2[6] != 0)) && (*(int *)puVar2[0xf] != 0))
    {
      puVar2[0x29] = puVar2[0x29] + 1;
      param_1 = (int *)FUN_004876e0((int)local_c);
      if (param_1 != (int *)0x0) goto LAB_004917e8;
    }
    else {
      if (puVar2[0x21] == 0) {
        param_1 = (int *)0xd;
        goto LAB_004917e8;
      }
      memset((void *)local_c[1],0,puVar2[0x20]);
    }
LAB_0049183a:
    piVar8 = local_8;
    iVar3 = local_c[2];
    iVar7 = local_c[1];
    *(int *)(iVar3 + 0x38) = iVar7;
    *(undefined4 **)(iVar3 + 0x44) = local_c;
    *(int **)(iVar3 + 0x34) = local_8;
    *(undefined4 *)(iVar3 + 0x48) = 1;
    *(undefined1 *)(iVar3 + 5) = 100;
    iVar7 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar7 + 0x1c),*(undefined1 *)(iVar7 + 0x1d)),
                              *(undefined1 *)(iVar7 + 0x1e)),*(undefined1 *)(iVar7 + 0x1f));
    if (iVar7 == 0) {
      iVar7 = *(int *)(*local_8 + 0x18);
    }
    local_8[0xb] = iVar7;
    puVar4 = *(undefined4 **)(iVar3 + 0x44);
    if (puVar4 != (undefined4 *)0x0) {
      puVar2 = (uint *)puVar4[4];
      FUN_004a3a80(puVar4);
      if (*(int *)(puVar2[0x2d] + 0xc) == 0) {
        FUN_00484370(puVar2);
      }
    }
  }
  else {
LAB_0049181a:
    if (*(int *)(puVar2[0x2d] + 0xc) == 0) {
      FUN_00484370(puVar2);
    }
    local_c = (undefined4 *)0x0;
    piVar8 = local_8;
    if (param_1 == (int *)0x0) goto LAB_0049183a;
  }
  *(undefined1 *)((int)piVar8 + 0x13) = 1;
LAB_004918cc:
  FUN_00471200(piVar5);
  if (*(char *)((int)piVar5 + 9) != '\0') {
    piVar8 = piVar5 + 3;
    *piVar8 = *piVar8 + -1;
    if (*piVar8 == 0) {
      if (*(int *)(piVar5[1] + 0x38) != 0) {
        (*DAT_00582b20)(*(int *)(piVar5[1] + 0x38));
      }
      *(undefined1 *)((int)piVar5 + 10) = 0;
    }
  }
  return param_2;
}


/* FUN_00491910 @ 00491910  kind=lib  attributed-by=lib-island  size=170 */

uint __cdecl FUN_00491910(undefined4 *param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  
  if ((param_1 != (undefined4 *)0x0) && (*(char *)(param_1 + 2) == '\x02')) {
    puVar2 = (undefined4 *)param_1[1];
    FUN_0048fbc0(param_1);
    uVar4 = FUN_004a25c0((undefined4 *)*puVar2,param_2,param_3);
    if (uVar4 == 0) {
      if ((param_3 < 0) && ((*(byte *)((int)puVar2 + 0x16) & 8) != 0)) {
        puVar2[0xb] = 0;
      }
      uVar4 = FUN_00483380((int)puVar2);
      iVar3 = *(int *)(puVar2[3] + 0x38);
      puVar2[0xb] = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar3 + 0x1c),
                                               *(undefined1 *)(iVar3 + 0x1d)),
                                      *(undefined1 *)(iVar3 + 0x1e)),*(undefined1 *)(iVar3 + 0x1f));
    }
    if (*(char *)((int)param_1 + 9) != '\0') {
      piVar1 = param_1 + 3;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        if (*(int *)(param_1[1] + 0x38) != 0) {
          (*DAT_00582b20)(*(int *)(param_1[1] + 0x38));
        }
        *(undefined1 *)((int)param_1 + 10) = 0;
      }
    }
    return uVar4;
  }
  return 0;
}


/* FUN_004919c0 @ 004919c0  kind=lib  attributed-by=lib-island  size=113 */

undefined4 __cdecl FUN_004919c0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  FUN_0048fbc0(param_1);
  iVar1 = param_1[1];
  if (*(char *)((int)param_1 + 9) != '\0') {
    if ((*(undefined4 **)(iVar1 + 0x4c) != param_1) && ((*(byte *)(iVar1 + 0x16) & 0x20) != 0)) {
LAB_004919e6:
      uVar3 = 0x106;
      goto LAB_00491a0d;
    }
    for (piVar2 = *(int **)(iVar1 + 0x48); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[3]) {
      if ((((undefined4 *)*piVar2 != param_1) && (piVar2[1] == 1)) && ((char)piVar2[2] != '\x01'))
      goto LAB_004919e6;
    }
  }
  uVar3 = 0;
LAB_00491a0d:
  if (*(char *)((int)param_1 + 9) != '\0') {
    piVar2 = param_1 + 3;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      if (*(int *)(iVar1 + 0x38) != 0) {
        (*DAT_00582b20)(*(int *)(iVar1 + 0x38));
      }
      *(undefined1 *)((int)param_1 + 10) = 0;
    }
  }
  return uVar3;
}


/* FUN_00491a40 @ 00491a40  kind=lib  attributed-by=lib-island  size=108 */

ushort __cdecl FUN_00491a40(undefined4 *param_1,int param_2)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  FUN_0048fbc0(param_1);
  if ((-1 < param_2) &&
     (*(ushort *)(param_1[1] + 0x16) = *(ushort *)(param_1[1] + 0x16) & 0xfffb, param_2 != 0)) {
    *(ushort *)(param_1[1] + 0x16) = *(ushort *)(param_1[1] + 0x16) | 4;
  }
  uVar2 = *(ushort *)(param_1[1] + 0x16);
  if (*(char *)((int)param_1 + 9) != '\0') {
    piVar1 = param_1 + 3;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      iVar3 = *(int *)(param_1[1] + 0x38);
      if (iVar3 != 0) {
        (*DAT_00582b20)(iVar3);
      }
      *(undefined1 *)((int)param_1 + 10) = 0;
    }
  }
  return uVar2 >> 2 & 1;
}


/* FUN_00491ab0 @ 00491ab0  kind=lib  attributed-by=lib-island  size=113 */

undefined4 __cdecl FUN_00491ab0(undefined4 *param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = param_1[1];
  uVar3 = 0;
  FUN_0048fbc0(param_1);
  if (((*(byte *)(iVar2 + 0x16) & 2) == 0) || ((param_2 != '\0') == (bool)*(char *)(iVar2 + 0x11)))
  {
    *(bool *)(iVar2 + 0x11) = param_2 != '\0';
    *(bool *)(iVar2 + 0x12) = param_2 == '\x02';
  }
  else {
    uVar3 = 8;
  }
  if (*(char *)((int)param_1 + 9) != '\0') {
    piVar1 = param_1 + 3;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      if (*(int *)(param_1[1] + 0x38) != 0) {
        (*DAT_00582b20)(*(int *)(param_1[1] + 0x38));
      }
      *(undefined1 *)((int)param_1 + 10) = 0;
    }
  }
  return uVar3;
}


/* FUN_00491b30 @ 00491b30  kind=lib  attributed-by=lib-island  size=144 */

undefined4 __cdecl FUN_00491b30(undefined4 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  piVar1 = (int *)param_1[1];
  FUN_0048fbc0(param_1);
  iVar2 = *(int *)(*piVar1 + 0xb4);
  iVar3 = *(int *)(iVar2 + 0x28);
  *(uint *)(iVar2 + 0x10) = param_2;
  if (iVar3 != 0) {
    if ((int)param_2 < 0) {
      uVar4 = *(int *)(iVar2 + 0x18) + *(int *)(iVar2 + 0x14);
      lVar5 = __allmul(param_2,(int)param_2 >> 0x1f,0xfffffc00,-1);
      uVar6 = __alldiv((uint)lVar5,(uint)((ulonglong)lVar5 >> 0x20),uVar4,(int)uVar4 >> 0x1f);
      param_2 = (uint)uVar6;
    }
    (*DAT_00582b40)(iVar3,param_2);
  }
  if (*(char *)((int)param_1 + 9) != '\0') {
    piVar1 = param_1 + 3;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      if (*(int *)(param_1[1] + 0x38) != 0) {
        (*DAT_00582b20)(*(int *)(param_1[1] + 0x38));
      }
      *(undefined1 *)((int)param_1 + 10) = 0;
    }
  }
  return 0;
}


/* FUN_00491bc0 @ 00491bc0  kind=lib  attributed-by=lib-island  size=49 */

void __cdecl FUN_00491bc0(int param_1,undefined4 param_2,undefined4 param_3)

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


/* FUN_00491c00 @ 00491c00  kind=lib  attributed-by=lib-island  size=217 */

int __cdecl FUN_00491c00(undefined4 *param_1,uint param_2,uint param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)param_1[1];
  FUN_0048fbc0(param_1);
  if ((*(byte *)((int)piVar1 + 0x16) & 2) != 0) {
    if (*(char *)((int)param_1 + 9) != '\0') {
      piVar1 = param_1 + 3;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        if (*(int *)(param_1[1] + 0x38) != 0) {
          (*DAT_00582b20)(*(int *)(param_1[1] + 0x38));
        }
        *(undefined1 *)((int)param_1 + 10) = 0;
      }
    }
    return 8;
  }
  if ((int)param_3 < 0) {
    param_3 = piVar1[8] - piVar1[9];
  }
  if ((param_2 - 0x200 < 0xfe01) && ((param_2 & param_2 - 1) == 0)) {
    piVar1[8] = param_2;
    FUN_00486af0((undefined4 *)piVar1[0x14]);
    piVar1[0x14] = 0;
  }
  iVar2 = FUN_004a27d0(*piVar1,(uint *)(piVar1 + 8),param_3);
  piVar1[9] = piVar1[8] - (param_3 & 0xffff);
  if (param_4 != 0) {
    *(ushort *)((int)piVar1 + 0x16) = *(ushort *)((int)piVar1 + 0x16) | 2;
  }
  if (*(char *)((int)param_1 + 9) != '\0') {
    piVar1 = param_1 + 3;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      if (*(int *)(param_1[1] + 0x38) != 0) {
        (*DAT_00582b20)(*(int *)(param_1[1] + 0x38));
      }
      *(undefined1 *)((int)param_1 + 10) = 0;
    }
  }
  return iVar2;
}


/* FUN_00491ce0 @ 00491ce0  kind=lib  attributed-by=lib-island  size=77 */

undefined4 __cdecl FUN_00491ce0(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[1];
  FUN_0048fbc0(param_1);
  FUN_004a2900(*piVar1,param_2,param_3,param_4);
  if (*(char *)((int)param_1 + 9) != '\0') {
    piVar1 = param_1 + 3;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      if (*(int *)(param_1[1] + 0x38) != 0) {
        (*DAT_00582b20)(*(int *)(param_1[1] + 0x38));
      }
      *(undefined1 *)((int)param_1 + 10) = 0;
    }
  }
  return 0;
}


/* FUN_00491d30 @ 00491d30  kind=lib  attributed-by=lib-island  size=475 */

uint __cdecl FUN_00491d30(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint *puVar4;
  code *pcVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  
  iVar1 = param_1[1];
  *(ushort *)(iVar1 + 0x16) = *(ushort *)(iVar1 + 0x16) & 0xffef;
  if (param_2 == 1) {
    *(ushort *)(iVar1 + 0x16) = *(ushort *)(iVar1 + 0x16) | 0x10;
  }
  piVar2 = (int *)param_1[1];
  uVar9 = 0;
  FUN_0048fbc0(param_1);
  if (((char)param_1[2] != '\x02') && ((char)param_1[2] != '\x01')) {
    if (((*(byte *)((int)piVar2 + 0x16) & 0x40) == 0) || (*(int *)piVar2[0x13] == 0)) {
      uVar9 = FUN_00487510((int)param_1,1,'\x01');
      if (uVar9 == 0) {
        *(ushort *)((int)piVar2 + 0x16) = *(ushort *)((int)piVar2 + 0x16) & 0xfff7;
        if (piVar2[0xb] == 0) {
          *(ushort *)((int)piVar2 + 0x16) = *(ushort *)((int)piVar2 + 0x16) | 8;
        }
LAB_00491dc0:
        if (piVar2[3] == 0) goto code_r0x00491dc6;
        if (uVar9 != 0) goto LAB_00491ddb;
        goto LAB_00491e17;
      }
    }
    else {
      uVar9 = 0x106;
    }
  }
LAB_00491e88:
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
  if (uVar9 == 0) {
    iVar6 = *(int *)(*(int *)(iVar1 + 0xc) + 0x38);
    cVar7 = (char)param_2;
    if ((((*(char *)(iVar6 + 0x12) != cVar7) || (*(char *)(iVar6 + 0x13) != cVar7)) &&
        (uVar9 = FUN_0048ed50(param_1,2), uVar9 == 0)) &&
       (uVar9 = FUN_004a2c80(*(undefined4 **)(*(int *)(iVar1 + 0xc) + 0x44)), uVar9 == 0)) {
      *(char *)(iVar6 + 0x12) = cVar7;
      *(char *)(iVar6 + 0x13) = cVar7;
    }
  }
  *(ushort *)(iVar1 + 0x16) = *(ushort *)(iVar1 + 0x16) & 0xffef;
  return uVar9;
code_r0x00491dc6:
  uVar9 = FUN_0047fc00(piVar2);
  if (uVar9 != 0) {
LAB_00491ddb:
    if ((*(char *)((int)piVar2 + 0x13) == '\0') && (piVar2[3] != 0)) {
      puVar3 = *(undefined4 **)(piVar2[3] + 0x44);
      if (puVar3 != (undefined4 *)0x0) {
        puVar4 = (uint *)puVar3[4];
        FUN_004a3a80(puVar3);
        if (*(int *)(puVar4[0x2d] + 0xc) == 0) {
          FUN_00484370(puVar4);
        }
      }
      piVar2[3] = 0;
    }
LAB_00491e17:
    if (((char)uVar9 != '\x05') || (*(char *)((int)piVar2 + 0x13) != '\0')) goto LAB_00491e56;
    iVar6 = piVar2[1];
    if (((undefined4 *)(iVar6 + 0x1ac) == (undefined4 *)0x0) ||
       ((pcVar5 = *(code **)(iVar6 + 0x1ac), pcVar5 == (code *)0x0 || (*(int *)(iVar6 + 0x1b4) < 0))
       )) goto LAB_00491e56;
    iVar8 = (*pcVar5)(*(undefined4 *)(iVar6 + 0x1b0),*(int *)(iVar6 + 0x1b4));
    if (iVar8 == 0) goto LAB_00491e4f;
    *(int *)(iVar6 + 0x1b4) = *(int *)(iVar6 + 0x1b4) + 1;
  }
  goto LAB_00491dc0;
LAB_00491e4f:
  *(undefined4 *)(iVar6 + 0x1b4) = 0xffffffff;
LAB_00491e56:
  if (uVar9 == 0) {
    if (((char)param_1[2] == '\0') &&
       (piVar2[10] = piVar2[10] + 1, *(char *)((int)param_1 + 9) != '\0')) {
      *(undefined1 *)(param_1 + 9) = 1;
      param_1[10] = piVar2[0x12];
      piVar2[0x12] = (int)(param_1 + 7);
    }
    *(undefined1 *)(param_1 + 2) = 1;
    if (*(char *)((int)piVar2 + 0x13) == '\0') {
      *(undefined1 *)((int)piVar2 + 0x13) = 1;
    }
  }
  goto LAB_00491e88;
}


/* FUN_00491f60 @ 00491f60  kind=lib  attributed-by=lib-island  size=218 */

void __cdecl FUN_00491f60(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint *puVar3;
  int iVar4;
  int *piVar5;
  
  if (param_1 != (undefined4 *)0x0) {
    FUN_0048fbc0(param_1);
    for (iVar1 = *(int *)(param_1[1] + 8); iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
      FUN_00466dd0(*(int *)(iVar1 + 0x50));
      *(undefined4 *)(iVar1 + 0x54) = param_2;
      iVar4 = 0;
      *(undefined4 *)(iVar1 + 0x50) = 0;
      *(undefined1 *)(iVar1 + 0x5b) = 3;
      if (*(ushort *)(iVar1 + 0x5e) < 0x8000) {
        piVar5 = (int *)(iVar1 + 0x88);
        do {
          if ((*piVar5 != 0) &&
             (puVar2 = *(undefined4 **)(*piVar5 + 0x44), puVar2 != (undefined4 *)0x0)) {
            puVar3 = (uint *)puVar2[4];
            FUN_004a3a80(puVar2);
            if (*(int *)(puVar3[0x2d] + 0xc) == 0) {
              FUN_00484370(puVar3);
            }
          }
          *piVar5 = 0;
          iVar4 = iVar4 + 1;
          piVar5 = piVar5 + 1;
        } while (iVar4 <= *(short *)(iVar1 + 0x5e));
      }
    }
    if (*(char *)((int)param_1 + 9) != '\0') {
      piVar5 = param_1 + 3;
      *piVar5 = *piVar5 + -1;
      if (*piVar5 == 0) {
        if (*(int *)(param_1[1] + 0x38) != 0) {
          (*DAT_00582b20)(*(int *)(param_1[1] + 0x38));
        }
        *(undefined1 *)((int)param_1 + 10) = 0;
      }
    }
  }
  return;
}


/* FUN_00492040 @ 00492040  kind=lib  attributed-by=lib-island  size=146 */

uint __cdecl FUN_00492040(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar2 = param_1[1];
  FUN_0048fbc0(param_1);
  iVar3 = *(int *)(iVar2 + 0xc);
  iVar4 = *(int *)(iVar3 + 0x38);
  uVar5 = FUN_004a2c80(*(undefined4 **)(iVar3 + 0x44));
  if (uVar5 == 0) {
    *(char *)(iVar4 + 0x24 + param_2 * 4) = (char)((uint)param_3 >> 0x18);
    *(char *)(iVar4 + 0x25 + param_2 * 4) = (char)((uint)param_3 >> 0x10);
    *(char *)(iVar4 + 0x26 + param_2 * 4) = (char)((uint)param_3 >> 8);
    *(char *)(iVar4 + 0x27 + param_2 * 4) = (char)param_3;
    if (param_2 == 7) {
      *(char *)(iVar2 + 0x12) = (char)param_3;
    }
  }
  if (*(char *)((int)param_1 + 9) != '\0') {
    piVar1 = param_1 + 3;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      if (*(int *)(param_1[1] + 0x38) != 0) {
        (*DAT_00582b20)(*(int *)(param_1[1] + 0x38));
      }
      *(undefined1 *)((int)param_1 + 10) = 0;
    }
  }
  return uVar5;
}


/* FUN_004920e0 @ 004920e0  kind=lib  attributed-by=lib-island  size=33 */

undefined4 FUN_004920e0(void)

{
  FUN_004683f0(0xe,"cannot open file at line %d of [%.10s]");
  return 0xe;
}


/* FUN_00492110 @ 00492110  kind=lib  attributed-by=lib-island  size=266 */

void __cdecl FUN_00492110(int *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  if (*(char *)((int)param_1 + 0x13) == '\0') {
    param_1[0x13] = param_1[0x13] + 1;
    iVar6 = param_1[0x13];
  }
  else {
    bVar1 = *(char *)((int)param_1 + 0x13) - 1;
    *(byte *)((int)param_1 + 0x13) = bVar1;
    iVar6 = param_1[bVar1 + 7];
  }
  piVar4 = (int *)param_1[2];
  iVar5 = **(int **)(*(int *)(*param_1 + 0x10) + 0xc + param_2 * 0x10);
  iVar3 = piVar4[7];
  if ((iVar3 < piVar4[8]) || (iVar2 = FUN_0047de10(piVar4), iVar2 == 0)) {
    piVar4[7] = piVar4[7] + 1;
    iVar2 = piVar4[1];
    *(undefined2 *)(iVar2 + iVar3 * 0x14) = 7;
    *(undefined1 *)(iVar2 + 3 + iVar3 * 0x14) = 0;
    *(int *)(iVar2 + 4 + iVar3 * 0x14) = iVar5 + 1;
    *(int *)(iVar2 + 8 + iVar3 * 0x14) = iVar6;
    *(undefined4 *)(iVar2 + 0xc + iVar3 * 0x14) = 0;
    *(undefined4 *)(iVar2 + 0x10 + iVar3 * 0x14) = 0;
  }
  iVar5 = piVar4[7];
  if ((iVar5 < piVar4[8]) || (iVar3 = FUN_0047de10(piVar4), iVar3 == 0)) {
    piVar4[7] = piVar4[7] + 1;
    iVar3 = piVar4[1];
    *(undefined2 *)(iVar3 + iVar5 * 0x14) = 0x25;
    *(undefined1 *)(iVar3 + 3 + iVar5 * 0x14) = 0;
    *(int *)(iVar3 + 4 + iVar5 * 0x14) = param_2;
    *(undefined4 *)(iVar3 + 8 + iVar5 * 0x14) = 1;
    *(int *)(iVar3 + 0xc + iVar5 * 0x14) = iVar6;
    *(undefined4 *)(iVar3 + 0x10 + iVar5 * 0x14) = 0;
  }
  if ((iVar6 != 0) && (*(byte *)((int)param_1 + 0x13) < 8)) {
    iVar5 = 0;
    piVar4 = param_1 + 0x19;
    while (piVar4[4] != iVar6) {
      iVar5 = iVar5 + 1;
      piVar4 = piVar4 + 6;
      if (9 < iVar5) {
        param_1[*(byte *)((int)param_1 + 0x13) + 7] = iVar6;
        *(char *)((int)param_1 + 0x13) = *(char *)((int)param_1 + 0x13) + '\x01';
        return;
      }
    }
    *(undefined1 *)(piVar4 + 2) = 1;
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


/* FUN_00492280 @ 00492280  kind=lib  attributed-by=lib-island  size=278 */

int __cdecl
FUN_00492280(int param_1,int param_2,int param_3,undefined4 *param_4,undefined4 *param_5)

{
  undefined4 *puVar1;
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
        puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x10) + 4 + local_8);
        if (puVar1 != (undefined4 *)0x0) {
          piVar2 = (int *)puVar1[1];
          FUN_0048fbc0(puVar1);
          if (*(char *)((int)piVar2 + 0x13) == '\0') {
            iVar3 = *piVar2;
            iVar7 = 0;
            if (*(int *)(iVar3 + 0xb8) != 0) {
              iVar7 = FUN_004ba4a0(*(int *)(iVar3 + 0xb8),param_3,*(undefined **)(iVar3 + 0x98),
                                   *(undefined4 *)(iVar3 + 0x9c),(uint)*(byte *)(iVar3 + 9),
                                   *(int *)(iVar3 + 0x80),*(undefined4 *)(iVar3 + 0xb0),param_4,
                                   param_5);
            }
          }
          else {
            iVar7 = 6;
          }
          if (*(char *)((int)puVar1 + 9) != '\0') {
            piVar2 = puVar1 + 3;
            *piVar2 = *piVar2 + -1;
            if (*piVar2 == 0) {
              if (*(int *)(puVar1[1] + 0x38) != 0) {
                (*DAT_00582b20)(*(int *)(puVar1[1] + 0x38));
              }
              *(undefined1 *)((int)puVar1 + 10) = 0;
            }
          }
        }
        param_4 = (undefined4 *)0x0;
        param_5 = (undefined4 *)0x0;
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


/* FUN_00492710 @ 00492710  kind=lib  attributed-by=lib-island  size=186 */

void __cdecl FUN_00492710(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x1d8);
  while (iVar2 != 0) {
    puVar1 = *(undefined4 **)(param_1 + 0x1d8);
    *(undefined4 *)(param_1 + 0x1d8) = puVar1[4];
    if (*(int *)(param_1 + 0x1f0) == 0) {
      if ((puVar1 < *(undefined4 **)(param_1 + 0x104)) ||
         (*(undefined4 **)(param_1 + 0x108) <= puVar1)) {
        FUN_00466dd0((int)puVar1);
      }
      else {
        *puVar1 = *(undefined4 *)(param_1 + 0x100);
        *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + -1;
        *(undefined4 **)(param_1 + 0x100) = puVar1;
      }
    }
    else if ((puVar1 < *(undefined4 **)(param_1 + 0x104)) ||
            (*(undefined4 **)(param_1 + 0x108) <= puVar1)) {
      iVar2 = (*DAT_00582af0._4_4_)(puVar1);
      **(int **)(param_1 + 0x1f0) = **(int **)(param_1 + 0x1f0) + iVar2;
    }
    else {
      **(int **)(param_1 + 0x1f0) = **(int **)(param_1 + 0x1f0) + (uint)*(ushort *)(param_1 + 0xe8);
    }
    iVar2 = *(int *)(param_1 + 0x1d8);
  }
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  *(undefined4 *)(param_1 + 0x1e4) = 0;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  return;
}


/* FUN_004927e0 @ 004927e0  kind=lib  attributed-by=lib-island  size=555 */

int __cdecl FUN_004927e0(int *param_1,int *param_2,byte *param_3)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  piVar4 = (int *)param_1[2];
  iVar2 = param_1[0x13] + 1;
  iVar3 = param_1[0x13] + 2;
  param_1[0x13] = iVar3;
  if (piVar4 == (int *)0x0) {
    piVar4 = FUN_004af150(*param_1);
    param_1[2] = (int)piVar4;
    if (piVar4 != (int *)0x0) {
      FUN_004ae760(piVar4,0x94);
    }
  }
  iVar6 = piVar4[7];
  if ((iVar6 < piVar4[8]) || (iVar5 = FUN_0047de10(piVar4), iVar5 == 0)) {
    piVar4[7] = piVar4[7] + 1;
    puVar1 = (undefined2 *)(piVar4[1] + iVar6 * 0x14);
    *(int *)(puVar1 + 2) = iVar6 + 2;
    *puVar1 = 7;
    *(undefined1 *)((int)puVar1 + 3) = 0;
    *(int *)(puVar1 + 4) = iVar2;
    *(undefined4 *)(puVar1 + 6) = 0;
    *(undefined4 *)(puVar1 + 8) = 0;
  }
  iVar6 = piVar4[7];
  if ((iVar6 < piVar4[8]) || (iVar5 = FUN_0047de10(piVar4), iVar5 == 0)) {
    iVar5 = piVar4[1];
    piVar4[7] = piVar4[7] + 1;
    *(undefined2 *)(iVar5 + iVar6 * 0x14) = 7;
    *(undefined1 *)(iVar5 + 3 + iVar6 * 0x14) = 0;
    *(undefined4 *)(iVar5 + 4 + iVar6 * 0x14) = 0;
    *(int *)(iVar5 + 8 + iVar6 * 0x14) = iVar3;
    *(undefined4 *)(iVar5 + 0xc + iVar6 * 0x14) = 0;
    *(undefined4 *)(iVar5 + 0x10 + iVar6 * 0x14) = 0;
  }
  param_3[0] = 10;
  param_3[1] = 0;
  *(int *)(param_3 + 4) = iVar2;
  param_3[8] = 0;
  param_3[9] = 0;
  param_3[10] = 0;
  param_3[0xb] = 0;
  param_3[0xc] = 0;
  param_3[0xd] = 0;
  param_3[0xe] = 0;
  param_3[0xf] = 0;
  uVar7 = piVar4[7];
  if (((int)uVar7 < piVar4[8]) || (iVar6 = FUN_0047de10(piVar4), iVar6 == 0)) {
    iVar6 = piVar4[1];
    piVar4[7] = piVar4[7] + 1;
    *(undefined2 *)(iVar6 + uVar7 * 0x14) = 1;
    *(undefined1 *)(iVar6 + 3 + uVar7 * 0x14) = 0;
    *(undefined4 *)(iVar6 + 4 + uVar7 * 0x14) = 0;
    *(undefined4 *)(iVar6 + 8 + uVar7 * 0x14) = 0;
    *(undefined4 *)(iVar6 + 0xc + uVar7 * 0x14) = 0;
    *(undefined4 *)(iVar6 + 0x10 + uVar7 * 0x14) = 0;
  }
  else {
    uVar7 = 1;
  }
  iVar6 = FUN_004a7e30(param_1,param_2,param_3);
  if (*(char *)(*param_1 + 0x38) == '\0') {
    if (iVar6 == 0) {
      iVar6 = piVar4[7];
      if ((iVar6 < piVar4[8]) || (iVar5 = FUN_0047de10(piVar4), iVar5 == 0)) {
        iVar5 = piVar4[1];
        piVar4[7] = piVar4[7] + 1;
        *(undefined2 *)(iVar5 + iVar6 * 0x14) = 7;
        *(undefined1 *)(iVar5 + 3 + iVar6 * 0x14) = 0;
        *(undefined4 *)(iVar5 + 4 + iVar6 * 0x14) = 1;
        *(int *)(iVar5 + 8 + iVar6 * 0x14) = iVar3;
        *(undefined4 *)(iVar5 + 0xc + iVar6 * 0x14) = 0;
        *(undefined4 *)(iVar5 + 0x10 + iVar6 * 0x14) = 0;
      }
      FUN_004ae7d0(piVar4,4,iVar2);
      iVar2 = piVar4[7];
      if ((iVar2 < piVar4[8]) || (iVar3 = FUN_0047de10(piVar4), iVar3 == 0)) {
        iVar3 = piVar4[1];
        piVar4[7] = piVar4[7] + 1;
        *(undefined2 *)(iVar3 + iVar2 * 0x14) = 6;
        *(undefined1 *)(iVar3 + 3 + iVar2 * 0x14) = 0;
        *(undefined4 *)(iVar3 + 4 + iVar2 * 0x14) = 2;
        *(undefined4 *)(iVar3 + 8 + iVar2 * 0x14) = 2;
        *(undefined4 *)(iVar3 + 0xc + iVar2 * 0x14) = 0;
        *(undefined4 *)(iVar3 + 0x10 + iVar2 * 0x14) = 0;
      }
      if ((-1 < (int)uVar7) && (uVar7 < (uint)piVar4[7])) {
        *(int *)(piVar4[1] + 8 + uVar7 * 0x14) = piVar4[7];
      }
      return 0;
    }
    return iVar6;
  }
  if (iVar6 != 0) {
    return iVar6;
  }
  return 7;
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


/* FUN_00492ce0 @ 00492ce0  kind=lib  attributed-by=lib-island  size=144 */

int __cdecl FUN_00492ce0(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = (int *)param_1[2];
  if (piVar3 == (int *)0x0) {
    piVar3 = FUN_004af150(*param_1);
    param_1[2] = (int)piVar3;
    if (piVar3 != (int *)0x0) {
      FUN_004ae760(piVar3,0x94);
    }
  }
  iVar1 = param_1[0x15];
  param_1[0x15] = iVar1 + 1;
  iVar2 = piVar3[7];
  if (piVar3[8] <= iVar2) {
    iVar4 = FUN_0047de10(piVar3);
    if (iVar4 != 0) {
      return 1;
    }
  }
  iVar4 = piVar3[1];
  piVar3[7] = piVar3[7] + 1;
  *(int *)(iVar4 + 4 + iVar2 * 0x14) = iVar1;
  *(undefined2 *)(iVar4 + iVar2 * 0x14) = 0x1a;
  *(undefined1 *)(iVar4 + 3 + iVar2 * 0x14) = 0;
  *(undefined4 *)(iVar4 + 8 + iVar2 * 0x14) = 0;
  *(undefined4 *)(iVar4 + 0xc + iVar2 * 0x14) = 0;
  *(undefined4 *)(iVar4 + 0x10 + iVar2 * 0x14) = 0;
  return iVar2;
}


/* FUN_00492d70 @ 00492d70  kind=lib  attributed-by=lib-island  size=87 */

void __cdecl
FUN_00492d70(int *param_1,int *param_2,uint param_3,int *param_4,uint param_5,undefined4 param_6,
            undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  
  for (; param_2 != (int *)0x0; param_2 = (int *)param_2[8]) {
    if (((*(byte *)(param_2 + 2) == param_3) && (*(byte *)((int)param_2 + 9) == param_5)) &&
       (iVar1 = FUN_00471c90((undefined4 *)param_2[4],param_4), iVar1 != 0)) {
      FUN_00492dd0(param_1,param_2,param_6,param_7,param_8,param_9);
    }
  }
  return;
}


/* FUN_00492dd0 @ 00492dd0  kind=lib  attributed-by=lib-island  size=297 */

void __cdecl
FUN_00492dd0(int *param_1,int *param_2,int param_3,undefined4 param_4,int param_5,undefined4 param_6
            )

{
  undefined2 *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  piVar3 = param_1;
  piVar4 = (int *)param_1[2];
  if (piVar4 == (int *)0x0) {
    piVar4 = FUN_004af150(*param_1);
    param_1[2] = (int)piVar4;
    if (piVar4 != (int *)0x0) {
      FUN_004ae760(piVar4,0x94);
    }
  }
  piVar5 = FUN_0047d6f0(param_1,param_2,param_3,param_5);
  if (piVar5 != (int *)0x0) {
    if ((*param_2 == 0) ||
       (iVar2 = *param_1, param_1._0_1_ = 1, (*(uint *)(iVar2 + 0x18) & 0x20000) != 0)) {
      param_1._0_1_ = 0;
    }
    iVar7 = piVar3[0x13] + 1;
    piVar3[0x13] = iVar7;
    iVar2 = piVar4[7];
    if ((iVar2 < piVar4[8]) || (iVar6 = FUN_0047de10(piVar4), iVar6 == 0)) {
      piVar4[7] = piVar4[7] + 1;
      puVar1 = (undefined2 *)(piVar4[1] + iVar2 * 0x14);
      *(undefined4 *)(puVar1 + 2) = param_4;
      *puVar1 = 0x73;
      *(undefined1 *)((int)puVar1 + 3) = 0;
      *(undefined4 *)(puVar1 + 4) = param_6;
      *(int *)(puVar1 + 6) = iVar7;
      *(undefined4 *)(puVar1 + 8) = 0;
    }
    iVar2 = piVar4[1];
    piVar3 = (int *)piVar5[2];
    iVar7 = *piVar4;
    if ((iVar2 == 0) || (*(char *)(iVar7 + 0x38) != '\0')) {
      FUN_0047bc80(iVar7,0xffffffee,piVar3);
    }
    else {
      iVar6 = iVar2 + (piVar4[7] + -1) * 0x14;
      FUN_0047bc80(iVar7,(int)*(char *)(iVar6 + 1),*(int **)(iVar2 + 0x10 + (piVar4[7] + -1) * 0x14)
                  );
      *(undefined4 *)(iVar6 + 0x10) = 0;
      if (piVar3 == (int *)0x0) {
        *(undefined4 *)(iVar6 + 0x10) = 0;
        *(undefined1 *)(iVar6 + 1) = 0;
      }
      else {
        *(int **)(iVar6 + 0x10) = piVar3;
        *(undefined1 *)(iVar6 + 1) = 0xee;
      }
    }
    if (piVar4[1] != 0) {
      *(undefined1 *)(piVar4[1] + -0x11 + piVar4[7] * 0x14) = param_1._0_1_;
    }
    return;
  }
  return;
}


/* FUN_00492f00 @ 00492f00  kind=lib  attributed-by=lib-island  size=1120 */

void __cdecl FUN_00492f00(int *param_1,char *param_2,int param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  byte *extraout_EDX;
  byte *pbVar6;
  undefined1 uVar7;
  int local_54;
  int local_50;
  int local_4c;
  char *local_48;
  int *local_44;
  int *local_40;
  byte *local_3c;
  uint local_38;
  undefined4 *local_34;
  char local_2d;
  code *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  piVar1 = (int *)param_1[2];
  local_38 = 0xffffffff;
  local_44 = (int *)0x0;
  if (piVar1 == (int *)0x0) {
    piVar1 = FUN_004af150(*param_1);
    param_1[2] = (int)piVar1;
    if (piVar1 == (int *)0x0) goto LAB_00492ffe;
    FUN_004ae760(piVar1,0x94);
  }
  param_1[0x17] = param_1[0x17] + 1;
  if ((param_2[2] & 0x20U) == 0) {
    local_38 = FUN_00492ce0(param_1);
  }
  if ((char)param_1[0x75] == '\x02') {
    piVar2 = (int *)FUN_004a02d0(*param_1,(byte *)"EXECUTE %s%s SUBQUERY %d");
    FUN_004ae8f0(piVar1,0x96,param_1[0x79],0,0,piVar2,0xffffffff);
  }
  if (*param_2 == 'H') {
    local_48 = *(char **)(param_2 + 8);
    if (param_3 != 0) {
      FUN_004ae830(piVar1,10,0,param_3);
    }
    local_2d = FUN_00496480(local_48);
    *(int *)(param_2 + 0x18) = param_1[0x12];
    param_1[0x12] = param_1[0x12] + 1;
    local_50 = FUN_004ae830(piVar1,0x2a,*(undefined4 *)(param_2 + 0x18),(uint)(param_4 == 0));
    if ((param_3 == 0) && (piVar1[1] != 0)) {
      *(undefined1 *)(piVar1[1] + -0x11 + piVar1[7] * 0x14) = 8;
    }
    local_18 = 0x1000000000000;
    local_10 = 0x583e7c;
    if ((*(ushort *)(param_2 + 2) & 0x800) == 0) {
      local_40 = *(int **)(param_2 + 0x10);
      if (local_40 != (int *)0x0) {
        if (local_2d == '\0') {
          local_2d = 'b';
        }
        uVar5 = FUN_004984d0(param_1,*(char **)(param_2 + 8));
        local_10 = CONCAT44(uVar5,&DAT_00583e7c);
        local_48 = (char *)FUN_0049cb40((int)param_1);
        local_34 = (undefined4 *)FUN_0049cb40((int)param_1);
        FUN_004ae830(piVar1,10,0,local_34);
        local_4c = *local_40;
        local_40 = (int *)local_40[2];
        for (; 0 < local_4c; local_4c = local_4c + -1) {
          local_3c = (byte *)*local_40;
          if (-1 < (int)local_38) {
            local_1c = 1;
            local_2c = FUN_00478e60;
            local_28 = FUN_0048b2c0;
            FUN_004bb020(&local_2c,(int)local_3c);
            if (local_1c == 0) {
              FUN_004aee50(piVar1,local_38);
              local_38 = 0xffffffff;
            }
          }
          pbVar6 = local_3c;
          if ((param_4 == 0) ||
             (iVar3 = FUN_00498e90((char *)local_3c,&local_54), pbVar6 = extraout_EDX, iVar3 == 0))
          {
            local_3c = (byte *)FUN_00497780(param_1,pbVar6,(int)local_48);
            if (param_4 == 0) {
              FUN_004ae8f0(piVar1,0x1f,local_3c,1,local_34,(int *)&local_2d,1);
              FUN_00496d90((int)param_1,(int)local_3c,1);
              FUN_004ae830(piVar1,0x61,*(undefined4 *)(param_2 + 0x18),local_34);
            }
            else {
              FUN_004ae830(piVar1,0x15,local_3c,piVar1[7] + 2);
              FUN_004ae890(piVar1,0x39,*(undefined4 *)(param_2 + 0x18),local_34,local_3c);
            }
          }
          else {
            FUN_004ae890(piVar1,0x3a,*(undefined4 *)(param_2 + 0x18),local_34,local_54);
          }
          local_40 = local_40 + 5;
        }
        FUN_004a68f0((int)param_1,(int)local_48);
        FUN_004a68f0((int)param_1,(int)local_34);
      }
    }
    else {
      local_24 = *(undefined4 *)(param_2 + 0x18);
      local_28 = (code *)CONCAT31(CONCAT21(local_28._2_2_,local_2d),7);
      local_20 = 0;
      local_1c = 0;
      *(undefined4 *)(*(int *)(param_2 + 0x10) + 8) = 0;
      iVar3 = FUN_004a7e30(param_1,*(int **)(param_2 + 0x10),(byte *)&local_28);
      if (iVar3 != 0) goto LAB_00492ffe;
      piVar2 = (int *)**(int **)(param_2 + 0x10);
      if ((piVar2 != (int *)0x0) && (0 < *piVar2)) {
        uVar4 = FUN_0048e620(param_1,*(char **)(param_2 + 8),*(char **)piVar2[2]);
        local_10 = CONCAT44(uVar4,(undefined4)local_10);
      }
    }
    if (param_4 == 0) {
      FUN_004aecc0(piVar1,local_50,(int *)&local_18,0xfffffffa);
    }
  }
  else {
    local_44 = *(int **)(param_2 + 0x10);
    iVar3 = param_1[0x13] + 1;
    param_1[0x13] = iVar3;
    local_18 = CONCAT44(iVar3,(int)local_18);
    local_18._1_7_ = (uint7)((ulonglong)local_18 >> 8) & 0xffffffffffff00;
    local_10 = 0;
    if (*param_2 == 't') {
      local_18 = CONCAT71(local_18._1_7_,6);
      uVar7 = 10;
    }
    else {
      local_18 = CONCAT71(local_18._1_7_,3);
      uVar7 = 7;
    }
    FUN_004ae830(piVar1,uVar7,0,iVar3);
    piVar2 = local_44;
    FUN_00498790(*param_1,(undefined4 *)local_44[0x12]);
    local_34 = FUN_00496510(*param_1,0x81,&PTR_DAT_00569828,1);
    FUN_00496a30(*param_1,(int)local_34,(undefined4 *)0x0,(undefined4 *)0x0);
    if ((local_34 != (undefined4 *)0x0) && (*(int *)(*param_1 + 0x5c) < (int)local_34[5])) {
      FUN_004962b0(param_1,(byte *)"Expression tree is too large (maximum depth %d)");
    }
    piVar2[0x12] = (int)local_34;
    piVar2[2] = 0;
    iVar3 = FUN_004a7e30(param_1,piVar2,(byte *)&local_18);
    if (iVar3 != 0) {
LAB_00492ffe:
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    local_44 = local_18._4_4_;
  }
  if ((-1 < (int)local_38) && (local_38 < (uint)piVar1[7])) {
    *(int *)(piVar1[1] + 8 + local_38 * 0x14) = piVar1[7];
  }
  FUN_00496d40((int)param_1,1);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00493360 @ 00493360  kind=lib  attributed-by=lib-island  size=155 */

void __cdecl FUN_00493360(int *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  
  iVar3 = *param_1;
  iVar7 = 0;
  if (0 < *(int *)(iVar3 + 0x14)) {
    iVar5 = 0;
    do {
      if (*(int *)(*(int *)(iVar3 + 0x10) + 4 + iVar5) != 0) {
        if (param_2 != (byte *)0x0) {
          pbVar6 = *(byte **)(*(int *)(iVar3 + 0x10) + iVar5);
          bVar2 = *param_2;
          pbVar4 = param_2;
          while ((bVar2 != 0 && ((&DAT_00569620)[bVar2] == (&DAT_00569620)[*pbVar6]))) {
            pbVar1 = pbVar4 + 1;
            pbVar4 = pbVar4 + 1;
            pbVar6 = pbVar6 + 1;
            bVar2 = *pbVar1;
          }
          if ((&DAT_00569620)[*pbVar4] != (&DAT_00569620)[*pbVar6]) goto LAB_004933eb;
        }
        FUN_00493400(param_1,iVar7);
      }
LAB_004933eb:
      iVar7 = iVar7 + 1;
      iVar5 = iVar5 + 0x10;
    } while (iVar7 < *(int *)(iVar3 + 0x14));
  }
  return;
}


/* FUN_00493400 @ 00493400  kind=lib  attributed-by=lib-island  size=181 */

void __cdecl FUN_00493400(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  piVar1 = (int *)param_1[0x6c];
  piVar4 = param_1;
  if ((piVar1 != (int *)0x0) && (piVar4 = piVar1, piVar1 != param_1)) {
    param_1[0x57] = -1;
  }
  if (piVar4[0x57] == 0) {
    piVar1 = (int *)piVar4[2];
    if (piVar1 == (int *)0x0) {
      piVar1 = FUN_004af150(*piVar4);
      piVar4[2] = (int)piVar1;
      if (piVar1 == (int *)0x0) {
        return;
      }
      FUN_004ae760(piVar1,0x94);
    }
    iVar2 = FUN_004ae830(piVar1,1,0,0);
    piVar4[0x57] = iVar2 + 1;
  }
  if (-1 < param_2) {
    uVar3 = 1 << ((byte)param_2 & 0x1f);
    if ((uVar3 & piVar4[0x56]) == 0) {
      piVar4[0x56] = piVar4[0x56] | uVar3;
      piVar4[param_2 + 0x58] = **(int **)(*(int *)(*piVar4 + 0x10) + 0xc + param_2 * 0x10);
      if (param_2 == 1) {
        FUN_004a11c0(piVar4);
      }
    }
  }
  return;
}


/* FUN_004934c0 @ 004934c0  kind=lib  attributed-by=lib-island  size=359 */

void __cdecl FUN_004934c0(int param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_8;
  
  iVar5 = param_1;
  iVar8 = 2;
  iVar7 = 2;
  if (2 < *(int *)(param_1 + 0x14)) {
    param_1 = 0x20;
    local_8 = 0x20;
    do {
      iVar2 = *(int *)(iVar5 + 0x10);
      if (*(int *)(local_8 + 4 + iVar2) == 0) {
        puVar3 = *(undefined4 **)(local_8 + iVar2);
        if (*(int *)(iVar5 + 0x1f0) == 0) {
          if (((puVar3 == (undefined4 *)0x0) || (puVar3 < *(undefined4 **)(iVar5 + 0x104))) ||
             (*(undefined4 **)(iVar5 + 0x108) <= puVar3)) {
            FUN_00466dd0((int)puVar3);
          }
          else {
            *puVar3 = *(undefined4 *)(iVar5 + 0x100);
            *(int *)(iVar5 + 0xec) = *(int *)(iVar5 + 0xec) + -1;
            *(undefined4 **)(iVar5 + 0x100) = puVar3;
          }
        }
        else if (((puVar3 == (undefined4 *)0x0) || (puVar3 < *(undefined4 **)(iVar5 + 0x104))) ||
                (*(undefined4 **)(iVar5 + 0x108) <= puVar3)) {
          iVar6 = (*DAT_00582af0._4_4_)(puVar3);
          **(int **)(iVar5 + 0x1f0) = **(int **)(iVar5 + 0x1f0) + iVar6;
        }
        else {
          **(int **)(iVar5 + 0x1f0) = **(int **)(iVar5 + 0x1f0) + (uint)*(ushort *)(iVar5 + 0xe8);
        }
        *(undefined4 *)(local_8 + iVar2) = 0;
      }
      else {
        if (iVar8 < iVar7) {
          *(undefined8 *)(param_1 + iVar2) = *(undefined8 *)(local_8 + iVar2);
          *(undefined8 *)(param_1 + 8 + iVar2) = *(undefined8 *)(local_8 + 8 + iVar2);
        }
        iVar8 = iVar8 + 1;
        param_1 = param_1 + 0x10;
      }
      iVar7 = iVar7 + 1;
      local_8 = local_8 + 0x10;
    } while (iVar7 < *(int *)(iVar5 + 0x14));
  }
  memset((void *)(iVar8 * 0x10 + *(int *)(iVar5 + 0x10)),0,(*(int *)(iVar5 + 0x14) - iVar8) * 0x10);
  *(int *)(iVar5 + 0x14) = iVar8;
  if (iVar8 < 3) {
    puVar4 = *(undefined8 **)(iVar5 + 0x10);
    puVar1 = (undefined8 *)(iVar5 + 0x1b8);
    if (puVar4 != puVar1) {
      *puVar1 = *puVar4;
      *(undefined8 *)(iVar5 + 0x1c0) = puVar4[1];
      *(undefined8 *)(iVar5 + 0x1c8) = puVar4[2];
      *(undefined8 *)(iVar5 + 0x1d0) = puVar4[3];
      FUN_00494b00(iVar5,(undefined4 *)puVar4);
      *(undefined8 **)(iVar5 + 0x10) = puVar1;
    }
  }
  return;
}


/* FUN_00493630 @ 00493630  kind=lib  attributed-by=lib-island  size=184 */

void __cdecl FUN_00493630(int *param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  piVar4 = param_2;
  if (param_2[3] == 0) {
    iVar5 = param_3 * 0x18;
    FUN_004ae300(*param_1,*(char **)(param_2[1] + 4 + iVar5),
                 (uint)*(byte *)(*(int *)(*(int *)(*param_1 + 0x10) + 0xc) + 0x4d),
                 (uint)*(byte *)(param_2[1] + 0x15 + iVar5),&param_2);
    if (param_2 != (int *)0x0) {
      iVar2 = param_1[1];
      iVar3 = *param_1;
      if ((iVar2 == 0) || (*(char *)(iVar3 + 0x38) != '\0')) {
        FUN_0047bc80(iVar3,0xfffffff8,param_2);
      }
      else {
        iVar1 = iVar2 + (param_1[7] + -1) * 0x14;
        FUN_0047bc80(iVar3,(int)*(char *)(iVar1 + 1),
                     *(int **)(iVar2 + 0x10 + (param_1[7] + -1) * 0x14));
        *(int **)(iVar1 + 0x10) = param_2;
        *(undefined1 *)(iVar1 + 1) = 0xf8;
      }
    }
    if ((-1 < param_4) && (*(char *)(iVar5 + 0x15 + piVar4[1]) == 'e')) {
      FUN_004ae7d0(param_1,0x16,param_4);
    }
  }
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


/* FUN_00493750 @ 00493750  kind=lib  attributed-by=lib-island  size=56 */

int __cdecl FUN_00493750(char *param_1,char param_2)

{
  char cVar1;
  undefined3 extraout_var;
  
  cVar1 = FUN_00496480(param_1);
  if (cVar1 == '\0') {
    if (param_2 != '\0') goto LAB_0049377e;
  }
  else {
    if (param_2 == '\0') {
LAB_0049377e:
      return (int)cVar1 + (int)param_2;
    }
    if (('b' < cVar1) || ('b' < param_2)) {
      return CONCAT31(extraout_var,99);
    }
  }
  return CONCAT31(extraout_var,0x62);
}


/* FUN_00493790 @ 00493790  kind=lib  attributed-by=lib-island  size=854 */

void __cdecl
FUN_00493790(int *param_1,undefined4 *param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,int param_8)

{
  undefined2 *puVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  byte bVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int local_8;
  
  piVar4 = param_1;
  piVar6 = (int *)param_1[2];
  if (piVar6 == (int *)0x0) {
    piVar6 = FUN_004af150(*param_1);
    param_1[2] = (int)piVar6;
    if (piVar6 != (int *)0x0) {
      FUN_004ae760(piVar6,0x94);
    }
  }
  iVar11 = 0;
  for (iVar12 = param_2[2]; iVar12 != 0; iVar12 = *(int *)(iVar12 + 0x14)) {
    iVar11 = iVar11 + 1;
  }
  while (iVar11 = iVar11 + -1, -1 < iVar11) {
    iVar12 = *(int *)(param_5 + iVar11 * 4);
    if (iVar12 != 0) {
      iVar3 = piVar6[7];
      if ((iVar3 < piVar6[8]) || (iVar7 = FUN_0047de10(piVar6), iVar7 == 0)) {
        piVar6[7] = piVar6[7] + 1;
        puVar1 = (undefined2 *)(piVar6[1] + iVar3 * 0x14);
        *(int *)(puVar1 + 2) = param_3 + 1 + iVar11;
        *puVar1 = 0x61;
        *(undefined1 *)((int)puVar1 + 3) = 0;
        *(int *)(puVar1 + 4) = iVar12;
        *(undefined4 *)(puVar1 + 6) = 0;
        *(undefined4 *)(puVar1 + 8) = 0;
      }
      if ((param_8 != 0) && (piVar6[1] != 0)) {
        *(undefined1 *)(piVar6[1] + -0x11 + piVar6[7] * 0x14) = 0x10;
      }
    }
  }
  if (*(char *)((int)param_1 + 0x13) == '\0') {
    param_1[0x13] = param_1[0x13] + 1;
    local_8 = param_1[0x13];
  }
  else {
    bVar5 = *(char *)((int)param_1 + 0x13) - 1;
    *(byte *)((int)param_1 + 0x13) = bVar5;
    local_8 = param_1[bVar5 + 7];
  }
  sVar2 = *(short *)((int)param_2 + 0x26);
  iVar12 = piVar6[7];
  iVar11 = piVar6[8];
  if (iVar12 < iVar11) {
LAB_004938f6:
    iVar11 = piVar6[1];
    piVar6[7] = piVar6[7] + 1;
    *(int *)(iVar11 + 4 + iVar12 * 0x14) = param_4 + 1;
    *(int *)(iVar11 + 8 + iVar12 * 0x14) = (int)sVar2;
    *(undefined2 *)(iVar11 + iVar12 * 0x14) = 0x1f;
    *(undefined1 *)(iVar11 + 3 + iVar12 * 0x14) = 0;
    *(int *)(iVar11 + 0xc + iVar12 * 0x14) = local_8;
    *(undefined4 *)(iVar11 + 0x10 + iVar12 * 0x14) = 0;
  }
  else {
    if (iVar11 == 0) {
      iVar11 = 0x33;
    }
    else {
      iVar11 = iVar11 * 2;
    }
    puVar8 = FUN_00494cf0(*piVar6,(undefined4 *)piVar6[1],iVar11 * 0x14);
    if (puVar8 != (undefined4 *)0x0) {
      iVar11 = *piVar6;
      if (((iVar11 == 0) || (puVar8 < *(undefined4 **)(iVar11 + 0x104))) ||
         (*(undefined4 **)(iVar11 + 0x108) <= puVar8)) {
        uVar9 = (*DAT_00582af0._4_4_)(puVar8);
      }
      else {
        uVar9 = (uint)*(ushort *)(iVar11 + 0xe8);
      }
      piVar6[8] = uVar9 / 0x14;
      piVar6[1] = (int)puVar8;
      goto LAB_004938f6;
    }
  }
  FUN_004aaa40(piVar6,(int)param_2);
  sVar2 = *(short *)((int)param_2 + 0x26);
  piVar10 = param_1 + 0x1d;
  iVar12 = 10;
  do {
    iVar11 = *piVar10;
    if ((param_4 + 1 <= iVar11) && (iVar11 <= sVar2 + param_4)) {
      if ((char)piVar10[-2] != '\0') {
        if (*(byte *)((int)param_1 + 0x13) < 8) {
          param_1[*(byte *)((int)param_1 + 0x13) + 7] = iVar11;
          *(char *)((int)param_1 + 0x13) = *(char *)((int)param_1 + 0x13) + '\x01';
        }
        *(undefined1 *)(piVar10 + -2) = 0;
      }
      *piVar10 = 0;
    }
    piVar10 = piVar10 + 6;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  if (*(char *)((int)param_1 + 0x12) == '\0') {
    param_1._0_1_ = (param_6 != 0) * '\x02' + 2U | 1;
  }
  else {
    param_1._0_1_ = 0;
  }
  if (param_7 != 0) {
    param_1._0_1_ = (byte)param_1 | 8;
  }
  if (param_8 != 0) {
    param_1._0_1_ = (byte)param_1 | 0x10;
  }
  iVar12 = piVar6[7];
  iVar11 = piVar6[8];
  if (iVar11 <= iVar12) {
    if (iVar11 == 0) {
      iVar11 = 0x33;
    }
    else {
      iVar11 = iVar11 * 2;
    }
    puVar8 = FUN_00494cf0(*piVar6,(undefined4 *)piVar6[1],iVar11 * 0x14);
    if (puVar8 == (undefined4 *)0x0) goto LAB_00493a5e;
    iVar11 = *piVar6;
    if (((iVar11 == 0) || (puVar8 < *(undefined4 **)(iVar11 + 0x104))) ||
       (*(undefined4 **)(iVar11 + 0x108) <= puVar8)) {
      uVar9 = (*DAT_00582af0._4_4_)(puVar8);
    }
    else {
      uVar9 = (uint)*(ushort *)(iVar11 + 0xe8);
    }
    piVar6[8] = uVar9 / 0x14;
    piVar6[1] = (int)puVar8;
  }
  iVar11 = piVar6[1];
  piVar6[7] = piVar6[7] + 1;
  *(int *)(iVar11 + 4 + iVar12 * 0x14) = param_3;
  *(int *)(iVar11 + 8 + iVar12 * 0x14) = local_8;
  *(undefined2 *)(iVar11 + iVar12 * 0x14) = 0x39;
  *(undefined1 *)(iVar11 + 3 + iVar12 * 0x14) = 0;
  *(int *)(iVar11 + 0xc + iVar12 * 0x14) = param_4;
  *(undefined4 *)(iVar11 + 0x10 + iVar12 * 0x14) = 0;
LAB_00493a5e:
  if (*(char *)((int)piVar4 + 0x12) == '\0') {
    iVar12 = piVar6[1];
    piVar4 = (int *)*param_2;
    iVar11 = *piVar6;
    if ((iVar12 == 0) || (*(char *)(iVar11 + 0x38) != '\0')) {
      FUN_0047bc80(iVar11,0,piVar4);
    }
    else {
      iVar3 = iVar12 + (piVar6[7] + -1) * 0x14;
      FUN_0047bc80(iVar11,(int)*(char *)(iVar3 + 1),
                   *(int **)(iVar12 + 0x10 + (piVar6[7] + -1) * 0x14));
      *(undefined4 *)(iVar3 + 0x10) = 0;
      if (piVar4 == (int *)0x0) {
        *(undefined4 *)(iVar3 + 0x10) = 0;
        *(undefined1 *)(iVar3 + 1) = 0;
      }
      else {
        uVar9 = FUN_004aa9b0((char *)piVar4);
        puVar8 = FUN_00494e00(*piVar6,piVar4,uVar9);
        *(undefined4 **)(iVar3 + 0x10) = puVar8;
        *(undefined1 *)(iVar3 + 1) = 0xff;
      }
    }
  }
  if (piVar6[1] != 0) {
    *(byte *)(piVar6[1] + -0x11 + piVar6[7] * 0x14) = (byte)param_1;
  }
  return;
}


/* FUN_00493af0 @ 00493af0  kind=lib  attributed-by=lib-island  size=33 */

undefined4 FUN_00493af0(void)

{
  FUN_004683f0(0xb,"database corruption at line %d of [%.10s]");
  return 0xb;
}


/* FUN_00493b20 @ 00493b20  kind=lib  attributed-by=lib-island  size=167 */

undefined4 * __cdecl FUN_00493b20(int param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  undefined4 *_Dst;
  uint uVar2;
  uint uVar3;
  
  _Dst = FUN_00494b90(param_1,0x2c);
  if (_Dst != (undefined4 *)0x0) {
    memset(_Dst,0,0x2c);
    iVar1 = param_2 + param_3 * 0x48;
    *(undefined1 *)_Dst = 0x98;
    *(undefined2 *)((int)_Dst + 0x1e) = 0xffff;
    _Dst[5] = 1;
    _Dst[10] = *(undefined4 *)(iVar1 + 0x18);
    _Dst[6] = *(undefined4 *)(iVar1 + 0x34);
    if ((int)*(short *)(_Dst[10] + 0x24) == param_4) {
      *(ushort *)((int)_Dst + 2) = *(ushort *)((int)_Dst + 2) | 4;
      *(undefined2 *)(_Dst + 7) = 0xffff;
      return _Dst;
    }
    *(short *)(_Dst + 7) = (short)param_4;
    if (0x3f < (int)param_4) {
      param_4 = 0x3f;
    }
    uVar2 = 1 << (param_4 & 0x1f);
    uVar3 = 0;
    if (0x1f < param_4) {
      uVar3 = uVar2;
    }
    uVar2 = uVar2 ^ uVar3;
    if (0x3f < param_4) {
      uVar3 = uVar2;
    }
    *(uint *)(iVar1 + 0x40) = *(uint *)(iVar1 + 0x40) | uVar2;
    *(uint *)(iVar1 + 0x44) = *(uint *)(iVar1 + 0x44) | uVar3;
    *(ushort *)((int)_Dst + 2) = *(ushort *)((int)_Dst + 2) | 4;
  }
  return _Dst;
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


/* FUN_00493f20 @ 00493f20  kind=lib  attributed-by=lib-island  size=461 */

int __cdecl
FUN_00493f20(int param_1,byte *param_2,int param_3,uint param_4,undefined4 param_5,int param_6,
            int param_7,int param_8,int *param_9)

{
  uint uVar1;
  short *psVar2;
  int iVar3;
  byte *extraout_EDX;
  byte *pbVar4;
  uint extraout_EDX_00;
  
  if (param_2 == (byte *)0x0) goto LAB_00494001;
  if (param_6 == 0) {
    if (param_8 == 0) goto LAB_00493f46;
    if (param_7 == 0) goto LAB_00494001;
  }
  else {
    if (param_8 != 0) goto LAB_00494001;
LAB_00493f46:
    if (param_7 != 0) goto LAB_00494001;
  }
  if ((param_3 + 1U < 0x81) && (uVar1 = FUN_004aa9b0((char *)param_2), (int)uVar1 < 0x100)) {
    pbVar4 = extraout_EDX;
    if (param_4 == 4) {
      param_4 = 2;
    }
    else if (param_4 == 5) {
      iVar3 = FUN_00493f20(param_1,extraout_EDX,param_3,1,param_5,param_6,param_7,param_8,param_9);
      if (iVar3 != 0) {
        return iVar3;
      }
      iVar3 = FUN_00493f20(param_1,param_2,param_3,2,param_5,param_6,param_7,param_8,param_9);
      if (iVar3 != 0) {
        return iVar3;
      }
      param_4 = 3;
      pbVar4 = param_2;
    }
    psVar2 = FUN_004995c0(param_1,pbVar4,uVar1,param_3,(byte)param_4,'\0');
    if (((psVar2 != (short *)0x0) && (*(byte *)(psVar2 + 1) == param_4)) && (*psVar2 == param_3)) {
      if (*(int *)(param_1 + 0x84) != 0) {
        FUN_004961f0(param_1,5,
                     (byte *)"unable to delete/modify user-function due to active statements");
        return 5;
      }
      FUN_00496370(param_1);
      param_4 = extraout_EDX_00;
    }
    psVar2 = FUN_004995c0(param_1,param_2,uVar1,param_3,(byte)param_4,'\x01');
    if (psVar2 == (short *)0x0) {
      return 7;
    }
    FUN_0047c360(param_1,(int)psVar2);
    if (param_9 != (int *)0x0) {
      *param_9 = *param_9 + 1;
    }
    *(int **)(psVar2 + 0x10) = param_9;
    *(int *)(psVar2 + 6) = param_6;
    *(int *)(psVar2 + 10) = param_8;
    *(undefined4 *)(psVar2 + 2) = param_5;
    *(int *)(psVar2 + 8) = param_7;
    *psVar2 = (short)param_3;
    *(undefined1 *)((int)psVar2 + 3) = 0;
    return 0;
  }
LAB_00494001:
  FUN_004683f0(0x15,"misuse at line %d of [%.10s]");
  return 0x15;
}


